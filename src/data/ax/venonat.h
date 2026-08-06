/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainVenonat;
const SiroArchive gAxVenonat = {"SIRO", &sAxMainVenonat};

static const ax_pose sVenonatPose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose3[] = {
	AX_POSE(2, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose4[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose6[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose7[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose8[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose9[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose10[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose11[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose12[] = {
	AX_POSE(11, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose13[] = {
	AX_POSE(12, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose14[] = {
	AX_POSE(13, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose15[] = {
	AX_POSE(14, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose16[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose17[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose18[] = {
	AX_POSE(11, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose19[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose20[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose21[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose22[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose23[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose24[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose26[] = {
	AX_POSE(1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose27[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose29[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose30[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose32[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose33[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose35[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose36[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose38[] = {
	AX_POSE(13, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose39[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose40[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose41[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose42[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose43[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose44[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose45[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose46[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose47[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose48[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose77[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose78[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose80[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose81[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose83[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose84[] = {
	AX_POSE(11, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose89[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose90[] = {
	AX_POSE(11, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose92[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose95[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose96[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose105[] = {
	AX_POSE(15, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose106[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose107[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose108[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose109[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose110[] = {
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose111[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose112[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose116[] = {
	AX_POSE(10, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose117[] = {
	AX_POSE(13, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose119[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose120[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose121[] = {
	AX_POSE(20, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose122[] = {
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose123[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose124[] = {
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose125[] = {
	AX_POSE(24, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose126[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose127[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose128[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose129[] = {
	AX_POSE(24, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose130[] = {
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose132[] = {
	AX_POSE(1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose134[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose136[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose138[] = {
	AX_POSE(10, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose142[] = {
	AX_POSE(10, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose144[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose146[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose156[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose158[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose160[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose161[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose162[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose165[] = {
	AX_POSE(2, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose167[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose168[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose170[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose171[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose174[] = {
	AX_POSE(11, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose177[] = {
	AX_POSE(14, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose179[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose180[] = {
	AX_POSE(11, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose182[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose183[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose185[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose186[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenonatPose192[] = {
	AX_POSE(11, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_anim sVenonatAnims_1_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -3}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -2}, .shadow = {0, 2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_1_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {-1, -2}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, -3}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {1, -2}, .shadow = {3, 3} },
	{ .frames = 8, .unkFlags = 0, .poseId = 5, .offset = {0, 0}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_1_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {-1, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, -3}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {1, -2}, .shadow = {2, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_1_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {-1, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, -3}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {1, -2}, .shadow = {2, -2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 11, .offset = {0, 0}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_1_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -3}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 14, .offset = {0, 0}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_1_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {1, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, -3}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {-1, -2}, .shadow = {-2, -2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 17, .offset = {0, 0}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_1_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {1, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, -3}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {-1, -2}, .shadow = {-2, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 20, .offset = {0, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_1_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {1, -2}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, -3}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {-1, -2}, .shadow = {-3, 3} },
	{ .frames = 8, .unkFlags = 0, .poseId = 23, .offset = {0, 0}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_2_1[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, -1}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, -2}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, -3}, .shadow = {0, 6} },
	{ .frames = 3, .unkFlags = 0, .poseId = 25, .offset = {0, 0}, .shadow = {0, 8} },
	{ .frames = 2, .unkFlags = 2, .poseId = 25, .offset = {0, 4}, .shadow = {0, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 10}, .shadow = {0, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 26, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 4}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 3}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_2_2[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {2, -1}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {4, -2}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {6, -3}, .shadow = {6, 6} },
	{ .frames = 3, .unkFlags = 0, .poseId = 28, .offset = {8, -2}, .shadow = {8, 8} },
	{ .frames = 2, .unkFlags = 2, .poseId = 28, .offset = {10, 0}, .shadow = {10, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {12, 5}, .shadow = {12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {19, 19}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 29, .offset = {20, 18}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {19, 19}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {20, 18}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {19, 19}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {10, 2}, .shadow = {2, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {6, 0}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {2, 0}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_2_3[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {2, -2}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {4, -4}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {6, -6}, .shadow = {6, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 31, .offset = {9, -7}, .shadow = {9, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 31, .offset = {12, -6}, .shadow = {12, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {15, -3}, .shadow = {15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 32, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {10, -4}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {6, -3}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {2, -2}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_2_4[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {2, -4}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {4, -8}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {6, -12}, .shadow = {6, -6} },
	{ .frames = 3, .unkFlags = 0, .poseId = 34, .offset = {9, -18}, .shadow = {9, -9} },
	{ .frames = 2, .unkFlags = 2, .poseId = 34, .offset = {12, -21}, .shadow = {12, -12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {15, -22}, .shadow = {15, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {21, -21}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {22, -20}, .shadow = {22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {21, -21}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {22, -20}, .shadow = {22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {21, -21}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {10, -13}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {6, -9}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {2, -4}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_2_5[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -4}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -8}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -12}, .shadow = {0, -6} },
	{ .frames = 3, .unkFlags = 0, .poseId = 37, .offset = {0, -18}, .shadow = {0, -9} },
	{ .frames = 2, .unkFlags = 2, .poseId = 37, .offset = {0, -21}, .shadow = {0, -12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -22}, .shadow = {0, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 38, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -13}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -9}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -4}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_2_6[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {-2, -4}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {-4, -8}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-6, -12}, .shadow = {-6, -6} },
	{ .frames = 3, .unkFlags = 0, .poseId = 40, .offset = {-9, -18}, .shadow = {-9, -9} },
	{ .frames = 2, .unkFlags = 2, .poseId = 40, .offset = {-12, -21}, .shadow = {-12, -12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {-15, -22}, .shadow = {-15, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 41, .offset = {-22, -20}, .shadow = {-22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-22, -20}, .shadow = {-22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-10, -13}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-6, -9}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-2, -4}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_2_7[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {-2, -2}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {-4, -4}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-6, -6}, .shadow = {-6, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 43, .offset = {-9, -7}, .shadow = {-9, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 43, .offset = {-12, -6}, .shadow = {-12, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {-15, -3}, .shadow = {-15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 44, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-10, -4}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-6, -3}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-2, -2}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_2_8[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-2, -1}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-4, -2}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-6, -3}, .shadow = {-6, 6} },
	{ .frames = 3, .unkFlags = 0, .poseId = 46, .offset = {-8, -2}, .shadow = {-8, 8} },
	{ .frames = 2, .unkFlags = 2, .poseId = 46, .offset = {-10, 0}, .shadow = {-10, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-12, 5}, .shadow = {-12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-19, 19}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-20, 18}, .shadow = {-20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-19, 19}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-20, 18}, .shadow = {-20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-19, 19}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-10, 2}, .shadow = {-2, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-6, 0}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-2, 0}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_3_1[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, -1}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, -2}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, -3}, .shadow = {0, 6} },
	{ .frames = 3, .unkFlags = 0, .poseId = 49, .offset = {0, 0}, .shadow = {0, 8} },
	{ .frames = 2, .unkFlags = 2, .poseId = 49, .offset = {0, 4}, .shadow = {0, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, 10}, .shadow = {0, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 50, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 4}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 3}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_3_2[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {2, -1}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {4, -2}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {6, -3}, .shadow = {6, 6} },
	{ .frames = 3, .unkFlags = 0, .poseId = 52, .offset = {8, -2}, .shadow = {8, 8} },
	{ .frames = 2, .unkFlags = 2, .poseId = 52, .offset = {10, 0}, .shadow = {10, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {12, 5}, .shadow = {12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {19, 19}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 53, .offset = {20, 18}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {19, 19}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {20, 18}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {19, 19}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {10, 2}, .shadow = {2, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {6, 0}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {2, 0}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_3_3[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {2, -2}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {4, -4}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {6, -6}, .shadow = {6, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 55, .offset = {9, -7}, .shadow = {9, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 55, .offset = {12, -6}, .shadow = {12, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {15, -3}, .shadow = {15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 56, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {10, -4}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {6, -3}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {2, -2}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_3_4[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {2, -4}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {4, -8}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {6, -12}, .shadow = {6, -6} },
	{ .frames = 3, .unkFlags = 0, .poseId = 58, .offset = {9, -18}, .shadow = {9, -9} },
	{ .frames = 2, .unkFlags = 2, .poseId = 58, .offset = {12, -21}, .shadow = {12, -12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {15, -22}, .shadow = {15, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {21, -21}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 59, .offset = {22, -20}, .shadow = {22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {21, -21}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {22, -20}, .shadow = {22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {21, -21}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {10, -13}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {6, -9}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {2, -4}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_3_5[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, -4}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, -8}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -12}, .shadow = {0, -6} },
	{ .frames = 3, .unkFlags = 0, .poseId = 61, .offset = {0, -18}, .shadow = {0, -9} },
	{ .frames = 2, .unkFlags = 2, .poseId = 61, .offset = {0, -21}, .shadow = {0, -12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, -22}, .shadow = {0, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 62, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -13}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -9}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -4}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_3_6[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {-2, -4}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {-4, -8}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-6, -12}, .shadow = {-6, -6} },
	{ .frames = 3, .unkFlags = 0, .poseId = 64, .offset = {-9, -18}, .shadow = {-9, -9} },
	{ .frames = 2, .unkFlags = 2, .poseId = 64, .offset = {-12, -21}, .shadow = {-12, -12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {-15, -22}, .shadow = {-15, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 65, .offset = {-22, -20}, .shadow = {-22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-22, -20}, .shadow = {-22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-10, -13}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-6, -9}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-2, -4}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_3_7[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {-2, -2}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {-4, -4}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-6, -6}, .shadow = {-6, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 67, .offset = {-9, -7}, .shadow = {-9, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 67, .offset = {-12, -6}, .shadow = {-12, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {-15, -3}, .shadow = {-15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 68, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-10, -4}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-6, -3}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-2, -2}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_3_8[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {-2, -1}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {-4, -2}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-6, -3}, .shadow = {-6, 6} },
	{ .frames = 3, .unkFlags = 0, .poseId = 70, .offset = {-8, -2}, .shadow = {-8, 8} },
	{ .frames = 2, .unkFlags = 2, .poseId = 70, .offset = {-10, 0}, .shadow = {-10, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {-12, 5}, .shadow = {-12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-19, 19}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {-20, 18}, .shadow = {-20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-19, 19}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-20, 18}, .shadow = {-20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-19, 19}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-10, 2}, .shadow = {-2, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-6, 0}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-2, 0}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 100, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 96, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 99, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 98, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 102, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 97, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 101, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 96, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 100, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 103, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 102, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 98, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 101, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 97, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 146, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {19, 3}, .shadow = {19, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {23, 10}, .shadow = {23, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 149, .offset = {22, 20}, .shadow = {22, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 150, .offset = {11, 19}, .shadow = {11, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {18, -5}, .shadow = {18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 148, .offset = {21, -2}, .shadow = {21, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 149, .offset = {18, 4}, .shadow = {18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {12, 5}, .shadow = {12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 151, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 151, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {-7, -18}, .shadow = {-7, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 146, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 147, .offset = {7, -18}, .shadow = {7, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {9, -10}, .shadow = {9, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 149, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 147, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {-18, -5}, .shadow = {-18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 152, .offset = {-21, -2}, .shadow = {-21, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 151, .offset = {-18, 4}, .shadow = {-18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {-12, 5}, .shadow = {-12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 149, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 146, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {-19, 3}, .shadow = {-19, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {-23, 10}, .shadow = {-23, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 151, .offset = {-22, 20}, .shadow = {-22, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 150, .offset = {-11, 19}, .shadow = {-11, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 148, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 163, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 163, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 164, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 164, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 166, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 166, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 167, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 167, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 169, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 169, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 170, .offset = {0, -25}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 170, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 172, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 172, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 173, .offset = {0, -25}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 173, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 175, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 175, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 176, .offset = {0, -26}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 176, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 178, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 178, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 179, .offset = {0, -25}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 179, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 179, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenonatAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 181, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 181, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 181, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 182, .offset = {0, -25}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 182, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 182, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sVenonatGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_1.4bpp.lz");
static const ax_sprite sVenonatSprites1[] = {
	{sVenonatGfx1, ARRAY_COUNT(sVenonatGfx1)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_2.4bpp.lz");
static const ax_sprite sVenonatSprites2[] = {
	{sVenonatGfx2, ARRAY_COUNT(sVenonatGfx2)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_3.4bpp.lz");
static const ax_sprite sVenonatSprites3[] = {
	{sVenonatGfx3, ARRAY_COUNT(sVenonatGfx3)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_4.4bpp.lz");
static const ax_sprite sVenonatSprites4[] = {
	{sVenonatGfx4, ARRAY_COUNT(sVenonatGfx4)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_5.4bpp.lz");
static const ax_sprite sVenonatSprites5[] = {
	{sVenonatGfx5, ARRAY_COUNT(sVenonatGfx5)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_6.4bpp.lz");
static const ax_sprite sVenonatSprites6[] = {
	{sVenonatGfx6, ARRAY_COUNT(sVenonatGfx6)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_7.4bpp.lz");
static const ax_sprite sVenonatSprites7[] = {
	{sVenonatGfx7, ARRAY_COUNT(sVenonatGfx7)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_8.4bpp.lz");
static const ax_sprite sVenonatSprites8[] = {
	{sVenonatGfx8, ARRAY_COUNT(sVenonatGfx8)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_9.4bpp.lz");
static const ax_sprite sVenonatSprites9[] = {
	{sVenonatGfx9, ARRAY_COUNT(sVenonatGfx9)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_10.4bpp.lz");
static const ax_sprite sVenonatSprites10[] = {
	{sVenonatGfx10, ARRAY_COUNT(sVenonatGfx10)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_11.4bpp.lz");
static const ax_sprite sVenonatSprites11[] = {
	{sVenonatGfx11, ARRAY_COUNT(sVenonatGfx11)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_12.4bpp.lz");
static const ax_sprite sVenonatSprites12[] = {
	{sVenonatGfx12, ARRAY_COUNT(sVenonatGfx12)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_13.4bpp.lz");
static const ax_sprite sVenonatSprites13[] = {
	{sVenonatGfx13, ARRAY_COUNT(sVenonatGfx13)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_14.4bpp.lz");
static const ax_sprite sVenonatSprites14[] = {
	{sVenonatGfx14, ARRAY_COUNT(sVenonatGfx14)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_15.4bpp.lz");
static const ax_sprite sVenonatSprites15[] = {
	{sVenonatGfx15, ARRAY_COUNT(sVenonatGfx15)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_16.4bpp.lz");
static const u8 sVenonatGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_16_1.4bpp.lz");
static const u8 sVenonatGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_16_2.4bpp.lz");
static const ax_sprite sVenonatSprites16[] = {
	{sVenonatGfx16, ARRAY_COUNT(sVenonatGfx16)}, 
	{NULL, 32}, 
	{sVenonatGfx16_1, ARRAY_COUNT(sVenonatGfx16_1)}, 
	{NULL, 32}, 
	{sVenonatGfx16_2, ARRAY_COUNT(sVenonatGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVenonatGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_17.4bpp.lz");
static const u8 sVenonatGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_17_1.4bpp.lz");
static const u8 sVenonatGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_17_2.4bpp.lz");
static const ax_sprite sVenonatSprites17[] = {
	{sVenonatGfx17, ARRAY_COUNT(sVenonatGfx17)}, 
	{NULL, 32}, 
	{sVenonatGfx17_1, ARRAY_COUNT(sVenonatGfx17_1)}, 
	{NULL, 32}, 
	{sVenonatGfx17_2, ARRAY_COUNT(sVenonatGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVenonatGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_18.4bpp.lz");
static const u8 sVenonatGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_18_1.4bpp.lz");
static const u8 sVenonatGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_18_2.4bpp.lz");
static const ax_sprite sVenonatSprites18[] = {
	{sVenonatGfx18, ARRAY_COUNT(sVenonatGfx18)}, 
	{NULL, 32}, 
	{sVenonatGfx18_1, ARRAY_COUNT(sVenonatGfx18_1)}, 
	{NULL, 32}, 
	{sVenonatGfx18_2, ARRAY_COUNT(sVenonatGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVenonatGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_19.4bpp.lz");
static const u8 sVenonatGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_19_1.4bpp.lz");
static const u8 sVenonatGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_19_2.4bpp.lz");
static const ax_sprite sVenonatSprites19[] = {
	{NULL, 32}, 
	{sVenonatGfx19, ARRAY_COUNT(sVenonatGfx19)}, 
	{NULL, 32}, 
	{sVenonatGfx19_1, ARRAY_COUNT(sVenonatGfx19_1)}, 
	{NULL, 32}, 
	{sVenonatGfx19_2, ARRAY_COUNT(sVenonatGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVenonatGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_20.4bpp.lz");
static const u8 sVenonatGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_20_1.4bpp.lz");
static const u8 sVenonatGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_20_2.4bpp.lz");
static const u8 sVenonatGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_20_3.4bpp.lz");
static const ax_sprite sVenonatSprites20[] = {
	{NULL, 32}, 
	{sVenonatGfx20, ARRAY_COUNT(sVenonatGfx20)}, 
	{NULL, 32}, 
	{sVenonatGfx20_1, ARRAY_COUNT(sVenonatGfx20_1)}, 
	{NULL, 32}, 
	{sVenonatGfx20_2, ARRAY_COUNT(sVenonatGfx20_2)}, 
	{NULL, 64}, 
	{sVenonatGfx20_3, ARRAY_COUNT(sVenonatGfx20_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sVenonatGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_21.4bpp.lz");
static const ax_sprite sVenonatSprites21[] = {
	{sVenonatGfx21, ARRAY_COUNT(sVenonatGfx21)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_22.4bpp.lz");
static const ax_sprite sVenonatSprites22[] = {
	{sVenonatGfx22, ARRAY_COUNT(sVenonatGfx22)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_23.4bpp.lz");
static const ax_sprite sVenonatSprites23[] = {
	{sVenonatGfx23, ARRAY_COUNT(sVenonatGfx23)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_24.4bpp.lz");
static const ax_sprite sVenonatSprites24[] = {
	{sVenonatGfx24, ARRAY_COUNT(sVenonatGfx24)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_25.4bpp.lz");
static const ax_sprite sVenonatSprites25[] = {
	{sVenonatGfx25, ARRAY_COUNT(sVenonatGfx25)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_26.4bpp.lz");
static const ax_sprite sVenonatSprites26[] = {
	{sVenonatGfx26, ARRAY_COUNT(sVenonatGfx26)}, 
	{NULL, 0}
};
static const u8 sVenonatGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venonat/sprite_27.4bpp.lz");
static const ax_sprite sVenonatSprites27[] = {
	{sVenonatGfx27, ARRAY_COUNT(sVenonatGfx27)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesVenonat[] = {
	sVenonatPose1,
	sVenonatPose2,
	sVenonatPose3,
	sVenonatPose4,
	sVenonatPose5,
	sVenonatPose6,
	sVenonatPose7,
	sVenonatPose8,
	sVenonatPose9,
	sVenonatPose10,
	sVenonatPose11,
	sVenonatPose12,
	sVenonatPose13,
	sVenonatPose14,
	sVenonatPose15,
	sVenonatPose16,
	sVenonatPose17,
	sVenonatPose18,
	sVenonatPose19,
	sVenonatPose20,
	sVenonatPose21,
	sVenonatPose22,
	sVenonatPose23,
	sVenonatPose24,
	sVenonatPose1,
	sVenonatPose26,
	sVenonatPose27,
	sVenonatPose4,
	sVenonatPose29,
	sVenonatPose30,
	sVenonatPose7,
	sVenonatPose32,
	sVenonatPose33,
	sVenonatPose10,
	sVenonatPose35,
	sVenonatPose36,
	sVenonatPose13,
	sVenonatPose38,
	sVenonatPose39,
	sVenonatPose40,
	sVenonatPose41,
	sVenonatPose42,
	sVenonatPose43,
	sVenonatPose44,
	sVenonatPose45,
	sVenonatPose46,
	sVenonatPose47,
	sVenonatPose48,
	sVenonatPose1,
	sVenonatPose26,
	sVenonatPose27,
	sVenonatPose4,
	sVenonatPose29,
	sVenonatPose30,
	sVenonatPose7,
	sVenonatPose32,
	sVenonatPose33,
	sVenonatPose10,
	sVenonatPose35,
	sVenonatPose36,
	sVenonatPose13,
	sVenonatPose38,
	sVenonatPose39,
	sVenonatPose40,
	sVenonatPose41,
	sVenonatPose42,
	sVenonatPose43,
	sVenonatPose44,
	sVenonatPose45,
	sVenonatPose46,
	sVenonatPose47,
	sVenonatPose48,
	sVenonatPose1,
	sVenonatPose2,
	sVenonatPose27,
	sVenonatPose4,
	sVenonatPose77,
	sVenonatPose78,
	sVenonatPose7,
	sVenonatPose80,
	sVenonatPose81,
	sVenonatPose10,
	sVenonatPose83,
	sVenonatPose84,
	sVenonatPose13,
	sVenonatPose14,
	sVenonatPose39,
	sVenonatPose16,
	sVenonatPose89,
	sVenonatPose90,
	sVenonatPose19,
	sVenonatPose92,
	sVenonatPose45,
	sVenonatPose22,
	sVenonatPose95,
	sVenonatPose96,
	sVenonatPose1,
	sVenonatPose22,
	sVenonatPose19,
	sVenonatPose16,
	sVenonatPose13,
	sVenonatPose10,
	sVenonatPose7,
	sVenonatPose4,
	sVenonatPose105,
	sVenonatPose106,
	sVenonatPose107,
	sVenonatPose108,
	sVenonatPose109,
	sVenonatPose110,
	sVenonatPose111,
	sVenonatPose112,
	sVenonatPose2,
	sVenonatPose95,
	sVenonatPose92,
	sVenonatPose116,
	sVenonatPose117,
	sVenonatPose83,
	sVenonatPose119,
	sVenonatPose120,
	sVenonatPose121,
	sVenonatPose122,
	sVenonatPose123,
	sVenonatPose124,
	sVenonatPose125,
	sVenonatPose126,
	sVenonatPose127,
	sVenonatPose128,
	sVenonatPose129,
	sVenonatPose130,
	sVenonatPose1,
	sVenonatPose132,
	sVenonatPose4,
	sVenonatPose134,
	sVenonatPose7,
	sVenonatPose136,
	sVenonatPose10,
	sVenonatPose138,
	sVenonatPose13,
	sVenonatPose117,
	sVenonatPose40,
	sVenonatPose142,
	sVenonatPose43,
	sVenonatPose144,
	sVenonatPose46,
	sVenonatPose146,
	sVenonatPose1,
	sVenonatPose22,
	sVenonatPose19,
	sVenonatPose16,
	sVenonatPose13,
	sVenonatPose10,
	sVenonatPose7,
	sVenonatPose4,
	sVenonatPose132,
	sVenonatPose156,
	sVenonatPose32,
	sVenonatPose158,
	sVenonatPose38,
	sVenonatPose160,
	sVenonatPose161,
	sVenonatPose162,
	sVenonatPose1,
	sVenonatPose132,
	sVenonatPose165,
	sVenonatPose4,
	sVenonatPose167,
	sVenonatPose168,
	sVenonatPose7,
	sVenonatPose170,
	sVenonatPose171,
	sVenonatPose10,
	sVenonatPose35,
	sVenonatPose174,
	sVenonatPose13,
	sVenonatPose38,
	sVenonatPose177,
	sVenonatPose16,
	sVenonatPose179,
	sVenonatPose180,
	sVenonatPose19,
	sVenonatPose182,
	sVenonatPose183,
	sVenonatPose22,
	sVenonatPose185,
	sVenonatPose186,
	sVenonatPose165,
	sVenonatPose186,
	sVenonatPose45,
	sVenonatPose180,
	sVenonatPose15,
	sVenonatPose192,
	sVenonatPose81,
	sVenonatPose168,
	sVenonatPose1,
	sVenonatPose22,
	sVenonatPose19,
	sVenonatPose16,
	sVenonatPose13,
	sVenonatPose10,
	sVenonatPose7,
	sVenonatPose4,
};

static const struct PositionSets sAxPositionsVenonat[] = {
	[0] = { .set = { {-1, -3}, {-5, -3}, {3, -3}, {-1, -7} } },
	[1] = { .set = { {-1, -7}, {-5, -7}, {3, -7}, {-1, -10} } },
	[2] = { .set = { {-1, 1}, {-5, 1}, {3, 1}, {-1, -4} } },
	[3] = { .set = { {2, -5}, {6, -5}, {-1, -1}, {-2, -7} } },
	[4] = { .set = { {5, -10}, {9, -10}, {2, -6}, {0, -12} } },
	[5] = { .set = { {5, -1}, {9, -2}, {2, 2}, {1, -5} } },
	[6] = { .set = { {5, -5}, {5, -6}, {4, -3}, {-1, -8} } },
	[7] = { .set = { {8, -11}, {8, -12}, {7, -9}, {1, -13} } },
	[8] = { .set = { {8, -3}, {9, -4}, {8, -2}, {2, -7} } },
	[9] = { .set = { {2, -8}, {-4, -10}, {5, -7}, {-2, -8} } },
	[10] = { .set = { {3, -15}, {-2, -15}, {6, -13}, {0, -13} } },
	[11] = { .set = { {3, -6}, {-2, -9}, {6, -5}, {0, -8} } },
	[12] = { .set = { {-1, -9}, {3, -7}, {-5, -7}, {-1, -8} } },
	[13] = { .set = { {-1, -15}, {3, -12}, {-5, -12}, {-1, -13} } },
	[14] = { .set = { {-1, -6}, {4, -7}, {-5, -7}, {-1, -7} } },
	[15] = { .set = { {-4, -8}, {2, -10}, {-7, -7}, {0, -8} } },
	[16] = { .set = { {-5, -15}, {0, -15}, {-8, -13}, {-2, -13} } },
	[17] = { .set = { {-5, -6}, {0, -9}, {-8, -5}, {-2, -8} } },
	[18] = { .set = { {-7, -5}, {-7, -6}, {-6, -3}, {-1, -8} } },
	[19] = { .set = { {-10, -11}, {-10, -12}, {-9, -9}, {-3, -13} } },
	[20] = { .set = { {-10, -3}, {-11, -4}, {-10, -2}, {-4, -7} } },
	[21] = { .set = { {-4, -5}, {-8, -5}, {-1, -1}, {0, -7} } },
	[22] = { .set = { {-7, -10}, {-11, -10}, {-4, -6}, {-2, -12} } },
	[23] = { .set = { {-7, -1}, {-11, -2}, {-4, 2}, {-3, -5} } },
	[24] = { .set = { {-1, -3}, {-5, -3}, {3, -3}, {-1, -7} } },
	[25] = { .set = { {-1, -5}, {-5, -5}, {3, -5}, {-1, -8} } },
	[26] = { .set = { {-1, -1}, {-5, -1}, {3, -1}, {-1, -6} } },
	[27] = { .set = { {2, -5}, {6, -5}, {-1, -1}, {-2, -7} } },
	[28] = { .set = { {3, -7}, {7, -7}, {0, -3}, {-2, -9} } },
	[29] = { .set = { {3, -2}, {7, -3}, {0, 1}, {-1, -6} } },
	[30] = { .set = { {5, -5}, {5, -6}, {4, -3}, {-1, -8} } },
	[31] = { .set = { {6, -9}, {6, -10}, {5, -7}, {-1, -11} } },
	[32] = { .set = { {5, -3}, {6, -4}, {5, -2}, {-1, -7} } },
	[33] = { .set = { {2, -8}, {-4, -10}, {5, -7}, {-2, -8} } },
	[34] = { .set = { {1, -12}, {-4, -12}, {4, -10}, {-2, -10} } },
	[35] = { .set = { {1, -4}, {-4, -7}, {4, -3}, {-2, -6} } },
	[36] = { .set = { {-1, -9}, {3, -7}, {-5, -7}, {-1, -8} } },
	[37] = { .set = { {-1, -12}, {3, -9}, {-5, -9}, {-1, -10} } },
	[38] = { .set = { {-1, -4}, {4, -5}, {-5, -5}, {-1, -5} } },
	[39] = { .set = { {-3, -8}, {3, -10}, {-6, -7}, {1, -8} } },
	[40] = { .set = { {-2, -12}, {3, -12}, {-5, -10}, {1, -10} } },
	[41] = { .set = { {-2, -4}, {3, -7}, {-5, -3}, {1, -6} } },
	[42] = { .set = { {-6, -5}, {-6, -6}, {-5, -3}, {0, -8} } },
	[43] = { .set = { {-7, -9}, {-7, -10}, {-6, -7}, {0, -11} } },
	[44] = { .set = { {-6, -3}, {-7, -4}, {-6, -2}, {0, -7} } },
	[45] = { .set = { {-3, -5}, {-7, -5}, {0, -1}, {1, -7} } },
	[46] = { .set = { {-4, -7}, {-8, -7}, {-1, -3}, {1, -9} } },
	[47] = { .set = { {-4, -2}, {-8, -3}, {-1, 1}, {0, -6} } },
	[48] = { .set = { {-1, -3}, {-5, -3}, {3, -3}, {-1, -7} } },
	[49] = { .set = { {-1, -5}, {-5, -5}, {3, -5}, {-1, -8} } },
	[50] = { .set = { {-1, -1}, {-5, -1}, {3, -1}, {-1, -6} } },
	[51] = { .set = { {2, -5}, {6, -5}, {-1, -1}, {-2, -7} } },
	[52] = { .set = { {3, -7}, {7, -7}, {0, -3}, {-2, -9} } },
	[53] = { .set = { {3, -2}, {7, -3}, {0, 1}, {-1, -6} } },
	[54] = { .set = { {5, -5}, {5, -6}, {4, -3}, {-1, -8} } },
	[55] = { .set = { {6, -9}, {6, -10}, {5, -7}, {-1, -11} } },
	[56] = { .set = { {5, -3}, {6, -4}, {5, -2}, {-1, -7} } },
	[57] = { .set = { {2, -8}, {-4, -10}, {5, -7}, {-2, -8} } },
	[58] = { .set = { {1, -12}, {-4, -12}, {4, -10}, {-2, -10} } },
	[59] = { .set = { {1, -4}, {-4, -7}, {4, -3}, {-2, -6} } },
	[60] = { .set = { {-1, -9}, {3, -7}, {-5, -7}, {-1, -8} } },
	[61] = { .set = { {-1, -12}, {3, -9}, {-5, -9}, {-1, -10} } },
	[62] = { .set = { {-1, -4}, {4, -5}, {-5, -5}, {-1, -5} } },
	[63] = { .set = { {-3, -8}, {3, -10}, {-6, -7}, {1, -8} } },
	[64] = { .set = { {-2, -12}, {3, -12}, {-5, -10}, {1, -10} } },
	[65] = { .set = { {-2, -4}, {3, -7}, {-5, -3}, {1, -6} } },
	[66] = { .set = { {-6, -5}, {-6, -6}, {-5, -3}, {0, -8} } },
	[67] = { .set = { {-7, -9}, {-7, -10}, {-6, -7}, {0, -11} } },
	[68] = { .set = { {-6, -3}, {-7, -4}, {-6, -2}, {0, -7} } },
	[69] = { .set = { {-3, -5}, {-7, -5}, {0, -1}, {1, -7} } },
	[70] = { .set = { {-4, -7}, {-8, -7}, {-1, -3}, {1, -9} } },
	[71] = { .set = { {-4, -2}, {-8, -3}, {-1, 1}, {0, -6} } },
	[72] = { .set = { {-1, -3}, {-5, -3}, {3, -3}, {-1, -7} } },
	[73] = { .set = { {-1, -7}, {-5, -7}, {3, -7}, {-1, -10} } },
	[74] = { .set = { {-1, -1}, {-5, -1}, {3, -1}, {-1, -6} } },
	[75] = { .set = { {2, -5}, {6, -5}, {-1, -1}, {-2, -7} } },
	[76] = { .set = { {2, -10}, {6, -10}, {-1, -6}, {-3, -12} } },
	[77] = { .set = { {2, -1}, {6, -2}, {-1, 2}, {-2, -5} } },
	[78] = { .set = { {5, -5}, {5, -6}, {4, -3}, {-1, -8} } },
	[79] = { .set = { {5, -11}, {5, -12}, {4, -9}, {-2, -13} } },
	[80] = { .set = { {4, -3}, {5, -4}, {4, -2}, {-2, -7} } },
	[81] = { .set = { {2, -8}, {-4, -10}, {5, -7}, {-2, -8} } },
	[82] = { .set = { {1, -15}, {-4, -15}, {4, -13}, {-2, -13} } },
	[83] = { .set = { {1, -6}, {-4, -9}, {4, -5}, {-2, -8} } },
	[84] = { .set = { {-1, -9}, {3, -7}, {-5, -7}, {-1, -8} } },
	[85] = { .set = { {-1, -15}, {3, -12}, {-5, -12}, {-1, -13} } },
	[86] = { .set = { {-1, -4}, {4, -5}, {-5, -5}, {-1, -5} } },
	[87] = { .set = { {-4, -8}, {2, -10}, {-7, -7}, {0, -8} } },
	[88] = { .set = { {-3, -15}, {2, -15}, {-6, -13}, {0, -13} } },
	[89] = { .set = { {-3, -6}, {2, -9}, {-6, -5}, {0, -8} } },
	[90] = { .set = { {-7, -5}, {-7, -6}, {-6, -3}, {-1, -8} } },
	[91] = { .set = { {-7, -11}, {-7, -12}, {-6, -9}, {0, -13} } },
	[92] = { .set = { {-6, -3}, {-7, -4}, {-6, -2}, {0, -7} } },
	[93] = { .set = { {-4, -5}, {-8, -5}, {-1, -1}, {0, -7} } },
	[94] = { .set = { {-4, -10}, {-8, -10}, {-1, -6}, {1, -12} } },
	[95] = { .set = { {-4, -1}, {-8, -2}, {-1, 2}, {0, -5} } },
	[96] = { .set = { {-1, -3}, {-5, -3}, {3, -3}, {-1, -7} } },
	[97] = { .set = { {-4, -5}, {-8, -5}, {-1, -1}, {0, -7} } },
	[98] = { .set = { {-7, -5}, {-7, -6}, {-6, -3}, {-1, -8} } },
	[99] = { .set = { {-4, -8}, {2, -10}, {-7, -7}, {0, -8} } },
	[100] = { .set = { {-1, -9}, {3, -7}, {-5, -7}, {-1, -8} } },
	[101] = { .set = { {2, -8}, {-4, -10}, {5, -7}, {-2, -8} } },
	[102] = { .set = { {5, -5}, {5, -6}, {4, -3}, {-1, -8} } },
	[103] = { .set = { {2, -5}, {6, -5}, {-1, -1}, {-2, -7} } },
	[104] = { .set = { {1, -5}, {-1, -3}, {5, -6}, {-2, -8} } },
	[105] = { .set = { {-1, -4}, {-5, -3}, {3, -3}, {-1, -8} } },
	[106] = { .set = { {-5, -4}, {-8, -5}, {0, -4}, {-1, -8} } },
	[107] = { .set = { {-8, -6}, {-7, -7}, {-5, -5}, {0, -8} } },
	[108] = { .set = { {-3, -7}, {3, -9}, {-7, -5}, {0, -7} } },
	[109] = { .set = { {6, -5}, {5, -6}, {3, -4}, {-2, -7} } },
	[110] = { .set = { {3, -4}, {6, -5}, {-2, -4}, {-1, -8} } },
	[111] = { .set = { {-1, -4}, {3, -3}, {-5, -3}, {-1, -8} } },
	[112] = { .set = { {-1, -7}, {-5, -7}, {3, -7}, {-1, -10} } },
	[113] = { .set = { {-4, -10}, {-8, -10}, {-1, -6}, {1, -12} } },
	[114] = { .set = { {-7, -11}, {-7, -12}, {-6, -9}, {0, -13} } },
	[115] = { .set = { {-3, -14}, {2, -14}, {-6, -12}, {0, -12} } },
	[116] = { .set = { {-1, -14}, {3, -11}, {-5, -11}, {-1, -12} } },
	[117] = { .set = { {1, -15}, {-4, -15}, {4, -13}, {-2, -13} } },
	[118] = { .set = { {6, -11}, {6, -12}, {5, -9}, {-1, -13} } },
	[119] = { .set = { {3, -10}, {7, -10}, {0, -6}, {-2, -12} } },
	[120] = { .set = { {-1, -2}, {-5, -2}, {3, -2}, {-1, -7} } },
	[121] = { .set = { {-1, -1}, {-5, -1}, {3, -1}, {-1, -6} } },
	[122] = { .set = { {0, -10}, {-5, -11}, {5, -11}, {0, -8} } },
	[123] = { .set = { {-1, -13}, {3, -15}, {-1, -10}, {-2, -9} } },
	[124] = { .set = { {2, -14}, {3, -15}, {2, -12}, {0, -8} } },
	[125] = { .set = { {-1, -13}, {-2, -15}, {4, -11}, {-2, -8} } },
	[126] = { .set = { {0, -12}, {-5, -14}, {5, -14}, {0, -5} } },
	[127] = { .set = { {0, -13}, {1, -15}, {-5, -11}, {1, -8} } },
	[128] = { .set = { {-3, -14}, {-4, -15}, {-3, -12}, {-1, -8} } },
	[129] = { .set = { {0, -13}, {-4, -15}, {0, -10}, {1, -9} } },
	[130] = { .set = { {-1, -3}, {-5, -3}, {3, -3}, {-1, -7} } },
	[131] = { .set = { {-1, -6}, {-5, -6}, {3, -6}, {-1, -9} } },
	[132] = { .set = { {2, -5}, {6, -5}, {-1, -1}, {-2, -7} } },
	[133] = { .set = { {4, -8}, {8, -8}, {1, -4}, {-1, -10} } },
	[134] = { .set = { {5, -5}, {5, -6}, {4, -3}, {-1, -8} } },
	[135] = { .set = { {8, -9}, {8, -10}, {7, -7}, {1, -11} } },
	[136] = { .set = { {2, -8}, {-4, -10}, {5, -7}, {-2, -8} } },
	[137] = { .set = { {3, -14}, {-2, -14}, {6, -12}, {0, -12} } },
	[138] = { .set = { {-1, -9}, {3, -7}, {-5, -7}, {-1, -8} } },
	[139] = { .set = { {-1, -14}, {3, -11}, {-5, -11}, {-1, -12} } },
	[140] = { .set = { {-3, -8}, {3, -10}, {-6, -7}, {1, -8} } },
	[141] = { .set = { {-4, -14}, {1, -14}, {-7, -12}, {-1, -12} } },
	[142] = { .set = { {-6, -5}, {-6, -6}, {-5, -3}, {0, -8} } },
	[143] = { .set = { {-9, -9}, {-9, -10}, {-8, -7}, {-2, -11} } },
	[144] = { .set = { {-3, -5}, {-7, -5}, {0, -1}, {1, -7} } },
	[145] = { .set = { {-5, -8}, {-9, -8}, {-2, -4}, {0, -10} } },
	[146] = { .set = { {-1, -3}, {-5, -3}, {3, -3}, {-1, -7} } },
	[147] = { .set = { {-4, -5}, {-8, -5}, {-1, -1}, {0, -7} } },
	[148] = { .set = { {-7, -5}, {-7, -6}, {-6, -3}, {-1, -8} } },
	[149] = { .set = { {-4, -8}, {2, -10}, {-7, -7}, {0, -8} } },
	[150] = { .set = { {-1, -9}, {3, -7}, {-5, -7}, {-1, -8} } },
	[151] = { .set = { {2, -8}, {-4, -10}, {5, -7}, {-2, -8} } },
	[152] = { .set = { {5, -5}, {5, -6}, {4, -3}, {-1, -8} } },
	[153] = { .set = { {2, -5}, {6, -5}, {-1, -1}, {-2, -7} } },
	[154] = { .set = { {-1, -6}, {-5, -6}, {3, -6}, {-1, -9} } },
	[155] = { .set = { {3, -9}, {7, -9}, {0, -5}, {-2, -11} } },
	[156] = { .set = { {6, -9}, {6, -10}, {5, -7}, {-1, -11} } },
	[157] = { .set = { {2, -13}, {-3, -13}, {5, -11}, {-1, -11} } },
	[158] = { .set = { {-1, -12}, {3, -9}, {-5, -9}, {-1, -10} } },
	[159] = { .set = { {-4, -13}, {1, -13}, {-7, -11}, {-1, -11} } },
	[160] = { .set = { {-8, -9}, {-8, -10}, {-7, -7}, {-1, -11} } },
	[161] = { .set = { {-4, -9}, {-8, -9}, {-1, -5}, {1, -11} } },
	[162] = { .set = { {-1, -3}, {-5, -3}, {3, -3}, {-1, -7} } },
	[163] = { .set = { {-1, -6}, {-5, -6}, {3, -6}, {-1, -9} } },
	[164] = { .set = { {-1, -2}, {-5, -2}, {3, -2}, {-1, -7} } },
	[165] = { .set = { {2, -5}, {6, -5}, {-1, -1}, {-2, -7} } },
	[166] = { .set = { {2, -8}, {6, -8}, {-1, -4}, {-3, -10} } },
	[167] = { .set = { {2, -3}, {6, -4}, {-1, 0}, {-2, -7} } },
	[168] = { .set = { {5, -5}, {5, -6}, {4, -3}, {-1, -8} } },
	[169] = { .set = { {6, -10}, {6, -11}, {5, -8}, {-1, -12} } },
	[170] = { .set = { {5, -4}, {6, -5}, {5, -3}, {-1, -8} } },
	[171] = { .set = { {2, -8}, {-4, -10}, {5, -7}, {-2, -8} } },
	[172] = { .set = { {1, -12}, {-4, -12}, {4, -10}, {-2, -10} } },
	[173] = { .set = { {1, -5}, {-4, -8}, {4, -4}, {-2, -7} } },
	[174] = { .set = { {-1, -9}, {3, -7}, {-5, -7}, {-1, -8} } },
	[175] = { .set = { {-1, -12}, {3, -9}, {-5, -9}, {-1, -10} } },
	[176] = { .set = { {-1, -5}, {4, -6}, {-5, -6}, {-1, -6} } },
	[177] = { .set = { {-4, -8}, {2, -10}, {-7, -7}, {0, -8} } },
	[178] = { .set = { {-3, -12}, {2, -12}, {-6, -10}, {0, -10} } },
	[179] = { .set = { {-3, -5}, {2, -8}, {-6, -4}, {0, -7} } },
	[180] = { .set = { {-7, -5}, {-7, -6}, {-6, -3}, {-1, -8} } },
	[181] = { .set = { {-8, -10}, {-8, -11}, {-7, -8}, {-1, -12} } },
	[182] = { .set = { {-7, -4}, {-8, -5}, {-7, -3}, {-1, -8} } },
	[183] = { .set = { {-4, -5}, {-8, -5}, {-1, -1}, {0, -7} } },
	[184] = { .set = { {-4, -8}, {-8, -8}, {-1, -4}, {1, -10} } },
	[185] = { .set = { {-4, -3}, {-8, -4}, {-1, 0}, {0, -7} } },
	[186] = { .set = { {-1, -2}, {-5, -2}, {3, -2}, {-1, -7} } },
	[187] = { .set = { {-4, -3}, {-8, -4}, {-1, 0}, {0, -7} } },
	[188] = { .set = { {-6, -3}, {-7, -4}, {-6, -2}, {0, -7} } },
	[189] = { .set = { {-3, -5}, {2, -8}, {-6, -4}, {0, -7} } },
	[190] = { .set = { {-1, -6}, {4, -7}, {-5, -7}, {-1, -7} } },
	[191] = { .set = { {2, -5}, {-3, -8}, {5, -4}, {-1, -7} } },
	[192] = { .set = { {4, -3}, {5, -4}, {4, -2}, {-2, -7} } },
	[193] = { .set = { {2, -3}, {6, -4}, {-1, 0}, {-2, -7} } },
	[194] = { .set = { {-1, -3}, {-5, -3}, {3, -3}, {-1, -7} } },
	[195] = { .set = { {-4, -5}, {-8, -5}, {-1, -1}, {0, -7} } },
	[196] = { .set = { {-7, -5}, {-7, -6}, {-6, -3}, {-1, -8} } },
	[197] = { .set = { {-4, -8}, {2, -10}, {-7, -7}, {0, -8} } },
	[198] = { .set = { {-1, -9}, {3, -7}, {-5, -7}, {-1, -8} } },
	[199] = { .set = { {2, -8}, {-4, -10}, {5, -7}, {-2, -8} } },
	[200] = { .set = { {5, -5}, {5, -6}, {4, -3}, {-1, -8} } },
	[201] = { .set = { {2, -5}, {6, -5}, {-1, -1}, {-2, -7} } },
};

static const ax_anim *const sVenonatAnimTable1[] = {
	sVenonatAnims_1_1,
	sVenonatAnims_1_2,
	sVenonatAnims_1_3,
	sVenonatAnims_1_4,
	sVenonatAnims_1_5,
	sVenonatAnims_1_6,
	sVenonatAnims_1_7,
	sVenonatAnims_1_8,
};

static const ax_anim *const sVenonatAnimTable2[] = {
	sVenonatAnims_2_1,
	sVenonatAnims_2_2,
	sVenonatAnims_2_3,
	sVenonatAnims_2_4,
	sVenonatAnims_2_5,
	sVenonatAnims_2_6,
	sVenonatAnims_2_7,
	sVenonatAnims_2_8,
};

static const ax_anim *const sVenonatAnimTable3[] = {
	sVenonatAnims_3_1,
	sVenonatAnims_3_2,
	sVenonatAnims_3_3,
	sVenonatAnims_3_4,
	sVenonatAnims_3_5,
	sVenonatAnims_3_6,
	sVenonatAnims_3_7,
	sVenonatAnims_3_8,
};

static const ax_anim *const sVenonatAnimTable4[] = {
	gAxSharedAnim_02089,
	gAxSharedAnim_02111,
	gAxSharedAnim_02134,
	gAxSharedAnim_02157,
	gAxSharedAnim_02182,
	gAxSharedAnim_02209,
	gAxSharedAnim_02241,
	gAxSharedAnim_02270,
};

static const ax_anim *const sVenonatAnimTable5[] = {
	sVenonatAnims_5_1,
	sVenonatAnims_5_2,
	sVenonatAnims_5_3,
	sVenonatAnims_5_4,
	sVenonatAnims_5_5,
	sVenonatAnims_5_6,
	sVenonatAnims_5_7,
	sVenonatAnims_5_8,
};

static const ax_anim *const sVenonatAnimTable6[] = {
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
};

static const ax_anim *const sVenonatAnimTable7[] = {
	gAxSharedAnim_00330,
	gAxSharedAnim_00340,
	gAxSharedAnim_00348,
	gAxSharedAnim_00356,
	gAxSharedAnim_00368,
	gAxSharedAnim_00376,
	gAxSharedAnim_00383,
	gAxSharedAnim_00390,
};

static const ax_anim *const sVenonatAnimTable8[] = {
	gAxSharedAnim_00135,
	gAxSharedAnim_00136,
	gAxSharedAnim_00137,
	gAxSharedAnim_00139,
	gAxSharedAnim_00140,
	gAxSharedAnim_00141,
	gAxSharedAnim_00142,
	gAxSharedAnim_00143,
};

static const ax_anim *const sVenonatAnimTable9[] = {
	gAxSharedAnim_00535,
	sVenonatAnims_9_2,
	sVenonatAnims_9_3,
	gAxSharedAnim_00581,
	sVenonatAnims_9_5,
	gAxSharedAnim_00563,
	sVenonatAnims_9_7,
	sVenonatAnims_9_8,
};

static const ax_anim *const sVenonatAnimTable10[] = {
	gAxSharedAnim_00612,
	gAxSharedAnim_00622,
	gAxSharedAnim_00632,
	gAxSharedAnim_00642,
	gAxSharedAnim_00651,
	gAxSharedAnim_00660,
	gAxSharedAnim_00675,
	gAxSharedAnim_00686,
};

static const ax_anim *const sVenonatAnimTable11[] = {
	sVenonatAnims_11_1,
	sVenonatAnims_11_2,
	sVenonatAnims_11_3,
	sVenonatAnims_11_4,
	sVenonatAnims_11_5,
	sVenonatAnims_11_6,
	sVenonatAnims_11_7,
	gAxSharedAnim_00963,
};

static const ax_anim *const sVenonatAnimTable12[] = {
	gAxSharedAnim_01018,
	gAxSharedAnim_01127,
	gAxSharedAnim_01099,
	gAxSharedAnim_01085,
	gAxSharedAnim_01084,
	gAxSharedAnim_01065,
	gAxSharedAnim_01034,
	gAxSharedAnim_01019,
};

static const ax_anim *const sVenonatAnimTable13[] = {
	gAxSharedAnim_01145,
	gAxSharedAnim_01227,
	gAxSharedAnim_01218,
	gAxSharedAnim_01201,
	gAxSharedAnim_01190,
	gAxSharedAnim_01179,
	gAxSharedAnim_01168,
	gAxSharedAnim_01157,
};

static const ax_anim *const *const sAxAnimationsVenonat[] = {
	sVenonatAnimTable1,
	sVenonatAnimTable2,
	sVenonatAnimTable3,
	sVenonatAnimTable4,
	sVenonatAnimTable5,
	sVenonatAnimTable6,
	sVenonatAnimTable7,
	sVenonatAnimTable8,
	sVenonatAnimTable9,
	sVenonatAnimTable10,
	sVenonatAnimTable11,
	sVenonatAnimTable12,
	sVenonatAnimTable13,
};

static const ax_sprite *const sAxSpritesVenonat[] = {
	sVenonatSprites1,
	sVenonatSprites2,
	sVenonatSprites3,
	sVenonatSprites4,
	sVenonatSprites5,
	sVenonatSprites6,
	sVenonatSprites7,
	sVenonatSprites8,
	sVenonatSprites9,
	sVenonatSprites10,
	sVenonatSprites11,
	sVenonatSprites12,
	sVenonatSprites13,
	sVenonatSprites14,
	sVenonatSprites15,
	sVenonatSprites16,
	sVenonatSprites17,
	sVenonatSprites18,
	sVenonatSprites19,
	sVenonatSprites20,
	sVenonatSprites21,
	sVenonatSprites22,
	sVenonatSprites23,
	sVenonatSprites24,
	sVenonatSprites25,
	sVenonatSprites26,
	sVenonatSprites27,
};

static const axmain sAxMainVenonat = {
	.poses = sAxPosesVenonat,
	.animations = sAxAnimationsVenonat,
	.animCount = ARRAY_COUNT(sAxAnimationsVenonat),
	.spriteData = sAxSpritesVenonat,
	.positions = sAxPositionsVenonat,
};
