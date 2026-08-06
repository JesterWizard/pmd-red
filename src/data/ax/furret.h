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
static const axmain sAxMainFurret;
const SiroArchive gAxFurret = {"SIRO", &sAxMainFurret};

static const ax_pose sFurretPose1[] = {
	AX_POSE(0, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose2[] = {
	AX_POSE(1, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose3[] = {
	AX_POSE(2, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(3, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose4[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose5[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose6[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose7[] = {
	AX_POSE(7, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(14, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(8, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(2, 3, 4)),
	AX_POSE(9, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(10, 3, 4)),
	AX_POSE(10, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose8[] = {
	AX_POSE(11, OAM1(246, ST_OAM_V_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(12, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(2, 3, 4)),
	AX_POSE(13, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(10, 3, 4)),
	AX_POSE(14, OAM1(246, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose9[] = {
	AX_POSE(15, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(16, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(2, 3, 4)),
	AX_POSE(17, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(10, 3, 4)),
	AX_POSE(18, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose10[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose11[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose12[] = {
	AX_POSE(21, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(15, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(22, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(2, 3, 4)),
	AX_POSE(23, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(10, 3, 4)),
	AX_POSE(24, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose13[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose14[] = {
	AX_POSE(26, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(27, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 4)),
	AX_POSE(28, OAM1(6, ST_OAM_SQUARE     , 2), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose15[] = {
	AX_POSE(29, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose16[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose17[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose18[] = {
	AX_POSE(21, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(22, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 4)),
	AX_POSE(23, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(10, 3, 4)),
	AX_POSE(24, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose19[] = {
	AX_POSE(7, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(8, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 4)),
	AX_POSE(9, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(10, 3, 4)),
	AX_POSE(10, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose20[] = {
	AX_POSE(11, OAM1(246, ST_OAM_V_RECTANGLE, 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(12, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 4)),
	AX_POSE(13, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(10, 3, 4)),
	AX_POSE(14, OAM1(246, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose21[] = {
	AX_POSE(30, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(16, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 4)),
	AX_POSE(17, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(9, 3, 4)),
	AX_POSE(18, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose22[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose23[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose24[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose28[] = {
	AX_POSE(31, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose31[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose32[] = {
	AX_POSE(32, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose33[] = {
	AX_POSE(7, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(12, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(8, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(2, 3, 4)),
	AX_POSE(9, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(10, 3, 4)),
	AX_POSE(10, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose34[] = {
	AX_POSE(11, OAM1(246, ST_OAM_V_RECTANGLE, 1), OAM2(230, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(12, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(2, 3, 4)),
	AX_POSE(13, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(10, 3, 4)),
	AX_POSE(14, OAM1(246, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose35[] = {
	AX_POSE(15, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(16, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(2, 3, 4)),
	AX_POSE(17, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(10, 3, 4)),
	AX_POSE(18, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose36[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose39[] = {
	AX_POSE(21, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(11, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(22, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(2, 3, 4)),
	AX_POSE(23, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(10, 3, 4)),
	AX_POSE(24, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose40[] = {
	AX_POSE(34, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose44[] = {
	AX_POSE(35, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose47[] = {
	AX_POSE(21, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(22, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 4)),
	AX_POSE(23, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(10, 3, 4)),
	AX_POSE(24, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose48[] = {
	AX_POSE(34, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose49[] = {
	AX_POSE(7, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(8, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 4)),
	AX_POSE(9, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(10, 3, 4)),
	AX_POSE(10, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(12, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose50[] = {
	AX_POSE(11, OAM1(246, ST_OAM_V_RECTANGLE, 1), OAM2(18, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(12, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 4)),
	AX_POSE(13, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(10, 3, 4)),
	AX_POSE(14, OAM1(246, ST_OAM_V_RECTANGLE, 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose51[] = {
	AX_POSE(15, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(11, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(16, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 4)),
	AX_POSE(17, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(10, 3, 4)),
	AX_POSE(18, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose52[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose55[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose56[] = {
	AX_POSE(32, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose58[] = {
	AX_POSE(36, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose59[] = {
	AX_POSE(37, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(38, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(39, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(12, 3, 4)),
	AX_POSE(40, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose60[] = {
	AX_POSE(40, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose62[] = {
	AX_POSE(41, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose63[] = {
	AX_POSE(42, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(43, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE(44, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(24, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose64[] = {
	AX_POSE(42, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose66[] = {
	AX_POSE(45, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose67[] = {
	AX_POSE(46, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(47, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(4, 3, 4)),
	AX_POSE(48, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(49, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(24, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose68[] = {
	AX_POSE(48, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose70[] = {
	AX_POSE(50, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose71[] = {
	AX_POSE(51, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(52, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(4, 3, 4)),
	AX_POSE(53, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(5, 3, 4)),
	AX_POSE(54, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(6, 3, 4)),
	AX_POSE(55, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(10, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(22, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose72[] = {
	AX_POSE(54, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose74[] = {
	AX_POSE(56, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose75[] = {
	AX_POSE(57, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(58, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose76[] = {
	AX_POSE(58, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose78[] = {
	AX_POSE(50, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose79[] = {
	AX_POSE(51, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(52, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 4)),
	AX_POSE(53, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(5, 3, 4)),
	AX_POSE(54, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(6, 3, 4)),
	AX_POSE(55, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(22, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose80[] = {
	AX_POSE(54, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose82[] = {
	AX_POSE(45, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose83[] = {
	AX_POSE(46, OAM1(249, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(48, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 4)),
	AX_POSE(47, OAM1(249, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(20, 3, 4)),
	AX_POSE(49, OAM1(249, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(24, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose84[] = {
	AX_POSE(48, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose86[] = {
	AX_POSE(41, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose87[] = {
	AX_POSE(42, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(43, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE(44, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(17, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(24, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose88[] = {
	AX_POSE(42, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose92[] = {
	AX_POSE(59, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(60, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose93[] = {
	AX_POSE(61, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(60, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose95[] = {
	AX_POSE(62, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose99[] = {
	AX_POSE(63, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose100[] = {
	AX_POSE(64, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose102[] = {
	AX_POSE(65, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose106[] = {
	AX_POSE(66, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(67, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(68, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose107[] = {
	AX_POSE(69, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(68, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose109[] = {
	AX_POSE(70, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose113[] = {
	AX_POSE(71, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose114[] = {
	AX_POSE(72, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose115[] = {
	AX_POSE(34, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose116[] = {
	AX_POSE(73, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose120[] = {
	AX_POSE(74, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose121[] = {
	AX_POSE(75, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose123[] = {
	AX_POSE(76, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose127[] = {
	AX_POSE(71, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose128[] = {
	AX_POSE(72, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose129[] = {
	AX_POSE(34, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose130[] = {
	AX_POSE(73, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose134[] = {
	AX_POSE(66, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(67, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(68, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose135[] = {
	AX_POSE(69, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(68, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose137[] = {
	AX_POSE(70, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose141[] = {
	AX_POSE(63, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose142[] = {
	AX_POSE(64, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose144[] = {
	AX_POSE(65, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose150[] = {
	AX_POSE(31, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose157[] = {
	AX_POSE(32, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose171[] = {
	AX_POSE(34, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose185[] = {
	AX_POSE(34, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose199[] = {
	AX_POSE(32, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose201[] = {
	AX_POSE(77, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose202[] = {
	AX_POSE(78, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose203[] = {
	AX_POSE(79, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose204[] = {
	AX_POSE(80, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose205[] = {
	AX_POSE(81, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose206[] = {
	AX_POSE(82, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose207[] = {
	AX_POSE(83, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose208[] = {
	AX_POSE(82, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose209[] = {
	AX_POSE(81, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose210[] = {
	AX_POSE(80, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose227[] = {
	AX_POSE(31, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose228[] = {
	AX_POSE(32, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose229[] = {
	AX_POSE(33, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose230[] = {
	AX_POSE(34, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose231[] = {
	AX_POSE(35, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose232[] = {
	AX_POSE(34, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose233[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose234[] = {
	AX_POSE(32, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose236[] = {
	AX_POSE(31, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose239[] = {
	AX_POSE(32, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose240[] = {
	AX_POSE(63, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose242[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose243[] = {
	AX_POSE(66, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(67, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(68, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(230, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose246[] = {
	AX_POSE(71, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose248[] = {
	AX_POSE(35, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose249[] = {
	AX_POSE(74, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose252[] = {
	AX_POSE(71, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose254[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose255[] = {
	AX_POSE(66, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(67, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 4)),
	AX_POSE(68, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(18, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose257[] = {
	AX_POSE(32, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose258[] = {
	AX_POSE(63, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose260[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose262[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose263[] = {
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose264[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose266[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose267[] = {
	AX_POSE(62, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose268[] = {
	AX_POSE(65, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose270[] = {
	AX_POSE(73, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose271[] = {
	AX_POSE(76, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose272[] = {
	AX_POSE(73, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFurretPose274[] = {
	AX_POSE(65, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const u8 sFurretAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_1_1.lz");
static const u8 sFurretAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_1_2.lz");
static const u8 sFurretAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_1_3.lz");
static const u8 sFurretAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_1_4.lz");
static const u8 sFurretAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_1_5.lz");
static const u8 sFurretAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_1_6.lz");
static const u8 sFurretAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_1_7.lz");
static const u8 sFurretAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_1_8.lz");
static const u8 sFurretAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_2_1.lz");
static const u8 sFurretAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_2_2.lz");
static const u8 sFurretAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_2_3.lz");
static const u8 sFurretAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_2_4.lz");
static const u8 sFurretAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_2_5.lz");
static const u8 sFurretAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_2_6.lz");
static const u8 sFurretAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_2_7.lz");
static const u8 sFurretAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_2_8.lz");
static const u8 sFurretAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_3_1.lz");
static const u8 sFurretAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_3_2.lz");
static const u8 sFurretAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_3_3.lz");
static const u8 sFurretAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_3_4.lz");
static const u8 sFurretAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_3_5.lz");
static const u8 sFurretAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_3_6.lz");
static const u8 sFurretAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_3_7.lz");
static const u8 sFurretAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_3_8.lz");
static const u8 sFurretAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_4_1.lz");
static const u8 sFurretAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_4_2.lz");
static const u8 sFurretAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_4_3.lz");
static const u8 sFurretAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_4_4.lz");
static const u8 sFurretAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_4_5.lz");
static const u8 sFurretAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_4_6.lz");
static const u8 sFurretAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_4_7.lz");
static const u8 sFurretAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_4_8.lz");
static const u8 sFurretAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_5_1.lz");
static const u8 sFurretAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_5_2.lz");
static const u8 sFurretAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_5_3.lz");
static const u8 sFurretAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_5_4.lz");
static const u8 sFurretAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_5_5.lz");
static const u8 sFurretAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_5_6.lz");
static const u8 sFurretAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_5_7.lz");
static const u8 sFurretAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_5_8.lz");
static const u8 sFurretAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_8_1.lz");
static const u8 sFurretAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_8_2.lz");
static const u8 sFurretAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_8_3.lz");
static const u8 sFurretAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_8_4.lz");
static const u8 sFurretAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_8_5.lz");
static const u8 sFurretAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_8_6.lz");
static const u8 sFurretAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_8_7.lz");
static const u8 sFurretAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_8_8.lz");
static const u8 sFurretAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_9_1.lz");
static const u8 sFurretAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_9_2.lz");
static const u8 sFurretAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_9_3.lz");
static const u8 sFurretAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_9_4.lz");
static const u8 sFurretAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_9_5.lz");
static const u8 sFurretAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_9_6.lz");
static const u8 sFurretAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_9_7.lz");
static const u8 sFurretAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_9_8.lz");
static const u8 sFurretAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_11_1.lz");
static const u8 sFurretAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_11_2.lz");
static const u8 sFurretAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_11_3.lz");
static const u8 sFurretAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_11_4.lz");
static const u8 sFurretAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_11_5.lz");
static const u8 sFurretAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_11_6.lz");
static const u8 sFurretAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_11_7.lz");
static const u8 sFurretAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/furret/sFurretAnims_11_8.lz");

static const u8 sFurretGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_1.4bpp.lz");
static const ax_sprite sFurretSprites1[] = {
	{sFurretGfx1, ARRAY_COUNT(sFurretGfx1)}, 
	{NULL, 0}
};
static const u8 sFurretGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_2.4bpp.lz");
static const ax_sprite sFurretSprites2[] = {
	{sFurretGfx2, ARRAY_COUNT(sFurretGfx2)}, 
	{NULL, 0}
};
static const u8 sFurretGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_3.4bpp.lz");
static const ax_sprite sFurretSprites3[] = {
	{sFurretGfx3, ARRAY_COUNT(sFurretGfx3)}, 
	{NULL, 0}
};
static const u8 sFurretGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_4.4bpp.lz");
static const ax_sprite sFurretSprites4[] = {
	{sFurretGfx4, ARRAY_COUNT(sFurretGfx4)}, 
	{NULL, 0}
};
static const u8 sFurretGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_5.4bpp.lz");
static const ax_sprite sFurretSprites5[] = {
	{sFurretGfx5, ARRAY_COUNT(sFurretGfx5)}, 
	{NULL, 0}
};
static const u8 sFurretGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_6.4bpp.lz");
static const ax_sprite sFurretSprites6[] = {
	{sFurretGfx6, ARRAY_COUNT(sFurretGfx6)}, 
	{NULL, 0}
};
static const u8 sFurretGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_7.4bpp.lz");
static const ax_sprite sFurretSprites7[] = {
	{sFurretGfx7, ARRAY_COUNT(sFurretGfx7)}, 
	{NULL, 0}
};
static const u8 sFurretGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_8.4bpp.lz");
static const ax_sprite sFurretSprites8[] = {
	{sFurretGfx8, ARRAY_COUNT(sFurretGfx8)}, 
	{NULL, 0}
};
static const u8 sFurretGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_9.4bpp.lz");
static const ax_sprite sFurretSprites9[] = {
	{sFurretGfx9, ARRAY_COUNT(sFurretGfx9)}, 
	{NULL, 0}
};
static const u8 sFurretGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_10.4bpp.lz");
static const ax_sprite sFurretSprites10[] = {
	{sFurretGfx10, ARRAY_COUNT(sFurretGfx10)}, 
	{NULL, 0}
};
static const u8 sFurretGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_11.4bpp.lz");
static const ax_sprite sFurretSprites11[] = {
	{sFurretGfx11, ARRAY_COUNT(sFurretGfx11)}, 
	{NULL, 0}
};
static const u8 sFurretGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_12.4bpp.lz");
static const ax_sprite sFurretSprites12[] = {
	{sFurretGfx12, ARRAY_COUNT(sFurretGfx12)}, 
	{NULL, 0}
};
static const u8 sFurretGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_13.4bpp.lz");
static const ax_sprite sFurretSprites13[] = {
	{sFurretGfx13, ARRAY_COUNT(sFurretGfx13)}, 
	{NULL, 0}
};
static const u8 sFurretGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_14.4bpp.lz");
static const ax_sprite sFurretSprites14[] = {
	{sFurretGfx14, ARRAY_COUNT(sFurretGfx14)}, 
	{NULL, 0}
};
static const u8 sFurretGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_15.4bpp.lz");
static const ax_sprite sFurretSprites15[] = {
	{sFurretGfx15, ARRAY_COUNT(sFurretGfx15)}, 
	{NULL, 0}
};
static const u8 sFurretGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_16.4bpp.lz");
static const ax_sprite sFurretSprites16[] = {
	{sFurretGfx16, ARRAY_COUNT(sFurretGfx16)}, 
	{NULL, 0}
};
static const u8 sFurretGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_17.4bpp.lz");
static const ax_sprite sFurretSprites17[] = {
	{sFurretGfx17, ARRAY_COUNT(sFurretGfx17)}, 
	{NULL, 0}
};
static const u8 sFurretGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_18.4bpp.lz");
static const ax_sprite sFurretSprites18[] = {
	{sFurretGfx18, ARRAY_COUNT(sFurretGfx18)}, 
	{NULL, 0}
};
static const u8 sFurretGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_19.4bpp.lz");
static const ax_sprite sFurretSprites19[] = {
	{sFurretGfx19, ARRAY_COUNT(sFurretGfx19)}, 
	{NULL, 0}
};
static const u8 sFurretGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_20.4bpp.lz");
static const ax_sprite sFurretSprites20[] = {
	{sFurretGfx20, ARRAY_COUNT(sFurretGfx20)}, 
	{NULL, 0}
};
static const u8 sFurretGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_21.4bpp.lz");
static const ax_sprite sFurretSprites21[] = {
	{sFurretGfx21, ARRAY_COUNT(sFurretGfx21)}, 
	{NULL, 0}
};
static const u8 sFurretGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_22.4bpp.lz");
static const ax_sprite sFurretSprites22[] = {
	{sFurretGfx22, ARRAY_COUNT(sFurretGfx22)}, 
	{NULL, 0}
};
static const u8 sFurretGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_23.4bpp.lz");
static const ax_sprite sFurretSprites23[] = {
	{sFurretGfx23, ARRAY_COUNT(sFurretGfx23)}, 
	{NULL, 0}
};
static const u8 sFurretGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_24.4bpp.lz");
static const ax_sprite sFurretSprites24[] = {
	{sFurretGfx24, ARRAY_COUNT(sFurretGfx24)}, 
	{NULL, 0}
};
static const u8 sFurretGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_25.4bpp.lz");
static const ax_sprite sFurretSprites25[] = {
	{sFurretGfx25, ARRAY_COUNT(sFurretGfx25)}, 
	{NULL, 0}
};
static const u8 sFurretGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_26.4bpp.lz");
static const ax_sprite sFurretSprites26[] = {
	{sFurretGfx26, ARRAY_COUNT(sFurretGfx26)}, 
	{NULL, 0}
};
static const u8 sFurretGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_27.4bpp.lz");
static const ax_sprite sFurretSprites27[] = {
	{sFurretGfx27, ARRAY_COUNT(sFurretGfx27)}, 
	{NULL, 0}
};
static const u8 sFurretGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_28.4bpp.lz");
static const ax_sprite sFurretSprites28[] = {
	{sFurretGfx28, ARRAY_COUNT(sFurretGfx28)}, 
	{NULL, 0}
};
static const u8 sFurretGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_29.4bpp.lz");
static const ax_sprite sFurretSprites29[] = {
	{sFurretGfx29, ARRAY_COUNT(sFurretGfx29)}, 
	{NULL, 0}
};
static const u8 sFurretGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_30.4bpp.lz");
static const ax_sprite sFurretSprites30[] = {
	{sFurretGfx30, ARRAY_COUNT(sFurretGfx30)}, 
	{NULL, 0}
};
static const u8 sFurretGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_31.4bpp.lz");
static const ax_sprite sFurretSprites31[] = {
	{sFurretGfx31, ARRAY_COUNT(sFurretGfx31)}, 
	{NULL, 0}
};
static const u8 sFurretGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_32.4bpp.lz");
static const u8 sFurretGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_32_1.4bpp.lz");
static const u8 sFurretGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_32_2.4bpp.lz");
static const u8 sFurretGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_32_3.4bpp.lz");
static const ax_sprite sFurretSprites32[] = {
	{sFurretGfx32, ARRAY_COUNT(sFurretGfx32)}, 
	{NULL, 64}, 
	{sFurretGfx32_1, ARRAY_COUNT(sFurretGfx32_1)}, 
	{NULL, 32}, 
	{sFurretGfx32_2, ARRAY_COUNT(sFurretGfx32_2)}, 
	{NULL, 64}, 
	{sFurretGfx32_3, ARRAY_COUNT(sFurretGfx32_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sFurretGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_33.4bpp.lz");
static const u8 sFurretGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_33_1.4bpp.lz");
static const ax_sprite sFurretSprites33[] = {
	{sFurretGfx33, ARRAY_COUNT(sFurretGfx33)}, 
	{NULL, 96}, 
	{sFurretGfx33_1, ARRAY_COUNT(sFurretGfx33_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFurretGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_34.4bpp.lz");
static const u8 sFurretGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_34_1.4bpp.lz");
static const ax_sprite sFurretSprites34[] = {
	{sFurretGfx34, ARRAY_COUNT(sFurretGfx34)}, 
	{NULL, 32}, 
	{sFurretGfx34_1, ARRAY_COUNT(sFurretGfx34_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFurretGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_35.4bpp.lz");
static const u8 sFurretGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_35_1.4bpp.lz");
static const u8 sFurretGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_35_2.4bpp.lz");
static const u8 sFurretGfx35_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_35_3.4bpp.lz");
static const ax_sprite sFurretSprites35[] = {
	{sFurretGfx35, ARRAY_COUNT(sFurretGfx35)}, 
	{NULL, 64}, 
	{sFurretGfx35_1, ARRAY_COUNT(sFurretGfx35_1)}, 
	{NULL, 32}, 
	{sFurretGfx35_2, ARRAY_COUNT(sFurretGfx35_2)}, 
	{NULL, 32}, 
	{sFurretGfx35_3, ARRAY_COUNT(sFurretGfx35_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFurretGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_36.4bpp.lz");
static const ax_sprite sFurretSprites36[] = {
	{sFurretGfx36, ARRAY_COUNT(sFurretGfx36)}, 
	{NULL, 0}
};
static const u8 sFurretGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_37.4bpp.lz");
static const ax_sprite sFurretSprites37[] = {
	{sFurretGfx37, ARRAY_COUNT(sFurretGfx37)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFurretGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_38.4bpp.lz");
static const u8 sFurretGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_38_1.4bpp.lz");
static const u8 sFurretGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_38_2.4bpp.lz");
static const ax_sprite sFurretSprites38[] = {
	{sFurretGfx38, ARRAY_COUNT(sFurretGfx38)}, 
	{NULL, 32}, 
	{sFurretGfx38_1, ARRAY_COUNT(sFurretGfx38_1)}, 
	{NULL, 32}, 
	{sFurretGfx38_2, ARRAY_COUNT(sFurretGfx38_2)}, 
	{NULL, 0}
};
static const u8 sFurretGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_39.4bpp.lz");
static const ax_sprite sFurretSprites39[] = {
	{NULL, 64}, 
	{sFurretGfx39, ARRAY_COUNT(sFurretGfx39)}, 
	{NULL, 0}
};
static const u8 sFurretGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_40.4bpp.lz");
static const ax_sprite sFurretSprites40[] = {
	{NULL, 64}, 
	{sFurretGfx40, ARRAY_COUNT(sFurretGfx40)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFurretGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_41.4bpp.lz");
static const u8 sFurretGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_41_1.4bpp.lz");
static const ax_sprite sFurretSprites41[] = {
	{NULL, 128}, 
	{sFurretGfx41, ARRAY_COUNT(sFurretGfx41)}, 
	{NULL, 32}, 
	{sFurretGfx41_1, ARRAY_COUNT(sFurretGfx41_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFurretGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_42.4bpp.lz");
static const u8 sFurretGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_42_1.4bpp.lz");
static const ax_sprite sFurretSprites42[] = {
	{NULL, 32}, 
	{sFurretGfx42, ARRAY_COUNT(sFurretGfx42)}, 
	{NULL, 32}, 
	{sFurretGfx42_1, ARRAY_COUNT(sFurretGfx42_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFurretGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_43.4bpp.lz");
static const u8 sFurretGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_43_1.4bpp.lz");
static const ax_sprite sFurretSprites43[] = {
	{NULL, 160}, 
	{sFurretGfx43, ARRAY_COUNT(sFurretGfx43)}, 
	{NULL, 32}, 
	{sFurretGfx43_1, ARRAY_COUNT(sFurretGfx43_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFurretGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_44.4bpp.lz");
static const u8 sFurretGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_44_1.4bpp.lz");
static const ax_sprite sFurretSprites44[] = {
	{sFurretGfx44, ARRAY_COUNT(sFurretGfx44)}, 
	{NULL, 64}, 
	{sFurretGfx44_1, ARRAY_COUNT(sFurretGfx44_1)}, 
	{NULL, 0}
};
static const u8 sFurretGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_45.4bpp.lz");
static const ax_sprite sFurretSprites45[] = {
	{sFurretGfx45, ARRAY_COUNT(sFurretGfx45)}, 
	{NULL, 0}
};
static const u8 sFurretGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_46.4bpp.lz");
static const ax_sprite sFurretSprites46[] = {
	{NULL, 64}, 
	{sFurretGfx46, ARRAY_COUNT(sFurretGfx46)}, 
	{NULL, 0}
};
static const u8 sFurretGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_47.4bpp.lz");
static const ax_sprite sFurretSprites47[] = {
	{NULL, 64}, 
	{sFurretGfx47, ARRAY_COUNT(sFurretGfx47)}, 
	{NULL, 0}
};
static const u8 sFurretGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_48.4bpp.lz");
static const ax_sprite sFurretSprites48[] = {
	{NULL, 32}, 
	{sFurretGfx48, ARRAY_COUNT(sFurretGfx48)}, 
	{NULL, 0}
};
static const u8 sFurretGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_49.4bpp.lz");
static const u8 sFurretGfx49_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_49_1.4bpp.lz");
static const ax_sprite sFurretSprites49[] = {
	{NULL, 128}, 
	{sFurretGfx49, ARRAY_COUNT(sFurretGfx49)}, 
	{NULL, 64}, 
	{sFurretGfx49_1, ARRAY_COUNT(sFurretGfx49_1)}, 
	{NULL, 0}
};
static const u8 sFurretGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_50.4bpp.lz");
static const ax_sprite sFurretSprites50[] = {
	{sFurretGfx50, ARRAY_COUNT(sFurretGfx50)}, 
	{NULL, 0}
};
static const u8 sFurretGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_51.4bpp.lz");
static const u8 sFurretGfx51_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_51_1.4bpp.lz");
static const u8 sFurretGfx51_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_51_2.4bpp.lz");
static const ax_sprite sFurretSprites51[] = {
	{sFurretGfx51, ARRAY_COUNT(sFurretGfx51)}, 
	{NULL, 64}, 
	{sFurretGfx51_1, ARRAY_COUNT(sFurretGfx51_1)}, 
	{NULL, 64}, 
	{sFurretGfx51_2, ARRAY_COUNT(sFurretGfx51_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFurretGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_52.4bpp.lz");
static const ax_sprite sFurretSprites52[] = {
	{NULL, 64}, 
	{sFurretGfx52, ARRAY_COUNT(sFurretGfx52)}, 
	{NULL, 0}
};
static const u8 sFurretGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_53.4bpp.lz");
static const ax_sprite sFurretSprites53[] = {
	{sFurretGfx53, ARRAY_COUNT(sFurretGfx53)}, 
	{NULL, 0}
};
static const u8 sFurretGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_54.4bpp.lz");
static const ax_sprite sFurretSprites54[] = {
	{sFurretGfx54, ARRAY_COUNT(sFurretGfx54)}, 
	{NULL, 0}
};
static const u8 sFurretGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_55.4bpp.lz");
static const u8 sFurretGfx55_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_55_1.4bpp.lz");
static const u8 sFurretGfx55_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_55_2.4bpp.lz");
static const u8 sFurretGfx55_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_55_3.4bpp.lz");
static const ax_sprite sFurretSprites55[] = {
	{sFurretGfx55, ARRAY_COUNT(sFurretGfx55)}, 
	{NULL, 64}, 
	{sFurretGfx55_1, ARRAY_COUNT(sFurretGfx55_1)}, 
	{NULL, 32}, 
	{sFurretGfx55_2, ARRAY_COUNT(sFurretGfx55_2)}, 
	{NULL, 32}, 
	{sFurretGfx55_3, ARRAY_COUNT(sFurretGfx55_3)}, 
	{NULL, 0}
};
static const u8 sFurretGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_56.4bpp.lz");
static const ax_sprite sFurretSprites56[] = {
	{sFurretGfx56, ARRAY_COUNT(sFurretGfx56)}, 
	{NULL, 0}
};
static const u8 sFurretGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_57.4bpp.lz");
static const u8 sFurretGfx57_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_57_1.4bpp.lz");
static const u8 sFurretGfx57_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_57_2.4bpp.lz");
static const ax_sprite sFurretSprites57[] = {
	{sFurretGfx57, ARRAY_COUNT(sFurretGfx57)}, 
	{NULL, 64}, 
	{sFurretGfx57_1, ARRAY_COUNT(sFurretGfx57_1)}, 
	{NULL, 32}, 
	{sFurretGfx57_2, ARRAY_COUNT(sFurretGfx57_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFurretGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_58.4bpp.lz");
static const u8 sFurretGfx58_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_58_1.4bpp.lz");
static const u8 sFurretGfx58_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_58_2.4bpp.lz");
static const u8 sFurretGfx58_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_58_3.4bpp.lz");
static const ax_sprite sFurretSprites58[] = {
	{sFurretGfx58, ARRAY_COUNT(sFurretGfx58)}, 
	{NULL, 32}, 
	{sFurretGfx58_1, ARRAY_COUNT(sFurretGfx58_1)}, 
	{NULL, 96}, 
	{sFurretGfx58_2, ARRAY_COUNT(sFurretGfx58_2)}, 
	{NULL, 96}, 
	{sFurretGfx58_3, ARRAY_COUNT(sFurretGfx58_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sFurretGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_59.4bpp.lz");
static const u8 sFurretGfx59_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_59_1.4bpp.lz");
static const u8 sFurretGfx59_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_59_2.4bpp.lz");
static const u8 sFurretGfx59_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_59_3.4bpp.lz");
static const ax_sprite sFurretSprites59[] = {
	{sFurretGfx59, ARRAY_COUNT(sFurretGfx59)}, 
	{NULL, 64}, 
	{sFurretGfx59_1, ARRAY_COUNT(sFurretGfx59_1)}, 
	{NULL, 32}, 
	{sFurretGfx59_2, ARRAY_COUNT(sFurretGfx59_2)}, 
	{NULL, 32}, 
	{sFurretGfx59_3, ARRAY_COUNT(sFurretGfx59_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFurretGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_60.4bpp.lz");
static const ax_sprite sFurretSprites60[] = {
	{sFurretGfx60, ARRAY_COUNT(sFurretGfx60)}, 
	{NULL, 0}
};
static const u8 sFurretGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_61.4bpp.lz");
static const ax_sprite sFurretSprites61[] = {
	{sFurretGfx61, ARRAY_COUNT(sFurretGfx61)}, 
	{NULL, 0}
};
static const u8 sFurretGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_62.4bpp.lz");
static const ax_sprite sFurretSprites62[] = {
	{sFurretGfx62, ARRAY_COUNT(sFurretGfx62)}, 
	{NULL, 0}
};
static const u8 sFurretGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_63.4bpp.lz");
static const u8 sFurretGfx63_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_63_1.4bpp.lz");
static const u8 sFurretGfx63_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_63_2.4bpp.lz");
static const ax_sprite sFurretSprites63[] = {
	{sFurretGfx63, ARRAY_COUNT(sFurretGfx63)}, 
	{NULL, 32}, 
	{sFurretGfx63_1, ARRAY_COUNT(sFurretGfx63_1)}, 
	{NULL, 32}, 
	{sFurretGfx63_2, ARRAY_COUNT(sFurretGfx63_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFurretGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_64.4bpp.lz");
static const u8 sFurretGfx64_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_64_1.4bpp.lz");
static const ax_sprite sFurretSprites64[] = {
	{NULL, 64}, 
	{sFurretGfx64, ARRAY_COUNT(sFurretGfx64)}, 
	{NULL, 32}, 
	{sFurretGfx64_1, ARRAY_COUNT(sFurretGfx64_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFurretGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_65.4bpp.lz");
static const u8 sFurretGfx65_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_65_1.4bpp.lz");
static const ax_sprite sFurretSprites65[] = {
	{NULL, 64}, 
	{sFurretGfx65, ARRAY_COUNT(sFurretGfx65)}, 
	{NULL, 32}, 
	{sFurretGfx65_1, ARRAY_COUNT(sFurretGfx65_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFurretGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_66.4bpp.lz");
static const u8 sFurretGfx66_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_66_1.4bpp.lz");
static const u8 sFurretGfx66_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_66_2.4bpp.lz");
static const u8 sFurretGfx66_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_66_3.4bpp.lz");
static const ax_sprite sFurretSprites66[] = {
	{sFurretGfx66, ARRAY_COUNT(sFurretGfx66)}, 
	{NULL, 64}, 
	{sFurretGfx66_1, ARRAY_COUNT(sFurretGfx66_1)}, 
	{NULL, 32}, 
	{sFurretGfx66_2, ARRAY_COUNT(sFurretGfx66_2)}, 
	{NULL, 32}, 
	{sFurretGfx66_3, ARRAY_COUNT(sFurretGfx66_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sFurretGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_67.4bpp.lz");
static const ax_sprite sFurretSprites67[] = {
	{sFurretGfx67, ARRAY_COUNT(sFurretGfx67)}, 
	{NULL, 0}
};
static const u8 sFurretGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_68.4bpp.lz");
static const u8 sFurretGfx68_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_68_1.4bpp.lz");
static const ax_sprite sFurretSprites68[] = {
	{NULL, 32}, 
	{sFurretGfx68, ARRAY_COUNT(sFurretGfx68)}, 
	{NULL, 32}, 
	{sFurretGfx68_1, ARRAY_COUNT(sFurretGfx68_1)}, 
	{NULL, 0}
};
static const u8 sFurretGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_69.4bpp.lz");
static const ax_sprite sFurretSprites69[] = {
	{sFurretGfx69, ARRAY_COUNT(sFurretGfx69)}, 
	{NULL, 0}
};
static const u8 sFurretGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_70.4bpp.lz");
static const ax_sprite sFurretSprites70[] = {
	{NULL, 96}, 
	{sFurretGfx70, ARRAY_COUNT(sFurretGfx70)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFurretGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_71.4bpp.lz");
static const u8 sFurretGfx71_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_71_1.4bpp.lz");
static const u8 sFurretGfx71_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_71_2.4bpp.lz");
static const u8 sFurretGfx71_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_71_3.4bpp.lz");
static const ax_sprite sFurretSprites71[] = {
	{NULL, 32}, 
	{sFurretGfx71, ARRAY_COUNT(sFurretGfx71)}, 
	{NULL, 32}, 
	{sFurretGfx71_1, ARRAY_COUNT(sFurretGfx71_1)}, 
	{NULL, 32}, 
	{sFurretGfx71_2, ARRAY_COUNT(sFurretGfx71_2)}, 
	{NULL, 32}, 
	{sFurretGfx71_3, ARRAY_COUNT(sFurretGfx71_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFurretGfx72[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_72.4bpp.lz");
static const u8 sFurretGfx72_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_72_1.4bpp.lz");
static const ax_sprite sFurretSprites72[] = {
	{NULL, 64}, 
	{sFurretGfx72, ARRAY_COUNT(sFurretGfx72)}, 
	{NULL, 32}, 
	{sFurretGfx72_1, ARRAY_COUNT(sFurretGfx72_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFurretGfx73[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_73.4bpp.lz");
static const u8 sFurretGfx73_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_73_1.4bpp.lz");
static const ax_sprite sFurretSprites73[] = {
	{NULL, 64}, 
	{sFurretGfx73, ARRAY_COUNT(sFurretGfx73)}, 
	{NULL, 32}, 
	{sFurretGfx73_1, ARRAY_COUNT(sFurretGfx73_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFurretGfx74[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_74.4bpp.lz");
static const u8 sFurretGfx74_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_74_1.4bpp.lz");
static const u8 sFurretGfx74_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_74_2.4bpp.lz");
static const u8 sFurretGfx74_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_74_3.4bpp.lz");
static const ax_sprite sFurretSprites74[] = {
	{sFurretGfx74, ARRAY_COUNT(sFurretGfx74)}, 
	{NULL, 64}, 
	{sFurretGfx74_1, ARRAY_COUNT(sFurretGfx74_1)}, 
	{NULL, 64}, 
	{sFurretGfx74_2, ARRAY_COUNT(sFurretGfx74_2)}, 
	{NULL, 32}, 
	{sFurretGfx74_3, ARRAY_COUNT(sFurretGfx74_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFurretGfx75[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_75.4bpp.lz");
static const u8 sFurretGfx75_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_75_1.4bpp.lz");
static const u8 sFurretGfx75_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_75_2.4bpp.lz");
static const ax_sprite sFurretSprites75[] = {
	{NULL, 128}, 
	{sFurretGfx75, ARRAY_COUNT(sFurretGfx75)}, 
	{NULL, 32}, 
	{sFurretGfx75_1, ARRAY_COUNT(sFurretGfx75_1)}, 
	{NULL, 64}, 
	{sFurretGfx75_2, ARRAY_COUNT(sFurretGfx75_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sFurretGfx76[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_76.4bpp.lz");
static const u8 sFurretGfx76_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_76_1.4bpp.lz");
static const u8 sFurretGfx76_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_76_2.4bpp.lz");
static const ax_sprite sFurretSprites76[] = {
	{NULL, 128}, 
	{sFurretGfx76, ARRAY_COUNT(sFurretGfx76)}, 
	{NULL, 32}, 
	{sFurretGfx76_1, ARRAY_COUNT(sFurretGfx76_1)}, 
	{NULL, 64}, 
	{sFurretGfx76_2, ARRAY_COUNT(sFurretGfx76_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sFurretGfx77[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_77.4bpp.lz");
static const u8 sFurretGfx77_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_77_1.4bpp.lz");
static const u8 sFurretGfx77_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_77_2.4bpp.lz");
static const u8 sFurretGfx77_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_77_3.4bpp.lz");
static const ax_sprite sFurretSprites77[] = {
	{sFurretGfx77, ARRAY_COUNT(sFurretGfx77)}, 
	{NULL, 32}, 
	{sFurretGfx77_1, ARRAY_COUNT(sFurretGfx77_1)}, 
	{NULL, 32}, 
	{sFurretGfx77_2, ARRAY_COUNT(sFurretGfx77_2)}, 
	{NULL, 32}, 
	{sFurretGfx77_3, ARRAY_COUNT(sFurretGfx77_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFurretGfx78[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_78.4bpp.lz");
static const ax_sprite sFurretSprites78[] = {
	{sFurretGfx78, ARRAY_COUNT(sFurretGfx78)}, 
	{NULL, 0}
};
static const u8 sFurretGfx79[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_79.4bpp.lz");
static const ax_sprite sFurretSprites79[] = {
	{sFurretGfx79, ARRAY_COUNT(sFurretGfx79)}, 
	{NULL, 0}
};
static const u8 sFurretGfx80[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_80.4bpp.lz");
static const ax_sprite sFurretSprites80[] = {
	{sFurretGfx80, ARRAY_COUNT(sFurretGfx80)}, 
	{NULL, 0}
};
static const u8 sFurretGfx81[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_81.4bpp.lz");
static const ax_sprite sFurretSprites81[] = {
	{sFurretGfx81, ARRAY_COUNT(sFurretGfx81)}, 
	{NULL, 0}
};
static const u8 sFurretGfx82[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_82.4bpp.lz");
static const ax_sprite sFurretSprites82[] = {
	{sFurretGfx82, ARRAY_COUNT(sFurretGfx82)}, 
	{NULL, 0}
};
static const u8 sFurretGfx83[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_83.4bpp.lz");
static const ax_sprite sFurretSprites83[] = {
	{sFurretGfx83, ARRAY_COUNT(sFurretGfx83)}, 
	{NULL, 0}
};
static const u8 sFurretGfx84[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/furret/sprite_84.4bpp.lz");
static const ax_sprite sFurretSprites84[] = {
	{sFurretGfx84, ARRAY_COUNT(sFurretGfx84)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesFurret[] = {
	sFurretPose1,
	sFurretPose2,
	sFurretPose3,
	sFurretPose4,
	sFurretPose5,
	sFurretPose6,
	sFurretPose7,
	sFurretPose8,
	sFurretPose9,
	sFurretPose10,
	sFurretPose11,
	sFurretPose12,
	sFurretPose13,
	sFurretPose14,
	sFurretPose15,
	sFurretPose16,
	sFurretPose17,
	sFurretPose18,
	sFurretPose19,
	sFurretPose20,
	sFurretPose21,
	sFurretPose22,
	sFurretPose23,
	sFurretPose24,
	sFurretPose1,
	sFurretPose2,
	sFurretPose3,
	sFurretPose28,
	sFurretPose4,
	sFurretPose5,
	sFurretPose31,
	sFurretPose32,
	sFurretPose33,
	sFurretPose34,
	sFurretPose35,
	sFurretPose36,
	sFurretPose10,
	sFurretPose11,
	sFurretPose39,
	sFurretPose40,
	sFurretPose13,
	sFurretPose14,
	sFurretPose15,
	sFurretPose44,
	sFurretPose16,
	sFurretPose17,
	sFurretPose47,
	sFurretPose48,
	sFurretPose49,
	sFurretPose50,
	sFurretPose51,
	sFurretPose52,
	sFurretPose22,
	sFurretPose23,
	sFurretPose55,
	sFurretPose56,
	sFurretPose1,
	sFurretPose58,
	sFurretPose59,
	sFurretPose60,
	sFurretPose4,
	sFurretPose62,
	sFurretPose63,
	sFurretPose64,
	sFurretPose7,
	sFurretPose66,
	sFurretPose67,
	sFurretPose68,
	sFurretPose10,
	sFurretPose70,
	sFurretPose71,
	sFurretPose72,
	sFurretPose13,
	sFurretPose74,
	sFurretPose75,
	sFurretPose76,
	sFurretPose16,
	sFurretPose78,
	sFurretPose79,
	sFurretPose80,
	sFurretPose19,
	sFurretPose82,
	sFurretPose83,
	sFurretPose84,
	sFurretPose22,
	sFurretPose86,
	sFurretPose87,
	sFurretPose88,
	sFurretPose1,
	sFurretPose2,
	sFurretPose3,
	sFurretPose92,
	sFurretPose93,
	sFurretPose28,
	sFurretPose95,
	sFurretPose4,
	sFurretPose5,
	sFurretPose6,
	sFurretPose99,
	sFurretPose100,
	sFurretPose32,
	sFurretPose102,
	sFurretPose7,
	sFurretPose8,
	sFurretPose9,
	sFurretPose106,
	sFurretPose107,
	sFurretPose36,
	sFurretPose109,
	sFurretPose10,
	sFurretPose11,
	sFurretPose12,
	sFurretPose113,
	sFurretPose114,
	sFurretPose115,
	sFurretPose116,
	sFurretPose13,
	sFurretPose14,
	sFurretPose15,
	sFurretPose120,
	sFurretPose121,
	sFurretPose44,
	sFurretPose123,
	sFurretPose16,
	sFurretPose17,
	sFurretPose18,
	sFurretPose127,
	sFurretPose128,
	sFurretPose129,
	sFurretPose130,
	sFurretPose19,
	sFurretPose20,
	sFurretPose21,
	sFurretPose134,
	sFurretPose135,
	sFurretPose52,
	sFurretPose137,
	sFurretPose22,
	sFurretPose23,
	sFurretPose24,
	sFurretPose141,
	sFurretPose142,
	sFurretPose56,
	sFurretPose144,
	sFurretPose1,
	sFurretPose2,
	sFurretPose3,
	sFurretPose92,
	sFurretPose93,
	sFurretPose150,
	sFurretPose95,
	sFurretPose4,
	sFurretPose5,
	sFurretPose6,
	sFurretPose99,
	sFurretPose100,
	sFurretPose157,
	sFurretPose102,
	sFurretPose7,
	sFurretPose8,
	sFurretPose9,
	sFurretPose106,
	sFurretPose107,
	sFurretPose36,
	sFurretPose109,
	sFurretPose10,
	sFurretPose11,
	sFurretPose12,
	sFurretPose113,
	sFurretPose114,
	sFurretPose171,
	sFurretPose116,
	sFurretPose13,
	sFurretPose14,
	sFurretPose15,
	sFurretPose120,
	sFurretPose121,
	sFurretPose44,
	sFurretPose123,
	sFurretPose16,
	sFurretPose17,
	sFurretPose18,
	sFurretPose127,
	sFurretPose128,
	sFurretPose185,
	sFurretPose130,
	sFurretPose19,
	sFurretPose20,
	sFurretPose21,
	sFurretPose134,
	sFurretPose135,
	sFurretPose52,
	sFurretPose137,
	sFurretPose22,
	sFurretPose23,
	sFurretPose24,
	sFurretPose141,
	sFurretPose142,
	sFurretPose199,
	sFurretPose144,
	sFurretPose201,
	sFurretPose202,
	sFurretPose203,
	sFurretPose204,
	sFurretPose205,
	sFurretPose206,
	sFurretPose207,
	sFurretPose208,
	sFurretPose209,
	sFurretPose210,
	sFurretPose95,
	sFurretPose144,
	sFurretPose137,
	sFurretPose130,
	sFurretPose123,
	sFurretPose116,
	sFurretPose109,
	sFurretPose102,
	sFurretPose95,
	sFurretPose144,
	sFurretPose137,
	sFurretPose130,
	sFurretPose123,
	sFurretPose116,
	sFurretPose109,
	sFurretPose102,
	sFurretPose227,
	sFurretPose228,
	sFurretPose229,
	sFurretPose230,
	sFurretPose231,
	sFurretPose232,
	sFurretPose233,
	sFurretPose234,
	sFurretPose95,
	sFurretPose236,
	sFurretPose92,
	sFurretPose102,
	sFurretPose239,
	sFurretPose240,
	sFurretPose109,
	sFurretPose242,
	sFurretPose243,
	sFurretPose116,
	sFurretPose115,
	sFurretPose246,
	sFurretPose123,
	sFurretPose248,
	sFurretPose249,
	sFurretPose130,
	sFurretPose129,
	sFurretPose252,
	sFurretPose137,
	sFurretPose254,
	sFurretPose255,
	sFurretPose144,
	sFurretPose257,
	sFurretPose258,
	sFurretPose1,
	sFurretPose260,
	sFurretPose49,
	sFurretPose262,
	sFurretPose263,
	sFurretPose264,
	sFurretPose33,
	sFurretPose266,
	sFurretPose267,
	sFurretPose268,
	sFurretPose137,
	sFurretPose270,
	sFurretPose271,
	sFurretPose272,
	sFurretPose109,
	sFurretPose274,
};

static const struct PositionSets sAxPositionsFurret[] = {
	[0] = { .set = { {-1, -3}, {-5, 1}, {3, 1}, {-1, -6} } },
	[1] = { .set = { {-1, -13}, {-5, -6}, {3, -6}, {-1, -7} } },
	[2] = { .set = { {-1, 2}, {-4, 4}, {2, 4}, {-1, -6} } },
	[3] = { .set = { {10, -5}, {7, -1}, {2, 1}, {-1, -7} } },
	[4] = { .set = { {8, -15}, {9, -11}, {3, -9}, {-1, -12} } },
	[5] = { .set = { {8, -3}, {7, -2}, {2, -1}, {1, -13} } },
	[6] = { .set = { {16, -7}, {9, -2}, {8, 0}, {5, -4} } },
	[7] = { .set = { {14, -16}, {7, -9}, {7, -7}, {3, -11} } },
	[8] = { .set = { {20, -4}, {15, -2}, {14, -1}, {9, -9} } },
	[9] = { .set = { {9, -10}, {1, -6}, {6, -3}, {0, -6} } },
	[10] = { .set = { {9, -20}, {3, -15}, {8, -11}, {0, -11} } },
	[11] = { .set = { {13, -8}, {7, -8}, {11, -4}, {3, -14} } },
	[12] = { .set = { {-1, -11}, {4, -3}, {-6, -3}, {-1, -4} } },
	[13] = { .set = { {-1, -20}, {5, -10}, {-7, -10}, {-1, -8} } },
	[14] = { .set = { {-1, -13}, {4, -7}, {-6, -7}, {-1, -8} } },
	[15] = { .set = { {-10, -10}, {-2, -6}, {-7, -3}, {-1, -6} } },
	[16] = { .set = { {-10, -20}, {-4, -15}, {-9, -11}, {-1, -11} } },
	[17] = { .set = { {-14, -8}, {-8, -8}, {-12, -4}, {-4, -14} } },
	[18] = { .set = { {-17, -7}, {-10, -2}, {-9, 0}, {-6, -4} } },
	[19] = { .set = { {-15, -16}, {-8, -9}, {-8, -7}, {-4, -11} } },
	[20] = { .set = { {-21, -4}, {-16, -2}, {-15, -1}, {-10, -9} } },
	[21] = { .set = { {-11, -5}, {-8, -1}, {-3, 1}, {0, -7} } },
	[22] = { .set = { {-9, -15}, {-10, -11}, {-4, -9}, {0, -12} } },
	[23] = { .set = { {-13, -4}, {-12, -3}, {-7, -2}, {-6, -14} } },
	[24] = { .set = { {-1, -3}, {-5, 1}, {3, 1}, {-1, -6} } },
	[25] = { .set = { {-1, -13}, {-5, -6}, {3, -6}, {-1, -7} } },
	[26] = { .set = { {-1, 2}, {-4, 4}, {2, 4}, {-1, -6} } },
	[27] = { .set = { {-1, -20}, {-5, -9}, {3, -9}, {-1, -11} } },
	[28] = { .set = { {10, -5}, {7, -1}, {2, 1}, {-1, -7} } },
	[29] = { .set = { {8, -15}, {9, -11}, {3, -9}, {-1, -12} } },
	[30] = { .set = { {8, -4}, {7, -3}, {2, -2}, {1, -14} } },
	[31] = { .set = { {5, -20}, {6, -9}, {2, -6}, {0, -11} } },
	[32] = { .set = { {14, -7}, {7, -2}, {6, 0}, {3, -4} } },
	[33] = { .set = { {12, -16}, {5, -9}, {5, -7}, {1, -11} } },
	[34] = { .set = { {18, -3}, {13, -1}, {12, 0}, {7, -8} } },
	[35] = { .set = { {8, -22}, {7, -8}, {7, -6}, {1, -9} } },
	[36] = { .set = { {9, -10}, {1, -6}, {6, -3}, {0, -6} } },
	[37] = { .set = { {9, -20}, {3, -15}, {8, -11}, {0, -11} } },
	[38] = { .set = { {9, -8}, {3, -8}, {7, -4}, {-1, -14} } },
	[39] = { .set = { {6, -24}, {0, -11}, {6, -8}, {0, -10} } },
	[40] = { .set = { {-1, -11}, {4, -3}, {-6, -3}, {-1, -4} } },
	[41] = { .set = { {-1, -20}, {5, -10}, {-7, -10}, {-1, -8} } },
	[42] = { .set = { {-1, -13}, {4, -7}, {-6, -7}, {-1, -8} } },
	[43] = { .set = { {-1, -21}, {4, -6}, {-6, -6}, {-1, -8} } },
	[44] = { .set = { {-10, -10}, {-2, -6}, {-7, -3}, {-1, -6} } },
	[45] = { .set = { {-10, -20}, {-4, -15}, {-9, -11}, {-1, -11} } },
	[46] = { .set = { {-10, -8}, {-4, -8}, {-8, -4}, {0, -14} } },
	[47] = { .set = { {-7, -24}, {-1, -11}, {-7, -8}, {-1, -10} } },
	[48] = { .set = { {-15, -7}, {-8, -2}, {-7, 0}, {-4, -4} } },
	[49] = { .set = { {-13, -16}, {-6, -9}, {-6, -7}, {-2, -11} } },
	[50] = { .set = { {-19, -3}, {-14, -1}, {-13, 0}, {-8, -8} } },
	[51] = { .set = { {-9, -22}, {-8, -8}, {-8, -6}, {-2, -9} } },
	[52] = { .set = { {-11, -5}, {-8, -1}, {-3, 1}, {0, -7} } },
	[53] = { .set = { {-9, -15}, {-10, -11}, {-4, -9}, {0, -12} } },
	[54] = { .set = { {-9, -4}, {-8, -3}, {-3, -2}, {-2, -14} } },
	[55] = { .set = { {-6, -20}, {-7, -9}, {-3, -6}, {-1, -11} } },
	[56] = { .set = { {-1, -3}, {-5, 1}, {3, 1}, {-1, -6} } },
	[57] = { .set = { {12, -15}, {9, -7}, {7, -10}, {3, -7} } },
	[58] = { .set = { {-1, 5}, {-5, 6}, {3, 6}, {0, -6} } },
	[59] = { .set = { {-1, 2}, {-5, 3}, {3, 3}, {0, -9} } },
	[60] = { .set = { {10, -5}, {7, -1}, {2, 1}, {-1, -7} } },
	[61] = { .set = { {-14, -13}, {-9, -6}, {-12, -7}, {-5, -9} } },
	[62] = { .set = { {8, 2}, {6, -1}, {-2, 1}, {0, -7} } },
	[63] = { .set = { {8, 2}, {6, -1}, {-2, 1}, {0, -7} } },
	[64] = { .set = { {16, -7}, {9, -2}, {8, 0}, {5, -4} } },
	[65] = { .set = { {-13, -12}, {-8, -3}, {-11, -4}, {-4, -7} } },
	[66] = { .set = { {15, -2}, {7, -2}, {6, 0}, {3, -7} } },
	[67] = { .set = { {15, -2}, {7, -2}, {6, 0}, {3, -7} } },
	[68] = { .set = { {9, -10}, {1, -6}, {6, -3}, {0, -6} } },
	[69] = { .set = { {1, -10}, {2, -4}, {-5, -5}, {-2, -5} } },
	[70] = { .set = { {9, -6}, {-2, -4}, {2, -1}, {-1, -8} } },
	[71] = { .set = { {9, -6}, {-2, -4}, {2, -1}, {-1, -8} } },
	[72] = { .set = { {-1, -11}, {4, -3}, {-6, -3}, {-1, -4} } },
	[73] = { .set = { {-9, -10}, {-10, -5}, {-7, -4}, {-1, -5} } },
	[74] = { .set = { {-1, -11}, {4, -2}, {-6, -2}, {-1, -5} } },
	[75] = { .set = { {-1, -11}, {4, -2}, {-6, -2}, {-1, -5} } },
	[76] = { .set = { {-10, -10}, {-2, -6}, {-7, -3}, {-1, -6} } },
	[77] = { .set = { {-2, -10}, {-3, -4}, {4, -5}, {1, -5} } },
	[78] = { .set = { {-10, -6}, {1, -4}, {-3, -1}, {0, -8} } },
	[79] = { .set = { {-10, -6}, {1, -4}, {-3, -1}, {0, -8} } },
	[80] = { .set = { {-17, -7}, {-10, -2}, {-9, 0}, {-6, -4} } },
	[81] = { .set = { {12, -12}, {7, -3}, {10, -4}, {3, -7} } },
	[82] = { .set = { {-16, -2}, {-8, -2}, {-7, 0}, {-4, -7} } },
	[83] = { .set = { {-16, -2}, {-8, -2}, {-7, 0}, {-4, -7} } },
	[84] = { .set = { {-11, -5}, {-8, -1}, {-3, 1}, {0, -7} } },
	[85] = { .set = { {13, -13}, {8, -6}, {11, -7}, {4, -9} } },
	[86] = { .set = { {-9, 2}, {-7, -1}, {1, 1}, {-1, -7} } },
	[87] = { .set = { {-9, 2}, {-7, -1}, {1, 1}, {-1, -7} } },
	[88] = { .set = { {-1, -3}, {-5, 1}, {3, 1}, {-1, -6} } },
	[89] = { .set = { {-1, -13}, {-5, -6}, {3, -6}, {-1, -7} } },
	[90] = { .set = { {-1, 2}, {-4, 4}, {2, 4}, {-1, -6} } },
	[91] = { .set = { {-1, 0}, {-5, 1}, {3, 1}, {-1, -11} } },
	[92] = { .set = { {-1, -1}, {-5, 1}, {3, 1}, {-1, -12} } },
	[93] = { .set = { {-1, -20}, {-5, -9}, {3, -9}, {-1, -11} } },
	[94] = { .set = { {-1, -13}, {-5, -6}, {3, -6}, {-1, -7} } },
	[95] = { .set = { {10, -5}, {7, -1}, {2, 1}, {-1, -7} } },
	[96] = { .set = { {8, -15}, {9, -11}, {3, -9}, {-1, -12} } },
	[97] = { .set = { {8, -3}, {7, -2}, {2, -1}, {1, -13} } },
	[98] = { .set = { {12, -2}, {8, 0}, {2, 1}, {0, -7} } },
	[99] = { .set = { {12, -3}, {8, -1}, {2, 1}, {0, -7} } },
	[100] = { .set = { {5, -20}, {6, -9}, {2, -6}, {0, -11} } },
	[101] = { .set = { {4, -13}, {5, -7}, {-2, -6}, {-1, -5} } },
	[102] = { .set = { {16, -7}, {9, -2}, {8, 0}, {5, -4} } },
	[103] = { .set = { {14, -16}, {7, -9}, {7, -7}, {3, -11} } },
	[104] = { .set = { {20, -4}, {15, -2}, {14, -1}, {9, -9} } },
	[105] = { .set = { {16, -2}, {7, -2}, {6, 0}, {2, -5} } },
	[106] = { .set = { {16, -3}, {7, -2}, {6, 0}, {2, -5} } },
	[107] = { .set = { {8, -22}, {7, -8}, {7, -6}, {1, -9} } },
	[108] = { .set = { {6, -13}, {1, -8}, {1, -6}, {0, -6} } },
	[109] = { .set = { {9, -10}, {1, -6}, {6, -3}, {0, -6} } },
	[110] = { .set = { {9, -20}, {3, -15}, {8, -11}, {0, -11} } },
	[111] = { .set = { {13, -8}, {7, -8}, {11, -4}, {3, -14} } },
	[112] = { .set = { {11, -8}, {2, -5}, {6, -2}, {2, -7} } },
	[113] = { .set = { {11, -9}, {2, -5}, {6, -2}, {1, -7} } },
	[114] = { .set = { {4, -24}, {-2, -11}, {4, -8}, {-2, -10} } },
	[115] = { .set = { {5, -16}, {-1, -10}, {5, -6}, {0, -6} } },
	[116] = { .set = { {-1, -11}, {4, -3}, {-6, -3}, {-1, -4} } },
	[117] = { .set = { {-1, -20}, {5, -10}, {-7, -10}, {-1, -8} } },
	[118] = { .set = { {-1, -13}, {4, -7}, {-6, -7}, {-1, -8} } },
	[119] = { .set = { {-1, -7}, {3, -2}, {-5, -2}, {-1, -5} } },
	[120] = { .set = { {-1, -6}, {3, -2}, {-4, -2}, {-1, -5} } },
	[121] = { .set = { {-1, -21}, {4, -6}, {-6, -6}, {-1, -8} } },
	[122] = { .set = { {-1, -17}, {3, -8}, {-5, -8}, {-1, -8} } },
	[123] = { .set = { {-10, -10}, {-2, -6}, {-7, -3}, {-1, -6} } },
	[124] = { .set = { {-10, -20}, {-4, -15}, {-9, -11}, {-1, -11} } },
	[125] = { .set = { {-14, -8}, {-8, -8}, {-12, -4}, {-4, -14} } },
	[126] = { .set = { {-12, -8}, {-3, -5}, {-7, -2}, {-3, -7} } },
	[127] = { .set = { {-12, -9}, {-3, -5}, {-7, -2}, {-2, -7} } },
	[128] = { .set = { {-5, -24}, {1, -11}, {-5, -8}, {1, -10} } },
	[129] = { .set = { {-6, -16}, {0, -10}, {-6, -6}, {-1, -6} } },
	[130] = { .set = { {-17, -7}, {-10, -2}, {-9, 0}, {-6, -4} } },
	[131] = { .set = { {-15, -16}, {-8, -9}, {-8, -7}, {-4, -11} } },
	[132] = { .set = { {-21, -4}, {-16, -2}, {-15, -1}, {-10, -9} } },
	[133] = { .set = { {-17, -2}, {-8, -2}, {-7, 0}, {-3, -5} } },
	[134] = { .set = { {-17, -3}, {-8, -2}, {-7, 0}, {-3, -5} } },
	[135] = { .set = { {-9, -22}, {-8, -8}, {-8, -6}, {-2, -9} } },
	[136] = { .set = { {-7, -13}, {-2, -8}, {-2, -6}, {-1, -6} } },
	[137] = { .set = { {-11, -5}, {-8, -1}, {-3, 1}, {0, -7} } },
	[138] = { .set = { {-9, -15}, {-10, -11}, {-4, -9}, {0, -12} } },
	[139] = { .set = { {-13, -4}, {-12, -3}, {-7, -2}, {-6, -14} } },
	[140] = { .set = { {-13, -2}, {-9, 0}, {-3, 1}, {-1, -7} } },
	[141] = { .set = { {-13, -3}, {-9, -1}, {-3, 1}, {-1, -7} } },
	[142] = { .set = { {-6, -20}, {-7, -9}, {-3, -6}, {-1, -11} } },
	[143] = { .set = { {-5, -13}, {-6, -7}, {1, -6}, {0, -5} } },
	[144] = { .set = { {-1, -3}, {-5, 1}, {3, 1}, {-1, -6} } },
	[145] = { .set = { {-1, -13}, {-5, -6}, {3, -6}, {-1, -7} } },
	[146] = { .set = { {-1, 2}, {-4, 4}, {2, 4}, {-1, -6} } },
	[147] = { .set = { {-1, 0}, {-5, 1}, {3, 1}, {-1, -11} } },
	[148] = { .set = { {-1, -1}, {-5, 1}, {3, 1}, {-1, -12} } },
	[149] = { .set = { {-1, -17}, {-5, -6}, {3, -6}, {-1, -8} } },
	[150] = { .set = { {-1, -13}, {-5, -6}, {3, -6}, {-1, -7} } },
	[151] = { .set = { {10, -5}, {7, -1}, {2, 1}, {-1, -7} } },
	[152] = { .set = { {8, -15}, {9, -11}, {3, -9}, {-1, -12} } },
	[153] = { .set = { {8, -3}, {7, -2}, {2, -1}, {1, -13} } },
	[154] = { .set = { {12, -2}, {8, 0}, {2, 1}, {0, -7} } },
	[155] = { .set = { {12, -3}, {8, -1}, {2, 1}, {0, -7} } },
	[156] = { .set = { {7, -18}, {8, -7}, {4, -4}, {2, -9} } },
	[157] = { .set = { {4, -13}, {5, -7}, {-2, -6}, {-1, -5} } },
	[158] = { .set = { {16, -7}, {9, -2}, {8, 0}, {5, -4} } },
	[159] = { .set = { {14, -16}, {7, -9}, {7, -7}, {3, -11} } },
	[160] = { .set = { {20, -4}, {15, -2}, {14, -1}, {9, -9} } },
	[161] = { .set = { {16, -2}, {7, -2}, {6, 0}, {2, -5} } },
	[162] = { .set = { {16, -3}, {7, -2}, {6, 0}, {2, -5} } },
	[163] = { .set = { {8, -22}, {7, -8}, {7, -6}, {1, -9} } },
	[164] = { .set = { {6, -13}, {1, -8}, {1, -6}, {0, -6} } },
	[165] = { .set = { {9, -10}, {1, -6}, {6, -3}, {0, -6} } },
	[166] = { .set = { {9, -20}, {3, -15}, {8, -11}, {0, -11} } },
	[167] = { .set = { {13, -8}, {7, -8}, {11, -4}, {3, -14} } },
	[168] = { .set = { {11, -8}, {2, -5}, {6, -2}, {2, -7} } },
	[169] = { .set = { {11, -9}, {2, -5}, {6, -2}, {1, -7} } },
	[170] = { .set = { {7, -23}, {1, -10}, {7, -7}, {1, -9} } },
	[171] = { .set = { {5, -16}, {-1, -10}, {5, -6}, {0, -6} } },
	[172] = { .set = { {-1, -11}, {4, -3}, {-6, -3}, {-1, -4} } },
	[173] = { .set = { {-1, -20}, {5, -10}, {-7, -10}, {-1, -8} } },
	[174] = { .set = { {-1, -13}, {4, -7}, {-6, -7}, {-1, -8} } },
	[175] = { .set = { {-1, -7}, {3, -2}, {-5, -2}, {-1, -5} } },
	[176] = { .set = { {-1, -6}, {3, -2}, {-4, -2}, {-1, -5} } },
	[177] = { .set = { {-1, -21}, {4, -6}, {-6, -6}, {-1, -8} } },
	[178] = { .set = { {-1, -17}, {3, -8}, {-5, -8}, {-1, -8} } },
	[179] = { .set = { {-10, -10}, {-2, -6}, {-7, -3}, {-1, -6} } },
	[180] = { .set = { {-10, -20}, {-4, -15}, {-9, -11}, {-1, -11} } },
	[181] = { .set = { {-14, -8}, {-8, -8}, {-12, -4}, {-4, -14} } },
	[182] = { .set = { {-12, -8}, {-3, -5}, {-7, -2}, {-3, -7} } },
	[183] = { .set = { {-12, -9}, {-3, -5}, {-7, -2}, {-2, -7} } },
	[184] = { .set = { {-5, -22}, {1, -9}, {-5, -6}, {1, -8} } },
	[185] = { .set = { {-6, -16}, {0, -10}, {-6, -6}, {-1, -6} } },
	[186] = { .set = { {-17, -7}, {-10, -2}, {-9, 0}, {-6, -4} } },
	[187] = { .set = { {-15, -16}, {-8, -9}, {-8, -7}, {-4, -11} } },
	[188] = { .set = { {-21, -4}, {-16, -2}, {-15, -1}, {-10, -9} } },
	[189] = { .set = { {-17, -2}, {-8, -2}, {-7, 0}, {-3, -5} } },
	[190] = { .set = { {-17, -3}, {-8, -2}, {-7, 0}, {-3, -5} } },
	[191] = { .set = { {-9, -22}, {-8, -8}, {-8, -6}, {-2, -9} } },
	[192] = { .set = { {-7, -13}, {-2, -8}, {-2, -6}, {-1, -6} } },
	[193] = { .set = { {-11, -5}, {-8, -1}, {-3, 1}, {0, -7} } },
	[194] = { .set = { {-9, -15}, {-10, -11}, {-4, -9}, {0, -12} } },
	[195] = { .set = { {-13, -4}, {-12, -3}, {-7, -2}, {-6, -14} } },
	[196] = { .set = { {-13, -2}, {-9, 0}, {-3, 1}, {-1, -7} } },
	[197] = { .set = { {-13, -3}, {-9, -1}, {-3, 1}, {-1, -7} } },
	[198] = { .set = { {-8, -18}, {-9, -7}, {-5, -4}, {-3, -9} } },
	[199] = { .set = { {-5, -13}, {-6, -7}, {1, -6}, {0, -5} } },
	[200] = { .set = { {-4, -5}, {-7, 1}, {-2, 2}, {5, -3} } },
	[201] = { .set = { {-4, -4}, {-7, 1}, {-2, 2}, {5, -3} } },
	[202] = { .set = { {-1, -3}, {-4, -7}, {3, -7}, {-1, -12} } },
	[203] = { .set = { {7, -2}, {4, -11}, {-3, -9}, {0, -15} } },
	[204] = { .set = { {9, -1}, {1, -8}, {-1, -6}, {1, -13} } },
	[205] = { .set = { {8, -4}, {-2, -11}, {0, -7}, {-5, -15} } },
	[206] = { .set = { {2, -4}, {-2, -8}, {3, -8}, {0, -16} } },
	[207] = { .set = { {-5, -4}, {5, -11}, {3, -7}, {8, -15} } },
	[208] = { .set = { {-6, -1}, {2, -8}, {4, -6}, {2, -13} } },
	[209] = { .set = { {-8, -2}, {-5, -11}, {2, -9}, {-1, -15} } },
	[210] = { .set = { {-1, -13}, {-5, -6}, {3, -6}, {-1, -7} } },
	[211] = { .set = { {-5, -13}, {-6, -7}, {1, -6}, {0, -5} } },
	[212] = { .set = { {-7, -13}, {-2, -8}, {-2, -6}, {-1, -6} } },
	[213] = { .set = { {-6, -16}, {0, -10}, {-6, -6}, {-1, -6} } },
	[214] = { .set = { {-1, -17}, {3, -8}, {-5, -8}, {-1, -8} } },
	[215] = { .set = { {5, -16}, {-1, -10}, {5, -6}, {0, -6} } },
	[216] = { .set = { {6, -13}, {1, -8}, {1, -6}, {0, -6} } },
	[217] = { .set = { {4, -13}, {5, -7}, {-2, -6}, {-1, -5} } },
	[218] = { .set = { {-1, -13}, {-5, -6}, {3, -6}, {-1, -7} } },
	[219] = { .set = { {-5, -13}, {-6, -7}, {1, -6}, {0, -5} } },
	[220] = { .set = { {-7, -13}, {-2, -8}, {-2, -6}, {-1, -6} } },
	[221] = { .set = { {-6, -16}, {0, -10}, {-6, -6}, {-1, -6} } },
	[222] = { .set = { {-1, -17}, {3, -8}, {-5, -8}, {-1, -8} } },
	[223] = { .set = { {5, -16}, {-1, -10}, {5, -6}, {0, -6} } },
	[224] = { .set = { {6, -13}, {1, -8}, {1, -6}, {0, -6} } },
	[225] = { .set = { {4, -13}, {5, -7}, {-2, -6}, {-1, -5} } },
	[226] = { .set = { {0, -17}, {-4, -6}, {4, -6}, {0, -8} } },
	[227] = { .set = { {7, -16}, {8, -5}, {4, -2}, {2, -7} } },
	[228] = { .set = { {8, -20}, {7, -6}, {7, -4}, {1, -7} } },
	[229] = { .set = { {6, -22}, {0, -9}, {6, -6}, {0, -8} } },
	[230] = { .set = { {-1, -22}, {4, -7}, {-6, -7}, {-1, -9} } },
	[231] = { .set = { {-8, -23}, {-2, -10}, {-8, -7}, {-2, -9} } },
	[232] = { .set = { {-10, -21}, {-9, -7}, {-9, -5}, {-3, -8} } },
	[233] = { .set = { {-8, -16}, {-9, -5}, {-5, -2}, {-3, -7} } },
	[234] = { .set = { {-1, -13}, {-5, -6}, {3, -6}, {-1, -7} } },
	[235] = { .set = { {-1, -18}, {-5, -7}, {3, -7}, {-1, -9} } },
	[236] = { .set = { {-1, 0}, {-5, 1}, {3, 1}, {-1, -11} } },
	[237] = { .set = { {4, -13}, {5, -7}, {-2, -6}, {-1, -5} } },
	[238] = { .set = { {6, -17}, {7, -6}, {3, -3}, {1, -8} } },
	[239] = { .set = { {10, -2}, {6, 0}, {0, 1}, {-2, -7} } },
	[240] = { .set = { {6, -13}, {1, -8}, {1, -6}, {0, -6} } },
	[241] = { .set = { {7, -22}, {6, -8}, {6, -6}, {0, -9} } },
	[242] = { .set = { {11, -2}, {2, -2}, {1, 0}, {-3, -5} } },
	[243] = { .set = { {5, -16}, {-1, -10}, {5, -6}, {0, -6} } },
	[244] = { .set = { {4, -24}, {-2, -11}, {4, -8}, {-2, -10} } },
	[245] = { .set = { {7, -8}, {-2, -5}, {2, -2}, {-2, -7} } },
	[246] = { .set = { {-1, -17}, {3, -8}, {-5, -8}, {-1, -8} } },
	[247] = { .set = { {0, -21}, {5, -6}, {-5, -6}, {0, -8} } },
	[248] = { .set = { {0, -7}, {4, -2}, {-4, -2}, {0, -5} } },
	[249] = { .set = { {-6, -16}, {0, -10}, {-6, -6}, {-1, -6} } },
	[250] = { .set = { {-5, -24}, {1, -11}, {-5, -8}, {1, -10} } },
	[251] = { .set = { {-8, -8}, {1, -5}, {-3, -2}, {1, -7} } },
	[252] = { .set = { {-7, -13}, {-2, -8}, {-2, -6}, {-1, -6} } },
	[253] = { .set = { {-8, -22}, {-7, -8}, {-7, -6}, {-1, -9} } },
	[254] = { .set = { {-12, -2}, {-3, -2}, {-2, 0}, {2, -5} } },
	[255] = { .set = { {-5, -13}, {-6, -7}, {1, -6}, {0, -5} } },
	[256] = { .set = { {-7, -17}, {-8, -6}, {-4, -3}, {-2, -8} } },
	[257] = { .set = { {-11, -2}, {-7, 0}, {-1, 1}, {1, -7} } },
	[258] = { .set = { {-1, -3}, {-5, 1}, {3, 1}, {-1, -6} } },
	[259] = { .set = { {-11, -4}, {-8, 0}, {-3, 2}, {0, -6} } },
	[260] = { .set = { {-15, -7}, {-8, -2}, {-7, 0}, {-4, -4} } },
	[261] = { .set = { {-10, -9}, {-2, -5}, {-7, -2}, {-1, -5} } },
	[262] = { .set = { {-1, -13}, {4, -5}, {-6, -5}, {-1, -6} } },
	[263] = { .set = { {9, -9}, {1, -5}, {6, -2}, {0, -5} } },
	[264] = { .set = { {14, -7}, {7, -2}, {6, 0}, {3, -4} } },
	[265] = { .set = { {10, -4}, {7, 0}, {2, 2}, {-1, -6} } },
	[266] = { .set = { {-5, -16}, {-9, -9}, {-1, -9}, {-5, -10} } },
	[267] = { .set = { {-11, -13}, {-12, -7}, {-5, -6}, {-6, -5} } },
	[268] = { .set = { {-7, -13}, {-2, -8}, {-2, -6}, {-1, -6} } },
	[269] = { .set = { {-13, -16}, {-7, -10}, {-13, -6}, {-8, -6} } },
	[270] = { .set = { {-5, -17}, {-1, -8}, {-9, -8}, {-5, -8} } },
	[271] = { .set = { {12, -16}, {6, -10}, {12, -6}, {7, -6} } },
	[272] = { .set = { {6, -13}, {1, -8}, {1, -6}, {0, -6} } },
	[273] = { .set = { {10, -13}, {11, -7}, {4, -6}, {5, -5} } },
};

static const ax_anim *const sFurretAnimTable1[] = {
	AX_ANIM_PTR(sFurretAnims_1_1),
	AX_ANIM_PTR(sFurretAnims_1_2),
	AX_ANIM_PTR(sFurretAnims_1_3),
	AX_ANIM_PTR(sFurretAnims_1_4),
	AX_ANIM_PTR(sFurretAnims_1_5),
	AX_ANIM_PTR(sFurretAnims_1_6),
	AX_ANIM_PTR(sFurretAnims_1_7),
	AX_ANIM_PTR(sFurretAnims_1_8),
};

static const ax_anim *const sFurretAnimTable2[] = {
	AX_ANIM_PTR(sFurretAnims_2_1),
	AX_ANIM_PTR(sFurretAnims_2_2),
	AX_ANIM_PTR(sFurretAnims_2_3),
	AX_ANIM_PTR(sFurretAnims_2_4),
	AX_ANIM_PTR(sFurretAnims_2_5),
	AX_ANIM_PTR(sFurretAnims_2_6),
	AX_ANIM_PTR(sFurretAnims_2_7),
	AX_ANIM_PTR(sFurretAnims_2_8),
};

static const ax_anim *const sFurretAnimTable3[] = {
	AX_ANIM_PTR(sFurretAnims_3_1),
	AX_ANIM_PTR(sFurretAnims_3_2),
	AX_ANIM_PTR(sFurretAnims_3_3),
	AX_ANIM_PTR(sFurretAnims_3_4),
	AX_ANIM_PTR(sFurretAnims_3_5),
	AX_ANIM_PTR(sFurretAnims_3_6),
	AX_ANIM_PTR(sFurretAnims_3_7),
	AX_ANIM_PTR(sFurretAnims_3_8),
};

static const ax_anim *const sFurretAnimTable4[] = {
	AX_ANIM_PTR(sFurretAnims_4_1),
	AX_ANIM_PTR(sFurretAnims_4_2),
	AX_ANIM_PTR(sFurretAnims_4_3),
	AX_ANIM_PTR(sFurretAnims_4_4),
	AX_ANIM_PTR(sFurretAnims_4_5),
	AX_ANIM_PTR(sFurretAnims_4_6),
	AX_ANIM_PTR(sFurretAnims_4_7),
	AX_ANIM_PTR(sFurretAnims_4_8),
};

static const ax_anim *const sFurretAnimTable5[] = {
	AX_ANIM_PTR(sFurretAnims_5_1),
	AX_ANIM_PTR(sFurretAnims_5_2),
	AX_ANIM_PTR(sFurretAnims_5_3),
	AX_ANIM_PTR(sFurretAnims_5_4),
	AX_ANIM_PTR(sFurretAnims_5_5),
	AX_ANIM_PTR(sFurretAnims_5_6),
	AX_ANIM_PTR(sFurretAnims_5_7),
	AX_ANIM_PTR(sFurretAnims_5_8),
};

static const ax_anim *const sFurretAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
};

static const ax_anim *const sFurretAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_01234),
	AX_ANIM_PTR(gAxSharedAnim_01245),
	AX_ANIM_PTR(gAxSharedAnim_01258),
	AX_ANIM_PTR(gAxSharedAnim_01270),
	AX_ANIM_PTR(gAxSharedAnim_01288),
	AX_ANIM_PTR(gAxSharedAnim_01305),
	AX_ANIM_PTR(gAxSharedAnim_01316),
	AX_ANIM_PTR(gAxSharedAnim_01328),
};

static const ax_anim *const sFurretAnimTable8[] = {
	AX_ANIM_PTR(sFurretAnims_8_1),
	AX_ANIM_PTR(sFurretAnims_8_2),
	AX_ANIM_PTR(sFurretAnims_8_3),
	AX_ANIM_PTR(sFurretAnims_8_4),
	AX_ANIM_PTR(sFurretAnims_8_5),
	AX_ANIM_PTR(sFurretAnims_8_6),
	AX_ANIM_PTR(sFurretAnims_8_7),
	AX_ANIM_PTR(sFurretAnims_8_8),
};

static const ax_anim *const sFurretAnimTable9[] = {
	AX_ANIM_PTR(sFurretAnims_9_1),
	AX_ANIM_PTR(sFurretAnims_9_2),
	AX_ANIM_PTR(sFurretAnims_9_3),
	AX_ANIM_PTR(sFurretAnims_9_4),
	AX_ANIM_PTR(sFurretAnims_9_5),
	AX_ANIM_PTR(sFurretAnims_9_6),
	AX_ANIM_PTR(sFurretAnims_9_7),
	AX_ANIM_PTR(sFurretAnims_9_8),
};

static const ax_anim *const sFurretAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01469),
	AX_ANIM_PTR(gAxSharedAnim_01476),
	AX_ANIM_PTR(gAxSharedAnim_01484),
	AX_ANIM_PTR(gAxSharedAnim_01489),
	AX_ANIM_PTR(gAxSharedAnim_01496),
	AX_ANIM_PTR(gAxSharedAnim_01503),
	AX_ANIM_PTR(gAxSharedAnim_01510),
	AX_ANIM_PTR(gAxSharedAnim_01517),
};

static const ax_anim *const sFurretAnimTable11[] = {
	AX_ANIM_PTR(sFurretAnims_11_1),
	AX_ANIM_PTR(sFurretAnims_11_2),
	AX_ANIM_PTR(sFurretAnims_11_3),
	AX_ANIM_PTR(sFurretAnims_11_4),
	AX_ANIM_PTR(sFurretAnims_11_5),
	AX_ANIM_PTR(sFurretAnims_11_6),
	AX_ANIM_PTR(sFurretAnims_11_7),
	AX_ANIM_PTR(sFurretAnims_11_8),
};

static const ax_anim *const sFurretAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01679),
	AX_ANIM_PTR(gAxSharedAnim_01713),
	AX_ANIM_PTR(gAxSharedAnim_01706),
	AX_ANIM_PTR(gAxSharedAnim_01701),
	AX_ANIM_PTR(gAxSharedAnim_01700),
	AX_ANIM_PTR(gAxSharedAnim_01695),
	AX_ANIM_PTR(gAxSharedAnim_01689),
	AX_ANIM_PTR(gAxSharedAnim_01680),
};

static const ax_anim *const sFurretAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01715),
	AX_ANIM_PTR(gAxSharedAnim_01739),
	AX_ANIM_PTR(gAxSharedAnim_01738),
	AX_ANIM_PTR(gAxSharedAnim_01736),
	AX_ANIM_PTR(gAxSharedAnim_01733),
	AX_ANIM_PTR(gAxSharedAnim_01724),
	AX_ANIM_PTR(gAxSharedAnim_01722),
	AX_ANIM_PTR(gAxSharedAnim_01719),
};

static const ax_anim *const *const sAxAnimationsFurret[] = {
	sFurretAnimTable1,
	sFurretAnimTable2,
	sFurretAnimTable3,
	sFurretAnimTable4,
	sFurretAnimTable5,
	sFurretAnimTable6,
	sFurretAnimTable7,
	sFurretAnimTable8,
	sFurretAnimTable9,
	sFurretAnimTable10,
	sFurretAnimTable11,
	sFurretAnimTable12,
	sFurretAnimTable13,
};

static const ax_sprite *const sAxSpritesFurret[] = {
	sFurretSprites1,
	sFurretSprites2,
	sFurretSprites3,
	sFurretSprites4,
	sFurretSprites5,
	sFurretSprites6,
	sFurretSprites7,
	sFurretSprites8,
	sFurretSprites9,
	sFurretSprites10,
	sFurretSprites11,
	sFurretSprites12,
	sFurretSprites13,
	sFurretSprites14,
	sFurretSprites15,
	sFurretSprites16,
	sFurretSprites17,
	sFurretSprites18,
	sFurretSprites19,
	sFurretSprites20,
	sFurretSprites21,
	sFurretSprites22,
	sFurretSprites23,
	sFurretSprites24,
	sFurretSprites25,
	sFurretSprites26,
	sFurretSprites27,
	sFurretSprites28,
	sFurretSprites29,
	sFurretSprites30,
	sFurretSprites31,
	sFurretSprites32,
	sFurretSprites33,
	sFurretSprites34,
	sFurretSprites35,
	sFurretSprites36,
	sFurretSprites37,
	sFurretSprites38,
	sFurretSprites39,
	sFurretSprites40,
	sFurretSprites41,
	sFurretSprites42,
	sFurretSprites43,
	sFurretSprites44,
	sFurretSprites45,
	sFurretSprites46,
	sFurretSprites47,
	sFurretSprites48,
	sFurretSprites49,
	sFurretSprites50,
	sFurretSprites51,
	sFurretSprites52,
	sFurretSprites53,
	sFurretSprites54,
	sFurretSprites55,
	sFurretSprites56,
	sFurretSprites57,
	sFurretSprites58,
	sFurretSprites59,
	sFurretSprites60,
	sFurretSprites61,
	sFurretSprites62,
	sFurretSprites63,
	sFurretSprites64,
	sFurretSprites65,
	sFurretSprites66,
	sFurretSprites67,
	sFurretSprites68,
	sFurretSprites69,
	sFurretSprites70,
	sFurretSprites71,
	sFurretSprites72,
	sFurretSprites73,
	sFurretSprites74,
	sFurretSprites75,
	sFurretSprites76,
	sFurretSprites77,
	sFurretSprites78,
	sFurretSprites79,
	sFurretSprites80,
	sFurretSprites81,
	sFurretSprites82,
	sFurretSprites83,
	sFurretSprites84,
};

static const axmain sAxMainFurret = {
	.poses = sAxPosesFurret,
	.animations = sAxAnimationsFurret,
	.animCount = ARRAY_COUNT(sAxAnimationsFurret),
	.spriteData = sAxSpritesFurret,
	.positions = sAxPositionsFurret,
};
