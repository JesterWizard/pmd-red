/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainSolrock;
const SiroArchive gAxSolrock = {"SIRO", &sAxMainSolrock};

static const ax_pose sSolrockPose1[] = {
	AX_POSE(0, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose2[] = {
	AX_POSE(1, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose3[] = {
	AX_POSE(2, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose4[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose5[] = {
	AX_POSE(4, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose6[] = {
	AX_POSE(5, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose7[] = {
	AX_POSE(6, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose8[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose9[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose10[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose11[] = {
	AX_POSE(6, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose12[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose13[] = {
	AX_POSE(4, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose14[] = {
	AX_POSE(5, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose15[] = {
	AX_POSE(2, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose16[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose50[] = {
	AX_POSE(10, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(11, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(12, OAM1(254, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose52[] = {
	AX_POSE(13, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(14, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose54[] = {
	AX_POSE(15, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose56[] = {
	AX_POSE(16, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(17, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose58[] = {
	AX_POSE(18, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(19, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose60[] = {
	AX_POSE(16, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(17, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose62[] = {
	AX_POSE(15, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose64[] = {
	AX_POSE(13, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(14, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose81[] = {
	AX_POSE(20, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose82[] = {
	AX_POSE(21, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose83[] = {
	AX_POSE(22, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose84[] = {
	AX_POSE(23, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose85[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose86[] = {
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose87[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose88[] = {
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose89[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSolrockPose90[] = {
	AX_POSE(23, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_anim sSolrockAnims_1_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_1_2[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_1_3[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_1_4[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_1_5[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_1_6[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_1_7[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_1_8[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 48, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 5, .unkFlags = 0, .poseId = 48, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 1, .poseId = 48, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, -8}, .shadow = {0, -8} },
	{ .frames = 4, .unkFlags = 0, .poseId = 49, .offset = {0, -9}, .shadow = {0, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -7}, .shadow = {0, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 50, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 5, .unkFlags = 0, .poseId = 50, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 1, .poseId = 50, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {-8, -8}, .shadow = {-8, -8} },
	{ .frames = 4, .unkFlags = 0, .poseId = 51, .offset = {-9, -9}, .shadow = {-9, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {-7, -7}, .shadow = {-7, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {-2, -2}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 52, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 52, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 52, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 53, .offset = {-9, 0}, .shadow = {-9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-7, 0}, .shadow = {-7, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 54, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 5, .unkFlags = 0, .poseId = 54, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 1, .poseId = 54, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {-8, 8}, .shadow = {-8, 8} },
	{ .frames = 4, .unkFlags = 0, .poseId = 55, .offset = {-9, 9}, .shadow = {-9, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-7, 7}, .shadow = {-7, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-2, 2}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 56, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 5, .unkFlags = 0, .poseId = 56, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 1, .poseId = 56, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {0, 8}, .shadow = {0, 8} },
	{ .frames = 4, .unkFlags = 0, .poseId = 57, .offset = {0, 9}, .shadow = {0, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, 2}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 58, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 5, .unkFlags = 0, .poseId = 58, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 1, .poseId = 58, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {8, 8}, .shadow = {8, 8} },
	{ .frames = 4, .unkFlags = 0, .poseId = 59, .offset = {9, 9}, .shadow = {9, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {7, 7}, .shadow = {7, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {2, 2}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 60, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 60, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 60, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 61, .offset = {9, 0}, .shadow = {9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {7, 0}, .shadow = {7, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 62, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 5, .unkFlags = 0, .poseId = 62, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 1, .poseId = 62, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {8, -8}, .shadow = {8, -8} },
	{ .frames = 4, .unkFlags = 0, .poseId = 63, .offset = {9, -9}, .shadow = {9, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {7, -7}, .shadow = {7, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {2, -2}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_8_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 90, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 91, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 90, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 91, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 90, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 91, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_8_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 93, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 92, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 93, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 92, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 93, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_8_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 95, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 94, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 95, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 94, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 95, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_8_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 97, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 97, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 97, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_8_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 99, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 98, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 99, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 98, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 99, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_8_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 101, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 100, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 101, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 100, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 101, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_8_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 103, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 102, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 103, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 102, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 103, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_8_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 105, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 105, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 105, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {8, 4}, .shadow = {8, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {11, 11}, .shadow = {11, 11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {10, 19}, .shadow = {10, 17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 110, .offset = {0, 25}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 111, .offset = {-10, 19}, .shadow = {-10, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-11, 11}, .shadow = {-11, 11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 113, .offset = {-8, 4}, .shadow = {-8, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {9, 1}, .shadow = {9, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {16, 6}, .shadow = {16, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {22, 14}, .shadow = {22, 14} },
	{ .frames = 3, .unkFlags = 0, .poseId = 109, .offset = {23, 23}, .shadow = {23, 23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 110, .offset = {13, 25}, .shadow = {13, 25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {6, 19}, .shadow = {6, 19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 112, .offset = {2, 10}, .shadow = {2, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 113, .offset = {4, -5}, .shadow = {4, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {11, -5}, .shadow = {11, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {19, -2}, .shadow = {19, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 108, .offset = {24, 3}, .shadow = {24, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 109, .offset = {19, 6}, .shadow = {19, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {12, 8}, .shadow = {12, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 112, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {5, -16}, .shadow = {5, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {12, -18}, .shadow = {12, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 107, .offset = {21, -18}, .shadow = {21, -18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 108, .offset = {23, -13}, .shadow = {23, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {18, -4}, .shadow = {18, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {9, 1}, .shadow = {9, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {-9, -4}, .shadow = {-9, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-11, -10}, .shadow = {-11, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {-7, -15}, .shadow = {-7, -15} },
	{ .frames = 3, .unkFlags = 0, .poseId = 106, .offset = {0, -17}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 107, .offset = {7, -15}, .shadow = {7, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {11, -10}, .shadow = {11, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {9, -4}, .shadow = {9, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-5, -16}, .shadow = {-5, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-12, -18}, .shadow = {-12, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 113, .offset = {-21, -18}, .shadow = {-21, -18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 112, .offset = {-23, -13}, .shadow = {-23, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-18, -4}, .shadow = {-18, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {-9, -1}, .shadow = {-9, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {-4, -5}, .shadow = {-4, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-11, -5}, .shadow = {-11, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {-19, -2}, .shadow = {-19, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 112, .offset = {-24, 3}, .shadow = {-24, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 111, .offset = {-19, 6}, .shadow = {-19, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-12, 8}, .shadow = {-12, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {-9, 1}, .shadow = {-9, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {-16, 6}, .shadow = {-16, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-22, 14}, .shadow = {-22, 14} },
	{ .frames = 3, .unkFlags = 0, .poseId = 111, .offset = {-23, 23}, .shadow = {-23, 23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 110, .offset = {-13, 25}, .shadow = {-13, 25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {-6, 19}, .shadow = {-6, 19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {-2, 10}, .shadow = {-2, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 123, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 123, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 123, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 122, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 122, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 122, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 122, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 125, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 125, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 125, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 124, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 124, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 124, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 124, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 127, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 127, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 127, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 126, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 126, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 126, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 126, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 129, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 129, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 128, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 128, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 128, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 128, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 131, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 131, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 131, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 130, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 130, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 130, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 130, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 133, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 133, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 133, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 132, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 132, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 132, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 132, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 135, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 135, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 135, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 134, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 134, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 134, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 134, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSolrockAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 137, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 137, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 136, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 136, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 136, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 136, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sSolrockGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_1.4bpp.lz");
static const ax_sprite sSolrockSprites1[] = {
	{sSolrockGfx1, ARRAY_COUNT(sSolrockGfx1)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_2.4bpp.lz");
static const ax_sprite sSolrockSprites2[] = {
	{sSolrockGfx2, ARRAY_COUNT(sSolrockGfx2)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_3.4bpp.lz");
static const ax_sprite sSolrockSprites3[] = {
	{sSolrockGfx3, ARRAY_COUNT(sSolrockGfx3)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_4.4bpp.lz");
static const ax_sprite sSolrockSprites4[] = {
	{sSolrockGfx4, ARRAY_COUNT(sSolrockGfx4)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_5.4bpp.lz");
static const ax_sprite sSolrockSprites5[] = {
	{sSolrockGfx5, ARRAY_COUNT(sSolrockGfx5)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_6.4bpp.lz");
static const ax_sprite sSolrockSprites6[] = {
	{sSolrockGfx6, ARRAY_COUNT(sSolrockGfx6)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_7.4bpp.lz");
static const ax_sprite sSolrockSprites7[] = {
	{sSolrockGfx7, ARRAY_COUNT(sSolrockGfx7)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_8.4bpp.lz");
static const ax_sprite sSolrockSprites8[] = {
	{sSolrockGfx8, ARRAY_COUNT(sSolrockGfx8)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_9.4bpp.lz");
static const ax_sprite sSolrockSprites9[] = {
	{sSolrockGfx9, ARRAY_COUNT(sSolrockGfx9)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_10.4bpp.lz");
static const ax_sprite sSolrockSprites10[] = {
	{sSolrockGfx10, ARRAY_COUNT(sSolrockGfx10)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_11.4bpp.lz");
static const ax_sprite sSolrockSprites11[] = {
	{NULL, 32}, 
	{sSolrockGfx11, ARRAY_COUNT(sSolrockGfx11)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_12.4bpp.lz");
static const ax_sprite sSolrockSprites12[] = {
	{NULL, 32}, 
	{sSolrockGfx12, ARRAY_COUNT(sSolrockGfx12)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_13.4bpp.lz");
static const ax_sprite sSolrockSprites13[] = {
	{sSolrockGfx13, ARRAY_COUNT(sSolrockGfx13)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_14.4bpp.lz");
static const ax_sprite sSolrockSprites14[] = {
	{sSolrockGfx14, ARRAY_COUNT(sSolrockGfx14)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSolrockGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_15.4bpp.lz");
static const ax_sprite sSolrockSprites15[] = {
	{sSolrockGfx15, ARRAY_COUNT(sSolrockGfx15)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_16.4bpp.lz");
static const ax_sprite sSolrockSprites16[] = {
	{sSolrockGfx16, ARRAY_COUNT(sSolrockGfx16)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSolrockGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_17.4bpp.lz");
static const ax_sprite sSolrockSprites17[] = {
	{sSolrockGfx17, ARRAY_COUNT(sSolrockGfx17)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSolrockGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_18.4bpp.lz");
static const ax_sprite sSolrockSprites18[] = {
	{sSolrockGfx18, ARRAY_COUNT(sSolrockGfx18)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_19.4bpp.lz");
static const ax_sprite sSolrockSprites19[] = {
	{NULL, 32}, 
	{sSolrockGfx19, ARRAY_COUNT(sSolrockGfx19)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_20.4bpp.lz");
static const ax_sprite sSolrockSprites20[] = {
	{sSolrockGfx20, ARRAY_COUNT(sSolrockGfx20)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_21.4bpp.lz");
static const ax_sprite sSolrockSprites21[] = {
	{sSolrockGfx21, ARRAY_COUNT(sSolrockGfx21)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_22.4bpp.lz");
static const ax_sprite sSolrockSprites22[] = {
	{sSolrockGfx22, ARRAY_COUNT(sSolrockGfx22)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_23.4bpp.lz");
static const ax_sprite sSolrockSprites23[] = {
	{sSolrockGfx23, ARRAY_COUNT(sSolrockGfx23)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_24.4bpp.lz");
static const ax_sprite sSolrockSprites24[] = {
	{sSolrockGfx24, ARRAY_COUNT(sSolrockGfx24)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_25.4bpp.lz");
static const ax_sprite sSolrockSprites25[] = {
	{sSolrockGfx25, ARRAY_COUNT(sSolrockGfx25)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_26.4bpp.lz");
static const ax_sprite sSolrockSprites26[] = {
	{sSolrockGfx26, ARRAY_COUNT(sSolrockGfx26)}, 
	{NULL, 0}
};
static const u8 sSolrockGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/solrock/sprite_27.4bpp.lz");
static const ax_sprite sSolrockSprites27[] = {
	{sSolrockGfx27, ARRAY_COUNT(sSolrockGfx27)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesSolrock[] = {
	sSolrockPose1,
	sSolrockPose2,
	sSolrockPose3,
	sSolrockPose4,
	sSolrockPose5,
	sSolrockPose6,
	sSolrockPose7,
	sSolrockPose8,
	sSolrockPose9,
	sSolrockPose10,
	sSolrockPose11,
	sSolrockPose12,
	sSolrockPose13,
	sSolrockPose14,
	sSolrockPose15,
	sSolrockPose16,
	sSolrockPose1,
	sSolrockPose2,
	sSolrockPose3,
	sSolrockPose4,
	sSolrockPose5,
	sSolrockPose6,
	sSolrockPose7,
	sSolrockPose8,
	sSolrockPose9,
	sSolrockPose10,
	sSolrockPose11,
	sSolrockPose12,
	sSolrockPose13,
	sSolrockPose14,
	sSolrockPose15,
	sSolrockPose16,
	sSolrockPose1,
	sSolrockPose2,
	sSolrockPose3,
	sSolrockPose4,
	sSolrockPose5,
	sSolrockPose6,
	sSolrockPose7,
	sSolrockPose8,
	sSolrockPose9,
	sSolrockPose10,
	sSolrockPose11,
	sSolrockPose12,
	sSolrockPose13,
	sSolrockPose14,
	sSolrockPose15,
	sSolrockPose16,
	sSolrockPose1,
	sSolrockPose50,
	sSolrockPose3,
	sSolrockPose52,
	sSolrockPose5,
	sSolrockPose54,
	sSolrockPose7,
	sSolrockPose56,
	sSolrockPose9,
	sSolrockPose58,
	sSolrockPose11,
	sSolrockPose60,
	sSolrockPose13,
	sSolrockPose62,
	sSolrockPose15,
	sSolrockPose64,
	sSolrockPose1,
	sSolrockPose50,
	sSolrockPose3,
	sSolrockPose52,
	sSolrockPose5,
	sSolrockPose54,
	sSolrockPose7,
	sSolrockPose56,
	sSolrockPose9,
	sSolrockPose58,
	sSolrockPose11,
	sSolrockPose60,
	sSolrockPose13,
	sSolrockPose62,
	sSolrockPose15,
	sSolrockPose64,
	sSolrockPose81,
	sSolrockPose82,
	sSolrockPose83,
	sSolrockPose84,
	sSolrockPose85,
	sSolrockPose86,
	sSolrockPose87,
	sSolrockPose88,
	sSolrockPose89,
	sSolrockPose90,
	sSolrockPose1,
	sSolrockPose2,
	sSolrockPose3,
	sSolrockPose4,
	sSolrockPose5,
	sSolrockPose6,
	sSolrockPose7,
	sSolrockPose8,
	sSolrockPose9,
	sSolrockPose10,
	sSolrockPose11,
	sSolrockPose12,
	sSolrockPose13,
	sSolrockPose14,
	sSolrockPose15,
	sSolrockPose16,
	sSolrockPose50,
	sSolrockPose64,
	sSolrockPose62,
	sSolrockPose60,
	sSolrockPose58,
	sSolrockPose56,
	sSolrockPose54,
	sSolrockPose52,
	sSolrockPose2,
	sSolrockPose4,
	sSolrockPose6,
	sSolrockPose8,
	sSolrockPose10,
	sSolrockPose12,
	sSolrockPose14,
	sSolrockPose16,
	sSolrockPose1,
	sSolrockPose50,
	sSolrockPose3,
	sSolrockPose52,
	sSolrockPose5,
	sSolrockPose54,
	sSolrockPose7,
	sSolrockPose56,
	sSolrockPose9,
	sSolrockPose58,
	sSolrockPose11,
	sSolrockPose60,
	sSolrockPose13,
	sSolrockPose62,
	sSolrockPose15,
	sSolrockPose64,
	sSolrockPose50,
	sSolrockPose64,
	sSolrockPose62,
	sSolrockPose60,
	sSolrockPose58,
	sSolrockPose56,
	sSolrockPose54,
	sSolrockPose52,
	sSolrockPose1,
	sSolrockPose15,
	sSolrockPose13,
	sSolrockPose11,
	sSolrockPose9,
	sSolrockPose7,
	sSolrockPose5,
	sSolrockPose3,
};

static const struct PositionSets sAxPositionsSolrock[] = {
	[0] = { .set = { {0, -9}, {-8, -13}, {9, -13}, {0, -11} } },
	[1] = { .set = { {0, -9}, {-9, -13}, {9, -13}, {0, -11} } },
	[2] = { .set = { {3, -8}, {7, -16}, {-7, -10}, {0, -11} } },
	[3] = { .set = { {3, -8}, {7, -16}, {-7, -10}, {0, -11} } },
	[4] = { .set = { {4, -9}, {0, -13}, {0, -8}, {0, -11} } },
	[5] = { .set = { {4, -9}, {0, -14}, {0, -8}, {0, -11} } },
	[6] = { .set = { {2, -10}, {-7, -16}, {7, -10}, {-1, -11} } },
	[7] = { .set = { {2, -10}, {-7, -16}, {7, -10}, {-1, -11} } },
	[8] = { .set = { {0, -12}, {9, -13}, {-9, -13}, {0, -11} } },
	[9] = { .set = { {0, -12}, {9, -13}, {-9, -13}, {0, -11} } },
	[10] = { .set = { {-2, -10}, {7, -16}, {-7, -10}, {1, -11} } },
	[11] = { .set = { {-2, -10}, {7, -16}, {-7, -10}, {1, -11} } },
	[12] = { .set = { {-4, -9}, {0, -13}, {0, -8}, {0, -11} } },
	[13] = { .set = { {-4, -9}, {0, -14}, {0, -8}, {0, -11} } },
	[14] = { .set = { {-3, -8}, {-7, -16}, {7, -10}, {0, -11} } },
	[15] = { .set = { {-3, -8}, {-7, -16}, {7, -10}, {0, -11} } },
	[16] = { .set = { {0, -9}, {-8, -13}, {9, -13}, {0, -11} } },
	[17] = { .set = { {0, -9}, {-9, -13}, {9, -13}, {0, -11} } },
	[18] = { .set = { {3, -8}, {7, -16}, {-7, -10}, {0, -11} } },
	[19] = { .set = { {3, -8}, {7, -16}, {-7, -10}, {0, -11} } },
	[20] = { .set = { {4, -9}, {0, -13}, {0, -8}, {0, -11} } },
	[21] = { .set = { {4, -9}, {0, -14}, {0, -8}, {0, -11} } },
	[22] = { .set = { {2, -10}, {-7, -16}, {7, -10}, {-1, -11} } },
	[23] = { .set = { {2, -10}, {-7, -16}, {7, -10}, {-1, -11} } },
	[24] = { .set = { {0, -12}, {9, -13}, {-9, -13}, {0, -11} } },
	[25] = { .set = { {0, -12}, {9, -13}, {-9, -13}, {0, -11} } },
	[26] = { .set = { {-2, -10}, {7, -16}, {-7, -10}, {1, -11} } },
	[27] = { .set = { {-2, -10}, {7, -16}, {-7, -10}, {1, -11} } },
	[28] = { .set = { {-4, -9}, {0, -13}, {0, -8}, {0, -11} } },
	[29] = { .set = { {-4, -9}, {0, -14}, {0, -8}, {0, -11} } },
	[30] = { .set = { {-3, -8}, {-7, -16}, {7, -10}, {0, -11} } },
	[31] = { .set = { {-3, -8}, {-7, -16}, {7, -10}, {0, -11} } },
	[32] = { .set = { {0, -9}, {-8, -13}, {9, -13}, {0, -11} } },
	[33] = { .set = { {0, -9}, {-9, -13}, {9, -13}, {0, -11} } },
	[34] = { .set = { {3, -8}, {7, -16}, {-7, -10}, {0, -11} } },
	[35] = { .set = { {3, -8}, {7, -16}, {-7, -10}, {0, -11} } },
	[36] = { .set = { {4, -9}, {0, -13}, {0, -8}, {0, -11} } },
	[37] = { .set = { {4, -9}, {0, -14}, {0, -8}, {0, -11} } },
	[38] = { .set = { {2, -10}, {-7, -16}, {7, -10}, {-1, -11} } },
	[39] = { .set = { {2, -10}, {-7, -16}, {7, -10}, {-1, -11} } },
	[40] = { .set = { {0, -12}, {9, -13}, {-9, -13}, {0, -11} } },
	[41] = { .set = { {0, -12}, {9, -13}, {-9, -13}, {0, -11} } },
	[42] = { .set = { {-2, -10}, {7, -16}, {-7, -10}, {1, -11} } },
	[43] = { .set = { {-2, -10}, {7, -16}, {-7, -10}, {1, -11} } },
	[44] = { .set = { {-4, -9}, {0, -13}, {0, -8}, {0, -11} } },
	[45] = { .set = { {-4, -9}, {0, -14}, {0, -8}, {0, -11} } },
	[46] = { .set = { {-3, -8}, {-7, -16}, {7, -10}, {0, -11} } },
	[47] = { .set = { {-3, -8}, {-7, -16}, {7, -10}, {0, -11} } },
	[48] = { .set = { {0, -9}, {-8, -13}, {9, -13}, {0, -11} } },
	[49] = { .set = { {0, -9}, {-9, -12}, {10, -12}, {0, -11} } },
	[50] = { .set = { {3, -8}, {7, -16}, {-7, -10}, {0, -11} } },
	[51] = { .set = { {4, -9}, {7, -16}, {-7, -8}, {0, -11} } },
	[52] = { .set = { {4, -9}, {0, -13}, {0, -8}, {0, -11} } },
	[53] = { .set = { {5, -10}, {-1, -12}, {1, -8}, {-1, -10} } },
	[54] = { .set = { {2, -10}, {-7, -16}, {7, -10}, {-1, -11} } },
	[55] = { .set = { {4, -11}, {-7, -16}, {7, -10}, {-1, -11} } },
	[56] = { .set = { {0, -12}, {9, -13}, {-9, -13}, {0, -11} } },
	[57] = { .set = { {0, -13}, {9, -12}, {-9, -12}, {0, -11} } },
	[58] = { .set = { {-2, -10}, {7, -16}, {-7, -10}, {1, -11} } },
	[59] = { .set = { {-4, -11}, {7, -16}, {-7, -10}, {1, -11} } },
	[60] = { .set = { {-4, -9}, {0, -13}, {0, -8}, {0, -11} } },
	[61] = { .set = { {-5, -10}, {1, -12}, {-1, -8}, {1, -10} } },
	[62] = { .set = { {-3, -8}, {-7, -16}, {7, -10}, {0, -11} } },
	[63] = { .set = { {-4, -9}, {-7, -16}, {7, -8}, {0, -11} } },
	[64] = { .set = { {0, -9}, {-8, -13}, {9, -13}, {0, -11} } },
	[65] = { .set = { {0, -9}, {-9, -12}, {10, -12}, {0, -11} } },
	[66] = { .set = { {3, -8}, {7, -16}, {-7, -10}, {0, -11} } },
	[67] = { .set = { {4, -9}, {7, -16}, {-7, -8}, {0, -11} } },
	[68] = { .set = { {4, -9}, {0, -13}, {0, -8}, {0, -11} } },
	[69] = { .set = { {5, -10}, {-1, -12}, {1, -8}, {-1, -10} } },
	[70] = { .set = { {2, -10}, {-7, -16}, {7, -10}, {-1, -11} } },
	[71] = { .set = { {4, -11}, {-7, -16}, {7, -10}, {-1, -11} } },
	[72] = { .set = { {0, -12}, {9, -13}, {-9, -13}, {0, -11} } },
	[73] = { .set = { {0, -13}, {9, -12}, {-9, -12}, {0, -11} } },
	[74] = { .set = { {-2, -10}, {7, -16}, {-7, -10}, {1, -11} } },
	[75] = { .set = { {-4, -11}, {7, -16}, {-7, -10}, {1, -11} } },
	[76] = { .set = { {-4, -9}, {0, -13}, {0, -8}, {0, -11} } },
	[77] = { .set = { {-5, -10}, {1, -12}, {-1, -8}, {1, -10} } },
	[78] = { .set = { {-3, -8}, {-7, -16}, {7, -10}, {0, -11} } },
	[79] = { .set = { {-4, -9}, {-7, -16}, {7, -8}, {0, -11} } },
	[80] = { .set = { {-5, -10}, {-6, -17}, {7, -7}, {0, -11} } },
	[81] = { .set = { {-5, -9}, {-6, -17}, {7, -7}, {0, -11} } },
	[82] = { .set = { {0, -10}, {-9, -10}, {10, -10}, {0, -12} } },
	[83] = { .set = { {4, -10}, {5, -18}, {-9, -8}, {-1, -11} } },
	[84] = { .set = { {4, -11}, {-2, -13}, {1, -9}, {-1, -11} } },
	[85] = { .set = { {2, -13}, {-8, -14}, {6, -10}, {-1, -10} } },
	[86] = { .set = { {0, -12}, {10, -10}, {-9, -10}, {0, -8} } },
	[87] = { .set = { {-3, -13}, {7, -14}, {-7, -10}, {0, -10} } },
	[88] = { .set = { {-5, -11}, {1, -13}, {-2, -9}, {0, -11} } },
	[89] = { .set = { {-5, -10}, {-6, -18}, {8, -8}, {0, -11} } },
	[90] = { .set = { {0, -9}, {-8, -13}, {9, -13}, {0, -11} } },
	[91] = { .set = { {0, -9}, {-9, -13}, {9, -13}, {0, -11} } },
	[92] = { .set = { {3, -8}, {7, -16}, {-7, -10}, {0, -11} } },
	[93] = { .set = { {3, -8}, {7, -16}, {-7, -10}, {0, -11} } },
	[94] = { .set = { {4, -9}, {0, -13}, {0, -8}, {0, -11} } },
	[95] = { .set = { {4, -9}, {0, -14}, {0, -8}, {0, -11} } },
	[96] = { .set = { {2, -10}, {-7, -16}, {7, -10}, {-1, -11} } },
	[97] = { .set = { {2, -10}, {-7, -16}, {7, -10}, {-1, -11} } },
	[98] = { .set = { {0, -12}, {9, -13}, {-9, -13}, {0, -11} } },
	[99] = { .set = { {0, -12}, {9, -13}, {-9, -13}, {0, -11} } },
	[100] = { .set = { {-2, -10}, {7, -16}, {-7, -10}, {1, -11} } },
	[101] = { .set = { {-2, -10}, {7, -16}, {-7, -10}, {1, -11} } },
	[102] = { .set = { {-4, -9}, {0, -13}, {0, -8}, {0, -11} } },
	[103] = { .set = { {-4, -9}, {0, -14}, {0, -8}, {0, -11} } },
	[104] = { .set = { {-3, -8}, {-7, -16}, {7, -10}, {0, -11} } },
	[105] = { .set = { {-3, -8}, {-7, -16}, {7, -10}, {0, -11} } },
	[106] = { .set = { {0, -9}, {-9, -12}, {10, -12}, {0, -11} } },
	[107] = { .set = { {-4, -9}, {-7, -16}, {7, -8}, {0, -11} } },
	[108] = { .set = { {-5, -10}, {1, -12}, {-1, -8}, {1, -10} } },
	[109] = { .set = { {-4, -11}, {7, -16}, {-7, -10}, {1, -11} } },
	[110] = { .set = { {0, -13}, {9, -12}, {-9, -12}, {0, -11} } },
	[111] = { .set = { {4, -11}, {-7, -16}, {7, -10}, {-1, -11} } },
	[112] = { .set = { {5, -10}, {-1, -12}, {1, -8}, {-1, -10} } },
	[113] = { .set = { {4, -9}, {7, -16}, {-7, -8}, {0, -11} } },
	[114] = { .set = { {0, -9}, {-9, -13}, {9, -13}, {0, -11} } },
	[115] = { .set = { {3, -8}, {7, -16}, {-7, -10}, {0, -11} } },
	[116] = { .set = { {4, -9}, {0, -14}, {0, -8}, {0, -11} } },
	[117] = { .set = { {2, -10}, {-7, -16}, {7, -10}, {-1, -11} } },
	[118] = { .set = { {0, -12}, {9, -13}, {-9, -13}, {0, -11} } },
	[119] = { .set = { {-2, -10}, {7, -16}, {-7, -10}, {1, -11} } },
	[120] = { .set = { {-4, -9}, {0, -14}, {0, -8}, {0, -11} } },
	[121] = { .set = { {-3, -8}, {-7, -16}, {7, -10}, {0, -11} } },
	[122] = { .set = { {0, -9}, {-8, -13}, {9, -13}, {0, -11} } },
	[123] = { .set = { {0, -9}, {-9, -12}, {10, -12}, {0, -11} } },
	[124] = { .set = { {3, -8}, {7, -16}, {-7, -10}, {0, -11} } },
	[125] = { .set = { {4, -9}, {7, -16}, {-7, -8}, {0, -11} } },
	[126] = { .set = { {4, -9}, {0, -13}, {0, -8}, {0, -11} } },
	[127] = { .set = { {5, -10}, {-1, -12}, {1, -8}, {-1, -10} } },
	[128] = { .set = { {2, -10}, {-7, -16}, {7, -10}, {-1, -11} } },
	[129] = { .set = { {4, -11}, {-7, -16}, {7, -10}, {-1, -11} } },
	[130] = { .set = { {0, -12}, {9, -13}, {-9, -13}, {0, -11} } },
	[131] = { .set = { {0, -13}, {9, -12}, {-9, -12}, {0, -11} } },
	[132] = { .set = { {-2, -10}, {7, -16}, {-7, -10}, {1, -11} } },
	[133] = { .set = { {-4, -11}, {7, -16}, {-7, -10}, {1, -11} } },
	[134] = { .set = { {-4, -9}, {0, -13}, {0, -8}, {0, -11} } },
	[135] = { .set = { {-5, -10}, {1, -12}, {-1, -8}, {1, -10} } },
	[136] = { .set = { {-3, -8}, {-7, -16}, {7, -10}, {0, -11} } },
	[137] = { .set = { {-4, -9}, {-7, -16}, {7, -8}, {0, -11} } },
	[138] = { .set = { {0, -9}, {-9, -12}, {10, -12}, {0, -11} } },
	[139] = { .set = { {-4, -9}, {-7, -16}, {7, -8}, {0, -11} } },
	[140] = { .set = { {-5, -10}, {1, -12}, {-1, -8}, {1, -10} } },
	[141] = { .set = { {-4, -11}, {7, -16}, {-7, -10}, {1, -11} } },
	[142] = { .set = { {0, -13}, {9, -12}, {-9, -12}, {0, -11} } },
	[143] = { .set = { {4, -11}, {-7, -16}, {7, -10}, {-1, -11} } },
	[144] = { .set = { {5, -10}, {-1, -12}, {1, -8}, {-1, -10} } },
	[145] = { .set = { {4, -9}, {7, -16}, {-7, -8}, {0, -11} } },
	[146] = { .set = { {0, -9}, {-8, -13}, {9, -13}, {0, -11} } },
	[147] = { .set = { {-3, -8}, {-7, -16}, {7, -10}, {0, -11} } },
	[148] = { .set = { {-4, -9}, {0, -13}, {0, -8}, {0, -11} } },
	[149] = { .set = { {-2, -10}, {7, -16}, {-7, -10}, {1, -11} } },
	[150] = { .set = { {0, -12}, {9, -13}, {-9, -13}, {0, -11} } },
	[151] = { .set = { {2, -10}, {-7, -16}, {7, -10}, {-1, -11} } },
	[152] = { .set = { {4, -9}, {0, -13}, {0, -8}, {0, -11} } },
	[153] = { .set = { {3, -8}, {7, -16}, {-7, -10}, {0, -11} } },
};

static const ax_anim *const sSolrockAnimTable1[] = {
	sSolrockAnims_1_1,
	sSolrockAnims_1_2,
	sSolrockAnims_1_3,
	sSolrockAnims_1_4,
	sSolrockAnims_1_5,
	sSolrockAnims_1_6,
	sSolrockAnims_1_7,
	sSolrockAnims_1_8,
};

static const ax_anim *const sSolrockAnimTable2[] = {
	gAxSharedAnim_00668,
	gAxSharedAnim_00921,
	gAxSharedAnim_01206,
	gAxSharedAnim_01430,
	gAxSharedAnim_01572,
	gAxSharedAnim_01688,
	gAxSharedAnim_01764,
	gAxSharedAnim_01823,
};

static const ax_anim *const sSolrockAnimTable3[] = {
	gAxSharedAnim_01838,
	gAxSharedAnim_01866,
	gAxSharedAnim_01882,
	gAxSharedAnim_01898,
	gAxSharedAnim_01919,
	gAxSharedAnim_01934,
	gAxSharedAnim_01943,
	gAxSharedAnim_01956,
};

static const ax_anim *const sSolrockAnimTable4[] = {
	sSolrockAnims_4_1,
	sSolrockAnims_4_2,
	sSolrockAnims_4_3,
	sSolrockAnims_4_4,
	sSolrockAnims_4_5,
	sSolrockAnims_4_6,
	sSolrockAnims_4_7,
	sSolrockAnims_4_8,
};

static const ax_anim *const sSolrockAnimTable5[] = {
	gAxSharedAnim_02050,
	gAxSharedAnim_02058,
	gAxSharedAnim_02070,
	gAxSharedAnim_02077,
	gAxSharedAnim_02084,
	gAxSharedAnim_02103,
	gAxSharedAnim_02117,
	gAxSharedAnim_02130,
};

static const ax_anim *const sSolrockAnimTable6[] = {
	gAxSharedAnim_00147,
	gAxSharedAnim_00147,
	gAxSharedAnim_00147,
	gAxSharedAnim_00147,
	gAxSharedAnim_00147,
	gAxSharedAnim_00147,
	gAxSharedAnim_00147,
	gAxSharedAnim_00147,
};

static const ax_anim *const sSolrockAnimTable7[] = {
	gAxSharedAnim_02162,
	gAxSharedAnim_02168,
	gAxSharedAnim_02176,
	gAxSharedAnim_02190,
	gAxSharedAnim_02201,
	gAxSharedAnim_02213,
	gAxSharedAnim_02221,
	gAxSharedAnim_02231,
};

static const ax_anim *const sSolrockAnimTable8[] = {
	sSolrockAnims_8_1,
	sSolrockAnims_8_2,
	sSolrockAnims_8_3,
	sSolrockAnims_8_4,
	sSolrockAnims_8_5,
	sSolrockAnims_8_6,
	sSolrockAnims_8_7,
	sSolrockAnims_8_8,
};

static const ax_anim *const sSolrockAnimTable9[] = {
	sSolrockAnims_9_1,
	sSolrockAnims_9_2,
	sSolrockAnims_9_3,
	sSolrockAnims_9_4,
	sSolrockAnims_9_5,
	sSolrockAnims_9_6,
	sSolrockAnims_9_7,
	sSolrockAnims_9_8,
};

static const ax_anim *const sSolrockAnimTable10[] = {
	gAxSharedAnim_00269,
	gAxSharedAnim_00275,
	gAxSharedAnim_00284,
	gAxSharedAnim_00293,
	gAxSharedAnim_00300,
	gAxSharedAnim_00310,
	gAxSharedAnim_00320,
	gAxSharedAnim_00326,
};

static const ax_anim *const sSolrockAnimTable11[] = {
	sSolrockAnims_11_1,
	sSolrockAnims_11_2,
	sSolrockAnims_11_3,
	sSolrockAnims_11_4,
	sSolrockAnims_11_5,
	sSolrockAnims_11_6,
	sSolrockAnims_11_7,
	sSolrockAnims_11_8,
};

static const ax_anim *const sSolrockAnimTable12[] = {
	gAxSharedAnim_00476,
	gAxSharedAnim_00528,
	gAxSharedAnim_00519,
	gAxSharedAnim_00511,
	gAxSharedAnim_00510,
	gAxSharedAnim_00502,
	gAxSharedAnim_00489,
	gAxSharedAnim_00478,
};

static const ax_anim *const sSolrockAnimTable13[] = {
	gAxSharedAnim_00542,
	gAxSharedAnim_00599,
	gAxSharedAnim_00595,
	gAxSharedAnim_00586,
	gAxSharedAnim_00576,
	gAxSharedAnim_00568,
	gAxSharedAnim_00558,
	gAxSharedAnim_00550,
};

static const ax_anim *const *const sAxAnimationsSolrock[] = {
	sSolrockAnimTable1,
	sSolrockAnimTable2,
	sSolrockAnimTable3,
	sSolrockAnimTable4,
	sSolrockAnimTable5,
	sSolrockAnimTable6,
	sSolrockAnimTable7,
	sSolrockAnimTable8,
	sSolrockAnimTable9,
	sSolrockAnimTable10,
	sSolrockAnimTable11,
	sSolrockAnimTable12,
	sSolrockAnimTable13,
};

static const ax_sprite *const sAxSpritesSolrock[] = {
	sSolrockSprites1,
	sSolrockSprites2,
	sSolrockSprites3,
	sSolrockSprites4,
	sSolrockSprites5,
	sSolrockSprites6,
	sSolrockSprites7,
	sSolrockSprites8,
	sSolrockSprites9,
	sSolrockSprites10,
	sSolrockSprites11,
	sSolrockSprites12,
	sSolrockSprites13,
	sSolrockSprites14,
	sSolrockSprites15,
	sSolrockSprites16,
	sSolrockSprites17,
	sSolrockSprites18,
	sSolrockSprites19,
	sSolrockSprites20,
	sSolrockSprites21,
	sSolrockSprites22,
	sSolrockSprites23,
	sSolrockSprites24,
	sSolrockSprites25,
	sSolrockSprites26,
	sSolrockSprites27,
};

static const axmain sAxMainSolrock = {
	.poses = sAxPosesSolrock,
	.animations = sAxAnimationsSolrock,
	.animCount = ARRAY_COUNT(sAxAnimationsSolrock),
	.spriteData = sAxSpritesSolrock,
	.positions = sAxPositionsSolrock,
};
