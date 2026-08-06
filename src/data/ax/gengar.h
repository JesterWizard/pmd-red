/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainGengar;
const SiroArchive gAxGengar = {"SIRO", &sAxMainGengar};

static const ax_pose sGengarPose1[] = {
	AX_POSE(0, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose2[] = {
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose3[] = {
	AX_POSE(2, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose4[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose5[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose6[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose7[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose8[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose9[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose10[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose11[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose12[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose13[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose14[] = {
	AX_POSE(13, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose15[] = {
	AX_POSE(14, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose16[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose17[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose18[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose19[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose20[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose21[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose22[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose23[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose24[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose50[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose51[] = {
	AX_POSE(16, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose52[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose54[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose55[] = {
	AX_POSE(19, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose56[] = {
	AX_POSE(20, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose58[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose59[] = {
	AX_POSE(22, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(23, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(24, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(24, 3, 2)),
	AX_POSE(25, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(28, 3, 2)),
	AX_POSE(26, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(21, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(29, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose60[] = {
	AX_POSE(23, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(24, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 2)),
	AX_POSE(25, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 2)),
	AX_POSE(26, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(21, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(13, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose62[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose63[] = {
	AX_POSE(28, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose64[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose66[] = {
	AX_POSE(30, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose67[] = {
	AX_POSE(31, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose68[] = {
	AX_POSE(32, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose70[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose71[] = {
	AX_POSE(28, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose72[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose74[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose75[] = {
	AX_POSE(22, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(229, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(23, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(24, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(24, 3, 2)),
	AX_POSE(25, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(28, 3, 2)),
	AX_POSE(26, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(29, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose76[] = {
	AX_POSE(23, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(24, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(25, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE(26, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose78[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose79[] = {
	AX_POSE(19, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose80[] = {
	AX_POSE(20, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose82[] = {
	AX_POSE(33, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose83[] = {
	AX_POSE(34, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose85[] = {
	AX_POSE(35, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose86[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose88[] = {
	AX_POSE(37, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose89[] = {
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose91[] = {
	AX_POSE(39, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose92[] = {
	AX_POSE(40, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose94[] = {
	AX_POSE(41, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose95[] = {
	AX_POSE(42, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose97[] = {
	AX_POSE(39, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose98[] = {
	AX_POSE(40, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose100[] = {
	AX_POSE(37, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose101[] = {
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose103[] = {
	AX_POSE(35, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose104[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose113[] = {
	AX_POSE(43, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose114[] = {
	AX_POSE(44, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose115[] = {
	AX_POSE(45, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose116[] = {
	AX_POSE(46, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose117[] = {
	AX_POSE(47, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose118[] = {
	AX_POSE(48, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose119[] = {
	AX_POSE(49, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose120[] = {
	AX_POSE(48, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose121[] = {
	AX_POSE(47, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose122[] = {
	AX_POSE(46, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose211[] = {
	AX_POSE(50, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose212[] = {
	AX_POSE(51, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGengarPose213[] = {
	AX_POSE(52, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const u8 sGengarAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_2_1.lz");
static const u8 sGengarAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_2_2.lz");
static const u8 sGengarAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_2_3.lz");
static const u8 sGengarAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_2_4.lz");
static const u8 sGengarAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_2_5.lz");
static const u8 sGengarAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_2_6.lz");
static const u8 sGengarAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_2_7.lz");
static const u8 sGengarAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_2_8.lz");
static const u8 sGengarAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_3_1.lz");
static const u8 sGengarAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_3_2.lz");
static const u8 sGengarAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_3_3.lz");
static const u8 sGengarAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_3_4.lz");
static const u8 sGengarAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_3_5.lz");
static const u8 sGengarAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_3_6.lz");
static const u8 sGengarAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_3_7.lz");
static const u8 sGengarAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_3_8.lz");
static const u8 sGengarAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_4_1.lz");
static const u8 sGengarAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_4_2.lz");
static const u8 sGengarAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_4_3.lz");
static const u8 sGengarAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_4_4.lz");
static const u8 sGengarAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_4_5.lz");
static const u8 sGengarAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_4_6.lz");
static const u8 sGengarAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_4_7.lz");
static const u8 sGengarAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_4_8.lz");
static const u8 sGengarAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_8_1.lz");
static const u8 sGengarAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_8_2.lz");
static const u8 sGengarAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_8_3.lz");
static const u8 sGengarAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_8_4.lz");
static const u8 sGengarAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_8_5.lz");
static const u8 sGengarAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_8_6.lz");
static const u8 sGengarAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_8_7.lz");
static const u8 sGengarAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_8_8.lz");
static const u8 sGengarAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_9_1.lz");
static const u8 sGengarAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_9_2.lz");
static const u8 sGengarAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_9_4.lz");
static const u8 sGengarAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_9_5.lz");
static const u8 sGengarAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_9_6.lz");
static const u8 sGengarAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_9_8.lz");
static const u8 sGengarAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_11_1.lz");
static const u8 sGengarAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_11_2.lz");
static const u8 sGengarAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_11_3.lz");
static const u8 sGengarAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_11_4.lz");
static const u8 sGengarAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_11_5.lz");
static const u8 sGengarAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_11_6.lz");
static const u8 sGengarAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_11_7.lz");
static const u8 sGengarAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_11_8.lz");
static const u8 sGengarAnims_14_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_14_1.lz");
static const u8 sGengarAnims_15_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_15_1.lz");
static const u8 sGengarAnims_16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gengar/sGengarAnims_16_1.lz");

static const u8 sGengarGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_1.4bpp.lz");
static const ax_sprite sGengarSprites1[] = {
	{sGengarGfx1, ARRAY_COUNT(sGengarGfx1)}, 
	{NULL, 0}
};
static const u8 sGengarGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_2.4bpp.lz");
static const ax_sprite sGengarSprites2[] = {
	{sGengarGfx2, ARRAY_COUNT(sGengarGfx2)}, 
	{NULL, 0}
};
static const u8 sGengarGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_3.4bpp.lz");
static const ax_sprite sGengarSprites3[] = {
	{sGengarGfx3, ARRAY_COUNT(sGengarGfx3)}, 
	{NULL, 0}
};
static const u8 sGengarGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_4.4bpp.lz");
static const ax_sprite sGengarSprites4[] = {
	{sGengarGfx4, ARRAY_COUNT(sGengarGfx4)}, 
	{NULL, 0}
};
static const u8 sGengarGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_5.4bpp.lz");
static const ax_sprite sGengarSprites5[] = {
	{sGengarGfx5, ARRAY_COUNT(sGengarGfx5)}, 
	{NULL, 0}
};
static const u8 sGengarGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_6.4bpp.lz");
static const ax_sprite sGengarSprites6[] = {
	{sGengarGfx6, ARRAY_COUNT(sGengarGfx6)}, 
	{NULL, 0}
};
static const u8 sGengarGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_7.4bpp.lz");
static const ax_sprite sGengarSprites7[] = {
	{sGengarGfx7, ARRAY_COUNT(sGengarGfx7)}, 
	{NULL, 0}
};
static const u8 sGengarGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_8.4bpp.lz");
static const ax_sprite sGengarSprites8[] = {
	{sGengarGfx8, ARRAY_COUNT(sGengarGfx8)}, 
	{NULL, 0}
};
static const u8 sGengarGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_9.4bpp.lz");
static const ax_sprite sGengarSprites9[] = {
	{sGengarGfx9, ARRAY_COUNT(sGengarGfx9)}, 
	{NULL, 0}
};
static const u8 sGengarGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_10.4bpp.lz");
static const ax_sprite sGengarSprites10[] = {
	{sGengarGfx10, ARRAY_COUNT(sGengarGfx10)}, 
	{NULL, 0}
};
static const u8 sGengarGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_11.4bpp.lz");
static const ax_sprite sGengarSprites11[] = {
	{sGengarGfx11, ARRAY_COUNT(sGengarGfx11)}, 
	{NULL, 0}
};
static const u8 sGengarGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_12.4bpp.lz");
static const ax_sprite sGengarSprites12[] = {
	{sGengarGfx12, ARRAY_COUNT(sGengarGfx12)}, 
	{NULL, 0}
};
static const u8 sGengarGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_13.4bpp.lz");
static const ax_sprite sGengarSprites13[] = {
	{sGengarGfx13, ARRAY_COUNT(sGengarGfx13)}, 
	{NULL, 0}
};
static const u8 sGengarGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_14.4bpp.lz");
static const ax_sprite sGengarSprites14[] = {
	{sGengarGfx14, ARRAY_COUNT(sGengarGfx14)}, 
	{NULL, 0}
};
static const u8 sGengarGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_15.4bpp.lz");
static const ax_sprite sGengarSprites15[] = {
	{sGengarGfx15, ARRAY_COUNT(sGengarGfx15)}, 
	{NULL, 0}
};
static const u8 sGengarGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_16.4bpp.lz");
static const u8 sGengarGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_16_1.4bpp.lz");
static const u8 sGengarGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_16_2.4bpp.lz");
static const ax_sprite sGengarSprites16[] = {
	{sGengarGfx16, ARRAY_COUNT(sGengarGfx16)}, 
	{NULL, 32}, 
	{sGengarGfx16_1, ARRAY_COUNT(sGengarGfx16_1)}, 
	{NULL, 32}, 
	{sGengarGfx16_2, ARRAY_COUNT(sGengarGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGengarGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_17.4bpp.lz");
static const u8 sGengarGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_17_1.4bpp.lz");
static const ax_sprite sGengarSprites17[] = {
	{sGengarGfx17, ARRAY_COUNT(sGengarGfx17)}, 
	{NULL, 32}, 
	{sGengarGfx17_1, ARRAY_COUNT(sGengarGfx17_1)}, 
	{NULL, 0}
};
static const u8 sGengarGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_18.4bpp.lz");
static const u8 sGengarGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_18_1.4bpp.lz");
static const u8 sGengarGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_18_2.4bpp.lz");
static const u8 sGengarGfx18_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_18_3.4bpp.lz");
static const ax_sprite sGengarSprites18[] = {
	{sGengarGfx18, ARRAY_COUNT(sGengarGfx18)}, 
	{NULL, 32}, 
	{sGengarGfx18_1, ARRAY_COUNT(sGengarGfx18_1)}, 
	{NULL, 32}, 
	{sGengarGfx18_2, ARRAY_COUNT(sGengarGfx18_2)}, 
	{NULL, 32}, 
	{sGengarGfx18_3, ARRAY_COUNT(sGengarGfx18_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGengarGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_19.4bpp.lz");
static const u8 sGengarGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_19_1.4bpp.lz");
static const u8 sGengarGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_19_2.4bpp.lz");
static const u8 sGengarGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_19_3.4bpp.lz");
static const ax_sprite sGengarSprites19[] = {
	{NULL, 32}, 
	{sGengarGfx19, ARRAY_COUNT(sGengarGfx19)}, 
	{NULL, 32}, 
	{sGengarGfx19_1, ARRAY_COUNT(sGengarGfx19_1)}, 
	{NULL, 32}, 
	{sGengarGfx19_2, ARRAY_COUNT(sGengarGfx19_2)}, 
	{NULL, 64}, 
	{sGengarGfx19_3, ARRAY_COUNT(sGengarGfx19_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGengarGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_20.4bpp.lz");
static const ax_sprite sGengarSprites20[] = {
	{NULL, 32}, 
	{sGengarGfx20, ARRAY_COUNT(sGengarGfx20)}, 
	{NULL, 0}
};
static const u8 sGengarGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_21.4bpp.lz");
static const ax_sprite sGengarSprites21[] = {
	{NULL, 32}, 
	{sGengarGfx21, ARRAY_COUNT(sGengarGfx21)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sGengarGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_22.4bpp.lz");
static const u8 sGengarGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_22_1.4bpp.lz");
static const u8 sGengarGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_22_2.4bpp.lz");
static const u8 sGengarGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_22_3.4bpp.lz");
static const ax_sprite sGengarSprites22[] = {
	{NULL, 32}, 
	{sGengarGfx22, ARRAY_COUNT(sGengarGfx22)}, 
	{NULL, 64}, 
	{sGengarGfx22_1, ARRAY_COUNT(sGengarGfx22_1)}, 
	{NULL, 32}, 
	{sGengarGfx22_2, ARRAY_COUNT(sGengarGfx22_2)}, 
	{NULL, 32}, 
	{sGengarGfx22_3, ARRAY_COUNT(sGengarGfx22_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGengarGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_23.4bpp.lz");
static const u8 sGengarGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_23_1.4bpp.lz");
static const ax_sprite sGengarSprites23[] = {
	{NULL, 32}, 
	{sGengarGfx23, ARRAY_COUNT(sGengarGfx23)}, 
	{NULL, 64}, 
	{sGengarGfx23_1, ARRAY_COUNT(sGengarGfx23_1)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sGengarGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_24.4bpp.lz");
static const ax_sprite sGengarSprites24[] = {
	{NULL, 64}, 
	{sGengarGfx24, ARRAY_COUNT(sGengarGfx24)}, 
	{NULL, 0}
};
static const u8 sGengarGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_25.4bpp.lz");
static const ax_sprite sGengarSprites25[] = {
	{NULL, 32}, 
	{sGengarGfx25, ARRAY_COUNT(sGengarGfx25)}, 
	{NULL, 0}
};
static const u8 sGengarGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_26.4bpp.lz");
static const ax_sprite sGengarSprites26[] = {
	{sGengarGfx26, ARRAY_COUNT(sGengarGfx26)}, 
	{NULL, 0}
};
static const u8 sGengarGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_27.4bpp.lz");
static const ax_sprite sGengarSprites27[] = {
	{sGengarGfx27, ARRAY_COUNT(sGengarGfx27)}, 
	{NULL, 0}
};
static const u8 sGengarGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_28.4bpp.lz");
static const u8 sGengarGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_28_1.4bpp.lz");
static const u8 sGengarGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_28_2.4bpp.lz");
static const u8 sGengarGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_28_3.4bpp.lz");
static const ax_sprite sGengarSprites28[] = {
	{NULL, 32}, 
	{sGengarGfx28, ARRAY_COUNT(sGengarGfx28)}, 
	{NULL, 64}, 
	{sGengarGfx28_1, ARRAY_COUNT(sGengarGfx28_1)}, 
	{NULL, 32}, 
	{sGengarGfx28_2, ARRAY_COUNT(sGengarGfx28_2)}, 
	{NULL, 32}, 
	{sGengarGfx28_3, ARRAY_COUNT(sGengarGfx28_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGengarGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_29.4bpp.lz");
static const u8 sGengarGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_29_1.4bpp.lz");
static const ax_sprite sGengarSprites29[] = {
	{sGengarGfx29, ARRAY_COUNT(sGengarGfx29)}, 
	{NULL, 32}, 
	{sGengarGfx29_1, ARRAY_COUNT(sGengarGfx29_1)}, 
	{NULL, 0}
};
static const u8 sGengarGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_30.4bpp.lz");
static const u8 sGengarGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_30_1.4bpp.lz");
static const u8 sGengarGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_30_2.4bpp.lz");
static const u8 sGengarGfx30_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_30_3.4bpp.lz");
static const ax_sprite sGengarSprites30[] = {
	{sGengarGfx30, ARRAY_COUNT(sGengarGfx30)}, 
	{NULL, 64}, 
	{sGengarGfx30_1, ARRAY_COUNT(sGengarGfx30_1)}, 
	{NULL, 32}, 
	{sGengarGfx30_2, ARRAY_COUNT(sGengarGfx30_2)}, 
	{NULL, 32}, 
	{sGengarGfx30_3, ARRAY_COUNT(sGengarGfx30_3)}, 
	{NULL, 0}
};
static const u8 sGengarGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_31.4bpp.lz");
static const u8 sGengarGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_31_1.4bpp.lz");
static const u8 sGengarGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_31_2.4bpp.lz");
static const ax_sprite sGengarSprites31[] = {
	{NULL, 32}, 
	{sGengarGfx31, ARRAY_COUNT(sGengarGfx31)}, 
	{NULL, 32}, 
	{sGengarGfx31_1, ARRAY_COUNT(sGengarGfx31_1)}, 
	{NULL, 32}, 
	{sGengarGfx31_2, ARRAY_COUNT(sGengarGfx31_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGengarGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_32.4bpp.lz");
static const u8 sGengarGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_32_1.4bpp.lz");
static const u8 sGengarGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_32_2.4bpp.lz");
static const ax_sprite sGengarSprites32[] = {
	{sGengarGfx32, ARRAY_COUNT(sGengarGfx32)}, 
	{NULL, 32}, 
	{sGengarGfx32_1, ARRAY_COUNT(sGengarGfx32_1)}, 
	{NULL, 32}, 
	{sGengarGfx32_2, ARRAY_COUNT(sGengarGfx32_2)}, 
	{NULL, 0}
};
static const u8 sGengarGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_33.4bpp.lz");
static const u8 sGengarGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_33_1.4bpp.lz");
static const u8 sGengarGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_33_2.4bpp.lz");
static const u8 sGengarGfx33_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_33_3.4bpp.lz");
static const ax_sprite sGengarSprites33[] = {
	{NULL, 32}, 
	{sGengarGfx33, ARRAY_COUNT(sGengarGfx33)}, 
	{NULL, 32}, 
	{sGengarGfx33_1, ARRAY_COUNT(sGengarGfx33_1)}, 
	{NULL, 32}, 
	{sGengarGfx33_2, ARRAY_COUNT(sGengarGfx33_2)}, 
	{NULL, 32}, 
	{sGengarGfx33_3, ARRAY_COUNT(sGengarGfx33_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGengarGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_34.4bpp.lz");
static const ax_sprite sGengarSprites34[] = {
	{sGengarGfx34, ARRAY_COUNT(sGengarGfx34)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGengarGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_35.4bpp.lz");
static const u8 sGengarGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_35_1.4bpp.lz");
static const ax_sprite sGengarSprites35[] = {
	{sGengarGfx35, ARRAY_COUNT(sGengarGfx35)}, 
	{NULL, 32}, 
	{sGengarGfx35_1, ARRAY_COUNT(sGengarGfx35_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGengarGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_36.4bpp.lz");
static const u8 sGengarGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_36_1.4bpp.lz");
static const u8 sGengarGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_36_2.4bpp.lz");
static const ax_sprite sGengarSprites36[] = {
	{sGengarGfx36, ARRAY_COUNT(sGengarGfx36)}, 
	{NULL, 32}, 
	{sGengarGfx36_1, ARRAY_COUNT(sGengarGfx36_1)}, 
	{NULL, 32}, 
	{sGengarGfx36_2, ARRAY_COUNT(sGengarGfx36_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGengarGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_37.4bpp.lz");
static const u8 sGengarGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_37_1.4bpp.lz");
static const u8 sGengarGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_37_2.4bpp.lz");
static const u8 sGengarGfx37_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_37_3.4bpp.lz");
static const ax_sprite sGengarSprites37[] = {
	{sGengarGfx37, ARRAY_COUNT(sGengarGfx37)}, 
	{NULL, 64}, 
	{sGengarGfx37_1, ARRAY_COUNT(sGengarGfx37_1)}, 
	{NULL, 32}, 
	{sGengarGfx37_2, ARRAY_COUNT(sGengarGfx37_2)}, 
	{NULL, 32}, 
	{sGengarGfx37_3, ARRAY_COUNT(sGengarGfx37_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGengarGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_38.4bpp.lz");
static const u8 sGengarGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_38_1.4bpp.lz");
static const ax_sprite sGengarSprites38[] = {
	{NULL, 32}, 
	{sGengarGfx38, ARRAY_COUNT(sGengarGfx38)}, 
	{NULL, 32}, 
	{sGengarGfx38_1, ARRAY_COUNT(sGengarGfx38_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sGengarGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_39.4bpp.lz");
static const u8 sGengarGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_39_1.4bpp.lz");
static const ax_sprite sGengarSprites39[] = {
	{NULL, 32}, 
	{sGengarGfx39, ARRAY_COUNT(sGengarGfx39)}, 
	{NULL, 32}, 
	{sGengarGfx39_1, ARRAY_COUNT(sGengarGfx39_1)}, 
	{NULL, 0}
};
static const u8 sGengarGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_40.4bpp.lz");
static const u8 sGengarGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_40_1.4bpp.lz");
static const u8 sGengarGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_40_2.4bpp.lz");
static const ax_sprite sGengarSprites40[] = {
	{sGengarGfx40, ARRAY_COUNT(sGengarGfx40)}, 
	{NULL, 32}, 
	{sGengarGfx40_1, ARRAY_COUNT(sGengarGfx40_1)}, 
	{NULL, 32}, 
	{sGengarGfx40_2, ARRAY_COUNT(sGengarGfx40_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGengarGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_41.4bpp.lz");
static const u8 sGengarGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_41_1.4bpp.lz");
static const u8 sGengarGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_41_2.4bpp.lz");
static const ax_sprite sGengarSprites41[] = {
	{sGengarGfx41, ARRAY_COUNT(sGengarGfx41)}, 
	{NULL, 32}, 
	{sGengarGfx41_1, ARRAY_COUNT(sGengarGfx41_1)}, 
	{NULL, 32}, 
	{sGengarGfx41_2, ARRAY_COUNT(sGengarGfx41_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGengarGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_42.4bpp.lz");
static const ax_sprite sGengarSprites42[] = {
	{sGengarGfx42, ARRAY_COUNT(sGengarGfx42)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sGengarGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_43.4bpp.lz");
static const ax_sprite sGengarSprites43[] = {
	{sGengarGfx43, ARRAY_COUNT(sGengarGfx43)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sGengarGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_44.4bpp.lz");
static const ax_sprite sGengarSprites44[] = {
	{sGengarGfx44, ARRAY_COUNT(sGengarGfx44)}, 
	{NULL, 0}
};
static const u8 sGengarGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_45.4bpp.lz");
static const ax_sprite sGengarSprites45[] = {
	{sGengarGfx45, ARRAY_COUNT(sGengarGfx45)}, 
	{NULL, 0}
};
static const u8 sGengarGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_46.4bpp.lz");
static const ax_sprite sGengarSprites46[] = {
	{sGengarGfx46, ARRAY_COUNT(sGengarGfx46)}, 
	{NULL, 0}
};
static const u8 sGengarGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_47.4bpp.lz");
static const ax_sprite sGengarSprites47[] = {
	{sGengarGfx47, ARRAY_COUNT(sGengarGfx47)}, 
	{NULL, 0}
};
static const u8 sGengarGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_48.4bpp.lz");
static const ax_sprite sGengarSprites48[] = {
	{sGengarGfx48, ARRAY_COUNT(sGengarGfx48)}, 
	{NULL, 0}
};
static const u8 sGengarGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_49.4bpp.lz");
static const ax_sprite sGengarSprites49[] = {
	{sGengarGfx49, ARRAY_COUNT(sGengarGfx49)}, 
	{NULL, 0}
};
static const u8 sGengarGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_50.4bpp.lz");
static const ax_sprite sGengarSprites50[] = {
	{sGengarGfx50, ARRAY_COUNT(sGengarGfx50)}, 
	{NULL, 0}
};
static const u8 sGengarGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_51.4bpp.lz");
static const ax_sprite sGengarSprites51[] = {
	{sGengarGfx51, ARRAY_COUNT(sGengarGfx51)}, 
	{NULL, 0}
};
static const u8 sGengarGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_52.4bpp.lz");
static const ax_sprite sGengarSprites52[] = {
	{sGengarGfx52, ARRAY_COUNT(sGengarGfx52)}, 
	{NULL, 0}
};
static const u8 sGengarGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gengar/sprite_53.4bpp.lz");
static const ax_sprite sGengarSprites53[] = {
	{sGengarGfx53, ARRAY_COUNT(sGengarGfx53)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesGengar[] = {
	sGengarPose1,
	sGengarPose2,
	sGengarPose3,
	sGengarPose4,
	sGengarPose5,
	sGengarPose6,
	sGengarPose7,
	sGengarPose8,
	sGengarPose9,
	sGengarPose10,
	sGengarPose11,
	sGengarPose12,
	sGengarPose13,
	sGengarPose14,
	sGengarPose15,
	sGengarPose16,
	sGengarPose17,
	sGengarPose18,
	sGengarPose19,
	sGengarPose20,
	sGengarPose21,
	sGengarPose22,
	sGengarPose23,
	sGengarPose24,
	sGengarPose1,
	sGengarPose2,
	sGengarPose3,
	sGengarPose4,
	sGengarPose5,
	sGengarPose6,
	sGengarPose7,
	sGengarPose8,
	sGengarPose9,
	sGengarPose10,
	sGengarPose11,
	sGengarPose12,
	sGengarPose13,
	sGengarPose14,
	sGengarPose15,
	sGengarPose16,
	sGengarPose17,
	sGengarPose18,
	sGengarPose19,
	sGengarPose20,
	sGengarPose21,
	sGengarPose22,
	sGengarPose23,
	sGengarPose24,
	sGengarPose1,
	sGengarPose50,
	sGengarPose51,
	sGengarPose52,
	sGengarPose4,
	sGengarPose54,
	sGengarPose55,
	sGengarPose56,
	sGengarPose7,
	sGengarPose58,
	sGengarPose59,
	sGengarPose60,
	sGengarPose10,
	sGengarPose62,
	sGengarPose63,
	sGengarPose64,
	sGengarPose13,
	sGengarPose66,
	sGengarPose67,
	sGengarPose68,
	sGengarPose16,
	sGengarPose70,
	sGengarPose71,
	sGengarPose72,
	sGengarPose19,
	sGengarPose74,
	sGengarPose75,
	sGengarPose76,
	sGengarPose22,
	sGengarPose78,
	sGengarPose79,
	sGengarPose80,
	sGengarPose1,
	sGengarPose82,
	sGengarPose83,
	sGengarPose4,
	sGengarPose85,
	sGengarPose86,
	sGengarPose7,
	sGengarPose88,
	sGengarPose89,
	sGengarPose10,
	sGengarPose91,
	sGengarPose92,
	sGengarPose13,
	sGengarPose94,
	sGengarPose95,
	sGengarPose16,
	sGengarPose97,
	sGengarPose98,
	sGengarPose19,
	sGengarPose100,
	sGengarPose101,
	sGengarPose22,
	sGengarPose103,
	sGengarPose104,
	sGengarPose1,
	sGengarPose22,
	sGengarPose19,
	sGengarPose16,
	sGengarPose13,
	sGengarPose10,
	sGengarPose7,
	sGengarPose4,
	sGengarPose113,
	sGengarPose114,
	sGengarPose115,
	sGengarPose116,
	sGengarPose117,
	sGengarPose118,
	sGengarPose119,
	sGengarPose120,
	sGengarPose121,
	sGengarPose122,
	sGengarPose1,
	sGengarPose22,
	sGengarPose19,
	sGengarPose16,
	sGengarPose13,
	sGengarPose10,
	sGengarPose7,
	sGengarPose4,
	sGengarPose1,
	sGengarPose82,
	sGengarPose83,
	sGengarPose4,
	sGengarPose85,
	sGengarPose86,
	sGengarPose7,
	sGengarPose88,
	sGengarPose89,
	sGengarPose10,
	sGengarPose91,
	sGengarPose92,
	sGengarPose13,
	sGengarPose94,
	sGengarPose95,
	sGengarPose16,
	sGengarPose97,
	sGengarPose98,
	sGengarPose19,
	sGengarPose100,
	sGengarPose101,
	sGengarPose22,
	sGengarPose103,
	sGengarPose104,
	sGengarPose1,
	sGengarPose22,
	sGengarPose19,
	sGengarPose16,
	sGengarPose13,
	sGengarPose10,
	sGengarPose7,
	sGengarPose4,
	sGengarPose83,
	sGengarPose86,
	sGengarPose89,
	sGengarPose92,
	sGengarPose95,
	sGengarPose98,
	sGengarPose101,
	sGengarPose104,
	sGengarPose1,
	sGengarPose82,
	sGengarPose83,
	sGengarPose4,
	sGengarPose85,
	sGengarPose86,
	sGengarPose7,
	sGengarPose88,
	sGengarPose89,
	sGengarPose10,
	sGengarPose91,
	sGengarPose92,
	sGengarPose13,
	sGengarPose94,
	sGengarPose95,
	sGengarPose16,
	sGengarPose97,
	sGengarPose98,
	sGengarPose19,
	sGengarPose100,
	sGengarPose101,
	sGengarPose22,
	sGengarPose103,
	sGengarPose104,
	sGengarPose83,
	sGengarPose104,
	sGengarPose101,
	sGengarPose98,
	sGengarPose95,
	sGengarPose92,
	sGengarPose89,
	sGengarPose86,
	sGengarPose1,
	sGengarPose22,
	sGengarPose19,
	sGengarPose16,
	sGengarPose13,
	sGengarPose10,
	sGengarPose7,
	sGengarPose4,
	sGengarPose211,
	sGengarPose212,
	sGengarPose213,
	sGengarPose7,
	sGengarPose8,
	sGengarPose9,
	sGengarPose1,
	sGengarPose82,
	sGengarPose83,
};

static const struct PositionSets sAxPositionsGengar[] = {
	[0] = { .set = { {-1, -6}, {-11, -5}, {9, -5}, {-1, -7} } },
	[1] = { .set = { {-2, -5}, {-12, -9}, {8, -5}, {-1, -6} } },
	[2] = { .set = { {0, -5}, {-10, -5}, {10, -9}, {-1, -7} } },
	[3] = { .set = { {3, -6}, {9, -8}, {-8, -2}, {-1, -8} } },
	[4] = { .set = { {4, -6}, {0, -10}, {-2, -4}, {-2, -7} } },
	[5] = { .set = { {2, -5}, {10, -8}, {-12, -5}, {-1, -7} } },
	[6] = { .set = { {6, -7}, {-1, -8}, {-3, -2}, {-2, -7} } },
	[7] = { .set = { {6, -7}, {-5, -7}, {3, -3}, {-2, -7} } },
	[8] = { .set = { {5, -5}, {4, -10}, {-7, -3}, {-1, -7} } },
	[9] = { .set = { {3, -10}, {-7, -8}, {5, -2}, {-2, -8} } },
	[10] = { .set = { {1, -11}, {-12, -6}, {9, -7}, {-2, -7} } },
	[11] = { .set = { {3, -9}, {-2, -8}, {0, -3}, {-3, -7} } },
	[12] = { .set = { {-1, -12}, {9, -4}, {-12, -5}, {-1, -9} } },
	[13] = { .set = { {0, -11}, {12, -6}, {-11, -10}, {-1, -7} } },
	[14] = { .set = { {-2, -12}, {7, -8}, {-14, -6}, {0, -8} } },
	[15] = { .set = { {-5, -10}, {5, -8}, {-7, -2}, {0, -8} } },
	[16] = { .set = { {-3, -11}, {10, -6}, {-11, -7}, {0, -7} } },
	[17] = { .set = { {-5, -9}, {0, -8}, {-2, -3}, {1, -7} } },
	[18] = { .set = { {-8, -7}, {-1, -8}, {1, -2}, {0, -7} } },
	[19] = { .set = { {-8, -7}, {3, -7}, {-5, -3}, {0, -7} } },
	[20] = { .set = { {-7, -5}, {-6, -10}, {5, -3}, {-1, -7} } },
	[21] = { .set = { {-5, -6}, {-11, -8}, {6, -2}, {-1, -8} } },
	[22] = { .set = { {-6, -6}, {-2, -10}, {0, -4}, {0, -7} } },
	[23] = { .set = { {-4, -5}, {-12, -8}, {10, -5}, {-1, -7} } },
	[24] = { .set = { {-1, -6}, {-11, -5}, {9, -5}, {-1, -7} } },
	[25] = { .set = { {-2, -5}, {-12, -9}, {8, -5}, {-1, -6} } },
	[26] = { .set = { {0, -5}, {-10, -5}, {10, -9}, {-1, -7} } },
	[27] = { .set = { {3, -6}, {9, -8}, {-8, -2}, {-1, -8} } },
	[28] = { .set = { {4, -6}, {0, -10}, {-2, -4}, {-2, -7} } },
	[29] = { .set = { {2, -5}, {10, -8}, {-12, -5}, {-1, -7} } },
	[30] = { .set = { {6, -7}, {-1, -8}, {-3, -2}, {-2, -7} } },
	[31] = { .set = { {6, -7}, {-5, -7}, {3, -3}, {-2, -7} } },
	[32] = { .set = { {5, -5}, {4, -10}, {-7, -3}, {-1, -7} } },
	[33] = { .set = { {3, -10}, {-7, -8}, {5, -2}, {-2, -8} } },
	[34] = { .set = { {1, -11}, {-12, -6}, {9, -7}, {-2, -7} } },
	[35] = { .set = { {3, -9}, {-2, -8}, {0, -3}, {-3, -7} } },
	[36] = { .set = { {-1, -12}, {9, -4}, {-12, -5}, {-1, -9} } },
	[37] = { .set = { {0, -11}, {12, -6}, {-11, -10}, {-1, -7} } },
	[38] = { .set = { {-2, -12}, {7, -8}, {-14, -6}, {0, -8} } },
	[39] = { .set = { {-5, -10}, {5, -8}, {-7, -2}, {0, -8} } },
	[40] = { .set = { {-3, -11}, {10, -6}, {-11, -7}, {0, -7} } },
	[41] = { .set = { {-5, -9}, {0, -8}, {-2, -3}, {1, -7} } },
	[42] = { .set = { {-8, -7}, {-1, -8}, {1, -2}, {0, -7} } },
	[43] = { .set = { {-8, -7}, {3, -7}, {-5, -3}, {0, -7} } },
	[44] = { .set = { {-7, -5}, {-6, -10}, {5, -3}, {-1, -7} } },
	[45] = { .set = { {-5, -6}, {-11, -8}, {6, -2}, {-1, -8} } },
	[46] = { .set = { {-6, -6}, {-2, -10}, {0, -4}, {0, -7} } },
	[47] = { .set = { {-4, -5}, {-12, -8}, {10, -5}, {-1, -7} } },
	[48] = { .set = { {-1, -6}, {-11, -5}, {9, -5}, {-1, -7} } },
	[49] = { .set = { {-8, -8}, {-7, -6}, {-5, -11}, {-2, -9} } },
	[50] = { .set = { {1, -3}, {-2, 8}, {7, -14}, {0, -10} } },
	[51] = { .set = { {1, -3}, {-2, 8}, {7, -14}, {0, -10} } },
	[52] = { .set = { {3, -6}, {9, -8}, {-8, -2}, {-1, -8} } },
	[53] = { .set = { {2, -12}, {-6, -11}, {7, -17}, {-2, -10} } },
	[54] = { .set = { {1, -2}, {18, 2}, {-10, -6}, {0, -7} } },
	[55] = { .set = { {1, -2}, {18, 2}, {-10, -6}, {0, -7} } },
	[56] = { .set = { {6, -7}, {-1, -8}, {-3, -2}, {-2, -7} } },
	[57] = { .set = { {-5, -12}, {-14, -5}, {4, -17}, {-5, -9} } },
	[58] = { .set = { {0, -5}, {21, -8}, {-10, -7}, {0, -8} } },
	[59] = { .set = { {0, -5}, {21, -8}, {-10, -7}, {0, -8} } },
	[60] = { .set = { {3, -10}, {-7, -8}, {5, -2}, {-2, -8} } },
	[61] = { .set = { {-6, -11}, {-10, -2}, {0, -13}, {-4, -7} } },
	[62] = { .set = { {6, -6}, {13, -23}, {-2, -2}, {0, -10} } },
	[63] = { .set = { {6, -6}, {13, -23}, {-2, -2}, {0, -10} } },
	[64] = { .set = { {-1, -12}, {9, -4}, {-12, -5}, {-1, -9} } },
	[65] = { .set = { {4, -9}, {2, 0}, {4, -18}, {-2, -8} } },
	[66] = { .set = { {-6, -11}, {2, -26}, {-8, -3}, {0, -9} } },
	[67] = { .set = { {-6, -11}, {2, -26}, {-8, -3}, {0, -9} } },
	[68] = { .set = { {-5, -10}, {5, -8}, {-7, -2}, {0, -8} } },
	[69] = { .set = { {4, -11}, {8, -2}, {-2, -13}, {2, -7} } },
	[70] = { .set = { {-8, -6}, {-15, -23}, {0, -2}, {-2, -10} } },
	[71] = { .set = { {-8, -6}, {-15, -23}, {0, -2}, {-2, -10} } },
	[72] = { .set = { {-8, -7}, {-1, -8}, {1, -2}, {0, -7} } },
	[73] = { .set = { {3, -12}, {12, -5}, {-6, -17}, {3, -9} } },
	[74] = { .set = { {-2, -5}, {-23, -8}, {8, -7}, {-2, -8} } },
	[75] = { .set = { {-2, -5}, {-23, -8}, {8, -7}, {-2, -8} } },
	[76] = { .set = { {-5, -6}, {-11, -8}, {6, -2}, {-1, -8} } },
	[77] = { .set = { {-4, -12}, {4, -11}, {-9, -17}, {0, -10} } },
	[78] = { .set = { {-1, -2}, {-18, 2}, {10, -6}, {0, -7} } },
	[79] = { .set = { {-1, -2}, {-18, 2}, {10, -6}, {0, -7} } },
	[80] = { .set = { {-1, -6}, {-11, -5}, {9, -5}, {-1, -7} } },
	[81] = { .set = { {-1, -3}, {-11, -7}, {10, -7}, {-1, -6} } },
	[82] = { .set = { {-1, -4}, {-12, -8}, {10, -8}, {-1, -8} } },
	[83] = { .set = { {3, -6}, {9, -8}, {-8, -2}, {-1, -8} } },
	[84] = { .set = { {4, -3}, {3, -9}, {-10, -4}, {-1, -7} } },
	[85] = { .set = { {3, -4}, {3, -11}, {-10, -5}, {-1, -8} } },
	[86] = { .set = { {6, -7}, {-1, -8}, {-3, -2}, {-2, -7} } },
	[87] = { .set = { {6, -4}, {-2, -10}, {-4, -3}, {0, -7} } },
	[88] = { .set = { {6, -5}, {-2, -10}, {-4, -5}, {1, -8} } },
	[89] = { .set = { {3, -10}, {-7, -8}, {5, -2}, {-2, -8} } },
	[90] = { .set = { {5, -7}, {-7, -10}, {1, -2}, {-1, -9} } },
	[91] = { .set = { {6, -7}, {-6, -10}, {1, -4}, {-1, -9} } },
	[92] = { .set = { {-1, -12}, {9, -4}, {-12, -5}, {-1, -9} } },
	[93] = { .set = { {-1, -14}, {11, -4}, {-13, -4}, {-1, -8} } },
	[94] = { .set = { {0, -13}, {11, -5}, {-12, -6}, {-1, -8} } },
	[95] = { .set = { {-5, -10}, {5, -8}, {-7, -2}, {0, -8} } },
	[96] = { .set = { {-7, -7}, {5, -10}, {-3, -2}, {-1, -9} } },
	[97] = { .set = { {-8, -7}, {4, -10}, {-3, -4}, {-1, -9} } },
	[98] = { .set = { {-8, -7}, {-1, -8}, {1, -2}, {0, -7} } },
	[99] = { .set = { {-8, -4}, {0, -10}, {2, -3}, {-2, -7} } },
	[100] = { .set = { {-8, -5}, {0, -10}, {2, -5}, {-3, -8} } },
	[101] = { .set = { {-5, -6}, {-11, -8}, {6, -2}, {-1, -8} } },
	[102] = { .set = { {-6, -3}, {-5, -9}, {8, -4}, {-1, -7} } },
	[103] = { .set = { {-5, -4}, {-5, -11}, {8, -5}, {-1, -8} } },
	[104] = { .set = { {-1, -6}, {-11, -5}, {9, -5}, {-1, -7} } },
	[105] = { .set = { {-5, -6}, {-11, -8}, {6, -2}, {-1, -8} } },
	[106] = { .set = { {-8, -7}, {-1, -8}, {1, -2}, {0, -7} } },
	[107] = { .set = { {-5, -10}, {5, -8}, {-7, -2}, {0, -8} } },
	[108] = { .set = { {-1, -12}, {9, -4}, {-12, -5}, {-1, -9} } },
	[109] = { .set = { {3, -10}, {-7, -8}, {5, -2}, {-2, -8} } },
	[110] = { .set = { {6, -7}, {-1, -8}, {-3, -2}, {-2, -7} } },
	[111] = { .set = { {3, -6}, {9, -8}, {-8, -2}, {-1, -8} } },
	[112] = { .set = { {-2, -5}, {-8, -6}, {8, -1}, {2, -7} } },
	[113] = { .set = { {-3, -3}, {-8, -5}, {7, 0}, {2, -5} } },
	[114] = { .set = { {-1, -7}, {-13, -14}, {12, -14}, {-1, -8} } },
	[115] = { .set = { {-1, -7}, {5, -17}, {-16, -11}, {-5, -9} } },
	[116] = { .set = { {1, -7}, {-9, -15}, {-11, -11}, {-7, -7} } },
	[117] = { .set = { {-3, -6}, {-15, -12}, {1, -9}, {-7, -3} } },
	[118] = { .set = { {-1, -9}, {12, -10}, {-13, -10}, {-1, -6} } },
	[119] = { .set = { {2, -6}, {14, -12}, {-2, -9}, {6, -3} } },
	[120] = { .set = { {-2, -7}, {8, -15}, {10, -11}, {6, -7} } },
	[121] = { .set = { {0, -7}, {-6, -17}, {15, -11}, {4, -9} } },
	[122] = { .set = { {-1, -6}, {-11, -5}, {9, -5}, {-1, -7} } },
	[123] = { .set = { {-5, -6}, {-11, -8}, {6, -2}, {-1, -8} } },
	[124] = { .set = { {-8, -7}, {-1, -8}, {1, -2}, {0, -7} } },
	[125] = { .set = { {-5, -10}, {5, -8}, {-7, -2}, {0, -8} } },
	[126] = { .set = { {-1, -12}, {9, -4}, {-12, -5}, {-1, -9} } },
	[127] = { .set = { {3, -10}, {-7, -8}, {5, -2}, {-2, -8} } },
	[128] = { .set = { {6, -7}, {-1, -8}, {-3, -2}, {-2, -7} } },
	[129] = { .set = { {3, -6}, {9, -8}, {-8, -2}, {-1, -8} } },
	[130] = { .set = { {-1, -6}, {-11, -5}, {9, -5}, {-1, -7} } },
	[131] = { .set = { {-1, -3}, {-11, -7}, {10, -7}, {-1, -6} } },
	[132] = { .set = { {-1, -4}, {-12, -8}, {10, -8}, {-1, -8} } },
	[133] = { .set = { {3, -6}, {9, -8}, {-8, -2}, {-1, -8} } },
	[134] = { .set = { {4, -3}, {3, -9}, {-10, -4}, {-1, -7} } },
	[135] = { .set = { {3, -4}, {3, -11}, {-10, -5}, {-1, -8} } },
	[136] = { .set = { {6, -7}, {-1, -8}, {-3, -2}, {-2, -7} } },
	[137] = { .set = { {6, -4}, {-2, -10}, {-4, -3}, {0, -7} } },
	[138] = { .set = { {6, -5}, {-2, -10}, {-4, -5}, {1, -8} } },
	[139] = { .set = { {3, -10}, {-7, -8}, {5, -2}, {-2, -8} } },
	[140] = { .set = { {5, -7}, {-7, -10}, {1, -2}, {-1, -9} } },
	[141] = { .set = { {6, -7}, {-6, -10}, {1, -4}, {-1, -9} } },
	[142] = { .set = { {-1, -12}, {9, -4}, {-12, -5}, {-1, -9} } },
	[143] = { .set = { {-1, -14}, {11, -4}, {-13, -4}, {-1, -8} } },
	[144] = { .set = { {0, -13}, {11, -5}, {-12, -6}, {-1, -8} } },
	[145] = { .set = { {-5, -10}, {5, -8}, {-7, -2}, {0, -8} } },
	[146] = { .set = { {-7, -7}, {5, -10}, {-3, -2}, {-1, -9} } },
	[147] = { .set = { {-8, -7}, {4, -10}, {-3, -4}, {-1, -9} } },
	[148] = { .set = { {-8, -7}, {-1, -8}, {1, -2}, {0, -7} } },
	[149] = { .set = { {-8, -4}, {0, -10}, {2, -3}, {-2, -7} } },
	[150] = { .set = { {-8, -5}, {0, -10}, {2, -5}, {-3, -8} } },
	[151] = { .set = { {-5, -6}, {-11, -8}, {6, -2}, {-1, -8} } },
	[152] = { .set = { {-6, -3}, {-5, -9}, {8, -4}, {-1, -7} } },
	[153] = { .set = { {-5, -4}, {-5, -11}, {8, -5}, {-1, -8} } },
	[154] = { .set = { {-1, -6}, {-11, -5}, {9, -5}, {-1, -7} } },
	[155] = { .set = { {-5, -6}, {-11, -8}, {6, -2}, {-1, -8} } },
	[156] = { .set = { {-8, -7}, {-1, -8}, {1, -2}, {0, -7} } },
	[157] = { .set = { {-5, -10}, {5, -8}, {-7, -2}, {0, -8} } },
	[158] = { .set = { {-1, -12}, {9, -4}, {-12, -5}, {-1, -9} } },
	[159] = { .set = { {3, -10}, {-7, -8}, {5, -2}, {-2, -8} } },
	[160] = { .set = { {6, -7}, {-1, -8}, {-3, -2}, {-2, -7} } },
	[161] = { .set = { {3, -6}, {9, -8}, {-8, -2}, {-1, -8} } },
	[162] = { .set = { {-1, -4}, {-12, -8}, {10, -8}, {-1, -8} } },
	[163] = { .set = { {3, -4}, {3, -11}, {-10, -5}, {-1, -8} } },
	[164] = { .set = { {6, -5}, {-2, -10}, {-4, -5}, {1, -8} } },
	[165] = { .set = { {6, -7}, {-6, -10}, {1, -4}, {-1, -9} } },
	[166] = { .set = { {0, -13}, {11, -5}, {-12, -6}, {-1, -8} } },
	[167] = { .set = { {-8, -7}, {4, -10}, {-3, -4}, {-1, -9} } },
	[168] = { .set = { {-8, -5}, {0, -10}, {2, -5}, {-3, -8} } },
	[169] = { .set = { {-5, -4}, {-5, -11}, {8, -5}, {-1, -8} } },
	[170] = { .set = { {-1, -6}, {-11, -5}, {9, -5}, {-1, -7} } },
	[171] = { .set = { {-1, -3}, {-11, -7}, {10, -7}, {-1, -6} } },
	[172] = { .set = { {-1, -4}, {-12, -8}, {10, -8}, {-1, -8} } },
	[173] = { .set = { {3, -6}, {9, -8}, {-8, -2}, {-1, -8} } },
	[174] = { .set = { {4, -3}, {3, -9}, {-10, -4}, {-1, -7} } },
	[175] = { .set = { {3, -4}, {3, -11}, {-10, -5}, {-1, -8} } },
	[176] = { .set = { {6, -7}, {-1, -8}, {-3, -2}, {-2, -7} } },
	[177] = { .set = { {6, -4}, {-2, -10}, {-4, -3}, {0, -7} } },
	[178] = { .set = { {6, -5}, {-2, -10}, {-4, -5}, {1, -8} } },
	[179] = { .set = { {3, -10}, {-7, -8}, {5, -2}, {-2, -8} } },
	[180] = { .set = { {5, -7}, {-7, -10}, {1, -2}, {-1, -9} } },
	[181] = { .set = { {6, -7}, {-6, -10}, {1, -4}, {-1, -9} } },
	[182] = { .set = { {-1, -12}, {9, -4}, {-12, -5}, {-1, -9} } },
	[183] = { .set = { {-1, -14}, {11, -4}, {-13, -4}, {-1, -8} } },
	[184] = { .set = { {0, -13}, {11, -5}, {-12, -6}, {-1, -8} } },
	[185] = { .set = { {-5, -10}, {5, -8}, {-7, -2}, {0, -8} } },
	[186] = { .set = { {-7, -7}, {5, -10}, {-3, -2}, {-1, -9} } },
	[187] = { .set = { {-8, -7}, {4, -10}, {-3, -4}, {-1, -9} } },
	[188] = { .set = { {-8, -7}, {-1, -8}, {1, -2}, {0, -7} } },
	[189] = { .set = { {-8, -4}, {0, -10}, {2, -3}, {-2, -7} } },
	[190] = { .set = { {-8, -5}, {0, -10}, {2, -5}, {-3, -8} } },
	[191] = { .set = { {-5, -6}, {-11, -8}, {6, -2}, {-1, -8} } },
	[192] = { .set = { {-6, -3}, {-5, -9}, {8, -4}, {-1, -7} } },
	[193] = { .set = { {-5, -4}, {-5, -11}, {8, -5}, {-1, -8} } },
	[194] = { .set = { {-1, -4}, {-12, -8}, {10, -8}, {-1, -8} } },
	[195] = { .set = { {-5, -4}, {-5, -11}, {8, -5}, {-1, -8} } },
	[196] = { .set = { {-8, -5}, {0, -10}, {2, -5}, {-3, -8} } },
	[197] = { .set = { {-8, -7}, {4, -10}, {-3, -4}, {-1, -9} } },
	[198] = { .set = { {0, -13}, {11, -5}, {-12, -6}, {-1, -8} } },
	[199] = { .set = { {6, -7}, {-6, -10}, {1, -4}, {-1, -9} } },
	[200] = { .set = { {6, -5}, {-2, -10}, {-4, -5}, {1, -8} } },
	[201] = { .set = { {3, -4}, {3, -11}, {-10, -5}, {-1, -8} } },
	[202] = { .set = { {-1, -6}, {-11, -5}, {9, -5}, {-1, -7} } },
	[203] = { .set = { {-5, -6}, {-11, -8}, {6, -2}, {-1, -8} } },
	[204] = { .set = { {-8, -7}, {-1, -8}, {1, -2}, {0, -7} } },
	[205] = { .set = { {-5, -10}, {5, -8}, {-7, -2}, {0, -8} } },
	[206] = { .set = { {-1, -12}, {9, -4}, {-12, -5}, {-1, -9} } },
	[207] = { .set = { {3, -10}, {-7, -8}, {5, -2}, {-2, -8} } },
	[208] = { .set = { {6, -7}, {-1, -8}, {-3, -2}, {-2, -7} } },
	[209] = { .set = { {3, -6}, {9, -8}, {-8, -2}, {-1, -8} } },
	[210] = { .set = { {-3, -8}, {-12, -12}, {5, -7}, {-1, -10} } },
	[211] = { .set = { {-1, -8}, {-11, -9}, {9, -9}, {-1, -10} } },
	[212] = { .set = { {1, -8}, {-7, -7}, {10, -12}, {0, -10} } },
	[213] = { .set = { {6, -7}, {-1, -8}, {-3, -2}, {-2, -7} } },
	[214] = { .set = { {6, -7}, {-5, -7}, {3, -3}, {-2, -7} } },
	[215] = { .set = { {5, -5}, {4, -10}, {-7, -3}, {-1, -7} } },
	[216] = { .set = { {-1, -6}, {-11, -5}, {9, -5}, {-1, -7} } },
	[217] = { .set = { {-1, -3}, {-11, -7}, {10, -7}, {-1, -6} } },
	[218] = { .set = { {-1, -4}, {-12, -8}, {10, -8}, {-1, -8} } },
};

static const ax_anim *const sGengarAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sGengarAnimTable2[] = {
	AX_ANIM_PTR(sGengarAnims_2_1),
	AX_ANIM_PTR(sGengarAnims_2_2),
	AX_ANIM_PTR(sGengarAnims_2_3),
	AX_ANIM_PTR(sGengarAnims_2_4),
	AX_ANIM_PTR(sGengarAnims_2_5),
	AX_ANIM_PTR(sGengarAnims_2_6),
	AX_ANIM_PTR(sGengarAnims_2_7),
	AX_ANIM_PTR(sGengarAnims_2_8),
};

static const ax_anim *const sGengarAnimTable3[] = {
	AX_ANIM_PTR(sGengarAnims_3_1),
	AX_ANIM_PTR(sGengarAnims_3_2),
	AX_ANIM_PTR(sGengarAnims_3_3),
	AX_ANIM_PTR(sGengarAnims_3_4),
	AX_ANIM_PTR(sGengarAnims_3_5),
	AX_ANIM_PTR(sGengarAnims_3_6),
	AX_ANIM_PTR(sGengarAnims_3_7),
	AX_ANIM_PTR(sGengarAnims_3_8),
};

static const ax_anim *const sGengarAnimTable4[] = {
	AX_ANIM_PTR(sGengarAnims_4_1),
	AX_ANIM_PTR(sGengarAnims_4_2),
	AX_ANIM_PTR(sGengarAnims_4_3),
	AX_ANIM_PTR(sGengarAnims_4_4),
	AX_ANIM_PTR(sGengarAnims_4_5),
	AX_ANIM_PTR(sGengarAnims_4_6),
	AX_ANIM_PTR(sGengarAnims_4_7),
	AX_ANIM_PTR(sGengarAnims_4_8),
};

static const ax_anim *const sGengarAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00177),
	AX_ANIM_PTR(gAxSharedAnim_00241),
	AX_ANIM_PTR(gAxSharedAnim_00230),
	AX_ANIM_PTR(gAxSharedAnim_00221),
	AX_ANIM_PTR(gAxSharedAnim_00214),
	AX_ANIM_PTR(gAxSharedAnim_00203),
	AX_ANIM_PTR(gAxSharedAnim_00195),
	AX_ANIM_PTR(gAxSharedAnim_00187),
};

static const ax_anim *const sGengarAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
};

static const ax_anim *const sGengarAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00266),
	AX_ANIM_PTR(gAxSharedAnim_00273),
	AX_ANIM_PTR(gAxSharedAnim_00280),
	AX_ANIM_PTR(gAxSharedAnim_00290),
	AX_ANIM_PTR(gAxSharedAnim_00302),
	AX_ANIM_PTR(gAxSharedAnim_00315),
	AX_ANIM_PTR(gAxSharedAnim_00322),
	AX_ANIM_PTR(gAxSharedAnim_00328),
};

static const ax_anim *const sGengarAnimTable8[] = {
	AX_ANIM_PTR(sGengarAnims_8_1),
	AX_ANIM_PTR(sGengarAnims_8_2),
	AX_ANIM_PTR(sGengarAnims_8_3),
	AX_ANIM_PTR(sGengarAnims_8_4),
	AX_ANIM_PTR(sGengarAnims_8_5),
	AX_ANIM_PTR(sGengarAnims_8_6),
	AX_ANIM_PTR(sGengarAnims_8_7),
	AX_ANIM_PTR(sGengarAnims_8_8),
};

static const ax_anim *const sGengarAnimTable9[] = {
	AX_ANIM_PTR(sGengarAnims_9_1),
	AX_ANIM_PTR(sGengarAnims_9_2),
	AX_ANIM_PTR(gAxSharedAnim_00673),
	AX_ANIM_PTR(sGengarAnims_9_4),
	AX_ANIM_PTR(sGengarAnims_9_5),
	AX_ANIM_PTR(sGengarAnims_9_6),
	AX_ANIM_PTR(gAxSharedAnim_00630),
	AX_ANIM_PTR(sGengarAnims_9_8),
};

static const ax_anim *const sGengarAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00705),
	AX_ANIM_PTR(gAxSharedAnim_00714),
	AX_ANIM_PTR(gAxSharedAnim_00725),
	AX_ANIM_PTR(gAxSharedAnim_00737),
	AX_ANIM_PTR(gAxSharedAnim_00750),
	AX_ANIM_PTR(gAxSharedAnim_00760),
	AX_ANIM_PTR(gAxSharedAnim_00772),
	AX_ANIM_PTR(gAxSharedAnim_00781),
};

static const ax_anim *const sGengarAnimTable11[] = {
	AX_ANIM_PTR(sGengarAnims_11_1),
	AX_ANIM_PTR(sGengarAnims_11_2),
	AX_ANIM_PTR(sGengarAnims_11_3),
	AX_ANIM_PTR(sGengarAnims_11_4),
	AX_ANIM_PTR(sGengarAnims_11_5),
	AX_ANIM_PTR(sGengarAnims_11_6),
	AX_ANIM_PTR(sGengarAnims_11_7),
	AX_ANIM_PTR(sGengarAnims_11_8),
};

static const ax_anim *const sGengarAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01147),
	AX_ANIM_PTR(gAxSharedAnim_01231),
	AX_ANIM_PTR(gAxSharedAnim_01208),
	AX_ANIM_PTR(gAxSharedAnim_01194),
	AX_ANIM_PTR(gAxSharedAnim_01193),
	AX_ANIM_PTR(gAxSharedAnim_01181),
	AX_ANIM_PTR(gAxSharedAnim_01161),
	AX_ANIM_PTR(gAxSharedAnim_01148),
};

static const ax_anim *const sGengarAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01242),
	AX_ANIM_PTR(gAxSharedAnim_01323),
	AX_ANIM_PTR(gAxSharedAnim_01314),
	AX_ANIM_PTR(gAxSharedAnim_01301),
	AX_ANIM_PTR(gAxSharedAnim_01286),
	AX_ANIM_PTR(gAxSharedAnim_01278),
	AX_ANIM_PTR(gAxSharedAnim_01267),
	AX_ANIM_PTR(gAxSharedAnim_01253),
};

static const ax_anim *const sGengarAnimTable14[] = {
	AX_ANIM_PTR(sGengarAnims_14_1),
	AX_ANIM_PTR(sGengarAnims_14_1),
	AX_ANIM_PTR(sGengarAnims_14_1),
	AX_ANIM_PTR(sGengarAnims_14_1),
	AX_ANIM_PTR(sGengarAnims_14_1),
	AX_ANIM_PTR(sGengarAnims_14_1),
	AX_ANIM_PTR(sGengarAnims_14_1),
	AX_ANIM_PTR(sGengarAnims_14_1),
};

static const ax_anim *const sGengarAnimTable15[] = {
	AX_ANIM_PTR(sGengarAnims_15_1),
	AX_ANIM_PTR(sGengarAnims_15_1),
	AX_ANIM_PTR(sGengarAnims_15_1),
	AX_ANIM_PTR(sGengarAnims_15_1),
	AX_ANIM_PTR(sGengarAnims_15_1),
	AX_ANIM_PTR(sGengarAnims_15_1),
	AX_ANIM_PTR(sGengarAnims_15_1),
	AX_ANIM_PTR(sGengarAnims_15_1),
};

static const ax_anim *const sGengarAnimTable16[] = {
	AX_ANIM_PTR(sGengarAnims_16_1),
	AX_ANIM_PTR(sGengarAnims_16_1),
	AX_ANIM_PTR(sGengarAnims_16_1),
	AX_ANIM_PTR(sGengarAnims_16_1),
	AX_ANIM_PTR(sGengarAnims_16_1),
	AX_ANIM_PTR(sGengarAnims_16_1),
	AX_ANIM_PTR(sGengarAnims_16_1),
	AX_ANIM_PTR(sGengarAnims_16_1),
};

static const ax_anim *const *const sAxAnimationsGengar[] = {
	sGengarAnimTable1,
	sGengarAnimTable2,
	sGengarAnimTable3,
	sGengarAnimTable4,
	sGengarAnimTable5,
	sGengarAnimTable6,
	sGengarAnimTable7,
	sGengarAnimTable8,
	sGengarAnimTable9,
	sGengarAnimTable10,
	sGengarAnimTable11,
	sGengarAnimTable12,
	sGengarAnimTable13,
	sGengarAnimTable14,
	sGengarAnimTable15,
	sGengarAnimTable16,
};

static const ax_sprite *const sAxSpritesGengar[] = {
	sGengarSprites1,
	sGengarSprites2,
	sGengarSprites3,
	sGengarSprites4,
	sGengarSprites5,
	sGengarSprites6,
	sGengarSprites7,
	sGengarSprites8,
	sGengarSprites9,
	sGengarSprites10,
	sGengarSprites11,
	sGengarSprites12,
	sGengarSprites13,
	sGengarSprites14,
	sGengarSprites15,
	sGengarSprites16,
	sGengarSprites17,
	sGengarSprites18,
	sGengarSprites19,
	sGengarSprites20,
	sGengarSprites21,
	sGengarSprites22,
	sGengarSprites23,
	sGengarSprites24,
	sGengarSprites25,
	sGengarSprites26,
	sGengarSprites27,
	sGengarSprites28,
	sGengarSprites29,
	sGengarSprites30,
	sGengarSprites31,
	sGengarSprites32,
	sGengarSprites33,
	sGengarSprites34,
	sGengarSprites35,
	sGengarSprites36,
	sGengarSprites37,
	sGengarSprites38,
	sGengarSprites39,
	sGengarSprites40,
	sGengarSprites41,
	sGengarSprites42,
	sGengarSprites43,
	sGengarSprites44,
	sGengarSprites45,
	sGengarSprites46,
	sGengarSprites47,
	sGengarSprites48,
	sGengarSprites49,
	sGengarSprites50,
	sGengarSprites51,
	sGengarSprites52,
	sGengarSprites53,
};

static const axmain sAxMainGengar = {
	.poses = sAxPosesGengar,
	.animations = sAxAnimationsGengar,
	.animCount = ARRAY_COUNT(sAxAnimationsGengar),
	.spriteData = sAxSpritesGengar,
	.positions = sAxPositionsGengar,
};
