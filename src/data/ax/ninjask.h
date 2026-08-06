/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainNinjask;
const SiroArchive gAxNinjask = {"SIRO", &sAxMainNinjask};

static const ax_pose sNinjaskPose1[] = {
	AX_POSE(0, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose2[] = {
	AX_POSE(1, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose3[] = {
	AX_POSE(2, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(-1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(9, 3, 5)),
	AX_POSE(-1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(9, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose4[] = {
	AX_POSE(5, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose5[] = {
	AX_POSE(6, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose6[] = {
	AX_POSE(7, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose7[] = {
	AX_POSE(8, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose8[] = {
	AX_POSE(9, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose9[] = {
	AX_POSE(10, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose10[] = {
	AX_POSE(11, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose11[] = {
	AX_POSE(12, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose12[] = {
	AX_POSE(13, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose13[] = {
	AX_POSE(14, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose14[] = {
	AX_POSE(15, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose15[] = {
	AX_POSE(16, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(17, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(9, 3, 5)),
	AX_POSE(-1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(9, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose16[] = {
	AX_POSE(11, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose17[] = {
	AX_POSE(12, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose18[] = {
	AX_POSE(13, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose19[] = {
	AX_POSE(8, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose20[] = {
	AX_POSE(9, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose21[] = {
	AX_POSE(10, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose22[] = {
	AX_POSE(5, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose23[] = {
	AX_POSE(6, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose24[] = {
	AX_POSE(7, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose28[] = {
	AX_POSE(19, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose32[] = {
	AX_POSE(20, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose36[] = {
	AX_POSE(21, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose40[] = {
	AX_POSE(22, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose44[] = {
	AX_POSE(23, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose48[] = {
	AX_POSE(24, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose52[] = {
	AX_POSE(25, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose56[] = {
	AX_POSE(20, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose60[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(19, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose62[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(19, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose63[] = {
	AX_POSE(19, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose67[] = {
	AX_POSE(27, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(20, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose69[] = {
	AX_POSE(28, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(29, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose70[] = {
	AX_POSE(29, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose74[] = {
	AX_POSE(30, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(25, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose75[] = {
	AX_POSE(25, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose76[] = {
	AX_POSE(31, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(21, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose81[] = {
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(24, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose82[] = {
	AX_POSE(24, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose83[] = {
	AX_POSE(33, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(22, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose84[] = {
	AX_POSE(22, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose88[] = {
	AX_POSE(23, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose89[] = {
	AX_POSE(23, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose90[] = {
	AX_POSE(23, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose91[] = {
	AX_POSE(23, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose95[] = {
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(24, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose97[] = {
	AX_POSE(33, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(22, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose98[] = {
	AX_POSE(22, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose102[] = {
	AX_POSE(30, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(25, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose104[] = {
	AX_POSE(31, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(21, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose105[] = {
	AX_POSE(21, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose109[] = {
	AX_POSE(27, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(20, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose111[] = {
	AX_POSE(28, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(29, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose112[] = {
	AX_POSE(29, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose116[] = {
	AX_POSE(35, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose120[] = {
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose124[] = {
	AX_POSE(37, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose128[] = {
	AX_POSE(38, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose132[] = {
	AX_POSE(39, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose136[] = {
	AX_POSE(38, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose140[] = {
	AX_POSE(37, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose144[] = {
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose146[] = {
	AX_POSE(1, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose147[] = {
	AX_POSE(2, OAM1(239, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(-1, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(9, 3, 5)),
	AX_POSE(-1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(9, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose149[] = {
	AX_POSE(6, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose150[] = {
	AX_POSE(7, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose152[] = {
	AX_POSE(9, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose153[] = {
	AX_POSE(10, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose155[] = {
	AX_POSE(12, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose156[] = {
	AX_POSE(13, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose158[] = {
	AX_POSE(15, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose159[] = {
	AX_POSE(16, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(17, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(9, 3, 5)),
	AX_POSE(-1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(9, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose161[] = {
	AX_POSE(12, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose162[] = {
	AX_POSE(13, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose164[] = {
	AX_POSE(9, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose165[] = {
	AX_POSE(10, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose167[] = {
	AX_POSE(6, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose168[] = {
	AX_POSE(7, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose169[] = {
	AX_POSE(40, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose170[] = {
	AX_POSE(41, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose171[] = {
	AX_POSE(42, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose172[] = {
	AX_POSE(43, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose173[] = {
	AX_POSE(44, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose174[] = {
	AX_POSE(45, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose175[] = {
	AX_POSE(46, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose176[] = {
	AX_POSE(45, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose177[] = {
	AX_POSE(44, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose178[] = {
	AX_POSE(43, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose204[] = {
	AX_POSE(5, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose210[] = {
	AX_POSE(5, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose240[] = {
	AX_POSE(36, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose241[] = {
	AX_POSE(37, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose242[] = {
	AX_POSE(38, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose243[] = {
	AX_POSE(39, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose244[] = {
	AX_POSE(38, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose245[] = {
	AX_POSE(37, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose246[] = {
	AX_POSE(36, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose272[] = {
	AX_POSE(6, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNinjaskPose278[] = {
	AX_POSE(6, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const u8 sNinjaskAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_1_1.lz");
static const u8 sNinjaskAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_1_2.lz");
static const u8 sNinjaskAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_1_3.lz");
static const u8 sNinjaskAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_1_4.lz");
static const u8 sNinjaskAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_1_5.lz");
static const u8 sNinjaskAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_1_6.lz");
static const u8 sNinjaskAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_1_7.lz");
static const u8 sNinjaskAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_1_8.lz");
static const u8 sNinjaskAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_2_1.lz");
static const u8 sNinjaskAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_2_2.lz");
static const u8 sNinjaskAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_2_3.lz");
static const u8 sNinjaskAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_2_4.lz");
static const u8 sNinjaskAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_2_5.lz");
static const u8 sNinjaskAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_2_6.lz");
static const u8 sNinjaskAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_2_7.lz");
static const u8 sNinjaskAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_2_8.lz");
static const u8 sNinjaskAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_3_1.lz");
static const u8 sNinjaskAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_3_2.lz");
static const u8 sNinjaskAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_3_3.lz");
static const u8 sNinjaskAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_3_4.lz");
static const u8 sNinjaskAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_3_5.lz");
static const u8 sNinjaskAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_3_6.lz");
static const u8 sNinjaskAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_3_7.lz");
static const u8 sNinjaskAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_3_8.lz");
static const u8 sNinjaskAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_4_1.lz");
static const u8 sNinjaskAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_4_2.lz");
static const u8 sNinjaskAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_4_3.lz");
static const u8 sNinjaskAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_4_4.lz");
static const u8 sNinjaskAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_4_5.lz");
static const u8 sNinjaskAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_4_6.lz");
static const u8 sNinjaskAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_4_7.lz");
static const u8 sNinjaskAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_4_8.lz");
static const u8 sNinjaskAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_5_1.lz");
static const u8 sNinjaskAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_5_2.lz");
static const u8 sNinjaskAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_5_3.lz");
static const u8 sNinjaskAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_5_4.lz");
static const u8 sNinjaskAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_5_5.lz");
static const u8 sNinjaskAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_5_6.lz");
static const u8 sNinjaskAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_5_7.lz");
static const u8 sNinjaskAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_5_8.lz");
static const u8 sNinjaskAnims_6_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_6_1.lz");
static const u8 sNinjaskAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_8_1.lz");
static const u8 sNinjaskAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_8_2.lz");
static const u8 sNinjaskAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_8_3.lz");
static const u8 sNinjaskAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_8_4.lz");
static const u8 sNinjaskAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_8_5.lz");
static const u8 sNinjaskAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_8_6.lz");
static const u8 sNinjaskAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_8_7.lz");
static const u8 sNinjaskAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_8_8.lz");
static const u8 sNinjaskAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_9_1.lz");
static const u8 sNinjaskAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_9_2.lz");
static const u8 sNinjaskAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_9_3.lz");
static const u8 sNinjaskAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_9_4.lz");
static const u8 sNinjaskAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_9_5.lz");
static const u8 sNinjaskAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_9_6.lz");
static const u8 sNinjaskAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_9_7.lz");
static const u8 sNinjaskAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_9_8.lz");
static const u8 sNinjaskAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_11_1.lz");
static const u8 sNinjaskAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_11_2.lz");
static const u8 sNinjaskAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_11_3.lz");
static const u8 sNinjaskAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_11_4.lz");
static const u8 sNinjaskAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_11_5.lz");
static const u8 sNinjaskAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_11_6.lz");
static const u8 sNinjaskAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_11_7.lz");
static const u8 sNinjaskAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ninjask/sNinjaskAnims_11_8.lz");

static const u8 sNinjaskGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_1.4bpp.lz");
static const ax_sprite sNinjaskSprites1[] = {
	{sNinjaskGfx1, ARRAY_COUNT(sNinjaskGfx1)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_2.4bpp.lz");
static const ax_sprite sNinjaskSprites2[] = {
	{sNinjaskGfx2, ARRAY_COUNT(sNinjaskGfx2)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_3.4bpp.lz");
static const ax_sprite sNinjaskSprites3[] = {
	{sNinjaskGfx3, ARRAY_COUNT(sNinjaskGfx3)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_4.4bpp.lz");
static const ax_sprite sNinjaskSprites4[] = {
	{sNinjaskGfx4, ARRAY_COUNT(sNinjaskGfx4)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_5.4bpp.lz");
static const ax_sprite sNinjaskSprites5[] = {
	{sNinjaskGfx5, ARRAY_COUNT(sNinjaskGfx5)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_6.4bpp.lz");
static const ax_sprite sNinjaskSprites6[] = {
	{sNinjaskGfx6, ARRAY_COUNT(sNinjaskGfx6)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_7.4bpp.lz");
static const ax_sprite sNinjaskSprites7[] = {
	{sNinjaskGfx7, ARRAY_COUNT(sNinjaskGfx7)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_8.4bpp.lz");
static const ax_sprite sNinjaskSprites8[] = {
	{sNinjaskGfx8, ARRAY_COUNT(sNinjaskGfx8)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_9.4bpp.lz");
static const ax_sprite sNinjaskSprites9[] = {
	{sNinjaskGfx9, ARRAY_COUNT(sNinjaskGfx9)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_10.4bpp.lz");
static const ax_sprite sNinjaskSprites10[] = {
	{sNinjaskGfx10, ARRAY_COUNT(sNinjaskGfx10)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_11.4bpp.lz");
static const ax_sprite sNinjaskSprites11[] = {
	{sNinjaskGfx11, ARRAY_COUNT(sNinjaskGfx11)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_12.4bpp.lz");
static const ax_sprite sNinjaskSprites12[] = {
	{sNinjaskGfx12, ARRAY_COUNT(sNinjaskGfx12)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_13.4bpp.lz");
static const ax_sprite sNinjaskSprites13[] = {
	{sNinjaskGfx13, ARRAY_COUNT(sNinjaskGfx13)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_14.4bpp.lz");
static const ax_sprite sNinjaskSprites14[] = {
	{sNinjaskGfx14, ARRAY_COUNT(sNinjaskGfx14)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_15.4bpp.lz");
static const ax_sprite sNinjaskSprites15[] = {
	{sNinjaskGfx15, ARRAY_COUNT(sNinjaskGfx15)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_16.4bpp.lz");
static const ax_sprite sNinjaskSprites16[] = {
	{sNinjaskGfx16, ARRAY_COUNT(sNinjaskGfx16)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_17.4bpp.lz");
static const ax_sprite sNinjaskSprites17[] = {
	{sNinjaskGfx17, ARRAY_COUNT(sNinjaskGfx17)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_18.4bpp.lz");
static const ax_sprite sNinjaskSprites18[] = {
	{sNinjaskGfx18, ARRAY_COUNT(sNinjaskGfx18)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_19.4bpp.lz");
static const ax_sprite sNinjaskSprites19[] = {
	{sNinjaskGfx19, ARRAY_COUNT(sNinjaskGfx19)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_20.4bpp.lz");
static const u8 sNinjaskGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_20_1.4bpp.lz");
static const u8 sNinjaskGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_20_2.4bpp.lz");
static const ax_sprite sNinjaskSprites20[] = {
	{NULL, 64}, 
	{sNinjaskGfx20, ARRAY_COUNT(sNinjaskGfx20)}, 
	{NULL, 32}, 
	{sNinjaskGfx20_1, ARRAY_COUNT(sNinjaskGfx20_1)}, 
	{NULL, 64}, 
	{sNinjaskGfx20_2, ARRAY_COUNT(sNinjaskGfx20_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_21.4bpp.lz");
static const u8 sNinjaskGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_21_1.4bpp.lz");
static const u8 sNinjaskGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_21_2.4bpp.lz");
static const u8 sNinjaskGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_21_3.4bpp.lz");
static const ax_sprite sNinjaskSprites21[] = {
	{sNinjaskGfx21, ARRAY_COUNT(sNinjaskGfx21)}, 
	{NULL, 32}, 
	{sNinjaskGfx21_1, ARRAY_COUNT(sNinjaskGfx21_1)}, 
	{NULL, 32}, 
	{sNinjaskGfx21_2, ARRAY_COUNT(sNinjaskGfx21_2)}, 
	{NULL, 32}, 
	{sNinjaskGfx21_3, ARRAY_COUNT(sNinjaskGfx21_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_22.4bpp.lz");
static const u8 sNinjaskGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_22_1.4bpp.lz");
static const ax_sprite sNinjaskSprites22[] = {
	{NULL, 64}, 
	{sNinjaskGfx22, ARRAY_COUNT(sNinjaskGfx22)}, 
	{NULL, 64}, 
	{sNinjaskGfx22_1, ARRAY_COUNT(sNinjaskGfx22_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_23.4bpp.lz");
static const u8 sNinjaskGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_23_1.4bpp.lz");
static const u8 sNinjaskGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_23_2.4bpp.lz");
static const ax_sprite sNinjaskSprites23[] = {
	{NULL, 32}, 
	{sNinjaskGfx23, ARRAY_COUNT(sNinjaskGfx23)}, 
	{NULL, 32}, 
	{sNinjaskGfx23_1, ARRAY_COUNT(sNinjaskGfx23_1)}, 
	{NULL, 64}, 
	{sNinjaskGfx23_2, ARRAY_COUNT(sNinjaskGfx23_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_24.4bpp.lz");
static const u8 sNinjaskGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_24_1.4bpp.lz");
static const ax_sprite sNinjaskSprites24[] = {
	{NULL, 160}, 
	{sNinjaskGfx24, ARRAY_COUNT(sNinjaskGfx24)}, 
	{NULL, 32}, 
	{sNinjaskGfx24_1, ARRAY_COUNT(sNinjaskGfx24_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_25.4bpp.lz");
static const u8 sNinjaskGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_25_1.4bpp.lz");
static const u8 sNinjaskGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_25_2.4bpp.lz");
static const ax_sprite sNinjaskSprites25[] = {
	{NULL, 64}, 
	{sNinjaskGfx25, ARRAY_COUNT(sNinjaskGfx25)}, 
	{NULL, 32}, 
	{sNinjaskGfx25_1, ARRAY_COUNT(sNinjaskGfx25_1)}, 
	{NULL, 32}, 
	{sNinjaskGfx25_2, ARRAY_COUNT(sNinjaskGfx25_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_26.4bpp.lz");
static const u8 sNinjaskGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_26_1.4bpp.lz");
static const u8 sNinjaskGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_26_2.4bpp.lz");
static const ax_sprite sNinjaskSprites26[] = {
	{NULL, 32}, 
	{sNinjaskGfx26, ARRAY_COUNT(sNinjaskGfx26)}, 
	{NULL, 64}, 
	{sNinjaskGfx26_1, ARRAY_COUNT(sNinjaskGfx26_1)}, 
	{NULL, 32}, 
	{sNinjaskGfx26_2, ARRAY_COUNT(sNinjaskGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_27.4bpp.lz");
static const u8 sNinjaskGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_27_1.4bpp.lz");
static const u8 sNinjaskGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_27_2.4bpp.lz");
static const u8 sNinjaskGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_27_3.4bpp.lz");
static const ax_sprite sNinjaskSprites27[] = {
	{NULL, 128}, 
	{sNinjaskGfx27, ARRAY_COUNT(sNinjaskGfx27)}, 
	{NULL, 96}, 
	{sNinjaskGfx27_1, ARRAY_COUNT(sNinjaskGfx27_1)}, 
	{NULL, 32}, 
	{sNinjaskGfx27_2, ARRAY_COUNT(sNinjaskGfx27_2)}, 
	{NULL, 32}, 
	{sNinjaskGfx27_3, ARRAY_COUNT(sNinjaskGfx27_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_28.4bpp.lz");
static const u8 sNinjaskGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_28_1.4bpp.lz");
static const u8 sNinjaskGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_28_2.4bpp.lz");
static const ax_sprite sNinjaskSprites28[] = {
	{NULL, 128}, 
	{sNinjaskGfx28, ARRAY_COUNT(sNinjaskGfx28)}, 
	{NULL, 96}, 
	{sNinjaskGfx28_1, ARRAY_COUNT(sNinjaskGfx28_1)}, 
	{NULL, 96}, 
	{sNinjaskGfx28_2, ARRAY_COUNT(sNinjaskGfx28_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_29.4bpp.lz");
static const ax_sprite sNinjaskSprites29[] = {
	{sNinjaskGfx29, ARRAY_COUNT(sNinjaskGfx29)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_30.4bpp.lz");
static const u8 sNinjaskGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_30_1.4bpp.lz");
static const ax_sprite sNinjaskSprites30[] = {
	{NULL, 64}, 
	{sNinjaskGfx30, ARRAY_COUNT(sNinjaskGfx30)}, 
	{NULL, 32}, 
	{sNinjaskGfx30_1, ARRAY_COUNT(sNinjaskGfx30_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_31.4bpp.lz");
static const u8 sNinjaskGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_31_1.4bpp.lz");
static const u8 sNinjaskGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_31_2.4bpp.lz");
static const ax_sprite sNinjaskSprites31[] = {
	{NULL, 128}, 
	{sNinjaskGfx31, ARRAY_COUNT(sNinjaskGfx31)}, 
	{NULL, 64}, 
	{sNinjaskGfx31_1, ARRAY_COUNT(sNinjaskGfx31_1)}, 
	{NULL, 96}, 
	{sNinjaskGfx31_2, ARRAY_COUNT(sNinjaskGfx31_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_32.4bpp.lz");
static const ax_sprite sNinjaskSprites32[] = {
	{sNinjaskGfx32, ARRAY_COUNT(sNinjaskGfx32)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_33.4bpp.lz");
static const ax_sprite sNinjaskSprites33[] = {
	{NULL, 32}, 
	{sNinjaskGfx33, ARRAY_COUNT(sNinjaskGfx33)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_34.4bpp.lz");
static const ax_sprite sNinjaskSprites34[] = {
	{sNinjaskGfx34, ARRAY_COUNT(sNinjaskGfx34)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_35.4bpp.lz");
static const u8 sNinjaskGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_35_1.4bpp.lz");
static const u8 sNinjaskGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_35_2.4bpp.lz");
static const u8 sNinjaskGfx35_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_35_3.4bpp.lz");
static const ax_sprite sNinjaskSprites35[] = {
	{NULL, 32}, 
	{sNinjaskGfx35, ARRAY_COUNT(sNinjaskGfx35)}, 
	{NULL, 32}, 
	{sNinjaskGfx35_1, ARRAY_COUNT(sNinjaskGfx35_1)}, 
	{NULL, 96}, 
	{sNinjaskGfx35_2, ARRAY_COUNT(sNinjaskGfx35_2)}, 
	{NULL, 96}, 
	{sNinjaskGfx35_3, ARRAY_COUNT(sNinjaskGfx35_3)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_36.4bpp.lz");
static const u8 sNinjaskGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_36_1.4bpp.lz");
static const ax_sprite sNinjaskSprites36[] = {
	{sNinjaskGfx36, ARRAY_COUNT(sNinjaskGfx36)}, 
	{NULL, 64}, 
	{sNinjaskGfx36_1, ARRAY_COUNT(sNinjaskGfx36_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_37.4bpp.lz");
static const u8 sNinjaskGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_37_1.4bpp.lz");
static const ax_sprite sNinjaskSprites37[] = {
	{sNinjaskGfx37, ARRAY_COUNT(sNinjaskGfx37)}, 
	{NULL, 64}, 
	{sNinjaskGfx37_1, ARRAY_COUNT(sNinjaskGfx37_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_38.4bpp.lz");
static const u8 sNinjaskGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_38_1.4bpp.lz");
static const u8 sNinjaskGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_38_2.4bpp.lz");
static const u8 sNinjaskGfx38_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_38_3.4bpp.lz");
static const ax_sprite sNinjaskSprites38[] = {
	{NULL, 64}, 
	{sNinjaskGfx38, ARRAY_COUNT(sNinjaskGfx38)}, 
	{NULL, 32}, 
	{sNinjaskGfx38_1, ARRAY_COUNT(sNinjaskGfx38_1)}, 
	{NULL, 32}, 
	{sNinjaskGfx38_2, ARRAY_COUNT(sNinjaskGfx38_2)}, 
	{NULL, 64}, 
	{sNinjaskGfx38_3, ARRAY_COUNT(sNinjaskGfx38_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_39.4bpp.lz");
static const u8 sNinjaskGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_39_1.4bpp.lz");
static const ax_sprite sNinjaskSprites39[] = {
	{NULL, 64}, 
	{sNinjaskGfx39, ARRAY_COUNT(sNinjaskGfx39)}, 
	{NULL, 32}, 
	{sNinjaskGfx39_1, ARRAY_COUNT(sNinjaskGfx39_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_40.4bpp.lz");
static const ax_sprite sNinjaskSprites40[] = {
	{NULL, 128}, 
	{sNinjaskGfx40, ARRAY_COUNT(sNinjaskGfx40)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_41.4bpp.lz");
static const ax_sprite sNinjaskSprites41[] = {
	{sNinjaskGfx41, ARRAY_COUNT(sNinjaskGfx41)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_42.4bpp.lz");
static const ax_sprite sNinjaskSprites42[] = {
	{sNinjaskGfx42, ARRAY_COUNT(sNinjaskGfx42)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_43.4bpp.lz");
static const ax_sprite sNinjaskSprites43[] = {
	{sNinjaskGfx43, ARRAY_COUNT(sNinjaskGfx43)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_44.4bpp.lz");
static const ax_sprite sNinjaskSprites44[] = {
	{sNinjaskGfx44, ARRAY_COUNT(sNinjaskGfx44)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_45.4bpp.lz");
static const ax_sprite sNinjaskSprites45[] = {
	{sNinjaskGfx45, ARRAY_COUNT(sNinjaskGfx45)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_46.4bpp.lz");
static const ax_sprite sNinjaskSprites46[] = {
	{sNinjaskGfx46, ARRAY_COUNT(sNinjaskGfx46)}, 
	{NULL, 0}
};
static const u8 sNinjaskGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ninjask/sprite_47.4bpp.lz");
static const ax_sprite sNinjaskSprites47[] = {
	{sNinjaskGfx47, ARRAY_COUNT(sNinjaskGfx47)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesNinjask[] = {
	sNinjaskPose1,
	sNinjaskPose2,
	sNinjaskPose3,
	sNinjaskPose4,
	sNinjaskPose5,
	sNinjaskPose6,
	sNinjaskPose7,
	sNinjaskPose8,
	sNinjaskPose9,
	sNinjaskPose10,
	sNinjaskPose11,
	sNinjaskPose12,
	sNinjaskPose13,
	sNinjaskPose14,
	sNinjaskPose15,
	sNinjaskPose16,
	sNinjaskPose17,
	sNinjaskPose18,
	sNinjaskPose19,
	sNinjaskPose20,
	sNinjaskPose21,
	sNinjaskPose22,
	sNinjaskPose23,
	sNinjaskPose24,
	sNinjaskPose1,
	sNinjaskPose2,
	sNinjaskPose3,
	sNinjaskPose28,
	sNinjaskPose4,
	sNinjaskPose5,
	sNinjaskPose6,
	sNinjaskPose32,
	sNinjaskPose7,
	sNinjaskPose8,
	sNinjaskPose9,
	sNinjaskPose36,
	sNinjaskPose10,
	sNinjaskPose11,
	sNinjaskPose12,
	sNinjaskPose40,
	sNinjaskPose13,
	sNinjaskPose14,
	sNinjaskPose15,
	sNinjaskPose44,
	sNinjaskPose16,
	sNinjaskPose17,
	sNinjaskPose18,
	sNinjaskPose48,
	sNinjaskPose19,
	sNinjaskPose20,
	sNinjaskPose21,
	sNinjaskPose52,
	sNinjaskPose22,
	sNinjaskPose23,
	sNinjaskPose24,
	sNinjaskPose56,
	sNinjaskPose1,
	sNinjaskPose2,
	sNinjaskPose3,
	sNinjaskPose60,
	sNinjaskPose28,
	sNinjaskPose62,
	sNinjaskPose63,
	sNinjaskPose4,
	sNinjaskPose5,
	sNinjaskPose6,
	sNinjaskPose67,
	sNinjaskPose32,
	sNinjaskPose69,
	sNinjaskPose70,
	sNinjaskPose7,
	sNinjaskPose8,
	sNinjaskPose9,
	sNinjaskPose74,
	sNinjaskPose75,
	sNinjaskPose76,
	sNinjaskPose36,
	sNinjaskPose10,
	sNinjaskPose11,
	sNinjaskPose12,
	sNinjaskPose81,
	sNinjaskPose82,
	sNinjaskPose83,
	sNinjaskPose84,
	sNinjaskPose13,
	sNinjaskPose14,
	sNinjaskPose15,
	sNinjaskPose88,
	sNinjaskPose89,
	sNinjaskPose90,
	sNinjaskPose91,
	sNinjaskPose16,
	sNinjaskPose17,
	sNinjaskPose18,
	sNinjaskPose95,
	sNinjaskPose48,
	sNinjaskPose97,
	sNinjaskPose98,
	sNinjaskPose19,
	sNinjaskPose20,
	sNinjaskPose21,
	sNinjaskPose102,
	sNinjaskPose52,
	sNinjaskPose104,
	sNinjaskPose105,
	sNinjaskPose22,
	sNinjaskPose23,
	sNinjaskPose24,
	sNinjaskPose109,
	sNinjaskPose56,
	sNinjaskPose111,
	sNinjaskPose112,
	sNinjaskPose1,
	sNinjaskPose2,
	sNinjaskPose3,
	sNinjaskPose116,
	sNinjaskPose4,
	sNinjaskPose5,
	sNinjaskPose6,
	sNinjaskPose120,
	sNinjaskPose7,
	sNinjaskPose8,
	sNinjaskPose9,
	sNinjaskPose124,
	sNinjaskPose10,
	sNinjaskPose11,
	sNinjaskPose12,
	sNinjaskPose128,
	sNinjaskPose13,
	sNinjaskPose14,
	sNinjaskPose15,
	sNinjaskPose132,
	sNinjaskPose16,
	sNinjaskPose17,
	sNinjaskPose18,
	sNinjaskPose136,
	sNinjaskPose19,
	sNinjaskPose20,
	sNinjaskPose21,
	sNinjaskPose140,
	sNinjaskPose22,
	sNinjaskPose23,
	sNinjaskPose24,
	sNinjaskPose144,
	sNinjaskPose1,
	sNinjaskPose146,
	sNinjaskPose147,
	sNinjaskPose4,
	sNinjaskPose149,
	sNinjaskPose150,
	sNinjaskPose7,
	sNinjaskPose152,
	sNinjaskPose153,
	sNinjaskPose10,
	sNinjaskPose155,
	sNinjaskPose156,
	sNinjaskPose13,
	sNinjaskPose158,
	sNinjaskPose159,
	sNinjaskPose16,
	sNinjaskPose161,
	sNinjaskPose162,
	sNinjaskPose19,
	sNinjaskPose164,
	sNinjaskPose165,
	sNinjaskPose22,
	sNinjaskPose167,
	sNinjaskPose168,
	sNinjaskPose169,
	sNinjaskPose170,
	sNinjaskPose171,
	sNinjaskPose172,
	sNinjaskPose173,
	sNinjaskPose174,
	sNinjaskPose175,
	sNinjaskPose176,
	sNinjaskPose177,
	sNinjaskPose178,
	sNinjaskPose1,
	sNinjaskPose2,
	sNinjaskPose3,
	sNinjaskPose4,
	sNinjaskPose5,
	sNinjaskPose6,
	sNinjaskPose7,
	sNinjaskPose8,
	sNinjaskPose9,
	sNinjaskPose10,
	sNinjaskPose11,
	sNinjaskPose12,
	sNinjaskPose13,
	sNinjaskPose14,
	sNinjaskPose15,
	sNinjaskPose16,
	sNinjaskPose17,
	sNinjaskPose18,
	sNinjaskPose19,
	sNinjaskPose20,
	sNinjaskPose21,
	sNinjaskPose22,
	sNinjaskPose23,
	sNinjaskPose24,
	sNinjaskPose1,
	sNinjaskPose204,
	sNinjaskPose19,
	sNinjaskPose16,
	sNinjaskPose13,
	sNinjaskPose10,
	sNinjaskPose7,
	sNinjaskPose210,
	sNinjaskPose210,
	sNinjaskPose7,
	sNinjaskPose210,
	sNinjaskPose10,
	sNinjaskPose7,
	sNinjaskPose210,
	sNinjaskPose13,
	sNinjaskPose10,
	sNinjaskPose7,
	sNinjaskPose210,
	sNinjaskPose16,
	sNinjaskPose13,
	sNinjaskPose10,
	sNinjaskPose7,
	sNinjaskPose210,
	sNinjaskPose19,
	sNinjaskPose16,
	sNinjaskPose13,
	sNinjaskPose10,
	sNinjaskPose7,
	sNinjaskPose210,
	sNinjaskPose204,
	sNinjaskPose19,
	sNinjaskPose16,
	sNinjaskPose13,
	sNinjaskPose10,
	sNinjaskPose7,
	sNinjaskPose210,
	sNinjaskPose116,
	sNinjaskPose240,
	sNinjaskPose241,
	sNinjaskPose242,
	sNinjaskPose243,
	sNinjaskPose244,
	sNinjaskPose245,
	sNinjaskPose246,
	sNinjaskPose1,
	sNinjaskPose146,
	sNinjaskPose147,
	sNinjaskPose4,
	sNinjaskPose149,
	sNinjaskPose150,
	sNinjaskPose7,
	sNinjaskPose152,
	sNinjaskPose153,
	sNinjaskPose10,
	sNinjaskPose155,
	sNinjaskPose156,
	sNinjaskPose13,
	sNinjaskPose158,
	sNinjaskPose159,
	sNinjaskPose16,
	sNinjaskPose161,
	sNinjaskPose162,
	sNinjaskPose19,
	sNinjaskPose164,
	sNinjaskPose165,
	sNinjaskPose22,
	sNinjaskPose167,
	sNinjaskPose168,
	sNinjaskPose2,
	sNinjaskPose272,
	sNinjaskPose20,
	sNinjaskPose17,
	sNinjaskPose158,
	sNinjaskPose11,
	sNinjaskPose8,
	sNinjaskPose278,
	sNinjaskPose1,
	sNinjaskPose22,
	sNinjaskPose19,
	sNinjaskPose16,
	sNinjaskPose13,
	sNinjaskPose10,
	sNinjaskPose7,
	sNinjaskPose4,
};

static const struct PositionSets sAxPositionsNinjask[] = {
	[0] = { .set = { {-1, -9}, {-5, -3}, {3, -3}, {-1, -10} } },
	[1] = { .set = { {-1, -8}, {-5, -2}, {3, -2}, {-1, -9} } },
	[2] = { .set = { {-1, -11}, {-5, -5}, {3, -5}, {-1, -12} } },
	[3] = { .set = { {5, -10}, {9, -8}, {1, -3}, {4, -12} } },
	[4] = { .set = { {5, -9}, {9, -7}, {1, -2}, {4, -11} } },
	[5] = { .set = { {5, -11}, {9, -9}, {1, -4}, {4, -13} } },
	[6] = { .set = { {9, -12}, {7, -14}, {7, -6}, {2, -11} } },
	[7] = { .set = { {9, -11}, {7, -13}, {7, -5}, {2, -10} } },
	[8] = { .set = { {9, -13}, {7, -15}, {7, -7}, {2, -12} } },
	[9] = { .set = { {3, -16}, {-2, -14}, {8, -11}, {0, -13} } },
	[10] = { .set = { {3, -15}, {-2, -13}, {8, -11}, {0, -12} } },
	[11] = { .set = { {3, -17}, {-2, -15}, {8, -11}, {0, -14} } },
	[12] = { .set = { {0, -15}, {4, -10}, {-4, -10}, {0, -13} } },
	[13] = { .set = { {0, -14}, {4, -9}, {-4, -9}, {0, -12} } },
	[14] = { .set = { {0, -16}, {4, -10}, {-4, -10}, {0, -14} } },
	[15] = { .set = { {-3, -16}, {2, -14}, {-8, -11}, {0, -13} } },
	[16] = { .set = { {-3, -15}, {2, -13}, {-8, -11}, {0, -12} } },
	[17] = { .set = { {-3, -17}, {2, -15}, {-8, -11}, {0, -14} } },
	[18] = { .set = { {-9, -12}, {-7, -14}, {-7, -6}, {-2, -11} } },
	[19] = { .set = { {-9, -11}, {-7, -13}, {-7, -5}, {-2, -10} } },
	[20] = { .set = { {-9, -13}, {-7, -15}, {-7, -7}, {-2, -12} } },
	[21] = { .set = { {-5, -10}, {-9, -8}, {-1, -3}, {-4, -12} } },
	[22] = { .set = { {-5, -9}, {-9, -7}, {-1, -2}, {-4, -11} } },
	[23] = { .set = { {-5, -11}, {-9, -9}, {-1, -4}, {-4, -13} } },
	[24] = { .set = { {-1, -9}, {-5, -3}, {3, -3}, {-1, -10} } },
	[25] = { .set = { {-1, -8}, {-5, -2}, {3, -2}, {-1, -9} } },
	[26] = { .set = { {-1, -11}, {-5, -5}, {3, -5}, {-1, -12} } },
	[27] = { .set = { {2, -7}, {4, -4}, {10, -17}, {0, -10} } },
	[28] = { .set = { {5, -10}, {9, -8}, {1, -3}, {4, -12} } },
	[29] = { .set = { {5, -9}, {9, -7}, {1, -2}, {4, -11} } },
	[30] = { .set = { {5, -11}, {9, -9}, {1, -4}, {4, -13} } },
	[31] = { .set = { {2, -7}, {1, -4}, {-9, -12}, {3, -11} } },
	[32] = { .set = { {9, -12}, {7, -14}, {7, -6}, {2, -11} } },
	[33] = { .set = { {9, -11}, {7, -13}, {7, -5}, {2, -10} } },
	[34] = { .set = { {9, -13}, {7, -15}, {7, -7}, {2, -12} } },
	[35] = { .set = { {9, -8}, {6, -19}, {11, -7}, {1, -10} } },
	[36] = { .set = { {3, -16}, {-2, -14}, {8, -11}, {0, -13} } },
	[37] = { .set = { {3, -15}, {-2, -13}, {8, -11}, {0, -12} } },
	[38] = { .set = { {3, -17}, {-2, -15}, {8, -11}, {0, -14} } },
	[39] = { .set = { {0, -15}, {-9, -22}, {1, -15}, {1, -14} } },
	[40] = { .set = { {0, -15}, {4, -10}, {-4, -10}, {0, -13} } },
	[41] = { .set = { {0, -14}, {4, -9}, {-4, -9}, {0, -12} } },
	[42] = { .set = { {0, -16}, {4, -10}, {-4, -10}, {0, -14} } },
	[43] = { .set = { {-4, -14}, {-7, -17}, {-9, -11}, {0, -12} } },
	[44] = { .set = { {-3, -16}, {2, -14}, {-8, -11}, {0, -13} } },
	[45] = { .set = { {-3, -15}, {2, -13}, {-8, -11}, {0, -12} } },
	[46] = { .set = { {-3, -17}, {2, -15}, {-8, -11}, {0, -14} } },
	[47] = { .set = { {-4, -14}, {-8, -10}, {-4, -17}, {0, -14} } },
	[48] = { .set = { {-9, -12}, {-7, -14}, {-7, -6}, {-2, -11} } },
	[49] = { .set = { {-9, -11}, {-7, -13}, {-7, -5}, {-2, -10} } },
	[50] = { .set = { {-9, -13}, {-7, -15}, {-7, -7}, {-2, -12} } },
	[51] = { .set = { {-6, -7}, {-2, -3}, {4, -13}, {-1, -9} } },
	[52] = { .set = { {-5, -10}, {-9, -8}, {-1, -3}, {-4, -12} } },
	[53] = { .set = { {-5, -9}, {-9, -7}, {-1, -2}, {-4, -11} } },
	[54] = { .set = { {-5, -11}, {-9, -9}, {-1, -4}, {-4, -13} } },
	[55] = { .set = { {-2, -7}, {-1, -4}, {9, -12}, {-3, -11} } },
	[56] = { .set = { {-1, -9}, {-5, -3}, {3, -3}, {-1, -10} } },
	[57] = { .set = { {-1, -8}, {-5, -2}, {3, -2}, {-1, -9} } },
	[58] = { .set = { {-1, -11}, {-5, -5}, {3, -5}, {-1, -12} } },
	[59] = { .set = { {2, -7}, {4, -4}, {10, -17}, {0, -10} } },
	[60] = { .set = { {2, -7}, {4, -4}, {10, -17}, {0, -10} } },
	[61] = { .set = { {-3, -7}, {-5, -4}, {-11, -17}, {-1, -10} } },
	[62] = { .set = { {-3, -7}, {-5, -4}, {-11, -17}, {-1, -10} } },
	[63] = { .set = { {5, -10}, {9, -8}, {1, -3}, {4, -12} } },
	[64] = { .set = { {5, -9}, {9, -7}, {1, -2}, {4, -11} } },
	[65] = { .set = { {5, -11}, {9, -9}, {1, -4}, {4, -13} } },
	[66] = { .set = { {2, -7}, {1, -4}, {-9, -12}, {3, -11} } },
	[67] = { .set = { {2, -7}, {1, -4}, {-9, -12}, {3, -11} } },
	[68] = { .set = { {4, -9}, {7, -19}, {8, -7}, {2, -11} } },
	[69] = { .set = { {4, -9}, {7, -19}, {8, -7}, {2, -11} } },
	[70] = { .set = { {9, -12}, {7, -14}, {7, -6}, {2, -11} } },
	[71] = { .set = { {9, -11}, {7, -13}, {7, -5}, {2, -10} } },
	[72] = { .set = { {9, -13}, {7, -15}, {7, -7}, {2, -12} } },
	[73] = { .set = { {6, -7}, {2, -3}, {-4, -13}, {1, -9} } },
	[74] = { .set = { {6, -7}, {2, -3}, {-4, -13}, {1, -9} } },
	[75] = { .set = { {9, -8}, {6, -19}, {11, -7}, {1, -10} } },
	[76] = { .set = { {9, -8}, {6, -19}, {11, -7}, {1, -10} } },
	[77] = { .set = { {3, -16}, {-2, -14}, {8, -11}, {0, -13} } },
	[78] = { .set = { {3, -15}, {-2, -13}, {8, -11}, {0, -12} } },
	[79] = { .set = { {3, -17}, {-2, -15}, {8, -11}, {0, -14} } },
	[80] = { .set = { {4, -14}, {8, -10}, {4, -17}, {0, -14} } },
	[81] = { .set = { {4, -14}, {8, -10}, {4, -17}, {0, -14} } },
	[82] = { .set = { {0, -15}, {-9, -22}, {1, -15}, {1, -14} } },
	[83] = { .set = { {2, -15}, {-7, -22}, {3, -15}, {3, -14} } },
	[84] = { .set = { {0, -15}, {4, -10}, {-4, -10}, {0, -13} } },
	[85] = { .set = { {0, -14}, {4, -9}, {-4, -9}, {0, -12} } },
	[86] = { .set = { {0, -16}, {4, -10}, {-4, -10}, {0, -14} } },
	[87] = { .set = { {-2, -14}, {-5, -17}, {-7, -11}, {2, -12} } },
	[88] = { .set = { {-5, -14}, {-8, -17}, {-10, -11}, {-1, -12} } },
	[89] = { .set = { {1, -14}, {4, -17}, {6, -11}, {-3, -12} } },
	[90] = { .set = { {3, -14}, {6, -17}, {8, -11}, {-1, -12} } },
	[91] = { .set = { {-3, -16}, {2, -14}, {-8, -11}, {0, -13} } },
	[92] = { .set = { {-3, -15}, {2, -13}, {-8, -11}, {0, -12} } },
	[93] = { .set = { {-3, -17}, {2, -15}, {-8, -11}, {0, -14} } },
	[94] = { .set = { {-4, -14}, {-8, -10}, {-4, -17}, {0, -14} } },
	[95] = { .set = { {-4, -14}, {-8, -10}, {-4, -17}, {0, -14} } },
	[96] = { .set = { {0, -15}, {9, -22}, {-1, -15}, {-1, -14} } },
	[97] = { .set = { {0, -15}, {9, -22}, {-1, -15}, {-1, -14} } },
	[98] = { .set = { {-9, -12}, {-7, -14}, {-7, -6}, {-2, -11} } },
	[99] = { .set = { {-9, -11}, {-7, -13}, {-7, -5}, {-2, -10} } },
	[100] = { .set = { {-9, -13}, {-7, -15}, {-7, -7}, {-2, -12} } },
	[101] = { .set = { {-6, -7}, {-2, -3}, {4, -13}, {-1, -9} } },
	[102] = { .set = { {-6, -7}, {-2, -3}, {4, -13}, {-1, -9} } },
	[103] = { .set = { {-9, -8}, {-6, -19}, {-11, -7}, {-1, -10} } },
	[104] = { .set = { {-9, -8}, {-6, -19}, {-11, -7}, {-1, -10} } },
	[105] = { .set = { {-5, -10}, {-9, -8}, {-1, -3}, {-4, -12} } },
	[106] = { .set = { {-5, -9}, {-9, -7}, {-1, -2}, {-4, -11} } },
	[107] = { .set = { {-5, -11}, {-9, -9}, {-1, -4}, {-4, -13} } },
	[108] = { .set = { {-2, -7}, {-1, -4}, {9, -12}, {-3, -11} } },
	[109] = { .set = { {-2, -7}, {-1, -4}, {9, -12}, {-3, -11} } },
	[110] = { .set = { {-4, -9}, {-7, -19}, {-8, -7}, {-2, -11} } },
	[111] = { .set = { {-4, -9}, {-7, -19}, {-8, -7}, {-2, -11} } },
	[112] = { .set = { {-1, -9}, {-5, -3}, {3, -3}, {-1, -10} } },
	[113] = { .set = { {-1, -8}, {-5, -2}, {3, -2}, {-1, -9} } },
	[114] = { .set = { {-1, -11}, {-5, -5}, {3, -5}, {-1, -12} } },
	[115] = { .set = { {-1, -10}, {-13, -11}, {11, -11}, {-1, -11} } },
	[116] = { .set = { {5, -10}, {9, -8}, {1, -3}, {4, -12} } },
	[117] = { .set = { {5, -9}, {9, -7}, {1, -2}, {4, -11} } },
	[118] = { .set = { {5, -11}, {9, -9}, {1, -4}, {4, -13} } },
	[119] = { .set = { {4, -11}, {13, -16}, {-6, -9}, {3, -14} } },
	[120] = { .set = { {9, -12}, {7, -14}, {7, -6}, {2, -11} } },
	[121] = { .set = { {9, -11}, {7, -13}, {7, -5}, {2, -10} } },
	[122] = { .set = { {9, -13}, {7, -15}, {7, -7}, {2, -12} } },
	[123] = { .set = { {8, -13}, {6, -21}, {4, -8}, {0, -14} } },
	[124] = { .set = { {3, -16}, {-2, -14}, {8, -11}, {0, -13} } },
	[125] = { .set = { {3, -15}, {-2, -13}, {8, -11}, {0, -12} } },
	[126] = { .set = { {3, -17}, {-2, -15}, {8, -11}, {0, -14} } },
	[127] = { .set = { {2, -16}, {-5, -22}, {10, -16}, {-2, -14} } },
	[128] = { .set = { {0, -15}, {4, -10}, {-4, -10}, {0, -13} } },
	[129] = { .set = { {0, -14}, {4, -9}, {-4, -9}, {0, -12} } },
	[130] = { .set = { {0, -16}, {4, -10}, {-4, -10}, {0, -14} } },
	[131] = { .set = { {0, -13}, {10, -18}, {-10, -18}, {0, -11} } },
	[132] = { .set = { {-3, -16}, {2, -14}, {-8, -11}, {0, -13} } },
	[133] = { .set = { {-3, -15}, {2, -13}, {-8, -11}, {0, -12} } },
	[134] = { .set = { {-3, -17}, {2, -15}, {-8, -11}, {0, -14} } },
	[135] = { .set = { {-2, -16}, {5, -22}, {-10, -16}, {2, -14} } },
	[136] = { .set = { {-9, -12}, {-7, -14}, {-7, -6}, {-2, -11} } },
	[137] = { .set = { {-9, -11}, {-7, -13}, {-7, -5}, {-2, -10} } },
	[138] = { .set = { {-9, -13}, {-7, -15}, {-7, -7}, {-2, -12} } },
	[139] = { .set = { {-8, -13}, {-6, -21}, {-4, -8}, {0, -14} } },
	[140] = { .set = { {-5, -10}, {-9, -8}, {-1, -3}, {-4, -12} } },
	[141] = { .set = { {-5, -9}, {-9, -7}, {-1, -2}, {-4, -11} } },
	[142] = { .set = { {-5, -11}, {-9, -9}, {-1, -4}, {-4, -13} } },
	[143] = { .set = { {-4, -11}, {-13, -16}, {6, -9}, {-3, -14} } },
	[144] = { .set = { {-1, -9}, {-5, -3}, {3, -3}, {-1, -10} } },
	[145] = { .set = { {-1, -9}, {-5, -3}, {3, -3}, {-1, -10} } },
	[146] = { .set = { {-1, -9}, {-5, -3}, {3, -3}, {-1, -10} } },
	[147] = { .set = { {5, -10}, {9, -8}, {1, -3}, {4, -12} } },
	[148] = { .set = { {5, -10}, {9, -8}, {1, -3}, {4, -12} } },
	[149] = { .set = { {5, -10}, {9, -8}, {1, -3}, {4, -12} } },
	[150] = { .set = { {9, -12}, {7, -14}, {7, -6}, {2, -11} } },
	[151] = { .set = { {9, -12}, {7, -14}, {7, -6}, {2, -11} } },
	[152] = { .set = { {9, -12}, {7, -14}, {7, -6}, {2, -11} } },
	[153] = { .set = { {3, -16}, {-2, -14}, {8, -11}, {0, -13} } },
	[154] = { .set = { {3, -16}, {-2, -14}, {8, -12}, {0, -13} } },
	[155] = { .set = { {3, -16}, {-2, -14}, {8, -10}, {0, -13} } },
	[156] = { .set = { {0, -15}, {4, -10}, {-4, -10}, {0, -13} } },
	[157] = { .set = { {0, -15}, {4, -10}, {-4, -10}, {0, -13} } },
	[158] = { .set = { {0, -15}, {4, -9}, {-4, -9}, {0, -13} } },
	[159] = { .set = { {-3, -16}, {2, -14}, {-8, -11}, {0, -13} } },
	[160] = { .set = { {-3, -16}, {2, -14}, {-8, -12}, {0, -13} } },
	[161] = { .set = { {-3, -16}, {2, -14}, {-8, -10}, {0, -13} } },
	[162] = { .set = { {-9, -12}, {-7, -14}, {-7, -6}, {-2, -11} } },
	[163] = { .set = { {-9, -12}, {-7, -14}, {-7, -6}, {-2, -11} } },
	[164] = { .set = { {-9, -12}, {-7, -14}, {-7, -6}, {-2, -11} } },
	[165] = { .set = { {-5, -10}, {-9, -8}, {-1, -3}, {-4, -12} } },
	[166] = { .set = { {-5, -10}, {-9, -8}, {-1, -3}, {-4, -12} } },
	[167] = { .set = { {-5, -10}, {-9, -8}, {-1, -3}, {-4, -12} } },
	[168] = { .set = { {-1, -9}, {-5, -3}, {3, -3}, {-1, -10} } },
	[169] = { .set = { {-1, -8}, {-6, -2}, {4, -2}, {-1, -9} } },
	[170] = { .set = { {-1, -12}, {-4, -13}, {2, -13}, {-1, -14} } },
	[171] = { .set = { {2, -13}, {4, -14}, {-1, -12}, {1, -11} } },
	[172] = { .set = { {3, -13}, {3, -17}, {2, -10}, {0, -9} } },
	[173] = { .set = { {1, -16}, {0, -18}, {5, -15}, {-1, -9} } },
	[174] = { .set = { {-1, -13}, {3, -14}, {-5, -14}, {-1, -10} } },
	[175] = { .set = { {-2, -16}, {-1, -18}, {-6, -15}, {0, -9} } },
	[176] = { .set = { {-4, -13}, {-4, -17}, {-3, -10}, {-1, -9} } },
	[177] = { .set = { {-3, -13}, {-5, -14}, {0, -12}, {-2, -11} } },
	[178] = { .set = { {-1, -9}, {-5, -3}, {3, -3}, {-1, -10} } },
	[179] = { .set = { {-1, -8}, {-5, -2}, {3, -2}, {-1, -9} } },
	[180] = { .set = { {-1, -11}, {-5, -5}, {3, -5}, {-1, -12} } },
	[181] = { .set = { {5, -10}, {9, -8}, {1, -3}, {4, -12} } },
	[182] = { .set = { {5, -9}, {9, -7}, {1, -2}, {4, -11} } },
	[183] = { .set = { {5, -11}, {9, -9}, {1, -4}, {4, -13} } },
	[184] = { .set = { {9, -12}, {7, -14}, {7, -6}, {2, -11} } },
	[185] = { .set = { {9, -11}, {7, -13}, {7, -5}, {2, -10} } },
	[186] = { .set = { {9, -13}, {7, -15}, {7, -7}, {2, -12} } },
	[187] = { .set = { {3, -16}, {-2, -14}, {8, -11}, {0, -13} } },
	[188] = { .set = { {3, -15}, {-2, -13}, {8, -11}, {0, -12} } },
	[189] = { .set = { {3, -17}, {-2, -15}, {8, -11}, {0, -14} } },
	[190] = { .set = { {0, -15}, {4, -10}, {-4, -10}, {0, -13} } },
	[191] = { .set = { {0, -14}, {4, -9}, {-4, -9}, {0, -12} } },
	[192] = { .set = { {0, -16}, {4, -10}, {-4, -10}, {0, -14} } },
	[193] = { .set = { {-3, -16}, {2, -14}, {-8, -11}, {0, -13} } },
	[194] = { .set = { {-3, -15}, {2, -13}, {-8, -11}, {0, -12} } },
	[195] = { .set = { {-3, -17}, {2, -15}, {-8, -11}, {0, -14} } },
	[196] = { .set = { {-9, -12}, {-7, -14}, {-7, -6}, {-2, -11} } },
	[197] = { .set = { {-9, -11}, {-7, -13}, {-7, -5}, {-2, -10} } },
	[198] = { .set = { {-9, -13}, {-7, -15}, {-7, -7}, {-2, -12} } },
	[199] = { .set = { {-5, -10}, {-9, -8}, {-1, -3}, {-4, -12} } },
	[200] = { .set = { {-5, -9}, {-9, -7}, {-1, -2}, {-4, -11} } },
	[201] = { .set = { {-5, -11}, {-9, -9}, {-1, -4}, {-4, -13} } },
	[202] = { .set = { {-1, -9}, {-5, -3}, {3, -3}, {-1, -10} } },
	[203] = { .set = { {-4, -10}, {-8, -8}, {0, -3}, {-3, -12} } },
	[204] = { .set = { {-9, -12}, {-7, -14}, {-7, -6}, {-2, -11} } },
	[205] = { .set = { {-3, -16}, {2, -14}, {-8, -11}, {0, -13} } },
	[206] = { .set = { {0, -15}, {4, -10}, {-4, -10}, {0, -13} } },
	[207] = { .set = { {3, -16}, {-2, -14}, {8, -11}, {0, -13} } },
	[208] = { .set = { {9, -12}, {7, -14}, {7, -6}, {2, -11} } },
	[209] = { .set = { {4, -10}, {8, -8}, {0, -3}, {3, -12} } },
	[210] = { .set = { {4, -10}, {8, -8}, {0, -3}, {3, -12} } },
	[211] = { .set = { {9, -12}, {7, -14}, {7, -6}, {2, -11} } },
	[212] = { .set = { {4, -10}, {8, -8}, {0, -3}, {3, -12} } },
	[213] = { .set = { {3, -16}, {-2, -14}, {8, -11}, {0, -13} } },
	[214] = { .set = { {9, -12}, {7, -14}, {7, -6}, {2, -11} } },
	[215] = { .set = { {4, -10}, {8, -8}, {0, -3}, {3, -12} } },
	[216] = { .set = { {0, -15}, {4, -10}, {-4, -10}, {0, -13} } },
	[217] = { .set = { {3, -16}, {-2, -14}, {8, -11}, {0, -13} } },
	[218] = { .set = { {9, -12}, {7, -14}, {7, -6}, {2, -11} } },
	[219] = { .set = { {4, -10}, {8, -8}, {0, -3}, {3, -12} } },
	[220] = { .set = { {-3, -16}, {2, -14}, {-8, -11}, {0, -13} } },
	[221] = { .set = { {0, -15}, {4, -10}, {-4, -10}, {0, -13} } },
	[222] = { .set = { {3, -16}, {-2, -14}, {8, -11}, {0, -13} } },
	[223] = { .set = { {9, -12}, {7, -14}, {7, -6}, {2, -11} } },
	[224] = { .set = { {4, -10}, {8, -8}, {0, -3}, {3, -12} } },
	[225] = { .set = { {-9, -12}, {-7, -14}, {-7, -6}, {-2, -11} } },
	[226] = { .set = { {-3, -16}, {2, -14}, {-8, -11}, {0, -13} } },
	[227] = { .set = { {0, -15}, {4, -10}, {-4, -10}, {0, -13} } },
	[228] = { .set = { {3, -16}, {-2, -14}, {8, -11}, {0, -13} } },
	[229] = { .set = { {9, -12}, {7, -14}, {7, -6}, {2, -11} } },
	[230] = { .set = { {4, -10}, {8, -8}, {0, -3}, {3, -12} } },
	[231] = { .set = { {-4, -10}, {-8, -8}, {0, -3}, {-3, -12} } },
	[232] = { .set = { {-9, -12}, {-7, -14}, {-7, -6}, {-2, -11} } },
	[233] = { .set = { {-3, -16}, {2, -14}, {-8, -11}, {0, -13} } },
	[234] = { .set = { {0, -15}, {4, -10}, {-4, -10}, {0, -13} } },
	[235] = { .set = { {3, -16}, {-2, -14}, {8, -11}, {0, -13} } },
	[236] = { .set = { {9, -12}, {7, -14}, {7, -6}, {2, -11} } },
	[237] = { .set = { {4, -10}, {8, -8}, {0, -3}, {3, -12} } },
	[238] = { .set = { {-1, -10}, {-13, -11}, {11, -11}, {-1, -11} } },
	[239] = { .set = { {3, -10}, {12, -15}, {-7, -8}, {2, -13} } },
	[240] = { .set = { {8, -12}, {6, -20}, {4, -7}, {0, -13} } },
	[241] = { .set = { {3, -15}, {-4, -21}, {11, -15}, {-1, -13} } },
	[242] = { .set = { {0, -15}, {10, -20}, {-10, -20}, {0, -13} } },
	[243] = { .set = { {-3, -15}, {4, -21}, {-11, -15}, {1, -13} } },
	[244] = { .set = { {-8, -12}, {-6, -20}, {-4, -7}, {0, -13} } },
	[245] = { .set = { {-3, -10}, {-12, -15}, {7, -8}, {-2, -13} } },
	[246] = { .set = { {-1, -9}, {-5, -3}, {3, -3}, {-1, -10} } },
	[247] = { .set = { {-1, -9}, {-5, -3}, {3, -3}, {-1, -10} } },
	[248] = { .set = { {-1, -9}, {-5, -3}, {3, -3}, {-1, -10} } },
	[249] = { .set = { {5, -10}, {9, -8}, {1, -3}, {4, -12} } },
	[250] = { .set = { {5, -10}, {9, -8}, {1, -3}, {4, -12} } },
	[251] = { .set = { {5, -10}, {9, -8}, {1, -3}, {4, -12} } },
	[252] = { .set = { {9, -12}, {7, -14}, {7, -6}, {2, -11} } },
	[253] = { .set = { {9, -12}, {7, -14}, {7, -6}, {2, -11} } },
	[254] = { .set = { {9, -12}, {7, -14}, {7, -6}, {2, -11} } },
	[255] = { .set = { {3, -16}, {-2, -14}, {8, -11}, {0, -13} } },
	[256] = { .set = { {3, -16}, {-2, -14}, {8, -12}, {0, -13} } },
	[257] = { .set = { {3, -16}, {-2, -14}, {8, -10}, {0, -13} } },
	[258] = { .set = { {0, -15}, {4, -10}, {-4, -10}, {0, -13} } },
	[259] = { .set = { {0, -15}, {4, -10}, {-4, -10}, {0, -13} } },
	[260] = { .set = { {0, -15}, {4, -9}, {-4, -9}, {0, -13} } },
	[261] = { .set = { {-3, -16}, {2, -14}, {-8, -11}, {0, -13} } },
	[262] = { .set = { {-3, -16}, {2, -14}, {-8, -12}, {0, -13} } },
	[263] = { .set = { {-3, -16}, {2, -14}, {-8, -10}, {0, -13} } },
	[264] = { .set = { {-9, -12}, {-7, -14}, {-7, -6}, {-2, -11} } },
	[265] = { .set = { {-9, -12}, {-7, -14}, {-7, -6}, {-2, -11} } },
	[266] = { .set = { {-9, -12}, {-7, -14}, {-7, -6}, {-2, -11} } },
	[267] = { .set = { {-5, -10}, {-9, -8}, {-1, -3}, {-4, -12} } },
	[268] = { .set = { {-5, -10}, {-9, -8}, {-1, -3}, {-4, -12} } },
	[269] = { .set = { {-5, -10}, {-9, -8}, {-1, -3}, {-4, -12} } },
	[270] = { .set = { {-1, -8}, {-5, -2}, {3, -2}, {-1, -9} } },
	[271] = { .set = { {-4, -9}, {-8, -7}, {0, -2}, {-3, -11} } },
	[272] = { .set = { {-9, -11}, {-7, -13}, {-7, -5}, {-2, -10} } },
	[273] = { .set = { {-3, -15}, {2, -13}, {-8, -11}, {0, -12} } },
	[274] = { .set = { {0, -15}, {4, -10}, {-4, -10}, {0, -13} } },
	[275] = { .set = { {3, -15}, {-2, -13}, {8, -11}, {0, -12} } },
	[276] = { .set = { {9, -11}, {7, -13}, {7, -5}, {2, -10} } },
	[277] = { .set = { {4, -9}, {8, -7}, {0, -2}, {3, -11} } },
	[278] = { .set = { {-1, -9}, {-5, -3}, {3, -3}, {-1, -10} } },
	[279] = { .set = { {-5, -10}, {-9, -8}, {-1, -3}, {-4, -12} } },
	[280] = { .set = { {-9, -12}, {-7, -14}, {-7, -6}, {-2, -11} } },
	[281] = { .set = { {-3, -16}, {2, -14}, {-8, -11}, {0, -13} } },
	[282] = { .set = { {0, -15}, {4, -10}, {-4, -10}, {0, -13} } },
	[283] = { .set = { {3, -16}, {-2, -14}, {8, -11}, {0, -13} } },
	[284] = { .set = { {9, -12}, {7, -14}, {7, -6}, {2, -11} } },
	[285] = { .set = { {5, -10}, {9, -8}, {1, -3}, {4, -12} } },
};

static const ax_anim *const sNinjaskAnimTable1[] = {
	AX_ANIM_PTR(sNinjaskAnims_1_1),
	AX_ANIM_PTR(sNinjaskAnims_1_2),
	AX_ANIM_PTR(sNinjaskAnims_1_3),
	AX_ANIM_PTR(sNinjaskAnims_1_4),
	AX_ANIM_PTR(sNinjaskAnims_1_5),
	AX_ANIM_PTR(sNinjaskAnims_1_6),
	AX_ANIM_PTR(sNinjaskAnims_1_7),
	AX_ANIM_PTR(sNinjaskAnims_1_8),
};

static const ax_anim *const sNinjaskAnimTable2[] = {
	AX_ANIM_PTR(sNinjaskAnims_2_1),
	AX_ANIM_PTR(sNinjaskAnims_2_2),
	AX_ANIM_PTR(sNinjaskAnims_2_3),
	AX_ANIM_PTR(sNinjaskAnims_2_4),
	AX_ANIM_PTR(sNinjaskAnims_2_5),
	AX_ANIM_PTR(sNinjaskAnims_2_6),
	AX_ANIM_PTR(sNinjaskAnims_2_7),
	AX_ANIM_PTR(sNinjaskAnims_2_8),
};

static const ax_anim *const sNinjaskAnimTable3[] = {
	AX_ANIM_PTR(sNinjaskAnims_3_1),
	AX_ANIM_PTR(sNinjaskAnims_3_2),
	AX_ANIM_PTR(sNinjaskAnims_3_3),
	AX_ANIM_PTR(sNinjaskAnims_3_4),
	AX_ANIM_PTR(sNinjaskAnims_3_5),
	AX_ANIM_PTR(sNinjaskAnims_3_6),
	AX_ANIM_PTR(sNinjaskAnims_3_7),
	AX_ANIM_PTR(sNinjaskAnims_3_8),
};

static const ax_anim *const sNinjaskAnimTable4[] = {
	AX_ANIM_PTR(sNinjaskAnims_4_1),
	AX_ANIM_PTR(sNinjaskAnims_4_2),
	AX_ANIM_PTR(sNinjaskAnims_4_3),
	AX_ANIM_PTR(sNinjaskAnims_4_4),
	AX_ANIM_PTR(sNinjaskAnims_4_5),
	AX_ANIM_PTR(sNinjaskAnims_4_6),
	AX_ANIM_PTR(sNinjaskAnims_4_7),
	AX_ANIM_PTR(sNinjaskAnims_4_8),
};

static const ax_anim *const sNinjaskAnimTable5[] = {
	AX_ANIM_PTR(sNinjaskAnims_5_1),
	AX_ANIM_PTR(sNinjaskAnims_5_2),
	AX_ANIM_PTR(sNinjaskAnims_5_3),
	AX_ANIM_PTR(sNinjaskAnims_5_4),
	AX_ANIM_PTR(sNinjaskAnims_5_5),
	AX_ANIM_PTR(sNinjaskAnims_5_6),
	AX_ANIM_PTR(sNinjaskAnims_5_7),
	AX_ANIM_PTR(sNinjaskAnims_5_8),
};

static const ax_anim *const sNinjaskAnimTable6[] = {
	AX_ANIM_PTR(sNinjaskAnims_6_1),
	AX_ANIM_PTR(sNinjaskAnims_6_1),
	AX_ANIM_PTR(sNinjaskAnims_6_1),
	AX_ANIM_PTR(sNinjaskAnims_6_1),
	AX_ANIM_PTR(sNinjaskAnims_6_1),
	AX_ANIM_PTR(sNinjaskAnims_6_1),
	AX_ANIM_PTR(sNinjaskAnims_6_1),
	AX_ANIM_PTR(sNinjaskAnims_6_1),
};

static const ax_anim *const sNinjaskAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00790),
	AX_ANIM_PTR(gAxSharedAnim_00808),
	AX_ANIM_PTR(gAxSharedAnim_00819),
	AX_ANIM_PTR(gAxSharedAnim_00833),
	AX_ANIM_PTR(gAxSharedAnim_00854),
	AX_ANIM_PTR(gAxSharedAnim_00867),
	AX_ANIM_PTR(gAxSharedAnim_00884),
	AX_ANIM_PTR(gAxSharedAnim_00895),
};

static const ax_anim *const sNinjaskAnimTable8[] = {
	AX_ANIM_PTR(sNinjaskAnims_8_1),
	AX_ANIM_PTR(sNinjaskAnims_8_2),
	AX_ANIM_PTR(sNinjaskAnims_8_3),
	AX_ANIM_PTR(sNinjaskAnims_8_4),
	AX_ANIM_PTR(sNinjaskAnims_8_5),
	AX_ANIM_PTR(sNinjaskAnims_8_6),
	AX_ANIM_PTR(sNinjaskAnims_8_7),
	AX_ANIM_PTR(sNinjaskAnims_8_8),
};

static const ax_anim *const sNinjaskAnimTable9[] = {
	AX_ANIM_PTR(sNinjaskAnims_9_1),
	AX_ANIM_PTR(sNinjaskAnims_9_2),
	AX_ANIM_PTR(sNinjaskAnims_9_3),
	AX_ANIM_PTR(sNinjaskAnims_9_4),
	AX_ANIM_PTR(sNinjaskAnims_9_5),
	AX_ANIM_PTR(sNinjaskAnims_9_6),
	AX_ANIM_PTR(sNinjaskAnims_9_7),
	AX_ANIM_PTR(sNinjaskAnims_9_8),
};

static const ax_anim *const sNinjaskAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01547),
	AX_ANIM_PTR(gAxSharedAnim_01554),
	AX_ANIM_PTR(gAxSharedAnim_01576),
	AX_ANIM_PTR(gAxSharedAnim_01580),
	AX_ANIM_PTR(gAxSharedAnim_01585),
	AX_ANIM_PTR(gAxSharedAnim_01590),
	AX_ANIM_PTR(gAxSharedAnim_01596),
	AX_ANIM_PTR(gAxSharedAnim_01601),
};

static const ax_anim *const sNinjaskAnimTable11[] = {
	AX_ANIM_PTR(sNinjaskAnims_11_1),
	AX_ANIM_PTR(sNinjaskAnims_11_2),
	AX_ANIM_PTR(sNinjaskAnims_11_3),
	AX_ANIM_PTR(sNinjaskAnims_11_4),
	AX_ANIM_PTR(sNinjaskAnims_11_5),
	AX_ANIM_PTR(sNinjaskAnims_11_6),
	AX_ANIM_PTR(sNinjaskAnims_11_7),
	AX_ANIM_PTR(sNinjaskAnims_11_8),
};

static const ax_anim *const sNinjaskAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01734),
	AX_ANIM_PTR(gAxSharedAnim_01748),
	AX_ANIM_PTR(gAxSharedAnim_01745),
	AX_ANIM_PTR(gAxSharedAnim_01743),
	AX_ANIM_PTR(gAxSharedAnim_01742),
	AX_ANIM_PTR(gAxSharedAnim_01740),
	AX_ANIM_PTR(gAxSharedAnim_01737),
	AX_ANIM_PTR(gAxSharedAnim_01735),
};

static const ax_anim *const sNinjaskAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01750),
	AX_ANIM_PTR(gAxSharedAnim_01780),
	AX_ANIM_PTR(gAxSharedAnim_01778),
	AX_ANIM_PTR(gAxSharedAnim_01775),
	AX_ANIM_PTR(gAxSharedAnim_01771),
	AX_ANIM_PTR(gAxSharedAnim_01769),
	AX_ANIM_PTR(gAxSharedAnim_01767),
	AX_ANIM_PTR(gAxSharedAnim_01754),
};

static const ax_anim *const *const sAxAnimationsNinjask[] = {
	sNinjaskAnimTable1,
	sNinjaskAnimTable2,
	sNinjaskAnimTable3,
	sNinjaskAnimTable4,
	sNinjaskAnimTable5,
	sNinjaskAnimTable6,
	sNinjaskAnimTable7,
	sNinjaskAnimTable8,
	sNinjaskAnimTable9,
	sNinjaskAnimTable10,
	sNinjaskAnimTable11,
	sNinjaskAnimTable12,
	sNinjaskAnimTable13,
};

static const ax_sprite *const sAxSpritesNinjask[] = {
	sNinjaskSprites1,
	sNinjaskSprites2,
	sNinjaskSprites3,
	sNinjaskSprites4,
	sNinjaskSprites5,
	sNinjaskSprites6,
	sNinjaskSprites7,
	sNinjaskSprites8,
	sNinjaskSprites9,
	sNinjaskSprites10,
	sNinjaskSprites11,
	sNinjaskSprites12,
	sNinjaskSprites13,
	sNinjaskSprites14,
	sNinjaskSprites15,
	sNinjaskSprites16,
	sNinjaskSprites17,
	sNinjaskSprites18,
	sNinjaskSprites19,
	sNinjaskSprites20,
	sNinjaskSprites21,
	sNinjaskSprites22,
	sNinjaskSprites23,
	sNinjaskSprites24,
	sNinjaskSprites25,
	sNinjaskSprites26,
	sNinjaskSprites27,
	sNinjaskSprites28,
	sNinjaskSprites29,
	sNinjaskSprites30,
	sNinjaskSprites31,
	sNinjaskSprites32,
	sNinjaskSprites33,
	sNinjaskSprites34,
	sNinjaskSprites35,
	sNinjaskSprites36,
	sNinjaskSprites37,
	sNinjaskSprites38,
	sNinjaskSprites39,
	sNinjaskSprites40,
	sNinjaskSprites41,
	sNinjaskSprites42,
	sNinjaskSprites43,
	sNinjaskSprites44,
	sNinjaskSprites45,
	sNinjaskSprites46,
	sNinjaskSprites47,
};

static const axmain sAxMainNinjask = {
	.poses = sAxPosesNinjask,
	.animations = sAxAnimationsNinjask,
	.animCount = ARRAY_COUNT(sAxAnimationsNinjask),
	.spriteData = sAxSpritesNinjask,
	.positions = sAxPositionsNinjask,
};
