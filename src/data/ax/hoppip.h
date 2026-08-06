/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainHoppip;
const SiroArchive gAxHoppip = {"SIRO", &sAxMainHoppip};

static const ax_pose sHoppipPose1[] = {
	AX_POSE(0, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(1, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose2[] = {
	AX_POSE(2, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(1, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose3[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(1, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose4[] = {
	AX_POSE(4, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(1, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose5[] = {
	AX_POSE(5, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(1, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose6[] = {
	AX_POSE(4, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(1, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose7[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(1, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose8[] = {
	AX_POSE(2, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(1, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose9[] = {
	AX_POSE(0, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(6, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose10[] = {
	AX_POSE(2, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(6, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose11[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(6, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose12[] = {
	AX_POSE(4, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(6, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose13[] = {
	AX_POSE(5, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(6, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose14[] = {
	AX_POSE(4, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(6, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose15[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(6, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose16[] = {
	AX_POSE(2, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(6, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose17[] = {
	AX_POSE(0, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(7, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose18[] = {
	AX_POSE(2, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(7, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose19[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(7, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose20[] = {
	AX_POSE(4, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(7, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose21[] = {
	AX_POSE(5, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(7, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose22[] = {
	AX_POSE(4, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(7, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose23[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(7, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose24[] = {
	AX_POSE(2, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(7, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose25[] = {
	AX_POSE(0, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(8, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose26[] = {
	AX_POSE(2, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(8, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose27[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(8, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose28[] = {
	AX_POSE(4, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(8, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose29[] = {
	AX_POSE(5, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(8, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose30[] = {
	AX_POSE(4, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(8, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose31[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(8, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose32[] = {
	AX_POSE(2, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(8, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose33[] = {
	AX_POSE(0, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(9, OAM1(240, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose34[] = {
	AX_POSE(2, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(9, OAM1(240, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose35[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(9, OAM1(240, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose36[] = {
	AX_POSE(4, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(9, OAM1(240, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose37[] = {
	AX_POSE(5, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(9, OAM1(240, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose38[] = {
	AX_POSE(4, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(9, OAM1(240, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose39[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(9, OAM1(240, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose40[] = {
	AX_POSE(2, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(9, OAM1(240, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose41[] = {
	AX_POSE(0, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(8, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose42[] = {
	AX_POSE(2, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(8, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose43[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(8, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose44[] = {
	AX_POSE(4, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(8, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose45[] = {
	AX_POSE(5, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(8, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose46[] = {
	AX_POSE(4, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(8, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose47[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(8, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose48[] = {
	AX_POSE(2, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(8, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose49[] = {
	AX_POSE(0, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(7, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose50[] = {
	AX_POSE(2, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(7, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose51[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(7, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose52[] = {
	AX_POSE(4, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(7, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose53[] = {
	AX_POSE(5, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(7, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose54[] = {
	AX_POSE(4, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(7, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose55[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(7, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose56[] = {
	AX_POSE(2, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(7, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose57[] = {
	AX_POSE(0, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(6, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose58[] = {
	AX_POSE(2, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(6, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose59[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(6, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose60[] = {
	AX_POSE(4, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(6, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose61[] = {
	AX_POSE(5, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(6, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose62[] = {
	AX_POSE(4, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(6, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose63[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(6, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose64[] = {
	AX_POSE(2, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(6, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose65[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose66[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose67[] = {
	AX_POSE(12, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose68[] = {
	AX_POSE(13, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose69[] = {
	AX_POSE(14, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose70[] = {
	AX_POSE(15, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose71[] = {
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose72[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose73[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose74[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose75[] = {
	AX_POSE(20, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose76[] = {
	AX_POSE(21, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose77[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose78[] = {
	AX_POSE(23, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose79[] = {
	AX_POSE(24, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose80[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose81[] = {
	AX_POSE(20, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose82[] = {
	AX_POSE(21, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose83[] = {
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose84[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose85[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose86[] = {
	AX_POSE(13, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose87[] = {
	AX_POSE(14, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose88[] = {
	AX_POSE(15, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose114[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose117[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose120[] = {
	AX_POSE(27, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose123[] = {
	AX_POSE(28, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose126[] = {
	AX_POSE(29, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose129[] = {
	AX_POSE(28, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose132[] = {
	AX_POSE(27, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose135[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose145[] = {
	AX_POSE(30, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose146[] = {
	AX_POSE(31, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose147[] = {
	AX_POSE(32, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose148[] = {
	AX_POSE(33, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose149[] = {
	AX_POSE(34, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose150[] = {
	AX_POSE(35, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose151[] = {
	AX_POSE(36, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose152[] = {
	AX_POSE(35, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose153[] = {
	AX_POSE(34, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose154[] = {
	AX_POSE(33, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose158[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose159[] = {
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose166[] = {
	AX_POSE(20, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose167[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose174[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose175[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose181[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose185[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose188[] = {
	AX_POSE(26, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose189[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose190[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose192[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose193[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose194[] = {
	AX_POSE(26, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose202[] = {
	AX_POSE(27, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoppipPose214[] = {
	AX_POSE(27, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const u8 sHoppipAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_1_1.lz");
static const u8 sHoppipAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_1_2.lz");
static const u8 sHoppipAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_1_3.lz");
static const u8 sHoppipAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_1_4.lz");
static const u8 sHoppipAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_1_5.lz");
static const u8 sHoppipAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_1_6.lz");
static const u8 sHoppipAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_1_7.lz");
static const u8 sHoppipAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_1_8.lz");
static const u8 sHoppipAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_2_1.lz");
static const u8 sHoppipAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_2_2.lz");
static const u8 sHoppipAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_2_3.lz");
static const u8 sHoppipAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_2_4.lz");
static const u8 sHoppipAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_2_5.lz");
static const u8 sHoppipAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_2_6.lz");
static const u8 sHoppipAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_2_7.lz");
static const u8 sHoppipAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_2_8.lz");
static const u8 sHoppipAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_3_1.lz");
static const u8 sHoppipAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_3_2.lz");
static const u8 sHoppipAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_3_3.lz");
static const u8 sHoppipAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_3_4.lz");
static const u8 sHoppipAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_3_5.lz");
static const u8 sHoppipAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_3_6.lz");
static const u8 sHoppipAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_3_7.lz");
static const u8 sHoppipAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_3_8.lz");
static const u8 sHoppipAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_4_1.lz");
static const u8 sHoppipAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_4_2.lz");
static const u8 sHoppipAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_4_3.lz");
static const u8 sHoppipAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_4_4.lz");
static const u8 sHoppipAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_4_5.lz");
static const u8 sHoppipAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_4_6.lz");
static const u8 sHoppipAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_4_7.lz");
static const u8 sHoppipAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_4_8.lz");
static const u8 sHoppipAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_5_1.lz");
static const u8 sHoppipAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_5_2.lz");
static const u8 sHoppipAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_5_3.lz");
static const u8 sHoppipAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_5_4.lz");
static const u8 sHoppipAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_5_5.lz");
static const u8 sHoppipAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_5_6.lz");
static const u8 sHoppipAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_5_7.lz");
static const u8 sHoppipAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_5_8.lz");
static const u8 sHoppipAnims_6_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_6_1.lz");
static const u8 sHoppipAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_8_1.lz");
static const u8 sHoppipAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_8_2.lz");
static const u8 sHoppipAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_8_3.lz");
static const u8 sHoppipAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_8_4.lz");
static const u8 sHoppipAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_8_5.lz");
static const u8 sHoppipAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_8_6.lz");
static const u8 sHoppipAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_8_7.lz");
static const u8 sHoppipAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_8_8.lz");
static const u8 sHoppipAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_9_1.lz");
static const u8 sHoppipAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_9_2.lz");
static const u8 sHoppipAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_9_3.lz");
static const u8 sHoppipAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_9_4.lz");
static const u8 sHoppipAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_9_5.lz");
static const u8 sHoppipAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_9_6.lz");
static const u8 sHoppipAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_9_7.lz");
static const u8 sHoppipAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_9_8.lz");
static const u8 sHoppipAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_11_1.lz");
static const u8 sHoppipAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_11_2.lz");
static const u8 sHoppipAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_11_3.lz");
static const u8 sHoppipAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_11_4.lz");
static const u8 sHoppipAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_11_5.lz");
static const u8 sHoppipAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_11_6.lz");
static const u8 sHoppipAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_11_7.lz");
static const u8 sHoppipAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoppip/sHoppipAnims_11_8.lz");

static const u8 sHoppipGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_1.4bpp.lz");
static const ax_sprite sHoppipSprites1[] = {
	{sHoppipGfx1, ARRAY_COUNT(sHoppipGfx1)}, 
	{NULL, 0}
};
static const u8 sHoppipGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_2.4bpp.lz");
static const ax_sprite sHoppipSprites2[] = {
	{sHoppipGfx2, ARRAY_COUNT(sHoppipGfx2)}, 
	{NULL, 0}
};
static const u8 sHoppipGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_3.4bpp.lz");
static const ax_sprite sHoppipSprites3[] = {
	{sHoppipGfx3, ARRAY_COUNT(sHoppipGfx3)}, 
	{NULL, 0}
};
static const u8 sHoppipGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_4.4bpp.lz");
static const ax_sprite sHoppipSprites4[] = {
	{sHoppipGfx4, ARRAY_COUNT(sHoppipGfx4)}, 
	{NULL, 0}
};
static const u8 sHoppipGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_5.4bpp.lz");
static const ax_sprite sHoppipSprites5[] = {
	{sHoppipGfx5, ARRAY_COUNT(sHoppipGfx5)}, 
	{NULL, 0}
};
static const u8 sHoppipGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_6.4bpp.lz");
static const ax_sprite sHoppipSprites6[] = {
	{sHoppipGfx6, ARRAY_COUNT(sHoppipGfx6)}, 
	{NULL, 0}
};
static const u8 sHoppipGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_7.4bpp.lz");
static const ax_sprite sHoppipSprites7[] = {
	{sHoppipGfx7, ARRAY_COUNT(sHoppipGfx7)}, 
	{NULL, 0}
};
static const u8 sHoppipGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_8.4bpp.lz");
static const ax_sprite sHoppipSprites8[] = {
	{sHoppipGfx8, ARRAY_COUNT(sHoppipGfx8)}, 
	{NULL, 0}
};
static const u8 sHoppipGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_9.4bpp.lz");
static const ax_sprite sHoppipSprites9[] = {
	{sHoppipGfx9, ARRAY_COUNT(sHoppipGfx9)}, 
	{NULL, 0}
};
static const u8 sHoppipGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_10.4bpp.lz");
static const ax_sprite sHoppipSprites10[] = {
	{sHoppipGfx10, ARRAY_COUNT(sHoppipGfx10)}, 
	{NULL, 0}
};
static const u8 sHoppipGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_11.4bpp.lz");
static const u8 sHoppipGfx11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_11_1.4bpp.lz");
static const u8 sHoppipGfx11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_11_2.4bpp.lz");
static const ax_sprite sHoppipSprites11[] = {
	{sHoppipGfx11, ARRAY_COUNT(sHoppipGfx11)}, 
	{NULL, 32}, 
	{sHoppipGfx11_1, ARRAY_COUNT(sHoppipGfx11_1)}, 
	{NULL, 32}, 
	{sHoppipGfx11_2, ARRAY_COUNT(sHoppipGfx11_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHoppipGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_12.4bpp.lz");
static const u8 sHoppipGfx12_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_12_1.4bpp.lz");
static const u8 sHoppipGfx12_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_12_2.4bpp.lz");
static const ax_sprite sHoppipSprites12[] = {
	{sHoppipGfx12, ARRAY_COUNT(sHoppipGfx12)}, 
	{NULL, 32}, 
	{sHoppipGfx12_1, ARRAY_COUNT(sHoppipGfx12_1)}, 
	{NULL, 32}, 
	{sHoppipGfx12_2, ARRAY_COUNT(sHoppipGfx12_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHoppipGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_13.4bpp.lz");
static const u8 sHoppipGfx13_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_13_1.4bpp.lz");
static const ax_sprite sHoppipSprites13[] = {
	{sHoppipGfx13, ARRAY_COUNT(sHoppipGfx13)}, 
	{NULL, 32}, 
	{sHoppipGfx13_1, ARRAY_COUNT(sHoppipGfx13_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHoppipGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_14.4bpp.lz");
static const u8 sHoppipGfx14_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_14_1.4bpp.lz");
static const u8 sHoppipGfx14_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_14_2.4bpp.lz");
static const ax_sprite sHoppipSprites14[] = {
	{sHoppipGfx14, ARRAY_COUNT(sHoppipGfx14)}, 
	{NULL, 32}, 
	{sHoppipGfx14_1, ARRAY_COUNT(sHoppipGfx14_1)}, 
	{NULL, 32}, 
	{sHoppipGfx14_2, ARRAY_COUNT(sHoppipGfx14_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHoppipGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_15.4bpp.lz");
static const u8 sHoppipGfx15_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_15_1.4bpp.lz");
static const u8 sHoppipGfx15_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_15_2.4bpp.lz");
static const ax_sprite sHoppipSprites15[] = {
	{sHoppipGfx15, ARRAY_COUNT(sHoppipGfx15)}, 
	{NULL, 32}, 
	{sHoppipGfx15_1, ARRAY_COUNT(sHoppipGfx15_1)}, 
	{NULL, 32}, 
	{sHoppipGfx15_2, ARRAY_COUNT(sHoppipGfx15_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHoppipGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_16.4bpp.lz");
static const u8 sHoppipGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_16_1.4bpp.lz");
static const u8 sHoppipGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_16_2.4bpp.lz");
static const ax_sprite sHoppipSprites16[] = {
	{sHoppipGfx16, ARRAY_COUNT(sHoppipGfx16)}, 
	{NULL, 64}, 
	{sHoppipGfx16_1, ARRAY_COUNT(sHoppipGfx16_1)}, 
	{NULL, 32}, 
	{sHoppipGfx16_2, ARRAY_COUNT(sHoppipGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHoppipGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_17.4bpp.lz");
static const u8 sHoppipGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_17_1.4bpp.lz");
static const u8 sHoppipGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_17_2.4bpp.lz");
static const u8 sHoppipGfx17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_17_3.4bpp.lz");
static const ax_sprite sHoppipSprites17[] = {
	{NULL, 32}, 
	{sHoppipGfx17, ARRAY_COUNT(sHoppipGfx17)}, 
	{NULL, 32}, 
	{sHoppipGfx17_1, ARRAY_COUNT(sHoppipGfx17_1)}, 
	{NULL, 32}, 
	{sHoppipGfx17_2, ARRAY_COUNT(sHoppipGfx17_2)}, 
	{NULL, 32}, 
	{sHoppipGfx17_3, ARRAY_COUNT(sHoppipGfx17_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sHoppipGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_18.4bpp.lz");
static const u8 sHoppipGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_18_1.4bpp.lz");
static const u8 sHoppipGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_18_2.4bpp.lz");
static const ax_sprite sHoppipSprites18[] = {
	{NULL, 32}, 
	{sHoppipGfx18, ARRAY_COUNT(sHoppipGfx18)}, 
	{NULL, 32}, 
	{sHoppipGfx18_1, ARRAY_COUNT(sHoppipGfx18_1)}, 
	{NULL, 32}, 
	{sHoppipGfx18_2, ARRAY_COUNT(sHoppipGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHoppipGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_19.4bpp.lz");
static const u8 sHoppipGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_19_1.4bpp.lz");
static const u8 sHoppipGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_19_2.4bpp.lz");
static const ax_sprite sHoppipSprites19[] = {
	{NULL, 32}, 
	{sHoppipGfx19, ARRAY_COUNT(sHoppipGfx19)}, 
	{NULL, 32}, 
	{sHoppipGfx19_1, ARRAY_COUNT(sHoppipGfx19_1)}, 
	{NULL, 32}, 
	{sHoppipGfx19_2, ARRAY_COUNT(sHoppipGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHoppipGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_20.4bpp.lz");
static const u8 sHoppipGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_20_1.4bpp.lz");
static const u8 sHoppipGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_20_2.4bpp.lz");
static const u8 sHoppipGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_20_3.4bpp.lz");
static const ax_sprite sHoppipSprites20[] = {
	{sHoppipGfx20, ARRAY_COUNT(sHoppipGfx20)}, 
	{NULL, 32}, 
	{sHoppipGfx20_1, ARRAY_COUNT(sHoppipGfx20_1)}, 
	{NULL, 32}, 
	{sHoppipGfx20_2, ARRAY_COUNT(sHoppipGfx20_2)}, 
	{NULL, 64}, 
	{sHoppipGfx20_3, ARRAY_COUNT(sHoppipGfx20_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sHoppipGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_21.4bpp.lz");
static const u8 sHoppipGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_21_1.4bpp.lz");
static const u8 sHoppipGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_21_2.4bpp.lz");
static const u8 sHoppipGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_21_3.4bpp.lz");
static const ax_sprite sHoppipSprites21[] = {
	{sHoppipGfx21, ARRAY_COUNT(sHoppipGfx21)}, 
	{NULL, 32}, 
	{sHoppipGfx21_1, ARRAY_COUNT(sHoppipGfx21_1)}, 
	{NULL, 32}, 
	{sHoppipGfx21_2, ARRAY_COUNT(sHoppipGfx21_2)}, 
	{NULL, 32}, 
	{sHoppipGfx21_3, ARRAY_COUNT(sHoppipGfx21_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sHoppipGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_22.4bpp.lz");
static const u8 sHoppipGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_22_1.4bpp.lz");
static const u8 sHoppipGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_22_2.4bpp.lz");
static const u8 sHoppipGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_22_3.4bpp.lz");
static const ax_sprite sHoppipSprites22[] = {
	{NULL, 32}, 
	{sHoppipGfx22, ARRAY_COUNT(sHoppipGfx22)}, 
	{NULL, 32}, 
	{sHoppipGfx22_1, ARRAY_COUNT(sHoppipGfx22_1)}, 
	{NULL, 32}, 
	{sHoppipGfx22_2, ARRAY_COUNT(sHoppipGfx22_2)}, 
	{NULL, 64}, 
	{sHoppipGfx22_3, ARRAY_COUNT(sHoppipGfx22_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sHoppipGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_23.4bpp.lz");
static const u8 sHoppipGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_23_1.4bpp.lz");
static const u8 sHoppipGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_23_2.4bpp.lz");
static const ax_sprite sHoppipSprites23[] = {
	{sHoppipGfx23, ARRAY_COUNT(sHoppipGfx23)}, 
	{NULL, 32}, 
	{sHoppipGfx23_1, ARRAY_COUNT(sHoppipGfx23_1)}, 
	{NULL, 32}, 
	{sHoppipGfx23_2, ARRAY_COUNT(sHoppipGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHoppipGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_24.4bpp.lz");
static const u8 sHoppipGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_24_1.4bpp.lz");
static const u8 sHoppipGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_24_2.4bpp.lz");
static const ax_sprite sHoppipSprites24[] = {
	{sHoppipGfx24, ARRAY_COUNT(sHoppipGfx24)}, 
	{NULL, 32}, 
	{sHoppipGfx24_1, ARRAY_COUNT(sHoppipGfx24_1)}, 
	{NULL, 32}, 
	{sHoppipGfx24_2, ARRAY_COUNT(sHoppipGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHoppipGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_25.4bpp.lz");
static const u8 sHoppipGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_25_1.4bpp.lz");
static const ax_sprite sHoppipSprites25[] = {
	{sHoppipGfx25, ARRAY_COUNT(sHoppipGfx25)}, 
	{NULL, 32}, 
	{sHoppipGfx25_1, ARRAY_COUNT(sHoppipGfx25_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHoppipGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_26.4bpp.lz");
static const u8 sHoppipGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_26_1.4bpp.lz");
static const ax_sprite sHoppipSprites26[] = {
	{sHoppipGfx26, ARRAY_COUNT(sHoppipGfx26)}, 
	{NULL, 64}, 
	{sHoppipGfx26_1, ARRAY_COUNT(sHoppipGfx26_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sHoppipGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_27.4bpp.lz");
static const u8 sHoppipGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_27_1.4bpp.lz");
static const ax_sprite sHoppipSprites27[] = {
	{sHoppipGfx27, ARRAY_COUNT(sHoppipGfx27)}, 
	{NULL, 32}, 
	{sHoppipGfx27_1, ARRAY_COUNT(sHoppipGfx27_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHoppipGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_28.4bpp.lz");
static const u8 sHoppipGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_28_1.4bpp.lz");
static const u8 sHoppipGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_28_2.4bpp.lz");
static const u8 sHoppipGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_28_3.4bpp.lz");
static const ax_sprite sHoppipSprites28[] = {
	{NULL, 32}, 
	{sHoppipGfx28, ARRAY_COUNT(sHoppipGfx28)}, 
	{NULL, 32}, 
	{sHoppipGfx28_1, ARRAY_COUNT(sHoppipGfx28_1)}, 
	{NULL, 32}, 
	{sHoppipGfx28_2, ARRAY_COUNT(sHoppipGfx28_2)}, 
	{NULL, 64}, 
	{sHoppipGfx28_3, ARRAY_COUNT(sHoppipGfx28_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sHoppipGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_29.4bpp.lz");
static const u8 sHoppipGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_29_1.4bpp.lz");
static const u8 sHoppipGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_29_2.4bpp.lz");
static const u8 sHoppipGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_29_3.4bpp.lz");
static const ax_sprite sHoppipSprites29[] = {
	{NULL, 32}, 
	{sHoppipGfx29, ARRAY_COUNT(sHoppipGfx29)}, 
	{NULL, 32}, 
	{sHoppipGfx29_1, ARRAY_COUNT(sHoppipGfx29_1)}, 
	{NULL, 32}, 
	{sHoppipGfx29_2, ARRAY_COUNT(sHoppipGfx29_2)}, 
	{NULL, 64}, 
	{sHoppipGfx29_3, ARRAY_COUNT(sHoppipGfx29_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sHoppipGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_30.4bpp.lz");
static const u8 sHoppipGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_30_1.4bpp.lz");
static const u8 sHoppipGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_30_2.4bpp.lz");
static const ax_sprite sHoppipSprites30[] = {
	{NULL, 32}, 
	{sHoppipGfx30, ARRAY_COUNT(sHoppipGfx30)}, 
	{NULL, 32}, 
	{sHoppipGfx30_1, ARRAY_COUNT(sHoppipGfx30_1)}, 
	{NULL, 64}, 
	{sHoppipGfx30_2, ARRAY_COUNT(sHoppipGfx30_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sHoppipGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_31.4bpp.lz");
static const ax_sprite sHoppipSprites31[] = {
	{sHoppipGfx31, ARRAY_COUNT(sHoppipGfx31)}, 
	{NULL, 0}
};
static const u8 sHoppipGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_32.4bpp.lz");
static const ax_sprite sHoppipSprites32[] = {
	{sHoppipGfx32, ARRAY_COUNT(sHoppipGfx32)}, 
	{NULL, 0}
};
static const u8 sHoppipGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_33.4bpp.lz");
static const ax_sprite sHoppipSprites33[] = {
	{sHoppipGfx33, ARRAY_COUNT(sHoppipGfx33)}, 
	{NULL, 0}
};
static const u8 sHoppipGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_34.4bpp.lz");
static const ax_sprite sHoppipSprites34[] = {
	{sHoppipGfx34, ARRAY_COUNT(sHoppipGfx34)}, 
	{NULL, 0}
};
static const u8 sHoppipGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_35.4bpp.lz");
static const ax_sprite sHoppipSprites35[] = {
	{sHoppipGfx35, ARRAY_COUNT(sHoppipGfx35)}, 
	{NULL, 0}
};
static const u8 sHoppipGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_36.4bpp.lz");
static const ax_sprite sHoppipSprites36[] = {
	{sHoppipGfx36, ARRAY_COUNT(sHoppipGfx36)}, 
	{NULL, 0}
};
static const u8 sHoppipGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoppip/sprite_37.4bpp.lz");
static const ax_sprite sHoppipSprites37[] = {
	{sHoppipGfx37, ARRAY_COUNT(sHoppipGfx37)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesHoppip[] = {
	sHoppipPose1,
	sHoppipPose2,
	sHoppipPose3,
	sHoppipPose4,
	sHoppipPose5,
	sHoppipPose6,
	sHoppipPose7,
	sHoppipPose8,
	sHoppipPose9,
	sHoppipPose10,
	sHoppipPose11,
	sHoppipPose12,
	sHoppipPose13,
	sHoppipPose14,
	sHoppipPose15,
	sHoppipPose16,
	sHoppipPose17,
	sHoppipPose18,
	sHoppipPose19,
	sHoppipPose20,
	sHoppipPose21,
	sHoppipPose22,
	sHoppipPose23,
	sHoppipPose24,
	sHoppipPose25,
	sHoppipPose26,
	sHoppipPose27,
	sHoppipPose28,
	sHoppipPose29,
	sHoppipPose30,
	sHoppipPose31,
	sHoppipPose32,
	sHoppipPose33,
	sHoppipPose34,
	sHoppipPose35,
	sHoppipPose36,
	sHoppipPose37,
	sHoppipPose38,
	sHoppipPose39,
	sHoppipPose40,
	sHoppipPose41,
	sHoppipPose42,
	sHoppipPose43,
	sHoppipPose44,
	sHoppipPose45,
	sHoppipPose46,
	sHoppipPose47,
	sHoppipPose48,
	sHoppipPose49,
	sHoppipPose50,
	sHoppipPose51,
	sHoppipPose52,
	sHoppipPose53,
	sHoppipPose54,
	sHoppipPose55,
	sHoppipPose56,
	sHoppipPose57,
	sHoppipPose58,
	sHoppipPose59,
	sHoppipPose60,
	sHoppipPose61,
	sHoppipPose62,
	sHoppipPose63,
	sHoppipPose64,
	sHoppipPose65,
	sHoppipPose66,
	sHoppipPose67,
	sHoppipPose68,
	sHoppipPose69,
	sHoppipPose70,
	sHoppipPose71,
	sHoppipPose72,
	sHoppipPose73,
	sHoppipPose74,
	sHoppipPose75,
	sHoppipPose76,
	sHoppipPose77,
	sHoppipPose78,
	sHoppipPose79,
	sHoppipPose80,
	sHoppipPose81,
	sHoppipPose82,
	sHoppipPose83,
	sHoppipPose84,
	sHoppipPose85,
	sHoppipPose86,
	sHoppipPose87,
	sHoppipPose88,
	sHoppipPose65,
	sHoppipPose66,
	sHoppipPose67,
	sHoppipPose68,
	sHoppipPose69,
	sHoppipPose70,
	sHoppipPose71,
	sHoppipPose72,
	sHoppipPose73,
	sHoppipPose74,
	sHoppipPose75,
	sHoppipPose76,
	sHoppipPose77,
	sHoppipPose78,
	sHoppipPose79,
	sHoppipPose80,
	sHoppipPose81,
	sHoppipPose82,
	sHoppipPose83,
	sHoppipPose84,
	sHoppipPose85,
	sHoppipPose86,
	sHoppipPose87,
	sHoppipPose88,
	sHoppipPose65,
	sHoppipPose114,
	sHoppipPose67,
	sHoppipPose68,
	sHoppipPose117,
	sHoppipPose70,
	sHoppipPose71,
	sHoppipPose120,
	sHoppipPose73,
	sHoppipPose74,
	sHoppipPose123,
	sHoppipPose76,
	sHoppipPose77,
	sHoppipPose126,
	sHoppipPose79,
	sHoppipPose80,
	sHoppipPose129,
	sHoppipPose82,
	sHoppipPose83,
	sHoppipPose132,
	sHoppipPose85,
	sHoppipPose86,
	sHoppipPose135,
	sHoppipPose88,
	sHoppipPose67,
	sHoppipPose88,
	sHoppipPose85,
	sHoppipPose82,
	sHoppipPose79,
	sHoppipPose76,
	sHoppipPose73,
	sHoppipPose70,
	sHoppipPose145,
	sHoppipPose146,
	sHoppipPose147,
	sHoppipPose148,
	sHoppipPose149,
	sHoppipPose150,
	sHoppipPose151,
	sHoppipPose152,
	sHoppipPose153,
	sHoppipPose154,
	sHoppipPose65,
	sHoppipPose86,
	sHoppipPose83,
	sHoppipPose158,
	sHoppipPose159,
	sHoppipPose74,
	sHoppipPose71,
	sHoppipPose68,
	sHoppipPose66,
	sHoppipPose87,
	sHoppipPose84,
	sHoppipPose166,
	sHoppipPose167,
	sHoppipPose75,
	sHoppipPose72,
	sHoppipPose69,
	sHoppipPose67,
	sHoppipPose88,
	sHoppipPose85,
	sHoppipPose174,
	sHoppipPose175,
	sHoppipPose76,
	sHoppipPose73,
	sHoppipPose70,
	sHoppipPose65,
	sHoppipPose86,
	sHoppipPose181,
	sHoppipPose80,
	sHoppipPose77,
	sHoppipPose74,
	sHoppipPose185,
	sHoppipPose68,
	sHoppipPose114,
	sHoppipPose188,
	sHoppipPose189,
	sHoppipPose190,
	sHoppipPose126,
	sHoppipPose192,
	sHoppipPose193,
	sHoppipPose194,
	sHoppipPose65,
	sHoppipPose114,
	sHoppipPose66,
	sHoppipPose68,
	sHoppipPose117,
	sHoppipPose69,
	sHoppipPose71,
	sHoppipPose202,
	sHoppipPose72,
	sHoppipPose74,
	sHoppipPose123,
	sHoppipPose75,
	sHoppipPose77,
	sHoppipPose126,
	sHoppipPose78,
	sHoppipPose80,
	sHoppipPose129,
	sHoppipPose81,
	sHoppipPose83,
	sHoppipPose214,
	sHoppipPose84,
	sHoppipPose86,
	sHoppipPose135,
	sHoppipPose87,
	sHoppipPose67,
	sHoppipPose88,
	sHoppipPose85,
	sHoppipPose82,
	sHoppipPose79,
	sHoppipPose76,
	sHoppipPose73,
	sHoppipPose70,
	sHoppipPose65,
	sHoppipPose86,
	sHoppipPose83,
	sHoppipPose80,
	sHoppipPose77,
	sHoppipPose74,
	sHoppipPose71,
	sHoppipPose68,
};

static const struct PositionSets sAxPositionsHoppip[] = {
	[0] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -8} } },
	[1] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -8} } },
	[2] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -8} } },
	[3] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -8} } },
	[4] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -8} } },
	[5] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -8} } },
	[6] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -8} } },
	[7] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -8} } },
	[8] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[9] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[10] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[11] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[12] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[13] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[14] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[15] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[16] = { .set = { {6, -10}, {7, -8}, {5, -5}, {0, -10} } },
	[17] = { .set = { {6, -10}, {7, -8}, {5, -5}, {0, -10} } },
	[18] = { .set = { {6, -10}, {7, -8}, {5, -5}, {0, -10} } },
	[19] = { .set = { {6, -10}, {7, -8}, {5, -5}, {0, -10} } },
	[20] = { .set = { {6, -10}, {7, -8}, {5, -5}, {0, -10} } },
	[21] = { .set = { {6, -10}, {7, -8}, {5, -5}, {0, -10} } },
	[22] = { .set = { {6, -10}, {7, -8}, {5, -5}, {0, -10} } },
	[23] = { .set = { {6, -10}, {7, -8}, {5, -5}, {0, -10} } },
	[24] = { .set = { {3, -12}, {-1, -9}, {6, -6}, {0, -10} } },
	[25] = { .set = { {3, -12}, {-1, -9}, {6, -6}, {0, -10} } },
	[26] = { .set = { {3, -12}, {-1, -9}, {6, -6}, {0, -10} } },
	[27] = { .set = { {3, -12}, {-1, -9}, {6, -6}, {0, -10} } },
	[28] = { .set = { {3, -12}, {-1, -9}, {6, -6}, {0, -10} } },
	[29] = { .set = { {3, -12}, {-1, -9}, {6, -6}, {0, -10} } },
	[30] = { .set = { {3, -12}, {-1, -9}, {6, -6}, {0, -10} } },
	[31] = { .set = { {3, -12}, {-1, -9}, {6, -6}, {0, -10} } },
	[32] = { .set = { {0, -9}, {2, -7}, {-3, -7}, {0, -10} } },
	[33] = { .set = { {0, -9}, {2, -7}, {-3, -7}, {0, -10} } },
	[34] = { .set = { {0, -9}, {2, -7}, {-3, -7}, {0, -10} } },
	[35] = { .set = { {0, -9}, {2, -7}, {-3, -7}, {0, -10} } },
	[36] = { .set = { {0, -9}, {2, -7}, {-3, -7}, {0, -10} } },
	[37] = { .set = { {0, -9}, {2, -7}, {-3, -7}, {0, -10} } },
	[38] = { .set = { {0, -9}, {2, -7}, {-3, -7}, {0, -10} } },
	[39] = { .set = { {0, -9}, {2, -7}, {-3, -7}, {0, -10} } },
	[40] = { .set = { {-4, -12}, {0, -9}, {-7, -6}, {-1, -10} } },
	[41] = { .set = { {-4, -12}, {0, -9}, {-7, -6}, {-1, -10} } },
	[42] = { .set = { {-4, -12}, {0, -9}, {-7, -6}, {-1, -10} } },
	[43] = { .set = { {-4, -12}, {0, -9}, {-7, -6}, {-1, -10} } },
	[44] = { .set = { {-4, -12}, {0, -9}, {-7, -6}, {-1, -10} } },
	[45] = { .set = { {-4, -12}, {0, -9}, {-7, -6}, {-1, -10} } },
	[46] = { .set = { {-4, -12}, {0, -9}, {-7, -6}, {-1, -10} } },
	[47] = { .set = { {-4, -12}, {0, -9}, {-7, -6}, {-1, -10} } },
	[48] = { .set = { {-7, -10}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[49] = { .set = { {-7, -10}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[50] = { .set = { {-7, -10}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[51] = { .set = { {-7, -10}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[52] = { .set = { {-7, -10}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[53] = { .set = { {-7, -10}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[54] = { .set = { {-7, -10}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[55] = { .set = { {-7, -10}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[56] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[57] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[58] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[59] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[60] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[61] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[62] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[63] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[64] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -9} } },
	[65] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {-1, -9} } },
	[66] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -9} } },
	[67] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[68] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[69] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[70] = { .set = { {5, -9}, {7, -8}, {5, -5}, {0, -10} } },
	[71] = { .set = { {5, -9}, {7, -8}, {5, -5}, {0, -10} } },
	[72] = { .set = { {5, -9}, {7, -8}, {5, -5}, {0, -10} } },
	[73] = { .set = { {2, -11}, {0, -9}, {6, -6}, {0, -10} } },
	[74] = { .set = { {2, -12}, {-1, -9}, {6, -6}, {-1, -10} } },
	[75] = { .set = { {1, -10}, {0, -9}, {6, -6}, {-1, -10} } },
	[76] = { .set = { {0, -10}, {2, -8}, {-3, -8}, {-1, -9} } },
	[77] = { .set = { {0, -10}, {2, -8}, {-3, -8}, {-1, -9} } },
	[78] = { .set = { {0, -10}, {2, -8}, {-3, -8}, {-1, -9} } },
	[79] = { .set = { {-3, -11}, {-1, -9}, {-7, -6}, {-1, -10} } },
	[80] = { .set = { {-3, -12}, {0, -9}, {-7, -6}, {0, -10} } },
	[81] = { .set = { {-2, -10}, {-1, -9}, {-7, -6}, {0, -10} } },
	[82] = { .set = { {-6, -9}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[83] = { .set = { {-6, -9}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[84] = { .set = { {-6, -9}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[85] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[86] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[87] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[88] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -9} } },
	[89] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {-1, -9} } },
	[90] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -9} } },
	[91] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[92] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[93] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[94] = { .set = { {5, -9}, {7, -8}, {5, -5}, {0, -10} } },
	[95] = { .set = { {5, -9}, {7, -8}, {5, -5}, {0, -10} } },
	[96] = { .set = { {5, -9}, {7, -8}, {5, -5}, {0, -10} } },
	[97] = { .set = { {2, -11}, {0, -9}, {6, -6}, {0, -10} } },
	[98] = { .set = { {2, -12}, {-1, -9}, {6, -6}, {-1, -10} } },
	[99] = { .set = { {1, -10}, {0, -9}, {6, -6}, {-1, -10} } },
	[100] = { .set = { {0, -10}, {2, -8}, {-3, -8}, {-1, -9} } },
	[101] = { .set = { {0, -10}, {2, -8}, {-3, -8}, {-1, -9} } },
	[102] = { .set = { {0, -10}, {2, -8}, {-3, -8}, {-1, -9} } },
	[103] = { .set = { {-3, -11}, {-1, -9}, {-7, -6}, {-1, -10} } },
	[104] = { .set = { {-3, -12}, {0, -9}, {-7, -6}, {0, -10} } },
	[105] = { .set = { {-2, -10}, {-1, -9}, {-7, -6}, {0, -10} } },
	[106] = { .set = { {-6, -9}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[107] = { .set = { {-6, -9}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[108] = { .set = { {-6, -9}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[109] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[110] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[111] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[112] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -9} } },
	[113] = { .set = { {0, -12}, {-7, -9}, {6, -9}, {-1, -10} } },
	[114] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -9} } },
	[115] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[116] = { .set = { {2, -13}, {6, -12}, {-2, -9}, {0, -12} } },
	[117] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[118] = { .set = { {5, -9}, {7, -8}, {5, -5}, {0, -10} } },
	[119] = { .set = { {5, -13}, {6, -14}, {5, -10}, {-1, -11} } },
	[120] = { .set = { {5, -9}, {7, -8}, {5, -5}, {0, -10} } },
	[121] = { .set = { {2, -11}, {0, -9}, {6, -6}, {0, -10} } },
	[122] = { .set = { {1, -13}, {-3, -15}, {4, -12}, {-1, -9} } },
	[123] = { .set = { {1, -10}, {0, -9}, {6, -6}, {-1, -10} } },
	[124] = { .set = { {0, -10}, {2, -8}, {-3, -8}, {-1, -9} } },
	[125] = { .set = { {0, -16}, {8, -11}, {-9, -11}, {-1, -11} } },
	[126] = { .set = { {0, -10}, {2, -8}, {-3, -8}, {-1, -9} } },
	[127] = { .set = { {-3, -11}, {-1, -9}, {-7, -6}, {-1, -10} } },
	[128] = { .set = { {-2, -13}, {2, -15}, {-5, -12}, {0, -9} } },
	[129] = { .set = { {-2, -10}, {-1, -9}, {-7, -6}, {0, -10} } },
	[130] = { .set = { {-6, -9}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[131] = { .set = { {-6, -13}, {-7, -14}, {-6, -10}, {0, -11} } },
	[132] = { .set = { {-6, -9}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[133] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[134] = { .set = { {-3, -13}, {-7, -12}, {1, -9}, {-1, -12} } },
	[135] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[136] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -9} } },
	[137] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[138] = { .set = { {-6, -9}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[139] = { .set = { {-2, -10}, {-1, -9}, {-7, -6}, {0, -10} } },
	[140] = { .set = { {0, -10}, {2, -8}, {-3, -8}, {-1, -9} } },
	[141] = { .set = { {1, -10}, {0, -9}, {6, -6}, {-1, -10} } },
	[142] = { .set = { {5, -9}, {7, -8}, {5, -5}, {0, -10} } },
	[143] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[144] = { .set = { {-4, -7}, {-6, -5}, {-1, -3}, {-1, -8} } },
	[145] = { .set = { {-4, -6}, {-6, -4}, {-1, -2}, {-2, -7} } },
	[146] = { .set = { {-1, -12}, {-5, -8}, {4, -8}, {-1, -11} } },
	[147] = { .set = { {1, -13}, {6, -10}, {1, -8}, {-1, -11} } },
	[148] = { .set = { {4, -14}, {7, -13}, {4, -9}, {-1, -12} } },
	[149] = { .set = { {0, -14}, {-1, -14}, {7, -11}, {-1, -12} } },
	[150] = { .set = { {-1, -12}, {3, -11}, {-4, -11}, {0, -12} } },
	[151] = { .set = { {-1, -14}, {0, -14}, {-8, -11}, {0, -12} } },
	[152] = { .set = { {-5, -14}, {-8, -13}, {-5, -9}, {0, -12} } },
	[153] = { .set = { {-2, -13}, {-7, -10}, {-2, -8}, {0, -11} } },
	[154] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -9} } },
	[155] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[156] = { .set = { {-6, -9}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[157] = { .set = { {-3, -12}, {-1, -10}, {-7, -7}, {-1, -11} } },
	[158] = { .set = { {0, -11}, {2, -9}, {-3, -9}, {-1, -10} } },
	[159] = { .set = { {2, -11}, {0, -9}, {6, -6}, {0, -10} } },
	[160] = { .set = { {5, -9}, {7, -8}, {5, -5}, {0, -10} } },
	[161] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[162] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {-1, -9} } },
	[163] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[164] = { .set = { {-6, -9}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[165] = { .set = { {-3, -13}, {0, -10}, {-7, -7}, {0, -11} } },
	[166] = { .set = { {0, -11}, {2, -9}, {-3, -9}, {-1, -10} } },
	[167] = { .set = { {2, -12}, {-1, -9}, {6, -6}, {-1, -10} } },
	[168] = { .set = { {5, -9}, {7, -8}, {5, -5}, {0, -10} } },
	[169] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[170] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -9} } },
	[171] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[172] = { .set = { {-6, -9}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[173] = { .set = { {-2, -11}, {-1, -10}, {-7, -7}, {0, -11} } },
	[174] = { .set = { {0, -11}, {2, -9}, {-3, -9}, {-1, -10} } },
	[175] = { .set = { {1, -10}, {0, -9}, {6, -6}, {-1, -10} } },
	[176] = { .set = { {5, -9}, {7, -8}, {5, -5}, {0, -10} } },
	[177] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[178] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -9} } },
	[179] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[180] = { .set = { {-5, -8}, {-7, -7}, {-5, -4}, {0, -9} } },
	[181] = { .set = { {-3, -11}, {-1, -9}, {-7, -6}, {-1, -10} } },
	[182] = { .set = { {0, -10}, {2, -8}, {-3, -8}, {-1, -9} } },
	[183] = { .set = { {2, -11}, {0, -9}, {6, -6}, {0, -10} } },
	[184] = { .set = { {4, -8}, {6, -7}, {4, -4}, {-1, -9} } },
	[185] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[186] = { .set = { {0, -12}, {-7, -9}, {6, -9}, {-1, -10} } },
	[187] = { .set = { {2, -12}, {6, -11}, {-2, -8}, {0, -11} } },
	[188] = { .set = { {6, -12}, {7, -13}, {6, -9}, {0, -10} } },
	[189] = { .set = { {1, -14}, {-3, -16}, {4, -13}, {-1, -10} } },
	[190] = { .set = { {0, -16}, {8, -11}, {-9, -11}, {-1, -11} } },
	[191] = { .set = { {-2, -14}, {2, -16}, {-5, -13}, {0, -10} } },
	[192] = { .set = { {-6, -12}, {-7, -13}, {-6, -9}, {0, -10} } },
	[193] = { .set = { {-3, -12}, {-7, -11}, {1, -8}, {-1, -11} } },
	[194] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -9} } },
	[195] = { .set = { {0, -12}, {-7, -9}, {6, -9}, {-1, -10} } },
	[196] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {-1, -9} } },
	[197] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[198] = { .set = { {2, -13}, {6, -12}, {-2, -9}, {0, -12} } },
	[199] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[200] = { .set = { {5, -9}, {7, -8}, {5, -5}, {0, -10} } },
	[201] = { .set = { {6, -13}, {7, -14}, {6, -10}, {0, -11} } },
	[202] = { .set = { {5, -9}, {7, -8}, {5, -5}, {0, -10} } },
	[203] = { .set = { {2, -11}, {0, -9}, {6, -6}, {0, -10} } },
	[204] = { .set = { {1, -13}, {-3, -15}, {4, -12}, {-1, -9} } },
	[205] = { .set = { {2, -12}, {-1, -9}, {6, -6}, {-1, -10} } },
	[206] = { .set = { {0, -10}, {2, -8}, {-3, -8}, {-1, -9} } },
	[207] = { .set = { {0, -16}, {8, -11}, {-9, -11}, {-1, -11} } },
	[208] = { .set = { {0, -10}, {2, -8}, {-3, -8}, {-1, -9} } },
	[209] = { .set = { {-3, -11}, {-1, -9}, {-7, -6}, {-1, -10} } },
	[210] = { .set = { {-2, -13}, {2, -15}, {-5, -12}, {0, -9} } },
	[211] = { .set = { {-3, -12}, {0, -9}, {-7, -6}, {0, -10} } },
	[212] = { .set = { {-6, -9}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[213] = { .set = { {-7, -13}, {-8, -14}, {-7, -10}, {-1, -11} } },
	[214] = { .set = { {-6, -9}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[215] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[216] = { .set = { {-3, -13}, {-7, -12}, {1, -9}, {-1, -12} } },
	[217] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[218] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -9} } },
	[219] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[220] = { .set = { {-6, -9}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[221] = { .set = { {-2, -10}, {-1, -9}, {-7, -6}, {0, -10} } },
	[222] = { .set = { {0, -10}, {2, -8}, {-3, -8}, {-1, -9} } },
	[223] = { .set = { {1, -10}, {0, -9}, {6, -6}, {-1, -10} } },
	[224] = { .set = { {5, -9}, {7, -8}, {5, -5}, {0, -10} } },
	[225] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
	[226] = { .set = { {-1, -8}, {-3, -5}, {2, -5}, {0, -9} } },
	[227] = { .set = { {-3, -9}, {-7, -6}, {-2, -4}, {-1, -9} } },
	[228] = { .set = { {-6, -9}, {-8, -8}, {-6, -5}, {-1, -10} } },
	[229] = { .set = { {-3, -11}, {-1, -9}, {-7, -6}, {-1, -10} } },
	[230] = { .set = { {0, -10}, {2, -8}, {-3, -8}, {-1, -9} } },
	[231] = { .set = { {2, -11}, {0, -9}, {6, -6}, {0, -10} } },
	[232] = { .set = { {5, -9}, {7, -8}, {5, -5}, {0, -10} } },
	[233] = { .set = { {2, -9}, {6, -6}, {1, -4}, {0, -9} } },
};

static const ax_anim *const sHoppipAnimTable1[] = {
	AX_ANIM_PTR(sHoppipAnims_1_1),
	AX_ANIM_PTR(sHoppipAnims_1_2),
	AX_ANIM_PTR(sHoppipAnims_1_3),
	AX_ANIM_PTR(sHoppipAnims_1_4),
	AX_ANIM_PTR(sHoppipAnims_1_5),
	AX_ANIM_PTR(sHoppipAnims_1_6),
	AX_ANIM_PTR(sHoppipAnims_1_7),
	AX_ANIM_PTR(sHoppipAnims_1_8),
};

static const ax_anim *const sHoppipAnimTable2[] = {
	AX_ANIM_PTR(sHoppipAnims_2_1),
	AX_ANIM_PTR(sHoppipAnims_2_2),
	AX_ANIM_PTR(sHoppipAnims_2_3),
	AX_ANIM_PTR(sHoppipAnims_2_4),
	AX_ANIM_PTR(sHoppipAnims_2_5),
	AX_ANIM_PTR(sHoppipAnims_2_6),
	AX_ANIM_PTR(sHoppipAnims_2_7),
	AX_ANIM_PTR(sHoppipAnims_2_8),
};

static const ax_anim *const sHoppipAnimTable3[] = {
	AX_ANIM_PTR(sHoppipAnims_3_1),
	AX_ANIM_PTR(sHoppipAnims_3_2),
	AX_ANIM_PTR(sHoppipAnims_3_3),
	AX_ANIM_PTR(sHoppipAnims_3_4),
	AX_ANIM_PTR(sHoppipAnims_3_5),
	AX_ANIM_PTR(sHoppipAnims_3_6),
	AX_ANIM_PTR(sHoppipAnims_3_7),
	AX_ANIM_PTR(sHoppipAnims_3_8),
};

static const ax_anim *const sHoppipAnimTable4[] = {
	AX_ANIM_PTR(sHoppipAnims_4_1),
	AX_ANIM_PTR(sHoppipAnims_4_2),
	AX_ANIM_PTR(sHoppipAnims_4_3),
	AX_ANIM_PTR(sHoppipAnims_4_4),
	AX_ANIM_PTR(sHoppipAnims_4_5),
	AX_ANIM_PTR(sHoppipAnims_4_6),
	AX_ANIM_PTR(sHoppipAnims_4_7),
	AX_ANIM_PTR(sHoppipAnims_4_8),
};

static const ax_anim *const sHoppipAnimTable5[] = {
	AX_ANIM_PTR(sHoppipAnims_5_1),
	AX_ANIM_PTR(sHoppipAnims_5_2),
	AX_ANIM_PTR(sHoppipAnims_5_3),
	AX_ANIM_PTR(sHoppipAnims_5_4),
	AX_ANIM_PTR(sHoppipAnims_5_5),
	AX_ANIM_PTR(sHoppipAnims_5_6),
	AX_ANIM_PTR(sHoppipAnims_5_7),
	AX_ANIM_PTR(sHoppipAnims_5_8),
};

static const ax_anim *const sHoppipAnimTable6[] = {
	AX_ANIM_PTR(sHoppipAnims_6_1),
	AX_ANIM_PTR(sHoppipAnims_6_1),
	AX_ANIM_PTR(sHoppipAnims_6_1),
	AX_ANIM_PTR(sHoppipAnims_6_1),
	AX_ANIM_PTR(sHoppipAnims_6_1),
	AX_ANIM_PTR(sHoppipAnims_6_1),
	AX_ANIM_PTR(sHoppipAnims_6_1),
	AX_ANIM_PTR(sHoppipAnims_6_1),
};

static const ax_anim *const sHoppipAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00531),
	AX_ANIM_PTR(gAxSharedAnim_00543),
	AX_ANIM_PTR(gAxSharedAnim_00551),
	AX_ANIM_PTR(gAxSharedAnim_00559),
	AX_ANIM_PTR(gAxSharedAnim_00577),
	AX_ANIM_PTR(gAxSharedAnim_00587),
	AX_ANIM_PTR(gAxSharedAnim_00596),
	AX_ANIM_PTR(gAxSharedAnim_00602),
};

static const ax_anim *const sHoppipAnimTable8[] = {
	AX_ANIM_PTR(sHoppipAnims_8_1),
	AX_ANIM_PTR(sHoppipAnims_8_2),
	AX_ANIM_PTR(sHoppipAnims_8_3),
	AX_ANIM_PTR(sHoppipAnims_8_4),
	AX_ANIM_PTR(sHoppipAnims_8_5),
	AX_ANIM_PTR(sHoppipAnims_8_6),
	AX_ANIM_PTR(sHoppipAnims_8_7),
	AX_ANIM_PTR(sHoppipAnims_8_8),
};

static const ax_anim *const sHoppipAnimTable9[] = {
	AX_ANIM_PTR(sHoppipAnims_9_1),
	AX_ANIM_PTR(sHoppipAnims_9_2),
	AX_ANIM_PTR(sHoppipAnims_9_3),
	AX_ANIM_PTR(sHoppipAnims_9_4),
	AX_ANIM_PTR(sHoppipAnims_9_5),
	AX_ANIM_PTR(sHoppipAnims_9_6),
	AX_ANIM_PTR(sHoppipAnims_9_7),
	AX_ANIM_PTR(sHoppipAnims_9_8),
};

static const ax_anim *const sHoppipAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01016),
	AX_ANIM_PTR(gAxSharedAnim_01027),
	AX_ANIM_PTR(gAxSharedAnim_01046),
	AX_ANIM_PTR(gAxSharedAnim_01061),
	AX_ANIM_PTR(gAxSharedAnim_01078),
	AX_ANIM_PTR(gAxSharedAnim_01092),
	AX_ANIM_PTR(gAxSharedAnim_01110),
	AX_ANIM_PTR(gAxSharedAnim_01124),
};

static const ax_anim *const sHoppipAnimTable11[] = {
	AX_ANIM_PTR(sHoppipAnims_11_1),
	AX_ANIM_PTR(sHoppipAnims_11_2),
	AX_ANIM_PTR(sHoppipAnims_11_3),
	AX_ANIM_PTR(sHoppipAnims_11_4),
	AX_ANIM_PTR(sHoppipAnims_11_5),
	AX_ANIM_PTR(sHoppipAnims_11_6),
	AX_ANIM_PTR(sHoppipAnims_11_7),
	AX_ANIM_PTR(sHoppipAnims_11_8),
};

static const ax_anim *const sHoppipAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01423),
	AX_ANIM_PTR(gAxSharedAnim_01467),
	AX_ANIM_PTR(gAxSharedAnim_01458),
	AX_ANIM_PTR(gAxSharedAnim_01449),
	AX_ANIM_PTR(gAxSharedAnim_01448),
	AX_ANIM_PTR(gAxSharedAnim_01444),
	AX_ANIM_PTR(gAxSharedAnim_01432),
	AX_ANIM_PTR(gAxSharedAnim_01424),
};

static const ax_anim *const sHoppipAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01471),
	AX_ANIM_PTR(gAxSharedAnim_01516),
	AX_ANIM_PTR(gAxSharedAnim_01511),
	AX_ANIM_PTR(gAxSharedAnim_01504),
	AX_ANIM_PTR(gAxSharedAnim_01497),
	AX_ANIM_PTR(gAxSharedAnim_01490),
	AX_ANIM_PTR(gAxSharedAnim_01486),
	AX_ANIM_PTR(gAxSharedAnim_01478),
};

static const ax_anim *const *const sAxAnimationsHoppip[] = {
	sHoppipAnimTable1,
	sHoppipAnimTable2,
	sHoppipAnimTable3,
	sHoppipAnimTable4,
	sHoppipAnimTable5,
	sHoppipAnimTable6,
	sHoppipAnimTable7,
	sHoppipAnimTable8,
	sHoppipAnimTable9,
	sHoppipAnimTable10,
	sHoppipAnimTable11,
	sHoppipAnimTable12,
	sHoppipAnimTable13,
};

static const ax_sprite *const sAxSpritesHoppip[] = {
	sHoppipSprites1,
	sHoppipSprites2,
	sHoppipSprites3,
	sHoppipSprites4,
	sHoppipSprites5,
	sHoppipSprites6,
	sHoppipSprites7,
	sHoppipSprites8,
	sHoppipSprites9,
	sHoppipSprites10,
	sHoppipSprites11,
	sHoppipSprites12,
	sHoppipSprites13,
	sHoppipSprites14,
	sHoppipSprites15,
	sHoppipSprites16,
	sHoppipSprites17,
	sHoppipSprites18,
	sHoppipSprites19,
	sHoppipSprites20,
	sHoppipSprites21,
	sHoppipSprites22,
	sHoppipSprites23,
	sHoppipSprites24,
	sHoppipSprites25,
	sHoppipSprites26,
	sHoppipSprites27,
	sHoppipSprites28,
	sHoppipSprites29,
	sHoppipSprites30,
	sHoppipSprites31,
	sHoppipSprites32,
	sHoppipSprites33,
	sHoppipSprites34,
	sHoppipSprites35,
	sHoppipSprites36,
	sHoppipSprites37,
};

static const axmain sAxMainHoppip = {
	.poses = sAxPosesHoppip,
	.animations = sAxAnimationsHoppip,
	.animCount = ARRAY_COUNT(sAxAnimationsHoppip),
	.spriteData = sAxSpritesHoppip,
	.positions = sAxPositionsHoppip,
};
