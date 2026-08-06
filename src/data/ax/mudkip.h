/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainMudkip;
const SiroArchive gAxMudkip = {"SIRO", &sAxMainMudkip};

static const ax_pose sMudkipPose1[] = {
	AX_POSE(0, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose2[] = {
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose3[] = {
	AX_POSE(2, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose4[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose5[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose6[] = {
	AX_POSE(5, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose7[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose8[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose9[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose10[] = {
	AX_POSE(9, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose11[] = {
	AX_POSE(10, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose12[] = {
	AX_POSE(11, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose13[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose14[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose15[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose16[] = {
	AX_POSE(9, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose17[] = {
	AX_POSE(10, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose18[] = {
	AX_POSE(11, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose19[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose20[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose21[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose22[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose23[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose24[] = {
	AX_POSE(5, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose74[] = {
	AX_POSE(15, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose75[] = {
	AX_POSE(16, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose77[] = {
	AX_POSE(17, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose78[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose80[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose81[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose83[] = {
	AX_POSE(21, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose84[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose86[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose87[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose89[] = {
	AX_POSE(21, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose90[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose91[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose92[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose93[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose94[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose95[] = {
	AX_POSE(17, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose96[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose102[] = {
	AX_POSE(18, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose105[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose117[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose119[] = {
	AX_POSE(17, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose120[] = {
	AX_POSE(18, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose121[] = {
	AX_POSE(25, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose122[] = {
	AX_POSE(26, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose123[] = {
	AX_POSE(27, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose124[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose125[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose126[] = {
	AX_POSE(30, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose127[] = {
	AX_POSE(31, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose128[] = {
	AX_POSE(30, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose129[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose130[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose163[] = {
	AX_POSE(15, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose165[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose166[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose167[] = {
	AX_POSE(23, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose168[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose169[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose211[] = {
	AX_POSE(32, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose212[] = {
	AX_POSE(33, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose213[] = {
	AX_POSE(32, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose214[] = {
	AX_POSE(33, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose216[] = {
	AX_POSE(34, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose217[] = {
	AX_POSE(35, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose218[] = {
	AX_POSE(36, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose219[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose221[] = {
	AX_POSE(37, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose222[] = {
	AX_POSE(38, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose223[] = {
	AX_POSE(39, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose224[] = {
	AX_POSE(40, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose227[] = {
	AX_POSE(41, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose228[] = {
	AX_POSE(42, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose229[] = {
	AX_POSE(43, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose230[] = {
	AX_POSE(44, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose231[] = {
	AX_POSE(45, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose233[] = {
	AX_POSE(46, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose234[] = {
	AX_POSE(47, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose236[] = {
	AX_POSE(48, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose237[] = {
	AX_POSE(49, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose239[] = {
	AX_POSE(50, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose240[] = {
	AX_POSE(51, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose242[] = {
	AX_POSE(52, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose244[] = {
	AX_POSE(52, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose245[] = {
	AX_POSE(53, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose246[] = {
	AX_POSE(54, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose247[] = {
	AX_POSE(55, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose248[] = {
	AX_POSE(56, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose249[] = {
	AX_POSE(57, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose250[] = {
	AX_POSE(58, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose251[] = {
	AX_POSE(54, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose252[] = {
	AX_POSE(55, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose253[] = {
	AX_POSE(56, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose254[] = {
	AX_POSE(57, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose255[] = {
	AX_POSE(58, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMudkipPose256[] = {
	AX_POSE(59, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_anim sMudkipAnims_1_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -2}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {0, -2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 2}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_1_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {2, -1}, .shadow = {2, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 5, .offset = {3, -1}, .shadow = {3, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {4, 1}, .shadow = {4, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {2, 1}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_1_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {1, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {2, -1}, .shadow = {2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {3, -2}, .shadow = {3, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {4, 0}, .shadow = {3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_1_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {2, 0}, .shadow = {2, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 11, .offset = {3, -3}, .shadow = {3, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {4, -2}, .shadow = {4, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {2, -1}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_1_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -4}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {0, -5}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -4}, .shadow = {0, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_1_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {-2, 0}, .shadow = {-2, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 17, .offset = {-3, -3}, .shadow = {-3, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {-4, -2}, .shadow = {-4, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {-2, -1}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_1_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {-1, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {-2, -1}, .shadow = {-2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 20, .offset = {-3, -2}, .shadow = {-3, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {-4, 0}, .shadow = {-3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 18, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_1_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {-2, -1}, .shadow = {-2, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 23, .offset = {-3, -1}, .shadow = {-3, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {-4, 1}, .shadow = {-4, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 21, .offset = {-2, 1}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 26, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 26, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 27, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {4, 1}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 29, .offset = {12, 4}, .shadow = {10, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {21, 18}, .shadow = {21, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 29, .offset = {22, 17}, .shadow = {22, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {21, 18}, .shadow = {21, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {22, 17}, .shadow = {22, 17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 27, .offset = {8, 8}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {4, -3}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 32, .offset = {10, -5}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 32, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {0, -3}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {4, -10}, .shadow = {4, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 35, .offset = {11, -20}, .shadow = {11, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {20, -25}, .shadow = {20, -25} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {21, -24}, .shadow = {21, -24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {20, -25}, .shadow = {20, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {21, -24}, .shadow = {21, -24} },
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -6}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 38, .offset = {0, -15}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -25}, .shadow = {0, -25} },
	{ .frames = 2, .unkFlags = 1, .poseId = 38, .offset = {1, -25}, .shadow = {1, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -25}, .shadow = {0, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {1, -25}, .shadow = {1, -25} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, -3}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-4, -10}, .shadow = {-4, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 41, .offset = {-11, -20}, .shadow = {-11, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-20, -25}, .shadow = {-20, -25} },
	{ .frames = 2, .unkFlags = 1, .poseId = 41, .offset = {-21, -24}, .shadow = {-21, -24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-20, -25}, .shadow = {-20, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-21, -24}, .shadow = {-21, -24} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-4, -3}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 44, .offset = {-10, -5}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 44, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-4, 1}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 47, .offset = {-12, 4}, .shadow = {-10, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-21, 18}, .shadow = {-21, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-22, 17}, .shadow = {-22, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-21, 18}, .shadow = {-21, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-22, 17}, .shadow = {-22, 17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {-8, 8}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 48, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 50, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 50, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 4, .unkFlags = 0, .poseId = 48, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 51, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {4, 1}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 53, .offset = {12, 4}, .shadow = {10, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {21, 18}, .shadow = {21, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 53, .offset = {22, 17}, .shadow = {22, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {21, 18}, .shadow = {21, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {22, 17}, .shadow = {22, 17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 51, .offset = {8, 8}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {4, -3}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 56, .offset = {10, -5}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 56, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 57, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, -3}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {4, -10}, .shadow = {4, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 59, .offset = {11, -20}, .shadow = {11, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {20, -25}, .shadow = {20, -25} },
	{ .frames = 2, .unkFlags = 1, .poseId = 59, .offset = {21, -24}, .shadow = {21, -24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {20, -25}, .shadow = {20, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {21, -24}, .shadow = {21, -24} },
	{ .frames = 4, .unkFlags = 0, .poseId = 57, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -6}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 62, .offset = {0, -15}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -25}, .shadow = {0, -25} },
	{ .frames = 2, .unkFlags = 1, .poseId = 62, .offset = {1, -25}, .shadow = {1, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -25}, .shadow = {0, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {1, -25}, .shadow = {1, -25} },
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 63, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -3}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-4, -10}, .shadow = {-4, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 65, .offset = {-11, -20}, .shadow = {-11, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-20, -25}, .shadow = {-20, -25} },
	{ .frames = 2, .unkFlags = 1, .poseId = 65, .offset = {-21, -24}, .shadow = {-21, -24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-20, -25}, .shadow = {-20, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-21, -24}, .shadow = {-21, -24} },
	{ .frames = 4, .unkFlags = 0, .poseId = 63, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 66, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-4, -3}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 68, .offset = {-10, -5}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 68, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 66, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-4, 1}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 71, .offset = {-12, 4}, .shadow = {-10, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-21, 18}, .shadow = {-21, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {-22, 17}, .shadow = {-22, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-21, 18}, .shadow = {-21, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-22, 17}, .shadow = {-22, 17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {-8, 8}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 72, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 72, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 74, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 73, .offset = {1, 2}, .shadow = {1, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {1, 2}, .shadow = {1, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {1, 2}, .shadow = {1, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 75, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 75, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 76, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {3, 1}, .shadow = {3, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 78, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 78, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 80, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {2, -1}, .shadow = {2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {2, -1}, .shadow = {2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {2, -1}, .shadow = {2, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 81, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 81, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 83, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 82, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {3, -1}, .shadow = {3, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 84, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 84, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 86, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, 0}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 85, .offset = {1, 0}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, 0}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {1, 0}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, 0}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {1, 0}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 87, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 87, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 88, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {-3, -1}, .shadow = {-3, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 90, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 91, .offset = {-2, -1}, .shadow = {-2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-2, -1}, .shadow = {-2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-2, -1}, .shadow = {-2, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 93, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 94, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-3, 1}, .shadow = {-3, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_5_1[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {1, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 119, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 98, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 98, .offset = {0, 2}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_5_2[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-1, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {1, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {1, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {1, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 101, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 101, .offset = {2, 2}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_5_3[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {-1, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {1, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {1, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {1, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 104, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 104, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_5_4[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {1, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {2, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {1, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {1, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 107, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 107, .offset = {2, -2}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_5_5[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {1, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {1, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-1, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 110, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 110, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_5_6[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {2, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {1, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {-1, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-1, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {1, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 113, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 113, .offset = {-2, -2}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_5_7[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 114, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {2, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {1, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-1, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {1, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 116, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 116, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_5_8[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 117, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {1, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-1, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {1, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 114, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 119, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 119, .offset = {-2, 2}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_8_1[] = {
	{ .frames = 38, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 131, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 132, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 132, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_8_2[] = {
	{ .frames = 38, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 134, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 135, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 135, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_8_3[] = {
	{ .frames = 38, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 137, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 138, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 138, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_8_4[] = {
	{ .frames = 38, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 140, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 141, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 141, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_8_5[] = {
	{ .frames = 38, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 143, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 144, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 144, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_8_6[] = {
	{ .frames = 38, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 146, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 147, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 147, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_8_7[] = {
	{ .frames = 38, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 149, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 150, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 150, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_8_8[] = {
	{ .frames = 38, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 152, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 153, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 153, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {6, 4}, .shadow = {6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {7, 17}, .shadow = {7, 17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 158, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 159, .offset = {-7, 17}, .shadow = {-7, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-8, 10}, .shadow = {-8, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {-6, 4}, .shadow = {-6, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {3, -4}, .shadow = {3, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 156, .offset = {24, 1}, .shadow = {24, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 157, .offset = {18, 6}, .shadow = {18, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {12, 7}, .shadow = {12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {-1, -6}, .shadow = {-1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {9, -21}, .shadow = {9, -21} },
	{ .frames = 3, .unkFlags = 0, .poseId = 155, .offset = {21, -24}, .shadow = {21, -24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 156, .offset = {19, -12}, .shadow = {19, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {16, -6}, .shadow = {16, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {-6, -4}, .shadow = {-6, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-8, -10}, .shadow = {-8, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-7, -21}, .shadow = {-7, -21} },
	{ .frames = 3, .unkFlags = 0, .poseId = 154, .offset = {0, -27}, .shadow = {0, -27} },
	{ .frames = 2, .unkFlags = 3, .poseId = 155, .offset = {7, -21}, .shadow = {7, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {8, -8}, .shadow = {8, -8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {6, -4}, .shadow = {6, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {-11, -23}, .shadow = {-11, -23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 161, .offset = {-21, -24}, .shadow = {-21, -24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 160, .offset = {-20, -13}, .shadow = {-20, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {-16, -6}, .shadow = {-16, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {-3, -4}, .shadow = {-3, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 160, .offset = {-24, 1}, .shadow = {-24, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 159, .offset = {-18, 6}, .shadow = {-18, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {-12, 7}, .shadow = {-12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_15_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 214, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 215, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 216, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 217, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_18_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 225, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 225, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_18_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 226, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 227, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 227, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 227, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 227, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_25_1[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 250, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 251, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 252, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 250, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 253, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 254, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_25_7[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 245, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 246, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 247, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 245, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 248, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 249, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_26_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 255, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 255, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_27_1[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 256, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 256, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 256, .offset = {-1, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 256, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 256, .offset = {1, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 256, .offset = {2, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMudkipAnims_28_1[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 261, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sMudkipGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_1.4bpp.lz");
static const ax_sprite sMudkipSprites1[] = {
	{sMudkipGfx1, ARRAY_COUNT(sMudkipGfx1)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_2.4bpp.lz");
static const ax_sprite sMudkipSprites2[] = {
	{sMudkipGfx2, ARRAY_COUNT(sMudkipGfx2)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_3.4bpp.lz");
static const ax_sprite sMudkipSprites3[] = {
	{sMudkipGfx3, ARRAY_COUNT(sMudkipGfx3)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_4.4bpp.lz");
static const ax_sprite sMudkipSprites4[] = {
	{sMudkipGfx4, ARRAY_COUNT(sMudkipGfx4)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_5.4bpp.lz");
static const ax_sprite sMudkipSprites5[] = {
	{sMudkipGfx5, ARRAY_COUNT(sMudkipGfx5)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_6.4bpp.lz");
static const ax_sprite sMudkipSprites6[] = {
	{sMudkipGfx6, ARRAY_COUNT(sMudkipGfx6)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_7.4bpp.lz");
static const ax_sprite sMudkipSprites7[] = {
	{sMudkipGfx7, ARRAY_COUNT(sMudkipGfx7)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_8.4bpp.lz");
static const ax_sprite sMudkipSprites8[] = {
	{sMudkipGfx8, ARRAY_COUNT(sMudkipGfx8)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_9.4bpp.lz");
static const ax_sprite sMudkipSprites9[] = {
	{sMudkipGfx9, ARRAY_COUNT(sMudkipGfx9)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_10.4bpp.lz");
static const ax_sprite sMudkipSprites10[] = {
	{sMudkipGfx10, ARRAY_COUNT(sMudkipGfx10)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_11.4bpp.lz");
static const ax_sprite sMudkipSprites11[] = {
	{sMudkipGfx11, ARRAY_COUNT(sMudkipGfx11)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_12.4bpp.lz");
static const ax_sprite sMudkipSprites12[] = {
	{sMudkipGfx12, ARRAY_COUNT(sMudkipGfx12)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_13.4bpp.lz");
static const ax_sprite sMudkipSprites13[] = {
	{sMudkipGfx13, ARRAY_COUNT(sMudkipGfx13)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_14.4bpp.lz");
static const ax_sprite sMudkipSprites14[] = {
	{sMudkipGfx14, ARRAY_COUNT(sMudkipGfx14)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_15.4bpp.lz");
static const ax_sprite sMudkipSprites15[] = {
	{sMudkipGfx15, ARRAY_COUNT(sMudkipGfx15)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_16.4bpp.lz");
static const u8 sMudkipGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_16_1.4bpp.lz");
static const u8 sMudkipGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_16_2.4bpp.lz");
static const ax_sprite sMudkipSprites16[] = {
	{NULL, 160}, 
	{sMudkipGfx16, ARRAY_COUNT(sMudkipGfx16)}, 
	{NULL, 32}, 
	{sMudkipGfx16_1, ARRAY_COUNT(sMudkipGfx16_1)}, 
	{NULL, 64}, 
	{sMudkipGfx16_2, ARRAY_COUNT(sMudkipGfx16_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMudkipGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_17.4bpp.lz");
static const u8 sMudkipGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_17_1.4bpp.lz");
static const u8 sMudkipGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_17_2.4bpp.lz");
static const ax_sprite sMudkipSprites17[] = {
	{NULL, 160}, 
	{sMudkipGfx17, ARRAY_COUNT(sMudkipGfx17)}, 
	{NULL, 32}, 
	{sMudkipGfx17_1, ARRAY_COUNT(sMudkipGfx17_1)}, 
	{NULL, 64}, 
	{sMudkipGfx17_2, ARRAY_COUNT(sMudkipGfx17_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMudkipGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_18.4bpp.lz");
static const u8 sMudkipGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_18_1.4bpp.lz");
static const u8 sMudkipGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_18_2.4bpp.lz");
static const ax_sprite sMudkipSprites18[] = {
	{NULL, 128}, 
	{sMudkipGfx18, ARRAY_COUNT(sMudkipGfx18)}, 
	{NULL, 32}, 
	{sMudkipGfx18_1, ARRAY_COUNT(sMudkipGfx18_1)}, 
	{NULL, 64}, 
	{sMudkipGfx18_2, ARRAY_COUNT(sMudkipGfx18_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMudkipGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_19.4bpp.lz");
static const u8 sMudkipGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_19_1.4bpp.lz");
static const u8 sMudkipGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_19_2.4bpp.lz");
static const ax_sprite sMudkipSprites19[] = {
	{NULL, 160}, 
	{sMudkipGfx19, ARRAY_COUNT(sMudkipGfx19)}, 
	{NULL, 32}, 
	{sMudkipGfx19_1, ARRAY_COUNT(sMudkipGfx19_1)}, 
	{NULL, 64}, 
	{sMudkipGfx19_2, ARRAY_COUNT(sMudkipGfx19_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMudkipGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_20.4bpp.lz");
static const u8 sMudkipGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_20_1.4bpp.lz");
static const u8 sMudkipGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_20_2.4bpp.lz");
static const ax_sprite sMudkipSprites20[] = {
	{NULL, 128}, 
	{sMudkipGfx20, ARRAY_COUNT(sMudkipGfx20)}, 
	{NULL, 32}, 
	{sMudkipGfx20_1, ARRAY_COUNT(sMudkipGfx20_1)}, 
	{NULL, 64}, 
	{sMudkipGfx20_2, ARRAY_COUNT(sMudkipGfx20_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMudkipGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_21.4bpp.lz");
static const u8 sMudkipGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_21_1.4bpp.lz");
static const u8 sMudkipGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_21_2.4bpp.lz");
static const ax_sprite sMudkipSprites21[] = {
	{NULL, 128}, 
	{sMudkipGfx21, ARRAY_COUNT(sMudkipGfx21)}, 
	{NULL, 32}, 
	{sMudkipGfx21_1, ARRAY_COUNT(sMudkipGfx21_1)}, 
	{NULL, 32}, 
	{sMudkipGfx21_2, ARRAY_COUNT(sMudkipGfx21_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMudkipGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_22.4bpp.lz");
static const u8 sMudkipGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_22_1.4bpp.lz");
static const u8 sMudkipGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_22_2.4bpp.lz");
static const u8 sMudkipGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_22_3.4bpp.lz");
static const ax_sprite sMudkipSprites22[] = {
	{NULL, 32}, 
	{sMudkipGfx22, ARRAY_COUNT(sMudkipGfx22)}, 
	{NULL, 64}, 
	{sMudkipGfx22_1, ARRAY_COUNT(sMudkipGfx22_1)}, 
	{NULL, 32}, 
	{sMudkipGfx22_2, ARRAY_COUNT(sMudkipGfx22_2)}, 
	{NULL, 64}, 
	{sMudkipGfx22_3, ARRAY_COUNT(sMudkipGfx22_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMudkipGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_23.4bpp.lz");
static const u8 sMudkipGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_23_1.4bpp.lz");
static const u8 sMudkipGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_23_2.4bpp.lz");
static const ax_sprite sMudkipSprites23[] = {
	{NULL, 160}, 
	{sMudkipGfx23, ARRAY_COUNT(sMudkipGfx23)}, 
	{NULL, 32}, 
	{sMudkipGfx23_1, ARRAY_COUNT(sMudkipGfx23_1)}, 
	{NULL, 64}, 
	{sMudkipGfx23_2, ARRAY_COUNT(sMudkipGfx23_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMudkipGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_24.4bpp.lz");
static const u8 sMudkipGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_24_1.4bpp.lz");
static const u8 sMudkipGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_24_2.4bpp.lz");
static const u8 sMudkipGfx24_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_24_3.4bpp.lz");
static const ax_sprite sMudkipSprites24[] = {
	{NULL, 32}, 
	{sMudkipGfx24, ARRAY_COUNT(sMudkipGfx24)}, 
	{NULL, 32}, 
	{sMudkipGfx24_1, ARRAY_COUNT(sMudkipGfx24_1)}, 
	{NULL, 32}, 
	{sMudkipGfx24_2, ARRAY_COUNT(sMudkipGfx24_2)}, 
	{NULL, 64}, 
	{sMudkipGfx24_3, ARRAY_COUNT(sMudkipGfx24_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMudkipGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_25.4bpp.lz");
static const u8 sMudkipGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_25_1.4bpp.lz");
static const u8 sMudkipGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_25_2.4bpp.lz");
static const ax_sprite sMudkipSprites25[] = {
	{NULL, 128}, 
	{sMudkipGfx25, ARRAY_COUNT(sMudkipGfx25)}, 
	{NULL, 32}, 
	{sMudkipGfx25_1, ARRAY_COUNT(sMudkipGfx25_1)}, 
	{NULL, 64}, 
	{sMudkipGfx25_2, ARRAY_COUNT(sMudkipGfx25_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMudkipGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_26.4bpp.lz");
static const ax_sprite sMudkipSprites26[] = {
	{sMudkipGfx26, ARRAY_COUNT(sMudkipGfx26)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_27.4bpp.lz");
static const ax_sprite sMudkipSprites27[] = {
	{sMudkipGfx27, ARRAY_COUNT(sMudkipGfx27)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_28.4bpp.lz");
static const ax_sprite sMudkipSprites28[] = {
	{sMudkipGfx28, ARRAY_COUNT(sMudkipGfx28)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_29.4bpp.lz");
static const ax_sprite sMudkipSprites29[] = {
	{sMudkipGfx29, ARRAY_COUNT(sMudkipGfx29)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_30.4bpp.lz");
static const ax_sprite sMudkipSprites30[] = {
	{sMudkipGfx30, ARRAY_COUNT(sMudkipGfx30)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_31.4bpp.lz");
static const ax_sprite sMudkipSprites31[] = {
	{sMudkipGfx31, ARRAY_COUNT(sMudkipGfx31)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_32.4bpp.lz");
static const ax_sprite sMudkipSprites32[] = {
	{sMudkipGfx32, ARRAY_COUNT(sMudkipGfx32)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_33.4bpp.lz");
static const ax_sprite sMudkipSprites33[] = {
	{sMudkipGfx33, ARRAY_COUNT(sMudkipGfx33)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_34.4bpp.lz");
static const ax_sprite sMudkipSprites34[] = {
	{sMudkipGfx34, ARRAY_COUNT(sMudkipGfx34)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_35.4bpp.lz");
static const ax_sprite sMudkipSprites35[] = {
	{sMudkipGfx35, ARRAY_COUNT(sMudkipGfx35)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_36.4bpp.lz");
static const ax_sprite sMudkipSprites36[] = {
	{sMudkipGfx36, ARRAY_COUNT(sMudkipGfx36)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_37.4bpp.lz");
static const ax_sprite sMudkipSprites37[] = {
	{sMudkipGfx37, ARRAY_COUNT(sMudkipGfx37)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_38.4bpp.lz");
static const ax_sprite sMudkipSprites38[] = {
	{sMudkipGfx38, ARRAY_COUNT(sMudkipGfx38)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_39.4bpp.lz");
static const ax_sprite sMudkipSprites39[] = {
	{sMudkipGfx39, ARRAY_COUNT(sMudkipGfx39)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_40.4bpp.lz");
static const ax_sprite sMudkipSprites40[] = {
	{sMudkipGfx40, ARRAY_COUNT(sMudkipGfx40)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_41.4bpp.lz");
static const ax_sprite sMudkipSprites41[] = {
	{sMudkipGfx41, ARRAY_COUNT(sMudkipGfx41)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_42.4bpp.lz");
static const ax_sprite sMudkipSprites42[] = {
	{sMudkipGfx42, ARRAY_COUNT(sMudkipGfx42)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_43.4bpp.lz");
static const ax_sprite sMudkipSprites43[] = {
	{sMudkipGfx43, ARRAY_COUNT(sMudkipGfx43)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_44.4bpp.lz");
static const ax_sprite sMudkipSprites44[] = {
	{sMudkipGfx44, ARRAY_COUNT(sMudkipGfx44)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_45.4bpp.lz");
static const ax_sprite sMudkipSprites45[] = {
	{sMudkipGfx45, ARRAY_COUNT(sMudkipGfx45)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_46.4bpp.lz");
static const ax_sprite sMudkipSprites46[] = {
	{sMudkipGfx46, ARRAY_COUNT(sMudkipGfx46)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_47.4bpp.lz");
static const ax_sprite sMudkipSprites47[] = {
	{sMudkipGfx47, ARRAY_COUNT(sMudkipGfx47)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_48.4bpp.lz");
static const ax_sprite sMudkipSprites48[] = {
	{sMudkipGfx48, ARRAY_COUNT(sMudkipGfx48)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_49.4bpp.lz");
static const ax_sprite sMudkipSprites49[] = {
	{sMudkipGfx49, ARRAY_COUNT(sMudkipGfx49)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_50.4bpp.lz");
static const ax_sprite sMudkipSprites50[] = {
	{sMudkipGfx50, ARRAY_COUNT(sMudkipGfx50)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_51.4bpp.lz");
static const ax_sprite sMudkipSprites51[] = {
	{sMudkipGfx51, ARRAY_COUNT(sMudkipGfx51)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_52.4bpp.lz");
static const ax_sprite sMudkipSprites52[] = {
	{sMudkipGfx52, ARRAY_COUNT(sMudkipGfx52)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_53.4bpp.lz");
static const ax_sprite sMudkipSprites53[] = {
	{sMudkipGfx53, ARRAY_COUNT(sMudkipGfx53)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_54.4bpp.lz");
static const ax_sprite sMudkipSprites54[] = {
	{sMudkipGfx54, ARRAY_COUNT(sMudkipGfx54)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_55.4bpp.lz");
static const ax_sprite sMudkipSprites55[] = {
	{sMudkipGfx55, ARRAY_COUNT(sMudkipGfx55)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_56.4bpp.lz");
static const ax_sprite sMudkipSprites56[] = {
	{sMudkipGfx56, ARRAY_COUNT(sMudkipGfx56)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_57.4bpp.lz");
static const ax_sprite sMudkipSprites57[] = {
	{sMudkipGfx57, ARRAY_COUNT(sMudkipGfx57)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_58.4bpp.lz");
static const ax_sprite sMudkipSprites58[] = {
	{sMudkipGfx58, ARRAY_COUNT(sMudkipGfx58)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_59.4bpp.lz");
static const ax_sprite sMudkipSprites59[] = {
	{sMudkipGfx59, ARRAY_COUNT(sMudkipGfx59)}, 
	{NULL, 0}
};
static const u8 sMudkipGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mudkip/sprite_60.4bpp.lz");
static const ax_sprite sMudkipSprites60[] = {
	{sMudkipGfx60, ARRAY_COUNT(sMudkipGfx60)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesMudkip[] = {
	sMudkipPose1,
	sMudkipPose2,
	sMudkipPose3,
	sMudkipPose4,
	sMudkipPose5,
	sMudkipPose6,
	sMudkipPose7,
	sMudkipPose8,
	sMudkipPose9,
	sMudkipPose10,
	sMudkipPose11,
	sMudkipPose12,
	sMudkipPose13,
	sMudkipPose14,
	sMudkipPose15,
	sMudkipPose16,
	sMudkipPose17,
	sMudkipPose18,
	sMudkipPose19,
	sMudkipPose20,
	sMudkipPose21,
	sMudkipPose22,
	sMudkipPose23,
	sMudkipPose24,
	sMudkipPose1,
	sMudkipPose2,
	sMudkipPose3,
	sMudkipPose4,
	sMudkipPose5,
	sMudkipPose6,
	sMudkipPose7,
	sMudkipPose8,
	sMudkipPose9,
	sMudkipPose10,
	sMudkipPose11,
	sMudkipPose12,
	sMudkipPose13,
	sMudkipPose14,
	sMudkipPose15,
	sMudkipPose16,
	sMudkipPose17,
	sMudkipPose18,
	sMudkipPose19,
	sMudkipPose20,
	sMudkipPose21,
	sMudkipPose22,
	sMudkipPose23,
	sMudkipPose24,
	sMudkipPose1,
	sMudkipPose2,
	sMudkipPose3,
	sMudkipPose4,
	sMudkipPose5,
	sMudkipPose6,
	sMudkipPose7,
	sMudkipPose8,
	sMudkipPose9,
	sMudkipPose10,
	sMudkipPose11,
	sMudkipPose12,
	sMudkipPose13,
	sMudkipPose14,
	sMudkipPose15,
	sMudkipPose16,
	sMudkipPose17,
	sMudkipPose18,
	sMudkipPose19,
	sMudkipPose20,
	sMudkipPose21,
	sMudkipPose22,
	sMudkipPose23,
	sMudkipPose24,
	sMudkipPose1,
	sMudkipPose74,
	sMudkipPose75,
	sMudkipPose4,
	sMudkipPose77,
	sMudkipPose78,
	sMudkipPose7,
	sMudkipPose80,
	sMudkipPose81,
	sMudkipPose10,
	sMudkipPose83,
	sMudkipPose84,
	sMudkipPose13,
	sMudkipPose86,
	sMudkipPose87,
	sMudkipPose16,
	sMudkipPose89,
	sMudkipPose90,
	sMudkipPose91,
	sMudkipPose92,
	sMudkipPose93,
	sMudkipPose94,
	sMudkipPose95,
	sMudkipPose96,
	sMudkipPose1,
	sMudkipPose74,
	sMudkipPose75,
	sMudkipPose4,
	sMudkipPose77,
	sMudkipPose102,
	sMudkipPose7,
	sMudkipPose80,
	sMudkipPose105,
	sMudkipPose10,
	sMudkipPose83,
	sMudkipPose84,
	sMudkipPose13,
	sMudkipPose86,
	sMudkipPose87,
	sMudkipPose16,
	sMudkipPose89,
	sMudkipPose90,
	sMudkipPose19,
	sMudkipPose92,
	sMudkipPose117,
	sMudkipPose22,
	sMudkipPose119,
	sMudkipPose120,
	sMudkipPose121,
	sMudkipPose122,
	sMudkipPose123,
	sMudkipPose124,
	sMudkipPose125,
	sMudkipPose126,
	sMudkipPose127,
	sMudkipPose128,
	sMudkipPose129,
	sMudkipPose130,
	sMudkipPose1,
	sMudkipPose2,
	sMudkipPose3,
	sMudkipPose4,
	sMudkipPose5,
	sMudkipPose6,
	sMudkipPose7,
	sMudkipPose8,
	sMudkipPose9,
	sMudkipPose10,
	sMudkipPose11,
	sMudkipPose12,
	sMudkipPose13,
	sMudkipPose14,
	sMudkipPose15,
	sMudkipPose16,
	sMudkipPose17,
	sMudkipPose18,
	sMudkipPose19,
	sMudkipPose20,
	sMudkipPose21,
	sMudkipPose22,
	sMudkipPose23,
	sMudkipPose24,
	sMudkipPose1,
	sMudkipPose22,
	sMudkipPose19,
	sMudkipPose16,
	sMudkipPose13,
	sMudkipPose10,
	sMudkipPose7,
	sMudkipPose4,
	sMudkipPose163,
	sMudkipPose77,
	sMudkipPose165,
	sMudkipPose166,
	sMudkipPose167,
	sMudkipPose168,
	sMudkipPose169,
	sMudkipPose95,
	sMudkipPose1,
	sMudkipPose2,
	sMudkipPose3,
	sMudkipPose4,
	sMudkipPose5,
	sMudkipPose6,
	sMudkipPose7,
	sMudkipPose8,
	sMudkipPose9,
	sMudkipPose10,
	sMudkipPose11,
	sMudkipPose12,
	sMudkipPose13,
	sMudkipPose14,
	sMudkipPose15,
	sMudkipPose16,
	sMudkipPose17,
	sMudkipPose18,
	sMudkipPose19,
	sMudkipPose20,
	sMudkipPose21,
	sMudkipPose22,
	sMudkipPose23,
	sMudkipPose24,
	sMudkipPose163,
	sMudkipPose95,
	sMudkipPose169,
	sMudkipPose168,
	sMudkipPose167,
	sMudkipPose166,
	sMudkipPose165,
	sMudkipPose77,
	sMudkipPose1,
	sMudkipPose22,
	sMudkipPose19,
	sMudkipPose16,
	sMudkipPose13,
	sMudkipPose10,
	sMudkipPose7,
	sMudkipPose4,
	sMudkipPose211,
	sMudkipPose212,
	sMudkipPose213,
	sMudkipPose214,
	sMudkipPose211,
	sMudkipPose216,
	sMudkipPose217,
	sMudkipPose218,
	sMudkipPose219,
	sMudkipPose13,
	sMudkipPose221,
	sMudkipPose222,
	sMudkipPose223,
	sMudkipPose224,
	sMudkipPose223,
	sMudkipPose224,
	sMudkipPose227,
	sMudkipPose228,
	sMudkipPose229,
	sMudkipPose230,
	sMudkipPose231,
	sMudkipPose19,
	sMudkipPose233,
	sMudkipPose234,
	sMudkipPose13,
	sMudkipPose236,
	sMudkipPose237,
	sMudkipPose1,
	sMudkipPose239,
	sMudkipPose240,
	sMudkipPose19,
	sMudkipPose242,
	sMudkipPose7,
	sMudkipPose244,
	sMudkipPose245,
	sMudkipPose246,
	sMudkipPose247,
	sMudkipPose248,
	sMudkipPose249,
	sMudkipPose250,
	sMudkipPose251,
	sMudkipPose252,
	sMudkipPose253,
	sMudkipPose254,
	sMudkipPose255,
	sMudkipPose256,
	sMudkipPose211,
	sMudkipPose212,
	sMudkipPose213,
	sMudkipPose214,
	sMudkipPose211,
	sMudkipPose212,
	sMudkipPose213,
	sMudkipPose214,
};

static const struct PositionSets sAxPositionsMudkip[] = {
	[0] = { .set = { {-1, -3}, {-3, 0}, {1, 0}, {-1, -4} } },
	[1] = { .set = { {-1, -6}, {-4, -4}, {2, -4}, {-1, -7} } },
	[2] = { .set = { {-1, -2}, {-2, 0}, {0, 0}, {-1, -4} } },
	[3] = { .set = { {3, -3}, {1, -1}, {-1, 0}, {1, -5} } },
	[4] = { .set = { {3, -5}, {4, -4}, {2, -3}, {0, -7} } },
	[5] = { .set = { {3, -2}, {1, 1}, {-1, 1}, {1, -4} } },
	[6] = { .set = { {6, -6}, {1, -2}, {1, -1}, {0, -6} } },
	[7] = { .set = { {6, -8}, {2, -4}, {3, -4}, {0, -8} } },
	[8] = { .set = { {6, -4}, {0, 0}, {-1, 1}, {-1, -5} } },
	[9] = { .set = { {3, -8}, {-2, -3}, {1, -2}, {-2, -7} } },
	[10] = { .set = { {1, -10}, {0, -6}, {1, -5}, {-3, -9} } },
	[11] = { .set = { {2, -7}, {-1, -2}, {-1, 0}, {-1, -7} } },
	[12] = { .set = { {-1, -8}, {1, -2}, {-3, -2}, {-1, -6} } },
	[13] = { .set = { {-1, -11}, {1, -5}, {-3, -5}, {-1, -9} } },
	[14] = { .set = { {-1, -9}, {1, -1}, {-3, -1}, {-1, -7} } },
	[15] = { .set = { {-5, -8}, {0, -3}, {-3, -2}, {0, -7} } },
	[16] = { .set = { {-3, -10}, {-2, -6}, {-3, -5}, {1, -9} } },
	[17] = { .set = { {-4, -7}, {-1, -2}, {-1, 0}, {-1, -7} } },
	[18] = { .set = { {-8, -6}, {-3, -2}, {-3, -1}, {-2, -6} } },
	[19] = { .set = { {-8, -8}, {-4, -4}, {-5, -4}, {-2, -8} } },
	[20] = { .set = { {-8, -4}, {-2, 0}, {-1, 1}, {-1, -5} } },
	[21] = { .set = { {-5, -3}, {-3, -1}, {-1, 0}, {-3, -5} } },
	[22] = { .set = { {-5, -5}, {-6, -4}, {-4, -3}, {-2, -7} } },
	[23] = { .set = { {-5, -2}, {-3, 1}, {-1, 1}, {-3, -4} } },
	[24] = { .set = { {-1, -3}, {-3, 0}, {1, 0}, {-1, -4} } },
	[25] = { .set = { {-1, -6}, {-4, -4}, {2, -4}, {-1, -7} } },
	[26] = { .set = { {-1, -2}, {-2, 0}, {0, 0}, {-1, -4} } },
	[27] = { .set = { {3, -3}, {1, -1}, {-1, 0}, {1, -5} } },
	[28] = { .set = { {3, -5}, {4, -4}, {2, -3}, {0, -7} } },
	[29] = { .set = { {3, -2}, {1, 1}, {-1, 1}, {1, -4} } },
	[30] = { .set = { {6, -6}, {1, -2}, {1, -1}, {0, -6} } },
	[31] = { .set = { {6, -8}, {2, -4}, {3, -4}, {0, -8} } },
	[32] = { .set = { {6, -4}, {0, 0}, {-1, 1}, {-1, -5} } },
	[33] = { .set = { {3, -8}, {-2, -3}, {1, -2}, {-2, -7} } },
	[34] = { .set = { {1, -10}, {0, -6}, {1, -5}, {-3, -9} } },
	[35] = { .set = { {2, -7}, {-1, -2}, {-1, 0}, {-1, -7} } },
	[36] = { .set = { {-1, -8}, {1, -2}, {-3, -2}, {-1, -6} } },
	[37] = { .set = { {-1, -11}, {1, -5}, {-3, -5}, {-1, -9} } },
	[38] = { .set = { {-1, -9}, {1, -1}, {-3, -1}, {-1, -7} } },
	[39] = { .set = { {-5, -8}, {0, -3}, {-3, -2}, {0, -7} } },
	[40] = { .set = { {-3, -10}, {-2, -6}, {-3, -5}, {1, -9} } },
	[41] = { .set = { {-4, -7}, {-1, -2}, {-1, 0}, {-1, -7} } },
	[42] = { .set = { {-8, -6}, {-3, -2}, {-3, -1}, {-2, -6} } },
	[43] = { .set = { {-8, -8}, {-4, -4}, {-5, -4}, {-2, -8} } },
	[44] = { .set = { {-8, -4}, {-2, 0}, {-1, 1}, {-1, -5} } },
	[45] = { .set = { {-5, -3}, {-3, -1}, {-1, 0}, {-3, -5} } },
	[46] = { .set = { {-5, -5}, {-6, -4}, {-4, -3}, {-2, -7} } },
	[47] = { .set = { {-5, -2}, {-3, 1}, {-1, 1}, {-3, -4} } },
	[48] = { .set = { {-1, -3}, {-3, 0}, {1, 0}, {-1, -4} } },
	[49] = { .set = { {-1, -6}, {-4, -4}, {2, -4}, {-1, -7} } },
	[50] = { .set = { {-1, -2}, {-2, 0}, {0, 0}, {-1, -4} } },
	[51] = { .set = { {3, -3}, {1, -1}, {-1, 0}, {1, -5} } },
	[52] = { .set = { {3, -5}, {4, -4}, {2, -3}, {0, -7} } },
	[53] = { .set = { {3, -2}, {1, 1}, {-1, 1}, {1, -4} } },
	[54] = { .set = { {6, -6}, {1, -2}, {1, -1}, {0, -6} } },
	[55] = { .set = { {6, -8}, {2, -4}, {3, -4}, {0, -8} } },
	[56] = { .set = { {6, -4}, {0, 0}, {-1, 1}, {-1, -5} } },
	[57] = { .set = { {3, -8}, {-2, -3}, {1, -2}, {-2, -7} } },
	[58] = { .set = { {1, -10}, {0, -6}, {1, -5}, {-3, -9} } },
	[59] = { .set = { {2, -7}, {-1, -2}, {-1, 0}, {-1, -7} } },
	[60] = { .set = { {-1, -8}, {1, -2}, {-3, -2}, {-1, -6} } },
	[61] = { .set = { {-1, -11}, {1, -5}, {-3, -5}, {-1, -9} } },
	[62] = { .set = { {-1, -9}, {1, -1}, {-3, -1}, {-1, -7} } },
	[63] = { .set = { {-5, -8}, {0, -3}, {-3, -2}, {0, -7} } },
	[64] = { .set = { {-3, -10}, {-2, -6}, {-3, -5}, {1, -9} } },
	[65] = { .set = { {-4, -7}, {-1, -2}, {-1, 0}, {-1, -7} } },
	[66] = { .set = { {-8, -6}, {-3, -2}, {-3, -1}, {-2, -6} } },
	[67] = { .set = { {-8, -8}, {-4, -4}, {-5, -4}, {-2, -8} } },
	[68] = { .set = { {-8, -4}, {-2, 0}, {-1, 1}, {-1, -5} } },
	[69] = { .set = { {-5, -3}, {-3, -1}, {-1, 0}, {-3, -5} } },
	[70] = { .set = { {-5, -5}, {-6, -4}, {-4, -3}, {-2, -7} } },
	[71] = { .set = { {-5, -2}, {-3, 1}, {-1, 1}, {-3, -4} } },
	[72] = { .set = { {-1, -3}, {-3, 0}, {1, 0}, {-1, -4} } },
	[73] = { .set = { {-1, 0}, {-4, 1}, {2, 1}, {-1, -4} } },
	[74] = { .set = { {-1, 1}, {-4, 1}, {2, 1}, {-1, -4} } },
	[75] = { .set = { {3, -3}, {1, -1}, {-1, 0}, {1, -5} } },
	[76] = { .set = { {3, -1}, {2, 0}, {0, 0}, {3, -5} } },
	[77] = { .set = { {3, -1}, {2, -1}, {-1, 0}, {1, -5} } },
	[78] = { .set = { {6, -6}, {1, -2}, {1, -1}, {0, -6} } },
	[79] = { .set = { {7, -3}, {3, -1}, {2, -1}, {4, -6} } },
	[80] = { .set = { {6, -2}, {4, -1}, {2, -1}, {2, -5} } },
	[81] = { .set = { {3, -8}, {-2, -3}, {1, -2}, {-2, -7} } },
	[82] = { .set = { {5, -8}, {0, -4}, {2, -3}, {1, -8} } },
	[83] = { .set = { {4, -6}, {0, -4}, {2, -2}, {-1, -7} } },
	[84] = { .set = { {-1, -8}, {1, -2}, {-3, -2}, {-1, -6} } },
	[85] = { .set = { {-1, -11}, {2, -3}, {-4, -3}, {-1, -8} } },
	[86] = { .set = { {-1, -8}, {2, -2}, {-3, -2}, {-1, -6} } },
	[87] = { .set = { {-5, -8}, {0, -3}, {-3, -2}, {0, -7} } },
	[88] = { .set = { {-7, -8}, {-2, -4}, {-4, -3}, {-3, -8} } },
	[89] = { .set = { {-6, -6}, {-2, -4}, {-4, -2}, {-1, -7} } },
	[90] = { .set = { {-7, -6}, {-2, -2}, {-2, -1}, {-1, -6} } },
	[91] = { .set = { {-8, -3}, {-4, -1}, {-3, -1}, {-5, -6} } },
	[92] = { .set = { {-7, -2}, {-5, -1}, {-3, -1}, {-3, -5} } },
	[93] = { .set = { {-4, -3}, {-2, -1}, {0, 0}, {-2, -5} } },
	[94] = { .set = { {-4, -1}, {-3, 0}, {-1, 0}, {-4, -5} } },
	[95] = { .set = { {-4, -1}, {-3, -1}, {0, 0}, {-2, -5} } },
	[96] = { .set = { {-1, -3}, {-3, 0}, {1, 0}, {-1, -4} } },
	[97] = { .set = { {-1, 0}, {-4, 1}, {2, 1}, {-1, -4} } },
	[98] = { .set = { {-1, 1}, {-4, 1}, {2, 1}, {-1, -4} } },
	[99] = { .set = { {3, -3}, {1, -1}, {-1, 0}, {1, -5} } },
	[100] = { .set = { {3, -1}, {2, 0}, {0, 0}, {3, -5} } },
	[101] = { .set = { {3, 0}, {2, 0}, {-1, 1}, {1, -4} } },
	[102] = { .set = { {6, -6}, {1, -2}, {1, -1}, {0, -6} } },
	[103] = { .set = { {7, -3}, {3, -1}, {2, -1}, {4, -6} } },
	[104] = { .set = { {7, -2}, {5, -1}, {3, -1}, {3, -5} } },
	[105] = { .set = { {3, -8}, {-2, -3}, {1, -2}, {-2, -7} } },
	[106] = { .set = { {5, -8}, {0, -4}, {2, -3}, {1, -8} } },
	[107] = { .set = { {4, -6}, {0, -4}, {2, -2}, {-1, -7} } },
	[108] = { .set = { {-1, -8}, {1, -2}, {-3, -2}, {-1, -6} } },
	[109] = { .set = { {-1, -11}, {2, -3}, {-4, -3}, {-1, -8} } },
	[110] = { .set = { {-1, -8}, {2, -2}, {-3, -2}, {-1, -6} } },
	[111] = { .set = { {-5, -8}, {0, -3}, {-3, -2}, {0, -7} } },
	[112] = { .set = { {-7, -8}, {-2, -4}, {-4, -3}, {-3, -8} } },
	[113] = { .set = { {-6, -6}, {-2, -4}, {-4, -2}, {-1, -7} } },
	[114] = { .set = { {-8, -6}, {-3, -2}, {-3, -1}, {-2, -6} } },
	[115] = { .set = { {-8, -3}, {-4, -1}, {-3, -1}, {-5, -6} } },
	[116] = { .set = { {-8, -2}, {-6, -1}, {-4, -1}, {-4, -5} } },
	[117] = { .set = { {-5, -3}, {-3, -1}, {-1, 0}, {-3, -5} } },
	[118] = { .set = { {-5, -1}, {-4, 0}, {-2, 0}, {-5, -5} } },
	[119] = { .set = { {-5, 0}, {-4, 0}, {-1, 1}, {-3, -4} } },
	[120] = { .set = { {-5, -2}, {-4, 0}, {-3, 0}, {-2, -5} } },
	[121] = { .set = { {-5, -2}, {-4, 0}, {-3, 0}, {-2, -4} } },
	[122] = { .set = { {-1, -9}, {-4, -7}, {2, -7}, {-1, -10} } },
	[123] = { .set = { {2, -10}, {3, -6}, {0, -5}, {-1, -10} } },
	[124] = { .set = { {4, -10}, {5, -8}, {4, -7}, {0, -10} } },
	[125] = { .set = { {0, -11}, {-1, -7}, {2, -5}, {-2, -10} } },
	[126] = { .set = { {-1, -13}, {2, -7}, {-4, -7}, {-1, -10} } },
	[127] = { .set = { {-2, -12}, {-1, -8}, {-4, -6}, {0, -11} } },
	[128] = { .set = { {-5, -10}, {-6, -8}, {-5, -7}, {-1, -10} } },
	[129] = { .set = { {-4, -10}, {-5, -6}, {-2, -5}, {-1, -10} } },
	[130] = { .set = { {-1, -3}, {-3, 0}, {1, 0}, {-1, -4} } },
	[131] = { .set = { {-1, -6}, {-4, -4}, {2, -4}, {-1, -7} } },
	[132] = { .set = { {-1, -2}, {-2, 0}, {0, 0}, {-1, -4} } },
	[133] = { .set = { {3, -3}, {1, -1}, {-1, 0}, {1, -5} } },
	[134] = { .set = { {3, -5}, {4, -4}, {2, -3}, {0, -7} } },
	[135] = { .set = { {3, -2}, {1, 1}, {-1, 1}, {1, -4} } },
	[136] = { .set = { {6, -6}, {1, -2}, {1, -1}, {0, -6} } },
	[137] = { .set = { {6, -8}, {2, -4}, {3, -4}, {0, -8} } },
	[138] = { .set = { {6, -4}, {0, 0}, {-1, 1}, {-1, -5} } },
	[139] = { .set = { {3, -8}, {-2, -3}, {1, -2}, {-2, -7} } },
	[140] = { .set = { {1, -10}, {0, -6}, {1, -5}, {-3, -9} } },
	[141] = { .set = { {2, -7}, {-1, -2}, {-1, 0}, {-1, -7} } },
	[142] = { .set = { {-1, -8}, {1, -2}, {-3, -2}, {-1, -6} } },
	[143] = { .set = { {-1, -11}, {1, -5}, {-3, -5}, {-1, -9} } },
	[144] = { .set = { {-1, -9}, {1, -1}, {-3, -1}, {-1, -7} } },
	[145] = { .set = { {-5, -8}, {0, -3}, {-3, -2}, {0, -7} } },
	[146] = { .set = { {-3, -10}, {-2, -6}, {-3, -5}, {1, -9} } },
	[147] = { .set = { {-4, -7}, {-1, -2}, {-1, 0}, {-1, -7} } },
	[148] = { .set = { {-8, -6}, {-3, -2}, {-3, -1}, {-2, -6} } },
	[149] = { .set = { {-8, -8}, {-4, -4}, {-5, -4}, {-2, -8} } },
	[150] = { .set = { {-8, -4}, {-2, 0}, {-1, 1}, {-1, -5} } },
	[151] = { .set = { {-5, -3}, {-3, -1}, {-1, 0}, {-3, -5} } },
	[152] = { .set = { {-5, -5}, {-6, -4}, {-4, -3}, {-2, -7} } },
	[153] = { .set = { {-5, -2}, {-3, 1}, {-1, 1}, {-3, -4} } },
	[154] = { .set = { {-1, -3}, {-3, 0}, {1, 0}, {-1, -4} } },
	[155] = { .set = { {-5, -3}, {-3, -1}, {-1, 0}, {-3, -5} } },
	[156] = { .set = { {-8, -6}, {-3, -2}, {-3, -1}, {-2, -6} } },
	[157] = { .set = { {-5, -8}, {0, -3}, {-3, -2}, {0, -7} } },
	[158] = { .set = { {-1, -8}, {1, -2}, {-3, -2}, {-1, -6} } },
	[159] = { .set = { {3, -8}, {-2, -3}, {1, -2}, {-2, -7} } },
	[160] = { .set = { {6, -6}, {1, -2}, {1, -1}, {0, -6} } },
	[161] = { .set = { {3, -3}, {1, -1}, {-1, 0}, {1, -5} } },
	[162] = { .set = { {-1, -1}, {-4, 0}, {2, 0}, {-1, -5} } },
	[163] = { .set = { {3, -1}, {2, 0}, {0, 0}, {3, -5} } },
	[164] = { .set = { {5, -3}, {1, -1}, {0, -1}, {2, -6} } },
	[165] = { .set = { {4, -7}, {-1, -3}, {1, -2}, {0, -7} } },
	[166] = { .set = { {-1, -10}, {2, -2}, {-4, -2}, {-1, -7} } },
	[167] = { .set = { {-5, -7}, {0, -3}, {-2, -2}, {-1, -7} } },
	[168] = { .set = { {-6, -3}, {-2, -1}, {-1, -1}, {-3, -6} } },
	[169] = { .set = { {-4, -1}, {-3, 0}, {-1, 0}, {-4, -5} } },
	[170] = { .set = { {-1, -3}, {-3, 0}, {1, 0}, {-1, -4} } },
	[171] = { .set = { {-1, -6}, {-4, -4}, {2, -4}, {-1, -7} } },
	[172] = { .set = { {-1, -2}, {-2, 0}, {0, 0}, {-1, -4} } },
	[173] = { .set = { {3, -3}, {1, -1}, {-1, 0}, {1, -5} } },
	[174] = { .set = { {3, -5}, {4, -4}, {2, -3}, {0, -7} } },
	[175] = { .set = { {3, -2}, {1, 1}, {-1, 1}, {1, -4} } },
	[176] = { .set = { {6, -6}, {1, -2}, {1, -1}, {0, -6} } },
	[177] = { .set = { {6, -8}, {2, -4}, {3, -4}, {0, -8} } },
	[178] = { .set = { {6, -4}, {0, 0}, {-1, 1}, {-1, -5} } },
	[179] = { .set = { {3, -8}, {-2, -3}, {1, -2}, {-2, -7} } },
	[180] = { .set = { {1, -10}, {0, -6}, {1, -5}, {-3, -9} } },
	[181] = { .set = { {2, -7}, {-1, -2}, {-1, 0}, {-1, -7} } },
	[182] = { .set = { {-1, -8}, {1, -2}, {-3, -2}, {-1, -6} } },
	[183] = { .set = { {-1, -11}, {1, -5}, {-3, -5}, {-1, -9} } },
	[184] = { .set = { {-1, -9}, {1, -1}, {-3, -1}, {-1, -7} } },
	[185] = { .set = { {-5, -8}, {0, -3}, {-3, -2}, {0, -7} } },
	[186] = { .set = { {-3, -10}, {-2, -6}, {-3, -5}, {1, -9} } },
	[187] = { .set = { {-4, -7}, {-1, -2}, {-1, 0}, {-1, -7} } },
	[188] = { .set = { {-8, -6}, {-3, -2}, {-3, -1}, {-2, -6} } },
	[189] = { .set = { {-8, -8}, {-4, -4}, {-5, -4}, {-2, -8} } },
	[190] = { .set = { {-8, -4}, {-2, 0}, {-1, 1}, {-1, -5} } },
	[191] = { .set = { {-5, -3}, {-3, -1}, {-1, 0}, {-3, -5} } },
	[192] = { .set = { {-5, -5}, {-6, -4}, {-4, -3}, {-2, -7} } },
	[193] = { .set = { {-5, -2}, {-3, 1}, {-1, 1}, {-3, -4} } },
	[194] = { .set = { {-1, -1}, {-4, 0}, {2, 0}, {-1, -5} } },
	[195] = { .set = { {-4, -1}, {-3, 0}, {-1, 0}, {-4, -5} } },
	[196] = { .set = { {-6, -3}, {-2, -1}, {-1, -1}, {-3, -6} } },
	[197] = { .set = { {-5, -7}, {0, -3}, {-2, -2}, {-1, -7} } },
	[198] = { .set = { {-1, -10}, {2, -2}, {-4, -2}, {-1, -7} } },
	[199] = { .set = { {4, -7}, {-1, -3}, {1, -2}, {0, -7} } },
	[200] = { .set = { {5, -3}, {1, -1}, {0, -1}, {2, -6} } },
	[201] = { .set = { {3, -1}, {2, 0}, {0, 0}, {3, -5} } },
	[202] = { .set = { {-1, -3}, {-3, 0}, {1, 0}, {-1, -4} } },
	[203] = { .set = { {-5, -3}, {-3, -1}, {-1, 0}, {-3, -5} } },
	[204] = { .set = { {-8, -6}, {-3, -2}, {-3, -1}, {-2, -6} } },
	[205] = { .set = { {-5, -8}, {0, -3}, {-3, -2}, {0, -7} } },
	[206] = { .set = { {-1, -8}, {1, -2}, {-3, -2}, {-1, -6} } },
	[207] = { .set = { {3, -8}, {-2, -3}, {1, -2}, {-2, -7} } },
	[208] = { .set = { {6, -6}, {1, -2}, {1, -1}, {0, -6} } },
	[209] = { .set = { {3, -3}, {1, -1}, {-1, 0}, {1, -5} } },
	[210] = { .set = { {5, -4}, {-3, -3}, {-3, -1}, {-1, -4} } },
	[211] = { .set = { {6, -2}, {-3, -3}, {-3, -1}, {0, -4} } },
	[212] = { .set = { {-6, -4}, {2, -3}, {2, -1}, {0, -4} } },
	[213] = { .set = { {-7, -2}, {2, -3}, {2, -1}, {-1, -4} } },
	[214] = { .set = { {5, -4}, {-3, -3}, {-3, -1}, {-1, -4} } },
	[215] = { .set = { {5, -5}, {3, -2}, {1, -1}, {-1, -5} } },
	[216] = { .set = { {4, -7}, {3, -3}, {3, -1}, {-1, -6} } },
	[217] = { .set = { {6, -4}, {4, -2}, {3, -1}, {-1, -5} } },
	[218] = { .set = { {7, -6}, {2, -2}, {2, -1}, {1, -6} } },
	[219] = { .set = { {-1, -8}, {1, -2}, {-3, -2}, {-1, -6} } },
	[220] = { .set = { {-1, -11}, {2, -3}, {-4, -3}, {-1, -7} } },
	[221] = { .set = { {-1, -9}, {2, -4}, {-4, -4}, {-1, -7} } },
	[222] = { .set = { {-1, -2}, {-5, 0}, {3, 0}, {-1, -4} } },
	[223] = { .set = { {-1, -5}, {-5, 0}, {3, 0}, {-1, -7} } },
	[224] = { .set = { {-1, -2}, {-5, 0}, {3, 0}, {-1, -4} } },
	[225] = { .set = { {-1, -5}, {-5, 0}, {3, 0}, {-1, -7} } },
	[226] = { .set = { {-1, -9}, {3, -4}, {-4, -4}, {-1, -5} } },
	[227] = { .set = { {-1, -9}, {2, -4}, {-4, -4}, {-1, -6} } },
	[228] = { .set = { {-1, -4}, {-5, -2}, {3, -2}, {-1, -5} } },
	[229] = { .set = { {-1, -3}, {-5, -1}, {3, -1}, {-1, -4} } },
	[230] = { .set = { {-1, -3}, {-5, -1}, {3, -1}, {-1, -4} } },
	[231] = { .set = { {-8, -6}, {-3, -2}, {-3, -1}, {-2, -6} } },
	[232] = { .set = { {-5, -4}, {-3, -2}, {1, -4}, {0, -5} } },
	[233] = { .set = { {-5, -5}, {-2, -1}, {2, -5}, {0, -4} } },
	[234] = { .set = { {-1, -8}, {1, -2}, {-3, -2}, {-1, -6} } },
	[235] = { .set = { {-1, -9}, {3, -3}, {-5, -3}, {-1, -6} } },
	[236] = { .set = { {-1, -8}, {4, -2}, {-6, -2}, {-1, -4} } },
	[237] = { .set = { {-1, -3}, {-3, 0}, {1, 0}, {-1, -4} } },
	[238] = { .set = { {-1, -6}, {-4, 0}, {2, 0}, {-1, -5} } },
	[239] = { .set = { {-1, -2}, {-4, 0}, {2, 0}, {-1, -4} } },
	[240] = { .set = { {-8, -6}, {-3, -2}, {-3, -1}, {-2, -6} } },
	[241] = { .set = { {-8, -4}, {-4, -2}, {-3, -1}, {-2, -5} } },
	[242] = { .set = { {6, -6}, {1, -2}, {1, -1}, {0, -6} } },
	[243] = { .set = { {6, -4}, {2, -2}, {1, -1}, {0, -5} } },
	[244] = { .set = { {-1, -8}, {3, -3}, {-5, -3}, {-1, -5} } },
	[245] = { .set = { {-5, -3}, {-3, -2}, {-2, -1}, {-1, -6} } },
	[246] = { .set = { {-4, -4}, {-7, -3}, {-2, -1}, {-1, -5} } },
	[247] = { .set = { {-4, -2}, {-7, -1}, {-1, -1}, {0, -4} } },
	[248] = { .set = { {-4, -4}, {-1, -3}, {-5, -3}, {1, -6} } },
	[249] = { .set = { {-5, -3}, {-4, -1}, {-5, -1}, {0, -5} } },
	[250] = { .set = { {4, -3}, {2, -2}, {1, -1}, {0, -6} } },
	[251] = { .set = { {3, -4}, {6, -3}, {1, -1}, {0, -5} } },
	[252] = { .set = { {3, -2}, {6, -1}, {0, -1}, {-1, -4} } },
	[253] = { .set = { {3, -4}, {0, -3}, {4, -3}, {-2, -6} } },
	[254] = { .set = { {4, -3}, {3, -1}, {4, -1}, {-1, -5} } },
	[255] = { .set = { {3, -10}, {-4, -5}, {2, -4}, {-2, -5} } },
	[256] = { .set = { {5, -4}, {-3, -3}, {-3, -1}, {-1, -4} } },
	[257] = { .set = { {6, -2}, {-3, -3}, {-3, -1}, {0, -4} } },
	[258] = { .set = { {-6, -4}, {2, -3}, {2, -1}, {0, -4} } },
	[259] = { .set = { {-7, -2}, {2, -3}, {2, -1}, {-1, -4} } },
	[260] = { .set = { {5, -4}, {-3, -3}, {-3, -1}, {-1, -4} } },
	[261] = { .set = { {6, -2}, {-3, -3}, {-3, -1}, {0, -4} } },
	[262] = { .set = { {-6, -4}, {2, -3}, {2, -1}, {0, -4} } },
	[263] = { .set = { {-7, -2}, {2, -3}, {2, -1}, {-1, -4} } },
};

static const ax_anim *const sMudkipAnimTable1[] = {
	sMudkipAnims_1_1,
	sMudkipAnims_1_2,
	sMudkipAnims_1_3,
	sMudkipAnims_1_4,
	sMudkipAnims_1_5,
	sMudkipAnims_1_6,
	sMudkipAnims_1_7,
	sMudkipAnims_1_8,
};

static const ax_anim *const sMudkipAnimTable2[] = {
	sMudkipAnims_2_1,
	sMudkipAnims_2_2,
	sMudkipAnims_2_3,
	sMudkipAnims_2_4,
	sMudkipAnims_2_5,
	sMudkipAnims_2_6,
	sMudkipAnims_2_7,
	sMudkipAnims_2_8,
};

static const ax_anim *const sMudkipAnimTable3[] = {
	sMudkipAnims_3_1,
	sMudkipAnims_3_2,
	sMudkipAnims_3_3,
	sMudkipAnims_3_4,
	sMudkipAnims_3_5,
	sMudkipAnims_3_6,
	sMudkipAnims_3_7,
	sMudkipAnims_3_8,
};

static const ax_anim *const sMudkipAnimTable4[] = {
	sMudkipAnims_4_1,
	sMudkipAnims_4_2,
	sMudkipAnims_4_3,
	sMudkipAnims_4_4,
	sMudkipAnims_4_5,
	sMudkipAnims_4_6,
	sMudkipAnims_4_7,
	sMudkipAnims_4_8,
};

static const ax_anim *const sMudkipAnimTable5[] = {
	sMudkipAnims_5_1,
	sMudkipAnims_5_2,
	sMudkipAnims_5_3,
	sMudkipAnims_5_4,
	sMudkipAnims_5_5,
	sMudkipAnims_5_6,
	sMudkipAnims_5_7,
	sMudkipAnims_5_8,
};

static const ax_anim *const sMudkipAnimTable6[] = {
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
};

static const ax_anim *const sMudkipAnimTable7[] = {
	gAxSharedAnim_00332,
	gAxSharedAnim_00342,
	gAxSharedAnim_00350,
	gAxSharedAnim_00358,
	gAxSharedAnim_00370,
	gAxSharedAnim_00378,
	gAxSharedAnim_00385,
	gAxSharedAnim_00392,
};

static const ax_anim *const sMudkipAnimTable8[] = {
	sMudkipAnims_8_1,
	sMudkipAnims_8_2,
	sMudkipAnims_8_3,
	sMudkipAnims_8_4,
	sMudkipAnims_8_5,
	sMudkipAnims_8_6,
	sMudkipAnims_8_7,
	sMudkipAnims_8_8,
};

static const ax_anim *const sMudkipAnimTable9[] = {
	sMudkipAnims_9_1,
	gAxSharedAnim_00683,
	sMudkipAnims_9_3,
	sMudkipAnims_9_4,
	sMudkipAnims_9_5,
	sMudkipAnims_9_6,
	sMudkipAnims_9_7,
	gAxSharedAnim_00618,
};

static const ax_anim *const sMudkipAnimTable10[] = {
	gAxSharedAnim_00705,
	gAxSharedAnim_00714,
	gAxSharedAnim_00725,
	gAxSharedAnim_00737,
	gAxSharedAnim_00750,
	gAxSharedAnim_00760,
	gAxSharedAnim_00772,
	gAxSharedAnim_00781,
};

static const ax_anim *const sMudkipAnimTable11[] = {
	gAxSharedAnim_00794,
	gAxSharedAnim_00836,
	gAxSharedAnim_00873,
	gAxSharedAnim_00913,
	gAxSharedAnim_00952,
	gAxSharedAnim_00988,
	gAxSharedAnim_01044,
	gAxSharedAnim_01087,
};

static const ax_anim *const sMudkipAnimTable12[] = {
	gAxSharedAnim_01147,
	gAxSharedAnim_01231,
	gAxSharedAnim_01208,
	gAxSharedAnim_01194,
	gAxSharedAnim_01193,
	gAxSharedAnim_01181,
	gAxSharedAnim_01161,
	gAxSharedAnim_01148,
};

static const ax_anim *const sMudkipAnimTable13[] = {
	gAxSharedAnim_01242,
	gAxSharedAnim_01323,
	gAxSharedAnim_01314,
	gAxSharedAnim_01301,
	gAxSharedAnim_01286,
	gAxSharedAnim_01278,
	gAxSharedAnim_01267,
	gAxSharedAnim_01253,
};

static const ax_anim *const sMudkipAnimTable14[] = {
	gAxSharedAnim_02388,
	gAxSharedAnim_02388,
	gAxSharedAnim_02388,
	gAxSharedAnim_02388,
	gAxSharedAnim_02388,
	gAxSharedAnim_02388,
	gAxSharedAnim_02388,
	gAxSharedAnim_02388,
};

static const ax_anim *const sMudkipAnimTable15[] = {
	sMudkipAnims_15_1,
	sMudkipAnims_15_1,
	sMudkipAnims_15_1,
	sMudkipAnims_15_1,
	sMudkipAnims_15_1,
	sMudkipAnims_15_1,
	sMudkipAnims_15_1,
	sMudkipAnims_15_1,
};

static const ax_anim *const sMudkipAnimTable16[] = {
	gAxSharedAnim_02667,
	gAxSharedAnim_02667,
	gAxSharedAnim_02667,
	gAxSharedAnim_02667,
	gAxSharedAnim_02667,
	gAxSharedAnim_02667,
	gAxSharedAnim_02667,
	gAxSharedAnim_02667,
};

static const ax_anim *const sMudkipAnimTable17[] = {
	gAxSharedAnim_00105,
	gAxSharedAnim_00105,
	gAxSharedAnim_00105,
	gAxSharedAnim_00105,
	gAxSharedAnim_00105,
	gAxSharedAnim_00105,
	gAxSharedAnim_00105,
	gAxSharedAnim_00105,
};

static const ax_anim *const sMudkipAnimTable18[] = {
	sMudkipAnims_18_1,
	sMudkipAnims_18_1,
	sMudkipAnims_18_1,
	sMudkipAnims_18_1,
	sMudkipAnims_18_5,
	sMudkipAnims_18_1,
	sMudkipAnims_18_1,
	sMudkipAnims_18_1,
};

static const ax_anim *const sMudkipAnimTable19[] = {
	gAxSharedAnim_02672,
	gAxSharedAnim_02672,
	gAxSharedAnim_02672,
	gAxSharedAnim_02672,
	gAxSharedAnim_02672,
	gAxSharedAnim_02672,
	gAxSharedAnim_02672,
	gAxSharedAnim_02672,
};

static const ax_anim *const sMudkipAnimTable20[] = {
	gAxSharedAnim_02428,
	gAxSharedAnim_02427,
	gAxSharedAnim_02427,
	gAxSharedAnim_02427,
	gAxSharedAnim_02427,
	gAxSharedAnim_02427,
	gAxSharedAnim_02427,
	gAxSharedAnim_02427,
};

static const ax_anim *const sMudkipAnimTable21[] = {
	gAxSharedAnim_02675,
	gAxSharedAnim_02675,
	gAxSharedAnim_02675,
	gAxSharedAnim_02675,
	gAxSharedAnim_02675,
	gAxSharedAnim_02675,
	gAxSharedAnim_02675,
	gAxSharedAnim_02675,
};

static const ax_anim *const sMudkipAnimTable22[] = {
	gAxSharedAnim_02391,
	gAxSharedAnim_02391,
	gAxSharedAnim_02391,
	gAxSharedAnim_02391,
	gAxSharedAnim_02391,
	gAxSharedAnim_02391,
	gAxSharedAnim_02391,
	gAxSharedAnim_02391,
};

static const ax_anim *const sMudkipAnimTable23[] = {
	gAxSharedAnim_00072,
	gAxSharedAnim_00072,
	gAxSharedAnim_00074,
	gAxSharedAnim_00072,
	gAxSharedAnim_00072,
	gAxSharedAnim_00072,
	gAxSharedAnim_00072,
	gAxSharedAnim_00072,
};

static const ax_anim *const sMudkipAnimTable24[] = {
	gAxSharedAnim_02433,
	gAxSharedAnim_02433,
	gAxSharedAnim_02433,
	gAxSharedAnim_02433,
	gAxSharedAnim_02433,
	gAxSharedAnim_02433,
	gAxSharedAnim_02433,
	gAxSharedAnim_02433,
};

static const ax_anim *const sMudkipAnimTable25[] = {
	sMudkipAnims_25_1,
	sMudkipAnims_25_1,
	sMudkipAnims_25_1,
	sMudkipAnims_25_1,
	sMudkipAnims_25_1,
	sMudkipAnims_25_1,
	sMudkipAnims_25_7,
	sMudkipAnims_25_7,
};

static const ax_anim *const sMudkipAnimTable26[] = {
	sMudkipAnims_26_1,
	sMudkipAnims_26_1,
	sMudkipAnims_26_1,
	sMudkipAnims_26_1,
	sMudkipAnims_26_1,
	sMudkipAnims_26_1,
	sMudkipAnims_26_1,
	sMudkipAnims_26_1,
};

static const ax_anim *const sMudkipAnimTable27[] = {
	sMudkipAnims_27_1,
	sMudkipAnims_27_1,
	sMudkipAnims_27_1,
	sMudkipAnims_27_1,
	sMudkipAnims_27_1,
	sMudkipAnims_27_1,
	sMudkipAnims_27_1,
	sMudkipAnims_27_1,
};

static const ax_anim *const sMudkipAnimTable28[] = {
	sMudkipAnims_28_1,
	sMudkipAnims_28_1,
	gAxSharedAnim_00114,
	sMudkipAnims_28_1,
	sMudkipAnims_28_1,
	sMudkipAnims_28_1,
	sMudkipAnims_28_1,
	sMudkipAnims_28_1,
};

static const ax_anim *const *const sAxAnimationsMudkip[] = {
	sMudkipAnimTable1,
	sMudkipAnimTable2,
	sMudkipAnimTable3,
	sMudkipAnimTable4,
	sMudkipAnimTable5,
	sMudkipAnimTable6,
	sMudkipAnimTable7,
	sMudkipAnimTable8,
	sMudkipAnimTable9,
	sMudkipAnimTable10,
	sMudkipAnimTable11,
	sMudkipAnimTable12,
	sMudkipAnimTable13,
	sMudkipAnimTable14,
	sMudkipAnimTable15,
	sMudkipAnimTable16,
	sMudkipAnimTable17,
	sMudkipAnimTable18,
	sMudkipAnimTable19,
	sMudkipAnimTable20,
	sMudkipAnimTable21,
	sMudkipAnimTable22,
	sMudkipAnimTable23,
	sMudkipAnimTable24,
	sMudkipAnimTable25,
	sMudkipAnimTable26,
	sMudkipAnimTable27,
	sMudkipAnimTable28,
};

static const ax_sprite *const sAxSpritesMudkip[] = {
	sMudkipSprites1,
	sMudkipSprites2,
	sMudkipSprites3,
	sMudkipSprites4,
	sMudkipSprites5,
	sMudkipSprites6,
	sMudkipSprites7,
	sMudkipSprites8,
	sMudkipSprites9,
	sMudkipSprites10,
	sMudkipSprites11,
	sMudkipSprites12,
	sMudkipSprites13,
	sMudkipSprites14,
	sMudkipSprites15,
	sMudkipSprites16,
	sMudkipSprites17,
	sMudkipSprites18,
	sMudkipSprites19,
	sMudkipSprites20,
	sMudkipSprites21,
	sMudkipSprites22,
	sMudkipSprites23,
	sMudkipSprites24,
	sMudkipSprites25,
	sMudkipSprites26,
	sMudkipSprites27,
	sMudkipSprites28,
	sMudkipSprites29,
	sMudkipSprites30,
	sMudkipSprites31,
	sMudkipSprites32,
	sMudkipSprites33,
	sMudkipSprites34,
	sMudkipSprites35,
	sMudkipSprites36,
	sMudkipSprites37,
	sMudkipSprites38,
	sMudkipSprites39,
	sMudkipSprites40,
	sMudkipSprites41,
	sMudkipSprites42,
	sMudkipSprites43,
	sMudkipSprites44,
	sMudkipSprites45,
	sMudkipSprites46,
	sMudkipSprites47,
	sMudkipSprites48,
	sMudkipSprites49,
	sMudkipSprites50,
	sMudkipSprites51,
	sMudkipSprites52,
	sMudkipSprites53,
	sMudkipSprites54,
	sMudkipSprites55,
	sMudkipSprites56,
	sMudkipSprites57,
	sMudkipSprites58,
	sMudkipSprites59,
	sMudkipSprites60,
};

static const axmain sAxMainMudkip = {
	.poses = sAxPosesMudkip,
	.animations = sAxAnimationsMudkip,
	.animCount = ARRAY_COUNT(sAxAnimationsMudkip),
	.spriteData = sAxSpritesMudkip,
	.positions = sAxPositionsMudkip,
};
