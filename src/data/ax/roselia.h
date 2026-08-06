/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainRoselia;
const SiroArchive gAxRoselia = {"SIRO", &sAxMainRoselia};

static const ax_pose sRoseliaPose1[] = {
	AX_POSE(0, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose2[] = {
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose3[] = {
	AX_POSE(2, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose4[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose5[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose6[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose7[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose8[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose9[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose10[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose11[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose12[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose13[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose14[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose15[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose16[] = {
	AX_POSE(15, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose17[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose18[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose19[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose20[] = {
	AX_POSE(19, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose21[] = {
	AX_POSE(20, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose22[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose23[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose24[] = {
	AX_POSE(23, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose26[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose27[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose29[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose30[] = {
	AX_POSE(27, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose32[] = {
	AX_POSE(28, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose33[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose35[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose36[] = {
	AX_POSE(31, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose38[] = {
	AX_POSE(32, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose39[] = {
	AX_POSE(33, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose41[] = {
	AX_POSE(34, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose42[] = {
	AX_POSE(35, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose44[] = {
	AX_POSE(36, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose45[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose47[] = {
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose48[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose75[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose78[] = {
	AX_POSE(41, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose81[] = {
	AX_POSE(42, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose84[] = {
	AX_POSE(43, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose87[] = {
	AX_POSE(44, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose90[] = {
	AX_POSE(45, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose93[] = {
	AX_POSE(46, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose96[] = {
	AX_POSE(47, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose105[] = {
	AX_POSE(48, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose106[] = {
	AX_POSE(49, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose107[] = {
	AX_POSE(50, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose108[] = {
	AX_POSE(51, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose109[] = {
	AX_POSE(52, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose110[] = {
	AX_POSE(53, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose111[] = {
	AX_POSE(54, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose112[] = {
	AX_POSE(55, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose113[] = {
	AX_POSE(56, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose114[] = {
	AX_POSE(57, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose125[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose126[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose128[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose129[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose149[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose152[] = {
	AX_POSE(26, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose155[] = {
	AX_POSE(28, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose158[] = {
	AX_POSE(30, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose161[] = {
	AX_POSE(32, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose164[] = {
	AX_POSE(34, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose167[] = {
	AX_POSE(36, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRoseliaPose170[] = {
	AX_POSE(38, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_anim sRoseliaAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 2}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 25, .offset = {0, 10}, .shadow = {0, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 26, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 27, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {4, -1}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {12, 6}, .shadow = {12, 12} },
	{ .frames = 2, .unkFlags = 2, .poseId = 28, .offset = {15, 12}, .shadow = {15, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {18, 19}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 29, .offset = {19, 18}, .shadow = {19, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {18, 19}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {19, 18}, .shadow = {19, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {8, 8}, .shadow = {8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {1, -2}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {8, -5}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 31, .offset = {15, -5}, .shadow = {15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 32, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {2, -5}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {6, -13}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 34, .offset = {11, -18}, .shadow = {11, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {18, -22}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {19, -21}, .shadow = {19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {18, -22}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {19, -21}, .shadow = {19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -4}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -11}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 37, .offset = {0, -17}, .shadow = {0, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 38, .offset = {1, -22}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {1, -22}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-2, -5}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-6, -13}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 40, .offset = {-11, -18}, .shadow = {-11, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-18, -22}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 41, .offset = {-19, -21}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-18, -22}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-19, -21}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-1, -2}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-8, -5}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 43, .offset = {-15, -5}, .shadow = {-15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 44, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-4, -1}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-12, 6}, .shadow = {-12, 14} },
	{ .frames = 2, .unkFlags = 2, .poseId = 46, .offset = {-15, 12}, .shadow = {-15, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-18, 19}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-19, 18}, .shadow = {-19, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-18, 19}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-19, 18}, .shadow = {-19, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-8, 8}, .shadow = {-8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 48, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 2}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 49, .offset = {0, 10}, .shadow = {0, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 50, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 51, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {4, -1}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {12, 6}, .shadow = {12, 12} },
	{ .frames = 2, .unkFlags = 2, .poseId = 52, .offset = {15, 12}, .shadow = {15, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {18, 19}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 53, .offset = {19, 18}, .shadow = {19, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {18, 19}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {19, 18}, .shadow = {19, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {8, 8}, .shadow = {8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {1, -2}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {8, -5}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 55, .offset = {15, -5}, .shadow = {15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 56, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 57, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {2, -5}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {6, -13}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 58, .offset = {11, -18}, .shadow = {11, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {18, -22}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 59, .offset = {19, -21}, .shadow = {19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {18, -22}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {19, -21}, .shadow = {19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -4}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -11}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 61, .offset = {0, -17}, .shadow = {0, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 62, .offset = {1, -22}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {1, -22}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 63, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-2, -5}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-6, -13}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 64, .offset = {-11, -18}, .shadow = {-11, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-18, -22}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 65, .offset = {-19, -21}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-18, -22}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-19, -21}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 66, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-1, -2}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-8, -5}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 67, .offset = {-15, -5}, .shadow = {-15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 68, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-4, -1}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-12, 6}, .shadow = {-12, 14} },
	{ .frames = 2, .unkFlags = 2, .poseId = 70, .offset = {-15, 12}, .shadow = {-15, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-18, 19}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {-19, 18}, .shadow = {-19, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-18, 19}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-19, 18}, .shadow = {-19, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-8, 8}, .shadow = {-8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 8, .unkFlags = 2, .poseId = 73, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 1, .poseId = 73, .offset = {0, -9}, .shadow = {0, -9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 73, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 4, .unkFlags = 0, .poseId = 73, .offset = {0, -13}, .shadow = {0, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 73, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 8, .unkFlags = 2, .poseId = 76, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 1, .poseId = 76, .offset = {-9, -9}, .shadow = {-9, -9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 76, .offset = {-12, -12}, .shadow = {-12, -12} },
	{ .frames = 4, .unkFlags = 0, .poseId = 76, .offset = {-13, -13}, .shadow = {-13, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 76, .offset = {-12, -12}, .shadow = {-12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-2, -2}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 79, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 79, .offset = {-9, 0}, .shadow = {-9, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 79, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 79, .offset = {-13, 0}, .shadow = {-13, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 79, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 8, .unkFlags = 2, .poseId = 82, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 1, .unkFlags = 1, .poseId = 82, .offset = {-9, 9}, .shadow = {-9, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 82, .offset = {-12, 12}, .shadow = {-12, 12} },
	{ .frames = 4, .unkFlags = 0, .poseId = 82, .offset = {-13, 13}, .shadow = {-13, 13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 82, .offset = {-12, 12}, .shadow = {-12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-6, 6}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-2, 2}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 8, .unkFlags = 2, .poseId = 85, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 1, .poseId = 85, .offset = {0, 9}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 85, .offset = {0, 12}, .shadow = {0, 12} },
	{ .frames = 4, .unkFlags = 0, .poseId = 85, .offset = {0, 13}, .shadow = {0, 13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 85, .offset = {0, 12}, .shadow = {0, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, 2}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 8, .unkFlags = 2, .poseId = 88, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 1, .poseId = 88, .offset = {9, 9}, .shadow = {9, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 88, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 4, .unkFlags = 0, .poseId = 88, .offset = {13, 13}, .shadow = {13, 13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 88, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {2, 2}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 91, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 91, .offset = {9, 0}, .shadow = {9, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 91, .offset = {13, 0}, .shadow = {13, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 91, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 8, .unkFlags = 2, .poseId = 94, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 1, .poseId = 94, .offset = {9, -9}, .shadow = {9, -9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {12, -12}, .shadow = {12, -12} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {13, -13}, .shadow = {13, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 94, .offset = {12, -12}, .shadow = {12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {2, -2}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_5_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_5_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_5_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_5_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_5_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_5_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_5_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_5_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_8_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 40, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_8_2[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 40, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_8_3[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 40, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_8_4[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 40, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_8_5[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 40, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_8_6[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 40, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_8_7[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 40, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_8_8[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 40, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 131, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {7, 17}, .shadow = {7, 17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 134, .offset = {0, 21}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 135, .offset = {-7, 17}, .shadow = {-7, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {-8, 9}, .shadow = {-8, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 130, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {23, 11}, .shadow = {23, 11} },
	{ .frames = 3, .unkFlags = 0, .poseId = 133, .offset = {24, 20}, .shadow = {24, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 134, .offset = {14, 21}, .shadow = {14, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 136, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {4, -5}, .shadow = {4, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {11, -7}, .shadow = {11, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {20, -4}, .shadow = {20, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 132, .offset = {25, 0}, .shadow = {25, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 133, .offset = {21, 4}, .shadow = {21, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {12, 6}, .shadow = {12, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 135, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 136, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {3, -18}, .shadow = {3, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {13, -23}, .shadow = {13, -23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 131, .offset = {24, -22}, .shadow = {24, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 132, .offset = {25, -13}, .shadow = {25, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {19, -4}, .shadow = {19, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 134, .offset = {9, 0}, .shadow = {9, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 135, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {-10, -12}, .shadow = {-10, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {-7, -20}, .shadow = {-7, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 130, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 131, .offset = {7, -20}, .shadow = {7, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {10, -12}, .shadow = {10, -12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 133, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 132, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {-3, -18}, .shadow = {-3, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {-13, -23}, .shadow = {-13, -23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 137, .offset = {-24, -22}, .shadow = {-24, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 136, .offset = {-25, -13}, .shadow = {-25, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {-19, -4}, .shadow = {-19, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 134, .offset = {-9, 0}, .shadow = {-9, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 131, .offset = {-4, -5}, .shadow = {-4, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {-11, -7}, .shadow = {-11, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {-20, -4}, .shadow = {-20, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 136, .offset = {-25, 0}, .shadow = {-25, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 135, .offset = {-21, 4}, .shadow = {-21, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {-12, 6}, .shadow = {-12, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 133, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 130, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {-23, 11}, .shadow = {-23, 11} },
	{ .frames = 3, .unkFlags = 0, .poseId = 135, .offset = {-24, 20}, .shadow = {-24, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 134, .offset = {-14, 21}, .shadow = {-14, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 132, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 147, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 147, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 147, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 146, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 148, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 148, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 150, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 150, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 150, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 149, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 151, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 151, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 156, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 156, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 155, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 157, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 159, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 159, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 158, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 160, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 162, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 162, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 161, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 163, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sRoseliaAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 168, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 168, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 167, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 169, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sRoseliaGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_1.4bpp.lz");
static const ax_sprite sRoseliaSprites1[] = {
	{sRoseliaGfx1, ARRAY_COUNT(sRoseliaGfx1)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_2.4bpp.lz");
static const ax_sprite sRoseliaSprites2[] = {
	{sRoseliaGfx2, ARRAY_COUNT(sRoseliaGfx2)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_3.4bpp.lz");
static const ax_sprite sRoseliaSprites3[] = {
	{sRoseliaGfx3, ARRAY_COUNT(sRoseliaGfx3)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_4.4bpp.lz");
static const ax_sprite sRoseliaSprites4[] = {
	{sRoseliaGfx4, ARRAY_COUNT(sRoseliaGfx4)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_5.4bpp.lz");
static const ax_sprite sRoseliaSprites5[] = {
	{sRoseliaGfx5, ARRAY_COUNT(sRoseliaGfx5)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_6.4bpp.lz");
static const ax_sprite sRoseliaSprites6[] = {
	{sRoseliaGfx6, ARRAY_COUNT(sRoseliaGfx6)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_7.4bpp.lz");
static const ax_sprite sRoseliaSprites7[] = {
	{sRoseliaGfx7, ARRAY_COUNT(sRoseliaGfx7)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_8.4bpp.lz");
static const ax_sprite sRoseliaSprites8[] = {
	{sRoseliaGfx8, ARRAY_COUNT(sRoseliaGfx8)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_9.4bpp.lz");
static const ax_sprite sRoseliaSprites9[] = {
	{sRoseliaGfx9, ARRAY_COUNT(sRoseliaGfx9)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_10.4bpp.lz");
static const ax_sprite sRoseliaSprites10[] = {
	{sRoseliaGfx10, ARRAY_COUNT(sRoseliaGfx10)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_11.4bpp.lz");
static const ax_sprite sRoseliaSprites11[] = {
	{sRoseliaGfx11, ARRAY_COUNT(sRoseliaGfx11)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_12.4bpp.lz");
static const ax_sprite sRoseliaSprites12[] = {
	{sRoseliaGfx12, ARRAY_COUNT(sRoseliaGfx12)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_13.4bpp.lz");
static const ax_sprite sRoseliaSprites13[] = {
	{sRoseliaGfx13, ARRAY_COUNT(sRoseliaGfx13)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_14.4bpp.lz");
static const ax_sprite sRoseliaSprites14[] = {
	{sRoseliaGfx14, ARRAY_COUNT(sRoseliaGfx14)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_15.4bpp.lz");
static const ax_sprite sRoseliaSprites15[] = {
	{sRoseliaGfx15, ARRAY_COUNT(sRoseliaGfx15)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_16.4bpp.lz");
static const ax_sprite sRoseliaSprites16[] = {
	{sRoseliaGfx16, ARRAY_COUNT(sRoseliaGfx16)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_17.4bpp.lz");
static const ax_sprite sRoseliaSprites17[] = {
	{sRoseliaGfx17, ARRAY_COUNT(sRoseliaGfx17)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_18.4bpp.lz");
static const ax_sprite sRoseliaSprites18[] = {
	{sRoseliaGfx18, ARRAY_COUNT(sRoseliaGfx18)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_19.4bpp.lz");
static const ax_sprite sRoseliaSprites19[] = {
	{sRoseliaGfx19, ARRAY_COUNT(sRoseliaGfx19)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_20.4bpp.lz");
static const ax_sprite sRoseliaSprites20[] = {
	{sRoseliaGfx20, ARRAY_COUNT(sRoseliaGfx20)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_21.4bpp.lz");
static const ax_sprite sRoseliaSprites21[] = {
	{sRoseliaGfx21, ARRAY_COUNT(sRoseliaGfx21)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_22.4bpp.lz");
static const ax_sprite sRoseliaSprites22[] = {
	{sRoseliaGfx22, ARRAY_COUNT(sRoseliaGfx22)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_23.4bpp.lz");
static const ax_sprite sRoseliaSprites23[] = {
	{sRoseliaGfx23, ARRAY_COUNT(sRoseliaGfx23)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_24.4bpp.lz");
static const ax_sprite sRoseliaSprites24[] = {
	{sRoseliaGfx24, ARRAY_COUNT(sRoseliaGfx24)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_25.4bpp.lz");
static const u8 sRoseliaGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_25_1.4bpp.lz");
static const u8 sRoseliaGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_25_2.4bpp.lz");
static const ax_sprite sRoseliaSprites25[] = {
	{NULL, 32}, 
	{sRoseliaGfx25, ARRAY_COUNT(sRoseliaGfx25)}, 
	{NULL, 64}, 
	{sRoseliaGfx25_1, ARRAY_COUNT(sRoseliaGfx25_1)}, 
	{NULL, 32}, 
	{sRoseliaGfx25_2, ARRAY_COUNT(sRoseliaGfx25_2)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_26.4bpp.lz");
static const u8 sRoseliaGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_26_1.4bpp.lz");
static const u8 sRoseliaGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_26_2.4bpp.lz");
static const ax_sprite sRoseliaSprites26[] = {
	{NULL, 160}, 
	{sRoseliaGfx26, ARRAY_COUNT(sRoseliaGfx26)}, 
	{NULL, 64}, 
	{sRoseliaGfx26_1, ARRAY_COUNT(sRoseliaGfx26_1)}, 
	{NULL, 32}, 
	{sRoseliaGfx26_2, ARRAY_COUNT(sRoseliaGfx26_2)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_27.4bpp.lz");
static const u8 sRoseliaGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_27_1.4bpp.lz");
static const u8 sRoseliaGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_27_2.4bpp.lz");
static const ax_sprite sRoseliaSprites27[] = {
	{NULL, 32}, 
	{sRoseliaGfx27, ARRAY_COUNT(sRoseliaGfx27)}, 
	{NULL, 96}, 
	{sRoseliaGfx27_1, ARRAY_COUNT(sRoseliaGfx27_1)}, 
	{NULL, 32}, 
	{sRoseliaGfx27_2, ARRAY_COUNT(sRoseliaGfx27_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_28.4bpp.lz");
static const u8 sRoseliaGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_28_1.4bpp.lz");
static const u8 sRoseliaGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_28_2.4bpp.lz");
static const ax_sprite sRoseliaSprites28[] = {
	{NULL, 160}, 
	{sRoseliaGfx28, ARRAY_COUNT(sRoseliaGfx28)}, 
	{NULL, 64}, 
	{sRoseliaGfx28_1, ARRAY_COUNT(sRoseliaGfx28_1)}, 
	{NULL, 32}, 
	{sRoseliaGfx28_2, ARRAY_COUNT(sRoseliaGfx28_2)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_29.4bpp.lz");
static const u8 sRoseliaGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_29_1.4bpp.lz");
static const ax_sprite sRoseliaSprites29[] = {
	{sRoseliaGfx29, ARRAY_COUNT(sRoseliaGfx29)}, 
	{NULL, 32}, 
	{sRoseliaGfx29_1, ARRAY_COUNT(sRoseliaGfx29_1)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_30.4bpp.lz");
static const u8 sRoseliaGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_30_1.4bpp.lz");
static const u8 sRoseliaGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_30_2.4bpp.lz");
static const ax_sprite sRoseliaSprites30[] = {
	{NULL, 160}, 
	{sRoseliaGfx30, ARRAY_COUNT(sRoseliaGfx30)}, 
	{NULL, 64}, 
	{sRoseliaGfx30_1, ARRAY_COUNT(sRoseliaGfx30_1)}, 
	{NULL, 32}, 
	{sRoseliaGfx30_2, ARRAY_COUNT(sRoseliaGfx30_2)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_31.4bpp.lz");
static const u8 sRoseliaGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_31_1.4bpp.lz");
static const u8 sRoseliaGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_31_2.4bpp.lz");
static const u8 sRoseliaGfx31_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_31_3.4bpp.lz");
static const ax_sprite sRoseliaSprites31[] = {
	{NULL, 32}, 
	{sRoseliaGfx31, ARRAY_COUNT(sRoseliaGfx31)}, 
	{NULL, 96}, 
	{sRoseliaGfx31_1, ARRAY_COUNT(sRoseliaGfx31_1)}, 
	{NULL, 32}, 
	{sRoseliaGfx31_2, ARRAY_COUNT(sRoseliaGfx31_2)}, 
	{NULL, 32}, 
	{sRoseliaGfx31_3, ARRAY_COUNT(sRoseliaGfx31_3)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_32.4bpp.lz");
static const u8 sRoseliaGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_32_1.4bpp.lz");
static const u8 sRoseliaGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_32_2.4bpp.lz");
static const ax_sprite sRoseliaSprites32[] = {
	{NULL, 160}, 
	{sRoseliaGfx32, ARRAY_COUNT(sRoseliaGfx32)}, 
	{NULL, 32}, 
	{sRoseliaGfx32_1, ARRAY_COUNT(sRoseliaGfx32_1)}, 
	{NULL, 32}, 
	{sRoseliaGfx32_2, ARRAY_COUNT(sRoseliaGfx32_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_33.4bpp.lz");
static const u8 sRoseliaGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_33_1.4bpp.lz");
static const ax_sprite sRoseliaSprites33[] = {
	{NULL, 64}, 
	{sRoseliaGfx33, ARRAY_COUNT(sRoseliaGfx33)}, 
	{NULL, 32}, 
	{sRoseliaGfx33_1, ARRAY_COUNT(sRoseliaGfx33_1)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_34.4bpp.lz");
static const u8 sRoseliaGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_34_1.4bpp.lz");
static const ax_sprite sRoseliaSprites34[] = {
	{NULL, 128}, 
	{sRoseliaGfx34, ARRAY_COUNT(sRoseliaGfx34)}, 
	{NULL, 32}, 
	{sRoseliaGfx34_1, ARRAY_COUNT(sRoseliaGfx34_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_35.4bpp.lz");
static const u8 sRoseliaGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_35_1.4bpp.lz");
static const u8 sRoseliaGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_35_2.4bpp.lz");
static const ax_sprite sRoseliaSprites35[] = {
	{NULL, 64}, 
	{sRoseliaGfx35, ARRAY_COUNT(sRoseliaGfx35)}, 
	{NULL, 64}, 
	{sRoseliaGfx35_1, ARRAY_COUNT(sRoseliaGfx35_1)}, 
	{NULL, 32}, 
	{sRoseliaGfx35_2, ARRAY_COUNT(sRoseliaGfx35_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_36.4bpp.lz");
static const u8 sRoseliaGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_36_1.4bpp.lz");
static const u8 sRoseliaGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_36_2.4bpp.lz");
static const ax_sprite sRoseliaSprites36[] = {
	{NULL, 128}, 
	{sRoseliaGfx36, ARRAY_COUNT(sRoseliaGfx36)}, 
	{NULL, 32}, 
	{sRoseliaGfx36_1, ARRAY_COUNT(sRoseliaGfx36_1)}, 
	{NULL, 64}, 
	{sRoseliaGfx36_2, ARRAY_COUNT(sRoseliaGfx36_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_37.4bpp.lz");
static const ax_sprite sRoseliaSprites37[] = {
	{NULL, 32}, 
	{sRoseliaGfx37, ARRAY_COUNT(sRoseliaGfx37)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_38.4bpp.lz");
static const u8 sRoseliaGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_38_1.4bpp.lz");
static const u8 sRoseliaGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_38_2.4bpp.lz");
static const ax_sprite sRoseliaSprites38[] = {
	{NULL, 160}, 
	{sRoseliaGfx38, ARRAY_COUNT(sRoseliaGfx38)}, 
	{NULL, 32}, 
	{sRoseliaGfx38_1, ARRAY_COUNT(sRoseliaGfx38_1)}, 
	{NULL, 32}, 
	{sRoseliaGfx38_2, ARRAY_COUNT(sRoseliaGfx38_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_39.4bpp.lz");
static const u8 sRoseliaGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_39_1.4bpp.lz");
static const u8 sRoseliaGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_39_2.4bpp.lz");
static const u8 sRoseliaGfx39_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_39_3.4bpp.lz");
static const ax_sprite sRoseliaSprites39[] = {
	{NULL, 64}, 
	{sRoseliaGfx39, ARRAY_COUNT(sRoseliaGfx39)}, 
	{NULL, 64}, 
	{sRoseliaGfx39_1, ARRAY_COUNT(sRoseliaGfx39_1)}, 
	{NULL, 32}, 
	{sRoseliaGfx39_2, ARRAY_COUNT(sRoseliaGfx39_2)}, 
	{NULL, 32}, 
	{sRoseliaGfx39_3, ARRAY_COUNT(sRoseliaGfx39_3)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_40.4bpp.lz");
static const u8 sRoseliaGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_40_1.4bpp.lz");
static const u8 sRoseliaGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_40_2.4bpp.lz");
static const ax_sprite sRoseliaSprites40[] = {
	{NULL, 160}, 
	{sRoseliaGfx40, ARRAY_COUNT(sRoseliaGfx40)}, 
	{NULL, 32}, 
	{sRoseliaGfx40_1, ARRAY_COUNT(sRoseliaGfx40_1)}, 
	{NULL, 32}, 
	{sRoseliaGfx40_2, ARRAY_COUNT(sRoseliaGfx40_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_41.4bpp.lz");
static const u8 sRoseliaGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_41_1.4bpp.lz");
static const ax_sprite sRoseliaSprites41[] = {
	{NULL, 128}, 
	{sRoseliaGfx41, ARRAY_COUNT(sRoseliaGfx41)}, 
	{NULL, 32}, 
	{sRoseliaGfx41_1, ARRAY_COUNT(sRoseliaGfx41_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_42.4bpp.lz");
static const u8 sRoseliaGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_42_1.4bpp.lz");
static const ax_sprite sRoseliaSprites42[] = {
	{NULL, 128}, 
	{sRoseliaGfx42, ARRAY_COUNT(sRoseliaGfx42)}, 
	{NULL, 32}, 
	{sRoseliaGfx42_1, ARRAY_COUNT(sRoseliaGfx42_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_43.4bpp.lz");
static const ax_sprite sRoseliaSprites43[] = {
	{NULL, 64}, 
	{sRoseliaGfx43, ARRAY_COUNT(sRoseliaGfx43)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_44.4bpp.lz");
static const u8 sRoseliaGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_44_1.4bpp.lz");
static const u8 sRoseliaGfx44_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_44_2.4bpp.lz");
static const ax_sprite sRoseliaSprites44[] = {
	{NULL, 128}, 
	{sRoseliaGfx44, ARRAY_COUNT(sRoseliaGfx44)}, 
	{NULL, 32}, 
	{sRoseliaGfx44_1, ARRAY_COUNT(sRoseliaGfx44_1)}, 
	{NULL, 32}, 
	{sRoseliaGfx44_2, ARRAY_COUNT(sRoseliaGfx44_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_45.4bpp.lz");
static const u8 sRoseliaGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_45_1.4bpp.lz");
static const ax_sprite sRoseliaSprites45[] = {
	{NULL, 128}, 
	{sRoseliaGfx45, ARRAY_COUNT(sRoseliaGfx45)}, 
	{NULL, 32}, 
	{sRoseliaGfx45_1, ARRAY_COUNT(sRoseliaGfx45_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_46.4bpp.lz");
static const u8 sRoseliaGfx46_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_46_1.4bpp.lz");
static const ax_sprite sRoseliaSprites46[] = {
	{NULL, 128}, 
	{sRoseliaGfx46, ARRAY_COUNT(sRoseliaGfx46)}, 
	{NULL, 64}, 
	{sRoseliaGfx46_1, ARRAY_COUNT(sRoseliaGfx46_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_47.4bpp.lz");
static const ax_sprite sRoseliaSprites47[] = {
	{NULL, 64}, 
	{sRoseliaGfx47, ARRAY_COUNT(sRoseliaGfx47)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_48.4bpp.lz");
static const u8 sRoseliaGfx48_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_48_1.4bpp.lz");
static const ax_sprite sRoseliaSprites48[] = {
	{NULL, 128}, 
	{sRoseliaGfx48, ARRAY_COUNT(sRoseliaGfx48)}, 
	{NULL, 32}, 
	{sRoseliaGfx48_1, ARRAY_COUNT(sRoseliaGfx48_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_49.4bpp.lz");
static const ax_sprite sRoseliaSprites49[] = {
	{sRoseliaGfx49, ARRAY_COUNT(sRoseliaGfx49)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_50.4bpp.lz");
static const ax_sprite sRoseliaSprites50[] = {
	{sRoseliaGfx50, ARRAY_COUNT(sRoseliaGfx50)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_51.4bpp.lz");
static const ax_sprite sRoseliaSprites51[] = {
	{sRoseliaGfx51, ARRAY_COUNT(sRoseliaGfx51)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_52.4bpp.lz");
static const ax_sprite sRoseliaSprites52[] = {
	{sRoseliaGfx52, ARRAY_COUNT(sRoseliaGfx52)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_53.4bpp.lz");
static const ax_sprite sRoseliaSprites53[] = {
	{sRoseliaGfx53, ARRAY_COUNT(sRoseliaGfx53)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_54.4bpp.lz");
static const ax_sprite sRoseliaSprites54[] = {
	{sRoseliaGfx54, ARRAY_COUNT(sRoseliaGfx54)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_55.4bpp.lz");
static const ax_sprite sRoseliaSprites55[] = {
	{sRoseliaGfx55, ARRAY_COUNT(sRoseliaGfx55)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_56.4bpp.lz");
static const ax_sprite sRoseliaSprites56[] = {
	{sRoseliaGfx56, ARRAY_COUNT(sRoseliaGfx56)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_57.4bpp.lz");
static const ax_sprite sRoseliaSprites57[] = {
	{sRoseliaGfx57, ARRAY_COUNT(sRoseliaGfx57)}, 
	{NULL, 0}
};
static const u8 sRoseliaGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/roselia/sprite_58.4bpp.lz");
static const ax_sprite sRoseliaSprites58[] = {
	{sRoseliaGfx58, ARRAY_COUNT(sRoseliaGfx58)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesRoselia[] = {
	sRoseliaPose1,
	sRoseliaPose2,
	sRoseliaPose3,
	sRoseliaPose4,
	sRoseliaPose5,
	sRoseliaPose6,
	sRoseliaPose7,
	sRoseliaPose8,
	sRoseliaPose9,
	sRoseliaPose10,
	sRoseliaPose11,
	sRoseliaPose12,
	sRoseliaPose13,
	sRoseliaPose14,
	sRoseliaPose15,
	sRoseliaPose16,
	sRoseliaPose17,
	sRoseliaPose18,
	sRoseliaPose19,
	sRoseliaPose20,
	sRoseliaPose21,
	sRoseliaPose22,
	sRoseliaPose23,
	sRoseliaPose24,
	sRoseliaPose1,
	sRoseliaPose26,
	sRoseliaPose27,
	sRoseliaPose4,
	sRoseliaPose29,
	sRoseliaPose30,
	sRoseliaPose7,
	sRoseliaPose32,
	sRoseliaPose33,
	sRoseliaPose10,
	sRoseliaPose35,
	sRoseliaPose36,
	sRoseliaPose13,
	sRoseliaPose38,
	sRoseliaPose39,
	sRoseliaPose16,
	sRoseliaPose41,
	sRoseliaPose42,
	sRoseliaPose19,
	sRoseliaPose44,
	sRoseliaPose45,
	sRoseliaPose22,
	sRoseliaPose47,
	sRoseliaPose48,
	sRoseliaPose1,
	sRoseliaPose26,
	sRoseliaPose27,
	sRoseliaPose4,
	sRoseliaPose29,
	sRoseliaPose30,
	sRoseliaPose7,
	sRoseliaPose32,
	sRoseliaPose33,
	sRoseliaPose10,
	sRoseliaPose35,
	sRoseliaPose36,
	sRoseliaPose13,
	sRoseliaPose38,
	sRoseliaPose39,
	sRoseliaPose16,
	sRoseliaPose41,
	sRoseliaPose42,
	sRoseliaPose19,
	sRoseliaPose44,
	sRoseliaPose45,
	sRoseliaPose22,
	sRoseliaPose47,
	sRoseliaPose48,
	sRoseliaPose1,
	sRoseliaPose27,
	sRoseliaPose75,
	sRoseliaPose4,
	sRoseliaPose30,
	sRoseliaPose78,
	sRoseliaPose7,
	sRoseliaPose33,
	sRoseliaPose81,
	sRoseliaPose10,
	sRoseliaPose36,
	sRoseliaPose84,
	sRoseliaPose13,
	sRoseliaPose39,
	sRoseliaPose87,
	sRoseliaPose16,
	sRoseliaPose42,
	sRoseliaPose90,
	sRoseliaPose19,
	sRoseliaPose45,
	sRoseliaPose93,
	sRoseliaPose22,
	sRoseliaPose48,
	sRoseliaPose96,
	sRoseliaPose75,
	sRoseliaPose78,
	sRoseliaPose81,
	sRoseliaPose84,
	sRoseliaPose87,
	sRoseliaPose90,
	sRoseliaPose93,
	sRoseliaPose96,
	sRoseliaPose105,
	sRoseliaPose106,
	sRoseliaPose107,
	sRoseliaPose108,
	sRoseliaPose109,
	sRoseliaPose110,
	sRoseliaPose111,
	sRoseliaPose112,
	sRoseliaPose113,
	sRoseliaPose114,
	sRoseliaPose1,
	sRoseliaPose22,
	sRoseliaPose19,
	sRoseliaPose16,
	sRoseliaPose13,
	sRoseliaPose10,
	sRoseliaPose7,
	sRoseliaPose4,
	sRoseliaPose3,
	sRoseliaPose24,
	sRoseliaPose125,
	sRoseliaPose126,
	sRoseliaPose15,
	sRoseliaPose128,
	sRoseliaPose129,
	sRoseliaPose6,
	sRoseliaPose75,
	sRoseliaPose96,
	sRoseliaPose93,
	sRoseliaPose90,
	sRoseliaPose87,
	sRoseliaPose84,
	sRoseliaPose81,
	sRoseliaPose78,
	sRoseliaPose75,
	sRoseliaPose78,
	sRoseliaPose81,
	sRoseliaPose84,
	sRoseliaPose87,
	sRoseliaPose90,
	sRoseliaPose93,
	sRoseliaPose96,
	sRoseliaPose1,
	sRoseliaPose75,
	sRoseliaPose149,
	sRoseliaPose4,
	sRoseliaPose78,
	sRoseliaPose152,
	sRoseliaPose7,
	sRoseliaPose81,
	sRoseliaPose155,
	sRoseliaPose10,
	sRoseliaPose84,
	sRoseliaPose158,
	sRoseliaPose13,
	sRoseliaPose87,
	sRoseliaPose161,
	sRoseliaPose16,
	sRoseliaPose90,
	sRoseliaPose164,
	sRoseliaPose19,
	sRoseliaPose93,
	sRoseliaPose167,
	sRoseliaPose22,
	sRoseliaPose96,
	sRoseliaPose170,
	sRoseliaPose27,
	sRoseliaPose48,
	sRoseliaPose45,
	sRoseliaPose42,
	sRoseliaPose39,
	sRoseliaPose36,
	sRoseliaPose33,
	sRoseliaPose30,
	sRoseliaPose1,
	sRoseliaPose22,
	sRoseliaPose19,
	sRoseliaPose16,
	sRoseliaPose13,
	sRoseliaPose10,
	sRoseliaPose7,
	sRoseliaPose4,
};

static const struct PositionSets sAxPositionsRoselia[] = {
	[0] = { .set = { {-1, -7}, {-10, -8}, {10, -8}, {0, -4} } },
	[1] = { .set = { {-2, -6}, {-9, -8}, {9, -5}, {-1, -4} } },
	[2] = { .set = { {1, -6}, {-9, -5}, {9, -8}, {0, -4} } },
	[3] = { .set = { {2, -7}, {-7, -4}, {8, -9}, {0, -4} } },
	[4] = { .set = { {3, -7}, {-5, -2}, {5, -10}, {0, -3} } },
	[5] = { .set = { {1, -6}, {-8, -5}, {8, -8}, {0, -3} } },
	[6] = { .set = { {2, -7}, {2, -2}, {4, -12}, {1, -3} } },
	[7] = { .set = { {3, -6}, {4, -3}, {-3, -9}, {0, -2} } },
	[8] = { .set = { {2, -6}, {-2, -1}, {6, -9}, {-1, -2} } },
	[9] = { .set = { {3, -8}, {9, -6}, {-4, -10}, {0, -4} } },
	[10] = { .set = { {3, -7}, {9, -6}, {-6, -7}, {0, -3} } },
	[11] = { .set = { {3, -7}, {7, -4}, {-4, -10}, {0, -2} } },
	[12] = { .set = { {0, -9}, {9, -8}, {-10, -8}, {0, -4} } },
	[13] = { .set = { {0, -9}, {8, -5}, {-9, -9}, {-1, -3} } },
	[14] = { .set = { {-1, -9}, {8, -9}, {-9, -4}, {0, -3} } },
	[15] = { .set = { {-4, -10}, {4, -10}, {-11, -5}, {-1, -5} } },
	[16] = { .set = { {-5, -8}, {4, -8}, {-11, -6}, {-1, -4} } },
	[17] = { .set = { {-3, -10}, {2, -10}, {-9, -3}, {-1, -4} } },
	[18] = { .set = { {-4, -8}, {-5, -12}, {-3, -1}, {-2, -4} } },
	[19] = { .set = { {-4, -7}, {2, -8}, {-5, -1}, {-1, -3} } },
	[20] = { .set = { {-4, -7}, {-6, -9}, {0, 0}, {0, -2} } },
	[21] = { .set = { {-3, -7}, {-8, -10}, {6, -4}, {-1, -5} } },
	[22] = { .set = { {-3, -6}, {-7, -9}, {4, -2}, {-1, -4} } },
	[23] = { .set = { {-1, -6}, {-9, -8}, {7, -5}, {-1, -4} } },
	[24] = { .set = { {-1, -7}, {-10, -8}, {10, -8}, {0, -4} } },
	[25] = { .set = { {-1, -8}, {-11, -4}, {10, -4}, {-1, -6} } },
	[26] = { .set = { {-1, -7}, {-6, -2}, {4, -2}, {0, -5} } },
	[27] = { .set = { {2, -7}, {-7, -4}, {8, -9}, {0, -4} } },
	[28] = { .set = { {2, -8}, {-6, -2}, {7, -6}, {1, -5} } },
	[29] = { .set = { {2, -7}, {4, -1}, {9, -4}, {1, -4} } },
	[30] = { .set = { {2, -7}, {2, -2}, {4, -12}, {1, -3} } },
	[31] = { .set = { {2, -8}, {2, 0}, {4, -7}, {-1, -4} } },
	[32] = { .set = { {2, -7}, {7, -4}, {6, -8}, {0, -4} } },
	[33] = { .set = { {3, -8}, {9, -6}, {-4, -10}, {0, -4} } },
	[34] = { .set = { {2, -9}, {8, -3}, {-5, -7}, {0, -4} } },
	[35] = { .set = { {3, -8}, {8, -9}, {5, -10}, {0, -3} } },
	[36] = { .set = { {0, -9}, {9, -8}, {-10, -8}, {0, -4} } },
	[37] = { .set = { {0, -11}, {9, -6}, {-10, -6}, {0, -4} } },
	[38] = { .set = { {0, -9}, {6, -11}, {-7, -11}, {-1, -3} } },
	[39] = { .set = { {-4, -10}, {4, -10}, {-11, -5}, {-1, -5} } },
	[40] = { .set = { {-3, -11}, {5, -7}, {-9, -2}, {-1, -4} } },
	[41] = { .set = { {-4, -10}, {-6, -10}, {-10, -9}, {-1, -3} } },
	[42] = { .set = { {-4, -8}, {-5, -12}, {-3, -1}, {-2, -4} } },
	[43] = { .set = { {-3, -8}, {-5, -7}, {-2, 0}, {-1, -6} } },
	[44] = { .set = { {-3, -7}, {-8, -9}, {-9, -4}, {-1, -5} } },
	[45] = { .set = { {-3, -7}, {-8, -10}, {6, -4}, {-1, -5} } },
	[46] = { .set = { {-3, -8}, {-8, -6}, {6, -2}, {-1, -6} } },
	[47] = { .set = { {-3, -7}, {-10, -5}, {-6, -1}, {-2, -5} } },
	[48] = { .set = { {-1, -7}, {-10, -8}, {10, -8}, {0, -4} } },
	[49] = { .set = { {-1, -8}, {-11, -4}, {10, -4}, {-1, -6} } },
	[50] = { .set = { {-1, -7}, {-6, -2}, {4, -2}, {0, -5} } },
	[51] = { .set = { {2, -7}, {-7, -4}, {8, -9}, {0, -4} } },
	[52] = { .set = { {2, -8}, {-6, -2}, {7, -6}, {1, -5} } },
	[53] = { .set = { {2, -7}, {4, -1}, {9, -4}, {1, -4} } },
	[54] = { .set = { {2, -7}, {2, -2}, {4, -12}, {1, -3} } },
	[55] = { .set = { {2, -8}, {2, 0}, {4, -7}, {-1, -4} } },
	[56] = { .set = { {2, -7}, {7, -4}, {6, -8}, {0, -4} } },
	[57] = { .set = { {3, -8}, {9, -6}, {-4, -10}, {0, -4} } },
	[58] = { .set = { {2, -9}, {8, -3}, {-5, -7}, {0, -4} } },
	[59] = { .set = { {3, -8}, {8, -9}, {5, -10}, {0, -3} } },
	[60] = { .set = { {0, -9}, {9, -8}, {-10, -8}, {0, -4} } },
	[61] = { .set = { {0, -11}, {9, -6}, {-10, -6}, {0, -4} } },
	[62] = { .set = { {0, -9}, {6, -11}, {-7, -11}, {-1, -3} } },
	[63] = { .set = { {-4, -10}, {4, -10}, {-11, -5}, {-1, -5} } },
	[64] = { .set = { {-3, -11}, {5, -7}, {-9, -2}, {-1, -4} } },
	[65] = { .set = { {-4, -10}, {-6, -10}, {-10, -9}, {-1, -3} } },
	[66] = { .set = { {-4, -8}, {-5, -12}, {-3, -1}, {-2, -4} } },
	[67] = { .set = { {-3, -8}, {-5, -7}, {-2, 0}, {-1, -6} } },
	[68] = { .set = { {-3, -7}, {-8, -9}, {-9, -4}, {-1, -5} } },
	[69] = { .set = { {-3, -7}, {-8, -10}, {6, -4}, {-1, -5} } },
	[70] = { .set = { {-3, -8}, {-8, -6}, {6, -2}, {-1, -6} } },
	[71] = { .set = { {-3, -7}, {-10, -5}, {-6, -1}, {-2, -5} } },
	[72] = { .set = { {-1, -7}, {-10, -8}, {10, -8}, {0, -4} } },
	[73] = { .set = { {-1, -7}, {-6, -2}, {4, -2}, {0, -5} } },
	[74] = { .set = { {-1, -9}, {-10, -14}, {9, -14}, {-1, -5} } },
	[75] = { .set = { {2, -7}, {-7, -4}, {8, -9}, {0, -4} } },
	[76] = { .set = { {2, -7}, {4, -1}, {9, -4}, {1, -4} } },
	[77] = { .set = { {2, -9}, {-7, -12}, {7, -14}, {0, -4} } },
	[78] = { .set = { {2, -7}, {2, -2}, {4, -12}, {1, -3} } },
	[79] = { .set = { {2, -7}, {7, -4}, {6, -8}, {0, -4} } },
	[80] = { .set = { {1, -8}, {1, -11}, {2, -16}, {0, -3} } },
	[81] = { .set = { {3, -8}, {9, -6}, {-4, -10}, {0, -4} } },
	[82] = { .set = { {3, -8}, {8, -9}, {5, -10}, {0, -3} } },
	[83] = { .set = { {2, -9}, {7, -12}, {-5, -15}, {0, -4} } },
	[84] = { .set = { {0, -9}, {9, -8}, {-10, -8}, {0, -4} } },
	[85] = { .set = { {0, -9}, {6, -11}, {-7, -11}, {-1, -3} } },
	[86] = { .set = { {0, -9}, {9, -13}, {-10, -13}, {0, -3} } },
	[87] = { .set = { {-4, -10}, {4, -10}, {-11, -5}, {-1, -5} } },
	[88] = { .set = { {-4, -10}, {-6, -10}, {-10, -9}, {-1, -3} } },
	[89] = { .set = { {-2, -10}, {5, -14}, {-8, -12}, {-1, -3} } },
	[90] = { .set = { {-4, -8}, {-5, -12}, {-3, -1}, {-2, -4} } },
	[91] = { .set = { {-3, -7}, {-8, -9}, {-9, -4}, {-1, -5} } },
	[92] = { .set = { {-3, -10}, {-3, -16}, {-1, -11}, {-1, -4} } },
	[93] = { .set = { {-3, -7}, {-8, -10}, {6, -4}, {-1, -5} } },
	[94] = { .set = { {-3, -7}, {-10, -5}, {-6, -1}, {-2, -5} } },
	[95] = { .set = { {-3, -9}, {-8, -16}, {6, -12}, {-1, -5} } },
	[96] = { .set = { {-1, -9}, {-10, -14}, {9, -14}, {-1, -5} } },
	[97] = { .set = { {2, -9}, {-7, -12}, {7, -14}, {0, -4} } },
	[98] = { .set = { {1, -8}, {1, -11}, {2, -16}, {0, -3} } },
	[99] = { .set = { {2, -9}, {7, -12}, {-5, -15}, {0, -4} } },
	[100] = { .set = { {0, -9}, {9, -13}, {-10, -13}, {0, -3} } },
	[101] = { .set = { {-2, -10}, {5, -14}, {-8, -12}, {-1, -3} } },
	[102] = { .set = { {-3, -10}, {-3, -16}, {-1, -11}, {-1, -4} } },
	[103] = { .set = { {-3, -9}, {-8, -16}, {6, -12}, {-1, -5} } },
	[104] = { .set = { {-2, -4}, {4, 1}, {10, -3}, {-3, -2} } },
	[105] = { .set = { {-2, -3}, {5, 1}, {9, -3}, {-3, -2} } },
	[106] = { .set = { {0, -11}, {-7, -2}, {6, -2}, {0, -8} } },
	[107] = { .set = { {1, -11}, {-3, -2}, {7, -7}, {0, -8} } },
	[108] = { .set = { {0, -11}, {3, -3}, {6, -12}, {0, -8} } },
	[109] = { .set = { {0, -8}, {8, -9}, {2, -15}, {1, -6} } },
	[110] = { .set = { {-1, -16}, {9, -15}, {-10, -15}, {0, -8} } },
	[111] = { .set = { {-2, -12}, {-3, -15}, {-10, -10}, {-2, -7} } },
	[112] = { .set = { {-1, -10}, {-7, -10}, {-5, -2}, {-2, -7} } },
	[113] = { .set = { {-2, -11}, {-8, -7}, {2, -2}, {-1, -6} } },
	[114] = { .set = { {-1, -7}, {-10, -8}, {10, -8}, {0, -4} } },
	[115] = { .set = { {-3, -7}, {-8, -10}, {6, -4}, {-1, -5} } },
	[116] = { .set = { {-4, -8}, {-5, -12}, {-3, -1}, {-2, -4} } },
	[117] = { .set = { {-4, -10}, {4, -10}, {-11, -5}, {-1, -5} } },
	[118] = { .set = { {0, -9}, {9, -8}, {-10, -8}, {0, -4} } },
	[119] = { .set = { {3, -8}, {9, -6}, {-4, -10}, {0, -4} } },
	[120] = { .set = { {2, -7}, {2, -2}, {4, -12}, {1, -3} } },
	[121] = { .set = { {2, -7}, {-7, -4}, {8, -9}, {0, -4} } },
	[122] = { .set = { {1, -6}, {-9, -5}, {9, -8}, {0, -4} } },
	[123] = { .set = { {-1, -6}, {-9, -8}, {7, -5}, {-1, -4} } },
	[124] = { .set = { {-4, -8}, {-6, -10}, {0, -1}, {0, -3} } },
	[125] = { .set = { {-3, -11}, {2, -11}, {-9, -4}, {-1, -5} } },
	[126] = { .set = { {-1, -9}, {8, -9}, {-9, -4}, {0, -3} } },
	[127] = { .set = { {3, -8}, {7, -5}, {-4, -11}, {0, -3} } },
	[128] = { .set = { {2, -7}, {-2, -2}, {6, -10}, {-1, -3} } },
	[129] = { .set = { {1, -6}, {-8, -5}, {8, -8}, {0, -3} } },
	[130] = { .set = { {-1, -9}, {-10, -14}, {9, -14}, {-1, -5} } },
	[131] = { .set = { {-3, -9}, {-8, -16}, {6, -12}, {-1, -5} } },
	[132] = { .set = { {-3, -10}, {-3, -16}, {-1, -11}, {-1, -4} } },
	[133] = { .set = { {-2, -10}, {5, -14}, {-8, -12}, {-1, -3} } },
	[134] = { .set = { {0, -9}, {9, -13}, {-10, -13}, {0, -3} } },
	[135] = { .set = { {2, -9}, {7, -12}, {-5, -15}, {0, -4} } },
	[136] = { .set = { {1, -8}, {1, -11}, {2, -16}, {0, -3} } },
	[137] = { .set = { {2, -9}, {-7, -12}, {7, -14}, {0, -4} } },
	[138] = { .set = { {-1, -9}, {-10, -14}, {9, -14}, {-1, -5} } },
	[139] = { .set = { {2, -9}, {-7, -12}, {7, -14}, {0, -4} } },
	[140] = { .set = { {1, -8}, {1, -11}, {2, -16}, {0, -3} } },
	[141] = { .set = { {2, -9}, {7, -12}, {-5, -15}, {0, -4} } },
	[142] = { .set = { {0, -9}, {9, -13}, {-10, -13}, {0, -3} } },
	[143] = { .set = { {-2, -10}, {5, -14}, {-8, -12}, {-1, -3} } },
	[144] = { .set = { {-3, -10}, {-3, -16}, {-1, -11}, {-1, -4} } },
	[145] = { .set = { {-3, -9}, {-8, -16}, {6, -12}, {-1, -5} } },
	[146] = { .set = { {-1, -7}, {-10, -8}, {10, -8}, {0, -4} } },
	[147] = { .set = { {-1, -9}, {-10, -14}, {9, -14}, {-1, -5} } },
	[148] = { .set = { {-1, -6}, {-11, -2}, {10, -2}, {-1, -4} } },
	[149] = { .set = { {2, -7}, {-7, -4}, {8, -9}, {0, -4} } },
	[150] = { .set = { {2, -9}, {-7, -12}, {7, -14}, {0, -4} } },
	[151] = { .set = { {2, -6}, {-6, 0}, {7, -4}, {1, -3} } },
	[152] = { .set = { {2, -7}, {2, -2}, {4, -12}, {1, -3} } },
	[153] = { .set = { {1, -8}, {1, -11}, {2, -16}, {0, -3} } },
	[154] = { .set = { {2, -6}, {2, 2}, {4, -5}, {-1, -2} } },
	[155] = { .set = { {3, -8}, {9, -6}, {-4, -10}, {0, -4} } },
	[156] = { .set = { {2, -9}, {7, -12}, {-5, -15}, {0, -4} } },
	[157] = { .set = { {2, -7}, {8, -1}, {-5, -5}, {0, -2} } },
	[158] = { .set = { {0, -9}, {9, -8}, {-10, -8}, {0, -4} } },
	[159] = { .set = { {0, -9}, {9, -13}, {-10, -13}, {0, -3} } },
	[160] = { .set = { {0, -9}, {9, -4}, {-10, -4}, {0, -2} } },
	[161] = { .set = { {-4, -10}, {4, -10}, {-11, -5}, {-1, -5} } },
	[162] = { .set = { {-2, -10}, {5, -14}, {-8, -12}, {-1, -3} } },
	[163] = { .set = { {-3, -9}, {5, -5}, {-9, 0}, {-1, -2} } },
	[164] = { .set = { {-4, -8}, {-5, -12}, {-3, -1}, {-2, -4} } },
	[165] = { .set = { {-3, -10}, {-3, -16}, {-1, -11}, {-1, -4} } },
	[166] = { .set = { {-3, -6}, {-5, -5}, {-2, 2}, {-1, -4} } },
	[167] = { .set = { {-3, -7}, {-8, -10}, {6, -4}, {-1, -5} } },
	[168] = { .set = { {-3, -9}, {-8, -16}, {6, -12}, {-1, -5} } },
	[169] = { .set = { {-3, -6}, {-8, -4}, {6, 0}, {-1, -4} } },
	[170] = { .set = { {-1, -7}, {-6, -2}, {4, -2}, {0, -5} } },
	[171] = { .set = { {-3, -7}, {-10, -5}, {-6, -1}, {-2, -5} } },
	[172] = { .set = { {-3, -7}, {-8, -9}, {-9, -4}, {-1, -5} } },
	[173] = { .set = { {-4, -10}, {-6, -10}, {-10, -9}, {-1, -3} } },
	[174] = { .set = { {0, -9}, {6, -11}, {-7, -11}, {-1, -3} } },
	[175] = { .set = { {3, -8}, {8, -9}, {5, -10}, {0, -3} } },
	[176] = { .set = { {2, -7}, {7, -4}, {6, -8}, {0, -4} } },
	[177] = { .set = { {2, -7}, {4, -1}, {9, -4}, {1, -4} } },
	[178] = { .set = { {-1, -7}, {-10, -8}, {10, -8}, {0, -4} } },
	[179] = { .set = { {-3, -7}, {-8, -10}, {6, -4}, {-1, -5} } },
	[180] = { .set = { {-4, -8}, {-5, -12}, {-3, -1}, {-2, -4} } },
	[181] = { .set = { {-4, -10}, {4, -10}, {-11, -5}, {-1, -5} } },
	[182] = { .set = { {0, -9}, {9, -8}, {-10, -8}, {0, -4} } },
	[183] = { .set = { {3, -8}, {9, -6}, {-4, -10}, {0, -4} } },
	[184] = { .set = { {2, -7}, {2, -2}, {4, -12}, {1, -3} } },
	[185] = { .set = { {2, -7}, {-7, -4}, {8, -9}, {0, -4} } },
};

static const ax_anim *const sRoseliaAnimTable1[] = {
	gAxSharedAnim_02603,
	gAxSharedAnim_02679,
	gAxSharedAnim_02688,
	gAxSharedAnim_02697,
	gAxSharedAnim_02615,
	gAxSharedAnim_02637,
	gAxSharedAnim_02650,
	gAxSharedAnim_02659,
};

static const ax_anim *const sRoseliaAnimTable2[] = {
	sRoseliaAnims_2_1,
	sRoseliaAnims_2_2,
	sRoseliaAnims_2_3,
	sRoseliaAnims_2_4,
	sRoseliaAnims_2_5,
	sRoseliaAnims_2_6,
	sRoseliaAnims_2_7,
	sRoseliaAnims_2_8,
};

static const ax_anim *const sRoseliaAnimTable3[] = {
	sRoseliaAnims_3_1,
	sRoseliaAnims_3_2,
	sRoseliaAnims_3_3,
	sRoseliaAnims_3_4,
	sRoseliaAnims_3_5,
	sRoseliaAnims_3_6,
	sRoseliaAnims_3_7,
	sRoseliaAnims_3_8,
};

static const ax_anim *const sRoseliaAnimTable4[] = {
	sRoseliaAnims_4_1,
	sRoseliaAnims_4_2,
	sRoseliaAnims_4_3,
	sRoseliaAnims_4_4,
	sRoseliaAnims_4_5,
	sRoseliaAnims_4_6,
	sRoseliaAnims_4_7,
	sRoseliaAnims_4_8,
};

static const ax_anim *const sRoseliaAnimTable5[] = {
	sRoseliaAnims_5_1,
	sRoseliaAnims_5_2,
	sRoseliaAnims_5_3,
	sRoseliaAnims_5_4,
	sRoseliaAnims_5_5,
	sRoseliaAnims_5_6,
	sRoseliaAnims_5_7,
	sRoseliaAnims_5_8,
};

static const ax_anim *const sRoseliaAnimTable6[] = {
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
};

static const ax_anim *const sRoseliaAnimTable7[] = {
	gAxSharedAnim_00193,
	gAxSharedAnim_00201,
	gAxSharedAnim_00210,
	gAxSharedAnim_00218,
	gAxSharedAnim_00232,
	gAxSharedAnim_00244,
	gAxSharedAnim_00252,
	gAxSharedAnim_00259,
};

static const ax_anim *const sRoseliaAnimTable8[] = {
	sRoseliaAnims_8_1,
	sRoseliaAnims_8_2,
	sRoseliaAnims_8_3,
	sRoseliaAnims_8_4,
	sRoseliaAnims_8_5,
	sRoseliaAnims_8_6,
	sRoseliaAnims_8_7,
	sRoseliaAnims_8_8,
};

static const ax_anim *const sRoseliaAnimTable9[] = {
	sRoseliaAnims_9_1,
	sRoseliaAnims_9_2,
	sRoseliaAnims_9_3,
	sRoseliaAnims_9_4,
	sRoseliaAnims_9_5,
	sRoseliaAnims_9_6,
	sRoseliaAnims_9_7,
	sRoseliaAnims_9_8,
};

static const ax_anim *const sRoseliaAnimTable10[] = {
	gAxSharedAnim_00474,
	gAxSharedAnim_00483,
	gAxSharedAnim_00492,
	gAxSharedAnim_00500,
	gAxSharedAnim_00506,
	gAxSharedAnim_00515,
	gAxSharedAnim_00521,
	gAxSharedAnim_00526,
};

static const ax_anim *const sRoseliaAnimTable11[] = {
	sRoseliaAnims_11_1,
	sRoseliaAnims_11_2,
	gAxSharedAnim_00589,
	sRoseliaAnims_11_4,
	sRoseliaAnims_11_5,
	sRoseliaAnims_11_6,
	gAxSharedAnim_00724,
	sRoseliaAnims_11_8,
};

static const ax_anim *const sRoseliaAnimTable12[] = {
	gAxSharedAnim_00804,
	gAxSharedAnim_00891,
	gAxSharedAnim_00868,
	gAxSharedAnim_00856,
	gAxSharedAnim_00855,
	gAxSharedAnim_00842,
	gAxSharedAnim_00820,
	gAxSharedAnim_00805,
};

static const ax_anim *const sRoseliaAnimTable13[] = {
	gAxSharedAnim_00906,
	gAxSharedAnim_00992,
	gAxSharedAnim_00980,
	gAxSharedAnim_00967,
	gAxSharedAnim_00956,
	gAxSharedAnim_00944,
	gAxSharedAnim_00931,
	gAxSharedAnim_00919,
};

static const ax_anim *const *const sAxAnimationsRoselia[] = {
	sRoseliaAnimTable1,
	sRoseliaAnimTable2,
	sRoseliaAnimTable3,
	sRoseliaAnimTable4,
	sRoseliaAnimTable5,
	sRoseliaAnimTable6,
	sRoseliaAnimTable7,
	sRoseliaAnimTable8,
	sRoseliaAnimTable9,
	sRoseliaAnimTable10,
	sRoseliaAnimTable11,
	sRoseliaAnimTable12,
	sRoseliaAnimTable13,
};

static const ax_sprite *const sAxSpritesRoselia[] = {
	sRoseliaSprites1,
	sRoseliaSprites2,
	sRoseliaSprites3,
	sRoseliaSprites4,
	sRoseliaSprites5,
	sRoseliaSprites6,
	sRoseliaSprites7,
	sRoseliaSprites8,
	sRoseliaSprites9,
	sRoseliaSprites10,
	sRoseliaSprites11,
	sRoseliaSprites12,
	sRoseliaSprites13,
	sRoseliaSprites14,
	sRoseliaSprites15,
	sRoseliaSprites16,
	sRoseliaSprites17,
	sRoseliaSprites18,
	sRoseliaSprites19,
	sRoseliaSprites20,
	sRoseliaSprites21,
	sRoseliaSprites22,
	sRoseliaSprites23,
	sRoseliaSprites24,
	sRoseliaSprites25,
	sRoseliaSprites26,
	sRoseliaSprites27,
	sRoseliaSprites28,
	sRoseliaSprites29,
	sRoseliaSprites30,
	sRoseliaSprites31,
	sRoseliaSprites32,
	sRoseliaSprites33,
	sRoseliaSprites34,
	sRoseliaSprites35,
	sRoseliaSprites36,
	sRoseliaSprites37,
	sRoseliaSprites38,
	sRoseliaSprites39,
	sRoseliaSprites40,
	sRoseliaSprites41,
	sRoseliaSprites42,
	sRoseliaSprites43,
	sRoseliaSprites44,
	sRoseliaSprites45,
	sRoseliaSprites46,
	sRoseliaSprites47,
	sRoseliaSprites48,
	sRoseliaSprites49,
	sRoseliaSprites50,
	sRoseliaSprites51,
	sRoseliaSprites52,
	sRoseliaSprites53,
	sRoseliaSprites54,
	sRoseliaSprites55,
	sRoseliaSprites56,
	sRoseliaSprites57,
	sRoseliaSprites58,
};

static const axmain sAxMainRoselia = {
	.poses = sAxPosesRoselia,
	.animations = sAxAnimationsRoselia,
	.animCount = ARRAY_COUNT(sAxAnimationsRoselia),
	.spriteData = sAxSpritesRoselia,
	.positions = sAxPositionsRoselia,
};
