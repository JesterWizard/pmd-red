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
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
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
static const axmain sAxMainCharizard;
const SiroArchive gAxCharizard = {"SIRO", &sAxMainCharizard};

static const ax_pose sCharizardPose1[] = {
	AX_POSE(0, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose2[] = {
	AX_POSE(1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose3[] = {
	AX_POSE(2, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose4[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose5[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose6[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose7[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose8[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose9[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose10[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose11[] = {
	AX_POSE(10, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 2)),
	AX_POSE(12, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 2)),
	AX_POSE(13, OAM1(255, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(14, 3, 2)),
	AX_POSE(14, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose12[] = {
	AX_POSE(15, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose13[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose14[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose15[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose16[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose17[] = {
	AX_POSE(10, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(12, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE(13, OAM1(255, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 2)),
	AX_POSE(14, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose18[] = {
	AX_POSE(15, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose19[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose20[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose21[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose22[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose23[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose24[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose50[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose51[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose52[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose54[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose55[] = {
	AX_POSE(23, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(24, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(25, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose56[] = {
	AX_POSE(24, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose58[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose59[] = {
	AX_POSE(27, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 2)),
	AX_POSE(29, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE(30, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(20, 3, 2)),
	AX_POSE(31, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(22, 3, 2)),
	AX_POSE(32, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(23, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose60[] = {
	AX_POSE(28, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(30, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 2)),
	AX_POSE(31, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 2)),
	AX_POSE(32, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose62[] = {
	AX_POSE(33, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose63[] = {
	AX_POSE(34, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(35, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(36, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(9, 3, 2)),
	AX_POSE(37, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(11, 3, 2)),
	AX_POSE(38, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(15, 3, 2)),
	AX_POSE(39, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(23, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose64[] = {
	AX_POSE(35, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(1, 3, 2)),
	AX_POSE(37, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(3, 3, 2)),
	AX_POSE(38, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(7, 3, 2)),
	AX_POSE(39, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(15, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose66[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose67[] = {
	AX_POSE(41, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(42, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose68[] = {
	AX_POSE(42, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose69[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose70[] = {
	AX_POSE(33, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose71[] = {
	AX_POSE(34, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(35, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 2)),
	AX_POSE(36, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(9, 3, 2)),
	AX_POSE(37, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(11, 3, 2)),
	AX_POSE(38, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(15, 3, 2)),
	AX_POSE(39, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(23, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose72[] = {
	AX_POSE(35, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE(37, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(3, 3, 2)),
	AX_POSE(38, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(7, 3, 2)),
	AX_POSE(39, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose73[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose74[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose75[] = {
	AX_POSE(27, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(29, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE(30, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(20, 3, 2)),
	AX_POSE(31, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(22, 3, 2)),
	AX_POSE(32, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(23, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose76[] = {
	AX_POSE(28, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(30, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE(31, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 2)),
	AX_POSE(32, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose77[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose78[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose79[] = {
	AX_POSE(23, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(24, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(25, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose80[] = {
	AX_POSE(24, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose82[] = {
	AX_POSE(43, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose83[] = {
	AX_POSE(44, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose85[] = {
	AX_POSE(45, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose86[] = {
	AX_POSE(46, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose88[] = {
	AX_POSE(47, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(48, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose89[] = {
	AX_POSE(49, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(50, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(51, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE(52, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose91[] = {
	AX_POSE(53, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose92[] = {
	AX_POSE(54, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose94[] = {
	AX_POSE(55, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose95[] = {
	AX_POSE(56, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose97[] = {
	AX_POSE(53, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose98[] = {
	AX_POSE(54, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose100[] = {
	AX_POSE(47, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(48, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose101[] = {
	AX_POSE(49, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(50, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(51, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 2)),
	AX_POSE(52, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose103[] = {
	AX_POSE(45, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose104[] = {
	AX_POSE(46, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose129[] = {
	AX_POSE(57, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose130[] = {
	AX_POSE(58, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose131[] = {
	AX_POSE(59, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose132[] = {
	AX_POSE(60, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose133[] = {
	AX_POSE(61, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose134[] = {
	AX_POSE(62, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose135[] = {
	AX_POSE(63, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose136[] = {
	AX_POSE(62, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose137[] = {
	AX_POSE(61, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose138[] = {
	AX_POSE(60, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose164[] = {
	AX_POSE(46, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose165[] = {
	AX_POSE(49, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(50, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(51, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 2)),
	AX_POSE(52, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose166[] = {
	AX_POSE(54, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose168[] = {
	AX_POSE(54, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose169[] = {
	AX_POSE(49, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(50, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(51, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE(52, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose170[] = {
	AX_POSE(46, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose171[] = {
	AX_POSE(44, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose174[] = {
	AX_POSE(54, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose176[] = {
	AX_POSE(54, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose177[] = {
	AX_POSE(49, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(50, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(51, OAM1(246, ST_OAM_V_RECTANGLE, 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 2)),
	AX_POSE(52, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose184[] = {
	AX_POSE(46, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose187[] = {
	AX_POSE(49, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(50, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(51, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE(52, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose199[] = {
	AX_POSE(49, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(50, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(51, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(12, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 2)),
	AX_POSE(52, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose202[] = {
	AX_POSE(46, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose220[] = {
	AX_POSE(64, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose221[] = {
	AX_POSE(65, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose222[] = {
	AX_POSE(66, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose224[] = {
	AX_POSE(67, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(68, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(69, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE(70, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(12, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose225[] = {
	AX_POSE(71, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(72, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(73, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose226[] = {
	AX_POSE(74, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(75, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(76, OAM1(249, ST_OAM_H_RECTANGLE, 1), OAM2(12, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose228[] = {
	AX_POSE(67, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(68, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 2)),
	AX_POSE(69, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(10, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 2)),
	AX_POSE(70, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose229[] = {
	AX_POSE(71, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(72, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(73, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose230[] = {
	AX_POSE(74, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(75, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(76, OAM1(249, ST_OAM_H_RECTANGLE, 1), OAM2(226, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose231[] = {
	AX_POSE(77, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(78, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(79, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE(80, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose232[] = {
	AX_POSE(81, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose233[] = {
	AX_POSE(82, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose234[] = {
	AX_POSE(77, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(78, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 2)),
	AX_POSE(79, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(11, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 2)),
	AX_POSE(80, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose235[] = {
	AX_POSE(81, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose236[] = {
	AX_POSE(82, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCharizardPose244[] = {
	AX_POSE(74, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(75, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(76, OAM1(249, ST_OAM_H_RECTANGLE, 1), OAM2(227, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE_TERMINATOR
};
static const u8 sCharizardAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_2_2.lz");
static const u8 sCharizardAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_2_3.lz");
static const u8 sCharizardAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_2_4.lz");
static const u8 sCharizardAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_2_6.lz");
static const u8 sCharizardAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_2_7.lz");
static const u8 sCharizardAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_3_1.lz");
static const u8 sCharizardAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_3_2.lz");
static const u8 sCharizardAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_3_3.lz");
static const u8 sCharizardAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_3_4.lz");
static const u8 sCharizardAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_3_5.lz");
static const u8 sCharizardAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_3_6.lz");
static const u8 sCharizardAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_3_7.lz");
static const u8 sCharizardAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_3_8.lz");
static const u8 sCharizardAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_4_1.lz");
static const u8 sCharizardAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_4_2.lz");
static const u8 sCharizardAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_4_3.lz");
static const u8 sCharizardAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_4_4.lz");
static const u8 sCharizardAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_4_5.lz");
static const u8 sCharizardAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_4_6.lz");
static const u8 sCharizardAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_4_7.lz");
static const u8 sCharizardAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_4_8.lz");
static const u8 sCharizardAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_5_1.lz");
static const u8 sCharizardAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_5_2.lz");
static const u8 sCharizardAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_5_3.lz");
static const u8 sCharizardAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_5_4.lz");
static const u8 sCharizardAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_5_5.lz");
static const u8 sCharizardAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_5_6.lz");
static const u8 sCharizardAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_5_7.lz");
static const u8 sCharizardAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_5_8.lz");
static const u8 sCharizardAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_8_1.lz");
static const u8 sCharizardAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_8_2.lz");
static const u8 sCharizardAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_8_3.lz");
static const u8 sCharizardAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_8_4.lz");
static const u8 sCharizardAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_8_5.lz");
static const u8 sCharizardAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_8_6.lz");
static const u8 sCharizardAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_8_7.lz");
static const u8 sCharizardAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_8_8.lz");
static const u8 sCharizardAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_9_2.lz");
static const u8 sCharizardAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_9_4.lz");
static const u8 sCharizardAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_9_5.lz");
static const u8 sCharizardAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_9_6.lz");
static const u8 sCharizardAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_9_8.lz");
static const u8 sCharizardAnims_15_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_15_1.lz");
static const u8 sCharizardAnims_15_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_15_3.lz");
static const u8 sCharizardAnims_16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_16_1.lz");
static const u8 sCharizardAnims_16_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_16_3.lz");
static const u8 sCharizardAnims_17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_17_1.lz");
static const u8 sCharizardAnims_17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/charizard/sCharizardAnims_17_3.lz");

static const u8 sCharizardGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_1.4bpp.lz");
static const ax_sprite sCharizardSprites1[] = {
	{sCharizardGfx1, ARRAY_COUNT(sCharizardGfx1)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_2.4bpp.lz");
static const ax_sprite sCharizardSprites2[] = {
	{sCharizardGfx2, ARRAY_COUNT(sCharizardGfx2)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_3.4bpp.lz");
static const ax_sprite sCharizardSprites3[] = {
	{sCharizardGfx3, ARRAY_COUNT(sCharizardGfx3)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_4.4bpp.lz");
static const ax_sprite sCharizardSprites4[] = {
	{sCharizardGfx4, ARRAY_COUNT(sCharizardGfx4)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_5.4bpp.lz");
static const ax_sprite sCharizardSprites5[] = {
	{sCharizardGfx5, ARRAY_COUNT(sCharizardGfx5)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_6.4bpp.lz");
static const ax_sprite sCharizardSprites6[] = {
	{sCharizardGfx6, ARRAY_COUNT(sCharizardGfx6)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_7.4bpp.lz");
static const ax_sprite sCharizardSprites7[] = {
	{sCharizardGfx7, ARRAY_COUNT(sCharizardGfx7)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_8.4bpp.lz");
static const ax_sprite sCharizardSprites8[] = {
	{sCharizardGfx8, ARRAY_COUNT(sCharizardGfx8)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_9.4bpp.lz");
static const ax_sprite sCharizardSprites9[] = {
	{sCharizardGfx9, ARRAY_COUNT(sCharizardGfx9)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_10.4bpp.lz");
static const ax_sprite sCharizardSprites10[] = {
	{sCharizardGfx10, ARRAY_COUNT(sCharizardGfx10)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_11.4bpp.lz");
static const ax_sprite sCharizardSprites11[] = {
	{sCharizardGfx11, ARRAY_COUNT(sCharizardGfx11)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_12.4bpp.lz");
static const ax_sprite sCharizardSprites12[] = {
	{sCharizardGfx12, ARRAY_COUNT(sCharizardGfx12)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_13.4bpp.lz");
static const ax_sprite sCharizardSprites13[] = {
	{sCharizardGfx13, ARRAY_COUNT(sCharizardGfx13)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_14.4bpp.lz");
static const ax_sprite sCharizardSprites14[] = {
	{sCharizardGfx14, ARRAY_COUNT(sCharizardGfx14)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_15.4bpp.lz");
static const ax_sprite sCharizardSprites15[] = {
	{sCharizardGfx15, ARRAY_COUNT(sCharizardGfx15)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_16.4bpp.lz");
static const ax_sprite sCharizardSprites16[] = {
	{sCharizardGfx16, ARRAY_COUNT(sCharizardGfx16)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_17.4bpp.lz");
static const ax_sprite sCharizardSprites17[] = {
	{sCharizardGfx17, ARRAY_COUNT(sCharizardGfx17)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_18.4bpp.lz");
static const ax_sprite sCharizardSprites18[] = {
	{sCharizardGfx18, ARRAY_COUNT(sCharizardGfx18)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_19.4bpp.lz");
static const ax_sprite sCharizardSprites19[] = {
	{sCharizardGfx19, ARRAY_COUNT(sCharizardGfx19)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_20.4bpp.lz");
static const ax_sprite sCharizardSprites20[] = {
	{sCharizardGfx20, ARRAY_COUNT(sCharizardGfx20)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_21.4bpp.lz");
static const u8 sCharizardGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_21_1.4bpp.lz");
static const u8 sCharizardGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_21_2.4bpp.lz");
static const ax_sprite sCharizardSprites21[] = {
	{NULL, 128}, 
	{sCharizardGfx21, ARRAY_COUNT(sCharizardGfx21)}, 
	{NULL, 96}, 
	{sCharizardGfx21_1, ARRAY_COUNT(sCharizardGfx21_1)}, 
	{NULL, 64}, 
	{sCharizardGfx21_2, ARRAY_COUNT(sCharizardGfx21_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCharizardGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_22.4bpp.lz");
static const u8 sCharizardGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_22_1.4bpp.lz");
static const u8 sCharizardGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_22_2.4bpp.lz");
static const ax_sprite sCharizardSprites22[] = {
	{sCharizardGfx22, ARRAY_COUNT(sCharizardGfx22)}, 
	{NULL, 32}, 
	{sCharizardGfx22_1, ARRAY_COUNT(sCharizardGfx22_1)}, 
	{NULL, 32}, 
	{sCharizardGfx22_2, ARRAY_COUNT(sCharizardGfx22_2)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_23.4bpp.lz");
static const ax_sprite sCharizardSprites23[] = {
	{sCharizardGfx23, ARRAY_COUNT(sCharizardGfx23)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_24.4bpp.lz");
static const u8 sCharizardGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_24_1.4bpp.lz");
static const u8 sCharizardGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_24_2.4bpp.lz");
static const ax_sprite sCharizardSprites24[] = {
	{NULL, 64}, 
	{sCharizardGfx24, ARRAY_COUNT(sCharizardGfx24)}, 
	{NULL, 32}, 
	{sCharizardGfx24_1, ARRAY_COUNT(sCharizardGfx24_1)}, 
	{NULL, 32}, 
	{sCharizardGfx24_2, ARRAY_COUNT(sCharizardGfx24_2)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_25.4bpp.lz");
static const ax_sprite sCharizardSprites25[] = {
	{sCharizardGfx25, ARRAY_COUNT(sCharizardGfx25)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_26.4bpp.lz");
static const ax_sprite sCharizardSprites26[] = {
	{sCharizardGfx26, ARRAY_COUNT(sCharizardGfx26)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_27.4bpp.lz");
static const u8 sCharizardGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_27_1.4bpp.lz");
static const ax_sprite sCharizardSprites27[] = {
	{sCharizardGfx27, ARRAY_COUNT(sCharizardGfx27)}, 
	{NULL, 32}, 
	{sCharizardGfx27_1, ARRAY_COUNT(sCharizardGfx27_1)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_28.4bpp.lz");
static const u8 sCharizardGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_28_1.4bpp.lz");
static const ax_sprite sCharizardSprites28[] = {
	{sCharizardGfx28, ARRAY_COUNT(sCharizardGfx28)}, 
	{NULL, 32}, 
	{sCharizardGfx28_1, ARRAY_COUNT(sCharizardGfx28_1)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_29.4bpp.lz");
static const ax_sprite sCharizardSprites29[] = {
	{sCharizardGfx29, ARRAY_COUNT(sCharizardGfx29)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_30.4bpp.lz");
static const u8 sCharizardGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_30_1.4bpp.lz");
static const ax_sprite sCharizardSprites30[] = {
	{sCharizardGfx30, ARRAY_COUNT(sCharizardGfx30)}, 
	{NULL, 32}, 
	{sCharizardGfx30_1, ARRAY_COUNT(sCharizardGfx30_1)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_31.4bpp.lz");
static const ax_sprite sCharizardSprites31[] = {
	{sCharizardGfx31, ARRAY_COUNT(sCharizardGfx31)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_32.4bpp.lz");
static const ax_sprite sCharizardSprites32[] = {
	{sCharizardGfx32, ARRAY_COUNT(sCharizardGfx32)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_33.4bpp.lz");
static const ax_sprite sCharizardSprites33[] = {
	{sCharizardGfx33, ARRAY_COUNT(sCharizardGfx33)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_34.4bpp.lz");
static const ax_sprite sCharizardSprites34[] = {
	{sCharizardGfx34, ARRAY_COUNT(sCharizardGfx34)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_35.4bpp.lz");
static const u8 sCharizardGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_35_1.4bpp.lz");
static const ax_sprite sCharizardSprites35[] = {
	{sCharizardGfx35, ARRAY_COUNT(sCharizardGfx35)}, 
	{NULL, 32}, 
	{sCharizardGfx35_1, ARRAY_COUNT(sCharizardGfx35_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCharizardGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_36.4bpp.lz");
static const ax_sprite sCharizardSprites36[] = {
	{sCharizardGfx36, ARRAY_COUNT(sCharizardGfx36)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_37.4bpp.lz");
static const ax_sprite sCharizardSprites37[] = {
	{sCharizardGfx37, ARRAY_COUNT(sCharizardGfx37)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_38.4bpp.lz");
static const ax_sprite sCharizardSprites38[] = {
	{sCharizardGfx38, ARRAY_COUNT(sCharizardGfx38)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_39.4bpp.lz");
static const ax_sprite sCharizardSprites39[] = {
	{sCharizardGfx39, ARRAY_COUNT(sCharizardGfx39)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_40.4bpp.lz");
static const ax_sprite sCharizardSprites40[] = {
	{sCharizardGfx40, ARRAY_COUNT(sCharizardGfx40)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_41.4bpp.lz");
static const ax_sprite sCharizardSprites41[] = {
	{NULL, 32}, 
	{sCharizardGfx41, ARRAY_COUNT(sCharizardGfx41)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_42.4bpp.lz");
static const u8 sCharizardGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_42_1.4bpp.lz");
static const u8 sCharizardGfx42_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_42_2.4bpp.lz");
static const ax_sprite sCharizardSprites42[] = {
	{sCharizardGfx42, ARRAY_COUNT(sCharizardGfx42)}, 
	{NULL, 32}, 
	{sCharizardGfx42_1, ARRAY_COUNT(sCharizardGfx42_1)}, 
	{NULL, 32}, 
	{sCharizardGfx42_2, ARRAY_COUNT(sCharizardGfx42_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCharizardGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_43.4bpp.lz");
static const u8 sCharizardGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_43_1.4bpp.lz");
static const ax_sprite sCharizardSprites43[] = {
	{sCharizardGfx43, ARRAY_COUNT(sCharizardGfx43)}, 
	{NULL, 32}, 
	{sCharizardGfx43_1, ARRAY_COUNT(sCharizardGfx43_1)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_44.4bpp.lz");
static const u8 sCharizardGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_44_1.4bpp.lz");
static const ax_sprite sCharizardSprites44[] = {
	{NULL, 32}, 
	{sCharizardGfx44, ARRAY_COUNT(sCharizardGfx44)}, 
	{NULL, 32}, 
	{sCharizardGfx44_1, ARRAY_COUNT(sCharizardGfx44_1)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_45.4bpp.lz");
static const ax_sprite sCharizardSprites45[] = {
	{sCharizardGfx45, ARRAY_COUNT(sCharizardGfx45)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_46.4bpp.lz");
static const u8 sCharizardGfx46_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_46_1.4bpp.lz");
static const u8 sCharizardGfx46_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_46_2.4bpp.lz");
static const ax_sprite sCharizardSprites46[] = {
	{NULL, 32}, 
	{sCharizardGfx46, ARRAY_COUNT(sCharizardGfx46)}, 
	{NULL, 32}, 
	{sCharizardGfx46_1, ARRAY_COUNT(sCharizardGfx46_1)}, 
	{NULL, 32}, 
	{sCharizardGfx46_2, ARRAY_COUNT(sCharizardGfx46_2)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_47.4bpp.lz");
static const ax_sprite sCharizardSprites47[] = {
	{sCharizardGfx47, ARRAY_COUNT(sCharizardGfx47)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCharizardGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_48.4bpp.lz");
static const ax_sprite sCharizardSprites48[] = {
	{sCharizardGfx48, ARRAY_COUNT(sCharizardGfx48)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_49.4bpp.lz");
static const ax_sprite sCharizardSprites49[] = {
	{sCharizardGfx49, ARRAY_COUNT(sCharizardGfx49)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_50.4bpp.lz");
static const ax_sprite sCharizardSprites50[] = {
	{sCharizardGfx50, ARRAY_COUNT(sCharizardGfx50)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_51.4bpp.lz");
static const ax_sprite sCharizardSprites51[] = {
	{sCharizardGfx51, ARRAY_COUNT(sCharizardGfx51)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_52.4bpp.lz");
static const ax_sprite sCharizardSprites52[] = {
	{sCharizardGfx52, ARRAY_COUNT(sCharizardGfx52)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_53.4bpp.lz");
static const ax_sprite sCharizardSprites53[] = {
	{sCharizardGfx53, ARRAY_COUNT(sCharizardGfx53)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_54.4bpp.lz");
static const ax_sprite sCharizardSprites54[] = {
	{NULL, 32}, 
	{sCharizardGfx54, ARRAY_COUNT(sCharizardGfx54)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_55.4bpp.lz");
static const ax_sprite sCharizardSprites55[] = {
	{sCharizardGfx55, ARRAY_COUNT(sCharizardGfx55)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_56.4bpp.lz");
static const u8 sCharizardGfx56_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_56_1.4bpp.lz");
static const ax_sprite sCharizardSprites56[] = {
	{NULL, 32}, 
	{sCharizardGfx56, ARRAY_COUNT(sCharizardGfx56)}, 
	{NULL, 32}, 
	{sCharizardGfx56_1, ARRAY_COUNT(sCharizardGfx56_1)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_57.4bpp.lz");
static const u8 sCharizardGfx57_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_57_1.4bpp.lz");
static const ax_sprite sCharizardSprites57[] = {
	{sCharizardGfx57, ARRAY_COUNT(sCharizardGfx57)}, 
	{NULL, 32}, 
	{sCharizardGfx57_1, ARRAY_COUNT(sCharizardGfx57_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCharizardGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_58.4bpp.lz");
static const ax_sprite sCharizardSprites58[] = {
	{sCharizardGfx58, ARRAY_COUNT(sCharizardGfx58)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_59.4bpp.lz");
static const ax_sprite sCharizardSprites59[] = {
	{sCharizardGfx59, ARRAY_COUNT(sCharizardGfx59)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_60.4bpp.lz");
static const ax_sprite sCharizardSprites60[] = {
	{sCharizardGfx60, ARRAY_COUNT(sCharizardGfx60)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_61.4bpp.lz");
static const ax_sprite sCharizardSprites61[] = {
	{sCharizardGfx61, ARRAY_COUNT(sCharizardGfx61)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_62.4bpp.lz");
static const ax_sprite sCharizardSprites62[] = {
	{sCharizardGfx62, ARRAY_COUNT(sCharizardGfx62)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_63.4bpp.lz");
static const ax_sprite sCharizardSprites63[] = {
	{sCharizardGfx63, ARRAY_COUNT(sCharizardGfx63)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_64.4bpp.lz");
static const ax_sprite sCharizardSprites64[] = {
	{sCharizardGfx64, ARRAY_COUNT(sCharizardGfx64)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_65.4bpp.lz");
static const ax_sprite sCharizardSprites65[] = {
	{sCharizardGfx65, ARRAY_COUNT(sCharizardGfx65)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_66.4bpp.lz");
static const ax_sprite sCharizardSprites66[] = {
	{sCharizardGfx66, ARRAY_COUNT(sCharizardGfx66)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_67.4bpp.lz");
static const ax_sprite sCharizardSprites67[] = {
	{sCharizardGfx67, ARRAY_COUNT(sCharizardGfx67)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_68.4bpp.lz");
static const ax_sprite sCharizardSprites68[] = {
	{sCharizardGfx68, ARRAY_COUNT(sCharizardGfx68)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_69.4bpp.lz");
static const ax_sprite sCharizardSprites69[] = {
	{sCharizardGfx69, ARRAY_COUNT(sCharizardGfx69)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_70.4bpp.lz");
static const ax_sprite sCharizardSprites70[] = {
	{sCharizardGfx70, ARRAY_COUNT(sCharizardGfx70)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_71.4bpp.lz");
static const ax_sprite sCharizardSprites71[] = {
	{sCharizardGfx71, ARRAY_COUNT(sCharizardGfx71)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx72[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_72.4bpp.lz");
static const ax_sprite sCharizardSprites72[] = {
	{sCharizardGfx72, ARRAY_COUNT(sCharizardGfx72)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx73[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_73.4bpp.lz");
static const ax_sprite sCharizardSprites73[] = {
	{sCharizardGfx73, ARRAY_COUNT(sCharizardGfx73)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx74[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_74.4bpp.lz");
static const ax_sprite sCharizardSprites74[] = {
	{sCharizardGfx74, ARRAY_COUNT(sCharizardGfx74)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx75[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_75.4bpp.lz");
static const ax_sprite sCharizardSprites75[] = {
	{sCharizardGfx75, ARRAY_COUNT(sCharizardGfx75)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx76[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_76.4bpp.lz");
static const ax_sprite sCharizardSprites76[] = {
	{sCharizardGfx76, ARRAY_COUNT(sCharizardGfx76)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx77[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_77.4bpp.lz");
static const ax_sprite sCharizardSprites77[] = {
	{sCharizardGfx77, ARRAY_COUNT(sCharizardGfx77)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx78[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_78.4bpp.lz");
static const ax_sprite sCharizardSprites78[] = {
	{sCharizardGfx78, ARRAY_COUNT(sCharizardGfx78)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx79[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_79.4bpp.lz");
static const ax_sprite sCharizardSprites79[] = {
	{sCharizardGfx79, ARRAY_COUNT(sCharizardGfx79)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx80[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_80.4bpp.lz");
static const ax_sprite sCharizardSprites80[] = {
	{sCharizardGfx80, ARRAY_COUNT(sCharizardGfx80)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx81[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_81.4bpp.lz");
static const ax_sprite sCharizardSprites81[] = {
	{sCharizardGfx81, ARRAY_COUNT(sCharizardGfx81)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx82[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_82.4bpp.lz");
static const ax_sprite sCharizardSprites82[] = {
	{sCharizardGfx82, ARRAY_COUNT(sCharizardGfx82)}, 
	{NULL, 0}
};
static const u8 sCharizardGfx83[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/charizard/sprite_83.4bpp.lz");
static const ax_sprite sCharizardSprites83[] = {
	{sCharizardGfx83, ARRAY_COUNT(sCharizardGfx83)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesCharizard[] = {
	sCharizardPose1,
	sCharizardPose2,
	sCharizardPose3,
	sCharizardPose4,
	sCharizardPose5,
	sCharizardPose6,
	sCharizardPose7,
	sCharizardPose8,
	sCharizardPose9,
	sCharizardPose10,
	sCharizardPose11,
	sCharizardPose12,
	sCharizardPose13,
	sCharizardPose14,
	sCharizardPose15,
	sCharizardPose16,
	sCharizardPose17,
	sCharizardPose18,
	sCharizardPose19,
	sCharizardPose20,
	sCharizardPose21,
	sCharizardPose22,
	sCharizardPose23,
	sCharizardPose24,
	sCharizardPose1,
	sCharizardPose2,
	sCharizardPose3,
	sCharizardPose4,
	sCharizardPose5,
	sCharizardPose6,
	sCharizardPose7,
	sCharizardPose8,
	sCharizardPose9,
	sCharizardPose10,
	sCharizardPose11,
	sCharizardPose12,
	sCharizardPose13,
	sCharizardPose14,
	sCharizardPose15,
	sCharizardPose16,
	sCharizardPose17,
	sCharizardPose18,
	sCharizardPose19,
	sCharizardPose20,
	sCharizardPose21,
	sCharizardPose22,
	sCharizardPose23,
	sCharizardPose24,
	sCharizardPose1,
	sCharizardPose50,
	sCharizardPose51,
	sCharizardPose52,
	sCharizardPose4,
	sCharizardPose54,
	sCharizardPose55,
	sCharizardPose56,
	sCharizardPose7,
	sCharizardPose58,
	sCharizardPose59,
	sCharizardPose60,
	sCharizardPose10,
	sCharizardPose62,
	sCharizardPose63,
	sCharizardPose64,
	sCharizardPose13,
	sCharizardPose66,
	sCharizardPose67,
	sCharizardPose68,
	sCharizardPose69,
	sCharizardPose70,
	sCharizardPose71,
	sCharizardPose72,
	sCharizardPose73,
	sCharizardPose74,
	sCharizardPose75,
	sCharizardPose76,
	sCharizardPose77,
	sCharizardPose78,
	sCharizardPose79,
	sCharizardPose80,
	sCharizardPose1,
	sCharizardPose82,
	sCharizardPose83,
	sCharizardPose4,
	sCharizardPose85,
	sCharizardPose86,
	sCharizardPose7,
	sCharizardPose88,
	sCharizardPose89,
	sCharizardPose10,
	sCharizardPose91,
	sCharizardPose92,
	sCharizardPose13,
	sCharizardPose94,
	sCharizardPose95,
	sCharizardPose69,
	sCharizardPose97,
	sCharizardPose98,
	sCharizardPose73,
	sCharizardPose100,
	sCharizardPose101,
	sCharizardPose77,
	sCharizardPose103,
	sCharizardPose104,
	sCharizardPose1,
	sCharizardPose82,
	sCharizardPose83,
	sCharizardPose4,
	sCharizardPose85,
	sCharizardPose86,
	sCharizardPose7,
	sCharizardPose88,
	sCharizardPose89,
	sCharizardPose10,
	sCharizardPose91,
	sCharizardPose92,
	sCharizardPose13,
	sCharizardPose94,
	sCharizardPose95,
	sCharizardPose69,
	sCharizardPose97,
	sCharizardPose98,
	sCharizardPose73,
	sCharizardPose100,
	sCharizardPose101,
	sCharizardPose77,
	sCharizardPose103,
	sCharizardPose104,
	sCharizardPose129,
	sCharizardPose130,
	sCharizardPose131,
	sCharizardPose132,
	sCharizardPose133,
	sCharizardPose134,
	sCharizardPose135,
	sCharizardPose136,
	sCharizardPose137,
	sCharizardPose138,
	sCharizardPose1,
	sCharizardPose2,
	sCharizardPose3,
	sCharizardPose4,
	sCharizardPose5,
	sCharizardPose6,
	sCharizardPose7,
	sCharizardPose8,
	sCharizardPose9,
	sCharizardPose10,
	sCharizardPose11,
	sCharizardPose12,
	sCharizardPose13,
	sCharizardPose14,
	sCharizardPose15,
	sCharizardPose16,
	sCharizardPose17,
	sCharizardPose18,
	sCharizardPose19,
	sCharizardPose20,
	sCharizardPose21,
	sCharizardPose22,
	sCharizardPose23,
	sCharizardPose24,
	sCharizardPose83,
	sCharizardPose164,
	sCharizardPose165,
	sCharizardPose166,
	sCharizardPose95,
	sCharizardPose168,
	sCharizardPose169,
	sCharizardPose170,
	sCharizardPose171,
	sCharizardPose170,
	sCharizardPose169,
	sCharizardPose174,
	sCharizardPose95,
	sCharizardPose176,
	sCharizardPose177,
	sCharizardPose164,
	sCharizardPose1,
	sCharizardPose82,
	sCharizardPose83,
	sCharizardPose4,
	sCharizardPose85,
	sCharizardPose184,
	sCharizardPose7,
	sCharizardPose88,
	sCharizardPose187,
	sCharizardPose10,
	sCharizardPose91,
	sCharizardPose92,
	sCharizardPose13,
	sCharizardPose94,
	sCharizardPose95,
	sCharizardPose69,
	sCharizardPose97,
	sCharizardPose98,
	sCharizardPose73,
	sCharizardPose100,
	sCharizardPose199,
	sCharizardPose77,
	sCharizardPose103,
	sCharizardPose202,
	sCharizardPose83,
	sCharizardPose164,
	sCharizardPose165,
	sCharizardPose166,
	sCharizardPose95,
	sCharizardPose168,
	sCharizardPose169,
	sCharizardPose170,
	sCharizardPose1,
	sCharizardPose77,
	sCharizardPose73,
	sCharizardPose69,
	sCharizardPose13,
	sCharizardPose10,
	sCharizardPose7,
	sCharizardPose4,
	sCharizardPose1,
	sCharizardPose220,
	sCharizardPose221,
	sCharizardPose222,
	sCharizardPose73,
	sCharizardPose224,
	sCharizardPose225,
	sCharizardPose226,
	sCharizardPose7,
	sCharizardPose228,
	sCharizardPose229,
	sCharizardPose230,
	sCharizardPose231,
	sCharizardPose232,
	sCharizardPose233,
	sCharizardPose234,
	sCharizardPose235,
	sCharizardPose236,
	sCharizardPose231,
	sCharizardPose232,
	sCharizardPose233,
	sCharizardPose226,
	sCharizardPose234,
	sCharizardPose235,
	sCharizardPose236,
	sCharizardPose244,
};

static const struct PositionSets sAxPositionsCharizard[] = {
	[0] = { .set = { {-1, -10}, {-9, -10}, {7, -10}, {-1, -7} } },
	[1] = { .set = { {-2, -9}, {-10, -12}, {3, -7}, {-2, -6} } },
	[2] = { .set = { {0, -9}, {-6, -7}, {8, -12}, {1, -6} } },
	[3] = { .set = { {7, -12}, {8, -11}, {-4, -9}, {0, -8} } },
	[4] = { .set = { {8, -11}, {6, -9}, {1, -5}, {1, -7} } },
	[5] = { .set = { {7, -10}, {10, -10}, {-6, -7}, {0, -7} } },
	[6] = { .set = { {9, -13}, {7, -13}, {6, -10}, {2, -10} } },
	[7] = { .set = { {10, -12}, {6, -12}, {10, -10}, {4, -9} } },
	[8] = { .set = { {9, -11}, {9, -9}, {2, -7}, {0, -8} } },
	[9] = { .set = { {9, -18}, {-1, -17}, {9, -13}, {-1, -12} } },
	[10] = { .set = { {10, -17}, {-1, -14}, {13, -13}, {1, -11} } },
	[11] = { .set = { {8, -17}, {-1, -18}, {7, -11}, {-3, -12} } },
	[12] = { .set = { {-1, -21}, {5, -13}, {-7, -13}, {-1, -9} } },
	[13] = { .set = { {0, -20}, {5, -11}, {-6, -19}, {-1, -9} } },
	[14] = { .set = { {-2, -20}, {4, -19}, {-8, -10}, {-1, -9} } },
	[15] = { .set = { {-10, -18}, {0, -17}, {-10, -13}, {0, -12} } },
	[16] = { .set = { {-11, -17}, {0, -14}, {-14, -13}, {-2, -11} } },
	[17] = { .set = { {-8, -17}, {1, -18}, {-7, -11}, {3, -12} } },
	[18] = { .set = { {-10, -13}, {-8, -13}, {-7, -10}, {-3, -10} } },
	[19] = { .set = { {-11, -12}, {-7, -12}, {-11, -10}, {-5, -9} } },
	[20] = { .set = { {-10, -11}, {-10, -9}, {-3, -7}, {-1, -8} } },
	[21] = { .set = { {-8, -12}, {-9, -11}, {3, -9}, {-1, -8} } },
	[22] = { .set = { {-9, -11}, {-7, -9}, {-2, -5}, {-2, -7} } },
	[23] = { .set = { {-8, -10}, {-11, -10}, {5, -7}, {-1, -7} } },
	[24] = { .set = { {-1, -10}, {-9, -10}, {7, -10}, {-1, -7} } },
	[25] = { .set = { {-2, -9}, {-10, -12}, {3, -7}, {-2, -6} } },
	[26] = { .set = { {0, -9}, {-6, -7}, {8, -12}, {1, -6} } },
	[27] = { .set = { {7, -12}, {8, -11}, {-4, -9}, {0, -8} } },
	[28] = { .set = { {8, -11}, {6, -9}, {1, -5}, {1, -7} } },
	[29] = { .set = { {7, -10}, {10, -10}, {-6, -7}, {0, -7} } },
	[30] = { .set = { {9, -13}, {7, -13}, {6, -10}, {2, -10} } },
	[31] = { .set = { {10, -12}, {6, -12}, {10, -10}, {4, -9} } },
	[32] = { .set = { {9, -11}, {9, -9}, {2, -7}, {0, -8} } },
	[33] = { .set = { {9, -18}, {-1, -17}, {9, -13}, {-1, -12} } },
	[34] = { .set = { {10, -17}, {-1, -14}, {13, -13}, {1, -11} } },
	[35] = { .set = { {8, -17}, {-1, -18}, {7, -11}, {-3, -12} } },
	[36] = { .set = { {-1, -21}, {5, -13}, {-7, -13}, {-1, -9} } },
	[37] = { .set = { {0, -20}, {5, -11}, {-6, -19}, {-1, -9} } },
	[38] = { .set = { {-2, -20}, {4, -19}, {-8, -10}, {-1, -9} } },
	[39] = { .set = { {-10, -18}, {0, -17}, {-10, -13}, {0, -12} } },
	[40] = { .set = { {-11, -17}, {0, -14}, {-14, -13}, {-2, -11} } },
	[41] = { .set = { {-8, -17}, {1, -18}, {-7, -11}, {3, -12} } },
	[42] = { .set = { {-10, -13}, {-8, -13}, {-7, -10}, {-3, -10} } },
	[43] = { .set = { {-11, -12}, {-7, -12}, {-11, -10}, {-5, -9} } },
	[44] = { .set = { {-10, -11}, {-10, -9}, {-3, -7}, {-1, -8} } },
	[45] = { .set = { {-8, -12}, {-9, -11}, {3, -9}, {-1, -8} } },
	[46] = { .set = { {-9, -11}, {-7, -9}, {-2, -5}, {-2, -7} } },
	[47] = { .set = { {-8, -10}, {-11, -10}, {5, -7}, {-1, -7} } },
	[48] = { .set = { {-1, -10}, {-9, -10}, {7, -10}, {-1, -7} } },
	[49] = { .set = { {-6, -17}, {-6, -16}, {3, -6}, {0, -9} } },
	[50] = { .set = { {9, 2}, {2, 2}, {3, -9}, {-1, -7} } },
	[51] = { .set = { {9, 2}, {2, 2}, {3, -9}, {-1, -7} } },
	[52] = { .set = { {7, -12}, {8, -11}, {-4, -9}, {0, -8} } },
	[53] = { .set = { {9, -18}, {7, -18}, {1, -7}, {1, -10} } },
	[54] = { .set = { {-1, -2}, {2, 2}, {-6, -9}, {0, -6} } },
	[55] = { .set = { {-1, -2}, {2, 2}, {-6, -9}, {0, -6} } },
	[56] = { .set = { {9, -13}, {7, -13}, {6, -10}, {2, -10} } },
	[57] = { .set = { {4, -19}, {-6, -18}, {4, -12}, {-3, -11} } },
	[58] = { .set = { {10, -8}, {5, -3}, {-4, -8}, {-1, -9} } },
	[59] = { .set = { {10, -8}, {5, -3}, {-4, -8}, {-1, -9} } },
	[60] = { .set = { {9, -18}, {-1, -17}, {9, -13}, {-1, -12} } },
	[61] = { .set = { {-1, -22}, {-9, -16}, {7, -12}, {-2, -12} } },
	[62] = { .set = { {10, -11}, {6, -5}, {-3, -5}, {-1, -10} } },
	[63] = { .set = { {10, -11}, {6, -5}, {-3, -5}, {-1, -10} } },
	[64] = { .set = { {-1, -21}, {5, -13}, {-7, -13}, {-1, -9} } },
	[65] = { .set = { {8, -20}, {8, -10}, {-3, -14}, {1, -11} } },
	[66] = { .set = { {-9, -11}, {-6, -12}, {-6, -5}, {-2, -10} } },
	[67] = { .set = { {-9, -11}, {-6, -12}, {-6, -5}, {-2, -10} } },
	[68] = { .set = { {-11, -18}, {-1, -17}, {-11, -13}, {-1, -12} } },
	[69] = { .set = { {-1, -22}, {7, -16}, {-9, -12}, {0, -12} } },
	[70] = { .set = { {-12, -11}, {-8, -5}, {1, -5}, {-1, -10} } },
	[71] = { .set = { {-12, -11}, {-8, -5}, {1, -5}, {-1, -10} } },
	[72] = { .set = { {-11, -13}, {-9, -13}, {-8, -10}, {-4, -10} } },
	[73] = { .set = { {-6, -19}, {4, -18}, {-6, -12}, {1, -11} } },
	[74] = { .set = { {-12, -8}, {-7, -3}, {2, -8}, {-1, -9} } },
	[75] = { .set = { {-12, -8}, {-7, -3}, {2, -8}, {-1, -9} } },
	[76] = { .set = { {-9, -12}, {-10, -11}, {2, -9}, {-2, -8} } },
	[77] = { .set = { {-11, -18}, {-9, -18}, {-3, -7}, {-3, -10} } },
	[78] = { .set = { {-1, -2}, {-4, 2}, {4, -9}, {-2, -6} } },
	[79] = { .set = { {-1, -2}, {-4, 2}, {4, -9}, {-2, -6} } },
	[80] = { .set = { {-1, -10}, {-9, -10}, {7, -10}, {-1, -7} } },
	[81] = { .set = { {-1, -23}, {-11, -12}, {9, -12}, {-1, -8} } },
	[82] = { .set = { {-1, 1}, {-12, -6}, {10, -6}, {-1, -7} } },
	[83] = { .set = { {7, -12}, {8, -11}, {-4, -9}, {0, -8} } },
	[84] = { .set = { {-4, -25}, {6, -16}, {-12, -11}, {-2, -9} } },
	[85] = { .set = { {9, -5}, {10, -7}, {-4, -5}, {2, -8} } },
	[86] = { .set = { {9, -13}, {7, -13}, {6, -10}, {2, -10} } },
	[87] = { .set = { {-4, -22}, {-3, -15}, {-5, -8}, {-2, -8} } },
	[88] = { .set = { {14, -9}, {7, -7}, {3, -4}, {3, -8} } },
	[89] = { .set = { {9, -18}, {-1, -17}, {9, -13}, {-1, -12} } },
	[90] = { .set = { {-7, -24}, {-10, -17}, {7, -10}, {-3, -11} } },
	[91] = { .set = { {12, -17}, {0, -14}, {10, -7}, {2, -12} } },
	[92] = { .set = { {-1, -21}, {5, -13}, {-7, -13}, {-1, -9} } },
	[93] = { .set = { {-1, -22}, {9, -10}, {-10, -10}, {-1, -7} } },
	[94] = { .set = { {-1, -20}, {8, -10}, {-10, -10}, {-1, -9} } },
	[95] = { .set = { {-11, -18}, {-1, -17}, {-11, -13}, {-1, -12} } },
	[96] = { .set = { {5, -24}, {8, -17}, {-9, -10}, {1, -11} } },
	[97] = { .set = { {-14, -17}, {-2, -14}, {-12, -7}, {-4, -12} } },
	[98] = { .set = { {-11, -13}, {-9, -13}, {-8, -10}, {-4, -10} } },
	[99] = { .set = { {2, -22}, {1, -15}, {3, -8}, {0, -8} } },
	[100] = { .set = { {-16, -9}, {-9, -7}, {-5, -4}, {-5, -8} } },
	[101] = { .set = { {-9, -12}, {-10, -11}, {2, -9}, {-2, -8} } },
	[102] = { .set = { {2, -25}, {-8, -16}, {10, -11}, {0, -9} } },
	[103] = { .set = { {-11, -5}, {-12, -7}, {2, -5}, {-4, -8} } },
	[104] = { .set = { {-1, -10}, {-9, -10}, {7, -10}, {-1, -7} } },
	[105] = { .set = { {-1, -23}, {-11, -12}, {9, -12}, {-1, -8} } },
	[106] = { .set = { {-1, 1}, {-12, -6}, {10, -6}, {-1, -7} } },
	[107] = { .set = { {7, -12}, {8, -11}, {-4, -9}, {0, -8} } },
	[108] = { .set = { {-4, -25}, {6, -16}, {-12, -11}, {-2, -9} } },
	[109] = { .set = { {9, -5}, {10, -7}, {-4, -5}, {2, -8} } },
	[110] = { .set = { {9, -13}, {7, -13}, {6, -10}, {2, -10} } },
	[111] = { .set = { {-4, -22}, {-3, -15}, {-5, -8}, {-2, -8} } },
	[112] = { .set = { {14, -9}, {7, -7}, {3, -4}, {3, -8} } },
	[113] = { .set = { {9, -18}, {-1, -17}, {9, -13}, {-1, -12} } },
	[114] = { .set = { {-7, -24}, {-10, -17}, {7, -10}, {-3, -11} } },
	[115] = { .set = { {12, -17}, {0, -14}, {10, -7}, {2, -12} } },
	[116] = { .set = { {-1, -21}, {5, -13}, {-7, -13}, {-1, -9} } },
	[117] = { .set = { {-1, -22}, {9, -10}, {-10, -10}, {-1, -7} } },
	[118] = { .set = { {-1, -20}, {8, -10}, {-10, -10}, {-1, -9} } },
	[119] = { .set = { {-11, -18}, {-1, -17}, {-11, -13}, {-1, -12} } },
	[120] = { .set = { {5, -24}, {8, -17}, {-9, -10}, {1, -11} } },
	[121] = { .set = { {-14, -17}, {-2, -14}, {-12, -7}, {-4, -12} } },
	[122] = { .set = { {-11, -13}, {-9, -13}, {-8, -10}, {-4, -10} } },
	[123] = { .set = { {2, -22}, {1, -15}, {3, -8}, {0, -8} } },
	[124] = { .set = { {-16, -9}, {-9, -7}, {-5, -4}, {-5, -8} } },
	[125] = { .set = { {-9, -12}, {-10, -11}, {2, -9}, {-2, -8} } },
	[126] = { .set = { {2, -25}, {-8, -16}, {10, -11}, {0, -9} } },
	[127] = { .set = { {-11, -5}, {-12, -7}, {2, -5}, {-4, -8} } },
	[128] = { .set = { {-6, -9}, {-8, -5}, {4, -4}, {1, -8} } },
	[129] = { .set = { {-7, -8}, {-8, -5}, {4, -3}, {0, -7} } },
	[130] = { .set = { {-1, -24}, {-10, -13}, {8, -13}, {-1, -11} } },
	[131] = { .set = { {-5, -25}, {5, -17}, {-13, -12}, {-3, -10} } },
	[132] = { .set = { {-10, -24}, {-7, -12}, {-9, -7}, {-7, -9} } },
	[133] = { .set = { {-9, -20}, {-11, -15}, {4, -8}, {-5, -8} } },
	[134] = { .set = { {-1, -20}, {9, -12}, {-10, -12}, {-1, -6} } },
	[135] = { .set = { {8, -20}, {10, -15}, {-5, -8}, {4, -8} } },
	[136] = { .set = { {9, -24}, {6, -12}, {8, -7}, {6, -9} } },
	[137] = { .set = { {4, -25}, {-6, -17}, {12, -12}, {2, -10} } },
	[138] = { .set = { {-1, -10}, {-9, -10}, {7, -10}, {-1, -7} } },
	[139] = { .set = { {-2, -9}, {-10, -12}, {3, -7}, {-2, -6} } },
	[140] = { .set = { {0, -9}, {-6, -7}, {8, -12}, {1, -6} } },
	[141] = { .set = { {7, -12}, {8, -11}, {-4, -9}, {0, -8} } },
	[142] = { .set = { {8, -11}, {6, -9}, {1, -5}, {1, -7} } },
	[143] = { .set = { {7, -10}, {10, -10}, {-6, -7}, {0, -7} } },
	[144] = { .set = { {9, -13}, {7, -13}, {6, -10}, {2, -10} } },
	[145] = { .set = { {10, -12}, {6, -12}, {10, -10}, {4, -9} } },
	[146] = { .set = { {9, -11}, {9, -9}, {2, -7}, {0, -8} } },
	[147] = { .set = { {9, -18}, {-1, -17}, {9, -13}, {-1, -12} } },
	[148] = { .set = { {10, -17}, {-1, -14}, {13, -13}, {1, -11} } },
	[149] = { .set = { {8, -17}, {-1, -18}, {7, -11}, {-3, -12} } },
	[150] = { .set = { {-1, -21}, {5, -13}, {-7, -13}, {-1, -9} } },
	[151] = { .set = { {0, -20}, {5, -11}, {-6, -19}, {-1, -9} } },
	[152] = { .set = { {-2, -20}, {4, -19}, {-8, -10}, {-1, -9} } },
	[153] = { .set = { {-10, -18}, {0, -17}, {-10, -13}, {0, -12} } },
	[154] = { .set = { {-11, -17}, {0, -14}, {-14, -13}, {-2, -11} } },
	[155] = { .set = { {-8, -17}, {1, -18}, {-7, -11}, {3, -12} } },
	[156] = { .set = { {-10, -13}, {-8, -13}, {-7, -10}, {-3, -10} } },
	[157] = { .set = { {-11, -12}, {-7, -12}, {-11, -10}, {-5, -9} } },
	[158] = { .set = { {-10, -11}, {-10, -9}, {-3, -7}, {-1, -8} } },
	[159] = { .set = { {-8, -12}, {-9, -11}, {3, -9}, {-1, -8} } },
	[160] = { .set = { {-9, -11}, {-7, -9}, {-2, -5}, {-2, -7} } },
	[161] = { .set = { {-8, -10}, {-11, -10}, {5, -7}, {-1, -7} } },
	[162] = { .set = { {-1, 1}, {-12, -6}, {10, -6}, {-1, -7} } },
	[163] = { .set = { {-8, -4}, {-9, -6}, {5, -4}, {-1, -7} } },
	[164] = { .set = { {-12, -8}, {-5, -6}, {-1, -3}, {-1, -7} } },
	[165] = { .set = { {-11, -15}, {1, -12}, {-9, -5}, {-1, -10} } },
	[166] = { .set = { {-1, -20}, {8, -10}, {-10, -10}, {-1, -9} } },
	[167] = { .set = { {9, -15}, {-3, -12}, {7, -5}, {-1, -10} } },
	[168] = { .set = { {11, -8}, {4, -6}, {0, -3}, {0, -7} } },
	[169] = { .set = { {7, -4}, {8, -6}, {-6, -4}, {0, -7} } },
	[170] = { .set = { {-1, 0}, {-12, -7}, {10, -7}, {-1, -8} } },
	[171] = { .set = { {7, -4}, {8, -6}, {-6, -4}, {0, -7} } },
	[172] = { .set = { {11, -8}, {4, -6}, {0, -3}, {0, -7} } },
	[173] = { .set = { {11, -14}, {-1, -11}, {9, -4}, {1, -9} } },
	[174] = { .set = { {-1, -20}, {8, -10}, {-10, -10}, {-1, -9} } },
	[175] = { .set = { {-12, -14}, {0, -11}, {-10, -4}, {-2, -9} } },
	[176] = { .set = { {-12, -7}, {-5, -5}, {-1, -2}, {-1, -6} } },
	[177] = { .set = { {-8, -4}, {-9, -6}, {5, -4}, {-1, -7} } },
	[178] = { .set = { {-1, -10}, {-9, -10}, {7, -10}, {-1, -7} } },
	[179] = { .set = { {-1, -23}, {-11, -12}, {9, -12}, {-1, -8} } },
	[180] = { .set = { {-1, 1}, {-12, -6}, {10, -6}, {-1, -7} } },
	[181] = { .set = { {7, -12}, {8, -11}, {-4, -9}, {0, -8} } },
	[182] = { .set = { {-4, -25}, {6, -16}, {-12, -11}, {-2, -9} } },
	[183] = { .set = { {7, -5}, {8, -7}, {-6, -5}, {0, -8} } },
	[184] = { .set = { {9, -13}, {7, -13}, {6, -10}, {2, -10} } },
	[185] = { .set = { {-4, -22}, {-3, -15}, {-5, -8}, {-2, -8} } },
	[186] = { .set = { {12, -9}, {5, -7}, {1, -4}, {1, -8} } },
	[187] = { .set = { {9, -18}, {-1, -17}, {9, -13}, {-1, -12} } },
	[188] = { .set = { {-7, -24}, {-10, -17}, {7, -10}, {-3, -11} } },
	[189] = { .set = { {12, -17}, {0, -14}, {10, -7}, {2, -12} } },
	[190] = { .set = { {-1, -21}, {5, -13}, {-7, -13}, {-1, -9} } },
	[191] = { .set = { {-1, -22}, {9, -10}, {-10, -10}, {-1, -7} } },
	[192] = { .set = { {-1, -20}, {8, -10}, {-10, -10}, {-1, -9} } },
	[193] = { .set = { {-11, -18}, {-1, -17}, {-11, -13}, {-1, -12} } },
	[194] = { .set = { {5, -24}, {8, -17}, {-9, -10}, {1, -11} } },
	[195] = { .set = { {-14, -17}, {-2, -14}, {-12, -7}, {-4, -12} } },
	[196] = { .set = { {-11, -13}, {-9, -13}, {-8, -10}, {-4, -10} } },
	[197] = { .set = { {2, -22}, {1, -15}, {3, -8}, {0, -8} } },
	[198] = { .set = { {-14, -9}, {-7, -7}, {-3, -4}, {-3, -8} } },
	[199] = { .set = { {-9, -12}, {-10, -11}, {2, -9}, {-2, -8} } },
	[200] = { .set = { {2, -25}, {-8, -16}, {10, -11}, {0, -9} } },
	[201] = { .set = { {-9, -5}, {-10, -7}, {4, -5}, {-2, -8} } },
	[202] = { .set = { {-1, 1}, {-12, -6}, {10, -6}, {-1, -7} } },
	[203] = { .set = { {-8, -4}, {-9, -6}, {5, -4}, {-1, -7} } },
	[204] = { .set = { {-12, -8}, {-5, -6}, {-1, -3}, {-1, -7} } },
	[205] = { .set = { {-11, -15}, {1, -12}, {-9, -5}, {-1, -10} } },
	[206] = { .set = { {-1, -20}, {8, -10}, {-10, -10}, {-1, -9} } },
	[207] = { .set = { {9, -15}, {-3, -12}, {7, -5}, {-1, -10} } },
	[208] = { .set = { {11, -8}, {4, -6}, {0, -3}, {0, -7} } },
	[209] = { .set = { {7, -4}, {8, -6}, {-6, -4}, {0, -7} } },
	[210] = { .set = { {-1, -10}, {-9, -10}, {7, -10}, {-1, -7} } },
	[211] = { .set = { {-9, -12}, {-10, -11}, {2, -9}, {-2, -8} } },
	[212] = { .set = { {-11, -13}, {-9, -13}, {-8, -10}, {-4, -10} } },
	[213] = { .set = { {-11, -18}, {-1, -17}, {-11, -13}, {-1, -12} } },
	[214] = { .set = { {-1, -21}, {5, -13}, {-7, -13}, {-1, -9} } },
	[215] = { .set = { {9, -18}, {-1, -17}, {9, -13}, {-1, -12} } },
	[216] = { .set = { {9, -13}, {7, -13}, {6, -10}, {2, -10} } },
	[217] = { .set = { {7, -12}, {8, -11}, {-4, -9}, {0, -8} } },
	[218] = { .set = { {-1, -10}, {-9, -10}, {7, -10}, {-1, -7} } },
	[219] = { .set = { {-2, -8}, {-7, -8}, {4, -9}, {-1, -7} } },
	[220] = { .set = { {1, -13}, {-8, -18}, {8, -8}, {0, -9} } },
	[221] = { .set = { {1, -13}, {-7, -20}, {8, -8}, {0, -9} } },
	[222] = { .set = { {-11, -13}, {-9, -13}, {-8, -10}, {-4, -10} } },
	[223] = { .set = { {-13, -11}, {-10, -10}, {-9, -6}, {-3, -9} } },
	[224] = { .set = { {-13, -6}, {-11, -8}, {-9, -3}, {-3, -9} } },
	[225] = { .set = { {-9, -2}, {-11, -3}, {-7, 1}, {-3, -6} } },
	[226] = { .set = { {9, -13}, {7, -13}, {6, -10}, {2, -10} } },
	[227] = { .set = { {10, -11}, {7, -10}, {6, -6}, {0, -9} } },
	[228] = { .set = { {10, -6}, {8, -8}, {6, -3}, {0, -9} } },
	[229] = { .set = { {6, -2}, {8, -3}, {4, 1}, {0, -6} } },
	[230] = { .set = { {-11, -7}, {-7, -6}, {-5, -3}, {-2, -9} } },
	[231] = { .set = { {-11, -8}, {-8, -6}, {-4, -3}, {0, -10} } },
	[232] = { .set = { {-11, -8}, {-9, -7}, {-7, -3}, {-1, -9} } },
	[233] = { .set = { {10, -7}, {6, -6}, {4, -3}, {1, -9} } },
	[234] = { .set = { {10, -8}, {7, -6}, {3, -3}, {-1, -10} } },
	[235] = { .set = { {10, -8}, {8, -7}, {6, -3}, {0, -9} } },
	[236] = { .set = { {-11, -7}, {-7, -6}, {-5, -3}, {-2, -9} } },
	[237] = { .set = { {-11, -8}, {-8, -6}, {-4, -3}, {0, -10} } },
	[238] = { .set = { {-11, -8}, {-9, -7}, {-7, -3}, {-1, -9} } },
	[239] = { .set = { {-9, -2}, {-11, -3}, {-7, 1}, {-3, -6} } },
	[240] = { .set = { {10, -7}, {6, -6}, {4, -3}, {1, -9} } },
	[241] = { .set = { {10, -8}, {7, -6}, {3, -3}, {-1, -10} } },
	[242] = { .set = { {10, -8}, {8, -7}, {6, -3}, {0, -9} } },
	[243] = { .set = { {7, -2}, {9, -3}, {5, 1}, {1, -6} } },
};

static const ax_anim *const sCharizardAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sCharizardAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_01557),
	AX_ANIM_PTR(sCharizardAnims_2_2),
	AX_ANIM_PTR(sCharizardAnims_2_3),
	AX_ANIM_PTR(sCharizardAnims_2_4),
	AX_ANIM_PTR(gAxSharedAnim_01887),
	AX_ANIM_PTR(sCharizardAnims_2_6),
	AX_ANIM_PTR(sCharizardAnims_2_7),
	AX_ANIM_PTR(gAxSharedAnim_01948),
};

static const ax_anim *const sCharizardAnimTable3[] = {
	AX_ANIM_PTR(sCharizardAnims_3_1),
	AX_ANIM_PTR(sCharizardAnims_3_2),
	AX_ANIM_PTR(sCharizardAnims_3_3),
	AX_ANIM_PTR(sCharizardAnims_3_4),
	AX_ANIM_PTR(sCharizardAnims_3_5),
	AX_ANIM_PTR(sCharizardAnims_3_6),
	AX_ANIM_PTR(sCharizardAnims_3_7),
	AX_ANIM_PTR(sCharizardAnims_3_8),
};

static const ax_anim *const sCharizardAnimTable4[] = {
	AX_ANIM_PTR(sCharizardAnims_4_1),
	AX_ANIM_PTR(sCharizardAnims_4_2),
	AX_ANIM_PTR(sCharizardAnims_4_3),
	AX_ANIM_PTR(sCharizardAnims_4_4),
	AX_ANIM_PTR(sCharizardAnims_4_5),
	AX_ANIM_PTR(sCharizardAnims_4_6),
	AX_ANIM_PTR(sCharizardAnims_4_7),
	AX_ANIM_PTR(sCharizardAnims_4_8),
};

static const ax_anim *const sCharizardAnimTable5[] = {
	AX_ANIM_PTR(sCharizardAnims_5_1),
	AX_ANIM_PTR(sCharizardAnims_5_2),
	AX_ANIM_PTR(sCharizardAnims_5_3),
	AX_ANIM_PTR(sCharizardAnims_5_4),
	AX_ANIM_PTR(sCharizardAnims_5_5),
	AX_ANIM_PTR(sCharizardAnims_5_6),
	AX_ANIM_PTR(sCharizardAnims_5_7),
	AX_ANIM_PTR(sCharizardAnims_5_8),
};

static const ax_anim *const sCharizardAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
};

static const ax_anim *const sCharizardAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00396),
	AX_ANIM_PTR(gAxSharedAnim_00402),
	AX_ANIM_PTR(gAxSharedAnim_00413),
	AX_ANIM_PTR(gAxSharedAnim_00422),
	AX_ANIM_PTR(gAxSharedAnim_00434),
	AX_ANIM_PTR(gAxSharedAnim_00442),
	AX_ANIM_PTR(gAxSharedAnim_00451),
	AX_ANIM_PTR(gAxSharedAnim_00461),
};

static const ax_anim *const sCharizardAnimTable8[] = {
	AX_ANIM_PTR(sCharizardAnims_8_1),
	AX_ANIM_PTR(sCharizardAnims_8_2),
	AX_ANIM_PTR(sCharizardAnims_8_3),
	AX_ANIM_PTR(sCharizardAnims_8_4),
	AX_ANIM_PTR(sCharizardAnims_8_5),
	AX_ANIM_PTR(sCharizardAnims_8_6),
	AX_ANIM_PTR(sCharizardAnims_8_7),
	AX_ANIM_PTR(sCharizardAnims_8_8),
};

static const ax_anim *const sCharizardAnimTable9[] = {
	AX_ANIM_PTR(gAxSharedAnim_00703),
	AX_ANIM_PTR(sCharizardAnims_9_2),
	AX_ANIM_PTR(gAxSharedAnim_00769),
	AX_ANIM_PTR(sCharizardAnims_9_4),
	AX_ANIM_PTR(sCharizardAnims_9_5),
	AX_ANIM_PTR(sCharizardAnims_9_6),
	AX_ANIM_PTR(gAxSharedAnim_00720),
	AX_ANIM_PTR(sCharizardAnims_9_8),
};

static const ax_anim *const sCharizardAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00801),
	AX_ANIM_PTR(gAxSharedAnim_00813),
	AX_ANIM_PTR(gAxSharedAnim_00827),
	AX_ANIM_PTR(gAxSharedAnim_00838),
	AX_ANIM_PTR(gAxSharedAnim_00849),
	AX_ANIM_PTR(gAxSharedAnim_00862),
	AX_ANIM_PTR(gAxSharedAnim_00879),
	AX_ANIM_PTR(gAxSharedAnim_00889),
};

static const ax_anim *const sCharizardAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_00900),
	AX_ANIM_PTR(gAxSharedAnim_00941),
	AX_ANIM_PTR(gAxSharedAnim_00976),
	AX_ANIM_PTR(gAxSharedAnim_01026),
	AX_ANIM_PTR(gAxSharedAnim_01076),
	AX_ANIM_PTR(gAxSharedAnim_01122),
	AX_ANIM_PTR(gAxSharedAnim_01166),
	AX_ANIM_PTR(gAxSharedAnim_01198),
};

static const ax_anim *const sCharizardAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01243),
	AX_ANIM_PTR(gAxSharedAnim_01327),
	AX_ANIM_PTR(gAxSharedAnim_01308),
	AX_ANIM_PTR(gAxSharedAnim_01292),
	AX_ANIM_PTR(gAxSharedAnim_01291),
	AX_ANIM_PTR(gAxSharedAnim_01280),
	AX_ANIM_PTR(gAxSharedAnim_01260),
	AX_ANIM_PTR(gAxSharedAnim_01244),
};

static const ax_anim *const sCharizardAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01335),
	AX_ANIM_PTR(gAxSharedAnim_01409),
	AX_ANIM_PTR(gAxSharedAnim_01397),
	AX_ANIM_PTR(gAxSharedAnim_01386),
	AX_ANIM_PTR(gAxSharedAnim_01374),
	AX_ANIM_PTR(gAxSharedAnim_01366),
	AX_ANIM_PTR(gAxSharedAnim_01358),
	AX_ANIM_PTR(gAxSharedAnim_01348),
};

static const ax_anim *const sCharizardAnimTable14[] = {
	AX_ANIM_PTR(gAxSharedAnim_00104),
	AX_ANIM_PTR(gAxSharedAnim_00104),
	AX_ANIM_PTR(gAxSharedAnim_00104),
	AX_ANIM_PTR(gAxSharedAnim_00104),
	AX_ANIM_PTR(gAxSharedAnim_00104),
	AX_ANIM_PTR(gAxSharedAnim_00104),
	AX_ANIM_PTR(gAxSharedAnim_00104),
	AX_ANIM_PTR(gAxSharedAnim_00104),
};

static const ax_anim *const sCharizardAnimTable15[] = {
	AX_ANIM_PTR(sCharizardAnims_15_1),
	AX_ANIM_PTR(sCharizardAnims_15_1),
	AX_ANIM_PTR(sCharizardAnims_15_3),
	AX_ANIM_PTR(sCharizardAnims_15_1),
	AX_ANIM_PTR(sCharizardAnims_15_1),
	AX_ANIM_PTR(sCharizardAnims_15_1),
	AX_ANIM_PTR(sCharizardAnims_15_1),
	AX_ANIM_PTR(sCharizardAnims_15_1),
};

static const ax_anim *const sCharizardAnimTable16[] = {
	AX_ANIM_PTR(sCharizardAnims_16_1),
	AX_ANIM_PTR(sCharizardAnims_16_1),
	AX_ANIM_PTR(sCharizardAnims_16_3),
	AX_ANIM_PTR(sCharizardAnims_16_1),
	AX_ANIM_PTR(sCharizardAnims_16_1),
	AX_ANIM_PTR(sCharizardAnims_16_1),
	AX_ANIM_PTR(sCharizardAnims_16_1),
	AX_ANIM_PTR(sCharizardAnims_16_1),
};

static const ax_anim *const sCharizardAnimTable17[] = {
	AX_ANIM_PTR(sCharizardAnims_17_1),
	AX_ANIM_PTR(sCharizardAnims_17_1),
	AX_ANIM_PTR(sCharizardAnims_17_3),
	AX_ANIM_PTR(sCharizardAnims_17_1),
	AX_ANIM_PTR(sCharizardAnims_17_1),
	AX_ANIM_PTR(sCharizardAnims_17_1),
	AX_ANIM_PTR(sCharizardAnims_17_1),
	AX_ANIM_PTR(sCharizardAnims_17_1),
};

static const ax_anim *const *const sAxAnimationsCharizard[] = {
	sCharizardAnimTable1,
	sCharizardAnimTable2,
	sCharizardAnimTable3,
	sCharizardAnimTable4,
	sCharizardAnimTable5,
	sCharizardAnimTable6,
	sCharizardAnimTable7,
	sCharizardAnimTable8,
	sCharizardAnimTable9,
	sCharizardAnimTable10,
	sCharizardAnimTable11,
	sCharizardAnimTable12,
	sCharizardAnimTable13,
	sCharizardAnimTable14,
	sCharizardAnimTable15,
	sCharizardAnimTable16,
	sCharizardAnimTable17,
};

static const ax_sprite *const sAxSpritesCharizard[] = {
	sCharizardSprites1,
	sCharizardSprites2,
	sCharizardSprites3,
	sCharizardSprites4,
	sCharizardSprites5,
	sCharizardSprites6,
	sCharizardSprites7,
	sCharizardSprites8,
	sCharizardSprites9,
	sCharizardSprites10,
	sCharizardSprites11,
	sCharizardSprites12,
	sCharizardSprites13,
	sCharizardSprites14,
	sCharizardSprites15,
	sCharizardSprites16,
	sCharizardSprites17,
	sCharizardSprites18,
	sCharizardSprites19,
	sCharizardSprites20,
	sCharizardSprites21,
	sCharizardSprites22,
	sCharizardSprites23,
	sCharizardSprites24,
	sCharizardSprites25,
	sCharizardSprites26,
	sCharizardSprites27,
	sCharizardSprites28,
	sCharizardSprites29,
	sCharizardSprites30,
	sCharizardSprites31,
	sCharizardSprites32,
	sCharizardSprites33,
	sCharizardSprites34,
	sCharizardSprites35,
	sCharizardSprites36,
	sCharizardSprites37,
	sCharizardSprites38,
	sCharizardSprites39,
	sCharizardSprites40,
	sCharizardSprites41,
	sCharizardSprites42,
	sCharizardSprites43,
	sCharizardSprites44,
	sCharizardSprites45,
	sCharizardSprites46,
	sCharizardSprites47,
	sCharizardSprites48,
	sCharizardSprites49,
	sCharizardSprites50,
	sCharizardSprites51,
	sCharizardSprites52,
	sCharizardSprites53,
	sCharizardSprites54,
	sCharizardSprites55,
	sCharizardSprites56,
	sCharizardSprites57,
	sCharizardSprites58,
	sCharizardSprites59,
	sCharizardSprites60,
	sCharizardSprites61,
	sCharizardSprites62,
	sCharizardSprites63,
	sCharizardSprites64,
	sCharizardSprites65,
	sCharizardSprites66,
	sCharizardSprites67,
	sCharizardSprites68,
	sCharizardSprites69,
	sCharizardSprites70,
	sCharizardSprites71,
	sCharizardSprites72,
	sCharizardSprites73,
	sCharizardSprites74,
	sCharizardSprites75,
	sCharizardSprites76,
	sCharizardSprites77,
	sCharizardSprites78,
	sCharizardSprites79,
	sCharizardSprites80,
	sCharizardSprites81,
	sCharizardSprites82,
	sCharizardSprites83,
};

static const axmain sAxMainCharizard = {
	.poses = sAxPosesCharizard,
	.animations = sAxAnimationsCharizard,
	.animCount = ARRAY_COUNT(sAxAnimationsCharizard),
	.spriteData = sAxSpritesCharizard,
	.positions = sAxPositionsCharizard,
};
