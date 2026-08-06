/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainMurkrow;
const SiroArchive gAxMurkrow = {"SIRO", &sAxMainMurkrow};

static const ax_pose sMurkrowPose1[] = {
	AX_POSE(0, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose2[] = {
	AX_POSE(1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose3[] = {
	AX_POSE(2, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose4[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose5[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose6[] = {
	AX_POSE(5, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose7[] = {
	AX_POSE(6, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose8[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose9[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose10[] = {
	AX_POSE(9, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose11[] = {
	AX_POSE(6, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose12[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose13[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose14[] = {
	AX_POSE(5, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose15[] = {
	AX_POSE(2, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose16[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose19[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose22[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose25[] = {
	AX_POSE(12, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose28[] = {
	AX_POSE(13, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose31[] = {
	AX_POSE(14, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose34[] = {
	AX_POSE(13, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose37[] = {
	AX_POSE(12, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose40[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose65[] = {
	AX_POSE(15, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose66[] = {
	AX_POSE(16, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose67[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose68[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose69[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose70[] = {
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose71[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose72[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose73[] = {
	AX_POSE(23, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose74[] = {
	AX_POSE(24, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose75[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose76[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose77[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose78[] = {
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose79[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose80[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose97[] = {
	AX_POSE(25, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose98[] = {
	AX_POSE(26, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose99[] = {
	AX_POSE(27, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose100[] = {
	AX_POSE(28, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose101[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose102[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose103[] = {
	AX_POSE(31, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose104[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose105[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose106[] = {
	AX_POSE(28, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose117[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose118[] = {
	AX_POSE(13, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose119[] = {
	AX_POSE(14, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose120[] = {
	AX_POSE(13, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose121[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose132[] = {
	AX_POSE(0, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose135[] = {
	AX_POSE(2, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose138[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose141[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose144[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose147[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose150[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose153[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMurkrowPose159[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_anim sMurkrowAnims_1_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 1, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 1, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 1, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_1_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 2, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_1_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 5, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 5, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 5, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 4, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_1_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 7, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 7, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 7, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_1_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 8, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_1_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 11, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 11, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 11, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 10, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_1_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 13, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 13, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 13, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_1_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 14, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 16, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 17, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 18, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 18, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 18, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 18, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 18, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 18, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 16, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 19, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 20, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 21, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 21, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 21, .offset = {18, 20}, .shadow = {18, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 21, .offset = {19, 19}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 21, .offset = {18, 20}, .shadow = {18, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 21, .offset = {19, 19}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 19, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 22, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 23, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 24, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 24, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 22, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 26, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 27, .offset = {4, -6}, .shadow = {4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {10, -13}, .shadow = {10, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {18, -19}, .shadow = {18, -23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 27, .offset = {19, -18}, .shadow = {19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {18, -19}, .shadow = {18, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {19, -18}, .shadow = {19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 29, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 30, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {0, -11}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {0, -20}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 30, .offset = {1, -20}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {0, -20}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {1, -20}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 32, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 33, .offset = {-4, -6}, .shadow = {-4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {-10, -13}, .shadow = {-10, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-18, -19}, .shadow = {-18, -23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 33, .offset = {-19, -18}, .shadow = {-19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-18, -19}, .shadow = {-18, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-19, -18}, .shadow = {-19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 35, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 36, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {-16, 0}, .shadow = {-16, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 36, .offset = {-16, 1}, .shadow = {-16, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {-16, 0}, .shadow = {-16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {-16, 1}, .shadow = {-16, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 38, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 39, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-18, 20}, .shadow = {-18, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {-19, 19}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-18, 20}, .shadow = {-18, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-19, 19}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 41, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 42, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 42, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 45, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {18, 20}, .shadow = {18, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 45, .offset = {19, 19}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {18, 20}, .shadow = {18, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {19, 19}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 47, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 48, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 48, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 50, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 51, .offset = {4, -6}, .shadow = {4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {10, -13}, .shadow = {10, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {18, -19}, .shadow = {18, -23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {19, -18}, .shadow = {19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {18, -19}, .shadow = {18, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {19, -18}, .shadow = {19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 53, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 54, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {0, -11}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, -20}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 54, .offset = {1, -20}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, -20}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {1, -20}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 56, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 57, .offset = {-4, -6}, .shadow = {-4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {-10, -13}, .shadow = {-10, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-18, -19}, .shadow = {-18, -23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 57, .offset = {-19, -18}, .shadow = {-19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-18, -19}, .shadow = {-18, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-19, -18}, .shadow = {-19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 59, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 60, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 60, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {-16, 0}, .shadow = {-16, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 60, .offset = {-16, 1}, .shadow = {-16, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {-16, 0}, .shadow = {-16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {-16, 1}, .shadow = {-16, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 62, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 63, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-18, 20}, .shadow = {-18, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 63, .offset = {-19, 19}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-18, 20}, .shadow = {-18, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-19, 19}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 65, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 65, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 67, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 67, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 69, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 71, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 71, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 73, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 73, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 75, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 75, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 77, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 77, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 79, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 79, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 84, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 81, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 86, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 88, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 85, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 90, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 87, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 92, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 89, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 94, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 91, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 80, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 93, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 82, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_8_1[] = {
	{ .frames = 46, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 106, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_8_2[] = {
	{ .frames = 46, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 113, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_8_3[] = {
	{ .frames = 46, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 112, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_8_4[] = {
	{ .frames = 46, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 111, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_8_5[] = {
	{ .frames = 46, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_8_6[] = {
	{ .frames = 46, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_8_7[] = {
	{ .frames = 46, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 108, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_8_8[] = {
	{ .frames = 46, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 115, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {8, 11}, .shadow = {8, 11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {7, 18}, .shadow = {7, 18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 118, .offset = {0, 21}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 119, .offset = {-7, 18}, .shadow = {-7, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {-8, 11}, .shadow = {-8, 11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 121, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 114, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {19, 10}, .shadow = {19, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 117, .offset = {19, 20}, .shadow = {19, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 118, .offset = {11, 21}, .shadow = {11, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 120, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 121, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {10, -7}, .shadow = {10, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 116, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 117, .offset = {16, 4}, .shadow = {16, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {12, 7}, .shadow = {12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 119, .offset = {4, 3}, .shadow = {4, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 120, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {12, -22}, .shadow = {12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 115, .offset = {19, -22}, .shadow = {19, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 116, .offset = {20, -14}, .shadow = {20, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {17, -5}, .shadow = {17, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 118, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 119, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {-7, -18}, .shadow = {-7, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 114, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 115, .offset = {7, -18}, .shadow = {7, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {9, -12}, .shadow = {9, -12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 117, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 116, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {-12, -22}, .shadow = {-12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 121, .offset = {-19, -22}, .shadow = {-19, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 120, .offset = {-20, -14}, .shadow = {-20, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-17, -5}, .shadow = {-17, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 118, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 115, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {-10, -7}, .shadow = {-10, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 120, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 119, .offset = {-16, 4}, .shadow = {-16, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-12, 7}, .shadow = {-12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 117, .offset = {-4, 3}, .shadow = {-4, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 114, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {-19, 10}, .shadow = {-19, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 119, .offset = {-19, 20}, .shadow = {-19, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 118, .offset = {-11, 21}, .shadow = {-11, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 116, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 132, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 132, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 132, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 131, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 131, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 131, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 135, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 135, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 135, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 134, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 134, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 134, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 138, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 138, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 138, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 137, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 141, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 141, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 140, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 140, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 144, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 144, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 143, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 143, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 147, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 147, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 147, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 146, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 146, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 146, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 150, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 150, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 150, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 149, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 149, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 149, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMurkrowAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 153, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 153, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 152, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 152, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sMurkrowGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_1.4bpp.lz");
static const ax_sprite sMurkrowSprites1[] = {
	{sMurkrowGfx1, ARRAY_COUNT(sMurkrowGfx1)}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_2.4bpp.lz");
static const ax_sprite sMurkrowSprites2[] = {
	{sMurkrowGfx2, ARRAY_COUNT(sMurkrowGfx2)}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_3.4bpp.lz");
static const ax_sprite sMurkrowSprites3[] = {
	{sMurkrowGfx3, ARRAY_COUNT(sMurkrowGfx3)}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_4.4bpp.lz");
static const ax_sprite sMurkrowSprites4[] = {
	{sMurkrowGfx4, ARRAY_COUNT(sMurkrowGfx4)}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_5.4bpp.lz");
static const ax_sprite sMurkrowSprites5[] = {
	{sMurkrowGfx5, ARRAY_COUNT(sMurkrowGfx5)}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_6.4bpp.lz");
static const ax_sprite sMurkrowSprites6[] = {
	{sMurkrowGfx6, ARRAY_COUNT(sMurkrowGfx6)}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_7.4bpp.lz");
static const ax_sprite sMurkrowSprites7[] = {
	{sMurkrowGfx7, ARRAY_COUNT(sMurkrowGfx7)}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_8.4bpp.lz");
static const ax_sprite sMurkrowSprites8[] = {
	{sMurkrowGfx8, ARRAY_COUNT(sMurkrowGfx8)}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_9.4bpp.lz");
static const ax_sprite sMurkrowSprites9[] = {
	{sMurkrowGfx9, ARRAY_COUNT(sMurkrowGfx9)}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_10.4bpp.lz");
static const ax_sprite sMurkrowSprites10[] = {
	{sMurkrowGfx10, ARRAY_COUNT(sMurkrowGfx10)}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_11.4bpp.lz");
static const u8 sMurkrowGfx11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_11_1.4bpp.lz");
static const u8 sMurkrowGfx11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_11_2.4bpp.lz");
static const ax_sprite sMurkrowSprites11[] = {
	{sMurkrowGfx11, ARRAY_COUNT(sMurkrowGfx11)}, 
	{NULL, 32}, 
	{sMurkrowGfx11_1, ARRAY_COUNT(sMurkrowGfx11_1)}, 
	{NULL, 64}, 
	{sMurkrowGfx11_2, ARRAY_COUNT(sMurkrowGfx11_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_12.4bpp.lz");
static const u8 sMurkrowGfx12_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_12_1.4bpp.lz");
static const ax_sprite sMurkrowSprites12[] = {
	{NULL, 32}, 
	{sMurkrowGfx12, ARRAY_COUNT(sMurkrowGfx12)}, 
	{NULL, 32}, 
	{sMurkrowGfx12_1, ARRAY_COUNT(sMurkrowGfx12_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_13.4bpp.lz");
static const ax_sprite sMurkrowSprites13[] = {
	{sMurkrowGfx13, ARRAY_COUNT(sMurkrowGfx13)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_14.4bpp.lz");
static const u8 sMurkrowGfx14_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_14_1.4bpp.lz");
static const u8 sMurkrowGfx14_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_14_2.4bpp.lz");
static const ax_sprite sMurkrowSprites14[] = {
	{sMurkrowGfx14, ARRAY_COUNT(sMurkrowGfx14)}, 
	{NULL, 32}, 
	{sMurkrowGfx14_1, ARRAY_COUNT(sMurkrowGfx14_1)}, 
	{NULL, 64}, 
	{sMurkrowGfx14_2, ARRAY_COUNT(sMurkrowGfx14_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_15.4bpp.lz");
static const ax_sprite sMurkrowSprites15[] = {
	{sMurkrowGfx15, ARRAY_COUNT(sMurkrowGfx15)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_16.4bpp.lz");
static const ax_sprite sMurkrowSprites16[] = {
	{sMurkrowGfx16, ARRAY_COUNT(sMurkrowGfx16)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_17.4bpp.lz");
static const u8 sMurkrowGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_17_1.4bpp.lz");
static const ax_sprite sMurkrowSprites17[] = {
	{sMurkrowGfx17, ARRAY_COUNT(sMurkrowGfx17)}, 
	{NULL, 32}, 
	{sMurkrowGfx17_1, ARRAY_COUNT(sMurkrowGfx17_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_18.4bpp.lz");
static const u8 sMurkrowGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_18_1.4bpp.lz");
static const u8 sMurkrowGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_18_2.4bpp.lz");
static const ax_sprite sMurkrowSprites18[] = {
	{sMurkrowGfx18, ARRAY_COUNT(sMurkrowGfx18)}, 
	{NULL, 32}, 
	{sMurkrowGfx18_1, ARRAY_COUNT(sMurkrowGfx18_1)}, 
	{NULL, 32}, 
	{sMurkrowGfx18_2, ARRAY_COUNT(sMurkrowGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_19.4bpp.lz");
static const u8 sMurkrowGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_19_1.4bpp.lz");
static const u8 sMurkrowGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_19_2.4bpp.lz");
static const ax_sprite sMurkrowSprites19[] = {
	{sMurkrowGfx19, ARRAY_COUNT(sMurkrowGfx19)}, 
	{NULL, 32}, 
	{sMurkrowGfx19_1, ARRAY_COUNT(sMurkrowGfx19_1)}, 
	{NULL, 32}, 
	{sMurkrowGfx19_2, ARRAY_COUNT(sMurkrowGfx19_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_20.4bpp.lz");
static const u8 sMurkrowGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_20_1.4bpp.lz");
static const u8 sMurkrowGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_20_2.4bpp.lz");
static const ax_sprite sMurkrowSprites20[] = {
	{sMurkrowGfx20, ARRAY_COUNT(sMurkrowGfx20)}, 
	{NULL, 32}, 
	{sMurkrowGfx20_1, ARRAY_COUNT(sMurkrowGfx20_1)}, 
	{NULL, 64}, 
	{sMurkrowGfx20_2, ARRAY_COUNT(sMurkrowGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_21.4bpp.lz");
static const u8 sMurkrowGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_21_1.4bpp.lz");
static const ax_sprite sMurkrowSprites21[] = {
	{sMurkrowGfx21, ARRAY_COUNT(sMurkrowGfx21)}, 
	{NULL, 32}, 
	{sMurkrowGfx21_1, ARRAY_COUNT(sMurkrowGfx21_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_22.4bpp.lz");
static const u8 sMurkrowGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_22_1.4bpp.lz");
static const u8 sMurkrowGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_22_2.4bpp.lz");
static const ax_sprite sMurkrowSprites22[] = {
	{sMurkrowGfx22, ARRAY_COUNT(sMurkrowGfx22)}, 
	{NULL, 32}, 
	{sMurkrowGfx22_1, ARRAY_COUNT(sMurkrowGfx22_1)}, 
	{NULL, 32}, 
	{sMurkrowGfx22_2, ARRAY_COUNT(sMurkrowGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_23.4bpp.lz");
static const u8 sMurkrowGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_23_1.4bpp.lz");
static const ax_sprite sMurkrowSprites23[] = {
	{sMurkrowGfx23, ARRAY_COUNT(sMurkrowGfx23)}, 
	{NULL, 64}, 
	{sMurkrowGfx23_1, ARRAY_COUNT(sMurkrowGfx23_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_24.4bpp.lz");
static const ax_sprite sMurkrowSprites24[] = {
	{sMurkrowGfx24, ARRAY_COUNT(sMurkrowGfx24)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_25.4bpp.lz");
static const u8 sMurkrowGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_25_1.4bpp.lz");
static const ax_sprite sMurkrowSprites25[] = {
	{sMurkrowGfx25, ARRAY_COUNT(sMurkrowGfx25)}, 
	{NULL, 32}, 
	{sMurkrowGfx25_1, ARRAY_COUNT(sMurkrowGfx25_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_26.4bpp.lz");
static const ax_sprite sMurkrowSprites26[] = {
	{sMurkrowGfx26, ARRAY_COUNT(sMurkrowGfx26)}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_27.4bpp.lz");
static const ax_sprite sMurkrowSprites27[] = {
	{sMurkrowGfx27, ARRAY_COUNT(sMurkrowGfx27)}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_28.4bpp.lz");
static const ax_sprite sMurkrowSprites28[] = {
	{sMurkrowGfx28, ARRAY_COUNT(sMurkrowGfx28)}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_29.4bpp.lz");
static const ax_sprite sMurkrowSprites29[] = {
	{sMurkrowGfx29, ARRAY_COUNT(sMurkrowGfx29)}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_30.4bpp.lz");
static const ax_sprite sMurkrowSprites30[] = {
	{sMurkrowGfx30, ARRAY_COUNT(sMurkrowGfx30)}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_31.4bpp.lz");
static const ax_sprite sMurkrowSprites31[] = {
	{sMurkrowGfx31, ARRAY_COUNT(sMurkrowGfx31)}, 
	{NULL, 0}
};
static const u8 sMurkrowGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/murkrow/sprite_32.4bpp.lz");
static const ax_sprite sMurkrowSprites32[] = {
	{sMurkrowGfx32, ARRAY_COUNT(sMurkrowGfx32)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesMurkrow[] = {
	sMurkrowPose1,
	sMurkrowPose2,
	sMurkrowPose3,
	sMurkrowPose4,
	sMurkrowPose5,
	sMurkrowPose6,
	sMurkrowPose7,
	sMurkrowPose8,
	sMurkrowPose9,
	sMurkrowPose10,
	sMurkrowPose11,
	sMurkrowPose12,
	sMurkrowPose13,
	sMurkrowPose14,
	sMurkrowPose15,
	sMurkrowPose16,
	sMurkrowPose1,
	sMurkrowPose2,
	sMurkrowPose19,
	sMurkrowPose3,
	sMurkrowPose4,
	sMurkrowPose22,
	sMurkrowPose5,
	sMurkrowPose6,
	sMurkrowPose25,
	sMurkrowPose7,
	sMurkrowPose8,
	sMurkrowPose28,
	sMurkrowPose9,
	sMurkrowPose10,
	sMurkrowPose31,
	sMurkrowPose11,
	sMurkrowPose12,
	sMurkrowPose34,
	sMurkrowPose13,
	sMurkrowPose14,
	sMurkrowPose37,
	sMurkrowPose15,
	sMurkrowPose16,
	sMurkrowPose40,
	sMurkrowPose1,
	sMurkrowPose2,
	sMurkrowPose19,
	sMurkrowPose3,
	sMurkrowPose4,
	sMurkrowPose22,
	sMurkrowPose5,
	sMurkrowPose6,
	sMurkrowPose25,
	sMurkrowPose7,
	sMurkrowPose8,
	sMurkrowPose28,
	sMurkrowPose9,
	sMurkrowPose10,
	sMurkrowPose31,
	sMurkrowPose11,
	sMurkrowPose12,
	sMurkrowPose34,
	sMurkrowPose13,
	sMurkrowPose14,
	sMurkrowPose37,
	sMurkrowPose15,
	sMurkrowPose16,
	sMurkrowPose40,
	sMurkrowPose65,
	sMurkrowPose66,
	sMurkrowPose67,
	sMurkrowPose68,
	sMurkrowPose69,
	sMurkrowPose70,
	sMurkrowPose71,
	sMurkrowPose72,
	sMurkrowPose73,
	sMurkrowPose74,
	sMurkrowPose75,
	sMurkrowPose76,
	sMurkrowPose77,
	sMurkrowPose78,
	sMurkrowPose79,
	sMurkrowPose80,
	sMurkrowPose1,
	sMurkrowPose2,
	sMurkrowPose3,
	sMurkrowPose4,
	sMurkrowPose5,
	sMurkrowPose6,
	sMurkrowPose7,
	sMurkrowPose8,
	sMurkrowPose9,
	sMurkrowPose10,
	sMurkrowPose11,
	sMurkrowPose12,
	sMurkrowPose13,
	sMurkrowPose14,
	sMurkrowPose15,
	sMurkrowPose16,
	sMurkrowPose97,
	sMurkrowPose98,
	sMurkrowPose99,
	sMurkrowPose100,
	sMurkrowPose101,
	sMurkrowPose102,
	sMurkrowPose103,
	sMurkrowPose104,
	sMurkrowPose105,
	sMurkrowPose106,
	sMurkrowPose65,
	sMurkrowPose79,
	sMurkrowPose77,
	sMurkrowPose75,
	sMurkrowPose73,
	sMurkrowPose71,
	sMurkrowPose69,
	sMurkrowPose67,
	sMurkrowPose19,
	sMurkrowPose40,
	sMurkrowPose117,
	sMurkrowPose118,
	sMurkrowPose119,
	sMurkrowPose120,
	sMurkrowPose121,
	sMurkrowPose22,
	sMurkrowPose66,
	sMurkrowPose68,
	sMurkrowPose70,
	sMurkrowPose72,
	sMurkrowPose74,
	sMurkrowPose76,
	sMurkrowPose78,
	sMurkrowPose80,
	sMurkrowPose65,
	sMurkrowPose132,
	sMurkrowPose2,
	sMurkrowPose67,
	sMurkrowPose135,
	sMurkrowPose4,
	sMurkrowPose69,
	sMurkrowPose138,
	sMurkrowPose6,
	sMurkrowPose71,
	sMurkrowPose141,
	sMurkrowPose8,
	sMurkrowPose73,
	sMurkrowPose144,
	sMurkrowPose10,
	sMurkrowPose75,
	sMurkrowPose147,
	sMurkrowPose12,
	sMurkrowPose77,
	sMurkrowPose150,
	sMurkrowPose14,
	sMurkrowPose79,
	sMurkrowPose153,
	sMurkrowPose16,
	sMurkrowPose66,
	sMurkrowPose80,
	sMurkrowPose78,
	sMurkrowPose76,
	sMurkrowPose159,
	sMurkrowPose72,
	sMurkrowPose70,
	sMurkrowPose68,
	sMurkrowPose65,
	sMurkrowPose79,
	sMurkrowPose77,
	sMurkrowPose75,
	sMurkrowPose73,
	sMurkrowPose71,
	sMurkrowPose69,
	sMurkrowPose67,
};

static const struct PositionSets sAxPositionsMurkrow[] = {
	[0] = { .set = { {-1, -7}, {-12, -16}, {10, -16}, {-1, -9} } },
	[1] = { .set = { {-1, -8}, {-10, -1}, {8, -1}, {-1, -7} } },
	[2] = { .set = { {7, -7}, {1, -21}, {-11, -16}, {-1, -8} } },
	[3] = { .set = { {6, -8}, {8, -4}, {-3, 1}, {-1, -7} } },
	[4] = { .set = { {8, -10}, {-7, -19}, {-9, -15}, {-2, -8} } },
	[5] = { .set = { {7, -12}, {4, -5}, {0, 0}, {-1, -7} } },
	[6] = { .set = { {5, -12}, {-9, -16}, {5, -13}, {-2, -9} } },
	[7] = { .set = { {6, -13}, {-4, -4}, {6, -1}, {-1, -8} } },
	[8] = { .set = { {-1, -17}, {10, -14}, {-11, -14}, {-1, -7} } },
	[9] = { .set = { {-1, -17}, {8, -11}, {-10, -11}, {-1, -8} } },
	[10] = { .set = { {-7, -12}, {7, -16}, {-7, -13}, {0, -9} } },
	[11] = { .set = { {-8, -13}, {2, -4}, {-8, -1}, {-1, -8} } },
	[12] = { .set = { {-10, -10}, {5, -19}, {7, -15}, {0, -8} } },
	[13] = { .set = { {-9, -12}, {-6, -5}, {-2, 0}, {-1, -7} } },
	[14] = { .set = { {-9, -7}, {-3, -21}, {9, -16}, {-1, -8} } },
	[15] = { .set = { {-8, -8}, {-10, -4}, {1, 1}, {-1, -7} } },
	[16] = { .set = { {-1, -7}, {-12, -16}, {10, -16}, {-1, -9} } },
	[17] = { .set = { {-1, -8}, {-10, -1}, {8, -1}, {-1, -7} } },
	[18] = { .set = { {-1, 1}, {-12, -13}, {10, -13}, {-1, -8} } },
	[19] = { .set = { {7, -7}, {1, -21}, {-11, -16}, {-1, -8} } },
	[20] = { .set = { {6, -8}, {8, -4}, {-3, 1}, {-1, -7} } },
	[21] = { .set = { {6, -1}, {2, -16}, {-8, -5}, {-2, -7} } },
	[22] = { .set = { {8, -10}, {-7, -19}, {-9, -15}, {-2, -8} } },
	[23] = { .set = { {7, -12}, {4, -5}, {0, 0}, {-1, -7} } },
	[24] = { .set = { {9, -6}, {-4, -20}, {-6, -12}, {-1, -9} } },
	[25] = { .set = { {5, -12}, {-9, -16}, {5, -13}, {-2, -9} } },
	[26] = { .set = { {6, -13}, {-4, -4}, {6, -1}, {-1, -8} } },
	[27] = { .set = { {8, -12}, {-8, -17}, {7, -11}, {0, -9} } },
	[28] = { .set = { {-1, -17}, {10, -14}, {-11, -14}, {-1, -7} } },
	[29] = { .set = { {-1, -17}, {8, -11}, {-10, -11}, {-1, -8} } },
	[30] = { .set = { {-1, -13}, {10, -13}, {-11, -13}, {-1, -8} } },
	[31] = { .set = { {-7, -12}, {7, -16}, {-7, -13}, {0, -9} } },
	[32] = { .set = { {-8, -13}, {2, -4}, {-8, -1}, {-1, -8} } },
	[33] = { .set = { {-10, -12}, {6, -17}, {-9, -11}, {-2, -9} } },
	[34] = { .set = { {-10, -10}, {5, -19}, {7, -15}, {0, -8} } },
	[35] = { .set = { {-9, -12}, {-6, -5}, {-2, 0}, {-1, -7} } },
	[36] = { .set = { {-11, -6}, {2, -20}, {4, -12}, {-1, -9} } },
	[37] = { .set = { {-9, -7}, {-3, -21}, {9, -16}, {-1, -8} } },
	[38] = { .set = { {-8, -8}, {-10, -4}, {1, 1}, {-1, -7} } },
	[39] = { .set = { {-8, -1}, {-4, -16}, {6, -5}, {0, -7} } },
	[40] = { .set = { {-1, -7}, {-12, -16}, {10, -16}, {-1, -9} } },
	[41] = { .set = { {-1, -8}, {-10, -1}, {8, -1}, {-1, -7} } },
	[42] = { .set = { {-1, 1}, {-12, -13}, {10, -13}, {-1, -8} } },
	[43] = { .set = { {7, -7}, {1, -21}, {-11, -16}, {-1, -8} } },
	[44] = { .set = { {6, -8}, {8, -4}, {-3, 1}, {-1, -7} } },
	[45] = { .set = { {6, -1}, {2, -16}, {-8, -5}, {-2, -7} } },
	[46] = { .set = { {8, -10}, {-7, -19}, {-9, -15}, {-2, -8} } },
	[47] = { .set = { {7, -12}, {4, -5}, {0, 0}, {-1, -7} } },
	[48] = { .set = { {9, -6}, {-4, -20}, {-6, -12}, {-1, -9} } },
	[49] = { .set = { {5, -12}, {-9, -16}, {5, -13}, {-2, -9} } },
	[50] = { .set = { {6, -13}, {-4, -4}, {6, -1}, {-1, -8} } },
	[51] = { .set = { {8, -12}, {-8, -17}, {7, -11}, {0, -9} } },
	[52] = { .set = { {-1, -17}, {10, -14}, {-11, -14}, {-1, -7} } },
	[53] = { .set = { {-1, -17}, {8, -11}, {-10, -11}, {-1, -8} } },
	[54] = { .set = { {-1, -13}, {10, -13}, {-11, -13}, {-1, -8} } },
	[55] = { .set = { {-7, -12}, {7, -16}, {-7, -13}, {0, -9} } },
	[56] = { .set = { {-8, -13}, {2, -4}, {-8, -1}, {-1, -8} } },
	[57] = { .set = { {-10, -12}, {6, -17}, {-9, -11}, {-2, -9} } },
	[58] = { .set = { {-10, -10}, {5, -19}, {7, -15}, {0, -8} } },
	[59] = { .set = { {-9, -12}, {-6, -5}, {-2, 0}, {-1, -7} } },
	[60] = { .set = { {-11, -6}, {2, -20}, {4, -12}, {-1, -9} } },
	[61] = { .set = { {-9, -7}, {-3, -21}, {9, -16}, {-1, -8} } },
	[62] = { .set = { {-8, -8}, {-10, -4}, {1, 1}, {-1, -7} } },
	[63] = { .set = { {-8, -1}, {-4, -16}, {6, -5}, {0, -7} } },
	[64] = { .set = { {-1, -6}, {-4, -5}, {2, -5}, {-1, -7} } },
	[65] = { .set = { {-1, -6}, {-12, -14}, {10, -14}, {-1, -7} } },
	[66] = { .set = { {5, -7}, {1, -6}, {-3, -5}, {-1, -5} } },
	[67] = { .set = { {3, -7}, {4, -19}, {-11, -6}, {-2, -6} } },
	[68] = { .set = { {6, -10}, {-2, -6}, {-2, -5}, {-2, -7} } },
	[69] = { .set = { {8, -9}, {-5, -19}, {-7, -14}, {0, -7} } },
	[70] = { .set = { {3, -12}, {-4, -5}, {0, -4}, {-1, -7} } },
	[71] = { .set = { {7, -15}, {-9, -18}, {8, -11}, {-1, -8} } },
	[72] = { .set = { {-1, -15}, {2, -4}, {-4, -4}, {-1, -6} } },
	[73] = { .set = { {-1, -16}, {10, -14}, {-11, -14}, {-1, -8} } },
	[74] = { .set = { {-5, -12}, {2, -5}, {-2, -4}, {-1, -7} } },
	[75] = { .set = { {-9, -15}, {7, -18}, {-10, -11}, {-1, -8} } },
	[76] = { .set = { {-8, -10}, {0, -6}, {0, -5}, {0, -7} } },
	[77] = { .set = { {-10, -9}, {3, -19}, {5, -14}, {-2, -7} } },
	[78] = { .set = { {-7, -7}, {-3, -6}, {1, -5}, {-1, -5} } },
	[79] = { .set = { {-5, -7}, {-6, -19}, {9, -6}, {0, -6} } },
	[80] = { .set = { {-1, -7}, {-12, -16}, {10, -16}, {-1, -9} } },
	[81] = { .set = { {-1, -8}, {-10, -1}, {8, -1}, {-1, -7} } },
	[82] = { .set = { {7, -7}, {1, -21}, {-11, -16}, {-1, -8} } },
	[83] = { .set = { {6, -8}, {8, -4}, {-3, 1}, {-1, -7} } },
	[84] = { .set = { {8, -10}, {-7, -19}, {-9, -15}, {-2, -8} } },
	[85] = { .set = { {7, -12}, {4, -5}, {0, 0}, {-1, -7} } },
	[86] = { .set = { {5, -12}, {-9, -16}, {5, -13}, {-2, -9} } },
	[87] = { .set = { {6, -13}, {-4, -4}, {6, -1}, {-1, -8} } },
	[88] = { .set = { {-1, -17}, {10, -14}, {-11, -14}, {-1, -7} } },
	[89] = { .set = { {-1, -17}, {8, -11}, {-10, -11}, {-1, -8} } },
	[90] = { .set = { {-7, -12}, {7, -16}, {-7, -13}, {0, -9} } },
	[91] = { .set = { {-8, -13}, {2, -4}, {-8, -1}, {-1, -8} } },
	[92] = { .set = { {-10, -10}, {5, -19}, {7, -15}, {0, -8} } },
	[93] = { .set = { {-9, -12}, {-6, -5}, {-2, 0}, {-1, -7} } },
	[94] = { .set = { {-9, -7}, {-3, -21}, {9, -16}, {-1, -8} } },
	[95] = { .set = { {-8, -8}, {-10, -4}, {1, 1}, {-1, -7} } },
	[96] = { .set = { {-6, -6}, {-2, -4}, {1, -3}, {-1, -5} } },
	[97] = { .set = { {-6, -5}, {-1, -4}, {2, -3}, {0, -5} } },
	[98] = { .set = { {-1, -12}, {-12, -15}, {10, -15}, {-1, -9} } },
	[99] = { .set = { {0, -11}, {4, -19}, {-11, -10}, {0, -7} } },
	[100] = { .set = { {1, -12}, {-6, -13}, {-9, -10}, {-1, -7} } },
	[101] = { .set = { {3, -13}, {-9, -13}, {6, -9}, {-1, -8} } },
	[102] = { .set = { {0, -18}, {11, -13}, {-11, -13}, {0, -6} } },
	[103] = { .set = { {-4, -13}, {8, -13}, {-7, -9}, {0, -8} } },
	[104] = { .set = { {-2, -12}, {5, -13}, {8, -10}, {0, -7} } },
	[105] = { .set = { {-1, -11}, {-5, -19}, {10, -10}, {-1, -7} } },
	[106] = { .set = { {-1, -6}, {-4, -5}, {2, -5}, {-1, -7} } },
	[107] = { .set = { {-7, -7}, {-3, -6}, {1, -5}, {-1, -5} } },
	[108] = { .set = { {-8, -10}, {0, -6}, {0, -5}, {0, -7} } },
	[109] = { .set = { {-5, -12}, {2, -5}, {-2, -4}, {-1, -7} } },
	[110] = { .set = { {-1, -15}, {2, -4}, {-4, -4}, {-1, -6} } },
	[111] = { .set = { {3, -12}, {-4, -5}, {0, -4}, {-1, -7} } },
	[112] = { .set = { {6, -10}, {-2, -6}, {-2, -5}, {-2, -7} } },
	[113] = { .set = { {5, -7}, {1, -6}, {-3, -5}, {-1, -5} } },
	[114] = { .set = { {-1, 1}, {-12, -13}, {10, -13}, {-1, -8} } },
	[115] = { .set = { {-8, -1}, {-4, -16}, {6, -5}, {0, -7} } },
	[116] = { .set = { {-11, -4}, {2, -18}, {4, -10}, {-1, -7} } },
	[117] = { .set = { {-8, -10}, {8, -15}, {-7, -9}, {0, -7} } },
	[118] = { .set = { {0, -12}, {11, -12}, {-10, -12}, {0, -7} } },
	[119] = { .set = { {7, -10}, {-9, -15}, {6, -9}, {-1, -7} } },
	[120] = { .set = { {10, -4}, {-3, -18}, {-5, -10}, {0, -7} } },
	[121] = { .set = { {6, -1}, {2, -16}, {-8, -5}, {-2, -7} } },
	[122] = { .set = { {-1, -6}, {-12, -14}, {10, -14}, {-1, -7} } },
	[123] = { .set = { {3, -7}, {4, -19}, {-11, -6}, {-2, -6} } },
	[124] = { .set = { {8, -9}, {-5, -19}, {-7, -14}, {0, -7} } },
	[125] = { .set = { {7, -15}, {-9, -18}, {8, -11}, {-1, -8} } },
	[126] = { .set = { {-1, -16}, {10, -14}, {-11, -14}, {-1, -8} } },
	[127] = { .set = { {-9, -15}, {7, -18}, {-10, -11}, {-1, -8} } },
	[128] = { .set = { {-10, -9}, {3, -19}, {5, -14}, {-2, -7} } },
	[129] = { .set = { {-5, -7}, {-6, -19}, {9, -6}, {0, -6} } },
	[130] = { .set = { {-1, -6}, {-4, -5}, {2, -5}, {-1, -7} } },
	[131] = { .set = { {-1, -4}, {-12, -13}, {10, -13}, {-1, -6} } },
	[132] = { .set = { {-1, -8}, {-10, -1}, {8, -1}, {-1, -7} } },
	[133] = { .set = { {5, -7}, {1, -6}, {-3, -5}, {-1, -5} } },
	[134] = { .set = { {8, -5}, {2, -19}, {-10, -14}, {0, -6} } },
	[135] = { .set = { {6, -8}, {8, -4}, {-3, 1}, {-1, -7} } },
	[136] = { .set = { {6, -10}, {-2, -6}, {-2, -5}, {-2, -7} } },
	[137] = { .set = { {10, -8}, {-5, -17}, {-7, -13}, {0, -6} } },
	[138] = { .set = { {7, -12}, {4, -5}, {0, 0}, {-1, -7} } },
	[139] = { .set = { {3, -12}, {-4, -5}, {0, -4}, {-1, -7} } },
	[140] = { .set = { {6, -9}, {-8, -13}, {6, -10}, {-1, -6} } },
	[141] = { .set = { {6, -13}, {-4, -4}, {6, -1}, {-1, -8} } },
	[142] = { .set = { {-1, -15}, {2, -4}, {-4, -4}, {-1, -6} } },
	[143] = { .set = { {-1, -15}, {10, -12}, {-11, -12}, {-1, -5} } },
	[144] = { .set = { {-1, -17}, {8, -11}, {-10, -11}, {-1, -8} } },
	[145] = { .set = { {-5, -12}, {2, -5}, {-2, -4}, {-1, -7} } },
	[146] = { .set = { {-7, -9}, {7, -13}, {-7, -10}, {0, -6} } },
	[147] = { .set = { {-8, -13}, {2, -4}, {-8, -1}, {-1, -8} } },
	[148] = { .set = { {-8, -10}, {0, -6}, {0, -5}, {0, -7} } },
	[149] = { .set = { {-11, -8}, {4, -17}, {6, -13}, {-1, -6} } },
	[150] = { .set = { {-9, -12}, {-6, -5}, {-2, 0}, {-1, -7} } },
	[151] = { .set = { {-7, -7}, {-3, -6}, {1, -5}, {-1, -5} } },
	[152] = { .set = { {-8, -4}, {-2, -18}, {10, -13}, {0, -5} } },
	[153] = { .set = { {-8, -8}, {-10, -4}, {1, 1}, {-1, -7} } },
	[154] = { .set = { {-1, -6}, {-12, -14}, {10, -14}, {-1, -7} } },
	[155] = { .set = { {-5, -7}, {-6, -19}, {9, -6}, {0, -6} } },
	[156] = { .set = { {-10, -9}, {3, -19}, {5, -14}, {-2, -7} } },
	[157] = { .set = { {-9, -15}, {7, -18}, {-10, -11}, {-1, -8} } },
	[158] = { .set = { {-1, -17}, {10, -15}, {-11, -15}, {-1, -9} } },
	[159] = { .set = { {7, -15}, {-9, -18}, {8, -11}, {-1, -8} } },
	[160] = { .set = { {8, -9}, {-5, -19}, {-7, -14}, {0, -7} } },
	[161] = { .set = { {3, -7}, {4, -19}, {-11, -6}, {-2, -6} } },
	[162] = { .set = { {-1, -6}, {-4, -5}, {2, -5}, {-1, -7} } },
	[163] = { .set = { {-7, -7}, {-3, -6}, {1, -5}, {-1, -5} } },
	[164] = { .set = { {-8, -10}, {0, -6}, {0, -5}, {0, -7} } },
	[165] = { .set = { {-5, -12}, {2, -5}, {-2, -4}, {-1, -7} } },
	[166] = { .set = { {-1, -15}, {2, -4}, {-4, -4}, {-1, -6} } },
	[167] = { .set = { {3, -12}, {-4, -5}, {0, -4}, {-1, -7} } },
	[168] = { .set = { {6, -10}, {-2, -6}, {-2, -5}, {-2, -7} } },
	[169] = { .set = { {5, -7}, {1, -6}, {-3, -5}, {-1, -5} } },
};

static const ax_anim *const sMurkrowAnimTable1[] = {
	sMurkrowAnims_1_1,
	sMurkrowAnims_1_2,
	sMurkrowAnims_1_3,
	sMurkrowAnims_1_4,
	sMurkrowAnims_1_5,
	sMurkrowAnims_1_6,
	sMurkrowAnims_1_7,
	sMurkrowAnims_1_8,
};

static const ax_anim *const sMurkrowAnimTable2[] = {
	sMurkrowAnims_2_1,
	sMurkrowAnims_2_2,
	sMurkrowAnims_2_3,
	sMurkrowAnims_2_4,
	sMurkrowAnims_2_5,
	sMurkrowAnims_2_6,
	sMurkrowAnims_2_7,
	sMurkrowAnims_2_8,
};

static const ax_anim *const sMurkrowAnimTable3[] = {
	sMurkrowAnims_3_1,
	sMurkrowAnims_3_2,
	sMurkrowAnims_3_3,
	sMurkrowAnims_3_4,
	sMurkrowAnims_3_5,
	sMurkrowAnims_3_6,
	sMurkrowAnims_3_7,
	sMurkrowAnims_3_8,
};

static const ax_anim *const sMurkrowAnimTable4[] = {
	sMurkrowAnims_4_1,
	sMurkrowAnims_4_2,
	sMurkrowAnims_4_3,
	sMurkrowAnims_4_4,
	sMurkrowAnims_4_5,
	sMurkrowAnims_4_6,
	sMurkrowAnims_4_7,
	sMurkrowAnims_4_8,
};

static const ax_anim *const sMurkrowAnimTable5[] = {
	sMurkrowAnims_5_1,
	sMurkrowAnims_5_2,
	sMurkrowAnims_5_3,
	sMurkrowAnims_5_4,
	sMurkrowAnims_5_5,
	sMurkrowAnims_5_6,
	sMurkrowAnims_5_7,
	sMurkrowAnims_5_8,
};

static const ax_anim *const sMurkrowAnimTable6[] = {
	gAxSharedAnim_02406,
	gAxSharedAnim_02406,
	gAxSharedAnim_02406,
	gAxSharedAnim_02406,
	gAxSharedAnim_02406,
	gAxSharedAnim_02406,
	gAxSharedAnim_02406,
	gAxSharedAnim_02406,
};

static const ax_anim *const sMurkrowAnimTable7[] = {
	gAxSharedAnim_02310,
	gAxSharedAnim_02314,
	gAxSharedAnim_00153,
	gAxSharedAnim_00158,
	gAxSharedAnim_00165,
	gAxSharedAnim_00173,
	gAxSharedAnim_00182,
	gAxSharedAnim_00190,
};

static const ax_anim *const sMurkrowAnimTable8[] = {
	sMurkrowAnims_8_1,
	sMurkrowAnims_8_2,
	sMurkrowAnims_8_3,
	sMurkrowAnims_8_4,
	sMurkrowAnims_8_5,
	sMurkrowAnims_8_6,
	sMurkrowAnims_8_7,
	sMurkrowAnims_8_8,
};

static const ax_anim *const sMurkrowAnimTable9[] = {
	sMurkrowAnims_9_1,
	sMurkrowAnims_9_2,
	sMurkrowAnims_9_3,
	sMurkrowAnims_9_4,
	sMurkrowAnims_9_5,
	sMurkrowAnims_9_6,
	sMurkrowAnims_9_7,
	sMurkrowAnims_9_8,
};

static const ax_anim *const sMurkrowAnimTable10[] = {
	gAxSharedAnim_00335,
	gAxSharedAnim_00343,
	gAxSharedAnim_00353,
	gAxSharedAnim_00359,
	gAxSharedAnim_00365,
	gAxSharedAnim_00374,
	gAxSharedAnim_00379,
	gAxSharedAnim_00388,
};

static const ax_anim *const sMurkrowAnimTable11[] = {
	sMurkrowAnims_11_1,
	sMurkrowAnims_11_2,
	sMurkrowAnims_11_3,
	sMurkrowAnims_11_4,
	sMurkrowAnims_11_5,
	sMurkrowAnims_11_6,
	sMurkrowAnims_11_7,
	sMurkrowAnims_11_8,
};

static const ax_anim *const sMurkrowAnimTable12[] = {
	gAxSharedAnim_00613,
	gAxSharedAnim_00688,
	gAxSharedAnim_00669,
	gAxSharedAnim_00656,
	gAxSharedAnim_00655,
	gAxSharedAnim_00644,
	gAxSharedAnim_00627,
	gAxSharedAnim_00614,
};

static const ax_anim *const sMurkrowAnimTable13[] = {
	gAxSharedAnim_00706,
	gAxSharedAnim_00780,
	gAxSharedAnim_00773,
	gAxSharedAnim_00761,
	gAxSharedAnim_00751,
	gAxSharedAnim_00739,
	gAxSharedAnim_00727,
	gAxSharedAnim_00715,
};

static const ax_anim *const *const sAxAnimationsMurkrow[] = {
	sMurkrowAnimTable1,
	sMurkrowAnimTable2,
	sMurkrowAnimTable3,
	sMurkrowAnimTable4,
	sMurkrowAnimTable5,
	sMurkrowAnimTable6,
	sMurkrowAnimTable7,
	sMurkrowAnimTable8,
	sMurkrowAnimTable9,
	sMurkrowAnimTable10,
	sMurkrowAnimTable11,
	sMurkrowAnimTable12,
	sMurkrowAnimTable13,
};

static const ax_sprite *const sAxSpritesMurkrow[] = {
	sMurkrowSprites1,
	sMurkrowSprites2,
	sMurkrowSprites3,
	sMurkrowSprites4,
	sMurkrowSprites5,
	sMurkrowSprites6,
	sMurkrowSprites7,
	sMurkrowSprites8,
	sMurkrowSprites9,
	sMurkrowSprites10,
	sMurkrowSprites11,
	sMurkrowSprites12,
	sMurkrowSprites13,
	sMurkrowSprites14,
	sMurkrowSprites15,
	sMurkrowSprites16,
	sMurkrowSprites17,
	sMurkrowSprites18,
	sMurkrowSprites19,
	sMurkrowSprites20,
	sMurkrowSprites21,
	sMurkrowSprites22,
	sMurkrowSprites23,
	sMurkrowSprites24,
	sMurkrowSprites25,
	sMurkrowSprites26,
	sMurkrowSprites27,
	sMurkrowSprites28,
	sMurkrowSprites29,
	sMurkrowSprites30,
	sMurkrowSprites31,
	sMurkrowSprites32,
};

static const axmain sAxMainMurkrow = {
	.poses = sAxPosesMurkrow,
	.animations = sAxAnimationsMurkrow,
	.animCount = ARRAY_COUNT(sAxAnimationsMurkrow),
	.spriteData = sAxSpritesMurkrow,
	.positions = sAxPositionsMurkrow,
};
