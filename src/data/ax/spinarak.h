/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainSpinarak;
const SiroArchive gAxSpinarak = {"SIRO", &sAxMainSpinarak};

static const ax_pose sSpinarakPose1[] = {
	AX_POSE(0, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose2[] = {
	AX_POSE(1, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose3[] = {
	AX_POSE(2, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose4[] = {
	AX_POSE(3, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose5[] = {
	AX_POSE(4, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose6[] = {
	AX_POSE(5, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose7[] = {
	AX_POSE(6, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose8[] = {
	AX_POSE(7, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose9[] = {
	AX_POSE(8, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose10[] = {
	AX_POSE(9, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose11[] = {
	AX_POSE(10, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose12[] = {
	AX_POSE(11, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose13[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose14[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose15[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose16[] = {
	AX_POSE(9, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose17[] = {
	AX_POSE(10, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose18[] = {
	AX_POSE(11, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose19[] = {
	AX_POSE(6, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose20[] = {
	AX_POSE(7, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose21[] = {
	AX_POSE(8, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose22[] = {
	AX_POSE(3, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose23[] = {
	AX_POSE(4, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose24[] = {
	AX_POSE(5, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose28[] = {
	AX_POSE(15, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose32[] = {
	AX_POSE(16, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose36[] = {
	AX_POSE(17, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose40[] = {
	AX_POSE(18, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose44[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose48[] = {
	AX_POSE(18, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose52[] = {
	AX_POSE(17, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose56[] = {
	AX_POSE(16, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose90[] = {
	AX_POSE(20, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose91[] = {
	AX_POSE(21, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose93[] = {
	AX_POSE(22, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose94[] = {
	AX_POSE(23, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose96[] = {
	AX_POSE(24, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose97[] = {
	AX_POSE(25, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose99[] = {
	AX_POSE(26, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose100[] = {
	AX_POSE(27, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose102[] = {
	AX_POSE(28, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose103[] = {
	AX_POSE(29, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose105[] = {
	AX_POSE(26, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose106[] = {
	AX_POSE(27, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose108[] = {
	AX_POSE(24, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose109[] = {
	AX_POSE(25, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose111[] = {
	AX_POSE(22, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose112[] = {
	AX_POSE(23, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose121[] = {
	AX_POSE(30, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose122[] = {
	AX_POSE(31, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose123[] = {
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose124[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose125[] = {
	AX_POSE(34, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose126[] = {
	AX_POSE(35, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose127[] = {
	AX_POSE(36, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose128[] = {
	AX_POSE(35, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose129[] = {
	AX_POSE(34, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose130[] = {
	AX_POSE(33, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose132[] = {
	AX_POSE(37, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose134[] = {
	AX_POSE(38, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose136[] = {
	AX_POSE(39, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose138[] = {
	AX_POSE(40, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose140[] = {
	AX_POSE(41, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose142[] = {
	AX_POSE(40, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose144[] = {
	AX_POSE(39, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose146[] = {
	AX_POSE(38, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose150[] = {
	AX_POSE(27, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose152[] = {
	AX_POSE(27, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSpinarakPose159[] = {
	AX_POSE(29, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const u8 sSpinarakAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_1_1.lz");
static const u8 sSpinarakAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_1_2.lz");
static const u8 sSpinarakAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_1_3.lz");
static const u8 sSpinarakAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_1_4.lz");
static const u8 sSpinarakAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_1_5.lz");
static const u8 sSpinarakAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_1_6.lz");
static const u8 sSpinarakAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_1_7.lz");
static const u8 sSpinarakAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_1_8.lz");
static const u8 sSpinarakAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_2_1.lz");
static const u8 sSpinarakAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_2_2.lz");
static const u8 sSpinarakAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_2_3.lz");
static const u8 sSpinarakAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_2_4.lz");
static const u8 sSpinarakAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_2_5.lz");
static const u8 sSpinarakAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_2_6.lz");
static const u8 sSpinarakAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_2_7.lz");
static const u8 sSpinarakAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_2_8.lz");
static const u8 sSpinarakAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_3_1.lz");
static const u8 sSpinarakAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_3_2.lz");
static const u8 sSpinarakAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_3_3.lz");
static const u8 sSpinarakAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_3_4.lz");
static const u8 sSpinarakAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_3_5.lz");
static const u8 sSpinarakAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_3_6.lz");
static const u8 sSpinarakAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_3_7.lz");
static const u8 sSpinarakAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_3_8.lz");
static const u8 sSpinarakAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_4_1.lz");
static const u8 sSpinarakAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_4_2.lz");
static const u8 sSpinarakAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_4_3.lz");
static const u8 sSpinarakAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_4_4.lz");
static const u8 sSpinarakAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_4_5.lz");
static const u8 sSpinarakAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_4_6.lz");
static const u8 sSpinarakAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_4_7.lz");
static const u8 sSpinarakAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_4_8.lz");
static const u8 sSpinarakAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_8_1.lz");
static const u8 sSpinarakAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_8_2.lz");
static const u8 sSpinarakAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_8_3.lz");
static const u8 sSpinarakAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_8_4.lz");
static const u8 sSpinarakAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_8_5.lz");
static const u8 sSpinarakAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_8_6.lz");
static const u8 sSpinarakAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_8_7.lz");
static const u8 sSpinarakAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_8_8.lz");
static const u8 sSpinarakAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_9_2.lz");
static const u8 sSpinarakAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_9_3.lz");
static const u8 sSpinarakAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_9_4.lz");
static const u8 sSpinarakAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_9_5.lz");
static const u8 sSpinarakAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_9_6.lz");
static const u8 sSpinarakAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_9_7.lz");
static const u8 sSpinarakAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/spinarak/sSpinarakAnims_9_8.lz");

static const u8 sSpinarakGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_1.4bpp.lz");
static const ax_sprite sSpinarakSprites1[] = {
	{sSpinarakGfx1, ARRAY_COUNT(sSpinarakGfx1)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_2.4bpp.lz");
static const ax_sprite sSpinarakSprites2[] = {
	{sSpinarakGfx2, ARRAY_COUNT(sSpinarakGfx2)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_3.4bpp.lz");
static const ax_sprite sSpinarakSprites3[] = {
	{sSpinarakGfx3, ARRAY_COUNT(sSpinarakGfx3)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_4.4bpp.lz");
static const ax_sprite sSpinarakSprites4[] = {
	{sSpinarakGfx4, ARRAY_COUNT(sSpinarakGfx4)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_5.4bpp.lz");
static const ax_sprite sSpinarakSprites5[] = {
	{sSpinarakGfx5, ARRAY_COUNT(sSpinarakGfx5)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_6.4bpp.lz");
static const ax_sprite sSpinarakSprites6[] = {
	{sSpinarakGfx6, ARRAY_COUNT(sSpinarakGfx6)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_7.4bpp.lz");
static const ax_sprite sSpinarakSprites7[] = {
	{sSpinarakGfx7, ARRAY_COUNT(sSpinarakGfx7)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_8.4bpp.lz");
static const ax_sprite sSpinarakSprites8[] = {
	{sSpinarakGfx8, ARRAY_COUNT(sSpinarakGfx8)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_9.4bpp.lz");
static const ax_sprite sSpinarakSprites9[] = {
	{sSpinarakGfx9, ARRAY_COUNT(sSpinarakGfx9)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_10.4bpp.lz");
static const ax_sprite sSpinarakSprites10[] = {
	{sSpinarakGfx10, ARRAY_COUNT(sSpinarakGfx10)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_11.4bpp.lz");
static const ax_sprite sSpinarakSprites11[] = {
	{sSpinarakGfx11, ARRAY_COUNT(sSpinarakGfx11)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_12.4bpp.lz");
static const ax_sprite sSpinarakSprites12[] = {
	{sSpinarakGfx12, ARRAY_COUNT(sSpinarakGfx12)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_13.4bpp.lz");
static const ax_sprite sSpinarakSprites13[] = {
	{sSpinarakGfx13, ARRAY_COUNT(sSpinarakGfx13)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_14.4bpp.lz");
static const ax_sprite sSpinarakSprites14[] = {
	{sSpinarakGfx14, ARRAY_COUNT(sSpinarakGfx14)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_15.4bpp.lz");
static const ax_sprite sSpinarakSprites15[] = {
	{sSpinarakGfx15, ARRAY_COUNT(sSpinarakGfx15)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_16.4bpp.lz");
static const u8 sSpinarakGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_16_1.4bpp.lz");
static const u8 sSpinarakGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_16_2.4bpp.lz");
static const ax_sprite sSpinarakSprites16[] = {
	{sSpinarakGfx16, ARRAY_COUNT(sSpinarakGfx16)}, 
	{NULL, 32}, 
	{sSpinarakGfx16_1, ARRAY_COUNT(sSpinarakGfx16_1)}, 
	{NULL, 32}, 
	{sSpinarakGfx16_2, ARRAY_COUNT(sSpinarakGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_17.4bpp.lz");
static const u8 sSpinarakGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_17_1.4bpp.lz");
static const u8 sSpinarakGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_17_2.4bpp.lz");
static const ax_sprite sSpinarakSprites17[] = {
	{sSpinarakGfx17, ARRAY_COUNT(sSpinarakGfx17)}, 
	{NULL, 32}, 
	{sSpinarakGfx17_1, ARRAY_COUNT(sSpinarakGfx17_1)}, 
	{NULL, 32}, 
	{sSpinarakGfx17_2, ARRAY_COUNT(sSpinarakGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_18.4bpp.lz");
static const u8 sSpinarakGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_18_1.4bpp.lz");
static const u8 sSpinarakGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_18_2.4bpp.lz");
static const ax_sprite sSpinarakSprites18[] = {
	{sSpinarakGfx18, ARRAY_COUNT(sSpinarakGfx18)}, 
	{NULL, 32}, 
	{sSpinarakGfx18_1, ARRAY_COUNT(sSpinarakGfx18_1)}, 
	{NULL, 32}, 
	{sSpinarakGfx18_2, ARRAY_COUNT(sSpinarakGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_19.4bpp.lz");
static const u8 sSpinarakGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_19_1.4bpp.lz");
static const u8 sSpinarakGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_19_2.4bpp.lz");
static const ax_sprite sSpinarakSprites19[] = {
	{sSpinarakGfx19, ARRAY_COUNT(sSpinarakGfx19)}, 
	{NULL, 32}, 
	{sSpinarakGfx19_1, ARRAY_COUNT(sSpinarakGfx19_1)}, 
	{NULL, 32}, 
	{sSpinarakGfx19_2, ARRAY_COUNT(sSpinarakGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_20.4bpp.lz");
static const u8 sSpinarakGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_20_1.4bpp.lz");
static const u8 sSpinarakGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_20_2.4bpp.lz");
static const ax_sprite sSpinarakSprites20[] = {
	{NULL, 32}, 
	{sSpinarakGfx20, ARRAY_COUNT(sSpinarakGfx20)}, 
	{NULL, 64}, 
	{sSpinarakGfx20_1, ARRAY_COUNT(sSpinarakGfx20_1)}, 
	{NULL, 32}, 
	{sSpinarakGfx20_2, ARRAY_COUNT(sSpinarakGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_21.4bpp.lz");
static const u8 sSpinarakGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_21_1.4bpp.lz");
static const ax_sprite sSpinarakSprites21[] = {
	{sSpinarakGfx21, ARRAY_COUNT(sSpinarakGfx21)}, 
	{NULL, 32}, 
	{sSpinarakGfx21_1, ARRAY_COUNT(sSpinarakGfx21_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_22.4bpp.lz");
static const u8 sSpinarakGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_22_1.4bpp.lz");
static const u8 sSpinarakGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_22_2.4bpp.lz");
static const ax_sprite sSpinarakSprites22[] = {
	{sSpinarakGfx22, ARRAY_COUNT(sSpinarakGfx22)}, 
	{NULL, 32}, 
	{sSpinarakGfx22_1, ARRAY_COUNT(sSpinarakGfx22_1)}, 
	{NULL, 32}, 
	{sSpinarakGfx22_2, ARRAY_COUNT(sSpinarakGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_23.4bpp.lz");
static const u8 sSpinarakGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_23_1.4bpp.lz");
static const u8 sSpinarakGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_23_2.4bpp.lz");
static const ax_sprite sSpinarakSprites23[] = {
	{sSpinarakGfx23, ARRAY_COUNT(sSpinarakGfx23)}, 
	{NULL, 32}, 
	{sSpinarakGfx23_1, ARRAY_COUNT(sSpinarakGfx23_1)}, 
	{NULL, 96}, 
	{sSpinarakGfx23_2, ARRAY_COUNT(sSpinarakGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_24.4bpp.lz");
static const u8 sSpinarakGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_24_1.4bpp.lz");
static const u8 sSpinarakGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_24_2.4bpp.lz");
static const ax_sprite sSpinarakSprites24[] = {
	{sSpinarakGfx24, ARRAY_COUNT(sSpinarakGfx24)}, 
	{NULL, 32}, 
	{sSpinarakGfx24_1, ARRAY_COUNT(sSpinarakGfx24_1)}, 
	{NULL, 32}, 
	{sSpinarakGfx24_2, ARRAY_COUNT(sSpinarakGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_25.4bpp.lz");
static const u8 sSpinarakGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_25_1.4bpp.lz");
static const u8 sSpinarakGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_25_2.4bpp.lz");
static const ax_sprite sSpinarakSprites25[] = {
	{sSpinarakGfx25, ARRAY_COUNT(sSpinarakGfx25)}, 
	{NULL, 32}, 
	{sSpinarakGfx25_1, ARRAY_COUNT(sSpinarakGfx25_1)}, 
	{NULL, 64}, 
	{sSpinarakGfx25_2, ARRAY_COUNT(sSpinarakGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_26.4bpp.lz");
static const u8 sSpinarakGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_26_1.4bpp.lz");
static const u8 sSpinarakGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_26_2.4bpp.lz");
static const ax_sprite sSpinarakSprites26[] = {
	{sSpinarakGfx26, ARRAY_COUNT(sSpinarakGfx26)}, 
	{NULL, 32}, 
	{sSpinarakGfx26_1, ARRAY_COUNT(sSpinarakGfx26_1)}, 
	{NULL, 32}, 
	{sSpinarakGfx26_2, ARRAY_COUNT(sSpinarakGfx26_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_27.4bpp.lz");
static const u8 sSpinarakGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_27_1.4bpp.lz");
static const u8 sSpinarakGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_27_2.4bpp.lz");
static const ax_sprite sSpinarakSprites27[] = {
	{sSpinarakGfx27, ARRAY_COUNT(sSpinarakGfx27)}, 
	{NULL, 32}, 
	{sSpinarakGfx27_1, ARRAY_COUNT(sSpinarakGfx27_1)}, 
	{NULL, 32}, 
	{sSpinarakGfx27_2, ARRAY_COUNT(sSpinarakGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_28.4bpp.lz");
static const u8 sSpinarakGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_28_1.4bpp.lz");
static const u8 sSpinarakGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_28_2.4bpp.lz");
static const ax_sprite sSpinarakSprites28[] = {
	{sSpinarakGfx28, ARRAY_COUNT(sSpinarakGfx28)}, 
	{NULL, 32}, 
	{sSpinarakGfx28_1, ARRAY_COUNT(sSpinarakGfx28_1)}, 
	{NULL, 32}, 
	{sSpinarakGfx28_2, ARRAY_COUNT(sSpinarakGfx28_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_29.4bpp.lz");
static const u8 sSpinarakGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_29_1.4bpp.lz");
static const u8 sSpinarakGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_29_2.4bpp.lz");
static const ax_sprite sSpinarakSprites29[] = {
	{sSpinarakGfx29, ARRAY_COUNT(sSpinarakGfx29)}, 
	{NULL, 32}, 
	{sSpinarakGfx29_1, ARRAY_COUNT(sSpinarakGfx29_1)}, 
	{NULL, 32}, 
	{sSpinarakGfx29_2, ARRAY_COUNT(sSpinarakGfx29_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_30.4bpp.lz");
static const u8 sSpinarakGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_30_1.4bpp.lz");
static const u8 sSpinarakGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_30_2.4bpp.lz");
static const ax_sprite sSpinarakSprites30[] = {
	{NULL, 32}, 
	{sSpinarakGfx30, ARRAY_COUNT(sSpinarakGfx30)}, 
	{NULL, 64}, 
	{sSpinarakGfx30_1, ARRAY_COUNT(sSpinarakGfx30_1)}, 
	{NULL, 32}, 
	{sSpinarakGfx30_2, ARRAY_COUNT(sSpinarakGfx30_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_31.4bpp.lz");
static const ax_sprite sSpinarakSprites31[] = {
	{sSpinarakGfx31, ARRAY_COUNT(sSpinarakGfx31)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_32.4bpp.lz");
static const ax_sprite sSpinarakSprites32[] = {
	{sSpinarakGfx32, ARRAY_COUNT(sSpinarakGfx32)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_33.4bpp.lz");
static const ax_sprite sSpinarakSprites33[] = {
	{sSpinarakGfx33, ARRAY_COUNT(sSpinarakGfx33)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_34.4bpp.lz");
static const ax_sprite sSpinarakSprites34[] = {
	{sSpinarakGfx34, ARRAY_COUNT(sSpinarakGfx34)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_35.4bpp.lz");
static const ax_sprite sSpinarakSprites35[] = {
	{sSpinarakGfx35, ARRAY_COUNT(sSpinarakGfx35)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_36.4bpp.lz");
static const ax_sprite sSpinarakSprites36[] = {
	{sSpinarakGfx36, ARRAY_COUNT(sSpinarakGfx36)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_37.4bpp.lz");
static const ax_sprite sSpinarakSprites37[] = {
	{sSpinarakGfx37, ARRAY_COUNT(sSpinarakGfx37)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_38.4bpp.lz");
static const ax_sprite sSpinarakSprites38[] = {
	{sSpinarakGfx38, ARRAY_COUNT(sSpinarakGfx38)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_39.4bpp.lz");
static const ax_sprite sSpinarakSprites39[] = {
	{sSpinarakGfx39, ARRAY_COUNT(sSpinarakGfx39)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_40.4bpp.lz");
static const ax_sprite sSpinarakSprites40[] = {
	{sSpinarakGfx40, ARRAY_COUNT(sSpinarakGfx40)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_41.4bpp.lz");
static const ax_sprite sSpinarakSprites41[] = {
	{sSpinarakGfx41, ARRAY_COUNT(sSpinarakGfx41)}, 
	{NULL, 0}
};
static const u8 sSpinarakGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/spinarak/sprite_42.4bpp.lz");
static const ax_sprite sSpinarakSprites42[] = {
	{sSpinarakGfx42, ARRAY_COUNT(sSpinarakGfx42)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesSpinarak[] = {
	sSpinarakPose1,
	sSpinarakPose2,
	sSpinarakPose3,
	sSpinarakPose4,
	sSpinarakPose5,
	sSpinarakPose6,
	sSpinarakPose7,
	sSpinarakPose8,
	sSpinarakPose9,
	sSpinarakPose10,
	sSpinarakPose11,
	sSpinarakPose12,
	sSpinarakPose13,
	sSpinarakPose14,
	sSpinarakPose15,
	sSpinarakPose16,
	sSpinarakPose17,
	sSpinarakPose18,
	sSpinarakPose19,
	sSpinarakPose20,
	sSpinarakPose21,
	sSpinarakPose22,
	sSpinarakPose23,
	sSpinarakPose24,
	sSpinarakPose1,
	sSpinarakPose2,
	sSpinarakPose3,
	sSpinarakPose28,
	sSpinarakPose4,
	sSpinarakPose5,
	sSpinarakPose6,
	sSpinarakPose32,
	sSpinarakPose7,
	sSpinarakPose8,
	sSpinarakPose9,
	sSpinarakPose36,
	sSpinarakPose10,
	sSpinarakPose11,
	sSpinarakPose12,
	sSpinarakPose40,
	sSpinarakPose13,
	sSpinarakPose14,
	sSpinarakPose15,
	sSpinarakPose44,
	sSpinarakPose16,
	sSpinarakPose17,
	sSpinarakPose18,
	sSpinarakPose48,
	sSpinarakPose19,
	sSpinarakPose20,
	sSpinarakPose21,
	sSpinarakPose52,
	sSpinarakPose22,
	sSpinarakPose23,
	sSpinarakPose24,
	sSpinarakPose56,
	sSpinarakPose1,
	sSpinarakPose2,
	sSpinarakPose3,
	sSpinarakPose28,
	sSpinarakPose4,
	sSpinarakPose5,
	sSpinarakPose6,
	sSpinarakPose32,
	sSpinarakPose7,
	sSpinarakPose8,
	sSpinarakPose9,
	sSpinarakPose36,
	sSpinarakPose10,
	sSpinarakPose11,
	sSpinarakPose12,
	sSpinarakPose40,
	sSpinarakPose13,
	sSpinarakPose14,
	sSpinarakPose15,
	sSpinarakPose44,
	sSpinarakPose16,
	sSpinarakPose17,
	sSpinarakPose18,
	sSpinarakPose48,
	sSpinarakPose19,
	sSpinarakPose20,
	sSpinarakPose21,
	sSpinarakPose52,
	sSpinarakPose22,
	sSpinarakPose23,
	sSpinarakPose24,
	sSpinarakPose56,
	sSpinarakPose1,
	sSpinarakPose90,
	sSpinarakPose91,
	sSpinarakPose4,
	sSpinarakPose93,
	sSpinarakPose94,
	sSpinarakPose7,
	sSpinarakPose96,
	sSpinarakPose97,
	sSpinarakPose10,
	sSpinarakPose99,
	sSpinarakPose100,
	sSpinarakPose13,
	sSpinarakPose102,
	sSpinarakPose103,
	sSpinarakPose16,
	sSpinarakPose105,
	sSpinarakPose106,
	sSpinarakPose19,
	sSpinarakPose108,
	sSpinarakPose109,
	sSpinarakPose22,
	sSpinarakPose111,
	sSpinarakPose112,
	sSpinarakPose1,
	sSpinarakPose22,
	sSpinarakPose19,
	sSpinarakPose16,
	sSpinarakPose13,
	sSpinarakPose10,
	sSpinarakPose7,
	sSpinarakPose4,
	sSpinarakPose121,
	sSpinarakPose122,
	sSpinarakPose123,
	sSpinarakPose124,
	sSpinarakPose125,
	sSpinarakPose126,
	sSpinarakPose127,
	sSpinarakPose128,
	sSpinarakPose129,
	sSpinarakPose130,
	sSpinarakPose1,
	sSpinarakPose132,
	sSpinarakPose4,
	sSpinarakPose134,
	sSpinarakPose7,
	sSpinarakPose136,
	sSpinarakPose10,
	sSpinarakPose138,
	sSpinarakPose13,
	sSpinarakPose140,
	sSpinarakPose16,
	sSpinarakPose142,
	sSpinarakPose19,
	sSpinarakPose144,
	sSpinarakPose22,
	sSpinarakPose146,
	sSpinarakPose91,
	sSpinarakPose112,
	sSpinarakPose109,
	sSpinarakPose150,
	sSpinarakPose103,
	sSpinarakPose152,
	sSpinarakPose97,
	sSpinarakPose94,
	sSpinarakPose91,
	sSpinarakPose94,
	sSpinarakPose97,
	sSpinarakPose152,
	sSpinarakPose159,
	sSpinarakPose150,
	sSpinarakPose109,
	sSpinarakPose112,
	sSpinarakPose1,
	sSpinarakPose90,
	sSpinarakPose91,
	sSpinarakPose4,
	sSpinarakPose93,
	sSpinarakPose94,
	sSpinarakPose7,
	sSpinarakPose96,
	sSpinarakPose97,
	sSpinarakPose10,
	sSpinarakPose99,
	sSpinarakPose100,
	sSpinarakPose13,
	sSpinarakPose102,
	sSpinarakPose103,
	sSpinarakPose16,
	sSpinarakPose105,
	sSpinarakPose106,
	sSpinarakPose19,
	sSpinarakPose108,
	sSpinarakPose109,
	sSpinarakPose22,
	sSpinarakPose111,
	sSpinarakPose112,
	sSpinarakPose91,
	sSpinarakPose112,
	sSpinarakPose109,
	sSpinarakPose150,
	sSpinarakPose159,
	sSpinarakPose152,
	sSpinarakPose97,
	sSpinarakPose94,
	sSpinarakPose1,
	sSpinarakPose22,
	sSpinarakPose19,
	sSpinarakPose16,
	sSpinarakPose13,
	sSpinarakPose10,
	sSpinarakPose7,
	sSpinarakPose4,
};

static const struct PositionSets sAxPositionsSpinarak[] = {
	[0] = { .set = { {0, 2}, {-8, 2}, {8, 2}, {0, -6} } },
	[1] = { .set = { {0, 3}, {-7, 1}, {8, 4}, {0, -6} } },
	[2] = { .set = { {0, 1}, {-8, 3}, {7, 1}, {0, -5} } },
	[3] = { .set = { {6, 0}, {9, -5}, {0, 3}, {0, -6} } },
	[4] = { .set = { {6, 1}, {8, -7}, {-2, 2}, {0, -6} } },
	[5] = { .set = { {7, 0}, {11, -1}, {-1, 0}, {0, -6} } },
	[6] = { .set = { {8, -5}, {6, -8}, {7, 1}, {-1, -7} } },
	[7] = { .set = { {8, -3}, {7, -9}, {5, 1}, {-1, -7} } },
	[8] = { .set = { {9, -6}, {4, -7}, {5, -1}, {0, -7} } },
	[9] = { .set = { {5, -9}, {-1, -7}, {9, -2}, {-2, -5} } },
	[10] = { .set = { {4, -8}, {-2, -9}, {9, -1}, {-1, -6} } },
	[11] = { .set = { {5, -10}, {-3, -7}, {7, -2}, {-1, -6} } },
	[12] = { .set = { {0, -9}, {7, -10}, {-7, -10}, {0, -6} } },
	[13] = { .set = { {0, -7}, {6, -9}, {-6, -12}, {0, -6} } },
	[14] = { .set = { {0, -9}, {6, -10}, {-6, -7}, {0, -6} } },
	[15] = { .set = { {-5, -9}, {1, -7}, {-9, -2}, {2, -5} } },
	[16] = { .set = { {-4, -8}, {2, -9}, {-9, -1}, {1, -6} } },
	[17] = { .set = { {-5, -10}, {3, -7}, {-7, -2}, {1, -6} } },
	[18] = { .set = { {-8, -5}, {-6, -8}, {-7, 1}, {1, -7} } },
	[19] = { .set = { {-8, -3}, {-7, -9}, {-5, 1}, {1, -7} } },
	[20] = { .set = { {-9, -6}, {-4, -7}, {-5, -1}, {0, -7} } },
	[21] = { .set = { {-6, 0}, {-9, -5}, {0, 3}, {0, -6} } },
	[22] = { .set = { {-6, 1}, {-8, -7}, {2, 2}, {0, -6} } },
	[23] = { .set = { {-7, 0}, {-11, -1}, {1, 0}, {0, -6} } },
	[24] = { .set = { {0, 2}, {-8, 2}, {8, 2}, {0, -6} } },
	[25] = { .set = { {0, 3}, {-7, 1}, {8, 4}, {0, -6} } },
	[26] = { .set = { {0, 1}, {-8, 3}, {7, 1}, {0, -5} } },
	[27] = { .set = { {0, 3}, {-8, 2}, {8, 2}, {0, -4} } },
	[28] = { .set = { {6, 0}, {9, -5}, {0, 3}, {0, -6} } },
	[29] = { .set = { {6, 1}, {8, -7}, {-2, 2}, {0, -6} } },
	[30] = { .set = { {7, 0}, {11, -1}, {-1, 0}, {0, -6} } },
	[31] = { .set = { {7, 1}, {8, -4}, {-1, 2}, {1, -6} } },
	[32] = { .set = { {8, -5}, {6, -8}, {7, 1}, {-1, -7} } },
	[33] = { .set = { {8, -3}, {7, -9}, {5, 1}, {-1, -7} } },
	[34] = { .set = { {9, -6}, {4, -7}, {5, -1}, {0, -7} } },
	[35] = { .set = { {10, -4}, {5, -8}, {6, 1}, {2, -6} } },
	[36] = { .set = { {5, -9}, {-1, -7}, {9, -2}, {-2, -5} } },
	[37] = { .set = { {4, -8}, {-2, -9}, {9, -1}, {-1, -6} } },
	[38] = { .set = { {5, -10}, {-3, -7}, {7, -2}, {-1, -6} } },
	[39] = { .set = { {6, -8}, {-1, -7}, {9, -1}, {0, -6} } },
	[40] = { .set = { {0, -9}, {7, -10}, {-7, -10}, {0, -6} } },
	[41] = { .set = { {0, -7}, {6, -9}, {-6, -12}, {0, -6} } },
	[42] = { .set = { {0, -9}, {6, -10}, {-6, -7}, {0, -6} } },
	[43] = { .set = { {0, -9}, {6, -7}, {-7, -7}, {0, -7} } },
	[44] = { .set = { {-5, -9}, {1, -7}, {-9, -2}, {2, -5} } },
	[45] = { .set = { {-4, -8}, {2, -9}, {-9, -1}, {1, -6} } },
	[46] = { .set = { {-5, -10}, {3, -7}, {-7, -2}, {1, -6} } },
	[47] = { .set = { {-6, -8}, {1, -7}, {-9, -1}, {0, -6} } },
	[48] = { .set = { {-8, -5}, {-6, -8}, {-7, 1}, {1, -7} } },
	[49] = { .set = { {-8, -3}, {-7, -9}, {-5, 1}, {1, -7} } },
	[50] = { .set = { {-9, -6}, {-4, -7}, {-5, -1}, {0, -7} } },
	[51] = { .set = { {-10, -4}, {-5, -8}, {-6, 1}, {-2, -6} } },
	[52] = { .set = { {-6, 0}, {-9, -5}, {0, 3}, {0, -6} } },
	[53] = { .set = { {-6, 1}, {-8, -7}, {2, 2}, {0, -6} } },
	[54] = { .set = { {-7, 0}, {-11, -1}, {1, 0}, {0, -6} } },
	[55] = { .set = { {-8, 1}, {-9, -4}, {0, 2}, {-2, -6} } },
	[56] = { .set = { {0, 2}, {-8, 2}, {8, 2}, {0, -6} } },
	[57] = { .set = { {0, 3}, {-7, 1}, {8, 4}, {0, -6} } },
	[58] = { .set = { {0, 1}, {-8, 3}, {7, 1}, {0, -5} } },
	[59] = { .set = { {0, 3}, {-8, 2}, {8, 2}, {0, -4} } },
	[60] = { .set = { {6, 0}, {9, -5}, {0, 3}, {0, -6} } },
	[61] = { .set = { {6, 1}, {8, -7}, {-2, 2}, {0, -6} } },
	[62] = { .set = { {7, 0}, {11, -1}, {-1, 0}, {0, -6} } },
	[63] = { .set = { {7, 1}, {8, -4}, {-1, 2}, {1, -6} } },
	[64] = { .set = { {8, -5}, {6, -8}, {7, 1}, {-1, -7} } },
	[65] = { .set = { {8, -3}, {7, -9}, {5, 1}, {-1, -7} } },
	[66] = { .set = { {9, -6}, {4, -7}, {5, -1}, {0, -7} } },
	[67] = { .set = { {10, -4}, {5, -8}, {6, 1}, {2, -6} } },
	[68] = { .set = { {5, -9}, {-1, -7}, {9, -2}, {-2, -5} } },
	[69] = { .set = { {4, -8}, {-2, -9}, {9, -1}, {-1, -6} } },
	[70] = { .set = { {5, -10}, {-3, -7}, {7, -2}, {-1, -6} } },
	[71] = { .set = { {6, -8}, {-1, -7}, {9, -1}, {0, -6} } },
	[72] = { .set = { {0, -9}, {7, -10}, {-7, -10}, {0, -6} } },
	[73] = { .set = { {0, -7}, {6, -9}, {-6, -12}, {0, -6} } },
	[74] = { .set = { {0, -9}, {6, -10}, {-6, -7}, {0, -6} } },
	[75] = { .set = { {0, -9}, {6, -7}, {-7, -7}, {0, -7} } },
	[76] = { .set = { {-5, -9}, {1, -7}, {-9, -2}, {2, -5} } },
	[77] = { .set = { {-4, -8}, {2, -9}, {-9, -1}, {1, -6} } },
	[78] = { .set = { {-5, -10}, {3, -7}, {-7, -2}, {1, -6} } },
	[79] = { .set = { {-6, -8}, {1, -7}, {-9, -1}, {0, -6} } },
	[80] = { .set = { {-8, -5}, {-6, -8}, {-7, 1}, {1, -7} } },
	[81] = { .set = { {-8, -3}, {-7, -9}, {-5, 1}, {1, -7} } },
	[82] = { .set = { {-9, -6}, {-4, -7}, {-5, -1}, {0, -7} } },
	[83] = { .set = { {-10, -4}, {-5, -8}, {-6, 1}, {-2, -6} } },
	[84] = { .set = { {-6, 0}, {-9, -5}, {0, 3}, {0, -6} } },
	[85] = { .set = { {-6, 1}, {-8, -7}, {2, 2}, {0, -6} } },
	[86] = { .set = { {-7, 0}, {-11, -1}, {1, 0}, {0, -6} } },
	[87] = { .set = { {-8, 1}, {-9, -4}, {0, 2}, {-2, -6} } },
	[88] = { .set = { {0, 2}, {-8, 2}, {8, 2}, {0, -6} } },
	[89] = { .set = { {0, -2}, {-7, -2}, {7, -2}, {0, -6} } },
	[90] = { .set = { {0, -14}, {-8, 2}, {8, 2}, {0, -5} } },
	[91] = { .set = { {6, 0}, {9, -5}, {0, 3}, {0, -6} } },
	[92] = { .set = { {5, -5}, {5, -6}, {-1, -2}, {-1, -7} } },
	[93] = { .set = { {0, -13}, {9, -5}, {0, 3}, {1, -6} } },
	[94] = { .set = { {8, -5}, {6, -8}, {7, 1}, {-1, -7} } },
	[95] = { .set = { {6, -11}, {4, -8}, {5, -4}, {-2, -8} } },
	[96] = { .set = { {-2, -14}, {7, -7}, {7, 1}, {0, -6} } },
	[97] = { .set = { {5, -9}, {-1, -7}, {9, -2}, {-2, -5} } },
	[98] = { .set = { {3, -12}, {-4, -9}, {6, -5}, {-2, -6} } },
	[99] = { .set = { {-4, -11}, {-2, -6}, {9, -2}, {-1, -5} } },
	[100] = { .set = { {0, -9}, {7, -10}, {-7, -10}, {0, -6} } },
	[101] = { .set = { {0, -12}, {7, -11}, {-7, -11}, {0, -5} } },
	[102] = { .set = { {0, -11}, {8, -8}, {-7, -9}, {0, -9} } },
	[103] = { .set = { {-5, -9}, {1, -7}, {-9, -2}, {2, -5} } },
	[104] = { .set = { {-3, -12}, {4, -9}, {-6, -5}, {2, -6} } },
	[105] = { .set = { {4, -11}, {2, -6}, {-9, -2}, {1, -5} } },
	[106] = { .set = { {-8, -5}, {-6, -8}, {-7, 1}, {1, -7} } },
	[107] = { .set = { {-6, -11}, {-4, -8}, {-5, -4}, {2, -8} } },
	[108] = { .set = { {2, -14}, {-7, -7}, {-7, 1}, {0, -6} } },
	[109] = { .set = { {-6, 0}, {-9, -5}, {0, 3}, {0, -6} } },
	[110] = { .set = { {-5, -5}, {-5, -6}, {1, -2}, {1, -7} } },
	[111] = { .set = { {0, -13}, {-9, -5}, {0, 3}, {-1, -6} } },
	[112] = { .set = { {0, 2}, {-8, 2}, {8, 2}, {0, -6} } },
	[113] = { .set = { {-6, 0}, {-9, -5}, {0, 3}, {0, -6} } },
	[114] = { .set = { {-8, -5}, {-6, -8}, {-7, 1}, {1, -7} } },
	[115] = { .set = { {-5, -9}, {1, -7}, {-9, -2}, {2, -5} } },
	[116] = { .set = { {0, -9}, {7, -10}, {-7, -10}, {0, -6} } },
	[117] = { .set = { {5, -9}, {-1, -7}, {9, -2}, {-2, -5} } },
	[118] = { .set = { {8, -5}, {6, -8}, {7, 1}, {-1, -7} } },
	[119] = { .set = { {6, 0}, {9, -5}, {0, 3}, {0, -6} } },
	[120] = { .set = { {-6, 1}, {-7, -3}, {-1, 3}, {0, -6} } },
	[121] = { .set = { {-6, 1}, {-7, -3}, {-1, 3}, {0, -6} } },
	[122] = { .set = { {0, 1}, {-12, -2}, {1, 0}, {-1, -8} } },
	[123] = { .set = { {5, 1}, {11, -10}, {5, 0}, {-2, -7} } },
	[124] = { .set = { {6, 0}, {9, -12}, {7, -1}, {-1, -5} } },
	[125] = { .set = { {4, -5}, {4, -14}, {7, -1}, {-1, -4} } },
	[126] = { .set = { {0, -7}, {8, -9}, {-7, -3}, {0, -6} } },
	[127] = { .set = { {-5, -5}, {-5, -14}, {-8, -1}, {0, -4} } },
	[128] = { .set = { {-5, 0}, {-8, -12}, {-6, -1}, {2, -5} } },
	[129] = { .set = { {-6, 3}, {-12, -8}, {-6, 2}, {1, -5} } },
	[130] = { .set = { {0, 2}, {-8, 2}, {8, 2}, {0, -6} } },
	[131] = { .set = { {0, 2}, {-8, 2}, {8, 2}, {0, -5} } },
	[132] = { .set = { {6, 0}, {9, -5}, {0, 3}, {0, -6} } },
	[133] = { .set = { {7, 0}, {9, -5}, {0, 3}, {0, -6} } },
	[134] = { .set = { {8, -5}, {6, -8}, {7, 1}, {-1, -7} } },
	[135] = { .set = { {8, -5}, {5, -9}, {7, 1}, {0, -7} } },
	[136] = { .set = { {5, -9}, {-1, -7}, {9, -2}, {-2, -5} } },
	[137] = { .set = { {5, -9}, {-2, -8}, {9, -2}, {0, -6} } },
	[138] = { .set = { {0, -9}, {7, -10}, {-7, -10}, {0, -6} } },
	[139] = { .set = { {0, -9}, {7, -10}, {-7, -10}, {0, -6} } },
	[140] = { .set = { {-5, -9}, {1, -7}, {-9, -2}, {2, -5} } },
	[141] = { .set = { {-5, -9}, {2, -8}, {-9, -2}, {0, -6} } },
	[142] = { .set = { {-8, -5}, {-6, -8}, {-7, 1}, {1, -7} } },
	[143] = { .set = { {-8, -5}, {-5, -9}, {-7, 1}, {0, -7} } },
	[144] = { .set = { {-6, 0}, {-9, -5}, {0, 3}, {0, -6} } },
	[145] = { .set = { {-7, 0}, {-9, -5}, {0, 3}, {0, -6} } },
	[146] = { .set = { {0, -14}, {-8, 2}, {8, 2}, {0, -5} } },
	[147] = { .set = { {0, -13}, {-9, -5}, {0, 3}, {-1, -6} } },
	[148] = { .set = { {2, -14}, {-7, -7}, {-7, 1}, {0, -6} } },
	[149] = { .set = { {3, -11}, {1, -6}, {-10, -2}, {0, -5} } },
	[150] = { .set = { {0, -11}, {8, -8}, {-7, -9}, {0, -9} } },
	[151] = { .set = { {-3, -11}, {-1, -6}, {10, -2}, {0, -5} } },
	[152] = { .set = { {-2, -14}, {7, -7}, {7, 1}, {0, -6} } },
	[153] = { .set = { {0, -13}, {9, -5}, {0, 3}, {1, -6} } },
	[154] = { .set = { {0, -14}, {-8, 2}, {8, 2}, {0, -5} } },
	[155] = { .set = { {0, -13}, {9, -5}, {0, 3}, {1, -6} } },
	[156] = { .set = { {-2, -14}, {7, -7}, {7, 1}, {0, -6} } },
	[157] = { .set = { {-3, -11}, {-1, -6}, {10, -2}, {0, -5} } },
	[158] = { .set = { {0, -10}, {8, -7}, {-7, -8}, {0, -8} } },
	[159] = { .set = { {3, -11}, {1, -6}, {-10, -2}, {0, -5} } },
	[160] = { .set = { {2, -14}, {-7, -7}, {-7, 1}, {0, -6} } },
	[161] = { .set = { {0, -13}, {-9, -5}, {0, 3}, {-1, -6} } },
	[162] = { .set = { {0, 2}, {-8, 2}, {8, 2}, {0, -6} } },
	[163] = { .set = { {0, -2}, {-7, -2}, {7, -2}, {0, -6} } },
	[164] = { .set = { {0, -14}, {-8, 2}, {8, 2}, {0, -5} } },
	[165] = { .set = { {6, 0}, {9, -5}, {0, 3}, {0, -6} } },
	[166] = { .set = { {5, -5}, {5, -6}, {-1, -2}, {-1, -7} } },
	[167] = { .set = { {0, -13}, {9, -5}, {0, 3}, {1, -6} } },
	[168] = { .set = { {8, -5}, {6, -8}, {7, 1}, {-1, -7} } },
	[169] = { .set = { {6, -11}, {4, -8}, {5, -4}, {-2, -8} } },
	[170] = { .set = { {-2, -14}, {7, -7}, {7, 1}, {0, -6} } },
	[171] = { .set = { {5, -9}, {-1, -7}, {9, -2}, {-2, -5} } },
	[172] = { .set = { {3, -12}, {-4, -9}, {6, -5}, {-2, -6} } },
	[173] = { .set = { {-4, -11}, {-2, -6}, {9, -2}, {-1, -5} } },
	[174] = { .set = { {0, -9}, {7, -10}, {-7, -10}, {0, -6} } },
	[175] = { .set = { {0, -12}, {7, -11}, {-7, -11}, {0, -5} } },
	[176] = { .set = { {0, -11}, {8, -8}, {-7, -9}, {0, -9} } },
	[177] = { .set = { {-5, -9}, {1, -7}, {-9, -2}, {2, -5} } },
	[178] = { .set = { {-3, -12}, {4, -9}, {-6, -5}, {2, -6} } },
	[179] = { .set = { {4, -11}, {2, -6}, {-9, -2}, {1, -5} } },
	[180] = { .set = { {-8, -5}, {-6, -8}, {-7, 1}, {1, -7} } },
	[181] = { .set = { {-6, -11}, {-4, -8}, {-5, -4}, {2, -8} } },
	[182] = { .set = { {2, -14}, {-7, -7}, {-7, 1}, {0, -6} } },
	[183] = { .set = { {-6, 0}, {-9, -5}, {0, 3}, {0, -6} } },
	[184] = { .set = { {-5, -5}, {-5, -6}, {1, -2}, {1, -7} } },
	[185] = { .set = { {0, -13}, {-9, -5}, {0, 3}, {-1, -6} } },
	[186] = { .set = { {0, -14}, {-8, 2}, {8, 2}, {0, -5} } },
	[187] = { .set = { {0, -13}, {-9, -5}, {0, 3}, {-1, -6} } },
	[188] = { .set = { {2, -14}, {-7, -7}, {-7, 1}, {0, -6} } },
	[189] = { .set = { {3, -11}, {1, -6}, {-10, -2}, {0, -5} } },
	[190] = { .set = { {0, -10}, {8, -7}, {-7, -8}, {0, -8} } },
	[191] = { .set = { {-3, -11}, {-1, -6}, {10, -2}, {0, -5} } },
	[192] = { .set = { {-2, -14}, {7, -7}, {7, 1}, {0, -6} } },
	[193] = { .set = { {0, -13}, {9, -5}, {0, 3}, {1, -6} } },
	[194] = { .set = { {0, 2}, {-8, 2}, {8, 2}, {0, -6} } },
	[195] = { .set = { {-6, 0}, {-9, -5}, {0, 3}, {0, -6} } },
	[196] = { .set = { {-8, -5}, {-6, -8}, {-7, 1}, {1, -7} } },
	[197] = { .set = { {-5, -9}, {1, -7}, {-9, -2}, {2, -5} } },
	[198] = { .set = { {0, -9}, {7, -10}, {-7, -10}, {0, -6} } },
	[199] = { .set = { {5, -9}, {-1, -7}, {9, -2}, {-2, -5} } },
	[200] = { .set = { {8, -5}, {6, -8}, {7, 1}, {-1, -7} } },
	[201] = { .set = { {6, 0}, {9, -5}, {0, 3}, {0, -6} } },
};

static const ax_anim *const sSpinarakAnimTable1[] = {
	AX_ANIM_PTR(sSpinarakAnims_1_1),
	AX_ANIM_PTR(sSpinarakAnims_1_2),
	AX_ANIM_PTR(sSpinarakAnims_1_3),
	AX_ANIM_PTR(sSpinarakAnims_1_4),
	AX_ANIM_PTR(sSpinarakAnims_1_5),
	AX_ANIM_PTR(sSpinarakAnims_1_6),
	AX_ANIM_PTR(sSpinarakAnims_1_7),
	AX_ANIM_PTR(sSpinarakAnims_1_8),
};

static const ax_anim *const sSpinarakAnimTable2[] = {
	AX_ANIM_PTR(sSpinarakAnims_2_1),
	AX_ANIM_PTR(sSpinarakAnims_2_2),
	AX_ANIM_PTR(sSpinarakAnims_2_3),
	AX_ANIM_PTR(sSpinarakAnims_2_4),
	AX_ANIM_PTR(sSpinarakAnims_2_5),
	AX_ANIM_PTR(sSpinarakAnims_2_6),
	AX_ANIM_PTR(sSpinarakAnims_2_7),
	AX_ANIM_PTR(sSpinarakAnims_2_8),
};

static const ax_anim *const sSpinarakAnimTable3[] = {
	AX_ANIM_PTR(sSpinarakAnims_3_1),
	AX_ANIM_PTR(sSpinarakAnims_3_2),
	AX_ANIM_PTR(sSpinarakAnims_3_3),
	AX_ANIM_PTR(sSpinarakAnims_3_4),
	AX_ANIM_PTR(sSpinarakAnims_3_5),
	AX_ANIM_PTR(sSpinarakAnims_3_6),
	AX_ANIM_PTR(sSpinarakAnims_3_7),
	AX_ANIM_PTR(sSpinarakAnims_3_8),
};

static const ax_anim *const sSpinarakAnimTable4[] = {
	AX_ANIM_PTR(sSpinarakAnims_4_1),
	AX_ANIM_PTR(sSpinarakAnims_4_2),
	AX_ANIM_PTR(sSpinarakAnims_4_3),
	AX_ANIM_PTR(sSpinarakAnims_4_4),
	AX_ANIM_PTR(sSpinarakAnims_4_5),
	AX_ANIM_PTR(sSpinarakAnims_4_6),
	AX_ANIM_PTR(sSpinarakAnims_4_7),
	AX_ANIM_PTR(sSpinarakAnims_4_8),
};

static const ax_anim *const sSpinarakAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00249),
	AX_ANIM_PTR(gAxSharedAnim_00309),
	AX_ANIM_PTR(gAxSharedAnim_00301),
	AX_ANIM_PTR(gAxSharedAnim_00294),
	AX_ANIM_PTR(gAxSharedAnim_00285),
	AX_ANIM_PTR(gAxSharedAnim_00276),
	AX_ANIM_PTR(gAxSharedAnim_00270),
	AX_ANIM_PTR(gAxSharedAnim_00258),
};

static const ax_anim *const sSpinarakAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
};

static const ax_anim *const sSpinarakAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00332),
	AX_ANIM_PTR(gAxSharedAnim_00342),
	AX_ANIM_PTR(gAxSharedAnim_00350),
	AX_ANIM_PTR(gAxSharedAnim_00358),
	AX_ANIM_PTR(gAxSharedAnim_00370),
	AX_ANIM_PTR(gAxSharedAnim_00378),
	AX_ANIM_PTR(gAxSharedAnim_00385),
	AX_ANIM_PTR(gAxSharedAnim_00392),
};

static const ax_anim *const sSpinarakAnimTable8[] = {
	AX_ANIM_PTR(sSpinarakAnims_8_1),
	AX_ANIM_PTR(sSpinarakAnims_8_2),
	AX_ANIM_PTR(sSpinarakAnims_8_3),
	AX_ANIM_PTR(sSpinarakAnims_8_4),
	AX_ANIM_PTR(sSpinarakAnims_8_5),
	AX_ANIM_PTR(sSpinarakAnims_8_6),
	AX_ANIM_PTR(sSpinarakAnims_8_7),
	AX_ANIM_PTR(sSpinarakAnims_8_8),
};

static const ax_anim *const sSpinarakAnimTable9[] = {
	AX_ANIM_PTR(gAxSharedAnim_00536),
	AX_ANIM_PTR(sSpinarakAnims_9_2),
	AX_ANIM_PTR(sSpinarakAnims_9_3),
	AX_ANIM_PTR(sSpinarakAnims_9_4),
	AX_ANIM_PTR(sSpinarakAnims_9_5),
	AX_ANIM_PTR(sSpinarakAnims_9_6),
	AX_ANIM_PTR(sSpinarakAnims_9_7),
	AX_ANIM_PTR(sSpinarakAnims_9_8),
};

static const ax_anim *const sSpinarakAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00612),
	AX_ANIM_PTR(gAxSharedAnim_00622),
	AX_ANIM_PTR(gAxSharedAnim_00632),
	AX_ANIM_PTR(gAxSharedAnim_00642),
	AX_ANIM_PTR(gAxSharedAnim_00651),
	AX_ANIM_PTR(gAxSharedAnim_00660),
	AX_ANIM_PTR(gAxSharedAnim_00675),
	AX_ANIM_PTR(gAxSharedAnim_00686),
};

static const ax_anim *const sSpinarakAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_00697),
	AX_ANIM_PTR(gAxSharedAnim_00736),
	AX_ANIM_PTR(gAxSharedAnim_00768),
	AX_ANIM_PTR(gAxSharedAnim_00812),
	AX_ANIM_PTR(gAxSharedAnim_00847),
	AX_ANIM_PTR(gAxSharedAnim_00887),
	AX_ANIM_PTR(gAxSharedAnim_00929),
	AX_ANIM_PTR(gAxSharedAnim_00963),
};

static const ax_anim *const sSpinarakAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01018),
	AX_ANIM_PTR(gAxSharedAnim_01128),
	AX_ANIM_PTR(gAxSharedAnim_01099),
	AX_ANIM_PTR(gAxSharedAnim_01085),
	AX_ANIM_PTR(gAxSharedAnim_01084),
	AX_ANIM_PTR(gAxSharedAnim_01065),
	AX_ANIM_PTR(gAxSharedAnim_01034),
	AX_ANIM_PTR(gAxSharedAnim_01019),
};

static const ax_anim *const sSpinarakAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01145),
	AX_ANIM_PTR(gAxSharedAnim_01227),
	AX_ANIM_PTR(gAxSharedAnim_01218),
	AX_ANIM_PTR(gAxSharedAnim_01201),
	AX_ANIM_PTR(gAxSharedAnim_01190),
	AX_ANIM_PTR(gAxSharedAnim_01179),
	AX_ANIM_PTR(gAxSharedAnim_01168),
	AX_ANIM_PTR(gAxSharedAnim_01157),
};

static const ax_anim *const *const sAxAnimationsSpinarak[] = {
	sSpinarakAnimTable1,
	sSpinarakAnimTable2,
	sSpinarakAnimTable3,
	sSpinarakAnimTable4,
	sSpinarakAnimTable5,
	sSpinarakAnimTable6,
	sSpinarakAnimTable7,
	sSpinarakAnimTable8,
	sSpinarakAnimTable9,
	sSpinarakAnimTable10,
	sSpinarakAnimTable11,
	sSpinarakAnimTable12,
	sSpinarakAnimTable13,
};

static const ax_sprite *const sAxSpritesSpinarak[] = {
	sSpinarakSprites1,
	sSpinarakSprites2,
	sSpinarakSprites3,
	sSpinarakSprites4,
	sSpinarakSprites5,
	sSpinarakSprites6,
	sSpinarakSprites7,
	sSpinarakSprites8,
	sSpinarakSprites9,
	sSpinarakSprites10,
	sSpinarakSprites11,
	sSpinarakSprites12,
	sSpinarakSprites13,
	sSpinarakSprites14,
	sSpinarakSprites15,
	sSpinarakSprites16,
	sSpinarakSprites17,
	sSpinarakSprites18,
	sSpinarakSprites19,
	sSpinarakSprites20,
	sSpinarakSprites21,
	sSpinarakSprites22,
	sSpinarakSprites23,
	sSpinarakSprites24,
	sSpinarakSprites25,
	sSpinarakSprites26,
	sSpinarakSprites27,
	sSpinarakSprites28,
	sSpinarakSprites29,
	sSpinarakSprites30,
	sSpinarakSprites31,
	sSpinarakSprites32,
	sSpinarakSprites33,
	sSpinarakSprites34,
	sSpinarakSprites35,
	sSpinarakSprites36,
	sSpinarakSprites37,
	sSpinarakSprites38,
	sSpinarakSprites39,
	sSpinarakSprites40,
	sSpinarakSprites41,
	sSpinarakSprites42,
};

static const axmain sAxMainSpinarak = {
	.poses = sAxPosesSpinarak,
	.animations = sAxAnimationsSpinarak,
	.animCount = ARRAY_COUNT(sAxAnimationsSpinarak),
	.spriteData = sAxSpritesSpinarak,
	.positions = sAxPositionsSpinarak,
};
