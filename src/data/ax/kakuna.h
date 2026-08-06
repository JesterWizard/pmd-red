/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainKakuna;
const SiroArchive gAxKakuna = {"SIRO", &sAxMainKakuna};

static const ax_pose sKakunaPose1[] = {
	AX_POSE(0, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose2[] = {
	AX_POSE(1, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose3[] = {
	AX_POSE(2, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose4[] = {
	AX_POSE(3, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose5[] = {
	AX_POSE(4, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose6[] = {
	AX_POSE(5, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose7[] = {
	AX_POSE(6, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose8[] = {
	AX_POSE(7, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose9[] = {
	AX_POSE(8, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose10[] = {
	AX_POSE(9, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose11[] = {
	AX_POSE(6, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose12[] = {
	AX_POSE(7, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose13[] = {
	AX_POSE(4, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose14[] = {
	AX_POSE(5, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose15[] = {
	AX_POSE(2, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose16[] = {
	AX_POSE(3, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose17[] = {
	AX_POSE(10, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose18[] = {
	AX_POSE(11, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose19[] = {
	AX_POSE(12, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose20[] = {
	AX_POSE(13, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose21[] = {
	AX_POSE(11, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose22[] = {
	AX_POSE(14, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(11, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose24[] = {
	AX_POSE(15, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose25[] = {
	AX_POSE(16, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose26[] = {
	AX_POSE(17, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose27[] = {
	AX_POSE(18, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose28[] = {
	AX_POSE(16, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose29[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(16, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose31[] = {
	AX_POSE(20, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose32[] = {
	AX_POSE(21, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose33[] = {
	AX_POSE(22, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose34[] = {
	AX_POSE(23, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose35[] = {
	AX_POSE(21, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose36[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(21, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose38[] = {
	AX_POSE(25, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose39[] = {
	AX_POSE(26, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose40[] = {
	AX_POSE(27, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose41[] = {
	AX_POSE(28, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose42[] = {
	AX_POSE(26, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose43[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(26, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose45[] = {
	AX_POSE(30, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose46[] = {
	AX_POSE(31, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose47[] = {
	AX_POSE(32, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose48[] = {
	AX_POSE(33, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose50[] = {
	AX_POSE(34, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(31, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose52[] = {
	AX_POSE(25, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose53[] = {
	AX_POSE(26, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose54[] = {
	AX_POSE(27, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose55[] = {
	AX_POSE(28, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose56[] = {
	AX_POSE(26, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose57[] = {
	AX_POSE(29, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(26, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose59[] = {
	AX_POSE(20, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose60[] = {
	AX_POSE(21, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose61[] = {
	AX_POSE(22, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose62[] = {
	AX_POSE(23, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose63[] = {
	AX_POSE(21, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose64[] = {
	AX_POSE(24, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(21, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose65[] = {
	AX_POSE(4, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose66[] = {
	AX_POSE(15, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose67[] = {
	AX_POSE(16, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose68[] = {
	AX_POSE(17, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose69[] = {
	AX_POSE(18, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose70[] = {
	AX_POSE(16, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose71[] = {
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(16, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose130[] = {
	AX_POSE(3, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose131[] = {
	AX_POSE(5, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose135[] = {
	AX_POSE(5, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose136[] = {
	AX_POSE(3, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose140[] = {
	AX_POSE(6, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose147[] = {
	AX_POSE(5, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose150[] = {
	AX_POSE(7, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose151[] = {
	AX_POSE(5, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose153[] = {
	AX_POSE(35, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose154[] = {
	AX_POSE(36, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose155[] = {
	AX_POSE(37, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose156[] = {
	AX_POSE(38, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose157[] = {
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose158[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose159[] = {
	AX_POSE(41, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose160[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose161[] = {
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKakunaPose162[] = {
	AX_POSE(38, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_anim sKakunaAnims_1_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 1, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_1_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_1_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 4, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 5, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_1_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 7, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_1_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_1_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 10, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 11, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_1_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 13, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_1_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 14, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 16, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 17, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 19, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 16, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 17, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 22, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 19, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 20, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 21, .offset = {0, 8}, .shadow = {0, 8} },
	{ .frames = 1, .unkFlags = 1, .poseId = 21, .offset = {0, 21}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 20, .offset = {1, 21}, .shadow = {1, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 20, .offset = {0, 21}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 20, .offset = {1, 21}, .shadow = {1, 21} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 23, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 23, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 26, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 1, .poseId = 28, .offset = {18, 19}, .shadow = {18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {17, 20}, .shadow = {17, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {18, 19}, .shadow = {18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {17, 20}, .shadow = {17, 20} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 33, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 35, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {18, 1}, .shadow = {18, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 40, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {11, -7}, .shadow = {11, -7} },
	{ .frames = 1, .unkFlags = 1, .poseId = 42, .offset = {18, -13}, .shadow = {18, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {19, -12}, .shadow = {19, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {18, -13}, .shadow = {18, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {19, -12}, .shadow = {19, -12} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 47, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 1, .poseId = 49, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, -12}, .shadow = {1, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, -12}, .shadow = {1, -12} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 54, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {-11, -7}, .shadow = {-11, -7} },
	{ .frames = 1, .unkFlags = 1, .poseId = 56, .offset = {-18, -13}, .shadow = {-18, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-19, -12}, .shadow = {-19, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-18, -13}, .shadow = {-18, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-19, -12}, .shadow = {-19, -12} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 61, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 63, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {-18, 1}, .shadow = {-18, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 68, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {-8, 8}, .shadow = {-8, 8} },
	{ .frames = 1, .unkFlags = 1, .poseId = 70, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-17, 20}, .shadow = {-17, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-17, 20}, .shadow = {-17, 20} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 75, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 77, .offset = {0, 8}, .shadow = {0, 8} },
	{ .frames = 1, .unkFlags = 1, .poseId = 77, .offset = {0, 21}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {1, 21}, .shadow = {1, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 21}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {1, 21}, .shadow = {1, 21} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 82, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 83, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 84, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 1, .poseId = 84, .offset = {18, 19}, .shadow = {18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {17, 20}, .shadow = {17, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {18, 19}, .shadow = {18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {17, 20}, .shadow = {17, 20} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 89, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 91, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {18, 1}, .shadow = {18, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 96, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {11, -7}, .shadow = {11, -7} },
	{ .frames = 1, .unkFlags = 1, .poseId = 98, .offset = {18, -13}, .shadow = {18, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {19, -12}, .shadow = {19, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {18, -13}, .shadow = {18, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {19, -12}, .shadow = {19, -12} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 103, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 1, .poseId = 105, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {1, -12}, .shadow = {1, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {1, -12}, .shadow = {1, -12} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 110, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 112, .offset = {-11, -7}, .shadow = {-11, -7} },
	{ .frames = 1, .unkFlags = 1, .poseId = 112, .offset = {-18, -13}, .shadow = {-18, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-19, -12}, .shadow = {-19, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-18, -13}, .shadow = {-18, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-19, -12}, .shadow = {-19, -12} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 117, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 118, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 119, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 119, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-18, 1}, .shadow = {-18, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 124, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 126, .offset = {-8, 8}, .shadow = {-8, 8} },
	{ .frames = 1, .unkFlags = 1, .poseId = 126, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {-17, 20}, .shadow = {-17, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {-17, 20}, .shadow = {-17, 20} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_5_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 136, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 138, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 136, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 136, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 136, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_5_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 143, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 136, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 137, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 143, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_5_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 142, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 136, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 142, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_5_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 141, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 143, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 136, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 141, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_5_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 140, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 142, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 136, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 140, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_5_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 139, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 141, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 136, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 139, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_5_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 138, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 140, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 136, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 138, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_5_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 137, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 139, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 136, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 137, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_8_1[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 162, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_8_2[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 169, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_8_3[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 168, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_8_4[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 167, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_8_5[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 166, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_8_6[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 165, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_8_7[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 164, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_8_8[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 163, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKakunaAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {6, 4}, .shadow = {6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {7, 19}, .shadow = {7, 19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 174, .offset = {1, 24}, .shadow = {1, 24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 175, .offset = {-6, 19}, .shadow = {-6, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-8, 9}, .shadow = {-8, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {-6, 4}, .shadow = {-6, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sKakunaGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_1.4bpp.lz");
static const ax_sprite sKakunaSprites1[] = {
	{sKakunaGfx1, ARRAY_COUNT(sKakunaGfx1)}, 
	{NULL, 0}
};
static const u8 sKakunaGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_2.4bpp.lz");
static const ax_sprite sKakunaSprites2[] = {
	{sKakunaGfx2, ARRAY_COUNT(sKakunaGfx2)}, 
	{NULL, 0}
};
static const u8 sKakunaGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_3.4bpp.lz");
static const ax_sprite sKakunaSprites3[] = {
	{sKakunaGfx3, ARRAY_COUNT(sKakunaGfx3)}, 
	{NULL, 0}
};
static const u8 sKakunaGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_4.4bpp.lz");
static const ax_sprite sKakunaSprites4[] = {
	{sKakunaGfx4, ARRAY_COUNT(sKakunaGfx4)}, 
	{NULL, 0}
};
static const u8 sKakunaGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_5.4bpp.lz");
static const ax_sprite sKakunaSprites5[] = {
	{sKakunaGfx5, ARRAY_COUNT(sKakunaGfx5)}, 
	{NULL, 0}
};
static const u8 sKakunaGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_6.4bpp.lz");
static const ax_sprite sKakunaSprites6[] = {
	{sKakunaGfx6, ARRAY_COUNT(sKakunaGfx6)}, 
	{NULL, 0}
};
static const u8 sKakunaGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_7.4bpp.lz");
static const ax_sprite sKakunaSprites7[] = {
	{sKakunaGfx7, ARRAY_COUNT(sKakunaGfx7)}, 
	{NULL, 0}
};
static const u8 sKakunaGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_8.4bpp.lz");
static const ax_sprite sKakunaSprites8[] = {
	{sKakunaGfx8, ARRAY_COUNT(sKakunaGfx8)}, 
	{NULL, 0}
};
static const u8 sKakunaGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_9.4bpp.lz");
static const ax_sprite sKakunaSprites9[] = {
	{sKakunaGfx9, ARRAY_COUNT(sKakunaGfx9)}, 
	{NULL, 0}
};
static const u8 sKakunaGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_10.4bpp.lz");
static const ax_sprite sKakunaSprites10[] = {
	{sKakunaGfx10, ARRAY_COUNT(sKakunaGfx10)}, 
	{NULL, 0}
};
static const u8 sKakunaGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_11.4bpp.lz");
static const ax_sprite sKakunaSprites11[] = {
	{sKakunaGfx11, ARRAY_COUNT(sKakunaGfx11)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_12.4bpp.lz");
static const ax_sprite sKakunaSprites12[] = {
	{sKakunaGfx12, ARRAY_COUNT(sKakunaGfx12)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_13.4bpp.lz");
static const ax_sprite sKakunaSprites13[] = {
	{sKakunaGfx13, ARRAY_COUNT(sKakunaGfx13)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_14.4bpp.lz");
static const ax_sprite sKakunaSprites14[] = {
	{sKakunaGfx14, ARRAY_COUNT(sKakunaGfx14)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_15.4bpp.lz");
static const u8 sKakunaGfx15_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_15_1.4bpp.lz");
static const ax_sprite sKakunaSprites15[] = {
	{sKakunaGfx15, ARRAY_COUNT(sKakunaGfx15)}, 
	{NULL, 32}, 
	{sKakunaGfx15_1, ARRAY_COUNT(sKakunaGfx15_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKakunaGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_16.4bpp.lz");
static const ax_sprite sKakunaSprites16[] = {
	{sKakunaGfx16, ARRAY_COUNT(sKakunaGfx16)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_17.4bpp.lz");
static const ax_sprite sKakunaSprites17[] = {
	{sKakunaGfx17, ARRAY_COUNT(sKakunaGfx17)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_18.4bpp.lz");
static const ax_sprite sKakunaSprites18[] = {
	{sKakunaGfx18, ARRAY_COUNT(sKakunaGfx18)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_19.4bpp.lz");
static const ax_sprite sKakunaSprites19[] = {
	{sKakunaGfx19, ARRAY_COUNT(sKakunaGfx19)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_20.4bpp.lz");
static const u8 sKakunaGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_20_1.4bpp.lz");
static const ax_sprite sKakunaSprites20[] = {
	{NULL, 32}, 
	{sKakunaGfx20, ARRAY_COUNT(sKakunaGfx20)}, 
	{NULL, 32}, 
	{sKakunaGfx20_1, ARRAY_COUNT(sKakunaGfx20_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKakunaGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_21.4bpp.lz");
static const ax_sprite sKakunaSprites21[] = {
	{sKakunaGfx21, ARRAY_COUNT(sKakunaGfx21)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_22.4bpp.lz");
static const ax_sprite sKakunaSprites22[] = {
	{sKakunaGfx22, ARRAY_COUNT(sKakunaGfx22)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_23.4bpp.lz");
static const ax_sprite sKakunaSprites23[] = {
	{sKakunaGfx23, ARRAY_COUNT(sKakunaGfx23)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_24.4bpp.lz");
static const ax_sprite sKakunaSprites24[] = {
	{sKakunaGfx24, ARRAY_COUNT(sKakunaGfx24)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_25.4bpp.lz");
static const u8 sKakunaGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_25_1.4bpp.lz");
static const ax_sprite sKakunaSprites25[] = {
	{NULL, 32}, 
	{sKakunaGfx25, ARRAY_COUNT(sKakunaGfx25)}, 
	{NULL, 32}, 
	{sKakunaGfx25_1, ARRAY_COUNT(sKakunaGfx25_1)}, 
	{NULL, 0}
};
static const u8 sKakunaGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_26.4bpp.lz");
static const ax_sprite sKakunaSprites26[] = {
	{sKakunaGfx26, ARRAY_COUNT(sKakunaGfx26)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_27.4bpp.lz");
static const ax_sprite sKakunaSprites27[] = {
	{sKakunaGfx27, ARRAY_COUNT(sKakunaGfx27)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_28.4bpp.lz");
static const ax_sprite sKakunaSprites28[] = {
	{sKakunaGfx28, ARRAY_COUNT(sKakunaGfx28)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_29.4bpp.lz");
static const ax_sprite sKakunaSprites29[] = {
	{sKakunaGfx29, ARRAY_COUNT(sKakunaGfx29)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_30.4bpp.lz");
static const u8 sKakunaGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_30_1.4bpp.lz");
static const u8 sKakunaGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_30_2.4bpp.lz");
static const ax_sprite sKakunaSprites30[] = {
	{NULL, 32}, 
	{sKakunaGfx30, ARRAY_COUNT(sKakunaGfx30)}, 
	{NULL, 32}, 
	{sKakunaGfx30_1, ARRAY_COUNT(sKakunaGfx30_1)}, 
	{NULL, 32}, 
	{sKakunaGfx30_2, ARRAY_COUNT(sKakunaGfx30_2)}, 
	{NULL, 0}
};
static const u8 sKakunaGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_31.4bpp.lz");
static const ax_sprite sKakunaSprites31[] = {
	{sKakunaGfx31, ARRAY_COUNT(sKakunaGfx31)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_32.4bpp.lz");
static const ax_sprite sKakunaSprites32[] = {
	{sKakunaGfx32, ARRAY_COUNT(sKakunaGfx32)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_33.4bpp.lz");
static const ax_sprite sKakunaSprites33[] = {
	{sKakunaGfx33, ARRAY_COUNT(sKakunaGfx33)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_34.4bpp.lz");
static const ax_sprite sKakunaSprites34[] = {
	{sKakunaGfx34, ARRAY_COUNT(sKakunaGfx34)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKakunaGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_35.4bpp.lz");
static const u8 sKakunaGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_35_1.4bpp.lz");
static const u8 sKakunaGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_35_2.4bpp.lz");
static const ax_sprite sKakunaSprites35[] = {
	{NULL, 32}, 
	{sKakunaGfx35, ARRAY_COUNT(sKakunaGfx35)}, 
	{NULL, 32}, 
	{sKakunaGfx35_1, ARRAY_COUNT(sKakunaGfx35_1)}, 
	{NULL, 32}, 
	{sKakunaGfx35_2, ARRAY_COUNT(sKakunaGfx35_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKakunaGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_36.4bpp.lz");
static const ax_sprite sKakunaSprites36[] = {
	{sKakunaGfx36, ARRAY_COUNT(sKakunaGfx36)}, 
	{NULL, 0}
};
static const u8 sKakunaGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_37.4bpp.lz");
static const ax_sprite sKakunaSprites37[] = {
	{sKakunaGfx37, ARRAY_COUNT(sKakunaGfx37)}, 
	{NULL, 0}
};
static const u8 sKakunaGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_38.4bpp.lz");
static const ax_sprite sKakunaSprites38[] = {
	{sKakunaGfx38, ARRAY_COUNT(sKakunaGfx38)}, 
	{NULL, 0}
};
static const u8 sKakunaGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_39.4bpp.lz");
static const ax_sprite sKakunaSprites39[] = {
	{sKakunaGfx39, ARRAY_COUNT(sKakunaGfx39)}, 
	{NULL, 0}
};
static const u8 sKakunaGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_40.4bpp.lz");
static const ax_sprite sKakunaSprites40[] = {
	{sKakunaGfx40, ARRAY_COUNT(sKakunaGfx40)}, 
	{NULL, 0}
};
static const u8 sKakunaGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_41.4bpp.lz");
static const ax_sprite sKakunaSprites41[] = {
	{sKakunaGfx41, ARRAY_COUNT(sKakunaGfx41)}, 
	{NULL, 0}
};
static const u8 sKakunaGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kakuna/sprite_42.4bpp.lz");
static const ax_sprite sKakunaSprites42[] = {
	{sKakunaGfx42, ARRAY_COUNT(sKakunaGfx42)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesKakuna[] = {
	sKakunaPose1,
	sKakunaPose2,
	sKakunaPose3,
	sKakunaPose4,
	sKakunaPose5,
	sKakunaPose6,
	sKakunaPose7,
	sKakunaPose8,
	sKakunaPose9,
	sKakunaPose10,
	sKakunaPose11,
	sKakunaPose12,
	sKakunaPose13,
	sKakunaPose14,
	sKakunaPose15,
	sKakunaPose16,
	sKakunaPose17,
	sKakunaPose18,
	sKakunaPose19,
	sKakunaPose20,
	sKakunaPose21,
	sKakunaPose22,
	sKakunaPose1,
	sKakunaPose24,
	sKakunaPose25,
	sKakunaPose26,
	sKakunaPose27,
	sKakunaPose28,
	sKakunaPose29,
	sKakunaPose3,
	sKakunaPose31,
	sKakunaPose32,
	sKakunaPose33,
	sKakunaPose34,
	sKakunaPose35,
	sKakunaPose36,
	sKakunaPose5,
	sKakunaPose38,
	sKakunaPose39,
	sKakunaPose40,
	sKakunaPose41,
	sKakunaPose42,
	sKakunaPose43,
	sKakunaPose7,
	sKakunaPose45,
	sKakunaPose46,
	sKakunaPose47,
	sKakunaPose48,
	sKakunaPose46,
	sKakunaPose50,
	sKakunaPose9,
	sKakunaPose52,
	sKakunaPose53,
	sKakunaPose54,
	sKakunaPose55,
	sKakunaPose56,
	sKakunaPose57,
	sKakunaPose11,
	sKakunaPose59,
	sKakunaPose60,
	sKakunaPose61,
	sKakunaPose62,
	sKakunaPose63,
	sKakunaPose64,
	sKakunaPose65,
	sKakunaPose66,
	sKakunaPose67,
	sKakunaPose68,
	sKakunaPose69,
	sKakunaPose70,
	sKakunaPose71,
	sKakunaPose15,
	sKakunaPose17,
	sKakunaPose18,
	sKakunaPose19,
	sKakunaPose20,
	sKakunaPose21,
	sKakunaPose22,
	sKakunaPose1,
	sKakunaPose24,
	sKakunaPose25,
	sKakunaPose26,
	sKakunaPose27,
	sKakunaPose28,
	sKakunaPose29,
	sKakunaPose3,
	sKakunaPose31,
	sKakunaPose32,
	sKakunaPose33,
	sKakunaPose34,
	sKakunaPose35,
	sKakunaPose36,
	sKakunaPose5,
	sKakunaPose38,
	sKakunaPose39,
	sKakunaPose40,
	sKakunaPose41,
	sKakunaPose42,
	sKakunaPose43,
	sKakunaPose7,
	sKakunaPose45,
	sKakunaPose46,
	sKakunaPose47,
	sKakunaPose48,
	sKakunaPose46,
	sKakunaPose50,
	sKakunaPose9,
	sKakunaPose52,
	sKakunaPose53,
	sKakunaPose54,
	sKakunaPose55,
	sKakunaPose56,
	sKakunaPose57,
	sKakunaPose11,
	sKakunaPose59,
	sKakunaPose60,
	sKakunaPose61,
	sKakunaPose62,
	sKakunaPose63,
	sKakunaPose64,
	sKakunaPose65,
	sKakunaPose66,
	sKakunaPose67,
	sKakunaPose68,
	sKakunaPose69,
	sKakunaPose70,
	sKakunaPose71,
	sKakunaPose15,
	sKakunaPose2,
	sKakunaPose130,
	sKakunaPose131,
	sKakunaPose12,
	sKakunaPose10,
	sKakunaPose8,
	sKakunaPose135,
	sKakunaPose136,
	sKakunaPose1,
	sKakunaPose15,
	sKakunaPose13,
	sKakunaPose140,
	sKakunaPose9,
	sKakunaPose7,
	sKakunaPose5,
	sKakunaPose3,
	sKakunaPose2,
	sKakunaPose130,
	sKakunaPose147,
	sKakunaPose12,
	sKakunaPose10,
	sKakunaPose150,
	sKakunaPose151,
	sKakunaPose136,
	sKakunaPose153,
	sKakunaPose154,
	sKakunaPose155,
	sKakunaPose156,
	sKakunaPose157,
	sKakunaPose158,
	sKakunaPose159,
	sKakunaPose160,
	sKakunaPose161,
	sKakunaPose162,
	sKakunaPose1,
	sKakunaPose15,
	sKakunaPose13,
	sKakunaPose11,
	sKakunaPose9,
	sKakunaPose7,
	sKakunaPose5,
	sKakunaPose3,
	sKakunaPose1,
	sKakunaPose15,
	sKakunaPose13,
	sKakunaPose11,
	sKakunaPose9,
	sKakunaPose7,
	sKakunaPose5,
	sKakunaPose3,
	sKakunaPose1,
	sKakunaPose3,
	sKakunaPose5,
	sKakunaPose7,
	sKakunaPose9,
	sKakunaPose11,
	sKakunaPose13,
	sKakunaPose15,
	sKakunaPose1,
	sKakunaPose20,
	sKakunaPose2,
	sKakunaPose3,
	sKakunaPose27,
	sKakunaPose4,
	sKakunaPose5,
	sKakunaPose34,
	sKakunaPose6,
	sKakunaPose7,
	sKakunaPose41,
	sKakunaPose8,
	sKakunaPose9,
	sKakunaPose48,
	sKakunaPose10,
	sKakunaPose11,
	sKakunaPose55,
	sKakunaPose12,
	sKakunaPose13,
	sKakunaPose62,
	sKakunaPose14,
	sKakunaPose15,
	sKakunaPose69,
	sKakunaPose16,
	sKakunaPose2,
	sKakunaPose130,
	sKakunaPose131,
	sKakunaPose12,
	sKakunaPose10,
	sKakunaPose8,
	sKakunaPose135,
	sKakunaPose136,
	sKakunaPose1,
	sKakunaPose15,
	sKakunaPose13,
	sKakunaPose11,
	sKakunaPose9,
	sKakunaPose7,
	sKakunaPose5,
	sKakunaPose3,
};

static const struct PositionSets sAxPositionsKakuna[] = {
	[0] = { .set = { {-1, -10}, {-4, -9}, {3, -9}, {0, -9} } },
	[1] = { .set = { {-1, -8}, {-4, -7}, {3, -7}, {0, -8} } },
	[2] = { .set = { {3, -11}, {4, -10}, {-3, -9}, {-1, -10} } },
	[3] = { .set = { {4, -9}, {5, -8}, {-2, -7}, {-1, -8} } },
	[4] = { .set = { {4, -11}, {2, -11}, {0, -10}, {-1, -10} } },
	[5] = { .set = { {5, -9}, {3, -9}, {1, -8}, {0, -8} } },
	[6] = { .set = { {2, -12}, {-2, -12}, {3, -11}, {-1, -11} } },
	[7] = { .set = { {3, -11}, {-1, -11}, {4, -10}, {-1, -10} } },
	[8] = { .set = { {0, -13}, {3, -12}, {-4, -12}, {0, -10} } },
	[9] = { .set = { {0, -11}, {3, -10}, {-4, -10}, {0, -9} } },
	[10] = { .set = { {-3, -12}, {1, -12}, {-4, -11}, {0, -11} } },
	[11] = { .set = { {-4, -11}, {0, -11}, {-5, -10}, {0, -10} } },
	[12] = { .set = { {-5, -11}, {-3, -11}, {-1, -10}, {0, -10} } },
	[13] = { .set = { {-6, -9}, {-4, -9}, {-2, -8}, {-1, -8} } },
	[14] = { .set = { {-4, -11}, {-5, -10}, {2, -9}, {0, -10} } },
	[15] = { .set = { {-5, -9}, {-6, -8}, {1, -7}, {0, -8} } },
	[16] = { .set = { {2, -9}, {0, -10}, {5, -7}, {3, -9} } },
	[17] = { .set = { {-1, -6}, {-3, -6}, {2, -6}, {0, -7} } },
	[18] = { .set = { {-3, -9}, {-6, -7}, {0, -10}, {-4, -9} } },
	[19] = { .set = { {0, -11}, {-4, -10}, {3, -10}, {0, -9} } },
	[20] = { .set = { {-1, -7}, {-3, -7}, {2, -7}, {0, -8} } },
	[21] = { .set = { {-1, -8}, {-3, -8}, {2, -8}, {0, -9} } },
	[22] = { .set = { {-1, -10}, {-4, -9}, {3, -9}, {0, -9} } },
	[23] = { .set = { {-2, -8}, {1, -8}, {-4, -5}, {-4, -8} } },
	[24] = { .set = { {4, -6}, {5, -7}, {-1, -7}, {1, -8} } },
	[25] = { .set = { {6, -9}, {5, -7}, {1, -10}, {2, -9} } },
	[26] = { .set = { {-3, -12}, {0, -11}, {-6, -10}, {-4, -9} } },
	[27] = { .set = { {2, -7}, {3, -8}, {-3, -8}, {-1, -9} } },
	[28] = { .set = { {2, -7}, {3, -8}, {-3, -8}, {-1, -9} } },
	[29] = { .set = { {3, -11}, {4, -10}, {-3, -9}, {-1, -10} } },
	[30] = { .set = { {3, -8}, {1, -9}, {-1, -7}, {-2, -9} } },
	[31] = { .set = { {7, -7}, {6, -8}, {4, -8}, {2, -10} } },
	[32] = { .set = { {3, -9}, {2, -7}, {1, -9}, {-2, -10} } },
	[33] = { .set = { {-1, -12}, {-1, -11}, {-4, -10}, {-5, -9} } },
	[34] = { .set = { {3, -7}, {2, -8}, {0, -8}, {-2, -10} } },
	[35] = { .set = { {3, -7}, {2, -8}, {0, -8}, {-2, -10} } },
	[36] = { .set = { {4, -11}, {2, -11}, {0, -10}, {-1, -10} } },
	[37] = { .set = { {4, -9}, {2, -9}, {6, -7}, {1, -9} } },
	[38] = { .set = { {5, -9}, {2, -9}, {6, -8}, {1, -11} } },
	[39] = { .set = { {0, -12}, {-2, -10}, {2, -12}, {-3, -11} } },
	[40] = { .set = { {-1, -14}, {-5, -12}, {0, -10}, {-4, -9} } },
	[41] = { .set = { {3, -9}, {0, -9}, {4, -8}, {-1, -11} } },
	[42] = { .set = { {3, -9}, {0, -9}, {4, -8}, {-1, -11} } },
	[43] = { .set = { {2, -12}, {-2, -12}, {3, -11}, {-1, -11} } },
	[44] = { .set = { {-4, -12}, {-1, -12}, {-6, -10}, {-5, -9} } },
	[45] = { .set = { {0, -10}, {4, -11}, {-5, -11}, {0, -11} } },
	[46] = { .set = { {2, -12}, {5, -10}, {0, -12}, {4, -9} } },
	[47] = { .set = { {0, -13}, {4, -11}, {-5, -11}, {0, -9} } },
	[48] = { .set = { {0, -10}, {4, -11}, {-5, -11}, {0, -11} } },
	[49] = { .set = { {0, -10}, {4, -11}, {-5, -11}, {0, -11} } },
	[50] = { .set = { {0, -13}, {3, -12}, {-4, -12}, {0, -10} } },
	[51] = { .set = { {-5, -9}, {-3, -9}, {-7, -7}, {-2, -9} } },
	[52] = { .set = { {-6, -9}, {-3, -9}, {-7, -8}, {-2, -11} } },
	[53] = { .set = { {-1, -12}, {1, -10}, {-3, -12}, {2, -11} } },
	[54] = { .set = { {0, -14}, {4, -12}, {-1, -10}, {3, -9} } },
	[55] = { .set = { {-3, -11}, {0, -11}, {-4, -10}, {1, -13} } },
	[56] = { .set = { {-3, -11}, {0, -11}, {-4, -10}, {1, -13} } },
	[57] = { .set = { {-3, -12}, {1, -12}, {-4, -11}, {0, -11} } },
	[58] = { .set = { {-4, -8}, {-2, -9}, {0, -7}, {1, -9} } },
	[59] = { .set = { {-8, -7}, {-7, -8}, {-5, -8}, {-3, -10} } },
	[60] = { .set = { {-4, -9}, {-3, -7}, {-2, -9}, {1, -10} } },
	[61] = { .set = { {0, -12}, {0, -11}, {3, -10}, {4, -9} } },
	[62] = { .set = { {-4, -7}, {-3, -8}, {-1, -8}, {1, -10} } },
	[63] = { .set = { {-4, -9}, {-3, -10}, {-1, -10}, {1, -12} } },
	[64] = { .set = { {-4, -11}, {-2, -11}, {0, -10}, {1, -10} } },
	[65] = { .set = { {1, -8}, {-2, -8}, {3, -5}, {3, -8} } },
	[66] = { .set = { {-5, -6}, {-6, -7}, {0, -7}, {-2, -8} } },
	[67] = { .set = { {-7, -9}, {-6, -7}, {-2, -10}, {-3, -9} } },
	[68] = { .set = { {2, -12}, {-1, -11}, {5, -10}, {3, -9} } },
	[69] = { .set = { {-4, -6}, {-5, -7}, {1, -7}, {-1, -8} } },
	[70] = { .set = { {-4, -6}, {-5, -7}, {1, -7}, {-1, -8} } },
	[71] = { .set = { {-4, -11}, {-5, -10}, {2, -9}, {0, -10} } },
	[72] = { .set = { {2, -9}, {0, -10}, {5, -7}, {3, -9} } },
	[73] = { .set = { {-1, -6}, {-3, -6}, {2, -6}, {0, -7} } },
	[74] = { .set = { {-3, -9}, {-6, -7}, {0, -10}, {-4, -9} } },
	[75] = { .set = { {0, -11}, {-4, -10}, {3, -10}, {0, -9} } },
	[76] = { .set = { {-1, -7}, {-3, -7}, {2, -7}, {0, -8} } },
	[77] = { .set = { {-1, -8}, {-3, -8}, {2, -8}, {0, -9} } },
	[78] = { .set = { {-1, -10}, {-4, -9}, {3, -9}, {0, -9} } },
	[79] = { .set = { {-2, -8}, {1, -8}, {-4, -5}, {-4, -8} } },
	[80] = { .set = { {4, -6}, {5, -7}, {-1, -7}, {1, -8} } },
	[81] = { .set = { {6, -9}, {5, -7}, {1, -10}, {2, -9} } },
	[82] = { .set = { {-3, -12}, {0, -11}, {-6, -10}, {-4, -9} } },
	[83] = { .set = { {2, -7}, {3, -8}, {-3, -8}, {-1, -9} } },
	[84] = { .set = { {2, -7}, {3, -8}, {-3, -8}, {-1, -9} } },
	[85] = { .set = { {3, -11}, {4, -10}, {-3, -9}, {-1, -10} } },
	[86] = { .set = { {3, -8}, {1, -9}, {-1, -7}, {-2, -9} } },
	[87] = { .set = { {7, -7}, {6, -8}, {4, -8}, {2, -10} } },
	[88] = { .set = { {3, -9}, {2, -7}, {1, -9}, {-2, -10} } },
	[89] = { .set = { {-1, -12}, {-1, -11}, {-4, -10}, {-5, -9} } },
	[90] = { .set = { {3, -7}, {2, -8}, {0, -8}, {-2, -10} } },
	[91] = { .set = { {3, -7}, {2, -8}, {0, -8}, {-2, -10} } },
	[92] = { .set = { {4, -11}, {2, -11}, {0, -10}, {-1, -10} } },
	[93] = { .set = { {4, -9}, {2, -9}, {6, -7}, {1, -9} } },
	[94] = { .set = { {5, -9}, {2, -9}, {6, -8}, {1, -11} } },
	[95] = { .set = { {0, -12}, {-2, -10}, {2, -12}, {-3, -11} } },
	[96] = { .set = { {-1, -14}, {-5, -12}, {0, -10}, {-4, -9} } },
	[97] = { .set = { {3, -9}, {0, -9}, {4, -8}, {-1, -11} } },
	[98] = { .set = { {3, -9}, {0, -9}, {4, -8}, {-1, -11} } },
	[99] = { .set = { {2, -12}, {-2, -12}, {3, -11}, {-1, -11} } },
	[100] = { .set = { {-4, -12}, {-1, -12}, {-6, -10}, {-5, -9} } },
	[101] = { .set = { {0, -10}, {4, -11}, {-5, -11}, {0, -11} } },
	[102] = { .set = { {2, -12}, {5, -10}, {0, -12}, {4, -9} } },
	[103] = { .set = { {0, -13}, {4, -11}, {-5, -11}, {0, -9} } },
	[104] = { .set = { {0, -10}, {4, -11}, {-5, -11}, {0, -11} } },
	[105] = { .set = { {0, -10}, {4, -11}, {-5, -11}, {0, -11} } },
	[106] = { .set = { {0, -13}, {3, -12}, {-4, -12}, {0, -10} } },
	[107] = { .set = { {-5, -9}, {-3, -9}, {-7, -7}, {-2, -9} } },
	[108] = { .set = { {-6, -9}, {-3, -9}, {-7, -8}, {-2, -11} } },
	[109] = { .set = { {-1, -12}, {1, -10}, {-3, -12}, {2, -11} } },
	[110] = { .set = { {0, -14}, {4, -12}, {-1, -10}, {3, -9} } },
	[111] = { .set = { {-3, -11}, {0, -11}, {-4, -10}, {1, -13} } },
	[112] = { .set = { {-3, -11}, {0, -11}, {-4, -10}, {1, -13} } },
	[113] = { .set = { {-3, -12}, {1, -12}, {-4, -11}, {0, -11} } },
	[114] = { .set = { {-4, -8}, {-2, -9}, {0, -7}, {1, -9} } },
	[115] = { .set = { {-8, -7}, {-7, -8}, {-5, -8}, {-3, -10} } },
	[116] = { .set = { {-4, -9}, {-3, -7}, {-2, -9}, {1, -10} } },
	[117] = { .set = { {0, -12}, {0, -11}, {3, -10}, {4, -9} } },
	[118] = { .set = { {-4, -7}, {-3, -8}, {-1, -8}, {1, -10} } },
	[119] = { .set = { {-4, -9}, {-3, -10}, {-1, -10}, {1, -12} } },
	[120] = { .set = { {-4, -11}, {-2, -11}, {0, -10}, {1, -10} } },
	[121] = { .set = { {1, -8}, {-2, -8}, {3, -5}, {3, -8} } },
	[122] = { .set = { {-5, -6}, {-6, -7}, {0, -7}, {-2, -8} } },
	[123] = { .set = { {-7, -9}, {-6, -7}, {-2, -10}, {-3, -9} } },
	[124] = { .set = { {2, -12}, {-1, -11}, {5, -10}, {3, -9} } },
	[125] = { .set = { {-4, -6}, {-5, -7}, {1, -7}, {-1, -8} } },
	[126] = { .set = { {-4, -6}, {-5, -7}, {1, -7}, {-1, -8} } },
	[127] = { .set = { {-4, -11}, {-5, -10}, {2, -9}, {0, -10} } },
	[128] = { .set = { {-1, -8}, {-4, -7}, {3, -7}, {0, -8} } },
	[129] = { .set = { {-4, -9}, {-5, -8}, {2, -7}, {1, -8} } },
	[130] = { .set = { {-5, -10}, {-3, -10}, {-1, -9}, {0, -9} } },
	[131] = { .set = { {-4, -11}, {0, -11}, {-5, -10}, {0, -10} } },
	[132] = { .set = { {0, -11}, {3, -10}, {-4, -10}, {0, -9} } },
	[133] = { .set = { {3, -11}, {-1, -11}, {4, -10}, {-1, -10} } },
	[134] = { .set = { {4, -10}, {2, -10}, {0, -9}, {-1, -9} } },
	[135] = { .set = { {3, -9}, {4, -8}, {-3, -7}, {-2, -8} } },
	[136] = { .set = { {-1, -10}, {-4, -9}, {3, -9}, {0, -9} } },
	[137] = { .set = { {-4, -11}, {-5, -10}, {2, -9}, {0, -10} } },
	[138] = { .set = { {-5, -11}, {-3, -11}, {-1, -10}, {0, -10} } },
	[139] = { .set = { {-4, -12}, {0, -12}, {-5, -11}, {-1, -11} } },
	[140] = { .set = { {0, -13}, {3, -12}, {-4, -12}, {0, -10} } },
	[141] = { .set = { {2, -12}, {-2, -12}, {3, -11}, {-1, -11} } },
	[142] = { .set = { {4, -11}, {2, -11}, {0, -10}, {-1, -10} } },
	[143] = { .set = { {3, -11}, {4, -10}, {-3, -9}, {-1, -10} } },
	[144] = { .set = { {-1, -8}, {-4, -7}, {3, -7}, {0, -8} } },
	[145] = { .set = { {-4, -9}, {-5, -8}, {2, -7}, {1, -8} } },
	[146] = { .set = { {-5, -9}, {-3, -9}, {-1, -8}, {0, -8} } },
	[147] = { .set = { {-4, -11}, {0, -11}, {-5, -10}, {0, -10} } },
	[148] = { .set = { {0, -11}, {3, -10}, {-4, -10}, {0, -9} } },
	[149] = { .set = { {2, -11}, {-2, -11}, {3, -10}, {-2, -10} } },
	[150] = { .set = { {4, -9}, {2, -9}, {0, -8}, {-1, -8} } },
	[151] = { .set = { {3, -9}, {4, -8}, {-3, -7}, {-2, -8} } },
	[152] = { .set = { {-4, -12}, {-4, -11}, {1, -11}, {0, -11} } },
	[153] = { .set = { {-4, -10}, {-4, -9}, {1, -9}, {0, -9} } },
	[154] = { .set = { {-1, -10}, {-4, -9}, {3, -9}, {0, -8} } },
	[155] = { .set = { {1, -10}, {2, -10}, {-2, -8}, {-3, -8} } },
	[156] = { .set = { {1, -11}, {1, -9}, {-1, -8}, {-2, -7} } },
	[157] = { .set = { {0, -14}, {-3, -11}, {2, -9}, {-3, -9} } },
	[158] = { .set = { {0, -13}, {3, -11}, {-4, -11}, {0, -9} } },
	[159] = { .set = { {-1, -14}, {2, -11}, {-3, -9}, {2, -9} } },
	[160] = { .set = { {-2, -11}, {-2, -9}, {0, -8}, {1, -7} } },
	[161] = { .set = { {-2, -10}, {-3, -10}, {1, -8}, {2, -8} } },
	[162] = { .set = { {-1, -10}, {-4, -9}, {3, -9}, {0, -9} } },
	[163] = { .set = { {-4, -11}, {-5, -10}, {2, -9}, {0, -10} } },
	[164] = { .set = { {-5, -11}, {-3, -11}, {-1, -10}, {0, -10} } },
	[165] = { .set = { {-3, -12}, {1, -12}, {-4, -11}, {0, -11} } },
	[166] = { .set = { {0, -13}, {3, -12}, {-4, -12}, {0, -10} } },
	[167] = { .set = { {2, -12}, {-2, -12}, {3, -11}, {-1, -11} } },
	[168] = { .set = { {4, -11}, {2, -11}, {0, -10}, {-1, -10} } },
	[169] = { .set = { {3, -11}, {4, -10}, {-3, -9}, {-1, -10} } },
	[170] = { .set = { {-1, -10}, {-4, -9}, {3, -9}, {0, -9} } },
	[171] = { .set = { {-4, -11}, {-5, -10}, {2, -9}, {0, -10} } },
	[172] = { .set = { {-5, -11}, {-3, -11}, {-1, -10}, {0, -10} } },
	[173] = { .set = { {-3, -12}, {1, -12}, {-4, -11}, {0, -11} } },
	[174] = { .set = { {0, -13}, {3, -12}, {-4, -12}, {0, -10} } },
	[175] = { .set = { {2, -12}, {-2, -12}, {3, -11}, {-1, -11} } },
	[176] = { .set = { {4, -11}, {2, -11}, {0, -10}, {-1, -10} } },
	[177] = { .set = { {3, -11}, {4, -10}, {-3, -9}, {-1, -10} } },
	[178] = { .set = { {-1, -10}, {-4, -9}, {3, -9}, {0, -9} } },
	[179] = { .set = { {3, -11}, {4, -10}, {-3, -9}, {-1, -10} } },
	[180] = { .set = { {4, -11}, {2, -11}, {0, -10}, {-1, -10} } },
	[181] = { .set = { {2, -12}, {-2, -12}, {3, -11}, {-1, -11} } },
	[182] = { .set = { {0, -13}, {3, -12}, {-4, -12}, {0, -10} } },
	[183] = { .set = { {-3, -12}, {1, -12}, {-4, -11}, {0, -11} } },
	[184] = { .set = { {-5, -11}, {-3, -11}, {-1, -10}, {0, -10} } },
	[185] = { .set = { {-4, -11}, {-5, -10}, {2, -9}, {0, -10} } },
	[186] = { .set = { {-1, -10}, {-4, -9}, {3, -9}, {0, -9} } },
	[187] = { .set = { {0, -11}, {-4, -10}, {3, -10}, {0, -9} } },
	[188] = { .set = { {-1, -8}, {-4, -7}, {3, -7}, {0, -8} } },
	[189] = { .set = { {3, -11}, {4, -10}, {-3, -9}, {-1, -10} } },
	[190] = { .set = { {-3, -12}, {0, -11}, {-6, -10}, {-4, -9} } },
	[191] = { .set = { {4, -9}, {5, -8}, {-2, -7}, {-1, -8} } },
	[192] = { .set = { {4, -11}, {2, -11}, {0, -10}, {-1, -10} } },
	[193] = { .set = { {-1, -12}, {-1, -11}, {-4, -10}, {-5, -9} } },
	[194] = { .set = { {5, -9}, {3, -9}, {1, -8}, {0, -8} } },
	[195] = { .set = { {2, -12}, {-2, -12}, {3, -11}, {-1, -11} } },
	[196] = { .set = { {-1, -14}, {-5, -12}, {0, -10}, {-4, -9} } },
	[197] = { .set = { {3, -11}, {-1, -11}, {4, -10}, {-1, -10} } },
	[198] = { .set = { {0, -13}, {3, -12}, {-4, -12}, {0, -10} } },
	[199] = { .set = { {0, -13}, {4, -11}, {-5, -11}, {0, -9} } },
	[200] = { .set = { {0, -11}, {3, -10}, {-4, -10}, {0, -9} } },
	[201] = { .set = { {-3, -12}, {1, -12}, {-4, -11}, {0, -11} } },
	[202] = { .set = { {0, -14}, {4, -12}, {-1, -10}, {3, -9} } },
	[203] = { .set = { {-4, -11}, {0, -11}, {-5, -10}, {0, -10} } },
	[204] = { .set = { {-5, -11}, {-3, -11}, {-1, -10}, {0, -10} } },
	[205] = { .set = { {0, -12}, {0, -11}, {3, -10}, {4, -9} } },
	[206] = { .set = { {-6, -9}, {-4, -9}, {-2, -8}, {-1, -8} } },
	[207] = { .set = { {-4, -11}, {-5, -10}, {2, -9}, {0, -10} } },
	[208] = { .set = { {2, -12}, {-1, -11}, {5, -10}, {3, -9} } },
	[209] = { .set = { {-5, -9}, {-6, -8}, {1, -7}, {0, -8} } },
	[210] = { .set = { {-1, -8}, {-4, -7}, {3, -7}, {0, -8} } },
	[211] = { .set = { {-4, -9}, {-5, -8}, {2, -7}, {1, -8} } },
	[212] = { .set = { {-5, -10}, {-3, -10}, {-1, -9}, {0, -9} } },
	[213] = { .set = { {-4, -11}, {0, -11}, {-5, -10}, {0, -10} } },
	[214] = { .set = { {0, -11}, {3, -10}, {-4, -10}, {0, -9} } },
	[215] = { .set = { {3, -11}, {-1, -11}, {4, -10}, {-1, -10} } },
	[216] = { .set = { {4, -10}, {2, -10}, {0, -9}, {-1, -9} } },
	[217] = { .set = { {3, -9}, {4, -8}, {-3, -7}, {-2, -8} } },
	[218] = { .set = { {-1, -10}, {-4, -9}, {3, -9}, {0, -9} } },
	[219] = { .set = { {-4, -11}, {-5, -10}, {2, -9}, {0, -10} } },
	[220] = { .set = { {-5, -11}, {-3, -11}, {-1, -10}, {0, -10} } },
	[221] = { .set = { {-3, -12}, {1, -12}, {-4, -11}, {0, -11} } },
	[222] = { .set = { {0, -13}, {3, -12}, {-4, -12}, {0, -10} } },
	[223] = { .set = { {2, -12}, {-2, -12}, {3, -11}, {-1, -11} } },
	[224] = { .set = { {4, -11}, {2, -11}, {0, -10}, {-1, -10} } },
	[225] = { .set = { {3, -11}, {4, -10}, {-3, -9}, {-1, -10} } },
};

static const ax_anim *const sKakunaAnimTable1[] = {
	sKakunaAnims_1_1,
	sKakunaAnims_1_2,
	sKakunaAnims_1_3,
	sKakunaAnims_1_4,
	sKakunaAnims_1_5,
	sKakunaAnims_1_6,
	sKakunaAnims_1_7,
	sKakunaAnims_1_8,
};

static const ax_anim *const sKakunaAnimTable2[] = {
	sKakunaAnims_2_1,
	sKakunaAnims_2_2,
	sKakunaAnims_2_3,
	sKakunaAnims_2_4,
	sKakunaAnims_2_5,
	sKakunaAnims_2_6,
	sKakunaAnims_2_7,
	sKakunaAnims_2_8,
};

static const ax_anim *const sKakunaAnimTable3[] = {
	sKakunaAnims_3_1,
	sKakunaAnims_3_2,
	sKakunaAnims_3_3,
	sKakunaAnims_3_4,
	sKakunaAnims_3_5,
	sKakunaAnims_3_6,
	sKakunaAnims_3_7,
	sKakunaAnims_3_8,
};

static const ax_anim *const sKakunaAnimTable4[] = {
	gAxSharedAnim_00382,
	sKakunaAnims_4_2,
	gAxSharedAnim_00430,
	gAxSharedAnim_00420,
	gAxSharedAnim_00419,
	gAxSharedAnim_00410,
	gAxSharedAnim_00395,
	gAxSharedAnim_00386,
};

static const ax_anim *const sKakunaAnimTable5[] = {
	sKakunaAnims_5_1,
	sKakunaAnims_5_2,
	sKakunaAnims_5_3,
	sKakunaAnims_5_4,
	sKakunaAnims_5_5,
	sKakunaAnims_5_6,
	sKakunaAnims_5_7,
	sKakunaAnims_5_8,
};

static const ax_anim *const sKakunaAnimTable6[] = {
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
};

static const ax_anim *const sKakunaAnimTable7[] = {
	gAxSharedAnim_00606,
	gAxSharedAnim_00617,
	gAxSharedAnim_00626,
	gAxSharedAnim_00637,
	gAxSharedAnim_00654,
	gAxSharedAnim_00665,
	gAxSharedAnim_00680,
	gAxSharedAnim_00691,
};

static const ax_anim *const sKakunaAnimTable8[] = {
	sKakunaAnims_8_1,
	sKakunaAnims_8_2,
	sKakunaAnims_8_3,
	sKakunaAnims_8_4,
	sKakunaAnims_8_5,
	sKakunaAnims_8_6,
	sKakunaAnims_8_7,
	sKakunaAnims_8_8,
};

static const ax_anim *const sKakunaAnimTable9[] = {
	sKakunaAnims_9_1,
	gAxSharedAnim_00885,
	gAxSharedAnim_00874,
	gAxSharedAnim_00857,
	gAxSharedAnim_00844,
	gAxSharedAnim_00834,
	gAxSharedAnim_00821,
	gAxSharedAnim_00809,
};

static const ax_anim *const sKakunaAnimTable10[] = {
	gAxSharedAnim_00905,
	gAxSharedAnim_00918,
	gAxSharedAnim_00930,
	gAxSharedAnim_00942,
	gAxSharedAnim_00955,
	gAxSharedAnim_00965,
	gAxSharedAnim_00978,
	gAxSharedAnim_00993,
};

static const ax_anim *const sKakunaAnimTable11[] = {
	gAxSharedAnim_01007,
	gAxSharedAnim_01058,
	gAxSharedAnim_01106,
	gAxSharedAnim_01153,
	gAxSharedAnim_01188,
	gAxSharedAnim_01226,
	gAxSharedAnim_01265,
	gAxSharedAnim_01296,
};

static const ax_anim *const sKakunaAnimTable12[] = {
	gAxSharedAnim_01337,
	gAxSharedAnim_01415,
	gAxSharedAnim_01392,
	gAxSharedAnim_01380,
	gAxSharedAnim_01379,
	gAxSharedAnim_01368,
	gAxSharedAnim_01354,
	gAxSharedAnim_01338,
};

static const ax_anim *const sKakunaAnimTable13[] = {
	gAxSharedAnim_01422,
	gAxSharedAnim_01464,
	gAxSharedAnim_01461,
	gAxSharedAnim_01456,
	gAxSharedAnim_01446,
	gAxSharedAnim_01443,
	gAxSharedAnim_01438,
	gAxSharedAnim_01429,
};

static const ax_anim *const *const sAxAnimationsKakuna[] = {
	sKakunaAnimTable1,
	sKakunaAnimTable2,
	sKakunaAnimTable3,
	sKakunaAnimTable4,
	sKakunaAnimTable5,
	sKakunaAnimTable6,
	sKakunaAnimTable7,
	sKakunaAnimTable8,
	sKakunaAnimTable9,
	sKakunaAnimTable10,
	sKakunaAnimTable11,
	sKakunaAnimTable12,
	sKakunaAnimTable13,
};

static const ax_sprite *const sAxSpritesKakuna[] = {
	sKakunaSprites1,
	sKakunaSprites2,
	sKakunaSprites3,
	sKakunaSprites4,
	sKakunaSprites5,
	sKakunaSprites6,
	sKakunaSprites7,
	sKakunaSprites8,
	sKakunaSprites9,
	sKakunaSprites10,
	sKakunaSprites11,
	sKakunaSprites12,
	sKakunaSprites13,
	sKakunaSprites14,
	sKakunaSprites15,
	sKakunaSprites16,
	sKakunaSprites17,
	sKakunaSprites18,
	sKakunaSprites19,
	sKakunaSprites20,
	sKakunaSprites21,
	sKakunaSprites22,
	sKakunaSprites23,
	sKakunaSprites24,
	sKakunaSprites25,
	sKakunaSprites26,
	sKakunaSprites27,
	sKakunaSprites28,
	sKakunaSprites29,
	sKakunaSprites30,
	sKakunaSprites31,
	sKakunaSprites32,
	sKakunaSprites33,
	sKakunaSprites34,
	sKakunaSprites35,
	sKakunaSprites36,
	sKakunaSprites37,
	sKakunaSprites38,
	sKakunaSprites39,
	sKakunaSprites40,
	sKakunaSprites41,
	sKakunaSprites42,
};

static const axmain sAxMainKakuna = {
	.poses = sAxPosesKakuna,
	.animations = sAxAnimationsKakuna,
	.animCount = ARRAY_COUNT(sAxAnimationsKakuna),
	.spriteData = sAxSpritesKakuna,
	.positions = sAxPositionsKakuna,
};
