/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainFlareon;
const SiroArchive gAxFlareon = {"SIRO", &sAxMainFlareon};

static const ax_pose sFlareonPose1[] = {
	AX_POSE(0, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose2[] = {
	AX_POSE(1, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose3[] = {
	AX_POSE(2, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose4[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose5[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose6[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose7[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose8[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose9[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose10[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose11[] = {
	AX_POSE(10, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose12[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose13[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose14[] = {
	AX_POSE(13, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose15[] = {
	AX_POSE(14, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose16[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose17[] = {
	AX_POSE(10, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose18[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose19[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose20[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose21[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose22[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose23[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose24[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose73[] = {
	AX_POSE(2, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose74[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose75[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose76[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose77[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose78[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose79[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose80[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose82[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose83[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose84[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose85[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose86[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose87[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose88[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose90[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose91[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose93[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose94[] = {
	AX_POSE(23, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose96[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose97[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose99[] = {
	AX_POSE(26, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose100[] = {
	AX_POSE(27, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose102[] = {
	AX_POSE(28, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose103[] = {
	AX_POSE(29, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose105[] = {
	AX_POSE(26, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose106[] = {
	AX_POSE(27, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose108[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose109[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose111[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose112[] = {
	AX_POSE(23, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose113[] = {
	AX_POSE(30, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose114[] = {
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose115[] = {
	AX_POSE(32, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose116[] = {
	AX_POSE(33, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose117[] = {
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose118[] = {
	AX_POSE(35, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose119[] = {
	AX_POSE(36, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose120[] = {
	AX_POSE(35, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose121[] = {
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose122[] = {
	AX_POSE(33, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlareonPose187[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_anim sFlareonAnims_4_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 72, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 73, .offset = {-1, 2}, .shadow = {-1, 2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 73, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 73, .offset = {-1, 2}, .shadow = {-1, 2} },
	{ .frames = 3, .unkFlags = 1, .poseId = 73, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 73, .offset = {-1, 2}, .shadow = {-1, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_4_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 74, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 74, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 75, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 75, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 75, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 3, .unkFlags = 1, .poseId = 75, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 75, .offset = {2, 2}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_4_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 76, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 77, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 77, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 77, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_4_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 78, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 78, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 79, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 79, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 79, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 3, .unkFlags = 1, .poseId = 79, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 79, .offset = {2, -2}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_4_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 80, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 80, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 81, .offset = {-1, -2}, .shadow = {-1, -2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 81, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 81, .offset = {-1, -2}, .shadow = {-1, -2} },
	{ .frames = 3, .unkFlags = 1, .poseId = 81, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 81, .offset = {-1, -2}, .shadow = {-1, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_4_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 82, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 82, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 83, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 83, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 83, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 3, .unkFlags = 1, .poseId = 83, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 83, .offset = {-2, -2}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_4_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 84, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 84, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 85, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 85, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 85, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 85, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 85, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_4_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 86, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 86, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 87, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 87, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 87, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 3, .unkFlags = 1, .poseId = 87, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 87, .offset = {-2, 2}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_5_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_5_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_5_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_5_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_5_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_5_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_5_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_5_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_8_1[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_8_2[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_8_3[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_8_4[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_8_5[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_8_6[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_8_7[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_8_8[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_12_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_12_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sFlareonAnims_12_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sFlareonGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_1.4bpp.lz");
static const ax_sprite sFlareonSprites1[] = {
	{sFlareonGfx1, ARRAY_COUNT(sFlareonGfx1)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_2.4bpp.lz");
static const ax_sprite sFlareonSprites2[] = {
	{sFlareonGfx2, ARRAY_COUNT(sFlareonGfx2)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_3.4bpp.lz");
static const ax_sprite sFlareonSprites3[] = {
	{sFlareonGfx3, ARRAY_COUNT(sFlareonGfx3)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_4.4bpp.lz");
static const ax_sprite sFlareonSprites4[] = {
	{sFlareonGfx4, ARRAY_COUNT(sFlareonGfx4)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_5.4bpp.lz");
static const ax_sprite sFlareonSprites5[] = {
	{sFlareonGfx5, ARRAY_COUNT(sFlareonGfx5)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_6.4bpp.lz");
static const ax_sprite sFlareonSprites6[] = {
	{sFlareonGfx6, ARRAY_COUNT(sFlareonGfx6)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_7.4bpp.lz");
static const ax_sprite sFlareonSprites7[] = {
	{sFlareonGfx7, ARRAY_COUNT(sFlareonGfx7)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_8.4bpp.lz");
static const ax_sprite sFlareonSprites8[] = {
	{sFlareonGfx8, ARRAY_COUNT(sFlareonGfx8)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_9.4bpp.lz");
static const ax_sprite sFlareonSprites9[] = {
	{sFlareonGfx9, ARRAY_COUNT(sFlareonGfx9)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_10.4bpp.lz");
static const ax_sprite sFlareonSprites10[] = {
	{sFlareonGfx10, ARRAY_COUNT(sFlareonGfx10)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_11.4bpp.lz");
static const ax_sprite sFlareonSprites11[] = {
	{sFlareonGfx11, ARRAY_COUNT(sFlareonGfx11)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_12.4bpp.lz");
static const ax_sprite sFlareonSprites12[] = {
	{sFlareonGfx12, ARRAY_COUNT(sFlareonGfx12)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_13.4bpp.lz");
static const ax_sprite sFlareonSprites13[] = {
	{sFlareonGfx13, ARRAY_COUNT(sFlareonGfx13)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_14.4bpp.lz");
static const ax_sprite sFlareonSprites14[] = {
	{sFlareonGfx14, ARRAY_COUNT(sFlareonGfx14)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_15.4bpp.lz");
static const ax_sprite sFlareonSprites15[] = {
	{sFlareonGfx15, ARRAY_COUNT(sFlareonGfx15)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_16.4bpp.lz");
static const u8 sFlareonGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_16_1.4bpp.lz");
static const u8 sFlareonGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_16_2.4bpp.lz");
static const ax_sprite sFlareonSprites16[] = {
	{sFlareonGfx16, ARRAY_COUNT(sFlareonGfx16)}, 
	{NULL, 32}, 
	{sFlareonGfx16_1, ARRAY_COUNT(sFlareonGfx16_1)}, 
	{NULL, 32}, 
	{sFlareonGfx16_2, ARRAY_COUNT(sFlareonGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlareonGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_17.4bpp.lz");
static const u8 sFlareonGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_17_1.4bpp.lz");
static const u8 sFlareonGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_17_2.4bpp.lz");
static const ax_sprite sFlareonSprites17[] = {
	{sFlareonGfx17, ARRAY_COUNT(sFlareonGfx17)}, 
	{NULL, 32}, 
	{sFlareonGfx17_1, ARRAY_COUNT(sFlareonGfx17_1)}, 
	{NULL, 32}, 
	{sFlareonGfx17_2, ARRAY_COUNT(sFlareonGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlareonGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_18.4bpp.lz");
static const ax_sprite sFlareonSprites18[] = {
	{sFlareonGfx18, ARRAY_COUNT(sFlareonGfx18)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sFlareonGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_19.4bpp.lz");
static const u8 sFlareonGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_19_1.4bpp.lz");
static const u8 sFlareonGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_19_2.4bpp.lz");
static const u8 sFlareonGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_19_3.4bpp.lz");
static const ax_sprite sFlareonSprites19[] = {
	{sFlareonGfx19, ARRAY_COUNT(sFlareonGfx19)}, 
	{NULL, 64}, 
	{sFlareonGfx19_1, ARRAY_COUNT(sFlareonGfx19_1)}, 
	{NULL, 32}, 
	{sFlareonGfx19_2, ARRAY_COUNT(sFlareonGfx19_2)}, 
	{NULL, 64}, 
	{sFlareonGfx19_3, ARRAY_COUNT(sFlareonGfx19_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFlareonGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_20.4bpp.lz");
static const u8 sFlareonGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_20_1.4bpp.lz");
static const u8 sFlareonGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_20_2.4bpp.lz");
static const ax_sprite sFlareonSprites20[] = {
	{sFlareonGfx20, ARRAY_COUNT(sFlareonGfx20)}, 
	{NULL, 32}, 
	{sFlareonGfx20_1, ARRAY_COUNT(sFlareonGfx20_1)}, 
	{NULL, 32}, 
	{sFlareonGfx20_2, ARRAY_COUNT(sFlareonGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlareonGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_21.4bpp.lz");
static const u8 sFlareonGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_21_1.4bpp.lz");
static const u8 sFlareonGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_21_2.4bpp.lz");
static const ax_sprite sFlareonSprites21[] = {
	{sFlareonGfx21, ARRAY_COUNT(sFlareonGfx21)}, 
	{NULL, 32}, 
	{sFlareonGfx21_1, ARRAY_COUNT(sFlareonGfx21_1)}, 
	{NULL, 32}, 
	{sFlareonGfx21_2, ARRAY_COUNT(sFlareonGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlareonGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_22.4bpp.lz");
static const u8 sFlareonGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_22_1.4bpp.lz");
static const u8 sFlareonGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_22_2.4bpp.lz");
static const ax_sprite sFlareonSprites22[] = {
	{sFlareonGfx22, ARRAY_COUNT(sFlareonGfx22)}, 
	{NULL, 32}, 
	{sFlareonGfx22_1, ARRAY_COUNT(sFlareonGfx22_1)}, 
	{NULL, 32}, 
	{sFlareonGfx22_2, ARRAY_COUNT(sFlareonGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlareonGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_23.4bpp.lz");
static const u8 sFlareonGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_23_1.4bpp.lz");
static const u8 sFlareonGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_23_2.4bpp.lz");
static const ax_sprite sFlareonSprites23[] = {
	{sFlareonGfx23, ARRAY_COUNT(sFlareonGfx23)}, 
	{NULL, 32}, 
	{sFlareonGfx23_1, ARRAY_COUNT(sFlareonGfx23_1)}, 
	{NULL, 32}, 
	{sFlareonGfx23_2, ARRAY_COUNT(sFlareonGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlareonGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_24.4bpp.lz");
static const u8 sFlareonGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_24_1.4bpp.lz");
static const u8 sFlareonGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_24_2.4bpp.lz");
static const ax_sprite sFlareonSprites24[] = {
	{sFlareonGfx24, ARRAY_COUNT(sFlareonGfx24)}, 
	{NULL, 32}, 
	{sFlareonGfx24_1, ARRAY_COUNT(sFlareonGfx24_1)}, 
	{NULL, 32}, 
	{sFlareonGfx24_2, ARRAY_COUNT(sFlareonGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlareonGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_25.4bpp.lz");
static const u8 sFlareonGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_25_1.4bpp.lz");
static const ax_sprite sFlareonSprites25[] = {
	{sFlareonGfx25, ARRAY_COUNT(sFlareonGfx25)}, 
	{NULL, 32}, 
	{sFlareonGfx25_1, ARRAY_COUNT(sFlareonGfx25_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sFlareonGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_26.4bpp.lz");
static const u8 sFlareonGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_26_1.4bpp.lz");
static const ax_sprite sFlareonSprites26[] = {
	{sFlareonGfx26, ARRAY_COUNT(sFlareonGfx26)}, 
	{NULL, 32}, 
	{sFlareonGfx26_1, ARRAY_COUNT(sFlareonGfx26_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sFlareonGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_27.4bpp.lz");
static const u8 sFlareonGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_27_1.4bpp.lz");
static const u8 sFlareonGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_27_2.4bpp.lz");
static const ax_sprite sFlareonSprites27[] = {
	{sFlareonGfx27, ARRAY_COUNT(sFlareonGfx27)}, 
	{NULL, 64}, 
	{sFlareonGfx27_1, ARRAY_COUNT(sFlareonGfx27_1)}, 
	{NULL, 32}, 
	{sFlareonGfx27_2, ARRAY_COUNT(sFlareonGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlareonGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_28.4bpp.lz");
static const u8 sFlareonGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_28_1.4bpp.lz");
static const u8 sFlareonGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_28_2.4bpp.lz");
static const ax_sprite sFlareonSprites28[] = {
	{sFlareonGfx28, ARRAY_COUNT(sFlareonGfx28)}, 
	{NULL, 32}, 
	{sFlareonGfx28_1, ARRAY_COUNT(sFlareonGfx28_1)}, 
	{NULL, 32}, 
	{sFlareonGfx28_2, ARRAY_COUNT(sFlareonGfx28_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlareonGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_29.4bpp.lz");
static const u8 sFlareonGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_29_1.4bpp.lz");
static const u8 sFlareonGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_29_2.4bpp.lz");
static const ax_sprite sFlareonSprites29[] = {
	{sFlareonGfx29, ARRAY_COUNT(sFlareonGfx29)}, 
	{NULL, 32}, 
	{sFlareonGfx29_1, ARRAY_COUNT(sFlareonGfx29_1)}, 
	{NULL, 32}, 
	{sFlareonGfx29_2, ARRAY_COUNT(sFlareonGfx29_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlareonGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_30.4bpp.lz");
static const u8 sFlareonGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_30_1.4bpp.lz");
static const u8 sFlareonGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_30_2.4bpp.lz");
static const ax_sprite sFlareonSprites30[] = {
	{sFlareonGfx30, ARRAY_COUNT(sFlareonGfx30)}, 
	{NULL, 32}, 
	{sFlareonGfx30_1, ARRAY_COUNT(sFlareonGfx30_1)}, 
	{NULL, 32}, 
	{sFlareonGfx30_2, ARRAY_COUNT(sFlareonGfx30_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlareonGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_31.4bpp.lz");
static const ax_sprite sFlareonSprites31[] = {
	{sFlareonGfx31, ARRAY_COUNT(sFlareonGfx31)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_32.4bpp.lz");
static const ax_sprite sFlareonSprites32[] = {
	{sFlareonGfx32, ARRAY_COUNT(sFlareonGfx32)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_33.4bpp.lz");
static const ax_sprite sFlareonSprites33[] = {
	{sFlareonGfx33, ARRAY_COUNT(sFlareonGfx33)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_34.4bpp.lz");
static const ax_sprite sFlareonSprites34[] = {
	{sFlareonGfx34, ARRAY_COUNT(sFlareonGfx34)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_35.4bpp.lz");
static const ax_sprite sFlareonSprites35[] = {
	{sFlareonGfx35, ARRAY_COUNT(sFlareonGfx35)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_36.4bpp.lz");
static const ax_sprite sFlareonSprites36[] = {
	{sFlareonGfx36, ARRAY_COUNT(sFlareonGfx36)}, 
	{NULL, 0}
};
static const u8 sFlareonGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flareon/sprite_37.4bpp.lz");
static const ax_sprite sFlareonSprites37[] = {
	{sFlareonGfx37, ARRAY_COUNT(sFlareonGfx37)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesFlareon[] = {
	sFlareonPose1,
	sFlareonPose2,
	sFlareonPose3,
	sFlareonPose4,
	sFlareonPose5,
	sFlareonPose6,
	sFlareonPose7,
	sFlareonPose8,
	sFlareonPose9,
	sFlareonPose10,
	sFlareonPose11,
	sFlareonPose12,
	sFlareonPose13,
	sFlareonPose14,
	sFlareonPose15,
	sFlareonPose16,
	sFlareonPose17,
	sFlareonPose18,
	sFlareonPose19,
	sFlareonPose20,
	sFlareonPose21,
	sFlareonPose22,
	sFlareonPose23,
	sFlareonPose24,
	sFlareonPose1,
	sFlareonPose2,
	sFlareonPose3,
	sFlareonPose4,
	sFlareonPose5,
	sFlareonPose6,
	sFlareonPose7,
	sFlareonPose8,
	sFlareonPose9,
	sFlareonPose10,
	sFlareonPose11,
	sFlareonPose12,
	sFlareonPose13,
	sFlareonPose14,
	sFlareonPose15,
	sFlareonPose16,
	sFlareonPose17,
	sFlareonPose18,
	sFlareonPose19,
	sFlareonPose20,
	sFlareonPose21,
	sFlareonPose22,
	sFlareonPose23,
	sFlareonPose24,
	sFlareonPose1,
	sFlareonPose2,
	sFlareonPose3,
	sFlareonPose4,
	sFlareonPose5,
	sFlareonPose6,
	sFlareonPose7,
	sFlareonPose8,
	sFlareonPose9,
	sFlareonPose10,
	sFlareonPose11,
	sFlareonPose12,
	sFlareonPose13,
	sFlareonPose14,
	sFlareonPose15,
	sFlareonPose16,
	sFlareonPose17,
	sFlareonPose18,
	sFlareonPose19,
	sFlareonPose20,
	sFlareonPose21,
	sFlareonPose22,
	sFlareonPose23,
	sFlareonPose24,
	sFlareonPose73,
	sFlareonPose74,
	sFlareonPose75,
	sFlareonPose76,
	sFlareonPose77,
	sFlareonPose78,
	sFlareonPose79,
	sFlareonPose80,
	sFlareonPose15,
	sFlareonPose82,
	sFlareonPose83,
	sFlareonPose84,
	sFlareonPose85,
	sFlareonPose86,
	sFlareonPose87,
	sFlareonPose88,
	sFlareonPose1,
	sFlareonPose90,
	sFlareonPose91,
	sFlareonPose4,
	sFlareonPose93,
	sFlareonPose94,
	sFlareonPose7,
	sFlareonPose96,
	sFlareonPose97,
	sFlareonPose10,
	sFlareonPose99,
	sFlareonPose100,
	sFlareonPose13,
	sFlareonPose102,
	sFlareonPose103,
	sFlareonPose16,
	sFlareonPose105,
	sFlareonPose106,
	sFlareonPose19,
	sFlareonPose108,
	sFlareonPose109,
	sFlareonPose22,
	sFlareonPose111,
	sFlareonPose112,
	sFlareonPose113,
	sFlareonPose114,
	sFlareonPose115,
	sFlareonPose116,
	sFlareonPose117,
	sFlareonPose118,
	sFlareonPose119,
	sFlareonPose120,
	sFlareonPose121,
	sFlareonPose122,
	sFlareonPose1,
	sFlareonPose90,
	sFlareonPose91,
	sFlareonPose4,
	sFlareonPose93,
	sFlareonPose94,
	sFlareonPose7,
	sFlareonPose96,
	sFlareonPose97,
	sFlareonPose10,
	sFlareonPose99,
	sFlareonPose100,
	sFlareonPose13,
	sFlareonPose102,
	sFlareonPose103,
	sFlareonPose16,
	sFlareonPose105,
	sFlareonPose106,
	sFlareonPose19,
	sFlareonPose108,
	sFlareonPose109,
	sFlareonPose22,
	sFlareonPose111,
	sFlareonPose112,
	sFlareonPose1,
	sFlareonPose22,
	sFlareonPose19,
	sFlareonPose16,
	sFlareonPose13,
	sFlareonPose10,
	sFlareonPose7,
	sFlareonPose4,
	sFlareonPose1,
	sFlareonPose4,
	sFlareonPose7,
	sFlareonPose10,
	sFlareonPose13,
	sFlareonPose16,
	sFlareonPose19,
	sFlareonPose22,
	sFlareonPose1,
	sFlareonPose2,
	sFlareonPose3,
	sFlareonPose4,
	sFlareonPose5,
	sFlareonPose6,
	sFlareonPose7,
	sFlareonPose8,
	sFlareonPose9,
	sFlareonPose10,
	sFlareonPose11,
	sFlareonPose12,
	sFlareonPose13,
	sFlareonPose14,
	sFlareonPose15,
	sFlareonPose16,
	sFlareonPose17,
	sFlareonPose18,
	sFlareonPose19,
	sFlareonPose20,
	sFlareonPose21,
	sFlareonPose22,
	sFlareonPose23,
	sFlareonPose24,
	sFlareonPose187,
	sFlareonPose76,
	sFlareonPose78,
	sFlareonPose80,
	sFlareonPose82,
	sFlareonPose84,
	sFlareonPose86,
	sFlareonPose88,
	sFlareonPose1,
	sFlareonPose22,
	sFlareonPose19,
	sFlareonPose16,
	sFlareonPose13,
	sFlareonPose10,
	sFlareonPose7,
	sFlareonPose4,
};

static const struct PositionSets sAxPositionsFlareon[] = {
	[0] = { .set = { {-1, -6}, {-4, 1}, {2, 1}, {-1, -10} } },
	[1] = { .set = { {-1, -5}, {-4, 3}, {2, 1}, {-1, -10} } },
	[2] = { .set = { {-1, -5}, {-4, 1}, {2, 3}, {-1, -10} } },
	[3] = { .set = { {8, -7}, {7, -1}, {2, 1}, {0, -7} } },
	[4] = { .set = { {8, -6}, {7, -1}, {4, 2}, {0, -6} } },
	[5] = { .set = { {8, -6}, {9, 1}, {0, 1}, {1, -5} } },
	[6] = { .set = { {10, -8}, {5, -1}, {4, 0}, {-1, -6} } },
	[7] = { .set = { {10, -7}, {2, -1}, {8, 0}, {-1, -5} } },
	[8] = { .set = { {10, -7}, {7, -1}, {2, 0}, {-1, -4} } },
	[9] = { .set = { {8, -10}, {-2, -4}, {3, -1}, {-1, -9} } },
	[10] = { .set = { {8, -9}, {-3, -4}, {5, -2}, {-1, -8} } },
	[11] = { .set = { {8, -9}, {1, -7}, {2, 0}, {-1, -7} } },
	[12] = { .set = { {-2, -11}, {3, -4}, {-6, -4}, {-1, -8} } },
	[13] = { .set = { {-1, -11}, {4, -8}, {-6, -4}, {-1, -7} } },
	[14] = { .set = { {-2, -10}, {4, -4}, {-6, -8}, {-1, -7} } },
	[15] = { .set = { {-9, -10}, {1, -4}, {-4, -1}, {0, -9} } },
	[16] = { .set = { {-9, -9}, {2, -4}, {-6, -2}, {0, -8} } },
	[17] = { .set = { {-9, -9}, {-2, -7}, {-3, 0}, {0, -7} } },
	[18] = { .set = { {-11, -8}, {-6, -1}, {-5, 0}, {0, -6} } },
	[19] = { .set = { {-11, -7}, {-3, -1}, {-9, 0}, {0, -5} } },
	[20] = { .set = { {-11, -7}, {-8, -1}, {-3, 0}, {0, -4} } },
	[21] = { .set = { {-9, -7}, {-8, -1}, {-3, 1}, {-1, -7} } },
	[22] = { .set = { {-9, -6}, {-8, -1}, {-5, 2}, {-1, -6} } },
	[23] = { .set = { {-9, -6}, {-10, 1}, {-1, 1}, {-2, -5} } },
	[24] = { .set = { {-1, -6}, {-4, 1}, {2, 1}, {-1, -10} } },
	[25] = { .set = { {-1, -5}, {-4, 3}, {2, 1}, {-1, -10} } },
	[26] = { .set = { {-1, -5}, {-4, 1}, {2, 3}, {-1, -10} } },
	[27] = { .set = { {8, -7}, {7, -1}, {2, 1}, {0, -7} } },
	[28] = { .set = { {8, -6}, {7, -1}, {4, 2}, {0, -6} } },
	[29] = { .set = { {8, -6}, {9, 1}, {0, 1}, {1, -5} } },
	[30] = { .set = { {10, -8}, {5, -1}, {4, 0}, {-1, -6} } },
	[31] = { .set = { {10, -7}, {2, -1}, {8, 0}, {-1, -5} } },
	[32] = { .set = { {10, -7}, {7, -1}, {2, 0}, {-1, -4} } },
	[33] = { .set = { {8, -10}, {-2, -4}, {3, -1}, {-1, -9} } },
	[34] = { .set = { {8, -9}, {-3, -4}, {5, -2}, {-1, -8} } },
	[35] = { .set = { {8, -9}, {1, -7}, {2, 0}, {-1, -7} } },
	[36] = { .set = { {-2, -11}, {3, -4}, {-6, -4}, {-1, -8} } },
	[37] = { .set = { {-1, -11}, {4, -8}, {-6, -4}, {-1, -7} } },
	[38] = { .set = { {-2, -10}, {4, -4}, {-6, -8}, {-1, -7} } },
	[39] = { .set = { {-9, -10}, {1, -4}, {-4, -1}, {0, -9} } },
	[40] = { .set = { {-9, -9}, {2, -4}, {-6, -2}, {0, -8} } },
	[41] = { .set = { {-9, -9}, {-2, -7}, {-3, 0}, {0, -7} } },
	[42] = { .set = { {-11, -8}, {-6, -1}, {-5, 0}, {0, -6} } },
	[43] = { .set = { {-11, -7}, {-3, -1}, {-9, 0}, {0, -5} } },
	[44] = { .set = { {-11, -7}, {-8, -1}, {-3, 0}, {0, -4} } },
	[45] = { .set = { {-9, -7}, {-8, -1}, {-3, 1}, {-1, -7} } },
	[46] = { .set = { {-9, -6}, {-8, -1}, {-5, 2}, {-1, -6} } },
	[47] = { .set = { {-9, -6}, {-10, 1}, {-1, 1}, {-2, -5} } },
	[48] = { .set = { {-1, -6}, {-4, 1}, {2, 1}, {-1, -10} } },
	[49] = { .set = { {-1, -5}, {-4, 3}, {2, 1}, {-1, -10} } },
	[50] = { .set = { {-1, -5}, {-4, 1}, {2, 3}, {-1, -10} } },
	[51] = { .set = { {8, -7}, {7, -1}, {2, 1}, {0, -7} } },
	[52] = { .set = { {8, -6}, {7, -1}, {4, 2}, {0, -6} } },
	[53] = { .set = { {8, -6}, {9, 1}, {0, 1}, {1, -5} } },
	[54] = { .set = { {10, -8}, {5, -1}, {4, 0}, {-1, -6} } },
	[55] = { .set = { {10, -7}, {2, -1}, {8, 0}, {-1, -5} } },
	[56] = { .set = { {10, -7}, {7, -1}, {2, 0}, {-1, -4} } },
	[57] = { .set = { {8, -10}, {-2, -4}, {3, -1}, {-1, -9} } },
	[58] = { .set = { {8, -9}, {-3, -4}, {5, -2}, {-1, -8} } },
	[59] = { .set = { {8, -9}, {1, -7}, {2, 0}, {-1, -7} } },
	[60] = { .set = { {-2, -11}, {3, -4}, {-6, -4}, {-1, -8} } },
	[61] = { .set = { {-1, -11}, {4, -8}, {-6, -4}, {-1, -7} } },
	[62] = { .set = { {-2, -10}, {4, -4}, {-6, -8}, {-1, -7} } },
	[63] = { .set = { {-9, -10}, {1, -4}, {-4, -1}, {0, -9} } },
	[64] = { .set = { {-9, -9}, {2, -4}, {-6, -2}, {0, -8} } },
	[65] = { .set = { {-9, -9}, {-2, -7}, {-3, 0}, {0, -7} } },
	[66] = { .set = { {-11, -8}, {-6, -1}, {-5, 0}, {0, -6} } },
	[67] = { .set = { {-11, -7}, {-3, -1}, {-9, 0}, {0, -5} } },
	[68] = { .set = { {-11, -7}, {-8, -1}, {-3, 0}, {0, -4} } },
	[69] = { .set = { {-9, -7}, {-8, -1}, {-3, 1}, {-1, -7} } },
	[70] = { .set = { {-9, -6}, {-8, -1}, {-5, 2}, {-1, -6} } },
	[71] = { .set = { {-9, -6}, {-10, 1}, {-1, 1}, {-2, -5} } },
	[72] = { .set = { {0, -7}, {-3, -1}, {3, 1}, {0, -12} } },
	[73] = { .set = { {0, -5}, {-4, 1}, {4, 1}, {0, -8} } },
	[74] = { .set = { {7, -6}, {8, 1}, {-1, 1}, {0, -5} } },
	[75] = { .set = { {11, -8}, {4, 0}, {0, 1}, {2, -7} } },
	[76] = { .set = { {9, -7}, {6, -1}, {1, 0}, {-2, -4} } },
	[77] = { .set = { {14, -9}, {5, -1}, {4, 0}, {2, -6} } },
	[78] = { .set = { {7, -9}, {0, -7}, {1, 0}, {-2, -7} } },
	[79] = { .set = { {9, -13}, {-2, -4}, {3, -1}, {1, -9} } },
	[80] = { .set = { {-2, -10}, {4, -4}, {-6, -8}, {-1, -7} } },
	[81] = { .set = { {-1, -17}, {5, -4}, {-7, -4}, {-1, -9} } },
	[82] = { .set = { {-8, -9}, {-1, -7}, {-2, 0}, {1, -7} } },
	[83] = { .set = { {-10, -13}, {1, -4}, {-4, -1}, {-2, -9} } },
	[84] = { .set = { {-10, -7}, {-7, -1}, {-2, 0}, {1, -4} } },
	[85] = { .set = { {-15, -9}, {-6, -1}, {-5, 0}, {-3, -6} } },
	[86] = { .set = { {-8, -6}, {-9, 1}, {0, 1}, {-1, -5} } },
	[87] = { .set = { {-12, -8}, {-5, 0}, {-1, 1}, {-3, -7} } },
	[88] = { .set = { {-1, -6}, {-4, 1}, {2, 1}, {-1, -10} } },
	[89] = { .set = { {-1, -5}, {-4, 1}, {2, 1}, {-1, -8} } },
	[90] = { .set = { {-1, -5}, {-4, 1}, {2, 1}, {-1, -7} } },
	[91] = { .set = { {8, -7}, {7, -1}, {2, 1}, {0, -7} } },
	[92] = { .set = { {8, -6}, {6, 0}, {2, 1}, {0, -7} } },
	[93] = { .set = { {8, -6}, {6, 0}, {2, 1}, {-1, -7} } },
	[94] = { .set = { {10, -8}, {5, -1}, {4, 0}, {-1, -6} } },
	[95] = { .set = { {10, -7}, {5, -1}, {4, 0}, {-1, -6} } },
	[96] = { .set = { {10, -7}, {6, -1}, {4, 0}, {-1, -6} } },
	[97] = { .set = { {8, -10}, {-2, -4}, {3, -1}, {-1, -9} } },
	[98] = { .set = { {7, -10}, {-2, -3}, {3, -1}, {0, -7} } },
	[99] = { .set = { {7, -10}, {-2, -4}, {3, -1}, {0, -8} } },
	[100] = { .set = { {-2, -11}, {3, -4}, {-6, -4}, {-1, -8} } },
	[101] = { .set = { {-2, -13}, {4, -3}, {-8, -3}, {-2, -7} } },
	[102] = { .set = { {-1, -13}, {6, -3}, {-6, -3}, {0, -7} } },
	[103] = { .set = { {-9, -10}, {1, -4}, {-4, -1}, {0, -9} } },
	[104] = { .set = { {-8, -10}, {1, -3}, {-4, -1}, {-1, -7} } },
	[105] = { .set = { {-8, -10}, {1, -4}, {-4, -1}, {-1, -8} } },
	[106] = { .set = { {-11, -8}, {-6, -1}, {-5, 0}, {0, -6} } },
	[107] = { .set = { {-11, -7}, {-6, -1}, {-5, 0}, {0, -6} } },
	[108] = { .set = { {-11, -7}, {-7, -1}, {-5, 0}, {0, -6} } },
	[109] = { .set = { {-9, -7}, {-8, -1}, {-3, 1}, {-1, -7} } },
	[110] = { .set = { {-9, -6}, {-7, 0}, {-3, 1}, {-1, -7} } },
	[111] = { .set = { {-9, -6}, {-7, 0}, {-3, 1}, {0, -7} } },
	[112] = { .set = { {-9, -4}, {-8, 1}, {-6, 2}, {0, -3} } },
	[113] = { .set = { {-9, -3}, {-8, 1}, {-6, 2}, {0, -2} } },
	[114] = { .set = { {0, 0}, {-6, 0}, {6, 0}, {0, -9} } },
	[115] = { .set = { {7, -3}, {8, -2}, {-2, 0}, {-3, -6} } },
	[116] = { .set = { {10, -4}, {1, -2}, {0, 0}, {-1, -5} } },
	[117] = { .set = { {7, -7}, {-2, -3}, {3, 0}, {0, -7} } },
	[118] = { .set = { {0, -9}, {5, -2}, {-5, -2}, {0, -8} } },
	[119] = { .set = { {-8, -7}, {1, -3}, {-4, 0}, {-1, -7} } },
	[120] = { .set = { {-11, -4}, {-2, -2}, {-1, 0}, {0, -5} } },
	[121] = { .set = { {-8, -3}, {-9, -2}, {1, 0}, {2, -6} } },
	[122] = { .set = { {-1, -6}, {-4, 1}, {2, 1}, {-1, -10} } },
	[123] = { .set = { {-1, -5}, {-4, 1}, {2, 1}, {-1, -8} } },
	[124] = { .set = { {-1, -5}, {-4, 1}, {2, 1}, {-1, -7} } },
	[125] = { .set = { {8, -7}, {7, -1}, {2, 1}, {0, -7} } },
	[126] = { .set = { {8, -6}, {6, 0}, {2, 1}, {0, -7} } },
	[127] = { .set = { {8, -6}, {6, 0}, {2, 1}, {-1, -7} } },
	[128] = { .set = { {10, -8}, {5, -1}, {4, 0}, {-1, -6} } },
	[129] = { .set = { {10, -7}, {5, -1}, {4, 0}, {-1, -6} } },
	[130] = { .set = { {10, -7}, {6, -1}, {4, 0}, {-1, -6} } },
	[131] = { .set = { {8, -10}, {-2, -4}, {3, -1}, {-1, -9} } },
	[132] = { .set = { {7, -10}, {-2, -3}, {3, -1}, {0, -7} } },
	[133] = { .set = { {7, -10}, {-2, -4}, {3, -1}, {0, -8} } },
	[134] = { .set = { {-2, -11}, {3, -4}, {-6, -4}, {-1, -8} } },
	[135] = { .set = { {-2, -13}, {4, -3}, {-8, -3}, {-2, -7} } },
	[136] = { .set = { {-1, -13}, {6, -3}, {-6, -3}, {0, -7} } },
	[137] = { .set = { {-9, -10}, {1, -4}, {-4, -1}, {0, -9} } },
	[138] = { .set = { {-8, -10}, {1, -3}, {-4, -1}, {-1, -7} } },
	[139] = { .set = { {-8, -10}, {1, -4}, {-4, -1}, {-1, -8} } },
	[140] = { .set = { {-11, -8}, {-6, -1}, {-5, 0}, {0, -6} } },
	[141] = { .set = { {-11, -7}, {-6, -1}, {-5, 0}, {0, -6} } },
	[142] = { .set = { {-11, -7}, {-7, -1}, {-5, 0}, {0, -6} } },
	[143] = { .set = { {-9, -7}, {-8, -1}, {-3, 1}, {-1, -7} } },
	[144] = { .set = { {-9, -6}, {-7, 0}, {-3, 1}, {-1, -7} } },
	[145] = { .set = { {-9, -6}, {-7, 0}, {-3, 1}, {0, -7} } },
	[146] = { .set = { {-1, -6}, {-4, 1}, {2, 1}, {-1, -10} } },
	[147] = { .set = { {-9, -7}, {-8, -1}, {-3, 1}, {-1, -7} } },
	[148] = { .set = { {-11, -8}, {-6, -1}, {-5, 0}, {0, -6} } },
	[149] = { .set = { {-9, -10}, {1, -4}, {-4, -1}, {0, -9} } },
	[150] = { .set = { {-2, -11}, {3, -4}, {-6, -4}, {-1, -8} } },
	[151] = { .set = { {8, -10}, {-2, -4}, {3, -1}, {-1, -9} } },
	[152] = { .set = { {10, -8}, {5, -1}, {4, 0}, {-1, -6} } },
	[153] = { .set = { {8, -7}, {7, -1}, {2, 1}, {0, -7} } },
	[154] = { .set = { {-1, -6}, {-4, 1}, {2, 1}, {-1, -10} } },
	[155] = { .set = { {8, -7}, {7, -1}, {2, 1}, {0, -7} } },
	[156] = { .set = { {10, -8}, {5, -1}, {4, 0}, {-1, -6} } },
	[157] = { .set = { {8, -10}, {-2, -4}, {3, -1}, {-1, -9} } },
	[158] = { .set = { {-2, -11}, {3, -4}, {-6, -4}, {-1, -8} } },
	[159] = { .set = { {-9, -10}, {1, -4}, {-4, -1}, {0, -9} } },
	[160] = { .set = { {-11, -8}, {-6, -1}, {-5, 0}, {0, -6} } },
	[161] = { .set = { {-9, -7}, {-8, -1}, {-3, 1}, {-1, -7} } },
	[162] = { .set = { {-1, -6}, {-4, 1}, {2, 1}, {-1, -10} } },
	[163] = { .set = { {-1, -5}, {-4, 3}, {2, 1}, {-1, -10} } },
	[164] = { .set = { {-1, -5}, {-4, 1}, {2, 3}, {-1, -10} } },
	[165] = { .set = { {8, -7}, {7, -1}, {2, 1}, {0, -7} } },
	[166] = { .set = { {8, -6}, {7, -1}, {4, 2}, {0, -6} } },
	[167] = { .set = { {8, -6}, {9, 1}, {0, 1}, {1, -5} } },
	[168] = { .set = { {10, -8}, {5, -1}, {4, 0}, {-1, -6} } },
	[169] = { .set = { {10, -7}, {2, -1}, {8, 0}, {-1, -5} } },
	[170] = { .set = { {10, -7}, {7, -1}, {2, 0}, {-1, -4} } },
	[171] = { .set = { {8, -10}, {-2, -4}, {3, -1}, {-1, -9} } },
	[172] = { .set = { {8, -9}, {-3, -4}, {5, -2}, {-1, -8} } },
	[173] = { .set = { {8, -9}, {1, -7}, {2, 0}, {-1, -7} } },
	[174] = { .set = { {-2, -11}, {3, -4}, {-6, -4}, {-1, -8} } },
	[175] = { .set = { {-1, -11}, {4, -8}, {-6, -4}, {-1, -7} } },
	[176] = { .set = { {-2, -10}, {4, -4}, {-6, -8}, {-1, -7} } },
	[177] = { .set = { {-9, -10}, {1, -4}, {-4, -1}, {0, -9} } },
	[178] = { .set = { {-9, -9}, {2, -4}, {-6, -2}, {0, -8} } },
	[179] = { .set = { {-9, -9}, {-2, -7}, {-3, 0}, {0, -7} } },
	[180] = { .set = { {-11, -8}, {-6, -1}, {-5, 0}, {0, -6} } },
	[181] = { .set = { {-11, -7}, {-3, -1}, {-9, 0}, {0, -5} } },
	[182] = { .set = { {-11, -7}, {-8, -1}, {-3, 0}, {0, -4} } },
	[183] = { .set = { {-9, -7}, {-8, -1}, {-3, 1}, {-1, -7} } },
	[184] = { .set = { {-9, -6}, {-8, -1}, {-5, 2}, {-1, -6} } },
	[185] = { .set = { {-9, -6}, {-10, 1}, {-1, 1}, {-2, -5} } },
	[186] = { .set = { {-1, -5}, {-5, 1}, {3, 1}, {-1, -8} } },
	[187] = { .set = { {11, -8}, {4, 0}, {0, 1}, {2, -7} } },
	[188] = { .set = { {14, -9}, {5, -1}, {4, 0}, {2, -6} } },
	[189] = { .set = { {9, -13}, {-2, -4}, {3, -1}, {1, -9} } },
	[190] = { .set = { {-1, -17}, {5, -4}, {-7, -4}, {-1, -9} } },
	[191] = { .set = { {-10, -13}, {1, -4}, {-4, -1}, {-2, -9} } },
	[192] = { .set = { {-15, -9}, {-6, -1}, {-5, 0}, {-3, -6} } },
	[193] = { .set = { {-12, -8}, {-5, 0}, {-1, 1}, {-3, -7} } },
	[194] = { .set = { {-1, -6}, {-4, 1}, {2, 1}, {-1, -10} } },
	[195] = { .set = { {-9, -7}, {-8, -1}, {-3, 1}, {-1, -7} } },
	[196] = { .set = { {-11, -8}, {-6, -1}, {-5, 0}, {0, -6} } },
	[197] = { .set = { {-9, -10}, {1, -4}, {-4, -1}, {0, -9} } },
	[198] = { .set = { {-2, -11}, {3, -4}, {-6, -4}, {-1, -8} } },
	[199] = { .set = { {8, -10}, {-2, -4}, {3, -1}, {-1, -9} } },
	[200] = { .set = { {10, -8}, {5, -1}, {4, 0}, {-1, -6} } },
	[201] = { .set = { {8, -7}, {7, -1}, {2, 1}, {0, -7} } },
};

static const ax_anim *const sFlareonAnimTable1[] = {
	gAxSharedAnim_02606,
	gAxSharedAnim_02682,
	gAxSharedAnim_02691,
	gAxSharedAnim_02701,
	gAxSharedAnim_02618,
	gAxSharedAnim_02641,
	gAxSharedAnim_02654,
	gAxSharedAnim_02663,
};

static const ax_anim *const sFlareonAnimTable2[] = {
	gAxSharedAnim_02432,
	gAxSharedAnim_02435,
	gAxSharedAnim_02436,
	gAxSharedAnim_02437,
	gAxSharedAnim_02438,
	gAxSharedAnim_02439,
	gAxSharedAnim_02441,
	gAxSharedAnim_02442,
};

static const ax_anim *const sFlareonAnimTable3[] = {
	gAxSharedAnim_02443,
	gAxSharedAnim_02444,
	gAxSharedAnim_02445,
	gAxSharedAnim_02446,
	gAxSharedAnim_02448,
	gAxSharedAnim_02449,
	gAxSharedAnim_02450,
	gAxSharedAnim_02451,
};

static const ax_anim *const sFlareonAnimTable4[] = {
	sFlareonAnims_4_1,
	sFlareonAnims_4_2,
	sFlareonAnims_4_3,
	sFlareonAnims_4_4,
	sFlareonAnims_4_5,
	sFlareonAnims_4_6,
	sFlareonAnims_4_7,
	sFlareonAnims_4_8,
};

static const ax_anim *const sFlareonAnimTable5[] = {
	sFlareonAnims_5_1,
	sFlareonAnims_5_2,
	sFlareonAnims_5_3,
	sFlareonAnims_5_4,
	sFlareonAnims_5_5,
	sFlareonAnims_5_6,
	sFlareonAnims_5_7,
	sFlareonAnims_5_8,
};

static const ax_anim *const sFlareonAnimTable6[] = {
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
};

static const ax_anim *const sFlareonAnimTable7[] = {
	gAxSharedAnim_00266,
	gAxSharedAnim_00273,
	gAxSharedAnim_00280,
	gAxSharedAnim_00290,
	gAxSharedAnim_00302,
	gAxSharedAnim_00315,
	gAxSharedAnim_00322,
	gAxSharedAnim_00328,
};

static const ax_anim *const sFlareonAnimTable8[] = {
	sFlareonAnims_8_1,
	sFlareonAnims_8_2,
	sFlareonAnims_8_3,
	sFlareonAnims_8_4,
	sFlareonAnims_8_5,
	sFlareonAnims_8_6,
	sFlareonAnims_8_7,
	sFlareonAnims_8_8,
};

static const ax_anim *const sFlareonAnimTable9[] = {
	gAxSharedAnim_00538,
	gAxSharedAnim_00598,
	gAxSharedAnim_00591,
	gAxSharedAnim_00582,
	gAxSharedAnim_00571,
	gAxSharedAnim_00561,
	gAxSharedAnim_00554,
	gAxSharedAnim_00545,
};

static const ax_anim *const sFlareonAnimTable10[] = {
	gAxSharedAnim_00612,
	gAxSharedAnim_00622,
	gAxSharedAnim_00632,
	gAxSharedAnim_00642,
	gAxSharedAnim_00651,
	gAxSharedAnim_00660,
	gAxSharedAnim_00675,
	gAxSharedAnim_00686,
};

static const ax_anim *const sFlareonAnimTable11[] = {
	gAxSharedAnim_00697,
	gAxSharedAnim_00736,
	gAxSharedAnim_00768,
	gAxSharedAnim_00812,
	gAxSharedAnim_00847,
	gAxSharedAnim_00887,
	gAxSharedAnim_00929,
	gAxSharedAnim_00963,
};

static const ax_anim *const sFlareonAnimTable12[] = {
	gAxSharedAnim_01018,
	sFlareonAnims_12_2,
	gAxSharedAnim_01034,
	sFlareonAnims_12_4,
	gAxSharedAnim_01084,
	sFlareonAnims_12_6,
	gAxSharedAnim_01099,
	gAxSharedAnim_01116,
};

static const ax_anim *const sFlareonAnimTable13[] = {
	gAxSharedAnim_01145,
	gAxSharedAnim_01227,
	gAxSharedAnim_01218,
	gAxSharedAnim_01201,
	gAxSharedAnim_01190,
	gAxSharedAnim_01179,
	gAxSharedAnim_01168,
	gAxSharedAnim_01157,
};

static const ax_anim *const *const sAxAnimationsFlareon[] = {
	sFlareonAnimTable1,
	sFlareonAnimTable2,
	sFlareonAnimTable3,
	sFlareonAnimTable4,
	sFlareonAnimTable5,
	sFlareonAnimTable6,
	sFlareonAnimTable7,
	sFlareonAnimTable8,
	sFlareonAnimTable9,
	sFlareonAnimTable10,
	sFlareonAnimTable11,
	sFlareonAnimTable12,
	sFlareonAnimTable13,
};

static const ax_sprite *const sAxSpritesFlareon[] = {
	sFlareonSprites1,
	sFlareonSprites2,
	sFlareonSprites3,
	sFlareonSprites4,
	sFlareonSprites5,
	sFlareonSprites6,
	sFlareonSprites7,
	sFlareonSprites8,
	sFlareonSprites9,
	sFlareonSprites10,
	sFlareonSprites11,
	sFlareonSprites12,
	sFlareonSprites13,
	sFlareonSprites14,
	sFlareonSprites15,
	sFlareonSprites16,
	sFlareonSprites17,
	sFlareonSprites18,
	sFlareonSprites19,
	sFlareonSprites20,
	sFlareonSprites21,
	sFlareonSprites22,
	sFlareonSprites23,
	sFlareonSprites24,
	sFlareonSprites25,
	sFlareonSprites26,
	sFlareonSprites27,
	sFlareonSprites28,
	sFlareonSprites29,
	sFlareonSprites30,
	sFlareonSprites31,
	sFlareonSprites32,
	sFlareonSprites33,
	sFlareonSprites34,
	sFlareonSprites35,
	sFlareonSprites36,
	sFlareonSprites37,
};

static const axmain sAxMainFlareon = {
	.poses = sAxPosesFlareon,
	.animations = sAxAnimationsFlareon,
	.animCount = ARRAY_COUNT(sAxAnimationsFlareon),
	.spriteData = sAxSpritesFlareon,
	.positions = sAxPositionsFlareon,
};
