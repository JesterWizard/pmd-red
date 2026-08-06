/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainKoffing;
const SiroArchive gAxKoffing = {"SIRO", &sAxMainKoffing};

static const ax_pose sKoffingPose1[] = {
	AX_POSE(0, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose2[] = {
	AX_POSE(1, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose3[] = {
	AX_POSE(2, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose4[] = {
	AX_POSE(3, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose5[] = {
	AX_POSE(4, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose6[] = {
	AX_POSE(5, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose7[] = {
	AX_POSE(6, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose8[] = {
	AX_POSE(7, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose9[] = {
	AX_POSE(8, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose10[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose11[] = {
	AX_POSE(10, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose12[] = {
	AX_POSE(11, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose13[] = {
	AX_POSE(12, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose14[] = {
	AX_POSE(13, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose15[] = {
	AX_POSE(14, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose16[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose17[] = {
	AX_POSE(10, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose18[] = {
	AX_POSE(11, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose19[] = {
	AX_POSE(6, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose20[] = {
	AX_POSE(7, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose21[] = {
	AX_POSE(8, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose22[] = {
	AX_POSE(3, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose23[] = {
	AX_POSE(4, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose24[] = {
	AX_POSE(5, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose26[] = {
	AX_POSE(15, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose27[] = {
	AX_POSE(16, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose28[] = {
	AX_POSE(17, OAM1(226, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose29[] = {
	AX_POSE(19, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose30[] = {
	AX_POSE(20, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose31[] = {
	AX_POSE(21, OAM1(207, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(207, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose32[] = {
	AX_POSE(22, OAM1(207, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(207, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose33[] = {
	AX_POSE(23, OAM1(207, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(207, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose34[] = {
	AX_POSE(24, OAM1(207, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(207, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose35[] = {
	AX_POSE(18, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose37[] = {
	AX_POSE(25, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose38[] = {
	AX_POSE(26, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose39[] = {
	AX_POSE(27, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose40[] = {
	AX_POSE(19, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(214, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose41[] = {
	AX_POSE(20, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(213, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(199, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose42[] = {
	AX_POSE(21, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(213, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(199, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose43[] = {
	AX_POSE(22, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(213, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(199, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose44[] = {
	AX_POSE(23, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(213, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(199, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose45[] = {
	AX_POSE(24, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(213, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(199, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose46[] = {
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose48[] = {
	AX_POSE(29, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose49[] = {
	AX_POSE(30, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose50[] = {
	AX_POSE(31, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose51[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose52[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(216, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(224, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose53[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(216, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(224, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose54[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(216, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(224, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose55[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(216, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(224, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose56[] = {
	AX_POSE(24, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(216, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(224, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose57[] = {
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose59[] = {
	AX_POSE(33, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose60[] = {
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose61[] = {
	AX_POSE(35, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose62[] = {
	AX_POSE(19, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(224, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose63[] = {
	AX_POSE(20, OAM1(9, ST_OAM_SQUARE     , 2), OAM2(238, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(248, ST_OAM_SQUARE     , 1), OAM2(216, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose64[] = {
	AX_POSE(21, OAM1(9, ST_OAM_SQUARE     , 2), OAM2(238, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(248, ST_OAM_SQUARE     , 1), OAM2(216, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose65[] = {
	AX_POSE(22, OAM1(9, ST_OAM_SQUARE     , 2), OAM2(238, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(248, ST_OAM_SQUARE     , 1), OAM2(216, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose66[] = {
	AX_POSE(23, OAM1(9, ST_OAM_SQUARE     , 2), OAM2(238, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(248, ST_OAM_SQUARE     , 1), OAM2(216, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose67[] = {
	AX_POSE(24, OAM1(9, ST_OAM_SQUARE     , 2), OAM2(238, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(248, ST_OAM_SQUARE     , 1), OAM2(216, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose68[] = {
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose70[] = {
	AX_POSE(37, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose71[] = {
	AX_POSE(38, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose72[] = {
	AX_POSE(39, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose73[] = {
	AX_POSE(19, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose74[] = {
	AX_POSE(20, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(9, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(231, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose75[] = {
	AX_POSE(21, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(9, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(231, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose76[] = {
	AX_POSE(22, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(9, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(231, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose77[] = {
	AX_POSE(23, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(9, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(231, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose78[] = {
	AX_POSE(24, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(9, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(231, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose79[] = {
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose80[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose81[] = {
	AX_POSE(33, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose82[] = {
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose83[] = {
	AX_POSE(35, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose84[] = {
	AX_POSE(19, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(255, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose85[] = {
	AX_POSE(20, OAM1(9, ST_OAM_SQUARE     , 2), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(248, ST_OAM_SQUARE     , 1), OAM2(24, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose86[] = {
	AX_POSE(21, OAM1(9, ST_OAM_SQUARE     , 2), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(248, ST_OAM_SQUARE     , 1), OAM2(24, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose87[] = {
	AX_POSE(22, OAM1(9, ST_OAM_SQUARE     , 2), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(248, ST_OAM_SQUARE     , 1), OAM2(24, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose88[] = {
	AX_POSE(23, OAM1(9, ST_OAM_SQUARE     , 2), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(248, ST_OAM_SQUARE     , 1), OAM2(24, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose89[] = {
	AX_POSE(24, OAM1(9, ST_OAM_SQUARE     , 2), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(248, ST_OAM_SQUARE     , 1), OAM2(24, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose90[] = {
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose91[] = {
	AX_POSE(6, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose92[] = {
	AX_POSE(29, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose93[] = {
	AX_POSE(30, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose94[] = {
	AX_POSE(31, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose95[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose96[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(24, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose97[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(24, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose98[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(24, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose99[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(24, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose100[] = {
	AX_POSE(24, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(24, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose101[] = {
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose102[] = {
	AX_POSE(3, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose103[] = {
	AX_POSE(25, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose104[] = {
	AX_POSE(26, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose105[] = {
	AX_POSE(27, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose106[] = {
	AX_POSE(19, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(214, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose107[] = {
	AX_POSE(20, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(27, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(199, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose108[] = {
	AX_POSE(21, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(27, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(199, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose109[] = {
	AX_POSE(22, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(27, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(199, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose110[] = {
	AX_POSE(23, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(27, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(199, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose111[] = {
	AX_POSE(24, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(27, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(199, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose112[] = {
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose117[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose118[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose119[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose120[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose121[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose122[] = {
	AX_POSE(24, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose128[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose129[] = {
	AX_POSE(20, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose130[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose131[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose132[] = {
	AX_POSE(23, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose133[] = {
	AX_POSE(24, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose139[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose140[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose141[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose142[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose143[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose144[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose150[] = {
	AX_POSE(19, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose151[] = {
	AX_POSE(20, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose152[] = {
	AX_POSE(21, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose153[] = {
	AX_POSE(22, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose154[] = {
	AX_POSE(23, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose155[] = {
	AX_POSE(24, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose161[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose162[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose163[] = {
	AX_POSE(21, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose164[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose165[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose166[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose172[] = {
	AX_POSE(19, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose173[] = {
	AX_POSE(20, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose174[] = {
	AX_POSE(21, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose175[] = {
	AX_POSE(22, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose176[] = {
	AX_POSE(23, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose177[] = {
	AX_POSE(24, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose183[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose184[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose185[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose186[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose187[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose188[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose194[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose195[] = {
	AX_POSE(20, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose196[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose197[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose198[] = {
	AX_POSE(23, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose199[] = {
	AX_POSE(24, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose204[] = {
	AX_POSE(41, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose208[] = {
	AX_POSE(42, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose212[] = {
	AX_POSE(43, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose216[] = {
	AX_POSE(44, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose220[] = {
	AX_POSE(45, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose222[] = {
	AX_POSE(33, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose223[] = {
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose224[] = {
	AX_POSE(44, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose226[] = {
	AX_POSE(29, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose227[] = {
	AX_POSE(30, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose228[] = {
	AX_POSE(43, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose230[] = {
	AX_POSE(25, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose231[] = {
	AX_POSE(26, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose232[] = {
	AX_POSE(42, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose241[] = {
	AX_POSE(46, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose242[] = {
	AX_POSE(47, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose243[] = {
	AX_POSE(48, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose244[] = {
	AX_POSE(49, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose245[] = {
	AX_POSE(50, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose246[] = {
	AX_POSE(51, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose247[] = {
	AX_POSE(52, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose248[] = {
	AX_POSE(51, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose249[] = {
	AX_POSE(50, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose250[] = {
	AX_POSE(49, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose284[] = {
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose285[] = {
	AX_POSE(29, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose286[] = {
	AX_POSE(33, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose287[] = {
	AX_POSE(37, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose288[] = {
	AX_POSE(33, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose289[] = {
	AX_POSE(29, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKoffingPose290[] = {
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const u8 sKoffingAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_1_1.lz");
static const u8 sKoffingAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_1_2.lz");
static const u8 sKoffingAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_1_3.lz");
static const u8 sKoffingAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_1_4.lz");
static const u8 sKoffingAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_1_5.lz");
static const u8 sKoffingAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_1_6.lz");
static const u8 sKoffingAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_1_7.lz");
static const u8 sKoffingAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_1_8.lz");
static const u8 sKoffingAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_2_1.lz");
static const u8 sKoffingAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_2_2.lz");
static const u8 sKoffingAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_2_3.lz");
static const u8 sKoffingAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_2_4.lz");
static const u8 sKoffingAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_2_5.lz");
static const u8 sKoffingAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_2_6.lz");
static const u8 sKoffingAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_2_7.lz");
static const u8 sKoffingAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_2_8.lz");
static const u8 sKoffingAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_3_1.lz");
static const u8 sKoffingAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_3_2.lz");
static const u8 sKoffingAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_3_3.lz");
static const u8 sKoffingAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_3_4.lz");
static const u8 sKoffingAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_3_5.lz");
static const u8 sKoffingAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_3_6.lz");
static const u8 sKoffingAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_3_7.lz");
static const u8 sKoffingAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_3_8.lz");
static const u8 sKoffingAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_4_1.lz");
static const u8 sKoffingAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_4_2.lz");
static const u8 sKoffingAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_4_3.lz");
static const u8 sKoffingAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_4_4.lz");
static const u8 sKoffingAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_4_5.lz");
static const u8 sKoffingAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_4_6.lz");
static const u8 sKoffingAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_4_7.lz");
static const u8 sKoffingAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_4_8.lz");
static const u8 sKoffingAnims_6_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_6_1.lz");
static const u8 sKoffingAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_8_1.lz");
static const u8 sKoffingAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_8_2.lz");
static const u8 sKoffingAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_8_3.lz");
static const u8 sKoffingAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_8_4.lz");
static const u8 sKoffingAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_8_5.lz");
static const u8 sKoffingAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_8_6.lz");
static const u8 sKoffingAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_8_7.lz");
static const u8 sKoffingAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_8_8.lz");
static const u8 sKoffingAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_9_1.lz");
static const u8 sKoffingAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_9_2.lz");
static const u8 sKoffingAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_9_3.lz");
static const u8 sKoffingAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_9_4.lz");
static const u8 sKoffingAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_9_5.lz");
static const u8 sKoffingAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_9_6.lz");
static const u8 sKoffingAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_9_7.lz");
static const u8 sKoffingAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_9_8.lz");
static const u8 sKoffingAnims_10_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_10_1.lz");
static const u8 sKoffingAnims_10_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_10_2.lz");
static const u8 sKoffingAnims_10_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_10_3.lz");
static const u8 sKoffingAnims_10_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_10_4.lz");
static const u8 sKoffingAnims_10_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_10_5.lz");
static const u8 sKoffingAnims_10_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_10_6.lz");
static const u8 sKoffingAnims_10_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_10_7.lz");
static const u8 sKoffingAnims_10_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_10_8.lz");
static const u8 sKoffingAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_11_1.lz");
static const u8 sKoffingAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_11_2.lz");
static const u8 sKoffingAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_11_3.lz");
static const u8 sKoffingAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_11_4.lz");
static const u8 sKoffingAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_11_5.lz");
static const u8 sKoffingAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_11_6.lz");
static const u8 sKoffingAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_11_7.lz");
static const u8 sKoffingAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_11_8.lz");
static const u8 sKoffingAnims_12_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_12_1.lz");
static const u8 sKoffingAnims_12_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_12_2.lz");
static const u8 sKoffingAnims_12_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_12_3.lz");
static const u8 sKoffingAnims_12_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_12_4.lz");
static const u8 sKoffingAnims_12_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_12_5.lz");
static const u8 sKoffingAnims_12_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_12_6.lz");
static const u8 sKoffingAnims_12_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_12_7.lz");
static const u8 sKoffingAnims_12_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/koffing/sKoffingAnims_12_8.lz");

static const u8 sKoffingGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_1.4bpp.lz");
static const ax_sprite sKoffingSprites1[] = {
	{sKoffingGfx1, ARRAY_COUNT(sKoffingGfx1)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_2.4bpp.lz");
static const ax_sprite sKoffingSprites2[] = {
	{sKoffingGfx2, ARRAY_COUNT(sKoffingGfx2)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_3.4bpp.lz");
static const ax_sprite sKoffingSprites3[] = {
	{sKoffingGfx3, ARRAY_COUNT(sKoffingGfx3)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_4.4bpp.lz");
static const ax_sprite sKoffingSprites4[] = {
	{sKoffingGfx4, ARRAY_COUNT(sKoffingGfx4)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_5.4bpp.lz");
static const ax_sprite sKoffingSprites5[] = {
	{sKoffingGfx5, ARRAY_COUNT(sKoffingGfx5)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_6.4bpp.lz");
static const ax_sprite sKoffingSprites6[] = {
	{sKoffingGfx6, ARRAY_COUNT(sKoffingGfx6)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_7.4bpp.lz");
static const ax_sprite sKoffingSprites7[] = {
	{sKoffingGfx7, ARRAY_COUNT(sKoffingGfx7)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_8.4bpp.lz");
static const ax_sprite sKoffingSprites8[] = {
	{sKoffingGfx8, ARRAY_COUNT(sKoffingGfx8)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_9.4bpp.lz");
static const ax_sprite sKoffingSprites9[] = {
	{sKoffingGfx9, ARRAY_COUNT(sKoffingGfx9)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_10.4bpp.lz");
static const ax_sprite sKoffingSprites10[] = {
	{sKoffingGfx10, ARRAY_COUNT(sKoffingGfx10)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_11.4bpp.lz");
static const ax_sprite sKoffingSprites11[] = {
	{sKoffingGfx11, ARRAY_COUNT(sKoffingGfx11)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_12.4bpp.lz");
static const ax_sprite sKoffingSprites12[] = {
	{sKoffingGfx12, ARRAY_COUNT(sKoffingGfx12)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_13.4bpp.lz");
static const ax_sprite sKoffingSprites13[] = {
	{sKoffingGfx13, ARRAY_COUNT(sKoffingGfx13)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_14.4bpp.lz");
static const ax_sprite sKoffingSprites14[] = {
	{sKoffingGfx14, ARRAY_COUNT(sKoffingGfx14)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_15.4bpp.lz");
static const ax_sprite sKoffingSprites15[] = {
	{sKoffingGfx15, ARRAY_COUNT(sKoffingGfx15)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_16.4bpp.lz");
static const u8 sKoffingGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_16_1.4bpp.lz");
static const ax_sprite sKoffingSprites16[] = {
	{NULL, 128}, 
	{sKoffingGfx16, ARRAY_COUNT(sKoffingGfx16)}, 
	{NULL, 32}, 
	{sKoffingGfx16_1, ARRAY_COUNT(sKoffingGfx16_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKoffingGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_17.4bpp.lz");
static const u8 sKoffingGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_17_1.4bpp.lz");
static const ax_sprite sKoffingSprites17[] = {
	{NULL, 32}, 
	{sKoffingGfx17, ARRAY_COUNT(sKoffingGfx17)}, 
	{NULL, 32}, 
	{sKoffingGfx17_1, ARRAY_COUNT(sKoffingGfx17_1)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_18.4bpp.lz");
static const ax_sprite sKoffingSprites18[] = {
	{sKoffingGfx18, ARRAY_COUNT(sKoffingGfx18)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_19.4bpp.lz");
static const u8 sKoffingGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_19_1.4bpp.lz");
static const ax_sprite sKoffingSprites19[] = {
	{NULL, 160}, 
	{sKoffingGfx19, ARRAY_COUNT(sKoffingGfx19)}, 
	{NULL, 32}, 
	{sKoffingGfx19_1, ARRAY_COUNT(sKoffingGfx19_1)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_20.4bpp.lz");
static const ax_sprite sKoffingSprites20[] = {
	{sKoffingGfx20, ARRAY_COUNT(sKoffingGfx20)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_21.4bpp.lz");
static const ax_sprite sKoffingSprites21[] = {
	{sKoffingGfx21, ARRAY_COUNT(sKoffingGfx21)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_22.4bpp.lz");
static const ax_sprite sKoffingSprites22[] = {
	{sKoffingGfx22, ARRAY_COUNT(sKoffingGfx22)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_23.4bpp.lz");
static const ax_sprite sKoffingSprites23[] = {
	{sKoffingGfx23, ARRAY_COUNT(sKoffingGfx23)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_24.4bpp.lz");
static const ax_sprite sKoffingSprites24[] = {
	{sKoffingGfx24, ARRAY_COUNT(sKoffingGfx24)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_25.4bpp.lz");
static const ax_sprite sKoffingSprites25[] = {
	{sKoffingGfx25, ARRAY_COUNT(sKoffingGfx25)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_26.4bpp.lz");
static const u8 sKoffingGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_26_1.4bpp.lz");
static const u8 sKoffingGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_26_2.4bpp.lz");
static const ax_sprite sKoffingSprites26[] = {
	{NULL, 64}, 
	{sKoffingGfx26, ARRAY_COUNT(sKoffingGfx26)}, 
	{NULL, 32}, 
	{sKoffingGfx26_1, ARRAY_COUNT(sKoffingGfx26_1)}, 
	{NULL, 32}, 
	{sKoffingGfx26_2, ARRAY_COUNT(sKoffingGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKoffingGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_27.4bpp.lz");
static const u8 sKoffingGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_27_1.4bpp.lz");
static const ax_sprite sKoffingSprites27[] = {
	{NULL, 32}, 
	{sKoffingGfx27, ARRAY_COUNT(sKoffingGfx27)}, 
	{NULL, 32}, 
	{sKoffingGfx27_1, ARRAY_COUNT(sKoffingGfx27_1)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_28.4bpp.lz");
static const u8 sKoffingGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_28_1.4bpp.lz");
static const ax_sprite sKoffingSprites28[] = {
	{sKoffingGfx28, ARRAY_COUNT(sKoffingGfx28)}, 
	{NULL, 32}, 
	{sKoffingGfx28_1, ARRAY_COUNT(sKoffingGfx28_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKoffingGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_29.4bpp.lz");
static const u8 sKoffingGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_29_1.4bpp.lz");
static const ax_sprite sKoffingSprites29[] = {
	{NULL, 128}, 
	{sKoffingGfx29, ARRAY_COUNT(sKoffingGfx29)}, 
	{NULL, 32}, 
	{sKoffingGfx29_1, ARRAY_COUNT(sKoffingGfx29_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKoffingGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_30.4bpp.lz");
static const u8 sKoffingGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_30_1.4bpp.lz");
static const u8 sKoffingGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_30_2.4bpp.lz");
static const ax_sprite sKoffingSprites30[] = {
	{NULL, 64}, 
	{sKoffingGfx30, ARRAY_COUNT(sKoffingGfx30)}, 
	{NULL, 32}, 
	{sKoffingGfx30_1, ARRAY_COUNT(sKoffingGfx30_1)}, 
	{NULL, 32}, 
	{sKoffingGfx30_2, ARRAY_COUNT(sKoffingGfx30_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKoffingGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_31.4bpp.lz");
static const u8 sKoffingGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_31_1.4bpp.lz");
static const ax_sprite sKoffingSprites31[] = {
	{NULL, 32}, 
	{sKoffingGfx31, ARRAY_COUNT(sKoffingGfx31)}, 
	{NULL, 32}, 
	{sKoffingGfx31_1, ARRAY_COUNT(sKoffingGfx31_1)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_32.4bpp.lz");
static const u8 sKoffingGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_32_1.4bpp.lz");
static const ax_sprite sKoffingSprites32[] = {
	{sKoffingGfx32, ARRAY_COUNT(sKoffingGfx32)}, 
	{NULL, 32}, 
	{sKoffingGfx32_1, ARRAY_COUNT(sKoffingGfx32_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKoffingGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_33.4bpp.lz");
static const u8 sKoffingGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_33_1.4bpp.lz");
static const u8 sKoffingGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_33_2.4bpp.lz");
static const ax_sprite sKoffingSprites33[] = {
	{NULL, 128}, 
	{sKoffingGfx33, ARRAY_COUNT(sKoffingGfx33)}, 
	{NULL, 32}, 
	{sKoffingGfx33_1, ARRAY_COUNT(sKoffingGfx33_1)}, 
	{NULL, 32}, 
	{sKoffingGfx33_2, ARRAY_COUNT(sKoffingGfx33_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKoffingGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_34.4bpp.lz");
static const u8 sKoffingGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_34_1.4bpp.lz");
static const u8 sKoffingGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_34_2.4bpp.lz");
static const ax_sprite sKoffingSprites34[] = {
	{NULL, 32}, 
	{sKoffingGfx34, ARRAY_COUNT(sKoffingGfx34)}, 
	{NULL, 32}, 
	{sKoffingGfx34_1, ARRAY_COUNT(sKoffingGfx34_1)}, 
	{NULL, 32}, 
	{sKoffingGfx34_2, ARRAY_COUNT(sKoffingGfx34_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKoffingGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_35.4bpp.lz");
static const u8 sKoffingGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_35_1.4bpp.lz");
static const ax_sprite sKoffingSprites35[] = {
	{NULL, 32}, 
	{sKoffingGfx35, ARRAY_COUNT(sKoffingGfx35)}, 
	{NULL, 32}, 
	{sKoffingGfx35_1, ARRAY_COUNT(sKoffingGfx35_1)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_36.4bpp.lz");
static const u8 sKoffingGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_36_1.4bpp.lz");
static const ax_sprite sKoffingSprites36[] = {
	{NULL, 32}, 
	{sKoffingGfx36, ARRAY_COUNT(sKoffingGfx36)}, 
	{NULL, 32}, 
	{sKoffingGfx36_1, ARRAY_COUNT(sKoffingGfx36_1)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_37.4bpp.lz");
static const u8 sKoffingGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_37_1.4bpp.lz");
static const ax_sprite sKoffingSprites37[] = {
	{NULL, 128}, 
	{sKoffingGfx37, ARRAY_COUNT(sKoffingGfx37)}, 
	{NULL, 64}, 
	{sKoffingGfx37_1, ARRAY_COUNT(sKoffingGfx37_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKoffingGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_38.4bpp.lz");
static const u8 sKoffingGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_38_1.4bpp.lz");
static const u8 sKoffingGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_38_2.4bpp.lz");
static const ax_sprite sKoffingSprites38[] = {
	{NULL, 32}, 
	{sKoffingGfx38, ARRAY_COUNT(sKoffingGfx38)}, 
	{NULL, 32}, 
	{sKoffingGfx38_1, ARRAY_COUNT(sKoffingGfx38_1)}, 
	{NULL, 32}, 
	{sKoffingGfx38_2, ARRAY_COUNT(sKoffingGfx38_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKoffingGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_39.4bpp.lz");
static const u8 sKoffingGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_39_1.4bpp.lz");
static const ax_sprite sKoffingSprites39[] = {
	{NULL, 32}, 
	{sKoffingGfx39, ARRAY_COUNT(sKoffingGfx39)}, 
	{NULL, 32}, 
	{sKoffingGfx39_1, ARRAY_COUNT(sKoffingGfx39_1)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_40.4bpp.lz");
static const ax_sprite sKoffingSprites40[] = {
	{sKoffingGfx40, ARRAY_COUNT(sKoffingGfx40)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_41.4bpp.lz");
static const u8 sKoffingGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_41_1.4bpp.lz");
static const u8 sKoffingGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_41_2.4bpp.lz");
static const ax_sprite sKoffingSprites41[] = {
	{NULL, 128}, 
	{sKoffingGfx41, ARRAY_COUNT(sKoffingGfx41)}, 
	{NULL, 32}, 
	{sKoffingGfx41_1, ARRAY_COUNT(sKoffingGfx41_1)}, 
	{NULL, 32}, 
	{sKoffingGfx41_2, ARRAY_COUNT(sKoffingGfx41_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKoffingGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_42.4bpp.lz");
static const u8 sKoffingGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_42_1.4bpp.lz");
static const u8 sKoffingGfx42_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_42_2.4bpp.lz");
static const ax_sprite sKoffingSprites42[] = {
	{NULL, 160}, 
	{sKoffingGfx42, ARRAY_COUNT(sKoffingGfx42)}, 
	{NULL, 32}, 
	{sKoffingGfx42_1, ARRAY_COUNT(sKoffingGfx42_1)}, 
	{NULL, 64}, 
	{sKoffingGfx42_2, ARRAY_COUNT(sKoffingGfx42_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKoffingGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_43.4bpp.lz");
static const u8 sKoffingGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_43_1.4bpp.lz");
static const u8 sKoffingGfx43_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_43_2.4bpp.lz");
static const ax_sprite sKoffingSprites43[] = {
	{NULL, 128}, 
	{sKoffingGfx43, ARRAY_COUNT(sKoffingGfx43)}, 
	{NULL, 32}, 
	{sKoffingGfx43_1, ARRAY_COUNT(sKoffingGfx43_1)}, 
	{NULL, 64}, 
	{sKoffingGfx43_2, ARRAY_COUNT(sKoffingGfx43_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKoffingGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_44.4bpp.lz");
static const u8 sKoffingGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_44_1.4bpp.lz");
static const ax_sprite sKoffingSprites44[] = {
	{NULL, 128}, 
	{sKoffingGfx44, ARRAY_COUNT(sKoffingGfx44)}, 
	{NULL, 32}, 
	{sKoffingGfx44_1, ARRAY_COUNT(sKoffingGfx44_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKoffingGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_45.4bpp.lz");
static const u8 sKoffingGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_45_1.4bpp.lz");
static const ax_sprite sKoffingSprites45[] = {
	{NULL, 128}, 
	{sKoffingGfx45, ARRAY_COUNT(sKoffingGfx45)}, 
	{NULL, 64}, 
	{sKoffingGfx45_1, ARRAY_COUNT(sKoffingGfx45_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKoffingGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_46.4bpp.lz");
static const u8 sKoffingGfx46_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_46_1.4bpp.lz");
static const u8 sKoffingGfx46_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_46_2.4bpp.lz");
static const u8 sKoffingGfx46_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_46_3.4bpp.lz");
static const ax_sprite sKoffingSprites46[] = {
	{NULL, 32}, 
	{sKoffingGfx46, ARRAY_COUNT(sKoffingGfx46)}, 
	{NULL, 32}, 
	{sKoffingGfx46_1, ARRAY_COUNT(sKoffingGfx46_1)}, 
	{NULL, 32}, 
	{sKoffingGfx46_2, ARRAY_COUNT(sKoffingGfx46_2)}, 
	{NULL, 32}, 
	{sKoffingGfx46_3, ARRAY_COUNT(sKoffingGfx46_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKoffingGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_47.4bpp.lz");
static const ax_sprite sKoffingSprites47[] = {
	{sKoffingGfx47, ARRAY_COUNT(sKoffingGfx47)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_48.4bpp.lz");
static const ax_sprite sKoffingSprites48[] = {
	{sKoffingGfx48, ARRAY_COUNT(sKoffingGfx48)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_49.4bpp.lz");
static const ax_sprite sKoffingSprites49[] = {
	{sKoffingGfx49, ARRAY_COUNT(sKoffingGfx49)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_50.4bpp.lz");
static const ax_sprite sKoffingSprites50[] = {
	{sKoffingGfx50, ARRAY_COUNT(sKoffingGfx50)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_51.4bpp.lz");
static const ax_sprite sKoffingSprites51[] = {
	{sKoffingGfx51, ARRAY_COUNT(sKoffingGfx51)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_52.4bpp.lz");
static const ax_sprite sKoffingSprites52[] = {
	{sKoffingGfx52, ARRAY_COUNT(sKoffingGfx52)}, 
	{NULL, 0}
};
static const u8 sKoffingGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/koffing/sprite_53.4bpp.lz");
static const ax_sprite sKoffingSprites53[] = {
	{sKoffingGfx53, ARRAY_COUNT(sKoffingGfx53)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesKoffing[] = {
	sKoffingPose1,
	sKoffingPose2,
	sKoffingPose3,
	sKoffingPose4,
	sKoffingPose5,
	sKoffingPose6,
	sKoffingPose7,
	sKoffingPose8,
	sKoffingPose9,
	sKoffingPose10,
	sKoffingPose11,
	sKoffingPose12,
	sKoffingPose13,
	sKoffingPose14,
	sKoffingPose15,
	sKoffingPose16,
	sKoffingPose17,
	sKoffingPose18,
	sKoffingPose19,
	sKoffingPose20,
	sKoffingPose21,
	sKoffingPose22,
	sKoffingPose23,
	sKoffingPose24,
	sKoffingPose1,
	sKoffingPose26,
	sKoffingPose27,
	sKoffingPose28,
	sKoffingPose29,
	sKoffingPose30,
	sKoffingPose31,
	sKoffingPose32,
	sKoffingPose33,
	sKoffingPose34,
	sKoffingPose35,
	sKoffingPose4,
	sKoffingPose37,
	sKoffingPose38,
	sKoffingPose39,
	sKoffingPose40,
	sKoffingPose41,
	sKoffingPose42,
	sKoffingPose43,
	sKoffingPose44,
	sKoffingPose45,
	sKoffingPose46,
	sKoffingPose7,
	sKoffingPose48,
	sKoffingPose49,
	sKoffingPose50,
	sKoffingPose51,
	sKoffingPose52,
	sKoffingPose53,
	sKoffingPose54,
	sKoffingPose55,
	sKoffingPose56,
	sKoffingPose57,
	sKoffingPose10,
	sKoffingPose59,
	sKoffingPose60,
	sKoffingPose61,
	sKoffingPose62,
	sKoffingPose63,
	sKoffingPose64,
	sKoffingPose65,
	sKoffingPose66,
	sKoffingPose67,
	sKoffingPose68,
	sKoffingPose13,
	sKoffingPose70,
	sKoffingPose71,
	sKoffingPose72,
	sKoffingPose73,
	sKoffingPose74,
	sKoffingPose75,
	sKoffingPose76,
	sKoffingPose77,
	sKoffingPose78,
	sKoffingPose79,
	sKoffingPose80,
	sKoffingPose81,
	sKoffingPose82,
	sKoffingPose83,
	sKoffingPose84,
	sKoffingPose85,
	sKoffingPose86,
	sKoffingPose87,
	sKoffingPose88,
	sKoffingPose89,
	sKoffingPose90,
	sKoffingPose91,
	sKoffingPose92,
	sKoffingPose93,
	sKoffingPose94,
	sKoffingPose95,
	sKoffingPose96,
	sKoffingPose97,
	sKoffingPose98,
	sKoffingPose99,
	sKoffingPose100,
	sKoffingPose101,
	sKoffingPose102,
	sKoffingPose103,
	sKoffingPose104,
	sKoffingPose105,
	sKoffingPose106,
	sKoffingPose107,
	sKoffingPose108,
	sKoffingPose109,
	sKoffingPose110,
	sKoffingPose111,
	sKoffingPose112,
	sKoffingPose1,
	sKoffingPose26,
	sKoffingPose27,
	sKoffingPose28,
	sKoffingPose117,
	sKoffingPose118,
	sKoffingPose119,
	sKoffingPose120,
	sKoffingPose121,
	sKoffingPose122,
	sKoffingPose35,
	sKoffingPose4,
	sKoffingPose37,
	sKoffingPose38,
	sKoffingPose39,
	sKoffingPose128,
	sKoffingPose129,
	sKoffingPose130,
	sKoffingPose131,
	sKoffingPose132,
	sKoffingPose133,
	sKoffingPose46,
	sKoffingPose7,
	sKoffingPose48,
	sKoffingPose49,
	sKoffingPose50,
	sKoffingPose139,
	sKoffingPose140,
	sKoffingPose141,
	sKoffingPose142,
	sKoffingPose143,
	sKoffingPose144,
	sKoffingPose57,
	sKoffingPose10,
	sKoffingPose59,
	sKoffingPose60,
	sKoffingPose61,
	sKoffingPose150,
	sKoffingPose151,
	sKoffingPose152,
	sKoffingPose153,
	sKoffingPose154,
	sKoffingPose155,
	sKoffingPose68,
	sKoffingPose13,
	sKoffingPose70,
	sKoffingPose71,
	sKoffingPose72,
	sKoffingPose161,
	sKoffingPose162,
	sKoffingPose163,
	sKoffingPose164,
	sKoffingPose165,
	sKoffingPose166,
	sKoffingPose79,
	sKoffingPose80,
	sKoffingPose81,
	sKoffingPose82,
	sKoffingPose83,
	sKoffingPose172,
	sKoffingPose173,
	sKoffingPose174,
	sKoffingPose175,
	sKoffingPose176,
	sKoffingPose177,
	sKoffingPose90,
	sKoffingPose91,
	sKoffingPose92,
	sKoffingPose93,
	sKoffingPose94,
	sKoffingPose183,
	sKoffingPose184,
	sKoffingPose185,
	sKoffingPose186,
	sKoffingPose187,
	sKoffingPose188,
	sKoffingPose101,
	sKoffingPose102,
	sKoffingPose103,
	sKoffingPose104,
	sKoffingPose105,
	sKoffingPose194,
	sKoffingPose195,
	sKoffingPose196,
	sKoffingPose197,
	sKoffingPose198,
	sKoffingPose199,
	sKoffingPose112,
	sKoffingPose1,
	sKoffingPose26,
	sKoffingPose27,
	sKoffingPose204,
	sKoffingPose4,
	sKoffingPose37,
	sKoffingPose38,
	sKoffingPose208,
	sKoffingPose7,
	sKoffingPose48,
	sKoffingPose49,
	sKoffingPose212,
	sKoffingPose10,
	sKoffingPose59,
	sKoffingPose60,
	sKoffingPose216,
	sKoffingPose13,
	sKoffingPose70,
	sKoffingPose71,
	sKoffingPose220,
	sKoffingPose16,
	sKoffingPose222,
	sKoffingPose223,
	sKoffingPose224,
	sKoffingPose19,
	sKoffingPose226,
	sKoffingPose227,
	sKoffingPose228,
	sKoffingPose22,
	sKoffingPose230,
	sKoffingPose231,
	sKoffingPose232,
	sKoffingPose1,
	sKoffingPose22,
	sKoffingPose19,
	sKoffingPose16,
	sKoffingPose13,
	sKoffingPose10,
	sKoffingPose7,
	sKoffingPose4,
	sKoffingPose241,
	sKoffingPose242,
	sKoffingPose243,
	sKoffingPose244,
	sKoffingPose245,
	sKoffingPose246,
	sKoffingPose247,
	sKoffingPose248,
	sKoffingPose249,
	sKoffingPose250,
	sKoffingPose1,
	sKoffingPose2,
	sKoffingPose3,
	sKoffingPose4,
	sKoffingPose5,
	sKoffingPose6,
	sKoffingPose7,
	sKoffingPose8,
	sKoffingPose9,
	sKoffingPose10,
	sKoffingPose11,
	sKoffingPose12,
	sKoffingPose13,
	sKoffingPose14,
	sKoffingPose15,
	sKoffingPose16,
	sKoffingPose17,
	sKoffingPose18,
	sKoffingPose19,
	sKoffingPose20,
	sKoffingPose21,
	sKoffingPose22,
	sKoffingPose23,
	sKoffingPose24,
	sKoffingPose1,
	sKoffingPose22,
	sKoffingPose19,
	sKoffingPose16,
	sKoffingPose13,
	sKoffingPose10,
	sKoffingPose7,
	sKoffingPose4,
	sKoffingPose26,
	sKoffingPose284,
	sKoffingPose285,
	sKoffingPose286,
	sKoffingPose287,
	sKoffingPose288,
	sKoffingPose289,
	sKoffingPose290,
	sKoffingPose1,
	sKoffingPose2,
	sKoffingPose3,
	sKoffingPose4,
	sKoffingPose5,
	sKoffingPose6,
	sKoffingPose7,
	sKoffingPose8,
	sKoffingPose9,
	sKoffingPose10,
	sKoffingPose11,
	sKoffingPose12,
	sKoffingPose13,
	sKoffingPose14,
	sKoffingPose15,
	sKoffingPose16,
	sKoffingPose17,
	sKoffingPose18,
	sKoffingPose19,
	sKoffingPose20,
	sKoffingPose21,
	sKoffingPose22,
	sKoffingPose23,
	sKoffingPose24,
	sKoffingPose1,
	sKoffingPose2,
	sKoffingPose3,
	sKoffingPose4,
	sKoffingPose5,
	sKoffingPose6,
	sKoffingPose7,
	sKoffingPose8,
	sKoffingPose9,
	sKoffingPose10,
	sKoffingPose11,
	sKoffingPose12,
	sKoffingPose13,
	sKoffingPose14,
	sKoffingPose15,
	sKoffingPose16,
	sKoffingPose17,
	sKoffingPose18,
	sKoffingPose19,
	sKoffingPose20,
	sKoffingPose21,
	sKoffingPose22,
	sKoffingPose23,
	sKoffingPose24,
	sKoffingPose1,
	sKoffingPose22,
	sKoffingPose19,
	sKoffingPose16,
	sKoffingPose13,
	sKoffingPose10,
	sKoffingPose7,
	sKoffingPose4,
};

static const struct PositionSets sAxPositionsKoffing[] = {
	[0] = { .set = { {-1, -9}, {-8, -12}, {6, -13}, {-1, -12} } },
	[1] = { .set = { {-1, -9}, {-8, -12}, {5, -12}, {-1, -12} } },
	[2] = { .set = { {-1, -9}, {-8, -12}, {5, -12}, {-1, -12} } },
	[3] = { .set = { {2, -9}, {4, -16}, {-5, -9}, {-1, -12} } },
	[4] = { .set = { {2, -9}, {4, -16}, {-5, -9}, {-1, -12} } },
	[5] = { .set = { {2, -9}, {4, -16}, {-5, -9}, {-1, -12} } },
	[6] = { .set = { {5, -11}, {2, -17}, {0, -10}, {-1, -12} } },
	[7] = { .set = { {5, -11}, {2, -17}, {0, -10}, {-1, -12} } },
	[8] = { .set = { {5, -11}, {2, -18}, {1, -10}, {-1, -12} } },
	[9] = { .set = { {2, -13}, {-4, -17}, {5, -13}, {-2, -13} } },
	[10] = { .set = { {3, -12}, {-4, -18}, {5, -13}, {-1, -12} } },
	[11] = { .set = { {3, -10}, {-3, -18}, {5, -13}, {-1, -13} } },
	[12] = { .set = { {-1, -11}, {5, -14}, {-7, -14}, {-1, -12} } },
	[13] = { .set = { {-1, -12}, {5, -14}, {-7, -14}, {-1, -13} } },
	[14] = { .set = { {-1, -11}, {5, -15}, {-7, -15}, {-1, -12} } },
	[15] = { .set = { {-4, -13}, {2, -17}, {-7, -13}, {0, -13} } },
	[16] = { .set = { {-5, -12}, {2, -18}, {-7, -13}, {-1, -12} } },
	[17] = { .set = { {-5, -10}, {1, -18}, {-7, -13}, {-1, -13} } },
	[18] = { .set = { {-7, -11}, {-4, -17}, {-2, -10}, {-1, -12} } },
	[19] = { .set = { {-7, -11}, {-4, -17}, {-2, -10}, {-1, -12} } },
	[20] = { .set = { {-7, -11}, {-4, -18}, {-3, -10}, {-1, -12} } },
	[21] = { .set = { {-4, -9}, {-6, -16}, {3, -9}, {-1, -12} } },
	[22] = { .set = { {-4, -9}, {-6, -16}, {3, -9}, {-1, -12} } },
	[23] = { .set = { {-4, -9}, {-6, -16}, {3, -9}, {-1, -12} } },
	[24] = { .set = { {-1, -9}, {-8, -12}, {6, -13}, {-1, -12} } },
	[25] = { .set = { {0, -15}, {-8, -14}, {8, -14}, {0, -13} } },
	[26] = { .set = { {0, -17}, {-9, -17}, {10, -16}, {0, -14} } },
	[27] = { .set = { {-1, -6}, {-7, -10}, {5, -10}, {-1, -10} } },
	[28] = { .set = { {-1, -6}, {-7, -10}, {5, -10}, {-1, -10} } },
	[29] = { .set = { {-1, -6}, {-7, -10}, {5, -10}, {-1, -10} } },
	[30] = { .set = { {-1, -6}, {-7, -10}, {5, -10}, {-1, -10} } },
	[31] = { .set = { {-1, -6}, {-7, -10}, {5, -10}, {-1, -10} } },
	[32] = { .set = { {-1, -6}, {-7, -10}, {5, -10}, {-1, -10} } },
	[33] = { .set = { {-1, -6}, {-7, -10}, {5, -10}, {-1, -10} } },
	[34] = { .set = { {-1, -6}, {-7, -10}, {5, -10}, {-1, -10} } },
	[35] = { .set = { {2, -9}, {4, -16}, {-5, -9}, {-1, -12} } },
	[36] = { .set = { {2, -16}, {4, -17}, {-7, -13}, {-1, -12} } },
	[37] = { .set = { {4, -17}, {5, -18}, {-8, -14}, {-2, -12} } },
	[38] = { .set = { {3, -7}, {5, -12}, {-3, -8}, {-1, -11} } },
	[39] = { .set = { {3, -7}, {5, -12}, {-3, -8}, {-1, -11} } },
	[40] = { .set = { {3, -7}, {5, -12}, {-3, -8}, {-1, -11} } },
	[41] = { .set = { {3, -7}, {5, -12}, {-3, -8}, {-1, -11} } },
	[42] = { .set = { {3, -7}, {5, -12}, {-3, -8}, {-1, -11} } },
	[43] = { .set = { {3, -7}, {5, -12}, {-3, -8}, {-1, -11} } },
	[44] = { .set = { {3, -7}, {5, -12}, {-3, -8}, {-1, -11} } },
	[45] = { .set = { {3, -7}, {5, -12}, {-3, -8}, {-1, -11} } },
	[46] = { .set = { {5, -11}, {2, -17}, {0, -10}, {-1, -12} } },
	[47] = { .set = { {5, -17}, {0, -19}, {1, -15}, {-2, -12} } },
	[48] = { .set = { {6, -18}, {0, -20}, {1, -15}, {-1, -12} } },
	[49] = { .set = { {6, -9}, {4, -14}, {3, -11}, {0, -13} } },
	[50] = { .set = { {6, -9}, {4, -14}, {3, -11}, {0, -13} } },
	[51] = { .set = { {6, -9}, {4, -14}, {3, -11}, {0, -13} } },
	[52] = { .set = { {6, -9}, {4, -14}, {3, -11}, {0, -13} } },
	[53] = { .set = { {6, -9}, {4, -14}, {3, -11}, {0, -13} } },
	[54] = { .set = { {6, -9}, {4, -14}, {3, -11}, {0, -13} } },
	[55] = { .set = { {6, -9}, {4, -14}, {3, -11}, {0, -13} } },
	[56] = { .set = { {6, -9}, {4, -14}, {3, -11}, {0, -13} } },
	[57] = { .set = { {2, -13}, {-4, -17}, {5, -13}, {-2, -13} } },
	[58] = { .set = { {2, -18}, {-5, -20}, {5, -16}, {-2, -13} } },
	[59] = { .set = { {3, -19}, {-5, -21}, {6, -16}, {-2, -12} } },
	[60] = { .set = { {1, -11}, {-4, -17}, {2, -13}, {-2, -12} } },
	[61] = { .set = { {1, -11}, {-4, -17}, {2, -13}, {-2, -12} } },
	[62] = { .set = { {1, -11}, {-4, -17}, {2, -13}, {-2, -12} } },
	[63] = { .set = { {1, -11}, {-4, -17}, {2, -13}, {-2, -12} } },
	[64] = { .set = { {1, -11}, {-4, -17}, {2, -13}, {-2, -12} } },
	[65] = { .set = { {1, -11}, {-4, -17}, {2, -13}, {-2, -12} } },
	[66] = { .set = { {1, -11}, {-4, -17}, {2, -13}, {-2, -12} } },
	[67] = { .set = { {1, -11}, {-4, -17}, {2, -13}, {-2, -12} } },
	[68] = { .set = { {-1, -11}, {5, -14}, {-7, -14}, {-1, -12} } },
	[69] = { .set = { {-1, -20}, {8, -15}, {-9, -15}, {0, -14} } },
	[70] = { .set = { {0, -21}, {10, -15}, {-10, -15}, {0, -13} } },
	[71] = { .set = { {-1, -13}, {5, -13}, {-7, -13}, {-2, -13} } },
	[72] = { .set = { {-1, -13}, {5, -13}, {-7, -13}, {-2, -13} } },
	[73] = { .set = { {-1, -13}, {5, -13}, {-7, -13}, {-2, -13} } },
	[74] = { .set = { {-1, -13}, {5, -13}, {-7, -13}, {-2, -13} } },
	[75] = { .set = { {-1, -13}, {5, -13}, {-7, -13}, {-2, -13} } },
	[76] = { .set = { {-1, -13}, {5, -13}, {-7, -13}, {-2, -13} } },
	[77] = { .set = { {-1, -13}, {5, -13}, {-7, -13}, {-2, -13} } },
	[78] = { .set = { {-1, -13}, {5, -13}, {-7, -13}, {-2, -13} } },
	[79] = { .set = { {-3, -13}, {3, -17}, {-6, -13}, {1, -13} } },
	[80] = { .set = { {-3, -18}, {4, -20}, {-6, -16}, {1, -13} } },
	[81] = { .set = { {-4, -19}, {4, -21}, {-7, -16}, {1, -12} } },
	[82] = { .set = { {-2, -11}, {3, -17}, {-3, -13}, {1, -12} } },
	[83] = { .set = { {-2, -11}, {3, -17}, {-3, -13}, {1, -12} } },
	[84] = { .set = { {-2, -11}, {3, -17}, {-3, -13}, {1, -12} } },
	[85] = { .set = { {-2, -11}, {3, -17}, {-3, -13}, {1, -12} } },
	[86] = { .set = { {-2, -11}, {3, -17}, {-3, -13}, {1, -12} } },
	[87] = { .set = { {-2, -11}, {3, -17}, {-3, -13}, {1, -12} } },
	[88] = { .set = { {-2, -11}, {3, -17}, {-3, -13}, {1, -12} } },
	[89] = { .set = { {-2, -11}, {3, -17}, {-3, -13}, {1, -12} } },
	[90] = { .set = { {-6, -11}, {-3, -17}, {-1, -10}, {0, -12} } },
	[91] = { .set = { {-6, -17}, {-1, -19}, {-2, -15}, {1, -12} } },
	[92] = { .set = { {-7, -18}, {-1, -20}, {-2, -15}, {0, -12} } },
	[93] = { .set = { {-7, -9}, {-5, -14}, {-4, -11}, {-1, -13} } },
	[94] = { .set = { {-7, -9}, {-5, -14}, {-4, -11}, {-1, -13} } },
	[95] = { .set = { {-7, -9}, {-5, -14}, {-4, -11}, {-1, -13} } },
	[96] = { .set = { {-7, -9}, {-5, -14}, {-4, -11}, {-1, -13} } },
	[97] = { .set = { {-7, -9}, {-5, -14}, {-4, -11}, {-1, -13} } },
	[98] = { .set = { {-7, -9}, {-5, -14}, {-4, -11}, {-1, -13} } },
	[99] = { .set = { {-7, -9}, {-5, -14}, {-4, -11}, {-1, -13} } },
	[100] = { .set = { {-7, -9}, {-5, -14}, {-4, -11}, {-1, -13} } },
	[101] = { .set = { {-3, -9}, {-5, -16}, {4, -9}, {0, -12} } },
	[102] = { .set = { {-3, -16}, {-5, -17}, {6, -13}, {0, -12} } },
	[103] = { .set = { {-5, -17}, {-6, -18}, {7, -14}, {1, -12} } },
	[104] = { .set = { {-4, -7}, {-6, -12}, {2, -8}, {0, -11} } },
	[105] = { .set = { {-4, -7}, {-6, -12}, {2, -8}, {0, -11} } },
	[106] = { .set = { {-4, -7}, {-6, -12}, {2, -8}, {0, -11} } },
	[107] = { .set = { {-4, -7}, {-6, -12}, {2, -8}, {0, -11} } },
	[108] = { .set = { {-4, -7}, {-6, -12}, {2, -8}, {0, -11} } },
	[109] = { .set = { {-4, -7}, {-6, -12}, {2, -8}, {0, -11} } },
	[110] = { .set = { {-4, -7}, {-6, -12}, {2, -8}, {0, -11} } },
	[111] = { .set = { {-4, -7}, {-6, -12}, {2, -8}, {0, -11} } },
	[112] = { .set = { {-1, -9}, {-8, -12}, {6, -13}, {-1, -12} } },
	[113] = { .set = { {0, -15}, {-8, -14}, {8, -14}, {0, -13} } },
	[114] = { .set = { {0, -17}, {-9, -17}, {10, -16}, {0, -14} } },
	[115] = { .set = { {-1, -6}, {-7, -10}, {5, -10}, {-1, -10} } },
	[116] = { .set = { {-1, -6}, {-7, -10}, {5, -10}, {-1, -10} } },
	[117] = { .set = { {-1, -6}, {-7, -10}, {5, -10}, {-1, -10} } },
	[118] = { .set = { {-1, -6}, {-7, -10}, {5, -10}, {-1, -10} } },
	[119] = { .set = { {-1, -6}, {-7, -10}, {5, -10}, {-1, -10} } },
	[120] = { .set = { {-1, -6}, {-7, -10}, {5, -10}, {-1, -10} } },
	[121] = { .set = { {-1, -6}, {-7, -10}, {5, -10}, {-1, -10} } },
	[122] = { .set = { {-1, -6}, {-7, -10}, {5, -10}, {-1, -10} } },
	[123] = { .set = { {2, -9}, {4, -16}, {-5, -9}, {-1, -12} } },
	[124] = { .set = { {2, -16}, {4, -17}, {-7, -13}, {-1, -12} } },
	[125] = { .set = { {4, -17}, {5, -18}, {-8, -14}, {-2, -12} } },
	[126] = { .set = { {3, -7}, {5, -12}, {-3, -8}, {-1, -11} } },
	[127] = { .set = { {3, -7}, {5, -12}, {-3, -8}, {-1, -11} } },
	[128] = { .set = { {3, -7}, {5, -12}, {-3, -8}, {-1, -11} } },
	[129] = { .set = { {3, -7}, {5, -12}, {-3, -8}, {-1, -11} } },
	[130] = { .set = { {3, -7}, {5, -12}, {-3, -8}, {-1, -11} } },
	[131] = { .set = { {3, -7}, {5, -12}, {-3, -8}, {-1, -11} } },
	[132] = { .set = { {3, -7}, {5, -12}, {-3, -8}, {-1, -11} } },
	[133] = { .set = { {3, -7}, {5, -12}, {-3, -8}, {-1, -11} } },
	[134] = { .set = { {5, -11}, {2, -17}, {0, -10}, {-1, -12} } },
	[135] = { .set = { {5, -17}, {0, -19}, {1, -15}, {-2, -12} } },
	[136] = { .set = { {6, -18}, {0, -20}, {1, -15}, {-1, -12} } },
	[137] = { .set = { {6, -9}, {4, -14}, {3, -11}, {0, -13} } },
	[138] = { .set = { {6, -9}, {4, -14}, {3, -11}, {0, -13} } },
	[139] = { .set = { {6, -9}, {4, -14}, {3, -11}, {0, -13} } },
	[140] = { .set = { {6, -9}, {4, -14}, {3, -11}, {0, -13} } },
	[141] = { .set = { {6, -9}, {4, -14}, {3, -11}, {0, -13} } },
	[142] = { .set = { {6, -9}, {4, -14}, {3, -11}, {0, -13} } },
	[143] = { .set = { {6, -9}, {4, -14}, {3, -11}, {0, -13} } },
	[144] = { .set = { {6, -9}, {4, -14}, {3, -11}, {0, -13} } },
	[145] = { .set = { {2, -13}, {-4, -17}, {5, -13}, {-2, -13} } },
	[146] = { .set = { {2, -18}, {-5, -20}, {5, -16}, {-2, -13} } },
	[147] = { .set = { {3, -19}, {-5, -21}, {6, -16}, {-2, -12} } },
	[148] = { .set = { {1, -11}, {-4, -17}, {2, -13}, {-2, -12} } },
	[149] = { .set = { {1, -11}, {-4, -17}, {2, -13}, {-2, -12} } },
	[150] = { .set = { {1, -11}, {-4, -17}, {2, -13}, {-2, -12} } },
	[151] = { .set = { {1, -11}, {-4, -17}, {2, -13}, {-2, -12} } },
	[152] = { .set = { {1, -11}, {-4, -17}, {2, -13}, {-2, -12} } },
	[153] = { .set = { {1, -11}, {-4, -17}, {2, -13}, {-2, -12} } },
	[154] = { .set = { {1, -11}, {-4, -17}, {2, -13}, {-2, -12} } },
	[155] = { .set = { {1, -11}, {-4, -17}, {2, -13}, {-2, -12} } },
	[156] = { .set = { {-1, -11}, {5, -14}, {-7, -14}, {-1, -12} } },
	[157] = { .set = { {-1, -20}, {8, -15}, {-9, -15}, {0, -14} } },
	[158] = { .set = { {0, -21}, {10, -15}, {-10, -15}, {0, -13} } },
	[159] = { .set = { {-1, -13}, {5, -13}, {-7, -13}, {-2, -13} } },
	[160] = { .set = { {-1, -13}, {5, -13}, {-7, -13}, {-2, -13} } },
	[161] = { .set = { {-1, -13}, {5, -13}, {-7, -13}, {-2, -13} } },
	[162] = { .set = { {-1, -13}, {5, -13}, {-7, -13}, {-2, -13} } },
	[163] = { .set = { {-1, -13}, {5, -13}, {-7, -13}, {-2, -13} } },
	[164] = { .set = { {-1, -13}, {5, -13}, {-7, -13}, {-2, -13} } },
	[165] = { .set = { {-1, -13}, {5, -13}, {-7, -13}, {-2, -13} } },
	[166] = { .set = { {-1, -13}, {5, -13}, {-7, -13}, {-2, -13} } },
	[167] = { .set = { {-3, -13}, {3, -17}, {-6, -13}, {1, -13} } },
	[168] = { .set = { {-3, -18}, {4, -20}, {-6, -16}, {1, -13} } },
	[169] = { .set = { {-4, -19}, {4, -21}, {-7, -16}, {1, -12} } },
	[170] = { .set = { {-2, -11}, {3, -17}, {-3, -13}, {1, -12} } },
	[171] = { .set = { {-2, -11}, {3, -17}, {-3, -13}, {1, -12} } },
	[172] = { .set = { {-2, -11}, {3, -17}, {-3, -13}, {1, -12} } },
	[173] = { .set = { {-2, -11}, {3, -17}, {-3, -13}, {1, -12} } },
	[174] = { .set = { {-2, -11}, {3, -17}, {-3, -13}, {1, -12} } },
	[175] = { .set = { {-2, -11}, {3, -17}, {-3, -13}, {1, -12} } },
	[176] = { .set = { {-2, -11}, {3, -17}, {-3, -13}, {1, -12} } },
	[177] = { .set = { {-2, -11}, {3, -17}, {-3, -13}, {1, -12} } },
	[178] = { .set = { {-6, -11}, {-3, -17}, {-1, -10}, {0, -12} } },
	[179] = { .set = { {-6, -17}, {-1, -19}, {-2, -15}, {1, -12} } },
	[180] = { .set = { {-7, -18}, {-1, -20}, {-2, -15}, {0, -12} } },
	[181] = { .set = { {-7, -9}, {-5, -14}, {-4, -11}, {-1, -13} } },
	[182] = { .set = { {-7, -9}, {-5, -14}, {-4, -11}, {-1, -13} } },
	[183] = { .set = { {-7, -9}, {-5, -14}, {-4, -11}, {-1, -13} } },
	[184] = { .set = { {-7, -9}, {-5, -14}, {-4, -11}, {-1, -13} } },
	[185] = { .set = { {-7, -9}, {-5, -14}, {-4, -11}, {-1, -13} } },
	[186] = { .set = { {-7, -9}, {-5, -14}, {-4, -11}, {-1, -13} } },
	[187] = { .set = { {-7, -9}, {-5, -14}, {-4, -11}, {-1, -13} } },
	[188] = { .set = { {-7, -9}, {-5, -14}, {-4, -11}, {-1, -13} } },
	[189] = { .set = { {-3, -9}, {-5, -16}, {4, -9}, {0, -12} } },
	[190] = { .set = { {-3, -16}, {-5, -17}, {6, -13}, {0, -12} } },
	[191] = { .set = { {-5, -17}, {-6, -18}, {7, -14}, {1, -12} } },
	[192] = { .set = { {-4, -7}, {-6, -12}, {2, -8}, {0, -11} } },
	[193] = { .set = { {-4, -7}, {-6, -12}, {2, -8}, {0, -11} } },
	[194] = { .set = { {-4, -7}, {-6, -12}, {2, -8}, {0, -11} } },
	[195] = { .set = { {-4, -7}, {-6, -12}, {2, -8}, {0, -11} } },
	[196] = { .set = { {-4, -7}, {-6, -12}, {2, -8}, {0, -11} } },
	[197] = { .set = { {-4, -7}, {-6, -12}, {2, -8}, {0, -11} } },
	[198] = { .set = { {-4, -7}, {-6, -12}, {2, -8}, {0, -11} } },
	[199] = { .set = { {-4, -7}, {-6, -12}, {2, -8}, {0, -11} } },
	[200] = { .set = { {-1, -9}, {-8, -12}, {6, -13}, {-1, -12} } },
	[201] = { .set = { {0, -15}, {-8, -14}, {8, -14}, {0, -13} } },
	[202] = { .set = { {0, -17}, {-9, -17}, {10, -16}, {0, -14} } },
	[203] = { .set = { {-1, -7}, {-7, -11}, {5, -11}, {-1, -11} } },
	[204] = { .set = { {2, -9}, {4, -16}, {-5, -9}, {-1, -12} } },
	[205] = { .set = { {2, -16}, {4, -17}, {-7, -13}, {-1, -12} } },
	[206] = { .set = { {4, -17}, {5, -18}, {-8, -14}, {-2, -12} } },
	[207] = { .set = { {4, -8}, {5, -13}, {-3, -8}, {-1, -12} } },
	[208] = { .set = { {5, -11}, {2, -17}, {0, -10}, {-1, -12} } },
	[209] = { .set = { {5, -17}, {0, -19}, {1, -15}, {-2, -12} } },
	[210] = { .set = { {6, -18}, {0, -20}, {1, -15}, {-1, -12} } },
	[211] = { .set = { {5, -9}, {4, -15}, {3, -11}, {-1, -12} } },
	[212] = { .set = { {2, -13}, {-4, -17}, {5, -13}, {-2, -13} } },
	[213] = { .set = { {2, -18}, {-5, -20}, {5, -16}, {-2, -13} } },
	[214] = { .set = { {3, -19}, {-5, -21}, {6, -16}, {-2, -12} } },
	[215] = { .set = { {3, -10}, {-2, -18}, {4, -14}, {-1, -13} } },
	[216] = { .set = { {-1, -11}, {5, -14}, {-7, -14}, {-1, -12} } },
	[217] = { .set = { {-1, -20}, {8, -15}, {-9, -15}, {0, -14} } },
	[218] = { .set = { {0, -21}, {10, -15}, {-10, -15}, {0, -13} } },
	[219] = { .set = { {-1, -11}, {6, -14}, {-7, -14}, {-1, -13} } },
	[220] = { .set = { {-4, -13}, {2, -17}, {-7, -13}, {0, -13} } },
	[221] = { .set = { {-4, -18}, {3, -20}, {-7, -16}, {0, -13} } },
	[222] = { .set = { {-5, -19}, {3, -21}, {-8, -16}, {0, -12} } },
	[223] = { .set = { {-5, -10}, {0, -18}, {-6, -14}, {-1, -13} } },
	[224] = { .set = { {-7, -11}, {-4, -17}, {-2, -10}, {-1, -12} } },
	[225] = { .set = { {-7, -17}, {-2, -19}, {-3, -15}, {0, -12} } },
	[226] = { .set = { {-8, -18}, {-2, -20}, {-3, -15}, {-1, -12} } },
	[227] = { .set = { {-7, -9}, {-6, -15}, {-5, -11}, {-1, -12} } },
	[228] = { .set = { {-4, -9}, {-6, -16}, {3, -9}, {-1, -12} } },
	[229] = { .set = { {-4, -16}, {-6, -17}, {5, -13}, {-1, -12} } },
	[230] = { .set = { {-6, -17}, {-7, -18}, {6, -14}, {0, -12} } },
	[231] = { .set = { {-6, -8}, {-7, -13}, {1, -8}, {-1, -12} } },
	[232] = { .set = { {-1, -9}, {-8, -12}, {6, -13}, {-1, -12} } },
	[233] = { .set = { {-4, -9}, {-6, -16}, {3, -9}, {-1, -12} } },
	[234] = { .set = { {-7, -11}, {-4, -17}, {-2, -10}, {-1, -12} } },
	[235] = { .set = { {-4, -13}, {2, -17}, {-7, -13}, {0, -13} } },
	[236] = { .set = { {-1, -11}, {5, -14}, {-7, -14}, {-1, -12} } },
	[237] = { .set = { {2, -13}, {-4, -17}, {5, -13}, {-2, -13} } },
	[238] = { .set = { {5, -11}, {2, -17}, {0, -10}, {-1, -12} } },
	[239] = { .set = { {2, -9}, {4, -16}, {-5, -9}, {-1, -12} } },
	[240] = { .set = { {-1, -8}, {-8, -13}, {5, -13}, {-1, -12} } },
	[241] = { .set = { {-1, -7}, {-8, -13}, {5, -13}, {-1, -11} } },
	[242] = { .set = { {-1, -13}, {-8, -12}, {6, -12}, {-1, -12} } },
	[243] = { .set = { {0, -12}, {2, -17}, {-6, -9}, {-2, -13} } },
	[244] = { .set = { {3, -12}, {0, -17}, {-1, -10}, {-3, -11} } },
	[245] = { .set = { {3, -11}, {-4, -17}, {5, -13}, {-1, -12} } },
	[246] = { .set = { {-1, -11}, {5, -12}, {-7, -12}, {-1, -12} } },
	[247] = { .set = { {-3, -11}, {4, -17}, {-5, -13}, {1, -12} } },
	[248] = { .set = { {-4, -12}, {-1, -17}, {0, -10}, {2, -11} } },
	[249] = { .set = { {-2, -12}, {-4, -17}, {4, -9}, {0, -13} } },
	[250] = { .set = { {-1, -9}, {-8, -12}, {6, -13}, {-1, -12} } },
	[251] = { .set = { {-1, -9}, {-8, -12}, {5, -12}, {-1, -12} } },
	[252] = { .set = { {-1, -9}, {-8, -12}, {5, -12}, {-1, -12} } },
	[253] = { .set = { {2, -9}, {4, -16}, {-5, -9}, {-1, -12} } },
	[254] = { .set = { {2, -9}, {4, -16}, {-5, -9}, {-1, -12} } },
	[255] = { .set = { {2, -9}, {4, -16}, {-5, -9}, {-1, -12} } },
	[256] = { .set = { {5, -11}, {2, -17}, {0, -10}, {-1, -12} } },
	[257] = { .set = { {5, -11}, {2, -17}, {0, -10}, {-1, -12} } },
	[258] = { .set = { {5, -11}, {2, -18}, {1, -10}, {-1, -12} } },
	[259] = { .set = { {2, -13}, {-4, -17}, {5, -13}, {-2, -13} } },
	[260] = { .set = { {3, -12}, {-4, -18}, {5, -13}, {-1, -12} } },
	[261] = { .set = { {3, -10}, {-3, -18}, {5, -13}, {-1, -13} } },
	[262] = { .set = { {-1, -11}, {5, -14}, {-7, -14}, {-1, -12} } },
	[263] = { .set = { {-1, -12}, {5, -14}, {-7, -14}, {-1, -13} } },
	[264] = { .set = { {-1, -11}, {5, -15}, {-7, -15}, {-1, -12} } },
	[265] = { .set = { {-4, -13}, {2, -17}, {-7, -13}, {0, -13} } },
	[266] = { .set = { {-5, -12}, {2, -18}, {-7, -13}, {-1, -12} } },
	[267] = { .set = { {-5, -10}, {1, -18}, {-7, -13}, {-1, -13} } },
	[268] = { .set = { {-7, -11}, {-4, -17}, {-2, -10}, {-1, -12} } },
	[269] = { .set = { {-7, -11}, {-4, -17}, {-2, -10}, {-1, -12} } },
	[270] = { .set = { {-7, -11}, {-4, -18}, {-3, -10}, {-1, -12} } },
	[271] = { .set = { {-4, -9}, {-6, -16}, {3, -9}, {-1, -12} } },
	[272] = { .set = { {-4, -9}, {-6, -16}, {3, -9}, {-1, -12} } },
	[273] = { .set = { {-4, -9}, {-6, -16}, {3, -9}, {-1, -12} } },
	[274] = { .set = { {-1, -9}, {-8, -12}, {6, -13}, {-1, -12} } },
	[275] = { .set = { {-4, -9}, {-6, -16}, {3, -9}, {-1, -12} } },
	[276] = { .set = { {-7, -11}, {-4, -17}, {-2, -10}, {-1, -12} } },
	[277] = { .set = { {-4, -13}, {2, -17}, {-7, -13}, {0, -13} } },
	[278] = { .set = { {-1, -11}, {5, -14}, {-7, -14}, {-1, -12} } },
	[279] = { .set = { {2, -13}, {-4, -17}, {5, -13}, {-2, -13} } },
	[280] = { .set = { {5, -11}, {2, -17}, {0, -10}, {-1, -12} } },
	[281] = { .set = { {2, -9}, {4, -16}, {-5, -9}, {-1, -12} } },
	[282] = { .set = { {0, -15}, {-8, -14}, {8, -14}, {0, -13} } },
	[283] = { .set = { {3, -15}, {5, -16}, {-6, -12}, {0, -11} } },
	[284] = { .set = { {6, -16}, {1, -18}, {2, -14}, {-1, -11} } },
	[285] = { .set = { {3, -17}, {-4, -19}, {6, -15}, {-1, -12} } },
	[286] = { .set = { {-1, -18}, {8, -13}, {-9, -13}, {0, -12} } },
	[287] = { .set = { {-4, -17}, {3, -19}, {-7, -15}, {0, -12} } },
	[288] = { .set = { {-7, -16}, {-2, -18}, {-3, -14}, {0, -11} } },
	[289] = { .set = { {-4, -15}, {-6, -16}, {5, -12}, {-1, -11} } },
	[290] = { .set = { {-1, -9}, {-8, -12}, {6, -13}, {-1, -12} } },
	[291] = { .set = { {-1, -9}, {-8, -12}, {5, -12}, {-1, -12} } },
	[292] = { .set = { {-1, -9}, {-8, -12}, {5, -12}, {-1, -12} } },
	[293] = { .set = { {2, -9}, {4, -16}, {-5, -9}, {-1, -12} } },
	[294] = { .set = { {2, -9}, {4, -16}, {-5, -9}, {-1, -12} } },
	[295] = { .set = { {2, -9}, {4, -16}, {-5, -9}, {-1, -12} } },
	[296] = { .set = { {5, -11}, {2, -17}, {0, -10}, {-1, -12} } },
	[297] = { .set = { {5, -11}, {2, -17}, {0, -10}, {-1, -12} } },
	[298] = { .set = { {5, -11}, {2, -18}, {1, -10}, {-1, -12} } },
	[299] = { .set = { {2, -13}, {-4, -17}, {5, -13}, {-2, -13} } },
	[300] = { .set = { {3, -12}, {-4, -18}, {5, -13}, {-1, -12} } },
	[301] = { .set = { {3, -10}, {-3, -18}, {5, -13}, {-1, -13} } },
	[302] = { .set = { {-1, -11}, {5, -14}, {-7, -14}, {-1, -12} } },
	[303] = { .set = { {-1, -12}, {5, -14}, {-7, -14}, {-1, -13} } },
	[304] = { .set = { {-1, -11}, {5, -15}, {-7, -15}, {-1, -12} } },
	[305] = { .set = { {-4, -13}, {2, -17}, {-7, -13}, {0, -13} } },
	[306] = { .set = { {-5, -12}, {2, -18}, {-7, -13}, {-1, -12} } },
	[307] = { .set = { {-5, -10}, {1, -18}, {-7, -13}, {-1, -13} } },
	[308] = { .set = { {-7, -11}, {-4, -17}, {-2, -10}, {-1, -12} } },
	[309] = { .set = { {-7, -11}, {-4, -17}, {-2, -10}, {-1, -12} } },
	[310] = { .set = { {-7, -11}, {-4, -18}, {-3, -10}, {-1, -12} } },
	[311] = { .set = { {-4, -9}, {-6, -16}, {3, -9}, {-1, -12} } },
	[312] = { .set = { {-4, -9}, {-6, -16}, {3, -9}, {-1, -12} } },
	[313] = { .set = { {-4, -9}, {-6, -16}, {3, -9}, {-1, -12} } },
	[314] = { .set = { {-1, -9}, {-8, -12}, {6, -13}, {-1, -12} } },
	[315] = { .set = { {-1, -9}, {-8, -12}, {5, -12}, {-1, -12} } },
	[316] = { .set = { {-1, -9}, {-8, -12}, {5, -12}, {-1, -12} } },
	[317] = { .set = { {2, -9}, {4, -16}, {-5, -9}, {-1, -12} } },
	[318] = { .set = { {2, -9}, {4, -16}, {-5, -9}, {-1, -12} } },
	[319] = { .set = { {2, -9}, {4, -16}, {-5, -9}, {-1, -12} } },
	[320] = { .set = { {5, -11}, {2, -17}, {0, -10}, {-1, -12} } },
	[321] = { .set = { {5, -11}, {2, -17}, {0, -10}, {-1, -12} } },
	[322] = { .set = { {5, -11}, {2, -18}, {1, -10}, {-1, -12} } },
	[323] = { .set = { {2, -13}, {-4, -17}, {5, -13}, {-2, -13} } },
	[324] = { .set = { {3, -12}, {-4, -18}, {5, -13}, {-1, -12} } },
	[325] = { .set = { {3, -10}, {-3, -18}, {5, -13}, {-1, -13} } },
	[326] = { .set = { {-1, -11}, {5, -14}, {-7, -14}, {-1, -12} } },
	[327] = { .set = { {-1, -12}, {5, -14}, {-7, -14}, {-1, -13} } },
	[328] = { .set = { {-1, -11}, {5, -15}, {-7, -15}, {-1, -12} } },
	[329] = { .set = { {-4, -13}, {2, -17}, {-7, -13}, {0, -13} } },
	[330] = { .set = { {-5, -12}, {2, -18}, {-7, -13}, {-1, -12} } },
	[331] = { .set = { {-5, -10}, {1, -18}, {-7, -13}, {-1, -13} } },
	[332] = { .set = { {-7, -11}, {-4, -17}, {-2, -10}, {-1, -12} } },
	[333] = { .set = { {-7, -11}, {-4, -17}, {-2, -10}, {-1, -12} } },
	[334] = { .set = { {-7, -11}, {-4, -18}, {-3, -10}, {-1, -12} } },
	[335] = { .set = { {-4, -9}, {-6, -16}, {3, -9}, {-1, -12} } },
	[336] = { .set = { {-4, -9}, {-6, -16}, {3, -9}, {-1, -12} } },
	[337] = { .set = { {-4, -9}, {-6, -16}, {3, -9}, {-1, -12} } },
	[338] = { .set = { {-1, -9}, {-8, -12}, {6, -13}, {-1, -12} } },
	[339] = { .set = { {-4, -9}, {-6, -16}, {3, -9}, {-1, -12} } },
	[340] = { .set = { {-7, -11}, {-4, -17}, {-2, -10}, {-1, -12} } },
	[341] = { .set = { {-4, -13}, {2, -17}, {-7, -13}, {0, -13} } },
	[342] = { .set = { {-1, -11}, {5, -14}, {-7, -14}, {-1, -12} } },
	[343] = { .set = { {2, -13}, {-4, -17}, {5, -13}, {-2, -13} } },
	[344] = { .set = { {5, -11}, {2, -17}, {0, -10}, {-1, -12} } },
	[345] = { .set = { {2, -9}, {4, -16}, {-5, -9}, {-1, -12} } },
};

static const ax_anim *const sKoffingAnimTable1[] = {
	AX_ANIM_PTR(sKoffingAnims_1_1),
	AX_ANIM_PTR(sKoffingAnims_1_2),
	AX_ANIM_PTR(sKoffingAnims_1_3),
	AX_ANIM_PTR(sKoffingAnims_1_4),
	AX_ANIM_PTR(sKoffingAnims_1_5),
	AX_ANIM_PTR(sKoffingAnims_1_6),
	AX_ANIM_PTR(sKoffingAnims_1_7),
	AX_ANIM_PTR(sKoffingAnims_1_8),
};

static const ax_anim *const sKoffingAnimTable2[] = {
	AX_ANIM_PTR(sKoffingAnims_2_1),
	AX_ANIM_PTR(sKoffingAnims_2_2),
	AX_ANIM_PTR(sKoffingAnims_2_3),
	AX_ANIM_PTR(sKoffingAnims_2_4),
	AX_ANIM_PTR(sKoffingAnims_2_5),
	AX_ANIM_PTR(sKoffingAnims_2_6),
	AX_ANIM_PTR(sKoffingAnims_2_7),
	AX_ANIM_PTR(sKoffingAnims_2_8),
};

static const ax_anim *const sKoffingAnimTable3[] = {
	AX_ANIM_PTR(sKoffingAnims_3_1),
	AX_ANIM_PTR(sKoffingAnims_3_2),
	AX_ANIM_PTR(sKoffingAnims_3_3),
	AX_ANIM_PTR(sKoffingAnims_3_4),
	AX_ANIM_PTR(sKoffingAnims_3_5),
	AX_ANIM_PTR(sKoffingAnims_3_6),
	AX_ANIM_PTR(sKoffingAnims_3_7),
	AX_ANIM_PTR(sKoffingAnims_3_8),
};

static const ax_anim *const sKoffingAnimTable4[] = {
	AX_ANIM_PTR(sKoffingAnims_4_1),
	AX_ANIM_PTR(sKoffingAnims_4_2),
	AX_ANIM_PTR(sKoffingAnims_4_3),
	AX_ANIM_PTR(sKoffingAnims_4_4),
	AX_ANIM_PTR(sKoffingAnims_4_5),
	AX_ANIM_PTR(sKoffingAnims_4_6),
	AX_ANIM_PTR(sKoffingAnims_4_7),
	AX_ANIM_PTR(sKoffingAnims_4_8),
};

static const ax_anim *const sKoffingAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_01513),
	AX_ANIM_PTR(gAxSharedAnim_01553),
	AX_ANIM_PTR(gAxSharedAnim_01548),
	AX_ANIM_PTR(gAxSharedAnim_01543),
	AX_ANIM_PTR(gAxSharedAnim_01538),
	AX_ANIM_PTR(gAxSharedAnim_01530),
	AX_ANIM_PTR(gAxSharedAnim_01524),
	AX_ANIM_PTR(gAxSharedAnim_01519),
};

static const ax_anim *const sKoffingAnimTable6[] = {
	AX_ANIM_PTR(sKoffingAnims_6_1),
	AX_ANIM_PTR(sKoffingAnims_6_1),
	AX_ANIM_PTR(sKoffingAnims_6_1),
	AX_ANIM_PTR(sKoffingAnims_6_1),
	AX_ANIM_PTR(sKoffingAnims_6_1),
	AX_ANIM_PTR(sKoffingAnims_6_1),
	AX_ANIM_PTR(sKoffingAnims_6_1),
	AX_ANIM_PTR(sKoffingAnims_6_1),
};

static const ax_anim *const sKoffingAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_01583),
	AX_ANIM_PTR(gAxSharedAnim_01589),
	AX_ANIM_PTR(gAxSharedAnim_01594),
	AX_ANIM_PTR(gAxSharedAnim_01598),
	AX_ANIM_PTR(gAxSharedAnim_01607),
	AX_ANIM_PTR(gAxSharedAnim_01615),
	AX_ANIM_PTR(gAxSharedAnim_01622),
	AX_ANIM_PTR(gAxSharedAnim_01629),
};

static const ax_anim *const sKoffingAnimTable8[] = {
	AX_ANIM_PTR(sKoffingAnims_8_1),
	AX_ANIM_PTR(sKoffingAnims_8_2),
	AX_ANIM_PTR(sKoffingAnims_8_3),
	AX_ANIM_PTR(sKoffingAnims_8_4),
	AX_ANIM_PTR(sKoffingAnims_8_5),
	AX_ANIM_PTR(sKoffingAnims_8_6),
	AX_ANIM_PTR(sKoffingAnims_8_7),
	AX_ANIM_PTR(sKoffingAnims_8_8),
};

static const ax_anim *const sKoffingAnimTable9[] = {
	AX_ANIM_PTR(sKoffingAnims_9_1),
	AX_ANIM_PTR(sKoffingAnims_9_2),
	AX_ANIM_PTR(sKoffingAnims_9_3),
	AX_ANIM_PTR(sKoffingAnims_9_4),
	AX_ANIM_PTR(sKoffingAnims_9_5),
	AX_ANIM_PTR(sKoffingAnims_9_6),
	AX_ANIM_PTR(sKoffingAnims_9_7),
	AX_ANIM_PTR(sKoffingAnims_9_8),
};

static const ax_anim *const sKoffingAnimTable10[] = {
	AX_ANIM_PTR(sKoffingAnims_10_1),
	AX_ANIM_PTR(sKoffingAnims_10_2),
	AX_ANIM_PTR(sKoffingAnims_10_3),
	AX_ANIM_PTR(sKoffingAnims_10_4),
	AX_ANIM_PTR(sKoffingAnims_10_5),
	AX_ANIM_PTR(sKoffingAnims_10_6),
	AX_ANIM_PTR(sKoffingAnims_10_7),
	AX_ANIM_PTR(sKoffingAnims_10_8),
};

static const ax_anim *const sKoffingAnimTable11[] = {
	AX_ANIM_PTR(sKoffingAnims_11_1),
	AX_ANIM_PTR(sKoffingAnims_11_2),
	AX_ANIM_PTR(sKoffingAnims_11_3),
	AX_ANIM_PTR(sKoffingAnims_11_4),
	AX_ANIM_PTR(sKoffingAnims_11_5),
	AX_ANIM_PTR(sKoffingAnims_11_6),
	AX_ANIM_PTR(sKoffingAnims_11_7),
	AX_ANIM_PTR(sKoffingAnims_11_8),
};

static const ax_anim *const sKoffingAnimTable12[] = {
	AX_ANIM_PTR(sKoffingAnims_12_1),
	AX_ANIM_PTR(sKoffingAnims_12_2),
	AX_ANIM_PTR(sKoffingAnims_12_3),
	AX_ANIM_PTR(sKoffingAnims_12_4),
	AX_ANIM_PTR(sKoffingAnims_12_5),
	AX_ANIM_PTR(sKoffingAnims_12_6),
	AX_ANIM_PTR(sKoffingAnims_12_7),
	AX_ANIM_PTR(sKoffingAnims_12_8),
};

static const ax_anim *const sKoffingAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01864),
	AX_ANIM_PTR(gAxSharedAnim_01875),
	AX_ANIM_PTR(gAxSharedAnim_01874),
	AX_ANIM_PTR(gAxSharedAnim_01873),
	AX_ANIM_PTR(gAxSharedAnim_01872),
	AX_ANIM_PTR(gAxSharedAnim_01871),
	AX_ANIM_PTR(gAxSharedAnim_01870),
	AX_ANIM_PTR(gAxSharedAnim_01865),
};

static const ax_anim *const *const sAxAnimationsKoffing[] = {
	sKoffingAnimTable1,
	sKoffingAnimTable2,
	sKoffingAnimTable3,
	sKoffingAnimTable4,
	sKoffingAnimTable5,
	sKoffingAnimTable6,
	sKoffingAnimTable7,
	sKoffingAnimTable8,
	sKoffingAnimTable9,
	sKoffingAnimTable10,
	sKoffingAnimTable11,
	sKoffingAnimTable12,
	sKoffingAnimTable13,
};

static const ax_sprite *const sAxSpritesKoffing[] = {
	sKoffingSprites1,
	sKoffingSprites2,
	sKoffingSprites3,
	sKoffingSprites4,
	sKoffingSprites5,
	sKoffingSprites6,
	sKoffingSprites7,
	sKoffingSprites8,
	sKoffingSprites9,
	sKoffingSprites10,
	sKoffingSprites11,
	sKoffingSprites12,
	sKoffingSprites13,
	sKoffingSprites14,
	sKoffingSprites15,
	sKoffingSprites16,
	sKoffingSprites17,
	sKoffingSprites18,
	sKoffingSprites19,
	sKoffingSprites20,
	sKoffingSprites21,
	sKoffingSprites22,
	sKoffingSprites23,
	sKoffingSprites24,
	sKoffingSprites25,
	sKoffingSprites26,
	sKoffingSprites27,
	sKoffingSprites28,
	sKoffingSprites29,
	sKoffingSprites30,
	sKoffingSprites31,
	sKoffingSprites32,
	sKoffingSprites33,
	sKoffingSprites34,
	sKoffingSprites35,
	sKoffingSprites36,
	sKoffingSprites37,
	sKoffingSprites38,
	sKoffingSprites39,
	sKoffingSprites40,
	sKoffingSprites41,
	sKoffingSprites42,
	sKoffingSprites43,
	sKoffingSprites44,
	sKoffingSprites45,
	sKoffingSprites46,
	sKoffingSprites47,
	sKoffingSprites48,
	sKoffingSprites49,
	sKoffingSprites50,
	sKoffingSprites51,
	sKoffingSprites52,
	sKoffingSprites53,
};

static const axmain sAxMainKoffing = {
	.poses = sAxPosesKoffing,
	.animations = sAxAnimationsKoffing,
	.animCount = ARRAY_COUNT(sAxAnimationsKoffing),
	.spriteData = sAxSpritesKoffing,
	.positions = sAxPositionsKoffing,
};
