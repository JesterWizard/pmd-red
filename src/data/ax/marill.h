/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainMarill;
const SiroArchive gAxMarill = {"SIRO", &sAxMainMarill};

static const ax_pose sMarillPose1[] = {
	AX_POSE(0, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose3[] = {
	AX_POSE(2, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose4[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose5[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose6[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose8[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose10[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose11[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose12[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose13[] = {
	AX_POSE(12, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose14[] = {
	AX_POSE(13, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose15[] = {
	AX_POSE(14, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose16[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose17[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose18[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose19[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose20[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose21[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose22[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose23[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose24[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose28[] = {
	AX_POSE(15, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose32[] = {
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose36[] = {
	AX_POSE(17, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose40[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose44[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose48[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose52[] = {
	AX_POSE(17, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose56[] = {
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose90[] = {
	AX_POSE(20, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose92[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose94[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose96[] = {
	AX_POSE(23, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose98[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose100[] = {
	AX_POSE(23, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose102[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose104[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose120[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose128[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose137[] = {
	AX_POSE(25, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose138[] = {
	AX_POSE(26, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose139[] = {
	AX_POSE(27, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose140[] = {
	AX_POSE(28, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose141[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose142[] = {
	AX_POSE(30, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose143[] = {
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose144[] = {
	AX_POSE(30, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose145[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose146[] = {
	AX_POSE(28, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose172[] = {
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose173[] = {
	AX_POSE(17, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose177[] = {
	AX_POSE(17, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose178[] = {
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose180[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose181[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose182[] = {
	AX_POSE(23, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose183[] = {
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose184[] = {
	AX_POSE(23, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose185[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose186[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose191[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMarillPose207[] = {
	AX_POSE(17, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_anim sMarillAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 88, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 89, .offset = {1, 2}, .shadow = {1, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {1, 2}, .shadow = {1, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {1, 2}, .shadow = {1, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 90, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 91, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 92, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 93, .offset = {2, 1}, .shadow = {2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {2, 1}, .shadow = {2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {2, 1}, .shadow = {2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 94, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 96, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 97, .offset = {1, -2}, .shadow = {1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {1, -2}, .shadow = {1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {1, -2}, .shadow = {1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 98, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 100, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 101, .offset = {-2, 1}, .shadow = {-2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {-2, 1}, .shadow = {-2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {-2, 1}, .shadow = {-2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 102, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_5_1[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 105, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 104, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_5_2[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 110, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 108, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_5_3[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 113, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 113, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 112, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 115, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_5_4[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 118, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 118, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 116, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 119, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_5_5[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 121, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 121, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 120, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 123, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_5_6[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 126, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 126, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 124, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 127, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_5_7[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 129, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 128, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 131, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_5_8[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 134, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 134, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 132, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 135, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_8_1[] = {
	{ .frames = 26, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_8_2[] = {
	{ .frames = 26, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_8_3[] = {
	{ .frames = 26, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_8_4[] = {
	{ .frames = 26, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_8_5[] = {
	{ .frames = 26, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_8_6[] = {
	{ .frames = 26, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_8_7[] = {
	{ .frames = 26, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_8_8[] = {
	{ .frames = 26, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {7, 4}, .shadow = {7, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {10, 18}, .shadow = {10, 18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 174, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 175, .offset = {-8, 18}, .shadow = {-8, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {-7, 4}, .shadow = {-7, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {18, 4}, .shadow = {18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {21, 13}, .shadow = {21, 13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 173, .offset = {21, 21}, .shadow = {21, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 174, .offset = {12, 22}, .shadow = {12, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {3, 16}, .shadow = {3, 16} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, 8}, .shadow = {0, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {17, -5}, .shadow = {17, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 172, .offset = {22, 0}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 173, .offset = {20, 5}, .shadow = {20, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {12, 6}, .shadow = {12, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {12, -22}, .shadow = {12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 171, .offset = {20, -22}, .shadow = {20, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 172, .offset = {22, -15}, .shadow = {22, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {18, -5}, .shadow = {18, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {9, -1}, .shadow = {9, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-11, -10}, .shadow = {-11, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-7, -19}, .shadow = {-7, -19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 170, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 171, .offset = {7, -19}, .shadow = {7, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {11, -10}, .shadow = {11, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-12, -22}, .shadow = {-12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 177, .offset = {-20, -22}, .shadow = {-20, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 176, .offset = {-22, -15}, .shadow = {-22, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {-18, -5}, .shadow = {-18, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {-9, -1}, .shadow = {-9, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-17, -5}, .shadow = {-17, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 176, .offset = {-22, 0}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 175, .offset = {-20, 5}, .shadow = {-20, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {-12, 6}, .shadow = {-12, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-18, 4}, .shadow = {-18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-21, 13}, .shadow = {-21, 13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 175, .offset = {-21, 21}, .shadow = {-21, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 174, .offset = {-12, 22}, .shadow = {-12, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {-3, 16}, .shadow = {-3, 16} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 8}, .shadow = {0, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 190, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 190, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 191, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 191, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 193, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 193, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 194, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 194, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 194, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 195, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 196, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 196, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 196, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 197, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 197, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 197, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 195, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 199, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 199, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 199, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 200, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 200, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 200, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 204, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 205, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 205, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 205, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 205, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 206, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 206, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 206, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 206, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 204, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMarillAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 207, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 208, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 208, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 208, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 208, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 209, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 209, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 209, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 209, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 207, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sMarillGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_1.4bpp.lz");
static const ax_sprite sMarillSprites1[] = {
	{sMarillGfx1, ARRAY_COUNT(sMarillGfx1)}, 
	{NULL, 0}
};
static const u8 sMarillGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_2.4bpp.lz");
static const ax_sprite sMarillSprites2[] = {
	{sMarillGfx2, ARRAY_COUNT(sMarillGfx2)}, 
	{NULL, 0}
};
static const u8 sMarillGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_3.4bpp.lz");
static const ax_sprite sMarillSprites3[] = {
	{sMarillGfx3, ARRAY_COUNT(sMarillGfx3)}, 
	{NULL, 0}
};
static const u8 sMarillGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_4.4bpp.lz");
static const ax_sprite sMarillSprites4[] = {
	{sMarillGfx4, ARRAY_COUNT(sMarillGfx4)}, 
	{NULL, 0}
};
static const u8 sMarillGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_5.4bpp.lz");
static const ax_sprite sMarillSprites5[] = {
	{sMarillGfx5, ARRAY_COUNT(sMarillGfx5)}, 
	{NULL, 0}
};
static const u8 sMarillGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_6.4bpp.lz");
static const ax_sprite sMarillSprites6[] = {
	{sMarillGfx6, ARRAY_COUNT(sMarillGfx6)}, 
	{NULL, 0}
};
static const u8 sMarillGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_7.4bpp.lz");
static const ax_sprite sMarillSprites7[] = {
	{sMarillGfx7, ARRAY_COUNT(sMarillGfx7)}, 
	{NULL, 0}
};
static const u8 sMarillGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_8.4bpp.lz");
static const ax_sprite sMarillSprites8[] = {
	{sMarillGfx8, ARRAY_COUNT(sMarillGfx8)}, 
	{NULL, 0}
};
static const u8 sMarillGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_9.4bpp.lz");
static const ax_sprite sMarillSprites9[] = {
	{sMarillGfx9, ARRAY_COUNT(sMarillGfx9)}, 
	{NULL, 0}
};
static const u8 sMarillGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_10.4bpp.lz");
static const ax_sprite sMarillSprites10[] = {
	{sMarillGfx10, ARRAY_COUNT(sMarillGfx10)}, 
	{NULL, 0}
};
static const u8 sMarillGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_11.4bpp.lz");
static const ax_sprite sMarillSprites11[] = {
	{sMarillGfx11, ARRAY_COUNT(sMarillGfx11)}, 
	{NULL, 0}
};
static const u8 sMarillGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_12.4bpp.lz");
static const ax_sprite sMarillSprites12[] = {
	{sMarillGfx12, ARRAY_COUNT(sMarillGfx12)}, 
	{NULL, 0}
};
static const u8 sMarillGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_13.4bpp.lz");
static const ax_sprite sMarillSprites13[] = {
	{sMarillGfx13, ARRAY_COUNT(sMarillGfx13)}, 
	{NULL, 0}
};
static const u8 sMarillGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_14.4bpp.lz");
static const ax_sprite sMarillSprites14[] = {
	{sMarillGfx14, ARRAY_COUNT(sMarillGfx14)}, 
	{NULL, 0}
};
static const u8 sMarillGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_15.4bpp.lz");
static const ax_sprite sMarillSprites15[] = {
	{sMarillGfx15, ARRAY_COUNT(sMarillGfx15)}, 
	{NULL, 0}
};
static const u8 sMarillGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_16.4bpp.lz");
static const u8 sMarillGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_16_1.4bpp.lz");
static const u8 sMarillGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_16_2.4bpp.lz");
static const u8 sMarillGfx16_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_16_3.4bpp.lz");
static const ax_sprite sMarillSprites16[] = {
	{NULL, 32}, 
	{sMarillGfx16, ARRAY_COUNT(sMarillGfx16)}, 
	{NULL, 96}, 
	{sMarillGfx16_1, ARRAY_COUNT(sMarillGfx16_1)}, 
	{NULL, 64}, 
	{sMarillGfx16_2, ARRAY_COUNT(sMarillGfx16_2)}, 
	{NULL, 32}, 
	{sMarillGfx16_3, ARRAY_COUNT(sMarillGfx16_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMarillGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_17.4bpp.lz");
static const u8 sMarillGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_17_1.4bpp.lz");
static const u8 sMarillGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_17_2.4bpp.lz");
static const u8 sMarillGfx17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_17_3.4bpp.lz");
static const ax_sprite sMarillSprites17[] = {
	{NULL, 32}, 
	{sMarillGfx17, ARRAY_COUNT(sMarillGfx17)}, 
	{NULL, 32}, 
	{sMarillGfx17_1, ARRAY_COUNT(sMarillGfx17_1)}, 
	{NULL, 32}, 
	{sMarillGfx17_2, ARRAY_COUNT(sMarillGfx17_2)}, 
	{NULL, 32}, 
	{sMarillGfx17_3, ARRAY_COUNT(sMarillGfx17_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMarillGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_18.4bpp.lz");
static const ax_sprite sMarillSprites18[] = {
	{NULL, 32}, 
	{sMarillGfx18, ARRAY_COUNT(sMarillGfx18)}, 
	{NULL, 0}
};
static const u8 sMarillGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_19.4bpp.lz");
static const u8 sMarillGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_19_1.4bpp.lz");
static const u8 sMarillGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_19_2.4bpp.lz");
static const u8 sMarillGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_19_3.4bpp.lz");
static const ax_sprite sMarillSprites19[] = {
	{NULL, 32}, 
	{sMarillGfx19, ARRAY_COUNT(sMarillGfx19)}, 
	{NULL, 64}, 
	{sMarillGfx19_1, ARRAY_COUNT(sMarillGfx19_1)}, 
	{NULL, 32}, 
	{sMarillGfx19_2, ARRAY_COUNT(sMarillGfx19_2)}, 
	{NULL, 32}, 
	{sMarillGfx19_3, ARRAY_COUNT(sMarillGfx19_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMarillGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_20.4bpp.lz");
static const u8 sMarillGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_20_1.4bpp.lz");
static const u8 sMarillGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_20_2.4bpp.lz");
static const u8 sMarillGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_20_3.4bpp.lz");
static const ax_sprite sMarillSprites20[] = {
	{NULL, 32}, 
	{sMarillGfx20, ARRAY_COUNT(sMarillGfx20)}, 
	{NULL, 64}, 
	{sMarillGfx20_1, ARRAY_COUNT(sMarillGfx20_1)}, 
	{NULL, 32}, 
	{sMarillGfx20_2, ARRAY_COUNT(sMarillGfx20_2)}, 
	{NULL, 32}, 
	{sMarillGfx20_3, ARRAY_COUNT(sMarillGfx20_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMarillGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_21.4bpp.lz");
static const u8 sMarillGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_21_1.4bpp.lz");
static const u8 sMarillGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_21_2.4bpp.lz");
static const u8 sMarillGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_21_3.4bpp.lz");
static const ax_sprite sMarillSprites21[] = {
	{NULL, 32}, 
	{sMarillGfx21, ARRAY_COUNT(sMarillGfx21)}, 
	{NULL, 64}, 
	{sMarillGfx21_1, ARRAY_COUNT(sMarillGfx21_1)}, 
	{NULL, 32}, 
	{sMarillGfx21_2, ARRAY_COUNT(sMarillGfx21_2)}, 
	{NULL, 32}, 
	{sMarillGfx21_3, ARRAY_COUNT(sMarillGfx21_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMarillGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_22.4bpp.lz");
static const u8 sMarillGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_22_1.4bpp.lz");
static const ax_sprite sMarillSprites22[] = {
	{sMarillGfx22, ARRAY_COUNT(sMarillGfx22)}, 
	{NULL, 32}, 
	{sMarillGfx22_1, ARRAY_COUNT(sMarillGfx22_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMarillGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_23.4bpp.lz");
static const ax_sprite sMarillSprites23[] = {
	{sMarillGfx23, ARRAY_COUNT(sMarillGfx23)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sMarillGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_24.4bpp.lz");
static const u8 sMarillGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_24_1.4bpp.lz");
static const ax_sprite sMarillSprites24[] = {
	{sMarillGfx24, ARRAY_COUNT(sMarillGfx24)}, 
	{NULL, 64}, 
	{sMarillGfx24_1, ARRAY_COUNT(sMarillGfx24_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMarillGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_25.4bpp.lz");
static const u8 sMarillGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_25_1.4bpp.lz");
static const u8 sMarillGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_25_2.4bpp.lz");
static const ax_sprite sMarillSprites25[] = {
	{sMarillGfx25, ARRAY_COUNT(sMarillGfx25)}, 
	{NULL, 32}, 
	{sMarillGfx25_1, ARRAY_COUNT(sMarillGfx25_1)}, 
	{NULL, 32}, 
	{sMarillGfx25_2, ARRAY_COUNT(sMarillGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMarillGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_26.4bpp.lz");
static const ax_sprite sMarillSprites26[] = {
	{sMarillGfx26, ARRAY_COUNT(sMarillGfx26)}, 
	{NULL, 0}
};
static const u8 sMarillGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_27.4bpp.lz");
static const ax_sprite sMarillSprites27[] = {
	{sMarillGfx27, ARRAY_COUNT(sMarillGfx27)}, 
	{NULL, 0}
};
static const u8 sMarillGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_28.4bpp.lz");
static const ax_sprite sMarillSprites28[] = {
	{sMarillGfx28, ARRAY_COUNT(sMarillGfx28)}, 
	{NULL, 0}
};
static const u8 sMarillGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_29.4bpp.lz");
static const ax_sprite sMarillSprites29[] = {
	{sMarillGfx29, ARRAY_COUNT(sMarillGfx29)}, 
	{NULL, 0}
};
static const u8 sMarillGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_30.4bpp.lz");
static const ax_sprite sMarillSprites30[] = {
	{sMarillGfx30, ARRAY_COUNT(sMarillGfx30)}, 
	{NULL, 0}
};
static const u8 sMarillGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_31.4bpp.lz");
static const ax_sprite sMarillSprites31[] = {
	{sMarillGfx31, ARRAY_COUNT(sMarillGfx31)}, 
	{NULL, 0}
};
static const u8 sMarillGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/marill/sprite_32.4bpp.lz");
static const ax_sprite sMarillSprites32[] = {
	{sMarillGfx32, ARRAY_COUNT(sMarillGfx32)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesMarill[] = {
	sMarillPose1,
	sMarillPose2,
	sMarillPose3,
	sMarillPose4,
	sMarillPose5,
	sMarillPose6,
	sMarillPose7,
	sMarillPose8,
	sMarillPose9,
	sMarillPose10,
	sMarillPose11,
	sMarillPose12,
	sMarillPose13,
	sMarillPose14,
	sMarillPose15,
	sMarillPose16,
	sMarillPose17,
	sMarillPose18,
	sMarillPose19,
	sMarillPose20,
	sMarillPose21,
	sMarillPose22,
	sMarillPose23,
	sMarillPose24,
	sMarillPose1,
	sMarillPose2,
	sMarillPose3,
	sMarillPose28,
	sMarillPose4,
	sMarillPose5,
	sMarillPose6,
	sMarillPose32,
	sMarillPose7,
	sMarillPose8,
	sMarillPose9,
	sMarillPose36,
	sMarillPose10,
	sMarillPose11,
	sMarillPose12,
	sMarillPose40,
	sMarillPose13,
	sMarillPose14,
	sMarillPose15,
	sMarillPose44,
	sMarillPose16,
	sMarillPose17,
	sMarillPose18,
	sMarillPose48,
	sMarillPose19,
	sMarillPose20,
	sMarillPose21,
	sMarillPose52,
	sMarillPose22,
	sMarillPose23,
	sMarillPose24,
	sMarillPose56,
	sMarillPose1,
	sMarillPose2,
	sMarillPose3,
	sMarillPose28,
	sMarillPose4,
	sMarillPose5,
	sMarillPose6,
	sMarillPose32,
	sMarillPose7,
	sMarillPose8,
	sMarillPose9,
	sMarillPose36,
	sMarillPose10,
	sMarillPose11,
	sMarillPose12,
	sMarillPose40,
	sMarillPose13,
	sMarillPose14,
	sMarillPose15,
	sMarillPose44,
	sMarillPose16,
	sMarillPose17,
	sMarillPose18,
	sMarillPose48,
	sMarillPose19,
	sMarillPose20,
	sMarillPose21,
	sMarillPose52,
	sMarillPose22,
	sMarillPose23,
	sMarillPose24,
	sMarillPose56,
	sMarillPose1,
	sMarillPose90,
	sMarillPose4,
	sMarillPose92,
	sMarillPose7,
	sMarillPose94,
	sMarillPose10,
	sMarillPose96,
	sMarillPose13,
	sMarillPose98,
	sMarillPose16,
	sMarillPose100,
	sMarillPose19,
	sMarillPose102,
	sMarillPose22,
	sMarillPose104,
	sMarillPose1,
	sMarillPose2,
	sMarillPose3,
	sMarillPose28,
	sMarillPose4,
	sMarillPose5,
	sMarillPose6,
	sMarillPose32,
	sMarillPose7,
	sMarillPose8,
	sMarillPose9,
	sMarillPose36,
	sMarillPose10,
	sMarillPose11,
	sMarillPose12,
	sMarillPose120,
	sMarillPose13,
	sMarillPose14,
	sMarillPose15,
	sMarillPose44,
	sMarillPose16,
	sMarillPose17,
	sMarillPose18,
	sMarillPose128,
	sMarillPose19,
	sMarillPose20,
	sMarillPose21,
	sMarillPose52,
	sMarillPose22,
	sMarillPose23,
	sMarillPose24,
	sMarillPose56,
	sMarillPose137,
	sMarillPose138,
	sMarillPose139,
	sMarillPose140,
	sMarillPose141,
	sMarillPose142,
	sMarillPose143,
	sMarillPose144,
	sMarillPose145,
	sMarillPose146,
	sMarillPose1,
	sMarillPose2,
	sMarillPose3,
	sMarillPose4,
	sMarillPose5,
	sMarillPose6,
	sMarillPose7,
	sMarillPose8,
	sMarillPose9,
	sMarillPose10,
	sMarillPose11,
	sMarillPose12,
	sMarillPose13,
	sMarillPose14,
	sMarillPose15,
	sMarillPose16,
	sMarillPose17,
	sMarillPose18,
	sMarillPose19,
	sMarillPose20,
	sMarillPose21,
	sMarillPose22,
	sMarillPose23,
	sMarillPose24,
	sMarillPose28,
	sMarillPose172,
	sMarillPose173,
	sMarillPose48,
	sMarillPose44,
	sMarillPose40,
	sMarillPose177,
	sMarillPose178,
	sMarillPose90,
	sMarillPose180,
	sMarillPose181,
	sMarillPose182,
	sMarillPose183,
	sMarillPose184,
	sMarillPose185,
	sMarillPose186,
	sMarillPose1,
	sMarillPose90,
	sMarillPose28,
	sMarillPose4,
	sMarillPose191,
	sMarillPose178,
	sMarillPose7,
	sMarillPose181,
	sMarillPose177,
	sMarillPose10,
	sMarillPose182,
	sMarillPose40,
	sMarillPose13,
	sMarillPose183,
	sMarillPose44,
	sMarillPose16,
	sMarillPose184,
	sMarillPose48,
	sMarillPose19,
	sMarillPose185,
	sMarillPose207,
	sMarillPose22,
	sMarillPose186,
	sMarillPose172,
	sMarillPose28,
	sMarillPose172,
	sMarillPose207,
	sMarillPose48,
	sMarillPose44,
	sMarillPose40,
	sMarillPose177,
	sMarillPose178,
	sMarillPose1,
	sMarillPose22,
	sMarillPose19,
	sMarillPose16,
	sMarillPose13,
	sMarillPose10,
	sMarillPose7,
	sMarillPose4,
};

static const struct PositionSets sAxPositionsMarill[] = {
	[0] = { .set = { {0, -6}, {-8, -6}, {7, -6}, {-1, -6} } },
	[1] = { .set = { {0, -5}, {-7, -4}, {7, -6}, {-1, -5} } },
	[2] = { .set = { {0, -5}, {-8, -6}, {6, -4}, {-1, -5} } },
	[3] = { .set = { {2, -7}, {6, -7}, {-4, -4}, {0, -7} } },
	[4] = { .set = { {2, -6}, {6, -5}, {-6, -4}, {0, -6} } },
	[5] = { .set = { {2, -6}, {6, -8}, {-3, -3}, {0, -6} } },
	[6] = { .set = { {5, -7}, {1, -7}, {0, -4}, {-1, -7} } },
	[7] = { .set = { {5, -6}, {-1, -5}, {-2, -3}, {-1, -6} } },
	[8] = { .set = { {5, -6}, {3, -6}, {1, -3}, {-1, -6} } },
	[9] = { .set = { {1, -7}, {-3, -8}, {5, -4}, {-1, -7} } },
	[10] = { .set = { {2, -6}, {-4, -7}, {3, -3}, {-1, -6} } },
	[11] = { .set = { {1, -7}, {-6, -8}, {6, -4}, {-1, -6} } },
	[12] = { .set = { {-1, -7}, {7, -7}, {-8, -7}, {0, -6} } },
	[13] = { .set = { {0, -6}, {7, -7}, {-8, -4}, {0, -5} } },
	[14] = { .set = { {0, -6}, {7, -4}, {-8, -7}, {0, -5} } },
	[15] = { .set = { {-2, -7}, {2, -8}, {-6, -4}, {0, -7} } },
	[16] = { .set = { {-3, -6}, {3, -7}, {-4, -3}, {0, -6} } },
	[17] = { .set = { {-2, -7}, {5, -8}, {-7, -4}, {0, -6} } },
	[18] = { .set = { {-6, -7}, {-2, -7}, {-1, -4}, {0, -7} } },
	[19] = { .set = { {-6, -6}, {0, -5}, {1, -3}, {0, -6} } },
	[20] = { .set = { {-6, -6}, {-4, -6}, {-2, -3}, {0, -6} } },
	[21] = { .set = { {-3, -7}, {-7, -7}, {3, -4}, {-1, -7} } },
	[22] = { .set = { {-3, -6}, {-7, -5}, {5, -4}, {-1, -6} } },
	[23] = { .set = { {-3, -6}, {-7, -8}, {2, -3}, {-1, -6} } },
	[24] = { .set = { {0, -6}, {-8, -6}, {7, -6}, {-1, -6} } },
	[25] = { .set = { {0, -5}, {-7, -4}, {7, -6}, {-1, -5} } },
	[26] = { .set = { {0, -5}, {-8, -6}, {6, -4}, {-1, -5} } },
	[27] = { .set = { {-1, -3}, {-7, -4}, {6, -4}, {-1, -6} } },
	[28] = { .set = { {2, -7}, {6, -7}, {-4, -4}, {0, -7} } },
	[29] = { .set = { {2, -6}, {6, -5}, {-6, -4}, {0, -6} } },
	[30] = { .set = { {2, -6}, {6, -8}, {-3, -3}, {0, -6} } },
	[31] = { .set = { {4, -3}, {8, -6}, {-3, -4}, {1, -6} } },
	[32] = { .set = { {5, -7}, {1, -7}, {0, -4}, {-1, -7} } },
	[33] = { .set = { {5, -6}, {-1, -5}, {-2, -3}, {-1, -6} } },
	[34] = { .set = { {5, -6}, {3, -6}, {1, -3}, {-1, -6} } },
	[35] = { .set = { {6, -4}, {3, -9}, {2, -5}, {2, -6} } },
	[36] = { .set = { {1, -7}, {-3, -8}, {5, -4}, {-1, -7} } },
	[37] = { .set = { {2, -6}, {-4, -7}, {3, -3}, {-1, -6} } },
	[38] = { .set = { {1, -7}, {-6, -8}, {6, -4}, {-1, -6} } },
	[39] = { .set = { {2, -8}, {-3, -12}, {6, -6}, {0, -8} } },
	[40] = { .set = { {-1, -7}, {7, -7}, {-8, -7}, {0, -6} } },
	[41] = { .set = { {0, -6}, {7, -7}, {-8, -4}, {0, -5} } },
	[42] = { .set = { {0, -6}, {7, -4}, {-8, -7}, {0, -5} } },
	[43] = { .set = { {0, -6}, {6, -7}, {-7, -7}, {0, -8} } },
	[44] = { .set = { {-2, -7}, {2, -8}, {-6, -4}, {0, -7} } },
	[45] = { .set = { {-3, -6}, {3, -7}, {-4, -3}, {0, -6} } },
	[46] = { .set = { {-2, -7}, {5, -8}, {-7, -4}, {0, -6} } },
	[47] = { .set = { {-3, -8}, {2, -12}, {-7, -6}, {-1, -8} } },
	[48] = { .set = { {-6, -7}, {-2, -7}, {-1, -4}, {0, -7} } },
	[49] = { .set = { {-6, -6}, {0, -5}, {1, -3}, {0, -6} } },
	[50] = { .set = { {-6, -6}, {-4, -6}, {-2, -3}, {0, -6} } },
	[51] = { .set = { {-7, -4}, {-4, -9}, {-3, -5}, {-3, -6} } },
	[52] = { .set = { {-3, -7}, {-7, -7}, {3, -4}, {-1, -7} } },
	[53] = { .set = { {-3, -6}, {-7, -5}, {5, -4}, {-1, -6} } },
	[54] = { .set = { {-3, -6}, {-7, -8}, {2, -3}, {-1, -6} } },
	[55] = { .set = { {-5, -3}, {-9, -6}, {2, -4}, {-2, -6} } },
	[56] = { .set = { {0, -6}, {-8, -6}, {7, -6}, {-1, -6} } },
	[57] = { .set = { {0, -5}, {-7, -4}, {7, -6}, {-1, -5} } },
	[58] = { .set = { {0, -5}, {-8, -6}, {6, -4}, {-1, -5} } },
	[59] = { .set = { {-1, -3}, {-7, -4}, {6, -4}, {-1, -6} } },
	[60] = { .set = { {2, -7}, {6, -7}, {-4, -4}, {0, -7} } },
	[61] = { .set = { {2, -6}, {6, -5}, {-6, -4}, {0, -6} } },
	[62] = { .set = { {2, -6}, {6, -8}, {-3, -3}, {0, -6} } },
	[63] = { .set = { {4, -3}, {8, -6}, {-3, -4}, {1, -6} } },
	[64] = { .set = { {5, -7}, {1, -7}, {0, -4}, {-1, -7} } },
	[65] = { .set = { {5, -6}, {-1, -5}, {-2, -3}, {-1, -6} } },
	[66] = { .set = { {5, -6}, {3, -6}, {1, -3}, {-1, -6} } },
	[67] = { .set = { {6, -4}, {3, -9}, {2, -5}, {2, -6} } },
	[68] = { .set = { {1, -7}, {-3, -8}, {5, -4}, {-1, -7} } },
	[69] = { .set = { {2, -6}, {-4, -7}, {3, -3}, {-1, -6} } },
	[70] = { .set = { {1, -7}, {-6, -8}, {6, -4}, {-1, -6} } },
	[71] = { .set = { {2, -8}, {-3, -12}, {6, -6}, {0, -8} } },
	[72] = { .set = { {-1, -7}, {7, -7}, {-8, -7}, {0, -6} } },
	[73] = { .set = { {0, -6}, {7, -7}, {-8, -4}, {0, -5} } },
	[74] = { .set = { {0, -6}, {7, -4}, {-8, -7}, {0, -5} } },
	[75] = { .set = { {0, -6}, {6, -7}, {-7, -7}, {0, -8} } },
	[76] = { .set = { {-2, -7}, {2, -8}, {-6, -4}, {0, -7} } },
	[77] = { .set = { {-3, -6}, {3, -7}, {-4, -3}, {0, -6} } },
	[78] = { .set = { {-2, -7}, {5, -8}, {-7, -4}, {0, -6} } },
	[79] = { .set = { {-3, -8}, {2, -12}, {-7, -6}, {-1, -8} } },
	[80] = { .set = { {-6, -7}, {-2, -7}, {-1, -4}, {0, -7} } },
	[81] = { .set = { {-6, -6}, {0, -5}, {1, -3}, {0, -6} } },
	[82] = { .set = { {-6, -6}, {-4, -6}, {-2, -3}, {0, -6} } },
	[83] = { .set = { {-7, -4}, {-4, -9}, {-3, -5}, {-3, -6} } },
	[84] = { .set = { {-3, -7}, {-7, -7}, {3, -4}, {-1, -7} } },
	[85] = { .set = { {-3, -6}, {-7, -5}, {5, -4}, {-1, -6} } },
	[86] = { .set = { {-3, -6}, {-7, -8}, {2, -3}, {-1, -6} } },
	[87] = { .set = { {-5, -3}, {-9, -6}, {2, -4}, {-2, -6} } },
	[88] = { .set = { {0, -6}, {-8, -6}, {7, -6}, {-1, -6} } },
	[89] = { .set = { {0, -4}, {-8, -5}, {7, -5}, {-1, -6} } },
	[90] = { .set = { {2, -7}, {6, -7}, {-4, -4}, {0, -7} } },
	[91] = { .set = { {4, -6}, {8, -6}, {-5, -4}, {1, -6} } },
	[92] = { .set = { {5, -7}, {1, -7}, {0, -4}, {-1, -7} } },
	[93] = { .set = { {7, -5}, {3, -8}, {1, -4}, {1, -6} } },
	[94] = { .set = { {1, -7}, {-3, -8}, {5, -4}, {-1, -7} } },
	[95] = { .set = { {2, -7}, {-3, -9}, {5, -4}, {0, -8} } },
	[96] = { .set = { {-1, -7}, {7, -7}, {-8, -7}, {0, -6} } },
	[97] = { .set = { {0, -7}, {6, -7}, {-7, -7}, {0, -8} } },
	[98] = { .set = { {-2, -7}, {2, -8}, {-6, -4}, {0, -7} } },
	[99] = { .set = { {-3, -7}, {2, -9}, {-6, -4}, {-1, -8} } },
	[100] = { .set = { {-6, -7}, {-2, -7}, {-1, -4}, {0, -7} } },
	[101] = { .set = { {-8, -5}, {-4, -8}, {-2, -4}, {-2, -6} } },
	[102] = { .set = { {-3, -7}, {-7, -7}, {3, -4}, {-1, -7} } },
	[103] = { .set = { {-5, -6}, {-9, -6}, {4, -4}, {-2, -6} } },
	[104] = { .set = { {0, -6}, {-8, -6}, {7, -6}, {-1, -6} } },
	[105] = { .set = { {0, -5}, {-7, -4}, {7, -6}, {-1, -5} } },
	[106] = { .set = { {0, -5}, {-8, -6}, {6, -4}, {-1, -5} } },
	[107] = { .set = { {-1, -3}, {-7, -4}, {6, -4}, {-1, -6} } },
	[108] = { .set = { {2, -7}, {6, -7}, {-4, -4}, {0, -7} } },
	[109] = { .set = { {2, -6}, {6, -5}, {-6, -4}, {0, -6} } },
	[110] = { .set = { {2, -6}, {6, -8}, {-3, -3}, {0, -6} } },
	[111] = { .set = { {4, -3}, {8, -6}, {-3, -4}, {1, -6} } },
	[112] = { .set = { {5, -7}, {1, -7}, {0, -4}, {-1, -7} } },
	[113] = { .set = { {5, -6}, {-1, -5}, {-2, -3}, {-1, -6} } },
	[114] = { .set = { {5, -6}, {3, -6}, {1, -3}, {-1, -6} } },
	[115] = { .set = { {6, -4}, {3, -9}, {2, -5}, {2, -6} } },
	[116] = { .set = { {1, -7}, {-3, -8}, {5, -4}, {-1, -7} } },
	[117] = { .set = { {2, -6}, {-4, -7}, {3, -3}, {-1, -6} } },
	[118] = { .set = { {1, -7}, {-6, -8}, {6, -4}, {-1, -6} } },
	[119] = { .set = { {1, -8}, {-4, -12}, {5, -6}, {-1, -8} } },
	[120] = { .set = { {-1, -7}, {7, -7}, {-8, -7}, {0, -6} } },
	[121] = { .set = { {0, -6}, {7, -7}, {-8, -4}, {0, -5} } },
	[122] = { .set = { {0, -6}, {7, -4}, {-8, -7}, {0, -5} } },
	[123] = { .set = { {0, -6}, {6, -7}, {-7, -7}, {0, -8} } },
	[124] = { .set = { {-2, -7}, {2, -8}, {-6, -4}, {0, -7} } },
	[125] = { .set = { {-3, -6}, {3, -7}, {-4, -3}, {0, -6} } },
	[126] = { .set = { {-2, -7}, {5, -8}, {-7, -4}, {0, -6} } },
	[127] = { .set = { {-2, -8}, {3, -12}, {-6, -6}, {0, -8} } },
	[128] = { .set = { {-6, -7}, {-2, -7}, {-1, -4}, {0, -7} } },
	[129] = { .set = { {-6, -6}, {0, -5}, {1, -3}, {0, -6} } },
	[130] = { .set = { {-6, -6}, {-4, -6}, {-2, -3}, {0, -6} } },
	[131] = { .set = { {-7, -4}, {-4, -9}, {-3, -5}, {-3, -6} } },
	[132] = { .set = { {-3, -7}, {-7, -7}, {3, -4}, {-1, -7} } },
	[133] = { .set = { {-3, -6}, {-7, -5}, {5, -4}, {-1, -6} } },
	[134] = { .set = { {-3, -6}, {-7, -8}, {2, -3}, {-1, -6} } },
	[135] = { .set = { {-5, -3}, {-9, -6}, {2, -4}, {-2, -6} } },
	[136] = { .set = { {0, -8}, {-4, -8}, {3, -2}, {1, -6} } },
	[137] = { .set = { {0, -8}, {-4, -8}, {3, -2}, {1, -6} } },
	[138] = { .set = { {-1, -9}, {-8, -9}, {7, -9}, {0, -9} } },
	[139] = { .set = { {1, -10}, {6, -11}, {-5, -7}, {-1, -9} } },
	[140] = { .set = { {5, -10}, {1, -12}, {0, -9}, {-1, -8} } },
	[141] = { .set = { {3, -11}, {-3, -13}, {7, -9}, {0, -9} } },
	[142] = { .set = { {0, -7}, {7, -7}, {-8, -7}, {0, -6} } },
	[143] = { .set = { {-4, -11}, {2, -13}, {-8, -9}, {-1, -9} } },
	[144] = { .set = { {-6, -10}, {-2, -12}, {-1, -9}, {0, -8} } },
	[145] = { .set = { {-2, -10}, {-7, -11}, {4, -7}, {0, -9} } },
	[146] = { .set = { {0, -6}, {-8, -6}, {7, -6}, {-1, -6} } },
	[147] = { .set = { {0, -5}, {-7, -4}, {7, -6}, {-1, -5} } },
	[148] = { .set = { {0, -5}, {-8, -6}, {6, -4}, {-1, -5} } },
	[149] = { .set = { {2, -7}, {6, -7}, {-4, -4}, {0, -7} } },
	[150] = { .set = { {2, -6}, {6, -5}, {-6, -4}, {0, -6} } },
	[151] = { .set = { {2, -6}, {6, -8}, {-3, -3}, {0, -6} } },
	[152] = { .set = { {5, -7}, {1, -7}, {0, -4}, {-1, -7} } },
	[153] = { .set = { {5, -6}, {-1, -5}, {-2, -3}, {-1, -6} } },
	[154] = { .set = { {5, -6}, {3, -6}, {1, -3}, {-1, -6} } },
	[155] = { .set = { {1, -7}, {-3, -8}, {5, -4}, {-1, -7} } },
	[156] = { .set = { {2, -6}, {-4, -7}, {3, -3}, {-1, -6} } },
	[157] = { .set = { {1, -7}, {-6, -8}, {6, -4}, {-1, -6} } },
	[158] = { .set = { {-1, -7}, {7, -7}, {-8, -7}, {0, -6} } },
	[159] = { .set = { {0, -6}, {7, -7}, {-8, -4}, {0, -5} } },
	[160] = { .set = { {0, -6}, {7, -4}, {-8, -7}, {0, -5} } },
	[161] = { .set = { {-2, -7}, {2, -8}, {-6, -4}, {0, -7} } },
	[162] = { .set = { {-3, -6}, {3, -7}, {-4, -3}, {0, -6} } },
	[163] = { .set = { {-2, -7}, {5, -8}, {-7, -4}, {0, -6} } },
	[164] = { .set = { {-6, -7}, {-2, -7}, {-1, -4}, {0, -7} } },
	[165] = { .set = { {-6, -6}, {0, -5}, {1, -3}, {0, -6} } },
	[166] = { .set = { {-6, -6}, {-4, -6}, {-2, -3}, {0, -6} } },
	[167] = { .set = { {-3, -7}, {-7, -7}, {3, -4}, {-1, -7} } },
	[168] = { .set = { {-3, -6}, {-7, -5}, {5, -4}, {-1, -6} } },
	[169] = { .set = { {-3, -6}, {-7, -8}, {2, -3}, {-1, -6} } },
	[170] = { .set = { {-1, -3}, {-7, -4}, {6, -4}, {-1, -6} } },
	[171] = { .set = { {-4, -3}, {-8, -6}, {3, -4}, {-1, -6} } },
	[172] = { .set = { {-5, -4}, {-2, -9}, {-1, -5}, {-1, -6} } },
	[173] = { .set = { {-3, -8}, {2, -12}, {-7, -6}, {-1, -8} } },
	[174] = { .set = { {0, -6}, {6, -7}, {-7, -7}, {0, -8} } },
	[175] = { .set = { {2, -8}, {-3, -12}, {6, -6}, {0, -8} } },
	[176] = { .set = { {5, -4}, {2, -9}, {1, -5}, {1, -6} } },
	[177] = { .set = { {3, -3}, {7, -6}, {-4, -4}, {0, -6} } },
	[178] = { .set = { {0, -4}, {-8, -5}, {7, -5}, {-1, -6} } },
	[179] = { .set = { {2, -6}, {6, -6}, {-7, -4}, {-1, -6} } },
	[180] = { .set = { {6, -5}, {2, -8}, {0, -4}, {0, -6} } },
	[181] = { .set = { {1, -6}, {-4, -8}, {4, -3}, {-1, -7} } },
	[182] = { .set = { {0, -6}, {6, -6}, {-7, -6}, {0, -7} } },
	[183] = { .set = { {-2, -6}, {3, -8}, {-5, -3}, {0, -7} } },
	[184] = { .set = { {-7, -5}, {-3, -8}, {-1, -4}, {-1, -6} } },
	[185] = { .set = { {-4, -6}, {-8, -6}, {5, -4}, {-1, -6} } },
	[186] = { .set = { {0, -6}, {-8, -6}, {7, -6}, {-1, -6} } },
	[187] = { .set = { {0, -4}, {-8, -5}, {7, -5}, {-1, -6} } },
	[188] = { .set = { {-1, -3}, {-7, -4}, {6, -4}, {-1, -6} } },
	[189] = { .set = { {2, -7}, {6, -7}, {-4, -4}, {0, -7} } },
	[190] = { .set = { {3, -6}, {7, -6}, {-6, -4}, {0, -6} } },
	[191] = { .set = { {3, -3}, {7, -6}, {-4, -4}, {0, -6} } },
	[192] = { .set = { {5, -7}, {1, -7}, {0, -4}, {-1, -7} } },
	[193] = { .set = { {6, -5}, {2, -8}, {0, -4}, {0, -6} } },
	[194] = { .set = { {5, -4}, {2, -9}, {1, -5}, {1, -6} } },
	[195] = { .set = { {1, -7}, {-3, -8}, {5, -4}, {-1, -7} } },
	[196] = { .set = { {1, -6}, {-4, -8}, {4, -3}, {-1, -7} } },
	[197] = { .set = { {2, -8}, {-3, -12}, {6, -6}, {0, -8} } },
	[198] = { .set = { {-1, -7}, {7, -7}, {-8, -7}, {0, -6} } },
	[199] = { .set = { {0, -6}, {6, -6}, {-7, -6}, {0, -7} } },
	[200] = { .set = { {0, -6}, {6, -7}, {-7, -7}, {0, -8} } },
	[201] = { .set = { {-2, -7}, {2, -8}, {-6, -4}, {0, -7} } },
	[202] = { .set = { {-2, -6}, {3, -8}, {-5, -3}, {0, -7} } },
	[203] = { .set = { {-3, -8}, {2, -12}, {-7, -6}, {-1, -8} } },
	[204] = { .set = { {-6, -7}, {-2, -7}, {-1, -4}, {0, -7} } },
	[205] = { .set = { {-7, -5}, {-3, -8}, {-1, -4}, {-1, -6} } },
	[206] = { .set = { {-6, -4}, {-3, -9}, {-2, -5}, {-2, -6} } },
	[207] = { .set = { {-3, -7}, {-7, -7}, {3, -4}, {-1, -7} } },
	[208] = { .set = { {-4, -6}, {-8, -6}, {5, -4}, {-1, -6} } },
	[209] = { .set = { {-4, -3}, {-8, -6}, {3, -4}, {-1, -6} } },
	[210] = { .set = { {-1, -3}, {-7, -4}, {6, -4}, {-1, -6} } },
	[211] = { .set = { {-4, -3}, {-8, -6}, {3, -4}, {-1, -6} } },
	[212] = { .set = { {-6, -4}, {-3, -9}, {-2, -5}, {-2, -6} } },
	[213] = { .set = { {-3, -8}, {2, -12}, {-7, -6}, {-1, -8} } },
	[214] = { .set = { {0, -6}, {6, -7}, {-7, -7}, {0, -8} } },
	[215] = { .set = { {2, -8}, {-3, -12}, {6, -6}, {0, -8} } },
	[216] = { .set = { {5, -4}, {2, -9}, {1, -5}, {1, -6} } },
	[217] = { .set = { {3, -3}, {7, -6}, {-4, -4}, {0, -6} } },
	[218] = { .set = { {0, -6}, {-8, -6}, {7, -6}, {-1, -6} } },
	[219] = { .set = { {-3, -7}, {-7, -7}, {3, -4}, {-1, -7} } },
	[220] = { .set = { {-6, -7}, {-2, -7}, {-1, -4}, {0, -7} } },
	[221] = { .set = { {-2, -7}, {2, -8}, {-6, -4}, {0, -7} } },
	[222] = { .set = { {-1, -7}, {7, -7}, {-8, -7}, {0, -6} } },
	[223] = { .set = { {1, -7}, {-3, -8}, {5, -4}, {-1, -7} } },
	[224] = { .set = { {5, -7}, {1, -7}, {0, -4}, {-1, -7} } },
	[225] = { .set = { {2, -7}, {6, -7}, {-4, -4}, {0, -7} } },
};

static const ax_anim *const sMarillAnimTable1[] = {
	gAxSharedAnim_00039,
	gAxSharedAnim_00083,
	gAxSharedAnim_00088,
	gAxSharedAnim_00093,
	gAxSharedAnim_00044,
	gAxSharedAnim_00058,
	gAxSharedAnim_00064,
	gAxSharedAnim_00069,
};

static const ax_anim *const sMarillAnimTable2[] = {
	gAxSharedAnim_01565,
	gAxSharedAnim_01760,
	gAxSharedAnim_01829,
	gAxSharedAnim_01884,
	gAxSharedAnim_01917,
	gAxSharedAnim_01945,
	gAxSharedAnim_01970,
	gAxSharedAnim_01991,
};

static const ax_anim *const sMarillAnimTable3[] = {
	gAxSharedAnim_02003,
	gAxSharedAnim_02023,
	gAxSharedAnim_02047,
	gAxSharedAnim_02068,
	gAxSharedAnim_02092,
	gAxSharedAnim_02123,
	gAxSharedAnim_02151,
	gAxSharedAnim_02185,
};

static const ax_anim *const sMarillAnimTable4[] = {
	sMarillAnims_4_1,
	sMarillAnims_4_2,
	sMarillAnims_4_3,
	sMarillAnims_4_4,
	sMarillAnims_4_5,
	sMarillAnims_4_6,
	sMarillAnims_4_7,
	sMarillAnims_4_8,
};

static const ax_anim *const sMarillAnimTable5[] = {
	sMarillAnims_5_1,
	sMarillAnims_5_2,
	sMarillAnims_5_3,
	sMarillAnims_5_4,
	sMarillAnims_5_5,
	sMarillAnims_5_6,
	sMarillAnims_5_7,
	sMarillAnims_5_8,
};

static const ax_anim *const sMarillAnimTable6[] = {
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
};

static const ax_anim *const sMarillAnimTable7[] = {
	gAxSharedAnim_00467,
	gAxSharedAnim_00480,
	gAxSharedAnim_00488,
	gAxSharedAnim_00497,
	gAxSharedAnim_00509,
	gAxSharedAnim_00518,
	gAxSharedAnim_00524,
	gAxSharedAnim_00530,
};

static const ax_anim *const sMarillAnimTable8[] = {
	sMarillAnims_8_1,
	sMarillAnims_8_2,
	sMarillAnims_8_3,
	sMarillAnims_8_4,
	sMarillAnims_8_5,
	sMarillAnims_8_6,
	sMarillAnims_8_7,
	sMarillAnims_8_8,
};

static const ax_anim *const sMarillAnimTable9[] = {
	sMarillAnims_9_1,
	sMarillAnims_9_2,
	sMarillAnims_9_3,
	sMarillAnims_9_4,
	sMarillAnims_9_5,
	sMarillAnims_9_6,
	sMarillAnims_9_7,
	sMarillAnims_9_8,
};

static const ax_anim *const sMarillAnimTable10[] = {
	gAxSharedAnim_00905,
	gAxSharedAnim_00918,
	gAxSharedAnim_00930,
	gAxSharedAnim_00942,
	gAxSharedAnim_00955,
	gAxSharedAnim_00965,
	gAxSharedAnim_00978,
	gAxSharedAnim_00993,
};

static const ax_anim *const sMarillAnimTable11[] = {
	gAxSharedAnim_01006,
	sMarillAnims_11_2,
	sMarillAnims_11_3,
	sMarillAnims_11_4,
	sMarillAnims_11_5,
	gAxSharedAnim_01225,
	sMarillAnims_11_7,
	sMarillAnims_11_8,
};

static const ax_anim *const sMarillAnimTable12[] = {
	gAxSharedAnim_01337,
	gAxSharedAnim_01414,
	gAxSharedAnim_01392,
	gAxSharedAnim_01380,
	gAxSharedAnim_01379,
	gAxSharedAnim_01368,
	gAxSharedAnim_01354,
	gAxSharedAnim_01338,
};

static const ax_anim *const sMarillAnimTable13[] = {
	gAxSharedAnim_01422,
	gAxSharedAnim_01464,
	gAxSharedAnim_01461,
	gAxSharedAnim_01456,
	gAxSharedAnim_01446,
	gAxSharedAnim_01443,
	gAxSharedAnim_01438,
	gAxSharedAnim_01429,
};

static const ax_anim *const *const sAxAnimationsMarill[] = {
	sMarillAnimTable1,
	sMarillAnimTable2,
	sMarillAnimTable3,
	sMarillAnimTable4,
	sMarillAnimTable5,
	sMarillAnimTable6,
	sMarillAnimTable7,
	sMarillAnimTable8,
	sMarillAnimTable9,
	sMarillAnimTable10,
	sMarillAnimTable11,
	sMarillAnimTable12,
	sMarillAnimTable13,
};

static const ax_sprite *const sAxSpritesMarill[] = {
	sMarillSprites1,
	sMarillSprites2,
	sMarillSprites3,
	sMarillSprites4,
	sMarillSprites5,
	sMarillSprites6,
	sMarillSprites7,
	sMarillSprites8,
	sMarillSprites9,
	sMarillSprites10,
	sMarillSprites11,
	sMarillSprites12,
	sMarillSprites13,
	sMarillSprites14,
	sMarillSprites15,
	sMarillSprites16,
	sMarillSprites17,
	sMarillSprites18,
	sMarillSprites19,
	sMarillSprites20,
	sMarillSprites21,
	sMarillSprites22,
	sMarillSprites23,
	sMarillSprites24,
	sMarillSprites25,
	sMarillSprites26,
	sMarillSprites27,
	sMarillSprites28,
	sMarillSprites29,
	sMarillSprites30,
	sMarillSprites31,
	sMarillSprites32,
};

static const axmain sAxMainMarill = {
	.poses = sAxPosesMarill,
	.animations = sAxAnimationsMarill,
	.animCount = ARRAY_COUNT(sAxAnimationsMarill),
	.spriteData = sAxSpritesMarill,
	.positions = sAxPositionsMarill,
};
