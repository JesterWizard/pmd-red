/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainCleffa;
const SiroArchive gAxCleffa = {"SIRO", &sAxMainCleffa};

static const ax_pose sCleffaPose1[] = {
	AX_POSE(0, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose2[] = {
	AX_POSE(1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose3[] = {
	AX_POSE(2, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose4[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose5[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose6[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose7[] = {
	AX_POSE(6, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose8[] = {
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose9[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose10[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose11[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose12[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose13[] = {
	AX_POSE(12, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose14[] = {
	AX_POSE(13, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose15[] = {
	AX_POSE(14, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose16[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose17[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose18[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose19[] = {
	AX_POSE(6, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose20[] = {
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose21[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose22[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose23[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose24[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose26[] = {
	AX_POSE(15, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose27[] = {
	AX_POSE(16, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose29[] = {
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose30[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose32[] = {
	AX_POSE(19, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose33[] = {
	AX_POSE(20, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose35[] = {
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose36[] = {
	AX_POSE(22, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose38[] = {
	AX_POSE(23, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose39[] = {
	AX_POSE(24, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose41[] = {
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose42[] = {
	AX_POSE(22, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose44[] = {
	AX_POSE(19, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose45[] = {
	AX_POSE(20, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose46[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose47[] = {
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose48[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose98[] = {
	AX_POSE(1, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose99[] = {
	AX_POSE(2, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose101[] = {
	AX_POSE(4, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose102[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose104[] = {
	AX_POSE(7, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose105[] = {
	AX_POSE(8, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose107[] = {
	AX_POSE(10, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose108[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose110[] = {
	AX_POSE(13, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose111[] = {
	AX_POSE(14, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose113[] = {
	AX_POSE(10, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose114[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose116[] = {
	AX_POSE(7, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose117[] = {
	AX_POSE(8, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose119[] = {
	AX_POSE(4, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose120[] = {
	AX_POSE(5, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose121[] = {
	AX_POSE(25, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose122[] = {
	AX_POSE(26, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose123[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose124[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose125[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose126[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose127[] = {
	AX_POSE(31, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose128[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose129[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose130[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCleffaPose148[] = {
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_anim sCleffaAnims_1_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -1}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, 0}, .shadow = {1, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, -1}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_1_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, 0}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, -1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, 0}, .shadow = {-1, 1} },
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {1, 0}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {1, 0}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_1_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, 0}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, -1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, 0}, .shadow = {0, 1} },
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_1_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, 0}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, -1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, 0}, .shadow = {1, 1} },
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, 0}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, 0}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_1_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, 0}, .shadow = {-1, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -1}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_1_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, 0}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, -1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, 0}, .shadow = {-1, 1} },
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, 0}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, 0}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_1_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, 0}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, -1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, 0}, .shadow = {0, 1} },
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, 0}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, 0}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_1_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, 0}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, -1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, 0}, .shadow = {1, 1} },
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {1, 0}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {1, 0}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 25, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 26, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 7}, .shadow = {0, 7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 28, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 28, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 29, .offset = {21, 19}, .shadow = {21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {21, 19}, .shadow = {21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {7, 7}, .shadow = {7, 7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 31, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 31, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {22, 0}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 32, .offset = {22, 1}, .shadow = {22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {22, 0}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {22, 1}, .shadow = {22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {7, 0}, .shadow = {7, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 34, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 34, .offset = {5, -6}, .shadow = {5, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {12, -13}, .shadow = {12, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {21, -22}, .shadow = {21, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {22, -21}, .shadow = {22, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {21, -22}, .shadow = {21, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {22, -21}, .shadow = {22, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {7, -7}, .shadow = {7, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 37, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 37, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, -11}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 38, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -7}, .shadow = {0, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 40, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 40, .offset = {-5, -6}, .shadow = {-5, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {-12, -13}, .shadow = {-12, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-21, -22}, .shadow = {-21, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 41, .offset = {-22, -21}, .shadow = {-22, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-21, -22}, .shadow = {-21, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-22, -21}, .shadow = {-22, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-7, -7}, .shadow = {-7, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 43, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 43, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-22, 0}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 44, .offset = {-22, 1}, .shadow = {-22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-22, 0}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-22, 1}, .shadow = {-22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-7, 0}, .shadow = {-7, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 46, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 46, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-20, 20}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-21, 19}, .shadow = {-21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-20, 20}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-21, 19}, .shadow = {-21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-7, 7}, .shadow = {-7, 7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 49, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 49, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 50, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 7}, .shadow = {0, 7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 52, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 52, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 53, .offset = {21, 19}, .shadow = {21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {21, 19}, .shadow = {21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {7, 7}, .shadow = {7, 7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 55, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 55, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {22, 0}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 56, .offset = {22, 1}, .shadow = {22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {22, 0}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {22, 1}, .shadow = {22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {7, 0}, .shadow = {7, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 58, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 58, .offset = {5, -6}, .shadow = {5, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {12, -13}, .shadow = {12, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {21, -22}, .shadow = {21, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 59, .offset = {22, -21}, .shadow = {22, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {21, -22}, .shadow = {21, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {22, -21}, .shadow = {22, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {7, -7}, .shadow = {7, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 61, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 61, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, -11}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 62, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -7}, .shadow = {0, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 64, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 64, .offset = {-5, -6}, .shadow = {-5, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {-12, -13}, .shadow = {-12, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-21, -22}, .shadow = {-21, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 65, .offset = {-22, -21}, .shadow = {-22, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-21, -22}, .shadow = {-21, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-22, -21}, .shadow = {-22, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-7, -7}, .shadow = {-7, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 67, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 67, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-22, 0}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 68, .offset = {-22, 1}, .shadow = {-22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-22, 0}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-22, 1}, .shadow = {-22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-7, 0}, .shadow = {-7, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 70, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 70, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-20, 20}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {-21, 19}, .shadow = {-21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-20, 20}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-21, 19}, .shadow = {-21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-7, 7}, .shadow = {-7, 7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_5_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 2, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 1, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_5_2[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 2, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 1, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_5_3[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 2, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 1, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_5_4[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 2, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 1, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_5_5[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 2, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 1, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_5_6[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 2, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 1, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_5_7[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 2, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 1, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_5_8[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 2, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 1, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_8_1[] = {
	{ .frames = 36, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 18, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_8_2[] = {
	{ .frames = 36, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 18, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_8_3[] = {
	{ .frames = 36, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 18, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_8_4[] = {
	{ .frames = 36, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 18, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_8_5[] = {
	{ .frames = 36, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 18, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_8_6[] = {
	{ .frames = 36, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 18, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_8_7[] = {
	{ .frames = 36, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 18, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_8_8[] = {
	{ .frames = 36, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 18, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 147, .offset = {7, 3}, .shadow = {7, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {10, 9}, .shadow = {10, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {8, 19}, .shadow = {8, 19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 150, .offset = {0, 21}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 151, .offset = {-8, 19}, .shadow = {-8, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {-10, 9}, .shadow = {-10, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {-7, 3}, .shadow = {-7, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 146, .offset = {9, 1}, .shadow = {9, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {17, 4}, .shadow = {17, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {22, 14}, .shadow = {22, 14} },
	{ .frames = 3, .unkFlags = 0, .poseId = 149, .offset = {21, 21}, .shadow = {21, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 150, .offset = {11, 21}, .shadow = {11, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {18, -5}, .shadow = {18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 148, .offset = {21, 0}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 149, .offset = {18, 4}, .shadow = {18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {12, 5}, .shadow = {12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 151, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {3, -16}, .shadow = {3, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {12, -22}, .shadow = {12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 147, .offset = {21, -22}, .shadow = {21, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 148, .offset = {22, -14}, .shadow = {22, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 150, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 151, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {-8, -19}, .shadow = {-8, -19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 146, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 147, .offset = {9, -19}, .shadow = {9, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {11, -10}, .shadow = {11, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 149, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 148, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {-3, -16}, .shadow = {-3, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {-12, -22}, .shadow = {-12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 153, .offset = {-21, -22}, .shadow = {-21, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 152, .offset = {-22, -14}, .shadow = {-22, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 150, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 147, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {-18, -5}, .shadow = {-18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 152, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 151, .offset = {-18, 4}, .shadow = {-18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {-12, 5}, .shadow = {-12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 149, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 146, .offset = {-9, 1}, .shadow = {-9, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {-17, 4}, .shadow = {-17, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {-22, 14}, .shadow = {-22, 14} },
	{ .frames = 3, .unkFlags = 0, .poseId = 151, .offset = {-21, 21}, .shadow = {-21, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 150, .offset = {-11, 21}, .shadow = {-11, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 148, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 163, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 163, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 162, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 164, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 169, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 169, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 168, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 170, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 172, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 172, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 172, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 173, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, -19}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 175, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 175, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 175, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 176, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 178, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 178, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 179, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, -19}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 179, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCleffaAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 181, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 181, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 181, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 180, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 182, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 182, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sCleffaGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_1.4bpp.lz");
static const ax_sprite sCleffaSprites1[] = {
	{sCleffaGfx1, ARRAY_COUNT(sCleffaGfx1)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_2.4bpp.lz");
static const ax_sprite sCleffaSprites2[] = {
	{sCleffaGfx2, ARRAY_COUNT(sCleffaGfx2)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_3.4bpp.lz");
static const ax_sprite sCleffaSprites3[] = {
	{sCleffaGfx3, ARRAY_COUNT(sCleffaGfx3)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_4.4bpp.lz");
static const ax_sprite sCleffaSprites4[] = {
	{sCleffaGfx4, ARRAY_COUNT(sCleffaGfx4)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_5.4bpp.lz");
static const ax_sprite sCleffaSprites5[] = {
	{sCleffaGfx5, ARRAY_COUNT(sCleffaGfx5)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_6.4bpp.lz");
static const ax_sprite sCleffaSprites6[] = {
	{sCleffaGfx6, ARRAY_COUNT(sCleffaGfx6)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_7.4bpp.lz");
static const ax_sprite sCleffaSprites7[] = {
	{sCleffaGfx7, ARRAY_COUNT(sCleffaGfx7)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_8.4bpp.lz");
static const ax_sprite sCleffaSprites8[] = {
	{sCleffaGfx8, ARRAY_COUNT(sCleffaGfx8)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_9.4bpp.lz");
static const ax_sprite sCleffaSprites9[] = {
	{sCleffaGfx9, ARRAY_COUNT(sCleffaGfx9)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_10.4bpp.lz");
static const ax_sprite sCleffaSprites10[] = {
	{sCleffaGfx10, ARRAY_COUNT(sCleffaGfx10)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_11.4bpp.lz");
static const ax_sprite sCleffaSprites11[] = {
	{sCleffaGfx11, ARRAY_COUNT(sCleffaGfx11)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_12.4bpp.lz");
static const ax_sprite sCleffaSprites12[] = {
	{sCleffaGfx12, ARRAY_COUNT(sCleffaGfx12)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_13.4bpp.lz");
static const ax_sprite sCleffaSprites13[] = {
	{sCleffaGfx13, ARRAY_COUNT(sCleffaGfx13)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_14.4bpp.lz");
static const ax_sprite sCleffaSprites14[] = {
	{sCleffaGfx14, ARRAY_COUNT(sCleffaGfx14)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_15.4bpp.lz");
static const ax_sprite sCleffaSprites15[] = {
	{sCleffaGfx15, ARRAY_COUNT(sCleffaGfx15)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_16.4bpp.lz");
static const u8 sCleffaGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_16_1.4bpp.lz");
static const u8 sCleffaGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_16_2.4bpp.lz");
static const ax_sprite sCleffaSprites16[] = {
	{sCleffaGfx16, ARRAY_COUNT(sCleffaGfx16)}, 
	{NULL, 32}, 
	{sCleffaGfx16_1, ARRAY_COUNT(sCleffaGfx16_1)}, 
	{NULL, 32}, 
	{sCleffaGfx16_2, ARRAY_COUNT(sCleffaGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCleffaGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_17.4bpp.lz");
static const u8 sCleffaGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_17_1.4bpp.lz");
static const u8 sCleffaGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_17_2.4bpp.lz");
static const ax_sprite sCleffaSprites17[] = {
	{sCleffaGfx17, ARRAY_COUNT(sCleffaGfx17)}, 
	{NULL, 32}, 
	{sCleffaGfx17_1, ARRAY_COUNT(sCleffaGfx17_1)}, 
	{NULL, 32}, 
	{sCleffaGfx17_2, ARRAY_COUNT(sCleffaGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCleffaGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_18.4bpp.lz");
static const u8 sCleffaGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_18_1.4bpp.lz");
static const u8 sCleffaGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_18_2.4bpp.lz");
static const ax_sprite sCleffaSprites18[] = {
	{sCleffaGfx18, ARRAY_COUNT(sCleffaGfx18)}, 
	{NULL, 32}, 
	{sCleffaGfx18_1, ARRAY_COUNT(sCleffaGfx18_1)}, 
	{NULL, 32}, 
	{sCleffaGfx18_2, ARRAY_COUNT(sCleffaGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCleffaGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_19.4bpp.lz");
static const u8 sCleffaGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_19_1.4bpp.lz");
static const u8 sCleffaGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_19_2.4bpp.lz");
static const ax_sprite sCleffaSprites19[] = {
	{sCleffaGfx19, ARRAY_COUNT(sCleffaGfx19)}, 
	{NULL, 64}, 
	{sCleffaGfx19_1, ARRAY_COUNT(sCleffaGfx19_1)}, 
	{NULL, 32}, 
	{sCleffaGfx19_2, ARRAY_COUNT(sCleffaGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCleffaGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_20.4bpp.lz");
static const u8 sCleffaGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_20_1.4bpp.lz");
static const u8 sCleffaGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_20_2.4bpp.lz");
static const ax_sprite sCleffaSprites20[] = {
	{sCleffaGfx20, ARRAY_COUNT(sCleffaGfx20)}, 
	{NULL, 32}, 
	{sCleffaGfx20_1, ARRAY_COUNT(sCleffaGfx20_1)}, 
	{NULL, 32}, 
	{sCleffaGfx20_2, ARRAY_COUNT(sCleffaGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCleffaGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_21.4bpp.lz");
static const u8 sCleffaGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_21_1.4bpp.lz");
static const u8 sCleffaGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_21_2.4bpp.lz");
static const ax_sprite sCleffaSprites21[] = {
	{sCleffaGfx21, ARRAY_COUNT(sCleffaGfx21)}, 
	{NULL, 64}, 
	{sCleffaGfx21_1, ARRAY_COUNT(sCleffaGfx21_1)}, 
	{NULL, 32}, 
	{sCleffaGfx21_2, ARRAY_COUNT(sCleffaGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCleffaGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_22.4bpp.lz");
static const u8 sCleffaGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_22_1.4bpp.lz");
static const u8 sCleffaGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_22_2.4bpp.lz");
static const ax_sprite sCleffaSprites22[] = {
	{sCleffaGfx22, ARRAY_COUNT(sCleffaGfx22)}, 
	{NULL, 32}, 
	{sCleffaGfx22_1, ARRAY_COUNT(sCleffaGfx22_1)}, 
	{NULL, 32}, 
	{sCleffaGfx22_2, ARRAY_COUNT(sCleffaGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCleffaGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_23.4bpp.lz");
static const u8 sCleffaGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_23_1.4bpp.lz");
static const u8 sCleffaGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_23_2.4bpp.lz");
static const ax_sprite sCleffaSprites23[] = {
	{sCleffaGfx23, ARRAY_COUNT(sCleffaGfx23)}, 
	{NULL, 32}, 
	{sCleffaGfx23_1, ARRAY_COUNT(sCleffaGfx23_1)}, 
	{NULL, 32}, 
	{sCleffaGfx23_2, ARRAY_COUNT(sCleffaGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCleffaGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_24.4bpp.lz");
static const u8 sCleffaGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_24_1.4bpp.lz");
static const u8 sCleffaGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_24_2.4bpp.lz");
static const ax_sprite sCleffaSprites24[] = {
	{sCleffaGfx24, ARRAY_COUNT(sCleffaGfx24)}, 
	{NULL, 32}, 
	{sCleffaGfx24_1, ARRAY_COUNT(sCleffaGfx24_1)}, 
	{NULL, 32}, 
	{sCleffaGfx24_2, ARRAY_COUNT(sCleffaGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCleffaGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_25.4bpp.lz");
static const u8 sCleffaGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_25_1.4bpp.lz");
static const u8 sCleffaGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_25_2.4bpp.lz");
static const ax_sprite sCleffaSprites25[] = {
	{sCleffaGfx25, ARRAY_COUNT(sCleffaGfx25)}, 
	{NULL, 32}, 
	{sCleffaGfx25_1, ARRAY_COUNT(sCleffaGfx25_1)}, 
	{NULL, 32}, 
	{sCleffaGfx25_2, ARRAY_COUNT(sCleffaGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCleffaGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_26.4bpp.lz");
static const ax_sprite sCleffaSprites26[] = {
	{sCleffaGfx26, ARRAY_COUNT(sCleffaGfx26)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_27.4bpp.lz");
static const ax_sprite sCleffaSprites27[] = {
	{sCleffaGfx27, ARRAY_COUNT(sCleffaGfx27)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_28.4bpp.lz");
static const ax_sprite sCleffaSprites28[] = {
	{sCleffaGfx28, ARRAY_COUNT(sCleffaGfx28)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_29.4bpp.lz");
static const ax_sprite sCleffaSprites29[] = {
	{sCleffaGfx29, ARRAY_COUNT(sCleffaGfx29)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_30.4bpp.lz");
static const ax_sprite sCleffaSprites30[] = {
	{sCleffaGfx30, ARRAY_COUNT(sCleffaGfx30)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_31.4bpp.lz");
static const ax_sprite sCleffaSprites31[] = {
	{sCleffaGfx31, ARRAY_COUNT(sCleffaGfx31)}, 
	{NULL, 0}
};
static const u8 sCleffaGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cleffa/sprite_32.4bpp.lz");
static const ax_sprite sCleffaSprites32[] = {
	{sCleffaGfx32, ARRAY_COUNT(sCleffaGfx32)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesCleffa[] = {
	sCleffaPose1,
	sCleffaPose2,
	sCleffaPose3,
	sCleffaPose4,
	sCleffaPose5,
	sCleffaPose6,
	sCleffaPose7,
	sCleffaPose8,
	sCleffaPose9,
	sCleffaPose10,
	sCleffaPose11,
	sCleffaPose12,
	sCleffaPose13,
	sCleffaPose14,
	sCleffaPose15,
	sCleffaPose16,
	sCleffaPose17,
	sCleffaPose18,
	sCleffaPose19,
	sCleffaPose20,
	sCleffaPose21,
	sCleffaPose22,
	sCleffaPose23,
	sCleffaPose24,
	sCleffaPose1,
	sCleffaPose26,
	sCleffaPose27,
	sCleffaPose4,
	sCleffaPose29,
	sCleffaPose30,
	sCleffaPose7,
	sCleffaPose32,
	sCleffaPose33,
	sCleffaPose10,
	sCleffaPose35,
	sCleffaPose36,
	sCleffaPose13,
	sCleffaPose38,
	sCleffaPose39,
	sCleffaPose16,
	sCleffaPose41,
	sCleffaPose42,
	sCleffaPose19,
	sCleffaPose44,
	sCleffaPose45,
	sCleffaPose46,
	sCleffaPose47,
	sCleffaPose48,
	sCleffaPose1,
	sCleffaPose26,
	sCleffaPose27,
	sCleffaPose4,
	sCleffaPose29,
	sCleffaPose30,
	sCleffaPose7,
	sCleffaPose32,
	sCleffaPose33,
	sCleffaPose10,
	sCleffaPose35,
	sCleffaPose36,
	sCleffaPose13,
	sCleffaPose38,
	sCleffaPose39,
	sCleffaPose16,
	sCleffaPose41,
	sCleffaPose42,
	sCleffaPose19,
	sCleffaPose44,
	sCleffaPose45,
	sCleffaPose46,
	sCleffaPose47,
	sCleffaPose48,
	sCleffaPose1,
	sCleffaPose26,
	sCleffaPose27,
	sCleffaPose4,
	sCleffaPose29,
	sCleffaPose30,
	sCleffaPose7,
	sCleffaPose32,
	sCleffaPose33,
	sCleffaPose10,
	sCleffaPose35,
	sCleffaPose36,
	sCleffaPose13,
	sCleffaPose38,
	sCleffaPose39,
	sCleffaPose16,
	sCleffaPose41,
	sCleffaPose42,
	sCleffaPose19,
	sCleffaPose44,
	sCleffaPose45,
	sCleffaPose46,
	sCleffaPose47,
	sCleffaPose48,
	sCleffaPose1,
	sCleffaPose98,
	sCleffaPose99,
	sCleffaPose4,
	sCleffaPose101,
	sCleffaPose102,
	sCleffaPose7,
	sCleffaPose104,
	sCleffaPose105,
	sCleffaPose10,
	sCleffaPose107,
	sCleffaPose108,
	sCleffaPose13,
	sCleffaPose110,
	sCleffaPose111,
	sCleffaPose16,
	sCleffaPose113,
	sCleffaPose114,
	sCleffaPose19,
	sCleffaPose116,
	sCleffaPose117,
	sCleffaPose22,
	sCleffaPose119,
	sCleffaPose120,
	sCleffaPose121,
	sCleffaPose122,
	sCleffaPose123,
	sCleffaPose124,
	sCleffaPose125,
	sCleffaPose126,
	sCleffaPose127,
	sCleffaPose128,
	sCleffaPose129,
	sCleffaPose130,
	sCleffaPose1,
	sCleffaPose26,
	sCleffaPose4,
	sCleffaPose29,
	sCleffaPose7,
	sCleffaPose32,
	sCleffaPose10,
	sCleffaPose35,
	sCleffaPose13,
	sCleffaPose38,
	sCleffaPose16,
	sCleffaPose41,
	sCleffaPose19,
	sCleffaPose44,
	sCleffaPose46,
	sCleffaPose47,
	sCleffaPose26,
	sCleffaPose148,
	sCleffaPose44,
	sCleffaPose41,
	sCleffaPose38,
	sCleffaPose35,
	sCleffaPose32,
	sCleffaPose29,
	sCleffaPose26,
	sCleffaPose29,
	sCleffaPose32,
	sCleffaPose35,
	sCleffaPose38,
	sCleffaPose41,
	sCleffaPose44,
	sCleffaPose148,
	sCleffaPose1,
	sCleffaPose26,
	sCleffaPose27,
	sCleffaPose4,
	sCleffaPose29,
	sCleffaPose30,
	sCleffaPose7,
	sCleffaPose32,
	sCleffaPose33,
	sCleffaPose10,
	sCleffaPose35,
	sCleffaPose36,
	sCleffaPose13,
	sCleffaPose38,
	sCleffaPose39,
	sCleffaPose16,
	sCleffaPose41,
	sCleffaPose42,
	sCleffaPose19,
	sCleffaPose44,
	sCleffaPose45,
	sCleffaPose46,
	sCleffaPose47,
	sCleffaPose48,
	sCleffaPose27,
	sCleffaPose48,
	sCleffaPose45,
	sCleffaPose42,
	sCleffaPose39,
	sCleffaPose36,
	sCleffaPose33,
	sCleffaPose30,
	sCleffaPose1,
	sCleffaPose46,
	sCleffaPose19,
	sCleffaPose16,
	sCleffaPose13,
	sCleffaPose10,
	sCleffaPose7,
	sCleffaPose4,
};

static const struct PositionSets sAxPositionsCleffa[] = {
	[0] = { .set = { {-1, -3}, {-5, -3}, {3, -3}, {-1, -5} } },
	[1] = { .set = { {0, -4}, {-4, -6}, {4, -4}, {1, -7} } },
	[2] = { .set = { {-2, -4}, {-6, -4}, {2, -6}, {-3, -7} } },
	[3] = { .set = { {1, -3}, {5, -4}, {-3, -3}, {-1, -5} } },
	[4] = { .set = { {0, -5}, {4, -7}, {-4, -4}, {-2, -7} } },
	[5] = { .set = { {0, -4}, {4, -4}, {-4, -6}, {-1, -7} } },
	[6] = { .set = { {4, -3}, {3, -7}, {1, -3}, {-1, -6} } },
	[7] = { .set = { {4, -4}, {-1, -11}, {2, -2}, {-2, -8} } },
	[8] = { .set = { {4, -6}, {2, -7}, {1, -6}, {-1, -8} } },
	[9] = { .set = { {0, -7}, {-5, -7}, {3, -4}, {-1, -7} } },
	[10] = { .set = { {1, -9}, {-4, -11}, {5, -4}, {-1, -8} } },
	[11] = { .set = { {-2, -9}, {-6, -7}, {5, -8}, {-2, -8} } },
	[12] = { .set = { {-1, -9}, {3, -5}, {-5, -5}, {-1, -6} } },
	[13] = { .set = { {-4, -10}, {2, -9}, {-6, -5}, {-3, -8} } },
	[14] = { .set = { {2, -10}, {4, -5}, {-4, -9}, {1, -8} } },
	[15] = { .set = { {-2, -7}, {3, -7}, {-5, -4}, {-1, -7} } },
	[16] = { .set = { {-3, -9}, {2, -11}, {-7, -4}, {-1, -8} } },
	[17] = { .set = { {0, -9}, {4, -7}, {-7, -8}, {0, -8} } },
	[18] = { .set = { {-6, -3}, {-5, -7}, {-3, -3}, {-1, -6} } },
	[19] = { .set = { {-6, -4}, {-1, -11}, {-4, -2}, {0, -8} } },
	[20] = { .set = { {-6, -6}, {-4, -7}, {-3, -6}, {-1, -8} } },
	[21] = { .set = { {-2, -3}, {-6, -4}, {2, -3}, {0, -5} } },
	[22] = { .set = { {-1, -5}, {-5, -7}, {3, -4}, {1, -7} } },
	[23] = { .set = { {-2, -4}, {-6, -4}, {2, -6}, {-1, -7} } },
	[24] = { .set = { {-1, -3}, {-5, -3}, {3, -3}, {-1, -5} } },
	[25] = { .set = { {-1, -5}, {-8, -5}, {6, -5}, {-1, -6} } },
	[26] = { .set = { {-1, -3}, {-5, -2}, {3, -2}, {-1, -4} } },
	[27] = { .set = { {1, -3}, {5, -4}, {-3, -3}, {-1, -5} } },
	[28] = { .set = { {1, -4}, {6, -5}, {-4, -4}, {-1, -7} } },
	[29] = { .set = { {1, -3}, {5, -5}, {-3, -3}, {-1, -6} } },
	[30] = { .set = { {4, -3}, {3, -7}, {1, -3}, {-1, -6} } },
	[31] = { .set = { {4, -5}, {1, -7}, {0, -5}, {-1, -7} } },
	[32] = { .set = { {4, -2}, {2, -4}, {1, -1}, {-2, -5} } },
	[33] = { .set = { {0, -7}, {-5, -7}, {3, -4}, {-1, -7} } },
	[34] = { .set = { {-1, -9}, {-5, -8}, {4, -5}, {-1, -8} } },
	[35] = { .set = { {-1, -7}, {-4, -5}, {4, -3}, {-1, -6} } },
	[36] = { .set = { {-1, -9}, {3, -5}, {-5, -5}, {-1, -6} } },
	[37] = { .set = { {-1, -11}, {6, -6}, {-8, -6}, {-1, -7} } },
	[38] = { .set = { {-1, -9}, {5, -3}, {-7, -3}, {-1, -6} } },
	[39] = { .set = { {-2, -7}, {3, -7}, {-5, -4}, {-1, -7} } },
	[40] = { .set = { {-1, -9}, {3, -8}, {-6, -5}, {-1, -8} } },
	[41] = { .set = { {-1, -7}, {2, -5}, {-6, -3}, {-1, -6} } },
	[42] = { .set = { {-6, -3}, {-5, -7}, {-3, -3}, {-1, -6} } },
	[43] = { .set = { {-6, -5}, {-3, -7}, {-2, -5}, {-1, -7} } },
	[44] = { .set = { {-6, -2}, {-4, -4}, {-3, -1}, {0, -5} } },
	[45] = { .set = { {-3, -3}, {-7, -4}, {1, -3}, {-1, -5} } },
	[46] = { .set = { {-3, -4}, {-8, -5}, {2, -4}, {-1, -7} } },
	[47] = { .set = { {-3, -3}, {-7, -5}, {1, -3}, {-1, -6} } },
	[48] = { .set = { {-1, -3}, {-5, -3}, {3, -3}, {-1, -5} } },
	[49] = { .set = { {-1, -5}, {-8, -5}, {6, -5}, {-1, -6} } },
	[50] = { .set = { {-1, -3}, {-5, -2}, {3, -2}, {-1, -4} } },
	[51] = { .set = { {1, -3}, {5, -4}, {-3, -3}, {-1, -5} } },
	[52] = { .set = { {1, -4}, {6, -5}, {-4, -4}, {-1, -7} } },
	[53] = { .set = { {1, -3}, {5, -5}, {-3, -3}, {-1, -6} } },
	[54] = { .set = { {4, -3}, {3, -7}, {1, -3}, {-1, -6} } },
	[55] = { .set = { {4, -5}, {1, -7}, {0, -5}, {-1, -7} } },
	[56] = { .set = { {4, -2}, {2, -4}, {1, -1}, {-2, -5} } },
	[57] = { .set = { {0, -7}, {-5, -7}, {3, -4}, {-1, -7} } },
	[58] = { .set = { {-1, -9}, {-5, -8}, {4, -5}, {-1, -8} } },
	[59] = { .set = { {-1, -7}, {-4, -5}, {4, -3}, {-1, -6} } },
	[60] = { .set = { {-1, -9}, {3, -5}, {-5, -5}, {-1, -6} } },
	[61] = { .set = { {-1, -11}, {6, -6}, {-8, -6}, {-1, -7} } },
	[62] = { .set = { {-1, -9}, {5, -3}, {-7, -3}, {-1, -6} } },
	[63] = { .set = { {-2, -7}, {3, -7}, {-5, -4}, {-1, -7} } },
	[64] = { .set = { {-1, -9}, {3, -8}, {-6, -5}, {-1, -8} } },
	[65] = { .set = { {-1, -7}, {2, -5}, {-6, -3}, {-1, -6} } },
	[66] = { .set = { {-6, -3}, {-5, -7}, {-3, -3}, {-1, -6} } },
	[67] = { .set = { {-6, -5}, {-3, -7}, {-2, -5}, {-1, -7} } },
	[68] = { .set = { {-6, -2}, {-4, -4}, {-3, -1}, {0, -5} } },
	[69] = { .set = { {-3, -3}, {-7, -4}, {1, -3}, {-1, -5} } },
	[70] = { .set = { {-3, -4}, {-8, -5}, {2, -4}, {-1, -7} } },
	[71] = { .set = { {-3, -3}, {-7, -5}, {1, -3}, {-1, -6} } },
	[72] = { .set = { {-1, -3}, {-5, -3}, {3, -3}, {-1, -5} } },
	[73] = { .set = { {-1, -5}, {-8, -5}, {6, -5}, {-1, -6} } },
	[74] = { .set = { {-1, -3}, {-5, -2}, {3, -2}, {-1, -4} } },
	[75] = { .set = { {1, -3}, {5, -4}, {-3, -3}, {-1, -5} } },
	[76] = { .set = { {1, -4}, {6, -5}, {-4, -4}, {-1, -7} } },
	[77] = { .set = { {1, -3}, {5, -5}, {-3, -3}, {-1, -6} } },
	[78] = { .set = { {4, -3}, {3, -7}, {1, -3}, {-1, -6} } },
	[79] = { .set = { {4, -5}, {1, -7}, {0, -5}, {-1, -7} } },
	[80] = { .set = { {4, -2}, {2, -4}, {1, -1}, {-2, -5} } },
	[81] = { .set = { {0, -7}, {-5, -7}, {3, -4}, {-1, -7} } },
	[82] = { .set = { {-1, -9}, {-5, -8}, {4, -5}, {-1, -8} } },
	[83] = { .set = { {-1, -7}, {-4, -5}, {4, -3}, {-1, -6} } },
	[84] = { .set = { {-1, -9}, {3, -5}, {-5, -5}, {-1, -6} } },
	[85] = { .set = { {-1, -11}, {6, -6}, {-8, -6}, {-1, -7} } },
	[86] = { .set = { {-1, -9}, {5, -3}, {-7, -3}, {-1, -6} } },
	[87] = { .set = { {-2, -7}, {3, -7}, {-5, -4}, {-1, -7} } },
	[88] = { .set = { {-1, -9}, {3, -8}, {-6, -5}, {-1, -8} } },
	[89] = { .set = { {-1, -7}, {2, -5}, {-6, -3}, {-1, -6} } },
	[90] = { .set = { {-6, -3}, {-5, -7}, {-3, -3}, {-1, -6} } },
	[91] = { .set = { {-6, -5}, {-3, -7}, {-2, -5}, {-1, -7} } },
	[92] = { .set = { {-6, -2}, {-4, -4}, {-3, -1}, {0, -5} } },
	[93] = { .set = { {-3, -3}, {-7, -4}, {1, -3}, {-1, -5} } },
	[94] = { .set = { {-3, -4}, {-8, -5}, {2, -4}, {-1, -7} } },
	[95] = { .set = { {-3, -3}, {-7, -5}, {1, -3}, {-1, -6} } },
	[96] = { .set = { {-1, -3}, {-5, -3}, {3, -3}, {-1, -5} } },
	[97] = { .set = { {0, -3}, {-4, -5}, {4, -3}, {1, -6} } },
	[98] = { .set = { {-2, -3}, {-6, -3}, {2, -5}, {-3, -6} } },
	[99] = { .set = { {1, -3}, {5, -4}, {-3, -3}, {-1, -5} } },
	[100] = { .set = { {0, -4}, {4, -6}, {-4, -3}, {-2, -6} } },
	[101] = { .set = { {1, -4}, {5, -4}, {-3, -6}, {0, -7} } },
	[102] = { .set = { {4, -3}, {3, -7}, {1, -3}, {-1, -6} } },
	[103] = { .set = { {4, -3}, {-1, -10}, {2, -1}, {-2, -7} } },
	[104] = { .set = { {4, -5}, {2, -6}, {1, -5}, {-1, -7} } },
	[105] = { .set = { {0, -7}, {-5, -7}, {3, -4}, {-1, -7} } },
	[106] = { .set = { {1, -8}, {-4, -10}, {5, -3}, {-1, -7} } },
	[107] = { .set = { {-3, -8}, {-7, -6}, {4, -7}, {-3, -7} } },
	[108] = { .set = { {-1, -9}, {3, -5}, {-5, -5}, {-1, -6} } },
	[109] = { .set = { {-4, -9}, {2, -8}, {-6, -4}, {-3, -7} } },
	[110] = { .set = { {2, -9}, {4, -4}, {-4, -8}, {1, -7} } },
	[111] = { .set = { {-2, -7}, {3, -7}, {-5, -4}, {-1, -7} } },
	[112] = { .set = { {-3, -8}, {2, -10}, {-7, -3}, {-1, -7} } },
	[113] = { .set = { {1, -8}, {5, -6}, {-6, -7}, {1, -7} } },
	[114] = { .set = { {-6, -3}, {-5, -7}, {-3, -3}, {-1, -6} } },
	[115] = { .set = { {-6, -3}, {-1, -10}, {-4, -1}, {0, -7} } },
	[116] = { .set = { {-6, -5}, {-4, -6}, {-3, -5}, {-1, -7} } },
	[117] = { .set = { {-2, -3}, {-6, -4}, {2, -3}, {0, -5} } },
	[118] = { .set = { {-1, -4}, {-5, -6}, {3, -3}, {1, -6} } },
	[119] = { .set = { {-2, -3}, {-6, -3}, {2, -5}, {-1, -6} } },
	[120] = { .set = { {-3, -1}, {-6, -2}, {3, -1}, {0, -5} } },
	[121] = { .set = { {-2, -1}, {-5, -1}, {3, 0}, {-1, -5} } },
	[122] = { .set = { {0, -5}, {-4, -6}, {4, -6}, {0, -7} } },
	[123] = { .set = { {1, -5}, {5, -8}, {-3, -5}, {-1, -7} } },
	[124] = { .set = { {5, -5}, {2, -9}, {1, -6}, {-1, -7} } },
	[125] = { .set = { {1, -10}, {-3, -11}, {3, -10}, {-1, -7} } },
	[126] = { .set = { {0, -8}, {3, -6}, {-3, -6}, {0, -6} } },
	[127] = { .set = { {-2, -10}, {2, -11}, {-4, -10}, {0, -7} } },
	[128] = { .set = { {-6, -5}, {-3, -9}, {-2, -6}, {0, -7} } },
	[129] = { .set = { {-2, -5}, {-6, -8}, {2, -5}, {0, -7} } },
	[130] = { .set = { {-1, -3}, {-5, -3}, {3, -3}, {-1, -5} } },
	[131] = { .set = { {-1, -5}, {-8, -5}, {6, -5}, {-1, -6} } },
	[132] = { .set = { {1, -3}, {5, -4}, {-3, -3}, {-1, -5} } },
	[133] = { .set = { {1, -4}, {6, -5}, {-4, -4}, {-1, -7} } },
	[134] = { .set = { {4, -3}, {3, -7}, {1, -3}, {-1, -6} } },
	[135] = { .set = { {4, -5}, {1, -7}, {0, -5}, {-1, -7} } },
	[136] = { .set = { {0, -7}, {-5, -7}, {3, -4}, {-1, -7} } },
	[137] = { .set = { {-1, -9}, {-5, -8}, {4, -5}, {-1, -8} } },
	[138] = { .set = { {-1, -9}, {3, -5}, {-5, -5}, {-1, -6} } },
	[139] = { .set = { {-1, -11}, {6, -6}, {-8, -6}, {-1, -7} } },
	[140] = { .set = { {-2, -7}, {3, -7}, {-5, -4}, {-1, -7} } },
	[141] = { .set = { {-1, -9}, {3, -8}, {-6, -5}, {-1, -8} } },
	[142] = { .set = { {-6, -3}, {-5, -7}, {-3, -3}, {-1, -6} } },
	[143] = { .set = { {-6, -5}, {-3, -7}, {-2, -5}, {-1, -7} } },
	[144] = { .set = { {-3, -3}, {-7, -4}, {1, -3}, {-1, -5} } },
	[145] = { .set = { {-3, -4}, {-8, -5}, {2, -4}, {-1, -7} } },
	[146] = { .set = { {-1, -5}, {-8, -5}, {6, -5}, {-1, -6} } },
	[147] = { .set = { {-2, -4}, {-7, -5}, {3, -4}, {0, -7} } },
	[148] = { .set = { {-6, -5}, {-3, -7}, {-2, -5}, {-1, -7} } },
	[149] = { .set = { {-1, -9}, {3, -8}, {-6, -5}, {-1, -8} } },
	[150] = { .set = { {-1, -11}, {6, -6}, {-8, -6}, {-1, -7} } },
	[151] = { .set = { {-1, -9}, {-5, -8}, {4, -5}, {-1, -8} } },
	[152] = { .set = { {4, -5}, {1, -7}, {0, -5}, {-1, -7} } },
	[153] = { .set = { {1, -4}, {6, -5}, {-4, -4}, {-1, -7} } },
	[154] = { .set = { {-1, -5}, {-8, -5}, {6, -5}, {-1, -6} } },
	[155] = { .set = { {1, -4}, {6, -5}, {-4, -4}, {-1, -7} } },
	[156] = { .set = { {4, -5}, {1, -7}, {0, -5}, {-1, -7} } },
	[157] = { .set = { {-1, -9}, {-5, -8}, {4, -5}, {-1, -8} } },
	[158] = { .set = { {-1, -11}, {6, -6}, {-8, -6}, {-1, -7} } },
	[159] = { .set = { {-1, -9}, {3, -8}, {-6, -5}, {-1, -8} } },
	[160] = { .set = { {-6, -5}, {-3, -7}, {-2, -5}, {-1, -7} } },
	[161] = { .set = { {-2, -4}, {-7, -5}, {3, -4}, {0, -7} } },
	[162] = { .set = { {-1, -3}, {-5, -3}, {3, -3}, {-1, -5} } },
	[163] = { .set = { {-1, -5}, {-8, -5}, {6, -5}, {-1, -6} } },
	[164] = { .set = { {-1, -3}, {-5, -2}, {3, -2}, {-1, -4} } },
	[165] = { .set = { {1, -3}, {5, -4}, {-3, -3}, {-1, -5} } },
	[166] = { .set = { {1, -4}, {6, -5}, {-4, -4}, {-1, -7} } },
	[167] = { .set = { {1, -3}, {5, -5}, {-3, -3}, {-1, -6} } },
	[168] = { .set = { {4, -3}, {3, -7}, {1, -3}, {-1, -6} } },
	[169] = { .set = { {4, -5}, {1, -7}, {0, -5}, {-1, -7} } },
	[170] = { .set = { {4, -2}, {2, -4}, {1, -1}, {-2, -5} } },
	[171] = { .set = { {0, -7}, {-5, -7}, {3, -4}, {-1, -7} } },
	[172] = { .set = { {-1, -9}, {-5, -8}, {4, -5}, {-1, -8} } },
	[173] = { .set = { {-1, -7}, {-4, -5}, {4, -3}, {-1, -6} } },
	[174] = { .set = { {-1, -9}, {3, -5}, {-5, -5}, {-1, -6} } },
	[175] = { .set = { {-1, -11}, {6, -6}, {-8, -6}, {-1, -7} } },
	[176] = { .set = { {-1, -9}, {5, -3}, {-7, -3}, {-1, -6} } },
	[177] = { .set = { {-2, -7}, {3, -7}, {-5, -4}, {-1, -7} } },
	[178] = { .set = { {-1, -9}, {3, -8}, {-6, -5}, {-1, -8} } },
	[179] = { .set = { {-1, -7}, {2, -5}, {-6, -3}, {-1, -6} } },
	[180] = { .set = { {-6, -3}, {-5, -7}, {-3, -3}, {-1, -6} } },
	[181] = { .set = { {-6, -5}, {-3, -7}, {-2, -5}, {-1, -7} } },
	[182] = { .set = { {-6, -2}, {-4, -4}, {-3, -1}, {0, -5} } },
	[183] = { .set = { {-3, -3}, {-7, -4}, {1, -3}, {-1, -5} } },
	[184] = { .set = { {-3, -4}, {-8, -5}, {2, -4}, {-1, -7} } },
	[185] = { .set = { {-3, -3}, {-7, -5}, {1, -3}, {-1, -6} } },
	[186] = { .set = { {-1, -3}, {-5, -2}, {3, -2}, {-1, -4} } },
	[187] = { .set = { {-3, -3}, {-7, -5}, {1, -3}, {-1, -6} } },
	[188] = { .set = { {-6, -2}, {-4, -4}, {-3, -1}, {0, -5} } },
	[189] = { .set = { {-1, -7}, {2, -5}, {-6, -3}, {-1, -6} } },
	[190] = { .set = { {-1, -9}, {5, -3}, {-7, -3}, {-1, -6} } },
	[191] = { .set = { {-1, -7}, {-4, -5}, {4, -3}, {-1, -6} } },
	[192] = { .set = { {4, -2}, {2, -4}, {1, -1}, {-2, -5} } },
	[193] = { .set = { {1, -3}, {5, -5}, {-3, -3}, {-1, -6} } },
	[194] = { .set = { {-1, -3}, {-5, -3}, {3, -3}, {-1, -5} } },
	[195] = { .set = { {-3, -3}, {-7, -4}, {1, -3}, {-1, -5} } },
	[196] = { .set = { {-6, -3}, {-5, -7}, {-3, -3}, {-1, -6} } },
	[197] = { .set = { {-2, -7}, {3, -7}, {-5, -4}, {-1, -7} } },
	[198] = { .set = { {-1, -9}, {3, -5}, {-5, -5}, {-1, -6} } },
	[199] = { .set = { {0, -7}, {-5, -7}, {3, -4}, {-1, -7} } },
	[200] = { .set = { {4, -3}, {3, -7}, {1, -3}, {-1, -6} } },
	[201] = { .set = { {1, -3}, {5, -4}, {-3, -3}, {-1, -5} } },
};

static const ax_anim *const sCleffaAnimTable1[] = {
	sCleffaAnims_1_1,
	sCleffaAnims_1_2,
	sCleffaAnims_1_3,
	sCleffaAnims_1_4,
	sCleffaAnims_1_5,
	sCleffaAnims_1_6,
	sCleffaAnims_1_7,
	sCleffaAnims_1_8,
};

static const ax_anim *const sCleffaAnimTable2[] = {
	sCleffaAnims_2_1,
	sCleffaAnims_2_2,
	sCleffaAnims_2_3,
	sCleffaAnims_2_4,
	sCleffaAnims_2_5,
	sCleffaAnims_2_6,
	sCleffaAnims_2_7,
	sCleffaAnims_2_8,
};

static const ax_anim *const sCleffaAnimTable3[] = {
	sCleffaAnims_3_1,
	sCleffaAnims_3_2,
	sCleffaAnims_3_3,
	sCleffaAnims_3_4,
	sCleffaAnims_3_5,
	sCleffaAnims_3_6,
	sCleffaAnims_3_7,
	sCleffaAnims_3_8,
};

static const ax_anim *const sCleffaAnimTable4[] = {
	gAxSharedAnim_02100,
	gAxSharedAnim_02121,
	gAxSharedAnim_02141,
	gAxSharedAnim_02166,
	gAxSharedAnim_02193,
	gAxSharedAnim_02218,
	gAxSharedAnim_02248,
	gAxSharedAnim_02277,
};

static const ax_anim *const sCleffaAnimTable5[] = {
	sCleffaAnims_5_1,
	sCleffaAnims_5_2,
	sCleffaAnims_5_3,
	sCleffaAnims_5_4,
	sCleffaAnims_5_5,
	sCleffaAnims_5_6,
	sCleffaAnims_5_7,
	sCleffaAnims_5_8,
};

static const ax_anim *const sCleffaAnimTable6[] = {
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
};

static const ax_anim *const sCleffaAnimTable7[] = {
	gAxSharedAnim_00332,
	gAxSharedAnim_00342,
	gAxSharedAnim_00350,
	gAxSharedAnim_00358,
	gAxSharedAnim_00370,
	gAxSharedAnim_00378,
	gAxSharedAnim_00385,
	gAxSharedAnim_00392,
};

static const ax_anim *const sCleffaAnimTable8[] = {
	sCleffaAnims_8_1,
	sCleffaAnims_8_2,
	sCleffaAnims_8_3,
	sCleffaAnims_8_4,
	sCleffaAnims_8_5,
	sCleffaAnims_8_6,
	sCleffaAnims_8_7,
	sCleffaAnims_8_8,
};

static const ax_anim *const sCleffaAnimTable9[] = {
	sCleffaAnims_9_1,
	sCleffaAnims_9_2,
	sCleffaAnims_9_3,
	sCleffaAnims_9_4,
	sCleffaAnims_9_5,
	sCleffaAnims_9_6,
	sCleffaAnims_9_7,
	sCleffaAnims_9_8,
};

static const ax_anim *const sCleffaAnimTable10[] = {
	gAxSharedAnim_00612,
	gAxSharedAnim_00622,
	gAxSharedAnim_00632,
	gAxSharedAnim_00642,
	gAxSharedAnim_00651,
	gAxSharedAnim_00660,
	gAxSharedAnim_00675,
	gAxSharedAnim_00686,
};

static const ax_anim *const sCleffaAnimTable11[] = {
	sCleffaAnims_11_1,
	gAxSharedAnim_00735,
	sCleffaAnims_11_3,
	sCleffaAnims_11_4,
	sCleffaAnims_11_5,
	sCleffaAnims_11_6,
	sCleffaAnims_11_7,
	gAxSharedAnim_00962,
};

static const ax_anim *const sCleffaAnimTable12[] = {
	gAxSharedAnim_01018,
	gAxSharedAnim_01127,
	gAxSharedAnim_01099,
	gAxSharedAnim_01085,
	gAxSharedAnim_01084,
	gAxSharedAnim_01065,
	gAxSharedAnim_01034,
	gAxSharedAnim_01019,
};

static const ax_anim *const sCleffaAnimTable13[] = {
	gAxSharedAnim_01145,
	gAxSharedAnim_01227,
	gAxSharedAnim_01218,
	gAxSharedAnim_01201,
	gAxSharedAnim_01190,
	gAxSharedAnim_01179,
	gAxSharedAnim_01168,
	gAxSharedAnim_01157,
};

static const ax_anim *const *const sAxAnimationsCleffa[] = {
	sCleffaAnimTable1,
	sCleffaAnimTable2,
	sCleffaAnimTable3,
	sCleffaAnimTable4,
	sCleffaAnimTable5,
	sCleffaAnimTable6,
	sCleffaAnimTable7,
	sCleffaAnimTable8,
	sCleffaAnimTable9,
	sCleffaAnimTable10,
	sCleffaAnimTable11,
	sCleffaAnimTable12,
	sCleffaAnimTable13,
};

static const ax_sprite *const sAxSpritesCleffa[] = {
	sCleffaSprites1,
	sCleffaSprites2,
	sCleffaSprites3,
	sCleffaSprites4,
	sCleffaSprites5,
	sCleffaSprites6,
	sCleffaSprites7,
	sCleffaSprites8,
	sCleffaSprites9,
	sCleffaSprites10,
	sCleffaSprites11,
	sCleffaSprites12,
	sCleffaSprites13,
	sCleffaSprites14,
	sCleffaSprites15,
	sCleffaSprites16,
	sCleffaSprites17,
	sCleffaSprites18,
	sCleffaSprites19,
	sCleffaSprites20,
	sCleffaSprites21,
	sCleffaSprites22,
	sCleffaSprites23,
	sCleffaSprites24,
	sCleffaSprites25,
	sCleffaSprites26,
	sCleffaSprites27,
	sCleffaSprites28,
	sCleffaSprites29,
	sCleffaSprites30,
	sCleffaSprites31,
	sCleffaSprites32,
};

static const axmain sAxMainCleffa = {
	.poses = sAxPosesCleffa,
	.animations = sAxAnimationsCleffa,
	.animCount = ARRAY_COUNT(sAxAnimationsCleffa),
	.spriteData = sAxSpritesCleffa,
	.positions = sAxPositionsCleffa,
};
