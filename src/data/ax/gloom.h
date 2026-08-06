/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainGloom;
const SiroArchive gAxGloom = {"SIRO", &sAxMainGloom};

static const ax_pose sGloomPose1[] = {
	AX_POSE(0, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose3[] = {
	AX_POSE(2, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose4[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose5[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose6[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose8[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose10[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose11[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose12[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose13[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose14[] = {
	AX_POSE(13, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose15[] = {
	AX_POSE(14, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose16[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose17[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose18[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose19[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose20[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose21[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose22[] = {
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose23[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose24[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose28[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose29[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose33[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose34[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose38[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose39[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose43[] = {
	AX_POSE(27, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose44[] = {
	AX_POSE(28, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose46[] = {
	AX_POSE(13, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose47[] = {
	AX_POSE(14, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose48[] = {
	AX_POSE(29, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose49[] = {
	AX_POSE(30, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose53[] = {
	AX_POSE(27, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose54[] = {
	AX_POSE(28, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose58[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose59[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose63[] = {
	AX_POSE(32, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose64[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose110[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose113[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose125[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose128[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose137[] = {
	AX_POSE(33, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose138[] = {
	AX_POSE(34, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose139[] = {
	AX_POSE(35, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose140[] = {
	AX_POSE(36, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose141[] = {
	AX_POSE(37, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose142[] = {
	AX_POSE(38, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose143[] = {
	AX_POSE(39, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose144[] = {
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose145[] = {
	AX_POSE(41, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose146[] = {
	AX_POSE(42, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose173[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose174[] = {
	AX_POSE(28, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose175[] = {
	AX_POSE(30, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGloomPose176[] = {
	AX_POSE(28, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_anim sGloomAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 25, .offset = {0, 14}, .shadow = {0, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 28, .offset = {1, 20}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {1, 20}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 4}, .shadow = {0, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {5, 6}, .shadow = {5, 6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 30, .offset = {12, 14}, .shadow = {12, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {16, 20}, .shadow = {16, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 33, .offset = {17, 19}, .shadow = {17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {16, 20}, .shadow = {16, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {17, 19}, .shadow = {17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {16, 20}, .shadow = {16, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {10, 13}, .shadow = {10, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {4, 4}, .shadow = {4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {5, -6}, .shadow = {5, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 40, .offset = {12, -14}, .shadow = {12, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {16, -20}, .shadow = {16, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 43, .offset = {17, -19}, .shadow = {17, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {16, -20}, .shadow = {16, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {17, -19}, .shadow = {17, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {16, -20}, .shadow = {16, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {11, -12}, .shadow = {11, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {4, -4}, .shadow = {4, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 45, .offset = {0, -14}, .shadow = {0, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 48, .offset = {1, -22}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, -22}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, -4}, .shadow = {0, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {-5, -6}, .shadow = {-5, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 50, .offset = {-12, -14}, .shadow = {-12, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-16, -20}, .shadow = {-16, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 53, .offset = {-17, -19}, .shadow = {-17, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-16, -20}, .shadow = {-16, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-17, -19}, .shadow = {-17, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-16, -20}, .shadow = {-16, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-11, -12}, .shadow = {-11, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-4, -4}, .shadow = {-4, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {-5, 6}, .shadow = {-5, 6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 60, .offset = {-12, 14}, .shadow = {-12, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-16, 20}, .shadow = {-16, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 63, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-16, 20}, .shadow = {-16, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-16, 20}, .shadow = {-16, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {-10, 13}, .shadow = {-10, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {-4, 4}, .shadow = {-4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 65, .offset = {0, 14}, .shadow = {0, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 68, .offset = {1, 20}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {1, 20}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 4}, .shadow = {0, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {5, 6}, .shadow = {5, 6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 70, .offset = {12, 14}, .shadow = {12, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {16, 20}, .shadow = {16, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 73, .offset = {17, 19}, .shadow = {17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {16, 20}, .shadow = {16, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {17, 19}, .shadow = {17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {16, 20}, .shadow = {16, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {10, 13}, .shadow = {10, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {4, 4}, .shadow = {4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 81, .offset = {5, -6}, .shadow = {5, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 80, .offset = {12, -14}, .shadow = {12, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {16, -20}, .shadow = {16, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {17, -19}, .shadow = {17, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {16, -20}, .shadow = {16, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {17, -19}, .shadow = {17, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {16, -20}, .shadow = {16, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {11, -12}, .shadow = {11, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {4, -4}, .shadow = {4, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 86, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 85, .offset = {0, -14}, .shadow = {0, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 88, .offset = {1, -22}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {1, -22}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -4}, .shadow = {0, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {-5, -6}, .shadow = {-5, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 90, .offset = {-12, -14}, .shadow = {-12, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-16, -20}, .shadow = {-16, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 93, .offset = {-17, -19}, .shadow = {-17, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-16, -20}, .shadow = {-16, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-17, -19}, .shadow = {-17, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-16, -20}, .shadow = {-16, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-11, -12}, .shadow = {-11, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-4, -4}, .shadow = {-4, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {-5, 6}, .shadow = {-5, 6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 100, .offset = {-12, 14}, .shadow = {-12, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-16, 20}, .shadow = {-16, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-16, 20}, .shadow = {-16, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-16, 20}, .shadow = {-16, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-10, 13}, .shadow = {-10, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-4, 4}, .shadow = {-4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_8_1[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_8_2[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_8_3[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_8_4[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_8_5[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_8_6[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_8_7[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_8_8[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {7, 16}, .shadow = {7, 16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 174, .offset = {0, 21}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 175, .offset = {-7, 16}, .shadow = {-7, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-8, 9}, .shadow = {-8, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {19, 3}, .shadow = {19, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {23, 10}, .shadow = {23, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 173, .offset = {21, 20}, .shadow = {21, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 174, .offset = {11, 21}, .shadow = {11, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {18, -5}, .shadow = {18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 172, .offset = {22, -2}, .shadow = {22, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 173, .offset = {18, 4}, .shadow = {18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {12, 5}, .shadow = {12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {-1, -6}, .shadow = {-1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {12, -22}, .shadow = {12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 171, .offset = {21, -23}, .shadow = {21, -23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 172, .offset = {22, -15}, .shadow = {22, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {7, 1}, .shadow = {7, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-7, -18}, .shadow = {-7, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 170, .offset = {0, -23}, .shadow = {0, -23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 171, .offset = {7, -18}, .shadow = {7, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {9, -10}, .shadow = {9, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-12, -22}, .shadow = {-12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 177, .offset = {-21, -23}, .shadow = {-21, -23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 176, .offset = {-22, -15}, .shadow = {-22, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {-7, 1}, .shadow = {-7, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-18, -5}, .shadow = {-18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 176, .offset = {-22, -2}, .shadow = {-22, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 175, .offset = {-18, 4}, .shadow = {-18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {-12, 5}, .shadow = {-12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-19, 3}, .shadow = {-19, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-23, 10}, .shadow = {-23, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 175, .offset = {-21, 20}, .shadow = {-21, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 174, .offset = {-11, 21}, .shadow = {-11, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 187, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 187, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 186, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 188, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 190, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 190, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 189, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 191, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGloomAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 207, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 208, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 208, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 208, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 208, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 207, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 209, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 209, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 209, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 209, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sGloomGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_1.4bpp.lz");
static const ax_sprite sGloomSprites1[] = {
	{sGloomGfx1, ARRAY_COUNT(sGloomGfx1)}, 
	{NULL, 0}
};
static const u8 sGloomGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_2.4bpp.lz");
static const ax_sprite sGloomSprites2[] = {
	{sGloomGfx2, ARRAY_COUNT(sGloomGfx2)}, 
	{NULL, 0}
};
static const u8 sGloomGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_3.4bpp.lz");
static const ax_sprite sGloomSprites3[] = {
	{sGloomGfx3, ARRAY_COUNT(sGloomGfx3)}, 
	{NULL, 0}
};
static const u8 sGloomGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_4.4bpp.lz");
static const ax_sprite sGloomSprites4[] = {
	{sGloomGfx4, ARRAY_COUNT(sGloomGfx4)}, 
	{NULL, 0}
};
static const u8 sGloomGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_5.4bpp.lz");
static const ax_sprite sGloomSprites5[] = {
	{sGloomGfx5, ARRAY_COUNT(sGloomGfx5)}, 
	{NULL, 0}
};
static const u8 sGloomGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_6.4bpp.lz");
static const ax_sprite sGloomSprites6[] = {
	{sGloomGfx6, ARRAY_COUNT(sGloomGfx6)}, 
	{NULL, 0}
};
static const u8 sGloomGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_7.4bpp.lz");
static const ax_sprite sGloomSprites7[] = {
	{sGloomGfx7, ARRAY_COUNT(sGloomGfx7)}, 
	{NULL, 0}
};
static const u8 sGloomGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_8.4bpp.lz");
static const ax_sprite sGloomSprites8[] = {
	{sGloomGfx8, ARRAY_COUNT(sGloomGfx8)}, 
	{NULL, 0}
};
static const u8 sGloomGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_9.4bpp.lz");
static const ax_sprite sGloomSprites9[] = {
	{sGloomGfx9, ARRAY_COUNT(sGloomGfx9)}, 
	{NULL, 0}
};
static const u8 sGloomGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_10.4bpp.lz");
static const ax_sprite sGloomSprites10[] = {
	{sGloomGfx10, ARRAY_COUNT(sGloomGfx10)}, 
	{NULL, 0}
};
static const u8 sGloomGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_11.4bpp.lz");
static const ax_sprite sGloomSprites11[] = {
	{sGloomGfx11, ARRAY_COUNT(sGloomGfx11)}, 
	{NULL, 0}
};
static const u8 sGloomGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_12.4bpp.lz");
static const ax_sprite sGloomSprites12[] = {
	{sGloomGfx12, ARRAY_COUNT(sGloomGfx12)}, 
	{NULL, 0}
};
static const u8 sGloomGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_13.4bpp.lz");
static const ax_sprite sGloomSprites13[] = {
	{sGloomGfx13, ARRAY_COUNT(sGloomGfx13)}, 
	{NULL, 0}
};
static const u8 sGloomGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_14.4bpp.lz");
static const ax_sprite sGloomSprites14[] = {
	{sGloomGfx14, ARRAY_COUNT(sGloomGfx14)}, 
	{NULL, 0}
};
static const u8 sGloomGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_15.4bpp.lz");
static const ax_sprite sGloomSprites15[] = {
	{sGloomGfx15, ARRAY_COUNT(sGloomGfx15)}, 
	{NULL, 0}
};
static const u8 sGloomGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_16.4bpp.lz");
static const ax_sprite sGloomSprites16[] = {
	{sGloomGfx16, ARRAY_COUNT(sGloomGfx16)}, 
	{NULL, 0}
};
static const u8 sGloomGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_17.4bpp.lz");
static const ax_sprite sGloomSprites17[] = {
	{sGloomGfx17, ARRAY_COUNT(sGloomGfx17)}, 
	{NULL, 0}
};
static const u8 sGloomGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_18.4bpp.lz");
static const ax_sprite sGloomSprites18[] = {
	{sGloomGfx18, ARRAY_COUNT(sGloomGfx18)}, 
	{NULL, 0}
};
static const u8 sGloomGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_19.4bpp.lz");
static const ax_sprite sGloomSprites19[] = {
	{sGloomGfx19, ARRAY_COUNT(sGloomGfx19)}, 
	{NULL, 0}
};
static const u8 sGloomGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_20.4bpp.lz");
static const ax_sprite sGloomSprites20[] = {
	{sGloomGfx20, ARRAY_COUNT(sGloomGfx20)}, 
	{NULL, 0}
};
static const u8 sGloomGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_21.4bpp.lz");
static const ax_sprite sGloomSprites21[] = {
	{sGloomGfx21, ARRAY_COUNT(sGloomGfx21)}, 
	{NULL, 0}
};
static const u8 sGloomGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_22.4bpp.lz");
static const ax_sprite sGloomSprites22[] = {
	{sGloomGfx22, ARRAY_COUNT(sGloomGfx22)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sGloomGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_23.4bpp.lz");
static const u8 sGloomGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_23_1.4bpp.lz");
static const ax_sprite sGloomSprites23[] = {
	{NULL, 32}, 
	{sGloomGfx23, ARRAY_COUNT(sGloomGfx23)}, 
	{NULL, 32}, 
	{sGloomGfx23_1, ARRAY_COUNT(sGloomGfx23_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sGloomGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_24.4bpp.lz");
static const u8 sGloomGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_24_1.4bpp.lz");
static const u8 sGloomGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_24_2.4bpp.lz");
static const u8 sGloomGfx24_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_24_3.4bpp.lz");
static const ax_sprite sGloomSprites24[] = {
	{sGloomGfx24, ARRAY_COUNT(sGloomGfx24)}, 
	{NULL, 32}, 
	{sGloomGfx24_1, ARRAY_COUNT(sGloomGfx24_1)}, 
	{NULL, 32}, 
	{sGloomGfx24_2, ARRAY_COUNT(sGloomGfx24_2)}, 
	{NULL, 64}, 
	{sGloomGfx24_3, ARRAY_COUNT(sGloomGfx24_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGloomGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_25.4bpp.lz");
static const u8 sGloomGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_25_1.4bpp.lz");
static const u8 sGloomGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_25_2.4bpp.lz");
static const u8 sGloomGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_25_3.4bpp.lz");
static const ax_sprite sGloomSprites25[] = {
	{sGloomGfx25, ARRAY_COUNT(sGloomGfx25)}, 
	{NULL, 64}, 
	{sGloomGfx25_1, ARRAY_COUNT(sGloomGfx25_1)}, 
	{NULL, 32}, 
	{sGloomGfx25_2, ARRAY_COUNT(sGloomGfx25_2)}, 
	{NULL, 32}, 
	{sGloomGfx25_3, ARRAY_COUNT(sGloomGfx25_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGloomGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_26.4bpp.lz");
static const u8 sGloomGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_26_1.4bpp.lz");
static const u8 sGloomGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_26_2.4bpp.lz");
static const u8 sGloomGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_26_3.4bpp.lz");
static const ax_sprite sGloomSprites26[] = {
	{sGloomGfx26, ARRAY_COUNT(sGloomGfx26)}, 
	{NULL, 32}, 
	{sGloomGfx26_1, ARRAY_COUNT(sGloomGfx26_1)}, 
	{NULL, 32}, 
	{sGloomGfx26_2, ARRAY_COUNT(sGloomGfx26_2)}, 
	{NULL, 64}, 
	{sGloomGfx26_3, ARRAY_COUNT(sGloomGfx26_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGloomGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_27.4bpp.lz");
static const u8 sGloomGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_27_1.4bpp.lz");
static const u8 sGloomGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_27_2.4bpp.lz");
static const u8 sGloomGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_27_3.4bpp.lz");
static const ax_sprite sGloomSprites27[] = {
	{sGloomGfx27, ARRAY_COUNT(sGloomGfx27)}, 
	{NULL, 64}, 
	{sGloomGfx27_1, ARRAY_COUNT(sGloomGfx27_1)}, 
	{NULL, 32}, 
	{sGloomGfx27_2, ARRAY_COUNT(sGloomGfx27_2)}, 
	{NULL, 32}, 
	{sGloomGfx27_3, ARRAY_COUNT(sGloomGfx27_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGloomGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_28.4bpp.lz");
static const u8 sGloomGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_28_1.4bpp.lz");
static const u8 sGloomGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_28_2.4bpp.lz");
static const ax_sprite sGloomSprites28[] = {
	{NULL, 32}, 
	{sGloomGfx28, ARRAY_COUNT(sGloomGfx28)}, 
	{NULL, 32}, 
	{sGloomGfx28_1, ARRAY_COUNT(sGloomGfx28_1)}, 
	{NULL, 64}, 
	{sGloomGfx28_2, ARRAY_COUNT(sGloomGfx28_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGloomGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_29.4bpp.lz");
static const u8 sGloomGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_29_1.4bpp.lz");
static const u8 sGloomGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_29_2.4bpp.lz");
static const u8 sGloomGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_29_3.4bpp.lz");
static const ax_sprite sGloomSprites29[] = {
	{sGloomGfx29, ARRAY_COUNT(sGloomGfx29)}, 
	{NULL, 32}, 
	{sGloomGfx29_1, ARRAY_COUNT(sGloomGfx29_1)}, 
	{NULL, 32}, 
	{sGloomGfx29_2, ARRAY_COUNT(sGloomGfx29_2)}, 
	{NULL, 64}, 
	{sGloomGfx29_3, ARRAY_COUNT(sGloomGfx29_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGloomGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_30.4bpp.lz");
static const u8 sGloomGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_30_1.4bpp.lz");
static const ax_sprite sGloomSprites30[] = {
	{NULL, 32}, 
	{sGloomGfx30, ARRAY_COUNT(sGloomGfx30)}, 
	{NULL, 32}, 
	{sGloomGfx30_1, ARRAY_COUNT(sGloomGfx30_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sGloomGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_31.4bpp.lz");
static const u8 sGloomGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_31_1.4bpp.lz");
static const ax_sprite sGloomSprites31[] = {
	{NULL, 32}, 
	{sGloomGfx31, ARRAY_COUNT(sGloomGfx31)}, 
	{NULL, 32}, 
	{sGloomGfx31_1, ARRAY_COUNT(sGloomGfx31_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sGloomGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_32.4bpp.lz");
static const u8 sGloomGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_32_1.4bpp.lz");
static const u8 sGloomGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_32_2.4bpp.lz");
static const u8 sGloomGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_32_3.4bpp.lz");
static const ax_sprite sGloomSprites32[] = {
	{NULL, 32}, 
	{sGloomGfx32, ARRAY_COUNT(sGloomGfx32)}, 
	{NULL, 32}, 
	{sGloomGfx32_1, ARRAY_COUNT(sGloomGfx32_1)}, 
	{NULL, 32}, 
	{sGloomGfx32_2, ARRAY_COUNT(sGloomGfx32_2)}, 
	{NULL, 64}, 
	{sGloomGfx32_3, ARRAY_COUNT(sGloomGfx32_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGloomGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_33.4bpp.lz");
static const u8 sGloomGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_33_1.4bpp.lz");
static const u8 sGloomGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_33_2.4bpp.lz");
static const u8 sGloomGfx33_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_33_3.4bpp.lz");
static const ax_sprite sGloomSprites33[] = {
	{NULL, 32}, 
	{sGloomGfx33, ARRAY_COUNT(sGloomGfx33)}, 
	{NULL, 32}, 
	{sGloomGfx33_1, ARRAY_COUNT(sGloomGfx33_1)}, 
	{NULL, 32}, 
	{sGloomGfx33_2, ARRAY_COUNT(sGloomGfx33_2)}, 
	{NULL, 64}, 
	{sGloomGfx33_3, ARRAY_COUNT(sGloomGfx33_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGloomGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_34.4bpp.lz");
static const ax_sprite sGloomSprites34[] = {
	{sGloomGfx34, ARRAY_COUNT(sGloomGfx34)}, 
	{NULL, 0}
};
static const u8 sGloomGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_35.4bpp.lz");
static const ax_sprite sGloomSprites35[] = {
	{sGloomGfx35, ARRAY_COUNT(sGloomGfx35)}, 
	{NULL, 0}
};
static const u8 sGloomGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_36.4bpp.lz");
static const ax_sprite sGloomSprites36[] = {
	{sGloomGfx36, ARRAY_COUNT(sGloomGfx36)}, 
	{NULL, 0}
};
static const u8 sGloomGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_37.4bpp.lz");
static const ax_sprite sGloomSprites37[] = {
	{sGloomGfx37, ARRAY_COUNT(sGloomGfx37)}, 
	{NULL, 0}
};
static const u8 sGloomGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_38.4bpp.lz");
static const ax_sprite sGloomSprites38[] = {
	{sGloomGfx38, ARRAY_COUNT(sGloomGfx38)}, 
	{NULL, 0}
};
static const u8 sGloomGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_39.4bpp.lz");
static const ax_sprite sGloomSprites39[] = {
	{sGloomGfx39, ARRAY_COUNT(sGloomGfx39)}, 
	{NULL, 0}
};
static const u8 sGloomGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_40.4bpp.lz");
static const ax_sprite sGloomSprites40[] = {
	{sGloomGfx40, ARRAY_COUNT(sGloomGfx40)}, 
	{NULL, 0}
};
static const u8 sGloomGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_41.4bpp.lz");
static const ax_sprite sGloomSprites41[] = {
	{sGloomGfx41, ARRAY_COUNT(sGloomGfx41)}, 
	{NULL, 0}
};
static const u8 sGloomGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_42.4bpp.lz");
static const ax_sprite sGloomSprites42[] = {
	{sGloomGfx42, ARRAY_COUNT(sGloomGfx42)}, 
	{NULL, 0}
};
static const u8 sGloomGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gloom/sprite_43.4bpp.lz");
static const ax_sprite sGloomSprites43[] = {
	{sGloomGfx43, ARRAY_COUNT(sGloomGfx43)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesGloom[] = {
	sGloomPose1,
	sGloomPose2,
	sGloomPose3,
	sGloomPose4,
	sGloomPose5,
	sGloomPose6,
	sGloomPose7,
	sGloomPose8,
	sGloomPose9,
	sGloomPose10,
	sGloomPose11,
	sGloomPose12,
	sGloomPose13,
	sGloomPose14,
	sGloomPose15,
	sGloomPose16,
	sGloomPose17,
	sGloomPose18,
	sGloomPose19,
	sGloomPose20,
	sGloomPose21,
	sGloomPose22,
	sGloomPose23,
	sGloomPose24,
	sGloomPose1,
	sGloomPose2,
	sGloomPose3,
	sGloomPose28,
	sGloomPose29,
	sGloomPose4,
	sGloomPose5,
	sGloomPose6,
	sGloomPose33,
	sGloomPose34,
	sGloomPose7,
	sGloomPose8,
	sGloomPose9,
	sGloomPose38,
	sGloomPose39,
	sGloomPose10,
	sGloomPose11,
	sGloomPose12,
	sGloomPose43,
	sGloomPose44,
	sGloomPose13,
	sGloomPose46,
	sGloomPose47,
	sGloomPose48,
	sGloomPose49,
	sGloomPose16,
	sGloomPose17,
	sGloomPose18,
	sGloomPose53,
	sGloomPose54,
	sGloomPose19,
	sGloomPose20,
	sGloomPose21,
	sGloomPose58,
	sGloomPose59,
	sGloomPose22,
	sGloomPose23,
	sGloomPose24,
	sGloomPose63,
	sGloomPose64,
	sGloomPose1,
	sGloomPose2,
	sGloomPose3,
	sGloomPose28,
	sGloomPose29,
	sGloomPose4,
	sGloomPose5,
	sGloomPose6,
	sGloomPose33,
	sGloomPose34,
	sGloomPose7,
	sGloomPose8,
	sGloomPose9,
	sGloomPose38,
	sGloomPose39,
	sGloomPose10,
	sGloomPose11,
	sGloomPose12,
	sGloomPose43,
	sGloomPose44,
	sGloomPose13,
	sGloomPose46,
	sGloomPose47,
	sGloomPose48,
	sGloomPose49,
	sGloomPose16,
	sGloomPose17,
	sGloomPose18,
	sGloomPose53,
	sGloomPose54,
	sGloomPose19,
	sGloomPose20,
	sGloomPose21,
	sGloomPose58,
	sGloomPose59,
	sGloomPose22,
	sGloomPose23,
	sGloomPose24,
	sGloomPose63,
	sGloomPose64,
	sGloomPose1,
	sGloomPose28,
	sGloomPose29,
	sGloomPose4,
	sGloomPose33,
	sGloomPose110,
	sGloomPose7,
	sGloomPose38,
	sGloomPose113,
	sGloomPose10,
	sGloomPose43,
	sGloomPose44,
	sGloomPose13,
	sGloomPose48,
	sGloomPose49,
	sGloomPose16,
	sGloomPose53,
	sGloomPose54,
	sGloomPose19,
	sGloomPose58,
	sGloomPose125,
	sGloomPose22,
	sGloomPose63,
	sGloomPose128,
	sGloomPose1,
	sGloomPose22,
	sGloomPose19,
	sGloomPose16,
	sGloomPose13,
	sGloomPose10,
	sGloomPose7,
	sGloomPose4,
	sGloomPose137,
	sGloomPose138,
	sGloomPose139,
	sGloomPose140,
	sGloomPose141,
	sGloomPose142,
	sGloomPose143,
	sGloomPose144,
	sGloomPose145,
	sGloomPose146,
	sGloomPose1,
	sGloomPose2,
	sGloomPose3,
	sGloomPose4,
	sGloomPose5,
	sGloomPose6,
	sGloomPose7,
	sGloomPose8,
	sGloomPose9,
	sGloomPose10,
	sGloomPose11,
	sGloomPose12,
	sGloomPose13,
	sGloomPose14,
	sGloomPose15,
	sGloomPose16,
	sGloomPose17,
	sGloomPose18,
	sGloomPose19,
	sGloomPose20,
	sGloomPose21,
	sGloomPose22,
	sGloomPose23,
	sGloomPose24,
	sGloomPose29,
	sGloomPose64,
	sGloomPose173,
	sGloomPose174,
	sGloomPose175,
	sGloomPose176,
	sGloomPose39,
	sGloomPose34,
	sGloomPose28,
	sGloomPose33,
	sGloomPose38,
	sGloomPose43,
	sGloomPose48,
	sGloomPose53,
	sGloomPose58,
	sGloomPose63,
	sGloomPose1,
	sGloomPose28,
	sGloomPose29,
	sGloomPose4,
	sGloomPose33,
	sGloomPose34,
	sGloomPose7,
	sGloomPose38,
	sGloomPose39,
	sGloomPose10,
	sGloomPose43,
	sGloomPose176,
	sGloomPose13,
	sGloomPose48,
	sGloomPose49,
	sGloomPose16,
	sGloomPose53,
	sGloomPose174,
	sGloomPose19,
	sGloomPose58,
	sGloomPose173,
	sGloomPose22,
	sGloomPose63,
	sGloomPose64,
	sGloomPose29,
	sGloomPose64,
	sGloomPose173,
	sGloomPose174,
	sGloomPose175,
	sGloomPose176,
	sGloomPose39,
	sGloomPose34,
	sGloomPose1,
	sGloomPose22,
	sGloomPose19,
	sGloomPose16,
	sGloomPose13,
	sGloomPose10,
	sGloomPose7,
	sGloomPose4,
};

static const struct PositionSets sAxPositionsGloom[] = {
	[0] = { .set = { {0, -6}, {-8, -4}, {7, -4}, {0, -10} } },
	[1] = { .set = { {-1, -5}, {-7, -4}, {6, -3}, {0, -9} } },
	[2] = { .set = { {1, -5}, {-7, -3}, {6, -4}, {0, -9} } },
	[3] = { .set = { {2, -6}, {-6, -4}, {4, -5}, {0, -10} } },
	[4] = { .set = { {3, -5}, {-3, -2}, {2, -4}, {0, -9} } },
	[5] = { .set = { {1, -5}, {-6, -5}, {6, -5}, {0, -9} } },
	[6] = { .set = { {5, -6}, {-2, -3}, {1, -6}, {0, -9} } },
	[7] = { .set = { {5, -5}, {1, -2}, {-2, -5}, {0, -8} } },
	[8] = { .set = { {4, -5}, {-2, -3}, {2, -5}, {0, -8} } },
	[9] = { .set = { {2, -7}, {-5, -6}, {5, -4}, {-1, -10} } },
	[10] = { .set = { {1, -6}, {-7, -4}, {6, -4}, {-1, -9} } },
	[11] = { .set = { {2, -5}, {-3, -6}, {2, -3}, {-1, -9} } },
	[12] = { .set = { {0, -7}, {7, -5}, {-8, -5}, {0, -9} } },
	[13] = { .set = { {-1, -6}, {6, -4}, {-7, -5}, {-1, -8} } },
	[14] = { .set = { {0, -6}, {6, -5}, {-7, -4}, {0, -8} } },
	[15] = { .set = { {-3, -7}, {4, -6}, {-6, -4}, {0, -10} } },
	[16] = { .set = { {-2, -6}, {6, -4}, {-7, -4}, {0, -9} } },
	[17] = { .set = { {-3, -5}, {2, -6}, {-3, -3}, {0, -9} } },
	[18] = { .set = { {-5, -6}, {-1, -6}, {1, -3}, {0, -10} } },
	[19] = { .set = { {-6, -5}, {0, -6}, {-2, -2}, {0, -9} } },
	[20] = { .set = { {-4, -5}, {-2, -6}, {2, -3}, {0, -9} } },
	[21] = { .set = { {-3, -6}, {-5, -5}, {5, -4}, {-1, -9} } },
	[22] = { .set = { {-3, -5}, {-4, -5}, {2, -2}, {-1, -8} } },
	[23] = { .set = { {-1, -5}, {-7, -5}, {5, -5}, {-1, -8} } },
	[24] = { .set = { {0, -6}, {-8, -4}, {7, -4}, {0, -10} } },
	[25] = { .set = { {-1, -5}, {-7, -4}, {6, -3}, {0, -9} } },
	[26] = { .set = { {1, -5}, {-7, -3}, {6, -4}, {0, -9} } },
	[27] = { .set = { {0, -15}, {-9, -5}, {8, -5}, {0, -8} } },
	[28] = { .set = { {0, -8}, {-8, -4}, {7, -4}, {0, -7} } },
	[29] = { .set = { {2, -6}, {-6, -4}, {4, -5}, {0, -10} } },
	[30] = { .set = { {3, -5}, {-3, -2}, {2, -4}, {0, -9} } },
	[31] = { .set = { {1, -5}, {-6, -5}, {6, -5}, {0, -9} } },
	[32] = { .set = { {-3, -18}, {-7, -5}, {4, -7}, {-1, -10} } },
	[33] = { .set = { {6, -7}, {4, -5}, {-5, -3}, {1, -7} } },
	[34] = { .set = { {5, -6}, {-2, -3}, {1, -6}, {0, -9} } },
	[35] = { .set = { {5, -5}, {1, -2}, {-2, -5}, {0, -8} } },
	[36] = { .set = { {4, -5}, {-2, -3}, {2, -5}, {0, -8} } },
	[37] = { .set = { {-4, -18}, {-1, -6}, {1, -7}, {0, -9} } },
	[38] = { .set = { {10, -9}, {0, -4}, {-1, -1}, {1, -7} } },
	[39] = { .set = { {2, -7}, {-5, -6}, {5, -4}, {-1, -10} } },
	[40] = { .set = { {1, -6}, {-7, -4}, {6, -4}, {-1, -9} } },
	[41] = { .set = { {2, -5}, {-3, -6}, {2, -3}, {-1, -9} } },
	[42] = { .set = { {-2, -16}, {-6, -7}, {5, -5}, {-3, -10} } },
	[43] = { .set = { {7, -13}, {-6, -7}, {6, -3}, {3, -9} } },
	[44] = { .set = { {0, -7}, {7, -5}, {-8, -5}, {0, -9} } },
	[45] = { .set = { {-1, -7}, {6, -5}, {-7, -6}, {-1, -9} } },
	[46] = { .set = { {0, -7}, {6, -6}, {-7, -5}, {0, -9} } },
	[47] = { .set = { {0, -16}, {7, -7}, {-8, -7}, {0, -9} } },
	[48] = { .set = { {0, -15}, {7, -4}, {-8, -4}, {0, -10} } },
	[49] = { .set = { {-3, -7}, {4, -6}, {-6, -4}, {0, -10} } },
	[50] = { .set = { {-2, -6}, {6, -4}, {-7, -4}, {0, -9} } },
	[51] = { .set = { {-3, -5}, {2, -6}, {-3, -3}, {0, -9} } },
	[52] = { .set = { {1, -16}, {5, -7}, {-6, -5}, {2, -10} } },
	[53] = { .set = { {-8, -13}, {5, -7}, {-7, -3}, {-4, -9} } },
	[54] = { .set = { {-5, -6}, {-1, -6}, {1, -3}, {0, -10} } },
	[55] = { .set = { {-6, -5}, {0, -6}, {-2, -2}, {0, -9} } },
	[56] = { .set = { {-4, -5}, {-2, -6}, {2, -3}, {0, -9} } },
	[57] = { .set = { {3, -18}, {0, -6}, {2, -4}, {0, -9} } },
	[58] = { .set = { {-10, -9}, {0, -4}, {1, -1}, {-1, -7} } },
	[59] = { .set = { {-3, -6}, {-5, -5}, {5, -4}, {-1, -9} } },
	[60] = { .set = { {-3, -5}, {-4, -5}, {2, -2}, {-1, -8} } },
	[61] = { .set = { {-1, -5}, {-7, -5}, {5, -5}, {-1, -8} } },
	[62] = { .set = { {2, -18}, {-5, -7}, {6, -5}, {1, -10} } },
	[63] = { .set = { {-7, -7}, {-5, -5}, {4, -3}, {-2, -7} } },
	[64] = { .set = { {0, -6}, {-8, -4}, {7, -4}, {0, -10} } },
	[65] = { .set = { {-1, -5}, {-7, -4}, {6, -3}, {0, -9} } },
	[66] = { .set = { {1, -5}, {-7, -3}, {6, -4}, {0, -9} } },
	[67] = { .set = { {0, -15}, {-9, -5}, {8, -5}, {0, -8} } },
	[68] = { .set = { {0, -8}, {-8, -4}, {7, -4}, {0, -7} } },
	[69] = { .set = { {2, -6}, {-6, -4}, {4, -5}, {0, -10} } },
	[70] = { .set = { {3, -5}, {-3, -2}, {2, -4}, {0, -9} } },
	[71] = { .set = { {1, -5}, {-6, -5}, {6, -5}, {0, -9} } },
	[72] = { .set = { {-3, -18}, {-7, -5}, {4, -7}, {-1, -10} } },
	[73] = { .set = { {6, -7}, {4, -5}, {-5, -3}, {1, -7} } },
	[74] = { .set = { {5, -6}, {-2, -3}, {1, -6}, {0, -9} } },
	[75] = { .set = { {5, -5}, {1, -2}, {-2, -5}, {0, -8} } },
	[76] = { .set = { {4, -5}, {-2, -3}, {2, -5}, {0, -8} } },
	[77] = { .set = { {-4, -18}, {-1, -6}, {1, -7}, {0, -9} } },
	[78] = { .set = { {10, -9}, {0, -4}, {-1, -1}, {1, -7} } },
	[79] = { .set = { {2, -7}, {-5, -6}, {5, -4}, {-1, -10} } },
	[80] = { .set = { {1, -6}, {-7, -4}, {6, -4}, {-1, -9} } },
	[81] = { .set = { {2, -5}, {-3, -6}, {2, -3}, {-1, -9} } },
	[82] = { .set = { {-2, -16}, {-6, -7}, {5, -5}, {-3, -10} } },
	[83] = { .set = { {7, -13}, {-6, -7}, {6, -3}, {3, -9} } },
	[84] = { .set = { {0, -7}, {7, -5}, {-8, -5}, {0, -9} } },
	[85] = { .set = { {-1, -7}, {6, -5}, {-7, -6}, {-1, -9} } },
	[86] = { .set = { {0, -7}, {6, -6}, {-7, -5}, {0, -9} } },
	[87] = { .set = { {0, -16}, {7, -7}, {-8, -7}, {0, -9} } },
	[88] = { .set = { {0, -15}, {7, -4}, {-8, -4}, {0, -10} } },
	[89] = { .set = { {-3, -7}, {4, -6}, {-6, -4}, {0, -10} } },
	[90] = { .set = { {-2, -6}, {6, -4}, {-7, -4}, {0, -9} } },
	[91] = { .set = { {-3, -5}, {2, -6}, {-3, -3}, {0, -9} } },
	[92] = { .set = { {1, -16}, {5, -7}, {-6, -5}, {2, -10} } },
	[93] = { .set = { {-8, -13}, {5, -7}, {-7, -3}, {-4, -9} } },
	[94] = { .set = { {-5, -6}, {-1, -6}, {1, -3}, {0, -10} } },
	[95] = { .set = { {-6, -5}, {0, -6}, {-2, -2}, {0, -9} } },
	[96] = { .set = { {-4, -5}, {-2, -6}, {2, -3}, {0, -9} } },
	[97] = { .set = { {3, -18}, {0, -6}, {2, -4}, {0, -9} } },
	[98] = { .set = { {-10, -9}, {0, -4}, {1, -1}, {-1, -7} } },
	[99] = { .set = { {-3, -6}, {-5, -5}, {5, -4}, {-1, -9} } },
	[100] = { .set = { {-3, -5}, {-4, -5}, {2, -2}, {-1, -8} } },
	[101] = { .set = { {-1, -5}, {-7, -5}, {5, -5}, {-1, -8} } },
	[102] = { .set = { {2, -18}, {-5, -7}, {6, -5}, {1, -10} } },
	[103] = { .set = { {-7, -7}, {-5, -5}, {4, -3}, {-2, -7} } },
	[104] = { .set = { {0, -6}, {-8, -4}, {7, -4}, {0, -10} } },
	[105] = { .set = { {0, -15}, {-9, -5}, {8, -5}, {0, -8} } },
	[106] = { .set = { {0, -8}, {-8, -4}, {7, -4}, {0, -7} } },
	[107] = { .set = { {2, -6}, {-6, -4}, {4, -5}, {0, -10} } },
	[108] = { .set = { {-3, -18}, {-7, -5}, {4, -7}, {-1, -10} } },
	[109] = { .set = { {10, -7}, {8, -5}, {-1, -3}, {5, -7} } },
	[110] = { .set = { {5, -6}, {-2, -3}, {1, -6}, {0, -9} } },
	[111] = { .set = { {-4, -18}, {-1, -6}, {1, -7}, {0, -9} } },
	[112] = { .set = { {16, -9}, {6, -4}, {5, -1}, {7, -7} } },
	[113] = { .set = { {2, -7}, {-5, -6}, {5, -4}, {-1, -10} } },
	[114] = { .set = { {-2, -16}, {-6, -7}, {5, -5}, {-3, -10} } },
	[115] = { .set = { {7, -13}, {-6, -7}, {6, -3}, {3, -9} } },
	[116] = { .set = { {0, -7}, {7, -5}, {-8, -5}, {0, -9} } },
	[117] = { .set = { {0, -16}, {7, -7}, {-8, -7}, {0, -9} } },
	[118] = { .set = { {0, -15}, {7, -4}, {-8, -4}, {0, -10} } },
	[119] = { .set = { {-3, -7}, {4, -6}, {-6, -4}, {0, -10} } },
	[120] = { .set = { {1, -16}, {5, -7}, {-6, -5}, {2, -10} } },
	[121] = { .set = { {-8, -13}, {5, -7}, {-7, -3}, {-4, -9} } },
	[122] = { .set = { {-5, -6}, {-1, -6}, {1, -3}, {0, -10} } },
	[123] = { .set = { {3, -18}, {0, -6}, {2, -4}, {0, -9} } },
	[124] = { .set = { {-17, -9}, {-7, -4}, {-6, -1}, {-8, -7} } },
	[125] = { .set = { {-3, -6}, {-5, -5}, {5, -4}, {-1, -9} } },
	[126] = { .set = { {2, -18}, {-5, -7}, {6, -5}, {1, -10} } },
	[127] = { .set = { {-11, -7}, {-9, -5}, {0, -3}, {-6, -7} } },
	[128] = { .set = { {0, -6}, {-8, -4}, {7, -4}, {0, -10} } },
	[129] = { .set = { {-3, -6}, {-5, -5}, {5, -4}, {-1, -9} } },
	[130] = { .set = { {-5, -6}, {-1, -6}, {1, -3}, {0, -10} } },
	[131] = { .set = { {-3, -7}, {4, -6}, {-6, -4}, {0, -10} } },
	[132] = { .set = { {0, -7}, {7, -5}, {-8, -5}, {0, -9} } },
	[133] = { .set = { {2, -7}, {-5, -6}, {5, -4}, {-1, -10} } },
	[134] = { .set = { {5, -6}, {-2, -3}, {1, -6}, {0, -9} } },
	[135] = { .set = { {2, -6}, {-6, -4}, {4, -5}, {0, -10} } },
	[136] = { .set = { {0, -4}, {-8, -2}, {7, -2}, {0, -8} } },
	[137] = { .set = { {0, -3}, {-8, -1}, {7, -1}, {0, -7} } },
	[138] = { .set = { {0, -9}, {-8, -12}, {7, -12}, {0, -12} } },
	[139] = { .set = { {0, -9}, {-7, -12}, {5, -13}, {0, -12} } },
	[140] = { .set = { {1, -9}, {-4, -11}, {-5, -12}, {-3, -11} } },
	[141] = { .set = { {1, -8}, {3, -10}, {-9, -11}, {-3, -10} } },
	[142] = { .set = { {0, -7}, {7, -10}, {-8, -10}, {0, -9} } },
	[143] = { .set = { {-1, -8}, {9, -12}, {-4, -10}, {3, -11} } },
	[144] = { .set = { {-2, -8}, {2, -12}, {3, -10}, {3, -12} } },
	[145] = { .set = { {-1, -9}, {-6, -13}, {6, -12}, {0, -12} } },
	[146] = { .set = { {0, -6}, {-8, -4}, {7, -4}, {0, -10} } },
	[147] = { .set = { {-1, -5}, {-7, -4}, {6, -3}, {0, -9} } },
	[148] = { .set = { {1, -5}, {-7, -3}, {6, -4}, {0, -9} } },
	[149] = { .set = { {2, -6}, {-6, -4}, {4, -5}, {0, -10} } },
	[150] = { .set = { {3, -5}, {-3, -2}, {2, -4}, {0, -9} } },
	[151] = { .set = { {1, -5}, {-6, -5}, {6, -5}, {0, -9} } },
	[152] = { .set = { {5, -6}, {-2, -3}, {1, -6}, {0, -9} } },
	[153] = { .set = { {5, -5}, {1, -2}, {-2, -5}, {0, -8} } },
	[154] = { .set = { {4, -5}, {-2, -3}, {2, -5}, {0, -8} } },
	[155] = { .set = { {2, -7}, {-5, -6}, {5, -4}, {-1, -10} } },
	[156] = { .set = { {1, -6}, {-7, -4}, {6, -4}, {-1, -9} } },
	[157] = { .set = { {2, -5}, {-3, -6}, {2, -3}, {-1, -9} } },
	[158] = { .set = { {0, -7}, {7, -5}, {-8, -5}, {0, -9} } },
	[159] = { .set = { {-1, -6}, {6, -4}, {-7, -5}, {-1, -8} } },
	[160] = { .set = { {0, -6}, {6, -5}, {-7, -4}, {0, -8} } },
	[161] = { .set = { {-3, -7}, {4, -6}, {-6, -4}, {0, -10} } },
	[162] = { .set = { {-2, -6}, {6, -4}, {-7, -4}, {0, -9} } },
	[163] = { .set = { {-3, -5}, {2, -6}, {-3, -3}, {0, -9} } },
	[164] = { .set = { {-5, -6}, {-1, -6}, {1, -3}, {0, -10} } },
	[165] = { .set = { {-6, -5}, {0, -6}, {-2, -2}, {0, -9} } },
	[166] = { .set = { {-4, -5}, {-2, -6}, {2, -3}, {0, -9} } },
	[167] = { .set = { {-3, -6}, {-5, -5}, {5, -4}, {-1, -9} } },
	[168] = { .set = { {-3, -5}, {-4, -5}, {2, -2}, {-1, -8} } },
	[169] = { .set = { {-1, -5}, {-7, -5}, {5, -5}, {-1, -8} } },
	[170] = { .set = { {0, -8}, {-8, -4}, {7, -4}, {0, -7} } },
	[171] = { .set = { {-7, -7}, {-5, -5}, {4, -3}, {-2, -7} } },
	[172] = { .set = { {-11, -9}, {-1, -4}, {0, -1}, {-2, -7} } },
	[173] = { .set = { {-6, -13}, {7, -7}, {-5, -3}, {-2, -9} } },
	[174] = { .set = { {0, -14}, {7, -3}, {-8, -3}, {0, -9} } },
	[175] = { .set = { {5, -13}, {-8, -7}, {4, -3}, {1, -9} } },
	[176] = { .set = { {10, -9}, {0, -4}, {-1, -1}, {1, -7} } },
	[177] = { .set = { {6, -7}, {4, -5}, {-5, -3}, {1, -7} } },
	[178] = { .set = { {0, -15}, {-9, -5}, {8, -5}, {0, -8} } },
	[179] = { .set = { {-3, -18}, {-7, -5}, {4, -7}, {-1, -10} } },
	[180] = { .set = { {-4, -18}, {-1, -6}, {1, -7}, {0, -9} } },
	[181] = { .set = { {-2, -16}, {-6, -7}, {5, -5}, {-3, -10} } },
	[182] = { .set = { {0, -16}, {7, -7}, {-8, -7}, {0, -9} } },
	[183] = { .set = { {1, -16}, {5, -7}, {-6, -5}, {2, -10} } },
	[184] = { .set = { {3, -18}, {0, -6}, {2, -4}, {0, -9} } },
	[185] = { .set = { {2, -18}, {-5, -7}, {6, -5}, {1, -10} } },
	[186] = { .set = { {0, -6}, {-8, -4}, {7, -4}, {0, -10} } },
	[187] = { .set = { {0, -15}, {-9, -5}, {8, -5}, {0, -8} } },
	[188] = { .set = { {0, -8}, {-8, -4}, {7, -4}, {0, -7} } },
	[189] = { .set = { {2, -6}, {-6, -4}, {4, -5}, {0, -10} } },
	[190] = { .set = { {-3, -18}, {-7, -5}, {4, -7}, {-1, -10} } },
	[191] = { .set = { {6, -7}, {4, -5}, {-5, -3}, {1, -7} } },
	[192] = { .set = { {5, -6}, {-2, -3}, {1, -6}, {0, -9} } },
	[193] = { .set = { {-4, -18}, {-1, -6}, {1, -7}, {0, -9} } },
	[194] = { .set = { {10, -9}, {0, -4}, {-1, -1}, {1, -7} } },
	[195] = { .set = { {2, -7}, {-5, -6}, {5, -4}, {-1, -10} } },
	[196] = { .set = { {-2, -16}, {-6, -7}, {5, -5}, {-3, -10} } },
	[197] = { .set = { {5, -13}, {-8, -7}, {4, -3}, {1, -9} } },
	[198] = { .set = { {0, -7}, {7, -5}, {-8, -5}, {0, -9} } },
	[199] = { .set = { {0, -16}, {7, -7}, {-8, -7}, {0, -9} } },
	[200] = { .set = { {0, -15}, {7, -4}, {-8, -4}, {0, -10} } },
	[201] = { .set = { {-3, -7}, {4, -6}, {-6, -4}, {0, -10} } },
	[202] = { .set = { {1, -16}, {5, -7}, {-6, -5}, {2, -10} } },
	[203] = { .set = { {-6, -13}, {7, -7}, {-5, -3}, {-2, -9} } },
	[204] = { .set = { {-5, -6}, {-1, -6}, {1, -3}, {0, -10} } },
	[205] = { .set = { {3, -18}, {0, -6}, {2, -4}, {0, -9} } },
	[206] = { .set = { {-11, -9}, {-1, -4}, {0, -1}, {-2, -7} } },
	[207] = { .set = { {-3, -6}, {-5, -5}, {5, -4}, {-1, -9} } },
	[208] = { .set = { {2, -18}, {-5, -7}, {6, -5}, {1, -10} } },
	[209] = { .set = { {-7, -7}, {-5, -5}, {4, -3}, {-2, -7} } },
	[210] = { .set = { {0, -8}, {-8, -4}, {7, -4}, {0, -7} } },
	[211] = { .set = { {-7, -7}, {-5, -5}, {4, -3}, {-2, -7} } },
	[212] = { .set = { {-11, -9}, {-1, -4}, {0, -1}, {-2, -7} } },
	[213] = { .set = { {-6, -13}, {7, -7}, {-5, -3}, {-2, -9} } },
	[214] = { .set = { {0, -14}, {7, -3}, {-8, -3}, {0, -9} } },
	[215] = { .set = { {5, -13}, {-8, -7}, {4, -3}, {1, -9} } },
	[216] = { .set = { {10, -9}, {0, -4}, {-1, -1}, {1, -7} } },
	[217] = { .set = { {6, -7}, {4, -5}, {-5, -3}, {1, -7} } },
	[218] = { .set = { {0, -6}, {-8, -4}, {7, -4}, {0, -10} } },
	[219] = { .set = { {-3, -6}, {-5, -5}, {5, -4}, {-1, -9} } },
	[220] = { .set = { {-5, -6}, {-1, -6}, {1, -3}, {0, -10} } },
	[221] = { .set = { {-3, -7}, {4, -6}, {-6, -4}, {0, -10} } },
	[222] = { .set = { {0, -7}, {7, -5}, {-8, -5}, {0, -9} } },
	[223] = { .set = { {2, -7}, {-5, -6}, {5, -4}, {-1, -10} } },
	[224] = { .set = { {5, -6}, {-2, -3}, {1, -6}, {0, -9} } },
	[225] = { .set = { {2, -6}, {-6, -4}, {4, -5}, {0, -10} } },
};

static const ax_anim *const sGloomAnimTable1[] = {
	gAxSharedAnim_02477,
	gAxSharedAnim_02542,
	gAxSharedAnim_02551,
	gAxSharedAnim_02559,
	gAxSharedAnim_02499,
	gAxSharedAnim_02519,
	gAxSharedAnim_02526,
	gAxSharedAnim_02535,
};

static const ax_anim *const sGloomAnimTable2[] = {
	sGloomAnims_2_1,
	sGloomAnims_2_2,
	gAxSharedAnim_01876,
	sGloomAnims_2_4,
	sGloomAnims_2_5,
	sGloomAnims_2_6,
	gAxSharedAnim_01999,
	sGloomAnims_2_8,
};

static const ax_anim *const sGloomAnimTable3[] = {
	sGloomAnims_3_1,
	sGloomAnims_3_2,
	gAxSharedAnim_02107,
	sGloomAnims_3_4,
	sGloomAnims_3_5,
	sGloomAnims_3_6,
	gAxSharedAnim_02288,
	sGloomAnims_3_8,
};

static const ax_anim *const sGloomAnimTable4[] = {
	gAxSharedAnim_00174,
	gAxSharedAnim_00198,
	gAxSharedAnim_00227,
	gAxSharedAnim_00256,
	gAxSharedAnim_00286,
	gAxSharedAnim_00312,
	gAxSharedAnim_00338,
	gAxSharedAnim_00362,
};

static const ax_anim *const sGloomAnimTable5[] = {
	gAxSharedAnim_02504,
	gAxSharedAnim_02503,
	gAxSharedAnim_02511,
	gAxSharedAnim_02510,
	gAxSharedAnim_02509,
	gAxSharedAnim_02508,
	gAxSharedAnim_02507,
	gAxSharedAnim_02506,
};

static const ax_anim *const sGloomAnimTable6[] = {
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
};

static const ax_anim *const sGloomAnimTable7[] = {
	gAxSharedAnim_00466,
	gAxSharedAnim_00479,
	gAxSharedAnim_00487,
	gAxSharedAnim_00496,
	gAxSharedAnim_00508,
	gAxSharedAnim_00517,
	gAxSharedAnim_00523,
	gAxSharedAnim_00529,
};

static const ax_anim *const sGloomAnimTable8[] = {
	sGloomAnims_8_1,
	sGloomAnims_8_2,
	sGloomAnims_8_3,
	sGloomAnims_8_4,
	sGloomAnims_8_5,
	sGloomAnims_8_6,
	sGloomAnims_8_7,
	sGloomAnims_8_8,
};

static const ax_anim *const sGloomAnimTable9[] = {
	sGloomAnims_9_1,
	sGloomAnims_9_2,
	sGloomAnims_9_3,
	sGloomAnims_9_4,
	sGloomAnims_9_5,
	sGloomAnims_9_6,
	sGloomAnims_9_7,
	sGloomAnims_9_8,
};

static const ax_anim *const sGloomAnimTable10[] = {
	gAxSharedAnim_00905,
	gAxSharedAnim_00918,
	gAxSharedAnim_00930,
	gAxSharedAnim_00942,
	gAxSharedAnim_00955,
	gAxSharedAnim_00965,
	gAxSharedAnim_00978,
	gAxSharedAnim_00993,
};

static const ax_anim *const sGloomAnimTable11[] = {
	sGloomAnims_11_1,
	sGloomAnims_11_2,
	gAxSharedAnim_01104,
	gAxSharedAnim_01151,
	gAxSharedAnim_01186,
	gAxSharedAnim_01224,
	gAxSharedAnim_01263,
	sGloomAnims_11_8,
};

static const ax_anim *const sGloomAnimTable12[] = {
	gAxSharedAnim_01337,
	gAxSharedAnim_01414,
	gAxSharedAnim_01392,
	gAxSharedAnim_01380,
	gAxSharedAnim_01379,
	gAxSharedAnim_01368,
	gAxSharedAnim_01354,
	gAxSharedAnim_01338,
};

static const ax_anim *const sGloomAnimTable13[] = {
	gAxSharedAnim_01422,
	gAxSharedAnim_01464,
	gAxSharedAnim_01461,
	gAxSharedAnim_01456,
	gAxSharedAnim_01446,
	gAxSharedAnim_01443,
	gAxSharedAnim_01438,
	gAxSharedAnim_01429,
};

static const ax_anim *const *const sAxAnimationsGloom[] = {
	sGloomAnimTable1,
	sGloomAnimTable2,
	sGloomAnimTable3,
	sGloomAnimTable4,
	sGloomAnimTable5,
	sGloomAnimTable6,
	sGloomAnimTable7,
	sGloomAnimTable8,
	sGloomAnimTable9,
	sGloomAnimTable10,
	sGloomAnimTable11,
	sGloomAnimTable12,
	sGloomAnimTable13,
};

static const ax_sprite *const sAxSpritesGloom[] = {
	sGloomSprites1,
	sGloomSprites2,
	sGloomSprites3,
	sGloomSprites4,
	sGloomSprites5,
	sGloomSprites6,
	sGloomSprites7,
	sGloomSprites8,
	sGloomSprites9,
	sGloomSprites10,
	sGloomSprites11,
	sGloomSprites12,
	sGloomSprites13,
	sGloomSprites14,
	sGloomSprites15,
	sGloomSprites16,
	sGloomSprites17,
	sGloomSprites18,
	sGloomSprites19,
	sGloomSprites20,
	sGloomSprites21,
	sGloomSprites22,
	sGloomSprites23,
	sGloomSprites24,
	sGloomSprites25,
	sGloomSprites26,
	sGloomSprites27,
	sGloomSprites28,
	sGloomSprites29,
	sGloomSprites30,
	sGloomSprites31,
	sGloomSprites32,
	sGloomSprites33,
	sGloomSprites34,
	sGloomSprites35,
	sGloomSprites36,
	sGloomSprites37,
	sGloomSprites38,
	sGloomSprites39,
	sGloomSprites40,
	sGloomSprites41,
	sGloomSprites42,
	sGloomSprites43,
};

static const axmain sAxMainGloom = {
	.poses = sAxPosesGloom,
	.animations = sAxAnimationsGloom,
	.animCount = ARRAY_COUNT(sAxAnimationsGloom),
	.spriteData = sAxSpritesGloom,
	.positions = sAxPositionsGloom,
};
