/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainGeodude;
const SiroArchive gAxGeodude = {"SIRO", &sAxMainGeodude};

static const ax_pose sGeodudePose1[] = {
	AX_POSE(0, OAM1(240, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose2[] = {
	AX_POSE(1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose3[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose4[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose5[] = {
	AX_POSE(4, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose6[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose7[] = {
	AX_POSE(6, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose8[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose9[] = {
	AX_POSE(8, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose10[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose11[] = {
	AX_POSE(10, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose12[] = {
	AX_POSE(11, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose13[] = {
	AX_POSE(12, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose14[] = {
	AX_POSE(13, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose15[] = {
	AX_POSE(14, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose16[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose17[] = {
	AX_POSE(10, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose18[] = {
	AX_POSE(11, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose19[] = {
	AX_POSE(6, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose20[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose21[] = {
	AX_POSE(8, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose22[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose23[] = {
	AX_POSE(15, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose24[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose49[] = {
	AX_POSE(16, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose50[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose51[] = {
	AX_POSE(18, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose52[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose53[] = {
	AX_POSE(20, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose54[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose55[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose56[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose57[] = {
	AX_POSE(24, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose58[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose59[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(27, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 7)),
	AX_POSE(28, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(24, 3, 7)),
	AX_POSE(29, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(28, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose60[] = {
	AX_POSE(27, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(28, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 7)),
	AX_POSE(29, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose61[] = {
	AX_POSE(30, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose62[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose63[] = {
	AX_POSE(32, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(33, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose64[] = {
	AX_POSE(33, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose65[] = {
	AX_POSE(34, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose66[] = {
	AX_POSE(35, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose67[] = {
	AX_POSE(36, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 7)),
	AX_POSE(37, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose68[] = {
	AX_POSE(37, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose69[] = {
	AX_POSE(30, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose70[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose71[] = {
	AX_POSE(32, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(33, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose72[] = {
	AX_POSE(33, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose73[] = {
	AX_POSE(24, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose74[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose75[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(27, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(28, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(24, 3, 7)),
	AX_POSE(29, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(28, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose76[] = {
	AX_POSE(27, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 7)),
	AX_POSE(28, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(29, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose77[] = {
	AX_POSE(20, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose78[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose79[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose80[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose84[] = {
	AX_POSE(38, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(39, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(40, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(9, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose86[] = {
	AX_POSE(15, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose88[] = {
	AX_POSE(41, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(42, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(43, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(9, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose92[] = {
	AX_POSE(44, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose96[] = {
	AX_POSE(45, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose100[] = {
	AX_POSE(46, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(47, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(48, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(9, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose104[] = {
	AX_POSE(45, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose108[] = {
	AX_POSE(44, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose112[] = {
	AX_POSE(41, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(42, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 7)),
	AX_POSE(43, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(9, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose121[] = {
	AX_POSE(49, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose122[] = {
	AX_POSE(50, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose123[] = {
	AX_POSE(51, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose124[] = {
	AX_POSE(52, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose125[] = {
	AX_POSE(53, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose126[] = {
	AX_POSE(54, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose127[] = {
	AX_POSE(55, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose128[] = {
	AX_POSE(54, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose129[] = {
	AX_POSE(53, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose130[] = {
	AX_POSE(52, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose190[] = {
	AX_POSE(56, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGeodudePose196[] = {
	AX_POSE(56, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_anim sGeodudeAnims_2_1[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 24, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 45, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {1, -5}, .shadow = {1, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 47, .offset = {1, -5}, .shadow = {1, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 9}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 1, .poseId = 29, .offset = {0, 21}, .shadow = {0, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {-1, 21}, .shadow = {-1, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {0, 21}, .shadow = {0, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {-1, 21}, .shadow = {-1, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 9}, .shadow = {0, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 4}, .shadow = {0, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_2_2[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 27, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 24, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-4, -6}, .shadow = {-4, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 26, .offset = {-4, -6}, .shadow = {-4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 1, .unkFlags = 1, .poseId = 32, .offset = {21, 21}, .shadow = {21, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {22, 20}, .shadow = {22, 20} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {21, 21}, .shadow = {21, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {22, 20}, .shadow = {22, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {15, 15}, .shadow = {15, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {7, 7}, .shadow = {7, 7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_2_3[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 30, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 27, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {-5, -1}, .shadow = {-5, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 28, .offset = {-5, -1}, .shadow = {-5, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 33, .offset = {21, 0}, .shadow = {21, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {21, -1}, .shadow = {21, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {21, 0}, .shadow = {21, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {21, -1}, .shadow = {21, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {17, -1}, .shadow = {17, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {5, 0}, .shadow = {5, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_2_4[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 33, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 30, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {-4, 6}, .shadow = {-4, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 31, .offset = {-4, 6}, .shadow = {-4, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {12, -12}, .shadow = {12, -12} },
	{ .frames = 1, .unkFlags = 1, .poseId = 37, .offset = {21, -22}, .shadow = {21, -22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {20, -23}, .shadow = {20, -23} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {21, -22}, .shadow = {21, -22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {20, -23}, .shadow = {20, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {11, -11}, .shadow = {11, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {5, -5}, .shadow = {5, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_2_5[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 36, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 33, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-1, 5}, .shadow = {-1, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 34, .offset = {-1, 5}, .shadow = {-1, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 1, .unkFlags = 1, .poseId = 39, .offset = {0, -23}, .shadow = {0, -23} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {-1, -23}, .shadow = {-1, -23} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {0, -23}, .shadow = {0, -23} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {-1, -23}, .shadow = {-1, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -15}, .shadow = {0, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_2_6[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 37, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {4, 6}, .shadow = {4, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 36, .offset = {4, 6}, .shadow = {4, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {-12, -12}, .shadow = {-10, -12} },
	{ .frames = 1, .unkFlags = 1, .poseId = 42, .offset = {-21, -22}, .shadow = {-21, -22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {-20, -23}, .shadow = {-20, -23} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {-21, -22}, .shadow = {-21, -22} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {-20, -23}, .shadow = {-20, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-14, -14}, .shadow = {-14, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-5, -5}, .shadow = {-5, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_2_7[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 42, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 40, .offset = {4, -1}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {6, -1}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {6, -2}, .shadow = {5, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {6, -1}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 41, .offset = {6, -2}, .shadow = {5, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {-2, -1}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 46, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-21, -1}, .shadow = {-21, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-21, -1}, .shadow = {-21, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-14, -1}, .shadow = {-14, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_2_8[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 45, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 42, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {5, -7}, .shadow = {5, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 44, .offset = {5, -7}, .shadow = {5, -7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 1, .unkFlags = 1, .poseId = 25, .offset = {-21, 21}, .shadow = {-21, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {-22, 20}, .shadow = {-22, 20} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {-21, 21}, .shadow = {-21, 21} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {-22, 20}, .shadow = {-22, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {-15, 15}, .shadow = {-15, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 49, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {3, 12}, .shadow = {3, 12} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {4, 12}, .shadow = {4, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {3, 12}, .shadow = {3, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {4, 12}, .shadow = {4, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {3, 10}, .shadow = {3, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, 4}, .shadow = {1, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 53, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 2, .unkFlags = 1, .poseId = 55, .offset = {11, 13}, .shadow = {11, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {11, 13}, .shadow = {11, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {4, 4}, .shadow = {4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 57, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {9, 0}, .shadow = {9, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 59, .offset = {9, -1}, .shadow = {9, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {9, 0}, .shadow = {9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {9, -1}, .shadow = {9, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {7, 0}, .shadow = {7, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 61, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 61, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {15, -15}, .shadow = {15, -15} },
	{ .frames = 2, .unkFlags = 1, .poseId = 63, .offset = {14, -16}, .shadow = {14, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {15, -15}, .shadow = {15, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {14, -16}, .shadow = {14, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {3, -3}, .shadow = {3, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 65, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-2, -15}, .shadow = {-2, -15} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {-1, -15}, .shadow = {-1, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-2, -15}, .shadow = {-2, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-1, -15}, .shadow = {-1, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-1, -10}, .shadow = {-1, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -3}, .shadow = {0, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 69, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-15, -15}, .shadow = {-15, -15} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {-14, -16}, .shadow = {-14, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-15, -15}, .shadow = {-15, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-14, -16}, .shadow = {-14, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-3, -3}, .shadow = {-3, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 73, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {-9, 0}, .shadow = {-9, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 75, .offset = {-9, -1}, .shadow = {-9, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-9, 0}, .shadow = {-9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-9, -1}, .shadow = {-9, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {-7, 0}, .shadow = {-7, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 77, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {-12, 12}, .shadow = {-12, 12} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {-11, 13}, .shadow = {-11, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-12, 12}, .shadow = {-12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-11, 13}, .shadow = {-11, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-4, 4}, .shadow = {-4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 82, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 82, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 83, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 83, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {1, 4}, .shadow = {1, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {1, 4}, .shadow = {1, 4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {1, 4}, .shadow = {1, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {1, 4}, .shadow = {1, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, 2}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 86, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 86, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 87, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 87, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {5, 3}, .shadow = {5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {5, 3}, .shadow = {5, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 87, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {5, 3}, .shadow = {5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {5, 3}, .shadow = {5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {2, 2}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 91, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {4, -1}, .shadow = {4, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {4, -1}, .shadow = {4, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 91, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {4, -1}, .shadow = {4, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {4, -1}, .shadow = {4, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 95, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {5, -3}, .shadow = {5, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {5, -3}, .shadow = {5, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {5, -3}, .shadow = {5, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {5, -3}, .shadow = {5, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {2, -2}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 99, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {1, -4}, .shadow = {1, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {1, -4}, .shadow = {1, -4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {1, -4}, .shadow = {1, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {1, -4}, .shadow = {1, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 103, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-5, -3}, .shadow = {-5, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-5, -3}, .shadow = {-5, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-5, -3}, .shadow = {-5, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-5, -3}, .shadow = {-5, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {-2, -2}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 106, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 107, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-4, -1}, .shadow = {-4, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-4, -1}, .shadow = {-4, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 107, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-4, -1}, .shadow = {-4, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-4, -1}, .shadow = {-4, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 111, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-5, 3}, .shadow = {-5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-5, 3}, .shadow = {-5, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 111, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-5, 3}, .shadow = {-5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-5, 3}, .shadow = {-5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-2, 2}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_6_1[] = {
	{ .frames = 9, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 120, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 20, .unkFlags = 0, .poseId = 120, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 9, .unkFlags = 0, .poseId = 121, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 121, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 20, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_8_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 130, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 130, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_8_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 137, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 137, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_8_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 136, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 136, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_8_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 135, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 135, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_8_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 134, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 134, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_8_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 133, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 133, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_8_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 132, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 132, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_8_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 131, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 131, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {22, 10}, .shadow = {22, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 141, .offset = {21, 20}, .shadow = {21, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 142, .offset = {10, 21}, .shadow = {10, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {16, -5}, .shadow = {16, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 140, .offset = {23, -2}, .shadow = {23, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 141, .offset = {18, 6}, .shadow = {18, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {12, 7}, .shadow = {12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {12, -22}, .shadow = {12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 139, .offset = {22, -24}, .shadow = {22, -24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 140, .offset = {25, -15}, .shadow = {25, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {20, -6}, .shadow = {20, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-7, -20}, .shadow = {-7, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 138, .offset = {0, -25}, .shadow = {0, -25} },
	{ .frames = 2, .unkFlags = 3, .poseId = 139, .offset = {7, -20}, .shadow = {7, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {9, -10}, .shadow = {9, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {-12, -22}, .shadow = {-12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 145, .offset = {-22, -24}, .shadow = {-22, -24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 144, .offset = {-25, -15}, .shadow = {-25, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {-20, -6}, .shadow = {-20, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-16, -5}, .shadow = {-16, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 144, .offset = {-23, -2}, .shadow = {-23, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 143, .offset = {-18, 6}, .shadow = {-18, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {-12, 7}, .shadow = {-12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-22, 10}, .shadow = {-22, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 143, .offset = {-21, 20}, .shadow = {-21, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 142, .offset = {-10, 21}, .shadow = {-10, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_10_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {-12, -12}, .shadow = {-12, -12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 152, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 152, .offset = {-13, -13}, .shadow = {-13, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 152, .offset = {13, 13}, .shadow = {13, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {-12, -12}, .shadow = {-12, -12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 152, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_10_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 158, .offset = {0, 12}, .shadow = {0, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 158, .offset = {0, -13}, .shadow = {0, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 158, .offset = {0, 13}, .shadow = {0, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 158, .offset = {0, 12}, .shadow = {0, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_10_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-12, -12}, .shadow = {-12, -12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 160, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 160, .offset = {-13, -13}, .shadow = {-13, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 160, .offset = {13, 13}, .shadow = {13, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-12, -12}, .shadow = {-12, -12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 160, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGeodudeAnims_12_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sGeodudeGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_1.4bpp.lz");
static const ax_sprite sGeodudeSprites1[] = {
	{sGeodudeGfx1, ARRAY_COUNT(sGeodudeGfx1)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_2.4bpp.lz");
static const ax_sprite sGeodudeSprites2[] = {
	{sGeodudeGfx2, ARRAY_COUNT(sGeodudeGfx2)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_3.4bpp.lz");
static const ax_sprite sGeodudeSprites3[] = {
	{sGeodudeGfx3, ARRAY_COUNT(sGeodudeGfx3)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_4.4bpp.lz");
static const ax_sprite sGeodudeSprites4[] = {
	{sGeodudeGfx4, ARRAY_COUNT(sGeodudeGfx4)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_5.4bpp.lz");
static const ax_sprite sGeodudeSprites5[] = {
	{sGeodudeGfx5, ARRAY_COUNT(sGeodudeGfx5)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_6.4bpp.lz");
static const ax_sprite sGeodudeSprites6[] = {
	{sGeodudeGfx6, ARRAY_COUNT(sGeodudeGfx6)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_7.4bpp.lz");
static const ax_sprite sGeodudeSprites7[] = {
	{sGeodudeGfx7, ARRAY_COUNT(sGeodudeGfx7)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_8.4bpp.lz");
static const ax_sprite sGeodudeSprites8[] = {
	{sGeodudeGfx8, ARRAY_COUNT(sGeodudeGfx8)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_9.4bpp.lz");
static const ax_sprite sGeodudeSprites9[] = {
	{sGeodudeGfx9, ARRAY_COUNT(sGeodudeGfx9)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_10.4bpp.lz");
static const ax_sprite sGeodudeSprites10[] = {
	{sGeodudeGfx10, ARRAY_COUNT(sGeodudeGfx10)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_11.4bpp.lz");
static const ax_sprite sGeodudeSprites11[] = {
	{sGeodudeGfx11, ARRAY_COUNT(sGeodudeGfx11)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_12.4bpp.lz");
static const ax_sprite sGeodudeSprites12[] = {
	{sGeodudeGfx12, ARRAY_COUNT(sGeodudeGfx12)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_13.4bpp.lz");
static const ax_sprite sGeodudeSprites13[] = {
	{sGeodudeGfx13, ARRAY_COUNT(sGeodudeGfx13)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_14.4bpp.lz");
static const ax_sprite sGeodudeSprites14[] = {
	{sGeodudeGfx14, ARRAY_COUNT(sGeodudeGfx14)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_15.4bpp.lz");
static const ax_sprite sGeodudeSprites15[] = {
	{sGeodudeGfx15, ARRAY_COUNT(sGeodudeGfx15)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_16.4bpp.lz");
static const ax_sprite sGeodudeSprites16[] = {
	{sGeodudeGfx16, ARRAY_COUNT(sGeodudeGfx16)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_17.4bpp.lz");
static const ax_sprite sGeodudeSprites17[] = {
	{sGeodudeGfx17, ARRAY_COUNT(sGeodudeGfx17)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_18.4bpp.lz");
static const u8 sGeodudeGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_18_1.4bpp.lz");
static const u8 sGeodudeGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_18_2.4bpp.lz");
static const u8 sGeodudeGfx18_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_18_3.4bpp.lz");
static const ax_sprite sGeodudeSprites18[] = {
	{NULL, 32}, 
	{sGeodudeGfx18, ARRAY_COUNT(sGeodudeGfx18)}, 
	{NULL, 64}, 
	{sGeodudeGfx18_1, ARRAY_COUNT(sGeodudeGfx18_1)}, 
	{NULL, 32}, 
	{sGeodudeGfx18_2, ARRAY_COUNT(sGeodudeGfx18_2)}, 
	{NULL, 64}, 
	{sGeodudeGfx18_3, ARRAY_COUNT(sGeodudeGfx18_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_19.4bpp.lz");
static const ax_sprite sGeodudeSprites19[] = {
	{sGeodudeGfx19, ARRAY_COUNT(sGeodudeGfx19)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_20.4bpp.lz");
static const u8 sGeodudeGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_20_1.4bpp.lz");
static const u8 sGeodudeGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_20_2.4bpp.lz");
static const u8 sGeodudeGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_20_3.4bpp.lz");
static const ax_sprite sGeodudeSprites20[] = {
	{NULL, 64}, 
	{sGeodudeGfx20, ARRAY_COUNT(sGeodudeGfx20)}, 
	{NULL, 32}, 
	{sGeodudeGfx20_1, ARRAY_COUNT(sGeodudeGfx20_1)}, 
	{NULL, 32}, 
	{sGeodudeGfx20_2, ARRAY_COUNT(sGeodudeGfx20_2)}, 
	{NULL, 32}, 
	{sGeodudeGfx20_3, ARRAY_COUNT(sGeodudeGfx20_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_21.4bpp.lz");
static const u8 sGeodudeGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_21_1.4bpp.lz");
static const u8 sGeodudeGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_21_2.4bpp.lz");
static const ax_sprite sGeodudeSprites21[] = {
	{sGeodudeGfx21, ARRAY_COUNT(sGeodudeGfx21)}, 
	{NULL, 32}, 
	{sGeodudeGfx21_1, ARRAY_COUNT(sGeodudeGfx21_1)}, 
	{NULL, 64}, 
	{sGeodudeGfx21_2, ARRAY_COUNT(sGeodudeGfx21_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_22.4bpp.lz");
static const u8 sGeodudeGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_22_1.4bpp.lz");
static const u8 sGeodudeGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_22_2.4bpp.lz");
static const u8 sGeodudeGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_22_3.4bpp.lz");
static const ax_sprite sGeodudeSprites22[] = {
	{NULL, 32}, 
	{sGeodudeGfx22, ARRAY_COUNT(sGeodudeGfx22)}, 
	{NULL, 64}, 
	{sGeodudeGfx22_1, ARRAY_COUNT(sGeodudeGfx22_1)}, 
	{NULL, 32}, 
	{sGeodudeGfx22_2, ARRAY_COUNT(sGeodudeGfx22_2)}, 
	{NULL, 32}, 
	{sGeodudeGfx22_3, ARRAY_COUNT(sGeodudeGfx22_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_23.4bpp.lz");
static const u8 sGeodudeGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_23_1.4bpp.lz");
static const u8 sGeodudeGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_23_2.4bpp.lz");
static const u8 sGeodudeGfx23_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_23_3.4bpp.lz");
static const ax_sprite sGeodudeSprites23[] = {
	{NULL, 32}, 
	{sGeodudeGfx23, ARRAY_COUNT(sGeodudeGfx23)}, 
	{NULL, 32}, 
	{sGeodudeGfx23_1, ARRAY_COUNT(sGeodudeGfx23_1)}, 
	{NULL, 64}, 
	{sGeodudeGfx23_2, ARRAY_COUNT(sGeodudeGfx23_2)}, 
	{NULL, 64}, 
	{sGeodudeGfx23_3, ARRAY_COUNT(sGeodudeGfx23_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_24.4bpp.lz");
static const u8 sGeodudeGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_24_1.4bpp.lz");
static const ax_sprite sGeodudeSprites24[] = {
	{NULL, 160}, 
	{sGeodudeGfx24, ARRAY_COUNT(sGeodudeGfx24)}, 
	{NULL, 32}, 
	{sGeodudeGfx24_1, ARRAY_COUNT(sGeodudeGfx24_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_25.4bpp.lz");
static const u8 sGeodudeGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_25_1.4bpp.lz");
static const u8 sGeodudeGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_25_2.4bpp.lz");
static const ax_sprite sGeodudeSprites25[] = {
	{sGeodudeGfx25, ARRAY_COUNT(sGeodudeGfx25)}, 
	{NULL, 32}, 
	{sGeodudeGfx25_1, ARRAY_COUNT(sGeodudeGfx25_1)}, 
	{NULL, 64}, 
	{sGeodudeGfx25_2, ARRAY_COUNT(sGeodudeGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_26.4bpp.lz");
static const u8 sGeodudeGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_26_1.4bpp.lz");
static const ax_sprite sGeodudeSprites26[] = {
	{NULL, 128}, 
	{sGeodudeGfx26, ARRAY_COUNT(sGeodudeGfx26)}, 
	{NULL, 64}, 
	{sGeodudeGfx26_1, ARRAY_COUNT(sGeodudeGfx26_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_27.4bpp.lz");
static const u8 sGeodudeGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_27_1.4bpp.lz");
static const ax_sprite sGeodudeSprites27[] = {
	{sGeodudeGfx27, ARRAY_COUNT(sGeodudeGfx27)}, 
	{NULL, 64}, 
	{sGeodudeGfx27_1, ARRAY_COUNT(sGeodudeGfx27_1)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_28.4bpp.lz");
static const u8 sGeodudeGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_28_1.4bpp.lz");
static const ax_sprite sGeodudeSprites28[] = {
	{NULL, 64}, 
	{sGeodudeGfx28, ARRAY_COUNT(sGeodudeGfx28)}, 
	{NULL, 32}, 
	{sGeodudeGfx28_1, ARRAY_COUNT(sGeodudeGfx28_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_29.4bpp.lz");
static const ax_sprite sGeodudeSprites29[] = {
	{sGeodudeGfx29, ARRAY_COUNT(sGeodudeGfx29)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_30.4bpp.lz");
static const ax_sprite sGeodudeSprites30[] = {
	{sGeodudeGfx30, ARRAY_COUNT(sGeodudeGfx30)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_31.4bpp.lz");
static const u8 sGeodudeGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_31_1.4bpp.lz");
static const u8 sGeodudeGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_31_2.4bpp.lz");
static const ax_sprite sGeodudeSprites31[] = {
	{NULL, 32}, 
	{sGeodudeGfx31, ARRAY_COUNT(sGeodudeGfx31)}, 
	{NULL, 32}, 
	{sGeodudeGfx31_1, ARRAY_COUNT(sGeodudeGfx31_1)}, 
	{NULL, 32}, 
	{sGeodudeGfx31_2, ARRAY_COUNT(sGeodudeGfx31_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_32.4bpp.lz");
static const u8 sGeodudeGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_32_1.4bpp.lz");
static const u8 sGeodudeGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_32_2.4bpp.lz");
static const u8 sGeodudeGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_32_3.4bpp.lz");
static const ax_sprite sGeodudeSprites32[] = {
	{sGeodudeGfx32, ARRAY_COUNT(sGeodudeGfx32)}, 
	{NULL, 64}, 
	{sGeodudeGfx32_1, ARRAY_COUNT(sGeodudeGfx32_1)}, 
	{NULL, 64}, 
	{sGeodudeGfx32_2, ARRAY_COUNT(sGeodudeGfx32_2)}, 
	{NULL, 96}, 
	{sGeodudeGfx32_3, ARRAY_COUNT(sGeodudeGfx32_3)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_33.4bpp.lz");
static const u8 sGeodudeGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_33_1.4bpp.lz");
static const u8 sGeodudeGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_33_2.4bpp.lz");
static const ax_sprite sGeodudeSprites33[] = {
	{sGeodudeGfx33, ARRAY_COUNT(sGeodudeGfx33)}, 
	{NULL, 96}, 
	{sGeodudeGfx33_1, ARRAY_COUNT(sGeodudeGfx33_1)}, 
	{NULL, 96}, 
	{sGeodudeGfx33_2, ARRAY_COUNT(sGeodudeGfx33_2)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_34.4bpp.lz");
static const u8 sGeodudeGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_34_1.4bpp.lz");
static const u8 sGeodudeGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_34_2.4bpp.lz");
static const u8 sGeodudeGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_34_3.4bpp.lz");
static const ax_sprite sGeodudeSprites34[] = {
	{sGeodudeGfx34, ARRAY_COUNT(sGeodudeGfx34)}, 
	{NULL, 64}, 
	{sGeodudeGfx34_1, ARRAY_COUNT(sGeodudeGfx34_1)}, 
	{NULL, 64}, 
	{sGeodudeGfx34_2, ARRAY_COUNT(sGeodudeGfx34_2)}, 
	{NULL, 96}, 
	{sGeodudeGfx34_3, ARRAY_COUNT(sGeodudeGfx34_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_35.4bpp.lz");
static const ax_sprite sGeodudeSprites35[] = {
	{sGeodudeGfx35, ARRAY_COUNT(sGeodudeGfx35)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_36.4bpp.lz");
static const u8 sGeodudeGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_36_1.4bpp.lz");
static const u8 sGeodudeGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_36_2.4bpp.lz");
static const u8 sGeodudeGfx36_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_36_3.4bpp.lz");
static const ax_sprite sGeodudeSprites36[] = {
	{NULL, 32}, 
	{sGeodudeGfx36, ARRAY_COUNT(sGeodudeGfx36)}, 
	{NULL, 32}, 
	{sGeodudeGfx36_1, ARRAY_COUNT(sGeodudeGfx36_1)}, 
	{NULL, 64}, 
	{sGeodudeGfx36_2, ARRAY_COUNT(sGeodudeGfx36_2)}, 
	{NULL, 96}, 
	{sGeodudeGfx36_3, ARRAY_COUNT(sGeodudeGfx36_3)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_37.4bpp.lz");
static const u8 sGeodudeGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_37_1.4bpp.lz");
static const u8 sGeodudeGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_37_2.4bpp.lz");
static const ax_sprite sGeodudeSprites37[] = {
	{sGeodudeGfx37, ARRAY_COUNT(sGeodudeGfx37)}, 
	{NULL, 32}, 
	{sGeodudeGfx37_1, ARRAY_COUNT(sGeodudeGfx37_1)}, 
	{NULL, 32}, 
	{sGeodudeGfx37_2, ARRAY_COUNT(sGeodudeGfx37_2)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_38.4bpp.lz");
static const u8 sGeodudeGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_38_1.4bpp.lz");
static const u8 sGeodudeGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_38_2.4bpp.lz");
static const u8 sGeodudeGfx38_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_38_3.4bpp.lz");
static const ax_sprite sGeodudeSprites38[] = {
	{NULL, 32}, 
	{sGeodudeGfx38, ARRAY_COUNT(sGeodudeGfx38)}, 
	{NULL, 64}, 
	{sGeodudeGfx38_1, ARRAY_COUNT(sGeodudeGfx38_1)}, 
	{NULL, 32}, 
	{sGeodudeGfx38_2, ARRAY_COUNT(sGeodudeGfx38_2)}, 
	{NULL, 32}, 
	{sGeodudeGfx38_3, ARRAY_COUNT(sGeodudeGfx38_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_39.4bpp.lz");
static const ax_sprite sGeodudeSprites39[] = {
	{sGeodudeGfx39, ARRAY_COUNT(sGeodudeGfx39)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_40.4bpp.lz");
static const ax_sprite sGeodudeSprites40[] = {
	{sGeodudeGfx40, ARRAY_COUNT(sGeodudeGfx40)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_41.4bpp.lz");
static const ax_sprite sGeodudeSprites41[] = {
	{sGeodudeGfx41, ARRAY_COUNT(sGeodudeGfx41)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_42.4bpp.lz");
static const u8 sGeodudeGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_42_1.4bpp.lz");
static const ax_sprite sGeodudeSprites42[] = {
	{sGeodudeGfx42, ARRAY_COUNT(sGeodudeGfx42)}, 
	{NULL, 32}, 
	{sGeodudeGfx42_1, ARRAY_COUNT(sGeodudeGfx42_1)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_43.4bpp.lz");
static const ax_sprite sGeodudeSprites43[] = {
	{sGeodudeGfx43, ARRAY_COUNT(sGeodudeGfx43)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_44.4bpp.lz");
static const ax_sprite sGeodudeSprites44[] = {
	{sGeodudeGfx44, ARRAY_COUNT(sGeodudeGfx44)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_45.4bpp.lz");
static const u8 sGeodudeGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_45_1.4bpp.lz");
static const u8 sGeodudeGfx45_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_45_2.4bpp.lz");
static const ax_sprite sGeodudeSprites45[] = {
	{NULL, 160}, 
	{sGeodudeGfx45, ARRAY_COUNT(sGeodudeGfx45)}, 
	{NULL, 64}, 
	{sGeodudeGfx45_1, ARRAY_COUNT(sGeodudeGfx45_1)}, 
	{NULL, 32}, 
	{sGeodudeGfx45_2, ARRAY_COUNT(sGeodudeGfx45_2)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_46.4bpp.lz");
static const ax_sprite sGeodudeSprites46[] = {
	{NULL, 160}, 
	{sGeodudeGfx46, ARRAY_COUNT(sGeodudeGfx46)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_47.4bpp.lz");
static const u8 sGeodudeGfx47_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_47_1.4bpp.lz");
static const ax_sprite sGeodudeSprites47[] = {
	{NULL, 32}, 
	{sGeodudeGfx47, ARRAY_COUNT(sGeodudeGfx47)}, 
	{NULL, 32}, 
	{sGeodudeGfx47_1, ARRAY_COUNT(sGeodudeGfx47_1)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_48.4bpp.lz");
static const ax_sprite sGeodudeSprites48[] = {
	{sGeodudeGfx48, ARRAY_COUNT(sGeodudeGfx48)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_49.4bpp.lz");
static const ax_sprite sGeodudeSprites49[] = {
	{sGeodudeGfx49, ARRAY_COUNT(sGeodudeGfx49)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_50.4bpp.lz");
static const ax_sprite sGeodudeSprites50[] = {
	{sGeodudeGfx50, ARRAY_COUNT(sGeodudeGfx50)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_51.4bpp.lz");
static const ax_sprite sGeodudeSprites51[] = {
	{sGeodudeGfx51, ARRAY_COUNT(sGeodudeGfx51)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_52.4bpp.lz");
static const ax_sprite sGeodudeSprites52[] = {
	{sGeodudeGfx52, ARRAY_COUNT(sGeodudeGfx52)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_53.4bpp.lz");
static const ax_sprite sGeodudeSprites53[] = {
	{sGeodudeGfx53, ARRAY_COUNT(sGeodudeGfx53)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_54.4bpp.lz");
static const ax_sprite sGeodudeSprites54[] = {
	{sGeodudeGfx54, ARRAY_COUNT(sGeodudeGfx54)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_55.4bpp.lz");
static const ax_sprite sGeodudeSprites55[] = {
	{sGeodudeGfx55, ARRAY_COUNT(sGeodudeGfx55)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_56.4bpp.lz");
static const ax_sprite sGeodudeSprites56[] = {
	{sGeodudeGfx56, ARRAY_COUNT(sGeodudeGfx56)}, 
	{NULL, 0}
};
static const u8 sGeodudeGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/geodude/sprite_57.4bpp.lz");
static const ax_sprite sGeodudeSprites57[] = {
	{sGeodudeGfx57, ARRAY_COUNT(sGeodudeGfx57)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesGeodude[] = {
	sGeodudePose1,
	sGeodudePose2,
	sGeodudePose3,
	sGeodudePose4,
	sGeodudePose5,
	sGeodudePose6,
	sGeodudePose7,
	sGeodudePose8,
	sGeodudePose9,
	sGeodudePose10,
	sGeodudePose11,
	sGeodudePose12,
	sGeodudePose13,
	sGeodudePose14,
	sGeodudePose15,
	sGeodudePose16,
	sGeodudePose17,
	sGeodudePose18,
	sGeodudePose19,
	sGeodudePose20,
	sGeodudePose21,
	sGeodudePose22,
	sGeodudePose23,
	sGeodudePose24,
	sGeodudePose1,
	sGeodudePose2,
	sGeodudePose3,
	sGeodudePose4,
	sGeodudePose5,
	sGeodudePose6,
	sGeodudePose7,
	sGeodudePose8,
	sGeodudePose9,
	sGeodudePose10,
	sGeodudePose11,
	sGeodudePose12,
	sGeodudePose13,
	sGeodudePose14,
	sGeodudePose15,
	sGeodudePose16,
	sGeodudePose17,
	sGeodudePose18,
	sGeodudePose19,
	sGeodudePose20,
	sGeodudePose21,
	sGeodudePose22,
	sGeodudePose23,
	sGeodudePose24,
	sGeodudePose49,
	sGeodudePose50,
	sGeodudePose51,
	sGeodudePose52,
	sGeodudePose53,
	sGeodudePose54,
	sGeodudePose55,
	sGeodudePose56,
	sGeodudePose57,
	sGeodudePose58,
	sGeodudePose59,
	sGeodudePose60,
	sGeodudePose61,
	sGeodudePose62,
	sGeodudePose63,
	sGeodudePose64,
	sGeodudePose65,
	sGeodudePose66,
	sGeodudePose67,
	sGeodudePose68,
	sGeodudePose69,
	sGeodudePose70,
	sGeodudePose71,
	sGeodudePose72,
	sGeodudePose73,
	sGeodudePose74,
	sGeodudePose75,
	sGeodudePose76,
	sGeodudePose77,
	sGeodudePose78,
	sGeodudePose79,
	sGeodudePose80,
	sGeodudePose1,
	sGeodudePose2,
	sGeodudePose3,
	sGeodudePose84,
	sGeodudePose4,
	sGeodudePose86,
	sGeodudePose6,
	sGeodudePose88,
	sGeodudePose7,
	sGeodudePose8,
	sGeodudePose9,
	sGeodudePose92,
	sGeodudePose10,
	sGeodudePose11,
	sGeodudePose12,
	sGeodudePose96,
	sGeodudePose13,
	sGeodudePose14,
	sGeodudePose15,
	sGeodudePose100,
	sGeodudePose16,
	sGeodudePose17,
	sGeodudePose18,
	sGeodudePose104,
	sGeodudePose19,
	sGeodudePose20,
	sGeodudePose21,
	sGeodudePose108,
	sGeodudePose22,
	sGeodudePose23,
	sGeodudePose24,
	sGeodudePose112,
	sGeodudePose49,
	sGeodudePose77,
	sGeodudePose73,
	sGeodudePose69,
	sGeodudePose65,
	sGeodudePose61,
	sGeodudePose57,
	sGeodudePose53,
	sGeodudePose121,
	sGeodudePose122,
	sGeodudePose123,
	sGeodudePose124,
	sGeodudePose125,
	sGeodudePose126,
	sGeodudePose127,
	sGeodudePose128,
	sGeodudePose129,
	sGeodudePose130,
	sGeodudePose49,
	sGeodudePose77,
	sGeodudePose73,
	sGeodudePose69,
	sGeodudePose65,
	sGeodudePose61,
	sGeodudePose57,
	sGeodudePose53,
	sGeodudePose1,
	sGeodudePose22,
	sGeodudePose19,
	sGeodudePose16,
	sGeodudePose13,
	sGeodudePose10,
	sGeodudePose7,
	sGeodudePose4,
	sGeodudePose1,
	sGeodudePose49,
	sGeodudePose4,
	sGeodudePose53,
	sGeodudePose7,
	sGeodudePose57,
	sGeodudePose10,
	sGeodudePose61,
	sGeodudePose13,
	sGeodudePose65,
	sGeodudePose16,
	sGeodudePose69,
	sGeodudePose19,
	sGeodudePose73,
	sGeodudePose22,
	sGeodudePose77,
	sGeodudePose49,
	sGeodudePose1,
	sGeodudePose53,
	sGeodudePose4,
	sGeodudePose57,
	sGeodudePose7,
	sGeodudePose61,
	sGeodudePose10,
	sGeodudePose65,
	sGeodudePose13,
	sGeodudePose69,
	sGeodudePose16,
	sGeodudePose73,
	sGeodudePose19,
	sGeodudePose77,
	sGeodudePose22,
	sGeodudePose1,
	sGeodudePose2,
	sGeodudePose3,
	sGeodudePose4,
	sGeodudePose5,
	sGeodudePose6,
	sGeodudePose7,
	sGeodudePose8,
	sGeodudePose9,
	sGeodudePose10,
	sGeodudePose11,
	sGeodudePose190,
	sGeodudePose13,
	sGeodudePose14,
	sGeodudePose15,
	sGeodudePose16,
	sGeodudePose17,
	sGeodudePose196,
	sGeodudePose19,
	sGeodudePose20,
	sGeodudePose21,
	sGeodudePose22,
	sGeodudePose23,
	sGeodudePose24,
	sGeodudePose49,
	sGeodudePose77,
	sGeodudePose73,
	sGeodudePose69,
	sGeodudePose65,
	sGeodudePose61,
	sGeodudePose57,
	sGeodudePose53,
};

static const struct PositionSets sAxPositionsGeodude[] = {
	[0] = { .set = { {0, -4}, {-12, -11}, {11, -13}, {0, -7} } },
	[1] = { .set = { {0, -3}, {-9, -8}, {7, -15}, {1, -6} } },
	[2] = { .set = { {-1, -3}, {-9, -15}, {8, -9}, {-2, -6} } },
	[3] = { .set = { {1, -4}, {9, -16}, {-10, -10}, {-1, -7} } },
	[4] = { .set = { {0, -3}, {11, -12}, {-11, -12}, {-2, -6} } },
	[5] = { .set = { {1, -3}, {6, -16}, {-5, -7}, {0, -6} } },
	[6] = { .set = { {3, -4}, {2, -18}, {-5, -9}, {-1, -7} } },
	[7] = { .set = { {3, -4}, {6, -15}, {-8, -9}, {-1, -6} } },
	[8] = { .set = { {4, -5}, {-2, -17}, {3, -8}, {0, -7} } },
	[9] = { .set = { {4, -7}, {-6, -18}, {6, -10}, {0, -7} } },
	[10] = { .set = { {5, -5}, {-1, -17}, {2, -8}, {0, -6} } },
	[11] = { .set = { {4, -6}, {-8, -15}, {9, -10}, {0, -6} } },
	[12] = { .set = { {-1, -8}, {9, -12}, {-10, -12}, {-1, -7} } },
	[13] = { .set = { {-1, -7}, {7, -14}, {-9, -8}, {0, -6} } },
	[14] = { .set = { {1, -7}, {8, -8}, {-8, -14}, {0, -6} } },
	[15] = { .set = { {-5, -7}, {5, -18}, {-7, -10}, {-1, -7} } },
	[16] = { .set = { {-6, -5}, {0, -17}, {-3, -8}, {-1, -6} } },
	[17] = { .set = { {-5, -6}, {7, -15}, {-10, -10}, {-1, -6} } },
	[18] = { .set = { {-4, -4}, {-3, -18}, {4, -9}, {0, -7} } },
	[19] = { .set = { {-4, -4}, {-7, -15}, {7, -9}, {0, -6} } },
	[20] = { .set = { {-5, -5}, {1, -17}, {-4, -8}, {-1, -7} } },
	[21] = { .set = { {-2, -4}, {-10, -16}, {9, -10}, {0, -7} } },
	[22] = { .set = { {-1, -3}, {-12, -12}, {10, -12}, {1, -6} } },
	[23] = { .set = { {-2, -3}, {-7, -16}, {4, -7}, {-1, -6} } },
	[24] = { .set = { {0, -4}, {-12, -11}, {11, -13}, {0, -7} } },
	[25] = { .set = { {0, -3}, {-9, -8}, {7, -15}, {1, -6} } },
	[26] = { .set = { {-1, -3}, {-9, -15}, {8, -9}, {-2, -6} } },
	[27] = { .set = { {1, -4}, {9, -16}, {-10, -10}, {-1, -7} } },
	[28] = { .set = { {0, -3}, {11, -12}, {-11, -12}, {-2, -6} } },
	[29] = { .set = { {1, -3}, {6, -16}, {-5, -7}, {0, -6} } },
	[30] = { .set = { {3, -4}, {2, -18}, {-5, -9}, {-1, -7} } },
	[31] = { .set = { {3, -4}, {6, -15}, {-8, -9}, {-1, -6} } },
	[32] = { .set = { {4, -5}, {-2, -17}, {3, -8}, {0, -7} } },
	[33] = { .set = { {4, -7}, {-6, -18}, {6, -10}, {0, -7} } },
	[34] = { .set = { {5, -5}, {-1, -17}, {2, -8}, {0, -6} } },
	[35] = { .set = { {4, -6}, {-8, -15}, {9, -10}, {0, -6} } },
	[36] = { .set = { {-1, -8}, {9, -12}, {-10, -12}, {-1, -7} } },
	[37] = { .set = { {-1, -7}, {7, -14}, {-9, -8}, {0, -6} } },
	[38] = { .set = { {1, -7}, {8, -8}, {-8, -14}, {0, -6} } },
	[39] = { .set = { {-5, -7}, {5, -18}, {-7, -10}, {-1, -7} } },
	[40] = { .set = { {-6, -5}, {0, -17}, {-3, -8}, {-1, -6} } },
	[41] = { .set = { {-5, -6}, {7, -15}, {-10, -10}, {-1, -6} } },
	[42] = { .set = { {-4, -4}, {-3, -18}, {4, -9}, {0, -7} } },
	[43] = { .set = { {-4, -4}, {-7, -15}, {7, -9}, {0, -6} } },
	[44] = { .set = { {-5, -5}, {1, -17}, {-4, -8}, {-1, -7} } },
	[45] = { .set = { {-2, -4}, {-10, -16}, {9, -10}, {0, -7} } },
	[46] = { .set = { {-1, -3}, {-12, -12}, {10, -12}, {1, -6} } },
	[47] = { .set = { {-2, -3}, {-7, -16}, {4, -7}, {-1, -6} } },
	[48] = { .set = { {0, -4}, {-11, 0}, {10, -1}, {0, -7} } },
	[49] = { .set = { {-2, -6}, {-7, 0}, {-2, -18}, {0, -8} } },
	[50] = { .set = { {2, -3}, {-5, 7}, {6, -15}, {0, -7} } },
	[51] = { .set = { {2, -3}, {-5, 7}, {6, -15}, {0, -7} } },
	[52] = { .set = { {1, -4}, {12, -6}, {-6, 2}, {-1, -7} } },
	[53] = { .set = { {0, -4}, {0, 2}, {5, -14}, {-2, -6} } },
	[54] = { .set = { {-1, 0}, {12, 5}, {-12, -11}, {0, -5} } },
	[55] = { .set = { {-1, 0}, {12, 5}, {-12, -11}, {0, -5} } },
	[56] = { .set = { {3, -4}, {9, -11}, {4, 1}, {0, -7} } },
	[57] = { .set = { {3, -5}, {-3, -1}, {9, -12}, {1, -7} } },
	[58] = { .set = { {0, -1}, {15, -3}, {-14, -2}, {-1, -5} } },
	[59] = { .set = { {0, -1}, {15, -3}, {-14, -2}, {-1, -5} } },
	[60] = { .set = { {5, -7}, {-4, -12}, {11, -5}, {-1, -7} } },
	[61] = { .set = { {0, -7}, {-13, -1}, {5, -16}, {-2, -7} } },
	[62] = { .set = { {2, -3}, {7, -20}, {-4, 6}, {-1, -7} } },
	[63] = { .set = { {2, -3}, {7, -20}, {-4, 6}, {-1, -7} } },
	[64] = { .set = { {-1, -8}, {9, -10}, {-10, -10}, {-1, -7} } },
	[65] = { .set = { {0, -8}, {11, 6}, {-2, -18}, {0, -5} } },
	[66] = { .set = { {-3, -5}, {2, -18}, {-7, 6}, {-1, -4} } },
	[67] = { .set = { {-3, -5}, {2, -18}, {-7, 6}, {-1, -4} } },
	[68] = { .set = { {-6, -7}, {3, -12}, {-12, -5}, {0, -7} } },
	[69] = { .set = { {-1, -7}, {12, -1}, {-6, -16}, {1, -7} } },
	[70] = { .set = { {-3, -3}, {-8, -20}, {3, 6}, {0, -7} } },
	[71] = { .set = { {-3, -3}, {-8, -20}, {3, 6}, {0, -7} } },
	[72] = { .set = { {-4, -4}, {-10, -11}, {-5, 1}, {-1, -7} } },
	[73] = { .set = { {-4, -5}, {2, -1}, {-10, -12}, {-2, -7} } },
	[74] = { .set = { {-1, -1}, {-16, -3}, {13, -2}, {0, -5} } },
	[75] = { .set = { {-1, -1}, {-16, -3}, {13, -2}, {0, -5} } },
	[76] = { .set = { {-2, -4}, {-13, -6}, {5, 2}, {0, -7} } },
	[77] = { .set = { {-1, -4}, {-1, 2}, {-6, -14}, {1, -6} } },
	[78] = { .set = { {0, 0}, {-13, 5}, {11, -11}, {-1, -5} } },
	[79] = { .set = { {0, 0}, {-13, 5}, {11, -11}, {-1, -5} } },
	[80] = { .set = { {0, -4}, {-12, -11}, {11, -13}, {0, -7} } },
	[81] = { .set = { {0, -3}, {-9, -8}, {7, -15}, {1, -6} } },
	[82] = { .set = { {-1, -3}, {-9, -15}, {8, -9}, {-2, -6} } },
	[83] = { .set = { {0, -2}, {-17, -3}, {16, -3}, {0, -6} } },
	[84] = { .set = { {1, -4}, {9, -16}, {-10, -10}, {-1, -7} } },
	[85] = { .set = { {0, -3}, {11, -12}, {-11, -12}, {-2, -6} } },
	[86] = { .set = { {1, -3}, {6, -16}, {-5, -7}, {0, -6} } },
	[87] = { .set = { {0, -2}, {12, -5}, {-16, 0}, {-2, -7} } },
	[88] = { .set = { {3, -4}, {2, -18}, {-5, -9}, {-1, -7} } },
	[89] = { .set = { {3, -4}, {6, -15}, {-8, -9}, {-1, -6} } },
	[90] = { .set = { {4, -5}, {-2, -17}, {3, -8}, {0, -7} } },
	[91] = { .set = { {1, -1}, {5, -2}, {-9, 5}, {0, -6} } },
	[92] = { .set = { {4, -7}, {-6, -18}, {6, -10}, {0, -7} } },
	[93] = { .set = { {5, -5}, {-1, -17}, {2, -8}, {0, -6} } },
	[94] = { .set = { {4, -6}, {-8, -15}, {9, -10}, {0, -6} } },
	[95] = { .set = { {2, -4}, {-6, -8}, {10, 2}, {-1, -7} } },
	[96] = { .set = { {-1, -8}, {9, -12}, {-10, -12}, {-1, -7} } },
	[97] = { .set = { {-1, -7}, {7, -14}, {-9, -8}, {0, -6} } },
	[98] = { .set = { {1, -7}, {8, -8}, {-8, -14}, {0, -6} } },
	[99] = { .set = { {0, -11}, {15, -1}, {-16, -1}, {0, -6} } },
	[100] = { .set = { {-5, -7}, {5, -18}, {-7, -10}, {-1, -7} } },
	[101] = { .set = { {-6, -5}, {0, -17}, {-3, -8}, {-1, -6} } },
	[102] = { .set = { {-5, -6}, {7, -15}, {-10, -10}, {-1, -6} } },
	[103] = { .set = { {-3, -4}, {5, -8}, {-11, 2}, {0, -7} } },
	[104] = { .set = { {-4, -4}, {-3, -18}, {4, -9}, {0, -7} } },
	[105] = { .set = { {-4, -4}, {-7, -15}, {7, -9}, {0, -6} } },
	[106] = { .set = { {-5, -5}, {1, -17}, {-4, -8}, {-1, -7} } },
	[107] = { .set = { {-2, -1}, {-6, -2}, {8, 5}, {-1, -6} } },
	[108] = { .set = { {-2, -4}, {-10, -16}, {9, -10}, {0, -7} } },
	[109] = { .set = { {-1, -3}, {-12, -12}, {10, -12}, {1, -6} } },
	[110] = { .set = { {-2, -3}, {-7, -16}, {4, -7}, {-1, -6} } },
	[111] = { .set = { {-1, -2}, {-13, -5}, {15, 0}, {1, -7} } },
	[112] = { .set = { {0, -4}, {-11, 0}, {10, -1}, {0, -7} } },
	[113] = { .set = { {-2, -4}, {-13, -6}, {5, 2}, {0, -7} } },
	[114] = { .set = { {-4, -4}, {-10, -11}, {-5, 1}, {-1, -7} } },
	[115] = { .set = { {-6, -7}, {3, -12}, {-12, -5}, {0, -7} } },
	[116] = { .set = { {-1, -8}, {9, -10}, {-10, -10}, {-1, -7} } },
	[117] = { .set = { {5, -7}, {-4, -12}, {11, -5}, {-1, -7} } },
	[118] = { .set = { {3, -4}, {9, -11}, {4, 1}, {0, -7} } },
	[119] = { .set = { {1, -4}, {12, -6}, {-6, 2}, {-1, -7} } },
	[120] = { .set = { {-1, -5}, {-11, -3}, {9, 3}, {0, -8} } },
	[121] = { .set = { {-1, -4}, {-11, -2}, {9, 4}, {-1, -7} } },
	[122] = { .set = { {0, -3}, {-8, 1}, {7, 1}, {0, -6} } },
	[123] = { .set = { {-1, -3}, {8, -1}, {-4, 3}, {-1, -6} } },
	[124] = { .set = { {-1, -3}, {8, -7}, {5, 0}, {-1, -6} } },
	[125] = { .set = { {3, -4}, {-1, -10}, {8, -5}, {-1, -6} } },
	[126] = { .set = { {0, -4}, {7, -8}, {-8, -8}, {0, -6} } },
	[127] = { .set = { {-4, -4}, {0, -10}, {-9, -5}, {0, -6} } },
	[128] = { .set = { {0, -3}, {-9, -7}, {-6, 0}, {0, -6} } },
	[129] = { .set = { {0, -3}, {-9, -1}, {3, 3}, {0, -6} } },
	[130] = { .set = { {0, -4}, {-11, 0}, {10, -1}, {0, -7} } },
	[131] = { .set = { {-2, -4}, {-13, -6}, {5, 2}, {0, -7} } },
	[132] = { .set = { {-4, -4}, {-10, -11}, {-5, 1}, {-1, -7} } },
	[133] = { .set = { {-6, -7}, {3, -12}, {-12, -5}, {0, -7} } },
	[134] = { .set = { {-1, -8}, {9, -10}, {-10, -10}, {-1, -7} } },
	[135] = { .set = { {5, -7}, {-4, -12}, {11, -5}, {-1, -7} } },
	[136] = { .set = { {3, -4}, {9, -11}, {4, 1}, {0, -7} } },
	[137] = { .set = { {1, -4}, {12, -6}, {-6, 2}, {-1, -7} } },
	[138] = { .set = { {0, -4}, {-12, -11}, {11, -13}, {0, -7} } },
	[139] = { .set = { {-2, -4}, {-10, -16}, {9, -10}, {0, -7} } },
	[140] = { .set = { {-4, -4}, {-3, -18}, {4, -9}, {0, -7} } },
	[141] = { .set = { {-5, -7}, {5, -18}, {-7, -10}, {-1, -7} } },
	[142] = { .set = { {-1, -8}, {9, -12}, {-10, -12}, {-1, -7} } },
	[143] = { .set = { {4, -7}, {-6, -18}, {6, -10}, {0, -7} } },
	[144] = { .set = { {3, -4}, {2, -18}, {-5, -9}, {-1, -7} } },
	[145] = { .set = { {1, -4}, {9, -16}, {-10, -10}, {-1, -7} } },
	[146] = { .set = { {0, -4}, {-12, -11}, {11, -13}, {0, -7} } },
	[147] = { .set = { {0, -4}, {-11, 0}, {10, -1}, {0, -7} } },
	[148] = { .set = { {1, -4}, {9, -16}, {-10, -10}, {-1, -7} } },
	[149] = { .set = { {1, -4}, {12, -6}, {-6, 2}, {-1, -7} } },
	[150] = { .set = { {3, -4}, {2, -18}, {-5, -9}, {-1, -7} } },
	[151] = { .set = { {3, -4}, {9, -11}, {4, 1}, {0, -7} } },
	[152] = { .set = { {4, -7}, {-6, -18}, {6, -10}, {0, -7} } },
	[153] = { .set = { {5, -7}, {-4, -12}, {11, -5}, {-1, -7} } },
	[154] = { .set = { {-1, -8}, {9, -12}, {-10, -12}, {-1, -7} } },
	[155] = { .set = { {-1, -8}, {9, -10}, {-10, -10}, {-1, -7} } },
	[156] = { .set = { {-5, -7}, {5, -18}, {-7, -10}, {-1, -7} } },
	[157] = { .set = { {-6, -7}, {3, -12}, {-12, -5}, {0, -7} } },
	[158] = { .set = { {-4, -4}, {-3, -18}, {4, -9}, {0, -7} } },
	[159] = { .set = { {-4, -4}, {-10, -11}, {-5, 1}, {-1, -7} } },
	[160] = { .set = { {-2, -4}, {-10, -16}, {9, -10}, {0, -7} } },
	[161] = { .set = { {-2, -4}, {-13, -6}, {5, 2}, {0, -7} } },
	[162] = { .set = { {0, -4}, {-11, 0}, {10, -1}, {0, -7} } },
	[163] = { .set = { {0, -4}, {-12, -11}, {11, -13}, {0, -7} } },
	[164] = { .set = { {1, -4}, {12, -6}, {-6, 2}, {-1, -7} } },
	[165] = { .set = { {1, -4}, {9, -16}, {-10, -10}, {-1, -7} } },
	[166] = { .set = { {3, -4}, {9, -11}, {4, 1}, {0, -7} } },
	[167] = { .set = { {3, -4}, {2, -18}, {-5, -9}, {-1, -7} } },
	[168] = { .set = { {5, -7}, {-4, -12}, {11, -5}, {-1, -7} } },
	[169] = { .set = { {4, -7}, {-6, -18}, {6, -10}, {0, -7} } },
	[170] = { .set = { {-1, -8}, {9, -10}, {-10, -10}, {-1, -7} } },
	[171] = { .set = { {-1, -8}, {9, -12}, {-10, -12}, {-1, -7} } },
	[172] = { .set = { {-6, -7}, {3, -12}, {-12, -5}, {0, -7} } },
	[173] = { .set = { {-5, -7}, {5, -18}, {-7, -10}, {-1, -7} } },
	[174] = { .set = { {-4, -4}, {-10, -11}, {-5, 1}, {-1, -7} } },
	[175] = { .set = { {-4, -4}, {-3, -18}, {4, -9}, {0, -7} } },
	[176] = { .set = { {-2, -4}, {-13, -6}, {5, 2}, {0, -7} } },
	[177] = { .set = { {-2, -4}, {-10, -16}, {9, -10}, {0, -7} } },
	[178] = { .set = { {0, -4}, {-12, -11}, {11, -13}, {0, -7} } },
	[179] = { .set = { {0, -3}, {-9, -8}, {7, -15}, {1, -6} } },
	[180] = { .set = { {-1, -3}, {-9, -15}, {8, -9}, {-2, -6} } },
	[181] = { .set = { {1, -4}, {9, -16}, {-10, -10}, {-1, -7} } },
	[182] = { .set = { {0, -3}, {11, -12}, {-11, -12}, {-2, -6} } },
	[183] = { .set = { {1, -3}, {6, -16}, {-5, -7}, {0, -6} } },
	[184] = { .set = { {3, -4}, {2, -18}, {-5, -9}, {-1, -7} } },
	[185] = { .set = { {3, -4}, {6, -15}, {-8, -9}, {-1, -6} } },
	[186] = { .set = { {4, -5}, {-2, -17}, {3, -8}, {0, -7} } },
	[187] = { .set = { {4, -7}, {-6, -18}, {6, -10}, {0, -7} } },
	[188] = { .set = { {5, -5}, {-1, -17}, {2, -8}, {0, -6} } },
	[189] = { .set = { {4, -4}, {-8, -13}, {9, -8}, {0, -4} } },
	[190] = { .set = { {-1, -8}, {9, -12}, {-10, -12}, {-1, -7} } },
	[191] = { .set = { {-1, -7}, {7, -14}, {-9, -8}, {0, -6} } },
	[192] = { .set = { {1, -7}, {8, -8}, {-8, -14}, {0, -6} } },
	[193] = { .set = { {-5, -7}, {5, -18}, {-7, -10}, {-1, -7} } },
	[194] = { .set = { {-6, -5}, {0, -17}, {-3, -8}, {-1, -6} } },
	[195] = { .set = { {-5, -4}, {7, -13}, {-10, -8}, {-1, -4} } },
	[196] = { .set = { {-4, -4}, {-3, -18}, {4, -9}, {0, -7} } },
	[197] = { .set = { {-4, -4}, {-7, -15}, {7, -9}, {0, -6} } },
	[198] = { .set = { {-5, -5}, {1, -17}, {-4, -8}, {-1, -7} } },
	[199] = { .set = { {-2, -4}, {-10, -16}, {9, -10}, {0, -7} } },
	[200] = { .set = { {-1, -3}, {-12, -12}, {10, -12}, {1, -6} } },
	[201] = { .set = { {-2, -3}, {-7, -16}, {4, -7}, {-1, -6} } },
	[202] = { .set = { {0, -4}, {-11, 0}, {10, -1}, {0, -7} } },
	[203] = { .set = { {-2, -4}, {-13, -6}, {5, 2}, {0, -7} } },
	[204] = { .set = { {-4, -4}, {-10, -11}, {-5, 1}, {-1, -7} } },
	[205] = { .set = { {-6, -7}, {3, -12}, {-12, -5}, {0, -7} } },
	[206] = { .set = { {-1, -8}, {9, -10}, {-10, -10}, {-1, -7} } },
	[207] = { .set = { {5, -7}, {-4, -12}, {11, -5}, {-1, -7} } },
	[208] = { .set = { {3, -4}, {9, -11}, {4, 1}, {0, -7} } },
	[209] = { .set = { {1, -4}, {12, -6}, {-6, 2}, {-1, -7} } },
};

static const ax_anim *const sGeodudeAnimTable1[] = {
	gAxSharedAnim_02602,
	gAxSharedAnim_02678,
	gAxSharedAnim_02687,
	gAxSharedAnim_02696,
	gAxSharedAnim_02614,
	gAxSharedAnim_02636,
	gAxSharedAnim_02649,
	gAxSharedAnim_02658,
};

static const ax_anim *const sGeodudeAnimTable2[] = {
	sGeodudeAnims_2_1,
	sGeodudeAnims_2_2,
	sGeodudeAnims_2_3,
	sGeodudeAnims_2_4,
	sGeodudeAnims_2_5,
	sGeodudeAnims_2_6,
	sGeodudeAnims_2_7,
	sGeodudeAnims_2_8,
};

static const ax_anim *const sGeodudeAnimTable3[] = {
	sGeodudeAnims_3_1,
	sGeodudeAnims_3_2,
	sGeodudeAnims_3_3,
	sGeodudeAnims_3_4,
	sGeodudeAnims_3_5,
	sGeodudeAnims_3_6,
	sGeodudeAnims_3_7,
	sGeodudeAnims_3_8,
};

static const ax_anim *const sGeodudeAnimTable4[] = {
	sGeodudeAnims_4_1,
	sGeodudeAnims_4_2,
	sGeodudeAnims_4_3,
	sGeodudeAnims_4_4,
	sGeodudeAnims_4_5,
	sGeodudeAnims_4_6,
	sGeodudeAnims_4_7,
	sGeodudeAnims_4_8,
};

static const ax_anim *const sGeodudeAnimTable5[] = {
	gAxSharedAnim_00249,
	gAxSharedAnim_00309,
	gAxSharedAnim_00301,
	gAxSharedAnim_00294,
	gAxSharedAnim_00285,
	gAxSharedAnim_00276,
	gAxSharedAnim_00270,
	gAxSharedAnim_00258,
};

static const ax_anim *const sGeodudeAnimTable6[] = {
	sGeodudeAnims_6_1,
	sGeodudeAnims_6_1,
	sGeodudeAnims_6_1,
	sGeodudeAnims_6_1,
	sGeodudeAnims_6_1,
	sGeodudeAnims_6_1,
	sGeodudeAnims_6_1,
	sGeodudeAnims_6_1,
};

static const ax_anim *const sGeodudeAnimTable7[] = {
	gAxSharedAnim_00330,
	gAxSharedAnim_00340,
	gAxSharedAnim_00348,
	gAxSharedAnim_00356,
	gAxSharedAnim_00368,
	gAxSharedAnim_00376,
	gAxSharedAnim_00383,
	gAxSharedAnim_00390,
};

static const ax_anim *const sGeodudeAnimTable8[] = {
	sGeodudeAnims_8_1,
	sGeodudeAnims_8_2,
	sGeodudeAnims_8_3,
	sGeodudeAnims_8_4,
	sGeodudeAnims_8_5,
	sGeodudeAnims_8_6,
	sGeodudeAnims_8_7,
	sGeodudeAnims_8_8,
};

static const ax_anim *const sGeodudeAnimTable9[] = {
	gAxSharedAnim_00471,
	sGeodudeAnims_9_2,
	sGeodudeAnims_9_3,
	sGeodudeAnims_9_4,
	sGeodudeAnims_9_5,
	sGeodudeAnims_9_6,
	sGeodudeAnims_9_7,
	sGeodudeAnims_9_8,
};

static const ax_anim *const sGeodudeAnimTable10[] = {
	gAxSharedAnim_00540,
	gAxSharedAnim_00556,
	gAxSharedAnim_00573,
	sGeodudeAnims_10_4,
	gAxSharedAnim_00612,
	gAxSharedAnim_00633,
	sGeodudeAnims_10_7,
	sGeodudeAnims_10_8,
};

static const ax_anim *const sGeodudeAnimTable11[] = {
	gAxSharedAnim_00695,
	gAxSharedAnim_00723,
	gAxSharedAnim_00743,
	gAxSharedAnim_00766,
	gAxSharedAnim_00791,
	gAxSharedAnim_00825,
	gAxSharedAnim_00843,
	gAxSharedAnim_00869,
};

static const ax_anim *const sGeodudeAnimTable12[] = {
	gAxSharedAnim_00907,
	sGeodudeAnims_12_2,
	gAxSharedAnim_00971,
	gAxSharedAnim_01019,
	gAxSharedAnim_01084,
	gAxSharedAnim_01127,
	gAxSharedAnim_01161,
	gAxSharedAnim_01194,
};

static const ax_anim *const sGeodudeAnimTable13[] = {
	gAxSharedAnim_01242,
	gAxSharedAnim_01323,
	gAxSharedAnim_01314,
	gAxSharedAnim_01301,
	gAxSharedAnim_01286,
	gAxSharedAnim_01278,
	gAxSharedAnim_01267,
	gAxSharedAnim_01253,
};

static const ax_anim *const *const sAxAnimationsGeodude[] = {
	sGeodudeAnimTable1,
	sGeodudeAnimTable2,
	sGeodudeAnimTable3,
	sGeodudeAnimTable4,
	sGeodudeAnimTable5,
	sGeodudeAnimTable6,
	sGeodudeAnimTable7,
	sGeodudeAnimTable8,
	sGeodudeAnimTable9,
	sGeodudeAnimTable10,
	sGeodudeAnimTable11,
	sGeodudeAnimTable12,
	sGeodudeAnimTable13,
};

static const ax_sprite *const sAxSpritesGeodude[] = {
	sGeodudeSprites1,
	sGeodudeSprites2,
	sGeodudeSprites3,
	sGeodudeSprites4,
	sGeodudeSprites5,
	sGeodudeSprites6,
	sGeodudeSprites7,
	sGeodudeSprites8,
	sGeodudeSprites9,
	sGeodudeSprites10,
	sGeodudeSprites11,
	sGeodudeSprites12,
	sGeodudeSprites13,
	sGeodudeSprites14,
	sGeodudeSprites15,
	sGeodudeSprites16,
	sGeodudeSprites17,
	sGeodudeSprites18,
	sGeodudeSprites19,
	sGeodudeSprites20,
	sGeodudeSprites21,
	sGeodudeSprites22,
	sGeodudeSprites23,
	sGeodudeSprites24,
	sGeodudeSprites25,
	sGeodudeSprites26,
	sGeodudeSprites27,
	sGeodudeSprites28,
	sGeodudeSprites29,
	sGeodudeSprites30,
	sGeodudeSprites31,
	sGeodudeSprites32,
	sGeodudeSprites33,
	sGeodudeSprites34,
	sGeodudeSprites35,
	sGeodudeSprites36,
	sGeodudeSprites37,
	sGeodudeSprites38,
	sGeodudeSprites39,
	sGeodudeSprites40,
	sGeodudeSprites41,
	sGeodudeSprites42,
	sGeodudeSprites43,
	sGeodudeSprites44,
	sGeodudeSprites45,
	sGeodudeSprites46,
	sGeodudeSprites47,
	sGeodudeSprites48,
	sGeodudeSprites49,
	sGeodudeSprites50,
	sGeodudeSprites51,
	sGeodudeSprites52,
	sGeodudeSprites53,
	sGeodudeSprites54,
	sGeodudeSprites55,
	sGeodudeSprites56,
	sGeodudeSprites57,
};

static const axmain sAxMainGeodude = {
	.poses = sAxPosesGeodude,
	.animations = sAxAnimationsGeodude,
	.animCount = ARRAY_COUNT(sAxAnimationsGeodude),
	.spriteData = sAxSpritesGeodude,
	.positions = sAxPositionsGeodude,
};
