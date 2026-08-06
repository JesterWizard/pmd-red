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
static const axmain sAxMainKingdra;
const SiroArchive gAxKingdra = {"SIRO", &sAxMainKingdra};

static const ax_pose sKingdraPose1[] = {
	AX_POSE(0, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose2[] = {
	AX_POSE(1, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose3[] = {
	AX_POSE(2, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose4[] = {
	AX_POSE(3, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose5[] = {
	AX_POSE(4, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose6[] = {
	AX_POSE(5, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose7[] = {
	AX_POSE(6, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose8[] = {
	AX_POSE(7, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose9[] = {
	AX_POSE(8, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 0)),
	AX_POSE(9, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(10, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 0)),
	AX_POSE(11, OAM1(254, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose10[] = {
	AX_POSE(12, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose11[] = {
	AX_POSE(13, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose12[] = {
	AX_POSE(14, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 0)),
	AX_POSE(15, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(16, OAM1(254, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose13[] = {
	AX_POSE(17, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose14[] = {
	AX_POSE(18, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose15[] = {
	AX_POSE(19, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(20, OAM1(255, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose16[] = {
	AX_POSE(12, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose17[] = {
	AX_POSE(13, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose18[] = {
	AX_POSE(14, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(15, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE(16, OAM1(254, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose19[] = {
	AX_POSE(6, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose20[] = {
	AX_POSE(7, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose21[] = {
	AX_POSE(8, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(9, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE(10, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 0)),
	AX_POSE(11, OAM1(254, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose22[] = {
	AX_POSE(3, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose23[] = {
	AX_POSE(4, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose24[] = {
	AX_POSE(5, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose28[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose32[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose36[] = {
	AX_POSE(23, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 0)),
	AX_POSE(24, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(25, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 0)),
	AX_POSE(26, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 0)),
	AX_POSE(27, OAM1(247, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose40[] = {
	AX_POSE(28, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(29, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(30, OAM1(0, ST_OAM_SQUARE     , 2), OAM2(247, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose44[] = {
	AX_POSE(31, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(32, OAM1(0, ST_OAM_SQUARE     , 2), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose48[] = {
	AX_POSE(28, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(29, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE(30, OAM1(0, ST_OAM_SQUARE     , 2), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose52[] = {
	AX_POSE(23, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(24, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(25, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 0)),
	AX_POSE(26, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 0)),
	AX_POSE(27, OAM1(247, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose56[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose92[] = {
	AX_POSE(33, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(34, OAM1(254, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose97[] = {
	AX_POSE(35, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose102[] = {
	AX_POSE(36, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose107[] = {
	AX_POSE(37, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose112[] = {
	AX_POSE(38, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose117[] = {
	AX_POSE(37, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose122[] = {
	AX_POSE(36, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose127[] = {
	AX_POSE(35, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose132[] = {
	AX_POSE(39, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(40, OAM1(254, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose136[] = {
	AX_POSE(41, OAM1(220, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(42, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(43, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(9, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose140[] = {
	AX_POSE(44, OAM1(220, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(45, OAM1(220, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(46, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose144[] = {
	AX_POSE(47, OAM1(220, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(48, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(49, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(10, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose148[] = {
	AX_POSE(50, OAM1(220, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(51, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose152[] = {
	AX_POSE(47, OAM1(220, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(48, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE(49, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose156[] = {
	AX_POSE(44, OAM1(220, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(45, OAM1(220, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE(46, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose160[] = {
	AX_POSE(41, OAM1(220, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(42, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(43, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(9, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose161[] = {
	AX_POSE(52, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose162[] = {
	AX_POSE(53, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose163[] = {
	AX_POSE(54, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose164[] = {
	AX_POSE(55, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose165[] = {
	AX_POSE(56, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose166[] = {
	AX_POSE(57, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose167[] = {
	AX_POSE(58, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose168[] = {
	AX_POSE(57, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose169[] = {
	AX_POSE(56, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose170[] = {
	AX_POSE(55, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose196[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose197[] = {
	AX_POSE(23, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(24, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 0)),
	AX_POSE(26, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 0)),
	AX_POSE(27, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose198[] = {
	AX_POSE(28, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(29, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE(30, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(3, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose199[] = {
	AX_POSE(31, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(32, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose200[] = {
	AX_POSE(28, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(29, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(30, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(245, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose201[] = {
	AX_POSE(23, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 0)),
	AX_POSE(24, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 0)),
	AX_POSE(26, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 0)),
	AX_POSE(27, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose202[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose206[] = {
	AX_POSE(37, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose208[] = {
	AX_POSE(37, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose216[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose222[] = {
	AX_POSE(28, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(29, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(30, OAM1(0, ST_OAM_SQUARE     , 2), OAM2(246, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose228[] = {
	AX_POSE(28, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(29, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE(30, OAM1(0, ST_OAM_SQUARE     , 2), OAM2(2, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose234[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose236[] = {
	AX_POSE(4, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose237[] = {
	AX_POSE(7, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose238[] = {
	AX_POSE(13, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose240[] = {
	AX_POSE(13, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose241[] = {
	AX_POSE(7, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKingdraPose242[] = {
	AX_POSE(4, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const u8 sKingdraAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_2_1.lz");
static const u8 sKingdraAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_2_2.lz");
static const u8 sKingdraAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_2_3.lz");
static const u8 sKingdraAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_2_4.lz");
static const u8 sKingdraAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_2_5.lz");
static const u8 sKingdraAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_2_6.lz");
static const u8 sKingdraAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_2_7.lz");
static const u8 sKingdraAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_2_8.lz");
static const u8 sKingdraAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_3_1.lz");
static const u8 sKingdraAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_3_2.lz");
static const u8 sKingdraAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_3_3.lz");
static const u8 sKingdraAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_3_4.lz");
static const u8 sKingdraAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_3_5.lz");
static const u8 sKingdraAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_3_6.lz");
static const u8 sKingdraAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_3_7.lz");
static const u8 sKingdraAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_3_8.lz");
static const u8 sKingdraAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_4_1.lz");
static const u8 sKingdraAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_4_2.lz");
static const u8 sKingdraAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_4_3.lz");
static const u8 sKingdraAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_4_4.lz");
static const u8 sKingdraAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_4_5.lz");
static const u8 sKingdraAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_4_6.lz");
static const u8 sKingdraAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_4_7.lz");
static const u8 sKingdraAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_4_8.lz");
static const u8 sKingdraAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_5_1.lz");
static const u8 sKingdraAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_5_2.lz");
static const u8 sKingdraAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_5_3.lz");
static const u8 sKingdraAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_5_4.lz");
static const u8 sKingdraAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_5_5.lz");
static const u8 sKingdraAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_5_6.lz");
static const u8 sKingdraAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_5_7.lz");
static const u8 sKingdraAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_5_8.lz");
static const u8 sKingdraAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_8_1.lz");
static const u8 sKingdraAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_8_2.lz");
static const u8 sKingdraAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_8_3.lz");
static const u8 sKingdraAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_8_4.lz");
static const u8 sKingdraAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_8_5.lz");
static const u8 sKingdraAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_8_6.lz");
static const u8 sKingdraAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_8_7.lz");
static const u8 sKingdraAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_8_8.lz");
static const u8 sKingdraAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_9_2.lz");
static const u8 sKingdraAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_9_3.lz");
static const u8 sKingdraAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_9_4.lz");
static const u8 sKingdraAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_9_5.lz");
static const u8 sKingdraAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_9_6.lz");
static const u8 sKingdraAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_9_7.lz");
static const u8 sKingdraAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_9_8.lz");
static const u8 sKingdraAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_11_1.lz");
static const u8 sKingdraAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_11_3.lz");
static const u8 sKingdraAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_11_4.lz");
static const u8 sKingdraAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_11_5.lz");
static const u8 sKingdraAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_11_6.lz");
static const u8 sKingdraAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kingdra/sKingdraAnims_11_7.lz");

static const u8 sKingdraGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_1.4bpp.lz");
static const ax_sprite sKingdraSprites1[] = {
	{sKingdraGfx1, ARRAY_COUNT(sKingdraGfx1)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_2.4bpp.lz");
static const ax_sprite sKingdraSprites2[] = {
	{sKingdraGfx2, ARRAY_COUNT(sKingdraGfx2)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_3.4bpp.lz");
static const ax_sprite sKingdraSprites3[] = {
	{sKingdraGfx3, ARRAY_COUNT(sKingdraGfx3)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_4.4bpp.lz");
static const ax_sprite sKingdraSprites4[] = {
	{sKingdraGfx4, ARRAY_COUNT(sKingdraGfx4)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_5.4bpp.lz");
static const ax_sprite sKingdraSprites5[] = {
	{sKingdraGfx5, ARRAY_COUNT(sKingdraGfx5)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_6.4bpp.lz");
static const ax_sprite sKingdraSprites6[] = {
	{sKingdraGfx6, ARRAY_COUNT(sKingdraGfx6)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_7.4bpp.lz");
static const ax_sprite sKingdraSprites7[] = {
	{sKingdraGfx7, ARRAY_COUNT(sKingdraGfx7)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_8.4bpp.lz");
static const ax_sprite sKingdraSprites8[] = {
	{sKingdraGfx8, ARRAY_COUNT(sKingdraGfx8)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_9.4bpp.lz");
static const ax_sprite sKingdraSprites9[] = {
	{sKingdraGfx9, ARRAY_COUNT(sKingdraGfx9)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_10.4bpp.lz");
static const ax_sprite sKingdraSprites10[] = {
	{sKingdraGfx10, ARRAY_COUNT(sKingdraGfx10)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_11.4bpp.lz");
static const ax_sprite sKingdraSprites11[] = {
	{sKingdraGfx11, ARRAY_COUNT(sKingdraGfx11)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_12.4bpp.lz");
static const ax_sprite sKingdraSprites12[] = {
	{sKingdraGfx12, ARRAY_COUNT(sKingdraGfx12)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_13.4bpp.lz");
static const ax_sprite sKingdraSprites13[] = {
	{sKingdraGfx13, ARRAY_COUNT(sKingdraGfx13)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_14.4bpp.lz");
static const ax_sprite sKingdraSprites14[] = {
	{sKingdraGfx14, ARRAY_COUNT(sKingdraGfx14)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_15.4bpp.lz");
static const ax_sprite sKingdraSprites15[] = {
	{sKingdraGfx15, ARRAY_COUNT(sKingdraGfx15)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_16.4bpp.lz");
static const ax_sprite sKingdraSprites16[] = {
	{sKingdraGfx16, ARRAY_COUNT(sKingdraGfx16)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_17.4bpp.lz");
static const ax_sprite sKingdraSprites17[] = {
	{sKingdraGfx17, ARRAY_COUNT(sKingdraGfx17)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_18.4bpp.lz");
static const ax_sprite sKingdraSprites18[] = {
	{sKingdraGfx18, ARRAY_COUNT(sKingdraGfx18)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_19.4bpp.lz");
static const ax_sprite sKingdraSprites19[] = {
	{sKingdraGfx19, ARRAY_COUNT(sKingdraGfx19)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_20.4bpp.lz");
static const ax_sprite sKingdraSprites20[] = {
	{sKingdraGfx20, ARRAY_COUNT(sKingdraGfx20)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_21.4bpp.lz");
static const ax_sprite sKingdraSprites21[] = {
	{sKingdraGfx21, ARRAY_COUNT(sKingdraGfx21)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_22.4bpp.lz");
static const u8 sKingdraGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_22_1.4bpp.lz");
static const u8 sKingdraGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_22_2.4bpp.lz");
static const ax_sprite sKingdraSprites22[] = {
	{sKingdraGfx22, ARRAY_COUNT(sKingdraGfx22)}, 
	{NULL, 32}, 
	{sKingdraGfx22_1, ARRAY_COUNT(sKingdraGfx22_1)}, 
	{NULL, 32}, 
	{sKingdraGfx22_2, ARRAY_COUNT(sKingdraGfx22_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sKingdraGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_23.4bpp.lz");
static const u8 sKingdraGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_23_1.4bpp.lz");
static const ax_sprite sKingdraSprites23[] = {
	{sKingdraGfx23, ARRAY_COUNT(sKingdraGfx23)}, 
	{NULL, 32}, 
	{sKingdraGfx23_1, ARRAY_COUNT(sKingdraGfx23_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sKingdraGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_24.4bpp.lz");
static const ax_sprite sKingdraSprites24[] = {
	{sKingdraGfx24, ARRAY_COUNT(sKingdraGfx24)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_25.4bpp.lz");
static const ax_sprite sKingdraSprites25[] = {
	{sKingdraGfx25, ARRAY_COUNT(sKingdraGfx25)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_26.4bpp.lz");
static const ax_sprite sKingdraSprites26[] = {
	{sKingdraGfx26, ARRAY_COUNT(sKingdraGfx26)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_27.4bpp.lz");
static const ax_sprite sKingdraSprites27[] = {
	{sKingdraGfx27, ARRAY_COUNT(sKingdraGfx27)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_28.4bpp.lz");
static const ax_sprite sKingdraSprites28[] = {
	{sKingdraGfx28, ARRAY_COUNT(sKingdraGfx28)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_29.4bpp.lz");
static const u8 sKingdraGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_29_1.4bpp.lz");
static const ax_sprite sKingdraSprites29[] = {
	{sKingdraGfx29, ARRAY_COUNT(sKingdraGfx29)}, 
	{NULL, 32}, 
	{sKingdraGfx29_1, ARRAY_COUNT(sKingdraGfx29_1)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_30.4bpp.lz");
static const ax_sprite sKingdraSprites30[] = {
	{sKingdraGfx30, ARRAY_COUNT(sKingdraGfx30)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_31.4bpp.lz");
static const ax_sprite sKingdraSprites31[] = {
	{sKingdraGfx31, ARRAY_COUNT(sKingdraGfx31)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_32.4bpp.lz");
static const ax_sprite sKingdraSprites32[] = {
	{sKingdraGfx32, ARRAY_COUNT(sKingdraGfx32)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_33.4bpp.lz");
static const ax_sprite sKingdraSprites33[] = {
	{sKingdraGfx33, ARRAY_COUNT(sKingdraGfx33)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_34.4bpp.lz");
static const ax_sprite sKingdraSprites34[] = {
	{sKingdraGfx34, ARRAY_COUNT(sKingdraGfx34)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_35.4bpp.lz");
static const ax_sprite sKingdraSprites35[] = {
	{sKingdraGfx35, ARRAY_COUNT(sKingdraGfx35)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_36.4bpp.lz");
static const u8 sKingdraGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_36_1.4bpp.lz");
static const u8 sKingdraGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_36_2.4bpp.lz");
static const ax_sprite sKingdraSprites36[] = {
	{NULL, 32}, 
	{sKingdraGfx36, ARRAY_COUNT(sKingdraGfx36)}, 
	{NULL, 32}, 
	{sKingdraGfx36_1, ARRAY_COUNT(sKingdraGfx36_1)}, 
	{NULL, 32}, 
	{sKingdraGfx36_2, ARRAY_COUNT(sKingdraGfx36_2)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_37.4bpp.lz");
static const ax_sprite sKingdraSprites37[] = {
	{NULL, 32}, 
	{sKingdraGfx37, ARRAY_COUNT(sKingdraGfx37)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKingdraGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_38.4bpp.lz");
static const u8 sKingdraGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_38_1.4bpp.lz");
static const u8 sKingdraGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_38_2.4bpp.lz");
static const u8 sKingdraGfx38_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_38_3.4bpp.lz");
static const ax_sprite sKingdraSprites38[] = {
	{NULL, 32}, 
	{sKingdraGfx38, ARRAY_COUNT(sKingdraGfx38)}, 
	{NULL, 64}, 
	{sKingdraGfx38_1, ARRAY_COUNT(sKingdraGfx38_1)}, 
	{NULL, 32}, 
	{sKingdraGfx38_2, ARRAY_COUNT(sKingdraGfx38_2)}, 
	{NULL, 32}, 
	{sKingdraGfx38_3, ARRAY_COUNT(sKingdraGfx38_3)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_39.4bpp.lz");
static const ax_sprite sKingdraSprites39[] = {
	{sKingdraGfx39, ARRAY_COUNT(sKingdraGfx39)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_40.4bpp.lz");
static const ax_sprite sKingdraSprites40[] = {
	{sKingdraGfx40, ARRAY_COUNT(sKingdraGfx40)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_41.4bpp.lz");
static const ax_sprite sKingdraSprites41[] = {
	{sKingdraGfx41, ARRAY_COUNT(sKingdraGfx41)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_42.4bpp.lz");
static const ax_sprite sKingdraSprites42[] = {
	{sKingdraGfx42, ARRAY_COUNT(sKingdraGfx42)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_43.4bpp.lz");
static const ax_sprite sKingdraSprites43[] = {
	{sKingdraGfx43, ARRAY_COUNT(sKingdraGfx43)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_44.4bpp.lz");
static const ax_sprite sKingdraSprites44[] = {
	{sKingdraGfx44, ARRAY_COUNT(sKingdraGfx44)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKingdraGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_45.4bpp.lz");
static const ax_sprite sKingdraSprites45[] = {
	{sKingdraGfx45, ARRAY_COUNT(sKingdraGfx45)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_46.4bpp.lz");
static const ax_sprite sKingdraSprites46[] = {
	{sKingdraGfx46, ARRAY_COUNT(sKingdraGfx46)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_47.4bpp.lz");
static const ax_sprite sKingdraSprites47[] = {
	{sKingdraGfx47, ARRAY_COUNT(sKingdraGfx47)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_48.4bpp.lz");
static const ax_sprite sKingdraSprites48[] = {
	{sKingdraGfx48, ARRAY_COUNT(sKingdraGfx48)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_49.4bpp.lz");
static const ax_sprite sKingdraSprites49[] = {
	{sKingdraGfx49, ARRAY_COUNT(sKingdraGfx49)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_50.4bpp.lz");
static const ax_sprite sKingdraSprites50[] = {
	{sKingdraGfx50, ARRAY_COUNT(sKingdraGfx50)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_51.4bpp.lz");
static const ax_sprite sKingdraSprites51[] = {
	{sKingdraGfx51, ARRAY_COUNT(sKingdraGfx51)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_52.4bpp.lz");
static const ax_sprite sKingdraSprites52[] = {
	{sKingdraGfx52, ARRAY_COUNT(sKingdraGfx52)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_53.4bpp.lz");
static const ax_sprite sKingdraSprites53[] = {
	{sKingdraGfx53, ARRAY_COUNT(sKingdraGfx53)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_54.4bpp.lz");
static const ax_sprite sKingdraSprites54[] = {
	{sKingdraGfx54, ARRAY_COUNT(sKingdraGfx54)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_55.4bpp.lz");
static const ax_sprite sKingdraSprites55[] = {
	{sKingdraGfx55, ARRAY_COUNT(sKingdraGfx55)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_56.4bpp.lz");
static const ax_sprite sKingdraSprites56[] = {
	{sKingdraGfx56, ARRAY_COUNT(sKingdraGfx56)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_57.4bpp.lz");
static const ax_sprite sKingdraSprites57[] = {
	{sKingdraGfx57, ARRAY_COUNT(sKingdraGfx57)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_58.4bpp.lz");
static const ax_sprite sKingdraSprites58[] = {
	{sKingdraGfx58, ARRAY_COUNT(sKingdraGfx58)}, 
	{NULL, 0}
};
static const u8 sKingdraGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kingdra/sprite_59.4bpp.lz");
static const ax_sprite sKingdraSprites59[] = {
	{sKingdraGfx59, ARRAY_COUNT(sKingdraGfx59)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesKingdra[] = {
	sKingdraPose1,
	sKingdraPose2,
	sKingdraPose3,
	sKingdraPose4,
	sKingdraPose5,
	sKingdraPose6,
	sKingdraPose7,
	sKingdraPose8,
	sKingdraPose9,
	sKingdraPose10,
	sKingdraPose11,
	sKingdraPose12,
	sKingdraPose13,
	sKingdraPose14,
	sKingdraPose15,
	sKingdraPose16,
	sKingdraPose17,
	sKingdraPose18,
	sKingdraPose19,
	sKingdraPose20,
	sKingdraPose21,
	sKingdraPose22,
	sKingdraPose23,
	sKingdraPose24,
	sKingdraPose1,
	sKingdraPose2,
	sKingdraPose3,
	sKingdraPose28,
	sKingdraPose4,
	sKingdraPose5,
	sKingdraPose6,
	sKingdraPose32,
	sKingdraPose7,
	sKingdraPose8,
	sKingdraPose9,
	sKingdraPose36,
	sKingdraPose10,
	sKingdraPose11,
	sKingdraPose12,
	sKingdraPose40,
	sKingdraPose13,
	sKingdraPose14,
	sKingdraPose15,
	sKingdraPose44,
	sKingdraPose16,
	sKingdraPose17,
	sKingdraPose18,
	sKingdraPose48,
	sKingdraPose19,
	sKingdraPose20,
	sKingdraPose21,
	sKingdraPose52,
	sKingdraPose22,
	sKingdraPose23,
	sKingdraPose24,
	sKingdraPose56,
	sKingdraPose1,
	sKingdraPose2,
	sKingdraPose3,
	sKingdraPose28,
	sKingdraPose4,
	sKingdraPose5,
	sKingdraPose6,
	sKingdraPose32,
	sKingdraPose7,
	sKingdraPose8,
	sKingdraPose9,
	sKingdraPose36,
	sKingdraPose10,
	sKingdraPose11,
	sKingdraPose12,
	sKingdraPose40,
	sKingdraPose13,
	sKingdraPose14,
	sKingdraPose15,
	sKingdraPose44,
	sKingdraPose16,
	sKingdraPose17,
	sKingdraPose18,
	sKingdraPose48,
	sKingdraPose19,
	sKingdraPose20,
	sKingdraPose21,
	sKingdraPose52,
	sKingdraPose22,
	sKingdraPose23,
	sKingdraPose24,
	sKingdraPose56,
	sKingdraPose1,
	sKingdraPose2,
	sKingdraPose3,
	sKingdraPose92,
	sKingdraPose28,
	sKingdraPose4,
	sKingdraPose5,
	sKingdraPose6,
	sKingdraPose97,
	sKingdraPose32,
	sKingdraPose7,
	sKingdraPose8,
	sKingdraPose9,
	sKingdraPose102,
	sKingdraPose36,
	sKingdraPose10,
	sKingdraPose11,
	sKingdraPose12,
	sKingdraPose107,
	sKingdraPose40,
	sKingdraPose13,
	sKingdraPose14,
	sKingdraPose15,
	sKingdraPose112,
	sKingdraPose44,
	sKingdraPose16,
	sKingdraPose17,
	sKingdraPose18,
	sKingdraPose117,
	sKingdraPose48,
	sKingdraPose19,
	sKingdraPose20,
	sKingdraPose21,
	sKingdraPose122,
	sKingdraPose52,
	sKingdraPose22,
	sKingdraPose23,
	sKingdraPose24,
	sKingdraPose127,
	sKingdraPose56,
	sKingdraPose1,
	sKingdraPose2,
	sKingdraPose3,
	sKingdraPose132,
	sKingdraPose4,
	sKingdraPose5,
	sKingdraPose6,
	sKingdraPose136,
	sKingdraPose7,
	sKingdraPose8,
	sKingdraPose9,
	sKingdraPose140,
	sKingdraPose10,
	sKingdraPose11,
	sKingdraPose12,
	sKingdraPose144,
	sKingdraPose13,
	sKingdraPose14,
	sKingdraPose15,
	sKingdraPose148,
	sKingdraPose16,
	sKingdraPose17,
	sKingdraPose18,
	sKingdraPose152,
	sKingdraPose19,
	sKingdraPose20,
	sKingdraPose21,
	sKingdraPose156,
	sKingdraPose22,
	sKingdraPose23,
	sKingdraPose24,
	sKingdraPose160,
	sKingdraPose161,
	sKingdraPose162,
	sKingdraPose163,
	sKingdraPose164,
	sKingdraPose165,
	sKingdraPose166,
	sKingdraPose167,
	sKingdraPose168,
	sKingdraPose169,
	sKingdraPose170,
	sKingdraPose1,
	sKingdraPose2,
	sKingdraPose3,
	sKingdraPose4,
	sKingdraPose5,
	sKingdraPose6,
	sKingdraPose7,
	sKingdraPose8,
	sKingdraPose9,
	sKingdraPose10,
	sKingdraPose11,
	sKingdraPose12,
	sKingdraPose13,
	sKingdraPose14,
	sKingdraPose15,
	sKingdraPose16,
	sKingdraPose17,
	sKingdraPose18,
	sKingdraPose19,
	sKingdraPose20,
	sKingdraPose21,
	sKingdraPose22,
	sKingdraPose23,
	sKingdraPose24,
	sKingdraPose28,
	sKingdraPose196,
	sKingdraPose197,
	sKingdraPose198,
	sKingdraPose199,
	sKingdraPose200,
	sKingdraPose201,
	sKingdraPose202,
	sKingdraPose92,
	sKingdraPose97,
	sKingdraPose102,
	sKingdraPose206,
	sKingdraPose112,
	sKingdraPose208,
	sKingdraPose122,
	sKingdraPose127,
	sKingdraPose1,
	sKingdraPose132,
	sKingdraPose28,
	sKingdraPose4,
	sKingdraPose136,
	sKingdraPose216,
	sKingdraPose7,
	sKingdraPose140,
	sKingdraPose36,
	sKingdraPose10,
	sKingdraPose144,
	sKingdraPose222,
	sKingdraPose13,
	sKingdraPose148,
	sKingdraPose44,
	sKingdraPose16,
	sKingdraPose152,
	sKingdraPose228,
	sKingdraPose19,
	sKingdraPose156,
	sKingdraPose52,
	sKingdraPose22,
	sKingdraPose160,
	sKingdraPose234,
	sKingdraPose2,
	sKingdraPose236,
	sKingdraPose237,
	sKingdraPose238,
	sKingdraPose14,
	sKingdraPose240,
	sKingdraPose241,
	sKingdraPose242,
	sKingdraPose1,
	sKingdraPose22,
	sKingdraPose19,
	sKingdraPose16,
	sKingdraPose13,
	sKingdraPose10,
	sKingdraPose7,
	sKingdraPose4,
};

static const struct PositionSets sAxPositionsKingdra[] = {
	[0] = { .set = { {0, -11}, {-7, -21}, {6, -21}, {0, -13} } },
	[1] = { .set = { {0, -9}, {-7, -19}, {6, -19}, {0, -11} } },
	[2] = { .set = { {0, -13}, {-7, -23}, {6, -23}, {0, -12} } },
	[3] = { .set = { {7, -12}, {6, -22}, {-3, -20}, {0, -12} } },
	[4] = { .set = { {8, -10}, {7, -20}, {-2, -18}, {-1, -12} } },
	[5] = { .set = { {7, -14}, {6, -23}, {-3, -22}, {0, -13} } },
	[6] = { .set = { {14, -15}, {5, -23}, {1, -20}, {1, -14} } },
	[7] = { .set = { {15, -14}, {6, -22}, {2, -19}, {1, -13} } },
	[8] = { .set = { {13, -17}, {4, -25}, {0, -22}, {0, -15} } },
	[9] = { .set = { {12, -17}, {0, -22}, {5, -18}, {1, -14} } },
	[10] = { .set = { {12, -16}, {0, -21}, {6, -18}, {1, -13} } },
	[11] = { .set = { {11, -19}, {-1, -23}, {5, -20}, {1, -15} } },
	[12] = { .set = { {0, -19}, {6, -19}, {-7, -19}, {0, -15} } },
	[13] = { .set = { {0, -17}, {5, -17}, {-7, -17}, {-1, -14} } },
	[14] = { .set = { {0, -20}, {6, -20}, {-7, -20}, {0, -15} } },
	[15] = { .set = { {-13, -17}, {-1, -22}, {-6, -18}, {-2, -14} } },
	[16] = { .set = { {-13, -16}, {-1, -21}, {-7, -18}, {-2, -13} } },
	[17] = { .set = { {-12, -19}, {0, -23}, {-6, -20}, {-2, -15} } },
	[18] = { .set = { {-15, -15}, {-6, -23}, {-2, -20}, {-2, -14} } },
	[19] = { .set = { {-16, -14}, {-7, -22}, {-3, -19}, {-2, -13} } },
	[20] = { .set = { {-14, -17}, {-5, -25}, {-1, -22}, {-1, -15} } },
	[21] = { .set = { {-8, -12}, {-7, -22}, {2, -20}, {-1, -12} } },
	[22] = { .set = { {-9, -10}, {-8, -20}, {1, -18}, {0, -12} } },
	[23] = { .set = { {-8, -14}, {-7, -23}, {2, -22}, {-1, -13} } },
	[24] = { .set = { {0, -11}, {-7, -21}, {6, -21}, {0, -13} } },
	[25] = { .set = { {0, -9}, {-7, -19}, {6, -19}, {0, -11} } },
	[26] = { .set = { {0, -13}, {-7, -23}, {6, -23}, {0, -12} } },
	[27] = { .set = { {-1, -4}, {-7, -13}, {6, -13}, {0, -12} } },
	[28] = { .set = { {7, -12}, {6, -22}, {-3, -20}, {0, -12} } },
	[29] = { .set = { {8, -10}, {7, -20}, {-2, -18}, {-1, -12} } },
	[30] = { .set = { {7, -14}, {6, -23}, {-3, -22}, {0, -13} } },
	[31] = { .set = { {13, -4}, {10, -13}, {3, -12}, {1, -10} } },
	[32] = { .set = { {14, -15}, {5, -23}, {1, -20}, {1, -14} } },
	[33] = { .set = { {15, -14}, {6, -22}, {2, -19}, {1, -13} } },
	[34] = { .set = { {13, -17}, {4, -25}, {0, -22}, {0, -15} } },
	[35] = { .set = { {15, -9}, {2, -15}, {2, -14}, {-1, -9} } },
	[36] = { .set = { {12, -17}, {0, -22}, {5, -18}, {1, -14} } },
	[37] = { .set = { {12, -16}, {0, -21}, {6, -18}, {1, -13} } },
	[38] = { .set = { {11, -19}, {-1, -23}, {5, -20}, {1, -15} } },
	[39] = { .set = { {12, -19}, {1, -21}, {6, -18}, {2, -13} } },
	[40] = { .set = { {0, -19}, {6, -19}, {-7, -19}, {0, -15} } },
	[41] = { .set = { {0, -17}, {5, -17}, {-7, -17}, {-1, -14} } },
	[42] = { .set = { {0, -20}, {6, -20}, {-7, -20}, {0, -15} } },
	[43] = { .set = { {0, -18}, {6, -19}, {-7, -19}, {0, -12} } },
	[44] = { .set = { {-13, -17}, {-1, -22}, {-6, -18}, {-2, -14} } },
	[45] = { .set = { {-13, -16}, {-1, -21}, {-7, -18}, {-2, -13} } },
	[46] = { .set = { {-12, -19}, {0, -23}, {-6, -20}, {-2, -15} } },
	[47] = { .set = { {-13, -19}, {-2, -21}, {-7, -18}, {-3, -13} } },
	[48] = { .set = { {-15, -15}, {-6, -23}, {-2, -20}, {-2, -14} } },
	[49] = { .set = { {-16, -14}, {-7, -22}, {-3, -19}, {-2, -13} } },
	[50] = { .set = { {-14, -17}, {-5, -25}, {-1, -22}, {-1, -15} } },
	[51] = { .set = { {-16, -9}, {-3, -15}, {-3, -14}, {0, -9} } },
	[52] = { .set = { {-8, -12}, {-7, -22}, {2, -20}, {-1, -12} } },
	[53] = { .set = { {-9, -10}, {-8, -20}, {1, -18}, {0, -12} } },
	[54] = { .set = { {-8, -14}, {-7, -23}, {2, -22}, {-1, -13} } },
	[55] = { .set = { {-14, -4}, {-11, -13}, {-4, -12}, {-2, -10} } },
	[56] = { .set = { {0, -11}, {-7, -21}, {6, -21}, {0, -13} } },
	[57] = { .set = { {0, -9}, {-7, -19}, {6, -19}, {0, -11} } },
	[58] = { .set = { {0, -13}, {-7, -23}, {6, -23}, {0, -12} } },
	[59] = { .set = { {-1, -4}, {-7, -13}, {6, -13}, {0, -12} } },
	[60] = { .set = { {7, -12}, {6, -22}, {-3, -20}, {0, -12} } },
	[61] = { .set = { {8, -10}, {7, -20}, {-2, -18}, {-1, -12} } },
	[62] = { .set = { {7, -14}, {6, -23}, {-3, -22}, {0, -13} } },
	[63] = { .set = { {13, -4}, {10, -13}, {3, -12}, {1, -10} } },
	[64] = { .set = { {14, -15}, {5, -23}, {1, -20}, {1, -14} } },
	[65] = { .set = { {15, -14}, {6, -22}, {2, -19}, {1, -13} } },
	[66] = { .set = { {13, -17}, {4, -25}, {0, -22}, {0, -15} } },
	[67] = { .set = { {15, -9}, {2, -15}, {2, -14}, {-1, -9} } },
	[68] = { .set = { {12, -17}, {0, -22}, {5, -18}, {1, -14} } },
	[69] = { .set = { {12, -16}, {0, -21}, {6, -18}, {1, -13} } },
	[70] = { .set = { {11, -19}, {-1, -23}, {5, -20}, {1, -15} } },
	[71] = { .set = { {12, -19}, {1, -21}, {6, -18}, {2, -13} } },
	[72] = { .set = { {0, -19}, {6, -19}, {-7, -19}, {0, -15} } },
	[73] = { .set = { {0, -17}, {5, -17}, {-7, -17}, {-1, -14} } },
	[74] = { .set = { {0, -20}, {6, -20}, {-7, -20}, {0, -15} } },
	[75] = { .set = { {0, -18}, {6, -19}, {-7, -19}, {0, -12} } },
	[76] = { .set = { {-13, -17}, {-1, -22}, {-6, -18}, {-2, -14} } },
	[77] = { .set = { {-13, -16}, {-1, -21}, {-7, -18}, {-2, -13} } },
	[78] = { .set = { {-12, -19}, {0, -23}, {-6, -20}, {-2, -15} } },
	[79] = { .set = { {-13, -19}, {-2, -21}, {-7, -18}, {-3, -13} } },
	[80] = { .set = { {-15, -15}, {-6, -23}, {-2, -20}, {-2, -14} } },
	[81] = { .set = { {-16, -14}, {-7, -22}, {-3, -19}, {-2, -13} } },
	[82] = { .set = { {-14, -17}, {-5, -25}, {-1, -22}, {-1, -15} } },
	[83] = { .set = { {-16, -9}, {-3, -15}, {-3, -14}, {0, -9} } },
	[84] = { .set = { {-8, -12}, {-7, -22}, {2, -20}, {-1, -12} } },
	[85] = { .set = { {-9, -10}, {-8, -20}, {1, -18}, {0, -12} } },
	[86] = { .set = { {-8, -14}, {-7, -23}, {2, -22}, {-1, -13} } },
	[87] = { .set = { {-14, -4}, {-11, -13}, {-4, -12}, {-2, -10} } },
	[88] = { .set = { {0, -11}, {-7, -21}, {6, -21}, {0, -13} } },
	[89] = { .set = { {0, -9}, {-7, -19}, {6, -19}, {0, -11} } },
	[90] = { .set = { {0, -13}, {-7, -23}, {6, -23}, {0, -12} } },
	[91] = { .set = { {-1, -32}, {-6, -20}, {5, -20}, {0, -15} } },
	[92] = { .set = { {-1, -4}, {-7, -13}, {6, -13}, {0, -12} } },
	[93] = { .set = { {7, -12}, {6, -22}, {-3, -20}, {0, -12} } },
	[94] = { .set = { {8, -10}, {7, -20}, {-2, -18}, {-1, -12} } },
	[95] = { .set = { {7, -14}, {6, -23}, {-3, -22}, {0, -13} } },
	[96] = { .set = { {-1, -33}, {-4, -21}, {-9, -20}, {2, -16} } },
	[97] = { .set = { {13, -4}, {10, -13}, {3, -12}, {1, -10} } },
	[98] = { .set = { {14, -15}, {5, -23}, {1, -20}, {1, -14} } },
	[99] = { .set = { {15, -14}, {6, -22}, {2, -19}, {1, -13} } },
	[100] = { .set = { {13, -17}, {4, -25}, {0, -22}, {0, -15} } },
	[101] = { .set = { {-1, -31}, {-12, -22}, {-5, -18}, {2, -17} } },
	[102] = { .set = { {15, -9}, {2, -15}, {2, -14}, {-1, -9} } },
	[103] = { .set = { {12, -17}, {0, -22}, {5, -18}, {1, -14} } },
	[104] = { .set = { {12, -16}, {0, -21}, {6, -18}, {1, -13} } },
	[105] = { .set = { {11, -19}, {-1, -23}, {5, -20}, {1, -15} } },
	[106] = { .set = { {-2, -29}, {-8, -18}, {-1, -15}, {2, -15} } },
	[107] = { .set = { {12, -19}, {1, -21}, {6, -18}, {2, -13} } },
	[108] = { .set = { {0, -19}, {6, -19}, {-7, -19}, {0, -15} } },
	[109] = { .set = { {0, -17}, {5, -17}, {-7, -17}, {-1, -14} } },
	[110] = { .set = { {0, -20}, {6, -20}, {-7, -20}, {0, -15} } },
	[111] = { .set = { {0, -30}, {5, -17}, {-6, -17}, {-1, -13} } },
	[112] = { .set = { {0, -18}, {6, -19}, {-7, -19}, {0, -12} } },
	[113] = { .set = { {-13, -17}, {-1, -22}, {-6, -18}, {-2, -14} } },
	[114] = { .set = { {-13, -16}, {-1, -21}, {-7, -18}, {-2, -13} } },
	[115] = { .set = { {-12, -19}, {0, -23}, {-6, -20}, {-2, -15} } },
	[116] = { .set = { {1, -29}, {7, -18}, {0, -15}, {-3, -15} } },
	[117] = { .set = { {-13, -19}, {-2, -21}, {-7, -18}, {-3, -13} } },
	[118] = { .set = { {-15, -15}, {-6, -23}, {-2, -20}, {-2, -14} } },
	[119] = { .set = { {-16, -14}, {-7, -22}, {-3, -19}, {-2, -13} } },
	[120] = { .set = { {-14, -17}, {-5, -25}, {-1, -22}, {-1, -15} } },
	[121] = { .set = { {0, -31}, {11, -22}, {4, -18}, {-3, -17} } },
	[122] = { .set = { {-16, -9}, {-3, -15}, {-3, -14}, {0, -9} } },
	[123] = { .set = { {-8, -12}, {-7, -22}, {2, -20}, {-1, -12} } },
	[124] = { .set = { {-9, -10}, {-8, -20}, {1, -18}, {0, -12} } },
	[125] = { .set = { {-8, -14}, {-7, -23}, {2, -22}, {-1, -13} } },
	[126] = { .set = { {0, -33}, {3, -21}, {8, -20}, {-3, -16} } },
	[127] = { .set = { {-14, -4}, {-11, -13}, {-4, -12}, {-2, -10} } },
	[128] = { .set = { {0, -11}, {-7, -21}, {6, -21}, {0, -13} } },
	[129] = { .set = { {0, -9}, {-7, -19}, {6, -19}, {0, -11} } },
	[130] = { .set = { {0, -13}, {-7, -23}, {6, -23}, {0, -12} } },
	[131] = { .set = { {-1, -32}, {-6, -18}, {5, -18}, {0, -12} } },
	[132] = { .set = { {7, -12}, {6, -22}, {-3, -20}, {0, -12} } },
	[133] = { .set = { {8, -10}, {7, -20}, {-2, -18}, {-1, -12} } },
	[134] = { .set = { {7, -14}, {6, -23}, {-3, -22}, {0, -13} } },
	[135] = { .set = { {4, -34}, {3, -22}, {-3, -21}, {2, -15} } },
	[136] = { .set = { {14, -15}, {5, -23}, {1, -20}, {1, -14} } },
	[137] = { .set = { {15, -14}, {6, -22}, {2, -19}, {1, -13} } },
	[138] = { .set = { {13, -17}, {4, -25}, {0, -22}, {0, -15} } },
	[139] = { .set = { {4, -34}, {-7, -25}, {0, -20}, {1, -16} } },
	[140] = { .set = { {12, -17}, {0, -22}, {5, -18}, {1, -14} } },
	[141] = { .set = { {12, -16}, {0, -21}, {6, -18}, {1, -13} } },
	[142] = { .set = { {11, -19}, {-1, -23}, {5, -20}, {1, -15} } },
	[143] = { .set = { {3, -34}, {-3, -23}, {4, -20}, {2, -16} } },
	[144] = { .set = { {0, -19}, {6, -19}, {-7, -19}, {0, -15} } },
	[145] = { .set = { {0, -17}, {5, -17}, {-7, -17}, {-1, -14} } },
	[146] = { .set = { {0, -20}, {6, -20}, {-7, -20}, {0, -15} } },
	[147] = { .set = { {0, -35}, {5, -18}, {-6, -18}, {0, -16} } },
	[148] = { .set = { {-13, -17}, {-1, -22}, {-6, -18}, {-2, -14} } },
	[149] = { .set = { {-13, -16}, {-1, -21}, {-7, -18}, {-2, -13} } },
	[150] = { .set = { {-12, -19}, {0, -23}, {-6, -20}, {-2, -15} } },
	[151] = { .set = { {-4, -34}, {2, -23}, {-5, -20}, {-3, -16} } },
	[152] = { .set = { {-15, -15}, {-6, -23}, {-2, -20}, {-2, -14} } },
	[153] = { .set = { {-16, -14}, {-7, -22}, {-3, -19}, {-2, -13} } },
	[154] = { .set = { {-14, -17}, {-5, -25}, {-1, -22}, {-1, -15} } },
	[155] = { .set = { {-5, -34}, {6, -25}, {-1, -20}, {-2, -16} } },
	[156] = { .set = { {-8, -12}, {-7, -22}, {2, -20}, {-1, -12} } },
	[157] = { .set = { {-9, -10}, {-8, -20}, {1, -18}, {0, -12} } },
	[158] = { .set = { {-8, -14}, {-7, -23}, {2, -22}, {-1, -13} } },
	[159] = { .set = { {-5, -34}, {-4, -22}, {2, -21}, {-3, -15} } },
	[160] = { .set = { {-9, -13}, {-6, -22}, {2, -21}, {-1, -14} } },
	[161] = { .set = { {-10, -12}, {-8, -22}, {1, -20}, {-2, -13} } },
	[162] = { .set = { {0, -32}, {-8, -21}, {7, -21}, {0, -15} } },
	[163] = { .set = { {0, -25}, {-6, -22}, {-12, -19}, {-1, -15} } },
	[164] = { .set = { {-2, -25}, {-11, -19}, {-12, -15}, {-2, -14} } },
	[165] = { .set = { {-3, -26}, {-15, -16}, {-6, -10}, {-1, -12} } },
	[166] = { .set = { {-1, -28}, {6, -13}, {-7, -13}, {0, -12} } },
	[167] = { .set = { {2, -26}, {14, -16}, {5, -10}, {0, -12} } },
	[168] = { .set = { {1, -25}, {10, -19}, {11, -15}, {1, -14} } },
	[169] = { .set = { {-1, -25}, {5, -22}, {11, -19}, {0, -15} } },
	[170] = { .set = { {0, -11}, {-7, -21}, {6, -21}, {0, -13} } },
	[171] = { .set = { {0, -9}, {-7, -19}, {6, -19}, {0, -11} } },
	[172] = { .set = { {0, -13}, {-7, -23}, {6, -23}, {0, -12} } },
	[173] = { .set = { {7, -12}, {6, -22}, {-3, -20}, {0, -12} } },
	[174] = { .set = { {8, -10}, {7, -20}, {-2, -18}, {-1, -12} } },
	[175] = { .set = { {7, -14}, {6, -23}, {-3, -22}, {0, -13} } },
	[176] = { .set = { {14, -15}, {5, -23}, {1, -20}, {1, -14} } },
	[177] = { .set = { {15, -14}, {6, -22}, {2, -19}, {1, -13} } },
	[178] = { .set = { {13, -17}, {4, -25}, {0, -22}, {0, -15} } },
	[179] = { .set = { {12, -17}, {0, -22}, {5, -18}, {1, -14} } },
	[180] = { .set = { {12, -16}, {0, -21}, {6, -18}, {1, -13} } },
	[181] = { .set = { {11, -19}, {-1, -23}, {5, -20}, {1, -15} } },
	[182] = { .set = { {0, -19}, {6, -19}, {-7, -19}, {0, -15} } },
	[183] = { .set = { {0, -17}, {5, -17}, {-7, -17}, {-1, -14} } },
	[184] = { .set = { {0, -20}, {6, -20}, {-7, -20}, {0, -15} } },
	[185] = { .set = { {-13, -17}, {-1, -22}, {-6, -18}, {-2, -14} } },
	[186] = { .set = { {-13, -16}, {-1, -21}, {-7, -18}, {-2, -13} } },
	[187] = { .set = { {-12, -19}, {0, -23}, {-6, -20}, {-2, -15} } },
	[188] = { .set = { {-15, -15}, {-6, -23}, {-2, -20}, {-2, -14} } },
	[189] = { .set = { {-16, -14}, {-7, -22}, {-3, -19}, {-2, -13} } },
	[190] = { .set = { {-14, -17}, {-5, -25}, {-1, -22}, {-1, -15} } },
	[191] = { .set = { {-8, -12}, {-7, -22}, {2, -20}, {-1, -12} } },
	[192] = { .set = { {-9, -10}, {-8, -20}, {1, -18}, {0, -12} } },
	[193] = { .set = { {-8, -14}, {-7, -23}, {2, -22}, {-1, -13} } },
	[194] = { .set = { {-1, -4}, {-7, -13}, {6, -13}, {0, -12} } },
	[195] = { .set = { {-11, -5}, {-8, -14}, {-1, -13}, {1, -11} } },
	[196] = { .set = { {-16, -10}, {-3, -16}, {-3, -15}, {0, -10} } },
	[197] = { .set = { {-11, -17}, {0, -19}, {-5, -16}, {-1, -11} } },
	[198] = { .set = { {0, -17}, {6, -18}, {-7, -18}, {0, -11} } },
	[199] = { .set = { {10, -17}, {-1, -19}, {4, -16}, {0, -11} } },
	[200] = { .set = { {15, -10}, {2, -16}, {2, -15}, {-1, -10} } },
	[201] = { .set = { {10, -5}, {7, -14}, {0, -13}, {-2, -11} } },
	[202] = { .set = { {-1, -32}, {-6, -20}, {5, -20}, {0, -15} } },
	[203] = { .set = { {-1, -33}, {-4, -21}, {-9, -20}, {2, -16} } },
	[204] = { .set = { {-1, -31}, {-12, -22}, {-5, -18}, {2, -17} } },
	[205] = { .set = { {-1, -29}, {-7, -18}, {0, -15}, {3, -15} } },
	[206] = { .set = { {0, -30}, {5, -17}, {-6, -17}, {-1, -13} } },
	[207] = { .set = { {0, -29}, {6, -18}, {-1, -15}, {-4, -15} } },
	[208] = { .set = { {0, -31}, {11, -22}, {4, -18}, {-3, -17} } },
	[209] = { .set = { {0, -33}, {3, -21}, {8, -20}, {-3, -16} } },
	[210] = { .set = { {0, -11}, {-7, -21}, {6, -21}, {0, -13} } },
	[211] = { .set = { {-1, -32}, {-6, -18}, {5, -18}, {0, -12} } },
	[212] = { .set = { {-1, -4}, {-7, -13}, {6, -13}, {0, -12} } },
	[213] = { .set = { {7, -12}, {6, -22}, {-3, -20}, {0, -12} } },
	[214] = { .set = { {4, -34}, {3, -22}, {-3, -21}, {2, -15} } },
	[215] = { .set = { {11, -4}, {8, -13}, {1, -12}, {-1, -10} } },
	[216] = { .set = { {14, -15}, {5, -23}, {1, -20}, {1, -14} } },
	[217] = { .set = { {4, -34}, {-7, -25}, {0, -20}, {1, -16} } },
	[218] = { .set = { {15, -9}, {2, -15}, {2, -14}, {-1, -9} } },
	[219] = { .set = { {12, -17}, {0, -22}, {5, -18}, {1, -14} } },
	[220] = { .set = { {3, -34}, {-3, -23}, {4, -20}, {2, -16} } },
	[221] = { .set = { {11, -19}, {0, -21}, {5, -18}, {1, -13} } },
	[222] = { .set = { {0, -19}, {6, -19}, {-7, -19}, {0, -15} } },
	[223] = { .set = { {0, -35}, {5, -18}, {-6, -18}, {0, -16} } },
	[224] = { .set = { {0, -18}, {6, -19}, {-7, -19}, {0, -12} } },
	[225] = { .set = { {-13, -17}, {-1, -22}, {-6, -18}, {-2, -14} } },
	[226] = { .set = { {-4, -34}, {2, -23}, {-5, -20}, {-3, -16} } },
	[227] = { .set = { {-12, -19}, {-1, -21}, {-6, -18}, {-2, -13} } },
	[228] = { .set = { {-15, -15}, {-6, -23}, {-2, -20}, {-2, -14} } },
	[229] = { .set = { {-5, -34}, {6, -25}, {-1, -20}, {-2, -16} } },
	[230] = { .set = { {-16, -9}, {-3, -15}, {-3, -14}, {0, -9} } },
	[231] = { .set = { {-8, -12}, {-7, -22}, {2, -20}, {-1, -12} } },
	[232] = { .set = { {-5, -34}, {-4, -22}, {2, -21}, {-3, -15} } },
	[233] = { .set = { {-12, -4}, {-9, -13}, {-2, -12}, {0, -10} } },
	[234] = { .set = { {0, -9}, {-7, -19}, {6, -19}, {0, -11} } },
	[235] = { .set = { {-8, -10}, {-7, -20}, {2, -18}, {1, -12} } },
	[236] = { .set = { {-14, -14}, {-5, -22}, {-1, -19}, {0, -13} } },
	[237] = { .set = { {-11, -16}, {1, -21}, {-5, -18}, {0, -13} } },
	[238] = { .set = { {0, -17}, {5, -17}, {-7, -17}, {-1, -14} } },
	[239] = { .set = { {10, -16}, {-2, -21}, {4, -18}, {-1, -13} } },
	[240] = { .set = { {13, -14}, {4, -22}, {0, -19}, {-1, -13} } },
	[241] = { .set = { {7, -10}, {6, -20}, {-3, -18}, {-2, -12} } },
	[242] = { .set = { {0, -11}, {-7, -21}, {6, -21}, {0, -13} } },
	[243] = { .set = { {-8, -12}, {-7, -22}, {2, -20}, {-1, -12} } },
	[244] = { .set = { {-15, -15}, {-6, -23}, {-2, -20}, {-2, -14} } },
	[245] = { .set = { {-13, -17}, {-1, -22}, {-6, -18}, {-2, -14} } },
	[246] = { .set = { {0, -19}, {6, -19}, {-7, -19}, {0, -15} } },
	[247] = { .set = { {12, -17}, {0, -22}, {5, -18}, {1, -14} } },
	[248] = { .set = { {14, -15}, {5, -23}, {1, -20}, {1, -14} } },
	[249] = { .set = { {7, -12}, {6, -22}, {-3, -20}, {0, -12} } },
};

static const ax_anim *const sKingdraAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sKingdraAnimTable2[] = {
	AX_ANIM_PTR(sKingdraAnims_2_1),
	AX_ANIM_PTR(sKingdraAnims_2_2),
	AX_ANIM_PTR(sKingdraAnims_2_3),
	AX_ANIM_PTR(sKingdraAnims_2_4),
	AX_ANIM_PTR(sKingdraAnims_2_5),
	AX_ANIM_PTR(sKingdraAnims_2_6),
	AX_ANIM_PTR(sKingdraAnims_2_7),
	AX_ANIM_PTR(sKingdraAnims_2_8),
};

static const ax_anim *const sKingdraAnimTable3[] = {
	AX_ANIM_PTR(sKingdraAnims_3_1),
	AX_ANIM_PTR(sKingdraAnims_3_2),
	AX_ANIM_PTR(sKingdraAnims_3_3),
	AX_ANIM_PTR(sKingdraAnims_3_4),
	AX_ANIM_PTR(sKingdraAnims_3_5),
	AX_ANIM_PTR(sKingdraAnims_3_6),
	AX_ANIM_PTR(sKingdraAnims_3_7),
	AX_ANIM_PTR(sKingdraAnims_3_8),
};

static const ax_anim *const sKingdraAnimTable4[] = {
	AX_ANIM_PTR(sKingdraAnims_4_1),
	AX_ANIM_PTR(sKingdraAnims_4_2),
	AX_ANIM_PTR(sKingdraAnims_4_3),
	AX_ANIM_PTR(sKingdraAnims_4_4),
	AX_ANIM_PTR(sKingdraAnims_4_5),
	AX_ANIM_PTR(sKingdraAnims_4_6),
	AX_ANIM_PTR(sKingdraAnims_4_7),
	AX_ANIM_PTR(sKingdraAnims_4_8),
};

static const ax_anim *const sKingdraAnimTable5[] = {
	AX_ANIM_PTR(sKingdraAnims_5_1),
	AX_ANIM_PTR(sKingdraAnims_5_2),
	AX_ANIM_PTR(sKingdraAnims_5_3),
	AX_ANIM_PTR(sKingdraAnims_5_4),
	AX_ANIM_PTR(sKingdraAnims_5_5),
	AX_ANIM_PTR(sKingdraAnims_5_6),
	AX_ANIM_PTR(sKingdraAnims_5_7),
	AX_ANIM_PTR(sKingdraAnims_5_8),
};

static const ax_anim *const sKingdraAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_00145),
	AX_ANIM_PTR(gAxSharedAnim_00145),
	AX_ANIM_PTR(gAxSharedAnim_00145),
	AX_ANIM_PTR(gAxSharedAnim_00145),
	AX_ANIM_PTR(gAxSharedAnim_00145),
	AX_ANIM_PTR(gAxSharedAnim_00145),
	AX_ANIM_PTR(gAxSharedAnim_00145),
	AX_ANIM_PTR(gAxSharedAnim_00145),
};

static const ax_anim *const sKingdraAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00694),
	AX_ANIM_PTR(gAxSharedAnim_00710),
	AX_ANIM_PTR(gAxSharedAnim_00718),
	AX_ANIM_PTR(gAxSharedAnim_00731),
	AX_ANIM_PTR(gAxSharedAnim_00753),
	AX_ANIM_PTR(gAxSharedAnim_00764),
	AX_ANIM_PTR(gAxSharedAnim_00776),
	AX_ANIM_PTR(gAxSharedAnim_00786),
};

static const ax_anim *const sKingdraAnimTable8[] = {
	AX_ANIM_PTR(sKingdraAnims_8_1),
	AX_ANIM_PTR(sKingdraAnims_8_2),
	AX_ANIM_PTR(sKingdraAnims_8_3),
	AX_ANIM_PTR(sKingdraAnims_8_4),
	AX_ANIM_PTR(sKingdraAnims_8_5),
	AX_ANIM_PTR(sKingdraAnims_8_6),
	AX_ANIM_PTR(sKingdraAnims_8_7),
	AX_ANIM_PTR(sKingdraAnims_8_8),
};

static const ax_anim *const sKingdraAnimTable9[] = {
	AX_ANIM_PTR(gAxSharedAnim_01141),
	AX_ANIM_PTR(sKingdraAnims_9_2),
	AX_ANIM_PTR(sKingdraAnims_9_3),
	AX_ANIM_PTR(sKingdraAnims_9_4),
	AX_ANIM_PTR(sKingdraAnims_9_5),
	AX_ANIM_PTR(sKingdraAnims_9_6),
	AX_ANIM_PTR(sKingdraAnims_9_7),
	AX_ANIM_PTR(sKingdraAnims_9_8),
};

static const ax_anim *const sKingdraAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01241),
	AX_ANIM_PTR(gAxSharedAnim_01252),
	AX_ANIM_PTR(gAxSharedAnim_01266),
	AX_ANIM_PTR(gAxSharedAnim_01277),
	AX_ANIM_PTR(gAxSharedAnim_01285),
	AX_ANIM_PTR(gAxSharedAnim_01300),
	AX_ANIM_PTR(gAxSharedAnim_01313),
	AX_ANIM_PTR(gAxSharedAnim_01324),
};

static const ax_anim *const sKingdraAnimTable11[] = {
	AX_ANIM_PTR(sKingdraAnims_11_1),
	AX_ANIM_PTR(gAxSharedAnim_01363),
	AX_ANIM_PTR(sKingdraAnims_11_3),
	AX_ANIM_PTR(sKingdraAnims_11_4),
	AX_ANIM_PTR(sKingdraAnims_11_5),
	AX_ANIM_PTR(sKingdraAnims_11_6),
	AX_ANIM_PTR(sKingdraAnims_11_7),
	AX_ANIM_PTR(gAxSharedAnim_01501),
};

static const ax_anim *const sKingdraAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01526),
	AX_ANIM_PTR(gAxSharedAnim_01581),
	AX_ANIM_PTR(gAxSharedAnim_01574),
	AX_ANIM_PTR(gAxSharedAnim_01551),
	AX_ANIM_PTR(gAxSharedAnim_01550),
	AX_ANIM_PTR(gAxSharedAnim_01545),
	AX_ANIM_PTR(gAxSharedAnim_01533),
	AX_ANIM_PTR(gAxSharedAnim_01527),
};

static const ax_anim *const sKingdraAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01586),
	AX_ANIM_PTR(gAxSharedAnim_01624),
	AX_ANIM_PTR(gAxSharedAnim_01620),
	AX_ANIM_PTR(gAxSharedAnim_01612),
	AX_ANIM_PTR(gAxSharedAnim_01605),
	AX_ANIM_PTR(gAxSharedAnim_01602),
	AX_ANIM_PTR(gAxSharedAnim_01597),
	AX_ANIM_PTR(gAxSharedAnim_01591),
};

static const ax_anim *const *const sAxAnimationsKingdra[] = {
	sKingdraAnimTable1,
	sKingdraAnimTable2,
	sKingdraAnimTable3,
	sKingdraAnimTable4,
	sKingdraAnimTable5,
	sKingdraAnimTable6,
	sKingdraAnimTable7,
	sKingdraAnimTable8,
	sKingdraAnimTable9,
	sKingdraAnimTable10,
	sKingdraAnimTable11,
	sKingdraAnimTable12,
	sKingdraAnimTable13,
};

static const ax_sprite *const sAxSpritesKingdra[] = {
	sKingdraSprites1,
	sKingdraSprites2,
	sKingdraSprites3,
	sKingdraSprites4,
	sKingdraSprites5,
	sKingdraSprites6,
	sKingdraSprites7,
	sKingdraSprites8,
	sKingdraSprites9,
	sKingdraSprites10,
	sKingdraSprites11,
	sKingdraSprites12,
	sKingdraSprites13,
	sKingdraSprites14,
	sKingdraSprites15,
	sKingdraSprites16,
	sKingdraSprites17,
	sKingdraSprites18,
	sKingdraSprites19,
	sKingdraSprites20,
	sKingdraSprites21,
	sKingdraSprites22,
	sKingdraSprites23,
	sKingdraSprites24,
	sKingdraSprites25,
	sKingdraSprites26,
	sKingdraSprites27,
	sKingdraSprites28,
	sKingdraSprites29,
	sKingdraSprites30,
	sKingdraSprites31,
	sKingdraSprites32,
	sKingdraSprites33,
	sKingdraSprites34,
	sKingdraSprites35,
	sKingdraSprites36,
	sKingdraSprites37,
	sKingdraSprites38,
	sKingdraSprites39,
	sKingdraSprites40,
	sKingdraSprites41,
	sKingdraSprites42,
	sKingdraSprites43,
	sKingdraSprites44,
	sKingdraSprites45,
	sKingdraSprites46,
	sKingdraSprites47,
	sKingdraSprites48,
	sKingdraSprites49,
	sKingdraSprites50,
	sKingdraSprites51,
	sKingdraSprites52,
	sKingdraSprites53,
	sKingdraSprites54,
	sKingdraSprites55,
	sKingdraSprites56,
	sKingdraSprites57,
	sKingdraSprites58,
	sKingdraSprites59,
};

static const axmain sAxMainKingdra = {
	.poses = sAxPosesKingdra,
	.animations = sAxAnimationsKingdra,
	.animCount = ARRAY_COUNT(sAxAnimationsKingdra),
	.spriteData = sAxSpritesKingdra,
	.positions = sAxPositionsKingdra,
};
