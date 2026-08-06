/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainLunatone;
const SiroArchive gAxLunatone = {"SIRO", &sAxMainLunatone};

static const ax_pose sLunatonePose1[] = {
	AX_POSE(0, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose2[] = {
	AX_POSE(1, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose3[] = {
	AX_POSE(2, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose4[] = {
	AX_POSE(3, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose5[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose6[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose7[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose8[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose9[] = {
	AX_POSE(8, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose10[] = {
	AX_POSE(9, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose11[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose12[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose13[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose14[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose15[] = {
	AX_POSE(2, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose16[] = {
	AX_POSE(3, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose50[] = {
	AX_POSE(10, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose52[] = {
	AX_POSE(11, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(12, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose54[] = {
	AX_POSE(13, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(14, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose56[] = {
	AX_POSE(15, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(16, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose58[] = {
	AX_POSE(17, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose60[] = {
	AX_POSE(15, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(16, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose62[] = {
	AX_POSE(13, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(14, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose64[] = {
	AX_POSE(11, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(12, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose81[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose82[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose83[] = {
	AX_POSE(20, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose84[] = {
	AX_POSE(21, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose85[] = {
	AX_POSE(22, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose86[] = {
	AX_POSE(23, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose87[] = {
	AX_POSE(24, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose88[] = {
	AX_POSE(23, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose89[] = {
	AX_POSE(22, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose90[] = {
	AX_POSE(21, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose108[] = {
	AX_POSE(11, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(12, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose109[] = {
	AX_POSE(13, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(14, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose110[] = {
	AX_POSE(15, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(16, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose112[] = {
	AX_POSE(15, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(16, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose113[] = {
	AX_POSE(13, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(14, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose114[] = {
	AX_POSE(11, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(12, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose116[] = {
	AX_POSE(3, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose123[] = {
	AX_POSE(0, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose124[] = {
	AX_POSE(10, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose130[] = {
	AX_POSE(15, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(16, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose131[] = {
	AX_POSE(8, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose132[] = {
	AX_POSE(17, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLunatonePose134[] = {
	AX_POSE(15, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(16, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const u8 sLunatoneAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_1_1.lz");
static const u8 sLunatoneAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_1_2.lz");
static const u8 sLunatoneAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_1_3.lz");
static const u8 sLunatoneAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_1_4.lz");
static const u8 sLunatoneAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_1_5.lz");
static const u8 sLunatoneAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_1_6.lz");
static const u8 sLunatoneAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_1_7.lz");
static const u8 sLunatoneAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_1_8.lz");
static const u8 sLunatoneAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_4_1.lz");
static const u8 sLunatoneAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_4_2.lz");
static const u8 sLunatoneAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_4_3.lz");
static const u8 sLunatoneAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_4_4.lz");
static const u8 sLunatoneAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_4_5.lz");
static const u8 sLunatoneAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_4_6.lz");
static const u8 sLunatoneAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_4_7.lz");
static const u8 sLunatoneAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_4_8.lz");
static const u8 sLunatoneAnims_7_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_7_1.lz");
static const u8 sLunatoneAnims_7_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_7_2.lz");
static const u8 sLunatoneAnims_7_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_7_3.lz");
static const u8 sLunatoneAnims_7_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_7_4.lz");
static const u8 sLunatoneAnims_7_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_7_5.lz");
static const u8 sLunatoneAnims_7_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_7_6.lz");
static const u8 sLunatoneAnims_7_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_7_7.lz");
static const ax_anim sLunatoneAnims_7_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 8, .unkFlags = 0, .poseId = 89, .offset = {5, -5}, .shadow = {5, -5} },
	AX_ANIM_TERMINATOR
};
static const u8 sLunatoneAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_8_1.lz");
static const u8 sLunatoneAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_8_2.lz");
static const u8 sLunatoneAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_8_3.lz");
static const u8 sLunatoneAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_8_4.lz");
static const u8 sLunatoneAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_8_5.lz");
static const u8 sLunatoneAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_8_6.lz");
static const u8 sLunatoneAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_8_7.lz");
static const u8 sLunatoneAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_8_8.lz");
static const u8 sLunatoneAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_9_1.lz");
static const u8 sLunatoneAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_9_2.lz");
static const u8 sLunatoneAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_9_3.lz");
static const u8 sLunatoneAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_9_4.lz");
static const u8 sLunatoneAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_9_5.lz");
static const u8 sLunatoneAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_9_6.lz");
static const u8 sLunatoneAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_9_7.lz");
static const u8 sLunatoneAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_9_8.lz");
static const u8 sLunatoneAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_11_1.lz");
static const u8 sLunatoneAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_11_2.lz");
static const u8 sLunatoneAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_11_3.lz");
static const u8 sLunatoneAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_11_4.lz");
static const u8 sLunatoneAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_11_5.lz");
static const u8 sLunatoneAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_11_6.lz");
static const u8 sLunatoneAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_11_7.lz");
static const u8 sLunatoneAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lunatone/sLunatoneAnims_11_8.lz");

static const u8 sLunatoneGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_1.4bpp.lz");
static const ax_sprite sLunatoneSprites1[] = {
	{sLunatoneGfx1, ARRAY_COUNT(sLunatoneGfx1)}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_2.4bpp.lz");
static const ax_sprite sLunatoneSprites2[] = {
	{sLunatoneGfx2, ARRAY_COUNT(sLunatoneGfx2)}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_3.4bpp.lz");
static const ax_sprite sLunatoneSprites3[] = {
	{sLunatoneGfx3, ARRAY_COUNT(sLunatoneGfx3)}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_4.4bpp.lz");
static const ax_sprite sLunatoneSprites4[] = {
	{sLunatoneGfx4, ARRAY_COUNT(sLunatoneGfx4)}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_5.4bpp.lz");
static const ax_sprite sLunatoneSprites5[] = {
	{sLunatoneGfx5, ARRAY_COUNT(sLunatoneGfx5)}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_6.4bpp.lz");
static const ax_sprite sLunatoneSprites6[] = {
	{sLunatoneGfx6, ARRAY_COUNT(sLunatoneGfx6)}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_7.4bpp.lz");
static const ax_sprite sLunatoneSprites7[] = {
	{sLunatoneGfx7, ARRAY_COUNT(sLunatoneGfx7)}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_8.4bpp.lz");
static const ax_sprite sLunatoneSprites8[] = {
	{sLunatoneGfx8, ARRAY_COUNT(sLunatoneGfx8)}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_9.4bpp.lz");
static const ax_sprite sLunatoneSprites9[] = {
	{sLunatoneGfx9, ARRAY_COUNT(sLunatoneGfx9)}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_10.4bpp.lz");
static const ax_sprite sLunatoneSprites10[] = {
	{sLunatoneGfx10, ARRAY_COUNT(sLunatoneGfx10)}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_11.4bpp.lz");
static const ax_sprite sLunatoneSprites11[] = {
	{sLunatoneGfx11, ARRAY_COUNT(sLunatoneGfx11)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_12.4bpp.lz");
static const ax_sprite sLunatoneSprites12[] = {
	{sLunatoneGfx12, ARRAY_COUNT(sLunatoneGfx12)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_13.4bpp.lz");
static const ax_sprite sLunatoneSprites13[] = {
	{sLunatoneGfx13, ARRAY_COUNT(sLunatoneGfx13)}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_14.4bpp.lz");
static const ax_sprite sLunatoneSprites14[] = {
	{sLunatoneGfx14, ARRAY_COUNT(sLunatoneGfx14)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_15.4bpp.lz");
static const ax_sprite sLunatoneSprites15[] = {
	{sLunatoneGfx15, ARRAY_COUNT(sLunatoneGfx15)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_16.4bpp.lz");
static const ax_sprite sLunatoneSprites16[] = {
	{sLunatoneGfx16, ARRAY_COUNT(sLunatoneGfx16)}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_17.4bpp.lz");
static const ax_sprite sLunatoneSprites17[] = {
	{sLunatoneGfx17, ARRAY_COUNT(sLunatoneGfx17)}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_18.4bpp.lz");
static const ax_sprite sLunatoneSprites18[] = {
	{sLunatoneGfx18, ARRAY_COUNT(sLunatoneGfx18)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_19.4bpp.lz");
static const ax_sprite sLunatoneSprites19[] = {
	{sLunatoneGfx19, ARRAY_COUNT(sLunatoneGfx19)}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_20.4bpp.lz");
static const ax_sprite sLunatoneSprites20[] = {
	{sLunatoneGfx20, ARRAY_COUNT(sLunatoneGfx20)}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_21.4bpp.lz");
static const ax_sprite sLunatoneSprites21[] = {
	{sLunatoneGfx21, ARRAY_COUNT(sLunatoneGfx21)}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_22.4bpp.lz");
static const ax_sprite sLunatoneSprites22[] = {
	{sLunatoneGfx22, ARRAY_COUNT(sLunatoneGfx22)}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_23.4bpp.lz");
static const ax_sprite sLunatoneSprites23[] = {
	{sLunatoneGfx23, ARRAY_COUNT(sLunatoneGfx23)}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_24.4bpp.lz");
static const ax_sprite sLunatoneSprites24[] = {
	{sLunatoneGfx24, ARRAY_COUNT(sLunatoneGfx24)}, 
	{NULL, 0}
};
static const u8 sLunatoneGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lunatone/sprite_25.4bpp.lz");
static const ax_sprite sLunatoneSprites25[] = {
	{sLunatoneGfx25, ARRAY_COUNT(sLunatoneGfx25)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesLunatone[] = {
	sLunatonePose1,
	sLunatonePose2,
	sLunatonePose3,
	sLunatonePose4,
	sLunatonePose5,
	sLunatonePose6,
	sLunatonePose7,
	sLunatonePose8,
	sLunatonePose9,
	sLunatonePose10,
	sLunatonePose11,
	sLunatonePose12,
	sLunatonePose13,
	sLunatonePose14,
	sLunatonePose15,
	sLunatonePose16,
	sLunatonePose1,
	sLunatonePose2,
	sLunatonePose3,
	sLunatonePose4,
	sLunatonePose5,
	sLunatonePose6,
	sLunatonePose7,
	sLunatonePose8,
	sLunatonePose9,
	sLunatonePose10,
	sLunatonePose11,
	sLunatonePose12,
	sLunatonePose13,
	sLunatonePose14,
	sLunatonePose15,
	sLunatonePose16,
	sLunatonePose1,
	sLunatonePose2,
	sLunatonePose3,
	sLunatonePose4,
	sLunatonePose5,
	sLunatonePose6,
	sLunatonePose7,
	sLunatonePose8,
	sLunatonePose9,
	sLunatonePose10,
	sLunatonePose11,
	sLunatonePose12,
	sLunatonePose13,
	sLunatonePose14,
	sLunatonePose15,
	sLunatonePose16,
	sLunatonePose1,
	sLunatonePose50,
	sLunatonePose3,
	sLunatonePose52,
	sLunatonePose5,
	sLunatonePose54,
	sLunatonePose7,
	sLunatonePose56,
	sLunatonePose9,
	sLunatonePose58,
	sLunatonePose11,
	sLunatonePose60,
	sLunatonePose13,
	sLunatonePose62,
	sLunatonePose15,
	sLunatonePose64,
	sLunatonePose1,
	sLunatonePose50,
	sLunatonePose3,
	sLunatonePose52,
	sLunatonePose5,
	sLunatonePose54,
	sLunatonePose7,
	sLunatonePose56,
	sLunatonePose9,
	sLunatonePose58,
	sLunatonePose11,
	sLunatonePose60,
	sLunatonePose13,
	sLunatonePose62,
	sLunatonePose15,
	sLunatonePose64,
	sLunatonePose81,
	sLunatonePose82,
	sLunatonePose83,
	sLunatonePose84,
	sLunatonePose85,
	sLunatonePose86,
	sLunatonePose87,
	sLunatonePose88,
	sLunatonePose89,
	sLunatonePose90,
	sLunatonePose1,
	sLunatonePose2,
	sLunatonePose3,
	sLunatonePose4,
	sLunatonePose5,
	sLunatonePose6,
	sLunatonePose7,
	sLunatonePose8,
	sLunatonePose9,
	sLunatonePose10,
	sLunatonePose11,
	sLunatonePose12,
	sLunatonePose13,
	sLunatonePose14,
	sLunatonePose15,
	sLunatonePose16,
	sLunatonePose50,
	sLunatonePose108,
	sLunatonePose109,
	sLunatonePose110,
	sLunatonePose58,
	sLunatonePose112,
	sLunatonePose113,
	sLunatonePose114,
	sLunatonePose2,
	sLunatonePose116,
	sLunatonePose6,
	sLunatonePose8,
	sLunatonePose10,
	sLunatonePose12,
	sLunatonePose14,
	sLunatonePose16,
	sLunatonePose123,
	sLunatonePose124,
	sLunatonePose3,
	sLunatonePose52,
	sLunatonePose5,
	sLunatonePose54,
	sLunatonePose7,
	sLunatonePose130,
	sLunatonePose131,
	sLunatonePose132,
	sLunatonePose11,
	sLunatonePose134,
	sLunatonePose13,
	sLunatonePose62,
	sLunatonePose15,
	sLunatonePose64,
	sLunatonePose50,
	sLunatonePose108,
	sLunatonePose109,
	sLunatonePose110,
	sLunatonePose58,
	sLunatonePose112,
	sLunatonePose113,
	sLunatonePose114,
	sLunatonePose1,
	sLunatonePose15,
	sLunatonePose13,
	sLunatonePose11,
	sLunatonePose9,
	sLunatonePose7,
	sLunatonePose5,
	sLunatonePose3,
};

static const struct PositionSets sAxPositionsLunatone[] = {
	[0] = { .set = { {-1, -12}, {-4, -11}, {3, -11}, {-1, -13} } },
	[1] = { .set = { {-1, -12}, {-4, -11}, {3, -11}, {-1, -13} } },
	[2] = { .set = { {0, -12}, {-1, -10}, {-5, -9}, {-4, -12} } },
	[3] = { .set = { {0, -11}, {-1, -9}, {-5, -9}, {-4, -12} } },
	[4] = { .set = { {2, -12}, {0, -10}, {-2, -8}, {-3, -11} } },
	[5] = { .set = { {2, -12}, {0, -10}, {-4, -8}, {-3, -10} } },
	[6] = { .set = { {2, -14}, {-4, -11}, {0, -9}, {-3, -10} } },
	[7] = { .set = { {2, -14}, {-3, -11}, {-1, -8}, {-4, -10} } },
	[8] = { .set = { {-1, -14}, {3, -11}, {-4, -11}, {-1, -12} } },
	[9] = { .set = { {-1, -14}, {3, -11}, {-4, -11}, {-1, -12} } },
	[10] = { .set = { {-4, -14}, {2, -11}, {-2, -9}, {1, -10} } },
	[11] = { .set = { {-4, -14}, {1, -11}, {-1, -8}, {2, -10} } },
	[12] = { .set = { {-4, -12}, {-2, -10}, {0, -8}, {1, -11} } },
	[13] = { .set = { {-4, -12}, {-2, -10}, {2, -8}, {1, -10} } },
	[14] = { .set = { {-2, -12}, {-1, -10}, {3, -9}, {2, -12} } },
	[15] = { .set = { {-2, -11}, {-1, -9}, {3, -9}, {2, -12} } },
	[16] = { .set = { {-1, -12}, {-4, -11}, {3, -11}, {-1, -13} } },
	[17] = { .set = { {-1, -12}, {-4, -11}, {3, -11}, {-1, -13} } },
	[18] = { .set = { {0, -12}, {-1, -10}, {-5, -9}, {-4, -12} } },
	[19] = { .set = { {0, -11}, {-1, -9}, {-5, -9}, {-4, -12} } },
	[20] = { .set = { {2, -12}, {0, -10}, {-2, -8}, {-3, -11} } },
	[21] = { .set = { {2, -12}, {0, -10}, {-4, -8}, {-3, -10} } },
	[22] = { .set = { {2, -14}, {-4, -11}, {0, -9}, {-3, -10} } },
	[23] = { .set = { {2, -14}, {-3, -11}, {-1, -8}, {-4, -10} } },
	[24] = { .set = { {-1, -14}, {3, -11}, {-4, -11}, {-1, -12} } },
	[25] = { .set = { {-1, -14}, {3, -11}, {-4, -11}, {-1, -12} } },
	[26] = { .set = { {-4, -14}, {2, -11}, {-2, -9}, {1, -10} } },
	[27] = { .set = { {-4, -14}, {1, -11}, {-1, -8}, {2, -10} } },
	[28] = { .set = { {-4, -12}, {-2, -10}, {0, -8}, {1, -11} } },
	[29] = { .set = { {-4, -12}, {-2, -10}, {2, -8}, {1, -10} } },
	[30] = { .set = { {-2, -12}, {-1, -10}, {3, -9}, {2, -12} } },
	[31] = { .set = { {-2, -11}, {-1, -9}, {3, -9}, {2, -12} } },
	[32] = { .set = { {-1, -12}, {-4, -11}, {3, -11}, {-1, -13} } },
	[33] = { .set = { {-1, -12}, {-4, -11}, {3, -11}, {-1, -13} } },
	[34] = { .set = { {0, -12}, {-1, -10}, {-5, -9}, {-4, -12} } },
	[35] = { .set = { {0, -11}, {-1, -9}, {-5, -9}, {-4, -12} } },
	[36] = { .set = { {2, -12}, {0, -10}, {-2, -8}, {-3, -11} } },
	[37] = { .set = { {2, -12}, {0, -10}, {-4, -8}, {-3, -10} } },
	[38] = { .set = { {2, -14}, {-4, -11}, {0, -9}, {-3, -10} } },
	[39] = { .set = { {2, -14}, {-3, -11}, {-1, -8}, {-4, -10} } },
	[40] = { .set = { {-1, -14}, {3, -11}, {-4, -11}, {-1, -12} } },
	[41] = { .set = { {-1, -14}, {3, -11}, {-4, -11}, {-1, -12} } },
	[42] = { .set = { {-4, -14}, {2, -11}, {-2, -9}, {1, -10} } },
	[43] = { .set = { {-4, -14}, {1, -11}, {-1, -8}, {2, -10} } },
	[44] = { .set = { {-4, -12}, {-2, -10}, {0, -8}, {1, -11} } },
	[45] = { .set = { {-4, -12}, {-2, -10}, {2, -8}, {1, -10} } },
	[46] = { .set = { {-2, -12}, {-1, -10}, {3, -9}, {2, -12} } },
	[47] = { .set = { {-2, -11}, {-1, -9}, {3, -9}, {2, -12} } },
	[48] = { .set = { {-1, -12}, {-4, -11}, {3, -11}, {-1, -13} } },
	[49] = { .set = { {-1, -14}, {-5, -11}, {2, -11}, {-1, -12} } },
	[50] = { .set = { {0, -12}, {-1, -10}, {-5, -9}, {-4, -12} } },
	[51] = { .set = { {1, -14}, {-1, -10}, {-3, -9}, {-5, -13} } },
	[52] = { .set = { {2, -12}, {0, -10}, {-2, -8}, {-3, -11} } },
	[53] = { .set = { {2, -14}, {-1, -9}, {-2, -7}, {-6, -12} } },
	[54] = { .set = { {2, -14}, {-4, -11}, {0, -9}, {-3, -10} } },
	[55] = { .set = { {1, -14}, {-4, -9}, {-1, -7}, {-6, -9} } },
	[56] = { .set = { {-1, -14}, {3, -11}, {-4, -11}, {-1, -12} } },
	[57] = { .set = { {-1, -14}, {3, -10}, {-4, -10}, {-1, -10} } },
	[58] = { .set = { {-4, -14}, {2, -11}, {-2, -9}, {1, -10} } },
	[59] = { .set = { {-3, -14}, {2, -9}, {-1, -7}, {4, -9} } },
	[60] = { .set = { {-4, -12}, {-2, -10}, {0, -8}, {1, -11} } },
	[61] = { .set = { {-4, -14}, {-1, -9}, {0, -7}, {4, -12} } },
	[62] = { .set = { {-2, -12}, {-1, -10}, {3, -9}, {2, -12} } },
	[63] = { .set = { {-3, -14}, {-1, -10}, {1, -9}, {3, -13} } },
	[64] = { .set = { {-1, -12}, {-4, -11}, {3, -11}, {-1, -13} } },
	[65] = { .set = { {-1, -14}, {-5, -11}, {2, -11}, {-1, -12} } },
	[66] = { .set = { {0, -12}, {-1, -10}, {-5, -9}, {-4, -12} } },
	[67] = { .set = { {1, -14}, {-1, -10}, {-3, -9}, {-5, -13} } },
	[68] = { .set = { {2, -12}, {0, -10}, {-2, -8}, {-3, -11} } },
	[69] = { .set = { {2, -14}, {-1, -9}, {-2, -7}, {-6, -12} } },
	[70] = { .set = { {2, -14}, {-4, -11}, {0, -9}, {-3, -10} } },
	[71] = { .set = { {1, -14}, {-4, -9}, {-1, -7}, {-6, -9} } },
	[72] = { .set = { {-1, -14}, {3, -11}, {-4, -11}, {-1, -12} } },
	[73] = { .set = { {-1, -14}, {3, -10}, {-4, -10}, {-1, -10} } },
	[74] = { .set = { {-4, -14}, {2, -11}, {-2, -9}, {1, -10} } },
	[75] = { .set = { {-3, -14}, {2, -9}, {-1, -7}, {4, -9} } },
	[76] = { .set = { {-4, -12}, {-2, -10}, {0, -8}, {1, -11} } },
	[77] = { .set = { {-4, -14}, {-1, -9}, {0, -7}, {4, -12} } },
	[78] = { .set = { {-2, -12}, {-1, -10}, {3, -9}, {2, -12} } },
	[79] = { .set = { {-3, -14}, {-1, -10}, {1, -9}, {3, -13} } },
	[80] = { .set = { {-2, -13}, {-2, -10}, {1, -8}, {2, -12} } },
	[81] = { .set = { {-2, -13}, {-1, -10}, {1, -8}, {2, -12} } },
	[82] = { .set = { {-1, -17}, {-5, -13}, {2, -13}, {-1, -14} } },
	[83] = { .set = { {2, -15}, {2, -12}, {-1, -10}, {-2, -12} } },
	[84] = { .set = { {3, -16}, {1, -12}, {0, -9}, {-2, -12} } },
	[85] = { .set = { {2, -15}, {-4, -12}, {1, -10}, {-1, -11} } },
	[86] = { .set = { {-1, -17}, {3, -10}, {-4, -10}, {-1, -13} } },
	[87] = { .set = { {-3, -15}, {3, -12}, {-2, -10}, {0, -11} } },
	[88] = { .set = { {-4, -16}, {-2, -12}, {-1, -9}, {1, -12} } },
	[89] = { .set = { {-3, -15}, {-3, -12}, {0, -10}, {1, -12} } },
	[90] = { .set = { {-1, -12}, {-4, -11}, {3, -11}, {-1, -13} } },
	[91] = { .set = { {-1, -12}, {-4, -11}, {3, -11}, {-1, -13} } },
	[92] = { .set = { {0, -12}, {-1, -10}, {-5, -9}, {-4, -12} } },
	[93] = { .set = { {0, -11}, {-1, -9}, {-5, -9}, {-4, -12} } },
	[94] = { .set = { {2, -12}, {0, -10}, {-2, -8}, {-3, -11} } },
	[95] = { .set = { {2, -12}, {0, -10}, {-4, -8}, {-3, -10} } },
	[96] = { .set = { {2, -14}, {-4, -11}, {0, -9}, {-3, -10} } },
	[97] = { .set = { {2, -14}, {-3, -11}, {-1, -8}, {-4, -10} } },
	[98] = { .set = { {-1, -14}, {3, -11}, {-4, -11}, {-1, -12} } },
	[99] = { .set = { {-1, -14}, {3, -11}, {-4, -11}, {-1, -12} } },
	[100] = { .set = { {-4, -14}, {2, -11}, {-2, -9}, {1, -10} } },
	[101] = { .set = { {-4, -14}, {1, -11}, {-1, -8}, {2, -10} } },
	[102] = { .set = { {-4, -12}, {-2, -10}, {0, -8}, {1, -11} } },
	[103] = { .set = { {-4, -12}, {-2, -10}, {2, -8}, {1, -10} } },
	[104] = { .set = { {-2, -12}, {-1, -10}, {3, -9}, {2, -12} } },
	[105] = { .set = { {-2, -11}, {-1, -9}, {3, -9}, {2, -12} } },
	[106] = { .set = { {-1, -14}, {-5, -11}, {2, -11}, {-1, -12} } },
	[107] = { .set = { {-3, -13}, {-1, -9}, {1, -8}, {3, -12} } },
	[108] = { .set = { {-5, -14}, {-2, -9}, {-1, -7}, {3, -12} } },
	[109] = { .set = { {-4, -15}, {1, -10}, {-2, -8}, {3, -10} } },
	[110] = { .set = { {-1, -14}, {3, -10}, {-4, -10}, {-1, -10} } },
	[111] = { .set = { {3, -15}, {-2, -10}, {1, -8}, {-4, -10} } },
	[112] = { .set = { {4, -14}, {1, -9}, {0, -7}, {-4, -12} } },
	[113] = { .set = { {2, -13}, {0, -9}, {-2, -8}, {-4, -12} } },
	[114] = { .set = { {-1, -12}, {-4, -11}, {3, -11}, {-1, -13} } },
	[115] = { .set = { {1, -11}, {0, -9}, {-4, -9}, {-3, -12} } },
	[116] = { .set = { {2, -12}, {0, -10}, {-4, -8}, {-3, -10} } },
	[117] = { .set = { {2, -14}, {-3, -11}, {-1, -8}, {-4, -10} } },
	[118] = { .set = { {-1, -14}, {3, -11}, {-4, -11}, {-1, -12} } },
	[119] = { .set = { {-4, -14}, {1, -11}, {-1, -8}, {2, -10} } },
	[120] = { .set = { {-4, -12}, {-2, -10}, {2, -8}, {1, -10} } },
	[121] = { .set = { {-2, -11}, {-1, -9}, {3, -9}, {2, -12} } },
	[122] = { .set = { {0, -12}, {-3, -11}, {4, -11}, {0, -13} } },
	[123] = { .set = { {0, -14}, {-4, -11}, {3, -11}, {0, -12} } },
	[124] = { .set = { {0, -12}, {-1, -10}, {-5, -9}, {-4, -12} } },
	[125] = { .set = { {1, -14}, {-1, -10}, {-3, -9}, {-5, -13} } },
	[126] = { .set = { {2, -12}, {0, -10}, {-2, -8}, {-3, -11} } },
	[127] = { .set = { {2, -14}, {-1, -9}, {-2, -7}, {-6, -12} } },
	[128] = { .set = { {2, -14}, {-4, -11}, {0, -9}, {-3, -10} } },
	[129] = { .set = { {2, -14}, {-3, -9}, {0, -7}, {-5, -9} } },
	[130] = { .set = { {0, -14}, {4, -11}, {-3, -11}, {0, -12} } },
	[131] = { .set = { {0, -14}, {4, -10}, {-3, -10}, {0, -10} } },
	[132] = { .set = { {-4, -14}, {2, -11}, {-2, -9}, {1, -10} } },
	[133] = { .set = { {-4, -14}, {1, -9}, {-2, -7}, {3, -9} } },
	[134] = { .set = { {-4, -12}, {-2, -10}, {0, -8}, {1, -11} } },
	[135] = { .set = { {-4, -14}, {-1, -9}, {0, -7}, {4, -12} } },
	[136] = { .set = { {-2, -12}, {-1, -10}, {3, -9}, {2, -12} } },
	[137] = { .set = { {-3, -14}, {-1, -10}, {1, -9}, {3, -13} } },
	[138] = { .set = { {-1, -14}, {-5, -11}, {2, -11}, {-1, -12} } },
	[139] = { .set = { {-3, -13}, {-1, -9}, {1, -8}, {3, -12} } },
	[140] = { .set = { {-5, -14}, {-2, -9}, {-1, -7}, {3, -12} } },
	[141] = { .set = { {-4, -15}, {1, -10}, {-2, -8}, {3, -10} } },
	[142] = { .set = { {-1, -14}, {3, -10}, {-4, -10}, {-1, -10} } },
	[143] = { .set = { {3, -15}, {-2, -10}, {1, -8}, {-4, -10} } },
	[144] = { .set = { {4, -14}, {1, -9}, {0, -7}, {-4, -12} } },
	[145] = { .set = { {2, -13}, {0, -9}, {-2, -8}, {-4, -12} } },
	[146] = { .set = { {-1, -12}, {-4, -11}, {3, -11}, {-1, -13} } },
	[147] = { .set = { {-2, -12}, {-1, -10}, {3, -9}, {2, -12} } },
	[148] = { .set = { {-4, -12}, {-2, -10}, {0, -8}, {1, -11} } },
	[149] = { .set = { {-4, -14}, {2, -11}, {-2, -9}, {1, -10} } },
	[150] = { .set = { {-1, -14}, {3, -11}, {-4, -11}, {-1, -12} } },
	[151] = { .set = { {2, -14}, {-4, -11}, {0, -9}, {-3, -10} } },
	[152] = { .set = { {2, -12}, {0, -10}, {-2, -8}, {-3, -11} } },
	[153] = { .set = { {0, -12}, {-1, -10}, {-5, -9}, {-4, -12} } },
};

static const ax_anim *const sLunatoneAnimTable1[] = {
	AX_ANIM_PTR(sLunatoneAnims_1_1),
	AX_ANIM_PTR(sLunatoneAnims_1_2),
	AX_ANIM_PTR(sLunatoneAnims_1_3),
	AX_ANIM_PTR(sLunatoneAnims_1_4),
	AX_ANIM_PTR(sLunatoneAnims_1_5),
	AX_ANIM_PTR(sLunatoneAnims_1_6),
	AX_ANIM_PTR(sLunatoneAnims_1_7),
	AX_ANIM_PTR(sLunatoneAnims_1_8),
};

static const ax_anim *const sLunatoneAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_00668),
	AX_ANIM_PTR(gAxSharedAnim_00921),
	AX_ANIM_PTR(gAxSharedAnim_01206),
	AX_ANIM_PTR(gAxSharedAnim_01430),
	AX_ANIM_PTR(gAxSharedAnim_01572),
	AX_ANIM_PTR(gAxSharedAnim_01688),
	AX_ANIM_PTR(gAxSharedAnim_01764),
	AX_ANIM_PTR(gAxSharedAnim_01823),
};

static const ax_anim *const sLunatoneAnimTable3[] = {
	AX_ANIM_PTR(gAxSharedAnim_01838),
	AX_ANIM_PTR(gAxSharedAnim_01866),
	AX_ANIM_PTR(gAxSharedAnim_01882),
	AX_ANIM_PTR(gAxSharedAnim_01898),
	AX_ANIM_PTR(gAxSharedAnim_01919),
	AX_ANIM_PTR(gAxSharedAnim_01934),
	AX_ANIM_PTR(gAxSharedAnim_01943),
	AX_ANIM_PTR(gAxSharedAnim_01956),
};

static const ax_anim *const sLunatoneAnimTable4[] = {
	AX_ANIM_PTR(sLunatoneAnims_4_1),
	AX_ANIM_PTR(sLunatoneAnims_4_2),
	AX_ANIM_PTR(sLunatoneAnims_4_3),
	AX_ANIM_PTR(sLunatoneAnims_4_4),
	AX_ANIM_PTR(sLunatoneAnims_4_5),
	AX_ANIM_PTR(sLunatoneAnims_4_6),
	AX_ANIM_PTR(sLunatoneAnims_4_7),
	AX_ANIM_PTR(sLunatoneAnims_4_8),
};

static const ax_anim *const sLunatoneAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_02050),
	AX_ANIM_PTR(gAxSharedAnim_02058),
	AX_ANIM_PTR(gAxSharedAnim_02070),
	AX_ANIM_PTR(gAxSharedAnim_02077),
	AX_ANIM_PTR(gAxSharedAnim_02084),
	AX_ANIM_PTR(gAxSharedAnim_02103),
	AX_ANIM_PTR(gAxSharedAnim_02117),
	AX_ANIM_PTR(gAxSharedAnim_02130),
};

static const ax_anim *const sLunatoneAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_00147),
	AX_ANIM_PTR(gAxSharedAnim_00147),
	AX_ANIM_PTR(gAxSharedAnim_00147),
	AX_ANIM_PTR(gAxSharedAnim_00147),
	AX_ANIM_PTR(gAxSharedAnim_00147),
	AX_ANIM_PTR(gAxSharedAnim_00147),
	AX_ANIM_PTR(gAxSharedAnim_00147),
	AX_ANIM_PTR(gAxSharedAnim_00147),
};

static const ax_anim *const sLunatoneAnimTable7[] = {
	AX_ANIM_PTR(sLunatoneAnims_7_1),
	AX_ANIM_PTR(sLunatoneAnims_7_2),
	AX_ANIM_PTR(sLunatoneAnims_7_3),
	AX_ANIM_PTR(sLunatoneAnims_7_4),
	AX_ANIM_PTR(sLunatoneAnims_7_5),
	AX_ANIM_PTR(sLunatoneAnims_7_6),
	AX_ANIM_PTR(sLunatoneAnims_7_7),
	AX_ANIM_PTR(sLunatoneAnims_7_8),
};

static const ax_anim *const sLunatoneAnimTable8[] = {
	AX_ANIM_PTR(sLunatoneAnims_8_1),
	AX_ANIM_PTR(sLunatoneAnims_8_2),
	AX_ANIM_PTR(sLunatoneAnims_8_3),
	AX_ANIM_PTR(sLunatoneAnims_8_4),
	AX_ANIM_PTR(sLunatoneAnims_8_5),
	AX_ANIM_PTR(sLunatoneAnims_8_6),
	AX_ANIM_PTR(sLunatoneAnims_8_7),
	AX_ANIM_PTR(sLunatoneAnims_8_8),
};

static const ax_anim *const sLunatoneAnimTable9[] = {
	AX_ANIM_PTR(sLunatoneAnims_9_1),
	AX_ANIM_PTR(sLunatoneAnims_9_2),
	AX_ANIM_PTR(sLunatoneAnims_9_3),
	AX_ANIM_PTR(sLunatoneAnims_9_4),
	AX_ANIM_PTR(sLunatoneAnims_9_5),
	AX_ANIM_PTR(sLunatoneAnims_9_6),
	AX_ANIM_PTR(sLunatoneAnims_9_7),
	AX_ANIM_PTR(sLunatoneAnims_9_8),
};

static const ax_anim *const sLunatoneAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00269),
	AX_ANIM_PTR(gAxSharedAnim_00275),
	AX_ANIM_PTR(gAxSharedAnim_00284),
	AX_ANIM_PTR(gAxSharedAnim_00293),
	AX_ANIM_PTR(gAxSharedAnim_00300),
	AX_ANIM_PTR(gAxSharedAnim_00310),
	AX_ANIM_PTR(gAxSharedAnim_00320),
	AX_ANIM_PTR(gAxSharedAnim_00326),
};

static const ax_anim *const sLunatoneAnimTable11[] = {
	AX_ANIM_PTR(sLunatoneAnims_11_1),
	AX_ANIM_PTR(sLunatoneAnims_11_2),
	AX_ANIM_PTR(sLunatoneAnims_11_3),
	AX_ANIM_PTR(sLunatoneAnims_11_4),
	AX_ANIM_PTR(sLunatoneAnims_11_5),
	AX_ANIM_PTR(sLunatoneAnims_11_6),
	AX_ANIM_PTR(sLunatoneAnims_11_7),
	AX_ANIM_PTR(sLunatoneAnims_11_8),
};

static const ax_anim *const sLunatoneAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_00476),
	AX_ANIM_PTR(gAxSharedAnim_00528),
	AX_ANIM_PTR(gAxSharedAnim_00519),
	AX_ANIM_PTR(gAxSharedAnim_00511),
	AX_ANIM_PTR(gAxSharedAnim_00510),
	AX_ANIM_PTR(gAxSharedAnim_00502),
	AX_ANIM_PTR(gAxSharedAnim_00489),
	AX_ANIM_PTR(gAxSharedAnim_00478),
};

static const ax_anim *const sLunatoneAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_00542),
	AX_ANIM_PTR(gAxSharedAnim_00599),
	AX_ANIM_PTR(gAxSharedAnim_00595),
	AX_ANIM_PTR(gAxSharedAnim_00586),
	AX_ANIM_PTR(gAxSharedAnim_00576),
	AX_ANIM_PTR(gAxSharedAnim_00568),
	AX_ANIM_PTR(gAxSharedAnim_00558),
	AX_ANIM_PTR(gAxSharedAnim_00550),
};

static const ax_anim *const *const sAxAnimationsLunatone[] = {
	sLunatoneAnimTable1,
	sLunatoneAnimTable2,
	sLunatoneAnimTable3,
	sLunatoneAnimTable4,
	sLunatoneAnimTable5,
	sLunatoneAnimTable6,
	sLunatoneAnimTable7,
	sLunatoneAnimTable8,
	sLunatoneAnimTable9,
	sLunatoneAnimTable10,
	sLunatoneAnimTable11,
	sLunatoneAnimTable12,
	sLunatoneAnimTable13,
};

static const ax_sprite *const sAxSpritesLunatone[] = {
	sLunatoneSprites1,
	sLunatoneSprites2,
	sLunatoneSprites3,
	sLunatoneSprites4,
	sLunatoneSprites5,
	sLunatoneSprites6,
	sLunatoneSprites7,
	sLunatoneSprites8,
	sLunatoneSprites9,
	sLunatoneSprites10,
	sLunatoneSprites11,
	sLunatoneSprites12,
	sLunatoneSprites13,
	sLunatoneSprites14,
	sLunatoneSprites15,
	sLunatoneSprites16,
	sLunatoneSprites17,
	sLunatoneSprites18,
	sLunatoneSprites19,
	sLunatoneSprites20,
	sLunatoneSprites21,
	sLunatoneSprites22,
	sLunatoneSprites23,
	sLunatoneSprites24,
	sLunatoneSprites25,
};

static const axmain sAxMainLunatone = {
	.poses = sAxPosesLunatone,
	.animations = sAxAnimationsLunatone,
	.animCount = ARRAY_COUNT(sAxAnimationsLunatone),
	.spriteData = sAxSpritesLunatone,
	.positions = sAxPositionsLunatone,
};
