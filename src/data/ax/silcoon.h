/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainSilcoon;
const SiroArchive gAxSilcoon = {"SIRO", &sAxMainSilcoon};

static const ax_pose sSilcoonPose1[] = {
	AX_POSE(0, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose3[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose4[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose5[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose6[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose7[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose8[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose34[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose36[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose38[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose40[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose42[] = {
	AX_POSE(12, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose44[] = {
	AX_POSE(13, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose46[] = {
	AX_POSE(14, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose48[] = {
	AX_POSE(15, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose49[] = {
	AX_POSE(16, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose50[] = {
	AX_POSE(17, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose51[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose52[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose53[] = {
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose54[] = {
	AX_POSE(21, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose55[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose56[] = {
	AX_POSE(21, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose57[] = {
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSilcoonPose58[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_anim sSilcoonAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 8, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 8, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 8, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 8, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 8, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 1, .unkFlags = 1, .poseId = 9, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 10, .offset = {1, 22}, .shadow = {1, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 11, .offset = {1, 22}, .shadow = {1, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 12, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 13, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 14, .offset = {1, 22}, .shadow = {1, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 15, .offset = {1, 22}, .shadow = {1, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 8, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 8, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 9, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 9, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 9, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 9, .offset = {19, 22}, .shadow = {19, 22} },
	{ .frames = 1, .unkFlags = 1, .poseId = 10, .offset = {19, 22}, .shadow = {19, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 11, .offset = {20, 21}, .shadow = {20, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 12, .offset = {20, 21}, .shadow = {20, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 13, .offset = {19, 22}, .shadow = {19, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 14, .offset = {19, 22}, .shadow = {19, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 15, .offset = {20, 21}, .shadow = {20, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 8, .offset = {20, 21}, .shadow = {20, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 9, .offset = {19, 22}, .shadow = {19, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 9, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 10, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 10, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 10, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 10, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 10, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 11, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 12, .offset = {19, 1}, .shadow = {19, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 13, .offset = {19, 1}, .shadow = {19, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 14, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 15, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 8, .offset = {19, 1}, .shadow = {19, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 9, .offset = {19, 1}, .shadow = {19, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 10, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 10, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 11, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 11, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 11, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 11, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 11, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 11, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 1, .unkFlags = 1, .poseId = 12, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 13, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 14, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 15, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 8, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 9, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 10, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 11, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 11, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 12, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 12, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 12, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 12, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 1, .unkFlags = 1, .poseId = 13, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 14, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 15, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 8, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 9, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 10, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 11, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 12, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 12, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 13, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 13, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 13, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 13, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 13, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 13, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 1, .unkFlags = 1, .poseId = 14, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 15, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 8, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 9, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 10, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 11, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 12, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 13, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 13, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 14, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 14, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 14, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 14, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 14, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 15, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 8, .offset = {-19, 1}, .shadow = {-19, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 9, .offset = {-19, 1}, .shadow = {-19, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 10, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 11, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 12, .offset = {-19, 1}, .shadow = {-19, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 13, .offset = {-19, 1}, .shadow = {-19, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 14, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 14, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 15, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 15, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 15, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 15, .offset = {-19, 22}, .shadow = {-19, 22} },
	{ .frames = 1, .unkFlags = 1, .poseId = 8, .offset = {-19, 22}, .shadow = {-19, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 9, .offset = {-20, 21}, .shadow = {-20, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 10, .offset = {-20, 21}, .shadow = {-20, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 11, .offset = {-19, 22}, .shadow = {-19, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 12, .offset = {-19, 22}, .shadow = {-19, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 13, .offset = {-20, 21}, .shadow = {-20, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 14, .offset = {-20, 21}, .shadow = {-20, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 15, .offset = {-19, 22}, .shadow = {-19, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 15, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 16, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 16, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 16, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 16, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 16, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 16, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 1, .unkFlags = 1, .poseId = 17, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 18, .offset = {1, 22}, .shadow = {1, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 19, .offset = {1, 22}, .shadow = {1, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 20, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 21, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 22, .offset = {1, 22}, .shadow = {1, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 23, .offset = {1, 22}, .shadow = {1, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 16, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 16, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 17, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 17, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 17, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 17, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 17, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 17, .offset = {19, 22}, .shadow = {19, 22} },
	{ .frames = 1, .unkFlags = 1, .poseId = 18, .offset = {19, 22}, .shadow = {19, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 19, .offset = {20, 21}, .shadow = {20, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 20, .offset = {20, 21}, .shadow = {20, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 21, .offset = {19, 22}, .shadow = {19, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 22, .offset = {19, 22}, .shadow = {19, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 23, .offset = {20, 21}, .shadow = {20, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 16, .offset = {20, 21}, .shadow = {20, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 17, .offset = {19, 22}, .shadow = {19, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 17, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 18, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 18, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 18, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 18, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 18, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 19, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 20, .offset = {19, 1}, .shadow = {19, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 21, .offset = {19, 1}, .shadow = {19, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 22, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 23, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 16, .offset = {19, 1}, .shadow = {19, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 17, .offset = {19, 1}, .shadow = {19, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 18, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 18, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 19, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 19, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 19, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 19, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 19, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 19, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 1, .unkFlags = 1, .poseId = 20, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 21, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 22, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 23, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 16, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 17, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 18, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 19, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 19, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 20, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 20, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 20, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 20, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 20, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 20, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 1, .unkFlags = 1, .poseId = 21, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 22, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 23, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 16, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 17, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 18, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 19, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 20, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 20, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 21, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 21, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 21, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 21, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 21, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 1, .unkFlags = 1, .poseId = 22, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 23, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 16, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 17, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 18, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 19, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 20, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 21, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 21, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 22, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 22, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 22, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 22, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 22, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 22, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 23, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 16, .offset = {-19, 1}, .shadow = {-19, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 17, .offset = {-19, 1}, .shadow = {-19, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 18, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 19, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 20, .offset = {-19, 1}, .shadow = {-19, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 21, .offset = {-19, 1}, .shadow = {-19, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 22, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 22, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 23, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 23, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 23, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 23, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 23, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 23, .offset = {-19, 22}, .shadow = {-19, 22} },
	{ .frames = 1, .unkFlags = 1, .poseId = 16, .offset = {-19, 22}, .shadow = {-19, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 17, .offset = {-20, 21}, .shadow = {-20, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 18, .offset = {-20, 21}, .shadow = {-20, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 19, .offset = {-19, 22}, .shadow = {-19, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 20, .offset = {-19, 22}, .shadow = {-19, 22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 21, .offset = {-20, 21}, .shadow = {-20, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 22, .offset = {-20, 21}, .shadow = {-20, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 23, .offset = {-19, 22}, .shadow = {-19, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 23, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 31, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 31, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 29, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 29, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 25, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 25, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 35, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 35, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 37, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 37, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 43, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 43, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_6_1[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 35, .unkFlags = 0, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_7_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 50, .offset = {0, -3}, .shadow = {0, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_7_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 51, .offset = {-3, -3}, .shadow = {-3, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_7_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 52, .offset = {-3, 0}, .shadow = {-3, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_7_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 53, .offset = {-3, 3}, .shadow = {-3, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_7_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 54, .offset = {0, 3}, .shadow = {0, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_7_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 55, .offset = {3, 3}, .shadow = {3, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_7_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 56, .offset = {3, 0}, .shadow = {3, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_7_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 57, .offset = {3, -3}, .shadow = {3, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_8_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 120, .unkFlags = 0, .poseId = 58, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_8_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {1, -1}, .shadow = {0, 0} },
	{ .frames = 120, .unkFlags = 0, .poseId = 59, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_8_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 120, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_8_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {-1, -1}, .shadow = {0, 0} },
	{ .frames = 120, .unkFlags = 0, .poseId = 61, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_8_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 120, .unkFlags = 0, .poseId = 62, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_8_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {1, -1}, .shadow = {0, 0} },
	{ .frames = 120, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_8_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 120, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_8_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-1, -1}, .shadow = {0, 0} },
	{ .frames = 120, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {6, 4}, .shadow = {6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {8, 12}, .shadow = {8, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {7, 19}, .shadow = {7, 19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 70, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 71, .offset = {-7, 19}, .shadow = {-7, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {-8, 12}, .shadow = {-8, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 73, .offset = {-6, 4}, .shadow = {-6, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {17, 5}, .shadow = {17, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {21, 15}, .shadow = {21, 15} },
	{ .frames = 3, .unkFlags = 0, .poseId = 69, .offset = {21, 23}, .shadow = {21, 23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 70, .offset = {13, 24}, .shadow = {13, 24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {4, 19}, .shadow = {4, 19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 72, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 73, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {16, -5}, .shadow = {16, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 68, .offset = {21, 0}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 69, .offset = {19, 6}, .shadow = {19, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {12, 7}, .shadow = {12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 72, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {12, -22}, .shadow = {12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 67, .offset = {20, -22}, .shadow = {20, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 68, .offset = {22, -15}, .shadow = {22, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {-7, -18}, .shadow = {-7, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 66, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 67, .offset = {7, -18}, .shadow = {7, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {9, -12}, .shadow = {9, -12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-12, -22}, .shadow = {-12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 73, .offset = {-20, -22}, .shadow = {-20, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 72, .offset = {-22, -15}, .shadow = {-22, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {-16, -5}, .shadow = {-16, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 72, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 71, .offset = {-19, 6}, .shadow = {-19, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-12, 7}, .shadow = {-12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {-17, 5}, .shadow = {-17, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {-21, 15}, .shadow = {-21, 15} },
	{ .frames = 3, .unkFlags = 0, .poseId = 71, .offset = {-21, 23}, .shadow = {-21, 23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 70, .offset = {-13, 24}, .shadow = {-13, 24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-4, 19}, .shadow = {-4, 19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_10_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 74, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 74, .offset = {13, 0}, .shadow = {13, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 74, .offset = {-13, 0}, .shadow = {-13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 74, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_10_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-6, 6}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {12, -12}, .shadow = {12, -12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 75, .offset = {-12, 12}, .shadow = {-12, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 75, .offset = {13, -13}, .shadow = {13, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 75, .offset = {-13, 13}, .shadow = {-13, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {12, -12}, .shadow = {12, -12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 75, .offset = {-12, 12}, .shadow = {-12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-6, 6}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_10_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 76, .offset = {0, 12}, .shadow = {0, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 76, .offset = {0, -13}, .shadow = {0, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 76, .offset = {0, 13}, .shadow = {0, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 76, .offset = {0, 12}, .shadow = {0, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_10_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-12, -12}, .shadow = {-12, -12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 77, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 77, .offset = {-13, -13}, .shadow = {-13, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 77, .offset = {13, 13}, .shadow = {13, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-12, -12}, .shadow = {-12, -12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 77, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_10_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 78, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 78, .offset = {13, 0}, .shadow = {13, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 78, .offset = {-13, 0}, .shadow = {-13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 78, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_10_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-6, 6}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {12, -12}, .shadow = {12, -12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 79, .offset = {-12, 12}, .shadow = {-12, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 79, .offset = {13, -13}, .shadow = {13, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 79, .offset = {-13, 13}, .shadow = {-13, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {12, -12}, .shadow = {12, -12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 79, .offset = {-12, 12}, .shadow = {-12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-6, 6}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_10_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 80, .offset = {0, 12}, .shadow = {0, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 80, .offset = {0, -13}, .shadow = {0, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 80, .offset = {0, 13}, .shadow = {0, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 80, .offset = {0, 12}, .shadow = {0, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_10_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-12, -12}, .shadow = {-12, -12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 81, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 81, .offset = {-13, -13}, .shadow = {-13, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 81, .offset = {13, 13}, .shadow = {13, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-12, -12}, .shadow = {-12, -12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 81, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 83, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 83, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 83, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 82, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 82, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 82, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 82, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 85, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 85, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 85, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 84, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 84, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 84, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 84, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 87, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 87, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 87, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 86, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 86, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 86, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 86, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 89, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 89, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 88, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 88, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 88, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 88, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 91, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 91, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 90, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 90, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 93, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 92, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 92, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 92, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 95, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 95, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 94, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 94, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 97, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 97, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 96, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 96, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 96, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_12_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_12_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_12_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_12_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_12_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_12_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_12_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSilcoonAnims_12_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sSilcoonGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_1.4bpp.lz");
static const ax_sprite sSilcoonSprites1[] = {
	{sSilcoonGfx1, ARRAY_COUNT(sSilcoonGfx1)}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_2.4bpp.lz");
static const ax_sprite sSilcoonSprites2[] = {
	{sSilcoonGfx2, ARRAY_COUNT(sSilcoonGfx2)}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_3.4bpp.lz");
static const ax_sprite sSilcoonSprites3[] = {
	{sSilcoonGfx3, ARRAY_COUNT(sSilcoonGfx3)}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_4.4bpp.lz");
static const ax_sprite sSilcoonSprites4[] = {
	{sSilcoonGfx4, ARRAY_COUNT(sSilcoonGfx4)}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_5.4bpp.lz");
static const ax_sprite sSilcoonSprites5[] = {
	{sSilcoonGfx5, ARRAY_COUNT(sSilcoonGfx5)}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_6.4bpp.lz");
static const ax_sprite sSilcoonSprites6[] = {
	{sSilcoonGfx6, ARRAY_COUNT(sSilcoonGfx6)}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_7.4bpp.lz");
static const ax_sprite sSilcoonSprites7[] = {
	{sSilcoonGfx7, ARRAY_COUNT(sSilcoonGfx7)}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_8.4bpp.lz");
static const ax_sprite sSilcoonSprites8[] = {
	{sSilcoonGfx8, ARRAY_COUNT(sSilcoonGfx8)}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_9.4bpp.lz");
static const u8 sSilcoonGfx9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_9_1.4bpp.lz");
static const ax_sprite sSilcoonSprites9[] = {
	{sSilcoonGfx9, ARRAY_COUNT(sSilcoonGfx9)}, 
	{NULL, 64}, 
	{sSilcoonGfx9_1, ARRAY_COUNT(sSilcoonGfx9_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_10.4bpp.lz");
static const u8 sSilcoonGfx10_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_10_1.4bpp.lz");
static const u8 sSilcoonGfx10_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_10_2.4bpp.lz");
static const u8 sSilcoonGfx10_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_10_3.4bpp.lz");
static const ax_sprite sSilcoonSprites10[] = {
	{sSilcoonGfx10, ARRAY_COUNT(sSilcoonGfx10)}, 
	{NULL, 32}, 
	{sSilcoonGfx10_1, ARRAY_COUNT(sSilcoonGfx10_1)}, 
	{NULL, 32}, 
	{sSilcoonGfx10_2, ARRAY_COUNT(sSilcoonGfx10_2)}, 
	{NULL, 32}, 
	{sSilcoonGfx10_3, ARRAY_COUNT(sSilcoonGfx10_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_11.4bpp.lz");
static const ax_sprite sSilcoonSprites11[] = {
	{sSilcoonGfx11, ARRAY_COUNT(sSilcoonGfx11)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_12.4bpp.lz");
static const u8 sSilcoonGfx12_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_12_1.4bpp.lz");
static const u8 sSilcoonGfx12_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_12_2.4bpp.lz");
static const u8 sSilcoonGfx12_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_12_3.4bpp.lz");
static const ax_sprite sSilcoonSprites12[] = {
	{sSilcoonGfx12, ARRAY_COUNT(sSilcoonGfx12)}, 
	{NULL, 32}, 
	{sSilcoonGfx12_1, ARRAY_COUNT(sSilcoonGfx12_1)}, 
	{NULL, 32}, 
	{sSilcoonGfx12_2, ARRAY_COUNT(sSilcoonGfx12_2)}, 
	{NULL, 32}, 
	{sSilcoonGfx12_3, ARRAY_COUNT(sSilcoonGfx12_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_13.4bpp.lz");
static const u8 sSilcoonGfx13_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_13_1.4bpp.lz");
static const ax_sprite sSilcoonSprites13[] = {
	{sSilcoonGfx13, ARRAY_COUNT(sSilcoonGfx13)}, 
	{NULL, 32}, 
	{sSilcoonGfx13_1, ARRAY_COUNT(sSilcoonGfx13_1)}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_14.4bpp.lz");
static const u8 sSilcoonGfx14_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_14_1.4bpp.lz");
static const u8 sSilcoonGfx14_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_14_2.4bpp.lz");
static const u8 sSilcoonGfx14_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_14_3.4bpp.lz");
static const ax_sprite sSilcoonSprites14[] = {
	{sSilcoonGfx14, ARRAY_COUNT(sSilcoonGfx14)}, 
	{NULL, 32}, 
	{sSilcoonGfx14_1, ARRAY_COUNT(sSilcoonGfx14_1)}, 
	{NULL, 32}, 
	{sSilcoonGfx14_2, ARRAY_COUNT(sSilcoonGfx14_2)}, 
	{NULL, 32}, 
	{sSilcoonGfx14_3, ARRAY_COUNT(sSilcoonGfx14_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_15.4bpp.lz");
static const u8 sSilcoonGfx15_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_15_1.4bpp.lz");
static const ax_sprite sSilcoonSprites15[] = {
	{sSilcoonGfx15, ARRAY_COUNT(sSilcoonGfx15)}, 
	{NULL, 32}, 
	{sSilcoonGfx15_1, ARRAY_COUNT(sSilcoonGfx15_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_16.4bpp.lz");
static const u8 sSilcoonGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_16_1.4bpp.lz");
static const u8 sSilcoonGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_16_2.4bpp.lz");
static const ax_sprite sSilcoonSprites16[] = {
	{sSilcoonGfx16, ARRAY_COUNT(sSilcoonGfx16)}, 
	{NULL, 32}, 
	{sSilcoonGfx16_1, ARRAY_COUNT(sSilcoonGfx16_1)}, 
	{NULL, 64}, 
	{sSilcoonGfx16_2, ARRAY_COUNT(sSilcoonGfx16_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_17.4bpp.lz");
static const ax_sprite sSilcoonSprites17[] = {
	{sSilcoonGfx17, ARRAY_COUNT(sSilcoonGfx17)}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_18.4bpp.lz");
static const ax_sprite sSilcoonSprites18[] = {
	{sSilcoonGfx18, ARRAY_COUNT(sSilcoonGfx18)}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_19.4bpp.lz");
static const ax_sprite sSilcoonSprites19[] = {
	{sSilcoonGfx19, ARRAY_COUNT(sSilcoonGfx19)}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_20.4bpp.lz");
static const ax_sprite sSilcoonSprites20[] = {
	{sSilcoonGfx20, ARRAY_COUNT(sSilcoonGfx20)}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_21.4bpp.lz");
static const ax_sprite sSilcoonSprites21[] = {
	{sSilcoonGfx21, ARRAY_COUNT(sSilcoonGfx21)}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_22.4bpp.lz");
static const ax_sprite sSilcoonSprites22[] = {
	{sSilcoonGfx22, ARRAY_COUNT(sSilcoonGfx22)}, 
	{NULL, 0}
};
static const u8 sSilcoonGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/silcoon/sprite_23.4bpp.lz");
static const ax_sprite sSilcoonSprites23[] = {
	{sSilcoonGfx23, ARRAY_COUNT(sSilcoonGfx23)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesSilcoon[] = {
	sSilcoonPose1,
	sSilcoonPose2,
	sSilcoonPose3,
	sSilcoonPose4,
	sSilcoonPose5,
	sSilcoonPose6,
	sSilcoonPose7,
	sSilcoonPose8,
	sSilcoonPose1,
	sSilcoonPose2,
	sSilcoonPose3,
	sSilcoonPose4,
	sSilcoonPose5,
	sSilcoonPose6,
	sSilcoonPose7,
	sSilcoonPose8,
	sSilcoonPose1,
	sSilcoonPose2,
	sSilcoonPose3,
	sSilcoonPose4,
	sSilcoonPose5,
	sSilcoonPose6,
	sSilcoonPose7,
	sSilcoonPose8,
	sSilcoonPose1,
	sSilcoonPose8,
	sSilcoonPose7,
	sSilcoonPose6,
	sSilcoonPose5,
	sSilcoonPose4,
	sSilcoonPose3,
	sSilcoonPose2,
	sSilcoonPose1,
	sSilcoonPose34,
	sSilcoonPose2,
	sSilcoonPose36,
	sSilcoonPose3,
	sSilcoonPose38,
	sSilcoonPose4,
	sSilcoonPose40,
	sSilcoonPose5,
	sSilcoonPose42,
	sSilcoonPose6,
	sSilcoonPose44,
	sSilcoonPose7,
	sSilcoonPose46,
	sSilcoonPose8,
	sSilcoonPose48,
	sSilcoonPose49,
	sSilcoonPose50,
	sSilcoonPose51,
	sSilcoonPose52,
	sSilcoonPose53,
	sSilcoonPose54,
	sSilcoonPose55,
	sSilcoonPose56,
	sSilcoonPose57,
	sSilcoonPose58,
	sSilcoonPose1,
	sSilcoonPose2,
	sSilcoonPose3,
	sSilcoonPose4,
	sSilcoonPose5,
	sSilcoonPose6,
	sSilcoonPose7,
	sSilcoonPose8,
	sSilcoonPose34,
	sSilcoonPose48,
	sSilcoonPose46,
	sSilcoonPose44,
	sSilcoonPose42,
	sSilcoonPose40,
	sSilcoonPose38,
	sSilcoonPose36,
	sSilcoonPose34,
	sSilcoonPose36,
	sSilcoonPose38,
	sSilcoonPose40,
	sSilcoonPose42,
	sSilcoonPose44,
	sSilcoonPose46,
	sSilcoonPose48,
	sSilcoonPose1,
	sSilcoonPose34,
	sSilcoonPose2,
	sSilcoonPose36,
	sSilcoonPose3,
	sSilcoonPose38,
	sSilcoonPose4,
	sSilcoonPose40,
	sSilcoonPose5,
	sSilcoonPose42,
	sSilcoonPose6,
	sSilcoonPose44,
	sSilcoonPose7,
	sSilcoonPose46,
	sSilcoonPose8,
	sSilcoonPose48,
	sSilcoonPose1,
	sSilcoonPose8,
	sSilcoonPose7,
	sSilcoonPose6,
	sSilcoonPose5,
	sSilcoonPose4,
	sSilcoonPose3,
	sSilcoonPose2,
	sSilcoonPose1,
	sSilcoonPose8,
	sSilcoonPose7,
	sSilcoonPose6,
	sSilcoonPose5,
	sSilcoonPose4,
	sSilcoonPose3,
	sSilcoonPose2,
};

static const struct PositionSets sAxPositionsSilcoon[] = {
	[0] = { .set = { {-1, -4}, {-9, -7}, {8, -7}, {-1, -9} } },
	[1] = { .set = { {3, -4}, {-6, -5}, {5, -10}, {0, -10} } },
	[2] = { .set = { {4, -4}, {-1, -5}, {-1, -12}, {-1, -9} } },
	[3] = { .set = { {1, -9}, {5, -6}, {-5, -10}, {-1, -9} } },
	[4] = { .set = { {-1, -10}, {7, -7}, {-8, -7}, {-1, -9} } },
	[5] = { .set = { {-4, -7}, {2, -10}, {-6, -5}, {-1, -9} } },
	[6] = { .set = { {-5, -4}, {0, -12}, {-1, -4}, {-1, -9} } },
	[7] = { .set = { {-4, -4}, {-5, -10}, {6, -6}, {-1, -10} } },
	[8] = { .set = { {-1, -4}, {-9, -7}, {8, -7}, {-1, -9} } },
	[9] = { .set = { {3, -4}, {-6, -5}, {5, -10}, {0, -10} } },
	[10] = { .set = { {4, -4}, {-1, -5}, {-1, -12}, {-1, -9} } },
	[11] = { .set = { {1, -9}, {5, -6}, {-5, -10}, {-1, -9} } },
	[12] = { .set = { {-1, -10}, {7, -7}, {-8, -7}, {-1, -9} } },
	[13] = { .set = { {-4, -7}, {2, -10}, {-6, -5}, {-1, -9} } },
	[14] = { .set = { {-5, -4}, {0, -12}, {-1, -4}, {-1, -9} } },
	[15] = { .set = { {-4, -4}, {-5, -10}, {6, -6}, {-1, -10} } },
	[16] = { .set = { {-1, -4}, {-9, -7}, {8, -7}, {-1, -9} } },
	[17] = { .set = { {3, -4}, {-6, -5}, {5, -10}, {0, -10} } },
	[18] = { .set = { {4, -4}, {-1, -5}, {-1, -12}, {-1, -9} } },
	[19] = { .set = { {1, -9}, {5, -6}, {-5, -10}, {-1, -9} } },
	[20] = { .set = { {-1, -10}, {7, -7}, {-8, -7}, {-1, -9} } },
	[21] = { .set = { {-4, -7}, {2, -10}, {-6, -5}, {-1, -9} } },
	[22] = { .set = { {-5, -4}, {0, -12}, {-1, -4}, {-1, -9} } },
	[23] = { .set = { {-4, -4}, {-5, -10}, {6, -6}, {-1, -10} } },
	[24] = { .set = { {-1, -4}, {-9, -7}, {8, -7}, {-1, -9} } },
	[25] = { .set = { {-4, -4}, {-5, -10}, {6, -6}, {-1, -10} } },
	[26] = { .set = { {-5, -4}, {0, -12}, {-1, -4}, {-1, -9} } },
	[27] = { .set = { {-4, -7}, {2, -10}, {-6, -5}, {-1, -9} } },
	[28] = { .set = { {-1, -10}, {7, -7}, {-8, -7}, {-1, -9} } },
	[29] = { .set = { {1, -9}, {5, -6}, {-5, -10}, {-1, -9} } },
	[30] = { .set = { {4, -4}, {-1, -5}, {-1, -12}, {-1, -9} } },
	[31] = { .set = { {3, -4}, {-6, -5}, {5, -10}, {0, -10} } },
	[32] = { .set = { {-1, -4}, {-9, -7}, {8, -7}, {-1, -9} } },
	[33] = { .set = { {-1, -4}, {-9, -7}, {8, -7}, {-1, -9} } },
	[34] = { .set = { {3, -4}, {-6, -5}, {5, -10}, {0, -10} } },
	[35] = { .set = { {3, -4}, {-6, -5}, {5, -8}, {-1, -10} } },
	[36] = { .set = { {4, -4}, {-1, -5}, {-1, -12}, {-1, -9} } },
	[37] = { .set = { {4, -4}, {-1, -4}, {-1, -12}, {-1, -9} } },
	[38] = { .set = { {1, -9}, {5, -6}, {-5, -10}, {-1, -9} } },
	[39] = { .set = { {3, -8}, {6, -6}, {-3, -12}, {-1, -9} } },
	[40] = { .set = { {-1, -10}, {7, -7}, {-8, -7}, {-1, -9} } },
	[41] = { .set = { {-1, -8}, {6, -8}, {-8, -7}, {-1, -9} } },
	[42] = { .set = { {-4, -7}, {2, -10}, {-6, -5}, {-1, -9} } },
	[43] = { .set = { {-4, -7}, {4, -11}, {-6, -6}, {0, -9} } },
	[44] = { .set = { {-5, -4}, {0, -12}, {-1, -4}, {-1, -9} } },
	[45] = { .set = { {-5, -4}, {0, -12}, {0, -4}, {0, -9} } },
	[46] = { .set = { {-4, -4}, {-5, -10}, {6, -6}, {-1, -10} } },
	[47] = { .set = { {-4, -4}, {-6, -8}, {5, -5}, {-1, -10} } },
	[48] = { .set = { {3, -3}, {5, -1}, {-2, -6}, {-1, -5} } },
	[49] = { .set = { {2, -4}, {5, -1}, {-2, -6}, {0, -4} } },
	[50] = { .set = { {-1, 0}, {-8, -3}, {7, -3}, {-1, -5} } },
	[51] = { .set = { {3, 0}, {4, -5}, {-7, -3}, {-1, -6} } },
	[52] = { .set = { {3, 0}, {-1, -7}, {-1, 0}, {-1, -5} } },
	[53] = { .set = { {1, -3}, {-5, -7}, {4, -2}, {-2, -6} } },
	[54] = { .set = { {0, -4}, {6, -4}, {-7, -3}, {0, -5} } },
	[55] = { .set = { {-2, -3}, {4, -7}, {-5, -2}, {1, -6} } },
	[56] = { .set = { {-4, 0}, {0, -7}, {0, 0}, {0, -5} } },
	[57] = { .set = { {-4, 0}, {-5, -5}, {6, -3}, {0, -6} } },
	[58] = { .set = { {-1, -4}, {-9, -7}, {8, -7}, {-1, -9} } },
	[59] = { .set = { {3, -4}, {-6, -5}, {5, -10}, {0, -10} } },
	[60] = { .set = { {4, -4}, {-1, -5}, {-1, -12}, {-1, -9} } },
	[61] = { .set = { {1, -9}, {5, -6}, {-5, -10}, {-1, -9} } },
	[62] = { .set = { {-1, -10}, {7, -7}, {-8, -7}, {-1, -9} } },
	[63] = { .set = { {-4, -7}, {2, -10}, {-6, -5}, {-1, -9} } },
	[64] = { .set = { {-5, -4}, {0, -12}, {-1, -4}, {-1, -9} } },
	[65] = { .set = { {-4, -4}, {-5, -10}, {6, -6}, {-1, -10} } },
	[66] = { .set = { {-1, -4}, {-9, -7}, {8, -7}, {-1, -9} } },
	[67] = { .set = { {-4, -4}, {-6, -8}, {5, -5}, {-1, -10} } },
	[68] = { .set = { {-5, -4}, {0, -12}, {0, -4}, {0, -9} } },
	[69] = { .set = { {-4, -7}, {4, -11}, {-6, -6}, {0, -9} } },
	[70] = { .set = { {-1, -8}, {6, -8}, {-8, -7}, {-1, -9} } },
	[71] = { .set = { {3, -8}, {6, -6}, {-3, -12}, {-1, -9} } },
	[72] = { .set = { {4, -4}, {-1, -4}, {-1, -12}, {-1, -9} } },
	[73] = { .set = { {3, -4}, {-6, -5}, {5, -8}, {-1, -10} } },
	[74] = { .set = { {-1, -4}, {-9, -7}, {8, -7}, {-1, -9} } },
	[75] = { .set = { {3, -4}, {-6, -5}, {5, -8}, {-1, -10} } },
	[76] = { .set = { {4, -4}, {-1, -4}, {-1, -12}, {-1, -9} } },
	[77] = { .set = { {3, -8}, {6, -6}, {-3, -12}, {-1, -9} } },
	[78] = { .set = { {-1, -8}, {6, -8}, {-8, -7}, {-1, -9} } },
	[79] = { .set = { {-4, -7}, {4, -11}, {-6, -6}, {0, -9} } },
	[80] = { .set = { {-5, -4}, {0, -12}, {0, -4}, {0, -9} } },
	[81] = { .set = { {-4, -4}, {-6, -8}, {5, -5}, {-1, -10} } },
	[82] = { .set = { {-1, -4}, {-9, -7}, {8, -7}, {-1, -9} } },
	[83] = { .set = { {-1, -4}, {-9, -7}, {8, -7}, {-1, -9} } },
	[84] = { .set = { {3, -4}, {-6, -5}, {5, -10}, {0, -10} } },
	[85] = { .set = { {3, -4}, {-6, -5}, {5, -8}, {-1, -10} } },
	[86] = { .set = { {4, -4}, {-1, -5}, {-1, -12}, {-1, -9} } },
	[87] = { .set = { {4, -4}, {-1, -4}, {-1, -12}, {-1, -9} } },
	[88] = { .set = { {1, -9}, {5, -6}, {-5, -10}, {-1, -9} } },
	[89] = { .set = { {3, -8}, {6, -6}, {-3, -12}, {-1, -9} } },
	[90] = { .set = { {-1, -10}, {7, -7}, {-8, -7}, {-1, -9} } },
	[91] = { .set = { {-1, -8}, {6, -8}, {-8, -7}, {-1, -9} } },
	[92] = { .set = { {-4, -7}, {2, -10}, {-6, -5}, {-1, -9} } },
	[93] = { .set = { {-4, -7}, {4, -11}, {-6, -6}, {0, -9} } },
	[94] = { .set = { {-5, -4}, {0, -12}, {-1, -4}, {-1, -9} } },
	[95] = { .set = { {-5, -4}, {0, -12}, {0, -4}, {0, -9} } },
	[96] = { .set = { {-4, -4}, {-5, -10}, {6, -6}, {-1, -10} } },
	[97] = { .set = { {-4, -4}, {-6, -8}, {5, -5}, {-1, -10} } },
	[98] = { .set = { {-1, -4}, {-9, -7}, {8, -7}, {-1, -9} } },
	[99] = { .set = { {-4, -4}, {-5, -10}, {6, -6}, {-1, -10} } },
	[100] = { .set = { {-5, -4}, {0, -12}, {-1, -4}, {-1, -9} } },
	[101] = { .set = { {-4, -7}, {2, -10}, {-6, -5}, {-1, -9} } },
	[102] = { .set = { {-1, -10}, {7, -7}, {-8, -7}, {-1, -9} } },
	[103] = { .set = { {1, -9}, {5, -6}, {-5, -10}, {-1, -9} } },
	[104] = { .set = { {4, -4}, {-1, -5}, {-1, -12}, {-1, -9} } },
	[105] = { .set = { {3, -4}, {-6, -5}, {5, -10}, {0, -10} } },
	[106] = { .set = { {-1, -4}, {-9, -7}, {8, -7}, {-1, -9} } },
	[107] = { .set = { {-4, -4}, {-5, -10}, {6, -6}, {-1, -10} } },
	[108] = { .set = { {-5, -4}, {0, -12}, {-1, -4}, {-1, -9} } },
	[109] = { .set = { {-4, -7}, {2, -10}, {-6, -5}, {-1, -9} } },
	[110] = { .set = { {-1, -10}, {7, -7}, {-8, -7}, {-1, -9} } },
	[111] = { .set = { {1, -9}, {5, -6}, {-5, -10}, {-1, -9} } },
	[112] = { .set = { {4, -4}, {-1, -5}, {-1, -12}, {-1, -9} } },
	[113] = { .set = { {3, -4}, {-6, -5}, {5, -10}, {0, -10} } },
};

static const ax_anim *const sSilcoonAnimTable1[] = {
	gAxSharedAnim_00148,
	gAxSharedAnim_00149,
	gAxSharedAnim_01205,
	gAxSharedAnim_01815,
	gAxSharedAnim_01910,
	gAxSharedAnim_01980,
	gAxSharedAnim_02020,
	gAxSharedAnim_02075,
};

static const ax_anim *const sSilcoonAnimTable2[] = {
	sSilcoonAnims_2_1,
	sSilcoonAnims_2_2,
	sSilcoonAnims_2_3,
	sSilcoonAnims_2_4,
	sSilcoonAnims_2_5,
	sSilcoonAnims_2_6,
	sSilcoonAnims_2_7,
	sSilcoonAnims_2_8,
};

static const ax_anim *const sSilcoonAnimTable3[] = {
	sSilcoonAnims_3_1,
	sSilcoonAnims_3_2,
	sSilcoonAnims_3_3,
	sSilcoonAnims_3_4,
	sSilcoonAnims_3_5,
	sSilcoonAnims_3_6,
	sSilcoonAnims_3_7,
	sSilcoonAnims_3_8,
};

static const ax_anim *const sSilcoonAnimTable4[] = {
	gAxSharedAnim_01573,
	sSilcoonAnims_4_2,
	gAxSharedAnim_01821,
	sSilcoonAnims_4_4,
	gAxSharedAnim_01763,
	sSilcoonAnims_4_6,
	gAxSharedAnim_01684,
	sSilcoonAnims_4_8,
};

static const ax_anim *const sSilcoonAnimTable5[] = {
	sSilcoonAnims_5_1,
	sSilcoonAnims_5_2,
	sSilcoonAnims_5_3,
	sSilcoonAnims_5_4,
	gAxSharedAnim_01912,
	sSilcoonAnims_5_6,
	gAxSharedAnim_01939,
	sSilcoonAnims_5_8,
};

static const ax_anim *const sSilcoonAnimTable6[] = {
	sSilcoonAnims_6_1,
	sSilcoonAnims_6_1,
	sSilcoonAnims_6_1,
	sSilcoonAnims_6_1,
	sSilcoonAnims_6_1,
	sSilcoonAnims_6_1,
	sSilcoonAnims_6_1,
	sSilcoonAnims_6_1,
};

static const ax_anim *const sSilcoonAnimTable7[] = {
	sSilcoonAnims_7_1,
	sSilcoonAnims_7_2,
	sSilcoonAnims_7_3,
	sSilcoonAnims_7_4,
	sSilcoonAnims_7_5,
	sSilcoonAnims_7_6,
	sSilcoonAnims_7_7,
	sSilcoonAnims_7_8,
};

static const ax_anim *const sSilcoonAnimTable8[] = {
	sSilcoonAnims_8_1,
	sSilcoonAnims_8_2,
	sSilcoonAnims_8_3,
	sSilcoonAnims_8_4,
	sSilcoonAnims_8_5,
	sSilcoonAnims_8_6,
	sSilcoonAnims_8_7,
	sSilcoonAnims_8_8,
};

static const ax_anim *const sSilcoonAnimTable9[] = {
	sSilcoonAnims_9_1,
	sSilcoonAnims_9_2,
	sSilcoonAnims_9_3,
	sSilcoonAnims_9_4,
	sSilcoonAnims_9_5,
	sSilcoonAnims_9_6,
	sSilcoonAnims_9_7,
	sSilcoonAnims_9_8,
};

static const ax_anim *const sSilcoonAnimTable10[] = {
	sSilcoonAnims_10_1,
	sSilcoonAnims_10_2,
	sSilcoonAnims_10_3,
	sSilcoonAnims_10_4,
	sSilcoonAnims_10_5,
	sSilcoonAnims_10_6,
	sSilcoonAnims_10_7,
	sSilcoonAnims_10_8,
};

static const ax_anim *const sSilcoonAnimTable11[] = {
	sSilcoonAnims_11_1,
	sSilcoonAnims_11_2,
	sSilcoonAnims_11_3,
	sSilcoonAnims_11_4,
	sSilcoonAnims_11_5,
	sSilcoonAnims_11_6,
	sSilcoonAnims_11_7,
	sSilcoonAnims_11_8,
};

static const ax_anim *const sSilcoonAnimTable12[] = {
	sSilcoonAnims_12_1,
	sSilcoonAnims_12_2,
	sSilcoonAnims_12_3,
	sSilcoonAnims_12_4,
	sSilcoonAnims_12_5,
	sSilcoonAnims_12_6,
	sSilcoonAnims_12_7,
	sSilcoonAnims_12_8,
};

static const ax_anim *const sSilcoonAnimTable13[] = {
	gAxSharedAnim_00196,
	gAxSharedAnim_00257,
	gAxSharedAnim_00248,
	gAxSharedAnim_00242,
	gAxSharedAnim_00231,
	gAxSharedAnim_00222,
	gAxSharedAnim_00215,
	gAxSharedAnim_00204,
};

static const ax_anim *const *const sAxAnimationsSilcoon[] = {
	sSilcoonAnimTable1,
	sSilcoonAnimTable2,
	sSilcoonAnimTable3,
	sSilcoonAnimTable4,
	sSilcoonAnimTable5,
	sSilcoonAnimTable6,
	sSilcoonAnimTable7,
	sSilcoonAnimTable8,
	sSilcoonAnimTable9,
	sSilcoonAnimTable10,
	sSilcoonAnimTable11,
	sSilcoonAnimTable12,
	sSilcoonAnimTable13,
};

static const ax_sprite *const sAxSpritesSilcoon[] = {
	sSilcoonSprites1,
	sSilcoonSprites2,
	sSilcoonSprites3,
	sSilcoonSprites4,
	sSilcoonSprites5,
	sSilcoonSprites6,
	sSilcoonSprites7,
	sSilcoonSprites8,
	sSilcoonSprites9,
	sSilcoonSprites10,
	sSilcoonSprites11,
	sSilcoonSprites12,
	sSilcoonSprites13,
	sSilcoonSprites14,
	sSilcoonSprites15,
	sSilcoonSprites16,
	sSilcoonSprites17,
	sSilcoonSprites18,
	sSilcoonSprites19,
	sSilcoonSprites20,
	sSilcoonSprites21,
	sSilcoonSprites22,
	sSilcoonSprites23,
};

static const axmain sAxMainSilcoon = {
	.poses = sAxPosesSilcoon,
	.animations = sAxAnimationsSilcoon,
	.animCount = ARRAY_COUNT(sAxAnimationsSilcoon),
	.spriteData = sAxSpritesSilcoon,
	.positions = sAxPositionsSilcoon,
};
