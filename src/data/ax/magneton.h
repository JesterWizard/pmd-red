/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainMagneton;
const SiroArchive gAxMagneton = {"SIRO", &sAxMainMagneton};

static const ax_pose sMagnetonPose1[] = {
	AX_POSE(0, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose2[] = {
	AX_POSE(1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose4[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose5[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose6[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose7[] = {
	AX_POSE(6, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose8[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose9[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose10[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose11[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose12[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose13[] = {
	AX_POSE(12, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose14[] = {
	AX_POSE(13, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose15[] = {
	AX_POSE(14, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose16[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose17[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose18[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose19[] = {
	AX_POSE(6, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose20[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose21[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose22[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose23[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose24[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose74[] = {
	AX_POSE(15, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose75[] = {
	AX_POSE(16, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose77[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose78[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose80[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose81[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose83[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose84[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose86[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose87[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose89[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose90[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose92[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose93[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose95[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose96[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose121[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose122[] = {
	AX_POSE(26, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose123[] = {
	AX_POSE(27, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose124[] = {
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose125[] = {
	AX_POSE(29, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose126[] = {
	AX_POSE(30, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose127[] = {
	AX_POSE(31, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose128[] = {
	AX_POSE(30, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose129[] = {
	AX_POSE(29, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnetonPose130[] = {
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_anim sMagnetonAnims_1_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 1, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 2, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 1, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 1, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 2, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 1, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_1_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 4, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 5, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 4, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 4, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 5, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 4, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_1_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 7, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 8, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 7, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 7, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 8, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 7, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_1_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 10, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 11, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 10, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 10, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 11, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 10, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_1_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 14, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 13, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 13, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 14, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 13, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_1_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 16, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 17, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 16, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 16, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 17, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 16, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_1_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 19, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 20, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 19, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 19, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 20, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 19, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_1_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 22, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 23, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 22, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 22, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 23, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 22, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 26, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 24, .offset = {1, 20}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {1, 20}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 27, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 29, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {21, 20}, .shadow = {21, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 27, .offset = {22, 19}, .shadow = {22, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {21, 20}, .shadow = {21, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {22, 19}, .shadow = {22, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 32, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {22, 0}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 30, .offset = {22, -1}, .shadow = {22, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {22, 0}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {22, -1}, .shadow = {22, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 35, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {13, -12}, .shadow = {13, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {20, -17}, .shadow = {20, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 33, .offset = {21, -16}, .shadow = {21, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {20, -17}, .shadow = {20, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {21, -16}, .shadow = {21, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 38, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -9}, .shadow = {0, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -17}, .shadow = {0, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 36, .offset = {1, -17}, .shadow = {1, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -17}, .shadow = {0, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {1, -17}, .shadow = {1, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 41, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {-13, -12}, .shadow = {-13, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-20, -17}, .shadow = {-20, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {-21, -16}, .shadow = {-21, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-20, -17}, .shadow = {-20, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-21, -16}, .shadow = {-21, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 44, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-22, 0}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 42, .offset = {-22, -1}, .shadow = {-22, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-22, 0}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-22, -1}, .shadow = {-22, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 47, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-21, 20}, .shadow = {-21, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 45, .offset = {-22, 19}, .shadow = {-22, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-21, 20}, .shadow = {-21, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-22, 19}, .shadow = {-22, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 48, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 50, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 48, .offset = {1, 20}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, 20}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 51, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 53, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {21, 20}, .shadow = {21, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {22, 19}, .shadow = {22, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {21, 20}, .shadow = {21, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {22, 19}, .shadow = {22, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 56, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {22, 0}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 54, .offset = {22, -1}, .shadow = {22, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {22, 0}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {22, -1}, .shadow = {22, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 57, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 59, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {13, -12}, .shadow = {13, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {20, -17}, .shadow = {20, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 57, .offset = {21, -16}, .shadow = {21, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {20, -17}, .shadow = {20, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {21, -16}, .shadow = {21, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 62, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, -9}, .shadow = {0, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -17}, .shadow = {0, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 60, .offset = {1, -17}, .shadow = {1, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -17}, .shadow = {0, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {1, -17}, .shadow = {1, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 63, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 65, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {-13, -12}, .shadow = {-13, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-20, -17}, .shadow = {-20, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 63, .offset = {-21, -16}, .shadow = {-21, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-20, -17}, .shadow = {-20, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-21, -16}, .shadow = {-21, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 66, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 68, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-22, 0}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 66, .offset = {-22, -1}, .shadow = {-22, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-22, 0}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-22, -1}, .shadow = {-22, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 71, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-21, 20}, .shadow = {-21, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 69, .offset = {-22, 19}, .shadow = {-22, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-21, 20}, .shadow = {-21, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-22, 19}, .shadow = {-22, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 73, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 73, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 1, .poseId = 74, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 73, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 76, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 76, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 1, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 76, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 79, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 79, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 80, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 79, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 82, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 82, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 1, .poseId = 83, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 82, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 85, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 85, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 1, .poseId = 86, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 85, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 88, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 88, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 1, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 88, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 91, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 91, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 91, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 94, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 94, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 1, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 96, .offset = {0, -3}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 98, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 98, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 99, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 101, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 101, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 102, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 104, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 104, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 105, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 107, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 107, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 108, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 110, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 1, .poseId = 110, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 111, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 113, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 113, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 116, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 116, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 119, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 119, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {7, 18}, .shadow = {7, 18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 158, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 159, .offset = {-7, 18}, .shadow = {-7, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-8, 9}, .shadow = {-8, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {21, 10}, .shadow = {21, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 157, .offset = {21, 22}, .shadow = {21, 22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 158, .offset = {11, 22}, .shadow = {11, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {3, 17}, .shadow = {3, 17} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {18, -5}, .shadow = {18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 156, .offset = {22, -2}, .shadow = {22, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 157, .offset = {18, 4}, .shadow = {18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {12, 5}, .shadow = {12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {4, -17}, .shadow = {4, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {12, -20}, .shadow = {12, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 155, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 156, .offset = {20, -13}, .shadow = {20, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-7, -16}, .shadow = {-7, -16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 154, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 155, .offset = {7, -16}, .shadow = {7, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {9, -10}, .shadow = {9, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {-4, -17}, .shadow = {-4, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {-12, -20}, .shadow = {-12, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 161, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 160, .offset = {-20, -13}, .shadow = {-20, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-18, -5}, .shadow = {-18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 160, .offset = {-22, -2}, .shadow = {-22, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 159, .offset = {-18, 4}, .shadow = {-18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {-12, 5}, .shadow = {-12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-21, 10}, .shadow = {-21, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 159, .offset = {-21, 22}, .shadow = {-21, 22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 158, .offset = {-11, 22}, .shadow = {-11, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {-3, 17}, .shadow = {-3, 17} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 171, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 171, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 172, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 172, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 172, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 174, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 174, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 175, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 175, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 175, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 177, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 177, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 178, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 178, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 178, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 180, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 180, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 180, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 181, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 181, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 181, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 181, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 183, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 183, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 183, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 184, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 184, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 184, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 184, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 186, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 186, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 187, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 187, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 187, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 189, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 189, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 190, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 190, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 190, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 192, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 192, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 193, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 193, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 193, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_12_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 194, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 194, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnetonAnims_12_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sMagnetonGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_1.4bpp.lz");
static const ax_sprite sMagnetonSprites1[] = {
	{sMagnetonGfx1, ARRAY_COUNT(sMagnetonGfx1)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_2.4bpp.lz");
static const ax_sprite sMagnetonSprites2[] = {
	{sMagnetonGfx2, ARRAY_COUNT(sMagnetonGfx2)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_3.4bpp.lz");
static const ax_sprite sMagnetonSprites3[] = {
	{sMagnetonGfx3, ARRAY_COUNT(sMagnetonGfx3)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_4.4bpp.lz");
static const ax_sprite sMagnetonSprites4[] = {
	{sMagnetonGfx4, ARRAY_COUNT(sMagnetonGfx4)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_5.4bpp.lz");
static const ax_sprite sMagnetonSprites5[] = {
	{sMagnetonGfx5, ARRAY_COUNT(sMagnetonGfx5)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_6.4bpp.lz");
static const ax_sprite sMagnetonSprites6[] = {
	{sMagnetonGfx6, ARRAY_COUNT(sMagnetonGfx6)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_7.4bpp.lz");
static const ax_sprite sMagnetonSprites7[] = {
	{sMagnetonGfx7, ARRAY_COUNT(sMagnetonGfx7)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_8.4bpp.lz");
static const ax_sprite sMagnetonSprites8[] = {
	{sMagnetonGfx8, ARRAY_COUNT(sMagnetonGfx8)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_9.4bpp.lz");
static const ax_sprite sMagnetonSprites9[] = {
	{sMagnetonGfx9, ARRAY_COUNT(sMagnetonGfx9)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_10.4bpp.lz");
static const ax_sprite sMagnetonSprites10[] = {
	{sMagnetonGfx10, ARRAY_COUNT(sMagnetonGfx10)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_11.4bpp.lz");
static const ax_sprite sMagnetonSprites11[] = {
	{sMagnetonGfx11, ARRAY_COUNT(sMagnetonGfx11)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_12.4bpp.lz");
static const ax_sprite sMagnetonSprites12[] = {
	{sMagnetonGfx12, ARRAY_COUNT(sMagnetonGfx12)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_13.4bpp.lz");
static const ax_sprite sMagnetonSprites13[] = {
	{sMagnetonGfx13, ARRAY_COUNT(sMagnetonGfx13)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_14.4bpp.lz");
static const ax_sprite sMagnetonSprites14[] = {
	{sMagnetonGfx14, ARRAY_COUNT(sMagnetonGfx14)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_15.4bpp.lz");
static const ax_sprite sMagnetonSprites15[] = {
	{sMagnetonGfx15, ARRAY_COUNT(sMagnetonGfx15)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_16.4bpp.lz");
static const u8 sMagnetonGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_16_1.4bpp.lz");
static const u8 sMagnetonGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_16_2.4bpp.lz");
static const ax_sprite sMagnetonSprites16[] = {
	{NULL, 32}, 
	{sMagnetonGfx16, ARRAY_COUNT(sMagnetonGfx16)}, 
	{NULL, 64}, 
	{sMagnetonGfx16_1, ARRAY_COUNT(sMagnetonGfx16_1)}, 
	{NULL, 32}, 
	{sMagnetonGfx16_2, ARRAY_COUNT(sMagnetonGfx16_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_17.4bpp.lz");
static const u8 sMagnetonGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_17_1.4bpp.lz");
static const ax_sprite sMagnetonSprites17[] = {
	{NULL, 32}, 
	{sMagnetonGfx17, ARRAY_COUNT(sMagnetonGfx17)}, 
	{NULL, 64}, 
	{sMagnetonGfx17_1, ARRAY_COUNT(sMagnetonGfx17_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_18.4bpp.lz");
static const u8 sMagnetonGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_18_1.4bpp.lz");
static const u8 sMagnetonGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_18_2.4bpp.lz");
static const ax_sprite sMagnetonSprites18[] = {
	{sMagnetonGfx18, ARRAY_COUNT(sMagnetonGfx18)}, 
	{NULL, 32}, 
	{sMagnetonGfx18_1, ARRAY_COUNT(sMagnetonGfx18_1)}, 
	{NULL, 32}, 
	{sMagnetonGfx18_2, ARRAY_COUNT(sMagnetonGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_19.4bpp.lz");
static const u8 sMagnetonGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_19_1.4bpp.lz");
static const u8 sMagnetonGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_19_2.4bpp.lz");
static const ax_sprite sMagnetonSprites19[] = {
	{sMagnetonGfx19, ARRAY_COUNT(sMagnetonGfx19)}, 
	{NULL, 32}, 
	{sMagnetonGfx19_1, ARRAY_COUNT(sMagnetonGfx19_1)}, 
	{NULL, 32}, 
	{sMagnetonGfx19_2, ARRAY_COUNT(sMagnetonGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_20.4bpp.lz");
static const u8 sMagnetonGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_20_1.4bpp.lz");
static const u8 sMagnetonGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_20_2.4bpp.lz");
static const u8 sMagnetonGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_20_3.4bpp.lz");
static const ax_sprite sMagnetonSprites20[] = {
	{sMagnetonGfx20, ARRAY_COUNT(sMagnetonGfx20)}, 
	{NULL, 64}, 
	{sMagnetonGfx20_1, ARRAY_COUNT(sMagnetonGfx20_1)}, 
	{NULL, 64}, 
	{sMagnetonGfx20_2, ARRAY_COUNT(sMagnetonGfx20_2)}, 
	{NULL, 32}, 
	{sMagnetonGfx20_3, ARRAY_COUNT(sMagnetonGfx20_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_21.4bpp.lz");
static const u8 sMagnetonGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_21_1.4bpp.lz");
static const u8 sMagnetonGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_21_2.4bpp.lz");
static const u8 sMagnetonGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_21_3.4bpp.lz");
static const ax_sprite sMagnetonSprites21[] = {
	{sMagnetonGfx21, ARRAY_COUNT(sMagnetonGfx21)}, 
	{NULL, 64}, 
	{sMagnetonGfx21_1, ARRAY_COUNT(sMagnetonGfx21_1)}, 
	{NULL, 32}, 
	{sMagnetonGfx21_2, ARRAY_COUNT(sMagnetonGfx21_2)}, 
	{NULL, 64}, 
	{sMagnetonGfx21_3, ARRAY_COUNT(sMagnetonGfx21_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_22.4bpp.lz");
static const u8 sMagnetonGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_22_1.4bpp.lz");
static const u8 sMagnetonGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_22_2.4bpp.lz");
static const ax_sprite sMagnetonSprites22[] = {
	{sMagnetonGfx22, ARRAY_COUNT(sMagnetonGfx22)}, 
	{NULL, 32}, 
	{sMagnetonGfx22_1, ARRAY_COUNT(sMagnetonGfx22_1)}, 
	{NULL, 32}, 
	{sMagnetonGfx22_2, ARRAY_COUNT(sMagnetonGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_23.4bpp.lz");
static const u8 sMagnetonGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_23_1.4bpp.lz");
static const u8 sMagnetonGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_23_2.4bpp.lz");
static const ax_sprite sMagnetonSprites23[] = {
	{NULL, 32}, 
	{sMagnetonGfx23, ARRAY_COUNT(sMagnetonGfx23)}, 
	{NULL, 32}, 
	{sMagnetonGfx23_1, ARRAY_COUNT(sMagnetonGfx23_1)}, 
	{NULL, 32}, 
	{sMagnetonGfx23_2, ARRAY_COUNT(sMagnetonGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_24.4bpp.lz");
static const u8 sMagnetonGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_24_1.4bpp.lz");
static const ax_sprite sMagnetonSprites24[] = {
	{NULL, 32}, 
	{sMagnetonGfx24, ARRAY_COUNT(sMagnetonGfx24)}, 
	{NULL, 32}, 
	{sMagnetonGfx24_1, ARRAY_COUNT(sMagnetonGfx24_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_25.4bpp.lz");
static const u8 sMagnetonGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_25_1.4bpp.lz");
static const ax_sprite sMagnetonSprites25[] = {
	{NULL, 32}, 
	{sMagnetonGfx25, ARRAY_COUNT(sMagnetonGfx25)}, 
	{NULL, 32}, 
	{sMagnetonGfx25_1, ARRAY_COUNT(sMagnetonGfx25_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_26.4bpp.lz");
static const ax_sprite sMagnetonSprites26[] = {
	{sMagnetonGfx26, ARRAY_COUNT(sMagnetonGfx26)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_27.4bpp.lz");
static const ax_sprite sMagnetonSprites27[] = {
	{sMagnetonGfx27, ARRAY_COUNT(sMagnetonGfx27)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_28.4bpp.lz");
static const ax_sprite sMagnetonSprites28[] = {
	{sMagnetonGfx28, ARRAY_COUNT(sMagnetonGfx28)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_29.4bpp.lz");
static const ax_sprite sMagnetonSprites29[] = {
	{sMagnetonGfx29, ARRAY_COUNT(sMagnetonGfx29)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_30.4bpp.lz");
static const ax_sprite sMagnetonSprites30[] = {
	{sMagnetonGfx30, ARRAY_COUNT(sMagnetonGfx30)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_31.4bpp.lz");
static const ax_sprite sMagnetonSprites31[] = {
	{sMagnetonGfx31, ARRAY_COUNT(sMagnetonGfx31)}, 
	{NULL, 0}
};
static const u8 sMagnetonGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magneton/sprite_32.4bpp.lz");
static const ax_sprite sMagnetonSprites32[] = {
	{sMagnetonGfx32, ARRAY_COUNT(sMagnetonGfx32)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesMagneton[] = {
	sMagnetonPose1,
	sMagnetonPose2,
	sMagnetonPose3,
	sMagnetonPose4,
	sMagnetonPose5,
	sMagnetonPose6,
	sMagnetonPose7,
	sMagnetonPose8,
	sMagnetonPose9,
	sMagnetonPose10,
	sMagnetonPose11,
	sMagnetonPose12,
	sMagnetonPose13,
	sMagnetonPose14,
	sMagnetonPose15,
	sMagnetonPose16,
	sMagnetonPose17,
	sMagnetonPose18,
	sMagnetonPose19,
	sMagnetonPose20,
	sMagnetonPose21,
	sMagnetonPose22,
	sMagnetonPose23,
	sMagnetonPose24,
	sMagnetonPose1,
	sMagnetonPose2,
	sMagnetonPose3,
	sMagnetonPose4,
	sMagnetonPose5,
	sMagnetonPose6,
	sMagnetonPose7,
	sMagnetonPose8,
	sMagnetonPose9,
	sMagnetonPose10,
	sMagnetonPose11,
	sMagnetonPose12,
	sMagnetonPose13,
	sMagnetonPose14,
	sMagnetonPose15,
	sMagnetonPose16,
	sMagnetonPose17,
	sMagnetonPose18,
	sMagnetonPose19,
	sMagnetonPose20,
	sMagnetonPose21,
	sMagnetonPose22,
	sMagnetonPose23,
	sMagnetonPose24,
	sMagnetonPose1,
	sMagnetonPose2,
	sMagnetonPose3,
	sMagnetonPose4,
	sMagnetonPose5,
	sMagnetonPose6,
	sMagnetonPose7,
	sMagnetonPose8,
	sMagnetonPose9,
	sMagnetonPose10,
	sMagnetonPose11,
	sMagnetonPose12,
	sMagnetonPose13,
	sMagnetonPose14,
	sMagnetonPose15,
	sMagnetonPose16,
	sMagnetonPose17,
	sMagnetonPose18,
	sMagnetonPose19,
	sMagnetonPose20,
	sMagnetonPose21,
	sMagnetonPose22,
	sMagnetonPose23,
	sMagnetonPose24,
	sMagnetonPose1,
	sMagnetonPose74,
	sMagnetonPose75,
	sMagnetonPose4,
	sMagnetonPose77,
	sMagnetonPose78,
	sMagnetonPose7,
	sMagnetonPose80,
	sMagnetonPose81,
	sMagnetonPose10,
	sMagnetonPose83,
	sMagnetonPose84,
	sMagnetonPose13,
	sMagnetonPose86,
	sMagnetonPose87,
	sMagnetonPose16,
	sMagnetonPose89,
	sMagnetonPose90,
	sMagnetonPose19,
	sMagnetonPose92,
	sMagnetonPose93,
	sMagnetonPose22,
	sMagnetonPose95,
	sMagnetonPose96,
	sMagnetonPose1,
	sMagnetonPose74,
	sMagnetonPose75,
	sMagnetonPose4,
	sMagnetonPose77,
	sMagnetonPose78,
	sMagnetonPose7,
	sMagnetonPose80,
	sMagnetonPose81,
	sMagnetonPose10,
	sMagnetonPose83,
	sMagnetonPose84,
	sMagnetonPose13,
	sMagnetonPose86,
	sMagnetonPose87,
	sMagnetonPose16,
	sMagnetonPose89,
	sMagnetonPose90,
	sMagnetonPose19,
	sMagnetonPose92,
	sMagnetonPose93,
	sMagnetonPose22,
	sMagnetonPose95,
	sMagnetonPose96,
	sMagnetonPose121,
	sMagnetonPose122,
	sMagnetonPose123,
	sMagnetonPose124,
	sMagnetonPose125,
	sMagnetonPose126,
	sMagnetonPose127,
	sMagnetonPose128,
	sMagnetonPose129,
	sMagnetonPose130,
	sMagnetonPose1,
	sMagnetonPose2,
	sMagnetonPose3,
	sMagnetonPose4,
	sMagnetonPose5,
	sMagnetonPose6,
	sMagnetonPose7,
	sMagnetonPose8,
	sMagnetonPose9,
	sMagnetonPose10,
	sMagnetonPose11,
	sMagnetonPose12,
	sMagnetonPose13,
	sMagnetonPose14,
	sMagnetonPose15,
	sMagnetonPose16,
	sMagnetonPose17,
	sMagnetonPose18,
	sMagnetonPose19,
	sMagnetonPose20,
	sMagnetonPose21,
	sMagnetonPose22,
	sMagnetonPose23,
	sMagnetonPose24,
	sMagnetonPose1,
	sMagnetonPose22,
	sMagnetonPose19,
	sMagnetonPose16,
	sMagnetonPose13,
	sMagnetonPose10,
	sMagnetonPose7,
	sMagnetonPose4,
	sMagnetonPose1,
	sMagnetonPose4,
	sMagnetonPose7,
	sMagnetonPose10,
	sMagnetonPose13,
	sMagnetonPose16,
	sMagnetonPose19,
	sMagnetonPose22,
	sMagnetonPose1,
	sMagnetonPose2,
	sMagnetonPose3,
	sMagnetonPose4,
	sMagnetonPose5,
	sMagnetonPose6,
	sMagnetonPose7,
	sMagnetonPose8,
	sMagnetonPose9,
	sMagnetonPose10,
	sMagnetonPose11,
	sMagnetonPose12,
	sMagnetonPose13,
	sMagnetonPose14,
	sMagnetonPose15,
	sMagnetonPose16,
	sMagnetonPose17,
	sMagnetonPose18,
	sMagnetonPose19,
	sMagnetonPose20,
	sMagnetonPose21,
	sMagnetonPose22,
	sMagnetonPose23,
	sMagnetonPose24,
	sMagnetonPose1,
	sMagnetonPose22,
	sMagnetonPose19,
	sMagnetonPose16,
	sMagnetonPose13,
	sMagnetonPose10,
	sMagnetonPose7,
	sMagnetonPose4,
	sMagnetonPose1,
	sMagnetonPose22,
	sMagnetonPose19,
	sMagnetonPose16,
	sMagnetonPose13,
	sMagnetonPose10,
	sMagnetonPose7,
	sMagnetonPose4,
};

static const struct PositionSets sAxPositionsMagneton[] = {
	[0] = { .set = { {0, -10}, {-8, -18}, {8, -18}, {0, -9} } },
	[1] = { .set = { {0, -12}, {-8, -16}, {8, -16}, {0, -11} } },
	[2] = { .set = { {0, -13}, {-8, -14}, {8, -14}, {0, -12} } },
	[3] = { .set = { {1, -10}, {4, -19}, {-7, -16}, {1, -9} } },
	[4] = { .set = { {1, -11}, {5, -19}, {-7, -13}, {1, -10} } },
	[5] = { .set = { {1, -12}, {5, -17}, {-6, -12}, {1, -11} } },
	[6] = { .set = { {2, -10}, {5, -15}, {-4, -14}, {1, -9} } },
	[7] = { .set = { {2, -11}, {5, -15}, {-4, -13}, {2, -10} } },
	[8] = { .set = { {2, -12}, {4, -15}, {-4, -12}, {2, -11} } },
	[9] = { .set = { {2, -12}, {-4, -20}, {5, -16}, {0, -10} } },
	[10] = { .set = { {2, -13}, {-5, -19}, {5, -14}, {-1, -11} } },
	[11] = { .set = { {1, -13}, {-5, -18}, {4, -13}, {-1, -12} } },
	[12] = { .set = { {0, -12}, {8, -18}, {-8, -18}, {0, -10} } },
	[13] = { .set = { {0, -13}, {8, -16}, {-8, -16}, {0, -11} } },
	[14] = { .set = { {0, -14}, {8, -14}, {-8, -14}, {0, -12} } },
	[15] = { .set = { {-2, -12}, {4, -20}, {-5, -16}, {0, -10} } },
	[16] = { .set = { {-2, -13}, {5, -19}, {-5, -14}, {1, -11} } },
	[17] = { .set = { {-1, -13}, {5, -18}, {-4, -13}, {1, -12} } },
	[18] = { .set = { {-2, -10}, {-5, -15}, {4, -14}, {-1, -9} } },
	[19] = { .set = { {-2, -11}, {-5, -15}, {4, -13}, {-2, -10} } },
	[20] = { .set = { {-2, -12}, {-4, -15}, {4, -12}, {-2, -11} } },
	[21] = { .set = { {-1, -10}, {-4, -19}, {7, -16}, {-1, -9} } },
	[22] = { .set = { {-1, -11}, {-5, -19}, {7, -13}, {-1, -10} } },
	[23] = { .set = { {-1, -12}, {-5, -17}, {6, -12}, {-1, -11} } },
	[24] = { .set = { {0, -10}, {-8, -18}, {8, -18}, {0, -9} } },
	[25] = { .set = { {0, -12}, {-8, -16}, {8, -16}, {0, -11} } },
	[26] = { .set = { {0, -13}, {-8, -14}, {8, -14}, {0, -12} } },
	[27] = { .set = { {1, -10}, {4, -19}, {-7, -16}, {1, -9} } },
	[28] = { .set = { {1, -11}, {5, -19}, {-7, -13}, {1, -10} } },
	[29] = { .set = { {1, -12}, {5, -17}, {-6, -12}, {1, -11} } },
	[30] = { .set = { {2, -10}, {5, -15}, {-4, -14}, {1, -9} } },
	[31] = { .set = { {2, -11}, {5, -15}, {-4, -13}, {2, -10} } },
	[32] = { .set = { {2, -12}, {4, -15}, {-4, -12}, {2, -11} } },
	[33] = { .set = { {2, -12}, {-4, -20}, {5, -16}, {0, -10} } },
	[34] = { .set = { {2, -13}, {-5, -19}, {5, -14}, {-1, -11} } },
	[35] = { .set = { {1, -13}, {-5, -18}, {4, -13}, {-1, -12} } },
	[36] = { .set = { {0, -12}, {8, -18}, {-8, -18}, {0, -10} } },
	[37] = { .set = { {0, -13}, {8, -16}, {-8, -16}, {0, -11} } },
	[38] = { .set = { {0, -14}, {8, -14}, {-8, -14}, {0, -12} } },
	[39] = { .set = { {-2, -12}, {4, -20}, {-5, -16}, {0, -10} } },
	[40] = { .set = { {-2, -13}, {5, -19}, {-5, -14}, {1, -11} } },
	[41] = { .set = { {-1, -13}, {5, -18}, {-4, -13}, {1, -12} } },
	[42] = { .set = { {-2, -10}, {-5, -15}, {4, -14}, {-1, -9} } },
	[43] = { .set = { {-2, -11}, {-5, -15}, {4, -13}, {-2, -10} } },
	[44] = { .set = { {-2, -12}, {-4, -15}, {4, -12}, {-2, -11} } },
	[45] = { .set = { {-1, -10}, {-4, -19}, {7, -16}, {-1, -9} } },
	[46] = { .set = { {-1, -11}, {-5, -19}, {7, -13}, {-1, -10} } },
	[47] = { .set = { {-1, -12}, {-5, -17}, {6, -12}, {-1, -11} } },
	[48] = { .set = { {0, -10}, {-8, -18}, {8, -18}, {0, -9} } },
	[49] = { .set = { {0, -12}, {-8, -16}, {8, -16}, {0, -11} } },
	[50] = { .set = { {0, -13}, {-8, -14}, {8, -14}, {0, -12} } },
	[51] = { .set = { {1, -10}, {4, -19}, {-7, -16}, {1, -9} } },
	[52] = { .set = { {1, -11}, {5, -19}, {-7, -13}, {1, -10} } },
	[53] = { .set = { {1, -12}, {5, -17}, {-6, -12}, {1, -11} } },
	[54] = { .set = { {2, -10}, {5, -15}, {-4, -14}, {1, -9} } },
	[55] = { .set = { {2, -11}, {5, -15}, {-4, -13}, {2, -10} } },
	[56] = { .set = { {2, -12}, {4, -15}, {-4, -12}, {2, -11} } },
	[57] = { .set = { {2, -12}, {-4, -20}, {5, -16}, {0, -10} } },
	[58] = { .set = { {2, -13}, {-5, -19}, {5, -14}, {-1, -11} } },
	[59] = { .set = { {1, -13}, {-5, -18}, {4, -13}, {-1, -12} } },
	[60] = { .set = { {0, -12}, {8, -18}, {-8, -18}, {0, -10} } },
	[61] = { .set = { {0, -13}, {8, -16}, {-8, -16}, {0, -11} } },
	[62] = { .set = { {0, -14}, {8, -14}, {-8, -14}, {0, -12} } },
	[63] = { .set = { {-2, -12}, {4, -20}, {-5, -16}, {0, -10} } },
	[64] = { .set = { {-2, -13}, {5, -19}, {-5, -14}, {1, -11} } },
	[65] = { .set = { {-1, -13}, {5, -18}, {-4, -13}, {1, -12} } },
	[66] = { .set = { {-2, -10}, {-5, -15}, {4, -14}, {-1, -9} } },
	[67] = { .set = { {-2, -11}, {-5, -15}, {4, -13}, {-2, -10} } },
	[68] = { .set = { {-2, -12}, {-4, -15}, {4, -12}, {-2, -11} } },
	[69] = { .set = { {-1, -10}, {-4, -19}, {7, -16}, {-1, -9} } },
	[70] = { .set = { {-1, -11}, {-5, -19}, {7, -13}, {-1, -10} } },
	[71] = { .set = { {-1, -12}, {-5, -17}, {6, -12}, {-1, -11} } },
	[72] = { .set = { {0, -10}, {-8, -18}, {8, -18}, {0, -9} } },
	[73] = { .set = { {0, -10}, {-6, -11}, {6, -11}, {0, -8} } },
	[74] = { .set = { {0, -10}, {-6, -13}, {6, -13}, {0, -8} } },
	[75] = { .set = { {1, -10}, {4, -19}, {-7, -16}, {1, -9} } },
	[76] = { .set = { {1, -10}, {6, -13}, {-2, -11}, {1, -9} } },
	[77] = { .set = { {1, -10}, {6, -13}, {-4, -13}, {0, -9} } },
	[78] = { .set = { {2, -10}, {5, -15}, {-4, -14}, {1, -9} } },
	[79] = { .set = { {1, -10}, {6, -16}, {0, -12}, {1, -9} } },
	[80] = { .set = { {1, -10}, {5, -14}, {-2, -12}, {1, -9} } },
	[81] = { .set = { {2, -12}, {-4, -20}, {5, -16}, {0, -10} } },
	[82] = { .set = { {1, -12}, {-2, -18}, {6, -16}, {0, -10} } },
	[83] = { .set = { {1, -11}, {-2, -18}, {4, -14}, {-1, -10} } },
	[84] = { .set = { {0, -12}, {8, -18}, {-8, -18}, {0, -10} } },
	[85] = { .set = { {0, -12}, {6, -19}, {-6, -19}, {0, -11} } },
	[86] = { .set = { {0, -12}, {6, -17}, {-6, -17}, {0, -11} } },
	[87] = { .set = { {-2, -12}, {4, -20}, {-5, -16}, {0, -10} } },
	[88] = { .set = { {-1, -12}, {2, -18}, {-6, -16}, {0, -10} } },
	[89] = { .set = { {-1, -11}, {2, -18}, {-4, -14}, {1, -10} } },
	[90] = { .set = { {-2, -10}, {-5, -15}, {4, -14}, {-1, -9} } },
	[91] = { .set = { {-1, -10}, {-6, -16}, {0, -12}, {-1, -9} } },
	[92] = { .set = { {-1, -10}, {-5, -14}, {2, -12}, {-1, -9} } },
	[93] = { .set = { {-1, -10}, {-4, -19}, {7, -16}, {-1, -9} } },
	[94] = { .set = { {-1, -10}, {-6, -13}, {2, -11}, {-1, -9} } },
	[95] = { .set = { {-1, -10}, {-6, -13}, {4, -13}, {0, -9} } },
	[96] = { .set = { {0, -10}, {-8, -18}, {8, -18}, {0, -9} } },
	[97] = { .set = { {0, -10}, {-6, -11}, {6, -11}, {0, -8} } },
	[98] = { .set = { {0, -10}, {-6, -13}, {6, -13}, {0, -8} } },
	[99] = { .set = { {1, -10}, {4, -19}, {-7, -16}, {1, -9} } },
	[100] = { .set = { {1, -10}, {6, -13}, {-2, -11}, {1, -9} } },
	[101] = { .set = { {1, -10}, {6, -13}, {-4, -13}, {0, -9} } },
	[102] = { .set = { {2, -10}, {5, -15}, {-4, -14}, {1, -9} } },
	[103] = { .set = { {1, -10}, {6, -16}, {0, -12}, {1, -9} } },
	[104] = { .set = { {1, -10}, {5, -14}, {-2, -12}, {1, -9} } },
	[105] = { .set = { {2, -12}, {-4, -20}, {5, -16}, {0, -10} } },
	[106] = { .set = { {1, -12}, {-2, -18}, {6, -16}, {0, -10} } },
	[107] = { .set = { {1, -11}, {-2, -18}, {4, -14}, {-1, -10} } },
	[108] = { .set = { {0, -12}, {8, -18}, {-8, -18}, {0, -10} } },
	[109] = { .set = { {0, -12}, {6, -19}, {-6, -19}, {0, -11} } },
	[110] = { .set = { {0, -12}, {6, -17}, {-6, -17}, {0, -11} } },
	[111] = { .set = { {-2, -12}, {4, -20}, {-5, -16}, {0, -10} } },
	[112] = { .set = { {-1, -12}, {2, -18}, {-6, -16}, {0, -10} } },
	[113] = { .set = { {-1, -11}, {2, -18}, {-4, -14}, {1, -10} } },
	[114] = { .set = { {-2, -10}, {-5, -15}, {4, -14}, {-1, -9} } },
	[115] = { .set = { {-1, -10}, {-6, -16}, {0, -12}, {-1, -9} } },
	[116] = { .set = { {-1, -10}, {-5, -14}, {2, -12}, {-1, -9} } },
	[117] = { .set = { {-1, -10}, {-4, -19}, {7, -16}, {-1, -9} } },
	[118] = { .set = { {-1, -10}, {-6, -13}, {2, -11}, {-1, -9} } },
	[119] = { .set = { {-1, -10}, {-6, -13}, {4, -13}, {0, -9} } },
	[120] = { .set = { {0, -12}, {-8, -13}, {8, -13}, {0, -11} } },
	[121] = { .set = { {0, -12}, {-8, -13}, {8, -13}, {0, -11} } },
	[122] = { .set = { {0, -21}, {-5, -18}, {5, -18}, {0, -20} } },
	[123] = { .set = { {2, -18}, {5, -18}, {-4, -17}, {2, -17} } },
	[124] = { .set = { {2, -18}, {3, -19}, {-3, -16}, {0, -14} } },
	[125] = { .set = { {1, -17}, {-6, -19}, {4, -15}, {-1, -14} } },
	[126] = { .set = { {0, -18}, {5, -15}, {-5, -15}, {0, -16} } },
	[127] = { .set = { {-2, -17}, {5, -19}, {-5, -15}, {0, -14} } },
	[128] = { .set = { {-3, -18}, {-4, -19}, {2, -16}, {-1, -14} } },
	[129] = { .set = { {-3, -18}, {-6, -18}, {3, -17}, {-3, -17} } },
	[130] = { .set = { {0, -10}, {-8, -18}, {8, -18}, {0, -9} } },
	[131] = { .set = { {0, -12}, {-8, -16}, {8, -16}, {0, -11} } },
	[132] = { .set = { {0, -13}, {-8, -14}, {8, -14}, {0, -12} } },
	[133] = { .set = { {1, -10}, {4, -19}, {-7, -16}, {1, -9} } },
	[134] = { .set = { {1, -11}, {5, -19}, {-7, -13}, {1, -10} } },
	[135] = { .set = { {1, -12}, {5, -17}, {-6, -12}, {1, -11} } },
	[136] = { .set = { {2, -10}, {5, -15}, {-4, -14}, {1, -9} } },
	[137] = { .set = { {2, -11}, {5, -15}, {-4, -13}, {2, -10} } },
	[138] = { .set = { {2, -12}, {4, -15}, {-4, -12}, {2, -11} } },
	[139] = { .set = { {2, -12}, {-4, -20}, {5, -16}, {0, -10} } },
	[140] = { .set = { {2, -13}, {-5, -19}, {5, -14}, {-1, -11} } },
	[141] = { .set = { {1, -13}, {-5, -18}, {4, -13}, {-1, -12} } },
	[142] = { .set = { {0, -12}, {8, -18}, {-8, -18}, {0, -10} } },
	[143] = { .set = { {0, -13}, {8, -16}, {-8, -16}, {0, -11} } },
	[144] = { .set = { {0, -14}, {8, -14}, {-8, -14}, {0, -12} } },
	[145] = { .set = { {-2, -12}, {4, -20}, {-5, -16}, {0, -10} } },
	[146] = { .set = { {-2, -13}, {5, -19}, {-5, -14}, {1, -11} } },
	[147] = { .set = { {-1, -13}, {5, -18}, {-4, -13}, {1, -12} } },
	[148] = { .set = { {-2, -10}, {-5, -15}, {4, -14}, {-1, -9} } },
	[149] = { .set = { {-2, -11}, {-5, -15}, {4, -13}, {-2, -10} } },
	[150] = { .set = { {-2, -12}, {-4, -15}, {4, -12}, {-2, -11} } },
	[151] = { .set = { {-1, -10}, {-4, -19}, {7, -16}, {-1, -9} } },
	[152] = { .set = { {-1, -11}, {-5, -19}, {7, -13}, {-1, -10} } },
	[153] = { .set = { {-1, -12}, {-5, -17}, {6, -12}, {-1, -11} } },
	[154] = { .set = { {0, -10}, {-8, -18}, {8, -18}, {0, -9} } },
	[155] = { .set = { {-1, -10}, {-4, -19}, {7, -16}, {-1, -9} } },
	[156] = { .set = { {-2, -10}, {-5, -15}, {4, -14}, {-1, -9} } },
	[157] = { .set = { {-2, -12}, {4, -20}, {-5, -16}, {0, -10} } },
	[158] = { .set = { {0, -12}, {8, -18}, {-8, -18}, {0, -10} } },
	[159] = { .set = { {2, -12}, {-4, -20}, {5, -16}, {0, -10} } },
	[160] = { .set = { {2, -10}, {5, -15}, {-4, -14}, {1, -9} } },
	[161] = { .set = { {1, -10}, {4, -19}, {-7, -16}, {1, -9} } },
	[162] = { .set = { {0, -10}, {-8, -18}, {8, -18}, {0, -9} } },
	[163] = { .set = { {1, -10}, {4, -19}, {-7, -16}, {1, -9} } },
	[164] = { .set = { {2, -10}, {5, -15}, {-4, -14}, {1, -9} } },
	[165] = { .set = { {2, -12}, {-4, -20}, {5, -16}, {0, -10} } },
	[166] = { .set = { {0, -12}, {8, -18}, {-8, -18}, {0, -10} } },
	[167] = { .set = { {-2, -12}, {4, -20}, {-5, -16}, {0, -10} } },
	[168] = { .set = { {-2, -10}, {-5, -15}, {4, -14}, {-1, -9} } },
	[169] = { .set = { {-1, -10}, {-4, -19}, {7, -16}, {-1, -9} } },
	[170] = { .set = { {0, -10}, {-8, -18}, {8, -18}, {0, -9} } },
	[171] = { .set = { {0, -12}, {-8, -16}, {8, -16}, {0, -11} } },
	[172] = { .set = { {0, -13}, {-8, -14}, {8, -14}, {0, -12} } },
	[173] = { .set = { {1, -10}, {4, -19}, {-7, -16}, {1, -9} } },
	[174] = { .set = { {1, -11}, {5, -19}, {-7, -13}, {1, -10} } },
	[175] = { .set = { {1, -12}, {5, -17}, {-6, -12}, {1, -11} } },
	[176] = { .set = { {2, -10}, {5, -15}, {-4, -14}, {1, -9} } },
	[177] = { .set = { {2, -11}, {5, -15}, {-4, -13}, {2, -10} } },
	[178] = { .set = { {2, -12}, {4, -15}, {-4, -12}, {2, -11} } },
	[179] = { .set = { {2, -12}, {-4, -20}, {5, -16}, {0, -10} } },
	[180] = { .set = { {2, -13}, {-5, -19}, {5, -14}, {-1, -11} } },
	[181] = { .set = { {1, -13}, {-5, -18}, {4, -13}, {-1, -12} } },
	[182] = { .set = { {0, -12}, {8, -18}, {-8, -18}, {0, -10} } },
	[183] = { .set = { {0, -13}, {8, -16}, {-8, -16}, {0, -11} } },
	[184] = { .set = { {0, -14}, {8, -14}, {-8, -14}, {0, -12} } },
	[185] = { .set = { {-2, -12}, {4, -20}, {-5, -16}, {0, -10} } },
	[186] = { .set = { {-2, -13}, {5, -19}, {-5, -14}, {1, -11} } },
	[187] = { .set = { {-1, -13}, {5, -18}, {-4, -13}, {1, -12} } },
	[188] = { .set = { {-2, -10}, {-5, -15}, {4, -14}, {-1, -9} } },
	[189] = { .set = { {-2, -11}, {-5, -15}, {4, -13}, {-2, -10} } },
	[190] = { .set = { {-2, -12}, {-4, -15}, {4, -12}, {-2, -11} } },
	[191] = { .set = { {-1, -10}, {-4, -19}, {7, -16}, {-1, -9} } },
	[192] = { .set = { {-1, -11}, {-5, -19}, {7, -13}, {-1, -10} } },
	[193] = { .set = { {-1, -12}, {-5, -17}, {6, -12}, {-1, -11} } },
	[194] = { .set = { {0, -10}, {-8, -18}, {8, -18}, {0, -9} } },
	[195] = { .set = { {-1, -10}, {-4, -19}, {7, -16}, {-1, -9} } },
	[196] = { .set = { {-2, -10}, {-5, -15}, {4, -14}, {-1, -9} } },
	[197] = { .set = { {-2, -12}, {4, -20}, {-5, -16}, {0, -10} } },
	[198] = { .set = { {0, -12}, {8, -18}, {-8, -18}, {0, -10} } },
	[199] = { .set = { {2, -12}, {-4, -20}, {5, -16}, {0, -10} } },
	[200] = { .set = { {2, -10}, {5, -15}, {-4, -14}, {1, -9} } },
	[201] = { .set = { {1, -10}, {4, -19}, {-7, -16}, {1, -9} } },
	[202] = { .set = { {0, -10}, {-8, -18}, {8, -18}, {0, -9} } },
	[203] = { .set = { {-1, -10}, {-4, -19}, {7, -16}, {-1, -9} } },
	[204] = { .set = { {-2, -10}, {-5, -15}, {4, -14}, {-1, -9} } },
	[205] = { .set = { {-2, -12}, {4, -20}, {-5, -16}, {0, -10} } },
	[206] = { .set = { {0, -12}, {8, -18}, {-8, -18}, {0, -10} } },
	[207] = { .set = { {2, -12}, {-4, -20}, {5, -16}, {0, -10} } },
	[208] = { .set = { {2, -10}, {5, -15}, {-4, -14}, {1, -9} } },
	[209] = { .set = { {1, -10}, {4, -19}, {-7, -16}, {1, -9} } },
};

static const ax_anim *const sMagnetonAnimTable1[] = {
	sMagnetonAnims_1_1,
	sMagnetonAnims_1_2,
	sMagnetonAnims_1_3,
	sMagnetonAnims_1_4,
	sMagnetonAnims_1_5,
	sMagnetonAnims_1_6,
	sMagnetonAnims_1_7,
	sMagnetonAnims_1_8,
};

static const ax_anim *const sMagnetonAnimTable2[] = {
	sMagnetonAnims_2_1,
	sMagnetonAnims_2_2,
	sMagnetonAnims_2_3,
	sMagnetonAnims_2_4,
	sMagnetonAnims_2_5,
	sMagnetonAnims_2_6,
	sMagnetonAnims_2_7,
	sMagnetonAnims_2_8,
};

static const ax_anim *const sMagnetonAnimTable3[] = {
	sMagnetonAnims_3_1,
	sMagnetonAnims_3_2,
	sMagnetonAnims_3_3,
	sMagnetonAnims_3_4,
	sMagnetonAnims_3_5,
	sMagnetonAnims_3_6,
	sMagnetonAnims_3_7,
	sMagnetonAnims_3_8,
};

static const ax_anim *const sMagnetonAnimTable4[] = {
	sMagnetonAnims_4_1,
	sMagnetonAnims_4_2,
	sMagnetonAnims_4_3,
	sMagnetonAnims_4_4,
	sMagnetonAnims_4_5,
	sMagnetonAnims_4_6,
	sMagnetonAnims_4_7,
	sMagnetonAnims_4_8,
};

static const ax_anim *const sMagnetonAnimTable5[] = {
	sMagnetonAnims_5_1,
	sMagnetonAnims_5_2,
	sMagnetonAnims_5_3,
	sMagnetonAnims_5_4,
	sMagnetonAnims_5_5,
	sMagnetonAnims_5_6,
	sMagnetonAnims_5_7,
	sMagnetonAnims_5_8,
};

static const ax_anim *const sMagnetonAnimTable6[] = {
	gAxSharedAnim_00133,
	gAxSharedAnim_00133,
	gAxSharedAnim_00133,
	gAxSharedAnim_00133,
	gAxSharedAnim_00133,
	gAxSharedAnim_00133,
	gAxSharedAnim_00133,
	gAxSharedAnim_00133,
};

static const ax_anim *const sMagnetonAnimTable7[] = {
	gAxSharedAnim_00330,
	gAxSharedAnim_00340,
	gAxSharedAnim_00348,
	gAxSharedAnim_00356,
	gAxSharedAnim_00368,
	gAxSharedAnim_00376,
	gAxSharedAnim_00383,
	gAxSharedAnim_00390,
};

static const ax_anim *const sMagnetonAnimTable8[] = {
	gAxSharedAnim_00125,
	gAxSharedAnim_00126,
	gAxSharedAnim_00127,
	gAxSharedAnim_00128,
	gAxSharedAnim_00129,
	gAxSharedAnim_00130,
	gAxSharedAnim_00131,
	gAxSharedAnim_00132,
};

static const ax_anim *const sMagnetonAnimTable9[] = {
	sMagnetonAnims_9_1,
	sMagnetonAnims_9_2,
	sMagnetonAnims_9_3,
	sMagnetonAnims_9_4,
	sMagnetonAnims_9_5,
	sMagnetonAnims_9_6,
	sMagnetonAnims_9_7,
	sMagnetonAnims_9_8,
};

static const ax_anim *const sMagnetonAnimTable10[] = {
	gAxSharedAnim_00705,
	gAxSharedAnim_00714,
	gAxSharedAnim_00725,
	gAxSharedAnim_00737,
	gAxSharedAnim_00750,
	gAxSharedAnim_00760,
	gAxSharedAnim_00772,
	gAxSharedAnim_00781,
};

static const ax_anim *const sMagnetonAnimTable11[] = {
	sMagnetonAnims_11_1,
	sMagnetonAnims_11_2,
	sMagnetonAnims_11_3,
	sMagnetonAnims_11_4,
	sMagnetonAnims_11_5,
	sMagnetonAnims_11_6,
	sMagnetonAnims_11_7,
	sMagnetonAnims_11_8,
};

static const ax_anim *const sMagnetonAnimTable12[] = {
	sMagnetonAnims_12_1,
	gAxSharedAnim_01230,
	gAxSharedAnim_01208,
	gAxSharedAnim_01194,
	sMagnetonAnims_12_5,
	gAxSharedAnim_01181,
	gAxSharedAnim_01161,
	gAxSharedAnim_01148,
};

static const ax_anim *const sMagnetonAnimTable13[] = {
	gAxSharedAnim_01242,
	gAxSharedAnim_01323,
	gAxSharedAnim_01314,
	gAxSharedAnim_01301,
	gAxSharedAnim_01286,
	gAxSharedAnim_01278,
	gAxSharedAnim_01267,
	gAxSharedAnim_01253,
};

static const ax_anim *const *const sAxAnimationsMagneton[] = {
	sMagnetonAnimTable1,
	sMagnetonAnimTable2,
	sMagnetonAnimTable3,
	sMagnetonAnimTable4,
	sMagnetonAnimTable5,
	sMagnetonAnimTable6,
	sMagnetonAnimTable7,
	sMagnetonAnimTable8,
	sMagnetonAnimTable9,
	sMagnetonAnimTable10,
	sMagnetonAnimTable11,
	sMagnetonAnimTable12,
	sMagnetonAnimTable13,
};

static const ax_sprite *const sAxSpritesMagneton[] = {
	sMagnetonSprites1,
	sMagnetonSprites2,
	sMagnetonSprites3,
	sMagnetonSprites4,
	sMagnetonSprites5,
	sMagnetonSprites6,
	sMagnetonSprites7,
	sMagnetonSprites8,
	sMagnetonSprites9,
	sMagnetonSprites10,
	sMagnetonSprites11,
	sMagnetonSprites12,
	sMagnetonSprites13,
	sMagnetonSprites14,
	sMagnetonSprites15,
	sMagnetonSprites16,
	sMagnetonSprites17,
	sMagnetonSprites18,
	sMagnetonSprites19,
	sMagnetonSprites20,
	sMagnetonSprites21,
	sMagnetonSprites22,
	sMagnetonSprites23,
	sMagnetonSprites24,
	sMagnetonSprites25,
	sMagnetonSprites26,
	sMagnetonSprites27,
	sMagnetonSprites28,
	sMagnetonSprites29,
	sMagnetonSprites30,
	sMagnetonSprites31,
	sMagnetonSprites32,
};

static const axmain sAxMainMagneton = {
	.poses = sAxPosesMagneton,
	.animations = sAxAnimationsMagneton,
	.animCount = ARRAY_COUNT(sAxAnimationsMagneton),
	.spriteData = sAxSpritesMagneton,
	.positions = sAxPositionsMagneton,
};
