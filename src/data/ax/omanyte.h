/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainOmanyte;
const SiroArchive gAxOmanyte = {"SIRO", &sAxMainOmanyte};

static const ax_pose sOmanytePose1[] = {
	AX_POSE(0, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 0)),
	AX_POSE(1, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose2[] = {
	AX_POSE(2, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose3[] = {
	AX_POSE(3, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose4[] = {
	AX_POSE(4, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose5[] = {
	AX_POSE(5, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose6[] = {
	AX_POSE(6, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose7[] = {
	AX_POSE(7, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose8[] = {
	AX_POSE(8, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose9[] = {
	AX_POSE(9, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose10[] = {
	AX_POSE(10, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose11[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose12[] = {
	AX_POSE(12, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose13[] = {
	AX_POSE(13, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose14[] = {
	AX_POSE(14, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose15[] = {
	AX_POSE(15, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose16[] = {
	AX_POSE(10, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose17[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose18[] = {
	AX_POSE(12, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose19[] = {
	AX_POSE(7, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose20[] = {
	AX_POSE(8, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose21[] = {
	AX_POSE(9, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose22[] = {
	AX_POSE(4, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose23[] = {
	AX_POSE(5, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose24[] = {
	AX_POSE(6, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose76[] = {
	AX_POSE(16, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose80[] = {
	AX_POSE(17, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose82[] = {
	AX_POSE(8, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose83[] = {
	AX_POSE(9, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose84[] = {
	AX_POSE(18, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose88[] = {
	AX_POSE(19, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose92[] = {
	AX_POSE(20, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose96[] = {
	AX_POSE(19, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose98[] = {
	AX_POSE(8, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose99[] = {
	AX_POSE(9, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose100[] = {
	AX_POSE(18, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose104[] = {
	AX_POSE(17, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose106[] = {
	AX_POSE(21, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose107[] = {
	AX_POSE(22, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose109[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose110[] = {
	AX_POSE(24, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose112[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose113[] = {
	AX_POSE(26, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose115[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose116[] = {
	AX_POSE(28, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose118[] = {
	AX_POSE(29, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose119[] = {
	AX_POSE(30, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose121[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose122[] = {
	AX_POSE(28, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose124[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose125[] = {
	AX_POSE(26, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose127[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose128[] = {
	AX_POSE(24, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose129[] = {
	AX_POSE(31, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose130[] = {
	AX_POSE(32, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose131[] = {
	AX_POSE(33, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose132[] = {
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose133[] = {
	AX_POSE(35, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose134[] = {
	AX_POSE(36, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose135[] = {
	AX_POSE(37, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose136[] = {
	AX_POSE(36, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose137[] = {
	AX_POSE(35, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose138[] = {
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose184[] = {
	AX_POSE(5, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose191[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose197[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmanytePose203[] = {
	AX_POSE(5, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const u8 sOmanyteAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_2_1.lz");
static const u8 sOmanyteAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_2_2.lz");
static const u8 sOmanyteAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_2_3.lz");
static const u8 sOmanyteAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_2_4.lz");
static const u8 sOmanyteAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_2_6.lz");
static const u8 sOmanyteAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_2_8.lz");
static const u8 sOmanyteAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_3_1.lz");
static const u8 sOmanyteAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_3_2.lz");
static const u8 sOmanyteAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_3_3.lz");
static const u8 sOmanyteAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_3_4.lz");
static const u8 sOmanyteAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_3_5.lz");
static const u8 sOmanyteAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_3_6.lz");
static const u8 sOmanyteAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_3_8.lz");
static const u8 sOmanyteAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_4_1.lz");
static const u8 sOmanyteAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_4_2.lz");
static const u8 sOmanyteAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_4_3.lz");
static const u8 sOmanyteAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_4_4.lz");
static const u8 sOmanyteAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_4_5.lz");
static const u8 sOmanyteAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_4_6.lz");
static const u8 sOmanyteAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_4_7.lz");
static const u8 sOmanyteAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_4_8.lz");
static const u8 sOmanyteAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_5_1.lz");
static const u8 sOmanyteAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_5_2.lz");
static const u8 sOmanyteAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_5_3.lz");
static const u8 sOmanyteAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_5_4.lz");
static const u8 sOmanyteAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_5_5.lz");
static const u8 sOmanyteAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_5_6.lz");
static const u8 sOmanyteAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_5_7.lz");
static const u8 sOmanyteAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_5_8.lz");
static const u8 sOmanyteAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_8_1.lz");
static const u8 sOmanyteAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_8_2.lz");
static const u8 sOmanyteAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_8_3.lz");
static const u8 sOmanyteAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_8_4.lz");
static const u8 sOmanyteAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_8_6.lz");
static const u8 sOmanyteAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_8_8.lz");
static const u8 sOmanyteAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_9_1.lz");
static const u8 sOmanyteAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_9_2.lz");
static const u8 sOmanyteAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_9_3.lz");
static const u8 sOmanyteAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_9_4.lz");
static const u8 sOmanyteAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_9_5.lz");
static const u8 sOmanyteAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_9_6.lz");
static const u8 sOmanyteAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_9_7.lz");
static const u8 sOmanyteAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omanyte/sOmanyteAnims_9_8.lz");

static const u8 sOmanyteGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_1.4bpp.lz");
static const ax_sprite sOmanyteSprites1[] = {
	{sOmanyteGfx1, ARRAY_COUNT(sOmanyteGfx1)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_2.4bpp.lz");
static const ax_sprite sOmanyteSprites2[] = {
	{sOmanyteGfx2, ARRAY_COUNT(sOmanyteGfx2)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_3.4bpp.lz");
static const ax_sprite sOmanyteSprites3[] = {
	{sOmanyteGfx3, ARRAY_COUNT(sOmanyteGfx3)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_4.4bpp.lz");
static const ax_sprite sOmanyteSprites4[] = {
	{sOmanyteGfx4, ARRAY_COUNT(sOmanyteGfx4)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_5.4bpp.lz");
static const ax_sprite sOmanyteSprites5[] = {
	{sOmanyteGfx5, ARRAY_COUNT(sOmanyteGfx5)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_6.4bpp.lz");
static const ax_sprite sOmanyteSprites6[] = {
	{sOmanyteGfx6, ARRAY_COUNT(sOmanyteGfx6)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_7.4bpp.lz");
static const ax_sprite sOmanyteSprites7[] = {
	{sOmanyteGfx7, ARRAY_COUNT(sOmanyteGfx7)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_8.4bpp.lz");
static const ax_sprite sOmanyteSprites8[] = {
	{sOmanyteGfx8, ARRAY_COUNT(sOmanyteGfx8)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_9.4bpp.lz");
static const ax_sprite sOmanyteSprites9[] = {
	{sOmanyteGfx9, ARRAY_COUNT(sOmanyteGfx9)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_10.4bpp.lz");
static const ax_sprite sOmanyteSprites10[] = {
	{sOmanyteGfx10, ARRAY_COUNT(sOmanyteGfx10)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_11.4bpp.lz");
static const ax_sprite sOmanyteSprites11[] = {
	{sOmanyteGfx11, ARRAY_COUNT(sOmanyteGfx11)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_12.4bpp.lz");
static const ax_sprite sOmanyteSprites12[] = {
	{sOmanyteGfx12, ARRAY_COUNT(sOmanyteGfx12)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_13.4bpp.lz");
static const ax_sprite sOmanyteSprites13[] = {
	{sOmanyteGfx13, ARRAY_COUNT(sOmanyteGfx13)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_14.4bpp.lz");
static const ax_sprite sOmanyteSprites14[] = {
	{sOmanyteGfx14, ARRAY_COUNT(sOmanyteGfx14)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_15.4bpp.lz");
static const ax_sprite sOmanyteSprites15[] = {
	{sOmanyteGfx15, ARRAY_COUNT(sOmanyteGfx15)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_16.4bpp.lz");
static const ax_sprite sOmanyteSprites16[] = {
	{sOmanyteGfx16, ARRAY_COUNT(sOmanyteGfx16)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_17.4bpp.lz");
static const ax_sprite sOmanyteSprites17[] = {
	{sOmanyteGfx17, ARRAY_COUNT(sOmanyteGfx17)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_18.4bpp.lz");
static const u8 sOmanyteGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_18_1.4bpp.lz");
static const u8 sOmanyteGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_18_2.4bpp.lz");
static const ax_sprite sOmanyteSprites18[] = {
	{sOmanyteGfx18, ARRAY_COUNT(sOmanyteGfx18)}, 
	{NULL, 32}, 
	{sOmanyteGfx18_1, ARRAY_COUNT(sOmanyteGfx18_1)}, 
	{NULL, 64}, 
	{sOmanyteGfx18_2, ARRAY_COUNT(sOmanyteGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_19.4bpp.lz");
static const u8 sOmanyteGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_19_1.4bpp.lz");
static const ax_sprite sOmanyteSprites19[] = {
	{sOmanyteGfx19, ARRAY_COUNT(sOmanyteGfx19)}, 
	{NULL, 32}, 
	{sOmanyteGfx19_1, ARRAY_COUNT(sOmanyteGfx19_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_20.4bpp.lz");
static const u8 sOmanyteGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_20_1.4bpp.lz");
static const u8 sOmanyteGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_20_2.4bpp.lz");
static const ax_sprite sOmanyteSprites20[] = {
	{sOmanyteGfx20, ARRAY_COUNT(sOmanyteGfx20)}, 
	{NULL, 32}, 
	{sOmanyteGfx20_1, ARRAY_COUNT(sOmanyteGfx20_1)}, 
	{NULL, 64}, 
	{sOmanyteGfx20_2, ARRAY_COUNT(sOmanyteGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_21.4bpp.lz");
static const u8 sOmanyteGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_21_1.4bpp.lz");
static const u8 sOmanyteGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_21_2.4bpp.lz");
static const ax_sprite sOmanyteSprites21[] = {
	{sOmanyteGfx21, ARRAY_COUNT(sOmanyteGfx21)}, 
	{NULL, 32}, 
	{sOmanyteGfx21_1, ARRAY_COUNT(sOmanyteGfx21_1)}, 
	{NULL, 64}, 
	{sOmanyteGfx21_2, ARRAY_COUNT(sOmanyteGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_22.4bpp.lz");
static const ax_sprite sOmanyteSprites22[] = {
	{sOmanyteGfx22, ARRAY_COUNT(sOmanyteGfx22)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_23.4bpp.lz");
static const ax_sprite sOmanyteSprites23[] = {
	{sOmanyteGfx23, ARRAY_COUNT(sOmanyteGfx23)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_24.4bpp.lz");
static const u8 sOmanyteGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_24_1.4bpp.lz");
static const u8 sOmanyteGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_24_2.4bpp.lz");
static const ax_sprite sOmanyteSprites24[] = {
	{sOmanyteGfx24, ARRAY_COUNT(sOmanyteGfx24)}, 
	{NULL, 32}, 
	{sOmanyteGfx24_1, ARRAY_COUNT(sOmanyteGfx24_1)}, 
	{NULL, 32}, 
	{sOmanyteGfx24_2, ARRAY_COUNT(sOmanyteGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_25.4bpp.lz");
static const u8 sOmanyteGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_25_1.4bpp.lz");
static const u8 sOmanyteGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_25_2.4bpp.lz");
static const ax_sprite sOmanyteSprites25[] = {
	{NULL, 32}, 
	{sOmanyteGfx25, ARRAY_COUNT(sOmanyteGfx25)}, 
	{NULL, 32}, 
	{sOmanyteGfx25_1, ARRAY_COUNT(sOmanyteGfx25_1)}, 
	{NULL, 64}, 
	{sOmanyteGfx25_2, ARRAY_COUNT(sOmanyteGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_26.4bpp.lz");
static const u8 sOmanyteGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_26_1.4bpp.lz");
static const u8 sOmanyteGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_26_2.4bpp.lz");
static const u8 sOmanyteGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_26_3.4bpp.lz");
static const ax_sprite sOmanyteSprites26[] = {
	{sOmanyteGfx26, ARRAY_COUNT(sOmanyteGfx26)}, 
	{NULL, 32}, 
	{sOmanyteGfx26_1, ARRAY_COUNT(sOmanyteGfx26_1)}, 
	{NULL, 32}, 
	{sOmanyteGfx26_2, ARRAY_COUNT(sOmanyteGfx26_2)}, 
	{NULL, 64}, 
	{sOmanyteGfx26_3, ARRAY_COUNT(sOmanyteGfx26_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_27.4bpp.lz");
static const u8 sOmanyteGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_27_1.4bpp.lz");
static const u8 sOmanyteGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_27_2.4bpp.lz");
static const ax_sprite sOmanyteSprites27[] = {
	{sOmanyteGfx27, ARRAY_COUNT(sOmanyteGfx27)}, 
	{NULL, 32}, 
	{sOmanyteGfx27_1, ARRAY_COUNT(sOmanyteGfx27_1)}, 
	{NULL, 64}, 
	{sOmanyteGfx27_2, ARRAY_COUNT(sOmanyteGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_28.4bpp.lz");
static const u8 sOmanyteGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_28_1.4bpp.lz");
static const u8 sOmanyteGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_28_2.4bpp.lz");
static const ax_sprite sOmanyteSprites28[] = {
	{NULL, 32}, 
	{sOmanyteGfx28, ARRAY_COUNT(sOmanyteGfx28)}, 
	{NULL, 32}, 
	{sOmanyteGfx28_1, ARRAY_COUNT(sOmanyteGfx28_1)}, 
	{NULL, 32}, 
	{sOmanyteGfx28_2, ARRAY_COUNT(sOmanyteGfx28_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_29.4bpp.lz");
static const u8 sOmanyteGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_29_1.4bpp.lz");
static const u8 sOmanyteGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_29_2.4bpp.lz");
static const ax_sprite sOmanyteSprites29[] = {
	{sOmanyteGfx29, ARRAY_COUNT(sOmanyteGfx29)}, 
	{NULL, 32}, 
	{sOmanyteGfx29_1, ARRAY_COUNT(sOmanyteGfx29_1)}, 
	{NULL, 64}, 
	{sOmanyteGfx29_2, ARRAY_COUNT(sOmanyteGfx29_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_30.4bpp.lz");
static const u8 sOmanyteGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_30_1.4bpp.lz");
static const u8 sOmanyteGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_30_2.4bpp.lz");
static const ax_sprite sOmanyteSprites30[] = {
	{NULL, 32}, 
	{sOmanyteGfx30, ARRAY_COUNT(sOmanyteGfx30)}, 
	{NULL, 32}, 
	{sOmanyteGfx30_1, ARRAY_COUNT(sOmanyteGfx30_1)}, 
	{NULL, 64}, 
	{sOmanyteGfx30_2, ARRAY_COUNT(sOmanyteGfx30_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_31.4bpp.lz");
static const ax_sprite sOmanyteSprites31[] = {
	{sOmanyteGfx31, ARRAY_COUNT(sOmanyteGfx31)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_32.4bpp.lz");
static const ax_sprite sOmanyteSprites32[] = {
	{sOmanyteGfx32, ARRAY_COUNT(sOmanyteGfx32)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_33.4bpp.lz");
static const ax_sprite sOmanyteSprites33[] = {
	{sOmanyteGfx33, ARRAY_COUNT(sOmanyteGfx33)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_34.4bpp.lz");
static const ax_sprite sOmanyteSprites34[] = {
	{sOmanyteGfx34, ARRAY_COUNT(sOmanyteGfx34)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_35.4bpp.lz");
static const ax_sprite sOmanyteSprites35[] = {
	{sOmanyteGfx35, ARRAY_COUNT(sOmanyteGfx35)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_36.4bpp.lz");
static const ax_sprite sOmanyteSprites36[] = {
	{sOmanyteGfx36, ARRAY_COUNT(sOmanyteGfx36)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_37.4bpp.lz");
static const ax_sprite sOmanyteSprites37[] = {
	{sOmanyteGfx37, ARRAY_COUNT(sOmanyteGfx37)}, 
	{NULL, 0}
};
static const u8 sOmanyteGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omanyte/sprite_38.4bpp.lz");
static const ax_sprite sOmanyteSprites38[] = {
	{sOmanyteGfx38, ARRAY_COUNT(sOmanyteGfx38)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesOmanyte[] = {
	sOmanytePose1,
	sOmanytePose2,
	sOmanytePose3,
	sOmanytePose4,
	sOmanytePose5,
	sOmanytePose6,
	sOmanytePose7,
	sOmanytePose8,
	sOmanytePose9,
	sOmanytePose10,
	sOmanytePose11,
	sOmanytePose12,
	sOmanytePose13,
	sOmanytePose14,
	sOmanytePose15,
	sOmanytePose16,
	sOmanytePose17,
	sOmanytePose18,
	sOmanytePose19,
	sOmanytePose20,
	sOmanytePose21,
	sOmanytePose22,
	sOmanytePose23,
	sOmanytePose24,
	sOmanytePose1,
	sOmanytePose2,
	sOmanytePose3,
	sOmanytePose4,
	sOmanytePose5,
	sOmanytePose6,
	sOmanytePose7,
	sOmanytePose8,
	sOmanytePose9,
	sOmanytePose10,
	sOmanytePose11,
	sOmanytePose12,
	sOmanytePose13,
	sOmanytePose14,
	sOmanytePose15,
	sOmanytePose16,
	sOmanytePose17,
	sOmanytePose18,
	sOmanytePose19,
	sOmanytePose20,
	sOmanytePose21,
	sOmanytePose22,
	sOmanytePose23,
	sOmanytePose24,
	sOmanytePose1,
	sOmanytePose2,
	sOmanytePose3,
	sOmanytePose4,
	sOmanytePose5,
	sOmanytePose6,
	sOmanytePose7,
	sOmanytePose8,
	sOmanytePose9,
	sOmanytePose10,
	sOmanytePose11,
	sOmanytePose12,
	sOmanytePose13,
	sOmanytePose14,
	sOmanytePose15,
	sOmanytePose16,
	sOmanytePose17,
	sOmanytePose18,
	sOmanytePose19,
	sOmanytePose20,
	sOmanytePose21,
	sOmanytePose22,
	sOmanytePose23,
	sOmanytePose24,
	sOmanytePose1,
	sOmanytePose2,
	sOmanytePose3,
	sOmanytePose76,
	sOmanytePose4,
	sOmanytePose5,
	sOmanytePose6,
	sOmanytePose80,
	sOmanytePose7,
	sOmanytePose82,
	sOmanytePose83,
	sOmanytePose84,
	sOmanytePose10,
	sOmanytePose11,
	sOmanytePose12,
	sOmanytePose88,
	sOmanytePose13,
	sOmanytePose14,
	sOmanytePose15,
	sOmanytePose92,
	sOmanytePose16,
	sOmanytePose17,
	sOmanytePose18,
	sOmanytePose96,
	sOmanytePose19,
	sOmanytePose98,
	sOmanytePose99,
	sOmanytePose100,
	sOmanytePose22,
	sOmanytePose23,
	sOmanytePose24,
	sOmanytePose104,
	sOmanytePose1,
	sOmanytePose106,
	sOmanytePose107,
	sOmanytePose4,
	sOmanytePose109,
	sOmanytePose110,
	sOmanytePose7,
	sOmanytePose112,
	sOmanytePose113,
	sOmanytePose10,
	sOmanytePose115,
	sOmanytePose116,
	sOmanytePose13,
	sOmanytePose118,
	sOmanytePose119,
	sOmanytePose16,
	sOmanytePose121,
	sOmanytePose122,
	sOmanytePose19,
	sOmanytePose124,
	sOmanytePose125,
	sOmanytePose22,
	sOmanytePose127,
	sOmanytePose128,
	sOmanytePose129,
	sOmanytePose130,
	sOmanytePose131,
	sOmanytePose132,
	sOmanytePose133,
	sOmanytePose134,
	sOmanytePose135,
	sOmanytePose136,
	sOmanytePose137,
	sOmanytePose138,
	sOmanytePose1,
	sOmanytePose2,
	sOmanytePose3,
	sOmanytePose4,
	sOmanytePose5,
	sOmanytePose6,
	sOmanytePose7,
	sOmanytePose8,
	sOmanytePose9,
	sOmanytePose10,
	sOmanytePose11,
	sOmanytePose12,
	sOmanytePose13,
	sOmanytePose14,
	sOmanytePose15,
	sOmanytePose16,
	sOmanytePose17,
	sOmanytePose18,
	sOmanytePose19,
	sOmanytePose20,
	sOmanytePose21,
	sOmanytePose22,
	sOmanytePose23,
	sOmanytePose24,
	sOmanytePose1,
	sOmanytePose22,
	sOmanytePose19,
	sOmanytePose16,
	sOmanytePose13,
	sOmanytePose10,
	sOmanytePose7,
	sOmanytePose4,
	sOmanytePose76,
	sOmanytePose80,
	sOmanytePose84,
	sOmanytePose88,
	sOmanytePose92,
	sOmanytePose96,
	sOmanytePose100,
	sOmanytePose104,
	sOmanytePose1,
	sOmanytePose76,
	sOmanytePose2,
	sOmanytePose4,
	sOmanytePose80,
	sOmanytePose184,
	sOmanytePose7,
	sOmanytePose84,
	sOmanytePose82,
	sOmanytePose83,
	sOmanytePose10,
	sOmanytePose88,
	sOmanytePose191,
	sOmanytePose13,
	sOmanytePose92,
	sOmanytePose14,
	sOmanytePose16,
	sOmanytePose96,
	sOmanytePose197,
	sOmanytePose19,
	sOmanytePose100,
	sOmanytePose98,
	sOmanytePose22,
	sOmanytePose104,
	sOmanytePose203,
	sOmanytePose1,
	sOmanytePose22,
	sOmanytePose19,
	sOmanytePose16,
	sOmanytePose13,
	sOmanytePose10,
	sOmanytePose7,
	sOmanytePose4,
	sOmanytePose1,
	sOmanytePose22,
	sOmanytePose19,
	sOmanytePose16,
	sOmanytePose13,
	sOmanytePose10,
	sOmanytePose7,
	sOmanytePose4,
};

static const struct PositionSets sAxPositionsOmanyte[] = {
	[0] = { .set = { {0, 0}, {-7, -3}, {7, -3}, {0, -9} } },
	[1] = { .set = { {0, 2}, {-6, 3}, {6, 3}, {0, -8} } },
	[2] = { .set = { {0, -1}, {-6, -4}, {6, -4}, {0, -10} } },
	[3] = { .set = { {6, -1}, {9, -6}, {-2, -2}, {-1, -8} } },
	[4] = { .set = { {7, -1}, {12, -2}, {1, 2}, {1, -8} } },
	[5] = { .set = { {5, -3}, {8, -7}, {-2, -4}, {-1, -8} } },
	[6] = { .set = { {8, -3}, {8, -7}, {4, -4}, {-1, -7} } },
	[7] = { .set = { {9, -3}, {12, -4}, {8, -1}, {0, -7} } },
	[8] = { .set = { {7, -3}, {6, -8}, {2, -4}, {-3, -7} } },
	[9] = { .set = { {5, -6}, {4, -11}, {9, -9}, {0, -8} } },
	[10] = { .set = { {6, -7}, {4, -7}, {11, -6}, {1, -9} } },
	[11] = { .set = { {4, -7}, {3, -11}, {8, -9}, {-1, -8} } },
	[12] = { .set = { {-1, -8}, {6, -11}, {-8, -11}, {-1, -7} } },
	[13] = { .set = { {-1, -7}, {5, -10}, {-7, -10}, {-1, -8} } },
	[14] = { .set = { {-1, -7}, {6, -10}, {-8, -10}, {-1, -8} } },
	[15] = { .set = { {-6, -6}, {-5, -11}, {-10, -9}, {-1, -8} } },
	[16] = { .set = { {-7, -7}, {-5, -7}, {-12, -6}, {-2, -9} } },
	[17] = { .set = { {-5, -7}, {-4, -11}, {-9, -9}, {0, -8} } },
	[18] = { .set = { {-9, -3}, {-9, -7}, {-5, -4}, {0, -7} } },
	[19] = { .set = { {-10, -3}, {-13, -4}, {-9, -1}, {-1, -7} } },
	[20] = { .set = { {-8, -3}, {-7, -8}, {-3, -4}, {2, -7} } },
	[21] = { .set = { {-7, -1}, {-10, -6}, {1, -2}, {0, -8} } },
	[22] = { .set = { {-8, -1}, {-13, -2}, {-2, 2}, {-2, -8} } },
	[23] = { .set = { {-6, -3}, {-9, -7}, {1, -4}, {0, -8} } },
	[24] = { .set = { {0, 0}, {-7, -3}, {7, -3}, {0, -9} } },
	[25] = { .set = { {0, 2}, {-6, 3}, {6, 3}, {0, -8} } },
	[26] = { .set = { {0, -1}, {-6, -4}, {6, -4}, {0, -10} } },
	[27] = { .set = { {6, -1}, {9, -6}, {-2, -2}, {-1, -8} } },
	[28] = { .set = { {7, -1}, {12, -2}, {1, 2}, {1, -8} } },
	[29] = { .set = { {5, -3}, {8, -7}, {-2, -4}, {-1, -8} } },
	[30] = { .set = { {8, -3}, {8, -7}, {4, -4}, {-1, -7} } },
	[31] = { .set = { {9, -3}, {12, -4}, {8, -1}, {0, -7} } },
	[32] = { .set = { {7, -3}, {6, -8}, {2, -4}, {-3, -7} } },
	[33] = { .set = { {5, -6}, {4, -11}, {9, -9}, {0, -8} } },
	[34] = { .set = { {6, -7}, {4, -7}, {11, -6}, {1, -9} } },
	[35] = { .set = { {4, -7}, {3, -11}, {8, -9}, {-1, -8} } },
	[36] = { .set = { {-1, -8}, {6, -11}, {-8, -11}, {-1, -7} } },
	[37] = { .set = { {-1, -7}, {5, -10}, {-7, -10}, {-1, -8} } },
	[38] = { .set = { {-1, -7}, {6, -10}, {-8, -10}, {-1, -8} } },
	[39] = { .set = { {-6, -6}, {-5, -11}, {-10, -9}, {-1, -8} } },
	[40] = { .set = { {-7, -7}, {-5, -7}, {-12, -6}, {-2, -9} } },
	[41] = { .set = { {-5, -7}, {-4, -11}, {-9, -9}, {0, -8} } },
	[42] = { .set = { {-9, -3}, {-9, -7}, {-5, -4}, {0, -7} } },
	[43] = { .set = { {-10, -3}, {-13, -4}, {-9, -1}, {-1, -7} } },
	[44] = { .set = { {-8, -3}, {-7, -8}, {-3, -4}, {2, -7} } },
	[45] = { .set = { {-7, -1}, {-10, -6}, {1, -2}, {0, -8} } },
	[46] = { .set = { {-8, -1}, {-13, -2}, {-2, 2}, {-2, -8} } },
	[47] = { .set = { {-6, -3}, {-9, -7}, {1, -4}, {0, -8} } },
	[48] = { .set = { {0, 0}, {-7, -3}, {7, -3}, {0, -9} } },
	[49] = { .set = { {0, 2}, {-6, 3}, {6, 3}, {0, -8} } },
	[50] = { .set = { {0, -1}, {-6, -4}, {6, -4}, {0, -10} } },
	[51] = { .set = { {6, -1}, {9, -6}, {-2, -2}, {-1, -8} } },
	[52] = { .set = { {7, -1}, {12, -2}, {1, 2}, {1, -8} } },
	[53] = { .set = { {5, -3}, {8, -7}, {-2, -4}, {-1, -8} } },
	[54] = { .set = { {8, -3}, {8, -7}, {4, -4}, {-1, -7} } },
	[55] = { .set = { {9, -3}, {12, -4}, {8, -1}, {0, -7} } },
	[56] = { .set = { {7, -3}, {6, -8}, {2, -4}, {-3, -7} } },
	[57] = { .set = { {5, -6}, {4, -11}, {9, -9}, {0, -8} } },
	[58] = { .set = { {6, -7}, {4, -7}, {11, -6}, {1, -9} } },
	[59] = { .set = { {4, -7}, {3, -11}, {8, -9}, {-1, -8} } },
	[60] = { .set = { {-1, -8}, {6, -11}, {-8, -11}, {-1, -7} } },
	[61] = { .set = { {-1, -7}, {5, -10}, {-7, -10}, {-1, -8} } },
	[62] = { .set = { {-1, -7}, {6, -10}, {-8, -10}, {-1, -8} } },
	[63] = { .set = { {-6, -6}, {-5, -11}, {-10, -9}, {-1, -8} } },
	[64] = { .set = { {-7, -7}, {-5, -7}, {-12, -6}, {-2, -9} } },
	[65] = { .set = { {-5, -7}, {-4, -11}, {-9, -9}, {0, -8} } },
	[66] = { .set = { {-9, -3}, {-9, -7}, {-5, -4}, {0, -7} } },
	[67] = { .set = { {-10, -3}, {-13, -4}, {-9, -1}, {-1, -7} } },
	[68] = { .set = { {-8, -3}, {-7, -8}, {-3, -4}, {2, -7} } },
	[69] = { .set = { {-7, -1}, {-10, -6}, {1, -2}, {0, -8} } },
	[70] = { .set = { {-8, -1}, {-13, -2}, {-2, 2}, {-2, -8} } },
	[71] = { .set = { {-6, -3}, {-9, -7}, {1, -4}, {0, -8} } },
	[72] = { .set = { {0, 0}, {-7, -3}, {7, -3}, {0, -9} } },
	[73] = { .set = { {0, 2}, {-6, 3}, {6, 3}, {0, -8} } },
	[74] = { .set = { {0, -1}, {-6, -4}, {6, -4}, {0, -10} } },
	[75] = { .set = { {0, -1}, {-6, -4}, {6, -4}, {0, -10} } },
	[76] = { .set = { {6, -1}, {9, -6}, {-2, -2}, {-1, -8} } },
	[77] = { .set = { {7, -1}, {12, -2}, {1, 2}, {1, -8} } },
	[78] = { .set = { {5, -3}, {8, -7}, {-2, -4}, {-1, -8} } },
	[79] = { .set = { {6, -2}, {8, -7}, {-2, -3}, {-2, -8} } },
	[80] = { .set = { {8, -3}, {8, -7}, {4, -4}, {-1, -7} } },
	[81] = { .set = { {8, -3}, {11, -4}, {7, -1}, {-1, -7} } },
	[82] = { .set = { {8, -3}, {7, -8}, {3, -4}, {-2, -7} } },
	[83] = { .set = { {8, -6}, {7, -9}, {2, -6}, {-3, -6} } },
	[84] = { .set = { {5, -6}, {4, -11}, {9, -9}, {0, -8} } },
	[85] = { .set = { {6, -7}, {4, -7}, {11, -6}, {1, -9} } },
	[86] = { .set = { {4, -7}, {3, -11}, {8, -9}, {-1, -8} } },
	[87] = { .set = { {5, -9}, {1, -12}, {6, -11}, {-1, -7} } },
	[88] = { .set = { {-1, -8}, {6, -11}, {-8, -11}, {-1, -7} } },
	[89] = { .set = { {-1, -7}, {5, -10}, {-7, -10}, {-1, -8} } },
	[90] = { .set = { {-1, -7}, {6, -10}, {-8, -10}, {-1, -8} } },
	[91] = { .set = { {-1, -9}, {6, -12}, {-8, -12}, {-1, -8} } },
	[92] = { .set = { {-6, -6}, {-5, -11}, {-10, -9}, {-1, -8} } },
	[93] = { .set = { {-7, -7}, {-5, -7}, {-12, -6}, {-2, -9} } },
	[94] = { .set = { {-5, -7}, {-4, -11}, {-9, -9}, {0, -8} } },
	[95] = { .set = { {-6, -9}, {-2, -12}, {-7, -11}, {0, -7} } },
	[96] = { .set = { {-9, -3}, {-9, -7}, {-5, -4}, {0, -7} } },
	[97] = { .set = { {-9, -3}, {-12, -4}, {-8, -1}, {0, -7} } },
	[98] = { .set = { {-9, -3}, {-8, -8}, {-4, -4}, {1, -7} } },
	[99] = { .set = { {-9, -6}, {-8, -9}, {-3, -6}, {2, -6} } },
	[100] = { .set = { {-7, -1}, {-10, -6}, {1, -2}, {0, -8} } },
	[101] = { .set = { {-8, -1}, {-13, -2}, {-2, 2}, {-2, -8} } },
	[102] = { .set = { {-6, -3}, {-9, -7}, {1, -4}, {0, -8} } },
	[103] = { .set = { {-7, -2}, {-9, -7}, {1, -3}, {1, -8} } },
	[104] = { .set = { {0, 0}, {-7, -3}, {7, -3}, {0, -9} } },
	[105] = { .set = { {0, 0}, {-6, 0}, {6, 0}, {0, -13} } },
	[106] = { .set = { {0, -2}, {-4, -2}, {4, -2}, {0, -10} } },
	[107] = { .set = { {6, -1}, {9, -6}, {-2, -2}, {-1, -8} } },
	[108] = { .set = { {5, -2}, {8, -2}, {-2, -3}, {-1, -12} } },
	[109] = { .set = { {2, -4}, {5, -4}, {-1, -3}, {-1, -9} } },
	[110] = { .set = { {8, -3}, {8, -7}, {4, -4}, {-1, -7} } },
	[111] = { .set = { {7, -2}, {8, -3}, {4, 1}, {-2, -12} } },
	[112] = { .set = { {4, -4}, {5, -6}, {4, -3}, {-2, -8} } },
	[113] = { .set = { {5, -6}, {4, -11}, {9, -9}, {0, -8} } },
	[114] = { .set = { {5, -3}, {3, -2}, {7, 0}, {0, -10} } },
	[115] = { .set = { {3, -6}, {0, -8}, {4, -5}, {-1, -8} } },
	[116] = { .set = { {-1, -8}, {6, -11}, {-8, -11}, {-1, -7} } },
	[117] = { .set = { {-1, -5}, {6, -4}, {-8, -4}, {-1, -10} } },
	[118] = { .set = { {-1, -6}, {4, -7}, {-6, -7}, {-1, -9} } },
	[119] = { .set = { {-6, -6}, {-5, -11}, {-10, -9}, {-1, -8} } },
	[120] = { .set = { {-6, -3}, {-4, -2}, {-8, 0}, {-1, -10} } },
	[121] = { .set = { {-4, -6}, {-1, -8}, {-5, -5}, {0, -8} } },
	[122] = { .set = { {-9, -3}, {-9, -7}, {-5, -4}, {0, -7} } },
	[123] = { .set = { {-8, -2}, {-9, -3}, {-5, 1}, {1, -12} } },
	[124] = { .set = { {-5, -4}, {-6, -6}, {-5, -3}, {1, -8} } },
	[125] = { .set = { {-7, -1}, {-10, -6}, {1, -2}, {0, -8} } },
	[126] = { .set = { {-6, -2}, {-9, -2}, {1, -3}, {0, -12} } },
	[127] = { .set = { {-3, -4}, {-6, -4}, {0, -3}, {0, -9} } },
	[128] = { .set = { {-4, -2}, {-7, -2}, {-2, 0}, {1, -7} } },
	[129] = { .set = { {-4, -2}, {-8, -1}, {-4, 1}, {0, -6} } },
	[130] = { .set = { {0, -4}, {-6, -9}, {6, -9}, {0, -11} } },
	[131] = { .set = { {5, -6}, {8, -12}, {-2, -8}, {-3, -9} } },
	[132] = { .set = { {8, -6}, {7, -10}, {3, -9}, {-3, -7} } },
	[133] = { .set = { {4, -9}, {2, -13}, {7, -11}, {-1, -8} } },
	[134] = { .set = { {0, -11}, {5, -14}, {-6, -14}, {0, -9} } },
	[135] = { .set = { {-5, -9}, {-3, -13}, {-8, -11}, {0, -8} } },
	[136] = { .set = { {-9, -6}, {-8, -10}, {-4, -9}, {2, -7} } },
	[137] = { .set = { {-6, -6}, {-9, -12}, {1, -8}, {2, -9} } },
	[138] = { .set = { {0, 0}, {-7, -3}, {7, -3}, {0, -9} } },
	[139] = { .set = { {0, 2}, {-6, 3}, {6, 3}, {0, -8} } },
	[140] = { .set = { {0, -1}, {-6, -4}, {6, -4}, {0, -10} } },
	[141] = { .set = { {6, -1}, {9, -6}, {-2, -2}, {-1, -8} } },
	[142] = { .set = { {7, -1}, {12, -2}, {1, 2}, {1, -8} } },
	[143] = { .set = { {5, -3}, {8, -7}, {-2, -4}, {-1, -8} } },
	[144] = { .set = { {8, -3}, {8, -7}, {4, -4}, {-1, -7} } },
	[145] = { .set = { {9, -3}, {12, -4}, {8, -1}, {0, -7} } },
	[146] = { .set = { {7, -3}, {6, -8}, {2, -4}, {-3, -7} } },
	[147] = { .set = { {5, -6}, {4, -11}, {9, -9}, {0, -8} } },
	[148] = { .set = { {6, -7}, {4, -7}, {11, -6}, {1, -9} } },
	[149] = { .set = { {4, -7}, {3, -11}, {8, -9}, {-1, -8} } },
	[150] = { .set = { {-1, -8}, {6, -11}, {-8, -11}, {-1, -7} } },
	[151] = { .set = { {-1, -7}, {5, -10}, {-7, -10}, {-1, -8} } },
	[152] = { .set = { {-1, -7}, {6, -10}, {-8, -10}, {-1, -8} } },
	[153] = { .set = { {-6, -6}, {-5, -11}, {-10, -9}, {-1, -8} } },
	[154] = { .set = { {-7, -7}, {-5, -7}, {-12, -6}, {-2, -9} } },
	[155] = { .set = { {-5, -7}, {-4, -11}, {-9, -9}, {0, -8} } },
	[156] = { .set = { {-9, -3}, {-9, -7}, {-5, -4}, {0, -7} } },
	[157] = { .set = { {-10, -3}, {-13, -4}, {-9, -1}, {-1, -7} } },
	[158] = { .set = { {-8, -3}, {-7, -8}, {-3, -4}, {2, -7} } },
	[159] = { .set = { {-7, -1}, {-10, -6}, {1, -2}, {0, -8} } },
	[160] = { .set = { {-8, -1}, {-13, -2}, {-2, 2}, {-2, -8} } },
	[161] = { .set = { {-6, -3}, {-9, -7}, {1, -4}, {0, -8} } },
	[162] = { .set = { {0, 0}, {-7, -3}, {7, -3}, {0, -9} } },
	[163] = { .set = { {-7, -1}, {-10, -6}, {1, -2}, {0, -8} } },
	[164] = { .set = { {-9, -3}, {-9, -7}, {-5, -4}, {0, -7} } },
	[165] = { .set = { {-6, -6}, {-5, -11}, {-10, -9}, {-1, -8} } },
	[166] = { .set = { {-1, -8}, {6, -11}, {-8, -11}, {-1, -7} } },
	[167] = { .set = { {5, -6}, {4, -11}, {9, -9}, {0, -8} } },
	[168] = { .set = { {8, -3}, {8, -7}, {4, -4}, {-1, -7} } },
	[169] = { .set = { {6, -1}, {9, -6}, {-2, -2}, {-1, -8} } },
	[170] = { .set = { {0, -1}, {-6, -4}, {6, -4}, {0, -10} } },
	[171] = { .set = { {6, -2}, {8, -7}, {-2, -3}, {-2, -8} } },
	[172] = { .set = { {8, -6}, {7, -9}, {2, -6}, {-3, -6} } },
	[173] = { .set = { {5, -9}, {1, -12}, {6, -11}, {-1, -7} } },
	[174] = { .set = { {-1, -9}, {6, -12}, {-8, -12}, {-1, -8} } },
	[175] = { .set = { {-6, -9}, {-2, -12}, {-7, -11}, {0, -7} } },
	[176] = { .set = { {-9, -6}, {-8, -9}, {-3, -6}, {2, -6} } },
	[177] = { .set = { {-7, -2}, {-9, -7}, {1, -3}, {1, -8} } },
	[178] = { .set = { {0, 0}, {-7, -3}, {7, -3}, {0, -9} } },
	[179] = { .set = { {0, -1}, {-6, -4}, {6, -4}, {0, -10} } },
	[180] = { .set = { {0, 2}, {-6, 3}, {6, 3}, {0, -8} } },
	[181] = { .set = { {6, -1}, {9, -6}, {-2, -2}, {-1, -8} } },
	[182] = { .set = { {6, -2}, {8, -7}, {-2, -3}, {-2, -8} } },
	[183] = { .set = { {5, -1}, {10, -2}, {-1, 2}, {-1, -8} } },
	[184] = { .set = { {8, -3}, {8, -7}, {4, -4}, {-1, -7} } },
	[185] = { .set = { {8, -6}, {7, -9}, {2, -6}, {-3, -6} } },
	[186] = { .set = { {8, -3}, {11, -4}, {7, -1}, {-1, -7} } },
	[187] = { .set = { {8, -3}, {7, -8}, {3, -4}, {-2, -7} } },
	[188] = { .set = { {5, -6}, {4, -11}, {9, -9}, {0, -8} } },
	[189] = { .set = { {5, -9}, {1, -12}, {6, -11}, {-1, -7} } },
	[190] = { .set = { {5, -7}, {3, -7}, {10, -6}, {0, -9} } },
	[191] = { .set = { {-1, -8}, {6, -11}, {-8, -11}, {-1, -7} } },
	[192] = { .set = { {-1, -9}, {6, -12}, {-8, -12}, {-1, -8} } },
	[193] = { .set = { {-1, -7}, {5, -10}, {-7, -10}, {-1, -8} } },
	[194] = { .set = { {-6, -6}, {-5, -11}, {-10, -9}, {-1, -8} } },
	[195] = { .set = { {-6, -9}, {-2, -12}, {-7, -11}, {0, -7} } },
	[196] = { .set = { {-6, -7}, {-4, -7}, {-11, -6}, {-1, -9} } },
	[197] = { .set = { {-9, -3}, {-9, -7}, {-5, -4}, {0, -7} } },
	[198] = { .set = { {-9, -6}, {-8, -9}, {-3, -6}, {2, -6} } },
	[199] = { .set = { {-9, -3}, {-12, -4}, {-8, -1}, {0, -7} } },
	[200] = { .set = { {-7, -1}, {-10, -6}, {1, -2}, {0, -8} } },
	[201] = { .set = { {-7, -2}, {-9, -7}, {1, -3}, {1, -8} } },
	[202] = { .set = { {-6, -1}, {-11, -2}, {0, 2}, {0, -8} } },
	[203] = { .set = { {0, 0}, {-7, -3}, {7, -3}, {0, -9} } },
	[204] = { .set = { {-7, -1}, {-10, -6}, {1, -2}, {0, -8} } },
	[205] = { .set = { {-9, -3}, {-9, -7}, {-5, -4}, {0, -7} } },
	[206] = { .set = { {-6, -6}, {-5, -11}, {-10, -9}, {-1, -8} } },
	[207] = { .set = { {-1, -8}, {6, -11}, {-8, -11}, {-1, -7} } },
	[208] = { .set = { {5, -6}, {4, -11}, {9, -9}, {0, -8} } },
	[209] = { .set = { {8, -3}, {8, -7}, {4, -4}, {-1, -7} } },
	[210] = { .set = { {6, -1}, {9, -6}, {-2, -2}, {-1, -8} } },
	[211] = { .set = { {0, 0}, {-7, -3}, {7, -3}, {0, -9} } },
	[212] = { .set = { {-7, -1}, {-10, -6}, {1, -2}, {0, -8} } },
	[213] = { .set = { {-9, -3}, {-9, -7}, {-5, -4}, {0, -7} } },
	[214] = { .set = { {-6, -6}, {-5, -11}, {-10, -9}, {-1, -8} } },
	[215] = { .set = { {-1, -8}, {6, -11}, {-8, -11}, {-1, -7} } },
	[216] = { .set = { {5, -6}, {4, -11}, {9, -9}, {0, -8} } },
	[217] = { .set = { {8, -3}, {8, -7}, {4, -4}, {-1, -7} } },
	[218] = { .set = { {6, -1}, {9, -6}, {-2, -2}, {-1, -8} } },
};

static const ax_anim *const sOmanyteAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02606),
	AX_ANIM_PTR(gAxSharedAnim_02682),
	AX_ANIM_PTR(gAxSharedAnim_02691),
	AX_ANIM_PTR(gAxSharedAnim_02701),
	AX_ANIM_PTR(gAxSharedAnim_02618),
	AX_ANIM_PTR(gAxSharedAnim_02641),
	AX_ANIM_PTR(gAxSharedAnim_02654),
	AX_ANIM_PTR(gAxSharedAnim_02663),
};

static const ax_anim *const sOmanyteAnimTable2[] = {
	AX_ANIM_PTR(sOmanyteAnims_2_1),
	AX_ANIM_PTR(sOmanyteAnims_2_2),
	AX_ANIM_PTR(sOmanyteAnims_2_3),
	AX_ANIM_PTR(sOmanyteAnims_2_4),
	AX_ANIM_PTR(gAxSharedAnim_01890),
	AX_ANIM_PTR(sOmanyteAnims_2_6),
	AX_ANIM_PTR(gAxSharedAnim_01932),
	AX_ANIM_PTR(sOmanyteAnims_2_8),
};

static const ax_anim *const sOmanyteAnimTable3[] = {
	AX_ANIM_PTR(sOmanyteAnims_3_1),
	AX_ANIM_PTR(sOmanyteAnims_3_2),
	AX_ANIM_PTR(sOmanyteAnims_3_3),
	AX_ANIM_PTR(sOmanyteAnims_3_4),
	AX_ANIM_PTR(sOmanyteAnims_3_5),
	AX_ANIM_PTR(sOmanyteAnims_3_6),
	AX_ANIM_PTR(gAxSharedAnim_02062),
	AX_ANIM_PTR(sOmanyteAnims_3_8),
};

static const ax_anim *const sOmanyteAnimTable4[] = {
	AX_ANIM_PTR(sOmanyteAnims_4_1),
	AX_ANIM_PTR(sOmanyteAnims_4_2),
	AX_ANIM_PTR(sOmanyteAnims_4_3),
	AX_ANIM_PTR(sOmanyteAnims_4_4),
	AX_ANIM_PTR(sOmanyteAnims_4_5),
	AX_ANIM_PTR(sOmanyteAnims_4_6),
	AX_ANIM_PTR(sOmanyteAnims_4_7),
	AX_ANIM_PTR(sOmanyteAnims_4_8),
};

static const ax_anim *const sOmanyteAnimTable5[] = {
	AX_ANIM_PTR(sOmanyteAnims_5_1),
	AX_ANIM_PTR(sOmanyteAnims_5_2),
	AX_ANIM_PTR(sOmanyteAnims_5_3),
	AX_ANIM_PTR(sOmanyteAnims_5_4),
	AX_ANIM_PTR(sOmanyteAnims_5_5),
	AX_ANIM_PTR(sOmanyteAnims_5_6),
	AX_ANIM_PTR(sOmanyteAnims_5_7),
	AX_ANIM_PTR(sOmanyteAnims_5_8),
};

static const ax_anim *const sOmanyteAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
};

static const ax_anim *const sOmanyteAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00396),
	AX_ANIM_PTR(gAxSharedAnim_00402),
	AX_ANIM_PTR(gAxSharedAnim_00413),
	AX_ANIM_PTR(gAxSharedAnim_00422),
	AX_ANIM_PTR(gAxSharedAnim_00434),
	AX_ANIM_PTR(gAxSharedAnim_00442),
	AX_ANIM_PTR(gAxSharedAnim_00451),
	AX_ANIM_PTR(gAxSharedAnim_00461),
};

static const ax_anim *const sOmanyteAnimTable8[] = {
	AX_ANIM_PTR(sOmanyteAnims_8_1),
	AX_ANIM_PTR(sOmanyteAnims_8_2),
	AX_ANIM_PTR(sOmanyteAnims_8_3),
	AX_ANIM_PTR(sOmanyteAnims_8_4),
	AX_ANIM_PTR(gAxSharedAnim_02368),
	AX_ANIM_PTR(sOmanyteAnims_8_6),
	AX_ANIM_PTR(gAxSharedAnim_02370),
	AX_ANIM_PTR(sOmanyteAnims_8_8),
};

static const ax_anim *const sOmanyteAnimTable9[] = {
	AX_ANIM_PTR(sOmanyteAnims_9_1),
	AX_ANIM_PTR(sOmanyteAnims_9_2),
	AX_ANIM_PTR(sOmanyteAnims_9_3),
	AX_ANIM_PTR(sOmanyteAnims_9_4),
	AX_ANIM_PTR(sOmanyteAnims_9_5),
	AX_ANIM_PTR(sOmanyteAnims_9_6),
	AX_ANIM_PTR(sOmanyteAnims_9_7),
	AX_ANIM_PTR(sOmanyteAnims_9_8),
};

static const ax_anim *const sOmanyteAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00801),
	AX_ANIM_PTR(gAxSharedAnim_00813),
	AX_ANIM_PTR(gAxSharedAnim_00827),
	AX_ANIM_PTR(gAxSharedAnim_00838),
	AX_ANIM_PTR(gAxSharedAnim_00849),
	AX_ANIM_PTR(gAxSharedAnim_00862),
	AX_ANIM_PTR(gAxSharedAnim_00879),
	AX_ANIM_PTR(gAxSharedAnim_00889),
};

static const ax_anim *const sOmanyteAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_00899),
	AX_ANIM_PTR(gAxSharedAnim_00939),
	AX_ANIM_PTR(gAxSharedAnim_00974),
	AX_ANIM_PTR(gAxSharedAnim_01039),
	AX_ANIM_PTR(gAxSharedAnim_01086),
	AX_ANIM_PTR(gAxSharedAnim_01135),
	AX_ANIM_PTR(gAxSharedAnim_01176),
	AX_ANIM_PTR(gAxSharedAnim_01213),
};

static const ax_anim *const sOmanyteAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01256),
	AX_ANIM_PTR(gAxSharedAnim_01336),
	AX_ANIM_PTR(gAxSharedAnim_01319),
	AX_ANIM_PTR(gAxSharedAnim_01307),
	AX_ANIM_PTR(gAxSharedAnim_01304),
	AX_ANIM_PTR(gAxSharedAnim_01290),
	AX_ANIM_PTR(gAxSharedAnim_01272),
	AX_ANIM_PTR(gAxSharedAnim_01257),
};

static const ax_anim *const sOmanyteAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01349),
	AX_ANIM_PTR(gAxSharedAnim_01418),
	AX_ANIM_PTR(gAxSharedAnim_01412),
	AX_ANIM_PTR(gAxSharedAnim_01398),
	AX_ANIM_PTR(gAxSharedAnim_01387),
	AX_ANIM_PTR(gAxSharedAnim_01375),
	AX_ANIM_PTR(gAxSharedAnim_01367),
	AX_ANIM_PTR(gAxSharedAnim_01359),
};

static const ax_anim *const *const sAxAnimationsOmanyte[] = {
	sOmanyteAnimTable1,
	sOmanyteAnimTable2,
	sOmanyteAnimTable3,
	sOmanyteAnimTable4,
	sOmanyteAnimTable5,
	sOmanyteAnimTable6,
	sOmanyteAnimTable7,
	sOmanyteAnimTable8,
	sOmanyteAnimTable9,
	sOmanyteAnimTable10,
	sOmanyteAnimTable11,
	sOmanyteAnimTable12,
	sOmanyteAnimTable13,
};

static const ax_sprite *const sAxSpritesOmanyte[] = {
	sOmanyteSprites1,
	sOmanyteSprites2,
	sOmanyteSprites3,
	sOmanyteSprites4,
	sOmanyteSprites5,
	sOmanyteSprites6,
	sOmanyteSprites7,
	sOmanyteSprites8,
	sOmanyteSprites9,
	sOmanyteSprites10,
	sOmanyteSprites11,
	sOmanyteSprites12,
	sOmanyteSprites13,
	sOmanyteSprites14,
	sOmanyteSprites15,
	sOmanyteSprites16,
	sOmanyteSprites17,
	sOmanyteSprites18,
	sOmanyteSprites19,
	sOmanyteSprites20,
	sOmanyteSprites21,
	sOmanyteSprites22,
	sOmanyteSprites23,
	sOmanyteSprites24,
	sOmanyteSprites25,
	sOmanyteSprites26,
	sOmanyteSprites27,
	sOmanyteSprites28,
	sOmanyteSprites29,
	sOmanyteSprites30,
	sOmanyteSprites31,
	sOmanyteSprites32,
	sOmanyteSprites33,
	sOmanyteSprites34,
	sOmanyteSprites35,
	sOmanyteSprites36,
	sOmanyteSprites37,
	sOmanyteSprites38,
};

static const axmain sAxMainOmanyte = {
	.poses = sAxPosesOmanyte,
	.animations = sAxAnimationsOmanyte,
	.animCount = ARRAY_COUNT(sAxAnimationsOmanyte),
	.spriteData = sAxSpritesOmanyte,
	.positions = sAxPositionsOmanyte,
};
