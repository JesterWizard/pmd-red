/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainCrobat;
const SiroArchive gAxCrobat = {"SIRO", &sAxMainCrobat};

static const ax_pose sCrobatPose1[] = {
	AX_POSE(0, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose2[] = {
	AX_POSE(1, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose3[] = {
	AX_POSE(2, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose4[] = {
	AX_POSE(3, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose5[] = {
	AX_POSE(4, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose6[] = {
	AX_POSE(5, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose7[] = {
	AX_POSE(6, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose8[] = {
	AX_POSE(7, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(230, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose9[] = {
	AX_POSE(8, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose10[] = {
	AX_POSE(9, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose11[] = {
	AX_POSE(10, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose12[] = {
	AX_POSE(11, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose13[] = {
	AX_POSE(12, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose14[] = {
	AX_POSE(13, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose15[] = {
	AX_POSE(14, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose16[] = {
	AX_POSE(9, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose17[] = {
	AX_POSE(10, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose18[] = {
	AX_POSE(11, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose19[] = {
	AX_POSE(6, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose20[] = {
	AX_POSE(7, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose21[] = {
	AX_POSE(8, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose22[] = {
	AX_POSE(3, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose23[] = {
	AX_POSE(4, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose24[] = {
	AX_POSE(5, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose76[] = {
	AX_POSE(15, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose77[] = {
	AX_POSE(16, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(17, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(1, 3, 7)),
	AX_POSE(18, OAM1(233, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 7)),
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 7)),
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(11, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose81[] = {
	AX_POSE(21, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose82[] = {
	AX_POSE(22, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose86[] = {
	AX_POSE(23, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose87[] = {
	AX_POSE(24, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(25, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose91[] = {
	AX_POSE(26, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose92[] = {
	AX_POSE(27, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose96[] = {
	AX_POSE(28, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose97[] = {
	AX_POSE(29, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(30, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(31, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(32, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose101[] = {
	AX_POSE(26, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose102[] = {
	AX_POSE(27, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose106[] = {
	AX_POSE(23, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose107[] = {
	AX_POSE(24, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(25, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(11, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose111[] = {
	AX_POSE(21, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose112[] = {
	AX_POSE(22, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose121[] = {
	AX_POSE(33, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose122[] = {
	AX_POSE(34, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose123[] = {
	AX_POSE(35, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose124[] = {
	AX_POSE(36, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose125[] = {
	AX_POSE(37, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose126[] = {
	AX_POSE(38, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose127[] = {
	AX_POSE(39, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose128[] = {
	AX_POSE(38, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose129[] = {
	AX_POSE(37, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose130[] = {
	AX_POSE(36, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose159[] = {
	AX_POSE(29, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(30, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(32, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose164[] = {
	AX_POSE(22, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose165[] = {
	AX_POSE(24, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(25, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose166[] = {
	AX_POSE(27, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose168[] = {
	AX_POSE(27, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose169[] = {
	AX_POSE(24, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(25, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose170[] = {
	AX_POSE(22, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose197[] = {
	AX_POSE(7, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose198[] = {
	AX_POSE(10, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose199[] = {
	AX_POSE(13, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose200[] = {
	AX_POSE(10, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrobatPose201[] = {
	AX_POSE(7, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_anim sCrobatAnims_1_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_1_2[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {-2, 1}, .shadow = {-2, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {-1, 3}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {-2, 1}, .shadow = {-2, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_1_3[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {-2, 1}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {-1, 2}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {-1, 2}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_1_4[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {-2, 2}, .shadow = {-2, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {-2, 1}, .shadow = {-2, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {-1, 3}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {-2, 2}, .shadow = {-2, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_1_5[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_1_6[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {2, 2}, .shadow = {2, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {2, 1}, .shadow = {2, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {1, 3}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {2, 2}, .shadow = {2, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_1_7[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 18, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {2, 1}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 18, .offset = {1, 2}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 18, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_1_8[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 21, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {2, 1}, .shadow = {2, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 21, .offset = {1, 3}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {2, 1}, .shadow = {2, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 21, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 25, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 10}, .shadow = {0, 8} },
	{ .frames = 2, .unkFlags = 2, .poseId = 25, .offset = {0, 20}, .shadow = {0, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, 29}, .shadow = {0, 20} },
	{ .frames = 1, .unkFlags = 1, .poseId = 25, .offset = {0, 29}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {0, 29}, .shadow = {0, 20} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 29}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, 29}, .shadow = {0, 20} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 29}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 14}, .shadow = {0, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 4}, .shadow = {0, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 28, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {10, 12}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 2, .poseId = 28, .offset = {15, 18}, .shadow = {15, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {23, 28}, .shadow = {23, 21} },
	{ .frames = 1, .unkFlags = 1, .poseId = 28, .offset = {23, 28}, .shadow = {23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {23, 28}, .shadow = {23, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {23, 28}, .shadow = {23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {23, 28}, .shadow = {23, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {23, 28}, .shadow = {23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {14, 17}, .shadow = {14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {4, 4}, .shadow = {4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 31, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {10, 2}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 31, .offset = {15, 4}, .shadow = {15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {23, 7}, .shadow = {23, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 31, .offset = {23, 7}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {23, 7}, .shadow = {23, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {23, 7}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {23, 7}, .shadow = {23, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {23, 7}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {14, 3}, .shadow = {14, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {4, 1}, .shadow = {4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 34, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {4, -3}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {10, -6}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 2, .poseId = 34, .offset = {15, -10}, .shadow = {15, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {23, -15}, .shadow = {23, -22} },
	{ .frames = 1, .unkFlags = 1, .poseId = 34, .offset = {23, -15}, .shadow = {23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {23, -15}, .shadow = {23, -22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {23, -15}, .shadow = {23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {23, -15}, .shadow = {23, -22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {23, -15}, .shadow = {23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {14, -12}, .shadow = {14, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {4, -3}, .shadow = {4, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 37, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -2}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -7}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 2, .poseId = 37, .offset = {0, -12}, .shadow = {0, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, -16}, .shadow = {0, -22} },
	{ .frames = 1, .unkFlags = 1, .poseId = 37, .offset = {0, -16}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {0, -16}, .shadow = {0, -22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -16}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, -16}, .shadow = {0, -22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -16}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -8}, .shadow = {0, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -3}, .shadow = {0, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 40, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {-4, -3}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {-10, -6}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 2, .poseId = 40, .offset = {-15, -10}, .shadow = {-15, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-23, -15}, .shadow = {-23, -22} },
	{ .frames = 1, .unkFlags = 1, .poseId = 40, .offset = {-23, -15}, .shadow = {-23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {-23, -15}, .shadow = {-23, -22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {-23, -15}, .shadow = {-23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-23, -15}, .shadow = {-23, -22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {-23, -15}, .shadow = {-23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-14, -12}, .shadow = {-14, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-4, -3}, .shadow = {-4, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 43, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {-10, 2}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 43, .offset = {-15, 4}, .shadow = {-15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-23, 7}, .shadow = {-23, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 43, .offset = {-23, 7}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-23, 7}, .shadow = {-23, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {-23, 7}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-23, 7}, .shadow = {-23, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {-23, 7}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-14, 3}, .shadow = {-14, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-4, 1}, .shadow = {-4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 46, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-10, 12}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 2, .poseId = 46, .offset = {-15, 18}, .shadow = {-15, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {-23, 28}, .shadow = {-23, 21} },
	{ .frames = 1, .unkFlags = 1, .poseId = 46, .offset = {-23, 28}, .shadow = {-23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-23, 28}, .shadow = {-23, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-23, 28}, .shadow = {-23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {-23, 28}, .shadow = {-23, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-23, 28}, .shadow = {-23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-14, 17}, .shadow = {-14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-4, 4}, .shadow = {-4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 49, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, 10}, .shadow = {0, 8} },
	{ .frames = 2, .unkFlags = 2, .poseId = 49, .offset = {0, 20}, .shadow = {0, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, 29}, .shadow = {0, 20} },
	{ .frames = 1, .unkFlags = 1, .poseId = 49, .offset = {0, 29}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, 29}, .shadow = {0, 20} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, 29}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, 29}, .shadow = {0, 20} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, 29}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 14}, .shadow = {0, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 4}, .shadow = {0, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 52, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {10, 12}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 2, .poseId = 52, .offset = {15, 18}, .shadow = {15, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {23, 28}, .shadow = {23, 21} },
	{ .frames = 1, .unkFlags = 1, .poseId = 52, .offset = {23, 28}, .shadow = {23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {23, 28}, .shadow = {23, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {23, 28}, .shadow = {23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {23, 28}, .shadow = {23, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {23, 28}, .shadow = {23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {14, 17}, .shadow = {14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {4, 4}, .shadow = {4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 55, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {10, 2}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 55, .offset = {15, 4}, .shadow = {15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {23, 7}, .shadow = {23, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 55, .offset = {23, 7}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {23, 7}, .shadow = {23, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {23, 7}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {23, 7}, .shadow = {23, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {23, 7}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {14, 3}, .shadow = {14, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {4, 1}, .shadow = {4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 58, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {4, -3}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {10, -6}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 2, .poseId = 58, .offset = {15, -10}, .shadow = {15, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {23, -15}, .shadow = {23, -22} },
	{ .frames = 1, .unkFlags = 1, .poseId = 58, .offset = {23, -15}, .shadow = {23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {23, -15}, .shadow = {23, -22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {23, -15}, .shadow = {23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {23, -15}, .shadow = {23, -22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {23, -15}, .shadow = {23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {14, -12}, .shadow = {14, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {4, -3}, .shadow = {4, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 61, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, -2}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, -7}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 2, .poseId = 61, .offset = {0, -12}, .shadow = {0, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -16}, .shadow = {0, -22} },
	{ .frames = 1, .unkFlags = 1, .poseId = 61, .offset = {0, -16}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, -16}, .shadow = {0, -22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, -16}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -16}, .shadow = {0, -22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, -16}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -8}, .shadow = {0, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -3}, .shadow = {0, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 64, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {-4, -3}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {-10, -6}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 2, .poseId = 64, .offset = {-15, -10}, .shadow = {-15, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-23, -15}, .shadow = {-23, -22} },
	{ .frames = 1, .unkFlags = 1, .poseId = 64, .offset = {-23, -15}, .shadow = {-23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {-23, -15}, .shadow = {-23, -22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {-23, -15}, .shadow = {-23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-23, -15}, .shadow = {-23, -22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {-23, -15}, .shadow = {-23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-14, -12}, .shadow = {-14, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-4, -3}, .shadow = {-4, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 67, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {-10, 2}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 67, .offset = {-15, 4}, .shadow = {-15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-23, 7}, .shadow = {-23, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 67, .offset = {-23, 7}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-23, 7}, .shadow = {-23, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {-23, 7}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-23, 7}, .shadow = {-23, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {-23, 7}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-14, 3}, .shadow = {-14, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-4, 1}, .shadow = {-4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 70, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {-10, 12}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 2, .poseId = 70, .offset = {-15, 18}, .shadow = {-15, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-23, 28}, .shadow = {-23, 21} },
	{ .frames = 1, .unkFlags = 1, .poseId = 70, .offset = {-23, 28}, .shadow = {-23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-23, 28}, .shadow = {-23, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {-23, 28}, .shadow = {-23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-23, 28}, .shadow = {-23, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {-23, 28}, .shadow = {-23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-14, 17}, .shadow = {-14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-4, 4}, .shadow = {-4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 8, .unkFlags = 2, .poseId = 75, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 76, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 76, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {1, 2}, .shadow = {1, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {1, 2}, .shadow = {1, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {1, 2}, .shadow = {1, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 8, .unkFlags = 2, .poseId = 80, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 81, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 81, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {3, 1}, .shadow = {3, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 85, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 86, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 86, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {2, 1}, .shadow = {2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {2, 1}, .shadow = {2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {2, 1}, .shadow = {2, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 8, .unkFlags = 2, .poseId = 90, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 91, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {3, -1}, .shadow = {3, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 8, .unkFlags = 2, .poseId = 95, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 96, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {1, -2}, .shadow = {1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {1, -2}, .shadow = {1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {1, -2}, .shadow = {1, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 8, .unkFlags = 2, .poseId = 100, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 101, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {-3, -1}, .shadow = {-3, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 105, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 106, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-2, 1}, .shadow = {-2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-2, 1}, .shadow = {-2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-2, 1}, .shadow = {-2, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 8, .unkFlags = 2, .poseId = 110, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 111, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-3, 1}, .shadow = {-3, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_8_1[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 131, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 130, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 132, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 130, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 131, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 130, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 132, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_8_2[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 134, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 12, .unkFlags = 0, .poseId = 133, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 135, .offset = {-2, 1}, .shadow = {-2, 1} },
	{ .frames = 12, .unkFlags = 0, .poseId = 133, .offset = {-1, 3}, .shadow = {-1, 1} },
	{ .frames = 12, .unkFlags = 0, .poseId = 134, .offset = {-2, 1}, .shadow = {-2, 1} },
	{ .frames = 12, .unkFlags = 0, .poseId = 133, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 135, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_8_3[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 137, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 136, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 138, .offset = {-2, 1}, .shadow = {-2, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 136, .offset = {-1, 2}, .shadow = {-1, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 137, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 136, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 138, .offset = {-1, 2}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_8_4[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 140, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 12, .unkFlags = 0, .poseId = 139, .offset = {-2, 2}, .shadow = {-2, 1} },
	{ .frames = 12, .unkFlags = 0, .poseId = 141, .offset = {-2, 1}, .shadow = {-2, 1} },
	{ .frames = 12, .unkFlags = 0, .poseId = 139, .offset = {-1, 3}, .shadow = {-1, 1} },
	{ .frames = 12, .unkFlags = 0, .poseId = 140, .offset = {-2, 2}, .shadow = {-2, 1} },
	{ .frames = 12, .unkFlags = 0, .poseId = 139, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 141, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_8_5[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 143, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 142, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 144, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 142, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 143, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 142, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 144, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_8_6[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 146, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 12, .unkFlags = 0, .poseId = 145, .offset = {2, 2}, .shadow = {2, 1} },
	{ .frames = 12, .unkFlags = 0, .poseId = 147, .offset = {2, 1}, .shadow = {2, 1} },
	{ .frames = 12, .unkFlags = 0, .poseId = 145, .offset = {1, 3}, .shadow = {1, 1} },
	{ .frames = 12, .unkFlags = 0, .poseId = 146, .offset = {2, 2}, .shadow = {2, 1} },
	{ .frames = 12, .unkFlags = 0, .poseId = 145, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 147, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_8_7[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 149, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 148, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 150, .offset = {2, 1}, .shadow = {2, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 148, .offset = {1, 2}, .shadow = {1, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 149, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 148, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 150, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_8_8[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 152, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 12, .unkFlags = 0, .poseId = 151, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 153, .offset = {2, 1}, .shadow = {2, 1} },
	{ .frames = 12, .unkFlags = 0, .poseId = 151, .offset = {1, 3}, .shadow = {1, 1} },
	{ .frames = 12, .unkFlags = 0, .poseId = 152, .offset = {2, 1}, .shadow = {2, 1} },
	{ .frames = 12, .unkFlags = 0, .poseId = 151, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 153, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {6, 4}, .shadow = {6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {10, 15}, .shadow = {10, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {9, 22}, .shadow = {9, 22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 158, .offset = {0, 26}, .shadow = {0, 24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 159, .offset = {-9, 22}, .shadow = {-9, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-10, 15}, .shadow = {-10, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {-6, 4}, .shadow = {-6, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {8, 1}, .shadow = {8, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {20, 6}, .shadow = {20, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {23, 17}, .shadow = {23, 17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 157, .offset = {21, 25}, .shadow = {21, 25} },
	{ .frames = 2, .unkFlags = 3, .poseId = 158, .offset = {11, 26}, .shadow = {11, 25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {-2, 7}, .shadow = {-2, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {5, -2}, .shadow = {5, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {10, -3}, .shadow = {10, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 156, .offset = {19, 7}, .shadow = {19, 7} },
	{ .frames = 2, .unkFlags = 3, .poseId = 157, .offset = {18, 11}, .shadow = {18, 11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {2, 7}, .shadow = {2, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {3, -8}, .shadow = {3, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {7, -16}, .shadow = {7, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {14, -19}, .shadow = {14, -19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 155, .offset = {21, -15}, .shadow = {21, -15} },
	{ .frames = 2, .unkFlags = 3, .poseId = 156, .offset = {24, -9}, .shadow = {24, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {22, -3}, .shadow = {22, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {11, 2}, .shadow = {11, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {-9, -2}, .shadow = {-9, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-11, -8}, .shadow = {-11, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-8, -13}, .shadow = {-8, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 154, .offset = {0, -15}, .shadow = {0, -15} },
	{ .frames = 2, .unkFlags = 3, .poseId = 155, .offset = {8, -13}, .shadow = {8, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {12, -8}, .shadow = {12, -8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {9, -2}, .shadow = {9, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {-3, -8}, .shadow = {-3, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {-6, -15}, .shadow = {-6, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {-12, -18}, .shadow = {-12, -23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 161, .offset = {-21, -15}, .shadow = {-21, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 160, .offset = {-24, -9}, .shadow = {-22, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {-22, -2}, .shadow = {-21, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {-11, 2}, .shadow = {-11, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {-5, -3}, .shadow = {-5, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {-10, -5}, .shadow = {-10, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-16, -1}, .shadow = {-16, -1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 160, .offset = {-19, 3}, .shadow = {-19, 3} },
	{ .frames = 2, .unkFlags = 3, .poseId = 159, .offset = {-19, 11}, .shadow = {-19, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {-12, 12}, .shadow = {-12, 11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {-3, 7}, .shadow = {-3, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-19, 5}, .shadow = {-19, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-25, 13}, .shadow = {-25, 13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 159, .offset = {-22, 23}, .shadow = {-22, 23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 158, .offset = {-10, 26}, .shadow = {-10, 26} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {2, 9}, .shadow = {2, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 172, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 172, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 170, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 171, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 170, .offset = {0, 8}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 175, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 175, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 173, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 174, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 173, .offset = {0, 8}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 178, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 178, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 176, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 177, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 176, .offset = {0, 8}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 181, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 181, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 181, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 179, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 180, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 180, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 179, .offset = {0, 8}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 184, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 184, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 184, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 182, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 183, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 183, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 182, .offset = {0, 8}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 187, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 187, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 185, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 186, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 185, .offset = {0, 8}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 190, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 190, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 188, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 189, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 188, .offset = {0, 8}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCrobatAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 193, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 193, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 191, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 192, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 191, .offset = {0, 8}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sCrobatGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_1.4bpp.lz");
static const ax_sprite sCrobatSprites1[] = {
	{sCrobatGfx1, ARRAY_COUNT(sCrobatGfx1)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_2.4bpp.lz");
static const ax_sprite sCrobatSprites2[] = {
	{sCrobatGfx2, ARRAY_COUNT(sCrobatGfx2)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_3.4bpp.lz");
static const ax_sprite sCrobatSprites3[] = {
	{sCrobatGfx3, ARRAY_COUNT(sCrobatGfx3)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_4.4bpp.lz");
static const ax_sprite sCrobatSprites4[] = {
	{sCrobatGfx4, ARRAY_COUNT(sCrobatGfx4)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_5.4bpp.lz");
static const ax_sprite sCrobatSprites5[] = {
	{sCrobatGfx5, ARRAY_COUNT(sCrobatGfx5)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_6.4bpp.lz");
static const ax_sprite sCrobatSprites6[] = {
	{sCrobatGfx6, ARRAY_COUNT(sCrobatGfx6)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_7.4bpp.lz");
static const ax_sprite sCrobatSprites7[] = {
	{sCrobatGfx7, ARRAY_COUNT(sCrobatGfx7)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_8.4bpp.lz");
static const ax_sprite sCrobatSprites8[] = {
	{sCrobatGfx8, ARRAY_COUNT(sCrobatGfx8)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_9.4bpp.lz");
static const ax_sprite sCrobatSprites9[] = {
	{sCrobatGfx9, ARRAY_COUNT(sCrobatGfx9)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_10.4bpp.lz");
static const ax_sprite sCrobatSprites10[] = {
	{sCrobatGfx10, ARRAY_COUNT(sCrobatGfx10)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_11.4bpp.lz");
static const ax_sprite sCrobatSprites11[] = {
	{sCrobatGfx11, ARRAY_COUNT(sCrobatGfx11)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_12.4bpp.lz");
static const ax_sprite sCrobatSprites12[] = {
	{sCrobatGfx12, ARRAY_COUNT(sCrobatGfx12)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_13.4bpp.lz");
static const ax_sprite sCrobatSprites13[] = {
	{sCrobatGfx13, ARRAY_COUNT(sCrobatGfx13)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_14.4bpp.lz");
static const ax_sprite sCrobatSprites14[] = {
	{sCrobatGfx14, ARRAY_COUNT(sCrobatGfx14)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_15.4bpp.lz");
static const ax_sprite sCrobatSprites15[] = {
	{sCrobatGfx15, ARRAY_COUNT(sCrobatGfx15)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_16.4bpp.lz");
static const u8 sCrobatGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_16_1.4bpp.lz");
static const ax_sprite sCrobatSprites16[] = {
	{sCrobatGfx16, ARRAY_COUNT(sCrobatGfx16)}, 
	{NULL, 32}, 
	{sCrobatGfx16_1, ARRAY_COUNT(sCrobatGfx16_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCrobatGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_17.4bpp.lz");
static const ax_sprite sCrobatSprites17[] = {
	{sCrobatGfx17, ARRAY_COUNT(sCrobatGfx17)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_18.4bpp.lz");
static const ax_sprite sCrobatSprites18[] = {
	{sCrobatGfx18, ARRAY_COUNT(sCrobatGfx18)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_19.4bpp.lz");
static const ax_sprite sCrobatSprites19[] = {
	{sCrobatGfx19, ARRAY_COUNT(sCrobatGfx19)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_20.4bpp.lz");
static const ax_sprite sCrobatSprites20[] = {
	{sCrobatGfx20, ARRAY_COUNT(sCrobatGfx20)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_21.4bpp.lz");
static const ax_sprite sCrobatSprites21[] = {
	{sCrobatGfx21, ARRAY_COUNT(sCrobatGfx21)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_22.4bpp.lz");
static const ax_sprite sCrobatSprites22[] = {
	{sCrobatGfx22, ARRAY_COUNT(sCrobatGfx22)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCrobatGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_23.4bpp.lz");
static const u8 sCrobatGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_23_1.4bpp.lz");
static const u8 sCrobatGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_23_2.4bpp.lz");
static const ax_sprite sCrobatSprites23[] = {
	{sCrobatGfx23, ARRAY_COUNT(sCrobatGfx23)}, 
	{NULL, 96}, 
	{sCrobatGfx23_1, ARRAY_COUNT(sCrobatGfx23_1)}, 
	{NULL, 32}, 
	{sCrobatGfx23_2, ARRAY_COUNT(sCrobatGfx23_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCrobatGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_24.4bpp.lz");
static const ax_sprite sCrobatSprites24[] = {
	{NULL, 32}, 
	{sCrobatGfx24, ARRAY_COUNT(sCrobatGfx24)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_25.4bpp.lz");
static const ax_sprite sCrobatSprites25[] = {
	{sCrobatGfx25, ARRAY_COUNT(sCrobatGfx25)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_26.4bpp.lz");
static const ax_sprite sCrobatSprites26[] = {
	{sCrobatGfx26, ARRAY_COUNT(sCrobatGfx26)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_27.4bpp.lz");
static const u8 sCrobatGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_27_1.4bpp.lz");
static const ax_sprite sCrobatSprites27[] = {
	{NULL, 64}, 
	{sCrobatGfx27, ARRAY_COUNT(sCrobatGfx27)}, 
	{NULL, 32}, 
	{sCrobatGfx27_1, ARRAY_COUNT(sCrobatGfx27_1)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_28.4bpp.lz");
static const ax_sprite sCrobatSprites28[] = {
	{NULL, 32}, 
	{sCrobatGfx28, ARRAY_COUNT(sCrobatGfx28)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCrobatGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_29.4bpp.lz");
static const ax_sprite sCrobatSprites29[] = {
	{NULL, 64}, 
	{sCrobatGfx29, ARRAY_COUNT(sCrobatGfx29)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_30.4bpp.lz");
static const ax_sprite sCrobatSprites30[] = {
	{sCrobatGfx30, ARRAY_COUNT(sCrobatGfx30)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_31.4bpp.lz");
static const ax_sprite sCrobatSprites31[] = {
	{sCrobatGfx31, ARRAY_COUNT(sCrobatGfx31)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_32.4bpp.lz");
static const ax_sprite sCrobatSprites32[] = {
	{sCrobatGfx32, ARRAY_COUNT(sCrobatGfx32)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_33.4bpp.lz");
static const ax_sprite sCrobatSprites33[] = {
	{sCrobatGfx33, ARRAY_COUNT(sCrobatGfx33)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_34.4bpp.lz");
static const ax_sprite sCrobatSprites34[] = {
	{sCrobatGfx34, ARRAY_COUNT(sCrobatGfx34)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_35.4bpp.lz");
static const ax_sprite sCrobatSprites35[] = {
	{sCrobatGfx35, ARRAY_COUNT(sCrobatGfx35)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_36.4bpp.lz");
static const ax_sprite sCrobatSprites36[] = {
	{sCrobatGfx36, ARRAY_COUNT(sCrobatGfx36)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_37.4bpp.lz");
static const ax_sprite sCrobatSprites37[] = {
	{sCrobatGfx37, ARRAY_COUNT(sCrobatGfx37)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_38.4bpp.lz");
static const ax_sprite sCrobatSprites38[] = {
	{sCrobatGfx38, ARRAY_COUNT(sCrobatGfx38)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_39.4bpp.lz");
static const ax_sprite sCrobatSprites39[] = {
	{sCrobatGfx39, ARRAY_COUNT(sCrobatGfx39)}, 
	{NULL, 0}
};
static const u8 sCrobatGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crobat/sprite_40.4bpp.lz");
static const ax_sprite sCrobatSprites40[] = {
	{sCrobatGfx40, ARRAY_COUNT(sCrobatGfx40)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesCrobat[] = {
	sCrobatPose1,
	sCrobatPose2,
	sCrobatPose3,
	sCrobatPose4,
	sCrobatPose5,
	sCrobatPose6,
	sCrobatPose7,
	sCrobatPose8,
	sCrobatPose9,
	sCrobatPose10,
	sCrobatPose11,
	sCrobatPose12,
	sCrobatPose13,
	sCrobatPose14,
	sCrobatPose15,
	sCrobatPose16,
	sCrobatPose17,
	sCrobatPose18,
	sCrobatPose19,
	sCrobatPose20,
	sCrobatPose21,
	sCrobatPose22,
	sCrobatPose23,
	sCrobatPose24,
	sCrobatPose1,
	sCrobatPose2,
	sCrobatPose3,
	sCrobatPose4,
	sCrobatPose5,
	sCrobatPose6,
	sCrobatPose7,
	sCrobatPose8,
	sCrobatPose9,
	sCrobatPose10,
	sCrobatPose11,
	sCrobatPose12,
	sCrobatPose13,
	sCrobatPose14,
	sCrobatPose15,
	sCrobatPose16,
	sCrobatPose17,
	sCrobatPose18,
	sCrobatPose19,
	sCrobatPose20,
	sCrobatPose21,
	sCrobatPose22,
	sCrobatPose23,
	sCrobatPose24,
	sCrobatPose1,
	sCrobatPose2,
	sCrobatPose3,
	sCrobatPose4,
	sCrobatPose5,
	sCrobatPose6,
	sCrobatPose7,
	sCrobatPose8,
	sCrobatPose9,
	sCrobatPose10,
	sCrobatPose11,
	sCrobatPose12,
	sCrobatPose13,
	sCrobatPose14,
	sCrobatPose15,
	sCrobatPose16,
	sCrobatPose17,
	sCrobatPose18,
	sCrobatPose19,
	sCrobatPose20,
	sCrobatPose21,
	sCrobatPose22,
	sCrobatPose23,
	sCrobatPose24,
	sCrobatPose1,
	sCrobatPose2,
	sCrobatPose3,
	sCrobatPose76,
	sCrobatPose77,
	sCrobatPose4,
	sCrobatPose5,
	sCrobatPose6,
	sCrobatPose81,
	sCrobatPose82,
	sCrobatPose7,
	sCrobatPose8,
	sCrobatPose9,
	sCrobatPose86,
	sCrobatPose87,
	sCrobatPose10,
	sCrobatPose11,
	sCrobatPose12,
	sCrobatPose91,
	sCrobatPose92,
	sCrobatPose13,
	sCrobatPose14,
	sCrobatPose15,
	sCrobatPose96,
	sCrobatPose97,
	sCrobatPose16,
	sCrobatPose17,
	sCrobatPose18,
	sCrobatPose101,
	sCrobatPose102,
	sCrobatPose19,
	sCrobatPose20,
	sCrobatPose21,
	sCrobatPose106,
	sCrobatPose107,
	sCrobatPose22,
	sCrobatPose23,
	sCrobatPose24,
	sCrobatPose111,
	sCrobatPose112,
	sCrobatPose1,
	sCrobatPose22,
	sCrobatPose19,
	sCrobatPose16,
	sCrobatPose13,
	sCrobatPose10,
	sCrobatPose7,
	sCrobatPose4,
	sCrobatPose121,
	sCrobatPose122,
	sCrobatPose123,
	sCrobatPose124,
	sCrobatPose125,
	sCrobatPose126,
	sCrobatPose127,
	sCrobatPose128,
	sCrobatPose129,
	sCrobatPose130,
	sCrobatPose1,
	sCrobatPose2,
	sCrobatPose3,
	sCrobatPose4,
	sCrobatPose5,
	sCrobatPose6,
	sCrobatPose7,
	sCrobatPose8,
	sCrobatPose9,
	sCrobatPose10,
	sCrobatPose11,
	sCrobatPose12,
	sCrobatPose13,
	sCrobatPose14,
	sCrobatPose15,
	sCrobatPose16,
	sCrobatPose17,
	sCrobatPose18,
	sCrobatPose19,
	sCrobatPose20,
	sCrobatPose21,
	sCrobatPose22,
	sCrobatPose23,
	sCrobatPose24,
	sCrobatPose77,
	sCrobatPose112,
	sCrobatPose107,
	sCrobatPose102,
	sCrobatPose159,
	sCrobatPose92,
	sCrobatPose87,
	sCrobatPose82,
	sCrobatPose77,
	sCrobatPose164,
	sCrobatPose165,
	sCrobatPose166,
	sCrobatPose97,
	sCrobatPose168,
	sCrobatPose169,
	sCrobatPose170,
	sCrobatPose1,
	sCrobatPose2,
	sCrobatPose3,
	sCrobatPose4,
	sCrobatPose5,
	sCrobatPose6,
	sCrobatPose7,
	sCrobatPose8,
	sCrobatPose9,
	sCrobatPose10,
	sCrobatPose11,
	sCrobatPose12,
	sCrobatPose13,
	sCrobatPose14,
	sCrobatPose15,
	sCrobatPose16,
	sCrobatPose17,
	sCrobatPose18,
	sCrobatPose19,
	sCrobatPose20,
	sCrobatPose21,
	sCrobatPose22,
	sCrobatPose23,
	sCrobatPose24,
	sCrobatPose2,
	sCrobatPose23,
	sCrobatPose197,
	sCrobatPose198,
	sCrobatPose199,
	sCrobatPose200,
	sCrobatPose201,
	sCrobatPose5,
	sCrobatPose1,
	sCrobatPose22,
	sCrobatPose19,
	sCrobatPose16,
	sCrobatPose13,
	sCrobatPose10,
	sCrobatPose7,
	sCrobatPose4,
};

static const struct PositionSets sAxPositionsCrobat[] = {
	[0] = { .set = { {-1, -12}, {-14, -19}, {13, -19}, {0, -13} } },
	[1] = { .set = { {-1, -12}, {-10, -26}, {9, -26}, {0, -13} } },
	[2] = { .set = { {-1, -12}, {-10, -9}, {9, -9}, {0, -13} } },
	[3] = { .set = { {2, -13}, {4, -23}, {-15, -14}, {0, -14} } },
	[4] = { .set = { {2, -13}, {-1, -27}, {-13, -22}, {-1, -14} } },
	[5] = { .set = { {2, -13}, {11, -15}, {-2, -7}, {0, -14} } },
	[6] = { .set = { {3, -13}, {-6, -23}, {-8, -11}, {-1, -14} } },
	[7] = { .set = { {3, -13}, {-10, -22}, {-12, -13}, {-1, -13} } },
	[8] = { .set = { {3, -14}, {8, -22}, {9, -13}, {-1, -14} } },
	[9] = { .set = { {0, -16}, {-12, -21}, {10, -9}, {-2, -15} } },
	[10] = { .set = { {1, -15}, {-14, -18}, {-1, -9}, {-2, -15} } },
	[11] = { .set = { {1, -15}, {-3, -29}, {11, -22}, {-1, -14} } },
	[12] = { .set = { {0, -16}, {14, -16}, {-15, -16}, {-1, -15} } },
	[13] = { .set = { {0, -16}, {11, -10}, {-12, -10}, {-1, -15} } },
	[14] = { .set = { {0, -16}, {8, -26}, {-9, -26}, {0, -15} } },
	[15] = { .set = { {-1, -16}, {11, -21}, {-11, -9}, {1, -15} } },
	[16] = { .set = { {-2, -15}, {13, -18}, {0, -9}, {1, -15} } },
	[17] = { .set = { {-2, -15}, {2, -29}, {-12, -22}, {0, -14} } },
	[18] = { .set = { {-4, -13}, {5, -23}, {7, -11}, {0, -14} } },
	[19] = { .set = { {-4, -13}, {9, -22}, {11, -13}, {0, -13} } },
	[20] = { .set = { {-4, -14}, {-9, -22}, {-10, -13}, {0, -14} } },
	[21] = { .set = { {-3, -13}, {-5, -23}, {14, -14}, {-1, -14} } },
	[22] = { .set = { {-3, -13}, {0, -27}, {12, -22}, {0, -14} } },
	[23] = { .set = { {-3, -13}, {-12, -15}, {1, -7}, {-1, -14} } },
	[24] = { .set = { {-1, -12}, {-14, -19}, {13, -19}, {0, -13} } },
	[25] = { .set = { {-1, -12}, {-10, -26}, {9, -26}, {0, -13} } },
	[26] = { .set = { {-1, -12}, {-10, -9}, {9, -9}, {0, -13} } },
	[27] = { .set = { {2, -13}, {4, -23}, {-15, -14}, {0, -14} } },
	[28] = { .set = { {2, -13}, {-1, -27}, {-13, -22}, {-1, -14} } },
	[29] = { .set = { {2, -13}, {11, -15}, {-2, -7}, {0, -14} } },
	[30] = { .set = { {3, -13}, {-6, -23}, {-8, -11}, {-1, -14} } },
	[31] = { .set = { {3, -13}, {-10, -22}, {-12, -13}, {-1, -13} } },
	[32] = { .set = { {3, -14}, {8, -22}, {9, -13}, {-1, -14} } },
	[33] = { .set = { {0, -16}, {-12, -21}, {10, -9}, {-2, -15} } },
	[34] = { .set = { {1, -15}, {-14, -18}, {-1, -9}, {-2, -15} } },
	[35] = { .set = { {1, -15}, {-3, -29}, {11, -22}, {-1, -14} } },
	[36] = { .set = { {0, -16}, {14, -16}, {-15, -16}, {-1, -15} } },
	[37] = { .set = { {0, -16}, {11, -10}, {-12, -10}, {-1, -15} } },
	[38] = { .set = { {0, -16}, {8, -26}, {-9, -26}, {0, -15} } },
	[39] = { .set = { {-1, -16}, {11, -21}, {-11, -9}, {1, -15} } },
	[40] = { .set = { {-2, -15}, {13, -18}, {0, -9}, {1, -15} } },
	[41] = { .set = { {-2, -15}, {2, -29}, {-12, -22}, {0, -14} } },
	[42] = { .set = { {-4, -13}, {5, -23}, {7, -11}, {0, -14} } },
	[43] = { .set = { {-4, -13}, {9, -22}, {11, -13}, {0, -13} } },
	[44] = { .set = { {-4, -14}, {-9, -22}, {-10, -13}, {0, -14} } },
	[45] = { .set = { {-3, -13}, {-5, -23}, {14, -14}, {-1, -14} } },
	[46] = { .set = { {-3, -13}, {0, -27}, {12, -22}, {0, -14} } },
	[47] = { .set = { {-3, -13}, {-12, -15}, {1, -7}, {-1, -14} } },
	[48] = { .set = { {-1, -12}, {-14, -19}, {13, -19}, {0, -13} } },
	[49] = { .set = { {-1, -12}, {-10, -26}, {9, -26}, {0, -13} } },
	[50] = { .set = { {-1, -12}, {-10, -9}, {9, -9}, {0, -13} } },
	[51] = { .set = { {2, -13}, {4, -23}, {-15, -14}, {0, -14} } },
	[52] = { .set = { {2, -13}, {-1, -27}, {-13, -22}, {-1, -14} } },
	[53] = { .set = { {2, -13}, {11, -15}, {-2, -7}, {0, -14} } },
	[54] = { .set = { {3, -13}, {-6, -23}, {-8, -11}, {-1, -14} } },
	[55] = { .set = { {3, -13}, {-10, -22}, {-12, -13}, {-1, -13} } },
	[56] = { .set = { {3, -14}, {8, -22}, {9, -13}, {-1, -14} } },
	[57] = { .set = { {0, -16}, {-12, -21}, {10, -9}, {-2, -15} } },
	[58] = { .set = { {1, -15}, {-14, -18}, {-1, -9}, {-2, -15} } },
	[59] = { .set = { {1, -15}, {-3, -29}, {11, -22}, {-1, -14} } },
	[60] = { .set = { {0, -16}, {14, -16}, {-15, -16}, {-1, -15} } },
	[61] = { .set = { {0, -16}, {11, -10}, {-12, -10}, {-1, -15} } },
	[62] = { .set = { {0, -16}, {8, -26}, {-9, -26}, {0, -15} } },
	[63] = { .set = { {-1, -16}, {11, -21}, {-11, -9}, {1, -15} } },
	[64] = { .set = { {-2, -15}, {13, -18}, {0, -9}, {1, -15} } },
	[65] = { .set = { {-2, -15}, {2, -29}, {-12, -22}, {0, -14} } },
	[66] = { .set = { {-4, -13}, {5, -23}, {7, -11}, {0, -14} } },
	[67] = { .set = { {-4, -13}, {9, -22}, {11, -13}, {0, -13} } },
	[68] = { .set = { {-4, -14}, {-9, -22}, {-10, -13}, {0, -14} } },
	[69] = { .set = { {-3, -13}, {-5, -23}, {14, -14}, {-1, -14} } },
	[70] = { .set = { {-3, -13}, {0, -27}, {12, -22}, {0, -14} } },
	[71] = { .set = { {-3, -13}, {-12, -15}, {1, -7}, {-1, -14} } },
	[72] = { .set = { {-1, -12}, {-14, -19}, {13, -19}, {0, -13} } },
	[73] = { .set = { {-1, -12}, {-10, -26}, {9, -26}, {0, -13} } },
	[74] = { .set = { {-1, -12}, {-10, -9}, {9, -9}, {0, -13} } },
	[75] = { .set = { {-1, -13}, {6, -19}, {-7, -15}, {-1, -14} } },
	[76] = { .set = { {-1, -12}, {-18, -21}, {17, -21}, {0, -14} } },
	[77] = { .set = { {2, -13}, {4, -23}, {-15, -14}, {0, -14} } },
	[78] = { .set = { {2, -13}, {-1, -27}, {-13, -22}, {-1, -14} } },
	[79] = { .set = { {2, -13}, {11, -15}, {-2, -7}, {0, -14} } },
	[80] = { .set = { {0, -18}, {-6, -17}, {4, -19}, {-1, -17} } },
	[81] = { .set = { {2, -12}, {6, -24}, {-19, -14}, {0, -14} } },
	[82] = { .set = { {3, -13}, {-6, -23}, {-8, -11}, {-1, -14} } },
	[83] = { .set = { {3, -13}, {-10, -22}, {-12, -13}, {-1, -13} } },
	[84] = { .set = { {3, -14}, {8, -22}, {9, -13}, {-1, -14} } },
	[85] = { .set = { {1, -16}, {-1, -16}, {4, -20}, {-2, -14} } },
	[86] = { .set = { {3, -12}, {-9, -23}, {-11, -11}, {0, -13} } },
	[87] = { .set = { {0, -16}, {-12, -21}, {10, -9}, {-2, -15} } },
	[88] = { .set = { {1, -15}, {-14, -18}, {-1, -9}, {-2, -15} } },
	[89] = { .set = { {1, -15}, {-3, -29}, {11, -22}, {-1, -14} } },
	[90] = { .set = { {-1, -14}, {5, -19}, {-1, -22}, {-3, -13} } },
	[91] = { .set = { {0, -15}, {-14, -21}, {12, -8}, {-1, -14} } },
	[92] = { .set = { {0, -16}, {14, -16}, {-15, -16}, {-1, -15} } },
	[93] = { .set = { {0, -16}, {11, -10}, {-12, -10}, {-1, -15} } },
	[94] = { .set = { {0, -16}, {8, -26}, {-9, -26}, {0, -15} } },
	[95] = { .set = { {0, -15}, {-5, -21}, {5, -21}, {0, -13} } },
	[96] = { .set = { {0, -16}, {17, -15}, {-18, -15}, {0, -14} } },
	[97] = { .set = { {-1, -16}, {11, -21}, {-11, -9}, {1, -15} } },
	[98] = { .set = { {-2, -15}, {13, -18}, {0, -9}, {1, -15} } },
	[99] = { .set = { {-2, -15}, {2, -29}, {-12, -22}, {0, -14} } },
	[100] = { .set = { {0, -14}, {-6, -19}, {0, -22}, {2, -13} } },
	[101] = { .set = { {-1, -15}, {13, -21}, {-13, -8}, {0, -14} } },
	[102] = { .set = { {-4, -13}, {5, -23}, {7, -11}, {0, -14} } },
	[103] = { .set = { {-4, -13}, {9, -22}, {11, -13}, {0, -13} } },
	[104] = { .set = { {-4, -14}, {-9, -22}, {-10, -13}, {0, -14} } },
	[105] = { .set = { {-2, -16}, {0, -16}, {-5, -20}, {1, -14} } },
	[106] = { .set = { {-4, -12}, {8, -23}, {10, -11}, {-1, -13} } },
	[107] = { .set = { {-3, -13}, {-5, -23}, {14, -14}, {-1, -14} } },
	[108] = { .set = { {-3, -13}, {0, -27}, {12, -22}, {0, -14} } },
	[109] = { .set = { {-3, -13}, {-12, -15}, {1, -7}, {-1, -14} } },
	[110] = { .set = { {-1, -18}, {5, -17}, {-5, -19}, {0, -17} } },
	[111] = { .set = { {-3, -12}, {-7, -24}, {18, -14}, {-1, -14} } },
	[112] = { .set = { {-1, -12}, {-14, -19}, {13, -19}, {0, -13} } },
	[113] = { .set = { {-3, -13}, {-5, -23}, {14, -14}, {-1, -14} } },
	[114] = { .set = { {-4, -13}, {5, -23}, {7, -11}, {0, -14} } },
	[115] = { .set = { {-1, -16}, {11, -21}, {-11, -9}, {1, -15} } },
	[116] = { .set = { {0, -16}, {14, -16}, {-15, -16}, {-1, -15} } },
	[117] = { .set = { {0, -16}, {-12, -21}, {10, -9}, {-2, -15} } },
	[118] = { .set = { {3, -13}, {-6, -23}, {-8, -11}, {-1, -14} } },
	[119] = { .set = { {2, -13}, {4, -23}, {-15, -14}, {0, -14} } },
	[120] = { .set = { {-1, -5}, {-7, 0}, {6, 0}, {0, -6} } },
	[121] = { .set = { {-1, -4}, {-8, 0}, {7, 0}, {0, -5} } },
	[122] = { .set = { {-1, -11}, {-4, -24}, {3, -24}, {0, -11} } },
	[123] = { .set = { {0, -13}, {2, -25}, {-4, -24}, {-1, -12} } },
	[124] = { .set = { {-1, -13}, {-4, -23}, {0, -21}, {-1, -11} } },
	[125] = { .set = { {-1, -13}, {-6, -22}, {2, -19}, {-2, -10} } },
	[126] = { .set = { {-1, -12}, {3, -24}, {-4, -24}, {0, -9} } },
	[127] = { .set = { {0, -13}, {5, -22}, {-3, -19}, {1, -10} } },
	[128] = { .set = { {0, -13}, {3, -23}, {-1, -21}, {0, -11} } },
	[129] = { .set = { {-1, -13}, {-3, -25}, {3, -24}, {0, -12} } },
	[130] = { .set = { {-1, -12}, {-14, -19}, {13, -19}, {0, -13} } },
	[131] = { .set = { {-1, -12}, {-10, -26}, {9, -26}, {0, -13} } },
	[132] = { .set = { {-1, -12}, {-10, -9}, {9, -9}, {0, -13} } },
	[133] = { .set = { {2, -13}, {4, -23}, {-15, -14}, {0, -14} } },
	[134] = { .set = { {2, -13}, {-1, -27}, {-13, -22}, {-1, -14} } },
	[135] = { .set = { {2, -13}, {11, -15}, {-2, -7}, {0, -14} } },
	[136] = { .set = { {3, -13}, {-6, -23}, {-8, -11}, {-1, -14} } },
	[137] = { .set = { {3, -13}, {-10, -22}, {-12, -13}, {-1, -13} } },
	[138] = { .set = { {3, -14}, {8, -22}, {9, -13}, {-1, -14} } },
	[139] = { .set = { {0, -16}, {-12, -21}, {10, -9}, {-2, -15} } },
	[140] = { .set = { {1, -15}, {-14, -18}, {-1, -9}, {-2, -15} } },
	[141] = { .set = { {1, -15}, {-3, -29}, {11, -22}, {-1, -14} } },
	[142] = { .set = { {0, -16}, {14, -16}, {-15, -16}, {-1, -15} } },
	[143] = { .set = { {0, -16}, {11, -10}, {-12, -10}, {-1, -15} } },
	[144] = { .set = { {0, -16}, {8, -26}, {-9, -26}, {0, -15} } },
	[145] = { .set = { {-1, -16}, {11, -21}, {-11, -9}, {1, -15} } },
	[146] = { .set = { {-2, -15}, {13, -18}, {0, -9}, {1, -15} } },
	[147] = { .set = { {-2, -15}, {2, -29}, {-12, -22}, {0, -14} } },
	[148] = { .set = { {-4, -13}, {5, -23}, {7, -11}, {0, -14} } },
	[149] = { .set = { {-4, -13}, {9, -22}, {11, -13}, {0, -13} } },
	[150] = { .set = { {-4, -14}, {-9, -22}, {-10, -13}, {0, -14} } },
	[151] = { .set = { {-3, -13}, {-5, -23}, {14, -14}, {-1, -14} } },
	[152] = { .set = { {-3, -13}, {0, -27}, {12, -22}, {0, -14} } },
	[153] = { .set = { {-3, -13}, {-12, -15}, {1, -7}, {-1, -14} } },
	[154] = { .set = { {-1, -12}, {-18, -21}, {17, -21}, {0, -14} } },
	[155] = { .set = { {-3, -12}, {-7, -24}, {18, -14}, {-1, -14} } },
	[156] = { .set = { {-4, -12}, {8, -23}, {10, -11}, {-1, -13} } },
	[157] = { .set = { {-1, -15}, {13, -21}, {-13, -8}, {0, -14} } },
	[158] = { .set = { {0, -15}, {17, -14}, {-18, -14}, {0, -13} } },
	[159] = { .set = { {0, -15}, {-14, -21}, {12, -8}, {-1, -14} } },
	[160] = { .set = { {3, -12}, {-9, -23}, {-11, -11}, {0, -13} } },
	[161] = { .set = { {2, -12}, {6, -24}, {-19, -14}, {0, -14} } },
	[162] = { .set = { {-1, -12}, {-18, -21}, {17, -21}, {0, -14} } },
	[163] = { .set = { {3, -12}, {7, -24}, {-18, -14}, {1, -14} } },
	[164] = { .set = { {4, -12}, {-8, -23}, {-10, -11}, {1, -13} } },
	[165] = { .set = { {1, -15}, {-13, -21}, {13, -8}, {0, -14} } },
	[166] = { .set = { {0, -16}, {17, -15}, {-18, -15}, {0, -14} } },
	[167] = { .set = { {-2, -15}, {12, -21}, {-14, -8}, {-1, -14} } },
	[168] = { .set = { {-6, -12}, {6, -23}, {8, -11}, {-3, -13} } },
	[169] = { .set = { {-4, -12}, {-8, -24}, {17, -14}, {-2, -14} } },
	[170] = { .set = { {-1, -12}, {-14, -19}, {13, -19}, {0, -13} } },
	[171] = { .set = { {-1, -12}, {-10, -26}, {9, -26}, {0, -13} } },
	[172] = { .set = { {-1, -12}, {-10, -9}, {9, -9}, {0, -13} } },
	[173] = { .set = { {2, -13}, {4, -23}, {-15, -14}, {0, -14} } },
	[174] = { .set = { {2, -13}, {-1, -27}, {-13, -22}, {-1, -14} } },
	[175] = { .set = { {2, -13}, {11, -15}, {-2, -7}, {0, -14} } },
	[176] = { .set = { {3, -13}, {-6, -23}, {-8, -11}, {-1, -14} } },
	[177] = { .set = { {3, -13}, {-10, -22}, {-12, -13}, {-1, -13} } },
	[178] = { .set = { {3, -14}, {8, -22}, {9, -13}, {-1, -14} } },
	[179] = { .set = { {0, -16}, {-12, -21}, {10, -9}, {-2, -15} } },
	[180] = { .set = { {1, -15}, {-14, -18}, {-1, -9}, {-2, -15} } },
	[181] = { .set = { {1, -15}, {-3, -29}, {11, -22}, {-1, -14} } },
	[182] = { .set = { {0, -16}, {14, -16}, {-15, -16}, {-1, -15} } },
	[183] = { .set = { {0, -16}, {11, -10}, {-12, -10}, {-1, -15} } },
	[184] = { .set = { {0, -16}, {8, -26}, {-9, -26}, {0, -15} } },
	[185] = { .set = { {-1, -16}, {11, -21}, {-11, -9}, {1, -15} } },
	[186] = { .set = { {-2, -15}, {13, -18}, {0, -9}, {1, -15} } },
	[187] = { .set = { {-2, -15}, {2, -29}, {-12, -22}, {0, -14} } },
	[188] = { .set = { {-4, -13}, {5, -23}, {7, -11}, {0, -14} } },
	[189] = { .set = { {-4, -13}, {9, -22}, {11, -13}, {0, -13} } },
	[190] = { .set = { {-4, -14}, {-9, -22}, {-10, -13}, {0, -14} } },
	[191] = { .set = { {-3, -13}, {-5, -23}, {14, -14}, {-1, -14} } },
	[192] = { .set = { {-3, -13}, {0, -27}, {12, -22}, {0, -14} } },
	[193] = { .set = { {-3, -13}, {-12, -15}, {1, -7}, {-1, -14} } },
	[194] = { .set = { {-1, -12}, {-10, -26}, {9, -26}, {0, -13} } },
	[195] = { .set = { {-3, -13}, {0, -27}, {12, -22}, {0, -14} } },
	[196] = { .set = { {-5, -13}, {8, -22}, {10, -13}, {-1, -13} } },
	[197] = { .set = { {-3, -15}, {12, -18}, {-1, -9}, {0, -15} } },
	[198] = { .set = { {0, -17}, {11, -11}, {-12, -11}, {-1, -16} } },
	[199] = { .set = { {2, -15}, {-13, -18}, {0, -9}, {-1, -15} } },
	[200] = { .set = { {4, -13}, {-9, -22}, {-11, -13}, {0, -13} } },
	[201] = { .set = { {2, -13}, {-1, -27}, {-13, -22}, {-1, -14} } },
	[202] = { .set = { {-1, -12}, {-14, -19}, {13, -19}, {0, -13} } },
	[203] = { .set = { {-3, -13}, {-5, -23}, {14, -14}, {-1, -14} } },
	[204] = { .set = { {-4, -13}, {5, -23}, {7, -11}, {0, -14} } },
	[205] = { .set = { {-1, -16}, {11, -21}, {-11, -9}, {1, -15} } },
	[206] = { .set = { {0, -16}, {14, -16}, {-15, -16}, {-1, -15} } },
	[207] = { .set = { {0, -16}, {-12, -21}, {10, -9}, {-2, -15} } },
	[208] = { .set = { {3, -13}, {-6, -23}, {-8, -11}, {-1, -14} } },
	[209] = { .set = { {2, -13}, {4, -23}, {-15, -14}, {0, -14} } },
};

static const ax_anim *const sCrobatAnimTable1[] = {
	sCrobatAnims_1_1,
	sCrobatAnims_1_2,
	sCrobatAnims_1_3,
	sCrobatAnims_1_4,
	sCrobatAnims_1_5,
	sCrobatAnims_1_6,
	sCrobatAnims_1_7,
	sCrobatAnims_1_8,
};

static const ax_anim *const sCrobatAnimTable2[] = {
	sCrobatAnims_2_1,
	sCrobatAnims_2_2,
	sCrobatAnims_2_3,
	sCrobatAnims_2_4,
	sCrobatAnims_2_5,
	sCrobatAnims_2_6,
	sCrobatAnims_2_7,
	sCrobatAnims_2_8,
};

static const ax_anim *const sCrobatAnimTable3[] = {
	sCrobatAnims_3_1,
	sCrobatAnims_3_2,
	sCrobatAnims_3_3,
	sCrobatAnims_3_4,
	sCrobatAnims_3_5,
	sCrobatAnims_3_6,
	sCrobatAnims_3_7,
	sCrobatAnims_3_8,
};

static const ax_anim *const sCrobatAnimTable4[] = {
	sCrobatAnims_4_1,
	sCrobatAnims_4_2,
	sCrobatAnims_4_3,
	sCrobatAnims_4_4,
	sCrobatAnims_4_5,
	sCrobatAnims_4_6,
	sCrobatAnims_4_7,
	sCrobatAnims_4_8,
};

static const ax_anim *const sCrobatAnimTable5[] = {
	gAxSharedAnim_00249,
	gAxSharedAnim_00309,
	gAxSharedAnim_00301,
	gAxSharedAnim_00294,
	gAxSharedAnim_00285,
	gAxSharedAnim_00276,
	gAxSharedAnim_00270,
	gAxSharedAnim_00258,
};

static const ax_anim *const sCrobatAnimTable6[] = {
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
};

static const ax_anim *const sCrobatAnimTable7[] = {
	gAxSharedAnim_00332,
	gAxSharedAnim_00342,
	gAxSharedAnim_00350,
	gAxSharedAnim_00358,
	gAxSharedAnim_00370,
	gAxSharedAnim_00378,
	gAxSharedAnim_00385,
	gAxSharedAnim_00392,
};

static const ax_anim *const sCrobatAnimTable8[] = {
	sCrobatAnims_8_1,
	sCrobatAnims_8_2,
	sCrobatAnims_8_3,
	sCrobatAnims_8_4,
	sCrobatAnims_8_5,
	sCrobatAnims_8_6,
	sCrobatAnims_8_7,
	sCrobatAnims_8_8,
};

static const ax_anim *const sCrobatAnimTable9[] = {
	sCrobatAnims_9_1,
	sCrobatAnims_9_2,
	sCrobatAnims_9_3,
	sCrobatAnims_9_4,
	sCrobatAnims_9_5,
	sCrobatAnims_9_6,
	sCrobatAnims_9_7,
	sCrobatAnims_9_8,
};

static const ax_anim *const sCrobatAnimTable10[] = {
	gAxSharedAnim_00705,
	gAxSharedAnim_00714,
	gAxSharedAnim_00725,
	gAxSharedAnim_00737,
	gAxSharedAnim_00750,
	gAxSharedAnim_00760,
	gAxSharedAnim_00772,
	gAxSharedAnim_00781,
};

static const ax_anim *const sCrobatAnimTable11[] = {
	sCrobatAnims_11_1,
	sCrobatAnims_11_2,
	sCrobatAnims_11_3,
	sCrobatAnims_11_4,
	sCrobatAnims_11_5,
	sCrobatAnims_11_6,
	sCrobatAnims_11_7,
	sCrobatAnims_11_8,
};

static const ax_anim *const sCrobatAnimTable12[] = {
	gAxSharedAnim_01147,
	gAxSharedAnim_01230,
	gAxSharedAnim_01208,
	gAxSharedAnim_01194,
	gAxSharedAnim_01193,
	gAxSharedAnim_01181,
	gAxSharedAnim_01161,
	gAxSharedAnim_01148,
};

static const ax_anim *const sCrobatAnimTable13[] = {
	gAxSharedAnim_01242,
	gAxSharedAnim_01323,
	gAxSharedAnim_01314,
	gAxSharedAnim_01301,
	gAxSharedAnim_01286,
	gAxSharedAnim_01278,
	gAxSharedAnim_01267,
	gAxSharedAnim_01253,
};

static const ax_anim *const *const sAxAnimationsCrobat[] = {
	sCrobatAnimTable1,
	sCrobatAnimTable2,
	sCrobatAnimTable3,
	sCrobatAnimTable4,
	sCrobatAnimTable5,
	sCrobatAnimTable6,
	sCrobatAnimTable7,
	sCrobatAnimTable8,
	sCrobatAnimTable9,
	sCrobatAnimTable10,
	sCrobatAnimTable11,
	sCrobatAnimTable12,
	sCrobatAnimTable13,
};

static const ax_sprite *const sAxSpritesCrobat[] = {
	sCrobatSprites1,
	sCrobatSprites2,
	sCrobatSprites3,
	sCrobatSprites4,
	sCrobatSprites5,
	sCrobatSprites6,
	sCrobatSprites7,
	sCrobatSprites8,
	sCrobatSprites9,
	sCrobatSprites10,
	sCrobatSprites11,
	sCrobatSprites12,
	sCrobatSprites13,
	sCrobatSprites14,
	sCrobatSprites15,
	sCrobatSprites16,
	sCrobatSprites17,
	sCrobatSprites18,
	sCrobatSprites19,
	sCrobatSprites20,
	sCrobatSprites21,
	sCrobatSprites22,
	sCrobatSprites23,
	sCrobatSprites24,
	sCrobatSprites25,
	sCrobatSprites26,
	sCrobatSprites27,
	sCrobatSprites28,
	sCrobatSprites29,
	sCrobatSprites30,
	sCrobatSprites31,
	sCrobatSprites32,
	sCrobatSprites33,
	sCrobatSprites34,
	sCrobatSprites35,
	sCrobatSprites36,
	sCrobatSprites37,
	sCrobatSprites38,
	sCrobatSprites39,
	sCrobatSprites40,
};

static const axmain sAxMainCrobat = {
	.poses = sAxPosesCrobat,
	.animations = sAxAnimationsCrobat,
	.animCount = ARRAY_COUNT(sAxAnimationsCrobat),
	.spriteData = sAxSpritesCrobat,
	.positions = sAxPositionsCrobat,
};
