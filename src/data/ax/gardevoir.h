/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainGardevoir;
const SiroArchive gAxGardevoir = {"SIRO", &sAxMainGardevoir};

static const ax_pose sGardevoirPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose2[] = {
	AX_POSE(1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose3[] = {
	AX_POSE(2, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose4[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose5[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose6[] = {
	AX_POSE(5, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose7[] = {
	AX_POSE(6, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose8[] = {
	AX_POSE(7, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose9[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose10[] = {
	AX_POSE(9, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose11[] = {
	AX_POSE(10, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose12[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose13[] = {
	AX_POSE(12, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose14[] = {
	AX_POSE(13, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose15[] = {
	AX_POSE(14, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose16[] = {
	AX_POSE(9, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose17[] = {
	AX_POSE(10, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose18[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose19[] = {
	AX_POSE(6, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose20[] = {
	AX_POSE(7, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose21[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose22[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose23[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose24[] = {
	AX_POSE(5, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose28[] = {
	AX_POSE(15, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose32[] = {
	AX_POSE(16, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose36[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose40[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose44[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose48[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose52[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose56[] = {
	AX_POSE(16, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose89[] = {
	AX_POSE(15, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose90[] = {
	AX_POSE(16, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose91[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose93[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose94[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose95[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose96[] = {
	AX_POSE(16, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose97[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose98[] = {
	AX_POSE(21, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose99[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose100[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose101[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose102[] = {
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose103[] = {
	AX_POSE(26, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose104[] = {
	AX_POSE(27, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose105[] = {
	AX_POSE(28, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose106[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose107[] = {
	AX_POSE(30, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose108[] = {
	AX_POSE(31, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose109[] = {
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose110[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose111[] = {
	AX_POSE(34, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose112[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose113[] = {
	AX_POSE(30, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose114[] = {
	AX_POSE(31, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose115[] = {
	AX_POSE(26, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose116[] = {
	AX_POSE(27, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose117[] = {
	AX_POSE(28, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose118[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose119[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose120[] = {
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose121[] = {
	AX_POSE(35, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose122[] = {
	AX_POSE(36, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose123[] = {
	AX_POSE(37, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose124[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose125[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose126[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose127[] = {
	AX_POSE(41, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose128[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose129[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose130[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose132[] = {
	AX_POSE(42, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose133[] = {
	AX_POSE(43, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose135[] = {
	AX_POSE(44, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose136[] = {
	AX_POSE(45, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose138[] = {
	AX_POSE(46, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose139[] = {
	AX_POSE(47, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose141[] = {
	AX_POSE(48, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose142[] = {
	AX_POSE(49, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose144[] = {
	AX_POSE(50, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose145[] = {
	AX_POSE(51, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose147[] = {
	AX_POSE(48, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose148[] = {
	AX_POSE(49, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose150[] = {
	AX_POSE(46, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose151[] = {
	AX_POSE(47, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose153[] = {
	AX_POSE(44, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose154[] = {
	AX_POSE(45, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose155[] = {
	AX_POSE(15, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose158[] = {
	AX_POSE(18, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose160[] = {
	AX_POSE(18, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose161[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose166[] = {
	AX_POSE(30, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose168[] = {
	AX_POSE(30, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose174[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose175[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose176[] = {
	AX_POSE(16, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose179[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose182[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose185[] = {
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose188[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose191[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose192[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose193[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose194[] = {
	AX_POSE(16, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose203[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose204[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose205[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose206[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose207[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose208[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose209[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose210[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose211[] = {
	AX_POSE(52, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(53, OAM1(246, ST_OAM_V_RECTANGLE, 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose212[] = {
	AX_POSE(52, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(53, OAM1(246, ST_OAM_V_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose213[] = {
	AX_POSE(54, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose214[] = {
	AX_POSE(55, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose215[] = {
	AX_POSE(54, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose216[] = {
	AX_POSE(55, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose217[] = {
	AX_POSE(56, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose219[] = {
	AX_POSE(57, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose221[] = {
	AX_POSE(57, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose223[] = {
	AX_POSE(58, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGardevoirPose225[] = {
	AX_POSE(58, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const u8 sGardevoirAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_1_1.lz");
static const u8 sGardevoirAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_1_2.lz");
static const u8 sGardevoirAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_1_3.lz");
static const u8 sGardevoirAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_1_4.lz");
static const u8 sGardevoirAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_1_5.lz");
static const u8 sGardevoirAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_1_6.lz");
static const u8 sGardevoirAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_1_7.lz");
static const u8 sGardevoirAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_1_8.lz");
static const u8 sGardevoirAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_2_1.lz");
static const u8 sGardevoirAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_2_2.lz");
static const u8 sGardevoirAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_2_3.lz");
static const u8 sGardevoirAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_2_4.lz");
static const u8 sGardevoirAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_2_5.lz");
static const u8 sGardevoirAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_2_6.lz");
static const u8 sGardevoirAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_2_7.lz");
static const u8 sGardevoirAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_2_8.lz");
static const u8 sGardevoirAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_3_1.lz");
static const u8 sGardevoirAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_3_2.lz");
static const u8 sGardevoirAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_3_3.lz");
static const u8 sGardevoirAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_3_4.lz");
static const u8 sGardevoirAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_3_5.lz");
static const u8 sGardevoirAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_3_6.lz");
static const u8 sGardevoirAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_3_7.lz");
static const u8 sGardevoirAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_3_8.lz");
static const u8 sGardevoirAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_5_1.lz");
static const u8 sGardevoirAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_5_2.lz");
static const u8 sGardevoirAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_5_3.lz");
static const u8 sGardevoirAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_5_4.lz");
static const u8 sGardevoirAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_5_5.lz");
static const u8 sGardevoirAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_5_6.lz");
static const u8 sGardevoirAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_5_7.lz");
static const u8 sGardevoirAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_5_8.lz");
static const u8 sGardevoirAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_8_1.lz");
static const u8 sGardevoirAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_8_2.lz");
static const u8 sGardevoirAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_8_3.lz");
static const u8 sGardevoirAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_8_4.lz");
static const u8 sGardevoirAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_8_5.lz");
static const u8 sGardevoirAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_8_6.lz");
static const u8 sGardevoirAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_8_7.lz");
static const u8 sGardevoirAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_8_8.lz");
static const u8 sGardevoirAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_9_1.lz");
static const u8 sGardevoirAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_9_2.lz");
static const u8 sGardevoirAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_9_3.lz");
static const u8 sGardevoirAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_9_4.lz");
static const u8 sGardevoirAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_9_5.lz");
static const u8 sGardevoirAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_9_6.lz");
static const u8 sGardevoirAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_9_7.lz");
static const u8 sGardevoirAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_9_8.lz");
static const u8 sGardevoirAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_11_1.lz");
static const u8 sGardevoirAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_11_4.lz");
static const u8 sGardevoirAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_11_5.lz");
static const u8 sGardevoirAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_11_6.lz");
static const u8 sGardevoirAnims_14_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_14_1.lz");
static const u8 sGardevoirAnims_14_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_14_3.lz");
static const u8 sGardevoirAnims_15_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_15_1.lz");
static const u8 sGardevoirAnims_15_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_15_2.lz");
static const u8 sGardevoirAnims_15_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_15_3.lz");
static const u8 sGardevoirAnims_15_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_15_7.lz");
static const ax_anim sGardevoirAnims_16_1[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 217, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 9, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGardevoirAnims_16_2[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 219, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 220, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 220, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 220, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 220, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 220, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 220, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 220, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 220, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 220, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 220, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 9, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 220, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGardevoirAnims_16_3[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 223, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 9, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const u8 sGardevoirAnims_16_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gardevoir/sGardevoirAnims_16_4.lz");
static const ax_anim sGardevoirAnims_16_7[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 221, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 222, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 222, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 222, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 222, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 222, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 222, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 222, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 222, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 222, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 222, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 9, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 222, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sGardevoirGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_1.4bpp.lz");
static const ax_sprite sGardevoirSprites1[] = {
	{sGardevoirGfx1, ARRAY_COUNT(sGardevoirGfx1)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_2.4bpp.lz");
static const ax_sprite sGardevoirSprites2[] = {
	{sGardevoirGfx2, ARRAY_COUNT(sGardevoirGfx2)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_3.4bpp.lz");
static const ax_sprite sGardevoirSprites3[] = {
	{sGardevoirGfx3, ARRAY_COUNT(sGardevoirGfx3)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_4.4bpp.lz");
static const ax_sprite sGardevoirSprites4[] = {
	{sGardevoirGfx4, ARRAY_COUNT(sGardevoirGfx4)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_5.4bpp.lz");
static const ax_sprite sGardevoirSprites5[] = {
	{sGardevoirGfx5, ARRAY_COUNT(sGardevoirGfx5)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_6.4bpp.lz");
static const ax_sprite sGardevoirSprites6[] = {
	{sGardevoirGfx6, ARRAY_COUNT(sGardevoirGfx6)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_7.4bpp.lz");
static const ax_sprite sGardevoirSprites7[] = {
	{sGardevoirGfx7, ARRAY_COUNT(sGardevoirGfx7)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_8.4bpp.lz");
static const ax_sprite sGardevoirSprites8[] = {
	{sGardevoirGfx8, ARRAY_COUNT(sGardevoirGfx8)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_9.4bpp.lz");
static const ax_sprite sGardevoirSprites9[] = {
	{sGardevoirGfx9, ARRAY_COUNT(sGardevoirGfx9)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_10.4bpp.lz");
static const ax_sprite sGardevoirSprites10[] = {
	{sGardevoirGfx10, ARRAY_COUNT(sGardevoirGfx10)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_11.4bpp.lz");
static const ax_sprite sGardevoirSprites11[] = {
	{sGardevoirGfx11, ARRAY_COUNT(sGardevoirGfx11)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_12.4bpp.lz");
static const ax_sprite sGardevoirSprites12[] = {
	{sGardevoirGfx12, ARRAY_COUNT(sGardevoirGfx12)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_13.4bpp.lz");
static const ax_sprite sGardevoirSprites13[] = {
	{sGardevoirGfx13, ARRAY_COUNT(sGardevoirGfx13)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_14.4bpp.lz");
static const ax_sprite sGardevoirSprites14[] = {
	{sGardevoirGfx14, ARRAY_COUNT(sGardevoirGfx14)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_15.4bpp.lz");
static const ax_sprite sGardevoirSprites15[] = {
	{sGardevoirGfx15, ARRAY_COUNT(sGardevoirGfx15)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_16.4bpp.lz");
static const u8 sGardevoirGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_16_1.4bpp.lz");
static const ax_sprite sGardevoirSprites16[] = {
	{NULL, 32}, 
	{sGardevoirGfx16, ARRAY_COUNT(sGardevoirGfx16)}, 
	{NULL, 32}, 
	{sGardevoirGfx16_1, ARRAY_COUNT(sGardevoirGfx16_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_17.4bpp.lz");
static const u8 sGardevoirGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_17_1.4bpp.lz");
static const u8 sGardevoirGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_17_2.4bpp.lz");
static const ax_sprite sGardevoirSprites17[] = {
	{sGardevoirGfx17, ARRAY_COUNT(sGardevoirGfx17)}, 
	{NULL, 64}, 
	{sGardevoirGfx17_1, ARRAY_COUNT(sGardevoirGfx17_1)}, 
	{NULL, 32}, 
	{sGardevoirGfx17_2, ARRAY_COUNT(sGardevoirGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_18.4bpp.lz");
static const u8 sGardevoirGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_18_1.4bpp.lz");
static const u8 sGardevoirGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_18_2.4bpp.lz");
static const ax_sprite sGardevoirSprites18[] = {
	{sGardevoirGfx18, ARRAY_COUNT(sGardevoirGfx18)}, 
	{NULL, 64}, 
	{sGardevoirGfx18_1, ARRAY_COUNT(sGardevoirGfx18_1)}, 
	{NULL, 32}, 
	{sGardevoirGfx18_2, ARRAY_COUNT(sGardevoirGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_19.4bpp.lz");
static const u8 sGardevoirGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_19_1.4bpp.lz");
static const u8 sGardevoirGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_19_2.4bpp.lz");
static const u8 sGardevoirGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_19_3.4bpp.lz");
static const ax_sprite sGardevoirSprites19[] = {
	{sGardevoirGfx19, ARRAY_COUNT(sGardevoirGfx19)}, 
	{NULL, 64}, 
	{sGardevoirGfx19_1, ARRAY_COUNT(sGardevoirGfx19_1)}, 
	{NULL, 32}, 
	{sGardevoirGfx19_2, ARRAY_COUNT(sGardevoirGfx19_2)}, 
	{NULL, 64}, 
	{sGardevoirGfx19_3, ARRAY_COUNT(sGardevoirGfx19_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_20.4bpp.lz");
static const u8 sGardevoirGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_20_1.4bpp.lz");
static const u8 sGardevoirGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_20_2.4bpp.lz");
static const u8 sGardevoirGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_20_3.4bpp.lz");
static const ax_sprite sGardevoirSprites20[] = {
	{sGardevoirGfx20, ARRAY_COUNT(sGardevoirGfx20)}, 
	{NULL, 64}, 
	{sGardevoirGfx20_1, ARRAY_COUNT(sGardevoirGfx20_1)}, 
	{NULL, 64}, 
	{sGardevoirGfx20_2, ARRAY_COUNT(sGardevoirGfx20_2)}, 
	{NULL, 32}, 
	{sGardevoirGfx20_3, ARRAY_COUNT(sGardevoirGfx20_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_21.4bpp.lz");
static const u8 sGardevoirGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_21_1.4bpp.lz");
static const u8 sGardevoirGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_21_2.4bpp.lz");
static const ax_sprite sGardevoirSprites21[] = {
	{NULL, 32}, 
	{sGardevoirGfx21, ARRAY_COUNT(sGardevoirGfx21)}, 
	{NULL, 64}, 
	{sGardevoirGfx21_1, ARRAY_COUNT(sGardevoirGfx21_1)}, 
	{NULL, 64}, 
	{sGardevoirGfx21_2, ARRAY_COUNT(sGardevoirGfx21_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_22.4bpp.lz");
static const u8 sGardevoirGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_22_1.4bpp.lz");
static const u8 sGardevoirGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_22_2.4bpp.lz");
static const ax_sprite sGardevoirSprites22[] = {
	{NULL, 32}, 
	{sGardevoirGfx22, ARRAY_COUNT(sGardevoirGfx22)}, 
	{NULL, 64}, 
	{sGardevoirGfx22_1, ARRAY_COUNT(sGardevoirGfx22_1)}, 
	{NULL, 32}, 
	{sGardevoirGfx22_2, ARRAY_COUNT(sGardevoirGfx22_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_23.4bpp.lz");
static const u8 sGardevoirGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_23_1.4bpp.lz");
static const u8 sGardevoirGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_23_2.4bpp.lz");
static const ax_sprite sGardevoirSprites23[] = {
	{NULL, 32}, 
	{sGardevoirGfx23, ARRAY_COUNT(sGardevoirGfx23)}, 
	{NULL, 64}, 
	{sGardevoirGfx23_1, ARRAY_COUNT(sGardevoirGfx23_1)}, 
	{NULL, 32}, 
	{sGardevoirGfx23_2, ARRAY_COUNT(sGardevoirGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_24.4bpp.lz");
static const u8 sGardevoirGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_24_1.4bpp.lz");
static const u8 sGardevoirGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_24_2.4bpp.lz");
static const ax_sprite sGardevoirSprites24[] = {
	{sGardevoirGfx24, ARRAY_COUNT(sGardevoirGfx24)}, 
	{NULL, 32}, 
	{sGardevoirGfx24_1, ARRAY_COUNT(sGardevoirGfx24_1)}, 
	{NULL, 32}, 
	{sGardevoirGfx24_2, ARRAY_COUNT(sGardevoirGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_25.4bpp.lz");
static const u8 sGardevoirGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_25_1.4bpp.lz");
static const u8 sGardevoirGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_25_2.4bpp.lz");
static const ax_sprite sGardevoirSprites25[] = {
	{sGardevoirGfx25, ARRAY_COUNT(sGardevoirGfx25)}, 
	{NULL, 32}, 
	{sGardevoirGfx25_1, ARRAY_COUNT(sGardevoirGfx25_1)}, 
	{NULL, 32}, 
	{sGardevoirGfx25_2, ARRAY_COUNT(sGardevoirGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_26.4bpp.lz");
static const u8 sGardevoirGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_26_1.4bpp.lz");
static const u8 sGardevoirGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_26_2.4bpp.lz");
static const ax_sprite sGardevoirSprites26[] = {
	{sGardevoirGfx26, ARRAY_COUNT(sGardevoirGfx26)}, 
	{NULL, 32}, 
	{sGardevoirGfx26_1, ARRAY_COUNT(sGardevoirGfx26_1)}, 
	{NULL, 32}, 
	{sGardevoirGfx26_2, ARRAY_COUNT(sGardevoirGfx26_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_27.4bpp.lz");
static const u8 sGardevoirGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_27_1.4bpp.lz");
static const u8 sGardevoirGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_27_2.4bpp.lz");
static const ax_sprite sGardevoirSprites27[] = {
	{sGardevoirGfx27, ARRAY_COUNT(sGardevoirGfx27)}, 
	{NULL, 32}, 
	{sGardevoirGfx27_1, ARRAY_COUNT(sGardevoirGfx27_1)}, 
	{NULL, 32}, 
	{sGardevoirGfx27_2, ARRAY_COUNT(sGardevoirGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_28.4bpp.lz");
static const u8 sGardevoirGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_28_1.4bpp.lz");
static const u8 sGardevoirGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_28_2.4bpp.lz");
static const ax_sprite sGardevoirSprites28[] = {
	{sGardevoirGfx28, ARRAY_COUNT(sGardevoirGfx28)}, 
	{NULL, 32}, 
	{sGardevoirGfx28_1, ARRAY_COUNT(sGardevoirGfx28_1)}, 
	{NULL, 64}, 
	{sGardevoirGfx28_2, ARRAY_COUNT(sGardevoirGfx28_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_29.4bpp.lz");
static const u8 sGardevoirGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_29_1.4bpp.lz");
static const u8 sGardevoirGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_29_2.4bpp.lz");
static const ax_sprite sGardevoirSprites29[] = {
	{sGardevoirGfx29, ARRAY_COUNT(sGardevoirGfx29)}, 
	{NULL, 32}, 
	{sGardevoirGfx29_1, ARRAY_COUNT(sGardevoirGfx29_1)}, 
	{NULL, 64}, 
	{sGardevoirGfx29_2, ARRAY_COUNT(sGardevoirGfx29_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_30.4bpp.lz");
static const u8 sGardevoirGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_30_1.4bpp.lz");
static const u8 sGardevoirGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_30_2.4bpp.lz");
static const ax_sprite sGardevoirSprites30[] = {
	{sGardevoirGfx30, ARRAY_COUNT(sGardevoirGfx30)}, 
	{NULL, 32}, 
	{sGardevoirGfx30_1, ARRAY_COUNT(sGardevoirGfx30_1)}, 
	{NULL, 32}, 
	{sGardevoirGfx30_2, ARRAY_COUNT(sGardevoirGfx30_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_31.4bpp.lz");
static const u8 sGardevoirGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_31_1.4bpp.lz");
static const u8 sGardevoirGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_31_2.4bpp.lz");
static const ax_sprite sGardevoirSprites31[] = {
	{sGardevoirGfx31, ARRAY_COUNT(sGardevoirGfx31)}, 
	{NULL, 64}, 
	{sGardevoirGfx31_1, ARRAY_COUNT(sGardevoirGfx31_1)}, 
	{NULL, 32}, 
	{sGardevoirGfx31_2, ARRAY_COUNT(sGardevoirGfx31_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_32.4bpp.lz");
static const u8 sGardevoirGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_32_1.4bpp.lz");
static const u8 sGardevoirGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_32_2.4bpp.lz");
static const u8 sGardevoirGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_32_3.4bpp.lz");
static const ax_sprite sGardevoirSprites32[] = {
	{sGardevoirGfx32, ARRAY_COUNT(sGardevoirGfx32)}, 
	{NULL, 32}, 
	{sGardevoirGfx32_1, ARRAY_COUNT(sGardevoirGfx32_1)}, 
	{NULL, 32}, 
	{sGardevoirGfx32_2, ARRAY_COUNT(sGardevoirGfx32_2)}, 
	{NULL, 64}, 
	{sGardevoirGfx32_3, ARRAY_COUNT(sGardevoirGfx32_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_33.4bpp.lz");
static const u8 sGardevoirGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_33_1.4bpp.lz");
static const u8 sGardevoirGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_33_2.4bpp.lz");
static const u8 sGardevoirGfx33_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_33_3.4bpp.lz");
static const ax_sprite sGardevoirSprites33[] = {
	{sGardevoirGfx33, ARRAY_COUNT(sGardevoirGfx33)}, 
	{NULL, 32}, 
	{sGardevoirGfx33_1, ARRAY_COUNT(sGardevoirGfx33_1)}, 
	{NULL, 32}, 
	{sGardevoirGfx33_2, ARRAY_COUNT(sGardevoirGfx33_2)}, 
	{NULL, 32}, 
	{sGardevoirGfx33_3, ARRAY_COUNT(sGardevoirGfx33_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_34.4bpp.lz");
static const u8 sGardevoirGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_34_1.4bpp.lz");
static const u8 sGardevoirGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_34_2.4bpp.lz");
static const u8 sGardevoirGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_34_3.4bpp.lz");
static const ax_sprite sGardevoirSprites34[] = {
	{sGardevoirGfx34, ARRAY_COUNT(sGardevoirGfx34)}, 
	{NULL, 32}, 
	{sGardevoirGfx34_1, ARRAY_COUNT(sGardevoirGfx34_1)}, 
	{NULL, 32}, 
	{sGardevoirGfx34_2, ARRAY_COUNT(sGardevoirGfx34_2)}, 
	{NULL, 32}, 
	{sGardevoirGfx34_3, ARRAY_COUNT(sGardevoirGfx34_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_35.4bpp.lz");
static const u8 sGardevoirGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_35_1.4bpp.lz");
static const u8 sGardevoirGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_35_2.4bpp.lz");
static const u8 sGardevoirGfx35_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_35_3.4bpp.lz");
static const ax_sprite sGardevoirSprites35[] = {
	{sGardevoirGfx35, ARRAY_COUNT(sGardevoirGfx35)}, 
	{NULL, 32}, 
	{sGardevoirGfx35_1, ARRAY_COUNT(sGardevoirGfx35_1)}, 
	{NULL, 32}, 
	{sGardevoirGfx35_2, ARRAY_COUNT(sGardevoirGfx35_2)}, 
	{NULL, 64}, 
	{sGardevoirGfx35_3, ARRAY_COUNT(sGardevoirGfx35_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_36.4bpp.lz");
static const ax_sprite sGardevoirSprites36[] = {
	{sGardevoirGfx36, ARRAY_COUNT(sGardevoirGfx36)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_37.4bpp.lz");
static const ax_sprite sGardevoirSprites37[] = {
	{sGardevoirGfx37, ARRAY_COUNT(sGardevoirGfx37)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_38.4bpp.lz");
static const ax_sprite sGardevoirSprites38[] = {
	{sGardevoirGfx38, ARRAY_COUNT(sGardevoirGfx38)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_39.4bpp.lz");
static const ax_sprite sGardevoirSprites39[] = {
	{sGardevoirGfx39, ARRAY_COUNT(sGardevoirGfx39)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_40.4bpp.lz");
static const ax_sprite sGardevoirSprites40[] = {
	{sGardevoirGfx40, ARRAY_COUNT(sGardevoirGfx40)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_41.4bpp.lz");
static const ax_sprite sGardevoirSprites41[] = {
	{sGardevoirGfx41, ARRAY_COUNT(sGardevoirGfx41)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_42.4bpp.lz");
static const ax_sprite sGardevoirSprites42[] = {
	{sGardevoirGfx42, ARRAY_COUNT(sGardevoirGfx42)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_43.4bpp.lz");
static const ax_sprite sGardevoirSprites43[] = {
	{sGardevoirGfx43, ARRAY_COUNT(sGardevoirGfx43)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_44.4bpp.lz");
static const ax_sprite sGardevoirSprites44[] = {
	{sGardevoirGfx44, ARRAY_COUNT(sGardevoirGfx44)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_45.4bpp.lz");
static const ax_sprite sGardevoirSprites45[] = {
	{sGardevoirGfx45, ARRAY_COUNT(sGardevoirGfx45)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_46.4bpp.lz");
static const ax_sprite sGardevoirSprites46[] = {
	{sGardevoirGfx46, ARRAY_COUNT(sGardevoirGfx46)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_47.4bpp.lz");
static const ax_sprite sGardevoirSprites47[] = {
	{sGardevoirGfx47, ARRAY_COUNT(sGardevoirGfx47)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_48.4bpp.lz");
static const ax_sprite sGardevoirSprites48[] = {
	{sGardevoirGfx48, ARRAY_COUNT(sGardevoirGfx48)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_49.4bpp.lz");
static const ax_sprite sGardevoirSprites49[] = {
	{sGardevoirGfx49, ARRAY_COUNT(sGardevoirGfx49)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_50.4bpp.lz");
static const ax_sprite sGardevoirSprites50[] = {
	{sGardevoirGfx50, ARRAY_COUNT(sGardevoirGfx50)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_51.4bpp.lz");
static const ax_sprite sGardevoirSprites51[] = {
	{sGardevoirGfx51, ARRAY_COUNT(sGardevoirGfx51)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_52.4bpp.lz");
static const ax_sprite sGardevoirSprites52[] = {
	{sGardevoirGfx52, ARRAY_COUNT(sGardevoirGfx52)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_53.4bpp.lz");
static const ax_sprite sGardevoirSprites53[] = {
	{sGardevoirGfx53, ARRAY_COUNT(sGardevoirGfx53)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_54.4bpp.lz");
static const ax_sprite sGardevoirSprites54[] = {
	{sGardevoirGfx54, ARRAY_COUNT(sGardevoirGfx54)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_55.4bpp.lz");
static const ax_sprite sGardevoirSprites55[] = {
	{sGardevoirGfx55, ARRAY_COUNT(sGardevoirGfx55)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_56.4bpp.lz");
static const ax_sprite sGardevoirSprites56[] = {
	{sGardevoirGfx56, ARRAY_COUNT(sGardevoirGfx56)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_57.4bpp.lz");
static const ax_sprite sGardevoirSprites57[] = {
	{sGardevoirGfx57, ARRAY_COUNT(sGardevoirGfx57)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_58.4bpp.lz");
static const ax_sprite sGardevoirSprites58[] = {
	{sGardevoirGfx58, ARRAY_COUNT(sGardevoirGfx58)}, 
	{NULL, 0}
};
static const u8 sGardevoirGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gardevoir/sprite_59.4bpp.lz");
static const ax_sprite sGardevoirSprites59[] = {
	{sGardevoirGfx59, ARRAY_COUNT(sGardevoirGfx59)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesGardevoir[] = {
	sGardevoirPose1,
	sGardevoirPose2,
	sGardevoirPose3,
	sGardevoirPose4,
	sGardevoirPose5,
	sGardevoirPose6,
	sGardevoirPose7,
	sGardevoirPose8,
	sGardevoirPose9,
	sGardevoirPose10,
	sGardevoirPose11,
	sGardevoirPose12,
	sGardevoirPose13,
	sGardevoirPose14,
	sGardevoirPose15,
	sGardevoirPose16,
	sGardevoirPose17,
	sGardevoirPose18,
	sGardevoirPose19,
	sGardevoirPose20,
	sGardevoirPose21,
	sGardevoirPose22,
	sGardevoirPose23,
	sGardevoirPose24,
	sGardevoirPose1,
	sGardevoirPose2,
	sGardevoirPose3,
	sGardevoirPose28,
	sGardevoirPose4,
	sGardevoirPose5,
	sGardevoirPose6,
	sGardevoirPose32,
	sGardevoirPose7,
	sGardevoirPose8,
	sGardevoirPose9,
	sGardevoirPose36,
	sGardevoirPose10,
	sGardevoirPose11,
	sGardevoirPose12,
	sGardevoirPose40,
	sGardevoirPose13,
	sGardevoirPose14,
	sGardevoirPose15,
	sGardevoirPose44,
	sGardevoirPose16,
	sGardevoirPose17,
	sGardevoirPose18,
	sGardevoirPose48,
	sGardevoirPose19,
	sGardevoirPose20,
	sGardevoirPose21,
	sGardevoirPose52,
	sGardevoirPose22,
	sGardevoirPose23,
	sGardevoirPose24,
	sGardevoirPose56,
	sGardevoirPose1,
	sGardevoirPose2,
	sGardevoirPose3,
	sGardevoirPose28,
	sGardevoirPose4,
	sGardevoirPose5,
	sGardevoirPose6,
	sGardevoirPose32,
	sGardevoirPose7,
	sGardevoirPose8,
	sGardevoirPose9,
	sGardevoirPose36,
	sGardevoirPose10,
	sGardevoirPose11,
	sGardevoirPose12,
	sGardevoirPose40,
	sGardevoirPose13,
	sGardevoirPose14,
	sGardevoirPose15,
	sGardevoirPose44,
	sGardevoirPose16,
	sGardevoirPose17,
	sGardevoirPose18,
	sGardevoirPose48,
	sGardevoirPose19,
	sGardevoirPose20,
	sGardevoirPose21,
	sGardevoirPose52,
	sGardevoirPose22,
	sGardevoirPose23,
	sGardevoirPose24,
	sGardevoirPose56,
	sGardevoirPose89,
	sGardevoirPose90,
	sGardevoirPose91,
	sGardevoirPose48,
	sGardevoirPose93,
	sGardevoirPose94,
	sGardevoirPose95,
	sGardevoirPose96,
	sGardevoirPose97,
	sGardevoirPose98,
	sGardevoirPose99,
	sGardevoirPose100,
	sGardevoirPose101,
	sGardevoirPose102,
	sGardevoirPose103,
	sGardevoirPose104,
	sGardevoirPose105,
	sGardevoirPose106,
	sGardevoirPose107,
	sGardevoirPose108,
	sGardevoirPose109,
	sGardevoirPose110,
	sGardevoirPose111,
	sGardevoirPose112,
	sGardevoirPose113,
	sGardevoirPose114,
	sGardevoirPose115,
	sGardevoirPose116,
	sGardevoirPose117,
	sGardevoirPose118,
	sGardevoirPose119,
	sGardevoirPose120,
	sGardevoirPose121,
	sGardevoirPose122,
	sGardevoirPose123,
	sGardevoirPose124,
	sGardevoirPose125,
	sGardevoirPose126,
	sGardevoirPose127,
	sGardevoirPose128,
	sGardevoirPose129,
	sGardevoirPose130,
	sGardevoirPose1,
	sGardevoirPose132,
	sGardevoirPose133,
	sGardevoirPose4,
	sGardevoirPose135,
	sGardevoirPose136,
	sGardevoirPose7,
	sGardevoirPose138,
	sGardevoirPose139,
	sGardevoirPose10,
	sGardevoirPose141,
	sGardevoirPose142,
	sGardevoirPose13,
	sGardevoirPose144,
	sGardevoirPose145,
	sGardevoirPose16,
	sGardevoirPose147,
	sGardevoirPose148,
	sGardevoirPose19,
	sGardevoirPose150,
	sGardevoirPose151,
	sGardevoirPose22,
	sGardevoirPose153,
	sGardevoirPose154,
	sGardevoirPose155,
	sGardevoirPose56,
	sGardevoirPose52,
	sGardevoirPose158,
	sGardevoirPose44,
	sGardevoirPose160,
	sGardevoirPose161,
	sGardevoirPose32,
	sGardevoirPose98,
	sGardevoirPose101,
	sGardevoirPose104,
	sGardevoirPose166,
	sGardevoirPose110,
	sGardevoirPose168,
	sGardevoirPose116,
	sGardevoirPose119,
	sGardevoirPose1,
	sGardevoirPose99,
	sGardevoirPose28,
	sGardevoirPose174,
	sGardevoirPose175,
	sGardevoirPose176,
	sGardevoirPose7,
	sGardevoirPose105,
	sGardevoirPose179,
	sGardevoirPose10,
	sGardevoirPose108,
	sGardevoirPose182,
	sGardevoirPose13,
	sGardevoirPose111,
	sGardevoirPose185,
	sGardevoirPose16,
	sGardevoirPose114,
	sGardevoirPose188,
	sGardevoirPose19,
	sGardevoirPose117,
	sGardevoirPose191,
	sGardevoirPose192,
	sGardevoirPose193,
	sGardevoirPose194,
	sGardevoirPose89,
	sGardevoirPose90,
	sGardevoirPose91,
	sGardevoirPose48,
	sGardevoirPose93,
	sGardevoirPose94,
	sGardevoirPose95,
	sGardevoirPose96,
	sGardevoirPose203,
	sGardevoirPose204,
	sGardevoirPose205,
	sGardevoirPose206,
	sGardevoirPose207,
	sGardevoirPose208,
	sGardevoirPose209,
	sGardevoirPose210,
	sGardevoirPose211,
	sGardevoirPose212,
	sGardevoirPose213,
	sGardevoirPose214,
	sGardevoirPose215,
	sGardevoirPose216,
	sGardevoirPose217,
	sGardevoirPose213,
	sGardevoirPose219,
	sGardevoirPose215,
	sGardevoirPose221,
	sGardevoirPose214,
	sGardevoirPose223,
	sGardevoirPose216,
	sGardevoirPose225,
	sGardevoirPose217,
};

static const struct PositionSets sAxPositionsGardevoir[] = {
	[0] = { .set = { {-1, -13}, {-8, -8}, {6, -8}, {-1, -12} } },
	[1] = { .set = { {-1, -12}, {-7, -7}, {6, -9}, {-1, -11} } },
	[2] = { .set = { {-1, -12}, {-8, -9}, {5, -7}, {-1, -11} } },
	[3] = { .set = { {2, -13}, {4, -9}, {-6, -8}, {1, -12} } },
	[4] = { .set = { {2, -12}, {6, -9}, {-7, -8}, {1, -11} } },
	[5] = { .set = { {2, -12}, {-2, -9}, {-4, -6}, {1, -11} } },
	[6] = { .set = { {3, -14}, {-1, -11}, {0, -7}, {1, -12} } },
	[7] = { .set = { {3, -13}, {4, -8}, {-2, -6}, {1, -11} } },
	[8] = { .set = { {3, -13}, {-3, -8}, {2, -6}, {1, -11} } },
	[9] = { .set = { {2, -14}, {-7, -10}, {4, -7}, {-1, -12} } },
	[10] = { .set = { {2, -13}, {-6, -9}, {3, -6}, {-1, -11} } },
	[11] = { .set = { {2, -13}, {-8, -8}, {6, -7}, {-1, -11} } },
	[12] = { .set = { {-1, -15}, {5, -8}, {-7, -8}, {-1, -13} } },
	[13] = { .set = { {-1, -14}, {4, -8}, {-7, -7}, {-1, -12} } },
	[14] = { .set = { {-1, -14}, {5, -7}, {-6, -8}, {-1, -12} } },
	[15] = { .set = { {-4, -14}, {5, -10}, {-6, -7}, {-1, -12} } },
	[16] = { .set = { {-4, -13}, {4, -9}, {-5, -6}, {-1, -11} } },
	[17] = { .set = { {-4, -13}, {6, -8}, {-8, -7}, {-1, -11} } },
	[18] = { .set = { {-5, -14}, {-1, -11}, {-2, -7}, {-3, -12} } },
	[19] = { .set = { {-5, -13}, {-6, -8}, {0, -6}, {-3, -11} } },
	[20] = { .set = { {-5, -13}, {1, -8}, {-4, -6}, {-3, -11} } },
	[21] = { .set = { {-4, -13}, {-6, -9}, {4, -8}, {-3, -12} } },
	[22] = { .set = { {-4, -12}, {-8, -9}, {5, -8}, {-3, -11} } },
	[23] = { .set = { {-4, -12}, {0, -9}, {2, -6}, {-3, -11} } },
	[24] = { .set = { {-1, -13}, {-8, -8}, {6, -8}, {-1, -12} } },
	[25] = { .set = { {-1, -12}, {-7, -7}, {6, -9}, {-1, -11} } },
	[26] = { .set = { {-1, -12}, {-8, -9}, {5, -7}, {-1, -11} } },
	[27] = { .set = { {-1, -10}, {-10, -10}, {8, -10}, {-1, -9} } },
	[28] = { .set = { {2, -13}, {4, -9}, {-6, -8}, {1, -12} } },
	[29] = { .set = { {2, -12}, {6, -9}, {-7, -8}, {1, -11} } },
	[30] = { .set = { {2, -12}, {-2, -9}, {-4, -6}, {1, -11} } },
	[31] = { .set = { {6, -11}, {8, -10}, {-4, -8}, {2, -9} } },
	[32] = { .set = { {3, -14}, {-1, -11}, {0, -7}, {1, -12} } },
	[33] = { .set = { {3, -13}, {4, -8}, {-2, -6}, {1, -11} } },
	[34] = { .set = { {3, -13}, {-3, -8}, {2, -6}, {1, -11} } },
	[35] = { .set = { {9, -13}, {-1, -10}, {0, -7}, {5, -11} } },
	[36] = { .set = { {2, -14}, {-7, -10}, {4, -7}, {-1, -12} } },
	[37] = { .set = { {2, -13}, {-6, -9}, {3, -6}, {-1, -11} } },
	[38] = { .set = { {2, -13}, {-8, -8}, {6, -7}, {-1, -11} } },
	[39] = { .set = { {5, -14}, {-6, -10}, {4, -5}, {1, -12} } },
	[40] = { .set = { {-1, -15}, {5, -8}, {-7, -8}, {-1, -13} } },
	[41] = { .set = { {-1, -14}, {4, -8}, {-7, -7}, {-1, -12} } },
	[42] = { .set = { {-1, -14}, {5, -7}, {-6, -8}, {-1, -12} } },
	[43] = { .set = { {-1, -15}, {5, -9}, {-7, -9}, {-1, -13} } },
	[44] = { .set = { {-4, -14}, {5, -10}, {-6, -7}, {-1, -12} } },
	[45] = { .set = { {-4, -13}, {4, -9}, {-5, -6}, {-1, -11} } },
	[46] = { .set = { {-4, -13}, {6, -8}, {-8, -7}, {-1, -11} } },
	[47] = { .set = { {-7, -14}, {4, -10}, {-6, -5}, {-3, -12} } },
	[48] = { .set = { {-5, -14}, {-1, -11}, {-2, -7}, {-3, -12} } },
	[49] = { .set = { {-5, -13}, {-6, -8}, {0, -6}, {-3, -11} } },
	[50] = { .set = { {-5, -13}, {1, -8}, {-4, -6}, {-3, -11} } },
	[51] = { .set = { {-9, -13}, {1, -10}, {0, -7}, {-5, -11} } },
	[52] = { .set = { {-4, -13}, {-6, -9}, {4, -8}, {-3, -12} } },
	[53] = { .set = { {-4, -12}, {-8, -9}, {5, -8}, {-3, -11} } },
	[54] = { .set = { {-4, -12}, {0, -9}, {2, -6}, {-3, -11} } },
	[55] = { .set = { {-8, -11}, {-10, -10}, {2, -8}, {-4, -9} } },
	[56] = { .set = { {-1, -13}, {-8, -8}, {6, -8}, {-1, -12} } },
	[57] = { .set = { {-1, -12}, {-7, -7}, {6, -9}, {-1, -11} } },
	[58] = { .set = { {-1, -12}, {-8, -9}, {5, -7}, {-1, -11} } },
	[59] = { .set = { {-1, -10}, {-10, -10}, {8, -10}, {-1, -9} } },
	[60] = { .set = { {2, -13}, {4, -9}, {-6, -8}, {1, -12} } },
	[61] = { .set = { {2, -12}, {6, -9}, {-7, -8}, {1, -11} } },
	[62] = { .set = { {2, -12}, {-2, -9}, {-4, -6}, {1, -11} } },
	[63] = { .set = { {6, -11}, {8, -10}, {-4, -8}, {2, -9} } },
	[64] = { .set = { {3, -14}, {-1, -11}, {0, -7}, {1, -12} } },
	[65] = { .set = { {3, -13}, {4, -8}, {-2, -6}, {1, -11} } },
	[66] = { .set = { {3, -13}, {-3, -8}, {2, -6}, {1, -11} } },
	[67] = { .set = { {9, -13}, {-1, -10}, {0, -7}, {5, -11} } },
	[68] = { .set = { {2, -14}, {-7, -10}, {4, -7}, {-1, -12} } },
	[69] = { .set = { {2, -13}, {-6, -9}, {3, -6}, {-1, -11} } },
	[70] = { .set = { {2, -13}, {-8, -8}, {6, -7}, {-1, -11} } },
	[71] = { .set = { {5, -14}, {-6, -10}, {4, -5}, {1, -12} } },
	[72] = { .set = { {-1, -15}, {5, -8}, {-7, -8}, {-1, -13} } },
	[73] = { .set = { {-1, -14}, {4, -8}, {-7, -7}, {-1, -12} } },
	[74] = { .set = { {-1, -14}, {5, -7}, {-6, -8}, {-1, -12} } },
	[75] = { .set = { {-1, -15}, {5, -9}, {-7, -9}, {-1, -13} } },
	[76] = { .set = { {-4, -14}, {5, -10}, {-6, -7}, {-1, -12} } },
	[77] = { .set = { {-4, -13}, {4, -9}, {-5, -6}, {-1, -11} } },
	[78] = { .set = { {-4, -13}, {6, -8}, {-8, -7}, {-1, -11} } },
	[79] = { .set = { {-7, -14}, {4, -10}, {-6, -5}, {-3, -12} } },
	[80] = { .set = { {-5, -14}, {-1, -11}, {-2, -7}, {-3, -12} } },
	[81] = { .set = { {-5, -13}, {-6, -8}, {0, -6}, {-3, -11} } },
	[82] = { .set = { {-5, -13}, {1, -8}, {-4, -6}, {-3, -11} } },
	[83] = { .set = { {-9, -13}, {1, -10}, {0, -7}, {-5, -11} } },
	[84] = { .set = { {-4, -13}, {-6, -9}, {4, -8}, {-3, -12} } },
	[85] = { .set = { {-4, -12}, {-8, -9}, {5, -8}, {-3, -11} } },
	[86] = { .set = { {-4, -12}, {0, -9}, {2, -6}, {-3, -11} } },
	[87] = { .set = { {-8, -11}, {-10, -10}, {2, -8}, {-4, -9} } },
	[88] = { .set = { {-1, -9}, {-10, -9}, {8, -9}, {-1, -8} } },
	[89] = { .set = { {-8, -10}, {-10, -9}, {2, -7}, {-4, -8} } },
	[90] = { .set = { {-9, -12}, {1, -9}, {0, -6}, {-5, -10} } },
	[91] = { .set = { {-7, -14}, {4, -10}, {-6, -5}, {-3, -12} } },
	[92] = { .set = { {-1, -14}, {5, -8}, {-7, -8}, {-1, -12} } },
	[93] = { .set = { {6, -14}, {-5, -10}, {5, -5}, {2, -12} } },
	[94] = { .set = { {8, -12}, {-2, -9}, {-1, -6}, {4, -10} } },
	[95] = { .set = { {7, -10}, {9, -9}, {-3, -7}, {3, -8} } },
	[96] = { .set = { {0, -14}, {-3, -10}, {-2, -12}, {-1, -12} } },
	[97] = { .set = { {0, -13}, {-3, -10}, {-2, -11}, {-1, -11} } },
	[98] = { .set = { {-1, -15}, {-4, -18}, {2, -19}, {-1, -13} } },
	[99] = { .set = { {1, -14}, {7, -9}, {3, -12}, {0, -12} } },
	[100] = { .set = { {2, -14}, {8, -10}, {4, -12}, {1, -12} } },
	[101] = { .set = { {1, -16}, {4, -19}, {-3, -18}, {0, -13} } },
	[102] = { .set = { {3, -14}, {10, -11}, {5, -13}, {1, -12} } },
	[103] = { .set = { {4, -14}, {10, -12}, {6, -13}, {2, -12} } },
	[104] = { .set = { {3, -15}, {5, -19}, {2, -18}, {1, -12} } },
	[105] = { .set = { {2, -15}, {6, -17}, {0, -14}, {0, -12} } },
	[106] = { .set = { {3, -15}, {7, -18}, {1, -14}, {1, -12} } },
	[107] = { .set = { {1, -15}, {-2, -21}, {4, -19}, {-1, -11} } },
	[108] = { .set = { {0, -14}, {2, -16}, {1, -13}, {0, -12} } },
	[109] = { .set = { {0, -15}, {2, -17}, {1, -14}, {0, -14} } },
	[110] = { .set = { {-1, -16}, {2, -18}, {-4, -18}, {-1, -12} } },
	[111] = { .set = { {-4, -15}, {-8, -17}, {-2, -14}, {-2, -12} } },
	[112] = { .set = { {-5, -15}, {-9, -18}, {-3, -14}, {-3, -12} } },
	[113] = { .set = { {-3, -15}, {0, -21}, {-6, -19}, {-1, -11} } },
	[114] = { .set = { {-5, -14}, {-12, -11}, {-7, -13}, {-3, -12} } },
	[115] = { .set = { {-6, -14}, {-12, -12}, {-8, -13}, {-4, -12} } },
	[116] = { .set = { {-5, -15}, {-7, -19}, {-4, -18}, {-3, -12} } },
	[117] = { .set = { {-3, -14}, {-9, -9}, {-5, -12}, {-2, -12} } },
	[118] = { .set = { {-4, -14}, {-10, -10}, {-6, -12}, {-3, -12} } },
	[119] = { .set = { {-3, -16}, {-6, -19}, {1, -18}, {-2, -13} } },
	[120] = { .set = { {-4, -10}, {-6, -5}, {2, -3}, {-2, -8} } },
	[121] = { .set = { {-5, -9}, {-6, -5}, {2, -3}, {-2, -7} } },
	[122] = { .set = { {-1, -9}, {-8, -7}, {6, -7}, {-1, -8} } },
	[123] = { .set = { {1, -11}, {4, -9}, {-6, -7}, {-1, -9} } },
	[124] = { .set = { {3, -11}, {-3, -6}, {-3, -5}, {1, -8} } },
	[125] = { .set = { {2, -11}, {-6, -9}, {6, -7}, {-1, -10} } },
	[126] = { .set = { {-1, -11}, {7, -7}, {-9, -7}, {-1, -9} } },
	[127] = { .set = { {-3, -11}, {5, -9}, {-7, -7}, {0, -10} } },
	[128] = { .set = { {-4, -11}, {2, -6}, {2, -5}, {-2, -8} } },
	[129] = { .set = { {-2, -11}, {-5, -9}, {5, -7}, {0, -9} } },
	[130] = { .set = { {-1, -13}, {-8, -8}, {6, -8}, {-1, -12} } },
	[131] = { .set = { {-2, -13}, {-9, -8}, {4, -8}, {-2, -12} } },
	[132] = { .set = { {0, -13}, {-7, -8}, {6, -8}, {0, -12} } },
	[133] = { .set = { {2, -13}, {4, -9}, {-6, -8}, {1, -12} } },
	[134] = { .set = { {3, -15}, {-1, -10}, {-4, -8}, {1, -13} } },
	[135] = { .set = { {1, -14}, {4, -9}, {-7, -8}, {-1, -12} } },
	[136] = { .set = { {3, -14}, {-1, -11}, {0, -7}, {1, -12} } },
	[137] = { .set = { {3, -15}, {2, -10}, {0, -8}, {1, -12} } },
	[138] = { .set = { {3, -13}, {-2, -9}, {-2, -6}, {1, -10} } },
	[139] = { .set = { {2, -14}, {-7, -10}, {4, -7}, {-1, -12} } },
	[140] = { .set = { {1, -14}, {-9, -10}, {4, -7}, {-2, -12} } },
	[141] = { .set = { {2, -13}, {-6, -9}, {3, -5}, {-1, -11} } },
	[142] = { .set = { {-1, -15}, {5, -8}, {-7, -8}, {-1, -13} } },
	[143] = { .set = { {0, -15}, {7, -8}, {-7, -9}, {0, -13} } },
	[144] = { .set = { {-2, -15}, {5, -9}, {-9, -8}, {-2, -13} } },
	[145] = { .set = { {-4, -14}, {5, -10}, {-6, -7}, {-1, -12} } },
	[146] = { .set = { {-3, -14}, {7, -10}, {-6, -7}, {0, -12} } },
	[147] = { .set = { {-4, -13}, {4, -9}, {-5, -5}, {-1, -11} } },
	[148] = { .set = { {-5, -14}, {-1, -11}, {-2, -7}, {-3, -12} } },
	[149] = { .set = { {-5, -15}, {-4, -10}, {-2, -8}, {-3, -12} } },
	[150] = { .set = { {-5, -13}, {0, -9}, {0, -6}, {-3, -10} } },
	[151] = { .set = { {-4, -13}, {-6, -9}, {4, -8}, {-3, -12} } },
	[152] = { .set = { {-5, -15}, {-1, -10}, {2, -8}, {-3, -13} } },
	[153] = { .set = { {-3, -14}, {-6, -9}, {5, -8}, {-1, -12} } },
	[154] = { .set = { {0, -10}, {-9, -10}, {9, -10}, {0, -9} } },
	[155] = { .set = { {-8, -11}, {-10, -10}, {2, -8}, {-4, -9} } },
	[156] = { .set = { {-9, -13}, {1, -10}, {0, -7}, {-5, -11} } },
	[157] = { .set = { {-7, -15}, {4, -11}, {-6, -6}, {-3, -13} } },
	[158] = { .set = { {-1, -15}, {5, -9}, {-7, -9}, {-1, -13} } },
	[159] = { .set = { {6, -15}, {-5, -11}, {5, -6}, {2, -13} } },
	[160] = { .set = { {8, -13}, {-2, -10}, {-1, -7}, {4, -11} } },
	[161] = { .set = { {6, -11}, {8, -10}, {-4, -8}, {2, -9} } },
	[162] = { .set = { {0, -13}, {-3, -10}, {-2, -11}, {-1, -11} } },
	[163] = { .set = { {2, -14}, {8, -10}, {4, -12}, {1, -12} } },
	[164] = { .set = { {4, -14}, {10, -12}, {6, -13}, {2, -12} } },
	[165] = { .set = { {3, -16}, {7, -19}, {1, -15}, {1, -13} } },
	[166] = { .set = { {0, -15}, {2, -17}, {1, -14}, {0, -14} } },
	[167] = { .set = { {-4, -16}, {-8, -19}, {-2, -15}, {-2, -13} } },
	[168] = { .set = { {-6, -14}, {-12, -12}, {-8, -13}, {-4, -12} } },
	[169] = { .set = { {-4, -14}, {-10, -10}, {-6, -12}, {-3, -12} } },
	[170] = { .set = { {-1, -13}, {-8, -8}, {6, -8}, {-1, -12} } },
	[171] = { .set = { {-1, -15}, {-4, -18}, {2, -19}, {-1, -13} } },
	[172] = { .set = { {-1, -10}, {-10, -10}, {8, -10}, {-1, -9} } },
	[173] = { .set = { {3, -12}, {5, -8}, {-5, -7}, {2, -11} } },
	[174] = { .set = { {2, -15}, {5, -18}, {-2, -17}, {1, -12} } },
	[175] = { .set = { {5, -10}, {7, -9}, {-5, -7}, {1, -8} } },
	[176] = { .set = { {3, -14}, {-1, -11}, {0, -7}, {1, -12} } },
	[177] = { .set = { {3, -15}, {5, -19}, {2, -18}, {1, -12} } },
	[178] = { .set = { {6, -13}, {-4, -10}, {-3, -7}, {2, -11} } },
	[179] = { .set = { {2, -14}, {-7, -10}, {4, -7}, {-1, -12} } },
	[180] = { .set = { {1, -15}, {-2, -21}, {4, -19}, {-1, -11} } },
	[181] = { .set = { {4, -13}, {-7, -9}, {3, -4}, {0, -11} } },
	[182] = { .set = { {-1, -15}, {5, -8}, {-7, -8}, {-1, -13} } },
	[183] = { .set = { {-1, -16}, {2, -18}, {-4, -18}, {-1, -12} } },
	[184] = { .set = { {-1, -13}, {5, -7}, {-7, -7}, {-1, -11} } },
	[185] = { .set = { {-4, -14}, {5, -10}, {-6, -7}, {-1, -12} } },
	[186] = { .set = { {-3, -15}, {0, -21}, {-6, -19}, {-1, -11} } },
	[187] = { .set = { {-6, -13}, {5, -9}, {-5, -4}, {-2, -11} } },
	[188] = { .set = { {-5, -14}, {-1, -11}, {-2, -7}, {-3, -12} } },
	[189] = { .set = { {-5, -15}, {-7, -19}, {-4, -18}, {-3, -12} } },
	[190] = { .set = { {-8, -13}, {2, -10}, {1, -7}, {-4, -11} } },
	[191] = { .set = { {-4, -12}, {-6, -8}, {4, -7}, {-3, -11} } },
	[192] = { .set = { {-3, -15}, {-6, -18}, {1, -17}, {-2, -12} } },
	[193] = { .set = { {-6, -10}, {-8, -9}, {4, -7}, {-2, -8} } },
	[194] = { .set = { {-1, -9}, {-10, -9}, {8, -9}, {-1, -8} } },
	[195] = { .set = { {-8, -10}, {-10, -9}, {2, -7}, {-4, -8} } },
	[196] = { .set = { {-9, -12}, {1, -9}, {0, -6}, {-5, -10} } },
	[197] = { .set = { {-7, -14}, {4, -10}, {-6, -5}, {-3, -12} } },
	[198] = { .set = { {-1, -14}, {5, -8}, {-7, -8}, {-1, -12} } },
	[199] = { .set = { {6, -14}, {-5, -10}, {5, -5}, {2, -12} } },
	[200] = { .set = { {8, -12}, {-2, -9}, {-1, -6}, {4, -10} } },
	[201] = { .set = { {7, -10}, {9, -9}, {-3, -7}, {3, -8} } },
	[202] = { .set = { {-1, -11}, {-8, -6}, {6, -6}, {-1, -10} } },
	[203] = { .set = { {-4, -11}, {-6, -7}, {4, -6}, {-3, -10} } },
	[204] = { .set = { {-5, -12}, {-1, -9}, {-2, -5}, {-3, -10} } },
	[205] = { .set = { {-4, -12}, {5, -8}, {-6, -5}, {-1, -10} } },
	[206] = { .set = { {-1, -13}, {5, -6}, {-7, -6}, {-1, -11} } },
	[207] = { .set = { {2, -12}, {-7, -8}, {4, -5}, {-1, -10} } },
	[208] = { .set = { {3, -12}, {-1, -9}, {0, -5}, {1, -10} } },
	[209] = { .set = { {2, -11}, {4, -7}, {-6, -6}, {1, -10} } },
	[210] = { .set = { {-9, -1}, {-9, 1}, {-8, 3}, {-6, -2} } },
	[211] = { .set = { {8, -1}, {8, 1}, {7, 3}, {5, -2} } },
	[212] = { .set = { {-3, -12}, {-5, -7}, {4, -6}, {0, -9} } },
	[213] = { .set = { {-4, -12}, {0, -9}, {-1, -5}, {-2, -10} } },
	[214] = { .set = { {2, -12}, {4, -7}, {-5, -6}, {-1, -9} } },
	[215] = { .set = { {3, -12}, {-1, -9}, {0, -5}, {1, -10} } },
	[216] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[217] = { .set = { {-3, -12}, {-5, -7}, {4, -6}, {0, -9} } },
	[218] = { .set = { {-3, -12}, {-5, -7}, {4, -6}, {0, -9} } },
	[219] = { .set = { {2, -12}, {4, -7}, {-5, -6}, {-1, -9} } },
	[220] = { .set = { {2, -12}, {4, -7}, {-5, -6}, {-1, -9} } },
	[221] = { .set = { {-4, -12}, {0, -9}, {-1, -5}, {-2, -10} } },
	[222] = { .set = { {-4, -12}, {0, -9}, {-1, -5}, {-2, -10} } },
	[223] = { .set = { {3, -12}, {-1, -9}, {0, -5}, {1, -10} } },
	[224] = { .set = { {3, -12}, {-1, -9}, {0, -5}, {1, -10} } },
	[225] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
};

static const ax_anim *const sGardevoirAnimTable1[] = {
	AX_ANIM_PTR(sGardevoirAnims_1_1),
	AX_ANIM_PTR(sGardevoirAnims_1_2),
	AX_ANIM_PTR(sGardevoirAnims_1_3),
	AX_ANIM_PTR(sGardevoirAnims_1_4),
	AX_ANIM_PTR(sGardevoirAnims_1_5),
	AX_ANIM_PTR(sGardevoirAnims_1_6),
	AX_ANIM_PTR(sGardevoirAnims_1_7),
	AX_ANIM_PTR(sGardevoirAnims_1_8),
};

static const ax_anim *const sGardevoirAnimTable2[] = {
	AX_ANIM_PTR(sGardevoirAnims_2_1),
	AX_ANIM_PTR(sGardevoirAnims_2_2),
	AX_ANIM_PTR(sGardevoirAnims_2_3),
	AX_ANIM_PTR(sGardevoirAnims_2_4),
	AX_ANIM_PTR(sGardevoirAnims_2_5),
	AX_ANIM_PTR(sGardevoirAnims_2_6),
	AX_ANIM_PTR(sGardevoirAnims_2_7),
	AX_ANIM_PTR(sGardevoirAnims_2_8),
};

static const ax_anim *const sGardevoirAnimTable3[] = {
	AX_ANIM_PTR(sGardevoirAnims_3_1),
	AX_ANIM_PTR(sGardevoirAnims_3_2),
	AX_ANIM_PTR(sGardevoirAnims_3_3),
	AX_ANIM_PTR(sGardevoirAnims_3_4),
	AX_ANIM_PTR(sGardevoirAnims_3_5),
	AX_ANIM_PTR(sGardevoirAnims_3_6),
	AX_ANIM_PTR(sGardevoirAnims_3_7),
	AX_ANIM_PTR(sGardevoirAnims_3_8),
};

static const ax_anim *const sGardevoirAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_02219),
	AX_ANIM_PTR(gAxSharedAnim_02287),
	AX_ANIM_PTR(gAxSharedAnim_02272),
	AX_ANIM_PTR(gAxSharedAnim_02262),
	AX_ANIM_PTR(gAxSharedAnim_02260),
	AX_ANIM_PTR(gAxSharedAnim_02249),
	AX_ANIM_PTR(gAxSharedAnim_02234),
	AX_ANIM_PTR(gAxSharedAnim_02224),
};

static const ax_anim *const sGardevoirAnimTable5[] = {
	AX_ANIM_PTR(sGardevoirAnims_5_1),
	AX_ANIM_PTR(sGardevoirAnims_5_2),
	AX_ANIM_PTR(sGardevoirAnims_5_3),
	AX_ANIM_PTR(sGardevoirAnims_5_4),
	AX_ANIM_PTR(sGardevoirAnims_5_5),
	AX_ANIM_PTR(sGardevoirAnims_5_6),
	AX_ANIM_PTR(sGardevoirAnims_5_7),
	AX_ANIM_PTR(sGardevoirAnims_5_8),
};

static const ax_anim *const sGardevoirAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
};

static const ax_anim *const sGardevoirAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00330),
	AX_ANIM_PTR(gAxSharedAnim_00340),
	AX_ANIM_PTR(gAxSharedAnim_00348),
	AX_ANIM_PTR(gAxSharedAnim_00356),
	AX_ANIM_PTR(gAxSharedAnim_00368),
	AX_ANIM_PTR(gAxSharedAnim_00376),
	AX_ANIM_PTR(gAxSharedAnim_00383),
	AX_ANIM_PTR(gAxSharedAnim_00390),
};

static const ax_anim *const sGardevoirAnimTable8[] = {
	AX_ANIM_PTR(sGardevoirAnims_8_1),
	AX_ANIM_PTR(sGardevoirAnims_8_2),
	AX_ANIM_PTR(sGardevoirAnims_8_3),
	AX_ANIM_PTR(sGardevoirAnims_8_4),
	AX_ANIM_PTR(sGardevoirAnims_8_5),
	AX_ANIM_PTR(sGardevoirAnims_8_6),
	AX_ANIM_PTR(sGardevoirAnims_8_7),
	AX_ANIM_PTR(sGardevoirAnims_8_8),
};

static const ax_anim *const sGardevoirAnimTable9[] = {
	AX_ANIM_PTR(sGardevoirAnims_9_1),
	AX_ANIM_PTR(sGardevoirAnims_9_2),
	AX_ANIM_PTR(sGardevoirAnims_9_3),
	AX_ANIM_PTR(sGardevoirAnims_9_4),
	AX_ANIM_PTR(sGardevoirAnims_9_5),
	AX_ANIM_PTR(sGardevoirAnims_9_6),
	AX_ANIM_PTR(sGardevoirAnims_9_7),
	AX_ANIM_PTR(sGardevoirAnims_9_8),
};

static const ax_anim *const sGardevoirAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00705),
	AX_ANIM_PTR(gAxSharedAnim_00714),
	AX_ANIM_PTR(gAxSharedAnim_00725),
	AX_ANIM_PTR(gAxSharedAnim_00737),
	AX_ANIM_PTR(gAxSharedAnim_00750),
	AX_ANIM_PTR(gAxSharedAnim_00760),
	AX_ANIM_PTR(gAxSharedAnim_00772),
	AX_ANIM_PTR(gAxSharedAnim_00781),
};

static const ax_anim *const sGardevoirAnimTable11[] = {
	AX_ANIM_PTR(sGardevoirAnims_11_1),
	AX_ANIM_PTR(gAxSharedAnim_00835),
	AX_ANIM_PTR(gAxSharedAnim_00870),
	AX_ANIM_PTR(sGardevoirAnims_11_4),
	AX_ANIM_PTR(sGardevoirAnims_11_5),
	AX_ANIM_PTR(sGardevoirAnims_11_6),
	AX_ANIM_PTR(gAxSharedAnim_01040),
	AX_ANIM_PTR(gAxSharedAnim_01086),
};

static const ax_anim *const sGardevoirAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01147),
	AX_ANIM_PTR(gAxSharedAnim_01230),
	AX_ANIM_PTR(gAxSharedAnim_01208),
	AX_ANIM_PTR(gAxSharedAnim_01194),
	AX_ANIM_PTR(gAxSharedAnim_01193),
	AX_ANIM_PTR(gAxSharedAnim_01181),
	AX_ANIM_PTR(gAxSharedAnim_01161),
	AX_ANIM_PTR(gAxSharedAnim_01148),
};

static const ax_anim *const sGardevoirAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01242),
	AX_ANIM_PTR(gAxSharedAnim_01323),
	AX_ANIM_PTR(gAxSharedAnim_01314),
	AX_ANIM_PTR(gAxSharedAnim_01301),
	AX_ANIM_PTR(gAxSharedAnim_01286),
	AX_ANIM_PTR(gAxSharedAnim_01278),
	AX_ANIM_PTR(gAxSharedAnim_01267),
	AX_ANIM_PTR(gAxSharedAnim_01253),
};

static const ax_anim *const sGardevoirAnimTable14[] = {
	AX_ANIM_PTR(sGardevoirAnims_14_1),
	AX_ANIM_PTR(sGardevoirAnims_14_1),
	AX_ANIM_PTR(sGardevoirAnims_14_3),
	AX_ANIM_PTR(sGardevoirAnims_14_1),
	AX_ANIM_PTR(sGardevoirAnims_14_1),
	AX_ANIM_PTR(sGardevoirAnims_14_1),
	AX_ANIM_PTR(sGardevoirAnims_14_1),
	AX_ANIM_PTR(sGardevoirAnims_14_1),
};

static const ax_anim *const sGardevoirAnimTable15[] = {
	AX_ANIM_PTR(sGardevoirAnims_15_1),
	AX_ANIM_PTR(sGardevoirAnims_15_2),
	AX_ANIM_PTR(sGardevoirAnims_15_3),
	AX_ANIM_PTR(sGardevoirAnims_15_3),
	AX_ANIM_PTR(sGardevoirAnims_15_3),
	AX_ANIM_PTR(sGardevoirAnims_15_3),
	AX_ANIM_PTR(sGardevoirAnims_15_7),
	AX_ANIM_PTR(sGardevoirAnims_15_1),
};

static const ax_anim *const sGardevoirAnimTable16[] = {
	AX_ANIM_PTR(sGardevoirAnims_16_1),
	AX_ANIM_PTR(sGardevoirAnims_16_2),
	AX_ANIM_PTR(sGardevoirAnims_16_3),
	AX_ANIM_PTR(sGardevoirAnims_16_4),
	AX_ANIM_PTR(sGardevoirAnims_16_4),
	AX_ANIM_PTR(sGardevoirAnims_16_4),
	AX_ANIM_PTR(sGardevoirAnims_16_7),
	AX_ANIM_PTR(sGardevoirAnims_16_1),
};

static const ax_anim *const *const sAxAnimationsGardevoir[] = {
	sGardevoirAnimTable1,
	sGardevoirAnimTable2,
	sGardevoirAnimTable3,
	sGardevoirAnimTable4,
	sGardevoirAnimTable5,
	sGardevoirAnimTable6,
	sGardevoirAnimTable7,
	sGardevoirAnimTable8,
	sGardevoirAnimTable9,
	sGardevoirAnimTable10,
	sGardevoirAnimTable11,
	sGardevoirAnimTable12,
	sGardevoirAnimTable13,
	sGardevoirAnimTable14,
	sGardevoirAnimTable15,
	sGardevoirAnimTable16,
};

static const ax_sprite *const sAxSpritesGardevoir[] = {
	sGardevoirSprites1,
	sGardevoirSprites2,
	sGardevoirSprites3,
	sGardevoirSprites4,
	sGardevoirSprites5,
	sGardevoirSprites6,
	sGardevoirSprites7,
	sGardevoirSprites8,
	sGardevoirSprites9,
	sGardevoirSprites10,
	sGardevoirSprites11,
	sGardevoirSprites12,
	sGardevoirSprites13,
	sGardevoirSprites14,
	sGardevoirSprites15,
	sGardevoirSprites16,
	sGardevoirSprites17,
	sGardevoirSprites18,
	sGardevoirSprites19,
	sGardevoirSprites20,
	sGardevoirSprites21,
	sGardevoirSprites22,
	sGardevoirSprites23,
	sGardevoirSprites24,
	sGardevoirSprites25,
	sGardevoirSprites26,
	sGardevoirSprites27,
	sGardevoirSprites28,
	sGardevoirSprites29,
	sGardevoirSprites30,
	sGardevoirSprites31,
	sGardevoirSprites32,
	sGardevoirSprites33,
	sGardevoirSprites34,
	sGardevoirSprites35,
	sGardevoirSprites36,
	sGardevoirSprites37,
	sGardevoirSprites38,
	sGardevoirSprites39,
	sGardevoirSprites40,
	sGardevoirSprites41,
	sGardevoirSprites42,
	sGardevoirSprites43,
	sGardevoirSprites44,
	sGardevoirSprites45,
	sGardevoirSprites46,
	sGardevoirSprites47,
	sGardevoirSprites48,
	sGardevoirSprites49,
	sGardevoirSprites50,
	sGardevoirSprites51,
	sGardevoirSprites52,
	sGardevoirSprites53,
	sGardevoirSprites54,
	sGardevoirSprites55,
	sGardevoirSprites56,
	sGardevoirSprites57,
	sGardevoirSprites58,
	sGardevoirSprites59,
};

static const axmain sAxMainGardevoir = {
	.poses = sAxPosesGardevoir,
	.animations = sAxAnimationsGardevoir,
	.animCount = ARRAY_COUNT(sAxAnimationsGardevoir),
	.spriteData = sAxSpritesGardevoir,
	.positions = sAxPositionsGardevoir,
};
