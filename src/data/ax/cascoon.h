/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainCascoon;
const SiroArchive gAxCascoon = {"SIRO", &sAxMainCascoon};

static const ax_pose sCascoonPose1[] = {
	AX_POSE(0, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose2[] = {
	AX_POSE(1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose3[] = {
	AX_POSE(2, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose4[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose5[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose6[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose7[] = {
	AX_POSE(6, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose8[] = {
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose42[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose44[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose46[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose48[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose50[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose52[] = {
	AX_POSE(13, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose54[] = {
	AX_POSE(14, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose56[] = {
	AX_POSE(15, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose57[] = {
	AX_POSE(16, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose58[] = {
	AX_POSE(17, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose59[] = {
	AX_POSE(18, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose60[] = {
	AX_POSE(19, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose61[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose62[] = {
	AX_POSE(21, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose63[] = {
	AX_POSE(22, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose64[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose65[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCascoonPose66[] = {
	AX_POSE(19, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const u8 sCascoonAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_2_1.lz");
static const u8 sCascoonAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_2_2.lz");
static const u8 sCascoonAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_2_3.lz");
static const u8 sCascoonAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_2_4.lz");
static const u8 sCascoonAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_2_5.lz");
static const u8 sCascoonAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_2_6.lz");
static const u8 sCascoonAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_2_7.lz");
static const u8 sCascoonAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_2_8.lz");
static const u8 sCascoonAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_3_1.lz");
static const u8 sCascoonAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_3_2.lz");
static const u8 sCascoonAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_3_3.lz");
static const u8 sCascoonAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_3_4.lz");
static const u8 sCascoonAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_3_5.lz");
static const u8 sCascoonAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_3_6.lz");
static const u8 sCascoonAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_3_7.lz");
static const u8 sCascoonAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_3_8.lz");
static const u8 sCascoonAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_4_1.lz");
static const u8 sCascoonAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_4_2.lz");
static const u8 sCascoonAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_4_3.lz");
static const u8 sCascoonAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_4_4.lz");
static const u8 sCascoonAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_4_5.lz");
static const u8 sCascoonAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_4_6.lz");
static const u8 sCascoonAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_4_7.lz");
static const u8 sCascoonAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_4_8.lz");
static const u8 sCascoonAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_5_2.lz");
static const u8 sCascoonAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_5_4.lz");
static const u8 sCascoonAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_5_5.lz");
static const u8 sCascoonAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_5_6.lz");
static const u8 sCascoonAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_5_7.lz");
static const u8 sCascoonAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_5_8.lz");
static const u8 sCascoonAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_8_1.lz");
static const u8 sCascoonAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_8_2.lz");
static const u8 sCascoonAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_8_3.lz");
static const u8 sCascoonAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_8_4.lz");
static const u8 sCascoonAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_8_5.lz");
static const u8 sCascoonAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_8_6.lz");
static const u8 sCascoonAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_8_7.lz");
static const u8 sCascoonAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_8_8.lz");
static const u8 sCascoonAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_9_1.lz");
static const u8 sCascoonAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_9_2.lz");
static const u8 sCascoonAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_9_3.lz");
static const u8 sCascoonAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_9_4.lz");
static const u8 sCascoonAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_9_5.lz");
static const u8 sCascoonAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_9_6.lz");
static const u8 sCascoonAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_9_7.lz");
static const u8 sCascoonAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_9_8.lz");
static const u8 sCascoonAnims_10_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_10_1.lz");
static const u8 sCascoonAnims_10_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_10_2.lz");
static const u8 sCascoonAnims_10_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_10_3.lz");
static const u8 sCascoonAnims_10_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_10_4.lz");
static const u8 sCascoonAnims_10_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_10_5.lz");
static const u8 sCascoonAnims_10_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_10_6.lz");
static const u8 sCascoonAnims_10_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_10_7.lz");
static const u8 sCascoonAnims_10_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_10_8.lz");
static const u8 sCascoonAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_11_1.lz");
static const u8 sCascoonAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_11_2.lz");
static const u8 sCascoonAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_11_3.lz");
static const u8 sCascoonAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_11_4.lz");
static const u8 sCascoonAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_11_5.lz");
static const u8 sCascoonAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_11_6.lz");
static const u8 sCascoonAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_11_7.lz");
static const u8 sCascoonAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_11_8.lz");
static const u8 sCascoonAnims_12_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cascoon/sCascoonAnims_12_2.lz");

static const u8 sCascoonGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_1.4bpp.lz");
static const ax_sprite sCascoonSprites1[] = {
	{sCascoonGfx1, ARRAY_COUNT(sCascoonGfx1)}, 
	{NULL, 0}
};
static const u8 sCascoonGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_2.4bpp.lz");
static const ax_sprite sCascoonSprites2[] = {
	{sCascoonGfx2, ARRAY_COUNT(sCascoonGfx2)}, 
	{NULL, 0}
};
static const u8 sCascoonGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_3.4bpp.lz");
static const ax_sprite sCascoonSprites3[] = {
	{sCascoonGfx3, ARRAY_COUNT(sCascoonGfx3)}, 
	{NULL, 0}
};
static const u8 sCascoonGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_4.4bpp.lz");
static const ax_sprite sCascoonSprites4[] = {
	{sCascoonGfx4, ARRAY_COUNT(sCascoonGfx4)}, 
	{NULL, 0}
};
static const u8 sCascoonGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_5.4bpp.lz");
static const ax_sprite sCascoonSprites5[] = {
	{sCascoonGfx5, ARRAY_COUNT(sCascoonGfx5)}, 
	{NULL, 0}
};
static const u8 sCascoonGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_6.4bpp.lz");
static const ax_sprite sCascoonSprites6[] = {
	{sCascoonGfx6, ARRAY_COUNT(sCascoonGfx6)}, 
	{NULL, 0}
};
static const u8 sCascoonGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_7.4bpp.lz");
static const ax_sprite sCascoonSprites7[] = {
	{sCascoonGfx7, ARRAY_COUNT(sCascoonGfx7)}, 
	{NULL, 0}
};
static const u8 sCascoonGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_8.4bpp.lz");
static const ax_sprite sCascoonSprites8[] = {
	{sCascoonGfx8, ARRAY_COUNT(sCascoonGfx8)}, 
	{NULL, 0}
};
static const u8 sCascoonGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_9.4bpp.lz");
static const u8 sCascoonGfx9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_9_1.4bpp.lz");
static const u8 sCascoonGfx9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_9_2.4bpp.lz");
static const ax_sprite sCascoonSprites9[] = {
	{sCascoonGfx9, ARRAY_COUNT(sCascoonGfx9)}, 
	{NULL, 32}, 
	{sCascoonGfx9_1, ARRAY_COUNT(sCascoonGfx9_1)}, 
	{NULL, 32}, 
	{sCascoonGfx9_2, ARRAY_COUNT(sCascoonGfx9_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCascoonGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_10.4bpp.lz");
static const u8 sCascoonGfx10_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_10_1.4bpp.lz");
static const u8 sCascoonGfx10_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_10_2.4bpp.lz");
static const u8 sCascoonGfx10_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_10_3.4bpp.lz");
static const ax_sprite sCascoonSprites10[] = {
	{sCascoonGfx10, ARRAY_COUNT(sCascoonGfx10)}, 
	{NULL, 32}, 
	{sCascoonGfx10_1, ARRAY_COUNT(sCascoonGfx10_1)}, 
	{NULL, 32}, 
	{sCascoonGfx10_2, ARRAY_COUNT(sCascoonGfx10_2)}, 
	{NULL, 32}, 
	{sCascoonGfx10_3, ARRAY_COUNT(sCascoonGfx10_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCascoonGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_11.4bpp.lz");
static const u8 sCascoonGfx11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_11_1.4bpp.lz");
static const u8 sCascoonGfx11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_11_2.4bpp.lz");
static const u8 sCascoonGfx11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_11_3.4bpp.lz");
static const ax_sprite sCascoonSprites11[] = {
	{NULL, 32}, 
	{sCascoonGfx11, ARRAY_COUNT(sCascoonGfx11)}, 
	{NULL, 32}, 
	{sCascoonGfx11_1, ARRAY_COUNT(sCascoonGfx11_1)}, 
	{NULL, 32}, 
	{sCascoonGfx11_2, ARRAY_COUNT(sCascoonGfx11_2)}, 
	{NULL, 32}, 
	{sCascoonGfx11_3, ARRAY_COUNT(sCascoonGfx11_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCascoonGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_12.4bpp.lz");
static const u8 sCascoonGfx12_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_12_1.4bpp.lz");
static const u8 sCascoonGfx12_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_12_2.4bpp.lz");
static const u8 sCascoonGfx12_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_12_3.4bpp.lz");
static const ax_sprite sCascoonSprites12[] = {
	{sCascoonGfx12, ARRAY_COUNT(sCascoonGfx12)}, 
	{NULL, 32}, 
	{sCascoonGfx12_1, ARRAY_COUNT(sCascoonGfx12_1)}, 
	{NULL, 32}, 
	{sCascoonGfx12_2, ARRAY_COUNT(sCascoonGfx12_2)}, 
	{NULL, 32}, 
	{sCascoonGfx12_3, ARRAY_COUNT(sCascoonGfx12_3)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sCascoonGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_13.4bpp.lz");
static const u8 sCascoonGfx13_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_13_1.4bpp.lz");
static const u8 sCascoonGfx13_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_13_2.4bpp.lz");
static const ax_sprite sCascoonSprites13[] = {
	{sCascoonGfx13, ARRAY_COUNT(sCascoonGfx13)}, 
	{NULL, 32}, 
	{sCascoonGfx13_1, ARRAY_COUNT(sCascoonGfx13_1)}, 
	{NULL, 32}, 
	{sCascoonGfx13_2, ARRAY_COUNT(sCascoonGfx13_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCascoonGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_14.4bpp.lz");
static const u8 sCascoonGfx14_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_14_1.4bpp.lz");
static const u8 sCascoonGfx14_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_14_2.4bpp.lz");
static const ax_sprite sCascoonSprites14[] = {
	{NULL, 32}, 
	{sCascoonGfx14, ARRAY_COUNT(sCascoonGfx14)}, 
	{NULL, 32}, 
	{sCascoonGfx14_1, ARRAY_COUNT(sCascoonGfx14_1)}, 
	{NULL, 32}, 
	{sCascoonGfx14_2, ARRAY_COUNT(sCascoonGfx14_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCascoonGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_15.4bpp.lz");
static const u8 sCascoonGfx15_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_15_1.4bpp.lz");
static const u8 sCascoonGfx15_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_15_2.4bpp.lz");
static const u8 sCascoonGfx15_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_15_3.4bpp.lz");
static const ax_sprite sCascoonSprites15[] = {
	{sCascoonGfx15, ARRAY_COUNT(sCascoonGfx15)}, 
	{NULL, 32}, 
	{sCascoonGfx15_1, ARRAY_COUNT(sCascoonGfx15_1)}, 
	{NULL, 32}, 
	{sCascoonGfx15_2, ARRAY_COUNT(sCascoonGfx15_2)}, 
	{NULL, 32}, 
	{sCascoonGfx15_3, ARRAY_COUNT(sCascoonGfx15_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCascoonGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_16.4bpp.lz");
static const u8 sCascoonGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_16_1.4bpp.lz");
static const u8 sCascoonGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_16_2.4bpp.lz");
static const ax_sprite sCascoonSprites16[] = {
	{sCascoonGfx16, ARRAY_COUNT(sCascoonGfx16)}, 
	{NULL, 32}, 
	{sCascoonGfx16_1, ARRAY_COUNT(sCascoonGfx16_1)}, 
	{NULL, 64}, 
	{sCascoonGfx16_2, ARRAY_COUNT(sCascoonGfx16_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCascoonGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_17.4bpp.lz");
static const ax_sprite sCascoonSprites17[] = {
	{sCascoonGfx17, ARRAY_COUNT(sCascoonGfx17)}, 
	{NULL, 0}
};
static const u8 sCascoonGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_18.4bpp.lz");
static const ax_sprite sCascoonSprites18[] = {
	{sCascoonGfx18, ARRAY_COUNT(sCascoonGfx18)}, 
	{NULL, 0}
};
static const u8 sCascoonGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_19.4bpp.lz");
static const ax_sprite sCascoonSprites19[] = {
	{sCascoonGfx19, ARRAY_COUNT(sCascoonGfx19)}, 
	{NULL, 0}
};
static const u8 sCascoonGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_20.4bpp.lz");
static const ax_sprite sCascoonSprites20[] = {
	{sCascoonGfx20, ARRAY_COUNT(sCascoonGfx20)}, 
	{NULL, 0}
};
static const u8 sCascoonGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_21.4bpp.lz");
static const ax_sprite sCascoonSprites21[] = {
	{sCascoonGfx21, ARRAY_COUNT(sCascoonGfx21)}, 
	{NULL, 0}
};
static const u8 sCascoonGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_22.4bpp.lz");
static const ax_sprite sCascoonSprites22[] = {
	{sCascoonGfx22, ARRAY_COUNT(sCascoonGfx22)}, 
	{NULL, 0}
};
static const u8 sCascoonGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cascoon/sprite_23.4bpp.lz");
static const ax_sprite sCascoonSprites23[] = {
	{sCascoonGfx23, ARRAY_COUNT(sCascoonGfx23)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesCascoon[] = {
	sCascoonPose1,
	sCascoonPose2,
	sCascoonPose3,
	sCascoonPose4,
	sCascoonPose5,
	sCascoonPose6,
	sCascoonPose7,
	sCascoonPose8,
	sCascoonPose1,
	sCascoonPose8,
	sCascoonPose7,
	sCascoonPose6,
	sCascoonPose5,
	sCascoonPose4,
	sCascoonPose3,
	sCascoonPose2,
	sCascoonPose1,
	sCascoonPose2,
	sCascoonPose3,
	sCascoonPose4,
	sCascoonPose5,
	sCascoonPose6,
	sCascoonPose7,
	sCascoonPose8,
	sCascoonPose1,
	sCascoonPose2,
	sCascoonPose3,
	sCascoonPose4,
	sCascoonPose5,
	sCascoonPose6,
	sCascoonPose7,
	sCascoonPose8,
	sCascoonPose1,
	sCascoonPose8,
	sCascoonPose7,
	sCascoonPose6,
	sCascoonPose5,
	sCascoonPose4,
	sCascoonPose3,
	sCascoonPose2,
	sCascoonPose1,
	sCascoonPose42,
	sCascoonPose2,
	sCascoonPose44,
	sCascoonPose3,
	sCascoonPose46,
	sCascoonPose4,
	sCascoonPose48,
	sCascoonPose5,
	sCascoonPose50,
	sCascoonPose6,
	sCascoonPose52,
	sCascoonPose7,
	sCascoonPose54,
	sCascoonPose8,
	sCascoonPose56,
	sCascoonPose57,
	sCascoonPose58,
	sCascoonPose59,
	sCascoonPose60,
	sCascoonPose61,
	sCascoonPose62,
	sCascoonPose63,
	sCascoonPose64,
	sCascoonPose65,
	sCascoonPose66,
	sCascoonPose1,
	sCascoonPose2,
	sCascoonPose3,
	sCascoonPose4,
	sCascoonPose5,
	sCascoonPose6,
	sCascoonPose7,
	sCascoonPose8,
	sCascoonPose1,
	sCascoonPose8,
	sCascoonPose7,
	sCascoonPose6,
	sCascoonPose5,
	sCascoonPose4,
	sCascoonPose3,
	sCascoonPose2,
	sCascoonPose42,
	sCascoonPose56,
	sCascoonPose54,
	sCascoonPose52,
	sCascoonPose50,
	sCascoonPose48,
	sCascoonPose46,
	sCascoonPose44,
	sCascoonPose42,
	sCascoonPose44,
	sCascoonPose46,
	sCascoonPose48,
	sCascoonPose50,
	sCascoonPose52,
	sCascoonPose54,
	sCascoonPose56,
	sCascoonPose1,
	sCascoonPose42,
	sCascoonPose2,
	sCascoonPose44,
	sCascoonPose3,
	sCascoonPose46,
	sCascoonPose4,
	sCascoonPose48,
	sCascoonPose5,
	sCascoonPose50,
	sCascoonPose6,
	sCascoonPose52,
	sCascoonPose7,
	sCascoonPose54,
	sCascoonPose8,
	sCascoonPose56,
	sCascoonPose1,
	sCascoonPose8,
	sCascoonPose7,
	sCascoonPose6,
	sCascoonPose5,
	sCascoonPose4,
	sCascoonPose3,
	sCascoonPose2,
	sCascoonPose1,
	sCascoonPose8,
	sCascoonPose7,
	sCascoonPose6,
	sCascoonPose5,
	sCascoonPose4,
	sCascoonPose3,
	sCascoonPose2,
};

static const struct PositionSets sAxPositionsCascoon[] = {
	[0] = { .set = { {0, -2}, {-7, -7}, {7, -7}, {0, -7} } },
	[1] = { .set = { {4, -2}, {-5, -6}, {4, -10}, {0, -7} } },
	[2] = { .set = { {4, -2}, {-2, -5}, {-2, -11}, {0, -6} } },
	[3] = { .set = { {4, -5}, {3, -5}, {-5, -9}, {0, -7} } },
	[4] = { .set = { {0, -6}, {8, -8}, {-8, -8}, {0, -7} } },
	[5] = { .set = { {-5, -5}, {3, -9}, {-4, -6}, {0, -7} } },
	[6] = { .set = { {-5, -2}, {0, -9}, {2, -3}, {0, -7} } },
	[7] = { .set = { {-4, -2}, {-4, -8}, {7, -5}, {0, -7} } },
	[8] = { .set = { {0, -2}, {-7, -7}, {7, -7}, {0, -7} } },
	[9] = { .set = { {-4, -2}, {-4, -8}, {7, -5}, {0, -7} } },
	[10] = { .set = { {-5, -2}, {0, -9}, {2, -3}, {0, -7} } },
	[11] = { .set = { {-5, -5}, {3, -9}, {-4, -6}, {0, -7} } },
	[12] = { .set = { {0, -6}, {8, -8}, {-8, -8}, {0, -7} } },
	[13] = { .set = { {4, -5}, {3, -5}, {-5, -9}, {0, -7} } },
	[14] = { .set = { {4, -2}, {-2, -5}, {-2, -11}, {0, -6} } },
	[15] = { .set = { {4, -2}, {-5, -6}, {4, -10}, {0, -7} } },
	[16] = { .set = { {0, -2}, {-7, -7}, {7, -7}, {0, -7} } },
	[17] = { .set = { {4, -2}, {-5, -6}, {4, -10}, {0, -7} } },
	[18] = { .set = { {4, -2}, {-2, -5}, {-2, -11}, {0, -6} } },
	[19] = { .set = { {4, -5}, {3, -5}, {-5, -9}, {0, -7} } },
	[20] = { .set = { {0, -6}, {8, -8}, {-8, -8}, {0, -7} } },
	[21] = { .set = { {-5, -5}, {3, -9}, {-4, -6}, {0, -7} } },
	[22] = { .set = { {-5, -2}, {0, -9}, {2, -3}, {0, -7} } },
	[23] = { .set = { {-4, -2}, {-4, -8}, {7, -5}, {0, -7} } },
	[24] = { .set = { {0, -2}, {-7, -7}, {7, -7}, {0, -7} } },
	[25] = { .set = { {4, -2}, {-5, -6}, {4, -10}, {0, -7} } },
	[26] = { .set = { {4, -2}, {-2, -5}, {-2, -11}, {0, -6} } },
	[27] = { .set = { {4, -5}, {3, -5}, {-5, -9}, {0, -7} } },
	[28] = { .set = { {0, -6}, {8, -8}, {-8, -8}, {0, -7} } },
	[29] = { .set = { {-5, -5}, {3, -9}, {-4, -6}, {0, -7} } },
	[30] = { .set = { {-5, -2}, {0, -9}, {2, -3}, {0, -7} } },
	[31] = { .set = { {-4, -2}, {-4, -8}, {7, -5}, {0, -7} } },
	[32] = { .set = { {0, -2}, {-7, -7}, {7, -7}, {0, -7} } },
	[33] = { .set = { {-4, -2}, {-4, -8}, {7, -5}, {0, -7} } },
	[34] = { .set = { {-5, -2}, {0, -9}, {2, -3}, {0, -7} } },
	[35] = { .set = { {-5, -5}, {3, -9}, {-4, -6}, {0, -7} } },
	[36] = { .set = { {0, -6}, {8, -8}, {-8, -8}, {0, -7} } },
	[37] = { .set = { {4, -5}, {3, -5}, {-5, -9}, {0, -7} } },
	[38] = { .set = { {4, -2}, {-2, -5}, {-2, -11}, {0, -6} } },
	[39] = { .set = { {4, -2}, {-5, -6}, {4, -10}, {0, -7} } },
	[40] = { .set = { {0, -2}, {-7, -7}, {7, -7}, {0, -7} } },
	[41] = { .set = { {0, -2}, {-7, -7}, {7, -7}, {0, -7} } },
	[42] = { .set = { {4, -2}, {-5, -6}, {4, -10}, {0, -7} } },
	[43] = { .set = { {4, -2}, {-6, -6}, {4, -10}, {0, -7} } },
	[44] = { .set = { {4, -2}, {-2, -5}, {-2, -11}, {0, -6} } },
	[45] = { .set = { {4, -2}, {-1, -4}, {-1, -10}, {0, -6} } },
	[46] = { .set = { {4, -5}, {3, -5}, {-5, -9}, {0, -7} } },
	[47] = { .set = { {5, -5}, {4, -5}, {-5, -9}, {-1, -7} } },
	[48] = { .set = { {0, -6}, {8, -8}, {-8, -8}, {0, -7} } },
	[49] = { .set = { {0, -6}, {8, -8}, {-8, -8}, {0, -7} } },
	[50] = { .set = { {-5, -5}, {3, -9}, {-4, -6}, {0, -7} } },
	[51] = { .set = { {-5, -5}, {4, -9}, {-4, -6}, {0, -7} } },
	[52] = { .set = { {-5, -2}, {0, -9}, {2, -3}, {0, -7} } },
	[53] = { .set = { {-5, -2}, {0, -10}, {2, -3}, {0, -6} } },
	[54] = { .set = { {-4, -2}, {-4, -8}, {7, -5}, {0, -7} } },
	[55] = { .set = { {-4, -2}, {-4, -9}, {7, -7}, {0, -7} } },
	[56] = { .set = { {3, -4}, {7, -5}, {-5, -7}, {0, -5} } },
	[57] = { .set = { {3, -4}, {7, -4}, {-5, -7}, {0, -5} } },
	[58] = { .set = { {0, -6}, {-8, -9}, {8, -9}, {0, -9} } },
	[59] = { .set = { {3, -8}, {3, -11}, {-8, -6}, {-1, -7} } },
	[60] = { .set = { {7, -9}, {-1, -10}, {-6, -7}, {-1, -8} } },
	[61] = { .set = { {6, -14}, {-4, -12}, {3, -7}, {0, -10} } },
	[62] = { .set = { {0, -11}, {7, -8}, {-7, -8}, {0, -10} } },
	[63] = { .set = { {-7, -13}, {3, -11}, {-4, -6}, {-1, -9} } },
	[64] = { .set = { {-8, -9}, {0, -10}, {5, -7}, {0, -8} } },
	[65] = { .set = { {-4, -8}, {-4, -11}, {7, -6}, {0, -7} } },
	[66] = { .set = { {0, -2}, {-7, -7}, {7, -7}, {0, -7} } },
	[67] = { .set = { {4, -2}, {-5, -6}, {4, -10}, {0, -7} } },
	[68] = { .set = { {4, -2}, {-2, -5}, {-2, -11}, {0, -6} } },
	[69] = { .set = { {4, -5}, {3, -5}, {-5, -9}, {0, -7} } },
	[70] = { .set = { {0, -6}, {8, -8}, {-8, -8}, {0, -7} } },
	[71] = { .set = { {-5, -5}, {3, -9}, {-4, -6}, {0, -7} } },
	[72] = { .set = { {-5, -2}, {0, -9}, {2, -3}, {0, -7} } },
	[73] = { .set = { {-4, -2}, {-4, -8}, {7, -5}, {0, -7} } },
	[74] = { .set = { {0, -2}, {-7, -7}, {7, -7}, {0, -7} } },
	[75] = { .set = { {-4, -2}, {-4, -8}, {7, -5}, {0, -7} } },
	[76] = { .set = { {-5, -2}, {0, -9}, {2, -3}, {0, -7} } },
	[77] = { .set = { {-5, -5}, {3, -9}, {-4, -6}, {0, -7} } },
	[78] = { .set = { {0, -6}, {8, -8}, {-8, -8}, {0, -7} } },
	[79] = { .set = { {4, -5}, {3, -5}, {-5, -9}, {0, -7} } },
	[80] = { .set = { {4, -2}, {-2, -5}, {-2, -11}, {0, -6} } },
	[81] = { .set = { {4, -2}, {-5, -6}, {4, -10}, {0, -7} } },
	[82] = { .set = { {0, -2}, {-7, -7}, {7, -7}, {0, -7} } },
	[83] = { .set = { {-4, -2}, {-4, -9}, {7, -7}, {0, -7} } },
	[84] = { .set = { {-5, -2}, {0, -10}, {2, -3}, {0, -6} } },
	[85] = { .set = { {-5, -5}, {4, -9}, {-4, -6}, {0, -7} } },
	[86] = { .set = { {0, -6}, {8, -8}, {-8, -8}, {0, -7} } },
	[87] = { .set = { {5, -5}, {4, -5}, {-5, -9}, {-1, -7} } },
	[88] = { .set = { {4, -2}, {-1, -4}, {-1, -10}, {0, -6} } },
	[89] = { .set = { {4, -2}, {-6, -6}, {4, -10}, {0, -7} } },
	[90] = { .set = { {0, -2}, {-7, -7}, {7, -7}, {0, -7} } },
	[91] = { .set = { {4, -2}, {-6, -6}, {4, -10}, {0, -7} } },
	[92] = { .set = { {4, -2}, {-1, -4}, {-1, -10}, {0, -6} } },
	[93] = { .set = { {5, -5}, {4, -5}, {-5, -9}, {-1, -7} } },
	[94] = { .set = { {0, -6}, {8, -8}, {-8, -8}, {0, -7} } },
	[95] = { .set = { {-5, -5}, {4, -9}, {-4, -6}, {0, -7} } },
	[96] = { .set = { {-5, -2}, {0, -10}, {2, -3}, {0, -6} } },
	[97] = { .set = { {-4, -2}, {-4, -9}, {7, -7}, {0, -7} } },
	[98] = { .set = { {0, -2}, {-7, -7}, {7, -7}, {0, -7} } },
	[99] = { .set = { {0, -2}, {-7, -7}, {7, -7}, {0, -7} } },
	[100] = { .set = { {4, -2}, {-5, -6}, {4, -10}, {0, -7} } },
	[101] = { .set = { {4, -2}, {-6, -6}, {4, -10}, {0, -7} } },
	[102] = { .set = { {4, -2}, {-2, -5}, {-2, -11}, {0, -6} } },
	[103] = { .set = { {4, -2}, {-1, -4}, {-1, -10}, {0, -6} } },
	[104] = { .set = { {4, -5}, {3, -5}, {-5, -9}, {0, -7} } },
	[105] = { .set = { {5, -5}, {4, -5}, {-5, -9}, {-1, -7} } },
	[106] = { .set = { {0, -6}, {8, -8}, {-8, -8}, {0, -7} } },
	[107] = { .set = { {0, -6}, {8, -8}, {-8, -8}, {0, -7} } },
	[108] = { .set = { {-5, -5}, {3, -9}, {-4, -6}, {0, -7} } },
	[109] = { .set = { {-5, -5}, {4, -9}, {-4, -6}, {0, -7} } },
	[110] = { .set = { {-5, -2}, {0, -9}, {2, -3}, {0, -7} } },
	[111] = { .set = { {-5, -2}, {0, -10}, {2, -3}, {0, -6} } },
	[112] = { .set = { {-4, -2}, {-4, -8}, {7, -5}, {0, -7} } },
	[113] = { .set = { {-4, -2}, {-4, -9}, {7, -7}, {0, -7} } },
	[114] = { .set = { {0, -2}, {-7, -7}, {7, -7}, {0, -7} } },
	[115] = { .set = { {-4, -2}, {-4, -8}, {7, -5}, {0, -7} } },
	[116] = { .set = { {-5, -2}, {0, -9}, {2, -3}, {0, -7} } },
	[117] = { .set = { {-5, -5}, {3, -9}, {-4, -6}, {0, -7} } },
	[118] = { .set = { {0, -6}, {8, -8}, {-8, -8}, {0, -7} } },
	[119] = { .set = { {4, -5}, {3, -5}, {-5, -9}, {0, -7} } },
	[120] = { .set = { {4, -2}, {-2, -5}, {-2, -11}, {0, -6} } },
	[121] = { .set = { {4, -2}, {-5, -6}, {4, -10}, {0, -7} } },
	[122] = { .set = { {0, -2}, {-7, -7}, {7, -7}, {0, -7} } },
	[123] = { .set = { {-4, -2}, {-4, -8}, {7, -5}, {0, -7} } },
	[124] = { .set = { {-5, -2}, {0, -9}, {2, -3}, {0, -7} } },
	[125] = { .set = { {-5, -5}, {3, -9}, {-4, -6}, {0, -7} } },
	[126] = { .set = { {0, -6}, {8, -8}, {-8, -8}, {0, -7} } },
	[127] = { .set = { {4, -5}, {3, -5}, {-5, -9}, {0, -7} } },
	[128] = { .set = { {4, -2}, {-2, -5}, {-2, -11}, {0, -6} } },
	[129] = { .set = { {4, -2}, {-5, -6}, {4, -10}, {0, -7} } },
};

static const ax_anim *const sCascoonAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_00148),
	AX_ANIM_PTR(gAxSharedAnim_00149),
	AX_ANIM_PTR(gAxSharedAnim_01205),
	AX_ANIM_PTR(gAxSharedAnim_01815),
	AX_ANIM_PTR(gAxSharedAnim_01910),
	AX_ANIM_PTR(gAxSharedAnim_01980),
	AX_ANIM_PTR(gAxSharedAnim_02020),
	AX_ANIM_PTR(gAxSharedAnim_02075),
};

static const ax_anim *const sCascoonAnimTable2[] = {
	AX_ANIM_PTR(sCascoonAnims_2_1),
	AX_ANIM_PTR(sCascoonAnims_2_2),
	AX_ANIM_PTR(sCascoonAnims_2_3),
	AX_ANIM_PTR(sCascoonAnims_2_4),
	AX_ANIM_PTR(sCascoonAnims_2_5),
	AX_ANIM_PTR(sCascoonAnims_2_6),
	AX_ANIM_PTR(sCascoonAnims_2_7),
	AX_ANIM_PTR(sCascoonAnims_2_8),
};

static const ax_anim *const sCascoonAnimTable3[] = {
	AX_ANIM_PTR(sCascoonAnims_3_1),
	AX_ANIM_PTR(sCascoonAnims_3_2),
	AX_ANIM_PTR(sCascoonAnims_3_3),
	AX_ANIM_PTR(sCascoonAnims_3_4),
	AX_ANIM_PTR(sCascoonAnims_3_5),
	AX_ANIM_PTR(sCascoonAnims_3_6),
	AX_ANIM_PTR(sCascoonAnims_3_7),
	AX_ANIM_PTR(sCascoonAnims_3_8),
};

static const ax_anim *const sCascoonAnimTable4[] = {
	AX_ANIM_PTR(sCascoonAnims_4_1),
	AX_ANIM_PTR(sCascoonAnims_4_2),
	AX_ANIM_PTR(sCascoonAnims_4_3),
	AX_ANIM_PTR(sCascoonAnims_4_4),
	AX_ANIM_PTR(sCascoonAnims_4_5),
	AX_ANIM_PTR(sCascoonAnims_4_6),
	AX_ANIM_PTR(sCascoonAnims_4_7),
	AX_ANIM_PTR(sCascoonAnims_4_8),
};

static const ax_anim *const sCascoonAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_01912),
	AX_ANIM_PTR(sCascoonAnims_5_2),
	AX_ANIM_PTR(gAxSharedAnim_01939),
	AX_ANIM_PTR(sCascoonAnims_5_4),
	AX_ANIM_PTR(sCascoonAnims_5_5),
	AX_ANIM_PTR(sCascoonAnims_5_6),
	AX_ANIM_PTR(sCascoonAnims_5_7),
	AX_ANIM_PTR(sCascoonAnims_5_8),
};

static const ax_anim *const sCascoonAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02403),
	AX_ANIM_PTR(gAxSharedAnim_02403),
	AX_ANIM_PTR(gAxSharedAnim_02403),
	AX_ANIM_PTR(gAxSharedAnim_02403),
	AX_ANIM_PTR(gAxSharedAnim_02403),
	AX_ANIM_PTR(gAxSharedAnim_02403),
	AX_ANIM_PTR(gAxSharedAnim_02403),
	AX_ANIM_PTR(gAxSharedAnim_02403),
};

static const ax_anim *const sCascoonAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_02014),
	AX_ANIM_PTR(gAxSharedAnim_02017),
	AX_ANIM_PTR(gAxSharedAnim_02024),
	AX_ANIM_PTR(gAxSharedAnim_02031),
	AX_ANIM_PTR(gAxSharedAnim_02038),
	AX_ANIM_PTR(gAxSharedAnim_02045),
	AX_ANIM_PTR(gAxSharedAnim_02054),
	AX_ANIM_PTR(gAxSharedAnim_02056),
};

static const ax_anim *const sCascoonAnimTable8[] = {
	AX_ANIM_PTR(sCascoonAnims_8_1),
	AX_ANIM_PTR(sCascoonAnims_8_2),
	AX_ANIM_PTR(sCascoonAnims_8_3),
	AX_ANIM_PTR(sCascoonAnims_8_4),
	AX_ANIM_PTR(sCascoonAnims_8_5),
	AX_ANIM_PTR(sCascoonAnims_8_6),
	AX_ANIM_PTR(sCascoonAnims_8_7),
	AX_ANIM_PTR(sCascoonAnims_8_8),
};

static const ax_anim *const sCascoonAnimTable9[] = {
	AX_ANIM_PTR(sCascoonAnims_9_1),
	AX_ANIM_PTR(sCascoonAnims_9_2),
	AX_ANIM_PTR(sCascoonAnims_9_3),
	AX_ANIM_PTR(sCascoonAnims_9_4),
	AX_ANIM_PTR(sCascoonAnims_9_5),
	AX_ANIM_PTR(sCascoonAnims_9_6),
	AX_ANIM_PTR(sCascoonAnims_9_7),
	AX_ANIM_PTR(sCascoonAnims_9_8),
};

static const ax_anim *const sCascoonAnimTable10[] = {
	AX_ANIM_PTR(sCascoonAnims_10_1),
	AX_ANIM_PTR(sCascoonAnims_10_2),
	AX_ANIM_PTR(sCascoonAnims_10_3),
	AX_ANIM_PTR(sCascoonAnims_10_4),
	AX_ANIM_PTR(sCascoonAnims_10_5),
	AX_ANIM_PTR(sCascoonAnims_10_6),
	AX_ANIM_PTR(sCascoonAnims_10_7),
	AX_ANIM_PTR(sCascoonAnims_10_8),
};

static const ax_anim *const sCascoonAnimTable11[] = {
	AX_ANIM_PTR(sCascoonAnims_11_1),
	AX_ANIM_PTR(sCascoonAnims_11_2),
	AX_ANIM_PTR(sCascoonAnims_11_3),
	AX_ANIM_PTR(sCascoonAnims_11_4),
	AX_ANIM_PTR(sCascoonAnims_11_5),
	AX_ANIM_PTR(sCascoonAnims_11_6),
	AX_ANIM_PTR(sCascoonAnims_11_7),
	AX_ANIM_PTR(sCascoonAnims_11_8),
};

static const ax_anim *const sCascoonAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_00271),
	AX_ANIM_PTR(sCascoonAnims_12_2),
	AX_ANIM_PTR(gAxSharedAnim_00318),
	AX_ANIM_PTR(gAxSharedAnim_00306),
	AX_ANIM_PTR(gAxSharedAnim_00304),
	AX_ANIM_PTR(gAxSharedAnim_00297),
	AX_ANIM_PTR(gAxSharedAnim_00282),
	AX_ANIM_PTR(gAxSharedAnim_00272),
};

static const ax_anim *const sCascoonAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_00337),
	AX_ANIM_PTR(gAxSharedAnim_00387),
	AX_ANIM_PTR(gAxSharedAnim_00380),
	AX_ANIM_PTR(gAxSharedAnim_00375),
	AX_ANIM_PTR(gAxSharedAnim_00367),
	AX_ANIM_PTR(gAxSharedAnim_00361),
	AX_ANIM_PTR(gAxSharedAnim_00355),
	AX_ANIM_PTR(gAxSharedAnim_00345),
};

static const ax_anim *const *const sAxAnimationsCascoon[] = {
	sCascoonAnimTable1,
	sCascoonAnimTable2,
	sCascoonAnimTable3,
	sCascoonAnimTable4,
	sCascoonAnimTable5,
	sCascoonAnimTable6,
	sCascoonAnimTable7,
	sCascoonAnimTable8,
	sCascoonAnimTable9,
	sCascoonAnimTable10,
	sCascoonAnimTable11,
	sCascoonAnimTable12,
	sCascoonAnimTable13,
};

static const ax_sprite *const sAxSpritesCascoon[] = {
	sCascoonSprites1,
	sCascoonSprites2,
	sCascoonSprites3,
	sCascoonSprites4,
	sCascoonSprites5,
	sCascoonSprites6,
	sCascoonSprites7,
	sCascoonSprites8,
	sCascoonSprites9,
	sCascoonSprites10,
	sCascoonSprites11,
	sCascoonSprites12,
	sCascoonSprites13,
	sCascoonSprites14,
	sCascoonSprites15,
	sCascoonSprites16,
	sCascoonSprites17,
	sCascoonSprites18,
	sCascoonSprites19,
	sCascoonSprites20,
	sCascoonSprites21,
	sCascoonSprites22,
	sCascoonSprites23,
};

static const axmain sAxMainCascoon = {
	.poses = sAxPosesCascoon,
	.animations = sAxAnimationsCascoon,
	.animCount = ARRAY_COUNT(sAxAnimationsCascoon),
	.spriteData = sAxSpritesCascoon,
	.positions = sAxPositionsCascoon,
};
