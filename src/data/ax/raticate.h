/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainRaticate;
const SiroArchive gAxRaticate = {"SIRO", &sAxMainRaticate};

static const ax_pose sRaticatePose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose3[] = {
	AX_POSE(2, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose4[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose5[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose6[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose8[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose9[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose10[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose11[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose12[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose13[] = {
	AX_POSE(12, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose14[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose15[] = {
	AX_POSE(14, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose16[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose17[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose18[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose19[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose20[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose21[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose22[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose23[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose24[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose74[] = {
	AX_POSE(15, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose75[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose78[] = {
	AX_POSE(17, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose79[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose80[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose82[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose83[] = {
	AX_POSE(20, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose86[] = {
	AX_POSE(21, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose87[] = {
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose90[] = {
	AX_POSE(23, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose91[] = {
	AX_POSE(24, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose94[] = {
	AX_POSE(21, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose95[] = {
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose98[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose99[] = {
	AX_POSE(20, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose102[] = {
	AX_POSE(17, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose103[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose104[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose105[] = {
	AX_POSE(25, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose106[] = {
	AX_POSE(26, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose108[] = {
	AX_POSE(27, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose109[] = {
	AX_POSE(28, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose111[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose112[] = {
	AX_POSE(30, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose113[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose114[] = {
	AX_POSE(31, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose115[] = {
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose116[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose117[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose118[] = {
	AX_POSE(34, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose120[] = {
	AX_POSE(31, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose121[] = {
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose122[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose123[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose124[] = {
	AX_POSE(30, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose125[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose126[] = {
	AX_POSE(27, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose127[] = {
	AX_POSE(28, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose129[] = {
	AX_POSE(35, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose130[] = {
	AX_POSE(36, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose131[] = {
	AX_POSE(37, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose132[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose133[] = {
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose134[] = {
	AX_POSE(40, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose135[] = {
	AX_POSE(41, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose136[] = {
	AX_POSE(40, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose137[] = {
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose138[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose147[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose150[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose156[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose159[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose163[] = {
	AX_POSE(16, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose164[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose165[] = {
	AX_POSE(20, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose166[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose168[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose169[] = {
	AX_POSE(20, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose170[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaticatePose176[] = {
	AX_POSE(21, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const u8 sRaticateAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_1_1.lz");
static const u8 sRaticateAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_1_2.lz");
static const u8 sRaticateAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_1_3.lz");
static const u8 sRaticateAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_1_4.lz");
static const u8 sRaticateAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_1_5.lz");
static const u8 sRaticateAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_1_6.lz");
static const u8 sRaticateAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_1_7.lz");
static const u8 sRaticateAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_1_8.lz");
static const u8 sRaticateAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_2_1.lz");
static const u8 sRaticateAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_2_2.lz");
static const u8 sRaticateAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_2_3.lz");
static const u8 sRaticateAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_2_4.lz");
static const u8 sRaticateAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_2_5.lz");
static const u8 sRaticateAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_2_6.lz");
static const u8 sRaticateAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_2_7.lz");
static const u8 sRaticateAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_2_8.lz");
static const u8 sRaticateAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_3_1.lz");
static const u8 sRaticateAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_3_2.lz");
static const u8 sRaticateAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_3_3.lz");
static const u8 sRaticateAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_3_4.lz");
static const u8 sRaticateAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_3_5.lz");
static const u8 sRaticateAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_3_6.lz");
static const u8 sRaticateAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_3_7.lz");
static const u8 sRaticateAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_3_8.lz");
static const u8 sRaticateAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_4_1.lz");
static const u8 sRaticateAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_4_2.lz");
static const u8 sRaticateAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_4_3.lz");
static const u8 sRaticateAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_4_4.lz");
static const u8 sRaticateAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_4_5.lz");
static const u8 sRaticateAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_4_6.lz");
static const u8 sRaticateAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_4_7.lz");
static const u8 sRaticateAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_4_8.lz");
static const u8 sRaticateAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_5_1.lz");
static const u8 sRaticateAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_5_2.lz");
static const u8 sRaticateAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_5_3.lz");
static const u8 sRaticateAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_5_4.lz");
static const u8 sRaticateAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_5_5.lz");
static const u8 sRaticateAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_5_6.lz");
static const u8 sRaticateAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_5_7.lz");
static const u8 sRaticateAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_5_8.lz");
static const u8 sRaticateAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_8_1.lz");
static const u8 sRaticateAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_8_2.lz");
static const u8 sRaticateAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_8_3.lz");
static const u8 sRaticateAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_8_4.lz");
static const u8 sRaticateAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_8_5.lz");
static const u8 sRaticateAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_8_6.lz");
static const u8 sRaticateAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_8_7.lz");
static const u8 sRaticateAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_8_8.lz");
static const u8 sRaticateAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_9_1.lz");
static const u8 sRaticateAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_9_2.lz");
static const u8 sRaticateAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_9_4.lz");
static const u8 sRaticateAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_9_5.lz");
static const u8 sRaticateAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_9_6.lz");
static const u8 sRaticateAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_9_8.lz");
static const u8 sRaticateAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_11_1.lz");
static const u8 sRaticateAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_11_2.lz");
static const u8 sRaticateAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_11_3.lz");
static const u8 sRaticateAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_11_4.lz");
static const u8 sRaticateAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_11_5.lz");
static const u8 sRaticateAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_11_6.lz");
static const u8 sRaticateAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_11_7.lz");
static const u8 sRaticateAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raticate/sRaticateAnims_11_8.lz");

static const u8 sRaticateGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_1.4bpp.lz");
static const ax_sprite sRaticateSprites1[] = {
	{sRaticateGfx1, ARRAY_COUNT(sRaticateGfx1)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_2.4bpp.lz");
static const ax_sprite sRaticateSprites2[] = {
	{sRaticateGfx2, ARRAY_COUNT(sRaticateGfx2)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_3.4bpp.lz");
static const ax_sprite sRaticateSprites3[] = {
	{sRaticateGfx3, ARRAY_COUNT(sRaticateGfx3)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_4.4bpp.lz");
static const ax_sprite sRaticateSprites4[] = {
	{sRaticateGfx4, ARRAY_COUNT(sRaticateGfx4)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_5.4bpp.lz");
static const ax_sprite sRaticateSprites5[] = {
	{sRaticateGfx5, ARRAY_COUNT(sRaticateGfx5)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_6.4bpp.lz");
static const ax_sprite sRaticateSprites6[] = {
	{sRaticateGfx6, ARRAY_COUNT(sRaticateGfx6)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_7.4bpp.lz");
static const ax_sprite sRaticateSprites7[] = {
	{sRaticateGfx7, ARRAY_COUNT(sRaticateGfx7)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_8.4bpp.lz");
static const ax_sprite sRaticateSprites8[] = {
	{sRaticateGfx8, ARRAY_COUNT(sRaticateGfx8)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_9.4bpp.lz");
static const ax_sprite sRaticateSprites9[] = {
	{sRaticateGfx9, ARRAY_COUNT(sRaticateGfx9)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_10.4bpp.lz");
static const ax_sprite sRaticateSprites10[] = {
	{sRaticateGfx10, ARRAY_COUNT(sRaticateGfx10)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_11.4bpp.lz");
static const ax_sprite sRaticateSprites11[] = {
	{sRaticateGfx11, ARRAY_COUNT(sRaticateGfx11)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_12.4bpp.lz");
static const ax_sprite sRaticateSprites12[] = {
	{sRaticateGfx12, ARRAY_COUNT(sRaticateGfx12)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_13.4bpp.lz");
static const ax_sprite sRaticateSprites13[] = {
	{sRaticateGfx13, ARRAY_COUNT(sRaticateGfx13)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_14.4bpp.lz");
static const ax_sprite sRaticateSprites14[] = {
	{sRaticateGfx14, ARRAY_COUNT(sRaticateGfx14)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_15.4bpp.lz");
static const ax_sprite sRaticateSprites15[] = {
	{sRaticateGfx15, ARRAY_COUNT(sRaticateGfx15)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_16.4bpp.lz");
static const u8 sRaticateGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_16_1.4bpp.lz");
static const u8 sRaticateGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_16_2.4bpp.lz");
static const u8 sRaticateGfx16_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_16_3.4bpp.lz");
static const ax_sprite sRaticateSprites16[] = {
	{NULL, 32}, 
	{sRaticateGfx16, ARRAY_COUNT(sRaticateGfx16)}, 
	{NULL, 32}, 
	{sRaticateGfx16_1, ARRAY_COUNT(sRaticateGfx16_1)}, 
	{NULL, 32}, 
	{sRaticateGfx16_2, ARRAY_COUNT(sRaticateGfx16_2)}, 
	{NULL, 64}, 
	{sRaticateGfx16_3, ARRAY_COUNT(sRaticateGfx16_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaticateGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_17.4bpp.lz");
static const u8 sRaticateGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_17_1.4bpp.lz");
static const u8 sRaticateGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_17_2.4bpp.lz");
static const u8 sRaticateGfx17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_17_3.4bpp.lz");
static const ax_sprite sRaticateSprites17[] = {
	{NULL, 32}, 
	{sRaticateGfx17, ARRAY_COUNT(sRaticateGfx17)}, 
	{NULL, 64}, 
	{sRaticateGfx17_1, ARRAY_COUNT(sRaticateGfx17_1)}, 
	{NULL, 32}, 
	{sRaticateGfx17_2, ARRAY_COUNT(sRaticateGfx17_2)}, 
	{NULL, 32}, 
	{sRaticateGfx17_3, ARRAY_COUNT(sRaticateGfx17_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaticateGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_18.4bpp.lz");
static const u8 sRaticateGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_18_1.4bpp.lz");
static const u8 sRaticateGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_18_2.4bpp.lz");
static const ax_sprite sRaticateSprites18[] = {
	{NULL, 32}, 
	{sRaticateGfx18, ARRAY_COUNT(sRaticateGfx18)}, 
	{NULL, 32}, 
	{sRaticateGfx18_1, ARRAY_COUNT(sRaticateGfx18_1)}, 
	{NULL, 32}, 
	{sRaticateGfx18_2, ARRAY_COUNT(sRaticateGfx18_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaticateGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_19.4bpp.lz");
static const u8 sRaticateGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_19_1.4bpp.lz");
static const ax_sprite sRaticateSprites19[] = {
	{NULL, 128}, 
	{sRaticateGfx19, ARRAY_COUNT(sRaticateGfx19)}, 
	{NULL, 64}, 
	{sRaticateGfx19_1, ARRAY_COUNT(sRaticateGfx19_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaticateGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_20.4bpp.lz");
static const u8 sRaticateGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_20_1.4bpp.lz");
static const u8 sRaticateGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_20_2.4bpp.lz");
static const ax_sprite sRaticateSprites20[] = {
	{NULL, 32}, 
	{sRaticateGfx20, ARRAY_COUNT(sRaticateGfx20)}, 
	{NULL, 64}, 
	{sRaticateGfx20_1, ARRAY_COUNT(sRaticateGfx20_1)}, 
	{NULL, 32}, 
	{sRaticateGfx20_2, ARRAY_COUNT(sRaticateGfx20_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaticateGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_21.4bpp.lz");
static const ax_sprite sRaticateSprites21[] = {
	{NULL, 128}, 
	{sRaticateGfx21, ARRAY_COUNT(sRaticateGfx21)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaticateGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_22.4bpp.lz");
static const u8 sRaticateGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_22_1.4bpp.lz");
static const u8 sRaticateGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_22_2.4bpp.lz");
static const u8 sRaticateGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_22_3.4bpp.lz");
static const ax_sprite sRaticateSprites22[] = {
	{NULL, 32}, 
	{sRaticateGfx22, ARRAY_COUNT(sRaticateGfx22)}, 
	{NULL, 64}, 
	{sRaticateGfx22_1, ARRAY_COUNT(sRaticateGfx22_1)}, 
	{NULL, 32}, 
	{sRaticateGfx22_2, ARRAY_COUNT(sRaticateGfx22_2)}, 
	{NULL, 32}, 
	{sRaticateGfx22_3, ARRAY_COUNT(sRaticateGfx22_3)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_23.4bpp.lz");
static const u8 sRaticateGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_23_1.4bpp.lz");
static const ax_sprite sRaticateSprites23[] = {
	{NULL, 128}, 
	{sRaticateGfx23, ARRAY_COUNT(sRaticateGfx23)}, 
	{NULL, 32}, 
	{sRaticateGfx23_1, ARRAY_COUNT(sRaticateGfx23_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaticateGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_24.4bpp.lz");
static const u8 sRaticateGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_24_1.4bpp.lz");
static const u8 sRaticateGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_24_2.4bpp.lz");
static const u8 sRaticateGfx24_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_24_3.4bpp.lz");
static const ax_sprite sRaticateSprites24[] = {
	{NULL, 32}, 
	{sRaticateGfx24, ARRAY_COUNT(sRaticateGfx24)}, 
	{NULL, 32}, 
	{sRaticateGfx24_1, ARRAY_COUNT(sRaticateGfx24_1)}, 
	{NULL, 32}, 
	{sRaticateGfx24_2, ARRAY_COUNT(sRaticateGfx24_2)}, 
	{NULL, 64}, 
	{sRaticateGfx24_3, ARRAY_COUNT(sRaticateGfx24_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaticateGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_25.4bpp.lz");
static const u8 sRaticateGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_25_1.4bpp.lz");
static const ax_sprite sRaticateSprites25[] = {
	{NULL, 128}, 
	{sRaticateGfx25, ARRAY_COUNT(sRaticateGfx25)}, 
	{NULL, 32}, 
	{sRaticateGfx25_1, ARRAY_COUNT(sRaticateGfx25_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaticateGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_26.4bpp.lz");
static const u8 sRaticateGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_26_1.4bpp.lz");
static const u8 sRaticateGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_26_2.4bpp.lz");
static const ax_sprite sRaticateSprites26[] = {
	{NULL, 128}, 
	{sRaticateGfx26, ARRAY_COUNT(sRaticateGfx26)}, 
	{NULL, 32}, 
	{sRaticateGfx26_1, ARRAY_COUNT(sRaticateGfx26_1)}, 
	{NULL, 32}, 
	{sRaticateGfx26_2, ARRAY_COUNT(sRaticateGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaticateGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_27.4bpp.lz");
static const u8 sRaticateGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_27_1.4bpp.lz");
static const ax_sprite sRaticateSprites27[] = {
	{NULL, 160}, 
	{sRaticateGfx27, ARRAY_COUNT(sRaticateGfx27)}, 
	{NULL, 32}, 
	{sRaticateGfx27_1, ARRAY_COUNT(sRaticateGfx27_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaticateGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_28.4bpp.lz");
static const u8 sRaticateGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_28_1.4bpp.lz");
static const ax_sprite sRaticateSprites28[] = {
	{NULL, 128}, 
	{sRaticateGfx28, ARRAY_COUNT(sRaticateGfx28)}, 
	{NULL, 32}, 
	{sRaticateGfx28_1, ARRAY_COUNT(sRaticateGfx28_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaticateGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_29.4bpp.lz");
static const u8 sRaticateGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_29_1.4bpp.lz");
static const u8 sRaticateGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_29_2.4bpp.lz");
static const ax_sprite sRaticateSprites29[] = {
	{NULL, 160}, 
	{sRaticateGfx29, ARRAY_COUNT(sRaticateGfx29)}, 
	{NULL, 32}, 
	{sRaticateGfx29_1, ARRAY_COUNT(sRaticateGfx29_1)}, 
	{NULL, 32}, 
	{sRaticateGfx29_2, ARRAY_COUNT(sRaticateGfx29_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaticateGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_30.4bpp.lz");
static const u8 sRaticateGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_30_1.4bpp.lz");
static const ax_sprite sRaticateSprites30[] = {
	{NULL, 160}, 
	{sRaticateGfx30, ARRAY_COUNT(sRaticateGfx30)}, 
	{NULL, 32}, 
	{sRaticateGfx30_1, ARRAY_COUNT(sRaticateGfx30_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaticateGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_31.4bpp.lz");
static const u8 sRaticateGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_31_1.4bpp.lz");
static const ax_sprite sRaticateSprites31[] = {
	{NULL, 128}, 
	{sRaticateGfx31, ARRAY_COUNT(sRaticateGfx31)}, 
	{NULL, 32}, 
	{sRaticateGfx31_1, ARRAY_COUNT(sRaticateGfx31_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaticateGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_32.4bpp.lz");
static const u8 sRaticateGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_32_1.4bpp.lz");
static const u8 sRaticateGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_32_2.4bpp.lz");
static const ax_sprite sRaticateSprites32[] = {
	{NULL, 160}, 
	{sRaticateGfx32, ARRAY_COUNT(sRaticateGfx32)}, 
	{NULL, 32}, 
	{sRaticateGfx32_1, ARRAY_COUNT(sRaticateGfx32_1)}, 
	{NULL, 32}, 
	{sRaticateGfx32_2, ARRAY_COUNT(sRaticateGfx32_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaticateGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_33.4bpp.lz");
static const u8 sRaticateGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_33_1.4bpp.lz");
static const u8 sRaticateGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_33_2.4bpp.lz");
static const ax_sprite sRaticateSprites33[] = {
	{NULL, 160}, 
	{sRaticateGfx33, ARRAY_COUNT(sRaticateGfx33)}, 
	{NULL, 64}, 
	{sRaticateGfx33_1, ARRAY_COUNT(sRaticateGfx33_1)}, 
	{NULL, 64}, 
	{sRaticateGfx33_2, ARRAY_COUNT(sRaticateGfx33_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaticateGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_34.4bpp.lz");
static const u8 sRaticateGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_34_1.4bpp.lz");
static const u8 sRaticateGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_34_2.4bpp.lz");
static const ax_sprite sRaticateSprites34[] = {
	{NULL, 160}, 
	{sRaticateGfx34, ARRAY_COUNT(sRaticateGfx34)}, 
	{NULL, 64}, 
	{sRaticateGfx34_1, ARRAY_COUNT(sRaticateGfx34_1)}, 
	{NULL, 32}, 
	{sRaticateGfx34_2, ARRAY_COUNT(sRaticateGfx34_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaticateGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_35.4bpp.lz");
static const u8 sRaticateGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_35_1.4bpp.lz");
static const u8 sRaticateGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_35_2.4bpp.lz");
static const ax_sprite sRaticateSprites35[] = {
	{NULL, 160}, 
	{sRaticateGfx35, ARRAY_COUNT(sRaticateGfx35)}, 
	{NULL, 32}, 
	{sRaticateGfx35_1, ARRAY_COUNT(sRaticateGfx35_1)}, 
	{NULL, 64}, 
	{sRaticateGfx35_2, ARRAY_COUNT(sRaticateGfx35_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaticateGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_36.4bpp.lz");
static const ax_sprite sRaticateSprites36[] = {
	{sRaticateGfx36, ARRAY_COUNT(sRaticateGfx36)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_37.4bpp.lz");
static const ax_sprite sRaticateSprites37[] = {
	{sRaticateGfx37, ARRAY_COUNT(sRaticateGfx37)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_38.4bpp.lz");
static const ax_sprite sRaticateSprites38[] = {
	{sRaticateGfx38, ARRAY_COUNT(sRaticateGfx38)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_39.4bpp.lz");
static const ax_sprite sRaticateSprites39[] = {
	{sRaticateGfx39, ARRAY_COUNT(sRaticateGfx39)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_40.4bpp.lz");
static const ax_sprite sRaticateSprites40[] = {
	{sRaticateGfx40, ARRAY_COUNT(sRaticateGfx40)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_41.4bpp.lz");
static const ax_sprite sRaticateSprites41[] = {
	{sRaticateGfx41, ARRAY_COUNT(sRaticateGfx41)}, 
	{NULL, 0}
};
static const u8 sRaticateGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raticate/sprite_42.4bpp.lz");
static const ax_sprite sRaticateSprites42[] = {
	{sRaticateGfx42, ARRAY_COUNT(sRaticateGfx42)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesRaticate[] = {
	sRaticatePose1,
	sRaticatePose2,
	sRaticatePose3,
	sRaticatePose4,
	sRaticatePose5,
	sRaticatePose6,
	sRaticatePose7,
	sRaticatePose8,
	sRaticatePose9,
	sRaticatePose10,
	sRaticatePose11,
	sRaticatePose12,
	sRaticatePose13,
	sRaticatePose14,
	sRaticatePose15,
	sRaticatePose16,
	sRaticatePose17,
	sRaticatePose18,
	sRaticatePose19,
	sRaticatePose20,
	sRaticatePose21,
	sRaticatePose22,
	sRaticatePose23,
	sRaticatePose24,
	sRaticatePose1,
	sRaticatePose2,
	sRaticatePose3,
	sRaticatePose4,
	sRaticatePose5,
	sRaticatePose6,
	sRaticatePose7,
	sRaticatePose8,
	sRaticatePose9,
	sRaticatePose10,
	sRaticatePose11,
	sRaticatePose12,
	sRaticatePose13,
	sRaticatePose14,
	sRaticatePose15,
	sRaticatePose16,
	sRaticatePose17,
	sRaticatePose18,
	sRaticatePose19,
	sRaticatePose20,
	sRaticatePose21,
	sRaticatePose22,
	sRaticatePose23,
	sRaticatePose24,
	sRaticatePose1,
	sRaticatePose2,
	sRaticatePose3,
	sRaticatePose4,
	sRaticatePose5,
	sRaticatePose6,
	sRaticatePose7,
	sRaticatePose8,
	sRaticatePose9,
	sRaticatePose10,
	sRaticatePose11,
	sRaticatePose12,
	sRaticatePose13,
	sRaticatePose14,
	sRaticatePose15,
	sRaticatePose16,
	sRaticatePose17,
	sRaticatePose18,
	sRaticatePose19,
	sRaticatePose20,
	sRaticatePose21,
	sRaticatePose22,
	sRaticatePose23,
	sRaticatePose24,
	sRaticatePose1,
	sRaticatePose74,
	sRaticatePose75,
	sRaticatePose2,
	sRaticatePose4,
	sRaticatePose78,
	sRaticatePose79,
	sRaticatePose80,
	sRaticatePose7,
	sRaticatePose82,
	sRaticatePose83,
	sRaticatePose8,
	sRaticatePose10,
	sRaticatePose86,
	sRaticatePose87,
	sRaticatePose11,
	sRaticatePose13,
	sRaticatePose90,
	sRaticatePose91,
	sRaticatePose14,
	sRaticatePose16,
	sRaticatePose94,
	sRaticatePose95,
	sRaticatePose17,
	sRaticatePose19,
	sRaticatePose98,
	sRaticatePose99,
	sRaticatePose20,
	sRaticatePose22,
	sRaticatePose102,
	sRaticatePose103,
	sRaticatePose104,
	sRaticatePose105,
	sRaticatePose106,
	sRaticatePose2,
	sRaticatePose108,
	sRaticatePose109,
	sRaticatePose80,
	sRaticatePose111,
	sRaticatePose112,
	sRaticatePose113,
	sRaticatePose114,
	sRaticatePose115,
	sRaticatePose116,
	sRaticatePose117,
	sRaticatePose118,
	sRaticatePose14,
	sRaticatePose120,
	sRaticatePose121,
	sRaticatePose122,
	sRaticatePose123,
	sRaticatePose124,
	sRaticatePose125,
	sRaticatePose126,
	sRaticatePose127,
	sRaticatePose104,
	sRaticatePose129,
	sRaticatePose130,
	sRaticatePose131,
	sRaticatePose132,
	sRaticatePose133,
	sRaticatePose134,
	sRaticatePose135,
	sRaticatePose136,
	sRaticatePose137,
	sRaticatePose138,
	sRaticatePose1,
	sRaticatePose2,
	sRaticatePose3,
	sRaticatePose4,
	sRaticatePose80,
	sRaticatePose6,
	sRaticatePose7,
	sRaticatePose113,
	sRaticatePose147,
	sRaticatePose10,
	sRaticatePose116,
	sRaticatePose150,
	sRaticatePose13,
	sRaticatePose14,
	sRaticatePose15,
	sRaticatePose16,
	sRaticatePose122,
	sRaticatePose156,
	sRaticatePose19,
	sRaticatePose125,
	sRaticatePose159,
	sRaticatePose22,
	sRaticatePose104,
	sRaticatePose24,
	sRaticatePose163,
	sRaticatePose164,
	sRaticatePose165,
	sRaticatePose166,
	sRaticatePose91,
	sRaticatePose168,
	sRaticatePose169,
	sRaticatePose170,
	sRaticatePose74,
	sRaticatePose78,
	sRaticatePose82,
	sRaticatePose86,
	sRaticatePose90,
	sRaticatePose176,
	sRaticatePose98,
	sRaticatePose102,
	sRaticatePose1,
	sRaticatePose3,
	sRaticatePose2,
	sRaticatePose4,
	sRaticatePose6,
	sRaticatePose5,
	sRaticatePose7,
	sRaticatePose9,
	sRaticatePose8,
	sRaticatePose10,
	sRaticatePose12,
	sRaticatePose11,
	sRaticatePose13,
	sRaticatePose15,
	sRaticatePose14,
	sRaticatePose16,
	sRaticatePose18,
	sRaticatePose17,
	sRaticatePose19,
	sRaticatePose21,
	sRaticatePose20,
	sRaticatePose22,
	sRaticatePose24,
	sRaticatePose23,
	sRaticatePose163,
	sRaticatePose164,
	sRaticatePose165,
	sRaticatePose166,
	sRaticatePose91,
	sRaticatePose168,
	sRaticatePose169,
	sRaticatePose170,
	sRaticatePose1,
	sRaticatePose22,
	sRaticatePose19,
	sRaticatePose16,
	sRaticatePose13,
	sRaticatePose10,
	sRaticatePose7,
	sRaticatePose4,
};

static const struct PositionSets sAxPositionsRaticate[] = {
	[0] = { .set = { {0, -6}, {-6, -4}, {5, -4}, {0, -7} } },
	[1] = { .set = { {0, -4}, {-6, -4}, {5, -4}, {0, -6} } },
	[2] = { .set = { {-1, -10}, {-6, -6}, {5, -6}, {0, -10} } },
	[3] = { .set = { {5, -7}, {7, -6}, {-1, -3}, {0, -7} } },
	[4] = { .set = { {4, -4}, {7, -5}, {-1, -3}, {-2, -7} } },
	[5] = { .set = { {5, -13}, {5, -9}, {-2, -8}, {-1, -12} } },
	[6] = { .set = { {7, -8}, {6, -5}, {5, -3}, {0, -8} } },
	[7] = { .set = { {6, -5}, {5, -4}, {4, -3}, {-1, -7} } },
	[8] = { .set = { {5, -13}, {3, -8}, {2, -6}, {-1, -11} } },
	[9] = { .set = { {6, -9}, {0, -8}, {6, -6}, {-1, -8} } },
	[10] = { .set = { {5, -7}, {-1, -7}, {4, -6}, {-2, -7} } },
	[11] = { .set = { {5, -15}, {-2, -11}, {4, -8}, {-2, -13} } },
	[12] = { .set = { {0, -11}, {6, -7}, {-7, -7}, {0, -8} } },
	[13] = { .set = { {0, -8}, {6, -6}, {-7, -6}, {0, -7} } },
	[14] = { .set = { {0, -15}, {4, -12}, {-5, -12}, {0, -11} } },
	[15] = { .set = { {-7, -9}, {-1, -8}, {-7, -6}, {0, -8} } },
	[16] = { .set = { {-6, -7}, {0, -7}, {-5, -6}, {1, -7} } },
	[17] = { .set = { {-6, -15}, {1, -11}, {-5, -8}, {1, -13} } },
	[18] = { .set = { {-8, -8}, {-7, -5}, {-6, -3}, {-1, -8} } },
	[19] = { .set = { {-7, -5}, {-6, -4}, {-5, -3}, {0, -7} } },
	[20] = { .set = { {-6, -13}, {-4, -8}, {-3, -6}, {0, -11} } },
	[21] = { .set = { {-6, -7}, {-8, -6}, {0, -3}, {-1, -7} } },
	[22] = { .set = { {-5, -4}, {-8, -5}, {0, -3}, {1, -7} } },
	[23] = { .set = { {-6, -13}, {-6, -9}, {1, -8}, {0, -12} } },
	[24] = { .set = { {0, -6}, {-6, -4}, {5, -4}, {0, -7} } },
	[25] = { .set = { {0, -4}, {-6, -4}, {5, -4}, {0, -6} } },
	[26] = { .set = { {-1, -10}, {-6, -6}, {5, -6}, {0, -10} } },
	[27] = { .set = { {5, -7}, {7, -6}, {-1, -3}, {0, -7} } },
	[28] = { .set = { {4, -4}, {7, -5}, {-1, -3}, {-2, -7} } },
	[29] = { .set = { {5, -13}, {5, -9}, {-2, -8}, {-1, -12} } },
	[30] = { .set = { {7, -8}, {6, -5}, {5, -3}, {0, -8} } },
	[31] = { .set = { {6, -5}, {5, -4}, {4, -3}, {-1, -7} } },
	[32] = { .set = { {5, -13}, {3, -8}, {2, -6}, {-1, -11} } },
	[33] = { .set = { {6, -9}, {0, -8}, {6, -6}, {-1, -8} } },
	[34] = { .set = { {5, -7}, {-1, -7}, {4, -6}, {-2, -7} } },
	[35] = { .set = { {5, -15}, {-2, -11}, {4, -8}, {-2, -13} } },
	[36] = { .set = { {0, -11}, {6, -7}, {-7, -7}, {0, -8} } },
	[37] = { .set = { {0, -8}, {6, -6}, {-7, -6}, {0, -7} } },
	[38] = { .set = { {0, -15}, {4, -12}, {-5, -12}, {0, -11} } },
	[39] = { .set = { {-7, -9}, {-1, -8}, {-7, -6}, {0, -8} } },
	[40] = { .set = { {-6, -7}, {0, -7}, {-5, -6}, {1, -7} } },
	[41] = { .set = { {-6, -15}, {1, -11}, {-5, -8}, {1, -13} } },
	[42] = { .set = { {-8, -8}, {-7, -5}, {-6, -3}, {-1, -8} } },
	[43] = { .set = { {-7, -5}, {-6, -4}, {-5, -3}, {0, -7} } },
	[44] = { .set = { {-6, -13}, {-4, -8}, {-3, -6}, {0, -11} } },
	[45] = { .set = { {-6, -7}, {-8, -6}, {0, -3}, {-1, -7} } },
	[46] = { .set = { {-5, -4}, {-8, -5}, {0, -3}, {1, -7} } },
	[47] = { .set = { {-6, -13}, {-6, -9}, {1, -8}, {0, -12} } },
	[48] = { .set = { {0, -6}, {-6, -4}, {5, -4}, {0, -7} } },
	[49] = { .set = { {0, -4}, {-6, -4}, {5, -4}, {0, -6} } },
	[50] = { .set = { {-1, -10}, {-6, -6}, {5, -6}, {0, -10} } },
	[51] = { .set = { {5, -7}, {7, -6}, {-1, -3}, {0, -7} } },
	[52] = { .set = { {4, -4}, {7, -5}, {-1, -3}, {-2, -7} } },
	[53] = { .set = { {5, -13}, {5, -9}, {-2, -8}, {-1, -12} } },
	[54] = { .set = { {7, -8}, {6, -5}, {5, -3}, {0, -8} } },
	[55] = { .set = { {6, -5}, {5, -4}, {4, -3}, {-1, -7} } },
	[56] = { .set = { {5, -13}, {3, -8}, {2, -6}, {-1, -11} } },
	[57] = { .set = { {6, -9}, {0, -8}, {6, -6}, {-1, -8} } },
	[58] = { .set = { {5, -7}, {-1, -7}, {4, -6}, {-2, -7} } },
	[59] = { .set = { {5, -15}, {-2, -11}, {4, -8}, {-2, -13} } },
	[60] = { .set = { {0, -11}, {6, -7}, {-7, -7}, {0, -8} } },
	[61] = { .set = { {0, -8}, {6, -6}, {-7, -6}, {0, -7} } },
	[62] = { .set = { {0, -15}, {4, -12}, {-5, -12}, {0, -11} } },
	[63] = { .set = { {-7, -9}, {-1, -8}, {-7, -6}, {0, -8} } },
	[64] = { .set = { {-6, -7}, {0, -7}, {-5, -6}, {1, -7} } },
	[65] = { .set = { {-6, -15}, {1, -11}, {-5, -8}, {1, -13} } },
	[66] = { .set = { {-8, -8}, {-7, -5}, {-6, -3}, {-1, -8} } },
	[67] = { .set = { {-7, -5}, {-6, -4}, {-5, -3}, {0, -7} } },
	[68] = { .set = { {-6, -13}, {-4, -8}, {-3, -6}, {0, -11} } },
	[69] = { .set = { {-6, -7}, {-8, -6}, {0, -3}, {-1, -7} } },
	[70] = { .set = { {-5, -4}, {-8, -5}, {0, -3}, {1, -7} } },
	[71] = { .set = { {-6, -13}, {-6, -9}, {1, -8}, {0, -12} } },
	[72] = { .set = { {0, -6}, {-6, -4}, {5, -4}, {0, -7} } },
	[73] = { .set = { {0, -12}, {-6, -7}, {5, -7}, {0, -8} } },
	[74] = { .set = { {0, -3}, {-7, -5}, {6, -5}, {0, -9} } },
	[75] = { .set = { {0, -4}, {-6, -4}, {5, -4}, {0, -6} } },
	[76] = { .set = { {5, -7}, {7, -6}, {-1, -3}, {0, -7} } },
	[77] = { .set = { {5, -13}, {7, -10}, {-1, -6}, {-1, -9} } },
	[78] = { .set = { {7, -4}, {9, -4}, {1, -1}, {0, -8} } },
	[79] = { .set = { {5, -4}, {8, -5}, {0, -3}, {-1, -7} } },
	[80] = { .set = { {7, -8}, {6, -5}, {5, -3}, {0, -8} } },
	[81] = { .set = { {4, -18}, {6, -10}, {7, -9}, {-1, -9} } },
	[82] = { .set = { {9, -6}, {8, -4}, {7, -3}, {1, -8} } },
	[83] = { .set = { {6, -5}, {5, -4}, {4, -3}, {-1, -7} } },
	[84] = { .set = { {6, -9}, {0, -8}, {6, -6}, {-1, -8} } },
	[85] = { .set = { {5, -16}, {-1, -11}, {5, -9}, {-2, -9} } },
	[86] = { .set = { {9, -9}, {1, -7}, {8, -5}, {0, -9} } },
	[87] = { .set = { {5, -7}, {-1, -7}, {4, -6}, {-2, -7} } },
	[88] = { .set = { {0, -11}, {6, -7}, {-7, -7}, {0, -8} } },
	[89] = { .set = { {0, -15}, {6, -8}, {-7, -8}, {0, -8} } },
	[90] = { .set = { {0, -10}, {7, -7}, {-8, -7}, {0, -8} } },
	[91] = { .set = { {0, -8}, {6, -6}, {-7, -6}, {0, -7} } },
	[92] = { .set = { {-7, -9}, {-1, -8}, {-7, -6}, {0, -8} } },
	[93] = { .set = { {-6, -16}, {0, -11}, {-6, -9}, {1, -9} } },
	[94] = { .set = { {-10, -9}, {-2, -7}, {-9, -5}, {-1, -9} } },
	[95] = { .set = { {-6, -7}, {0, -7}, {-5, -6}, {1, -7} } },
	[96] = { .set = { {-8, -8}, {-7, -5}, {-6, -3}, {-1, -8} } },
	[97] = { .set = { {-5, -18}, {-7, -10}, {-8, -9}, {0, -9} } },
	[98] = { .set = { {-10, -6}, {-9, -4}, {-8, -3}, {-2, -8} } },
	[99] = { .set = { {-7, -5}, {-6, -4}, {-5, -3}, {0, -7} } },
	[100] = { .set = { {-6, -7}, {-8, -6}, {0, -3}, {-1, -7} } },
	[101] = { .set = { {-6, -13}, {-8, -10}, {0, -6}, {0, -9} } },
	[102] = { .set = { {-8, -4}, {-10, -4}, {-2, -1}, {-1, -8} } },
	[103] = { .set = { {-6, -4}, {-9, -5}, {-1, -3}, {0, -7} } },
	[104] = { .set = { {1, -3}, {-6, -3}, {6, -5}, {0, -8} } },
	[105] = { .set = { {-1, -3}, {-7, -5}, {5, -3}, {-1, -8} } },
	[106] = { .set = { {0, -4}, {-6, -4}, {5, -4}, {0, -6} } },
	[107] = { .set = { {4, -4}, {8, -4}, {-2, -3}, {-1, -7} } },
	[108] = { .set = { {5, -4}, {8, -5}, {1, -3}, {-1, -7} } },
	[109] = { .set = { {5, -4}, {8, -5}, {0, -3}, {-1, -7} } },
	[110] = { .set = { {7, -3}, {4, -4}, {3, -3}, {-2, -6} } },
	[111] = { .set = { {7, -5}, {4, -5}, {5, -3}, {-1, -6} } },
	[112] = { .set = { {6, -4}, {5, -3}, {4, -2}, {-1, -6} } },
	[113] = { .set = { {6, -7}, {4, -6}, {4, -5}, {-2, -6} } },
	[114] = { .set = { {5, -8}, {-1, -8}, {5, -6}, {-2, -6} } },
	[115] = { .set = { {6, -7}, {0, -7}, {5, -6}, {-1, -7} } },
	[116] = { .set = { {-2, -9}, {7, -7}, {-6, -5}, {1, -7} } },
	[117] = { .set = { {2, -9}, {5, -5}, {-6, -6}, {-1, -7} } },
	[118] = { .set = { {0, -8}, {6, -6}, {-7, -6}, {0, -7} } },
	[119] = { .set = { {-7, -7}, {-5, -6}, {-5, -5}, {1, -6} } },
	[120] = { .set = { {-6, -8}, {0, -8}, {-6, -6}, {1, -6} } },
	[121] = { .set = { {-7, -7}, {-1, -7}, {-6, -6}, {0, -7} } },
	[122] = { .set = { {-8, -3}, {-5, -4}, {-4, -3}, {1, -6} } },
	[123] = { .set = { {-8, -5}, {-5, -5}, {-6, -3}, {0, -6} } },
	[124] = { .set = { {-7, -4}, {-6, -3}, {-5, -2}, {0, -6} } },
	[125] = { .set = { {-5, -4}, {-9, -4}, {1, -3}, {0, -7} } },
	[126] = { .set = { {-6, -4}, {-9, -5}, {-2, -3}, {0, -7} } },
	[127] = { .set = { {-6, -4}, {-9, -5}, {-1, -3}, {0, -7} } },
	[128] = { .set = { {-5, 0}, {-4, 0}, {0, 1}, {1, -4} } },
	[129] = { .set = { {-5, 0}, {-4, 0}, {0, 1}, {1, -4} } },
	[130] = { .set = { {0, -5}, {-6, -8}, {5, -8}, {0, -6} } },
	[131] = { .set = { {4, -4}, {7, -8}, {-1, -7}, {-2, -6} } },
	[132] = { .set = { {4, -6}, {4, -5}, {3, -4}, {-3, -6} } },
	[133] = { .set = { {6, -7}, {-1, -8}, {4, -5}, {-2, -7} } },
	[134] = { .set = { {0, -8}, {5, -5}, {-6, -5}, {0, -7} } },
	[135] = { .set = { {-7, -7}, {0, -8}, {-5, -5}, {1, -7} } },
	[136] = { .set = { {-6, -6}, {-6, -5}, {-5, -4}, {1, -6} } },
	[137] = { .set = { {-5, -4}, {-8, -8}, {0, -7}, {1, -6} } },
	[138] = { .set = { {0, -6}, {-6, -4}, {5, -4}, {0, -7} } },
	[139] = { .set = { {0, -4}, {-6, -4}, {5, -4}, {0, -6} } },
	[140] = { .set = { {-1, -10}, {-6, -6}, {5, -6}, {0, -10} } },
	[141] = { .set = { {5, -7}, {7, -6}, {-1, -3}, {0, -7} } },
	[142] = { .set = { {5, -4}, {8, -5}, {0, -3}, {-1, -7} } },
	[143] = { .set = { {5, -13}, {5, -9}, {-2, -8}, {-1, -12} } },
	[144] = { .set = { {7, -8}, {6, -5}, {5, -3}, {0, -8} } },
	[145] = { .set = { {6, -4}, {5, -3}, {4, -2}, {-1, -6} } },
	[146] = { .set = { {6, -13}, {4, -8}, {3, -6}, {0, -11} } },
	[147] = { .set = { {6, -9}, {0, -8}, {6, -6}, {-1, -8} } },
	[148] = { .set = { {6, -7}, {0, -7}, {5, -6}, {-1, -7} } },
	[149] = { .set = { {6, -15}, {-1, -11}, {5, -8}, {-1, -13} } },
	[150] = { .set = { {0, -11}, {6, -7}, {-7, -7}, {0, -8} } },
	[151] = { .set = { {0, -8}, {6, -6}, {-7, -6}, {0, -7} } },
	[152] = { .set = { {0, -15}, {4, -12}, {-5, -12}, {0, -11} } },
	[153] = { .set = { {-7, -9}, {-1, -8}, {-7, -6}, {0, -8} } },
	[154] = { .set = { {-7, -7}, {-1, -7}, {-6, -6}, {0, -7} } },
	[155] = { .set = { {-7, -15}, {0, -11}, {-6, -8}, {0, -13} } },
	[156] = { .set = { {-8, -8}, {-7, -5}, {-6, -3}, {-1, -8} } },
	[157] = { .set = { {-7, -4}, {-6, -3}, {-5, -2}, {0, -6} } },
	[158] = { .set = { {-7, -13}, {-5, -8}, {-4, -6}, {-1, -11} } },
	[159] = { .set = { {-6, -7}, {-8, -6}, {0, -3}, {-1, -7} } },
	[160] = { .set = { {-6, -4}, {-9, -5}, {-1, -3}, {0, -7} } },
	[161] = { .set = { {-6, -13}, {-6, -9}, {1, -8}, {0, -12} } },
	[162] = { .set = { {0, -2}, {-7, -4}, {6, -4}, {0, -8} } },
	[163] = { .set = { {-6, -4}, {-8, -4}, {0, -1}, {1, -8} } },
	[164] = { .set = { {-8, -6}, {-7, -4}, {-6, -3}, {0, -8} } },
	[165] = { .set = { {-8, -8}, {0, -6}, {-7, -4}, {1, -8} } },
	[166] = { .set = { {0, -10}, {7, -7}, {-8, -7}, {0, -8} } },
	[167] = { .set = { {7, -8}, {-1, -6}, {6, -4}, {-2, -8} } },
	[168] = { .set = { {7, -6}, {6, -4}, {5, -3}, {-1, -8} } },
	[169] = { .set = { {5, -4}, {7, -4}, {-1, -1}, {-2, -8} } },
	[170] = { .set = { {0, -12}, {-6, -7}, {5, -7}, {0, -8} } },
	[171] = { .set = { {5, -13}, {7, -10}, {-1, -6}, {-1, -9} } },
	[172] = { .set = { {4, -18}, {6, -10}, {7, -9}, {-1, -9} } },
	[173] = { .set = { {5, -16}, {-1, -11}, {5, -9}, {-2, -9} } },
	[174] = { .set = { {0, -15}, {6, -8}, {-7, -8}, {0, -8} } },
	[175] = { .set = { {-7, -16}, {-1, -11}, {-7, -9}, {0, -9} } },
	[176] = { .set = { {-5, -18}, {-7, -10}, {-8, -9}, {0, -9} } },
	[177] = { .set = { {-6, -13}, {-8, -10}, {0, -6}, {0, -9} } },
	[178] = { .set = { {0, -6}, {-6, -4}, {5, -4}, {0, -7} } },
	[179] = { .set = { {-1, -10}, {-6, -6}, {5, -6}, {0, -10} } },
	[180] = { .set = { {0, -4}, {-6, -4}, {5, -4}, {0, -6} } },
	[181] = { .set = { {5, -7}, {7, -6}, {-1, -3}, {0, -7} } },
	[182] = { .set = { {5, -13}, {5, -9}, {-2, -8}, {-1, -12} } },
	[183] = { .set = { {4, -4}, {7, -5}, {-1, -3}, {-2, -7} } },
	[184] = { .set = { {7, -8}, {6, -5}, {5, -3}, {0, -8} } },
	[185] = { .set = { {5, -13}, {3, -8}, {2, -6}, {-1, -11} } },
	[186] = { .set = { {6, -5}, {5, -4}, {4, -3}, {-1, -7} } },
	[187] = { .set = { {6, -9}, {0, -8}, {6, -6}, {-1, -8} } },
	[188] = { .set = { {5, -15}, {-2, -11}, {4, -8}, {-2, -13} } },
	[189] = { .set = { {5, -7}, {-1, -7}, {4, -6}, {-2, -7} } },
	[190] = { .set = { {0, -11}, {6, -7}, {-7, -7}, {0, -8} } },
	[191] = { .set = { {0, -15}, {4, -12}, {-5, -12}, {0, -11} } },
	[192] = { .set = { {0, -8}, {6, -6}, {-7, -6}, {0, -7} } },
	[193] = { .set = { {-7, -9}, {-1, -8}, {-7, -6}, {0, -8} } },
	[194] = { .set = { {-6, -15}, {1, -11}, {-5, -8}, {1, -13} } },
	[195] = { .set = { {-6, -7}, {0, -7}, {-5, -6}, {1, -7} } },
	[196] = { .set = { {-8, -8}, {-7, -5}, {-6, -3}, {-1, -8} } },
	[197] = { .set = { {-6, -13}, {-4, -8}, {-3, -6}, {0, -11} } },
	[198] = { .set = { {-7, -5}, {-6, -4}, {-5, -3}, {0, -7} } },
	[199] = { .set = { {-6, -7}, {-8, -6}, {0, -3}, {-1, -7} } },
	[200] = { .set = { {-6, -13}, {-6, -9}, {1, -8}, {0, -12} } },
	[201] = { .set = { {-5, -4}, {-8, -5}, {0, -3}, {1, -7} } },
	[202] = { .set = { {0, -2}, {-7, -4}, {6, -4}, {0, -8} } },
	[203] = { .set = { {-6, -4}, {-8, -4}, {0, -1}, {1, -8} } },
	[204] = { .set = { {-8, -6}, {-7, -4}, {-6, -3}, {0, -8} } },
	[205] = { .set = { {-8, -8}, {0, -6}, {-7, -4}, {1, -8} } },
	[206] = { .set = { {0, -10}, {7, -7}, {-8, -7}, {0, -8} } },
	[207] = { .set = { {7, -8}, {-1, -6}, {6, -4}, {-2, -8} } },
	[208] = { .set = { {7, -6}, {6, -4}, {5, -3}, {-1, -8} } },
	[209] = { .set = { {5, -4}, {7, -4}, {-1, -1}, {-2, -8} } },
	[210] = { .set = { {0, -6}, {-6, -4}, {5, -4}, {0, -7} } },
	[211] = { .set = { {-6, -7}, {-8, -6}, {0, -3}, {-1, -7} } },
	[212] = { .set = { {-8, -8}, {-7, -5}, {-6, -3}, {-1, -8} } },
	[213] = { .set = { {-7, -9}, {-1, -8}, {-7, -6}, {0, -8} } },
	[214] = { .set = { {0, -11}, {6, -7}, {-7, -7}, {0, -8} } },
	[215] = { .set = { {6, -9}, {0, -8}, {6, -6}, {-1, -8} } },
	[216] = { .set = { {7, -8}, {6, -5}, {5, -3}, {0, -8} } },
	[217] = { .set = { {5, -7}, {7, -6}, {-1, -3}, {0, -7} } },
};

static const ax_anim *const sRaticateAnimTable1[] = {
	AX_ANIM_PTR(sRaticateAnims_1_1),
	AX_ANIM_PTR(sRaticateAnims_1_2),
	AX_ANIM_PTR(sRaticateAnims_1_3),
	AX_ANIM_PTR(sRaticateAnims_1_4),
	AX_ANIM_PTR(sRaticateAnims_1_5),
	AX_ANIM_PTR(sRaticateAnims_1_6),
	AX_ANIM_PTR(sRaticateAnims_1_7),
	AX_ANIM_PTR(sRaticateAnims_1_8),
};

static const ax_anim *const sRaticateAnimTable2[] = {
	AX_ANIM_PTR(sRaticateAnims_2_1),
	AX_ANIM_PTR(sRaticateAnims_2_2),
	AX_ANIM_PTR(sRaticateAnims_2_3),
	AX_ANIM_PTR(sRaticateAnims_2_4),
	AX_ANIM_PTR(sRaticateAnims_2_5),
	AX_ANIM_PTR(sRaticateAnims_2_6),
	AX_ANIM_PTR(sRaticateAnims_2_7),
	AX_ANIM_PTR(sRaticateAnims_2_8),
};

static const ax_anim *const sRaticateAnimTable3[] = {
	AX_ANIM_PTR(sRaticateAnims_3_1),
	AX_ANIM_PTR(sRaticateAnims_3_2),
	AX_ANIM_PTR(sRaticateAnims_3_3),
	AX_ANIM_PTR(sRaticateAnims_3_4),
	AX_ANIM_PTR(sRaticateAnims_3_5),
	AX_ANIM_PTR(sRaticateAnims_3_6),
	AX_ANIM_PTR(sRaticateAnims_3_7),
	AX_ANIM_PTR(sRaticateAnims_3_8),
};

static const ax_anim *const sRaticateAnimTable4[] = {
	AX_ANIM_PTR(sRaticateAnims_4_1),
	AX_ANIM_PTR(sRaticateAnims_4_2),
	AX_ANIM_PTR(sRaticateAnims_4_3),
	AX_ANIM_PTR(sRaticateAnims_4_4),
	AX_ANIM_PTR(sRaticateAnims_4_5),
	AX_ANIM_PTR(sRaticateAnims_4_6),
	AX_ANIM_PTR(sRaticateAnims_4_7),
	AX_ANIM_PTR(sRaticateAnims_4_8),
};

static const ax_anim *const sRaticateAnimTable5[] = {
	AX_ANIM_PTR(sRaticateAnims_5_1),
	AX_ANIM_PTR(sRaticateAnims_5_2),
	AX_ANIM_PTR(sRaticateAnims_5_3),
	AX_ANIM_PTR(sRaticateAnims_5_4),
	AX_ANIM_PTR(sRaticateAnims_5_5),
	AX_ANIM_PTR(sRaticateAnims_5_6),
	AX_ANIM_PTR(sRaticateAnims_5_7),
	AX_ANIM_PTR(sRaticateAnims_5_8),
};

static const ax_anim *const sRaticateAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02407),
	AX_ANIM_PTR(gAxSharedAnim_02407),
	AX_ANIM_PTR(gAxSharedAnim_02407),
	AX_ANIM_PTR(gAxSharedAnim_02407),
	AX_ANIM_PTR(gAxSharedAnim_02407),
	AX_ANIM_PTR(gAxSharedAnim_02407),
	AX_ANIM_PTR(gAxSharedAnim_02407),
	AX_ANIM_PTR(gAxSharedAnim_02407),
};

static const ax_anim *const sRaticateAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00396),
	AX_ANIM_PTR(gAxSharedAnim_00402),
	AX_ANIM_PTR(gAxSharedAnim_00413),
	AX_ANIM_PTR(gAxSharedAnim_00422),
	AX_ANIM_PTR(gAxSharedAnim_00434),
	AX_ANIM_PTR(gAxSharedAnim_00442),
	AX_ANIM_PTR(gAxSharedAnim_00451),
	AX_ANIM_PTR(gAxSharedAnim_00461),
};

static const ax_anim *const sRaticateAnimTable8[] = {
	AX_ANIM_PTR(sRaticateAnims_8_1),
	AX_ANIM_PTR(sRaticateAnims_8_2),
	AX_ANIM_PTR(sRaticateAnims_8_3),
	AX_ANIM_PTR(sRaticateAnims_8_4),
	AX_ANIM_PTR(sRaticateAnims_8_5),
	AX_ANIM_PTR(sRaticateAnims_8_6),
	AX_ANIM_PTR(sRaticateAnims_8_7),
	AX_ANIM_PTR(sRaticateAnims_8_8),
};

static const ax_anim *const sRaticateAnimTable9[] = {
	AX_ANIM_PTR(sRaticateAnims_9_1),
	AX_ANIM_PTR(sRaticateAnims_9_2),
	AX_ANIM_PTR(gAxSharedAnim_00770),
	AX_ANIM_PTR(sRaticateAnims_9_4),
	AX_ANIM_PTR(sRaticateAnims_9_5),
	AX_ANIM_PTR(sRaticateAnims_9_6),
	AX_ANIM_PTR(gAxSharedAnim_00721),
	AX_ANIM_PTR(sRaticateAnims_9_8),
};

static const ax_anim *const sRaticateAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00801),
	AX_ANIM_PTR(gAxSharedAnim_00813),
	AX_ANIM_PTR(gAxSharedAnim_00827),
	AX_ANIM_PTR(gAxSharedAnim_00838),
	AX_ANIM_PTR(gAxSharedAnim_00849),
	AX_ANIM_PTR(gAxSharedAnim_00862),
	AX_ANIM_PTR(gAxSharedAnim_00879),
	AX_ANIM_PTR(gAxSharedAnim_00889),
};

static const ax_anim *const sRaticateAnimTable11[] = {
	AX_ANIM_PTR(sRaticateAnims_11_1),
	AX_ANIM_PTR(sRaticateAnims_11_2),
	AX_ANIM_PTR(sRaticateAnims_11_3),
	AX_ANIM_PTR(sRaticateAnims_11_4),
	AX_ANIM_PTR(sRaticateAnims_11_5),
	AX_ANIM_PTR(sRaticateAnims_11_6),
	AX_ANIM_PTR(sRaticateAnims_11_7),
	AX_ANIM_PTR(sRaticateAnims_11_8),
};

static const ax_anim *const sRaticateAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01243),
	AX_ANIM_PTR(gAxSharedAnim_01327),
	AX_ANIM_PTR(gAxSharedAnim_01308),
	AX_ANIM_PTR(gAxSharedAnim_01292),
	AX_ANIM_PTR(gAxSharedAnim_01291),
	AX_ANIM_PTR(gAxSharedAnim_01280),
	AX_ANIM_PTR(gAxSharedAnim_01260),
	AX_ANIM_PTR(gAxSharedAnim_01244),
};

static const ax_anim *const sRaticateAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01335),
	AX_ANIM_PTR(gAxSharedAnim_01409),
	AX_ANIM_PTR(gAxSharedAnim_01397),
	AX_ANIM_PTR(gAxSharedAnim_01386),
	AX_ANIM_PTR(gAxSharedAnim_01374),
	AX_ANIM_PTR(gAxSharedAnim_01366),
	AX_ANIM_PTR(gAxSharedAnim_01358),
	AX_ANIM_PTR(gAxSharedAnim_01348),
};

static const ax_anim *const *const sAxAnimationsRaticate[] = {
	sRaticateAnimTable1,
	sRaticateAnimTable2,
	sRaticateAnimTable3,
	sRaticateAnimTable4,
	sRaticateAnimTable5,
	sRaticateAnimTable6,
	sRaticateAnimTable7,
	sRaticateAnimTable8,
	sRaticateAnimTable9,
	sRaticateAnimTable10,
	sRaticateAnimTable11,
	sRaticateAnimTable12,
	sRaticateAnimTable13,
};

static const ax_sprite *const sAxSpritesRaticate[] = {
	sRaticateSprites1,
	sRaticateSprites2,
	sRaticateSprites3,
	sRaticateSprites4,
	sRaticateSprites5,
	sRaticateSprites6,
	sRaticateSprites7,
	sRaticateSprites8,
	sRaticateSprites9,
	sRaticateSprites10,
	sRaticateSprites11,
	sRaticateSprites12,
	sRaticateSprites13,
	sRaticateSprites14,
	sRaticateSprites15,
	sRaticateSprites16,
	sRaticateSprites17,
	sRaticateSprites18,
	sRaticateSprites19,
	sRaticateSprites20,
	sRaticateSprites21,
	sRaticateSprites22,
	sRaticateSprites23,
	sRaticateSprites24,
	sRaticateSprites25,
	sRaticateSprites26,
	sRaticateSprites27,
	sRaticateSprites28,
	sRaticateSprites29,
	sRaticateSprites30,
	sRaticateSprites31,
	sRaticateSprites32,
	sRaticateSprites33,
	sRaticateSprites34,
	sRaticateSprites35,
	sRaticateSprites36,
	sRaticateSprites37,
	sRaticateSprites38,
	sRaticateSprites39,
	sRaticateSprites40,
	sRaticateSprites41,
	sRaticateSprites42,
};

static const axmain sAxMainRaticate = {
	.poses = sAxPosesRaticate,
	.animations = sAxAnimationsRaticate,
	.animCount = ARRAY_COUNT(sAxAnimationsRaticate),
	.spriteData = sAxSpritesRaticate,
	.positions = sAxPositionsRaticate,
};
