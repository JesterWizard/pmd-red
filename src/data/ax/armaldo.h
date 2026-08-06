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
static const axmain sAxMainArmaldo;
const SiroArchive gAxArmaldo = {"SIRO", &sAxMainArmaldo};

static const ax_pose sArmaldoPose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose2[] = {
	AX_POSE(1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose3[] = {
	AX_POSE(2, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose4[] = {
	AX_POSE(3, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose5[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose6[] = {
	AX_POSE(5, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose7[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose8[] = {
	AX_POSE(7, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(8, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(9, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(10, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(230, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose9[] = {
	AX_POSE(11, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(12, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(13, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(14, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(230, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose10[] = {
	AX_POSE(15, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose11[] = {
	AX_POSE(16, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose12[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose13[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose14[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose15[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose16[] = {
	AX_POSE(15, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose17[] = {
	AX_POSE(16, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose18[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose19[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose20[] = {
	AX_POSE(7, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(8, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(9, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(10, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(17, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose21[] = {
	AX_POSE(11, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(12, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(13, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(14, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(17, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose22[] = {
	AX_POSE(3, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose23[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose24[] = {
	AX_POSE(5, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose28[] = {
	AX_POSE(21, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(22, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(23, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(24, OAM1(253, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose29[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose33[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose34[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose38[] = {
	AX_POSE(29, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(30, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(2, 3, 5)),
	AX_POSE(31, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(3, 3, 5)),
	AX_POSE(32, OAM1(227, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(7, 3, 5)),
	AX_POSE(33, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose39[] = {
	AX_POSE(34, OAM1(253, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(35, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE(36, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE(37, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(5, 3, 5)),
	AX_POSE(38, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose43[] = {
	AX_POSE(39, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose44[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose48[] = {
	AX_POSE(41, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(42, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(43, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(44, OAM1(254, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE(45, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose49[] = {
	AX_POSE(46, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose53[] = {
	AX_POSE(39, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose54[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose58[] = {
	AX_POSE(29, OAM1(252, ST_OAM_H_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(30, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE(31, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(3, 3, 5)),
	AX_POSE(32, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(7, 3, 5)),
	AX_POSE(33, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose59[] = {
	AX_POSE(34, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(35, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE(36, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 5)),
	AX_POSE(37, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(5, 3, 5)),
	AX_POSE(38, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose63[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose64[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose67[] = {
	AX_POSE(47, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(48, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose68[] = {
	AX_POSE(48, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose71[] = {
	AX_POSE(49, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(50, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose72[] = {
	AX_POSE(50, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose75[] = {
	AX_POSE(51, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(52, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(53, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE(54, OAM1(227, ST_OAM_H_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(20, 3, 5)),
	AX_POSE(55, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(22, 3, 5)),
	AX_POSE(56, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(23, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose76[] = {
	AX_POSE(52, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(53, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(54, OAM1(227, ST_OAM_H_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(55, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE(56, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose79[] = {
	AX_POSE(57, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(58, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose80[] = {
	AX_POSE(58, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose83[] = {
	AX_POSE(59, OAM1(224, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(60, OAM1(240, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(61, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(62, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE(63, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose84[] = {
	AX_POSE(63, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose87[] = {
	AX_POSE(57, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(58, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose88[] = {
	AX_POSE(58, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose91[] = {
	AX_POSE(51, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(52, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(53, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE(54, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(20, 3, 5)),
	AX_POSE(55, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(22, 3, 5)),
	AX_POSE(56, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(23, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose92[] = {
	AX_POSE(52, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(53, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(54, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(55, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE(56, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose95[] = {
	AX_POSE(49, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(50, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose96[] = {
	AX_POSE(50, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose122[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose123[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose124[] = {
	AX_POSE(15, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose126[] = {
	AX_POSE(15, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose127[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose128[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose129[] = {
	AX_POSE(64, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose130[] = {
	AX_POSE(65, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose131[] = {
	AX_POSE(66, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose132[] = {
	AX_POSE(67, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose133[] = {
	AX_POSE(68, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose134[] = {
	AX_POSE(69, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose135[] = {
	AX_POSE(70, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose136[] = {
	AX_POSE(69, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose137[] = {
	AX_POSE(68, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose138[] = {
	AX_POSE(67, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose163[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose164[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose166[] = {
	AX_POSE(40, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose167[] = {
	AX_POSE(46, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose168[] = {
	AX_POSE(40, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose169[] = {
	AX_POSE(34, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(35, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE(36, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE(37, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(5, 3, 5)),
	AX_POSE(38, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose170[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose199[] = {
	AX_POSE(21, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(22, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(23, OAM1(254, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(24, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose200[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose201[] = {
	AX_POSE(29, OAM1(252, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(30, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(2, 3, 5)),
	AX_POSE(31, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(3, 3, 5)),
	AX_POSE(32, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(7, 3, 5)),
	AX_POSE(33, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose202[] = {
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose203[] = {
	AX_POSE(41, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(42, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(43, OAM1(255, ST_OAM_H_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(44, OAM1(255, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE(45, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose204[] = {
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose205[] = {
	AX_POSE(29, OAM1(252, ST_OAM_H_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(30, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE(31, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(3, 3, 5)),
	AX_POSE(32, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(7, 3, 5)),
	AX_POSE(33, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose206[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose207[] = {
	AX_POSE(0, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose210[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose211[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose212[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose213[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose215[] = {
	AX_POSE(34, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(35, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE(36, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE(37, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(5, 3, 5)),
	AX_POSE(38, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose216[] = {
	AX_POSE(15, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose217[] = {
	AX_POSE(39, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose218[] = {
	AX_POSE(40, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose219[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose222[] = {
	AX_POSE(15, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose223[] = {
	AX_POSE(39, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose224[] = {
	AX_POSE(40, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose227[] = {
	AX_POSE(34, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(35, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE(36, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 5)),
	AX_POSE(37, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(5, 3, 5)),
	AX_POSE(38, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(17, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose228[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose229[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose230[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose231[] = {
	AX_POSE(48, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose232[] = {
	AX_POSE(50, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sArmaldoPose237[] = {
	AX_POSE(52, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(53, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(54, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(55, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE(56, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const u8 sArmaldoAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_2_1.lz");
static const u8 sArmaldoAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_2_2.lz");
static const u8 sArmaldoAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_2_3.lz");
static const u8 sArmaldoAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_2_4.lz");
static const u8 sArmaldoAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_2_5.lz");
static const u8 sArmaldoAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_2_6.lz");
static const u8 sArmaldoAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_2_7.lz");
static const u8 sArmaldoAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_2_8.lz");
static const u8 sArmaldoAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_3_1.lz");
static const u8 sArmaldoAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_3_2.lz");
static const u8 sArmaldoAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_3_3.lz");
static const u8 sArmaldoAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_3_4.lz");
static const u8 sArmaldoAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_3_5.lz");
static const u8 sArmaldoAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_3_6.lz");
static const u8 sArmaldoAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_3_7.lz");
static const u8 sArmaldoAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_3_8.lz");
static const u8 sArmaldoAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_4_3.lz");
static const u8 sArmaldoAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_4_7.lz");
static const u8 sArmaldoAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_9_1.lz");
static const u8 sArmaldoAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_9_2.lz");
static const u8 sArmaldoAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_9_3.lz");
static const u8 sArmaldoAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_9_4.lz");
static const u8 sArmaldoAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_9_5.lz");
static const u8 sArmaldoAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_9_6.lz");
static const u8 sArmaldoAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_9_7.lz");
static const u8 sArmaldoAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_9_8.lz");
static const u8 sArmaldoAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_11_1.lz");
static const u8 sArmaldoAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_11_2.lz");
static const u8 sArmaldoAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_11_3.lz");
static const u8 sArmaldoAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_11_4.lz");
static const u8 sArmaldoAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_11_5.lz");
static const u8 sArmaldoAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_11_6.lz");
static const u8 sArmaldoAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_11_7.lz");
static const u8 sArmaldoAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_11_8.lz");
static const u8 sArmaldoAnims_13_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_13_1.lz");
static const u8 sArmaldoAnims_13_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_13_2.lz");
static const u8 sArmaldoAnims_13_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_13_3.lz");
static const u8 sArmaldoAnims_13_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_13_4.lz");
static const u8 sArmaldoAnims_13_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_13_5.lz");
static const u8 sArmaldoAnims_13_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_13_6.lz");
static const u8 sArmaldoAnims_13_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_13_7.lz");
static const u8 sArmaldoAnims_13_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/armaldo/sArmaldoAnims_13_8.lz");

static const u8 sArmaldoGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_1.4bpp.lz");
static const ax_sprite sArmaldoSprites1[] = {
	{sArmaldoGfx1, ARRAY_COUNT(sArmaldoGfx1)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_2.4bpp.lz");
static const ax_sprite sArmaldoSprites2[] = {
	{sArmaldoGfx2, ARRAY_COUNT(sArmaldoGfx2)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_3.4bpp.lz");
static const ax_sprite sArmaldoSprites3[] = {
	{sArmaldoGfx3, ARRAY_COUNT(sArmaldoGfx3)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_4.4bpp.lz");
static const ax_sprite sArmaldoSprites4[] = {
	{sArmaldoGfx4, ARRAY_COUNT(sArmaldoGfx4)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_5.4bpp.lz");
static const ax_sprite sArmaldoSprites5[] = {
	{sArmaldoGfx5, ARRAY_COUNT(sArmaldoGfx5)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_6.4bpp.lz");
static const ax_sprite sArmaldoSprites6[] = {
	{sArmaldoGfx6, ARRAY_COUNT(sArmaldoGfx6)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_7.4bpp.lz");
static const ax_sprite sArmaldoSprites7[] = {
	{sArmaldoGfx7, ARRAY_COUNT(sArmaldoGfx7)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_8.4bpp.lz");
static const ax_sprite sArmaldoSprites8[] = {
	{sArmaldoGfx8, ARRAY_COUNT(sArmaldoGfx8)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_9.4bpp.lz");
static const ax_sprite sArmaldoSprites9[] = {
	{sArmaldoGfx9, ARRAY_COUNT(sArmaldoGfx9)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_10.4bpp.lz");
static const ax_sprite sArmaldoSprites10[] = {
	{sArmaldoGfx10, ARRAY_COUNT(sArmaldoGfx10)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_11.4bpp.lz");
static const ax_sprite sArmaldoSprites11[] = {
	{sArmaldoGfx11, ARRAY_COUNT(sArmaldoGfx11)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_12.4bpp.lz");
static const ax_sprite sArmaldoSprites12[] = {
	{sArmaldoGfx12, ARRAY_COUNT(sArmaldoGfx12)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_13.4bpp.lz");
static const ax_sprite sArmaldoSprites13[] = {
	{sArmaldoGfx13, ARRAY_COUNT(sArmaldoGfx13)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_14.4bpp.lz");
static const ax_sprite sArmaldoSprites14[] = {
	{sArmaldoGfx14, ARRAY_COUNT(sArmaldoGfx14)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_15.4bpp.lz");
static const ax_sprite sArmaldoSprites15[] = {
	{sArmaldoGfx15, ARRAY_COUNT(sArmaldoGfx15)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_16.4bpp.lz");
static const ax_sprite sArmaldoSprites16[] = {
	{sArmaldoGfx16, ARRAY_COUNT(sArmaldoGfx16)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_17.4bpp.lz");
static const ax_sprite sArmaldoSprites17[] = {
	{sArmaldoGfx17, ARRAY_COUNT(sArmaldoGfx17)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_18.4bpp.lz");
static const ax_sprite sArmaldoSprites18[] = {
	{sArmaldoGfx18, ARRAY_COUNT(sArmaldoGfx18)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_19.4bpp.lz");
static const ax_sprite sArmaldoSprites19[] = {
	{sArmaldoGfx19, ARRAY_COUNT(sArmaldoGfx19)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_20.4bpp.lz");
static const ax_sprite sArmaldoSprites20[] = {
	{sArmaldoGfx20, ARRAY_COUNT(sArmaldoGfx20)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_21.4bpp.lz");
static const ax_sprite sArmaldoSprites21[] = {
	{sArmaldoGfx21, ARRAY_COUNT(sArmaldoGfx21)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_22.4bpp.lz");
static const ax_sprite sArmaldoSprites22[] = {
	{sArmaldoGfx22, ARRAY_COUNT(sArmaldoGfx22)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_23.4bpp.lz");
static const ax_sprite sArmaldoSprites23[] = {
	{sArmaldoGfx23, ARRAY_COUNT(sArmaldoGfx23)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_24.4bpp.lz");
static const ax_sprite sArmaldoSprites24[] = {
	{sArmaldoGfx24, ARRAY_COUNT(sArmaldoGfx24)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_25.4bpp.lz");
static const ax_sprite sArmaldoSprites25[] = {
	{sArmaldoGfx25, ARRAY_COUNT(sArmaldoGfx25)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_26.4bpp.lz");
static const ax_sprite sArmaldoSprites26[] = {
	{sArmaldoGfx26, ARRAY_COUNT(sArmaldoGfx26)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_27.4bpp.lz");
static const u8 sArmaldoGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_27_1.4bpp.lz");
static const u8 sArmaldoGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_27_2.4bpp.lz");
static const ax_sprite sArmaldoSprites27[] = {
	{NULL, 32}, 
	{sArmaldoGfx27, ARRAY_COUNT(sArmaldoGfx27)}, 
	{NULL, 32}, 
	{sArmaldoGfx27_1, ARRAY_COUNT(sArmaldoGfx27_1)}, 
	{NULL, 32}, 
	{sArmaldoGfx27_2, ARRAY_COUNT(sArmaldoGfx27_2)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_28.4bpp.lz");
static const u8 sArmaldoGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_28_1.4bpp.lz");
static const u8 sArmaldoGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_28_2.4bpp.lz");
static const u8 sArmaldoGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_28_3.4bpp.lz");
static const ax_sprite sArmaldoSprites28[] = {
	{sArmaldoGfx28, ARRAY_COUNT(sArmaldoGfx28)}, 
	{NULL, 32}, 
	{sArmaldoGfx28_1, ARRAY_COUNT(sArmaldoGfx28_1)}, 
	{NULL, 32}, 
	{sArmaldoGfx28_2, ARRAY_COUNT(sArmaldoGfx28_2)}, 
	{NULL, 32}, 
	{sArmaldoGfx28_3, ARRAY_COUNT(sArmaldoGfx28_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_29.4bpp.lz");
static const u8 sArmaldoGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_29_1.4bpp.lz");
static const u8 sArmaldoGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_29_2.4bpp.lz");
static const ax_sprite sArmaldoSprites29[] = {
	{sArmaldoGfx29, ARRAY_COUNT(sArmaldoGfx29)}, 
	{NULL, 32}, 
	{sArmaldoGfx29_1, ARRAY_COUNT(sArmaldoGfx29_1)}, 
	{NULL, 32}, 
	{sArmaldoGfx29_2, ARRAY_COUNT(sArmaldoGfx29_2)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_30.4bpp.lz");
static const ax_sprite sArmaldoSprites30[] = {
	{sArmaldoGfx30, ARRAY_COUNT(sArmaldoGfx30)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_31.4bpp.lz");
static const ax_sprite sArmaldoSprites31[] = {
	{sArmaldoGfx31, ARRAY_COUNT(sArmaldoGfx31)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_32.4bpp.lz");
static const ax_sprite sArmaldoSprites32[] = {
	{NULL, 32}, 
	{sArmaldoGfx32, ARRAY_COUNT(sArmaldoGfx32)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_33.4bpp.lz");
static const u8 sArmaldoGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_33_1.4bpp.lz");
static const ax_sprite sArmaldoSprites33[] = {
	{sArmaldoGfx33, ARRAY_COUNT(sArmaldoGfx33)}, 
	{NULL, 32}, 
	{sArmaldoGfx33_1, ARRAY_COUNT(sArmaldoGfx33_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_34.4bpp.lz");
static const ax_sprite sArmaldoSprites34[] = {
	{sArmaldoGfx34, ARRAY_COUNT(sArmaldoGfx34)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_35.4bpp.lz");
static const ax_sprite sArmaldoSprites35[] = {
	{sArmaldoGfx35, ARRAY_COUNT(sArmaldoGfx35)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_36.4bpp.lz");
static const ax_sprite sArmaldoSprites36[] = {
	{sArmaldoGfx36, ARRAY_COUNT(sArmaldoGfx36)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_37.4bpp.lz");
static const ax_sprite sArmaldoSprites37[] = {
	{sArmaldoGfx37, ARRAY_COUNT(sArmaldoGfx37)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_38.4bpp.lz");
static const u8 sArmaldoGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_38_1.4bpp.lz");
static const ax_sprite sArmaldoSprites38[] = {
	{sArmaldoGfx38, ARRAY_COUNT(sArmaldoGfx38)}, 
	{NULL, 32}, 
	{sArmaldoGfx38_1, ARRAY_COUNT(sArmaldoGfx38_1)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_39.4bpp.lz");
static const ax_sprite sArmaldoSprites39[] = {
	{sArmaldoGfx39, ARRAY_COUNT(sArmaldoGfx39)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_40.4bpp.lz");
static const u8 sArmaldoGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_40_1.4bpp.lz");
static const ax_sprite sArmaldoSprites40[] = {
	{NULL, 32}, 
	{sArmaldoGfx40, ARRAY_COUNT(sArmaldoGfx40)}, 
	{NULL, 32}, 
	{sArmaldoGfx40_1, ARRAY_COUNT(sArmaldoGfx40_1)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_41.4bpp.lz");
static const u8 sArmaldoGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_41_1.4bpp.lz");
static const u8 sArmaldoGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_41_2.4bpp.lz");
static const ax_sprite sArmaldoSprites41[] = {
	{sArmaldoGfx41, ARRAY_COUNT(sArmaldoGfx41)}, 
	{NULL, 32}, 
	{sArmaldoGfx41_1, ARRAY_COUNT(sArmaldoGfx41_1)}, 
	{NULL, 32}, 
	{sArmaldoGfx41_2, ARRAY_COUNT(sArmaldoGfx41_2)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_42.4bpp.lz");
static const ax_sprite sArmaldoSprites42[] = {
	{sArmaldoGfx42, ARRAY_COUNT(sArmaldoGfx42)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_43.4bpp.lz");
static const ax_sprite sArmaldoSprites43[] = {
	{sArmaldoGfx43, ARRAY_COUNT(sArmaldoGfx43)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_44.4bpp.lz");
static const ax_sprite sArmaldoSprites44[] = {
	{sArmaldoGfx44, ARRAY_COUNT(sArmaldoGfx44)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_45.4bpp.lz");
static const ax_sprite sArmaldoSprites45[] = {
	{sArmaldoGfx45, ARRAY_COUNT(sArmaldoGfx45)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_46.4bpp.lz");
static const ax_sprite sArmaldoSprites46[] = {
	{sArmaldoGfx46, ARRAY_COUNT(sArmaldoGfx46)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_47.4bpp.lz");
static const ax_sprite sArmaldoSprites47[] = {
	{sArmaldoGfx47, ARRAY_COUNT(sArmaldoGfx47)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_48.4bpp.lz");
static const u8 sArmaldoGfx48_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_48_1.4bpp.lz");
static const u8 sArmaldoGfx48_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_48_2.4bpp.lz");
static const ax_sprite sArmaldoSprites48[] = {
	{sArmaldoGfx48, ARRAY_COUNT(sArmaldoGfx48)}, 
	{NULL, 64}, 
	{sArmaldoGfx48_1, ARRAY_COUNT(sArmaldoGfx48_1)}, 
	{NULL, 64}, 
	{sArmaldoGfx48_2, ARRAY_COUNT(sArmaldoGfx48_2)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_49.4bpp.lz");
static const u8 sArmaldoGfx49_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_49_1.4bpp.lz");
static const ax_sprite sArmaldoSprites49[] = {
	{NULL, 32}, 
	{sArmaldoGfx49, ARRAY_COUNT(sArmaldoGfx49)}, 
	{NULL, 32}, 
	{sArmaldoGfx49_1, ARRAY_COUNT(sArmaldoGfx49_1)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_50.4bpp.lz");
static const u8 sArmaldoGfx50_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_50_1.4bpp.lz");
static const u8 sArmaldoGfx50_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_50_2.4bpp.lz");
static const u8 sArmaldoGfx50_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_50_3.4bpp.lz");
static const ax_sprite sArmaldoSprites50[] = {
	{sArmaldoGfx50, ARRAY_COUNT(sArmaldoGfx50)}, 
	{NULL, 32}, 
	{sArmaldoGfx50_1, ARRAY_COUNT(sArmaldoGfx50_1)}, 
	{NULL, 32}, 
	{sArmaldoGfx50_2, ARRAY_COUNT(sArmaldoGfx50_2)}, 
	{NULL, 32}, 
	{sArmaldoGfx50_3, ARRAY_COUNT(sArmaldoGfx50_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_51.4bpp.lz");
static const u8 sArmaldoGfx51_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_51_1.4bpp.lz");
static const ax_sprite sArmaldoSprites51[] = {
	{sArmaldoGfx51, ARRAY_COUNT(sArmaldoGfx51)}, 
	{NULL, 32}, 
	{sArmaldoGfx51_1, ARRAY_COUNT(sArmaldoGfx51_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_52.4bpp.lz");
static const ax_sprite sArmaldoSprites52[] = {
	{sArmaldoGfx52, ARRAY_COUNT(sArmaldoGfx52)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_53.4bpp.lz");
static const ax_sprite sArmaldoSprites53[] = {
	{sArmaldoGfx53, ARRAY_COUNT(sArmaldoGfx53)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_54.4bpp.lz");
static const ax_sprite sArmaldoSprites54[] = {
	{sArmaldoGfx54, ARRAY_COUNT(sArmaldoGfx54)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_55.4bpp.lz");
static const ax_sprite sArmaldoSprites55[] = {
	{sArmaldoGfx55, ARRAY_COUNT(sArmaldoGfx55)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_56.4bpp.lz");
static const ax_sprite sArmaldoSprites56[] = {
	{sArmaldoGfx56, ARRAY_COUNT(sArmaldoGfx56)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_57.4bpp.lz");
static const ax_sprite sArmaldoSprites57[] = {
	{sArmaldoGfx57, ARRAY_COUNT(sArmaldoGfx57)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_58.4bpp.lz");
static const u8 sArmaldoGfx58_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_58_1.4bpp.lz");
static const u8 sArmaldoGfx58_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_58_2.4bpp.lz");
static const ax_sprite sArmaldoSprites58[] = {
	{NULL, 64}, 
	{sArmaldoGfx58, ARRAY_COUNT(sArmaldoGfx58)}, 
	{NULL, 32}, 
	{sArmaldoGfx58_1, ARRAY_COUNT(sArmaldoGfx58_1)}, 
	{NULL, 96}, 
	{sArmaldoGfx58_2, ARRAY_COUNT(sArmaldoGfx58_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_59.4bpp.lz");
static const u8 sArmaldoGfx59_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_59_1.4bpp.lz");
static const u8 sArmaldoGfx59_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_59_2.4bpp.lz");
static const ax_sprite sArmaldoSprites59[] = {
	{sArmaldoGfx59, ARRAY_COUNT(sArmaldoGfx59)}, 
	{NULL, 32}, 
	{sArmaldoGfx59_1, ARRAY_COUNT(sArmaldoGfx59_1)}, 
	{NULL, 32}, 
	{sArmaldoGfx59_2, ARRAY_COUNT(sArmaldoGfx59_2)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_60.4bpp.lz");
static const u8 sArmaldoGfx60_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_60_1.4bpp.lz");
static const u8 sArmaldoGfx60_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_60_2.4bpp.lz");
static const ax_sprite sArmaldoSprites60[] = {
	{sArmaldoGfx60, ARRAY_COUNT(sArmaldoGfx60)}, 
	{NULL, 64}, 
	{sArmaldoGfx60_1, ARRAY_COUNT(sArmaldoGfx60_1)}, 
	{NULL, 64}, 
	{sArmaldoGfx60_2, ARRAY_COUNT(sArmaldoGfx60_2)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_61.4bpp.lz");
static const u8 sArmaldoGfx61_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_61_1.4bpp.lz");
static const ax_sprite sArmaldoSprites61[] = {
	{sArmaldoGfx61, ARRAY_COUNT(sArmaldoGfx61)}, 
	{NULL, 64}, 
	{sArmaldoGfx61_1, ARRAY_COUNT(sArmaldoGfx61_1)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_62.4bpp.lz");
static const ax_sprite sArmaldoSprites62[] = {
	{sArmaldoGfx62, ARRAY_COUNT(sArmaldoGfx62)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_63.4bpp.lz");
static const ax_sprite sArmaldoSprites63[] = {
	{sArmaldoGfx63, ARRAY_COUNT(sArmaldoGfx63)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_64.4bpp.lz");
static const ax_sprite sArmaldoSprites64[] = {
	{sArmaldoGfx64, ARRAY_COUNT(sArmaldoGfx64)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_65.4bpp.lz");
static const ax_sprite sArmaldoSprites65[] = {
	{sArmaldoGfx65, ARRAY_COUNT(sArmaldoGfx65)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_66.4bpp.lz");
static const ax_sprite sArmaldoSprites66[] = {
	{sArmaldoGfx66, ARRAY_COUNT(sArmaldoGfx66)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_67.4bpp.lz");
static const ax_sprite sArmaldoSprites67[] = {
	{sArmaldoGfx67, ARRAY_COUNT(sArmaldoGfx67)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_68.4bpp.lz");
static const ax_sprite sArmaldoSprites68[] = {
	{sArmaldoGfx68, ARRAY_COUNT(sArmaldoGfx68)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_69.4bpp.lz");
static const ax_sprite sArmaldoSprites69[] = {
	{sArmaldoGfx69, ARRAY_COUNT(sArmaldoGfx69)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_70.4bpp.lz");
static const ax_sprite sArmaldoSprites70[] = {
	{sArmaldoGfx70, ARRAY_COUNT(sArmaldoGfx70)}, 
	{NULL, 0}
};
static const u8 sArmaldoGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/armaldo/sprite_71.4bpp.lz");
static const ax_sprite sArmaldoSprites71[] = {
	{sArmaldoGfx71, ARRAY_COUNT(sArmaldoGfx71)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesArmaldo[] = {
	sArmaldoPose1,
	sArmaldoPose2,
	sArmaldoPose3,
	sArmaldoPose4,
	sArmaldoPose5,
	sArmaldoPose6,
	sArmaldoPose7,
	sArmaldoPose8,
	sArmaldoPose9,
	sArmaldoPose10,
	sArmaldoPose11,
	sArmaldoPose12,
	sArmaldoPose13,
	sArmaldoPose14,
	sArmaldoPose15,
	sArmaldoPose16,
	sArmaldoPose17,
	sArmaldoPose18,
	sArmaldoPose19,
	sArmaldoPose20,
	sArmaldoPose21,
	sArmaldoPose22,
	sArmaldoPose23,
	sArmaldoPose24,
	sArmaldoPose1,
	sArmaldoPose2,
	sArmaldoPose3,
	sArmaldoPose28,
	sArmaldoPose29,
	sArmaldoPose4,
	sArmaldoPose5,
	sArmaldoPose6,
	sArmaldoPose33,
	sArmaldoPose34,
	sArmaldoPose7,
	sArmaldoPose8,
	sArmaldoPose9,
	sArmaldoPose38,
	sArmaldoPose39,
	sArmaldoPose10,
	sArmaldoPose11,
	sArmaldoPose12,
	sArmaldoPose43,
	sArmaldoPose44,
	sArmaldoPose13,
	sArmaldoPose14,
	sArmaldoPose15,
	sArmaldoPose48,
	sArmaldoPose49,
	sArmaldoPose16,
	sArmaldoPose17,
	sArmaldoPose18,
	sArmaldoPose53,
	sArmaldoPose54,
	sArmaldoPose19,
	sArmaldoPose20,
	sArmaldoPose21,
	sArmaldoPose58,
	sArmaldoPose59,
	sArmaldoPose22,
	sArmaldoPose23,
	sArmaldoPose24,
	sArmaldoPose63,
	sArmaldoPose64,
	sArmaldoPose1,
	sArmaldoPose28,
	sArmaldoPose67,
	sArmaldoPose68,
	sArmaldoPose4,
	sArmaldoPose33,
	sArmaldoPose71,
	sArmaldoPose72,
	sArmaldoPose7,
	sArmaldoPose38,
	sArmaldoPose75,
	sArmaldoPose76,
	sArmaldoPose10,
	sArmaldoPose43,
	sArmaldoPose79,
	sArmaldoPose80,
	sArmaldoPose13,
	sArmaldoPose48,
	sArmaldoPose83,
	sArmaldoPose84,
	sArmaldoPose16,
	sArmaldoPose53,
	sArmaldoPose87,
	sArmaldoPose88,
	sArmaldoPose19,
	sArmaldoPose58,
	sArmaldoPose91,
	sArmaldoPose92,
	sArmaldoPose22,
	sArmaldoPose63,
	sArmaldoPose95,
	sArmaldoPose96,
	sArmaldoPose1,
	sArmaldoPose28,
	sArmaldoPose29,
	sArmaldoPose4,
	sArmaldoPose33,
	sArmaldoPose34,
	sArmaldoPose7,
	sArmaldoPose38,
	sArmaldoPose39,
	sArmaldoPose10,
	sArmaldoPose43,
	sArmaldoPose44,
	sArmaldoPose13,
	sArmaldoPose48,
	sArmaldoPose49,
	sArmaldoPose16,
	sArmaldoPose53,
	sArmaldoPose54,
	sArmaldoPose19,
	sArmaldoPose58,
	sArmaldoPose59,
	sArmaldoPose22,
	sArmaldoPose63,
	sArmaldoPose64,
	sArmaldoPose1,
	sArmaldoPose122,
	sArmaldoPose123,
	sArmaldoPose124,
	sArmaldoPose13,
	sArmaldoPose126,
	sArmaldoPose127,
	sArmaldoPose128,
	sArmaldoPose129,
	sArmaldoPose130,
	sArmaldoPose131,
	sArmaldoPose132,
	sArmaldoPose133,
	sArmaldoPose134,
	sArmaldoPose135,
	sArmaldoPose136,
	sArmaldoPose137,
	sArmaldoPose138,
	sArmaldoPose1,
	sArmaldoPose28,
	sArmaldoPose29,
	sArmaldoPose4,
	sArmaldoPose33,
	sArmaldoPose34,
	sArmaldoPose7,
	sArmaldoPose38,
	sArmaldoPose39,
	sArmaldoPose10,
	sArmaldoPose43,
	sArmaldoPose44,
	sArmaldoPose13,
	sArmaldoPose48,
	sArmaldoPose49,
	sArmaldoPose16,
	sArmaldoPose53,
	sArmaldoPose54,
	sArmaldoPose19,
	sArmaldoPose58,
	sArmaldoPose59,
	sArmaldoPose22,
	sArmaldoPose63,
	sArmaldoPose64,
	sArmaldoPose163,
	sArmaldoPose164,
	sArmaldoPose59,
	sArmaldoPose166,
	sArmaldoPose167,
	sArmaldoPose168,
	sArmaldoPose169,
	sArmaldoPose170,
	sArmaldoPose4,
	sArmaldoPose5,
	sArmaldoPose6,
	sArmaldoPose33,
	sArmaldoPose7,
	sArmaldoPose8,
	sArmaldoPose9,
	sArmaldoPose38,
	sArmaldoPose10,
	sArmaldoPose11,
	sArmaldoPose12,
	sArmaldoPose43,
	sArmaldoPose13,
	sArmaldoPose14,
	sArmaldoPose15,
	sArmaldoPose48,
	sArmaldoPose16,
	sArmaldoPose17,
	sArmaldoPose18,
	sArmaldoPose53,
	sArmaldoPose19,
	sArmaldoPose20,
	sArmaldoPose21,
	sArmaldoPose58,
	sArmaldoPose22,
	sArmaldoPose23,
	sArmaldoPose24,
	sArmaldoPose63,
	sArmaldoPose199,
	sArmaldoPose200,
	sArmaldoPose201,
	sArmaldoPose202,
	sArmaldoPose203,
	sArmaldoPose204,
	sArmaldoPose205,
	sArmaldoPose206,
	sArmaldoPose207,
	sArmaldoPose199,
	sArmaldoPose163,
	sArmaldoPose210,
	sArmaldoPose211,
	sArmaldoPose212,
	sArmaldoPose213,
	sArmaldoPose201,
	sArmaldoPose215,
	sArmaldoPose216,
	sArmaldoPose217,
	sArmaldoPose218,
	sArmaldoPose219,
	sArmaldoPose203,
	sArmaldoPose167,
	sArmaldoPose222,
	sArmaldoPose223,
	sArmaldoPose224,
	sArmaldoPose123,
	sArmaldoPose205,
	sArmaldoPose227,
	sArmaldoPose228,
	sArmaldoPose229,
	sArmaldoPose230,
	sArmaldoPose231,
	sArmaldoPose232,
	sArmaldoPose92,
	sArmaldoPose88,
	sArmaldoPose84,
	sArmaldoPose80,
	sArmaldoPose237,
	sArmaldoPose72,
	sArmaldoPose1,
	sArmaldoPose122,
	sArmaldoPose123,
	sArmaldoPose124,
	sArmaldoPose13,
	sArmaldoPose126,
	sArmaldoPose127,
	sArmaldoPose128,
};

static const struct PositionSets sAxPositionsArmaldo[] = {
	[0] = { .set = { {-1, -13}, {-9, -2}, {7, -2}, {-1, -9} } },
	[1] = { .set = { {-1, -11}, {-8, -2}, {7, 1}, {0, -7} } },
	[2] = { .set = { {-1, -11}, {-9, 1}, {7, -1}, {-1, -7} } },
	[3] = { .set = { {4, -14}, {10, -5}, {-2, 1}, {-1, -10} } },
	[4] = { .set = { {5, -12}, {8, -4}, {0, 3}, {0, -8} } },
	[5] = { .set = { {5, -12}, {11, -3}, {-2, 0}, {1, -9} } },
	[6] = { .set = { {9, -18}, {8, -10}, {8, -3}, {-2, -10} } },
	[7] = { .set = { {10, -17}, {9, -8}, {10, -2}, {-1, -9} } },
	[8] = { .set = { {10, -17}, {10, -8}, {6, -1}, {-1, -9} } },
	[9] = { .set = { {5, -20}, {-4, -13}, {10, -6}, {-2, -11} } },
	[10] = { .set = { {6, -19}, {-3, -13}, {11, -6}, {-2, -10} } },
	[11] = { .set = { {6, -19}, {-2, -12}, {8, -5}, {0, -11} } },
	[12] = { .set = { {-1, -21}, {6, -9}, {-6, -9}, {0, -11} } },
	[13] = { .set = { {-1, -19}, {6, -8}, {-6, -9}, {-1, -10} } },
	[14] = { .set = { {0, -19}, {8, -8}, {-5, -7}, {0, -10} } },
	[15] = { .set = { {-6, -20}, {3, -13}, {-11, -6}, {1, -11} } },
	[16] = { .set = { {-7, -19}, {2, -13}, {-12, -6}, {1, -10} } },
	[17] = { .set = { {-7, -19}, {1, -12}, {-9, -5}, {-1, -11} } },
	[18] = { .set = { {-11, -17}, {-10, -9}, {-10, -2}, {0, -9} } },
	[19] = { .set = { {-12, -16}, {-11, -7}, {-12, -1}, {-1, -8} } },
	[20] = { .set = { {-12, -16}, {-12, -7}, {-8, 0}, {-1, -8} } },
	[21] = { .set = { {-6, -14}, {-12, -5}, {0, 1}, {-1, -10} } },
	[22] = { .set = { {-7, -12}, {-10, -4}, {-2, 3}, {-2, -8} } },
	[23] = { .set = { {-7, -12}, {-13, -3}, {0, 0}, {-3, -9} } },
	[24] = { .set = { {-1, -13}, {-9, -2}, {7, -2}, {-1, -9} } },
	[25] = { .set = { {-1, -11}, {-8, -2}, {7, 1}, {0, -7} } },
	[26] = { .set = { {-1, -11}, {-9, 1}, {7, -1}, {-1, -7} } },
	[27] = { .set = { {-1, -15}, {-14, -20}, {13, -20}, {0, -10} } },
	[28] = { .set = { {-1, -9}, {-12, -5}, {12, -5}, {0, -7} } },
	[29] = { .set = { {4, -14}, {10, -5}, {-2, 1}, {-1, -10} } },
	[30] = { .set = { {5, -12}, {8, -4}, {0, 3}, {0, -8} } },
	[31] = { .set = { {5, -12}, {11, -3}, {-2, 0}, {1, -9} } },
	[32] = { .set = { {3, -16}, {11, -22}, {-6, -19}, {-1, -11} } },
	[33] = { .set = { {7, -11}, {0, -11}, {-11, -5}, {-1, -8} } },
	[34] = { .set = { {9, -18}, {8, -10}, {8, -3}, {-2, -10} } },
	[35] = { .set = { {10, -17}, {9, -8}, {10, -2}, {-1, -9} } },
	[36] = { .set = { {10, -17}, {10, -8}, {6, -1}, {-1, -9} } },
	[37] = { .set = { {6, -20}, {9, -26}, {8, -15}, {-1, -11} } },
	[38] = { .set = { {12, -16}, {-1, -11}, {-3, -3}, {0, -13} } },
	[39] = { .set = { {5, -20}, {-4, -13}, {10, -6}, {-2, -11} } },
	[40] = { .set = { {6, -19}, {-3, -13}, {11, -6}, {-2, -10} } },
	[41] = { .set = { {6, -19}, {-2, -12}, {8, -5}, {0, -11} } },
	[42] = { .set = { {2, -22}, {-5, -27}, {14, -20}, {-2, -12} } },
	[43] = { .set = { {8, -20}, {-6, -12}, {7, -3}, {-1, -13} } },
	[44] = { .set = { {-1, -21}, {6, -9}, {-6, -9}, {0, -11} } },
	[45] = { .set = { {-1, -19}, {6, -8}, {-6, -9}, {-1, -10} } },
	[46] = { .set = { {0, -19}, {8, -8}, {-5, -7}, {0, -10} } },
	[47] = { .set = { {-1, -22}, {13, -23}, {-14, -22}, {-1, -12} } },
	[48] = { .set = { {0, -20}, {13, -7}, {-14, -7}, {-1, -13} } },
	[49] = { .set = { {-6, -20}, {3, -13}, {-11, -6}, {1, -11} } },
	[50] = { .set = { {-7, -19}, {2, -13}, {-12, -6}, {1, -10} } },
	[51] = { .set = { {-7, -19}, {1, -12}, {-9, -5}, {-1, -11} } },
	[52] = { .set = { {-3, -22}, {4, -27}, {-15, -20}, {1, -12} } },
	[53] = { .set = { {-9, -20}, {5, -12}, {-8, -3}, {0, -13} } },
	[54] = { .set = { {-11, -17}, {-10, -9}, {-10, -2}, {0, -9} } },
	[55] = { .set = { {-12, -16}, {-11, -7}, {-12, -1}, {-1, -8} } },
	[56] = { .set = { {-12, -16}, {-12, -7}, {-8, 0}, {-1, -8} } },
	[57] = { .set = { {-8, -19}, {-11, -25}, {-10, -14}, {-1, -10} } },
	[58] = { .set = { {-14, -15}, {-1, -10}, {1, -2}, {-2, -12} } },
	[59] = { .set = { {-6, -14}, {-12, -5}, {0, 1}, {-1, -10} } },
	[60] = { .set = { {-7, -12}, {-10, -4}, {-2, 3}, {-2, -8} } },
	[61] = { .set = { {-7, -12}, {-13, -3}, {0, 0}, {-3, -9} } },
	[62] = { .set = { {-5, -16}, {-13, -22}, {4, -19}, {-1, -11} } },
	[63] = { .set = { {-9, -11}, {-2, -11}, {9, -5}, {-1, -8} } },
	[64] = { .set = { {-1, -13}, {-9, -2}, {7, -2}, {-1, -9} } },
	[65] = { .set = { {-1, -15}, {-14, -20}, {13, -20}, {0, -10} } },
	[66] = { .set = { {-1, -9}, {7, 2}, {-7, 3}, {0, -6} } },
	[67] = { .set = { {-1, -9}, {7, 2}, {-7, 3}, {0, -6} } },
	[68] = { .set = { {4, -14}, {10, -5}, {-2, 1}, {-1, -10} } },
	[69] = { .set = { {3, -16}, {11, -22}, {-6, -19}, {-1, -11} } },
	[70] = { .set = { {7, -11}, {5, 2}, {11, -1}, {-1, -9} } },
	[71] = { .set = { {7, -11}, {5, 2}, {11, -1}, {-1, -9} } },
	[72] = { .set = { {9, -18}, {8, -10}, {8, -3}, {-2, -10} } },
	[73] = { .set = { {6, -20}, {9, -26}, {8, -15}, {-1, -11} } },
	[74] = { .set = { {12, -16}, {10, -1}, {14, -11}, {0, -11} } },
	[75] = { .set = { {12, -16}, {10, -1}, {14, -11}, {0, -11} } },
	[76] = { .set = { {5, -20}, {-4, -13}, {10, -6}, {-2, -11} } },
	[77] = { .set = { {2, -22}, {-5, -27}, {14, -20}, {-2, -12} } },
	[78] = { .set = { {7, -19}, {10, -6}, {-1, -13}, {-2, -11} } },
	[79] = { .set = { {7, -19}, {10, -6}, {-1, -13}, {-2, -11} } },
	[80] = { .set = { {-1, -21}, {6, -9}, {-6, -9}, {0, -11} } },
	[81] = { .set = { {-1, -22}, {13, -23}, {-14, -22}, {-1, -12} } },
	[82] = { .set = { {0, -20}, {8, -7}, {-7, -7}, {-1, -14} } },
	[83] = { .set = { {0, -20}, {8, -7}, {-7, -7}, {-1, -14} } },
	[84] = { .set = { {-6, -20}, {3, -13}, {-11, -6}, {1, -11} } },
	[85] = { .set = { {-3, -22}, {4, -27}, {-15, -20}, {1, -12} } },
	[86] = { .set = { {-8, -19}, {-11, -6}, {0, -13}, {1, -11} } },
	[87] = { .set = { {-8, -19}, {-11, -6}, {0, -13}, {1, -11} } },
	[88] = { .set = { {-11, -17}, {-10, -9}, {-10, -2}, {0, -9} } },
	[89] = { .set = { {-8, -19}, {-11, -25}, {-10, -14}, {-1, -10} } },
	[90] = { .set = { {-14, -15}, {-12, 0}, {-16, -10}, {-2, -10} } },
	[91] = { .set = { {-14, -15}, {-12, 0}, {-16, -10}, {-2, -10} } },
	[92] = { .set = { {-6, -14}, {-12, -5}, {0, 1}, {-1, -10} } },
	[93] = { .set = { {-5, -16}, {-13, -22}, {4, -19}, {-1, -11} } },
	[94] = { .set = { {-9, -11}, {-7, 2}, {-13, -1}, {-1, -9} } },
	[95] = { .set = { {-9, -11}, {-7, 2}, {-13, -1}, {-1, -9} } },
	[96] = { .set = { {-1, -13}, {-9, -2}, {7, -2}, {-1, -9} } },
	[97] = { .set = { {-1, -15}, {-14, -20}, {13, -20}, {0, -10} } },
	[98] = { .set = { {-1, -9}, {-12, -5}, {12, -5}, {0, -7} } },
	[99] = { .set = { {4, -14}, {10, -5}, {-2, 1}, {-1, -10} } },
	[100] = { .set = { {3, -16}, {11, -22}, {-6, -19}, {-1, -11} } },
	[101] = { .set = { {7, -11}, {0, -11}, {-11, -5}, {-1, -8} } },
	[102] = { .set = { {9, -18}, {8, -10}, {8, -3}, {-2, -10} } },
	[103] = { .set = { {6, -20}, {9, -26}, {8, -15}, {-1, -11} } },
	[104] = { .set = { {12, -16}, {-1, -11}, {-3, -3}, {0, -13} } },
	[105] = { .set = { {5, -20}, {-4, -13}, {10, -6}, {-2, -11} } },
	[106] = { .set = { {2, -22}, {-5, -27}, {14, -20}, {-2, -12} } },
	[107] = { .set = { {8, -20}, {-6, -12}, {7, -3}, {-1, -13} } },
	[108] = { .set = { {-1, -21}, {6, -9}, {-6, -9}, {0, -11} } },
	[109] = { .set = { {-1, -22}, {13, -23}, {-14, -22}, {-1, -12} } },
	[110] = { .set = { {0, -20}, {13, -7}, {-14, -7}, {-1, -13} } },
	[111] = { .set = { {-6, -20}, {3, -13}, {-11, -6}, {1, -11} } },
	[112] = { .set = { {-3, -22}, {4, -27}, {-15, -20}, {1, -12} } },
	[113] = { .set = { {-9, -20}, {5, -12}, {-8, -3}, {0, -13} } },
	[114] = { .set = { {-11, -17}, {-10, -9}, {-10, -2}, {0, -9} } },
	[115] = { .set = { {-8, -19}, {-11, -25}, {-10, -14}, {-1, -10} } },
	[116] = { .set = { {-14, -15}, {-1, -10}, {1, -2}, {-2, -12} } },
	[117] = { .set = { {-6, -14}, {-12, -5}, {0, 1}, {-1, -10} } },
	[118] = { .set = { {-5, -16}, {-13, -22}, {4, -19}, {-1, -11} } },
	[119] = { .set = { {-9, -11}, {-2, -11}, {9, -5}, {-1, -8} } },
	[120] = { .set = { {-1, -13}, {-9, -2}, {7, -2}, {-1, -9} } },
	[121] = { .set = { {-5, -13}, {-11, -4}, {1, 2}, {0, -9} } },
	[122] = { .set = { {-10, -17}, {-9, -9}, {-9, -2}, {1, -9} } },
	[123] = { .set = { {-5, -20}, {4, -13}, {-10, -6}, {2, -11} } },
	[124] = { .set = { {-1, -21}, {6, -9}, {-6, -9}, {0, -11} } },
	[125] = { .set = { {4, -20}, {-5, -13}, {9, -6}, {-3, -11} } },
	[126] = { .set = { {10, -18}, {9, -10}, {9, -3}, {-1, -10} } },
	[127] = { .set = { {5, -13}, {11, -4}, {-1, 2}, {0, -9} } },
	[128] = { .set = { {-5, -11}, {-11, -3}, {1, 2}, {-1, -6} } },
	[129] = { .set = { {-6, -10}, {-12, -2}, {1, 3}, {-1, -5} } },
	[130] = { .set = { {-1, -18}, {-12, -9}, {12, -9}, {0, -9} } },
	[131] = { .set = { {0, -17}, {11, -10}, {-10, -3}, {-1, -9} } },
	[132] = { .set = { {2, -23}, {-9, -10}, {-6, -4}, {-2, -10} } },
	[133] = { .set = { {2, -22}, {-8, -11}, {9, -5}, {-3, -12} } },
	[134] = { .set = { {0, -19}, {10, -10}, {-11, -9}, {0, -9} } },
	[135] = { .set = { {-3, -22}, {7, -11}, {-10, -5}, {2, -12} } },
	[136] = { .set = { {-3, -23}, {8, -10}, {5, -4}, {1, -10} } },
	[137] = { .set = { {-1, -17}, {-12, -10}, {9, -3}, {0, -9} } },
	[138] = { .set = { {-1, -13}, {-9, -2}, {7, -2}, {-1, -9} } },
	[139] = { .set = { {-1, -15}, {-14, -20}, {13, -20}, {0, -10} } },
	[140] = { .set = { {-1, -9}, {-12, -5}, {12, -5}, {0, -7} } },
	[141] = { .set = { {4, -14}, {10, -5}, {-2, 1}, {-1, -10} } },
	[142] = { .set = { {3, -16}, {11, -22}, {-6, -19}, {-1, -11} } },
	[143] = { .set = { {7, -11}, {0, -11}, {-11, -5}, {-1, -8} } },
	[144] = { .set = { {9, -18}, {8, -10}, {8, -3}, {-2, -10} } },
	[145] = { .set = { {6, -20}, {9, -26}, {8, -15}, {-1, -11} } },
	[146] = { .set = { {12, -16}, {-1, -11}, {-3, -3}, {0, -13} } },
	[147] = { .set = { {5, -20}, {-4, -13}, {10, -6}, {-2, -11} } },
	[148] = { .set = { {2, -22}, {-5, -27}, {14, -20}, {-2, -12} } },
	[149] = { .set = { {8, -20}, {-6, -12}, {7, -3}, {-1, -13} } },
	[150] = { .set = { {-1, -21}, {6, -9}, {-6, -9}, {0, -11} } },
	[151] = { .set = { {-1, -22}, {13, -23}, {-14, -22}, {-1, -12} } },
	[152] = { .set = { {0, -20}, {13, -7}, {-14, -7}, {-1, -13} } },
	[153] = { .set = { {-6, -20}, {3, -13}, {-11, -6}, {1, -11} } },
	[154] = { .set = { {-3, -22}, {4, -27}, {-15, -20}, {1, -12} } },
	[155] = { .set = { {-9, -20}, {5, -12}, {-8, -3}, {0, -13} } },
	[156] = { .set = { {-11, -17}, {-10, -9}, {-10, -2}, {0, -9} } },
	[157] = { .set = { {-8, -19}, {-11, -25}, {-10, -14}, {-1, -10} } },
	[158] = { .set = { {-14, -15}, {-1, -10}, {1, -2}, {-2, -12} } },
	[159] = { .set = { {-6, -14}, {-12, -5}, {0, 1}, {-1, -10} } },
	[160] = { .set = { {-5, -16}, {-13, -22}, {4, -19}, {-1, -11} } },
	[161] = { .set = { {-9, -11}, {-2, -11}, {9, -5}, {-1, -8} } },
	[162] = { .set = { {-1, -8}, {-12, -4}, {12, -4}, {0, -6} } },
	[163] = { .set = { {-9, -9}, {-2, -9}, {9, -3}, {-1, -6} } },
	[164] = { .set = { {-14, -15}, {-1, -10}, {1, -2}, {-2, -12} } },
	[165] = { .set = { {-9, -19}, {5, -11}, {-8, -2}, {0, -12} } },
	[166] = { .set = { {0, -19}, {13, -6}, {-14, -6}, {-1, -12} } },
	[167] = { .set = { {8, -19}, {-6, -11}, {7, -2}, {-1, -12} } },
	[168] = { .set = { {12, -15}, {-1, -10}, {-3, -2}, {0, -12} } },
	[169] = { .set = { {8, -9}, {1, -9}, {-10, -3}, {0, -6} } },
	[170] = { .set = { {4, -14}, {10, -5}, {-2, 1}, {-1, -10} } },
	[171] = { .set = { {5, -12}, {8, -4}, {0, 3}, {0, -8} } },
	[172] = { .set = { {5, -12}, {11, -3}, {-2, 0}, {1, -9} } },
	[173] = { .set = { {3, -16}, {11, -22}, {-6, -19}, {-1, -11} } },
	[174] = { .set = { {9, -18}, {8, -10}, {8, -3}, {-2, -10} } },
	[175] = { .set = { {10, -17}, {9, -8}, {10, -2}, {-1, -9} } },
	[176] = { .set = { {10, -17}, {10, -8}, {6, -1}, {-1, -9} } },
	[177] = { .set = { {6, -20}, {9, -26}, {8, -15}, {-1, -11} } },
	[178] = { .set = { {5, -20}, {-4, -13}, {10, -6}, {-2, -11} } },
	[179] = { .set = { {6, -19}, {-3, -13}, {11, -6}, {-2, -10} } },
	[180] = { .set = { {6, -19}, {-2, -12}, {8, -5}, {0, -11} } },
	[181] = { .set = { {2, -22}, {-5, -27}, {14, -20}, {-2, -12} } },
	[182] = { .set = { {-1, -21}, {6, -9}, {-6, -9}, {0, -11} } },
	[183] = { .set = { {-1, -19}, {6, -8}, {-6, -9}, {-1, -10} } },
	[184] = { .set = { {0, -19}, {8, -8}, {-5, -7}, {0, -10} } },
	[185] = { .set = { {-1, -22}, {13, -23}, {-14, -22}, {-1, -12} } },
	[186] = { .set = { {-6, -20}, {3, -13}, {-11, -6}, {1, -11} } },
	[187] = { .set = { {-7, -19}, {2, -13}, {-12, -6}, {1, -10} } },
	[188] = { .set = { {-7, -19}, {1, -12}, {-9, -5}, {-1, -11} } },
	[189] = { .set = { {-3, -22}, {4, -27}, {-15, -20}, {1, -12} } },
	[190] = { .set = { {-11, -17}, {-10, -9}, {-10, -2}, {0, -9} } },
	[191] = { .set = { {-12, -16}, {-11, -7}, {-12, -1}, {-1, -8} } },
	[192] = { .set = { {-12, -16}, {-12, -7}, {-8, 0}, {-1, -8} } },
	[193] = { .set = { {-8, -19}, {-11, -25}, {-10, -14}, {-1, -10} } },
	[194] = { .set = { {-6, -14}, {-12, -5}, {0, 1}, {-1, -10} } },
	[195] = { .set = { {-7, -12}, {-10, -4}, {-2, 3}, {-2, -8} } },
	[196] = { .set = { {-7, -12}, {-13, -3}, {0, 0}, {-3, -9} } },
	[197] = { .set = { {-5, -16}, {-13, -22}, {4, -19}, {-1, -11} } },
	[198] = { .set = { {-1, -14}, {-14, -19}, {13, -19}, {0, -9} } },
	[199] = { .set = { {4, -14}, {12, -20}, {-5, -17}, {0, -9} } },
	[200] = { .set = { {6, -19}, {9, -25}, {8, -14}, {-1, -10} } },
	[201] = { .set = { {2, -20}, {-5, -25}, {14, -18}, {-2, -10} } },
	[202] = { .set = { {-1, -21}, {13, -22}, {-14, -21}, {-1, -11} } },
	[203] = { .set = { {-3, -20}, {4, -25}, {-15, -18}, {1, -10} } },
	[204] = { .set = { {-7, -19}, {-10, -25}, {-9, -14}, {0, -10} } },
	[205] = { .set = { {-5, -14}, {-13, -20}, {4, -17}, {-1, -9} } },
	[206] = { .set = { {-1, -12}, {-9, -1}, {7, -1}, {-1, -8} } },
	[207] = { .set = { {-1, -14}, {-14, -19}, {13, -19}, {0, -9} } },
	[208] = { .set = { {-1, -8}, {-12, -4}, {12, -4}, {0, -6} } },
	[209] = { .set = { {4, -12}, {10, -3}, {-2, 3}, {-1, -8} } },
	[210] = { .set = { {3, -14}, {11, -20}, {-6, -17}, {-1, -9} } },
	[211] = { .set = { {6, -9}, {-1, -9}, {-12, -3}, {-2, -6} } },
	[212] = { .set = { {9, -17}, {8, -9}, {8, -2}, {-2, -9} } },
	[213] = { .set = { {6, -19}, {9, -25}, {8, -14}, {-1, -10} } },
	[214] = { .set = { {11, -15}, {-2, -10}, {-4, -2}, {-1, -12} } },
	[215] = { .set = { {5, -19}, {-4, -12}, {10, -5}, {-2, -10} } },
	[216] = { .set = { {2, -21}, {-5, -26}, {14, -19}, {-2, -11} } },
	[217] = { .set = { {7, -19}, {-7, -11}, {6, -2}, {-2, -12} } },
	[218] = { .set = { {-1, -20}, {6, -8}, {-6, -8}, {0, -10} } },
	[219] = { .set = { {-1, -21}, {13, -22}, {-14, -21}, {-1, -11} } },
	[220] = { .set = { {0, -19}, {13, -6}, {-14, -6}, {-1, -12} } },
	[221] = { .set = { {-6, -19}, {3, -12}, {-11, -5}, {1, -10} } },
	[222] = { .set = { {-3, -21}, {4, -26}, {-15, -19}, {1, -11} } },
	[223] = { .set = { {-8, -19}, {6, -11}, {-7, -2}, {1, -12} } },
	[224] = { .set = { {-10, -17}, {-9, -9}, {-9, -2}, {1, -9} } },
	[225] = { .set = { {-7, -19}, {-10, -25}, {-9, -14}, {0, -10} } },
	[226] = { .set = { {-12, -15}, {1, -10}, {3, -2}, {0, -12} } },
	[227] = { .set = { {-5, -12}, {-11, -3}, {1, 3}, {0, -8} } },
	[228] = { .set = { {-4, -14}, {-12, -20}, {5, -17}, {0, -9} } },
	[229] = { .set = { {-7, -9}, {0, -9}, {11, -3}, {1, -6} } },
	[230] = { .set = { {-1, -10}, {7, 1}, {-7, 2}, {0, -7} } },
	[231] = { .set = { {-8, -11}, {-6, 2}, {-12, -1}, {0, -9} } },
	[232] = { .set = { {-14, -15}, {-12, 0}, {-16, -10}, {-2, -10} } },
	[233] = { .set = { {-8, -19}, {-11, -6}, {0, -13}, {1, -11} } },
	[234] = { .set = { {0, -20}, {8, -7}, {-7, -7}, {-1, -14} } },
	[235] = { .set = { {7, -19}, {10, -6}, {-1, -13}, {-2, -11} } },
	[236] = { .set = { {13, -15}, {11, 0}, {15, -10}, {1, -10} } },
	[237] = { .set = { {7, -11}, {5, 2}, {11, -1}, {-1, -9} } },
	[238] = { .set = { {-1, -13}, {-9, -2}, {7, -2}, {-1, -9} } },
	[239] = { .set = { {-5, -13}, {-11, -4}, {1, 2}, {0, -9} } },
	[240] = { .set = { {-10, -17}, {-9, -9}, {-9, -2}, {1, -9} } },
	[241] = { .set = { {-5, -20}, {4, -13}, {-10, -6}, {2, -11} } },
	[242] = { .set = { {-1, -21}, {6, -9}, {-6, -9}, {0, -11} } },
	[243] = { .set = { {4, -20}, {-5, -13}, {9, -6}, {-3, -11} } },
	[244] = { .set = { {10, -18}, {9, -10}, {9, -3}, {-1, -10} } },
	[245] = { .set = { {5, -13}, {11, -4}, {-1, 2}, {0, -9} } },
};

static const ax_anim *const sArmaldoAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02603),
	AX_ANIM_PTR(gAxSharedAnim_02679),
	AX_ANIM_PTR(gAxSharedAnim_02688),
	AX_ANIM_PTR(gAxSharedAnim_02697),
	AX_ANIM_PTR(gAxSharedAnim_02615),
	AX_ANIM_PTR(gAxSharedAnim_02637),
	AX_ANIM_PTR(gAxSharedAnim_02650),
	AX_ANIM_PTR(gAxSharedAnim_02659),
};

static const ax_anim *const sArmaldoAnimTable2[] = {
	AX_ANIM_PTR(sArmaldoAnims_2_1),
	AX_ANIM_PTR(sArmaldoAnims_2_2),
	AX_ANIM_PTR(sArmaldoAnims_2_3),
	AX_ANIM_PTR(sArmaldoAnims_2_4),
	AX_ANIM_PTR(sArmaldoAnims_2_5),
	AX_ANIM_PTR(sArmaldoAnims_2_6),
	AX_ANIM_PTR(sArmaldoAnims_2_7),
	AX_ANIM_PTR(sArmaldoAnims_2_8),
};

static const ax_anim *const sArmaldoAnimTable3[] = {
	AX_ANIM_PTR(sArmaldoAnims_3_1),
	AX_ANIM_PTR(sArmaldoAnims_3_2),
	AX_ANIM_PTR(sArmaldoAnims_3_3),
	AX_ANIM_PTR(sArmaldoAnims_3_4),
	AX_ANIM_PTR(sArmaldoAnims_3_5),
	AX_ANIM_PTR(sArmaldoAnims_3_6),
	AX_ANIM_PTR(sArmaldoAnims_3_7),
	AX_ANIM_PTR(sArmaldoAnims_3_8),
};

static const ax_anim *const sArmaldoAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_02299),
	AX_ANIM_PTR(gAxSharedAnim_00151),
	AX_ANIM_PTR(sArmaldoAnims_4_3),
	AX_ANIM_PTR(gAxSharedAnim_00191),
	AX_ANIM_PTR(gAxSharedAnim_00223),
	AX_ANIM_PTR(gAxSharedAnim_00253),
	AX_ANIM_PTR(sArmaldoAnims_4_7),
	AX_ANIM_PTR(gAxSharedAnim_00305),
};

static const ax_anim *const sArmaldoAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00321),
	AX_ANIM_PTR(gAxSharedAnim_00373),
	AX_ANIM_PTR(gAxSharedAnim_00366),
	AX_ANIM_PTR(gAxSharedAnim_00360),
	AX_ANIM_PTR(gAxSharedAnim_00354),
	AX_ANIM_PTR(gAxSharedAnim_00344),
	AX_ANIM_PTR(gAxSharedAnim_00336),
	AX_ANIM_PTR(gAxSharedAnim_00327),
};

static const ax_anim *const sArmaldoAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
};

static const ax_anim *const sArmaldoAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00397),
	AX_ANIM_PTR(gAxSharedAnim_00403),
	AX_ANIM_PTR(gAxSharedAnim_00414),
	AX_ANIM_PTR(gAxSharedAnim_00423),
	AX_ANIM_PTR(gAxSharedAnim_00435),
	AX_ANIM_PTR(gAxSharedAnim_00443),
	AX_ANIM_PTR(gAxSharedAnim_00453),
	AX_ANIM_PTR(gAxSharedAnim_00463),
};

static const ax_anim *const sArmaldoAnimTable8[] = {
	AX_ANIM_PTR(gAxSharedAnim_02571),
	AX_ANIM_PTR(gAxSharedAnim_02572),
	AX_ANIM_PTR(gAxSharedAnim_02573),
	AX_ANIM_PTR(gAxSharedAnim_02574),
	AX_ANIM_PTR(gAxSharedAnim_02575),
	AX_ANIM_PTR(gAxSharedAnim_02576),
	AX_ANIM_PTR(gAxSharedAnim_02578),
	AX_ANIM_PTR(gAxSharedAnim_02579),
};

static const ax_anim *const sArmaldoAnimTable9[] = {
	AX_ANIM_PTR(sArmaldoAnims_9_1),
	AX_ANIM_PTR(sArmaldoAnims_9_2),
	AX_ANIM_PTR(sArmaldoAnims_9_3),
	AX_ANIM_PTR(sArmaldoAnims_9_4),
	AX_ANIM_PTR(sArmaldoAnims_9_5),
	AX_ANIM_PTR(sArmaldoAnims_9_6),
	AX_ANIM_PTR(sArmaldoAnims_9_7),
	AX_ANIM_PTR(sArmaldoAnims_9_8),
};

static const ax_anim *const sArmaldoAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01189),
	AX_ANIM_PTR(gAxSharedAnim_01200),
	AX_ANIM_PTR(gAxSharedAnim_01217),
	AX_ANIM_PTR(gAxSharedAnim_01228),
	AX_ANIM_PTR(gAxSharedAnim_01241),
	AX_ANIM_PTR(gAxSharedAnim_01252),
	AX_ANIM_PTR(gAxSharedAnim_01266),
	AX_ANIM_PTR(gAxSharedAnim_01277),
};

static const ax_anim *const sArmaldoAnimTable11[] = {
	AX_ANIM_PTR(sArmaldoAnims_11_1),
	AX_ANIM_PTR(sArmaldoAnims_11_2),
	AX_ANIM_PTR(sArmaldoAnims_11_3),
	AX_ANIM_PTR(sArmaldoAnims_11_4),
	AX_ANIM_PTR(sArmaldoAnims_11_5),
	AX_ANIM_PTR(sArmaldoAnims_11_6),
	AX_ANIM_PTR(sArmaldoAnims_11_7),
	AX_ANIM_PTR(sArmaldoAnims_11_8),
};

static const ax_anim *const sArmaldoAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01499),
	AX_ANIM_PTR(gAxSharedAnim_01545),
	AX_ANIM_PTR(gAxSharedAnim_01533),
	AX_ANIM_PTR(gAxSharedAnim_01527),
	AX_ANIM_PTR(gAxSharedAnim_01526),
	AX_ANIM_PTR(gAxSharedAnim_01520),
	AX_ANIM_PTR(gAxSharedAnim_01507),
	AX_ANIM_PTR(gAxSharedAnim_01500),
};

static const ax_anim *const sArmaldoAnimTable13[] = {
	AX_ANIM_PTR(sArmaldoAnims_13_1),
	AX_ANIM_PTR(sArmaldoAnims_13_2),
	AX_ANIM_PTR(sArmaldoAnims_13_3),
	AX_ANIM_PTR(sArmaldoAnims_13_4),
	AX_ANIM_PTR(sArmaldoAnims_13_5),
	AX_ANIM_PTR(sArmaldoAnims_13_6),
	AX_ANIM_PTR(sArmaldoAnims_13_7),
	AX_ANIM_PTR(sArmaldoAnims_13_8),
};

static const ax_anim *const *const sAxAnimationsArmaldo[] = {
	sArmaldoAnimTable1,
	sArmaldoAnimTable2,
	sArmaldoAnimTable3,
	sArmaldoAnimTable4,
	sArmaldoAnimTable5,
	sArmaldoAnimTable6,
	sArmaldoAnimTable7,
	sArmaldoAnimTable8,
	sArmaldoAnimTable9,
	sArmaldoAnimTable10,
	sArmaldoAnimTable11,
	sArmaldoAnimTable12,
	sArmaldoAnimTable13,
};

static const ax_sprite *const sAxSpritesArmaldo[] = {
	sArmaldoSprites1,
	sArmaldoSprites2,
	sArmaldoSprites3,
	sArmaldoSprites4,
	sArmaldoSprites5,
	sArmaldoSprites6,
	sArmaldoSprites7,
	sArmaldoSprites8,
	sArmaldoSprites9,
	sArmaldoSprites10,
	sArmaldoSprites11,
	sArmaldoSprites12,
	sArmaldoSprites13,
	sArmaldoSprites14,
	sArmaldoSprites15,
	sArmaldoSprites16,
	sArmaldoSprites17,
	sArmaldoSprites18,
	sArmaldoSprites19,
	sArmaldoSprites20,
	sArmaldoSprites21,
	sArmaldoSprites22,
	sArmaldoSprites23,
	sArmaldoSprites24,
	sArmaldoSprites25,
	sArmaldoSprites26,
	sArmaldoSprites27,
	sArmaldoSprites28,
	sArmaldoSprites29,
	sArmaldoSprites30,
	sArmaldoSprites31,
	sArmaldoSprites32,
	sArmaldoSprites33,
	sArmaldoSprites34,
	sArmaldoSprites35,
	sArmaldoSprites36,
	sArmaldoSprites37,
	sArmaldoSprites38,
	sArmaldoSprites39,
	sArmaldoSprites40,
	sArmaldoSprites41,
	sArmaldoSprites42,
	sArmaldoSprites43,
	sArmaldoSprites44,
	sArmaldoSprites45,
	sArmaldoSprites46,
	sArmaldoSprites47,
	sArmaldoSprites48,
	sArmaldoSprites49,
	sArmaldoSprites50,
	sArmaldoSprites51,
	sArmaldoSprites52,
	sArmaldoSprites53,
	sArmaldoSprites54,
	sArmaldoSprites55,
	sArmaldoSprites56,
	sArmaldoSprites57,
	sArmaldoSprites58,
	sArmaldoSprites59,
	sArmaldoSprites60,
	sArmaldoSprites61,
	sArmaldoSprites62,
	sArmaldoSprites63,
	sArmaldoSprites64,
	sArmaldoSprites65,
	sArmaldoSprites66,
	sArmaldoSprites67,
	sArmaldoSprites68,
	sArmaldoSprites69,
	sArmaldoSprites70,
	sArmaldoSprites71,
};

static const axmain sAxMainArmaldo = {
	.poses = sAxPosesArmaldo,
	.animations = sAxAnimationsArmaldo,
	.animCount = ARRAY_COUNT(sAxAnimationsArmaldo),
	.spriteData = sAxSpritesArmaldo,
	.positions = sAxPositionsArmaldo,
};
