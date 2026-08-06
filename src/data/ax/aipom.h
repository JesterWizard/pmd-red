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
static const axmain sAxMainAipom;
const SiroArchive gAxAipom = {"SIRO", &sAxMainAipom};

static const ax_pose sAipomPose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose2[] = {
	AX_POSE(1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose3[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose4[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose5[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose6[] = {
	AX_POSE(5, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose7[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose8[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose9[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose10[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose11[] = {
	AX_POSE(10, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose12[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose13[] = {
	AX_POSE(12, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose14[] = {
	AX_POSE(13, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose15[] = {
	AX_POSE(14, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose16[] = {
	AX_POSE(15, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose17[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose18[] = {
	AX_POSE(17, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose19[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose20[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose21[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose22[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose23[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose24[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose73[] = {
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose74[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose75[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose76[] = {
	AX_POSE(27, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose77[] = {
	AX_POSE(28, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose78[] = {
	AX_POSE(27, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose79[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose80[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose82[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose85[] = {
	AX_POSE(30, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose88[] = {
	AX_POSE(31, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose91[] = {
	AX_POSE(32, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose92[] = {
	AX_POSE(27, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose94[] = {
	AX_POSE(33, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose97[] = {
	AX_POSE(32, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose98[] = {
	AX_POSE(27, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose100[] = {
	AX_POSE(31, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose103[] = {
	AX_POSE(30, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose105[] = {
	AX_POSE(34, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose106[] = {
	AX_POSE(35, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose107[] = {
	AX_POSE(36, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose108[] = {
	AX_POSE(37, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose109[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose110[] = {
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose111[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose112[] = {
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose113[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose114[] = {
	AX_POSE(37, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose116[] = {
	AX_POSE(41, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose118[] = {
	AX_POSE(42, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose119[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose120[] = {
	AX_POSE(43, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose121[] = {
	AX_POSE(27, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose122[] = {
	AX_POSE(44, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose124[] = {
	AX_POSE(45, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose125[] = {
	AX_POSE(27, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose126[] = {
	AX_POSE(44, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose127[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose128[] = {
	AX_POSE(43, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose130[] = {
	AX_POSE(42, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose142[] = {
	AX_POSE(32, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose145[] = {
	AX_POSE(31, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose146[] = {
	AX_POSE(30, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose150[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose155[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose156[] = {
	AX_POSE(15, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose158[] = {
	AX_POSE(27, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose164[] = {
	AX_POSE(27, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose165[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose167[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAipomPose170[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const u8 sAipomAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_1_1.lz");
static const u8 sAipomAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_1_2.lz");
static const u8 sAipomAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_1_3.lz");
static const u8 sAipomAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_1_4.lz");
static const u8 sAipomAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_1_5.lz");
static const u8 sAipomAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_1_6.lz");
static const u8 sAipomAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_1_7.lz");
static const u8 sAipomAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_1_8.lz");
static const u8 sAipomAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_2_2.lz");
static const u8 sAipomAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_2_3.lz");
static const u8 sAipomAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_2_4.lz");
static const u8 sAipomAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_2_5.lz");
static const u8 sAipomAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_2_6.lz");
static const u8 sAipomAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_2_7.lz");
static const u8 sAipomAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_2_8.lz");
static const u8 sAipomAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_3_2.lz");
static const u8 sAipomAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_3_3.lz");
static const u8 sAipomAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_3_4.lz");
static const u8 sAipomAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_3_5.lz");
static const u8 sAipomAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_3_6.lz");
static const u8 sAipomAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_3_7.lz");
static const u8 sAipomAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_3_8.lz");
static const u8 sAipomAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_5_1.lz");
static const u8 sAipomAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_5_2.lz");
static const u8 sAipomAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_5_3.lz");
static const u8 sAipomAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_5_4.lz");
static const u8 sAipomAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_5_5.lz");
static const u8 sAipomAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_5_6.lz");
static const u8 sAipomAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_5_7.lz");
static const u8 sAipomAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_5_8.lz");
static const u8 sAipomAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_8_1.lz");
static const u8 sAipomAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_8_2.lz");
static const u8 sAipomAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_8_3.lz");
static const u8 sAipomAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_8_4.lz");
static const u8 sAipomAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_8_5.lz");
static const u8 sAipomAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_8_6.lz");
static const u8 sAipomAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_8_7.lz");
static const u8 sAipomAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_8_8.lz");
static const u8 sAipomAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_9_1.lz");
static const u8 sAipomAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_9_2.lz");
static const u8 sAipomAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_9_3.lz");
static const u8 sAipomAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_9_4.lz");
static const u8 sAipomAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_9_5.lz");
static const u8 sAipomAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_9_6.lz");
static const u8 sAipomAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_9_7.lz");
static const u8 sAipomAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_9_8.lz");
static const u8 sAipomAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_11_1.lz");
static const u8 sAipomAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_11_2.lz");
static const u8 sAipomAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_11_3.lz");
static const u8 sAipomAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_11_4.lz");
static const u8 sAipomAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_11_5.lz");
static const u8 sAipomAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_11_6.lz");
static const u8 sAipomAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_11_7.lz");
static const u8 sAipomAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aipom/sAipomAnims_11_8.lz");

static const u8 sAipomGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_1.4bpp.lz");
static const ax_sprite sAipomSprites1[] = {
	{sAipomGfx1, ARRAY_COUNT(sAipomGfx1)}, 
	{NULL, 0}
};
static const u8 sAipomGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_2.4bpp.lz");
static const ax_sprite sAipomSprites2[] = {
	{sAipomGfx2, ARRAY_COUNT(sAipomGfx2)}, 
	{NULL, 0}
};
static const u8 sAipomGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_3.4bpp.lz");
static const ax_sprite sAipomSprites3[] = {
	{sAipomGfx3, ARRAY_COUNT(sAipomGfx3)}, 
	{NULL, 0}
};
static const u8 sAipomGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_4.4bpp.lz");
static const ax_sprite sAipomSprites4[] = {
	{sAipomGfx4, ARRAY_COUNT(sAipomGfx4)}, 
	{NULL, 0}
};
static const u8 sAipomGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_5.4bpp.lz");
static const ax_sprite sAipomSprites5[] = {
	{sAipomGfx5, ARRAY_COUNT(sAipomGfx5)}, 
	{NULL, 0}
};
static const u8 sAipomGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_6.4bpp.lz");
static const ax_sprite sAipomSprites6[] = {
	{sAipomGfx6, ARRAY_COUNT(sAipomGfx6)}, 
	{NULL, 0}
};
static const u8 sAipomGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_7.4bpp.lz");
static const ax_sprite sAipomSprites7[] = {
	{sAipomGfx7, ARRAY_COUNT(sAipomGfx7)}, 
	{NULL, 0}
};
static const u8 sAipomGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_8.4bpp.lz");
static const ax_sprite sAipomSprites8[] = {
	{sAipomGfx8, ARRAY_COUNT(sAipomGfx8)}, 
	{NULL, 0}
};
static const u8 sAipomGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_9.4bpp.lz");
static const ax_sprite sAipomSprites9[] = {
	{sAipomGfx9, ARRAY_COUNT(sAipomGfx9)}, 
	{NULL, 0}
};
static const u8 sAipomGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_10.4bpp.lz");
static const ax_sprite sAipomSprites10[] = {
	{sAipomGfx10, ARRAY_COUNT(sAipomGfx10)}, 
	{NULL, 0}
};
static const u8 sAipomGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_11.4bpp.lz");
static const ax_sprite sAipomSprites11[] = {
	{sAipomGfx11, ARRAY_COUNT(sAipomGfx11)}, 
	{NULL, 0}
};
static const u8 sAipomGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_12.4bpp.lz");
static const ax_sprite sAipomSprites12[] = {
	{sAipomGfx12, ARRAY_COUNT(sAipomGfx12)}, 
	{NULL, 0}
};
static const u8 sAipomGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_13.4bpp.lz");
static const ax_sprite sAipomSprites13[] = {
	{sAipomGfx13, ARRAY_COUNT(sAipomGfx13)}, 
	{NULL, 0}
};
static const u8 sAipomGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_14.4bpp.lz");
static const ax_sprite sAipomSprites14[] = {
	{sAipomGfx14, ARRAY_COUNT(sAipomGfx14)}, 
	{NULL, 0}
};
static const u8 sAipomGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_15.4bpp.lz");
static const ax_sprite sAipomSprites15[] = {
	{sAipomGfx15, ARRAY_COUNT(sAipomGfx15)}, 
	{NULL, 0}
};
static const u8 sAipomGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_16.4bpp.lz");
static const ax_sprite sAipomSprites16[] = {
	{sAipomGfx16, ARRAY_COUNT(sAipomGfx16)}, 
	{NULL, 0}
};
static const u8 sAipomGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_17.4bpp.lz");
static const ax_sprite sAipomSprites17[] = {
	{sAipomGfx17, ARRAY_COUNT(sAipomGfx17)}, 
	{NULL, 0}
};
static const u8 sAipomGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_18.4bpp.lz");
static const ax_sprite sAipomSprites18[] = {
	{sAipomGfx18, ARRAY_COUNT(sAipomGfx18)}, 
	{NULL, 0}
};
static const u8 sAipomGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_19.4bpp.lz");
static const ax_sprite sAipomSprites19[] = {
	{sAipomGfx19, ARRAY_COUNT(sAipomGfx19)}, 
	{NULL, 0}
};
static const u8 sAipomGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_20.4bpp.lz");
static const ax_sprite sAipomSprites20[] = {
	{sAipomGfx20, ARRAY_COUNT(sAipomGfx20)}, 
	{NULL, 0}
};
static const u8 sAipomGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_21.4bpp.lz");
static const ax_sprite sAipomSprites21[] = {
	{sAipomGfx21, ARRAY_COUNT(sAipomGfx21)}, 
	{NULL, 0}
};
static const u8 sAipomGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_22.4bpp.lz");
static const ax_sprite sAipomSprites22[] = {
	{sAipomGfx22, ARRAY_COUNT(sAipomGfx22)}, 
	{NULL, 0}
};
static const u8 sAipomGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_23.4bpp.lz");
static const ax_sprite sAipomSprites23[] = {
	{sAipomGfx23, ARRAY_COUNT(sAipomGfx23)}, 
	{NULL, 0}
};
static const u8 sAipomGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_24.4bpp.lz");
static const ax_sprite sAipomSprites24[] = {
	{sAipomGfx24, ARRAY_COUNT(sAipomGfx24)}, 
	{NULL, 0}
};
static const u8 sAipomGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_25.4bpp.lz");
static const u8 sAipomGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_25_1.4bpp.lz");
static const u8 sAipomGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_25_2.4bpp.lz");
static const u8 sAipomGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_25_3.4bpp.lz");
static const ax_sprite sAipomSprites25[] = {
	{NULL, 32}, 
	{sAipomGfx25, ARRAY_COUNT(sAipomGfx25)}, 
	{NULL, 64}, 
	{sAipomGfx25_1, ARRAY_COUNT(sAipomGfx25_1)}, 
	{NULL, 32}, 
	{sAipomGfx25_2, ARRAY_COUNT(sAipomGfx25_2)}, 
	{NULL, 32}, 
	{sAipomGfx25_3, ARRAY_COUNT(sAipomGfx25_3)}, 
	{NULL, 0}
};
static const u8 sAipomGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_26.4bpp.lz");
static const u8 sAipomGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_26_1.4bpp.lz");
static const u8 sAipomGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_26_2.4bpp.lz");
static const u8 sAipomGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_26_3.4bpp.lz");
static const ax_sprite sAipomSprites26[] = {
	{sAipomGfx26, ARRAY_COUNT(sAipomGfx26)}, 
	{NULL, 32}, 
	{sAipomGfx26_1, ARRAY_COUNT(sAipomGfx26_1)}, 
	{NULL, 32}, 
	{sAipomGfx26_2, ARRAY_COUNT(sAipomGfx26_2)}, 
	{NULL, 64}, 
	{sAipomGfx26_3, ARRAY_COUNT(sAipomGfx26_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAipomGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_27.4bpp.lz");
static const u8 sAipomGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_27_1.4bpp.lz");
static const u8 sAipomGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_27_2.4bpp.lz");
static const u8 sAipomGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_27_3.4bpp.lz");
static const ax_sprite sAipomSprites27[] = {
	{sAipomGfx27, ARRAY_COUNT(sAipomGfx27)}, 
	{NULL, 32}, 
	{sAipomGfx27_1, ARRAY_COUNT(sAipomGfx27_1)}, 
	{NULL, 32}, 
	{sAipomGfx27_2, ARRAY_COUNT(sAipomGfx27_2)}, 
	{NULL, 32}, 
	{sAipomGfx27_3, ARRAY_COUNT(sAipomGfx27_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sAipomGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_28.4bpp.lz");
static const u8 sAipomGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_28_1.4bpp.lz");
static const u8 sAipomGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_28_2.4bpp.lz");
static const u8 sAipomGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_28_3.4bpp.lz");
static const ax_sprite sAipomSprites28[] = {
	{NULL, 32}, 
	{sAipomGfx28, ARRAY_COUNT(sAipomGfx28)}, 
	{NULL, 32}, 
	{sAipomGfx28_1, ARRAY_COUNT(sAipomGfx28_1)}, 
	{NULL, 32}, 
	{sAipomGfx28_2, ARRAY_COUNT(sAipomGfx28_2)}, 
	{NULL, 64}, 
	{sAipomGfx28_3, ARRAY_COUNT(sAipomGfx28_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAipomGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_29.4bpp.lz");
static const u8 sAipomGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_29_1.4bpp.lz");
static const u8 sAipomGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_29_2.4bpp.lz");
static const ax_sprite sAipomSprites29[] = {
	{NULL, 32}, 
	{sAipomGfx29, ARRAY_COUNT(sAipomGfx29)}, 
	{NULL, 32}, 
	{sAipomGfx29_1, ARRAY_COUNT(sAipomGfx29_1)}, 
	{NULL, 64}, 
	{sAipomGfx29_2, ARRAY_COUNT(sAipomGfx29_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAipomGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_30.4bpp.lz");
static const u8 sAipomGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_30_1.4bpp.lz");
static const u8 sAipomGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_30_2.4bpp.lz");
static const ax_sprite sAipomSprites30[] = {
	{NULL, 32}, 
	{sAipomGfx30, ARRAY_COUNT(sAipomGfx30)}, 
	{NULL, 32}, 
	{sAipomGfx30_1, ARRAY_COUNT(sAipomGfx30_1)}, 
	{NULL, 32}, 
	{sAipomGfx30_2, ARRAY_COUNT(sAipomGfx30_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAipomGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_31.4bpp.lz");
static const u8 sAipomGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_31_1.4bpp.lz");
static const u8 sAipomGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_31_2.4bpp.lz");
static const u8 sAipomGfx31_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_31_3.4bpp.lz");
static const ax_sprite sAipomSprites31[] = {
	{sAipomGfx31, ARRAY_COUNT(sAipomGfx31)}, 
	{NULL, 32}, 
	{sAipomGfx31_1, ARRAY_COUNT(sAipomGfx31_1)}, 
	{NULL, 32}, 
	{sAipomGfx31_2, ARRAY_COUNT(sAipomGfx31_2)}, 
	{NULL, 64}, 
	{sAipomGfx31_3, ARRAY_COUNT(sAipomGfx31_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sAipomGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_32.4bpp.lz");
static const u8 sAipomGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_32_1.4bpp.lz");
static const u8 sAipomGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_32_2.4bpp.lz");
static const u8 sAipomGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_32_3.4bpp.lz");
static const ax_sprite sAipomSprites32[] = {
	{sAipomGfx32, ARRAY_COUNT(sAipomGfx32)}, 
	{NULL, 64}, 
	{sAipomGfx32_1, ARRAY_COUNT(sAipomGfx32_1)}, 
	{NULL, 32}, 
	{sAipomGfx32_2, ARRAY_COUNT(sAipomGfx32_2)}, 
	{NULL, 32}, 
	{sAipomGfx32_3, ARRAY_COUNT(sAipomGfx32_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAipomGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_33.4bpp.lz");
static const u8 sAipomGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_33_1.4bpp.lz");
static const u8 sAipomGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_33_2.4bpp.lz");
static const u8 sAipomGfx33_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_33_3.4bpp.lz");
static const ax_sprite sAipomSprites33[] = {
	{sAipomGfx33, ARRAY_COUNT(sAipomGfx33)}, 
	{NULL, 32}, 
	{sAipomGfx33_1, ARRAY_COUNT(sAipomGfx33_1)}, 
	{NULL, 64}, 
	{sAipomGfx33_2, ARRAY_COUNT(sAipomGfx33_2)}, 
	{NULL, 32}, 
	{sAipomGfx33_3, ARRAY_COUNT(sAipomGfx33_3)}, 
	{NULL, 0}
};
static const u8 sAipomGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_34.4bpp.lz");
static const u8 sAipomGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_34_1.4bpp.lz");
static const u8 sAipomGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_34_2.4bpp.lz");
static const u8 sAipomGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_34_3.4bpp.lz");
static const ax_sprite sAipomSprites34[] = {
	{sAipomGfx34, ARRAY_COUNT(sAipomGfx34)}, 
	{NULL, 32}, 
	{sAipomGfx34_1, ARRAY_COUNT(sAipomGfx34_1)}, 
	{NULL, 64}, 
	{sAipomGfx34_2, ARRAY_COUNT(sAipomGfx34_2)}, 
	{NULL, 32}, 
	{sAipomGfx34_3, ARRAY_COUNT(sAipomGfx34_3)}, 
	{NULL, 0}
};
static const u8 sAipomGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_35.4bpp.lz");
static const ax_sprite sAipomSprites35[] = {
	{sAipomGfx35, ARRAY_COUNT(sAipomGfx35)}, 
	{NULL, 0}
};
static const u8 sAipomGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_36.4bpp.lz");
static const ax_sprite sAipomSprites36[] = {
	{sAipomGfx36, ARRAY_COUNT(sAipomGfx36)}, 
	{NULL, 0}
};
static const u8 sAipomGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_37.4bpp.lz");
static const ax_sprite sAipomSprites37[] = {
	{sAipomGfx37, ARRAY_COUNT(sAipomGfx37)}, 
	{NULL, 0}
};
static const u8 sAipomGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_38.4bpp.lz");
static const ax_sprite sAipomSprites38[] = {
	{sAipomGfx38, ARRAY_COUNT(sAipomGfx38)}, 
	{NULL, 0}
};
static const u8 sAipomGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_39.4bpp.lz");
static const ax_sprite sAipomSprites39[] = {
	{sAipomGfx39, ARRAY_COUNT(sAipomGfx39)}, 
	{NULL, 0}
};
static const u8 sAipomGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_40.4bpp.lz");
static const ax_sprite sAipomSprites40[] = {
	{sAipomGfx40, ARRAY_COUNT(sAipomGfx40)}, 
	{NULL, 0}
};
static const u8 sAipomGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_41.4bpp.lz");
static const ax_sprite sAipomSprites41[] = {
	{sAipomGfx41, ARRAY_COUNT(sAipomGfx41)}, 
	{NULL, 0}
};
static const u8 sAipomGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_42.4bpp.lz");
static const ax_sprite sAipomSprites42[] = {
	{sAipomGfx42, ARRAY_COUNT(sAipomGfx42)}, 
	{NULL, 0}
};
static const u8 sAipomGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_43.4bpp.lz");
static const ax_sprite sAipomSprites43[] = {
	{sAipomGfx43, ARRAY_COUNT(sAipomGfx43)}, 
	{NULL, 0}
};
static const u8 sAipomGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_44.4bpp.lz");
static const ax_sprite sAipomSprites44[] = {
	{sAipomGfx44, ARRAY_COUNT(sAipomGfx44)}, 
	{NULL, 0}
};
static const u8 sAipomGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_45.4bpp.lz");
static const ax_sprite sAipomSprites45[] = {
	{sAipomGfx45, ARRAY_COUNT(sAipomGfx45)}, 
	{NULL, 0}
};
static const u8 sAipomGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aipom/sprite_46.4bpp.lz");
static const ax_sprite sAipomSprites46[] = {
	{sAipomGfx46, ARRAY_COUNT(sAipomGfx46)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesAipom[] = {
	sAipomPose1,
	sAipomPose2,
	sAipomPose3,
	sAipomPose4,
	sAipomPose5,
	sAipomPose6,
	sAipomPose7,
	sAipomPose8,
	sAipomPose9,
	sAipomPose10,
	sAipomPose11,
	sAipomPose12,
	sAipomPose13,
	sAipomPose14,
	sAipomPose15,
	sAipomPose16,
	sAipomPose17,
	sAipomPose18,
	sAipomPose19,
	sAipomPose20,
	sAipomPose21,
	sAipomPose22,
	sAipomPose23,
	sAipomPose24,
	sAipomPose1,
	sAipomPose2,
	sAipomPose3,
	sAipomPose4,
	sAipomPose5,
	sAipomPose6,
	sAipomPose7,
	sAipomPose8,
	sAipomPose9,
	sAipomPose10,
	sAipomPose11,
	sAipomPose12,
	sAipomPose13,
	sAipomPose14,
	sAipomPose15,
	sAipomPose16,
	sAipomPose17,
	sAipomPose18,
	sAipomPose19,
	sAipomPose20,
	sAipomPose21,
	sAipomPose22,
	sAipomPose23,
	sAipomPose24,
	sAipomPose1,
	sAipomPose2,
	sAipomPose3,
	sAipomPose4,
	sAipomPose5,
	sAipomPose6,
	sAipomPose7,
	sAipomPose8,
	sAipomPose9,
	sAipomPose10,
	sAipomPose11,
	sAipomPose12,
	sAipomPose13,
	sAipomPose14,
	sAipomPose15,
	sAipomPose16,
	sAipomPose17,
	sAipomPose18,
	sAipomPose19,
	sAipomPose20,
	sAipomPose21,
	sAipomPose22,
	sAipomPose23,
	sAipomPose24,
	sAipomPose73,
	sAipomPose74,
	sAipomPose75,
	sAipomPose76,
	sAipomPose77,
	sAipomPose78,
	sAipomPose79,
	sAipomPose80,
	sAipomPose1,
	sAipomPose82,
	sAipomPose73,
	sAipomPose4,
	sAipomPose85,
	sAipomPose80,
	sAipomPose7,
	sAipomPose88,
	sAipomPose79,
	sAipomPose10,
	sAipomPose91,
	sAipomPose92,
	sAipomPose13,
	sAipomPose94,
	sAipomPose77,
	sAipomPose16,
	sAipomPose97,
	sAipomPose98,
	sAipomPose19,
	sAipomPose100,
	sAipomPose75,
	sAipomPose22,
	sAipomPose103,
	sAipomPose74,
	sAipomPose105,
	sAipomPose106,
	sAipomPose107,
	sAipomPose108,
	sAipomPose109,
	sAipomPose110,
	sAipomPose111,
	sAipomPose112,
	sAipomPose113,
	sAipomPose114,
	sAipomPose73,
	sAipomPose116,
	sAipomPose80,
	sAipomPose118,
	sAipomPose119,
	sAipomPose120,
	sAipomPose121,
	sAipomPose122,
	sAipomPose77,
	sAipomPose124,
	sAipomPose125,
	sAipomPose126,
	sAipomPose127,
	sAipomPose128,
	sAipomPose74,
	sAipomPose130,
	sAipomPose73,
	sAipomPose74,
	sAipomPose75,
	sAipomPose76,
	sAipomPose77,
	sAipomPose78,
	sAipomPose79,
	sAipomPose80,
	sAipomPose82,
	sAipomPose85,
	sAipomPose88,
	sAipomPose142,
	sAipomPose94,
	sAipomPose97,
	sAipomPose145,
	sAipomPose146,
	sAipomPose1,
	sAipomPose82,
	sAipomPose73,
	sAipomPose150,
	sAipomPose85,
	sAipomPose80,
	sAipomPose7,
	sAipomPose88,
	sAipomPose155,
	sAipomPose156,
	sAipomPose91,
	sAipomPose158,
	sAipomPose13,
	sAipomPose94,
	sAipomPose77,
	sAipomPose16,
	sAipomPose97,
	sAipomPose164,
	sAipomPose165,
	sAipomPose100,
	sAipomPose167,
	sAipomPose22,
	sAipomPose103,
	sAipomPose170,
	sAipomPose73,
	sAipomPose74,
	sAipomPose75,
	sAipomPose76,
	sAipomPose77,
	sAipomPose78,
	sAipomPose79,
	sAipomPose80,
	sAipomPose1,
	sAipomPose22,
	sAipomPose19,
	sAipomPose16,
	sAipomPose13,
	sAipomPose10,
	sAipomPose7,
	sAipomPose4,
};

static const struct PositionSets sAxPositionsAipom[] = {
	[0] = { .set = { {0, -9}, {-7, -7}, {6, -7}, {0, -8} } },
	[1] = { .set = { {0, -10}, {-6, -9}, {5, -8}, {0, -8} } },
	[2] = { .set = { {-1, -10}, {-6, -9}, {5, -9}, {-1, -8} } },
	[3] = { .set = { {1, -9}, {-7, -5}, {3, -7}, {-1, -7} } },
	[4] = { .set = { {2, -10}, {-1, -6}, {1, -7}, {-1, -8} } },
	[5] = { .set = { {1, -10}, {-7, -8}, {4, -10}, {-1, -8} } },
	[6] = { .set = { {3, -10}, {-4, -5}, {-2, -8}, {-1, -7} } },
	[7] = { .set = { {3, -11}, {1, -8}, {0, -11}, {0, -9} } },
	[8] = { .set = { {3, -11}, {-5, -8}, {3, -9}, {-1, -8} } },
	[9] = { .set = { {-1, -11}, {2, -5}, {-6, -8}, {-2, -9} } },
	[10] = { .set = { {-1, -12}, {4, -9}, {-7, -10}, {-2, -9} } },
	[11] = { .set = { {0, -12}, {-1, -9}, {-4, -12}, {-2, -9} } },
	[12] = { .set = { {-1, -11}, {6, -7}, {-7, -7}, {-1, -7} } },
	[13] = { .set = { {-1, -11}, {4, -9}, {-7, -9}, {0, -8} } },
	[14] = { .set = { {0, -11}, {6, -9}, {-5, -9}, {0, -8} } },
	[15] = { .set = { {-2, -12}, {4, -8}, {-5, -5}, {0, -9} } },
	[16] = { .set = { {-2, -12}, {3, -11}, {-2, -9}, {1, -11} } },
	[17] = { .set = { {0, -13}, {5, -10}, {-6, -9}, {0, -9} } },
	[18] = { .set = { {-5, -10}, {1, -9}, {2, -5}, {0, -7} } },
	[19] = { .set = { {-5, -11}, {-5, -9}, {3, -8}, {-1, -8} } },
	[20] = { .set = { {-5, -11}, {3, -9}, {-3, -8}, {0, -8} } },
	[21] = { .set = { {-4, -9}, {-5, -7}, {5, -6}, {0, -8} } },
	[22] = { .set = { {-3, -10}, {-6, -9}, {5, -8}, {-1, -9} } },
	[23] = { .set = { {-4, -10}, {-2, -12}, {-1, -6}, {0, -9} } },
	[24] = { .set = { {0, -9}, {-7, -7}, {6, -7}, {0, -8} } },
	[25] = { .set = { {0, -10}, {-6, -9}, {5, -8}, {0, -8} } },
	[26] = { .set = { {-1, -10}, {-6, -9}, {5, -9}, {-1, -8} } },
	[27] = { .set = { {1, -9}, {-7, -5}, {3, -7}, {-1, -7} } },
	[28] = { .set = { {2, -10}, {-1, -6}, {1, -7}, {-1, -8} } },
	[29] = { .set = { {1, -10}, {-7, -8}, {4, -10}, {-1, -8} } },
	[30] = { .set = { {3, -10}, {-4, -5}, {-2, -8}, {-1, -7} } },
	[31] = { .set = { {3, -11}, {1, -8}, {0, -11}, {0, -9} } },
	[32] = { .set = { {3, -11}, {-5, -8}, {3, -9}, {-1, -8} } },
	[33] = { .set = { {-1, -11}, {2, -5}, {-6, -8}, {-2, -9} } },
	[34] = { .set = { {-1, -12}, {4, -9}, {-7, -10}, {-2, -9} } },
	[35] = { .set = { {0, -12}, {-1, -9}, {-4, -12}, {-2, -9} } },
	[36] = { .set = { {-1, -11}, {6, -7}, {-7, -7}, {-1, -7} } },
	[37] = { .set = { {-1, -11}, {4, -9}, {-7, -9}, {0, -8} } },
	[38] = { .set = { {0, -11}, {6, -9}, {-5, -9}, {0, -8} } },
	[39] = { .set = { {-2, -12}, {4, -8}, {-5, -5}, {0, -9} } },
	[40] = { .set = { {-2, -12}, {3, -11}, {-2, -9}, {1, -11} } },
	[41] = { .set = { {0, -13}, {5, -10}, {-6, -9}, {0, -9} } },
	[42] = { .set = { {-5, -10}, {1, -9}, {2, -5}, {0, -7} } },
	[43] = { .set = { {-5, -11}, {-5, -9}, {3, -8}, {-1, -8} } },
	[44] = { .set = { {-5, -11}, {3, -9}, {-3, -8}, {0, -8} } },
	[45] = { .set = { {-4, -9}, {-5, -7}, {5, -6}, {0, -8} } },
	[46] = { .set = { {-3, -10}, {-6, -9}, {5, -8}, {-1, -9} } },
	[47] = { .set = { {-4, -10}, {-2, -12}, {-1, -6}, {0, -9} } },
	[48] = { .set = { {0, -9}, {-7, -7}, {6, -7}, {0, -8} } },
	[49] = { .set = { {0, -10}, {-6, -9}, {5, -8}, {0, -8} } },
	[50] = { .set = { {-1, -10}, {-6, -9}, {5, -9}, {-1, -8} } },
	[51] = { .set = { {1, -9}, {-7, -5}, {3, -7}, {-1, -7} } },
	[52] = { .set = { {2, -10}, {-1, -6}, {1, -7}, {-1, -8} } },
	[53] = { .set = { {1, -10}, {-7, -8}, {4, -10}, {-1, -8} } },
	[54] = { .set = { {3, -10}, {-4, -5}, {-2, -8}, {-1, -7} } },
	[55] = { .set = { {3, -11}, {1, -8}, {0, -11}, {0, -9} } },
	[56] = { .set = { {3, -11}, {-5, -8}, {3, -9}, {-1, -8} } },
	[57] = { .set = { {-1, -11}, {2, -5}, {-6, -8}, {-2, -9} } },
	[58] = { .set = { {-1, -12}, {4, -9}, {-7, -10}, {-2, -9} } },
	[59] = { .set = { {0, -12}, {-1, -9}, {-4, -12}, {-2, -9} } },
	[60] = { .set = { {-1, -11}, {6, -7}, {-7, -7}, {-1, -7} } },
	[61] = { .set = { {-1, -11}, {4, -9}, {-7, -9}, {0, -8} } },
	[62] = { .set = { {0, -11}, {6, -9}, {-5, -9}, {0, -8} } },
	[63] = { .set = { {-2, -12}, {4, -8}, {-5, -5}, {0, -9} } },
	[64] = { .set = { {-2, -12}, {3, -11}, {-2, -9}, {1, -11} } },
	[65] = { .set = { {0, -13}, {5, -10}, {-6, -9}, {0, -9} } },
	[66] = { .set = { {-5, -10}, {1, -9}, {2, -5}, {0, -7} } },
	[67] = { .set = { {-5, -11}, {-5, -9}, {3, -8}, {-1, -8} } },
	[68] = { .set = { {-5, -11}, {3, -9}, {-3, -8}, {0, -8} } },
	[69] = { .set = { {-4, -9}, {-5, -7}, {5, -6}, {0, -8} } },
	[70] = { .set = { {-3, -10}, {-6, -9}, {5, -8}, {-1, -9} } },
	[71] = { .set = { {-4, -10}, {-2, -12}, {-1, -6}, {0, -9} } },
	[72] = { .set = { {-1, -6}, {-5, 0}, {4, 0}, {0, -4} } },
	[73] = { .set = { {-5, -5}, {-4, 0}, {3, 1}, {-1, -4} } },
	[74] = { .set = { {-8, -6}, {-3, 0}, {-3, 1}, {-2, -4} } },
	[75] = { .set = { {-3, -7}, {1, -2}, {-4, 0}, {-1, -6} } },
	[76] = { .set = { {0, -7}, {4, -1}, {-5, -1}, {0, -5} } },
	[77] = { .set = { {2, -7}, {-2, -2}, {3, 0}, {0, -6} } },
	[78] = { .set = { {6, -6}, {1, 0}, {1, 1}, {0, -4} } },
	[79] = { .set = { {3, -5}, {2, 0}, {-5, 1}, {-1, -4} } },
	[80] = { .set = { {0, -9}, {-7, -7}, {6, -7}, {0, -8} } },
	[81] = { .set = { {-1, -11}, {-6, -11}, {5, -11}, {0, -9} } },
	[82] = { .set = { {-1, -6}, {-5, 0}, {4, 0}, {0, -4} } },
	[83] = { .set = { {1, -9}, {-7, -5}, {3, -7}, {-1, -7} } },
	[84] = { .set = { {1, -11}, {3, -12}, {-5, -11}, {-1, -9} } },
	[85] = { .set = { {3, -5}, {2, 0}, {-5, 1}, {-1, -4} } },
	[86] = { .set = { {3, -10}, {-4, -5}, {-2, -8}, {-1, -7} } },
	[87] = { .set = { {3, -12}, {0, -13}, {-1, -11}, {-1, -10} } },
	[88] = { .set = { {6, -6}, {1, 0}, {1, 1}, {0, -4} } },
	[89] = { .set = { {-1, -11}, {2, -5}, {-6, -8}, {-2, -9} } },
	[90] = { .set = { {-1, -13}, {-5, -12}, {3, -10}, {-2, -9} } },
	[91] = { .set = { {2, -8}, {-2, -3}, {3, -1}, {0, -7} } },
	[92] = { .set = { {-1, -11}, {6, -7}, {-7, -7}, {-1, -7} } },
	[93] = { .set = { {-1, -13}, {4, -10}, {-5, -10}, {-1, -9} } },
	[94] = { .set = { {0, -7}, {4, -1}, {-5, -1}, {0, -5} } },
	[95] = { .set = { {-2, -12}, {4, -8}, {-5, -5}, {0, -9} } },
	[96] = { .set = { {-1, -13}, {3, -12}, {-5, -10}, {0, -9} } },
	[97] = { .set = { {-3, -8}, {1, -3}, {-4, -1}, {-1, -7} } },
	[98] = { .set = { {-5, -10}, {1, -9}, {2, -5}, {0, -7} } },
	[99] = { .set = { {-5, -12}, {-2, -13}, {-1, -11}, {-1, -10} } },
	[100] = { .set = { {-8, -6}, {-3, 0}, {-3, 1}, {-2, -4} } },
	[101] = { .set = { {-4, -9}, {-5, -7}, {5, -6}, {0, -8} } },
	[102] = { .set = { {-3, -10}, {-5, -11}, {3, -10}, {-1, -8} } },
	[103] = { .set = { {-5, -5}, {-4, 0}, {3, 1}, {-1, -4} } },
	[104] = { .set = { {1, -7}, {-6, -3}, {2, -4}, {-1, -6} } },
	[105] = { .set = { {2, -7}, {-5, -2}, {2, -3}, {-1, -5} } },
	[106] = { .set = { {0, 0}, {-7, -4}, {6, -4}, {0, -4} } },
	[107] = { .set = { {2, 1}, {5, -7}, {-3, 4}, {0, -3} } },
	[108] = { .set = { {4, 0}, {0, -1}, {-2, 2}, {0, -2} } },
	[109] = { .set = { {2, -4}, {-6, -5}, {5, -1}, {0, -4} } },
	[110] = { .set = { {0, -4}, {7, -2}, {-9, -2}, {0, -3} } },
	[111] = { .set = { {-3, -4}, {5, -5}, {-6, -1}, {-1, -4} } },
	[112] = { .set = { {-5, 0}, {-1, -1}, {1, 2}, {-1, -2} } },
	[113] = { .set = { {-3, 1}, {-6, -7}, {2, 4}, {-1, -3} } },
	[114] = { .set = { {-1, -6}, {-5, 0}, {4, 0}, {0, -4} } },
	[115] = { .set = { {-1, -6}, {-5, 0}, {4, 0}, {0, -4} } },
	[116] = { .set = { {3, -5}, {2, 0}, {-5, 1}, {-1, -4} } },
	[117] = { .set = { {3, -5}, {2, 0}, {-5, 1}, {-1, -4} } },
	[118] = { .set = { {7, -6}, {2, 0}, {2, 1}, {1, -4} } },
	[119] = { .set = { {7, -6}, {2, 0}, {2, 1}, {0, -4} } },
	[120] = { .set = { {1, -7}, {-3, -2}, {2, 0}, {-1, -6} } },
	[121] = { .set = { {0, -8}, {-3, -3}, {2, 0}, {-1, -6} } },
	[122] = { .set = { {0, -7}, {4, -1}, {-5, -1}, {0, -5} } },
	[123] = { .set = { {0, -8}, {4, -1}, {-5, -1}, {0, -5} } },
	[124] = { .set = { {-4, -7}, {0, -2}, {-5, 0}, {-2, -6} } },
	[125] = { .set = { {-3, -8}, {0, -3}, {-5, 0}, {-2, -6} } },
	[126] = { .set = { {-9, -6}, {-4, 0}, {-4, 1}, {-3, -4} } },
	[127] = { .set = { {-9, -6}, {-4, 0}, {-4, 1}, {-2, -4} } },
	[128] = { .set = { {-5, -5}, {-4, 0}, {3, 1}, {-1, -4} } },
	[129] = { .set = { {-5, -5}, {-4, 0}, {3, 1}, {-1, -4} } },
	[130] = { .set = { {-1, -6}, {-5, 0}, {4, 0}, {0, -4} } },
	[131] = { .set = { {-5, -5}, {-4, 0}, {3, 1}, {-1, -4} } },
	[132] = { .set = { {-8, -6}, {-3, 0}, {-3, 1}, {-2, -4} } },
	[133] = { .set = { {-3, -7}, {1, -2}, {-4, 0}, {-1, -6} } },
	[134] = { .set = { {0, -7}, {4, -1}, {-5, -1}, {0, -5} } },
	[135] = { .set = { {2, -7}, {-2, -2}, {3, 0}, {0, -6} } },
	[136] = { .set = { {6, -6}, {1, 0}, {1, 1}, {0, -4} } },
	[137] = { .set = { {3, -5}, {2, 0}, {-5, 1}, {-1, -4} } },
	[138] = { .set = { {-1, -11}, {-6, -11}, {5, -11}, {0, -9} } },
	[139] = { .set = { {1, -11}, {3, -12}, {-5, -11}, {-1, -9} } },
	[140] = { .set = { {3, -12}, {0, -13}, {-1, -11}, {-1, -10} } },
	[141] = { .set = { {0, -13}, {-4, -12}, {4, -10}, {-1, -9} } },
	[142] = { .set = { {-1, -13}, {4, -10}, {-5, -10}, {-1, -9} } },
	[143] = { .set = { {-1, -13}, {3, -12}, {-5, -10}, {0, -9} } },
	[144] = { .set = { {-4, -12}, {-1, -13}, {0, -11}, {0, -10} } },
	[145] = { .set = { {-2, -11}, {-4, -12}, {4, -11}, {0, -9} } },
	[146] = { .set = { {0, -9}, {-7, -7}, {6, -7}, {0, -8} } },
	[147] = { .set = { {-1, -11}, {-6, -11}, {5, -11}, {0, -9} } },
	[148] = { .set = { {-1, -6}, {-5, 0}, {4, 0}, {0, -4} } },
	[149] = { .set = { {2, -9}, {-6, -5}, {4, -7}, {0, -7} } },
	[150] = { .set = { {1, -11}, {3, -12}, {-5, -11}, {-1, -9} } },
	[151] = { .set = { {3, -5}, {2, 0}, {-5, 1}, {-1, -4} } },
	[152] = { .set = { {3, -10}, {-4, -5}, {-2, -8}, {-1, -7} } },
	[153] = { .set = { {3, -12}, {0, -13}, {-1, -11}, {-1, -10} } },
	[154] = { .set = { {4, -6}, {-1, 0}, {-1, 1}, {-2, -4} } },
	[155] = { .set = { {0, -12}, {-6, -8}, {3, -5}, {-2, -9} } },
	[156] = { .set = { {-1, -13}, {-5, -12}, {3, -10}, {-2, -9} } },
	[157] = { .set = { {-1, -8}, {-5, -3}, {0, -1}, {-3, -7} } },
	[158] = { .set = { {-1, -11}, {6, -7}, {-7, -7}, {-1, -7} } },
	[159] = { .set = { {-1, -13}, {4, -10}, {-5, -10}, {-1, -9} } },
	[160] = { .set = { {0, -7}, {4, -1}, {-5, -1}, {0, -5} } },
	[161] = { .set = { {-2, -12}, {4, -8}, {-5, -5}, {0, -9} } },
	[162] = { .set = { {-1, -13}, {3, -12}, {-5, -10}, {0, -9} } },
	[163] = { .set = { {-1, -8}, {3, -3}, {-2, -1}, {1, -7} } },
	[164] = { .set = { {-4, -10}, {2, -9}, {3, -5}, {1, -7} } },
	[165] = { .set = { {-5, -12}, {-2, -13}, {-1, -11}, {-1, -10} } },
	[166] = { .set = { {-6, -6}, {-1, 0}, {-1, 1}, {0, -4} } },
	[167] = { .set = { {-4, -9}, {-5, -7}, {5, -6}, {0, -8} } },
	[168] = { .set = { {-3, -10}, {-5, -11}, {3, -10}, {-1, -8} } },
	[169] = { .set = { {-4, -5}, {-3, 0}, {4, 1}, {0, -4} } },
	[170] = { .set = { {-1, -6}, {-5, 0}, {4, 0}, {0, -4} } },
	[171] = { .set = { {-5, -5}, {-4, 0}, {3, 1}, {-1, -4} } },
	[172] = { .set = { {-8, -6}, {-3, 0}, {-3, 1}, {-2, -4} } },
	[173] = { .set = { {-3, -7}, {1, -2}, {-4, 0}, {-1, -6} } },
	[174] = { .set = { {0, -7}, {4, -1}, {-5, -1}, {0, -5} } },
	[175] = { .set = { {2, -7}, {-2, -2}, {3, 0}, {0, -6} } },
	[176] = { .set = { {6, -6}, {1, 0}, {1, 1}, {0, -4} } },
	[177] = { .set = { {3, -5}, {2, 0}, {-5, 1}, {-1, -4} } },
	[178] = { .set = { {0, -9}, {-7, -7}, {6, -7}, {0, -8} } },
	[179] = { .set = { {-4, -9}, {-5, -7}, {5, -6}, {0, -8} } },
	[180] = { .set = { {-5, -10}, {1, -9}, {2, -5}, {0, -7} } },
	[181] = { .set = { {-2, -12}, {4, -8}, {-5, -5}, {0, -9} } },
	[182] = { .set = { {-1, -11}, {6, -7}, {-7, -7}, {-1, -7} } },
	[183] = { .set = { {-1, -11}, {2, -5}, {-6, -8}, {-2, -9} } },
	[184] = { .set = { {3, -10}, {-4, -5}, {-2, -8}, {-1, -7} } },
	[185] = { .set = { {1, -9}, {-7, -5}, {3, -7}, {-1, -7} } },
};

static const ax_anim *const sAipomAnimTable1[] = {
	AX_ANIM_PTR(sAipomAnims_1_1),
	AX_ANIM_PTR(sAipomAnims_1_2),
	AX_ANIM_PTR(sAipomAnims_1_3),
	AX_ANIM_PTR(sAipomAnims_1_4),
	AX_ANIM_PTR(sAipomAnims_1_5),
	AX_ANIM_PTR(sAipomAnims_1_6),
	AX_ANIM_PTR(sAipomAnims_1_7),
	AX_ANIM_PTR(sAipomAnims_1_8),
};

static const ax_anim *const sAipomAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_01561),
	AX_ANIM_PTR(sAipomAnims_2_2),
	AX_ANIM_PTR(sAipomAnims_2_3),
	AX_ANIM_PTR(sAipomAnims_2_4),
	AX_ANIM_PTR(sAipomAnims_2_5),
	AX_ANIM_PTR(sAipomAnims_2_6),
	AX_ANIM_PTR(sAipomAnims_2_7),
	AX_ANIM_PTR(sAipomAnims_2_8),
};

static const ax_anim *const sAipomAnimTable3[] = {
	AX_ANIM_PTR(gAxSharedAnim_01964),
	AX_ANIM_PTR(sAipomAnims_3_2),
	AX_ANIM_PTR(sAipomAnims_3_3),
	AX_ANIM_PTR(sAipomAnims_3_4),
	AX_ANIM_PTR(sAipomAnims_3_5),
	AX_ANIM_PTR(sAipomAnims_3_6),
	AX_ANIM_PTR(sAipomAnims_3_7),
	AX_ANIM_PTR(sAipomAnims_3_8),
};

static const ax_anim *const sAipomAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_02094),
	AX_ANIM_PTR(gAxSharedAnim_02142),
	AX_ANIM_PTR(gAxSharedAnim_02128),
	AX_ANIM_PTR(gAxSharedAnim_02124),
	AX_ANIM_PTR(gAxSharedAnim_02122),
	AX_ANIM_PTR(gAxSharedAnim_02113),
	AX_ANIM_PTR(gAxSharedAnim_02101),
	AX_ANIM_PTR(gAxSharedAnim_02095),
};

static const ax_anim *const sAipomAnimTable5[] = {
	AX_ANIM_PTR(sAipomAnims_5_1),
	AX_ANIM_PTR(sAipomAnims_5_2),
	AX_ANIM_PTR(sAipomAnims_5_3),
	AX_ANIM_PTR(sAipomAnims_5_4),
	AX_ANIM_PTR(sAipomAnims_5_5),
	AX_ANIM_PTR(sAipomAnims_5_6),
	AX_ANIM_PTR(sAipomAnims_5_7),
	AX_ANIM_PTR(sAipomAnims_5_8),
};

static const ax_anim *const sAipomAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
};

static const ax_anim *const sAipomAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00193),
	AX_ANIM_PTR(gAxSharedAnim_00201),
	AX_ANIM_PTR(gAxSharedAnim_00210),
	AX_ANIM_PTR(gAxSharedAnim_00218),
	AX_ANIM_PTR(gAxSharedAnim_00232),
	AX_ANIM_PTR(gAxSharedAnim_00244),
	AX_ANIM_PTR(gAxSharedAnim_00252),
	AX_ANIM_PTR(gAxSharedAnim_00259),
};

static const ax_anim *const sAipomAnimTable8[] = {
	AX_ANIM_PTR(sAipomAnims_8_1),
	AX_ANIM_PTR(sAipomAnims_8_2),
	AX_ANIM_PTR(sAipomAnims_8_3),
	AX_ANIM_PTR(sAipomAnims_8_4),
	AX_ANIM_PTR(sAipomAnims_8_5),
	AX_ANIM_PTR(sAipomAnims_8_6),
	AX_ANIM_PTR(sAipomAnims_8_7),
	AX_ANIM_PTR(sAipomAnims_8_8),
};

static const ax_anim *const sAipomAnimTable9[] = {
	AX_ANIM_PTR(sAipomAnims_9_1),
	AX_ANIM_PTR(sAipomAnims_9_2),
	AX_ANIM_PTR(sAipomAnims_9_3),
	AX_ANIM_PTR(sAipomAnims_9_4),
	AX_ANIM_PTR(sAipomAnims_9_5),
	AX_ANIM_PTR(sAipomAnims_9_6),
	AX_ANIM_PTR(sAipomAnims_9_7),
	AX_ANIM_PTR(sAipomAnims_9_8),
};

static const ax_anim *const sAipomAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00474),
	AX_ANIM_PTR(gAxSharedAnim_00483),
	AX_ANIM_PTR(gAxSharedAnim_00492),
	AX_ANIM_PTR(gAxSharedAnim_00500),
	AX_ANIM_PTR(gAxSharedAnim_00506),
	AX_ANIM_PTR(gAxSharedAnim_00515),
	AX_ANIM_PTR(gAxSharedAnim_00521),
	AX_ANIM_PTR(gAxSharedAnim_00526),
};

static const ax_anim *const sAipomAnimTable11[] = {
	AX_ANIM_PTR(sAipomAnims_11_1),
	AX_ANIM_PTR(sAipomAnims_11_2),
	AX_ANIM_PTR(sAipomAnims_11_3),
	AX_ANIM_PTR(sAipomAnims_11_4),
	AX_ANIM_PTR(sAipomAnims_11_5),
	AX_ANIM_PTR(sAipomAnims_11_6),
	AX_ANIM_PTR(sAipomAnims_11_7),
	AX_ANIM_PTR(sAipomAnims_11_8),
};

static const ax_anim *const sAipomAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_00804),
	AX_ANIM_PTR(gAxSharedAnim_00891),
	AX_ANIM_PTR(gAxSharedAnim_00868),
	AX_ANIM_PTR(gAxSharedAnim_00856),
	AX_ANIM_PTR(gAxSharedAnim_00855),
	AX_ANIM_PTR(gAxSharedAnim_00842),
	AX_ANIM_PTR(gAxSharedAnim_00820),
	AX_ANIM_PTR(gAxSharedAnim_00805),
};

static const ax_anim *const sAipomAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_00906),
	AX_ANIM_PTR(gAxSharedAnim_00992),
	AX_ANIM_PTR(gAxSharedAnim_00980),
	AX_ANIM_PTR(gAxSharedAnim_00967),
	AX_ANIM_PTR(gAxSharedAnim_00956),
	AX_ANIM_PTR(gAxSharedAnim_00944),
	AX_ANIM_PTR(gAxSharedAnim_00931),
	AX_ANIM_PTR(gAxSharedAnim_00919),
};

static const ax_anim *const *const sAxAnimationsAipom[] = {
	sAipomAnimTable1,
	sAipomAnimTable2,
	sAipomAnimTable3,
	sAipomAnimTable4,
	sAipomAnimTable5,
	sAipomAnimTable6,
	sAipomAnimTable7,
	sAipomAnimTable8,
	sAipomAnimTable9,
	sAipomAnimTable10,
	sAipomAnimTable11,
	sAipomAnimTable12,
	sAipomAnimTable13,
};

static const ax_sprite *const sAxSpritesAipom[] = {
	sAipomSprites1,
	sAipomSprites2,
	sAipomSprites3,
	sAipomSprites4,
	sAipomSprites5,
	sAipomSprites6,
	sAipomSprites7,
	sAipomSprites8,
	sAipomSprites9,
	sAipomSprites10,
	sAipomSprites11,
	sAipomSprites12,
	sAipomSprites13,
	sAipomSprites14,
	sAipomSprites15,
	sAipomSprites16,
	sAipomSprites17,
	sAipomSprites18,
	sAipomSprites19,
	sAipomSprites20,
	sAipomSprites21,
	sAipomSprites22,
	sAipomSprites23,
	sAipomSprites24,
	sAipomSprites25,
	sAipomSprites26,
	sAipomSprites27,
	sAipomSprites28,
	sAipomSprites29,
	sAipomSprites30,
	sAipomSprites31,
	sAipomSprites32,
	sAipomSprites33,
	sAipomSprites34,
	sAipomSprites35,
	sAipomSprites36,
	sAipomSprites37,
	sAipomSprites38,
	sAipomSprites39,
	sAipomSprites40,
	sAipomSprites41,
	sAipomSprites42,
	sAipomSprites43,
	sAipomSprites44,
	sAipomSprites45,
	sAipomSprites46,
};

static const axmain sAxMainAipom = {
	.poses = sAxPosesAipom,
	.animations = sAxAnimationsAipom,
	.animCount = ARRAY_COUNT(sAxAnimationsAipom),
	.spriteData = sAxSpritesAipom,
	.positions = sAxPositionsAipom,
};
