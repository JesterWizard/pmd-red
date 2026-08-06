/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainFeebas;
const SiroArchive gAxFeebas = {"SIRO", &sAxMainFeebas};

static const ax_pose sFeebasPose1[] = {
	AX_POSE(0, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose2[] = {
	AX_POSE(1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose3[] = {
	AX_POSE(2, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose4[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose5[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose6[] = {
	AX_POSE(5, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose7[] = {
	AX_POSE(6, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose8[] = {
	AX_POSE(7, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose9[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose10[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose11[] = {
	AX_POSE(10, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose12[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose13[] = {
	AX_POSE(12, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose14[] = {
	AX_POSE(13, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose15[] = {
	AX_POSE(14, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose16[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose17[] = {
	AX_POSE(10, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose18[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose19[] = {
	AX_POSE(6, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose20[] = {
	AX_POSE(7, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose21[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose22[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose23[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose24[] = {
	AX_POSE(5, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose76[] = {
	AX_POSE(15, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose80[] = {
	AX_POSE(16, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose84[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose88[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose92[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose96[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose100[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose104[] = {
	AX_POSE(16, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose118[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose137[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose138[] = {
	AX_POSE(21, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose139[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose140[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose141[] = {
	AX_POSE(24, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose142[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose143[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose144[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose145[] = {
	AX_POSE(24, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose146[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose174[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFeebasPose176[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_anim sFeebasAnims_1_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 1, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 2, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 1, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_1_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 4, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 5, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 4, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 5, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_1_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 7, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 8, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 7, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_1_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 10, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 11, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 10, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 11, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_1_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 14, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 13, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 14, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_1_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 16, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 17, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 16, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 17, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_1_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 19, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 20, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 19, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 20, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_1_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 22, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 23, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 22, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 23, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 24, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 24, .offset = {1, 22}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {1, 22}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 27, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 27, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {20, 22}, .shadow = {20, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 27, .offset = {21, 21}, .shadow = {21, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {20, 22}, .shadow = {20, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {21, 21}, .shadow = {21, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 30, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 30, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 33, .offset = {4, -6}, .shadow = {4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {11, -13}, .shadow = {11, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {18, -20}, .shadow = {18, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 33, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {18, -20}, .shadow = {18, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {5, -7}, .shadow = {5, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 36, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, -9}, .shadow = {0, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 36, .offset = {1, -19}, .shadow = {1, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {1, -19}, .shadow = {1, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 39, .offset = {-4, -6}, .shadow = {-4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {-11, -13}, .shadow = {-11, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-18, -20}, .shadow = {-18, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-18, -20}, .shadow = {-18, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-5, -7}, .shadow = {-5, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 42, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 42, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 45, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-20, 22}, .shadow = {-20, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 45, .offset = {-21, 21}, .shadow = {-21, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-20, 22}, .shadow = {-20, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-21, 21}, .shadow = {-21, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 48, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 48, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 48, .offset = {1, 22}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, 22}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 51, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 51, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {20, 22}, .shadow = {20, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {21, 21}, .shadow = {21, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {20, 22}, .shadow = {20, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {21, 21}, .shadow = {21, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 54, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 54, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 57, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 57, .offset = {4, -6}, .shadow = {4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {11, -13}, .shadow = {11, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {18, -20}, .shadow = {18, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 57, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {18, -20}, .shadow = {18, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {5, -7}, .shadow = {5, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 60, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 60, .offset = {0, -9}, .shadow = {0, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 60, .offset = {1, -19}, .shadow = {1, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {1, -19}, .shadow = {1, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 63, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 63, .offset = {-4, -6}, .shadow = {-4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {-11, -13}, .shadow = {-11, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-18, -20}, .shadow = {-18, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 63, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-18, -20}, .shadow = {-18, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-5, -7}, .shadow = {-5, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 66, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 66, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 66, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 69, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-20, 22}, .shadow = {-20, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 69, .offset = {-21, 21}, .shadow = {-21, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-20, 22}, .shadow = {-20, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-21, 21}, .shadow = {-21, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 74, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 75, .offset = {0, 3}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {1, 3}, .shadow = {1, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 3}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {1, 3}, .shadow = {1, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 3}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {1, 3}, .shadow = {1, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 3}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 78, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {2, 2}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {3, 1}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {2, 2}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {3, 1}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {2, 2}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {3, 1}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {2, 2}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 82, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {2, 1}, .shadow = {2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {2, 1}, .shadow = {2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {2, 1}, .shadow = {2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 86, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 87, .offset = {2, -2}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {3, -1}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {2, -2}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {3, -1}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {2, -2}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {3, -1}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {2, -2}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 90, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 91, .offset = {0, -3}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {1, -3}, .shadow = {1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -3}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {1, -3}, .shadow = {1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -3}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {1, -3}, .shadow = {1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -3}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 94, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {-2, -2}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-3, -1}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-2, -2}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-3, -1}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-2, -2}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-3, -1}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-2, -2}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 98, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-2, 1}, .shadow = {-2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-2, 1}, .shadow = {-2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-2, 1}, .shadow = {-2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 102, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {-2, 2}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-3, 1}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-2, 2}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-3, 1}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-2, 2}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-3, 1}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-2, 2}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_8_1[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_8_2[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_8_3[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_8_4[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_8_5[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_8_6[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_8_7[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_8_8[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {19, 10}, .shadow = {19, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 173, .offset = {17, 19}, .shadow = {17, 19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 174, .offset = {11, 19}, .shadow = {11, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {17, -3}, .shadow = {17, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 172, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 173, .offset = {17, 7}, .shadow = {17, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {12, 8}, .shadow = {12, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {12, -21}, .shadow = {12, -21} },
	{ .frames = 3, .unkFlags = 0, .poseId = 171, .offset = {18, -19}, .shadow = {18, -19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 172, .offset = {20, -13}, .shadow = {20, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {16, -5}, .shadow = {16, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-7, -18}, .shadow = {-7, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 170, .offset = {0, -20}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 171, .offset = {7, -18}, .shadow = {7, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {9, -12}, .shadow = {9, -12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-12, -21}, .shadow = {-12, -21} },
	{ .frames = 3, .unkFlags = 0, .poseId = 177, .offset = {-18, -19}, .shadow = {-18, -19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 176, .offset = {-20, -13}, .shadow = {-20, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {-16, -5}, .shadow = {-16, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-17, -3}, .shadow = {-17, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 176, .offset = {-18, -1}, .shadow = {-18, -1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 175, .offset = {-17, 7}, .shadow = {-17, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {-12, 8}, .shadow = {-12, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 187, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 187, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 186, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 188, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 186, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 190, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 190, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 189, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 191, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 189, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 193, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 193, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 192, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 194, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 194, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 192, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 195, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 196, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 196, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 196, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 195, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 197, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 197, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 195, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 199, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 199, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 199, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 198, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 200, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 200, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 198, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 202, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 202, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 202, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 202, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 201, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 203, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 203, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 203, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 201, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 204, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 205, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 205, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 205, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 205, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 204, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 206, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 206, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 206, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 204, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFeebasAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 207, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 208, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 208, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 208, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 208, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 207, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 209, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 209, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 209, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 207, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sFeebasGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_1.4bpp.lz");
static const ax_sprite sFeebasSprites1[] = {
	{sFeebasGfx1, ARRAY_COUNT(sFeebasGfx1)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_2.4bpp.lz");
static const ax_sprite sFeebasSprites2[] = {
	{sFeebasGfx2, ARRAY_COUNT(sFeebasGfx2)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_3.4bpp.lz");
static const ax_sprite sFeebasSprites3[] = {
	{sFeebasGfx3, ARRAY_COUNT(sFeebasGfx3)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_4.4bpp.lz");
static const ax_sprite sFeebasSprites4[] = {
	{sFeebasGfx4, ARRAY_COUNT(sFeebasGfx4)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_5.4bpp.lz");
static const ax_sprite sFeebasSprites5[] = {
	{sFeebasGfx5, ARRAY_COUNT(sFeebasGfx5)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_6.4bpp.lz");
static const ax_sprite sFeebasSprites6[] = {
	{sFeebasGfx6, ARRAY_COUNT(sFeebasGfx6)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_7.4bpp.lz");
static const ax_sprite sFeebasSprites7[] = {
	{sFeebasGfx7, ARRAY_COUNT(sFeebasGfx7)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_8.4bpp.lz");
static const ax_sprite sFeebasSprites8[] = {
	{sFeebasGfx8, ARRAY_COUNT(sFeebasGfx8)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_9.4bpp.lz");
static const ax_sprite sFeebasSprites9[] = {
	{sFeebasGfx9, ARRAY_COUNT(sFeebasGfx9)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_10.4bpp.lz");
static const ax_sprite sFeebasSprites10[] = {
	{sFeebasGfx10, ARRAY_COUNT(sFeebasGfx10)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_11.4bpp.lz");
static const ax_sprite sFeebasSprites11[] = {
	{sFeebasGfx11, ARRAY_COUNT(sFeebasGfx11)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_12.4bpp.lz");
static const ax_sprite sFeebasSprites12[] = {
	{sFeebasGfx12, ARRAY_COUNT(sFeebasGfx12)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_13.4bpp.lz");
static const ax_sprite sFeebasSprites13[] = {
	{sFeebasGfx13, ARRAY_COUNT(sFeebasGfx13)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_14.4bpp.lz");
static const ax_sprite sFeebasSprites14[] = {
	{sFeebasGfx14, ARRAY_COUNT(sFeebasGfx14)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_15.4bpp.lz");
static const ax_sprite sFeebasSprites15[] = {
	{sFeebasGfx15, ARRAY_COUNT(sFeebasGfx15)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_16.4bpp.lz");
static const u8 sFeebasGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_16_1.4bpp.lz");
static const u8 sFeebasGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_16_2.4bpp.lz");
static const u8 sFeebasGfx16_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_16_3.4bpp.lz");
static const ax_sprite sFeebasSprites16[] = {
	{NULL, 32}, 
	{sFeebasGfx16, ARRAY_COUNT(sFeebasGfx16)}, 
	{NULL, 32}, 
	{sFeebasGfx16_1, ARRAY_COUNT(sFeebasGfx16_1)}, 
	{NULL, 32}, 
	{sFeebasGfx16_2, ARRAY_COUNT(sFeebasGfx16_2)}, 
	{NULL, 64}, 
	{sFeebasGfx16_3, ARRAY_COUNT(sFeebasGfx16_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sFeebasGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_17.4bpp.lz");
static const u8 sFeebasGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_17_1.4bpp.lz");
static const u8 sFeebasGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_17_2.4bpp.lz");
static const ax_sprite sFeebasSprites17[] = {
	{NULL, 32}, 
	{sFeebasGfx17, ARRAY_COUNT(sFeebasGfx17)}, 
	{NULL, 32}, 
	{sFeebasGfx17_1, ARRAY_COUNT(sFeebasGfx17_1)}, 
	{NULL, 32}, 
	{sFeebasGfx17_2, ARRAY_COUNT(sFeebasGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFeebasGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_18.4bpp.lz");
static const ax_sprite sFeebasSprites18[] = {
	{NULL, 32}, 
	{sFeebasGfx18, ARRAY_COUNT(sFeebasGfx18)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sFeebasGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_19.4bpp.lz");
static const u8 sFeebasGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_19_1.4bpp.lz");
static const u8 sFeebasGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_19_2.4bpp.lz");
static const u8 sFeebasGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_19_3.4bpp.lz");
static const u8 sFeebasGfx19_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_19_4.4bpp.lz");
static const ax_sprite sFeebasSprites19[] = {
	{NULL, 32}, 
	{sFeebasGfx19, ARRAY_COUNT(sFeebasGfx19)}, 
	{NULL, 64}, 
	{sFeebasGfx19_1, ARRAY_COUNT(sFeebasGfx19_1)}, 
	{NULL, 32}, 
	{sFeebasGfx19_2, ARRAY_COUNT(sFeebasGfx19_2)}, 
	{NULL, 32}, 
	{sFeebasGfx19_3, ARRAY_COUNT(sFeebasGfx19_3)}, 
	{NULL, 32}, 
	{sFeebasGfx19_4, ARRAY_COUNT(sFeebasGfx19_4)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFeebasGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_20.4bpp.lz");
static const u8 sFeebasGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_20_1.4bpp.lz");
static const u8 sFeebasGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_20_2.4bpp.lz");
static const u8 sFeebasGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_20_3.4bpp.lz");
static const ax_sprite sFeebasSprites20[] = {
	{NULL, 32}, 
	{sFeebasGfx20, ARRAY_COUNT(sFeebasGfx20)}, 
	{NULL, 64}, 
	{sFeebasGfx20_1, ARRAY_COUNT(sFeebasGfx20_1)}, 
	{NULL, 32}, 
	{sFeebasGfx20_2, ARRAY_COUNT(sFeebasGfx20_2)}, 
	{NULL, 64}, 
	{sFeebasGfx20_3, ARRAY_COUNT(sFeebasGfx20_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sFeebasGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_21.4bpp.lz");
static const ax_sprite sFeebasSprites21[] = {
	{sFeebasGfx21, ARRAY_COUNT(sFeebasGfx21)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_22.4bpp.lz");
static const ax_sprite sFeebasSprites22[] = {
	{sFeebasGfx22, ARRAY_COUNT(sFeebasGfx22)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_23.4bpp.lz");
static const ax_sprite sFeebasSprites23[] = {
	{sFeebasGfx23, ARRAY_COUNT(sFeebasGfx23)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_24.4bpp.lz");
static const ax_sprite sFeebasSprites24[] = {
	{sFeebasGfx24, ARRAY_COUNT(sFeebasGfx24)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_25.4bpp.lz");
static const ax_sprite sFeebasSprites25[] = {
	{sFeebasGfx25, ARRAY_COUNT(sFeebasGfx25)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_26.4bpp.lz");
static const ax_sprite sFeebasSprites26[] = {
	{sFeebasGfx26, ARRAY_COUNT(sFeebasGfx26)}, 
	{NULL, 0}
};
static const u8 sFeebasGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/feebas/sprite_27.4bpp.lz");
static const ax_sprite sFeebasSprites27[] = {
	{sFeebasGfx27, ARRAY_COUNT(sFeebasGfx27)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesFeebas[] = {
	sFeebasPose1,
	sFeebasPose2,
	sFeebasPose3,
	sFeebasPose4,
	sFeebasPose5,
	sFeebasPose6,
	sFeebasPose7,
	sFeebasPose8,
	sFeebasPose9,
	sFeebasPose10,
	sFeebasPose11,
	sFeebasPose12,
	sFeebasPose13,
	sFeebasPose14,
	sFeebasPose15,
	sFeebasPose16,
	sFeebasPose17,
	sFeebasPose18,
	sFeebasPose19,
	sFeebasPose20,
	sFeebasPose21,
	sFeebasPose22,
	sFeebasPose23,
	sFeebasPose24,
	sFeebasPose1,
	sFeebasPose2,
	sFeebasPose3,
	sFeebasPose4,
	sFeebasPose5,
	sFeebasPose6,
	sFeebasPose7,
	sFeebasPose8,
	sFeebasPose9,
	sFeebasPose10,
	sFeebasPose11,
	sFeebasPose12,
	sFeebasPose13,
	sFeebasPose14,
	sFeebasPose15,
	sFeebasPose16,
	sFeebasPose17,
	sFeebasPose18,
	sFeebasPose19,
	sFeebasPose20,
	sFeebasPose21,
	sFeebasPose22,
	sFeebasPose23,
	sFeebasPose24,
	sFeebasPose1,
	sFeebasPose2,
	sFeebasPose3,
	sFeebasPose4,
	sFeebasPose5,
	sFeebasPose6,
	sFeebasPose7,
	sFeebasPose8,
	sFeebasPose9,
	sFeebasPose10,
	sFeebasPose11,
	sFeebasPose12,
	sFeebasPose13,
	sFeebasPose14,
	sFeebasPose15,
	sFeebasPose16,
	sFeebasPose17,
	sFeebasPose18,
	sFeebasPose19,
	sFeebasPose20,
	sFeebasPose21,
	sFeebasPose22,
	sFeebasPose23,
	sFeebasPose24,
	sFeebasPose1,
	sFeebasPose2,
	sFeebasPose3,
	sFeebasPose76,
	sFeebasPose4,
	sFeebasPose5,
	sFeebasPose6,
	sFeebasPose80,
	sFeebasPose7,
	sFeebasPose8,
	sFeebasPose9,
	sFeebasPose84,
	sFeebasPose10,
	sFeebasPose11,
	sFeebasPose12,
	sFeebasPose88,
	sFeebasPose13,
	sFeebasPose14,
	sFeebasPose15,
	sFeebasPose92,
	sFeebasPose16,
	sFeebasPose17,
	sFeebasPose18,
	sFeebasPose96,
	sFeebasPose19,
	sFeebasPose20,
	sFeebasPose21,
	sFeebasPose100,
	sFeebasPose22,
	sFeebasPose23,
	sFeebasPose24,
	sFeebasPose104,
	sFeebasPose1,
	sFeebasPose2,
	sFeebasPose3,
	sFeebasPose76,
	sFeebasPose4,
	sFeebasPose6,
	sFeebasPose5,
	sFeebasPose80,
	sFeebasPose7,
	sFeebasPose9,
	sFeebasPose8,
	sFeebasPose84,
	sFeebasPose10,
	sFeebasPose118,
	sFeebasPose11,
	sFeebasPose88,
	sFeebasPose13,
	sFeebasPose14,
	sFeebasPose15,
	sFeebasPose92,
	sFeebasPose16,
	sFeebasPose17,
	sFeebasPose18,
	sFeebasPose96,
	sFeebasPose19,
	sFeebasPose20,
	sFeebasPose21,
	sFeebasPose100,
	sFeebasPose22,
	sFeebasPose23,
	sFeebasPose24,
	sFeebasPose104,
	sFeebasPose137,
	sFeebasPose138,
	sFeebasPose139,
	sFeebasPose140,
	sFeebasPose141,
	sFeebasPose142,
	sFeebasPose143,
	sFeebasPose144,
	sFeebasPose145,
	sFeebasPose146,
	sFeebasPose1,
	sFeebasPose2,
	sFeebasPose3,
	sFeebasPose4,
	sFeebasPose5,
	sFeebasPose6,
	sFeebasPose7,
	sFeebasPose8,
	sFeebasPose9,
	sFeebasPose10,
	sFeebasPose11,
	sFeebasPose12,
	sFeebasPose13,
	sFeebasPose14,
	sFeebasPose15,
	sFeebasPose16,
	sFeebasPose17,
	sFeebasPose18,
	sFeebasPose19,
	sFeebasPose20,
	sFeebasPose21,
	sFeebasPose22,
	sFeebasPose23,
	sFeebasPose24,
	sFeebasPose76,
	sFeebasPose104,
	sFeebasPose100,
	sFeebasPose174,
	sFeebasPose92,
	sFeebasPose176,
	sFeebasPose84,
	sFeebasPose80,
	sFeebasPose76,
	sFeebasPose80,
	sFeebasPose84,
	sFeebasPose176,
	sFeebasPose92,
	sFeebasPose174,
	sFeebasPose100,
	sFeebasPose104,
	sFeebasPose1,
	sFeebasPose2,
	sFeebasPose3,
	sFeebasPose4,
	sFeebasPose5,
	sFeebasPose6,
	sFeebasPose7,
	sFeebasPose8,
	sFeebasPose9,
	sFeebasPose10,
	sFeebasPose11,
	sFeebasPose12,
	sFeebasPose13,
	sFeebasPose14,
	sFeebasPose15,
	sFeebasPose16,
	sFeebasPose17,
	sFeebasPose18,
	sFeebasPose19,
	sFeebasPose20,
	sFeebasPose21,
	sFeebasPose22,
	sFeebasPose23,
	sFeebasPose24,
	sFeebasPose76,
	sFeebasPose104,
	sFeebasPose100,
	sFeebasPose174,
	sFeebasPose92,
	sFeebasPose176,
	sFeebasPose84,
	sFeebasPose80,
	sFeebasPose1,
	sFeebasPose22,
	sFeebasPose19,
	sFeebasPose16,
	sFeebasPose13,
	sFeebasPose10,
	sFeebasPose7,
	sFeebasPose4,
};

static const struct PositionSets sAxPositionsFeebas[] = {
	[0] = { .set = { {0, -2}, {-6, -5}, {6, -5}, {0, -9} } },
	[1] = { .set = { {1, -2}, {-6, -6}, {6, -6}, {1, -9} } },
	[2] = { .set = { {-1, -2}, {-6, -4}, {6, -4}, {0, -9} } },
	[3] = { .set = { {5, -3}, {3, -7}, {-5, -4}, {-1, -9} } },
	[4] = { .set = { {4, -3}, {3, -8}, {-5, -4}, {-2, -9} } },
	[5] = { .set = { {5, -3}, {4, -6}, {-4, -3}, {-1, -9} } },
	[6] = { .set = { {9, -6}, {-1, -8}, {-1, -3}, {0, -10} } },
	[7] = { .set = { {8, -5}, {-1, -8}, {-2, -3}, {0, -9} } },
	[8] = { .set = { {9, -6}, {0, -8}, {1, -3}, {0, -9} } },
	[9] = { .set = { {8, -10}, {-2, -5}, {6, -4}, {2, -10} } },
	[10] = { .set = { {8, -9}, {-2, -7}, {5, -4}, {2, -10} } },
	[11] = { .set = { {9, -10}, {-1, -8}, {7, -4}, {2, -10} } },
	[12] = { .set = { {0, -13}, {7, -6}, {-6, -6}, {0, -11} } },
	[13] = { .set = { {0, -13}, {7, -5}, {-6, -6}, {0, -11} } },
	[14] = { .set = { {1, -13}, {7, -7}, {-7, -7}, {1, -11} } },
	[15] = { .set = { {-8, -10}, {2, -5}, {-6, -4}, {-2, -10} } },
	[16] = { .set = { {-8, -9}, {2, -7}, {-5, -4}, {-2, -10} } },
	[17] = { .set = { {-9, -10}, {1, -8}, {-7, -4}, {-2, -10} } },
	[18] = { .set = { {-9, -6}, {1, -8}, {1, -3}, {0, -10} } },
	[19] = { .set = { {-8, -5}, {1, -8}, {2, -3}, {0, -9} } },
	[20] = { .set = { {-9, -6}, {0, -8}, {-1, -3}, {0, -9} } },
	[21] = { .set = { {-5, -3}, {-3, -7}, {5, -4}, {1, -9} } },
	[22] = { .set = { {-4, -3}, {-3, -8}, {5, -4}, {2, -9} } },
	[23] = { .set = { {-5, -3}, {-4, -6}, {4, -3}, {1, -9} } },
	[24] = { .set = { {0, -2}, {-6, -5}, {6, -5}, {0, -9} } },
	[25] = { .set = { {1, -2}, {-6, -6}, {6, -6}, {1, -9} } },
	[26] = { .set = { {-1, -2}, {-6, -4}, {6, -4}, {0, -9} } },
	[27] = { .set = { {5, -3}, {3, -7}, {-5, -4}, {-1, -9} } },
	[28] = { .set = { {4, -3}, {3, -8}, {-5, -4}, {-2, -9} } },
	[29] = { .set = { {5, -3}, {4, -6}, {-4, -3}, {-1, -9} } },
	[30] = { .set = { {9, -6}, {-1, -8}, {-1, -3}, {0, -10} } },
	[31] = { .set = { {8, -5}, {-1, -8}, {-2, -3}, {0, -9} } },
	[32] = { .set = { {9, -6}, {0, -8}, {1, -3}, {0, -9} } },
	[33] = { .set = { {8, -10}, {-2, -5}, {6, -4}, {2, -10} } },
	[34] = { .set = { {8, -9}, {-2, -7}, {5, -4}, {2, -10} } },
	[35] = { .set = { {9, -10}, {-1, -8}, {7, -4}, {2, -10} } },
	[36] = { .set = { {0, -13}, {7, -6}, {-6, -6}, {0, -11} } },
	[37] = { .set = { {0, -13}, {7, -5}, {-6, -6}, {0, -11} } },
	[38] = { .set = { {1, -13}, {7, -7}, {-7, -7}, {1, -11} } },
	[39] = { .set = { {-8, -10}, {2, -5}, {-6, -4}, {-2, -10} } },
	[40] = { .set = { {-8, -9}, {2, -7}, {-5, -4}, {-2, -10} } },
	[41] = { .set = { {-9, -10}, {1, -8}, {-7, -4}, {-2, -10} } },
	[42] = { .set = { {-9, -6}, {1, -8}, {1, -3}, {0, -10} } },
	[43] = { .set = { {-8, -5}, {1, -8}, {2, -3}, {0, -9} } },
	[44] = { .set = { {-9, -6}, {0, -8}, {-1, -3}, {0, -9} } },
	[45] = { .set = { {-5, -3}, {-3, -7}, {5, -4}, {1, -9} } },
	[46] = { .set = { {-4, -3}, {-3, -8}, {5, -4}, {2, -9} } },
	[47] = { .set = { {-5, -3}, {-4, -6}, {4, -3}, {1, -9} } },
	[48] = { .set = { {0, -2}, {-6, -5}, {6, -5}, {0, -9} } },
	[49] = { .set = { {1, -2}, {-6, -6}, {6, -6}, {1, -9} } },
	[50] = { .set = { {-1, -2}, {-6, -4}, {6, -4}, {0, -9} } },
	[51] = { .set = { {5, -3}, {3, -7}, {-5, -4}, {-1, -9} } },
	[52] = { .set = { {4, -3}, {3, -8}, {-5, -4}, {-2, -9} } },
	[53] = { .set = { {5, -3}, {4, -6}, {-4, -3}, {-1, -9} } },
	[54] = { .set = { {9, -6}, {-1, -8}, {-1, -3}, {0, -10} } },
	[55] = { .set = { {8, -5}, {-1, -8}, {-2, -3}, {0, -9} } },
	[56] = { .set = { {9, -6}, {0, -8}, {1, -3}, {0, -9} } },
	[57] = { .set = { {8, -10}, {-2, -5}, {6, -4}, {2, -10} } },
	[58] = { .set = { {8, -9}, {-2, -7}, {5, -4}, {2, -10} } },
	[59] = { .set = { {9, -10}, {-1, -8}, {7, -4}, {2, -10} } },
	[60] = { .set = { {0, -13}, {7, -6}, {-6, -6}, {0, -11} } },
	[61] = { .set = { {0, -13}, {7, -5}, {-6, -6}, {0, -11} } },
	[62] = { .set = { {1, -13}, {7, -7}, {-7, -7}, {1, -11} } },
	[63] = { .set = { {-8, -10}, {2, -5}, {-6, -4}, {-2, -10} } },
	[64] = { .set = { {-8, -9}, {2, -7}, {-5, -4}, {-2, -10} } },
	[65] = { .set = { {-9, -10}, {1, -8}, {-7, -4}, {-2, -10} } },
	[66] = { .set = { {-9, -6}, {1, -8}, {1, -3}, {0, -10} } },
	[67] = { .set = { {-8, -5}, {1, -8}, {2, -3}, {0, -9} } },
	[68] = { .set = { {-9, -6}, {0, -8}, {-1, -3}, {0, -9} } },
	[69] = { .set = { {-5, -3}, {-3, -7}, {5, -4}, {1, -9} } },
	[70] = { .set = { {-4, -3}, {-3, -8}, {5, -4}, {2, -9} } },
	[71] = { .set = { {-5, -3}, {-4, -6}, {4, -3}, {1, -9} } },
	[72] = { .set = { {0, -2}, {-6, -5}, {6, -5}, {0, -9} } },
	[73] = { .set = { {1, -2}, {-6, -6}, {6, -6}, {1, -9} } },
	[74] = { .set = { {-1, -2}, {-6, -4}, {6, -4}, {0, -9} } },
	[75] = { .set = { {0, -3}, {-6, -5}, {6, -5}, {0, -9} } },
	[76] = { .set = { {5, -3}, {3, -7}, {-5, -4}, {-1, -9} } },
	[77] = { .set = { {4, -3}, {3, -8}, {-5, -4}, {-2, -9} } },
	[78] = { .set = { {5, -3}, {4, -6}, {-4, -3}, {-1, -9} } },
	[79] = { .set = { {5, -4}, {3, -7}, {-5, -4}, {0, -9} } },
	[80] = { .set = { {9, -6}, {-1, -8}, {-1, -3}, {0, -10} } },
	[81] = { .set = { {8, -5}, {-1, -8}, {-2, -3}, {0, -9} } },
	[82] = { .set = { {9, -6}, {0, -8}, {1, -3}, {0, -9} } },
	[83] = { .set = { {8, -6}, {-2, -8}, {-2, -3}, {0, -10} } },
	[84] = { .set = { {8, -10}, {-2, -5}, {6, -4}, {2, -10} } },
	[85] = { .set = { {8, -9}, {-2, -7}, {5, -4}, {2, -10} } },
	[86] = { .set = { {9, -10}, {-1, -8}, {7, -4}, {2, -10} } },
	[87] = { .set = { {8, -9}, {-2, -8}, {5, -4}, {1, -10} } },
	[88] = { .set = { {0, -13}, {7, -6}, {-6, -6}, {0, -11} } },
	[89] = { .set = { {0, -13}, {7, -5}, {-6, -6}, {0, -11} } },
	[90] = { .set = { {1, -13}, {7, -7}, {-7, -7}, {1, -11} } },
	[91] = { .set = { {0, -13}, {6, -6}, {-6, -6}, {0, -10} } },
	[92] = { .set = { {-8, -10}, {2, -5}, {-6, -4}, {-2, -10} } },
	[93] = { .set = { {-8, -9}, {2, -7}, {-5, -4}, {-2, -10} } },
	[94] = { .set = { {-9, -10}, {1, -8}, {-7, -4}, {-2, -10} } },
	[95] = { .set = { {-8, -9}, {2, -8}, {-5, -4}, {-1, -10} } },
	[96] = { .set = { {-9, -6}, {1, -8}, {1, -3}, {0, -10} } },
	[97] = { .set = { {-8, -5}, {1, -8}, {2, -3}, {0, -9} } },
	[98] = { .set = { {-9, -6}, {0, -8}, {-1, -3}, {0, -9} } },
	[99] = { .set = { {-8, -6}, {2, -8}, {2, -3}, {0, -10} } },
	[100] = { .set = { {-5, -3}, {-3, -7}, {5, -4}, {1, -9} } },
	[101] = { .set = { {-4, -3}, {-3, -8}, {5, -4}, {2, -9} } },
	[102] = { .set = { {-5, -3}, {-4, -6}, {4, -3}, {1, -9} } },
	[103] = { .set = { {-5, -4}, {-3, -7}, {5, -4}, {0, -9} } },
	[104] = { .set = { {0, -2}, {-6, -5}, {6, -5}, {0, -9} } },
	[105] = { .set = { {1, -2}, {-6, -6}, {6, -6}, {1, -9} } },
	[106] = { .set = { {-1, -2}, {-6, -4}, {6, -4}, {0, -9} } },
	[107] = { .set = { {0, -3}, {-6, -5}, {6, -5}, {0, -9} } },
	[108] = { .set = { {5, -3}, {3, -7}, {-5, -4}, {-1, -9} } },
	[109] = { .set = { {5, -3}, {4, -6}, {-4, -3}, {-1, -9} } },
	[110] = { .set = { {4, -3}, {3, -8}, {-5, -4}, {-2, -9} } },
	[111] = { .set = { {5, -4}, {3, -7}, {-5, -4}, {0, -9} } },
	[112] = { .set = { {9, -6}, {-1, -8}, {-1, -3}, {0, -10} } },
	[113] = { .set = { {9, -6}, {0, -8}, {1, -3}, {0, -9} } },
	[114] = { .set = { {8, -5}, {-1, -8}, {-2, -3}, {0, -9} } },
	[115] = { .set = { {8, -6}, {-2, -8}, {-2, -3}, {0, -10} } },
	[116] = { .set = { {8, -10}, {-2, -5}, {6, -4}, {2, -10} } },
	[117] = { .set = { {8, -10}, {-2, -8}, {6, -4}, {1, -10} } },
	[118] = { .set = { {8, -9}, {-2, -7}, {5, -4}, {2, -10} } },
	[119] = { .set = { {8, -9}, {-2, -8}, {5, -4}, {1, -10} } },
	[120] = { .set = { {0, -13}, {7, -6}, {-6, -6}, {0, -11} } },
	[121] = { .set = { {0, -13}, {7, -5}, {-6, -6}, {0, -11} } },
	[122] = { .set = { {1, -13}, {7, -7}, {-7, -7}, {1, -11} } },
	[123] = { .set = { {0, -13}, {6, -6}, {-6, -6}, {0, -10} } },
	[124] = { .set = { {-8, -10}, {2, -5}, {-6, -4}, {-2, -10} } },
	[125] = { .set = { {-8, -9}, {2, -7}, {-5, -4}, {-2, -10} } },
	[126] = { .set = { {-9, -10}, {1, -8}, {-7, -4}, {-2, -10} } },
	[127] = { .set = { {-8, -9}, {2, -8}, {-5, -4}, {-1, -10} } },
	[128] = { .set = { {-9, -6}, {1, -8}, {1, -3}, {0, -10} } },
	[129] = { .set = { {-8, -5}, {1, -8}, {2, -3}, {0, -9} } },
	[130] = { .set = { {-9, -6}, {0, -8}, {-1, -3}, {0, -9} } },
	[131] = { .set = { {-8, -6}, {2, -8}, {2, -3}, {0, -10} } },
	[132] = { .set = { {-5, -3}, {-3, -7}, {5, -4}, {1, -9} } },
	[133] = { .set = { {-4, -3}, {-3, -8}, {5, -4}, {2, -9} } },
	[134] = { .set = { {-5, -3}, {-4, -6}, {4, -3}, {1, -9} } },
	[135] = { .set = { {-5, -4}, {-3, -7}, {5, -4}, {0, -9} } },
	[136] = { .set = { {-5, -4}, {-2, -10}, {5, -6}, {1, -10} } },
	[137] = { .set = { {-5, -3}, {-2, -9}, {6, -6}, {1, -9} } },
	[138] = { .set = { {-1, -1}, {-5, -5}, {6, -4}, {0, -9} } },
	[139] = { .set = { {3, -2}, {2, -8}, {-7, -7}, {-1, -8} } },
	[140] = { .set = { {8, -3}, {0, -9}, {-2, -4}, {0, -7} } },
	[141] = { .set = { {7, -5}, {-3, -7}, {3, -3}, {0, -8} } },
	[142] = { .set = { {-1, -8}, {7, -9}, {-7, -6}, {0, -8} } },
	[143] = { .set = { {-8, -5}, {2, -7}, {-4, -3}, {-1, -8} } },
	[144] = { .set = { {-9, -3}, {-1, -9}, {1, -4}, {-1, -7} } },
	[145] = { .set = { {-4, -2}, {-3, -8}, {6, -7}, {0, -8} } },
	[146] = { .set = { {0, -2}, {-6, -5}, {6, -5}, {0, -9} } },
	[147] = { .set = { {1, -2}, {-6, -6}, {6, -6}, {1, -9} } },
	[148] = { .set = { {-1, -2}, {-6, -4}, {6, -4}, {0, -9} } },
	[149] = { .set = { {5, -3}, {3, -7}, {-5, -4}, {-1, -9} } },
	[150] = { .set = { {4, -3}, {3, -8}, {-5, -4}, {-2, -9} } },
	[151] = { .set = { {5, -3}, {4, -6}, {-4, -3}, {-1, -9} } },
	[152] = { .set = { {9, -6}, {-1, -8}, {-1, -3}, {0, -10} } },
	[153] = { .set = { {8, -5}, {-1, -8}, {-2, -3}, {0, -9} } },
	[154] = { .set = { {9, -6}, {0, -8}, {1, -3}, {0, -9} } },
	[155] = { .set = { {8, -10}, {-2, -5}, {6, -4}, {2, -10} } },
	[156] = { .set = { {8, -9}, {-2, -7}, {5, -4}, {2, -10} } },
	[157] = { .set = { {9, -10}, {-1, -8}, {7, -4}, {2, -10} } },
	[158] = { .set = { {0, -13}, {7, -6}, {-6, -6}, {0, -11} } },
	[159] = { .set = { {0, -13}, {7, -5}, {-6, -6}, {0, -11} } },
	[160] = { .set = { {1, -13}, {7, -7}, {-7, -7}, {1, -11} } },
	[161] = { .set = { {-8, -10}, {2, -5}, {-6, -4}, {-2, -10} } },
	[162] = { .set = { {-8, -9}, {2, -7}, {-5, -4}, {-2, -10} } },
	[163] = { .set = { {-9, -10}, {1, -8}, {-7, -4}, {-2, -10} } },
	[164] = { .set = { {-9, -6}, {1, -8}, {1, -3}, {0, -10} } },
	[165] = { .set = { {-8, -5}, {1, -8}, {2, -3}, {0, -9} } },
	[166] = { .set = { {-9, -6}, {0, -8}, {-1, -3}, {0, -9} } },
	[167] = { .set = { {-5, -3}, {-3, -7}, {5, -4}, {1, -9} } },
	[168] = { .set = { {-4, -3}, {-3, -8}, {5, -4}, {2, -9} } },
	[169] = { .set = { {-5, -3}, {-4, -6}, {4, -3}, {1, -9} } },
	[170] = { .set = { {0, -3}, {-6, -5}, {6, -5}, {0, -9} } },
	[171] = { .set = { {-5, -4}, {-3, -7}, {5, -4}, {0, -9} } },
	[172] = { .set = { {-8, -6}, {2, -8}, {2, -3}, {0, -10} } },
	[173] = { .set = { {-7, -9}, {3, -8}, {-4, -4}, {0, -10} } },
	[174] = { .set = { {0, -13}, {6, -6}, {-6, -6}, {0, -10} } },
	[175] = { .set = { {7, -9}, {-3, -8}, {4, -4}, {0, -10} } },
	[176] = { .set = { {8, -6}, {-2, -8}, {-2, -3}, {0, -10} } },
	[177] = { .set = { {5, -4}, {3, -7}, {-5, -4}, {0, -9} } },
	[178] = { .set = { {0, -3}, {-6, -5}, {6, -5}, {0, -9} } },
	[179] = { .set = { {5, -4}, {3, -7}, {-5, -4}, {0, -9} } },
	[180] = { .set = { {8, -6}, {-2, -8}, {-2, -3}, {0, -10} } },
	[181] = { .set = { {7, -9}, {-3, -8}, {4, -4}, {0, -10} } },
	[182] = { .set = { {0, -13}, {6, -6}, {-6, -6}, {0, -10} } },
	[183] = { .set = { {-7, -9}, {3, -8}, {-4, -4}, {0, -10} } },
	[184] = { .set = { {-8, -6}, {2, -8}, {2, -3}, {0, -10} } },
	[185] = { .set = { {-5, -4}, {-3, -7}, {5, -4}, {0, -9} } },
	[186] = { .set = { {0, -2}, {-6, -5}, {6, -5}, {0, -9} } },
	[187] = { .set = { {1, -2}, {-6, -6}, {6, -6}, {1, -9} } },
	[188] = { .set = { {-1, -2}, {-6, -4}, {6, -4}, {0, -9} } },
	[189] = { .set = { {5, -3}, {3, -7}, {-5, -4}, {-1, -9} } },
	[190] = { .set = { {4, -3}, {3, -8}, {-5, -4}, {-2, -9} } },
	[191] = { .set = { {5, -3}, {4, -6}, {-4, -3}, {-1, -9} } },
	[192] = { .set = { {9, -6}, {-1, -8}, {-1, -3}, {0, -10} } },
	[193] = { .set = { {8, -5}, {-1, -8}, {-2, -3}, {0, -9} } },
	[194] = { .set = { {9, -6}, {0, -8}, {1, -3}, {0, -9} } },
	[195] = { .set = { {8, -10}, {-2, -5}, {6, -4}, {2, -10} } },
	[196] = { .set = { {8, -9}, {-2, -7}, {5, -4}, {2, -10} } },
	[197] = { .set = { {9, -10}, {-1, -8}, {7, -4}, {2, -10} } },
	[198] = { .set = { {0, -13}, {7, -6}, {-6, -6}, {0, -11} } },
	[199] = { .set = { {0, -13}, {7, -5}, {-6, -6}, {0, -11} } },
	[200] = { .set = { {1, -13}, {7, -7}, {-7, -7}, {1, -11} } },
	[201] = { .set = { {-8, -10}, {2, -5}, {-6, -4}, {-2, -10} } },
	[202] = { .set = { {-8, -9}, {2, -7}, {-5, -4}, {-2, -10} } },
	[203] = { .set = { {-9, -10}, {1, -8}, {-7, -4}, {-2, -10} } },
	[204] = { .set = { {-9, -6}, {1, -8}, {1, -3}, {0, -10} } },
	[205] = { .set = { {-8, -5}, {1, -8}, {2, -3}, {0, -9} } },
	[206] = { .set = { {-9, -6}, {0, -8}, {-1, -3}, {0, -9} } },
	[207] = { .set = { {-5, -3}, {-3, -7}, {5, -4}, {1, -9} } },
	[208] = { .set = { {-4, -3}, {-3, -8}, {5, -4}, {2, -9} } },
	[209] = { .set = { {-5, -3}, {-4, -6}, {4, -3}, {1, -9} } },
	[210] = { .set = { {0, -3}, {-6, -5}, {6, -5}, {0, -9} } },
	[211] = { .set = { {-5, -4}, {-3, -7}, {5, -4}, {0, -9} } },
	[212] = { .set = { {-8, -6}, {2, -8}, {2, -3}, {0, -10} } },
	[213] = { .set = { {-7, -9}, {3, -8}, {-4, -4}, {0, -10} } },
	[214] = { .set = { {0, -13}, {6, -6}, {-6, -6}, {0, -10} } },
	[215] = { .set = { {7, -9}, {-3, -8}, {4, -4}, {0, -10} } },
	[216] = { .set = { {8, -6}, {-2, -8}, {-2, -3}, {0, -10} } },
	[217] = { .set = { {5, -4}, {3, -7}, {-5, -4}, {0, -9} } },
	[218] = { .set = { {0, -2}, {-6, -5}, {6, -5}, {0, -9} } },
	[219] = { .set = { {-5, -3}, {-3, -7}, {5, -4}, {1, -9} } },
	[220] = { .set = { {-9, -6}, {1, -8}, {1, -3}, {0, -10} } },
	[221] = { .set = { {-8, -10}, {2, -5}, {-6, -4}, {-2, -10} } },
	[222] = { .set = { {0, -13}, {7, -6}, {-6, -6}, {0, -11} } },
	[223] = { .set = { {8, -10}, {-2, -5}, {6, -4}, {2, -10} } },
	[224] = { .set = { {9, -6}, {-1, -8}, {-1, -3}, {0, -10} } },
	[225] = { .set = { {5, -3}, {3, -7}, {-5, -4}, {-1, -9} } },
};

static const ax_anim *const sFeebasAnimTable1[] = {
	sFeebasAnims_1_1,
	sFeebasAnims_1_2,
	sFeebasAnims_1_3,
	sFeebasAnims_1_4,
	sFeebasAnims_1_5,
	sFeebasAnims_1_6,
	sFeebasAnims_1_7,
	sFeebasAnims_1_8,
};

static const ax_anim *const sFeebasAnimTable2[] = {
	sFeebasAnims_2_1,
	sFeebasAnims_2_2,
	sFeebasAnims_2_3,
	sFeebasAnims_2_4,
	sFeebasAnims_2_5,
	sFeebasAnims_2_6,
	sFeebasAnims_2_7,
	sFeebasAnims_2_8,
};

static const ax_anim *const sFeebasAnimTable3[] = {
	sFeebasAnims_3_1,
	sFeebasAnims_3_2,
	sFeebasAnims_3_3,
	sFeebasAnims_3_4,
	sFeebasAnims_3_5,
	sFeebasAnims_3_6,
	sFeebasAnims_3_7,
	sFeebasAnims_3_8,
};

static const ax_anim *const sFeebasAnimTable4[] = {
	sFeebasAnims_4_1,
	sFeebasAnims_4_2,
	sFeebasAnims_4_3,
	sFeebasAnims_4_4,
	sFeebasAnims_4_5,
	sFeebasAnims_4_6,
	sFeebasAnims_4_7,
	sFeebasAnims_4_8,
};

static const ax_anim *const sFeebasAnimTable5[] = {
	sFeebasAnims_5_1,
	sFeebasAnims_5_2,
	sFeebasAnims_5_3,
	sFeebasAnims_5_4,
	sFeebasAnims_5_5,
	sFeebasAnims_5_6,
	sFeebasAnims_5_7,
	sFeebasAnims_5_8,
};

static const ax_anim *const sFeebasAnimTable6[] = {
	gAxSharedAnim_00138,
	gAxSharedAnim_00138,
	gAxSharedAnim_00138,
	gAxSharedAnim_00138,
	gAxSharedAnim_00138,
	gAxSharedAnim_00138,
	gAxSharedAnim_00138,
	gAxSharedAnim_00138,
};

static const ax_anim *const sFeebasAnimTable7[] = {
	gAxSharedAnim_00467,
	gAxSharedAnim_00480,
	gAxSharedAnim_00488,
	gAxSharedAnim_00497,
	gAxSharedAnim_00509,
	gAxSharedAnim_00518,
	gAxSharedAnim_00524,
	gAxSharedAnim_00530,
};

static const ax_anim *const sFeebasAnimTable8[] = {
	sFeebasAnims_8_1,
	sFeebasAnims_8_2,
	sFeebasAnims_8_3,
	sFeebasAnims_8_4,
	sFeebasAnims_8_5,
	sFeebasAnims_8_6,
	sFeebasAnims_8_7,
	sFeebasAnims_8_8,
};

static const ax_anim *const sFeebasAnimTable9[] = {
	gAxSharedAnim_00795,
	sFeebasAnims_9_2,
	sFeebasAnims_9_3,
	sFeebasAnims_9_4,
	sFeebasAnims_9_5,
	sFeebasAnims_9_6,
	sFeebasAnims_9_7,
	gAxSharedAnim_00810,
};

static const ax_anim *const sFeebasAnimTable10[] = {
	gAxSharedAnim_00905,
	gAxSharedAnim_00918,
	gAxSharedAnim_00930,
	gAxSharedAnim_00942,
	gAxSharedAnim_00955,
	gAxSharedAnim_00965,
	gAxSharedAnim_00978,
	gAxSharedAnim_00993,
};

static const ax_anim *const sFeebasAnimTable11[] = {
	sFeebasAnims_11_1,
	sFeebasAnims_11_2,
	sFeebasAnims_11_3,
	sFeebasAnims_11_4,
	sFeebasAnims_11_5,
	sFeebasAnims_11_6,
	sFeebasAnims_11_7,
	sFeebasAnims_11_8,
};

static const ax_anim *const sFeebasAnimTable12[] = {
	gAxSharedAnim_01337,
	gAxSharedAnim_01414,
	gAxSharedAnim_01392,
	gAxSharedAnim_01380,
	gAxSharedAnim_01379,
	gAxSharedAnim_01368,
	gAxSharedAnim_01354,
	gAxSharedAnim_01338,
};

static const ax_anim *const sFeebasAnimTable13[] = {
	gAxSharedAnim_01422,
	gAxSharedAnim_01464,
	gAxSharedAnim_01461,
	gAxSharedAnim_01456,
	gAxSharedAnim_01446,
	gAxSharedAnim_01443,
	gAxSharedAnim_01438,
	gAxSharedAnim_01429,
};

static const ax_anim *const *const sAxAnimationsFeebas[] = {
	sFeebasAnimTable1,
	sFeebasAnimTable2,
	sFeebasAnimTable3,
	sFeebasAnimTable4,
	sFeebasAnimTable5,
	sFeebasAnimTable6,
	sFeebasAnimTable7,
	sFeebasAnimTable8,
	sFeebasAnimTable9,
	sFeebasAnimTable10,
	sFeebasAnimTable11,
	sFeebasAnimTable12,
	sFeebasAnimTable13,
};

static const ax_sprite *const sAxSpritesFeebas[] = {
	sFeebasSprites1,
	sFeebasSprites2,
	sFeebasSprites3,
	sFeebasSprites4,
	sFeebasSprites5,
	sFeebasSprites6,
	sFeebasSprites7,
	sFeebasSprites8,
	sFeebasSprites9,
	sFeebasSprites10,
	sFeebasSprites11,
	sFeebasSprites12,
	sFeebasSprites13,
	sFeebasSprites14,
	sFeebasSprites15,
	sFeebasSprites16,
	sFeebasSprites17,
	sFeebasSprites18,
	sFeebasSprites19,
	sFeebasSprites20,
	sFeebasSprites21,
	sFeebasSprites22,
	sFeebasSprites23,
	sFeebasSprites24,
	sFeebasSprites25,
	sFeebasSprites26,
	sFeebasSprites27,
};

static const axmain sAxMainFeebas = {
	.poses = sAxPosesFeebas,
	.animations = sAxAnimationsFeebas,
	.animCount = ARRAY_COUNT(sAxAnimationsFeebas),
	.spriteData = sAxSpritesFeebas,
	.positions = sAxPositionsFeebas,
};
