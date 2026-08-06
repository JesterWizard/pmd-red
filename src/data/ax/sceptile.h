/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainSceptile;
const SiroArchive gAxSceptile = {"SIRO", &sAxMainSceptile};

static const ax_pose sSceptilePose1[] = {
	AX_POSE(0, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose2[] = {
	AX_POSE(1, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose3[] = {
	AX_POSE(2, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose4[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose5[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose6[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose7[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose8[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose9[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose10[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose11[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose12[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose13[] = {
	AX_POSE(12, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose14[] = {
	AX_POSE(13, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose15[] = {
	AX_POSE(14, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose16[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose17[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose18[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose19[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose20[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose21[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose22[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose23[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose24[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose28[] = {
	AX_POSE(15, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose29[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose30[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose31[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose32[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose33[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose34[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose35[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose36[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose37[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose38[] = {
	AX_POSE(10, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose39[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose40[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose41[] = {
	AX_POSE(12, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose42[] = {
	AX_POSE(13, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose43[] = {
	AX_POSE(14, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose44[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose45[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose46[] = {
	AX_POSE(10, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose47[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose48[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose49[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose50[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose51[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose52[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose53[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose54[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose55[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose56[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose59[] = {
	AX_POSE(20, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 3)),
	AX_POSE(21, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose60[] = {
	AX_POSE(21, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose61[] = {
	AX_POSE(1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose62[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose63[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose64[] = {
	AX_POSE(22, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(23, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose65[] = {
	AX_POSE(23, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose66[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose67[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose68[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose69[] = {
	AX_POSE(24, OAM1(220, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 3)),
	AX_POSE(25, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose70[] = {
	AX_POSE(25, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose71[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose74[] = {
	AX_POSE(26, OAM1(221, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 3)),
	AX_POSE(27, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose75[] = {
	AX_POSE(27, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose77[] = {
	AX_POSE(12, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose78[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose79[] = {
	AX_POSE(28, OAM1(220, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(29, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(30, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE(31, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(17, 3, 3)),
	AX_POSE(32, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(18, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose80[] = {
	AX_POSE(29, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(30, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(31, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(9, 3, 3)),
	AX_POSE(32, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(10, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose81[] = {
	AX_POSE(28, OAM1(220, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(29, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(30, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(16, 3, 3)),
	AX_POSE(31, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(17, 3, 3)),
	AX_POSE(32, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(18, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose82[] = {
	AX_POSE(29, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(30, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE(31, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(9, 3, 3)),
	AX_POSE(32, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(10, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose83[] = {
	AX_POSE(9, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose84[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose85[] = {
	AX_POSE(26, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose86[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose88[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose89[] = {
	AX_POSE(24, OAM1(220, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(25, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose90[] = {
	AX_POSE(25, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose91[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose92[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose93[] = {
	AX_POSE(22, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(23, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose94[] = {
	AX_POSE(23, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose96[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose97[] = {
	AX_POSE(34, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(35, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 3)),
	AX_POSE(36, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE(37, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose99[] = {
	AX_POSE(38, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(39, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE(40, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose100[] = {
	AX_POSE(41, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(42, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 3)),
	AX_POSE(43, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose102[] = {
	AX_POSE(44, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose103[] = {
	AX_POSE(45, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(46, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 3)),
	AX_POSE(47, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(12, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 3)),
	AX_POSE(48, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(12, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(13, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose104[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose105[] = {
	AX_POSE(49, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 3)),
	AX_POSE(50, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(51, OAM1(246, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE(52, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(14, 3, 3)),
	AX_POSE(53, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose106[] = {
	AX_POSE(54, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(55, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(56, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(15, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 3)),
	AX_POSE(57, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose107[] = {
	AX_POSE(12, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose108[] = {
	AX_POSE(58, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(59, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(60, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE(61, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 3)),
	AX_POSE(62, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose109[] = {
	AX_POSE(63, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(64, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(65, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE(66, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose110[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose111[] = {
	AX_POSE(49, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(50, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE(51, OAM1(246, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 3)),
	AX_POSE(52, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 3)),
	AX_POSE(53, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose112[] = {
	AX_POSE(54, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(55, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE(56, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE(57, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose113[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose114[] = {
	AX_POSE(44, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose115[] = {
	AX_POSE(45, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(46, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 3)),
	AX_POSE(47, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE(48, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose117[] = {
	AX_POSE(38, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(39, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(40, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose118[] = {
	AX_POSE(41, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(42, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 3)),
	AX_POSE(43, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose127[] = {
	AX_POSE(67, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose128[] = {
	AX_POSE(68, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose129[] = {
	AX_POSE(69, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose130[] = {
	AX_POSE(70, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose131[] = {
	AX_POSE(71, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose132[] = {
	AX_POSE(72, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose133[] = {
	AX_POSE(73, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose134[] = {
	AX_POSE(72, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose135[] = {
	AX_POSE(71, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose136[] = {
	AX_POSE(70, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose138[] = {
	AX_POSE(74, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose140[] = {
	AX_POSE(75, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose142[] = {
	AX_POSE(76, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose144[] = {
	AX_POSE(77, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose146[] = {
	AX_POSE(78, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose147[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose148[] = {
	AX_POSE(77, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose150[] = {
	AX_POSE(76, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose151[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose152[] = {
	AX_POSE(75, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose155[] = {
	AX_POSE(45, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(46, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 3)),
	AX_POSE(47, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE(48, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose156[] = {
	AX_POSE(54, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(55, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE(56, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE(57, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose157[] = {
	AX_POSE(63, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(64, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(65, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE(66, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose158[] = {
	AX_POSE(54, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(55, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(56, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(11, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 3)),
	AX_POSE(57, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose159[] = {
	AX_POSE(45, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(46, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 3)),
	AX_POSE(47, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 3)),
	AX_POSE(48, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(13, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose163[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose167[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose170[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose173[] = {
	AX_POSE(38, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(39, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE(40, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose174[] = {
	AX_POSE(41, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(42, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 3)),
	AX_POSE(43, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose179[] = {
	AX_POSE(49, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(50, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(51, OAM1(246, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE(52, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 3)),
	AX_POSE(53, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose180[] = {
	AX_POSE(54, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(55, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(56, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(13, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 3)),
	AX_POSE(57, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose182[] = {
	AX_POSE(58, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(59, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(60, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE(61, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 3)),
	AX_POSE(62, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose185[] = {
	AX_POSE(49, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(50, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE(51, OAM1(246, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 3)),
	AX_POSE(52, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 3)),
	AX_POSE(53, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose186[] = {
	AX_POSE(54, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(55, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE(56, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE(57, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(11, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose191[] = {
	AX_POSE(38, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(39, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(40, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose192[] = {
	AX_POSE(41, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(42, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 3)),
	AX_POSE(43, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSceptilePose197[] = {
	AX_POSE(63, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(64, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(65, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE(66, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 3)),
	AX_POSE_TERMINATOR
};
static const u8 sSceptileAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_1_1.lz");
static const u8 sSceptileAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_1_2.lz");
static const u8 sSceptileAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_1_3.lz");
static const u8 sSceptileAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_1_4.lz");
static const u8 sSceptileAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_1_5.lz");
static const u8 sSceptileAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_1_6.lz");
static const u8 sSceptileAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_1_7.lz");
static const u8 sSceptileAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_1_8.lz");
static const u8 sSceptileAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_2_1.lz");
static const u8 sSceptileAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_2_2.lz");
static const u8 sSceptileAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_2_3.lz");
static const u8 sSceptileAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_2_4.lz");
static const u8 sSceptileAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_2_5.lz");
static const u8 sSceptileAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_2_6.lz");
static const u8 sSceptileAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_2_7.lz");
static const u8 sSceptileAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_2_8.lz");
static const u8 sSceptileAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_3_1.lz");
static const u8 sSceptileAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_3_2.lz");
static const u8 sSceptileAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_3_3.lz");
static const u8 sSceptileAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_3_4.lz");
static const u8 sSceptileAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_3_5.lz");
static const u8 sSceptileAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_3_6.lz");
static const u8 sSceptileAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_3_7.lz");
static const u8 sSceptileAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_3_8.lz");
static const u8 sSceptileAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_4_1.lz");
static const u8 sSceptileAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_4_2.lz");
static const u8 sSceptileAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_4_3.lz");
static const u8 sSceptileAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_4_4.lz");
static const u8 sSceptileAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_4_5.lz");
static const u8 sSceptileAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_4_6.lz");
static const u8 sSceptileAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_4_7.lz");
static const u8 sSceptileAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_4_8.lz");
static const u8 sSceptileAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_5_1.lz");
static const u8 sSceptileAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_5_2.lz");
static const u8 sSceptileAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_5_3.lz");
static const u8 sSceptileAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_5_4.lz");
static const u8 sSceptileAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_5_5.lz");
static const u8 sSceptileAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_5_6.lz");
static const u8 sSceptileAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_5_7.lz");
static const u8 sSceptileAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_5_8.lz");
static const u8 sSceptileAnims_6_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_6_1.lz");
static const u8 sSceptileAnims_7_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_7_1.lz");
static const u8 sSceptileAnims_7_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_7_2.lz");
static const u8 sSceptileAnims_7_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_7_3.lz");
static const u8 sSceptileAnims_7_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_7_4.lz");
static const u8 sSceptileAnims_7_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_7_5.lz");
static const u8 sSceptileAnims_7_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_7_6.lz");
static const u8 sSceptileAnims_7_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_7_7.lz");
static const ax_anim sSceptileAnims_7_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 135, .offset = {3, -3}, .shadow = {3, -3} },
	AX_ANIM_TERMINATOR
};
static const u8 sSceptileAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_8_1.lz");
static const u8 sSceptileAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_8_2.lz");
static const u8 sSceptileAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_8_3.lz");
static const u8 sSceptileAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_8_4.lz");
static const u8 sSceptileAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_8_5.lz");
static const u8 sSceptileAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_8_6.lz");
static const u8 sSceptileAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_8_7.lz");
static const u8 sSceptileAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_8_8.lz");
static const u8 sSceptileAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_9_1.lz");
static const u8 sSceptileAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_9_2.lz");
static const u8 sSceptileAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_9_3.lz");
static const u8 sSceptileAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_9_4.lz");
static const u8 sSceptileAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_9_5.lz");
static const u8 sSceptileAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_9_6.lz");
static const u8 sSceptileAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_9_7.lz");
static const u8 sSceptileAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_9_8.lz");
static const u8 sSceptileAnims_10_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_10_1.lz");
static const u8 sSceptileAnims_10_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_10_2.lz");
static const u8 sSceptileAnims_10_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_10_3.lz");
static const u8 sSceptileAnims_10_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_10_4.lz");
static const u8 sSceptileAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_11_1.lz");
static const u8 sSceptileAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_11_2.lz");
static const u8 sSceptileAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_11_3.lz");
static const u8 sSceptileAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_11_4.lz");
static const u8 sSceptileAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_11_5.lz");
static const u8 sSceptileAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_11_6.lz");
static const u8 sSceptileAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_11_7.lz");
static const u8 sSceptileAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_11_8.lz");
static const u8 sSceptileAnims_12_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_12_1.lz");
static const u8 sSceptileAnims_12_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_12_6.lz");
static const u8 sSceptileAnims_12_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_12_7.lz");
static const u8 sSceptileAnims_13_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_13_1.lz");
static const u8 sSceptileAnims_13_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_13_2.lz");
static const u8 sSceptileAnims_13_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_13_3.lz");
static const u8 sSceptileAnims_13_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_13_4.lz");
static const u8 sSceptileAnims_13_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_13_5.lz");
static const u8 sSceptileAnims_13_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_13_6.lz");
static const u8 sSceptileAnims_13_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_13_7.lz");
static const u8 sSceptileAnims_13_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sceptile/sSceptileAnims_13_8.lz");

static const u8 sSceptileGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_1.4bpp.lz");
static const ax_sprite sSceptileSprites1[] = {
	{sSceptileGfx1, ARRAY_COUNT(sSceptileGfx1)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_2.4bpp.lz");
static const ax_sprite sSceptileSprites2[] = {
	{sSceptileGfx2, ARRAY_COUNT(sSceptileGfx2)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_3.4bpp.lz");
static const ax_sprite sSceptileSprites3[] = {
	{sSceptileGfx3, ARRAY_COUNT(sSceptileGfx3)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_4.4bpp.lz");
static const ax_sprite sSceptileSprites4[] = {
	{sSceptileGfx4, ARRAY_COUNT(sSceptileGfx4)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_5.4bpp.lz");
static const ax_sprite sSceptileSprites5[] = {
	{sSceptileGfx5, ARRAY_COUNT(sSceptileGfx5)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_6.4bpp.lz");
static const ax_sprite sSceptileSprites6[] = {
	{sSceptileGfx6, ARRAY_COUNT(sSceptileGfx6)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_7.4bpp.lz");
static const ax_sprite sSceptileSprites7[] = {
	{sSceptileGfx7, ARRAY_COUNT(sSceptileGfx7)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_8.4bpp.lz");
static const ax_sprite sSceptileSprites8[] = {
	{sSceptileGfx8, ARRAY_COUNT(sSceptileGfx8)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_9.4bpp.lz");
static const ax_sprite sSceptileSprites9[] = {
	{sSceptileGfx9, ARRAY_COUNT(sSceptileGfx9)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_10.4bpp.lz");
static const ax_sprite sSceptileSprites10[] = {
	{sSceptileGfx10, ARRAY_COUNT(sSceptileGfx10)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_11.4bpp.lz");
static const ax_sprite sSceptileSprites11[] = {
	{sSceptileGfx11, ARRAY_COUNT(sSceptileGfx11)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_12.4bpp.lz");
static const ax_sprite sSceptileSprites12[] = {
	{sSceptileGfx12, ARRAY_COUNT(sSceptileGfx12)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_13.4bpp.lz");
static const ax_sprite sSceptileSprites13[] = {
	{sSceptileGfx13, ARRAY_COUNT(sSceptileGfx13)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_14.4bpp.lz");
static const ax_sprite sSceptileSprites14[] = {
	{sSceptileGfx14, ARRAY_COUNT(sSceptileGfx14)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_15.4bpp.lz");
static const ax_sprite sSceptileSprites15[] = {
	{sSceptileGfx15, ARRAY_COUNT(sSceptileGfx15)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_16.4bpp.lz");
static const u8 sSceptileGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_16_1.4bpp.lz");
static const u8 sSceptileGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_16_2.4bpp.lz");
static const ax_sprite sSceptileSprites16[] = {
	{NULL, 128}, 
	{sSceptileGfx16, ARRAY_COUNT(sSceptileGfx16)}, 
	{NULL, 32}, 
	{sSceptileGfx16_1, ARRAY_COUNT(sSceptileGfx16_1)}, 
	{NULL, 32}, 
	{sSceptileGfx16_2, ARRAY_COUNT(sSceptileGfx16_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSceptileGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_17.4bpp.lz");
static const ax_sprite sSceptileSprites17[] = {
	{NULL, 160}, 
	{sSceptileGfx17, ARRAY_COUNT(sSceptileGfx17)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_18.4bpp.lz");
static const ax_sprite sSceptileSprites18[] = {
	{NULL, 128}, 
	{sSceptileGfx18, ARRAY_COUNT(sSceptileGfx18)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSceptileGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_19.4bpp.lz");
static const u8 sSceptileGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_19_1.4bpp.lz");
static const u8 sSceptileGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_19_2.4bpp.lz");
static const ax_sprite sSceptileSprites19[] = {
	{NULL, 128}, 
	{sSceptileGfx19, ARRAY_COUNT(sSceptileGfx19)}, 
	{NULL, 32}, 
	{sSceptileGfx19_1, ARRAY_COUNT(sSceptileGfx19_1)}, 
	{NULL, 32}, 
	{sSceptileGfx19_2, ARRAY_COUNT(sSceptileGfx19_2)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_20.4bpp.lz");
static const u8 sSceptileGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_20_1.4bpp.lz");
static const u8 sSceptileGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_20_2.4bpp.lz");
static const u8 sSceptileGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_20_3.4bpp.lz");
static const ax_sprite sSceptileSprites20[] = {
	{NULL, 32}, 
	{sSceptileGfx20, ARRAY_COUNT(sSceptileGfx20)}, 
	{NULL, 64}, 
	{sSceptileGfx20_1, ARRAY_COUNT(sSceptileGfx20_1)}, 
	{NULL, 32}, 
	{sSceptileGfx20_2, ARRAY_COUNT(sSceptileGfx20_2)}, 
	{NULL, 32}, 
	{sSceptileGfx20_3, ARRAY_COUNT(sSceptileGfx20_3)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_21.4bpp.lz");
static const ax_sprite sSceptileSprites21[] = {
	{sSceptileGfx21, ARRAY_COUNT(sSceptileGfx21)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSceptileGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_22.4bpp.lz");
static const u8 sSceptileGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_22_1.4bpp.lz");
static const ax_sprite sSceptileSprites22[] = {
	{sSceptileGfx22, ARRAY_COUNT(sSceptileGfx22)}, 
	{NULL, 32}, 
	{sSceptileGfx22_1, ARRAY_COUNT(sSceptileGfx22_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSceptileGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_23.4bpp.lz");
static const u8 sSceptileGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_23_1.4bpp.lz");
static const ax_sprite sSceptileSprites23[] = {
	{sSceptileGfx23, ARRAY_COUNT(sSceptileGfx23)}, 
	{NULL, 32}, 
	{sSceptileGfx23_1, ARRAY_COUNT(sSceptileGfx23_1)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_24.4bpp.lz");
static const u8 sSceptileGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_24_1.4bpp.lz");
static const u8 sSceptileGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_24_2.4bpp.lz");
static const ax_sprite sSceptileSprites24[] = {
	{sSceptileGfx24, ARRAY_COUNT(sSceptileGfx24)}, 
	{NULL, 32}, 
	{sSceptileGfx24_1, ARRAY_COUNT(sSceptileGfx24_1)}, 
	{NULL, 32}, 
	{sSceptileGfx24_2, ARRAY_COUNT(sSceptileGfx24_2)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_25.4bpp.lz");
static const u8 sSceptileGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_25_1.4bpp.lz");
static const ax_sprite sSceptileSprites25[] = {
	{sSceptileGfx25, ARRAY_COUNT(sSceptileGfx25)}, 
	{NULL, 32}, 
	{sSceptileGfx25_1, ARRAY_COUNT(sSceptileGfx25_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSceptileGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_26.4bpp.lz");
static const u8 sSceptileGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_26_1.4bpp.lz");
static const u8 sSceptileGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_26_2.4bpp.lz");
static const u8 sSceptileGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_26_3.4bpp.lz");
static const ax_sprite sSceptileSprites26[] = {
	{sSceptileGfx26, ARRAY_COUNT(sSceptileGfx26)}, 
	{NULL, 64}, 
	{sSceptileGfx26_1, ARRAY_COUNT(sSceptileGfx26_1)}, 
	{NULL, 64}, 
	{sSceptileGfx26_2, ARRAY_COUNT(sSceptileGfx26_2)}, 
	{NULL, 32}, 
	{sSceptileGfx26_3, ARRAY_COUNT(sSceptileGfx26_3)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_27.4bpp.lz");
static const ax_sprite sSceptileSprites27[] = {
	{sSceptileGfx27, ARRAY_COUNT(sSceptileGfx27)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_28.4bpp.lz");
static const u8 sSceptileGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_28_1.4bpp.lz");
static const u8 sSceptileGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_28_2.4bpp.lz");
static const u8 sSceptileGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_28_3.4bpp.lz");
static const ax_sprite sSceptileSprites28[] = {
	{sSceptileGfx28, ARRAY_COUNT(sSceptileGfx28)}, 
	{NULL, 64}, 
	{sSceptileGfx28_1, ARRAY_COUNT(sSceptileGfx28_1)}, 
	{NULL, 64}, 
	{sSceptileGfx28_2, ARRAY_COUNT(sSceptileGfx28_2)}, 
	{NULL, 64}, 
	{sSceptileGfx28_3, ARRAY_COUNT(sSceptileGfx28_3)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_29.4bpp.lz");
static const ax_sprite sSceptileSprites29[] = {
	{sSceptileGfx29, ARRAY_COUNT(sSceptileGfx29)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSceptileGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_30.4bpp.lz");
static const ax_sprite sSceptileSprites30[] = {
	{sSceptileGfx30, ARRAY_COUNT(sSceptileGfx30)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_31.4bpp.lz");
static const ax_sprite sSceptileSprites31[] = {
	{sSceptileGfx31, ARRAY_COUNT(sSceptileGfx31)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_32.4bpp.lz");
static const ax_sprite sSceptileSprites32[] = {
	{sSceptileGfx32, ARRAY_COUNT(sSceptileGfx32)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_33.4bpp.lz");
static const ax_sprite sSceptileSprites33[] = {
	{sSceptileGfx33, ARRAY_COUNT(sSceptileGfx33)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_34.4bpp.lz");
static const ax_sprite sSceptileSprites34[] = {
	{sSceptileGfx34, ARRAY_COUNT(sSceptileGfx34)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSceptileGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_35.4bpp.lz");
static const ax_sprite sSceptileSprites35[] = {
	{sSceptileGfx35, ARRAY_COUNT(sSceptileGfx35)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_36.4bpp.lz");
static const ax_sprite sSceptileSprites36[] = {
	{sSceptileGfx36, ARRAY_COUNT(sSceptileGfx36)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSceptileGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_37.4bpp.lz");
static const ax_sprite sSceptileSprites37[] = {
	{sSceptileGfx37, ARRAY_COUNT(sSceptileGfx37)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_38.4bpp.lz");
static const ax_sprite sSceptileSprites38[] = {
	{sSceptileGfx38, ARRAY_COUNT(sSceptileGfx38)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_39.4bpp.lz");
static const u8 sSceptileGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_39_1.4bpp.lz");
static const ax_sprite sSceptileSprites39[] = {
	{sSceptileGfx39, ARRAY_COUNT(sSceptileGfx39)}, 
	{NULL, 32}, 
	{sSceptileGfx39_1, ARRAY_COUNT(sSceptileGfx39_1)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_40.4bpp.lz");
static const ax_sprite sSceptileSprites40[] = {
	{sSceptileGfx40, ARRAY_COUNT(sSceptileGfx40)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_41.4bpp.lz");
static const ax_sprite sSceptileSprites41[] = {
	{sSceptileGfx41, ARRAY_COUNT(sSceptileGfx41)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_42.4bpp.lz");
static const u8 sSceptileGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_42_1.4bpp.lz");
static const ax_sprite sSceptileSprites42[] = {
	{sSceptileGfx42, ARRAY_COUNT(sSceptileGfx42)}, 
	{NULL, 32}, 
	{sSceptileGfx42_1, ARRAY_COUNT(sSceptileGfx42_1)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_43.4bpp.lz");
static const ax_sprite sSceptileSprites43[] = {
	{sSceptileGfx43, ARRAY_COUNT(sSceptileGfx43)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_44.4bpp.lz");
static const ax_sprite sSceptileSprites44[] = {
	{sSceptileGfx44, ARRAY_COUNT(sSceptileGfx44)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_45.4bpp.lz");
static const u8 sSceptileGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_45_1.4bpp.lz");
static const u8 sSceptileGfx45_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_45_2.4bpp.lz");
static const u8 sSceptileGfx45_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_45_3.4bpp.lz");
static const ax_sprite sSceptileSprites45[] = {
	{NULL, 32}, 
	{sSceptileGfx45, ARRAY_COUNT(sSceptileGfx45)}, 
	{NULL, 64}, 
	{sSceptileGfx45_1, ARRAY_COUNT(sSceptileGfx45_1)}, 
	{NULL, 64}, 
	{sSceptileGfx45_2, ARRAY_COUNT(sSceptileGfx45_2)}, 
	{NULL, 32}, 
	{sSceptileGfx45_3, ARRAY_COUNT(sSceptileGfx45_3)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_46.4bpp.lz");
static const ax_sprite sSceptileSprites46[] = {
	{sSceptileGfx46, ARRAY_COUNT(sSceptileGfx46)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_47.4bpp.lz");
static const ax_sprite sSceptileSprites47[] = {
	{sSceptileGfx47, ARRAY_COUNT(sSceptileGfx47)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_48.4bpp.lz");
static const ax_sprite sSceptileSprites48[] = {
	{sSceptileGfx48, ARRAY_COUNT(sSceptileGfx48)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_49.4bpp.lz");
static const ax_sprite sSceptileSprites49[] = {
	{sSceptileGfx49, ARRAY_COUNT(sSceptileGfx49)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_50.4bpp.lz");
static const ax_sprite sSceptileSprites50[] = {
	{sSceptileGfx50, ARRAY_COUNT(sSceptileGfx50)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_51.4bpp.lz");
static const ax_sprite sSceptileSprites51[] = {
	{sSceptileGfx51, ARRAY_COUNT(sSceptileGfx51)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_52.4bpp.lz");
static const ax_sprite sSceptileSprites52[] = {
	{sSceptileGfx52, ARRAY_COUNT(sSceptileGfx52)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_53.4bpp.lz");
static const ax_sprite sSceptileSprites53[] = {
	{sSceptileGfx53, ARRAY_COUNT(sSceptileGfx53)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_54.4bpp.lz");
static const ax_sprite sSceptileSprites54[] = {
	{sSceptileGfx54, ARRAY_COUNT(sSceptileGfx54)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_55.4bpp.lz");
static const u8 sSceptileGfx55_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_55_1.4bpp.lz");
static const ax_sprite sSceptileSprites55[] = {
	{sSceptileGfx55, ARRAY_COUNT(sSceptileGfx55)}, 
	{NULL, 32}, 
	{sSceptileGfx55_1, ARRAY_COUNT(sSceptileGfx55_1)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_56.4bpp.lz");
static const ax_sprite sSceptileSprites56[] = {
	{sSceptileGfx56, ARRAY_COUNT(sSceptileGfx56)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_57.4bpp.lz");
static const ax_sprite sSceptileSprites57[] = {
	{sSceptileGfx57, ARRAY_COUNT(sSceptileGfx57)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_58.4bpp.lz");
static const ax_sprite sSceptileSprites58[] = {
	{sSceptileGfx58, ARRAY_COUNT(sSceptileGfx58)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_59.4bpp.lz");
static const ax_sprite sSceptileSprites59[] = {
	{sSceptileGfx59, ARRAY_COUNT(sSceptileGfx59)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_60.4bpp.lz");
static const ax_sprite sSceptileSprites60[] = {
	{sSceptileGfx60, ARRAY_COUNT(sSceptileGfx60)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_61.4bpp.lz");
static const ax_sprite sSceptileSprites61[] = {
	{sSceptileGfx61, ARRAY_COUNT(sSceptileGfx61)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_62.4bpp.lz");
static const ax_sprite sSceptileSprites62[] = {
	{sSceptileGfx62, ARRAY_COUNT(sSceptileGfx62)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_63.4bpp.lz");
static const ax_sprite sSceptileSprites63[] = {
	{sSceptileGfx63, ARRAY_COUNT(sSceptileGfx63)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_64.4bpp.lz");
static const u8 sSceptileGfx64_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_64_1.4bpp.lz");
static const ax_sprite sSceptileSprites64[] = {
	{sSceptileGfx64, ARRAY_COUNT(sSceptileGfx64)}, 
	{NULL, 32}, 
	{sSceptileGfx64_1, ARRAY_COUNT(sSceptileGfx64_1)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_65.4bpp.lz");
static const ax_sprite sSceptileSprites65[] = {
	{sSceptileGfx65, ARRAY_COUNT(sSceptileGfx65)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_66.4bpp.lz");
static const ax_sprite sSceptileSprites66[] = {
	{sSceptileGfx66, ARRAY_COUNT(sSceptileGfx66)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_67.4bpp.lz");
static const ax_sprite sSceptileSprites67[] = {
	{sSceptileGfx67, ARRAY_COUNT(sSceptileGfx67)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_68.4bpp.lz");
static const ax_sprite sSceptileSprites68[] = {
	{sSceptileGfx68, ARRAY_COUNT(sSceptileGfx68)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_69.4bpp.lz");
static const ax_sprite sSceptileSprites69[] = {
	{sSceptileGfx69, ARRAY_COUNT(sSceptileGfx69)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_70.4bpp.lz");
static const ax_sprite sSceptileSprites70[] = {
	{sSceptileGfx70, ARRAY_COUNT(sSceptileGfx70)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_71.4bpp.lz");
static const ax_sprite sSceptileSprites71[] = {
	{sSceptileGfx71, ARRAY_COUNT(sSceptileGfx71)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx72[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_72.4bpp.lz");
static const ax_sprite sSceptileSprites72[] = {
	{sSceptileGfx72, ARRAY_COUNT(sSceptileGfx72)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx73[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_73.4bpp.lz");
static const ax_sprite sSceptileSprites73[] = {
	{sSceptileGfx73, ARRAY_COUNT(sSceptileGfx73)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx74[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_74.4bpp.lz");
static const ax_sprite sSceptileSprites74[] = {
	{sSceptileGfx74, ARRAY_COUNT(sSceptileGfx74)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx75[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_75.4bpp.lz");
static const ax_sprite sSceptileSprites75[] = {
	{sSceptileGfx75, ARRAY_COUNT(sSceptileGfx75)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx76[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_76.4bpp.lz");
static const ax_sprite sSceptileSprites76[] = {
	{sSceptileGfx76, ARRAY_COUNT(sSceptileGfx76)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx77[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_77.4bpp.lz");
static const ax_sprite sSceptileSprites77[] = {
	{sSceptileGfx77, ARRAY_COUNT(sSceptileGfx77)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx78[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_78.4bpp.lz");
static const ax_sprite sSceptileSprites78[] = {
	{sSceptileGfx78, ARRAY_COUNT(sSceptileGfx78)}, 
	{NULL, 0}
};
static const u8 sSceptileGfx79[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sceptile/sprite_79.4bpp.lz");
static const ax_sprite sSceptileSprites79[] = {
	{sSceptileGfx79, ARRAY_COUNT(sSceptileGfx79)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesSceptile[] = {
	sSceptilePose1,
	sSceptilePose2,
	sSceptilePose3,
	sSceptilePose4,
	sSceptilePose5,
	sSceptilePose6,
	sSceptilePose7,
	sSceptilePose8,
	sSceptilePose9,
	sSceptilePose10,
	sSceptilePose11,
	sSceptilePose12,
	sSceptilePose13,
	sSceptilePose14,
	sSceptilePose15,
	sSceptilePose16,
	sSceptilePose17,
	sSceptilePose18,
	sSceptilePose19,
	sSceptilePose20,
	sSceptilePose21,
	sSceptilePose22,
	sSceptilePose23,
	sSceptilePose24,
	sSceptilePose1,
	sSceptilePose2,
	sSceptilePose3,
	sSceptilePose28,
	sSceptilePose29,
	sSceptilePose30,
	sSceptilePose31,
	sSceptilePose32,
	sSceptilePose33,
	sSceptilePose34,
	sSceptilePose35,
	sSceptilePose36,
	sSceptilePose37,
	sSceptilePose38,
	sSceptilePose39,
	sSceptilePose40,
	sSceptilePose41,
	sSceptilePose42,
	sSceptilePose43,
	sSceptilePose44,
	sSceptilePose45,
	sSceptilePose46,
	sSceptilePose47,
	sSceptilePose48,
	sSceptilePose49,
	sSceptilePose50,
	sSceptilePose51,
	sSceptilePose52,
	sSceptilePose53,
	sSceptilePose54,
	sSceptilePose55,
	sSceptilePose56,
	sSceptilePose1,
	sSceptilePose28,
	sSceptilePose59,
	sSceptilePose60,
	sSceptilePose61,
	sSceptilePose62,
	sSceptilePose63,
	sSceptilePose64,
	sSceptilePose65,
	sSceptilePose66,
	sSceptilePose67,
	sSceptilePose68,
	sSceptilePose69,
	sSceptilePose70,
	sSceptilePose71,
	sSceptilePose37,
	sSceptilePose40,
	sSceptilePose74,
	sSceptilePose75,
	sSceptilePose38,
	sSceptilePose77,
	sSceptilePose78,
	sSceptilePose79,
	sSceptilePose80,
	sSceptilePose81,
	sSceptilePose82,
	sSceptilePose83,
	sSceptilePose84,
	sSceptilePose85,
	sSceptilePose86,
	sSceptilePose19,
	sSceptilePose88,
	sSceptilePose89,
	sSceptilePose90,
	sSceptilePose91,
	sSceptilePose92,
	sSceptilePose93,
	sSceptilePose94,
	sSceptilePose1,
	sSceptilePose96,
	sSceptilePose97,
	sSceptilePose62,
	sSceptilePose99,
	sSceptilePose100,
	sSceptilePose33,
	sSceptilePose102,
	sSceptilePose103,
	sSceptilePose104,
	sSceptilePose105,
	sSceptilePose106,
	sSceptilePose107,
	sSceptilePose108,
	sSceptilePose109,
	sSceptilePose110,
	sSceptilePose111,
	sSceptilePose112,
	sSceptilePose113,
	sSceptilePose114,
	sSceptilePose115,
	sSceptilePose91,
	sSceptilePose117,
	sSceptilePose118,
	sSceptilePose1,
	sSceptilePose22,
	sSceptilePose19,
	sSceptilePose16,
	sSceptilePose13,
	sSceptilePose10,
	sSceptilePose7,
	sSceptilePose4,
	sSceptilePose127,
	sSceptilePose128,
	sSceptilePose129,
	sSceptilePose130,
	sSceptilePose131,
	sSceptilePose132,
	sSceptilePose133,
	sSceptilePose134,
	sSceptilePose135,
	sSceptilePose136,
	sSceptilePose1,
	sSceptilePose138,
	sSceptilePose29,
	sSceptilePose140,
	sSceptilePose33,
	sSceptilePose142,
	sSceptilePose104,
	sSceptilePose144,
	sSceptilePose77,
	sSceptilePose146,
	sSceptilePose147,
	sSceptilePose148,
	sSceptilePose113,
	sSceptilePose150,
	sSceptilePose151,
	sSceptilePose152,
	sSceptilePose97,
	sSceptilePose118,
	sSceptilePose155,
	sSceptilePose156,
	sSceptilePose157,
	sSceptilePose158,
	sSceptilePose159,
	sSceptilePose100,
	sSceptilePose28,
	sSceptilePose32,
	sSceptilePose163,
	sSceptilePose40,
	sSceptilePose44,
	sSceptilePose48,
	sSceptilePose167,
	sSceptilePose56,
	sSceptilePose1,
	sSceptilePose170,
	sSceptilePose97,
	sSceptilePose62,
	sSceptilePose173,
	sSceptilePose174,
	sSceptilePose33,
	sSceptilePose102,
	sSceptilePose103,
	sSceptilePose104,
	sSceptilePose179,
	sSceptilePose180,
	sSceptilePose107,
	sSceptilePose182,
	sSceptilePose109,
	sSceptilePose110,
	sSceptilePose185,
	sSceptilePose186,
	sSceptilePose113,
	sSceptilePose114,
	sSceptilePose115,
	sSceptilePose91,
	sSceptilePose191,
	sSceptilePose192,
	sSceptilePose97,
	sSceptilePose118,
	sSceptilePose155,
	sSceptilePose156,
	sSceptilePose197,
	sSceptilePose158,
	sSceptilePose159,
	sSceptilePose100,
	sSceptilePose1,
	sSceptilePose22,
	sSceptilePose19,
	sSceptilePose16,
	sSceptilePose13,
	sSceptilePose10,
	sSceptilePose7,
	sSceptilePose4,
};

static const struct PositionSets sAxPositionsSceptile[] = {
	[0] = { .set = { {0, -12}, {-8, -6}, {8, -6}, {0, -8} } },
	[1] = { .set = { {0, -11}, {-7, -7}, {7, -4}, {0, -7} } },
	[2] = { .set = { {0, -11}, {-7, -4}, {7, -7}, {0, -7} } },
	[3] = { .set = { {7, -13}, {9, -9}, {0, -6}, {3, -9} } },
	[4] = { .set = { {7, -12}, {8, -11}, {2, -6}, {3, -8} } },
	[5] = { .set = { {7, -12}, {10, -7}, {-2, -7}, {3, -8} } },
	[6] = { .set = { {10, -16}, {6, -13}, {8, -7}, {1, -10} } },
	[7] = { .set = { {10, -15}, {1, -11}, {10, -7}, {1, -10} } },
	[8] = { .set = { {10, -15}, {9, -11}, {4, -7}, {0, -10} } },
	[9] = { .set = { {7, -17}, {0, -14}, {10, -8}, {2, -13} } },
	[10] = { .set = { {7, -16}, {-1, -11}, {11, -9}, {2, -12} } },
	[11] = { .set = { {7, -16}, {4, -14}, {7, -7}, {2, -12} } },
	[12] = { .set = { {0, -20}, {6, -12}, {-7, -11}, {0, -12} } },
	[13] = { .set = { {0, -19}, {6, -9}, {-5, -13}, {-1, -12} } },
	[14] = { .set = { {0, -19}, {5, -15}, {-5, -8}, {0, -12} } },
	[15] = { .set = { {-7, -17}, {0, -14}, {-10, -8}, {-2, -13} } },
	[16] = { .set = { {-7, -16}, {1, -11}, {-11, -9}, {-2, -12} } },
	[17] = { .set = { {-7, -16}, {-4, -14}, {-7, -7}, {-2, -12} } },
	[18] = { .set = { {-10, -16}, {-6, -13}, {-8, -7}, {-1, -10} } },
	[19] = { .set = { {-10, -15}, {-1, -11}, {-10, -7}, {-1, -10} } },
	[20] = { .set = { {-10, -15}, {-9, -11}, {-4, -7}, {0, -10} } },
	[21] = { .set = { {-7, -13}, {-9, -9}, {0, -6}, {-3, -9} } },
	[22] = { .set = { {-7, -12}, {-8, -11}, {-2, -6}, {-3, -8} } },
	[23] = { .set = { {-7, -12}, {-10, -7}, {2, -7}, {-3, -8} } },
	[24] = { .set = { {0, -12}, {-8, -6}, {8, -6}, {0, -8} } },
	[25] = { .set = { {0, -11}, {-7, -7}, {7, -4}, {0, -7} } },
	[26] = { .set = { {0, -11}, {-7, -4}, {7, -7}, {0, -7} } },
	[27] = { .set = { {0, -9}, {-1, -6}, {5, -5}, {0, -7} } },
	[28] = { .set = { {5, -13}, {7, -9}, {-2, -6}, {1, -9} } },
	[29] = { .set = { {5, -12}, {6, -11}, {0, -6}, {1, -8} } },
	[30] = { .set = { {5, -12}, {8, -7}, {-4, -7}, {1, -8} } },
	[31] = { .set = { {3, -9}, {5, -5}, {-4, -5}, {0, -6} } },
	[32] = { .set = { {8, -16}, {4, -13}, {6, -7}, {-1, -10} } },
	[33] = { .set = { {8, -15}, {-1, -11}, {8, -7}, {-1, -10} } },
	[34] = { .set = { {8, -15}, {7, -11}, {2, -7}, {-2, -10} } },
	[35] = { .set = { {4, -11}, {1, -6}, {-2, -3}, {-4, -6} } },
	[36] = { .set = { {5, -16}, {-2, -13}, {8, -7}, {0, -12} } },
	[37] = { .set = { {5, -15}, {-3, -10}, {9, -8}, {0, -11} } },
	[38] = { .set = { {5, -15}, {2, -13}, {5, -6}, {0, -11} } },
	[39] = { .set = { {8, -11}, {3, -7}, {3, -4}, {-1, -8} } },
	[40] = { .set = { {0, -19}, {6, -11}, {-7, -10}, {0, -11} } },
	[41] = { .set = { {0, -18}, {6, -8}, {-5, -12}, {-1, -11} } },
	[42] = { .set = { {0, -18}, {5, -14}, {-5, -7}, {0, -11} } },
	[43] = { .set = { {-1, -15}, {2, -11}, {-6, -7}, {1, -8} } },
	[44] = { .set = { {-5, -16}, {2, -13}, {-8, -7}, {0, -12} } },
	[45] = { .set = { {-5, -15}, {3, -10}, {-9, -8}, {0, -11} } },
	[46] = { .set = { {-5, -15}, {-2, -13}, {-5, -6}, {0, -11} } },
	[47] = { .set = { {-8, -11}, {-3, -7}, {-3, -4}, {1, -8} } },
	[48] = { .set = { {-8, -16}, {-4, -13}, {-6, -7}, {1, -10} } },
	[49] = { .set = { {-8, -15}, {1, -11}, {-8, -7}, {1, -10} } },
	[50] = { .set = { {-8, -15}, {-7, -11}, {-2, -7}, {2, -10} } },
	[51] = { .set = { {-5, -12}, {-2, -7}, {1, -4}, {3, -7} } },
	[52] = { .set = { {-4, -13}, {-6, -9}, {3, -6}, {0, -9} } },
	[53] = { .set = { {-4, -12}, {-5, -11}, {1, -6}, {0, -8} } },
	[54] = { .set = { {-4, -12}, {-7, -7}, {5, -7}, {0, -8} } },
	[55] = { .set = { {-2, -9}, {-4, -5}, {5, -5}, {1, -6} } },
	[56] = { .set = { {0, -12}, {-8, -6}, {8, -6}, {0, -8} } },
	[57] = { .set = { {0, -9}, {-1, -6}, {5, -5}, {0, -7} } },
	[58] = { .set = { {-1, -19}, {-8, -14}, {5, -29}, {-1, -15} } },
	[59] = { .set = { {-1, -19}, {-8, -14}, {5, -29}, {-1, -15} } },
	[60] = { .set = { {-1, -12}, {-8, -8}, {6, -5}, {-1, -8} } },
	[61] = { .set = { {4, -13}, {6, -9}, {-3, -6}, {0, -9} } },
	[62] = { .set = { {2, -9}, {4, -5}, {-5, -5}, {-1, -6} } },
	[63] = { .set = { {4, -20}, {5, -14}, {1, -29}, {0, -15} } },
	[64] = { .set = { {4, -20}, {5, -14}, {1, -29}, {0, -15} } },
	[65] = { .set = { {5, -13}, {6, -12}, {0, -7}, {1, -9} } },
	[66] = { .set = { {9, -16}, {5, -13}, {7, -7}, {0, -10} } },
	[67] = { .set = { {6, -12}, {3, -7}, {0, -4}, {-2, -7} } },
	[68] = { .set = { {9, -25}, {1, -18}, {9, -31}, {1, -16} } },
	[69] = { .set = { {9, -24}, {1, -17}, {9, -30}, {1, -15} } },
	[70] = { .set = { {9, -15}, {0, -11}, {9, -7}, {0, -10} } },
	[71] = { .set = { {5, -16}, {-2, -13}, {8, -7}, {0, -12} } },
	[72] = { .set = { {8, -11}, {3, -7}, {3, -4}, {-1, -8} } },
	[73] = { .set = { {6, -22}, {-3, -12}, {9, -27}, {0, -13} } },
	[74] = { .set = { {6, -22}, {-3, -12}, {9, -27}, {0, -13} } },
	[75] = { .set = { {5, -15}, {-3, -10}, {9, -8}, {0, -11} } },
	[76] = { .set = { {0, -18}, {6, -10}, {-7, -9}, {0, -10} } },
	[77] = { .set = { {-1, -14}, {2, -10}, {-6, -6}, {1, -7} } },
	[78] = { .set = { {0, -24}, {7, -13}, {-7, -28}, {-1, -13} } },
	[79] = { .set = { {0, -24}, {7, -13}, {-7, -28}, {-1, -13} } },
	[80] = { .set = { {-1, -24}, {-8, -13}, {6, -28}, {0, -13} } },
	[81] = { .set = { {-1, -24}, {-8, -13}, {6, -28}, {0, -13} } },
	[82] = { .set = { {-7, -15}, {0, -12}, {-10, -6}, {-2, -11} } },
	[83] = { .set = { {-10, -10}, {-5, -6}, {-5, -3}, {-1, -7} } },
	[84] = { .set = { {-8, -21}, {1, -11}, {-11, -26}, {-2, -12} } },
	[85] = { .set = { {-8, -21}, {1, -11}, {-11, -26}, {-2, -12} } },
	[86] = { .set = { {-10, -16}, {-6, -13}, {-8, -7}, {-1, -10} } },
	[87] = { .set = { {-7, -12}, {-4, -7}, {-1, -4}, {1, -7} } },
	[88] = { .set = { {-10, -25}, {-2, -18}, {-10, -31}, {-2, -16} } },
	[89] = { .set = { {-10, -24}, {-2, -17}, {-10, -30}, {-2, -15} } },
	[90] = { .set = { {-5, -13}, {-7, -9}, {2, -6}, {-1, -9} } },
	[91] = { .set = { {-3, -9}, {-5, -5}, {4, -5}, {0, -6} } },
	[92] = { .set = { {-5, -20}, {-6, -14}, {-2, -29}, {-1, -15} } },
	[93] = { .set = { {-5, -20}, {-6, -14}, {-2, -29}, {-1, -15} } },
	[94] = { .set = { {0, -12}, {-8, -6}, {8, -6}, {0, -8} } },
	[95] = { .set = { {0, -18}, {-9, -14}, {11, -14}, {0, -13} } },
	[96] = { .set = { {0, -3}, {-15, -12}, {14, -12}, {0, -9} } },
	[97] = { .set = { {4, -13}, {6, -9}, {-3, -6}, {0, -9} } },
	[98] = { .set = { {0, -19}, {5, -16}, {-7, -11}, {-1, -11} } },
	[99] = { .set = { {8, -4}, {13, -16}, {-11, -7}, {-1, -7} } },
	[100] = { .set = { {8, -16}, {4, -13}, {6, -7}, {-1, -10} } },
	[101] = { .set = { {4, -21}, {2, -14}, {1, -8}, {-1, -11} } },
	[102] = { .set = { {15, -6}, {4, -14}, {0, -2}, {1, -7} } },
	[103] = { .set = { {6, -16}, {-1, -13}, {9, -7}, {1, -12} } },
	[104] = { .set = { {5, -22}, {-4, -19}, {10, -12}, {0, -12} } },
	[105] = { .set = { {11, -15}, {-3, -17}, {17, -7}, {3, -10} } },
	[106] = { .set = { {-1, -20}, {5, -12}, {-8, -11}, {-1, -12} } },
	[107] = { .set = { {0, -27}, {9, -19}, {-11, -20}, {-1, -14} } },
	[108] = { .set = { {-1, -20}, {12, -16}, {-14, -16}, {-1, -13} } },
	[109] = { .set = { {-7, -16}, {0, -13}, {-10, -7}, {-2, -12} } },
	[110] = { .set = { {-6, -22}, {3, -19}, {-11, -12}, {-1, -12} } },
	[111] = { .set = { {-12, -15}, {2, -17}, {-18, -7}, {-4, -10} } },
	[112] = { .set = { {-9, -16}, {-5, -13}, {-7, -7}, {0, -10} } },
	[113] = { .set = { {-5, -21}, {-3, -14}, {-2, -8}, {0, -11} } },
	[114] = { .set = { {-16, -6}, {-5, -14}, {-1, -2}, {-2, -7} } },
	[115] = { .set = { {-5, -13}, {-7, -9}, {2, -6}, {-1, -9} } },
	[116] = { .set = { {-1, -19}, {-6, -16}, {6, -11}, {0, -11} } },
	[117] = { .set = { {-9, -4}, {-14, -16}, {10, -7}, {0, -7} } },
	[118] = { .set = { {0, -12}, {-8, -6}, {8, -6}, {0, -8} } },
	[119] = { .set = { {-7, -13}, {-9, -9}, {0, -6}, {-3, -9} } },
	[120] = { .set = { {-10, -16}, {-6, -13}, {-8, -7}, {-1, -10} } },
	[121] = { .set = { {-7, -17}, {0, -14}, {-10, -8}, {-2, -13} } },
	[122] = { .set = { {0, -20}, {6, -12}, {-7, -11}, {0, -12} } },
	[123] = { .set = { {7, -17}, {0, -14}, {10, -8}, {2, -13} } },
	[124] = { .set = { {10, -16}, {6, -13}, {8, -7}, {1, -10} } },
	[125] = { .set = { {7, -13}, {9, -9}, {0, -6}, {3, -9} } },
	[126] = { .set = { {-1, -11}, {-7, -8}, {4, -1}, {-1, -7} } },
	[127] = { .set = { {-2, -10}, {-7, -7}, {2, -2}, {-1, -7} } },
	[128] = { .set = { {-2, -19}, {-4, -24}, {5, -16}, {0, -11} } },
	[129] = { .set = { {0, -16}, {1, -24}, {-6, -16}, {-3, -12} } },
	[130] = { .set = { {-1, -18}, {-1, -24}, {-6, -14}, {-4, -11} } },
	[131] = { .set = { {2, -17}, {-4, -22}, {3, -16}, {-2, -8} } },
	[132] = { .set = { {2, -17}, {6, -17}, {-5, -14}, {0, -9} } },
	[133] = { .set = { {-3, -17}, {3, -22}, {-4, -16}, {1, -8} } },
	[134] = { .set = { {0, -18}, {0, -24}, {5, -14}, {3, -11} } },
	[135] = { .set = { {-1, -16}, {-2, -24}, {5, -16}, {2, -12} } },
	[136] = { .set = { {0, -12}, {-8, -6}, {8, -6}, {0, -8} } },
	[137] = { .set = { {0, -11}, {-9, -5}, {9, -5}, {0, -7} } },
	[138] = { .set = { {5, -13}, {7, -9}, {-2, -6}, {1, -9} } },
	[139] = { .set = { {7, -12}, {9, -8}, {-2, -5}, {1, -9} } },
	[140] = { .set = { {8, -16}, {4, -13}, {6, -7}, {-1, -10} } },
	[141] = { .set = { {10, -14}, {4, -10}, {7, -7}, {-1, -8} } },
	[142] = { .set = { {6, -16}, {-1, -13}, {9, -7}, {1, -12} } },
	[143] = { .set = { {9, -14}, {1, -13}, {11, -6}, {2, -10} } },
	[144] = { .set = { {0, -18}, {6, -10}, {-7, -9}, {0, -10} } },
	[145] = { .set = { {0, -17}, {7, -12}, {-7, -12}, {0, -12} } },
	[146] = { .set = { {-6, -16}, {1, -13}, {-9, -7}, {-1, -12} } },
	[147] = { .set = { {-9, -14}, {-1, -13}, {-11, -6}, {-2, -10} } },
	[148] = { .set = { {-9, -16}, {-5, -13}, {-7, -7}, {0, -10} } },
	[149] = { .set = { {-11, -14}, {-5, -10}, {-8, -7}, {0, -8} } },
	[150] = { .set = { {-5, -12}, {-7, -8}, {2, -5}, {-1, -8} } },
	[151] = { .set = { {-7, -11}, {-9, -7}, {2, -4}, {-1, -8} } },
	[152] = { .set = { {0, -3}, {-15, -12}, {14, -12}, {0, -9} } },
	[153] = { .set = { {-9, -4}, {-14, -16}, {10, -7}, {0, -7} } },
	[154] = { .set = { {-14, -7}, {-3, -15}, {1, -3}, {0, -8} } },
	[155] = { .set = { {-8, -15}, {6, -17}, {-14, -7}, {0, -10} } },
	[156] = { .set = { {-1, -15}, {12, -11}, {-14, -11}, {-1, -8} } },
	[157] = { .set = { {7, -15}, {-7, -17}, {13, -7}, {-1, -10} } },
	[158] = { .set = { {13, -7}, {2, -15}, {-2, -3}, {-1, -8} } },
	[159] = { .set = { {8, -4}, {13, -16}, {-11, -7}, {-1, -7} } },
	[160] = { .set = { {0, -9}, {-1, -6}, {5, -5}, {0, -7} } },
	[161] = { .set = { {3, -9}, {5, -5}, {-4, -5}, {0, -6} } },
	[162] = { .set = { {7, -11}, {4, -6}, {1, -3}, {-1, -6} } },
	[163] = { .set = { {8, -11}, {3, -7}, {3, -4}, {-1, -8} } },
	[164] = { .set = { {-1, -15}, {2, -11}, {-6, -7}, {1, -8} } },
	[165] = { .set = { {-8, -11}, {-3, -7}, {-3, -4}, {1, -8} } },
	[166] = { .set = { {-8, -12}, {-5, -7}, {-2, -4}, {0, -7} } },
	[167] = { .set = { {-2, -9}, {-4, -5}, {5, -5}, {1, -6} } },
	[168] = { .set = { {0, -12}, {-8, -6}, {8, -6}, {0, -8} } },
	[169] = { .set = { {0, -16}, {-9, -12}, {11, -12}, {0, -11} } },
	[170] = { .set = { {0, -3}, {-15, -12}, {14, -12}, {0, -9} } },
	[171] = { .set = { {4, -13}, {6, -9}, {-3, -6}, {0, -9} } },
	[172] = { .set = { {0, -18}, {5, -15}, {-7, -10}, {-1, -10} } },
	[173] = { .set = { {7, -4}, {12, -16}, {-12, -7}, {-2, -7} } },
	[174] = { .set = { {8, -16}, {4, -13}, {6, -7}, {-1, -10} } },
	[175] = { .set = { {4, -21}, {2, -14}, {1, -8}, {-1, -11} } },
	[176] = { .set = { {15, -6}, {4, -14}, {0, -2}, {1, -7} } },
	[177] = { .set = { {6, -16}, {-1, -13}, {9, -7}, {1, -12} } },
	[178] = { .set = { {4, -22}, {-5, -19}, {9, -12}, {-1, -12} } },
	[179] = { .set = { {9, -15}, {-5, -17}, {15, -7}, {1, -10} } },
	[180] = { .set = { {-1, -20}, {5, -12}, {-8, -11}, {-1, -12} } },
	[181] = { .set = { {-1, -25}, {8, -17}, {-12, -18}, {-2, -12} } },
	[182] = { .set = { {-1, -20}, {12, -16}, {-14, -16}, {-1, -13} } },
	[183] = { .set = { {-7, -16}, {0, -13}, {-10, -7}, {-2, -12} } },
	[184] = { .set = { {-5, -22}, {4, -19}, {-10, -12}, {0, -12} } },
	[185] = { .set = { {-10, -15}, {4, -17}, {-16, -7}, {-2, -10} } },
	[186] = { .set = { {-9, -16}, {-5, -13}, {-7, -7}, {0, -10} } },
	[187] = { .set = { {-5, -21}, {-3, -14}, {-2, -8}, {0, -11} } },
	[188] = { .set = { {-16, -6}, {-5, -14}, {-1, -2}, {-2, -7} } },
	[189] = { .set = { {-5, -13}, {-7, -9}, {2, -6}, {-1, -9} } },
	[190] = { .set = { {-1, -18}, {-6, -15}, {6, -10}, {0, -10} } },
	[191] = { .set = { {-8, -4}, {-13, -16}, {11, -7}, {1, -7} } },
	[192] = { .set = { {0, -3}, {-15, -12}, {14, -12}, {0, -9} } },
	[193] = { .set = { {-9, -4}, {-14, -16}, {10, -7}, {0, -7} } },
	[194] = { .set = { {-14, -7}, {-3, -15}, {1, -3}, {0, -8} } },
	[195] = { .set = { {-8, -15}, {6, -17}, {-14, -7}, {0, -10} } },
	[196] = { .set = { {-1, -19}, {12, -15}, {-14, -15}, {-1, -12} } },
	[197] = { .set = { {7, -15}, {-7, -17}, {13, -7}, {-1, -10} } },
	[198] = { .set = { {13, -7}, {2, -15}, {-2, -3}, {-1, -8} } },
	[199] = { .set = { {8, -4}, {13, -16}, {-11, -7}, {-1, -7} } },
	[200] = { .set = { {0, -12}, {-8, -6}, {8, -6}, {0, -8} } },
	[201] = { .set = { {-7, -13}, {-9, -9}, {0, -6}, {-3, -9} } },
	[202] = { .set = { {-10, -16}, {-6, -13}, {-8, -7}, {-1, -10} } },
	[203] = { .set = { {-7, -17}, {0, -14}, {-10, -8}, {-2, -13} } },
	[204] = { .set = { {0, -20}, {6, -12}, {-7, -11}, {0, -12} } },
	[205] = { .set = { {7, -17}, {0, -14}, {10, -8}, {2, -13} } },
	[206] = { .set = { {10, -16}, {6, -13}, {8, -7}, {1, -10} } },
	[207] = { .set = { {7, -13}, {9, -9}, {0, -6}, {3, -9} } },
};

static const ax_anim *const sSceptileAnimTable1[] = {
	AX_ANIM_PTR(sSceptileAnims_1_1),
	AX_ANIM_PTR(sSceptileAnims_1_2),
	AX_ANIM_PTR(sSceptileAnims_1_3),
	AX_ANIM_PTR(sSceptileAnims_1_4),
	AX_ANIM_PTR(sSceptileAnims_1_5),
	AX_ANIM_PTR(sSceptileAnims_1_6),
	AX_ANIM_PTR(sSceptileAnims_1_7),
	AX_ANIM_PTR(sSceptileAnims_1_8),
};

static const ax_anim *const sSceptileAnimTable2[] = {
	AX_ANIM_PTR(sSceptileAnims_2_1),
	AX_ANIM_PTR(sSceptileAnims_2_2),
	AX_ANIM_PTR(sSceptileAnims_2_3),
	AX_ANIM_PTR(sSceptileAnims_2_4),
	AX_ANIM_PTR(sSceptileAnims_2_5),
	AX_ANIM_PTR(sSceptileAnims_2_6),
	AX_ANIM_PTR(sSceptileAnims_2_7),
	AX_ANIM_PTR(sSceptileAnims_2_8),
};

static const ax_anim *const sSceptileAnimTable3[] = {
	AX_ANIM_PTR(sSceptileAnims_3_1),
	AX_ANIM_PTR(sSceptileAnims_3_2),
	AX_ANIM_PTR(sSceptileAnims_3_3),
	AX_ANIM_PTR(sSceptileAnims_3_4),
	AX_ANIM_PTR(sSceptileAnims_3_5),
	AX_ANIM_PTR(sSceptileAnims_3_6),
	AX_ANIM_PTR(sSceptileAnims_3_7),
	AX_ANIM_PTR(sSceptileAnims_3_8),
};

static const ax_anim *const sSceptileAnimTable4[] = {
	AX_ANIM_PTR(sSceptileAnims_4_1),
	AX_ANIM_PTR(sSceptileAnims_4_2),
	AX_ANIM_PTR(sSceptileAnims_4_3),
	AX_ANIM_PTR(sSceptileAnims_4_4),
	AX_ANIM_PTR(sSceptileAnims_4_5),
	AX_ANIM_PTR(sSceptileAnims_4_6),
	AX_ANIM_PTR(sSceptileAnims_4_7),
	AX_ANIM_PTR(sSceptileAnims_4_8),
};

static const ax_anim *const sSceptileAnimTable5[] = {
	AX_ANIM_PTR(sSceptileAnims_5_1),
	AX_ANIM_PTR(sSceptileAnims_5_2),
	AX_ANIM_PTR(sSceptileAnims_5_3),
	AX_ANIM_PTR(sSceptileAnims_5_4),
	AX_ANIM_PTR(sSceptileAnims_5_5),
	AX_ANIM_PTR(sSceptileAnims_5_6),
	AX_ANIM_PTR(sSceptileAnims_5_7),
	AX_ANIM_PTR(sSceptileAnims_5_8),
};

static const ax_anim *const sSceptileAnimTable6[] = {
	AX_ANIM_PTR(sSceptileAnims_6_1),
	AX_ANIM_PTR(sSceptileAnims_6_1),
	AX_ANIM_PTR(sSceptileAnims_6_1),
	AX_ANIM_PTR(sSceptileAnims_6_1),
	AX_ANIM_PTR(sSceptileAnims_6_1),
	AX_ANIM_PTR(sSceptileAnims_6_1),
	AX_ANIM_PTR(sSceptileAnims_6_1),
	AX_ANIM_PTR(sSceptileAnims_6_1),
};

static const ax_anim *const sSceptileAnimTable7[] = {
	AX_ANIM_PTR(sSceptileAnims_7_1),
	AX_ANIM_PTR(sSceptileAnims_7_2),
	AX_ANIM_PTR(sSceptileAnims_7_3),
	AX_ANIM_PTR(sSceptileAnims_7_4),
	AX_ANIM_PTR(sSceptileAnims_7_5),
	AX_ANIM_PTR(sSceptileAnims_7_6),
	AX_ANIM_PTR(sSceptileAnims_7_7),
	AX_ANIM_PTR(sSceptileAnims_7_8),
};

static const ax_anim *const sSceptileAnimTable8[] = {
	AX_ANIM_PTR(sSceptileAnims_8_1),
	AX_ANIM_PTR(sSceptileAnims_8_2),
	AX_ANIM_PTR(sSceptileAnims_8_3),
	AX_ANIM_PTR(sSceptileAnims_8_4),
	AX_ANIM_PTR(sSceptileAnims_8_5),
	AX_ANIM_PTR(sSceptileAnims_8_6),
	AX_ANIM_PTR(sSceptileAnims_8_7),
	AX_ANIM_PTR(sSceptileAnims_8_8),
};

static const ax_anim *const sSceptileAnimTable9[] = {
	AX_ANIM_PTR(sSceptileAnims_9_1),
	AX_ANIM_PTR(sSceptileAnims_9_2),
	AX_ANIM_PTR(sSceptileAnims_9_3),
	AX_ANIM_PTR(sSceptileAnims_9_4),
	AX_ANIM_PTR(sSceptileAnims_9_5),
	AX_ANIM_PTR(sSceptileAnims_9_6),
	AX_ANIM_PTR(sSceptileAnims_9_7),
	AX_ANIM_PTR(sSceptileAnims_9_8),
};

static const ax_anim *const sSceptileAnimTable10[] = {
	AX_ANIM_PTR(sSceptileAnims_10_1),
	AX_ANIM_PTR(sSceptileAnims_10_2),
	AX_ANIM_PTR(sSceptileAnims_10_3),
	AX_ANIM_PTR(sSceptileAnims_10_4),
	AX_ANIM_PTR(gAxSharedAnim_00726),
	AX_ANIM_PTR(gAxSharedAnim_00738),
	AX_ANIM_PTR(gAxSharedAnim_00749),
	AX_ANIM_PTR(gAxSharedAnim_00759),
};

static const ax_anim *const sSceptileAnimTable11[] = {
	AX_ANIM_PTR(sSceptileAnims_11_1),
	AX_ANIM_PTR(sSceptileAnims_11_2),
	AX_ANIM_PTR(sSceptileAnims_11_3),
	AX_ANIM_PTR(sSceptileAnims_11_4),
	AX_ANIM_PTR(sSceptileAnims_11_5),
	AX_ANIM_PTR(sSceptileAnims_11_6),
	AX_ANIM_PTR(sSceptileAnims_11_7),
	AX_ANIM_PTR(sSceptileAnims_11_8),
};

static const ax_anim *const sSceptileAnimTable12[] = {
	AX_ANIM_PTR(sSceptileAnims_12_1),
	AX_ANIM_PTR(gAxSharedAnim_01203),
	AX_ANIM_PTR(gAxSharedAnim_01182),
	AX_ANIM_PTR(gAxSharedAnim_01171),
	AX_ANIM_PTR(gAxSharedAnim_01170),
	AX_ANIM_PTR(sSceptileAnims_12_6),
	AX_ANIM_PTR(sSceptileAnims_12_7),
	AX_ANIM_PTR(gAxSharedAnim_01116),
};

static const ax_anim *const sSceptileAnimTable13[] = {
	AX_ANIM_PTR(sSceptileAnims_13_1),
	AX_ANIM_PTR(sSceptileAnims_13_2),
	AX_ANIM_PTR(sSceptileAnims_13_3),
	AX_ANIM_PTR(sSceptileAnims_13_4),
	AX_ANIM_PTR(sSceptileAnims_13_5),
	AX_ANIM_PTR(sSceptileAnims_13_6),
	AX_ANIM_PTR(sSceptileAnims_13_7),
	AX_ANIM_PTR(sSceptileAnims_13_8),
};

static const ax_anim *const *const sAxAnimationsSceptile[] = {
	sSceptileAnimTable1,
	sSceptileAnimTable2,
	sSceptileAnimTable3,
	sSceptileAnimTable4,
	sSceptileAnimTable5,
	sSceptileAnimTable6,
	sSceptileAnimTable7,
	sSceptileAnimTable8,
	sSceptileAnimTable9,
	sSceptileAnimTable10,
	sSceptileAnimTable11,
	sSceptileAnimTable12,
	sSceptileAnimTable13,
};

static const ax_sprite *const sAxSpritesSceptile[] = {
	sSceptileSprites1,
	sSceptileSprites2,
	sSceptileSprites3,
	sSceptileSprites4,
	sSceptileSprites5,
	sSceptileSprites6,
	sSceptileSprites7,
	sSceptileSprites8,
	sSceptileSprites9,
	sSceptileSprites10,
	sSceptileSprites11,
	sSceptileSprites12,
	sSceptileSprites13,
	sSceptileSprites14,
	sSceptileSprites15,
	sSceptileSprites16,
	sSceptileSprites17,
	sSceptileSprites18,
	sSceptileSprites19,
	sSceptileSprites20,
	sSceptileSprites21,
	sSceptileSprites22,
	sSceptileSprites23,
	sSceptileSprites24,
	sSceptileSprites25,
	sSceptileSprites26,
	sSceptileSprites27,
	sSceptileSprites28,
	sSceptileSprites29,
	sSceptileSprites30,
	sSceptileSprites31,
	sSceptileSprites32,
	sSceptileSprites33,
	sSceptileSprites34,
	sSceptileSprites35,
	sSceptileSprites36,
	sSceptileSprites37,
	sSceptileSprites38,
	sSceptileSprites39,
	sSceptileSprites40,
	sSceptileSprites41,
	sSceptileSprites42,
	sSceptileSprites43,
	sSceptileSprites44,
	sSceptileSprites45,
	sSceptileSprites46,
	sSceptileSprites47,
	sSceptileSprites48,
	sSceptileSprites49,
	sSceptileSprites50,
	sSceptileSprites51,
	sSceptileSprites52,
	sSceptileSprites53,
	sSceptileSprites54,
	sSceptileSprites55,
	sSceptileSprites56,
	sSceptileSprites57,
	sSceptileSprites58,
	sSceptileSprites59,
	sSceptileSprites60,
	sSceptileSprites61,
	sSceptileSprites62,
	sSceptileSprites63,
	sSceptileSprites64,
	sSceptileSprites65,
	sSceptileSprites66,
	sSceptileSprites67,
	sSceptileSprites68,
	sSceptileSprites69,
	sSceptileSprites70,
	sSceptileSprites71,
	sSceptileSprites72,
	sSceptileSprites73,
	sSceptileSprites74,
	sSceptileSprites75,
	sSceptileSprites76,
	sSceptileSprites77,
	sSceptileSprites78,
	sSceptileSprites79,
};

static const axmain sAxMainSceptile = {
	.poses = sAxPosesSceptile,
	.animations = sAxAnimationsSceptile,
	.animCount = ARRAY_COUNT(sAxAnimationsSceptile),
	.spriteData = sAxSpritesSceptile,
	.positions = sAxPositionsSceptile,
};
