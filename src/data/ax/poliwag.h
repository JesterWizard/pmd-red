/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainPoliwag;
const SiroArchive gAxPoliwag = {"SIRO", &sAxMainPoliwag};

static const ax_pose sPoliwagPose1[] = {
	AX_POSE(0, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose3[] = {
	AX_POSE(2, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose4[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose5[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose6[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose8[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose10[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose11[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose12[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose13[] = {
	AX_POSE(12, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose14[] = {
	AX_POSE(13, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose15[] = {
	AX_POSE(14, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose16[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose17[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose18[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose19[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose20[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose21[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose22[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose23[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose24[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose74[] = {
	AX_POSE(18, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose76[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose78[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose80[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose82[] = {
	AX_POSE(22, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose84[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose86[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose88[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose113[] = {
	AX_POSE(24, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose114[] = {
	AX_POSE(25, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose115[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose116[] = {
	AX_POSE(27, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose117[] = {
	AX_POSE(28, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose118[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose119[] = {
	AX_POSE(30, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose120[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose121[] = {
	AX_POSE(28, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose122[] = {
	AX_POSE(27, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose148[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose149[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose150[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose151[] = {
	AX_POSE(22, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose152[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose153[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose183[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose187[] = {
	AX_POSE(1, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose188[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPoliwagPose194[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const u8 sPoliwagAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_1_1.lz");
static const u8 sPoliwagAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_1_2.lz");
static const u8 sPoliwagAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_1_3.lz");
static const u8 sPoliwagAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_1_4.lz");
static const u8 sPoliwagAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_1_5.lz");
static const u8 sPoliwagAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_1_6.lz");
static const u8 sPoliwagAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_1_7.lz");
static const u8 sPoliwagAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_1_8.lz");
static const u8 sPoliwagAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_2_1.lz");
static const u8 sPoliwagAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_2_2.lz");
static const u8 sPoliwagAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_2_3.lz");
static const u8 sPoliwagAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_2_4.lz");
static const u8 sPoliwagAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_2_5.lz");
static const u8 sPoliwagAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_2_6.lz");
static const u8 sPoliwagAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_2_7.lz");
static const u8 sPoliwagAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_2_8.lz");
static const u8 sPoliwagAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_3_1.lz");
static const u8 sPoliwagAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_3_2.lz");
static const u8 sPoliwagAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_3_3.lz");
static const u8 sPoliwagAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_3_4.lz");
static const u8 sPoliwagAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_3_5.lz");
static const u8 sPoliwagAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_3_6.lz");
static const u8 sPoliwagAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_3_7.lz");
static const u8 sPoliwagAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_3_8.lz");
static const u8 sPoliwagAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_4_1.lz");
static const u8 sPoliwagAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_4_2.lz");
static const u8 sPoliwagAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_4_3.lz");
static const u8 sPoliwagAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_4_4.lz");
static const u8 sPoliwagAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_4_5.lz");
static const u8 sPoliwagAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_4_6.lz");
static const u8 sPoliwagAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_4_7.lz");
static const u8 sPoliwagAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_4_8.lz");
static const u8 sPoliwagAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_5_1.lz");
static const u8 sPoliwagAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_5_2.lz");
static const u8 sPoliwagAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_5_3.lz");
static const u8 sPoliwagAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_5_4.lz");
static const u8 sPoliwagAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_5_5.lz");
static const u8 sPoliwagAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_5_6.lz");
static const u8 sPoliwagAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_5_7.lz");
static const u8 sPoliwagAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_5_8.lz");
static const ax_anim sPoliwagAnims_7_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {-2, -2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 115, .offset = {-1, -1}, .shadow = {-3, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPoliwagAnims_7_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {2, -2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 121, .offset = {1, -1}, .shadow = {3, -3} },
	AX_ANIM_TERMINATOR
};
static const u8 sPoliwagAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_8_1.lz");
static const u8 sPoliwagAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_8_2.lz");
static const u8 sPoliwagAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_8_3.lz");
static const u8 sPoliwagAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_8_4.lz");
static const u8 sPoliwagAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_8_5.lz");
static const u8 sPoliwagAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_8_6.lz");
static const u8 sPoliwagAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_8_7.lz");
static const u8 sPoliwagAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_8_8.lz");
static const u8 sPoliwagAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_9_2.lz");
static const u8 sPoliwagAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_9_3.lz");
static const u8 sPoliwagAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_9_5.lz");
static const u8 sPoliwagAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_9_7.lz");
static const u8 sPoliwagAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_9_8.lz");
static const u8 sPoliwagAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_11_1.lz");
static const u8 sPoliwagAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_11_2.lz");
static const u8 sPoliwagAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_11_3.lz");
static const u8 sPoliwagAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_11_4.lz");
static const u8 sPoliwagAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_11_5.lz");
static const u8 sPoliwagAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_11_6.lz");
static const u8 sPoliwagAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_11_7.lz");
static const u8 sPoliwagAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/poliwag/sPoliwagAnims_11_8.lz");

static const u8 sPoliwagGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_1.4bpp.lz");
static const ax_sprite sPoliwagSprites1[] = {
	{sPoliwagGfx1, ARRAY_COUNT(sPoliwagGfx1)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_2.4bpp.lz");
static const ax_sprite sPoliwagSprites2[] = {
	{sPoliwagGfx2, ARRAY_COUNT(sPoliwagGfx2)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_3.4bpp.lz");
static const ax_sprite sPoliwagSprites3[] = {
	{sPoliwagGfx3, ARRAY_COUNT(sPoliwagGfx3)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_4.4bpp.lz");
static const ax_sprite sPoliwagSprites4[] = {
	{sPoliwagGfx4, ARRAY_COUNT(sPoliwagGfx4)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_5.4bpp.lz");
static const ax_sprite sPoliwagSprites5[] = {
	{sPoliwagGfx5, ARRAY_COUNT(sPoliwagGfx5)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_6.4bpp.lz");
static const ax_sprite sPoliwagSprites6[] = {
	{sPoliwagGfx6, ARRAY_COUNT(sPoliwagGfx6)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_7.4bpp.lz");
static const ax_sprite sPoliwagSprites7[] = {
	{sPoliwagGfx7, ARRAY_COUNT(sPoliwagGfx7)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_8.4bpp.lz");
static const ax_sprite sPoliwagSprites8[] = {
	{sPoliwagGfx8, ARRAY_COUNT(sPoliwagGfx8)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_9.4bpp.lz");
static const ax_sprite sPoliwagSprites9[] = {
	{sPoliwagGfx9, ARRAY_COUNT(sPoliwagGfx9)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_10.4bpp.lz");
static const ax_sprite sPoliwagSprites10[] = {
	{sPoliwagGfx10, ARRAY_COUNT(sPoliwagGfx10)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_11.4bpp.lz");
static const ax_sprite sPoliwagSprites11[] = {
	{sPoliwagGfx11, ARRAY_COUNT(sPoliwagGfx11)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_12.4bpp.lz");
static const ax_sprite sPoliwagSprites12[] = {
	{sPoliwagGfx12, ARRAY_COUNT(sPoliwagGfx12)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_13.4bpp.lz");
static const ax_sprite sPoliwagSprites13[] = {
	{sPoliwagGfx13, ARRAY_COUNT(sPoliwagGfx13)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_14.4bpp.lz");
static const ax_sprite sPoliwagSprites14[] = {
	{sPoliwagGfx14, ARRAY_COUNT(sPoliwagGfx14)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_15.4bpp.lz");
static const ax_sprite sPoliwagSprites15[] = {
	{sPoliwagGfx15, ARRAY_COUNT(sPoliwagGfx15)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_16.4bpp.lz");
static const ax_sprite sPoliwagSprites16[] = {
	{sPoliwagGfx16, ARRAY_COUNT(sPoliwagGfx16)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_17.4bpp.lz");
static const ax_sprite sPoliwagSprites17[] = {
	{sPoliwagGfx17, ARRAY_COUNT(sPoliwagGfx17)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_18.4bpp.lz");
static const ax_sprite sPoliwagSprites18[] = {
	{sPoliwagGfx18, ARRAY_COUNT(sPoliwagGfx18)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_19.4bpp.lz");
static const ax_sprite sPoliwagSprites19[] = {
	{sPoliwagGfx19, ARRAY_COUNT(sPoliwagGfx19)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_20.4bpp.lz");
static const u8 sPoliwagGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_20_1.4bpp.lz");
static const u8 sPoliwagGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_20_2.4bpp.lz");
static const ax_sprite sPoliwagSprites20[] = {
	{NULL, 64}, 
	{sPoliwagGfx20, ARRAY_COUNT(sPoliwagGfx20)}, 
	{NULL, 32}, 
	{sPoliwagGfx20_1, ARRAY_COUNT(sPoliwagGfx20_1)}, 
	{NULL, 32}, 
	{sPoliwagGfx20_2, ARRAY_COUNT(sPoliwagGfx20_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_21.4bpp.lz");
static const u8 sPoliwagGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_21_1.4bpp.lz");
static const ax_sprite sPoliwagSprites21[] = {
	{sPoliwagGfx21, ARRAY_COUNT(sPoliwagGfx21)}, 
	{NULL, 64}, 
	{sPoliwagGfx21_1, ARRAY_COUNT(sPoliwagGfx21_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_22.4bpp.lz");
static const u8 sPoliwagGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_22_1.4bpp.lz");
static const u8 sPoliwagGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_22_2.4bpp.lz");
static const u8 sPoliwagGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_22_3.4bpp.lz");
static const ax_sprite sPoliwagSprites22[] = {
	{sPoliwagGfx22, ARRAY_COUNT(sPoliwagGfx22)}, 
	{NULL, 64}, 
	{sPoliwagGfx22_1, ARRAY_COUNT(sPoliwagGfx22_1)}, 
	{NULL, 64}, 
	{sPoliwagGfx22_2, ARRAY_COUNT(sPoliwagGfx22_2)}, 
	{NULL, 96}, 
	{sPoliwagGfx22_3, ARRAY_COUNT(sPoliwagGfx22_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_23.4bpp.lz");
static const ax_sprite sPoliwagSprites23[] = {
	{sPoliwagGfx23, ARRAY_COUNT(sPoliwagGfx23)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_24.4bpp.lz");
static const u8 sPoliwagGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_24_1.4bpp.lz");
static const u8 sPoliwagGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_24_2.4bpp.lz");
static const ax_sprite sPoliwagSprites24[] = {
	{sPoliwagGfx24, ARRAY_COUNT(sPoliwagGfx24)}, 
	{NULL, 64}, 
	{sPoliwagGfx24_1, ARRAY_COUNT(sPoliwagGfx24_1)}, 
	{NULL, 32}, 
	{sPoliwagGfx24_2, ARRAY_COUNT(sPoliwagGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_25.4bpp.lz");
static const ax_sprite sPoliwagSprites25[] = {
	{sPoliwagGfx25, ARRAY_COUNT(sPoliwagGfx25)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_26.4bpp.lz");
static const ax_sprite sPoliwagSprites26[] = {
	{sPoliwagGfx26, ARRAY_COUNT(sPoliwagGfx26)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_27.4bpp.lz");
static const ax_sprite sPoliwagSprites27[] = {
	{sPoliwagGfx27, ARRAY_COUNT(sPoliwagGfx27)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_28.4bpp.lz");
static const ax_sprite sPoliwagSprites28[] = {
	{sPoliwagGfx28, ARRAY_COUNT(sPoliwagGfx28)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_29.4bpp.lz");
static const ax_sprite sPoliwagSprites29[] = {
	{sPoliwagGfx29, ARRAY_COUNT(sPoliwagGfx29)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_30.4bpp.lz");
static const ax_sprite sPoliwagSprites30[] = {
	{sPoliwagGfx30, ARRAY_COUNT(sPoliwagGfx30)}, 
	{NULL, 0}
};
static const u8 sPoliwagGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/poliwag/sprite_31.4bpp.lz");
static const ax_sprite sPoliwagSprites31[] = {
	{sPoliwagGfx31, ARRAY_COUNT(sPoliwagGfx31)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesPoliwag[] = {
	sPoliwagPose1,
	sPoliwagPose2,
	sPoliwagPose3,
	sPoliwagPose4,
	sPoliwagPose5,
	sPoliwagPose6,
	sPoliwagPose7,
	sPoliwagPose8,
	sPoliwagPose9,
	sPoliwagPose10,
	sPoliwagPose11,
	sPoliwagPose12,
	sPoliwagPose13,
	sPoliwagPose14,
	sPoliwagPose15,
	sPoliwagPose16,
	sPoliwagPose17,
	sPoliwagPose18,
	sPoliwagPose19,
	sPoliwagPose20,
	sPoliwagPose21,
	sPoliwagPose22,
	sPoliwagPose23,
	sPoliwagPose24,
	sPoliwagPose1,
	sPoliwagPose2,
	sPoliwagPose3,
	sPoliwagPose4,
	sPoliwagPose5,
	sPoliwagPose6,
	sPoliwagPose7,
	sPoliwagPose8,
	sPoliwagPose9,
	sPoliwagPose10,
	sPoliwagPose11,
	sPoliwagPose12,
	sPoliwagPose13,
	sPoliwagPose14,
	sPoliwagPose15,
	sPoliwagPose16,
	sPoliwagPose17,
	sPoliwagPose18,
	sPoliwagPose19,
	sPoliwagPose20,
	sPoliwagPose21,
	sPoliwagPose22,
	sPoliwagPose23,
	sPoliwagPose24,
	sPoliwagPose1,
	sPoliwagPose2,
	sPoliwagPose3,
	sPoliwagPose4,
	sPoliwagPose5,
	sPoliwagPose6,
	sPoliwagPose7,
	sPoliwagPose8,
	sPoliwagPose9,
	sPoliwagPose10,
	sPoliwagPose11,
	sPoliwagPose12,
	sPoliwagPose13,
	sPoliwagPose14,
	sPoliwagPose15,
	sPoliwagPose16,
	sPoliwagPose17,
	sPoliwagPose18,
	sPoliwagPose19,
	sPoliwagPose20,
	sPoliwagPose21,
	sPoliwagPose22,
	sPoliwagPose23,
	sPoliwagPose24,
	sPoliwagPose1,
	sPoliwagPose74,
	sPoliwagPose4,
	sPoliwagPose76,
	sPoliwagPose7,
	sPoliwagPose78,
	sPoliwagPose10,
	sPoliwagPose80,
	sPoliwagPose13,
	sPoliwagPose82,
	sPoliwagPose16,
	sPoliwagPose84,
	sPoliwagPose19,
	sPoliwagPose86,
	sPoliwagPose22,
	sPoliwagPose88,
	sPoliwagPose1,
	sPoliwagPose2,
	sPoliwagPose3,
	sPoliwagPose4,
	sPoliwagPose5,
	sPoliwagPose6,
	sPoliwagPose7,
	sPoliwagPose8,
	sPoliwagPose9,
	sPoliwagPose10,
	sPoliwagPose11,
	sPoliwagPose12,
	sPoliwagPose13,
	sPoliwagPose14,
	sPoliwagPose15,
	sPoliwagPose16,
	sPoliwagPose17,
	sPoliwagPose18,
	sPoliwagPose19,
	sPoliwagPose20,
	sPoliwagPose21,
	sPoliwagPose22,
	sPoliwagPose23,
	sPoliwagPose24,
	sPoliwagPose113,
	sPoliwagPose114,
	sPoliwagPose115,
	sPoliwagPose116,
	sPoliwagPose117,
	sPoliwagPose118,
	sPoliwagPose119,
	sPoliwagPose120,
	sPoliwagPose121,
	sPoliwagPose122,
	sPoliwagPose1,
	sPoliwagPose2,
	sPoliwagPose3,
	sPoliwagPose4,
	sPoliwagPose5,
	sPoliwagPose6,
	sPoliwagPose7,
	sPoliwagPose8,
	sPoliwagPose9,
	sPoliwagPose10,
	sPoliwagPose11,
	sPoliwagPose12,
	sPoliwagPose13,
	sPoliwagPose14,
	sPoliwagPose15,
	sPoliwagPose16,
	sPoliwagPose17,
	sPoliwagPose18,
	sPoliwagPose19,
	sPoliwagPose20,
	sPoliwagPose21,
	sPoliwagPose22,
	sPoliwagPose23,
	sPoliwagPose24,
	sPoliwagPose74,
	sPoliwagPose148,
	sPoliwagPose149,
	sPoliwagPose150,
	sPoliwagPose151,
	sPoliwagPose152,
	sPoliwagPose153,
	sPoliwagPose76,
	sPoliwagPose74,
	sPoliwagPose76,
	sPoliwagPose153,
	sPoliwagPose152,
	sPoliwagPose151,
	sPoliwagPose150,
	sPoliwagPose149,
	sPoliwagPose148,
	sPoliwagPose1,
	sPoliwagPose2,
	sPoliwagPose3,
	sPoliwagPose4,
	sPoliwagPose5,
	sPoliwagPose6,
	sPoliwagPose7,
	sPoliwagPose8,
	sPoliwagPose9,
	sPoliwagPose10,
	sPoliwagPose11,
	sPoliwagPose12,
	sPoliwagPose13,
	sPoliwagPose14,
	sPoliwagPose15,
	sPoliwagPose16,
	sPoliwagPose17,
	sPoliwagPose18,
	sPoliwagPose19,
	sPoliwagPose20,
	sPoliwagPose183,
	sPoliwagPose22,
	sPoliwagPose23,
	sPoliwagPose24,
	sPoliwagPose187,
	sPoliwagPose188,
	sPoliwagPose20,
	sPoliwagPose17,
	sPoliwagPose14,
	sPoliwagPose11,
	sPoliwagPose8,
	sPoliwagPose194,
	sPoliwagPose1,
	sPoliwagPose22,
	sPoliwagPose19,
	sPoliwagPose16,
	sPoliwagPose13,
	sPoliwagPose10,
	sPoliwagPose7,
	sPoliwagPose4,
};

static const struct PositionSets sAxPositionsPoliwag[] = {
	[0] = { .set = { {0, -7}, {-7, -7}, {6, -7}, {0, -9} } },
	[1] = { .set = { {0, -12}, {-7, -10}, {6, -10}, {0, -11} } },
	[2] = { .set = { {0, -5}, {-7, -6}, {6, -6}, {0, -6} } },
	[3] = { .set = { {3, -8}, {-6, -7}, {5, -10}, {-1, -8} } },
	[4] = { .set = { {3, -12}, {-6, -10}, {5, -13}, {0, -11} } },
	[5] = { .set = { {3, -6}, {-6, -6}, {5, -8}, {1, -7} } },
	[6] = { .set = { {6, -10}, {0, -9}, {-2, -6}, {-1, -8} } },
	[7] = { .set = { {5, -14}, {0, -12}, {-2, -9}, {-1, -11} } },
	[8] = { .set = { {7, -7}, {0, -8}, {-2, -5}, {-1, -7} } },
	[9] = { .set = { {3, -12}, {-5, -10}, {4, -6}, {-1, -8} } },
	[10] = { .set = { {2, -13}, {-5, -12}, {4, -8}, {-1, -10} } },
	[11] = { .set = { {2, -9}, {-5, -9}, {4, -5}, {-1, -7} } },
	[12] = { .set = { {0, -11}, {6, -8}, {-7, -8}, {0, -8} } },
	[13] = { .set = { {0, -15}, {6, -10}, {-7, -10}, {0, -10} } },
	[14] = { .set = { {0, -9}, {6, -7}, {-7, -7}, {0, -8} } },
	[15] = { .set = { {-4, -12}, {4, -10}, {-5, -6}, {0, -8} } },
	[16] = { .set = { {-3, -13}, {4, -12}, {-5, -8}, {0, -10} } },
	[17] = { .set = { {-3, -9}, {4, -9}, {-5, -5}, {0, -7} } },
	[18] = { .set = { {-7, -10}, {-1, -9}, {1, -6}, {0, -8} } },
	[19] = { .set = { {-6, -14}, {-1, -12}, {1, -9}, {0, -11} } },
	[20] = { .set = { {-8, -7}, {-1, -8}, {1, -5}, {0, -7} } },
	[21] = { .set = { {-4, -8}, {-5, -11}, {4, -7}, {0, -8} } },
	[22] = { .set = { {-4, -12}, {-5, -13}, {4, -9}, {0, -11} } },
	[23] = { .set = { {-5, -6}, {-5, -9}, {4, -5}, {0, -7} } },
	[24] = { .set = { {0, -7}, {-7, -7}, {6, -7}, {0, -9} } },
	[25] = { .set = { {0, -12}, {-7, -10}, {6, -10}, {0, -11} } },
	[26] = { .set = { {0, -5}, {-7, -6}, {6, -6}, {0, -6} } },
	[27] = { .set = { {3, -8}, {-6, -7}, {5, -10}, {-1, -8} } },
	[28] = { .set = { {3, -12}, {-6, -10}, {5, -13}, {0, -11} } },
	[29] = { .set = { {3, -6}, {-6, -6}, {5, -8}, {1, -7} } },
	[30] = { .set = { {6, -10}, {0, -9}, {-2, -6}, {-1, -8} } },
	[31] = { .set = { {5, -14}, {0, -12}, {-2, -9}, {-1, -11} } },
	[32] = { .set = { {7, -7}, {0, -8}, {-2, -5}, {-1, -7} } },
	[33] = { .set = { {3, -12}, {-5, -10}, {4, -6}, {-1, -8} } },
	[34] = { .set = { {2, -13}, {-5, -12}, {4, -8}, {-1, -10} } },
	[35] = { .set = { {2, -9}, {-5, -9}, {4, -5}, {-1, -7} } },
	[36] = { .set = { {0, -11}, {6, -8}, {-7, -8}, {0, -8} } },
	[37] = { .set = { {0, -15}, {6, -10}, {-7, -10}, {0, -10} } },
	[38] = { .set = { {0, -9}, {6, -7}, {-7, -7}, {0, -8} } },
	[39] = { .set = { {-4, -12}, {4, -10}, {-5, -6}, {0, -8} } },
	[40] = { .set = { {-3, -13}, {4, -12}, {-5, -8}, {0, -10} } },
	[41] = { .set = { {-3, -9}, {4, -9}, {-5, -5}, {0, -7} } },
	[42] = { .set = { {-7, -10}, {-1, -9}, {1, -6}, {0, -8} } },
	[43] = { .set = { {-6, -14}, {-1, -12}, {1, -9}, {0, -11} } },
	[44] = { .set = { {-8, -7}, {-1, -8}, {1, -5}, {0, -7} } },
	[45] = { .set = { {-4, -8}, {-5, -11}, {4, -7}, {0, -8} } },
	[46] = { .set = { {-4, -12}, {-5, -13}, {4, -9}, {0, -11} } },
	[47] = { .set = { {-5, -6}, {-5, -9}, {4, -5}, {0, -7} } },
	[48] = { .set = { {0, -7}, {-7, -7}, {6, -7}, {0, -9} } },
	[49] = { .set = { {0, -12}, {-7, -10}, {6, -10}, {0, -11} } },
	[50] = { .set = { {0, -5}, {-7, -6}, {6, -6}, {0, -6} } },
	[51] = { .set = { {3, -8}, {-6, -7}, {5, -10}, {-1, -8} } },
	[52] = { .set = { {3, -12}, {-6, -10}, {5, -13}, {0, -11} } },
	[53] = { .set = { {3, -6}, {-6, -6}, {5, -8}, {1, -7} } },
	[54] = { .set = { {6, -10}, {0, -9}, {-2, -6}, {-1, -8} } },
	[55] = { .set = { {5, -14}, {0, -12}, {-2, -9}, {-1, -11} } },
	[56] = { .set = { {7, -7}, {0, -8}, {-2, -5}, {-1, -7} } },
	[57] = { .set = { {3, -12}, {-5, -10}, {4, -6}, {-1, -8} } },
	[58] = { .set = { {2, -13}, {-5, -12}, {4, -8}, {-1, -10} } },
	[59] = { .set = { {2, -9}, {-5, -9}, {4, -5}, {-1, -7} } },
	[60] = { .set = { {0, -11}, {6, -8}, {-7, -8}, {0, -8} } },
	[61] = { .set = { {0, -15}, {6, -10}, {-7, -10}, {0, -10} } },
	[62] = { .set = { {0, -9}, {6, -7}, {-7, -7}, {0, -8} } },
	[63] = { .set = { {-4, -12}, {4, -10}, {-5, -6}, {0, -8} } },
	[64] = { .set = { {-3, -13}, {4, -12}, {-5, -8}, {0, -10} } },
	[65] = { .set = { {-3, -9}, {4, -9}, {-5, -5}, {0, -7} } },
	[66] = { .set = { {-7, -10}, {-1, -9}, {1, -6}, {0, -8} } },
	[67] = { .set = { {-6, -14}, {-1, -12}, {1, -9}, {0, -11} } },
	[68] = { .set = { {-8, -7}, {-1, -8}, {1, -5}, {0, -7} } },
	[69] = { .set = { {-4, -8}, {-5, -11}, {4, -7}, {0, -8} } },
	[70] = { .set = { {-4, -12}, {-5, -13}, {4, -9}, {0, -11} } },
	[71] = { .set = { {-5, -6}, {-5, -9}, {4, -5}, {0, -7} } },
	[72] = { .set = { {0, -7}, {-7, -7}, {6, -7}, {0, -9} } },
	[73] = { .set = { {0, -6}, {-7, -7}, {6, -7}, {0, -8} } },
	[74] = { .set = { {3, -8}, {-6, -7}, {5, -10}, {-1, -8} } },
	[75] = { .set = { {6, -8}, {-3, -5}, {5, -9}, {1, -7} } },
	[76] = { .set = { {6, -10}, {0, -9}, {-2, -6}, {-1, -8} } },
	[77] = { .set = { {11, -11}, {4, -10}, {1, -7}, {3, -9} } },
	[78] = { .set = { {3, -12}, {-5, -10}, {4, -6}, {-1, -8} } },
	[79] = { .set = { {8, -16}, {-2, -13}, {8, -9}, {2, -10} } },
	[80] = { .set = { {0, -11}, {6, -8}, {-7, -8}, {0, -8} } },
	[81] = { .set = { {0, -20}, {6, -12}, {-7, -12}, {0, -12} } },
	[82] = { .set = { {-4, -12}, {4, -10}, {-5, -6}, {0, -8} } },
	[83] = { .set = { {-9, -16}, {1, -13}, {-9, -9}, {-3, -10} } },
	[84] = { .set = { {-7, -10}, {-1, -9}, {1, -6}, {0, -8} } },
	[85] = { .set = { {-12, -11}, {-5, -10}, {-2, -7}, {-4, -9} } },
	[86] = { .set = { {-4, -8}, {-5, -11}, {4, -7}, {0, -8} } },
	[87] = { .set = { {-7, -8}, {-6, -9}, {2, -5}, {-2, -7} } },
	[88] = { .set = { {0, -7}, {-7, -7}, {6, -7}, {0, -9} } },
	[89] = { .set = { {0, -12}, {-7, -10}, {6, -10}, {0, -11} } },
	[90] = { .set = { {0, -5}, {-7, -6}, {6, -6}, {0, -6} } },
	[91] = { .set = { {3, -8}, {-6, -7}, {5, -10}, {-1, -8} } },
	[92] = { .set = { {3, -12}, {-6, -10}, {5, -13}, {0, -11} } },
	[93] = { .set = { {3, -6}, {-6, -6}, {5, -8}, {1, -7} } },
	[94] = { .set = { {6, -10}, {0, -9}, {-2, -6}, {-1, -8} } },
	[95] = { .set = { {5, -14}, {0, -12}, {-2, -9}, {-1, -11} } },
	[96] = { .set = { {7, -7}, {0, -8}, {-2, -5}, {-1, -7} } },
	[97] = { .set = { {3, -12}, {-5, -10}, {4, -6}, {-1, -8} } },
	[98] = { .set = { {2, -13}, {-5, -12}, {4, -8}, {-1, -10} } },
	[99] = { .set = { {2, -9}, {-5, -9}, {4, -5}, {-1, -7} } },
	[100] = { .set = { {0, -11}, {6, -8}, {-7, -8}, {0, -8} } },
	[101] = { .set = { {0, -15}, {6, -10}, {-7, -10}, {0, -10} } },
	[102] = { .set = { {0, -9}, {6, -7}, {-7, -7}, {0, -8} } },
	[103] = { .set = { {-4, -12}, {4, -10}, {-5, -6}, {0, -8} } },
	[104] = { .set = { {-3, -13}, {4, -12}, {-5, -8}, {0, -10} } },
	[105] = { .set = { {-3, -9}, {4, -9}, {-5, -5}, {0, -7} } },
	[106] = { .set = { {-7, -10}, {-1, -9}, {1, -6}, {0, -8} } },
	[107] = { .set = { {-6, -14}, {-1, -12}, {1, -9}, {0, -11} } },
	[108] = { .set = { {-8, -7}, {-1, -8}, {1, -5}, {0, -7} } },
	[109] = { .set = { {-4, -8}, {-5, -11}, {4, -7}, {0, -8} } },
	[110] = { .set = { {-4, -12}, {-5, -13}, {4, -9}, {0, -11} } },
	[111] = { .set = { {-5, -6}, {-5, -9}, {4, -5}, {0, -7} } },
	[112] = { .set = { {-3, -6}, {-3, -7}, {5, -4}, {2, -5} } },
	[113] = { .set = { {-3, -5}, {-3, -6}, {4, -3}, {1, -5} } },
	[114] = { .set = { {0, -4}, {-7, -4}, {6, -4}, {0, -5} } },
	[115] = { .set = { {1, -3}, {4, -7}, {-8, -3}, {-2, -5} } },
	[116] = { .set = { {5, -6}, {-2, -6}, {-4, -4}, {-3, -5} } },
	[117] = { .set = { {1, -6}, {-6, -6}, {3, -2}, {-2, -4} } },
	[118] = { .set = { {-1, -3}, {5, -5}, {-8, -5}, {-1, -4} } },
	[119] = { .set = { {-2, -6}, {5, -6}, {-4, -2}, {1, -4} } },
	[120] = { .set = { {-6, -6}, {1, -6}, {3, -4}, {2, -5} } },
	[121] = { .set = { {-2, -3}, {-5, -7}, {7, -3}, {1, -5} } },
	[122] = { .set = { {0, -7}, {-7, -7}, {6, -7}, {0, -9} } },
	[123] = { .set = { {0, -12}, {-7, -10}, {6, -10}, {0, -11} } },
	[124] = { .set = { {0, -5}, {-7, -6}, {6, -6}, {0, -6} } },
	[125] = { .set = { {3, -8}, {-6, -7}, {5, -10}, {-1, -8} } },
	[126] = { .set = { {3, -12}, {-6, -10}, {5, -13}, {0, -11} } },
	[127] = { .set = { {3, -6}, {-6, -6}, {5, -8}, {1, -7} } },
	[128] = { .set = { {6, -10}, {0, -9}, {-2, -6}, {-1, -8} } },
	[129] = { .set = { {5, -14}, {0, -12}, {-2, -9}, {-1, -11} } },
	[130] = { .set = { {7, -7}, {0, -8}, {-2, -5}, {-1, -7} } },
	[131] = { .set = { {3, -12}, {-5, -10}, {4, -6}, {-1, -8} } },
	[132] = { .set = { {2, -13}, {-5, -12}, {4, -8}, {-1, -10} } },
	[133] = { .set = { {2, -9}, {-5, -9}, {4, -5}, {-1, -7} } },
	[134] = { .set = { {0, -11}, {6, -8}, {-7, -8}, {0, -8} } },
	[135] = { .set = { {0, -15}, {6, -10}, {-7, -10}, {0, -10} } },
	[136] = { .set = { {0, -9}, {6, -7}, {-7, -7}, {0, -8} } },
	[137] = { .set = { {-4, -12}, {4, -10}, {-5, -6}, {0, -8} } },
	[138] = { .set = { {-3, -13}, {4, -12}, {-5, -8}, {0, -10} } },
	[139] = { .set = { {-3, -9}, {4, -9}, {-5, -5}, {0, -7} } },
	[140] = { .set = { {-7, -10}, {-1, -9}, {1, -6}, {0, -8} } },
	[141] = { .set = { {-6, -14}, {-1, -12}, {1, -9}, {0, -11} } },
	[142] = { .set = { {-8, -7}, {-1, -8}, {1, -5}, {0, -7} } },
	[143] = { .set = { {-4, -8}, {-5, -11}, {4, -7}, {0, -8} } },
	[144] = { .set = { {-4, -12}, {-5, -13}, {4, -9}, {0, -11} } },
	[145] = { .set = { {-5, -6}, {-5, -9}, {4, -5}, {0, -7} } },
	[146] = { .set = { {0, -6}, {-7, -7}, {6, -7}, {0, -8} } },
	[147] = { .set = { {-6, -8}, {-5, -9}, {3, -5}, {-1, -7} } },
	[148] = { .set = { {-10, -11}, {-3, -10}, {0, -7}, {-2, -9} } },
	[149] = { .set = { {-7, -15}, {3, -12}, {-7, -8}, {-1, -9} } },
	[150] = { .set = { {0, -18}, {6, -10}, {-7, -10}, {0, -10} } },
	[151] = { .set = { {6, -15}, {-4, -12}, {6, -8}, {0, -9} } },
	[152] = { .set = { {9, -11}, {2, -10}, {-1, -7}, {1, -9} } },
	[153] = { .set = { {6, -8}, {-3, -5}, {5, -9}, {1, -7} } },
	[154] = { .set = { {0, -6}, {-7, -7}, {6, -7}, {0, -8} } },
	[155] = { .set = { {6, -8}, {-3, -5}, {5, -9}, {1, -7} } },
	[156] = { .set = { {9, -11}, {2, -10}, {-1, -7}, {1, -9} } },
	[157] = { .set = { {6, -15}, {-4, -12}, {6, -8}, {0, -9} } },
	[158] = { .set = { {0, -18}, {6, -10}, {-7, -10}, {0, -10} } },
	[159] = { .set = { {-7, -15}, {3, -12}, {-7, -8}, {-1, -9} } },
	[160] = { .set = { {-10, -11}, {-3, -10}, {0, -7}, {-2, -9} } },
	[161] = { .set = { {-6, -8}, {-5, -9}, {3, -5}, {-1, -7} } },
	[162] = { .set = { {0, -7}, {-7, -7}, {6, -7}, {0, -9} } },
	[163] = { .set = { {0, -12}, {-7, -10}, {6, -10}, {0, -11} } },
	[164] = { .set = { {0, -5}, {-7, -6}, {6, -6}, {0, -6} } },
	[165] = { .set = { {3, -8}, {-6, -7}, {5, -10}, {-1, -8} } },
	[166] = { .set = { {3, -12}, {-6, -10}, {5, -13}, {0, -11} } },
	[167] = { .set = { {3, -6}, {-6, -6}, {5, -8}, {1, -7} } },
	[168] = { .set = { {6, -10}, {0, -9}, {-2, -6}, {-1, -8} } },
	[169] = { .set = { {5, -14}, {0, -12}, {-2, -9}, {-1, -11} } },
	[170] = { .set = { {7, -7}, {0, -8}, {-2, -5}, {-1, -7} } },
	[171] = { .set = { {3, -12}, {-5, -10}, {4, -6}, {-1, -8} } },
	[172] = { .set = { {2, -13}, {-5, -12}, {4, -8}, {-1, -10} } },
	[173] = { .set = { {2, -9}, {-5, -9}, {4, -5}, {-1, -7} } },
	[174] = { .set = { {0, -11}, {6, -8}, {-7, -8}, {0, -8} } },
	[175] = { .set = { {0, -15}, {6, -10}, {-7, -10}, {0, -10} } },
	[176] = { .set = { {0, -9}, {6, -7}, {-7, -7}, {0, -8} } },
	[177] = { .set = { {-4, -12}, {4, -10}, {-5, -6}, {0, -8} } },
	[178] = { .set = { {-3, -13}, {4, -12}, {-5, -8}, {0, -10} } },
	[179] = { .set = { {-3, -9}, {4, -9}, {-5, -5}, {0, -7} } },
	[180] = { .set = { {-7, -10}, {-1, -9}, {1, -6}, {0, -8} } },
	[181] = { .set = { {-6, -14}, {-1, -12}, {1, -9}, {0, -11} } },
	[182] = { .set = { {-7, -7}, {0, -8}, {2, -5}, {1, -7} } },
	[183] = { .set = { {-4, -8}, {-5, -11}, {4, -7}, {0, -8} } },
	[184] = { .set = { {-4, -12}, {-5, -13}, {4, -9}, {0, -11} } },
	[185] = { .set = { {-5, -6}, {-5, -9}, {4, -5}, {0, -7} } },
	[186] = { .set = { {0, -11}, {-7, -9}, {6, -9}, {0, -10} } },
	[187] = { .set = { {-4, -11}, {-5, -12}, {4, -8}, {0, -10} } },
	[188] = { .set = { {-6, -14}, {-1, -12}, {1, -9}, {0, -11} } },
	[189] = { .set = { {-3, -13}, {4, -12}, {-5, -8}, {0, -10} } },
	[190] = { .set = { {0, -15}, {6, -10}, {-7, -10}, {0, -10} } },
	[191] = { .set = { {2, -13}, {-5, -12}, {4, -8}, {-1, -10} } },
	[192] = { .set = { {5, -14}, {0, -12}, {-2, -9}, {-1, -11} } },
	[193] = { .set = { {3, -11}, {-6, -9}, {5, -12}, {0, -10} } },
	[194] = { .set = { {0, -7}, {-7, -7}, {6, -7}, {0, -9} } },
	[195] = { .set = { {-4, -8}, {-5, -11}, {4, -7}, {0, -8} } },
	[196] = { .set = { {-7, -10}, {-1, -9}, {1, -6}, {0, -8} } },
	[197] = { .set = { {-4, -12}, {4, -10}, {-5, -6}, {0, -8} } },
	[198] = { .set = { {0, -11}, {6, -8}, {-7, -8}, {0, -8} } },
	[199] = { .set = { {3, -12}, {-5, -10}, {4, -6}, {-1, -8} } },
	[200] = { .set = { {6, -10}, {0, -9}, {-2, -6}, {-1, -8} } },
	[201] = { .set = { {3, -8}, {-6, -7}, {5, -10}, {-1, -8} } },
};

static const ax_anim *const sPoliwagAnimTable1[] = {
	AX_ANIM_PTR(sPoliwagAnims_1_1),
	AX_ANIM_PTR(sPoliwagAnims_1_2),
	AX_ANIM_PTR(sPoliwagAnims_1_3),
	AX_ANIM_PTR(sPoliwagAnims_1_4),
	AX_ANIM_PTR(sPoliwagAnims_1_5),
	AX_ANIM_PTR(sPoliwagAnims_1_6),
	AX_ANIM_PTR(sPoliwagAnims_1_7),
	AX_ANIM_PTR(sPoliwagAnims_1_8),
};

static const ax_anim *const sPoliwagAnimTable2[] = {
	AX_ANIM_PTR(sPoliwagAnims_2_1),
	AX_ANIM_PTR(sPoliwagAnims_2_2),
	AX_ANIM_PTR(sPoliwagAnims_2_3),
	AX_ANIM_PTR(sPoliwagAnims_2_4),
	AX_ANIM_PTR(sPoliwagAnims_2_5),
	AX_ANIM_PTR(sPoliwagAnims_2_6),
	AX_ANIM_PTR(sPoliwagAnims_2_7),
	AX_ANIM_PTR(sPoliwagAnims_2_8),
};

static const ax_anim *const sPoliwagAnimTable3[] = {
	AX_ANIM_PTR(sPoliwagAnims_3_1),
	AX_ANIM_PTR(sPoliwagAnims_3_2),
	AX_ANIM_PTR(sPoliwagAnims_3_3),
	AX_ANIM_PTR(sPoliwagAnims_3_4),
	AX_ANIM_PTR(sPoliwagAnims_3_5),
	AX_ANIM_PTR(sPoliwagAnims_3_6),
	AX_ANIM_PTR(sPoliwagAnims_3_7),
	AX_ANIM_PTR(sPoliwagAnims_3_8),
};

static const ax_anim *const sPoliwagAnimTable4[] = {
	AX_ANIM_PTR(sPoliwagAnims_4_1),
	AX_ANIM_PTR(sPoliwagAnims_4_2),
	AX_ANIM_PTR(sPoliwagAnims_4_3),
	AX_ANIM_PTR(sPoliwagAnims_4_4),
	AX_ANIM_PTR(sPoliwagAnims_4_5),
	AX_ANIM_PTR(sPoliwagAnims_4_6),
	AX_ANIM_PTR(sPoliwagAnims_4_7),
	AX_ANIM_PTR(sPoliwagAnims_4_8),
};

static const ax_anim *const sPoliwagAnimTable5[] = {
	AX_ANIM_PTR(sPoliwagAnims_5_1),
	AX_ANIM_PTR(sPoliwagAnims_5_2),
	AX_ANIM_PTR(sPoliwagAnims_5_3),
	AX_ANIM_PTR(sPoliwagAnims_5_4),
	AX_ANIM_PTR(sPoliwagAnims_5_5),
	AX_ANIM_PTR(sPoliwagAnims_5_6),
	AX_ANIM_PTR(sPoliwagAnims_5_7),
	AX_ANIM_PTR(sPoliwagAnims_5_8),
};

static const ax_anim *const sPoliwagAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
};

static const ax_anim *const sPoliwagAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00266),
	AX_ANIM_PTR(sPoliwagAnims_7_2),
	AX_ANIM_PTR(gAxSharedAnim_00280),
	AX_ANIM_PTR(gAxSharedAnim_00290),
	AX_ANIM_PTR(gAxSharedAnim_00302),
	AX_ANIM_PTR(gAxSharedAnim_00315),
	AX_ANIM_PTR(gAxSharedAnim_00322),
	AX_ANIM_PTR(sPoliwagAnims_7_8),
};

static const ax_anim *const sPoliwagAnimTable8[] = {
	AX_ANIM_PTR(sPoliwagAnims_8_1),
	AX_ANIM_PTR(sPoliwagAnims_8_2),
	AX_ANIM_PTR(sPoliwagAnims_8_3),
	AX_ANIM_PTR(sPoliwagAnims_8_4),
	AX_ANIM_PTR(sPoliwagAnims_8_5),
	AX_ANIM_PTR(sPoliwagAnims_8_6),
	AX_ANIM_PTR(sPoliwagAnims_8_7),
	AX_ANIM_PTR(sPoliwagAnims_8_8),
};

static const ax_anim *const sPoliwagAnimTable9[] = {
	AX_ANIM_PTR(gAxSharedAnim_00535),
	AX_ANIM_PTR(sPoliwagAnims_9_2),
	AX_ANIM_PTR(sPoliwagAnims_9_3),
	AX_ANIM_PTR(gAxSharedAnim_00581),
	AX_ANIM_PTR(sPoliwagAnims_9_5),
	AX_ANIM_PTR(gAxSharedAnim_00563),
	AX_ANIM_PTR(sPoliwagAnims_9_7),
	AX_ANIM_PTR(sPoliwagAnims_9_8),
};

static const ax_anim *const sPoliwagAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00612),
	AX_ANIM_PTR(gAxSharedAnim_00622),
	AX_ANIM_PTR(gAxSharedAnim_00632),
	AX_ANIM_PTR(gAxSharedAnim_00642),
	AX_ANIM_PTR(gAxSharedAnim_00651),
	AX_ANIM_PTR(gAxSharedAnim_00660),
	AX_ANIM_PTR(gAxSharedAnim_00675),
	AX_ANIM_PTR(gAxSharedAnim_00686),
};

static const ax_anim *const sPoliwagAnimTable11[] = {
	AX_ANIM_PTR(sPoliwagAnims_11_1),
	AX_ANIM_PTR(sPoliwagAnims_11_2),
	AX_ANIM_PTR(sPoliwagAnims_11_3),
	AX_ANIM_PTR(sPoliwagAnims_11_4),
	AX_ANIM_PTR(sPoliwagAnims_11_5),
	AX_ANIM_PTR(sPoliwagAnims_11_6),
	AX_ANIM_PTR(sPoliwagAnims_11_7),
	AX_ANIM_PTR(sPoliwagAnims_11_8),
};

static const ax_anim *const sPoliwagAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01018),
	AX_ANIM_PTR(gAxSharedAnim_01127),
	AX_ANIM_PTR(gAxSharedAnim_01099),
	AX_ANIM_PTR(gAxSharedAnim_01085),
	AX_ANIM_PTR(gAxSharedAnim_01084),
	AX_ANIM_PTR(gAxSharedAnim_01065),
	AX_ANIM_PTR(gAxSharedAnim_01034),
	AX_ANIM_PTR(gAxSharedAnim_01019),
};

static const ax_anim *const sPoliwagAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01145),
	AX_ANIM_PTR(gAxSharedAnim_01227),
	AX_ANIM_PTR(gAxSharedAnim_01218),
	AX_ANIM_PTR(gAxSharedAnim_01201),
	AX_ANIM_PTR(gAxSharedAnim_01190),
	AX_ANIM_PTR(gAxSharedAnim_01179),
	AX_ANIM_PTR(gAxSharedAnim_01168),
	AX_ANIM_PTR(gAxSharedAnim_01157),
};

static const ax_anim *const *const sAxAnimationsPoliwag[] = {
	sPoliwagAnimTable1,
	sPoliwagAnimTable2,
	sPoliwagAnimTable3,
	sPoliwagAnimTable4,
	sPoliwagAnimTable5,
	sPoliwagAnimTable6,
	sPoliwagAnimTable7,
	sPoliwagAnimTable8,
	sPoliwagAnimTable9,
	sPoliwagAnimTable10,
	sPoliwagAnimTable11,
	sPoliwagAnimTable12,
	sPoliwagAnimTable13,
};

static const ax_sprite *const sAxSpritesPoliwag[] = {
	sPoliwagSprites1,
	sPoliwagSprites2,
	sPoliwagSprites3,
	sPoliwagSprites4,
	sPoliwagSprites5,
	sPoliwagSprites6,
	sPoliwagSprites7,
	sPoliwagSprites8,
	sPoliwagSprites9,
	sPoliwagSprites10,
	sPoliwagSprites11,
	sPoliwagSprites12,
	sPoliwagSprites13,
	sPoliwagSprites14,
	sPoliwagSprites15,
	sPoliwagSprites16,
	sPoliwagSprites17,
	sPoliwagSprites18,
	sPoliwagSprites19,
	sPoliwagSprites20,
	sPoliwagSprites21,
	sPoliwagSprites22,
	sPoliwagSprites23,
	sPoliwagSprites24,
	sPoliwagSprites25,
	sPoliwagSprites26,
	sPoliwagSprites27,
	sPoliwagSprites28,
	sPoliwagSprites29,
	sPoliwagSprites30,
	sPoliwagSprites31,
};

static const axmain sAxMainPoliwag = {
	.poses = sAxPosesPoliwag,
	.animations = sAxAnimationsPoliwag,
	.animCount = ARRAY_COUNT(sAxAnimationsPoliwag),
	.spriteData = sAxSpritesPoliwag,
	.positions = sAxPositionsPoliwag,
};
