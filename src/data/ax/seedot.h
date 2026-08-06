/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainSeedot;
const SiroArchive gAxSeedot = {"SIRO", &sAxMainSeedot};

static const ax_pose sSeedotPose1[] = {
	AX_POSE(0, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose3[] = {
	AX_POSE(2, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose4[] = {
	AX_POSE(3, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose5[] = {
	AX_POSE(4, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose6[] = {
	AX_POSE(5, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose8[] = {
	AX_POSE(7, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose10[] = {
	AX_POSE(9, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose11[] = {
	AX_POSE(10, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose12[] = {
	AX_POSE(11, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose13[] = {
	AX_POSE(12, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose14[] = {
	AX_POSE(13, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose15[] = {
	AX_POSE(14, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose16[] = {
	AX_POSE(9, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose17[] = {
	AX_POSE(10, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose18[] = {
	AX_POSE(11, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose19[] = {
	AX_POSE(6, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose20[] = {
	AX_POSE(7, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose21[] = {
	AX_POSE(8, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose22[] = {
	AX_POSE(3, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose23[] = {
	AX_POSE(4, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose24[] = {
	AX_POSE(5, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose28[] = {
	AX_POSE(15, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose29[] = {
	AX_POSE(16, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose33[] = {
	AX_POSE(17, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose34[] = {
	AX_POSE(18, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose38[] = {
	AX_POSE(19, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose39[] = {
	AX_POSE(20, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose43[] = {
	AX_POSE(21, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose44[] = {
	AX_POSE(22, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose48[] = {
	AX_POSE(23, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose49[] = {
	AX_POSE(24, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose53[] = {
	AX_POSE(21, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose54[] = {
	AX_POSE(22, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose58[] = {
	AX_POSE(19, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose59[] = {
	AX_POSE(20, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose63[] = {
	AX_POSE(17, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose64[] = {
	AX_POSE(18, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose107[] = {
	AX_POSE(25, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose110[] = {
	AX_POSE(26, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose113[] = {
	AX_POSE(27, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose116[] = {
	AX_POSE(28, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose119[] = {
	AX_POSE(29, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose122[] = {
	AX_POSE(28, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose125[] = {
	AX_POSE(27, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose128[] = {
	AX_POSE(26, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose133[] = {
	AX_POSE(17, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose136[] = {
	AX_POSE(19, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose148[] = {
	AX_POSE(19, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose151[] = {
	AX_POSE(17, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose153[] = {
	AX_POSE(30, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose154[] = {
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose155[] = {
	AX_POSE(32, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose156[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose157[] = {
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose158[] = {
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose159[] = {
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose160[] = {
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose161[] = {
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose162[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose180[] = {
	AX_POSE(18, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose181[] = {
	AX_POSE(20, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose182[] = {
	AX_POSE(22, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose183[] = {
	AX_POSE(24, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose184[] = {
	AX_POSE(22, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose185[] = {
	AX_POSE(20, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose186[] = {
	AX_POSE(18, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeedotPose191[] = {
	AX_POSE(23, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const u8 sSeedotAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_1_1.lz");
static const u8 sSeedotAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_1_2.lz");
static const u8 sSeedotAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_1_3.lz");
static const u8 sSeedotAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_1_4.lz");
static const u8 sSeedotAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_1_5.lz");
static const u8 sSeedotAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_1_6.lz");
static const u8 sSeedotAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_1_7.lz");
static const u8 sSeedotAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_1_8.lz");
static const u8 sSeedotAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_2_1.lz");
static const u8 sSeedotAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_2_2.lz");
static const u8 sSeedotAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_2_3.lz");
static const u8 sSeedotAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_2_4.lz");
static const u8 sSeedotAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_2_5.lz");
static const u8 sSeedotAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_2_6.lz");
static const u8 sSeedotAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_2_7.lz");
static const u8 sSeedotAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_2_8.lz");
static const u8 sSeedotAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_3_1.lz");
static const u8 sSeedotAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_3_2.lz");
static const u8 sSeedotAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_3_3.lz");
static const u8 sSeedotAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_3_4.lz");
static const u8 sSeedotAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_3_5.lz");
static const u8 sSeedotAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_3_6.lz");
static const u8 sSeedotAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_3_7.lz");
static const u8 sSeedotAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_3_8.lz");
static const u8 sSeedotAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_4_3.lz");
static const u8 sSeedotAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_4_7.lz");
static const u8 sSeedotAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_5_1.lz");
static const u8 sSeedotAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_5_2.lz");
static const u8 sSeedotAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_5_3.lz");
static const u8 sSeedotAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_5_4.lz");
static const u8 sSeedotAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_5_5.lz");
static const u8 sSeedotAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_5_6.lz");
static const u8 sSeedotAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_5_7.lz");
static const u8 sSeedotAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_5_8.lz");
static const u8 sSeedotAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_8_1.lz");
static const u8 sSeedotAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_8_2.lz");
static const u8 sSeedotAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_8_3.lz");
static const u8 sSeedotAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_8_4.lz");
static const u8 sSeedotAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_8_5.lz");
static const u8 sSeedotAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_8_6.lz");
static const u8 sSeedotAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_8_7.lz");
static const ax_anim sSeedotAnims_8_8[] = {
	{ .frames = 36, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 18, .unkFlags = 0, .poseId = 177, .offset = {1, 0}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const u8 sSeedotAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_9_1.lz");
static const u8 sSeedotAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_9_2.lz");
static const u8 sSeedotAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_9_3.lz");
static const u8 sSeedotAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_9_4.lz");
static const u8 sSeedotAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_9_5.lz");
static const u8 sSeedotAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_9_6.lz");
static const u8 sSeedotAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_9_7.lz");
static const u8 sSeedotAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_9_8.lz");
static const u8 sSeedotAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_11_2.lz");
static const u8 sSeedotAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_11_3.lz");
static const u8 sSeedotAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_11_7.lz");
static const u8 sSeedotAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/seedot/sSeedotAnims_11_8.lz");

static const u8 sSeedotGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_1.4bpp.lz");
static const ax_sprite sSeedotSprites1[] = {
	{sSeedotGfx1, ARRAY_COUNT(sSeedotGfx1)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_2.4bpp.lz");
static const ax_sprite sSeedotSprites2[] = {
	{sSeedotGfx2, ARRAY_COUNT(sSeedotGfx2)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_3.4bpp.lz");
static const ax_sprite sSeedotSprites3[] = {
	{sSeedotGfx3, ARRAY_COUNT(sSeedotGfx3)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_4.4bpp.lz");
static const ax_sprite sSeedotSprites4[] = {
	{sSeedotGfx4, ARRAY_COUNT(sSeedotGfx4)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_5.4bpp.lz");
static const ax_sprite sSeedotSprites5[] = {
	{sSeedotGfx5, ARRAY_COUNT(sSeedotGfx5)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_6.4bpp.lz");
static const ax_sprite sSeedotSprites6[] = {
	{sSeedotGfx6, ARRAY_COUNT(sSeedotGfx6)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_7.4bpp.lz");
static const ax_sprite sSeedotSprites7[] = {
	{sSeedotGfx7, ARRAY_COUNT(sSeedotGfx7)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_8.4bpp.lz");
static const ax_sprite sSeedotSprites8[] = {
	{sSeedotGfx8, ARRAY_COUNT(sSeedotGfx8)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_9.4bpp.lz");
static const ax_sprite sSeedotSprites9[] = {
	{sSeedotGfx9, ARRAY_COUNT(sSeedotGfx9)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_10.4bpp.lz");
static const ax_sprite sSeedotSprites10[] = {
	{sSeedotGfx10, ARRAY_COUNT(sSeedotGfx10)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_11.4bpp.lz");
static const ax_sprite sSeedotSprites11[] = {
	{sSeedotGfx11, ARRAY_COUNT(sSeedotGfx11)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_12.4bpp.lz");
static const ax_sprite sSeedotSprites12[] = {
	{sSeedotGfx12, ARRAY_COUNT(sSeedotGfx12)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_13.4bpp.lz");
static const ax_sprite sSeedotSprites13[] = {
	{sSeedotGfx13, ARRAY_COUNT(sSeedotGfx13)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_14.4bpp.lz");
static const ax_sprite sSeedotSprites14[] = {
	{sSeedotGfx14, ARRAY_COUNT(sSeedotGfx14)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_15.4bpp.lz");
static const ax_sprite sSeedotSprites15[] = {
	{sSeedotGfx15, ARRAY_COUNT(sSeedotGfx15)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_16.4bpp.lz");
static const ax_sprite sSeedotSprites16[] = {
	{sSeedotGfx16, ARRAY_COUNT(sSeedotGfx16)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSeedotGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_17.4bpp.lz");
static const ax_sprite sSeedotSprites17[] = {
	{sSeedotGfx17, ARRAY_COUNT(sSeedotGfx17)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSeedotGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_18.4bpp.lz");
static const ax_sprite sSeedotSprites18[] = {
	{sSeedotGfx18, ARRAY_COUNT(sSeedotGfx18)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSeedotGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_19.4bpp.lz");
static const ax_sprite sSeedotSprites19[] = {
	{sSeedotGfx19, ARRAY_COUNT(sSeedotGfx19)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSeedotGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_20.4bpp.lz");
static const ax_sprite sSeedotSprites20[] = {
	{sSeedotGfx20, ARRAY_COUNT(sSeedotGfx20)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSeedotGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_21.4bpp.lz");
static const ax_sprite sSeedotSprites21[] = {
	{sSeedotGfx21, ARRAY_COUNT(sSeedotGfx21)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSeedotGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_22.4bpp.lz");
static const ax_sprite sSeedotSprites22[] = {
	{sSeedotGfx22, ARRAY_COUNT(sSeedotGfx22)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSeedotGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_23.4bpp.lz");
static const ax_sprite sSeedotSprites23[] = {
	{sSeedotGfx23, ARRAY_COUNT(sSeedotGfx23)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSeedotGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_24.4bpp.lz");
static const ax_sprite sSeedotSprites24[] = {
	{sSeedotGfx24, ARRAY_COUNT(sSeedotGfx24)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSeedotGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_25.4bpp.lz");
static const ax_sprite sSeedotSprites25[] = {
	{sSeedotGfx25, ARRAY_COUNT(sSeedotGfx25)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSeedotGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_26.4bpp.lz");
static const ax_sprite sSeedotSprites26[] = {
	{sSeedotGfx26, ARRAY_COUNT(sSeedotGfx26)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_27.4bpp.lz");
static const u8 sSeedotGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_27_1.4bpp.lz");
static const ax_sprite sSeedotSprites27[] = {
	{sSeedotGfx27, ARRAY_COUNT(sSeedotGfx27)}, 
	{NULL, 32}, 
	{sSeedotGfx27_1, ARRAY_COUNT(sSeedotGfx27_1)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_28.4bpp.lz");
static const ax_sprite sSeedotSprites28[] = {
	{sSeedotGfx28, ARRAY_COUNT(sSeedotGfx28)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSeedotGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_29.4bpp.lz");
static const ax_sprite sSeedotSprites29[] = {
	{sSeedotGfx29, ARRAY_COUNT(sSeedotGfx29)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSeedotGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_30.4bpp.lz");
static const ax_sprite sSeedotSprites30[] = {
	{sSeedotGfx30, ARRAY_COUNT(sSeedotGfx30)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSeedotGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_31.4bpp.lz");
static const ax_sprite sSeedotSprites31[] = {
	{sSeedotGfx31, ARRAY_COUNT(sSeedotGfx31)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_32.4bpp.lz");
static const ax_sprite sSeedotSprites32[] = {
	{sSeedotGfx32, ARRAY_COUNT(sSeedotGfx32)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_33.4bpp.lz");
static const ax_sprite sSeedotSprites33[] = {
	{sSeedotGfx33, ARRAY_COUNT(sSeedotGfx33)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_34.4bpp.lz");
static const ax_sprite sSeedotSprites34[] = {
	{sSeedotGfx34, ARRAY_COUNT(sSeedotGfx34)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_35.4bpp.lz");
static const ax_sprite sSeedotSprites35[] = {
	{sSeedotGfx35, ARRAY_COUNT(sSeedotGfx35)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_36.4bpp.lz");
static const ax_sprite sSeedotSprites36[] = {
	{sSeedotGfx36, ARRAY_COUNT(sSeedotGfx36)}, 
	{NULL, 0}
};
static const u8 sSeedotGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seedot/sprite_37.4bpp.lz");
static const ax_sprite sSeedotSprites37[] = {
	{sSeedotGfx37, ARRAY_COUNT(sSeedotGfx37)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesSeedot[] = {
	sSeedotPose1,
	sSeedotPose2,
	sSeedotPose3,
	sSeedotPose4,
	sSeedotPose5,
	sSeedotPose6,
	sSeedotPose7,
	sSeedotPose8,
	sSeedotPose9,
	sSeedotPose10,
	sSeedotPose11,
	sSeedotPose12,
	sSeedotPose13,
	sSeedotPose14,
	sSeedotPose15,
	sSeedotPose16,
	sSeedotPose17,
	sSeedotPose18,
	sSeedotPose19,
	sSeedotPose20,
	sSeedotPose21,
	sSeedotPose22,
	sSeedotPose23,
	sSeedotPose24,
	sSeedotPose1,
	sSeedotPose2,
	sSeedotPose3,
	sSeedotPose28,
	sSeedotPose29,
	sSeedotPose4,
	sSeedotPose5,
	sSeedotPose6,
	sSeedotPose33,
	sSeedotPose34,
	sSeedotPose7,
	sSeedotPose8,
	sSeedotPose9,
	sSeedotPose38,
	sSeedotPose39,
	sSeedotPose10,
	sSeedotPose11,
	sSeedotPose12,
	sSeedotPose43,
	sSeedotPose44,
	sSeedotPose13,
	sSeedotPose14,
	sSeedotPose15,
	sSeedotPose48,
	sSeedotPose49,
	sSeedotPose16,
	sSeedotPose17,
	sSeedotPose18,
	sSeedotPose53,
	sSeedotPose54,
	sSeedotPose19,
	sSeedotPose20,
	sSeedotPose21,
	sSeedotPose58,
	sSeedotPose59,
	sSeedotPose22,
	sSeedotPose23,
	sSeedotPose24,
	sSeedotPose63,
	sSeedotPose64,
	sSeedotPose1,
	sSeedotPose2,
	sSeedotPose3,
	sSeedotPose28,
	sSeedotPose29,
	sSeedotPose4,
	sSeedotPose5,
	sSeedotPose6,
	sSeedotPose33,
	sSeedotPose34,
	sSeedotPose7,
	sSeedotPose8,
	sSeedotPose9,
	sSeedotPose38,
	sSeedotPose39,
	sSeedotPose10,
	sSeedotPose11,
	sSeedotPose12,
	sSeedotPose43,
	sSeedotPose44,
	sSeedotPose13,
	sSeedotPose14,
	sSeedotPose15,
	sSeedotPose48,
	sSeedotPose49,
	sSeedotPose16,
	sSeedotPose17,
	sSeedotPose18,
	sSeedotPose53,
	sSeedotPose54,
	sSeedotPose19,
	sSeedotPose20,
	sSeedotPose21,
	sSeedotPose58,
	sSeedotPose59,
	sSeedotPose22,
	sSeedotPose23,
	sSeedotPose24,
	sSeedotPose63,
	sSeedotPose64,
	sSeedotPose1,
	sSeedotPose28,
	sSeedotPose107,
	sSeedotPose4,
	sSeedotPose33,
	sSeedotPose110,
	sSeedotPose7,
	sSeedotPose38,
	sSeedotPose113,
	sSeedotPose10,
	sSeedotPose43,
	sSeedotPose116,
	sSeedotPose13,
	sSeedotPose48,
	sSeedotPose119,
	sSeedotPose16,
	sSeedotPose53,
	sSeedotPose122,
	sSeedotPose19,
	sSeedotPose58,
	sSeedotPose125,
	sSeedotPose22,
	sSeedotPose63,
	sSeedotPose128,
	sSeedotPose1,
	sSeedotPose28,
	sSeedotPose29,
	sSeedotPose4,
	sSeedotPose133,
	sSeedotPose34,
	sSeedotPose7,
	sSeedotPose136,
	sSeedotPose39,
	sSeedotPose10,
	sSeedotPose43,
	sSeedotPose44,
	sSeedotPose13,
	sSeedotPose48,
	sSeedotPose49,
	sSeedotPose16,
	sSeedotPose53,
	sSeedotPose54,
	sSeedotPose19,
	sSeedotPose148,
	sSeedotPose59,
	sSeedotPose22,
	sSeedotPose151,
	sSeedotPose64,
	sSeedotPose153,
	sSeedotPose154,
	sSeedotPose155,
	sSeedotPose156,
	sSeedotPose157,
	sSeedotPose158,
	sSeedotPose159,
	sSeedotPose160,
	sSeedotPose161,
	sSeedotPose162,
	sSeedotPose1,
	sSeedotPose28,
	sSeedotPose4,
	sSeedotPose33,
	sSeedotPose7,
	sSeedotPose38,
	sSeedotPose10,
	sSeedotPose43,
	sSeedotPose13,
	sSeedotPose48,
	sSeedotPose16,
	sSeedotPose53,
	sSeedotPose19,
	sSeedotPose58,
	sSeedotPose22,
	sSeedotPose63,
	sSeedotPose29,
	sSeedotPose180,
	sSeedotPose181,
	sSeedotPose182,
	sSeedotPose183,
	sSeedotPose184,
	sSeedotPose185,
	sSeedotPose186,
	sSeedotPose28,
	sSeedotPose33,
	sSeedotPose38,
	sSeedotPose43,
	sSeedotPose191,
	sSeedotPose53,
	sSeedotPose58,
	sSeedotPose63,
	sSeedotPose1,
	sSeedotPose28,
	sSeedotPose29,
	sSeedotPose4,
	sSeedotPose33,
	sSeedotPose34,
	sSeedotPose7,
	sSeedotPose38,
	sSeedotPose39,
	sSeedotPose10,
	sSeedotPose43,
	sSeedotPose44,
	sSeedotPose13,
	sSeedotPose48,
	sSeedotPose49,
	sSeedotPose16,
	sSeedotPose53,
	sSeedotPose54,
	sSeedotPose19,
	sSeedotPose58,
	sSeedotPose59,
	sSeedotPose22,
	sSeedotPose63,
	sSeedotPose64,
	sSeedotPose28,
	sSeedotPose63,
	sSeedotPose58,
	sSeedotPose53,
	sSeedotPose191,
	sSeedotPose43,
	sSeedotPose38,
	sSeedotPose33,
	sSeedotPose1,
	sSeedotPose22,
	sSeedotPose19,
	sSeedotPose16,
	sSeedotPose13,
	sSeedotPose10,
	sSeedotPose7,
	sSeedotPose4,
};

static const struct PositionSets sAxPositionsSeedot[] = {
	[0] = { .set = { {-1, -2}, {-5, -3}, {4, -3}, {-1, -7} } },
	[1] = { .set = { {2, -4}, {-4, -6}, {5, -5}, {1, -9} } },
	[2] = { .set = { {-3, -4}, {-5, -5}, {1, -5}, {-2, -8} } },
	[3] = { .set = { {2, -2}, {3, -4}, {-4, -3}, {-1, -6} } },
	[4] = { .set = { {0, -4}, {3, -6}, {-6, -4}, {-1, -9} } },
	[5] = { .set = { {4, -4}, {1, -5}, {0, -4}, {0, -8} } },
	[6] = { .set = { {3, -2}, {-1, -5}, {-1, -3}, {-1, -6} } },
	[7] = { .set = { {3, -5}, {0, -7}, {-3, -5}, {-2, -8} } },
	[8] = { .set = { {4, -5}, {-2, -7}, {2, -5}, {0, -8} } },
	[9] = { .set = { {2, -3}, {-5, -5}, {2, -4}, {-1, -7} } },
	[10] = { .set = { {1, -4}, {-3, -7}, {-1, -5}, {-1, -9} } },
	[11] = { .set = { {2, -5}, {-5, -7}, {6, -6}, {0, -9} } },
	[12] = { .set = { {-1, -3}, {5, -5}, {-6, -5}, {-1, -7} } },
	[13] = { .set = { {1, -5}, {6, -7}, {-4, -5}, {0, -9} } },
	[14] = { .set = { {-2, -5}, {3, -5}, {-7, -7}, {-1, -9} } },
	[15] = { .set = { {-3, -3}, {4, -5}, {-3, -4}, {0, -7} } },
	[16] = { .set = { {-3, -4}, {1, -7}, {-1, -5}, {-1, -9} } },
	[17] = { .set = { {-2, -5}, {5, -7}, {-6, -6}, {0, -9} } },
	[18] = { .set = { {-4, -2}, {0, -5}, {0, -3}, {0, -6} } },
	[19] = { .set = { {-4, -5}, {-1, -7}, {2, -5}, {1, -8} } },
	[20] = { .set = { {-5, -5}, {1, -7}, {-3, -5}, {-1, -8} } },
	[21] = { .set = { {-3, -2}, {-4, -4}, {3, -3}, {0, -6} } },
	[22] = { .set = { {-1, -4}, {-4, -6}, {5, -4}, {0, -9} } },
	[23] = { .set = { {-5, -4}, {-2, -5}, {-1, -4}, {-1, -8} } },
	[24] = { .set = { {-1, -2}, {-5, -3}, {4, -3}, {-1, -7} } },
	[25] = { .set = { {2, -4}, {-4, -6}, {5, -5}, {1, -9} } },
	[26] = { .set = { {-3, -4}, {-5, -5}, {1, -5}, {-2, -8} } },
	[27] = { .set = { {-1, -5}, {-5, -6}, {4, -6}, {-1, -9} } },
	[28] = { .set = { {-1, -1}, {-5, -3}, {4, -3}, {-1, -7} } },
	[29] = { .set = { {2, -2}, {3, -4}, {-4, -3}, {-1, -6} } },
	[30] = { .set = { {0, -4}, {3, -6}, {-6, -4}, {-1, -9} } },
	[31] = { .set = { {4, -4}, {1, -5}, {0, -4}, {0, -8} } },
	[32] = { .set = { {2, -5}, {3, -6}, {-4, -4}, {-1, -9} } },
	[33] = { .set = { {3, -1}, {3, -3}, {-4, -4}, {1, -6} } },
	[34] = { .set = { {3, -2}, {-1, -5}, {-1, -3}, {-1, -6} } },
	[35] = { .set = { {3, -5}, {0, -7}, {-3, -5}, {-2, -8} } },
	[36] = { .set = { {4, -5}, {-2, -7}, {2, -5}, {0, -8} } },
	[37] = { .set = { {4, -7}, {0, -6}, {-1, -5}, {-2, -8} } },
	[38] = { .set = { {3, -1}, {2, -3}, {0, -3}, {0, -7} } },
	[39] = { .set = { {2, -3}, {-5, -5}, {2, -4}, {-1, -7} } },
	[40] = { .set = { {1, -4}, {-3, -7}, {-1, -5}, {-1, -9} } },
	[41] = { .set = { {2, -5}, {-5, -7}, {6, -6}, {0, -9} } },
	[42] = { .set = { {1, -5}, {-4, -6}, {2, -5}, {-1, -7} } },
	[43] = { .set = { {2, -2}, {-1, -4}, {3, -2}, {-1, -7} } },
	[44] = { .set = { {-1, -3}, {5, -5}, {-6, -5}, {-1, -7} } },
	[45] = { .set = { {1, -5}, {6, -7}, {-4, -5}, {0, -9} } },
	[46] = { .set = { {-2, -5}, {3, -5}, {-7, -7}, {-1, -9} } },
	[47] = { .set = { {-1, -6}, {4, -5}, {-5, -5}, {-1, -9} } },
	[48] = { .set = { {-1, -3}, {5, -4}, {-6, -4}, {-1, -8} } },
	[49] = { .set = { {-3, -3}, {4, -5}, {-3, -4}, {0, -7} } },
	[50] = { .set = { {-3, -4}, {1, -7}, {-1, -5}, {-1, -9} } },
	[51] = { .set = { {-2, -5}, {5, -7}, {-6, -6}, {0, -9} } },
	[52] = { .set = { {-2, -5}, {3, -6}, {-3, -5}, {0, -7} } },
	[53] = { .set = { {-3, -2}, {0, -4}, {-4, -2}, {0, -7} } },
	[54] = { .set = { {-4, -2}, {0, -5}, {0, -3}, {0, -6} } },
	[55] = { .set = { {-4, -5}, {-1, -7}, {2, -5}, {1, -8} } },
	[56] = { .set = { {-5, -5}, {1, -7}, {-3, -5}, {-1, -8} } },
	[57] = { .set = { {-5, -7}, {-1, -6}, {0, -5}, {1, -8} } },
	[58] = { .set = { {-4, -1}, {-3, -3}, {-1, -3}, {-1, -7} } },
	[59] = { .set = { {-3, -2}, {-4, -4}, {3, -3}, {0, -6} } },
	[60] = { .set = { {-1, -4}, {-4, -6}, {5, -4}, {0, -9} } },
	[61] = { .set = { {-5, -4}, {-2, -5}, {-1, -4}, {-1, -8} } },
	[62] = { .set = { {-3, -5}, {-4, -6}, {3, -4}, {0, -9} } },
	[63] = { .set = { {-4, -1}, {-4, -3}, {3, -4}, {-2, -6} } },
	[64] = { .set = { {-1, -2}, {-5, -3}, {4, -3}, {-1, -7} } },
	[65] = { .set = { {2, -4}, {-4, -6}, {5, -5}, {1, -9} } },
	[66] = { .set = { {-3, -4}, {-5, -5}, {1, -5}, {-2, -8} } },
	[67] = { .set = { {-1, -5}, {-5, -6}, {4, -6}, {-1, -9} } },
	[68] = { .set = { {-1, -1}, {-5, -3}, {4, -3}, {-1, -7} } },
	[69] = { .set = { {2, -2}, {3, -4}, {-4, -3}, {-1, -6} } },
	[70] = { .set = { {0, -4}, {3, -6}, {-6, -4}, {-1, -9} } },
	[71] = { .set = { {4, -4}, {1, -5}, {0, -4}, {0, -8} } },
	[72] = { .set = { {2, -5}, {3, -6}, {-4, -4}, {-1, -9} } },
	[73] = { .set = { {3, -1}, {3, -3}, {-4, -4}, {1, -6} } },
	[74] = { .set = { {3, -2}, {-1, -5}, {-1, -3}, {-1, -6} } },
	[75] = { .set = { {3, -5}, {0, -7}, {-3, -5}, {-2, -8} } },
	[76] = { .set = { {4, -5}, {-2, -7}, {2, -5}, {0, -8} } },
	[77] = { .set = { {4, -7}, {0, -6}, {-1, -5}, {-2, -8} } },
	[78] = { .set = { {3, -1}, {2, -3}, {0, -3}, {0, -7} } },
	[79] = { .set = { {2, -3}, {-5, -5}, {2, -4}, {-1, -7} } },
	[80] = { .set = { {1, -4}, {-3, -7}, {-1, -5}, {-1, -9} } },
	[81] = { .set = { {2, -5}, {-5, -7}, {6, -6}, {0, -9} } },
	[82] = { .set = { {1, -5}, {-4, -6}, {2, -5}, {-1, -7} } },
	[83] = { .set = { {2, -2}, {-1, -4}, {3, -2}, {-1, -7} } },
	[84] = { .set = { {-1, -3}, {5, -5}, {-6, -5}, {-1, -7} } },
	[85] = { .set = { {1, -5}, {6, -7}, {-4, -5}, {0, -9} } },
	[86] = { .set = { {-2, -5}, {3, -5}, {-7, -7}, {-1, -9} } },
	[87] = { .set = { {-1, -6}, {4, -5}, {-5, -5}, {-1, -9} } },
	[88] = { .set = { {-1, -3}, {5, -4}, {-6, -4}, {-1, -8} } },
	[89] = { .set = { {-3, -3}, {4, -5}, {-3, -4}, {0, -7} } },
	[90] = { .set = { {-3, -4}, {1, -7}, {-1, -5}, {-1, -9} } },
	[91] = { .set = { {-2, -5}, {5, -7}, {-6, -6}, {0, -9} } },
	[92] = { .set = { {-2, -5}, {3, -6}, {-3, -5}, {0, -7} } },
	[93] = { .set = { {-3, -2}, {0, -4}, {-4, -2}, {0, -7} } },
	[94] = { .set = { {-4, -2}, {0, -5}, {0, -3}, {0, -6} } },
	[95] = { .set = { {-4, -5}, {-1, -7}, {2, -5}, {1, -8} } },
	[96] = { .set = { {-5, -5}, {1, -7}, {-3, -5}, {-1, -8} } },
	[97] = { .set = { {-5, -7}, {-1, -6}, {0, -5}, {1, -8} } },
	[98] = { .set = { {-4, -1}, {-3, -3}, {-1, -3}, {-1, -7} } },
	[99] = { .set = { {-3, -2}, {-4, -4}, {3, -3}, {0, -6} } },
	[100] = { .set = { {-1, -4}, {-4, -6}, {5, -4}, {0, -9} } },
	[101] = { .set = { {-5, -4}, {-2, -5}, {-1, -4}, {-1, -8} } },
	[102] = { .set = { {-3, -5}, {-4, -6}, {3, -4}, {0, -9} } },
	[103] = { .set = { {-4, -1}, {-4, -3}, {3, -4}, {-2, -6} } },
	[104] = { .set = { {-1, -2}, {-5, -3}, {4, -3}, {-1, -7} } },
	[105] = { .set = { {-1, -5}, {-5, -6}, {4, -6}, {-1, -9} } },
	[106] = { .set = { {-1, -1}, {-5, -3}, {4, -3}, {-1, -7} } },
	[107] = { .set = { {2, -2}, {3, -4}, {-4, -3}, {-1, -6} } },
	[108] = { .set = { {2, -5}, {3, -6}, {-4, -4}, {-1, -9} } },
	[109] = { .set = { {2, -1}, {3, -3}, {-4, -4}, {0, -6} } },
	[110] = { .set = { {3, -2}, {-1, -5}, {-1, -3}, {-1, -6} } },
	[111] = { .set = { {4, -7}, {0, -6}, {-1, -5}, {-2, -8} } },
	[112] = { .set = { {2, -2}, {1, -4}, {-1, -4}, {-1, -8} } },
	[113] = { .set = { {2, -3}, {-5, -5}, {2, -4}, {-1, -7} } },
	[114] = { .set = { {1, -5}, {-4, -6}, {2, -5}, {-1, -7} } },
	[115] = { .set = { {3, -4}, {0, -6}, {4, -4}, {1, -9} } },
	[116] = { .set = { {-1, -3}, {5, -5}, {-6, -5}, {-1, -7} } },
	[117] = { .set = { {-1, -6}, {4, -5}, {-5, -5}, {-1, -9} } },
	[118] = { .set = { {-1, -4}, {5, -6}, {-6, -6}, {-1, -9} } },
	[119] = { .set = { {-3, -3}, {4, -5}, {-3, -4}, {0, -7} } },
	[120] = { .set = { {-2, -5}, {3, -6}, {-3, -5}, {0, -7} } },
	[121] = { .set = { {-4, -4}, {-1, -6}, {-5, -4}, {-2, -9} } },
	[122] = { .set = { {-4, -2}, {0, -5}, {0, -3}, {0, -6} } },
	[123] = { .set = { {-5, -7}, {-1, -6}, {0, -5}, {1, -8} } },
	[124] = { .set = { {-3, -2}, {-2, -4}, {0, -4}, {0, -8} } },
	[125] = { .set = { {-3, -2}, {-4, -4}, {3, -3}, {0, -6} } },
	[126] = { .set = { {-3, -5}, {-4, -6}, {3, -4}, {0, -9} } },
	[127] = { .set = { {-3, -1}, {-4, -3}, {3, -4}, {-1, -6} } },
	[128] = { .set = { {-1, -2}, {-5, -3}, {4, -3}, {-1, -7} } },
	[129] = { .set = { {-1, -5}, {-5, -6}, {4, -6}, {-1, -9} } },
	[130] = { .set = { {-1, -1}, {-5, -3}, {4, -3}, {-1, -7} } },
	[131] = { .set = { {2, -2}, {3, -4}, {-4, -3}, {-1, -6} } },
	[132] = { .set = { {3, -5}, {4, -6}, {-3, -4}, {0, -9} } },
	[133] = { .set = { {3, -1}, {3, -3}, {-4, -4}, {1, -6} } },
	[134] = { .set = { {3, -2}, {-1, -5}, {-1, -3}, {-1, -6} } },
	[135] = { .set = { {5, -7}, {1, -6}, {0, -5}, {-1, -8} } },
	[136] = { .set = { {3, -1}, {2, -3}, {0, -3}, {0, -7} } },
	[137] = { .set = { {2, -3}, {-5, -5}, {2, -4}, {-1, -7} } },
	[138] = { .set = { {1, -5}, {-4, -6}, {2, -5}, {-1, -7} } },
	[139] = { .set = { {2, -2}, {-1, -4}, {3, -2}, {-1, -7} } },
	[140] = { .set = { {-1, -3}, {5, -5}, {-6, -5}, {-1, -7} } },
	[141] = { .set = { {-1, -6}, {4, -5}, {-5, -5}, {-1, -9} } },
	[142] = { .set = { {-1, -3}, {5, -4}, {-6, -4}, {-1, -8} } },
	[143] = { .set = { {-3, -3}, {4, -5}, {-3, -4}, {0, -7} } },
	[144] = { .set = { {-2, -5}, {3, -6}, {-3, -5}, {0, -7} } },
	[145] = { .set = { {-3, -2}, {0, -4}, {-4, -2}, {0, -7} } },
	[146] = { .set = { {-4, -2}, {0, -5}, {0, -3}, {0, -6} } },
	[147] = { .set = { {-6, -7}, {-2, -6}, {-1, -5}, {0, -8} } },
	[148] = { .set = { {-4, -1}, {-3, -3}, {-1, -3}, {-1, -7} } },
	[149] = { .set = { {-3, -2}, {-4, -4}, {3, -3}, {0, -6} } },
	[150] = { .set = { {-4, -5}, {-5, -6}, {2, -4}, {-1, -9} } },
	[151] = { .set = { {-4, -1}, {-4, -3}, {3, -4}, {-2, -6} } },
	[152] = { .set = { {-1, -10}, {-4, -10}, {3, -5}, {1, -6} } },
	[153] = { .set = { {-3, -10}, {-5, -10}, {2, -5}, {0, -6} } },
	[154] = { .set = { {-1, -12}, {-5, -12}, {4, -12}, {-1, -11} } },
	[155] = { .set = { {2, -15}, {5, -14}, {-4, -10}, {-1, -12} } },
	[156] = { .set = { {2, -15}, {1, -15}, {1, -7}, {0, -12} } },
	[157] = { .set = { {3, -17}, {-5, -17}, {4, -10}, {-1, -12} } },
	[158] = { .set = { {-1, -18}, {5, -14}, {-6, -14}, {-1, -12} } },
	[159] = { .set = { {-4, -17}, {4, -17}, {-5, -10}, {0, -12} } },
	[160] = { .set = { {-3, -15}, {-2, -15}, {-2, -7}, {-1, -12} } },
	[161] = { .set = { {-3, -15}, {-6, -14}, {3, -10}, {0, -12} } },
	[162] = { .set = { {-1, -2}, {-5, -3}, {4, -3}, {-1, -7} } },
	[163] = { .set = { {-1, -5}, {-5, -6}, {4, -6}, {-1, -9} } },
	[164] = { .set = { {2, -2}, {3, -4}, {-4, -3}, {-1, -6} } },
	[165] = { .set = { {2, -5}, {3, -6}, {-4, -4}, {-1, -9} } },
	[166] = { .set = { {3, -2}, {-1, -5}, {-1, -3}, {-1, -6} } },
	[167] = { .set = { {4, -7}, {0, -6}, {-1, -5}, {-2, -8} } },
	[168] = { .set = { {2, -3}, {-5, -5}, {2, -4}, {-1, -7} } },
	[169] = { .set = { {1, -5}, {-4, -6}, {2, -5}, {-1, -7} } },
	[170] = { .set = { {-1, -3}, {5, -5}, {-6, -5}, {-1, -7} } },
	[171] = { .set = { {-1, -6}, {4, -5}, {-5, -5}, {-1, -9} } },
	[172] = { .set = { {-3, -3}, {4, -5}, {-3, -4}, {0, -7} } },
	[173] = { .set = { {-2, -5}, {3, -6}, {-3, -5}, {0, -7} } },
	[174] = { .set = { {-4, -2}, {0, -5}, {0, -3}, {0, -6} } },
	[175] = { .set = { {-5, -7}, {-1, -6}, {0, -5}, {1, -8} } },
	[176] = { .set = { {-3, -2}, {-4, -4}, {3, -3}, {0, -6} } },
	[177] = { .set = { {-3, -5}, {-4, -6}, {3, -4}, {0, -9} } },
	[178] = { .set = { {-1, -1}, {-5, -3}, {4, -3}, {-1, -7} } },
	[179] = { .set = { {-3, -1}, {-3, -3}, {4, -4}, {-1, -6} } },
	[180] = { .set = { {-2, 0}, {-1, -2}, {1, -2}, {1, -6} } },
	[181] = { .set = { {-2, -1}, {1, -3}, {-3, -1}, {1, -6} } },
	[182] = { .set = { {-1, -2}, {5, -3}, {-6, -3}, {-1, -7} } },
	[183] = { .set = { {1, -1}, {-2, -3}, {2, -1}, {-2, -6} } },
	[184] = { .set = { {1, 0}, {0, -2}, {-2, -2}, {-2, -6} } },
	[185] = { .set = { {2, -1}, {2, -3}, {-5, -4}, {0, -6} } },
	[186] = { .set = { {-1, -5}, {-5, -6}, {4, -6}, {-1, -9} } },
	[187] = { .set = { {2, -5}, {3, -6}, {-4, -4}, {-1, -9} } },
	[188] = { .set = { {4, -7}, {0, -6}, {-1, -5}, {-2, -8} } },
	[189] = { .set = { {1, -5}, {-4, -6}, {2, -5}, {-1, -7} } },
	[190] = { .set = { {-1, -7}, {4, -6}, {-5, -6}, {-1, -10} } },
	[191] = { .set = { {-2, -5}, {3, -6}, {-3, -5}, {0, -7} } },
	[192] = { .set = { {-5, -7}, {-1, -6}, {0, -5}, {1, -8} } },
	[193] = { .set = { {-3, -5}, {-4, -6}, {3, -4}, {0, -9} } },
	[194] = { .set = { {-1, -2}, {-5, -3}, {4, -3}, {-1, -7} } },
	[195] = { .set = { {-1, -5}, {-5, -6}, {4, -6}, {-1, -9} } },
	[196] = { .set = { {-1, -1}, {-5, -3}, {4, -3}, {-1, -7} } },
	[197] = { .set = { {2, -2}, {3, -4}, {-4, -3}, {-1, -6} } },
	[198] = { .set = { {2, -5}, {3, -6}, {-4, -4}, {-1, -9} } },
	[199] = { .set = { {3, -1}, {3, -3}, {-4, -4}, {1, -6} } },
	[200] = { .set = { {3, -2}, {-1, -5}, {-1, -3}, {-1, -6} } },
	[201] = { .set = { {4, -7}, {0, -6}, {-1, -5}, {-2, -8} } },
	[202] = { .set = { {3, -1}, {2, -3}, {0, -3}, {0, -7} } },
	[203] = { .set = { {2, -3}, {-5, -5}, {2, -4}, {-1, -7} } },
	[204] = { .set = { {1, -5}, {-4, -6}, {2, -5}, {-1, -7} } },
	[205] = { .set = { {2, -2}, {-1, -4}, {3, -2}, {-1, -7} } },
	[206] = { .set = { {-1, -3}, {5, -5}, {-6, -5}, {-1, -7} } },
	[207] = { .set = { {-1, -6}, {4, -5}, {-5, -5}, {-1, -9} } },
	[208] = { .set = { {-1, -3}, {5, -4}, {-6, -4}, {-1, -8} } },
	[209] = { .set = { {-3, -3}, {4, -5}, {-3, -4}, {0, -7} } },
	[210] = { .set = { {-2, -5}, {3, -6}, {-3, -5}, {0, -7} } },
	[211] = { .set = { {-3, -2}, {0, -4}, {-4, -2}, {0, -7} } },
	[212] = { .set = { {-4, -2}, {0, -5}, {0, -3}, {0, -6} } },
	[213] = { .set = { {-5, -7}, {-1, -6}, {0, -5}, {1, -8} } },
	[214] = { .set = { {-4, -1}, {-3, -3}, {-1, -3}, {-1, -7} } },
	[215] = { .set = { {-3, -2}, {-4, -4}, {3, -3}, {0, -6} } },
	[216] = { .set = { {-3, -5}, {-4, -6}, {3, -4}, {0, -9} } },
	[217] = { .set = { {-4, -1}, {-4, -3}, {3, -4}, {-2, -6} } },
	[218] = { .set = { {-1, -5}, {-5, -6}, {4, -6}, {-1, -9} } },
	[219] = { .set = { {-3, -5}, {-4, -6}, {3, -4}, {0, -9} } },
	[220] = { .set = { {-5, -7}, {-1, -6}, {0, -5}, {1, -8} } },
	[221] = { .set = { {-2, -5}, {3, -6}, {-3, -5}, {0, -7} } },
	[222] = { .set = { {-1, -7}, {4, -6}, {-5, -6}, {-1, -10} } },
	[223] = { .set = { {1, -5}, {-4, -6}, {2, -5}, {-1, -7} } },
	[224] = { .set = { {4, -7}, {0, -6}, {-1, -5}, {-2, -8} } },
	[225] = { .set = { {2, -5}, {3, -6}, {-4, -4}, {-1, -9} } },
	[226] = { .set = { {-1, -2}, {-5, -3}, {4, -3}, {-1, -7} } },
	[227] = { .set = { {-3, -2}, {-4, -4}, {3, -3}, {0, -6} } },
	[228] = { .set = { {-4, -2}, {0, -5}, {0, -3}, {0, -6} } },
	[229] = { .set = { {-3, -3}, {4, -5}, {-3, -4}, {0, -7} } },
	[230] = { .set = { {-1, -3}, {5, -5}, {-6, -5}, {-1, -7} } },
	[231] = { .set = { {2, -3}, {-5, -5}, {2, -4}, {-1, -7} } },
	[232] = { .set = { {3, -2}, {-1, -5}, {-1, -3}, {-1, -6} } },
	[233] = { .set = { {2, -2}, {3, -4}, {-4, -3}, {-1, -6} } },
};

static const ax_anim *const sSeedotAnimTable1[] = {
	AX_ANIM_PTR(sSeedotAnims_1_1),
	AX_ANIM_PTR(sSeedotAnims_1_2),
	AX_ANIM_PTR(sSeedotAnims_1_3),
	AX_ANIM_PTR(sSeedotAnims_1_4),
	AX_ANIM_PTR(sSeedotAnims_1_5),
	AX_ANIM_PTR(sSeedotAnims_1_6),
	AX_ANIM_PTR(sSeedotAnims_1_7),
	AX_ANIM_PTR(sSeedotAnims_1_8),
};

static const ax_anim *const sSeedotAnimTable2[] = {
	AX_ANIM_PTR(sSeedotAnims_2_1),
	AX_ANIM_PTR(sSeedotAnims_2_2),
	AX_ANIM_PTR(sSeedotAnims_2_3),
	AX_ANIM_PTR(sSeedotAnims_2_4),
	AX_ANIM_PTR(sSeedotAnims_2_5),
	AX_ANIM_PTR(sSeedotAnims_2_6),
	AX_ANIM_PTR(sSeedotAnims_2_7),
	AX_ANIM_PTR(sSeedotAnims_2_8),
};

static const ax_anim *const sSeedotAnimTable3[] = {
	AX_ANIM_PTR(sSeedotAnims_3_1),
	AX_ANIM_PTR(sSeedotAnims_3_2),
	AX_ANIM_PTR(sSeedotAnims_3_3),
	AX_ANIM_PTR(sSeedotAnims_3_4),
	AX_ANIM_PTR(sSeedotAnims_3_5),
	AX_ANIM_PTR(sSeedotAnims_3_6),
	AX_ANIM_PTR(sSeedotAnims_3_7),
	AX_ANIM_PTR(sSeedotAnims_3_8),
};

static const ax_anim *const sSeedotAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_00185),
	AX_ANIM_PTR(gAxSharedAnim_00208),
	AX_ANIM_PTR(sSeedotAnims_4_3),
	AX_ANIM_PTR(gAxSharedAnim_00262),
	AX_ANIM_PTR(gAxSharedAnim_00295),
	AX_ANIM_PTR(gAxSharedAnim_00323),
	AX_ANIM_PTR(sSeedotAnims_4_7),
	AX_ANIM_PTR(gAxSharedAnim_00371),
};

static const ax_anim *const sSeedotAnimTable5[] = {
	AX_ANIM_PTR(sSeedotAnims_5_1),
	AX_ANIM_PTR(sSeedotAnims_5_2),
	AX_ANIM_PTR(sSeedotAnims_5_3),
	AX_ANIM_PTR(sSeedotAnims_5_4),
	AX_ANIM_PTR(sSeedotAnims_5_5),
	AX_ANIM_PTR(sSeedotAnims_5_6),
	AX_ANIM_PTR(sSeedotAnims_5_7),
	AX_ANIM_PTR(sSeedotAnims_5_8),
};

static const ax_anim *const sSeedotAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
};

static const ax_anim *const sSeedotAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00606),
	AX_ANIM_PTR(gAxSharedAnim_00617),
	AX_ANIM_PTR(gAxSharedAnim_00626),
	AX_ANIM_PTR(gAxSharedAnim_00637),
	AX_ANIM_PTR(gAxSharedAnim_00654),
	AX_ANIM_PTR(gAxSharedAnim_00665),
	AX_ANIM_PTR(gAxSharedAnim_00680),
	AX_ANIM_PTR(gAxSharedAnim_00691),
};

static const ax_anim *const sSeedotAnimTable8[] = {
	AX_ANIM_PTR(sSeedotAnims_8_1),
	AX_ANIM_PTR(sSeedotAnims_8_2),
	AX_ANIM_PTR(sSeedotAnims_8_3),
	AX_ANIM_PTR(sSeedotAnims_8_4),
	AX_ANIM_PTR(sSeedotAnims_8_5),
	AX_ANIM_PTR(sSeedotAnims_8_6),
	AX_ANIM_PTR(sSeedotAnims_8_7),
	AX_ANIM_PTR(sSeedotAnims_8_8),
};

static const ax_anim *const sSeedotAnimTable9[] = {
	AX_ANIM_PTR(sSeedotAnims_9_1),
	AX_ANIM_PTR(sSeedotAnims_9_2),
	AX_ANIM_PTR(sSeedotAnims_9_3),
	AX_ANIM_PTR(sSeedotAnims_9_4),
	AX_ANIM_PTR(sSeedotAnims_9_5),
	AX_ANIM_PTR(sSeedotAnims_9_6),
	AX_ANIM_PTR(sSeedotAnims_9_7),
	AX_ANIM_PTR(sSeedotAnims_9_8),
};

static const ax_anim *const sSeedotAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01016),
	AX_ANIM_PTR(gAxSharedAnim_01027),
	AX_ANIM_PTR(gAxSharedAnim_01046),
	AX_ANIM_PTR(gAxSharedAnim_01061),
	AX_ANIM_PTR(gAxSharedAnim_01078),
	AX_ANIM_PTR(gAxSharedAnim_01092),
	AX_ANIM_PTR(gAxSharedAnim_01110),
	AX_ANIM_PTR(gAxSharedAnim_01124),
};

static const ax_anim *const sSeedotAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_01138),
	AX_ANIM_PTR(sSeedotAnims_11_2),
	AX_ANIM_PTR(sSeedotAnims_11_3),
	AX_ANIM_PTR(gAxSharedAnim_01248),
	AX_ANIM_PTR(gAxSharedAnim_01283),
	AX_ANIM_PTR(gAxSharedAnim_01321),
	AX_ANIM_PTR(sSeedotAnims_11_7),
	AX_ANIM_PTR(sSeedotAnims_11_8),
};

static const ax_anim *const sSeedotAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01423),
	AX_ANIM_PTR(gAxSharedAnim_01467),
	AX_ANIM_PTR(gAxSharedAnim_01458),
	AX_ANIM_PTR(gAxSharedAnim_01449),
	AX_ANIM_PTR(gAxSharedAnim_01448),
	AX_ANIM_PTR(gAxSharedAnim_01444),
	AX_ANIM_PTR(gAxSharedAnim_01432),
	AX_ANIM_PTR(gAxSharedAnim_01424),
};

static const ax_anim *const sSeedotAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01471),
	AX_ANIM_PTR(gAxSharedAnim_01516),
	AX_ANIM_PTR(gAxSharedAnim_01511),
	AX_ANIM_PTR(gAxSharedAnim_01504),
	AX_ANIM_PTR(gAxSharedAnim_01497),
	AX_ANIM_PTR(gAxSharedAnim_01490),
	AX_ANIM_PTR(gAxSharedAnim_01486),
	AX_ANIM_PTR(gAxSharedAnim_01478),
};

static const ax_anim *const *const sAxAnimationsSeedot[] = {
	sSeedotAnimTable1,
	sSeedotAnimTable2,
	sSeedotAnimTable3,
	sSeedotAnimTable4,
	sSeedotAnimTable5,
	sSeedotAnimTable6,
	sSeedotAnimTable7,
	sSeedotAnimTable8,
	sSeedotAnimTable9,
	sSeedotAnimTable10,
	sSeedotAnimTable11,
	sSeedotAnimTable12,
	sSeedotAnimTable13,
};

static const ax_sprite *const sAxSpritesSeedot[] = {
	sSeedotSprites1,
	sSeedotSprites2,
	sSeedotSprites3,
	sSeedotSprites4,
	sSeedotSprites5,
	sSeedotSprites6,
	sSeedotSprites7,
	sSeedotSprites8,
	sSeedotSprites9,
	sSeedotSprites10,
	sSeedotSprites11,
	sSeedotSprites12,
	sSeedotSprites13,
	sSeedotSprites14,
	sSeedotSprites15,
	sSeedotSprites16,
	sSeedotSprites17,
	sSeedotSprites18,
	sSeedotSprites19,
	sSeedotSprites20,
	sSeedotSprites21,
	sSeedotSprites22,
	sSeedotSprites23,
	sSeedotSprites24,
	sSeedotSprites25,
	sSeedotSprites26,
	sSeedotSprites27,
	sSeedotSprites28,
	sSeedotSprites29,
	sSeedotSprites30,
	sSeedotSprites31,
	sSeedotSprites32,
	sSeedotSprites33,
	sSeedotSprites34,
	sSeedotSprites35,
	sSeedotSprites36,
	sSeedotSprites37,
};

static const axmain sAxMainSeedot = {
	.poses = sAxPosesSeedot,
	.animations = sAxAnimationsSeedot,
	.animCount = ARRAY_COUNT(sAxAnimationsSeedot),
	.spriteData = sAxSpritesSeedot,
	.positions = sAxPositionsSeedot,
};
