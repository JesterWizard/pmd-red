/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainYanma;
const SiroArchive gAxYanma = {"SIRO", &sAxMainYanma};

static const ax_pose sYanmaPose1[] = {
	AX_POSE(0, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose2[] = {
	AX_POSE(1, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose3[] = {
	AX_POSE(2, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose4[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose5[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose6[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose7[] = {
	AX_POSE(6, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose8[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose9[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose10[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose11[] = {
	AX_POSE(6, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose12[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose13[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose14[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose15[] = {
	AX_POSE(2, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose16[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose50[] = {
	AX_POSE(10, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose51[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose53[] = {
	AX_POSE(12, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose54[] = {
	AX_POSE(13, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose56[] = {
	AX_POSE(14, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose57[] = {
	AX_POSE(15, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose59[] = {
	AX_POSE(16, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose60[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose62[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose63[] = {
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose65[] = {
	AX_POSE(16, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose66[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose68[] = {
	AX_POSE(14, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose69[] = {
	AX_POSE(15, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose71[] = {
	AX_POSE(12, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose72[] = {
	AX_POSE(13, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose81[] = {
	AX_POSE(20, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose82[] = {
	AX_POSE(21, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose83[] = {
	AX_POSE(22, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose84[] = {
	AX_POSE(23, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose85[] = {
	AX_POSE(24, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose86[] = {
	AX_POSE(25, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose87[] = {
	AX_POSE(26, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose88[] = {
	AX_POSE(25, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose89[] = {
	AX_POSE(24, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose90[] = {
	AX_POSE(23, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose116[] = {
	AX_POSE(12, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose117[] = {
	AX_POSE(14, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose118[] = {
	AX_POSE(16, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose120[] = {
	AX_POSE(16, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sYanmaPose122[] = {
	AX_POSE(12, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_anim sYanmaAnims_1_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 1, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {2, -4}, .shadow = {2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 1, .offset = {2, -4}, .shadow = {2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {2, -4}, .shadow = {2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 1, .offset = {2, -4}, .shadow = {2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 1, .offset = {-3, -3}, .shadow = {-3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {-3, -3}, .shadow = {-3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 1, .offset = {-3, -3}, .shadow = {-3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {-3, -3}, .shadow = {-3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 1, .offset = {-3, -3}, .shadow = {-3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {-2, -2}, .shadow = {-2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 1, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 1, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_1_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {1, -3}, .shadow = {2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {2, -6}, .shadow = {3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {2, -6}, .shadow = {3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {2, -6}, .shadow = {3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {2, -6}, .shadow = {3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {-3, -2}, .shadow = {-2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {-3, -2}, .shadow = {-2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {-3, -2}, .shadow = {-2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {-3, -2}, .shadow = {-2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {-3, -2}, .shadow = {-2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {-2, -1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_1_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 5, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {-2, -4}, .shadow = {-2, -4} },
	{ .frames = 4, .unkFlags = 0, .poseId = 5, .offset = {-2, -4}, .shadow = {-2, -4} },
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {-2, -4}, .shadow = {-2, -4} },
	{ .frames = 4, .unkFlags = 0, .poseId = 5, .offset = {-2, -4}, .shadow = {-2, -4} },
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {-1, -3}, .shadow = {-1, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 5, .offset = {1, -2}, .shadow = {1, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 5, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 5, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 5, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 5, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_1_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 7, .offset = {-1, -3}, .shadow = {-2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {-2, -6}, .shadow = {-3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 7, .offset = {-2, -6}, .shadow = {-3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {-2, -6}, .shadow = {-3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 7, .offset = {-2, -6}, .shadow = {-3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 7, .offset = {3, -2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {3, -2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 7, .offset = {3, -2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {3, -2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 7, .offset = {3, -2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {2, -1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 7, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 7, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_1_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {-2, -4}, .shadow = {-2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {-2, -4}, .shadow = {-2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {-2, -4}, .shadow = {-2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {-2, -4}, .shadow = {-2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {3, -3}, .shadow = {3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {3, -3}, .shadow = {3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {3, -3}, .shadow = {3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {3, -3}, .shadow = {3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {3, -3}, .shadow = {3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {2, -2}, .shadow = {2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_1_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 11, .offset = {1, -3}, .shadow = {2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {2, -6}, .shadow = {3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 11, .offset = {2, -6}, .shadow = {3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {2, -6}, .shadow = {3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 11, .offset = {2, -6}, .shadow = {3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 11, .offset = {-3, -2}, .shadow = {-2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {-3, -2}, .shadow = {-2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 11, .offset = {-3, -2}, .shadow = {-2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {-3, -2}, .shadow = {-2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 11, .offset = {-3, -2}, .shadow = {-2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {-2, -1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 11, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 11, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_1_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 13, .offset = {0, -3}, .shadow = {0, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, -6}, .shadow = {0, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 13, .offset = {0, -6}, .shadow = {0, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, -6}, .shadow = {0, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 13, .offset = {0, -6}, .shadow = {0, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 13, .offset = {0, -2}, .shadow = {0, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, -2}, .shadow = {0, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 13, .offset = {0, -2}, .shadow = {0, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, -2}, .shadow = {0, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 13, .offset = {0, -2}, .shadow = {0, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, -1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 13, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 13, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_1_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {-1, -3}, .shadow = {-2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {-2, -6}, .shadow = {-3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {-2, -6}, .shadow = {-3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {-2, -6}, .shadow = {-3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {-2, -6}, .shadow = {-3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {3, -2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {3, -2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {3, -2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {3, -2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {3, -2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {2, -1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 17, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 16, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 17, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 16, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 17, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 16, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 17, .offset = {-1, 22}, .shadow = {-1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 16, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 17, .offset = {-1, 22}, .shadow = {-1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 16, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 19, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 18, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 19, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 18, .offset = {3, 5}, .shadow = {3, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 19, .offset = {9, 12}, .shadow = {9, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 18, .offset = {19, 23}, .shadow = {19, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 19, .offset = {18, 23}, .shadow = {18, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 18, .offset = {19, 23}, .shadow = {19, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 19, .offset = {18, 23}, .shadow = {18, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 18, .offset = {5, 7}, .shadow = {5, 7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 21, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 20, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 20, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 21, .offset = {9, 2}, .shadow = {9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 20, .offset = {19, 3}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 21, .offset = {19, 4}, .shadow = {19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 20, .offset = {19, 3}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 21, .offset = {19, 4}, .shadow = {19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 20, .offset = {5, 0}, .shadow = {5, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 23, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 22, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 23, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 22, .offset = {4, -4}, .shadow = {4, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 23, .offset = {11, -10}, .shadow = {11, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 22, .offset = {19, -17}, .shadow = {19, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 23, .offset = {18, -17}, .shadow = {18, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 22, .offset = {19, -17}, .shadow = {19, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 23, .offset = {18, -17}, .shadow = {18, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 22, .offset = {6, -6}, .shadow = {6, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 24, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, -8}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -18}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 25, .offset = {-1, -18}, .shadow = {-1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -18}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {-1, -18}, .shadow = {-1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 26, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 26, .offset = {-4, -4}, .shadow = {-4, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {-11, -10}, .shadow = {-11, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-19, -17}, .shadow = {-19, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 27, .offset = {-18, -17}, .shadow = {-18, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-19, -17}, .shadow = {-19, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-18, -17}, .shadow = {-18, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-6, -6}, .shadow = {-6, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 28, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 28, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {-9, 2}, .shadow = {-9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {-19, 3}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 29, .offset = {-19, 4}, .shadow = {-19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {-19, 3}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-19, 4}, .shadow = {-19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {-5, 0}, .shadow = {-5, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 30, .offset = {-3, 5}, .shadow = {-3, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {-9, 12}, .shadow = {-9, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-19, 23}, .shadow = {-19, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 31, .offset = {-18, 23}, .shadow = {-18, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-19, 23}, .shadow = {-19, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {-18, 23}, .shadow = {-18, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-5, 7}, .shadow = {-5, 7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 32, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 32, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 33, .offset = {-1, 22}, .shadow = {-1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-1, 22}, .shadow = {-1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 34, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 34, .offset = {3, 5}, .shadow = {3, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {9, 12}, .shadow = {9, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {19, 23}, .shadow = {19, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {18, 23}, .shadow = {18, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {19, 23}, .shadow = {19, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {18, 23}, .shadow = {18, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {5, 7}, .shadow = {5, 7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 36, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {9, 2}, .shadow = {9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {19, 3}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 37, .offset = {19, 4}, .shadow = {19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {19, 3}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {19, 4}, .shadow = {19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {5, 0}, .shadow = {5, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 38, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 38, .offset = {4, -4}, .shadow = {4, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {11, -10}, .shadow = {11, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {19, -17}, .shadow = {19, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {18, -17}, .shadow = {18, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {19, -17}, .shadow = {19, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {18, -17}, .shadow = {18, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {6, -6}, .shadow = {6, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 40, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 40, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {0, -8}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, -18}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 41, .offset = {-1, -18}, .shadow = {-1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, -18}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-1, -18}, .shadow = {-1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 42, .offset = {-4, -4}, .shadow = {-4, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {-11, -10}, .shadow = {-11, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-19, -17}, .shadow = {-19, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 43, .offset = {-18, -17}, .shadow = {-18, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-19, -17}, .shadow = {-19, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-18, -17}, .shadow = {-18, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-6, -6}, .shadow = {-6, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 44, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {-9, 2}, .shadow = {-9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-19, 3}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 45, .offset = {-19, 4}, .shadow = {-19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-19, 3}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-19, 4}, .shadow = {-19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-5, 0}, .shadow = {-5, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 46, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 46, .offset = {-3, 5}, .shadow = {-3, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {-9, 12}, .shadow = {-9, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-19, 23}, .shadow = {-19, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-18, 23}, .shadow = {-18, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-19, 23}, .shadow = {-19, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-18, 23}, .shadow = {-18, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-5, 7}, .shadow = {-5, 7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 49, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 49, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 52, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 52, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 55, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 55, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 58, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 58, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 61, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 61, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 64, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 64, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 67, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 70, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 70, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_8_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 91, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 91, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 91, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 91, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_8_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 92, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 92, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 92, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 92, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_8_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 95, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 95, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 95, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 95, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_8_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 96, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 97, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 97, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 97, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 96, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 97, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_8_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_8_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 100, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 101, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 100, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 101, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 100, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 101, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 100, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 101, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_8_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 103, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 103, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 103, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 103, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_8_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 105, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 105, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 105, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 105, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {8, 11}, .shadow = {8, 11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {7, 20}, .shadow = {7, 19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 110, .offset = {0, 25}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 111, .offset = {-7, 20}, .shadow = {-7, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-8, 11}, .shadow = {-8, 11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 113, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {17, 6}, .shadow = {17, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {20, 19}, .shadow = {20, 17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 109, .offset = {20, 25}, .shadow = {20, 23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 110, .offset = {11, 26}, .shadow = {11, 24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {4, 19}, .shadow = {4, 19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 112, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 113, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {19, -2}, .shadow = {19, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 108, .offset = {20, 5}, .shadow = {20, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 109, .offset = {18, 11}, .shadow = {18, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {10, 13}, .shadow = {10, 11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {3, 9}, .shadow = {3, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 112, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {12, -22}, .shadow = {12, -24} },
	{ .frames = 3, .unkFlags = 0, .poseId = 107, .offset = {19, -18}, .shadow = {19, -20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 108, .offset = {21, -11}, .shadow = {21, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {17, -4}, .shadow = {17, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {9, 1}, .shadow = {9, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-9, -10}, .shadow = {-9, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {-7, -16}, .shadow = {-7, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 106, .offset = {0, -18}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 107, .offset = {7, -16}, .shadow = {7, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {9, -10}, .shadow = {9, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-12, -22}, .shadow = {-12, -24} },
	{ .frames = 3, .unkFlags = 0, .poseId = 113, .offset = {-19, -18}, .shadow = {-19, -20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 112, .offset = {-21, -11}, .shadow = {-21, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-17, -4}, .shadow = {-17, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {-9, -1}, .shadow = {-9, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {-19, 2}, .shadow = {-19, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 112, .offset = {-20, 5}, .shadow = {-20, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 111, .offset = {-18, 11}, .shadow = {-18, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-10, 13}, .shadow = {-10, 11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {-3, 9}, .shadow = {-3, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {-17, 6}, .shadow = {-17, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-20, 19}, .shadow = {-20, 17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 111, .offset = {-20, 25}, .shadow = {-20, 23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 110, .offset = {-11, 26}, .shadow = {-11, 24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {-4, 19}, .shadow = {-4, 19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 124, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 124, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 123, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 124, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 123, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 123, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 124, .offset = {0, 5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 126, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 126, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 125, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 126, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 125, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 125, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 126, .offset = {0, 5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 128, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 128, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 127, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 128, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 127, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 127, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 128, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 130, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 130, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 129, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 130, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 129, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 130, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 132, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 132, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 131, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 132, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 131, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 131, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 132, .offset = {0, 8}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 134, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 134, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 133, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 134, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 133, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 133, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 134, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 136, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 136, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 135, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 136, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 135, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 135, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 136, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 138, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 137, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 138, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 137, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 138, .offset = {0, 5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_12_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_12_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_12_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_12_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_12_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_12_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_12_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_12_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_13_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_13_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_13_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_13_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_13_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_13_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_13_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sYanmaAnims_13_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sYanmaGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_1.4bpp.lz");
static const ax_sprite sYanmaSprites1[] = {
	{sYanmaGfx1, ARRAY_COUNT(sYanmaGfx1)}, 
	{NULL, 0}
};
static const u8 sYanmaGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_2.4bpp.lz");
static const ax_sprite sYanmaSprites2[] = {
	{sYanmaGfx2, ARRAY_COUNT(sYanmaGfx2)}, 
	{NULL, 0}
};
static const u8 sYanmaGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_3.4bpp.lz");
static const ax_sprite sYanmaSprites3[] = {
	{sYanmaGfx3, ARRAY_COUNT(sYanmaGfx3)}, 
	{NULL, 0}
};
static const u8 sYanmaGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_4.4bpp.lz");
static const ax_sprite sYanmaSprites4[] = {
	{sYanmaGfx4, ARRAY_COUNT(sYanmaGfx4)}, 
	{NULL, 0}
};
static const u8 sYanmaGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_5.4bpp.lz");
static const ax_sprite sYanmaSprites5[] = {
	{sYanmaGfx5, ARRAY_COUNT(sYanmaGfx5)}, 
	{NULL, 0}
};
static const u8 sYanmaGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_6.4bpp.lz");
static const ax_sprite sYanmaSprites6[] = {
	{sYanmaGfx6, ARRAY_COUNT(sYanmaGfx6)}, 
	{NULL, 0}
};
static const u8 sYanmaGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_7.4bpp.lz");
static const ax_sprite sYanmaSprites7[] = {
	{sYanmaGfx7, ARRAY_COUNT(sYanmaGfx7)}, 
	{NULL, 0}
};
static const u8 sYanmaGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_8.4bpp.lz");
static const ax_sprite sYanmaSprites8[] = {
	{sYanmaGfx8, ARRAY_COUNT(sYanmaGfx8)}, 
	{NULL, 0}
};
static const u8 sYanmaGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_9.4bpp.lz");
static const ax_sprite sYanmaSprites9[] = {
	{sYanmaGfx9, ARRAY_COUNT(sYanmaGfx9)}, 
	{NULL, 0}
};
static const u8 sYanmaGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_10.4bpp.lz");
static const ax_sprite sYanmaSprites10[] = {
	{sYanmaGfx10, ARRAY_COUNT(sYanmaGfx10)}, 
	{NULL, 0}
};
static const u8 sYanmaGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_11.4bpp.lz");
static const u8 sYanmaGfx11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_11_1.4bpp.lz");
static const u8 sYanmaGfx11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_11_2.4bpp.lz");
static const ax_sprite sYanmaSprites11[] = {
	{NULL, 32}, 
	{sYanmaGfx11, ARRAY_COUNT(sYanmaGfx11)}, 
	{NULL, 32}, 
	{sYanmaGfx11_1, ARRAY_COUNT(sYanmaGfx11_1)}, 
	{NULL, 32}, 
	{sYanmaGfx11_2, ARRAY_COUNT(sYanmaGfx11_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sYanmaGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_12.4bpp.lz");
static const u8 sYanmaGfx12_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_12_1.4bpp.lz");
static const u8 sYanmaGfx12_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_12_2.4bpp.lz");
static const ax_sprite sYanmaSprites12[] = {
	{NULL, 32}, 
	{sYanmaGfx12, ARRAY_COUNT(sYanmaGfx12)}, 
	{NULL, 32}, 
	{sYanmaGfx12_1, ARRAY_COUNT(sYanmaGfx12_1)}, 
	{NULL, 32}, 
	{sYanmaGfx12_2, ARRAY_COUNT(sYanmaGfx12_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sYanmaGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_13.4bpp.lz");
static const u8 sYanmaGfx13_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_13_1.4bpp.lz");
static const u8 sYanmaGfx13_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_13_2.4bpp.lz");
static const ax_sprite sYanmaSprites13[] = {
	{sYanmaGfx13, ARRAY_COUNT(sYanmaGfx13)}, 
	{NULL, 64}, 
	{sYanmaGfx13_1, ARRAY_COUNT(sYanmaGfx13_1)}, 
	{NULL, 32}, 
	{sYanmaGfx13_2, ARRAY_COUNT(sYanmaGfx13_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sYanmaGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_14.4bpp.lz");
static const u8 sYanmaGfx14_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_14_1.4bpp.lz");
static const u8 sYanmaGfx14_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_14_2.4bpp.lz");
static const ax_sprite sYanmaSprites14[] = {
	{sYanmaGfx14, ARRAY_COUNT(sYanmaGfx14)}, 
	{NULL, 64}, 
	{sYanmaGfx14_1, ARRAY_COUNT(sYanmaGfx14_1)}, 
	{NULL, 32}, 
	{sYanmaGfx14_2, ARRAY_COUNT(sYanmaGfx14_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sYanmaGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_15.4bpp.lz");
static const ax_sprite sYanmaSprites15[] = {
	{sYanmaGfx15, ARRAY_COUNT(sYanmaGfx15)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sYanmaGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_16.4bpp.lz");
static const ax_sprite sYanmaSprites16[] = {
	{sYanmaGfx16, ARRAY_COUNT(sYanmaGfx16)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sYanmaGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_17.4bpp.lz");
static const u8 sYanmaGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_17_1.4bpp.lz");
static const u8 sYanmaGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_17_2.4bpp.lz");
static const ax_sprite sYanmaSprites17[] = {
	{NULL, 32}, 
	{sYanmaGfx17, ARRAY_COUNT(sYanmaGfx17)}, 
	{NULL, 64}, 
	{sYanmaGfx17_1, ARRAY_COUNT(sYanmaGfx17_1)}, 
	{NULL, 64}, 
	{sYanmaGfx17_2, ARRAY_COUNT(sYanmaGfx17_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sYanmaGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_18.4bpp.lz");
static const u8 sYanmaGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_18_1.4bpp.lz");
static const u8 sYanmaGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_18_2.4bpp.lz");
static const ax_sprite sYanmaSprites18[] = {
	{NULL, 32}, 
	{sYanmaGfx18, ARRAY_COUNT(sYanmaGfx18)}, 
	{NULL, 64}, 
	{sYanmaGfx18_1, ARRAY_COUNT(sYanmaGfx18_1)}, 
	{NULL, 64}, 
	{sYanmaGfx18_2, ARRAY_COUNT(sYanmaGfx18_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sYanmaGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_19.4bpp.lz");
static const u8 sYanmaGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_19_1.4bpp.lz");
static const u8 sYanmaGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_19_2.4bpp.lz");
static const ax_sprite sYanmaSprites19[] = {
	{sYanmaGfx19, ARRAY_COUNT(sYanmaGfx19)}, 
	{NULL, 32}, 
	{sYanmaGfx19_1, ARRAY_COUNT(sYanmaGfx19_1)}, 
	{NULL, 64}, 
	{sYanmaGfx19_2, ARRAY_COUNT(sYanmaGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sYanmaGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_20.4bpp.lz");
static const u8 sYanmaGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_20_1.4bpp.lz");
static const u8 sYanmaGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_20_2.4bpp.lz");
static const ax_sprite sYanmaSprites20[] = {
	{sYanmaGfx20, ARRAY_COUNT(sYanmaGfx20)}, 
	{NULL, 32}, 
	{sYanmaGfx20_1, ARRAY_COUNT(sYanmaGfx20_1)}, 
	{NULL, 64}, 
	{sYanmaGfx20_2, ARRAY_COUNT(sYanmaGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sYanmaGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_21.4bpp.lz");
static const ax_sprite sYanmaSprites21[] = {
	{sYanmaGfx21, ARRAY_COUNT(sYanmaGfx21)}, 
	{NULL, 0}
};
static const u8 sYanmaGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_22.4bpp.lz");
static const ax_sprite sYanmaSprites22[] = {
	{sYanmaGfx22, ARRAY_COUNT(sYanmaGfx22)}, 
	{NULL, 0}
};
static const u8 sYanmaGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_23.4bpp.lz");
static const ax_sprite sYanmaSprites23[] = {
	{sYanmaGfx23, ARRAY_COUNT(sYanmaGfx23)}, 
	{NULL, 0}
};
static const u8 sYanmaGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_24.4bpp.lz");
static const ax_sprite sYanmaSprites24[] = {
	{sYanmaGfx24, ARRAY_COUNT(sYanmaGfx24)}, 
	{NULL, 0}
};
static const u8 sYanmaGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_25.4bpp.lz");
static const ax_sprite sYanmaSprites25[] = {
	{sYanmaGfx25, ARRAY_COUNT(sYanmaGfx25)}, 
	{NULL, 0}
};
static const u8 sYanmaGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_26.4bpp.lz");
static const ax_sprite sYanmaSprites26[] = {
	{sYanmaGfx26, ARRAY_COUNT(sYanmaGfx26)}, 
	{NULL, 0}
};
static const u8 sYanmaGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/yanma/sprite_27.4bpp.lz");
static const ax_sprite sYanmaSprites27[] = {
	{sYanmaGfx27, ARRAY_COUNT(sYanmaGfx27)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesYanma[] = {
	sYanmaPose1,
	sYanmaPose2,
	sYanmaPose3,
	sYanmaPose4,
	sYanmaPose5,
	sYanmaPose6,
	sYanmaPose7,
	sYanmaPose8,
	sYanmaPose9,
	sYanmaPose10,
	sYanmaPose11,
	sYanmaPose12,
	sYanmaPose13,
	sYanmaPose14,
	sYanmaPose15,
	sYanmaPose16,
	sYanmaPose1,
	sYanmaPose2,
	sYanmaPose3,
	sYanmaPose4,
	sYanmaPose5,
	sYanmaPose6,
	sYanmaPose7,
	sYanmaPose8,
	sYanmaPose9,
	sYanmaPose10,
	sYanmaPose11,
	sYanmaPose12,
	sYanmaPose13,
	sYanmaPose14,
	sYanmaPose15,
	sYanmaPose16,
	sYanmaPose1,
	sYanmaPose2,
	sYanmaPose3,
	sYanmaPose4,
	sYanmaPose5,
	sYanmaPose6,
	sYanmaPose7,
	sYanmaPose8,
	sYanmaPose9,
	sYanmaPose10,
	sYanmaPose11,
	sYanmaPose12,
	sYanmaPose13,
	sYanmaPose14,
	sYanmaPose15,
	sYanmaPose16,
	sYanmaPose1,
	sYanmaPose50,
	sYanmaPose51,
	sYanmaPose3,
	sYanmaPose53,
	sYanmaPose54,
	sYanmaPose5,
	sYanmaPose56,
	sYanmaPose57,
	sYanmaPose7,
	sYanmaPose59,
	sYanmaPose60,
	sYanmaPose9,
	sYanmaPose62,
	sYanmaPose63,
	sYanmaPose11,
	sYanmaPose65,
	sYanmaPose66,
	sYanmaPose13,
	sYanmaPose68,
	sYanmaPose69,
	sYanmaPose15,
	sYanmaPose71,
	sYanmaPose72,
	sYanmaPose1,
	sYanmaPose15,
	sYanmaPose13,
	sYanmaPose11,
	sYanmaPose9,
	sYanmaPose7,
	sYanmaPose5,
	sYanmaPose3,
	sYanmaPose81,
	sYanmaPose82,
	sYanmaPose83,
	sYanmaPose84,
	sYanmaPose85,
	sYanmaPose86,
	sYanmaPose87,
	sYanmaPose88,
	sYanmaPose89,
	sYanmaPose90,
	sYanmaPose1,
	sYanmaPose2,
	sYanmaPose3,
	sYanmaPose4,
	sYanmaPose5,
	sYanmaPose6,
	sYanmaPose7,
	sYanmaPose8,
	sYanmaPose9,
	sYanmaPose10,
	sYanmaPose11,
	sYanmaPose12,
	sYanmaPose13,
	sYanmaPose14,
	sYanmaPose15,
	sYanmaPose16,
	sYanmaPose1,
	sYanmaPose15,
	sYanmaPose13,
	sYanmaPose11,
	sYanmaPose9,
	sYanmaPose7,
	sYanmaPose5,
	sYanmaPose3,
	sYanmaPose50,
	sYanmaPose116,
	sYanmaPose117,
	sYanmaPose118,
	sYanmaPose62,
	sYanmaPose120,
	sYanmaPose68,
	sYanmaPose122,
	sYanmaPose50,
	sYanmaPose1,
	sYanmaPose2,
	sYanmaPose3,
	sYanmaPose4,
	sYanmaPose5,
	sYanmaPose6,
	sYanmaPose7,
	sYanmaPose8,
	sYanmaPose9,
	sYanmaPose10,
	sYanmaPose11,
	sYanmaPose12,
	sYanmaPose13,
	sYanmaPose14,
	sYanmaPose15,
	sYanmaPose16,
	sYanmaPose1,
	sYanmaPose15,
	sYanmaPose13,
	sYanmaPose11,
	sYanmaPose9,
	sYanmaPose7,
	sYanmaPose5,
	sYanmaPose3,
	sYanmaPose1,
	sYanmaPose15,
	sYanmaPose13,
	sYanmaPose11,
	sYanmaPose9,
	sYanmaPose7,
	sYanmaPose5,
	sYanmaPose3,
};

static const struct PositionSets sAxPositionsYanma[] = {
	[0] = { .set = { {0, -3}, {-6, -6}, {6, -6}, {0, -10} } },
	[1] = { .set = { {0, -3}, {-6, -6}, {6, -6}, {0, -10} } },
	[2] = { .set = { {7, -5}, {7, -10}, {-1, -5}, {0, -10} } },
	[3] = { .set = { {7, -5}, {7, -10}, {-1, -5}, {1, -10} } },
	[4] = { .set = { {9, -10}, {3, -13}, {3, -8}, {1, -11} } },
	[5] = { .set = { {9, -10}, {2, -14}, {2, -7}, {1, -11} } },
	[6] = { .set = { {6, -13}, {-2, -14}, {4, -10}, {0, -11} } },
	[7] = { .set = { {6, -13}, {-3, -14}, {4, -10}, {-1, -11} } },
	[8] = { .set = { {0, -16}, {5, -14}, {-5, -14}, {0, -13} } },
	[9] = { .set = { {0, -16}, {5, -13}, {-4, -13}, {0, -12} } },
	[10] = { .set = { {-7, -13}, {1, -14}, {-5, -10}, {-1, -11} } },
	[11] = { .set = { {-7, -13}, {2, -14}, {-5, -10}, {0, -11} } },
	[12] = { .set = { {-10, -10}, {-4, -13}, {-4, -8}, {-2, -11} } },
	[13] = { .set = { {-10, -10}, {-3, -14}, {-3, -7}, {-2, -11} } },
	[14] = { .set = { {-8, -5}, {-8, -10}, {0, -5}, {-1, -10} } },
	[15] = { .set = { {-8, -5}, {-8, -10}, {0, -5}, {-2, -10} } },
	[16] = { .set = { {0, -3}, {-6, -6}, {6, -6}, {0, -10} } },
	[17] = { .set = { {0, -3}, {-6, -6}, {6, -6}, {0, -10} } },
	[18] = { .set = { {7, -5}, {7, -10}, {-1, -5}, {0, -10} } },
	[19] = { .set = { {7, -5}, {7, -10}, {-1, -5}, {1, -10} } },
	[20] = { .set = { {9, -10}, {3, -13}, {3, -8}, {1, -11} } },
	[21] = { .set = { {9, -10}, {2, -14}, {2, -7}, {1, -11} } },
	[22] = { .set = { {6, -13}, {-2, -14}, {4, -10}, {0, -11} } },
	[23] = { .set = { {6, -13}, {-3, -14}, {4, -10}, {-1, -11} } },
	[24] = { .set = { {0, -16}, {5, -14}, {-5, -14}, {0, -13} } },
	[25] = { .set = { {0, -16}, {5, -13}, {-4, -13}, {0, -12} } },
	[26] = { .set = { {-7, -13}, {1, -14}, {-5, -10}, {-1, -11} } },
	[27] = { .set = { {-7, -13}, {2, -14}, {-5, -10}, {0, -11} } },
	[28] = { .set = { {-10, -10}, {-4, -13}, {-4, -8}, {-2, -11} } },
	[29] = { .set = { {-10, -10}, {-3, -14}, {-3, -7}, {-2, -11} } },
	[30] = { .set = { {-8, -5}, {-8, -10}, {0, -5}, {-1, -10} } },
	[31] = { .set = { {-8, -5}, {-8, -10}, {0, -5}, {-2, -10} } },
	[32] = { .set = { {0, -3}, {-6, -6}, {6, -6}, {0, -10} } },
	[33] = { .set = { {0, -3}, {-6, -6}, {6, -6}, {0, -10} } },
	[34] = { .set = { {7, -5}, {7, -10}, {-1, -5}, {0, -10} } },
	[35] = { .set = { {7, -5}, {7, -10}, {-1, -5}, {1, -10} } },
	[36] = { .set = { {9, -10}, {3, -13}, {3, -8}, {1, -11} } },
	[37] = { .set = { {9, -10}, {2, -14}, {2, -7}, {1, -11} } },
	[38] = { .set = { {6, -13}, {-2, -14}, {4, -10}, {0, -11} } },
	[39] = { .set = { {6, -13}, {-3, -14}, {4, -10}, {-1, -11} } },
	[40] = { .set = { {0, -16}, {5, -14}, {-5, -14}, {0, -13} } },
	[41] = { .set = { {0, -16}, {5, -13}, {-4, -13}, {0, -12} } },
	[42] = { .set = { {-7, -13}, {1, -14}, {-5, -10}, {-1, -11} } },
	[43] = { .set = { {-7, -13}, {2, -14}, {-5, -10}, {0, -11} } },
	[44] = { .set = { {-10, -10}, {-4, -13}, {-4, -8}, {-2, -11} } },
	[45] = { .set = { {-10, -10}, {-3, -14}, {-3, -7}, {-2, -11} } },
	[46] = { .set = { {-8, -5}, {-8, -10}, {0, -5}, {-1, -10} } },
	[47] = { .set = { {-8, -5}, {-8, -10}, {0, -5}, {-2, -10} } },
	[48] = { .set = { {0, -3}, {-6, -6}, {6, -6}, {0, -10} } },
	[49] = { .set = { {0, -15}, {-5, -13}, {5, -13}, {0, -12} } },
	[50] = { .set = { {0, -15}, {-5, -13}, {5, -13}, {0, -12} } },
	[51] = { .set = { {7, -5}, {7, -10}, {-1, -5}, {0, -10} } },
	[52] = { .set = { {2, -19}, {4, -18}, {-3, -15}, {0, -15} } },
	[53] = { .set = { {2, -19}, {4, -18}, {-3, -15}, {-1, -15} } },
	[54] = { .set = { {9, -10}, {3, -13}, {3, -8}, {1, -11} } },
	[55] = { .set = { {3, -16}, {1, -15}, {3, -13}, {-1, -13} } },
	[56] = { .set = { {3, -16}, {2, -15}, {3, -13}, {-1, -13} } },
	[57] = { .set = { {6, -13}, {-2, -14}, {4, -10}, {0, -11} } },
	[58] = { .set = { {0, -17}, {-3, -19}, {1, -13}, {-2, -15} } },
	[59] = { .set = { {0, -17}, {-3, -19}, {1, -13}, {-3, -15} } },
	[60] = { .set = { {0, -16}, {5, -14}, {-5, -14}, {0, -13} } },
	[61] = { .set = { {0, -16}, {5, -15}, {-5, -15}, {0, -13} } },
	[62] = { .set = { {0, -15}, {5, -15}, {-5, -15}, {0, -13} } },
	[63] = { .set = { {-7, -13}, {1, -14}, {-5, -10}, {-1, -11} } },
	[64] = { .set = { {-1, -17}, {2, -19}, {-2, -13}, {1, -15} } },
	[65] = { .set = { {-1, -17}, {2, -19}, {-2, -13}, {2, -15} } },
	[66] = { .set = { {-10, -10}, {-4, -13}, {-4, -8}, {-2, -11} } },
	[67] = { .set = { {-4, -16}, {-2, -15}, {-4, -13}, {0, -13} } },
	[68] = { .set = { {-4, -16}, {-3, -15}, {-4, -13}, {0, -13} } },
	[69] = { .set = { {-8, -5}, {-8, -10}, {0, -5}, {-1, -10} } },
	[70] = { .set = { {-3, -19}, {-5, -18}, {2, -15}, {-1, -15} } },
	[71] = { .set = { {-3, -19}, {-5, -18}, {2, -15}, {0, -15} } },
	[72] = { .set = { {0, -3}, {-6, -6}, {6, -6}, {0, -10} } },
	[73] = { .set = { {-8, -5}, {-8, -10}, {0, -5}, {-1, -10} } },
	[74] = { .set = { {-10, -10}, {-4, -13}, {-4, -8}, {-2, -11} } },
	[75] = { .set = { {-7, -13}, {1, -14}, {-5, -10}, {-1, -11} } },
	[76] = { .set = { {0, -16}, {5, -14}, {-5, -14}, {0, -13} } },
	[77] = { .set = { {6, -13}, {-2, -14}, {4, -10}, {0, -11} } },
	[78] = { .set = { {9, -10}, {3, -13}, {3, -8}, {1, -11} } },
	[79] = { .set = { {7, -5}, {7, -10}, {-1, -5}, {0, -10} } },
	[80] = { .set = { {-6, 2}, {-7, -4}, {0, 0}, {-3, -4} } },
	[81] = { .set = { {-6, 3}, {-7, -4}, {0, 0}, {-3, -4} } },
	[82] = { .set = { {0, -15}, {-5, -16}, {5, -17}, {1, -12} } },
	[83] = { .set = { {2, -16}, {4, -13}, {-3, -12}, {-1, -12} } },
	[84] = { .set = { {2, -17}, {3, -15}, {3, -13}, {-2, -13} } },
	[85] = { .set = { {0, -17}, {-3, -16}, {2, -12}, {-3, -12} } },
	[86] = { .set = { {0, -17}, {4, -12}, {-5, -13}, {0, -11} } },
	[87] = { .set = { {-1, -17}, {2, -16}, {-3, -12}, {2, -12} } },
	[88] = { .set = { {-3, -16}, {-4, -14}, {-4, -12}, {1, -12} } },
	[89] = { .set = { {-3, -16}, {-5, -13}, {2, -12}, {0, -12} } },
	[90] = { .set = { {0, -3}, {-6, -6}, {6, -6}, {0, -10} } },
	[91] = { .set = { {0, -3}, {-6, -6}, {6, -6}, {0, -10} } },
	[92] = { .set = { {7, -5}, {7, -10}, {-1, -5}, {0, -10} } },
	[93] = { .set = { {7, -5}, {7, -10}, {-1, -5}, {1, -10} } },
	[94] = { .set = { {9, -10}, {3, -13}, {3, -8}, {1, -11} } },
	[95] = { .set = { {9, -10}, {2, -14}, {2, -7}, {1, -11} } },
	[96] = { .set = { {6, -13}, {-2, -14}, {4, -10}, {0, -11} } },
	[97] = { .set = { {6, -13}, {-3, -14}, {4, -10}, {-1, -11} } },
	[98] = { .set = { {0, -16}, {5, -14}, {-5, -14}, {0, -13} } },
	[99] = { .set = { {0, -16}, {5, -13}, {-4, -13}, {0, -12} } },
	[100] = { .set = { {-7, -13}, {1, -14}, {-5, -10}, {-1, -11} } },
	[101] = { .set = { {-7, -13}, {2, -14}, {-5, -10}, {0, -11} } },
	[102] = { .set = { {-10, -10}, {-4, -13}, {-4, -8}, {-2, -11} } },
	[103] = { .set = { {-10, -10}, {-3, -14}, {-3, -7}, {-2, -11} } },
	[104] = { .set = { {-8, -5}, {-8, -10}, {0, -5}, {-1, -10} } },
	[105] = { .set = { {-8, -5}, {-8, -10}, {0, -5}, {-2, -10} } },
	[106] = { .set = { {0, -3}, {-6, -6}, {6, -6}, {0, -10} } },
	[107] = { .set = { {-8, -5}, {-8, -10}, {0, -5}, {-1, -10} } },
	[108] = { .set = { {-10, -10}, {-4, -13}, {-4, -8}, {-2, -11} } },
	[109] = { .set = { {-7, -13}, {1, -14}, {-5, -10}, {-1, -11} } },
	[110] = { .set = { {0, -16}, {5, -14}, {-5, -14}, {0, -13} } },
	[111] = { .set = { {6, -13}, {-2, -14}, {4, -10}, {0, -11} } },
	[112] = { .set = { {9, -10}, {3, -13}, {3, -8}, {1, -11} } },
	[113] = { .set = { {7, -5}, {7, -10}, {-1, -5}, {0, -10} } },
	[114] = { .set = { {0, -15}, {-5, -13}, {5, -13}, {0, -12} } },
	[115] = { .set = { {2, -16}, {4, -15}, {-3, -12}, {0, -12} } },
	[116] = { .set = { {4, -16}, {2, -15}, {4, -13}, {0, -13} } },
	[117] = { .set = { {1, -15}, {-2, -17}, {2, -11}, {-1, -13} } },
	[118] = { .set = { {0, -16}, {5, -15}, {-5, -15}, {0, -13} } },
	[119] = { .set = { {-1, -15}, {2, -17}, {-2, -11}, {1, -13} } },
	[120] = { .set = { {-4, -16}, {-2, -15}, {-4, -13}, {0, -13} } },
	[121] = { .set = { {-2, -16}, {-4, -15}, {3, -12}, {0, -12} } },
	[122] = { .set = { {0, -15}, {-5, -13}, {5, -13}, {0, -12} } },
	[123] = { .set = { {0, -3}, {-6, -6}, {6, -6}, {0, -10} } },
	[124] = { .set = { {0, -3}, {-6, -6}, {6, -6}, {0, -10} } },
	[125] = { .set = { {7, -5}, {7, -10}, {-1, -5}, {0, -10} } },
	[126] = { .set = { {7, -5}, {7, -10}, {-1, -5}, {1, -10} } },
	[127] = { .set = { {9, -10}, {3, -13}, {3, -8}, {1, -11} } },
	[128] = { .set = { {9, -10}, {2, -14}, {2, -7}, {1, -11} } },
	[129] = { .set = { {6, -13}, {-2, -14}, {4, -10}, {0, -11} } },
	[130] = { .set = { {6, -13}, {-3, -14}, {4, -10}, {-1, -11} } },
	[131] = { .set = { {0, -16}, {5, -14}, {-5, -14}, {0, -13} } },
	[132] = { .set = { {0, -16}, {5, -13}, {-4, -13}, {0, -12} } },
	[133] = { .set = { {-7, -13}, {1, -14}, {-5, -10}, {-1, -11} } },
	[134] = { .set = { {-7, -13}, {2, -14}, {-5, -10}, {0, -11} } },
	[135] = { .set = { {-10, -10}, {-4, -13}, {-4, -8}, {-2, -11} } },
	[136] = { .set = { {-10, -10}, {-3, -14}, {-3, -7}, {-2, -11} } },
	[137] = { .set = { {-8, -5}, {-8, -10}, {0, -5}, {-1, -10} } },
	[138] = { .set = { {-8, -5}, {-8, -10}, {0, -5}, {-2, -10} } },
	[139] = { .set = { {0, -3}, {-6, -6}, {6, -6}, {0, -10} } },
	[140] = { .set = { {-8, -5}, {-8, -10}, {0, -5}, {-1, -10} } },
	[141] = { .set = { {-10, -10}, {-4, -13}, {-4, -8}, {-2, -11} } },
	[142] = { .set = { {-7, -13}, {1, -14}, {-5, -10}, {-1, -11} } },
	[143] = { .set = { {0, -16}, {5, -14}, {-5, -14}, {0, -13} } },
	[144] = { .set = { {6, -13}, {-2, -14}, {4, -10}, {0, -11} } },
	[145] = { .set = { {9, -10}, {3, -13}, {3, -8}, {1, -11} } },
	[146] = { .set = { {7, -5}, {7, -10}, {-1, -5}, {0, -10} } },
	[147] = { .set = { {0, -3}, {-6, -6}, {6, -6}, {0, -10} } },
	[148] = { .set = { {-8, -5}, {-8, -10}, {0, -5}, {-1, -10} } },
	[149] = { .set = { {-10, -10}, {-4, -13}, {-4, -8}, {-2, -11} } },
	[150] = { .set = { {-7, -13}, {1, -14}, {-5, -10}, {-1, -11} } },
	[151] = { .set = { {0, -16}, {5, -14}, {-5, -14}, {0, -13} } },
	[152] = { .set = { {6, -13}, {-2, -14}, {4, -10}, {0, -11} } },
	[153] = { .set = { {9, -10}, {3, -13}, {3, -8}, {1, -11} } },
	[154] = { .set = { {7, -5}, {7, -10}, {-1, -5}, {0, -10} } },
};

static const ax_anim *const sYanmaAnimTable1[] = {
	sYanmaAnims_1_1,
	sYanmaAnims_1_2,
	sYanmaAnims_1_3,
	sYanmaAnims_1_4,
	sYanmaAnims_1_5,
	sYanmaAnims_1_6,
	sYanmaAnims_1_7,
	sYanmaAnims_1_8,
};

static const ax_anim *const sYanmaAnimTable2[] = {
	sYanmaAnims_2_1,
	sYanmaAnims_2_2,
	sYanmaAnims_2_3,
	sYanmaAnims_2_4,
	sYanmaAnims_2_5,
	sYanmaAnims_2_6,
	sYanmaAnims_2_7,
	sYanmaAnims_2_8,
};

static const ax_anim *const sYanmaAnimTable3[] = {
	sYanmaAnims_3_1,
	sYanmaAnims_3_2,
	sYanmaAnims_3_3,
	sYanmaAnims_3_4,
	sYanmaAnims_3_5,
	sYanmaAnims_3_6,
	sYanmaAnims_3_7,
	sYanmaAnims_3_8,
};

static const ax_anim *const sYanmaAnimTable4[] = {
	sYanmaAnims_4_1,
	sYanmaAnims_4_2,
	sYanmaAnims_4_3,
	sYanmaAnims_4_4,
	sYanmaAnims_4_5,
	sYanmaAnims_4_6,
	sYanmaAnims_4_7,
	sYanmaAnims_4_8,
};

static const ax_anim *const sYanmaAnimTable5[] = {
	gAxSharedAnim_02088,
	gAxSharedAnim_02140,
	gAxSharedAnim_02132,
	gAxSharedAnim_02126,
	gAxSharedAnim_02120,
	gAxSharedAnim_02110,
	gAxSharedAnim_02105,
	gAxSharedAnim_02099,
};

static const ax_anim *const sYanmaAnimTable6[] = {
	gAxSharedAnim_02404,
	gAxSharedAnim_02404,
	gAxSharedAnim_02404,
	gAxSharedAnim_02404,
	gAxSharedAnim_02404,
	gAxSharedAnim_02404,
	gAxSharedAnim_02404,
	gAxSharedAnim_02404,
};

static const ax_anim *const sYanmaAnimTable7[] = {
	gAxSharedAnim_02162,
	gAxSharedAnim_02168,
	gAxSharedAnim_02176,
	gAxSharedAnim_02190,
	gAxSharedAnim_02201,
	gAxSharedAnim_02213,
	gAxSharedAnim_02221,
	gAxSharedAnim_02231,
};

static const ax_anim *const sYanmaAnimTable8[] = {
	sYanmaAnims_8_1,
	sYanmaAnims_8_2,
	sYanmaAnims_8_3,
	sYanmaAnims_8_4,
	sYanmaAnims_8_5,
	sYanmaAnims_8_6,
	sYanmaAnims_8_7,
	sYanmaAnims_8_8,
};

static const ax_anim *const sYanmaAnimTable9[] = {
	sYanmaAnims_9_1,
	sYanmaAnims_9_2,
	sYanmaAnims_9_3,
	sYanmaAnims_9_4,
	sYanmaAnims_9_5,
	sYanmaAnims_9_6,
	sYanmaAnims_9_7,
	sYanmaAnims_9_8,
};

static const ax_anim *const sYanmaAnimTable10[] = {
	gAxSharedAnim_00269,
	gAxSharedAnim_00275,
	gAxSharedAnim_00284,
	gAxSharedAnim_00293,
	gAxSharedAnim_00300,
	gAxSharedAnim_00310,
	gAxSharedAnim_00320,
	gAxSharedAnim_00326,
};

static const ax_anim *const sYanmaAnimTable11[] = {
	sYanmaAnims_11_1,
	sYanmaAnims_11_2,
	sYanmaAnims_11_3,
	sYanmaAnims_11_4,
	sYanmaAnims_11_5,
	sYanmaAnims_11_6,
	sYanmaAnims_11_7,
	sYanmaAnims_11_8,
};

static const ax_anim *const sYanmaAnimTable12[] = {
	sYanmaAnims_12_1,
	sYanmaAnims_12_2,
	sYanmaAnims_12_3,
	sYanmaAnims_12_4,
	sYanmaAnims_12_5,
	sYanmaAnims_12_6,
	sYanmaAnims_12_7,
	sYanmaAnims_12_8,
};

static const ax_anim *const sYanmaAnimTable13[] = {
	sYanmaAnims_13_1,
	sYanmaAnims_13_2,
	sYanmaAnims_13_3,
	sYanmaAnims_13_4,
	sYanmaAnims_13_5,
	sYanmaAnims_13_6,
	sYanmaAnims_13_7,
	sYanmaAnims_13_8,
};

static const ax_anim *const *const sAxAnimationsYanma[] = {
	sYanmaAnimTable1,
	sYanmaAnimTable2,
	sYanmaAnimTable3,
	sYanmaAnimTable4,
	sYanmaAnimTable5,
	sYanmaAnimTable6,
	sYanmaAnimTable7,
	sYanmaAnimTable8,
	sYanmaAnimTable9,
	sYanmaAnimTable10,
	sYanmaAnimTable11,
	sYanmaAnimTable12,
	sYanmaAnimTable13,
};

static const ax_sprite *const sAxSpritesYanma[] = {
	sYanmaSprites1,
	sYanmaSprites2,
	sYanmaSprites3,
	sYanmaSprites4,
	sYanmaSprites5,
	sYanmaSprites6,
	sYanmaSprites7,
	sYanmaSprites8,
	sYanmaSprites9,
	sYanmaSprites10,
	sYanmaSprites11,
	sYanmaSprites12,
	sYanmaSprites13,
	sYanmaSprites14,
	sYanmaSprites15,
	sYanmaSprites16,
	sYanmaSprites17,
	sYanmaSprites18,
	sYanmaSprites19,
	sYanmaSprites20,
	sYanmaSprites21,
	sYanmaSprites22,
	sYanmaSprites23,
	sYanmaSprites24,
	sYanmaSprites25,
	sYanmaSprites26,
	sYanmaSprites27,
};

static const axmain sAxMainYanma = {
	.poses = sAxPosesYanma,
	.animations = sAxAnimationsYanma,
	.animCount = ARRAY_COUNT(sAxAnimationsYanma),
	.spriteData = sAxSpritesYanma,
	.positions = sAxPositionsYanma,
};
