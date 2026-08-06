/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainCelebi;
const SiroArchive gAxCelebi = {"SIRO", &sAxMainCelebi};

static const ax_pose sCelebiPose1[] = {
	AX_POSE(0, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose2[] = {
	AX_POSE(1, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose3[] = {
	AX_POSE(2, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose4[] = {
	AX_POSE(3, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose5[] = {
	AX_POSE(4, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose6[] = {
	AX_POSE(5, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose7[] = {
	AX_POSE(6, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose8[] = {
	AX_POSE(7, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose9[] = {
	AX_POSE(8, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose10[] = {
	AX_POSE(9, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose11[] = {
	AX_POSE(10, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose12[] = {
	AX_POSE(11, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose13[] = {
	AX_POSE(12, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose14[] = {
	AX_POSE(13, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose15[] = {
	AX_POSE(14, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose16[] = {
	AX_POSE(9, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose17[] = {
	AX_POSE(10, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose18[] = {
	AX_POSE(11, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose19[] = {
	AX_POSE(6, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose20[] = {
	AX_POSE(7, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose21[] = {
	AX_POSE(8, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose22[] = {
	AX_POSE(3, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose23[] = {
	AX_POSE(5, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose24[] = {
	AX_POSE(4, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose121[] = {
	AX_POSE(15, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose122[] = {
	AX_POSE(16, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose123[] = {
	AX_POSE(17, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose124[] = {
	AX_POSE(18, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose125[] = {
	AX_POSE(19, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose126[] = {
	AX_POSE(20, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose127[] = {
	AX_POSE(21, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose128[] = {
	AX_POSE(20, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose129[] = {
	AX_POSE(19, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose130[] = {
	AX_POSE(18, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose160[] = {
	AX_POSE(10, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose161[] = {
	AX_POSE(7, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCelebiPose162[] = {
	AX_POSE(4, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_anim sCelebiAnims_1_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 1, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 1, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_1_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 5, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 5, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_1_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 7, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 7, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_1_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 11, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 11, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_1_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 13, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_1_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 16, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 17, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 16, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 17, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_1_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 19, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 18, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 20, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 19, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 18, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 20, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_1_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 22, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 21, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 23, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 22, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 21, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 23, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_2_1[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 24, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 12}, .shadow = {0, 11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 25}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 24, .offset = {1, 25}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 25}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {1, 25}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_2_2[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 27, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 28, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {12, 13}, .shadow = {12, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {23, 25}, .shadow = {22, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 27, .offset = {24, 24}, .shadow = {23, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {23, 25}, .shadow = {22, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {24, 24}, .shadow = {23, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_2_3[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 30, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 31, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {23, 1}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 30, .offset = {23, 2}, .shadow = {23, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {23, 1}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {23, 2}, .shadow = {23, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_2_4[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 33, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 34, .offset = {5, -3}, .shadow = {5, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {15, -10}, .shadow = {14, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {23, -16}, .shadow = {22, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 33, .offset = {24, -15}, .shadow = {23, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {23, -16}, .shadow = {22, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {24, -15}, .shadow = {23, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {7, -5}, .shadow = {7, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_2_5[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 36, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 37, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, -12}, .shadow = {0, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -17}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 36, .offset = {1, -17}, .shadow = {1, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -17}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {1, -17}, .shadow = {1, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -4}, .shadow = {0, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_2_6[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 39, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 40, .offset = {-5, -3}, .shadow = {-5, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {-15, -10}, .shadow = {-14, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-23, -16}, .shadow = {-22, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {-24, -15}, .shadow = {-23, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-23, -16}, .shadow = {-22, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-24, -15}, .shadow = {-23, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-7, -5}, .shadow = {-7, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_2_7[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 42, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 43, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-23, 1}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 42, .offset = {-23, 2}, .shadow = {-23, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-23, 1}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-23, 2}, .shadow = {-23, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_2_8[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 45, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 46, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {-12, 13}, .shadow = {-12, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-23, 25}, .shadow = {-22, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 45, .offset = {-24, 24}, .shadow = {-23, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-23, 25}, .shadow = {-22, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-24, 24}, .shadow = {-23, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_3_1[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 48, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 49, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, 12}, .shadow = {0, 11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 25}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 48, .offset = {1, 25}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 25}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, 25}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_3_2[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 51, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 52, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {12, 13}, .shadow = {12, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {23, 25}, .shadow = {22, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {24, 24}, .shadow = {23, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {23, 25}, .shadow = {22, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {24, 24}, .shadow = {23, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_3_3[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 54, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 55, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {23, 1}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 54, .offset = {23, 2}, .shadow = {23, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {23, 1}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {23, 2}, .shadow = {23, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_3_4[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 57, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 58, .offset = {5, -3}, .shadow = {5, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {15, -10}, .shadow = {14, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {23, -16}, .shadow = {22, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 57, .offset = {24, -15}, .shadow = {23, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {23, -16}, .shadow = {22, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {24, -15}, .shadow = {23, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {7, -5}, .shadow = {7, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_3_5[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 60, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 60, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 60, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 60, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 61, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, -12}, .shadow = {0, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -17}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 60, .offset = {1, -17}, .shadow = {1, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -17}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {1, -17}, .shadow = {1, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -4}, .shadow = {0, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_3_6[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 63, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 64, .offset = {-5, -3}, .shadow = {-5, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {-15, -10}, .shadow = {-14, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-23, -16}, .shadow = {-22, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 63, .offset = {-24, -15}, .shadow = {-23, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-23, -16}, .shadow = {-22, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-24, -15}, .shadow = {-23, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-7, -5}, .shadow = {-7, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_3_7[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 66, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 67, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-23, 1}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 66, .offset = {-23, 2}, .shadow = {-23, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-23, 1}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-23, 2}, .shadow = {-23, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_3_8[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 69, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 70, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {-12, 13}, .shadow = {-12, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-23, 25}, .shadow = {-22, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 69, .offset = {-24, 24}, .shadow = {-23, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-23, 25}, .shadow = {-22, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-24, 24}, .shadow = {-23, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 72, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 72, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 75, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 75, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-4, -6}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-4, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-3, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-2, -2}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 78, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 78, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-6, -2}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {-5, -1}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-4, -1}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 81, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 81, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {-6, 4}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-5, 4}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-4, 3}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-2, 2}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 84, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 84, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, 4}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, 4}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, 3}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, 2}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 87, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 87, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {6, 4}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {5, 4}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {4, 3}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {2, 2}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 90, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 90, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {6, -2}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {5, -1}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {4, -1}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 93, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 93, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {6, -8}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {5, -6}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {4, -5}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {2, -2}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_5_1[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 98, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_5_2[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 101, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_5_3[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 104, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_5_4[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 107, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_5_5[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 110, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_5_6[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 113, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_5_7[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 116, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_5_8[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 119, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_6_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 120, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 26, .unkFlags = 0, .poseId = 120, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 121, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 121, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 26, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_8_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 132, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 132, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 130, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 131, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 131, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_8_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 135, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 135, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 133, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 134, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 134, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_8_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 138, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 138, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 136, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 137, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 137, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_8_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 141, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 141, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 139, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 140, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 140, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_8_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 144, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 144, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 142, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 143, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 143, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_8_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 147, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 147, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 145, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 146, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 146, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_8_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 150, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 150, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 148, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 149, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 149, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_8_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 153, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 153, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 151, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 152, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 152, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {8, 11}, .shadow = {8, 11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {7, 19}, .shadow = {7, 18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 158, .offset = {0, 23}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 159, .offset = {-7, 19}, .shadow = {-7, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-8, 11}, .shadow = {-8, 11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {21, 14}, .shadow = {21, 13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 157, .offset = {22, 23}, .shadow = {22, 22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 158, .offset = {13, 25}, .shadow = {13, 24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {4, 17}, .shadow = {4, 17} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {18, -3}, .shadow = {18, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 156, .offset = {22, 1}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 157, .offset = {20, 4}, .shadow = {20, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {12, 5}, .shadow = {12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {4, 5}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {14, -20}, .shadow = {14, -21} },
	{ .frames = 3, .unkFlags = 0, .poseId = 155, .offset = {22, -19}, .shadow = {22, -21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 156, .offset = {22, -12}, .shadow = {22, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-9, -12}, .shadow = {-9, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-7, -17}, .shadow = {-7, -19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 154, .offset = {0, -19}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 155, .offset = {7, -17}, .shadow = {7, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {9, -12}, .shadow = {9, -13} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {-14, -20}, .shadow = {-14, -21} },
	{ .frames = 3, .unkFlags = 0, .poseId = 161, .offset = {-22, -19}, .shadow = {-22, -21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 160, .offset = {-22, -12}, .shadow = {-22, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-18, -3}, .shadow = {-18, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 160, .offset = {-22, 1}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 159, .offset = {-20, 4}, .shadow = {-20, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {-12, 5}, .shadow = {-12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {-4, 5}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-21, 14}, .shadow = {-21, 13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 159, .offset = {-22, 23}, .shadow = {-22, 22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 158, .offset = {-13, 25}, .shadow = {-13, 24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {-4, 17}, .shadow = {-4, 17} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 172, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 172, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 170, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 171, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 170, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 175, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 175, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 173, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 174, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 173, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 178, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 178, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 176, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 177, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 176, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 181, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 181, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 181, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 179, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 180, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 180, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 179, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 184, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 184, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 184, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 182, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 183, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 183, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 182, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 187, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 187, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 185, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 186, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 185, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 190, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 190, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 188, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 189, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 188, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 193, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 193, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 191, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 192, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 191, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCelebiAnims_14_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 210, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 212, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 211, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 210, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 212, .offset = {0, -14}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 211, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 210, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 212, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 211, .offset = {0, -14}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 210, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 212, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 211, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 210, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 215, .offset = {-2, -4}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 217, .offset = {-4, -8}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 219, .offset = {-6, -12}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 224, .offset = {-8, -16}, .shadow = {-8, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 226, .offset = {-10, -19}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 228, .offset = {-12, -22}, .shadow = {-12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 233, .offset = {-14, -25}, .shadow = {-14, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 211, .offset = {-16, -27}, .shadow = {-16, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 213, .offset = {-18, -29}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 218, .offset = {-20, -30}, .shadow = {-20, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 219, .offset = {-22, -31}, .shadow = {-22, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 224, .offset = {-24, -32}, .shadow = {-24, -24} },
	{ .frames = 1, .unkFlags = 0, .poseId = 226, .offset = {-26, -32}, .shadow = {-26, -26} },
	{ .frames = 1, .unkFlags = 0, .poseId = 228, .offset = {-28, -32}, .shadow = {-28, -28} },
	{ .frames = 1, .unkFlags = 0, .poseId = 233, .offset = {-30, -32}, .shadow = {-30, -30} },
	{ .frames = 1, .unkFlags = 1, .poseId = 210, .offset = {-32, -32}, .shadow = {-32, -32} },
	{ .frames = 1, .unkFlags = 0, .poseId = 215, .offset = {-28, -34}, .shadow = {-28, -32} },
	{ .frames = 1, .unkFlags = 0, .poseId = 217, .offset = {-24, -36}, .shadow = {-24, -32} },
	{ .frames = 2, .unkFlags = 0, .poseId = 219, .offset = {-20, -38}, .shadow = {-20, -32} },
	{ .frames = 2, .unkFlags = 0, .poseId = 224, .offset = {-16, -40}, .shadow = {-16, -32} },
	{ .frames = 2, .unkFlags = 0, .poseId = 226, .offset = {-12, -41}, .shadow = {-12, -32} },
	{ .frames = 2, .unkFlags = 0, .poseId = 228, .offset = {-8, -42}, .shadow = {-8, -32} },
	{ .frames = 2, .unkFlags = 0, .poseId = 233, .offset = {-4, -43}, .shadow = {-4, -32} },
	{ .frames = 2, .unkFlags = 0, .poseId = 211, .offset = {0, -43}, .shadow = {0, -32} },
	{ .frames = 2, .unkFlags = 0, .poseId = 213, .offset = {4, -43}, .shadow = {4, -32} },
	{ .frames = 2, .unkFlags = 0, .poseId = 218, .offset = {8, -42}, .shadow = {8, -32} },
	{ .frames = 2, .unkFlags = 0, .poseId = 219, .offset = {12, -41}, .shadow = {12, -32} },
	{ .frames = 2, .unkFlags = 0, .poseId = 224, .offset = {16, -40}, .shadow = {16, -32} },
	{ .frames = 1, .unkFlags = 0, .poseId = 226, .offset = {20, -38}, .shadow = {20, -32} },
	{ .frames = 1, .unkFlags = 0, .poseId = 228, .offset = {24, -36}, .shadow = {24, -32} },
	{ .frames = 1, .unkFlags = 0, .poseId = 233, .offset = {28, -34}, .shadow = {28, -32} },
	{ .frames = 1, .unkFlags = 1, .poseId = 210, .offset = {32, -32}, .shadow = {32, -32} },
	{ .frames = 1, .unkFlags = 0, .poseId = 215, .offset = {30, -32}, .shadow = {30, -30} },
	{ .frames = 1, .unkFlags = 0, .poseId = 217, .offset = {28, -32}, .shadow = {28, -28} },
	{ .frames = 2, .unkFlags = 0, .poseId = 219, .offset = {26, -32}, .shadow = {26, -26} },
	{ .frames = 2, .unkFlags = 0, .poseId = 224, .offset = {24, -32}, .shadow = {24, -24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 226, .offset = {22, -31}, .shadow = {22, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 228, .offset = {20, -30}, .shadow = {20, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 233, .offset = {18, -29}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 211, .offset = {16, -27}, .shadow = {16, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 213, .offset = {14, -25}, .shadow = {14, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 218, .offset = {12, -22}, .shadow = {12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 219, .offset = {10, -19}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 224, .offset = {8, -16}, .shadow = {8, -8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 226, .offset = {6, -12}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 228, .offset = {4, -8}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 233, .offset = {2, -4}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 210, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sCelebiGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_1.4bpp.lz");
static const ax_sprite sCelebiSprites1[] = {
	{sCelebiGfx1, ARRAY_COUNT(sCelebiGfx1)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_2.4bpp.lz");
static const ax_sprite sCelebiSprites2[] = {
	{sCelebiGfx2, ARRAY_COUNT(sCelebiGfx2)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_3.4bpp.lz");
static const ax_sprite sCelebiSprites3[] = {
	{sCelebiGfx3, ARRAY_COUNT(sCelebiGfx3)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_4.4bpp.lz");
static const ax_sprite sCelebiSprites4[] = {
	{sCelebiGfx4, ARRAY_COUNT(sCelebiGfx4)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_5.4bpp.lz");
static const ax_sprite sCelebiSprites5[] = {
	{sCelebiGfx5, ARRAY_COUNT(sCelebiGfx5)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_6.4bpp.lz");
static const ax_sprite sCelebiSprites6[] = {
	{sCelebiGfx6, ARRAY_COUNT(sCelebiGfx6)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_7.4bpp.lz");
static const ax_sprite sCelebiSprites7[] = {
	{sCelebiGfx7, ARRAY_COUNT(sCelebiGfx7)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_8.4bpp.lz");
static const ax_sprite sCelebiSprites8[] = {
	{sCelebiGfx8, ARRAY_COUNT(sCelebiGfx8)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_9.4bpp.lz");
static const ax_sprite sCelebiSprites9[] = {
	{sCelebiGfx9, ARRAY_COUNT(sCelebiGfx9)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_10.4bpp.lz");
static const ax_sprite sCelebiSprites10[] = {
	{sCelebiGfx10, ARRAY_COUNT(sCelebiGfx10)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_11.4bpp.lz");
static const ax_sprite sCelebiSprites11[] = {
	{sCelebiGfx11, ARRAY_COUNT(sCelebiGfx11)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_12.4bpp.lz");
static const ax_sprite sCelebiSprites12[] = {
	{sCelebiGfx12, ARRAY_COUNT(sCelebiGfx12)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_13.4bpp.lz");
static const ax_sprite sCelebiSprites13[] = {
	{sCelebiGfx13, ARRAY_COUNT(sCelebiGfx13)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_14.4bpp.lz");
static const ax_sprite sCelebiSprites14[] = {
	{sCelebiGfx14, ARRAY_COUNT(sCelebiGfx14)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_15.4bpp.lz");
static const ax_sprite sCelebiSprites15[] = {
	{sCelebiGfx15, ARRAY_COUNT(sCelebiGfx15)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_16.4bpp.lz");
static const ax_sprite sCelebiSprites16[] = {
	{sCelebiGfx16, ARRAY_COUNT(sCelebiGfx16)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_17.4bpp.lz");
static const ax_sprite sCelebiSprites17[] = {
	{sCelebiGfx17, ARRAY_COUNT(sCelebiGfx17)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_18.4bpp.lz");
static const ax_sprite sCelebiSprites18[] = {
	{sCelebiGfx18, ARRAY_COUNT(sCelebiGfx18)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_19.4bpp.lz");
static const ax_sprite sCelebiSprites19[] = {
	{sCelebiGfx19, ARRAY_COUNT(sCelebiGfx19)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_20.4bpp.lz");
static const ax_sprite sCelebiSprites20[] = {
	{sCelebiGfx20, ARRAY_COUNT(sCelebiGfx20)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_21.4bpp.lz");
static const ax_sprite sCelebiSprites21[] = {
	{sCelebiGfx21, ARRAY_COUNT(sCelebiGfx21)}, 
	{NULL, 0}
};
static const u8 sCelebiGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/celebi/sprite_22.4bpp.lz");
static const ax_sprite sCelebiSprites22[] = {
	{sCelebiGfx22, ARRAY_COUNT(sCelebiGfx22)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesCelebi[] = {
	sCelebiPose1,
	sCelebiPose2,
	sCelebiPose3,
	sCelebiPose4,
	sCelebiPose5,
	sCelebiPose6,
	sCelebiPose7,
	sCelebiPose8,
	sCelebiPose9,
	sCelebiPose10,
	sCelebiPose11,
	sCelebiPose12,
	sCelebiPose13,
	sCelebiPose14,
	sCelebiPose15,
	sCelebiPose16,
	sCelebiPose17,
	sCelebiPose18,
	sCelebiPose19,
	sCelebiPose20,
	sCelebiPose21,
	sCelebiPose22,
	sCelebiPose23,
	sCelebiPose24,
	sCelebiPose1,
	sCelebiPose2,
	sCelebiPose3,
	sCelebiPose4,
	sCelebiPose5,
	sCelebiPose6,
	sCelebiPose7,
	sCelebiPose8,
	sCelebiPose9,
	sCelebiPose10,
	sCelebiPose11,
	sCelebiPose12,
	sCelebiPose13,
	sCelebiPose14,
	sCelebiPose15,
	sCelebiPose16,
	sCelebiPose17,
	sCelebiPose18,
	sCelebiPose19,
	sCelebiPose20,
	sCelebiPose21,
	sCelebiPose22,
	sCelebiPose23,
	sCelebiPose24,
	sCelebiPose1,
	sCelebiPose2,
	sCelebiPose3,
	sCelebiPose4,
	sCelebiPose5,
	sCelebiPose6,
	sCelebiPose7,
	sCelebiPose8,
	sCelebiPose9,
	sCelebiPose10,
	sCelebiPose11,
	sCelebiPose12,
	sCelebiPose13,
	sCelebiPose14,
	sCelebiPose15,
	sCelebiPose16,
	sCelebiPose17,
	sCelebiPose18,
	sCelebiPose19,
	sCelebiPose20,
	sCelebiPose21,
	sCelebiPose22,
	sCelebiPose23,
	sCelebiPose24,
	sCelebiPose1,
	sCelebiPose2,
	sCelebiPose3,
	sCelebiPose4,
	sCelebiPose5,
	sCelebiPose6,
	sCelebiPose7,
	sCelebiPose8,
	sCelebiPose9,
	sCelebiPose10,
	sCelebiPose11,
	sCelebiPose12,
	sCelebiPose13,
	sCelebiPose14,
	sCelebiPose15,
	sCelebiPose16,
	sCelebiPose17,
	sCelebiPose18,
	sCelebiPose19,
	sCelebiPose20,
	sCelebiPose21,
	sCelebiPose22,
	sCelebiPose23,
	sCelebiPose24,
	sCelebiPose1,
	sCelebiPose2,
	sCelebiPose3,
	sCelebiPose4,
	sCelebiPose5,
	sCelebiPose6,
	sCelebiPose7,
	sCelebiPose8,
	sCelebiPose9,
	sCelebiPose10,
	sCelebiPose11,
	sCelebiPose12,
	sCelebiPose13,
	sCelebiPose14,
	sCelebiPose15,
	sCelebiPose16,
	sCelebiPose17,
	sCelebiPose18,
	sCelebiPose19,
	sCelebiPose20,
	sCelebiPose21,
	sCelebiPose22,
	sCelebiPose23,
	sCelebiPose24,
	sCelebiPose121,
	sCelebiPose122,
	sCelebiPose123,
	sCelebiPose124,
	sCelebiPose125,
	sCelebiPose126,
	sCelebiPose127,
	sCelebiPose128,
	sCelebiPose129,
	sCelebiPose130,
	sCelebiPose1,
	sCelebiPose2,
	sCelebiPose3,
	sCelebiPose4,
	sCelebiPose6,
	sCelebiPose5,
	sCelebiPose7,
	sCelebiPose8,
	sCelebiPose9,
	sCelebiPose10,
	sCelebiPose11,
	sCelebiPose12,
	sCelebiPose13,
	sCelebiPose14,
	sCelebiPose15,
	sCelebiPose16,
	sCelebiPose17,
	sCelebiPose18,
	sCelebiPose19,
	sCelebiPose20,
	sCelebiPose21,
	sCelebiPose22,
	sCelebiPose23,
	sCelebiPose24,
	sCelebiPose2,
	sCelebiPose23,
	sCelebiPose20,
	sCelebiPose17,
	sCelebiPose14,
	sCelebiPose160,
	sCelebiPose161,
	sCelebiPose162,
	sCelebiPose2,
	sCelebiPose162,
	sCelebiPose161,
	sCelebiPose160,
	sCelebiPose14,
	sCelebiPose17,
	sCelebiPose20,
	sCelebiPose23,
	sCelebiPose1,
	sCelebiPose2,
	sCelebiPose3,
	sCelebiPose4,
	sCelebiPose5,
	sCelebiPose6,
	sCelebiPose7,
	sCelebiPose8,
	sCelebiPose9,
	sCelebiPose10,
	sCelebiPose11,
	sCelebiPose12,
	sCelebiPose13,
	sCelebiPose14,
	sCelebiPose15,
	sCelebiPose16,
	sCelebiPose17,
	sCelebiPose18,
	sCelebiPose19,
	sCelebiPose20,
	sCelebiPose21,
	sCelebiPose22,
	sCelebiPose23,
	sCelebiPose24,
	sCelebiPose1,
	sCelebiPose22,
	sCelebiPose19,
	sCelebiPose16,
	sCelebiPose13,
	sCelebiPose10,
	sCelebiPose7,
	sCelebiPose4,
	sCelebiPose1,
	sCelebiPose22,
	sCelebiPose19,
	sCelebiPose16,
	sCelebiPose13,
	sCelebiPose10,
	sCelebiPose7,
	sCelebiPose4,
	sCelebiPose1,
	sCelebiPose2,
	sCelebiPose3,
	sCelebiPose4,
	sCelebiPose5,
	sCelebiPose6,
	sCelebiPose7,
	sCelebiPose8,
	sCelebiPose9,
	sCelebiPose10,
	sCelebiPose11,
	sCelebiPose12,
	sCelebiPose13,
	sCelebiPose14,
	sCelebiPose15,
	sCelebiPose16,
	sCelebiPose17,
	sCelebiPose18,
	sCelebiPose19,
	sCelebiPose20,
	sCelebiPose21,
	sCelebiPose22,
	sCelebiPose23,
	sCelebiPose24,
};

static const struct PositionSets sAxPositionsCelebi[] = {
	[0] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[1] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[2] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[3] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[4] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[5] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[6] = { .set = { {4, -11}, {-5, -9}, {-4, -6}, {-2, -11} } },
	[7] = { .set = { {4, -11}, {-5, -10}, {-4, -6}, {-2, -11} } },
	[8] = { .set = { {4, -11}, {-5, -9}, {-4, -6}, {-2, -11} } },
	[9] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[10] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[11] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[12] = { .set = { {-1, -13}, {4, -7}, {-6, -7}, {-1, -11} } },
	[13] = { .set = { {-1, -13}, {5, -8}, {-7, -8}, {-1, -11} } },
	[14] = { .set = { {-1, -13}, {5, -8}, {-7, -8}, {-1, -11} } },
	[15] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[16] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[17] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[18] = { .set = { {-6, -11}, {3, -9}, {2, -6}, {0, -11} } },
	[19] = { .set = { {-6, -11}, {3, -10}, {2, -6}, {0, -11} } },
	[20] = { .set = { {-6, -11}, {3, -9}, {2, -6}, {0, -11} } },
	[21] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[22] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[23] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[24] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[25] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[26] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[27] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[28] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[29] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[30] = { .set = { {4, -11}, {-5, -9}, {-4, -6}, {-2, -11} } },
	[31] = { .set = { {4, -11}, {-5, -10}, {-4, -6}, {-2, -11} } },
	[32] = { .set = { {4, -11}, {-5, -9}, {-4, -6}, {-2, -11} } },
	[33] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[34] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[35] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[36] = { .set = { {-1, -13}, {4, -7}, {-6, -7}, {-1, -11} } },
	[37] = { .set = { {-1, -13}, {5, -8}, {-7, -8}, {-1, -11} } },
	[38] = { .set = { {-1, -13}, {5, -8}, {-7, -8}, {-1, -11} } },
	[39] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[40] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[41] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[42] = { .set = { {-6, -11}, {3, -9}, {2, -6}, {0, -11} } },
	[43] = { .set = { {-6, -11}, {3, -10}, {2, -6}, {0, -11} } },
	[44] = { .set = { {-6, -11}, {3, -9}, {2, -6}, {0, -11} } },
	[45] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[46] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[47] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[48] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[49] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[50] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[51] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[52] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[53] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[54] = { .set = { {4, -11}, {-5, -9}, {-4, -6}, {-2, -11} } },
	[55] = { .set = { {4, -11}, {-5, -10}, {-4, -6}, {-2, -11} } },
	[56] = { .set = { {4, -11}, {-5, -9}, {-4, -6}, {-2, -11} } },
	[57] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[58] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[59] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[60] = { .set = { {-1, -13}, {4, -7}, {-6, -7}, {-1, -11} } },
	[61] = { .set = { {-1, -13}, {5, -8}, {-7, -8}, {-1, -11} } },
	[62] = { .set = { {-1, -13}, {5, -8}, {-7, -8}, {-1, -11} } },
	[63] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[64] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[65] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[66] = { .set = { {-6, -11}, {3, -9}, {2, -6}, {0, -11} } },
	[67] = { .set = { {-6, -11}, {3, -10}, {2, -6}, {0, -11} } },
	[68] = { .set = { {-6, -11}, {3, -9}, {2, -6}, {0, -11} } },
	[69] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[70] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[71] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[72] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[73] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[74] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[75] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[76] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[77] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[78] = { .set = { {4, -11}, {-5, -9}, {-4, -6}, {-2, -11} } },
	[79] = { .set = { {4, -11}, {-5, -10}, {-4, -6}, {-2, -11} } },
	[80] = { .set = { {4, -11}, {-5, -9}, {-4, -6}, {-2, -11} } },
	[81] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[82] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[83] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[84] = { .set = { {-1, -13}, {4, -7}, {-6, -7}, {-1, -11} } },
	[85] = { .set = { {-1, -13}, {5, -8}, {-7, -8}, {-1, -11} } },
	[86] = { .set = { {-1, -13}, {5, -8}, {-7, -8}, {-1, -11} } },
	[87] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[88] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[89] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[90] = { .set = { {-6, -11}, {3, -9}, {2, -6}, {0, -11} } },
	[91] = { .set = { {-6, -11}, {3, -10}, {2, -6}, {0, -11} } },
	[92] = { .set = { {-6, -11}, {3, -9}, {2, -6}, {0, -11} } },
	[93] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[94] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[95] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[96] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[97] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[98] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[99] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[100] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[101] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[102] = { .set = { {4, -11}, {-5, -9}, {-4, -6}, {-2, -11} } },
	[103] = { .set = { {4, -11}, {-5, -10}, {-4, -6}, {-2, -11} } },
	[104] = { .set = { {4, -11}, {-5, -9}, {-4, -6}, {-2, -11} } },
	[105] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[106] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[107] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[108] = { .set = { {-1, -13}, {4, -7}, {-6, -7}, {-1, -11} } },
	[109] = { .set = { {-1, -13}, {5, -8}, {-7, -8}, {-1, -11} } },
	[110] = { .set = { {-1, -13}, {5, -8}, {-7, -8}, {-1, -11} } },
	[111] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[112] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[113] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[114] = { .set = { {-6, -11}, {3, -9}, {2, -6}, {0, -11} } },
	[115] = { .set = { {-6, -11}, {3, -10}, {2, -6}, {0, -11} } },
	[116] = { .set = { {-6, -11}, {3, -9}, {2, -6}, {0, -11} } },
	[117] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[118] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[119] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[120] = { .set = { {-2, -13}, {-3, -11}, {5, -9}, {2, -13} } },
	[121] = { .set = { {-3, -11}, {-4, -10}, {5, -8}, {1, -11} } },
	[122] = { .set = { {-1, -12}, {-8, -14}, {6, -14}, {-1, -13} } },
	[123] = { .set = { {1, -12}, {1, -16}, {-9, -14}, {-4, -12} } },
	[124] = { .set = { {1, -11}, {-5, -16}, {-7, -13}, {-3, -11} } },
	[125] = { .set = { {3, -11}, {-7, -13}, {5, -11}, {-2, -10} } },
	[126] = { .set = { {-1, -11}, {6, -11}, {-8, -11}, {-1, -9} } },
	[127] = { .set = { {-4, -11}, {6, -13}, {-6, -11}, {1, -10} } },
	[128] = { .set = { {-2, -11}, {4, -16}, {6, -13}, {2, -11} } },
	[129] = { .set = { {-2, -12}, {-2, -16}, {8, -14}, {3, -12} } },
	[130] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[131] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[132] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[133] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[134] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[135] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[136] = { .set = { {4, -11}, {-5, -9}, {-4, -6}, {-2, -11} } },
	[137] = { .set = { {4, -11}, {-5, -10}, {-4, -6}, {-2, -11} } },
	[138] = { .set = { {4, -11}, {-5, -9}, {-4, -6}, {-2, -11} } },
	[139] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[140] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[141] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[142] = { .set = { {-1, -13}, {4, -7}, {-6, -7}, {-1, -11} } },
	[143] = { .set = { {-1, -13}, {5, -8}, {-7, -8}, {-1, -11} } },
	[144] = { .set = { {-1, -13}, {5, -8}, {-7, -8}, {-1, -11} } },
	[145] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[146] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[147] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[148] = { .set = { {-6, -11}, {3, -9}, {2, -6}, {0, -11} } },
	[149] = { .set = { {-6, -11}, {3, -10}, {2, -6}, {0, -11} } },
	[150] = { .set = { {-6, -11}, {3, -9}, {2, -6}, {0, -11} } },
	[151] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[152] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[153] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[154] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[155] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[156] = { .set = { {-6, -11}, {3, -10}, {2, -6}, {0, -11} } },
	[157] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[158] = { .set = { {-1, -13}, {5, -8}, {-7, -8}, {-1, -11} } },
	[159] = { .set = { {3, -12}, {-5, -8}, {3, -6}, {-1, -11} } },
	[160] = { .set = { {5, -11}, {-4, -10}, {-3, -6}, {-1, -11} } },
	[161] = { .set = { {4, -11}, {4, -10}, {-5, -7}, {0, -11} } },
	[162] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[163] = { .set = { {4, -11}, {4, -10}, {-5, -7}, {0, -11} } },
	[164] = { .set = { {5, -11}, {-4, -10}, {-3, -6}, {-1, -11} } },
	[165] = { .set = { {3, -12}, {-5, -8}, {3, -6}, {-1, -11} } },
	[166] = { .set = { {-1, -13}, {5, -8}, {-7, -8}, {-1, -11} } },
	[167] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[168] = { .set = { {-6, -11}, {3, -10}, {2, -6}, {0, -11} } },
	[169] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[170] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[171] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[172] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[173] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[174] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[175] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[176] = { .set = { {4, -11}, {-5, -9}, {-4, -6}, {-2, -11} } },
	[177] = { .set = { {4, -11}, {-5, -10}, {-4, -6}, {-2, -11} } },
	[178] = { .set = { {4, -11}, {-5, -9}, {-4, -6}, {-2, -11} } },
	[179] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[180] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[181] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[182] = { .set = { {-1, -13}, {4, -7}, {-6, -7}, {-1, -11} } },
	[183] = { .set = { {-1, -13}, {5, -8}, {-7, -8}, {-1, -11} } },
	[184] = { .set = { {-1, -13}, {5, -8}, {-7, -8}, {-1, -11} } },
	[185] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[186] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[187] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[188] = { .set = { {-6, -11}, {3, -9}, {2, -6}, {0, -11} } },
	[189] = { .set = { {-6, -11}, {3, -10}, {2, -6}, {0, -11} } },
	[190] = { .set = { {-6, -11}, {3, -9}, {2, -6}, {0, -11} } },
	[191] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[192] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[193] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[194] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[195] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[196] = { .set = { {-6, -11}, {3, -9}, {2, -6}, {0, -11} } },
	[197] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[198] = { .set = { {-1, -13}, {4, -7}, {-6, -7}, {-1, -11} } },
	[199] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[200] = { .set = { {4, -11}, {-5, -9}, {-4, -6}, {-2, -11} } },
	[201] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[202] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[203] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[204] = { .set = { {-6, -11}, {3, -9}, {2, -6}, {0, -11} } },
	[205] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[206] = { .set = { {-1, -13}, {4, -7}, {-6, -7}, {-1, -11} } },
	[207] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[208] = { .set = { {4, -11}, {-5, -9}, {-4, -6}, {-2, -11} } },
	[209] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[210] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[211] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[212] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -12} } },
	[213] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[214] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[215] = { .set = { {3, -11}, {3, -10}, {-6, -7}, {-1, -11} } },
	[216] = { .set = { {4, -11}, {-5, -9}, {-4, -6}, {-2, -11} } },
	[217] = { .set = { {4, -11}, {-5, -10}, {-4, -6}, {-2, -11} } },
	[218] = { .set = { {4, -11}, {-5, -9}, {-4, -6}, {-2, -11} } },
	[219] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[220] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[221] = { .set = { {2, -12}, {-6, -8}, {2, -6}, {-2, -11} } },
	[222] = { .set = { {-1, -13}, {4, -7}, {-6, -7}, {-1, -11} } },
	[223] = { .set = { {-1, -13}, {5, -8}, {-7, -8}, {-1, -11} } },
	[224] = { .set = { {-1, -13}, {5, -8}, {-7, -8}, {-1, -11} } },
	[225] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[226] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[227] = { .set = { {-4, -12}, {4, -8}, {-4, -6}, {0, -11} } },
	[228] = { .set = { {-6, -11}, {3, -9}, {2, -6}, {0, -11} } },
	[229] = { .set = { {-6, -11}, {3, -10}, {2, -6}, {0, -11} } },
	[230] = { .set = { {-6, -11}, {3, -9}, {2, -6}, {0, -11} } },
	[231] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[232] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
	[233] = { .set = { {-5, -11}, {-5, -10}, {4, -7}, {-1, -11} } },
};

static const ax_anim *const sCelebiAnimTable1[] = {
	sCelebiAnims_1_1,
	sCelebiAnims_1_2,
	sCelebiAnims_1_3,
	sCelebiAnims_1_4,
	sCelebiAnims_1_5,
	sCelebiAnims_1_6,
	sCelebiAnims_1_7,
	sCelebiAnims_1_8,
};

static const ax_anim *const sCelebiAnimTable2[] = {
	sCelebiAnims_2_1,
	sCelebiAnims_2_2,
	sCelebiAnims_2_3,
	sCelebiAnims_2_4,
	sCelebiAnims_2_5,
	sCelebiAnims_2_6,
	sCelebiAnims_2_7,
	sCelebiAnims_2_8,
};

static const ax_anim *const sCelebiAnimTable3[] = {
	sCelebiAnims_3_1,
	sCelebiAnims_3_2,
	sCelebiAnims_3_3,
	sCelebiAnims_3_4,
	sCelebiAnims_3_5,
	sCelebiAnims_3_6,
	sCelebiAnims_3_7,
	sCelebiAnims_3_8,
};

static const ax_anim *const sCelebiAnimTable4[] = {
	sCelebiAnims_4_1,
	sCelebiAnims_4_2,
	sCelebiAnims_4_3,
	sCelebiAnims_4_4,
	sCelebiAnims_4_5,
	sCelebiAnims_4_6,
	sCelebiAnims_4_7,
	sCelebiAnims_4_8,
};

static const ax_anim *const sCelebiAnimTable5[] = {
	sCelebiAnims_5_1,
	sCelebiAnims_5_2,
	sCelebiAnims_5_3,
	sCelebiAnims_5_4,
	sCelebiAnims_5_5,
	sCelebiAnims_5_6,
	sCelebiAnims_5_7,
	sCelebiAnims_5_8,
};

static const ax_anim *const sCelebiAnimTable6[] = {
	sCelebiAnims_6_1,
	sCelebiAnims_6_1,
	sCelebiAnims_6_1,
	sCelebiAnims_6_1,
	sCelebiAnims_6_1,
	sCelebiAnims_6_1,
	sCelebiAnims_6_1,
	sCelebiAnims_6_1,
};

static const ax_anim *const sCelebiAnimTable7[] = {
	gAxSharedAnim_00330,
	gAxSharedAnim_00340,
	gAxSharedAnim_00348,
	gAxSharedAnim_00356,
	gAxSharedAnim_00368,
	gAxSharedAnim_00376,
	gAxSharedAnim_00383,
	gAxSharedAnim_00390,
};

static const ax_anim *const sCelebiAnimTable8[] = {
	sCelebiAnims_8_1,
	sCelebiAnims_8_2,
	sCelebiAnims_8_3,
	sCelebiAnims_8_4,
	sCelebiAnims_8_5,
	sCelebiAnims_8_6,
	sCelebiAnims_8_7,
	sCelebiAnims_8_8,
};

static const ax_anim *const sCelebiAnimTable9[] = {
	sCelebiAnims_9_1,
	sCelebiAnims_9_2,
	sCelebiAnims_9_3,
	sCelebiAnims_9_4,
	sCelebiAnims_9_5,
	sCelebiAnims_9_6,
	sCelebiAnims_9_7,
	sCelebiAnims_9_8,
};

static const ax_anim *const sCelebiAnimTable10[] = {
	gAxSharedAnim_00705,
	gAxSharedAnim_00714,
	gAxSharedAnim_00725,
	gAxSharedAnim_00737,
	gAxSharedAnim_00750,
	gAxSharedAnim_00760,
	gAxSharedAnim_00772,
	gAxSharedAnim_00781,
};

static const ax_anim *const sCelebiAnimTable11[] = {
	sCelebiAnims_11_1,
	sCelebiAnims_11_2,
	sCelebiAnims_11_3,
	sCelebiAnims_11_4,
	sCelebiAnims_11_5,
	sCelebiAnims_11_6,
	sCelebiAnims_11_7,
	sCelebiAnims_11_8,
};

static const ax_anim *const sCelebiAnimTable12[] = {
	gAxSharedAnim_01147,
	gAxSharedAnim_01230,
	gAxSharedAnim_01208,
	gAxSharedAnim_01194,
	gAxSharedAnim_01193,
	gAxSharedAnim_01181,
	gAxSharedAnim_01161,
	gAxSharedAnim_01148,
};

static const ax_anim *const sCelebiAnimTable13[] = {
	gAxSharedAnim_01242,
	gAxSharedAnim_01323,
	gAxSharedAnim_01314,
	gAxSharedAnim_01301,
	gAxSharedAnim_01286,
	gAxSharedAnim_01278,
	gAxSharedAnim_01267,
	gAxSharedAnim_01253,
};

static const ax_anim *const sCelebiAnimTable14[] = {
	sCelebiAnims_14_1,
	sCelebiAnims_14_1,
	sCelebiAnims_14_1,
	sCelebiAnims_14_1,
	sCelebiAnims_14_1,
	sCelebiAnims_14_1,
	sCelebiAnims_14_1,
	sCelebiAnims_14_1,
};

static const ax_anim *const *const sAxAnimationsCelebi[] = {
	sCelebiAnimTable1,
	sCelebiAnimTable2,
	sCelebiAnimTable3,
	sCelebiAnimTable4,
	sCelebiAnimTable5,
	sCelebiAnimTable6,
	sCelebiAnimTable7,
	sCelebiAnimTable8,
	sCelebiAnimTable9,
	sCelebiAnimTable10,
	sCelebiAnimTable11,
	sCelebiAnimTable12,
	sCelebiAnimTable13,
	sCelebiAnimTable14,
};

static const ax_sprite *const sAxSpritesCelebi[] = {
	sCelebiSprites1,
	sCelebiSprites2,
	sCelebiSprites3,
	sCelebiSprites4,
	sCelebiSprites5,
	sCelebiSprites6,
	sCelebiSprites7,
	sCelebiSprites8,
	sCelebiSprites9,
	sCelebiSprites10,
	sCelebiSprites11,
	sCelebiSprites12,
	sCelebiSprites13,
	sCelebiSprites14,
	sCelebiSprites15,
	sCelebiSprites16,
	sCelebiSprites17,
	sCelebiSprites18,
	sCelebiSprites19,
	sCelebiSprites20,
	sCelebiSprites21,
	sCelebiSprites22,
};

static const axmain sAxMainCelebi = {
	.poses = sAxPosesCelebi,
	.animations = sAxAnimationsCelebi,
	.animCount = ARRAY_COUNT(sAxAnimationsCelebi),
	.spriteData = sAxSpritesCelebi,
	.positions = sAxPositionsCelebi,
};
