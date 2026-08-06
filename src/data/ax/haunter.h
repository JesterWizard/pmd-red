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
static const axmain sAxMainHaunter;
const SiroArchive gAxHaunter = {"SIRO", &sAxMainHaunter};

static const ax_pose sHaunterPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose4[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose5[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose6[] = {
	AX_POSE(5, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose7[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose8[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose9[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose10[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose11[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose12[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose13[] = {
	AX_POSE(12, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose14[] = {
	AX_POSE(13, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose15[] = {
	AX_POSE(14, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose16[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose17[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose18[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose19[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose20[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose21[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose22[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose23[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose24[] = {
	AX_POSE(5, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose50[] = {
	AX_POSE(15, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(16, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(3, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(4, 3, 2)),
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose51[] = {
	AX_POSE(15, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(16, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(4, 3, 2)),
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose52[] = {
	AX_POSE(18, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(16, OAM1(5, ST_OAM_SQUARE     , 2), OAM2(253, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose53[] = {
	AX_POSE(15, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(16, OAM1(5, ST_OAM_SQUARE     , 2), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose54[] = {
	AX_POSE(18, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(15, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(243, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(12, 3, 2)),
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose55[] = {
	AX_POSE(15, OAM1(5, ST_OAM_SQUARE     , 2), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(4, 3, 2)),
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose57[] = {
	AX_POSE(19, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(20, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose58[] = {
	AX_POSE(19, OAM1(247, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(3, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(20, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose59[] = {
	AX_POSE(22, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(19, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(254, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(20, 3, 2)),
	AX_POSE(21, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(36, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose60[] = {
	AX_POSE(19, OAM1(0, ST_OAM_SQUARE     , 2), OAM2(6, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(21, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(20, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose61[] = {
	AX_POSE(19, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(20, 3, 2)),
	AX_POSE(21, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(12, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(36, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose62[] = {
	AX_POSE(19, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(227, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(21, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(12, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(20, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose64[] = {
	AX_POSE(24, OAM1(247, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(26, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(20, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose65[] = {
	AX_POSE(24, OAM1(247, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(26, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(20, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose66[] = {
	AX_POSE(27, OAM1(249, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 1), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(24, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 2)),
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE(26, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(28, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose67[] = {
	AX_POSE(24, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(26, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(20, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose68[] = {
	AX_POSE(24, OAM1(249, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(27, OAM1(232, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(20, 3, 2)),
	AX_POSE(26, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(12, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(28, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose69[] = {
	AX_POSE(24, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(26, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(20, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose71[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(30, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(18, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose72[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(30, OAM1(248, ST_OAM_H_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(18, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose73[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(240, ST_OAM_H_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(31, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(18, 3, 2)),
	AX_POSE(30, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(14, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(34, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose74[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(230, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(30, OAM1(225, ST_OAM_H_RECTANGLE, 1), OAM2(13, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(18, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose75[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(29, OAM1(221, ST_OAM_H_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(32, 3, 2)),
	AX_POSE(30, OAM1(252, ST_OAM_H_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(34, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose76[] = {
	AX_POSE(30, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(249, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(2, 3, 2)),
	AX_POSE(29, OAM1(221, ST_OAM_H_RECTANGLE, 1), OAM2(6, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(18, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose77[] = {
	AX_POSE(12, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose78[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(34, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(35, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(18, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose79[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(34, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(35, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(18, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose80[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(34, OAM1(224, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 2)),
	AX_POSE(35, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(26, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose81[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(34, OAM1(221, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(35, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(18, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose82[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(6, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(16, 3, 2)),
	AX_POSE(34, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 2)),
	AX_POSE(35, OAM1(224, ST_OAM_H_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(26, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose83[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(34, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(35, OAM1(221, ST_OAM_H_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(18, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose85[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(16, 3, 2)),
	AX_POSE(30, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(18, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose86[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(16, 3, 2)),
	AX_POSE(30, OAM1(248, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(18, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose87[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(240, ST_OAM_H_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(16, 3, 2)),
	AX_POSE(31, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(230, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(18, 3, 2)),
	AX_POSE(30, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(34, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose88[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(16, 3, 2)),
	AX_POSE(30, OAM1(222, ST_OAM_H_RECTANGLE, 1), OAM2(228, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(18, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose89[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(29, OAM1(223, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(32, 3, 2)),
	AX_POSE(30, OAM1(252, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(34, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose90[] = {
	AX_POSE(30, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 2)),
	AX_POSE(29, OAM1(220, ST_OAM_H_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(18, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose92[] = {
	AX_POSE(24, OAM1(247, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(26, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(20, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose93[] = {
	AX_POSE(24, OAM1(247, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(26, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(20, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose94[] = {
	AX_POSE(27, OAM1(249, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 1), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(24, OAM1(247, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE(26, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(28, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose95[] = {
	AX_POSE(24, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(26, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(20, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose96[] = {
	AX_POSE(24, OAM1(249, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(27, OAM1(232, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(20, 3, 2)),
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(28, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose97[] = {
	AX_POSE(24, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(26, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(229, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(20, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose99[] = {
	AX_POSE(19, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(20, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose100[] = {
	AX_POSE(19, OAM1(247, ST_OAM_SQUARE     , 1), OAM2(3, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(20, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose101[] = {
	AX_POSE(22, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(19, OAM1(254, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(20, 3, 2)),
	AX_POSE(21, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(36, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose102[] = {
	AX_POSE(19, OAM1(0, ST_OAM_SQUARE     , 2), OAM2(232, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(21, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(20, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose103[] = {
	AX_POSE(19, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(20, 3, 2)),
	AX_POSE(21, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(36, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose104[] = {
	AX_POSE(19, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(21, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(228, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(20, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose106[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose107[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose109[] = {
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose110[] = {
	AX_POSE(40, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose112[] = {
	AX_POSE(41, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose113[] = {
	AX_POSE(42, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose115[] = {
	AX_POSE(43, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose116[] = {
	AX_POSE(44, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose118[] = {
	AX_POSE(45, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose119[] = {
	AX_POSE(46, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose121[] = {
	AX_POSE(43, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose122[] = {
	AX_POSE(44, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose124[] = {
	AX_POSE(41, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose125[] = {
	AX_POSE(42, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose127[] = {
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose128[] = {
	AX_POSE(40, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose153[] = {
	AX_POSE(47, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose154[] = {
	AX_POSE(48, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose155[] = {
	AX_POSE(49, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose156[] = {
	AX_POSE(50, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose157[] = {
	AX_POSE(51, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose158[] = {
	AX_POSE(52, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose159[] = {
	AX_POSE(53, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose160[] = {
	AX_POSE(52, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose161[] = {
	AX_POSE(51, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHaunterPose162[] = {
	AX_POSE(50, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const u8 sHaunterAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_1_1.lz");
static const u8 sHaunterAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_1_2.lz");
static const u8 sHaunterAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_1_3.lz");
static const u8 sHaunterAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_1_4.lz");
static const u8 sHaunterAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_1_5.lz");
static const u8 sHaunterAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_1_6.lz");
static const u8 sHaunterAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_1_7.lz");
static const u8 sHaunterAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_1_8.lz");
static const u8 sHaunterAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_2_1.lz");
static const u8 sHaunterAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_2_2.lz");
static const u8 sHaunterAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_2_3.lz");
static const u8 sHaunterAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_2_4.lz");
static const u8 sHaunterAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_2_5.lz");
static const u8 sHaunterAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_2_6.lz");
static const u8 sHaunterAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_2_7.lz");
static const u8 sHaunterAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_2_8.lz");
static const u8 sHaunterAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_3_1.lz");
static const u8 sHaunterAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_3_2.lz");
static const u8 sHaunterAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_3_3.lz");
static const u8 sHaunterAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_3_4.lz");
static const u8 sHaunterAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_3_5.lz");
static const u8 sHaunterAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_3_6.lz");
static const u8 sHaunterAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_3_7.lz");
static const u8 sHaunterAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_3_8.lz");
static const u8 sHaunterAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_4_1.lz");
static const u8 sHaunterAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_4_2.lz");
static const u8 sHaunterAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_4_3.lz");
static const u8 sHaunterAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_4_4.lz");
static const u8 sHaunterAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_4_5.lz");
static const u8 sHaunterAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_4_6.lz");
static const u8 sHaunterAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_4_7.lz");
static const u8 sHaunterAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_4_8.lz");
static const u8 sHaunterAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_5_1.lz");
static const u8 sHaunterAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_5_2.lz");
static const u8 sHaunterAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_5_3.lz");
static const u8 sHaunterAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_5_4.lz");
static const u8 sHaunterAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_5_5.lz");
static const u8 sHaunterAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_5_6.lz");
static const u8 sHaunterAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_5_7.lz");
static const u8 sHaunterAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_5_8.lz");
static const u8 sHaunterAnims_6_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_6_1.lz");
static const u8 sHaunterAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_8_1.lz");
static const u8 sHaunterAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_8_2.lz");
static const u8 sHaunterAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_8_3.lz");
static const u8 sHaunterAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_8_4.lz");
static const u8 sHaunterAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_8_5.lz");
static const u8 sHaunterAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_8_6.lz");
static const u8 sHaunterAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_8_7.lz");
static const u8 sHaunterAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_8_8.lz");
static const u8 sHaunterAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_9_4.lz");
static const u8 sHaunterAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_9_6.lz");
static const u8 sHaunterAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_11_1.lz");
static const u8 sHaunterAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_11_2.lz");
static const u8 sHaunterAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_11_3.lz");
static const u8 sHaunterAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_11_4.lz");
static const u8 sHaunterAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_11_5.lz");
static const u8 sHaunterAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_11_6.lz");
static const u8 sHaunterAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_11_7.lz");
static const u8 sHaunterAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/haunter/sHaunterAnims_11_8.lz");

static const u8 sHaunterGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_1.4bpp.lz");
static const ax_sprite sHaunterSprites1[] = {
	{sHaunterGfx1, ARRAY_COUNT(sHaunterGfx1)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_2.4bpp.lz");
static const ax_sprite sHaunterSprites2[] = {
	{sHaunterGfx2, ARRAY_COUNT(sHaunterGfx2)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_3.4bpp.lz");
static const ax_sprite sHaunterSprites3[] = {
	{sHaunterGfx3, ARRAY_COUNT(sHaunterGfx3)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_4.4bpp.lz");
static const ax_sprite sHaunterSprites4[] = {
	{sHaunterGfx4, ARRAY_COUNT(sHaunterGfx4)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_5.4bpp.lz");
static const ax_sprite sHaunterSprites5[] = {
	{sHaunterGfx5, ARRAY_COUNT(sHaunterGfx5)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_6.4bpp.lz");
static const ax_sprite sHaunterSprites6[] = {
	{sHaunterGfx6, ARRAY_COUNT(sHaunterGfx6)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_7.4bpp.lz");
static const ax_sprite sHaunterSprites7[] = {
	{sHaunterGfx7, ARRAY_COUNT(sHaunterGfx7)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_8.4bpp.lz");
static const ax_sprite sHaunterSprites8[] = {
	{sHaunterGfx8, ARRAY_COUNT(sHaunterGfx8)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_9.4bpp.lz");
static const ax_sprite sHaunterSprites9[] = {
	{sHaunterGfx9, ARRAY_COUNT(sHaunterGfx9)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_10.4bpp.lz");
static const ax_sprite sHaunterSprites10[] = {
	{sHaunterGfx10, ARRAY_COUNT(sHaunterGfx10)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_11.4bpp.lz");
static const ax_sprite sHaunterSprites11[] = {
	{sHaunterGfx11, ARRAY_COUNT(sHaunterGfx11)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_12.4bpp.lz");
static const ax_sprite sHaunterSprites12[] = {
	{sHaunterGfx12, ARRAY_COUNT(sHaunterGfx12)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_13.4bpp.lz");
static const ax_sprite sHaunterSprites13[] = {
	{sHaunterGfx13, ARRAY_COUNT(sHaunterGfx13)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_14.4bpp.lz");
static const ax_sprite sHaunterSprites14[] = {
	{sHaunterGfx14, ARRAY_COUNT(sHaunterGfx14)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_15.4bpp.lz");
static const ax_sprite sHaunterSprites15[] = {
	{sHaunterGfx15, ARRAY_COUNT(sHaunterGfx15)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_16.4bpp.lz");
static const ax_sprite sHaunterSprites16[] = {
	{sHaunterGfx16, ARRAY_COUNT(sHaunterGfx16)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_17.4bpp.lz");
static const ax_sprite sHaunterSprites17[] = {
	{sHaunterGfx17, ARRAY_COUNT(sHaunterGfx17)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_18.4bpp.lz");
static const ax_sprite sHaunterSprites18[] = {
	{sHaunterGfx18, ARRAY_COUNT(sHaunterGfx18)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sHaunterGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_19.4bpp.lz");
static const u8 sHaunterGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_19_1.4bpp.lz");
static const u8 sHaunterGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_19_2.4bpp.lz");
static const ax_sprite sHaunterSprites19[] = {
	{sHaunterGfx19, ARRAY_COUNT(sHaunterGfx19)}, 
	{NULL, 32}, 
	{sHaunterGfx19_1, ARRAY_COUNT(sHaunterGfx19_1)}, 
	{NULL, 32}, 
	{sHaunterGfx19_2, ARRAY_COUNT(sHaunterGfx19_2)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_20.4bpp.lz");
static const ax_sprite sHaunterSprites20[] = {
	{sHaunterGfx20, ARRAY_COUNT(sHaunterGfx20)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_21.4bpp.lz");
static const u8 sHaunterGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_21_1.4bpp.lz");
static const u8 sHaunterGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_21_2.4bpp.lz");
static const ax_sprite sHaunterSprites21[] = {
	{sHaunterGfx21, ARRAY_COUNT(sHaunterGfx21)}, 
	{NULL, 32}, 
	{sHaunterGfx21_1, ARRAY_COUNT(sHaunterGfx21_1)}, 
	{NULL, 32}, 
	{sHaunterGfx21_2, ARRAY_COUNT(sHaunterGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHaunterGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_22.4bpp.lz");
static const ax_sprite sHaunterSprites22[] = {
	{sHaunterGfx22, ARRAY_COUNT(sHaunterGfx22)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_23.4bpp.lz");
static const u8 sHaunterGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_23_1.4bpp.lz");
static const ax_sprite sHaunterSprites23[] = {
	{NULL, 224}, 
	{sHaunterGfx23, ARRAY_COUNT(sHaunterGfx23)}, 
	{NULL, 32}, 
	{sHaunterGfx23_1, ARRAY_COUNT(sHaunterGfx23_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sHaunterGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_24.4bpp.lz");
static const u8 sHaunterGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_24_1.4bpp.lz");
static const u8 sHaunterGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_24_2.4bpp.lz");
static const u8 sHaunterGfx24_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_24_3.4bpp.lz");
static const ax_sprite sHaunterSprites24[] = {
	{NULL, 32}, 
	{sHaunterGfx24, ARRAY_COUNT(sHaunterGfx24)}, 
	{NULL, 32}, 
	{sHaunterGfx24_1, ARRAY_COUNT(sHaunterGfx24_1)}, 
	{NULL, 32}, 
	{sHaunterGfx24_2, ARRAY_COUNT(sHaunterGfx24_2)}, 
	{NULL, 64}, 
	{sHaunterGfx24_3, ARRAY_COUNT(sHaunterGfx24_3)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sHaunterGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_25.4bpp.lz");
static const ax_sprite sHaunterSprites25[] = {
	{sHaunterGfx25, ARRAY_COUNT(sHaunterGfx25)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_26.4bpp.lz");
static const u8 sHaunterGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_26_1.4bpp.lz");
static const u8 sHaunterGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_26_2.4bpp.lz");
static const ax_sprite sHaunterSprites26[] = {
	{sHaunterGfx26, ARRAY_COUNT(sHaunterGfx26)}, 
	{NULL, 64}, 
	{sHaunterGfx26_1, ARRAY_COUNT(sHaunterGfx26_1)}, 
	{NULL, 32}, 
	{sHaunterGfx26_2, ARRAY_COUNT(sHaunterGfx26_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHaunterGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_27.4bpp.lz");
static const ax_sprite sHaunterSprites27[] = {
	{NULL, 64}, 
	{sHaunterGfx27, ARRAY_COUNT(sHaunterGfx27)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_28.4bpp.lz");
static const ax_sprite sHaunterSprites28[] = {
	{sHaunterGfx28, ARRAY_COUNT(sHaunterGfx28)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sHaunterGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_29.4bpp.lz");
static const u8 sHaunterGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_29_1.4bpp.lz");
static const u8 sHaunterGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_29_2.4bpp.lz");
static const ax_sprite sHaunterSprites29[] = {
	{sHaunterGfx29, ARRAY_COUNT(sHaunterGfx29)}, 
	{NULL, 32}, 
	{sHaunterGfx29_1, ARRAY_COUNT(sHaunterGfx29_1)}, 
	{NULL, 32}, 
	{sHaunterGfx29_2, ARRAY_COUNT(sHaunterGfx29_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHaunterGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_30.4bpp.lz");
static const ax_sprite sHaunterSprites30[] = {
	{sHaunterGfx30, ARRAY_COUNT(sHaunterGfx30)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_31.4bpp.lz");
static const ax_sprite sHaunterSprites31[] = {
	{sHaunterGfx31, ARRAY_COUNT(sHaunterGfx31)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_32.4bpp.lz");
static const u8 sHaunterGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_32_1.4bpp.lz");
static const u8 sHaunterGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_32_2.4bpp.lz");
static const u8 sHaunterGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_32_3.4bpp.lz");
static const ax_sprite sHaunterSprites32[] = {
	{sHaunterGfx32, ARRAY_COUNT(sHaunterGfx32)}, 
	{NULL, 96}, 
	{sHaunterGfx32_1, ARRAY_COUNT(sHaunterGfx32_1)}, 
	{NULL, 64}, 
	{sHaunterGfx32_2, ARRAY_COUNT(sHaunterGfx32_2)}, 
	{NULL, 64}, 
	{sHaunterGfx32_3, ARRAY_COUNT(sHaunterGfx32_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sHaunterGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_33.4bpp.lz");
static const u8 sHaunterGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_33_1.4bpp.lz");
static const u8 sHaunterGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_33_2.4bpp.lz");
static const ax_sprite sHaunterSprites33[] = {
	{sHaunterGfx33, ARRAY_COUNT(sHaunterGfx33)}, 
	{NULL, 32}, 
	{sHaunterGfx33_1, ARRAY_COUNT(sHaunterGfx33_1)}, 
	{NULL, 64}, 
	{sHaunterGfx33_2, ARRAY_COUNT(sHaunterGfx33_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sHaunterGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_34.4bpp.lz");
static const u8 sHaunterGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_34_1.4bpp.lz");
static const ax_sprite sHaunterSprites34[] = {
	{sHaunterGfx34, ARRAY_COUNT(sHaunterGfx34)}, 
	{NULL, 32}, 
	{sHaunterGfx34_1, ARRAY_COUNT(sHaunterGfx34_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sHaunterGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_35.4bpp.lz");
static const ax_sprite sHaunterSprites35[] = {
	{sHaunterGfx35, ARRAY_COUNT(sHaunterGfx35)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_36.4bpp.lz");
static const ax_sprite sHaunterSprites36[] = {
	{sHaunterGfx36, ARRAY_COUNT(sHaunterGfx36)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_37.4bpp.lz");
static const u8 sHaunterGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_37_1.4bpp.lz");
static const ax_sprite sHaunterSprites37[] = {
	{sHaunterGfx37, ARRAY_COUNT(sHaunterGfx37)}, 
	{NULL, 32}, 
	{sHaunterGfx37_1, ARRAY_COUNT(sHaunterGfx37_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sHaunterGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_38.4bpp.lz");
static const ax_sprite sHaunterSprites38[] = {
	{sHaunterGfx38, ARRAY_COUNT(sHaunterGfx38)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_39.4bpp.lz");
static const ax_sprite sHaunterSprites39[] = {
	{sHaunterGfx39, ARRAY_COUNT(sHaunterGfx39)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_40.4bpp.lz");
static const ax_sprite sHaunterSprites40[] = {
	{NULL, 32}, 
	{sHaunterGfx40, ARRAY_COUNT(sHaunterGfx40)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_41.4bpp.lz");
static const ax_sprite sHaunterSprites41[] = {
	{NULL, 32}, 
	{sHaunterGfx41, ARRAY_COUNT(sHaunterGfx41)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_42.4bpp.lz");
static const u8 sHaunterGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_42_1.4bpp.lz");
static const ax_sprite sHaunterSprites42[] = {
	{NULL, 32}, 
	{sHaunterGfx42, ARRAY_COUNT(sHaunterGfx42)}, 
	{NULL, 32}, 
	{sHaunterGfx42_1, ARRAY_COUNT(sHaunterGfx42_1)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_43.4bpp.lz");
static const u8 sHaunterGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_43_1.4bpp.lz");
static const u8 sHaunterGfx43_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_43_2.4bpp.lz");
static const ax_sprite sHaunterSprites43[] = {
	{NULL, 32}, 
	{sHaunterGfx43, ARRAY_COUNT(sHaunterGfx43)}, 
	{NULL, 32}, 
	{sHaunterGfx43_1, ARRAY_COUNT(sHaunterGfx43_1)}, 
	{NULL, 32}, 
	{sHaunterGfx43_2, ARRAY_COUNT(sHaunterGfx43_2)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_44.4bpp.lz");
static const ax_sprite sHaunterSprites44[] = {
	{NULL, 32}, 
	{sHaunterGfx44, ARRAY_COUNT(sHaunterGfx44)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_45.4bpp.lz");
static const ax_sprite sHaunterSprites45[] = {
	{NULL, 32}, 
	{sHaunterGfx45, ARRAY_COUNT(sHaunterGfx45)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_46.4bpp.lz");
static const u8 sHaunterGfx46_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_46_1.4bpp.lz");
static const u8 sHaunterGfx46_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_46_2.4bpp.lz");
static const ax_sprite sHaunterSprites46[] = {
	{NULL, 32}, 
	{sHaunterGfx46, ARRAY_COUNT(sHaunterGfx46)}, 
	{NULL, 32}, 
	{sHaunterGfx46_1, ARRAY_COUNT(sHaunterGfx46_1)}, 
	{NULL, 32}, 
	{sHaunterGfx46_2, ARRAY_COUNT(sHaunterGfx46_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sHaunterGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_47.4bpp.lz");
static const u8 sHaunterGfx47_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_47_1.4bpp.lz");
static const ax_sprite sHaunterSprites47[] = {
	{sHaunterGfx47, ARRAY_COUNT(sHaunterGfx47)}, 
	{NULL, 32}, 
	{sHaunterGfx47_1, ARRAY_COUNT(sHaunterGfx47_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sHaunterGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_48.4bpp.lz");
static const ax_sprite sHaunterSprites48[] = {
	{sHaunterGfx48, ARRAY_COUNT(sHaunterGfx48)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_49.4bpp.lz");
static const ax_sprite sHaunterSprites49[] = {
	{sHaunterGfx49, ARRAY_COUNT(sHaunterGfx49)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_50.4bpp.lz");
static const ax_sprite sHaunterSprites50[] = {
	{sHaunterGfx50, ARRAY_COUNT(sHaunterGfx50)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_51.4bpp.lz");
static const ax_sprite sHaunterSprites51[] = {
	{sHaunterGfx51, ARRAY_COUNT(sHaunterGfx51)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_52.4bpp.lz");
static const ax_sprite sHaunterSprites52[] = {
	{sHaunterGfx52, ARRAY_COUNT(sHaunterGfx52)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_53.4bpp.lz");
static const ax_sprite sHaunterSprites53[] = {
	{sHaunterGfx53, ARRAY_COUNT(sHaunterGfx53)}, 
	{NULL, 0}
};
static const u8 sHaunterGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/haunter/sprite_54.4bpp.lz");
static const ax_sprite sHaunterSprites54[] = {
	{sHaunterGfx54, ARRAY_COUNT(sHaunterGfx54)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesHaunter[] = {
	sHaunterPose1,
	sHaunterPose2,
	sHaunterPose3,
	sHaunterPose4,
	sHaunterPose5,
	sHaunterPose6,
	sHaunterPose7,
	sHaunterPose8,
	sHaunterPose9,
	sHaunterPose10,
	sHaunterPose11,
	sHaunterPose12,
	sHaunterPose13,
	sHaunterPose14,
	sHaunterPose15,
	sHaunterPose16,
	sHaunterPose17,
	sHaunterPose18,
	sHaunterPose19,
	sHaunterPose20,
	sHaunterPose21,
	sHaunterPose22,
	sHaunterPose23,
	sHaunterPose24,
	sHaunterPose1,
	sHaunterPose2,
	sHaunterPose3,
	sHaunterPose4,
	sHaunterPose5,
	sHaunterPose6,
	sHaunterPose7,
	sHaunterPose8,
	sHaunterPose9,
	sHaunterPose10,
	sHaunterPose11,
	sHaunterPose12,
	sHaunterPose13,
	sHaunterPose14,
	sHaunterPose15,
	sHaunterPose16,
	sHaunterPose17,
	sHaunterPose18,
	sHaunterPose19,
	sHaunterPose20,
	sHaunterPose21,
	sHaunterPose22,
	sHaunterPose23,
	sHaunterPose24,
	sHaunterPose1,
	sHaunterPose50,
	sHaunterPose51,
	sHaunterPose52,
	sHaunterPose53,
	sHaunterPose54,
	sHaunterPose55,
	sHaunterPose4,
	sHaunterPose57,
	sHaunterPose58,
	sHaunterPose59,
	sHaunterPose60,
	sHaunterPose61,
	sHaunterPose62,
	sHaunterPose7,
	sHaunterPose64,
	sHaunterPose65,
	sHaunterPose66,
	sHaunterPose67,
	sHaunterPose68,
	sHaunterPose69,
	sHaunterPose10,
	sHaunterPose71,
	sHaunterPose72,
	sHaunterPose73,
	sHaunterPose74,
	sHaunterPose75,
	sHaunterPose76,
	sHaunterPose77,
	sHaunterPose78,
	sHaunterPose79,
	sHaunterPose80,
	sHaunterPose81,
	sHaunterPose82,
	sHaunterPose83,
	sHaunterPose16,
	sHaunterPose85,
	sHaunterPose86,
	sHaunterPose87,
	sHaunterPose88,
	sHaunterPose89,
	sHaunterPose90,
	sHaunterPose19,
	sHaunterPose92,
	sHaunterPose93,
	sHaunterPose94,
	sHaunterPose95,
	sHaunterPose96,
	sHaunterPose97,
	sHaunterPose22,
	sHaunterPose99,
	sHaunterPose100,
	sHaunterPose101,
	sHaunterPose102,
	sHaunterPose103,
	sHaunterPose104,
	sHaunterPose1,
	sHaunterPose106,
	sHaunterPose107,
	sHaunterPose4,
	sHaunterPose109,
	sHaunterPose110,
	sHaunterPose7,
	sHaunterPose112,
	sHaunterPose113,
	sHaunterPose10,
	sHaunterPose115,
	sHaunterPose116,
	sHaunterPose77,
	sHaunterPose118,
	sHaunterPose119,
	sHaunterPose16,
	sHaunterPose121,
	sHaunterPose122,
	sHaunterPose19,
	sHaunterPose124,
	sHaunterPose125,
	sHaunterPose22,
	sHaunterPose127,
	sHaunterPose128,
	sHaunterPose1,
	sHaunterPose106,
	sHaunterPose107,
	sHaunterPose4,
	sHaunterPose109,
	sHaunterPose110,
	sHaunterPose7,
	sHaunterPose112,
	sHaunterPose113,
	sHaunterPose10,
	sHaunterPose115,
	sHaunterPose116,
	sHaunterPose77,
	sHaunterPose118,
	sHaunterPose119,
	sHaunterPose16,
	sHaunterPose121,
	sHaunterPose122,
	sHaunterPose19,
	sHaunterPose124,
	sHaunterPose125,
	sHaunterPose22,
	sHaunterPose127,
	sHaunterPose128,
	sHaunterPose153,
	sHaunterPose154,
	sHaunterPose155,
	sHaunterPose156,
	sHaunterPose157,
	sHaunterPose158,
	sHaunterPose159,
	sHaunterPose160,
	sHaunterPose161,
	sHaunterPose162,
	sHaunterPose1,
	sHaunterPose3,
	sHaunterPose4,
	sHaunterPose6,
	sHaunterPose7,
	sHaunterPose9,
	sHaunterPose10,
	sHaunterPose12,
	sHaunterPose13,
	sHaunterPose15,
	sHaunterPose16,
	sHaunterPose18,
	sHaunterPose19,
	sHaunterPose21,
	sHaunterPose22,
	sHaunterPose24,
	sHaunterPose1,
	sHaunterPose22,
	sHaunterPose19,
	sHaunterPose16,
	sHaunterPose77,
	sHaunterPose10,
	sHaunterPose7,
	sHaunterPose4,
	sHaunterPose106,
	sHaunterPose109,
	sHaunterPose112,
	sHaunterPose115,
	sHaunterPose118,
	sHaunterPose121,
	sHaunterPose124,
	sHaunterPose127,
	sHaunterPose1,
	sHaunterPose2,
	sHaunterPose3,
	sHaunterPose4,
	sHaunterPose5,
	sHaunterPose6,
	sHaunterPose7,
	sHaunterPose8,
	sHaunterPose9,
	sHaunterPose10,
	sHaunterPose11,
	sHaunterPose12,
	sHaunterPose13,
	sHaunterPose14,
	sHaunterPose15,
	sHaunterPose16,
	sHaunterPose17,
	sHaunterPose18,
	sHaunterPose19,
	sHaunterPose20,
	sHaunterPose21,
	sHaunterPose22,
	sHaunterPose23,
	sHaunterPose24,
	sHaunterPose106,
	sHaunterPose127,
	sHaunterPose124,
	sHaunterPose121,
	sHaunterPose118,
	sHaunterPose115,
	sHaunterPose112,
	sHaunterPose109,
	sHaunterPose1,
	sHaunterPose22,
	sHaunterPose19,
	sHaunterPose16,
	sHaunterPose77,
	sHaunterPose10,
	sHaunterPose7,
	sHaunterPose4,
};

static const struct PositionSets sAxPositionsHaunter[] = {
	[0] = { .set = { {-1, -8}, {-8, -5}, {7, -5}, {-1, -13} } },
	[1] = { .set = { {-1, -8}, {-8, -6}, {8, -6}, {-1, -15} } },
	[2] = { .set = { {-1, -8}, {-8, -4}, {8, -4}, {-1, -15} } },
	[3] = { .set = { {4, -8}, {11, -10}, {-1, -3}, {0, -15} } },
	[4] = { .set = { {4, -8}, {12, -13}, {-1, -5}, {1, -16} } },
	[5] = { .set = { {4, -8}, {11, -10}, {-1, -1}, {0, -16} } },
	[6] = { .set = { {3, -8}, {10, -13}, {8, -5}, {-1, -13} } },
	[7] = { .set = { {2, -8}, {10, -15}, {7, -8}, {-1, -14} } },
	[8] = { .set = { {4, -8}, {10, -11}, {6, -4}, {0, -13} } },
	[9] = { .set = { {2, -17}, {-4, -16}, {9, -8}, {-1, -13} } },
	[10] = { .set = { {2, -17}, {-5, -17}, {9, -9}, {-1, -14} } },
	[11] = { .set = { {2, -17}, {-5, -18}, {9, -8}, {-1, -13} } },
	[12] = { .set = { {0, -13}, {8, -6}, {-9, -6}, {0, -9} } },
	[13] = { .set = { {-1, -13}, {10, -7}, {-11, -7}, {-1, -9} } },
	[14] = { .set = { {0, -13}, {9, -5}, {-10, -5}, {-1, -9} } },
	[15] = { .set = { {-3, -17}, {3, -16}, {-10, -8}, {0, -13} } },
	[16] = { .set = { {-3, -17}, {4, -17}, {-10, -9}, {0, -14} } },
	[17] = { .set = { {-3, -17}, {4, -18}, {-10, -8}, {0, -13} } },
	[18] = { .set = { {-4, -8}, {-11, -13}, {-9, -5}, {0, -13} } },
	[19] = { .set = { {-3, -8}, {-11, -15}, {-8, -8}, {0, -14} } },
	[20] = { .set = { {-5, -8}, {-11, -11}, {-7, -4}, {-1, -13} } },
	[21] = { .set = { {-5, -8}, {-12, -10}, {0, -3}, {-1, -15} } },
	[22] = { .set = { {-5, -8}, {-13, -13}, {0, -5}, {-2, -16} } },
	[23] = { .set = { {-5, -8}, {-12, -10}, {0, -1}, {-1, -16} } },
	[24] = { .set = { {-1, -8}, {-8, -5}, {7, -5}, {-1, -13} } },
	[25] = { .set = { {-1, -8}, {-8, -6}, {8, -6}, {-1, -15} } },
	[26] = { .set = { {-1, -8}, {-8, -4}, {8, -4}, {-1, -15} } },
	[27] = { .set = { {4, -8}, {11, -10}, {-1, -3}, {0, -15} } },
	[28] = { .set = { {4, -8}, {12, -13}, {-1, -5}, {1, -16} } },
	[29] = { .set = { {4, -8}, {11, -10}, {-1, -1}, {0, -16} } },
	[30] = { .set = { {3, -8}, {10, -13}, {8, -5}, {-1, -13} } },
	[31] = { .set = { {2, -8}, {10, -15}, {7, -8}, {-1, -14} } },
	[32] = { .set = { {4, -8}, {10, -11}, {6, -4}, {0, -13} } },
	[33] = { .set = { {2, -17}, {-4, -16}, {9, -8}, {-1, -13} } },
	[34] = { .set = { {2, -17}, {-5, -17}, {9, -9}, {-1, -14} } },
	[35] = { .set = { {2, -17}, {-5, -18}, {9, -8}, {-1, -13} } },
	[36] = { .set = { {0, -13}, {8, -6}, {-9, -6}, {0, -9} } },
	[37] = { .set = { {-1, -13}, {10, -7}, {-11, -7}, {-1, -9} } },
	[38] = { .set = { {0, -13}, {9, -5}, {-10, -5}, {-1, -9} } },
	[39] = { .set = { {-3, -17}, {3, -16}, {-10, -8}, {0, -13} } },
	[40] = { .set = { {-3, -17}, {4, -17}, {-10, -9}, {0, -14} } },
	[41] = { .set = { {-3, -17}, {4, -18}, {-10, -8}, {0, -13} } },
	[42] = { .set = { {-4, -8}, {-11, -13}, {-9, -5}, {0, -13} } },
	[43] = { .set = { {-3, -8}, {-11, -15}, {-8, -8}, {0, -14} } },
	[44] = { .set = { {-5, -8}, {-11, -11}, {-7, -4}, {-1, -13} } },
	[45] = { .set = { {-5, -8}, {-12, -10}, {0, -3}, {-1, -15} } },
	[46] = { .set = { {-5, -8}, {-13, -13}, {0, -5}, {-2, -16} } },
	[47] = { .set = { {-5, -8}, {-12, -10}, {0, -1}, {-1, -16} } },
	[48] = { .set = { {-1, -8}, {-8, -5}, {7, -5}, {-1, -13} } },
	[49] = { .set = { {-1, -7}, {-14, -6}, {12, -6}, {-1, -16} } },
	[50] = { .set = { {-1, -7}, {-16, -9}, {14, -9}, {-1, -16} } },
	[51] = { .set = { {-1, -7}, {-18, -15}, {6, 11}, {-1, -16} } },
	[52] = { .set = { {-1, -7}, {-19, -23}, {1, 11}, {-1, -16} } },
	[53] = { .set = { {-1, -7}, {-8, 10}, {16, -15}, {-1, -16} } },
	[54] = { .set = { {-1, -7}, {-3, 11}, {17, -23}, {-1, -16} } },
	[55] = { .set = { {4, -8}, {11, -10}, {-1, -3}, {0, -15} } },
	[56] = { .set = { {3, -8}, {14, -12}, {-3, -1}, {0, -15} } },
	[57] = { .set = { {3, -8}, {15, -13}, {-8, 0}, {0, -15} } },
	[58] = { .set = { {3, -8}, {12, -18}, {9, 10}, {0, -15} } },
	[59] = { .set = { {3, -8}, {9, -23}, {17, 9}, {0, -15} } },
	[60] = { .set = { {3, -8}, {24, 4}, {-13, -2}, {0, -15} } },
	[61] = { .set = { {3, -8}, {24, 8}, {-18, -8}, {0, -15} } },
	[62] = { .set = { {3, -8}, {10, -13}, {8, -5}, {-1, -13} } },
	[63] = { .set = { {4, -8}, {10, -15}, {3, -1}, {0, -14} } },
	[64] = { .set = { {3, -8}, {5, -22}, {-8, -1}, {-1, -14} } },
	[65] = { .set = { {3, -8}, {-2, -24}, {18, -6}, {-1, -14} } },
	[66] = { .set = { {3, -8}, {-6, -23}, {20, -9}, {-1, -14} } },
	[67] = { .set = { {3, -8}, {22, -11}, {-5, 1}, {-1, -14} } },
	[68] = { .set = { {3, -8}, {23, -8}, {-12, -6}, {-1, -14} } },
	[69] = { .set = { {2, -17}, {-4, -16}, {9, -8}, {-1, -13} } },
	[70] = { .set = { {2, -16}, {-7, -19}, {12, -8}, {-1, -14} } },
	[71] = { .set = { {2, -16}, {-10, -16}, {11, -5}, {-1, -14} } },
	[72] = { .set = { {2, -16}, {-14, -14}, {24, -23}, {-1, -14} } },
	[73] = { .set = { {2, -16}, {-16, -10}, {23, -28}, {-1, -14} } },
	[74] = { .set = { {2, -16}, {11, -33}, {9, -1}, {-1, -14} } },
	[75] = { .set = { {2, -16}, {16, -33}, {3, 3}, {-1, -14} } },
	[76] = { .set = { {0, -18}, {8, -11}, {-9, -11}, {0, -14} } },
	[77] = { .set = { {0, -19}, {12, -11}, {-13, -11}, {0, -14} } },
	[78] = { .set = { {0, -19}, {14, -9}, {-15, -9}, {0, -14} } },
	[79] = { .set = { {0, -19}, {13, -6}, {-9, -29}, {0, -14} } },
	[80] = { .set = { {0, -19}, {12, -2}, {-3, -32}, {0, -14} } },
	[81] = { .set = { {0, -19}, {8, -29}, {-14, -6}, {0, -14} } },
	[82] = { .set = { {0, -19}, {3, -32}, {-13, -2}, {0, -14} } },
	[83] = { .set = { {-3, -17}, {3, -16}, {-10, -8}, {0, -13} } },
	[84] = { .set = { {-3, -16}, {6, -19}, {-13, -8}, {0, -14} } },
	[85] = { .set = { {-3, -16}, {9, -16}, {-12, -5}, {0, -14} } },
	[86] = { .set = { {-3, -16}, {13, -14}, {-20, -15}, {0, -14} } },
	[87] = { .set = { {-3, -16}, {15, -10}, {-23, -31}, {0, -14} } },
	[88] = { .set = { {-3, -16}, {-3, -31}, {-10, -1}, {0, -14} } },
	[89] = { .set = { {-3, -16}, {-19, -34}, {-4, 3}, {0, -14} } },
	[90] = { .set = { {-4, -8}, {-11, -13}, {-9, -5}, {0, -13} } },
	[91] = { .set = { {-4, -8}, {-11, -15}, {-4, -1}, {0, -14} } },
	[92] = { .set = { {-4, -8}, {-6, -22}, {7, -1}, {0, -14} } },
	[93] = { .set = { {-4, -8}, {1, -24}, {-8, -1}, {0, -14} } },
	[94] = { .set = { {-4, -8}, {5, -23}, {-18, -7}, {0, -14} } },
	[95] = { .set = { {-4, -8}, {-14, -17}, {4, 1}, {0, -14} } },
	[96] = { .set = { {-4, -8}, {-22, -10}, {11, -6}, {0, -14} } },
	[97] = { .set = { {-5, -8}, {-12, -10}, {0, -3}, {-1, -15} } },
	[98] = { .set = { {-4, -8}, {-15, -12}, {2, -1}, {-1, -15} } },
	[99] = { .set = { {-4, -8}, {-16, -13}, {7, 0}, {-1, -15} } },
	[100] = { .set = { {-4, -8}, {-13, -18}, {0, 7}, {-1, -15} } },
	[101] = { .set = { {-4, -8}, {-10, -23}, {-20, 9}, {-1, -15} } },
	[102] = { .set = { {-4, -8}, {-22, -7}, {12, -2}, {-1, -15} } },
	[103] = { .set = { {-4, -8}, {-25, 8}, {17, -8}, {-1, -15} } },
	[104] = { .set = { {-1, -8}, {-8, -5}, {7, -5}, {-1, -13} } },
	[105] = { .set = { {0, -9}, {-13, -1}, {12, -1}, {-1, -16} } },
	[106] = { .set = { {-1, -7}, {-13, -4}, {12, -4}, {-1, -16} } },
	[107] = { .set = { {4, -8}, {11, -10}, {-1, -3}, {0, -15} } },
	[108] = { .set = { {3, -10}, {13, -7}, {-4, -2}, {-1, -15} } },
	[109] = { .set = { {4, -9}, {12, -10}, {-3, -4}, {-1, -15} } },
	[110] = { .set = { {3, -8}, {10, -13}, {8, -5}, {-1, -13} } },
	[111] = { .set = { {4, -10}, {10, -11}, {2, -2}, {0, -13} } },
	[112] = { .set = { {4, -9}, {9, -13}, {4, -4}, {-1, -13} } },
	[113] = { .set = { {2, -17}, {-4, -16}, {9, -8}, {-1, -13} } },
	[114] = { .set = { {5, -14}, {-6, -17}, {13, -7}, {-2, -12} } },
	[115] = { .set = { {7, -16}, {-7, -18}, {12, -9}, {-2, -12} } },
	[116] = { .set = { {0, -18}, {8, -11}, {-9, -11}, {0, -14} } },
	[117] = { .set = { {0, -19}, {13, -11}, {-14, -11}, {0, -13} } },
	[118] = { .set = { {0, -19}, {13, -13}, {-14, -12}, {0, -13} } },
	[119] = { .set = { {-3, -17}, {3, -16}, {-10, -8}, {0, -13} } },
	[120] = { .set = { {-6, -14}, {5, -17}, {-14, -7}, {1, -12} } },
	[121] = { .set = { {-8, -16}, {6, -18}, {-13, -9}, {1, -12} } },
	[122] = { .set = { {-4, -8}, {-11, -13}, {-9, -5}, {0, -13} } },
	[123] = { .set = { {-5, -10}, {-11, -11}, {-3, -2}, {-1, -13} } },
	[124] = { .set = { {-5, -9}, {-10, -13}, {-5, -4}, {0, -13} } },
	[125] = { .set = { {-5, -8}, {-12, -10}, {0, -3}, {-1, -15} } },
	[126] = { .set = { {-4, -10}, {-14, -7}, {3, -2}, {0, -15} } },
	[127] = { .set = { {-5, -9}, {-13, -10}, {2, -4}, {0, -15} } },
	[128] = { .set = { {-1, -8}, {-8, -5}, {7, -5}, {-1, -13} } },
	[129] = { .set = { {0, -9}, {-13, -1}, {12, -1}, {-1, -16} } },
	[130] = { .set = { {-1, -7}, {-13, -4}, {12, -4}, {-1, -16} } },
	[131] = { .set = { {4, -8}, {11, -10}, {-1, -3}, {0, -15} } },
	[132] = { .set = { {3, -10}, {13, -7}, {-4, -2}, {-1, -15} } },
	[133] = { .set = { {4, -9}, {12, -10}, {-3, -4}, {-1, -15} } },
	[134] = { .set = { {3, -8}, {10, -13}, {8, -5}, {-1, -13} } },
	[135] = { .set = { {4, -10}, {10, -11}, {2, -2}, {0, -13} } },
	[136] = { .set = { {4, -9}, {9, -13}, {4, -4}, {-1, -13} } },
	[137] = { .set = { {2, -17}, {-4, -16}, {9, -8}, {-1, -13} } },
	[138] = { .set = { {5, -14}, {-6, -17}, {13, -7}, {-2, -12} } },
	[139] = { .set = { {7, -16}, {-7, -18}, {12, -9}, {-2, -12} } },
	[140] = { .set = { {0, -18}, {8, -11}, {-9, -11}, {0, -14} } },
	[141] = { .set = { {0, -19}, {13, -11}, {-14, -11}, {0, -13} } },
	[142] = { .set = { {0, -19}, {13, -13}, {-14, -12}, {0, -13} } },
	[143] = { .set = { {-3, -17}, {3, -16}, {-10, -8}, {0, -13} } },
	[144] = { .set = { {-6, -14}, {5, -17}, {-14, -7}, {1, -12} } },
	[145] = { .set = { {-8, -16}, {6, -18}, {-13, -9}, {1, -12} } },
	[146] = { .set = { {-4, -8}, {-11, -13}, {-9, -5}, {0, -13} } },
	[147] = { .set = { {-5, -10}, {-11, -11}, {-3, -2}, {-1, -13} } },
	[148] = { .set = { {-5, -9}, {-10, -13}, {-5, -4}, {0, -13} } },
	[149] = { .set = { {-5, -8}, {-12, -10}, {0, -3}, {-1, -15} } },
	[150] = { .set = { {-4, -10}, {-14, -7}, {3, -2}, {0, -15} } },
	[151] = { .set = { {-5, -9}, {-13, -10}, {2, -4}, {0, -15} } },
	[152] = { .set = { {-6, -9}, {-13, -9}, {0, -1}, {-1, -14} } },
	[153] = { .set = { {-6, -8}, {-14, -9}, {1, -2}, {-1, -14} } },
	[154] = { .set = { {0, -11}, {-7, -16}, {6, -17}, {0, -13} } },
	[155] = { .set = { {6, -9}, {9, -15}, {-1, -11}, {0, -13} } },
	[156] = { .set = { {7, -16}, {3, -21}, {6, -13}, {-2, -12} } },
	[157] = { .set = { {3, -19}, {-2, -23}, {9, -17}, {-2, -14} } },
	[158] = { .set = { {0, -17}, {5, -19}, {-6, -19}, {0, -12} } },
	[159] = { .set = { {-4, -19}, {1, -23}, {-10, -17}, {1, -14} } },
	[160] = { .set = { {-9, -16}, {-5, -21}, {-8, -13}, {0, -12} } },
	[161] = { .set = { {-6, -9}, {-9, -15}, {1, -11}, {0, -13} } },
	[162] = { .set = { {-1, -8}, {-8, -5}, {7, -5}, {-1, -13} } },
	[163] = { .set = { {-1, -8}, {-8, -4}, {8, -4}, {-1, -15} } },
	[164] = { .set = { {4, -8}, {11, -10}, {-1, -3}, {0, -15} } },
	[165] = { .set = { {4, -8}, {11, -10}, {-1, -1}, {0, -16} } },
	[166] = { .set = { {3, -8}, {10, -13}, {8, -5}, {-1, -13} } },
	[167] = { .set = { {4, -8}, {10, -11}, {6, -4}, {0, -13} } },
	[168] = { .set = { {2, -17}, {-4, -16}, {9, -8}, {-1, -13} } },
	[169] = { .set = { {2, -17}, {-5, -18}, {9, -8}, {-1, -13} } },
	[170] = { .set = { {0, -13}, {8, -6}, {-9, -6}, {0, -9} } },
	[171] = { .set = { {0, -13}, {9, -5}, {-10, -5}, {-1, -9} } },
	[172] = { .set = { {-3, -17}, {3, -16}, {-10, -8}, {0, -13} } },
	[173] = { .set = { {-3, -17}, {4, -18}, {-10, -8}, {0, -13} } },
	[174] = { .set = { {-4, -8}, {-11, -13}, {-9, -5}, {0, -13} } },
	[175] = { .set = { {-5, -8}, {-11, -11}, {-7, -4}, {-1, -13} } },
	[176] = { .set = { {-5, -8}, {-12, -10}, {0, -3}, {-1, -15} } },
	[177] = { .set = { {-5, -8}, {-12, -10}, {0, -1}, {-1, -16} } },
	[178] = { .set = { {-1, -8}, {-8, -5}, {7, -5}, {-1, -13} } },
	[179] = { .set = { {-5, -8}, {-12, -10}, {0, -3}, {-1, -15} } },
	[180] = { .set = { {-4, -8}, {-11, -13}, {-9, -5}, {0, -13} } },
	[181] = { .set = { {-3, -17}, {3, -16}, {-10, -8}, {0, -13} } },
	[182] = { .set = { {0, -18}, {8, -11}, {-9, -11}, {0, -14} } },
	[183] = { .set = { {2, -17}, {-4, -16}, {9, -8}, {-1, -13} } },
	[184] = { .set = { {3, -8}, {10, -13}, {8, -5}, {-1, -13} } },
	[185] = { .set = { {4, -8}, {11, -10}, {-1, -3}, {0, -15} } },
	[186] = { .set = { {0, -9}, {-13, -1}, {12, -1}, {-1, -16} } },
	[187] = { .set = { {3, -10}, {13, -7}, {-4, -2}, {-1, -15} } },
	[188] = { .set = { {4, -10}, {10, -11}, {2, -2}, {0, -13} } },
	[189] = { .set = { {5, -14}, {-6, -17}, {13, -7}, {-2, -12} } },
	[190] = { .set = { {0, -19}, {13, -11}, {-14, -11}, {0, -13} } },
	[191] = { .set = { {-6, -14}, {5, -17}, {-14, -7}, {1, -12} } },
	[192] = { .set = { {-5, -10}, {-11, -11}, {-3, -2}, {-1, -13} } },
	[193] = { .set = { {-4, -10}, {-14, -7}, {3, -2}, {0, -15} } },
	[194] = { .set = { {-1, -8}, {-8, -5}, {7, -5}, {-1, -13} } },
	[195] = { .set = { {-1, -8}, {-8, -6}, {8, -6}, {-1, -15} } },
	[196] = { .set = { {-1, -8}, {-8, -4}, {8, -4}, {-1, -15} } },
	[197] = { .set = { {4, -8}, {11, -10}, {-1, -3}, {0, -15} } },
	[198] = { .set = { {4, -8}, {12, -13}, {-1, -5}, {1, -16} } },
	[199] = { .set = { {4, -8}, {11, -10}, {-1, -1}, {0, -16} } },
	[200] = { .set = { {3, -8}, {10, -13}, {8, -5}, {-1, -13} } },
	[201] = { .set = { {2, -8}, {10, -15}, {7, -8}, {-1, -14} } },
	[202] = { .set = { {4, -8}, {10, -11}, {6, -4}, {0, -13} } },
	[203] = { .set = { {2, -17}, {-4, -16}, {9, -8}, {-1, -13} } },
	[204] = { .set = { {2, -17}, {-5, -17}, {9, -9}, {-1, -14} } },
	[205] = { .set = { {2, -17}, {-5, -18}, {9, -8}, {-1, -13} } },
	[206] = { .set = { {0, -13}, {8, -6}, {-9, -6}, {0, -9} } },
	[207] = { .set = { {-1, -13}, {10, -7}, {-11, -7}, {-1, -9} } },
	[208] = { .set = { {0, -13}, {9, -5}, {-10, -5}, {-1, -9} } },
	[209] = { .set = { {-3, -17}, {3, -16}, {-10, -8}, {0, -13} } },
	[210] = { .set = { {-3, -17}, {4, -17}, {-10, -9}, {0, -14} } },
	[211] = { .set = { {-3, -17}, {4, -18}, {-10, -8}, {0, -13} } },
	[212] = { .set = { {-4, -8}, {-11, -13}, {-9, -5}, {0, -13} } },
	[213] = { .set = { {-3, -8}, {-11, -15}, {-8, -8}, {0, -14} } },
	[214] = { .set = { {-5, -8}, {-11, -11}, {-7, -4}, {-1, -13} } },
	[215] = { .set = { {-5, -8}, {-12, -10}, {0, -3}, {-1, -15} } },
	[216] = { .set = { {-5, -8}, {-13, -13}, {0, -5}, {-2, -16} } },
	[217] = { .set = { {-5, -8}, {-12, -10}, {0, -1}, {-1, -16} } },
	[218] = { .set = { {0, -9}, {-13, -1}, {12, -1}, {-1, -16} } },
	[219] = { .set = { {-4, -10}, {-14, -7}, {3, -2}, {0, -15} } },
	[220] = { .set = { {-5, -10}, {-11, -11}, {-3, -2}, {-1, -13} } },
	[221] = { .set = { {-6, -14}, {5, -17}, {-14, -7}, {1, -12} } },
	[222] = { .set = { {0, -19}, {13, -11}, {-14, -11}, {0, -13} } },
	[223] = { .set = { {5, -14}, {-6, -17}, {13, -7}, {-2, -12} } },
	[224] = { .set = { {4, -10}, {10, -11}, {2, -2}, {0, -13} } },
	[225] = { .set = { {3, -10}, {13, -7}, {-4, -2}, {-1, -15} } },
	[226] = { .set = { {-1, -8}, {-8, -5}, {7, -5}, {-1, -13} } },
	[227] = { .set = { {-5, -8}, {-12, -10}, {0, -3}, {-1, -15} } },
	[228] = { .set = { {-4, -8}, {-11, -13}, {-9, -5}, {0, -13} } },
	[229] = { .set = { {-3, -17}, {3, -16}, {-10, -8}, {0, -13} } },
	[230] = { .set = { {0, -18}, {8, -11}, {-9, -11}, {0, -14} } },
	[231] = { .set = { {2, -17}, {-4, -16}, {9, -8}, {-1, -13} } },
	[232] = { .set = { {3, -8}, {10, -13}, {8, -5}, {-1, -13} } },
	[233] = { .set = { {4, -8}, {11, -10}, {-1, -3}, {0, -15} } },
};

static const ax_anim *const sHaunterAnimTable1[] = {
	AX_ANIM_PTR(sHaunterAnims_1_1),
	AX_ANIM_PTR(sHaunterAnims_1_2),
	AX_ANIM_PTR(sHaunterAnims_1_3),
	AX_ANIM_PTR(sHaunterAnims_1_4),
	AX_ANIM_PTR(sHaunterAnims_1_5),
	AX_ANIM_PTR(sHaunterAnims_1_6),
	AX_ANIM_PTR(sHaunterAnims_1_7),
	AX_ANIM_PTR(sHaunterAnims_1_8),
};

static const ax_anim *const sHaunterAnimTable2[] = {
	AX_ANIM_PTR(sHaunterAnims_2_1),
	AX_ANIM_PTR(sHaunterAnims_2_2),
	AX_ANIM_PTR(sHaunterAnims_2_3),
	AX_ANIM_PTR(sHaunterAnims_2_4),
	AX_ANIM_PTR(sHaunterAnims_2_5),
	AX_ANIM_PTR(sHaunterAnims_2_6),
	AX_ANIM_PTR(sHaunterAnims_2_7),
	AX_ANIM_PTR(sHaunterAnims_2_8),
};

static const ax_anim *const sHaunterAnimTable3[] = {
	AX_ANIM_PTR(sHaunterAnims_3_1),
	AX_ANIM_PTR(sHaunterAnims_3_2),
	AX_ANIM_PTR(sHaunterAnims_3_3),
	AX_ANIM_PTR(sHaunterAnims_3_4),
	AX_ANIM_PTR(sHaunterAnims_3_5),
	AX_ANIM_PTR(sHaunterAnims_3_6),
	AX_ANIM_PTR(sHaunterAnims_3_7),
	AX_ANIM_PTR(sHaunterAnims_3_8),
};

static const ax_anim *const sHaunterAnimTable4[] = {
	AX_ANIM_PTR(sHaunterAnims_4_1),
	AX_ANIM_PTR(sHaunterAnims_4_2),
	AX_ANIM_PTR(sHaunterAnims_4_3),
	AX_ANIM_PTR(sHaunterAnims_4_4),
	AX_ANIM_PTR(sHaunterAnims_4_5),
	AX_ANIM_PTR(sHaunterAnims_4_6),
	AX_ANIM_PTR(sHaunterAnims_4_7),
	AX_ANIM_PTR(sHaunterAnims_4_8),
};

static const ax_anim *const sHaunterAnimTable5[] = {
	AX_ANIM_PTR(sHaunterAnims_5_1),
	AX_ANIM_PTR(sHaunterAnims_5_2),
	AX_ANIM_PTR(sHaunterAnims_5_3),
	AX_ANIM_PTR(sHaunterAnims_5_4),
	AX_ANIM_PTR(sHaunterAnims_5_5),
	AX_ANIM_PTR(sHaunterAnims_5_6),
	AX_ANIM_PTR(sHaunterAnims_5_7),
	AX_ANIM_PTR(sHaunterAnims_5_8),
};

static const ax_anim *const sHaunterAnimTable6[] = {
	AX_ANIM_PTR(sHaunterAnims_6_1),
	AX_ANIM_PTR(sHaunterAnims_6_1),
	AX_ANIM_PTR(sHaunterAnims_6_1),
	AX_ANIM_PTR(sHaunterAnims_6_1),
	AX_ANIM_PTR(sHaunterAnims_6_1),
	AX_ANIM_PTR(sHaunterAnims_6_1),
	AX_ANIM_PTR(sHaunterAnims_6_1),
	AX_ANIM_PTR(sHaunterAnims_6_1),
};

static const ax_anim *const sHaunterAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00604),
	AX_ANIM_PTR(gAxSharedAnim_00615),
	AX_ANIM_PTR(gAxSharedAnim_00624),
	AX_ANIM_PTR(gAxSharedAnim_00635),
	AX_ANIM_PTR(gAxSharedAnim_00652),
	AX_ANIM_PTR(gAxSharedAnim_00663),
	AX_ANIM_PTR(gAxSharedAnim_00678),
	AX_ANIM_PTR(gAxSharedAnim_00689),
};

static const ax_anim *const sHaunterAnimTable8[] = {
	AX_ANIM_PTR(sHaunterAnims_8_1),
	AX_ANIM_PTR(sHaunterAnims_8_2),
	AX_ANIM_PTR(sHaunterAnims_8_3),
	AX_ANIM_PTR(sHaunterAnims_8_4),
	AX_ANIM_PTR(sHaunterAnims_8_5),
	AX_ANIM_PTR(sHaunterAnims_8_6),
	AX_ANIM_PTR(sHaunterAnims_8_7),
	AX_ANIM_PTR(sHaunterAnims_8_8),
};

static const ax_anim *const sHaunterAnimTable9[] = {
	AX_ANIM_PTR(gAxSharedAnim_00903),
	AX_ANIM_PTR(gAxSharedAnim_00986),
	AX_ANIM_PTR(gAxSharedAnim_00977),
	AX_ANIM_PTR(sHaunterAnims_9_4),
	AX_ANIM_PTR(gAxSharedAnim_00948),
	AX_ANIM_PTR(sHaunterAnims_9_6),
	AX_ANIM_PTR(gAxSharedAnim_00926),
	AX_ANIM_PTR(gAxSharedAnim_00911),
};

static const ax_anim *const sHaunterAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01016),
	AX_ANIM_PTR(gAxSharedAnim_01027),
	AX_ANIM_PTR(gAxSharedAnim_01046),
	AX_ANIM_PTR(gAxSharedAnim_01061),
	AX_ANIM_PTR(gAxSharedAnim_01078),
	AX_ANIM_PTR(gAxSharedAnim_01092),
	AX_ANIM_PTR(gAxSharedAnim_01110),
	AX_ANIM_PTR(gAxSharedAnim_01124),
};

static const ax_anim *const sHaunterAnimTable11[] = {
	AX_ANIM_PTR(sHaunterAnims_11_1),
	AX_ANIM_PTR(sHaunterAnims_11_2),
	AX_ANIM_PTR(sHaunterAnims_11_3),
	AX_ANIM_PTR(sHaunterAnims_11_4),
	AX_ANIM_PTR(sHaunterAnims_11_5),
	AX_ANIM_PTR(sHaunterAnims_11_6),
	AX_ANIM_PTR(sHaunterAnims_11_7),
	AX_ANIM_PTR(sHaunterAnims_11_8),
};

static const ax_anim *const sHaunterAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01423),
	AX_ANIM_PTR(gAxSharedAnim_01468),
	AX_ANIM_PTR(gAxSharedAnim_01458),
	AX_ANIM_PTR(gAxSharedAnim_01449),
	AX_ANIM_PTR(gAxSharedAnim_01448),
	AX_ANIM_PTR(gAxSharedAnim_01444),
	AX_ANIM_PTR(gAxSharedAnim_01432),
	AX_ANIM_PTR(gAxSharedAnim_01424),
};

static const ax_anim *const sHaunterAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01471),
	AX_ANIM_PTR(gAxSharedAnim_01516),
	AX_ANIM_PTR(gAxSharedAnim_01511),
	AX_ANIM_PTR(gAxSharedAnim_01504),
	AX_ANIM_PTR(gAxSharedAnim_01497),
	AX_ANIM_PTR(gAxSharedAnim_01490),
	AX_ANIM_PTR(gAxSharedAnim_01486),
	AX_ANIM_PTR(gAxSharedAnim_01478),
};

static const ax_anim *const *const sAxAnimationsHaunter[] = {
	sHaunterAnimTable1,
	sHaunterAnimTable2,
	sHaunterAnimTable3,
	sHaunterAnimTable4,
	sHaunterAnimTable5,
	sHaunterAnimTable6,
	sHaunterAnimTable7,
	sHaunterAnimTable8,
	sHaunterAnimTable9,
	sHaunterAnimTable10,
	sHaunterAnimTable11,
	sHaunterAnimTable12,
	sHaunterAnimTable13,
};

static const ax_sprite *const sAxSpritesHaunter[] = {
	sHaunterSprites1,
	sHaunterSprites2,
	sHaunterSprites3,
	sHaunterSprites4,
	sHaunterSprites5,
	sHaunterSprites6,
	sHaunterSprites7,
	sHaunterSprites8,
	sHaunterSprites9,
	sHaunterSprites10,
	sHaunterSprites11,
	sHaunterSprites12,
	sHaunterSprites13,
	sHaunterSprites14,
	sHaunterSprites15,
	sHaunterSprites16,
	sHaunterSprites17,
	sHaunterSprites18,
	sHaunterSprites19,
	sHaunterSprites20,
	sHaunterSprites21,
	sHaunterSprites22,
	sHaunterSprites23,
	sHaunterSprites24,
	sHaunterSprites25,
	sHaunterSprites26,
	sHaunterSprites27,
	sHaunterSprites28,
	sHaunterSprites29,
	sHaunterSprites30,
	sHaunterSprites31,
	sHaunterSprites32,
	sHaunterSprites33,
	sHaunterSprites34,
	sHaunterSprites35,
	sHaunterSprites36,
	sHaunterSprites37,
	sHaunterSprites38,
	sHaunterSprites39,
	sHaunterSprites40,
	sHaunterSprites41,
	sHaunterSprites42,
	sHaunterSprites43,
	sHaunterSprites44,
	sHaunterSprites45,
	sHaunterSprites46,
	sHaunterSprites47,
	sHaunterSprites48,
	sHaunterSprites49,
	sHaunterSprites50,
	sHaunterSprites51,
	sHaunterSprites52,
	sHaunterSprites53,
	sHaunterSprites54,
};

static const axmain sAxMainHaunter = {
	.poses = sAxPosesHaunter,
	.animations = sAxAnimationsHaunter,
	.animCount = ARRAY_COUNT(sAxAnimationsHaunter),
	.spriteData = sAxSpritesHaunter,
	.positions = sAxPositionsHaunter,
};
