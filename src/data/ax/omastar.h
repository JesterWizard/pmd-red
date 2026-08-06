/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainOmastar;
const SiroArchive gAxOmastar = {"SIRO", &sAxMainOmastar};

static const ax_pose sOmastarPose1[] = {
	AX_POSE(0, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose3[] = {
	AX_POSE(2, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose4[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose5[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose6[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose8[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose10[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose11[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose12[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose13[] = {
	AX_POSE(12, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose14[] = {
	AX_POSE(13, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose15[] = {
	AX_POSE(14, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose16[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose17[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose18[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose19[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose20[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose21[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose22[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose23[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose24[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose76[] = {
	AX_POSE(15, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose80[] = {
	AX_POSE(16, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose84[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose88[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose92[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose96[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose100[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose104[] = {
	AX_POSE(16, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose106[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose107[] = {
	AX_POSE(21, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose109[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose110[] = {
	AX_POSE(23, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose112[] = {
	AX_POSE(24, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose113[] = {
	AX_POSE(25, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose115[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose116[] = {
	AX_POSE(27, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose118[] = {
	AX_POSE(28, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose119[] = {
	AX_POSE(29, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose121[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose122[] = {
	AX_POSE(27, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose124[] = {
	AX_POSE(24, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose125[] = {
	AX_POSE(25, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose127[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose128[] = {
	AX_POSE(23, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose129[] = {
	AX_POSE(30, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose130[] = {
	AX_POSE(31, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose131[] = {
	AX_POSE(32, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose132[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose133[] = {
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose134[] = {
	AX_POSE(35, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose135[] = {
	AX_POSE(36, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose136[] = {
	AX_POSE(35, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose137[] = {
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose138[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose142[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose154[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose165[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose166[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose167[] = {
	AX_POSE(19, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose169[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose172[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose197[] = {
	AX_POSE(24, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose198[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose200[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sOmastarPose201[] = {
	AX_POSE(24, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const u8 sOmastarAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_2_1.lz");
static const u8 sOmastarAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_2_2.lz");
static const u8 sOmastarAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_2_3.lz");
static const u8 sOmastarAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_2_4.lz");
static const u8 sOmastarAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_2_5.lz");
static const u8 sOmastarAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_2_6.lz");
static const u8 sOmastarAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_2_7.lz");
static const u8 sOmastarAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_2_8.lz");
static const u8 sOmastarAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_3_1.lz");
static const u8 sOmastarAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_3_2.lz");
static const u8 sOmastarAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_3_3.lz");
static const u8 sOmastarAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_3_4.lz");
static const u8 sOmastarAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_3_5.lz");
static const u8 sOmastarAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_3_6.lz");
static const u8 sOmastarAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_3_7.lz");
static const u8 sOmastarAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_3_8.lz");
static const u8 sOmastarAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_4_1.lz");
static const u8 sOmastarAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_4_2.lz");
static const u8 sOmastarAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_4_3.lz");
static const u8 sOmastarAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_4_4.lz");
static const u8 sOmastarAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_4_5.lz");
static const u8 sOmastarAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_4_6.lz");
static const u8 sOmastarAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_4_7.lz");
static const u8 sOmastarAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_4_8.lz");
static const u8 sOmastarAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_5_1.lz");
static const u8 sOmastarAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_5_2.lz");
static const u8 sOmastarAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_5_3.lz");
static const u8 sOmastarAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_5_4.lz");
static const u8 sOmastarAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_5_5.lz");
static const u8 sOmastarAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_5_6.lz");
static const u8 sOmastarAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_5_7.lz");
static const u8 sOmastarAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_5_8.lz");
static const u8 sOmastarAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_8_1.lz");
static const u8 sOmastarAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_8_2.lz");
static const u8 sOmastarAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_8_3.lz");
static const u8 sOmastarAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_8_4.lz");
static const u8 sOmastarAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_8_5.lz");
static const u8 sOmastarAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_8_6.lz");
static const u8 sOmastarAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_8_7.lz");
static const u8 sOmastarAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_8_8.lz");
static const u8 sOmastarAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_9_1.lz");
static const u8 sOmastarAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_9_2.lz");
static const u8 sOmastarAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_9_3.lz");
static const u8 sOmastarAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_9_4.lz");
static const u8 sOmastarAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_9_5.lz");
static const u8 sOmastarAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_9_6.lz");
static const u8 sOmastarAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_9_7.lz");
static const u8 sOmastarAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/omastar/sOmastarAnims_9_8.lz");

static const u8 sOmastarGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_1.4bpp.lz");
static const ax_sprite sOmastarSprites1[] = {
	{sOmastarGfx1, ARRAY_COUNT(sOmastarGfx1)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_2.4bpp.lz");
static const ax_sprite sOmastarSprites2[] = {
	{sOmastarGfx2, ARRAY_COUNT(sOmastarGfx2)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_3.4bpp.lz");
static const ax_sprite sOmastarSprites3[] = {
	{sOmastarGfx3, ARRAY_COUNT(sOmastarGfx3)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_4.4bpp.lz");
static const ax_sprite sOmastarSprites4[] = {
	{sOmastarGfx4, ARRAY_COUNT(sOmastarGfx4)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_5.4bpp.lz");
static const ax_sprite sOmastarSprites5[] = {
	{sOmastarGfx5, ARRAY_COUNT(sOmastarGfx5)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_6.4bpp.lz");
static const ax_sprite sOmastarSprites6[] = {
	{sOmastarGfx6, ARRAY_COUNT(sOmastarGfx6)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_7.4bpp.lz");
static const ax_sprite sOmastarSprites7[] = {
	{sOmastarGfx7, ARRAY_COUNT(sOmastarGfx7)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_8.4bpp.lz");
static const ax_sprite sOmastarSprites8[] = {
	{sOmastarGfx8, ARRAY_COUNT(sOmastarGfx8)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_9.4bpp.lz");
static const ax_sprite sOmastarSprites9[] = {
	{sOmastarGfx9, ARRAY_COUNT(sOmastarGfx9)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_10.4bpp.lz");
static const ax_sprite sOmastarSprites10[] = {
	{sOmastarGfx10, ARRAY_COUNT(sOmastarGfx10)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_11.4bpp.lz");
static const ax_sprite sOmastarSprites11[] = {
	{sOmastarGfx11, ARRAY_COUNT(sOmastarGfx11)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_12.4bpp.lz");
static const ax_sprite sOmastarSprites12[] = {
	{sOmastarGfx12, ARRAY_COUNT(sOmastarGfx12)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_13.4bpp.lz");
static const ax_sprite sOmastarSprites13[] = {
	{sOmastarGfx13, ARRAY_COUNT(sOmastarGfx13)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_14.4bpp.lz");
static const ax_sprite sOmastarSprites14[] = {
	{sOmastarGfx14, ARRAY_COUNT(sOmastarGfx14)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_15.4bpp.lz");
static const ax_sprite sOmastarSprites15[] = {
	{sOmastarGfx15, ARRAY_COUNT(sOmastarGfx15)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_16.4bpp.lz");
static const u8 sOmastarGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_16_1.4bpp.lz");
static const ax_sprite sOmastarSprites16[] = {
	{sOmastarGfx16, ARRAY_COUNT(sOmastarGfx16)}, 
	{NULL, 32}, 
	{sOmastarGfx16_1, ARRAY_COUNT(sOmastarGfx16_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sOmastarGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_17.4bpp.lz");
static const u8 sOmastarGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_17_1.4bpp.lz");
static const ax_sprite sOmastarSprites17[] = {
	{NULL, 32}, 
	{sOmastarGfx17, ARRAY_COUNT(sOmastarGfx17)}, 
	{NULL, 64}, 
	{sOmastarGfx17_1, ARRAY_COUNT(sOmastarGfx17_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sOmastarGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_18.4bpp.lz");
static const ax_sprite sOmastarSprites18[] = {
	{sOmastarGfx18, ARRAY_COUNT(sOmastarGfx18)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sOmastarGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_19.4bpp.lz");
static const u8 sOmastarGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_19_1.4bpp.lz");
static const u8 sOmastarGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_19_2.4bpp.lz");
static const ax_sprite sOmastarSprites19[] = {
	{sOmastarGfx19, ARRAY_COUNT(sOmastarGfx19)}, 
	{NULL, 32}, 
	{sOmastarGfx19_1, ARRAY_COUNT(sOmastarGfx19_1)}, 
	{NULL, 32}, 
	{sOmastarGfx19_2, ARRAY_COUNT(sOmastarGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sOmastarGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_20.4bpp.lz");
static const u8 sOmastarGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_20_1.4bpp.lz");
static const ax_sprite sOmastarSprites20[] = {
	{sOmastarGfx20, ARRAY_COUNT(sOmastarGfx20)}, 
	{NULL, 32}, 
	{sOmastarGfx20_1, ARRAY_COUNT(sOmastarGfx20_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sOmastarGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_21.4bpp.lz");
static const u8 sOmastarGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_21_1.4bpp.lz");
static const ax_sprite sOmastarSprites21[] = {
	{sOmastarGfx21, ARRAY_COUNT(sOmastarGfx21)}, 
	{NULL, 32}, 
	{sOmastarGfx21_1, ARRAY_COUNT(sOmastarGfx21_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sOmastarGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_22.4bpp.lz");
static const ax_sprite sOmastarSprites22[] = {
	{sOmastarGfx22, ARRAY_COUNT(sOmastarGfx22)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sOmastarGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_23.4bpp.lz");
static const u8 sOmastarGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_23_1.4bpp.lz");
static const ax_sprite sOmastarSprites23[] = {
	{sOmastarGfx23, ARRAY_COUNT(sOmastarGfx23)}, 
	{NULL, 96}, 
	{sOmastarGfx23_1, ARRAY_COUNT(sOmastarGfx23_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sOmastarGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_24.4bpp.lz");
static const u8 sOmastarGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_24_1.4bpp.lz");
static const ax_sprite sOmastarSprites24[] = {
	{NULL, 32}, 
	{sOmastarGfx24, ARRAY_COUNT(sOmastarGfx24)}, 
	{NULL, 32}, 
	{sOmastarGfx24_1, ARRAY_COUNT(sOmastarGfx24_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sOmastarGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_25.4bpp.lz");
static const u8 sOmastarGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_25_1.4bpp.lz");
static const ax_sprite sOmastarSprites25[] = {
	{sOmastarGfx25, ARRAY_COUNT(sOmastarGfx25)}, 
	{NULL, 32}, 
	{sOmastarGfx25_1, ARRAY_COUNT(sOmastarGfx25_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sOmastarGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_26.4bpp.lz");
static const u8 sOmastarGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_26_1.4bpp.lz");
static const ax_sprite sOmastarSprites26[] = {
	{sOmastarGfx26, ARRAY_COUNT(sOmastarGfx26)}, 
	{NULL, 32}, 
	{sOmastarGfx26_1, ARRAY_COUNT(sOmastarGfx26_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sOmastarGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_27.4bpp.lz");
static const u8 sOmastarGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_27_1.4bpp.lz");
static const u8 sOmastarGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_27_2.4bpp.lz");
static const ax_sprite sOmastarSprites27[] = {
	{sOmastarGfx27, ARRAY_COUNT(sOmastarGfx27)}, 
	{NULL, 32}, 
	{sOmastarGfx27_1, ARRAY_COUNT(sOmastarGfx27_1)}, 
	{NULL, 32}, 
	{sOmastarGfx27_2, ARRAY_COUNT(sOmastarGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sOmastarGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_28.4bpp.lz");
static const u8 sOmastarGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_28_1.4bpp.lz");
static const u8 sOmastarGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_28_2.4bpp.lz");
static const ax_sprite sOmastarSprites28[] = {
	{sOmastarGfx28, ARRAY_COUNT(sOmastarGfx28)}, 
	{NULL, 32}, 
	{sOmastarGfx28_1, ARRAY_COUNT(sOmastarGfx28_1)}, 
	{NULL, 32}, 
	{sOmastarGfx28_2, ARRAY_COUNT(sOmastarGfx28_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sOmastarGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_29.4bpp.lz");
static const u8 sOmastarGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_29_1.4bpp.lz");
static const ax_sprite sOmastarSprites29[] = {
	{sOmastarGfx29, ARRAY_COUNT(sOmastarGfx29)}, 
	{NULL, 32}, 
	{sOmastarGfx29_1, ARRAY_COUNT(sOmastarGfx29_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sOmastarGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_30.4bpp.lz");
static const ax_sprite sOmastarSprites30[] = {
	{sOmastarGfx30, ARRAY_COUNT(sOmastarGfx30)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sOmastarGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_31.4bpp.lz");
static const ax_sprite sOmastarSprites31[] = {
	{sOmastarGfx31, ARRAY_COUNT(sOmastarGfx31)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_32.4bpp.lz");
static const ax_sprite sOmastarSprites32[] = {
	{sOmastarGfx32, ARRAY_COUNT(sOmastarGfx32)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_33.4bpp.lz");
static const ax_sprite sOmastarSprites33[] = {
	{sOmastarGfx33, ARRAY_COUNT(sOmastarGfx33)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_34.4bpp.lz");
static const ax_sprite sOmastarSprites34[] = {
	{sOmastarGfx34, ARRAY_COUNT(sOmastarGfx34)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_35.4bpp.lz");
static const ax_sprite sOmastarSprites35[] = {
	{sOmastarGfx35, ARRAY_COUNT(sOmastarGfx35)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_36.4bpp.lz");
static const ax_sprite sOmastarSprites36[] = {
	{sOmastarGfx36, ARRAY_COUNT(sOmastarGfx36)}, 
	{NULL, 0}
};
static const u8 sOmastarGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/omastar/sprite_37.4bpp.lz");
static const ax_sprite sOmastarSprites37[] = {
	{sOmastarGfx37, ARRAY_COUNT(sOmastarGfx37)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesOmastar[] = {
	sOmastarPose1,
	sOmastarPose2,
	sOmastarPose3,
	sOmastarPose4,
	sOmastarPose5,
	sOmastarPose6,
	sOmastarPose7,
	sOmastarPose8,
	sOmastarPose9,
	sOmastarPose10,
	sOmastarPose11,
	sOmastarPose12,
	sOmastarPose13,
	sOmastarPose14,
	sOmastarPose15,
	sOmastarPose16,
	sOmastarPose17,
	sOmastarPose18,
	sOmastarPose19,
	sOmastarPose20,
	sOmastarPose21,
	sOmastarPose22,
	sOmastarPose23,
	sOmastarPose24,
	sOmastarPose1,
	sOmastarPose2,
	sOmastarPose3,
	sOmastarPose4,
	sOmastarPose5,
	sOmastarPose6,
	sOmastarPose7,
	sOmastarPose8,
	sOmastarPose9,
	sOmastarPose10,
	sOmastarPose11,
	sOmastarPose12,
	sOmastarPose13,
	sOmastarPose14,
	sOmastarPose15,
	sOmastarPose16,
	sOmastarPose17,
	sOmastarPose18,
	sOmastarPose19,
	sOmastarPose20,
	sOmastarPose21,
	sOmastarPose22,
	sOmastarPose23,
	sOmastarPose24,
	sOmastarPose1,
	sOmastarPose2,
	sOmastarPose3,
	sOmastarPose4,
	sOmastarPose5,
	sOmastarPose6,
	sOmastarPose7,
	sOmastarPose8,
	sOmastarPose9,
	sOmastarPose10,
	sOmastarPose11,
	sOmastarPose12,
	sOmastarPose13,
	sOmastarPose14,
	sOmastarPose15,
	sOmastarPose16,
	sOmastarPose17,
	sOmastarPose18,
	sOmastarPose19,
	sOmastarPose20,
	sOmastarPose21,
	sOmastarPose22,
	sOmastarPose23,
	sOmastarPose24,
	sOmastarPose1,
	sOmastarPose2,
	sOmastarPose3,
	sOmastarPose76,
	sOmastarPose4,
	sOmastarPose5,
	sOmastarPose6,
	sOmastarPose80,
	sOmastarPose7,
	sOmastarPose8,
	sOmastarPose9,
	sOmastarPose84,
	sOmastarPose10,
	sOmastarPose11,
	sOmastarPose12,
	sOmastarPose88,
	sOmastarPose13,
	sOmastarPose14,
	sOmastarPose15,
	sOmastarPose92,
	sOmastarPose16,
	sOmastarPose17,
	sOmastarPose18,
	sOmastarPose96,
	sOmastarPose19,
	sOmastarPose20,
	sOmastarPose21,
	sOmastarPose100,
	sOmastarPose22,
	sOmastarPose23,
	sOmastarPose24,
	sOmastarPose104,
	sOmastarPose1,
	sOmastarPose106,
	sOmastarPose107,
	sOmastarPose4,
	sOmastarPose109,
	sOmastarPose110,
	sOmastarPose7,
	sOmastarPose112,
	sOmastarPose113,
	sOmastarPose10,
	sOmastarPose115,
	sOmastarPose116,
	sOmastarPose13,
	sOmastarPose118,
	sOmastarPose119,
	sOmastarPose16,
	sOmastarPose121,
	sOmastarPose122,
	sOmastarPose19,
	sOmastarPose124,
	sOmastarPose125,
	sOmastarPose22,
	sOmastarPose127,
	sOmastarPose128,
	sOmastarPose129,
	sOmastarPose130,
	sOmastarPose131,
	sOmastarPose132,
	sOmastarPose133,
	sOmastarPose134,
	sOmastarPose135,
	sOmastarPose136,
	sOmastarPose137,
	sOmastarPose138,
	sOmastarPose1,
	sOmastarPose106,
	sOmastarPose4,
	sOmastarPose142,
	sOmastarPose7,
	sOmastarPose112,
	sOmastarPose10,
	sOmastarPose115,
	sOmastarPose13,
	sOmastarPose118,
	sOmastarPose16,
	sOmastarPose121,
	sOmastarPose19,
	sOmastarPose124,
	sOmastarPose22,
	sOmastarPose154,
	sOmastarPose106,
	sOmastarPose127,
	sOmastarPose124,
	sOmastarPose121,
	sOmastarPose118,
	sOmastarPose115,
	sOmastarPose112,
	sOmastarPose109,
	sOmastarPose76,
	sOmastarPose80,
	sOmastarPose165,
	sOmastarPose166,
	sOmastarPose167,
	sOmastarPose96,
	sOmastarPose169,
	sOmastarPose104,
	sOmastarPose1,
	sOmastarPose172,
	sOmastarPose2,
	sOmastarPose4,
	sOmastarPose109,
	sOmastarPose5,
	sOmastarPose7,
	sOmastarPose112,
	sOmastarPose8,
	sOmastarPose10,
	sOmastarPose115,
	sOmastarPose11,
	sOmastarPose13,
	sOmastarPose118,
	sOmastarPose14,
	sOmastarPose16,
	sOmastarPose121,
	sOmastarPose17,
	sOmastarPose19,
	sOmastarPose124,
	sOmastarPose20,
	sOmastarPose22,
	sOmastarPose127,
	sOmastarPose23,
	sOmastarPose106,
	sOmastarPose127,
	sOmastarPose197,
	sOmastarPose198,
	sOmastarPose118,
	sOmastarPose200,
	sOmastarPose201,
	sOmastarPose109,
	sOmastarPose1,
	sOmastarPose22,
	sOmastarPose19,
	sOmastarPose16,
	sOmastarPose13,
	sOmastarPose10,
	sOmastarPose7,
	sOmastarPose4,
};

static const struct PositionSets sAxPositionsOmastar[] = {
	[0] = { .set = { {0, -2}, {-8, -10}, {8, -10}, {0, -9} } },
	[1] = { .set = { {0, -1}, {-9, -6}, {7, -10}, {0, -10} } },
	[2] = { .set = { {0, -1}, {-7, -10}, {9, -6}, {0, -10} } },
	[3] = { .set = { {6, -3}, {10, -13}, {-3, -8}, {0, -10} } },
	[4] = { .set = { {6, -2}, {14, -8}, {-5, -7}, {1, -10} } },
	[5] = { .set = { {6, -2}, {8, -14}, {0, -1}, {0, -10} } },
	[6] = { .set = { {10, -7}, {8, -16}, {5, -8}, {1, -8} } },
	[7] = { .set = { {10, -6}, {15, -11}, {3, -7}, {1, -9} } },
	[8] = { .set = { {10, -7}, {8, -13}, {13, -5}, {1, -8} } },
	[9] = { .set = { {6, -7}, {4, -17}, {12, -12}, {2, -9} } },
	[10] = { .set = { {6, -8}, {5, -16}, {9, -12}, {1, -9} } },
	[11] = { .set = { {7, -9}, {5, -14}, {13, -8}, {1, -9} } },
	[12] = { .set = { {0, -8}, {8, -15}, {-8, -15}, {0, -10} } },
	[13] = { .set = { {0, -8}, {8, -11}, {-7, -13}, {0, -11} } },
	[14] = { .set = { {0, -8}, {7, -13}, {-8, -14}, {0, -11} } },
	[15] = { .set = { {-6, -7}, {-4, -17}, {-12, -12}, {-2, -9} } },
	[16] = { .set = { {-6, -8}, {-5, -16}, {-9, -12}, {-1, -9} } },
	[17] = { .set = { {-7, -9}, {-5, -14}, {-13, -8}, {-1, -9} } },
	[18] = { .set = { {-10, -7}, {-8, -16}, {-5, -8}, {-1, -8} } },
	[19] = { .set = { {-10, -6}, {-15, -11}, {-3, -7}, {-1, -9} } },
	[20] = { .set = { {-10, -7}, {-8, -13}, {-13, -5}, {-1, -8} } },
	[21] = { .set = { {-6, -3}, {-10, -13}, {3, -8}, {0, -10} } },
	[22] = { .set = { {-6, -2}, {-14, -8}, {5, -7}, {-1, -10} } },
	[23] = { .set = { {-6, -2}, {-8, -14}, {0, -1}, {0, -10} } },
	[24] = { .set = { {0, -2}, {-8, -10}, {8, -10}, {0, -9} } },
	[25] = { .set = { {0, -1}, {-9, -6}, {7, -10}, {0, -10} } },
	[26] = { .set = { {0, -1}, {-7, -10}, {9, -6}, {0, -10} } },
	[27] = { .set = { {6, -3}, {10, -13}, {-3, -8}, {0, -10} } },
	[28] = { .set = { {6, -2}, {14, -8}, {-5, -7}, {1, -10} } },
	[29] = { .set = { {6, -2}, {8, -14}, {0, -1}, {0, -10} } },
	[30] = { .set = { {10, -7}, {8, -16}, {5, -8}, {1, -8} } },
	[31] = { .set = { {10, -6}, {15, -11}, {3, -7}, {1, -9} } },
	[32] = { .set = { {10, -7}, {8, -13}, {13, -5}, {1, -8} } },
	[33] = { .set = { {6, -7}, {4, -17}, {12, -12}, {2, -9} } },
	[34] = { .set = { {6, -8}, {5, -16}, {9, -12}, {1, -9} } },
	[35] = { .set = { {7, -9}, {5, -14}, {13, -8}, {1, -9} } },
	[36] = { .set = { {0, -8}, {8, -15}, {-8, -15}, {0, -10} } },
	[37] = { .set = { {0, -8}, {8, -11}, {-7, -13}, {0, -11} } },
	[38] = { .set = { {0, -8}, {7, -13}, {-8, -14}, {0, -11} } },
	[39] = { .set = { {-6, -7}, {-4, -17}, {-12, -12}, {-2, -9} } },
	[40] = { .set = { {-6, -8}, {-5, -16}, {-9, -12}, {-1, -9} } },
	[41] = { .set = { {-7, -9}, {-5, -14}, {-13, -8}, {-1, -9} } },
	[42] = { .set = { {-10, -7}, {-8, -16}, {-5, -8}, {-1, -8} } },
	[43] = { .set = { {-10, -6}, {-15, -11}, {-3, -7}, {-1, -9} } },
	[44] = { .set = { {-10, -7}, {-8, -13}, {-13, -5}, {-1, -8} } },
	[45] = { .set = { {-6, -3}, {-10, -13}, {3, -8}, {0, -10} } },
	[46] = { .set = { {-6, -2}, {-14, -8}, {5, -7}, {-1, -10} } },
	[47] = { .set = { {-6, -2}, {-8, -14}, {0, -1}, {0, -10} } },
	[48] = { .set = { {0, -2}, {-8, -10}, {8, -10}, {0, -9} } },
	[49] = { .set = { {0, -1}, {-9, -6}, {7, -10}, {0, -10} } },
	[50] = { .set = { {0, -1}, {-7, -10}, {9, -6}, {0, -10} } },
	[51] = { .set = { {6, -3}, {10, -13}, {-3, -8}, {0, -10} } },
	[52] = { .set = { {6, -2}, {14, -8}, {-5, -7}, {1, -10} } },
	[53] = { .set = { {6, -2}, {8, -14}, {0, -1}, {0, -10} } },
	[54] = { .set = { {10, -7}, {8, -16}, {5, -8}, {1, -8} } },
	[55] = { .set = { {10, -6}, {15, -11}, {3, -7}, {1, -9} } },
	[56] = { .set = { {10, -7}, {8, -13}, {13, -5}, {1, -8} } },
	[57] = { .set = { {6, -7}, {4, -17}, {12, -12}, {2, -9} } },
	[58] = { .set = { {6, -8}, {5, -16}, {9, -12}, {1, -9} } },
	[59] = { .set = { {7, -9}, {5, -14}, {13, -8}, {1, -9} } },
	[60] = { .set = { {0, -8}, {8, -15}, {-8, -15}, {0, -10} } },
	[61] = { .set = { {0, -8}, {8, -11}, {-7, -13}, {0, -11} } },
	[62] = { .set = { {0, -8}, {7, -13}, {-8, -14}, {0, -11} } },
	[63] = { .set = { {-6, -7}, {-4, -17}, {-12, -12}, {-2, -9} } },
	[64] = { .set = { {-6, -8}, {-5, -16}, {-9, -12}, {-1, -9} } },
	[65] = { .set = { {-7, -9}, {-5, -14}, {-13, -8}, {-1, -9} } },
	[66] = { .set = { {-10, -7}, {-8, -16}, {-5, -8}, {-1, -8} } },
	[67] = { .set = { {-10, -6}, {-15, -11}, {-3, -7}, {-1, -9} } },
	[68] = { .set = { {-10, -7}, {-8, -13}, {-13, -5}, {-1, -8} } },
	[69] = { .set = { {-6, -3}, {-10, -13}, {3, -8}, {0, -10} } },
	[70] = { .set = { {-6, -2}, {-14, -8}, {5, -7}, {-1, -10} } },
	[71] = { .set = { {-6, -2}, {-8, -14}, {0, -1}, {0, -10} } },
	[72] = { .set = { {0, -2}, {-8, -10}, {8, -10}, {0, -9} } },
	[73] = { .set = { {0, -1}, {-9, -6}, {7, -10}, {0, -10} } },
	[74] = { .set = { {0, -1}, {-7, -10}, {9, -6}, {0, -10} } },
	[75] = { .set = { {0, -2}, {-9, -2}, {9, -2}, {0, -9} } },
	[76] = { .set = { {6, -3}, {10, -13}, {-3, -8}, {0, -10} } },
	[77] = { .set = { {6, -2}, {14, -8}, {-5, -7}, {1, -10} } },
	[78] = { .set = { {6, -2}, {8, -14}, {0, -1}, {0, -10} } },
	[79] = { .set = { {5, -3}, {14, -7}, {2, 0}, {0, -9} } },
	[80] = { .set = { {10, -7}, {8, -16}, {5, -8}, {1, -8} } },
	[81] = { .set = { {10, -6}, {15, -11}, {3, -7}, {1, -9} } },
	[82] = { .set = { {10, -7}, {8, -13}, {13, -5}, {1, -8} } },
	[83] = { .set = { {11, -6}, {15, -10}, {13, -2}, {2, -8} } },
	[84] = { .set = { {6, -7}, {4, -17}, {12, -12}, {2, -9} } },
	[85] = { .set = { {6, -8}, {5, -16}, {9, -12}, {1, -9} } },
	[86] = { .set = { {7, -9}, {5, -14}, {13, -8}, {1, -9} } },
	[87] = { .set = { {6, -8}, {5, -15}, {13, -10}, {2, -8} } },
	[88] = { .set = { {0, -8}, {8, -15}, {-8, -15}, {0, -10} } },
	[89] = { .set = { {0, -8}, {8, -11}, {-7, -13}, {0, -11} } },
	[90] = { .set = { {0, -8}, {7, -13}, {-8, -14}, {0, -11} } },
	[91] = { .set = { {0, -7}, {11, -12}, {-11, -12}, {0, -12} } },
	[92] = { .set = { {-6, -7}, {-4, -17}, {-12, -12}, {-2, -9} } },
	[93] = { .set = { {-6, -8}, {-5, -16}, {-9, -12}, {-1, -9} } },
	[94] = { .set = { {-7, -9}, {-5, -14}, {-13, -8}, {-1, -9} } },
	[95] = { .set = { {-6, -8}, {-5, -15}, {-13, -10}, {-2, -8} } },
	[96] = { .set = { {-10, -7}, {-8, -16}, {-5, -8}, {-1, -8} } },
	[97] = { .set = { {-10, -6}, {-15, -11}, {-3, -7}, {-1, -9} } },
	[98] = { .set = { {-10, -7}, {-8, -13}, {-13, -5}, {-1, -8} } },
	[99] = { .set = { {-11, -6}, {-15, -10}, {-13, -2}, {-2, -8} } },
	[100] = { .set = { {-6, -3}, {-10, -13}, {3, -8}, {0, -10} } },
	[101] = { .set = { {-6, -2}, {-14, -8}, {5, -7}, {-1, -10} } },
	[102] = { .set = { {-6, -2}, {-8, -14}, {0, -1}, {0, -10} } },
	[103] = { .set = { {-5, -3}, {-14, -7}, {-2, 0}, {0, -9} } },
	[104] = { .set = { {0, -2}, {-8, -10}, {8, -10}, {0, -9} } },
	[105] = { .set = { {0, -4}, {-7, -12}, {7, -12}, {0, -10} } },
	[106] = { .set = { {0, -1}, {-4, -5}, {4, -5}, {0, -9} } },
	[107] = { .set = { {6, -3}, {10, -13}, {-3, -8}, {0, -10} } },
	[108] = { .set = { {6, -5}, {9, -16}, {-1, -11}, {-2, -10} } },
	[109] = { .set = { {2, -2}, {7, -5}, {1, -3}, {-1, -8} } },
	[110] = { .set = { {10, -7}, {8, -16}, {5, -8}, {1, -8} } },
	[111] = { .set = { {10, -8}, {9, -18}, {6, -11}, {1, -9} } },
	[112] = { .set = { {4, -2}, {7, -10}, {7, -7}, {0, -7} } },
	[113] = { .set = { {6, -7}, {4, -17}, {12, -12}, {2, -9} } },
	[114] = { .set = { {6, -8}, {2, -19}, {11, -16}, {2, -9} } },
	[115] = { .set = { {3, -4}, {2, -11}, {6, -9}, {2, -8} } },
	[116] = { .set = { {0, -8}, {8, -15}, {-8, -15}, {0, -10} } },
	[117] = { .set = { {0, -8}, {7, -18}, {-7, -18}, {0, -12} } },
	[118] = { .set = { {0, -4}, {4, -6}, {-4, -6}, {0, -10} } },
	[119] = { .set = { {-6, -7}, {-4, -17}, {-12, -12}, {-2, -9} } },
	[120] = { .set = { {-6, -8}, {-2, -19}, {-11, -16}, {-2, -9} } },
	[121] = { .set = { {-3, -4}, {-2, -11}, {-6, -9}, {-2, -8} } },
	[122] = { .set = { {-10, -7}, {-8, -16}, {-5, -8}, {-1, -8} } },
	[123] = { .set = { {-10, -8}, {-9, -18}, {-6, -11}, {-1, -9} } },
	[124] = { .set = { {-4, -2}, {-7, -10}, {-7, -7}, {0, -7} } },
	[125] = { .set = { {-6, -3}, {-10, -13}, {3, -8}, {0, -10} } },
	[126] = { .set = { {-6, -5}, {-9, -16}, {1, -11}, {2, -10} } },
	[127] = { .set = { {-2, -2}, {-7, -5}, {-1, -3}, {1, -8} } },
	[128] = { .set = { {-5, -1}, {-10, -1}, {-3, 3}, {0, -7} } },
	[129] = { .set = { {-5, -1}, {-10, -1}, {-3, 3}, {-1, -8} } },
	[130] = { .set = { {0, -4}, {-9, -8}, {8, -13}, {0, -10} } },
	[131] = { .set = { {5, -6}, {12, -11}, {-4, -11}, {-1, -11} } },
	[132] = { .set = { {8, -8}, {11, -16}, {1, -13}, {-2, -9} } },
	[133] = { .set = { {3, -7}, {1, -17}, {7, -15}, {-2, -9} } },
	[134] = { .set = { {0, -6}, {9, -13}, {-8, -17}, {0, -9} } },
	[135] = { .set = { {-4, -7}, {-2, -17}, {-8, -15}, {1, -9} } },
	[136] = { .set = { {-9, -8}, {-12, -16}, {-2, -13}, {1, -9} } },
	[137] = { .set = { {-6, -6}, {-13, -11}, {3, -11}, {0, -11} } },
	[138] = { .set = { {0, -2}, {-8, -10}, {8, -10}, {0, -9} } },
	[139] = { .set = { {0, -4}, {-7, -12}, {7, -12}, {0, -10} } },
	[140] = { .set = { {6, -3}, {10, -13}, {-3, -8}, {0, -10} } },
	[141] = { .set = { {6, -4}, {9, -15}, {-1, -10}, {-2, -9} } },
	[142] = { .set = { {10, -7}, {8, -16}, {5, -8}, {1, -8} } },
	[143] = { .set = { {10, -8}, {9, -18}, {6, -11}, {1, -9} } },
	[144] = { .set = { {6, -7}, {4, -17}, {12, -12}, {2, -9} } },
	[145] = { .set = { {6, -8}, {2, -19}, {11, -16}, {2, -9} } },
	[146] = { .set = { {0, -8}, {8, -15}, {-8, -15}, {0, -10} } },
	[147] = { .set = { {0, -8}, {7, -18}, {-7, -18}, {0, -12} } },
	[148] = { .set = { {-6, -7}, {-4, -17}, {-12, -12}, {-2, -9} } },
	[149] = { .set = { {-6, -8}, {-2, -19}, {-11, -16}, {-2, -9} } },
	[150] = { .set = { {-10, -7}, {-8, -16}, {-5, -8}, {-1, -8} } },
	[151] = { .set = { {-10, -8}, {-9, -18}, {-6, -11}, {-1, -9} } },
	[152] = { .set = { {-6, -3}, {-10, -13}, {3, -8}, {0, -10} } },
	[153] = { .set = { {-6, -4}, {-9, -15}, {1, -10}, {2, -9} } },
	[154] = { .set = { {0, -4}, {-7, -12}, {7, -12}, {0, -10} } },
	[155] = { .set = { {-6, -5}, {-9, -16}, {1, -11}, {2, -10} } },
	[156] = { .set = { {-10, -8}, {-9, -18}, {-6, -11}, {-1, -9} } },
	[157] = { .set = { {-6, -8}, {-2, -19}, {-11, -16}, {-2, -9} } },
	[158] = { .set = { {0, -8}, {7, -18}, {-7, -18}, {0, -12} } },
	[159] = { .set = { {6, -8}, {2, -19}, {11, -16}, {2, -9} } },
	[160] = { .set = { {10, -8}, {9, -18}, {6, -11}, {1, -9} } },
	[161] = { .set = { {6, -5}, {9, -16}, {-1, -11}, {-2, -10} } },
	[162] = { .set = { {0, -2}, {-9, -2}, {9, -2}, {0, -9} } },
	[163] = { .set = { {5, -3}, {14, -7}, {2, 0}, {0, -9} } },
	[164] = { .set = { {9, -6}, {13, -10}, {11, -2}, {0, -8} } },
	[165] = { .set = { {5, -8}, {4, -15}, {12, -10}, {1, -8} } },
	[166] = { .set = { {0, -5}, {11, -10}, {-11, -10}, {0, -10} } },
	[167] = { .set = { {-6, -8}, {-5, -15}, {-13, -10}, {-2, -8} } },
	[168] = { .set = { {-9, -6}, {-13, -10}, {-11, -2}, {0, -8} } },
	[169] = { .set = { {-5, -3}, {-14, -7}, {-2, 0}, {0, -9} } },
	[170] = { .set = { {0, -2}, {-8, -10}, {8, -10}, {0, -9} } },
	[171] = { .set = { {0, -5}, {-7, -13}, {7, -13}, {0, -11} } },
	[172] = { .set = { {0, -1}, {-9, -6}, {7, -10}, {0, -10} } },
	[173] = { .set = { {6, -3}, {10, -13}, {-3, -8}, {0, -10} } },
	[174] = { .set = { {6, -5}, {9, -16}, {-1, -11}, {-2, -10} } },
	[175] = { .set = { {6, -2}, {14, -8}, {-5, -7}, {1, -10} } },
	[176] = { .set = { {10, -7}, {8, -16}, {5, -8}, {1, -8} } },
	[177] = { .set = { {10, -8}, {9, -18}, {6, -11}, {1, -9} } },
	[178] = { .set = { {10, -6}, {15, -11}, {3, -7}, {1, -9} } },
	[179] = { .set = { {6, -7}, {4, -17}, {12, -12}, {2, -9} } },
	[180] = { .set = { {6, -8}, {2, -19}, {11, -16}, {2, -9} } },
	[181] = { .set = { {6, -8}, {5, -16}, {9, -12}, {1, -9} } },
	[182] = { .set = { {0, -8}, {8, -15}, {-8, -15}, {0, -10} } },
	[183] = { .set = { {0, -8}, {7, -18}, {-7, -18}, {0, -12} } },
	[184] = { .set = { {0, -8}, {8, -11}, {-7, -13}, {0, -11} } },
	[185] = { .set = { {-6, -7}, {-4, -17}, {-12, -12}, {-2, -9} } },
	[186] = { .set = { {-6, -8}, {-2, -19}, {-11, -16}, {-2, -9} } },
	[187] = { .set = { {-6, -8}, {-5, -16}, {-9, -12}, {-1, -9} } },
	[188] = { .set = { {-10, -7}, {-8, -16}, {-5, -8}, {-1, -8} } },
	[189] = { .set = { {-10, -8}, {-9, -18}, {-6, -11}, {-1, -9} } },
	[190] = { .set = { {-10, -6}, {-15, -11}, {-3, -7}, {-1, -9} } },
	[191] = { .set = { {-6, -3}, {-10, -13}, {3, -8}, {0, -10} } },
	[192] = { .set = { {-6, -5}, {-9, -16}, {1, -11}, {2, -10} } },
	[193] = { .set = { {-6, -2}, {-14, -8}, {5, -7}, {-1, -10} } },
	[194] = { .set = { {0, -4}, {-7, -12}, {7, -12}, {0, -10} } },
	[195] = { .set = { {-6, -5}, {-9, -16}, {1, -11}, {2, -10} } },
	[196] = { .set = { {-8, -8}, {-7, -18}, {-4, -11}, {1, -9} } },
	[197] = { .set = { {-5, -8}, {-1, -19}, {-10, -16}, {-1, -9} } },
	[198] = { .set = { {0, -8}, {7, -18}, {-7, -18}, {0, -12} } },
	[199] = { .set = { {5, -8}, {1, -19}, {10, -16}, {1, -9} } },
	[200] = { .set = { {8, -8}, {7, -18}, {4, -11}, {-1, -9} } },
	[201] = { .set = { {6, -5}, {9, -16}, {-1, -11}, {-2, -10} } },
	[202] = { .set = { {0, -2}, {-8, -10}, {8, -10}, {0, -9} } },
	[203] = { .set = { {-6, -3}, {-10, -13}, {3, -8}, {0, -10} } },
	[204] = { .set = { {-10, -7}, {-8, -16}, {-5, -8}, {-1, -8} } },
	[205] = { .set = { {-6, -7}, {-4, -17}, {-12, -12}, {-2, -9} } },
	[206] = { .set = { {0, -8}, {8, -15}, {-8, -15}, {0, -10} } },
	[207] = { .set = { {6, -7}, {4, -17}, {12, -12}, {2, -9} } },
	[208] = { .set = { {10, -7}, {8, -16}, {5, -8}, {1, -8} } },
	[209] = { .set = { {6, -3}, {10, -13}, {-3, -8}, {0, -10} } },
};

static const ax_anim *const sOmastarAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02606),
	AX_ANIM_PTR(gAxSharedAnim_02682),
	AX_ANIM_PTR(gAxSharedAnim_02691),
	AX_ANIM_PTR(gAxSharedAnim_02701),
	AX_ANIM_PTR(gAxSharedAnim_02618),
	AX_ANIM_PTR(gAxSharedAnim_02641),
	AX_ANIM_PTR(gAxSharedAnim_02654),
	AX_ANIM_PTR(gAxSharedAnim_02663),
};

static const ax_anim *const sOmastarAnimTable2[] = {
	AX_ANIM_PTR(sOmastarAnims_2_1),
	AX_ANIM_PTR(sOmastarAnims_2_2),
	AX_ANIM_PTR(sOmastarAnims_2_3),
	AX_ANIM_PTR(sOmastarAnims_2_4),
	AX_ANIM_PTR(sOmastarAnims_2_5),
	AX_ANIM_PTR(sOmastarAnims_2_6),
	AX_ANIM_PTR(sOmastarAnims_2_7),
	AX_ANIM_PTR(sOmastarAnims_2_8),
};

static const ax_anim *const sOmastarAnimTable3[] = {
	AX_ANIM_PTR(sOmastarAnims_3_1),
	AX_ANIM_PTR(sOmastarAnims_3_2),
	AX_ANIM_PTR(sOmastarAnims_3_3),
	AX_ANIM_PTR(sOmastarAnims_3_4),
	AX_ANIM_PTR(sOmastarAnims_3_5),
	AX_ANIM_PTR(sOmastarAnims_3_6),
	AX_ANIM_PTR(sOmastarAnims_3_7),
	AX_ANIM_PTR(sOmastarAnims_3_8),
};

static const ax_anim *const sOmastarAnimTable4[] = {
	AX_ANIM_PTR(sOmastarAnims_4_1),
	AX_ANIM_PTR(sOmastarAnims_4_2),
	AX_ANIM_PTR(sOmastarAnims_4_3),
	AX_ANIM_PTR(sOmastarAnims_4_4),
	AX_ANIM_PTR(sOmastarAnims_4_5),
	AX_ANIM_PTR(sOmastarAnims_4_6),
	AX_ANIM_PTR(sOmastarAnims_4_7),
	AX_ANIM_PTR(sOmastarAnims_4_8),
};

static const ax_anim *const sOmastarAnimTable5[] = {
	AX_ANIM_PTR(sOmastarAnims_5_1),
	AX_ANIM_PTR(sOmastarAnims_5_2),
	AX_ANIM_PTR(sOmastarAnims_5_3),
	AX_ANIM_PTR(sOmastarAnims_5_4),
	AX_ANIM_PTR(sOmastarAnims_5_5),
	AX_ANIM_PTR(sOmastarAnims_5_6),
	AX_ANIM_PTR(sOmastarAnims_5_7),
	AX_ANIM_PTR(sOmastarAnims_5_8),
};

static const ax_anim *const sOmastarAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
};

static const ax_anim *const sOmastarAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00396),
	AX_ANIM_PTR(gAxSharedAnim_00402),
	AX_ANIM_PTR(gAxSharedAnim_00413),
	AX_ANIM_PTR(gAxSharedAnim_00422),
	AX_ANIM_PTR(gAxSharedAnim_00434),
	AX_ANIM_PTR(gAxSharedAnim_00442),
	AX_ANIM_PTR(gAxSharedAnim_00451),
	AX_ANIM_PTR(gAxSharedAnim_00461),
};

static const ax_anim *const sOmastarAnimTable8[] = {
	AX_ANIM_PTR(sOmastarAnims_8_1),
	AX_ANIM_PTR(sOmastarAnims_8_2),
	AX_ANIM_PTR(sOmastarAnims_8_3),
	AX_ANIM_PTR(sOmastarAnims_8_4),
	AX_ANIM_PTR(sOmastarAnims_8_5),
	AX_ANIM_PTR(sOmastarAnims_8_6),
	AX_ANIM_PTR(sOmastarAnims_8_7),
	AX_ANIM_PTR(sOmastarAnims_8_8),
};

static const ax_anim *const sOmastarAnimTable9[] = {
	AX_ANIM_PTR(sOmastarAnims_9_1),
	AX_ANIM_PTR(sOmastarAnims_9_2),
	AX_ANIM_PTR(sOmastarAnims_9_3),
	AX_ANIM_PTR(sOmastarAnims_9_4),
	AX_ANIM_PTR(sOmastarAnims_9_5),
	AX_ANIM_PTR(sOmastarAnims_9_6),
	AX_ANIM_PTR(sOmastarAnims_9_7),
	AX_ANIM_PTR(sOmastarAnims_9_8),
};

static const ax_anim *const sOmastarAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00705),
	AX_ANIM_PTR(gAxSharedAnim_00714),
	AX_ANIM_PTR(gAxSharedAnim_00725),
	AX_ANIM_PTR(gAxSharedAnim_00737),
	AX_ANIM_PTR(gAxSharedAnim_00750),
	AX_ANIM_PTR(gAxSharedAnim_00760),
	AX_ANIM_PTR(gAxSharedAnim_00772),
	AX_ANIM_PTR(gAxSharedAnim_00781),
};

static const ax_anim *const sOmastarAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_00792),
	AX_ANIM_PTR(gAxSharedAnim_00835),
	AX_ANIM_PTR(gAxSharedAnim_00871),
	AX_ANIM_PTR(gAxSharedAnim_00912),
	AX_ANIM_PTR(gAxSharedAnim_00950),
	AX_ANIM_PTR(gAxSharedAnim_00987),
	AX_ANIM_PTR(gAxSharedAnim_01041),
	AX_ANIM_PTR(gAxSharedAnim_01086),
};

static const ax_anim *const sOmastarAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01147),
	AX_ANIM_PTR(gAxSharedAnim_01230),
	AX_ANIM_PTR(gAxSharedAnim_01208),
	AX_ANIM_PTR(gAxSharedAnim_01194),
	AX_ANIM_PTR(gAxSharedAnim_01193),
	AX_ANIM_PTR(gAxSharedAnim_01181),
	AX_ANIM_PTR(gAxSharedAnim_01161),
	AX_ANIM_PTR(gAxSharedAnim_01148),
};

static const ax_anim *const sOmastarAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01242),
	AX_ANIM_PTR(gAxSharedAnim_01323),
	AX_ANIM_PTR(gAxSharedAnim_01314),
	AX_ANIM_PTR(gAxSharedAnim_01301),
	AX_ANIM_PTR(gAxSharedAnim_01286),
	AX_ANIM_PTR(gAxSharedAnim_01278),
	AX_ANIM_PTR(gAxSharedAnim_01267),
	AX_ANIM_PTR(gAxSharedAnim_01253),
};

static const ax_anim *const *const sAxAnimationsOmastar[] = {
	sOmastarAnimTable1,
	sOmastarAnimTable2,
	sOmastarAnimTable3,
	sOmastarAnimTable4,
	sOmastarAnimTable5,
	sOmastarAnimTable6,
	sOmastarAnimTable7,
	sOmastarAnimTable8,
	sOmastarAnimTable9,
	sOmastarAnimTable10,
	sOmastarAnimTable11,
	sOmastarAnimTable12,
	sOmastarAnimTable13,
};

static const ax_sprite *const sAxSpritesOmastar[] = {
	sOmastarSprites1,
	sOmastarSprites2,
	sOmastarSprites3,
	sOmastarSprites4,
	sOmastarSprites5,
	sOmastarSprites6,
	sOmastarSprites7,
	sOmastarSprites8,
	sOmastarSprites9,
	sOmastarSprites10,
	sOmastarSprites11,
	sOmastarSprites12,
	sOmastarSprites13,
	sOmastarSprites14,
	sOmastarSprites15,
	sOmastarSprites16,
	sOmastarSprites17,
	sOmastarSprites18,
	sOmastarSprites19,
	sOmastarSprites20,
	sOmastarSprites21,
	sOmastarSprites22,
	sOmastarSprites23,
	sOmastarSprites24,
	sOmastarSprites25,
	sOmastarSprites26,
	sOmastarSprites27,
	sOmastarSprites28,
	sOmastarSprites29,
	sOmastarSprites30,
	sOmastarSprites31,
	sOmastarSprites32,
	sOmastarSprites33,
	sOmastarSprites34,
	sOmastarSprites35,
	sOmastarSprites36,
	sOmastarSprites37,
};

static const axmain sAxMainOmastar = {
	.poses = sAxPosesOmastar,
	.animations = sAxAnimationsOmastar,
	.animCount = ARRAY_COUNT(sAxAnimationsOmastar),
	.spriteData = sAxSpritesOmastar,
	.positions = sAxPositionsOmastar,
};
