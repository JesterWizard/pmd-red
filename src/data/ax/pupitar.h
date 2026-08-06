/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainPupitar;
const SiroArchive gAxPupitar = {"SIRO", &sAxMainPupitar};

static const ax_pose sPupitarPose1[] = {
	AX_POSE(0, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose2[] = {
	AX_POSE(1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose3[] = {
	AX_POSE(2, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose4[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose5[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose6[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose7[] = {
	AX_POSE(6, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose8[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose9[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose10[] = {
	AX_POSE(9, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose11[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose12[] = {
	AX_POSE(11, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose13[] = {
	AX_POSE(12, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose14[] = {
	AX_POSE(13, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose15[] = {
	AX_POSE(14, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose16[] = {
	AX_POSE(9, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose17[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose18[] = {
	AX_POSE(11, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose19[] = {
	AX_POSE(6, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose20[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose21[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose22[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose23[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose24[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose26[] = {
	AX_POSE(1, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose29[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose30[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose32[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose35[] = {
	AX_POSE(10, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose36[] = {
	AX_POSE(11, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose38[] = {
	AX_POSE(13, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose39[] = {
	AX_POSE(14, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose41[] = {
	AX_POSE(10, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose42[] = {
	AX_POSE(11, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose44[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose47[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose48[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose74[] = {
	AX_POSE(15, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(16, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose76[] = {
	AX_POSE(17, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(18, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose77[] = {
	AX_POSE(6, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose78[] = {
	AX_POSE(19, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose79[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose80[] = {
	AX_POSE(20, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(21, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose81[] = {
	AX_POSE(12, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose82[] = {
	AX_POSE(22, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(23, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose83[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose84[] = {
	AX_POSE(20, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(21, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose85[] = {
	AX_POSE(6, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose86[] = {
	AX_POSE(19, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose88[] = {
	AX_POSE(17, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(18, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose89[] = {
	AX_POSE(0, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose90[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose91[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose92[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose93[] = {
	AX_POSE(12, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose94[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose95[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose96[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose97[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose98[] = {
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose99[] = {
	AX_POSE(26, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose100[] = {
	AX_POSE(27, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose101[] = {
	AX_POSE(28, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose102[] = {
	AX_POSE(29, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose103[] = {
	AX_POSE(30, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose104[] = {
	AX_POSE(29, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose105[] = {
	AX_POSE(28, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose106[] = {
	AX_POSE(27, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose108[] = {
	AX_POSE(15, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(16, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose110[] = {
	AX_POSE(17, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(18, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose112[] = {
	AX_POSE(19, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose114[] = {
	AX_POSE(20, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(21, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose118[] = {
	AX_POSE(20, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(21, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose120[] = {
	AX_POSE(19, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose122[] = {
	AX_POSE(17, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(18, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose127[] = {
	AX_POSE(12, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose128[] = {
	AX_POSE(9, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose129[] = {
	AX_POSE(6, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose130[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose131[] = {
	AX_POSE(15, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(16, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose135[] = {
	AX_POSE(22, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(23, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose143[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose144[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose146[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose147[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose150[] = {
	AX_POSE(11, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose152[] = {
	AX_POSE(13, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose156[] = {
	AX_POSE(11, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose158[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose159[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose161[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose164[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose165[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose168[] = {
	AX_POSE(11, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose169[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPupitarPose170[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const u8 sPupitarAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_1_1.lz");
static const u8 sPupitarAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_1_2.lz");
static const u8 sPupitarAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_1_3.lz");
static const u8 sPupitarAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_1_4.lz");
static const u8 sPupitarAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_1_5.lz");
static const u8 sPupitarAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_1_6.lz");
static const u8 sPupitarAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_1_7.lz");
static const u8 sPupitarAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_1_8.lz");
static const u8 sPupitarAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_2_1.lz");
static const u8 sPupitarAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_2_2.lz");
static const u8 sPupitarAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_2_3.lz");
static const u8 sPupitarAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_2_4.lz");
static const u8 sPupitarAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_2_5.lz");
static const u8 sPupitarAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_2_6.lz");
static const u8 sPupitarAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_2_7.lz");
static const u8 sPupitarAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_2_8.lz");
static const u8 sPupitarAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_3_1.lz");
static const u8 sPupitarAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_3_2.lz");
static const u8 sPupitarAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_3_3.lz");
static const u8 sPupitarAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_3_4.lz");
static const u8 sPupitarAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_3_5.lz");
static const u8 sPupitarAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_3_6.lz");
static const u8 sPupitarAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_3_7.lz");
static const u8 sPupitarAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_3_8.lz");
static const u8 sPupitarAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_4_1.lz");
static const u8 sPupitarAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_4_2.lz");
static const u8 sPupitarAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_4_3.lz");
static const u8 sPupitarAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_4_4.lz");
static const u8 sPupitarAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_4_5.lz");
static const u8 sPupitarAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_4_6.lz");
static const u8 sPupitarAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_4_7.lz");
static const u8 sPupitarAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_4_8.lz");
static const u8 sPupitarAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_8_1.lz");
static const u8 sPupitarAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_8_2.lz");
static const u8 sPupitarAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_8_3.lz");
static const u8 sPupitarAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_8_4.lz");
static const u8 sPupitarAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_8_5.lz");
static const u8 sPupitarAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_8_6.lz");
static const u8 sPupitarAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_8_7.lz");
static const u8 sPupitarAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_8_8.lz");
static const u8 sPupitarAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_9_1.lz");
static const u8 sPupitarAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_9_2.lz");
static const u8 sPupitarAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_9_3.lz");
static const u8 sPupitarAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_9_4.lz");
static const u8 sPupitarAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_9_5.lz");
static const u8 sPupitarAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_9_6.lz");
static const u8 sPupitarAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_9_7.lz");
static const u8 sPupitarAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_9_8.lz");
static const u8 sPupitarAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_11_1.lz");
static const u8 sPupitarAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_11_2.lz");
static const u8 sPupitarAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_11_3.lz");
static const u8 sPupitarAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_11_4.lz");
static const u8 sPupitarAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_11_5.lz");
static const u8 sPupitarAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_11_6.lz");
static const u8 sPupitarAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_11_7.lz");
static const u8 sPupitarAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pupitar/sPupitarAnims_11_8.lz");

static const u8 sPupitarGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_1.4bpp.lz");
static const ax_sprite sPupitarSprites1[] = {
	{sPupitarGfx1, ARRAY_COUNT(sPupitarGfx1)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_2.4bpp.lz");
static const ax_sprite sPupitarSprites2[] = {
	{sPupitarGfx2, ARRAY_COUNT(sPupitarGfx2)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_3.4bpp.lz");
static const ax_sprite sPupitarSprites3[] = {
	{sPupitarGfx3, ARRAY_COUNT(sPupitarGfx3)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_4.4bpp.lz");
static const ax_sprite sPupitarSprites4[] = {
	{sPupitarGfx4, ARRAY_COUNT(sPupitarGfx4)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_5.4bpp.lz");
static const ax_sprite sPupitarSprites5[] = {
	{sPupitarGfx5, ARRAY_COUNT(sPupitarGfx5)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_6.4bpp.lz");
static const ax_sprite sPupitarSprites6[] = {
	{sPupitarGfx6, ARRAY_COUNT(sPupitarGfx6)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_7.4bpp.lz");
static const ax_sprite sPupitarSprites7[] = {
	{sPupitarGfx7, ARRAY_COUNT(sPupitarGfx7)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_8.4bpp.lz");
static const ax_sprite sPupitarSprites8[] = {
	{sPupitarGfx8, ARRAY_COUNT(sPupitarGfx8)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_9.4bpp.lz");
static const ax_sprite sPupitarSprites9[] = {
	{sPupitarGfx9, ARRAY_COUNT(sPupitarGfx9)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_10.4bpp.lz");
static const ax_sprite sPupitarSprites10[] = {
	{sPupitarGfx10, ARRAY_COUNT(sPupitarGfx10)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_11.4bpp.lz");
static const ax_sprite sPupitarSprites11[] = {
	{sPupitarGfx11, ARRAY_COUNT(sPupitarGfx11)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_12.4bpp.lz");
static const ax_sprite sPupitarSprites12[] = {
	{sPupitarGfx12, ARRAY_COUNT(sPupitarGfx12)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_13.4bpp.lz");
static const ax_sprite sPupitarSprites13[] = {
	{sPupitarGfx13, ARRAY_COUNT(sPupitarGfx13)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_14.4bpp.lz");
static const ax_sprite sPupitarSprites14[] = {
	{sPupitarGfx14, ARRAY_COUNT(sPupitarGfx14)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_15.4bpp.lz");
static const ax_sprite sPupitarSprites15[] = {
	{sPupitarGfx15, ARRAY_COUNT(sPupitarGfx15)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_16.4bpp.lz");
static const u8 sPupitarGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_16_1.4bpp.lz");
static const ax_sprite sPupitarSprites16[] = {
	{sPupitarGfx16, ARRAY_COUNT(sPupitarGfx16)}, 
	{NULL, 32}, 
	{sPupitarGfx16_1, ARRAY_COUNT(sPupitarGfx16_1)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_17.4bpp.lz");
static const ax_sprite sPupitarSprites17[] = {
	{sPupitarGfx17, ARRAY_COUNT(sPupitarGfx17)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_18.4bpp.lz");
static const ax_sprite sPupitarSprites18[] = {
	{sPupitarGfx18, ARRAY_COUNT(sPupitarGfx18)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_19.4bpp.lz");
static const ax_sprite sPupitarSprites19[] = {
	{sPupitarGfx19, ARRAY_COUNT(sPupitarGfx19)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPupitarGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_20.4bpp.lz");
static const ax_sprite sPupitarSprites20[] = {
	{sPupitarGfx20, ARRAY_COUNT(sPupitarGfx20)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sPupitarGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_21.4bpp.lz");
static const u8 sPupitarGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_21_1.4bpp.lz");
static const ax_sprite sPupitarSprites21[] = {
	{sPupitarGfx21, ARRAY_COUNT(sPupitarGfx21)}, 
	{NULL, 32}, 
	{sPupitarGfx21_1, ARRAY_COUNT(sPupitarGfx21_1)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_22.4bpp.lz");
static const ax_sprite sPupitarSprites22[] = {
	{sPupitarGfx22, ARRAY_COUNT(sPupitarGfx22)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPupitarGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_23.4bpp.lz");
static const ax_sprite sPupitarSprites23[] = {
	{NULL, 32}, 
	{sPupitarGfx23, ARRAY_COUNT(sPupitarGfx23)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_24.4bpp.lz");
static const ax_sprite sPupitarSprites24[] = {
	{sPupitarGfx24, ARRAY_COUNT(sPupitarGfx24)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_25.4bpp.lz");
static const ax_sprite sPupitarSprites25[] = {
	{sPupitarGfx25, ARRAY_COUNT(sPupitarGfx25)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_26.4bpp.lz");
static const ax_sprite sPupitarSprites26[] = {
	{sPupitarGfx26, ARRAY_COUNT(sPupitarGfx26)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_27.4bpp.lz");
static const ax_sprite sPupitarSprites27[] = {
	{sPupitarGfx27, ARRAY_COUNT(sPupitarGfx27)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_28.4bpp.lz");
static const ax_sprite sPupitarSprites28[] = {
	{sPupitarGfx28, ARRAY_COUNT(sPupitarGfx28)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_29.4bpp.lz");
static const ax_sprite sPupitarSprites29[] = {
	{sPupitarGfx29, ARRAY_COUNT(sPupitarGfx29)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_30.4bpp.lz");
static const ax_sprite sPupitarSprites30[] = {
	{sPupitarGfx30, ARRAY_COUNT(sPupitarGfx30)}, 
	{NULL, 0}
};
static const u8 sPupitarGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pupitar/sprite_31.4bpp.lz");
static const ax_sprite sPupitarSprites31[] = {
	{sPupitarGfx31, ARRAY_COUNT(sPupitarGfx31)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesPupitar[] = {
	sPupitarPose1,
	sPupitarPose2,
	sPupitarPose3,
	sPupitarPose4,
	sPupitarPose5,
	sPupitarPose6,
	sPupitarPose7,
	sPupitarPose8,
	sPupitarPose9,
	sPupitarPose10,
	sPupitarPose11,
	sPupitarPose12,
	sPupitarPose13,
	sPupitarPose14,
	sPupitarPose15,
	sPupitarPose16,
	sPupitarPose17,
	sPupitarPose18,
	sPupitarPose19,
	sPupitarPose20,
	sPupitarPose21,
	sPupitarPose22,
	sPupitarPose23,
	sPupitarPose24,
	sPupitarPose1,
	sPupitarPose26,
	sPupitarPose3,
	sPupitarPose4,
	sPupitarPose29,
	sPupitarPose30,
	sPupitarPose7,
	sPupitarPose32,
	sPupitarPose9,
	sPupitarPose10,
	sPupitarPose35,
	sPupitarPose36,
	sPupitarPose13,
	sPupitarPose38,
	sPupitarPose39,
	sPupitarPose16,
	sPupitarPose41,
	sPupitarPose42,
	sPupitarPose19,
	sPupitarPose44,
	sPupitarPose21,
	sPupitarPose22,
	sPupitarPose47,
	sPupitarPose48,
	sPupitarPose1,
	sPupitarPose26,
	sPupitarPose3,
	sPupitarPose4,
	sPupitarPose29,
	sPupitarPose30,
	sPupitarPose7,
	sPupitarPose32,
	sPupitarPose9,
	sPupitarPose10,
	sPupitarPose35,
	sPupitarPose36,
	sPupitarPose13,
	sPupitarPose38,
	sPupitarPose39,
	sPupitarPose16,
	sPupitarPose41,
	sPupitarPose42,
	sPupitarPose19,
	sPupitarPose44,
	sPupitarPose21,
	sPupitarPose22,
	sPupitarPose47,
	sPupitarPose48,
	sPupitarPose1,
	sPupitarPose74,
	sPupitarPose4,
	sPupitarPose76,
	sPupitarPose77,
	sPupitarPose78,
	sPupitarPose79,
	sPupitarPose80,
	sPupitarPose81,
	sPupitarPose82,
	sPupitarPose83,
	sPupitarPose84,
	sPupitarPose85,
	sPupitarPose86,
	sPupitarPose22,
	sPupitarPose88,
	sPupitarPose89,
	sPupitarPose90,
	sPupitarPose91,
	sPupitarPose92,
	sPupitarPose93,
	sPupitarPose94,
	sPupitarPose95,
	sPupitarPose96,
	sPupitarPose97,
	sPupitarPose98,
	sPupitarPose99,
	sPupitarPose100,
	sPupitarPose101,
	sPupitarPose102,
	sPupitarPose103,
	sPupitarPose104,
	sPupitarPose105,
	sPupitarPose106,
	sPupitarPose1,
	sPupitarPose108,
	sPupitarPose4,
	sPupitarPose110,
	sPupitarPose77,
	sPupitarPose112,
	sPupitarPose79,
	sPupitarPose114,
	sPupitarPose81,
	sPupitarPose82,
	sPupitarPose83,
	sPupitarPose118,
	sPupitarPose85,
	sPupitarPose120,
	sPupitarPose22,
	sPupitarPose122,
	sPupitarPose1,
	sPupitarPose22,
	sPupitarPose85,
	sPupitarPose83,
	sPupitarPose127,
	sPupitarPose128,
	sPupitarPose129,
	sPupitarPose130,
	sPupitarPose131,
	sPupitarPose76,
	sPupitarPose78,
	sPupitarPose80,
	sPupitarPose135,
	sPupitarPose84,
	sPupitarPose86,
	sPupitarPose88,
	sPupitarPose1,
	sPupitarPose26,
	sPupitarPose3,
	sPupitarPose130,
	sPupitarPose143,
	sPupitarPose144,
	sPupitarPose129,
	sPupitarPose146,
	sPupitarPose147,
	sPupitarPose10,
	sPupitarPose35,
	sPupitarPose150,
	sPupitarPose13,
	sPupitarPose152,
	sPupitarPose39,
	sPupitarPose16,
	sPupitarPose41,
	sPupitarPose156,
	sPupitarPose85,
	sPupitarPose158,
	sPupitarPose159,
	sPupitarPose22,
	sPupitarPose161,
	sPupitarPose48,
	sPupitarPose3,
	sPupitarPose164,
	sPupitarPose165,
	sPupitarPose156,
	sPupitarPose15,
	sPupitarPose168,
	sPupitarPose169,
	sPupitarPose170,
	sPupitarPose89,
	sPupitarPose90,
	sPupitarPose91,
	sPupitarPose92,
	sPupitarPose93,
	sPupitarPose94,
	sPupitarPose95,
	sPupitarPose96,
};

static const struct PositionSets sAxPositionsPupitar[] = {
	[0] = { .set = { {-1, -7}, {-8, -12}, {6, -12}, {-1, -12} } },
	[1] = { .set = { {-1, -10}, {-8, -15}, {6, -15}, {-1, -15} } },
	[2] = { .set = { {-1, -6}, {-8, -10}, {6, -10}, {-1, -10} } },
	[3] = { .set = { {2, -7}, {6, -13}, {-6, -11}, {0, -12} } },
	[4] = { .set = { {2, -10}, {6, -16}, {-6, -14}, {0, -15} } },
	[5] = { .set = { {4, -7}, {7, -12}, {-5, -10}, {2, -11} } },
	[6] = { .set = { {3, -8}, {-1, -15}, {-3, -10}, {0, -12} } },
	[7] = { .set = { {2, -10}, {-1, -18}, {-3, -13}, {0, -15} } },
	[8] = { .set = { {3, -6}, {0, -14}, {-2, -9}, {1, -11} } },
	[9] = { .set = { {-1, -11}, {-8, -15}, {4, -11}, {-2, -13} } },
	[10] = { .set = { {-1, -14}, {-8, -18}, {4, -14}, {-2, -16} } },
	[11] = { .set = { {0, -11}, {-7, -14}, {5, -10}, {-1, -12} } },
	[12] = { .set = { {-1, -13}, {6, -12}, {-8, -12}, {-1, -12} } },
	[13] = { .set = { {-1, -16}, {6, -15}, {-8, -15}, {-1, -15} } },
	[14] = { .set = { {-1, -12}, {6, -10}, {-8, -10}, {-1, -11} } },
	[15] = { .set = { {-1, -11}, {6, -15}, {-6, -11}, {0, -13} } },
	[16] = { .set = { {-1, -14}, {6, -18}, {-6, -14}, {0, -16} } },
	[17] = { .set = { {-2, -11}, {5, -14}, {-7, -10}, {-1, -12} } },
	[18] = { .set = { {-5, -8}, {-1, -15}, {1, -10}, {-2, -12} } },
	[19] = { .set = { {-4, -10}, {-1, -18}, {1, -13}, {-2, -15} } },
	[20] = { .set = { {-5, -6}, {-2, -14}, {0, -9}, {-3, -11} } },
	[21] = { .set = { {-2, -7}, {-6, -13}, {6, -11}, {0, -12} } },
	[22] = { .set = { {-2, -10}, {-6, -16}, {6, -14}, {0, -15} } },
	[23] = { .set = { {-4, -7}, {-7, -12}, {5, -10}, {-2, -11} } },
	[24] = { .set = { {-1, -7}, {-8, -12}, {6, -12}, {-1, -12} } },
	[25] = { .set = { {-1, -8}, {-8, -13}, {6, -13}, {-1, -13} } },
	[26] = { .set = { {-1, -6}, {-8, -10}, {6, -10}, {-1, -10} } },
	[27] = { .set = { {2, -7}, {6, -13}, {-6, -11}, {0, -12} } },
	[28] = { .set = { {2, -8}, {6, -14}, {-6, -12}, {0, -13} } },
	[29] = { .set = { {3, -7}, {6, -12}, {-6, -10}, {1, -11} } },
	[30] = { .set = { {3, -8}, {-1, -15}, {-3, -10}, {0, -12} } },
	[31] = { .set = { {2, -8}, {-1, -16}, {-3, -11}, {0, -13} } },
	[32] = { .set = { {3, -6}, {0, -14}, {-2, -9}, {1, -11} } },
	[33] = { .set = { {-1, -11}, {-8, -15}, {4, -11}, {-2, -13} } },
	[34] = { .set = { {-1, -12}, {-8, -16}, {4, -12}, {-2, -14} } },
	[35] = { .set = { {-1, -11}, {-8, -14}, {4, -10}, {-2, -12} } },
	[36] = { .set = { {-1, -13}, {6, -12}, {-8, -12}, {-1, -12} } },
	[37] = { .set = { {-1, -14}, {6, -13}, {-8, -13}, {-1, -13} } },
	[38] = { .set = { {-1, -13}, {6, -11}, {-8, -11}, {-1, -12} } },
	[39] = { .set = { {-1, -11}, {6, -15}, {-6, -11}, {0, -13} } },
	[40] = { .set = { {-1, -12}, {6, -16}, {-6, -12}, {0, -14} } },
	[41] = { .set = { {-1, -11}, {6, -14}, {-6, -10}, {0, -12} } },
	[42] = { .set = { {-5, -8}, {-1, -15}, {1, -10}, {-2, -12} } },
	[43] = { .set = { {-4, -8}, {-1, -16}, {1, -11}, {-2, -13} } },
	[44] = { .set = { {-5, -6}, {-2, -14}, {0, -9}, {-3, -11} } },
	[45] = { .set = { {-2, -7}, {-6, -13}, {6, -11}, {0, -12} } },
	[46] = { .set = { {-2, -8}, {-6, -14}, {6, -12}, {0, -13} } },
	[47] = { .set = { {-3, -7}, {-6, -12}, {6, -10}, {-1, -11} } },
	[48] = { .set = { {-1, -7}, {-8, -12}, {6, -12}, {-1, -12} } },
	[49] = { .set = { {-1, -8}, {-8, -13}, {6, -13}, {-1, -13} } },
	[50] = { .set = { {-1, -6}, {-8, -10}, {6, -10}, {-1, -10} } },
	[51] = { .set = { {2, -7}, {6, -13}, {-6, -11}, {0, -12} } },
	[52] = { .set = { {2, -8}, {6, -14}, {-6, -12}, {0, -13} } },
	[53] = { .set = { {3, -7}, {6, -12}, {-6, -10}, {1, -11} } },
	[54] = { .set = { {3, -8}, {-1, -15}, {-3, -10}, {0, -12} } },
	[55] = { .set = { {2, -8}, {-1, -16}, {-3, -11}, {0, -13} } },
	[56] = { .set = { {3, -6}, {0, -14}, {-2, -9}, {1, -11} } },
	[57] = { .set = { {-1, -11}, {-8, -15}, {4, -11}, {-2, -13} } },
	[58] = { .set = { {-1, -12}, {-8, -16}, {4, -12}, {-2, -14} } },
	[59] = { .set = { {-1, -11}, {-8, -14}, {4, -10}, {-2, -12} } },
	[60] = { .set = { {-1, -13}, {6, -12}, {-8, -12}, {-1, -12} } },
	[61] = { .set = { {-1, -14}, {6, -13}, {-8, -13}, {-1, -13} } },
	[62] = { .set = { {-1, -13}, {6, -11}, {-8, -11}, {-1, -12} } },
	[63] = { .set = { {-1, -11}, {6, -15}, {-6, -11}, {0, -13} } },
	[64] = { .set = { {-1, -12}, {6, -16}, {-6, -12}, {0, -14} } },
	[65] = { .set = { {-1, -11}, {6, -14}, {-6, -10}, {0, -12} } },
	[66] = { .set = { {-5, -8}, {-1, -15}, {1, -10}, {-2, -12} } },
	[67] = { .set = { {-4, -8}, {-1, -16}, {1, -11}, {-2, -13} } },
	[68] = { .set = { {-5, -6}, {-2, -14}, {0, -9}, {-3, -11} } },
	[69] = { .set = { {-2, -7}, {-6, -13}, {6, -11}, {0, -12} } },
	[70] = { .set = { {-2, -8}, {-6, -14}, {6, -12}, {0, -13} } },
	[71] = { .set = { {-3, -7}, {-6, -12}, {6, -10}, {-1, -11} } },
	[72] = { .set = { {-1, -7}, {-8, -12}, {6, -12}, {-1, -12} } },
	[73] = { .set = { {-1, -11}, {-8, -15}, {6, -15}, {-1, -14} } },
	[74] = { .set = { {2, -7}, {6, -13}, {-6, -11}, {0, -12} } },
	[75] = { .set = { {2, -9}, {5, -15}, {-7, -13}, {0, -14} } },
	[76] = { .set = { {1, -8}, {-3, -15}, {-5, -10}, {-2, -12} } },
	[77] = { .set = { {3, -10}, {-3, -17}, {-4, -12}, {-1, -14} } },
	[78] = { .set = { {-1, -12}, {-8, -16}, {4, -12}, {-2, -14} } },
	[79] = { .set = { {2, -15}, {-8, -15}, {5, -12}, {-1, -12} } },
	[80] = { .set = { {-1, -14}, {6, -13}, {-8, -13}, {-1, -13} } },
	[81] = { .set = { {-1, -14}, {5, -15}, {-7, -15}, {-1, -13} } },
	[82] = { .set = { {-1, -12}, {6, -16}, {-6, -12}, {0, -14} } },
	[83] = { .set = { {-3, -15}, {7, -15}, {-6, -12}, {0, -12} } },
	[84] = { .set = { {-3, -8}, {1, -15}, {3, -10}, {0, -12} } },
	[85] = { .set = { {-4, -10}, {2, -17}, {3, -12}, {0, -14} } },
	[86] = { .set = { {-2, -7}, {-6, -13}, {6, -11}, {0, -12} } },
	[87] = { .set = { {-3, -9}, {-6, -15}, {6, -13}, {-1, -14} } },
	[88] = { .set = { {-1, -10}, {-8, -15}, {6, -15}, {-1, -15} } },
	[89] = { .set = { {-6, -10}, {-10, -16}, {2, -14}, {-4, -15} } },
	[90] = { .set = { {-7, -11}, {-3, -18}, {-1, -13}, {-4, -15} } },
	[91] = { .set = { {-4, -15}, {3, -19}, {-9, -15}, {-3, -17} } },
	[92] = { .set = { {-1, -18}, {6, -17}, {-8, -17}, {-1, -17} } },
	[93] = { .set = { {2, -15}, {-5, -19}, {7, -15}, {1, -17} } },
	[94] = { .set = { {5, -11}, {1, -18}, {-1, -13}, {2, -15} } },
	[95] = { .set = { {4, -10}, {8, -16}, {-4, -14}, {2, -15} } },
	[96] = { .set = { {-4, -12}, {-4, -16}, {5, -9}, {0, -13} } },
	[97] = { .set = { {-3, -11}, {-5, -16}, {6, -9}, {0, -13} } },
	[98] = { .set = { {-1, -8}, {-8, -13}, {6, -13}, {-1, -12} } },
	[99] = { .set = { {-1, -8}, {3, -14}, {-9, -12}, {-3, -13} } },
	[100] = { .set = { {1, -10}, {-8, -15}, {-8, -11}, {-5, -12} } },
	[101] = { .set = { {-4, -9}, {-11, -12}, {1, -8}, {-5, -9} } },
	[102] = { .set = { {0, -12}, {6, -11}, {-6, -11}, {0, -11} } },
	[103] = { .set = { {3, -9}, {10, -12}, {-2, -8}, {4, -9} } },
	[104] = { .set = { {-2, -10}, {7, -15}, {7, -11}, {4, -12} } },
	[105] = { .set = { {0, -8}, {-4, -14}, {8, -12}, {2, -13} } },
	[106] = { .set = { {-1, -7}, {-8, -12}, {6, -12}, {-1, -12} } },
	[107] = { .set = { {-1, -9}, {-8, -13}, {6, -13}, {-1, -12} } },
	[108] = { .set = { {2, -7}, {6, -13}, {-6, -11}, {0, -12} } },
	[109] = { .set = { {2, -8}, {5, -14}, {-7, -12}, {0, -13} } },
	[110] = { .set = { {1, -8}, {-3, -15}, {-5, -10}, {-2, -12} } },
	[111] = { .set = { {2, -9}, {-4, -16}, {-5, -11}, {-2, -13} } },
	[112] = { .set = { {-1, -12}, {-8, -16}, {4, -12}, {-2, -14} } },
	[113] = { .set = { {1, -15}, {-9, -15}, {4, -12}, {-2, -12} } },
	[114] = { .set = { {-1, -14}, {6, -13}, {-8, -13}, {-1, -13} } },
	[115] = { .set = { {-1, -14}, {5, -15}, {-7, -15}, {-1, -13} } },
	[116] = { .set = { {-1, -12}, {6, -16}, {-6, -12}, {0, -14} } },
	[117] = { .set = { {-2, -15}, {8, -15}, {-5, -12}, {1, -12} } },
	[118] = { .set = { {-3, -8}, {1, -15}, {3, -10}, {0, -12} } },
	[119] = { .set = { {-3, -9}, {3, -16}, {4, -11}, {1, -13} } },
	[120] = { .set = { {-2, -7}, {-6, -13}, {6, -11}, {0, -12} } },
	[121] = { .set = { {-3, -8}, {-6, -14}, {6, -12}, {-1, -13} } },
	[122] = { .set = { {-1, -7}, {-8, -12}, {6, -12}, {-1, -12} } },
	[123] = { .set = { {-2, -7}, {-6, -13}, {6, -11}, {0, -12} } },
	[124] = { .set = { {-3, -8}, {1, -15}, {3, -10}, {0, -12} } },
	[125] = { .set = { {-1, -12}, {6, -16}, {-6, -12}, {0, -14} } },
	[126] = { .set = { {-1, -14}, {-8, -13}, {6, -13}, {-1, -13} } },
	[127] = { .set = { {0, -12}, {-7, -16}, {5, -12}, {-1, -14} } },
	[128] = { .set = { {2, -8}, {-2, -15}, {-4, -10}, {-1, -12} } },
	[129] = { .set = { {1, -7}, {5, -13}, {-7, -11}, {-1, -12} } },
	[130] = { .set = { {-1, -10}, {-8, -14}, {6, -14}, {-1, -13} } },
	[131] = { .set = { {2, -9}, {5, -15}, {-7, -13}, {0, -14} } },
	[132] = { .set = { {3, -10}, {-3, -17}, {-4, -12}, {-1, -14} } },
	[133] = { .set = { {2, -15}, {-8, -15}, {5, -12}, {-1, -12} } },
	[134] = { .set = { {-1, -13}, {5, -14}, {-7, -14}, {-1, -12} } },
	[135] = { .set = { {-3, -15}, {7, -15}, {-6, -12}, {0, -12} } },
	[136] = { .set = { {-4, -10}, {2, -17}, {3, -12}, {0, -14} } },
	[137] = { .set = { {-3, -9}, {-6, -15}, {6, -13}, {-1, -14} } },
	[138] = { .set = { {-1, -7}, {-8, -12}, {6, -12}, {-1, -12} } },
	[139] = { .set = { {-1, -8}, {-8, -13}, {6, -13}, {-1, -13} } },
	[140] = { .set = { {-1, -6}, {-8, -10}, {6, -10}, {-1, -10} } },
	[141] = { .set = { {1, -7}, {5, -13}, {-7, -11}, {-1, -12} } },
	[142] = { .set = { {1, -7}, {5, -13}, {-7, -11}, {-1, -12} } },
	[143] = { .set = { {2, -6}, {5, -11}, {-7, -9}, {0, -10} } },
	[144] = { .set = { {2, -8}, {-2, -15}, {-4, -10}, {-1, -12} } },
	[145] = { .set = { {1, -8}, {-2, -16}, {-4, -11}, {-1, -13} } },
	[146] = { .set = { {1, -6}, {-2, -14}, {-4, -9}, {-1, -11} } },
	[147] = { .set = { {-1, -11}, {-8, -15}, {4, -11}, {-2, -13} } },
	[148] = { .set = { {-1, -12}, {-8, -16}, {4, -12}, {-2, -14} } },
	[149] = { .set = { {-1, -10}, {-8, -13}, {4, -9}, {-2, -11} } },
	[150] = { .set = { {-1, -13}, {6, -12}, {-8, -12}, {-1, -12} } },
	[151] = { .set = { {-1, -13}, {6, -12}, {-8, -12}, {-1, -12} } },
	[152] = { .set = { {-1, -13}, {6, -11}, {-8, -11}, {-1, -12} } },
	[153] = { .set = { {-1, -11}, {6, -15}, {-6, -11}, {0, -13} } },
	[154] = { .set = { {-1, -12}, {6, -16}, {-6, -12}, {0, -14} } },
	[155] = { .set = { {-1, -10}, {6, -13}, {-6, -9}, {0, -11} } },
	[156] = { .set = { {-3, -8}, {1, -15}, {3, -10}, {0, -12} } },
	[157] = { .set = { {-2, -8}, {1, -16}, {3, -11}, {0, -13} } },
	[158] = { .set = { {-2, -6}, {1, -14}, {3, -9}, {0, -11} } },
	[159] = { .set = { {-2, -7}, {-6, -13}, {6, -11}, {0, -12} } },
	[160] = { .set = { {-2, -7}, {-6, -13}, {6, -11}, {0, -12} } },
	[161] = { .set = { {-3, -7}, {-6, -12}, {6, -10}, {-1, -11} } },
	[162] = { .set = { {-1, -6}, {-8, -10}, {6, -10}, {-1, -10} } },
	[163] = { .set = { {-4, -6}, {-7, -11}, {5, -9}, {-2, -10} } },
	[164] = { .set = { {-3, -5}, {0, -13}, {2, -8}, {-1, -10} } },
	[165] = { .set = { {-1, -10}, {6, -13}, {-6, -9}, {0, -11} } },
	[166] = { .set = { {-1, -12}, {6, -10}, {-8, -10}, {-1, -11} } },
	[167] = { .set = { {0, -10}, {-7, -13}, {5, -9}, {-1, -11} } },
	[168] = { .set = { {2, -5}, {-1, -13}, {-3, -8}, {0, -10} } },
	[169] = { .set = { {3, -6}, {6, -11}, {-6, -9}, {1, -10} } },
	[170] = { .set = { {-1, -10}, {-8, -15}, {6, -15}, {-1, -15} } },
	[171] = { .set = { {-6, -10}, {-10, -16}, {2, -14}, {-4, -15} } },
	[172] = { .set = { {-7, -11}, {-3, -18}, {-1, -13}, {-4, -15} } },
	[173] = { .set = { {-4, -15}, {3, -19}, {-9, -15}, {-3, -17} } },
	[174] = { .set = { {-1, -18}, {6, -17}, {-8, -17}, {-1, -17} } },
	[175] = { .set = { {2, -15}, {-5, -19}, {7, -15}, {1, -17} } },
	[176] = { .set = { {5, -11}, {1, -18}, {-1, -13}, {2, -15} } },
	[177] = { .set = { {4, -10}, {8, -16}, {-4, -14}, {2, -15} } },
};

static const ax_anim *const sPupitarAnimTable1[] = {
	AX_ANIM_PTR(sPupitarAnims_1_1),
	AX_ANIM_PTR(sPupitarAnims_1_2),
	AX_ANIM_PTR(sPupitarAnims_1_3),
	AX_ANIM_PTR(sPupitarAnims_1_4),
	AX_ANIM_PTR(sPupitarAnims_1_5),
	AX_ANIM_PTR(sPupitarAnims_1_6),
	AX_ANIM_PTR(sPupitarAnims_1_7),
	AX_ANIM_PTR(sPupitarAnims_1_8),
};

static const ax_anim *const sPupitarAnimTable2[] = {
	AX_ANIM_PTR(sPupitarAnims_2_1),
	AX_ANIM_PTR(sPupitarAnims_2_2),
	AX_ANIM_PTR(sPupitarAnims_2_3),
	AX_ANIM_PTR(sPupitarAnims_2_4),
	AX_ANIM_PTR(sPupitarAnims_2_5),
	AX_ANIM_PTR(sPupitarAnims_2_6),
	AX_ANIM_PTR(sPupitarAnims_2_7),
	AX_ANIM_PTR(sPupitarAnims_2_8),
};

static const ax_anim *const sPupitarAnimTable3[] = {
	AX_ANIM_PTR(sPupitarAnims_3_1),
	AX_ANIM_PTR(sPupitarAnims_3_2),
	AX_ANIM_PTR(sPupitarAnims_3_3),
	AX_ANIM_PTR(sPupitarAnims_3_4),
	AX_ANIM_PTR(sPupitarAnims_3_5),
	AX_ANIM_PTR(sPupitarAnims_3_6),
	AX_ANIM_PTR(sPupitarAnims_3_7),
	AX_ANIM_PTR(sPupitarAnims_3_8),
};

static const ax_anim *const sPupitarAnimTable4[] = {
	AX_ANIM_PTR(sPupitarAnims_4_1),
	AX_ANIM_PTR(sPupitarAnims_4_2),
	AX_ANIM_PTR(sPupitarAnims_4_3),
	AX_ANIM_PTR(sPupitarAnims_4_4),
	AX_ANIM_PTR(sPupitarAnims_4_5),
	AX_ANIM_PTR(sPupitarAnims_4_6),
	AX_ANIM_PTR(sPupitarAnims_4_7),
	AX_ANIM_PTR(sPupitarAnims_4_8),
};

static const ax_anim *const sPupitarAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_02217),
	AX_ANIM_PTR(gAxSharedAnim_02284),
	AX_ANIM_PTR(gAxSharedAnim_02275),
	AX_ANIM_PTR(gAxSharedAnim_02268),
	AX_ANIM_PTR(gAxSharedAnim_02258),
	AX_ANIM_PTR(gAxSharedAnim_02246),
	AX_ANIM_PTR(gAxSharedAnim_02239),
	AX_ANIM_PTR(gAxSharedAnim_02229),
};

static const ax_anim *const sPupitarAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02704),
	AX_ANIM_PTR(gAxSharedAnim_02704),
	AX_ANIM_PTR(gAxSharedAnim_02704),
	AX_ANIM_PTR(gAxSharedAnim_02704),
	AX_ANIM_PTR(gAxSharedAnim_02704),
	AX_ANIM_PTR(gAxSharedAnim_02704),
	AX_ANIM_PTR(gAxSharedAnim_02704),
	AX_ANIM_PTR(gAxSharedAnim_02704),
};

static const ax_anim *const sPupitarAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_02309),
	AX_ANIM_PTR(gAxSharedAnim_02312),
	AX_ANIM_PTR(gAxSharedAnim_00152),
	AX_ANIM_PTR(gAxSharedAnim_00157),
	AX_ANIM_PTR(gAxSharedAnim_00164),
	AX_ANIM_PTR(gAxSharedAnim_00172),
	AX_ANIM_PTR(gAxSharedAnim_00179),
	AX_ANIM_PTR(gAxSharedAnim_00189),
};

static const ax_anim *const sPupitarAnimTable8[] = {
	AX_ANIM_PTR(sPupitarAnims_8_1),
	AX_ANIM_PTR(sPupitarAnims_8_2),
	AX_ANIM_PTR(sPupitarAnims_8_3),
	AX_ANIM_PTR(sPupitarAnims_8_4),
	AX_ANIM_PTR(sPupitarAnims_8_5),
	AX_ANIM_PTR(sPupitarAnims_8_6),
	AX_ANIM_PTR(sPupitarAnims_8_7),
	AX_ANIM_PTR(sPupitarAnims_8_8),
};

static const ax_anim *const sPupitarAnimTable9[] = {
	AX_ANIM_PTR(sPupitarAnims_9_1),
	AX_ANIM_PTR(sPupitarAnims_9_2),
	AX_ANIM_PTR(sPupitarAnims_9_3),
	AX_ANIM_PTR(sPupitarAnims_9_4),
	AX_ANIM_PTR(sPupitarAnims_9_5),
	AX_ANIM_PTR(sPupitarAnims_9_6),
	AX_ANIM_PTR(sPupitarAnims_9_7),
	AX_ANIM_PTR(sPupitarAnims_9_8),
};

static const ax_anim *const sPupitarAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00400),
	AX_ANIM_PTR(gAxSharedAnim_00408),
	AX_ANIM_PTR(gAxSharedAnim_00417),
	AX_ANIM_PTR(gAxSharedAnim_00426),
	AX_ANIM_PTR(gAxSharedAnim_00432),
	AX_ANIM_PTR(gAxSharedAnim_00439),
	AX_ANIM_PTR(gAxSharedAnim_00447),
	AX_ANIM_PTR(gAxSharedAnim_00458),
};

static const ax_anim *const sPupitarAnimTable11[] = {
	AX_ANIM_PTR(sPupitarAnims_11_1),
	AX_ANIM_PTR(sPupitarAnims_11_2),
	AX_ANIM_PTR(sPupitarAnims_11_3),
	AX_ANIM_PTR(sPupitarAnims_11_4),
	AX_ANIM_PTR(sPupitarAnims_11_5),
	AX_ANIM_PTR(sPupitarAnims_11_6),
	AX_ANIM_PTR(sPupitarAnims_11_7),
	AX_ANIM_PTR(sPupitarAnims_11_8),
};

static const ax_anim *const sPupitarAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_00707),
	AX_ANIM_PTR(gAxSharedAnim_00783),
	AX_ANIM_PTR(gAxSharedAnim_00765),
	AX_ANIM_PTR(gAxSharedAnim_00755),
	AX_ANIM_PTR(gAxSharedAnim_00754),
	AX_ANIM_PTR(gAxSharedAnim_00740),
	AX_ANIM_PTR(gAxSharedAnim_00719),
	AX_ANIM_PTR(gAxSharedAnim_00708),
};

static const ax_anim *const sPupitarAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_00803),
	AX_ANIM_PTR(gAxSharedAnim_00888),
	AX_ANIM_PTR(gAxSharedAnim_00881),
	AX_ANIM_PTR(gAxSharedAnim_00864),
	AX_ANIM_PTR(gAxSharedAnim_00851),
	AX_ANIM_PTR(gAxSharedAnim_00841),
	AX_ANIM_PTR(gAxSharedAnim_00830),
	AX_ANIM_PTR(gAxSharedAnim_00816),
};

static const ax_anim *const *const sAxAnimationsPupitar[] = {
	sPupitarAnimTable1,
	sPupitarAnimTable2,
	sPupitarAnimTable3,
	sPupitarAnimTable4,
	sPupitarAnimTable5,
	sPupitarAnimTable6,
	sPupitarAnimTable7,
	sPupitarAnimTable8,
	sPupitarAnimTable9,
	sPupitarAnimTable10,
	sPupitarAnimTable11,
	sPupitarAnimTable12,
	sPupitarAnimTable13,
};

static const ax_sprite *const sAxSpritesPupitar[] = {
	sPupitarSprites1,
	sPupitarSprites2,
	sPupitarSprites3,
	sPupitarSprites4,
	sPupitarSprites5,
	sPupitarSprites6,
	sPupitarSprites7,
	sPupitarSprites8,
	sPupitarSprites9,
	sPupitarSprites10,
	sPupitarSprites11,
	sPupitarSprites12,
	sPupitarSprites13,
	sPupitarSprites14,
	sPupitarSprites15,
	sPupitarSprites16,
	sPupitarSprites17,
	sPupitarSprites18,
	sPupitarSprites19,
	sPupitarSprites20,
	sPupitarSprites21,
	sPupitarSprites22,
	sPupitarSprites23,
	sPupitarSprites24,
	sPupitarSprites25,
	sPupitarSprites26,
	sPupitarSprites27,
	sPupitarSprites28,
	sPupitarSprites29,
	sPupitarSprites30,
	sPupitarSprites31,
};

static const axmain sAxMainPupitar = {
	.poses = sAxPosesPupitar,
	.animations = sAxAnimationsPupitar,
	.animCount = ARRAY_COUNT(sAxAnimationsPupitar),
	.spriteData = sAxSpritesPupitar,
	.positions = sAxPositionsPupitar,
};
