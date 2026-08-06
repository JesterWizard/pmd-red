/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainAerodactyl;
const SiroArchive gAxAerodactyl = {"SIRO", &sAxMainAerodactyl};

static const ax_pose sAerodactylPose1[] = {
	AX_POSE(0, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose2[] = {
	AX_POSE(1, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose3[] = {
	AX_POSE(2, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose4[] = {
	AX_POSE(3, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose5[] = {
	AX_POSE(4, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose6[] = {
	AX_POSE(5, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose7[] = {
	AX_POSE(6, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose8[] = {
	AX_POSE(7, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose9[] = {
	AX_POSE(8, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose10[] = {
	AX_POSE(9, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose11[] = {
	AX_POSE(10, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose12[] = {
	AX_POSE(11, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose13[] = {
	AX_POSE(12, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose14[] = {
	AX_POSE(13, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose15[] = {
	AX_POSE(14, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(15, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 2)),
	AX_POSE(16, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 2)),
	AX_POSE(17, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 2)),
	AX_POSE(18, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose16[] = {
	AX_POSE(9, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose17[] = {
	AX_POSE(10, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose18[] = {
	AX_POSE(11, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose19[] = {
	AX_POSE(6, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose20[] = {
	AX_POSE(7, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose21[] = {
	AX_POSE(8, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose22[] = {
	AX_POSE(3, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose23[] = {
	AX_POSE(4, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose24[] = {
	AX_POSE(5, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose28[] = {
	AX_POSE(19, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose32[] = {
	AX_POSE(20, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose36[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(22, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE(23, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(9, 3, 2)),
	AX_POSE(24, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(13, 3, 2)),
	AX_POSE(25, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(15, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose40[] = {
	AX_POSE(26, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose44[] = {
	AX_POSE(27, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose48[] = {
	AX_POSE(26, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose52[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(22, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(1, 3, 2)),
	AX_POSE(23, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(9, 3, 2)),
	AX_POSE(24, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 2)),
	AX_POSE(25, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose56[] = {
	AX_POSE(20, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose92[] = {
	AX_POSE(28, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose93[] = {
	AX_POSE(29, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose97[] = {
	AX_POSE(30, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose98[] = {
	AX_POSE(31, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose102[] = {
	AX_POSE(32, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose103[] = {
	AX_POSE(33, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(34, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(35, OAM1(232, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE(36, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 2)),
	AX_POSE(37, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(15, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose107[] = {
	AX_POSE(38, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose108[] = {
	AX_POSE(39, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose112[] = {
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose113[] = {
	AX_POSE(41, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose117[] = {
	AX_POSE(38, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose118[] = {
	AX_POSE(39, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose122[] = {
	AX_POSE(32, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose123[] = {
	AX_POSE(33, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(34, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 2)),
	AX_POSE(35, OAM1(232, ST_OAM_H_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 2)),
	AX_POSE(36, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 2)),
	AX_POSE(37, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose127[] = {
	AX_POSE(30, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose128[] = {
	AX_POSE(31, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose153[] = {
	AX_POSE(42, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose154[] = {
	AX_POSE(43, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose155[] = {
	AX_POSE(44, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose156[] = {
	AX_POSE(45, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose157[] = {
	AX_POSE(46, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose158[] = {
	AX_POSE(47, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose159[] = {
	AX_POSE(48, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose160[] = {
	AX_POSE(47, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose161[] = {
	AX_POSE(46, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose162[] = {
	AX_POSE(45, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose188[] = {
	AX_POSE(20, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose189[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(22, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(1, 3, 2)),
	AX_POSE(23, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(9, 3, 2)),
	AX_POSE(24, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 2)),
	AX_POSE(25, OAM1(249, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose193[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(22, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE(23, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(9, 3, 2)),
	AX_POSE(24, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(13, 3, 2)),
	AX_POSE(25, OAM1(249, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(15, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose194[] = {
	AX_POSE(20, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose196[] = {
	AX_POSE(31, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose197[] = {
	AX_POSE(33, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(34, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(35, OAM1(232, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE(36, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 2)),
	AX_POSE(37, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(15, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose199[] = {
	AX_POSE(41, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose201[] = {
	AX_POSE(33, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(34, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 2)),
	AX_POSE(35, OAM1(232, ST_OAM_H_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 2)),
	AX_POSE(36, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 2)),
	AX_POSE(37, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAerodactylPose202[] = {
	AX_POSE(31, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const u8 sAerodactylAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_2_1.lz");
static const u8 sAerodactylAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_2_2.lz");
static const u8 sAerodactylAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_2_3.lz");
static const u8 sAerodactylAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_2_4.lz");
static const u8 sAerodactylAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_2_5.lz");
static const u8 sAerodactylAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_2_6.lz");
static const u8 sAerodactylAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_2_7.lz");
static const u8 sAerodactylAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_2_8.lz");
static const u8 sAerodactylAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_3_1.lz");
static const u8 sAerodactylAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_3_2.lz");
static const u8 sAerodactylAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_3_3.lz");
static const u8 sAerodactylAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_3_4.lz");
static const u8 sAerodactylAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_3_5.lz");
static const u8 sAerodactylAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_3_6.lz");
static const u8 sAerodactylAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_3_7.lz");
static const u8 sAerodactylAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_3_8.lz");
static const u8 sAerodactylAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_4_1.lz");
static const u8 sAerodactylAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_4_2.lz");
static const u8 sAerodactylAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_4_3.lz");
static const u8 sAerodactylAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_4_4.lz");
static const u8 sAerodactylAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_4_5.lz");
static const u8 sAerodactylAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_4_6.lz");
static const u8 sAerodactylAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_4_7.lz");
static const u8 sAerodactylAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_4_8.lz");
static const u8 sAerodactylAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_5_1.lz");
static const u8 sAerodactylAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_5_2.lz");
static const u8 sAerodactylAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_5_3.lz");
static const u8 sAerodactylAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_5_4.lz");
static const u8 sAerodactylAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_5_5.lz");
static const u8 sAerodactylAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_5_6.lz");
static const u8 sAerodactylAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_5_7.lz");
static const u8 sAerodactylAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_5_8.lz");
static const u8 sAerodactylAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_8_1.lz");
static const u8 sAerodactylAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_8_2.lz");
static const u8 sAerodactylAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_8_3.lz");
static const u8 sAerodactylAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_8_4.lz");
static const u8 sAerodactylAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_8_5.lz");
static const u8 sAerodactylAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_8_6.lz");
static const u8 sAerodactylAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_8_7.lz");
static const u8 sAerodactylAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_8_8.lz");
static const u8 sAerodactylAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_9_1.lz");
static const u8 sAerodactylAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_9_2.lz");
static const u8 sAerodactylAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_9_3.lz");
static const u8 sAerodactylAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_9_4.lz");
static const u8 sAerodactylAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_9_5.lz");
static const u8 sAerodactylAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_9_6.lz");
static const u8 sAerodactylAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_9_7.lz");
static const u8 sAerodactylAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_9_8.lz");
static const u8 sAerodactylAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_11_1.lz");
static const u8 sAerodactylAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_11_2.lz");
static const u8 sAerodactylAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_11_3.lz");
static const u8 sAerodactylAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_11_4.lz");
static const u8 sAerodactylAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_11_5.lz");
static const u8 sAerodactylAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_11_6.lz");
static const u8 sAerodactylAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_11_7.lz");
static const u8 sAerodactylAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aerodactyl/sAerodactylAnims_11_8.lz");

static const u8 sAerodactylGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_1.4bpp.lz");
static const ax_sprite sAerodactylSprites1[] = {
	{sAerodactylGfx1, ARRAY_COUNT(sAerodactylGfx1)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_2.4bpp.lz");
static const ax_sprite sAerodactylSprites2[] = {
	{sAerodactylGfx2, ARRAY_COUNT(sAerodactylGfx2)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_3.4bpp.lz");
static const ax_sprite sAerodactylSprites3[] = {
	{sAerodactylGfx3, ARRAY_COUNT(sAerodactylGfx3)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_4.4bpp.lz");
static const ax_sprite sAerodactylSprites4[] = {
	{sAerodactylGfx4, ARRAY_COUNT(sAerodactylGfx4)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_5.4bpp.lz");
static const ax_sprite sAerodactylSprites5[] = {
	{sAerodactylGfx5, ARRAY_COUNT(sAerodactylGfx5)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_6.4bpp.lz");
static const ax_sprite sAerodactylSprites6[] = {
	{sAerodactylGfx6, ARRAY_COUNT(sAerodactylGfx6)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_7.4bpp.lz");
static const ax_sprite sAerodactylSprites7[] = {
	{sAerodactylGfx7, ARRAY_COUNT(sAerodactylGfx7)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_8.4bpp.lz");
static const ax_sprite sAerodactylSprites8[] = {
	{sAerodactylGfx8, ARRAY_COUNT(sAerodactylGfx8)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_9.4bpp.lz");
static const ax_sprite sAerodactylSprites9[] = {
	{sAerodactylGfx9, ARRAY_COUNT(sAerodactylGfx9)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_10.4bpp.lz");
static const ax_sprite sAerodactylSprites10[] = {
	{sAerodactylGfx10, ARRAY_COUNT(sAerodactylGfx10)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_11.4bpp.lz");
static const ax_sprite sAerodactylSprites11[] = {
	{sAerodactylGfx11, ARRAY_COUNT(sAerodactylGfx11)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_12.4bpp.lz");
static const ax_sprite sAerodactylSprites12[] = {
	{sAerodactylGfx12, ARRAY_COUNT(sAerodactylGfx12)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_13.4bpp.lz");
static const ax_sprite sAerodactylSprites13[] = {
	{sAerodactylGfx13, ARRAY_COUNT(sAerodactylGfx13)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_14.4bpp.lz");
static const ax_sprite sAerodactylSprites14[] = {
	{sAerodactylGfx14, ARRAY_COUNT(sAerodactylGfx14)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_15.4bpp.lz");
static const ax_sprite sAerodactylSprites15[] = {
	{sAerodactylGfx15, ARRAY_COUNT(sAerodactylGfx15)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_16.4bpp.lz");
static const ax_sprite sAerodactylSprites16[] = {
	{sAerodactylGfx16, ARRAY_COUNT(sAerodactylGfx16)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_17.4bpp.lz");
static const ax_sprite sAerodactylSprites17[] = {
	{sAerodactylGfx17, ARRAY_COUNT(sAerodactylGfx17)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_18.4bpp.lz");
static const ax_sprite sAerodactylSprites18[] = {
	{sAerodactylGfx18, ARRAY_COUNT(sAerodactylGfx18)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_19.4bpp.lz");
static const ax_sprite sAerodactylSprites19[] = {
	{sAerodactylGfx19, ARRAY_COUNT(sAerodactylGfx19)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_20.4bpp.lz");
static const u8 sAerodactylGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_20_1.4bpp.lz");
static const u8 sAerodactylGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_20_2.4bpp.lz");
static const ax_sprite sAerodactylSprites20[] = {
	{sAerodactylGfx20, ARRAY_COUNT(sAerodactylGfx20)}, 
	{NULL, 32}, 
	{sAerodactylGfx20_1, ARRAY_COUNT(sAerodactylGfx20_1)}, 
	{NULL, 64}, 
	{sAerodactylGfx20_2, ARRAY_COUNT(sAerodactylGfx20_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_21.4bpp.lz");
static const ax_sprite sAerodactylSprites21[] = {
	{sAerodactylGfx21, ARRAY_COUNT(sAerodactylGfx21)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_22.4bpp.lz");
static const ax_sprite sAerodactylSprites22[] = {
	{sAerodactylGfx22, ARRAY_COUNT(sAerodactylGfx22)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_23.4bpp.lz");
static const ax_sprite sAerodactylSprites23[] = {
	{sAerodactylGfx23, ARRAY_COUNT(sAerodactylGfx23)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_24.4bpp.lz");
static const ax_sprite sAerodactylSprites24[] = {
	{sAerodactylGfx24, ARRAY_COUNT(sAerodactylGfx24)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_25.4bpp.lz");
static const ax_sprite sAerodactylSprites25[] = {
	{sAerodactylGfx25, ARRAY_COUNT(sAerodactylGfx25)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_26.4bpp.lz");
static const ax_sprite sAerodactylSprites26[] = {
	{sAerodactylGfx26, ARRAY_COUNT(sAerodactylGfx26)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_27.4bpp.lz");
static const u8 sAerodactylGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_27_1.4bpp.lz");
static const ax_sprite sAerodactylSprites27[] = {
	{sAerodactylGfx27, ARRAY_COUNT(sAerodactylGfx27)}, 
	{NULL, 32}, 
	{sAerodactylGfx27_1, ARRAY_COUNT(sAerodactylGfx27_1)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_28.4bpp.lz");
static const u8 sAerodactylGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_28_1.4bpp.lz");
static const ax_sprite sAerodactylSprites28[] = {
	{NULL, 32}, 
	{sAerodactylGfx28, ARRAY_COUNT(sAerodactylGfx28)}, 
	{NULL, 32}, 
	{sAerodactylGfx28_1, ARRAY_COUNT(sAerodactylGfx28_1)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_29.4bpp.lz");
static const u8 sAerodactylGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_29_1.4bpp.lz");
static const ax_sprite sAerodactylSprites29[] = {
	{NULL, 32}, 
	{sAerodactylGfx29, ARRAY_COUNT(sAerodactylGfx29)}, 
	{NULL, 32}, 
	{sAerodactylGfx29_1, ARRAY_COUNT(sAerodactylGfx29_1)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_30.4bpp.lz");
static const u8 sAerodactylGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_30_1.4bpp.lz");
static const ax_sprite sAerodactylSprites30[] = {
	{sAerodactylGfx30, ARRAY_COUNT(sAerodactylGfx30)}, 
	{NULL, 32}, 
	{sAerodactylGfx30_1, ARRAY_COUNT(sAerodactylGfx30_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_31.4bpp.lz");
static const ax_sprite sAerodactylSprites31[] = {
	{NULL, 64}, 
	{sAerodactylGfx31, ARRAY_COUNT(sAerodactylGfx31)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_32.4bpp.lz");
static const u8 sAerodactylGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_32_1.4bpp.lz");
static const u8 sAerodactylGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_32_2.4bpp.lz");
static const u8 sAerodactylGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_32_3.4bpp.lz");
static const ax_sprite sAerodactylSprites32[] = {
	{sAerodactylGfx32, ARRAY_COUNT(sAerodactylGfx32)}, 
	{NULL, 32}, 
	{sAerodactylGfx32_1, ARRAY_COUNT(sAerodactylGfx32_1)}, 
	{NULL, 32}, 
	{sAerodactylGfx32_2, ARRAY_COUNT(sAerodactylGfx32_2)}, 
	{NULL, 32}, 
	{sAerodactylGfx32_3, ARRAY_COUNT(sAerodactylGfx32_3)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_33.4bpp.lz");
static const u8 sAerodactylGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_33_1.4bpp.lz");
static const ax_sprite sAerodactylSprites33[] = {
	{sAerodactylGfx33, ARRAY_COUNT(sAerodactylGfx33)}, 
	{NULL, 32}, 
	{sAerodactylGfx33_1, ARRAY_COUNT(sAerodactylGfx33_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_34.4bpp.lz");
static const ax_sprite sAerodactylSprites34[] = {
	{sAerodactylGfx34, ARRAY_COUNT(sAerodactylGfx34)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_35.4bpp.lz");
static const ax_sprite sAerodactylSprites35[] = {
	{sAerodactylGfx35, ARRAY_COUNT(sAerodactylGfx35)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_36.4bpp.lz");
static const ax_sprite sAerodactylSprites36[] = {
	{sAerodactylGfx36, ARRAY_COUNT(sAerodactylGfx36)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_37.4bpp.lz");
static const ax_sprite sAerodactylSprites37[] = {
	{sAerodactylGfx37, ARRAY_COUNT(sAerodactylGfx37)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_38.4bpp.lz");
static const ax_sprite sAerodactylSprites38[] = {
	{sAerodactylGfx38, ARRAY_COUNT(sAerodactylGfx38)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_39.4bpp.lz");
static const u8 sAerodactylGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_39_1.4bpp.lz");
static const u8 sAerodactylGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_39_2.4bpp.lz");
static const ax_sprite sAerodactylSprites39[] = {
	{NULL, 32}, 
	{sAerodactylGfx39, ARRAY_COUNT(sAerodactylGfx39)}, 
	{NULL, 32}, 
	{sAerodactylGfx39_1, ARRAY_COUNT(sAerodactylGfx39_1)}, 
	{NULL, 32}, 
	{sAerodactylGfx39_2, ARRAY_COUNT(sAerodactylGfx39_2)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_40.4bpp.lz");
static const ax_sprite sAerodactylSprites40[] = {
	{NULL, 64}, 
	{sAerodactylGfx40, ARRAY_COUNT(sAerodactylGfx40)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_41.4bpp.lz");
static const u8 sAerodactylGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_41_1.4bpp.lz");
static const u8 sAerodactylGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_41_2.4bpp.lz");
static const ax_sprite sAerodactylSprites41[] = {
	{sAerodactylGfx41, ARRAY_COUNT(sAerodactylGfx41)}, 
	{NULL, 64}, 
	{sAerodactylGfx41_1, ARRAY_COUNT(sAerodactylGfx41_1)}, 
	{NULL, 32}, 
	{sAerodactylGfx41_2, ARRAY_COUNT(sAerodactylGfx41_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_42.4bpp.lz");
static const ax_sprite sAerodactylSprites42[] = {
	{sAerodactylGfx42, ARRAY_COUNT(sAerodactylGfx42)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_43.4bpp.lz");
static const ax_sprite sAerodactylSprites43[] = {
	{sAerodactylGfx43, ARRAY_COUNT(sAerodactylGfx43)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_44.4bpp.lz");
static const ax_sprite sAerodactylSprites44[] = {
	{sAerodactylGfx44, ARRAY_COUNT(sAerodactylGfx44)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_45.4bpp.lz");
static const ax_sprite sAerodactylSprites45[] = {
	{sAerodactylGfx45, ARRAY_COUNT(sAerodactylGfx45)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_46.4bpp.lz");
static const ax_sprite sAerodactylSprites46[] = {
	{sAerodactylGfx46, ARRAY_COUNT(sAerodactylGfx46)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_47.4bpp.lz");
static const ax_sprite sAerodactylSprites47[] = {
	{sAerodactylGfx47, ARRAY_COUNT(sAerodactylGfx47)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_48.4bpp.lz");
static const ax_sprite sAerodactylSprites48[] = {
	{sAerodactylGfx48, ARRAY_COUNT(sAerodactylGfx48)}, 
	{NULL, 0}
};
static const u8 sAerodactylGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aerodactyl/sprite_49.4bpp.lz");
static const ax_sprite sAerodactylSprites49[] = {
	{sAerodactylGfx49, ARRAY_COUNT(sAerodactylGfx49)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesAerodactyl[] = {
	sAerodactylPose1,
	sAerodactylPose2,
	sAerodactylPose3,
	sAerodactylPose4,
	sAerodactylPose5,
	sAerodactylPose6,
	sAerodactylPose7,
	sAerodactylPose8,
	sAerodactylPose9,
	sAerodactylPose10,
	sAerodactylPose11,
	sAerodactylPose12,
	sAerodactylPose13,
	sAerodactylPose14,
	sAerodactylPose15,
	sAerodactylPose16,
	sAerodactylPose17,
	sAerodactylPose18,
	sAerodactylPose19,
	sAerodactylPose20,
	sAerodactylPose21,
	sAerodactylPose22,
	sAerodactylPose23,
	sAerodactylPose24,
	sAerodactylPose1,
	sAerodactylPose2,
	sAerodactylPose3,
	sAerodactylPose28,
	sAerodactylPose4,
	sAerodactylPose5,
	sAerodactylPose6,
	sAerodactylPose32,
	sAerodactylPose7,
	sAerodactylPose8,
	sAerodactylPose9,
	sAerodactylPose36,
	sAerodactylPose10,
	sAerodactylPose11,
	sAerodactylPose12,
	sAerodactylPose40,
	sAerodactylPose13,
	sAerodactylPose14,
	sAerodactylPose15,
	sAerodactylPose44,
	sAerodactylPose16,
	sAerodactylPose17,
	sAerodactylPose18,
	sAerodactylPose48,
	sAerodactylPose19,
	sAerodactylPose20,
	sAerodactylPose21,
	sAerodactylPose52,
	sAerodactylPose22,
	sAerodactylPose23,
	sAerodactylPose24,
	sAerodactylPose56,
	sAerodactylPose1,
	sAerodactylPose2,
	sAerodactylPose3,
	sAerodactylPose28,
	sAerodactylPose4,
	sAerodactylPose5,
	sAerodactylPose6,
	sAerodactylPose32,
	sAerodactylPose7,
	sAerodactylPose8,
	sAerodactylPose9,
	sAerodactylPose36,
	sAerodactylPose10,
	sAerodactylPose11,
	sAerodactylPose12,
	sAerodactylPose40,
	sAerodactylPose13,
	sAerodactylPose14,
	sAerodactylPose15,
	sAerodactylPose44,
	sAerodactylPose16,
	sAerodactylPose17,
	sAerodactylPose18,
	sAerodactylPose48,
	sAerodactylPose19,
	sAerodactylPose20,
	sAerodactylPose21,
	sAerodactylPose52,
	sAerodactylPose22,
	sAerodactylPose23,
	sAerodactylPose24,
	sAerodactylPose56,
	sAerodactylPose1,
	sAerodactylPose2,
	sAerodactylPose3,
	sAerodactylPose92,
	sAerodactylPose93,
	sAerodactylPose4,
	sAerodactylPose5,
	sAerodactylPose6,
	sAerodactylPose97,
	sAerodactylPose98,
	sAerodactylPose7,
	sAerodactylPose8,
	sAerodactylPose9,
	sAerodactylPose102,
	sAerodactylPose103,
	sAerodactylPose10,
	sAerodactylPose11,
	sAerodactylPose12,
	sAerodactylPose107,
	sAerodactylPose108,
	sAerodactylPose13,
	sAerodactylPose14,
	sAerodactylPose44,
	sAerodactylPose112,
	sAerodactylPose113,
	sAerodactylPose16,
	sAerodactylPose17,
	sAerodactylPose18,
	sAerodactylPose117,
	sAerodactylPose118,
	sAerodactylPose19,
	sAerodactylPose20,
	sAerodactylPose21,
	sAerodactylPose122,
	sAerodactylPose123,
	sAerodactylPose22,
	sAerodactylPose23,
	sAerodactylPose24,
	sAerodactylPose127,
	sAerodactylPose128,
	sAerodactylPose1,
	sAerodactylPose2,
	sAerodactylPose3,
	sAerodactylPose4,
	sAerodactylPose5,
	sAerodactylPose6,
	sAerodactylPose7,
	sAerodactylPose8,
	sAerodactylPose9,
	sAerodactylPose10,
	sAerodactylPose11,
	sAerodactylPose12,
	sAerodactylPose13,
	sAerodactylPose14,
	sAerodactylPose15,
	sAerodactylPose16,
	sAerodactylPose17,
	sAerodactylPose18,
	sAerodactylPose19,
	sAerodactylPose20,
	sAerodactylPose21,
	sAerodactylPose22,
	sAerodactylPose23,
	sAerodactylPose24,
	sAerodactylPose153,
	sAerodactylPose154,
	sAerodactylPose155,
	sAerodactylPose156,
	sAerodactylPose157,
	sAerodactylPose158,
	sAerodactylPose159,
	sAerodactylPose160,
	sAerodactylPose161,
	sAerodactylPose162,
	sAerodactylPose1,
	sAerodactylPose2,
	sAerodactylPose3,
	sAerodactylPose4,
	sAerodactylPose5,
	sAerodactylPose6,
	sAerodactylPose7,
	sAerodactylPose8,
	sAerodactylPose9,
	sAerodactylPose10,
	sAerodactylPose11,
	sAerodactylPose12,
	sAerodactylPose13,
	sAerodactylPose14,
	sAerodactylPose15,
	sAerodactylPose16,
	sAerodactylPose17,
	sAerodactylPose18,
	sAerodactylPose19,
	sAerodactylPose20,
	sAerodactylPose21,
	sAerodactylPose22,
	sAerodactylPose23,
	sAerodactylPose24,
	sAerodactylPose28,
	sAerodactylPose188,
	sAerodactylPose189,
	sAerodactylPose48,
	sAerodactylPose44,
	sAerodactylPose40,
	sAerodactylPose193,
	sAerodactylPose194,
	sAerodactylPose93,
	sAerodactylPose196,
	sAerodactylPose197,
	sAerodactylPose108,
	sAerodactylPose199,
	sAerodactylPose118,
	sAerodactylPose201,
	sAerodactylPose202,
	sAerodactylPose1,
	sAerodactylPose3,
	sAerodactylPose2,
	sAerodactylPose4,
	sAerodactylPose6,
	sAerodactylPose5,
	sAerodactylPose7,
	sAerodactylPose8,
	sAerodactylPose9,
	sAerodactylPose10,
	sAerodactylPose11,
	sAerodactylPose12,
	sAerodactylPose13,
	sAerodactylPose14,
	sAerodactylPose15,
	sAerodactylPose16,
	sAerodactylPose17,
	sAerodactylPose18,
	sAerodactylPose19,
	sAerodactylPose20,
	sAerodactylPose21,
	sAerodactylPose22,
	sAerodactylPose23,
	sAerodactylPose24,
	sAerodactylPose2,
	sAerodactylPose23,
	sAerodactylPose20,
	sAerodactylPose17,
	sAerodactylPose14,
	sAerodactylPose11,
	sAerodactylPose8,
	sAerodactylPose5,
	sAerodactylPose5,
	sAerodactylPose8,
	sAerodactylPose5,
	sAerodactylPose11,
	sAerodactylPose8,
	sAerodactylPose5,
	sAerodactylPose14,
	sAerodactylPose11,
	sAerodactylPose8,
	sAerodactylPose5,
	sAerodactylPose17,
	sAerodactylPose14,
	sAerodactylPose11,
	sAerodactylPose8,
	sAerodactylPose5,
	sAerodactylPose20,
	sAerodactylPose17,
	sAerodactylPose14,
	sAerodactylPose11,
	sAerodactylPose8,
	sAerodactylPose5,
	sAerodactylPose23,
	sAerodactylPose20,
	sAerodactylPose17,
	sAerodactylPose14,
	sAerodactylPose11,
	sAerodactylPose8,
	sAerodactylPose5,
	sAerodactylPose1,
	sAerodactylPose22,
	sAerodactylPose19,
	sAerodactylPose16,
	sAerodactylPose13,
	sAerodactylPose10,
	sAerodactylPose7,
	sAerodactylPose4,
};

static const struct PositionSets sAxPositionsAerodactyl[] = {
	[0] = { .set = { {-1, -9}, {-11, -25}, {11, -26}, {0, -13} } },
	[1] = { .set = { {-1, -7}, {-8, -27}, {7, -27}, {0, -10} } },
	[2] = { .set = { {-1, -11}, {-12, -8}, {11, -8}, {0, -14} } },
	[3] = { .set = { {5, -13}, {2, -30}, {-12, -22}, {0, -14} } },
	[4] = { .set = { {7, -10}, {1, -29}, {-9, -26}, {-1, -12} } },
	[5] = { .set = { {5, -15}, {9, -9}, {-8, -7}, {0, -14} } },
	[6] = { .set = { {9, -15}, {-7, -30}, {-10, -19}, {-1, -16} } },
	[7] = { .set = { {12, -12}, {-8, -30}, {-8, -23}, {0, -14} } },
	[8] = { .set = { {9, -16}, {0, -12}, {-4, -4}, {-2, -15} } },
	[9] = { .set = { {7, -18}, {-12, -27}, {4, -15}, {-1, -14} } },
	[10] = { .set = { {9, -18}, {-11, -29}, {4, -20}, {-1, -13} } },
	[11] = { .set = { {8, -21}, {-10, -14}, {10, -3}, {-1, -15} } },
	[12] = { .set = { {-1, -20}, {13, -18}, {-14, -18}, {-1, -14} } },
	[13] = { .set = { {-1, -18}, {12, -27}, {-13, -27}, {-1, -14} } },
	[14] = { .set = { {0, -22}, {11, -5}, {-12, -6}, {0, -16} } },
	[15] = { .set = { {-8, -18}, {11, -27}, {-5, -15}, {0, -14} } },
	[16] = { .set = { {-10, -18}, {10, -29}, {-5, -20}, {0, -13} } },
	[17] = { .set = { {-9, -21}, {9, -14}, {-11, -3}, {0, -15} } },
	[18] = { .set = { {-10, -15}, {6, -30}, {9, -19}, {0, -16} } },
	[19] = { .set = { {-13, -12}, {7, -30}, {7, -23}, {-1, -14} } },
	[20] = { .set = { {-10, -16}, {-1, -12}, {3, -4}, {1, -15} } },
	[21] = { .set = { {-6, -13}, {-3, -30}, {11, -22}, {-1, -14} } },
	[22] = { .set = { {-8, -10}, {-2, -29}, {8, -26}, {0, -12} } },
	[23] = { .set = { {-6, -15}, {-10, -9}, {7, -7}, {-1, -14} } },
	[24] = { .set = { {-1, -9}, {-11, -25}, {11, -26}, {0, -13} } },
	[25] = { .set = { {-1, -7}, {-8, -27}, {7, -27}, {0, -10} } },
	[26] = { .set = { {-1, -11}, {-12, -8}, {11, -8}, {0, -14} } },
	[27] = { .set = { {-1, -6}, {-11, -25}, {10, -25}, {-1, -17} } },
	[28] = { .set = { {5, -13}, {2, -30}, {-12, -22}, {0, -14} } },
	[29] = { .set = { {7, -10}, {1, -29}, {-9, -26}, {-1, -12} } },
	[30] = { .set = { {5, -15}, {9, -9}, {-8, -7}, {0, -14} } },
	[31] = { .set = { {5, -7}, {5, -24}, {-15, -19}, {0, -15} } },
	[32] = { .set = { {9, -15}, {-7, -30}, {-10, -19}, {-1, -16} } },
	[33] = { .set = { {12, -12}, {-8, -30}, {-8, -23}, {0, -14} } },
	[34] = { .set = { {9, -16}, {0, -12}, {-4, -4}, {-2, -15} } },
	[35] = { .set = { {10, -11}, {-6, -23}, {-14, -10}, {0, -13} } },
	[36] = { .set = { {7, -18}, {-12, -27}, {4, -15}, {-1, -14} } },
	[37] = { .set = { {9, -18}, {-11, -29}, {4, -20}, {-1, -13} } },
	[38] = { .set = { {8, -21}, {-10, -14}, {10, -3}, {-1, -15} } },
	[39] = { .set = { {9, -21}, {-13, -19}, {5, -4}, {1, -15} } },
	[40] = { .set = { {-1, -20}, {13, -18}, {-14, -18}, {-1, -14} } },
	[41] = { .set = { {-1, -18}, {12, -27}, {-13, -27}, {-1, -14} } },
	[42] = { .set = { {0, -22}, {11, -5}, {-12, -6}, {0, -16} } },
	[43] = { .set = { {0, -22}, {13, -10}, {-14, -10}, {0, -15} } },
	[44] = { .set = { {-8, -18}, {11, -27}, {-5, -15}, {0, -14} } },
	[45] = { .set = { {-10, -18}, {10, -29}, {-5, -20}, {0, -13} } },
	[46] = { .set = { {-9, -21}, {9, -14}, {-11, -3}, {0, -15} } },
	[47] = { .set = { {-10, -21}, {12, -19}, {-6, -4}, {-2, -15} } },
	[48] = { .set = { {-10, -15}, {6, -30}, {9, -19}, {0, -16} } },
	[49] = { .set = { {-13, -12}, {7, -30}, {7, -23}, {-1, -14} } },
	[50] = { .set = { {-10, -16}, {-1, -12}, {3, -4}, {1, -15} } },
	[51] = { .set = { {-11, -11}, {5, -23}, {13, -10}, {-1, -13} } },
	[52] = { .set = { {-6, -13}, {-3, -30}, {11, -22}, {-1, -14} } },
	[53] = { .set = { {-8, -10}, {-2, -29}, {8, -26}, {0, -12} } },
	[54] = { .set = { {-6, -15}, {-10, -9}, {7, -7}, {-1, -14} } },
	[55] = { .set = { {-6, -7}, {-6, -24}, {14, -19}, {-1, -15} } },
	[56] = { .set = { {-1, -9}, {-11, -25}, {11, -26}, {0, -13} } },
	[57] = { .set = { {-1, -7}, {-8, -27}, {7, -27}, {0, -10} } },
	[58] = { .set = { {-1, -11}, {-12, -8}, {11, -8}, {0, -14} } },
	[59] = { .set = { {-1, -6}, {-11, -25}, {10, -25}, {-1, -17} } },
	[60] = { .set = { {5, -13}, {2, -30}, {-12, -22}, {0, -14} } },
	[61] = { .set = { {7, -10}, {1, -29}, {-9, -26}, {-1, -12} } },
	[62] = { .set = { {5, -15}, {9, -9}, {-8, -7}, {0, -14} } },
	[63] = { .set = { {5, -7}, {5, -24}, {-15, -19}, {0, -15} } },
	[64] = { .set = { {9, -15}, {-7, -30}, {-10, -19}, {-1, -16} } },
	[65] = { .set = { {12, -12}, {-8, -30}, {-8, -23}, {0, -14} } },
	[66] = { .set = { {9, -16}, {0, -12}, {-4, -4}, {-2, -15} } },
	[67] = { .set = { {10, -11}, {-6, -23}, {-14, -10}, {0, -13} } },
	[68] = { .set = { {7, -18}, {-12, -27}, {4, -15}, {-1, -14} } },
	[69] = { .set = { {9, -18}, {-11, -29}, {4, -20}, {-1, -13} } },
	[70] = { .set = { {8, -21}, {-10, -14}, {10, -3}, {-1, -15} } },
	[71] = { .set = { {9, -21}, {-13, -19}, {5, -4}, {1, -15} } },
	[72] = { .set = { {-1, -20}, {13, -18}, {-14, -18}, {-1, -14} } },
	[73] = { .set = { {-1, -18}, {12, -27}, {-13, -27}, {-1, -14} } },
	[74] = { .set = { {0, -22}, {11, -5}, {-12, -6}, {0, -16} } },
	[75] = { .set = { {0, -22}, {13, -10}, {-14, -10}, {0, -15} } },
	[76] = { .set = { {-8, -18}, {11, -27}, {-5, -15}, {0, -14} } },
	[77] = { .set = { {-10, -18}, {10, -29}, {-5, -20}, {0, -13} } },
	[78] = { .set = { {-9, -21}, {9, -14}, {-11, -3}, {0, -15} } },
	[79] = { .set = { {-10, -21}, {12, -19}, {-6, -4}, {-2, -15} } },
	[80] = { .set = { {-10, -15}, {6, -30}, {9, -19}, {0, -16} } },
	[81] = { .set = { {-13, -12}, {7, -30}, {7, -23}, {-1, -14} } },
	[82] = { .set = { {-10, -16}, {-1, -12}, {3, -4}, {1, -15} } },
	[83] = { .set = { {-11, -11}, {5, -23}, {13, -10}, {-1, -13} } },
	[84] = { .set = { {-6, -13}, {-3, -30}, {11, -22}, {-1, -14} } },
	[85] = { .set = { {-8, -10}, {-2, -29}, {8, -26}, {0, -12} } },
	[86] = { .set = { {-6, -15}, {-10, -9}, {7, -7}, {-1, -14} } },
	[87] = { .set = { {-6, -7}, {-6, -24}, {14, -19}, {-1, -15} } },
	[88] = { .set = { {-1, -9}, {-11, -25}, {11, -26}, {0, -13} } },
	[89] = { .set = { {-1, -7}, {-8, -27}, {7, -27}, {0, -10} } },
	[90] = { .set = { {-1, -11}, {-12, -8}, {11, -8}, {0, -14} } },
	[91] = { .set = { {0, -29}, {-11, -11}, {10, -11}, {-1, -16} } },
	[92] = { .set = { {0, -5}, {-13, -23}, {12, -23}, {0, -14} } },
	[93] = { .set = { {5, -13}, {2, -30}, {-12, -22}, {0, -14} } },
	[94] = { .set = { {7, -10}, {1, -29}, {-9, -26}, {-1, -12} } },
	[95] = { .set = { {5, -15}, {9, -9}, {-8, -7}, {0, -14} } },
	[96] = { .set = { {-9, -31}, {11, -14}, {-7, -5}, {-1, -18} } },
	[97] = { .set = { {8, -8}, {14, -29}, {-12, -23}, {1, -16} } },
	[98] = { .set = { {9, -15}, {-7, -30}, {-10, -19}, {-1, -16} } },
	[99] = { .set = { {12, -12}, {-8, -30}, {-8, -23}, {0, -14} } },
	[100] = { .set = { {9, -16}, {0, -12}, {-4, -4}, {-2, -15} } },
	[101] = { .set = { {-14, -23}, {10, -21}, {7, -12}, {0, -18} } },
	[102] = { .set = { {11, -10}, {1, -31}, {-4, -21}, {0, -13} } },
	[103] = { .set = { {7, -18}, {-12, -27}, {4, -15}, {-1, -14} } },
	[104] = { .set = { {9, -18}, {-11, -29}, {4, -20}, {-1, -13} } },
	[105] = { .set = { {8, -21}, {-10, -14}, {10, -3}, {-1, -15} } },
	[106] = { .set = { {-11, -11}, {2, -28}, {12, -16}, {-1, -16} } },
	[107] = { .set = { {8, -16}, {-11, -29}, {13, -8}, {0, -15} } },
	[108] = { .set = { {-1, -20}, {13, -18}, {-14, -18}, {-1, -14} } },
	[109] = { .set = { {-1, -18}, {12, -27}, {-13, -27}, {-1, -14} } },
	[110] = { .set = { {0, -22}, {13, -10}, {-14, -10}, {0, -15} } },
	[111] = { .set = { {0, -6}, {10, -23}, {-11, -23}, {0, -13} } },
	[112] = { .set = { {-1, -22}, {13, -23}, {-14, -23}, {0, -16} } },
	[113] = { .set = { {-8, -18}, {11, -27}, {-5, -15}, {0, -14} } },
	[114] = { .set = { {-10, -18}, {10, -29}, {-5, -20}, {0, -13} } },
	[115] = { .set = { {-9, -21}, {9, -14}, {-11, -3}, {0, -15} } },
	[116] = { .set = { {10, -11}, {-3, -28}, {-13, -16}, {0, -16} } },
	[117] = { .set = { {-9, -16}, {10, -29}, {-14, -8}, {-1, -15} } },
	[118] = { .set = { {-10, -15}, {6, -30}, {9, -19}, {0, -16} } },
	[119] = { .set = { {-13, -12}, {7, -30}, {7, -23}, {-1, -14} } },
	[120] = { .set = { {-10, -16}, {-1, -12}, {3, -4}, {1, -15} } },
	[121] = { .set = { {13, -23}, {-11, -21}, {-8, -12}, {-1, -18} } },
	[122] = { .set = { {-12, -10}, {-2, -31}, {3, -21}, {-1, -13} } },
	[123] = { .set = { {-6, -13}, {-3, -30}, {11, -22}, {-1, -14} } },
	[124] = { .set = { {-8, -10}, {-2, -29}, {8, -26}, {0, -12} } },
	[125] = { .set = { {-6, -15}, {-10, -9}, {7, -7}, {-1, -14} } },
	[126] = { .set = { {8, -31}, {-12, -14}, {6, -5}, {0, -18} } },
	[127] = { .set = { {-9, -8}, {-15, -29}, {11, -23}, {-2, -16} } },
	[128] = { .set = { {-1, -9}, {-11, -25}, {11, -26}, {0, -13} } },
	[129] = { .set = { {-1, -7}, {-8, -27}, {7, -27}, {0, -10} } },
	[130] = { .set = { {-1, -11}, {-12, -8}, {11, -8}, {0, -14} } },
	[131] = { .set = { {5, -13}, {2, -30}, {-12, -22}, {0, -14} } },
	[132] = { .set = { {7, -10}, {1, -29}, {-9, -26}, {-1, -12} } },
	[133] = { .set = { {5, -15}, {9, -9}, {-8, -7}, {0, -14} } },
	[134] = { .set = { {9, -15}, {-7, -30}, {-10, -19}, {-1, -16} } },
	[135] = { .set = { {12, -12}, {-8, -30}, {-8, -23}, {0, -14} } },
	[136] = { .set = { {9, -16}, {0, -12}, {-4, -4}, {-2, -15} } },
	[137] = { .set = { {7, -18}, {-12, -27}, {4, -15}, {-1, -14} } },
	[138] = { .set = { {9, -18}, {-11, -29}, {4, -20}, {-1, -13} } },
	[139] = { .set = { {8, -21}, {-10, -14}, {10, -3}, {-1, -15} } },
	[140] = { .set = { {-1, -20}, {13, -18}, {-14, -18}, {-1, -14} } },
	[141] = { .set = { {-1, -18}, {12, -27}, {-13, -27}, {-1, -14} } },
	[142] = { .set = { {0, -22}, {11, -5}, {-12, -6}, {0, -16} } },
	[143] = { .set = { {-8, -18}, {11, -27}, {-5, -15}, {0, -14} } },
	[144] = { .set = { {-10, -18}, {10, -29}, {-5, -20}, {0, -13} } },
	[145] = { .set = { {-9, -21}, {9, -14}, {-11, -3}, {0, -15} } },
	[146] = { .set = { {-10, -15}, {6, -30}, {9, -19}, {0, -16} } },
	[147] = { .set = { {-13, -12}, {7, -30}, {7, -23}, {-1, -14} } },
	[148] = { .set = { {-10, -16}, {-1, -12}, {3, -4}, {1, -15} } },
	[149] = { .set = { {-6, -13}, {-3, -30}, {11, -22}, {-1, -14} } },
	[150] = { .set = { {-8, -10}, {-2, -29}, {8, -26}, {0, -12} } },
	[151] = { .set = { {-6, -15}, {-10, -9}, {7, -7}, {-1, -14} } },
	[152] = { .set = { {-6, -7}, {-11, -3}, {7, 1}, {-1, -7} } },
	[153] = { .set = { {-7, -6}, {-11, -1}, {6, 3}, {-1, -6} } },
	[154] = { .set = { {3, -8}, {-13, -22}, {5, -29}, {2, -12} } },
	[155] = { .set = { {2, -9}, {14, -23}, {-8, -30}, {-1, -14} } },
	[156] = { .set = { {5, -6}, {7, -27}, {-2, -30}, {0, -14} } },
	[157] = { .set = { {8, -9}, {-6, -27}, {6, -29}, {0, -14} } },
	[158] = { .set = { {2, -18}, {14, -25}, {-8, -29}, {1, -15} } },
	[159] = { .set = { {-7, -9}, {7, -27}, {-5, -29}, {1, -14} } },
	[160] = { .set = { {-6, -6}, {-8, -27}, {1, -30}, {-1, -14} } },
	[161] = { .set = { {-3, -9}, {-15, -23}, {7, -30}, {0, -14} } },
	[162] = { .set = { {-1, -9}, {-11, -25}, {11, -26}, {0, -13} } },
	[163] = { .set = { {-1, -7}, {-8, -27}, {7, -27}, {0, -10} } },
	[164] = { .set = { {-1, -11}, {-12, -8}, {11, -8}, {0, -14} } },
	[165] = { .set = { {5, -13}, {2, -30}, {-12, -22}, {0, -14} } },
	[166] = { .set = { {7, -10}, {1, -29}, {-9, -26}, {-1, -12} } },
	[167] = { .set = { {5, -15}, {9, -9}, {-8, -7}, {0, -14} } },
	[168] = { .set = { {9, -15}, {-7, -30}, {-10, -19}, {-1, -16} } },
	[169] = { .set = { {12, -12}, {-8, -30}, {-8, -23}, {0, -14} } },
	[170] = { .set = { {9, -16}, {0, -12}, {-4, -4}, {-2, -15} } },
	[171] = { .set = { {7, -18}, {-12, -27}, {4, -15}, {-1, -14} } },
	[172] = { .set = { {9, -18}, {-11, -29}, {4, -20}, {-1, -13} } },
	[173] = { .set = { {8, -21}, {-10, -14}, {10, -3}, {-1, -15} } },
	[174] = { .set = { {-1, -20}, {13, -18}, {-14, -18}, {-1, -14} } },
	[175] = { .set = { {-1, -18}, {12, -27}, {-13, -27}, {-1, -14} } },
	[176] = { .set = { {0, -22}, {11, -5}, {-12, -6}, {0, -16} } },
	[177] = { .set = { {-8, -18}, {11, -27}, {-5, -15}, {0, -14} } },
	[178] = { .set = { {-10, -18}, {10, -29}, {-5, -20}, {0, -13} } },
	[179] = { .set = { {-9, -21}, {9, -14}, {-11, -3}, {0, -15} } },
	[180] = { .set = { {-10, -15}, {6, -30}, {9, -19}, {0, -16} } },
	[181] = { .set = { {-13, -12}, {7, -30}, {7, -23}, {-1, -14} } },
	[182] = { .set = { {-10, -16}, {-1, -12}, {3, -4}, {1, -15} } },
	[183] = { .set = { {-6, -13}, {-3, -30}, {11, -22}, {-1, -14} } },
	[184] = { .set = { {-8, -10}, {-2, -29}, {8, -26}, {0, -12} } },
	[185] = { .set = { {-6, -15}, {-10, -9}, {7, -7}, {-1, -14} } },
	[186] = { .set = { {-1, -6}, {-11, -25}, {10, -25}, {-1, -17} } },
	[187] = { .set = { {-6, -8}, {-6, -25}, {14, -20}, {-1, -16} } },
	[188] = { .set = { {-10, -13}, {6, -25}, {14, -12}, {0, -15} } },
	[189] = { .set = { {-10, -21}, {12, -19}, {-6, -4}, {-2, -15} } },
	[190] = { .set = { {0, -22}, {13, -10}, {-14, -10}, {0, -15} } },
	[191] = { .set = { {9, -21}, {-13, -19}, {5, -4}, {1, -15} } },
	[192] = { .set = { {9, -13}, {-7, -25}, {-15, -12}, {-1, -15} } },
	[193] = { .set = { {5, -8}, {5, -25}, {-15, -20}, {0, -16} } },
	[194] = { .set = { {0, -5}, {-13, -23}, {12, -23}, {0, -14} } },
	[195] = { .set = { {7, -8}, {13, -29}, {-13, -23}, {0, -16} } },
	[196] = { .set = { {10, -10}, {0, -31}, {-5, -21}, {-1, -13} } },
	[197] = { .set = { {8, -16}, {-11, -29}, {13, -8}, {0, -15} } },
	[198] = { .set = { {-1, -20}, {13, -21}, {-14, -21}, {0, -14} } },
	[199] = { .set = { {-9, -16}, {10, -29}, {-14, -8}, {-1, -15} } },
	[200] = { .set = { {-10, -10}, {0, -31}, {5, -21}, {1, -13} } },
	[201] = { .set = { {-8, -8}, {-14, -29}, {12, -23}, {-1, -16} } },
	[202] = { .set = { {-1, -9}, {-11, -25}, {11, -26}, {0, -13} } },
	[203] = { .set = { {-1, -11}, {-12, -8}, {11, -8}, {0, -14} } },
	[204] = { .set = { {-1, -7}, {-8, -27}, {7, -27}, {0, -10} } },
	[205] = { .set = { {5, -13}, {2, -30}, {-12, -22}, {0, -14} } },
	[206] = { .set = { {5, -15}, {9, -9}, {-8, -7}, {0, -14} } },
	[207] = { .set = { {7, -10}, {1, -29}, {-9, -26}, {-1, -12} } },
	[208] = { .set = { {9, -15}, {-7, -30}, {-10, -19}, {-1, -16} } },
	[209] = { .set = { {12, -12}, {-8, -30}, {-8, -23}, {0, -14} } },
	[210] = { .set = { {9, -16}, {0, -12}, {-4, -4}, {-2, -15} } },
	[211] = { .set = { {7, -18}, {-12, -27}, {4, -15}, {-1, -14} } },
	[212] = { .set = { {9, -18}, {-11, -29}, {4, -20}, {-1, -13} } },
	[213] = { .set = { {8, -21}, {-10, -14}, {10, -3}, {-1, -15} } },
	[214] = { .set = { {-1, -20}, {13, -18}, {-14, -18}, {-1, -14} } },
	[215] = { .set = { {-1, -18}, {12, -27}, {-13, -27}, {-1, -14} } },
	[216] = { .set = { {0, -22}, {11, -5}, {-12, -6}, {0, -16} } },
	[217] = { .set = { {-8, -18}, {11, -27}, {-5, -15}, {0, -14} } },
	[218] = { .set = { {-10, -18}, {10, -29}, {-5, -20}, {0, -13} } },
	[219] = { .set = { {-9, -21}, {9, -14}, {-11, -3}, {0, -15} } },
	[220] = { .set = { {-10, -15}, {6, -30}, {9, -19}, {0, -16} } },
	[221] = { .set = { {-13, -12}, {7, -30}, {7, -23}, {-1, -14} } },
	[222] = { .set = { {-10, -16}, {-1, -12}, {3, -4}, {1, -15} } },
	[223] = { .set = { {-6, -13}, {-3, -30}, {11, -22}, {-1, -14} } },
	[224] = { .set = { {-8, -10}, {-2, -29}, {8, -26}, {0, -12} } },
	[225] = { .set = { {-6, -15}, {-10, -9}, {7, -7}, {-1, -14} } },
	[226] = { .set = { {-1, -7}, {-8, -27}, {7, -27}, {0, -10} } },
	[227] = { .set = { {-8, -10}, {-2, -29}, {8, -26}, {0, -12} } },
	[228] = { .set = { {-13, -12}, {7, -30}, {7, -23}, {-1, -14} } },
	[229] = { .set = { {-10, -18}, {10, -29}, {-5, -20}, {0, -13} } },
	[230] = { .set = { {-1, -18}, {12, -27}, {-13, -27}, {-1, -14} } },
	[231] = { .set = { {9, -18}, {-11, -29}, {4, -20}, {-1, -13} } },
	[232] = { .set = { {12, -12}, {-8, -30}, {-8, -23}, {0, -14} } },
	[233] = { .set = { {7, -10}, {1, -29}, {-9, -26}, {-1, -12} } },
	[234] = { .set = { {7, -10}, {1, -29}, {-9, -26}, {-1, -12} } },
	[235] = { .set = { {12, -12}, {-8, -30}, {-8, -23}, {0, -14} } },
	[236] = { .set = { {7, -10}, {1, -29}, {-9, -26}, {-1, -12} } },
	[237] = { .set = { {9, -18}, {-11, -29}, {4, -20}, {-1, -13} } },
	[238] = { .set = { {12, -12}, {-8, -30}, {-8, -23}, {0, -14} } },
	[239] = { .set = { {7, -10}, {1, -29}, {-9, -26}, {-1, -12} } },
	[240] = { .set = { {-1, -18}, {12, -27}, {-13, -27}, {-1, -14} } },
	[241] = { .set = { {9, -18}, {-11, -29}, {4, -20}, {-1, -13} } },
	[242] = { .set = { {12, -12}, {-8, -30}, {-8, -23}, {0, -14} } },
	[243] = { .set = { {7, -10}, {1, -29}, {-9, -26}, {-1, -12} } },
	[244] = { .set = { {-10, -18}, {10, -29}, {-5, -20}, {0, -13} } },
	[245] = { .set = { {-1, -18}, {12, -27}, {-13, -27}, {-1, -14} } },
	[246] = { .set = { {9, -18}, {-11, -29}, {4, -20}, {-1, -13} } },
	[247] = { .set = { {12, -12}, {-8, -30}, {-8, -23}, {0, -14} } },
	[248] = { .set = { {7, -10}, {1, -29}, {-9, -26}, {-1, -12} } },
	[249] = { .set = { {-13, -12}, {7, -30}, {7, -23}, {-1, -14} } },
	[250] = { .set = { {-10, -18}, {10, -29}, {-5, -20}, {0, -13} } },
	[251] = { .set = { {-1, -18}, {12, -27}, {-13, -27}, {-1, -14} } },
	[252] = { .set = { {9, -18}, {-11, -29}, {4, -20}, {-1, -13} } },
	[253] = { .set = { {12, -12}, {-8, -30}, {-8, -23}, {0, -14} } },
	[254] = { .set = { {7, -10}, {1, -29}, {-9, -26}, {-1, -12} } },
	[255] = { .set = { {-8, -10}, {-2, -29}, {8, -26}, {0, -12} } },
	[256] = { .set = { {-13, -12}, {7, -30}, {7, -23}, {-1, -14} } },
	[257] = { .set = { {-10, -18}, {10, -29}, {-5, -20}, {0, -13} } },
	[258] = { .set = { {-1, -18}, {12, -27}, {-13, -27}, {-1, -14} } },
	[259] = { .set = { {9, -18}, {-11, -29}, {4, -20}, {-1, -13} } },
	[260] = { .set = { {12, -12}, {-8, -30}, {-8, -23}, {0, -14} } },
	[261] = { .set = { {7, -10}, {1, -29}, {-9, -26}, {-1, -12} } },
	[262] = { .set = { {-1, -9}, {-11, -25}, {11, -26}, {0, -13} } },
	[263] = { .set = { {-6, -13}, {-3, -30}, {11, -22}, {-1, -14} } },
	[264] = { .set = { {-10, -15}, {6, -30}, {9, -19}, {0, -16} } },
	[265] = { .set = { {-8, -18}, {11, -27}, {-5, -15}, {0, -14} } },
	[266] = { .set = { {-1, -20}, {13, -18}, {-14, -18}, {-1, -14} } },
	[267] = { .set = { {7, -18}, {-12, -27}, {4, -15}, {-1, -14} } },
	[268] = { .set = { {9, -15}, {-7, -30}, {-10, -19}, {-1, -16} } },
	[269] = { .set = { {5, -13}, {2, -30}, {-12, -22}, {0, -14} } },
};

static const ax_anim *const sAerodactylAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02606),
	AX_ANIM_PTR(gAxSharedAnim_02682),
	AX_ANIM_PTR(gAxSharedAnim_02691),
	AX_ANIM_PTR(gAxSharedAnim_02701),
	AX_ANIM_PTR(gAxSharedAnim_02618),
	AX_ANIM_PTR(gAxSharedAnim_02641),
	AX_ANIM_PTR(gAxSharedAnim_02654),
	AX_ANIM_PTR(gAxSharedAnim_02663),
};

static const ax_anim *const sAerodactylAnimTable2[] = {
	AX_ANIM_PTR(sAerodactylAnims_2_1),
	AX_ANIM_PTR(sAerodactylAnims_2_2),
	AX_ANIM_PTR(sAerodactylAnims_2_3),
	AX_ANIM_PTR(sAerodactylAnims_2_4),
	AX_ANIM_PTR(sAerodactylAnims_2_5),
	AX_ANIM_PTR(sAerodactylAnims_2_6),
	AX_ANIM_PTR(sAerodactylAnims_2_7),
	AX_ANIM_PTR(sAerodactylAnims_2_8),
};

static const ax_anim *const sAerodactylAnimTable3[] = {
	AX_ANIM_PTR(sAerodactylAnims_3_1),
	AX_ANIM_PTR(sAerodactylAnims_3_2),
	AX_ANIM_PTR(sAerodactylAnims_3_3),
	AX_ANIM_PTR(sAerodactylAnims_3_4),
	AX_ANIM_PTR(sAerodactylAnims_3_5),
	AX_ANIM_PTR(sAerodactylAnims_3_6),
	AX_ANIM_PTR(sAerodactylAnims_3_7),
	AX_ANIM_PTR(sAerodactylAnims_3_8),
};

static const ax_anim *const sAerodactylAnimTable4[] = {
	AX_ANIM_PTR(sAerodactylAnims_4_1),
	AX_ANIM_PTR(sAerodactylAnims_4_2),
	AX_ANIM_PTR(sAerodactylAnims_4_3),
	AX_ANIM_PTR(sAerodactylAnims_4_4),
	AX_ANIM_PTR(sAerodactylAnims_4_5),
	AX_ANIM_PTR(sAerodactylAnims_4_6),
	AX_ANIM_PTR(sAerodactylAnims_4_7),
	AX_ANIM_PTR(sAerodactylAnims_4_8),
};

static const ax_anim *const sAerodactylAnimTable5[] = {
	AX_ANIM_PTR(sAerodactylAnims_5_1),
	AX_ANIM_PTR(sAerodactylAnims_5_2),
	AX_ANIM_PTR(sAerodactylAnims_5_3),
	AX_ANIM_PTR(sAerodactylAnims_5_4),
	AX_ANIM_PTR(sAerodactylAnims_5_5),
	AX_ANIM_PTR(sAerodactylAnims_5_6),
	AX_ANIM_PTR(sAerodactylAnims_5_7),
	AX_ANIM_PTR(sAerodactylAnims_5_8),
};

static const ax_anim *const sAerodactylAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
};

static const ax_anim *const sAerodactylAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00604),
	AX_ANIM_PTR(gAxSharedAnim_00615),
	AX_ANIM_PTR(gAxSharedAnim_00624),
	AX_ANIM_PTR(gAxSharedAnim_00635),
	AX_ANIM_PTR(gAxSharedAnim_00652),
	AX_ANIM_PTR(gAxSharedAnim_00663),
	AX_ANIM_PTR(gAxSharedAnim_00678),
	AX_ANIM_PTR(gAxSharedAnim_00689),
};

static const ax_anim *const sAerodactylAnimTable8[] = {
	AX_ANIM_PTR(sAerodactylAnims_8_1),
	AX_ANIM_PTR(sAerodactylAnims_8_2),
	AX_ANIM_PTR(sAerodactylAnims_8_3),
	AX_ANIM_PTR(sAerodactylAnims_8_4),
	AX_ANIM_PTR(sAerodactylAnims_8_5),
	AX_ANIM_PTR(sAerodactylAnims_8_6),
	AX_ANIM_PTR(sAerodactylAnims_8_7),
	AX_ANIM_PTR(sAerodactylAnims_8_8),
};

static const ax_anim *const sAerodactylAnimTable9[] = {
	AX_ANIM_PTR(sAerodactylAnims_9_1),
	AX_ANIM_PTR(sAerodactylAnims_9_2),
	AX_ANIM_PTR(sAerodactylAnims_9_3),
	AX_ANIM_PTR(sAerodactylAnims_9_4),
	AX_ANIM_PTR(sAerodactylAnims_9_5),
	AX_ANIM_PTR(sAerodactylAnims_9_6),
	AX_ANIM_PTR(sAerodactylAnims_9_7),
	AX_ANIM_PTR(sAerodactylAnims_9_8),
};

static const ax_anim *const sAerodactylAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01143),
	AX_ANIM_PTR(gAxSharedAnim_01156),
	AX_ANIM_PTR(gAxSharedAnim_01167),
	AX_ANIM_PTR(gAxSharedAnim_01178),
	AX_ANIM_PTR(gAxSharedAnim_01189),
	AX_ANIM_PTR(gAxSharedAnim_01200),
	AX_ANIM_PTR(gAxSharedAnim_01217),
	AX_ANIM_PTR(gAxSharedAnim_01228),
};

static const ax_anim *const sAerodactylAnimTable11[] = {
	AX_ANIM_PTR(sAerodactylAnims_11_1),
	AX_ANIM_PTR(sAerodactylAnims_11_2),
	AX_ANIM_PTR(sAerodactylAnims_11_3),
	AX_ANIM_PTR(sAerodactylAnims_11_4),
	AX_ANIM_PTR(sAerodactylAnims_11_5),
	AX_ANIM_PTR(sAerodactylAnims_11_6),
	AX_ANIM_PTR(sAerodactylAnims_11_7),
	AX_ANIM_PTR(sAerodactylAnims_11_8),
};

static const ax_anim *const sAerodactylAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01472),
	AX_ANIM_PTR(gAxSharedAnim_01520),
	AX_ANIM_PTR(gAxSharedAnim_01507),
	AX_ANIM_PTR(gAxSharedAnim_01500),
	AX_ANIM_PTR(gAxSharedAnim_01499),
	AX_ANIM_PTR(gAxSharedAnim_01491),
	AX_ANIM_PTR(gAxSharedAnim_01481),
	AX_ANIM_PTR(gAxSharedAnim_01473),
};

static const ax_anim *const sAerodactylAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01699),
	AX_ANIM_PTR(gAxSharedAnim_01723),
	AX_ANIM_PTR(gAxSharedAnim_01721),
	AX_ANIM_PTR(gAxSharedAnim_01718),
	AX_ANIM_PTR(gAxSharedAnim_01714),
	AX_ANIM_PTR(gAxSharedAnim_01712),
	AX_ANIM_PTR(gAxSharedAnim_01709),
	AX_ANIM_PTR(gAxSharedAnim_01705),
};

static const ax_anim *const *const sAxAnimationsAerodactyl[] = {
	sAerodactylAnimTable1,
	sAerodactylAnimTable2,
	sAerodactylAnimTable3,
	sAerodactylAnimTable4,
	sAerodactylAnimTable5,
	sAerodactylAnimTable6,
	sAerodactylAnimTable7,
	sAerodactylAnimTable8,
	sAerodactylAnimTable9,
	sAerodactylAnimTable10,
	sAerodactylAnimTable11,
	sAerodactylAnimTable12,
	sAerodactylAnimTable13,
};

static const ax_sprite *const sAxSpritesAerodactyl[] = {
	sAerodactylSprites1,
	sAerodactylSprites2,
	sAerodactylSprites3,
	sAerodactylSprites4,
	sAerodactylSprites5,
	sAerodactylSprites6,
	sAerodactylSprites7,
	sAerodactylSprites8,
	sAerodactylSprites9,
	sAerodactylSprites10,
	sAerodactylSprites11,
	sAerodactylSprites12,
	sAerodactylSprites13,
	sAerodactylSprites14,
	sAerodactylSprites15,
	sAerodactylSprites16,
	sAerodactylSprites17,
	sAerodactylSprites18,
	sAerodactylSprites19,
	sAerodactylSprites20,
	sAerodactylSprites21,
	sAerodactylSprites22,
	sAerodactylSprites23,
	sAerodactylSprites24,
	sAerodactylSprites25,
	sAerodactylSprites26,
	sAerodactylSprites27,
	sAerodactylSprites28,
	sAerodactylSprites29,
	sAerodactylSprites30,
	sAerodactylSprites31,
	sAerodactylSprites32,
	sAerodactylSprites33,
	sAerodactylSprites34,
	sAerodactylSprites35,
	sAerodactylSprites36,
	sAerodactylSprites37,
	sAerodactylSprites38,
	sAerodactylSprites39,
	sAerodactylSprites40,
	sAerodactylSprites41,
	sAerodactylSprites42,
	sAerodactylSprites43,
	sAerodactylSprites44,
	sAerodactylSprites45,
	sAerodactylSprites46,
	sAerodactylSprites47,
	sAerodactylSprites48,
	sAerodactylSprites49,
};

static const axmain sAxMainAerodactyl = {
	.poses = sAxPosesAerodactyl,
	.animations = sAxAnimationsAerodactyl,
	.animCount = ARRAY_COUNT(sAxAnimationsAerodactyl),
	.spriteData = sAxSpritesAerodactyl,
	.positions = sAxPositionsAerodactyl,
};
