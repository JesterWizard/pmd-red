/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainMachop;
const SiroArchive gAxMachop = {"SIRO", &sAxMainMachop};

static const ax_pose sMachopPose1[] = {
	AX_POSE(0, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose2[] = {
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose3[] = {
	AX_POSE(2, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose4[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose5[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose6[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose7[] = {
	AX_POSE(6, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose8[] = {
	AX_POSE(7, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose9[] = {
	AX_POSE(8, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose10[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose11[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose12[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose13[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose14[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose15[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose16[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose17[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose18[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose19[] = {
	AX_POSE(6, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose20[] = {
	AX_POSE(7, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose21[] = {
	AX_POSE(8, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose22[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose23[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose24[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose50[] = {
	AX_POSE(15, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose51[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose52[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose54[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose55[] = {
	AX_POSE(19, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(20, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose56[] = {
	AX_POSE(20, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose57[] = {
	AX_POSE(15, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose59[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose60[] = {
	AX_POSE(22, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(23, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose61[] = {
	AX_POSE(23, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose63[] = {
	AX_POSE(24, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose64[] = {
	AX_POSE(25, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(26, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose65[] = {
	AX_POSE(26, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose67[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose68[] = {
	AX_POSE(28, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(29, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose69[] = {
	AX_POSE(29, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose71[] = {
	AX_POSE(24, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose72[] = {
	AX_POSE(25, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(26, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose73[] = {
	AX_POSE(26, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose75[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose76[] = {
	AX_POSE(22, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(23, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose77[] = {
	AX_POSE(23, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose79[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose80[] = {
	AX_POSE(19, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(20, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose81[] = {
	AX_POSE(20, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose83[] = {
	AX_POSE(30, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose85[] = {
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose87[] = {
	AX_POSE(32, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose89[] = {
	AX_POSE(33, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose91[] = {
	AX_POSE(34, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose93[] = {
	AX_POSE(33, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose95[] = {
	AX_POSE(32, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose96[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose97[] = {
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose101[] = {
	AX_POSE(35, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(36, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose102[] = {
	AX_POSE(36, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose106[] = {
	AX_POSE(37, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(38, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose107[] = {
	AX_POSE(38, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose111[] = {
	AX_POSE(39, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(40, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose112[] = {
	AX_POSE(40, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose116[] = {
	AX_POSE(41, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(42, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose117[] = {
	AX_POSE(42, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose121[] = {
	AX_POSE(43, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(44, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose122[] = {
	AX_POSE(44, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose126[] = {
	AX_POSE(41, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(42, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose127[] = {
	AX_POSE(42, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose131[] = {
	AX_POSE(39, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(40, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose132[] = {
	AX_POSE(40, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose136[] = {
	AX_POSE(37, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(38, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose137[] = {
	AX_POSE(38, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose138[] = {
	AX_POSE(45, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose139[] = {
	AX_POSE(46, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose140[] = {
	AX_POSE(47, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose141[] = {
	AX_POSE(48, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose142[] = {
	AX_POSE(49, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose143[] = {
	AX_POSE(50, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose144[] = {
	AX_POSE(51, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose145[] = {
	AX_POSE(50, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose146[] = {
	AX_POSE(49, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose147[] = {
	AX_POSE(48, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose180[] = {
	AX_POSE(30, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose184[] = {
	AX_POSE(34, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose189[] = {
	AX_POSE(15, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose192[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose193[] = {
	AX_POSE(31, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose195[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose196[] = {
	AX_POSE(32, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose199[] = {
	AX_POSE(33, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose201[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose205[] = {
	AX_POSE(33, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose207[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose208[] = {
	AX_POSE(32, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose210[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose211[] = {
	AX_POSE(31, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose216[] = {
	AX_POSE(34, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose217[] = {
	AX_POSE(33, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose218[] = {
	AX_POSE(32, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose228[] = {
	AX_POSE(52, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose229[] = {
	AX_POSE(53, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose230[] = {
	AX_POSE(52, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose231[] = {
	AX_POSE(53, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose233[] = {
	AX_POSE(54, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose234[] = {
	AX_POSE(55, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose235[] = {
	AX_POSE(56, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose238[] = {
	AX_POSE(57, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose239[] = {
	AX_POSE(58, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose240[] = {
	AX_POSE(59, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose241[] = {
	AX_POSE(60, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose242[] = {
	AX_POSE(61, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose243[] = {
	AX_POSE(62, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose244[] = {
	AX_POSE(63, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose245[] = {
	AX_POSE(64, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose246[] = {
	AX_POSE(65, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose248[] = {
	AX_POSE(66, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose249[] = {
	AX_POSE(67, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose250[] = {
	AX_POSE(68, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose252[] = {
	AX_POSE(69, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose253[] = {
	AX_POSE(70, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose255[] = {
	AX_POSE(71, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose256[] = {
	AX_POSE(72, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose259[] = {
	AX_POSE(73, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose261[] = {
	AX_POSE(74, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose263[] = {
	AX_POSE(74, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose265[] = {
	AX_POSE(75, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose266[] = {
	AX_POSE(76, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose267[] = {
	AX_POSE(77, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose268[] = {
	AX_POSE(78, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose269[] = {
	AX_POSE(79, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose270[] = {
	AX_POSE(80, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose271[] = {
	AX_POSE(76, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose272[] = {
	AX_POSE(77, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose273[] = {
	AX_POSE(78, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose274[] = {
	AX_POSE(79, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose275[] = {
	AX_POSE(80, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMachopPose276[] = {
	AX_POSE(81, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const u8 sMachopAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_2_1.lz");
static const u8 sMachopAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_2_2.lz");
static const u8 sMachopAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_2_3.lz");
static const u8 sMachopAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_2_4.lz");
static const u8 sMachopAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_2_5.lz");
static const u8 sMachopAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_2_6.lz");
static const u8 sMachopAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_2_7.lz");
static const u8 sMachopAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_2_8.lz");
static const u8 sMachopAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_3_1.lz");
static const u8 sMachopAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_3_2.lz");
static const u8 sMachopAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_3_3.lz");
static const u8 sMachopAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_3_4.lz");
static const u8 sMachopAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_3_5.lz");
static const u8 sMachopAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_3_6.lz");
static const u8 sMachopAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_3_7.lz");
static const u8 sMachopAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_3_8.lz");
static const u8 sMachopAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_4_1.lz");
static const u8 sMachopAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_4_2.lz");
static const u8 sMachopAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_4_3.lz");
static const u8 sMachopAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_4_4.lz");
static const u8 sMachopAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_4_5.lz");
static const u8 sMachopAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_4_6.lz");
static const u8 sMachopAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_4_7.lz");
static const u8 sMachopAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_4_8.lz");
static const u8 sMachopAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_5_1.lz");
static const u8 sMachopAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_5_2.lz");
static const u8 sMachopAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_5_3.lz");
static const u8 sMachopAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_5_4.lz");
static const u8 sMachopAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_5_5.lz");
static const u8 sMachopAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_5_6.lz");
static const u8 sMachopAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_5_7.lz");
static const u8 sMachopAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_5_8.lz");
static const u8 sMachopAnims_6_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_6_1.lz");
static const u8 sMachopAnims_7_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_7_1.lz");
static const u8 sMachopAnims_7_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_7_2.lz");
static const u8 sMachopAnims_7_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_7_3.lz");
static const u8 sMachopAnims_7_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_7_4.lz");
static const u8 sMachopAnims_7_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_7_5.lz");
static const u8 sMachopAnims_7_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_7_6.lz");
static const u8 sMachopAnims_7_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_7_7.lz");
static const ax_anim sMachopAnims_7_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 146, .offset = {3, -3}, .shadow = {3, -3} },
	AX_ANIM_TERMINATOR
};
static const u8 sMachopAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_8_1.lz");
static const u8 sMachopAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_8_2.lz");
static const u8 sMachopAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_8_3.lz");
static const u8 sMachopAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_8_4.lz");
static const u8 sMachopAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_8_5.lz");
static const u8 sMachopAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_8_6.lz");
static const u8 sMachopAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_8_7.lz");
static const u8 sMachopAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_8_8.lz");
static const u8 sMachopAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_9_1.lz");
static const u8 sMachopAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_9_2.lz");
static const u8 sMachopAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_9_3.lz");
static const u8 sMachopAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_9_4.lz");
static const u8 sMachopAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_9_5.lz");
static const u8 sMachopAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_9_6.lz");
static const u8 sMachopAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_9_7.lz");
static const u8 sMachopAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_9_8.lz");
static const u8 sMachopAnims_10_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_10_1.lz");
static const u8 sMachopAnims_10_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_10_2.lz");
static const u8 sMachopAnims_10_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_10_3.lz");
static const u8 sMachopAnims_10_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_10_4.lz");
static const u8 sMachopAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_11_1.lz");
static const u8 sMachopAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_11_2.lz");
static const u8 sMachopAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_11_3.lz");
static const u8 sMachopAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_11_4.lz");
static const u8 sMachopAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_11_5.lz");
static const u8 sMachopAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_11_6.lz");
static const u8 sMachopAnims_12_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_12_2.lz");
static const u8 sMachopAnims_12_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_12_3.lz");
static const u8 sMachopAnims_12_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_12_4.lz");
static const u8 sMachopAnims_13_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_13_1.lz");
static const u8 sMachopAnims_13_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_13_2.lz");
static const u8 sMachopAnims_13_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_13_3.lz");
static const u8 sMachopAnims_13_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_13_4.lz");
static const u8 sMachopAnims_13_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_13_5.lz");
static const u8 sMachopAnims_13_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_13_6.lz");
static const u8 sMachopAnims_13_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_13_7.lz");
static const u8 sMachopAnims_13_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_13_8.lz");
static const u8 sMachopAnims_14_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_14_1.lz");
static const u8 sMachopAnims_15_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_15_1.lz");
static const u8 sMachopAnims_16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_16_1.lz");
static const u8 sMachopAnims_17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_17_1.lz");
static const u8 sMachopAnims_18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_18_1.lz");
static const u8 sMachopAnims_18_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_18_5.lz");
static const u8 sMachopAnims_19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_19_1.lz");
static const u8 sMachopAnims_20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_20_1.lz");
static const u8 sMachopAnims_20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_20_2.lz");
static const u8 sMachopAnims_21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_21_1.lz");
static const u8 sMachopAnims_22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_22_1.lz");
static const u8 sMachopAnims_23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_23_1.lz");
static const u8 sMachopAnims_23_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_23_3.lz");
static const u8 sMachopAnims_24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_24_1.lz");
static const u8 sMachopAnims_25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_25_1.lz");
static const u8 sMachopAnims_25_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_25_7.lz");
static const u8 sMachopAnims_26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_26_1.lz");
static const u8 sMachopAnims_27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_27_1.lz");
static const u8 sMachopAnims_28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_28_1.lz");
static const u8 sMachopAnims_28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/machop/sMachopAnims_28_3.lz");

static const u8 sMachopGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_1.4bpp.lz");
static const ax_sprite sMachopSprites1[] = {
	{sMachopGfx1, ARRAY_COUNT(sMachopGfx1)}, 
	{NULL, 0}
};
static const u8 sMachopGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_2.4bpp.lz");
static const ax_sprite sMachopSprites2[] = {
	{sMachopGfx2, ARRAY_COUNT(sMachopGfx2)}, 
	{NULL, 0}
};
static const u8 sMachopGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_3.4bpp.lz");
static const ax_sprite sMachopSprites3[] = {
	{sMachopGfx3, ARRAY_COUNT(sMachopGfx3)}, 
	{NULL, 0}
};
static const u8 sMachopGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_4.4bpp.lz");
static const ax_sprite sMachopSprites4[] = {
	{sMachopGfx4, ARRAY_COUNT(sMachopGfx4)}, 
	{NULL, 0}
};
static const u8 sMachopGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_5.4bpp.lz");
static const ax_sprite sMachopSprites5[] = {
	{sMachopGfx5, ARRAY_COUNT(sMachopGfx5)}, 
	{NULL, 0}
};
static const u8 sMachopGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_6.4bpp.lz");
static const ax_sprite sMachopSprites6[] = {
	{sMachopGfx6, ARRAY_COUNT(sMachopGfx6)}, 
	{NULL, 0}
};
static const u8 sMachopGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_7.4bpp.lz");
static const ax_sprite sMachopSprites7[] = {
	{sMachopGfx7, ARRAY_COUNT(sMachopGfx7)}, 
	{NULL, 0}
};
static const u8 sMachopGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_8.4bpp.lz");
static const ax_sprite sMachopSprites8[] = {
	{sMachopGfx8, ARRAY_COUNT(sMachopGfx8)}, 
	{NULL, 0}
};
static const u8 sMachopGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_9.4bpp.lz");
static const ax_sprite sMachopSprites9[] = {
	{sMachopGfx9, ARRAY_COUNT(sMachopGfx9)}, 
	{NULL, 0}
};
static const u8 sMachopGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_10.4bpp.lz");
static const ax_sprite sMachopSprites10[] = {
	{sMachopGfx10, ARRAY_COUNT(sMachopGfx10)}, 
	{NULL, 0}
};
static const u8 sMachopGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_11.4bpp.lz");
static const ax_sprite sMachopSprites11[] = {
	{sMachopGfx11, ARRAY_COUNT(sMachopGfx11)}, 
	{NULL, 0}
};
static const u8 sMachopGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_12.4bpp.lz");
static const ax_sprite sMachopSprites12[] = {
	{sMachopGfx12, ARRAY_COUNT(sMachopGfx12)}, 
	{NULL, 0}
};
static const u8 sMachopGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_13.4bpp.lz");
static const ax_sprite sMachopSprites13[] = {
	{sMachopGfx13, ARRAY_COUNT(sMachopGfx13)}, 
	{NULL, 0}
};
static const u8 sMachopGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_14.4bpp.lz");
static const ax_sprite sMachopSprites14[] = {
	{sMachopGfx14, ARRAY_COUNT(sMachopGfx14)}, 
	{NULL, 0}
};
static const u8 sMachopGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_15.4bpp.lz");
static const ax_sprite sMachopSprites15[] = {
	{sMachopGfx15, ARRAY_COUNT(sMachopGfx15)}, 
	{NULL, 0}
};
static const u8 sMachopGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_16.4bpp.lz");
static const u8 sMachopGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_16_1.4bpp.lz");
static const u8 sMachopGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_16_2.4bpp.lz");
static const ax_sprite sMachopSprites16[] = {
	{sMachopGfx16, ARRAY_COUNT(sMachopGfx16)}, 
	{NULL, 32}, 
	{sMachopGfx16_1, ARRAY_COUNT(sMachopGfx16_1)}, 
	{NULL, 32}, 
	{sMachopGfx16_2, ARRAY_COUNT(sMachopGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMachopGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_17.4bpp.lz");
static const u8 sMachopGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_17_1.4bpp.lz");
static const u8 sMachopGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_17_2.4bpp.lz");
static const u8 sMachopGfx17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_17_3.4bpp.lz");
static const ax_sprite sMachopSprites17[] = {
	{NULL, 32}, 
	{sMachopGfx17, ARRAY_COUNT(sMachopGfx17)}, 
	{NULL, 64}, 
	{sMachopGfx17_1, ARRAY_COUNT(sMachopGfx17_1)}, 
	{NULL, 32}, 
	{sMachopGfx17_2, ARRAY_COUNT(sMachopGfx17_2)}, 
	{NULL, 32}, 
	{sMachopGfx17_3, ARRAY_COUNT(sMachopGfx17_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMachopGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_18.4bpp.lz");
static const u8 sMachopGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_18_1.4bpp.lz");
static const u8 sMachopGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_18_2.4bpp.lz");
static const ax_sprite sMachopSprites18[] = {
	{sMachopGfx18, ARRAY_COUNT(sMachopGfx18)}, 
	{NULL, 64}, 
	{sMachopGfx18_1, ARRAY_COUNT(sMachopGfx18_1)}, 
	{NULL, 32}, 
	{sMachopGfx18_2, ARRAY_COUNT(sMachopGfx18_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sMachopGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_19.4bpp.lz");
static const u8 sMachopGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_19_1.4bpp.lz");
static const ax_sprite sMachopSprites19[] = {
	{NULL, 32}, 
	{sMachopGfx19, ARRAY_COUNT(sMachopGfx19)}, 
	{NULL, 32}, 
	{sMachopGfx19_1, ARRAY_COUNT(sMachopGfx19_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMachopGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_20.4bpp.lz");
static const u8 sMachopGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_20_1.4bpp.lz");
static const u8 sMachopGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_20_2.4bpp.lz");
static const u8 sMachopGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_20_3.4bpp.lz");
static const ax_sprite sMachopSprites20[] = {
	{NULL, 32}, 
	{sMachopGfx20, ARRAY_COUNT(sMachopGfx20)}, 
	{NULL, 32}, 
	{sMachopGfx20_1, ARRAY_COUNT(sMachopGfx20_1)}, 
	{NULL, 32}, 
	{sMachopGfx20_2, ARRAY_COUNT(sMachopGfx20_2)}, 
	{NULL, 64}, 
	{sMachopGfx20_3, ARRAY_COUNT(sMachopGfx20_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMachopGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_21.4bpp.lz");
static const u8 sMachopGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_21_1.4bpp.lz");
static const u8 sMachopGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_21_2.4bpp.lz");
static const u8 sMachopGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_21_3.4bpp.lz");
static const ax_sprite sMachopSprites21[] = {
	{sMachopGfx21, ARRAY_COUNT(sMachopGfx21)}, 
	{NULL, 96}, 
	{sMachopGfx21_1, ARRAY_COUNT(sMachopGfx21_1)}, 
	{NULL, 32}, 
	{sMachopGfx21_2, ARRAY_COUNT(sMachopGfx21_2)}, 
	{NULL, 64}, 
	{sMachopGfx21_3, ARRAY_COUNT(sMachopGfx21_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMachopGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_22.4bpp.lz");
static const u8 sMachopGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_22_1.4bpp.lz");
static const u8 sMachopGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_22_2.4bpp.lz");
static const ax_sprite sMachopSprites22[] = {
	{NULL, 32}, 
	{sMachopGfx22, ARRAY_COUNT(sMachopGfx22)}, 
	{NULL, 32}, 
	{sMachopGfx22_1, ARRAY_COUNT(sMachopGfx22_1)}, 
	{NULL, 32}, 
	{sMachopGfx22_2, ARRAY_COUNT(sMachopGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMachopGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_23.4bpp.lz");
static const u8 sMachopGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_23_1.4bpp.lz");
static const u8 sMachopGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_23_2.4bpp.lz");
static const ax_sprite sMachopSprites23[] = {
	{NULL, 32}, 
	{sMachopGfx23, ARRAY_COUNT(sMachopGfx23)}, 
	{NULL, 32}, 
	{sMachopGfx23_1, ARRAY_COUNT(sMachopGfx23_1)}, 
	{NULL, 64}, 
	{sMachopGfx23_2, ARRAY_COUNT(sMachopGfx23_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sMachopGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_24.4bpp.lz");
static const u8 sMachopGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_24_1.4bpp.lz");
static const u8 sMachopGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_24_2.4bpp.lz");
static const ax_sprite sMachopSprites24[] = {
	{sMachopGfx24, ARRAY_COUNT(sMachopGfx24)}, 
	{NULL, 64}, 
	{sMachopGfx24_1, ARRAY_COUNT(sMachopGfx24_1)}, 
	{NULL, 32}, 
	{sMachopGfx24_2, ARRAY_COUNT(sMachopGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMachopGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_25.4bpp.lz");
static const u8 sMachopGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_25_1.4bpp.lz");
static const u8 sMachopGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_25_2.4bpp.lz");
static const u8 sMachopGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_25_3.4bpp.lz");
static const ax_sprite sMachopSprites25[] = {
	{NULL, 32}, 
	{sMachopGfx25, ARRAY_COUNT(sMachopGfx25)}, 
	{NULL, 64}, 
	{sMachopGfx25_1, ARRAY_COUNT(sMachopGfx25_1)}, 
	{NULL, 64}, 
	{sMachopGfx25_2, ARRAY_COUNT(sMachopGfx25_2)}, 
	{NULL, 32}, 
	{sMachopGfx25_3, ARRAY_COUNT(sMachopGfx25_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMachopGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_26.4bpp.lz");
static const ax_sprite sMachopSprites26[] = {
	{sMachopGfx26, ARRAY_COUNT(sMachopGfx26)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMachopGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_27.4bpp.lz");
static const u8 sMachopGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_27_1.4bpp.lz");
static const u8 sMachopGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_27_2.4bpp.lz");
static const ax_sprite sMachopSprites27[] = {
	{sMachopGfx27, ARRAY_COUNT(sMachopGfx27)}, 
	{NULL, 64}, 
	{sMachopGfx27_1, ARRAY_COUNT(sMachopGfx27_1)}, 
	{NULL, 32}, 
	{sMachopGfx27_2, ARRAY_COUNT(sMachopGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMachopGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_28.4bpp.lz");
static const u8 sMachopGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_28_1.4bpp.lz");
static const u8 sMachopGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_28_2.4bpp.lz");
static const ax_sprite sMachopSprites28[] = {
	{sMachopGfx28, ARRAY_COUNT(sMachopGfx28)}, 
	{NULL, 64}, 
	{sMachopGfx28_1, ARRAY_COUNT(sMachopGfx28_1)}, 
	{NULL, 32}, 
	{sMachopGfx28_2, ARRAY_COUNT(sMachopGfx28_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMachopGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_29.4bpp.lz");
static const u8 sMachopGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_29_1.4bpp.lz");
static const ax_sprite sMachopSprites29[] = {
	{sMachopGfx29, ARRAY_COUNT(sMachopGfx29)}, 
	{NULL, 32}, 
	{sMachopGfx29_1, ARRAY_COUNT(sMachopGfx29_1)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sMachopGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_30.4bpp.lz");
static const u8 sMachopGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_30_1.4bpp.lz");
static const u8 sMachopGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_30_2.4bpp.lz");
static const ax_sprite sMachopSprites30[] = {
	{sMachopGfx30, ARRAY_COUNT(sMachopGfx30)}, 
	{NULL, 32}, 
	{sMachopGfx30_1, ARRAY_COUNT(sMachopGfx30_1)}, 
	{NULL, 32}, 
	{sMachopGfx30_2, ARRAY_COUNT(sMachopGfx30_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMachopGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_31.4bpp.lz");
static const u8 sMachopGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_31_1.4bpp.lz");
static const u8 sMachopGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_31_2.4bpp.lz");
static const ax_sprite sMachopSprites31[] = {
	{sMachopGfx31, ARRAY_COUNT(sMachopGfx31)}, 
	{NULL, 32}, 
	{sMachopGfx31_1, ARRAY_COUNT(sMachopGfx31_1)}, 
	{NULL, 32}, 
	{sMachopGfx31_2, ARRAY_COUNT(sMachopGfx31_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMachopGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_32.4bpp.lz");
static const u8 sMachopGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_32_1.4bpp.lz");
static const u8 sMachopGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_32_2.4bpp.lz");
static const ax_sprite sMachopSprites32[] = {
	{sMachopGfx32, ARRAY_COUNT(sMachopGfx32)}, 
	{NULL, 64}, 
	{sMachopGfx32_1, ARRAY_COUNT(sMachopGfx32_1)}, 
	{NULL, 32}, 
	{sMachopGfx32_2, ARRAY_COUNT(sMachopGfx32_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMachopGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_33.4bpp.lz");
static const ax_sprite sMachopSprites33[] = {
	{sMachopGfx33, ARRAY_COUNT(sMachopGfx33)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMachopGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_34.4bpp.lz");
static const u8 sMachopGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_34_1.4bpp.lz");
static const u8 sMachopGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_34_2.4bpp.lz");
static const ax_sprite sMachopSprites34[] = {
	{NULL, 32}, 
	{sMachopGfx34, ARRAY_COUNT(sMachopGfx34)}, 
	{NULL, 32}, 
	{sMachopGfx34_1, ARRAY_COUNT(sMachopGfx34_1)}, 
	{NULL, 32}, 
	{sMachopGfx34_2, ARRAY_COUNT(sMachopGfx34_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMachopGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_35.4bpp.lz");
static const u8 sMachopGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_35_1.4bpp.lz");
static const u8 sMachopGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_35_2.4bpp.lz");
static const ax_sprite sMachopSprites35[] = {
	{sMachopGfx35, ARRAY_COUNT(sMachopGfx35)}, 
	{NULL, 32}, 
	{sMachopGfx35_1, ARRAY_COUNT(sMachopGfx35_1)}, 
	{NULL, 32}, 
	{sMachopGfx35_2, ARRAY_COUNT(sMachopGfx35_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMachopGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_36.4bpp.lz");
static const u8 sMachopGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_36_1.4bpp.lz");
static const ax_sprite sMachopSprites36[] = {
	{NULL, 128}, 
	{sMachopGfx36, ARRAY_COUNT(sMachopGfx36)}, 
	{NULL, 32}, 
	{sMachopGfx36_1, ARRAY_COUNT(sMachopGfx36_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMachopGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_37.4bpp.lz");
static const u8 sMachopGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_37_1.4bpp.lz");
static const u8 sMachopGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_37_2.4bpp.lz");
static const ax_sprite sMachopSprites37[] = {
	{sMachopGfx37, ARRAY_COUNT(sMachopGfx37)}, 
	{NULL, 64}, 
	{sMachopGfx37_1, ARRAY_COUNT(sMachopGfx37_1)}, 
	{NULL, 32}, 
	{sMachopGfx37_2, ARRAY_COUNT(sMachopGfx37_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMachopGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_38.4bpp.lz");
static const u8 sMachopGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_38_1.4bpp.lz");
static const ax_sprite sMachopSprites38[] = {
	{NULL, 128}, 
	{sMachopGfx38, ARRAY_COUNT(sMachopGfx38)}, 
	{NULL, 32}, 
	{sMachopGfx38_1, ARRAY_COUNT(sMachopGfx38_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMachopGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_39.4bpp.lz");
static const u8 sMachopGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_39_1.4bpp.lz");
static const u8 sMachopGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_39_2.4bpp.lz");
static const ax_sprite sMachopSprites39[] = {
	{sMachopGfx39, ARRAY_COUNT(sMachopGfx39)}, 
	{NULL, 32}, 
	{sMachopGfx39_1, ARRAY_COUNT(sMachopGfx39_1)}, 
	{NULL, 32}, 
	{sMachopGfx39_2, ARRAY_COUNT(sMachopGfx39_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMachopGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_40.4bpp.lz");
static const u8 sMachopGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_40_1.4bpp.lz");
static const ax_sprite sMachopSprites40[] = {
	{NULL, 64}, 
	{sMachopGfx40, ARRAY_COUNT(sMachopGfx40)}, 
	{NULL, 32}, 
	{sMachopGfx40_1, ARRAY_COUNT(sMachopGfx40_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMachopGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_41.4bpp.lz");
static const u8 sMachopGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_41_1.4bpp.lz");
static const u8 sMachopGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_41_2.4bpp.lz");
static const ax_sprite sMachopSprites41[] = {
	{sMachopGfx41, ARRAY_COUNT(sMachopGfx41)}, 
	{NULL, 32}, 
	{sMachopGfx41_1, ARRAY_COUNT(sMachopGfx41_1)}, 
	{NULL, 32}, 
	{sMachopGfx41_2, ARRAY_COUNT(sMachopGfx41_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMachopGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_42.4bpp.lz");
static const u8 sMachopGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_42_1.4bpp.lz");
static const u8 sMachopGfx42_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_42_2.4bpp.lz");
static const u8 sMachopGfx42_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_42_3.4bpp.lz");
static const u8 sMachopGfx42_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_42_4.4bpp.lz");
static const ax_sprite sMachopSprites42[] = {
	{sMachopGfx42, ARRAY_COUNT(sMachopGfx42)}, 
	{NULL, 96}, 
	{sMachopGfx42_1, ARRAY_COUNT(sMachopGfx42_1)}, 
	{NULL, 32}, 
	{sMachopGfx42_2, ARRAY_COUNT(sMachopGfx42_2)}, 
	{NULL, 32}, 
	{sMachopGfx42_3, ARRAY_COUNT(sMachopGfx42_3)}, 
	{NULL, 64}, 
	{sMachopGfx42_4, ARRAY_COUNT(sMachopGfx42_4)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sMachopGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_43.4bpp.lz");
static const u8 sMachopGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_43_1.4bpp.lz");
static const u8 sMachopGfx43_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_43_2.4bpp.lz");
static const ax_sprite sMachopSprites43[] = {
	{sMachopGfx43, ARRAY_COUNT(sMachopGfx43)}, 
	{NULL, 32}, 
	{sMachopGfx43_1, ARRAY_COUNT(sMachopGfx43_1)}, 
	{NULL, 32}, 
	{sMachopGfx43_2, ARRAY_COUNT(sMachopGfx43_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMachopGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_44.4bpp.lz");
static const u8 sMachopGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_44_1.4bpp.lz");
static const u8 sMachopGfx44_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_44_2.4bpp.lz");
static const u8 sMachopGfx44_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_44_3.4bpp.lz");
static const u8 sMachopGfx44_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_44_4.4bpp.lz");
static const ax_sprite sMachopSprites44[] = {
	{sMachopGfx44, ARRAY_COUNT(sMachopGfx44)}, 
	{NULL, 32}, 
	{sMachopGfx44_1, ARRAY_COUNT(sMachopGfx44_1)}, 
	{NULL, 32}, 
	{sMachopGfx44_2, ARRAY_COUNT(sMachopGfx44_2)}, 
	{NULL, 32}, 
	{sMachopGfx44_3, ARRAY_COUNT(sMachopGfx44_3)}, 
	{NULL, 32}, 
	{sMachopGfx44_4, ARRAY_COUNT(sMachopGfx44_4)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMachopGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_45.4bpp.lz");
static const u8 sMachopGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_45_1.4bpp.lz");
static const u8 sMachopGfx45_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_45_2.4bpp.lz");
static const ax_sprite sMachopSprites45[] = {
	{sMachopGfx45, ARRAY_COUNT(sMachopGfx45)}, 
	{NULL, 32}, 
	{sMachopGfx45_1, ARRAY_COUNT(sMachopGfx45_1)}, 
	{NULL, 32}, 
	{sMachopGfx45_2, ARRAY_COUNT(sMachopGfx45_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMachopGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_46.4bpp.lz");
static const ax_sprite sMachopSprites46[] = {
	{sMachopGfx46, ARRAY_COUNT(sMachopGfx46)}, 
	{NULL, 0}
};
static const u8 sMachopGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_47.4bpp.lz");
static const ax_sprite sMachopSprites47[] = {
	{sMachopGfx47, ARRAY_COUNT(sMachopGfx47)}, 
	{NULL, 0}
};
static const u8 sMachopGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_48.4bpp.lz");
static const ax_sprite sMachopSprites48[] = {
	{sMachopGfx48, ARRAY_COUNT(sMachopGfx48)}, 
	{NULL, 0}
};
static const u8 sMachopGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_49.4bpp.lz");
static const ax_sprite sMachopSprites49[] = {
	{sMachopGfx49, ARRAY_COUNT(sMachopGfx49)}, 
	{NULL, 0}
};
static const u8 sMachopGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_50.4bpp.lz");
static const ax_sprite sMachopSprites50[] = {
	{sMachopGfx50, ARRAY_COUNT(sMachopGfx50)}, 
	{NULL, 0}
};
static const u8 sMachopGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_51.4bpp.lz");
static const ax_sprite sMachopSprites51[] = {
	{sMachopGfx51, ARRAY_COUNT(sMachopGfx51)}, 
	{NULL, 0}
};
static const u8 sMachopGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_52.4bpp.lz");
static const ax_sprite sMachopSprites52[] = {
	{sMachopGfx52, ARRAY_COUNT(sMachopGfx52)}, 
	{NULL, 0}
};
static const u8 sMachopGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_53.4bpp.lz");
static const ax_sprite sMachopSprites53[] = {
	{sMachopGfx53, ARRAY_COUNT(sMachopGfx53)}, 
	{NULL, 0}
};
static const u8 sMachopGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_54.4bpp.lz");
static const ax_sprite sMachopSprites54[] = {
	{sMachopGfx54, ARRAY_COUNT(sMachopGfx54)}, 
	{NULL, 0}
};
static const u8 sMachopGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_55.4bpp.lz");
static const ax_sprite sMachopSprites55[] = {
	{sMachopGfx55, ARRAY_COUNT(sMachopGfx55)}, 
	{NULL, 0}
};
static const u8 sMachopGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_56.4bpp.lz");
static const ax_sprite sMachopSprites56[] = {
	{sMachopGfx56, ARRAY_COUNT(sMachopGfx56)}, 
	{NULL, 0}
};
static const u8 sMachopGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_57.4bpp.lz");
static const ax_sprite sMachopSprites57[] = {
	{sMachopGfx57, ARRAY_COUNT(sMachopGfx57)}, 
	{NULL, 0}
};
static const u8 sMachopGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_58.4bpp.lz");
static const ax_sprite sMachopSprites58[] = {
	{sMachopGfx58, ARRAY_COUNT(sMachopGfx58)}, 
	{NULL, 0}
};
static const u8 sMachopGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_59.4bpp.lz");
static const ax_sprite sMachopSprites59[] = {
	{sMachopGfx59, ARRAY_COUNT(sMachopGfx59)}, 
	{NULL, 0}
};
static const u8 sMachopGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_60.4bpp.lz");
static const ax_sprite sMachopSprites60[] = {
	{sMachopGfx60, ARRAY_COUNT(sMachopGfx60)}, 
	{NULL, 0}
};
static const u8 sMachopGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_61.4bpp.lz");
static const ax_sprite sMachopSprites61[] = {
	{sMachopGfx61, ARRAY_COUNT(sMachopGfx61)}, 
	{NULL, 0}
};
static const u8 sMachopGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_62.4bpp.lz");
static const ax_sprite sMachopSprites62[] = {
	{sMachopGfx62, ARRAY_COUNT(sMachopGfx62)}, 
	{NULL, 0}
};
static const u8 sMachopGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_63.4bpp.lz");
static const ax_sprite sMachopSprites63[] = {
	{sMachopGfx63, ARRAY_COUNT(sMachopGfx63)}, 
	{NULL, 0}
};
static const u8 sMachopGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_64.4bpp.lz");
static const ax_sprite sMachopSprites64[] = {
	{sMachopGfx64, ARRAY_COUNT(sMachopGfx64)}, 
	{NULL, 0}
};
static const u8 sMachopGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_65.4bpp.lz");
static const ax_sprite sMachopSprites65[] = {
	{sMachopGfx65, ARRAY_COUNT(sMachopGfx65)}, 
	{NULL, 0}
};
static const u8 sMachopGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_66.4bpp.lz");
static const ax_sprite sMachopSprites66[] = {
	{sMachopGfx66, ARRAY_COUNT(sMachopGfx66)}, 
	{NULL, 0}
};
static const u8 sMachopGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_67.4bpp.lz");
static const ax_sprite sMachopSprites67[] = {
	{sMachopGfx67, ARRAY_COUNT(sMachopGfx67)}, 
	{NULL, 0}
};
static const u8 sMachopGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_68.4bpp.lz");
static const ax_sprite sMachopSprites68[] = {
	{sMachopGfx68, ARRAY_COUNT(sMachopGfx68)}, 
	{NULL, 0}
};
static const u8 sMachopGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_69.4bpp.lz");
static const ax_sprite sMachopSprites69[] = {
	{sMachopGfx69, ARRAY_COUNT(sMachopGfx69)}, 
	{NULL, 0}
};
static const u8 sMachopGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_70.4bpp.lz");
static const ax_sprite sMachopSprites70[] = {
	{sMachopGfx70, ARRAY_COUNT(sMachopGfx70)}, 
	{NULL, 0}
};
static const u8 sMachopGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_71.4bpp.lz");
static const ax_sprite sMachopSprites71[] = {
	{sMachopGfx71, ARRAY_COUNT(sMachopGfx71)}, 
	{NULL, 0}
};
static const u8 sMachopGfx72[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_72.4bpp.lz");
static const ax_sprite sMachopSprites72[] = {
	{sMachopGfx72, ARRAY_COUNT(sMachopGfx72)}, 
	{NULL, 0}
};
static const u8 sMachopGfx73[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_73.4bpp.lz");
static const ax_sprite sMachopSprites73[] = {
	{sMachopGfx73, ARRAY_COUNT(sMachopGfx73)}, 
	{NULL, 0}
};
static const u8 sMachopGfx74[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_74.4bpp.lz");
static const ax_sprite sMachopSprites74[] = {
	{sMachopGfx74, ARRAY_COUNT(sMachopGfx74)}, 
	{NULL, 0}
};
static const u8 sMachopGfx75[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_75.4bpp.lz");
static const ax_sprite sMachopSprites75[] = {
	{sMachopGfx75, ARRAY_COUNT(sMachopGfx75)}, 
	{NULL, 0}
};
static const u8 sMachopGfx76[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_76.4bpp.lz");
static const ax_sprite sMachopSprites76[] = {
	{sMachopGfx76, ARRAY_COUNT(sMachopGfx76)}, 
	{NULL, 0}
};
static const u8 sMachopGfx77[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_77.4bpp.lz");
static const ax_sprite sMachopSprites77[] = {
	{sMachopGfx77, ARRAY_COUNT(sMachopGfx77)}, 
	{NULL, 0}
};
static const u8 sMachopGfx78[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_78.4bpp.lz");
static const ax_sprite sMachopSprites78[] = {
	{sMachopGfx78, ARRAY_COUNT(sMachopGfx78)}, 
	{NULL, 0}
};
static const u8 sMachopGfx79[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_79.4bpp.lz");
static const ax_sprite sMachopSprites79[] = {
	{sMachopGfx79, ARRAY_COUNT(sMachopGfx79)}, 
	{NULL, 0}
};
static const u8 sMachopGfx80[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_80.4bpp.lz");
static const ax_sprite sMachopSprites80[] = {
	{sMachopGfx80, ARRAY_COUNT(sMachopGfx80)}, 
	{NULL, 0}
};
static const u8 sMachopGfx81[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_81.4bpp.lz");
static const ax_sprite sMachopSprites81[] = {
	{sMachopGfx81, ARRAY_COUNT(sMachopGfx81)}, 
	{NULL, 0}
};
static const u8 sMachopGfx82[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/machop/sprite_82.4bpp.lz");
static const ax_sprite sMachopSprites82[] = {
	{sMachopGfx82, ARRAY_COUNT(sMachopGfx82)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesMachop[] = {
	sMachopPose1,
	sMachopPose2,
	sMachopPose3,
	sMachopPose4,
	sMachopPose5,
	sMachopPose6,
	sMachopPose7,
	sMachopPose8,
	sMachopPose9,
	sMachopPose10,
	sMachopPose11,
	sMachopPose12,
	sMachopPose13,
	sMachopPose14,
	sMachopPose15,
	sMachopPose16,
	sMachopPose17,
	sMachopPose18,
	sMachopPose19,
	sMachopPose20,
	sMachopPose21,
	sMachopPose22,
	sMachopPose23,
	sMachopPose24,
	sMachopPose1,
	sMachopPose2,
	sMachopPose3,
	sMachopPose4,
	sMachopPose5,
	sMachopPose6,
	sMachopPose7,
	sMachopPose8,
	sMachopPose9,
	sMachopPose10,
	sMachopPose11,
	sMachopPose12,
	sMachopPose13,
	sMachopPose14,
	sMachopPose15,
	sMachopPose16,
	sMachopPose17,
	sMachopPose18,
	sMachopPose19,
	sMachopPose20,
	sMachopPose21,
	sMachopPose22,
	sMachopPose23,
	sMachopPose24,
	sMachopPose1,
	sMachopPose50,
	sMachopPose51,
	sMachopPose52,
	sMachopPose4,
	sMachopPose54,
	sMachopPose55,
	sMachopPose56,
	sMachopPose57,
	sMachopPose7,
	sMachopPose59,
	sMachopPose60,
	sMachopPose61,
	sMachopPose10,
	sMachopPose63,
	sMachopPose64,
	sMachopPose65,
	sMachopPose13,
	sMachopPose67,
	sMachopPose68,
	sMachopPose69,
	sMachopPose16,
	sMachopPose71,
	sMachopPose72,
	sMachopPose73,
	sMachopPose19,
	sMachopPose75,
	sMachopPose76,
	sMachopPose77,
	sMachopPose22,
	sMachopPose79,
	sMachopPose80,
	sMachopPose81,
	sMachopPose1,
	sMachopPose83,
	sMachopPose4,
	sMachopPose85,
	sMachopPose7,
	sMachopPose87,
	sMachopPose10,
	sMachopPose89,
	sMachopPose13,
	sMachopPose91,
	sMachopPose16,
	sMachopPose93,
	sMachopPose19,
	sMachopPose95,
	sMachopPose96,
	sMachopPose97,
	sMachopPose1,
	sMachopPose2,
	sMachopPose3,
	sMachopPose101,
	sMachopPose102,
	sMachopPose4,
	sMachopPose5,
	sMachopPose6,
	sMachopPose106,
	sMachopPose107,
	sMachopPose7,
	sMachopPose8,
	sMachopPose9,
	sMachopPose111,
	sMachopPose112,
	sMachopPose10,
	sMachopPose11,
	sMachopPose12,
	sMachopPose116,
	sMachopPose117,
	sMachopPose13,
	sMachopPose14,
	sMachopPose15,
	sMachopPose121,
	sMachopPose122,
	sMachopPose16,
	sMachopPose17,
	sMachopPose18,
	sMachopPose126,
	sMachopPose127,
	sMachopPose19,
	sMachopPose20,
	sMachopPose21,
	sMachopPose131,
	sMachopPose132,
	sMachopPose22,
	sMachopPose23,
	sMachopPose24,
	sMachopPose136,
	sMachopPose137,
	sMachopPose138,
	sMachopPose139,
	sMachopPose140,
	sMachopPose141,
	sMachopPose142,
	sMachopPose143,
	sMachopPose144,
	sMachopPose145,
	sMachopPose146,
	sMachopPose147,
	sMachopPose1,
	sMachopPose2,
	sMachopPose3,
	sMachopPose4,
	sMachopPose5,
	sMachopPose6,
	sMachopPose7,
	sMachopPose8,
	sMachopPose9,
	sMachopPose10,
	sMachopPose11,
	sMachopPose12,
	sMachopPose13,
	sMachopPose14,
	sMachopPose15,
	sMachopPose16,
	sMachopPose17,
	sMachopPose18,
	sMachopPose19,
	sMachopPose20,
	sMachopPose21,
	sMachopPose22,
	sMachopPose23,
	sMachopPose24,
	sMachopPose1,
	sMachopPose22,
	sMachopPose19,
	sMachopPose16,
	sMachopPose13,
	sMachopPose10,
	sMachopPose7,
	sMachopPose4,
	sMachopPose180,
	sMachopPose85,
	sMachopPose87,
	sMachopPose89,
	sMachopPose184,
	sMachopPose93,
	sMachopPose95,
	sMachopPose97,
	sMachopPose1,
	sMachopPose189,
	sMachopPose83,
	sMachopPose4,
	sMachopPose192,
	sMachopPose193,
	sMachopPose7,
	sMachopPose195,
	sMachopPose196,
	sMachopPose10,
	sMachopPose63,
	sMachopPose199,
	sMachopPose13,
	sMachopPose201,
	sMachopPose91,
	sMachopPose16,
	sMachopPose71,
	sMachopPose205,
	sMachopPose19,
	sMachopPose207,
	sMachopPose208,
	sMachopPose22,
	sMachopPose210,
	sMachopPose211,
	sMachopPose180,
	sMachopPose97,
	sMachopPose95,
	sMachopPose93,
	sMachopPose216,
	sMachopPose217,
	sMachopPose218,
	sMachopPose85,
	sMachopPose1,
	sMachopPose22,
	sMachopPose19,
	sMachopPose16,
	sMachopPose13,
	sMachopPose10,
	sMachopPose7,
	sMachopPose4,
	sMachopPose228,
	sMachopPose229,
	sMachopPose230,
	sMachopPose231,
	sMachopPose228,
	sMachopPose233,
	sMachopPose234,
	sMachopPose235,
	sMachopPose7,
	sMachopPose13,
	sMachopPose238,
	sMachopPose239,
	sMachopPose240,
	sMachopPose241,
	sMachopPose242,
	sMachopPose243,
	sMachopPose244,
	sMachopPose245,
	sMachopPose246,
	sMachopPose246,
	sMachopPose248,
	sMachopPose249,
	sMachopPose250,
	sMachopPose19,
	sMachopPose252,
	sMachopPose253,
	sMachopPose13,
	sMachopPose255,
	sMachopPose256,
	sMachopPose1,
	sMachopPose241,
	sMachopPose259,
	sMachopPose19,
	sMachopPose261,
	sMachopPose7,
	sMachopPose263,
	sMachopPose13,
	sMachopPose265,
	sMachopPose266,
	sMachopPose267,
	sMachopPose268,
	sMachopPose269,
	sMachopPose270,
	sMachopPose271,
	sMachopPose272,
	sMachopPose273,
	sMachopPose274,
	sMachopPose275,
	sMachopPose276,
	sMachopPose228,
	sMachopPose229,
	sMachopPose230,
	sMachopPose231,
	sMachopPose228,
	sMachopPose229,
	sMachopPose230,
	sMachopPose231,
};

static const struct PositionSets sAxPositionsMachop[] = {
	[0] = { .set = { {-1, -8}, {-9, -2}, {7, -2}, {-1, -7} } },
	[1] = { .set = { {-2, -7}, {-9, -5}, {2, -2}, {-2, -6} } },
	[2] = { .set = { {0, -7}, {-4, -2}, {7, -5}, {-1, -7} } },
	[3] = { .set = { {3, -8}, {6, -4}, {-5, -2}, {-1, -6} } },
	[4] = { .set = { {4, -7}, {3, -6}, {0, -3}, {0, -6} } },
	[5] = { .set = { {3, -6}, {7, -3}, {-7, -2}, {-1, -5} } },
	[6] = { .set = { {4, -9}, {0, -6}, {-1, -1}, {-2, -5} } },
	[7] = { .set = { {5, -8}, {-3, -5}, {4, -4}, {-1, -6} } },
	[8] = { .set = { {4, -7}, {4, -5}, {-4, -1}, {-2, -5} } },
	[9] = { .set = { {3, -12}, {-6, -5}, {5, -2}, {-1, -6} } },
	[10] = { .set = { {2, -10}, {-7, -4}, {7, -5}, {-1, -5} } },
	[11] = { .set = { {4, -11}, {-1, -7}, {1, -1}, {0, -6} } },
	[12] = { .set = { {-1, -12}, {7, -4}, {-9, -4}, {-1, -7} } },
	[13] = { .set = { {0, -11}, {6, -2}, {-8, -8}, {0, -6} } },
	[14] = { .set = { {-2, -11}, {6, -8}, {-8, -2}, {-1, -6} } },
	[15] = { .set = { {-5, -12}, {4, -5}, {-7, -2}, {-1, -6} } },
	[16] = { .set = { {-4, -10}, {5, -4}, {-9, -5}, {-1, -5} } },
	[17] = { .set = { {-6, -11}, {-1, -7}, {-3, -1}, {-2, -6} } },
	[18] = { .set = { {-6, -9}, {-2, -6}, {-1, -1}, {0, -5} } },
	[19] = { .set = { {-7, -8}, {1, -5}, {-6, -4}, {-1, -6} } },
	[20] = { .set = { {-6, -7}, {-6, -5}, {2, -1}, {0, -5} } },
	[21] = { .set = { {-5, -8}, {-8, -4}, {3, -2}, {-1, -6} } },
	[22] = { .set = { {-6, -7}, {-5, -6}, {-2, -3}, {-2, -6} } },
	[23] = { .set = { {-5, -6}, {-9, -3}, {5, -2}, {-1, -5} } },
	[24] = { .set = { {-1, -8}, {-9, -2}, {7, -2}, {-1, -7} } },
	[25] = { .set = { {-2, -7}, {-9, -5}, {2, -2}, {-2, -6} } },
	[26] = { .set = { {0, -7}, {-4, -2}, {7, -5}, {-1, -7} } },
	[27] = { .set = { {3, -8}, {6, -4}, {-5, -2}, {-1, -6} } },
	[28] = { .set = { {4, -7}, {3, -6}, {0, -3}, {0, -6} } },
	[29] = { .set = { {3, -6}, {7, -3}, {-7, -2}, {-1, -5} } },
	[30] = { .set = { {4, -9}, {0, -6}, {-1, -1}, {-2, -5} } },
	[31] = { .set = { {5, -8}, {-3, -5}, {4, -4}, {-1, -6} } },
	[32] = { .set = { {4, -7}, {4, -5}, {-4, -1}, {-2, -5} } },
	[33] = { .set = { {3, -12}, {-6, -5}, {5, -2}, {-1, -6} } },
	[34] = { .set = { {2, -10}, {-7, -4}, {7, -5}, {-1, -5} } },
	[35] = { .set = { {4, -11}, {-1, -7}, {1, -1}, {0, -6} } },
	[36] = { .set = { {-1, -12}, {7, -4}, {-9, -4}, {-1, -7} } },
	[37] = { .set = { {0, -11}, {6, -2}, {-8, -8}, {0, -6} } },
	[38] = { .set = { {-2, -11}, {6, -8}, {-8, -2}, {-1, -6} } },
	[39] = { .set = { {-5, -12}, {4, -5}, {-7, -2}, {-1, -6} } },
	[40] = { .set = { {-4, -10}, {5, -4}, {-9, -5}, {-1, -5} } },
	[41] = { .set = { {-6, -11}, {-1, -7}, {-3, -1}, {-2, -6} } },
	[42] = { .set = { {-6, -9}, {-2, -6}, {-1, -1}, {0, -5} } },
	[43] = { .set = { {-7, -8}, {1, -5}, {-6, -4}, {-1, -6} } },
	[44] = { .set = { {-6, -7}, {-6, -5}, {2, -1}, {0, -5} } },
	[45] = { .set = { {-5, -8}, {-8, -4}, {3, -2}, {-1, -6} } },
	[46] = { .set = { {-6, -7}, {-5, -6}, {-2, -3}, {-2, -6} } },
	[47] = { .set = { {-5, -6}, {-9, -3}, {5, -2}, {-1, -5} } },
	[48] = { .set = { {-1, -8}, {-9, -2}, {7, -2}, {-1, -7} } },
	[49] = { .set = { {1, -8}, {-5, -8}, {8, -15}, {0, -8} } },
	[50] = { .set = { {-7, -4}, {-5, -11}, {-4, 0}, {-3, -6} } },
	[51] = { .set = { {-7, -4}, {-5, -11}, {-4, 0}, {-3, -6} } },
	[52] = { .set = { {3, -8}, {6, -4}, {-5, -2}, {-1, -6} } },
	[53] = { .set = { {3, -8}, {8, -6}, {-9, -11}, {-1, -6} } },
	[54] = { .set = { {3, -1}, {-5, -10}, {0, 2}, {-1, -3} } },
	[55] = { .set = { {3, -1}, {-5, -10}, {0, 2}, {-1, -3} } },
	[56] = { .set = { {-2, -8}, {4, -8}, {-9, -15}, {-1, -8} } },
	[57] = { .set = { {4, -9}, {0, -6}, {-1, -1}, {-2, -5} } },
	[58] = { .set = { {-3, -7}, {1, -8}, {-11, -7}, {-5, -6} } },
	[59] = { .set = { {6, -6}, {-5, -9}, {6, 0}, {2, -6} } },
	[60] = { .set = { {6, -6}, {-5, -9}, {6, 0}, {2, -6} } },
	[61] = { .set = { {3, -12}, {-6, -5}, {5, -2}, {-1, -6} } },
	[62] = { .set = { {1, -6}, {2, -5}, {-3, -6}, {-3, -5} } },
	[63] = { .set = { {4, -6}, {-7, -4}, {3, -3}, {1, -5} } },
	[64] = { .set = { {4, -6}, {-7, -4}, {3, -3}, {1, -5} } },
	[65] = { .set = { {-1, -12}, {7, -4}, {-9, -4}, {-1, -7} } },
	[66] = { .set = { {-3, -10}, {2, -7}, {-9, -8}, {-2, -5} } },
	[67] = { .set = { {2, -13}, {8, -7}, {-2, -7}, {0, -9} } },
	[68] = { .set = { {2, -13}, {8, -7}, {-2, -7}, {0, -9} } },
	[69] = { .set = { {-5, -12}, {4, -5}, {-7, -2}, {-1, -6} } },
	[70] = { .set = { {-3, -6}, {-4, -5}, {1, -6}, {1, -5} } },
	[71] = { .set = { {-6, -6}, {5, -4}, {-5, -3}, {-3, -5} } },
	[72] = { .set = { {-6, -6}, {5, -4}, {-5, -3}, {-3, -5} } },
	[73] = { .set = { {-6, -9}, {-2, -6}, {-1, -1}, {0, -5} } },
	[74] = { .set = { {1, -7}, {-3, -8}, {9, -7}, {3, -6} } },
	[75] = { .set = { {-8, -6}, {3, -9}, {-8, 0}, {-4, -6} } },
	[76] = { .set = { {-8, -6}, {3, -9}, {-8, 0}, {-4, -6} } },
	[77] = { .set = { {-5, -8}, {-8, -4}, {3, -2}, {-1, -6} } },
	[78] = { .set = { {-5, -8}, {-10, -6}, {7, -11}, {-1, -6} } },
	[79] = { .set = { {-5, -1}, {3, -10}, {-2, 2}, {-1, -3} } },
	[80] = { .set = { {-5, -1}, {3, -10}, {-2, 2}, {-1, -3} } },
	[81] = { .set = { {-1, -8}, {-9, -2}, {7, -2}, {-1, -7} } },
	[82] = { .set = { {0, -6}, {-7, -11}, {6, -4}, {1, -6} } },
	[83] = { .set = { {3, -8}, {6, -4}, {-5, -2}, {-1, -6} } },
	[84] = { .set = { {0, -6}, {5, -11}, {-6, -2}, {-2, -6} } },
	[85] = { .set = { {4, -9}, {0, -6}, {-1, -1}, {-2, -5} } },
	[86] = { .set = { {1, -6}, {-1, -7}, {-4, -7}, {-1, -5} } },
	[87] = { .set = { {3, -12}, {-6, -5}, {5, -2}, {-1, -6} } },
	[88] = { .set = { {3, -9}, {-7, -4}, {5, -7}, {-1, -5} } },
	[89] = { .set = { {-1, -12}, {7, -4}, {-9, -4}, {-1, -7} } },
	[90] = { .set = { {-1, -11}, {6, -11}, {-6, -3}, {0, -6} } },
	[91] = { .set = { {-5, -12}, {4, -5}, {-7, -2}, {-1, -6} } },
	[92] = { .set = { {-5, -9}, {5, -4}, {-7, -7}, {-1, -5} } },
	[93] = { .set = { {-6, -9}, {-2, -6}, {-1, -1}, {0, -5} } },
	[94] = { .set = { {-3, -6}, {-1, -7}, {2, -7}, {-1, -5} } },
	[95] = { .set = { {-4, -8}, {-7, -4}, {4, -2}, {0, -6} } },
	[96] = { .set = { {-2, -6}, {-7, -11}, {4, -2}, {0, -6} } },
	[97] = { .set = { {-1, -8}, {-9, -2}, {7, -2}, {-1, -7} } },
	[98] = { .set = { {-2, -7}, {-9, -5}, {2, -2}, {-2, -6} } },
	[99] = { .set = { {0, -7}, {-4, -2}, {7, -5}, {-1, -7} } },
	[100] = { .set = { {-2, -5}, {1, -3}, {7, -5}, {-1, -6} } },
	[101] = { .set = { {-2, -5}, {1, -3}, {7, -5}, {-1, -6} } },
	[102] = { .set = { {3, -8}, {6, -4}, {-5, -2}, {-1, -6} } },
	[103] = { .set = { {4, -7}, {3, -6}, {0, -3}, {0, -6} } },
	[104] = { .set = { {3, -6}, {7, -3}, {-7, -2}, {-1, -5} } },
	[105] = { .set = { {2, -5}, {-2, -2}, {-9, -3}, {-1, -6} } },
	[106] = { .set = { {2, -5}, {-2, -2}, {-9, -3}, {-1, -6} } },
	[107] = { .set = { {4, -9}, {0, -6}, {-1, -1}, {-2, -5} } },
	[108] = { .set = { {5, -8}, {-3, -5}, {4, -4}, {-1, -6} } },
	[109] = { .set = { {4, -7}, {4, -5}, {-4, -1}, {-2, -5} } },
	[110] = { .set = { {3, -6}, {5, -4}, {-4, -1}, {0, -7} } },
	[111] = { .set = { {3, -6}, {5, -4}, {-4, -1}, {0, -7} } },
	[112] = { .set = { {3, -12}, {-6, -5}, {5, -2}, {-1, -6} } },
	[113] = { .set = { {2, -10}, {-7, -4}, {7, -5}, {-1, -5} } },
	[114] = { .set = { {4, -11}, {-1, -7}, {1, -1}, {0, -6} } },
	[115] = { .set = { {3, -8}, {4, -6}, {4, -1}, {0, -7} } },
	[116] = { .set = { {3, -8}, {4, -6}, {4, -1}, {0, -7} } },
	[117] = { .set = { {-1, -12}, {7, -4}, {-9, -4}, {-1, -7} } },
	[118] = { .set = { {0, -11}, {6, -2}, {-8, -8}, {0, -6} } },
	[119] = { .set = { {-2, -11}, {6, -8}, {-8, -2}, {-1, -6} } },
	[120] = { .set = { {1, -11}, {3, -9}, {-8, -4}, {0, -8} } },
	[121] = { .set = { {1, -11}, {3, -9}, {-8, -4}, {0, -8} } },
	[122] = { .set = { {-5, -12}, {4, -5}, {-7, -2}, {-1, -6} } },
	[123] = { .set = { {-4, -10}, {5, -4}, {-9, -5}, {-1, -5} } },
	[124] = { .set = { {-6, -11}, {-1, -7}, {-3, -1}, {-2, -6} } },
	[125] = { .set = { {-4, -8}, {-5, -6}, {-5, -1}, {-1, -7} } },
	[126] = { .set = { {-4, -8}, {-5, -6}, {-5, -1}, {-1, -7} } },
	[127] = { .set = { {-6, -9}, {-2, -6}, {-1, -1}, {0, -5} } },
	[128] = { .set = { {-7, -8}, {1, -5}, {-6, -4}, {-1, -6} } },
	[129] = { .set = { {-6, -7}, {-6, -5}, {2, -1}, {0, -5} } },
	[130] = { .set = { {-5, -6}, {-7, -4}, {2, -1}, {-2, -7} } },
	[131] = { .set = { {-5, -6}, {-7, -4}, {2, -1}, {-2, -7} } },
	[132] = { .set = { {-5, -8}, {-8, -4}, {3, -2}, {-1, -6} } },
	[133] = { .set = { {-6, -7}, {-5, -6}, {-2, -3}, {-2, -6} } },
	[134] = { .set = { {-5, -6}, {-9, -3}, {5, -2}, {-1, -5} } },
	[135] = { .set = { {-4, -5}, {0, -2}, {7, -3}, {-1, -6} } },
	[136] = { .set = { {-4, -5}, {0, -2}, {7, -3}, {-1, -6} } },
	[137] = { .set = { {-4, -6}, {-5, -3}, {4, 0}, {-1, -4} } },
	[138] = { .set = { {-4, -5}, {-5, -3}, {4, 1}, {-1, -4} } },
	[139] = { .set = { {-1, -9}, {-3, -16}, {1, -16}, {-1, -10} } },
	[140] = { .set = { {2, -9}, {2, -17}, {-2, -15}, {-1, -7} } },
	[141] = { .set = { {3, -10}, {-1, -18}, {0, -16}, {-2, -6} } },
	[142] = { .set = { {2, -12}, {-3, -17}, {4, -15}, {-1, -7} } },
	[143] = { .set = { {-1, -12}, {6, -12}, {-8, -12}, {-1, -7} } },
	[144] = { .set = { {-3, -12}, {2, -17}, {-5, -15}, {0, -7} } },
	[145] = { .set = { {-5, -10}, {-1, -18}, {-2, -16}, {0, -6} } },
	[146] = { .set = { {-3, -9}, {-3, -17}, {1, -15}, {0, -7} } },
	[147] = { .set = { {-1, -8}, {-9, -2}, {7, -2}, {-1, -7} } },
	[148] = { .set = { {-2, -7}, {-9, -5}, {2, -2}, {-2, -6} } },
	[149] = { .set = { {0, -7}, {-4, -2}, {7, -5}, {-1, -7} } },
	[150] = { .set = { {3, -8}, {6, -4}, {-5, -2}, {-1, -6} } },
	[151] = { .set = { {4, -7}, {3, -6}, {0, -3}, {0, -6} } },
	[152] = { .set = { {3, -6}, {7, -3}, {-7, -2}, {-1, -5} } },
	[153] = { .set = { {4, -9}, {0, -6}, {-1, -1}, {-2, -5} } },
	[154] = { .set = { {5, -8}, {-3, -5}, {4, -4}, {-1, -6} } },
	[155] = { .set = { {4, -7}, {4, -5}, {-4, -1}, {-2, -5} } },
	[156] = { .set = { {3, -12}, {-6, -5}, {5, -2}, {-1, -6} } },
	[157] = { .set = { {2, -10}, {-7, -4}, {7, -5}, {-1, -5} } },
	[158] = { .set = { {4, -11}, {-1, -7}, {1, -1}, {0, -6} } },
	[159] = { .set = { {-1, -12}, {7, -4}, {-9, -4}, {-1, -7} } },
	[160] = { .set = { {0, -11}, {6, -2}, {-8, -8}, {0, -6} } },
	[161] = { .set = { {-2, -11}, {6, -8}, {-8, -2}, {-1, -6} } },
	[162] = { .set = { {-5, -12}, {4, -5}, {-7, -2}, {-1, -6} } },
	[163] = { .set = { {-4, -10}, {5, -4}, {-9, -5}, {-1, -5} } },
	[164] = { .set = { {-6, -11}, {-1, -7}, {-3, -1}, {-2, -6} } },
	[165] = { .set = { {-6, -9}, {-2, -6}, {-1, -1}, {0, -5} } },
	[166] = { .set = { {-7, -8}, {1, -5}, {-6, -4}, {-1, -6} } },
	[167] = { .set = { {-6, -7}, {-6, -5}, {2, -1}, {0, -5} } },
	[168] = { .set = { {-5, -8}, {-8, -4}, {3, -2}, {-1, -6} } },
	[169] = { .set = { {-6, -7}, {-5, -6}, {-2, -3}, {-2, -6} } },
	[170] = { .set = { {-5, -6}, {-9, -3}, {5, -2}, {-1, -5} } },
	[171] = { .set = { {-1, -8}, {-9, -2}, {7, -2}, {-1, -7} } },
	[172] = { .set = { {-5, -8}, {-8, -4}, {3, -2}, {-1, -6} } },
	[173] = { .set = { {-6, -9}, {-2, -6}, {-1, -1}, {0, -5} } },
	[174] = { .set = { {-5, -12}, {4, -5}, {-7, -2}, {-1, -6} } },
	[175] = { .set = { {-1, -12}, {7, -4}, {-9, -4}, {-1, -7} } },
	[176] = { .set = { {3, -12}, {-6, -5}, {5, -2}, {-1, -6} } },
	[177] = { .set = { {4, -9}, {0, -6}, {-1, -1}, {-2, -5} } },
	[178] = { .set = { {3, -8}, {6, -4}, {-5, -2}, {-1, -6} } },
	[179] = { .set = { {-1, -5}, {-8, -10}, {5, -3}, {0, -5} } },
	[180] = { .set = { {0, -6}, {5, -11}, {-6, -2}, {-2, -6} } },
	[181] = { .set = { {1, -6}, {-1, -7}, {-4, -7}, {-1, -5} } },
	[182] = { .set = { {3, -9}, {-7, -4}, {5, -7}, {-1, -5} } },
	[183] = { .set = { {-2, -10}, {5, -10}, {-7, -2}, {-1, -5} } },
	[184] = { .set = { {-5, -9}, {5, -4}, {-7, -7}, {-1, -5} } },
	[185] = { .set = { {-3, -6}, {-1, -7}, {2, -7}, {-1, -5} } },
	[186] = { .set = { {-2, -6}, {-7, -11}, {4, -2}, {0, -6} } },
	[187] = { .set = { {-1, -8}, {-9, -2}, {7, -2}, {-1, -7} } },
	[188] = { .set = { {0, -8}, {-6, -8}, {7, -15}, {-1, -8} } },
	[189] = { .set = { {0, -6}, {-7, -11}, {6, -4}, {1, -6} } },
	[190] = { .set = { {3, -8}, {6, -4}, {-5, -2}, {-1, -6} } },
	[191] = { .set = { {5, -8}, {10, -6}, {-7, -11}, {1, -6} } },
	[192] = { .set = { {0, -7}, {5, -12}, {-6, -3}, {-2, -7} } },
	[193] = { .set = { {4, -9}, {0, -6}, {-1, -1}, {-2, -5} } },
	[194] = { .set = { {0, -7}, {4, -8}, {-8, -7}, {-2, -6} } },
	[195] = { .set = { {1, -7}, {-1, -8}, {-4, -8}, {-1, -6} } },
	[196] = { .set = { {3, -12}, {-6, -5}, {5, -2}, {-1, -6} } },
	[197] = { .set = { {1, -6}, {2, -5}, {-3, -6}, {-3, -5} } },
	[198] = { .set = { {3, -10}, {-7, -5}, {5, -8}, {-1, -6} } },
	[199] = { .set = { {-1, -12}, {7, -4}, {-9, -4}, {-1, -7} } },
	[200] = { .set = { {-1, -10}, {4, -7}, {-7, -8}, {0, -5} } },
	[201] = { .set = { {-1, -11}, {6, -11}, {-6, -3}, {0, -6} } },
	[202] = { .set = { {-5, -12}, {4, -5}, {-7, -2}, {-1, -6} } },
	[203] = { .set = { {-3, -6}, {-4, -5}, {1, -6}, {1, -5} } },
	[204] = { .set = { {-5, -10}, {5, -5}, {-7, -8}, {-1, -6} } },
	[205] = { .set = { {-6, -9}, {-2, -6}, {-1, -1}, {0, -5} } },
	[206] = { .set = { {-2, -7}, {-6, -8}, {6, -7}, {0, -6} } },
	[207] = { .set = { {-3, -7}, {-1, -8}, {2, -8}, {-1, -6} } },
	[208] = { .set = { {-5, -8}, {-8, -4}, {3, -2}, {-1, -6} } },
	[209] = { .set = { {-7, -8}, {-12, -6}, {5, -11}, {-3, -6} } },
	[210] = { .set = { {-1, -7}, {-6, -12}, {5, -3}, {1, -7} } },
	[211] = { .set = { {-1, -5}, {-8, -10}, {5, -3}, {0, -5} } },
	[212] = { .set = { {-2, -6}, {-7, -11}, {4, -2}, {0, -6} } },
	[213] = { .set = { {-3, -6}, {-1, -7}, {2, -7}, {-1, -5} } },
	[214] = { .set = { {-5, -9}, {5, -4}, {-7, -7}, {-1, -5} } },
	[215] = { .set = { {-1, -10}, {6, -10}, {-6, -2}, {0, -5} } },
	[216] = { .set = { {4, -9}, {-6, -4}, {6, -7}, {0, -5} } },
	[217] = { .set = { {2, -6}, {0, -7}, {-3, -7}, {0, -5} } },
	[218] = { .set = { {0, -6}, {5, -11}, {-6, -2}, {-2, -6} } },
	[219] = { .set = { {-1, -8}, {-9, -2}, {7, -2}, {-1, -7} } },
	[220] = { .set = { {-5, -8}, {-8, -4}, {3, -2}, {-1, -6} } },
	[221] = { .set = { {-6, -9}, {-2, -6}, {-1, -1}, {0, -5} } },
	[222] = { .set = { {-5, -12}, {4, -5}, {-7, -2}, {-1, -6} } },
	[223] = { .set = { {-1, -12}, {7, -4}, {-9, -4}, {-1, -7} } },
	[224] = { .set = { {3, -12}, {-6, -5}, {5, -2}, {-1, -6} } },
	[225] = { .set = { {4, -9}, {0, -6}, {-1, -1}, {-2, -5} } },
	[226] = { .set = { {3, -8}, {6, -4}, {-5, -2}, {-1, -6} } },
	[227] = { .set = { {-4, -6}, {-3, 2}, {0, -9}, {-1, -4} } },
	[228] = { .set = { {-4, -6}, {-3, 2}, {1, -8}, {-1, -4} } },
	[229] = { .set = { {3, -6}, {2, 2}, {-1, -9}, {0, -4} } },
	[230] = { .set = { {3, -6}, {2, 2}, {-2, -8}, {0, -4} } },
	[231] = { .set = { {-4, -6}, {-3, 2}, {0, -9}, {-1, -4} } },
	[232] = { .set = { {0, -8}, {3, -6}, {5, -9}, {1, -5} } },
	[233] = { .set = { {5, -4}, {0, -2}, {2, -4}, {1, -5} } },
	[234] = { .set = { {4, -6}, {0, -2}, {2, -3}, {1, -5} } },
	[235] = { .set = { {4, -9}, {0, -6}, {-1, -1}, {-2, -5} } },
	[236] = { .set = { {-1, -12}, {7, -4}, {-9, -4}, {-1, -7} } },
	[237] = { .set = { {-1, -9}, {7, -6}, {-9, -6}, {-1, -7} } },
	[238] = { .set = { {-1, -6}, {8, -9}, {-10, -9}, {-1, -7} } },
	[239] = { .set = { {-1, -5}, {-7, -4}, {5, -4}, {-1, -7} } },
	[240] = { .set = { {-1, -11}, {-9, -14}, {7, -14}, {-1, -8} } },
	[241] = { .set = { {-3, -5}, {-7, -5}, {-2, -2}, {-1, -6} } },
	[242] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[243] = { .set = { {0, -9}, {-8, -16}, {8, -4}, {0, -7} } },
	[244] = { .set = { {3, -9}, {5, -3}, {-2, -7}, {0, -6} } },
	[245] = { .set = { {-4, -12}, {5, -16}, {-9, -6}, {-1, -7} } },
	[246] = { .set = { {-4, -12}, {5, -16}, {-9, -6}, {-1, -7} } },
	[247] = { .set = { {-1, -5}, {-7, -4}, {5, -4}, {-1, -7} } },
	[248] = { .set = { {-1, -4}, {-7, -3}, {5, -3}, {-1, -6} } },
	[249] = { .set = { {-1, -4}, {-7, -3}, {5, -3}, {-1, -6} } },
	[250] = { .set = { {-6, -9}, {-2, -6}, {-1, -1}, {0, -5} } },
	[251] = { .set = { {1, -9}, {-7, -11}, {0, -5}, {1, -7} } },
	[252] = { .set = { {1, -8}, {-4, -14}, {-2, -7}, {1, -6} } },
	[253] = { .set = { {-1, -12}, {7, -4}, {-9, -4}, {-1, -7} } },
	[254] = { .set = { {-1, -9}, {7, -2}, {-9, -2}, {-1, -6} } },
	[255] = { .set = { {-1, -6}, {6, -1}, {-8, -1}, {-1, -5} } },
	[256] = { .set = { {-1, -8}, {-9, -2}, {7, -2}, {-1, -7} } },
	[257] = { .set = { {-1, -11}, {-9, -14}, {7, -14}, {-1, -8} } },
	[258] = { .set = { {-1, -5}, {-4, -3}, {2, -3}, {-1, -8} } },
	[259] = { .set = { {-6, -9}, {-2, -6}, {-1, -1}, {0, -5} } },
	[260] = { .set = { {-6, -2}, {0, -2}, {1, -1}, {-2, -4} } },
	[261] = { .set = { {4, -9}, {0, -6}, {-1, -1}, {-2, -5} } },
	[262] = { .set = { {4, -2}, {-2, -2}, {-3, -1}, {0, -4} } },
	[263] = { .set = { {-1, -12}, {7, -4}, {-9, -4}, {-1, -7} } },
	[264] = { .set = { {-1, -7}, {7, -8}, {-9, -8}, {-1, -5} } },
	[265] = { .set = { {-3, -6}, {2, -4}, {5, -2}, {0, -5} } },
	[266] = { .set = { {-1, -7}, {-2, -5}, {7, -3}, {1, -6} } },
	[267] = { .set = { {-5, -5}, {-4, -3}, {3, -1}, {-2, -4} } },
	[268] = { .set = { {-1, -7}, {3, -5}, {7, -3}, {1, -6} } },
	[269] = { .set = { {-4, -5}, {1, -2}, {3, -1}, {0, -4} } },
	[270] = { .set = { {2, -6}, {-3, -4}, {-6, -2}, {-1, -5} } },
	[271] = { .set = { {0, -7}, {1, -5}, {-8, -3}, {-2, -6} } },
	[272] = { .set = { {4, -5}, {3, -3}, {-4, -1}, {1, -4} } },
	[273] = { .set = { {0, -7}, {-4, -5}, {-8, -3}, {-2, -6} } },
	[274] = { .set = { {3, -5}, {-2, -2}, {-4, -1}, {-1, -4} } },
	[275] = { .set = { {1, -7}, {-4, -12}, {6, -7}, {-2, -6} } },
	[276] = { .set = { {-4, -6}, {-3, 2}, {0, -9}, {-1, -4} } },
	[277] = { .set = { {-4, -6}, {-3, 2}, {1, -8}, {-1, -4} } },
	[278] = { .set = { {3, -6}, {2, 2}, {-1, -9}, {0, -4} } },
	[279] = { .set = { {3, -6}, {2, 2}, {-2, -8}, {0, -4} } },
	[280] = { .set = { {-4, -6}, {-3, 2}, {0, -9}, {-1, -4} } },
	[281] = { .set = { {-4, -6}, {-3, 2}, {1, -8}, {-1, -4} } },
	[282] = { .set = { {3, -6}, {2, 2}, {-1, -9}, {0, -4} } },
	[283] = { .set = { {3, -6}, {2, 2}, {-2, -8}, {0, -4} } },
};

static const ax_anim *const sMachopAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02606),
	AX_ANIM_PTR(gAxSharedAnim_02682),
	AX_ANIM_PTR(gAxSharedAnim_02691),
	AX_ANIM_PTR(gAxSharedAnim_02701),
	AX_ANIM_PTR(gAxSharedAnim_02618),
	AX_ANIM_PTR(gAxSharedAnim_02641),
	AX_ANIM_PTR(gAxSharedAnim_02654),
	AX_ANIM_PTR(gAxSharedAnim_02663),
};

static const ax_anim *const sMachopAnimTable2[] = {
	AX_ANIM_PTR(sMachopAnims_2_1),
	AX_ANIM_PTR(sMachopAnims_2_2),
	AX_ANIM_PTR(sMachopAnims_2_3),
	AX_ANIM_PTR(sMachopAnims_2_4),
	AX_ANIM_PTR(sMachopAnims_2_5),
	AX_ANIM_PTR(sMachopAnims_2_6),
	AX_ANIM_PTR(sMachopAnims_2_7),
	AX_ANIM_PTR(sMachopAnims_2_8),
};

static const ax_anim *const sMachopAnimTable3[] = {
	AX_ANIM_PTR(sMachopAnims_3_1),
	AX_ANIM_PTR(sMachopAnims_3_2),
	AX_ANIM_PTR(sMachopAnims_3_3),
	AX_ANIM_PTR(sMachopAnims_3_4),
	AX_ANIM_PTR(sMachopAnims_3_5),
	AX_ANIM_PTR(sMachopAnims_3_6),
	AX_ANIM_PTR(sMachopAnims_3_7),
	AX_ANIM_PTR(sMachopAnims_3_8),
};

static const ax_anim *const sMachopAnimTable4[] = {
	AX_ANIM_PTR(sMachopAnims_4_1),
	AX_ANIM_PTR(sMachopAnims_4_2),
	AX_ANIM_PTR(sMachopAnims_4_3),
	AX_ANIM_PTR(sMachopAnims_4_4),
	AX_ANIM_PTR(sMachopAnims_4_5),
	AX_ANIM_PTR(sMachopAnims_4_6),
	AX_ANIM_PTR(sMachopAnims_4_7),
	AX_ANIM_PTR(sMachopAnims_4_8),
};

static const ax_anim *const sMachopAnimTable5[] = {
	AX_ANIM_PTR(sMachopAnims_5_1),
	AX_ANIM_PTR(sMachopAnims_5_2),
	AX_ANIM_PTR(sMachopAnims_5_3),
	AX_ANIM_PTR(sMachopAnims_5_4),
	AX_ANIM_PTR(sMachopAnims_5_5),
	AX_ANIM_PTR(sMachopAnims_5_6),
	AX_ANIM_PTR(sMachopAnims_5_7),
	AX_ANIM_PTR(sMachopAnims_5_8),
};

static const ax_anim *const sMachopAnimTable6[] = {
	AX_ANIM_PTR(sMachopAnims_6_1),
	AX_ANIM_PTR(sMachopAnims_6_1),
	AX_ANIM_PTR(sMachopAnims_6_1),
	AX_ANIM_PTR(sMachopAnims_6_1),
	AX_ANIM_PTR(sMachopAnims_6_1),
	AX_ANIM_PTR(sMachopAnims_6_1),
	AX_ANIM_PTR(sMachopAnims_6_1),
	AX_ANIM_PTR(sMachopAnims_6_1),
};

static const ax_anim *const sMachopAnimTable7[] = {
	AX_ANIM_PTR(sMachopAnims_7_1),
	AX_ANIM_PTR(sMachopAnims_7_2),
	AX_ANIM_PTR(sMachopAnims_7_3),
	AX_ANIM_PTR(sMachopAnims_7_4),
	AX_ANIM_PTR(sMachopAnims_7_5),
	AX_ANIM_PTR(sMachopAnims_7_6),
	AX_ANIM_PTR(sMachopAnims_7_7),
	AX_ANIM_PTR(sMachopAnims_7_8),
};

static const ax_anim *const sMachopAnimTable8[] = {
	AX_ANIM_PTR(sMachopAnims_8_1),
	AX_ANIM_PTR(sMachopAnims_8_2),
	AX_ANIM_PTR(sMachopAnims_8_3),
	AX_ANIM_PTR(sMachopAnims_8_4),
	AX_ANIM_PTR(sMachopAnims_8_5),
	AX_ANIM_PTR(sMachopAnims_8_6),
	AX_ANIM_PTR(sMachopAnims_8_7),
	AX_ANIM_PTR(sMachopAnims_8_8),
};

static const ax_anim *const sMachopAnimTable9[] = {
	AX_ANIM_PTR(sMachopAnims_9_1),
	AX_ANIM_PTR(sMachopAnims_9_2),
	AX_ANIM_PTR(sMachopAnims_9_3),
	AX_ANIM_PTR(sMachopAnims_9_4),
	AX_ANIM_PTR(sMachopAnims_9_5),
	AX_ANIM_PTR(sMachopAnims_9_6),
	AX_ANIM_PTR(sMachopAnims_9_7),
	AX_ANIM_PTR(sMachopAnims_9_8),
};

static const ax_anim *const sMachopAnimTable10[] = {
	AX_ANIM_PTR(sMachopAnims_10_1),
	AX_ANIM_PTR(sMachopAnims_10_2),
	AX_ANIM_PTR(sMachopAnims_10_3),
	AX_ANIM_PTR(sMachopAnims_10_4),
	AX_ANIM_PTR(gAxSharedAnim_00966),
	AX_ANIM_PTR(gAxSharedAnim_00979),
	AX_ANIM_PTR(gAxSharedAnim_00994),
	AX_ANIM_PTR(gAxSharedAnim_01015),
};

static const ax_anim *const sMachopAnimTable11[] = {
	AX_ANIM_PTR(sMachopAnims_11_1),
	AX_ANIM_PTR(sMachopAnims_11_2),
	AX_ANIM_PTR(sMachopAnims_11_3),
	AX_ANIM_PTR(sMachopAnims_11_4),
	AX_ANIM_PTR(sMachopAnims_11_5),
	AX_ANIM_PTR(sMachopAnims_11_6),
	AX_ANIM_PTR(gAxSharedAnim_01276),
	AX_ANIM_PTR(gAxSharedAnim_01312),
};

static const ax_anim *const sMachopAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01351),
	AX_ANIM_PTR(sMachopAnims_12_2),
	AX_ANIM_PTR(sMachopAnims_12_3),
	AX_ANIM_PTR(sMachopAnims_12_4),
	AX_ANIM_PTR(gAxSharedAnim_01390),
	AX_ANIM_PTR(gAxSharedAnim_01378),
	AX_ANIM_PTR(gAxSharedAnim_01362),
	AX_ANIM_PTR(gAxSharedAnim_01352),
};

static const ax_anim *const sMachopAnimTable13[] = {
	AX_ANIM_PTR(sMachopAnims_13_1),
	AX_ANIM_PTR(sMachopAnims_13_2),
	AX_ANIM_PTR(sMachopAnims_13_3),
	AX_ANIM_PTR(sMachopAnims_13_4),
	AX_ANIM_PTR(sMachopAnims_13_5),
	AX_ANIM_PTR(sMachopAnims_13_6),
	AX_ANIM_PTR(sMachopAnims_13_7),
	AX_ANIM_PTR(sMachopAnims_13_8),
};

static const ax_anim *const sMachopAnimTable14[] = {
	AX_ANIM_PTR(sMachopAnims_14_1),
	AX_ANIM_PTR(sMachopAnims_14_1),
	AX_ANIM_PTR(sMachopAnims_14_1),
	AX_ANIM_PTR(sMachopAnims_14_1),
	AX_ANIM_PTR(sMachopAnims_14_1),
	AX_ANIM_PTR(sMachopAnims_14_1),
	AX_ANIM_PTR(sMachopAnims_14_1),
	AX_ANIM_PTR(sMachopAnims_14_1),
};

static const ax_anim *const sMachopAnimTable15[] = {
	AX_ANIM_PTR(sMachopAnims_15_1),
	AX_ANIM_PTR(sMachopAnims_15_1),
	AX_ANIM_PTR(sMachopAnims_15_1),
	AX_ANIM_PTR(sMachopAnims_15_1),
	AX_ANIM_PTR(sMachopAnims_15_1),
	AX_ANIM_PTR(sMachopAnims_15_1),
	AX_ANIM_PTR(sMachopAnims_15_1),
	AX_ANIM_PTR(sMachopAnims_15_1),
};

static const ax_anim *const sMachopAnimTable16[] = {
	AX_ANIM_PTR(sMachopAnims_16_1),
	AX_ANIM_PTR(sMachopAnims_16_1),
	AX_ANIM_PTR(sMachopAnims_16_1),
	AX_ANIM_PTR(sMachopAnims_16_1),
	AX_ANIM_PTR(sMachopAnims_16_1),
	AX_ANIM_PTR(sMachopAnims_16_1),
	AX_ANIM_PTR(sMachopAnims_16_1),
	AX_ANIM_PTR(sMachopAnims_16_1),
};

static const ax_anim *const sMachopAnimTable17[] = {
	AX_ANIM_PTR(sMachopAnims_17_1),
	AX_ANIM_PTR(sMachopAnims_17_1),
	AX_ANIM_PTR(sMachopAnims_17_1),
	AX_ANIM_PTR(sMachopAnims_17_1),
	AX_ANIM_PTR(sMachopAnims_17_1),
	AX_ANIM_PTR(sMachopAnims_17_1),
	AX_ANIM_PTR(sMachopAnims_17_1),
	AX_ANIM_PTR(sMachopAnims_17_1),
};

static const ax_anim *const sMachopAnimTable18[] = {
	AX_ANIM_PTR(sMachopAnims_18_1),
	AX_ANIM_PTR(sMachopAnims_18_1),
	AX_ANIM_PTR(sMachopAnims_18_1),
	AX_ANIM_PTR(sMachopAnims_18_1),
	AX_ANIM_PTR(sMachopAnims_18_5),
	AX_ANIM_PTR(sMachopAnims_18_1),
	AX_ANIM_PTR(sMachopAnims_18_1),
	AX_ANIM_PTR(sMachopAnims_18_1),
};

static const ax_anim *const sMachopAnimTable19[] = {
	AX_ANIM_PTR(sMachopAnims_19_1),
	AX_ANIM_PTR(sMachopAnims_19_1),
	AX_ANIM_PTR(sMachopAnims_19_1),
	AX_ANIM_PTR(sMachopAnims_19_1),
	AX_ANIM_PTR(sMachopAnims_19_1),
	AX_ANIM_PTR(sMachopAnims_19_1),
	AX_ANIM_PTR(sMachopAnims_19_1),
	AX_ANIM_PTR(sMachopAnims_19_1),
};

static const ax_anim *const sMachopAnimTable20[] = {
	AX_ANIM_PTR(sMachopAnims_20_1),
	AX_ANIM_PTR(sMachopAnims_20_2),
	AX_ANIM_PTR(sMachopAnims_20_2),
	AX_ANIM_PTR(sMachopAnims_20_2),
	AX_ANIM_PTR(sMachopAnims_20_2),
	AX_ANIM_PTR(sMachopAnims_20_2),
	AX_ANIM_PTR(sMachopAnims_20_2),
	AX_ANIM_PTR(sMachopAnims_20_2),
};

static const ax_anim *const sMachopAnimTable21[] = {
	AX_ANIM_PTR(sMachopAnims_21_1),
	AX_ANIM_PTR(sMachopAnims_21_1),
	AX_ANIM_PTR(sMachopAnims_21_1),
	AX_ANIM_PTR(sMachopAnims_21_1),
	AX_ANIM_PTR(sMachopAnims_21_1),
	AX_ANIM_PTR(sMachopAnims_21_1),
	AX_ANIM_PTR(sMachopAnims_21_1),
	AX_ANIM_PTR(sMachopAnims_21_1),
};

static const ax_anim *const sMachopAnimTable22[] = {
	AX_ANIM_PTR(sMachopAnims_22_1),
	AX_ANIM_PTR(sMachopAnims_22_1),
	AX_ANIM_PTR(sMachopAnims_22_1),
	AX_ANIM_PTR(sMachopAnims_22_1),
	AX_ANIM_PTR(sMachopAnims_22_1),
	AX_ANIM_PTR(sMachopAnims_22_1),
	AX_ANIM_PTR(sMachopAnims_22_1),
	AX_ANIM_PTR(sMachopAnims_22_1),
};

static const ax_anim *const sMachopAnimTable23[] = {
	AX_ANIM_PTR(sMachopAnims_23_1),
	AX_ANIM_PTR(sMachopAnims_23_1),
	AX_ANIM_PTR(sMachopAnims_23_3),
	AX_ANIM_PTR(sMachopAnims_23_1),
	AX_ANIM_PTR(sMachopAnims_23_1),
	AX_ANIM_PTR(sMachopAnims_23_1),
	AX_ANIM_PTR(sMachopAnims_23_1),
	AX_ANIM_PTR(sMachopAnims_23_1),
};

static const ax_anim *const sMachopAnimTable24[] = {
	AX_ANIM_PTR(sMachopAnims_24_1),
	AX_ANIM_PTR(sMachopAnims_24_1),
	AX_ANIM_PTR(sMachopAnims_24_1),
	AX_ANIM_PTR(sMachopAnims_24_1),
	AX_ANIM_PTR(sMachopAnims_24_1),
	AX_ANIM_PTR(sMachopAnims_24_1),
	AX_ANIM_PTR(sMachopAnims_24_1),
	AX_ANIM_PTR(sMachopAnims_24_1),
};

static const ax_anim *const sMachopAnimTable25[] = {
	AX_ANIM_PTR(sMachopAnims_25_1),
	AX_ANIM_PTR(sMachopAnims_25_1),
	AX_ANIM_PTR(sMachopAnims_25_1),
	AX_ANIM_PTR(sMachopAnims_25_1),
	AX_ANIM_PTR(sMachopAnims_25_1),
	AX_ANIM_PTR(sMachopAnims_25_1),
	AX_ANIM_PTR(sMachopAnims_25_7),
	AX_ANIM_PTR(sMachopAnims_25_7),
};

static const ax_anim *const sMachopAnimTable26[] = {
	AX_ANIM_PTR(sMachopAnims_26_1),
	AX_ANIM_PTR(sMachopAnims_26_1),
	AX_ANIM_PTR(sMachopAnims_26_1),
	AX_ANIM_PTR(sMachopAnims_26_1),
	AX_ANIM_PTR(sMachopAnims_26_1),
	AX_ANIM_PTR(sMachopAnims_26_1),
	AX_ANIM_PTR(sMachopAnims_26_1),
	AX_ANIM_PTR(sMachopAnims_26_1),
};

static const ax_anim *const sMachopAnimTable27[] = {
	AX_ANIM_PTR(sMachopAnims_27_1),
	AX_ANIM_PTR(sMachopAnims_27_1),
	AX_ANIM_PTR(sMachopAnims_27_1),
	AX_ANIM_PTR(sMachopAnims_27_1),
	AX_ANIM_PTR(sMachopAnims_27_1),
	AX_ANIM_PTR(sMachopAnims_27_1),
	AX_ANIM_PTR(sMachopAnims_27_1),
	AX_ANIM_PTR(sMachopAnims_27_1),
};

static const ax_anim *const sMachopAnimTable28[] = {
	AX_ANIM_PTR(sMachopAnims_28_1),
	AX_ANIM_PTR(sMachopAnims_28_1),
	AX_ANIM_PTR(sMachopAnims_28_3),
	AX_ANIM_PTR(sMachopAnims_28_1),
	AX_ANIM_PTR(sMachopAnims_28_1),
	AX_ANIM_PTR(sMachopAnims_28_1),
	AX_ANIM_PTR(sMachopAnims_28_1),
	AX_ANIM_PTR(sMachopAnims_28_1),
};

static const ax_anim *const *const sAxAnimationsMachop[] = {
	sMachopAnimTable1,
	sMachopAnimTable2,
	sMachopAnimTable3,
	sMachopAnimTable4,
	sMachopAnimTable5,
	sMachopAnimTable6,
	sMachopAnimTable7,
	sMachopAnimTable8,
	sMachopAnimTable9,
	sMachopAnimTable10,
	sMachopAnimTable11,
	sMachopAnimTable12,
	sMachopAnimTable13,
	sMachopAnimTable14,
	sMachopAnimTable15,
	sMachopAnimTable16,
	sMachopAnimTable17,
	sMachopAnimTable18,
	sMachopAnimTable19,
	sMachopAnimTable20,
	sMachopAnimTable21,
	sMachopAnimTable22,
	sMachopAnimTable23,
	sMachopAnimTable24,
	sMachopAnimTable25,
	sMachopAnimTable26,
	sMachopAnimTable27,
	sMachopAnimTable28,
};

static const ax_sprite *const sAxSpritesMachop[] = {
	sMachopSprites1,
	sMachopSprites2,
	sMachopSprites3,
	sMachopSprites4,
	sMachopSprites5,
	sMachopSprites6,
	sMachopSprites7,
	sMachopSprites8,
	sMachopSprites9,
	sMachopSprites10,
	sMachopSprites11,
	sMachopSprites12,
	sMachopSprites13,
	sMachopSprites14,
	sMachopSprites15,
	sMachopSprites16,
	sMachopSprites17,
	sMachopSprites18,
	sMachopSprites19,
	sMachopSprites20,
	sMachopSprites21,
	sMachopSprites22,
	sMachopSprites23,
	sMachopSprites24,
	sMachopSprites25,
	sMachopSprites26,
	sMachopSprites27,
	sMachopSprites28,
	sMachopSprites29,
	sMachopSprites30,
	sMachopSprites31,
	sMachopSprites32,
	sMachopSprites33,
	sMachopSprites34,
	sMachopSprites35,
	sMachopSprites36,
	sMachopSprites37,
	sMachopSprites38,
	sMachopSprites39,
	sMachopSprites40,
	sMachopSprites41,
	sMachopSprites42,
	sMachopSprites43,
	sMachopSprites44,
	sMachopSprites45,
	sMachopSprites46,
	sMachopSprites47,
	sMachopSprites48,
	sMachopSprites49,
	sMachopSprites50,
	sMachopSprites51,
	sMachopSprites52,
	sMachopSprites53,
	sMachopSprites54,
	sMachopSprites55,
	sMachopSprites56,
	sMachopSprites57,
	sMachopSprites58,
	sMachopSprites59,
	sMachopSprites60,
	sMachopSprites61,
	sMachopSprites62,
	sMachopSprites63,
	sMachopSprites64,
	sMachopSprites65,
	sMachopSprites66,
	sMachopSprites67,
	sMachopSprites68,
	sMachopSprites69,
	sMachopSprites70,
	sMachopSprites71,
	sMachopSprites72,
	sMachopSprites73,
	sMachopSprites74,
	sMachopSprites75,
	sMachopSprites76,
	sMachopSprites77,
	sMachopSprites78,
	sMachopSprites79,
	sMachopSprites80,
	sMachopSprites81,
	sMachopSprites82,
};

static const axmain sAxMainMachop = {
	.poses = sAxPosesMachop,
	.animations = sAxAnimationsMachop,
	.animCount = ARRAY_COUNT(sAxAnimationsMachop),
	.spriteData = sAxSpritesMachop,
	.positions = sAxPositionsMachop,
};
