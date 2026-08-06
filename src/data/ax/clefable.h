/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainClefable;
const SiroArchive gAxClefable = {"SIRO", &sAxMainClefable};

static const ax_pose sClefablePose1[] = {
	AX_POSE(0, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose2[] = {
	AX_POSE(1, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose3[] = {
	AX_POSE(2, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose4[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose5[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose6[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose7[] = {
	AX_POSE(6, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose8[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose9[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose10[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose11[] = {
	AX_POSE(10, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose12[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose13[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose14[] = {
	AX_POSE(13, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose15[] = {
	AX_POSE(14, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose16[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose17[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose18[] = {
	AX_POSE(17, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose19[] = {
	AX_POSE(6, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose20[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose21[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose22[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose23[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose24[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose28[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose32[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose36[] = {
	AX_POSE(20, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose40[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose44[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose48[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose52[] = {
	AX_POSE(20, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose56[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose90[] = {
	AX_POSE(23, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose93[] = {
	AX_POSE(24, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose96[] = {
	AX_POSE(25, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose99[] = {
	AX_POSE(26, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose102[] = {
	AX_POSE(27, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose105[] = {
	AX_POSE(26, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose108[] = {
	AX_POSE(25, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose111[] = {
	AX_POSE(24, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose114[] = {
	AX_POSE(28, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose115[] = {
	AX_POSE(29, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose117[] = {
	AX_POSE(30, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose118[] = {
	AX_POSE(31, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose120[] = {
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose121[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose123[] = {
	AX_POSE(34, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose124[] = {
	AX_POSE(35, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose126[] = {
	AX_POSE(36, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose127[] = {
	AX_POSE(37, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose129[] = {
	AX_POSE(34, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose130[] = {
	AX_POSE(35, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose132[] = {
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose133[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose135[] = {
	AX_POSE(30, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose136[] = {
	AX_POSE(31, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose137[] = {
	AX_POSE(38, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose138[] = {
	AX_POSE(39, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose139[] = {
	AX_POSE(40, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose140[] = {
	AX_POSE(41, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose141[] = {
	AX_POSE(42, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose142[] = {
	AX_POSE(43, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose143[] = {
	AX_POSE(44, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose144[] = {
	AX_POSE(43, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose145[] = {
	AX_POSE(42, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefablePose146[] = {
	AX_POSE(41, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_anim sClefableAnims_1_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_1_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_1_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_1_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {-1, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {-1, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {-1, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_1_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_1_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {1, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {1, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {1, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_1_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_1_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 32, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 33, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {21, 0}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {21, -1}, .shadow = {21, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {21, 0}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {21, -1}, .shadow = {21, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 37, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {20, -20}, .shadow = {20, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {21, -19}, .shadow = {21, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {20, -20}, .shadow = {20, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {21, -19}, .shadow = {21, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 45, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-20, -20}, .shadow = {-20, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-21, -19}, .shadow = {-21, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-20, -20}, .shadow = {-20, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-21, -19}, .shadow = {-21, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 48, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 49, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {-21, -1}, .shadow = {-21, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-21, -1}, .shadow = {-21, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 64, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 65, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {21, 0}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {21, -1}, .shadow = {21, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {21, 0}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {21, -1}, .shadow = {21, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 68, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 69, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {20, -20}, .shadow = {20, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {21, -19}, .shadow = {21, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {20, -20}, .shadow = {20, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {21, -19}, .shadow = {21, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 76, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 78, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 77, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 78, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-20, -20}, .shadow = {-20, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {-21, -19}, .shadow = {-21, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-20, -20}, .shadow = {-20, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-21, -19}, .shadow = {-21, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 80, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 82, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 81, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 82, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {-21, -1}, .shadow = {-21, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-21, -1}, .shadow = {-21, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_4_1[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 89, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_4_2[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 92, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_4_3[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 95, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_4_4[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 98, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_4_5[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 101, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_4_6[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 104, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_4_7[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 107, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_4_8[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 110, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_5_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_5_2[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_5_3[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_5_4[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_5_5[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_5_6[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_5_7[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_5_8[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_8_1[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 147, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 147, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 146, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 148, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 148, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_8_2[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 150, .offset = {2, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 150, .offset = {2, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 149, .offset = {1, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 151, .offset = {2, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 151, .offset = {2, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_8_3[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 153, .offset = {2, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 153, .offset = {2, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 152, .offset = {1, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 154, .offset = {1, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 154, .offset = {1, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_8_4[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 157, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 155, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 156, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_8_5[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 159, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 158, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 160, .offset = {1, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 160, .offset = {1, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_8_6[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 163, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 161, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 162, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_8_7[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 165, .offset = {-1, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 165, .offset = {-1, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 164, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 166, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_8_8[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 168, .offset = {-2, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 168, .offset = {-2, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 167, .offset = {-1, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 169, .offset = {-2, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 169, .offset = {-2, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {18, -5}, .shadow = {18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 172, .offset = {19, -2}, .shadow = {19, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 173, .offset = {18, 4}, .shadow = {18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {12, 5}, .shadow = {12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {-1, -6}, .shadow = {-1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {12, -22}, .shadow = {12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 171, .offset = {20, -20}, .shadow = {20, -20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 172, .offset = {22, -12}, .shadow = {22, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-7, -18}, .shadow = {-7, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 170, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 171, .offset = {7, -18}, .shadow = {7, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {9, -10}, .shadow = {9, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-12, -22}, .shadow = {-12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 177, .offset = {-20, -20}, .shadow = {-20, -20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 176, .offset = {-22, -12}, .shadow = {-22, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-18, -5}, .shadow = {-18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 176, .offset = {-19, -2}, .shadow = {-19, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 175, .offset = {-18, 4}, .shadow = {-18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {-12, 5}, .shadow = {-12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 187, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 187, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 187, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 187, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 191, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 191, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 191, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 191, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 190, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 193, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 193, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 193, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 193, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 197, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 197, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 197, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 197, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 197, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 197, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 196, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 199, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 199, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 199, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 199, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 199, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 199, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sClefableAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 201, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 201, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 201, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 201, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 201, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 201, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 200, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sClefableGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_1.4bpp.lz");
static const ax_sprite sClefableSprites1[] = {
	{sClefableGfx1, ARRAY_COUNT(sClefableGfx1)}, 
	{NULL, 0}
};
static const u8 sClefableGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_2.4bpp.lz");
static const ax_sprite sClefableSprites2[] = {
	{sClefableGfx2, ARRAY_COUNT(sClefableGfx2)}, 
	{NULL, 0}
};
static const u8 sClefableGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_3.4bpp.lz");
static const ax_sprite sClefableSprites3[] = {
	{sClefableGfx3, ARRAY_COUNT(sClefableGfx3)}, 
	{NULL, 0}
};
static const u8 sClefableGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_4.4bpp.lz");
static const ax_sprite sClefableSprites4[] = {
	{sClefableGfx4, ARRAY_COUNT(sClefableGfx4)}, 
	{NULL, 0}
};
static const u8 sClefableGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_5.4bpp.lz");
static const ax_sprite sClefableSprites5[] = {
	{sClefableGfx5, ARRAY_COUNT(sClefableGfx5)}, 
	{NULL, 0}
};
static const u8 sClefableGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_6.4bpp.lz");
static const ax_sprite sClefableSprites6[] = {
	{sClefableGfx6, ARRAY_COUNT(sClefableGfx6)}, 
	{NULL, 0}
};
static const u8 sClefableGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_7.4bpp.lz");
static const ax_sprite sClefableSprites7[] = {
	{sClefableGfx7, ARRAY_COUNT(sClefableGfx7)}, 
	{NULL, 0}
};
static const u8 sClefableGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_8.4bpp.lz");
static const ax_sprite sClefableSprites8[] = {
	{sClefableGfx8, ARRAY_COUNT(sClefableGfx8)}, 
	{NULL, 0}
};
static const u8 sClefableGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_9.4bpp.lz");
static const ax_sprite sClefableSprites9[] = {
	{sClefableGfx9, ARRAY_COUNT(sClefableGfx9)}, 
	{NULL, 0}
};
static const u8 sClefableGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_10.4bpp.lz");
static const ax_sprite sClefableSprites10[] = {
	{sClefableGfx10, ARRAY_COUNT(sClefableGfx10)}, 
	{NULL, 0}
};
static const u8 sClefableGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_11.4bpp.lz");
static const ax_sprite sClefableSprites11[] = {
	{sClefableGfx11, ARRAY_COUNT(sClefableGfx11)}, 
	{NULL, 0}
};
static const u8 sClefableGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_12.4bpp.lz");
static const ax_sprite sClefableSprites12[] = {
	{sClefableGfx12, ARRAY_COUNT(sClefableGfx12)}, 
	{NULL, 0}
};
static const u8 sClefableGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_13.4bpp.lz");
static const ax_sprite sClefableSprites13[] = {
	{sClefableGfx13, ARRAY_COUNT(sClefableGfx13)}, 
	{NULL, 0}
};
static const u8 sClefableGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_14.4bpp.lz");
static const ax_sprite sClefableSprites14[] = {
	{sClefableGfx14, ARRAY_COUNT(sClefableGfx14)}, 
	{NULL, 0}
};
static const u8 sClefableGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_15.4bpp.lz");
static const ax_sprite sClefableSprites15[] = {
	{sClefableGfx15, ARRAY_COUNT(sClefableGfx15)}, 
	{NULL, 0}
};
static const u8 sClefableGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_16.4bpp.lz");
static const ax_sprite sClefableSprites16[] = {
	{sClefableGfx16, ARRAY_COUNT(sClefableGfx16)}, 
	{NULL, 0}
};
static const u8 sClefableGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_17.4bpp.lz");
static const ax_sprite sClefableSprites17[] = {
	{sClefableGfx17, ARRAY_COUNT(sClefableGfx17)}, 
	{NULL, 0}
};
static const u8 sClefableGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_18.4bpp.lz");
static const ax_sprite sClefableSprites18[] = {
	{sClefableGfx18, ARRAY_COUNT(sClefableGfx18)}, 
	{NULL, 0}
};
static const u8 sClefableGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_19.4bpp.lz");
static const u8 sClefableGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_19_1.4bpp.lz");
static const ax_sprite sClefableSprites19[] = {
	{sClefableGfx19, ARRAY_COUNT(sClefableGfx19)}, 
	{NULL, 32}, 
	{sClefableGfx19_1, ARRAY_COUNT(sClefableGfx19_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefableGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_20.4bpp.lz");
static const u8 sClefableGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_20_1.4bpp.lz");
static const u8 sClefableGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_20_2.4bpp.lz");
static const u8 sClefableGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_20_3.4bpp.lz");
static const ax_sprite sClefableSprites20[] = {
	{sClefableGfx20, ARRAY_COUNT(sClefableGfx20)}, 
	{NULL, 64}, 
	{sClefableGfx20_1, ARRAY_COUNT(sClefableGfx20_1)}, 
	{NULL, 32}, 
	{sClefableGfx20_2, ARRAY_COUNT(sClefableGfx20_2)}, 
	{NULL, 32}, 
	{sClefableGfx20_3, ARRAY_COUNT(sClefableGfx20_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sClefableGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_21.4bpp.lz");
static const u8 sClefableGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_21_1.4bpp.lz");
static const u8 sClefableGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_21_2.4bpp.lz");
static const u8 sClefableGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_21_3.4bpp.lz");
static const ax_sprite sClefableSprites21[] = {
	{sClefableGfx21, ARRAY_COUNT(sClefableGfx21)}, 
	{NULL, 64}, 
	{sClefableGfx21_1, ARRAY_COUNT(sClefableGfx21_1)}, 
	{NULL, 32}, 
	{sClefableGfx21_2, ARRAY_COUNT(sClefableGfx21_2)}, 
	{NULL, 32}, 
	{sClefableGfx21_3, ARRAY_COUNT(sClefableGfx21_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sClefableGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_22.4bpp.lz");
static const u8 sClefableGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_22_1.4bpp.lz");
static const u8 sClefableGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_22_2.4bpp.lz");
static const ax_sprite sClefableSprites22[] = {
	{sClefableGfx22, ARRAY_COUNT(sClefableGfx22)}, 
	{NULL, 32}, 
	{sClefableGfx22_1, ARRAY_COUNT(sClefableGfx22_1)}, 
	{NULL, 32}, 
	{sClefableGfx22_2, ARRAY_COUNT(sClefableGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefableGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_23.4bpp.lz");
static const u8 sClefableGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_23_1.4bpp.lz");
static const u8 sClefableGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_23_2.4bpp.lz");
static const u8 sClefableGfx23_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_23_3.4bpp.lz");
static const ax_sprite sClefableSprites23[] = {
	{sClefableGfx23, ARRAY_COUNT(sClefableGfx23)}, 
	{NULL, 32}, 
	{sClefableGfx23_1, ARRAY_COUNT(sClefableGfx23_1)}, 
	{NULL, 32}, 
	{sClefableGfx23_2, ARRAY_COUNT(sClefableGfx23_2)}, 
	{NULL, 64}, 
	{sClefableGfx23_3, ARRAY_COUNT(sClefableGfx23_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sClefableGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_24.4bpp.lz");
static const ax_sprite sClefableSprites24[] = {
	{sClefableGfx24, ARRAY_COUNT(sClefableGfx24)}, 
	{NULL, 0}
};
static const u8 sClefableGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_25.4bpp.lz");
static const ax_sprite sClefableSprites25[] = {
	{sClefableGfx25, ARRAY_COUNT(sClefableGfx25)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sClefableGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_26.4bpp.lz");
static const ax_sprite sClefableSprites26[] = {
	{sClefableGfx26, ARRAY_COUNT(sClefableGfx26)}, 
	{NULL, 0}
};
static const u8 sClefableGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_27.4bpp.lz");
static const ax_sprite sClefableSprites27[] = {
	{sClefableGfx27, ARRAY_COUNT(sClefableGfx27)}, 
	{NULL, 0}
};
static const u8 sClefableGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_28.4bpp.lz");
static const ax_sprite sClefableSprites28[] = {
	{sClefableGfx28, ARRAY_COUNT(sClefableGfx28)}, 
	{NULL, 0}
};
static const u8 sClefableGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_29.4bpp.lz");
static const ax_sprite sClefableSprites29[] = {
	{sClefableGfx29, ARRAY_COUNT(sClefableGfx29)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sClefableGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_30.4bpp.lz");
static const ax_sprite sClefableSprites30[] = {
	{sClefableGfx30, ARRAY_COUNT(sClefableGfx30)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sClefableGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_31.4bpp.lz");
static const u8 sClefableGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_31_1.4bpp.lz");
static const u8 sClefableGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_31_2.4bpp.lz");
static const u8 sClefableGfx31_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_31_3.4bpp.lz");
static const ax_sprite sClefableSprites31[] = {
	{sClefableGfx31, ARRAY_COUNT(sClefableGfx31)}, 
	{NULL, 64}, 
	{sClefableGfx31_1, ARRAY_COUNT(sClefableGfx31_1)}, 
	{NULL, 32}, 
	{sClefableGfx31_2, ARRAY_COUNT(sClefableGfx31_2)}, 
	{NULL, 32}, 
	{sClefableGfx31_3, ARRAY_COUNT(sClefableGfx31_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sClefableGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_32.4bpp.lz");
static const u8 sClefableGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_32_1.4bpp.lz");
static const u8 sClefableGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_32_2.4bpp.lz");
static const u8 sClefableGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_32_3.4bpp.lz");
static const ax_sprite sClefableSprites32[] = {
	{sClefableGfx32, ARRAY_COUNT(sClefableGfx32)}, 
	{NULL, 32}, 
	{sClefableGfx32_1, ARRAY_COUNT(sClefableGfx32_1)}, 
	{NULL, 32}, 
	{sClefableGfx32_2, ARRAY_COUNT(sClefableGfx32_2)}, 
	{NULL, 32}, 
	{sClefableGfx32_3, ARRAY_COUNT(sClefableGfx32_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sClefableGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_33.4bpp.lz");
static const u8 sClefableGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_33_1.4bpp.lz");
static const u8 sClefableGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_33_2.4bpp.lz");
static const u8 sClefableGfx33_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_33_3.4bpp.lz");
static const ax_sprite sClefableSprites33[] = {
	{sClefableGfx33, ARRAY_COUNT(sClefableGfx33)}, 
	{NULL, 32}, 
	{sClefableGfx33_1, ARRAY_COUNT(sClefableGfx33_1)}, 
	{NULL, 32}, 
	{sClefableGfx33_2, ARRAY_COUNT(sClefableGfx33_2)}, 
	{NULL, 32}, 
	{sClefableGfx33_3, ARRAY_COUNT(sClefableGfx33_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sClefableGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_34.4bpp.lz");
static const u8 sClefableGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_34_1.4bpp.lz");
static const u8 sClefableGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_34_2.4bpp.lz");
static const u8 sClefableGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_34_3.4bpp.lz");
static const ax_sprite sClefableSprites34[] = {
	{NULL, 32}, 
	{sClefableGfx34, ARRAY_COUNT(sClefableGfx34)}, 
	{NULL, 32}, 
	{sClefableGfx34_1, ARRAY_COUNT(sClefableGfx34_1)}, 
	{NULL, 32}, 
	{sClefableGfx34_2, ARRAY_COUNT(sClefableGfx34_2)}, 
	{NULL, 32}, 
	{sClefableGfx34_3, ARRAY_COUNT(sClefableGfx34_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sClefableGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_35.4bpp.lz");
static const u8 sClefableGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_35_1.4bpp.lz");
static const u8 sClefableGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_35_2.4bpp.lz");
static const u8 sClefableGfx35_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_35_3.4bpp.lz");
static const ax_sprite sClefableSprites35[] = {
	{sClefableGfx35, ARRAY_COUNT(sClefableGfx35)}, 
	{NULL, 32}, 
	{sClefableGfx35_1, ARRAY_COUNT(sClefableGfx35_1)}, 
	{NULL, 32}, 
	{sClefableGfx35_2, ARRAY_COUNT(sClefableGfx35_2)}, 
	{NULL, 64}, 
	{sClefableGfx35_3, ARRAY_COUNT(sClefableGfx35_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sClefableGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_36.4bpp.lz");
static const u8 sClefableGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_36_1.4bpp.lz");
static const u8 sClefableGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_36_2.4bpp.lz");
static const ax_sprite sClefableSprites36[] = {
	{sClefableGfx36, ARRAY_COUNT(sClefableGfx36)}, 
	{NULL, 32}, 
	{sClefableGfx36_1, ARRAY_COUNT(sClefableGfx36_1)}, 
	{NULL, 32}, 
	{sClefableGfx36_2, ARRAY_COUNT(sClefableGfx36_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefableGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_37.4bpp.lz");
static const u8 sClefableGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_37_1.4bpp.lz");
static const u8 sClefableGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_37_2.4bpp.lz");
static const ax_sprite sClefableSprites37[] = {
	{sClefableGfx37, ARRAY_COUNT(sClefableGfx37)}, 
	{NULL, 32}, 
	{sClefableGfx37_1, ARRAY_COUNT(sClefableGfx37_1)}, 
	{NULL, 32}, 
	{sClefableGfx37_2, ARRAY_COUNT(sClefableGfx37_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefableGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_38.4bpp.lz");
static const u8 sClefableGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_38_1.4bpp.lz");
static const u8 sClefableGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_38_2.4bpp.lz");
static const ax_sprite sClefableSprites38[] = {
	{sClefableGfx38, ARRAY_COUNT(sClefableGfx38)}, 
	{NULL, 32}, 
	{sClefableGfx38_1, ARRAY_COUNT(sClefableGfx38_1)}, 
	{NULL, 32}, 
	{sClefableGfx38_2, ARRAY_COUNT(sClefableGfx38_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefableGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_39.4bpp.lz");
static const ax_sprite sClefableSprites39[] = {
	{sClefableGfx39, ARRAY_COUNT(sClefableGfx39)}, 
	{NULL, 0}
};
static const u8 sClefableGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_40.4bpp.lz");
static const ax_sprite sClefableSprites40[] = {
	{sClefableGfx40, ARRAY_COUNT(sClefableGfx40)}, 
	{NULL, 0}
};
static const u8 sClefableGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_41.4bpp.lz");
static const ax_sprite sClefableSprites41[] = {
	{sClefableGfx41, ARRAY_COUNT(sClefableGfx41)}, 
	{NULL, 0}
};
static const u8 sClefableGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_42.4bpp.lz");
static const ax_sprite sClefableSprites42[] = {
	{sClefableGfx42, ARRAY_COUNT(sClefableGfx42)}, 
	{NULL, 0}
};
static const u8 sClefableGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_43.4bpp.lz");
static const ax_sprite sClefableSprites43[] = {
	{sClefableGfx43, ARRAY_COUNT(sClefableGfx43)}, 
	{NULL, 0}
};
static const u8 sClefableGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_44.4bpp.lz");
static const ax_sprite sClefableSprites44[] = {
	{sClefableGfx44, ARRAY_COUNT(sClefableGfx44)}, 
	{NULL, 0}
};
static const u8 sClefableGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefable/sprite_45.4bpp.lz");
static const ax_sprite sClefableSprites45[] = {
	{sClefableGfx45, ARRAY_COUNT(sClefableGfx45)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesClefable[] = {
	sClefablePose1,
	sClefablePose2,
	sClefablePose3,
	sClefablePose4,
	sClefablePose5,
	sClefablePose6,
	sClefablePose7,
	sClefablePose8,
	sClefablePose9,
	sClefablePose10,
	sClefablePose11,
	sClefablePose12,
	sClefablePose13,
	sClefablePose14,
	sClefablePose15,
	sClefablePose16,
	sClefablePose17,
	sClefablePose18,
	sClefablePose19,
	sClefablePose20,
	sClefablePose21,
	sClefablePose22,
	sClefablePose23,
	sClefablePose24,
	sClefablePose1,
	sClefablePose2,
	sClefablePose3,
	sClefablePose28,
	sClefablePose4,
	sClefablePose5,
	sClefablePose6,
	sClefablePose32,
	sClefablePose7,
	sClefablePose8,
	sClefablePose9,
	sClefablePose36,
	sClefablePose10,
	sClefablePose11,
	sClefablePose12,
	sClefablePose40,
	sClefablePose13,
	sClefablePose14,
	sClefablePose15,
	sClefablePose44,
	sClefablePose16,
	sClefablePose17,
	sClefablePose18,
	sClefablePose48,
	sClefablePose19,
	sClefablePose20,
	sClefablePose21,
	sClefablePose52,
	sClefablePose22,
	sClefablePose23,
	sClefablePose24,
	sClefablePose56,
	sClefablePose1,
	sClefablePose2,
	sClefablePose3,
	sClefablePose28,
	sClefablePose4,
	sClefablePose5,
	sClefablePose6,
	sClefablePose32,
	sClefablePose7,
	sClefablePose8,
	sClefablePose9,
	sClefablePose36,
	sClefablePose10,
	sClefablePose11,
	sClefablePose12,
	sClefablePose40,
	sClefablePose13,
	sClefablePose14,
	sClefablePose15,
	sClefablePose44,
	sClefablePose16,
	sClefablePose17,
	sClefablePose18,
	sClefablePose48,
	sClefablePose19,
	sClefablePose20,
	sClefablePose21,
	sClefablePose52,
	sClefablePose22,
	sClefablePose23,
	sClefablePose24,
	sClefablePose56,
	sClefablePose1,
	sClefablePose90,
	sClefablePose28,
	sClefablePose4,
	sClefablePose93,
	sClefablePose32,
	sClefablePose7,
	sClefablePose96,
	sClefablePose36,
	sClefablePose10,
	sClefablePose99,
	sClefablePose40,
	sClefablePose13,
	sClefablePose102,
	sClefablePose44,
	sClefablePose16,
	sClefablePose105,
	sClefablePose48,
	sClefablePose19,
	sClefablePose108,
	sClefablePose52,
	sClefablePose22,
	sClefablePose111,
	sClefablePose56,
	sClefablePose28,
	sClefablePose114,
	sClefablePose115,
	sClefablePose32,
	sClefablePose117,
	sClefablePose118,
	sClefablePose36,
	sClefablePose120,
	sClefablePose121,
	sClefablePose40,
	sClefablePose123,
	sClefablePose124,
	sClefablePose44,
	sClefablePose126,
	sClefablePose127,
	sClefablePose48,
	sClefablePose129,
	sClefablePose130,
	sClefablePose52,
	sClefablePose132,
	sClefablePose133,
	sClefablePose56,
	sClefablePose135,
	sClefablePose136,
	sClefablePose137,
	sClefablePose138,
	sClefablePose139,
	sClefablePose140,
	sClefablePose141,
	sClefablePose142,
	sClefablePose143,
	sClefablePose144,
	sClefablePose145,
	sClefablePose146,
	sClefablePose1,
	sClefablePose2,
	sClefablePose3,
	sClefablePose4,
	sClefablePose5,
	sClefablePose6,
	sClefablePose7,
	sClefablePose8,
	sClefablePose9,
	sClefablePose10,
	sClefablePose11,
	sClefablePose12,
	sClefablePose13,
	sClefablePose14,
	sClefablePose15,
	sClefablePose16,
	sClefablePose17,
	sClefablePose18,
	sClefablePose19,
	sClefablePose20,
	sClefablePose21,
	sClefablePose22,
	sClefablePose23,
	sClefablePose24,
	sClefablePose28,
	sClefablePose56,
	sClefablePose52,
	sClefablePose48,
	sClefablePose44,
	sClefablePose40,
	sClefablePose36,
	sClefablePose32,
	sClefablePose28,
	sClefablePose32,
	sClefablePose36,
	sClefablePose40,
	sClefablePose44,
	sClefablePose48,
	sClefablePose52,
	sClefablePose56,
	sClefablePose1,
	sClefablePose28,
	sClefablePose4,
	sClefablePose32,
	sClefablePose7,
	sClefablePose36,
	sClefablePose10,
	sClefablePose40,
	sClefablePose13,
	sClefablePose44,
	sClefablePose16,
	sClefablePose48,
	sClefablePose19,
	sClefablePose52,
	sClefablePose22,
	sClefablePose56,
	sClefablePose28,
	sClefablePose32,
	sClefablePose36,
	sClefablePose40,
	sClefablePose44,
	sClefablePose48,
	sClefablePose52,
	sClefablePose56,
	sClefablePose1,
	sClefablePose22,
	sClefablePose19,
	sClefablePose16,
	sClefablePose13,
	sClefablePose10,
	sClefablePose7,
	sClefablePose4,
};

static const struct PositionSets sAxPositionsClefable[] = {
	[0] = { .set = { {-1, -7}, {-10, -8}, {9, -8}, {-1, -6} } },
	[1] = { .set = { {1, -9}, {-9, -14}, {10, -7}, {1, -10} } },
	[2] = { .set = { {-2, -9}, {-11, -7}, {8, -14}, {-2, -10} } },
	[3] = { .set = { {2, -7}, {8, -10}, {-7, -6}, {-1, -8} } },
	[4] = { .set = { {1, -10}, {8, -15}, {-7, -8}, {-1, -10} } },
	[5] = { .set = { {2, -9}, {8, -9}, {-8, -11}, {-1, -11} } },
	[6] = { .set = { {5, -9}, {1, -6}, {-1, -5}, {0, -8} } },
	[7] = { .set = { {5, -8}, {2, -8}, {-1, -4}, {0, -9} } },
	[8] = { .set = { {4, -13}, {-2, -8}, {0, -10}, {0, -11} } },
	[9] = { .set = { {3, -9}, {9, -5}, {-4, -9}, {1, -9} } },
	[10] = { .set = { {5, -8}, {9, -3}, {-2, -10}, {2, -9} } },
	[11] = { .set = { {-1, -12}, {8, -11}, {-7, -10}, {-2, -12} } },
	[12] = { .set = { {-1, -10}, {8, -7}, {-9, -7}, {-1, -9} } },
	[13] = { .set = { {-2, -13}, {9, -10}, {-8, -5}, {-1, -11} } },
	[14] = { .set = { {1, -13}, {7, -5}, {-10, -10}, {0, -11} } },
	[15] = { .set = { {-4, -11}, {5, -8}, {-10, -5}, {-2, -10} } },
	[16] = { .set = { {-5, -9}, {1, -11}, {-10, -3}, {-2, -11} } },
	[17] = { .set = { {-1, -13}, {6, -9}, {-9, -12}, {1, -12} } },
	[18] = { .set = { {-6, -9}, {-2, -6}, {0, -5}, {-1, -8} } },
	[19] = { .set = { {-6, -8}, {-3, -8}, {0, -4}, {-1, -9} } },
	[20] = { .set = { {-5, -13}, {1, -8}, {-1, -10}, {-1, -11} } },
	[21] = { .set = { {-3, -7}, {-9, -10}, {6, -6}, {0, -8} } },
	[22] = { .set = { {-2, -10}, {-9, -15}, {6, -8}, {0, -10} } },
	[23] = { .set = { {-3, -9}, {-9, -9}, {7, -11}, {0, -11} } },
	[24] = { .set = { {-1, -7}, {-10, -8}, {9, -8}, {-1, -6} } },
	[25] = { .set = { {1, -9}, {-9, -14}, {10, -7}, {1, -10} } },
	[26] = { .set = { {-2, -9}, {-11, -7}, {8, -14}, {-2, -10} } },
	[27] = { .set = { {-1, -7}, {-10, -11}, {9, -11}, {-1, -8} } },
	[28] = { .set = { {2, -7}, {8, -10}, {-7, -6}, {-1, -8} } },
	[29] = { .set = { {1, -10}, {8, -15}, {-7, -8}, {-1, -10} } },
	[30] = { .set = { {2, -9}, {8, -9}, {-8, -11}, {-1, -11} } },
	[31] = { .set = { {2, -7}, {8, -15}, {-4, -10}, {-1, -8} } },
	[32] = { .set = { {5, -9}, {1, -6}, {-1, -5}, {0, -8} } },
	[33] = { .set = { {5, -8}, {2, -8}, {-1, -4}, {0, -9} } },
	[34] = { .set = { {4, -13}, {-2, -8}, {0, -10}, {0, -11} } },
	[35] = { .set = { {5, -9}, {2, -14}, {0, -12}, {0, -8} } },
	[36] = { .set = { {3, -9}, {9, -5}, {-4, -9}, {1, -9} } },
	[37] = { .set = { {5, -8}, {9, -3}, {-2, -10}, {2, -9} } },
	[38] = { .set = { {-1, -12}, {8, -11}, {-7, -10}, {-2, -12} } },
	[39] = { .set = { {3, -10}, {-6, -16}, {9, -12}, {0, -9} } },
	[40] = { .set = { {-1, -10}, {8, -7}, {-9, -7}, {-1, -9} } },
	[41] = { .set = { {-2, -13}, {9, -10}, {-8, -5}, {-1, -11} } },
	[42] = { .set = { {1, -13}, {7, -5}, {-10, -10}, {0, -11} } },
	[43] = { .set = { {-1, -11}, {7, -14}, {-8, -14}, {-1, -9} } },
	[44] = { .set = { {-4, -11}, {5, -8}, {-10, -5}, {-2, -10} } },
	[45] = { .set = { {-5, -9}, {1, -11}, {-10, -3}, {-2, -11} } },
	[46] = { .set = { {-1, -13}, {6, -9}, {-9, -12}, {1, -12} } },
	[47] = { .set = { {-4, -10}, {5, -16}, {-10, -12}, {-1, -9} } },
	[48] = { .set = { {-6, -9}, {-2, -6}, {0, -5}, {-1, -8} } },
	[49] = { .set = { {-6, -8}, {-3, -8}, {0, -4}, {-1, -9} } },
	[50] = { .set = { {-5, -13}, {1, -8}, {-1, -10}, {-1, -11} } },
	[51] = { .set = { {-6, -9}, {-3, -14}, {-1, -12}, {-1, -8} } },
	[52] = { .set = { {-3, -7}, {-9, -10}, {6, -6}, {0, -8} } },
	[53] = { .set = { {-2, -10}, {-9, -15}, {6, -8}, {0, -10} } },
	[54] = { .set = { {-3, -9}, {-9, -9}, {7, -11}, {0, -11} } },
	[55] = { .set = { {-3, -7}, {-9, -15}, {3, -10}, {0, -8} } },
	[56] = { .set = { {-1, -7}, {-10, -8}, {9, -8}, {-1, -6} } },
	[57] = { .set = { {1, -9}, {-9, -14}, {10, -7}, {1, -10} } },
	[58] = { .set = { {-2, -9}, {-11, -7}, {8, -14}, {-2, -10} } },
	[59] = { .set = { {-1, -7}, {-10, -11}, {9, -11}, {-1, -8} } },
	[60] = { .set = { {2, -7}, {8, -10}, {-7, -6}, {-1, -8} } },
	[61] = { .set = { {1, -10}, {8, -15}, {-7, -8}, {-1, -10} } },
	[62] = { .set = { {2, -9}, {8, -9}, {-8, -11}, {-1, -11} } },
	[63] = { .set = { {2, -7}, {8, -15}, {-4, -10}, {-1, -8} } },
	[64] = { .set = { {5, -9}, {1, -6}, {-1, -5}, {0, -8} } },
	[65] = { .set = { {5, -8}, {2, -8}, {-1, -4}, {0, -9} } },
	[66] = { .set = { {4, -13}, {-2, -8}, {0, -10}, {0, -11} } },
	[67] = { .set = { {5, -9}, {2, -14}, {0, -12}, {0, -8} } },
	[68] = { .set = { {3, -9}, {9, -5}, {-4, -9}, {1, -9} } },
	[69] = { .set = { {5, -8}, {9, -3}, {-2, -10}, {2, -9} } },
	[70] = { .set = { {-1, -12}, {8, -11}, {-7, -10}, {-2, -12} } },
	[71] = { .set = { {3, -10}, {-6, -16}, {9, -12}, {0, -9} } },
	[72] = { .set = { {-1, -10}, {8, -7}, {-9, -7}, {-1, -9} } },
	[73] = { .set = { {-2, -13}, {9, -10}, {-8, -5}, {-1, -11} } },
	[74] = { .set = { {1, -13}, {7, -5}, {-10, -10}, {0, -11} } },
	[75] = { .set = { {-1, -11}, {7, -14}, {-8, -14}, {-1, -9} } },
	[76] = { .set = { {-4, -11}, {5, -8}, {-10, -5}, {-2, -10} } },
	[77] = { .set = { {-5, -9}, {1, -11}, {-10, -3}, {-2, -11} } },
	[78] = { .set = { {-1, -13}, {6, -9}, {-9, -12}, {1, -12} } },
	[79] = { .set = { {-4, -10}, {5, -16}, {-10, -12}, {-1, -9} } },
	[80] = { .set = { {-6, -9}, {-2, -6}, {0, -5}, {-1, -8} } },
	[81] = { .set = { {-6, -8}, {-3, -8}, {0, -4}, {-1, -9} } },
	[82] = { .set = { {-5, -13}, {1, -8}, {-1, -10}, {-1, -11} } },
	[83] = { .set = { {-6, -9}, {-3, -14}, {-1, -12}, {-1, -8} } },
	[84] = { .set = { {-3, -7}, {-9, -10}, {6, -6}, {0, -8} } },
	[85] = { .set = { {-2, -10}, {-9, -15}, {6, -8}, {0, -10} } },
	[86] = { .set = { {-3, -9}, {-9, -9}, {7, -11}, {0, -11} } },
	[87] = { .set = { {-3, -7}, {-9, -15}, {3, -10}, {0, -8} } },
	[88] = { .set = { {-1, -7}, {-10, -8}, {9, -8}, {-1, -6} } },
	[89] = { .set = { {-1, -4}, {-7, -5}, {6, -5}, {-1, -5} } },
	[90] = { .set = { {-1, -7}, {-10, -11}, {9, -11}, {-1, -8} } },
	[91] = { .set = { {2, -7}, {8, -10}, {-7, -6}, {-1, -8} } },
	[92] = { .set = { {2, -4}, {4, -6}, {-4, -3}, {0, -5} } },
	[93] = { .set = { {2, -7}, {8, -15}, {-4, -10}, {-1, -8} } },
	[94] = { .set = { {5, -9}, {1, -6}, {-1, -5}, {0, -8} } },
	[95] = { .set = { {4, -4}, {1, -3}, {0, -2}, {0, -4} } },
	[96] = { .set = { {5, -9}, {2, -14}, {0, -12}, {0, -8} } },
	[97] = { .set = { {3, -9}, {9, -5}, {-4, -9}, {1, -9} } },
	[98] = { .set = { {2, -6}, {-5, -6}, {6, -3}, {0, -6} } },
	[99] = { .set = { {3, -10}, {-6, -16}, {9, -12}, {0, -9} } },
	[100] = { .set = { {-1, -10}, {8, -7}, {-9, -7}, {-1, -9} } },
	[101] = { .set = { {-1, -7}, {4, -4}, {-6, -4}, {-1, -5} } },
	[102] = { .set = { {-1, -11}, {7, -14}, {-8, -14}, {-1, -9} } },
	[103] = { .set = { {-4, -11}, {5, -8}, {-10, -5}, {-2, -10} } },
	[104] = { .set = { {-3, -6}, {4, -6}, {-7, -3}, {-1, -6} } },
	[105] = { .set = { {-4, -10}, {5, -16}, {-10, -12}, {-1, -9} } },
	[106] = { .set = { {-6, -9}, {-2, -6}, {0, -5}, {-1, -8} } },
	[107] = { .set = { {-5, -4}, {-2, -3}, {-1, -2}, {-1, -4} } },
	[108] = { .set = { {-6, -9}, {-3, -14}, {-1, -12}, {-1, -8} } },
	[109] = { .set = { {-3, -7}, {-9, -10}, {6, -6}, {0, -8} } },
	[110] = { .set = { {-3, -4}, {-5, -6}, {3, -3}, {-1, -5} } },
	[111] = { .set = { {-3, -7}, {-9, -15}, {3, -10}, {0, -8} } },
	[112] = { .set = { {-1, -7}, {-10, -11}, {9, -11}, {-1, -8} } },
	[113] = { .set = { {-3, -7}, {-11, -10}, {3, -10}, {-3, -8} } },
	[114] = { .set = { {2, -7}, {-4, -10}, {10, -10}, {2, -8} } },
	[115] = { .set = { {2, -7}, {8, -15}, {-4, -10}, {-1, -8} } },
	[116] = { .set = { {3, -7}, {8, -12}, {-2, -11}, {-1, -7} } },
	[117] = { .set = { {1, -7}, {7, -13}, {-6, -7}, {-2, -8} } },
	[118] = { .set = { {5, -9}, {2, -14}, {0, -12}, {0, -8} } },
	[119] = { .set = { {5, -10}, {1, -12}, {2, -14}, {-1, -8} } },
	[120] = { .set = { {5, -8}, {7, -13}, {1, -8}, {-2, -8} } },
	[121] = { .set = { {3, -10}, {-6, -16}, {9, -12}, {0, -9} } },
	[122] = { .set = { {1, -11}, {-7, -15}, {7, -14}, {0, -10} } },
	[123] = { .set = { {3, -10}, {-2, -13}, {10, -9}, {0, -9} } },
	[124] = { .set = { {-1, -11}, {7, -14}, {-8, -14}, {-1, -9} } },
	[125] = { .set = { {1, -12}, {8, -15}, {-4, -17}, {-1, -10} } },
	[126] = { .set = { {-2, -11}, {3, -17}, {-9, -15}, {0, -9} } },
	[127] = { .set = { {-4, -10}, {5, -16}, {-10, -12}, {-1, -9} } },
	[128] = { .set = { {-2, -11}, {6, -15}, {-8, -14}, {-1, -10} } },
	[129] = { .set = { {-4, -10}, {1, -13}, {-11, -9}, {-1, -9} } },
	[130] = { .set = { {-6, -9}, {-3, -14}, {-1, -12}, {-1, -8} } },
	[131] = { .set = { {-6, -10}, {-2, -12}, {-3, -14}, {0, -8} } },
	[132] = { .set = { {-6, -8}, {-8, -13}, {-2, -8}, {1, -8} } },
	[133] = { .set = { {-3, -7}, {-9, -15}, {3, -10}, {0, -8} } },
	[134] = { .set = { {-4, -7}, {-9, -12}, {1, -11}, {0, -7} } },
	[135] = { .set = { {-2, -7}, {-8, -13}, {5, -7}, {1, -8} } },
	[136] = { .set = { {-2, -6}, {-8, -4}, {6, -3}, {0, -8} } },
	[137] = { .set = { {-2, -4}, {-8, -4}, {6, -1}, {0, -7} } },
	[138] = { .set = { {-1, -6}, {-10, -9}, {9, -9}, {-1, -5} } },
	[139] = { .set = { {0, -6}, {4, -13}, {-9, -7}, {-3, -6} } },
	[140] = { .set = { {1, -7}, {-4, -14}, {-5, -11}, {-3, -7} } },
	[141] = { .set = { {1, -7}, {-7, -11}, {5, -9}, {-2, -7} } },
	[142] = { .set = { {0, -7}, {8, -8}, {-8, -8}, {0, -5} } },
	[143] = { .set = { {-2, -7}, {6, -11}, {-6, -9}, {1, -7} } },
	[144] = { .set = { {-2, -7}, {3, -14}, {4, -11}, {2, -7} } },
	[145] = { .set = { {-1, -6}, {-5, -13}, {8, -7}, {2, -6} } },
	[146] = { .set = { {-1, -7}, {-10, -8}, {9, -8}, {-1, -6} } },
	[147] = { .set = { {1, -9}, {-9, -14}, {10, -7}, {1, -10} } },
	[148] = { .set = { {-2, -9}, {-11, -7}, {8, -14}, {-2, -10} } },
	[149] = { .set = { {2, -7}, {8, -10}, {-7, -6}, {-1, -8} } },
	[150] = { .set = { {1, -10}, {8, -15}, {-7, -8}, {-1, -10} } },
	[151] = { .set = { {2, -9}, {8, -9}, {-8, -11}, {-1, -11} } },
	[152] = { .set = { {5, -9}, {1, -6}, {-1, -5}, {0, -8} } },
	[153] = { .set = { {5, -8}, {2, -8}, {-1, -4}, {0, -9} } },
	[154] = { .set = { {4, -13}, {-2, -8}, {0, -10}, {0, -11} } },
	[155] = { .set = { {3, -9}, {9, -5}, {-4, -9}, {1, -9} } },
	[156] = { .set = { {5, -8}, {9, -3}, {-2, -10}, {2, -9} } },
	[157] = { .set = { {-1, -12}, {8, -11}, {-7, -10}, {-2, -12} } },
	[158] = { .set = { {-1, -10}, {8, -7}, {-9, -7}, {-1, -9} } },
	[159] = { .set = { {-2, -13}, {9, -10}, {-8, -5}, {-1, -11} } },
	[160] = { .set = { {1, -13}, {7, -5}, {-10, -10}, {0, -11} } },
	[161] = { .set = { {-4, -11}, {5, -8}, {-10, -5}, {-2, -10} } },
	[162] = { .set = { {-5, -9}, {1, -11}, {-10, -3}, {-2, -11} } },
	[163] = { .set = { {-1, -13}, {6, -9}, {-9, -12}, {1, -12} } },
	[164] = { .set = { {-6, -9}, {-2, -6}, {0, -5}, {-1, -8} } },
	[165] = { .set = { {-6, -8}, {-3, -8}, {0, -4}, {-1, -9} } },
	[166] = { .set = { {-5, -13}, {1, -8}, {-1, -10}, {-1, -11} } },
	[167] = { .set = { {-3, -7}, {-9, -10}, {6, -6}, {0, -8} } },
	[168] = { .set = { {-2, -10}, {-9, -15}, {6, -8}, {0, -10} } },
	[169] = { .set = { {-3, -9}, {-9, -9}, {7, -11}, {0, -11} } },
	[170] = { .set = { {-1, -7}, {-10, -11}, {9, -11}, {-1, -8} } },
	[171] = { .set = { {-3, -7}, {-9, -15}, {3, -10}, {0, -8} } },
	[172] = { .set = { {-6, -9}, {-3, -14}, {-1, -12}, {-1, -8} } },
	[173] = { .set = { {-4, -10}, {5, -16}, {-10, -12}, {-1, -9} } },
	[174] = { .set = { {-1, -11}, {7, -14}, {-8, -14}, {-1, -9} } },
	[175] = { .set = { {3, -10}, {-6, -16}, {9, -12}, {0, -9} } },
	[176] = { .set = { {5, -9}, {2, -14}, {0, -12}, {0, -8} } },
	[177] = { .set = { {2, -7}, {8, -15}, {-4, -10}, {-1, -8} } },
	[178] = { .set = { {-1, -7}, {-10, -11}, {9, -11}, {-1, -8} } },
	[179] = { .set = { {2, -7}, {8, -15}, {-4, -10}, {-1, -8} } },
	[180] = { .set = { {5, -9}, {2, -14}, {0, -12}, {0, -8} } },
	[181] = { .set = { {3, -10}, {-6, -16}, {9, -12}, {0, -9} } },
	[182] = { .set = { {-1, -11}, {7, -14}, {-8, -14}, {-1, -9} } },
	[183] = { .set = { {-4, -10}, {5, -16}, {-10, -12}, {-1, -9} } },
	[184] = { .set = { {-6, -9}, {-3, -14}, {-1, -12}, {-1, -8} } },
	[185] = { .set = { {-3, -7}, {-9, -15}, {3, -10}, {0, -8} } },
	[186] = { .set = { {-1, -7}, {-10, -8}, {9, -8}, {-1, -6} } },
	[187] = { .set = { {-1, -7}, {-10, -11}, {9, -11}, {-1, -8} } },
	[188] = { .set = { {2, -7}, {8, -10}, {-7, -6}, {-1, -8} } },
	[189] = { .set = { {2, -7}, {8, -15}, {-4, -10}, {-1, -8} } },
	[190] = { .set = { {5, -9}, {1, -6}, {-1, -5}, {0, -8} } },
	[191] = { .set = { {5, -9}, {2, -14}, {0, -12}, {0, -8} } },
	[192] = { .set = { {3, -9}, {9, -5}, {-4, -9}, {1, -9} } },
	[193] = { .set = { {3, -10}, {-6, -16}, {9, -12}, {0, -9} } },
	[194] = { .set = { {-1, -10}, {8, -7}, {-9, -7}, {-1, -9} } },
	[195] = { .set = { {-1, -11}, {7, -14}, {-8, -14}, {-1, -9} } },
	[196] = { .set = { {-4, -11}, {5, -8}, {-10, -5}, {-2, -10} } },
	[197] = { .set = { {-4, -10}, {5, -16}, {-10, -12}, {-1, -9} } },
	[198] = { .set = { {-6, -9}, {-2, -6}, {0, -5}, {-1, -8} } },
	[199] = { .set = { {-6, -9}, {-3, -14}, {-1, -12}, {-1, -8} } },
	[200] = { .set = { {-3, -7}, {-9, -10}, {6, -6}, {0, -8} } },
	[201] = { .set = { {-3, -7}, {-9, -15}, {3, -10}, {0, -8} } },
	[202] = { .set = { {-1, -7}, {-10, -11}, {9, -11}, {-1, -8} } },
	[203] = { .set = { {2, -7}, {8, -15}, {-4, -10}, {-1, -8} } },
	[204] = { .set = { {5, -9}, {2, -14}, {0, -12}, {0, -8} } },
	[205] = { .set = { {3, -10}, {-6, -16}, {9, -12}, {0, -9} } },
	[206] = { .set = { {-1, -11}, {7, -14}, {-8, -14}, {-1, -9} } },
	[207] = { .set = { {-4, -10}, {5, -16}, {-10, -12}, {-1, -9} } },
	[208] = { .set = { {-6, -9}, {-3, -14}, {-1, -12}, {-1, -8} } },
	[209] = { .set = { {-3, -7}, {-9, -15}, {3, -10}, {0, -8} } },
	[210] = { .set = { {-1, -7}, {-10, -8}, {9, -8}, {-1, -6} } },
	[211] = { .set = { {-3, -7}, {-9, -10}, {6, -6}, {0, -8} } },
	[212] = { .set = { {-6, -9}, {-2, -6}, {0, -5}, {-1, -8} } },
	[213] = { .set = { {-4, -11}, {5, -8}, {-10, -5}, {-2, -10} } },
	[214] = { .set = { {-1, -10}, {8, -7}, {-9, -7}, {-1, -9} } },
	[215] = { .set = { {3, -9}, {9, -5}, {-4, -9}, {1, -9} } },
	[216] = { .set = { {5, -9}, {1, -6}, {-1, -5}, {0, -8} } },
	[217] = { .set = { {2, -7}, {8, -10}, {-7, -6}, {-1, -8} } },
};

static const ax_anim *const sClefableAnimTable1[] = {
	sClefableAnims_1_1,
	sClefableAnims_1_2,
	sClefableAnims_1_3,
	sClefableAnims_1_4,
	sClefableAnims_1_5,
	sClefableAnims_1_6,
	sClefableAnims_1_7,
	sClefableAnims_1_8,
};

static const ax_anim *const sClefableAnimTable2[] = {
	gAxSharedAnim_01566,
	gAxSharedAnim_01759,
	sClefableAnims_2_3,
	sClefableAnims_2_4,
	gAxSharedAnim_01916,
	sClefableAnims_2_6,
	sClefableAnims_2_7,
	gAxSharedAnim_01990,
};

static const ax_anim *const sClefableAnimTable3[] = {
	gAxSharedAnim_02004,
	gAxSharedAnim_02022,
	sClefableAnims_3_3,
	sClefableAnims_3_4,
	gAxSharedAnim_02091,
	sClefableAnims_3_6,
	sClefableAnims_3_7,
	gAxSharedAnim_02184,
};

static const ax_anim *const sClefableAnimTable4[] = {
	sClefableAnims_4_1,
	sClefableAnims_4_2,
	sClefableAnims_4_3,
	sClefableAnims_4_4,
	sClefableAnims_4_5,
	sClefableAnims_4_6,
	sClefableAnims_4_7,
	sClefableAnims_4_8,
};

static const ax_anim *const sClefableAnimTable5[] = {
	sClefableAnims_5_1,
	sClefableAnims_5_2,
	sClefableAnims_5_3,
	sClefableAnims_5_4,
	sClefableAnims_5_5,
	sClefableAnims_5_6,
	sClefableAnims_5_7,
	sClefableAnims_5_8,
};

static const ax_anim *const sClefableAnimTable6[] = {
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
};

static const ax_anim *const sClefableAnimTable7[] = {
	gAxSharedAnim_00466,
	gAxSharedAnim_00479,
	gAxSharedAnim_00487,
	gAxSharedAnim_00496,
	gAxSharedAnim_00508,
	gAxSharedAnim_00517,
	gAxSharedAnim_00523,
	gAxSharedAnim_00529,
};

static const ax_anim *const sClefableAnimTable8[] = {
	sClefableAnims_8_1,
	sClefableAnims_8_2,
	sClefableAnims_8_3,
	sClefableAnims_8_4,
	sClefableAnims_8_5,
	sClefableAnims_8_6,
	sClefableAnims_8_7,
	sClefableAnims_8_8,
};

static const ax_anim *const sClefableAnimTable9[] = {
	gAxSharedAnim_00796,
	gAxSharedAnim_00886,
	sClefableAnims_9_3,
	sClefableAnims_9_4,
	sClefableAnims_9_5,
	sClefableAnims_9_6,
	sClefableAnims_9_7,
	gAxSharedAnim_00811,
};

static const ax_anim *const sClefableAnimTable10[] = {
	gAxSharedAnim_00905,
	gAxSharedAnim_00918,
	gAxSharedAnim_00930,
	gAxSharedAnim_00942,
	gAxSharedAnim_00955,
	gAxSharedAnim_00965,
	gAxSharedAnim_00978,
	gAxSharedAnim_00993,
};

static const ax_anim *const sClefableAnimTable11[] = {
	sClefableAnims_11_1,
	gAxSharedAnim_01043,
	sClefableAnims_11_3,
	sClefableAnims_11_4,
	gAxSharedAnim_01139,
	sClefableAnims_11_6,
	sClefableAnims_11_7,
	sClefableAnims_11_8,
};

static const ax_anim *const sClefableAnimTable12[] = {
	gAxSharedAnim_01243,
	gAxSharedAnim_01255,
	gAxSharedAnim_01260,
	gAxSharedAnim_01269,
	gAxSharedAnim_01291,
	gAxSharedAnim_01303,
	gAxSharedAnim_01308,
	gAxSharedAnim_01318,
};

static const ax_anim *const sClefableAnimTable13[] = {
	gAxSharedAnim_01335,
	gAxSharedAnim_01409,
	gAxSharedAnim_01397,
	gAxSharedAnim_01386,
	gAxSharedAnim_01374,
	gAxSharedAnim_01366,
	gAxSharedAnim_01358,
	gAxSharedAnim_01348,
};

static const ax_anim *const *const sAxAnimationsClefable[] = {
	sClefableAnimTable1,
	sClefableAnimTable2,
	sClefableAnimTable3,
	sClefableAnimTable4,
	sClefableAnimTable5,
	sClefableAnimTable6,
	sClefableAnimTable7,
	sClefableAnimTable8,
	sClefableAnimTable9,
	sClefableAnimTable10,
	sClefableAnimTable11,
	sClefableAnimTable12,
	sClefableAnimTable13,
};

static const ax_sprite *const sAxSpritesClefable[] = {
	sClefableSprites1,
	sClefableSprites2,
	sClefableSprites3,
	sClefableSprites4,
	sClefableSprites5,
	sClefableSprites6,
	sClefableSprites7,
	sClefableSprites8,
	sClefableSprites9,
	sClefableSprites10,
	sClefableSprites11,
	sClefableSprites12,
	sClefableSprites13,
	sClefableSprites14,
	sClefableSprites15,
	sClefableSprites16,
	sClefableSprites17,
	sClefableSprites18,
	sClefableSprites19,
	sClefableSprites20,
	sClefableSprites21,
	sClefableSprites22,
	sClefableSprites23,
	sClefableSprites24,
	sClefableSprites25,
	sClefableSprites26,
	sClefableSprites27,
	sClefableSprites28,
	sClefableSprites29,
	sClefableSprites30,
	sClefableSprites31,
	sClefableSprites32,
	sClefableSprites33,
	sClefableSprites34,
	sClefableSprites35,
	sClefableSprites36,
	sClefableSprites37,
	sClefableSprites38,
	sClefableSprites39,
	sClefableSprites40,
	sClefableSprites41,
	sClefableSprites42,
	sClefableSprites43,
	sClefableSprites44,
	sClefableSprites45,
};

static const axmain sAxMainClefable = {
	.poses = sAxPosesClefable,
	.animations = sAxAnimationsClefable,
	.animCount = ARRAY_COUNT(sAxAnimationsClefable),
	.spriteData = sAxSpritesClefable,
	.positions = sAxPositionsClefable,
};
