/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainPidgeot;
const SiroArchive gAxPidgeot = {"SIRO", &sAxMainPidgeot};

static const ax_pose sPidgeotPose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose2[] = {
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose3[] = {
	AX_POSE(2, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose4[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose5[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose6[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose7[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose8[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose9[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose10[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose11[] = {
	AX_POSE(10, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose12[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose13[] = {
	AX_POSE(12, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose14[] = {
	AX_POSE(13, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose15[] = {
	AX_POSE(14, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose16[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose17[] = {
	AX_POSE(10, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose18[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose19[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose20[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose21[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose22[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose23[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose24[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose26[] = {
	AX_POSE(15, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose27[] = {
	AX_POSE(16, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose28[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose30[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose31[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose32[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose34[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose35[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose36[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose38[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose39[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose40[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose42[] = {
	AX_POSE(27, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose43[] = {
	AX_POSE(28, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose44[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose46[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose47[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose48[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose50[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose51[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose52[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose54[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose55[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose56[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose129[] = {
	AX_POSE(30, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose130[] = {
	AX_POSE(31, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose131[] = {
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose132[] = {
	AX_POSE(33, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose133[] = {
	AX_POSE(34, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose134[] = {
	AX_POSE(35, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose135[] = {
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose136[] = {
	AX_POSE(35, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose137[] = {
	AX_POSE(34, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose138[] = {
	AX_POSE(33, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose164[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose165[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose166[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeotPose168[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const u8 sPidgeotAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_2_2.lz");
static const u8 sPidgeotAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_2_3.lz");
static const u8 sPidgeotAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_2_7.lz");
static const u8 sPidgeotAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_2_8.lz");
static const u8 sPidgeotAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_3_2.lz");
static const u8 sPidgeotAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_3_3.lz");
static const u8 sPidgeotAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_3_7.lz");
static const u8 sPidgeotAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_3_8.lz");
static const u8 sPidgeotAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_4_1.lz");
static const u8 sPidgeotAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_4_2.lz");
static const u8 sPidgeotAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_4_3.lz");
static const u8 sPidgeotAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_4_4.lz");
static const u8 sPidgeotAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_4_5.lz");
static const u8 sPidgeotAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_4_6.lz");
static const u8 sPidgeotAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_4_7.lz");
static const u8 sPidgeotAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_4_8.lz");
static const u8 sPidgeotAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_5_1.lz");
static const u8 sPidgeotAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_5_2.lz");
static const u8 sPidgeotAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_5_3.lz");
static const u8 sPidgeotAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_5_4.lz");
static const u8 sPidgeotAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_5_5.lz");
static const u8 sPidgeotAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_5_6.lz");
static const u8 sPidgeotAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_5_7.lz");
static const u8 sPidgeotAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_5_8.lz");
static const u8 sPidgeotAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_8_4.lz");
static const u8 sPidgeotAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_8_5.lz");
static const u8 sPidgeotAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_8_6.lz");
static const u8 sPidgeotAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_8_7.lz");
static const u8 sPidgeotAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_8_8.lz");
static const u8 sPidgeotAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_9_1.lz");
static const u8 sPidgeotAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_9_2.lz");
static const u8 sPidgeotAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_9_4.lz");
static const u8 sPidgeotAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_9_5.lz");
static const u8 sPidgeotAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_9_6.lz");
static const u8 sPidgeotAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pidgeot/sPidgeotAnims_9_8.lz");

static const u8 sPidgeotGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_1.4bpp.lz");
static const ax_sprite sPidgeotSprites1[] = {
	{sPidgeotGfx1, ARRAY_COUNT(sPidgeotGfx1)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_2.4bpp.lz");
static const ax_sprite sPidgeotSprites2[] = {
	{sPidgeotGfx2, ARRAY_COUNT(sPidgeotGfx2)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_3.4bpp.lz");
static const ax_sprite sPidgeotSprites3[] = {
	{sPidgeotGfx3, ARRAY_COUNT(sPidgeotGfx3)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_4.4bpp.lz");
static const ax_sprite sPidgeotSprites4[] = {
	{sPidgeotGfx4, ARRAY_COUNT(sPidgeotGfx4)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_5.4bpp.lz");
static const ax_sprite sPidgeotSprites5[] = {
	{sPidgeotGfx5, ARRAY_COUNT(sPidgeotGfx5)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_6.4bpp.lz");
static const ax_sprite sPidgeotSprites6[] = {
	{sPidgeotGfx6, ARRAY_COUNT(sPidgeotGfx6)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_7.4bpp.lz");
static const ax_sprite sPidgeotSprites7[] = {
	{sPidgeotGfx7, ARRAY_COUNT(sPidgeotGfx7)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_8.4bpp.lz");
static const ax_sprite sPidgeotSprites8[] = {
	{sPidgeotGfx8, ARRAY_COUNT(sPidgeotGfx8)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_9.4bpp.lz");
static const ax_sprite sPidgeotSprites9[] = {
	{sPidgeotGfx9, ARRAY_COUNT(sPidgeotGfx9)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_10.4bpp.lz");
static const ax_sprite sPidgeotSprites10[] = {
	{sPidgeotGfx10, ARRAY_COUNT(sPidgeotGfx10)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_11.4bpp.lz");
static const ax_sprite sPidgeotSprites11[] = {
	{sPidgeotGfx11, ARRAY_COUNT(sPidgeotGfx11)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_12.4bpp.lz");
static const ax_sprite sPidgeotSprites12[] = {
	{sPidgeotGfx12, ARRAY_COUNT(sPidgeotGfx12)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_13.4bpp.lz");
static const ax_sprite sPidgeotSprites13[] = {
	{sPidgeotGfx13, ARRAY_COUNT(sPidgeotGfx13)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_14.4bpp.lz");
static const ax_sprite sPidgeotSprites14[] = {
	{sPidgeotGfx14, ARRAY_COUNT(sPidgeotGfx14)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_15.4bpp.lz");
static const ax_sprite sPidgeotSprites15[] = {
	{sPidgeotGfx15, ARRAY_COUNT(sPidgeotGfx15)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_16.4bpp.lz");
static const u8 sPidgeotGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_16_1.4bpp.lz");
static const u8 sPidgeotGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_16_2.4bpp.lz");
static const ax_sprite sPidgeotSprites16[] = {
	{NULL, 32}, 
	{sPidgeotGfx16, ARRAY_COUNT(sPidgeotGfx16)}, 
	{NULL, 32}, 
	{sPidgeotGfx16_1, ARRAY_COUNT(sPidgeotGfx16_1)}, 
	{NULL, 32}, 
	{sPidgeotGfx16_2, ARRAY_COUNT(sPidgeotGfx16_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_17.4bpp.lz");
static const u8 sPidgeotGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_17_1.4bpp.lz");
static const u8 sPidgeotGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_17_2.4bpp.lz");
static const ax_sprite sPidgeotSprites17[] = {
	{NULL, 32}, 
	{sPidgeotGfx17, ARRAY_COUNT(sPidgeotGfx17)}, 
	{NULL, 64}, 
	{sPidgeotGfx17_1, ARRAY_COUNT(sPidgeotGfx17_1)}, 
	{NULL, 32}, 
	{sPidgeotGfx17_2, ARRAY_COUNT(sPidgeotGfx17_2)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_18.4bpp.lz");
static const u8 sPidgeotGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_18_1.4bpp.lz");
static const ax_sprite sPidgeotSprites18[] = {
	{sPidgeotGfx18, ARRAY_COUNT(sPidgeotGfx18)}, 
	{NULL, 32}, 
	{sPidgeotGfx18_1, ARRAY_COUNT(sPidgeotGfx18_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_19.4bpp.lz");
static const u8 sPidgeotGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_19_1.4bpp.lz");
static const ax_sprite sPidgeotSprites19[] = {
	{sPidgeotGfx19, ARRAY_COUNT(sPidgeotGfx19)}, 
	{NULL, 96}, 
	{sPidgeotGfx19_1, ARRAY_COUNT(sPidgeotGfx19_1)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_20.4bpp.lz");
static const u8 sPidgeotGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_20_1.4bpp.lz");
static const ax_sprite sPidgeotSprites20[] = {
	{sPidgeotGfx20, ARRAY_COUNT(sPidgeotGfx20)}, 
	{NULL, 32}, 
	{sPidgeotGfx20_1, ARRAY_COUNT(sPidgeotGfx20_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_21.4bpp.lz");
static const u8 sPidgeotGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_21_1.4bpp.lz");
static const u8 sPidgeotGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_21_2.4bpp.lz");
static const ax_sprite sPidgeotSprites21[] = {
	{sPidgeotGfx21, ARRAY_COUNT(sPidgeotGfx21)}, 
	{NULL, 32}, 
	{sPidgeotGfx21_1, ARRAY_COUNT(sPidgeotGfx21_1)}, 
	{NULL, 32}, 
	{sPidgeotGfx21_2, ARRAY_COUNT(sPidgeotGfx21_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_22.4bpp.lz");
static const u8 sPidgeotGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_22_1.4bpp.lz");
static const ax_sprite sPidgeotSprites22[] = {
	{NULL, 32}, 
	{sPidgeotGfx22, ARRAY_COUNT(sPidgeotGfx22)}, 
	{NULL, 32}, 
	{sPidgeotGfx22_1, ARRAY_COUNT(sPidgeotGfx22_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_23.4bpp.lz");
static const u8 sPidgeotGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_23_1.4bpp.lz");
static const u8 sPidgeotGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_23_2.4bpp.lz");
static const ax_sprite sPidgeotSprites23[] = {
	{sPidgeotGfx23, ARRAY_COUNT(sPidgeotGfx23)}, 
	{NULL, 32}, 
	{sPidgeotGfx23_1, ARRAY_COUNT(sPidgeotGfx23_1)}, 
	{NULL, 32}, 
	{sPidgeotGfx23_2, ARRAY_COUNT(sPidgeotGfx23_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_24.4bpp.lz");
static const u8 sPidgeotGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_24_1.4bpp.lz");
static const u8 sPidgeotGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_24_2.4bpp.lz");
static const ax_sprite sPidgeotSprites24[] = {
	{sPidgeotGfx24, ARRAY_COUNT(sPidgeotGfx24)}, 
	{NULL, 32}, 
	{sPidgeotGfx24_1, ARRAY_COUNT(sPidgeotGfx24_1)}, 
	{NULL, 32}, 
	{sPidgeotGfx24_2, ARRAY_COUNT(sPidgeotGfx24_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_25.4bpp.lz");
static const ax_sprite sPidgeotSprites25[] = {
	{NULL, 128}, 
	{sPidgeotGfx25, ARRAY_COUNT(sPidgeotGfx25)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_26.4bpp.lz");
static const u8 sPidgeotGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_26_1.4bpp.lz");
static const u8 sPidgeotGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_26_2.4bpp.lz");
static const ax_sprite sPidgeotSprites26[] = {
	{NULL, 32}, 
	{sPidgeotGfx26, ARRAY_COUNT(sPidgeotGfx26)}, 
	{NULL, 32}, 
	{sPidgeotGfx26_1, ARRAY_COUNT(sPidgeotGfx26_1)}, 
	{NULL, 32}, 
	{sPidgeotGfx26_2, ARRAY_COUNT(sPidgeotGfx26_2)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_27.4bpp.lz");
static const u8 sPidgeotGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_27_1.4bpp.lz");
static const ax_sprite sPidgeotSprites27[] = {
	{sPidgeotGfx27, ARRAY_COUNT(sPidgeotGfx27)}, 
	{NULL, 32}, 
	{sPidgeotGfx27_1, ARRAY_COUNT(sPidgeotGfx27_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_28.4bpp.lz");
static const u8 sPidgeotGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_28_1.4bpp.lz");
static const u8 sPidgeotGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_28_2.4bpp.lz");
static const ax_sprite sPidgeotSprites28[] = {
	{NULL, 32}, 
	{sPidgeotGfx28, ARRAY_COUNT(sPidgeotGfx28)}, 
	{NULL, 32}, 
	{sPidgeotGfx28_1, ARRAY_COUNT(sPidgeotGfx28_1)}, 
	{NULL, 32}, 
	{sPidgeotGfx28_2, ARRAY_COUNT(sPidgeotGfx28_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_29.4bpp.lz");
static const u8 sPidgeotGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_29_1.4bpp.lz");
static const u8 sPidgeotGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_29_2.4bpp.lz");
static const ax_sprite sPidgeotSprites29[] = {
	{NULL, 32}, 
	{sPidgeotGfx29, ARRAY_COUNT(sPidgeotGfx29)}, 
	{NULL, 64}, 
	{sPidgeotGfx29_1, ARRAY_COUNT(sPidgeotGfx29_1)}, 
	{NULL, 32}, 
	{sPidgeotGfx29_2, ARRAY_COUNT(sPidgeotGfx29_2)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_30.4bpp.lz");
static const u8 sPidgeotGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_30_1.4bpp.lz");
static const ax_sprite sPidgeotSprites30[] = {
	{sPidgeotGfx30, ARRAY_COUNT(sPidgeotGfx30)}, 
	{NULL, 32}, 
	{sPidgeotGfx30_1, ARRAY_COUNT(sPidgeotGfx30_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_31.4bpp.lz");
static const ax_sprite sPidgeotSprites31[] = {
	{sPidgeotGfx31, ARRAY_COUNT(sPidgeotGfx31)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_32.4bpp.lz");
static const ax_sprite sPidgeotSprites32[] = {
	{sPidgeotGfx32, ARRAY_COUNT(sPidgeotGfx32)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_33.4bpp.lz");
static const ax_sprite sPidgeotSprites33[] = {
	{sPidgeotGfx33, ARRAY_COUNT(sPidgeotGfx33)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_34.4bpp.lz");
static const ax_sprite sPidgeotSprites34[] = {
	{sPidgeotGfx34, ARRAY_COUNT(sPidgeotGfx34)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_35.4bpp.lz");
static const ax_sprite sPidgeotSprites35[] = {
	{sPidgeotGfx35, ARRAY_COUNT(sPidgeotGfx35)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_36.4bpp.lz");
static const ax_sprite sPidgeotSprites36[] = {
	{sPidgeotGfx36, ARRAY_COUNT(sPidgeotGfx36)}, 
	{NULL, 0}
};
static const u8 sPidgeotGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgeot/sprite_37.4bpp.lz");
static const ax_sprite sPidgeotSprites37[] = {
	{sPidgeotGfx37, ARRAY_COUNT(sPidgeotGfx37)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesPidgeot[] = {
	sPidgeotPose1,
	sPidgeotPose2,
	sPidgeotPose3,
	sPidgeotPose4,
	sPidgeotPose5,
	sPidgeotPose6,
	sPidgeotPose7,
	sPidgeotPose8,
	sPidgeotPose9,
	sPidgeotPose10,
	sPidgeotPose11,
	sPidgeotPose12,
	sPidgeotPose13,
	sPidgeotPose14,
	sPidgeotPose15,
	sPidgeotPose16,
	sPidgeotPose17,
	sPidgeotPose18,
	sPidgeotPose19,
	sPidgeotPose20,
	sPidgeotPose21,
	sPidgeotPose22,
	sPidgeotPose23,
	sPidgeotPose24,
	sPidgeotPose1,
	sPidgeotPose26,
	sPidgeotPose27,
	sPidgeotPose28,
	sPidgeotPose4,
	sPidgeotPose30,
	sPidgeotPose31,
	sPidgeotPose32,
	sPidgeotPose7,
	sPidgeotPose34,
	sPidgeotPose35,
	sPidgeotPose36,
	sPidgeotPose10,
	sPidgeotPose38,
	sPidgeotPose39,
	sPidgeotPose40,
	sPidgeotPose13,
	sPidgeotPose42,
	sPidgeotPose43,
	sPidgeotPose44,
	sPidgeotPose16,
	sPidgeotPose46,
	sPidgeotPose47,
	sPidgeotPose48,
	sPidgeotPose19,
	sPidgeotPose50,
	sPidgeotPose51,
	sPidgeotPose52,
	sPidgeotPose22,
	sPidgeotPose54,
	sPidgeotPose55,
	sPidgeotPose56,
	sPidgeotPose1,
	sPidgeotPose26,
	sPidgeotPose27,
	sPidgeotPose28,
	sPidgeotPose4,
	sPidgeotPose30,
	sPidgeotPose31,
	sPidgeotPose32,
	sPidgeotPose7,
	sPidgeotPose34,
	sPidgeotPose35,
	sPidgeotPose36,
	sPidgeotPose10,
	sPidgeotPose38,
	sPidgeotPose39,
	sPidgeotPose40,
	sPidgeotPose13,
	sPidgeotPose42,
	sPidgeotPose43,
	sPidgeotPose44,
	sPidgeotPose16,
	sPidgeotPose46,
	sPidgeotPose47,
	sPidgeotPose48,
	sPidgeotPose19,
	sPidgeotPose50,
	sPidgeotPose51,
	sPidgeotPose52,
	sPidgeotPose22,
	sPidgeotPose54,
	sPidgeotPose55,
	sPidgeotPose56,
	sPidgeotPose1,
	sPidgeotPose27,
	sPidgeotPose28,
	sPidgeotPose4,
	sPidgeotPose31,
	sPidgeotPose32,
	sPidgeotPose7,
	sPidgeotPose35,
	sPidgeotPose36,
	sPidgeotPose10,
	sPidgeotPose39,
	sPidgeotPose40,
	sPidgeotPose13,
	sPidgeotPose43,
	sPidgeotPose44,
	sPidgeotPose16,
	sPidgeotPose47,
	sPidgeotPose48,
	sPidgeotPose19,
	sPidgeotPose51,
	sPidgeotPose52,
	sPidgeotPose22,
	sPidgeotPose55,
	sPidgeotPose56,
	sPidgeotPose27,
	sPidgeotPose28,
	sPidgeotPose31,
	sPidgeotPose32,
	sPidgeotPose35,
	sPidgeotPose36,
	sPidgeotPose39,
	sPidgeotPose40,
	sPidgeotPose43,
	sPidgeotPose44,
	sPidgeotPose47,
	sPidgeotPose48,
	sPidgeotPose51,
	sPidgeotPose52,
	sPidgeotPose55,
	sPidgeotPose56,
	sPidgeotPose129,
	sPidgeotPose130,
	sPidgeotPose131,
	sPidgeotPose132,
	sPidgeotPose133,
	sPidgeotPose134,
	sPidgeotPose135,
	sPidgeotPose136,
	sPidgeotPose137,
	sPidgeotPose138,
	sPidgeotPose1,
	sPidgeotPose2,
	sPidgeotPose3,
	sPidgeotPose4,
	sPidgeotPose5,
	sPidgeotPose6,
	sPidgeotPose7,
	sPidgeotPose8,
	sPidgeotPose9,
	sPidgeotPose10,
	sPidgeotPose11,
	sPidgeotPose12,
	sPidgeotPose13,
	sPidgeotPose14,
	sPidgeotPose15,
	sPidgeotPose16,
	sPidgeotPose17,
	sPidgeotPose18,
	sPidgeotPose19,
	sPidgeotPose20,
	sPidgeotPose21,
	sPidgeotPose22,
	sPidgeotPose23,
	sPidgeotPose24,
	sPidgeotPose26,
	sPidgeotPose164,
	sPidgeotPose165,
	sPidgeotPose166,
	sPidgeotPose42,
	sPidgeotPose168,
	sPidgeotPose34,
	sPidgeotPose30,
	sPidgeotPose28,
	sPidgeotPose32,
	sPidgeotPose36,
	sPidgeotPose40,
	sPidgeotPose44,
	sPidgeotPose48,
	sPidgeotPose52,
	sPidgeotPose56,
	sPidgeotPose1,
	sPidgeotPose27,
	sPidgeotPose28,
	sPidgeotPose4,
	sPidgeotPose31,
	sPidgeotPose32,
	sPidgeotPose7,
	sPidgeotPose35,
	sPidgeotPose36,
	sPidgeotPose10,
	sPidgeotPose39,
	sPidgeotPose40,
	sPidgeotPose13,
	sPidgeotPose43,
	sPidgeotPose44,
	sPidgeotPose16,
	sPidgeotPose47,
	sPidgeotPose48,
	sPidgeotPose19,
	sPidgeotPose51,
	sPidgeotPose52,
	sPidgeotPose22,
	sPidgeotPose55,
	sPidgeotPose56,
	sPidgeotPose28,
	sPidgeotPose56,
	sPidgeotPose52,
	sPidgeotPose48,
	sPidgeotPose44,
	sPidgeotPose40,
	sPidgeotPose36,
	sPidgeotPose32,
	sPidgeotPose1,
	sPidgeotPose22,
	sPidgeotPose19,
	sPidgeotPose16,
	sPidgeotPose13,
	sPidgeotPose10,
	sPidgeotPose7,
	sPidgeotPose4,
};

static const struct PositionSets sAxPositionsPidgeot[] = {
	[0] = { .set = { {-1, -9}, {-8, -7}, {6, -7}, {-1, -8} } },
	[1] = { .set = { {-1, -7}, {-7, -5}, {6, -8}, {-1, -6} } },
	[2] = { .set = { {-1, -7}, {-8, -8}, {5, -5}, {-1, -6} } },
	[3] = { .set = { {7, -12}, {-2, -7}, {-7, -6}, {-1, -8} } },
	[4] = { .set = { {8, -11}, {-3, -8}, {-9, -7}, {-2, -8} } },
	[5] = { .set = { {8, -11}, {0, -6}, {-6, -5}, {-1, -7} } },
	[6] = { .set = { {10, -15}, {-5, -9}, {-5, -4}, {0, -8} } },
	[7] = { .set = { {11, -14}, {-5, -7}, {-6, -4}, {-1, -7} } },
	[8] = { .set = { {11, -14}, {-6, -7}, {-3, -4}, {0, -7} } },
	[9] = { .set = { {7, -17}, {-7, -7}, {-1, -4}, {-1, -10} } },
	[10] = { .set = { {8, -16}, {-7, -7}, {-2, -3}, {0, -9} } },
	[11] = { .set = { {8, -16}, {-6, -5}, {2, -3}, {0, -9} } },
	[12] = { .set = { {-1, -19}, {4, -4}, {-6, -4}, {-1, -9} } },
	[13] = { .set = { {-1, -17}, {4, -5}, {-5, -3}, {-1, -8} } },
	[14] = { .set = { {-1, -17}, {3, -3}, {-7, -6}, {-1, -8} } },
	[15] = { .set = { {-9, -17}, {5, -7}, {-1, -4}, {-1, -10} } },
	[16] = { .set = { {-10, -16}, {5, -7}, {0, -3}, {-2, -9} } },
	[17] = { .set = { {-10, -16}, {4, -5}, {-4, -3}, {-2, -9} } },
	[18] = { .set = { {-12, -15}, {3, -9}, {3, -4}, {-2, -8} } },
	[19] = { .set = { {-13, -14}, {3, -7}, {4, -4}, {-1, -7} } },
	[20] = { .set = { {-13, -14}, {4, -7}, {1, -4}, {-2, -7} } },
	[21] = { .set = { {-9, -12}, {0, -7}, {5, -6}, {-1, -8} } },
	[22] = { .set = { {-10, -11}, {1, -8}, {7, -7}, {0, -8} } },
	[23] = { .set = { {-10, -11}, {-2, -6}, {4, -5}, {-1, -7} } },
	[24] = { .set = { {-1, -9}, {-8, -7}, {6, -7}, {-1, -8} } },
	[25] = { .set = { {-1, 0}, {-14, -10}, {12, -10}, {-1, -11} } },
	[26] = { .set = { {-1, -9}, {-11, -3}, {9, -3}, {-1, -8} } },
	[27] = { .set = { {-1, -9}, {-13, -21}, {11, -21}, {-1, -8} } },
	[28] = { .set = { {7, -12}, {-2, -7}, {-7, -6}, {-1, -8} } },
	[29] = { .set = { {10, -3}, {8, -17}, {-11, -3}, {1, -9} } },
	[30] = { .set = { {7, -12}, {11, -3}, {-1, 1}, {1, -9} } },
	[31] = { .set = { {7, -12}, {8, -22}, {-13, -19}, {-1, -9} } },
	[32] = { .set = { {10, -15}, {-5, -9}, {-5, -4}, {0, -8} } },
	[33] = { .set = { {13, -8}, {-1, -18}, {-1, 3}, {0, -9} } },
	[34] = { .set = { {10, -15}, {7, -9}, {6, -1}, {0, -10} } },
	[35] = { .set = { {10, -15}, {-2, -23}, {-8, -19}, {-1, -12} } },
	[36] = { .set = { {7, -17}, {-7, -7}, {-1, -4}, {-1, -10} } },
	[37] = { .set = { {7, -12}, {-13, -13}, {9, -2}, {-2, -8} } },
	[38] = { .set = { {7, -17}, {-4, -6}, {9, -2}, {0, -11} } },
	[39] = { .set = { {6, -18}, {-10, -22}, {7, -19}, {-2, -12} } },
	[40] = { .set = { {-1, -19}, {4, -4}, {-6, -4}, {-1, -9} } },
	[41] = { .set = { {-1, -15}, {13, -5}, {-15, -5}, {-1, -10} } },
	[42] = { .set = { {-1, -19}, {8, -1}, {-10, -1}, {-1, -9} } },
	[43] = { .set = { {-1, -19}, {10, -21}, {-12, -21}, {-1, -12} } },
	[44] = { .set = { {-9, -17}, {5, -7}, {-1, -4}, {-1, -10} } },
	[45] = { .set = { {-11, -12}, {9, -13}, {-13, -2}, {-2, -8} } },
	[46] = { .set = { {-9, -17}, {2, -6}, {-11, -2}, {-2, -11} } },
	[47] = { .set = { {-8, -18}, {8, -22}, {-9, -19}, {0, -12} } },
	[48] = { .set = { {-12, -15}, {3, -9}, {3, -4}, {-2, -8} } },
	[49] = { .set = { {-15, -8}, {-1, -18}, {-1, 3}, {-2, -9} } },
	[50] = { .set = { {-12, -15}, {-9, -9}, {-8, -1}, {-2, -10} } },
	[51] = { .set = { {-12, -15}, {0, -23}, {6, -19}, {-1, -12} } },
	[52] = { .set = { {-9, -12}, {0, -7}, {5, -6}, {-1, -8} } },
	[53] = { .set = { {-12, -3}, {-10, -17}, {9, -3}, {-3, -9} } },
	[54] = { .set = { {-9, -12}, {-13, -3}, {-1, 1}, {-3, -9} } },
	[55] = { .set = { {-9, -12}, {-10, -22}, {11, -19}, {-1, -9} } },
	[56] = { .set = { {-1, -9}, {-8, -7}, {6, -7}, {-1, -8} } },
	[57] = { .set = { {-1, 0}, {-14, -10}, {12, -10}, {-1, -11} } },
	[58] = { .set = { {-1, -9}, {-11, -3}, {9, -3}, {-1, -8} } },
	[59] = { .set = { {-1, -9}, {-13, -21}, {11, -21}, {-1, -8} } },
	[60] = { .set = { {7, -12}, {-2, -7}, {-7, -6}, {-1, -8} } },
	[61] = { .set = { {10, -3}, {8, -17}, {-11, -3}, {1, -9} } },
	[62] = { .set = { {7, -12}, {11, -3}, {-1, 1}, {1, -9} } },
	[63] = { .set = { {7, -12}, {8, -22}, {-13, -19}, {-1, -9} } },
	[64] = { .set = { {10, -15}, {-5, -9}, {-5, -4}, {0, -8} } },
	[65] = { .set = { {13, -8}, {-1, -18}, {-1, 3}, {0, -9} } },
	[66] = { .set = { {10, -15}, {7, -9}, {6, -1}, {0, -10} } },
	[67] = { .set = { {10, -15}, {-2, -23}, {-8, -19}, {-1, -12} } },
	[68] = { .set = { {7, -17}, {-7, -7}, {-1, -4}, {-1, -10} } },
	[69] = { .set = { {7, -12}, {-13, -13}, {9, -2}, {-2, -8} } },
	[70] = { .set = { {7, -17}, {-4, -6}, {9, -2}, {0, -11} } },
	[71] = { .set = { {6, -18}, {-10, -22}, {7, -19}, {-2, -12} } },
	[72] = { .set = { {-1, -19}, {4, -4}, {-6, -4}, {-1, -9} } },
	[73] = { .set = { {-1, -15}, {13, -5}, {-15, -5}, {-1, -10} } },
	[74] = { .set = { {-1, -19}, {8, -1}, {-10, -1}, {-1, -9} } },
	[75] = { .set = { {-1, -19}, {10, -21}, {-12, -21}, {-1, -12} } },
	[76] = { .set = { {-9, -17}, {5, -7}, {-1, -4}, {-1, -10} } },
	[77] = { .set = { {-11, -12}, {9, -13}, {-13, -2}, {-2, -8} } },
	[78] = { .set = { {-9, -17}, {2, -6}, {-11, -2}, {-2, -11} } },
	[79] = { .set = { {-8, -18}, {8, -22}, {-9, -19}, {0, -12} } },
	[80] = { .set = { {-12, -15}, {3, -9}, {3, -4}, {-2, -8} } },
	[81] = { .set = { {-15, -8}, {-1, -18}, {-1, 3}, {-2, -9} } },
	[82] = { .set = { {-12, -15}, {-9, -9}, {-8, -1}, {-2, -10} } },
	[83] = { .set = { {-12, -15}, {0, -23}, {6, -19}, {-1, -12} } },
	[84] = { .set = { {-9, -12}, {0, -7}, {5, -6}, {-1, -8} } },
	[85] = { .set = { {-12, -3}, {-10, -17}, {9, -3}, {-3, -9} } },
	[86] = { .set = { {-9, -12}, {-13, -3}, {-1, 1}, {-3, -9} } },
	[87] = { .set = { {-9, -12}, {-10, -22}, {11, -19}, {-1, -9} } },
	[88] = { .set = { {-1, -9}, {-8, -7}, {6, -7}, {-1, -8} } },
	[89] = { .set = { {-1, -9}, {-11, -3}, {9, -3}, {-1, -8} } },
	[90] = { .set = { {-1, -9}, {-13, -21}, {11, -21}, {-1, -8} } },
	[91] = { .set = { {7, -12}, {-2, -7}, {-7, -6}, {-1, -8} } },
	[92] = { .set = { {7, -12}, {11, -3}, {-1, 1}, {1, -9} } },
	[93] = { .set = { {7, -12}, {8, -22}, {-13, -19}, {-1, -9} } },
	[94] = { .set = { {10, -15}, {-5, -9}, {-5, -4}, {0, -8} } },
	[95] = { .set = { {10, -15}, {7, -9}, {6, -1}, {0, -10} } },
	[96] = { .set = { {10, -15}, {-2, -23}, {-8, -19}, {-1, -12} } },
	[97] = { .set = { {7, -17}, {-7, -7}, {-1, -4}, {-1, -10} } },
	[98] = { .set = { {7, -17}, {-4, -6}, {9, -2}, {0, -11} } },
	[99] = { .set = { {6, -18}, {-10, -22}, {7, -19}, {-2, -12} } },
	[100] = { .set = { {-1, -19}, {4, -4}, {-6, -4}, {-1, -9} } },
	[101] = { .set = { {-1, -19}, {8, -1}, {-10, -1}, {-1, -9} } },
	[102] = { .set = { {-1, -19}, {10, -21}, {-12, -21}, {-1, -12} } },
	[103] = { .set = { {-9, -17}, {5, -7}, {-1, -4}, {-1, -10} } },
	[104] = { .set = { {-9, -17}, {2, -6}, {-11, -2}, {-2, -11} } },
	[105] = { .set = { {-8, -18}, {8, -22}, {-9, -19}, {0, -12} } },
	[106] = { .set = { {-12, -15}, {3, -9}, {3, -4}, {-2, -8} } },
	[107] = { .set = { {-12, -15}, {-9, -9}, {-8, -1}, {-2, -10} } },
	[108] = { .set = { {-12, -15}, {0, -23}, {6, -19}, {-1, -12} } },
	[109] = { .set = { {-9, -12}, {0, -7}, {5, -6}, {-1, -8} } },
	[110] = { .set = { {-9, -12}, {-13, -3}, {-1, 1}, {-3, -9} } },
	[111] = { .set = { {-9, -12}, {-10, -22}, {11, -19}, {-1, -9} } },
	[112] = { .set = { {-1, -9}, {-11, -3}, {9, -3}, {-1, -8} } },
	[113] = { .set = { {-1, -9}, {-13, -21}, {11, -21}, {-1, -8} } },
	[114] = { .set = { {7, -12}, {11, -3}, {-1, 1}, {1, -9} } },
	[115] = { .set = { {7, -12}, {8, -22}, {-13, -19}, {-1, -9} } },
	[116] = { .set = { {10, -15}, {7, -9}, {6, -1}, {0, -10} } },
	[117] = { .set = { {10, -15}, {-2, -23}, {-8, -19}, {-1, -12} } },
	[118] = { .set = { {7, -17}, {-4, -6}, {9, -2}, {0, -11} } },
	[119] = { .set = { {6, -18}, {-10, -22}, {7, -19}, {-2, -12} } },
	[120] = { .set = { {-1, -19}, {8, -1}, {-10, -1}, {-1, -9} } },
	[121] = { .set = { {-1, -19}, {10, -21}, {-12, -21}, {-1, -12} } },
	[122] = { .set = { {-9, -17}, {2, -6}, {-11, -2}, {-2, -11} } },
	[123] = { .set = { {-8, -18}, {8, -22}, {-9, -19}, {0, -12} } },
	[124] = { .set = { {-12, -15}, {-9, -9}, {-8, -1}, {-2, -10} } },
	[125] = { .set = { {-12, -15}, {0, -23}, {6, -19}, {-1, -12} } },
	[126] = { .set = { {-9, -12}, {-13, -3}, {-1, 1}, {-3, -9} } },
	[127] = { .set = { {-9, -12}, {-10, -22}, {11, -19}, {-1, -9} } },
	[128] = { .set = { {8, -10}, {-2, -8}, {-7, -7}, {-1, -9} } },
	[129] = { .set = { {8, -7}, {-2, -7}, {-7, -6}, {-1, -8} } },
	[130] = { .set = { {-1, -18}, {-13, -20}, {11, -20}, {-1, -12} } },
	[131] = { .set = { {4, -20}, {6, -22}, {-12, -17}, {-1, -11} } },
	[132] = { .set = { {5, -21}, {-7, -24}, {-10, -19}, {-2, -13} } },
	[133] = { .set = { {5, -19}, {-10, -19}, {10, -15}, {-2, -12} } },
	[134] = { .set = { {0, -21}, {11, -17}, {-11, -17}, {0, -11} } },
	[135] = { .set = { {-6, -19}, {9, -19}, {-11, -15}, {1, -12} } },
	[136] = { .set = { {-6, -21}, {6, -24}, {9, -19}, {1, -13} } },
	[137] = { .set = { {-5, -20}, {-7, -22}, {11, -17}, {0, -11} } },
	[138] = { .set = { {-1, -9}, {-8, -7}, {6, -7}, {-1, -8} } },
	[139] = { .set = { {-1, -7}, {-7, -5}, {6, -8}, {-1, -6} } },
	[140] = { .set = { {-1, -7}, {-8, -8}, {5, -5}, {-1, -6} } },
	[141] = { .set = { {7, -12}, {-2, -7}, {-7, -6}, {-1, -8} } },
	[142] = { .set = { {8, -11}, {-3, -8}, {-9, -7}, {-2, -8} } },
	[143] = { .set = { {8, -11}, {0, -6}, {-6, -5}, {-1, -7} } },
	[144] = { .set = { {10, -15}, {-5, -9}, {-5, -4}, {0, -8} } },
	[145] = { .set = { {11, -14}, {-5, -7}, {-6, -4}, {-1, -7} } },
	[146] = { .set = { {11, -14}, {-6, -7}, {-3, -4}, {0, -7} } },
	[147] = { .set = { {7, -17}, {-7, -7}, {-1, -4}, {-1, -10} } },
	[148] = { .set = { {8, -16}, {-7, -7}, {-2, -3}, {0, -9} } },
	[149] = { .set = { {8, -16}, {-6, -5}, {2, -3}, {0, -9} } },
	[150] = { .set = { {-1, -19}, {4, -4}, {-6, -4}, {-1, -9} } },
	[151] = { .set = { {-1, -17}, {4, -5}, {-5, -3}, {-1, -8} } },
	[152] = { .set = { {-1, -17}, {3, -3}, {-7, -6}, {-1, -8} } },
	[153] = { .set = { {-9, -17}, {5, -7}, {-1, -4}, {-1, -10} } },
	[154] = { .set = { {-10, -16}, {5, -7}, {0, -3}, {-2, -9} } },
	[155] = { .set = { {-10, -16}, {4, -5}, {-4, -3}, {-2, -9} } },
	[156] = { .set = { {-12, -15}, {3, -9}, {3, -4}, {-2, -8} } },
	[157] = { .set = { {-13, -14}, {3, -7}, {4, -4}, {-1, -7} } },
	[158] = { .set = { {-13, -14}, {4, -7}, {1, -4}, {-2, -7} } },
	[159] = { .set = { {-9, -12}, {0, -7}, {5, -6}, {-1, -8} } },
	[160] = { .set = { {-10, -11}, {1, -8}, {7, -7}, {0, -8} } },
	[161] = { .set = { {-10, -11}, {-2, -6}, {4, -5}, {-1, -7} } },
	[162] = { .set = { {-1, 0}, {-14, -10}, {12, -10}, {-1, -11} } },
	[163] = { .set = { {-11, -3}, {-9, -17}, {10, -3}, {-2, -9} } },
	[164] = { .set = { {-14, -8}, {0, -18}, {0, 3}, {-1, -9} } },
	[165] = { .set = { {-10, -12}, {10, -13}, {-12, -2}, {-1, -8} } },
	[166] = { .set = { {-1, -15}, {13, -5}, {-15, -5}, {-1, -10} } },
	[167] = { .set = { {8, -12}, {-12, -13}, {10, -2}, {-1, -8} } },
	[168] = { .set = { {13, -8}, {-1, -18}, {-1, 3}, {0, -9} } },
	[169] = { .set = { {10, -3}, {8, -17}, {-11, -3}, {1, -9} } },
	[170] = { .set = { {-1, -9}, {-13, -21}, {11, -21}, {-1, -8} } },
	[171] = { .set = { {7, -12}, {8, -22}, {-13, -19}, {-1, -9} } },
	[172] = { .set = { {10, -15}, {-2, -23}, {-8, -19}, {-1, -12} } },
	[173] = { .set = { {6, -18}, {-10, -22}, {7, -19}, {-2, -12} } },
	[174] = { .set = { {-1, -19}, {10, -21}, {-12, -21}, {-1, -12} } },
	[175] = { .set = { {-8, -18}, {8, -22}, {-9, -19}, {0, -12} } },
	[176] = { .set = { {-12, -15}, {0, -23}, {6, -19}, {-1, -12} } },
	[177] = { .set = { {-9, -12}, {-10, -22}, {11, -19}, {-1, -9} } },
	[178] = { .set = { {-1, -9}, {-8, -7}, {6, -7}, {-1, -8} } },
	[179] = { .set = { {-1, -9}, {-11, -3}, {9, -3}, {-1, -8} } },
	[180] = { .set = { {-1, -9}, {-13, -21}, {11, -21}, {-1, -8} } },
	[181] = { .set = { {7, -12}, {-2, -7}, {-7, -6}, {-1, -8} } },
	[182] = { .set = { {7, -12}, {11, -3}, {-1, 1}, {1, -9} } },
	[183] = { .set = { {7, -12}, {8, -22}, {-13, -19}, {-1, -9} } },
	[184] = { .set = { {10, -15}, {-5, -9}, {-5, -4}, {0, -8} } },
	[185] = { .set = { {10, -15}, {7, -9}, {6, -1}, {0, -10} } },
	[186] = { .set = { {10, -15}, {-2, -23}, {-8, -19}, {-1, -12} } },
	[187] = { .set = { {7, -17}, {-7, -7}, {-1, -4}, {-1, -10} } },
	[188] = { .set = { {7, -17}, {-4, -6}, {9, -2}, {0, -11} } },
	[189] = { .set = { {6, -18}, {-10, -22}, {7, -19}, {-2, -12} } },
	[190] = { .set = { {-1, -19}, {4, -4}, {-6, -4}, {-1, -9} } },
	[191] = { .set = { {-1, -19}, {8, -1}, {-10, -1}, {-1, -9} } },
	[192] = { .set = { {-1, -19}, {10, -21}, {-12, -21}, {-1, -12} } },
	[193] = { .set = { {-9, -17}, {5, -7}, {-1, -4}, {-1, -10} } },
	[194] = { .set = { {-9, -17}, {2, -6}, {-11, -2}, {-2, -11} } },
	[195] = { .set = { {-8, -18}, {8, -22}, {-9, -19}, {0, -12} } },
	[196] = { .set = { {-12, -15}, {3, -9}, {3, -4}, {-2, -8} } },
	[197] = { .set = { {-12, -15}, {-9, -9}, {-8, -1}, {-2, -10} } },
	[198] = { .set = { {-12, -15}, {0, -23}, {6, -19}, {-1, -12} } },
	[199] = { .set = { {-9, -12}, {0, -7}, {5, -6}, {-1, -8} } },
	[200] = { .set = { {-9, -12}, {-13, -3}, {-1, 1}, {-3, -9} } },
	[201] = { .set = { {-9, -12}, {-10, -22}, {11, -19}, {-1, -9} } },
	[202] = { .set = { {-1, -9}, {-13, -21}, {11, -21}, {-1, -8} } },
	[203] = { .set = { {-9, -12}, {-10, -22}, {11, -19}, {-1, -9} } },
	[204] = { .set = { {-12, -15}, {0, -23}, {6, -19}, {-1, -12} } },
	[205] = { .set = { {-8, -18}, {8, -22}, {-9, -19}, {0, -12} } },
	[206] = { .set = { {-1, -19}, {10, -21}, {-12, -21}, {-1, -12} } },
	[207] = { .set = { {6, -18}, {-10, -22}, {7, -19}, {-2, -12} } },
	[208] = { .set = { {10, -15}, {-2, -23}, {-8, -19}, {-1, -12} } },
	[209] = { .set = { {7, -12}, {8, -22}, {-13, -19}, {-1, -9} } },
	[210] = { .set = { {-1, -9}, {-8, -7}, {6, -7}, {-1, -8} } },
	[211] = { .set = { {-9, -12}, {0, -7}, {5, -6}, {-1, -8} } },
	[212] = { .set = { {-12, -15}, {3, -9}, {3, -4}, {-2, -8} } },
	[213] = { .set = { {-9, -17}, {5, -7}, {-1, -4}, {-1, -10} } },
	[214] = { .set = { {-1, -19}, {4, -4}, {-6, -4}, {-1, -9} } },
	[215] = { .set = { {7, -17}, {-7, -7}, {-1, -4}, {-1, -10} } },
	[216] = { .set = { {10, -15}, {-5, -9}, {-5, -4}, {0, -8} } },
	[217] = { .set = { {7, -12}, {-2, -7}, {-7, -6}, {-1, -8} } },
};

static const ax_anim *const sPidgeotAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02603),
	AX_ANIM_PTR(gAxSharedAnim_02679),
	AX_ANIM_PTR(gAxSharedAnim_02688),
	AX_ANIM_PTR(gAxSharedAnim_02697),
	AX_ANIM_PTR(gAxSharedAnim_02615),
	AX_ANIM_PTR(gAxSharedAnim_02637),
	AX_ANIM_PTR(gAxSharedAnim_02650),
	AX_ANIM_PTR(gAxSharedAnim_02659),
};

static const ax_anim *const sPidgeotAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_01687),
	AX_ANIM_PTR(sPidgeotAnims_2_2),
	AX_ANIM_PTR(sPidgeotAnims_2_3),
	AX_ANIM_PTR(gAxSharedAnim_01899),
	AX_ANIM_PTR(gAxSharedAnim_01927),
	AX_ANIM_PTR(gAxSharedAnim_01954),
	AX_ANIM_PTR(sPidgeotAnims_2_7),
	AX_ANIM_PTR(sPidgeotAnims_2_8),
};

static const ax_anim *const sPidgeotAnimTable3[] = {
	AX_ANIM_PTR(gAxSharedAnim_02015),
	AX_ANIM_PTR(sPidgeotAnims_3_2),
	AX_ANIM_PTR(sPidgeotAnims_3_3),
	AX_ANIM_PTR(gAxSharedAnim_02076),
	AX_ANIM_PTR(gAxSharedAnim_02102),
	AX_ANIM_PTR(gAxSharedAnim_02129),
	AX_ANIM_PTR(sPidgeotAnims_3_7),
	AX_ANIM_PTR(sPidgeotAnims_3_8),
};

static const ax_anim *const sPidgeotAnimTable4[] = {
	AX_ANIM_PTR(sPidgeotAnims_4_1),
	AX_ANIM_PTR(sPidgeotAnims_4_2),
	AX_ANIM_PTR(sPidgeotAnims_4_3),
	AX_ANIM_PTR(sPidgeotAnims_4_4),
	AX_ANIM_PTR(sPidgeotAnims_4_5),
	AX_ANIM_PTR(sPidgeotAnims_4_6),
	AX_ANIM_PTR(sPidgeotAnims_4_7),
	AX_ANIM_PTR(sPidgeotAnims_4_8),
};

static const ax_anim *const sPidgeotAnimTable5[] = {
	AX_ANIM_PTR(sPidgeotAnims_5_1),
	AX_ANIM_PTR(sPidgeotAnims_5_2),
	AX_ANIM_PTR(sPidgeotAnims_5_3),
	AX_ANIM_PTR(sPidgeotAnims_5_4),
	AX_ANIM_PTR(sPidgeotAnims_5_5),
	AX_ANIM_PTR(sPidgeotAnims_5_6),
	AX_ANIM_PTR(sPidgeotAnims_5_7),
	AX_ANIM_PTR(sPidgeotAnims_5_8),
};

static const ax_anim *const sPidgeotAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
};

static const ax_anim *const sPidgeotAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00398),
	AX_ANIM_PTR(gAxSharedAnim_00404),
	AX_ANIM_PTR(gAxSharedAnim_00415),
	AX_ANIM_PTR(gAxSharedAnim_00424),
	AX_ANIM_PTR(gAxSharedAnim_00436),
	AX_ANIM_PTR(gAxSharedAnim_00444),
	AX_ANIM_PTR(gAxSharedAnim_00454),
	AX_ANIM_PTR(gAxSharedAnim_00464),
};

static const ax_anim *const sPidgeotAnimTable8[] = {
	AX_ANIM_PTR(gAxSharedAnim_02457),
	AX_ANIM_PTR(gAxSharedAnim_02459),
	AX_ANIM_PTR(gAxSharedAnim_02461),
	AX_ANIM_PTR(sPidgeotAnims_8_4),
	AX_ANIM_PTR(sPidgeotAnims_8_5),
	AX_ANIM_PTR(sPidgeotAnims_8_6),
	AX_ANIM_PTR(sPidgeotAnims_8_7),
	AX_ANIM_PTR(sPidgeotAnims_8_8),
};

static const ax_anim *const sPidgeotAnimTable9[] = {
	AX_ANIM_PTR(sPidgeotAnims_9_1),
	AX_ANIM_PTR(sPidgeotAnims_9_2),
	AX_ANIM_PTR(gAxSharedAnim_00769),
	AX_ANIM_PTR(sPidgeotAnims_9_4),
	AX_ANIM_PTR(sPidgeotAnims_9_5),
	AX_ANIM_PTR(sPidgeotAnims_9_6),
	AX_ANIM_PTR(gAxSharedAnim_00720),
	AX_ANIM_PTR(sPidgeotAnims_9_8),
};

static const ax_anim *const sPidgeotAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00801),
	AX_ANIM_PTR(gAxSharedAnim_00813),
	AX_ANIM_PTR(gAxSharedAnim_00827),
	AX_ANIM_PTR(gAxSharedAnim_00838),
	AX_ANIM_PTR(gAxSharedAnim_00849),
	AX_ANIM_PTR(gAxSharedAnim_00862),
	AX_ANIM_PTR(gAxSharedAnim_00879),
	AX_ANIM_PTR(gAxSharedAnim_00889),
};

static const ax_anim *const sPidgeotAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_00900),
	AX_ANIM_PTR(gAxSharedAnim_00941),
	AX_ANIM_PTR(gAxSharedAnim_00976),
	AX_ANIM_PTR(gAxSharedAnim_01026),
	AX_ANIM_PTR(gAxSharedAnim_01076),
	AX_ANIM_PTR(gAxSharedAnim_01122),
	AX_ANIM_PTR(gAxSharedAnim_01166),
	AX_ANIM_PTR(gAxSharedAnim_01198),
};

static const ax_anim *const sPidgeotAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01243),
	AX_ANIM_PTR(gAxSharedAnim_01327),
	AX_ANIM_PTR(gAxSharedAnim_01308),
	AX_ANIM_PTR(gAxSharedAnim_01292),
	AX_ANIM_PTR(gAxSharedAnim_01291),
	AX_ANIM_PTR(gAxSharedAnim_01280),
	AX_ANIM_PTR(gAxSharedAnim_01260),
	AX_ANIM_PTR(gAxSharedAnim_01244),
};

static const ax_anim *const sPidgeotAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01335),
	AX_ANIM_PTR(gAxSharedAnim_01409),
	AX_ANIM_PTR(gAxSharedAnim_01397),
	AX_ANIM_PTR(gAxSharedAnim_01386),
	AX_ANIM_PTR(gAxSharedAnim_01374),
	AX_ANIM_PTR(gAxSharedAnim_01366),
	AX_ANIM_PTR(gAxSharedAnim_01358),
	AX_ANIM_PTR(gAxSharedAnim_01348),
};

static const ax_anim *const *const sAxAnimationsPidgeot[] = {
	sPidgeotAnimTable1,
	sPidgeotAnimTable2,
	sPidgeotAnimTable3,
	sPidgeotAnimTable4,
	sPidgeotAnimTable5,
	sPidgeotAnimTable6,
	sPidgeotAnimTable7,
	sPidgeotAnimTable8,
	sPidgeotAnimTable9,
	sPidgeotAnimTable10,
	sPidgeotAnimTable11,
	sPidgeotAnimTable12,
	sPidgeotAnimTable13,
};

static const ax_sprite *const sAxSpritesPidgeot[] = {
	sPidgeotSprites1,
	sPidgeotSprites2,
	sPidgeotSprites3,
	sPidgeotSprites4,
	sPidgeotSprites5,
	sPidgeotSprites6,
	sPidgeotSprites7,
	sPidgeotSprites8,
	sPidgeotSprites9,
	sPidgeotSprites10,
	sPidgeotSprites11,
	sPidgeotSprites12,
	sPidgeotSprites13,
	sPidgeotSprites14,
	sPidgeotSprites15,
	sPidgeotSprites16,
	sPidgeotSprites17,
	sPidgeotSprites18,
	sPidgeotSprites19,
	sPidgeotSprites20,
	sPidgeotSprites21,
	sPidgeotSprites22,
	sPidgeotSprites23,
	sPidgeotSprites24,
	sPidgeotSprites25,
	sPidgeotSprites26,
	sPidgeotSprites27,
	sPidgeotSprites28,
	sPidgeotSprites29,
	sPidgeotSprites30,
	sPidgeotSprites31,
	sPidgeotSprites32,
	sPidgeotSprites33,
	sPidgeotSprites34,
	sPidgeotSprites35,
	sPidgeotSprites36,
	sPidgeotSprites37,
};

static const axmain sAxMainPidgeot = {
	.poses = sAxPosesPidgeot,
	.animations = sAxAnimationsPidgeot,
	.animCount = ARRAY_COUNT(sAxAnimationsPidgeot),
	.spriteData = sAxSpritesPidgeot,
	.positions = sAxPositionsPidgeot,
};
