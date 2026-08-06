/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainMasquerain;
const SiroArchive gAxMasquerain = {"SIRO", &sAxMainMasquerain};

static const ax_pose sMasquerainPose1[] = {
	AX_POSE(0, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose2[] = {
	AX_POSE(1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose3[] = {
	AX_POSE(2, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose4[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose5[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose6[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose7[] = {
	AX_POSE(6, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(230, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose8[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(230, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose9[] = {
	AX_POSE(8, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose10[] = {
	AX_POSE(9, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose11[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose12[] = {
	AX_POSE(11, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose13[] = {
	AX_POSE(12, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose14[] = {
	AX_POSE(13, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose15[] = {
	AX_POSE(14, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose16[] = {
	AX_POSE(9, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose17[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose18[] = {
	AX_POSE(11, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose19[] = {
	AX_POSE(6, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose20[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose21[] = {
	AX_POSE(8, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose22[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose23[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose24[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose97[] = {
	AX_POSE(15, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose98[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose99[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose100[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose101[] = {
	AX_POSE(19, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(230, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose102[] = {
	AX_POSE(20, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(230, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose103[] = {
	AX_POSE(21, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose104[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose105[] = {
	AX_POSE(23, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose106[] = {
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose107[] = {
	AX_POSE(21, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose108[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose109[] = {
	AX_POSE(19, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose110[] = {
	AX_POSE(20, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose111[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose112[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose113[] = {
	AX_POSE(25, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose114[] = {
	AX_POSE(26, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose115[] = {
	AX_POSE(27, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose116[] = {
	AX_POSE(28, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose117[] = {
	AX_POSE(29, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose118[] = {
	AX_POSE(30, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose119[] = {
	AX_POSE(31, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose120[] = {
	AX_POSE(30, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose121[] = {
	AX_POSE(29, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMasquerainPose122[] = {
	AX_POSE(28, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_anim sMasquerainAnims_1_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {-1, -1}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_1_2[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {1, 1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {2, 0}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {2, -2}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {-1, 2}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {-2, 0}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {-1, -1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_1_3[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_1_4[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {1, 2}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {2, 0}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {1, -1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {-1, 1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {-2, -1}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {-1, -2}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_1_5[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {1, -1}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_1_6[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {-1, 2}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {-2, 0}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {-1, -1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {1, 1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {2, -1}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {1, -2}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_1_7[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 18, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 18, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_1_8[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {-1, 1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 21, .offset = {-2, 0}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {-2, -2}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {1, 2}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 21, .offset = {2, 0}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {1, -1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 24, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 26, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 12}, .shadow = {0, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 27, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 8}, .shadow = {0, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 27, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 29, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {12, 13}, .shadow = {12, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {21, 23}, .shadow = {21, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 30, .offset = {21, 23}, .shadow = {21, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {21, 23}, .shadow = {21, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {21, 23}, .shadow = {21, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {21, 23}, .shadow = {21, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {21, 23}, .shadow = {21, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {8, 8}, .shadow = {8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 30, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 32, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {23, 0}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 27, .offset = {23, 0}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {23, 0}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {23, 0}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {23, 0}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {23, 0}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {8, 0}, .shadow = {8, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 33, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 35, .offset = {5, -4}, .shadow = {5, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {14, -12}, .shadow = {14, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {22, -19}, .shadow = {22, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 30, .offset = {22, -19}, .shadow = {22, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {22, -19}, .shadow = {22, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {22, -19}, .shadow = {22, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {22, -19}, .shadow = {22, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {22, -19}, .shadow = {22, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {9, -7}, .shadow = {9, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 36, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 38, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -20}, .shadow = {0, -23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {0, -20}, .shadow = {0, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -20}, .shadow = {0, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, -20}, .shadow = {0, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -20}, .shadow = {0, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {0, -20}, .shadow = {0, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -8}, .shadow = {0, -8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 39, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 41, .offset = {-5, -4}, .shadow = {-5, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {-14, -12}, .shadow = {-14, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-22, -19}, .shadow = {-22, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 36, .offset = {-22, -19}, .shadow = {-22, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-22, -19}, .shadow = {-22, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-22, -19}, .shadow = {-22, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-22, -19}, .shadow = {-22, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {-22, -19}, .shadow = {-22, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-9, -7}, .shadow = {-9, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 42, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 44, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-23, 0}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 45, .offset = {-23, 0}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-23, 0}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-23, 0}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-23, 0}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-23, 0}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-8, 0}, .shadow = {-8, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 45, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 47, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {-12, 13}, .shadow = {-12, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-21, 23}, .shadow = {-21, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 24, .offset = {-21, 23}, .shadow = {-21, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-21, 23}, .shadow = {-21, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-21, 23}, .shadow = {-21, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-21, 23}, .shadow = {-21, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {-21, 23}, .shadow = {-21, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-8, 8}, .shadow = {-8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 48, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 50, .offset = {0, 12}, .shadow = {0, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, 28}, .shadow = {0, 28} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 47}, .shadow = {0, 47} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {0, 47}, .shadow = {0, 47} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 47}, .shadow = {0, 47} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 47}, .shadow = {0, 47} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 47}, .shadow = {0, 47} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, 47}, .shadow = {0, 47} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 8}, .shadow = {0, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 51, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 53, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {28, 29}, .shadow = {28, 29} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {45, 47}, .shadow = {45, 47} },
	{ .frames = 2, .unkFlags = 1, .poseId = 54, .offset = {45, 47}, .shadow = {45, 47} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {45, 47}, .shadow = {45, 47} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {45, 47}, .shadow = {45, 47} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {45, 47}, .shadow = {45, 47} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {45, 47}, .shadow = {45, 47} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {8, 8}, .shadow = {8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 54, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 56, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {28, 0}, .shadow = {28, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {47, 0}, .shadow = {47, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {47, 0}, .shadow = {47, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {47, 0}, .shadow = {47, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {47, 0}, .shadow = {47, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {47, 0}, .shadow = {47, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {47, 0}, .shadow = {47, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {8, 0}, .shadow = {8, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 57, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 59, .offset = {13, -12}, .shadow = {13, -12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {30, -28}, .shadow = {30, -28} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {46, -43}, .shadow = {46, -43} },
	{ .frames = 2, .unkFlags = 1, .poseId = 54, .offset = {46, -43}, .shadow = {46, -43} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {46, -43}, .shadow = {46, -43} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {46, -43}, .shadow = {46, -43} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {46, -43}, .shadow = {46, -43} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {46, -43}, .shadow = {46, -43} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {9, -7}, .shadow = {9, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 60, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 62, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, -28}, .shadow = {0, -28} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -44}, .shadow = {0, -44} },
	{ .frames = 2, .unkFlags = 1, .poseId = 63, .offset = {0, -44}, .shadow = {0, -44} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -44}, .shadow = {0, -44} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {0, -44}, .shadow = {0, -44} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -44}, .shadow = {0, -44} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {0, -44}, .shadow = {0, -44} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -8}, .shadow = {0, -8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 63, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 65, .offset = {-13, -12}, .shadow = {-13, -12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {-30, -28}, .shadow = {-30, -28} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-46, -43}, .shadow = {-46, -43} },
	{ .frames = 2, .unkFlags = 1, .poseId = 60, .offset = {-46, -43}, .shadow = {-46, -43} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-46, -43}, .shadow = {-46, -43} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-46, -43}, .shadow = {-46, -43} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-46, -43}, .shadow = {-46, -43} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {-46, -43}, .shadow = {-46, -43} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-9, -7}, .shadow = {-9, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 66, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 68, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {-28, 0}, .shadow = {-28, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-47, 0}, .shadow = {-47, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 69, .offset = {-47, 0}, .shadow = {-47, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-47, 0}, .shadow = {-47, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-47, 0}, .shadow = {-47, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-47, 0}, .shadow = {-47, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-47, 0}, .shadow = {-47, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-8, 0}, .shadow = {-8, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 69, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 71, .offset = {-12, 12}, .shadow = {-12, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {-28, 29}, .shadow = {-28, 29} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-45, 47}, .shadow = {-45, 47} },
	{ .frames = 2, .unkFlags = 1, .poseId = 48, .offset = {-45, 47}, .shadow = {-45, 47} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-45, 47}, .shadow = {-45, 47} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-45, 47}, .shadow = {-45, 47} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-45, 47}, .shadow = {-45, 47} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {-45, 47}, .shadow = {-45, 47} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-8, 8}, .shadow = {-8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 72, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 74, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 74, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 72, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {1, 4}, .shadow = {1, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {1, 4}, .shadow = {1, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {1, 4}, .shadow = {1, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 2}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 75, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 77, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 75, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {5, 3}, .shadow = {5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {5, 3}, .shadow = {5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {5, 3}, .shadow = {5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {2, 2}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 78, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 80, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 80, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 78, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {4, 1}, .shadow = {4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {4, 1}, .shadow = {4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {4, 1}, .shadow = {4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 81, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 83, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 83, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 81, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {5, -3}, .shadow = {5, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {5, -3}, .shadow = {5, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {5, -3}, .shadow = {5, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {2, -2}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 84, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 86, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 86, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 84, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {1, -4}, .shadow = {1, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {1, -4}, .shadow = {1, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {1, -4}, .shadow = {1, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 87, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 87, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-5, -3}, .shadow = {-5, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-5, -3}, .shadow = {-5, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-5, -3}, .shadow = {-5, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-2, -2}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 90, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 90, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-4, 1}, .shadow = {-4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-4, 1}, .shadow = {-4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-4, 1}, .shadow = {-4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 93, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 93, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-5, 3}, .shadow = {-5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-5, 3}, .shadow = {-5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-5, 3}, .shadow = {-5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-2, 2}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 97, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 97, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 99, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 101, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 101, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 103, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 105, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 105, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 107, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 107, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 109, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 109, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 111, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 111, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_8_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 123, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 124, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_8_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 126, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 127, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_8_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 129, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 130, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_8_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 132, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 133, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_8_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 135, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 136, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_8_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 138, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 139, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_8_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 141, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 142, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_8_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 144, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 145, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 147, .offset = {6, 4}, .shadow = {6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {9, 12}, .shadow = {9, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {6, 21}, .shadow = {6, 20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 150, .offset = {0, 22}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 151, .offset = {-6, 21}, .shadow = {-6, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {-9, 12}, .shadow = {-9, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {-6, 4}, .shadow = {-6, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 146, .offset = {11, 2}, .shadow = {11, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {21, 7}, .shadow = {21, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {24, 15}, .shadow = {24, 15} },
	{ .frames = 3, .unkFlags = 0, .poseId = 149, .offset = {22, 22}, .shadow = {22, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 150, .offset = {13, 22}, .shadow = {13, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {4, 19}, .shadow = {4, 19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {1, 8}, .shadow = {1, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {9, -4}, .shadow = {9, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {19, -2}, .shadow = {19, -2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 148, .offset = {21, 1}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 149, .offset = {19, 5}, .shadow = {19, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {11, 6}, .shadow = {11, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 151, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {1, -7}, .shadow = {1, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {3, -16}, .shadow = {3, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {12, -20}, .shadow = {12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 147, .offset = {21, -21}, .shadow = {21, -24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 148, .offset = {24, -15}, .shadow = {24, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {19, -5}, .shadow = {19, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 150, .offset = {11, -1}, .shadow = {11, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 151, .offset = {-7, -2}, .shadow = {-7, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {-8, -11}, .shadow = {-8, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {-6, -19}, .shadow = {-6, -21} },
	{ .frames = 3, .unkFlags = 0, .poseId = 146, .offset = {0, -21}, .shadow = {0, -24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 147, .offset = {6, -19}, .shadow = {6, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {8, -11}, .shadow = {8, -11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 149, .offset = {7, -2}, .shadow = {7, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 148, .offset = {1, -7}, .shadow = {1, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {-12, -20}, .shadow = {-12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 153, .offset = {-21, -21}, .shadow = {-21, -24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 152, .offset = {-24, -15}, .shadow = {-24, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {-19, -5}, .shadow = {-19, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 150, .offset = {-11, -2}, .shadow = {-11, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 147, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {-9, -4}, .shadow = {-9, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {-19, -2}, .shadow = {-19, -2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 152, .offset = {-21, 1}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 151, .offset = {-19, 5}, .shadow = {-19, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {-11, 6}, .shadow = {-11, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 149, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 146, .offset = {-11, 2}, .shadow = {-11, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {-21, 7}, .shadow = {-21, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {-24, 15}, .shadow = {-24, 15} },
	{ .frames = 3, .unkFlags = 0, .poseId = 151, .offset = {-22, 22}, .shadow = {-22, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 150, .offset = {-13, 22}, .shadow = {-13, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {-4, 19}, .shadow = {-4, 19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 148, .offset = {-1, 8}, .shadow = {-1, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 163, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 163, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 162, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 164, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 162, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 166, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 166, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 165, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 167, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 165, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 169, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 169, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 168, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 170, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 168, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 172, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 172, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 171, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 173, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 171, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 175, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 175, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 174, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 176, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 174, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 178, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 178, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 177, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 179, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 179, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 177, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 181, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 181, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 181, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 180, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 182, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 182, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 180, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMasquerainAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 184, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 184, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 184, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 183, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 185, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 185, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 183, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sMasquerainGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_1.4bpp.lz");
static const ax_sprite sMasquerainSprites1[] = {
	{sMasquerainGfx1, ARRAY_COUNT(sMasquerainGfx1)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_2.4bpp.lz");
static const ax_sprite sMasquerainSprites2[] = {
	{sMasquerainGfx2, ARRAY_COUNT(sMasquerainGfx2)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_3.4bpp.lz");
static const ax_sprite sMasquerainSprites3[] = {
	{sMasquerainGfx3, ARRAY_COUNT(sMasquerainGfx3)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_4.4bpp.lz");
static const ax_sprite sMasquerainSprites4[] = {
	{sMasquerainGfx4, ARRAY_COUNT(sMasquerainGfx4)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_5.4bpp.lz");
static const ax_sprite sMasquerainSprites5[] = {
	{sMasquerainGfx5, ARRAY_COUNT(sMasquerainGfx5)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_6.4bpp.lz");
static const ax_sprite sMasquerainSprites6[] = {
	{sMasquerainGfx6, ARRAY_COUNT(sMasquerainGfx6)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_7.4bpp.lz");
static const ax_sprite sMasquerainSprites7[] = {
	{sMasquerainGfx7, ARRAY_COUNT(sMasquerainGfx7)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_8.4bpp.lz");
static const ax_sprite sMasquerainSprites8[] = {
	{sMasquerainGfx8, ARRAY_COUNT(sMasquerainGfx8)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_9.4bpp.lz");
static const ax_sprite sMasquerainSprites9[] = {
	{sMasquerainGfx9, ARRAY_COUNT(sMasquerainGfx9)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_10.4bpp.lz");
static const ax_sprite sMasquerainSprites10[] = {
	{sMasquerainGfx10, ARRAY_COUNT(sMasquerainGfx10)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_11.4bpp.lz");
static const ax_sprite sMasquerainSprites11[] = {
	{sMasquerainGfx11, ARRAY_COUNT(sMasquerainGfx11)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_12.4bpp.lz");
static const ax_sprite sMasquerainSprites12[] = {
	{sMasquerainGfx12, ARRAY_COUNT(sMasquerainGfx12)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_13.4bpp.lz");
static const ax_sprite sMasquerainSprites13[] = {
	{sMasquerainGfx13, ARRAY_COUNT(sMasquerainGfx13)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_14.4bpp.lz");
static const ax_sprite sMasquerainSprites14[] = {
	{sMasquerainGfx14, ARRAY_COUNT(sMasquerainGfx14)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_15.4bpp.lz");
static const ax_sprite sMasquerainSprites15[] = {
	{sMasquerainGfx15, ARRAY_COUNT(sMasquerainGfx15)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_16.4bpp.lz");
static const u8 sMasquerainGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_16_1.4bpp.lz");
static const ax_sprite sMasquerainSprites16[] = {
	{sMasquerainGfx16, ARRAY_COUNT(sMasquerainGfx16)}, 
	{NULL, 64}, 
	{sMasquerainGfx16_1, ARRAY_COUNT(sMasquerainGfx16_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_17.4bpp.lz");
static const u8 sMasquerainGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_17_1.4bpp.lz");
static const ax_sprite sMasquerainSprites17[] = {
	{sMasquerainGfx17, ARRAY_COUNT(sMasquerainGfx17)}, 
	{NULL, 64}, 
	{sMasquerainGfx17_1, ARRAY_COUNT(sMasquerainGfx17_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_18.4bpp.lz");
static const u8 sMasquerainGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_18_1.4bpp.lz");
static const u8 sMasquerainGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_18_2.4bpp.lz");
static const ax_sprite sMasquerainSprites18[] = {
	{NULL, 32}, 
	{sMasquerainGfx18, ARRAY_COUNT(sMasquerainGfx18)}, 
	{NULL, 32}, 
	{sMasquerainGfx18_1, ARRAY_COUNT(sMasquerainGfx18_1)}, 
	{NULL, 32}, 
	{sMasquerainGfx18_2, ARRAY_COUNT(sMasquerainGfx18_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_19.4bpp.lz");
static const u8 sMasquerainGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_19_1.4bpp.lz");
static const u8 sMasquerainGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_19_2.4bpp.lz");
static const ax_sprite sMasquerainSprites19[] = {
	{NULL, 32}, 
	{sMasquerainGfx19, ARRAY_COUNT(sMasquerainGfx19)}, 
	{NULL, 32}, 
	{sMasquerainGfx19_1, ARRAY_COUNT(sMasquerainGfx19_1)}, 
	{NULL, 32}, 
	{sMasquerainGfx19_2, ARRAY_COUNT(sMasquerainGfx19_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_20.4bpp.lz");
static const u8 sMasquerainGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_20_1.4bpp.lz");
static const u8 sMasquerainGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_20_2.4bpp.lz");
static const u8 sMasquerainGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_20_3.4bpp.lz");
static const ax_sprite sMasquerainSprites20[] = {
	{NULL, 32}, 
	{sMasquerainGfx20, ARRAY_COUNT(sMasquerainGfx20)}, 
	{NULL, 64}, 
	{sMasquerainGfx20_1, ARRAY_COUNT(sMasquerainGfx20_1)}, 
	{NULL, 64}, 
	{sMasquerainGfx20_2, ARRAY_COUNT(sMasquerainGfx20_2)}, 
	{NULL, 64}, 
	{sMasquerainGfx20_3, ARRAY_COUNT(sMasquerainGfx20_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_21.4bpp.lz");
static const u8 sMasquerainGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_21_1.4bpp.lz");
static const u8 sMasquerainGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_21_2.4bpp.lz");
static const u8 sMasquerainGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_21_3.4bpp.lz");
static const ax_sprite sMasquerainSprites21[] = {
	{NULL, 32}, 
	{sMasquerainGfx21, ARRAY_COUNT(sMasquerainGfx21)}, 
	{NULL, 64}, 
	{sMasquerainGfx21_1, ARRAY_COUNT(sMasquerainGfx21_1)}, 
	{NULL, 64}, 
	{sMasquerainGfx21_2, ARRAY_COUNT(sMasquerainGfx21_2)}, 
	{NULL, 64}, 
	{sMasquerainGfx21_3, ARRAY_COUNT(sMasquerainGfx21_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_22.4bpp.lz");
static const u8 sMasquerainGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_22_1.4bpp.lz");
static const u8 sMasquerainGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_22_2.4bpp.lz");
static const u8 sMasquerainGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_22_3.4bpp.lz");
static const ax_sprite sMasquerainSprites22[] = {
	{sMasquerainGfx22, ARRAY_COUNT(sMasquerainGfx22)}, 
	{NULL, 32}, 
	{sMasquerainGfx22_1, ARRAY_COUNT(sMasquerainGfx22_1)}, 
	{NULL, 32}, 
	{sMasquerainGfx22_2, ARRAY_COUNT(sMasquerainGfx22_2)}, 
	{NULL, 32}, 
	{sMasquerainGfx22_3, ARRAY_COUNT(sMasquerainGfx22_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_23.4bpp.lz");
static const u8 sMasquerainGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_23_1.4bpp.lz");
static const u8 sMasquerainGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_23_2.4bpp.lz");
static const u8 sMasquerainGfx23_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_23_3.4bpp.lz");
static const ax_sprite sMasquerainSprites23[] = {
	{sMasquerainGfx23, ARRAY_COUNT(sMasquerainGfx23)}, 
	{NULL, 32}, 
	{sMasquerainGfx23_1, ARRAY_COUNT(sMasquerainGfx23_1)}, 
	{NULL, 32}, 
	{sMasquerainGfx23_2, ARRAY_COUNT(sMasquerainGfx23_2)}, 
	{NULL, 32}, 
	{sMasquerainGfx23_3, ARRAY_COUNT(sMasquerainGfx23_3)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_24.4bpp.lz");
static const ax_sprite sMasquerainSprites24[] = {
	{sMasquerainGfx24, ARRAY_COUNT(sMasquerainGfx24)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_25.4bpp.lz");
static const ax_sprite sMasquerainSprites25[] = {
	{sMasquerainGfx25, ARRAY_COUNT(sMasquerainGfx25)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_26.4bpp.lz");
static const ax_sprite sMasquerainSprites26[] = {
	{sMasquerainGfx26, ARRAY_COUNT(sMasquerainGfx26)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_27.4bpp.lz");
static const ax_sprite sMasquerainSprites27[] = {
	{sMasquerainGfx27, ARRAY_COUNT(sMasquerainGfx27)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_28.4bpp.lz");
static const ax_sprite sMasquerainSprites28[] = {
	{sMasquerainGfx28, ARRAY_COUNT(sMasquerainGfx28)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_29.4bpp.lz");
static const ax_sprite sMasquerainSprites29[] = {
	{sMasquerainGfx29, ARRAY_COUNT(sMasquerainGfx29)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_30.4bpp.lz");
static const ax_sprite sMasquerainSprites30[] = {
	{sMasquerainGfx30, ARRAY_COUNT(sMasquerainGfx30)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_31.4bpp.lz");
static const ax_sprite sMasquerainSprites31[] = {
	{sMasquerainGfx31, ARRAY_COUNT(sMasquerainGfx31)}, 
	{NULL, 0}
};
static const u8 sMasquerainGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/masquerain/sprite_32.4bpp.lz");
static const ax_sprite sMasquerainSprites32[] = {
	{sMasquerainGfx32, ARRAY_COUNT(sMasquerainGfx32)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesMasquerain[] = {
	sMasquerainPose1,
	sMasquerainPose2,
	sMasquerainPose3,
	sMasquerainPose4,
	sMasquerainPose5,
	sMasquerainPose6,
	sMasquerainPose7,
	sMasquerainPose8,
	sMasquerainPose9,
	sMasquerainPose10,
	sMasquerainPose11,
	sMasquerainPose12,
	sMasquerainPose13,
	sMasquerainPose14,
	sMasquerainPose15,
	sMasquerainPose16,
	sMasquerainPose17,
	sMasquerainPose18,
	sMasquerainPose19,
	sMasquerainPose20,
	sMasquerainPose21,
	sMasquerainPose22,
	sMasquerainPose23,
	sMasquerainPose24,
	sMasquerainPose1,
	sMasquerainPose2,
	sMasquerainPose3,
	sMasquerainPose4,
	sMasquerainPose5,
	sMasquerainPose6,
	sMasquerainPose7,
	sMasquerainPose8,
	sMasquerainPose9,
	sMasquerainPose10,
	sMasquerainPose11,
	sMasquerainPose12,
	sMasquerainPose13,
	sMasquerainPose14,
	sMasquerainPose15,
	sMasquerainPose16,
	sMasquerainPose17,
	sMasquerainPose18,
	sMasquerainPose19,
	sMasquerainPose20,
	sMasquerainPose21,
	sMasquerainPose22,
	sMasquerainPose23,
	sMasquerainPose24,
	sMasquerainPose1,
	sMasquerainPose2,
	sMasquerainPose3,
	sMasquerainPose4,
	sMasquerainPose5,
	sMasquerainPose6,
	sMasquerainPose7,
	sMasquerainPose8,
	sMasquerainPose9,
	sMasquerainPose10,
	sMasquerainPose11,
	sMasquerainPose12,
	sMasquerainPose13,
	sMasquerainPose14,
	sMasquerainPose15,
	sMasquerainPose16,
	sMasquerainPose17,
	sMasquerainPose18,
	sMasquerainPose19,
	sMasquerainPose20,
	sMasquerainPose21,
	sMasquerainPose22,
	sMasquerainPose23,
	sMasquerainPose24,
	sMasquerainPose1,
	sMasquerainPose2,
	sMasquerainPose3,
	sMasquerainPose4,
	sMasquerainPose5,
	sMasquerainPose6,
	sMasquerainPose7,
	sMasquerainPose8,
	sMasquerainPose9,
	sMasquerainPose10,
	sMasquerainPose11,
	sMasquerainPose12,
	sMasquerainPose13,
	sMasquerainPose14,
	sMasquerainPose15,
	sMasquerainPose16,
	sMasquerainPose17,
	sMasquerainPose18,
	sMasquerainPose19,
	sMasquerainPose20,
	sMasquerainPose21,
	sMasquerainPose22,
	sMasquerainPose23,
	sMasquerainPose24,
	sMasquerainPose97,
	sMasquerainPose98,
	sMasquerainPose99,
	sMasquerainPose100,
	sMasquerainPose101,
	sMasquerainPose102,
	sMasquerainPose103,
	sMasquerainPose104,
	sMasquerainPose105,
	sMasquerainPose106,
	sMasquerainPose107,
	sMasquerainPose108,
	sMasquerainPose109,
	sMasquerainPose110,
	sMasquerainPose111,
	sMasquerainPose112,
	sMasquerainPose113,
	sMasquerainPose114,
	sMasquerainPose115,
	sMasquerainPose116,
	sMasquerainPose117,
	sMasquerainPose118,
	sMasquerainPose119,
	sMasquerainPose120,
	sMasquerainPose121,
	sMasquerainPose122,
	sMasquerainPose1,
	sMasquerainPose2,
	sMasquerainPose3,
	sMasquerainPose4,
	sMasquerainPose5,
	sMasquerainPose6,
	sMasquerainPose7,
	sMasquerainPose8,
	sMasquerainPose9,
	sMasquerainPose10,
	sMasquerainPose11,
	sMasquerainPose12,
	sMasquerainPose13,
	sMasquerainPose14,
	sMasquerainPose15,
	sMasquerainPose16,
	sMasquerainPose17,
	sMasquerainPose18,
	sMasquerainPose19,
	sMasquerainPose20,
	sMasquerainPose21,
	sMasquerainPose22,
	sMasquerainPose23,
	sMasquerainPose24,
	sMasquerainPose1,
	sMasquerainPose22,
	sMasquerainPose19,
	sMasquerainPose16,
	sMasquerainPose13,
	sMasquerainPose10,
	sMasquerainPose7,
	sMasquerainPose4,
	sMasquerainPose97,
	sMasquerainPose99,
	sMasquerainPose101,
	sMasquerainPose103,
	sMasquerainPose105,
	sMasquerainPose107,
	sMasquerainPose109,
	sMasquerainPose111,
	sMasquerainPose1,
	sMasquerainPose2,
	sMasquerainPose3,
	sMasquerainPose4,
	sMasquerainPose5,
	sMasquerainPose6,
	sMasquerainPose7,
	sMasquerainPose8,
	sMasquerainPose9,
	sMasquerainPose10,
	sMasquerainPose11,
	sMasquerainPose12,
	sMasquerainPose13,
	sMasquerainPose14,
	sMasquerainPose15,
	sMasquerainPose16,
	sMasquerainPose17,
	sMasquerainPose18,
	sMasquerainPose19,
	sMasquerainPose20,
	sMasquerainPose21,
	sMasquerainPose22,
	sMasquerainPose23,
	sMasquerainPose24,
	sMasquerainPose3,
	sMasquerainPose24,
	sMasquerainPose21,
	sMasquerainPose18,
	sMasquerainPose15,
	sMasquerainPose12,
	sMasquerainPose9,
	sMasquerainPose6,
	sMasquerainPose1,
	sMasquerainPose22,
	sMasquerainPose19,
	sMasquerainPose16,
	sMasquerainPose13,
	sMasquerainPose10,
	sMasquerainPose7,
	sMasquerainPose4,
};

static const struct PositionSets sAxPositionsMasquerain[] = {
	[0] = { .set = { {-1, -6}, {-12, -17}, {10, -17}, {-1, -9} } },
	[1] = { .set = { {-1, -6}, {-12, -16}, {10, -16}, {-1, -9} } },
	[2] = { .set = { {-1, -6}, {-11, -17}, {9, -17}, {-1, -9} } },
	[3] = { .set = { {3, -6}, {6, -18}, {-11, -16}, {1, -9} } },
	[4] = { .set = { {3, -6}, {7, -17}, {-12, -15}, {1, -9} } },
	[5] = { .set = { {3, -7}, {5, -18}, {-11, -17}, {1, -9} } },
	[6] = { .set = { {4, -6}, {-6, -20}, {-8, -16}, {1, -8} } },
	[7] = { .set = { {4, -6}, {-6, -19}, {-9, -15}, {1, -8} } },
	[8] = { .set = { {4, -6}, {-5, -20}, {-8, -16}, {1, -8} } },
	[9] = { .set = { {3, -8}, {-8, -17}, {6, -14}, {-1, -9} } },
	[10] = { .set = { {3, -7}, {-9, -16}, {6, -13}, {-1, -9} } },
	[11] = { .set = { {3, -8}, {-8, -18}, {5, -15}, {-1, -9} } },
	[12] = { .set = { {-1, -6}, {10, -16}, {-12, -16}, {-1, -7} } },
	[13] = { .set = { {-1, -6}, {10, -15}, {-12, -15}, {-1, -7} } },
	[14] = { .set = { {-1, -6}, {9, -17}, {-11, -17}, {-1, -7} } },
	[15] = { .set = { {-5, -8}, {6, -17}, {-8, -14}, {-1, -9} } },
	[16] = { .set = { {-5, -7}, {7, -16}, {-8, -13}, {-1, -9} } },
	[17] = { .set = { {-5, -8}, {6, -18}, {-7, -15}, {-1, -9} } },
	[18] = { .set = { {-6, -6}, {4, -20}, {6, -16}, {-3, -8} } },
	[19] = { .set = { {-6, -6}, {4, -19}, {7, -15}, {-3, -8} } },
	[20] = { .set = { {-6, -6}, {3, -20}, {6, -16}, {-3, -8} } },
	[21] = { .set = { {-5, -6}, {-8, -18}, {9, -16}, {-3, -9} } },
	[22] = { .set = { {-5, -6}, {-9, -17}, {10, -15}, {-3, -9} } },
	[23] = { .set = { {-5, -7}, {-7, -18}, {9, -17}, {-3, -9} } },
	[24] = { .set = { {-1, -6}, {-12, -17}, {10, -17}, {-1, -9} } },
	[25] = { .set = { {-1, -6}, {-12, -16}, {10, -16}, {-1, -9} } },
	[26] = { .set = { {-1, -6}, {-11, -17}, {9, -17}, {-1, -9} } },
	[27] = { .set = { {3, -6}, {6, -18}, {-11, -16}, {1, -9} } },
	[28] = { .set = { {3, -6}, {7, -17}, {-12, -15}, {1, -9} } },
	[29] = { .set = { {3, -7}, {5, -18}, {-11, -17}, {1, -9} } },
	[30] = { .set = { {4, -6}, {-6, -20}, {-8, -16}, {1, -8} } },
	[31] = { .set = { {4, -6}, {-6, -19}, {-9, -15}, {1, -8} } },
	[32] = { .set = { {4, -6}, {-5, -20}, {-8, -16}, {1, -8} } },
	[33] = { .set = { {3, -8}, {-8, -17}, {6, -14}, {-1, -9} } },
	[34] = { .set = { {3, -7}, {-9, -16}, {6, -13}, {-1, -9} } },
	[35] = { .set = { {3, -8}, {-8, -18}, {5, -15}, {-1, -9} } },
	[36] = { .set = { {-1, -6}, {10, -16}, {-12, -16}, {-1, -7} } },
	[37] = { .set = { {-1, -6}, {10, -15}, {-12, -15}, {-1, -7} } },
	[38] = { .set = { {-1, -6}, {9, -17}, {-11, -17}, {-1, -7} } },
	[39] = { .set = { {-5, -8}, {6, -17}, {-8, -14}, {-1, -9} } },
	[40] = { .set = { {-5, -7}, {7, -16}, {-8, -13}, {-1, -9} } },
	[41] = { .set = { {-5, -8}, {6, -18}, {-7, -15}, {-1, -9} } },
	[42] = { .set = { {-6, -6}, {4, -20}, {6, -16}, {-3, -8} } },
	[43] = { .set = { {-6, -6}, {4, -19}, {7, -15}, {-3, -8} } },
	[44] = { .set = { {-6, -6}, {3, -20}, {6, -16}, {-3, -8} } },
	[45] = { .set = { {-5, -6}, {-8, -18}, {9, -16}, {-3, -9} } },
	[46] = { .set = { {-5, -6}, {-9, -17}, {10, -15}, {-3, -9} } },
	[47] = { .set = { {-5, -7}, {-7, -18}, {9, -17}, {-3, -9} } },
	[48] = { .set = { {-1, -6}, {-12, -17}, {10, -17}, {-1, -9} } },
	[49] = { .set = { {-1, -6}, {-12, -16}, {10, -16}, {-1, -9} } },
	[50] = { .set = { {-1, -6}, {-11, -17}, {9, -17}, {-1, -9} } },
	[51] = { .set = { {3, -6}, {6, -18}, {-11, -16}, {1, -9} } },
	[52] = { .set = { {3, -6}, {7, -17}, {-12, -15}, {1, -9} } },
	[53] = { .set = { {3, -7}, {5, -18}, {-11, -17}, {1, -9} } },
	[54] = { .set = { {4, -6}, {-6, -20}, {-8, -16}, {1, -8} } },
	[55] = { .set = { {4, -6}, {-6, -19}, {-9, -15}, {1, -8} } },
	[56] = { .set = { {4, -6}, {-5, -20}, {-8, -16}, {1, -8} } },
	[57] = { .set = { {3, -8}, {-8, -17}, {6, -14}, {-1, -9} } },
	[58] = { .set = { {3, -7}, {-9, -16}, {6, -13}, {-1, -9} } },
	[59] = { .set = { {3, -8}, {-8, -18}, {5, -15}, {-1, -9} } },
	[60] = { .set = { {-1, -6}, {10, -16}, {-12, -16}, {-1, -7} } },
	[61] = { .set = { {-1, -6}, {10, -15}, {-12, -15}, {-1, -7} } },
	[62] = { .set = { {-1, -6}, {9, -17}, {-11, -17}, {-1, -7} } },
	[63] = { .set = { {-5, -8}, {6, -17}, {-8, -14}, {-1, -9} } },
	[64] = { .set = { {-5, -7}, {7, -16}, {-8, -13}, {-1, -9} } },
	[65] = { .set = { {-5, -8}, {6, -18}, {-7, -15}, {-1, -9} } },
	[66] = { .set = { {-6, -6}, {4, -20}, {6, -16}, {-3, -8} } },
	[67] = { .set = { {-6, -6}, {4, -19}, {7, -15}, {-3, -8} } },
	[68] = { .set = { {-6, -6}, {3, -20}, {6, -16}, {-3, -8} } },
	[69] = { .set = { {-5, -6}, {-8, -18}, {9, -16}, {-3, -9} } },
	[70] = { .set = { {-5, -6}, {-9, -17}, {10, -15}, {-3, -9} } },
	[71] = { .set = { {-5, -7}, {-7, -18}, {9, -17}, {-3, -9} } },
	[72] = { .set = { {-1, -6}, {-12, -17}, {10, -17}, {-1, -9} } },
	[73] = { .set = { {-1, -6}, {-12, -16}, {10, -16}, {-1, -9} } },
	[74] = { .set = { {-1, -6}, {-11, -17}, {9, -17}, {-1, -9} } },
	[75] = { .set = { {3, -6}, {6, -18}, {-11, -16}, {1, -9} } },
	[76] = { .set = { {3, -6}, {7, -17}, {-12, -15}, {1, -9} } },
	[77] = { .set = { {3, -7}, {5, -18}, {-11, -17}, {1, -9} } },
	[78] = { .set = { {4, -6}, {-6, -20}, {-8, -16}, {1, -8} } },
	[79] = { .set = { {4, -6}, {-6, -19}, {-9, -15}, {1, -8} } },
	[80] = { .set = { {4, -6}, {-5, -20}, {-8, -16}, {1, -8} } },
	[81] = { .set = { {3, -8}, {-8, -17}, {6, -14}, {-1, -9} } },
	[82] = { .set = { {3, -7}, {-9, -16}, {6, -13}, {-1, -9} } },
	[83] = { .set = { {3, -8}, {-8, -18}, {5, -15}, {-1, -9} } },
	[84] = { .set = { {-1, -6}, {10, -16}, {-12, -16}, {-1, -7} } },
	[85] = { .set = { {-1, -6}, {10, -15}, {-12, -15}, {-1, -7} } },
	[86] = { .set = { {-1, -6}, {9, -17}, {-11, -17}, {-1, -7} } },
	[87] = { .set = { {-5, -8}, {6, -17}, {-8, -14}, {-1, -9} } },
	[88] = { .set = { {-5, -7}, {7, -16}, {-8, -13}, {-1, -9} } },
	[89] = { .set = { {-5, -8}, {6, -18}, {-7, -15}, {-1, -9} } },
	[90] = { .set = { {-6, -6}, {4, -20}, {6, -16}, {-3, -8} } },
	[91] = { .set = { {-6, -6}, {4, -19}, {7, -15}, {-3, -8} } },
	[92] = { .set = { {-6, -6}, {3, -20}, {6, -16}, {-3, -8} } },
	[93] = { .set = { {-5, -6}, {-8, -18}, {9, -16}, {-3, -9} } },
	[94] = { .set = { {-5, -6}, {-9, -17}, {10, -15}, {-3, -9} } },
	[95] = { .set = { {-5, -7}, {-7, -18}, {9, -17}, {-3, -9} } },
	[96] = { .set = { {-1, -6}, {-11, -18}, {9, -18}, {-1, -9} } },
	[97] = { .set = { {-1, -6}, {-11, -18}, {9, -18}, {-1, -9} } },
	[98] = { .set = { {3, -6}, {5, -18}, {-11, -17}, {1, -9} } },
	[99] = { .set = { {3, -6}, {5, -18}, {-11, -17}, {1, -9} } },
	[100] = { .set = { {4, -6}, {-5, -20}, {-8, -16}, {1, -8} } },
	[101] = { .set = { {4, -6}, {-5, -20}, {-8, -16}, {1, -8} } },
	[102] = { .set = { {3, -8}, {-8, -17}, {5, -15}, {-1, -9} } },
	[103] = { .set = { {3, -8}, {-8, -17}, {5, -15}, {-1, -9} } },
	[104] = { .set = { {-1, -7}, {9, -17}, {-11, -17}, {-1, -8} } },
	[105] = { .set = { {-1, -7}, {9, -17}, {-11, -17}, {-1, -8} } },
	[106] = { .set = { {-5, -8}, {6, -17}, {-7, -15}, {-1, -9} } },
	[107] = { .set = { {-5, -8}, {6, -17}, {-7, -15}, {-1, -9} } },
	[108] = { .set = { {-6, -6}, {3, -20}, {6, -16}, {-3, -8} } },
	[109] = { .set = { {-6, -6}, {3, -20}, {6, -16}, {-3, -8} } },
	[110] = { .set = { {-5, -6}, {-7, -18}, {9, -17}, {-3, -9} } },
	[111] = { .set = { {-5, -6}, {-7, -18}, {9, -17}, {-3, -9} } },
	[112] = { .set = { {-5, -4}, {-13, -2}, {8, 2}, {0, -4} } },
	[113] = { .set = { {-5, -3}, {-12, -2}, {8, 3}, {0, -3} } },
	[114] = { .set = { {0, -13}, {-7, -23}, {7, -23}, {0, -15} } },
	[115] = { .set = { {1, -14}, {-5, -25}, {-13, -17}, {-1, -15} } },
	[116] = { .set = { {2, -14}, {-6, -22}, {-13, -14}, {-2, -14} } },
	[117] = { .set = { {3, -14}, {-9, -21}, {1, -18}, {-1, -12} } },
	[118] = { .set = { {0, -14}, {9, -16}, {-9, -16}, {0, -12} } },
	[119] = { .set = { {-4, -14}, {8, -21}, {-2, -18}, {0, -12} } },
	[120] = { .set = { {-3, -14}, {5, -22}, {12, -14}, {1, -14} } },
	[121] = { .set = { {-2, -14}, {4, -25}, {12, -17}, {0, -15} } },
	[122] = { .set = { {-1, -6}, {-12, -17}, {10, -17}, {-1, -9} } },
	[123] = { .set = { {-1, -6}, {-12, -16}, {10, -16}, {-1, -9} } },
	[124] = { .set = { {-1, -6}, {-11, -17}, {9, -17}, {-1, -9} } },
	[125] = { .set = { {3, -6}, {6, -18}, {-11, -16}, {1, -9} } },
	[126] = { .set = { {3, -6}, {7, -17}, {-12, -15}, {1, -9} } },
	[127] = { .set = { {3, -7}, {5, -18}, {-11, -17}, {1, -9} } },
	[128] = { .set = { {4, -6}, {-6, -20}, {-8, -16}, {1, -8} } },
	[129] = { .set = { {4, -6}, {-6, -19}, {-9, -15}, {1, -8} } },
	[130] = { .set = { {4, -6}, {-5, -20}, {-8, -16}, {1, -8} } },
	[131] = { .set = { {3, -8}, {-8, -17}, {6, -14}, {-1, -9} } },
	[132] = { .set = { {3, -7}, {-9, -16}, {6, -13}, {-1, -9} } },
	[133] = { .set = { {3, -8}, {-8, -18}, {5, -15}, {-1, -9} } },
	[134] = { .set = { {-1, -6}, {10, -16}, {-12, -16}, {-1, -7} } },
	[135] = { .set = { {-1, -6}, {10, -15}, {-12, -15}, {-1, -7} } },
	[136] = { .set = { {-1, -6}, {9, -17}, {-11, -17}, {-1, -7} } },
	[137] = { .set = { {-5, -8}, {6, -17}, {-8, -14}, {-1, -9} } },
	[138] = { .set = { {-5, -7}, {7, -16}, {-8, -13}, {-1, -9} } },
	[139] = { .set = { {-5, -8}, {6, -18}, {-7, -15}, {-1, -9} } },
	[140] = { .set = { {-6, -6}, {4, -20}, {6, -16}, {-3, -8} } },
	[141] = { .set = { {-6, -6}, {4, -19}, {7, -15}, {-3, -8} } },
	[142] = { .set = { {-6, -6}, {3, -20}, {6, -16}, {-3, -8} } },
	[143] = { .set = { {-5, -6}, {-8, -18}, {9, -16}, {-3, -9} } },
	[144] = { .set = { {-5, -6}, {-9, -17}, {10, -15}, {-3, -9} } },
	[145] = { .set = { {-5, -7}, {-7, -18}, {9, -17}, {-3, -9} } },
	[146] = { .set = { {-1, -6}, {-12, -17}, {10, -17}, {-1, -9} } },
	[147] = { .set = { {-5, -6}, {-8, -18}, {9, -16}, {-3, -9} } },
	[148] = { .set = { {-6, -6}, {4, -20}, {6, -16}, {-3, -8} } },
	[149] = { .set = { {-5, -8}, {6, -17}, {-8, -14}, {-1, -9} } },
	[150] = { .set = { {-1, -6}, {10, -16}, {-12, -16}, {-1, -7} } },
	[151] = { .set = { {3, -8}, {-8, -17}, {6, -14}, {-1, -9} } },
	[152] = { .set = { {4, -6}, {-6, -20}, {-8, -16}, {1, -8} } },
	[153] = { .set = { {3, -6}, {6, -18}, {-11, -16}, {1, -9} } },
	[154] = { .set = { {-1, -6}, {-11, -18}, {9, -18}, {-1, -9} } },
	[155] = { .set = { {3, -6}, {5, -18}, {-11, -17}, {1, -9} } },
	[156] = { .set = { {4, -6}, {-5, -20}, {-8, -16}, {1, -8} } },
	[157] = { .set = { {3, -8}, {-8, -17}, {5, -15}, {-1, -9} } },
	[158] = { .set = { {-1, -7}, {9, -17}, {-11, -17}, {-1, -8} } },
	[159] = { .set = { {-5, -8}, {6, -17}, {-7, -15}, {-1, -9} } },
	[160] = { .set = { {-6, -6}, {3, -20}, {6, -16}, {-3, -8} } },
	[161] = { .set = { {-5, -6}, {-7, -18}, {9, -17}, {-3, -9} } },
	[162] = { .set = { {-1, -6}, {-12, -17}, {10, -17}, {-1, -9} } },
	[163] = { .set = { {-1, -6}, {-12, -16}, {10, -16}, {-1, -9} } },
	[164] = { .set = { {-1, -6}, {-11, -17}, {9, -17}, {-1, -9} } },
	[165] = { .set = { {3, -6}, {6, -18}, {-11, -16}, {1, -9} } },
	[166] = { .set = { {3, -6}, {7, -17}, {-12, -15}, {1, -9} } },
	[167] = { .set = { {3, -7}, {5, -18}, {-11, -17}, {1, -9} } },
	[168] = { .set = { {4, -6}, {-6, -20}, {-8, -16}, {1, -8} } },
	[169] = { .set = { {4, -6}, {-6, -19}, {-9, -15}, {1, -8} } },
	[170] = { .set = { {4, -6}, {-5, -20}, {-8, -16}, {1, -8} } },
	[171] = { .set = { {3, -8}, {-8, -17}, {6, -14}, {-1, -9} } },
	[172] = { .set = { {3, -7}, {-9, -16}, {6, -13}, {-1, -9} } },
	[173] = { .set = { {3, -8}, {-8, -18}, {5, -15}, {-1, -9} } },
	[174] = { .set = { {-1, -6}, {10, -16}, {-12, -16}, {-1, -7} } },
	[175] = { .set = { {-1, -6}, {10, -15}, {-12, -15}, {-1, -7} } },
	[176] = { .set = { {-1, -6}, {9, -17}, {-11, -17}, {-1, -7} } },
	[177] = { .set = { {-5, -8}, {6, -17}, {-8, -14}, {-1, -9} } },
	[178] = { .set = { {-5, -7}, {7, -16}, {-8, -13}, {-1, -9} } },
	[179] = { .set = { {-5, -8}, {6, -18}, {-7, -15}, {-1, -9} } },
	[180] = { .set = { {-6, -6}, {4, -20}, {6, -16}, {-3, -8} } },
	[181] = { .set = { {-6, -6}, {4, -19}, {7, -15}, {-3, -8} } },
	[182] = { .set = { {-6, -6}, {3, -20}, {6, -16}, {-3, -8} } },
	[183] = { .set = { {-5, -6}, {-8, -18}, {9, -16}, {-3, -9} } },
	[184] = { .set = { {-5, -6}, {-9, -17}, {10, -15}, {-3, -9} } },
	[185] = { .set = { {-5, -7}, {-7, -18}, {9, -17}, {-3, -9} } },
	[186] = { .set = { {-1, -6}, {-11, -17}, {9, -17}, {-1, -9} } },
	[187] = { .set = { {-5, -7}, {-7, -18}, {9, -17}, {-3, -9} } },
	[188] = { .set = { {-6, -6}, {3, -20}, {6, -16}, {-3, -8} } },
	[189] = { .set = { {-5, -8}, {6, -18}, {-7, -15}, {-1, -9} } },
	[190] = { .set = { {-1, -6}, {9, -17}, {-11, -17}, {-1, -7} } },
	[191] = { .set = { {3, -8}, {-8, -18}, {5, -15}, {-1, -9} } },
	[192] = { .set = { {4, -6}, {-5, -20}, {-8, -16}, {1, -8} } },
	[193] = { .set = { {3, -7}, {5, -18}, {-11, -17}, {1, -9} } },
	[194] = { .set = { {-1, -6}, {-12, -17}, {10, -17}, {-1, -9} } },
	[195] = { .set = { {-5, -6}, {-8, -18}, {9, -16}, {-3, -9} } },
	[196] = { .set = { {-6, -6}, {4, -20}, {6, -16}, {-3, -8} } },
	[197] = { .set = { {-5, -8}, {6, -17}, {-8, -14}, {-1, -9} } },
	[198] = { .set = { {-1, -6}, {10, -16}, {-12, -16}, {-1, -7} } },
	[199] = { .set = { {3, -8}, {-8, -17}, {6, -14}, {-1, -9} } },
	[200] = { .set = { {4, -6}, {-6, -20}, {-8, -16}, {1, -8} } },
	[201] = { .set = { {3, -6}, {6, -18}, {-11, -16}, {1, -9} } },
};

static const ax_anim *const sMasquerainAnimTable1[] = {
	sMasquerainAnims_1_1,
	sMasquerainAnims_1_2,
	sMasquerainAnims_1_3,
	sMasquerainAnims_1_4,
	sMasquerainAnims_1_5,
	sMasquerainAnims_1_6,
	sMasquerainAnims_1_7,
	sMasquerainAnims_1_8,
};

static const ax_anim *const sMasquerainAnimTable2[] = {
	sMasquerainAnims_2_1,
	sMasquerainAnims_2_2,
	sMasquerainAnims_2_3,
	sMasquerainAnims_2_4,
	sMasquerainAnims_2_5,
	sMasquerainAnims_2_6,
	sMasquerainAnims_2_7,
	sMasquerainAnims_2_8,
};

static const ax_anim *const sMasquerainAnimTable3[] = {
	sMasquerainAnims_3_1,
	sMasquerainAnims_3_2,
	sMasquerainAnims_3_3,
	sMasquerainAnims_3_4,
	sMasquerainAnims_3_5,
	sMasquerainAnims_3_6,
	sMasquerainAnims_3_7,
	sMasquerainAnims_3_8,
};

static const ax_anim *const sMasquerainAnimTable4[] = {
	sMasquerainAnims_4_1,
	sMasquerainAnims_4_2,
	sMasquerainAnims_4_3,
	sMasquerainAnims_4_4,
	sMasquerainAnims_4_5,
	sMasquerainAnims_4_6,
	sMasquerainAnims_4_7,
	sMasquerainAnims_4_8,
};

static const ax_anim *const sMasquerainAnimTable5[] = {
	sMasquerainAnims_5_1,
	sMasquerainAnims_5_2,
	sMasquerainAnims_5_3,
	sMasquerainAnims_5_4,
	sMasquerainAnims_5_5,
	sMasquerainAnims_5_6,
	sMasquerainAnims_5_7,
	sMasquerainAnims_5_8,
};

static const ax_anim *const sMasquerainAnimTable6[] = {
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
};

static const ax_anim *const sMasquerainAnimTable7[] = {
	gAxSharedAnim_00266,
	gAxSharedAnim_00273,
	gAxSharedAnim_00280,
	gAxSharedAnim_00290,
	gAxSharedAnim_00302,
	gAxSharedAnim_00315,
	gAxSharedAnim_00322,
	gAxSharedAnim_00328,
};

static const ax_anim *const sMasquerainAnimTable8[] = {
	sMasquerainAnims_8_1,
	sMasquerainAnims_8_2,
	sMasquerainAnims_8_3,
	sMasquerainAnims_8_4,
	sMasquerainAnims_8_5,
	sMasquerainAnims_8_6,
	sMasquerainAnims_8_7,
	sMasquerainAnims_8_8,
};

static const ax_anim *const sMasquerainAnimTable9[] = {
	sMasquerainAnims_9_1,
	sMasquerainAnims_9_2,
	sMasquerainAnims_9_3,
	sMasquerainAnims_9_4,
	sMasquerainAnims_9_5,
	sMasquerainAnims_9_6,
	sMasquerainAnims_9_7,
	sMasquerainAnims_9_8,
};

static const ax_anim *const sMasquerainAnimTable10[] = {
	gAxSharedAnim_00612,
	gAxSharedAnim_00622,
	gAxSharedAnim_00632,
	gAxSharedAnim_00642,
	gAxSharedAnim_00651,
	gAxSharedAnim_00660,
	gAxSharedAnim_00675,
	gAxSharedAnim_00686,
};

static const ax_anim *const sMasquerainAnimTable11[] = {
	sMasquerainAnims_11_1,
	sMasquerainAnims_11_2,
	sMasquerainAnims_11_3,
	sMasquerainAnims_11_4,
	sMasquerainAnims_11_5,
	sMasquerainAnims_11_6,
	sMasquerainAnims_11_7,
	sMasquerainAnims_11_8,
};

static const ax_anim *const sMasquerainAnimTable12[] = {
	gAxSharedAnim_01018,
	gAxSharedAnim_01127,
	gAxSharedAnim_01099,
	gAxSharedAnim_01085,
	gAxSharedAnim_01084,
	gAxSharedAnim_01065,
	gAxSharedAnim_01034,
	gAxSharedAnim_01019,
};

static const ax_anim *const sMasquerainAnimTable13[] = {
	gAxSharedAnim_01145,
	gAxSharedAnim_01227,
	gAxSharedAnim_01218,
	gAxSharedAnim_01201,
	gAxSharedAnim_01190,
	gAxSharedAnim_01179,
	gAxSharedAnim_01168,
	gAxSharedAnim_01157,
};

static const ax_anim *const *const sAxAnimationsMasquerain[] = {
	sMasquerainAnimTable1,
	sMasquerainAnimTable2,
	sMasquerainAnimTable3,
	sMasquerainAnimTable4,
	sMasquerainAnimTable5,
	sMasquerainAnimTable6,
	sMasquerainAnimTable7,
	sMasquerainAnimTable8,
	sMasquerainAnimTable9,
	sMasquerainAnimTable10,
	sMasquerainAnimTable11,
	sMasquerainAnimTable12,
	sMasquerainAnimTable13,
};

static const ax_sprite *const sAxSpritesMasquerain[] = {
	sMasquerainSprites1,
	sMasquerainSprites2,
	sMasquerainSprites3,
	sMasquerainSprites4,
	sMasquerainSprites5,
	sMasquerainSprites6,
	sMasquerainSprites7,
	sMasquerainSprites8,
	sMasquerainSprites9,
	sMasquerainSprites10,
	sMasquerainSprites11,
	sMasquerainSprites12,
	sMasquerainSprites13,
	sMasquerainSprites14,
	sMasquerainSprites15,
	sMasquerainSprites16,
	sMasquerainSprites17,
	sMasquerainSprites18,
	sMasquerainSprites19,
	sMasquerainSprites20,
	sMasquerainSprites21,
	sMasquerainSprites22,
	sMasquerainSprites23,
	sMasquerainSprites24,
	sMasquerainSprites25,
	sMasquerainSprites26,
	sMasquerainSprites27,
	sMasquerainSprites28,
	sMasquerainSprites29,
	sMasquerainSprites30,
	sMasquerainSprites31,
	sMasquerainSprites32,
};

static const axmain sAxMainMasquerain = {
	.poses = sAxPosesMasquerain,
	.animations = sAxAnimationsMasquerain,
	.animCount = ARRAY_COUNT(sAxAnimationsMasquerain),
	.spriteData = sAxSpritesMasquerain,
	.positions = sAxPositionsMasquerain,
};
