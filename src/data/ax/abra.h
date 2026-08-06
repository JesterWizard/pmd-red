/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainAbra;
const SiroArchive gAxAbra = {"SIRO", &sAxMainAbra};

static const ax_pose sAbraPose1[] = {
	AX_POSE(0, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose2[] = {
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose3[] = {
	AX_POSE(2, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose4[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose5[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose6[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose7[] = {
	AX_POSE(6, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose8[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose9[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose10[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose11[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose12[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose13[] = {
	AX_POSE(12, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose14[] = {
	AX_POSE(13, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose15[] = {
	AX_POSE(14, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose16[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose17[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose18[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose19[] = {
	AX_POSE(6, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose20[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose21[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose22[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose23[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose24[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose25[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose26[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose27[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose28[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose29[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose30[] = {
	AX_POSE(5, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose31[] = {
	AX_POSE(6, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose32[] = {
	AX_POSE(7, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose33[] = {
	AX_POSE(8, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose34[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose35[] = {
	AX_POSE(10, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose36[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose37[] = {
	AX_POSE(12, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose38[] = {
	AX_POSE(13, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose39[] = {
	AX_POSE(14, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose40[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose41[] = {
	AX_POSE(10, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose42[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose43[] = {
	AX_POSE(6, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose44[] = {
	AX_POSE(7, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose45[] = {
	AX_POSE(8, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose46[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose47[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose48[] = {
	AX_POSE(5, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose50[] = {
	AX_POSE(15, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose51[] = {
	AX_POSE(16, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(17, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose52[] = {
	AX_POSE(17, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose54[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose55[] = {
	AX_POSE(19, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose56[] = {
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose58[] = {
	AX_POSE(21, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose59[] = {
	AX_POSE(22, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose60[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose62[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose63[] = {
	AX_POSE(25, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(26, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose64[] = {
	AX_POSE(26, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose66[] = {
	AX_POSE(27, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose67[] = {
	AX_POSE(28, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose68[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose70[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose71[] = {
	AX_POSE(25, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(26, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose72[] = {
	AX_POSE(26, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose74[] = {
	AX_POSE(21, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose75[] = {
	AX_POSE(22, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose76[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose78[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose79[] = {
	AX_POSE(19, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose80[] = {
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose81[] = {
	AX_POSE(30, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose82[] = {
	AX_POSE(31, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose83[] = {
	AX_POSE(32, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose84[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose85[] = {
	AX_POSE(34, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose86[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose87[] = {
	AX_POSE(32, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose88[] = {
	AX_POSE(31, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose91[] = {
	AX_POSE(35, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose93[] = {
	AX_POSE(31, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose94[] = {
	AX_POSE(36, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose96[] = {
	AX_POSE(32, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose97[] = {
	AX_POSE(37, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose99[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose100[] = {
	AX_POSE(38, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose103[] = {
	AX_POSE(39, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose105[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose106[] = {
	AX_POSE(38, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose108[] = {
	AX_POSE(32, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose109[] = {
	AX_POSE(37, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose111[] = {
	AX_POSE(31, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose112[] = {
	AX_POSE(36, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose113[] = {
	AX_POSE(40, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose114[] = {
	AX_POSE(41, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose115[] = {
	AX_POSE(42, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose116[] = {
	AX_POSE(43, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose117[] = {
	AX_POSE(44, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose118[] = {
	AX_POSE(45, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose119[] = {
	AX_POSE(46, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose120[] = {
	AX_POSE(45, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose121[] = {
	AX_POSE(44, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose122[] = {
	AX_POSE(43, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose124[] = {
	AX_POSE(30, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose126[] = {
	AX_POSE(31, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose138[] = {
	AX_POSE(31, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose142[] = {
	AX_POSE(38, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose143[] = {
	AX_POSE(39, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose144[] = {
	AX_POSE(38, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose165[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAbraPose171[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const u8 sAbraAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_1_1.lz");
static const u8 sAbraAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_1_2.lz");
static const u8 sAbraAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_1_3.lz");
static const u8 sAbraAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_1_4.lz");
static const u8 sAbraAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_1_5.lz");
static const u8 sAbraAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_1_6.lz");
static const u8 sAbraAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_1_7.lz");
static const u8 sAbraAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_1_8.lz");
static const u8 sAbraAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_2_1.lz");
static const u8 sAbraAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_2_2.lz");
static const u8 sAbraAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_2_3.lz");
static const u8 sAbraAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_2_4.lz");
static const u8 sAbraAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_2_5.lz");
static const u8 sAbraAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_2_6.lz");
static const u8 sAbraAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_2_7.lz");
static const u8 sAbraAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_2_8.lz");
static const u8 sAbraAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_3_1.lz");
static const u8 sAbraAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_3_2.lz");
static const u8 sAbraAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_3_3.lz");
static const u8 sAbraAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_3_4.lz");
static const u8 sAbraAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_3_5.lz");
static const u8 sAbraAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_3_6.lz");
static const u8 sAbraAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_3_7.lz");
static const u8 sAbraAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_3_8.lz");
static const u8 sAbraAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_5_1.lz");
static const u8 sAbraAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_5_2.lz");
static const u8 sAbraAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_5_3.lz");
static const u8 sAbraAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_5_4.lz");
static const u8 sAbraAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_5_5.lz");
static const u8 sAbraAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_5_6.lz");
static const u8 sAbraAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_5_7.lz");
static const u8 sAbraAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_5_8.lz");
static const u8 sAbraAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_8_1.lz");
static const u8 sAbraAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_8_2.lz");
static const u8 sAbraAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_8_3.lz");
static const u8 sAbraAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_8_4.lz");
static const u8 sAbraAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_8_5.lz");
static const u8 sAbraAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_8_6.lz");
static const u8 sAbraAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_8_7.lz");
static const u8 sAbraAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_8_8.lz");
static const u8 sAbraAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_9_1.lz");
static const u8 sAbraAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_9_2.lz");
static const u8 sAbraAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_9_3.lz");
static const u8 sAbraAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_9_4.lz");
static const u8 sAbraAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_9_5.lz");
static const u8 sAbraAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_9_6.lz");
static const u8 sAbraAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_9_7.lz");
static const u8 sAbraAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_9_8.lz");
static const u8 sAbraAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_11_1.lz");
static const u8 sAbraAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_11_2.lz");
static const u8 sAbraAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_11_3.lz");
static const u8 sAbraAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_11_4.lz");
static const u8 sAbraAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_11_5.lz");
static const u8 sAbraAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_11_6.lz");
static const u8 sAbraAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_11_7.lz");
static const u8 sAbraAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/abra/sAbraAnims_11_8.lz");

static const u8 sAbraGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_1.4bpp.lz");
static const ax_sprite sAbraSprites1[] = {
	{sAbraGfx1, ARRAY_COUNT(sAbraGfx1)}, 
	{NULL, 0}
};
static const u8 sAbraGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_2.4bpp.lz");
static const ax_sprite sAbraSprites2[] = {
	{sAbraGfx2, ARRAY_COUNT(sAbraGfx2)}, 
	{NULL, 0}
};
static const u8 sAbraGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_3.4bpp.lz");
static const ax_sprite sAbraSprites3[] = {
	{sAbraGfx3, ARRAY_COUNT(sAbraGfx3)}, 
	{NULL, 0}
};
static const u8 sAbraGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_4.4bpp.lz");
static const ax_sprite sAbraSprites4[] = {
	{sAbraGfx4, ARRAY_COUNT(sAbraGfx4)}, 
	{NULL, 0}
};
static const u8 sAbraGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_5.4bpp.lz");
static const ax_sprite sAbraSprites5[] = {
	{sAbraGfx5, ARRAY_COUNT(sAbraGfx5)}, 
	{NULL, 0}
};
static const u8 sAbraGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_6.4bpp.lz");
static const ax_sprite sAbraSprites6[] = {
	{sAbraGfx6, ARRAY_COUNT(sAbraGfx6)}, 
	{NULL, 0}
};
static const u8 sAbraGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_7.4bpp.lz");
static const ax_sprite sAbraSprites7[] = {
	{sAbraGfx7, ARRAY_COUNT(sAbraGfx7)}, 
	{NULL, 0}
};
static const u8 sAbraGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_8.4bpp.lz");
static const ax_sprite sAbraSprites8[] = {
	{sAbraGfx8, ARRAY_COUNT(sAbraGfx8)}, 
	{NULL, 0}
};
static const u8 sAbraGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_9.4bpp.lz");
static const ax_sprite sAbraSprites9[] = {
	{sAbraGfx9, ARRAY_COUNT(sAbraGfx9)}, 
	{NULL, 0}
};
static const u8 sAbraGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_10.4bpp.lz");
static const ax_sprite sAbraSprites10[] = {
	{sAbraGfx10, ARRAY_COUNT(sAbraGfx10)}, 
	{NULL, 0}
};
static const u8 sAbraGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_11.4bpp.lz");
static const ax_sprite sAbraSprites11[] = {
	{sAbraGfx11, ARRAY_COUNT(sAbraGfx11)}, 
	{NULL, 0}
};
static const u8 sAbraGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_12.4bpp.lz");
static const ax_sprite sAbraSprites12[] = {
	{sAbraGfx12, ARRAY_COUNT(sAbraGfx12)}, 
	{NULL, 0}
};
static const u8 sAbraGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_13.4bpp.lz");
static const ax_sprite sAbraSprites13[] = {
	{sAbraGfx13, ARRAY_COUNT(sAbraGfx13)}, 
	{NULL, 0}
};
static const u8 sAbraGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_14.4bpp.lz");
static const ax_sprite sAbraSprites14[] = {
	{sAbraGfx14, ARRAY_COUNT(sAbraGfx14)}, 
	{NULL, 0}
};
static const u8 sAbraGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_15.4bpp.lz");
static const ax_sprite sAbraSprites15[] = {
	{sAbraGfx15, ARRAY_COUNT(sAbraGfx15)}, 
	{NULL, 0}
};
static const u8 sAbraGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_16.4bpp.lz");
static const u8 sAbraGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_16_1.4bpp.lz");
static const u8 sAbraGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_16_2.4bpp.lz");
static const ax_sprite sAbraSprites16[] = {
	{sAbraGfx16, ARRAY_COUNT(sAbraGfx16)}, 
	{NULL, 32}, 
	{sAbraGfx16_1, ARRAY_COUNT(sAbraGfx16_1)}, 
	{NULL, 32}, 
	{sAbraGfx16_2, ARRAY_COUNT(sAbraGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAbraGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_17.4bpp.lz");
static const u8 sAbraGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_17_1.4bpp.lz");
static const u8 sAbraGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_17_2.4bpp.lz");
static const ax_sprite sAbraSprites17[] = {
	{sAbraGfx17, ARRAY_COUNT(sAbraGfx17)}, 
	{NULL, 32}, 
	{sAbraGfx17_1, ARRAY_COUNT(sAbraGfx17_1)}, 
	{NULL, 32}, 
	{sAbraGfx17_2, ARRAY_COUNT(sAbraGfx17_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sAbraGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_18.4bpp.lz");
static const u8 sAbraGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_18_1.4bpp.lz");
static const u8 sAbraGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_18_2.4bpp.lz");
static const ax_sprite sAbraSprites18[] = {
	{sAbraGfx18, ARRAY_COUNT(sAbraGfx18)}, 
	{NULL, 32}, 
	{sAbraGfx18_1, ARRAY_COUNT(sAbraGfx18_1)}, 
	{NULL, 32}, 
	{sAbraGfx18_2, ARRAY_COUNT(sAbraGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAbraGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_19.4bpp.lz");
static const u8 sAbraGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_19_1.4bpp.lz");
static const u8 sAbraGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_19_2.4bpp.lz");
static const ax_sprite sAbraSprites19[] = {
	{sAbraGfx19, ARRAY_COUNT(sAbraGfx19)}, 
	{NULL, 32}, 
	{sAbraGfx19_1, ARRAY_COUNT(sAbraGfx19_1)}, 
	{NULL, 32}, 
	{sAbraGfx19_2, ARRAY_COUNT(sAbraGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAbraGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_20.4bpp.lz");
static const u8 sAbraGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_20_1.4bpp.lz");
static const ax_sprite sAbraSprites20[] = {
	{NULL, 32}, 
	{sAbraGfx20, ARRAY_COUNT(sAbraGfx20)}, 
	{NULL, 32}, 
	{sAbraGfx20_1, ARRAY_COUNT(sAbraGfx20_1)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sAbraGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_21.4bpp.lz");
static const u8 sAbraGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_21_1.4bpp.lz");
static const u8 sAbraGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_21_2.4bpp.lz");
static const ax_sprite sAbraSprites21[] = {
	{sAbraGfx21, ARRAY_COUNT(sAbraGfx21)}, 
	{NULL, 64}, 
	{sAbraGfx21_1, ARRAY_COUNT(sAbraGfx21_1)}, 
	{NULL, 32}, 
	{sAbraGfx21_2, ARRAY_COUNT(sAbraGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAbraGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_22.4bpp.lz");
static const u8 sAbraGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_22_1.4bpp.lz");
static const u8 sAbraGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_22_2.4bpp.lz");
static const ax_sprite sAbraSprites22[] = {
	{sAbraGfx22, ARRAY_COUNT(sAbraGfx22)}, 
	{NULL, 32}, 
	{sAbraGfx22_1, ARRAY_COUNT(sAbraGfx22_1)}, 
	{NULL, 32}, 
	{sAbraGfx22_2, ARRAY_COUNT(sAbraGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAbraGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_23.4bpp.lz");
static const u8 sAbraGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_23_1.4bpp.lz");
static const ax_sprite sAbraSprites23[] = {
	{sAbraGfx23, ARRAY_COUNT(sAbraGfx23)}, 
	{NULL, 32}, 
	{sAbraGfx23_1, ARRAY_COUNT(sAbraGfx23_1)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sAbraGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_24.4bpp.lz");
static const u8 sAbraGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_24_1.4bpp.lz");
static const u8 sAbraGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_24_2.4bpp.lz");
static const ax_sprite sAbraSprites24[] = {
	{sAbraGfx24, ARRAY_COUNT(sAbraGfx24)}, 
	{NULL, 32}, 
	{sAbraGfx24_1, ARRAY_COUNT(sAbraGfx24_1)}, 
	{NULL, 32}, 
	{sAbraGfx24_2, ARRAY_COUNT(sAbraGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAbraGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_25.4bpp.lz");
static const u8 sAbraGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_25_1.4bpp.lz");
static const u8 sAbraGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_25_2.4bpp.lz");
static const ax_sprite sAbraSprites25[] = {
	{sAbraGfx25, ARRAY_COUNT(sAbraGfx25)}, 
	{NULL, 32}, 
	{sAbraGfx25_1, ARRAY_COUNT(sAbraGfx25_1)}, 
	{NULL, 32}, 
	{sAbraGfx25_2, ARRAY_COUNT(sAbraGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAbraGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_26.4bpp.lz");
static const u8 sAbraGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_26_1.4bpp.lz");
static const ax_sprite sAbraSprites26[] = {
	{sAbraGfx26, ARRAY_COUNT(sAbraGfx26)}, 
	{NULL, 32}, 
	{sAbraGfx26_1, ARRAY_COUNT(sAbraGfx26_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sAbraGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_27.4bpp.lz");
static const u8 sAbraGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_27_1.4bpp.lz");
static const u8 sAbraGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_27_2.4bpp.lz");
static const ax_sprite sAbraSprites27[] = {
	{sAbraGfx27, ARRAY_COUNT(sAbraGfx27)}, 
	{NULL, 32}, 
	{sAbraGfx27_1, ARRAY_COUNT(sAbraGfx27_1)}, 
	{NULL, 32}, 
	{sAbraGfx27_2, ARRAY_COUNT(sAbraGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAbraGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_28.4bpp.lz");
static const u8 sAbraGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_28_1.4bpp.lz");
static const u8 sAbraGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_28_2.4bpp.lz");
static const ax_sprite sAbraSprites28[] = {
	{sAbraGfx28, ARRAY_COUNT(sAbraGfx28)}, 
	{NULL, 32}, 
	{sAbraGfx28_1, ARRAY_COUNT(sAbraGfx28_1)}, 
	{NULL, 32}, 
	{sAbraGfx28_2, ARRAY_COUNT(sAbraGfx28_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAbraGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_29.4bpp.lz");
static const u8 sAbraGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_29_1.4bpp.lz");
static const u8 sAbraGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_29_2.4bpp.lz");
static const ax_sprite sAbraSprites29[] = {
	{sAbraGfx29, ARRAY_COUNT(sAbraGfx29)}, 
	{NULL, 32}, 
	{sAbraGfx29_1, ARRAY_COUNT(sAbraGfx29_1)}, 
	{NULL, 32}, 
	{sAbraGfx29_2, ARRAY_COUNT(sAbraGfx29_2)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sAbraGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_30.4bpp.lz");
static const u8 sAbraGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_30_1.4bpp.lz");
static const u8 sAbraGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_30_2.4bpp.lz");
static const ax_sprite sAbraSprites30[] = {
	{sAbraGfx30, ARRAY_COUNT(sAbraGfx30)}, 
	{NULL, 32}, 
	{sAbraGfx30_1, ARRAY_COUNT(sAbraGfx30_1)}, 
	{NULL, 32}, 
	{sAbraGfx30_2, ARRAY_COUNT(sAbraGfx30_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAbraGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_31.4bpp.lz");
static const u8 sAbraGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_31_1.4bpp.lz");
static const u8 sAbraGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_31_2.4bpp.lz");
static const ax_sprite sAbraSprites31[] = {
	{sAbraGfx31, ARRAY_COUNT(sAbraGfx31)}, 
	{NULL, 32}, 
	{sAbraGfx31_1, ARRAY_COUNT(sAbraGfx31_1)}, 
	{NULL, 32}, 
	{sAbraGfx31_2, ARRAY_COUNT(sAbraGfx31_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAbraGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_32.4bpp.lz");
static const u8 sAbraGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_32_1.4bpp.lz");
static const u8 sAbraGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_32_2.4bpp.lz");
static const ax_sprite sAbraSprites32[] = {
	{sAbraGfx32, ARRAY_COUNT(sAbraGfx32)}, 
	{NULL, 32}, 
	{sAbraGfx32_1, ARRAY_COUNT(sAbraGfx32_1)}, 
	{NULL, 32}, 
	{sAbraGfx32_2, ARRAY_COUNT(sAbraGfx32_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAbraGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_33.4bpp.lz");
static const ax_sprite sAbraSprites33[] = {
	{sAbraGfx33, ARRAY_COUNT(sAbraGfx33)}, 
	{NULL, 0}
};
static const u8 sAbraGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_34.4bpp.lz");
static const u8 sAbraGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_34_1.4bpp.lz");
static const u8 sAbraGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_34_2.4bpp.lz");
static const u8 sAbraGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_34_3.4bpp.lz");
static const ax_sprite sAbraSprites34[] = {
	{NULL, 32}, 
	{sAbraGfx34, ARRAY_COUNT(sAbraGfx34)}, 
	{NULL, 32}, 
	{sAbraGfx34_1, ARRAY_COUNT(sAbraGfx34_1)}, 
	{NULL, 64}, 
	{sAbraGfx34_2, ARRAY_COUNT(sAbraGfx34_2)}, 
	{NULL, 96}, 
	{sAbraGfx34_3, ARRAY_COUNT(sAbraGfx34_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAbraGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_35.4bpp.lz");
static const u8 sAbraGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_35_1.4bpp.lz");
static const u8 sAbraGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_35_2.4bpp.lz");
static const ax_sprite sAbraSprites35[] = {
	{sAbraGfx35, ARRAY_COUNT(sAbraGfx35)}, 
	{NULL, 32}, 
	{sAbraGfx35_1, ARRAY_COUNT(sAbraGfx35_1)}, 
	{NULL, 32}, 
	{sAbraGfx35_2, ARRAY_COUNT(sAbraGfx35_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAbraGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_36.4bpp.lz");
static const u8 sAbraGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_36_1.4bpp.lz");
static const u8 sAbraGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_36_2.4bpp.lz");
static const ax_sprite sAbraSprites36[] = {
	{NULL, 32}, 
	{sAbraGfx36, ARRAY_COUNT(sAbraGfx36)}, 
	{NULL, 64}, 
	{sAbraGfx36_1, ARRAY_COUNT(sAbraGfx36_1)}, 
	{NULL, 32}, 
	{sAbraGfx36_2, ARRAY_COUNT(sAbraGfx36_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAbraGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_37.4bpp.lz");
static const u8 sAbraGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_37_1.4bpp.lz");
static const u8 sAbraGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_37_2.4bpp.lz");
static const ax_sprite sAbraSprites37[] = {
	{sAbraGfx37, ARRAY_COUNT(sAbraGfx37)}, 
	{NULL, 32}, 
	{sAbraGfx37_1, ARRAY_COUNT(sAbraGfx37_1)}, 
	{NULL, 32}, 
	{sAbraGfx37_2, ARRAY_COUNT(sAbraGfx37_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAbraGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_38.4bpp.lz");
static const u8 sAbraGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_38_1.4bpp.lz");
static const u8 sAbraGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_38_2.4bpp.lz");
static const ax_sprite sAbraSprites38[] = {
	{sAbraGfx38, ARRAY_COUNT(sAbraGfx38)}, 
	{NULL, 32}, 
	{sAbraGfx38_1, ARRAY_COUNT(sAbraGfx38_1)}, 
	{NULL, 32}, 
	{sAbraGfx38_2, ARRAY_COUNT(sAbraGfx38_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAbraGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_39.4bpp.lz");
static const u8 sAbraGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_39_1.4bpp.lz");
static const u8 sAbraGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_39_2.4bpp.lz");
static const ax_sprite sAbraSprites39[] = {
	{sAbraGfx39, ARRAY_COUNT(sAbraGfx39)}, 
	{NULL, 32}, 
	{sAbraGfx39_1, ARRAY_COUNT(sAbraGfx39_1)}, 
	{NULL, 32}, 
	{sAbraGfx39_2, ARRAY_COUNT(sAbraGfx39_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAbraGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_40.4bpp.lz");
static const u8 sAbraGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_40_1.4bpp.lz");
static const u8 sAbraGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_40_2.4bpp.lz");
static const ax_sprite sAbraSprites40[] = {
	{sAbraGfx40, ARRAY_COUNT(sAbraGfx40)}, 
	{NULL, 32}, 
	{sAbraGfx40_1, ARRAY_COUNT(sAbraGfx40_1)}, 
	{NULL, 32}, 
	{sAbraGfx40_2, ARRAY_COUNT(sAbraGfx40_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAbraGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_41.4bpp.lz");
static const ax_sprite sAbraSprites41[] = {
	{sAbraGfx41, ARRAY_COUNT(sAbraGfx41)}, 
	{NULL, 0}
};
static const u8 sAbraGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_42.4bpp.lz");
static const ax_sprite sAbraSprites42[] = {
	{sAbraGfx42, ARRAY_COUNT(sAbraGfx42)}, 
	{NULL, 0}
};
static const u8 sAbraGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_43.4bpp.lz");
static const ax_sprite sAbraSprites43[] = {
	{sAbraGfx43, ARRAY_COUNT(sAbraGfx43)}, 
	{NULL, 0}
};
static const u8 sAbraGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_44.4bpp.lz");
static const ax_sprite sAbraSprites44[] = {
	{sAbraGfx44, ARRAY_COUNT(sAbraGfx44)}, 
	{NULL, 0}
};
static const u8 sAbraGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_45.4bpp.lz");
static const ax_sprite sAbraSprites45[] = {
	{sAbraGfx45, ARRAY_COUNT(sAbraGfx45)}, 
	{NULL, 0}
};
static const u8 sAbraGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_46.4bpp.lz");
static const ax_sprite sAbraSprites46[] = {
	{sAbraGfx46, ARRAY_COUNT(sAbraGfx46)}, 
	{NULL, 0}
};
static const u8 sAbraGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/abra/sprite_47.4bpp.lz");
static const ax_sprite sAbraSprites47[] = {
	{sAbraGfx47, ARRAY_COUNT(sAbraGfx47)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesAbra[] = {
	sAbraPose1,
	sAbraPose2,
	sAbraPose3,
	sAbraPose4,
	sAbraPose5,
	sAbraPose6,
	sAbraPose7,
	sAbraPose8,
	sAbraPose9,
	sAbraPose10,
	sAbraPose11,
	sAbraPose12,
	sAbraPose13,
	sAbraPose14,
	sAbraPose15,
	sAbraPose16,
	sAbraPose17,
	sAbraPose18,
	sAbraPose19,
	sAbraPose20,
	sAbraPose21,
	sAbraPose22,
	sAbraPose23,
	sAbraPose24,
	sAbraPose25,
	sAbraPose26,
	sAbraPose27,
	sAbraPose28,
	sAbraPose29,
	sAbraPose30,
	sAbraPose31,
	sAbraPose32,
	sAbraPose33,
	sAbraPose34,
	sAbraPose35,
	sAbraPose36,
	sAbraPose37,
	sAbraPose38,
	sAbraPose39,
	sAbraPose40,
	sAbraPose41,
	sAbraPose42,
	sAbraPose43,
	sAbraPose44,
	sAbraPose45,
	sAbraPose46,
	sAbraPose47,
	sAbraPose48,
	sAbraPose25,
	sAbraPose50,
	sAbraPose51,
	sAbraPose52,
	sAbraPose28,
	sAbraPose54,
	sAbraPose55,
	sAbraPose56,
	sAbraPose31,
	sAbraPose58,
	sAbraPose59,
	sAbraPose60,
	sAbraPose34,
	sAbraPose62,
	sAbraPose63,
	sAbraPose64,
	sAbraPose37,
	sAbraPose66,
	sAbraPose67,
	sAbraPose68,
	sAbraPose40,
	sAbraPose70,
	sAbraPose71,
	sAbraPose72,
	sAbraPose43,
	sAbraPose74,
	sAbraPose75,
	sAbraPose76,
	sAbraPose46,
	sAbraPose78,
	sAbraPose79,
	sAbraPose80,
	sAbraPose81,
	sAbraPose82,
	sAbraPose83,
	sAbraPose84,
	sAbraPose85,
	sAbraPose86,
	sAbraPose87,
	sAbraPose88,
	sAbraPose25,
	sAbraPose81,
	sAbraPose91,
	sAbraPose28,
	sAbraPose93,
	sAbraPose94,
	sAbraPose31,
	sAbraPose96,
	sAbraPose97,
	sAbraPose34,
	sAbraPose99,
	sAbraPose100,
	sAbraPose37,
	sAbraPose85,
	sAbraPose103,
	sAbraPose40,
	sAbraPose105,
	sAbraPose106,
	sAbraPose43,
	sAbraPose108,
	sAbraPose109,
	sAbraPose46,
	sAbraPose111,
	sAbraPose112,
	sAbraPose113,
	sAbraPose114,
	sAbraPose115,
	sAbraPose116,
	sAbraPose117,
	sAbraPose118,
	sAbraPose119,
	sAbraPose120,
	sAbraPose121,
	sAbraPose122,
	sAbraPose25,
	sAbraPose124,
	sAbraPose28,
	sAbraPose126,
	sAbraPose31,
	sAbraPose87,
	sAbraPose34,
	sAbraPose86,
	sAbraPose37,
	sAbraPose85,
	sAbraPose40,
	sAbraPose84,
	sAbraPose43,
	sAbraPose83,
	sAbraPose46,
	sAbraPose138,
	sAbraPose91,
	sAbraPose112,
	sAbraPose109,
	sAbraPose142,
	sAbraPose143,
	sAbraPose144,
	sAbraPose97,
	sAbraPose94,
	sAbraPose81,
	sAbraPose88,
	sAbraPose87,
	sAbraPose86,
	sAbraPose85,
	sAbraPose84,
	sAbraPose83,
	sAbraPose82,
	sAbraPose25,
	sAbraPose81,
	sAbraPose91,
	sAbraPose28,
	sAbraPose93,
	sAbraPose94,
	sAbraPose31,
	sAbraPose96,
	sAbraPose97,
	sAbraPose34,
	sAbraPose165,
	sAbraPose100,
	sAbraPose37,
	sAbraPose85,
	sAbraPose103,
	sAbraPose40,
	sAbraPose171,
	sAbraPose106,
	sAbraPose43,
	sAbraPose108,
	sAbraPose109,
	sAbraPose46,
	sAbraPose111,
	sAbraPose112,
	sAbraPose81,
	sAbraPose82,
	sAbraPose83,
	sAbraPose84,
	sAbraPose85,
	sAbraPose86,
	sAbraPose87,
	sAbraPose88,
	sAbraPose1,
	sAbraPose22,
	sAbraPose19,
	sAbraPose16,
	sAbraPose13,
	sAbraPose10,
	sAbraPose7,
	sAbraPose4,
};

static const struct PositionSets sAxPositionsAbra[] = {
	[0] = { .set = { {0, -7}, {-8, -4}, {7, -4}, {0, -8} } },
	[1] = { .set = { {-1, -7}, {-8, -6}, {6, -2}, {0, -8} } },
	[2] = { .set = { {0, -7}, {-7, -2}, {7, -6}, {-1, -8} } },
	[3] = { .set = { {0, -7}, {7, -6}, {-3, -2}, {-1, -8} } },
	[4] = { .set = { {2, -8}, {5, -6}, {0, -1}, {-1, -8} } },
	[5] = { .set = { {0, -7}, {7, -3}, {-5, -2}, {-1, -8} } },
	[6] = { .set = { {3, -7}, {5, -8}, {3, -2}, {-1, -8} } },
	[7] = { .set = { {4, -7}, {3, -7}, {5, -2}, {0, -8} } },
	[8] = { .set = { {2, -7}, {7, -7}, {1, -2}, {-1, -8} } },
	[9] = { .set = { {1, -10}, {-5, -10}, {7, -6}, {-1, -8} } },
	[10] = { .set = { {0, -11}, {-5, -8}, {8, -8}, {-1, -9} } },
	[11] = { .set = { {2, -10}, {-2, -10}, {6, -6}, {-1, -8} } },
	[12] = { .set = { {0, -10}, {8, -7}, {-9, -7}, {0, -8} } },
	[13] = { .set = { {1, -10}, {8, -6}, {-7, -9}, {0, -8} } },
	[14] = { .set = { {-2, -10}, {6, -9}, {-9, -6}, {-1, -8} } },
	[15] = { .set = { {-2, -10}, {4, -10}, {-8, -6}, {0, -8} } },
	[16] = { .set = { {-1, -11}, {4, -8}, {-9, -8}, {0, -9} } },
	[17] = { .set = { {-3, -10}, {1, -10}, {-7, -6}, {0, -8} } },
	[18] = { .set = { {-4, -7}, {-6, -8}, {-4, -2}, {0, -8} } },
	[19] = { .set = { {-5, -7}, {-4, -7}, {-6, -2}, {-1, -8} } },
	[20] = { .set = { {-3, -7}, {-8, -7}, {-2, -2}, {0, -8} } },
	[21] = { .set = { {-1, -7}, {-8, -6}, {2, -2}, {0, -8} } },
	[22] = { .set = { {-3, -8}, {-6, -6}, {-1, -1}, {0, -8} } },
	[23] = { .set = { {-1, -7}, {-8, -3}, {4, -2}, {0, -8} } },
	[24] = { .set = { {0, -11}, {-8, -8}, {7, -8}, {0, -12} } },
	[25] = { .set = { {-1, -11}, {-8, -10}, {6, -6}, {0, -12} } },
	[26] = { .set = { {0, -11}, {-7, -6}, {7, -10}, {-1, -12} } },
	[27] = { .set = { {0, -11}, {7, -10}, {-3, -6}, {-1, -12} } },
	[28] = { .set = { {2, -12}, {5, -10}, {0, -5}, {-1, -12} } },
	[29] = { .set = { {0, -11}, {7, -7}, {-5, -6}, {-1, -12} } },
	[30] = { .set = { {3, -11}, {5, -12}, {3, -6}, {-1, -12} } },
	[31] = { .set = { {4, -11}, {3, -11}, {5, -6}, {0, -12} } },
	[32] = { .set = { {2, -11}, {7, -11}, {1, -6}, {-1, -12} } },
	[33] = { .set = { {1, -14}, {-5, -14}, {7, -10}, {-1, -12} } },
	[34] = { .set = { {0, -15}, {-5, -12}, {8, -12}, {-1, -13} } },
	[35] = { .set = { {2, -14}, {-2, -14}, {6, -10}, {-1, -12} } },
	[36] = { .set = { {0, -14}, {8, -11}, {-9, -11}, {0, -12} } },
	[37] = { .set = { {1, -14}, {8, -10}, {-7, -13}, {0, -12} } },
	[38] = { .set = { {-2, -14}, {6, -13}, {-9, -10}, {-1, -12} } },
	[39] = { .set = { {-2, -14}, {4, -14}, {-8, -10}, {0, -12} } },
	[40] = { .set = { {-1, -15}, {4, -12}, {-9, -12}, {0, -13} } },
	[41] = { .set = { {-3, -14}, {1, -14}, {-7, -10}, {0, -12} } },
	[42] = { .set = { {-4, -11}, {-6, -12}, {-4, -6}, {0, -12} } },
	[43] = { .set = { {-5, -11}, {-4, -11}, {-6, -6}, {-1, -12} } },
	[44] = { .set = { {-3, -11}, {-8, -11}, {-2, -6}, {0, -12} } },
	[45] = { .set = { {-1, -11}, {-8, -10}, {2, -6}, {0, -12} } },
	[46] = { .set = { {-3, -12}, {-6, -10}, {-1, -5}, {0, -12} } },
	[47] = { .set = { {-1, -11}, {-8, -7}, {4, -6}, {0, -12} } },
	[48] = { .set = { {0, -11}, {-8, -8}, {7, -8}, {0, -12} } },
	[49] = { .set = { {1, -11}, {-7, -13}, {1, -6}, {1, -12} } },
	[50] = { .set = { {-1, -10}, {-3, -3}, {7, -13}, {-1, -12} } },
	[51] = { .set = { {-1, -10}, {-3, -3}, {7, -13}, {-1, -12} } },
	[52] = { .set = { {0, -11}, {7, -10}, {-3, -6}, {-1, -12} } },
	[53] = { .set = { {-1, -12}, {0, -15}, {3, -9}, {-3, -10} } },
	[54] = { .set = { {0, -10}, {7, -8}, {-9, -13}, {-1, -12} } },
	[55] = { .set = { {0, -10}, {7, -8}, {-9, -13}, {-1, -12} } },
	[56] = { .set = { {3, -11}, {5, -12}, {3, -6}, {-1, -12} } },
	[57] = { .set = { {3, -12}, {-2, -15}, {8, -11}, {0, -11} } },
	[58] = { .set = { {5, -11}, {13, -10}, {-2, -5}, {3, -10} } },
	[59] = { .set = { {5, -11}, {13, -10}, {-2, -5}, {3, -10} } },
	[60] = { .set = { {1, -14}, {-5, -14}, {7, -10}, {-1, -12} } },
	[61] = { .set = { {-1, -14}, {-8, -13}, {5, -14}, {-2, -11} } },
	[62] = { .set = { {2, -14}, {2, -17}, {6, -9}, {0, -13} } },
	[63] = { .set = { {2, -14}, {2, -17}, {6, -9}, {0, -13} } },
	[64] = { .set = { {0, -14}, {8, -11}, {-9, -11}, {0, -12} } },
	[65] = { .set = { {0, -12}, {6, -6}, {-1, -14}, {0, -11} } },
	[66] = { .set = { {-1, -15}, {1, -19}, {-8, -10}, {0, -14} } },
	[67] = { .set = { {-1, -15}, {1, -19}, {-8, -10}, {0, -14} } },
	[68] = { .set = { {-2, -14}, {4, -14}, {-8, -10}, {0, -12} } },
	[69] = { .set = { {0, -14}, {7, -13}, {-6, -14}, {1, -11} } },
	[70] = { .set = { {-3, -14}, {-3, -17}, {-7, -9}, {-1, -13} } },
	[71] = { .set = { {-3, -14}, {-3, -17}, {-7, -9}, {-1, -13} } },
	[72] = { .set = { {-4, -11}, {-6, -12}, {-4, -6}, {0, -12} } },
	[73] = { .set = { {-4, -12}, {1, -15}, {-9, -11}, {-1, -11} } },
	[74] = { .set = { {-6, -11}, {-14, -10}, {1, -5}, {-4, -10} } },
	[75] = { .set = { {-6, -11}, {-14, -10}, {1, -5}, {-4, -10} } },
	[76] = { .set = { {-1, -11}, {-8, -10}, {2, -6}, {0, -12} } },
	[77] = { .set = { {0, -12}, {-1, -15}, {-4, -9}, {2, -10} } },
	[78] = { .set = { {-1, -10}, {-8, -8}, {8, -13}, {0, -12} } },
	[79] = { .set = { {-1, -10}, {-8, -8}, {8, -13}, {0, -12} } },
	[80] = { .set = { {0, -13}, {-10, -17}, {9, -17}, {0, -12} } },
	[81] = { .set = { {0, -15}, {-5, -22}, {8, -15}, {1, -11} } },
	[82] = { .set = { {-1, -15}, {4, -21}, {3, -11}, {1, -11} } },
	[83] = { .set = { {-4, -16}, {6, -21}, {-7, -12}, {0, -12} } },
	[84] = { .set = { {0, -17}, {9, -16}, {-10, -16}, {0, -11} } },
	[85] = { .set = { {3, -16}, {-7, -21}, {6, -12}, {-1, -12} } },
	[86] = { .set = { {0, -15}, {-5, -21}, {-4, -11}, {-2, -11} } },
	[87] = { .set = { {-1, -15}, {4, -22}, {-9, -15}, {-2, -11} } },
	[88] = { .set = { {0, -11}, {-8, -8}, {7, -8}, {0, -12} } },
	[89] = { .set = { {0, -13}, {-10, -17}, {9, -17}, {0, -12} } },
	[90] = { .set = { {0, -6}, {-5, -2}, {4, -2}, {0, -9} } },
	[91] = { .set = { {0, -11}, {7, -10}, {-3, -6}, {-1, -12} } },
	[92] = { .set = { {-2, -15}, {3, -22}, {-10, -15}, {-3, -11} } },
	[93] = { .set = { {1, -8}, {8, -5}, {1, -3}, {-1, -9} } },
	[94] = { .set = { {3, -11}, {5, -12}, {3, -6}, {-1, -12} } },
	[95] = { .set = { {1, -15}, {-4, -21}, {-3, -11}, {-1, -11} } },
	[96] = { .set = { {3, -10}, {7, -12}, {6, -8}, {-1, -10} } },
	[97] = { .set = { {1, -14}, {-5, -14}, {7, -10}, {-1, -12} } },
	[98] = { .set = { {0, -16}, {-10, -21}, {3, -12}, {-4, -12} } },
	[99] = { .set = { {2, -13}, {-2, -18}, {9, -15}, {-1, -13} } },
	[100] = { .set = { {0, -14}, {8, -11}, {-9, -11}, {0, -12} } },
	[101] = { .set = { {0, -17}, {9, -16}, {-10, -16}, {0, -11} } },
	[102] = { .set = { {0, -15}, {2, -20}, {-3, -20}, {0, -14} } },
	[103] = { .set = { {-2, -14}, {4, -14}, {-8, -10}, {0, -12} } },
	[104] = { .set = { {-1, -16}, {9, -21}, {-4, -12}, {3, -12} } },
	[105] = { .set = { {-3, -13}, {1, -18}, {-10, -15}, {0, -13} } },
	[106] = { .set = { {-4, -11}, {-6, -12}, {-4, -6}, {0, -12} } },
	[107] = { .set = { {-2, -15}, {3, -21}, {2, -11}, {0, -11} } },
	[108] = { .set = { {-4, -10}, {-8, -12}, {-7, -8}, {0, -10} } },
	[109] = { .set = { {-1, -11}, {-8, -10}, {2, -6}, {0, -12} } },
	[110] = { .set = { {1, -15}, {-4, -22}, {9, -15}, {2, -11} } },
	[111] = { .set = { {-2, -8}, {-9, -5}, {-2, -3}, {0, -9} } },
	[112] = { .set = { {-3, -6}, {-8, -3}, {6, 1}, {0, -5} } },
	[113] = { .set = { {-2, -7}, {-8, -4}, {6, 0}, {1, -6} } },
	[114] = { .set = { {0, -11}, {-6, -6}, {5, -6}, {0, -12} } },
	[115] = { .set = { {1, -13}, {8, -10}, {0, -5}, {-1, -12} } },
	[116] = { .set = { {0, -14}, {6, -10}, {1, -6}, {-3, -10} } },
	[117] = { .set = { {3, -15}, {0, -12}, {7, -9}, {-2, -10} } },
	[118] = { .set = { {0, -14}, {7, -12}, {-8, -12}, {0, -9} } },
	[119] = { .set = { {-4, -15}, {-1, -12}, {-8, -9}, {1, -10} } },
	[120] = { .set = { {-1, -14}, {-7, -10}, {-2, -6}, {2, -10} } },
	[121] = { .set = { {-2, -13}, {-9, -10}, {-1, -5}, {0, -12} } },
	[122] = { .set = { {0, -11}, {-8, -8}, {7, -8}, {0, -12} } },
	[123] = { .set = { {0, -14}, {-10, -18}, {9, -18}, {0, -13} } },
	[124] = { .set = { {0, -11}, {7, -10}, {-3, -6}, {-1, -12} } },
	[125] = { .set = { {0, -15}, {5, -22}, {-8, -15}, {-1, -11} } },
	[126] = { .set = { {3, -11}, {5, -12}, {3, -6}, {-1, -12} } },
	[127] = { .set = { {0, -15}, {-5, -21}, {-4, -11}, {-2, -11} } },
	[128] = { .set = { {1, -14}, {-5, -14}, {7, -10}, {-1, -12} } },
	[129] = { .set = { {3, -16}, {-7, -21}, {6, -12}, {-1, -12} } },
	[130] = { .set = { {0, -14}, {8, -11}, {-9, -11}, {0, -12} } },
	[131] = { .set = { {0, -17}, {9, -16}, {-10, -16}, {0, -11} } },
	[132] = { .set = { {-2, -14}, {4, -14}, {-8, -10}, {0, -12} } },
	[133] = { .set = { {-4, -16}, {6, -21}, {-7, -12}, {0, -12} } },
	[134] = { .set = { {-4, -11}, {-6, -12}, {-4, -6}, {0, -12} } },
	[135] = { .set = { {-1, -15}, {4, -21}, {3, -11}, {1, -11} } },
	[136] = { .set = { {-1, -11}, {-8, -10}, {2, -6}, {0, -12} } },
	[137] = { .set = { {-1, -15}, {-6, -22}, {7, -15}, {0, -11} } },
	[138] = { .set = { {0, -6}, {-5, -2}, {4, -2}, {0, -9} } },
	[139] = { .set = { {-2, -8}, {-9, -5}, {-2, -3}, {0, -9} } },
	[140] = { .set = { {-4, -10}, {-8, -12}, {-7, -8}, {0, -10} } },
	[141] = { .set = { {-3, -12}, {1, -17}, {-10, -14}, {0, -12} } },
	[142] = { .set = { {0, -13}, {2, -18}, {-3, -18}, {0, -12} } },
	[143] = { .set = { {2, -12}, {-2, -17}, {9, -14}, {-1, -12} } },
	[144] = { .set = { {3, -10}, {7, -12}, {6, -8}, {-1, -10} } },
	[145] = { .set = { {1, -8}, {8, -5}, {1, -3}, {-1, -9} } },
	[146] = { .set = { {0, -13}, {-10, -17}, {9, -17}, {0, -12} } },
	[147] = { .set = { {-1, -15}, {4, -22}, {-9, -15}, {-2, -11} } },
	[148] = { .set = { {0, -15}, {-5, -21}, {-4, -11}, {-2, -11} } },
	[149] = { .set = { {3, -16}, {-7, -21}, {6, -12}, {-1, -12} } },
	[150] = { .set = { {0, -17}, {9, -16}, {-10, -16}, {0, -11} } },
	[151] = { .set = { {-4, -16}, {6, -21}, {-7, -12}, {0, -12} } },
	[152] = { .set = { {-1, -15}, {4, -21}, {3, -11}, {1, -11} } },
	[153] = { .set = { {0, -15}, {-5, -22}, {8, -15}, {1, -11} } },
	[154] = { .set = { {0, -11}, {-8, -8}, {7, -8}, {0, -12} } },
	[155] = { .set = { {0, -13}, {-10, -17}, {9, -17}, {0, -12} } },
	[156] = { .set = { {0, -6}, {-5, -2}, {4, -2}, {0, -9} } },
	[157] = { .set = { {0, -11}, {7, -10}, {-3, -6}, {-1, -12} } },
	[158] = { .set = { {-2, -15}, {3, -22}, {-10, -15}, {-3, -11} } },
	[159] = { .set = { {1, -8}, {8, -5}, {1, -3}, {-1, -9} } },
	[160] = { .set = { {3, -11}, {5, -12}, {3, -6}, {-1, -12} } },
	[161] = { .set = { {1, -15}, {-4, -21}, {-3, -11}, {-1, -11} } },
	[162] = { .set = { {3, -10}, {7, -12}, {6, -8}, {-1, -10} } },
	[163] = { .set = { {1, -14}, {-5, -14}, {7, -10}, {-1, -12} } },
	[164] = { .set = { {1, -16}, {-9, -21}, {4, -12}, {-3, -12} } },
	[165] = { .set = { {2, -13}, {-2, -18}, {9, -15}, {-1, -13} } },
	[166] = { .set = { {0, -14}, {8, -11}, {-9, -11}, {0, -12} } },
	[167] = { .set = { {0, -17}, {9, -16}, {-10, -16}, {0, -11} } },
	[168] = { .set = { {0, -15}, {2, -20}, {-3, -20}, {0, -14} } },
	[169] = { .set = { {-2, -14}, {4, -14}, {-8, -10}, {0, -12} } },
	[170] = { .set = { {-2, -16}, {8, -21}, {-5, -12}, {2, -12} } },
	[171] = { .set = { {-3, -13}, {1, -18}, {-10, -15}, {0, -13} } },
	[172] = { .set = { {-4, -11}, {-6, -12}, {-4, -6}, {0, -12} } },
	[173] = { .set = { {-2, -15}, {3, -21}, {2, -11}, {0, -11} } },
	[174] = { .set = { {-4, -10}, {-8, -12}, {-7, -8}, {0, -10} } },
	[175] = { .set = { {-1, -11}, {-8, -10}, {2, -6}, {0, -12} } },
	[176] = { .set = { {1, -15}, {-4, -22}, {9, -15}, {2, -11} } },
	[177] = { .set = { {-2, -8}, {-9, -5}, {-2, -3}, {0, -9} } },
	[178] = { .set = { {0, -13}, {-10, -17}, {9, -17}, {0, -12} } },
	[179] = { .set = { {0, -15}, {-5, -22}, {8, -15}, {1, -11} } },
	[180] = { .set = { {-1, -15}, {4, -21}, {3, -11}, {1, -11} } },
	[181] = { .set = { {-4, -16}, {6, -21}, {-7, -12}, {0, -12} } },
	[182] = { .set = { {0, -17}, {9, -16}, {-10, -16}, {0, -11} } },
	[183] = { .set = { {3, -16}, {-7, -21}, {6, -12}, {-1, -12} } },
	[184] = { .set = { {0, -15}, {-5, -21}, {-4, -11}, {-2, -11} } },
	[185] = { .set = { {-1, -15}, {4, -22}, {-9, -15}, {-2, -11} } },
	[186] = { .set = { {0, -7}, {-8, -4}, {7, -4}, {0, -8} } },
	[187] = { .set = { {-1, -7}, {-8, -6}, {2, -2}, {0, -8} } },
	[188] = { .set = { {-4, -7}, {-6, -8}, {-4, -2}, {0, -8} } },
	[189] = { .set = { {-2, -10}, {4, -10}, {-8, -6}, {0, -8} } },
	[190] = { .set = { {0, -10}, {8, -7}, {-9, -7}, {0, -8} } },
	[191] = { .set = { {1, -10}, {-5, -10}, {7, -6}, {-1, -8} } },
	[192] = { .set = { {3, -7}, {5, -8}, {3, -2}, {-1, -8} } },
	[193] = { .set = { {0, -7}, {7, -6}, {-3, -2}, {-1, -8} } },
};

static const ax_anim *const sAbraAnimTable1[] = {
	AX_ANIM_PTR(sAbraAnims_1_1),
	AX_ANIM_PTR(sAbraAnims_1_2),
	AX_ANIM_PTR(sAbraAnims_1_3),
	AX_ANIM_PTR(sAbraAnims_1_4),
	AX_ANIM_PTR(sAbraAnims_1_5),
	AX_ANIM_PTR(sAbraAnims_1_6),
	AX_ANIM_PTR(sAbraAnims_1_7),
	AX_ANIM_PTR(sAbraAnims_1_8),
};

static const ax_anim *const sAbraAnimTable2[] = {
	AX_ANIM_PTR(sAbraAnims_2_1),
	AX_ANIM_PTR(sAbraAnims_2_2),
	AX_ANIM_PTR(sAbraAnims_2_3),
	AX_ANIM_PTR(sAbraAnims_2_4),
	AX_ANIM_PTR(sAbraAnims_2_5),
	AX_ANIM_PTR(sAbraAnims_2_6),
	AX_ANIM_PTR(sAbraAnims_2_7),
	AX_ANIM_PTR(sAbraAnims_2_8),
};

static const ax_anim *const sAbraAnimTable3[] = {
	AX_ANIM_PTR(sAbraAnims_3_1),
	AX_ANIM_PTR(sAbraAnims_3_2),
	AX_ANIM_PTR(sAbraAnims_3_3),
	AX_ANIM_PTR(sAbraAnims_3_4),
	AX_ANIM_PTR(sAbraAnims_3_5),
	AX_ANIM_PTR(sAbraAnims_3_6),
	AX_ANIM_PTR(sAbraAnims_3_7),
	AX_ANIM_PTR(sAbraAnims_3_8),
};

static const ax_anim *const sAbraAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_02149),
	AX_ANIM_PTR(gAxSharedAnim_02211),
	AX_ANIM_PTR(gAxSharedAnim_02197),
	AX_ANIM_PTR(gAxSharedAnim_02188),
	AX_ANIM_PTR(gAxSharedAnim_02186),
	AX_ANIM_PTR(gAxSharedAnim_02172),
	AX_ANIM_PTR(gAxSharedAnim_02161),
	AX_ANIM_PTR(gAxSharedAnim_02153),
};

static const ax_anim *const sAbraAnimTable5[] = {
	AX_ANIM_PTR(sAbraAnims_5_1),
	AX_ANIM_PTR(sAbraAnims_5_2),
	AX_ANIM_PTR(sAbraAnims_5_3),
	AX_ANIM_PTR(sAbraAnims_5_4),
	AX_ANIM_PTR(sAbraAnims_5_5),
	AX_ANIM_PTR(sAbraAnims_5_6),
	AX_ANIM_PTR(sAbraAnims_5_7),
	AX_ANIM_PTR(sAbraAnims_5_8),
};

static const ax_anim *const sAbraAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
};

static const ax_anim *const sAbraAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00267),
	AX_ANIM_PTR(gAxSharedAnim_00274),
	AX_ANIM_PTR(gAxSharedAnim_00281),
	AX_ANIM_PTR(gAxSharedAnim_00291),
	AX_ANIM_PTR(gAxSharedAnim_00303),
	AX_ANIM_PTR(gAxSharedAnim_00316),
	AX_ANIM_PTR(gAxSharedAnim_00325),
	AX_ANIM_PTR(gAxSharedAnim_00329),
};

static const ax_anim *const sAbraAnimTable8[] = {
	AX_ANIM_PTR(sAbraAnims_8_1),
	AX_ANIM_PTR(sAbraAnims_8_2),
	AX_ANIM_PTR(sAbraAnims_8_3),
	AX_ANIM_PTR(sAbraAnims_8_4),
	AX_ANIM_PTR(sAbraAnims_8_5),
	AX_ANIM_PTR(sAbraAnims_8_6),
	AX_ANIM_PTR(sAbraAnims_8_7),
	AX_ANIM_PTR(sAbraAnims_8_8),
};

static const ax_anim *const sAbraAnimTable9[] = {
	AX_ANIM_PTR(sAbraAnims_9_1),
	AX_ANIM_PTR(sAbraAnims_9_2),
	AX_ANIM_PTR(sAbraAnims_9_3),
	AX_ANIM_PTR(sAbraAnims_9_4),
	AX_ANIM_PTR(sAbraAnims_9_5),
	AX_ANIM_PTR(sAbraAnims_9_6),
	AX_ANIM_PTR(sAbraAnims_9_7),
	AX_ANIM_PTR(sAbraAnims_9_8),
};

static const ax_anim *const sAbraAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00540),
	AX_ANIM_PTR(gAxSharedAnim_00547),
	AX_ANIM_PTR(gAxSharedAnim_00555),
	AX_ANIM_PTR(gAxSharedAnim_00564),
	AX_ANIM_PTR(gAxSharedAnim_00574),
	AX_ANIM_PTR(gAxSharedAnim_00584),
	AX_ANIM_PTR(gAxSharedAnim_00593),
	AX_ANIM_PTR(gAxSharedAnim_00600),
};

static const ax_anim *const sAbraAnimTable11[] = {
	AX_ANIM_PTR(sAbraAnims_11_1),
	AX_ANIM_PTR(sAbraAnims_11_2),
	AX_ANIM_PTR(sAbraAnims_11_3),
	AX_ANIM_PTR(sAbraAnims_11_4),
	AX_ANIM_PTR(sAbraAnims_11_5),
	AX_ANIM_PTR(sAbraAnims_11_6),
	AX_ANIM_PTR(sAbraAnims_11_7),
	AX_ANIM_PTR(sAbraAnims_11_8),
};

static const ax_anim *const sAbraAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_00907),
	AX_ANIM_PTR(gAxSharedAnim_00997),
	AX_ANIM_PTR(gAxSharedAnim_00971),
	AX_ANIM_PTR(gAxSharedAnim_00960),
	AX_ANIM_PTR(gAxSharedAnim_00959),
	AX_ANIM_PTR(gAxSharedAnim_00945),
	AX_ANIM_PTR(gAxSharedAnim_00925),
	AX_ANIM_PTR(gAxSharedAnim_00908),
};

static const ax_anim *const sAbraAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01017),
	AX_ANIM_PTR(gAxSharedAnim_01123),
	AX_ANIM_PTR(gAxSharedAnim_01112),
	AX_ANIM_PTR(gAxSharedAnim_01093),
	AX_ANIM_PTR(gAxSharedAnim_01079),
	AX_ANIM_PTR(gAxSharedAnim_01063),
	AX_ANIM_PTR(gAxSharedAnim_01048),
	AX_ANIM_PTR(gAxSharedAnim_01028),
};

static const ax_anim *const *const sAxAnimationsAbra[] = {
	sAbraAnimTable1,
	sAbraAnimTable2,
	sAbraAnimTable3,
	sAbraAnimTable4,
	sAbraAnimTable5,
	sAbraAnimTable6,
	sAbraAnimTable7,
	sAbraAnimTable8,
	sAbraAnimTable9,
	sAbraAnimTable10,
	sAbraAnimTable11,
	sAbraAnimTable12,
	sAbraAnimTable13,
};

static const ax_sprite *const sAxSpritesAbra[] = {
	sAbraSprites1,
	sAbraSprites2,
	sAbraSprites3,
	sAbraSprites4,
	sAbraSprites5,
	sAbraSprites6,
	sAbraSprites7,
	sAbraSprites8,
	sAbraSprites9,
	sAbraSprites10,
	sAbraSprites11,
	sAbraSprites12,
	sAbraSprites13,
	sAbraSprites14,
	sAbraSprites15,
	sAbraSprites16,
	sAbraSprites17,
	sAbraSprites18,
	sAbraSprites19,
	sAbraSprites20,
	sAbraSprites21,
	sAbraSprites22,
	sAbraSprites23,
	sAbraSprites24,
	sAbraSprites25,
	sAbraSprites26,
	sAbraSprites27,
	sAbraSprites28,
	sAbraSprites29,
	sAbraSprites30,
	sAbraSprites31,
	sAbraSprites32,
	sAbraSprites33,
	sAbraSprites34,
	sAbraSprites35,
	sAbraSprites36,
	sAbraSprites37,
	sAbraSprites38,
	sAbraSprites39,
	sAbraSprites40,
	sAbraSprites41,
	sAbraSprites42,
	sAbraSprites43,
	sAbraSprites44,
	sAbraSprites45,
	sAbraSprites46,
	sAbraSprites47,
};

static const axmain sAxMainAbra = {
	.poses = sAxPosesAbra,
	.animations = sAxAnimationsAbra,
	.animCount = ARRAY_COUNT(sAxAnimationsAbra),
	.spriteData = sAxSpritesAbra,
	.positions = sAxPositionsAbra,
};
