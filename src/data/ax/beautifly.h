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
static const axmain sAxMainBeautifly;
const SiroArchive gAxBeautifly = {"SIRO", &sAxMainBeautifly};

static const ax_pose sBeautiflyPose1[] = {
	AX_POSE(0, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose2[] = {
	AX_POSE(1, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(2, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(3, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(9, 3, 5)),
	AX_POSE(4, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE(5, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(-1, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(9, 3, 5)),
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose3[] = {
	AX_POSE(8, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose4[] = {
	AX_POSE(9, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose5[] = {
	AX_POSE(10, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose6[] = {
	AX_POSE(11, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose7[] = {
	AX_POSE(12, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose8[] = {
	AX_POSE(13, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(14, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(15, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose9[] = {
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose10[] = {
	AX_POSE(17, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose11[] = {
	AX_POSE(18, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(19, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(20, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(21, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose12[] = {
	AX_POSE(22, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose13[] = {
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose14[] = {
	AX_POSE(24, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(25, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(26, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(9, 3, 5)),
	AX_POSE(27, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(11, 3, 5)),
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(29, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE(-1, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose15[] = {
	AX_POSE(30, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose16[] = {
	AX_POSE(17, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose17[] = {
	AX_POSE(18, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(19, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(20, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(21, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose18[] = {
	AX_POSE(22, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose19[] = {
	AX_POSE(12, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose20[] = {
	AX_POSE(13, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(14, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(15, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose21[] = {
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose22[] = {
	AX_POSE(9, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose23[] = {
	AX_POSE(10, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose24[] = {
	AX_POSE(11, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose121[] = {
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose122[] = {
	AX_POSE(32, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose123[] = {
	AX_POSE(33, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose124[] = {
	AX_POSE(34, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose125[] = {
	AX_POSE(35, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(36, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE(37, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(5, 3, 5)),
	AX_POSE(38, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(7, 3, 5)),
	AX_POSE(39, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose126[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(41, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE(42, OAM1(254, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(5, 3, 5)),
	AX_POSE(43, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(6, 3, 5)),
	AX_POSE(44, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose127[] = {
	AX_POSE(45, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(46, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE(47, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(-1, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(-1, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose128[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(41, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE(42, OAM1(254, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(5, 3, 5)),
	AX_POSE(43, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(6, 3, 5)),
	AX_POSE(44, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose129[] = {
	AX_POSE(35, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(36, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 5)),
	AX_POSE(37, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(5, 3, 5)),
	AX_POSE(38, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(7, 3, 5)),
	AX_POSE(39, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose130[] = {
	AX_POSE(34, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose156[] = {
	AX_POSE(10, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose162[] = {
	AX_POSE(10, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeautiflyPose207[] = {
	AX_POSE(23, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const u8 sBeautiflyAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_2_1.lz");
static const u8 sBeautiflyAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_2_2.lz");
static const u8 sBeautiflyAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_2_3.lz");
static const u8 sBeautiflyAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_2_4.lz");
static const u8 sBeautiflyAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_2_5.lz");
static const u8 sBeautiflyAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_2_6.lz");
static const u8 sBeautiflyAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_2_7.lz");
static const u8 sBeautiflyAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_2_8.lz");
static const u8 sBeautiflyAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_3_1.lz");
static const u8 sBeautiflyAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_3_2.lz");
static const u8 sBeautiflyAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_3_3.lz");
static const u8 sBeautiflyAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_3_4.lz");
static const u8 sBeautiflyAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_3_5.lz");
static const u8 sBeautiflyAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_3_6.lz");
static const u8 sBeautiflyAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_3_7.lz");
static const u8 sBeautiflyAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_3_8.lz");
static const u8 sBeautiflyAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_4_1.lz");
static const u8 sBeautiflyAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_4_2.lz");
static const u8 sBeautiflyAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_4_3.lz");
static const u8 sBeautiflyAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_4_4.lz");
static const u8 sBeautiflyAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_4_5.lz");
static const u8 sBeautiflyAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_4_6.lz");
static const u8 sBeautiflyAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_4_7.lz");
static const u8 sBeautiflyAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_4_8.lz");
static const u8 sBeautiflyAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_5_1.lz");
static const u8 sBeautiflyAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_5_2.lz");
static const u8 sBeautiflyAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_5_3.lz");
static const u8 sBeautiflyAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_5_4.lz");
static const u8 sBeautiflyAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_5_5.lz");
static const u8 sBeautiflyAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_5_6.lz");
static const u8 sBeautiflyAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_5_7.lz");
static const u8 sBeautiflyAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_5_8.lz");
static const u8 sBeautiflyAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_8_1.lz");
static const u8 sBeautiflyAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_8_2.lz");
static const u8 sBeautiflyAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_8_3.lz");
static const u8 sBeautiflyAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_8_4.lz");
static const u8 sBeautiflyAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_8_5.lz");
static const u8 sBeautiflyAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_8_6.lz");
static const u8 sBeautiflyAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_8_7.lz");
static const u8 sBeautiflyAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_8_8.lz");
static const u8 sBeautiflyAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_9_1.lz");
static const u8 sBeautiflyAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_9_2.lz");
static const u8 sBeautiflyAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_9_3.lz");
static const u8 sBeautiflyAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_9_4.lz");
static const u8 sBeautiflyAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_9_5.lz");
static const u8 sBeautiflyAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_9_6.lz");
static const u8 sBeautiflyAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_9_7.lz");
static const u8 sBeautiflyAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_9_8.lz");
static const u8 sBeautiflyAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_11_1.lz");
static const u8 sBeautiflyAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_11_2.lz");
static const u8 sBeautiflyAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_11_3.lz");
static const u8 sBeautiflyAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_11_4.lz");
static const u8 sBeautiflyAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_11_5.lz");
static const u8 sBeautiflyAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_11_6.lz");
static const u8 sBeautiflyAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_11_7.lz");
static const u8 sBeautiflyAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/beautifly/sBeautiflyAnims_11_8.lz");

static const u8 sBeautiflyGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_1.4bpp.lz");
static const ax_sprite sBeautiflySprites1[] = {
	{sBeautiflyGfx1, ARRAY_COUNT(sBeautiflyGfx1)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_2.4bpp.lz");
static const ax_sprite sBeautiflySprites2[] = {
	{sBeautiflyGfx2, ARRAY_COUNT(sBeautiflyGfx2)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_3.4bpp.lz");
static const ax_sprite sBeautiflySprites3[] = {
	{sBeautiflyGfx3, ARRAY_COUNT(sBeautiflyGfx3)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_4.4bpp.lz");
static const ax_sprite sBeautiflySprites4[] = {
	{sBeautiflyGfx4, ARRAY_COUNT(sBeautiflyGfx4)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_5.4bpp.lz");
static const ax_sprite sBeautiflySprites5[] = {
	{sBeautiflyGfx5, ARRAY_COUNT(sBeautiflyGfx5)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_6.4bpp.lz");
static const ax_sprite sBeautiflySprites6[] = {
	{sBeautiflyGfx6, ARRAY_COUNT(sBeautiflyGfx6)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_7.4bpp.lz");
static const ax_sprite sBeautiflySprites7[] = {
	{sBeautiflyGfx7, ARRAY_COUNT(sBeautiflyGfx7)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_8.4bpp.lz");
static const ax_sprite sBeautiflySprites8[] = {
	{sBeautiflyGfx8, ARRAY_COUNT(sBeautiflyGfx8)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_9.4bpp.lz");
static const ax_sprite sBeautiflySprites9[] = {
	{sBeautiflyGfx9, ARRAY_COUNT(sBeautiflyGfx9)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_10.4bpp.lz");
static const ax_sprite sBeautiflySprites10[] = {
	{sBeautiflyGfx10, ARRAY_COUNT(sBeautiflyGfx10)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_11.4bpp.lz");
static const ax_sprite sBeautiflySprites11[] = {
	{sBeautiflyGfx11, ARRAY_COUNT(sBeautiflyGfx11)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_12.4bpp.lz");
static const ax_sprite sBeautiflySprites12[] = {
	{sBeautiflyGfx12, ARRAY_COUNT(sBeautiflyGfx12)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_13.4bpp.lz");
static const ax_sprite sBeautiflySprites13[] = {
	{sBeautiflyGfx13, ARRAY_COUNT(sBeautiflyGfx13)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_14.4bpp.lz");
static const ax_sprite sBeautiflySprites14[] = {
	{sBeautiflyGfx14, ARRAY_COUNT(sBeautiflyGfx14)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_15.4bpp.lz");
static const ax_sprite sBeautiflySprites15[] = {
	{sBeautiflyGfx15, ARRAY_COUNT(sBeautiflyGfx15)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_16.4bpp.lz");
static const ax_sprite sBeautiflySprites16[] = {
	{sBeautiflyGfx16, ARRAY_COUNT(sBeautiflyGfx16)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_17.4bpp.lz");
static const ax_sprite sBeautiflySprites17[] = {
	{sBeautiflyGfx17, ARRAY_COUNT(sBeautiflyGfx17)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_18.4bpp.lz");
static const ax_sprite sBeautiflySprites18[] = {
	{sBeautiflyGfx18, ARRAY_COUNT(sBeautiflyGfx18)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_19.4bpp.lz");
static const ax_sprite sBeautiflySprites19[] = {
	{sBeautiflyGfx19, ARRAY_COUNT(sBeautiflyGfx19)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_20.4bpp.lz");
static const ax_sprite sBeautiflySprites20[] = {
	{sBeautiflyGfx20, ARRAY_COUNT(sBeautiflyGfx20)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_21.4bpp.lz");
static const ax_sprite sBeautiflySprites21[] = {
	{sBeautiflyGfx21, ARRAY_COUNT(sBeautiflyGfx21)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_22.4bpp.lz");
static const ax_sprite sBeautiflySprites22[] = {
	{sBeautiflyGfx22, ARRAY_COUNT(sBeautiflyGfx22)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_23.4bpp.lz");
static const ax_sprite sBeautiflySprites23[] = {
	{sBeautiflyGfx23, ARRAY_COUNT(sBeautiflyGfx23)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_24.4bpp.lz");
static const ax_sprite sBeautiflySprites24[] = {
	{sBeautiflyGfx24, ARRAY_COUNT(sBeautiflyGfx24)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_25.4bpp.lz");
static const ax_sprite sBeautiflySprites25[] = {
	{sBeautiflyGfx25, ARRAY_COUNT(sBeautiflyGfx25)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_26.4bpp.lz");
static const ax_sprite sBeautiflySprites26[] = {
	{sBeautiflyGfx26, ARRAY_COUNT(sBeautiflyGfx26)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_27.4bpp.lz");
static const ax_sprite sBeautiflySprites27[] = {
	{sBeautiflyGfx27, ARRAY_COUNT(sBeautiflyGfx27)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_28.4bpp.lz");
static const ax_sprite sBeautiflySprites28[] = {
	{sBeautiflyGfx28, ARRAY_COUNT(sBeautiflyGfx28)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_29.4bpp.lz");
static const ax_sprite sBeautiflySprites29[] = {
	{sBeautiflyGfx29, ARRAY_COUNT(sBeautiflyGfx29)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_30.4bpp.lz");
static const ax_sprite sBeautiflySprites30[] = {
	{sBeautiflyGfx30, ARRAY_COUNT(sBeautiflyGfx30)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_31.4bpp.lz");
static const ax_sprite sBeautiflySprites31[] = {
	{sBeautiflyGfx31, ARRAY_COUNT(sBeautiflyGfx31)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_32.4bpp.lz");
static const ax_sprite sBeautiflySprites32[] = {
	{sBeautiflyGfx32, ARRAY_COUNT(sBeautiflyGfx32)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_33.4bpp.lz");
static const ax_sprite sBeautiflySprites33[] = {
	{sBeautiflyGfx33, ARRAY_COUNT(sBeautiflyGfx33)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_34.4bpp.lz");
static const ax_sprite sBeautiflySprites34[] = {
	{sBeautiflyGfx34, ARRAY_COUNT(sBeautiflyGfx34)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_35.4bpp.lz");
static const ax_sprite sBeautiflySprites35[] = {
	{sBeautiflyGfx35, ARRAY_COUNT(sBeautiflyGfx35)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_36.4bpp.lz");
static const ax_sprite sBeautiflySprites36[] = {
	{sBeautiflyGfx36, ARRAY_COUNT(sBeautiflyGfx36)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_37.4bpp.lz");
static const ax_sprite sBeautiflySprites37[] = {
	{sBeautiflyGfx37, ARRAY_COUNT(sBeautiflyGfx37)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_38.4bpp.lz");
static const ax_sprite sBeautiflySprites38[] = {
	{sBeautiflyGfx38, ARRAY_COUNT(sBeautiflyGfx38)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_39.4bpp.lz");
static const ax_sprite sBeautiflySprites39[] = {
	{sBeautiflyGfx39, ARRAY_COUNT(sBeautiflyGfx39)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_40.4bpp.lz");
static const ax_sprite sBeautiflySprites40[] = {
	{sBeautiflyGfx40, ARRAY_COUNT(sBeautiflyGfx40)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_41.4bpp.lz");
static const ax_sprite sBeautiflySprites41[] = {
	{sBeautiflyGfx41, ARRAY_COUNT(sBeautiflyGfx41)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_42.4bpp.lz");
static const ax_sprite sBeautiflySprites42[] = {
	{sBeautiflyGfx42, ARRAY_COUNT(sBeautiflyGfx42)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_43.4bpp.lz");
static const ax_sprite sBeautiflySprites43[] = {
	{sBeautiflyGfx43, ARRAY_COUNT(sBeautiflyGfx43)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_44.4bpp.lz");
static const ax_sprite sBeautiflySprites44[] = {
	{sBeautiflyGfx44, ARRAY_COUNT(sBeautiflyGfx44)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_45.4bpp.lz");
static const ax_sprite sBeautiflySprites45[] = {
	{sBeautiflyGfx45, ARRAY_COUNT(sBeautiflyGfx45)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_46.4bpp.lz");
static const ax_sprite sBeautiflySprites46[] = {
	{sBeautiflyGfx46, ARRAY_COUNT(sBeautiflyGfx46)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_47.4bpp.lz");
static const ax_sprite sBeautiflySprites47[] = {
	{sBeautiflyGfx47, ARRAY_COUNT(sBeautiflyGfx47)}, 
	{NULL, 0}
};
static const u8 sBeautiflyGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beautifly/sprite_48.4bpp.lz");
static const ax_sprite sBeautiflySprites48[] = {
	{sBeautiflyGfx48, ARRAY_COUNT(sBeautiflyGfx48)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesBeautifly[] = {
	sBeautiflyPose1,
	sBeautiflyPose2,
	sBeautiflyPose3,
	sBeautiflyPose4,
	sBeautiflyPose5,
	sBeautiflyPose6,
	sBeautiflyPose7,
	sBeautiflyPose8,
	sBeautiflyPose9,
	sBeautiflyPose10,
	sBeautiflyPose11,
	sBeautiflyPose12,
	sBeautiflyPose13,
	sBeautiflyPose14,
	sBeautiflyPose15,
	sBeautiflyPose16,
	sBeautiflyPose17,
	sBeautiflyPose18,
	sBeautiflyPose19,
	sBeautiflyPose20,
	sBeautiflyPose21,
	sBeautiflyPose22,
	sBeautiflyPose23,
	sBeautiflyPose24,
	sBeautiflyPose1,
	sBeautiflyPose2,
	sBeautiflyPose3,
	sBeautiflyPose4,
	sBeautiflyPose5,
	sBeautiflyPose6,
	sBeautiflyPose7,
	sBeautiflyPose8,
	sBeautiflyPose9,
	sBeautiflyPose10,
	sBeautiflyPose11,
	sBeautiflyPose12,
	sBeautiflyPose13,
	sBeautiflyPose14,
	sBeautiflyPose15,
	sBeautiflyPose16,
	sBeautiflyPose17,
	sBeautiflyPose18,
	sBeautiflyPose19,
	sBeautiflyPose20,
	sBeautiflyPose21,
	sBeautiflyPose22,
	sBeautiflyPose23,
	sBeautiflyPose24,
	sBeautiflyPose1,
	sBeautiflyPose2,
	sBeautiflyPose3,
	sBeautiflyPose4,
	sBeautiflyPose5,
	sBeautiflyPose6,
	sBeautiflyPose7,
	sBeautiflyPose8,
	sBeautiflyPose9,
	sBeautiflyPose10,
	sBeautiflyPose11,
	sBeautiflyPose12,
	sBeautiflyPose13,
	sBeautiflyPose14,
	sBeautiflyPose15,
	sBeautiflyPose16,
	sBeautiflyPose17,
	sBeautiflyPose18,
	sBeautiflyPose19,
	sBeautiflyPose20,
	sBeautiflyPose21,
	sBeautiflyPose22,
	sBeautiflyPose23,
	sBeautiflyPose24,
	sBeautiflyPose1,
	sBeautiflyPose2,
	sBeautiflyPose3,
	sBeautiflyPose4,
	sBeautiflyPose5,
	sBeautiflyPose6,
	sBeautiflyPose7,
	sBeautiflyPose8,
	sBeautiflyPose9,
	sBeautiflyPose10,
	sBeautiflyPose11,
	sBeautiflyPose12,
	sBeautiflyPose13,
	sBeautiflyPose14,
	sBeautiflyPose15,
	sBeautiflyPose16,
	sBeautiflyPose17,
	sBeautiflyPose18,
	sBeautiflyPose19,
	sBeautiflyPose20,
	sBeautiflyPose21,
	sBeautiflyPose22,
	sBeautiflyPose23,
	sBeautiflyPose24,
	sBeautiflyPose1,
	sBeautiflyPose2,
	sBeautiflyPose3,
	sBeautiflyPose4,
	sBeautiflyPose5,
	sBeautiflyPose6,
	sBeautiflyPose7,
	sBeautiflyPose8,
	sBeautiflyPose9,
	sBeautiflyPose10,
	sBeautiflyPose11,
	sBeautiflyPose12,
	sBeautiflyPose13,
	sBeautiflyPose14,
	sBeautiflyPose15,
	sBeautiflyPose16,
	sBeautiflyPose17,
	sBeautiflyPose18,
	sBeautiflyPose19,
	sBeautiflyPose20,
	sBeautiflyPose21,
	sBeautiflyPose22,
	sBeautiflyPose23,
	sBeautiflyPose24,
	sBeautiflyPose121,
	sBeautiflyPose122,
	sBeautiflyPose123,
	sBeautiflyPose124,
	sBeautiflyPose125,
	sBeautiflyPose126,
	sBeautiflyPose127,
	sBeautiflyPose128,
	sBeautiflyPose129,
	sBeautiflyPose130,
	sBeautiflyPose1,
	sBeautiflyPose2,
	sBeautiflyPose3,
	sBeautiflyPose4,
	sBeautiflyPose5,
	sBeautiflyPose6,
	sBeautiflyPose7,
	sBeautiflyPose8,
	sBeautiflyPose9,
	sBeautiflyPose10,
	sBeautiflyPose11,
	sBeautiflyPose12,
	sBeautiflyPose13,
	sBeautiflyPose14,
	sBeautiflyPose15,
	sBeautiflyPose16,
	sBeautiflyPose17,
	sBeautiflyPose18,
	sBeautiflyPose19,
	sBeautiflyPose20,
	sBeautiflyPose21,
	sBeautiflyPose22,
	sBeautiflyPose23,
	sBeautiflyPose24,
	sBeautiflyPose2,
	sBeautiflyPose156,
	sBeautiflyPose20,
	sBeautiflyPose17,
	sBeautiflyPose14,
	sBeautiflyPose11,
	sBeautiflyPose8,
	sBeautiflyPose162,
	sBeautiflyPose2,
	sBeautiflyPose162,
	sBeautiflyPose8,
	sBeautiflyPose11,
	sBeautiflyPose14,
	sBeautiflyPose17,
	sBeautiflyPose20,
	sBeautiflyPose156,
	sBeautiflyPose1,
	sBeautiflyPose2,
	sBeautiflyPose3,
	sBeautiflyPose4,
	sBeautiflyPose5,
	sBeautiflyPose6,
	sBeautiflyPose7,
	sBeautiflyPose8,
	sBeautiflyPose9,
	sBeautiflyPose10,
	sBeautiflyPose11,
	sBeautiflyPose12,
	sBeautiflyPose13,
	sBeautiflyPose14,
	sBeautiflyPose15,
	sBeautiflyPose16,
	sBeautiflyPose17,
	sBeautiflyPose18,
	sBeautiflyPose19,
	sBeautiflyPose20,
	sBeautiflyPose21,
	sBeautiflyPose22,
	sBeautiflyPose23,
	sBeautiflyPose24,
	sBeautiflyPose1,
	sBeautiflyPose22,
	sBeautiflyPose19,
	sBeautiflyPose16,
	sBeautiflyPose13,
	sBeautiflyPose10,
	sBeautiflyPose7,
	sBeautiflyPose4,
	sBeautiflyPose1,
	sBeautiflyPose22,
	sBeautiflyPose19,
	sBeautiflyPose16,
	sBeautiflyPose207,
	sBeautiflyPose10,
	sBeautiflyPose7,
	sBeautiflyPose4,
};

static const struct PositionSets sAxPositionsBeautifly[] = {
	[0] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[1] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[2] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[3] = { .set = { {5, -13}, {3, -11}, {5, -11}, {3, -12} } },
	[4] = { .set = { {5, -13}, {3, -11}, {5, -11}, {3, -12} } },
	[5] = { .set = { {5, -13}, {3, -12}, {5, -11}, {2, -13} } },
	[6] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[7] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[8] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[9] = { .set = { {7, -15}, {6, -13}, {2, -16}, {1, -14} } },
	[10] = { .set = { {8, -15}, {6, -13}, {2, -16}, {1, -14} } },
	[11] = { .set = { {7, -16}, {6, -13}, {2, -15}, {1, -13} } },
	[12] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -14} } },
	[13] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -14} } },
	[14] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -13} } },
	[15] = { .set = { {-8, -15}, {-3, -16}, {-7, -13}, {-2, -14} } },
	[16] = { .set = { {-9, -15}, {-3, -16}, {-7, -13}, {-2, -14} } },
	[17] = { .set = { {-8, -16}, {-3, -15}, {-7, -13}, {-2, -13} } },
	[18] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[19] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[20] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[21] = { .set = { {-6, -13}, {-6, -11}, {-4, -11}, {-4, -12} } },
	[22] = { .set = { {-6, -13}, {-6, -11}, {-4, -11}, {-4, -12} } },
	[23] = { .set = { {-6, -13}, {-6, -11}, {-4, -12}, {-3, -13} } },
	[24] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[25] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[26] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[27] = { .set = { {5, -13}, {3, -11}, {5, -11}, {3, -12} } },
	[28] = { .set = { {5, -13}, {3, -11}, {5, -11}, {3, -12} } },
	[29] = { .set = { {5, -13}, {3, -12}, {5, -11}, {2, -13} } },
	[30] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[31] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[32] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[33] = { .set = { {7, -15}, {6, -13}, {2, -16}, {1, -14} } },
	[34] = { .set = { {8, -15}, {6, -13}, {2, -16}, {1, -14} } },
	[35] = { .set = { {7, -16}, {6, -13}, {2, -15}, {1, -13} } },
	[36] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -14} } },
	[37] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -14} } },
	[38] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -13} } },
	[39] = { .set = { {-8, -15}, {-3, -16}, {-7, -13}, {-2, -14} } },
	[40] = { .set = { {-9, -15}, {-3, -16}, {-7, -13}, {-2, -14} } },
	[41] = { .set = { {-8, -16}, {-3, -15}, {-7, -13}, {-2, -13} } },
	[42] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[43] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[44] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[45] = { .set = { {-6, -13}, {-6, -11}, {-4, -11}, {-4, -12} } },
	[46] = { .set = { {-6, -13}, {-6, -11}, {-4, -11}, {-4, -12} } },
	[47] = { .set = { {-6, -13}, {-6, -11}, {-4, -12}, {-3, -13} } },
	[48] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[49] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[50] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[51] = { .set = { {5, -13}, {3, -11}, {5, -11}, {3, -12} } },
	[52] = { .set = { {5, -13}, {3, -11}, {5, -11}, {3, -12} } },
	[53] = { .set = { {5, -13}, {3, -12}, {5, -11}, {2, -13} } },
	[54] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[55] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[56] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[57] = { .set = { {7, -15}, {6, -13}, {2, -16}, {1, -14} } },
	[58] = { .set = { {8, -15}, {6, -13}, {2, -16}, {1, -14} } },
	[59] = { .set = { {7, -16}, {6, -13}, {2, -15}, {1, -13} } },
	[60] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -14} } },
	[61] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -14} } },
	[62] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -13} } },
	[63] = { .set = { {-8, -15}, {-3, -16}, {-7, -13}, {-2, -14} } },
	[64] = { .set = { {-9, -15}, {-3, -16}, {-7, -13}, {-2, -14} } },
	[65] = { .set = { {-8, -16}, {-3, -15}, {-7, -13}, {-2, -13} } },
	[66] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[67] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[68] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[69] = { .set = { {-6, -13}, {-6, -11}, {-4, -11}, {-4, -12} } },
	[70] = { .set = { {-6, -13}, {-6, -11}, {-4, -11}, {-4, -12} } },
	[71] = { .set = { {-6, -13}, {-6, -11}, {-4, -12}, {-3, -13} } },
	[72] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[73] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[74] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[75] = { .set = { {5, -13}, {3, -11}, {5, -11}, {3, -12} } },
	[76] = { .set = { {5, -13}, {3, -11}, {5, -11}, {3, -12} } },
	[77] = { .set = { {5, -13}, {3, -12}, {5, -11}, {2, -13} } },
	[78] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[79] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[80] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[81] = { .set = { {7, -15}, {6, -13}, {2, -16}, {1, -14} } },
	[82] = { .set = { {8, -15}, {6, -13}, {2, -16}, {1, -14} } },
	[83] = { .set = { {7, -16}, {6, -13}, {2, -15}, {1, -13} } },
	[84] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -14} } },
	[85] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -14} } },
	[86] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -13} } },
	[87] = { .set = { {-8, -15}, {-3, -16}, {-7, -13}, {-2, -14} } },
	[88] = { .set = { {-9, -15}, {-3, -16}, {-7, -13}, {-2, -14} } },
	[89] = { .set = { {-8, -16}, {-3, -15}, {-7, -13}, {-2, -13} } },
	[90] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[91] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[92] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[93] = { .set = { {-6, -13}, {-6, -11}, {-4, -11}, {-4, -12} } },
	[94] = { .set = { {-6, -13}, {-6, -11}, {-4, -11}, {-4, -12} } },
	[95] = { .set = { {-6, -13}, {-6, -11}, {-4, -12}, {-3, -13} } },
	[96] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[97] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[98] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[99] = { .set = { {5, -13}, {3, -11}, {5, -11}, {3, -12} } },
	[100] = { .set = { {5, -13}, {3, -11}, {5, -11}, {3, -12} } },
	[101] = { .set = { {5, -13}, {3, -12}, {5, -11}, {2, -13} } },
	[102] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[103] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[104] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[105] = { .set = { {7, -15}, {6, -13}, {2, -16}, {1, -14} } },
	[106] = { .set = { {8, -15}, {6, -13}, {2, -16}, {1, -14} } },
	[107] = { .set = { {7, -16}, {6, -13}, {2, -15}, {1, -13} } },
	[108] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -14} } },
	[109] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -14} } },
	[110] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -13} } },
	[111] = { .set = { {-8, -15}, {-3, -16}, {-7, -13}, {-2, -14} } },
	[112] = { .set = { {-9, -15}, {-3, -16}, {-7, -13}, {-2, -14} } },
	[113] = { .set = { {-8, -16}, {-3, -15}, {-7, -13}, {-2, -13} } },
	[114] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[115] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[116] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[117] = { .set = { {-6, -13}, {-6, -11}, {-4, -11}, {-4, -12} } },
	[118] = { .set = { {-6, -13}, {-6, -11}, {-4, -11}, {-4, -12} } },
	[119] = { .set = { {-6, -13}, {-6, -11}, {-4, -12}, {-3, -13} } },
	[120] = { .set = { {-5, -4}, {-5, -3}, {-3, -2}, {-3, -6} } },
	[121] = { .set = { {-6, -3}, {-6, -2}, {-3, -2}, {-4, -5} } },
	[122] = { .set = { {0, -13}, {-4, -12}, {4, -12}, {0, -12} } },
	[123] = { .set = { {6, -12}, {4, -11}, {7, -13}, {3, -12} } },
	[124] = { .set = { {7, -14}, {6, -12}, {6, -14}, {3, -12} } },
	[125] = { .set = { {4, -15}, {6, -13}, {0, -15}, {-2, -12} } },
	[126] = { .set = { {0, -16}, {-4, -14}, {3, -14}, {0, -13} } },
	[127] = { .set = { {-5, -15}, {-1, -15}, {-7, -13}, {1, -12} } },
	[128] = { .set = { {-8, -14}, {-7, -14}, {-7, -12}, {-4, -12} } },
	[129] = { .set = { {-7, -12}, {-8, -13}, {-5, -11}, {-4, -12} } },
	[130] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[131] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[132] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[133] = { .set = { {5, -13}, {3, -11}, {5, -11}, {3, -12} } },
	[134] = { .set = { {5, -13}, {3, -11}, {5, -11}, {3, -12} } },
	[135] = { .set = { {5, -13}, {3, -12}, {5, -11}, {2, -13} } },
	[136] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[137] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[138] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[139] = { .set = { {7, -15}, {6, -13}, {2, -16}, {1, -14} } },
	[140] = { .set = { {8, -15}, {6, -13}, {2, -16}, {1, -14} } },
	[141] = { .set = { {7, -16}, {6, -13}, {2, -15}, {1, -13} } },
	[142] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -14} } },
	[143] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -14} } },
	[144] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -13} } },
	[145] = { .set = { {-8, -15}, {-3, -16}, {-7, -13}, {-2, -14} } },
	[146] = { .set = { {-9, -15}, {-3, -16}, {-7, -13}, {-2, -14} } },
	[147] = { .set = { {-8, -16}, {-3, -15}, {-7, -13}, {-2, -13} } },
	[148] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[149] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[150] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[151] = { .set = { {-6, -13}, {-6, -11}, {-4, -11}, {-4, -12} } },
	[152] = { .set = { {-6, -13}, {-6, -11}, {-4, -11}, {-4, -12} } },
	[153] = { .set = { {-6, -13}, {-6, -11}, {-4, -12}, {-3, -13} } },
	[154] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[155] = { .set = { {-7, -13}, {-7, -11}, {-5, -11}, {-5, -12} } },
	[156] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[157] = { .set = { {-9, -15}, {-3, -16}, {-7, -13}, {-2, -14} } },
	[158] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -14} } },
	[159] = { .set = { {8, -15}, {6, -13}, {2, -16}, {1, -14} } },
	[160] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[161] = { .set = { {6, -13}, {4, -11}, {6, -11}, {4, -12} } },
	[162] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[163] = { .set = { {6, -13}, {4, -11}, {6, -11}, {4, -12} } },
	[164] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[165] = { .set = { {8, -15}, {6, -13}, {2, -16}, {1, -14} } },
	[166] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -14} } },
	[167] = { .set = { {-9, -15}, {-3, -16}, {-7, -13}, {-2, -14} } },
	[168] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[169] = { .set = { {-7, -13}, {-7, -11}, {-5, -11}, {-5, -12} } },
	[170] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[171] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[172] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[173] = { .set = { {5, -13}, {3, -11}, {5, -11}, {3, -12} } },
	[174] = { .set = { {5, -13}, {3, -11}, {5, -11}, {3, -12} } },
	[175] = { .set = { {5, -13}, {3, -12}, {5, -11}, {2, -13} } },
	[176] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[177] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[178] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[179] = { .set = { {7, -15}, {6, -13}, {2, -16}, {1, -14} } },
	[180] = { .set = { {8, -15}, {6, -13}, {2, -16}, {1, -14} } },
	[181] = { .set = { {7, -16}, {6, -13}, {2, -15}, {1, -13} } },
	[182] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -14} } },
	[183] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -14} } },
	[184] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -13} } },
	[185] = { .set = { {-8, -15}, {-3, -16}, {-7, -13}, {-2, -14} } },
	[186] = { .set = { {-9, -15}, {-3, -16}, {-7, -13}, {-2, -14} } },
	[187] = { .set = { {-8, -16}, {-3, -15}, {-7, -13}, {-2, -13} } },
	[188] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[189] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[190] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[191] = { .set = { {-6, -13}, {-6, -11}, {-4, -11}, {-4, -12} } },
	[192] = { .set = { {-6, -13}, {-6, -11}, {-4, -11}, {-4, -12} } },
	[193] = { .set = { {-6, -13}, {-6, -11}, {-4, -12}, {-3, -13} } },
	[194] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[195] = { .set = { {-6, -13}, {-6, -11}, {-4, -11}, {-4, -12} } },
	[196] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[197] = { .set = { {-8, -15}, {-3, -16}, {-7, -13}, {-2, -14} } },
	[198] = { .set = { {-1, -17}, {2, -15}, {-4, -15}, {-1, -14} } },
	[199] = { .set = { {7, -15}, {6, -13}, {2, -16}, {1, -14} } },
	[200] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[201] = { .set = { {5, -13}, {3, -11}, {5, -11}, {3, -12} } },
	[202] = { .set = { {-1, -13}, {-4, -12}, {2, -12}, {-1, -12} } },
	[203] = { .set = { {-6, -13}, {-6, -11}, {-4, -11}, {-4, -12} } },
	[204] = { .set = { {-9, -14}, {-5, -12}, {-5, -11}, {-4, -13} } },
	[205] = { .set = { {-8, -15}, {-3, -16}, {-7, -13}, {-2, -14} } },
	[206] = { .set = { {-1, -18}, {2, -16}, {-4, -16}, {-1, -15} } },
	[207] = { .set = { {7, -15}, {6, -13}, {2, -16}, {1, -14} } },
	[208] = { .set = { {8, -14}, {4, -11}, {4, -12}, {3, -13} } },
	[209] = { .set = { {5, -13}, {3, -11}, {5, -11}, {3, -12} } },
};

static const ax_anim *const sBeautiflyAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02608),
	AX_ANIM_PTR(gAxSharedAnim_02684),
	AX_ANIM_PTR(gAxSharedAnim_02693),
	AX_ANIM_PTR(gAxSharedAnim_02702),
	AX_ANIM_PTR(gAxSharedAnim_02620),
	AX_ANIM_PTR(gAxSharedAnim_02639),
	AX_ANIM_PTR(gAxSharedAnim_02652),
	AX_ANIM_PTR(gAxSharedAnim_02661),
};

static const ax_anim *const sBeautiflyAnimTable2[] = {
	AX_ANIM_PTR(sBeautiflyAnims_2_1),
	AX_ANIM_PTR(sBeautiflyAnims_2_2),
	AX_ANIM_PTR(sBeautiflyAnims_2_3),
	AX_ANIM_PTR(sBeautiflyAnims_2_4),
	AX_ANIM_PTR(sBeautiflyAnims_2_5),
	AX_ANIM_PTR(sBeautiflyAnims_2_6),
	AX_ANIM_PTR(sBeautiflyAnims_2_7),
	AX_ANIM_PTR(sBeautiflyAnims_2_8),
};

static const ax_anim *const sBeautiflyAnimTable3[] = {
	AX_ANIM_PTR(sBeautiflyAnims_3_1),
	AX_ANIM_PTR(sBeautiflyAnims_3_2),
	AX_ANIM_PTR(sBeautiflyAnims_3_3),
	AX_ANIM_PTR(sBeautiflyAnims_3_4),
	AX_ANIM_PTR(sBeautiflyAnims_3_5),
	AX_ANIM_PTR(sBeautiflyAnims_3_6),
	AX_ANIM_PTR(sBeautiflyAnims_3_7),
	AX_ANIM_PTR(sBeautiflyAnims_3_8),
};

static const ax_anim *const sBeautiflyAnimTable4[] = {
	AX_ANIM_PTR(sBeautiflyAnims_4_1),
	AX_ANIM_PTR(sBeautiflyAnims_4_2),
	AX_ANIM_PTR(sBeautiflyAnims_4_3),
	AX_ANIM_PTR(sBeautiflyAnims_4_4),
	AX_ANIM_PTR(sBeautiflyAnims_4_5),
	AX_ANIM_PTR(sBeautiflyAnims_4_6),
	AX_ANIM_PTR(sBeautiflyAnims_4_7),
	AX_ANIM_PTR(sBeautiflyAnims_4_8),
};

static const ax_anim *const sBeautiflyAnimTable5[] = {
	AX_ANIM_PTR(sBeautiflyAnims_5_1),
	AX_ANIM_PTR(sBeautiflyAnims_5_2),
	AX_ANIM_PTR(sBeautiflyAnims_5_3),
	AX_ANIM_PTR(sBeautiflyAnims_5_4),
	AX_ANIM_PTR(sBeautiflyAnims_5_5),
	AX_ANIM_PTR(sBeautiflyAnims_5_6),
	AX_ANIM_PTR(sBeautiflyAnims_5_7),
	AX_ANIM_PTR(sBeautiflyAnims_5_8),
};

static const ax_anim *const sBeautiflyAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
};

static const ax_anim *const sBeautiflyAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00330),
	AX_ANIM_PTR(gAxSharedAnim_00340),
	AX_ANIM_PTR(gAxSharedAnim_00348),
	AX_ANIM_PTR(gAxSharedAnim_00356),
	AX_ANIM_PTR(gAxSharedAnim_00368),
	AX_ANIM_PTR(gAxSharedAnim_00376),
	AX_ANIM_PTR(gAxSharedAnim_00383),
	AX_ANIM_PTR(gAxSharedAnim_00390),
};

static const ax_anim *const sBeautiflyAnimTable8[] = {
	AX_ANIM_PTR(sBeautiflyAnims_8_1),
	AX_ANIM_PTR(sBeautiflyAnims_8_2),
	AX_ANIM_PTR(sBeautiflyAnims_8_3),
	AX_ANIM_PTR(sBeautiflyAnims_8_4),
	AX_ANIM_PTR(sBeautiflyAnims_8_5),
	AX_ANIM_PTR(sBeautiflyAnims_8_6),
	AX_ANIM_PTR(sBeautiflyAnims_8_7),
	AX_ANIM_PTR(sBeautiflyAnims_8_8),
};

static const ax_anim *const sBeautiflyAnimTable9[] = {
	AX_ANIM_PTR(sBeautiflyAnims_9_1),
	AX_ANIM_PTR(sBeautiflyAnims_9_2),
	AX_ANIM_PTR(sBeautiflyAnims_9_3),
	AX_ANIM_PTR(sBeautiflyAnims_9_4),
	AX_ANIM_PTR(sBeautiflyAnims_9_5),
	AX_ANIM_PTR(sBeautiflyAnims_9_6),
	AX_ANIM_PTR(sBeautiflyAnims_9_7),
	AX_ANIM_PTR(sBeautiflyAnims_9_8),
};

static const ax_anim *const sBeautiflyAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00705),
	AX_ANIM_PTR(gAxSharedAnim_00714),
	AX_ANIM_PTR(gAxSharedAnim_00725),
	AX_ANIM_PTR(gAxSharedAnim_00737),
	AX_ANIM_PTR(gAxSharedAnim_00750),
	AX_ANIM_PTR(gAxSharedAnim_00760),
	AX_ANIM_PTR(gAxSharedAnim_00772),
	AX_ANIM_PTR(gAxSharedAnim_00781),
};

static const ax_anim *const sBeautiflyAnimTable11[] = {
	AX_ANIM_PTR(sBeautiflyAnims_11_1),
	AX_ANIM_PTR(sBeautiflyAnims_11_2),
	AX_ANIM_PTR(sBeautiflyAnims_11_3),
	AX_ANIM_PTR(sBeautiflyAnims_11_4),
	AX_ANIM_PTR(sBeautiflyAnims_11_5),
	AX_ANIM_PTR(sBeautiflyAnims_11_6),
	AX_ANIM_PTR(sBeautiflyAnims_11_7),
	AX_ANIM_PTR(sBeautiflyAnims_11_8),
};

static const ax_anim *const sBeautiflyAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01147),
	AX_ANIM_PTR(gAxSharedAnim_01230),
	AX_ANIM_PTR(gAxSharedAnim_01208),
	AX_ANIM_PTR(gAxSharedAnim_01194),
	AX_ANIM_PTR(gAxSharedAnim_01193),
	AX_ANIM_PTR(gAxSharedAnim_01181),
	AX_ANIM_PTR(gAxSharedAnim_01161),
	AX_ANIM_PTR(gAxSharedAnim_01148),
};

static const ax_anim *const sBeautiflyAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01242),
	AX_ANIM_PTR(gAxSharedAnim_01323),
	AX_ANIM_PTR(gAxSharedAnim_01314),
	AX_ANIM_PTR(gAxSharedAnim_01301),
	AX_ANIM_PTR(gAxSharedAnim_01286),
	AX_ANIM_PTR(gAxSharedAnim_01278),
	AX_ANIM_PTR(gAxSharedAnim_01267),
	AX_ANIM_PTR(gAxSharedAnim_01253),
};

static const ax_anim *const *const sAxAnimationsBeautifly[] = {
	sBeautiflyAnimTable1,
	sBeautiflyAnimTable2,
	sBeautiflyAnimTable3,
	sBeautiflyAnimTable4,
	sBeautiflyAnimTable5,
	sBeautiflyAnimTable6,
	sBeautiflyAnimTable7,
	sBeautiflyAnimTable8,
	sBeautiflyAnimTable9,
	sBeautiflyAnimTable10,
	sBeautiflyAnimTable11,
	sBeautiflyAnimTable12,
	sBeautiflyAnimTable13,
};

static const ax_sprite *const sAxSpritesBeautifly[] = {
	sBeautiflySprites1,
	sBeautiflySprites2,
	sBeautiflySprites3,
	sBeautiflySprites4,
	sBeautiflySprites5,
	sBeautiflySprites6,
	sBeautiflySprites7,
	sBeautiflySprites8,
	sBeautiflySprites9,
	sBeautiflySprites10,
	sBeautiflySprites11,
	sBeautiflySprites12,
	sBeautiflySprites13,
	sBeautiflySprites14,
	sBeautiflySprites15,
	sBeautiflySprites16,
	sBeautiflySprites17,
	sBeautiflySprites18,
	sBeautiflySprites19,
	sBeautiflySprites20,
	sBeautiflySprites21,
	sBeautiflySprites22,
	sBeautiflySprites23,
	sBeautiflySprites24,
	sBeautiflySprites25,
	sBeautiflySprites26,
	sBeautiflySprites27,
	sBeautiflySprites28,
	sBeautiflySprites29,
	sBeautiflySprites30,
	sBeautiflySprites31,
	sBeautiflySprites32,
	sBeautiflySprites33,
	sBeautiflySprites34,
	sBeautiflySprites35,
	sBeautiflySprites36,
	sBeautiflySprites37,
	sBeautiflySprites38,
	sBeautiflySprites39,
	sBeautiflySprites40,
	sBeautiflySprites41,
	sBeautiflySprites42,
	sBeautiflySprites43,
	sBeautiflySprites44,
	sBeautiflySprites45,
	sBeautiflySprites46,
	sBeautiflySprites47,
	sBeautiflySprites48,
};

static const axmain sAxMainBeautifly = {
	.poses = sAxPosesBeautifly,
	.animations = sAxAnimationsBeautifly,
	.animCount = ARRAY_COUNT(sAxAnimationsBeautifly),
	.spriteData = sAxSpritesBeautifly,
	.positions = sAxPositionsBeautifly,
};
