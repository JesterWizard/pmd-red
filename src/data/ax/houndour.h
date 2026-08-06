/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainHoundour;
const SiroArchive gAxHoundour = {"SIRO", &sAxMainHoundour};

static const ax_pose sHoundourPose1[] = {
	AX_POSE(0, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose2[] = {
	AX_POSE(1, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose3[] = {
	AX_POSE(2, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose4[] = {
	AX_POSE(3, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose5[] = {
	AX_POSE(4, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose6[] = {
	AX_POSE(5, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose8[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose10[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose11[] = {
	AX_POSE(10, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose12[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose13[] = {
	AX_POSE(12, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose14[] = {
	AX_POSE(13, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose15[] = {
	AX_POSE(14, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose16[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose17[] = {
	AX_POSE(10, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose18[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose19[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose20[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose21[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose22[] = {
	AX_POSE(3, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose23[] = {
	AX_POSE(4, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose24[] = {
	AX_POSE(5, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose28[] = {
	AX_POSE(15, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose32[] = {
	AX_POSE(16, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose36[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose40[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose44[] = {
	AX_POSE(19, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose48[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose52[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose56[] = {
	AX_POSE(16, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose91[] = {
	AX_POSE(20, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose93[] = {
	AX_POSE(21, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose96[] = {
	AX_POSE(22, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose98[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose101[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose103[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose106[] = {
	AX_POSE(26, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose108[] = {
	AX_POSE(27, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose111[] = {
	AX_POSE(28, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose113[] = {
	AX_POSE(29, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose116[] = {
	AX_POSE(26, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose118[] = {
	AX_POSE(27, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose121[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose123[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose126[] = {
	AX_POSE(22, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose128[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose130[] = {
	AX_POSE(20, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose145[] = {
	AX_POSE(30, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose146[] = {
	AX_POSE(31, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose147[] = {
	AX_POSE(32, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose148[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose149[] = {
	AX_POSE(34, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose150[] = {
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose151[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose152[] = {
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose153[] = {
	AX_POSE(34, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose154[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose196[] = {
	AX_POSE(16, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose199[] = {
	AX_POSE(19, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose202[] = {
	AX_POSE(16, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose203[] = {
	AX_POSE(20, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose204[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose205[] = {
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose209[] = {
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose210[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose219[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose222[] = {
	AX_POSE(18, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose228[] = {
	AX_POSE(18, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose231[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundourPose235[] = {
	AX_POSE(15, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const u8 sHoundourAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_2_3.lz");
static const u8 sHoundourAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_2_4.lz");
static const u8 sHoundourAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_2_6.lz");
static const u8 sHoundourAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_2_7.lz");
static const u8 sHoundourAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_3_3.lz");
static const u8 sHoundourAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_3_4.lz");
static const u8 sHoundourAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_3_6.lz");
static const u8 sHoundourAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_3_7.lz");
static const u8 sHoundourAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_9_1.lz");
static const u8 sHoundourAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_9_2.lz");
static const u8 sHoundourAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_9_3.lz");
static const u8 sHoundourAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_9_4.lz");
static const u8 sHoundourAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_9_5.lz");
static const u8 sHoundourAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_9_6.lz");
static const u8 sHoundourAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_9_7.lz");
static const u8 sHoundourAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_9_8.lz");
static const u8 sHoundourAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_11_1.lz");
static const u8 sHoundourAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_11_2.lz");
static const u8 sHoundourAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_11_5.lz");
static const u8 sHoundourAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_11_6.lz");
static const u8 sHoundourAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_11_7.lz");
static const u8 sHoundourAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndour/sHoundourAnims_11_8.lz");

static const u8 sHoundourGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_1.4bpp.lz");
static const ax_sprite sHoundourSprites1[] = {
	{sHoundourGfx1, ARRAY_COUNT(sHoundourGfx1)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_2.4bpp.lz");
static const ax_sprite sHoundourSprites2[] = {
	{sHoundourGfx2, ARRAY_COUNT(sHoundourGfx2)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_3.4bpp.lz");
static const ax_sprite sHoundourSprites3[] = {
	{sHoundourGfx3, ARRAY_COUNT(sHoundourGfx3)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_4.4bpp.lz");
static const ax_sprite sHoundourSprites4[] = {
	{sHoundourGfx4, ARRAY_COUNT(sHoundourGfx4)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_5.4bpp.lz");
static const ax_sprite sHoundourSprites5[] = {
	{sHoundourGfx5, ARRAY_COUNT(sHoundourGfx5)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_6.4bpp.lz");
static const ax_sprite sHoundourSprites6[] = {
	{sHoundourGfx6, ARRAY_COUNT(sHoundourGfx6)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_7.4bpp.lz");
static const ax_sprite sHoundourSprites7[] = {
	{sHoundourGfx7, ARRAY_COUNT(sHoundourGfx7)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_8.4bpp.lz");
static const ax_sprite sHoundourSprites8[] = {
	{sHoundourGfx8, ARRAY_COUNT(sHoundourGfx8)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_9.4bpp.lz");
static const ax_sprite sHoundourSprites9[] = {
	{sHoundourGfx9, ARRAY_COUNT(sHoundourGfx9)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_10.4bpp.lz");
static const ax_sprite sHoundourSprites10[] = {
	{sHoundourGfx10, ARRAY_COUNT(sHoundourGfx10)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_11.4bpp.lz");
static const ax_sprite sHoundourSprites11[] = {
	{sHoundourGfx11, ARRAY_COUNT(sHoundourGfx11)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_12.4bpp.lz");
static const ax_sprite sHoundourSprites12[] = {
	{sHoundourGfx12, ARRAY_COUNT(sHoundourGfx12)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_13.4bpp.lz");
static const ax_sprite sHoundourSprites13[] = {
	{sHoundourGfx13, ARRAY_COUNT(sHoundourGfx13)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_14.4bpp.lz");
static const ax_sprite sHoundourSprites14[] = {
	{sHoundourGfx14, ARRAY_COUNT(sHoundourGfx14)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_15.4bpp.lz");
static const ax_sprite sHoundourSprites15[] = {
	{sHoundourGfx15, ARRAY_COUNT(sHoundourGfx15)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_16.4bpp.lz");
static const ax_sprite sHoundourSprites16[] = {
	{sHoundourGfx16, ARRAY_COUNT(sHoundourGfx16)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sHoundourGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_17.4bpp.lz");
static const u8 sHoundourGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_17_1.4bpp.lz");
static const u8 sHoundourGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_17_2.4bpp.lz");
static const ax_sprite sHoundourSprites17[] = {
	{sHoundourGfx17, ARRAY_COUNT(sHoundourGfx17)}, 
	{NULL, 32}, 
	{sHoundourGfx17_1, ARRAY_COUNT(sHoundourGfx17_1)}, 
	{NULL, 32}, 
	{sHoundourGfx17_2, ARRAY_COUNT(sHoundourGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHoundourGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_18.4bpp.lz");
static const u8 sHoundourGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_18_1.4bpp.lz");
static const ax_sprite sHoundourSprites18[] = {
	{sHoundourGfx18, ARRAY_COUNT(sHoundourGfx18)}, 
	{NULL, 32}, 
	{sHoundourGfx18_1, ARRAY_COUNT(sHoundourGfx18_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sHoundourGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_19.4bpp.lz");
static const u8 sHoundourGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_19_1.4bpp.lz");
static const u8 sHoundourGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_19_2.4bpp.lz");
static const u8 sHoundourGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_19_3.4bpp.lz");
static const ax_sprite sHoundourSprites19[] = {
	{sHoundourGfx19, ARRAY_COUNT(sHoundourGfx19)}, 
	{NULL, 64}, 
	{sHoundourGfx19_1, ARRAY_COUNT(sHoundourGfx19_1)}, 
	{NULL, 32}, 
	{sHoundourGfx19_2, ARRAY_COUNT(sHoundourGfx19_2)}, 
	{NULL, 32}, 
	{sHoundourGfx19_3, ARRAY_COUNT(sHoundourGfx19_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sHoundourGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_20.4bpp.lz");
static const ax_sprite sHoundourSprites20[] = {
	{sHoundourGfx20, ARRAY_COUNT(sHoundourGfx20)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_21.4bpp.lz");
static const ax_sprite sHoundourSprites21[] = {
	{sHoundourGfx21, ARRAY_COUNT(sHoundourGfx21)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sHoundourGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_22.4bpp.lz");
static const ax_sprite sHoundourSprites22[] = {
	{sHoundourGfx22, ARRAY_COUNT(sHoundourGfx22)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sHoundourGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_23.4bpp.lz");
static const u8 sHoundourGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_23_1.4bpp.lz");
static const u8 sHoundourGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_23_2.4bpp.lz");
static const ax_sprite sHoundourSprites23[] = {
	{sHoundourGfx23, ARRAY_COUNT(sHoundourGfx23)}, 
	{NULL, 32}, 
	{sHoundourGfx23_1, ARRAY_COUNT(sHoundourGfx23_1)}, 
	{NULL, 32}, 
	{sHoundourGfx23_2, ARRAY_COUNT(sHoundourGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHoundourGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_24.4bpp.lz");
static const u8 sHoundourGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_24_1.4bpp.lz");
static const u8 sHoundourGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_24_2.4bpp.lz");
static const u8 sHoundourGfx24_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_24_3.4bpp.lz");
static const ax_sprite sHoundourSprites24[] = {
	{sHoundourGfx24, ARRAY_COUNT(sHoundourGfx24)}, 
	{NULL, 64}, 
	{sHoundourGfx24_1, ARRAY_COUNT(sHoundourGfx24_1)}, 
	{NULL, 32}, 
	{sHoundourGfx24_2, ARRAY_COUNT(sHoundourGfx24_2)}, 
	{NULL, 64}, 
	{sHoundourGfx24_3, ARRAY_COUNT(sHoundourGfx24_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sHoundourGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_25.4bpp.lz");
static const u8 sHoundourGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_25_1.4bpp.lz");
static const u8 sHoundourGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_25_2.4bpp.lz");
static const ax_sprite sHoundourSprites25[] = {
	{NULL, 32}, 
	{sHoundourGfx25, ARRAY_COUNT(sHoundourGfx25)}, 
	{NULL, 64}, 
	{sHoundourGfx25_1, ARRAY_COUNT(sHoundourGfx25_1)}, 
	{NULL, 32}, 
	{sHoundourGfx25_2, ARRAY_COUNT(sHoundourGfx25_2)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_26.4bpp.lz");
static const u8 sHoundourGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_26_1.4bpp.lz");
static const u8 sHoundourGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_26_2.4bpp.lz");
static const u8 sHoundourGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_26_3.4bpp.lz");
static const ax_sprite sHoundourSprites26[] = {
	{NULL, 32}, 
	{sHoundourGfx26, ARRAY_COUNT(sHoundourGfx26)}, 
	{NULL, 32}, 
	{sHoundourGfx26_1, ARRAY_COUNT(sHoundourGfx26_1)}, 
	{NULL, 64}, 
	{sHoundourGfx26_2, ARRAY_COUNT(sHoundourGfx26_2)}, 
	{NULL, 32}, 
	{sHoundourGfx26_3, ARRAY_COUNT(sHoundourGfx26_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sHoundourGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_27.4bpp.lz");
static const u8 sHoundourGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_27_1.4bpp.lz");
static const u8 sHoundourGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_27_2.4bpp.lz");
static const u8 sHoundourGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_27_3.4bpp.lz");
static const ax_sprite sHoundourSprites27[] = {
	{sHoundourGfx27, ARRAY_COUNT(sHoundourGfx27)}, 
	{NULL, 64}, 
	{sHoundourGfx27_1, ARRAY_COUNT(sHoundourGfx27_1)}, 
	{NULL, 32}, 
	{sHoundourGfx27_2, ARRAY_COUNT(sHoundourGfx27_2)}, 
	{NULL, 32}, 
	{sHoundourGfx27_3, ARRAY_COUNT(sHoundourGfx27_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sHoundourGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_28.4bpp.lz");
static const u8 sHoundourGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_28_1.4bpp.lz");
static const u8 sHoundourGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_28_2.4bpp.lz");
static const u8 sHoundourGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_28_3.4bpp.lz");
static const ax_sprite sHoundourSprites28[] = {
	{sHoundourGfx28, ARRAY_COUNT(sHoundourGfx28)}, 
	{NULL, 32}, 
	{sHoundourGfx28_1, ARRAY_COUNT(sHoundourGfx28_1)}, 
	{NULL, 32}, 
	{sHoundourGfx28_2, ARRAY_COUNT(sHoundourGfx28_2)}, 
	{NULL, 32}, 
	{sHoundourGfx28_3, ARRAY_COUNT(sHoundourGfx28_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sHoundourGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_29.4bpp.lz");
static const ax_sprite sHoundourSprites29[] = {
	{sHoundourGfx29, ARRAY_COUNT(sHoundourGfx29)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_30.4bpp.lz");
static const ax_sprite sHoundourSprites30[] = {
	{sHoundourGfx30, ARRAY_COUNT(sHoundourGfx30)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_31.4bpp.lz");
static const ax_sprite sHoundourSprites31[] = {
	{sHoundourGfx31, ARRAY_COUNT(sHoundourGfx31)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_32.4bpp.lz");
static const ax_sprite sHoundourSprites32[] = {
	{sHoundourGfx32, ARRAY_COUNT(sHoundourGfx32)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_33.4bpp.lz");
static const ax_sprite sHoundourSprites33[] = {
	{sHoundourGfx33, ARRAY_COUNT(sHoundourGfx33)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_34.4bpp.lz");
static const ax_sprite sHoundourSprites34[] = {
	{sHoundourGfx34, ARRAY_COUNT(sHoundourGfx34)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_35.4bpp.lz");
static const ax_sprite sHoundourSprites35[] = {
	{sHoundourGfx35, ARRAY_COUNT(sHoundourGfx35)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_36.4bpp.lz");
static const ax_sprite sHoundourSprites36[] = {
	{sHoundourGfx36, ARRAY_COUNT(sHoundourGfx36)}, 
	{NULL, 0}
};
static const u8 sHoundourGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndour/sprite_37.4bpp.lz");
static const ax_sprite sHoundourSprites37[] = {
	{sHoundourGfx37, ARRAY_COUNT(sHoundourGfx37)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesHoundour[] = {
	sHoundourPose1,
	sHoundourPose2,
	sHoundourPose3,
	sHoundourPose4,
	sHoundourPose5,
	sHoundourPose6,
	sHoundourPose7,
	sHoundourPose8,
	sHoundourPose9,
	sHoundourPose10,
	sHoundourPose11,
	sHoundourPose12,
	sHoundourPose13,
	sHoundourPose14,
	sHoundourPose15,
	sHoundourPose16,
	sHoundourPose17,
	sHoundourPose18,
	sHoundourPose19,
	sHoundourPose20,
	sHoundourPose21,
	sHoundourPose22,
	sHoundourPose23,
	sHoundourPose24,
	sHoundourPose1,
	sHoundourPose2,
	sHoundourPose3,
	sHoundourPose28,
	sHoundourPose4,
	sHoundourPose5,
	sHoundourPose6,
	sHoundourPose32,
	sHoundourPose7,
	sHoundourPose8,
	sHoundourPose9,
	sHoundourPose36,
	sHoundourPose10,
	sHoundourPose11,
	sHoundourPose12,
	sHoundourPose40,
	sHoundourPose13,
	sHoundourPose14,
	sHoundourPose15,
	sHoundourPose44,
	sHoundourPose16,
	sHoundourPose17,
	sHoundourPose18,
	sHoundourPose48,
	sHoundourPose19,
	sHoundourPose20,
	sHoundourPose21,
	sHoundourPose52,
	sHoundourPose22,
	sHoundourPose23,
	sHoundourPose24,
	sHoundourPose56,
	sHoundourPose1,
	sHoundourPose2,
	sHoundourPose3,
	sHoundourPose28,
	sHoundourPose4,
	sHoundourPose5,
	sHoundourPose6,
	sHoundourPose32,
	sHoundourPose7,
	sHoundourPose8,
	sHoundourPose9,
	sHoundourPose36,
	sHoundourPose10,
	sHoundourPose11,
	sHoundourPose12,
	sHoundourPose40,
	sHoundourPose13,
	sHoundourPose14,
	sHoundourPose15,
	sHoundourPose44,
	sHoundourPose16,
	sHoundourPose17,
	sHoundourPose18,
	sHoundourPose48,
	sHoundourPose19,
	sHoundourPose20,
	sHoundourPose21,
	sHoundourPose52,
	sHoundourPose22,
	sHoundourPose23,
	sHoundourPose24,
	sHoundourPose56,
	sHoundourPose1,
	sHoundourPose2,
	sHoundourPose91,
	sHoundourPose28,
	sHoundourPose93,
	sHoundourPose4,
	sHoundourPose5,
	sHoundourPose96,
	sHoundourPose32,
	sHoundourPose98,
	sHoundourPose7,
	sHoundourPose8,
	sHoundourPose101,
	sHoundourPose36,
	sHoundourPose103,
	sHoundourPose10,
	sHoundourPose11,
	sHoundourPose106,
	sHoundourPose40,
	sHoundourPose108,
	sHoundourPose13,
	sHoundourPose14,
	sHoundourPose111,
	sHoundourPose44,
	sHoundourPose113,
	sHoundourPose16,
	sHoundourPose17,
	sHoundourPose116,
	sHoundourPose48,
	sHoundourPose118,
	sHoundourPose19,
	sHoundourPose20,
	sHoundourPose121,
	sHoundourPose52,
	sHoundourPose123,
	sHoundourPose22,
	sHoundourPose23,
	sHoundourPose126,
	sHoundourPose56,
	sHoundourPose128,
	sHoundourPose1,
	sHoundourPose130,
	sHoundourPose4,
	sHoundourPose96,
	sHoundourPose7,
	sHoundourPose101,
	sHoundourPose10,
	sHoundourPose106,
	sHoundourPose13,
	sHoundourPose111,
	sHoundourPose16,
	sHoundourPose116,
	sHoundourPose19,
	sHoundourPose121,
	sHoundourPose22,
	sHoundourPose126,
	sHoundourPose145,
	sHoundourPose146,
	sHoundourPose147,
	sHoundourPose148,
	sHoundourPose149,
	sHoundourPose150,
	sHoundourPose151,
	sHoundourPose152,
	sHoundourPose153,
	sHoundourPose154,
	sHoundourPose1,
	sHoundourPose2,
	sHoundourPose91,
	sHoundourPose28,
	sHoundourPose93,
	sHoundourPose4,
	sHoundourPose5,
	sHoundourPose96,
	sHoundourPose32,
	sHoundourPose98,
	sHoundourPose7,
	sHoundourPose8,
	sHoundourPose101,
	sHoundourPose36,
	sHoundourPose103,
	sHoundourPose10,
	sHoundourPose11,
	sHoundourPose106,
	sHoundourPose40,
	sHoundourPose108,
	sHoundourPose13,
	sHoundourPose14,
	sHoundourPose111,
	sHoundourPose44,
	sHoundourPose113,
	sHoundourPose16,
	sHoundourPose17,
	sHoundourPose116,
	sHoundourPose48,
	sHoundourPose118,
	sHoundourPose19,
	sHoundourPose20,
	sHoundourPose121,
	sHoundourPose52,
	sHoundourPose123,
	sHoundourPose22,
	sHoundourPose23,
	sHoundourPose126,
	sHoundourPose56,
	sHoundourPose128,
	sHoundourPose28,
	sHoundourPose196,
	sHoundourPose52,
	sHoundourPose48,
	sHoundourPose199,
	sHoundourPose40,
	sHoundourPose36,
	sHoundourPose202,
	sHoundourPose203,
	sHoundourPose204,
	sHoundourPose205,
	sHoundourPose106,
	sHoundourPose111,
	sHoundourPose116,
	sHoundourPose209,
	sHoundourPose210,
	sHoundourPose1,
	sHoundourPose91,
	sHoundourPose28,
	sHoundourPose4,
	sHoundourPose96,
	sHoundourPose202,
	sHoundourPose7,
	sHoundourPose101,
	sHoundourPose219,
	sHoundourPose10,
	sHoundourPose106,
	sHoundourPose222,
	sHoundourPose13,
	sHoundourPose111,
	sHoundourPose44,
	sHoundourPose16,
	sHoundourPose116,
	sHoundourPose228,
	sHoundourPose19,
	sHoundourPose121,
	sHoundourPose231,
	sHoundourPose22,
	sHoundourPose126,
	sHoundourPose196,
	sHoundourPose235,
	sHoundourPose196,
	sHoundourPose52,
	sHoundourPose48,
	sHoundourPose199,
	sHoundourPose40,
	sHoundourPose36,
	sHoundourPose202,
	sHoundourPose1,
	sHoundourPose22,
	sHoundourPose19,
	sHoundourPose16,
	sHoundourPose13,
	sHoundourPose10,
	sHoundourPose7,
	sHoundourPose4,
};

static const struct PositionSets sAxPositionsHoundour[] = {
	[0] = { .set = { {-1, -3}, {-4, 3}, {3, 3}, {-1, -4} } },
	[1] = { .set = { {-1, -2}, {-5, 5}, {3, 2}, {0, -3} } },
	[2] = { .set = { {-1, -2}, {-4, 2}, {4, 5}, {-1, -3} } },
	[3] = { .set = { {7, -6}, {5, 0}, {0, 3}, {1, -6} } },
	[4] = { .set = { {8, -5}, {8, 2}, {-2, 2}, {2, -5} } },
	[5] = { .set = { {7, -5}, {1, 0}, {3, 4}, {1, -4} } },
	[6] = { .set = { {10, -9}, {6, -4}, {4, 1}, {2, -7} } },
	[7] = { .set = { {9, -8}, {7, -4}, {1, 1}, {2, -6} } },
	[8] = { .set = { {9, -8}, {0, -2}, {6, 1}, {1, -6} } },
	[9] = { .set = { {8, -13}, {0, -5}, {6, -1}, {1, -8} } },
	[10] = { .set = { {8, -12}, {0, -2}, {3, 1}, {2, -8} } },
	[11] = { .set = { {8, -12}, {-2, -3}, {9, -3}, {2, -8} } },
	[12] = { .set = { {-1, -17}, {4, -4}, {-5, -4}, {0, -9} } },
	[13] = { .set = { {-1, -15}, {4, -6}, {-5, -2}, {0, -8} } },
	[14] = { .set = { {0, -15}, {4, -2}, {-5, -6}, {0, -8} } },
	[15] = { .set = { {-9, -13}, {-1, -5}, {-7, -1}, {-2, -8} } },
	[16] = { .set = { {-9, -12}, {-1, -2}, {-4, 1}, {-3, -8} } },
	[17] = { .set = { {-9, -12}, {1, -3}, {-10, -3}, {-3, -8} } },
	[18] = { .set = { {-11, -9}, {-7, -4}, {-5, 1}, {-3, -7} } },
	[19] = { .set = { {-10, -8}, {-8, -4}, {-2, 1}, {-3, -6} } },
	[20] = { .set = { {-10, -8}, {-1, -2}, {-7, 1}, {-2, -6} } },
	[21] = { .set = { {-8, -6}, {-6, 0}, {-1, 3}, {-2, -6} } },
	[22] = { .set = { {-9, -5}, {-9, 2}, {1, 2}, {-3, -5} } },
	[23] = { .set = { {-8, -5}, {-2, 0}, {-4, 4}, {-2, -4} } },
	[24] = { .set = { {-1, -3}, {-4, 3}, {3, 3}, {-1, -4} } },
	[25] = { .set = { {-1, -2}, {-5, 5}, {3, 2}, {0, -3} } },
	[26] = { .set = { {-1, -2}, {-4, 2}, {4, 5}, {-1, -3} } },
	[27] = { .set = { {0, -2}, {-5, 2}, {4, 3}, {-1, -5} } },
	[28] = { .set = { {7, -6}, {5, 0}, {0, 3}, {1, -6} } },
	[29] = { .set = { {8, -5}, {8, 2}, {-2, 2}, {2, -5} } },
	[30] = { .set = { {7, -5}, {1, 0}, {3, 4}, {1, -4} } },
	[31] = { .set = { {8, -6}, {6, 0}, {1, 3}, {1, -5} } },
	[32] = { .set = { {10, -9}, {6, -4}, {4, 1}, {2, -7} } },
	[33] = { .set = { {9, -8}, {7, -4}, {1, 1}, {2, -6} } },
	[34] = { .set = { {9, -8}, {0, -2}, {6, 1}, {1, -6} } },
	[35] = { .set = { {11, -10}, {7, -4}, {4, 0}, {3, -8} } },
	[36] = { .set = { {8, -13}, {0, -5}, {6, -1}, {1, -8} } },
	[37] = { .set = { {8, -12}, {0, -2}, {3, 1}, {2, -8} } },
	[38] = { .set = { {8, -12}, {-2, -3}, {9, -3}, {2, -8} } },
	[39] = { .set = { {10, -14}, {-1, -4}, {6, -2}, {1, -10} } },
	[40] = { .set = { {-1, -17}, {4, -4}, {-5, -4}, {0, -9} } },
	[41] = { .set = { {-1, -15}, {4, -6}, {-5, -2}, {0, -8} } },
	[42] = { .set = { {0, -15}, {4, -2}, {-5, -6}, {0, -8} } },
	[43] = { .set = { {0, -18}, {4, -4}, {-5, -4}, {0, -9} } },
	[44] = { .set = { {-9, -13}, {-1, -5}, {-7, -1}, {-2, -8} } },
	[45] = { .set = { {-9, -12}, {-1, -2}, {-4, 1}, {-3, -8} } },
	[46] = { .set = { {-9, -12}, {1, -3}, {-10, -3}, {-3, -8} } },
	[47] = { .set = { {-11, -14}, {0, -4}, {-7, -2}, {-2, -10} } },
	[48] = { .set = { {-11, -9}, {-7, -4}, {-5, 1}, {-3, -7} } },
	[49] = { .set = { {-10, -8}, {-8, -4}, {-2, 1}, {-3, -6} } },
	[50] = { .set = { {-10, -8}, {-1, -2}, {-7, 1}, {-2, -6} } },
	[51] = { .set = { {-12, -10}, {-8, -4}, {-5, 0}, {-4, -8} } },
	[52] = { .set = { {-8, -6}, {-6, 0}, {-1, 3}, {-2, -6} } },
	[53] = { .set = { {-9, -5}, {-9, 2}, {1, 2}, {-3, -5} } },
	[54] = { .set = { {-8, -5}, {-2, 0}, {-4, 4}, {-2, -4} } },
	[55] = { .set = { {-9, -6}, {-7, 0}, {-2, 3}, {-2, -5} } },
	[56] = { .set = { {-1, -3}, {-4, 3}, {3, 3}, {-1, -4} } },
	[57] = { .set = { {-1, -2}, {-5, 5}, {3, 2}, {0, -3} } },
	[58] = { .set = { {-1, -2}, {-4, 2}, {4, 5}, {-1, -3} } },
	[59] = { .set = { {0, -2}, {-5, 2}, {4, 3}, {-1, -5} } },
	[60] = { .set = { {7, -6}, {5, 0}, {0, 3}, {1, -6} } },
	[61] = { .set = { {8, -5}, {8, 2}, {-2, 2}, {2, -5} } },
	[62] = { .set = { {7, -5}, {1, 0}, {3, 4}, {1, -4} } },
	[63] = { .set = { {8, -6}, {6, 0}, {1, 3}, {1, -5} } },
	[64] = { .set = { {10, -9}, {6, -4}, {4, 1}, {2, -7} } },
	[65] = { .set = { {9, -8}, {7, -4}, {1, 1}, {2, -6} } },
	[66] = { .set = { {9, -8}, {0, -2}, {6, 1}, {1, -6} } },
	[67] = { .set = { {11, -10}, {7, -4}, {4, 0}, {3, -8} } },
	[68] = { .set = { {8, -13}, {0, -5}, {6, -1}, {1, -8} } },
	[69] = { .set = { {8, -12}, {0, -2}, {3, 1}, {2, -8} } },
	[70] = { .set = { {8, -12}, {-2, -3}, {9, -3}, {2, -8} } },
	[71] = { .set = { {10, -14}, {-1, -4}, {6, -2}, {1, -10} } },
	[72] = { .set = { {-1, -17}, {4, -4}, {-5, -4}, {0, -9} } },
	[73] = { .set = { {-1, -15}, {4, -6}, {-5, -2}, {0, -8} } },
	[74] = { .set = { {0, -15}, {4, -2}, {-5, -6}, {0, -8} } },
	[75] = { .set = { {0, -18}, {4, -4}, {-5, -4}, {0, -9} } },
	[76] = { .set = { {-9, -13}, {-1, -5}, {-7, -1}, {-2, -8} } },
	[77] = { .set = { {-9, -12}, {-1, -2}, {-4, 1}, {-3, -8} } },
	[78] = { .set = { {-9, -12}, {1, -3}, {-10, -3}, {-3, -8} } },
	[79] = { .set = { {-11, -14}, {0, -4}, {-7, -2}, {-2, -10} } },
	[80] = { .set = { {-11, -9}, {-7, -4}, {-5, 1}, {-3, -7} } },
	[81] = { .set = { {-10, -8}, {-8, -4}, {-2, 1}, {-3, -6} } },
	[82] = { .set = { {-10, -8}, {-1, -2}, {-7, 1}, {-2, -6} } },
	[83] = { .set = { {-12, -10}, {-8, -4}, {-5, 0}, {-4, -8} } },
	[84] = { .set = { {-8, -6}, {-6, 0}, {-1, 3}, {-2, -6} } },
	[85] = { .set = { {-9, -5}, {-9, 2}, {1, 2}, {-3, -5} } },
	[86] = { .set = { {-8, -5}, {-2, 0}, {-4, 4}, {-2, -4} } },
	[87] = { .set = { {-9, -6}, {-7, 0}, {-2, 3}, {-2, -5} } },
	[88] = { .set = { {-1, -3}, {-4, 3}, {3, 3}, {-1, -4} } },
	[89] = { .set = { {-1, -2}, {-5, 5}, {3, 2}, {0, -3} } },
	[90] = { .set = { {-1, -17}, {-4, 1}, {3, 1}, {-1, -10} } },
	[91] = { .set = { {0, -2}, {-5, 2}, {4, 3}, {-1, -5} } },
	[92] = { .set = { {0, -7}, {-4, 2}, {3, 2}, {-1, -7} } },
	[93] = { .set = { {7, -6}, {5, 0}, {0, 3}, {1, -6} } },
	[94] = { .set = { {8, -5}, {8, 2}, {-2, 2}, {2, -5} } },
	[95] = { .set = { {4, -17}, {6, 0}, {1, 3}, {2, -8} } },
	[96] = { .set = { {8, -6}, {6, 0}, {1, 3}, {1, -5} } },
	[97] = { .set = { {4, -9}, {5, -1}, {0, 2}, {0, -7} } },
	[98] = { .set = { {10, -9}, {6, -4}, {4, 1}, {2, -7} } },
	[99] = { .set = { {9, -8}, {7, -4}, {1, 1}, {2, -6} } },
	[100] = { .set = { {5, -20}, {5, -5}, {4, 0}, {1, -10} } },
	[101] = { .set = { {11, -10}, {7, -4}, {4, 0}, {3, -8} } },
	[102] = { .set = { {5, -11}, {3, -3}, {1, 1}, {-2, -8} } },
	[103] = { .set = { {8, -13}, {0, -5}, {6, -1}, {1, -8} } },
	[104] = { .set = { {8, -12}, {0, -2}, {3, 1}, {2, -8} } },
	[105] = { .set = { {6, -20}, {-1, -4}, {6, -2}, {1, -10} } },
	[106] = { .set = { {10, -14}, {-1, -4}, {6, -2}, {1, -10} } },
	[107] = { .set = { {5, -13}, {-2, -2}, {4, 1}, {-1, -8} } },
	[108] = { .set = { {-1, -17}, {4, -4}, {-5, -4}, {0, -9} } },
	[109] = { .set = { {-1, -15}, {4, -6}, {-5, -2}, {0, -8} } },
	[110] = { .set = { {-1, -19}, {4, -4}, {-5, -4}, {-1, -11} } },
	[111] = { .set = { {0, -18}, {4, -4}, {-5, -4}, {0, -9} } },
	[112] = { .set = { {0, -18}, {4, -3}, {-5, -3}, {0, -6} } },
	[113] = { .set = { {-9, -13}, {-1, -5}, {-7, -1}, {-2, -8} } },
	[114] = { .set = { {-9, -12}, {-1, -2}, {-4, 1}, {-3, -8} } },
	[115] = { .set = { {-7, -20}, {0, -4}, {-7, -2}, {-2, -10} } },
	[116] = { .set = { {-11, -14}, {0, -4}, {-7, -2}, {-2, -10} } },
	[117] = { .set = { {-6, -13}, {1, -2}, {-5, 1}, {0, -8} } },
	[118] = { .set = { {-11, -9}, {-7, -4}, {-5, 1}, {-3, -7} } },
	[119] = { .set = { {-10, -8}, {-8, -4}, {-2, 1}, {-3, -6} } },
	[120] = { .set = { {-6, -20}, {-6, -5}, {-5, 0}, {-2, -10} } },
	[121] = { .set = { {-12, -10}, {-8, -4}, {-5, 0}, {-4, -8} } },
	[122] = { .set = { {-6, -11}, {-4, -3}, {-2, 1}, {1, -8} } },
	[123] = { .set = { {-8, -6}, {-6, 0}, {-1, 3}, {-2, -6} } },
	[124] = { .set = { {-9, -5}, {-9, 2}, {1, 2}, {-3, -5} } },
	[125] = { .set = { {-5, -17}, {-7, 0}, {-2, 3}, {-3, -8} } },
	[126] = { .set = { {-9, -6}, {-7, 0}, {-2, 3}, {-2, -5} } },
	[127] = { .set = { {-5, -9}, {-6, -1}, {-1, 2}, {-1, -7} } },
	[128] = { .set = { {-1, -3}, {-4, 3}, {3, 3}, {-1, -4} } },
	[129] = { .set = { {-1, -15}, {-4, 3}, {3, 3}, {-1, -8} } },
	[130] = { .set = { {7, -6}, {5, 0}, {0, 3}, {1, -6} } },
	[131] = { .set = { {4, -17}, {6, 0}, {1, 3}, {2, -8} } },
	[132] = { .set = { {10, -9}, {6, -4}, {4, 1}, {2, -7} } },
	[133] = { .set = { {5, -20}, {5, -5}, {4, 0}, {1, -10} } },
	[134] = { .set = { {8, -13}, {0, -5}, {6, -1}, {1, -8} } },
	[135] = { .set = { {6, -20}, {-1, -4}, {6, -2}, {1, -10} } },
	[136] = { .set = { {-1, -17}, {4, -4}, {-5, -4}, {0, -9} } },
	[137] = { .set = { {-1, -19}, {4, -4}, {-5, -4}, {-1, -11} } },
	[138] = { .set = { {-9, -13}, {-1, -5}, {-7, -1}, {-2, -8} } },
	[139] = { .set = { {-7, -20}, {0, -4}, {-7, -2}, {-2, -10} } },
	[140] = { .set = { {-11, -9}, {-7, -4}, {-5, 1}, {-3, -7} } },
	[141] = { .set = { {-6, -20}, {-6, -5}, {-5, 0}, {-2, -10} } },
	[142] = { .set = { {-8, -6}, {-6, 0}, {-1, 3}, {-2, -6} } },
	[143] = { .set = { {-5, -17}, {-7, 0}, {-2, 3}, {-3, -8} } },
	[144] = { .set = { {-7, -3}, {-7, 0}, {-5, 2}, {1, -4} } },
	[145] = { .set = { {-8, -2}, {-7, 0}, {-5, 2}, {1, -5} } },
	[146] = { .set = { {0, -15}, {-4, 2}, {3, 2}, {0, -8} } },
	[147] = { .set = { {9, -15}, {7, -1}, {2, 2}, {3, -7} } },
	[148] = { .set = { {9, -18}, {8, -4}, {7, 1}, {3, -7} } },
	[149] = { .set = { {6, -21}, {0, -5}, {7, -3}, {1, -9} } },
	[150] = { .set = { {1, -17}, {5, -4}, {-4, -4}, {1, -9} } },
	[151] = { .set = { {-7, -21}, {-1, -5}, {-8, -3}, {-2, -9} } },
	[152] = { .set = { {-8, -18}, {-7, -4}, {-6, 1}, {-2, -7} } },
	[153] = { .set = { {-8, -15}, {-6, -1}, {-1, 2}, {-2, -7} } },
	[154] = { .set = { {-1, -3}, {-4, 3}, {3, 3}, {-1, -4} } },
	[155] = { .set = { {-1, -2}, {-5, 5}, {3, 2}, {0, -3} } },
	[156] = { .set = { {-1, -17}, {-4, 1}, {3, 1}, {-1, -10} } },
	[157] = { .set = { {0, -2}, {-5, 2}, {4, 3}, {-1, -5} } },
	[158] = { .set = { {0, -7}, {-4, 2}, {3, 2}, {-1, -7} } },
	[159] = { .set = { {7, -6}, {5, 0}, {0, 3}, {1, -6} } },
	[160] = { .set = { {8, -5}, {8, 2}, {-2, 2}, {2, -5} } },
	[161] = { .set = { {4, -17}, {6, 0}, {1, 3}, {2, -8} } },
	[162] = { .set = { {8, -6}, {6, 0}, {1, 3}, {1, -5} } },
	[163] = { .set = { {4, -9}, {5, -1}, {0, 2}, {0, -7} } },
	[164] = { .set = { {10, -9}, {6, -4}, {4, 1}, {2, -7} } },
	[165] = { .set = { {9, -8}, {7, -4}, {1, 1}, {2, -6} } },
	[166] = { .set = { {5, -20}, {5, -5}, {4, 0}, {1, -10} } },
	[167] = { .set = { {11, -10}, {7, -4}, {4, 0}, {3, -8} } },
	[168] = { .set = { {5, -11}, {3, -3}, {1, 1}, {-2, -8} } },
	[169] = { .set = { {8, -13}, {0, -5}, {6, -1}, {1, -8} } },
	[170] = { .set = { {8, -12}, {0, -2}, {3, 1}, {2, -8} } },
	[171] = { .set = { {6, -20}, {-1, -4}, {6, -2}, {1, -10} } },
	[172] = { .set = { {10, -14}, {-1, -4}, {6, -2}, {1, -10} } },
	[173] = { .set = { {5, -13}, {-2, -2}, {4, 1}, {-1, -8} } },
	[174] = { .set = { {-1, -17}, {4, -4}, {-5, -4}, {0, -9} } },
	[175] = { .set = { {-1, -15}, {4, -6}, {-5, -2}, {0, -8} } },
	[176] = { .set = { {-1, -19}, {4, -4}, {-5, -4}, {-1, -11} } },
	[177] = { .set = { {0, -18}, {4, -4}, {-5, -4}, {0, -9} } },
	[178] = { .set = { {0, -18}, {4, -3}, {-5, -3}, {0, -6} } },
	[179] = { .set = { {-9, -13}, {-1, -5}, {-7, -1}, {-2, -8} } },
	[180] = { .set = { {-9, -12}, {-1, -2}, {-4, 1}, {-3, -8} } },
	[181] = { .set = { {-7, -20}, {0, -4}, {-7, -2}, {-2, -10} } },
	[182] = { .set = { {-11, -14}, {0, -4}, {-7, -2}, {-2, -10} } },
	[183] = { .set = { {-6, -13}, {1, -2}, {-5, 1}, {0, -8} } },
	[184] = { .set = { {-11, -9}, {-7, -4}, {-5, 1}, {-3, -7} } },
	[185] = { .set = { {-10, -8}, {-8, -4}, {-2, 1}, {-3, -6} } },
	[186] = { .set = { {-6, -20}, {-6, -5}, {-5, 0}, {-2, -10} } },
	[187] = { .set = { {-12, -10}, {-8, -4}, {-5, 0}, {-4, -8} } },
	[188] = { .set = { {-6, -11}, {-4, -3}, {-2, 1}, {1, -8} } },
	[189] = { .set = { {-8, -6}, {-6, 0}, {-1, 3}, {-2, -6} } },
	[190] = { .set = { {-9, -5}, {-9, 2}, {1, 2}, {-3, -5} } },
	[191] = { .set = { {-5, -17}, {-7, 0}, {-2, 3}, {-3, -8} } },
	[192] = { .set = { {-9, -6}, {-7, 0}, {-2, 3}, {-2, -5} } },
	[193] = { .set = { {-5, -9}, {-6, -1}, {-1, 2}, {-1, -7} } },
	[194] = { .set = { {0, -2}, {-5, 2}, {4, 3}, {-1, -5} } },
	[195] = { .set = { {-8, -6}, {-6, 0}, {-1, 3}, {-1, -5} } },
	[196] = { .set = { {-12, -10}, {-8, -4}, {-5, 0}, {-4, -8} } },
	[197] = { .set = { {-11, -14}, {0, -4}, {-7, -2}, {-2, -10} } },
	[198] = { .set = { {0, -17}, {4, -3}, {-5, -3}, {0, -8} } },
	[199] = { .set = { {10, -14}, {-1, -4}, {6, -2}, {1, -10} } },
	[200] = { .set = { {11, -10}, {7, -4}, {4, 0}, {3, -8} } },
	[201] = { .set = { {7, -6}, {5, 0}, {0, 3}, {0, -5} } },
	[202] = { .set = { {-1, -16}, {-4, 2}, {3, 2}, {-1, -9} } },
	[203] = { .set = { {4, -18}, {6, -1}, {1, 2}, {2, -9} } },
	[204] = { .set = { {6, -19}, {6, -4}, {5, 1}, {2, -9} } },
	[205] = { .set = { {6, -20}, {-1, -4}, {6, -2}, {1, -10} } },
	[206] = { .set = { {-1, -19}, {4, -4}, {-5, -4}, {-1, -11} } },
	[207] = { .set = { {-7, -20}, {0, -4}, {-7, -2}, {-2, -10} } },
	[208] = { .set = { {-7, -19}, {-7, -4}, {-6, 1}, {-3, -9} } },
	[209] = { .set = { {-5, -18}, {-7, -1}, {-2, 2}, {-3, -9} } },
	[210] = { .set = { {-1, -3}, {-4, 3}, {3, 3}, {-1, -4} } },
	[211] = { .set = { {-1, -17}, {-4, 1}, {3, 1}, {-1, -10} } },
	[212] = { .set = { {0, -2}, {-5, 2}, {4, 3}, {-1, -5} } },
	[213] = { .set = { {7, -6}, {5, 0}, {0, 3}, {1, -6} } },
	[214] = { .set = { {4, -17}, {6, 0}, {1, 3}, {2, -8} } },
	[215] = { .set = { {7, -6}, {5, 0}, {0, 3}, {0, -5} } },
	[216] = { .set = { {10, -9}, {6, -4}, {4, 1}, {2, -7} } },
	[217] = { .set = { {5, -20}, {5, -5}, {4, 0}, {1, -10} } },
	[218] = { .set = { {10, -10}, {6, -4}, {3, 0}, {2, -8} } },
	[219] = { .set = { {8, -13}, {0, -5}, {6, -1}, {1, -8} } },
	[220] = { .set = { {6, -20}, {-1, -4}, {6, -2}, {1, -10} } },
	[221] = { .set = { {10, -13}, {-1, -3}, {6, -1}, {1, -9} } },
	[222] = { .set = { {-1, -17}, {4, -4}, {-5, -4}, {0, -9} } },
	[223] = { .set = { {-1, -19}, {4, -4}, {-5, -4}, {-1, -11} } },
	[224] = { .set = { {0, -18}, {4, -4}, {-5, -4}, {0, -9} } },
	[225] = { .set = { {-9, -13}, {-1, -5}, {-7, -1}, {-2, -8} } },
	[226] = { .set = { {-7, -20}, {0, -4}, {-7, -2}, {-2, -10} } },
	[227] = { .set = { {-11, -13}, {0, -3}, {-7, -1}, {-2, -9} } },
	[228] = { .set = { {-11, -9}, {-7, -4}, {-5, 1}, {-3, -7} } },
	[229] = { .set = { {-6, -20}, {-6, -5}, {-5, 0}, {-2, -10} } },
	[230] = { .set = { {-11, -10}, {-7, -4}, {-4, 0}, {-3, -8} } },
	[231] = { .set = { {-8, -6}, {-6, 0}, {-1, 3}, {-2, -6} } },
	[232] = { .set = { {-5, -17}, {-7, 0}, {-2, 3}, {-3, -8} } },
	[233] = { .set = { {-8, -6}, {-6, 0}, {-1, 3}, {-1, -5} } },
	[234] = { .set = { {0, -3}, {-5, 1}, {4, 2}, {-1, -6} } },
	[235] = { .set = { {-8, -6}, {-6, 0}, {-1, 3}, {-1, -5} } },
	[236] = { .set = { {-12, -10}, {-8, -4}, {-5, 0}, {-4, -8} } },
	[237] = { .set = { {-11, -14}, {0, -4}, {-7, -2}, {-2, -10} } },
	[238] = { .set = { {0, -17}, {4, -3}, {-5, -3}, {0, -8} } },
	[239] = { .set = { {10, -14}, {-1, -4}, {6, -2}, {1, -10} } },
	[240] = { .set = { {11, -10}, {7, -4}, {4, 0}, {3, -8} } },
	[241] = { .set = { {7, -6}, {5, 0}, {0, 3}, {0, -5} } },
	[242] = { .set = { {-1, -3}, {-4, 3}, {3, 3}, {-1, -4} } },
	[243] = { .set = { {-8, -6}, {-6, 0}, {-1, 3}, {-2, -6} } },
	[244] = { .set = { {-11, -9}, {-7, -4}, {-5, 1}, {-3, -7} } },
	[245] = { .set = { {-9, -13}, {-1, -5}, {-7, -1}, {-2, -8} } },
	[246] = { .set = { {-1, -17}, {4, -4}, {-5, -4}, {0, -9} } },
	[247] = { .set = { {8, -13}, {0, -5}, {6, -1}, {1, -8} } },
	[248] = { .set = { {10, -9}, {6, -4}, {4, 1}, {2, -7} } },
	[249] = { .set = { {7, -6}, {5, 0}, {0, 3}, {1, -6} } },
};

static const ax_anim *const sHoundourAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sHoundourAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_01562),
	AX_ANIM_PTR(gAxSharedAnim_01757),
	AX_ANIM_PTR(sHoundourAnims_2_3),
	AX_ANIM_PTR(sHoundourAnims_2_4),
	AX_ANIM_PTR(gAxSharedAnim_01914),
	AX_ANIM_PTR(sHoundourAnims_2_6),
	AX_ANIM_PTR(sHoundourAnims_2_7),
	AX_ANIM_PTR(gAxSharedAnim_01988),
};

static const ax_anim *const sHoundourAnimTable3[] = {
	AX_ANIM_PTR(gAxSharedAnim_02000),
	AX_ANIM_PTR(gAxSharedAnim_02021),
	AX_ANIM_PTR(sHoundourAnims_3_3),
	AX_ANIM_PTR(sHoundourAnims_3_4),
	AX_ANIM_PTR(gAxSharedAnim_02090),
	AX_ANIM_PTR(sHoundourAnims_3_6),
	AX_ANIM_PTR(sHoundourAnims_3_7),
	AX_ANIM_PTR(gAxSharedAnim_02183),
};

static const ax_anim *const sHoundourAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_02562),
	AX_ANIM_PTR(gAxSharedAnim_02567),
	AX_ANIM_PTR(gAxSharedAnim_02481),
	AX_ANIM_PTR(gAxSharedAnim_02486),
	AX_ANIM_PTR(gAxSharedAnim_02489),
	AX_ANIM_PTR(gAxSharedAnim_02492),
	AX_ANIM_PTR(gAxSharedAnim_02501),
	AX_ANIM_PTR(gAxSharedAnim_02502),
};

static const ax_anim *const sHoundourAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00046),
	AX_ANIM_PTR(gAxSharedAnim_00047),
	AX_ANIM_PTR(gAxSharedAnim_00048),
	AX_ANIM_PTR(gAxSharedAnim_00049),
	AX_ANIM_PTR(gAxSharedAnim_00050),
	AX_ANIM_PTR(gAxSharedAnim_00051),
	AX_ANIM_PTR(gAxSharedAnim_00052),
	AX_ANIM_PTR(gAxSharedAnim_00053),
};

static const ax_anim *const sHoundourAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
};

static const ax_anim *const sHoundourAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00531),
	AX_ANIM_PTR(gAxSharedAnim_00543),
	AX_ANIM_PTR(gAxSharedAnim_00551),
	AX_ANIM_PTR(gAxSharedAnim_00559),
	AX_ANIM_PTR(gAxSharedAnim_00577),
	AX_ANIM_PTR(gAxSharedAnim_00587),
	AX_ANIM_PTR(gAxSharedAnim_00596),
	AX_ANIM_PTR(gAxSharedAnim_00602),
};

static const ax_anim *const sHoundourAnimTable8[] = {
	AX_ANIM_PTR(gAxSharedAnim_02577),
	AX_ANIM_PTR(gAxSharedAnim_02579),
	AX_ANIM_PTR(gAxSharedAnim_02580),
	AX_ANIM_PTR(gAxSharedAnim_02581),
	AX_ANIM_PTR(gAxSharedAnim_02583),
	AX_ANIM_PTR(gAxSharedAnim_02586),
	AX_ANIM_PTR(gAxSharedAnim_02588),
	AX_ANIM_PTR(gAxSharedAnim_02591),
};

static const ax_anim *const sHoundourAnimTable9[] = {
	AX_ANIM_PTR(sHoundourAnims_9_1),
	AX_ANIM_PTR(sHoundourAnims_9_2),
	AX_ANIM_PTR(sHoundourAnims_9_3),
	AX_ANIM_PTR(sHoundourAnims_9_4),
	AX_ANIM_PTR(sHoundourAnims_9_5),
	AX_ANIM_PTR(sHoundourAnims_9_6),
	AX_ANIM_PTR(sHoundourAnims_9_7),
	AX_ANIM_PTR(sHoundourAnims_9_8),
};

static const ax_anim *const sHoundourAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01241),
	AX_ANIM_PTR(gAxSharedAnim_01252),
	AX_ANIM_PTR(gAxSharedAnim_01266),
	AX_ANIM_PTR(gAxSharedAnim_01277),
	AX_ANIM_PTR(gAxSharedAnim_01285),
	AX_ANIM_PTR(gAxSharedAnim_01300),
	AX_ANIM_PTR(gAxSharedAnim_01313),
	AX_ANIM_PTR(gAxSharedAnim_01324),
};

static const ax_anim *const sHoundourAnimTable11[] = {
	AX_ANIM_PTR(sHoundourAnims_11_1),
	AX_ANIM_PTR(sHoundourAnims_11_2),
	AX_ANIM_PTR(gAxSharedAnim_01393),
	AX_ANIM_PTR(gAxSharedAnim_01426),
	AX_ANIM_PTR(sHoundourAnims_11_5),
	AX_ANIM_PTR(sHoundourAnims_11_6),
	AX_ANIM_PTR(sHoundourAnims_11_7),
	AX_ANIM_PTR(sHoundourAnims_11_8),
};

static const ax_anim *const sHoundourAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01526),
	AX_ANIM_PTR(gAxSharedAnim_01581),
	AX_ANIM_PTR(gAxSharedAnim_01574),
	AX_ANIM_PTR(gAxSharedAnim_01551),
	AX_ANIM_PTR(gAxSharedAnim_01550),
	AX_ANIM_PTR(gAxSharedAnim_01545),
	AX_ANIM_PTR(gAxSharedAnim_01533),
	AX_ANIM_PTR(gAxSharedAnim_01527),
};

static const ax_anim *const sHoundourAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01586),
	AX_ANIM_PTR(gAxSharedAnim_01624),
	AX_ANIM_PTR(gAxSharedAnim_01620),
	AX_ANIM_PTR(gAxSharedAnim_01612),
	AX_ANIM_PTR(gAxSharedAnim_01605),
	AX_ANIM_PTR(gAxSharedAnim_01602),
	AX_ANIM_PTR(gAxSharedAnim_01597),
	AX_ANIM_PTR(gAxSharedAnim_01591),
};

static const ax_anim *const *const sAxAnimationsHoundour[] = {
	sHoundourAnimTable1,
	sHoundourAnimTable2,
	sHoundourAnimTable3,
	sHoundourAnimTable4,
	sHoundourAnimTable5,
	sHoundourAnimTable6,
	sHoundourAnimTable7,
	sHoundourAnimTable8,
	sHoundourAnimTable9,
	sHoundourAnimTable10,
	sHoundourAnimTable11,
	sHoundourAnimTable12,
	sHoundourAnimTable13,
};

static const ax_sprite *const sAxSpritesHoundour[] = {
	sHoundourSprites1,
	sHoundourSprites2,
	sHoundourSprites3,
	sHoundourSprites4,
	sHoundourSprites5,
	sHoundourSprites6,
	sHoundourSprites7,
	sHoundourSprites8,
	sHoundourSprites9,
	sHoundourSprites10,
	sHoundourSprites11,
	sHoundourSprites12,
	sHoundourSprites13,
	sHoundourSprites14,
	sHoundourSprites15,
	sHoundourSprites16,
	sHoundourSprites17,
	sHoundourSprites18,
	sHoundourSprites19,
	sHoundourSprites20,
	sHoundourSprites21,
	sHoundourSprites22,
	sHoundourSprites23,
	sHoundourSprites24,
	sHoundourSprites25,
	sHoundourSprites26,
	sHoundourSprites27,
	sHoundourSprites28,
	sHoundourSprites29,
	sHoundourSprites30,
	sHoundourSprites31,
	sHoundourSprites32,
	sHoundourSprites33,
	sHoundourSprites34,
	sHoundourSprites35,
	sHoundourSprites36,
	sHoundourSprites37,
};

static const axmain sAxMainHoundour = {
	.poses = sAxPosesHoundour,
	.animations = sAxAnimationsHoundour,
	.animCount = ARRAY_COUNT(sAxAnimationsHoundour),
	.spriteData = sAxSpritesHoundour,
	.positions = sAxPositionsHoundour,
};
