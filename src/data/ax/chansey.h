/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainChansey;
const SiroArchive gAxChansey = {"SIRO", &sAxMainChansey};

static const ax_pose sChanseyPose1[] = {
	AX_POSE(0, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose3[] = {
	AX_POSE(2, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose4[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose5[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose6[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose7[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose8[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose9[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose10[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose11[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose12[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose13[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose14[] = {
	AX_POSE(13, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose15[] = {
	AX_POSE(14, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose16[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose17[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose18[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose19[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose20[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose21[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose22[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose23[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose24[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose74[] = {
	AX_POSE(15, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose75[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose77[] = {
	AX_POSE(17, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose78[] = {
	AX_POSE(18, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose80[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose81[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose83[] = {
	AX_POSE(21, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose84[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose86[] = {
	AX_POSE(23, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose87[] = {
	AX_POSE(24, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose89[] = {
	AX_POSE(21, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose90[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose92[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose93[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose95[] = {
	AX_POSE(17, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose96[] = {
	AX_POSE(18, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose100[] = {
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose101[] = {
	AX_POSE(26, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose105[] = {
	AX_POSE(27, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose106[] = {
	AX_POSE(28, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose110[] = {
	AX_POSE(29, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose111[] = {
	AX_POSE(30, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose115[] = {
	AX_POSE(31, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose116[] = {
	AX_POSE(32, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose120[] = {
	AX_POSE(33, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose121[] = {
	AX_POSE(34, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose125[] = {
	AX_POSE(31, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose126[] = {
	AX_POSE(32, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose130[] = {
	AX_POSE(29, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose131[] = {
	AX_POSE(30, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose135[] = {
	AX_POSE(27, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose136[] = {
	AX_POSE(28, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose137[] = {
	AX_POSE(35, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose138[] = {
	AX_POSE(36, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose139[] = {
	AX_POSE(37, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose140[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose141[] = {
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose142[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose143[] = {
	AX_POSE(41, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose144[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose145[] = {
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose146[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose173[] = {
	AX_POSE(29, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose174[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose175[] = {
	AX_POSE(33, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose176[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sChanseyPose177[] = {
	AX_POSE(29, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_anim sChanseyAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 46, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 46, .offset = {-18, 18}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-18, 18}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 70, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 70, .offset = {-18, 18}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-18, 18}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {1, -3}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 73, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {1, -3}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 73, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 74, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {1, -2}, .shadow = {1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {1, -4}, .shadow = {1, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {1, -4}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 76, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {1, -4}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 76, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 77, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-1, -3}, .shadow = {-1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-2, -4}, .shadow = {-2, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-3, -5}, .shadow = {-3, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, -4}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 79, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, -4}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 79, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 80, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-2, -1}, .shadow = {-2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-4, -1}, .shadow = {-4, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {1, -2}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 82, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {1, -2}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 82, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 82, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-5, 3}, .shadow = {-5, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {1, -3}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 85, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {1, -3}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 85, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 85, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 86, .offset = {0, 2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {1, 2}, .shadow = {1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, 3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {1, 3}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, 4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {1, 4}, .shadow = {1, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {1, -4}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 88, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {1, -4}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 88, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 89, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {5, 3}, .shadow = {5, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -4}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 91, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -4}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 92, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {2, -1}, .shadow = {2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {4, -1}, .shadow = {4, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-1, -4}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 94, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-1, -4}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {2, -4}, .shadow = {2, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {3, -5}, .shadow = {3, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 96, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 99, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 100, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 101, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 104, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 105, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 104, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 106, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 109, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 110, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 109, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 111, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 113, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 114, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 115, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 114, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 116, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 118, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 119, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 120, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 119, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 121, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 123, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 124, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 125, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 124, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 126, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 128, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 129, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 130, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 129, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 131, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 133, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 134, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 135, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 134, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_8_1[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 147, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 146, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 148, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_8_2[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 150, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 149, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 151, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_8_3[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 153, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 152, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 154, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_8_4[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 156, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 155, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 157, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_8_5[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 159, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 158, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 160, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_8_6[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 162, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 161, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 163, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_8_7[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 165, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 164, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 166, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_8_8[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 168, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 167, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 169, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {19, 10}, .shadow = {19, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 173, .offset = {19, 20}, .shadow = {19, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 174, .offset = {10, 20}, .shadow = {10, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {16, -5}, .shadow = {16, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 172, .offset = {19, -2}, .shadow = {19, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 173, .offset = {16, 4}, .shadow = {16, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {12, 5}, .shadow = {12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {12, -22}, .shadow = {12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 171, .offset = {19, -21}, .shadow = {19, -21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 172, .offset = {20, -15}, .shadow = {20, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-12, -22}, .shadow = {-12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 177, .offset = {-19, -21}, .shadow = {-19, -21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 176, .offset = {-20, -15}, .shadow = {-20, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-16, -5}, .shadow = {-16, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 176, .offset = {-19, -2}, .shadow = {-19, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 175, .offset = {-16, 4}, .shadow = {-16, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {-12, 5}, .shadow = {-12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sChanseyAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-19, 10}, .shadow = {-19, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 175, .offset = {-19, 20}, .shadow = {-19, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 174, .offset = {-10, 20}, .shadow = {-10, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sChanseyGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_1.4bpp.lz");
static const ax_sprite sChanseySprites1[] = {
	{sChanseyGfx1, ARRAY_COUNT(sChanseyGfx1)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_2.4bpp.lz");
static const ax_sprite sChanseySprites2[] = {
	{sChanseyGfx2, ARRAY_COUNT(sChanseyGfx2)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_3.4bpp.lz");
static const ax_sprite sChanseySprites3[] = {
	{sChanseyGfx3, ARRAY_COUNT(sChanseyGfx3)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_4.4bpp.lz");
static const ax_sprite sChanseySprites4[] = {
	{sChanseyGfx4, ARRAY_COUNT(sChanseyGfx4)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_5.4bpp.lz");
static const ax_sprite sChanseySprites5[] = {
	{sChanseyGfx5, ARRAY_COUNT(sChanseyGfx5)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_6.4bpp.lz");
static const ax_sprite sChanseySprites6[] = {
	{sChanseyGfx6, ARRAY_COUNT(sChanseyGfx6)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_7.4bpp.lz");
static const ax_sprite sChanseySprites7[] = {
	{sChanseyGfx7, ARRAY_COUNT(sChanseyGfx7)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_8.4bpp.lz");
static const ax_sprite sChanseySprites8[] = {
	{sChanseyGfx8, ARRAY_COUNT(sChanseyGfx8)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_9.4bpp.lz");
static const ax_sprite sChanseySprites9[] = {
	{sChanseyGfx9, ARRAY_COUNT(sChanseyGfx9)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_10.4bpp.lz");
static const ax_sprite sChanseySprites10[] = {
	{sChanseyGfx10, ARRAY_COUNT(sChanseyGfx10)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_11.4bpp.lz");
static const ax_sprite sChanseySprites11[] = {
	{sChanseyGfx11, ARRAY_COUNT(sChanseyGfx11)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_12.4bpp.lz");
static const ax_sprite sChanseySprites12[] = {
	{sChanseyGfx12, ARRAY_COUNT(sChanseyGfx12)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_13.4bpp.lz");
static const ax_sprite sChanseySprites13[] = {
	{sChanseyGfx13, ARRAY_COUNT(sChanseyGfx13)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_14.4bpp.lz");
static const ax_sprite sChanseySprites14[] = {
	{sChanseyGfx14, ARRAY_COUNT(sChanseyGfx14)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_15.4bpp.lz");
static const ax_sprite sChanseySprites15[] = {
	{sChanseyGfx15, ARRAY_COUNT(sChanseyGfx15)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_16.4bpp.lz");
static const ax_sprite sChanseySprites16[] = {
	{sChanseyGfx16, ARRAY_COUNT(sChanseyGfx16)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_17.4bpp.lz");
static const u8 sChanseyGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_17_1.4bpp.lz");
static const ax_sprite sChanseySprites17[] = {
	{NULL, 32}, 
	{sChanseyGfx17, ARRAY_COUNT(sChanseyGfx17)}, 
	{NULL, 32}, 
	{sChanseyGfx17_1, ARRAY_COUNT(sChanseyGfx17_1)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_18.4bpp.lz");
static const ax_sprite sChanseySprites18[] = {
	{sChanseyGfx18, ARRAY_COUNT(sChanseyGfx18)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sChanseyGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_19.4bpp.lz");
static const u8 sChanseyGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_19_1.4bpp.lz");
static const ax_sprite sChanseySprites19[] = {
	{NULL, 32}, 
	{sChanseyGfx19, ARRAY_COUNT(sChanseyGfx19)}, 
	{NULL, 32}, 
	{sChanseyGfx19_1, ARRAY_COUNT(sChanseyGfx19_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sChanseyGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_20.4bpp.lz");
static const u8 sChanseyGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_20_1.4bpp.lz");
static const ax_sprite sChanseySprites20[] = {
	{NULL, 32}, 
	{sChanseyGfx20, ARRAY_COUNT(sChanseyGfx20)}, 
	{NULL, 32}, 
	{sChanseyGfx20_1, ARRAY_COUNT(sChanseyGfx20_1)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_21.4bpp.lz");
static const u8 sChanseyGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_21_1.4bpp.lz");
static const u8 sChanseyGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_21_2.4bpp.lz");
static const ax_sprite sChanseySprites21[] = {
	{sChanseyGfx21, ARRAY_COUNT(sChanseyGfx21)}, 
	{NULL, 32}, 
	{sChanseyGfx21_1, ARRAY_COUNT(sChanseyGfx21_1)}, 
	{NULL, 32}, 
	{sChanseyGfx21_2, ARRAY_COUNT(sChanseyGfx21_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sChanseyGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_22.4bpp.lz");
static const u8 sChanseyGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_22_1.4bpp.lz");
static const ax_sprite sChanseySprites22[] = {
	{sChanseyGfx22, ARRAY_COUNT(sChanseyGfx22)}, 
	{NULL, 32}, 
	{sChanseyGfx22_1, ARRAY_COUNT(sChanseyGfx22_1)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_23.4bpp.lz");
static const u8 sChanseyGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_23_1.4bpp.lz");
static const u8 sChanseyGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_23_2.4bpp.lz");
static const ax_sprite sChanseySprites23[] = {
	{sChanseyGfx23, ARRAY_COUNT(sChanseyGfx23)}, 
	{NULL, 32}, 
	{sChanseyGfx23_1, ARRAY_COUNT(sChanseyGfx23_1)}, 
	{NULL, 32}, 
	{sChanseyGfx23_2, ARRAY_COUNT(sChanseyGfx23_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sChanseyGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_24.4bpp.lz");
static const ax_sprite sChanseySprites24[] = {
	{sChanseyGfx24, ARRAY_COUNT(sChanseyGfx24)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_25.4bpp.lz");
static const u8 sChanseyGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_25_1.4bpp.lz");
static const ax_sprite sChanseySprites25[] = {
	{sChanseyGfx25, ARRAY_COUNT(sChanseyGfx25)}, 
	{NULL, 32}, 
	{sChanseyGfx25_1, ARRAY_COUNT(sChanseyGfx25_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sChanseyGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_26.4bpp.lz");
static const u8 sChanseyGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_26_1.4bpp.lz");
static const u8 sChanseyGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_26_2.4bpp.lz");
static const u8 sChanseyGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_26_3.4bpp.lz");
static const ax_sprite sChanseySprites26[] = {
	{sChanseyGfx26, ARRAY_COUNT(sChanseyGfx26)}, 
	{NULL, 32}, 
	{sChanseyGfx26_1, ARRAY_COUNT(sChanseyGfx26_1)}, 
	{NULL, 32}, 
	{sChanseyGfx26_2, ARRAY_COUNT(sChanseyGfx26_2)}, 
	{NULL, 32}, 
	{sChanseyGfx26_3, ARRAY_COUNT(sChanseyGfx26_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sChanseyGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_27.4bpp.lz");
static const u8 sChanseyGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_27_1.4bpp.lz");
static const u8 sChanseyGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_27_2.4bpp.lz");
static const u8 sChanseyGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_27_3.4bpp.lz");
static const ax_sprite sChanseySprites27[] = {
	{sChanseyGfx27, ARRAY_COUNT(sChanseyGfx27)}, 
	{NULL, 32}, 
	{sChanseyGfx27_1, ARRAY_COUNT(sChanseyGfx27_1)}, 
	{NULL, 32}, 
	{sChanseyGfx27_2, ARRAY_COUNT(sChanseyGfx27_2)}, 
	{NULL, 32}, 
	{sChanseyGfx27_3, ARRAY_COUNT(sChanseyGfx27_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sChanseyGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_28.4bpp.lz");
static const u8 sChanseyGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_28_1.4bpp.lz");
static const u8 sChanseyGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_28_2.4bpp.lz");
static const u8 sChanseyGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_28_3.4bpp.lz");
static const ax_sprite sChanseySprites28[] = {
	{sChanseyGfx28, ARRAY_COUNT(sChanseyGfx28)}, 
	{NULL, 32}, 
	{sChanseyGfx28_1, ARRAY_COUNT(sChanseyGfx28_1)}, 
	{NULL, 32}, 
	{sChanseyGfx28_2, ARRAY_COUNT(sChanseyGfx28_2)}, 
	{NULL, 32}, 
	{sChanseyGfx28_3, ARRAY_COUNT(sChanseyGfx28_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sChanseyGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_29.4bpp.lz");
static const u8 sChanseyGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_29_1.4bpp.lz");
static const u8 sChanseyGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_29_2.4bpp.lz");
static const u8 sChanseyGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_29_3.4bpp.lz");
static const ax_sprite sChanseySprites29[] = {
	{sChanseyGfx29, ARRAY_COUNT(sChanseyGfx29)}, 
	{NULL, 32}, 
	{sChanseyGfx29_1, ARRAY_COUNT(sChanseyGfx29_1)}, 
	{NULL, 32}, 
	{sChanseyGfx29_2, ARRAY_COUNT(sChanseyGfx29_2)}, 
	{NULL, 64}, 
	{sChanseyGfx29_3, ARRAY_COUNT(sChanseyGfx29_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sChanseyGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_30.4bpp.lz");
static const u8 sChanseyGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_30_1.4bpp.lz");
static const u8 sChanseyGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_30_2.4bpp.lz");
static const u8 sChanseyGfx30_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_30_3.4bpp.lz");
static const ax_sprite sChanseySprites30[] = {
	{sChanseyGfx30, ARRAY_COUNT(sChanseyGfx30)}, 
	{NULL, 32}, 
	{sChanseyGfx30_1, ARRAY_COUNT(sChanseyGfx30_1)}, 
	{NULL, 32}, 
	{sChanseyGfx30_2, ARRAY_COUNT(sChanseyGfx30_2)}, 
	{NULL, 64}, 
	{sChanseyGfx30_3, ARRAY_COUNT(sChanseyGfx30_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sChanseyGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_31.4bpp.lz");
static const u8 sChanseyGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_31_1.4bpp.lz");
static const u8 sChanseyGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_31_2.4bpp.lz");
static const u8 sChanseyGfx31_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_31_3.4bpp.lz");
static const ax_sprite sChanseySprites31[] = {
	{sChanseyGfx31, ARRAY_COUNT(sChanseyGfx31)}, 
	{NULL, 32}, 
	{sChanseyGfx31_1, ARRAY_COUNT(sChanseyGfx31_1)}, 
	{NULL, 32}, 
	{sChanseyGfx31_2, ARRAY_COUNT(sChanseyGfx31_2)}, 
	{NULL, 32}, 
	{sChanseyGfx31_3, ARRAY_COUNT(sChanseyGfx31_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sChanseyGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_32.4bpp.lz");
static const u8 sChanseyGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_32_1.4bpp.lz");
static const u8 sChanseyGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_32_2.4bpp.lz");
static const u8 sChanseyGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_32_3.4bpp.lz");
static const ax_sprite sChanseySprites32[] = {
	{sChanseyGfx32, ARRAY_COUNT(sChanseyGfx32)}, 
	{NULL, 32}, 
	{sChanseyGfx32_1, ARRAY_COUNT(sChanseyGfx32_1)}, 
	{NULL, 32}, 
	{sChanseyGfx32_2, ARRAY_COUNT(sChanseyGfx32_2)}, 
	{NULL, 32}, 
	{sChanseyGfx32_3, ARRAY_COUNT(sChanseyGfx32_3)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sChanseyGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_33.4bpp.lz");
static const u8 sChanseyGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_33_1.4bpp.lz");
static const u8 sChanseyGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_33_2.4bpp.lz");
static const u8 sChanseyGfx33_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_33_3.4bpp.lz");
static const ax_sprite sChanseySprites33[] = {
	{sChanseyGfx33, ARRAY_COUNT(sChanseyGfx33)}, 
	{NULL, 32}, 
	{sChanseyGfx33_1, ARRAY_COUNT(sChanseyGfx33_1)}, 
	{NULL, 32}, 
	{sChanseyGfx33_2, ARRAY_COUNT(sChanseyGfx33_2)}, 
	{NULL, 32}, 
	{sChanseyGfx33_3, ARRAY_COUNT(sChanseyGfx33_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sChanseyGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_34.4bpp.lz");
static const ax_sprite sChanseySprites34[] = {
	{sChanseyGfx34, ARRAY_COUNT(sChanseyGfx34)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sChanseyGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_35.4bpp.lz");
static const ax_sprite sChanseySprites35[] = {
	{sChanseyGfx35, ARRAY_COUNT(sChanseyGfx35)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sChanseyGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_36.4bpp.lz");
static const ax_sprite sChanseySprites36[] = {
	{sChanseyGfx36, ARRAY_COUNT(sChanseyGfx36)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_37.4bpp.lz");
static const ax_sprite sChanseySprites37[] = {
	{sChanseyGfx37, ARRAY_COUNT(sChanseyGfx37)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_38.4bpp.lz");
static const ax_sprite sChanseySprites38[] = {
	{sChanseyGfx38, ARRAY_COUNT(sChanseyGfx38)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_39.4bpp.lz");
static const ax_sprite sChanseySprites39[] = {
	{sChanseyGfx39, ARRAY_COUNT(sChanseyGfx39)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_40.4bpp.lz");
static const ax_sprite sChanseySprites40[] = {
	{sChanseyGfx40, ARRAY_COUNT(sChanseyGfx40)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_41.4bpp.lz");
static const ax_sprite sChanseySprites41[] = {
	{sChanseyGfx41, ARRAY_COUNT(sChanseyGfx41)}, 
	{NULL, 0}
};
static const u8 sChanseyGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/chansey/sprite_42.4bpp.lz");
static const ax_sprite sChanseySprites42[] = {
	{sChanseyGfx42, ARRAY_COUNT(sChanseyGfx42)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesChansey[] = {
	sChanseyPose1,
	sChanseyPose2,
	sChanseyPose3,
	sChanseyPose4,
	sChanseyPose5,
	sChanseyPose6,
	sChanseyPose7,
	sChanseyPose8,
	sChanseyPose9,
	sChanseyPose10,
	sChanseyPose11,
	sChanseyPose12,
	sChanseyPose13,
	sChanseyPose14,
	sChanseyPose15,
	sChanseyPose16,
	sChanseyPose17,
	sChanseyPose18,
	sChanseyPose19,
	sChanseyPose20,
	sChanseyPose21,
	sChanseyPose22,
	sChanseyPose23,
	sChanseyPose24,
	sChanseyPose1,
	sChanseyPose2,
	sChanseyPose3,
	sChanseyPose4,
	sChanseyPose5,
	sChanseyPose6,
	sChanseyPose7,
	sChanseyPose8,
	sChanseyPose9,
	sChanseyPose10,
	sChanseyPose11,
	sChanseyPose12,
	sChanseyPose13,
	sChanseyPose14,
	sChanseyPose15,
	sChanseyPose16,
	sChanseyPose17,
	sChanseyPose18,
	sChanseyPose19,
	sChanseyPose20,
	sChanseyPose21,
	sChanseyPose22,
	sChanseyPose23,
	sChanseyPose24,
	sChanseyPose1,
	sChanseyPose2,
	sChanseyPose3,
	sChanseyPose4,
	sChanseyPose5,
	sChanseyPose6,
	sChanseyPose7,
	sChanseyPose8,
	sChanseyPose9,
	sChanseyPose10,
	sChanseyPose11,
	sChanseyPose12,
	sChanseyPose13,
	sChanseyPose14,
	sChanseyPose15,
	sChanseyPose16,
	sChanseyPose17,
	sChanseyPose18,
	sChanseyPose19,
	sChanseyPose20,
	sChanseyPose21,
	sChanseyPose22,
	sChanseyPose23,
	sChanseyPose24,
	sChanseyPose1,
	sChanseyPose74,
	sChanseyPose75,
	sChanseyPose4,
	sChanseyPose77,
	sChanseyPose78,
	sChanseyPose7,
	sChanseyPose80,
	sChanseyPose81,
	sChanseyPose10,
	sChanseyPose83,
	sChanseyPose84,
	sChanseyPose13,
	sChanseyPose86,
	sChanseyPose87,
	sChanseyPose16,
	sChanseyPose89,
	sChanseyPose90,
	sChanseyPose19,
	sChanseyPose92,
	sChanseyPose93,
	sChanseyPose22,
	sChanseyPose95,
	sChanseyPose96,
	sChanseyPose1,
	sChanseyPose74,
	sChanseyPose75,
	sChanseyPose100,
	sChanseyPose101,
	sChanseyPose4,
	sChanseyPose77,
	sChanseyPose78,
	sChanseyPose105,
	sChanseyPose106,
	sChanseyPose7,
	sChanseyPose80,
	sChanseyPose81,
	sChanseyPose110,
	sChanseyPose111,
	sChanseyPose10,
	sChanseyPose83,
	sChanseyPose84,
	sChanseyPose115,
	sChanseyPose116,
	sChanseyPose13,
	sChanseyPose86,
	sChanseyPose87,
	sChanseyPose120,
	sChanseyPose121,
	sChanseyPose16,
	sChanseyPose89,
	sChanseyPose90,
	sChanseyPose125,
	sChanseyPose126,
	sChanseyPose19,
	sChanseyPose92,
	sChanseyPose93,
	sChanseyPose130,
	sChanseyPose131,
	sChanseyPose22,
	sChanseyPose95,
	sChanseyPose96,
	sChanseyPose135,
	sChanseyPose136,
	sChanseyPose137,
	sChanseyPose138,
	sChanseyPose139,
	sChanseyPose140,
	sChanseyPose141,
	sChanseyPose142,
	sChanseyPose143,
	sChanseyPose144,
	sChanseyPose145,
	sChanseyPose146,
	sChanseyPose1,
	sChanseyPose2,
	sChanseyPose3,
	sChanseyPose4,
	sChanseyPose5,
	sChanseyPose6,
	sChanseyPose7,
	sChanseyPose8,
	sChanseyPose9,
	sChanseyPose10,
	sChanseyPose11,
	sChanseyPose12,
	sChanseyPose13,
	sChanseyPose14,
	sChanseyPose15,
	sChanseyPose16,
	sChanseyPose17,
	sChanseyPose18,
	sChanseyPose19,
	sChanseyPose20,
	sChanseyPose21,
	sChanseyPose22,
	sChanseyPose23,
	sChanseyPose24,
	sChanseyPose100,
	sChanseyPose135,
	sChanseyPose173,
	sChanseyPose174,
	sChanseyPose175,
	sChanseyPose176,
	sChanseyPose177,
	sChanseyPose105,
	sChanseyPose101,
	sChanseyPose106,
	sChanseyPose111,
	sChanseyPose116,
	sChanseyPose121,
	sChanseyPose126,
	sChanseyPose131,
	sChanseyPose136,
	sChanseyPose1,
	sChanseyPose2,
	sChanseyPose3,
	sChanseyPose4,
	sChanseyPose5,
	sChanseyPose6,
	sChanseyPose7,
	sChanseyPose8,
	sChanseyPose9,
	sChanseyPose10,
	sChanseyPose11,
	sChanseyPose12,
	sChanseyPose13,
	sChanseyPose14,
	sChanseyPose15,
	sChanseyPose16,
	sChanseyPose17,
	sChanseyPose18,
	sChanseyPose19,
	sChanseyPose20,
	sChanseyPose21,
	sChanseyPose22,
	sChanseyPose23,
	sChanseyPose24,
	sChanseyPose101,
	sChanseyPose136,
	sChanseyPose131,
	sChanseyPose126,
	sChanseyPose121,
	sChanseyPose116,
	sChanseyPose111,
	sChanseyPose106,
	sChanseyPose1,
	sChanseyPose22,
	sChanseyPose19,
	sChanseyPose16,
	sChanseyPose13,
	sChanseyPose10,
	sChanseyPose7,
	sChanseyPose4,
};

static const struct PositionSets sAxPositionsChansey[] = {
	[0] = { .set = { {0, -9}, {-4, -7}, {3, -7}, {0, -10} } },
	[1] = { .set = { {0, -8}, {-3, -6}, {4, -6}, {0, -9} } },
	[2] = { .set = { {0, -8}, {-5, -6}, {2, -6}, {0, -9} } },
	[3] = { .set = { {1, -9}, {6, -8}, {0, -7}, {-1, -8} } },
	[4] = { .set = { {1, -8}, {5, -7}, {-1, -6}, {-1, -7} } },
	[5] = { .set = { {1, -8}, {6, -7}, {1, -6}, {0, -7} } },
	[6] = { .set = { {6, -10}, {7, -8}, {5, -7}, {0, -8} } },
	[7] = { .set = { {6, -9}, {7, -7}, {4, -7}, {-2, -7} } },
	[8] = { .set = { {6, -9}, {8, -7}, {5, -7}, {-1, -6} } },
	[9] = { .set = { {4, -12}, {6, -11}, {8, -9}, {-2, -9} } },
	[10] = { .set = { {4, -12}, {7, -10}, {8, -6}, {-3, -7} } },
	[11] = { .set = { {4, -12}, {4, -10}, {7, -8}, {-2, -9} } },
	[12] = { .set = { {0, -14}, {2, -13}, {-3, -13}, {0, -11} } },
	[13] = { .set = { {-1, -13}, {1, -13}, {-5, -12}, {0, -10} } },
	[14] = { .set = { {0, -13}, {3, -11}, {-2, -13}, {-1, -10} } },
	[15] = { .set = { {-5, -12}, {-7, -11}, {-9, -9}, {1, -9} } },
	[16] = { .set = { {-5, -12}, {-8, -10}, {-9, -6}, {2, -7} } },
	[17] = { .set = { {-5, -12}, {-5, -10}, {-8, -8}, {1, -9} } },
	[18] = { .set = { {-7, -10}, {-8, -8}, {-6, -7}, {-1, -8} } },
	[19] = { .set = { {-7, -9}, {-8, -7}, {-5, -7}, {1, -7} } },
	[20] = { .set = { {-7, -9}, {-9, -7}, {-6, -7}, {0, -6} } },
	[21] = { .set = { {-2, -9}, {-7, -8}, {-1, -7}, {0, -8} } },
	[22] = { .set = { {-2, -8}, {-6, -7}, {0, -6}, {0, -7} } },
	[23] = { .set = { {-2, -8}, {-7, -7}, {-2, -6}, {-1, -7} } },
	[24] = { .set = { {0, -9}, {-4, -7}, {3, -7}, {0, -10} } },
	[25] = { .set = { {0, -8}, {-3, -6}, {4, -6}, {0, -9} } },
	[26] = { .set = { {0, -8}, {-5, -6}, {2, -6}, {0, -9} } },
	[27] = { .set = { {1, -9}, {6, -8}, {0, -7}, {-1, -8} } },
	[28] = { .set = { {1, -8}, {5, -7}, {-1, -6}, {-1, -7} } },
	[29] = { .set = { {1, -8}, {6, -7}, {1, -6}, {0, -7} } },
	[30] = { .set = { {6, -10}, {7, -8}, {5, -7}, {0, -8} } },
	[31] = { .set = { {6, -9}, {7, -7}, {4, -7}, {-2, -7} } },
	[32] = { .set = { {6, -9}, {8, -7}, {5, -7}, {-1, -6} } },
	[33] = { .set = { {4, -12}, {6, -11}, {8, -9}, {-2, -9} } },
	[34] = { .set = { {4, -12}, {7, -10}, {8, -6}, {-3, -7} } },
	[35] = { .set = { {4, -12}, {4, -10}, {7, -8}, {-2, -9} } },
	[36] = { .set = { {0, -14}, {2, -13}, {-3, -13}, {0, -11} } },
	[37] = { .set = { {-1, -13}, {1, -13}, {-5, -12}, {0, -10} } },
	[38] = { .set = { {0, -13}, {3, -11}, {-2, -13}, {-1, -10} } },
	[39] = { .set = { {-5, -12}, {-7, -11}, {-9, -9}, {1, -9} } },
	[40] = { .set = { {-5, -12}, {-8, -10}, {-9, -6}, {2, -7} } },
	[41] = { .set = { {-5, -12}, {-5, -10}, {-8, -8}, {1, -9} } },
	[42] = { .set = { {-7, -10}, {-8, -8}, {-6, -7}, {-1, -8} } },
	[43] = { .set = { {-7, -9}, {-8, -7}, {-5, -7}, {1, -7} } },
	[44] = { .set = { {-7, -9}, {-9, -7}, {-6, -7}, {0, -6} } },
	[45] = { .set = { {-2, -9}, {-7, -8}, {-1, -7}, {0, -8} } },
	[46] = { .set = { {-2, -8}, {-6, -7}, {0, -6}, {0, -7} } },
	[47] = { .set = { {-2, -8}, {-7, -7}, {-2, -6}, {-1, -7} } },
	[48] = { .set = { {0, -9}, {-4, -7}, {3, -7}, {0, -10} } },
	[49] = { .set = { {0, -8}, {-3, -6}, {4, -6}, {0, -9} } },
	[50] = { .set = { {0, -8}, {-5, -6}, {2, -6}, {0, -9} } },
	[51] = { .set = { {1, -9}, {6, -8}, {0, -7}, {-1, -8} } },
	[52] = { .set = { {1, -8}, {5, -7}, {-1, -6}, {-1, -7} } },
	[53] = { .set = { {1, -8}, {6, -7}, {1, -6}, {0, -7} } },
	[54] = { .set = { {6, -10}, {7, -8}, {5, -7}, {0, -8} } },
	[55] = { .set = { {6, -9}, {7, -7}, {4, -7}, {-2, -7} } },
	[56] = { .set = { {6, -9}, {8, -7}, {5, -7}, {-1, -6} } },
	[57] = { .set = { {4, -12}, {6, -11}, {8, -9}, {-2, -9} } },
	[58] = { .set = { {4, -12}, {7, -10}, {8, -6}, {-3, -7} } },
	[59] = { .set = { {4, -12}, {4, -10}, {7, -8}, {-2, -9} } },
	[60] = { .set = { {0, -14}, {2, -13}, {-3, -13}, {0, -11} } },
	[61] = { .set = { {-1, -13}, {1, -13}, {-5, -12}, {0, -10} } },
	[62] = { .set = { {0, -13}, {3, -11}, {-2, -13}, {-1, -10} } },
	[63] = { .set = { {-5, -12}, {-7, -11}, {-9, -9}, {1, -9} } },
	[64] = { .set = { {-5, -12}, {-8, -10}, {-9, -6}, {2, -7} } },
	[65] = { .set = { {-5, -12}, {-5, -10}, {-8, -8}, {1, -9} } },
	[66] = { .set = { {-7, -10}, {-8, -8}, {-6, -7}, {-1, -8} } },
	[67] = { .set = { {-7, -9}, {-8, -7}, {-5, -7}, {1, -7} } },
	[68] = { .set = { {-7, -9}, {-9, -7}, {-6, -7}, {0, -6} } },
	[69] = { .set = { {-2, -9}, {-7, -8}, {-1, -7}, {0, -8} } },
	[70] = { .set = { {-2, -8}, {-6, -7}, {0, -6}, {0, -7} } },
	[71] = { .set = { {-2, -8}, {-7, -7}, {-2, -6}, {-1, -7} } },
	[72] = { .set = { {0, -9}, {-4, -7}, {3, -7}, {0, -10} } },
	[73] = { .set = { {0, -18}, {-3, -15}, {2, -15}, {-1, -13} } },
	[74] = { .set = { {0, -8}, {-9, -4}, {8, -4}, {0, -7} } },
	[75] = { .set = { {1, -9}, {6, -8}, {0, -7}, {-1, -8} } },
	[76] = { .set = { {0, -15}, {6, -14}, {-1, -12}, {-2, -12} } },
	[77] = { .set = { {2, -8}, {9, -8}, {-4, -3}, {-1, -8} } },
	[78] = { .set = { {6, -10}, {7, -8}, {5, -7}, {0, -8} } },
	[79] = { .set = { {5, -16}, {7, -15}, {5, -11}, {-1, -12} } },
	[80] = { .set = { {7, -8}, {8, -9}, {3, -4}, {0, -9} } },
	[81] = { .set = { {4, -12}, {6, -11}, {8, -9}, {-2, -9} } },
	[82] = { .set = { {5, -17}, {7, -15}, {9, -12}, {-2, -10} } },
	[83] = { .set = { {6, -11}, {0, -12}, {9, -5}, {-1, -9} } },
	[84] = { .set = { {0, -14}, {2, -13}, {-3, -13}, {0, -11} } },
	[85] = { .set = { {0, -21}, {4, -20}, {-4, -20}, {-1, -14} } },
	[86] = { .set = { {0, -14}, {9, -8}, {-11, -8}, {0, -11} } },
	[87] = { .set = { {-5, -12}, {-7, -11}, {-9, -9}, {1, -9} } },
	[88] = { .set = { {-6, -17}, {-8, -15}, {-10, -12}, {1, -10} } },
	[89] = { .set = { {-7, -11}, {-1, -12}, {-10, -5}, {0, -9} } },
	[90] = { .set = { {-7, -10}, {-8, -8}, {-6, -7}, {-1, -8} } },
	[91] = { .set = { {-6, -16}, {-8, -15}, {-6, -11}, {0, -12} } },
	[92] = { .set = { {-8, -8}, {-9, -9}, {-4, -4}, {-1, -9} } },
	[93] = { .set = { {-2, -9}, {-7, -8}, {-1, -7}, {0, -8} } },
	[94] = { .set = { {-1, -15}, {-7, -14}, {0, -12}, {1, -12} } },
	[95] = { .set = { {-3, -8}, {-10, -8}, {3, -3}, {0, -8} } },
	[96] = { .set = { {0, -9}, {-4, -7}, {3, -7}, {0, -10} } },
	[97] = { .set = { {0, -18}, {-3, -15}, {2, -15}, {-1, -13} } },
	[98] = { .set = { {0, -8}, {-9, -4}, {8, -4}, {0, -7} } },
	[99] = { .set = { {0, -8}, {-3, -7}, {2, -7}, {0, -7} } },
	[100] = { .set = { {0, -9}, {-4, -7}, {3, -7}, {0, -8} } },
	[101] = { .set = { {1, -9}, {6, -8}, {0, -7}, {-1, -8} } },
	[102] = { .set = { {0, -15}, {6, -14}, {-1, -12}, {-2, -12} } },
	[103] = { .set = { {2, -8}, {9, -8}, {-4, -3}, {-1, -8} } },
	[104] = { .set = { {2, -8}, {5, -7}, {2, -6}, {-1, -9} } },
	[105] = { .set = { {2, -9}, {5, -8}, {1, -7}, {0, -9} } },
	[106] = { .set = { {6, -10}, {7, -8}, {5, -7}, {0, -8} } },
	[107] = { .set = { {5, -16}, {7, -15}, {5, -11}, {-1, -12} } },
	[108] = { .set = { {7, -8}, {8, -9}, {3, -4}, {0, -9} } },
	[109] = { .set = { {8, -8}, {8, -7}, {6, -8}, {0, -9} } },
	[110] = { .set = { {6, -9}, {7, -9}, {4, -8}, {-1, -9} } },
	[111] = { .set = { {4, -12}, {6, -11}, {8, -9}, {-2, -9} } },
	[112] = { .set = { {5, -17}, {7, -15}, {9, -12}, {-2, -10} } },
	[113] = { .set = { {6, -11}, {0, -12}, {9, -5}, {-1, -9} } },
	[114] = { .set = { {5, -12}, {6, -12}, {8, -9}, {0, -11} } },
	[115] = { .set = { {4, -12}, {6, -12}, {8, -7}, {-2, -10} } },
	[116] = { .set = { {0, -14}, {2, -13}, {-3, -13}, {0, -11} } },
	[117] = { .set = { {0, -21}, {4, -20}, {-4, -20}, {-1, -14} } },
	[118] = { .set = { {0, -14}, {9, -8}, {-11, -8}, {0, -11} } },
	[119] = { .set = { {0, -15}, {3, -15}, {-4, -15}, {0, -12} } },
	[120] = { .set = { {0, -13}, {10, -10}, {-11, -10}, {0, -10} } },
	[121] = { .set = { {-5, -12}, {-7, -11}, {-9, -9}, {1, -9} } },
	[122] = { .set = { {-6, -17}, {-8, -15}, {-10, -12}, {1, -10} } },
	[123] = { .set = { {-7, -11}, {-1, -12}, {-10, -5}, {0, -9} } },
	[124] = { .set = { {-6, -12}, {-7, -12}, {-9, -9}, {-1, -11} } },
	[125] = { .set = { {-5, -12}, {-7, -12}, {-9, -7}, {1, -10} } },
	[126] = { .set = { {-7, -10}, {-8, -8}, {-6, -7}, {-1, -8} } },
	[127] = { .set = { {-6, -16}, {-8, -15}, {-6, -11}, {0, -12} } },
	[128] = { .set = { {-8, -8}, {-9, -9}, {-4, -4}, {-1, -9} } },
	[129] = { .set = { {-9, -8}, {-9, -7}, {-7, -8}, {-1, -9} } },
	[130] = { .set = { {-7, -9}, {-8, -9}, {-5, -8}, {0, -9} } },
	[131] = { .set = { {-2, -9}, {-7, -8}, {-1, -7}, {0, -8} } },
	[132] = { .set = { {-1, -15}, {-7, -14}, {0, -12}, {1, -12} } },
	[133] = { .set = { {-3, -8}, {-10, -8}, {3, -3}, {0, -8} } },
	[134] = { .set = { {-3, -8}, {-6, -7}, {-3, -6}, {0, -9} } },
	[135] = { .set = { {-3, -9}, {-6, -8}, {-2, -7}, {-1, -9} } },
	[136] = { .set = { {-2, -6}, {-6, -5}, {-1, -4}, {1, -6} } },
	[137] = { .set = { {-1, -5}, {-5, -5}, {0, -3}, {2, -5} } },
	[138] = { .set = { {0, -7}, {-2, -6}, {1, -6}, {0, -9} } },
	[139] = { .set = { {2, -7}, {3, -5}, {1, -4}, {-1, -7} } },
	[140] = { .set = { {4, -8}, {5, -6}, {3, -6}, {-3, -8} } },
	[141] = { .set = { {5, -12}, {6, -10}, {8, -8}, {-1, -9} } },
	[142] = { .set = { {0, -11}, {3, -10}, {-5, -10}, {0, -8} } },
	[143] = { .set = { {-6, -12}, {-7, -10}, {-9, -8}, {0, -9} } },
	[144] = { .set = { {-5, -8}, {-6, -6}, {-4, -6}, {2, -8} } },
	[145] = { .set = { {-3, -7}, {-4, -5}, {-2, -4}, {0, -7} } },
	[146] = { .set = { {0, -9}, {-4, -7}, {3, -7}, {0, -10} } },
	[147] = { .set = { {0, -8}, {-3, -6}, {4, -6}, {0, -9} } },
	[148] = { .set = { {0, -8}, {-5, -6}, {2, -6}, {0, -9} } },
	[149] = { .set = { {1, -9}, {6, -8}, {0, -7}, {-1, -8} } },
	[150] = { .set = { {1, -8}, {5, -7}, {-1, -6}, {-1, -7} } },
	[151] = { .set = { {1, -8}, {6, -7}, {1, -6}, {0, -7} } },
	[152] = { .set = { {6, -10}, {7, -8}, {5, -7}, {0, -8} } },
	[153] = { .set = { {6, -9}, {7, -7}, {4, -7}, {-2, -7} } },
	[154] = { .set = { {6, -9}, {8, -7}, {5, -7}, {-1, -6} } },
	[155] = { .set = { {4, -12}, {6, -11}, {8, -9}, {-2, -9} } },
	[156] = { .set = { {4, -12}, {7, -10}, {8, -6}, {-3, -7} } },
	[157] = { .set = { {4, -12}, {4, -10}, {7, -8}, {-2, -9} } },
	[158] = { .set = { {0, -14}, {2, -13}, {-3, -13}, {0, -11} } },
	[159] = { .set = { {-1, -13}, {1, -13}, {-5, -12}, {0, -10} } },
	[160] = { .set = { {0, -13}, {3, -11}, {-2, -13}, {-1, -10} } },
	[161] = { .set = { {-5, -12}, {-7, -11}, {-9, -9}, {1, -9} } },
	[162] = { .set = { {-5, -12}, {-8, -10}, {-9, -6}, {2, -7} } },
	[163] = { .set = { {-5, -12}, {-5, -10}, {-8, -8}, {1, -9} } },
	[164] = { .set = { {-7, -10}, {-8, -8}, {-6, -7}, {-1, -8} } },
	[165] = { .set = { {-7, -9}, {-8, -7}, {-5, -7}, {1, -7} } },
	[166] = { .set = { {-7, -9}, {-9, -7}, {-6, -7}, {0, -6} } },
	[167] = { .set = { {-2, -9}, {-7, -8}, {-1, -7}, {0, -8} } },
	[168] = { .set = { {-2, -8}, {-6, -7}, {0, -6}, {0, -7} } },
	[169] = { .set = { {-2, -8}, {-7, -7}, {-2, -6}, {-1, -7} } },
	[170] = { .set = { {0, -8}, {-3, -7}, {2, -7}, {0, -7} } },
	[171] = { .set = { {-3, -8}, {-6, -7}, {-3, -6}, {0, -9} } },
	[172] = { .set = { {-8, -8}, {-8, -7}, {-6, -8}, {0, -9} } },
	[173] = { .set = { {-5, -11}, {-6, -11}, {-8, -8}, {0, -10} } },
	[174] = { .set = { {0, -13}, {3, -13}, {-4, -13}, {0, -10} } },
	[175] = { .set = { {4, -11}, {5, -11}, {7, -8}, {-1, -10} } },
	[176] = { .set = { {7, -8}, {7, -7}, {5, -8}, {-1, -9} } },
	[177] = { .set = { {2, -8}, {5, -7}, {2, -6}, {-1, -9} } },
	[178] = { .set = { {0, -9}, {-4, -7}, {3, -7}, {0, -8} } },
	[179] = { .set = { {2, -9}, {5, -8}, {1, -7}, {0, -9} } },
	[180] = { .set = { {6, -9}, {7, -9}, {4, -8}, {-1, -9} } },
	[181] = { .set = { {4, -12}, {6, -12}, {8, -7}, {-2, -10} } },
	[182] = { .set = { {0, -13}, {10, -10}, {-11, -10}, {0, -10} } },
	[183] = { .set = { {-5, -12}, {-7, -12}, {-9, -7}, {1, -10} } },
	[184] = { .set = { {-7, -9}, {-8, -9}, {-5, -8}, {0, -9} } },
	[185] = { .set = { {-3, -9}, {-6, -8}, {-2, -7}, {-1, -9} } },
	[186] = { .set = { {0, -9}, {-4, -7}, {3, -7}, {0, -10} } },
	[187] = { .set = { {0, -8}, {-3, -6}, {4, -6}, {0, -9} } },
	[188] = { .set = { {0, -8}, {-5, -6}, {2, -6}, {0, -9} } },
	[189] = { .set = { {1, -9}, {6, -8}, {0, -7}, {-1, -8} } },
	[190] = { .set = { {1, -8}, {5, -7}, {-1, -6}, {-1, -7} } },
	[191] = { .set = { {1, -8}, {6, -7}, {1, -6}, {0, -7} } },
	[192] = { .set = { {6, -10}, {7, -8}, {5, -7}, {0, -8} } },
	[193] = { .set = { {6, -9}, {7, -7}, {4, -7}, {-2, -7} } },
	[194] = { .set = { {6, -9}, {8, -7}, {5, -7}, {-1, -6} } },
	[195] = { .set = { {4, -12}, {6, -11}, {8, -9}, {-2, -9} } },
	[196] = { .set = { {4, -12}, {7, -10}, {8, -6}, {-3, -7} } },
	[197] = { .set = { {4, -12}, {4, -10}, {7, -8}, {-2, -9} } },
	[198] = { .set = { {0, -14}, {2, -13}, {-3, -13}, {0, -11} } },
	[199] = { .set = { {-1, -13}, {1, -13}, {-5, -12}, {0, -10} } },
	[200] = { .set = { {0, -13}, {3, -11}, {-2, -13}, {-1, -10} } },
	[201] = { .set = { {-5, -12}, {-7, -11}, {-9, -9}, {1, -9} } },
	[202] = { .set = { {-5, -12}, {-8, -10}, {-9, -6}, {2, -7} } },
	[203] = { .set = { {-5, -12}, {-5, -10}, {-8, -8}, {1, -9} } },
	[204] = { .set = { {-7, -10}, {-8, -8}, {-6, -7}, {-1, -8} } },
	[205] = { .set = { {-7, -9}, {-8, -7}, {-5, -7}, {1, -7} } },
	[206] = { .set = { {-7, -9}, {-9, -7}, {-6, -7}, {0, -6} } },
	[207] = { .set = { {-2, -9}, {-7, -8}, {-1, -7}, {0, -8} } },
	[208] = { .set = { {-2, -8}, {-6, -7}, {0, -6}, {0, -7} } },
	[209] = { .set = { {-2, -8}, {-7, -7}, {-2, -6}, {-1, -7} } },
	[210] = { .set = { {0, -9}, {-4, -7}, {3, -7}, {0, -8} } },
	[211] = { .set = { {-3, -9}, {-6, -8}, {-2, -7}, {-1, -9} } },
	[212] = { .set = { {-7, -9}, {-8, -9}, {-5, -8}, {0, -9} } },
	[213] = { .set = { {-5, -12}, {-7, -12}, {-9, -7}, {1, -10} } },
	[214] = { .set = { {0, -13}, {10, -10}, {-11, -10}, {0, -10} } },
	[215] = { .set = { {4, -12}, {6, -12}, {8, -7}, {-2, -10} } },
	[216] = { .set = { {6, -9}, {7, -9}, {4, -8}, {-1, -9} } },
	[217] = { .set = { {2, -9}, {5, -8}, {1, -7}, {0, -9} } },
	[218] = { .set = { {0, -9}, {-4, -7}, {3, -7}, {0, -10} } },
	[219] = { .set = { {-2, -9}, {-7, -8}, {-1, -7}, {0, -8} } },
	[220] = { .set = { {-7, -10}, {-8, -8}, {-6, -7}, {-1, -8} } },
	[221] = { .set = { {-5, -12}, {-7, -11}, {-9, -9}, {1, -9} } },
	[222] = { .set = { {0, -14}, {2, -13}, {-3, -13}, {0, -11} } },
	[223] = { .set = { {4, -12}, {6, -11}, {8, -9}, {-2, -9} } },
	[224] = { .set = { {6, -10}, {7, -8}, {5, -7}, {0, -8} } },
	[225] = { .set = { {1, -9}, {6, -8}, {0, -7}, {-1, -8} } },
};

static const ax_anim *const sChanseyAnimTable1[] = {
	gAxSharedAnim_02602,
	gAxSharedAnim_02678,
	gAxSharedAnim_02687,
	gAxSharedAnim_02696,
	gAxSharedAnim_02614,
	gAxSharedAnim_02636,
	gAxSharedAnim_02649,
	gAxSharedAnim_02658,
};

static const ax_anim *const sChanseyAnimTable2[] = {
	gAxSharedAnim_01561,
	gAxSharedAnim_01729,
	gAxSharedAnim_01818,
	gAxSharedAnim_01850,
	gAxSharedAnim_01889,
	gAxSharedAnim_01906,
	gAxSharedAnim_01930,
	sChanseyAnims_2_8,
};

static const ax_anim *const sChanseyAnimTable3[] = {
	gAxSharedAnim_01964,
	gAxSharedAnim_01983,
	gAxSharedAnim_01992,
	gAxSharedAnim_02009,
	gAxSharedAnim_02028,
	gAxSharedAnim_02041,
	gAxSharedAnim_02060,
	sChanseyAnims_3_8,
};

static const ax_anim *const sChanseyAnimTable4[] = {
	sChanseyAnims_4_1,
	sChanseyAnims_4_2,
	sChanseyAnims_4_3,
	sChanseyAnims_4_4,
	sChanseyAnims_4_5,
	sChanseyAnims_4_6,
	sChanseyAnims_4_7,
	sChanseyAnims_4_8,
};

static const ax_anim *const sChanseyAnimTable5[] = {
	sChanseyAnims_5_1,
	sChanseyAnims_5_2,
	sChanseyAnims_5_3,
	sChanseyAnims_5_4,
	sChanseyAnims_5_5,
	sChanseyAnims_5_6,
	sChanseyAnims_5_7,
	sChanseyAnims_5_8,
};

static const ax_anim *const sChanseyAnimTable6[] = {
	gAxSharedAnim_02408,
	gAxSharedAnim_02408,
	gAxSharedAnim_02408,
	gAxSharedAnim_02408,
	gAxSharedAnim_02408,
	gAxSharedAnim_02408,
	gAxSharedAnim_02408,
	gAxSharedAnim_02408,
};

static const ax_anim *const sChanseyAnimTable7[] = {
	gAxSharedAnim_00466,
	gAxSharedAnim_00479,
	gAxSharedAnim_00487,
	gAxSharedAnim_00496,
	gAxSharedAnim_00508,
	gAxSharedAnim_00517,
	gAxSharedAnim_00523,
	gAxSharedAnim_00529,
};

static const ax_anim *const sChanseyAnimTable8[] = {
	sChanseyAnims_8_1,
	sChanseyAnims_8_2,
	sChanseyAnims_8_3,
	sChanseyAnims_8_4,
	sChanseyAnims_8_5,
	sChanseyAnims_8_6,
	sChanseyAnims_8_7,
	sChanseyAnims_8_8,
};

static const ax_anim *const sChanseyAnimTable9[] = {
	gAxSharedAnim_00797,
	sChanseyAnims_9_2,
	sChanseyAnims_9_3,
	sChanseyAnims_9_4,
	gAxSharedAnim_00846,
	sChanseyAnims_9_6,
	sChanseyAnims_9_7,
	sChanseyAnims_9_8,
};

static const ax_anim *const sChanseyAnimTable10[] = {
	gAxSharedAnim_00905,
	gAxSharedAnim_00918,
	gAxSharedAnim_00930,
	gAxSharedAnim_00942,
	gAxSharedAnim_00955,
	gAxSharedAnim_00965,
	gAxSharedAnim_00978,
	gAxSharedAnim_00993,
};

static const ax_anim *const sChanseyAnimTable11[] = {
	gAxSharedAnim_01006,
	gAxSharedAnim_01057,
	gAxSharedAnim_01105,
	gAxSharedAnim_01152,
	gAxSharedAnim_01187,
	gAxSharedAnim_01225,
	gAxSharedAnim_01264,
	gAxSharedAnim_01295,
};

static const ax_anim *const sChanseyAnimTable12[] = {
	gAxSharedAnim_01337,
	gAxSharedAnim_01414,
	gAxSharedAnim_01392,
	gAxSharedAnim_01380,
	gAxSharedAnim_01379,
	gAxSharedAnim_01368,
	gAxSharedAnim_01354,
	gAxSharedAnim_01338,
};

static const ax_anim *const sChanseyAnimTable13[] = {
	gAxSharedAnim_01422,
	gAxSharedAnim_01464,
	gAxSharedAnim_01461,
	gAxSharedAnim_01456,
	gAxSharedAnim_01446,
	gAxSharedAnim_01443,
	gAxSharedAnim_01438,
	gAxSharedAnim_01429,
};

static const ax_anim *const *const sAxAnimationsChansey[] = {
	sChanseyAnimTable1,
	sChanseyAnimTable2,
	sChanseyAnimTable3,
	sChanseyAnimTable4,
	sChanseyAnimTable5,
	sChanseyAnimTable6,
	sChanseyAnimTable7,
	sChanseyAnimTable8,
	sChanseyAnimTable9,
	sChanseyAnimTable10,
	sChanseyAnimTable11,
	sChanseyAnimTable12,
	sChanseyAnimTable13,
};

static const ax_sprite *const sAxSpritesChansey[] = {
	sChanseySprites1,
	sChanseySprites2,
	sChanseySprites3,
	sChanseySprites4,
	sChanseySprites5,
	sChanseySprites6,
	sChanseySprites7,
	sChanseySprites8,
	sChanseySprites9,
	sChanseySprites10,
	sChanseySprites11,
	sChanseySprites12,
	sChanseySprites13,
	sChanseySprites14,
	sChanseySprites15,
	sChanseySprites16,
	sChanseySprites17,
	sChanseySprites18,
	sChanseySprites19,
	sChanseySprites20,
	sChanseySprites21,
	sChanseySprites22,
	sChanseySprites23,
	sChanseySprites24,
	sChanseySprites25,
	sChanseySprites26,
	sChanseySprites27,
	sChanseySprites28,
	sChanseySprites29,
	sChanseySprites30,
	sChanseySprites31,
	sChanseySprites32,
	sChanseySprites33,
	sChanseySprites34,
	sChanseySprites35,
	sChanseySprites36,
	sChanseySprites37,
	sChanseySprites38,
	sChanseySprites39,
	sChanseySprites40,
	sChanseySprites41,
	sChanseySprites42,
};

static const axmain sAxMainChansey = {
	.poses = sAxPosesChansey,
	.animations = sAxAnimationsChansey,
	.animCount = ARRAY_COUNT(sAxAnimationsChansey),
	.spriteData = sAxSpritesChansey,
	.positions = sAxPositionsChansey,
};
