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
static const axmain sAxMainPsyduck;
const SiroArchive gAxPsyduck = {"SIRO", &sAxMainPsyduck};

static const ax_pose sPsyduckPose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose3[] = {
	AX_POSE(2, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose4[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose5[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose6[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose8[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose10[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose11[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose12[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose13[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose14[] = {
	AX_POSE(13, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose15[] = {
	AX_POSE(14, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose16[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose17[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose18[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose19[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose20[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose21[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose22[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose23[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose24[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose28[] = {
	AX_POSE(15, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose29[] = {
	AX_POSE(16, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose33[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose34[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose38[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose39[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose43[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose44[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose48[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose49[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose53[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose54[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose58[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose59[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose60[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose61[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose62[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose63[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose64[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose68[] = {
	AX_POSE(25, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose69[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose70[] = {
	AX_POSE(25, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(27, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose71[] = {
	AX_POSE(27, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose75[] = {
	AX_POSE(28, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose76[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose77[] = {
	AX_POSE(30, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(31, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose78[] = {
	AX_POSE(31, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose82[] = {
	AX_POSE(32, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(33, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose83[] = {
	AX_POSE(33, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose84[] = {
	AX_POSE(34, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(35, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose85[] = {
	AX_POSE(35, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose89[] = {
	AX_POSE(36, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(37, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose90[] = {
	AX_POSE(37, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose91[] = {
	AX_POSE(38, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(39, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose92[] = {
	AX_POSE(39, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose96[] = {
	AX_POSE(40, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(41, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose97[] = {
	AX_POSE(41, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose98[] = {
	AX_POSE(40, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(42, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose99[] = {
	AX_POSE(42, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose103[] = {
	AX_POSE(36, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(37, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose104[] = {
	AX_POSE(37, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose105[] = {
	AX_POSE(38, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(39, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose106[] = {
	AX_POSE(39, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose110[] = {
	AX_POSE(32, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(33, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose111[] = {
	AX_POSE(33, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose112[] = {
	AX_POSE(34, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(35, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose113[] = {
	AX_POSE(35, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose117[] = {
	AX_POSE(28, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose118[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose119[] = {
	AX_POSE(30, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(31, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose120[] = {
	AX_POSE(31, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose124[] = {
	AX_POSE(43, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose128[] = {
	AX_POSE(44, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose132[] = {
	AX_POSE(45, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose136[] = {
	AX_POSE(46, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose140[] = {
	AX_POSE(47, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose144[] = {
	AX_POSE(46, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose148[] = {
	AX_POSE(45, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose152[] = {
	AX_POSE(44, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose161[] = {
	AX_POSE(48, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose162[] = {
	AX_POSE(49, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose163[] = {
	AX_POSE(50, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose164[] = {
	AX_POSE(51, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose165[] = {
	AX_POSE(52, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose166[] = {
	AX_POSE(53, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose167[] = {
	AX_POSE(54, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose168[] = {
	AX_POSE(53, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose169[] = {
	AX_POSE(52, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose170[] = {
	AX_POSE(51, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose196[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose197[] = {
	AX_POSE(19, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose201[] = {
	AX_POSE(19, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose202[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose203[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose212[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose213[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose215[] = {
	AX_POSE(17, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose216[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose218[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose219[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose221[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose222[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose224[] = {
	AX_POSE(23, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose225[] = {
	AX_POSE(24, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose227[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose228[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose230[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose231[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose233[] = {
	AX_POSE(17, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose234[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose251[] = {
	AX_POSE(55, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose252[] = {
	AX_POSE(56, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose253[] = {
	AX_POSE(55, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose254[] = {
	AX_POSE(56, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose256[] = {
	AX_POSE(57, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose257[] = {
	AX_POSE(58, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose258[] = {
	AX_POSE(59, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose261[] = {
	AX_POSE(60, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose262[] = {
	AX_POSE(61, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose263[] = {
	AX_POSE(62, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose264[] = {
	AX_POSE(63, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose265[] = {
	AX_POSE(64, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose266[] = {
	AX_POSE(65, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose267[] = {
	AX_POSE(66, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose268[] = {
	AX_POSE(67, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose269[] = {
	AX_POSE(68, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose271[] = {
	AX_POSE(69, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose272[] = {
	AX_POSE(70, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose273[] = {
	AX_POSE(71, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose275[] = {
	AX_POSE(72, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose276[] = {
	AX_POSE(73, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose278[] = {
	AX_POSE(74, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose279[] = {
	AX_POSE(75, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose282[] = {
	AX_POSE(76, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose284[] = {
	AX_POSE(77, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose286[] = {
	AX_POSE(77, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose288[] = {
	AX_POSE(78, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose289[] = {
	AX_POSE(79, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose290[] = {
	AX_POSE(80, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose291[] = {
	AX_POSE(81, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose292[] = {
	AX_POSE(82, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose293[] = {
	AX_POSE(83, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose294[] = {
	AX_POSE(79, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose295[] = {
	AX_POSE(80, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose296[] = {
	AX_POSE(81, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose297[] = {
	AX_POSE(82, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose298[] = {
	AX_POSE(83, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPsyduckPose299[] = {
	AX_POSE(84, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const u8 sPsyduckAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_2_1.lz");
static const u8 sPsyduckAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_2_2.lz");
static const u8 sPsyduckAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_2_3.lz");
static const u8 sPsyduckAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_2_4.lz");
static const u8 sPsyduckAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_2_5.lz");
static const u8 sPsyduckAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_2_6.lz");
static const u8 sPsyduckAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_2_7.lz");
static const u8 sPsyduckAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_2_8.lz");
static const u8 sPsyduckAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_3_1.lz");
static const u8 sPsyduckAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_3_2.lz");
static const u8 sPsyduckAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_3_3.lz");
static const u8 sPsyduckAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_3_4.lz");
static const u8 sPsyduckAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_3_5.lz");
static const u8 sPsyduckAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_3_6.lz");
static const u8 sPsyduckAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_3_7.lz");
static const u8 sPsyduckAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_3_8.lz");
static const u8 sPsyduckAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_4_1.lz");
static const u8 sPsyduckAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_4_2.lz");
static const u8 sPsyduckAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_4_3.lz");
static const u8 sPsyduckAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_4_4.lz");
static const u8 sPsyduckAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_4_5.lz");
static const u8 sPsyduckAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_4_6.lz");
static const u8 sPsyduckAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_4_7.lz");
static const u8 sPsyduckAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_4_8.lz");
static const u8 sPsyduckAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_5_1.lz");
static const u8 sPsyduckAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_5_2.lz");
static const u8 sPsyduckAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_5_3.lz");
static const u8 sPsyduckAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_5_4.lz");
static const u8 sPsyduckAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_5_5.lz");
static const u8 sPsyduckAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_5_6.lz");
static const u8 sPsyduckAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_5_7.lz");
static const u8 sPsyduckAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_5_8.lz");
static const u8 sPsyduckAnims_6_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_6_1.lz");
static const u8 sPsyduckAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_8_1.lz");
static const u8 sPsyduckAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_8_2.lz");
static const u8 sPsyduckAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_8_3.lz");
static const u8 sPsyduckAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_8_4.lz");
static const u8 sPsyduckAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_8_5.lz");
static const u8 sPsyduckAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_8_6.lz");
static const u8 sPsyduckAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_8_7.lz");
static const u8 sPsyduckAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_8_8.lz");
static const u8 sPsyduckAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_9_1.lz");
static const u8 sPsyduckAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_9_2.lz");
static const u8 sPsyduckAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_9_4.lz");
static const u8 sPsyduckAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_9_5.lz");
static const u8 sPsyduckAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_9_6.lz");
static const u8 sPsyduckAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_9_8.lz");
static const u8 sPsyduckAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_11_1.lz");
static const u8 sPsyduckAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_11_2.lz");
static const u8 sPsyduckAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_11_3.lz");
static const u8 sPsyduckAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_11_4.lz");
static const u8 sPsyduckAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_11_5.lz");
static const u8 sPsyduckAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_11_6.lz");
static const u8 sPsyduckAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_11_7.lz");
static const u8 sPsyduckAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_11_8.lz");
static const u8 sPsyduckAnims_14_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_14_1.lz");
static const u8 sPsyduckAnims_15_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_15_1.lz");
static const u8 sPsyduckAnims_16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_16_1.lz");
static const u8 sPsyduckAnims_17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_17_1.lz");
static const u8 sPsyduckAnims_18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_18_1.lz");
static const u8 sPsyduckAnims_18_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_18_5.lz");
static const u8 sPsyduckAnims_19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_19_1.lz");
static const u8 sPsyduckAnims_20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_20_1.lz");
static const u8 sPsyduckAnims_20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_20_2.lz");
static const u8 sPsyduckAnims_21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_21_1.lz");
static const u8 sPsyduckAnims_22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_22_1.lz");
static const u8 sPsyduckAnims_23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_23_1.lz");
static const u8 sPsyduckAnims_23_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_23_3.lz");
static const u8 sPsyduckAnims_24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_24_1.lz");
static const u8 sPsyduckAnims_25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_25_1.lz");
static const u8 sPsyduckAnims_25_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_25_7.lz");
static const u8 sPsyduckAnims_26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_26_1.lz");
static const u8 sPsyduckAnims_27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_27_1.lz");
static const u8 sPsyduckAnims_28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_28_1.lz");
static const u8 sPsyduckAnims_28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/psyduck/sPsyduckAnims_28_3.lz");

static const u8 sPsyduckGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_1.4bpp.lz");
static const ax_sprite sPsyduckSprites1[] = {
	{sPsyduckGfx1, ARRAY_COUNT(sPsyduckGfx1)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_2.4bpp.lz");
static const ax_sprite sPsyduckSprites2[] = {
	{sPsyduckGfx2, ARRAY_COUNT(sPsyduckGfx2)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_3.4bpp.lz");
static const ax_sprite sPsyduckSprites3[] = {
	{sPsyduckGfx3, ARRAY_COUNT(sPsyduckGfx3)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_4.4bpp.lz");
static const ax_sprite sPsyduckSprites4[] = {
	{sPsyduckGfx4, ARRAY_COUNT(sPsyduckGfx4)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_5.4bpp.lz");
static const ax_sprite sPsyduckSprites5[] = {
	{sPsyduckGfx5, ARRAY_COUNT(sPsyduckGfx5)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_6.4bpp.lz");
static const ax_sprite sPsyduckSprites6[] = {
	{sPsyduckGfx6, ARRAY_COUNT(sPsyduckGfx6)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_7.4bpp.lz");
static const ax_sprite sPsyduckSprites7[] = {
	{sPsyduckGfx7, ARRAY_COUNT(sPsyduckGfx7)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_8.4bpp.lz");
static const ax_sprite sPsyduckSprites8[] = {
	{sPsyduckGfx8, ARRAY_COUNT(sPsyduckGfx8)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_9.4bpp.lz");
static const ax_sprite sPsyduckSprites9[] = {
	{sPsyduckGfx9, ARRAY_COUNT(sPsyduckGfx9)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_10.4bpp.lz");
static const ax_sprite sPsyduckSprites10[] = {
	{sPsyduckGfx10, ARRAY_COUNT(sPsyduckGfx10)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_11.4bpp.lz");
static const ax_sprite sPsyduckSprites11[] = {
	{sPsyduckGfx11, ARRAY_COUNT(sPsyduckGfx11)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_12.4bpp.lz");
static const ax_sprite sPsyduckSprites12[] = {
	{sPsyduckGfx12, ARRAY_COUNT(sPsyduckGfx12)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_13.4bpp.lz");
static const ax_sprite sPsyduckSprites13[] = {
	{sPsyduckGfx13, ARRAY_COUNT(sPsyduckGfx13)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_14.4bpp.lz");
static const ax_sprite sPsyduckSprites14[] = {
	{sPsyduckGfx14, ARRAY_COUNT(sPsyduckGfx14)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_15.4bpp.lz");
static const ax_sprite sPsyduckSprites15[] = {
	{sPsyduckGfx15, ARRAY_COUNT(sPsyduckGfx15)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_16.4bpp.lz");
static const u8 sPsyduckGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_16_1.4bpp.lz");
static const ax_sprite sPsyduckSprites16[] = {
	{NULL, 32}, 
	{sPsyduckGfx16, ARRAY_COUNT(sPsyduckGfx16)}, 
	{NULL, 32}, 
	{sPsyduckGfx16_1, ARRAY_COUNT(sPsyduckGfx16_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_17.4bpp.lz");
static const u8 sPsyduckGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_17_1.4bpp.lz");
static const u8 sPsyduckGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_17_2.4bpp.lz");
static const ax_sprite sPsyduckSprites17[] = {
	{NULL, 32}, 
	{sPsyduckGfx17, ARRAY_COUNT(sPsyduckGfx17)}, 
	{NULL, 32}, 
	{sPsyduckGfx17_1, ARRAY_COUNT(sPsyduckGfx17_1)}, 
	{NULL, 32}, 
	{sPsyduckGfx17_2, ARRAY_COUNT(sPsyduckGfx17_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_18.4bpp.lz");
static const u8 sPsyduckGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_18_1.4bpp.lz");
static const u8 sPsyduckGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_18_2.4bpp.lz");
static const ax_sprite sPsyduckSprites18[] = {
	{NULL, 64}, 
	{sPsyduckGfx18, ARRAY_COUNT(sPsyduckGfx18)}, 
	{NULL, 32}, 
	{sPsyduckGfx18_1, ARRAY_COUNT(sPsyduckGfx18_1)}, 
	{NULL, 32}, 
	{sPsyduckGfx18_2, ARRAY_COUNT(sPsyduckGfx18_2)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_19.4bpp.lz");
static const ax_sprite sPsyduckSprites19[] = {
	{NULL, 128}, 
	{sPsyduckGfx19, ARRAY_COUNT(sPsyduckGfx19)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_20.4bpp.lz");
static const u8 sPsyduckGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_20_1.4bpp.lz");
static const ax_sprite sPsyduckSprites20[] = {
	{NULL, 32}, 
	{sPsyduckGfx20, ARRAY_COUNT(sPsyduckGfx20)}, 
	{NULL, 32}, 
	{sPsyduckGfx20_1, ARRAY_COUNT(sPsyduckGfx20_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_21.4bpp.lz");
static const u8 sPsyduckGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_21_1.4bpp.lz");
static const ax_sprite sPsyduckSprites21[] = {
	{sPsyduckGfx21, ARRAY_COUNT(sPsyduckGfx21)}, 
	{NULL, 32}, 
	{sPsyduckGfx21_1, ARRAY_COUNT(sPsyduckGfx21_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_22.4bpp.lz");
static const u8 sPsyduckGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_22_1.4bpp.lz");
static const u8 sPsyduckGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_22_2.4bpp.lz");
static const ax_sprite sPsyduckSprites22[] = {
	{NULL, 32}, 
	{sPsyduckGfx22, ARRAY_COUNT(sPsyduckGfx22)}, 
	{NULL, 32}, 
	{sPsyduckGfx22_1, ARRAY_COUNT(sPsyduckGfx22_1)}, 
	{NULL, 32}, 
	{sPsyduckGfx22_2, ARRAY_COUNT(sPsyduckGfx22_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_23.4bpp.lz");
static const u8 sPsyduckGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_23_1.4bpp.lz");
static const ax_sprite sPsyduckSprites23[] = {
	{sPsyduckGfx23, ARRAY_COUNT(sPsyduckGfx23)}, 
	{NULL, 32}, 
	{sPsyduckGfx23_1, ARRAY_COUNT(sPsyduckGfx23_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_24.4bpp.lz");
static const u8 sPsyduckGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_24_1.4bpp.lz");
static const u8 sPsyduckGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_24_2.4bpp.lz");
static const ax_sprite sPsyduckSprites24[] = {
	{NULL, 32}, 
	{sPsyduckGfx24, ARRAY_COUNT(sPsyduckGfx24)}, 
	{NULL, 32}, 
	{sPsyduckGfx24_1, ARRAY_COUNT(sPsyduckGfx24_1)}, 
	{NULL, 32}, 
	{sPsyduckGfx24_2, ARRAY_COUNT(sPsyduckGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_25.4bpp.lz");
static const u8 sPsyduckGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_25_1.4bpp.lz");
static const u8 sPsyduckGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_25_2.4bpp.lz");
static const ax_sprite sPsyduckSprites25[] = {
	{NULL, 32}, 
	{sPsyduckGfx25, ARRAY_COUNT(sPsyduckGfx25)}, 
	{NULL, 32}, 
	{sPsyduckGfx25_1, ARRAY_COUNT(sPsyduckGfx25_1)}, 
	{NULL, 32}, 
	{sPsyduckGfx25_2, ARRAY_COUNT(sPsyduckGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_26.4bpp.lz");
static const u8 sPsyduckGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_26_1.4bpp.lz");
static const ax_sprite sPsyduckSprites26[] = {
	{NULL, 32}, 
	{sPsyduckGfx26, ARRAY_COUNT(sPsyduckGfx26)}, 
	{NULL, 32}, 
	{sPsyduckGfx26_1, ARRAY_COUNT(sPsyduckGfx26_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_27.4bpp.lz");
static const u8 sPsyduckGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_27_1.4bpp.lz");
static const u8 sPsyduckGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_27_2.4bpp.lz");
static const ax_sprite sPsyduckSprites27[] = {
	{sPsyduckGfx27, ARRAY_COUNT(sPsyduckGfx27)}, 
	{NULL, 32}, 
	{sPsyduckGfx27_1, ARRAY_COUNT(sPsyduckGfx27_1)}, 
	{NULL, 32}, 
	{sPsyduckGfx27_2, ARRAY_COUNT(sPsyduckGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_28.4bpp.lz");
static const u8 sPsyduckGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_28_1.4bpp.lz");
static const u8 sPsyduckGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_28_2.4bpp.lz");
static const ax_sprite sPsyduckSprites28[] = {
	{sPsyduckGfx28, ARRAY_COUNT(sPsyduckGfx28)}, 
	{NULL, 32}, 
	{sPsyduckGfx28_1, ARRAY_COUNT(sPsyduckGfx28_1)}, 
	{NULL, 32}, 
	{sPsyduckGfx28_2, ARRAY_COUNT(sPsyduckGfx28_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_29.4bpp.lz");
static const ax_sprite sPsyduckSprites29[] = {
	{NULL, 96}, 
	{sPsyduckGfx29, ARRAY_COUNT(sPsyduckGfx29)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_30.4bpp.lz");
static const u8 sPsyduckGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_30_1.4bpp.lz");
static const u8 sPsyduckGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_30_2.4bpp.lz");
static const u8 sPsyduckGfx30_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_30_3.4bpp.lz");
static const ax_sprite sPsyduckSprites30[] = {
	{sPsyduckGfx30, ARRAY_COUNT(sPsyduckGfx30)}, 
	{NULL, 64}, 
	{sPsyduckGfx30_1, ARRAY_COUNT(sPsyduckGfx30_1)}, 
	{NULL, 32}, 
	{sPsyduckGfx30_2, ARRAY_COUNT(sPsyduckGfx30_2)}, 
	{NULL, 32}, 
	{sPsyduckGfx30_3, ARRAY_COUNT(sPsyduckGfx30_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_31.4bpp.lz");
static const ax_sprite sPsyduckSprites31[] = {
	{NULL, 32}, 
	{sPsyduckGfx31, ARRAY_COUNT(sPsyduckGfx31)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_32.4bpp.lz");
static const u8 sPsyduckGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_32_1.4bpp.lz");
static const u8 sPsyduckGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_32_2.4bpp.lz");
static const u8 sPsyduckGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_32_3.4bpp.lz");
static const ax_sprite sPsyduckSprites32[] = {
	{NULL, 32}, 
	{sPsyduckGfx32, ARRAY_COUNT(sPsyduckGfx32)}, 
	{NULL, 64}, 
	{sPsyduckGfx32_1, ARRAY_COUNT(sPsyduckGfx32_1)}, 
	{NULL, 32}, 
	{sPsyduckGfx32_2, ARRAY_COUNT(sPsyduckGfx32_2)}, 
	{NULL, 32}, 
	{sPsyduckGfx32_3, ARRAY_COUNT(sPsyduckGfx32_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_33.4bpp.lz");
static const u8 sPsyduckGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_33_1.4bpp.lz");
static const ax_sprite sPsyduckSprites33[] = {
	{NULL, 160}, 
	{sPsyduckGfx33, ARRAY_COUNT(sPsyduckGfx33)}, 
	{NULL, 32}, 
	{sPsyduckGfx33_1, ARRAY_COUNT(sPsyduckGfx33_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_34.4bpp.lz");
static const u8 sPsyduckGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_34_1.4bpp.lz");
static const u8 sPsyduckGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_34_2.4bpp.lz");
static const ax_sprite sPsyduckSprites34[] = {
	{sPsyduckGfx34, ARRAY_COUNT(sPsyduckGfx34)}, 
	{NULL, 32}, 
	{sPsyduckGfx34_1, ARRAY_COUNT(sPsyduckGfx34_1)}, 
	{NULL, 32}, 
	{sPsyduckGfx34_2, ARRAY_COUNT(sPsyduckGfx34_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_35.4bpp.lz");
static const ax_sprite sPsyduckSprites35[] = {
	{sPsyduckGfx35, ARRAY_COUNT(sPsyduckGfx35)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_36.4bpp.lz");
static const u8 sPsyduckGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_36_1.4bpp.lz");
static const u8 sPsyduckGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_36_2.4bpp.lz");
static const ax_sprite sPsyduckSprites36[] = {
	{sPsyduckGfx36, ARRAY_COUNT(sPsyduckGfx36)}, 
	{NULL, 32}, 
	{sPsyduckGfx36_1, ARRAY_COUNT(sPsyduckGfx36_1)}, 
	{NULL, 32}, 
	{sPsyduckGfx36_2, ARRAY_COUNT(sPsyduckGfx36_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_37.4bpp.lz");
static const ax_sprite sPsyduckSprites37[] = {
	{NULL, 32}, 
	{sPsyduckGfx37, ARRAY_COUNT(sPsyduckGfx37)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_38.4bpp.lz");
static const u8 sPsyduckGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_38_1.4bpp.lz");
static const u8 sPsyduckGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_38_2.4bpp.lz");
static const ax_sprite sPsyduckSprites38[] = {
	{sPsyduckGfx38, ARRAY_COUNT(sPsyduckGfx38)}, 
	{NULL, 32}, 
	{sPsyduckGfx38_1, ARRAY_COUNT(sPsyduckGfx38_1)}, 
	{NULL, 32}, 
	{sPsyduckGfx38_2, ARRAY_COUNT(sPsyduckGfx38_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_39.4bpp.lz");
static const u8 sPsyduckGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_39_1.4bpp.lz");
static const u8 sPsyduckGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_39_2.4bpp.lz");
static const ax_sprite sPsyduckSprites39[] = {
	{NULL, 64}, 
	{sPsyduckGfx39, ARRAY_COUNT(sPsyduckGfx39)}, 
	{NULL, 32}, 
	{sPsyduckGfx39_1, ARRAY_COUNT(sPsyduckGfx39_1)}, 
	{NULL, 96}, 
	{sPsyduckGfx39_2, ARRAY_COUNT(sPsyduckGfx39_2)}, 
	{NULL, 224}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_40.4bpp.lz");
static const u8 sPsyduckGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_40_1.4bpp.lz");
static const u8 sPsyduckGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_40_2.4bpp.lz");
static const ax_sprite sPsyduckSprites40[] = {
	{sPsyduckGfx40, ARRAY_COUNT(sPsyduckGfx40)}, 
	{NULL, 32}, 
	{sPsyduckGfx40_1, ARRAY_COUNT(sPsyduckGfx40_1)}, 
	{NULL, 64}, 
	{sPsyduckGfx40_2, ARRAY_COUNT(sPsyduckGfx40_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_41.4bpp.lz");
static const ax_sprite sPsyduckSprites41[] = {
	{sPsyduckGfx41, ARRAY_COUNT(sPsyduckGfx41)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_42.4bpp.lz");
static const u8 sPsyduckGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_42_1.4bpp.lz");
static const u8 sPsyduckGfx42_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_42_2.4bpp.lz");
static const ax_sprite sPsyduckSprites42[] = {
	{sPsyduckGfx42, ARRAY_COUNT(sPsyduckGfx42)}, 
	{NULL, 32}, 
	{sPsyduckGfx42_1, ARRAY_COUNT(sPsyduckGfx42_1)}, 
	{NULL, 32}, 
	{sPsyduckGfx42_2, ARRAY_COUNT(sPsyduckGfx42_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_43.4bpp.lz");
static const u8 sPsyduckGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_43_1.4bpp.lz");
static const u8 sPsyduckGfx43_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_43_2.4bpp.lz");
static const ax_sprite sPsyduckSprites43[] = {
	{sPsyduckGfx43, ARRAY_COUNT(sPsyduckGfx43)}, 
	{NULL, 32}, 
	{sPsyduckGfx43_1, ARRAY_COUNT(sPsyduckGfx43_1)}, 
	{NULL, 32}, 
	{sPsyduckGfx43_2, ARRAY_COUNT(sPsyduckGfx43_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_44.4bpp.lz");
static const u8 sPsyduckGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_44_1.4bpp.lz");
static const u8 sPsyduckGfx44_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_44_2.4bpp.lz");
static const u8 sPsyduckGfx44_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_44_3.4bpp.lz");
static const ax_sprite sPsyduckSprites44[] = {
	{sPsyduckGfx44, ARRAY_COUNT(sPsyduckGfx44)}, 
	{NULL, 32}, 
	{sPsyduckGfx44_1, ARRAY_COUNT(sPsyduckGfx44_1)}, 
	{NULL, 32}, 
	{sPsyduckGfx44_2, ARRAY_COUNT(sPsyduckGfx44_2)}, 
	{NULL, 32}, 
	{sPsyduckGfx44_3, ARRAY_COUNT(sPsyduckGfx44_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_45.4bpp.lz");
static const u8 sPsyduckGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_45_1.4bpp.lz");
static const u8 sPsyduckGfx45_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_45_2.4bpp.lz");
static const u8 sPsyduckGfx45_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_45_3.4bpp.lz");
static const ax_sprite sPsyduckSprites45[] = {
	{NULL, 32}, 
	{sPsyduckGfx45, ARRAY_COUNT(sPsyduckGfx45)}, 
	{NULL, 32}, 
	{sPsyduckGfx45_1, ARRAY_COUNT(sPsyduckGfx45_1)}, 
	{NULL, 32}, 
	{sPsyduckGfx45_2, ARRAY_COUNT(sPsyduckGfx45_2)}, 
	{NULL, 32}, 
	{sPsyduckGfx45_3, ARRAY_COUNT(sPsyduckGfx45_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_46.4bpp.lz");
static const u8 sPsyduckGfx46_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_46_1.4bpp.lz");
static const u8 sPsyduckGfx46_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_46_2.4bpp.lz");
static const ax_sprite sPsyduckSprites46[] = {
	{sPsyduckGfx46, ARRAY_COUNT(sPsyduckGfx46)}, 
	{NULL, 32}, 
	{sPsyduckGfx46_1, ARRAY_COUNT(sPsyduckGfx46_1)}, 
	{NULL, 32}, 
	{sPsyduckGfx46_2, ARRAY_COUNT(sPsyduckGfx46_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_47.4bpp.lz");
static const u8 sPsyduckGfx47_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_47_1.4bpp.lz");
static const u8 sPsyduckGfx47_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_47_2.4bpp.lz");
static const ax_sprite sPsyduckSprites47[] = {
	{sPsyduckGfx47, ARRAY_COUNT(sPsyduckGfx47)}, 
	{NULL, 32}, 
	{sPsyduckGfx47_1, ARRAY_COUNT(sPsyduckGfx47_1)}, 
	{NULL, 64}, 
	{sPsyduckGfx47_2, ARRAY_COUNT(sPsyduckGfx47_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_48.4bpp.lz");
static const u8 sPsyduckGfx48_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_48_1.4bpp.lz");
static const u8 sPsyduckGfx48_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_48_2.4bpp.lz");
static const ax_sprite sPsyduckSprites48[] = {
	{sPsyduckGfx48, ARRAY_COUNT(sPsyduckGfx48)}, 
	{NULL, 32}, 
	{sPsyduckGfx48_1, ARRAY_COUNT(sPsyduckGfx48_1)}, 
	{NULL, 32}, 
	{sPsyduckGfx48_2, ARRAY_COUNT(sPsyduckGfx48_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_49.4bpp.lz");
static const ax_sprite sPsyduckSprites49[] = {
	{sPsyduckGfx49, ARRAY_COUNT(sPsyduckGfx49)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_50.4bpp.lz");
static const ax_sprite sPsyduckSprites50[] = {
	{sPsyduckGfx50, ARRAY_COUNT(sPsyduckGfx50)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_51.4bpp.lz");
static const ax_sprite sPsyduckSprites51[] = {
	{sPsyduckGfx51, ARRAY_COUNT(sPsyduckGfx51)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_52.4bpp.lz");
static const ax_sprite sPsyduckSprites52[] = {
	{sPsyduckGfx52, ARRAY_COUNT(sPsyduckGfx52)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_53.4bpp.lz");
static const ax_sprite sPsyduckSprites53[] = {
	{sPsyduckGfx53, ARRAY_COUNT(sPsyduckGfx53)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_54.4bpp.lz");
static const ax_sprite sPsyduckSprites54[] = {
	{sPsyduckGfx54, ARRAY_COUNT(sPsyduckGfx54)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_55.4bpp.lz");
static const ax_sprite sPsyduckSprites55[] = {
	{sPsyduckGfx55, ARRAY_COUNT(sPsyduckGfx55)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_56.4bpp.lz");
static const ax_sprite sPsyduckSprites56[] = {
	{sPsyduckGfx56, ARRAY_COUNT(sPsyduckGfx56)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_57.4bpp.lz");
static const ax_sprite sPsyduckSprites57[] = {
	{sPsyduckGfx57, ARRAY_COUNT(sPsyduckGfx57)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_58.4bpp.lz");
static const ax_sprite sPsyduckSprites58[] = {
	{sPsyduckGfx58, ARRAY_COUNT(sPsyduckGfx58)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_59.4bpp.lz");
static const ax_sprite sPsyduckSprites59[] = {
	{sPsyduckGfx59, ARRAY_COUNT(sPsyduckGfx59)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_60.4bpp.lz");
static const ax_sprite sPsyduckSprites60[] = {
	{sPsyduckGfx60, ARRAY_COUNT(sPsyduckGfx60)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_61.4bpp.lz");
static const ax_sprite sPsyduckSprites61[] = {
	{sPsyduckGfx61, ARRAY_COUNT(sPsyduckGfx61)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_62.4bpp.lz");
static const ax_sprite sPsyduckSprites62[] = {
	{sPsyduckGfx62, ARRAY_COUNT(sPsyduckGfx62)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_63.4bpp.lz");
static const ax_sprite sPsyduckSprites63[] = {
	{sPsyduckGfx63, ARRAY_COUNT(sPsyduckGfx63)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_64.4bpp.lz");
static const ax_sprite sPsyduckSprites64[] = {
	{sPsyduckGfx64, ARRAY_COUNT(sPsyduckGfx64)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_65.4bpp.lz");
static const ax_sprite sPsyduckSprites65[] = {
	{sPsyduckGfx65, ARRAY_COUNT(sPsyduckGfx65)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_66.4bpp.lz");
static const ax_sprite sPsyduckSprites66[] = {
	{sPsyduckGfx66, ARRAY_COUNT(sPsyduckGfx66)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_67.4bpp.lz");
static const ax_sprite sPsyduckSprites67[] = {
	{sPsyduckGfx67, ARRAY_COUNT(sPsyduckGfx67)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_68.4bpp.lz");
static const ax_sprite sPsyduckSprites68[] = {
	{sPsyduckGfx68, ARRAY_COUNT(sPsyduckGfx68)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_69.4bpp.lz");
static const ax_sprite sPsyduckSprites69[] = {
	{sPsyduckGfx69, ARRAY_COUNT(sPsyduckGfx69)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_70.4bpp.lz");
static const ax_sprite sPsyduckSprites70[] = {
	{sPsyduckGfx70, ARRAY_COUNT(sPsyduckGfx70)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_71.4bpp.lz");
static const ax_sprite sPsyduckSprites71[] = {
	{sPsyduckGfx71, ARRAY_COUNT(sPsyduckGfx71)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx72[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_72.4bpp.lz");
static const ax_sprite sPsyduckSprites72[] = {
	{sPsyduckGfx72, ARRAY_COUNT(sPsyduckGfx72)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx73[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_73.4bpp.lz");
static const ax_sprite sPsyduckSprites73[] = {
	{sPsyduckGfx73, ARRAY_COUNT(sPsyduckGfx73)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx74[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_74.4bpp.lz");
static const ax_sprite sPsyduckSprites74[] = {
	{sPsyduckGfx74, ARRAY_COUNT(sPsyduckGfx74)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx75[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_75.4bpp.lz");
static const ax_sprite sPsyduckSprites75[] = {
	{sPsyduckGfx75, ARRAY_COUNT(sPsyduckGfx75)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx76[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_76.4bpp.lz");
static const ax_sprite sPsyduckSprites76[] = {
	{sPsyduckGfx76, ARRAY_COUNT(sPsyduckGfx76)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx77[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_77.4bpp.lz");
static const ax_sprite sPsyduckSprites77[] = {
	{sPsyduckGfx77, ARRAY_COUNT(sPsyduckGfx77)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx78[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_78.4bpp.lz");
static const ax_sprite sPsyduckSprites78[] = {
	{sPsyduckGfx78, ARRAY_COUNT(sPsyduckGfx78)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx79[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_79.4bpp.lz");
static const ax_sprite sPsyduckSprites79[] = {
	{sPsyduckGfx79, ARRAY_COUNT(sPsyduckGfx79)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx80[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_80.4bpp.lz");
static const ax_sprite sPsyduckSprites80[] = {
	{sPsyduckGfx80, ARRAY_COUNT(sPsyduckGfx80)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx81[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_81.4bpp.lz");
static const ax_sprite sPsyduckSprites81[] = {
	{sPsyduckGfx81, ARRAY_COUNT(sPsyduckGfx81)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx82[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_82.4bpp.lz");
static const ax_sprite sPsyduckSprites82[] = {
	{sPsyduckGfx82, ARRAY_COUNT(sPsyduckGfx82)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx83[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_83.4bpp.lz");
static const ax_sprite sPsyduckSprites83[] = {
	{sPsyduckGfx83, ARRAY_COUNT(sPsyduckGfx83)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx84[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_84.4bpp.lz");
static const ax_sprite sPsyduckSprites84[] = {
	{sPsyduckGfx84, ARRAY_COUNT(sPsyduckGfx84)}, 
	{NULL, 0}
};
static const u8 sPsyduckGfx85[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/psyduck/sprite_85.4bpp.lz");
static const ax_sprite sPsyduckSprites85[] = {
	{sPsyduckGfx85, ARRAY_COUNT(sPsyduckGfx85)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesPsyduck[] = {
	sPsyduckPose1,
	sPsyduckPose2,
	sPsyduckPose3,
	sPsyduckPose4,
	sPsyduckPose5,
	sPsyduckPose6,
	sPsyduckPose7,
	sPsyduckPose8,
	sPsyduckPose9,
	sPsyduckPose10,
	sPsyduckPose11,
	sPsyduckPose12,
	sPsyduckPose13,
	sPsyduckPose14,
	sPsyduckPose15,
	sPsyduckPose16,
	sPsyduckPose17,
	sPsyduckPose18,
	sPsyduckPose19,
	sPsyduckPose20,
	sPsyduckPose21,
	sPsyduckPose22,
	sPsyduckPose23,
	sPsyduckPose24,
	sPsyduckPose1,
	sPsyduckPose2,
	sPsyduckPose3,
	sPsyduckPose28,
	sPsyduckPose29,
	sPsyduckPose4,
	sPsyduckPose5,
	sPsyduckPose6,
	sPsyduckPose33,
	sPsyduckPose34,
	sPsyduckPose7,
	sPsyduckPose8,
	sPsyduckPose9,
	sPsyduckPose38,
	sPsyduckPose39,
	sPsyduckPose10,
	sPsyduckPose11,
	sPsyduckPose12,
	sPsyduckPose43,
	sPsyduckPose44,
	sPsyduckPose13,
	sPsyduckPose14,
	sPsyduckPose15,
	sPsyduckPose48,
	sPsyduckPose49,
	sPsyduckPose16,
	sPsyduckPose17,
	sPsyduckPose18,
	sPsyduckPose53,
	sPsyduckPose54,
	sPsyduckPose19,
	sPsyduckPose20,
	sPsyduckPose21,
	sPsyduckPose58,
	sPsyduckPose59,
	sPsyduckPose60,
	sPsyduckPose61,
	sPsyduckPose62,
	sPsyduckPose63,
	sPsyduckPose64,
	sPsyduckPose1,
	sPsyduckPose2,
	sPsyduckPose3,
	sPsyduckPose68,
	sPsyduckPose69,
	sPsyduckPose70,
	sPsyduckPose71,
	sPsyduckPose4,
	sPsyduckPose5,
	sPsyduckPose6,
	sPsyduckPose75,
	sPsyduckPose76,
	sPsyduckPose77,
	sPsyduckPose78,
	sPsyduckPose7,
	sPsyduckPose8,
	sPsyduckPose9,
	sPsyduckPose82,
	sPsyduckPose83,
	sPsyduckPose84,
	sPsyduckPose85,
	sPsyduckPose10,
	sPsyduckPose11,
	sPsyduckPose12,
	sPsyduckPose89,
	sPsyduckPose90,
	sPsyduckPose91,
	sPsyduckPose92,
	sPsyduckPose13,
	sPsyduckPose14,
	sPsyduckPose15,
	sPsyduckPose96,
	sPsyduckPose97,
	sPsyduckPose98,
	sPsyduckPose99,
	sPsyduckPose16,
	sPsyduckPose17,
	sPsyduckPose18,
	sPsyduckPose103,
	sPsyduckPose104,
	sPsyduckPose105,
	sPsyduckPose106,
	sPsyduckPose19,
	sPsyduckPose20,
	sPsyduckPose21,
	sPsyduckPose110,
	sPsyduckPose111,
	sPsyduckPose112,
	sPsyduckPose113,
	sPsyduckPose22,
	sPsyduckPose23,
	sPsyduckPose24,
	sPsyduckPose117,
	sPsyduckPose118,
	sPsyduckPose119,
	sPsyduckPose120,
	sPsyduckPose1,
	sPsyduckPose2,
	sPsyduckPose3,
	sPsyduckPose124,
	sPsyduckPose4,
	sPsyduckPose5,
	sPsyduckPose6,
	sPsyduckPose128,
	sPsyduckPose7,
	sPsyduckPose8,
	sPsyduckPose9,
	sPsyduckPose132,
	sPsyduckPose10,
	sPsyduckPose11,
	sPsyduckPose12,
	sPsyduckPose136,
	sPsyduckPose13,
	sPsyduckPose14,
	sPsyduckPose15,
	sPsyduckPose140,
	sPsyduckPose16,
	sPsyduckPose17,
	sPsyduckPose18,
	sPsyduckPose144,
	sPsyduckPose19,
	sPsyduckPose20,
	sPsyduckPose21,
	sPsyduckPose148,
	sPsyduckPose22,
	sPsyduckPose23,
	sPsyduckPose24,
	sPsyduckPose152,
	sPsyduckPose1,
	sPsyduckPose22,
	sPsyduckPose19,
	sPsyduckPose16,
	sPsyduckPose13,
	sPsyduckPose10,
	sPsyduckPose7,
	sPsyduckPose4,
	sPsyduckPose161,
	sPsyduckPose162,
	sPsyduckPose163,
	sPsyduckPose164,
	sPsyduckPose165,
	sPsyduckPose166,
	sPsyduckPose167,
	sPsyduckPose168,
	sPsyduckPose169,
	sPsyduckPose170,
	sPsyduckPose1,
	sPsyduckPose2,
	sPsyduckPose3,
	sPsyduckPose4,
	sPsyduckPose5,
	sPsyduckPose6,
	sPsyduckPose7,
	sPsyduckPose8,
	sPsyduckPose9,
	sPsyduckPose10,
	sPsyduckPose11,
	sPsyduckPose12,
	sPsyduckPose13,
	sPsyduckPose14,
	sPsyduckPose15,
	sPsyduckPose16,
	sPsyduckPose17,
	sPsyduckPose18,
	sPsyduckPose19,
	sPsyduckPose20,
	sPsyduckPose21,
	sPsyduckPose22,
	sPsyduckPose23,
	sPsyduckPose24,
	sPsyduckPose28,
	sPsyduckPose196,
	sPsyduckPose197,
	sPsyduckPose53,
	sPsyduckPose48,
	sPsyduckPose43,
	sPsyduckPose201,
	sPsyduckPose202,
	sPsyduckPose203,
	sPsyduckPose76,
	sPsyduckPose83,
	sPsyduckPose90,
	sPsyduckPose97,
	sPsyduckPose104,
	sPsyduckPose111,
	sPsyduckPose118,
	sPsyduckPose1,
	sPsyduckPose212,
	sPsyduckPose213,
	sPsyduckPose4,
	sPsyduckPose215,
	sPsyduckPose216,
	sPsyduckPose7,
	sPsyduckPose218,
	sPsyduckPose219,
	sPsyduckPose10,
	sPsyduckPose221,
	sPsyduckPose222,
	sPsyduckPose13,
	sPsyduckPose224,
	sPsyduckPose225,
	sPsyduckPose16,
	sPsyduckPose227,
	sPsyduckPose228,
	sPsyduckPose19,
	sPsyduckPose230,
	sPsyduckPose231,
	sPsyduckPose22,
	sPsyduckPose233,
	sPsyduckPose234,
	sPsyduckPose71,
	sPsyduckPose120,
	sPsyduckPose113,
	sPsyduckPose106,
	sPsyduckPose99,
	sPsyduckPose92,
	sPsyduckPose85,
	sPsyduckPose78,
	sPsyduckPose1,
	sPsyduckPose22,
	sPsyduckPose19,
	sPsyduckPose16,
	sPsyduckPose13,
	sPsyduckPose10,
	sPsyduckPose7,
	sPsyduckPose4,
	sPsyduckPose251,
	sPsyduckPose252,
	sPsyduckPose253,
	sPsyduckPose254,
	sPsyduckPose251,
	sPsyduckPose256,
	sPsyduckPose257,
	sPsyduckPose258,
	sPsyduckPose7,
	sPsyduckPose13,
	sPsyduckPose261,
	sPsyduckPose262,
	sPsyduckPose263,
	sPsyduckPose264,
	sPsyduckPose265,
	sPsyduckPose266,
	sPsyduckPose267,
	sPsyduckPose268,
	sPsyduckPose269,
	sPsyduckPose269,
	sPsyduckPose271,
	sPsyduckPose272,
	sPsyduckPose273,
	sPsyduckPose19,
	sPsyduckPose275,
	sPsyduckPose276,
	sPsyduckPose13,
	sPsyduckPose278,
	sPsyduckPose279,
	sPsyduckPose1,
	sPsyduckPose264,
	sPsyduckPose282,
	sPsyduckPose19,
	sPsyduckPose284,
	sPsyduckPose7,
	sPsyduckPose286,
	sPsyduckPose13,
	sPsyduckPose288,
	sPsyduckPose289,
	sPsyduckPose290,
	sPsyduckPose291,
	sPsyduckPose292,
	sPsyduckPose293,
	sPsyduckPose294,
	sPsyduckPose295,
	sPsyduckPose296,
	sPsyduckPose297,
	sPsyduckPose298,
	sPsyduckPose299,
	sPsyduckPose251,
	sPsyduckPose252,
	sPsyduckPose253,
	sPsyduckPose254,
	sPsyduckPose251,
	sPsyduckPose252,
	sPsyduckPose253,
	sPsyduckPose254,
};

static const struct PositionSets sAxPositionsPsyduck[] = {
	[0] = { .set = { {-1, -6}, {-9, -6}, {7, -6}, {-1, -7} } },
	[1] = { .set = { {-1, -5}, {-9, -6}, {8, -5}, {-1, -6} } },
	[2] = { .set = { {-1, -5}, {-10, -5}, {7, -6}, {-1, -6} } },
	[3] = { .set = { {3, -7}, {5, -6}, {-7, -4}, {-2, -5} } },
	[4] = { .set = { {3, -6}, {4, -6}, {-5, -2}, {-2, -5} } },
	[5] = { .set = { {3, -6}, {5, -4}, {-8, -4}, {-2, -5} } },
	[6] = { .set = { {5, -10}, {0, -6}, {-3, -3}, {-2, -5} } },
	[7] = { .set = { {5, -9}, {-5, -5}, {0, -2}, {-2, -5} } },
	[8] = { .set = { {5, -8}, {1, -4}, {-5, -2}, {-3, -5} } },
	[9] = { .set = { {6, -10}, {-7, -6}, {5, -4}, {-1, -7} } },
	[10] = { .set = { {6, -9}, {-8, -4}, {5, -3}, {-2, -6} } },
	[11] = { .set = { {6, -9}, {-5, -5}, {1, -1}, {-2, -6} } },
	[12] = { .set = { {-1, -13}, {7, -5}, {-9, -6}, {-1, -7} } },
	[13] = { .set = { {-1, -12}, {6, -3}, {-8, -7}, {-1, -6} } },
	[14] = { .set = { {-1, -11}, {7, -6}, {-8, -4}, {0, -6} } },
	[15] = { .set = { {-8, -10}, {5, -6}, {-7, -4}, {-1, -7} } },
	[16] = { .set = { {-8, -9}, {6, -4}, {-7, -3}, {0, -6} } },
	[17] = { .set = { {-8, -9}, {3, -5}, {-3, -1}, {0, -6} } },
	[18] = { .set = { {-7, -10}, {-2, -6}, {1, -3}, {0, -5} } },
	[19] = { .set = { {-7, -9}, {3, -5}, {-2, -2}, {0, -5} } },
	[20] = { .set = { {-7, -8}, {-3, -4}, {3, -2}, {1, -5} } },
	[21] = { .set = { {-5, -7}, {-7, -6}, {5, -4}, {0, -5} } },
	[22] = { .set = { {-5, -6}, {-6, -6}, {3, -2}, {0, -5} } },
	[23] = { .set = { {-5, -6}, {-7, -4}, {6, -4}, {0, -5} } },
	[24] = { .set = { {-1, -6}, {-9, -6}, {7, -6}, {-1, -7} } },
	[25] = { .set = { {-1, -5}, {-9, -6}, {8, -5}, {-1, -6} } },
	[26] = { .set = { {-1, -5}, {-10, -5}, {7, -6}, {-1, -6} } },
	[27] = { .set = { {-1, -5}, {-11, -6}, {9, -6}, {-1, -8} } },
	[28] = { .set = { {-1, 0}, {-10, -7}, {7, -7}, {-1, -6} } },
	[29] = { .set = { {3, -7}, {5, -6}, {-7, -4}, {-2, -5} } },
	[30] = { .set = { {3, -6}, {4, -6}, {-5, -2}, {-2, -5} } },
	[31] = { .set = { {3, -6}, {5, -4}, {-8, -4}, {-2, -5} } },
	[32] = { .set = { {5, -6}, {9, -9}, {-3, -5}, {-1, -7} } },
	[33] = { .set = { {7, -1}, {6, -6}, {-8, -5}, {-1, -6} } },
	[34] = { .set = { {5, -10}, {0, -6}, {-3, -3}, {-2, -5} } },
	[35] = { .set = { {5, -9}, {-5, -5}, {0, -2}, {-2, -5} } },
	[36] = { .set = { {5, -8}, {1, -4}, {-5, -2}, {-3, -5} } },
	[37] = { .set = { {8, -10}, {2, -13}, {2, -8}, {-3, -10} } },
	[38] = { .set = { {5, -3}, {-3, -12}, {-5, -7}, {-1, -9} } },
	[39] = { .set = { {6, -10}, {-7, -6}, {5, -4}, {-1, -7} } },
	[40] = { .set = { {6, -9}, {-8, -4}, {5, -3}, {-2, -6} } },
	[41] = { .set = { {6, -9}, {-5, -5}, {1, -1}, {-2, -6} } },
	[42] = { .set = { {8, -10}, {-2, -12}, {7, -9}, {-2, -7} } },
	[43] = { .set = { {6, -3}, {-6, -10}, {-2, -5}, {0, -9} } },
	[44] = { .set = { {-1, -13}, {7, -5}, {-9, -6}, {-1, -7} } },
	[45] = { .set = { {-1, -12}, {6, -3}, {-8, -7}, {-1, -6} } },
	[46] = { .set = { {-1, -11}, {7, -6}, {-8, -4}, {0, -6} } },
	[47] = { .set = { {-1, -14}, {7, -12}, {-9, -12}, {-1, -8} } },
	[48] = { .set = { {-1, -13}, {6, -7}, {-8, -6}, {-1, -10} } },
	[49] = { .set = { {-8, -10}, {5, -6}, {-7, -4}, {-1, -7} } },
	[50] = { .set = { {-8, -9}, {6, -4}, {-7, -3}, {0, -6} } },
	[51] = { .set = { {-8, -9}, {3, -5}, {-3, -1}, {0, -6} } },
	[52] = { .set = { {-10, -10}, {0, -12}, {-9, -9}, {0, -7} } },
	[53] = { .set = { {-8, -3}, {4, -10}, {0, -5}, {-2, -9} } },
	[54] = { .set = { {-7, -10}, {-2, -6}, {1, -3}, {0, -5} } },
	[55] = { .set = { {-7, -9}, {3, -5}, {-2, -2}, {0, -5} } },
	[56] = { .set = { {-7, -8}, {-3, -4}, {3, -2}, {1, -5} } },
	[57] = { .set = { {-10, -10}, {-4, -13}, {-4, -8}, {1, -10} } },
	[58] = { .set = { {-7, -3}, {1, -12}, {3, -7}, {-1, -9} } },
	[59] = { .set = { {-4, -7}, {-6, -6}, {6, -4}, {1, -5} } },
	[60] = { .set = { {-4, -6}, {-5, -6}, {4, -2}, {1, -5} } },
	[61] = { .set = { {-4, -6}, {-6, -4}, {7, -4}, {1, -5} } },
	[62] = { .set = { {-6, -6}, {-10, -9}, {2, -5}, {0, -7} } },
	[63] = { .set = { {-8, -1}, {-7, -6}, {7, -5}, {0, -6} } },
	[64] = { .set = { {-1, -6}, {-9, -6}, {7, -6}, {-1, -7} } },
	[65] = { .set = { {-1, -5}, {-9, -6}, {8, -5}, {-1, -6} } },
	[66] = { .set = { {-1, -5}, {-10, -5}, {7, -6}, {-1, -6} } },
	[67] = { .set = { {-2, -5}, {-10, -13}, {2, -1}, {-2, -8} } },
	[68] = { .set = { {-1, -5}, {-9, -13}, {3, -1}, {-1, -8} } },
	[69] = { .set = { {0, -5}, {-4, -1}, {8, -13}, {0, -8} } },
	[70] = { .set = { {0, -5}, {-4, -1}, {8, -13}, {0, -8} } },
	[71] = { .set = { {3, -7}, {5, -6}, {-7, -4}, {-2, -5} } },
	[72] = { .set = { {3, -6}, {4, -6}, {-5, -2}, {-2, -5} } },
	[73] = { .set = { {3, -6}, {5, -4}, {-8, -4}, {-2, -5} } },
	[74] = { .set = { {4, -6}, {7, -16}, {-2, 0}, {0, -6} } },
	[75] = { .set = { {4, -6}, {7, -16}, {-2, 0}, {0, -6} } },
	[76] = { .set = { {3, -6}, {5, 0}, {-8, -12}, {-1, -5} } },
	[77] = { .set = { {3, -6}, {5, 0}, {-8, -12}, {-1, -5} } },
	[78] = { .set = { {5, -10}, {0, -6}, {-3, -3}, {-2, -5} } },
	[79] = { .set = { {5, -9}, {-5, -5}, {0, -2}, {-2, -5} } },
	[80] = { .set = { {5, -8}, {1, -4}, {-5, -2}, {-3, -5} } },
	[81] = { .set = { {6, -8}, {4, -16}, {3, -1}, {-1, -6} } },
	[82] = { .set = { {6, -8}, {4, -16}, {3, -1}, {-1, -6} } },
	[83] = { .set = { {5, -8}, {4, -4}, {-6, -12}, {-2, -6} } },
	[84] = { .set = { {5, -8}, {4, -4}, {-6, -12}, {-2, -6} } },
	[85] = { .set = { {6, -10}, {-7, -6}, {5, -4}, {-1, -7} } },
	[86] = { .set = { {6, -9}, {-8, -4}, {5, -3}, {-2, -6} } },
	[87] = { .set = { {6, -9}, {-5, -5}, {1, -1}, {-2, -6} } },
	[88] = { .set = { {6, -7}, {-6, -14}, {6, -3}, {-1, -6} } },
	[89] = { .set = { {6, -7}, {-6, -14}, {6, -3}, {-1, -6} } },
	[90] = { .set = { {5, -9}, {-2, -6}, {3, -12}, {-3, -6} } },
	[91] = { .set = { {5, -9}, {-2, -6}, {3, -12}, {-3, -6} } },
	[92] = { .set = { {-1, -13}, {7, -5}, {-9, -6}, {-1, -7} } },
	[93] = { .set = { {-1, -12}, {6, -3}, {-8, -7}, {-1, -6} } },
	[94] = { .set = { {-1, -11}, {7, -6}, {-8, -4}, {0, -6} } },
	[95] = { .set = { {3, -13}, {7, -14}, {-2, -6}, {0, -7} } },
	[96] = { .set = { {3, -13}, {7, -14}, {-2, -6}, {0, -7} } },
	[97] = { .set = { {-4, -12}, {2, -5}, {-9, -13}, {-2, -6} } },
	[98] = { .set = { {-4, -12}, {2, -5}, {-9, -13}, {-2, -6} } },
	[99] = { .set = { {-8, -10}, {5, -6}, {-7, -4}, {-1, -7} } },
	[100] = { .set = { {-8, -9}, {6, -4}, {-7, -3}, {0, -6} } },
	[101] = { .set = { {-8, -9}, {3, -5}, {-3, -1}, {0, -6} } },
	[102] = { .set = { {-8, -7}, {4, -14}, {-8, -3}, {-1, -6} } },
	[103] = { .set = { {-8, -7}, {4, -14}, {-8, -3}, {-1, -6} } },
	[104] = { .set = { {-7, -9}, {0, -6}, {-5, -12}, {1, -6} } },
	[105] = { .set = { {-7, -9}, {0, -6}, {-5, -12}, {1, -6} } },
	[106] = { .set = { {-7, -10}, {-2, -6}, {1, -3}, {0, -5} } },
	[107] = { .set = { {-7, -9}, {3, -5}, {-2, -2}, {0, -5} } },
	[108] = { .set = { {-7, -8}, {-3, -4}, {3, -2}, {1, -5} } },
	[109] = { .set = { {-8, -8}, {-6, -16}, {-5, -1}, {-1, -6} } },
	[110] = { .set = { {-8, -8}, {-6, -16}, {-5, -1}, {-1, -6} } },
	[111] = { .set = { {-7, -8}, {-6, -4}, {4, -12}, {0, -6} } },
	[112] = { .set = { {-7, -8}, {-6, -4}, {4, -12}, {0, -6} } },
	[113] = { .set = { {-5, -7}, {-7, -6}, {5, -4}, {0, -5} } },
	[114] = { .set = { {-5, -6}, {-6, -6}, {3, -2}, {0, -5} } },
	[115] = { .set = { {-5, -6}, {-7, -4}, {6, -4}, {0, -5} } },
	[116] = { .set = { {-6, -6}, {-9, -16}, {0, 0}, {-2, -6} } },
	[117] = { .set = { {-6, -6}, {-9, -16}, {0, 0}, {-2, -6} } },
	[118] = { .set = { {-5, -6}, {-7, 0}, {6, -12}, {-1, -5} } },
	[119] = { .set = { {-5, -6}, {-7, 0}, {6, -12}, {-1, -5} } },
	[120] = { .set = { {-1, -6}, {-9, -6}, {7, -6}, {-1, -7} } },
	[121] = { .set = { {-1, -5}, {-9, -6}, {8, -5}, {-1, -6} } },
	[122] = { .set = { {-1, -5}, {-10, -5}, {7, -6}, {-1, -6} } },
	[123] = { .set = { {-1, -5}, {-10, -7}, {8, -7}, {-1, -7} } },
	[124] = { .set = { {3, -7}, {5, -6}, {-7, -4}, {-2, -5} } },
	[125] = { .set = { {3, -6}, {4, -6}, {-5, -2}, {-2, -5} } },
	[126] = { .set = { {3, -6}, {5, -4}, {-8, -4}, {-2, -5} } },
	[127] = { .set = { {2, -5}, {8, -6}, {-9, -4}, {0, -6} } },
	[128] = { .set = { {5, -10}, {0, -6}, {-3, -3}, {-2, -5} } },
	[129] = { .set = { {5, -9}, {-5, -5}, {0, -2}, {-2, -5} } },
	[130] = { .set = { {5, -8}, {1, -4}, {-5, -2}, {-3, -5} } },
	[131] = { .set = { {4, -7}, {-4, -8}, {-6, -4}, {-3, -6} } },
	[132] = { .set = { {6, -10}, {-7, -6}, {5, -4}, {-1, -7} } },
	[133] = { .set = { {6, -9}, {-8, -4}, {5, -3}, {-2, -6} } },
	[134] = { .set = { {6, -9}, {-5, -5}, {1, -1}, {-2, -6} } },
	[135] = { .set = { {5, -9}, {-9, -9}, {1, -5}, {-3, -6} } },
	[136] = { .set = { {-1, -13}, {7, -5}, {-9, -6}, {-1, -7} } },
	[137] = { .set = { {-1, -12}, {6, -3}, {-8, -7}, {-1, -6} } },
	[138] = { .set = { {-1, -11}, {7, -6}, {-8, -4}, {0, -6} } },
	[139] = { .set = { {-1, -13}, {9, -9}, {-11, -9}, {-1, -7} } },
	[140] = { .set = { {-8, -10}, {5, -6}, {-7, -4}, {-1, -7} } },
	[141] = { .set = { {-8, -9}, {6, -4}, {-7, -3}, {0, -6} } },
	[142] = { .set = { {-8, -9}, {3, -5}, {-3, -1}, {0, -6} } },
	[143] = { .set = { {-7, -9}, {7, -9}, {-3, -5}, {1, -6} } },
	[144] = { .set = { {-7, -10}, {-2, -6}, {1, -3}, {0, -5} } },
	[145] = { .set = { {-7, -9}, {3, -5}, {-2, -2}, {0, -5} } },
	[146] = { .set = { {-7, -8}, {-3, -4}, {3, -2}, {1, -5} } },
	[147] = { .set = { {-6, -7}, {2, -8}, {4, -4}, {1, -6} } },
	[148] = { .set = { {-5, -7}, {-7, -6}, {5, -4}, {0, -5} } },
	[149] = { .set = { {-5, -6}, {-6, -6}, {3, -2}, {0, -5} } },
	[150] = { .set = { {-5, -6}, {-7, -4}, {6, -4}, {0, -5} } },
	[151] = { .set = { {-4, -5}, {-10, -6}, {7, -4}, {-2, -6} } },
	[152] = { .set = { {-1, -6}, {-9, -6}, {7, -6}, {-1, -7} } },
	[153] = { .set = { {-5, -7}, {-7, -6}, {5, -4}, {0, -5} } },
	[154] = { .set = { {-7, -10}, {-2, -6}, {1, -3}, {0, -5} } },
	[155] = { .set = { {-8, -10}, {5, -6}, {-7, -4}, {-1, -7} } },
	[156] = { .set = { {-1, -13}, {7, -5}, {-9, -6}, {-1, -7} } },
	[157] = { .set = { {6, -10}, {-7, -6}, {5, -4}, {-1, -7} } },
	[158] = { .set = { {5, -10}, {0, -6}, {-3, -3}, {-2, -5} } },
	[159] = { .set = { {3, -7}, {5, -6}, {-7, -4}, {-2, -5} } },
	[160] = { .set = { {-4, -7}, {-5, -4}, {7, -3}, {-1, -6} } },
	[161] = { .set = { {-6, -5}, {-5, -4}, {6, -1}, {0, -6} } },
	[162] = { .set = { {-1, -10}, {-5, -15}, {2, -15}, {-1, -8} } },
	[163] = { .set = { {1, -10}, {2, -16}, {-2, -13}, {-1, -6} } },
	[164] = { .set = { {4, -11}, {1, -16}, {-1, -13}, {0, -7} } },
	[165] = { .set = { {5, -13}, {0, -16}, {3, -13}, {-2, -7} } },
	[166] = { .set = { {-1, -14}, {4, -14}, {-5, -14}, {0, -8} } },
	[167] = { .set = { {-6, -13}, {-1, -16}, {-4, -13}, {1, -7} } },
	[168] = { .set = { {-5, -11}, {-2, -16}, {0, -13}, {-1, -7} } },
	[169] = { .set = { {-2, -10}, {-3, -16}, {1, -13}, {0, -6} } },
	[170] = { .set = { {-1, -6}, {-9, -6}, {7, -6}, {-1, -7} } },
	[171] = { .set = { {-1, -5}, {-9, -6}, {8, -5}, {-1, -6} } },
	[172] = { .set = { {-1, -5}, {-10, -5}, {7, -6}, {-1, -6} } },
	[173] = { .set = { {3, -7}, {5, -6}, {-7, -4}, {-2, -5} } },
	[174] = { .set = { {3, -6}, {4, -6}, {-5, -2}, {-2, -5} } },
	[175] = { .set = { {3, -6}, {5, -4}, {-8, -4}, {-2, -5} } },
	[176] = { .set = { {5, -10}, {0, -6}, {-3, -3}, {-2, -5} } },
	[177] = { .set = { {5, -9}, {-5, -5}, {0, -2}, {-2, -5} } },
	[178] = { .set = { {5, -8}, {1, -4}, {-5, -2}, {-3, -5} } },
	[179] = { .set = { {6, -10}, {-7, -6}, {5, -4}, {-1, -7} } },
	[180] = { .set = { {6, -9}, {-8, -4}, {5, -3}, {-2, -6} } },
	[181] = { .set = { {6, -9}, {-5, -5}, {1, -1}, {-2, -6} } },
	[182] = { .set = { {-1, -13}, {7, -5}, {-9, -6}, {-1, -7} } },
	[183] = { .set = { {-1, -12}, {6, -3}, {-8, -7}, {-1, -6} } },
	[184] = { .set = { {-1, -11}, {7, -6}, {-8, -4}, {0, -6} } },
	[185] = { .set = { {-8, -10}, {5, -6}, {-7, -4}, {-1, -7} } },
	[186] = { .set = { {-8, -9}, {6, -4}, {-7, -3}, {0, -6} } },
	[187] = { .set = { {-8, -9}, {3, -5}, {-3, -1}, {0, -6} } },
	[188] = { .set = { {-7, -10}, {-2, -6}, {1, -3}, {0, -5} } },
	[189] = { .set = { {-7, -9}, {3, -5}, {-2, -2}, {0, -5} } },
	[190] = { .set = { {-7, -8}, {-3, -4}, {3, -2}, {1, -5} } },
	[191] = { .set = { {-5, -7}, {-7, -6}, {5, -4}, {0, -5} } },
	[192] = { .set = { {-5, -6}, {-6, -6}, {3, -2}, {0, -5} } },
	[193] = { .set = { {-5, -6}, {-7, -4}, {6, -4}, {0, -5} } },
	[194] = { .set = { {-1, -5}, {-11, -6}, {9, -6}, {-1, -8} } },
	[195] = { .set = { {-8, -6}, {-12, -9}, {0, -5}, {-2, -7} } },
	[196] = { .set = { {-12, -8}, {-6, -11}, {-6, -6}, {-1, -8} } },
	[197] = { .set = { {-10, -10}, {0, -12}, {-9, -9}, {0, -7} } },
	[198] = { .set = { {-1, -14}, {7, -12}, {-9, -12}, {-1, -8} } },
	[199] = { .set = { {8, -10}, {-2, -12}, {7, -9}, {-2, -7} } },
	[200] = { .set = { {10, -8}, {4, -11}, {4, -6}, {-1, -8} } },
	[201] = { .set = { {6, -6}, {10, -9}, {-2, -5}, {0, -7} } },
	[202] = { .set = { {-2, -5}, {-10, -13}, {2, -1}, {-2, -8} } },
	[203] = { .set = { {4, -6}, {7, -16}, {-2, 0}, {0, -6} } },
	[204] = { .set = { {6, -8}, {4, -16}, {3, -1}, {-1, -6} } },
	[205] = { .set = { {6, -7}, {-6, -14}, {6, -3}, {-1, -6} } },
	[206] = { .set = { {3, -13}, {7, -14}, {-2, -6}, {0, -7} } },
	[207] = { .set = { {-8, -7}, {4, -14}, {-8, -3}, {-1, -6} } },
	[208] = { .set = { {-8, -8}, {-6, -16}, {-5, -1}, {-1, -6} } },
	[209] = { .set = { {-6, -6}, {-9, -16}, {0, 0}, {-2, -6} } },
	[210] = { .set = { {-1, -6}, {-9, -6}, {7, -6}, {-1, -7} } },
	[211] = { .set = { {-1, -4}, {-11, -5}, {9, -5}, {-1, -7} } },
	[212] = { .set = { {-1, 1}, {-10, -6}, {7, -6}, {-1, -5} } },
	[213] = { .set = { {3, -7}, {5, -6}, {-7, -4}, {-2, -5} } },
	[214] = { .set = { {5, -5}, {9, -8}, {-3, -4}, {-1, -6} } },
	[215] = { .set = { {7, 0}, {6, -5}, {-8, -4}, {-1, -5} } },
	[216] = { .set = { {5, -10}, {0, -6}, {-3, -3}, {-2, -5} } },
	[217] = { .set = { {8, -9}, {2, -12}, {2, -7}, {-3, -9} } },
	[218] = { .set = { {4, -2}, {-4, -11}, {-6, -6}, {-2, -8} } },
	[219] = { .set = { {6, -10}, {-7, -6}, {5, -4}, {-1, -7} } },
	[220] = { .set = { {8, -9}, {-2, -11}, {7, -8}, {-2, -6} } },
	[221] = { .set = { {6, -2}, {-6, -9}, {-2, -4}, {0, -8} } },
	[222] = { .set = { {-1, -13}, {7, -5}, {-9, -6}, {-1, -7} } },
	[223] = { .set = { {-1, -13}, {7, -11}, {-9, -11}, {-1, -7} } },
	[224] = { .set = { {-1, -12}, {6, -6}, {-8, -5}, {-1, -9} } },
	[225] = { .set = { {-8, -10}, {5, -6}, {-7, -4}, {-1, -7} } },
	[226] = { .set = { {-9, -9}, {1, -11}, {-8, -8}, {1, -6} } },
	[227] = { .set = { {-7, -2}, {5, -9}, {1, -4}, {-1, -8} } },
	[228] = { .set = { {-7, -10}, {-2, -6}, {1, -3}, {0, -5} } },
	[229] = { .set = { {-9, -9}, {-3, -12}, {-3, -7}, {2, -9} } },
	[230] = { .set = { {-5, -2}, {3, -11}, {5, -6}, {1, -8} } },
	[231] = { .set = { {-5, -7}, {-7, -6}, {5, -4}, {0, -5} } },
	[232] = { .set = { {-6, -5}, {-10, -8}, {2, -4}, {0, -6} } },
	[233] = { .set = { {-8, 0}, {-7, -5}, {7, -4}, {0, -5} } },
	[234] = { .set = { {0, -5}, {-4, -1}, {8, -13}, {0, -8} } },
	[235] = { .set = { {-5, -6}, {-7, 0}, {6, -12}, {-1, -5} } },
	[236] = { .set = { {-7, -8}, {-6, -4}, {4, -12}, {0, -6} } },
	[237] = { .set = { {-7, -9}, {0, -6}, {-5, -12}, {1, -6} } },
	[238] = { .set = { {-4, -12}, {2, -5}, {-9, -13}, {-2, -6} } },
	[239] = { .set = { {5, -9}, {-2, -6}, {3, -12}, {-3, -6} } },
	[240] = { .set = { {5, -8}, {4, -4}, {-6, -12}, {-2, -6} } },
	[241] = { .set = { {3, -6}, {5, 0}, {-8, -12}, {-1, -5} } },
	[242] = { .set = { {-1, -6}, {-9, -6}, {7, -6}, {-1, -7} } },
	[243] = { .set = { {-5, -7}, {-7, -6}, {5, -4}, {0, -5} } },
	[244] = { .set = { {-7, -10}, {-2, -6}, {1, -3}, {0, -5} } },
	[245] = { .set = { {-8, -10}, {5, -6}, {-7, -4}, {-1, -7} } },
	[246] = { .set = { {-1, -13}, {7, -5}, {-9, -6}, {-1, -7} } },
	[247] = { .set = { {6, -10}, {-7, -6}, {5, -4}, {-1, -7} } },
	[248] = { .set = { {5, -10}, {0, -6}, {-3, -3}, {-2, -5} } },
	[249] = { .set = { {3, -7}, {5, -6}, {-7, -4}, {-2, -5} } },
	[250] = { .set = { {-3, -10}, {-8, 1}, {-7, -7}, {-3, -6} } },
	[251] = { .set = { {-4, -9}, {-8, 1}, {-7, -7}, {-3, -6} } },
	[252] = { .set = { {2, -10}, {7, 1}, {6, -7}, {2, -6} } },
	[253] = { .set = { {3, -9}, {7, 1}, {6, -7}, {2, -6} } },
	[254] = { .set = { {-3, -10}, {-8, 1}, {-7, -7}, {-3, -6} } },
	[255] = { .set = { {1, -10}, {0, -6}, {6, -9}, {-2, -6} } },
	[256] = { .set = { {3, -6}, {-1, -1}, {3, -3}, {-1, -6} } },
	[257] = { .set = { {4, -7}, {0, -2}, {3, -4}, {0, -7} } },
	[258] = { .set = { {5, -10}, {0, -6}, {-3, -3}, {-2, -5} } },
	[259] = { .set = { {-1, -13}, {7, -5}, {-9, -6}, {-1, -7} } },
	[260] = { .set = { {-1, -8}, {8, -6}, {-10, -6}, {-1, -9} } },
	[261] = { .set = { {-1, -7}, {10, -6}, {-12, -6}, {-1, -10} } },
	[262] = { .set = { {-1, -5}, {-10, -8}, {8, -8}, {-1, -8} } },
	[263] = { .set = { {-1, -10}, {-10, -13}, {8, -13}, {-1, -9} } },
	[264] = { .set = { {-2, -7}, {-8, -7}, {6, -6}, {0, -9} } },
	[265] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[266] = { .set = { {0, -8}, {-8, -15}, {9, -6}, {0, -9} } },
	[267] = { .set = { {5, -9}, {8, -4}, {-8, -8}, {0, -8} } },
	[268] = { .set = { {-1, -11}, {7, -13}, {-10, -6}, {-1, -8} } },
	[269] = { .set = { {-1, -11}, {7, -13}, {-10, -6}, {-1, -8} } },
	[270] = { .set = { {-1, -7}, {-7, -7}, {5, -7}, {-1, -9} } },
	[271] = { .set = { {-1, -6}, {-7, -6}, {5, -6}, {-1, -8} } },
	[272] = { .set = { {-1, -6}, {-7, -6}, {5, -6}, {-1, -8} } },
	[273] = { .set = { {-7, -10}, {-2, -6}, {1, -3}, {0, -5} } },
	[274] = { .set = { {-3, -12}, {-9, -8}, {-1, -6}, {-1, -7} } },
	[275] = { .set = { {0, -13}, {-8, -12}, {9, -4}, {1, -8} } },
	[276] = { .set = { {-1, -13}, {7, -5}, {-9, -6}, {-1, -7} } },
	[277] = { .set = { {-1, -9}, {7, -4}, {-9, -4}, {-1, -7} } },
	[278] = { .set = { {-1, -6}, {8, -2}, {-10, -2}, {-1, -5} } },
	[279] = { .set = { {-1, -6}, {-9, -6}, {7, -6}, {-1, -7} } },
	[280] = { .set = { {-1, -10}, {-10, -13}, {8, -13}, {-1, -9} } },
	[281] = { .set = { {-1, -7}, {-4, -5}, {2, -5}, {-1, -9} } },
	[282] = { .set = { {-7, -10}, {-2, -6}, {1, -3}, {0, -5} } },
	[283] = { .set = { {-8, -6}, {-2, -5}, {1, -3}, {-2, -8} } },
	[284] = { .set = { {5, -10}, {0, -6}, {-3, -3}, {-2, -5} } },
	[285] = { .set = { {6, -6}, {0, -5}, {-3, -3}, {0, -8} } },
	[286] = { .set = { {-1, -13}, {7, -5}, {-9, -6}, {-1, -7} } },
	[287] = { .set = { {0, -10}, {8, -11}, {-10, -11}, {0, -7} } },
	[288] = { .set = { {-5, -7}, {-2, -6}, {5, -4}, {-1, -6} } },
	[289] = { .set = { {-3, -8}, {-2, -7}, {7, -4}, {1, -7} } },
	[290] = { .set = { {-7, -7}, {-6, -6}, {4, -4}, {-3, -7} } },
	[291] = { .set = { {-3, -8}, {-2, -6}, {7, -4}, {0, -7} } },
	[292] = { .set = { {-7, -7}, {-1, -6}, {4, -4}, {-3, -7} } },
	[293] = { .set = { {4, -7}, {1, -6}, {-6, -4}, {0, -6} } },
	[294] = { .set = { {2, -8}, {1, -7}, {-8, -4}, {-2, -7} } },
	[295] = { .set = { {6, -7}, {5, -6}, {-5, -4}, {2, -7} } },
	[296] = { .set = { {2, -8}, {1, -6}, {-8, -4}, {-1, -7} } },
	[297] = { .set = { {6, -7}, {0, -6}, {-5, -4}, {2, -7} } },
	[298] = { .set = { {2, -8}, {-3, -11}, {7, -9}, {-2, -7} } },
	[299] = { .set = { {-3, -10}, {-8, 1}, {-7, -7}, {-3, -6} } },
	[300] = { .set = { {-4, -9}, {-8, 1}, {-7, -7}, {-3, -6} } },
	[301] = { .set = { {2, -10}, {7, 1}, {6, -7}, {2, -6} } },
	[302] = { .set = { {3, -9}, {7, 1}, {6, -7}, {2, -6} } },
	[303] = { .set = { {-3, -10}, {-8, 1}, {-7, -7}, {-3, -6} } },
	[304] = { .set = { {-4, -9}, {-8, 1}, {-7, -7}, {-3, -6} } },
	[305] = { .set = { {2, -10}, {7, 1}, {6, -7}, {2, -6} } },
	[306] = { .set = { {3, -9}, {7, 1}, {6, -7}, {2, -6} } },
};

static const ax_anim *const sPsyduckAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02603),
	AX_ANIM_PTR(gAxSharedAnim_02679),
	AX_ANIM_PTR(gAxSharedAnim_02688),
	AX_ANIM_PTR(gAxSharedAnim_02697),
	AX_ANIM_PTR(gAxSharedAnim_02615),
	AX_ANIM_PTR(gAxSharedAnim_02637),
	AX_ANIM_PTR(gAxSharedAnim_02650),
	AX_ANIM_PTR(gAxSharedAnim_02659),
};

static const ax_anim *const sPsyduckAnimTable2[] = {
	AX_ANIM_PTR(sPsyduckAnims_2_1),
	AX_ANIM_PTR(sPsyduckAnims_2_2),
	AX_ANIM_PTR(sPsyduckAnims_2_3),
	AX_ANIM_PTR(sPsyduckAnims_2_4),
	AX_ANIM_PTR(sPsyduckAnims_2_5),
	AX_ANIM_PTR(sPsyduckAnims_2_6),
	AX_ANIM_PTR(sPsyduckAnims_2_7),
	AX_ANIM_PTR(sPsyduckAnims_2_8),
};

static const ax_anim *const sPsyduckAnimTable3[] = {
	AX_ANIM_PTR(sPsyduckAnims_3_1),
	AX_ANIM_PTR(sPsyduckAnims_3_2),
	AX_ANIM_PTR(sPsyduckAnims_3_3),
	AX_ANIM_PTR(sPsyduckAnims_3_4),
	AX_ANIM_PTR(sPsyduckAnims_3_5),
	AX_ANIM_PTR(sPsyduckAnims_3_6),
	AX_ANIM_PTR(sPsyduckAnims_3_7),
	AX_ANIM_PTR(sPsyduckAnims_3_8),
};

static const ax_anim *const sPsyduckAnimTable4[] = {
	AX_ANIM_PTR(sPsyduckAnims_4_1),
	AX_ANIM_PTR(sPsyduckAnims_4_2),
	AX_ANIM_PTR(sPsyduckAnims_4_3),
	AX_ANIM_PTR(sPsyduckAnims_4_4),
	AX_ANIM_PTR(sPsyduckAnims_4_5),
	AX_ANIM_PTR(sPsyduckAnims_4_6),
	AX_ANIM_PTR(sPsyduckAnims_4_7),
	AX_ANIM_PTR(sPsyduckAnims_4_8),
};

static const ax_anim *const sPsyduckAnimTable5[] = {
	AX_ANIM_PTR(sPsyduckAnims_5_1),
	AX_ANIM_PTR(sPsyduckAnims_5_2),
	AX_ANIM_PTR(sPsyduckAnims_5_3),
	AX_ANIM_PTR(sPsyduckAnims_5_4),
	AX_ANIM_PTR(sPsyduckAnims_5_5),
	AX_ANIM_PTR(sPsyduckAnims_5_6),
	AX_ANIM_PTR(sPsyduckAnims_5_7),
	AX_ANIM_PTR(sPsyduckAnims_5_8),
};

static const ax_anim *const sPsyduckAnimTable6[] = {
	AX_ANIM_PTR(sPsyduckAnims_6_1),
	AX_ANIM_PTR(sPsyduckAnims_6_1),
	AX_ANIM_PTR(sPsyduckAnims_6_1),
	AX_ANIM_PTR(sPsyduckAnims_6_1),
	AX_ANIM_PTR(sPsyduckAnims_6_1),
	AX_ANIM_PTR(sPsyduckAnims_6_1),
	AX_ANIM_PTR(sPsyduckAnims_6_1),
	AX_ANIM_PTR(sPsyduckAnims_6_1),
};

static const ax_anim *const sPsyduckAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00693),
	AX_ANIM_PTR(gAxSharedAnim_00709),
	AX_ANIM_PTR(gAxSharedAnim_00717),
	AX_ANIM_PTR(gAxSharedAnim_00730),
	AX_ANIM_PTR(gAxSharedAnim_00752),
	AX_ANIM_PTR(gAxSharedAnim_00763),
	AX_ANIM_PTR(gAxSharedAnim_00775),
	AX_ANIM_PTR(gAxSharedAnim_00785),
};

static const ax_anim *const sPsyduckAnimTable8[] = {
	AX_ANIM_PTR(sPsyduckAnims_8_1),
	AX_ANIM_PTR(sPsyduckAnims_8_2),
	AX_ANIM_PTR(sPsyduckAnims_8_3),
	AX_ANIM_PTR(sPsyduckAnims_8_4),
	AX_ANIM_PTR(sPsyduckAnims_8_5),
	AX_ANIM_PTR(sPsyduckAnims_8_6),
	AX_ANIM_PTR(sPsyduckAnims_8_7),
	AX_ANIM_PTR(sPsyduckAnims_8_8),
};

static const ax_anim *const sPsyduckAnimTable9[] = {
	AX_ANIM_PTR(sPsyduckAnims_9_1),
	AX_ANIM_PTR(sPsyduckAnims_9_2),
	AX_ANIM_PTR(gAxSharedAnim_01216),
	AX_ANIM_PTR(sPsyduckAnims_9_4),
	AX_ANIM_PTR(sPsyduckAnims_9_5),
	AX_ANIM_PTR(sPsyduckAnims_9_6),
	AX_ANIM_PTR(gAxSharedAnim_01162),
	AX_ANIM_PTR(sPsyduckAnims_9_8),
};

static const ax_anim *const sPsyduckAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01241),
	AX_ANIM_PTR(gAxSharedAnim_01252),
	AX_ANIM_PTR(gAxSharedAnim_01266),
	AX_ANIM_PTR(gAxSharedAnim_01277),
	AX_ANIM_PTR(gAxSharedAnim_01285),
	AX_ANIM_PTR(gAxSharedAnim_01300),
	AX_ANIM_PTR(gAxSharedAnim_01313),
	AX_ANIM_PTR(gAxSharedAnim_01324),
};

static const ax_anim *const sPsyduckAnimTable11[] = {
	AX_ANIM_PTR(sPsyduckAnims_11_1),
	AX_ANIM_PTR(sPsyduckAnims_11_2),
	AX_ANIM_PTR(sPsyduckAnims_11_3),
	AX_ANIM_PTR(sPsyduckAnims_11_4),
	AX_ANIM_PTR(sPsyduckAnims_11_5),
	AX_ANIM_PTR(sPsyduckAnims_11_6),
	AX_ANIM_PTR(sPsyduckAnims_11_7),
	AX_ANIM_PTR(sPsyduckAnims_11_8),
};

static const ax_anim *const sPsyduckAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01526),
	AX_ANIM_PTR(gAxSharedAnim_01582),
	AX_ANIM_PTR(gAxSharedAnim_01574),
	AX_ANIM_PTR(gAxSharedAnim_01551),
	AX_ANIM_PTR(gAxSharedAnim_01550),
	AX_ANIM_PTR(gAxSharedAnim_01545),
	AX_ANIM_PTR(gAxSharedAnim_01533),
	AX_ANIM_PTR(gAxSharedAnim_01527),
};

static const ax_anim *const sPsyduckAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01586),
	AX_ANIM_PTR(gAxSharedAnim_01624),
	AX_ANIM_PTR(gAxSharedAnim_01620),
	AX_ANIM_PTR(gAxSharedAnim_01612),
	AX_ANIM_PTR(gAxSharedAnim_01605),
	AX_ANIM_PTR(gAxSharedAnim_01602),
	AX_ANIM_PTR(gAxSharedAnim_01597),
	AX_ANIM_PTR(gAxSharedAnim_01591),
};

static const ax_anim *const sPsyduckAnimTable14[] = {
	AX_ANIM_PTR(sPsyduckAnims_14_1),
	AX_ANIM_PTR(sPsyduckAnims_14_1),
	AX_ANIM_PTR(sPsyduckAnims_14_1),
	AX_ANIM_PTR(sPsyduckAnims_14_1),
	AX_ANIM_PTR(sPsyduckAnims_14_1),
	AX_ANIM_PTR(sPsyduckAnims_14_1),
	AX_ANIM_PTR(sPsyduckAnims_14_1),
	AX_ANIM_PTR(sPsyduckAnims_14_1),
};

static const ax_anim *const sPsyduckAnimTable15[] = {
	AX_ANIM_PTR(sPsyduckAnims_15_1),
	AX_ANIM_PTR(sPsyduckAnims_15_1),
	AX_ANIM_PTR(sPsyduckAnims_15_1),
	AX_ANIM_PTR(sPsyduckAnims_15_1),
	AX_ANIM_PTR(sPsyduckAnims_15_1),
	AX_ANIM_PTR(sPsyduckAnims_15_1),
	AX_ANIM_PTR(sPsyduckAnims_15_1),
	AX_ANIM_PTR(sPsyduckAnims_15_1),
};

static const ax_anim *const sPsyduckAnimTable16[] = {
	AX_ANIM_PTR(sPsyduckAnims_16_1),
	AX_ANIM_PTR(sPsyduckAnims_16_1),
	AX_ANIM_PTR(sPsyduckAnims_16_1),
	AX_ANIM_PTR(sPsyduckAnims_16_1),
	AX_ANIM_PTR(sPsyduckAnims_16_1),
	AX_ANIM_PTR(sPsyduckAnims_16_1),
	AX_ANIM_PTR(sPsyduckAnims_16_1),
	AX_ANIM_PTR(sPsyduckAnims_16_1),
};

static const ax_anim *const sPsyduckAnimTable17[] = {
	AX_ANIM_PTR(sPsyduckAnims_17_1),
	AX_ANIM_PTR(sPsyduckAnims_17_1),
	AX_ANIM_PTR(sPsyduckAnims_17_1),
	AX_ANIM_PTR(sPsyduckAnims_17_1),
	AX_ANIM_PTR(sPsyduckAnims_17_1),
	AX_ANIM_PTR(sPsyduckAnims_17_1),
	AX_ANIM_PTR(sPsyduckAnims_17_1),
	AX_ANIM_PTR(sPsyduckAnims_17_1),
};

static const ax_anim *const sPsyduckAnimTable18[] = {
	AX_ANIM_PTR(sPsyduckAnims_18_1),
	AX_ANIM_PTR(sPsyduckAnims_18_1),
	AX_ANIM_PTR(sPsyduckAnims_18_1),
	AX_ANIM_PTR(sPsyduckAnims_18_1),
	AX_ANIM_PTR(sPsyduckAnims_18_5),
	AX_ANIM_PTR(sPsyduckAnims_18_1),
	AX_ANIM_PTR(sPsyduckAnims_18_1),
	AX_ANIM_PTR(sPsyduckAnims_18_1),
};

static const ax_anim *const sPsyduckAnimTable19[] = {
	AX_ANIM_PTR(sPsyduckAnims_19_1),
	AX_ANIM_PTR(sPsyduckAnims_19_1),
	AX_ANIM_PTR(sPsyduckAnims_19_1),
	AX_ANIM_PTR(sPsyduckAnims_19_1),
	AX_ANIM_PTR(sPsyduckAnims_19_1),
	AX_ANIM_PTR(sPsyduckAnims_19_1),
	AX_ANIM_PTR(sPsyduckAnims_19_1),
	AX_ANIM_PTR(sPsyduckAnims_19_1),
};

static const ax_anim *const sPsyduckAnimTable20[] = {
	AX_ANIM_PTR(sPsyduckAnims_20_1),
	AX_ANIM_PTR(sPsyduckAnims_20_2),
	AX_ANIM_PTR(sPsyduckAnims_20_2),
	AX_ANIM_PTR(sPsyduckAnims_20_2),
	AX_ANIM_PTR(sPsyduckAnims_20_2),
	AX_ANIM_PTR(sPsyduckAnims_20_2),
	AX_ANIM_PTR(sPsyduckAnims_20_2),
	AX_ANIM_PTR(sPsyduckAnims_20_2),
};

static const ax_anim *const sPsyduckAnimTable21[] = {
	AX_ANIM_PTR(sPsyduckAnims_21_1),
	AX_ANIM_PTR(sPsyduckAnims_21_1),
	AX_ANIM_PTR(sPsyduckAnims_21_1),
	AX_ANIM_PTR(sPsyduckAnims_21_1),
	AX_ANIM_PTR(sPsyduckAnims_21_1),
	AX_ANIM_PTR(sPsyduckAnims_21_1),
	AX_ANIM_PTR(sPsyduckAnims_21_1),
	AX_ANIM_PTR(sPsyduckAnims_21_1),
};

static const ax_anim *const sPsyduckAnimTable22[] = {
	AX_ANIM_PTR(sPsyduckAnims_22_1),
	AX_ANIM_PTR(sPsyduckAnims_22_1),
	AX_ANIM_PTR(sPsyduckAnims_22_1),
	AX_ANIM_PTR(sPsyduckAnims_22_1),
	AX_ANIM_PTR(sPsyduckAnims_22_1),
	AX_ANIM_PTR(sPsyduckAnims_22_1),
	AX_ANIM_PTR(sPsyduckAnims_22_1),
	AX_ANIM_PTR(sPsyduckAnims_22_1),
};

static const ax_anim *const sPsyduckAnimTable23[] = {
	AX_ANIM_PTR(sPsyduckAnims_23_1),
	AX_ANIM_PTR(sPsyduckAnims_23_1),
	AX_ANIM_PTR(sPsyduckAnims_23_3),
	AX_ANIM_PTR(sPsyduckAnims_23_1),
	AX_ANIM_PTR(sPsyduckAnims_23_1),
	AX_ANIM_PTR(sPsyduckAnims_23_1),
	AX_ANIM_PTR(sPsyduckAnims_23_1),
	AX_ANIM_PTR(sPsyduckAnims_23_1),
};

static const ax_anim *const sPsyduckAnimTable24[] = {
	AX_ANIM_PTR(sPsyduckAnims_24_1),
	AX_ANIM_PTR(sPsyduckAnims_24_1),
	AX_ANIM_PTR(sPsyduckAnims_24_1),
	AX_ANIM_PTR(sPsyduckAnims_24_1),
	AX_ANIM_PTR(sPsyduckAnims_24_1),
	AX_ANIM_PTR(sPsyduckAnims_24_1),
	AX_ANIM_PTR(sPsyduckAnims_24_1),
	AX_ANIM_PTR(sPsyduckAnims_24_1),
};

static const ax_anim *const sPsyduckAnimTable25[] = {
	AX_ANIM_PTR(sPsyduckAnims_25_1),
	AX_ANIM_PTR(sPsyduckAnims_25_1),
	AX_ANIM_PTR(sPsyduckAnims_25_1),
	AX_ANIM_PTR(sPsyduckAnims_25_1),
	AX_ANIM_PTR(sPsyduckAnims_25_1),
	AX_ANIM_PTR(sPsyduckAnims_25_1),
	AX_ANIM_PTR(sPsyduckAnims_25_7),
	AX_ANIM_PTR(sPsyduckAnims_25_7),
};

static const ax_anim *const sPsyduckAnimTable26[] = {
	AX_ANIM_PTR(sPsyduckAnims_26_1),
	AX_ANIM_PTR(sPsyduckAnims_26_1),
	AX_ANIM_PTR(sPsyduckAnims_26_1),
	AX_ANIM_PTR(sPsyduckAnims_26_1),
	AX_ANIM_PTR(sPsyduckAnims_26_1),
	AX_ANIM_PTR(sPsyduckAnims_26_1),
	AX_ANIM_PTR(sPsyduckAnims_26_1),
	AX_ANIM_PTR(sPsyduckAnims_26_1),
};

static const ax_anim *const sPsyduckAnimTable27[] = {
	AX_ANIM_PTR(sPsyduckAnims_27_1),
	AX_ANIM_PTR(sPsyduckAnims_27_1),
	AX_ANIM_PTR(sPsyduckAnims_27_1),
	AX_ANIM_PTR(sPsyduckAnims_27_1),
	AX_ANIM_PTR(sPsyduckAnims_27_1),
	AX_ANIM_PTR(sPsyduckAnims_27_1),
	AX_ANIM_PTR(sPsyduckAnims_27_1),
	AX_ANIM_PTR(sPsyduckAnims_27_1),
};

static const ax_anim *const sPsyduckAnimTable28[] = {
	AX_ANIM_PTR(sPsyduckAnims_28_1),
	AX_ANIM_PTR(sPsyduckAnims_28_1),
	AX_ANIM_PTR(sPsyduckAnims_28_3),
	AX_ANIM_PTR(sPsyduckAnims_28_1),
	AX_ANIM_PTR(sPsyduckAnims_28_1),
	AX_ANIM_PTR(sPsyduckAnims_28_1),
	AX_ANIM_PTR(sPsyduckAnims_28_1),
	AX_ANIM_PTR(sPsyduckAnims_28_1),
};

static const ax_anim *const *const sAxAnimationsPsyduck[] = {
	sPsyduckAnimTable1,
	sPsyduckAnimTable2,
	sPsyduckAnimTable3,
	sPsyduckAnimTable4,
	sPsyduckAnimTable5,
	sPsyduckAnimTable6,
	sPsyduckAnimTable7,
	sPsyduckAnimTable8,
	sPsyduckAnimTable9,
	sPsyduckAnimTable10,
	sPsyduckAnimTable11,
	sPsyduckAnimTable12,
	sPsyduckAnimTable13,
	sPsyduckAnimTable14,
	sPsyduckAnimTable15,
	sPsyduckAnimTable16,
	sPsyduckAnimTable17,
	sPsyduckAnimTable18,
	sPsyduckAnimTable19,
	sPsyduckAnimTable20,
	sPsyduckAnimTable21,
	sPsyduckAnimTable22,
	sPsyduckAnimTable23,
	sPsyduckAnimTable24,
	sPsyduckAnimTable25,
	sPsyduckAnimTable26,
	sPsyduckAnimTable27,
	sPsyduckAnimTable28,
};

static const ax_sprite *const sAxSpritesPsyduck[] = {
	sPsyduckSprites1,
	sPsyduckSprites2,
	sPsyduckSprites3,
	sPsyduckSprites4,
	sPsyduckSprites5,
	sPsyduckSprites6,
	sPsyduckSprites7,
	sPsyduckSprites8,
	sPsyduckSprites9,
	sPsyduckSprites10,
	sPsyduckSprites11,
	sPsyduckSprites12,
	sPsyduckSprites13,
	sPsyduckSprites14,
	sPsyduckSprites15,
	sPsyduckSprites16,
	sPsyduckSprites17,
	sPsyduckSprites18,
	sPsyduckSprites19,
	sPsyduckSprites20,
	sPsyduckSprites21,
	sPsyduckSprites22,
	sPsyduckSprites23,
	sPsyduckSprites24,
	sPsyduckSprites25,
	sPsyduckSprites26,
	sPsyduckSprites27,
	sPsyduckSprites28,
	sPsyduckSprites29,
	sPsyduckSprites30,
	sPsyduckSprites31,
	sPsyduckSprites32,
	sPsyduckSprites33,
	sPsyduckSprites34,
	sPsyduckSprites35,
	sPsyduckSprites36,
	sPsyduckSprites37,
	sPsyduckSprites38,
	sPsyduckSprites39,
	sPsyduckSprites40,
	sPsyduckSprites41,
	sPsyduckSprites42,
	sPsyduckSprites43,
	sPsyduckSprites44,
	sPsyduckSprites45,
	sPsyduckSprites46,
	sPsyduckSprites47,
	sPsyduckSprites48,
	sPsyduckSprites49,
	sPsyduckSprites50,
	sPsyduckSprites51,
	sPsyduckSprites52,
	sPsyduckSprites53,
	sPsyduckSprites54,
	sPsyduckSprites55,
	sPsyduckSprites56,
	sPsyduckSprites57,
	sPsyduckSprites58,
	sPsyduckSprites59,
	sPsyduckSprites60,
	sPsyduckSprites61,
	sPsyduckSprites62,
	sPsyduckSprites63,
	sPsyduckSprites64,
	sPsyduckSprites65,
	sPsyduckSprites66,
	sPsyduckSprites67,
	sPsyduckSprites68,
	sPsyduckSprites69,
	sPsyduckSprites70,
	sPsyduckSprites71,
	sPsyduckSprites72,
	sPsyduckSprites73,
	sPsyduckSprites74,
	sPsyduckSprites75,
	sPsyduckSprites76,
	sPsyduckSprites77,
	sPsyduckSprites78,
	sPsyduckSprites79,
	sPsyduckSprites80,
	sPsyduckSprites81,
	sPsyduckSprites82,
	sPsyduckSprites83,
	sPsyduckSprites84,
	sPsyduckSprites85,
};

static const axmain sAxMainPsyduck = {
	.poses = sAxPosesPsyduck,
	.animations = sAxAnimationsPsyduck,
	.animCount = ARRAY_COUNT(sAxAnimationsPsyduck),
	.spriteData = sAxSpritesPsyduck,
	.positions = sAxPositionsPsyduck,
};
