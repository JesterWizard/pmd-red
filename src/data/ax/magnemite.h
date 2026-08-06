/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainMagnemite;
const SiroArchive gAxMagnemite = {"SIRO", &sAxMainMagnemite};

static const ax_pose sMagnemitePose1[] = {
	AX_POSE(0, OAM1(239, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose2[] = {
	AX_POSE(1, OAM1(239, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose3[] = {
	AX_POSE(2, OAM1(239, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose4[] = {
	AX_POSE(3, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose6[] = {
	AX_POSE(5, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose7[] = {
	AX_POSE(6, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose8[] = {
	AX_POSE(7, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose9[] = {
	AX_POSE(8, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose10[] = {
	AX_POSE(9, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose11[] = {
	AX_POSE(10, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose12[] = {
	AX_POSE(11, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose13[] = {
	AX_POSE(12, OAM1(239, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose14[] = {
	AX_POSE(13, OAM1(239, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose15[] = {
	AX_POSE(14, OAM1(239, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose16[] = {
	AX_POSE(15, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose17[] = {
	AX_POSE(16, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose18[] = {
	AX_POSE(17, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose19[] = {
	AX_POSE(18, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose20[] = {
	AX_POSE(19, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose21[] = {
	AX_POSE(20, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose22[] = {
	AX_POSE(21, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose23[] = {
	AX_POSE(22, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose24[] = {
	AX_POSE(23, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose42[] = {
	AX_POSE(24, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose43[] = {
	AX_POSE(25, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose44[] = {
	AX_POSE(26, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose46[] = {
	AX_POSE(27, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose47[] = {
	AX_POSE(28, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose48[] = {
	AX_POSE(29, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose50[] = {
	AX_POSE(30, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose51[] = {
	AX_POSE(31, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose52[] = {
	AX_POSE(32, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose54[] = {
	AX_POSE(33, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose55[] = {
	AX_POSE(34, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose56[] = {
	AX_POSE(35, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose58[] = {
	AX_POSE(36, OAM1(239, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose59[] = {
	AX_POSE(37, OAM1(239, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose60[] = {
	AX_POSE(38, OAM1(239, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose62[] = {
	AX_POSE(39, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose63[] = {
	AX_POSE(40, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose64[] = {
	AX_POSE(41, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose66[] = {
	AX_POSE(42, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose67[] = {
	AX_POSE(43, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose68[] = {
	AX_POSE(44, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose70[] = {
	AX_POSE(45, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose71[] = {
	AX_POSE(46, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose72[] = {
	AX_POSE(47, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose97[] = {
	AX_POSE(48, OAM1(239, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose98[] = {
	AX_POSE(49, OAM1(239, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose99[] = {
	AX_POSE(50, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose100[] = {
	AX_POSE(51, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose101[] = {
	AX_POSE(52, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose102[] = {
	AX_POSE(53, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose103[] = {
	AX_POSE(54, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose104[] = {
	AX_POSE(55, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose105[] = {
	AX_POSE(56, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose106[] = {
	AX_POSE(57, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose188[] = {
	AX_POSE(58, OAM1(240, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMagnemitePose189[] = {
	AX_POSE(59, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_anim sMagnemiteAnims_1_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_1_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_1_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_1_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_1_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_1_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_1_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_1_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, -4}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, -6}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {0, -8}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {0, -8}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {0, -8}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, -8}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, -8}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, -8}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {0, -8}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, -8}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 2, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, 9}, .shadow = {0, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 24, .offset = {1, 23}, .shadow = {1, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {1, 23}, .shadow = {1, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 12}, .shadow = {0, 12} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {-4, -5}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-5, -8}, .shadow = {-5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {-6, -12}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {-6, -12}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {-6, -12}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {-6, -12}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {-6, -12}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {-6, -12}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {-6, -12}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {-6, -12}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 31, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {9, 9}, .shadow = {9, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {23, 23}, .shadow = {23, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 31, .offset = {22, 24}, .shadow = {22, 24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {23, 23}, .shadow = {23, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {22, 24}, .shadow = {22, 24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {12, 12}, .shadow = {12, 12} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {-4, -1}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {-5, -2}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {-6, -4}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {-6, -4}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {-6, -4}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {-6, -4}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {-6, -4}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {-6, -4}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {-6, -4}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {-6, -4}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {9, 0}, .shadow = {9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {23, 0}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 30, .offset = {23, -1}, .shadow = {23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {23, 0}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {23, -1}, .shadow = {23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {12, 0}, .shadow = {12, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {-4, 1}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {-5, 1}, .shadow = {-5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {-6, -1}, .shadow = {-6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {-6, -1}, .shadow = {-6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {-6, -1}, .shadow = {-6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {-6, -1}, .shadow = {-6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {-6, -1}, .shadow = {-6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {-6, -1}, .shadow = {-6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {-6, -1}, .shadow = {-6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {-6, -1}, .shadow = {-6, 6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 29, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {9, -8}, .shadow = {9, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {22, -20}, .shadow = {22, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 29, .offset = {21, -21}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {22, -20}, .shadow = {22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {21, -21}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {12, -12}, .shadow = {12, -12} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {0, 4}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {0, 5}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 6}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 6}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {0, 6}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {0, 6}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 6}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {0, 6}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 2, .poseId = 28, .offset = {0, 0}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {0, -9}, .shadow = {0, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 28, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, -12}, .shadow = {0, -12} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {4, 1}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {5, 1}, .shadow = {5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {6, -1}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {6, -1}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {6, -1}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {6, -1}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {6, -1}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {6, -1}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {6, -1}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {6, -1}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 27, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {-9, -8}, .shadow = {-9, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-22, -20}, .shadow = {-22, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 27, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-22, -20}, .shadow = {-22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-12, -12}, .shadow = {-12, -12} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {4, -1}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {5, -2}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {6, -4}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {6, -4}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {6, -4}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {6, -4}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {6, -4}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {6, -4}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {6, -4}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {6, -4}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 26, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {-9, 0}, .shadow = {-9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-23, 0}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 26, .offset = {-23, -1}, .shadow = {-23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-23, 0}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-23, -1}, .shadow = {-23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-12, 0}, .shadow = {-12, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {4, -5}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {5, -8}, .shadow = {5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {6, -12}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {6, -12}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {6, -12}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {6, -12}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {6, -12}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {6, -12}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {6, -12}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {6, -12}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 25, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {-9, 9}, .shadow = {-9, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {-23, 23}, .shadow = {-23, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 25, .offset = {-22, 24}, .shadow = {-22, 24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {-23, 23}, .shadow = {-23, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {-22, 24}, .shadow = {-22, 24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {-12, 12}, .shadow = {-12, 12} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {0, -4}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -8}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, -8}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {0, -8}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {0, -8}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {0, -8}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {0, -8}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, -8}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {0, -8}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 2, .poseId = 32, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {0, 9}, .shadow = {0, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 32, .offset = {1, 23}, .shadow = {1, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {1, 23}, .shadow = {1, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, 12}, .shadow = {0, 12} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-4, -5}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-5, -8}, .shadow = {-5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {-6, -12}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {-6, -12}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {-6, -12}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {-6, -12}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {-6, -12}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {-6, -12}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {-6, -12}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {-6, -12}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 39, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {9, 9}, .shadow = {9, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {23, 23}, .shadow = {23, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {22, 24}, .shadow = {22, 24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {23, 23}, .shadow = {23, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {22, 24}, .shadow = {22, 24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {12, 12}, .shadow = {12, 12} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {-4, -1}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-5, -2}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {-6, -4}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {-6, -4}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {-6, -4}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {-6, -4}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {-6, -4}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {-6, -4}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {-6, -4}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {-6, -4}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 38, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {9, 0}, .shadow = {9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {23, 0}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 38, .offset = {23, -1}, .shadow = {23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {23, 0}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {23, -1}, .shadow = {23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {12, 0}, .shadow = {12, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-4, 1}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {-5, 1}, .shadow = {-5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {-6, -1}, .shadow = {-6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {-6, -1}, .shadow = {-6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {-6, -1}, .shadow = {-6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {-6, -1}, .shadow = {-6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {-6, -1}, .shadow = {-6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {-6, -1}, .shadow = {-6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {-6, -1}, .shadow = {-6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {-6, -1}, .shadow = {-6, 6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 37, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {9, -8}, .shadow = {9, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {22, -20}, .shadow = {22, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 37, .offset = {21, -21}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {22, -20}, .shadow = {22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {21, -21}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {12, -12}, .shadow = {12, -12} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, 4}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {0, 5}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {0, 6}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {0, 6}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {0, 6}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, 6}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, 6}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {0, 6}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {0, 6}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, 6}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 2, .poseId = 36, .offset = {0, 0}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, -9}, .shadow = {0, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 36, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -12}, .shadow = {0, -12} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {4, 1}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {5, 1}, .shadow = {5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {6, -1}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {6, -1}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {6, -1}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {6, -1}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {6, -1}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {6, -1}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {6, -1}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {6, -1}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 35, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {-9, -8}, .shadow = {-9, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {-22, -20}, .shadow = {-22, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {-22, -20}, .shadow = {-22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {-12, -12}, .shadow = {-12, -12} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {4, -1}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {5, -2}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {6, -4}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {6, -4}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {6, -4}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {6, -4}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {6, -4}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {6, -4}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {6, -4}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {6, -4}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 34, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {-9, 0}, .shadow = {-9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-23, 0}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 34, .offset = {-23, -1}, .shadow = {-23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-23, 0}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-23, -1}, .shadow = {-23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-12, 0}, .shadow = {-12, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {4, -5}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {5, -8}, .shadow = {5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {6, -12}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {6, -12}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {6, -12}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {6, -12}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {6, -12}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {6, -12}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {6, -12}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {6, -12}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 33, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {-9, 9}, .shadow = {-9, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-23, 23}, .shadow = {-23, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 33, .offset = {-22, 24}, .shadow = {-22, 24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-23, 23}, .shadow = {-23, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-22, 24}, .shadow = {-22, 24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-12, 12}, .shadow = {-12, 12} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 2, .poseId = 40, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 42, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 1, .poseId = 43, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 41, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 2, .poseId = 44, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 46, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 1, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 2, .poseId = 48, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 50, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 49, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 2, .poseId = 52, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 54, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 1, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 53, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 2, .poseId = 56, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 58, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 1, .poseId = 59, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 57, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 2, .poseId = 60, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 62, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 1, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 61, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 2, .poseId = 64, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 66, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 65, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 2, .poseId = 68, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 70, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 1, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -2}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 72, .offset = {0, -3}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 74, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 74, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 2}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 75, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 77, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 77, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {2, 2}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 78, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 80, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 80, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 81, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 83, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {2, -2}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 84, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 86, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 1, .poseId = 86, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 87, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 89, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 89, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {-2, -2}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 90, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 92, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 92, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 93, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 95, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-2, 2}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_6_1[] = {
	{ .frames = 20, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 96, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 20, .unkFlags = 0, .poseId = 97, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 97, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_8_1[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 108, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 107, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_8_2[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 111, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 110, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_8_3[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 114, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 113, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_8_4[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 117, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 116, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_8_5[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 120, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 119, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_8_6[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 123, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 122, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_8_7[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 126, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 125, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_8_8[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 129, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 128, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 131, .offset = {6, 4}, .shadow = {6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {7, 19}, .shadow = {7, 19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 134, .offset = {0, 24}, .shadow = {0, 24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 135, .offset = {-7, 19}, .shadow = {-7, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {-8, 9}, .shadow = {-8, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {-6, 4}, .shadow = {-6, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 130, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {24, 9}, .shadow = {24, 9} },
	{ .frames = 3, .unkFlags = 0, .poseId = 133, .offset = {23, 24}, .shadow = {23, 24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 134, .offset = {11, 23}, .shadow = {11, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {2, 12}, .shadow = {2, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 136, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {3, -4}, .shadow = {3, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {19, -4}, .shadow = {19, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 132, .offset = {24, 1}, .shadow = {24, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 133, .offset = {19, 6}, .shadow = {19, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {12, 7}, .shadow = {12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 135, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 136, .offset = {-1, -6}, .shadow = {-1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {12, -23}, .shadow = {12, -23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 131, .offset = {22, -23}, .shadow = {22, -23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 132, .offset = {23, -13}, .shadow = {23, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {16, -6}, .shadow = {16, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 134, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 135, .offset = {-6, -4}, .shadow = {-6, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {-8, -10}, .shadow = {-8, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {-7, -18}, .shadow = {-7, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 130, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 131, .offset = {7, -18}, .shadow = {7, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {8, -8}, .shadow = {8, -8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 133, .offset = {6, -4}, .shadow = {6, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 132, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {-12, -23}, .shadow = {-12, -23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 137, .offset = {-22, -23}, .shadow = {-22, -23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 136, .offset = {-23, -13}, .shadow = {-23, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {-16, -6}, .shadow = {-16, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 134, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 131, .offset = {-3, -4}, .shadow = {-3, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {-19, -4}, .shadow = {-19, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 136, .offset = {-24, 1}, .shadow = {-24, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 135, .offset = {-19, 5}, .shadow = {-19, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {-12, 7}, .shadow = {-12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 133, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 130, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {-24, 9}, .shadow = {-24, 9} },
	{ .frames = 3, .unkFlags = 0, .poseId = 135, .offset = {-23, 24}, .shadow = {-23, 24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 134, .offset = {-11, 23}, .shadow = {-11, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {-2, 12}, .shadow = {-2, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 132, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 148, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 148, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 148, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 147, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 147, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 147, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 147, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 151, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 151, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 151, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 150, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 150, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 150, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 150, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 154, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 154, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 153, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 153, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 153, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 157, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 157, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 156, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 156, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 156, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 160, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 160, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 159, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 159, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 159, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 163, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 163, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 162, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 162, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 162, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 166, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 166, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 165, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 165, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 165, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 169, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 169, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 168, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 168, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 168, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMagnemiteAnims_14_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, 3}, .shadow = {0, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, 2}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, 2}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 188, .offset = {0, 3}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};

static const u8 sMagnemiteGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_1.4bpp.lz");
static const ax_sprite sMagnemiteSprites1[] = {
	{sMagnemiteGfx1, ARRAY_COUNT(sMagnemiteGfx1)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_2.4bpp.lz");
static const ax_sprite sMagnemiteSprites2[] = {
	{sMagnemiteGfx2, ARRAY_COUNT(sMagnemiteGfx2)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_3.4bpp.lz");
static const ax_sprite sMagnemiteSprites3[] = {
	{sMagnemiteGfx3, ARRAY_COUNT(sMagnemiteGfx3)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_4.4bpp.lz");
static const ax_sprite sMagnemiteSprites4[] = {
	{sMagnemiteGfx4, ARRAY_COUNT(sMagnemiteGfx4)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_5.4bpp.lz");
static const ax_sprite sMagnemiteSprites5[] = {
	{sMagnemiteGfx5, ARRAY_COUNT(sMagnemiteGfx5)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_6.4bpp.lz");
static const ax_sprite sMagnemiteSprites6[] = {
	{sMagnemiteGfx6, ARRAY_COUNT(sMagnemiteGfx6)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_7.4bpp.lz");
static const ax_sprite sMagnemiteSprites7[] = {
	{sMagnemiteGfx7, ARRAY_COUNT(sMagnemiteGfx7)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_8.4bpp.lz");
static const ax_sprite sMagnemiteSprites8[] = {
	{sMagnemiteGfx8, ARRAY_COUNT(sMagnemiteGfx8)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_9.4bpp.lz");
static const ax_sprite sMagnemiteSprites9[] = {
	{sMagnemiteGfx9, ARRAY_COUNT(sMagnemiteGfx9)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_10.4bpp.lz");
static const ax_sprite sMagnemiteSprites10[] = {
	{sMagnemiteGfx10, ARRAY_COUNT(sMagnemiteGfx10)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_11.4bpp.lz");
static const ax_sprite sMagnemiteSprites11[] = {
	{sMagnemiteGfx11, ARRAY_COUNT(sMagnemiteGfx11)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_12.4bpp.lz");
static const ax_sprite sMagnemiteSprites12[] = {
	{sMagnemiteGfx12, ARRAY_COUNT(sMagnemiteGfx12)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_13.4bpp.lz");
static const ax_sprite sMagnemiteSprites13[] = {
	{sMagnemiteGfx13, ARRAY_COUNT(sMagnemiteGfx13)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_14.4bpp.lz");
static const ax_sprite sMagnemiteSprites14[] = {
	{sMagnemiteGfx14, ARRAY_COUNT(sMagnemiteGfx14)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_15.4bpp.lz");
static const ax_sprite sMagnemiteSprites15[] = {
	{sMagnemiteGfx15, ARRAY_COUNT(sMagnemiteGfx15)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_16.4bpp.lz");
static const ax_sprite sMagnemiteSprites16[] = {
	{sMagnemiteGfx16, ARRAY_COUNT(sMagnemiteGfx16)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_17.4bpp.lz");
static const ax_sprite sMagnemiteSprites17[] = {
	{sMagnemiteGfx17, ARRAY_COUNT(sMagnemiteGfx17)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_18.4bpp.lz");
static const ax_sprite sMagnemiteSprites18[] = {
	{sMagnemiteGfx18, ARRAY_COUNT(sMagnemiteGfx18)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_19.4bpp.lz");
static const ax_sprite sMagnemiteSprites19[] = {
	{sMagnemiteGfx19, ARRAY_COUNT(sMagnemiteGfx19)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_20.4bpp.lz");
static const ax_sprite sMagnemiteSprites20[] = {
	{sMagnemiteGfx20, ARRAY_COUNT(sMagnemiteGfx20)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_21.4bpp.lz");
static const ax_sprite sMagnemiteSprites21[] = {
	{sMagnemiteGfx21, ARRAY_COUNT(sMagnemiteGfx21)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_22.4bpp.lz");
static const ax_sprite sMagnemiteSprites22[] = {
	{sMagnemiteGfx22, ARRAY_COUNT(sMagnemiteGfx22)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_23.4bpp.lz");
static const ax_sprite sMagnemiteSprites23[] = {
	{sMagnemiteGfx23, ARRAY_COUNT(sMagnemiteGfx23)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_24.4bpp.lz");
static const ax_sprite sMagnemiteSprites24[] = {
	{sMagnemiteGfx24, ARRAY_COUNT(sMagnemiteGfx24)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_25.4bpp.lz");
static const u8 sMagnemiteGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_25_1.4bpp.lz");
static const ax_sprite sMagnemiteSprites25[] = {
	{sMagnemiteGfx25, ARRAY_COUNT(sMagnemiteGfx25)}, 
	{NULL, 64}, 
	{sMagnemiteGfx25_1, ARRAY_COUNT(sMagnemiteGfx25_1)}, 
	{NULL, 320}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_26.4bpp.lz");
static const u8 sMagnemiteGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_26_1.4bpp.lz");
static const ax_sprite sMagnemiteSprites26[] = {
	{sMagnemiteGfx26, ARRAY_COUNT(sMagnemiteGfx26)}, 
	{NULL, 64}, 
	{sMagnemiteGfx26_1, ARRAY_COUNT(sMagnemiteGfx26_1)}, 
	{NULL, 320}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_27.4bpp.lz");
static const ax_sprite sMagnemiteSprites27[] = {
	{sMagnemiteGfx27, ARRAY_COUNT(sMagnemiteGfx27)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_28.4bpp.lz");
static const ax_sprite sMagnemiteSprites28[] = {
	{sMagnemiteGfx28, ARRAY_COUNT(sMagnemiteGfx28)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_29.4bpp.lz");
static const ax_sprite sMagnemiteSprites29[] = {
	{sMagnemiteGfx29, ARRAY_COUNT(sMagnemiteGfx29)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_30.4bpp.lz");
static const ax_sprite sMagnemiteSprites30[] = {
	{sMagnemiteGfx30, ARRAY_COUNT(sMagnemiteGfx30)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_31.4bpp.lz");
static const ax_sprite sMagnemiteSprites31[] = {
	{sMagnemiteGfx31, ARRAY_COUNT(sMagnemiteGfx31)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_32.4bpp.lz");
static const ax_sprite sMagnemiteSprites32[] = {
	{sMagnemiteGfx32, ARRAY_COUNT(sMagnemiteGfx32)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_33.4bpp.lz");
static const ax_sprite sMagnemiteSprites33[] = {
	{sMagnemiteGfx33, ARRAY_COUNT(sMagnemiteGfx33)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_34.4bpp.lz");
static const ax_sprite sMagnemiteSprites34[] = {
	{sMagnemiteGfx34, ARRAY_COUNT(sMagnemiteGfx34)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_35.4bpp.lz");
static const ax_sprite sMagnemiteSprites35[] = {
	{sMagnemiteGfx35, ARRAY_COUNT(sMagnemiteGfx35)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_36.4bpp.lz");
static const ax_sprite sMagnemiteSprites36[] = {
	{sMagnemiteGfx36, ARRAY_COUNT(sMagnemiteGfx36)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_37.4bpp.lz");
static const u8 sMagnemiteGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_37_1.4bpp.lz");
static const ax_sprite sMagnemiteSprites37[] = {
	{sMagnemiteGfx37, ARRAY_COUNT(sMagnemiteGfx37)}, 
	{NULL, 32}, 
	{sMagnemiteGfx37_1, ARRAY_COUNT(sMagnemiteGfx37_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_38.4bpp.lz");
static const u8 sMagnemiteGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_38_1.4bpp.lz");
static const ax_sprite sMagnemiteSprites38[] = {
	{sMagnemiteGfx38, ARRAY_COUNT(sMagnemiteGfx38)}, 
	{NULL, 32}, 
	{sMagnemiteGfx38_1, ARRAY_COUNT(sMagnemiteGfx38_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_39.4bpp.lz");
static const u8 sMagnemiteGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_39_1.4bpp.lz");
static const ax_sprite sMagnemiteSprites39[] = {
	{sMagnemiteGfx39, ARRAY_COUNT(sMagnemiteGfx39)}, 
	{NULL, 32}, 
	{sMagnemiteGfx39_1, ARRAY_COUNT(sMagnemiteGfx39_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_40.4bpp.lz");
static const ax_sprite sMagnemiteSprites40[] = {
	{sMagnemiteGfx40, ARRAY_COUNT(sMagnemiteGfx40)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_41.4bpp.lz");
static const ax_sprite sMagnemiteSprites41[] = {
	{sMagnemiteGfx41, ARRAY_COUNT(sMagnemiteGfx41)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_42.4bpp.lz");
static const ax_sprite sMagnemiteSprites42[] = {
	{sMagnemiteGfx42, ARRAY_COUNT(sMagnemiteGfx42)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_43.4bpp.lz");
static const ax_sprite sMagnemiteSprites43[] = {
	{sMagnemiteGfx43, ARRAY_COUNT(sMagnemiteGfx43)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_44.4bpp.lz");
static const ax_sprite sMagnemiteSprites44[] = {
	{sMagnemiteGfx44, ARRAY_COUNT(sMagnemiteGfx44)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_45.4bpp.lz");
static const ax_sprite sMagnemiteSprites45[] = {
	{sMagnemiteGfx45, ARRAY_COUNT(sMagnemiteGfx45)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_46.4bpp.lz");
static const ax_sprite sMagnemiteSprites46[] = {
	{sMagnemiteGfx46, ARRAY_COUNT(sMagnemiteGfx46)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_47.4bpp.lz");
static const ax_sprite sMagnemiteSprites47[] = {
	{sMagnemiteGfx47, ARRAY_COUNT(sMagnemiteGfx47)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_48.4bpp.lz");
static const ax_sprite sMagnemiteSprites48[] = {
	{sMagnemiteGfx48, ARRAY_COUNT(sMagnemiteGfx48)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_49.4bpp.lz");
static const ax_sprite sMagnemiteSprites49[] = {
	{sMagnemiteGfx49, ARRAY_COUNT(sMagnemiteGfx49)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_50.4bpp.lz");
static const ax_sprite sMagnemiteSprites50[] = {
	{sMagnemiteGfx50, ARRAY_COUNT(sMagnemiteGfx50)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_51.4bpp.lz");
static const ax_sprite sMagnemiteSprites51[] = {
	{sMagnemiteGfx51, ARRAY_COUNT(sMagnemiteGfx51)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_52.4bpp.lz");
static const ax_sprite sMagnemiteSprites52[] = {
	{sMagnemiteGfx52, ARRAY_COUNT(sMagnemiteGfx52)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_53.4bpp.lz");
static const ax_sprite sMagnemiteSprites53[] = {
	{sMagnemiteGfx53, ARRAY_COUNT(sMagnemiteGfx53)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_54.4bpp.lz");
static const ax_sprite sMagnemiteSprites54[] = {
	{sMagnemiteGfx54, ARRAY_COUNT(sMagnemiteGfx54)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_55.4bpp.lz");
static const ax_sprite sMagnemiteSprites55[] = {
	{sMagnemiteGfx55, ARRAY_COUNT(sMagnemiteGfx55)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_56.4bpp.lz");
static const ax_sprite sMagnemiteSprites56[] = {
	{sMagnemiteGfx56, ARRAY_COUNT(sMagnemiteGfx56)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_57.4bpp.lz");
static const ax_sprite sMagnemiteSprites57[] = {
	{sMagnemiteGfx57, ARRAY_COUNT(sMagnemiteGfx57)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_58.4bpp.lz");
static const ax_sprite sMagnemiteSprites58[] = {
	{sMagnemiteGfx58, ARRAY_COUNT(sMagnemiteGfx58)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_59.4bpp.lz");
static const ax_sprite sMagnemiteSprites59[] = {
	{sMagnemiteGfx59, ARRAY_COUNT(sMagnemiteGfx59)}, 
	{NULL, 0}
};
static const u8 sMagnemiteGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/magnemite/sprite_60.4bpp.lz");
static const ax_sprite sMagnemiteSprites60[] = {
	{sMagnemiteGfx60, ARRAY_COUNT(sMagnemiteGfx60)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesMagnemite[] = {
	sMagnemitePose1,
	sMagnemitePose2,
	sMagnemitePose3,
	sMagnemitePose4,
	sMagnemitePose5,
	sMagnemitePose6,
	sMagnemitePose7,
	sMagnemitePose8,
	sMagnemitePose9,
	sMagnemitePose10,
	sMagnemitePose11,
	sMagnemitePose12,
	sMagnemitePose13,
	sMagnemitePose14,
	sMagnemitePose15,
	sMagnemitePose16,
	sMagnemitePose17,
	sMagnemitePose18,
	sMagnemitePose19,
	sMagnemitePose20,
	sMagnemitePose21,
	sMagnemitePose22,
	sMagnemitePose23,
	sMagnemitePose24,
	sMagnemitePose1,
	sMagnemitePose22,
	sMagnemitePose19,
	sMagnemitePose16,
	sMagnemitePose13,
	sMagnemitePose10,
	sMagnemitePose7,
	sMagnemitePose4,
	sMagnemitePose1,
	sMagnemitePose22,
	sMagnemitePose19,
	sMagnemitePose16,
	sMagnemitePose13,
	sMagnemitePose10,
	sMagnemitePose7,
	sMagnemitePose4,
	sMagnemitePose1,
	sMagnemitePose42,
	sMagnemitePose43,
	sMagnemitePose44,
	sMagnemitePose4,
	sMagnemitePose46,
	sMagnemitePose47,
	sMagnemitePose48,
	sMagnemitePose7,
	sMagnemitePose50,
	sMagnemitePose51,
	sMagnemitePose52,
	sMagnemitePose10,
	sMagnemitePose54,
	sMagnemitePose55,
	sMagnemitePose56,
	sMagnemitePose13,
	sMagnemitePose58,
	sMagnemitePose59,
	sMagnemitePose60,
	sMagnemitePose16,
	sMagnemitePose62,
	sMagnemitePose63,
	sMagnemitePose64,
	sMagnemitePose19,
	sMagnemitePose66,
	sMagnemitePose67,
	sMagnemitePose68,
	sMagnemitePose22,
	sMagnemitePose70,
	sMagnemitePose71,
	sMagnemitePose72,
	sMagnemitePose1,
	sMagnemitePose42,
	sMagnemitePose43,
	sMagnemitePose4,
	sMagnemitePose46,
	sMagnemitePose47,
	sMagnemitePose7,
	sMagnemitePose50,
	sMagnemitePose51,
	sMagnemitePose10,
	sMagnemitePose54,
	sMagnemitePose55,
	sMagnemitePose13,
	sMagnemitePose58,
	sMagnemitePose59,
	sMagnemitePose16,
	sMagnemitePose62,
	sMagnemitePose63,
	sMagnemitePose19,
	sMagnemitePose66,
	sMagnemitePose67,
	sMagnemitePose22,
	sMagnemitePose70,
	sMagnemitePose71,
	sMagnemitePose97,
	sMagnemitePose98,
	sMagnemitePose99,
	sMagnemitePose100,
	sMagnemitePose101,
	sMagnemitePose102,
	sMagnemitePose103,
	sMagnemitePose104,
	sMagnemitePose105,
	sMagnemitePose106,
	sMagnemitePose1,
	sMagnemitePose2,
	sMagnemitePose3,
	sMagnemitePose4,
	sMagnemitePose5,
	sMagnemitePose6,
	sMagnemitePose7,
	sMagnemitePose8,
	sMagnemitePose9,
	sMagnemitePose10,
	sMagnemitePose11,
	sMagnemitePose12,
	sMagnemitePose13,
	sMagnemitePose14,
	sMagnemitePose15,
	sMagnemitePose16,
	sMagnemitePose17,
	sMagnemitePose18,
	sMagnemitePose19,
	sMagnemitePose20,
	sMagnemitePose21,
	sMagnemitePose22,
	sMagnemitePose23,
	sMagnemitePose24,
	sMagnemitePose1,
	sMagnemitePose22,
	sMagnemitePose19,
	sMagnemitePose16,
	sMagnemitePose13,
	sMagnemitePose10,
	sMagnemitePose7,
	sMagnemitePose4,
	sMagnemitePose2,
	sMagnemitePose5,
	sMagnemitePose8,
	sMagnemitePose11,
	sMagnemitePose14,
	sMagnemitePose17,
	sMagnemitePose20,
	sMagnemitePose23,
	sMagnemitePose1,
	sMagnemitePose2,
	sMagnemitePose3,
	sMagnemitePose4,
	sMagnemitePose5,
	sMagnemitePose6,
	sMagnemitePose7,
	sMagnemitePose8,
	sMagnemitePose9,
	sMagnemitePose10,
	sMagnemitePose11,
	sMagnemitePose12,
	sMagnemitePose13,
	sMagnemitePose14,
	sMagnemitePose15,
	sMagnemitePose16,
	sMagnemitePose17,
	sMagnemitePose18,
	sMagnemitePose19,
	sMagnemitePose20,
	sMagnemitePose21,
	sMagnemitePose22,
	sMagnemitePose23,
	sMagnemitePose24,
	sMagnemitePose2,
	sMagnemitePose23,
	sMagnemitePose20,
	sMagnemitePose17,
	sMagnemitePose14,
	sMagnemitePose11,
	sMagnemitePose8,
	sMagnemitePose5,
	sMagnemitePose1,
	sMagnemitePose22,
	sMagnemitePose19,
	sMagnemitePose16,
	sMagnemitePose13,
	sMagnemitePose10,
	sMagnemitePose7,
	sMagnemitePose4,
	sMagnemitePose1,
	sMagnemitePose188,
	sMagnemitePose189,
};

static const struct PositionSets sAxPositionsMagnemite[] = {
	[0] = { .set = { {-1, -5}, {-9, -10}, {7, -10}, {-1, -8} } },
	[1] = { .set = { {-1, -5}, {-8, -13}, {6, -13}, {-1, -8} } },
	[2] = { .set = { {-1, -5}, {-10, -6}, {8, -6}, {-1, -8} } },
	[3] = { .set = { {2, -6}, {-8, -7}, {3, -15}, {0, -8} } },
	[4] = { .set = { {2, -6}, {-7, -11}, {2, -17}, {0, -8} } },
	[5] = { .set = { {2, -6}, {-8, -5}, {4, -11}, {0, -8} } },
	[6] = { .set = { {2, -6}, {-2, -3}, {-1, -16}, {-1, -7} } },
	[7] = { .set = { {2, -6}, {-2, -7}, {0, -17}, {0, -7} } },
	[8] = { .set = { {2, -6}, {-2, -1}, {-2, -15}, {0, -7} } },
	[9] = { .set = { {2, -8}, {6, -7}, {-7, -13}, {-1, -7} } },
	[10] = { .set = { {2, -8}, {5, -11}, {-5, -15}, {-1, -7} } },
	[11] = { .set = { {2, -8}, {6, -5}, {-7, -9}, {-1, -8} } },
	[12] = { .set = { {-1, -7}, {7, -10}, {-9, -10}, {-1, -9} } },
	[13] = { .set = { {-1, -7}, {6, -12}, {-8, -12}, {-1, -9} } },
	[14] = { .set = { {-1, -7}, {8, -6}, {-10, -6}, {-1, -9} } },
	[15] = { .set = { {-3, -8}, {5, -13}, {-8, -7}, {-1, -8} } },
	[16] = { .set = { {-3, -9}, {3, -15}, {-7, -11}, {-1, -8} } },
	[17] = { .set = { {-3, -8}, {5, -9}, {-8, -5}, {-1, -8} } },
	[18] = { .set = { {-4, -6}, {-1, -16}, {0, -3}, {-1, -8} } },
	[19] = { .set = { {-4, -6}, {-2, -17}, {0, -7}, {-1, -8} } },
	[20] = { .set = { {-4, -6}, {-2, -12}, {0, -1}, {-1, -8} } },
	[21] = { .set = { {-3, -5}, {-5, -15}, {6, -7}, {-1, -8} } },
	[22] = { .set = { {-3, -5}, {-4, -17}, {5, -11}, {-1, -8} } },
	[23] = { .set = { {-3, -5}, {-6, -11}, {6, -5}, {-1, -8} } },
	[24] = { .set = { {-1, -5}, {-9, -10}, {7, -10}, {-1, -8} } },
	[25] = { .set = { {-3, -5}, {-5, -15}, {6, -7}, {-1, -8} } },
	[26] = { .set = { {-4, -6}, {-1, -16}, {0, -3}, {-1, -8} } },
	[27] = { .set = { {-3, -8}, {5, -13}, {-8, -7}, {-1, -8} } },
	[28] = { .set = { {-1, -7}, {7, -10}, {-9, -10}, {-1, -9} } },
	[29] = { .set = { {2, -8}, {6, -7}, {-7, -13}, {-1, -7} } },
	[30] = { .set = { {2, -6}, {-2, -3}, {-1, -16}, {-1, -7} } },
	[31] = { .set = { {2, -6}, {-8, -7}, {3, -15}, {0, -8} } },
	[32] = { .set = { {-1, -5}, {-9, -10}, {7, -10}, {-1, -8} } },
	[33] = { .set = { {-3, -5}, {-5, -15}, {6, -7}, {-1, -8} } },
	[34] = { .set = { {-4, -6}, {-1, -16}, {0, -3}, {-1, -8} } },
	[35] = { .set = { {-3, -8}, {5, -13}, {-8, -7}, {-1, -8} } },
	[36] = { .set = { {-1, -7}, {7, -10}, {-9, -10}, {-1, -9} } },
	[37] = { .set = { {2, -8}, {6, -7}, {-7, -13}, {-1, -7} } },
	[38] = { .set = { {2, -6}, {-2, -3}, {-1, -16}, {-1, -7} } },
	[39] = { .set = { {2, -6}, {-8, -7}, {3, -15}, {0, -8} } },
	[40] = { .set = { {-1, -5}, {-9, -10}, {7, -10}, {-1, -8} } },
	[41] = { .set = { {-1, -5}, {-7, -8}, {5, -8}, {-1, -8} } },
	[42] = { .set = { {-1, -5}, {-7, -5}, {5, -5}, {-1, -8} } },
	[43] = { .set = { {-1, -5}, {-7, -8}, {5, -8}, {-1, -8} } },
	[44] = { .set = { {2, -6}, {-8, -7}, {3, -15}, {0, -8} } },
	[45] = { .set = { {1, -5}, {0, -7}, {5, -11}, {0, -8} } },
	[46] = { .set = { {1, -5}, {0, -4}, {6, -8}, {0, -7} } },
	[47] = { .set = { {1, -5}, {-2, -6}, {4, -10}, {-1, -7} } },
	[48] = { .set = { {2, -6}, {-2, -3}, {-1, -16}, {-1, -7} } },
	[49] = { .set = { {2, -6}, {2, -7}, {4, -12}, {-1, -8} } },
	[50] = { .set = { {2, -6}, {2, -5}, {4, -10}, {-1, -8} } },
	[51] = { .set = { {2, -6}, {0, -6}, {2, -11}, {-1, -8} } },
	[52] = { .set = { {2, -8}, {6, -7}, {-7, -13}, {-1, -7} } },
	[53] = { .set = { {2, -7}, {6, -11}, {0, -13}, {-1, -7} } },
	[54] = { .set = { {2, -7}, {6, -9}, {0, -12}, {-1, -7} } },
	[55] = { .set = { {2, -7}, {4, -9}, {0, -12}, {-1, -8} } },
	[56] = { .set = { {-1, -7}, {7, -10}, {-9, -10}, {-1, -9} } },
	[57] = { .set = { {-1, -7}, {5, -13}, {-7, -13}, {-1, -9} } },
	[58] = { .set = { {-1, -7}, {5, -11}, {-7, -11}, {-1, -9} } },
	[59] = { .set = { {-1, -7}, {5, -10}, {-7, -10}, {-1, -9} } },
	[60] = { .set = { {-3, -8}, {5, -13}, {-8, -7}, {-1, -8} } },
	[61] = { .set = { {-2, -8}, {0, -12}, {-7, -11}, {0, -8} } },
	[62] = { .set = { {-2, -8}, {2, -10}, {-7, -9}, {0, -8} } },
	[63] = { .set = { {-2, -8}, {1, -11}, {-5, -9}, {0, -8} } },
	[64] = { .set = { {-4, -6}, {-1, -16}, {0, -3}, {-1, -8} } },
	[65] = { .set = { {-4, -6}, {-6, -12}, {-4, -7}, {-1, -8} } },
	[66] = { .set = { {-4, -6}, {-6, -10}, {-4, -5}, {-1, -8} } },
	[67] = { .set = { {-4, -6}, {-4, -11}, {-2, -6}, {-1, -8} } },
	[68] = { .set = { {-3, -5}, {-5, -15}, {6, -7}, {-1, -8} } },
	[69] = { .set = { {-4, -6}, {-7, -11}, {-2, -7}, {-2, -8} } },
	[70] = { .set = { {-4, -6}, {-8, -8}, {-2, -4}, {-2, -8} } },
	[71] = { .set = { {-4, -6}, {-6, -10}, {0, -6}, {-2, -7} } },
	[72] = { .set = { {-1, -5}, {-9, -10}, {7, -10}, {-1, -8} } },
	[73] = { .set = { {-1, -5}, {-7, -8}, {5, -8}, {-1, -8} } },
	[74] = { .set = { {-1, -5}, {-7, -5}, {5, -5}, {-1, -8} } },
	[75] = { .set = { {2, -6}, {-8, -7}, {3, -15}, {0, -8} } },
	[76] = { .set = { {1, -5}, {0, -7}, {5, -11}, {0, -8} } },
	[77] = { .set = { {1, -5}, {0, -4}, {6, -8}, {0, -7} } },
	[78] = { .set = { {2, -6}, {-2, -3}, {-1, -16}, {-1, -7} } },
	[79] = { .set = { {2, -6}, {2, -7}, {4, -12}, {-1, -8} } },
	[80] = { .set = { {2, -6}, {2, -5}, {4, -10}, {-1, -8} } },
	[81] = { .set = { {2, -8}, {6, -7}, {-7, -13}, {-1, -7} } },
	[82] = { .set = { {2, -7}, {6, -11}, {0, -13}, {-1, -7} } },
	[83] = { .set = { {2, -7}, {6, -9}, {0, -12}, {-1, -7} } },
	[84] = { .set = { {-1, -7}, {7, -10}, {-9, -10}, {-1, -9} } },
	[85] = { .set = { {-1, -7}, {5, -13}, {-7, -13}, {-1, -9} } },
	[86] = { .set = { {-1, -7}, {5, -11}, {-7, -11}, {-1, -9} } },
	[87] = { .set = { {-3, -8}, {5, -13}, {-8, -7}, {-1, -8} } },
	[88] = { .set = { {-2, -8}, {0, -12}, {-7, -11}, {0, -8} } },
	[89] = { .set = { {-2, -8}, {2, -10}, {-7, -9}, {0, -8} } },
	[90] = { .set = { {-4, -6}, {-1, -16}, {0, -3}, {-1, -8} } },
	[91] = { .set = { {-4, -6}, {-6, -12}, {-4, -7}, {-1, -8} } },
	[92] = { .set = { {-4, -6}, {-6, -10}, {-4, -5}, {-1, -8} } },
	[93] = { .set = { {-3, -5}, {-5, -15}, {6, -7}, {-1, -8} } },
	[94] = { .set = { {-4, -6}, {-7, -11}, {-2, -7}, {-2, -8} } },
	[95] = { .set = { {-4, -6}, {-8, -8}, {-2, -4}, {-2, -8} } },
	[96] = { .set = { {-1, -5}, {-10, -7}, {8, -7}, {-1, -7} } },
	[97] = { .set = { {-1, -5}, {-10, -7}, {8, -7}, {-1, -7} } },
	[98] = { .set = { {0, -7}, {-7, -14}, {7, -14}, {0, -11} } },
	[99] = { .set = { {2, -7}, {-7, -11}, {0, -16}, {-1, -8} } },
	[100] = { .set = { {2, -8}, {-5, -8}, {-2, -16}, {-1, -7} } },
	[101] = { .set = { {2, -9}, {4, -10}, {-6, -14}, {0, -6} } },
	[102] = { .set = { {0, -9}, {7, -12}, {-7, -12}, {0, -6} } },
	[103] = { .set = { {-2, -9}, {6, -14}, {-4, -10}, {0, -7} } },
	[104] = { .set = { {-2, -8}, {2, -16}, {5, -8}, {1, -7} } },
	[105] = { .set = { {-2, -6}, {0, -16}, {7, -11}, {1, -8} } },
	[106] = { .set = { {-1, -5}, {-9, -10}, {7, -10}, {-1, -8} } },
	[107] = { .set = { {-1, -5}, {-8, -13}, {6, -13}, {-1, -8} } },
	[108] = { .set = { {-1, -5}, {-10, -6}, {8, -6}, {-1, -8} } },
	[109] = { .set = { {2, -6}, {-8, -7}, {3, -15}, {0, -8} } },
	[110] = { .set = { {2, -6}, {-7, -11}, {2, -17}, {0, -8} } },
	[111] = { .set = { {2, -6}, {-8, -5}, {4, -11}, {0, -8} } },
	[112] = { .set = { {2, -6}, {-2, -3}, {-1, -16}, {-1, -7} } },
	[113] = { .set = { {2, -6}, {-2, -7}, {0, -17}, {0, -7} } },
	[114] = { .set = { {2, -6}, {-2, -1}, {-2, -15}, {0, -7} } },
	[115] = { .set = { {2, -8}, {6, -7}, {-7, -13}, {-1, -7} } },
	[116] = { .set = { {2, -8}, {5, -11}, {-5, -15}, {-1, -7} } },
	[117] = { .set = { {2, -8}, {6, -5}, {-7, -9}, {-1, -8} } },
	[118] = { .set = { {-1, -7}, {7, -10}, {-9, -10}, {-1, -9} } },
	[119] = { .set = { {-1, -7}, {6, -12}, {-8, -12}, {-1, -9} } },
	[120] = { .set = { {-1, -7}, {8, -6}, {-10, -6}, {-1, -9} } },
	[121] = { .set = { {-3, -8}, {5, -13}, {-8, -7}, {-1, -8} } },
	[122] = { .set = { {-3, -9}, {3, -15}, {-7, -11}, {-1, -8} } },
	[123] = { .set = { {-3, -8}, {5, -9}, {-8, -5}, {-1, -8} } },
	[124] = { .set = { {-4, -6}, {-1, -16}, {0, -3}, {-1, -8} } },
	[125] = { .set = { {-4, -6}, {-2, -17}, {0, -7}, {-1, -8} } },
	[126] = { .set = { {-4, -6}, {-2, -12}, {0, -1}, {-1, -8} } },
	[127] = { .set = { {-3, -5}, {-5, -15}, {6, -7}, {-1, -8} } },
	[128] = { .set = { {-3, -5}, {-4, -17}, {5, -11}, {-1, -8} } },
	[129] = { .set = { {-3, -5}, {-6, -11}, {6, -5}, {-1, -8} } },
	[130] = { .set = { {-1, -5}, {-9, -10}, {7, -10}, {-1, -8} } },
	[131] = { .set = { {-3, -5}, {-5, -15}, {6, -7}, {-1, -8} } },
	[132] = { .set = { {-4, -6}, {-1, -16}, {0, -3}, {-1, -8} } },
	[133] = { .set = { {-3, -8}, {5, -13}, {-8, -7}, {-1, -8} } },
	[134] = { .set = { {-1, -7}, {7, -10}, {-9, -10}, {-1, -9} } },
	[135] = { .set = { {2, -8}, {6, -7}, {-7, -13}, {-1, -7} } },
	[136] = { .set = { {2, -6}, {-2, -3}, {-1, -16}, {-1, -7} } },
	[137] = { .set = { {2, -6}, {-8, -7}, {3, -15}, {0, -8} } },
	[138] = { .set = { {-1, -5}, {-8, -13}, {6, -13}, {-1, -8} } },
	[139] = { .set = { {2, -6}, {-7, -11}, {2, -17}, {0, -8} } },
	[140] = { .set = { {2, -6}, {-2, -7}, {0, -17}, {0, -7} } },
	[141] = { .set = { {2, -8}, {5, -11}, {-5, -15}, {-1, -7} } },
	[142] = { .set = { {-1, -7}, {6, -12}, {-8, -12}, {-1, -9} } },
	[143] = { .set = { {-3, -9}, {3, -15}, {-7, -11}, {-1, -8} } },
	[144] = { .set = { {-4, -6}, {-2, -17}, {0, -7}, {-1, -8} } },
	[145] = { .set = { {-3, -5}, {-4, -17}, {5, -11}, {-1, -8} } },
	[146] = { .set = { {-1, -5}, {-9, -10}, {7, -10}, {-1, -8} } },
	[147] = { .set = { {-1, -5}, {-8, -13}, {6, -13}, {-1, -8} } },
	[148] = { .set = { {-1, -5}, {-10, -6}, {8, -6}, {-1, -8} } },
	[149] = { .set = { {2, -6}, {-8, -7}, {3, -15}, {0, -8} } },
	[150] = { .set = { {2, -6}, {-7, -11}, {2, -17}, {0, -8} } },
	[151] = { .set = { {2, -6}, {-8, -5}, {4, -11}, {0, -8} } },
	[152] = { .set = { {2, -6}, {-2, -3}, {-1, -16}, {-1, -7} } },
	[153] = { .set = { {2, -6}, {-2, -7}, {0, -17}, {0, -7} } },
	[154] = { .set = { {2, -6}, {-2, -1}, {-2, -15}, {0, -7} } },
	[155] = { .set = { {2, -8}, {6, -7}, {-7, -13}, {-1, -7} } },
	[156] = { .set = { {2, -8}, {5, -11}, {-5, -15}, {-1, -7} } },
	[157] = { .set = { {2, -8}, {6, -5}, {-7, -9}, {-1, -8} } },
	[158] = { .set = { {-1, -7}, {7, -10}, {-9, -10}, {-1, -9} } },
	[159] = { .set = { {-1, -7}, {6, -12}, {-8, -12}, {-1, -9} } },
	[160] = { .set = { {-1, -7}, {8, -6}, {-10, -6}, {-1, -9} } },
	[161] = { .set = { {-3, -8}, {5, -13}, {-8, -7}, {-1, -8} } },
	[162] = { .set = { {-3, -9}, {3, -15}, {-7, -11}, {-1, -8} } },
	[163] = { .set = { {-3, -8}, {5, -9}, {-8, -5}, {-1, -8} } },
	[164] = { .set = { {-4, -6}, {-1, -16}, {0, -3}, {-1, -8} } },
	[165] = { .set = { {-4, -6}, {-2, -17}, {0, -7}, {-1, -8} } },
	[166] = { .set = { {-4, -6}, {-2, -12}, {0, -1}, {-1, -8} } },
	[167] = { .set = { {-3, -5}, {-5, -15}, {6, -7}, {-1, -8} } },
	[168] = { .set = { {-3, -5}, {-4, -17}, {5, -11}, {-1, -8} } },
	[169] = { .set = { {-3, -5}, {-6, -11}, {6, -5}, {-1, -8} } },
	[170] = { .set = { {-1, -5}, {-8, -13}, {6, -13}, {-1, -8} } },
	[171] = { .set = { {-3, -5}, {-4, -17}, {5, -11}, {-1, -8} } },
	[172] = { .set = { {-4, -6}, {-2, -17}, {0, -7}, {-1, -8} } },
	[173] = { .set = { {-3, -9}, {3, -15}, {-7, -11}, {-1, -8} } },
	[174] = { .set = { {-1, -7}, {6, -12}, {-8, -12}, {-1, -9} } },
	[175] = { .set = { {2, -8}, {5, -11}, {-5, -15}, {-1, -7} } },
	[176] = { .set = { {2, -6}, {-2, -7}, {0, -17}, {0, -7} } },
	[177] = { .set = { {2, -6}, {-7, -11}, {2, -17}, {0, -8} } },
	[178] = { .set = { {-1, -5}, {-9, -10}, {7, -10}, {-1, -8} } },
	[179] = { .set = { {-3, -5}, {-5, -15}, {6, -7}, {-1, -8} } },
	[180] = { .set = { {-4, -6}, {-1, -16}, {0, -3}, {-1, -8} } },
	[181] = { .set = { {-3, -8}, {5, -13}, {-8, -7}, {-1, -8} } },
	[182] = { .set = { {-1, -7}, {7, -10}, {-9, -10}, {-1, -9} } },
	[183] = { .set = { {2, -8}, {6, -7}, {-7, -13}, {-1, -7} } },
	[184] = { .set = { {2, -6}, {-2, -3}, {-1, -16}, {-1, -7} } },
	[185] = { .set = { {2, -6}, {-8, -7}, {3, -15}, {0, -8} } },
	[186] = { .set = { {-1, -5}, {-9, -10}, {7, -10}, {-1, -8} } },
	[187] = { .set = { {-1, -3}, {-9, -8}, {7, -8}, {-1, -6} } },
	[188] = { .set = { {-1, -3}, {-9, -5}, {7, -5}, {-1, -6} } },
};

static const ax_anim *const sMagnemiteAnimTable1[] = {
	sMagnemiteAnims_1_1,
	sMagnemiteAnims_1_2,
	sMagnemiteAnims_1_3,
	sMagnemiteAnims_1_4,
	sMagnemiteAnims_1_5,
	sMagnemiteAnims_1_6,
	sMagnemiteAnims_1_7,
	sMagnemiteAnims_1_8,
};

static const ax_anim *const sMagnemiteAnimTable2[] = {
	sMagnemiteAnims_2_1,
	sMagnemiteAnims_2_2,
	sMagnemiteAnims_2_3,
	sMagnemiteAnims_2_4,
	sMagnemiteAnims_2_5,
	sMagnemiteAnims_2_6,
	sMagnemiteAnims_2_7,
	sMagnemiteAnims_2_8,
};

static const ax_anim *const sMagnemiteAnimTable3[] = {
	sMagnemiteAnims_3_1,
	sMagnemiteAnims_3_2,
	sMagnemiteAnims_3_3,
	sMagnemiteAnims_3_4,
	sMagnemiteAnims_3_5,
	sMagnemiteAnims_3_6,
	sMagnemiteAnims_3_7,
	sMagnemiteAnims_3_8,
};

static const ax_anim *const sMagnemiteAnimTable4[] = {
	sMagnemiteAnims_4_1,
	sMagnemiteAnims_4_2,
	sMagnemiteAnims_4_3,
	sMagnemiteAnims_4_4,
	sMagnemiteAnims_4_5,
	sMagnemiteAnims_4_6,
	sMagnemiteAnims_4_7,
	sMagnemiteAnims_4_8,
};

static const ax_anim *const sMagnemiteAnimTable5[] = {
	sMagnemiteAnims_5_1,
	sMagnemiteAnims_5_2,
	sMagnemiteAnims_5_3,
	sMagnemiteAnims_5_4,
	sMagnemiteAnims_5_5,
	sMagnemiteAnims_5_6,
	sMagnemiteAnims_5_7,
	sMagnemiteAnims_5_8,
};

static const ax_anim *const sMagnemiteAnimTable6[] = {
	sMagnemiteAnims_6_1,
	sMagnemiteAnims_6_1,
	sMagnemiteAnims_6_1,
	sMagnemiteAnims_6_1,
	sMagnemiteAnims_6_1,
	sMagnemiteAnims_6_1,
	sMagnemiteAnims_6_1,
	sMagnemiteAnims_6_1,
};

static const ax_anim *const sMagnemiteAnimTable7[] = {
	gAxSharedAnim_02309,
	gAxSharedAnim_02312,
	gAxSharedAnim_00152,
	gAxSharedAnim_00157,
	gAxSharedAnim_00164,
	gAxSharedAnim_00172,
	gAxSharedAnim_00179,
	gAxSharedAnim_00189,
};

static const ax_anim *const sMagnemiteAnimTable8[] = {
	sMagnemiteAnims_8_1,
	sMagnemiteAnims_8_2,
	sMagnemiteAnims_8_3,
	sMagnemiteAnims_8_4,
	sMagnemiteAnims_8_5,
	sMagnemiteAnims_8_6,
	sMagnemiteAnims_8_7,
	sMagnemiteAnims_8_8,
};

static const ax_anim *const sMagnemiteAnimTable9[] = {
	sMagnemiteAnims_9_1,
	sMagnemiteAnims_9_2,
	sMagnemiteAnims_9_3,
	sMagnemiteAnims_9_4,
	sMagnemiteAnims_9_5,
	sMagnemiteAnims_9_6,
	sMagnemiteAnims_9_7,
	sMagnemiteAnims_9_8,
};

static const ax_anim *const sMagnemiteAnimTable10[] = {
	gAxSharedAnim_00474,
	gAxSharedAnim_00483,
	gAxSharedAnim_00492,
	gAxSharedAnim_00500,
	gAxSharedAnim_00506,
	gAxSharedAnim_00515,
	gAxSharedAnim_00521,
	gAxSharedAnim_00526,
};

static const ax_anim *const sMagnemiteAnimTable11[] = {
	sMagnemiteAnims_11_1,
	sMagnemiteAnims_11_2,
	sMagnemiteAnims_11_3,
	sMagnemiteAnims_11_4,
	sMagnemiteAnims_11_5,
	sMagnemiteAnims_11_6,
	sMagnemiteAnims_11_7,
	sMagnemiteAnims_11_8,
};

static const ax_anim *const sMagnemiteAnimTable12[] = {
	gAxSharedAnim_00804,
	gAxSharedAnim_00892,
	gAxSharedAnim_00868,
	gAxSharedAnim_00856,
	gAxSharedAnim_00855,
	gAxSharedAnim_00842,
	gAxSharedAnim_00820,
	gAxSharedAnim_00805,
};

static const ax_anim *const sMagnemiteAnimTable13[] = {
	gAxSharedAnim_00906,
	gAxSharedAnim_00992,
	gAxSharedAnim_00980,
	gAxSharedAnim_00967,
	gAxSharedAnim_00956,
	gAxSharedAnim_00944,
	gAxSharedAnim_00931,
	gAxSharedAnim_00919,
};

static const ax_anim *const sMagnemiteAnimTable14[] = {
	sMagnemiteAnims_14_1,
	sMagnemiteAnims_14_1,
	sMagnemiteAnims_14_1,
	sMagnemiteAnims_14_1,
	sMagnemiteAnims_14_1,
	sMagnemiteAnims_14_1,
	sMagnemiteAnims_14_1,
	sMagnemiteAnims_14_1,
};

static const ax_anim *const *const sAxAnimationsMagnemite[] = {
	sMagnemiteAnimTable1,
	sMagnemiteAnimTable2,
	sMagnemiteAnimTable3,
	sMagnemiteAnimTable4,
	sMagnemiteAnimTable5,
	sMagnemiteAnimTable6,
	sMagnemiteAnimTable7,
	sMagnemiteAnimTable8,
	sMagnemiteAnimTable9,
	sMagnemiteAnimTable10,
	sMagnemiteAnimTable11,
	sMagnemiteAnimTable12,
	sMagnemiteAnimTable13,
	sMagnemiteAnimTable14,
};

static const ax_sprite *const sAxSpritesMagnemite[] = {
	sMagnemiteSprites1,
	sMagnemiteSprites2,
	sMagnemiteSprites3,
	sMagnemiteSprites4,
	sMagnemiteSprites5,
	sMagnemiteSprites6,
	sMagnemiteSprites7,
	sMagnemiteSprites8,
	sMagnemiteSprites9,
	sMagnemiteSprites10,
	sMagnemiteSprites11,
	sMagnemiteSprites12,
	sMagnemiteSprites13,
	sMagnemiteSprites14,
	sMagnemiteSprites15,
	sMagnemiteSprites16,
	sMagnemiteSprites17,
	sMagnemiteSprites18,
	sMagnemiteSprites19,
	sMagnemiteSprites20,
	sMagnemiteSprites21,
	sMagnemiteSprites22,
	sMagnemiteSprites23,
	sMagnemiteSprites24,
	sMagnemiteSprites25,
	sMagnemiteSprites26,
	sMagnemiteSprites27,
	sMagnemiteSprites28,
	sMagnemiteSprites29,
	sMagnemiteSprites30,
	sMagnemiteSprites31,
	sMagnemiteSprites32,
	sMagnemiteSprites33,
	sMagnemiteSprites34,
	sMagnemiteSprites35,
	sMagnemiteSprites36,
	sMagnemiteSprites37,
	sMagnemiteSprites38,
	sMagnemiteSprites39,
	sMagnemiteSprites40,
	sMagnemiteSprites41,
	sMagnemiteSprites42,
	sMagnemiteSprites43,
	sMagnemiteSprites44,
	sMagnemiteSprites45,
	sMagnemiteSprites46,
	sMagnemiteSprites47,
	sMagnemiteSprites48,
	sMagnemiteSprites49,
	sMagnemiteSprites50,
	sMagnemiteSprites51,
	sMagnemiteSprites52,
	sMagnemiteSprites53,
	sMagnemiteSprites54,
	sMagnemiteSprites55,
	sMagnemiteSprites56,
	sMagnemiteSprites57,
	sMagnemiteSprites58,
	sMagnemiteSprites59,
	sMagnemiteSprites60,
};

static const axmain sAxMainMagnemite = {
	.poses = sAxPosesMagnemite,
	.animations = sAxAnimationsMagnemite,
	.animCount = ARRAY_COUNT(sAxAnimationsMagnemite),
	.spriteData = sAxSpritesMagnemite,
	.positions = sAxPositionsMagnemite,
};
