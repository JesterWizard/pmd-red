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
static const axmain sAxMainRattata;
const SiroArchive gAxRattata = {"SIRO", &sAxMainRattata};

static const ax_pose sRattataPose1[] = {
	AX_POSE(0, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose2[] = {
	AX_POSE(1, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose3[] = {
	AX_POSE(2, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(3, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose4[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose5[] = {
	AX_POSE(5, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose6[] = {
	AX_POSE(6, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose7[] = {
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose8[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose9[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose10[] = {
	AX_POSE(10, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose11[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose12[] = {
	AX_POSE(12, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose13[] = {
	AX_POSE(13, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose14[] = {
	AX_POSE(14, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose15[] = {
	AX_POSE(15, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose16[] = {
	AX_POSE(10, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose17[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose18[] = {
	AX_POSE(12, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose19[] = {
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose20[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose21[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose22[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose23[] = {
	AX_POSE(5, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose24[] = {
	AX_POSE(6, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose28[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose32[] = {
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose36[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose40[] = {
	AX_POSE(19, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose44[] = {
	AX_POSE(20, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose48[] = {
	AX_POSE(19, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose52[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose56[] = {
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose108[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose109[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose113[] = {
	AX_POSE(23, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose114[] = {
	AX_POSE(24, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose118[] = {
	AX_POSE(25, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose119[] = {
	AX_POSE(26, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose121[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose123[] = {
	AX_POSE(27, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose124[] = {
	AX_POSE(28, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose128[] = {
	AX_POSE(29, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose129[] = {
	AX_POSE(30, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose131[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose133[] = {
	AX_POSE(27, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose134[] = {
	AX_POSE(28, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose138[] = {
	AX_POSE(25, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose139[] = {
	AX_POSE(26, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose143[] = {
	AX_POSE(23, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose144[] = {
	AX_POSE(24, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose145[] = {
	AX_POSE(31, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose146[] = {
	AX_POSE(32, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose147[] = {
	AX_POSE(33, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose148[] = {
	AX_POSE(34, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose149[] = {
	AX_POSE(35, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose150[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(230, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose151[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose152[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose153[] = {
	AX_POSE(35, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose154[] = {
	AX_POSE(34, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose180[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose181[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose182[] = {
	AX_POSE(10, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose185[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose186[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose188[] = {
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose189[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose190[] = {
	AX_POSE(19, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose192[] = {
	AX_POSE(19, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose193[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRattataPose194[] = {
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const u8 sRattataAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_1_1.lz");
static const u8 sRattataAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_1_2.lz");
static const u8 sRattataAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_1_3.lz");
static const u8 sRattataAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_1_4.lz");
static const u8 sRattataAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_1_5.lz");
static const u8 sRattataAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_1_6.lz");
static const u8 sRattataAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_1_7.lz");
static const u8 sRattataAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_1_8.lz");
static const u8 sRattataAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_2_1.lz");
static const u8 sRattataAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_2_2.lz");
static const u8 sRattataAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_2_3.lz");
static const u8 sRattataAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_2_4.lz");
static const u8 sRattataAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_2_5.lz");
static const u8 sRattataAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_2_6.lz");
static const u8 sRattataAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_2_7.lz");
static const u8 sRattataAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_2_8.lz");
static const u8 sRattataAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_3_1.lz");
static const u8 sRattataAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_3_2.lz");
static const u8 sRattataAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_3_3.lz");
static const u8 sRattataAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_3_4.lz");
static const u8 sRattataAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_3_5.lz");
static const u8 sRattataAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_3_6.lz");
static const u8 sRattataAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_3_7.lz");
static const u8 sRattataAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_3_8.lz");
static const u8 sRattataAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_4_1.lz");
static const u8 sRattataAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_4_2.lz");
static const u8 sRattataAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_4_3.lz");
static const u8 sRattataAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_4_4.lz");
static const u8 sRattataAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_4_5.lz");
static const u8 sRattataAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_4_6.lz");
static const u8 sRattataAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_4_7.lz");
static const u8 sRattataAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_4_8.lz");
static const u8 sRattataAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_5_1.lz");
static const u8 sRattataAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_5_2.lz");
static const u8 sRattataAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_5_3.lz");
static const u8 sRattataAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_5_4.lz");
static const u8 sRattataAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_5_5.lz");
static const u8 sRattataAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_5_6.lz");
static const u8 sRattataAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_5_7.lz");
static const u8 sRattataAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_5_8.lz");
static const u8 sRattataAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_8_1.lz");
static const u8 sRattataAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_8_2.lz");
static const u8 sRattataAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_8_3.lz");
static const u8 sRattataAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_8_4.lz");
static const u8 sRattataAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_8_5.lz");
static const u8 sRattataAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_8_6.lz");
static const u8 sRattataAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_8_7.lz");
static const u8 sRattataAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_8_8.lz");
static const u8 sRattataAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_9_1.lz");
static const u8 sRattataAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_9_2.lz");
static const u8 sRattataAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_9_4.lz");
static const u8 sRattataAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_9_6.lz");
static const u8 sRattataAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/rattata/sRattataAnims_9_8.lz");

static const u8 sRattataGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_1.4bpp.lz");
static const ax_sprite sRattataSprites1[] = {
	{sRattataGfx1, ARRAY_COUNT(sRattataGfx1)}, 
	{NULL, 0}
};
static const u8 sRattataGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_2.4bpp.lz");
static const ax_sprite sRattataSprites2[] = {
	{sRattataGfx2, ARRAY_COUNT(sRattataGfx2)}, 
	{NULL, 0}
};
static const u8 sRattataGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_3.4bpp.lz");
static const ax_sprite sRattataSprites3[] = {
	{sRattataGfx3, ARRAY_COUNT(sRattataGfx3)}, 
	{NULL, 0}
};
static const u8 sRattataGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_4.4bpp.lz");
static const ax_sprite sRattataSprites4[] = {
	{sRattataGfx4, ARRAY_COUNT(sRattataGfx4)}, 
	{NULL, 0}
};
static const u8 sRattataGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_5.4bpp.lz");
static const ax_sprite sRattataSprites5[] = {
	{sRattataGfx5, ARRAY_COUNT(sRattataGfx5)}, 
	{NULL, 0}
};
static const u8 sRattataGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_6.4bpp.lz");
static const ax_sprite sRattataSprites6[] = {
	{sRattataGfx6, ARRAY_COUNT(sRattataGfx6)}, 
	{NULL, 0}
};
static const u8 sRattataGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_7.4bpp.lz");
static const ax_sprite sRattataSprites7[] = {
	{sRattataGfx7, ARRAY_COUNT(sRattataGfx7)}, 
	{NULL, 0}
};
static const u8 sRattataGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_8.4bpp.lz");
static const ax_sprite sRattataSprites8[] = {
	{sRattataGfx8, ARRAY_COUNT(sRattataGfx8)}, 
	{NULL, 0}
};
static const u8 sRattataGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_9.4bpp.lz");
static const ax_sprite sRattataSprites9[] = {
	{sRattataGfx9, ARRAY_COUNT(sRattataGfx9)}, 
	{NULL, 0}
};
static const u8 sRattataGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_10.4bpp.lz");
static const ax_sprite sRattataSprites10[] = {
	{sRattataGfx10, ARRAY_COUNT(sRattataGfx10)}, 
	{NULL, 0}
};
static const u8 sRattataGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_11.4bpp.lz");
static const ax_sprite sRattataSprites11[] = {
	{sRattataGfx11, ARRAY_COUNT(sRattataGfx11)}, 
	{NULL, 0}
};
static const u8 sRattataGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_12.4bpp.lz");
static const ax_sprite sRattataSprites12[] = {
	{sRattataGfx12, ARRAY_COUNT(sRattataGfx12)}, 
	{NULL, 0}
};
static const u8 sRattataGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_13.4bpp.lz");
static const ax_sprite sRattataSprites13[] = {
	{sRattataGfx13, ARRAY_COUNT(sRattataGfx13)}, 
	{NULL, 0}
};
static const u8 sRattataGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_14.4bpp.lz");
static const ax_sprite sRattataSprites14[] = {
	{sRattataGfx14, ARRAY_COUNT(sRattataGfx14)}, 
	{NULL, 0}
};
static const u8 sRattataGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_15.4bpp.lz");
static const ax_sprite sRattataSprites15[] = {
	{sRattataGfx15, ARRAY_COUNT(sRattataGfx15)}, 
	{NULL, 0}
};
static const u8 sRattataGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_16.4bpp.lz");
static const ax_sprite sRattataSprites16[] = {
	{sRattataGfx16, ARRAY_COUNT(sRattataGfx16)}, 
	{NULL, 0}
};
static const u8 sRattataGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_17.4bpp.lz");
static const u8 sRattataGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_17_1.4bpp.lz");
static const u8 sRattataGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_17_2.4bpp.lz");
static const u8 sRattataGfx17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_17_3.4bpp.lz");
static const ax_sprite sRattataSprites17[] = {
	{sRattataGfx17, ARRAY_COUNT(sRattataGfx17)}, 
	{NULL, 64}, 
	{sRattataGfx17_1, ARRAY_COUNT(sRattataGfx17_1)}, 
	{NULL, 64}, 
	{sRattataGfx17_2, ARRAY_COUNT(sRattataGfx17_2)}, 
	{NULL, 32}, 
	{sRattataGfx17_3, ARRAY_COUNT(sRattataGfx17_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRattataGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_18.4bpp.lz");
static const u8 sRattataGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_18_1.4bpp.lz");
static const u8 sRattataGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_18_2.4bpp.lz");
static const u8 sRattataGfx18_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_18_3.4bpp.lz");
static const ax_sprite sRattataSprites18[] = {
	{NULL, 64}, 
	{sRattataGfx18, ARRAY_COUNT(sRattataGfx18)}, 
	{NULL, 32}, 
	{sRattataGfx18_1, ARRAY_COUNT(sRattataGfx18_1)}, 
	{NULL, 32}, 
	{sRattataGfx18_2, ARRAY_COUNT(sRattataGfx18_2)}, 
	{NULL, 64}, 
	{sRattataGfx18_3, ARRAY_COUNT(sRattataGfx18_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRattataGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_19.4bpp.lz");
static const u8 sRattataGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_19_1.4bpp.lz");
static const ax_sprite sRattataSprites19[] = {
	{NULL, 32}, 
	{sRattataGfx19, ARRAY_COUNT(sRattataGfx19)}, 
	{NULL, 32}, 
	{sRattataGfx19_1, ARRAY_COUNT(sRattataGfx19_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sRattataGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_20.4bpp.lz");
static const ax_sprite sRattataSprites20[] = {
	{sRattataGfx20, ARRAY_COUNT(sRattataGfx20)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sRattataGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_21.4bpp.lz");
static const ax_sprite sRattataSprites21[] = {
	{sRattataGfx21, ARRAY_COUNT(sRattataGfx21)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRattataGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_22.4bpp.lz");
static const u8 sRattataGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_22_1.4bpp.lz");
static const u8 sRattataGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_22_2.4bpp.lz");
static const ax_sprite sRattataSprites22[] = {
	{sRattataGfx22, ARRAY_COUNT(sRattataGfx22)}, 
	{NULL, 64}, 
	{sRattataGfx22_1, ARRAY_COUNT(sRattataGfx22_1)}, 
	{NULL, 64}, 
	{sRattataGfx22_2, ARRAY_COUNT(sRattataGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sRattataGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_23.4bpp.lz");
static const u8 sRattataGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_23_1.4bpp.lz");
static const u8 sRattataGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_23_2.4bpp.lz");
static const ax_sprite sRattataSprites23[] = {
	{sRattataGfx23, ARRAY_COUNT(sRattataGfx23)}, 
	{NULL, 64}, 
	{sRattataGfx23_1, ARRAY_COUNT(sRattataGfx23_1)}, 
	{NULL, 64}, 
	{sRattataGfx23_2, ARRAY_COUNT(sRattataGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sRattataGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_24.4bpp.lz");
static const u8 sRattataGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_24_1.4bpp.lz");
static const u8 sRattataGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_24_2.4bpp.lz");
static const ax_sprite sRattataSprites24[] = {
	{NULL, 32}, 
	{sRattataGfx24, ARRAY_COUNT(sRattataGfx24)}, 
	{NULL, 32}, 
	{sRattataGfx24_1, ARRAY_COUNT(sRattataGfx24_1)}, 
	{NULL, 32}, 
	{sRattataGfx24_2, ARRAY_COUNT(sRattataGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sRattataGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_25.4bpp.lz");
static const u8 sRattataGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_25_1.4bpp.lz");
static const u8 sRattataGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_25_2.4bpp.lz");
static const ax_sprite sRattataSprites25[] = {
	{NULL, 32}, 
	{sRattataGfx25, ARRAY_COUNT(sRattataGfx25)}, 
	{NULL, 32}, 
	{sRattataGfx25_1, ARRAY_COUNT(sRattataGfx25_1)}, 
	{NULL, 32}, 
	{sRattataGfx25_2, ARRAY_COUNT(sRattataGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sRattataGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_26.4bpp.lz");
static const ax_sprite sRattataSprites26[] = {
	{NULL, 64}, 
	{sRattataGfx26, ARRAY_COUNT(sRattataGfx26)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sRattataGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_27.4bpp.lz");
static const u8 sRattataGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_27_1.4bpp.lz");
static const ax_sprite sRattataSprites27[] = {
	{NULL, 64}, 
	{sRattataGfx27, ARRAY_COUNT(sRattataGfx27)}, 
	{NULL, 32}, 
	{sRattataGfx27_1, ARRAY_COUNT(sRattataGfx27_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sRattataGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_28.4bpp.lz");
static const u8 sRattataGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_28_1.4bpp.lz");
static const u8 sRattataGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_28_2.4bpp.lz");
static const ax_sprite sRattataSprites28[] = {
	{sRattataGfx28, ARRAY_COUNT(sRattataGfx28)}, 
	{NULL, 32}, 
	{sRattataGfx28_1, ARRAY_COUNT(sRattataGfx28_1)}, 
	{NULL, 32}, 
	{sRattataGfx28_2, ARRAY_COUNT(sRattataGfx28_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sRattataGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_29.4bpp.lz");
static const u8 sRattataGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_29_1.4bpp.lz");
static const u8 sRattataGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_29_2.4bpp.lz");
static const ax_sprite sRattataSprites29[] = {
	{sRattataGfx29, ARRAY_COUNT(sRattataGfx29)}, 
	{NULL, 32}, 
	{sRattataGfx29_1, ARRAY_COUNT(sRattataGfx29_1)}, 
	{NULL, 32}, 
	{sRattataGfx29_2, ARRAY_COUNT(sRattataGfx29_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sRattataGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_30.4bpp.lz");
static const ax_sprite sRattataSprites30[] = {
	{sRattataGfx30, ARRAY_COUNT(sRattataGfx30)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRattataGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_31.4bpp.lz");
static const ax_sprite sRattataSprites31[] = {
	{sRattataGfx31, ARRAY_COUNT(sRattataGfx31)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRattataGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_32.4bpp.lz");
static const ax_sprite sRattataSprites32[] = {
	{sRattataGfx32, ARRAY_COUNT(sRattataGfx32)}, 
	{NULL, 0}
};
static const u8 sRattataGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_33.4bpp.lz");
static const ax_sprite sRattataSprites33[] = {
	{sRattataGfx33, ARRAY_COUNT(sRattataGfx33)}, 
	{NULL, 0}
};
static const u8 sRattataGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_34.4bpp.lz");
static const ax_sprite sRattataSprites34[] = {
	{sRattataGfx34, ARRAY_COUNT(sRattataGfx34)}, 
	{NULL, 0}
};
static const u8 sRattataGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_35.4bpp.lz");
static const ax_sprite sRattataSprites35[] = {
	{sRattataGfx35, ARRAY_COUNT(sRattataGfx35)}, 
	{NULL, 0}
};
static const u8 sRattataGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_36.4bpp.lz");
static const ax_sprite sRattataSprites36[] = {
	{sRattataGfx36, ARRAY_COUNT(sRattataGfx36)}, 
	{NULL, 0}
};
static const u8 sRattataGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_37.4bpp.lz");
static const ax_sprite sRattataSprites37[] = {
	{sRattataGfx37, ARRAY_COUNT(sRattataGfx37)}, 
	{NULL, 0}
};
static const u8 sRattataGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/rattata/sprite_38.4bpp.lz");
static const ax_sprite sRattataSprites38[] = {
	{sRattataGfx38, ARRAY_COUNT(sRattataGfx38)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesRattata[] = {
	sRattataPose1,
	sRattataPose2,
	sRattataPose3,
	sRattataPose4,
	sRattataPose5,
	sRattataPose6,
	sRattataPose7,
	sRattataPose8,
	sRattataPose9,
	sRattataPose10,
	sRattataPose11,
	sRattataPose12,
	sRattataPose13,
	sRattataPose14,
	sRattataPose15,
	sRattataPose16,
	sRattataPose17,
	sRattataPose18,
	sRattataPose19,
	sRattataPose20,
	sRattataPose21,
	sRattataPose22,
	sRattataPose23,
	sRattataPose24,
	sRattataPose1,
	sRattataPose2,
	sRattataPose3,
	sRattataPose28,
	sRattataPose4,
	sRattataPose5,
	sRattataPose6,
	sRattataPose32,
	sRattataPose7,
	sRattataPose8,
	sRattataPose9,
	sRattataPose36,
	sRattataPose10,
	sRattataPose11,
	sRattataPose12,
	sRattataPose40,
	sRattataPose13,
	sRattataPose14,
	sRattataPose15,
	sRattataPose44,
	sRattataPose16,
	sRattataPose17,
	sRattataPose18,
	sRattataPose48,
	sRattataPose19,
	sRattataPose20,
	sRattataPose21,
	sRattataPose52,
	sRattataPose22,
	sRattataPose23,
	sRattataPose24,
	sRattataPose56,
	sRattataPose1,
	sRattataPose2,
	sRattataPose3,
	sRattataPose28,
	sRattataPose4,
	sRattataPose5,
	sRattataPose6,
	sRattataPose32,
	sRattataPose7,
	sRattataPose8,
	sRattataPose9,
	sRattataPose36,
	sRattataPose10,
	sRattataPose11,
	sRattataPose12,
	sRattataPose40,
	sRattataPose13,
	sRattataPose14,
	sRattataPose15,
	sRattataPose44,
	sRattataPose16,
	sRattataPose17,
	sRattataPose18,
	sRattataPose48,
	sRattataPose19,
	sRattataPose20,
	sRattataPose21,
	sRattataPose52,
	sRattataPose22,
	sRattataPose23,
	sRattataPose24,
	sRattataPose56,
	sRattataPose1,
	sRattataPose28,
	sRattataPose4,
	sRattataPose32,
	sRattataPose7,
	sRattataPose36,
	sRattataPose10,
	sRattataPose40,
	sRattataPose13,
	sRattataPose44,
	sRattataPose16,
	sRattataPose48,
	sRattataPose19,
	sRattataPose52,
	sRattataPose22,
	sRattataPose56,
	sRattataPose1,
	sRattataPose2,
	sRattataPose3,
	sRattataPose108,
	sRattataPose109,
	sRattataPose4,
	sRattataPose5,
	sRattataPose6,
	sRattataPose113,
	sRattataPose114,
	sRattataPose7,
	sRattataPose8,
	sRattataPose9,
	sRattataPose118,
	sRattataPose119,
	sRattataPose10,
	sRattataPose121,
	sRattataPose12,
	sRattataPose123,
	sRattataPose124,
	sRattataPose13,
	sRattataPose14,
	sRattataPose15,
	sRattataPose128,
	sRattataPose129,
	sRattataPose16,
	sRattataPose131,
	sRattataPose18,
	sRattataPose133,
	sRattataPose134,
	sRattataPose19,
	sRattataPose20,
	sRattataPose21,
	sRattataPose138,
	sRattataPose139,
	sRattataPose22,
	sRattataPose23,
	sRattataPose24,
	sRattataPose143,
	sRattataPose144,
	sRattataPose145,
	sRattataPose146,
	sRattataPose147,
	sRattataPose148,
	sRattataPose149,
	sRattataPose150,
	sRattataPose151,
	sRattataPose152,
	sRattataPose153,
	sRattataPose154,
	sRattataPose1,
	sRattataPose2,
	sRattataPose3,
	sRattataPose4,
	sRattataPose5,
	sRattataPose6,
	sRattataPose7,
	sRattataPose8,
	sRattataPose9,
	sRattataPose10,
	sRattataPose11,
	sRattataPose12,
	sRattataPose13,
	sRattataPose14,
	sRattataPose15,
	sRattataPose16,
	sRattataPose17,
	sRattataPose18,
	sRattataPose19,
	sRattataPose20,
	sRattataPose21,
	sRattataPose22,
	sRattataPose23,
	sRattataPose24,
	sRattataPose1,
	sRattataPose180,
	sRattataPose181,
	sRattataPose182,
	sRattataPose13,
	sRattataPose10,
	sRattataPose185,
	sRattataPose186,
	sRattataPose28,
	sRattataPose188,
	sRattataPose189,
	sRattataPose190,
	sRattataPose44,
	sRattataPose192,
	sRattataPose193,
	sRattataPose194,
	sRattataPose1,
	sRattataPose2,
	sRattataPose3,
	sRattataPose4,
	sRattataPose5,
	sRattataPose6,
	sRattataPose7,
	sRattataPose8,
	sRattataPose9,
	sRattataPose10,
	sRattataPose11,
	sRattataPose12,
	sRattataPose13,
	sRattataPose14,
	sRattataPose15,
	sRattataPose16,
	sRattataPose17,
	sRattataPose18,
	sRattataPose19,
	sRattataPose20,
	sRattataPose21,
	sRattataPose22,
	sRattataPose23,
	sRattataPose24,
	sRattataPose28,
	sRattataPose194,
	sRattataPose193,
	sRattataPose192,
	sRattataPose44,
	sRattataPose190,
	sRattataPose189,
	sRattataPose188,
	sRattataPose1,
	sRattataPose180,
	sRattataPose181,
	sRattataPose182,
	sRattataPose13,
	sRattataPose10,
	sRattataPose185,
	sRattataPose186,
};

static const struct PositionSets sAxPositionsRattata[] = {
	[0] = { .set = { {0, -1}, {-6, 1}, {5, 1}, {0, -7} } },
	[1] = { .set = { {0, -6}, {-6, -6}, {5, -6}, {0, -11} } },
	[2] = { .set = { {0, 0}, {-5, 2}, {4, 2}, {0, -7} } },
	[3] = { .set = { {4, 0}, {8, 1}, {-1, 2}, {0, -6} } },
	[4] = { .set = { {4, -4}, {6, -5}, {-2, -3}, {-1, -7} } },
	[5] = { .set = { {4, -1}, {9, -2}, {2, 2}, {-1, -8} } },
	[6] = { .set = { {7, -3}, {7, -4}, {3, 0}, {-1, -6} } },
	[7] = { .set = { {8, -6}, {8, -7}, {3, -4}, {-1, -7} } },
	[8] = { .set = { {6, -3}, {6, 0}, {6, 1}, {-1, -8} } },
	[9] = { .set = { {7, -7}, {-1, -4}, {6, -2}, {-1, -7} } },
	[10] = { .set = { {6, -9}, {-1, -7}, {5, -5}, {-2, -7} } },
	[11] = { .set = { {6, -7}, {0, -5}, {6, -2}, {-1, -9} } },
	[12] = { .set = { {0, -10}, {5, -5}, {-6, -5}, {0, -7} } },
	[13] = { .set = { {0, -13}, {4, -8}, {-5, -8}, {0, -7} } },
	[14] = { .set = { {0, -10}, {4, -8}, {-5, -8}, {0, -9} } },
	[15] = { .set = { {-8, -7}, {0, -4}, {-7, -2}, {0, -7} } },
	[16] = { .set = { {-7, -9}, {0, -7}, {-6, -5}, {1, -7} } },
	[17] = { .set = { {-7, -7}, {-1, -5}, {-7, -2}, {0, -9} } },
	[18] = { .set = { {-8, -3}, {-8, -4}, {-4, 0}, {0, -6} } },
	[19] = { .set = { {-9, -6}, {-9, -7}, {-4, -4}, {0, -7} } },
	[20] = { .set = { {-7, -3}, {-7, 0}, {-7, 1}, {0, -8} } },
	[21] = { .set = { {-5, 0}, {-9, 1}, {0, 2}, {-1, -6} } },
	[22] = { .set = { {-5, -4}, {-7, -5}, {1, -3}, {0, -7} } },
	[23] = { .set = { {-5, -1}, {-10, -2}, {-3, 2}, {0, -8} } },
	[24] = { .set = { {0, -1}, {-6, 1}, {5, 1}, {0, -7} } },
	[25] = { .set = { {0, -6}, {-6, -6}, {5, -6}, {0, -11} } },
	[26] = { .set = { {0, 0}, {-5, 2}, {4, 2}, {0, -7} } },
	[27] = { .set = { {0, 0}, {-7, 3}, {6, 3}, {0, -6} } },
	[28] = { .set = { {4, 0}, {8, 1}, {-1, 2}, {0, -6} } },
	[29] = { .set = { {4, -4}, {6, -5}, {-2, -3}, {-1, -7} } },
	[30] = { .set = { {4, -1}, {9, -2}, {2, 2}, {-1, -8} } },
	[31] = { .set = { {5, 1}, {10, 2}, {0, 4}, {1, -5} } },
	[32] = { .set = { {7, -3}, {7, -4}, {3, 0}, {-1, -6} } },
	[33] = { .set = { {8, -6}, {8, -7}, {3, -4}, {-1, -7} } },
	[34] = { .set = { {6, -3}, {6, 0}, {6, 1}, {-1, -8} } },
	[35] = { .set = { {9, -3}, {7, -1}, {6, 0}, {0, -6} } },
	[36] = { .set = { {7, -7}, {-1, -4}, {6, -2}, {-1, -7} } },
	[37] = { .set = { {6, -9}, {-1, -7}, {5, -5}, {-2, -7} } },
	[38] = { .set = { {6, -7}, {0, -5}, {6, -2}, {-1, -9} } },
	[39] = { .set = { {8, -9}, {0, -7}, {8, -4}, {-1, -7} } },
	[40] = { .set = { {0, -10}, {5, -5}, {-6, -5}, {0, -7} } },
	[41] = { .set = { {0, -13}, {4, -8}, {-5, -8}, {0, -7} } },
	[42] = { .set = { {0, -10}, {4, -8}, {-5, -8}, {0, -9} } },
	[43] = { .set = { {0, -13}, {6, -6}, {-7, -6}, {0, -8} } },
	[44] = { .set = { {-8, -7}, {0, -4}, {-7, -2}, {0, -7} } },
	[45] = { .set = { {-7, -9}, {0, -7}, {-6, -5}, {1, -7} } },
	[46] = { .set = { {-7, -7}, {-1, -5}, {-7, -2}, {0, -9} } },
	[47] = { .set = { {-9, -9}, {-1, -7}, {-9, -4}, {0, -7} } },
	[48] = { .set = { {-8, -3}, {-8, -4}, {-4, 0}, {0, -6} } },
	[49] = { .set = { {-9, -6}, {-9, -7}, {-4, -4}, {0, -7} } },
	[50] = { .set = { {-7, -3}, {-7, 0}, {-7, 1}, {0, -8} } },
	[51] = { .set = { {-10, -3}, {-8, -1}, {-7, 0}, {-1, -6} } },
	[52] = { .set = { {-5, 0}, {-9, 1}, {0, 2}, {-1, -6} } },
	[53] = { .set = { {-5, -4}, {-7, -5}, {1, -3}, {0, -7} } },
	[54] = { .set = { {-5, -1}, {-10, -2}, {-3, 2}, {0, -8} } },
	[55] = { .set = { {-6, 1}, {-11, 2}, {-1, 4}, {-2, -5} } },
	[56] = { .set = { {0, -1}, {-6, 1}, {5, 1}, {0, -7} } },
	[57] = { .set = { {0, -6}, {-6, -6}, {5, -6}, {0, -11} } },
	[58] = { .set = { {0, 0}, {-5, 2}, {4, 2}, {0, -7} } },
	[59] = { .set = { {0, 0}, {-7, 3}, {6, 3}, {0, -6} } },
	[60] = { .set = { {4, 0}, {8, 1}, {-1, 2}, {0, -6} } },
	[61] = { .set = { {4, -4}, {6, -5}, {-2, -3}, {-1, -7} } },
	[62] = { .set = { {4, -1}, {9, -2}, {2, 2}, {-1, -8} } },
	[63] = { .set = { {5, 1}, {10, 2}, {0, 4}, {1, -5} } },
	[64] = { .set = { {7, -3}, {7, -4}, {3, 0}, {-1, -6} } },
	[65] = { .set = { {8, -6}, {8, -7}, {3, -4}, {-1, -7} } },
	[66] = { .set = { {6, -3}, {6, 0}, {6, 1}, {-1, -8} } },
	[67] = { .set = { {9, -3}, {7, -1}, {6, 0}, {0, -6} } },
	[68] = { .set = { {7, -7}, {-1, -4}, {6, -2}, {-1, -7} } },
	[69] = { .set = { {6, -9}, {-1, -7}, {5, -5}, {-2, -7} } },
	[70] = { .set = { {6, -7}, {0, -5}, {6, -2}, {-1, -9} } },
	[71] = { .set = { {8, -9}, {0, -7}, {8, -4}, {-1, -7} } },
	[72] = { .set = { {0, -10}, {5, -5}, {-6, -5}, {0, -7} } },
	[73] = { .set = { {0, -13}, {4, -8}, {-5, -8}, {0, -7} } },
	[74] = { .set = { {0, -10}, {4, -8}, {-5, -8}, {0, -9} } },
	[75] = { .set = { {0, -13}, {6, -6}, {-7, -6}, {0, -8} } },
	[76] = { .set = { {-8, -7}, {0, -4}, {-7, -2}, {0, -7} } },
	[77] = { .set = { {-7, -9}, {0, -7}, {-6, -5}, {1, -7} } },
	[78] = { .set = { {-7, -7}, {-1, -5}, {-7, -2}, {0, -9} } },
	[79] = { .set = { {-9, -9}, {-1, -7}, {-9, -4}, {0, -7} } },
	[80] = { .set = { {-8, -3}, {-8, -4}, {-4, 0}, {0, -6} } },
	[81] = { .set = { {-9, -6}, {-9, -7}, {-4, -4}, {0, -7} } },
	[82] = { .set = { {-7, -3}, {-7, 0}, {-7, 1}, {0, -8} } },
	[83] = { .set = { {-10, -3}, {-8, -1}, {-7, 0}, {-1, -6} } },
	[84] = { .set = { {-5, 0}, {-9, 1}, {0, 2}, {-1, -6} } },
	[85] = { .set = { {-5, -4}, {-7, -5}, {1, -3}, {0, -7} } },
	[86] = { .set = { {-5, -1}, {-10, -2}, {-3, 2}, {0, -8} } },
	[87] = { .set = { {-6, 1}, {-11, 2}, {-1, 4}, {-2, -5} } },
	[88] = { .set = { {0, -1}, {-6, 1}, {5, 1}, {0, -7} } },
	[89] = { .set = { {0, 0}, {-7, 3}, {6, 3}, {0, -6} } },
	[90] = { .set = { {4, 0}, {8, 1}, {-1, 2}, {0, -6} } },
	[91] = { .set = { {5, 1}, {10, 2}, {0, 4}, {1, -5} } },
	[92] = { .set = { {7, -3}, {7, -4}, {3, 0}, {-1, -6} } },
	[93] = { .set = { {9, -3}, {7, -1}, {6, 0}, {0, -6} } },
	[94] = { .set = { {7, -7}, {-1, -4}, {6, -2}, {-1, -7} } },
	[95] = { .set = { {8, -9}, {0, -7}, {8, -4}, {-1, -7} } },
	[96] = { .set = { {0, -10}, {5, -5}, {-6, -5}, {0, -7} } },
	[97] = { .set = { {0, -13}, {6, -6}, {-7, -6}, {0, -8} } },
	[98] = { .set = { {-8, -7}, {0, -4}, {-7, -2}, {0, -7} } },
	[99] = { .set = { {-9, -9}, {-1, -7}, {-9, -4}, {0, -7} } },
	[100] = { .set = { {-8, -3}, {-8, -4}, {-4, 0}, {0, -6} } },
	[101] = { .set = { {-10, -3}, {-8, -1}, {-7, 0}, {-1, -6} } },
	[102] = { .set = { {-5, 0}, {-9, 1}, {0, 2}, {-1, -6} } },
	[103] = { .set = { {-6, 1}, {-11, 2}, {-1, 4}, {-2, -5} } },
	[104] = { .set = { {0, -1}, {-6, 1}, {5, 1}, {0, -7} } },
	[105] = { .set = { {0, -6}, {-6, -6}, {5, -6}, {0, -11} } },
	[106] = { .set = { {0, 0}, {-5, 2}, {4, 2}, {0, -7} } },
	[107] = { .set = { {0, 1}, {-6, 2}, {5, 2}, {0, -6} } },
	[108] = { .set = { {0, 1}, {-6, 2}, {5, 2}, {0, -6} } },
	[109] = { .set = { {4, 0}, {8, 1}, {-1, 2}, {0, -6} } },
	[110] = { .set = { {4, -4}, {6, -5}, {-2, -3}, {-1, -7} } },
	[111] = { .set = { {4, -1}, {9, -2}, {2, 2}, {-1, -8} } },
	[112] = { .set = { {3, 2}, {9, 1}, {-1, 2}, {0, -5} } },
	[113] = { .set = { {3, 2}, {9, 1}, {-1, 2}, {0, -5} } },
	[114] = { .set = { {7, -3}, {7, -4}, {3, 0}, {-1, -6} } },
	[115] = { .set = { {8, -6}, {8, -7}, {3, -4}, {-1, -7} } },
	[116] = { .set = { {6, -3}, {6, 0}, {6, 1}, {-1, -8} } },
	[117] = { .set = { {6, -1}, {3, -1}, {2, 0}, {-2, -6} } },
	[118] = { .set = { {6, -1}, {3, -1}, {2, 0}, {-2, -6} } },
	[119] = { .set = { {7, -7}, {-1, -4}, {6, -2}, {-1, -7} } },
	[120] = { .set = { {7, -9}, {0, -7}, {6, -5}, {-1, -7} } },
	[121] = { .set = { {6, -7}, {0, -5}, {6, -2}, {-1, -9} } },
	[122] = { .set = { {8, -6}, {-1, -6}, {6, -3}, {-2, -6} } },
	[123] = { .set = { {8, -6}, {-1, -6}, {6, -3}, {-2, -6} } },
	[124] = { .set = { {0, -10}, {5, -5}, {-6, -5}, {0, -7} } },
	[125] = { .set = { {0, -13}, {4, -8}, {-5, -8}, {0, -7} } },
	[126] = { .set = { {0, -10}, {4, -8}, {-5, -8}, {0, -9} } },
	[127] = { .set = { {0, -10}, {5, -5}, {-6, -5}, {0, -7} } },
	[128] = { .set = { {0, -9}, {5, -5}, {-6, -5}, {0, -7} } },
	[129] = { .set = { {-8, -7}, {0, -4}, {-7, -2}, {0, -7} } },
	[130] = { .set = { {-8, -9}, {-1, -7}, {-7, -5}, {0, -7} } },
	[131] = { .set = { {-7, -7}, {-1, -5}, {-7, -2}, {0, -9} } },
	[132] = { .set = { {-9, -6}, {0, -6}, {-7, -3}, {1, -6} } },
	[133] = { .set = { {-9, -6}, {0, -6}, {-7, -3}, {1, -6} } },
	[134] = { .set = { {-8, -3}, {-8, -4}, {-4, 0}, {0, -6} } },
	[135] = { .set = { {-9, -6}, {-9, -7}, {-4, -4}, {0, -7} } },
	[136] = { .set = { {-7, -3}, {-7, 0}, {-7, 1}, {0, -8} } },
	[137] = { .set = { {-7, -1}, {-4, -1}, {-3, 0}, {1, -6} } },
	[138] = { .set = { {-7, -1}, {-4, -1}, {-3, 0}, {1, -6} } },
	[139] = { .set = { {-5, 0}, {-9, 1}, {0, 2}, {-1, -6} } },
	[140] = { .set = { {-5, -4}, {-7, -5}, {1, -3}, {0, -7} } },
	[141] = { .set = { {-5, -1}, {-10, -2}, {-3, 2}, {0, -8} } },
	[142] = { .set = { {-4, 2}, {-10, 1}, {0, 2}, {-1, -5} } },
	[143] = { .set = { {-4, 2}, {-10, 1}, {0, 2}, {-1, -5} } },
	[144] = { .set = { {-5, 0}, {-7, 0}, {-1, 1}, {0, -5} } },
	[145] = { .set = { {-5, 1}, {-8, 0}, {-1, 1}, {-1, -4} } },
	[146] = { .set = { {-1, -8}, {-7, -9}, {6, -9}, {0, -8} } },
	[147] = { .set = { {0, -10}, {2, -12}, {-6, -9}, {-5, -7} } },
	[148] = { .set = { {-1, -7}, {-1, -11}, {-4, -9}, {-5, -6} } },
	[149] = { .set = { {1, -11}, {-4, -10}, {2, -8}, {-5, -5} } },
	[150] = { .set = { {0, -10}, {5, -8}, {-6, -8}, {0, -6} } },
	[151] = { .set = { {-2, -11}, {3, -10}, {-3, -8}, {4, -5} } },
	[152] = { .set = { {0, -7}, {0, -11}, {3, -9}, {4, -6} } },
	[153] = { .set = { {-1, -10}, {-3, -12}, {5, -9}, {4, -7} } },
	[154] = { .set = { {0, -1}, {-6, 1}, {5, 1}, {0, -7} } },
	[155] = { .set = { {0, -6}, {-6, -6}, {5, -6}, {0, -11} } },
	[156] = { .set = { {0, 0}, {-5, 2}, {4, 2}, {0, -7} } },
	[157] = { .set = { {4, 0}, {8, 1}, {-1, 2}, {0, -6} } },
	[158] = { .set = { {4, -4}, {6, -5}, {-2, -3}, {-1, -7} } },
	[159] = { .set = { {4, -1}, {9, -2}, {2, 2}, {-1, -8} } },
	[160] = { .set = { {7, -3}, {7, -4}, {3, 0}, {-1, -6} } },
	[161] = { .set = { {8, -6}, {8, -7}, {3, -4}, {-1, -7} } },
	[162] = { .set = { {6, -3}, {6, 0}, {6, 1}, {-1, -8} } },
	[163] = { .set = { {7, -7}, {-1, -4}, {6, -2}, {-1, -7} } },
	[164] = { .set = { {6, -9}, {-1, -7}, {5, -5}, {-2, -7} } },
	[165] = { .set = { {6, -7}, {0, -5}, {6, -2}, {-1, -9} } },
	[166] = { .set = { {0, -10}, {5, -5}, {-6, -5}, {0, -7} } },
	[167] = { .set = { {0, -13}, {4, -8}, {-5, -8}, {0, -7} } },
	[168] = { .set = { {0, -10}, {4, -8}, {-5, -8}, {0, -9} } },
	[169] = { .set = { {-8, -7}, {0, -4}, {-7, -2}, {0, -7} } },
	[170] = { .set = { {-7, -9}, {0, -7}, {-6, -5}, {1, -7} } },
	[171] = { .set = { {-7, -7}, {-1, -5}, {-7, -2}, {0, -9} } },
	[172] = { .set = { {-8, -3}, {-8, -4}, {-4, 0}, {0, -6} } },
	[173] = { .set = { {-9, -6}, {-9, -7}, {-4, -4}, {0, -7} } },
	[174] = { .set = { {-7, -3}, {-7, 0}, {-7, 1}, {0, -8} } },
	[175] = { .set = { {-5, 0}, {-9, 1}, {0, 2}, {-1, -6} } },
	[176] = { .set = { {-5, -4}, {-7, -5}, {1, -3}, {0, -7} } },
	[177] = { .set = { {-5, -1}, {-10, -2}, {-3, 2}, {0, -8} } },
	[178] = { .set = { {0, -1}, {-6, 1}, {5, 1}, {0, -7} } },
	[179] = { .set = { {-5, -1}, {-9, 0}, {0, 1}, {-1, -7} } },
	[180] = { .set = { {-8, -4}, {-8, -5}, {-4, -1}, {0, -7} } },
	[181] = { .set = { {-7, -7}, {1, -4}, {-6, -2}, {1, -7} } },
	[182] = { .set = { {0, -10}, {5, -5}, {-6, -5}, {0, -7} } },
	[183] = { .set = { {7, -7}, {-1, -4}, {6, -2}, {-1, -7} } },
	[184] = { .set = { {7, -4}, {7, -5}, {3, -1}, {-1, -7} } },
	[185] = { .set = { {4, -1}, {8, 0}, {-1, 1}, {0, -7} } },
	[186] = { .set = { {0, 0}, {-7, 3}, {6, 3}, {0, -6} } },
	[187] = { .set = { {4, 1}, {9, 2}, {-1, 4}, {0, -5} } },
	[188] = { .set = { {8, -3}, {6, -1}, {5, 0}, {-1, -6} } },
	[189] = { .set = { {7, -9}, {-1, -7}, {7, -4}, {-2, -7} } },
	[190] = { .set = { {0, -13}, {6, -6}, {-7, -6}, {0, -8} } },
	[191] = { .set = { {-8, -9}, {0, -7}, {-8, -4}, {1, -7} } },
	[192] = { .set = { {-9, -3}, {-7, -1}, {-6, 0}, {0, -6} } },
	[193] = { .set = { {-5, 1}, {-10, 2}, {0, 4}, {-1, -5} } },
	[194] = { .set = { {0, -1}, {-6, 1}, {5, 1}, {0, -7} } },
	[195] = { .set = { {0, -6}, {-6, -6}, {5, -6}, {0, -11} } },
	[196] = { .set = { {0, 0}, {-5, 2}, {4, 2}, {0, -7} } },
	[197] = { .set = { {4, 0}, {8, 1}, {-1, 2}, {0, -6} } },
	[198] = { .set = { {4, -4}, {6, -5}, {-2, -3}, {-1, -7} } },
	[199] = { .set = { {4, -1}, {9, -2}, {2, 2}, {-1, -8} } },
	[200] = { .set = { {7, -3}, {7, -4}, {3, 0}, {-1, -6} } },
	[201] = { .set = { {8, -6}, {8, -7}, {3, -4}, {-1, -7} } },
	[202] = { .set = { {6, -3}, {6, 0}, {6, 1}, {-1, -8} } },
	[203] = { .set = { {7, -7}, {-1, -4}, {6, -2}, {-1, -7} } },
	[204] = { .set = { {6, -9}, {-1, -7}, {5, -5}, {-2, -7} } },
	[205] = { .set = { {6, -7}, {0, -5}, {6, -2}, {-1, -9} } },
	[206] = { .set = { {0, -10}, {5, -5}, {-6, -5}, {0, -7} } },
	[207] = { .set = { {0, -13}, {4, -8}, {-5, -8}, {0, -7} } },
	[208] = { .set = { {0, -10}, {4, -8}, {-5, -8}, {0, -9} } },
	[209] = { .set = { {-8, -7}, {0, -4}, {-7, -2}, {0, -7} } },
	[210] = { .set = { {-7, -9}, {0, -7}, {-6, -5}, {1, -7} } },
	[211] = { .set = { {-7, -7}, {-1, -5}, {-7, -2}, {0, -9} } },
	[212] = { .set = { {-8, -3}, {-8, -4}, {-4, 0}, {0, -6} } },
	[213] = { .set = { {-9, -6}, {-9, -7}, {-4, -4}, {0, -7} } },
	[214] = { .set = { {-7, -3}, {-7, 0}, {-7, 1}, {0, -8} } },
	[215] = { .set = { {-5, 0}, {-9, 1}, {0, 2}, {-1, -6} } },
	[216] = { .set = { {-5, -4}, {-7, -5}, {1, -3}, {0, -7} } },
	[217] = { .set = { {-5, -1}, {-10, -2}, {-3, 2}, {0, -8} } },
	[218] = { .set = { {0, 0}, {-7, 3}, {6, 3}, {0, -6} } },
	[219] = { .set = { {-5, 1}, {-10, 2}, {0, 4}, {-1, -5} } },
	[220] = { .set = { {-9, -3}, {-7, -1}, {-6, 0}, {0, -6} } },
	[221] = { .set = { {-8, -9}, {0, -7}, {-8, -4}, {1, -7} } },
	[222] = { .set = { {0, -13}, {6, -6}, {-7, -6}, {0, -8} } },
	[223] = { .set = { {7, -9}, {-1, -7}, {7, -4}, {-2, -7} } },
	[224] = { .set = { {8, -3}, {6, -1}, {5, 0}, {-1, -6} } },
	[225] = { .set = { {4, 1}, {9, 2}, {-1, 4}, {0, -5} } },
	[226] = { .set = { {0, -1}, {-6, 1}, {5, 1}, {0, -7} } },
	[227] = { .set = { {-5, -1}, {-9, 0}, {0, 1}, {-1, -7} } },
	[228] = { .set = { {-8, -4}, {-8, -5}, {-4, -1}, {0, -7} } },
	[229] = { .set = { {-7, -7}, {1, -4}, {-6, -2}, {1, -7} } },
	[230] = { .set = { {0, -10}, {5, -5}, {-6, -5}, {0, -7} } },
	[231] = { .set = { {7, -7}, {-1, -4}, {6, -2}, {-1, -7} } },
	[232] = { .set = { {7, -4}, {7, -5}, {3, -1}, {-1, -7} } },
	[233] = { .set = { {4, -1}, {8, 0}, {-1, 1}, {0, -7} } },
};

static const ax_anim *const sRattataAnimTable1[] = {
	AX_ANIM_PTR(sRattataAnims_1_1),
	AX_ANIM_PTR(sRattataAnims_1_2),
	AX_ANIM_PTR(sRattataAnims_1_3),
	AX_ANIM_PTR(sRattataAnims_1_4),
	AX_ANIM_PTR(sRattataAnims_1_5),
	AX_ANIM_PTR(sRattataAnims_1_6),
	AX_ANIM_PTR(sRattataAnims_1_7),
	AX_ANIM_PTR(sRattataAnims_1_8),
};

static const ax_anim *const sRattataAnimTable2[] = {
	AX_ANIM_PTR(sRattataAnims_2_1),
	AX_ANIM_PTR(sRattataAnims_2_2),
	AX_ANIM_PTR(sRattataAnims_2_3),
	AX_ANIM_PTR(sRattataAnims_2_4),
	AX_ANIM_PTR(sRattataAnims_2_5),
	AX_ANIM_PTR(sRattataAnims_2_6),
	AX_ANIM_PTR(sRattataAnims_2_7),
	AX_ANIM_PTR(sRattataAnims_2_8),
};

static const ax_anim *const sRattataAnimTable3[] = {
	AX_ANIM_PTR(sRattataAnims_3_1),
	AX_ANIM_PTR(sRattataAnims_3_2),
	AX_ANIM_PTR(sRattataAnims_3_3),
	AX_ANIM_PTR(sRattataAnims_3_4),
	AX_ANIM_PTR(sRattataAnims_3_5),
	AX_ANIM_PTR(sRattataAnims_3_6),
	AX_ANIM_PTR(sRattataAnims_3_7),
	AX_ANIM_PTR(sRattataAnims_3_8),
};

static const ax_anim *const sRattataAnimTable4[] = {
	AX_ANIM_PTR(sRattataAnims_4_1),
	AX_ANIM_PTR(sRattataAnims_4_2),
	AX_ANIM_PTR(sRattataAnims_4_3),
	AX_ANIM_PTR(sRattataAnims_4_4),
	AX_ANIM_PTR(sRattataAnims_4_5),
	AX_ANIM_PTR(sRattataAnims_4_6),
	AX_ANIM_PTR(sRattataAnims_4_7),
	AX_ANIM_PTR(sRattataAnims_4_8),
};

static const ax_anim *const sRattataAnimTable5[] = {
	AX_ANIM_PTR(sRattataAnims_5_1),
	AX_ANIM_PTR(sRattataAnims_5_2),
	AX_ANIM_PTR(sRattataAnims_5_3),
	AX_ANIM_PTR(sRattataAnims_5_4),
	AX_ANIM_PTR(sRattataAnims_5_5),
	AX_ANIM_PTR(sRattataAnims_5_6),
	AX_ANIM_PTR(sRattataAnims_5_7),
	AX_ANIM_PTR(sRattataAnims_5_8),
};

static const ax_anim *const sRattataAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
};

static const ax_anim *const sRattataAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00531),
	AX_ANIM_PTR(gAxSharedAnim_00543),
	AX_ANIM_PTR(gAxSharedAnim_00551),
	AX_ANIM_PTR(gAxSharedAnim_00559),
	AX_ANIM_PTR(gAxSharedAnim_00577),
	AX_ANIM_PTR(gAxSharedAnim_00587),
	AX_ANIM_PTR(gAxSharedAnim_00596),
	AX_ANIM_PTR(gAxSharedAnim_00602),
};

static const ax_anim *const sRattataAnimTable8[] = {
	AX_ANIM_PTR(sRattataAnims_8_1),
	AX_ANIM_PTR(sRattataAnims_8_2),
	AX_ANIM_PTR(sRattataAnims_8_3),
	AX_ANIM_PTR(sRattataAnims_8_4),
	AX_ANIM_PTR(sRattataAnims_8_5),
	AX_ANIM_PTR(sRattataAnims_8_6),
	AX_ANIM_PTR(sRattataAnims_8_7),
	AX_ANIM_PTR(sRattataAnims_8_8),
};

static const ax_anim *const sRattataAnimTable9[] = {
	AX_ANIM_PTR(sRattataAnims_9_1),
	AX_ANIM_PTR(sRattataAnims_9_2),
	AX_ANIM_PTR(gAxSharedAnim_00977),
	AX_ANIM_PTR(sRattataAnims_9_4),
	AX_ANIM_PTR(gAxSharedAnim_00948),
	AX_ANIM_PTR(sRattataAnims_9_6),
	AX_ANIM_PTR(gAxSharedAnim_00926),
	AX_ANIM_PTR(sRattataAnims_9_8),
};

static const ax_anim *const sRattataAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01016),
	AX_ANIM_PTR(gAxSharedAnim_01027),
	AX_ANIM_PTR(gAxSharedAnim_01046),
	AX_ANIM_PTR(gAxSharedAnim_01061),
	AX_ANIM_PTR(gAxSharedAnim_01078),
	AX_ANIM_PTR(gAxSharedAnim_01092),
	AX_ANIM_PTR(gAxSharedAnim_01110),
	AX_ANIM_PTR(gAxSharedAnim_01124),
};

static const ax_anim *const sRattataAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_01140),
	AX_ANIM_PTR(gAxSharedAnim_01177),
	AX_ANIM_PTR(gAxSharedAnim_01214),
	AX_ANIM_PTR(gAxSharedAnim_01249),
	AX_ANIM_PTR(gAxSharedAnim_01284),
	AX_ANIM_PTR(gAxSharedAnim_01322),
	AX_ANIM_PTR(gAxSharedAnim_01356),
	AX_ANIM_PTR(gAxSharedAnim_01383),
};

static const ax_anim *const sRattataAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01423),
	AX_ANIM_PTR(gAxSharedAnim_01468),
	AX_ANIM_PTR(gAxSharedAnim_01458),
	AX_ANIM_PTR(gAxSharedAnim_01449),
	AX_ANIM_PTR(gAxSharedAnim_01448),
	AX_ANIM_PTR(gAxSharedAnim_01444),
	AX_ANIM_PTR(gAxSharedAnim_01432),
	AX_ANIM_PTR(gAxSharedAnim_01424),
};

static const ax_anim *const sRattataAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01471),
	AX_ANIM_PTR(gAxSharedAnim_01516),
	AX_ANIM_PTR(gAxSharedAnim_01511),
	AX_ANIM_PTR(gAxSharedAnim_01504),
	AX_ANIM_PTR(gAxSharedAnim_01497),
	AX_ANIM_PTR(gAxSharedAnim_01490),
	AX_ANIM_PTR(gAxSharedAnim_01486),
	AX_ANIM_PTR(gAxSharedAnim_01478),
};

static const ax_anim *const *const sAxAnimationsRattata[] = {
	sRattataAnimTable1,
	sRattataAnimTable2,
	sRattataAnimTable3,
	sRattataAnimTable4,
	sRattataAnimTable5,
	sRattataAnimTable6,
	sRattataAnimTable7,
	sRattataAnimTable8,
	sRattataAnimTable9,
	sRattataAnimTable10,
	sRattataAnimTable11,
	sRattataAnimTable12,
	sRattataAnimTable13,
};

static const ax_sprite *const sAxSpritesRattata[] = {
	sRattataSprites1,
	sRattataSprites2,
	sRattataSprites3,
	sRattataSprites4,
	sRattataSprites5,
	sRattataSprites6,
	sRattataSprites7,
	sRattataSprites8,
	sRattataSprites9,
	sRattataSprites10,
	sRattataSprites11,
	sRattataSprites12,
	sRattataSprites13,
	sRattataSprites14,
	sRattataSprites15,
	sRattataSprites16,
	sRattataSprites17,
	sRattataSprites18,
	sRattataSprites19,
	sRattataSprites20,
	sRattataSprites21,
	sRattataSprites22,
	sRattataSprites23,
	sRattataSprites24,
	sRattataSprites25,
	sRattataSprites26,
	sRattataSprites27,
	sRattataSprites28,
	sRattataSprites29,
	sRattataSprites30,
	sRattataSprites31,
	sRattataSprites32,
	sRattataSprites33,
	sRattataSprites34,
	sRattataSprites35,
	sRattataSprites36,
	sRattataSprites37,
	sRattataSprites38,
};

static const axmain sAxMainRattata = {
	.poses = sAxPosesRattata,
	.animations = sAxAnimationsRattata,
	.animCount = ARRAY_COUNT(sAxAnimationsRattata),
	.spriteData = sAxSpritesRattata,
	.positions = sAxPositionsRattata,
};
