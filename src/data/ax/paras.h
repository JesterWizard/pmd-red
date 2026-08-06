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
static const axmain sAxMainParas;
const SiroArchive gAxParas = {"SIRO", &sAxMainParas};

static const ax_pose sParasPose1[] = {
	AX_POSE(0, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose2[] = {
	AX_POSE(1, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose3[] = {
	AX_POSE(2, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose4[] = {
	AX_POSE(3, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose5[] = {
	AX_POSE(4, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose6[] = {
	AX_POSE(5, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose7[] = {
	AX_POSE(6, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose8[] = {
	AX_POSE(7, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose9[] = {
	AX_POSE(8, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose10[] = {
	AX_POSE(9, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose11[] = {
	AX_POSE(10, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose12[] = {
	AX_POSE(11, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose13[] = {
	AX_POSE(12, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose14[] = {
	AX_POSE(13, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose15[] = {
	AX_POSE(14, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose16[] = {
	AX_POSE(9, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose17[] = {
	AX_POSE(10, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose18[] = {
	AX_POSE(11, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose19[] = {
	AX_POSE(6, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose20[] = {
	AX_POSE(7, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose21[] = {
	AX_POSE(8, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose22[] = {
	AX_POSE(3, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose23[] = {
	AX_POSE(4, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose24[] = {
	AX_POSE(5, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose28[] = {
	AX_POSE(15, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose32[] = {
	AX_POSE(16, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose36[] = {
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose40[] = {
	AX_POSE(18, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose44[] = {
	AX_POSE(19, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose48[] = {
	AX_POSE(18, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose52[] = {
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose56[] = {
	AX_POSE(16, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose60[] = {
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose61[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(22, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose62[] = {
	AX_POSE(22, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose66[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose67[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose68[] = {
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose72[] = {
	AX_POSE(26, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose73[] = {
	AX_POSE(27, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(28, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose74[] = {
	AX_POSE(28, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose78[] = {
	AX_POSE(29, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose79[] = {
	AX_POSE(30, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(31, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose80[] = {
	AX_POSE(31, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose84[] = {
	AX_POSE(32, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose85[] = {
	AX_POSE(33, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(34, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose86[] = {
	AX_POSE(34, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose90[] = {
	AX_POSE(29, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose91[] = {
	AX_POSE(30, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(31, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose92[] = {
	AX_POSE(31, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose96[] = {
	AX_POSE(26, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose97[] = {
	AX_POSE(27, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(28, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose98[] = {
	AX_POSE(28, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose102[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose103[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose104[] = {
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose106[] = {
	AX_POSE(35, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose107[] = {
	AX_POSE(36, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose109[] = {
	AX_POSE(37, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose110[] = {
	AX_POSE(38, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose112[] = {
	AX_POSE(39, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose113[] = {
	AX_POSE(40, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose115[] = {
	AX_POSE(41, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose116[] = {
	AX_POSE(42, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose118[] = {
	AX_POSE(43, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose119[] = {
	AX_POSE(44, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose121[] = {
	AX_POSE(41, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose122[] = {
	AX_POSE(42, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose124[] = {
	AX_POSE(39, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose125[] = {
	AX_POSE(40, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose127[] = {
	AX_POSE(37, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose128[] = {
	AX_POSE(38, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose137[] = {
	AX_POSE(45, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose138[] = {
	AX_POSE(46, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose139[] = {
	AX_POSE(47, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose140[] = {
	AX_POSE(48, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose141[] = {
	AX_POSE(49, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose142[] = {
	AX_POSE(50, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose143[] = {
	AX_POSE(51, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose144[] = {
	AX_POSE(50, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose145[] = {
	AX_POSE(49, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose146[] = {
	AX_POSE(48, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose171[] = {
	AX_POSE(36, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose172[] = {
	AX_POSE(38, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose173[] = {
	AX_POSE(40, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose177[] = {
	AX_POSE(40, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose178[] = {
	AX_POSE(38, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose189[] = {
	AX_POSE(36, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose192[] = {
	AX_POSE(38, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose195[] = {
	AX_POSE(40, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose198[] = {
	AX_POSE(42, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose204[] = {
	AX_POSE(42, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose207[] = {
	AX_POSE(40, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasPose210[] = {
	AX_POSE(38, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const u8 sParasAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_2_1.lz");
static const u8 sParasAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_2_2.lz");
static const u8 sParasAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_2_3.lz");
static const u8 sParasAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_2_4.lz");
static const u8 sParasAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_2_5.lz");
static const u8 sParasAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_2_6.lz");
static const u8 sParasAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_2_7.lz");
static const u8 sParasAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_2_8.lz");
static const u8 sParasAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_3_1.lz");
static const u8 sParasAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_3_2.lz");
static const u8 sParasAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_3_3.lz");
static const u8 sParasAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_3_4.lz");
static const u8 sParasAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_3_5.lz");
static const u8 sParasAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_3_6.lz");
static const u8 sParasAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_3_7.lz");
static const u8 sParasAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_3_8.lz");
static const u8 sParasAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_4_1.lz");
static const u8 sParasAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_4_2.lz");
static const u8 sParasAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_4_3.lz");
static const u8 sParasAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_4_4.lz");
static const u8 sParasAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_4_5.lz");
static const u8 sParasAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_4_6.lz");
static const u8 sParasAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_4_7.lz");
static const u8 sParasAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_4_8.lz");
static const u8 sParasAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_8_1.lz");
static const u8 sParasAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_8_2.lz");
static const u8 sParasAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_8_3.lz");
static const u8 sParasAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_8_4.lz");
static const u8 sParasAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_8_5.lz");
static const u8 sParasAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_8_6.lz");
static const u8 sParasAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_8_7.lz");
static const u8 sParasAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_8_8.lz");
static const u8 sParasAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_9_2.lz");
static const u8 sParasAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_9_4.lz");
static const u8 sParasAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_9_5.lz");
static const u8 sParasAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_9_6.lz");
static const u8 sParasAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_9_8.lz");
static const u8 sParasAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_11_3.lz");
static const u8 sParasAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_11_4.lz");
static const u8 sParasAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_11_5.lz");
static const u8 sParasAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_11_6.lz");
static const u8 sParasAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/paras/sParasAnims_11_7.lz");

static const u8 sParasGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_1.4bpp.lz");
static const ax_sprite sParasSprites1[] = {
	{sParasGfx1, ARRAY_COUNT(sParasGfx1)}, 
	{NULL, 0}
};
static const u8 sParasGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_2.4bpp.lz");
static const ax_sprite sParasSprites2[] = {
	{sParasGfx2, ARRAY_COUNT(sParasGfx2)}, 
	{NULL, 0}
};
static const u8 sParasGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_3.4bpp.lz");
static const ax_sprite sParasSprites3[] = {
	{sParasGfx3, ARRAY_COUNT(sParasGfx3)}, 
	{NULL, 0}
};
static const u8 sParasGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_4.4bpp.lz");
static const ax_sprite sParasSprites4[] = {
	{sParasGfx4, ARRAY_COUNT(sParasGfx4)}, 
	{NULL, 0}
};
static const u8 sParasGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_5.4bpp.lz");
static const ax_sprite sParasSprites5[] = {
	{sParasGfx5, ARRAY_COUNT(sParasGfx5)}, 
	{NULL, 0}
};
static const u8 sParasGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_6.4bpp.lz");
static const ax_sprite sParasSprites6[] = {
	{sParasGfx6, ARRAY_COUNT(sParasGfx6)}, 
	{NULL, 0}
};
static const u8 sParasGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_7.4bpp.lz");
static const ax_sprite sParasSprites7[] = {
	{sParasGfx7, ARRAY_COUNT(sParasGfx7)}, 
	{NULL, 0}
};
static const u8 sParasGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_8.4bpp.lz");
static const ax_sprite sParasSprites8[] = {
	{sParasGfx8, ARRAY_COUNT(sParasGfx8)}, 
	{NULL, 0}
};
static const u8 sParasGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_9.4bpp.lz");
static const ax_sprite sParasSprites9[] = {
	{sParasGfx9, ARRAY_COUNT(sParasGfx9)}, 
	{NULL, 0}
};
static const u8 sParasGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_10.4bpp.lz");
static const ax_sprite sParasSprites10[] = {
	{sParasGfx10, ARRAY_COUNT(sParasGfx10)}, 
	{NULL, 0}
};
static const u8 sParasGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_11.4bpp.lz");
static const ax_sprite sParasSprites11[] = {
	{sParasGfx11, ARRAY_COUNT(sParasGfx11)}, 
	{NULL, 0}
};
static const u8 sParasGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_12.4bpp.lz");
static const ax_sprite sParasSprites12[] = {
	{sParasGfx12, ARRAY_COUNT(sParasGfx12)}, 
	{NULL, 0}
};
static const u8 sParasGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_13.4bpp.lz");
static const ax_sprite sParasSprites13[] = {
	{sParasGfx13, ARRAY_COUNT(sParasGfx13)}, 
	{NULL, 0}
};
static const u8 sParasGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_14.4bpp.lz");
static const ax_sprite sParasSprites14[] = {
	{sParasGfx14, ARRAY_COUNT(sParasGfx14)}, 
	{NULL, 0}
};
static const u8 sParasGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_15.4bpp.lz");
static const ax_sprite sParasSprites15[] = {
	{sParasGfx15, ARRAY_COUNT(sParasGfx15)}, 
	{NULL, 0}
};
static const u8 sParasGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_16.4bpp.lz");
static const u8 sParasGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_16_1.4bpp.lz");
static const u8 sParasGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_16_2.4bpp.lz");
static const ax_sprite sParasSprites16[] = {
	{NULL, 32}, 
	{sParasGfx16, ARRAY_COUNT(sParasGfx16)}, 
	{NULL, 32}, 
	{sParasGfx16_1, ARRAY_COUNT(sParasGfx16_1)}, 
	{NULL, 32}, 
	{sParasGfx16_2, ARRAY_COUNT(sParasGfx16_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sParasGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_17.4bpp.lz");
static const u8 sParasGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_17_1.4bpp.lz");
static const u8 sParasGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_17_2.4bpp.lz");
static const ax_sprite sParasSprites17[] = {
	{NULL, 32}, 
	{sParasGfx17, ARRAY_COUNT(sParasGfx17)}, 
	{NULL, 32}, 
	{sParasGfx17_1, ARRAY_COUNT(sParasGfx17_1)}, 
	{NULL, 32}, 
	{sParasGfx17_2, ARRAY_COUNT(sParasGfx17_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sParasGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_18.4bpp.lz");
static const u8 sParasGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_18_1.4bpp.lz");
static const u8 sParasGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_18_2.4bpp.lz");
static const ax_sprite sParasSprites18[] = {
	{NULL, 32}, 
	{sParasGfx18, ARRAY_COUNT(sParasGfx18)}, 
	{NULL, 32}, 
	{sParasGfx18_1, ARRAY_COUNT(sParasGfx18_1)}, 
	{NULL, 32}, 
	{sParasGfx18_2, ARRAY_COUNT(sParasGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sParasGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_19.4bpp.lz");
static const u8 sParasGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_19_1.4bpp.lz");
static const u8 sParasGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_19_2.4bpp.lz");
static const ax_sprite sParasSprites19[] = {
	{NULL, 32}, 
	{sParasGfx19, ARRAY_COUNT(sParasGfx19)}, 
	{NULL, 32}, 
	{sParasGfx19_1, ARRAY_COUNT(sParasGfx19_1)}, 
	{NULL, 32}, 
	{sParasGfx19_2, ARRAY_COUNT(sParasGfx19_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sParasGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_20.4bpp.lz");
static const u8 sParasGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_20_1.4bpp.lz");
static const u8 sParasGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_20_2.4bpp.lz");
static const ax_sprite sParasSprites20[] = {
	{NULL, 32}, 
	{sParasGfx20, ARRAY_COUNT(sParasGfx20)}, 
	{NULL, 32}, 
	{sParasGfx20_1, ARRAY_COUNT(sParasGfx20_1)}, 
	{NULL, 32}, 
	{sParasGfx20_2, ARRAY_COUNT(sParasGfx20_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sParasGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_21.4bpp.lz");
static const u8 sParasGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_21_1.4bpp.lz");
static const u8 sParasGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_21_2.4bpp.lz");
static const ax_sprite sParasSprites21[] = {
	{NULL, 160}, 
	{sParasGfx21, ARRAY_COUNT(sParasGfx21)}, 
	{NULL, 32}, 
	{sParasGfx21_1, ARRAY_COUNT(sParasGfx21_1)}, 
	{NULL, 32}, 
	{sParasGfx21_2, ARRAY_COUNT(sParasGfx21_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sParasGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_22.4bpp.lz");
static const u8 sParasGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_22_1.4bpp.lz");
static const u8 sParasGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_22_2.4bpp.lz");
static const ax_sprite sParasSprites22[] = {
	{NULL, 224}, 
	{sParasGfx22, ARRAY_COUNT(sParasGfx22)}, 
	{NULL, 64}, 
	{sParasGfx22_1, ARRAY_COUNT(sParasGfx22_1)}, 
	{NULL, 32}, 
	{sParasGfx22_2, ARRAY_COUNT(sParasGfx22_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sParasGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_23.4bpp.lz");
static const u8 sParasGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_23_1.4bpp.lz");
static const u8 sParasGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_23_2.4bpp.lz");
static const ax_sprite sParasSprites23[] = {
	{NULL, 160}, 
	{sParasGfx23, ARRAY_COUNT(sParasGfx23)}, 
	{NULL, 32}, 
	{sParasGfx23_1, ARRAY_COUNT(sParasGfx23_1)}, 
	{NULL, 32}, 
	{sParasGfx23_2, ARRAY_COUNT(sParasGfx23_2)}, 
	{NULL, 0}
};
static const u8 sParasGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_24.4bpp.lz");
static const u8 sParasGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_24_1.4bpp.lz");
static const ax_sprite sParasSprites24[] = {
	{NULL, 160}, 
	{sParasGfx24, ARRAY_COUNT(sParasGfx24)}, 
	{NULL, 64}, 
	{sParasGfx24_1, ARRAY_COUNT(sParasGfx24_1)}, 
	{NULL, 0}
};
static const u8 sParasGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_25.4bpp.lz");
static const u8 sParasGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_25_1.4bpp.lz");
static const u8 sParasGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_25_2.4bpp.lz");
static const ax_sprite sParasSprites25[] = {
	{NULL, 192}, 
	{sParasGfx25, ARRAY_COUNT(sParasGfx25)}, 
	{NULL, 32}, 
	{sParasGfx25_1, ARRAY_COUNT(sParasGfx25_1)}, 
	{NULL, 32}, 
	{sParasGfx25_2, ARRAY_COUNT(sParasGfx25_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sParasGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_26.4bpp.lz");
static const u8 sParasGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_26_1.4bpp.lz");
static const u8 sParasGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_26_2.4bpp.lz");
static const ax_sprite sParasSprites26[] = {
	{NULL, 160}, 
	{sParasGfx26, ARRAY_COUNT(sParasGfx26)}, 
	{NULL, 32}, 
	{sParasGfx26_1, ARRAY_COUNT(sParasGfx26_1)}, 
	{NULL, 32}, 
	{sParasGfx26_2, ARRAY_COUNT(sParasGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sParasGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_27.4bpp.lz");
static const u8 sParasGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_27_1.4bpp.lz");
static const u8 sParasGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_27_2.4bpp.lz");
static const ax_sprite sParasSprites27[] = {
	{NULL, 160}, 
	{sParasGfx27, ARRAY_COUNT(sParasGfx27)}, 
	{NULL, 64}, 
	{sParasGfx27_1, ARRAY_COUNT(sParasGfx27_1)}, 
	{NULL, 64}, 
	{sParasGfx27_2, ARRAY_COUNT(sParasGfx27_2)}, 
	{NULL, 0}
};
static const u8 sParasGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_28.4bpp.lz");
static const u8 sParasGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_28_1.4bpp.lz");
static const u8 sParasGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_28_2.4bpp.lz");
static const ax_sprite sParasSprites28[] = {
	{NULL, 128}, 
	{sParasGfx28, ARRAY_COUNT(sParasGfx28)}, 
	{NULL, 32}, 
	{sParasGfx28_1, ARRAY_COUNT(sParasGfx28_1)}, 
	{NULL, 96}, 
	{sParasGfx28_2, ARRAY_COUNT(sParasGfx28_2)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sParasGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_29.4bpp.lz");
static const u8 sParasGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_29_1.4bpp.lz");
static const ax_sprite sParasSprites29[] = {
	{NULL, 160}, 
	{sParasGfx29, ARRAY_COUNT(sParasGfx29)}, 
	{NULL, 32}, 
	{sParasGfx29_1, ARRAY_COUNT(sParasGfx29_1)}, 
	{NULL, 0}
};
static const u8 sParasGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_30.4bpp.lz");
static const u8 sParasGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_30_1.4bpp.lz");
static const u8 sParasGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_30_2.4bpp.lz");
static const ax_sprite sParasSprites30[] = {
	{NULL, 128}, 
	{sParasGfx30, ARRAY_COUNT(sParasGfx30)}, 
	{NULL, 32}, 
	{sParasGfx30_1, ARRAY_COUNT(sParasGfx30_1)}, 
	{NULL, 32}, 
	{sParasGfx30_2, ARRAY_COUNT(sParasGfx30_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sParasGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_31.4bpp.lz");
static const u8 sParasGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_31_1.4bpp.lz");
static const ax_sprite sParasSprites31[] = {
	{sParasGfx31, ARRAY_COUNT(sParasGfx31)}, 
	{NULL, 32}, 
	{sParasGfx31_1, ARRAY_COUNT(sParasGfx31_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sParasGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_32.4bpp.lz");
static const u8 sParasGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_32_1.4bpp.lz");
static const u8 sParasGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_32_2.4bpp.lz");
static const ax_sprite sParasSprites32[] = {
	{NULL, 160}, 
	{sParasGfx32, ARRAY_COUNT(sParasGfx32)}, 
	{NULL, 32}, 
	{sParasGfx32_1, ARRAY_COUNT(sParasGfx32_1)}, 
	{NULL, 32}, 
	{sParasGfx32_2, ARRAY_COUNT(sParasGfx32_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sParasGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_33.4bpp.lz");
static const u8 sParasGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_33_1.4bpp.lz");
static const u8 sParasGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_33_2.4bpp.lz");
static const u8 sParasGfx33_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_33_3.4bpp.lz");
static const u8 sParasGfx33_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_33_4.4bpp.lz");
static const ax_sprite sParasSprites33[] = {
	{sParasGfx33, ARRAY_COUNT(sParasGfx33)}, 
	{NULL, 64}, 
	{sParasGfx33_1, ARRAY_COUNT(sParasGfx33_1)}, 
	{NULL, 32}, 
	{sParasGfx33_2, ARRAY_COUNT(sParasGfx33_2)}, 
	{NULL, 32}, 
	{sParasGfx33_3, ARRAY_COUNT(sParasGfx33_3)}, 
	{NULL, 32}, 
	{sParasGfx33_4, ARRAY_COUNT(sParasGfx33_4)}, 
	{NULL, 0}
};
static const u8 sParasGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_34.4bpp.lz");
static const ax_sprite sParasSprites34[] = {
	{sParasGfx34, ARRAY_COUNT(sParasGfx34)}, 
	{NULL, 0}
};
static const u8 sParasGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_35.4bpp.lz");
static const u8 sParasGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_35_1.4bpp.lz");
static const u8 sParasGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_35_2.4bpp.lz");
static const ax_sprite sParasSprites35[] = {
	{NULL, 160}, 
	{sParasGfx35, ARRAY_COUNT(sParasGfx35)}, 
	{NULL, 32}, 
	{sParasGfx35_1, ARRAY_COUNT(sParasGfx35_1)}, 
	{NULL, 32}, 
	{sParasGfx35_2, ARRAY_COUNT(sParasGfx35_2)}, 
	{NULL, 0}
};
static const u8 sParasGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_36.4bpp.lz");
static const u8 sParasGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_36_1.4bpp.lz");
static const u8 sParasGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_36_2.4bpp.lz");
static const ax_sprite sParasSprites36[] = {
	{NULL, 160}, 
	{sParasGfx36, ARRAY_COUNT(sParasGfx36)}, 
	{NULL, 32}, 
	{sParasGfx36_1, ARRAY_COUNT(sParasGfx36_1)}, 
	{NULL, 32}, 
	{sParasGfx36_2, ARRAY_COUNT(sParasGfx36_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sParasGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_37.4bpp.lz");
static const u8 sParasGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_37_1.4bpp.lz");
static const ax_sprite sParasSprites37[] = {
	{NULL, 32}, 
	{sParasGfx37, ARRAY_COUNT(sParasGfx37)}, 
	{NULL, 32}, 
	{sParasGfx37_1, ARRAY_COUNT(sParasGfx37_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sParasGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_38.4bpp.lz");
static const u8 sParasGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_38_1.4bpp.lz");
static const u8 sParasGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_38_2.4bpp.lz");
static const ax_sprite sParasSprites38[] = {
	{NULL, 160}, 
	{sParasGfx38, ARRAY_COUNT(sParasGfx38)}, 
	{NULL, 64}, 
	{sParasGfx38_1, ARRAY_COUNT(sParasGfx38_1)}, 
	{NULL, 32}, 
	{sParasGfx38_2, ARRAY_COUNT(sParasGfx38_2)}, 
	{NULL, 0}
};
static const u8 sParasGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_39.4bpp.lz");
static const u8 sParasGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_39_1.4bpp.lz");
static const u8 sParasGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_39_2.4bpp.lz");
static const u8 sParasGfx39_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_39_3.4bpp.lz");
static const ax_sprite sParasSprites39[] = {
	{NULL, 64}, 
	{sParasGfx39, ARRAY_COUNT(sParasGfx39)}, 
	{NULL, 32}, 
	{sParasGfx39_1, ARRAY_COUNT(sParasGfx39_1)}, 
	{NULL, 32}, 
	{sParasGfx39_2, ARRAY_COUNT(sParasGfx39_2)}, 
	{NULL, 64}, 
	{sParasGfx39_3, ARRAY_COUNT(sParasGfx39_3)}, 
	{NULL, 0}
};
static const u8 sParasGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_40.4bpp.lz");
static const u8 sParasGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_40_1.4bpp.lz");
static const u8 sParasGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_40_2.4bpp.lz");
static const ax_sprite sParasSprites40[] = {
	{NULL, 160}, 
	{sParasGfx40, ARRAY_COUNT(sParasGfx40)}, 
	{NULL, 32}, 
	{sParasGfx40_1, ARRAY_COUNT(sParasGfx40_1)}, 
	{NULL, 32}, 
	{sParasGfx40_2, ARRAY_COUNT(sParasGfx40_2)}, 
	{NULL, 0}
};
static const u8 sParasGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_41.4bpp.lz");
static const u8 sParasGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_41_1.4bpp.lz");
static const u8 sParasGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_41_2.4bpp.lz");
static const u8 sParasGfx41_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_41_3.4bpp.lz");
static const ax_sprite sParasSprites41[] = {
	{NULL, 32}, 
	{sParasGfx41, ARRAY_COUNT(sParasGfx41)}, 
	{NULL, 64}, 
	{sParasGfx41_1, ARRAY_COUNT(sParasGfx41_1)}, 
	{NULL, 32}, 
	{sParasGfx41_2, ARRAY_COUNT(sParasGfx41_2)}, 
	{NULL, 64}, 
	{sParasGfx41_3, ARRAY_COUNT(sParasGfx41_3)}, 
	{NULL, 0}
};
static const u8 sParasGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_42.4bpp.lz");
static const u8 sParasGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_42_1.4bpp.lz");
static const u8 sParasGfx42_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_42_2.4bpp.lz");
static const ax_sprite sParasSprites42[] = {
	{NULL, 160}, 
	{sParasGfx42, ARRAY_COUNT(sParasGfx42)}, 
	{NULL, 32}, 
	{sParasGfx42_1, ARRAY_COUNT(sParasGfx42_1)}, 
	{NULL, 32}, 
	{sParasGfx42_2, ARRAY_COUNT(sParasGfx42_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sParasGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_43.4bpp.lz");
static const u8 sParasGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_43_1.4bpp.lz");
static const u8 sParasGfx43_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_43_2.4bpp.lz");
static const ax_sprite sParasSprites43[] = {
	{NULL, 64}, 
	{sParasGfx43, ARRAY_COUNT(sParasGfx43)}, 
	{NULL, 32}, 
	{sParasGfx43_1, ARRAY_COUNT(sParasGfx43_1)}, 
	{NULL, 32}, 
	{sParasGfx43_2, ARRAY_COUNT(sParasGfx43_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sParasGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_44.4bpp.lz");
static const u8 sParasGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_44_1.4bpp.lz");
static const u8 sParasGfx44_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_44_2.4bpp.lz");
static const u8 sParasGfx44_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_44_3.4bpp.lz");
static const ax_sprite sParasSprites44[] = {
	{NULL, 160}, 
	{sParasGfx44, ARRAY_COUNT(sParasGfx44)}, 
	{NULL, 32}, 
	{sParasGfx44_1, ARRAY_COUNT(sParasGfx44_1)}, 
	{NULL, 32}, 
	{sParasGfx44_2, ARRAY_COUNT(sParasGfx44_2)}, 
	{NULL, 32}, 
	{sParasGfx44_3, ARRAY_COUNT(sParasGfx44_3)}, 
	{NULL, 0}
};
static const u8 sParasGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_45.4bpp.lz");
static const u8 sParasGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_45_1.4bpp.lz");
static const u8 sParasGfx45_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_45_2.4bpp.lz");
static const u8 sParasGfx45_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_45_3.4bpp.lz");
static const ax_sprite sParasSprites45[] = {
	{NULL, 32}, 
	{sParasGfx45, ARRAY_COUNT(sParasGfx45)}, 
	{NULL, 32}, 
	{sParasGfx45_1, ARRAY_COUNT(sParasGfx45_1)}, 
	{NULL, 32}, 
	{sParasGfx45_2, ARRAY_COUNT(sParasGfx45_2)}, 
	{NULL, 32}, 
	{sParasGfx45_3, ARRAY_COUNT(sParasGfx45_3)}, 
	{NULL, 0}
};
static const u8 sParasGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_46.4bpp.lz");
static const ax_sprite sParasSprites46[] = {
	{sParasGfx46, ARRAY_COUNT(sParasGfx46)}, 
	{NULL, 0}
};
static const u8 sParasGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_47.4bpp.lz");
static const ax_sprite sParasSprites47[] = {
	{sParasGfx47, ARRAY_COUNT(sParasGfx47)}, 
	{NULL, 0}
};
static const u8 sParasGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_48.4bpp.lz");
static const ax_sprite sParasSprites48[] = {
	{sParasGfx48, ARRAY_COUNT(sParasGfx48)}, 
	{NULL, 0}
};
static const u8 sParasGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_49.4bpp.lz");
static const ax_sprite sParasSprites49[] = {
	{sParasGfx49, ARRAY_COUNT(sParasGfx49)}, 
	{NULL, 0}
};
static const u8 sParasGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_50.4bpp.lz");
static const ax_sprite sParasSprites50[] = {
	{sParasGfx50, ARRAY_COUNT(sParasGfx50)}, 
	{NULL, 0}
};
static const u8 sParasGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_51.4bpp.lz");
static const ax_sprite sParasSprites51[] = {
	{sParasGfx51, ARRAY_COUNT(sParasGfx51)}, 
	{NULL, 0}
};
static const u8 sParasGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/paras/sprite_52.4bpp.lz");
static const ax_sprite sParasSprites52[] = {
	{sParasGfx52, ARRAY_COUNT(sParasGfx52)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesParas[] = {
	sParasPose1,
	sParasPose2,
	sParasPose3,
	sParasPose4,
	sParasPose5,
	sParasPose6,
	sParasPose7,
	sParasPose8,
	sParasPose9,
	sParasPose10,
	sParasPose11,
	sParasPose12,
	sParasPose13,
	sParasPose14,
	sParasPose15,
	sParasPose16,
	sParasPose17,
	sParasPose18,
	sParasPose19,
	sParasPose20,
	sParasPose21,
	sParasPose22,
	sParasPose23,
	sParasPose24,
	sParasPose1,
	sParasPose2,
	sParasPose3,
	sParasPose28,
	sParasPose4,
	sParasPose5,
	sParasPose6,
	sParasPose32,
	sParasPose7,
	sParasPose8,
	sParasPose9,
	sParasPose36,
	sParasPose10,
	sParasPose11,
	sParasPose12,
	sParasPose40,
	sParasPose13,
	sParasPose14,
	sParasPose15,
	sParasPose44,
	sParasPose16,
	sParasPose17,
	sParasPose18,
	sParasPose48,
	sParasPose19,
	sParasPose20,
	sParasPose21,
	sParasPose52,
	sParasPose22,
	sParasPose23,
	sParasPose24,
	sParasPose56,
	sParasPose1,
	sParasPose2,
	sParasPose3,
	sParasPose60,
	sParasPose61,
	sParasPose62,
	sParasPose4,
	sParasPose5,
	sParasPose6,
	sParasPose66,
	sParasPose67,
	sParasPose68,
	sParasPose7,
	sParasPose8,
	sParasPose9,
	sParasPose72,
	sParasPose73,
	sParasPose74,
	sParasPose10,
	sParasPose11,
	sParasPose12,
	sParasPose78,
	sParasPose79,
	sParasPose80,
	sParasPose13,
	sParasPose14,
	sParasPose15,
	sParasPose84,
	sParasPose85,
	sParasPose86,
	sParasPose16,
	sParasPose17,
	sParasPose18,
	sParasPose90,
	sParasPose91,
	sParasPose92,
	sParasPose19,
	sParasPose20,
	sParasPose21,
	sParasPose96,
	sParasPose97,
	sParasPose98,
	sParasPose22,
	sParasPose23,
	sParasPose24,
	sParasPose102,
	sParasPose103,
	sParasPose104,
	sParasPose1,
	sParasPose106,
	sParasPose107,
	sParasPose4,
	sParasPose109,
	sParasPose110,
	sParasPose7,
	sParasPose112,
	sParasPose113,
	sParasPose10,
	sParasPose115,
	sParasPose116,
	sParasPose13,
	sParasPose118,
	sParasPose119,
	sParasPose16,
	sParasPose121,
	sParasPose122,
	sParasPose19,
	sParasPose124,
	sParasPose125,
	sParasPose22,
	sParasPose127,
	sParasPose128,
	sParasPose1,
	sParasPose22,
	sParasPose19,
	sParasPose16,
	sParasPose13,
	sParasPose10,
	sParasPose7,
	sParasPose4,
	sParasPose137,
	sParasPose138,
	sParasPose139,
	sParasPose140,
	sParasPose141,
	sParasPose142,
	sParasPose143,
	sParasPose144,
	sParasPose145,
	sParasPose146,
	sParasPose1,
	sParasPose2,
	sParasPose3,
	sParasPose4,
	sParasPose5,
	sParasPose6,
	sParasPose7,
	sParasPose8,
	sParasPose9,
	sParasPose10,
	sParasPose11,
	sParasPose12,
	sParasPose13,
	sParasPose14,
	sParasPose15,
	sParasPose16,
	sParasPose17,
	sParasPose18,
	sParasPose19,
	sParasPose20,
	sParasPose21,
	sParasPose22,
	sParasPose23,
	sParasPose24,
	sParasPose171,
	sParasPose172,
	sParasPose173,
	sParasPose122,
	sParasPose119,
	sParasPose116,
	sParasPose177,
	sParasPose178,
	sParasPose171,
	sParasPose172,
	sParasPose173,
	sParasPose122,
	sParasPose119,
	sParasPose116,
	sParasPose177,
	sParasPose178,
	sParasPose1,
	sParasPose28,
	sParasPose189,
	sParasPose4,
	sParasPose32,
	sParasPose192,
	sParasPose7,
	sParasPose36,
	sParasPose195,
	sParasPose10,
	sParasPose40,
	sParasPose198,
	sParasPose13,
	sParasPose44,
	sParasPose119,
	sParasPose16,
	sParasPose48,
	sParasPose204,
	sParasPose19,
	sParasPose52,
	sParasPose207,
	sParasPose22,
	sParasPose56,
	sParasPose210,
	sParasPose106,
	sParasPose127,
	sParasPose124,
	sParasPose121,
	sParasPose118,
	sParasPose115,
	sParasPose112,
	sParasPose109,
	sParasPose1,
	sParasPose22,
	sParasPose19,
	sParasPose16,
	sParasPose13,
	sParasPose10,
	sParasPose7,
	sParasPose4,
};

static const struct PositionSets sAxPositionsParas[] = {
	[0] = { .set = { {0, 0}, {-5, 1}, {4, 1}, {0, -5} } },
	[1] = { .set = { {0, 1}, {-6, 3}, {5, 1}, {0, -4} } },
	[2] = { .set = { {0, 1}, {-5, 2}, {5, 3}, {0, -4} } },
	[3] = { .set = { {4, -1}, {9, -2}, {2, 2}, {0, -5} } },
	[4] = { .set = { {4, 0}, {11, 0}, {1, 3}, {0, -4} } },
	[5] = { .set = { {4, 0}, {8, -1}, {3, 4}, {0, -4} } },
	[6] = { .set = { {8, -3}, {8, -1}, {7, 0}, {0, -6} } },
	[7] = { .set = { {9, -3}, {11, -3}, {6, 2}, {0, -5} } },
	[8] = { .set = { {9, -2}, {8, -2}, {9, 1}, {0, -5} } },
	[9] = { .set = { {4, -7}, {0, -9}, {8, -5}, {0, -7} } },
	[10] = { .set = { {4, -7}, {1, -8}, {7, -4}, {0, -5} } },
	[11] = { .set = { {5, -7}, {-1, -8}, {10, -6}, {0, -5} } },
	[12] = { .set = { {0, -9}, {3, -9}, {-4, -9}, {0, -7} } },
	[13] = { .set = { {0, -8}, {2, -9}, {-6, -6}, {0, -6} } },
	[14] = { .set = { {0, -8}, {4, -7}, {-2, -9}, {0, -6} } },
	[15] = { .set = { {-5, -7}, {-1, -9}, {-9, -5}, {-1, -7} } },
	[16] = { .set = { {-5, -7}, {-2, -8}, {-8, -4}, {-1, -5} } },
	[17] = { .set = { {-6, -7}, {0, -8}, {-11, -6}, {-1, -5} } },
	[18] = { .set = { {-9, -3}, {-9, -1}, {-8, 0}, {-1, -6} } },
	[19] = { .set = { {-10, -3}, {-12, -3}, {-7, 2}, {-1, -5} } },
	[20] = { .set = { {-10, -2}, {-9, -2}, {-10, 1}, {-1, -5} } },
	[21] = { .set = { {-5, -1}, {-10, -2}, {-3, 2}, {-1, -5} } },
	[22] = { .set = { {-5, 0}, {-12, 0}, {-2, 3}, {-1, -4} } },
	[23] = { .set = { {-5, 0}, {-9, -1}, {-4, 4}, {-1, -4} } },
	[24] = { .set = { {0, 0}, {-5, 1}, {4, 1}, {0, -5} } },
	[25] = { .set = { {0, 1}, {-6, 3}, {5, 1}, {0, -4} } },
	[26] = { .set = { {0, 1}, {-5, 2}, {5, 3}, {0, -4} } },
	[27] = { .set = { {0, -6}, {-5, 0}, {4, 0}, {0, -11} } },
	[28] = { .set = { {4, -1}, {9, -2}, {2, 2}, {0, -5} } },
	[29] = { .set = { {4, 0}, {11, 0}, {1, 3}, {0, -4} } },
	[30] = { .set = { {4, 0}, {8, -1}, {3, 4}, {0, -4} } },
	[31] = { .set = { {4, -6}, {7, -2}, {-1, 1}, {0, -9} } },
	[32] = { .set = { {8, -3}, {8, -1}, {7, 0}, {0, -6} } },
	[33] = { .set = { {9, -3}, {11, -3}, {6, 2}, {0, -5} } },
	[34] = { .set = { {9, -2}, {8, -2}, {9, 1}, {0, -5} } },
	[35] = { .set = { {8, -8}, {3, 1}, {3, 2}, {0, -11} } },
	[36] = { .set = { {4, -7}, {0, -9}, {8, -5}, {0, -7} } },
	[37] = { .set = { {4, -7}, {1, -8}, {7, -4}, {0, -5} } },
	[38] = { .set = { {5, -7}, {-1, -8}, {10, -6}, {0, -5} } },
	[39] = { .set = { {5, -12}, {-2, -5}, {5, -2}, {0, -9} } },
	[40] = { .set = { {0, -9}, {3, -9}, {-4, -9}, {0, -7} } },
	[41] = { .set = { {0, -8}, {2, -9}, {-6, -6}, {0, -6} } },
	[42] = { .set = { {0, -8}, {4, -7}, {-2, -9}, {0, -6} } },
	[43] = { .set = { {0, -13}, {4, -4}, {-5, -4}, {0, -10} } },
	[44] = { .set = { {-5, -7}, {-1, -9}, {-9, -5}, {-1, -7} } },
	[45] = { .set = { {-5, -7}, {-2, -8}, {-8, -4}, {-1, -5} } },
	[46] = { .set = { {-6, -7}, {0, -8}, {-11, -6}, {-1, -5} } },
	[47] = { .set = { {-6, -12}, {1, -5}, {-6, -2}, {-1, -9} } },
	[48] = { .set = { {-9, -3}, {-9, -1}, {-8, 0}, {-1, -6} } },
	[49] = { .set = { {-10, -3}, {-12, -3}, {-7, 2}, {-1, -5} } },
	[50] = { .set = { {-10, -2}, {-9, -2}, {-10, 1}, {-1, -5} } },
	[51] = { .set = { {-9, -8}, {-4, 1}, {-4, 2}, {-1, -11} } },
	[52] = { .set = { {-5, -1}, {-10, -2}, {-3, 2}, {-1, -5} } },
	[53] = { .set = { {-5, 0}, {-12, 0}, {-2, 3}, {-1, -4} } },
	[54] = { .set = { {-5, 0}, {-9, -1}, {-4, 4}, {-1, -4} } },
	[55] = { .set = { {-5, -6}, {-8, -2}, {0, 1}, {-1, -9} } },
	[56] = { .set = { {0, 0}, {-5, 1}, {4, 1}, {0, -5} } },
	[57] = { .set = { {0, 1}, {-6, 3}, {5, 1}, {0, -4} } },
	[58] = { .set = { {0, 1}, {-5, 2}, {5, 3}, {0, -4} } },
	[59] = { .set = { {0, -3}, {-6, 1}, {11, -13}, {0, -8} } },
	[60] = { .set = { {-2, 0}, {-6, 1}, {-3, 4}, {0, -5} } },
	[61] = { .set = { {-2, 0}, {-6, 1}, {-3, 4}, {0, -5} } },
	[62] = { .set = { {4, -1}, {9, -2}, {2, 2}, {0, -5} } },
	[63] = { .set = { {4, 0}, {11, 0}, {1, 3}, {0, -4} } },
	[64] = { .set = { {4, 0}, {8, -1}, {3, 4}, {0, -4} } },
	[65] = { .set = { {4, -2}, {9, -2}, {-8, -12}, {0, -7} } },
	[66] = { .set = { {5, -2}, {9, -3}, {8, 1}, {1, -6} } },
	[67] = { .set = { {5, -2}, {9, -3}, {8, 1}, {1, -6} } },
	[68] = { .set = { {8, -3}, {8, -1}, {7, 0}, {0, -6} } },
	[69] = { .set = { {9, -3}, {11, -3}, {6, 2}, {0, -5} } },
	[70] = { .set = { {9, -2}, {8, -2}, {9, 1}, {0, -5} } },
	[71] = { .set = { {8, -5}, {8, -4}, {0, -14}, {-1, -7} } },
	[72] = { .set = { {7, -4}, {7, -5}, {11, -3}, {0, -6} } },
	[73] = { .set = { {7, -4}, {7, -5}, {11, -3}, {0, -6} } },
	[74] = { .set = { {4, -7}, {0, -9}, {8, -5}, {0, -7} } },
	[75] = { .set = { {4, -7}, {1, -8}, {7, -4}, {0, -5} } },
	[76] = { .set = { {5, -7}, {-1, -8}, {10, -6}, {0, -5} } },
	[77] = { .set = { {3, -9}, {1, -10}, {11, -14}, {0, -8} } },
	[78] = { .set = { {2, -8}, {-2, -8}, {3, -8}, {-1, -6} } },
	[79] = { .set = { {2, -8}, {-2, -8}, {3, -8}, {-1, -6} } },
	[80] = { .set = { {0, -9}, {3, -9}, {-4, -9}, {0, -7} } },
	[81] = { .set = { {0, -8}, {2, -9}, {-6, -6}, {0, -6} } },
	[82] = { .set = { {0, -8}, {4, -7}, {-2, -9}, {0, -6} } },
	[83] = { .set = { {0, -10}, {2, -11}, {-12, -17}, {0, -7} } },
	[84] = { .set = { {1, -9}, {2, -10}, {-1, -10}, {0, -6} } },
	[85] = { .set = { {1, -9}, {2, -10}, {-1, -10}, {0, -6} } },
	[86] = { .set = { {-5, -7}, {-1, -9}, {-9, -5}, {-1, -7} } },
	[87] = { .set = { {-5, -7}, {-2, -8}, {-8, -4}, {-1, -5} } },
	[88] = { .set = { {-6, -7}, {0, -8}, {-11, -6}, {-1, -5} } },
	[89] = { .set = { {-4, -9}, {-2, -10}, {-12, -14}, {-1, -8} } },
	[90] = { .set = { {-3, -8}, {1, -8}, {-4, -8}, {0, -6} } },
	[91] = { .set = { {-3, -8}, {1, -8}, {-4, -8}, {0, -6} } },
	[92] = { .set = { {-9, -3}, {-9, -1}, {-8, 0}, {-1, -6} } },
	[93] = { .set = { {-10, -3}, {-12, -3}, {-7, 2}, {-1, -5} } },
	[94] = { .set = { {-10, -2}, {-9, -2}, {-10, 1}, {-1, -5} } },
	[95] = { .set = { {-9, -5}, {-9, -4}, {-1, -14}, {0, -7} } },
	[96] = { .set = { {-8, -4}, {-8, -5}, {-12, -3}, {-1, -6} } },
	[97] = { .set = { {-8, -4}, {-8, -5}, {-12, -3}, {-1, -6} } },
	[98] = { .set = { {-5, -1}, {-10, -2}, {-3, 2}, {-1, -5} } },
	[99] = { .set = { {-5, 0}, {-12, 0}, {-2, 3}, {-1, -4} } },
	[100] = { .set = { {-5, 0}, {-9, -1}, {-4, 4}, {-1, -4} } },
	[101] = { .set = { {-5, -2}, {-10, -2}, {7, -12}, {-1, -7} } },
	[102] = { .set = { {-6, -2}, {-10, -3}, {-9, 1}, {-2, -6} } },
	[103] = { .set = { {-6, -2}, {-10, -3}, {-9, 1}, {-2, -6} } },
	[104] = { .set = { {0, 0}, {-5, 1}, {4, 1}, {0, -5} } },
	[105] = { .set = { {-1, 0}, {0, 2}, {0, 0}, {0, -5} } },
	[106] = { .set = { {0, -5}, {-11, -12}, {10, -12}, {0, -9} } },
	[107] = { .set = { {4, -1}, {9, -2}, {2, 2}, {0, -5} } },
	[108] = { .set = { {5, 0}, {6, 1}, {4, 0}, {1, -5} } },
	[109] = { .set = { {4, -6}, {11, -15}, {-6, -7}, {-1, -9} } },
	[110] = { .set = { {8, -3}, {8, -1}, {7, 0}, {0, -6} } },
	[111] = { .set = { {8, -4}, {10, -3}, {8, -3}, {1, -5} } },
	[112] = { .set = { {5, -10}, {5, -18}, {6, -7}, {-1, -8} } },
	[113] = { .set = { {4, -7}, {0, -9}, {8, -5}, {0, -7} } },
	[114] = { .set = { {4, -8}, {2, -10}, {6, -8}, {0, -7} } },
	[115] = { .set = { {2, -11}, {-4, -19}, {12, -12}, {-2, -7} } },
	[116] = { .set = { {0, -9}, {3, -9}, {-4, -9}, {0, -7} } },
	[117] = { .set = { {-1, -9}, {1, -9}, {-2, -9}, {0, -6} } },
	[118] = { .set = { {-1, -11}, {9, -16}, {-10, -16}, {0, -6} } },
	[119] = { .set = { {-5, -7}, {-1, -9}, {-9, -5}, {-1, -7} } },
	[120] = { .set = { {-5, -8}, {-3, -10}, {-7, -8}, {-1, -7} } },
	[121] = { .set = { {-3, -11}, {3, -19}, {-13, -12}, {1, -7} } },
	[122] = { .set = { {-9, -3}, {-9, -1}, {-8, 0}, {-1, -6} } },
	[123] = { .set = { {-9, -4}, {-11, -3}, {-9, -3}, {-2, -5} } },
	[124] = { .set = { {-6, -10}, {-6, -18}, {-7, -7}, {0, -8} } },
	[125] = { .set = { {-5, -1}, {-10, -2}, {-3, 2}, {-1, -5} } },
	[126] = { .set = { {-6, 0}, {-7, 1}, {-5, 0}, {-2, -5} } },
	[127] = { .set = { {-5, -6}, {-12, -15}, {5, -7}, {0, -9} } },
	[128] = { .set = { {0, 0}, {-5, 1}, {4, 1}, {0, -5} } },
	[129] = { .set = { {-5, -1}, {-10, -2}, {-3, 2}, {-1, -5} } },
	[130] = { .set = { {-9, -3}, {-9, -1}, {-8, 0}, {-1, -6} } },
	[131] = { .set = { {-5, -7}, {-1, -9}, {-9, -5}, {-1, -7} } },
	[132] = { .set = { {0, -9}, {3, -9}, {-4, -9}, {0, -7} } },
	[133] = { .set = { {4, -7}, {0, -9}, {8, -5}, {0, -7} } },
	[134] = { .set = { {8, -3}, {8, -1}, {7, 0}, {0, -6} } },
	[135] = { .set = { {4, -1}, {9, -2}, {2, 2}, {0, -5} } },
	[136] = { .set = { {-5, 1}, {-10, -2}, {-3, 2}, {-1, -5} } },
	[137] = { .set = { {-5, 2}, {-9, 0}, {-4, 3}, {-1, -4} } },
	[138] = { .set = { {0, 2}, {-5, -4}, {4, -4}, {0, -5} } },
	[139] = { .set = { {3, 1}, {5, -6}, {-3, -3}, {-1, -5} } },
	[140] = { .set = { {8, -1}, {6, -8}, {4, -5}, {-1, -5} } },
	[141] = { .set = { {4, -7}, {0, -10}, {7, -6}, {-1, -4} } },
	[142] = { .set = { {0, -6}, {2, -7}, {-3, -7}, {0, -4} } },
	[143] = { .set = { {-5, -7}, {-1, -10}, {-8, -6}, {0, -4} } },
	[144] = { .set = { {-8, -1}, {-6, -8}, {-4, -5}, {1, -5} } },
	[145] = { .set = { {-4, 1}, {-6, -6}, {2, -3}, {0, -5} } },
	[146] = { .set = { {0, 0}, {-5, 1}, {4, 1}, {0, -5} } },
	[147] = { .set = { {0, 1}, {-6, 3}, {5, 1}, {0, -4} } },
	[148] = { .set = { {0, 1}, {-5, 2}, {5, 3}, {0, -4} } },
	[149] = { .set = { {4, -1}, {9, -2}, {2, 2}, {0, -5} } },
	[150] = { .set = { {4, 0}, {11, 0}, {1, 3}, {0, -4} } },
	[151] = { .set = { {4, 0}, {8, -1}, {3, 4}, {0, -4} } },
	[152] = { .set = { {8, -3}, {8, -1}, {7, 0}, {0, -6} } },
	[153] = { .set = { {9, -3}, {11, -3}, {6, 2}, {0, -5} } },
	[154] = { .set = { {9, -2}, {8, -2}, {9, 1}, {0, -5} } },
	[155] = { .set = { {4, -7}, {0, -9}, {8, -5}, {0, -7} } },
	[156] = { .set = { {4, -7}, {1, -8}, {7, -4}, {0, -5} } },
	[157] = { .set = { {5, -7}, {-1, -8}, {10, -6}, {0, -5} } },
	[158] = { .set = { {0, -9}, {3, -9}, {-4, -9}, {0, -7} } },
	[159] = { .set = { {0, -8}, {2, -9}, {-6, -6}, {0, -6} } },
	[160] = { .set = { {0, -8}, {4, -7}, {-2, -9}, {0, -6} } },
	[161] = { .set = { {-5, -7}, {-1, -9}, {-9, -5}, {-1, -7} } },
	[162] = { .set = { {-5, -7}, {-2, -8}, {-8, -4}, {-1, -5} } },
	[163] = { .set = { {-6, -7}, {0, -8}, {-11, -6}, {-1, -5} } },
	[164] = { .set = { {-9, -3}, {-9, -1}, {-8, 0}, {-1, -6} } },
	[165] = { .set = { {-10, -3}, {-12, -3}, {-7, 2}, {-1, -5} } },
	[166] = { .set = { {-10, -2}, {-9, -2}, {-10, 1}, {-1, -5} } },
	[167] = { .set = { {-5, -1}, {-10, -2}, {-3, 2}, {-1, -5} } },
	[168] = { .set = { {-5, 0}, {-12, 0}, {-2, 3}, {-1, -4} } },
	[169] = { .set = { {-5, 0}, {-9, -1}, {-4, 4}, {-1, -4} } },
	[170] = { .set = { {0, -2}, {-11, -9}, {10, -9}, {0, -6} } },
	[171] = { .set = { {-5, -4}, {-12, -13}, {5, -5}, {0, -7} } },
	[172] = { .set = { {-6, -9}, {-6, -17}, {-7, -6}, {0, -7} } },
	[173] = { .set = { {-3, -11}, {3, -19}, {-13, -12}, {1, -7} } },
	[174] = { .set = { {-1, -11}, {9, -16}, {-10, -16}, {0, -6} } },
	[175] = { .set = { {2, -11}, {-4, -19}, {12, -12}, {-2, -7} } },
	[176] = { .set = { {5, -9}, {5, -17}, {6, -6}, {-1, -7} } },
	[177] = { .set = { {4, -4}, {11, -13}, {-6, -5}, {-1, -7} } },
	[178] = { .set = { {0, -2}, {-11, -9}, {10, -9}, {0, -6} } },
	[179] = { .set = { {-5, -4}, {-12, -13}, {5, -5}, {0, -7} } },
	[180] = { .set = { {-6, -9}, {-6, -17}, {-7, -6}, {0, -7} } },
	[181] = { .set = { {-3, -11}, {3, -19}, {-13, -12}, {1, -7} } },
	[182] = { .set = { {-1, -11}, {9, -16}, {-10, -16}, {0, -6} } },
	[183] = { .set = { {2, -11}, {-4, -19}, {12, -12}, {-2, -7} } },
	[184] = { .set = { {5, -9}, {5, -17}, {6, -6}, {-1, -7} } },
	[185] = { .set = { {4, -4}, {11, -13}, {-6, -5}, {-1, -7} } },
	[186] = { .set = { {0, 0}, {-5, 1}, {4, 1}, {0, -5} } },
	[187] = { .set = { {0, -6}, {-5, 0}, {4, 0}, {0, -11} } },
	[188] = { .set = { {0, -3}, {-11, -10}, {10, -10}, {0, -7} } },
	[189] = { .set = { {4, -1}, {9, -2}, {2, 2}, {0, -5} } },
	[190] = { .set = { {4, -6}, {7, -2}, {-1, 1}, {0, -9} } },
	[191] = { .set = { {4, -5}, {11, -14}, {-6, -6}, {-1, -8} } },
	[192] = { .set = { {8, -3}, {8, -1}, {7, 0}, {0, -6} } },
	[193] = { .set = { {8, -8}, {3, 1}, {3, 2}, {0, -11} } },
	[194] = { .set = { {6, -10}, {6, -18}, {7, -7}, {0, -8} } },
	[195] = { .set = { {4, -7}, {0, -9}, {8, -5}, {0, -7} } },
	[196] = { .set = { {5, -12}, {-2, -5}, {5, -2}, {0, -9} } },
	[197] = { .set = { {3, -11}, {-3, -19}, {13, -12}, {-1, -7} } },
	[198] = { .set = { {0, -9}, {3, -9}, {-4, -9}, {0, -7} } },
	[199] = { .set = { {0, -13}, {4, -4}, {-5, -4}, {0, -10} } },
	[200] = { .set = { {-1, -11}, {9, -16}, {-10, -16}, {0, -6} } },
	[201] = { .set = { {-5, -7}, {-1, -9}, {-9, -5}, {-1, -7} } },
	[202] = { .set = { {-6, -12}, {1, -5}, {-6, -2}, {-1, -9} } },
	[203] = { .set = { {-4, -11}, {2, -19}, {-14, -12}, {0, -7} } },
	[204] = { .set = { {-9, -3}, {-9, -1}, {-8, 0}, {-1, -6} } },
	[205] = { .set = { {-9, -8}, {-4, 1}, {-4, 2}, {-1, -11} } },
	[206] = { .set = { {-7, -10}, {-7, -18}, {-8, -7}, {-1, -8} } },
	[207] = { .set = { {-5, -1}, {-10, -2}, {-3, 2}, {-1, -5} } },
	[208] = { .set = { {-5, -6}, {-8, -2}, {0, 1}, {-1, -9} } },
	[209] = { .set = { {-5, -5}, {-12, -14}, {5, -6}, {0, -8} } },
	[210] = { .set = { {-1, 0}, {0, 2}, {0, 0}, {0, -5} } },
	[211] = { .set = { {-6, 0}, {-7, 1}, {-5, 0}, {-2, -5} } },
	[212] = { .set = { {-9, -4}, {-11, -3}, {-9, -3}, {-2, -5} } },
	[213] = { .set = { {-5, -8}, {-3, -10}, {-7, -8}, {-1, -7} } },
	[214] = { .set = { {-1, -9}, {1, -9}, {-2, -9}, {0, -6} } },
	[215] = { .set = { {4, -8}, {2, -10}, {6, -8}, {0, -7} } },
	[216] = { .set = { {8, -4}, {10, -3}, {8, -3}, {1, -5} } },
	[217] = { .set = { {5, 0}, {6, 1}, {4, 0}, {1, -5} } },
	[218] = { .set = { {0, 0}, {-5, 1}, {4, 1}, {0, -5} } },
	[219] = { .set = { {-5, -1}, {-10, -2}, {-3, 2}, {-1, -5} } },
	[220] = { .set = { {-9, -3}, {-9, -1}, {-8, 0}, {-1, -6} } },
	[221] = { .set = { {-5, -7}, {-1, -9}, {-9, -5}, {-1, -7} } },
	[222] = { .set = { {0, -9}, {3, -9}, {-4, -9}, {0, -7} } },
	[223] = { .set = { {4, -7}, {0, -9}, {8, -5}, {0, -7} } },
	[224] = { .set = { {8, -3}, {8, -1}, {7, 0}, {0, -6} } },
	[225] = { .set = { {4, -1}, {9, -2}, {2, 2}, {0, -5} } },
};

static const ax_anim *const sParasAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02477),
	AX_ANIM_PTR(gAxSharedAnim_02542),
	AX_ANIM_PTR(gAxSharedAnim_02551),
	AX_ANIM_PTR(gAxSharedAnim_02559),
	AX_ANIM_PTR(gAxSharedAnim_02499),
	AX_ANIM_PTR(gAxSharedAnim_02519),
	AX_ANIM_PTR(gAxSharedAnim_02526),
	AX_ANIM_PTR(gAxSharedAnim_02535),
};

static const ax_anim *const sParasAnimTable2[] = {
	AX_ANIM_PTR(sParasAnims_2_1),
	AX_ANIM_PTR(sParasAnims_2_2),
	AX_ANIM_PTR(sParasAnims_2_3),
	AX_ANIM_PTR(sParasAnims_2_4),
	AX_ANIM_PTR(sParasAnims_2_5),
	AX_ANIM_PTR(sParasAnims_2_6),
	AX_ANIM_PTR(sParasAnims_2_7),
	AX_ANIM_PTR(sParasAnims_2_8),
};

static const ax_anim *const sParasAnimTable3[] = {
	AX_ANIM_PTR(sParasAnims_3_1),
	AX_ANIM_PTR(sParasAnims_3_2),
	AX_ANIM_PTR(sParasAnims_3_3),
	AX_ANIM_PTR(sParasAnims_3_4),
	AX_ANIM_PTR(sParasAnims_3_5),
	AX_ANIM_PTR(sParasAnims_3_6),
	AX_ANIM_PTR(sParasAnims_3_7),
	AX_ANIM_PTR(sParasAnims_3_8),
};

static const ax_anim *const sParasAnimTable4[] = {
	AX_ANIM_PTR(sParasAnims_4_1),
	AX_ANIM_PTR(sParasAnims_4_2),
	AX_ANIM_PTR(sParasAnims_4_3),
	AX_ANIM_PTR(sParasAnims_4_4),
	AX_ANIM_PTR(sParasAnims_4_5),
	AX_ANIM_PTR(sParasAnims_4_6),
	AX_ANIM_PTR(sParasAnims_4_7),
	AX_ANIM_PTR(sParasAnims_4_8),
};

static const ax_anim *const sParasAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00381),
	AX_ANIM_PTR(gAxSharedAnim_00438),
	AX_ANIM_PTR(gAxSharedAnim_00433),
	AX_ANIM_PTR(gAxSharedAnim_00427),
	AX_ANIM_PTR(gAxSharedAnim_00418),
	AX_ANIM_PTR(gAxSharedAnim_00409),
	AX_ANIM_PTR(gAxSharedAnim_00401),
	AX_ANIM_PTR(gAxSharedAnim_00389),
};

static const ax_anim *const sParasAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
};

static const ax_anim *const sParasAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00466),
	AX_ANIM_PTR(gAxSharedAnim_00479),
	AX_ANIM_PTR(gAxSharedAnim_00487),
	AX_ANIM_PTR(gAxSharedAnim_00496),
	AX_ANIM_PTR(gAxSharedAnim_00508),
	AX_ANIM_PTR(gAxSharedAnim_00517),
	AX_ANIM_PTR(gAxSharedAnim_00523),
	AX_ANIM_PTR(gAxSharedAnim_00529),
};

static const ax_anim *const sParasAnimTable8[] = {
	AX_ANIM_PTR(sParasAnims_8_1),
	AX_ANIM_PTR(sParasAnims_8_2),
	AX_ANIM_PTR(sParasAnims_8_3),
	AX_ANIM_PTR(sParasAnims_8_4),
	AX_ANIM_PTR(sParasAnims_8_5),
	AX_ANIM_PTR(sParasAnims_8_6),
	AX_ANIM_PTR(sParasAnims_8_7),
	AX_ANIM_PTR(sParasAnims_8_8),
};

static const ax_anim *const sParasAnimTable9[] = {
	AX_ANIM_PTR(gAxSharedAnim_00796),
	AX_ANIM_PTR(sParasAnims_9_2),
	AX_ANIM_PTR(gAxSharedAnim_00877),
	AX_ANIM_PTR(sParasAnims_9_4),
	AX_ANIM_PTR(sParasAnims_9_5),
	AX_ANIM_PTR(sParasAnims_9_6),
	AX_ANIM_PTR(gAxSharedAnim_00824),
	AX_ANIM_PTR(sParasAnims_9_8),
};

static const ax_anim *const sParasAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00905),
	AX_ANIM_PTR(gAxSharedAnim_00995),
	AX_ANIM_PTR(gAxSharedAnim_00978),
	AX_ANIM_PTR(gAxSharedAnim_00964),
	AX_ANIM_PTR(gAxSharedAnim_00955),
	AX_ANIM_PTR(gAxSharedAnim_00943),
	AX_ANIM_PTR(gAxSharedAnim_00930),
	AX_ANIM_PTR(gAxSharedAnim_00917),
};

static const ax_anim *const sParasAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_01008),
	AX_ANIM_PTR(gAxSharedAnim_01059),
	AX_ANIM_PTR(sParasAnims_11_3),
	AX_ANIM_PTR(sParasAnims_11_4),
	AX_ANIM_PTR(sParasAnims_11_5),
	AX_ANIM_PTR(sParasAnims_11_6),
	AX_ANIM_PTR(sParasAnims_11_7),
	AX_ANIM_PTR(gAxSharedAnim_01297),
};

static const ax_anim *const sParasAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01337),
	AX_ANIM_PTR(gAxSharedAnim_01414),
	AX_ANIM_PTR(gAxSharedAnim_01392),
	AX_ANIM_PTR(gAxSharedAnim_01380),
	AX_ANIM_PTR(gAxSharedAnim_01379),
	AX_ANIM_PTR(gAxSharedAnim_01368),
	AX_ANIM_PTR(gAxSharedAnim_01354),
	AX_ANIM_PTR(gAxSharedAnim_01338),
};

static const ax_anim *const sParasAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01422),
	AX_ANIM_PTR(gAxSharedAnim_01464),
	AX_ANIM_PTR(gAxSharedAnim_01461),
	AX_ANIM_PTR(gAxSharedAnim_01456),
	AX_ANIM_PTR(gAxSharedAnim_01446),
	AX_ANIM_PTR(gAxSharedAnim_01443),
	AX_ANIM_PTR(gAxSharedAnim_01438),
	AX_ANIM_PTR(gAxSharedAnim_01429),
};

static const ax_anim *const *const sAxAnimationsParas[] = {
	sParasAnimTable1,
	sParasAnimTable2,
	sParasAnimTable3,
	sParasAnimTable4,
	sParasAnimTable5,
	sParasAnimTable6,
	sParasAnimTable7,
	sParasAnimTable8,
	sParasAnimTable9,
	sParasAnimTable10,
	sParasAnimTable11,
	sParasAnimTable12,
	sParasAnimTable13,
};

static const ax_sprite *const sAxSpritesParas[] = {
	sParasSprites1,
	sParasSprites2,
	sParasSprites3,
	sParasSprites4,
	sParasSprites5,
	sParasSprites6,
	sParasSprites7,
	sParasSprites8,
	sParasSprites9,
	sParasSprites10,
	sParasSprites11,
	sParasSprites12,
	sParasSprites13,
	sParasSprites14,
	sParasSprites15,
	sParasSprites16,
	sParasSprites17,
	sParasSprites18,
	sParasSprites19,
	sParasSprites20,
	sParasSprites21,
	sParasSprites22,
	sParasSprites23,
	sParasSprites24,
	sParasSprites25,
	sParasSprites26,
	sParasSprites27,
	sParasSprites28,
	sParasSprites29,
	sParasSprites30,
	sParasSprites31,
	sParasSprites32,
	sParasSprites33,
	sParasSprites34,
	sParasSprites35,
	sParasSprites36,
	sParasSprites37,
	sParasSprites38,
	sParasSprites39,
	sParasSprites40,
	sParasSprites41,
	sParasSprites42,
	sParasSprites43,
	sParasSprites44,
	sParasSprites45,
	sParasSprites46,
	sParasSprites47,
	sParasSprites48,
	sParasSprites49,
	sParasSprites50,
	sParasSprites51,
	sParasSprites52,
};

static const axmain sAxMainParas = {
	.poses = sAxPosesParas,
	.animations = sAxAnimationsParas,
	.animCount = ARRAY_COUNT(sAxAnimationsParas),
	.spriteData = sAxSpritesParas,
	.positions = sAxPositionsParas,
};
