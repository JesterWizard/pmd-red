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
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
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
static const axmain sAxMainGorebyss;
const SiroArchive gAxGorebyss = {"SIRO", &sAxMainGorebyss};

static const ax_pose sGorebyssPose1[] = {
	AX_POSE(0, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose2[] = {
	AX_POSE(1, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose3[] = {
	AX_POSE(2, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(3, OAM1(214, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose4[] = {
	AX_POSE(4, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose5[] = {
	AX_POSE(5, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose6[] = {
	AX_POSE(6, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose7[] = {
	AX_POSE(7, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose8[] = {
	AX_POSE(8, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 10)),
	AX_POSE(9, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE(10, OAM1(241, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 10)),
	AX_POSE(11, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 10)),
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose9[] = {
	AX_POSE(13, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 10)),
	AX_POSE(14, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(2, 3, 10)),
	AX_POSE(15, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(10, 3, 10)),
	AX_POSE(16, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(11, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose10[] = {
	AX_POSE(17, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose11[] = {
	AX_POSE(18, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose12[] = {
	AX_POSE(19, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose13[] = {
	AX_POSE(20, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose14[] = {
	AX_POSE(21, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose15[] = {
	AX_POSE(22, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(23, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(250, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose16[] = {
	AX_POSE(17, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose17[] = {
	AX_POSE(18, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose18[] = {
	AX_POSE(19, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose19[] = {
	AX_POSE(7, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose20[] = {
	AX_POSE(8, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(9, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 10)),
	AX_POSE(10, OAM1(241, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 10)),
	AX_POSE(11, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 10)),
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose21[] = {
	AX_POSE(13, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(14, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 10)),
	AX_POSE(15, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 10)),
	AX_POSE(16, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(11, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose22[] = {
	AX_POSE(4, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose23[] = {
	AX_POSE(5, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose24[] = {
	AX_POSE(6, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose75[] = {
	AX_POSE(2, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(3, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose76[] = {
	AX_POSE(24, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose79[] = {
	AX_POSE(6, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose80[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose83[] = {
	AX_POSE(13, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 10)),
	AX_POSE(14, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(2, 3, 10)),
	AX_POSE(15, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(10, 3, 10)),
	AX_POSE(16, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(11, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose84[] = {
	AX_POSE(26, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(27, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE(28, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 10)),
	AX_POSE(29, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(229, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose88[] = {
	AX_POSE(30, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose92[] = {
	AX_POSE(31, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(32, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(251, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose96[] = {
	AX_POSE(30, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose97[] = {
	AX_POSE(7, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose98[] = {
	AX_POSE(8, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(9, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE(10, OAM1(241, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 10)),
	AX_POSE(11, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 10)),
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose99[] = {
	AX_POSE(13, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(14, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 10)),
	AX_POSE(15, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 10)),
	AX_POSE(16, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(11, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose100[] = {
	AX_POSE(26, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(27, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(3, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 10)),
	AX_POSE(28, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 10)),
	AX_POSE(29, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(19, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose103[] = {
	AX_POSE(6, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose104[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose129[] = {
	AX_POSE(33, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose130[] = {
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose131[] = {
	AX_POSE(35, OAM1(219, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(36, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE(37, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose132[] = {
	AX_POSE(38, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(39, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(1, 3, 10)),
	AX_POSE(40, OAM1(219, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(3, 3, 10)),
	AX_POSE(41, OAM1(219, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(5, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose133[] = {
	AX_POSE(42, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose134[] = {
	AX_POSE(43, OAM1(247, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(44, OAM1(255, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(1, 3, 10)),
	AX_POSE(45, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(3, 3, 10)),
	AX_POSE(46, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(5, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose135[] = {
	AX_POSE(47, OAM1(249, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(48, OAM1(217, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose136[] = {
	AX_POSE(43, OAM1(247, ST_OAM_SQUARE     , 1), OAM2(11, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 10)),
	AX_POSE(44, OAM1(255, ST_OAM_H_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(1, 3, 10)),
	AX_POSE(45, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(11, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(3, 3, 10)),
	AX_POSE(46, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(5, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose137[] = {
	AX_POSE(42, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose138[] = {
	AX_POSE(38, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 10)),
	AX_POSE(39, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(1, 3, 10)),
	AX_POSE(40, OAM1(219, ST_OAM_V_RECTANGLE, 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(3, 3, 10)),
	AX_POSE(41, OAM1(219, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(5, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose163[] = {
	AX_POSE(2, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(3, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose164[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose165[] = {
	AX_POSE(13, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(14, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 10)),
	AX_POSE(15, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 10)),
	AX_POSE(16, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(11, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose169[] = {
	AX_POSE(13, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(11, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 10)),
	AX_POSE(14, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(2, 3, 10)),
	AX_POSE(15, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(10, 3, 10)),
	AX_POSE(16, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(11, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose170[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose172[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose174[] = {
	AX_POSE(30, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose175[] = {
	AX_POSE(31, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(32, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(251, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose176[] = {
	AX_POSE(30, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose178[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose184[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose189[] = {
	AX_POSE(18, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose190[] = {
	AX_POSE(30, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose191[] = {
	AX_POSE(20, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose192[] = {
	AX_POSE(21, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose193[] = {
	AX_POSE(31, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(32, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(254, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose195[] = {
	AX_POSE(18, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose196[] = {
	AX_POSE(30, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGorebyssPose202[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const u8 sGorebyssAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_1_1.lz");
static const u8 sGorebyssAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_1_2.lz");
static const u8 sGorebyssAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_1_3.lz");
static const u8 sGorebyssAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_1_4.lz");
static const u8 sGorebyssAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_1_5.lz");
static const u8 sGorebyssAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_1_6.lz");
static const u8 sGorebyssAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_1_7.lz");
static const u8 sGorebyssAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_1_8.lz");
static const u8 sGorebyssAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_2_1.lz");
static const u8 sGorebyssAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_2_2.lz");
static const u8 sGorebyssAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_2_3.lz");
static const u8 sGorebyssAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_2_4.lz");
static const u8 sGorebyssAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_2_5.lz");
static const u8 sGorebyssAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_2_6.lz");
static const u8 sGorebyssAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_2_7.lz");
static const u8 sGorebyssAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_2_8.lz");
static const u8 sGorebyssAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_3_1.lz");
static const u8 sGorebyssAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_3_2.lz");
static const u8 sGorebyssAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_3_3.lz");
static const u8 sGorebyssAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_3_4.lz");
static const u8 sGorebyssAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_3_5.lz");
static const u8 sGorebyssAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_3_6.lz");
static const u8 sGorebyssAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_3_7.lz");
static const u8 sGorebyssAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_3_8.lz");
static const u8 sGorebyssAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_4_1.lz");
static const u8 sGorebyssAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_4_2.lz");
static const u8 sGorebyssAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_4_3.lz");
static const u8 sGorebyssAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_4_4.lz");
static const u8 sGorebyssAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_4_5.lz");
static const u8 sGorebyssAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_4_6.lz");
static const u8 sGorebyssAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_4_7.lz");
static const u8 sGorebyssAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_4_8.lz");
static const u8 sGorebyssAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_5_1.lz");
static const u8 sGorebyssAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_5_2.lz");
static const u8 sGorebyssAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_5_3.lz");
static const u8 sGorebyssAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_5_4.lz");
static const u8 sGorebyssAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_5_5.lz");
static const u8 sGorebyssAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_5_6.lz");
static const u8 sGorebyssAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_5_7.lz");
static const u8 sGorebyssAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_5_8.lz");
static const u8 sGorebyssAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_8_1.lz");
static const u8 sGorebyssAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_8_2.lz");
static const u8 sGorebyssAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_8_3.lz");
static const u8 sGorebyssAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_8_4.lz");
static const u8 sGorebyssAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_8_5.lz");
static const u8 sGorebyssAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_8_6.lz");
static const u8 sGorebyssAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_8_7.lz");
static const u8 sGorebyssAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_8_8.lz");
static const u8 sGorebyssAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_9_1.lz");
static const u8 sGorebyssAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_9_2.lz");
static const u8 sGorebyssAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_9_3.lz");
static const u8 sGorebyssAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_9_4.lz");
static const u8 sGorebyssAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_9_5.lz");
static const u8 sGorebyssAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_9_6.lz");
static const u8 sGorebyssAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_9_7.lz");
static const u8 sGorebyssAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_9_8.lz");
static const u8 sGorebyssAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_11_1.lz");
static const u8 sGorebyssAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_11_2.lz");
static const u8 sGorebyssAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_11_3.lz");
static const u8 sGorebyssAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_11_4.lz");
static const u8 sGorebyssAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_11_5.lz");
static const u8 sGorebyssAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_11_6.lz");
static const u8 sGorebyssAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_11_7.lz");
static const u8 sGorebyssAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gorebyss/sGorebyssAnims_11_8.lz");

static const u8 sGorebyssGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_1.4bpp.lz");
static const ax_sprite sGorebyssSprites1[] = {
	{sGorebyssGfx1, ARRAY_COUNT(sGorebyssGfx1)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_2.4bpp.lz");
static const ax_sprite sGorebyssSprites2[] = {
	{sGorebyssGfx2, ARRAY_COUNT(sGorebyssGfx2)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_3.4bpp.lz");
static const ax_sprite sGorebyssSprites3[] = {
	{sGorebyssGfx3, ARRAY_COUNT(sGorebyssGfx3)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_4.4bpp.lz");
static const ax_sprite sGorebyssSprites4[] = {
	{sGorebyssGfx4, ARRAY_COUNT(sGorebyssGfx4)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_5.4bpp.lz");
static const ax_sprite sGorebyssSprites5[] = {
	{sGorebyssGfx5, ARRAY_COUNT(sGorebyssGfx5)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_6.4bpp.lz");
static const ax_sprite sGorebyssSprites6[] = {
	{sGorebyssGfx6, ARRAY_COUNT(sGorebyssGfx6)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_7.4bpp.lz");
static const ax_sprite sGorebyssSprites7[] = {
	{sGorebyssGfx7, ARRAY_COUNT(sGorebyssGfx7)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_8.4bpp.lz");
static const ax_sprite sGorebyssSprites8[] = {
	{sGorebyssGfx8, ARRAY_COUNT(sGorebyssGfx8)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_9.4bpp.lz");
static const ax_sprite sGorebyssSprites9[] = {
	{sGorebyssGfx9, ARRAY_COUNT(sGorebyssGfx9)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_10.4bpp.lz");
static const ax_sprite sGorebyssSprites10[] = {
	{sGorebyssGfx10, ARRAY_COUNT(sGorebyssGfx10)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_11.4bpp.lz");
static const ax_sprite sGorebyssSprites11[] = {
	{sGorebyssGfx11, ARRAY_COUNT(sGorebyssGfx11)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_12.4bpp.lz");
static const ax_sprite sGorebyssSprites12[] = {
	{sGorebyssGfx12, ARRAY_COUNT(sGorebyssGfx12)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_13.4bpp.lz");
static const ax_sprite sGorebyssSprites13[] = {
	{sGorebyssGfx13, ARRAY_COUNT(sGorebyssGfx13)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_14.4bpp.lz");
static const ax_sprite sGorebyssSprites14[] = {
	{sGorebyssGfx14, ARRAY_COUNT(sGorebyssGfx14)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_15.4bpp.lz");
static const ax_sprite sGorebyssSprites15[] = {
	{sGorebyssGfx15, ARRAY_COUNT(sGorebyssGfx15)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_16.4bpp.lz");
static const ax_sprite sGorebyssSprites16[] = {
	{sGorebyssGfx16, ARRAY_COUNT(sGorebyssGfx16)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_17.4bpp.lz");
static const ax_sprite sGorebyssSprites17[] = {
	{sGorebyssGfx17, ARRAY_COUNT(sGorebyssGfx17)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_18.4bpp.lz");
static const ax_sprite sGorebyssSprites18[] = {
	{sGorebyssGfx18, ARRAY_COUNT(sGorebyssGfx18)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_19.4bpp.lz");
static const ax_sprite sGorebyssSprites19[] = {
	{sGorebyssGfx19, ARRAY_COUNT(sGorebyssGfx19)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_20.4bpp.lz");
static const ax_sprite sGorebyssSprites20[] = {
	{sGorebyssGfx20, ARRAY_COUNT(sGorebyssGfx20)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_21.4bpp.lz");
static const ax_sprite sGorebyssSprites21[] = {
	{sGorebyssGfx21, ARRAY_COUNT(sGorebyssGfx21)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_22.4bpp.lz");
static const ax_sprite sGorebyssSprites22[] = {
	{sGorebyssGfx22, ARRAY_COUNT(sGorebyssGfx22)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_23.4bpp.lz");
static const ax_sprite sGorebyssSprites23[] = {
	{sGorebyssGfx23, ARRAY_COUNT(sGorebyssGfx23)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_24.4bpp.lz");
static const ax_sprite sGorebyssSprites24[] = {
	{sGorebyssGfx24, ARRAY_COUNT(sGorebyssGfx24)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_25.4bpp.lz");
static const ax_sprite sGorebyssSprites25[] = {
	{sGorebyssGfx25, ARRAY_COUNT(sGorebyssGfx25)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_26.4bpp.lz");
static const u8 sGorebyssGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_26_1.4bpp.lz");
static const u8 sGorebyssGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_26_2.4bpp.lz");
static const u8 sGorebyssGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_26_3.4bpp.lz");
static const ax_sprite sGorebyssSprites26[] = {
	{sGorebyssGfx26, ARRAY_COUNT(sGorebyssGfx26)}, 
	{NULL, 32}, 
	{sGorebyssGfx26_1, ARRAY_COUNT(sGorebyssGfx26_1)}, 
	{NULL, 64}, 
	{sGorebyssGfx26_2, ARRAY_COUNT(sGorebyssGfx26_2)}, 
	{NULL, 64}, 
	{sGorebyssGfx26_3, ARRAY_COUNT(sGorebyssGfx26_3)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_27.4bpp.lz");
static const ax_sprite sGorebyssSprites27[] = {
	{sGorebyssGfx27, ARRAY_COUNT(sGorebyssGfx27)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_28.4bpp.lz");
static const ax_sprite sGorebyssSprites28[] = {
	{sGorebyssGfx28, ARRAY_COUNT(sGorebyssGfx28)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_29.4bpp.lz");
static const ax_sprite sGorebyssSprites29[] = {
	{sGorebyssGfx29, ARRAY_COUNT(sGorebyssGfx29)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_30.4bpp.lz");
static const ax_sprite sGorebyssSprites30[] = {
	{sGorebyssGfx30, ARRAY_COUNT(sGorebyssGfx30)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_31.4bpp.lz");
static const u8 sGorebyssGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_31_1.4bpp.lz");
static const u8 sGorebyssGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_31_2.4bpp.lz");
static const u8 sGorebyssGfx31_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_31_3.4bpp.lz");
static const ax_sprite sGorebyssSprites31[] = {
	{sGorebyssGfx31, ARRAY_COUNT(sGorebyssGfx31)}, 
	{NULL, 64}, 
	{sGorebyssGfx31_1, ARRAY_COUNT(sGorebyssGfx31_1)}, 
	{NULL, 32}, 
	{sGorebyssGfx31_2, ARRAY_COUNT(sGorebyssGfx31_2)}, 
	{NULL, 64}, 
	{sGorebyssGfx31_3, ARRAY_COUNT(sGorebyssGfx31_3)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_32.4bpp.lz");
static const ax_sprite sGorebyssSprites32[] = {
	{sGorebyssGfx32, ARRAY_COUNT(sGorebyssGfx32)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_33.4bpp.lz");
static const ax_sprite sGorebyssSprites33[] = {
	{sGorebyssGfx33, ARRAY_COUNT(sGorebyssGfx33)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_34.4bpp.lz");
static const ax_sprite sGorebyssSprites34[] = {
	{sGorebyssGfx34, ARRAY_COUNT(sGorebyssGfx34)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_35.4bpp.lz");
static const ax_sprite sGorebyssSprites35[] = {
	{sGorebyssGfx35, ARRAY_COUNT(sGorebyssGfx35)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_36.4bpp.lz");
static const ax_sprite sGorebyssSprites36[] = {
	{sGorebyssGfx36, ARRAY_COUNT(sGorebyssGfx36)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_37.4bpp.lz");
static const ax_sprite sGorebyssSprites37[] = {
	{sGorebyssGfx37, ARRAY_COUNT(sGorebyssGfx37)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_38.4bpp.lz");
static const ax_sprite sGorebyssSprites38[] = {
	{sGorebyssGfx38, ARRAY_COUNT(sGorebyssGfx38)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_39.4bpp.lz");
static const ax_sprite sGorebyssSprites39[] = {
	{sGorebyssGfx39, ARRAY_COUNT(sGorebyssGfx39)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_40.4bpp.lz");
static const ax_sprite sGorebyssSprites40[] = {
	{sGorebyssGfx40, ARRAY_COUNT(sGorebyssGfx40)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_41.4bpp.lz");
static const ax_sprite sGorebyssSprites41[] = {
	{sGorebyssGfx41, ARRAY_COUNT(sGorebyssGfx41)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_42.4bpp.lz");
static const ax_sprite sGorebyssSprites42[] = {
	{sGorebyssGfx42, ARRAY_COUNT(sGorebyssGfx42)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_43.4bpp.lz");
static const ax_sprite sGorebyssSprites43[] = {
	{sGorebyssGfx43, ARRAY_COUNT(sGorebyssGfx43)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_44.4bpp.lz");
static const ax_sprite sGorebyssSprites44[] = {
	{sGorebyssGfx44, ARRAY_COUNT(sGorebyssGfx44)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_45.4bpp.lz");
static const ax_sprite sGorebyssSprites45[] = {
	{sGorebyssGfx45, ARRAY_COUNT(sGorebyssGfx45)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_46.4bpp.lz");
static const ax_sprite sGorebyssSprites46[] = {
	{sGorebyssGfx46, ARRAY_COUNT(sGorebyssGfx46)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_47.4bpp.lz");
static const ax_sprite sGorebyssSprites47[] = {
	{sGorebyssGfx47, ARRAY_COUNT(sGorebyssGfx47)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_48.4bpp.lz");
static const ax_sprite sGorebyssSprites48[] = {
	{sGorebyssGfx48, ARRAY_COUNT(sGorebyssGfx48)}, 
	{NULL, 0}
};
static const u8 sGorebyssGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gorebyss/sprite_49.4bpp.lz");
static const ax_sprite sGorebyssSprites49[] = {
	{sGorebyssGfx49, ARRAY_COUNT(sGorebyssGfx49)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesGorebyss[] = {
	sGorebyssPose1,
	sGorebyssPose2,
	sGorebyssPose3,
	sGorebyssPose4,
	sGorebyssPose5,
	sGorebyssPose6,
	sGorebyssPose7,
	sGorebyssPose8,
	sGorebyssPose9,
	sGorebyssPose10,
	sGorebyssPose11,
	sGorebyssPose12,
	sGorebyssPose13,
	sGorebyssPose14,
	sGorebyssPose15,
	sGorebyssPose16,
	sGorebyssPose17,
	sGorebyssPose18,
	sGorebyssPose19,
	sGorebyssPose20,
	sGorebyssPose21,
	sGorebyssPose22,
	sGorebyssPose23,
	sGorebyssPose24,
	sGorebyssPose1,
	sGorebyssPose2,
	sGorebyssPose3,
	sGorebyssPose4,
	sGorebyssPose5,
	sGorebyssPose6,
	sGorebyssPose7,
	sGorebyssPose8,
	sGorebyssPose9,
	sGorebyssPose10,
	sGorebyssPose11,
	sGorebyssPose12,
	sGorebyssPose13,
	sGorebyssPose14,
	sGorebyssPose15,
	sGorebyssPose16,
	sGorebyssPose17,
	sGorebyssPose18,
	sGorebyssPose19,
	sGorebyssPose20,
	sGorebyssPose21,
	sGorebyssPose22,
	sGorebyssPose23,
	sGorebyssPose24,
	sGorebyssPose1,
	sGorebyssPose2,
	sGorebyssPose3,
	sGorebyssPose4,
	sGorebyssPose5,
	sGorebyssPose6,
	sGorebyssPose7,
	sGorebyssPose8,
	sGorebyssPose9,
	sGorebyssPose10,
	sGorebyssPose11,
	sGorebyssPose12,
	sGorebyssPose13,
	sGorebyssPose14,
	sGorebyssPose15,
	sGorebyssPose16,
	sGorebyssPose17,
	sGorebyssPose18,
	sGorebyssPose19,
	sGorebyssPose20,
	sGorebyssPose21,
	sGorebyssPose22,
	sGorebyssPose23,
	sGorebyssPose24,
	sGorebyssPose1,
	sGorebyssPose2,
	sGorebyssPose75,
	sGorebyssPose76,
	sGorebyssPose4,
	sGorebyssPose5,
	sGorebyssPose79,
	sGorebyssPose80,
	sGorebyssPose7,
	sGorebyssPose8,
	sGorebyssPose83,
	sGorebyssPose84,
	sGorebyssPose10,
	sGorebyssPose11,
	sGorebyssPose12,
	sGorebyssPose88,
	sGorebyssPose13,
	sGorebyssPose14,
	sGorebyssPose15,
	sGorebyssPose92,
	sGorebyssPose16,
	sGorebyssPose17,
	sGorebyssPose18,
	sGorebyssPose96,
	sGorebyssPose97,
	sGorebyssPose98,
	sGorebyssPose99,
	sGorebyssPose100,
	sGorebyssPose22,
	sGorebyssPose23,
	sGorebyssPose103,
	sGorebyssPose104,
	sGorebyssPose1,
	sGorebyssPose2,
	sGorebyssPose3,
	sGorebyssPose4,
	sGorebyssPose5,
	sGorebyssPose6,
	sGorebyssPose7,
	sGorebyssPose8,
	sGorebyssPose9,
	sGorebyssPose10,
	sGorebyssPose11,
	sGorebyssPose12,
	sGorebyssPose13,
	sGorebyssPose14,
	sGorebyssPose15,
	sGorebyssPose16,
	sGorebyssPose17,
	sGorebyssPose18,
	sGorebyssPose19,
	sGorebyssPose20,
	sGorebyssPose21,
	sGorebyssPose22,
	sGorebyssPose23,
	sGorebyssPose24,
	sGorebyssPose129,
	sGorebyssPose130,
	sGorebyssPose131,
	sGorebyssPose132,
	sGorebyssPose133,
	sGorebyssPose134,
	sGorebyssPose135,
	sGorebyssPose136,
	sGorebyssPose137,
	sGorebyssPose138,
	sGorebyssPose1,
	sGorebyssPose2,
	sGorebyssPose3,
	sGorebyssPose4,
	sGorebyssPose5,
	sGorebyssPose6,
	sGorebyssPose7,
	sGorebyssPose8,
	sGorebyssPose9,
	sGorebyssPose10,
	sGorebyssPose11,
	sGorebyssPose12,
	sGorebyssPose13,
	sGorebyssPose14,
	sGorebyssPose15,
	sGorebyssPose16,
	sGorebyssPose17,
	sGorebyssPose18,
	sGorebyssPose19,
	sGorebyssPose20,
	sGorebyssPose21,
	sGorebyssPose22,
	sGorebyssPose23,
	sGorebyssPose24,
	sGorebyssPose163,
	sGorebyssPose164,
	sGorebyssPose165,
	sGorebyssPose18,
	sGorebyssPose15,
	sGorebyssPose12,
	sGorebyssPose169,
	sGorebyssPose170,
	sGorebyssPose76,
	sGorebyssPose172,
	sGorebyssPose84,
	sGorebyssPose174,
	sGorebyssPose175,
	sGorebyssPose176,
	sGorebyssPose100,
	sGorebyssPose178,
	sGorebyssPose1,
	sGorebyssPose2,
	sGorebyssPose76,
	sGorebyssPose4,
	sGorebyssPose5,
	sGorebyssPose184,
	sGorebyssPose7,
	sGorebyssPose8,
	sGorebyssPose84,
	sGorebyssPose10,
	sGorebyssPose189,
	sGorebyssPose190,
	sGorebyssPose191,
	sGorebyssPose192,
	sGorebyssPose193,
	sGorebyssPose16,
	sGorebyssPose195,
	sGorebyssPose196,
	sGorebyssPose97,
	sGorebyssPose98,
	sGorebyssPose100,
	sGorebyssPose22,
	sGorebyssPose23,
	sGorebyssPose202,
	sGorebyssPose1,
	sGorebyssPose22,
	sGorebyssPose19,
	sGorebyssPose16,
	sGorebyssPose13,
	sGorebyssPose10,
	sGorebyssPose7,
	sGorebyssPose4,
	sGorebyssPose1,
	sGorebyssPose22,
	sGorebyssPose19,
	sGorebyssPose16,
	sGorebyssPose13,
	sGorebyssPose10,
	sGorebyssPose7,
	sGorebyssPose4,
};

static const struct PositionSets sAxPositionsGorebyss[] = {
	[0] = { .set = { {-1, -8}, {-4, -10}, {2, -10}, {-1, -12} } },
	[1] = { .set = { {-1, -7}, {-4, -8}, {2, -8}, {-1, -12} } },
	[2] = { .set = { {-1, -6}, {-2, -12}, {4, -12}, {1, -14} } },
	[3] = { .set = { {8, -10}, {4, -11}, {0, -10}, {-1, -10} } },
	[4] = { .set = { {12, -10}, {8, -10}, {3, -8}, {2, -10} } },
	[5] = { .set = { {12, -9}, {7, -9}, {2, -8}, {0, -11} } },
	[6] = { .set = { {12, -15}, {3, -12}, {2, -10}, {1, -11} } },
	[7] = { .set = { {12, -15}, {1, -12}, {1, -9}, {0, -10} } },
	[8] = { .set = { {12, -14}, {1, -14}, {-1, -12}, {-1, -14} } },
	[9] = { .set = { {7, -17}, {0, -13}, {4, -10}, {0, -11} } },
	[10] = { .set = { {7, -17}, {0, -13}, {4, -10}, {0, -11} } },
	[11] = { .set = { {7, -16}, {0, -12}, {3, -8}, {-1, -10} } },
	[12] = { .set = { {-1, -17}, {2, -11}, {-4, -11}, {-1, -12} } },
	[13] = { .set = { {-1, -17}, {2, -11}, {-4, -11}, {-1, -11} } },
	[14] = { .set = { {-1, -19}, {2, -12}, {-4, -12}, {-1, -11} } },
	[15] = { .set = { {-8, -17}, {-1, -13}, {-5, -10}, {-1, -11} } },
	[16] = { .set = { {-8, -17}, {-1, -13}, {-5, -10}, {-1, -11} } },
	[17] = { .set = { {-8, -16}, {-1, -12}, {-4, -8}, {0, -10} } },
	[18] = { .set = { {-12, -15}, {-3, -12}, {-2, -10}, {-1, -11} } },
	[19] = { .set = { {-12, -15}, {-1, -12}, {-1, -9}, {0, -10} } },
	[20] = { .set = { {-12, -14}, {-1, -14}, {1, -12}, {1, -14} } },
	[21] = { .set = { {-9, -10}, {-5, -11}, {-1, -10}, {0, -10} } },
	[22] = { .set = { {-13, -10}, {-9, -10}, {-4, -8}, {-3, -10} } },
	[23] = { .set = { {-13, -9}, {-8, -9}, {-3, -8}, {-1, -11} } },
	[24] = { .set = { {-1, -8}, {-4, -10}, {2, -10}, {-1, -12} } },
	[25] = { .set = { {-1, -7}, {-4, -8}, {2, -8}, {-1, -12} } },
	[26] = { .set = { {-1, -6}, {-2, -12}, {4, -12}, {1, -14} } },
	[27] = { .set = { {8, -10}, {4, -11}, {0, -10}, {-1, -10} } },
	[28] = { .set = { {12, -10}, {8, -10}, {3, -8}, {2, -10} } },
	[29] = { .set = { {12, -9}, {7, -9}, {2, -8}, {0, -11} } },
	[30] = { .set = { {12, -15}, {3, -12}, {2, -10}, {1, -11} } },
	[31] = { .set = { {12, -15}, {1, -12}, {1, -9}, {0, -10} } },
	[32] = { .set = { {12, -14}, {1, -14}, {-1, -12}, {-1, -14} } },
	[33] = { .set = { {7, -17}, {0, -13}, {4, -10}, {0, -11} } },
	[34] = { .set = { {7, -17}, {0, -13}, {4, -10}, {0, -11} } },
	[35] = { .set = { {7, -16}, {0, -12}, {3, -8}, {-1, -10} } },
	[36] = { .set = { {-1, -17}, {2, -11}, {-4, -11}, {-1, -12} } },
	[37] = { .set = { {-1, -17}, {2, -11}, {-4, -11}, {-1, -11} } },
	[38] = { .set = { {-1, -19}, {2, -12}, {-4, -12}, {-1, -11} } },
	[39] = { .set = { {-8, -17}, {-1, -13}, {-5, -10}, {-1, -11} } },
	[40] = { .set = { {-8, -17}, {-1, -13}, {-5, -10}, {-1, -11} } },
	[41] = { .set = { {-8, -16}, {-1, -12}, {-4, -8}, {0, -10} } },
	[42] = { .set = { {-12, -15}, {-3, -12}, {-2, -10}, {-1, -11} } },
	[43] = { .set = { {-12, -15}, {-1, -12}, {-1, -9}, {0, -10} } },
	[44] = { .set = { {-12, -14}, {-1, -14}, {1, -12}, {1, -14} } },
	[45] = { .set = { {-9, -10}, {-5, -11}, {-1, -10}, {0, -10} } },
	[46] = { .set = { {-13, -10}, {-9, -10}, {-4, -8}, {-3, -10} } },
	[47] = { .set = { {-13, -9}, {-8, -9}, {-3, -8}, {-1, -11} } },
	[48] = { .set = { {-1, -8}, {-4, -10}, {2, -10}, {-1, -12} } },
	[49] = { .set = { {-1, -7}, {-4, -8}, {2, -8}, {-1, -12} } },
	[50] = { .set = { {-1, -6}, {-2, -12}, {4, -12}, {1, -14} } },
	[51] = { .set = { {8, -10}, {4, -11}, {0, -10}, {-1, -10} } },
	[52] = { .set = { {12, -10}, {8, -10}, {3, -8}, {2, -10} } },
	[53] = { .set = { {12, -9}, {7, -9}, {2, -8}, {0, -11} } },
	[54] = { .set = { {12, -15}, {3, -12}, {2, -10}, {1, -11} } },
	[55] = { .set = { {12, -15}, {1, -12}, {1, -9}, {0, -10} } },
	[56] = { .set = { {12, -14}, {1, -14}, {-1, -12}, {-1, -14} } },
	[57] = { .set = { {7, -17}, {0, -13}, {4, -10}, {0, -11} } },
	[58] = { .set = { {7, -17}, {0, -13}, {4, -10}, {0, -11} } },
	[59] = { .set = { {7, -16}, {0, -12}, {3, -8}, {-1, -10} } },
	[60] = { .set = { {-1, -17}, {2, -11}, {-4, -11}, {-1, -12} } },
	[61] = { .set = { {-1, -17}, {2, -11}, {-4, -11}, {-1, -11} } },
	[62] = { .set = { {-1, -19}, {2, -12}, {-4, -12}, {-1, -11} } },
	[63] = { .set = { {-8, -17}, {-1, -13}, {-5, -10}, {-1, -11} } },
	[64] = { .set = { {-8, -17}, {-1, -13}, {-5, -10}, {-1, -11} } },
	[65] = { .set = { {-8, -16}, {-1, -12}, {-4, -8}, {0, -10} } },
	[66] = { .set = { {-12, -15}, {-3, -12}, {-2, -10}, {-1, -11} } },
	[67] = { .set = { {-12, -15}, {-1, -12}, {-1, -9}, {0, -10} } },
	[68] = { .set = { {-12, -14}, {-1, -14}, {1, -12}, {1, -14} } },
	[69] = { .set = { {-9, -10}, {-5, -11}, {-1, -10}, {0, -10} } },
	[70] = { .set = { {-13, -10}, {-9, -10}, {-4, -8}, {-3, -10} } },
	[71] = { .set = { {-13, -9}, {-8, -9}, {-3, -8}, {-1, -11} } },
	[72] = { .set = { {-1, -8}, {-4, -10}, {2, -10}, {-1, -12} } },
	[73] = { .set = { {-1, -7}, {-4, -8}, {2, -8}, {-1, -12} } },
	[74] = { .set = { {-1, 2}, {-2, -4}, {4, -4}, {1, -6} } },
	[75] = { .set = { {-1, -15}, {-3, -11}, {1, -11}, {-1, -8} } },
	[76] = { .set = { {8, -10}, {4, -11}, {0, -10}, {-1, -10} } },
	[77] = { .set = { {12, -10}, {8, -10}, {3, -8}, {2, -10} } },
	[78] = { .set = { {12, -7}, {7, -7}, {2, -6}, {0, -9} } },
	[79] = { .set = { {7, -24}, {2, -15}, {-1, -11}, {-2, -13} } },
	[80] = { .set = { {12, -15}, {3, -12}, {2, -10}, {1, -11} } },
	[81] = { .set = { {12, -15}, {1, -12}, {1, -9}, {0, -10} } },
	[82] = { .set = { {12, -11}, {1, -11}, {-1, -9}, {-1, -11} } },
	[83] = { .set = { {11, -25}, {0, -16}, {1, -14}, {-1, -14} } },
	[84] = { .set = { {7, -17}, {0, -13}, {4, -10}, {0, -11} } },
	[85] = { .set = { {7, -17}, {0, -13}, {4, -10}, {0, -11} } },
	[86] = { .set = { {7, -16}, {0, -12}, {3, -8}, {-1, -10} } },
	[87] = { .set = { {6, -28}, {-1, -17}, {3, -15}, {-1, -14} } },
	[88] = { .set = { {-1, -17}, {2, -11}, {-4, -11}, {-1, -12} } },
	[89] = { .set = { {-1, -17}, {2, -11}, {-4, -11}, {-1, -11} } },
	[90] = { .set = { {-1, -19}, {2, -12}, {-4, -12}, {-1, -11} } },
	[91] = { .set = { {-1, -26}, {2, -12}, {-4, -12}, {0, -10} } },
	[92] = { .set = { {-8, -17}, {-1, -13}, {-5, -10}, {-1, -11} } },
	[93] = { .set = { {-8, -17}, {-1, -13}, {-5, -10}, {-1, -11} } },
	[94] = { .set = { {-8, -16}, {-1, -12}, {-4, -8}, {0, -10} } },
	[95] = { .set = { {-7, -28}, {0, -17}, {-4, -15}, {0, -14} } },
	[96] = { .set = { {-13, -15}, {-4, -12}, {-3, -10}, {-2, -11} } },
	[97] = { .set = { {-13, -15}, {-2, -12}, {-2, -9}, {-1, -10} } },
	[98] = { .set = { {-13, -11}, {-2, -11}, {0, -9}, {0, -11} } },
	[99] = { .set = { {-12, -25}, {-1, -16}, {-2, -14}, {0, -14} } },
	[100] = { .set = { {-9, -10}, {-5, -11}, {-1, -10}, {0, -10} } },
	[101] = { .set = { {-13, -10}, {-9, -10}, {-4, -8}, {-3, -10} } },
	[102] = { .set = { {-13, -7}, {-8, -7}, {-3, -6}, {-1, -9} } },
	[103] = { .set = { {-8, -24}, {-3, -15}, {0, -11}, {1, -13} } },
	[104] = { .set = { {-1, -8}, {-4, -10}, {2, -10}, {-1, -12} } },
	[105] = { .set = { {-1, -7}, {-4, -8}, {2, -8}, {-1, -12} } },
	[106] = { .set = { {-1, -6}, {-2, -12}, {4, -12}, {1, -14} } },
	[107] = { .set = { {8, -10}, {4, -11}, {0, -10}, {-1, -10} } },
	[108] = { .set = { {12, -10}, {8, -10}, {3, -8}, {2, -10} } },
	[109] = { .set = { {12, -9}, {7, -9}, {2, -8}, {0, -11} } },
	[110] = { .set = { {12, -15}, {3, -12}, {2, -10}, {1, -11} } },
	[111] = { .set = { {12, -15}, {1, -12}, {1, -9}, {0, -10} } },
	[112] = { .set = { {12, -14}, {1, -14}, {-1, -12}, {-1, -14} } },
	[113] = { .set = { {7, -17}, {0, -13}, {4, -10}, {0, -11} } },
	[114] = { .set = { {7, -17}, {0, -13}, {4, -10}, {0, -11} } },
	[115] = { .set = { {7, -16}, {0, -12}, {3, -8}, {-1, -10} } },
	[116] = { .set = { {-1, -17}, {2, -11}, {-4, -11}, {-1, -12} } },
	[117] = { .set = { {-1, -17}, {2, -11}, {-4, -11}, {-1, -11} } },
	[118] = { .set = { {-1, -19}, {2, -12}, {-4, -12}, {-1, -11} } },
	[119] = { .set = { {-8, -17}, {-1, -13}, {-5, -10}, {-1, -11} } },
	[120] = { .set = { {-8, -17}, {-1, -13}, {-5, -10}, {-1, -11} } },
	[121] = { .set = { {-8, -16}, {-1, -12}, {-4, -8}, {0, -10} } },
	[122] = { .set = { {-12, -15}, {-3, -12}, {-2, -10}, {-1, -11} } },
	[123] = { .set = { {-12, -15}, {-1, -12}, {-1, -9}, {0, -10} } },
	[124] = { .set = { {-12, -14}, {-1, -14}, {1, -12}, {1, -14} } },
	[125] = { .set = { {-9, -10}, {-5, -11}, {-1, -10}, {0, -10} } },
	[126] = { .set = { {-13, -10}, {-9, -10}, {-4, -8}, {-3, -10} } },
	[127] = { .set = { {-13, -9}, {-8, -9}, {-3, -8}, {-1, -11} } },
	[128] = { .set = { {-12, -12}, {-3, -12}, {-1, -9}, {1, -10} } },
	[129] = { .set = { {-12, -10}, {-3, -11}, {-1, -9}, {1, -10} } },
	[130] = { .set = { {-2, -26}, {-4, -9}, {0, -9}, {-2, -8} } },
	[131] = { .set = { {-1, -29}, {3, -12}, {0, -11}, {1, -9} } },
	[132] = { .set = { {-1, -29}, {-2, -15}, {-1, -13}, {0, -11} } },
	[133] = { .set = { {1, -28}, {-3, -18}, {3, -17}, {-1, -12} } },
	[134] = { .set = { {0, -29}, {3, -15}, {-3, -15}, {0, -13} } },
	[135] = { .set = { {-2, -28}, {2, -18}, {-4, -17}, {0, -12} } },
	[136] = { .set = { {0, -29}, {1, -15}, {0, -13}, {-1, -11} } },
	[137] = { .set = { {0, -29}, {-4, -12}, {-1, -11}, {-2, -9} } },
	[138] = { .set = { {-1, -8}, {-4, -10}, {2, -10}, {-1, -12} } },
	[139] = { .set = { {-1, -7}, {-4, -8}, {2, -8}, {-1, -12} } },
	[140] = { .set = { {-1, -6}, {-2, -12}, {4, -12}, {1, -14} } },
	[141] = { .set = { {8, -10}, {4, -11}, {0, -10}, {-1, -10} } },
	[142] = { .set = { {12, -10}, {8, -10}, {3, -8}, {2, -10} } },
	[143] = { .set = { {12, -9}, {7, -9}, {2, -8}, {0, -11} } },
	[144] = { .set = { {12, -15}, {3, -12}, {2, -10}, {1, -11} } },
	[145] = { .set = { {12, -15}, {1, -12}, {1, -9}, {0, -10} } },
	[146] = { .set = { {12, -14}, {1, -14}, {-1, -12}, {-1, -14} } },
	[147] = { .set = { {7, -17}, {0, -13}, {4, -10}, {0, -11} } },
	[148] = { .set = { {7, -17}, {0, -13}, {4, -10}, {0, -11} } },
	[149] = { .set = { {7, -16}, {0, -12}, {3, -8}, {-1, -10} } },
	[150] = { .set = { {-1, -17}, {2, -11}, {-4, -11}, {-1, -12} } },
	[151] = { .set = { {-1, -17}, {2, -11}, {-4, -11}, {-1, -11} } },
	[152] = { .set = { {-1, -19}, {2, -12}, {-4, -12}, {-1, -11} } },
	[153] = { .set = { {-8, -17}, {-1, -13}, {-5, -10}, {-1, -11} } },
	[154] = { .set = { {-8, -17}, {-1, -13}, {-5, -10}, {-1, -11} } },
	[155] = { .set = { {-8, -16}, {-1, -12}, {-4, -8}, {0, -10} } },
	[156] = { .set = { {-12, -15}, {-3, -12}, {-2, -10}, {-1, -11} } },
	[157] = { .set = { {-12, -15}, {-1, -12}, {-1, -9}, {0, -10} } },
	[158] = { .set = { {-12, -14}, {-1, -14}, {1, -12}, {1, -14} } },
	[159] = { .set = { {-9, -10}, {-5, -11}, {-1, -10}, {0, -10} } },
	[160] = { .set = { {-13, -10}, {-9, -10}, {-4, -8}, {-3, -10} } },
	[161] = { .set = { {-13, -9}, {-8, -9}, {-3, -8}, {-1, -11} } },
	[162] = { .set = { {-1, 0}, {-2, -6}, {4, -6}, {1, -8} } },
	[163] = { .set = { {-14, -6}, {-9, -6}, {-4, -5}, {-2, -8} } },
	[164] = { .set = { {-15, -10}, {-4, -10}, {-2, -8}, {-2, -10} } },
	[165] = { .set = { {-8, -16}, {-1, -12}, {-4, -8}, {0, -10} } },
	[166] = { .set = { {-1, -19}, {2, -12}, {-4, -12}, {-1, -11} } },
	[167] = { .set = { {7, -16}, {0, -12}, {3, -8}, {-1, -10} } },
	[168] = { .set = { {14, -10}, {3, -10}, {1, -8}, {1, -10} } },
	[169] = { .set = { {13, -6}, {8, -6}, {3, -5}, {1, -8} } },
	[170] = { .set = { {-1, -15}, {-3, -11}, {1, -11}, {-1, -8} } },
	[171] = { .set = { {7, -25}, {2, -16}, {-1, -12}, {-2, -14} } },
	[172] = { .set = { {11, -25}, {0, -16}, {1, -14}, {-1, -14} } },
	[173] = { .set = { {6, -27}, {-1, -16}, {3, -14}, {-1, -13} } },
	[174] = { .set = { {-1, -28}, {2, -14}, {-4, -14}, {0, -12} } },
	[175] = { .set = { {-7, -27}, {0, -16}, {-4, -14}, {0, -13} } },
	[176] = { .set = { {-12, -25}, {-1, -16}, {-2, -14}, {0, -14} } },
	[177] = { .set = { {-8, -25}, {-3, -16}, {0, -12}, {1, -14} } },
	[178] = { .set = { {-1, -8}, {-4, -10}, {2, -10}, {-1, -12} } },
	[179] = { .set = { {-1, -7}, {-4, -8}, {2, -8}, {-1, -12} } },
	[180] = { .set = { {-1, -15}, {-3, -11}, {1, -11}, {-1, -8} } },
	[181] = { .set = { {8, -10}, {4, -11}, {0, -10}, {-1, -10} } },
	[182] = { .set = { {12, -10}, {8, -10}, {3, -8}, {2, -10} } },
	[183] = { .set = { {8, -24}, {3, -15}, {0, -11}, {-1, -13} } },
	[184] = { .set = { {12, -15}, {3, -12}, {2, -10}, {1, -11} } },
	[185] = { .set = { {12, -15}, {1, -12}, {1, -9}, {0, -10} } },
	[186] = { .set = { {11, -25}, {0, -16}, {1, -14}, {-1, -14} } },
	[187] = { .set = { {7, -17}, {0, -13}, {4, -10}, {0, -11} } },
	[188] = { .set = { {6, -17}, {-1, -13}, {3, -10}, {-1, -11} } },
	[189] = { .set = { {5, -28}, {-2, -17}, {2, -15}, {-2, -14} } },
	[190] = { .set = { {-1, -20}, {2, -14}, {-4, -14}, {-1, -15} } },
	[191] = { .set = { {-1, -20}, {2, -14}, {-4, -14}, {-1, -14} } },
	[192] = { .set = { {-1, -29}, {2, -15}, {-4, -15}, {0, -13} } },
	[193] = { .set = { {-8, -17}, {-1, -13}, {-5, -10}, {-1, -11} } },
	[194] = { .set = { {-7, -17}, {0, -13}, {-4, -10}, {0, -11} } },
	[195] = { .set = { {-6, -28}, {1, -17}, {-3, -15}, {1, -14} } },
	[196] = { .set = { {-13, -15}, {-4, -12}, {-3, -10}, {-2, -11} } },
	[197] = { .set = { {-13, -15}, {-2, -12}, {-2, -9}, {-1, -10} } },
	[198] = { .set = { {-12, -25}, {-1, -16}, {-2, -14}, {0, -14} } },
	[199] = { .set = { {-9, -10}, {-5, -11}, {-1, -10}, {0, -10} } },
	[200] = { .set = { {-13, -10}, {-9, -10}, {-4, -8}, {-3, -10} } },
	[201] = { .set = { {-9, -24}, {-4, -15}, {-1, -11}, {0, -13} } },
	[202] = { .set = { {-1, -8}, {-4, -10}, {2, -10}, {-1, -12} } },
	[203] = { .set = { {-9, -10}, {-5, -11}, {-1, -10}, {0, -10} } },
	[204] = { .set = { {-12, -15}, {-3, -12}, {-2, -10}, {-1, -11} } },
	[205] = { .set = { {-8, -17}, {-1, -13}, {-5, -10}, {-1, -11} } },
	[206] = { .set = { {-1, -17}, {2, -11}, {-4, -11}, {-1, -12} } },
	[207] = { .set = { {7, -17}, {0, -13}, {4, -10}, {0, -11} } },
	[208] = { .set = { {12, -15}, {3, -12}, {2, -10}, {1, -11} } },
	[209] = { .set = { {8, -10}, {4, -11}, {0, -10}, {-1, -10} } },
	[210] = { .set = { {-1, -8}, {-4, -10}, {2, -10}, {-1, -12} } },
	[211] = { .set = { {-9, -10}, {-5, -11}, {-1, -10}, {0, -10} } },
	[212] = { .set = { {-12, -15}, {-3, -12}, {-2, -10}, {-1, -11} } },
	[213] = { .set = { {-8, -17}, {-1, -13}, {-5, -10}, {-1, -11} } },
	[214] = { .set = { {-1, -17}, {2, -11}, {-4, -11}, {-1, -12} } },
	[215] = { .set = { {7, -17}, {0, -13}, {4, -10}, {0, -11} } },
	[216] = { .set = { {12, -15}, {3, -12}, {2, -10}, {1, -11} } },
	[217] = { .set = { {8, -10}, {4, -11}, {0, -10}, {-1, -10} } },
};

static const ax_anim *const sGorebyssAnimTable1[] = {
	AX_ANIM_PTR(sGorebyssAnims_1_1),
	AX_ANIM_PTR(sGorebyssAnims_1_2),
	AX_ANIM_PTR(sGorebyssAnims_1_3),
	AX_ANIM_PTR(sGorebyssAnims_1_4),
	AX_ANIM_PTR(sGorebyssAnims_1_5),
	AX_ANIM_PTR(sGorebyssAnims_1_6),
	AX_ANIM_PTR(sGorebyssAnims_1_7),
	AX_ANIM_PTR(sGorebyssAnims_1_8),
};

static const ax_anim *const sGorebyssAnimTable2[] = {
	AX_ANIM_PTR(sGorebyssAnims_2_1),
	AX_ANIM_PTR(sGorebyssAnims_2_2),
	AX_ANIM_PTR(sGorebyssAnims_2_3),
	AX_ANIM_PTR(sGorebyssAnims_2_4),
	AX_ANIM_PTR(sGorebyssAnims_2_5),
	AX_ANIM_PTR(sGorebyssAnims_2_6),
	AX_ANIM_PTR(sGorebyssAnims_2_7),
	AX_ANIM_PTR(sGorebyssAnims_2_8),
};

static const ax_anim *const sGorebyssAnimTable3[] = {
	AX_ANIM_PTR(sGorebyssAnims_3_1),
	AX_ANIM_PTR(sGorebyssAnims_3_2),
	AX_ANIM_PTR(sGorebyssAnims_3_3),
	AX_ANIM_PTR(sGorebyssAnims_3_4),
	AX_ANIM_PTR(sGorebyssAnims_3_5),
	AX_ANIM_PTR(sGorebyssAnims_3_6),
	AX_ANIM_PTR(sGorebyssAnims_3_7),
	AX_ANIM_PTR(sGorebyssAnims_3_8),
};

static const ax_anim *const sGorebyssAnimTable4[] = {
	AX_ANIM_PTR(sGorebyssAnims_4_1),
	AX_ANIM_PTR(sGorebyssAnims_4_2),
	AX_ANIM_PTR(sGorebyssAnims_4_3),
	AX_ANIM_PTR(sGorebyssAnims_4_4),
	AX_ANIM_PTR(sGorebyssAnims_4_5),
	AX_ANIM_PTR(sGorebyssAnims_4_6),
	AX_ANIM_PTR(sGorebyssAnims_4_7),
	AX_ANIM_PTR(sGorebyssAnims_4_8),
};

static const ax_anim *const sGorebyssAnimTable5[] = {
	AX_ANIM_PTR(sGorebyssAnims_5_1),
	AX_ANIM_PTR(sGorebyssAnims_5_2),
	AX_ANIM_PTR(sGorebyssAnims_5_3),
	AX_ANIM_PTR(sGorebyssAnims_5_4),
	AX_ANIM_PTR(sGorebyssAnims_5_5),
	AX_ANIM_PTR(sGorebyssAnims_5_6),
	AX_ANIM_PTR(sGorebyssAnims_5_7),
	AX_ANIM_PTR(sGorebyssAnims_5_8),
};

static const ax_anim *const sGorebyssAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_00134),
	AX_ANIM_PTR(gAxSharedAnim_00134),
	AX_ANIM_PTR(gAxSharedAnim_00134),
	AX_ANIM_PTR(gAxSharedAnim_00134),
	AX_ANIM_PTR(gAxSharedAnim_00134),
	AX_ANIM_PTR(gAxSharedAnim_00134),
	AX_ANIM_PTR(gAxSharedAnim_00134),
	AX_ANIM_PTR(gAxSharedAnim_00134),
};

static const ax_anim *const sGorebyssAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00396),
	AX_ANIM_PTR(gAxSharedAnim_00402),
	AX_ANIM_PTR(gAxSharedAnim_00413),
	AX_ANIM_PTR(gAxSharedAnim_00422),
	AX_ANIM_PTR(gAxSharedAnim_00434),
	AX_ANIM_PTR(gAxSharedAnim_00442),
	AX_ANIM_PTR(gAxSharedAnim_00451),
	AX_ANIM_PTR(gAxSharedAnim_00461),
};

static const ax_anim *const sGorebyssAnimTable8[] = {
	AX_ANIM_PTR(sGorebyssAnims_8_1),
	AX_ANIM_PTR(sGorebyssAnims_8_2),
	AX_ANIM_PTR(sGorebyssAnims_8_3),
	AX_ANIM_PTR(sGorebyssAnims_8_4),
	AX_ANIM_PTR(sGorebyssAnims_8_5),
	AX_ANIM_PTR(sGorebyssAnims_8_6),
	AX_ANIM_PTR(sGorebyssAnims_8_7),
	AX_ANIM_PTR(sGorebyssAnims_8_8),
};

static const ax_anim *const sGorebyssAnimTable9[] = {
	AX_ANIM_PTR(sGorebyssAnims_9_1),
	AX_ANIM_PTR(sGorebyssAnims_9_2),
	AX_ANIM_PTR(sGorebyssAnims_9_3),
	AX_ANIM_PTR(sGorebyssAnims_9_4),
	AX_ANIM_PTR(sGorebyssAnims_9_5),
	AX_ANIM_PTR(sGorebyssAnims_9_6),
	AX_ANIM_PTR(sGorebyssAnims_9_7),
	AX_ANIM_PTR(sGorebyssAnims_9_8),
};

static const ax_anim *const sGorebyssAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00801),
	AX_ANIM_PTR(gAxSharedAnim_00813),
	AX_ANIM_PTR(gAxSharedAnim_00827),
	AX_ANIM_PTR(gAxSharedAnim_00838),
	AX_ANIM_PTR(gAxSharedAnim_00849),
	AX_ANIM_PTR(gAxSharedAnim_00862),
	AX_ANIM_PTR(gAxSharedAnim_00879),
	AX_ANIM_PTR(gAxSharedAnim_00889),
};

static const ax_anim *const sGorebyssAnimTable11[] = {
	AX_ANIM_PTR(sGorebyssAnims_11_1),
	AX_ANIM_PTR(sGorebyssAnims_11_2),
	AX_ANIM_PTR(sGorebyssAnims_11_3),
	AX_ANIM_PTR(sGorebyssAnims_11_4),
	AX_ANIM_PTR(sGorebyssAnims_11_5),
	AX_ANIM_PTR(sGorebyssAnims_11_6),
	AX_ANIM_PTR(sGorebyssAnims_11_7),
	AX_ANIM_PTR(sGorebyssAnims_11_8),
};

static const ax_anim *const sGorebyssAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01243),
	AX_ANIM_PTR(gAxSharedAnim_01326),
	AX_ANIM_PTR(gAxSharedAnim_01308),
	AX_ANIM_PTR(gAxSharedAnim_01292),
	AX_ANIM_PTR(gAxSharedAnim_01291),
	AX_ANIM_PTR(gAxSharedAnim_01280),
	AX_ANIM_PTR(gAxSharedAnim_01260),
	AX_ANIM_PTR(gAxSharedAnim_01244),
};

static const ax_anim *const sGorebyssAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01335),
	AX_ANIM_PTR(gAxSharedAnim_01409),
	AX_ANIM_PTR(gAxSharedAnim_01397),
	AX_ANIM_PTR(gAxSharedAnim_01386),
	AX_ANIM_PTR(gAxSharedAnim_01374),
	AX_ANIM_PTR(gAxSharedAnim_01366),
	AX_ANIM_PTR(gAxSharedAnim_01358),
	AX_ANIM_PTR(gAxSharedAnim_01348),
};

static const ax_anim *const *const sAxAnimationsGorebyss[] = {
	sGorebyssAnimTable1,
	sGorebyssAnimTable2,
	sGorebyssAnimTable3,
	sGorebyssAnimTable4,
	sGorebyssAnimTable5,
	sGorebyssAnimTable6,
	sGorebyssAnimTable7,
	sGorebyssAnimTable8,
	sGorebyssAnimTable9,
	sGorebyssAnimTable10,
	sGorebyssAnimTable11,
	sGorebyssAnimTable12,
	sGorebyssAnimTable13,
};

static const ax_sprite *const sAxSpritesGorebyss[] = {
	sGorebyssSprites1,
	sGorebyssSprites2,
	sGorebyssSprites3,
	sGorebyssSprites4,
	sGorebyssSprites5,
	sGorebyssSprites6,
	sGorebyssSprites7,
	sGorebyssSprites8,
	sGorebyssSprites9,
	sGorebyssSprites10,
	sGorebyssSprites11,
	sGorebyssSprites12,
	sGorebyssSprites13,
	sGorebyssSprites14,
	sGorebyssSprites15,
	sGorebyssSprites16,
	sGorebyssSprites17,
	sGorebyssSprites18,
	sGorebyssSprites19,
	sGorebyssSprites20,
	sGorebyssSprites21,
	sGorebyssSprites22,
	sGorebyssSprites23,
	sGorebyssSprites24,
	sGorebyssSprites25,
	sGorebyssSprites26,
	sGorebyssSprites27,
	sGorebyssSprites28,
	sGorebyssSprites29,
	sGorebyssSprites30,
	sGorebyssSprites31,
	sGorebyssSprites32,
	sGorebyssSprites33,
	sGorebyssSprites34,
	sGorebyssSprites35,
	sGorebyssSprites36,
	sGorebyssSprites37,
	sGorebyssSprites38,
	sGorebyssSprites39,
	sGorebyssSprites40,
	sGorebyssSprites41,
	sGorebyssSprites42,
	sGorebyssSprites43,
	sGorebyssSprites44,
	sGorebyssSprites45,
	sGorebyssSprites46,
	sGorebyssSprites47,
	sGorebyssSprites48,
	sGorebyssSprites49,
};

static const axmain sAxMainGorebyss = {
	.poses = sAxPosesGorebyss,
	.animations = sAxAnimationsGorebyss,
	.animCount = ARRAY_COUNT(sAxAnimationsGorebyss),
	.spriteData = sAxSpritesGorebyss,
	.positions = sAxPositionsGorebyss,
};
