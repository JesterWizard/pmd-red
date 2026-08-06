/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainSunflora;
const SiroArchive gAxSunflora = {"SIRO", &sAxMainSunflora};

static const ax_pose sSunfloraPose1[] = {
	AX_POSE(0, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose2[] = {
	AX_POSE(1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose3[] = {
	AX_POSE(2, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose4[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose5[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose6[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose7[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose8[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose9[] = {
	AX_POSE(8, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose10[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose11[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose12[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose13[] = {
	AX_POSE(12, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose14[] = {
	AX_POSE(13, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose15[] = {
	AX_POSE(14, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose16[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose17[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose18[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose19[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose20[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose21[] = {
	AX_POSE(8, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose22[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose23[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose24[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose28[] = {
	AX_POSE(15, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose32[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose36[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose40[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose44[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose48[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose52[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose56[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose60[] = {
	AX_POSE(23, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(15, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose61[] = {
	AX_POSE(24, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose62[] = {
	AX_POSE(23, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(24, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose67[] = {
	AX_POSE(25, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose69[] = {
	AX_POSE(26, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 3)),
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose70[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose72[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose74[] = {
	AX_POSE(27, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose76[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(28, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose77[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose81[] = {
	AX_POSE(29, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(30, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(3, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(24, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose83[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(31, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose84[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose88[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(32, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose90[] = {
	AX_POSE(33, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(32, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose91[] = {
	AX_POSE(33, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose95[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(31, OAM1(233, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose97[] = {
	AX_POSE(29, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(30, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(24, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose98[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose101[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose102[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(28, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose104[] = {
	AX_POSE(27, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose105[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose109[] = {
	AX_POSE(26, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose111[] = {
	AX_POSE(25, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose112[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose114[] = {
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose115[] = {
	AX_POSE(35, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose116[] = {
	AX_POSE(36, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose118[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose119[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose120[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose122[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose123[] = {
	AX_POSE(41, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose124[] = {
	AX_POSE(42, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose126[] = {
	AX_POSE(43, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose127[] = {
	AX_POSE(44, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose128[] = {
	AX_POSE(45, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose130[] = {
	AX_POSE(46, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose131[] = {
	AX_POSE(47, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose132[] = {
	AX_POSE(48, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose134[] = {
	AX_POSE(43, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose135[] = {
	AX_POSE(44, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose136[] = {
	AX_POSE(45, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose138[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose139[] = {
	AX_POSE(41, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose140[] = {
	AX_POSE(42, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose142[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose143[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose144[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose153[] = {
	AX_POSE(49, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose154[] = {
	AX_POSE(50, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose155[] = {
	AX_POSE(51, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose156[] = {
	AX_POSE(52, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose157[] = {
	AX_POSE(53, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose158[] = {
	AX_POSE(54, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose159[] = {
	AX_POSE(55, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose160[] = {
	AX_POSE(54, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose161[] = {
	AX_POSE(53, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose162[] = {
	AX_POSE(52, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose164[] = {
	AX_POSE(1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose165[] = {
	AX_POSE(2, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose167[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose168[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose170[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose174[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose180[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose182[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose185[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose186[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose187[] = {
	AX_POSE(36, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose188[] = {
	AX_POSE(39, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose189[] = {
	AX_POSE(42, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose190[] = {
	AX_POSE(45, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose191[] = {
	AX_POSE(48, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose192[] = {
	AX_POSE(45, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose193[] = {
	AX_POSE(42, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose194[] = {
	AX_POSE(39, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose196[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose197[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose198[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose199[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose200[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose201[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose205[] = {
	AX_POSE(35, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose214[] = {
	AX_POSE(44, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose220[] = {
	AX_POSE(44, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose228[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose229[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose231[] = {
	AX_POSE(46, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSunfloraPose233[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const u8 sSunfloraAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_1_1.lz");
static const u8 sSunfloraAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_1_2.lz");
static const u8 sSunfloraAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_1_3.lz");
static const u8 sSunfloraAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_1_4.lz");
static const u8 sSunfloraAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_1_5.lz");
static const u8 sSunfloraAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_1_6.lz");
static const u8 sSunfloraAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_1_7.lz");
static const u8 sSunfloraAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_1_8.lz");
static const u8 sSunfloraAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_2_1.lz");
static const u8 sSunfloraAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_2_2.lz");
static const u8 sSunfloraAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_2_3.lz");
static const u8 sSunfloraAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_2_4.lz");
static const u8 sSunfloraAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_2_5.lz");
static const u8 sSunfloraAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_2_6.lz");
static const u8 sSunfloraAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_2_7.lz");
static const u8 sSunfloraAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_2_8.lz");
static const u8 sSunfloraAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_3_1.lz");
static const u8 sSunfloraAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_3_2.lz");
static const u8 sSunfloraAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_3_3.lz");
static const u8 sSunfloraAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_3_4.lz");
static const u8 sSunfloraAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_3_5.lz");
static const u8 sSunfloraAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_3_6.lz");
static const u8 sSunfloraAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_3_7.lz");
static const u8 sSunfloraAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_3_8.lz");
static const u8 sSunfloraAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_4_1.lz");
static const u8 sSunfloraAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_4_2.lz");
static const u8 sSunfloraAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_4_3.lz");
static const u8 sSunfloraAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_4_4.lz");
static const u8 sSunfloraAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_4_5.lz");
static const u8 sSunfloraAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_4_6.lz");
static const u8 sSunfloraAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_4_7.lz");
static const u8 sSunfloraAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_4_8.lz");
static const u8 sSunfloraAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_8_1.lz");
static const u8 sSunfloraAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_8_2.lz");
static const u8 sSunfloraAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_8_3.lz");
static const u8 sSunfloraAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_8_4.lz");
static const u8 sSunfloraAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_8_5.lz");
static const u8 sSunfloraAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_8_6.lz");
static const u8 sSunfloraAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_8_7.lz");
static const u8 sSunfloraAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_8_8.lz");
static const u8 sSunfloraAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_9_1.lz");
static const u8 sSunfloraAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_9_2.lz");
static const u8 sSunfloraAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_9_3.lz");
static const u8 sSunfloraAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_9_4.lz");
static const u8 sSunfloraAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_9_5.lz");
static const u8 sSunfloraAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_9_6.lz");
static const u8 sSunfloraAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_9_7.lz");
static const u8 sSunfloraAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_9_8.lz");
static const u8 sSunfloraAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_11_2.lz");
static const u8 sSunfloraAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_11_3.lz");
static const u8 sSunfloraAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_11_4.lz");
static const u8 sSunfloraAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_11_6.lz");
static const u8 sSunfloraAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_11_7.lz");
static const u8 sSunfloraAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sunflora/sSunfloraAnims_11_8.lz");

static const u8 sSunfloraGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_1.4bpp.lz");
static const ax_sprite sSunfloraSprites1[] = {
	{sSunfloraGfx1, ARRAY_COUNT(sSunfloraGfx1)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_2.4bpp.lz");
static const ax_sprite sSunfloraSprites2[] = {
	{sSunfloraGfx2, ARRAY_COUNT(sSunfloraGfx2)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_3.4bpp.lz");
static const ax_sprite sSunfloraSprites3[] = {
	{sSunfloraGfx3, ARRAY_COUNT(sSunfloraGfx3)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_4.4bpp.lz");
static const ax_sprite sSunfloraSprites4[] = {
	{sSunfloraGfx4, ARRAY_COUNT(sSunfloraGfx4)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_5.4bpp.lz");
static const ax_sprite sSunfloraSprites5[] = {
	{sSunfloraGfx5, ARRAY_COUNT(sSunfloraGfx5)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_6.4bpp.lz");
static const ax_sprite sSunfloraSprites6[] = {
	{sSunfloraGfx6, ARRAY_COUNT(sSunfloraGfx6)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_7.4bpp.lz");
static const ax_sprite sSunfloraSprites7[] = {
	{sSunfloraGfx7, ARRAY_COUNT(sSunfloraGfx7)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_8.4bpp.lz");
static const ax_sprite sSunfloraSprites8[] = {
	{sSunfloraGfx8, ARRAY_COUNT(sSunfloraGfx8)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_9.4bpp.lz");
static const ax_sprite sSunfloraSprites9[] = {
	{sSunfloraGfx9, ARRAY_COUNT(sSunfloraGfx9)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_10.4bpp.lz");
static const ax_sprite sSunfloraSprites10[] = {
	{sSunfloraGfx10, ARRAY_COUNT(sSunfloraGfx10)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_11.4bpp.lz");
static const ax_sprite sSunfloraSprites11[] = {
	{sSunfloraGfx11, ARRAY_COUNT(sSunfloraGfx11)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_12.4bpp.lz");
static const ax_sprite sSunfloraSprites12[] = {
	{sSunfloraGfx12, ARRAY_COUNT(sSunfloraGfx12)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_13.4bpp.lz");
static const ax_sprite sSunfloraSprites13[] = {
	{sSunfloraGfx13, ARRAY_COUNT(sSunfloraGfx13)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_14.4bpp.lz");
static const ax_sprite sSunfloraSprites14[] = {
	{sSunfloraGfx14, ARRAY_COUNT(sSunfloraGfx14)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_15.4bpp.lz");
static const ax_sprite sSunfloraSprites15[] = {
	{sSunfloraGfx15, ARRAY_COUNT(sSunfloraGfx15)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_16.4bpp.lz");
static const u8 sSunfloraGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_16_1.4bpp.lz");
static const u8 sSunfloraGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_16_2.4bpp.lz");
static const ax_sprite sSunfloraSprites16[] = {
	{NULL, 32}, 
	{sSunfloraGfx16, ARRAY_COUNT(sSunfloraGfx16)}, 
	{NULL, 32}, 
	{sSunfloraGfx16_1, ARRAY_COUNT(sSunfloraGfx16_1)}, 
	{NULL, 32}, 
	{sSunfloraGfx16_2, ARRAY_COUNT(sSunfloraGfx16_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_17.4bpp.lz");
static const u8 sSunfloraGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_17_1.4bpp.lz");
static const u8 sSunfloraGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_17_2.4bpp.lz");
static const u8 sSunfloraGfx17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_17_3.4bpp.lz");
static const ax_sprite sSunfloraSprites17[] = {
	{NULL, 32}, 
	{sSunfloraGfx17, ARRAY_COUNT(sSunfloraGfx17)}, 
	{NULL, 32}, 
	{sSunfloraGfx17_1, ARRAY_COUNT(sSunfloraGfx17_1)}, 
	{NULL, 32}, 
	{sSunfloraGfx17_2, ARRAY_COUNT(sSunfloraGfx17_2)}, 
	{NULL, 64}, 
	{sSunfloraGfx17_3, ARRAY_COUNT(sSunfloraGfx17_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_18.4bpp.lz");
static const u8 sSunfloraGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_18_1.4bpp.lz");
static const u8 sSunfloraGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_18_2.4bpp.lz");
static const u8 sSunfloraGfx18_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_18_3.4bpp.lz");
static const ax_sprite sSunfloraSprites18[] = {
	{NULL, 32}, 
	{sSunfloraGfx18, ARRAY_COUNT(sSunfloraGfx18)}, 
	{NULL, 32}, 
	{sSunfloraGfx18_1, ARRAY_COUNT(sSunfloraGfx18_1)}, 
	{NULL, 32}, 
	{sSunfloraGfx18_2, ARRAY_COUNT(sSunfloraGfx18_2)}, 
	{NULL, 64}, 
	{sSunfloraGfx18_3, ARRAY_COUNT(sSunfloraGfx18_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_19.4bpp.lz");
static const u8 sSunfloraGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_19_1.4bpp.lz");
static const u8 sSunfloraGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_19_2.4bpp.lz");
static const u8 sSunfloraGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_19_3.4bpp.lz");
static const ax_sprite sSunfloraSprites19[] = {
	{NULL, 32}, 
	{sSunfloraGfx19, ARRAY_COUNT(sSunfloraGfx19)}, 
	{NULL, 32}, 
	{sSunfloraGfx19_1, ARRAY_COUNT(sSunfloraGfx19_1)}, 
	{NULL, 32}, 
	{sSunfloraGfx19_2, ARRAY_COUNT(sSunfloraGfx19_2)}, 
	{NULL, 32}, 
	{sSunfloraGfx19_3, ARRAY_COUNT(sSunfloraGfx19_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_20.4bpp.lz");
static const u8 sSunfloraGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_20_1.4bpp.lz");
static const u8 sSunfloraGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_20_2.4bpp.lz");
static const u8 sSunfloraGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_20_3.4bpp.lz");
static const ax_sprite sSunfloraSprites20[] = {
	{NULL, 32}, 
	{sSunfloraGfx20, ARRAY_COUNT(sSunfloraGfx20)}, 
	{NULL, 32}, 
	{sSunfloraGfx20_1, ARRAY_COUNT(sSunfloraGfx20_1)}, 
	{NULL, 32}, 
	{sSunfloraGfx20_2, ARRAY_COUNT(sSunfloraGfx20_2)}, 
	{NULL, 64}, 
	{sSunfloraGfx20_3, ARRAY_COUNT(sSunfloraGfx20_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_21.4bpp.lz");
static const u8 sSunfloraGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_21_1.4bpp.lz");
static const u8 sSunfloraGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_21_2.4bpp.lz");
static const u8 sSunfloraGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_21_3.4bpp.lz");
static const ax_sprite sSunfloraSprites21[] = {
	{NULL, 32}, 
	{sSunfloraGfx21, ARRAY_COUNT(sSunfloraGfx21)}, 
	{NULL, 32}, 
	{sSunfloraGfx21_1, ARRAY_COUNT(sSunfloraGfx21_1)}, 
	{NULL, 32}, 
	{sSunfloraGfx21_2, ARRAY_COUNT(sSunfloraGfx21_2)}, 
	{NULL, 32}, 
	{sSunfloraGfx21_3, ARRAY_COUNT(sSunfloraGfx21_3)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_22.4bpp.lz");
static const u8 sSunfloraGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_22_1.4bpp.lz");
static const u8 sSunfloraGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_22_2.4bpp.lz");
static const u8 sSunfloraGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_22_3.4bpp.lz");
static const ax_sprite sSunfloraSprites22[] = {
	{NULL, 32}, 
	{sSunfloraGfx22, ARRAY_COUNT(sSunfloraGfx22)}, 
	{NULL, 64}, 
	{sSunfloraGfx22_1, ARRAY_COUNT(sSunfloraGfx22_1)}, 
	{NULL, 32}, 
	{sSunfloraGfx22_2, ARRAY_COUNT(sSunfloraGfx22_2)}, 
	{NULL, 32}, 
	{sSunfloraGfx22_3, ARRAY_COUNT(sSunfloraGfx22_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_23.4bpp.lz");
static const u8 sSunfloraGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_23_1.4bpp.lz");
static const u8 sSunfloraGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_23_2.4bpp.lz");
static const u8 sSunfloraGfx23_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_23_3.4bpp.lz");
static const ax_sprite sSunfloraSprites23[] = {
	{NULL, 32}, 
	{sSunfloraGfx23, ARRAY_COUNT(sSunfloraGfx23)}, 
	{NULL, 64}, 
	{sSunfloraGfx23_1, ARRAY_COUNT(sSunfloraGfx23_1)}, 
	{NULL, 32}, 
	{sSunfloraGfx23_2, ARRAY_COUNT(sSunfloraGfx23_2)}, 
	{NULL, 32}, 
	{sSunfloraGfx23_3, ARRAY_COUNT(sSunfloraGfx23_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_24.4bpp.lz");
static const ax_sprite sSunfloraSprites24[] = {
	{NULL, 32}, 
	{sSunfloraGfx24, ARRAY_COUNT(sSunfloraGfx24)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_25.4bpp.lz");
static const u8 sSunfloraGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_25_1.4bpp.lz");
static const u8 sSunfloraGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_25_2.4bpp.lz");
static const u8 sSunfloraGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_25_3.4bpp.lz");
static const ax_sprite sSunfloraSprites25[] = {
	{NULL, 32}, 
	{sSunfloraGfx25, ARRAY_COUNT(sSunfloraGfx25)}, 
	{NULL, 32}, 
	{sSunfloraGfx25_1, ARRAY_COUNT(sSunfloraGfx25_1)}, 
	{NULL, 32}, 
	{sSunfloraGfx25_2, ARRAY_COUNT(sSunfloraGfx25_2)}, 
	{NULL, 32}, 
	{sSunfloraGfx25_3, ARRAY_COUNT(sSunfloraGfx25_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_26.4bpp.lz");
static const ax_sprite sSunfloraSprites26[] = {
	{NULL, 32}, 
	{sSunfloraGfx26, ARRAY_COUNT(sSunfloraGfx26)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_27.4bpp.lz");
static const u8 sSunfloraGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_27_1.4bpp.lz");
static const ax_sprite sSunfloraSprites27[] = {
	{sSunfloraGfx27, ARRAY_COUNT(sSunfloraGfx27)}, 
	{NULL, 32}, 
	{sSunfloraGfx27_1, ARRAY_COUNT(sSunfloraGfx27_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_28.4bpp.lz");
static const ax_sprite sSunfloraSprites28[] = {
	{NULL, 32}, 
	{sSunfloraGfx28, ARRAY_COUNT(sSunfloraGfx28)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_29.4bpp.lz");
static const ax_sprite sSunfloraSprites29[] = {
	{NULL, 32}, 
	{sSunfloraGfx29, ARRAY_COUNT(sSunfloraGfx29)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_30.4bpp.lz");
static const u8 sSunfloraGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_30_1.4bpp.lz");
static const ax_sprite sSunfloraSprites30[] = {
	{sSunfloraGfx30, ARRAY_COUNT(sSunfloraGfx30)}, 
	{NULL, 64}, 
	{sSunfloraGfx30_1, ARRAY_COUNT(sSunfloraGfx30_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_31.4bpp.lz");
static const ax_sprite sSunfloraSprites31[] = {
	{sSunfloraGfx31, ARRAY_COUNT(sSunfloraGfx31)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_32.4bpp.lz");
static const ax_sprite sSunfloraSprites32[] = {
	{sSunfloraGfx32, ARRAY_COUNT(sSunfloraGfx32)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_33.4bpp.lz");
static const u8 sSunfloraGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_33_1.4bpp.lz");
static const ax_sprite sSunfloraSprites33[] = {
	{sSunfloraGfx33, ARRAY_COUNT(sSunfloraGfx33)}, 
	{NULL, 32}, 
	{sSunfloraGfx33_1, ARRAY_COUNT(sSunfloraGfx33_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_34.4bpp.lz");
static const u8 sSunfloraGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_34_1.4bpp.lz");
static const u8 sSunfloraGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_34_2.4bpp.lz");
static const u8 sSunfloraGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_34_3.4bpp.lz");
static const ax_sprite sSunfloraSprites34[] = {
	{NULL, 32}, 
	{sSunfloraGfx34, ARRAY_COUNT(sSunfloraGfx34)}, 
	{NULL, 32}, 
	{sSunfloraGfx34_1, ARRAY_COUNT(sSunfloraGfx34_1)}, 
	{NULL, 32}, 
	{sSunfloraGfx34_2, ARRAY_COUNT(sSunfloraGfx34_2)}, 
	{NULL, 32}, 
	{sSunfloraGfx34_3, ARRAY_COUNT(sSunfloraGfx34_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_35.4bpp.lz");
static const u8 sSunfloraGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_35_1.4bpp.lz");
static const u8 sSunfloraGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_35_2.4bpp.lz");
static const u8 sSunfloraGfx35_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_35_3.4bpp.lz");
static const ax_sprite sSunfloraSprites35[] = {
	{sSunfloraGfx35, ARRAY_COUNT(sSunfloraGfx35)}, 
	{NULL, 32}, 
	{sSunfloraGfx35_1, ARRAY_COUNT(sSunfloraGfx35_1)}, 
	{NULL, 32}, 
	{sSunfloraGfx35_2, ARRAY_COUNT(sSunfloraGfx35_2)}, 
	{NULL, 32}, 
	{sSunfloraGfx35_3, ARRAY_COUNT(sSunfloraGfx35_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_36.4bpp.lz");
static const u8 sSunfloraGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_36_1.4bpp.lz");
static const ax_sprite sSunfloraSprites36[] = {
	{NULL, 160}, 
	{sSunfloraGfx36, ARRAY_COUNT(sSunfloraGfx36)}, 
	{NULL, 32}, 
	{sSunfloraGfx36_1, ARRAY_COUNT(sSunfloraGfx36_1)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_37.4bpp.lz");
static const u8 sSunfloraGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_37_1.4bpp.lz");
static const u8 sSunfloraGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_37_2.4bpp.lz");
static const ax_sprite sSunfloraSprites37[] = {
	{NULL, 160}, 
	{sSunfloraGfx37, ARRAY_COUNT(sSunfloraGfx37)}, 
	{NULL, 32}, 
	{sSunfloraGfx37_1, ARRAY_COUNT(sSunfloraGfx37_1)}, 
	{NULL, 32}, 
	{sSunfloraGfx37_2, ARRAY_COUNT(sSunfloraGfx37_2)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_38.4bpp.lz");
static const u8 sSunfloraGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_38_1.4bpp.lz");
static const u8 sSunfloraGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_38_2.4bpp.lz");
static const u8 sSunfloraGfx38_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_38_3.4bpp.lz");
static const ax_sprite sSunfloraSprites38[] = {
	{sSunfloraGfx38, ARRAY_COUNT(sSunfloraGfx38)}, 
	{NULL, 32}, 
	{sSunfloraGfx38_1, ARRAY_COUNT(sSunfloraGfx38_1)}, 
	{NULL, 64}, 
	{sSunfloraGfx38_2, ARRAY_COUNT(sSunfloraGfx38_2)}, 
	{NULL, 64}, 
	{sSunfloraGfx38_3, ARRAY_COUNT(sSunfloraGfx38_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_39.4bpp.lz");
static const u8 sSunfloraGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_39_1.4bpp.lz");
static const u8 sSunfloraGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_39_2.4bpp.lz");
static const ax_sprite sSunfloraSprites39[] = {
	{NULL, 128}, 
	{sSunfloraGfx39, ARRAY_COUNT(sSunfloraGfx39)}, 
	{NULL, 32}, 
	{sSunfloraGfx39_1, ARRAY_COUNT(sSunfloraGfx39_1)}, 
	{NULL, 32}, 
	{sSunfloraGfx39_2, ARRAY_COUNT(sSunfloraGfx39_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_40.4bpp.lz");
static const ax_sprite sSunfloraSprites40[] = {
	{NULL, 128}, 
	{sSunfloraGfx40, ARRAY_COUNT(sSunfloraGfx40)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_41.4bpp.lz");
static const u8 sSunfloraGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_41_1.4bpp.lz");
static const u8 sSunfloraGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_41_2.4bpp.lz");
static const u8 sSunfloraGfx41_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_41_3.4bpp.lz");
static const ax_sprite sSunfloraSprites41[] = {
	{sSunfloraGfx41, ARRAY_COUNT(sSunfloraGfx41)}, 
	{NULL, 32}, 
	{sSunfloraGfx41_1, ARRAY_COUNT(sSunfloraGfx41_1)}, 
	{NULL, 64}, 
	{sSunfloraGfx41_2, ARRAY_COUNT(sSunfloraGfx41_2)}, 
	{NULL, 64}, 
	{sSunfloraGfx41_3, ARRAY_COUNT(sSunfloraGfx41_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_42.4bpp.lz");
static const u8 sSunfloraGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_42_1.4bpp.lz");
static const u8 sSunfloraGfx42_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_42_2.4bpp.lz");
static const ax_sprite sSunfloraSprites42[] = {
	{NULL, 128}, 
	{sSunfloraGfx42, ARRAY_COUNT(sSunfloraGfx42)}, 
	{NULL, 32}, 
	{sSunfloraGfx42_1, ARRAY_COUNT(sSunfloraGfx42_1)}, 
	{NULL, 32}, 
	{sSunfloraGfx42_2, ARRAY_COUNT(sSunfloraGfx42_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_43.4bpp.lz");
static const u8 sSunfloraGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_43_1.4bpp.lz");
static const u8 sSunfloraGfx43_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_43_2.4bpp.lz");
static const ax_sprite sSunfloraSprites43[] = {
	{NULL, 128}, 
	{sSunfloraGfx43, ARRAY_COUNT(sSunfloraGfx43)}, 
	{NULL, 32}, 
	{sSunfloraGfx43_1, ARRAY_COUNT(sSunfloraGfx43_1)}, 
	{NULL, 32}, 
	{sSunfloraGfx43_2, ARRAY_COUNT(sSunfloraGfx43_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_44.4bpp.lz");
static const u8 sSunfloraGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_44_1.4bpp.lz");
static const u8 sSunfloraGfx44_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_44_2.4bpp.lz");
static const u8 sSunfloraGfx44_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_44_3.4bpp.lz");
static const ax_sprite sSunfloraSprites44[] = {
	{sSunfloraGfx44, ARRAY_COUNT(sSunfloraGfx44)}, 
	{NULL, 32}, 
	{sSunfloraGfx44_1, ARRAY_COUNT(sSunfloraGfx44_1)}, 
	{NULL, 64}, 
	{sSunfloraGfx44_2, ARRAY_COUNT(sSunfloraGfx44_2)}, 
	{NULL, 64}, 
	{sSunfloraGfx44_3, ARRAY_COUNT(sSunfloraGfx44_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_45.4bpp.lz");
static const u8 sSunfloraGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_45_1.4bpp.lz");
static const u8 sSunfloraGfx45_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_45_2.4bpp.lz");
static const u8 sSunfloraGfx45_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_45_3.4bpp.lz");
static const ax_sprite sSunfloraSprites45[] = {
	{sSunfloraGfx45, ARRAY_COUNT(sSunfloraGfx45)}, 
	{NULL, 64}, 
	{sSunfloraGfx45_1, ARRAY_COUNT(sSunfloraGfx45_1)}, 
	{NULL, 32}, 
	{sSunfloraGfx45_2, ARRAY_COUNT(sSunfloraGfx45_2)}, 
	{NULL, 64}, 
	{sSunfloraGfx45_3, ARRAY_COUNT(sSunfloraGfx45_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_46.4bpp.lz");
static const u8 sSunfloraGfx46_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_46_1.4bpp.lz");
static const u8 sSunfloraGfx46_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_46_2.4bpp.lz");
static const u8 sSunfloraGfx46_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_46_3.4bpp.lz");
static const ax_sprite sSunfloraSprites46[] = {
	{sSunfloraGfx46, ARRAY_COUNT(sSunfloraGfx46)}, 
	{NULL, 64}, 
	{sSunfloraGfx46_1, ARRAY_COUNT(sSunfloraGfx46_1)}, 
	{NULL, 64}, 
	{sSunfloraGfx46_2, ARRAY_COUNT(sSunfloraGfx46_2)}, 
	{NULL, 32}, 
	{sSunfloraGfx46_3, ARRAY_COUNT(sSunfloraGfx46_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_47.4bpp.lz");
static const u8 sSunfloraGfx47_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_47_1.4bpp.lz");
static const u8 sSunfloraGfx47_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_47_2.4bpp.lz");
static const u8 sSunfloraGfx47_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_47_3.4bpp.lz");
static const ax_sprite sSunfloraSprites47[] = {
	{sSunfloraGfx47, ARRAY_COUNT(sSunfloraGfx47)}, 
	{NULL, 32}, 
	{sSunfloraGfx47_1, ARRAY_COUNT(sSunfloraGfx47_1)}, 
	{NULL, 32}, 
	{sSunfloraGfx47_2, ARRAY_COUNT(sSunfloraGfx47_2)}, 
	{NULL, 64}, 
	{sSunfloraGfx47_3, ARRAY_COUNT(sSunfloraGfx47_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_48.4bpp.lz");
static const u8 sSunfloraGfx48_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_48_1.4bpp.lz");
static const u8 sSunfloraGfx48_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_48_2.4bpp.lz");
static const u8 sSunfloraGfx48_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_48_3.4bpp.lz");
static const ax_sprite sSunfloraSprites48[] = {
	{NULL, 32}, 
	{sSunfloraGfx48, ARRAY_COUNT(sSunfloraGfx48)}, 
	{NULL, 64}, 
	{sSunfloraGfx48_1, ARRAY_COUNT(sSunfloraGfx48_1)}, 
	{NULL, 32}, 
	{sSunfloraGfx48_2, ARRAY_COUNT(sSunfloraGfx48_2)}, 
	{NULL, 64}, 
	{sSunfloraGfx48_3, ARRAY_COUNT(sSunfloraGfx48_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_49.4bpp.lz");
static const u8 sSunfloraGfx49_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_49_1.4bpp.lz");
static const u8 sSunfloraGfx49_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_49_2.4bpp.lz");
static const u8 sSunfloraGfx49_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_49_3.4bpp.lz");
static const ax_sprite sSunfloraSprites49[] = {
	{NULL, 32}, 
	{sSunfloraGfx49, ARRAY_COUNT(sSunfloraGfx49)}, 
	{NULL, 64}, 
	{sSunfloraGfx49_1, ARRAY_COUNT(sSunfloraGfx49_1)}, 
	{NULL, 32}, 
	{sSunfloraGfx49_2, ARRAY_COUNT(sSunfloraGfx49_2)}, 
	{NULL, 32}, 
	{sSunfloraGfx49_3, ARRAY_COUNT(sSunfloraGfx49_3)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_50.4bpp.lz");
static const ax_sprite sSunfloraSprites50[] = {
	{sSunfloraGfx50, ARRAY_COUNT(sSunfloraGfx50)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_51.4bpp.lz");
static const ax_sprite sSunfloraSprites51[] = {
	{sSunfloraGfx51, ARRAY_COUNT(sSunfloraGfx51)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_52.4bpp.lz");
static const ax_sprite sSunfloraSprites52[] = {
	{sSunfloraGfx52, ARRAY_COUNT(sSunfloraGfx52)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_53.4bpp.lz");
static const ax_sprite sSunfloraSprites53[] = {
	{sSunfloraGfx53, ARRAY_COUNT(sSunfloraGfx53)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_54.4bpp.lz");
static const ax_sprite sSunfloraSprites54[] = {
	{sSunfloraGfx54, ARRAY_COUNT(sSunfloraGfx54)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_55.4bpp.lz");
static const ax_sprite sSunfloraSprites55[] = {
	{sSunfloraGfx55, ARRAY_COUNT(sSunfloraGfx55)}, 
	{NULL, 0}
};
static const u8 sSunfloraGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sunflora/sprite_56.4bpp.lz");
static const ax_sprite sSunfloraSprites56[] = {
	{sSunfloraGfx56, ARRAY_COUNT(sSunfloraGfx56)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesSunflora[] = {
	sSunfloraPose1,
	sSunfloraPose2,
	sSunfloraPose3,
	sSunfloraPose4,
	sSunfloraPose5,
	sSunfloraPose6,
	sSunfloraPose7,
	sSunfloraPose8,
	sSunfloraPose9,
	sSunfloraPose10,
	sSunfloraPose11,
	sSunfloraPose12,
	sSunfloraPose13,
	sSunfloraPose14,
	sSunfloraPose15,
	sSunfloraPose16,
	sSunfloraPose17,
	sSunfloraPose18,
	sSunfloraPose19,
	sSunfloraPose20,
	sSunfloraPose21,
	sSunfloraPose22,
	sSunfloraPose23,
	sSunfloraPose24,
	sSunfloraPose1,
	sSunfloraPose2,
	sSunfloraPose3,
	sSunfloraPose28,
	sSunfloraPose4,
	sSunfloraPose5,
	sSunfloraPose6,
	sSunfloraPose32,
	sSunfloraPose7,
	sSunfloraPose8,
	sSunfloraPose9,
	sSunfloraPose36,
	sSunfloraPose10,
	sSunfloraPose11,
	sSunfloraPose12,
	sSunfloraPose40,
	sSunfloraPose13,
	sSunfloraPose14,
	sSunfloraPose15,
	sSunfloraPose44,
	sSunfloraPose16,
	sSunfloraPose17,
	sSunfloraPose18,
	sSunfloraPose48,
	sSunfloraPose19,
	sSunfloraPose20,
	sSunfloraPose21,
	sSunfloraPose52,
	sSunfloraPose22,
	sSunfloraPose23,
	sSunfloraPose24,
	sSunfloraPose56,
	sSunfloraPose1,
	sSunfloraPose2,
	sSunfloraPose3,
	sSunfloraPose60,
	sSunfloraPose61,
	sSunfloraPose62,
	sSunfloraPose28,
	sSunfloraPose4,
	sSunfloraPose6,
	sSunfloraPose5,
	sSunfloraPose67,
	sSunfloraPose32,
	sSunfloraPose69,
	sSunfloraPose70,
	sSunfloraPose7,
	sSunfloraPose72,
	sSunfloraPose8,
	sSunfloraPose74,
	sSunfloraPose36,
	sSunfloraPose76,
	sSunfloraPose77,
	sSunfloraPose10,
	sSunfloraPose12,
	sSunfloraPose11,
	sSunfloraPose81,
	sSunfloraPose40,
	sSunfloraPose83,
	sSunfloraPose84,
	sSunfloraPose13,
	sSunfloraPose14,
	sSunfloraPose15,
	sSunfloraPose88,
	sSunfloraPose44,
	sSunfloraPose90,
	sSunfloraPose91,
	sSunfloraPose16,
	sSunfloraPose17,
	sSunfloraPose18,
	sSunfloraPose95,
	sSunfloraPose48,
	sSunfloraPose97,
	sSunfloraPose98,
	sSunfloraPose19,
	sSunfloraPose20,
	sSunfloraPose101,
	sSunfloraPose102,
	sSunfloraPose52,
	sSunfloraPose104,
	sSunfloraPose105,
	sSunfloraPose22,
	sSunfloraPose23,
	sSunfloraPose24,
	sSunfloraPose109,
	sSunfloraPose56,
	sSunfloraPose111,
	sSunfloraPose112,
	sSunfloraPose1,
	sSunfloraPose114,
	sSunfloraPose115,
	sSunfloraPose116,
	sSunfloraPose4,
	sSunfloraPose118,
	sSunfloraPose119,
	sSunfloraPose120,
	sSunfloraPose7,
	sSunfloraPose122,
	sSunfloraPose123,
	sSunfloraPose124,
	sSunfloraPose10,
	sSunfloraPose126,
	sSunfloraPose127,
	sSunfloraPose128,
	sSunfloraPose13,
	sSunfloraPose130,
	sSunfloraPose131,
	sSunfloraPose132,
	sSunfloraPose16,
	sSunfloraPose134,
	sSunfloraPose135,
	sSunfloraPose136,
	sSunfloraPose19,
	sSunfloraPose138,
	sSunfloraPose139,
	sSunfloraPose140,
	sSunfloraPose22,
	sSunfloraPose142,
	sSunfloraPose143,
	sSunfloraPose144,
	sSunfloraPose1,
	sSunfloraPose22,
	sSunfloraPose19,
	sSunfloraPose16,
	sSunfloraPose13,
	sSunfloraPose10,
	sSunfloraPose7,
	sSunfloraPose4,
	sSunfloraPose153,
	sSunfloraPose154,
	sSunfloraPose155,
	sSunfloraPose156,
	sSunfloraPose157,
	sSunfloraPose158,
	sSunfloraPose159,
	sSunfloraPose160,
	sSunfloraPose161,
	sSunfloraPose162,
	sSunfloraPose1,
	sSunfloraPose164,
	sSunfloraPose165,
	sSunfloraPose4,
	sSunfloraPose167,
	sSunfloraPose168,
	sSunfloraPose7,
	sSunfloraPose170,
	sSunfloraPose72,
	sSunfloraPose10,
	sSunfloraPose11,
	sSunfloraPose174,
	sSunfloraPose13,
	sSunfloraPose14,
	sSunfloraPose15,
	sSunfloraPose16,
	sSunfloraPose17,
	sSunfloraPose180,
	sSunfloraPose19,
	sSunfloraPose182,
	sSunfloraPose101,
	sSunfloraPose22,
	sSunfloraPose185,
	sSunfloraPose186,
	sSunfloraPose187,
	sSunfloraPose188,
	sSunfloraPose189,
	sSunfloraPose190,
	sSunfloraPose191,
	sSunfloraPose192,
	sSunfloraPose193,
	sSunfloraPose194,
	sSunfloraPose28,
	sSunfloraPose196,
	sSunfloraPose197,
	sSunfloraPose198,
	sSunfloraPose199,
	sSunfloraPose200,
	sSunfloraPose201,
	sSunfloraPose56,
	sSunfloraPose1,
	sSunfloraPose114,
	sSunfloraPose205,
	sSunfloraPose4,
	sSunfloraPose118,
	sSunfloraPose119,
	sSunfloraPose7,
	sSunfloraPose122,
	sSunfloraPose123,
	sSunfloraPose10,
	sSunfloraPose126,
	sSunfloraPose214,
	sSunfloraPose13,
	sSunfloraPose130,
	sSunfloraPose131,
	sSunfloraPose16,
	sSunfloraPose134,
	sSunfloraPose220,
	sSunfloraPose19,
	sSunfloraPose138,
	sSunfloraPose139,
	sSunfloraPose22,
	sSunfloraPose142,
	sSunfloraPose143,
	sSunfloraPose114,
	sSunfloraPose228,
	sSunfloraPose229,
	sSunfloraPose134,
	sSunfloraPose231,
	sSunfloraPose126,
	sSunfloraPose233,
	sSunfloraPose118,
	sSunfloraPose1,
	sSunfloraPose22,
	sSunfloraPose19,
	sSunfloraPose16,
	sSunfloraPose13,
	sSunfloraPose10,
	sSunfloraPose7,
	sSunfloraPose4,
};

static const struct PositionSets sAxPositionsSunflora[] = {
	[0] = { .set = { {-1, -12}, {-9, -6}, {8, -6}, {0, -9} } },
	[1] = { .set = { {2, -13}, {-6, -10}, {8, -4}, {2, -9} } },
	[2] = { .set = { {-4, -13}, {-10, -4}, {5, -10}, {-3, -9} } },
	[3] = { .set = { {5, -12}, {4, -8}, {-6, -5}, {0, -9} } },
	[4] = { .set = { {3, -13}, {3, -9}, {-7, -4}, {-1, -10} } },
	[5] = { .set = { {7, -13}, {6, -6}, {-5, -10}, {2, -9} } },
	[6] = { .set = { {8, -14}, {-3, -10}, {-3, -4}, {-1, -8} } },
	[7] = { .set = { {7, -11}, {1, -11}, {-6, -7}, {-2, -8} } },
	[8] = { .set = { {8, -16}, {-6, -8}, {1, -11}, {-2, -10} } },
	[9] = { .set = { {4, -14}, {-7, -10}, {5, -5}, {-1, -8} } },
	[10] = { .set = { {6, -13}, {-5, -13}, {5, -3}, {-1, -8} } },
	[11] = { .set = { {1, -14}, {-8, -6}, {5, -10}, {-3, -8} } },
	[12] = { .set = { {0, -15}, {8, -8}, {-9, -8}, {-1, -6} } },
	[13] = { .set = { {-3, -14}, {9, -10}, {-7, -5}, {0, -8} } },
	[14] = { .set = { {2, -14}, {7, -5}, {-9, -10}, {-1, -8} } },
	[15] = { .set = { {-5, -14}, {6, -10}, {-6, -5}, {0, -8} } },
	[16] = { .set = { {-7, -13}, {4, -13}, {-6, -3}, {0, -8} } },
	[17] = { .set = { {-2, -14}, {7, -6}, {-6, -10}, {2, -8} } },
	[18] = { .set = { {-9, -14}, {2, -10}, {2, -4}, {0, -8} } },
	[19] = { .set = { {-8, -11}, {-2, -11}, {5, -7}, {1, -8} } },
	[20] = { .set = { {-9, -16}, {5, -8}, {-2, -11}, {1, -10} } },
	[21] = { .set = { {-6, -12}, {-5, -8}, {5, -5}, {-1, -9} } },
	[22] = { .set = { {-4, -13}, {-4, -9}, {6, -4}, {0, -10} } },
	[23] = { .set = { {-8, -13}, {-7, -6}, {4, -10}, {-3, -9} } },
	[24] = { .set = { {-1, -12}, {-9, -6}, {8, -6}, {0, -9} } },
	[25] = { .set = { {2, -13}, {-6, -10}, {8, -4}, {2, -9} } },
	[26] = { .set = { {-4, -13}, {-10, -4}, {5, -10}, {-3, -9} } },
	[27] = { .set = { {-2, -11}, {-7, -7}, {2, -1}, {0, -7} } },
	[28] = { .set = { {5, -12}, {4, -8}, {-6, -5}, {0, -9} } },
	[29] = { .set = { {3, -13}, {3, -9}, {-7, -4}, {-1, -10} } },
	[30] = { .set = { {7, -13}, {6, -6}, {-5, -10}, {2, -9} } },
	[31] = { .set = { {5, -12}, {2, -8}, {3, -1}, {1, -5} } },
	[32] = { .set = { {8, -14}, {-3, -10}, {-3, -4}, {-1, -8} } },
	[33] = { .set = { {7, -11}, {1, -11}, {-6, -7}, {-2, -8} } },
	[34] = { .set = { {8, -16}, {-6, -8}, {1, -11}, {-2, -10} } },
	[35] = { .set = { {8, -16}, {-4, -13}, {5, -5}, {-1, -8} } },
	[36] = { .set = { {4, -14}, {-7, -10}, {5, -5}, {-1, -8} } },
	[37] = { .set = { {6, -13}, {-5, -13}, {5, -3}, {-1, -8} } },
	[38] = { .set = { {1, -14}, {-8, -6}, {5, -10}, {-3, -8} } },
	[39] = { .set = { {5, -14}, {-6, -14}, {1, -6}, {0, -8} } },
	[40] = { .set = { {0, -15}, {8, -8}, {-9, -8}, {-1, -6} } },
	[41] = { .set = { {-3, -14}, {9, -10}, {-7, -5}, {0, -8} } },
	[42] = { .set = { {2, -14}, {7, -5}, {-9, -10}, {-1, -8} } },
	[43] = { .set = { {1, -15}, {-4, -5}, {-6, -11}, {0, -7} } },
	[44] = { .set = { {-5, -14}, {6, -10}, {-6, -5}, {0, -8} } },
	[45] = { .set = { {-7, -13}, {4, -13}, {-6, -3}, {0, -8} } },
	[46] = { .set = { {-2, -14}, {7, -6}, {-6, -10}, {2, -8} } },
	[47] = { .set = { {-2, -15}, {0, -7}, {-7, -12}, {0, -9} } },
	[48] = { .set = { {-9, -14}, {2, -10}, {2, -4}, {0, -8} } },
	[49] = { .set = { {-8, -11}, {-2, -11}, {5, -7}, {1, -8} } },
	[50] = { .set = { {-9, -16}, {5, -8}, {-2, -11}, {1, -10} } },
	[51] = { .set = { {-8, -14}, {-7, -6}, {5, -6}, {-1, -7} } },
	[52] = { .set = { {-6, -12}, {-5, -8}, {5, -5}, {-1, -9} } },
	[53] = { .set = { {-4, -13}, {-4, -9}, {6, -4}, {0, -10} } },
	[54] = { .set = { {-8, -13}, {-7, -6}, {4, -10}, {-3, -9} } },
	[55] = { .set = { {-4, -12}, {-4, -2}, {7, -8}, {0, -7} } },
	[56] = { .set = { {-1, -12}, {-9, -6}, {8, -6}, {0, -9} } },
	[57] = { .set = { {2, -13}, {-6, -10}, {8, -4}, {2, -9} } },
	[58] = { .set = { {-4, -13}, {-10, -4}, {5, -10}, {-3, -9} } },
	[59] = { .set = { {1, -11}, {6, -7}, {-3, -1}, {-1, -7} } },
	[60] = { .set = { {1, -11}, {-3, -1}, {7, -8}, {0, -7} } },
	[61] = { .set = { {-2, -11}, {2, -1}, {-8, -8}, {-1, -7} } },
	[62] = { .set = { {-2, -11}, {-7, -7}, {2, -1}, {0, -7} } },
	[63] = { .set = { {5, -12}, {4, -8}, {-6, -5}, {0, -9} } },
	[64] = { .set = { {7, -13}, {6, -6}, {-5, -10}, {2, -9} } },
	[65] = { .set = { {3, -13}, {3, -9}, {-7, -4}, {-1, -10} } },
	[66] = { .set = { {5, -12}, {2, -8}, {3, -1}, {1, -5} } },
	[67] = { .set = { {5, -12}, {2, -8}, {3, -1}, {1, -5} } },
	[68] = { .set = { {3, -12}, {3, -2}, {-8, -8}, {-1, -7} } },
	[69] = { .set = { {3, -12}, {3, -2}, {-8, -8}, {-1, -7} } },
	[70] = { .set = { {8, -14}, {-3, -10}, {-3, -4}, {-1, -8} } },
	[71] = { .set = { {8, -15}, {-6, -7}, {1, -10}, {-2, -9} } },
	[72] = { .set = { {7, -11}, {1, -11}, {-6, -7}, {-2, -8} } },
	[73] = { .set = { {8, -16}, {-4, -13}, {5, -5}, {-1, -8} } },
	[74] = { .set = { {8, -16}, {-4, -13}, {5, -5}, {-1, -8} } },
	[75] = { .set = { {7, -14}, {6, -6}, {-6, -6}, {0, -7} } },
	[76] = { .set = { {7, -14}, {6, -6}, {-6, -6}, {0, -7} } },
	[77] = { .set = { {4, -14}, {-7, -10}, {5, -5}, {-1, -8} } },
	[78] = { .set = { {1, -14}, {-8, -6}, {5, -10}, {-3, -8} } },
	[79] = { .set = { {6, -13}, {-5, -13}, {5, -3}, {-1, -8} } },
	[80] = { .set = { {5, -14}, {-6, -14}, {1, -6}, {0, -8} } },
	[81] = { .set = { {5, -14}, {-6, -14}, {1, -6}, {0, -8} } },
	[82] = { .set = { {1, -15}, {-1, -7}, {6, -12}, {-1, -9} } },
	[83] = { .set = { {1, -15}, {-1, -7}, {6, -12}, {-1, -9} } },
	[84] = { .set = { {0, -15}, {8, -8}, {-9, -8}, {-1, -6} } },
	[85] = { .set = { {-3, -14}, {9, -10}, {-7, -5}, {0, -8} } },
	[86] = { .set = { {2, -14}, {7, -5}, {-9, -10}, {-1, -8} } },
	[87] = { .set = { {1, -15}, {-4, -5}, {-6, -11}, {0, -7} } },
	[88] = { .set = { {1, -15}, {-4, -5}, {-6, -11}, {0, -7} } },
	[89] = { .set = { {-3, -15}, {6, -12}, {3, -5}, {-1, -7} } },
	[90] = { .set = { {-3, -15}, {6, -12}, {3, -5}, {-1, -7} } },
	[91] = { .set = { {-5, -14}, {6, -10}, {-6, -5}, {0, -8} } },
	[92] = { .set = { {-7, -13}, {4, -13}, {-6, -3}, {0, -8} } },
	[93] = { .set = { {-2, -14}, {7, -6}, {-6, -10}, {2, -8} } },
	[94] = { .set = { {-2, -15}, {0, -7}, {-7, -12}, {0, -9} } },
	[95] = { .set = { {-2, -15}, {0, -7}, {-7, -12}, {0, -9} } },
	[96] = { .set = { {-6, -14}, {5, -14}, {-2, -6}, {-1, -8} } },
	[97] = { .set = { {-6, -14}, {5, -14}, {-2, -6}, {-1, -8} } },
	[98] = { .set = { {-9, -14}, {2, -10}, {2, -4}, {0, -8} } },
	[99] = { .set = { {-8, -11}, {-2, -11}, {5, -7}, {1, -8} } },
	[100] = { .set = { {-9, -15}, {5, -7}, {-2, -10}, {1, -9} } },
	[101] = { .set = { {-8, -14}, {-7, -6}, {5, -6}, {-1, -7} } },
	[102] = { .set = { {-8, -14}, {-7, -6}, {5, -6}, {-1, -7} } },
	[103] = { .set = { {-9, -16}, {3, -13}, {-6, -5}, {0, -8} } },
	[104] = { .set = { {-9, -16}, {3, -13}, {-6, -5}, {0, -8} } },
	[105] = { .set = { {-6, -12}, {-5, -8}, {5, -5}, {-1, -9} } },
	[106] = { .set = { {-4, -13}, {-4, -9}, {6, -4}, {0, -10} } },
	[107] = { .set = { {-8, -13}, {-7, -6}, {4, -10}, {-3, -9} } },
	[108] = { .set = { {-4, -12}, {-4, -2}, {7, -8}, {0, -7} } },
	[109] = { .set = { {-4, -12}, {-4, -2}, {7, -8}, {0, -7} } },
	[110] = { .set = { {-6, -12}, {-3, -8}, {-4, -1}, {-2, -5} } },
	[111] = { .set = { {-6, -12}, {-3, -8}, {-4, -1}, {-2, -5} } },
	[112] = { .set = { {-1, -12}, {-9, -6}, {8, -6}, {0, -9} } },
	[113] = { .set = { {0, -23}, {-7, -12}, {6, -12}, {-1, -10} } },
	[114] = { .set = { {1, 0}, {-8, -9}, {8, -10}, {1, -9} } },
	[115] = { .set = { {0, 0}, {-7, -15}, {7, -15}, {1, -10} } },
	[116] = { .set = { {5, -12}, {4, -8}, {-6, -5}, {0, -9} } },
	[117] = { .set = { {1, -24}, {5, -12}, {-2, -11}, {1, -8} } },
	[118] = { .set = { {9, -1}, {3, -11}, {-6, -5}, {-1, -9} } },
	[119] = { .set = { {9, -1}, {-1, -16}, {-10, -12}, {-1, -9} } },
	[120] = { .set = { {8, -14}, {-3, -10}, {-3, -4}, {-1, -8} } },
	[121] = { .set = { {1, -25}, {3, -14}, {2, -11}, {0, -9} } },
	[122] = { .set = { {13, -7}, {1, -12}, {0, -4}, {-2, -7} } },
	[123] = { .set = { {13, -5}, {-6, -11}, {-7, -6}, {-2, -7} } },
	[124] = { .set = { {4, -14}, {-7, -10}, {5, -5}, {-1, -8} } },
	[125] = { .set = { {1, -25}, {-5, -14}, {4, -11}, {-1, -8} } },
	[126] = { .set = { {6, -10}, {-5, -10}, {3, -4}, {-2, -6} } },
	[127] = { .set = { {7, -10}, {-10, -5}, {-2, 1}, {-3, -6} } },
	[128] = { .set = { {0, -15}, {8, -8}, {-9, -8}, {-1, -6} } },
	[129] = { .set = { {-1, -26}, {5, -14}, {-6, -14}, {-1, -10} } },
	[130] = { .set = { {0, -13}, {4, -11}, {-5, -11}, {0, -8} } },
	[131] = { .set = { {-1, -13}, {6, -5}, {-7, -5}, {-1, -8} } },
	[132] = { .set = { {-5, -14}, {6, -10}, {-6, -5}, {0, -8} } },
	[133] = { .set = { {-2, -25}, {4, -14}, {-5, -11}, {0, -8} } },
	[134] = { .set = { {-7, -10}, {4, -10}, {-4, -4}, {1, -6} } },
	[135] = { .set = { {-8, -10}, {9, -5}, {1, 1}, {2, -6} } },
	[136] = { .set = { {-9, -14}, {2, -10}, {2, -4}, {0, -8} } },
	[137] = { .set = { {-2, -25}, {-4, -14}, {-3, -11}, {-1, -9} } },
	[138] = { .set = { {-14, -7}, {-2, -12}, {-1, -4}, {1, -7} } },
	[139] = { .set = { {-14, -5}, {5, -11}, {6, -6}, {1, -7} } },
	[140] = { .set = { {-6, -12}, {-5, -8}, {5, -5}, {-1, -9} } },
	[141] = { .set = { {-2, -24}, {-6, -12}, {1, -11}, {-2, -8} } },
	[142] = { .set = { {-10, -1}, {-4, -11}, {5, -5}, {0, -9} } },
	[143] = { .set = { {-10, -1}, {0, -16}, {9, -12}, {0, -9} } },
	[144] = { .set = { {-1, -12}, {-9, -6}, {8, -6}, {0, -9} } },
	[145] = { .set = { {-6, -12}, {-5, -8}, {5, -5}, {-1, -9} } },
	[146] = { .set = { {-9, -14}, {2, -10}, {2, -4}, {0, -8} } },
	[147] = { .set = { {-5, -14}, {6, -10}, {-6, -5}, {0, -8} } },
	[148] = { .set = { {0, -15}, {8, -8}, {-9, -8}, {-1, -6} } },
	[149] = { .set = { {4, -14}, {-7, -10}, {5, -5}, {-1, -8} } },
	[150] = { .set = { {8, -14}, {-3, -10}, {-3, -4}, {-1, -8} } },
	[151] = { .set = { {5, -12}, {4, -8}, {-6, -5}, {0, -9} } },
	[152] = { .set = { {-1, -10}, {-9, -5}, {8, -5}, {0, -7} } },
	[153] = { .set = { {-1, -9}, {-10, -4}, {9, -4}, {-1, -6} } },
	[154] = { .set = { {1, -13}, {8, -7}, {-7, -7}, {0, -7} } },
	[155] = { .set = { {-8, -8}, {-7, -6}, {5, -11}, {-3, -10} } },
	[156] = { .set = { {-15, -16}, {1, -13}, {-3, -7}, {-1, -9} } },
	[157] = { .set = { {-9, -13}, {-1, -14}, {7, -12}, {3, -9} } },
	[158] = { .set = { {-1, -14}, {8, -9}, {-9, -8}, {0, -7} } },
	[159] = { .set = { {8, -13}, {0, -14}, {-8, -12}, {-4, -9} } },
	[160] = { .set = { {14, -16}, {-2, -13}, {2, -7}, {0, -9} } },
	[161] = { .set = { {7, -8}, {6, -6}, {-6, -11}, {2, -10} } },
	[162] = { .set = { {-1, -12}, {-9, -6}, {8, -6}, {0, -9} } },
	[163] = { .set = { {0, -13}, {-8, -10}, {6, -4}, {0, -9} } },
	[164] = { .set = { {-2, -13}, {-8, -4}, {7, -10}, {-1, -9} } },
	[165] = { .set = { {5, -12}, {4, -8}, {-6, -5}, {0, -9} } },
	[166] = { .set = { {4, -13}, {4, -9}, {-6, -4}, {0, -10} } },
	[167] = { .set = { {6, -13}, {5, -6}, {-6, -10}, {1, -9} } },
	[168] = { .set = { {8, -14}, {-3, -10}, {-3, -4}, {-1, -8} } },
	[169] = { .set = { {8, -12}, {2, -12}, {-5, -8}, {-1, -9} } },
	[170] = { .set = { {8, -15}, {-6, -7}, {1, -10}, {-2, -9} } },
	[171] = { .set = { {4, -14}, {-7, -10}, {5, -5}, {-1, -8} } },
	[172] = { .set = { {6, -13}, {-5, -13}, {5, -3}, {-1, -8} } },
	[173] = { .set = { {2, -14}, {-7, -6}, {6, -10}, {-2, -8} } },
	[174] = { .set = { {0, -15}, {8, -8}, {-9, -8}, {-1, -6} } },
	[175] = { .set = { {-3, -14}, {9, -10}, {-7, -5}, {0, -8} } },
	[176] = { .set = { {2, -14}, {7, -5}, {-9, -10}, {-1, -8} } },
	[177] = { .set = { {-5, -14}, {6, -10}, {-6, -5}, {0, -8} } },
	[178] = { .set = { {-7, -13}, {4, -13}, {-6, -3}, {0, -8} } },
	[179] = { .set = { {-4, -14}, {5, -6}, {-8, -10}, {0, -8} } },
	[180] = { .set = { {-9, -14}, {2, -10}, {2, -4}, {0, -8} } },
	[181] = { .set = { {-9, -12}, {-3, -12}, {4, -8}, {0, -9} } },
	[182] = { .set = { {-9, -15}, {5, -7}, {-2, -10}, {1, -9} } },
	[183] = { .set = { {-6, -12}, {-5, -8}, {5, -5}, {-1, -9} } },
	[184] = { .set = { {-5, -13}, {-5, -9}, {5, -4}, {-1, -10} } },
	[185] = { .set = { {-6, -13}, {-5, -6}, {6, -10}, {-1, -9} } },
	[186] = { .set = { {0, 4}, {-7, -11}, {7, -11}, {1, -6} } },
	[187] = { .set = { {-9, 1}, {1, -14}, {10, -10}, {1, -7} } },
	[188] = { .set = { {-13, -3}, {6, -9}, {7, -4}, {2, -5} } },
	[189] = { .set = { {-10, -10}, {7, -5}, {-1, 1}, {0, -6} } },
	[190] = { .set = { {-1, -9}, {6, -1}, {-7, -1}, {-1, -4} } },
	[191] = { .set = { {9, -10}, {-8, -5}, {0, 1}, {-1, -6} } },
	[192] = { .set = { {12, -3}, {-7, -9}, {-8, -4}, {-3, -5} } },
	[193] = { .set = { {8, 1}, {-2, -14}, {-11, -10}, {-2, -7} } },
	[194] = { .set = { {-2, -11}, {-7, -7}, {2, -1}, {0, -7} } },
	[195] = { .set = { {4, -13}, {1, -9}, {2, -2}, {0, -6} } },
	[196] = { .set = { {7, -15}, {-5, -12}, {4, -4}, {-2, -7} } },
	[197] = { .set = { {4, -13}, {-7, -13}, {0, -5}, {-1, -7} } },
	[198] = { .set = { {1, -14}, {-4, -4}, {-6, -10}, {0, -6} } },
	[199] = { .set = { {-3, -14}, {-1, -6}, {-8, -11}, {-1, -8} } },
	[200] = { .set = { {-8, -13}, {-7, -5}, {5, -5}, {-1, -6} } },
	[201] = { .set = { {-4, -12}, {-4, -2}, {7, -8}, {0, -7} } },
	[202] = { .set = { {-1, -12}, {-9, -6}, {8, -6}, {0, -9} } },
	[203] = { .set = { {0, -23}, {-7, -12}, {6, -12}, {-1, -10} } },
	[204] = { .set = { {0, 0}, {-9, -9}, {7, -10}, {0, -9} } },
	[205] = { .set = { {5, -12}, {4, -8}, {-6, -5}, {0, -9} } },
	[206] = { .set = { {1, -24}, {5, -12}, {-2, -11}, {1, -8} } },
	[207] = { .set = { {9, -1}, {3, -11}, {-6, -5}, {-1, -9} } },
	[208] = { .set = { {8, -14}, {-3, -10}, {-3, -4}, {-1, -8} } },
	[209] = { .set = { {1, -25}, {3, -14}, {2, -11}, {0, -9} } },
	[210] = { .set = { {13, -7}, {1, -12}, {0, -4}, {-2, -7} } },
	[211] = { .set = { {4, -14}, {-7, -10}, {5, -5}, {-1, -8} } },
	[212] = { .set = { {1, -25}, {-5, -14}, {4, -11}, {-1, -8} } },
	[213] = { .set = { {7, -11}, {-4, -11}, {4, -5}, {-1, -7} } },
	[214] = { .set = { {0, -15}, {8, -8}, {-9, -8}, {-1, -6} } },
	[215] = { .set = { {-1, -26}, {5, -14}, {-6, -14}, {-1, -10} } },
	[216] = { .set = { {0, -13}, {4, -11}, {-5, -11}, {0, -8} } },
	[217] = { .set = { {-5, -14}, {6, -10}, {-6, -5}, {0, -8} } },
	[218] = { .set = { {-2, -25}, {4, -14}, {-5, -11}, {0, -8} } },
	[219] = { .set = { {-8, -11}, {3, -11}, {-5, -5}, {0, -7} } },
	[220] = { .set = { {-9, -14}, {2, -10}, {2, -4}, {0, -8} } },
	[221] = { .set = { {-2, -25}, {-4, -14}, {-3, -11}, {-1, -9} } },
	[222] = { .set = { {-14, -7}, {-2, -12}, {-1, -4}, {1, -7} } },
	[223] = { .set = { {-6, -12}, {-5, -8}, {5, -5}, {-1, -9} } },
	[224] = { .set = { {-2, -24}, {-6, -12}, {1, -11}, {-2, -8} } },
	[225] = { .set = { {-10, -1}, {-4, -11}, {5, -5}, {0, -9} } },
	[226] = { .set = { {0, -23}, {-7, -12}, {6, -12}, {-1, -10} } },
	[227] = { .set = { {-1, -24}, {-5, -12}, {2, -11}, {-1, -8} } },
	[228] = { .set = { {-1, -24}, {-3, -13}, {-2, -10}, {0, -8} } },
	[229] = { .set = { {-2, -25}, {4, -14}, {-5, -11}, {0, -8} } },
	[230] = { .set = { {-1, -25}, {5, -13}, {-6, -13}, {-1, -9} } },
	[231] = { .set = { {1, -25}, {-5, -14}, {4, -11}, {-1, -8} } },
	[232] = { .set = { {0, -25}, {2, -14}, {1, -11}, {-1, -9} } },
	[233] = { .set = { {1, -24}, {5, -12}, {-2, -11}, {1, -8} } },
	[234] = { .set = { {-1, -12}, {-9, -6}, {8, -6}, {0, -9} } },
	[235] = { .set = { {-6, -12}, {-5, -8}, {5, -5}, {-1, -9} } },
	[236] = { .set = { {-9, -14}, {2, -10}, {2, -4}, {0, -8} } },
	[237] = { .set = { {-5, -14}, {6, -10}, {-6, -5}, {0, -8} } },
	[238] = { .set = { {0, -15}, {8, -8}, {-9, -8}, {-1, -6} } },
	[239] = { .set = { {4, -14}, {-7, -10}, {5, -5}, {-1, -8} } },
	[240] = { .set = { {8, -14}, {-3, -10}, {-3, -4}, {-1, -8} } },
	[241] = { .set = { {5, -12}, {4, -8}, {-6, -5}, {0, -9} } },
};

static const ax_anim *const sSunfloraAnimTable1[] = {
	AX_ANIM_PTR(sSunfloraAnims_1_1),
	AX_ANIM_PTR(sSunfloraAnims_1_2),
	AX_ANIM_PTR(sSunfloraAnims_1_3),
	AX_ANIM_PTR(sSunfloraAnims_1_4),
	AX_ANIM_PTR(sSunfloraAnims_1_5),
	AX_ANIM_PTR(sSunfloraAnims_1_6),
	AX_ANIM_PTR(sSunfloraAnims_1_7),
	AX_ANIM_PTR(sSunfloraAnims_1_8),
};

static const ax_anim *const sSunfloraAnimTable2[] = {
	AX_ANIM_PTR(sSunfloraAnims_2_1),
	AX_ANIM_PTR(sSunfloraAnims_2_2),
	AX_ANIM_PTR(sSunfloraAnims_2_3),
	AX_ANIM_PTR(sSunfloraAnims_2_4),
	AX_ANIM_PTR(sSunfloraAnims_2_5),
	AX_ANIM_PTR(sSunfloraAnims_2_6),
	AX_ANIM_PTR(sSunfloraAnims_2_7),
	AX_ANIM_PTR(sSunfloraAnims_2_8),
};

static const ax_anim *const sSunfloraAnimTable3[] = {
	AX_ANIM_PTR(sSunfloraAnims_3_1),
	AX_ANIM_PTR(sSunfloraAnims_3_2),
	AX_ANIM_PTR(sSunfloraAnims_3_3),
	AX_ANIM_PTR(sSunfloraAnims_3_4),
	AX_ANIM_PTR(sSunfloraAnims_3_5),
	AX_ANIM_PTR(sSunfloraAnims_3_6),
	AX_ANIM_PTR(sSunfloraAnims_3_7),
	AX_ANIM_PTR(sSunfloraAnims_3_8),
};

static const ax_anim *const sSunfloraAnimTable4[] = {
	AX_ANIM_PTR(sSunfloraAnims_4_1),
	AX_ANIM_PTR(sSunfloraAnims_4_2),
	AX_ANIM_PTR(sSunfloraAnims_4_3),
	AX_ANIM_PTR(sSunfloraAnims_4_4),
	AX_ANIM_PTR(sSunfloraAnims_4_5),
	AX_ANIM_PTR(sSunfloraAnims_4_6),
	AX_ANIM_PTR(sSunfloraAnims_4_7),
	AX_ANIM_PTR(sSunfloraAnims_4_8),
};

static const ax_anim *const sSunfloraAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00522),
	AX_ANIM_PTR(gAxSharedAnim_00583),
	AX_ANIM_PTR(gAxSharedAnim_00575),
	AX_ANIM_PTR(gAxSharedAnim_00567),
	AX_ANIM_PTR(gAxSharedAnim_00557),
	AX_ANIM_PTR(gAxSharedAnim_00549),
	AX_ANIM_PTR(gAxSharedAnim_00541),
	AX_ANIM_PTR(gAxSharedAnim_00527),
};

static const ax_anim *const sSunfloraAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
};

static const ax_anim *const sSunfloraAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00606),
	AX_ANIM_PTR(gAxSharedAnim_00617),
	AX_ANIM_PTR(gAxSharedAnim_00626),
	AX_ANIM_PTR(gAxSharedAnim_00637),
	AX_ANIM_PTR(gAxSharedAnim_00654),
	AX_ANIM_PTR(gAxSharedAnim_00665),
	AX_ANIM_PTR(gAxSharedAnim_00680),
	AX_ANIM_PTR(gAxSharedAnim_00691),
};

static const ax_anim *const sSunfloraAnimTable8[] = {
	AX_ANIM_PTR(sSunfloraAnims_8_1),
	AX_ANIM_PTR(sSunfloraAnims_8_2),
	AX_ANIM_PTR(sSunfloraAnims_8_3),
	AX_ANIM_PTR(sSunfloraAnims_8_4),
	AX_ANIM_PTR(sSunfloraAnims_8_5),
	AX_ANIM_PTR(sSunfloraAnims_8_6),
	AX_ANIM_PTR(sSunfloraAnims_8_7),
	AX_ANIM_PTR(sSunfloraAnims_8_8),
};

static const ax_anim *const sSunfloraAnimTable9[] = {
	AX_ANIM_PTR(sSunfloraAnims_9_1),
	AX_ANIM_PTR(sSunfloraAnims_9_2),
	AX_ANIM_PTR(sSunfloraAnims_9_3),
	AX_ANIM_PTR(sSunfloraAnims_9_4),
	AX_ANIM_PTR(sSunfloraAnims_9_5),
	AX_ANIM_PTR(sSunfloraAnims_9_6),
	AX_ANIM_PTR(sSunfloraAnims_9_7),
	AX_ANIM_PTR(sSunfloraAnims_9_8),
};

static const ax_anim *const sSunfloraAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01143),
	AX_ANIM_PTR(gAxSharedAnim_01156),
	AX_ANIM_PTR(gAxSharedAnim_01167),
	AX_ANIM_PTR(gAxSharedAnim_01178),
	AX_ANIM_PTR(gAxSharedAnim_01189),
	AX_ANIM_PTR(gAxSharedAnim_01200),
	AX_ANIM_PTR(gAxSharedAnim_01217),
	AX_ANIM_PTR(gAxSharedAnim_01228),
};

static const ax_anim *const sSunfloraAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_01238),
	AX_ANIM_PTR(sSunfloraAnims_11_2),
	AX_ANIM_PTR(sSunfloraAnims_11_3),
	AX_ANIM_PTR(sSunfloraAnims_11_4),
	AX_ANIM_PTR(gAxSharedAnim_01370),
	AX_ANIM_PTR(sSunfloraAnims_11_6),
	AX_ANIM_PTR(sSunfloraAnims_11_7),
	AX_ANIM_PTR(sSunfloraAnims_11_8),
};

static const ax_anim *const sSunfloraAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01472),
	AX_ANIM_PTR(gAxSharedAnim_01520),
	AX_ANIM_PTR(gAxSharedAnim_01507),
	AX_ANIM_PTR(gAxSharedAnim_01500),
	AX_ANIM_PTR(gAxSharedAnim_01499),
	AX_ANIM_PTR(gAxSharedAnim_01491),
	AX_ANIM_PTR(gAxSharedAnim_01481),
	AX_ANIM_PTR(gAxSharedAnim_01473),
};

static const ax_anim *const sSunfloraAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01525),
	AX_ANIM_PTR(gAxSharedAnim_01579),
	AX_ANIM_PTR(gAxSharedAnim_01577),
	AX_ANIM_PTR(gAxSharedAnim_01555),
	AX_ANIM_PTR(gAxSharedAnim_01549),
	AX_ANIM_PTR(gAxSharedAnim_01544),
	AX_ANIM_PTR(gAxSharedAnim_01539),
	AX_ANIM_PTR(gAxSharedAnim_01531),
};

static const ax_anim *const *const sAxAnimationsSunflora[] = {
	sSunfloraAnimTable1,
	sSunfloraAnimTable2,
	sSunfloraAnimTable3,
	sSunfloraAnimTable4,
	sSunfloraAnimTable5,
	sSunfloraAnimTable6,
	sSunfloraAnimTable7,
	sSunfloraAnimTable8,
	sSunfloraAnimTable9,
	sSunfloraAnimTable10,
	sSunfloraAnimTable11,
	sSunfloraAnimTable12,
	sSunfloraAnimTable13,
};

static const ax_sprite *const sAxSpritesSunflora[] = {
	sSunfloraSprites1,
	sSunfloraSprites2,
	sSunfloraSprites3,
	sSunfloraSprites4,
	sSunfloraSprites5,
	sSunfloraSprites6,
	sSunfloraSprites7,
	sSunfloraSprites8,
	sSunfloraSprites9,
	sSunfloraSprites10,
	sSunfloraSprites11,
	sSunfloraSprites12,
	sSunfloraSprites13,
	sSunfloraSprites14,
	sSunfloraSprites15,
	sSunfloraSprites16,
	sSunfloraSprites17,
	sSunfloraSprites18,
	sSunfloraSprites19,
	sSunfloraSprites20,
	sSunfloraSprites21,
	sSunfloraSprites22,
	sSunfloraSprites23,
	sSunfloraSprites24,
	sSunfloraSprites25,
	sSunfloraSprites26,
	sSunfloraSprites27,
	sSunfloraSprites28,
	sSunfloraSprites29,
	sSunfloraSprites30,
	sSunfloraSprites31,
	sSunfloraSprites32,
	sSunfloraSprites33,
	sSunfloraSprites34,
	sSunfloraSprites35,
	sSunfloraSprites36,
	sSunfloraSprites37,
	sSunfloraSprites38,
	sSunfloraSprites39,
	sSunfloraSprites40,
	sSunfloraSprites41,
	sSunfloraSprites42,
	sSunfloraSprites43,
	sSunfloraSprites44,
	sSunfloraSprites45,
	sSunfloraSprites46,
	sSunfloraSprites47,
	sSunfloraSprites48,
	sSunfloraSprites49,
	sSunfloraSprites50,
	sSunfloraSprites51,
	sSunfloraSprites52,
	sSunfloraSprites53,
	sSunfloraSprites54,
	sSunfloraSprites55,
	sSunfloraSprites56,
};

static const axmain sAxMainSunflora = {
	.poses = sAxPosesSunflora,
	.animations = sAxAnimationsSunflora,
	.animCount = ARRAY_COUNT(sAxAnimationsSunflora),
	.spriteData = sAxSpritesSunflora,
	.positions = sAxPositionsSunflora,
};
