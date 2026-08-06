/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainCyndaquil;
const SiroArchive gAxCyndaquil = {"SIRO", &sAxMainCyndaquil};

static const ax_pose sCyndaquilPose1[] = {
	AX_POSE(0, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose3[] = {
	AX_POSE(2, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose4[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose5[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose6[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose7[] = {
	AX_POSE(6, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose8[] = {
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose9[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose10[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose11[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose12[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose13[] = {
	AX_POSE(12, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose14[] = {
	AX_POSE(13, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose15[] = {
	AX_POSE(14, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose16[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose17[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose18[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose19[] = {
	AX_POSE(6, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose20[] = {
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose21[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose22[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose23[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose24[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose25[] = {
	AX_POSE(0, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(15, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose26[] = {
	AX_POSE(1, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose27[] = {
	AX_POSE(2, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(17, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose28[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose29[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose30[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose31[] = {
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(6, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose32[] = {
	AX_POSE(22, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose33[] = {
	AX_POSE(23, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose34[] = {
	AX_POSE(24, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose35[] = {
	AX_POSE(25, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose36[] = {
	AX_POSE(26, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose37[] = {
	AX_POSE(27, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(12, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose38[] = {
	AX_POSE(28, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(13, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose39[] = {
	AX_POSE(29, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(14, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose40[] = {
	AX_POSE(24, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose41[] = {
	AX_POSE(25, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose42[] = {
	AX_POSE(26, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose43[] = {
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(6, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose44[] = {
	AX_POSE(22, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose45[] = {
	AX_POSE(23, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose46[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose47[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose48[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose76[] = {
	AX_POSE(30, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(31, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose77[] = {
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(31, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose78[] = {
	AX_POSE(31, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose79[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose80[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose81[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose82[] = {
	AX_POSE(33, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(34, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose83[] = {
	AX_POSE(35, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(34, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose84[] = {
	AX_POSE(34, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose85[] = {
	AX_POSE(6, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose86[] = {
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose87[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose88[] = {
	AX_POSE(36, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(37, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose89[] = {
	AX_POSE(38, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(37, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose90[] = {
	AX_POSE(37, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose94[] = {
	AX_POSE(39, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose95[] = {
	AX_POSE(41, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose96[] = {
	AX_POSE(40, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose100[] = {
	AX_POSE(42, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(43, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose101[] = {
	AX_POSE(44, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(43, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose102[] = {
	AX_POSE(43, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose106[] = {
	AX_POSE(39, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose107[] = {
	AX_POSE(41, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose108[] = {
	AX_POSE(40, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose112[] = {
	AX_POSE(36, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(37, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose113[] = {
	AX_POSE(38, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(37, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose114[] = {
	AX_POSE(37, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose115[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose116[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose117[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose118[] = {
	AX_POSE(33, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(34, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose119[] = {
	AX_POSE(35, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(34, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose120[] = {
	AX_POSE(34, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose129[] = {
	AX_POSE(45, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose130[] = {
	AX_POSE(46, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose131[] = {
	AX_POSE(47, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose132[] = {
	AX_POSE(48, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose133[] = {
	AX_POSE(49, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose134[] = {
	AX_POSE(50, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose135[] = {
	AX_POSE(51, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose136[] = {
	AX_POSE(50, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose137[] = {
	AX_POSE(49, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose138[] = {
	AX_POSE(48, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose142[] = {
	AX_POSE(34, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose144[] = {
	AX_POSE(37, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose154[] = {
	AX_POSE(34, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose203[] = {
	AX_POSE(52, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose204[] = {
	AX_POSE(53, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose205[] = {
	AX_POSE(52, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose206[] = {
	AX_POSE(53, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose208[] = {
	AX_POSE(54, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose209[] = {
	AX_POSE(55, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose210[] = {
	AX_POSE(56, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose213[] = {
	AX_POSE(57, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose214[] = {
	AX_POSE(58, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose215[] = {
	AX_POSE(59, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose216[] = {
	AX_POSE(60, OAM1(233, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(61, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose217[] = {
	AX_POSE(62, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(63, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(61, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(10, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose218[] = {
	AX_POSE(61, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose219[] = {
	AX_POSE(64, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose220[] = {
	AX_POSE(65, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose221[] = {
	AX_POSE(66, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose222[] = {
	AX_POSE(67, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose223[] = {
	AX_POSE(68, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose225[] = {
	AX_POSE(69, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose226[] = {
	AX_POSE(70, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose227[] = {
	AX_POSE(71, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose229[] = {
	AX_POSE(72, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose230[] = {
	AX_POSE(73, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose232[] = {
	AX_POSE(74, OAM1(240, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose233[] = {
	AX_POSE(75, OAM1(240, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose236[] = {
	AX_POSE(76, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose238[] = {
	AX_POSE(77, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose240[] = {
	AX_POSE(77, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose242[] = {
	AX_POSE(78, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose243[] = {
	AX_POSE(79, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose244[] = {
	AX_POSE(80, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose245[] = {
	AX_POSE(81, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose246[] = {
	AX_POSE(82, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose247[] = {
	AX_POSE(83, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose248[] = {
	AX_POSE(79, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose249[] = {
	AX_POSE(80, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose250[] = {
	AX_POSE(81, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose251[] = {
	AX_POSE(82, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose252[] = {
	AX_POSE(83, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCyndaquilPose253[] = {
	AX_POSE(84, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const u8 sCyndaquilAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_2_1.lz");
static const u8 sCyndaquilAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_2_2.lz");
static const u8 sCyndaquilAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_2_3.lz");
static const u8 sCyndaquilAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_2_4.lz");
static const u8 sCyndaquilAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_2_5.lz");
static const u8 sCyndaquilAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_2_6.lz");
static const u8 sCyndaquilAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_2_7.lz");
static const u8 sCyndaquilAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_2_8.lz");
static const u8 sCyndaquilAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_3_1.lz");
static const u8 sCyndaquilAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_3_2.lz");
static const u8 sCyndaquilAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_3_3.lz");
static const u8 sCyndaquilAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_3_4.lz");
static const u8 sCyndaquilAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_3_5.lz");
static const u8 sCyndaquilAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_3_6.lz");
static const u8 sCyndaquilAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_3_7.lz");
static const u8 sCyndaquilAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_3_8.lz");
static const u8 sCyndaquilAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_4_1.lz");
static const u8 sCyndaquilAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_4_2.lz");
static const u8 sCyndaquilAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_4_3.lz");
static const u8 sCyndaquilAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_4_4.lz");
static const u8 sCyndaquilAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_4_5.lz");
static const u8 sCyndaquilAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_4_6.lz");
static const u8 sCyndaquilAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_4_7.lz");
static const u8 sCyndaquilAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_4_8.lz");
static const u8 sCyndaquilAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_8_1.lz");
static const u8 sCyndaquilAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_8_2.lz");
static const u8 sCyndaquilAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_8_3.lz");
static const u8 sCyndaquilAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_8_4.lz");
static const u8 sCyndaquilAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_8_5.lz");
static const u8 sCyndaquilAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_8_6.lz");
static const u8 sCyndaquilAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_8_7.lz");
static const u8 sCyndaquilAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_8_8.lz");
static const u8 sCyndaquilAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_9_1.lz");
static const u8 sCyndaquilAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_9_2.lz");
static const u8 sCyndaquilAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_9_3.lz");
static const u8 sCyndaquilAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_9_4.lz");
static const u8 sCyndaquilAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_9_5.lz");
static const u8 sCyndaquilAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_9_6.lz");
static const u8 sCyndaquilAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_9_7.lz");
static const u8 sCyndaquilAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_9_8.lz");
static const u8 sCyndaquilAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_11_2.lz");
static const u8 sCyndaquilAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_11_4.lz");
static const u8 sCyndaquilAnims_15_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_15_1.lz");
static const u8 sCyndaquilAnims_17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_17_1.lz");
static const u8 sCyndaquilAnims_18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_18_1.lz");
static const u8 sCyndaquilAnims_18_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_18_5.lz");
static const u8 sCyndaquilAnims_20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_20_1.lz");
static const u8 sCyndaquilAnims_20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_20_2.lz");
static const u8 sCyndaquilAnims_21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_21_1.lz");
static const u8 sCyndaquilAnims_22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_22_1.lz");
static const u8 sCyndaquilAnims_23_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_23_3.lz");
static const u8 sCyndaquilAnims_24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_24_1.lz");
static const u8 sCyndaquilAnims_25_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_25_7.lz");
static const u8 sCyndaquilAnims_26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_26_1.lz");
static const u8 sCyndaquilAnims_27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_27_1.lz");
static const u8 sCyndaquilAnims_28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/cyndaquil/sCyndaquilAnims_28_3.lz");

static const u8 sCyndaquilGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_1.4bpp.lz");
static const ax_sprite sCyndaquilSprites1[] = {
	{sCyndaquilGfx1, ARRAY_COUNT(sCyndaquilGfx1)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites2[] = {
	{sCyndaquilGfx2, ARRAY_COUNT(sCyndaquilGfx2)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_3.4bpp.lz");
static const ax_sprite sCyndaquilSprites3[] = {
	{sCyndaquilGfx3, ARRAY_COUNT(sCyndaquilGfx3)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_4.4bpp.lz");
static const ax_sprite sCyndaquilSprites4[] = {
	{sCyndaquilGfx4, ARRAY_COUNT(sCyndaquilGfx4)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_5.4bpp.lz");
static const ax_sprite sCyndaquilSprites5[] = {
	{sCyndaquilGfx5, ARRAY_COUNT(sCyndaquilGfx5)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_6.4bpp.lz");
static const ax_sprite sCyndaquilSprites6[] = {
	{sCyndaquilGfx6, ARRAY_COUNT(sCyndaquilGfx6)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_7.4bpp.lz");
static const ax_sprite sCyndaquilSprites7[] = {
	{sCyndaquilGfx7, ARRAY_COUNT(sCyndaquilGfx7)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_8.4bpp.lz");
static const ax_sprite sCyndaquilSprites8[] = {
	{sCyndaquilGfx8, ARRAY_COUNT(sCyndaquilGfx8)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_9.4bpp.lz");
static const ax_sprite sCyndaquilSprites9[] = {
	{sCyndaquilGfx9, ARRAY_COUNT(sCyndaquilGfx9)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_10.4bpp.lz");
static const ax_sprite sCyndaquilSprites10[] = {
	{sCyndaquilGfx10, ARRAY_COUNT(sCyndaquilGfx10)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_11.4bpp.lz");
static const ax_sprite sCyndaquilSprites11[] = {
	{sCyndaquilGfx11, ARRAY_COUNT(sCyndaquilGfx11)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_12.4bpp.lz");
static const ax_sprite sCyndaquilSprites12[] = {
	{sCyndaquilGfx12, ARRAY_COUNT(sCyndaquilGfx12)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_13.4bpp.lz");
static const ax_sprite sCyndaquilSprites13[] = {
	{sCyndaquilGfx13, ARRAY_COUNT(sCyndaquilGfx13)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_14.4bpp.lz");
static const ax_sprite sCyndaquilSprites14[] = {
	{sCyndaquilGfx14, ARRAY_COUNT(sCyndaquilGfx14)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_15.4bpp.lz");
static const ax_sprite sCyndaquilSprites15[] = {
	{sCyndaquilGfx15, ARRAY_COUNT(sCyndaquilGfx15)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_16.4bpp.lz");
static const u8 sCyndaquilGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_16_1.4bpp.lz");
static const u8 sCyndaquilGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_16_2.4bpp.lz");
static const u8 sCyndaquilGfx16_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_16_3.4bpp.lz");
static const ax_sprite sCyndaquilSprites16[] = {
	{sCyndaquilGfx16, ARRAY_COUNT(sCyndaquilGfx16)}, 
	{NULL, 32}, 
	{sCyndaquilGfx16_1, ARRAY_COUNT(sCyndaquilGfx16_1)}, 
	{NULL, 32}, 
	{sCyndaquilGfx16_2, ARRAY_COUNT(sCyndaquilGfx16_2)}, 
	{NULL, 32}, 
	{sCyndaquilGfx16_3, ARRAY_COUNT(sCyndaquilGfx16_3)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_17.4bpp.lz");
static const u8 sCyndaquilGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_17_1.4bpp.lz");
static const u8 sCyndaquilGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_17_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites17[] = {
	{sCyndaquilGfx17, ARRAY_COUNT(sCyndaquilGfx17)}, 
	{NULL, 64}, 
	{sCyndaquilGfx17_1, ARRAY_COUNT(sCyndaquilGfx17_1)}, 
	{NULL, 64}, 
	{sCyndaquilGfx17_2, ARRAY_COUNT(sCyndaquilGfx17_2)}, 
	{NULL, 224}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_18.4bpp.lz");
static const u8 sCyndaquilGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_18_1.4bpp.lz");
static const u8 sCyndaquilGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_18_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites18[] = {
	{NULL, 32}, 
	{sCyndaquilGfx18, ARRAY_COUNT(sCyndaquilGfx18)}, 
	{NULL, 64}, 
	{sCyndaquilGfx18_1, ARRAY_COUNT(sCyndaquilGfx18_1)}, 
	{NULL, 96}, 
	{sCyndaquilGfx18_2, ARRAY_COUNT(sCyndaquilGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_19.4bpp.lz");
static const u8 sCyndaquilGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_19_1.4bpp.lz");
static const u8 sCyndaquilGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_19_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites19[] = {
	{NULL, 64}, 
	{sCyndaquilGfx19, ARRAY_COUNT(sCyndaquilGfx19)}, 
	{NULL, 64}, 
	{sCyndaquilGfx19_1, ARRAY_COUNT(sCyndaquilGfx19_1)}, 
	{NULL, 64}, 
	{sCyndaquilGfx19_2, ARRAY_COUNT(sCyndaquilGfx19_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_20.4bpp.lz");
static const u8 sCyndaquilGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_20_1.4bpp.lz");
static const u8 sCyndaquilGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_20_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites20[] = {
	{NULL, 64}, 
	{sCyndaquilGfx20, ARRAY_COUNT(sCyndaquilGfx20)}, 
	{NULL, 64}, 
	{sCyndaquilGfx20_1, ARRAY_COUNT(sCyndaquilGfx20_1)}, 
	{NULL, 96}, 
	{sCyndaquilGfx20_2, ARRAY_COUNT(sCyndaquilGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_21.4bpp.lz");
static const u8 sCyndaquilGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_21_1.4bpp.lz");
static const ax_sprite sCyndaquilSprites21[] = {
	{NULL, 160}, 
	{sCyndaquilGfx21, ARRAY_COUNT(sCyndaquilGfx21)}, 
	{NULL, 64}, 
	{sCyndaquilGfx21_1, ARRAY_COUNT(sCyndaquilGfx21_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_22.4bpp.lz");
static const u8 sCyndaquilGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_22_1.4bpp.lz");
static const ax_sprite sCyndaquilSprites22[] = {
	{NULL, 32}, 
	{sCyndaquilGfx22, ARRAY_COUNT(sCyndaquilGfx22)}, 
	{NULL, 32}, 
	{sCyndaquilGfx22_1, ARRAY_COUNT(sCyndaquilGfx22_1)}, 
	{NULL, 256}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_23.4bpp.lz");
static const u8 sCyndaquilGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_23_1.4bpp.lz");
static const ax_sprite sCyndaquilSprites23[] = {
	{NULL, 32}, 
	{sCyndaquilGfx23, ARRAY_COUNT(sCyndaquilGfx23)}, 
	{NULL, 32}, 
	{sCyndaquilGfx23_1, ARRAY_COUNT(sCyndaquilGfx23_1)}, 
	{NULL, 256}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_24.4bpp.lz");
static const u8 sCyndaquilGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_24_1.4bpp.lz");
static const u8 sCyndaquilGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_24_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites24[] = {
	{NULL, 64}, 
	{sCyndaquilGfx24, ARRAY_COUNT(sCyndaquilGfx24)}, 
	{NULL, 32}, 
	{sCyndaquilGfx24_1, ARRAY_COUNT(sCyndaquilGfx24_1)}, 
	{NULL, 64}, 
	{sCyndaquilGfx24_2, ARRAY_COUNT(sCyndaquilGfx24_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_25.4bpp.lz");
static const u8 sCyndaquilGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_25_1.4bpp.lz");
static const u8 sCyndaquilGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_25_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites25[] = {
	{NULL, 32}, 
	{sCyndaquilGfx25, ARRAY_COUNT(sCyndaquilGfx25)}, 
	{NULL, 32}, 
	{sCyndaquilGfx25_1, ARRAY_COUNT(sCyndaquilGfx25_1)}, 
	{NULL, 32}, 
	{sCyndaquilGfx25_2, ARRAY_COUNT(sCyndaquilGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_26.4bpp.lz");
static const u8 sCyndaquilGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_26_1.4bpp.lz");
static const u8 sCyndaquilGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_26_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites26[] = {
	{NULL, 32}, 
	{sCyndaquilGfx26, ARRAY_COUNT(sCyndaquilGfx26)}, 
	{NULL, 32}, 
	{sCyndaquilGfx26_1, ARRAY_COUNT(sCyndaquilGfx26_1)}, 
	{NULL, 32}, 
	{sCyndaquilGfx26_2, ARRAY_COUNT(sCyndaquilGfx26_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_27.4bpp.lz");
static const u8 sCyndaquilGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_27_1.4bpp.lz");
static const u8 sCyndaquilGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_27_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites27[] = {
	{NULL, 32}, 
	{sCyndaquilGfx27, ARRAY_COUNT(sCyndaquilGfx27)}, 
	{NULL, 64}, 
	{sCyndaquilGfx27_1, ARRAY_COUNT(sCyndaquilGfx27_1)}, 
	{NULL, 64}, 
	{sCyndaquilGfx27_2, ARRAY_COUNT(sCyndaquilGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_28.4bpp.lz");
static const ax_sprite sCyndaquilSprites28[] = {
	{sCyndaquilGfx28, ARRAY_COUNT(sCyndaquilGfx28)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_29.4bpp.lz");
static const u8 sCyndaquilGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_29_1.4bpp.lz");
static const u8 sCyndaquilGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_29_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites29[] = {
	{NULL, 32}, 
	{sCyndaquilGfx29, ARRAY_COUNT(sCyndaquilGfx29)}, 
	{NULL, 32}, 
	{sCyndaquilGfx29_1, ARRAY_COUNT(sCyndaquilGfx29_1)}, 
	{NULL, 32}, 
	{sCyndaquilGfx29_2, ARRAY_COUNT(sCyndaquilGfx29_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_30.4bpp.lz");
static const u8 sCyndaquilGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_30_1.4bpp.lz");
static const ax_sprite sCyndaquilSprites30[] = {
	{sCyndaquilGfx30, ARRAY_COUNT(sCyndaquilGfx30)}, 
	{NULL, 32}, 
	{sCyndaquilGfx30_1, ARRAY_COUNT(sCyndaquilGfx30_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_31.4bpp.lz");
static const u8 sCyndaquilGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_31_1.4bpp.lz");
static const u8 sCyndaquilGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_31_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites31[] = {
	{sCyndaquilGfx31, ARRAY_COUNT(sCyndaquilGfx31)}, 
	{NULL, 64}, 
	{sCyndaquilGfx31_1, ARRAY_COUNT(sCyndaquilGfx31_1)}, 
	{NULL, 32}, 
	{sCyndaquilGfx31_2, ARRAY_COUNT(sCyndaquilGfx31_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_32.4bpp.lz");
static const ax_sprite sCyndaquilSprites32[] = {
	{sCyndaquilGfx32, ARRAY_COUNT(sCyndaquilGfx32)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_33.4bpp.lz");
static const u8 sCyndaquilGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_33_1.4bpp.lz");
static const u8 sCyndaquilGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_33_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites33[] = {
	{sCyndaquilGfx33, ARRAY_COUNT(sCyndaquilGfx33)}, 
	{NULL, 32}, 
	{sCyndaquilGfx33_1, ARRAY_COUNT(sCyndaquilGfx33_1)}, 
	{NULL, 32}, 
	{sCyndaquilGfx33_2, ARRAY_COUNT(sCyndaquilGfx33_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_34.4bpp.lz");
static const u8 sCyndaquilGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_34_1.4bpp.lz");
static const u8 sCyndaquilGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_34_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites34[] = {
	{NULL, 32}, 
	{sCyndaquilGfx34, ARRAY_COUNT(sCyndaquilGfx34)}, 
	{NULL, 32}, 
	{sCyndaquilGfx34_1, ARRAY_COUNT(sCyndaquilGfx34_1)}, 
	{NULL, 64}, 
	{sCyndaquilGfx34_2, ARRAY_COUNT(sCyndaquilGfx34_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_35.4bpp.lz");
static const u8 sCyndaquilGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_35_1.4bpp.lz");
static const u8 sCyndaquilGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_35_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites35[] = {
	{sCyndaquilGfx35, ARRAY_COUNT(sCyndaquilGfx35)}, 
	{NULL, 64}, 
	{sCyndaquilGfx35_1, ARRAY_COUNT(sCyndaquilGfx35_1)}, 
	{NULL, 64}, 
	{sCyndaquilGfx35_2, ARRAY_COUNT(sCyndaquilGfx35_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_36.4bpp.lz");
static const u8 sCyndaquilGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_36_1.4bpp.lz");
static const u8 sCyndaquilGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_36_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites36[] = {
	{NULL, 32}, 
	{sCyndaquilGfx36, ARRAY_COUNT(sCyndaquilGfx36)}, 
	{NULL, 32}, 
	{sCyndaquilGfx36_1, ARRAY_COUNT(sCyndaquilGfx36_1)}, 
	{NULL, 64}, 
	{sCyndaquilGfx36_2, ARRAY_COUNT(sCyndaquilGfx36_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_37.4bpp.lz");
static const u8 sCyndaquilGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_37_1.4bpp.lz");
static const u8 sCyndaquilGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_37_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites37[] = {
	{NULL, 32}, 
	{sCyndaquilGfx37, ARRAY_COUNT(sCyndaquilGfx37)}, 
	{NULL, 32}, 
	{sCyndaquilGfx37_1, ARRAY_COUNT(sCyndaquilGfx37_1)}, 
	{NULL, 32}, 
	{sCyndaquilGfx37_2, ARRAY_COUNT(sCyndaquilGfx37_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_38.4bpp.lz");
static const u8 sCyndaquilGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_38_1.4bpp.lz");
static const u8 sCyndaquilGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_38_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites38[] = {
	{sCyndaquilGfx38, ARRAY_COUNT(sCyndaquilGfx38)}, 
	{NULL, 64}, 
	{sCyndaquilGfx38_1, ARRAY_COUNT(sCyndaquilGfx38_1)}, 
	{NULL, 64}, 
	{sCyndaquilGfx38_2, ARRAY_COUNT(sCyndaquilGfx38_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_39.4bpp.lz");
static const u8 sCyndaquilGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_39_1.4bpp.lz");
static const u8 sCyndaquilGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_39_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites39[] = {
	{NULL, 32}, 
	{sCyndaquilGfx39, ARRAY_COUNT(sCyndaquilGfx39)}, 
	{NULL, 32}, 
	{sCyndaquilGfx39_1, ARRAY_COUNT(sCyndaquilGfx39_1)}, 
	{NULL, 32}, 
	{sCyndaquilGfx39_2, ARRAY_COUNT(sCyndaquilGfx39_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_40.4bpp.lz");
static const u8 sCyndaquilGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_40_1.4bpp.lz");
static const u8 sCyndaquilGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_40_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites40[] = {
	{NULL, 32}, 
	{sCyndaquilGfx40, ARRAY_COUNT(sCyndaquilGfx40)}, 
	{NULL, 32}, 
	{sCyndaquilGfx40_1, ARRAY_COUNT(sCyndaquilGfx40_1)}, 
	{NULL, 32}, 
	{sCyndaquilGfx40_2, ARRAY_COUNT(sCyndaquilGfx40_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_41.4bpp.lz");
static const u8 sCyndaquilGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_41_1.4bpp.lz");
static const u8 sCyndaquilGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_41_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites41[] = {
	{sCyndaquilGfx41, ARRAY_COUNT(sCyndaquilGfx41)}, 
	{NULL, 64}, 
	{sCyndaquilGfx41_1, ARRAY_COUNT(sCyndaquilGfx41_1)}, 
	{NULL, 32}, 
	{sCyndaquilGfx41_2, ARRAY_COUNT(sCyndaquilGfx41_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_42.4bpp.lz");
static const u8 sCyndaquilGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_42_1.4bpp.lz");
static const u8 sCyndaquilGfx42_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_42_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites42[] = {
	{NULL, 32}, 
	{sCyndaquilGfx42, ARRAY_COUNT(sCyndaquilGfx42)}, 
	{NULL, 32}, 
	{sCyndaquilGfx42_1, ARRAY_COUNT(sCyndaquilGfx42_1)}, 
	{NULL, 32}, 
	{sCyndaquilGfx42_2, ARRAY_COUNT(sCyndaquilGfx42_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_43.4bpp.lz");
static const u8 sCyndaquilGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_43_1.4bpp.lz");
static const u8 sCyndaquilGfx43_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_43_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites43[] = {
	{sCyndaquilGfx43, ARRAY_COUNT(sCyndaquilGfx43)}, 
	{NULL, 64}, 
	{sCyndaquilGfx43_1, ARRAY_COUNT(sCyndaquilGfx43_1)}, 
	{NULL, 32}, 
	{sCyndaquilGfx43_2, ARRAY_COUNT(sCyndaquilGfx43_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_44.4bpp.lz");
static const ax_sprite sCyndaquilSprites44[] = {
	{sCyndaquilGfx44, ARRAY_COUNT(sCyndaquilGfx44)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_45.4bpp.lz");
static const u8 sCyndaquilGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_45_1.4bpp.lz");
static const u8 sCyndaquilGfx45_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_45_2.4bpp.lz");
static const ax_sprite sCyndaquilSprites45[] = {
	{sCyndaquilGfx45, ARRAY_COUNT(sCyndaquilGfx45)}, 
	{NULL, 64}, 
	{sCyndaquilGfx45_1, ARRAY_COUNT(sCyndaquilGfx45_1)}, 
	{NULL, 64}, 
	{sCyndaquilGfx45_2, ARRAY_COUNT(sCyndaquilGfx45_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_46.4bpp.lz");
static const ax_sprite sCyndaquilSprites46[] = {
	{sCyndaquilGfx46, ARRAY_COUNT(sCyndaquilGfx46)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_47.4bpp.lz");
static const ax_sprite sCyndaquilSprites47[] = {
	{sCyndaquilGfx47, ARRAY_COUNT(sCyndaquilGfx47)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_48.4bpp.lz");
static const ax_sprite sCyndaquilSprites48[] = {
	{sCyndaquilGfx48, ARRAY_COUNT(sCyndaquilGfx48)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_49.4bpp.lz");
static const ax_sprite sCyndaquilSprites49[] = {
	{sCyndaquilGfx49, ARRAY_COUNT(sCyndaquilGfx49)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_50.4bpp.lz");
static const ax_sprite sCyndaquilSprites50[] = {
	{sCyndaquilGfx50, ARRAY_COUNT(sCyndaquilGfx50)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_51.4bpp.lz");
static const ax_sprite sCyndaquilSprites51[] = {
	{sCyndaquilGfx51, ARRAY_COUNT(sCyndaquilGfx51)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_52.4bpp.lz");
static const ax_sprite sCyndaquilSprites52[] = {
	{sCyndaquilGfx52, ARRAY_COUNT(sCyndaquilGfx52)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_53.4bpp.lz");
static const ax_sprite sCyndaquilSprites53[] = {
	{sCyndaquilGfx53, ARRAY_COUNT(sCyndaquilGfx53)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_54.4bpp.lz");
static const ax_sprite sCyndaquilSprites54[] = {
	{sCyndaquilGfx54, ARRAY_COUNT(sCyndaquilGfx54)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_55.4bpp.lz");
static const ax_sprite sCyndaquilSprites55[] = {
	{sCyndaquilGfx55, ARRAY_COUNT(sCyndaquilGfx55)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_56.4bpp.lz");
static const ax_sprite sCyndaquilSprites56[] = {
	{sCyndaquilGfx56, ARRAY_COUNT(sCyndaquilGfx56)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_57.4bpp.lz");
static const ax_sprite sCyndaquilSprites57[] = {
	{sCyndaquilGfx57, ARRAY_COUNT(sCyndaquilGfx57)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_58.4bpp.lz");
static const ax_sprite sCyndaquilSprites58[] = {
	{sCyndaquilGfx58, ARRAY_COUNT(sCyndaquilGfx58)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_59.4bpp.lz");
static const ax_sprite sCyndaquilSprites59[] = {
	{sCyndaquilGfx59, ARRAY_COUNT(sCyndaquilGfx59)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_60.4bpp.lz");
static const ax_sprite sCyndaquilSprites60[] = {
	{sCyndaquilGfx60, ARRAY_COUNT(sCyndaquilGfx60)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_61.4bpp.lz");
static const ax_sprite sCyndaquilSprites61[] = {
	{sCyndaquilGfx61, ARRAY_COUNT(sCyndaquilGfx61)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_62.4bpp.lz");
static const ax_sprite sCyndaquilSprites62[] = {
	{sCyndaquilGfx62, ARRAY_COUNT(sCyndaquilGfx62)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_63.4bpp.lz");
static const ax_sprite sCyndaquilSprites63[] = {
	{sCyndaquilGfx63, ARRAY_COUNT(sCyndaquilGfx63)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_64.4bpp.lz");
static const ax_sprite sCyndaquilSprites64[] = {
	{sCyndaquilGfx64, ARRAY_COUNT(sCyndaquilGfx64)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_65.4bpp.lz");
static const ax_sprite sCyndaquilSprites65[] = {
	{sCyndaquilGfx65, ARRAY_COUNT(sCyndaquilGfx65)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_66.4bpp.lz");
static const ax_sprite sCyndaquilSprites66[] = {
	{sCyndaquilGfx66, ARRAY_COUNT(sCyndaquilGfx66)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_67.4bpp.lz");
static const ax_sprite sCyndaquilSprites67[] = {
	{sCyndaquilGfx67, ARRAY_COUNT(sCyndaquilGfx67)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_68.4bpp.lz");
static const ax_sprite sCyndaquilSprites68[] = {
	{sCyndaquilGfx68, ARRAY_COUNT(sCyndaquilGfx68)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_69.4bpp.lz");
static const ax_sprite sCyndaquilSprites69[] = {
	{sCyndaquilGfx69, ARRAY_COUNT(sCyndaquilGfx69)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_70.4bpp.lz");
static const ax_sprite sCyndaquilSprites70[] = {
	{sCyndaquilGfx70, ARRAY_COUNT(sCyndaquilGfx70)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_71.4bpp.lz");
static const ax_sprite sCyndaquilSprites71[] = {
	{sCyndaquilGfx71, ARRAY_COUNT(sCyndaquilGfx71)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx72[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_72.4bpp.lz");
static const ax_sprite sCyndaquilSprites72[] = {
	{sCyndaquilGfx72, ARRAY_COUNT(sCyndaquilGfx72)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx73[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_73.4bpp.lz");
static const ax_sprite sCyndaquilSprites73[] = {
	{sCyndaquilGfx73, ARRAY_COUNT(sCyndaquilGfx73)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx74[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_74.4bpp.lz");
static const ax_sprite sCyndaquilSprites74[] = {
	{sCyndaquilGfx74, ARRAY_COUNT(sCyndaquilGfx74)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx75[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_75.4bpp.lz");
static const ax_sprite sCyndaquilSprites75[] = {
	{sCyndaquilGfx75, ARRAY_COUNT(sCyndaquilGfx75)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx76[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_76.4bpp.lz");
static const ax_sprite sCyndaquilSprites76[] = {
	{sCyndaquilGfx76, ARRAY_COUNT(sCyndaquilGfx76)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx77[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_77.4bpp.lz");
static const ax_sprite sCyndaquilSprites77[] = {
	{sCyndaquilGfx77, ARRAY_COUNT(sCyndaquilGfx77)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx78[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_78.4bpp.lz");
static const ax_sprite sCyndaquilSprites78[] = {
	{sCyndaquilGfx78, ARRAY_COUNT(sCyndaquilGfx78)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx79[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_79.4bpp.lz");
static const ax_sprite sCyndaquilSprites79[] = {
	{sCyndaquilGfx79, ARRAY_COUNT(sCyndaquilGfx79)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx80[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_80.4bpp.lz");
static const ax_sprite sCyndaquilSprites80[] = {
	{sCyndaquilGfx80, ARRAY_COUNT(sCyndaquilGfx80)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx81[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_81.4bpp.lz");
static const ax_sprite sCyndaquilSprites81[] = {
	{sCyndaquilGfx81, ARRAY_COUNT(sCyndaquilGfx81)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx82[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_82.4bpp.lz");
static const ax_sprite sCyndaquilSprites82[] = {
	{sCyndaquilGfx82, ARRAY_COUNT(sCyndaquilGfx82)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx83[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_83.4bpp.lz");
static const ax_sprite sCyndaquilSprites83[] = {
	{sCyndaquilGfx83, ARRAY_COUNT(sCyndaquilGfx83)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx84[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_84.4bpp.lz");
static const ax_sprite sCyndaquilSprites84[] = {
	{sCyndaquilGfx84, ARRAY_COUNT(sCyndaquilGfx84)}, 
	{NULL, 0}
};
static const u8 sCyndaquilGfx85[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cyndaquil/sprite_85.4bpp.lz");
static const ax_sprite sCyndaquilSprites85[] = {
	{sCyndaquilGfx85, ARRAY_COUNT(sCyndaquilGfx85)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesCyndaquil[] = {
	sCyndaquilPose1,
	sCyndaquilPose2,
	sCyndaquilPose3,
	sCyndaquilPose4,
	sCyndaquilPose5,
	sCyndaquilPose6,
	sCyndaquilPose7,
	sCyndaquilPose8,
	sCyndaquilPose9,
	sCyndaquilPose10,
	sCyndaquilPose11,
	sCyndaquilPose12,
	sCyndaquilPose13,
	sCyndaquilPose14,
	sCyndaquilPose15,
	sCyndaquilPose16,
	sCyndaquilPose17,
	sCyndaquilPose18,
	sCyndaquilPose19,
	sCyndaquilPose20,
	sCyndaquilPose21,
	sCyndaquilPose22,
	sCyndaquilPose23,
	sCyndaquilPose24,
	sCyndaquilPose25,
	sCyndaquilPose26,
	sCyndaquilPose27,
	sCyndaquilPose28,
	sCyndaquilPose29,
	sCyndaquilPose30,
	sCyndaquilPose31,
	sCyndaquilPose32,
	sCyndaquilPose33,
	sCyndaquilPose34,
	sCyndaquilPose35,
	sCyndaquilPose36,
	sCyndaquilPose37,
	sCyndaquilPose38,
	sCyndaquilPose39,
	sCyndaquilPose40,
	sCyndaquilPose41,
	sCyndaquilPose42,
	sCyndaquilPose43,
	sCyndaquilPose44,
	sCyndaquilPose45,
	sCyndaquilPose46,
	sCyndaquilPose47,
	sCyndaquilPose48,
	sCyndaquilPose25,
	sCyndaquilPose26,
	sCyndaquilPose27,
	sCyndaquilPose28,
	sCyndaquilPose29,
	sCyndaquilPose30,
	sCyndaquilPose31,
	sCyndaquilPose32,
	sCyndaquilPose33,
	sCyndaquilPose34,
	sCyndaquilPose35,
	sCyndaquilPose36,
	sCyndaquilPose37,
	sCyndaquilPose38,
	sCyndaquilPose39,
	sCyndaquilPose40,
	sCyndaquilPose41,
	sCyndaquilPose42,
	sCyndaquilPose43,
	sCyndaquilPose44,
	sCyndaquilPose45,
	sCyndaquilPose46,
	sCyndaquilPose47,
	sCyndaquilPose48,
	sCyndaquilPose1,
	sCyndaquilPose2,
	sCyndaquilPose3,
	sCyndaquilPose76,
	sCyndaquilPose77,
	sCyndaquilPose78,
	sCyndaquilPose79,
	sCyndaquilPose80,
	sCyndaquilPose81,
	sCyndaquilPose82,
	sCyndaquilPose83,
	sCyndaquilPose84,
	sCyndaquilPose85,
	sCyndaquilPose86,
	sCyndaquilPose87,
	sCyndaquilPose88,
	sCyndaquilPose89,
	sCyndaquilPose90,
	sCyndaquilPose10,
	sCyndaquilPose11,
	sCyndaquilPose12,
	sCyndaquilPose94,
	sCyndaquilPose95,
	sCyndaquilPose96,
	sCyndaquilPose13,
	sCyndaquilPose14,
	sCyndaquilPose15,
	sCyndaquilPose100,
	sCyndaquilPose101,
	sCyndaquilPose102,
	sCyndaquilPose16,
	sCyndaquilPose17,
	sCyndaquilPose18,
	sCyndaquilPose106,
	sCyndaquilPose107,
	sCyndaquilPose108,
	sCyndaquilPose19,
	sCyndaquilPose20,
	sCyndaquilPose21,
	sCyndaquilPose112,
	sCyndaquilPose113,
	sCyndaquilPose114,
	sCyndaquilPose115,
	sCyndaquilPose116,
	sCyndaquilPose117,
	sCyndaquilPose118,
	sCyndaquilPose119,
	sCyndaquilPose120,
	sCyndaquilPose1,
	sCyndaquilPose22,
	sCyndaquilPose19,
	sCyndaquilPose16,
	sCyndaquilPose13,
	sCyndaquilPose10,
	sCyndaquilPose7,
	sCyndaquilPose4,
	sCyndaquilPose129,
	sCyndaquilPose130,
	sCyndaquilPose131,
	sCyndaquilPose132,
	sCyndaquilPose133,
	sCyndaquilPose134,
	sCyndaquilPose135,
	sCyndaquilPose136,
	sCyndaquilPose137,
	sCyndaquilPose138,
	sCyndaquilPose1,
	sCyndaquilPose78,
	sCyndaquilPose4,
	sCyndaquilPose142,
	sCyndaquilPose7,
	sCyndaquilPose144,
	sCyndaquilPose10,
	sCyndaquilPose96,
	sCyndaquilPose13,
	sCyndaquilPose102,
	sCyndaquilPose16,
	sCyndaquilPose108,
	sCyndaquilPose19,
	sCyndaquilPose114,
	sCyndaquilPose22,
	sCyndaquilPose154,
	sCyndaquilPose1,
	sCyndaquilPose22,
	sCyndaquilPose19,
	sCyndaquilPose16,
	sCyndaquilPose13,
	sCyndaquilPose10,
	sCyndaquilPose7,
	sCyndaquilPose4,
	sCyndaquilPose78,
	sCyndaquilPose142,
	sCyndaquilPose144,
	sCyndaquilPose96,
	sCyndaquilPose102,
	sCyndaquilPose108,
	sCyndaquilPose114,
	sCyndaquilPose154,
	sCyndaquilPose1,
	sCyndaquilPose78,
	sCyndaquilPose4,
	sCyndaquilPose142,
	sCyndaquilPose7,
	sCyndaquilPose144,
	sCyndaquilPose10,
	sCyndaquilPose96,
	sCyndaquilPose13,
	sCyndaquilPose102,
	sCyndaquilPose16,
	sCyndaquilPose108,
	sCyndaquilPose19,
	sCyndaquilPose114,
	sCyndaquilPose22,
	sCyndaquilPose154,
	sCyndaquilPose78,
	sCyndaquilPose154,
	sCyndaquilPose114,
	sCyndaquilPose108,
	sCyndaquilPose102,
	sCyndaquilPose96,
	sCyndaquilPose144,
	sCyndaquilPose142,
	sCyndaquilPose1,
	sCyndaquilPose22,
	sCyndaquilPose19,
	sCyndaquilPose16,
	sCyndaquilPose13,
	sCyndaquilPose10,
	sCyndaquilPose7,
	sCyndaquilPose4,
	sCyndaquilPose203,
	sCyndaquilPose204,
	sCyndaquilPose205,
	sCyndaquilPose206,
	sCyndaquilPose203,
	sCyndaquilPose208,
	sCyndaquilPose209,
	sCyndaquilPose210,
	sCyndaquilPose7,
	sCyndaquilPose13,
	sCyndaquilPose213,
	sCyndaquilPose214,
	sCyndaquilPose215,
	sCyndaquilPose216,
	sCyndaquilPose217,
	sCyndaquilPose218,
	sCyndaquilPose219,
	sCyndaquilPose220,
	sCyndaquilPose221,
	sCyndaquilPose222,
	sCyndaquilPose223,
	sCyndaquilPose223,
	sCyndaquilPose225,
	sCyndaquilPose226,
	sCyndaquilPose227,
	sCyndaquilPose19,
	sCyndaquilPose229,
	sCyndaquilPose230,
	sCyndaquilPose13,
	sCyndaquilPose232,
	sCyndaquilPose233,
	sCyndaquilPose1,
	sCyndaquilPose215,
	sCyndaquilPose236,
	sCyndaquilPose19,
	sCyndaquilPose238,
	sCyndaquilPose7,
	sCyndaquilPose240,
	sCyndaquilPose13,
	sCyndaquilPose242,
	sCyndaquilPose243,
	sCyndaquilPose244,
	sCyndaquilPose245,
	sCyndaquilPose246,
	sCyndaquilPose247,
	sCyndaquilPose248,
	sCyndaquilPose249,
	sCyndaquilPose250,
	sCyndaquilPose251,
	sCyndaquilPose252,
	sCyndaquilPose253,
	sCyndaquilPose203,
	sCyndaquilPose204,
	sCyndaquilPose205,
	sCyndaquilPose206,
	sCyndaquilPose203,
	sCyndaquilPose204,
	sCyndaquilPose205,
	sCyndaquilPose206,
};

static const struct PositionSets sAxPositionsCyndaquil[] = {
	[0] = { .set = { {-1, -9}, {-4, -5}, {2, -5}, {-1, -6} } },
	[1] = { .set = { {0, -8}, {-3, -4}, {3, -4}, {-1, -5} } },
	[2] = { .set = { {-2, -8}, {-5, -4}, {1, -4}, {-1, -5} } },
	[3] = { .set = { {1, -8}, {2, -6}, {-4, -5}, {-3, -5} } },
	[4] = { .set = { {1, -7}, {1, -4}, {-5, -4}, {-3, -4} } },
	[5] = { .set = { {2, -7}, {3, -6}, {-3, -4}, {-5, -4} } },
	[6] = { .set = { {3, -9}, {1, -6}, {0, -4}, {-5, -6} } },
	[7] = { .set = { {3, -8}, {1, -5}, {-1, -3}, {-5, -5} } },
	[8] = { .set = { {3, -8}, {1, -6}, {1, -4}, {-5, -5} } },
	[9] = { .set = { {2, -11}, {-4, -8}, {2, -5}, {-5, -5} } },
	[10] = { .set = { {3, -10}, {-4, -6}, {1, -3}, {-6, -4} } },
	[11] = { .set = { {2, -10}, {-5, -8}, {2, -5}, {-6, -4} } },
	[12] = { .set = { {-1, -15}, {2, -6}, {-4, -6}, {-1, -5} } },
	[13] = { .set = { {-2, -14}, {2, -6}, {-4, -5}, {-1, -4} } },
	[14] = { .set = { {0, -14}, {2, -5}, {-3, -6}, {-1, -4} } },
	[15] = { .set = { {-4, -11}, {2, -8}, {-4, -5}, {3, -5} } },
	[16] = { .set = { {-5, -10}, {2, -6}, {-3, -3}, {4, -4} } },
	[17] = { .set = { {-4, -10}, {3, -8}, {-4, -5}, {4, -4} } },
	[18] = { .set = { {-5, -9}, {-3, -6}, {-2, -4}, {3, -6} } },
	[19] = { .set = { {-5, -8}, {-3, -5}, {-1, -3}, {3, -5} } },
	[20] = { .set = { {-5, -8}, {-3, -6}, {-3, -4}, {3, -5} } },
	[21] = { .set = { {-3, -8}, {-4, -6}, {2, -5}, {1, -5} } },
	[22] = { .set = { {-3, -7}, {-3, -4}, {3, -4}, {1, -4} } },
	[23] = { .set = { {-4, -7}, {-5, -6}, {1, -4}, {3, -4} } },
	[24] = { .set = { {-1, -9}, {-4, -5}, {2, -5}, {-1, -6} } },
	[25] = { .set = { {0, -8}, {-3, -4}, {3, -4}, {-1, -5} } },
	[26] = { .set = { {-2, -8}, {-5, -4}, {1, -4}, {-1, -5} } },
	[27] = { .set = { {1, -8}, {2, -6}, {-4, -5}, {-3, -5} } },
	[28] = { .set = { {1, -7}, {1, -4}, {-5, -4}, {-3, -4} } },
	[29] = { .set = { {2, -7}, {3, -6}, {-3, -4}, {-5, -4} } },
	[30] = { .set = { {3, -9}, {1, -6}, {0, -4}, {-5, -6} } },
	[31] = { .set = { {3, -8}, {1, -5}, {-1, -3}, {-5, -5} } },
	[32] = { .set = { {3, -8}, {1, -6}, {1, -4}, {-5, -5} } },
	[33] = { .set = { {2, -11}, {-4, -8}, {2, -5}, {-5, -5} } },
	[34] = { .set = { {3, -10}, {-4, -6}, {1, -3}, {-6, -4} } },
	[35] = { .set = { {2, -10}, {-5, -8}, {2, -5}, {-6, -4} } },
	[36] = { .set = { {-1, -15}, {2, -6}, {-4, -6}, {-1, -5} } },
	[37] = { .set = { {-2, -14}, {2, -6}, {-4, -5}, {-1, -4} } },
	[38] = { .set = { {0, -14}, {2, -5}, {-3, -6}, {-1, -4} } },
	[39] = { .set = { {-4, -11}, {2, -8}, {-4, -5}, {3, -5} } },
	[40] = { .set = { {-5, -10}, {2, -6}, {-3, -3}, {4, -4} } },
	[41] = { .set = { {-4, -10}, {3, -8}, {-4, -5}, {4, -4} } },
	[42] = { .set = { {-5, -9}, {-3, -6}, {-2, -4}, {3, -6} } },
	[43] = { .set = { {-5, -8}, {-3, -5}, {-1, -3}, {3, -5} } },
	[44] = { .set = { {-5, -8}, {-3, -6}, {-3, -4}, {3, -5} } },
	[45] = { .set = { {-3, -8}, {-4, -6}, {2, -5}, {1, -5} } },
	[46] = { .set = { {-3, -7}, {-3, -4}, {3, -4}, {1, -4} } },
	[47] = { .set = { {-4, -7}, {-5, -6}, {1, -4}, {3, -4} } },
	[48] = { .set = { {-1, -9}, {-4, -5}, {2, -5}, {-1, -6} } },
	[49] = { .set = { {0, -8}, {-3, -4}, {3, -4}, {-1, -5} } },
	[50] = { .set = { {-2, -8}, {-5, -4}, {1, -4}, {-1, -5} } },
	[51] = { .set = { {1, -8}, {2, -6}, {-4, -5}, {-3, -5} } },
	[52] = { .set = { {1, -7}, {1, -4}, {-5, -4}, {-3, -4} } },
	[53] = { .set = { {2, -7}, {3, -6}, {-3, -4}, {-5, -4} } },
	[54] = { .set = { {3, -9}, {1, -6}, {0, -4}, {-5, -6} } },
	[55] = { .set = { {3, -8}, {1, -5}, {-1, -3}, {-5, -5} } },
	[56] = { .set = { {3, -8}, {1, -6}, {1, -4}, {-5, -5} } },
	[57] = { .set = { {2, -11}, {-4, -8}, {2, -5}, {-5, -5} } },
	[58] = { .set = { {3, -10}, {-4, -6}, {1, -3}, {-6, -4} } },
	[59] = { .set = { {2, -10}, {-5, -8}, {2, -5}, {-6, -4} } },
	[60] = { .set = { {-1, -15}, {2, -6}, {-4, -6}, {-1, -5} } },
	[61] = { .set = { {-2, -14}, {2, -6}, {-4, -5}, {-1, -4} } },
	[62] = { .set = { {0, -14}, {2, -5}, {-3, -6}, {-1, -4} } },
	[63] = { .set = { {-4, -11}, {2, -8}, {-4, -5}, {3, -5} } },
	[64] = { .set = { {-5, -10}, {2, -6}, {-3, -3}, {4, -4} } },
	[65] = { .set = { {-4, -10}, {3, -8}, {-4, -5}, {4, -4} } },
	[66] = { .set = { {-5, -9}, {-3, -6}, {-2, -4}, {3, -6} } },
	[67] = { .set = { {-5, -8}, {-3, -5}, {-1, -3}, {3, -5} } },
	[68] = { .set = { {-5, -8}, {-3, -6}, {-3, -4}, {3, -5} } },
	[69] = { .set = { {-3, -8}, {-4, -6}, {2, -5}, {1, -5} } },
	[70] = { .set = { {-3, -7}, {-3, -4}, {3, -4}, {1, -4} } },
	[71] = { .set = { {-4, -7}, {-5, -6}, {1, -4}, {3, -4} } },
	[72] = { .set = { {-1, -9}, {-4, -5}, {2, -5}, {-1, -6} } },
	[73] = { .set = { {0, -8}, {-3, -4}, {3, -4}, {-1, -5} } },
	[74] = { .set = { {-2, -8}, {-5, -4}, {1, -4}, {-1, -5} } },
	[75] = { .set = { {-1, -7}, {-6, -4}, {4, -4}, {-1, -5} } },
	[76] = { .set = { {-1, -7}, {-6, -4}, {4, -4}, {-1, -5} } },
	[77] = { .set = { {-1, -7}, {-6, -4}, {4, -4}, {-1, -5} } },
	[78] = { .set = { {3, -8}, {4, -6}, {-2, -5}, {-1, -5} } },
	[79] = { .set = { {3, -7}, {3, -4}, {-3, -4}, {-1, -4} } },
	[80] = { .set = { {4, -7}, {5, -6}, {-1, -4}, {-3, -4} } },
	[81] = { .set = { {4, -6}, {6, -5}, {-2, -3}, {-1, -6} } },
	[82] = { .set = { {4, -6}, {6, -5}, {-2, -3}, {-1, -6} } },
	[83] = { .set = { {4, -6}, {6, -5}, {-2, -3}, {-1, -6} } },
	[84] = { .set = { {5, -9}, {3, -6}, {2, -4}, {-3, -6} } },
	[85] = { .set = { {5, -8}, {3, -5}, {1, -3}, {-3, -5} } },
	[86] = { .set = { {5, -8}, {3, -6}, {3, -4}, {-3, -5} } },
	[87] = { .set = { {6, -7}, {4, -4}, {2, -2}, {-1, -5} } },
	[88] = { .set = { {6, -7}, {4, -4}, {2, -2}, {-1, -5} } },
	[89] = { .set = { {6, -7}, {4, -4}, {2, -2}, {-1, -5} } },
	[90] = { .set = { {2, -11}, {-4, -8}, {2, -5}, {-5, -5} } },
	[91] = { .set = { {3, -10}, {-4, -6}, {1, -3}, {-6, -4} } },
	[92] = { .set = { {2, -10}, {-5, -8}, {2, -5}, {-6, -4} } },
	[93] = { .set = { {3, -9}, {-3, -6}, {3, -3}, {-4, -4} } },
	[94] = { .set = { {3, -9}, {-3, -6}, {3, -3}, {-4, -4} } },
	[95] = { .set = { {3, -9}, {-3, -6}, {3, -3}, {-4, -4} } },
	[96] = { .set = { {-1, -15}, {2, -6}, {-4, -6}, {-1, -5} } },
	[97] = { .set = { {-2, -14}, {2, -6}, {-4, -5}, {-1, -4} } },
	[98] = { .set = { {0, -14}, {2, -5}, {-3, -6}, {-1, -4} } },
	[99] = { .set = { {-1, -13}, {2, -5}, {-4, -5}, {-1, -4} } },
	[100] = { .set = { {-1, -13}, {2, -5}, {-4, -5}, {-1, -4} } },
	[101] = { .set = { {-1, -13}, {2, -5}, {-4, -5}, {-1, -4} } },
	[102] = { .set = { {-4, -11}, {2, -8}, {-4, -5}, {3, -5} } },
	[103] = { .set = { {-5, -10}, {2, -6}, {-3, -3}, {4, -4} } },
	[104] = { .set = { {-4, -10}, {3, -8}, {-4, -5}, {4, -4} } },
	[105] = { .set = { {-5, -9}, {1, -6}, {-5, -3}, {2, -4} } },
	[106] = { .set = { {-5, -9}, {1, -6}, {-5, -3}, {2, -4} } },
	[107] = { .set = { {-5, -9}, {1, -6}, {-5, -3}, {2, -4} } },
	[108] = { .set = { {-5, -9}, {-3, -6}, {-2, -4}, {3, -6} } },
	[109] = { .set = { {-5, -8}, {-3, -5}, {-1, -3}, {3, -5} } },
	[110] = { .set = { {-5, -8}, {-3, -6}, {-3, -4}, {3, -5} } },
	[111] = { .set = { {-6, -7}, {-4, -4}, {-2, -2}, {1, -5} } },
	[112] = { .set = { {-6, -7}, {-4, -4}, {-2, -2}, {1, -5} } },
	[113] = { .set = { {-6, -7}, {-4, -4}, {-2, -2}, {1, -5} } },
	[114] = { .set = { {-4, -8}, {-5, -6}, {1, -5}, {0, -5} } },
	[115] = { .set = { {-4, -7}, {-4, -4}, {2, -4}, {0, -4} } },
	[116] = { .set = { {-5, -7}, {-6, -6}, {0, -4}, {2, -4} } },
	[117] = { .set = { {-5, -6}, {-7, -5}, {1, -3}, {0, -6} } },
	[118] = { .set = { {-5, -6}, {-7, -5}, {1, -3}, {0, -6} } },
	[119] = { .set = { {-5, -6}, {-7, -5}, {1, -3}, {0, -6} } },
	[120] = { .set = { {-1, -9}, {-4, -5}, {2, -5}, {-1, -6} } },
	[121] = { .set = { {-3, -8}, {-4, -6}, {2, -5}, {1, -5} } },
	[122] = { .set = { {-5, -9}, {-3, -6}, {-2, -4}, {3, -6} } },
	[123] = { .set = { {-4, -11}, {2, -8}, {-4, -5}, {3, -5} } },
	[124] = { .set = { {-1, -15}, {2, -6}, {-4, -6}, {-1, -5} } },
	[125] = { .set = { {2, -11}, {-4, -8}, {2, -5}, {-5, -5} } },
	[126] = { .set = { {3, -9}, {1, -6}, {0, -4}, {-5, -6} } },
	[127] = { .set = { {1, -8}, {2, -6}, {-4, -5}, {-3, -5} } },
	[128] = { .set = { {-4, -6}, {-4, -3}, {0, -3}, {0, -5} } },
	[129] = { .set = { {-5, -5}, {-4, -3}, {0, -2}, {-1, -5} } },
	[130] = { .set = { {-1, -8}, {-4, -9}, {2, -9}, {-1, -6} } },
	[131] = { .set = { {3, -6}, {3, -8}, {-3, -6}, {-1, -6} } },
	[132] = { .set = { {2, -6}, {1, -9}, {0, -7}, {-5, -5} } },
	[133] = { .set = { {2, -8}, {-4, -9}, {0, -8}, {-6, -4} } },
	[134] = { .set = { {-1, -11}, {4, -8}, {-6, -8}, {-1, -4} } },
	[135] = { .set = { {-4, -8}, {2, -9}, {-2, -8}, {4, -4} } },
	[136] = { .set = { {-3, -6}, {-2, -9}, {-1, -7}, {4, -5} } },
	[137] = { .set = { {-4, -6}, {-4, -8}, {2, -6}, {0, -6} } },
	[138] = { .set = { {-1, -9}, {-4, -5}, {2, -5}, {-1, -6} } },
	[139] = { .set = { {-1, -7}, {-6, -4}, {4, -4}, {-1, -5} } },
	[140] = { .set = { {1, -8}, {2, -6}, {-4, -5}, {-3, -5} } },
	[141] = { .set = { {2, -6}, {4, -5}, {-4, -3}, {-3, -6} } },
	[142] = { .set = { {3, -9}, {1, -6}, {0, -4}, {-5, -6} } },
	[143] = { .set = { {4, -7}, {2, -4}, {0, -2}, {-3, -5} } },
	[144] = { .set = { {2, -11}, {-4, -8}, {2, -5}, {-5, -5} } },
	[145] = { .set = { {3, -9}, {-3, -6}, {3, -3}, {-4, -4} } },
	[146] = { .set = { {-1, -15}, {2, -6}, {-4, -6}, {-1, -5} } },
	[147] = { .set = { {-1, -13}, {2, -5}, {-4, -5}, {-1, -4} } },
	[148] = { .set = { {-4, -11}, {2, -8}, {-4, -5}, {3, -5} } },
	[149] = { .set = { {-5, -9}, {1, -6}, {-5, -3}, {2, -4} } },
	[150] = { .set = { {-5, -9}, {-3, -6}, {-2, -4}, {3, -6} } },
	[151] = { .set = { {-6, -7}, {-4, -4}, {-2, -2}, {1, -5} } },
	[152] = { .set = { {-3, -8}, {-4, -6}, {2, -5}, {1, -5} } },
	[153] = { .set = { {-4, -6}, {-6, -5}, {2, -3}, {1, -6} } },
	[154] = { .set = { {-1, -9}, {-4, -5}, {2, -5}, {-1, -6} } },
	[155] = { .set = { {-3, -8}, {-4, -6}, {2, -5}, {1, -5} } },
	[156] = { .set = { {-5, -9}, {-3, -6}, {-2, -4}, {3, -6} } },
	[157] = { .set = { {-4, -11}, {2, -8}, {-4, -5}, {3, -5} } },
	[158] = { .set = { {-1, -15}, {2, -6}, {-4, -6}, {-1, -5} } },
	[159] = { .set = { {2, -11}, {-4, -8}, {2, -5}, {-5, -5} } },
	[160] = { .set = { {3, -9}, {1, -6}, {0, -4}, {-5, -6} } },
	[161] = { .set = { {1, -8}, {2, -6}, {-4, -5}, {-3, -5} } },
	[162] = { .set = { {-1, -7}, {-6, -4}, {4, -4}, {-1, -5} } },
	[163] = { .set = { {2, -6}, {4, -5}, {-4, -3}, {-3, -6} } },
	[164] = { .set = { {4, -7}, {2, -4}, {0, -2}, {-3, -5} } },
	[165] = { .set = { {3, -9}, {-3, -6}, {3, -3}, {-4, -4} } },
	[166] = { .set = { {-1, -13}, {2, -5}, {-4, -5}, {-1, -4} } },
	[167] = { .set = { {-5, -9}, {1, -6}, {-5, -3}, {2, -4} } },
	[168] = { .set = { {-6, -7}, {-4, -4}, {-2, -2}, {1, -5} } },
	[169] = { .set = { {-4, -6}, {-6, -5}, {2, -3}, {1, -6} } },
	[170] = { .set = { {-1, -9}, {-4, -5}, {2, -5}, {-1, -6} } },
	[171] = { .set = { {-1, -7}, {-6, -4}, {4, -4}, {-1, -5} } },
	[172] = { .set = { {1, -8}, {2, -6}, {-4, -5}, {-3, -5} } },
	[173] = { .set = { {2, -6}, {4, -5}, {-4, -3}, {-3, -6} } },
	[174] = { .set = { {3, -9}, {1, -6}, {0, -4}, {-5, -6} } },
	[175] = { .set = { {4, -7}, {2, -4}, {0, -2}, {-3, -5} } },
	[176] = { .set = { {2, -11}, {-4, -8}, {2, -5}, {-5, -5} } },
	[177] = { .set = { {3, -9}, {-3, -6}, {3, -3}, {-4, -4} } },
	[178] = { .set = { {-1, -15}, {2, -6}, {-4, -6}, {-1, -5} } },
	[179] = { .set = { {-1, -13}, {2, -5}, {-4, -5}, {-1, -4} } },
	[180] = { .set = { {-4, -11}, {2, -8}, {-4, -5}, {3, -5} } },
	[181] = { .set = { {-5, -9}, {1, -6}, {-5, -3}, {2, -4} } },
	[182] = { .set = { {-5, -9}, {-3, -6}, {-2, -4}, {3, -6} } },
	[183] = { .set = { {-6, -7}, {-4, -4}, {-2, -2}, {1, -5} } },
	[184] = { .set = { {-3, -8}, {-4, -6}, {2, -5}, {1, -5} } },
	[185] = { .set = { {-4, -6}, {-6, -5}, {2, -3}, {1, -6} } },
	[186] = { .set = { {-1, -7}, {-6, -4}, {4, -4}, {-1, -5} } },
	[187] = { .set = { {-4, -6}, {-6, -5}, {2, -3}, {1, -6} } },
	[188] = { .set = { {-6, -7}, {-4, -4}, {-2, -2}, {1, -5} } },
	[189] = { .set = { {-5, -9}, {1, -6}, {-5, -3}, {2, -4} } },
	[190] = { .set = { {-1, -13}, {2, -5}, {-4, -5}, {-1, -4} } },
	[191] = { .set = { {3, -9}, {-3, -6}, {3, -3}, {-4, -4} } },
	[192] = { .set = { {4, -7}, {2, -4}, {0, -2}, {-3, -5} } },
	[193] = { .set = { {2, -6}, {4, -5}, {-4, -3}, {-3, -6} } },
	[194] = { .set = { {-1, -9}, {-4, -5}, {2, -5}, {-1, -6} } },
	[195] = { .set = { {-3, -8}, {-4, -6}, {2, -5}, {1, -5} } },
	[196] = { .set = { {-5, -9}, {-3, -6}, {-2, -4}, {3, -6} } },
	[197] = { .set = { {-4, -11}, {2, -8}, {-4, -5}, {3, -5} } },
	[198] = { .set = { {-1, -15}, {2, -6}, {-4, -6}, {-1, -5} } },
	[199] = { .set = { {2, -11}, {-4, -8}, {2, -5}, {-5, -5} } },
	[200] = { .set = { {3, -9}, {1, -6}, {0, -4}, {-5, -6} } },
	[201] = { .set = { {1, -8}, {2, -6}, {-4, -5}, {-3, -5} } },
	[202] = { .set = { {-3, -8}, {-5, -1}, {-2, -7}, {-1, -4} } },
	[203] = { .set = { {-4, -9}, {-5, -1}, {-2, -7}, {0, -5} } },
	[204] = { .set = { {2, -8}, {4, -1}, {1, -7}, {0, -4} } },
	[205] = { .set = { {3, -9}, {4, -1}, {1, -7}, {-1, -5} } },
	[206] = { .set = { {-3, -8}, {-5, -1}, {-2, -7}, {-1, -4} } },
	[207] = { .set = { {-1, -9}, {-2, -5}, {2, -7}, {0, -4} } },
	[208] = { .set = { {0, -8}, {-1, -3}, {2, -5}, {-4, -5} } },
	[209] = { .set = { {1, -8}, {-1, -4}, {0, -6}, {-5, -6} } },
	[210] = { .set = { {3, -9}, {1, -6}, {0, -4}, {-5, -6} } },
	[211] = { .set = { {-1, -15}, {2, -6}, {-4, -6}, {-1, -5} } },
	[212] = { .set = { {-1, -13}, {6, -5}, {-8, -5}, {-1, -6} } },
	[213] = { .set = { {-1, -11}, {7, -7}, {-9, -7}, {-1, -5} } },
	[214] = { .set = { {-1, -15}, {-8, -11}, {6, -11}, {-1, -8} } },
	[215] = { .set = { {-1, -5}, {-5, -6}, {3, -6}, {-1, -7} } },
	[216] = { .set = { {-1, -5}, {-5, -6}, {3, -6}, {-1, -7} } },
	[217] = { .set = { {-1, -5}, {-5, -6}, {3, -6}, {-1, -7} } },
	[218] = { .set = { {-2, -8}, {-4, -5}, {1, -5}, {-1, -5} } },
	[219] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[220] = { .set = { {1, -9}, {-6, -11}, {6, -6}, {0, -6} } },
	[221] = { .set = { {0, -13}, {5, -5}, {-6, -6}, {-1, -5} } },
	[222] = { .set = { {-2, -14}, {5, -11}, {-8, -6}, {-1, -6} } },
	[223] = { .set = { {-2, -14}, {5, -11}, {-8, -6}, {-1, -6} } },
	[224] = { .set = { {-1, -9}, {-4, -5}, {2, -5}, {-1, -7} } },
	[225] = { .set = { {-1, -8}, {-4, -4}, {2, -4}, {-1, -6} } },
	[226] = { .set = { {-1, -8}, {-4, -4}, {2, -4}, {-1, -6} } },
	[227] = { .set = { {-5, -9}, {-3, -6}, {-2, -4}, {3, -6} } },
	[228] = { .set = { {-4, -11}, {-5, -7}, {1, -6}, {1, -7} } },
	[229] = { .set = { {-1, -14}, {-5, -10}, {6, -5}, {0, -6} } },
	[230] = { .set = { {-1, -15}, {2, -6}, {-4, -6}, {-1, -5} } },
	[231] = { .set = { {-1, -10}, {4, -2}, {-6, -2}, {-1, -3} } },
	[232] = { .set = { {-1, -10}, {4, -2}, {-6, -2}, {-1, -3} } },
	[233] = { .set = { {-1, -9}, {-4, -5}, {2, -5}, {-1, -6} } },
	[234] = { .set = { {-1, -15}, {-8, -11}, {6, -11}, {-1, -8} } },
	[235] = { .set = { {-1, -6}, {-4, -6}, {2, -6}, {-1, -7} } },
	[236] = { .set = { {-5, -9}, {-3, -6}, {-2, -4}, {3, -6} } },
	[237] = { .set = { {-4, -6}, {-3, -5}, {-2, -4}, {1, -7} } },
	[238] = { .set = { {3, -9}, {1, -6}, {0, -4}, {-5, -6} } },
	[239] = { .set = { {2, -6}, {1, -5}, {0, -4}, {-3, -7} } },
	[240] = { .set = { {-1, -15}, {2, -6}, {-4, -6}, {-1, -5} } },
	[241] = { .set = { {-1, -11}, {6, -8}, {-8, -8}, {-1, -4} } },
	[242] = { .set = { {-5, -9}, {3, -7}, {5, -6}, {2, -6} } },
	[243] = { .set = { {-2, -10}, {6, -8}, {2, -7}, {3, -6} } },
	[244] = { .set = { {-6, -9}, {3, -8}, {0, -6}, {2, -5} } },
	[245] = { .set = { {-2, -10}, {-2, -8}, {7, -7}, {2, -7} } },
	[246] = { .set = { {-6, -9}, {-4, -6}, {4, -6}, {1, -6} } },
	[247] = { .set = { {4, -9}, {-4, -7}, {-6, -6}, {-3, -6} } },
	[248] = { .set = { {1, -10}, {-7, -8}, {-3, -7}, {-4, -6} } },
	[249] = { .set = { {5, -9}, {-4, -8}, {-1, -6}, {-3, -5} } },
	[250] = { .set = { {1, -10}, {1, -8}, {-8, -7}, {-3, -7} } },
	[251] = { .set = { {5, -9}, {3, -6}, {-5, -6}, {-2, -6} } },
	[252] = { .set = { {1, -8}, {-2, -9}, {2, -8}, {-4, -5} } },
	[253] = { .set = { {-3, -8}, {-5, -1}, {-2, -7}, {-1, -4} } },
	[254] = { .set = { {-4, -9}, {-5, -1}, {-2, -7}, {0, -5} } },
	[255] = { .set = { {2, -8}, {4, -1}, {1, -7}, {0, -4} } },
	[256] = { .set = { {3, -9}, {4, -1}, {1, -7}, {-1, -5} } },
	[257] = { .set = { {-3, -8}, {-5, -1}, {-2, -7}, {-1, -4} } },
	[258] = { .set = { {-4, -9}, {-5, -1}, {-2, -7}, {0, -5} } },
	[259] = { .set = { {2, -8}, {4, -1}, {1, -7}, {0, -4} } },
	[260] = { .set = { {3, -9}, {4, -1}, {1, -7}, {-1, -5} } },
};

static const ax_anim *const sCyndaquilAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02477),
	AX_ANIM_PTR(gAxSharedAnim_02542),
	AX_ANIM_PTR(gAxSharedAnim_02551),
	AX_ANIM_PTR(gAxSharedAnim_02559),
	AX_ANIM_PTR(gAxSharedAnim_02499),
	AX_ANIM_PTR(gAxSharedAnim_02519),
	AX_ANIM_PTR(gAxSharedAnim_02526),
	AX_ANIM_PTR(gAxSharedAnim_02535),
};

static const ax_anim *const sCyndaquilAnimTable2[] = {
	AX_ANIM_PTR(sCyndaquilAnims_2_1),
	AX_ANIM_PTR(sCyndaquilAnims_2_2),
	AX_ANIM_PTR(sCyndaquilAnims_2_3),
	AX_ANIM_PTR(sCyndaquilAnims_2_4),
	AX_ANIM_PTR(sCyndaquilAnims_2_5),
	AX_ANIM_PTR(sCyndaquilAnims_2_6),
	AX_ANIM_PTR(sCyndaquilAnims_2_7),
	AX_ANIM_PTR(sCyndaquilAnims_2_8),
};

static const ax_anim *const sCyndaquilAnimTable3[] = {
	AX_ANIM_PTR(sCyndaquilAnims_3_1),
	AX_ANIM_PTR(sCyndaquilAnims_3_2),
	AX_ANIM_PTR(sCyndaquilAnims_3_3),
	AX_ANIM_PTR(sCyndaquilAnims_3_4),
	AX_ANIM_PTR(sCyndaquilAnims_3_5),
	AX_ANIM_PTR(sCyndaquilAnims_3_6),
	AX_ANIM_PTR(sCyndaquilAnims_3_7),
	AX_ANIM_PTR(sCyndaquilAnims_3_8),
};

static const ax_anim *const sCyndaquilAnimTable4[] = {
	AX_ANIM_PTR(sCyndaquilAnims_4_1),
	AX_ANIM_PTR(sCyndaquilAnims_4_2),
	AX_ANIM_PTR(sCyndaquilAnims_4_3),
	AX_ANIM_PTR(sCyndaquilAnims_4_4),
	AX_ANIM_PTR(sCyndaquilAnims_4_5),
	AX_ANIM_PTR(sCyndaquilAnims_4_6),
	AX_ANIM_PTR(sCyndaquilAnims_4_7),
	AX_ANIM_PTR(sCyndaquilAnims_4_8),
};

static const ax_anim *const sCyndaquilAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00321),
	AX_ANIM_PTR(gAxSharedAnim_00373),
	AX_ANIM_PTR(gAxSharedAnim_00366),
	AX_ANIM_PTR(gAxSharedAnim_00360),
	AX_ANIM_PTR(gAxSharedAnim_00354),
	AX_ANIM_PTR(gAxSharedAnim_00344),
	AX_ANIM_PTR(gAxSharedAnim_00336),
	AX_ANIM_PTR(gAxSharedAnim_00327),
};

static const ax_anim *const sCyndaquilAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
};

static const ax_anim *const sCyndaquilAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00396),
	AX_ANIM_PTR(gAxSharedAnim_00402),
	AX_ANIM_PTR(gAxSharedAnim_00413),
	AX_ANIM_PTR(gAxSharedAnim_00422),
	AX_ANIM_PTR(gAxSharedAnim_00434),
	AX_ANIM_PTR(gAxSharedAnim_00442),
	AX_ANIM_PTR(gAxSharedAnim_00451),
	AX_ANIM_PTR(gAxSharedAnim_00461),
};

static const ax_anim *const sCyndaquilAnimTable8[] = {
	AX_ANIM_PTR(sCyndaquilAnims_8_1),
	AX_ANIM_PTR(sCyndaquilAnims_8_2),
	AX_ANIM_PTR(sCyndaquilAnims_8_3),
	AX_ANIM_PTR(sCyndaquilAnims_8_4),
	AX_ANIM_PTR(sCyndaquilAnims_8_5),
	AX_ANIM_PTR(sCyndaquilAnims_8_6),
	AX_ANIM_PTR(sCyndaquilAnims_8_7),
	AX_ANIM_PTR(sCyndaquilAnims_8_8),
};

static const ax_anim *const sCyndaquilAnimTable9[] = {
	AX_ANIM_PTR(sCyndaquilAnims_9_1),
	AX_ANIM_PTR(sCyndaquilAnims_9_2),
	AX_ANIM_PTR(sCyndaquilAnims_9_3),
	AX_ANIM_PTR(sCyndaquilAnims_9_4),
	AX_ANIM_PTR(sCyndaquilAnims_9_5),
	AX_ANIM_PTR(sCyndaquilAnims_9_6),
	AX_ANIM_PTR(sCyndaquilAnims_9_7),
	AX_ANIM_PTR(sCyndaquilAnims_9_8),
};

static const ax_anim *const sCyndaquilAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00705),
	AX_ANIM_PTR(gAxSharedAnim_00714),
	AX_ANIM_PTR(gAxSharedAnim_00725),
	AX_ANIM_PTR(gAxSharedAnim_00737),
	AX_ANIM_PTR(gAxSharedAnim_00750),
	AX_ANIM_PTR(gAxSharedAnim_00760),
	AX_ANIM_PTR(gAxSharedAnim_00772),
	AX_ANIM_PTR(gAxSharedAnim_00781),
};

static const ax_anim *const sCyndaquilAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_00791),
	AX_ANIM_PTR(sCyndaquilAnims_11_2),
	AX_ANIM_PTR(gAxSharedAnim_00843),
	AX_ANIM_PTR(sCyndaquilAnims_11_4),
	AX_ANIM_PTR(gAxSharedAnim_00898),
	AX_ANIM_PTR(gAxSharedAnim_00927),
	AX_ANIM_PTR(gAxSharedAnim_00947),
	AX_ANIM_PTR(gAxSharedAnim_00972),
};

static const ax_anim *const sCyndaquilAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01018),
	AX_ANIM_PTR(gAxSharedAnim_01128),
	AX_ANIM_PTR(gAxSharedAnim_01099),
	AX_ANIM_PTR(gAxSharedAnim_01085),
	AX_ANIM_PTR(gAxSharedAnim_01084),
	AX_ANIM_PTR(gAxSharedAnim_01065),
	AX_ANIM_PTR(gAxSharedAnim_01034),
	AX_ANIM_PTR(gAxSharedAnim_01019),
};

static const ax_anim *const sCyndaquilAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01145),
	AX_ANIM_PTR(gAxSharedAnim_01227),
	AX_ANIM_PTR(gAxSharedAnim_01218),
	AX_ANIM_PTR(gAxSharedAnim_01201),
	AX_ANIM_PTR(gAxSharedAnim_01190),
	AX_ANIM_PTR(gAxSharedAnim_01179),
	AX_ANIM_PTR(gAxSharedAnim_01168),
	AX_ANIM_PTR(gAxSharedAnim_01157),
};

static const ax_anim *const sCyndaquilAnimTable14[] = {
	AX_ANIM_PTR(gAxSharedAnim_02386),
	AX_ANIM_PTR(gAxSharedAnim_02386),
	AX_ANIM_PTR(gAxSharedAnim_02386),
	AX_ANIM_PTR(gAxSharedAnim_02386),
	AX_ANIM_PTR(gAxSharedAnim_02386),
	AX_ANIM_PTR(gAxSharedAnim_02386),
	AX_ANIM_PTR(gAxSharedAnim_02386),
	AX_ANIM_PTR(gAxSharedAnim_02386),
};

static const ax_anim *const sCyndaquilAnimTable15[] = {
	AX_ANIM_PTR(sCyndaquilAnims_15_1),
	AX_ANIM_PTR(sCyndaquilAnims_15_1),
	AX_ANIM_PTR(sCyndaquilAnims_15_1),
	AX_ANIM_PTR(sCyndaquilAnims_15_1),
	AX_ANIM_PTR(sCyndaquilAnims_15_1),
	AX_ANIM_PTR(sCyndaquilAnims_15_1),
	AX_ANIM_PTR(sCyndaquilAnims_15_1),
	AX_ANIM_PTR(sCyndaquilAnims_15_1),
};

static const ax_anim *const sCyndaquilAnimTable16[] = {
	AX_ANIM_PTR(gAxSharedAnim_02666),
	AX_ANIM_PTR(gAxSharedAnim_02666),
	AX_ANIM_PTR(gAxSharedAnim_02666),
	AX_ANIM_PTR(gAxSharedAnim_02666),
	AX_ANIM_PTR(gAxSharedAnim_02666),
	AX_ANIM_PTR(gAxSharedAnim_02666),
	AX_ANIM_PTR(gAxSharedAnim_02666),
	AX_ANIM_PTR(gAxSharedAnim_02666),
};

static const ax_anim *const sCyndaquilAnimTable17[] = {
	AX_ANIM_PTR(sCyndaquilAnims_17_1),
	AX_ANIM_PTR(sCyndaquilAnims_17_1),
	AX_ANIM_PTR(sCyndaquilAnims_17_1),
	AX_ANIM_PTR(sCyndaquilAnims_17_1),
	AX_ANIM_PTR(sCyndaquilAnims_17_1),
	AX_ANIM_PTR(sCyndaquilAnims_17_1),
	AX_ANIM_PTR(sCyndaquilAnims_17_1),
	AX_ANIM_PTR(sCyndaquilAnims_17_1),
};

static const ax_anim *const sCyndaquilAnimTable18[] = {
	AX_ANIM_PTR(sCyndaquilAnims_18_1),
	AX_ANIM_PTR(sCyndaquilAnims_18_1),
	AX_ANIM_PTR(sCyndaquilAnims_18_1),
	AX_ANIM_PTR(sCyndaquilAnims_18_1),
	AX_ANIM_PTR(sCyndaquilAnims_18_5),
	AX_ANIM_PTR(sCyndaquilAnims_18_1),
	AX_ANIM_PTR(sCyndaquilAnims_18_1),
	AX_ANIM_PTR(sCyndaquilAnims_18_1),
};

static const ax_anim *const sCyndaquilAnimTable19[] = {
	AX_ANIM_PTR(gAxSharedAnim_02670),
	AX_ANIM_PTR(gAxSharedAnim_02670),
	AX_ANIM_PTR(gAxSharedAnim_02670),
	AX_ANIM_PTR(gAxSharedAnim_02670),
	AX_ANIM_PTR(gAxSharedAnim_02670),
	AX_ANIM_PTR(gAxSharedAnim_02670),
	AX_ANIM_PTR(gAxSharedAnim_02670),
	AX_ANIM_PTR(gAxSharedAnim_02670),
};

static const ax_anim *const sCyndaquilAnimTable20[] = {
	AX_ANIM_PTR(sCyndaquilAnims_20_1),
	AX_ANIM_PTR(sCyndaquilAnims_20_2),
	AX_ANIM_PTR(sCyndaquilAnims_20_2),
	AX_ANIM_PTR(sCyndaquilAnims_20_2),
	AX_ANIM_PTR(sCyndaquilAnims_20_2),
	AX_ANIM_PTR(sCyndaquilAnims_20_2),
	AX_ANIM_PTR(sCyndaquilAnims_20_2),
	AX_ANIM_PTR(sCyndaquilAnims_20_2),
};

static const ax_anim *const sCyndaquilAnimTable21[] = {
	AX_ANIM_PTR(sCyndaquilAnims_21_1),
	AX_ANIM_PTR(sCyndaquilAnims_21_1),
	AX_ANIM_PTR(sCyndaquilAnims_21_1),
	AX_ANIM_PTR(sCyndaquilAnims_21_1),
	AX_ANIM_PTR(sCyndaquilAnims_21_1),
	AX_ANIM_PTR(sCyndaquilAnims_21_1),
	AX_ANIM_PTR(sCyndaquilAnims_21_1),
	AX_ANIM_PTR(sCyndaquilAnims_21_1),
};

static const ax_anim *const sCyndaquilAnimTable22[] = {
	AX_ANIM_PTR(sCyndaquilAnims_22_1),
	AX_ANIM_PTR(sCyndaquilAnims_22_1),
	AX_ANIM_PTR(sCyndaquilAnims_22_1),
	AX_ANIM_PTR(sCyndaquilAnims_22_1),
	AX_ANIM_PTR(sCyndaquilAnims_22_1),
	AX_ANIM_PTR(sCyndaquilAnims_22_1),
	AX_ANIM_PTR(sCyndaquilAnims_22_1),
	AX_ANIM_PTR(sCyndaquilAnims_22_1),
};

static const ax_anim *const sCyndaquilAnimTable23[] = {
	AX_ANIM_PTR(gAxSharedAnim_00071),
	AX_ANIM_PTR(gAxSharedAnim_00071),
	AX_ANIM_PTR(sCyndaquilAnims_23_3),
	AX_ANIM_PTR(gAxSharedAnim_00071),
	AX_ANIM_PTR(gAxSharedAnim_00071),
	AX_ANIM_PTR(gAxSharedAnim_00071),
	AX_ANIM_PTR(gAxSharedAnim_00071),
	AX_ANIM_PTR(gAxSharedAnim_00071),
};

static const ax_anim *const sCyndaquilAnimTable24[] = {
	AX_ANIM_PTR(sCyndaquilAnims_24_1),
	AX_ANIM_PTR(sCyndaquilAnims_24_1),
	AX_ANIM_PTR(sCyndaquilAnims_24_1),
	AX_ANIM_PTR(sCyndaquilAnims_24_1),
	AX_ANIM_PTR(sCyndaquilAnims_24_1),
	AX_ANIM_PTR(sCyndaquilAnims_24_1),
	AX_ANIM_PTR(sCyndaquilAnims_24_1),
	AX_ANIM_PTR(sCyndaquilAnims_24_1),
};

static const ax_anim *const sCyndaquilAnimTable25[] = {
	AX_ANIM_PTR(gAxSharedAnim_00077),
	AX_ANIM_PTR(gAxSharedAnim_00077),
	AX_ANIM_PTR(gAxSharedAnim_00077),
	AX_ANIM_PTR(gAxSharedAnim_00077),
	AX_ANIM_PTR(gAxSharedAnim_00077),
	AX_ANIM_PTR(gAxSharedAnim_00077),
	AX_ANIM_PTR(sCyndaquilAnims_25_7),
	AX_ANIM_PTR(sCyndaquilAnims_25_7),
};

static const ax_anim *const sCyndaquilAnimTable26[] = {
	AX_ANIM_PTR(sCyndaquilAnims_26_1),
	AX_ANIM_PTR(sCyndaquilAnims_26_1),
	AX_ANIM_PTR(sCyndaquilAnims_26_1),
	AX_ANIM_PTR(sCyndaquilAnims_26_1),
	AX_ANIM_PTR(sCyndaquilAnims_26_1),
	AX_ANIM_PTR(sCyndaquilAnims_26_1),
	AX_ANIM_PTR(sCyndaquilAnims_26_1),
	AX_ANIM_PTR(sCyndaquilAnims_26_1),
};

static const ax_anim *const sCyndaquilAnimTable27[] = {
	AX_ANIM_PTR(sCyndaquilAnims_27_1),
	AX_ANIM_PTR(sCyndaquilAnims_27_1),
	AX_ANIM_PTR(sCyndaquilAnims_27_1),
	AX_ANIM_PTR(sCyndaquilAnims_27_1),
	AX_ANIM_PTR(sCyndaquilAnims_27_1),
	AX_ANIM_PTR(sCyndaquilAnims_27_1),
	AX_ANIM_PTR(sCyndaquilAnims_27_1),
	AX_ANIM_PTR(sCyndaquilAnims_27_1),
};

static const ax_anim *const sCyndaquilAnimTable28[] = {
	AX_ANIM_PTR(gAxSharedAnim_00112),
	AX_ANIM_PTR(gAxSharedAnim_00112),
	AX_ANIM_PTR(sCyndaquilAnims_28_3),
	AX_ANIM_PTR(gAxSharedAnim_00112),
	AX_ANIM_PTR(gAxSharedAnim_00112),
	AX_ANIM_PTR(gAxSharedAnim_00112),
	AX_ANIM_PTR(gAxSharedAnim_00112),
	AX_ANIM_PTR(gAxSharedAnim_00112),
};

static const ax_anim *const *const sAxAnimationsCyndaquil[] = {
	sCyndaquilAnimTable1,
	sCyndaquilAnimTable2,
	sCyndaquilAnimTable3,
	sCyndaquilAnimTable4,
	sCyndaquilAnimTable5,
	sCyndaquilAnimTable6,
	sCyndaquilAnimTable7,
	sCyndaquilAnimTable8,
	sCyndaquilAnimTable9,
	sCyndaquilAnimTable10,
	sCyndaquilAnimTable11,
	sCyndaquilAnimTable12,
	sCyndaquilAnimTable13,
	sCyndaquilAnimTable14,
	sCyndaquilAnimTable15,
	sCyndaquilAnimTable16,
	sCyndaquilAnimTable17,
	sCyndaquilAnimTable18,
	sCyndaquilAnimTable19,
	sCyndaquilAnimTable20,
	sCyndaquilAnimTable21,
	sCyndaquilAnimTable22,
	sCyndaquilAnimTable23,
	sCyndaquilAnimTable24,
	sCyndaquilAnimTable25,
	sCyndaquilAnimTable26,
	sCyndaquilAnimTable27,
	sCyndaquilAnimTable28,
};

static const ax_sprite *const sAxSpritesCyndaquil[] = {
	sCyndaquilSprites1,
	sCyndaquilSprites2,
	sCyndaquilSprites3,
	sCyndaquilSprites4,
	sCyndaquilSprites5,
	sCyndaquilSprites6,
	sCyndaquilSprites7,
	sCyndaquilSprites8,
	sCyndaquilSprites9,
	sCyndaquilSprites10,
	sCyndaquilSprites11,
	sCyndaquilSprites12,
	sCyndaquilSprites13,
	sCyndaquilSprites14,
	sCyndaquilSprites15,
	sCyndaquilSprites16,
	sCyndaquilSprites17,
	sCyndaquilSprites18,
	sCyndaquilSprites19,
	sCyndaquilSprites20,
	sCyndaquilSprites21,
	sCyndaquilSprites22,
	sCyndaquilSprites23,
	sCyndaquilSprites24,
	sCyndaquilSprites25,
	sCyndaquilSprites26,
	sCyndaquilSprites27,
	sCyndaquilSprites28,
	sCyndaquilSprites29,
	sCyndaquilSprites30,
	sCyndaquilSprites31,
	sCyndaquilSprites32,
	sCyndaquilSprites33,
	sCyndaquilSprites34,
	sCyndaquilSprites35,
	sCyndaquilSprites36,
	sCyndaquilSprites37,
	sCyndaquilSprites38,
	sCyndaquilSprites39,
	sCyndaquilSprites40,
	sCyndaquilSprites41,
	sCyndaquilSprites42,
	sCyndaquilSprites43,
	sCyndaquilSprites44,
	sCyndaquilSprites45,
	sCyndaquilSprites46,
	sCyndaquilSprites47,
	sCyndaquilSprites48,
	sCyndaquilSprites49,
	sCyndaquilSprites50,
	sCyndaquilSprites51,
	sCyndaquilSprites52,
	sCyndaquilSprites53,
	sCyndaquilSprites54,
	sCyndaquilSprites55,
	sCyndaquilSprites56,
	sCyndaquilSprites57,
	sCyndaquilSprites58,
	sCyndaquilSprites59,
	sCyndaquilSprites60,
	sCyndaquilSprites61,
	sCyndaquilSprites62,
	sCyndaquilSprites63,
	sCyndaquilSprites64,
	sCyndaquilSprites65,
	sCyndaquilSprites66,
	sCyndaquilSprites67,
	sCyndaquilSprites68,
	sCyndaquilSprites69,
	sCyndaquilSprites70,
	sCyndaquilSprites71,
	sCyndaquilSprites72,
	sCyndaquilSprites73,
	sCyndaquilSprites74,
	sCyndaquilSprites75,
	sCyndaquilSprites76,
	sCyndaquilSprites77,
	sCyndaquilSprites78,
	sCyndaquilSprites79,
	sCyndaquilSprites80,
	sCyndaquilSprites81,
	sCyndaquilSprites82,
	sCyndaquilSprites83,
	sCyndaquilSprites84,
	sCyndaquilSprites85,
};

static const axmain sAxMainCyndaquil = {
	.poses = sAxPosesCyndaquil,
	.animations = sAxAnimationsCyndaquil,
	.animCount = ARRAY_COUNT(sAxAnimationsCyndaquil),
	.spriteData = sAxSpritesCyndaquil,
	.positions = sAxPositionsCyndaquil,
};
