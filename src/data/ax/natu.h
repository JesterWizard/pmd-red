/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainNatu;
const SiroArchive gAxNatu = {"SIRO", &sAxMainNatu};

static const ax_pose sNatuPose1[] = {
	AX_POSE(0, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose2[] = {
	AX_POSE(1, OAM1(241, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose3[] = {
	AX_POSE(2, OAM1(241, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose4[] = {
	AX_POSE(3, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose5[] = {
	AX_POSE(4, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose6[] = {
	AX_POSE(5, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose7[] = {
	AX_POSE(6, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose8[] = {
	AX_POSE(7, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose9[] = {
	AX_POSE(8, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose10[] = {
	AX_POSE(9, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose11[] = {
	AX_POSE(10, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose12[] = {
	AX_POSE(11, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose13[] = {
	AX_POSE(12, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose14[] = {
	AX_POSE(13, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose15[] = {
	AX_POSE(14, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose16[] = {
	AX_POSE(9, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose17[] = {
	AX_POSE(10, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose18[] = {
	AX_POSE(11, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose19[] = {
	AX_POSE(6, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose20[] = {
	AX_POSE(7, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose21[] = {
	AX_POSE(8, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose22[] = {
	AX_POSE(3, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose23[] = {
	AX_POSE(4, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose24[] = {
	AX_POSE(5, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose28[] = {
	AX_POSE(15, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose32[] = {
	AX_POSE(16, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose36[] = {
	AX_POSE(17, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose40[] = {
	AX_POSE(18, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose44[] = {
	AX_POSE(19, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose48[] = {
	AX_POSE(18, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose52[] = {
	AX_POSE(17, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose56[] = {
	AX_POSE(16, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose60[] = {
	AX_POSE(20, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose61[] = {
	AX_POSE(21, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose65[] = {
	AX_POSE(22, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose66[] = {
	AX_POSE(23, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose70[] = {
	AX_POSE(24, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose71[] = {
	AX_POSE(25, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose75[] = {
	AX_POSE(26, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose76[] = {
	AX_POSE(27, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose80[] = {
	AX_POSE(28, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose81[] = {
	AX_POSE(29, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose85[] = {
	AX_POSE(26, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose86[] = {
	AX_POSE(27, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose90[] = {
	AX_POSE(24, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose91[] = {
	AX_POSE(25, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose95[] = {
	AX_POSE(22, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose96[] = {
	AX_POSE(23, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose106[] = {
	AX_POSE(30, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose107[] = {
	AX_POSE(31, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose109[] = {
	AX_POSE(32, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose110[] = {
	AX_POSE(33, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose112[] = {
	AX_POSE(34, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose113[] = {
	AX_POSE(35, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose115[] = {
	AX_POSE(36, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose116[] = {
	AX_POSE(37, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose118[] = {
	AX_POSE(38, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose119[] = {
	AX_POSE(39, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose121[] = {
	AX_POSE(36, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose122[] = {
	AX_POSE(37, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose124[] = {
	AX_POSE(34, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose125[] = {
	AX_POSE(35, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose127[] = {
	AX_POSE(32, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose128[] = {
	AX_POSE(33, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose129[] = {
	AX_POSE(40, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose130[] = {
	AX_POSE(41, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose131[] = {
	AX_POSE(42, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose132[] = {
	AX_POSE(43, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose133[] = {
	AX_POSE(44, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose134[] = {
	AX_POSE(45, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose135[] = {
	AX_POSE(46, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose136[] = {
	AX_POSE(45, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose137[] = {
	AX_POSE(44, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNatuPose138[] = {
	AX_POSE(43, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const u8 sNatuAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_2_2.lz");
static const u8 sNatuAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_2_4.lz");
static const u8 sNatuAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_2_5.lz");
static const u8 sNatuAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_2_6.lz");
static const u8 sNatuAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_2_8.lz");
static const u8 sNatuAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_3_1.lz");
static const u8 sNatuAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_3_2.lz");
static const u8 sNatuAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_3_3.lz");
static const u8 sNatuAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_3_4.lz");
static const u8 sNatuAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_3_5.lz");
static const u8 sNatuAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_3_6.lz");
static const u8 sNatuAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_3_7.lz");
static const u8 sNatuAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_3_8.lz");
static const u8 sNatuAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_4_1.lz");
static const u8 sNatuAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_4_2.lz");
static const u8 sNatuAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_4_3.lz");
static const u8 sNatuAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_4_4.lz");
static const u8 sNatuAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_4_5.lz");
static const u8 sNatuAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_4_6.lz");
static const u8 sNatuAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_4_7.lz");
static const u8 sNatuAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_4_8.lz");
static const u8 sNatuAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_5_1.lz");
static const u8 sNatuAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_5_2.lz");
static const u8 sNatuAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_5_3.lz");
static const u8 sNatuAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_5_4.lz");
static const u8 sNatuAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_5_5.lz");
static const u8 sNatuAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_5_6.lz");
static const u8 sNatuAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_5_7.lz");
static const u8 sNatuAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_5_8.lz");
static const u8 sNatuAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_8_1.lz");
static const u8 sNatuAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_8_2.lz");
static const u8 sNatuAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_8_3.lz");
static const u8 sNatuAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_8_4.lz");
static const u8 sNatuAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_8_5.lz");
static const u8 sNatuAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_8_6.lz");
static const u8 sNatuAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_8_7.lz");
static const u8 sNatuAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_8_8.lz");
static const u8 sNatuAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_9_1.lz");
static const u8 sNatuAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_9_2.lz");
static const u8 sNatuAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_9_3.lz");
static const u8 sNatuAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_9_4.lz");
static const u8 sNatuAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_9_5.lz");
static const u8 sNatuAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_9_6.lz");
static const u8 sNatuAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_9_7.lz");
static const u8 sNatuAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/natu/sNatuAnims_9_8.lz");

static const u8 sNatuGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_1.4bpp.lz");
static const ax_sprite sNatuSprites1[] = {
	{sNatuGfx1, ARRAY_COUNT(sNatuGfx1)}, 
	{NULL, 0}
};
static const u8 sNatuGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_2.4bpp.lz");
static const ax_sprite sNatuSprites2[] = {
	{sNatuGfx2, ARRAY_COUNT(sNatuGfx2)}, 
	{NULL, 0}
};
static const u8 sNatuGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_3.4bpp.lz");
static const ax_sprite sNatuSprites3[] = {
	{sNatuGfx3, ARRAY_COUNT(sNatuGfx3)}, 
	{NULL, 0}
};
static const u8 sNatuGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_4.4bpp.lz");
static const ax_sprite sNatuSprites4[] = {
	{sNatuGfx4, ARRAY_COUNT(sNatuGfx4)}, 
	{NULL, 0}
};
static const u8 sNatuGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_5.4bpp.lz");
static const ax_sprite sNatuSprites5[] = {
	{sNatuGfx5, ARRAY_COUNT(sNatuGfx5)}, 
	{NULL, 0}
};
static const u8 sNatuGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_6.4bpp.lz");
static const ax_sprite sNatuSprites6[] = {
	{sNatuGfx6, ARRAY_COUNT(sNatuGfx6)}, 
	{NULL, 0}
};
static const u8 sNatuGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_7.4bpp.lz");
static const ax_sprite sNatuSprites7[] = {
	{sNatuGfx7, ARRAY_COUNT(sNatuGfx7)}, 
	{NULL, 0}
};
static const u8 sNatuGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_8.4bpp.lz");
static const ax_sprite sNatuSprites8[] = {
	{sNatuGfx8, ARRAY_COUNT(sNatuGfx8)}, 
	{NULL, 0}
};
static const u8 sNatuGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_9.4bpp.lz");
static const ax_sprite sNatuSprites9[] = {
	{sNatuGfx9, ARRAY_COUNT(sNatuGfx9)}, 
	{NULL, 0}
};
static const u8 sNatuGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_10.4bpp.lz");
static const ax_sprite sNatuSprites10[] = {
	{sNatuGfx10, ARRAY_COUNT(sNatuGfx10)}, 
	{NULL, 0}
};
static const u8 sNatuGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_11.4bpp.lz");
static const ax_sprite sNatuSprites11[] = {
	{sNatuGfx11, ARRAY_COUNT(sNatuGfx11)}, 
	{NULL, 0}
};
static const u8 sNatuGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_12.4bpp.lz");
static const ax_sprite sNatuSprites12[] = {
	{sNatuGfx12, ARRAY_COUNT(sNatuGfx12)}, 
	{NULL, 0}
};
static const u8 sNatuGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_13.4bpp.lz");
static const ax_sprite sNatuSprites13[] = {
	{sNatuGfx13, ARRAY_COUNT(sNatuGfx13)}, 
	{NULL, 0}
};
static const u8 sNatuGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_14.4bpp.lz");
static const ax_sprite sNatuSprites14[] = {
	{sNatuGfx14, ARRAY_COUNT(sNatuGfx14)}, 
	{NULL, 0}
};
static const u8 sNatuGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_15.4bpp.lz");
static const ax_sprite sNatuSprites15[] = {
	{sNatuGfx15, ARRAY_COUNT(sNatuGfx15)}, 
	{NULL, 0}
};
static const u8 sNatuGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_16.4bpp.lz");
static const u8 sNatuGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_16_1.4bpp.lz");
static const u8 sNatuGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_16_2.4bpp.lz");
static const ax_sprite sNatuSprites16[] = {
	{sNatuGfx16, ARRAY_COUNT(sNatuGfx16)}, 
	{NULL, 32}, 
	{sNatuGfx16_1, ARRAY_COUNT(sNatuGfx16_1)}, 
	{NULL, 32}, 
	{sNatuGfx16_2, ARRAY_COUNT(sNatuGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sNatuGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_17.4bpp.lz");
static const u8 sNatuGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_17_1.4bpp.lz");
static const u8 sNatuGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_17_2.4bpp.lz");
static const ax_sprite sNatuSprites17[] = {
	{sNatuGfx17, ARRAY_COUNT(sNatuGfx17)}, 
	{NULL, 32}, 
	{sNatuGfx17_1, ARRAY_COUNT(sNatuGfx17_1)}, 
	{NULL, 64}, 
	{sNatuGfx17_2, ARRAY_COUNT(sNatuGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sNatuGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_18.4bpp.lz");
static const u8 sNatuGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_18_1.4bpp.lz");
static const ax_sprite sNatuSprites18[] = {
	{sNatuGfx18, ARRAY_COUNT(sNatuGfx18)}, 
	{NULL, 32}, 
	{sNatuGfx18_1, ARRAY_COUNT(sNatuGfx18_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNatuGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_19.4bpp.lz");
static const u8 sNatuGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_19_1.4bpp.lz");
static const ax_sprite sNatuSprites19[] = {
	{sNatuGfx19, ARRAY_COUNT(sNatuGfx19)}, 
	{NULL, 32}, 
	{sNatuGfx19_1, ARRAY_COUNT(sNatuGfx19_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNatuGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_20.4bpp.lz");
static const u8 sNatuGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_20_1.4bpp.lz");
static const ax_sprite sNatuSprites20[] = {
	{sNatuGfx20, ARRAY_COUNT(sNatuGfx20)}, 
	{NULL, 32}, 
	{sNatuGfx20_1, ARRAY_COUNT(sNatuGfx20_1)}, 
	{NULL, 0}
};
static const u8 sNatuGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_21.4bpp.lz");
static const u8 sNatuGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_21_1.4bpp.lz");
static const u8 sNatuGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_21_2.4bpp.lz");
static const ax_sprite sNatuSprites21[] = {
	{NULL, 32}, 
	{sNatuGfx21, ARRAY_COUNT(sNatuGfx21)}, 
	{NULL, 32}, 
	{sNatuGfx21_1, ARRAY_COUNT(sNatuGfx21_1)}, 
	{NULL, 64}, 
	{sNatuGfx21_2, ARRAY_COUNT(sNatuGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sNatuGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_22.4bpp.lz");
static const u8 sNatuGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_22_1.4bpp.lz");
static const u8 sNatuGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_22_2.4bpp.lz");
static const ax_sprite sNatuSprites22[] = {
	{NULL, 32}, 
	{sNatuGfx22, ARRAY_COUNT(sNatuGfx22)}, 
	{NULL, 32}, 
	{sNatuGfx22_1, ARRAY_COUNT(sNatuGfx22_1)}, 
	{NULL, 64}, 
	{sNatuGfx22_2, ARRAY_COUNT(sNatuGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sNatuGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_23.4bpp.lz");
static const u8 sNatuGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_23_1.4bpp.lz");
static const u8 sNatuGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_23_2.4bpp.lz");
static const ax_sprite sNatuSprites23[] = {
	{sNatuGfx23, ARRAY_COUNT(sNatuGfx23)}, 
	{NULL, 32}, 
	{sNatuGfx23_1, ARRAY_COUNT(sNatuGfx23_1)}, 
	{NULL, 32}, 
	{sNatuGfx23_2, ARRAY_COUNT(sNatuGfx23_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sNatuGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_24.4bpp.lz");
static const u8 sNatuGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_24_1.4bpp.lz");
static const u8 sNatuGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_24_2.4bpp.lz");
static const ax_sprite sNatuSprites24[] = {
	{sNatuGfx24, ARRAY_COUNT(sNatuGfx24)}, 
	{NULL, 32}, 
	{sNatuGfx24_1, ARRAY_COUNT(sNatuGfx24_1)}, 
	{NULL, 64}, 
	{sNatuGfx24_2, ARRAY_COUNT(sNatuGfx24_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sNatuGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_25.4bpp.lz");
static const u8 sNatuGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_25_1.4bpp.lz");
static const u8 sNatuGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_25_2.4bpp.lz");
static const ax_sprite sNatuSprites25[] = {
	{sNatuGfx25, ARRAY_COUNT(sNatuGfx25)}, 
	{NULL, 32}, 
	{sNatuGfx25_1, ARRAY_COUNT(sNatuGfx25_1)}, 
	{NULL, 32}, 
	{sNatuGfx25_2, ARRAY_COUNT(sNatuGfx25_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sNatuGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_26.4bpp.lz");
static const u8 sNatuGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_26_1.4bpp.lz");
static const ax_sprite sNatuSprites26[] = {
	{sNatuGfx26, ARRAY_COUNT(sNatuGfx26)}, 
	{NULL, 32}, 
	{sNatuGfx26_1, ARRAY_COUNT(sNatuGfx26_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNatuGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_27.4bpp.lz");
static const ax_sprite sNatuSprites27[] = {
	{sNatuGfx27, ARRAY_COUNT(sNatuGfx27)}, 
	{NULL, 0}
};
static const u8 sNatuGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_28.4bpp.lz");
static const ax_sprite sNatuSprites28[] = {
	{sNatuGfx28, ARRAY_COUNT(sNatuGfx28)}, 
	{NULL, 0}
};
static const u8 sNatuGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_29.4bpp.lz");
static const u8 sNatuGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_29_1.4bpp.lz");
static const ax_sprite sNatuSprites29[] = {
	{sNatuGfx29, ARRAY_COUNT(sNatuGfx29)}, 
	{NULL, 32}, 
	{sNatuGfx29_1, ARRAY_COUNT(sNatuGfx29_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNatuGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_30.4bpp.lz");
static const u8 sNatuGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_30_1.4bpp.lz");
static const ax_sprite sNatuSprites30[] = {
	{sNatuGfx30, ARRAY_COUNT(sNatuGfx30)}, 
	{NULL, 64}, 
	{sNatuGfx30_1, ARRAY_COUNT(sNatuGfx30_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNatuGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_31.4bpp.lz");
static const u8 sNatuGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_31_1.4bpp.lz");
static const ax_sprite sNatuSprites31[] = {
	{sNatuGfx31, ARRAY_COUNT(sNatuGfx31)}, 
	{NULL, 32}, 
	{sNatuGfx31_1, ARRAY_COUNT(sNatuGfx31_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sNatuGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_32.4bpp.lz");
static const u8 sNatuGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_32_1.4bpp.lz");
static const u8 sNatuGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_32_2.4bpp.lz");
static const ax_sprite sNatuSprites32[] = {
	{NULL, 32}, 
	{sNatuGfx32, ARRAY_COUNT(sNatuGfx32)}, 
	{NULL, 32}, 
	{sNatuGfx32_1, ARRAY_COUNT(sNatuGfx32_1)}, 
	{NULL, 32}, 
	{sNatuGfx32_2, ARRAY_COUNT(sNatuGfx32_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sNatuGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_33.4bpp.lz");
static const u8 sNatuGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_33_1.4bpp.lz");
static const u8 sNatuGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_33_2.4bpp.lz");
static const ax_sprite sNatuSprites33[] = {
	{sNatuGfx33, ARRAY_COUNT(sNatuGfx33)}, 
	{NULL, 32}, 
	{sNatuGfx33_1, ARRAY_COUNT(sNatuGfx33_1)}, 
	{NULL, 32}, 
	{sNatuGfx33_2, ARRAY_COUNT(sNatuGfx33_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sNatuGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_34.4bpp.lz");
static const u8 sNatuGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_34_1.4bpp.lz");
static const u8 sNatuGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_34_2.4bpp.lz");
static const ax_sprite sNatuSprites34[] = {
	{sNatuGfx34, ARRAY_COUNT(sNatuGfx34)}, 
	{NULL, 32}, 
	{sNatuGfx34_1, ARRAY_COUNT(sNatuGfx34_1)}, 
	{NULL, 64}, 
	{sNatuGfx34_2, ARRAY_COUNT(sNatuGfx34_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sNatuGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_35.4bpp.lz");
static const u8 sNatuGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_35_1.4bpp.lz");
static const u8 sNatuGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_35_2.4bpp.lz");
static const ax_sprite sNatuSprites35[] = {
	{sNatuGfx35, ARRAY_COUNT(sNatuGfx35)}, 
	{NULL, 32}, 
	{sNatuGfx35_1, ARRAY_COUNT(sNatuGfx35_1)}, 
	{NULL, 32}, 
	{sNatuGfx35_2, ARRAY_COUNT(sNatuGfx35_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sNatuGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_36.4bpp.lz");
static const u8 sNatuGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_36_1.4bpp.lz");
static const u8 sNatuGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_36_2.4bpp.lz");
static const ax_sprite sNatuSprites36[] = {
	{sNatuGfx36, ARRAY_COUNT(sNatuGfx36)}, 
	{NULL, 32}, 
	{sNatuGfx36_1, ARRAY_COUNT(sNatuGfx36_1)}, 
	{NULL, 32}, 
	{sNatuGfx36_2, ARRAY_COUNT(sNatuGfx36_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sNatuGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_37.4bpp.lz");
static const u8 sNatuGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_37_1.4bpp.lz");
static const u8 sNatuGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_37_2.4bpp.lz");
static const ax_sprite sNatuSprites37[] = {
	{sNatuGfx37, ARRAY_COUNT(sNatuGfx37)}, 
	{NULL, 32}, 
	{sNatuGfx37_1, ARRAY_COUNT(sNatuGfx37_1)}, 
	{NULL, 64}, 
	{sNatuGfx37_2, ARRAY_COUNT(sNatuGfx37_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sNatuGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_38.4bpp.lz");
static const u8 sNatuGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_38_1.4bpp.lz");
static const ax_sprite sNatuSprites38[] = {
	{sNatuGfx38, ARRAY_COUNT(sNatuGfx38)}, 
	{NULL, 32}, 
	{sNatuGfx38_1, ARRAY_COUNT(sNatuGfx38_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNatuGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_39.4bpp.lz");
static const ax_sprite sNatuSprites39[] = {
	{sNatuGfx39, ARRAY_COUNT(sNatuGfx39)}, 
	{NULL, 0}
};
static const u8 sNatuGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_40.4bpp.lz");
static const u8 sNatuGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_40_1.4bpp.lz");
static const ax_sprite sNatuSprites40[] = {
	{sNatuGfx40, ARRAY_COUNT(sNatuGfx40)}, 
	{NULL, 32}, 
	{sNatuGfx40_1, ARRAY_COUNT(sNatuGfx40_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNatuGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_41.4bpp.lz");
static const ax_sprite sNatuSprites41[] = {
	{sNatuGfx41, ARRAY_COUNT(sNatuGfx41)}, 
	{NULL, 0}
};
static const u8 sNatuGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_42.4bpp.lz");
static const ax_sprite sNatuSprites42[] = {
	{sNatuGfx42, ARRAY_COUNT(sNatuGfx42)}, 
	{NULL, 0}
};
static const u8 sNatuGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_43.4bpp.lz");
static const ax_sprite sNatuSprites43[] = {
	{sNatuGfx43, ARRAY_COUNT(sNatuGfx43)}, 
	{NULL, 0}
};
static const u8 sNatuGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_44.4bpp.lz");
static const ax_sprite sNatuSprites44[] = {
	{sNatuGfx44, ARRAY_COUNT(sNatuGfx44)}, 
	{NULL, 0}
};
static const u8 sNatuGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_45.4bpp.lz");
static const ax_sprite sNatuSprites45[] = {
	{sNatuGfx45, ARRAY_COUNT(sNatuGfx45)}, 
	{NULL, 0}
};
static const u8 sNatuGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_46.4bpp.lz");
static const ax_sprite sNatuSprites46[] = {
	{sNatuGfx46, ARRAY_COUNT(sNatuGfx46)}, 
	{NULL, 0}
};
static const u8 sNatuGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/natu/sprite_47.4bpp.lz");
static const ax_sprite sNatuSprites47[] = {
	{sNatuGfx47, ARRAY_COUNT(sNatuGfx47)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesNatu[] = {
	sNatuPose1,
	sNatuPose2,
	sNatuPose3,
	sNatuPose4,
	sNatuPose5,
	sNatuPose6,
	sNatuPose7,
	sNatuPose8,
	sNatuPose9,
	sNatuPose10,
	sNatuPose11,
	sNatuPose12,
	sNatuPose13,
	sNatuPose14,
	sNatuPose15,
	sNatuPose16,
	sNatuPose17,
	sNatuPose18,
	sNatuPose19,
	sNatuPose20,
	sNatuPose21,
	sNatuPose22,
	sNatuPose23,
	sNatuPose24,
	sNatuPose1,
	sNatuPose2,
	sNatuPose3,
	sNatuPose28,
	sNatuPose4,
	sNatuPose5,
	sNatuPose6,
	sNatuPose32,
	sNatuPose7,
	sNatuPose8,
	sNatuPose9,
	sNatuPose36,
	sNatuPose10,
	sNatuPose11,
	sNatuPose12,
	sNatuPose40,
	sNatuPose13,
	sNatuPose14,
	sNatuPose15,
	sNatuPose44,
	sNatuPose16,
	sNatuPose17,
	sNatuPose18,
	sNatuPose48,
	sNatuPose19,
	sNatuPose20,
	sNatuPose21,
	sNatuPose52,
	sNatuPose22,
	sNatuPose23,
	sNatuPose24,
	sNatuPose56,
	sNatuPose1,
	sNatuPose2,
	sNatuPose3,
	sNatuPose60,
	sNatuPose61,
	sNatuPose4,
	sNatuPose5,
	sNatuPose6,
	sNatuPose65,
	sNatuPose66,
	sNatuPose7,
	sNatuPose8,
	sNatuPose9,
	sNatuPose70,
	sNatuPose71,
	sNatuPose10,
	sNatuPose11,
	sNatuPose12,
	sNatuPose75,
	sNatuPose76,
	sNatuPose13,
	sNatuPose14,
	sNatuPose15,
	sNatuPose80,
	sNatuPose81,
	sNatuPose16,
	sNatuPose17,
	sNatuPose18,
	sNatuPose85,
	sNatuPose86,
	sNatuPose19,
	sNatuPose20,
	sNatuPose21,
	sNatuPose90,
	sNatuPose91,
	sNatuPose22,
	sNatuPose23,
	sNatuPose24,
	sNatuPose95,
	sNatuPose96,
	sNatuPose28,
	sNatuPose56,
	sNatuPose52,
	sNatuPose48,
	sNatuPose44,
	sNatuPose40,
	sNatuPose36,
	sNatuPose32,
	sNatuPose1,
	sNatuPose106,
	sNatuPose107,
	sNatuPose4,
	sNatuPose109,
	sNatuPose110,
	sNatuPose7,
	sNatuPose112,
	sNatuPose113,
	sNatuPose10,
	sNatuPose115,
	sNatuPose116,
	sNatuPose13,
	sNatuPose118,
	sNatuPose119,
	sNatuPose16,
	sNatuPose121,
	sNatuPose122,
	sNatuPose19,
	sNatuPose124,
	sNatuPose125,
	sNatuPose22,
	sNatuPose127,
	sNatuPose128,
	sNatuPose129,
	sNatuPose130,
	sNatuPose131,
	sNatuPose132,
	sNatuPose133,
	sNatuPose134,
	sNatuPose135,
	sNatuPose136,
	sNatuPose137,
	sNatuPose138,
	sNatuPose1,
	sNatuPose22,
	sNatuPose19,
	sNatuPose16,
	sNatuPose13,
	sNatuPose10,
	sNatuPose7,
	sNatuPose4,
	sNatuPose28,
	sNatuPose56,
	sNatuPose52,
	sNatuPose48,
	sNatuPose44,
	sNatuPose40,
	sNatuPose36,
	sNatuPose32,
	sNatuPose28,
	sNatuPose32,
	sNatuPose36,
	sNatuPose40,
	sNatuPose44,
	sNatuPose48,
	sNatuPose52,
	sNatuPose56,
	sNatuPose1,
	sNatuPose28,
	sNatuPose107,
	sNatuPose4,
	sNatuPose32,
	sNatuPose110,
	sNatuPose7,
	sNatuPose36,
	sNatuPose113,
	sNatuPose10,
	sNatuPose40,
	sNatuPose116,
	sNatuPose13,
	sNatuPose44,
	sNatuPose119,
	sNatuPose16,
	sNatuPose48,
	sNatuPose122,
	sNatuPose19,
	sNatuPose52,
	sNatuPose125,
	sNatuPose22,
	sNatuPose56,
	sNatuPose128,
	sNatuPose28,
	sNatuPose56,
	sNatuPose52,
	sNatuPose48,
	sNatuPose44,
	sNatuPose40,
	sNatuPose36,
	sNatuPose32,
	sNatuPose1,
	sNatuPose22,
	sNatuPose19,
	sNatuPose16,
	sNatuPose13,
	sNatuPose10,
	sNatuPose7,
	sNatuPose4,
};

static const struct PositionSets sAxPositionsNatu[] = {
	[0] = { .set = { {-1, 0}, {-8, -6}, {6, -6}, {-1, -4} } },
	[1] = { .set = { {1, 1}, {-7, -4}, {5, -6}, {-1, -4} } },
	[2] = { .set = { {-3, 1}, {-7, -6}, {5, -4}, {-1, -4} } },
	[3] = { .set = { {4, -1}, {2, -8}, {-7, -4}, {-1, -5} } },
	[4] = { .set = { {3, 0}, {1, -8}, {-7, -4}, {0, -4} } },
	[5] = { .set = { {5, 0}, {0, -8}, {-6, -2}, {-1, -4} } },
	[6] = { .set = { {6, -4}, {-4, -8}, {-5, -2}, {-1, -5} } },
	[7] = { .set = { {5, -2}, {-4, -7}, {-6, -1}, {-2, -4} } },
	[8] = { .set = { {6, -4}, {-3, -7}, {-4, -1}, {-1, -4} } },
	[9] = { .set = { {5, -6}, {-6, -5}, {1, -2}, {-1, -5} } },
	[10] = { .set = { {5, -4}, {-5, -6}, {0, -1}, {-2, -4} } },
	[11] = { .set = { {4, -6}, {-6, -4}, {3, -1}, {-1, -4} } },
	[12] = { .set = { {-1, -10}, {5, -4}, {-7, -4}, {-1, -5} } },
	[13] = { .set = { {-3, -8}, {6, -4}, {-6, -1}, {-1, -3} } },
	[14] = { .set = { {1, -8}, {4, -1}, {-8, -4}, {-1, -3} } },
	[15] = { .set = { {-7, -6}, {4, -5}, {-3, -2}, {-1, -5} } },
	[16] = { .set = { {-7, -4}, {3, -6}, {-2, -1}, {0, -4} } },
	[17] = { .set = { {-6, -6}, {4, -4}, {-5, -1}, {-1, -4} } },
	[18] = { .set = { {-8, -4}, {2, -8}, {3, -2}, {-1, -5} } },
	[19] = { .set = { {-7, -2}, {2, -7}, {4, -1}, {0, -4} } },
	[20] = { .set = { {-8, -4}, {1, -7}, {2, -1}, {-1, -4} } },
	[21] = { .set = { {-6, -1}, {-4, -8}, {5, -4}, {-1, -5} } },
	[22] = { .set = { {-5, 0}, {-3, -8}, {5, -4}, {-2, -4} } },
	[23] = { .set = { {-7, 0}, {-2, -8}, {4, -2}, {-1, -4} } },
	[24] = { .set = { {-1, 0}, {-8, -6}, {6, -6}, {-1, -4} } },
	[25] = { .set = { {1, 1}, {-7, -4}, {5, -6}, {-1, -4} } },
	[26] = { .set = { {-3, 1}, {-7, -6}, {5, -4}, {-1, -4} } },
	[27] = { .set = { {-1, -1}, {-11, -5}, {9, -5}, {-1, -5} } },
	[28] = { .set = { {4, -1}, {2, -8}, {-7, -4}, {-1, -5} } },
	[29] = { .set = { {3, 0}, {1, -8}, {-7, -4}, {0, -4} } },
	[30] = { .set = { {5, 0}, {0, -8}, {-6, -2}, {-1, -4} } },
	[31] = { .set = { {4, -2}, {0, -5}, {-8, 1}, {-1, -5} } },
	[32] = { .set = { {6, -4}, {-4, -8}, {-5, -2}, {-1, -5} } },
	[33] = { .set = { {5, -2}, {-4, -7}, {-6, -1}, {-2, -4} } },
	[34] = { .set = { {6, -4}, {-3, -7}, {-4, -1}, {-1, -4} } },
	[35] = { .set = { {7, -4}, {-1, -8}, {-1, 0}, {-1, -5} } },
	[36] = { .set = { {5, -6}, {-6, -5}, {1, -2}, {-1, -5} } },
	[37] = { .set = { {5, -4}, {-5, -6}, {0, -1}, {-2, -4} } },
	[38] = { .set = { {4, -6}, {-6, -4}, {3, -1}, {-1, -4} } },
	[39] = { .set = { {5, -7}, {-6, -9}, {9, -3}, {-1, -5} } },
	[40] = { .set = { {-1, -10}, {5, -4}, {-7, -4}, {-1, -5} } },
	[41] = { .set = { {-3, -8}, {6, -4}, {-6, -1}, {-1, -3} } },
	[42] = { .set = { {1, -8}, {4, -1}, {-8, -4}, {-1, -3} } },
	[43] = { .set = { {-1, -9}, {10, -4}, {-12, -4}, {-1, -5} } },
	[44] = { .set = { {-7, -6}, {4, -5}, {-3, -2}, {-1, -5} } },
	[45] = { .set = { {-7, -4}, {3, -6}, {-2, -1}, {0, -4} } },
	[46] = { .set = { {-6, -6}, {4, -4}, {-5, -1}, {-1, -4} } },
	[47] = { .set = { {-7, -7}, {4, -9}, {-11, -3}, {-1, -5} } },
	[48] = { .set = { {-8, -4}, {2, -8}, {3, -2}, {-1, -5} } },
	[49] = { .set = { {-7, -2}, {2, -7}, {4, -1}, {0, -4} } },
	[50] = { .set = { {-8, -4}, {1, -7}, {2, -1}, {-1, -4} } },
	[51] = { .set = { {-9, -4}, {-1, -8}, {-1, 0}, {-1, -5} } },
	[52] = { .set = { {-6, -1}, {-4, -8}, {5, -4}, {-1, -5} } },
	[53] = { .set = { {-5, 0}, {-3, -8}, {5, -4}, {-2, -4} } },
	[54] = { .set = { {-7, 0}, {-2, -8}, {4, -2}, {-1, -4} } },
	[55] = { .set = { {-6, -2}, {-2, -5}, {6, 1}, {-1, -5} } },
	[56] = { .set = { {-1, 0}, {-8, -6}, {6, -6}, {-1, -4} } },
	[57] = { .set = { {1, 1}, {-7, -4}, {5, -6}, {-1, -4} } },
	[58] = { .set = { {-3, 1}, {-7, -6}, {5, -4}, {-1, -4} } },
	[59] = { .set = { {-1, 1}, {-8, -5}, {6, -5}, {-1, -4} } },
	[60] = { .set = { {-1, -2}, {-8, -7}, {6, -7}, {-1, -6} } },
	[61] = { .set = { {4, -1}, {2, -8}, {-7, -4}, {-1, -5} } },
	[62] = { .set = { {3, 0}, {1, -8}, {-7, -4}, {0, -4} } },
	[63] = { .set = { {5, 0}, {0, -8}, {-6, -2}, {-1, -4} } },
	[64] = { .set = { {4, 0}, {1, -9}, {-7, -4}, {-1, -5} } },
	[65] = { .set = { {4, -2}, {1, -8}, {-8, -6}, {-1, -5} } },
	[66] = { .set = { {6, -4}, {-4, -8}, {-5, -2}, {-1, -5} } },
	[67] = { .set = { {5, -2}, {-4, -7}, {-6, -1}, {-2, -4} } },
	[68] = { .set = { {6, -4}, {-3, -7}, {-4, -1}, {-1, -4} } },
	[69] = { .set = { {6, -3}, {-4, -8}, {-5, -2}, {-1, -5} } },
	[70] = { .set = { {6, -5}, {-4, -9}, {-4, -1}, {-2, -5} } },
	[71] = { .set = { {5, -6}, {-6, -5}, {1, -2}, {-1, -5} } },
	[72] = { .set = { {5, -4}, {-5, -6}, {0, -1}, {-2, -4} } },
	[73] = { .set = { {4, -6}, {-6, -4}, {3, -1}, {-1, -4} } },
	[74] = { .set = { {5, -5}, {-6, -7}, {2, 0}, {-1, -5} } },
	[75] = { .set = { {5, -7}, {-6, -6}, {1, 0}, {-1, -5} } },
	[76] = { .set = { {-1, -10}, {5, -4}, {-7, -4}, {-1, -5} } },
	[77] = { .set = { {-3, -8}, {6, -4}, {-6, -1}, {-1, -3} } },
	[78] = { .set = { {1, -8}, {4, -1}, {-8, -4}, {-1, -3} } },
	[79] = { .set = { {-1, -10}, {6, -5}, {-7, -5}, {-1, -5} } },
	[80] = { .set = { {-1, -9}, {6, -3}, {-7, -3}, {-1, -4} } },
	[81] = { .set = { {-7, -6}, {4, -5}, {-3, -2}, {-1, -5} } },
	[82] = { .set = { {-7, -4}, {3, -6}, {-2, -1}, {0, -4} } },
	[83] = { .set = { {-6, -6}, {4, -4}, {-5, -1}, {-1, -4} } },
	[84] = { .set = { {-7, -5}, {4, -7}, {-4, 0}, {-1, -5} } },
	[85] = { .set = { {-7, -7}, {4, -6}, {-3, 0}, {-1, -5} } },
	[86] = { .set = { {-8, -4}, {2, -8}, {3, -2}, {-1, -5} } },
	[87] = { .set = { {-7, -2}, {2, -7}, {4, -1}, {0, -4} } },
	[88] = { .set = { {-8, -4}, {1, -7}, {2, -1}, {-1, -4} } },
	[89] = { .set = { {-8, -3}, {2, -8}, {3, -2}, {-1, -5} } },
	[90] = { .set = { {-8, -5}, {2, -9}, {2, -1}, {0, -5} } },
	[91] = { .set = { {-6, -1}, {-4, -8}, {5, -4}, {-1, -5} } },
	[92] = { .set = { {-5, 0}, {-3, -8}, {5, -4}, {-2, -4} } },
	[93] = { .set = { {-7, 0}, {-2, -8}, {4, -2}, {-1, -4} } },
	[94] = { .set = { {-6, 0}, {-3, -9}, {5, -4}, {-1, -5} } },
	[95] = { .set = { {-6, -2}, {-3, -8}, {6, -6}, {-1, -5} } },
	[96] = { .set = { {-1, -1}, {-11, -5}, {9, -5}, {-1, -5} } },
	[97] = { .set = { {-6, -2}, {-2, -5}, {6, 1}, {-1, -5} } },
	[98] = { .set = { {-9, -4}, {-1, -8}, {-1, 0}, {-1, -5} } },
	[99] = { .set = { {-7, -7}, {4, -9}, {-11, -3}, {-1, -5} } },
	[100] = { .set = { {-1, -9}, {10, -4}, {-12, -4}, {-1, -5} } },
	[101] = { .set = { {5, -7}, {-6, -9}, {9, -3}, {-1, -5} } },
	[102] = { .set = { {7, -4}, {-1, -8}, {-1, 0}, {-1, -5} } },
	[103] = { .set = { {4, -2}, {0, -5}, {-8, 1}, {-1, -5} } },
	[104] = { .set = { {-1, 0}, {-8, -6}, {6, -6}, {-1, -4} } },
	[105] = { .set = { {-1, -1}, {-10, -5}, {8, -5}, {-1, -5} } },
	[106] = { .set = { {-1, 0}, {-11, -3}, {9, -3}, {-1, -5} } },
	[107] = { .set = { {4, -1}, {2, -8}, {-7, -4}, {-1, -5} } },
	[108] = { .set = { {4, -2}, {6, -10}, {-8, -5}, {0, -5} } },
	[109] = { .set = { {4, -1}, {7, -2}, {-8, 0}, {-1, -5} } },
	[110] = { .set = { {6, -4}, {-4, -8}, {-5, -2}, {-1, -5} } },
	[111] = { .set = { {6, -5}, {0, -12}, {-1, -3}, {-1, -5} } },
	[112] = { .set = { {6, -4}, {-1, -8}, {-1, 2}, {-1, -4} } },
	[113] = { .set = { {5, -6}, {-6, -5}, {1, -2}, {-1, -5} } },
	[114] = { .set = { {5, -7}, {-8, -7}, {9, -4}, {-1, -4} } },
	[115] = { .set = { {5, -7}, {-7, -5}, {7, 1}, {-1, -5} } },
	[116] = { .set = { {-1, -10}, {5, -4}, {-7, -4}, {-1, -5} } },
	[117] = { .set = { {-1, -10}, {9, -6}, {-11, -6}, {-1, -5} } },
	[118] = { .set = { {-1, -10}, {9, -2}, {-11, -2}, {-1, -5} } },
	[119] = { .set = { {-7, -6}, {4, -5}, {-3, -2}, {-1, -5} } },
	[120] = { .set = { {-7, -7}, {6, -7}, {-11, -4}, {-1, -4} } },
	[121] = { .set = { {-7, -7}, {5, -5}, {-9, 1}, {-1, -5} } },
	[122] = { .set = { {-8, -4}, {2, -8}, {3, -2}, {-1, -5} } },
	[123] = { .set = { {-8, -5}, {-2, -12}, {-1, -3}, {-1, -5} } },
	[124] = { .set = { {-8, -4}, {-1, -8}, {-1, 2}, {-1, -4} } },
	[125] = { .set = { {-6, -1}, {-4, -8}, {5, -4}, {-1, -5} } },
	[126] = { .set = { {-6, -2}, {-8, -10}, {6, -5}, {-2, -5} } },
	[127] = { .set = { {-6, -1}, {-9, -2}, {6, 0}, {-1, -5} } },
	[128] = { .set = { {-1, 0}, {-8, -6}, {6, -6}, {-1, -4} } },
	[129] = { .set = { {-1, 1}, {-8, -5}, {6, -5}, {-1, -4} } },
	[130] = { .set = { {0, -7}, {-8, -4}, {8, -4}, {0, -6} } },
	[131] = { .set = { {5, -9}, {0, -8}, {-6, -2}, {0, -7} } },
	[132] = { .set = { {5, -9}, {-4, -3}, {-5, -1}, {-1, -6} } },
	[133] = { .set = { {4, -11}, {-6, -6}, {5, -1}, {-1, -6} } },
	[134] = { .set = { {0, -11}, {8, -4}, {-8, -4}, {0, -4} } },
	[135] = { .set = { {-5, -11}, {5, -6}, {-6, -1}, {0, -6} } },
	[136] = { .set = { {-6, -9}, {3, -3}, {4, -1}, {0, -6} } },
	[137] = { .set = { {-6, -9}, {-1, -8}, {5, -2}, {-1, -7} } },
	[138] = { .set = { {-1, 0}, {-8, -6}, {6, -6}, {-1, -4} } },
	[139] = { .set = { {-6, -1}, {-4, -8}, {5, -4}, {-1, -5} } },
	[140] = { .set = { {-8, -4}, {2, -8}, {3, -2}, {-1, -5} } },
	[141] = { .set = { {-7, -6}, {4, -5}, {-3, -2}, {-1, -5} } },
	[142] = { .set = { {-1, -10}, {5, -4}, {-7, -4}, {-1, -5} } },
	[143] = { .set = { {5, -6}, {-6, -5}, {1, -2}, {-1, -5} } },
	[144] = { .set = { {6, -4}, {-4, -8}, {-5, -2}, {-1, -5} } },
	[145] = { .set = { {4, -1}, {2, -8}, {-7, -4}, {-1, -5} } },
	[146] = { .set = { {-1, -1}, {-11, -5}, {9, -5}, {-1, -5} } },
	[147] = { .set = { {-6, -2}, {-2, -5}, {6, 1}, {-1, -5} } },
	[148] = { .set = { {-9, -4}, {-1, -8}, {-1, 0}, {-1, -5} } },
	[149] = { .set = { {-7, -7}, {4, -9}, {-11, -3}, {-1, -5} } },
	[150] = { .set = { {-1, -9}, {10, -4}, {-12, -4}, {-1, -5} } },
	[151] = { .set = { {5, -7}, {-6, -9}, {9, -3}, {-1, -5} } },
	[152] = { .set = { {7, -4}, {-1, -8}, {-1, 0}, {-1, -5} } },
	[153] = { .set = { {4, -2}, {0, -5}, {-8, 1}, {-1, -5} } },
	[154] = { .set = { {-1, -1}, {-11, -5}, {9, -5}, {-1, -5} } },
	[155] = { .set = { {4, -2}, {0, -5}, {-8, 1}, {-1, -5} } },
	[156] = { .set = { {7, -4}, {-1, -8}, {-1, 0}, {-1, -5} } },
	[157] = { .set = { {5, -7}, {-6, -9}, {9, -3}, {-1, -5} } },
	[158] = { .set = { {-1, -9}, {10, -4}, {-12, -4}, {-1, -5} } },
	[159] = { .set = { {-7, -7}, {4, -9}, {-11, -3}, {-1, -5} } },
	[160] = { .set = { {-9, -4}, {-1, -8}, {-1, 0}, {-1, -5} } },
	[161] = { .set = { {-6, -2}, {-2, -5}, {6, 1}, {-1, -5} } },
	[162] = { .set = { {-1, 0}, {-8, -6}, {6, -6}, {-1, -4} } },
	[163] = { .set = { {-1, -1}, {-11, -5}, {9, -5}, {-1, -5} } },
	[164] = { .set = { {-1, 0}, {-11, -3}, {9, -3}, {-1, -5} } },
	[165] = { .set = { {4, -1}, {2, -8}, {-7, -4}, {-1, -5} } },
	[166] = { .set = { {4, -2}, {0, -5}, {-8, 1}, {-1, -5} } },
	[167] = { .set = { {4, -1}, {7, -2}, {-8, 0}, {-1, -5} } },
	[168] = { .set = { {6, -4}, {-4, -8}, {-5, -2}, {-1, -5} } },
	[169] = { .set = { {7, -4}, {-1, -8}, {-1, 0}, {-1, -5} } },
	[170] = { .set = { {6, -4}, {-1, -8}, {-1, 2}, {-1, -4} } },
	[171] = { .set = { {5, -6}, {-6, -5}, {1, -2}, {-1, -5} } },
	[172] = { .set = { {5, -7}, {-6, -9}, {9, -3}, {-1, -5} } },
	[173] = { .set = { {5, -7}, {-7, -5}, {7, 1}, {-1, -5} } },
	[174] = { .set = { {-1, -10}, {5, -4}, {-7, -4}, {-1, -5} } },
	[175] = { .set = { {-1, -9}, {10, -4}, {-12, -4}, {-1, -5} } },
	[176] = { .set = { {-1, -10}, {9, -2}, {-11, -2}, {-1, -5} } },
	[177] = { .set = { {-7, -6}, {4, -5}, {-3, -2}, {-1, -5} } },
	[178] = { .set = { {-7, -7}, {4, -9}, {-11, -3}, {-1, -5} } },
	[179] = { .set = { {-7, -7}, {5, -5}, {-9, 1}, {-1, -5} } },
	[180] = { .set = { {-8, -4}, {2, -8}, {3, -2}, {-1, -5} } },
	[181] = { .set = { {-9, -4}, {-1, -8}, {-1, 0}, {-1, -5} } },
	[182] = { .set = { {-8, -4}, {-1, -8}, {-1, 2}, {-1, -4} } },
	[183] = { .set = { {-6, -1}, {-4, -8}, {5, -4}, {-1, -5} } },
	[184] = { .set = { {-6, -2}, {-2, -5}, {6, 1}, {-1, -5} } },
	[185] = { .set = { {-6, -1}, {-9, -2}, {6, 0}, {-1, -5} } },
	[186] = { .set = { {-1, -1}, {-11, -5}, {9, -5}, {-1, -5} } },
	[187] = { .set = { {-6, -2}, {-2, -5}, {6, 1}, {-1, -5} } },
	[188] = { .set = { {-9, -4}, {-1, -8}, {-1, 0}, {-1, -5} } },
	[189] = { .set = { {-7, -7}, {4, -9}, {-11, -3}, {-1, -5} } },
	[190] = { .set = { {-1, -9}, {10, -4}, {-12, -4}, {-1, -5} } },
	[191] = { .set = { {5, -7}, {-6, -9}, {9, -3}, {-1, -5} } },
	[192] = { .set = { {7, -4}, {-1, -8}, {-1, 0}, {-1, -5} } },
	[193] = { .set = { {4, -2}, {0, -5}, {-8, 1}, {-1, -5} } },
	[194] = { .set = { {-1, 0}, {-8, -6}, {6, -6}, {-1, -4} } },
	[195] = { .set = { {-6, -1}, {-4, -8}, {5, -4}, {-1, -5} } },
	[196] = { .set = { {-8, -4}, {2, -8}, {3, -2}, {-1, -5} } },
	[197] = { .set = { {-7, -6}, {4, -5}, {-3, -2}, {-1, -5} } },
	[198] = { .set = { {-1, -10}, {5, -4}, {-7, -4}, {-1, -5} } },
	[199] = { .set = { {5, -6}, {-6, -5}, {1, -2}, {-1, -5} } },
	[200] = { .set = { {6, -4}, {-4, -8}, {-5, -2}, {-1, -5} } },
	[201] = { .set = { {4, -1}, {2, -8}, {-7, -4}, {-1, -5} } },
};

static const ax_anim *const sNatuAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sNatuAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_01563),
	AX_ANIM_PTR(sNatuAnims_2_2),
	AX_ANIM_PTR(gAxSharedAnim_01830),
	AX_ANIM_PTR(sNatuAnims_2_4),
	AX_ANIM_PTR(sNatuAnims_2_5),
	AX_ANIM_PTR(sNatuAnims_2_6),
	AX_ANIM_PTR(gAxSharedAnim_01971),
	AX_ANIM_PTR(sNatuAnims_2_8),
};

static const ax_anim *const sNatuAnimTable3[] = {
	AX_ANIM_PTR(sNatuAnims_3_1),
	AX_ANIM_PTR(sNatuAnims_3_2),
	AX_ANIM_PTR(sNatuAnims_3_3),
	AX_ANIM_PTR(sNatuAnims_3_4),
	AX_ANIM_PTR(sNatuAnims_3_5),
	AX_ANIM_PTR(sNatuAnims_3_6),
	AX_ANIM_PTR(sNatuAnims_3_7),
	AX_ANIM_PTR(sNatuAnims_3_8),
};

static const ax_anim *const sNatuAnimTable4[] = {
	AX_ANIM_PTR(sNatuAnims_4_1),
	AX_ANIM_PTR(sNatuAnims_4_2),
	AX_ANIM_PTR(sNatuAnims_4_3),
	AX_ANIM_PTR(sNatuAnims_4_4),
	AX_ANIM_PTR(sNatuAnims_4_5),
	AX_ANIM_PTR(sNatuAnims_4_6),
	AX_ANIM_PTR(sNatuAnims_4_7),
	AX_ANIM_PTR(sNatuAnims_4_8),
};

static const ax_anim *const sNatuAnimTable5[] = {
	AX_ANIM_PTR(sNatuAnims_5_1),
	AX_ANIM_PTR(sNatuAnims_5_2),
	AX_ANIM_PTR(sNatuAnims_5_3),
	AX_ANIM_PTR(sNatuAnims_5_4),
	AX_ANIM_PTR(sNatuAnims_5_5),
	AX_ANIM_PTR(sNatuAnims_5_6),
	AX_ANIM_PTR(sNatuAnims_5_7),
	AX_ANIM_PTR(sNatuAnims_5_8),
};

static const ax_anim *const sNatuAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
};

static const ax_anim *const sNatuAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00398),
	AX_ANIM_PTR(gAxSharedAnim_00404),
	AX_ANIM_PTR(gAxSharedAnim_00415),
	AX_ANIM_PTR(gAxSharedAnim_00424),
	AX_ANIM_PTR(gAxSharedAnim_00436),
	AX_ANIM_PTR(gAxSharedAnim_00444),
	AX_ANIM_PTR(gAxSharedAnim_00454),
	AX_ANIM_PTR(gAxSharedAnim_00464),
};

static const ax_anim *const sNatuAnimTable8[] = {
	AX_ANIM_PTR(sNatuAnims_8_1),
	AX_ANIM_PTR(sNatuAnims_8_2),
	AX_ANIM_PTR(sNatuAnims_8_3),
	AX_ANIM_PTR(sNatuAnims_8_4),
	AX_ANIM_PTR(sNatuAnims_8_5),
	AX_ANIM_PTR(sNatuAnims_8_6),
	AX_ANIM_PTR(sNatuAnims_8_7),
	AX_ANIM_PTR(sNatuAnims_8_8),
};

static const ax_anim *const sNatuAnimTable9[] = {
	AX_ANIM_PTR(sNatuAnims_9_1),
	AX_ANIM_PTR(sNatuAnims_9_2),
	AX_ANIM_PTR(sNatuAnims_9_3),
	AX_ANIM_PTR(sNatuAnims_9_4),
	AX_ANIM_PTR(sNatuAnims_9_5),
	AX_ANIM_PTR(sNatuAnims_9_6),
	AX_ANIM_PTR(sNatuAnims_9_7),
	AX_ANIM_PTR(sNatuAnims_9_8),
};

static const ax_anim *const sNatuAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00612),
	AX_ANIM_PTR(gAxSharedAnim_00622),
	AX_ANIM_PTR(gAxSharedAnim_00632),
	AX_ANIM_PTR(gAxSharedAnim_00642),
	AX_ANIM_PTR(gAxSharedAnim_00651),
	AX_ANIM_PTR(gAxSharedAnim_00660),
	AX_ANIM_PTR(gAxSharedAnim_00675),
	AX_ANIM_PTR(gAxSharedAnim_00686),
};

static const ax_anim *const sNatuAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_00697),
	AX_ANIM_PTR(gAxSharedAnim_00736),
	AX_ANIM_PTR(gAxSharedAnim_00768),
	AX_ANIM_PTR(gAxSharedAnim_00812),
	AX_ANIM_PTR(gAxSharedAnim_00847),
	AX_ANIM_PTR(gAxSharedAnim_00887),
	AX_ANIM_PTR(gAxSharedAnim_00929),
	AX_ANIM_PTR(gAxSharedAnim_00963),
};

static const ax_anim *const sNatuAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01018),
	AX_ANIM_PTR(gAxSharedAnim_01128),
	AX_ANIM_PTR(gAxSharedAnim_01099),
	AX_ANIM_PTR(gAxSharedAnim_01085),
	AX_ANIM_PTR(gAxSharedAnim_01084),
	AX_ANIM_PTR(gAxSharedAnim_01065),
	AX_ANIM_PTR(gAxSharedAnim_01034),
	AX_ANIM_PTR(gAxSharedAnim_01019),
};

static const ax_anim *const sNatuAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01145),
	AX_ANIM_PTR(gAxSharedAnim_01227),
	AX_ANIM_PTR(gAxSharedAnim_01218),
	AX_ANIM_PTR(gAxSharedAnim_01201),
	AX_ANIM_PTR(gAxSharedAnim_01190),
	AX_ANIM_PTR(gAxSharedAnim_01179),
	AX_ANIM_PTR(gAxSharedAnim_01168),
	AX_ANIM_PTR(gAxSharedAnim_01157),
};

static const ax_anim *const *const sAxAnimationsNatu[] = {
	sNatuAnimTable1,
	sNatuAnimTable2,
	sNatuAnimTable3,
	sNatuAnimTable4,
	sNatuAnimTable5,
	sNatuAnimTable6,
	sNatuAnimTable7,
	sNatuAnimTable8,
	sNatuAnimTable9,
	sNatuAnimTable10,
	sNatuAnimTable11,
	sNatuAnimTable12,
	sNatuAnimTable13,
};

static const ax_sprite *const sAxSpritesNatu[] = {
	sNatuSprites1,
	sNatuSprites2,
	sNatuSprites3,
	sNatuSprites4,
	sNatuSprites5,
	sNatuSprites6,
	sNatuSprites7,
	sNatuSprites8,
	sNatuSprites9,
	sNatuSprites10,
	sNatuSprites11,
	sNatuSprites12,
	sNatuSprites13,
	sNatuSprites14,
	sNatuSprites15,
	sNatuSprites16,
	sNatuSprites17,
	sNatuSprites18,
	sNatuSprites19,
	sNatuSprites20,
	sNatuSprites21,
	sNatuSprites22,
	sNatuSprites23,
	sNatuSprites24,
	sNatuSprites25,
	sNatuSprites26,
	sNatuSprites27,
	sNatuSprites28,
	sNatuSprites29,
	sNatuSprites30,
	sNatuSprites31,
	sNatuSprites32,
	sNatuSprites33,
	sNatuSprites34,
	sNatuSprites35,
	sNatuSprites36,
	sNatuSprites37,
	sNatuSprites38,
	sNatuSprites39,
	sNatuSprites40,
	sNatuSprites41,
	sNatuSprites42,
	sNatuSprites43,
	sNatuSprites44,
	sNatuSprites45,
	sNatuSprites46,
	sNatuSprites47,
};

static const axmain sAxMainNatu = {
	.poses = sAxPosesNatu,
	.animations = sAxAnimationsNatu,
	.animCount = ARRAY_COUNT(sAxAnimationsNatu),
	.spriteData = sAxSpritesNatu,
	.positions = sAxPositionsNatu,
};
