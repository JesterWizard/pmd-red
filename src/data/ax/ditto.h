/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainDitto;
const SiroArchive gAxDitto = {"SIRO", &sAxMainDitto};

static const ax_pose sDittoPose1[] = {
	AX_POSE(0, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose2[] = {
	AX_POSE(1, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose3[] = {
	AX_POSE(2, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose4[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose5[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose6[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose7[] = {
	AX_POSE(6, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose8[] = {
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose9[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose10[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose11[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose12[] = {
	AX_POSE(11, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose13[] = {
	AX_POSE(12, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose14[] = {
	AX_POSE(13, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose15[] = {
	AX_POSE(14, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose16[] = {
	AX_POSE(15, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose17[] = {
	AX_POSE(16, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose18[] = {
	AX_POSE(17, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose19[] = {
	AX_POSE(18, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose20[] = {
	AX_POSE(19, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose21[] = {
	AX_POSE(20, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose22[] = {
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose23[] = {
	AX_POSE(22, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose24[] = {
	AX_POSE(23, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose74[] = {
	AX_POSE(22, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose75[] = {
	AX_POSE(19, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose76[] = {
	AX_POSE(16, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose77[] = {
	AX_POSE(13, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose78[] = {
	AX_POSE(10, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose79[] = {
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose89[] = {
	AX_POSE(24, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose90[] = {
	AX_POSE(25, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose91[] = {
	AX_POSE(26, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose92[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose93[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose94[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose95[] = {
	AX_POSE(30, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose96[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose97[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose98[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose115[] = {
	AX_POSE(2, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose116[] = {
	AX_POSE(23, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose117[] = {
	AX_POSE(20, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose118[] = {
	AX_POSE(17, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose119[] = {
	AX_POSE(14, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose120[] = {
	AX_POSE(11, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose121[] = {
	AX_POSE(8, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose126[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose128[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose136[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose139[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose142[] = {
	AX_POSE(11, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose147[] = {
	AX_POSE(16, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose148[] = {
	AX_POSE(17, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDittoPose151[] = {
	AX_POSE(20, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const u8 sDittoAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_1_1.lz");
static const u8 sDittoAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_1_2.lz");
static const u8 sDittoAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_1_3.lz");
static const u8 sDittoAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_1_4.lz");
static const u8 sDittoAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_1_5.lz");
static const u8 sDittoAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_1_6.lz");
static const u8 sDittoAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_1_7.lz");
static const u8 sDittoAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_1_8.lz");
static const u8 sDittoAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_2_1.lz");
static const u8 sDittoAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_2_2.lz");
static const u8 sDittoAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_2_3.lz");
static const u8 sDittoAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_2_4.lz");
static const u8 sDittoAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_2_5.lz");
static const u8 sDittoAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_2_6.lz");
static const u8 sDittoAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_2_7.lz");
static const u8 sDittoAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_2_8.lz");
static const u8 sDittoAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_3_1.lz");
static const u8 sDittoAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_3_2.lz");
static const u8 sDittoAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_3_3.lz");
static const u8 sDittoAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_3_4.lz");
static const u8 sDittoAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_3_5.lz");
static const u8 sDittoAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_3_6.lz");
static const u8 sDittoAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_3_7.lz");
static const u8 sDittoAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_3_8.lz");
static const u8 sDittoAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_8_1.lz");
static const u8 sDittoAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_8_2.lz");
static const u8 sDittoAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_8_3.lz");
static const u8 sDittoAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_8_4.lz");
static const u8 sDittoAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_8_5.lz");
static const u8 sDittoAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_8_6.lz");
static const u8 sDittoAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_8_7.lz");
static const u8 sDittoAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_8_8.lz");
static const u8 sDittoAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_9_1.lz");
static const u8 sDittoAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_9_2.lz");
static const u8 sDittoAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_9_3.lz");
static const u8 sDittoAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_9_4.lz");
static const u8 sDittoAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_9_5.lz");
static const u8 sDittoAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_9_6.lz");
static const u8 sDittoAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_9_7.lz");
static const u8 sDittoAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_9_8.lz");
static const u8 sDittoAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_11_1.lz");
static const u8 sDittoAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_11_2.lz");
static const u8 sDittoAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_11_3.lz");
static const u8 sDittoAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_11_4.lz");
static const u8 sDittoAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_11_5.lz");
static const u8 sDittoAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_11_6.lz");
static const u8 sDittoAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_11_7.lz");
static const u8 sDittoAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ditto/sDittoAnims_11_8.lz");

static const u8 sDittoGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_1.4bpp.lz");
static const ax_sprite sDittoSprites1[] = {
	{sDittoGfx1, ARRAY_COUNT(sDittoGfx1)}, 
	{NULL, 0}
};
static const u8 sDittoGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_2.4bpp.lz");
static const ax_sprite sDittoSprites2[] = {
	{sDittoGfx2, ARRAY_COUNT(sDittoGfx2)}, 
	{NULL, 0}
};
static const u8 sDittoGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_3.4bpp.lz");
static const ax_sprite sDittoSprites3[] = {
	{sDittoGfx3, ARRAY_COUNT(sDittoGfx3)}, 
	{NULL, 0}
};
static const u8 sDittoGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_4.4bpp.lz");
static const ax_sprite sDittoSprites4[] = {
	{sDittoGfx4, ARRAY_COUNT(sDittoGfx4)}, 
	{NULL, 0}
};
static const u8 sDittoGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_5.4bpp.lz");
static const ax_sprite sDittoSprites5[] = {
	{sDittoGfx5, ARRAY_COUNT(sDittoGfx5)}, 
	{NULL, 0}
};
static const u8 sDittoGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_6.4bpp.lz");
static const ax_sprite sDittoSprites6[] = {
	{sDittoGfx6, ARRAY_COUNT(sDittoGfx6)}, 
	{NULL, 0}
};
static const u8 sDittoGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_7.4bpp.lz");
static const ax_sprite sDittoSprites7[] = {
	{sDittoGfx7, ARRAY_COUNT(sDittoGfx7)}, 
	{NULL, 0}
};
static const u8 sDittoGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_8.4bpp.lz");
static const ax_sprite sDittoSprites8[] = {
	{sDittoGfx8, ARRAY_COUNT(sDittoGfx8)}, 
	{NULL, 0}
};
static const u8 sDittoGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_9.4bpp.lz");
static const ax_sprite sDittoSprites9[] = {
	{sDittoGfx9, ARRAY_COUNT(sDittoGfx9)}, 
	{NULL, 0}
};
static const u8 sDittoGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_10.4bpp.lz");
static const ax_sprite sDittoSprites10[] = {
	{sDittoGfx10, ARRAY_COUNT(sDittoGfx10)}, 
	{NULL, 0}
};
static const u8 sDittoGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_11.4bpp.lz");
static const ax_sprite sDittoSprites11[] = {
	{sDittoGfx11, ARRAY_COUNT(sDittoGfx11)}, 
	{NULL, 0}
};
static const u8 sDittoGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_12.4bpp.lz");
static const ax_sprite sDittoSprites12[] = {
	{sDittoGfx12, ARRAY_COUNT(sDittoGfx12)}, 
	{NULL, 0}
};
static const u8 sDittoGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_13.4bpp.lz");
static const ax_sprite sDittoSprites13[] = {
	{sDittoGfx13, ARRAY_COUNT(sDittoGfx13)}, 
	{NULL, 0}
};
static const u8 sDittoGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_14.4bpp.lz");
static const ax_sprite sDittoSprites14[] = {
	{sDittoGfx14, ARRAY_COUNT(sDittoGfx14)}, 
	{NULL, 0}
};
static const u8 sDittoGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_15.4bpp.lz");
static const ax_sprite sDittoSprites15[] = {
	{sDittoGfx15, ARRAY_COUNT(sDittoGfx15)}, 
	{NULL, 0}
};
static const u8 sDittoGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_16.4bpp.lz");
static const ax_sprite sDittoSprites16[] = {
	{sDittoGfx16, ARRAY_COUNT(sDittoGfx16)}, 
	{NULL, 0}
};
static const u8 sDittoGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_17.4bpp.lz");
static const ax_sprite sDittoSprites17[] = {
	{sDittoGfx17, ARRAY_COUNT(sDittoGfx17)}, 
	{NULL, 0}
};
static const u8 sDittoGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_18.4bpp.lz");
static const ax_sprite sDittoSprites18[] = {
	{sDittoGfx18, ARRAY_COUNT(sDittoGfx18)}, 
	{NULL, 0}
};
static const u8 sDittoGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_19.4bpp.lz");
static const ax_sprite sDittoSprites19[] = {
	{sDittoGfx19, ARRAY_COUNT(sDittoGfx19)}, 
	{NULL, 0}
};
static const u8 sDittoGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_20.4bpp.lz");
static const ax_sprite sDittoSprites20[] = {
	{sDittoGfx20, ARRAY_COUNT(sDittoGfx20)}, 
	{NULL, 0}
};
static const u8 sDittoGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_21.4bpp.lz");
static const ax_sprite sDittoSprites21[] = {
	{sDittoGfx21, ARRAY_COUNT(sDittoGfx21)}, 
	{NULL, 0}
};
static const u8 sDittoGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_22.4bpp.lz");
static const ax_sprite sDittoSprites22[] = {
	{sDittoGfx22, ARRAY_COUNT(sDittoGfx22)}, 
	{NULL, 0}
};
static const u8 sDittoGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_23.4bpp.lz");
static const ax_sprite sDittoSprites23[] = {
	{sDittoGfx23, ARRAY_COUNT(sDittoGfx23)}, 
	{NULL, 0}
};
static const u8 sDittoGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_24.4bpp.lz");
static const ax_sprite sDittoSprites24[] = {
	{sDittoGfx24, ARRAY_COUNT(sDittoGfx24)}, 
	{NULL, 0}
};
static const u8 sDittoGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_25.4bpp.lz");
static const ax_sprite sDittoSprites25[] = {
	{sDittoGfx25, ARRAY_COUNT(sDittoGfx25)}, 
	{NULL, 0}
};
static const u8 sDittoGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_26.4bpp.lz");
static const ax_sprite sDittoSprites26[] = {
	{sDittoGfx26, ARRAY_COUNT(sDittoGfx26)}, 
	{NULL, 0}
};
static const u8 sDittoGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_27.4bpp.lz");
static const ax_sprite sDittoSprites27[] = {
	{sDittoGfx27, ARRAY_COUNT(sDittoGfx27)}, 
	{NULL, 0}
};
static const u8 sDittoGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_28.4bpp.lz");
static const ax_sprite sDittoSprites28[] = {
	{sDittoGfx28, ARRAY_COUNT(sDittoGfx28)}, 
	{NULL, 0}
};
static const u8 sDittoGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_29.4bpp.lz");
static const ax_sprite sDittoSprites29[] = {
	{sDittoGfx29, ARRAY_COUNT(sDittoGfx29)}, 
	{NULL, 0}
};
static const u8 sDittoGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_30.4bpp.lz");
static const ax_sprite sDittoSprites30[] = {
	{sDittoGfx30, ARRAY_COUNT(sDittoGfx30)}, 
	{NULL, 0}
};
static const u8 sDittoGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ditto/sprite_31.4bpp.lz");
static const ax_sprite sDittoSprites31[] = {
	{sDittoGfx31, ARRAY_COUNT(sDittoGfx31)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesDitto[] = {
	sDittoPose1,
	sDittoPose2,
	sDittoPose3,
	sDittoPose4,
	sDittoPose5,
	sDittoPose6,
	sDittoPose7,
	sDittoPose8,
	sDittoPose9,
	sDittoPose10,
	sDittoPose11,
	sDittoPose12,
	sDittoPose13,
	sDittoPose14,
	sDittoPose15,
	sDittoPose16,
	sDittoPose17,
	sDittoPose18,
	sDittoPose19,
	sDittoPose20,
	sDittoPose21,
	sDittoPose22,
	sDittoPose23,
	sDittoPose24,
	sDittoPose1,
	sDittoPose2,
	sDittoPose3,
	sDittoPose4,
	sDittoPose5,
	sDittoPose6,
	sDittoPose7,
	sDittoPose8,
	sDittoPose9,
	sDittoPose10,
	sDittoPose11,
	sDittoPose12,
	sDittoPose13,
	sDittoPose14,
	sDittoPose15,
	sDittoPose16,
	sDittoPose17,
	sDittoPose18,
	sDittoPose19,
	sDittoPose20,
	sDittoPose21,
	sDittoPose22,
	sDittoPose23,
	sDittoPose24,
	sDittoPose1,
	sDittoPose2,
	sDittoPose3,
	sDittoPose4,
	sDittoPose5,
	sDittoPose6,
	sDittoPose7,
	sDittoPose8,
	sDittoPose9,
	sDittoPose10,
	sDittoPose11,
	sDittoPose12,
	sDittoPose13,
	sDittoPose14,
	sDittoPose15,
	sDittoPose16,
	sDittoPose17,
	sDittoPose18,
	sDittoPose19,
	sDittoPose20,
	sDittoPose21,
	sDittoPose22,
	sDittoPose23,
	sDittoPose24,
	sDittoPose2,
	sDittoPose74,
	sDittoPose75,
	sDittoPose76,
	sDittoPose77,
	sDittoPose78,
	sDittoPose79,
	sDittoPose5,
	sDittoPose1,
	sDittoPose22,
	sDittoPose19,
	sDittoPose16,
	sDittoPose13,
	sDittoPose10,
	sDittoPose7,
	sDittoPose4,
	sDittoPose89,
	sDittoPose90,
	sDittoPose91,
	sDittoPose92,
	sDittoPose93,
	sDittoPose94,
	sDittoPose95,
	sDittoPose96,
	sDittoPose97,
	sDittoPose98,
	sDittoPose1,
	sDittoPose2,
	sDittoPose4,
	sDittoPose5,
	sDittoPose7,
	sDittoPose8,
	sDittoPose10,
	sDittoPose11,
	sDittoPose13,
	sDittoPose14,
	sDittoPose16,
	sDittoPose17,
	sDittoPose19,
	sDittoPose20,
	sDittoPose22,
	sDittoPose23,
	sDittoPose115,
	sDittoPose116,
	sDittoPose117,
	sDittoPose118,
	sDittoPose119,
	sDittoPose120,
	sDittoPose121,
	sDittoPose6,
	sDittoPose91,
	sDittoPose92,
	sDittoPose93,
	sDittoPose126,
	sDittoPose95,
	sDittoPose128,
	sDittoPose97,
	sDittoPose98,
	sDittoPose1,
	sDittoPose2,
	sDittoPose3,
	sDittoPose4,
	sDittoPose5,
	sDittoPose136,
	sDittoPose7,
	sDittoPose79,
	sDittoPose139,
	sDittoPose10,
	sDittoPose11,
	sDittoPose142,
	sDittoPose13,
	sDittoPose14,
	sDittoPose15,
	sDittoPose16,
	sDittoPose147,
	sDittoPose148,
	sDittoPose19,
	sDittoPose75,
	sDittoPose151,
	sDittoPose22,
	sDittoPose74,
	sDittoPose116,
	sDittoPose2,
	sDittoPose74,
	sDittoPose75,
	sDittoPose76,
	sDittoPose77,
	sDittoPose78,
	sDittoPose79,
	sDittoPose5,
	sDittoPose1,
	sDittoPose22,
	sDittoPose19,
	sDittoPose16,
	sDittoPose13,
	sDittoPose10,
	sDittoPose7,
	sDittoPose4,
};

static const struct PositionSets sAxPositionsDitto[] = {
	[0] = { .set = { {-1, -5}, {-8, -12}, {8, -8}, {-1, -4} } },
	[1] = { .set = { {-1, -4}, {-8, -11}, {8, -6}, {-1, -3} } },
	[2] = { .set = { {-1, -1}, {-7, -10}, {8, -6}, {-1, 0} } },
	[3] = { .set = { {2, -5}, {-8, -8}, {6, -11}, {-1, -5} } },
	[4] = { .set = { {3, -4}, {-9, -9}, {6, -9}, {-2, -6} } },
	[5] = { .set = { {4, -3}, {-8, -8}, {5, -10}, {-2, -5} } },
	[6] = { .set = { {4, -6}, {-1, -7}, {-1, -12}, {-1, -5} } },
	[7] = { .set = { {6, -5}, {-2, -7}, {-2, -13}, {0, -5} } },
	[8] = { .set = { {8, -5}, {-1, -6}, {0, -12}, {2, -4} } },
	[9] = { .set = { {3, -7}, {7, -8}, {-6, -11}, {-1, -5} } },
	[10] = { .set = { {3, -7}, {5, -7}, {-7, -10}, {-1, -5} } },
	[11] = { .set = { {4, -7}, {6, -7}, {-7, -8}, {0, -4} } },
	[12] = { .set = { {-1, -8}, {7, -12}, {-8, -7}, {0, -6} } },
	[13] = { .set = { {-1, -8}, {8, -11}, {-8, -8}, {0, -6} } },
	[14] = { .set = { {-1, -6}, {8, -10}, {-8, -7}, {0, -4} } },
	[15] = { .set = { {-1, -6}, {5, -15}, {-6, -6}, {1, -7} } },
	[16] = { .set = { {-4, -8}, {6, -14}, {-7, -6}, {-1, -6} } },
	[17] = { .set = { {-5, -7}, {5, -11}, {-8, -6}, {-2, -6} } },
	[18] = { .set = { {-5, -6}, {-1, -16}, {0, -5}, {0, -6} } },
	[19] = { .set = { {-7, -5}, {0, -16}, {-2, -4}, {-2, -5} } },
	[20] = { .set = { {-10, -5}, {0, -13}, {-5, -3}, {-5, -4} } },
	[21] = { .set = { {-3, -6}, {-5, -14}, {7, -5}, {-1, -5} } },
	[22] = { .set = { {-4, -5}, {-5, -13}, {5, -9}, {-1, -5} } },
	[23] = { .set = { {-5, -3}, {-3, -13}, {5, -7}, {-3, -4} } },
	[24] = { .set = { {-1, -5}, {-8, -12}, {8, -8}, {-1, -4} } },
	[25] = { .set = { {-1, -4}, {-8, -11}, {8, -6}, {-1, -3} } },
	[26] = { .set = { {-1, -1}, {-7, -10}, {8, -6}, {-1, 0} } },
	[27] = { .set = { {2, -5}, {-8, -8}, {6, -11}, {-1, -5} } },
	[28] = { .set = { {3, -4}, {-9, -9}, {6, -9}, {-2, -6} } },
	[29] = { .set = { {4, -3}, {-8, -8}, {5, -10}, {-2, -5} } },
	[30] = { .set = { {4, -6}, {-1, -7}, {-1, -12}, {-1, -5} } },
	[31] = { .set = { {6, -5}, {-2, -7}, {-2, -13}, {0, -5} } },
	[32] = { .set = { {8, -5}, {-1, -6}, {0, -12}, {2, -4} } },
	[33] = { .set = { {3, -7}, {7, -8}, {-6, -11}, {-1, -5} } },
	[34] = { .set = { {3, -7}, {5, -7}, {-7, -10}, {-1, -5} } },
	[35] = { .set = { {4, -7}, {6, -7}, {-7, -8}, {0, -4} } },
	[36] = { .set = { {-1, -8}, {7, -12}, {-8, -7}, {0, -6} } },
	[37] = { .set = { {-1, -8}, {8, -11}, {-8, -8}, {0, -6} } },
	[38] = { .set = { {-1, -6}, {8, -10}, {-8, -7}, {0, -4} } },
	[39] = { .set = { {-1, -6}, {5, -15}, {-6, -6}, {1, -7} } },
	[40] = { .set = { {-4, -8}, {6, -14}, {-7, -6}, {-1, -6} } },
	[41] = { .set = { {-5, -7}, {5, -11}, {-8, -6}, {-2, -6} } },
	[42] = { .set = { {-5, -6}, {-1, -16}, {0, -5}, {0, -6} } },
	[43] = { .set = { {-7, -5}, {0, -16}, {-2, -4}, {-2, -5} } },
	[44] = { .set = { {-10, -5}, {0, -13}, {-5, -3}, {-5, -4} } },
	[45] = { .set = { {-3, -6}, {-5, -14}, {7, -5}, {-1, -5} } },
	[46] = { .set = { {-4, -5}, {-5, -13}, {5, -9}, {-1, -5} } },
	[47] = { .set = { {-5, -3}, {-3, -13}, {5, -7}, {-3, -4} } },
	[48] = { .set = { {-1, -5}, {-8, -12}, {8, -8}, {-1, -4} } },
	[49] = { .set = { {-1, -4}, {-8, -11}, {8, -6}, {-1, -3} } },
	[50] = { .set = { {-1, -1}, {-7, -10}, {8, -6}, {-1, 0} } },
	[51] = { .set = { {2, -5}, {-8, -8}, {6, -11}, {-1, -5} } },
	[52] = { .set = { {3, -4}, {-9, -9}, {6, -9}, {-2, -6} } },
	[53] = { .set = { {4, -3}, {-8, -8}, {5, -10}, {-2, -5} } },
	[54] = { .set = { {4, -6}, {-1, -7}, {-1, -12}, {-1, -5} } },
	[55] = { .set = { {6, -5}, {-2, -7}, {-2, -13}, {0, -5} } },
	[56] = { .set = { {8, -5}, {-1, -6}, {0, -12}, {2, -4} } },
	[57] = { .set = { {3, -7}, {7, -8}, {-6, -11}, {-1, -5} } },
	[58] = { .set = { {3, -7}, {5, -7}, {-7, -10}, {-1, -5} } },
	[59] = { .set = { {4, -7}, {6, -7}, {-7, -8}, {0, -4} } },
	[60] = { .set = { {-1, -8}, {7, -12}, {-8, -7}, {0, -6} } },
	[61] = { .set = { {-1, -8}, {8, -11}, {-8, -8}, {0, -6} } },
	[62] = { .set = { {-1, -6}, {8, -10}, {-8, -7}, {0, -4} } },
	[63] = { .set = { {-1, -6}, {5, -15}, {-6, -6}, {1, -7} } },
	[64] = { .set = { {-4, -8}, {6, -14}, {-7, -6}, {-1, -6} } },
	[65] = { .set = { {-5, -7}, {5, -11}, {-8, -6}, {-2, -6} } },
	[66] = { .set = { {-5, -6}, {-1, -16}, {0, -5}, {0, -6} } },
	[67] = { .set = { {-7, -5}, {0, -16}, {-2, -4}, {-2, -5} } },
	[68] = { .set = { {-10, -5}, {0, -13}, {-5, -3}, {-5, -4} } },
	[69] = { .set = { {-3, -6}, {-5, -14}, {7, -5}, {-1, -5} } },
	[70] = { .set = { {-4, -5}, {-5, -13}, {5, -9}, {-1, -5} } },
	[71] = { .set = { {-5, -3}, {-3, -13}, {5, -7}, {-3, -4} } },
	[72] = { .set = { {-1, -4}, {-8, -11}, {8, -6}, {-1, -3} } },
	[73] = { .set = { {-3, -5}, {-4, -13}, {6, -9}, {0, -5} } },
	[74] = { .set = { {-5, -5}, {2, -16}, {0, -4}, {0, -5} } },
	[75] = { .set = { {-3, -7}, {7, -13}, {-6, -5}, {0, -5} } },
	[76] = { .set = { {-1, -6}, {8, -9}, {-8, -6}, {0, -4} } },
	[77] = { .set = { {2, -6}, {4, -6}, {-8, -9}, {-2, -4} } },
	[78] = { .set = { {4, -5}, {-4, -7}, {-4, -13}, {-2, -5} } },
	[79] = { .set = { {3, -4}, {-9, -9}, {6, -9}, {-2, -6} } },
	[80] = { .set = { {-1, -5}, {-8, -12}, {8, -8}, {-1, -4} } },
	[81] = { .set = { {-3, -6}, {-5, -14}, {7, -5}, {-1, -5} } },
	[82] = { .set = { {-5, -6}, {-1, -16}, {0, -5}, {0, -6} } },
	[83] = { .set = { {-1, -6}, {5, -15}, {-6, -6}, {1, -7} } },
	[84] = { .set = { {-1, -8}, {7, -12}, {-8, -7}, {0, -6} } },
	[85] = { .set = { {3, -7}, {7, -8}, {-6, -11}, {-1, -5} } },
	[86] = { .set = { {4, -6}, {-1, -7}, {-1, -12}, {-1, -5} } },
	[87] = { .set = { {2, -5}, {-8, -8}, {6, -11}, {-1, -5} } },
	[88] = { .set = { {0, -1}, {-9, -5}, {10, -4}, {0, -3} } },
	[89] = { .set = { {0, 0}, {-8, -3}, {10, -3}, {0, -2} } },
	[90] = { .set = { {0, -10}, {-7, -16}, {11, -15}, {0, -8} } },
	[91] = { .set = { {0, -10}, {5, -19}, {-10, -12}, {0, -9} } },
	[92] = { .set = { {2, -10}, {3, -20}, {-5, -13}, {0, -8} } },
	[93] = { .set = { {3, -12}, {-5, -18}, {8, -13}, {1, -8} } },
	[94] = { .set = { {-1, -13}, {7, -16}, {-10, -15}, {-1, -10} } },
	[95] = { .set = { {-4, -12}, {4, -18}, {-9, -13}, {-2, -8} } },
	[96] = { .set = { {-3, -10}, {-4, -20}, {4, -13}, {-1, -8} } },
	[97] = { .set = { {-1, -10}, {-6, -19}, {9, -12}, {-1, -9} } },
	[98] = { .set = { {-1, -5}, {-8, -12}, {8, -8}, {-1, -4} } },
	[99] = { .set = { {-1, -4}, {-8, -11}, {8, -6}, {-1, -3} } },
	[100] = { .set = { {2, -5}, {-8, -8}, {6, -11}, {-1, -5} } },
	[101] = { .set = { {3, -4}, {-9, -9}, {6, -9}, {-2, -6} } },
	[102] = { .set = { {4, -6}, {-1, -7}, {-1, -12}, {-1, -5} } },
	[103] = { .set = { {6, -5}, {-2, -7}, {-2, -13}, {0, -5} } },
	[104] = { .set = { {3, -7}, {7, -8}, {-6, -11}, {-1, -5} } },
	[105] = { .set = { {3, -7}, {5, -7}, {-7, -10}, {-1, -5} } },
	[106] = { .set = { {-1, -8}, {7, -12}, {-8, -7}, {0, -6} } },
	[107] = { .set = { {-1, -8}, {8, -11}, {-8, -8}, {0, -6} } },
	[108] = { .set = { {-1, -6}, {5, -15}, {-6, -6}, {1, -7} } },
	[109] = { .set = { {-4, -8}, {6, -14}, {-7, -6}, {-1, -6} } },
	[110] = { .set = { {-5, -6}, {-1, -16}, {0, -5}, {0, -6} } },
	[111] = { .set = { {-7, -5}, {0, -16}, {-2, -4}, {-2, -5} } },
	[112] = { .set = { {-3, -6}, {-5, -14}, {7, -5}, {-1, -5} } },
	[113] = { .set = { {-4, -5}, {-5, -13}, {5, -9}, {-1, -5} } },
	[114] = { .set = { {-1, -2}, {-7, -11}, {8, -7}, {-1, -1} } },
	[115] = { .set = { {-3, -3}, {-1, -13}, {7, -7}, {-1, -4} } },
	[116] = { .set = { {-6, -4}, {4, -12}, {-1, -2}, {-1, -3} } },
	[117] = { .set = { {-2, -5}, {8, -9}, {-5, -4}, {1, -4} } },
	[118] = { .set = { {0, -4}, {9, -8}, {-7, -5}, {1, -2} } },
	[119] = { .set = { {3, -6}, {5, -6}, {-8, -7}, {-1, -3} } },
	[120] = { .set = { {6, -4}, {-3, -5}, {-2, -11}, {0, -3} } },
	[121] = { .set = { {4, -3}, {-8, -8}, {5, -10}, {-2, -5} } },
	[122] = { .set = { {0, -10}, {-7, -16}, {11, -15}, {0, -8} } },
	[123] = { .set = { {0, -10}, {5, -19}, {-10, -12}, {0, -9} } },
	[124] = { .set = { {2, -10}, {3, -20}, {-5, -13}, {0, -8} } },
	[125] = { .set = { {2, -12}, {-6, -18}, {7, -13}, {0, -8} } },
	[126] = { .set = { {-1, -13}, {7, -16}, {-10, -15}, {-1, -10} } },
	[127] = { .set = { {-3, -12}, {5, -18}, {-8, -13}, {-1, -8} } },
	[128] = { .set = { {-3, -10}, {-4, -20}, {4, -13}, {-1, -8} } },
	[129] = { .set = { {-1, -10}, {-6, -19}, {9, -12}, {-1, -9} } },
	[130] = { .set = { {-1, -5}, {-8, -12}, {8, -8}, {-1, -4} } },
	[131] = { .set = { {-1, -4}, {-8, -11}, {8, -6}, {-1, -3} } },
	[132] = { .set = { {-1, -1}, {-7, -10}, {8, -6}, {-1, 0} } },
	[133] = { .set = { {2, -5}, {-8, -8}, {6, -11}, {-1, -5} } },
	[134] = { .set = { {3, -4}, {-9, -9}, {6, -9}, {-2, -6} } },
	[135] = { .set = { {3, -3}, {-9, -8}, {4, -10}, {-3, -5} } },
	[136] = { .set = { {4, -6}, {-1, -7}, {-1, -12}, {-1, -5} } },
	[137] = { .set = { {4, -5}, {-4, -7}, {-4, -13}, {-2, -5} } },
	[138] = { .set = { {5, -5}, {-4, -6}, {-3, -12}, {-1, -4} } },
	[139] = { .set = { {3, -7}, {7, -8}, {-6, -11}, {-1, -5} } },
	[140] = { .set = { {3, -7}, {5, -7}, {-7, -10}, {-1, -5} } },
	[141] = { .set = { {3, -7}, {5, -7}, {-8, -8}, {-1, -4} } },
	[142] = { .set = { {-1, -8}, {7, -12}, {-8, -7}, {0, -6} } },
	[143] = { .set = { {-1, -8}, {8, -11}, {-8, -8}, {0, -6} } },
	[144] = { .set = { {-1, -6}, {8, -10}, {-8, -7}, {0, -4} } },
	[145] = { .set = { {-1, -6}, {5, -15}, {-6, -6}, {1, -7} } },
	[146] = { .set = { {-2, -8}, {8, -14}, {-5, -6}, {1, -6} } },
	[147] = { .set = { {-1, -7}, {9, -11}, {-4, -6}, {2, -6} } },
	[148] = { .set = { {-5, -6}, {-1, -16}, {0, -5}, {0, -6} } },
	[149] = { .set = { {-5, -5}, {2, -16}, {0, -4}, {0, -5} } },
	[150] = { .set = { {-6, -5}, {4, -13}, {-1, -3}, {-1, -4} } },
	[151] = { .set = { {-3, -6}, {-5, -14}, {7, -5}, {-1, -5} } },
	[152] = { .set = { {-3, -5}, {-4, -13}, {6, -9}, {0, -5} } },
	[153] = { .set = { {-3, -3}, {-1, -13}, {7, -7}, {-1, -4} } },
	[154] = { .set = { {-1, -4}, {-8, -11}, {8, -6}, {-1, -3} } },
	[155] = { .set = { {-3, -5}, {-4, -13}, {6, -9}, {0, -5} } },
	[156] = { .set = { {-5, -5}, {2, -16}, {0, -4}, {0, -5} } },
	[157] = { .set = { {-3, -7}, {7, -13}, {-6, -5}, {0, -5} } },
	[158] = { .set = { {-1, -6}, {8, -9}, {-8, -6}, {0, -4} } },
	[159] = { .set = { {2, -6}, {4, -6}, {-8, -9}, {-2, -4} } },
	[160] = { .set = { {4, -5}, {-4, -7}, {-4, -13}, {-2, -5} } },
	[161] = { .set = { {3, -4}, {-9, -9}, {6, -9}, {-2, -6} } },
	[162] = { .set = { {-1, -5}, {-8, -12}, {8, -8}, {-1, -4} } },
	[163] = { .set = { {-3, -6}, {-5, -14}, {7, -5}, {-1, -5} } },
	[164] = { .set = { {-5, -6}, {-1, -16}, {0, -5}, {0, -6} } },
	[165] = { .set = { {-1, -6}, {5, -15}, {-6, -6}, {1, -7} } },
	[166] = { .set = { {-1, -8}, {7, -12}, {-8, -7}, {0, -6} } },
	[167] = { .set = { {3, -7}, {7, -8}, {-6, -11}, {-1, -5} } },
	[168] = { .set = { {4, -6}, {-1, -7}, {-1, -12}, {-1, -5} } },
	[169] = { .set = { {2, -5}, {-8, -8}, {6, -11}, {-1, -5} } },
};

static const ax_anim *const sDittoAnimTable1[] = {
	AX_ANIM_PTR(sDittoAnims_1_1),
	AX_ANIM_PTR(sDittoAnims_1_2),
	AX_ANIM_PTR(sDittoAnims_1_3),
	AX_ANIM_PTR(sDittoAnims_1_4),
	AX_ANIM_PTR(sDittoAnims_1_5),
	AX_ANIM_PTR(sDittoAnims_1_6),
	AX_ANIM_PTR(sDittoAnims_1_7),
	AX_ANIM_PTR(sDittoAnims_1_8),
};

static const ax_anim *const sDittoAnimTable2[] = {
	AX_ANIM_PTR(sDittoAnims_2_1),
	AX_ANIM_PTR(sDittoAnims_2_2),
	AX_ANIM_PTR(sDittoAnims_2_3),
	AX_ANIM_PTR(sDittoAnims_2_4),
	AX_ANIM_PTR(sDittoAnims_2_5),
	AX_ANIM_PTR(sDittoAnims_2_6),
	AX_ANIM_PTR(sDittoAnims_2_7),
	AX_ANIM_PTR(sDittoAnims_2_8),
};

static const ax_anim *const sDittoAnimTable3[] = {
	AX_ANIM_PTR(sDittoAnims_3_1),
	AX_ANIM_PTR(sDittoAnims_3_2),
	AX_ANIM_PTR(sDittoAnims_3_3),
	AX_ANIM_PTR(sDittoAnims_3_4),
	AX_ANIM_PTR(sDittoAnims_3_5),
	AX_ANIM_PTR(sDittoAnims_3_6),
	AX_ANIM_PTR(sDittoAnims_3_7),
	AX_ANIM_PTR(sDittoAnims_3_8),
};

static const ax_anim *const sDittoAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_02094),
	AX_ANIM_PTR(gAxSharedAnim_02142),
	AX_ANIM_PTR(gAxSharedAnim_02128),
	AX_ANIM_PTR(gAxSharedAnim_02124),
	AX_ANIM_PTR(gAxSharedAnim_02122),
	AX_ANIM_PTR(gAxSharedAnim_02113),
	AX_ANIM_PTR(gAxSharedAnim_02101),
	AX_ANIM_PTR(gAxSharedAnim_02095),
};

static const ax_anim *const sDittoAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_02147),
	AX_ANIM_PTR(gAxSharedAnim_02206),
	AX_ANIM_PTR(gAxSharedAnim_02200),
	AX_ANIM_PTR(gAxSharedAnim_02192),
	AX_ANIM_PTR(gAxSharedAnim_02181),
	AX_ANIM_PTR(gAxSharedAnim_02171),
	AX_ANIM_PTR(gAxSharedAnim_02165),
	AX_ANIM_PTR(gAxSharedAnim_02156),
};

static const ax_anim *const sDittoAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
};

static const ax_anim *const sDittoAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_02235),
	AX_ANIM_PTR(gAxSharedAnim_02243),
	AX_ANIM_PTR(gAxSharedAnim_02255),
	AX_ANIM_PTR(gAxSharedAnim_02264),
	AX_ANIM_PTR(gAxSharedAnim_02278),
	AX_ANIM_PTR(gAxSharedAnim_02289),
	AX_ANIM_PTR(gAxSharedAnim_02295),
	AX_ANIM_PTR(gAxSharedAnim_02302),
};

static const ax_anim *const sDittoAnimTable8[] = {
	AX_ANIM_PTR(sDittoAnims_8_1),
	AX_ANIM_PTR(sDittoAnims_8_2),
	AX_ANIM_PTR(sDittoAnims_8_3),
	AX_ANIM_PTR(sDittoAnims_8_4),
	AX_ANIM_PTR(sDittoAnims_8_5),
	AX_ANIM_PTR(sDittoAnims_8_6),
	AX_ANIM_PTR(sDittoAnims_8_7),
	AX_ANIM_PTR(sDittoAnims_8_8),
};

static const ax_anim *const sDittoAnimTable9[] = {
	AX_ANIM_PTR(sDittoAnims_9_1),
	AX_ANIM_PTR(sDittoAnims_9_2),
	AX_ANIM_PTR(sDittoAnims_9_3),
	AX_ANIM_PTR(sDittoAnims_9_4),
	AX_ANIM_PTR(sDittoAnims_9_5),
	AX_ANIM_PTR(sDittoAnims_9_6),
	AX_ANIM_PTR(sDittoAnims_9_7),
	AX_ANIM_PTR(sDittoAnims_9_8),
};

static const ax_anim *const sDittoAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00335),
	AX_ANIM_PTR(gAxSharedAnim_00343),
	AX_ANIM_PTR(gAxSharedAnim_00353),
	AX_ANIM_PTR(gAxSharedAnim_00359),
	AX_ANIM_PTR(gAxSharedAnim_00365),
	AX_ANIM_PTR(gAxSharedAnim_00374),
	AX_ANIM_PTR(gAxSharedAnim_00379),
	AX_ANIM_PTR(gAxSharedAnim_00388),
};

static const ax_anim *const sDittoAnimTable11[] = {
	AX_ANIM_PTR(sDittoAnims_11_1),
	AX_ANIM_PTR(sDittoAnims_11_2),
	AX_ANIM_PTR(sDittoAnims_11_3),
	AX_ANIM_PTR(sDittoAnims_11_4),
	AX_ANIM_PTR(sDittoAnims_11_5),
	AX_ANIM_PTR(sDittoAnims_11_6),
	AX_ANIM_PTR(sDittoAnims_11_7),
	AX_ANIM_PTR(sDittoAnims_11_8),
};

static const ax_anim *const sDittoAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_00613),
	AX_ANIM_PTR(gAxSharedAnim_00688),
	AX_ANIM_PTR(gAxSharedAnim_00669),
	AX_ANIM_PTR(gAxSharedAnim_00656),
	AX_ANIM_PTR(gAxSharedAnim_00655),
	AX_ANIM_PTR(gAxSharedAnim_00644),
	AX_ANIM_PTR(gAxSharedAnim_00627),
	AX_ANIM_PTR(gAxSharedAnim_00614),
};

static const ax_anim *const sDittoAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_00706),
	AX_ANIM_PTR(gAxSharedAnim_00780),
	AX_ANIM_PTR(gAxSharedAnim_00773),
	AX_ANIM_PTR(gAxSharedAnim_00761),
	AX_ANIM_PTR(gAxSharedAnim_00751),
	AX_ANIM_PTR(gAxSharedAnim_00739),
	AX_ANIM_PTR(gAxSharedAnim_00727),
	AX_ANIM_PTR(gAxSharedAnim_00715),
};

static const ax_anim *const *const sAxAnimationsDitto[] = {
	sDittoAnimTable1,
	sDittoAnimTable2,
	sDittoAnimTable3,
	sDittoAnimTable4,
	sDittoAnimTable5,
	sDittoAnimTable6,
	sDittoAnimTable7,
	sDittoAnimTable8,
	sDittoAnimTable9,
	sDittoAnimTable10,
	sDittoAnimTable11,
	sDittoAnimTable12,
	sDittoAnimTable13,
};

static const ax_sprite *const sAxSpritesDitto[] = {
	sDittoSprites1,
	sDittoSprites2,
	sDittoSprites3,
	sDittoSprites4,
	sDittoSprites5,
	sDittoSprites6,
	sDittoSprites7,
	sDittoSprites8,
	sDittoSprites9,
	sDittoSprites10,
	sDittoSprites11,
	sDittoSprites12,
	sDittoSprites13,
	sDittoSprites14,
	sDittoSprites15,
	sDittoSprites16,
	sDittoSprites17,
	sDittoSprites18,
	sDittoSprites19,
	sDittoSprites20,
	sDittoSprites21,
	sDittoSprites22,
	sDittoSprites23,
	sDittoSprites24,
	sDittoSprites25,
	sDittoSprites26,
	sDittoSprites27,
	sDittoSprites28,
	sDittoSprites29,
	sDittoSprites30,
	sDittoSprites31,
};

static const axmain sAxMainDitto = {
	.poses = sAxPosesDitto,
	.animations = sAxAnimationsDitto,
	.animCount = ARRAY_COUNT(sAxAnimationsDitto),
	.spriteData = sAxSpritesDitto,
	.positions = sAxPositionsDitto,
};
