/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainRemoraid;
const SiroArchive gAxRemoraid = {"SIRO", &sAxMainRemoraid};

static const ax_pose sRemoraidPose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose2[] = {
	AX_POSE(1, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose3[] = {
	AX_POSE(2, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose4[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose5[] = {
	AX_POSE(4, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose6[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose7[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose8[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose9[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose10[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose11[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose12[] = {
	AX_POSE(11, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose13[] = {
	AX_POSE(12, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose14[] = {
	AX_POSE(13, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose15[] = {
	AX_POSE(14, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose16[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose17[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose18[] = {
	AX_POSE(11, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose19[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose20[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose21[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose22[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose23[] = {
	AX_POSE(4, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose24[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose28[] = {
	AX_POSE(15, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose32[] = {
	AX_POSE(16, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose36[] = {
	AX_POSE(17, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose40[] = {
	AX_POSE(18, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose44[] = {
	AX_POSE(19, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose48[] = {
	AX_POSE(18, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose52[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose56[] = {
	AX_POSE(16, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose91[] = {
	AX_POSE(20, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose94[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose97[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose100[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose103[] = {
	AX_POSE(24, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose106[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose109[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose112[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose115[] = {
	AX_POSE(25, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose116[] = {
	AX_POSE(26, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose117[] = {
	AX_POSE(27, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose119[] = {
	AX_POSE(16, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose120[] = {
	AX_POSE(28, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose121[] = {
	AX_POSE(29, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose122[] = {
	AX_POSE(30, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose125[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose126[] = {
	AX_POSE(32, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose127[] = {
	AX_POSE(33, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose129[] = {
	AX_POSE(18, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose130[] = {
	AX_POSE(34, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose131[] = {
	AX_POSE(35, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose132[] = {
	AX_POSE(36, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose134[] = {
	AX_POSE(19, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose135[] = {
	AX_POSE(37, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose136[] = {
	AX_POSE(38, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose137[] = {
	AX_POSE(39, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose139[] = {
	AX_POSE(18, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose140[] = {
	AX_POSE(34, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose141[] = {
	AX_POSE(35, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose142[] = {
	AX_POSE(36, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose145[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose146[] = {
	AX_POSE(32, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose147[] = {
	AX_POSE(33, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose149[] = {
	AX_POSE(16, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose150[] = {
	AX_POSE(28, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose151[] = {
	AX_POSE(29, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose152[] = {
	AX_POSE(30, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose153[] = {
	AX_POSE(40, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose154[] = {
	AX_POSE(41, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose155[] = {
	AX_POSE(42, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose156[] = {
	AX_POSE(43, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose157[] = {
	AX_POSE(44, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose158[] = {
	AX_POSE(45, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(230, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose159[] = {
	AX_POSE(46, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose160[] = {
	AX_POSE(45, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose161[] = {
	AX_POSE(44, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose162[] = {
	AX_POSE(43, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose170[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose171[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose173[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose174[] = {
	AX_POSE(11, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose179[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose180[] = {
	AX_POSE(11, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose182[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose183[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose206[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose207[] = {
	AX_POSE(16, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose208[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose210[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose212[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose213[] = {
	AX_POSE(18, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose214[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose219[] = {
	AX_POSE(18, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose222[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose225[] = {
	AX_POSE(16, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose228[] = {
	AX_POSE(28, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose229[] = {
	AX_POSE(31, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose230[] = {
	AX_POSE(34, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose233[] = {
	AX_POSE(31, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose235[] = {
	AX_POSE(27, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose236[] = {
	AX_POSE(30, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose237[] = {
	AX_POSE(33, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose238[] = {
	AX_POSE(36, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose240[] = {
	AX_POSE(36, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose241[] = {
	AX_POSE(33, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose244[] = {
	AX_POSE(29, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose245[] = {
	AX_POSE(32, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose246[] = {
	AX_POSE(35, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose248[] = {
	AX_POSE(35, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose249[] = {
	AX_POSE(32, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRemoraidPose250[] = {
	AX_POSE(29, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const u8 sRemoraidAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_2_1.lz");
static const u8 sRemoraidAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_2_2.lz");
static const u8 sRemoraidAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_2_3.lz");
static const u8 sRemoraidAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_2_4.lz");
static const u8 sRemoraidAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_2_5.lz");
static const u8 sRemoraidAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_2_6.lz");
static const u8 sRemoraidAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_2_7.lz");
static const u8 sRemoraidAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_2_8.lz");
static const u8 sRemoraidAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_3_1.lz");
static const u8 sRemoraidAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_3_2.lz");
static const u8 sRemoraidAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_3_3.lz");
static const u8 sRemoraidAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_3_4.lz");
static const u8 sRemoraidAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_3_5.lz");
static const u8 sRemoraidAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_3_6.lz");
static const u8 sRemoraidAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_3_7.lz");
static const u8 sRemoraidAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_3_8.lz");
static const u8 sRemoraidAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_5_3.lz");
static const u8 sRemoraidAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_5_5.lz");
static const u8 sRemoraidAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_5_7.lz");
static const u8 sRemoraidAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_8_1.lz");
static const u8 sRemoraidAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_8_2.lz");
static const u8 sRemoraidAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_8_3.lz");
static const u8 sRemoraidAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_8_4.lz");
static const u8 sRemoraidAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_8_5.lz");
static const u8 sRemoraidAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_8_6.lz");
static const u8 sRemoraidAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_8_7.lz");
static const u8 sRemoraidAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_8_8.lz");
static const u8 sRemoraidAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_9_1.lz");
static const u8 sRemoraidAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_9_2.lz");
static const u8 sRemoraidAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_9_3.lz");
static const u8 sRemoraidAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_9_4.lz");
static const u8 sRemoraidAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_9_5.lz");
static const u8 sRemoraidAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_9_6.lz");
static const u8 sRemoraidAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_9_7.lz");
static const u8 sRemoraidAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_9_8.lz");
static const u8 sRemoraidAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_11_1.lz");
static const u8 sRemoraidAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_11_2.lz");
static const u8 sRemoraidAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_11_3.lz");
static const u8 sRemoraidAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_11_4.lz");
static const u8 sRemoraidAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_11_5.lz");
static const u8 sRemoraidAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_11_7.lz");
static const u8 sRemoraidAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_11_8.lz");
static const u8 sRemoraidAnims_12_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_12_1.lz");
static const u8 sRemoraidAnims_12_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_12_2.lz");
static const u8 sRemoraidAnims_12_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_12_3.lz");
static const u8 sRemoraidAnims_12_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_12_4.lz");
static const u8 sRemoraidAnims_12_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_12_5.lz");
static const u8 sRemoraidAnims_12_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_12_6.lz");
static const u8 sRemoraidAnims_12_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_12_7.lz");
static const u8 sRemoraidAnims_12_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/remoraid/sRemoraidAnims_12_8.lz");

static const u8 sRemoraidGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_1.4bpp.lz");
static const ax_sprite sRemoraidSprites1[] = {
	{sRemoraidGfx1, ARRAY_COUNT(sRemoraidGfx1)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_2.4bpp.lz");
static const ax_sprite sRemoraidSprites2[] = {
	{sRemoraidGfx2, ARRAY_COUNT(sRemoraidGfx2)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_3.4bpp.lz");
static const ax_sprite sRemoraidSprites3[] = {
	{sRemoraidGfx3, ARRAY_COUNT(sRemoraidGfx3)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_4.4bpp.lz");
static const ax_sprite sRemoraidSprites4[] = {
	{sRemoraidGfx4, ARRAY_COUNT(sRemoraidGfx4)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_5.4bpp.lz");
static const ax_sprite sRemoraidSprites5[] = {
	{sRemoraidGfx5, ARRAY_COUNT(sRemoraidGfx5)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_6.4bpp.lz");
static const ax_sprite sRemoraidSprites6[] = {
	{sRemoraidGfx6, ARRAY_COUNT(sRemoraidGfx6)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_7.4bpp.lz");
static const ax_sprite sRemoraidSprites7[] = {
	{sRemoraidGfx7, ARRAY_COUNT(sRemoraidGfx7)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_8.4bpp.lz");
static const ax_sprite sRemoraidSprites8[] = {
	{sRemoraidGfx8, ARRAY_COUNT(sRemoraidGfx8)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_9.4bpp.lz");
static const ax_sprite sRemoraidSprites9[] = {
	{sRemoraidGfx9, ARRAY_COUNT(sRemoraidGfx9)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_10.4bpp.lz");
static const ax_sprite sRemoraidSprites10[] = {
	{sRemoraidGfx10, ARRAY_COUNT(sRemoraidGfx10)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_11.4bpp.lz");
static const ax_sprite sRemoraidSprites11[] = {
	{sRemoraidGfx11, ARRAY_COUNT(sRemoraidGfx11)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_12.4bpp.lz");
static const ax_sprite sRemoraidSprites12[] = {
	{sRemoraidGfx12, ARRAY_COUNT(sRemoraidGfx12)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_13.4bpp.lz");
static const ax_sprite sRemoraidSprites13[] = {
	{sRemoraidGfx13, ARRAY_COUNT(sRemoraidGfx13)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_14.4bpp.lz");
static const ax_sprite sRemoraidSprites14[] = {
	{sRemoraidGfx14, ARRAY_COUNT(sRemoraidGfx14)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_15.4bpp.lz");
static const ax_sprite sRemoraidSprites15[] = {
	{sRemoraidGfx15, ARRAY_COUNT(sRemoraidGfx15)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_16.4bpp.lz");
static const ax_sprite sRemoraidSprites16[] = {
	{sRemoraidGfx16, ARRAY_COUNT(sRemoraidGfx16)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_17.4bpp.lz");
static const u8 sRemoraidGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_17_1.4bpp.lz");
static const ax_sprite sRemoraidSprites17[] = {
	{sRemoraidGfx17, ARRAY_COUNT(sRemoraidGfx17)}, 
	{NULL, 32}, 
	{sRemoraidGfx17_1, ARRAY_COUNT(sRemoraidGfx17_1)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_18.4bpp.lz");
static const u8 sRemoraidGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_18_1.4bpp.lz");
static const u8 sRemoraidGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_18_2.4bpp.lz");
static const ax_sprite sRemoraidSprites18[] = {
	{sRemoraidGfx18, ARRAY_COUNT(sRemoraidGfx18)}, 
	{NULL, 64}, 
	{sRemoraidGfx18_1, ARRAY_COUNT(sRemoraidGfx18_1)}, 
	{NULL, 64}, 
	{sRemoraidGfx18_2, ARRAY_COUNT(sRemoraidGfx18_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_19.4bpp.lz");
static const ax_sprite sRemoraidSprites19[] = {
	{sRemoraidGfx19, ARRAY_COUNT(sRemoraidGfx19)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_20.4bpp.lz");
static const ax_sprite sRemoraidSprites20[] = {
	{sRemoraidGfx20, ARRAY_COUNT(sRemoraidGfx20)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_21.4bpp.lz");
static const ax_sprite sRemoraidSprites21[] = {
	{sRemoraidGfx21, ARRAY_COUNT(sRemoraidGfx21)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_22.4bpp.lz");
static const u8 sRemoraidGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_22_1.4bpp.lz");
static const u8 sRemoraidGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_22_2.4bpp.lz");
static const ax_sprite sRemoraidSprites22[] = {
	{NULL, 32}, 
	{sRemoraidGfx22, ARRAY_COUNT(sRemoraidGfx22)}, 
	{NULL, 32}, 
	{sRemoraidGfx22_1, ARRAY_COUNT(sRemoraidGfx22_1)}, 
	{NULL, 32}, 
	{sRemoraidGfx22_2, ARRAY_COUNT(sRemoraidGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_23.4bpp.lz");
static const u8 sRemoraidGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_23_1.4bpp.lz");
static const u8 sRemoraidGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_23_2.4bpp.lz");
static const u8 sRemoraidGfx23_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_23_3.4bpp.lz");
static const ax_sprite sRemoraidSprites23[] = {
	{sRemoraidGfx23, ARRAY_COUNT(sRemoraidGfx23)}, 
	{NULL, 32}, 
	{sRemoraidGfx23_1, ARRAY_COUNT(sRemoraidGfx23_1)}, 
	{NULL, 32}, 
	{sRemoraidGfx23_2, ARRAY_COUNT(sRemoraidGfx23_2)}, 
	{NULL, 32}, 
	{sRemoraidGfx23_3, ARRAY_COUNT(sRemoraidGfx23_3)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_24.4bpp.lz");
static const u8 sRemoraidGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_24_1.4bpp.lz");
static const u8 sRemoraidGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_24_2.4bpp.lz");
static const ax_sprite sRemoraidSprites24[] = {
	{sRemoraidGfx24, ARRAY_COUNT(sRemoraidGfx24)}, 
	{NULL, 32}, 
	{sRemoraidGfx24_1, ARRAY_COUNT(sRemoraidGfx24_1)}, 
	{NULL, 64}, 
	{sRemoraidGfx24_2, ARRAY_COUNT(sRemoraidGfx24_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_25.4bpp.lz");
static const ax_sprite sRemoraidSprites25[] = {
	{sRemoraidGfx25, ARRAY_COUNT(sRemoraidGfx25)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_26.4bpp.lz");
static const ax_sprite sRemoraidSprites26[] = {
	{sRemoraidGfx26, ARRAY_COUNT(sRemoraidGfx26)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_27.4bpp.lz");
static const ax_sprite sRemoraidSprites27[] = {
	{sRemoraidGfx27, ARRAY_COUNT(sRemoraidGfx27)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_28.4bpp.lz");
static const ax_sprite sRemoraidSprites28[] = {
	{sRemoraidGfx28, ARRAY_COUNT(sRemoraidGfx28)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_29.4bpp.lz");
static const ax_sprite sRemoraidSprites29[] = {
	{sRemoraidGfx29, ARRAY_COUNT(sRemoraidGfx29)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_30.4bpp.lz");
static const ax_sprite sRemoraidSprites30[] = {
	{sRemoraidGfx30, ARRAY_COUNT(sRemoraidGfx30)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_31.4bpp.lz");
static const ax_sprite sRemoraidSprites31[] = {
	{sRemoraidGfx31, ARRAY_COUNT(sRemoraidGfx31)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_32.4bpp.lz");
static const u8 sRemoraidGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_32_1.4bpp.lz");
static const u8 sRemoraidGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_32_2.4bpp.lz");
static const ax_sprite sRemoraidSprites32[] = {
	{sRemoraidGfx32, ARRAY_COUNT(sRemoraidGfx32)}, 
	{NULL, 64}, 
	{sRemoraidGfx32_1, ARRAY_COUNT(sRemoraidGfx32_1)}, 
	{NULL, 64}, 
	{sRemoraidGfx32_2, ARRAY_COUNT(sRemoraidGfx32_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_33.4bpp.lz");
static const ax_sprite sRemoraidSprites33[] = {
	{sRemoraidGfx33, ARRAY_COUNT(sRemoraidGfx33)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_34.4bpp.lz");
static const ax_sprite sRemoraidSprites34[] = {
	{sRemoraidGfx34, ARRAY_COUNT(sRemoraidGfx34)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_35.4bpp.lz");
static const ax_sprite sRemoraidSprites35[] = {
	{sRemoraidGfx35, ARRAY_COUNT(sRemoraidGfx35)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_36.4bpp.lz");
static const ax_sprite sRemoraidSprites36[] = {
	{sRemoraidGfx36, ARRAY_COUNT(sRemoraidGfx36)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_37.4bpp.lz");
static const ax_sprite sRemoraidSprites37[] = {
	{sRemoraidGfx37, ARRAY_COUNT(sRemoraidGfx37)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_38.4bpp.lz");
static const ax_sprite sRemoraidSprites38[] = {
	{sRemoraidGfx38, ARRAY_COUNT(sRemoraidGfx38)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_39.4bpp.lz");
static const ax_sprite sRemoraidSprites39[] = {
	{sRemoraidGfx39, ARRAY_COUNT(sRemoraidGfx39)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_40.4bpp.lz");
static const ax_sprite sRemoraidSprites40[] = {
	{sRemoraidGfx40, ARRAY_COUNT(sRemoraidGfx40)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_41.4bpp.lz");
static const ax_sprite sRemoraidSprites41[] = {
	{sRemoraidGfx41, ARRAY_COUNT(sRemoraidGfx41)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_42.4bpp.lz");
static const ax_sprite sRemoraidSprites42[] = {
	{sRemoraidGfx42, ARRAY_COUNT(sRemoraidGfx42)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_43.4bpp.lz");
static const ax_sprite sRemoraidSprites43[] = {
	{sRemoraidGfx43, ARRAY_COUNT(sRemoraidGfx43)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_44.4bpp.lz");
static const ax_sprite sRemoraidSprites44[] = {
	{sRemoraidGfx44, ARRAY_COUNT(sRemoraidGfx44)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_45.4bpp.lz");
static const ax_sprite sRemoraidSprites45[] = {
	{sRemoraidGfx45, ARRAY_COUNT(sRemoraidGfx45)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_46.4bpp.lz");
static const ax_sprite sRemoraidSprites46[] = {
	{sRemoraidGfx46, ARRAY_COUNT(sRemoraidGfx46)}, 
	{NULL, 0}
};
static const u8 sRemoraidGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/remoraid/sprite_47.4bpp.lz");
static const ax_sprite sRemoraidSprites47[] = {
	{sRemoraidGfx47, ARRAY_COUNT(sRemoraidGfx47)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesRemoraid[] = {
	sRemoraidPose1,
	sRemoraidPose2,
	sRemoraidPose3,
	sRemoraidPose4,
	sRemoraidPose5,
	sRemoraidPose6,
	sRemoraidPose7,
	sRemoraidPose8,
	sRemoraidPose9,
	sRemoraidPose10,
	sRemoraidPose11,
	sRemoraidPose12,
	sRemoraidPose13,
	sRemoraidPose14,
	sRemoraidPose15,
	sRemoraidPose16,
	sRemoraidPose17,
	sRemoraidPose18,
	sRemoraidPose19,
	sRemoraidPose20,
	sRemoraidPose21,
	sRemoraidPose22,
	sRemoraidPose23,
	sRemoraidPose24,
	sRemoraidPose1,
	sRemoraidPose2,
	sRemoraidPose3,
	sRemoraidPose28,
	sRemoraidPose4,
	sRemoraidPose5,
	sRemoraidPose6,
	sRemoraidPose32,
	sRemoraidPose7,
	sRemoraidPose8,
	sRemoraidPose9,
	sRemoraidPose36,
	sRemoraidPose10,
	sRemoraidPose11,
	sRemoraidPose12,
	sRemoraidPose40,
	sRemoraidPose13,
	sRemoraidPose14,
	sRemoraidPose15,
	sRemoraidPose44,
	sRemoraidPose16,
	sRemoraidPose17,
	sRemoraidPose18,
	sRemoraidPose48,
	sRemoraidPose19,
	sRemoraidPose20,
	sRemoraidPose21,
	sRemoraidPose52,
	sRemoraidPose22,
	sRemoraidPose23,
	sRemoraidPose24,
	sRemoraidPose56,
	sRemoraidPose1,
	sRemoraidPose2,
	sRemoraidPose3,
	sRemoraidPose28,
	sRemoraidPose4,
	sRemoraidPose5,
	sRemoraidPose6,
	sRemoraidPose32,
	sRemoraidPose7,
	sRemoraidPose8,
	sRemoraidPose9,
	sRemoraidPose36,
	sRemoraidPose10,
	sRemoraidPose11,
	sRemoraidPose12,
	sRemoraidPose40,
	sRemoraidPose13,
	sRemoraidPose14,
	sRemoraidPose15,
	sRemoraidPose44,
	sRemoraidPose16,
	sRemoraidPose17,
	sRemoraidPose18,
	sRemoraidPose48,
	sRemoraidPose19,
	sRemoraidPose20,
	sRemoraidPose21,
	sRemoraidPose52,
	sRemoraidPose22,
	sRemoraidPose23,
	sRemoraidPose24,
	sRemoraidPose56,
	sRemoraidPose1,
	sRemoraidPose28,
	sRemoraidPose91,
	sRemoraidPose4,
	sRemoraidPose32,
	sRemoraidPose94,
	sRemoraidPose7,
	sRemoraidPose36,
	sRemoraidPose97,
	sRemoraidPose10,
	sRemoraidPose40,
	sRemoraidPose100,
	sRemoraidPose13,
	sRemoraidPose44,
	sRemoraidPose103,
	sRemoraidPose16,
	sRemoraidPose48,
	sRemoraidPose106,
	sRemoraidPose19,
	sRemoraidPose52,
	sRemoraidPose109,
	sRemoraidPose22,
	sRemoraidPose56,
	sRemoraidPose112,
	sRemoraidPose1,
	sRemoraidPose28,
	sRemoraidPose115,
	sRemoraidPose116,
	sRemoraidPose117,
	sRemoraidPose4,
	sRemoraidPose119,
	sRemoraidPose120,
	sRemoraidPose121,
	sRemoraidPose122,
	sRemoraidPose7,
	sRemoraidPose36,
	sRemoraidPose125,
	sRemoraidPose126,
	sRemoraidPose127,
	sRemoraidPose10,
	sRemoraidPose129,
	sRemoraidPose130,
	sRemoraidPose131,
	sRemoraidPose132,
	sRemoraidPose13,
	sRemoraidPose134,
	sRemoraidPose135,
	sRemoraidPose136,
	sRemoraidPose137,
	sRemoraidPose16,
	sRemoraidPose139,
	sRemoraidPose140,
	sRemoraidPose141,
	sRemoraidPose142,
	sRemoraidPose19,
	sRemoraidPose52,
	sRemoraidPose145,
	sRemoraidPose146,
	sRemoraidPose147,
	sRemoraidPose22,
	sRemoraidPose149,
	sRemoraidPose150,
	sRemoraidPose151,
	sRemoraidPose152,
	sRemoraidPose153,
	sRemoraidPose154,
	sRemoraidPose155,
	sRemoraidPose156,
	sRemoraidPose157,
	sRemoraidPose158,
	sRemoraidPose159,
	sRemoraidPose160,
	sRemoraidPose161,
	sRemoraidPose162,
	sRemoraidPose1,
	sRemoraidPose2,
	sRemoraidPose3,
	sRemoraidPose4,
	sRemoraidPose5,
	sRemoraidPose6,
	sRemoraidPose7,
	sRemoraidPose170,
	sRemoraidPose171,
	sRemoraidPose10,
	sRemoraidPose173,
	sRemoraidPose174,
	sRemoraidPose13,
	sRemoraidPose14,
	sRemoraidPose15,
	sRemoraidPose16,
	sRemoraidPose179,
	sRemoraidPose180,
	sRemoraidPose19,
	sRemoraidPose182,
	sRemoraidPose183,
	sRemoraidPose22,
	sRemoraidPose23,
	sRemoraidPose24,
	sRemoraidPose1,
	sRemoraidPose22,
	sRemoraidPose19,
	sRemoraidPose16,
	sRemoraidPose13,
	sRemoraidPose10,
	sRemoraidPose7,
	sRemoraidPose4,
	sRemoraidPose91,
	sRemoraidPose94,
	sRemoraidPose97,
	sRemoraidPose100,
	sRemoraidPose103,
	sRemoraidPose106,
	sRemoraidPose109,
	sRemoraidPose112,
	sRemoraidPose1,
	sRemoraidPose28,
	sRemoraidPose91,
	sRemoraidPose206,
	sRemoraidPose207,
	sRemoraidPose208,
	sRemoraidPose7,
	sRemoraidPose210,
	sRemoraidPose97,
	sRemoraidPose212,
	sRemoraidPose213,
	sRemoraidPose214,
	sRemoraidPose13,
	sRemoraidPose44,
	sRemoraidPose103,
	sRemoraidPose16,
	sRemoraidPose219,
	sRemoraidPose106,
	sRemoraidPose19,
	sRemoraidPose222,
	sRemoraidPose109,
	sRemoraidPose22,
	sRemoraidPose225,
	sRemoraidPose112,
	sRemoraidPose115,
	sRemoraidPose228,
	sRemoraidPose229,
	sRemoraidPose230,
	sRemoraidPose135,
	sRemoraidPose130,
	sRemoraidPose233,
	sRemoraidPose120,
	sRemoraidPose235,
	sRemoraidPose236,
	sRemoraidPose237,
	sRemoraidPose238,
	sRemoraidPose137,
	sRemoraidPose240,
	sRemoraidPose241,
	sRemoraidPose122,
	sRemoraidPose116,
	sRemoraidPose244,
	sRemoraidPose245,
	sRemoraidPose246,
	sRemoraidPose136,
	sRemoraidPose248,
	sRemoraidPose249,
	sRemoraidPose250,
	sRemoraidPose1,
	sRemoraidPose22,
	sRemoraidPose19,
	sRemoraidPose16,
	sRemoraidPose13,
	sRemoraidPose10,
	sRemoraidPose7,
	sRemoraidPose4,
};

static const struct PositionSets sAxPositionsRemoraid[] = {
	[0] = { .set = { {-1, -4}, {-6, -9}, {4, -9}, {-1, -9} } },
	[1] = { .set = { {-2, -4}, {-6, -10}, {4, -8}, {-1, -8} } },
	[2] = { .set = { {0, -4}, {-6, -8}, {4, -10}, {0, -9} } },
	[3] = { .set = { {4, -6}, {1, -8}, {-2, -6}, {-1, -8} } },
	[4] = { .set = { {5, -6}, {3, -9}, {0, -6}, {0, -8} } },
	[5] = { .set = { {3, -6}, {1, -9}, {-3, -5}, {-1, -8} } },
	[6] = { .set = { {6, -8}, {0, -11}, {-1, -6}, {-1, -9} } },
	[7] = { .set = { {6, -9}, {1, -11}, {0, -7}, {-1, -10} } },
	[8] = { .set = { {5, -6}, {-1, -10}, {-2, -5}, {-2, -9} } },
	[9] = { .set = { {5, -10}, {-3, -11}, {2, -8}, {-2, -10} } },
	[10] = { .set = { {5, -11}, {-1, -12}, {4, -8}, {-2, -10} } },
	[11] = { .set = { {5, -9}, {-3, -10}, {1, -6}, {-1, -10} } },
	[12] = { .set = { {-1, -15}, {4, -9}, {-6, -9}, {-1, -10} } },
	[13] = { .set = { {1, -14}, {4, -8}, {-6, -10}, {-1, -10} } },
	[14] = { .set = { {-3, -14}, {4, -10}, {-6, -8}, {-1, -10} } },
	[15] = { .set = { {-7, -10}, {1, -11}, {-4, -8}, {0, -10} } },
	[16] = { .set = { {-7, -11}, {-1, -12}, {-6, -8}, {0, -10} } },
	[17] = { .set = { {-7, -9}, {1, -10}, {-3, -6}, {-1, -10} } },
	[18] = { .set = { {-8, -8}, {-2, -11}, {-1, -6}, {-1, -9} } },
	[19] = { .set = { {-8, -9}, {-3, -11}, {-2, -7}, {-1, -10} } },
	[20] = { .set = { {-7, -6}, {-1, -10}, {0, -5}, {0, -9} } },
	[21] = { .set = { {-6, -6}, {-3, -8}, {0, -6}, {-1, -8} } },
	[22] = { .set = { {-7, -6}, {-5, -9}, {-2, -6}, {-2, -8} } },
	[23] = { .set = { {-5, -6}, {-3, -9}, {1, -5}, {-1, -8} } },
	[24] = { .set = { {-1, -4}, {-6, -9}, {4, -9}, {-1, -9} } },
	[25] = { .set = { {-2, -4}, {-6, -10}, {4, -8}, {-1, -8} } },
	[26] = { .set = { {0, -4}, {-6, -8}, {4, -10}, {0, -9} } },
	[27] = { .set = { {-1, -10}, {-6, -11}, {4, -11}, {-1, -9} } },
	[28] = { .set = { {4, -6}, {1, -8}, {-2, -6}, {-1, -8} } },
	[29] = { .set = { {5, -6}, {3, -9}, {0, -6}, {0, -8} } },
	[30] = { .set = { {3, -6}, {1, -9}, {-3, -5}, {-1, -8} } },
	[31] = { .set = { {2, -11}, {-2, -11}, {-2, -8}, {-3, -10} } },
	[32] = { .set = { {6, -8}, {0, -11}, {-1, -6}, {-1, -9} } },
	[33] = { .set = { {6, -9}, {1, -11}, {0, -7}, {-1, -10} } },
	[34] = { .set = { {5, -6}, {-1, -10}, {-2, -5}, {-2, -9} } },
	[35] = { .set = { {5, -12}, {0, -11}, {1, -8}, {-1, -10} } },
	[36] = { .set = { {5, -10}, {-3, -11}, {2, -8}, {-2, -10} } },
	[37] = { .set = { {5, -11}, {-1, -12}, {4, -8}, {-2, -10} } },
	[38] = { .set = { {5, -9}, {-3, -10}, {1, -6}, {-1, -10} } },
	[39] = { .set = { {1, -10}, {-3, -10}, {-2, -6}, {-4, -9} } },
	[40] = { .set = { {-1, -15}, {4, -9}, {-6, -9}, {-1, -10} } },
	[41] = { .set = { {1, -14}, {4, -8}, {-6, -10}, {-1, -10} } },
	[42] = { .set = { {-3, -14}, {4, -10}, {-6, -8}, {-1, -10} } },
	[43] = { .set = { {-1, -11}, {4, -7}, {-6, -7}, {-1, -9} } },
	[44] = { .set = { {-7, -10}, {1, -11}, {-4, -8}, {0, -10} } },
	[45] = { .set = { {-7, -11}, {-1, -12}, {-6, -8}, {0, -10} } },
	[46] = { .set = { {-7, -9}, {1, -10}, {-3, -6}, {-1, -10} } },
	[47] = { .set = { {-4, -10}, {0, -10}, {-1, -6}, {1, -9} } },
	[48] = { .set = { {-8, -8}, {-2, -11}, {-1, -6}, {-1, -9} } },
	[49] = { .set = { {-8, -9}, {-3, -11}, {-2, -7}, {-1, -10} } },
	[50] = { .set = { {-7, -6}, {-1, -10}, {0, -5}, {0, -9} } },
	[51] = { .set = { {-7, -10}, {-2, -9}, {-3, -6}, {-1, -8} } },
	[52] = { .set = { {-6, -6}, {-3, -8}, {0, -6}, {-1, -8} } },
	[53] = { .set = { {-7, -6}, {-5, -9}, {-2, -6}, {-2, -8} } },
	[54] = { .set = { {-5, -6}, {-3, -9}, {1, -5}, {-1, -8} } },
	[55] = { .set = { {-3, -11}, {1, -11}, {1, -8}, {2, -10} } },
	[56] = { .set = { {-1, -4}, {-6, -9}, {4, -9}, {-1, -9} } },
	[57] = { .set = { {-2, -4}, {-6, -10}, {4, -8}, {-1, -8} } },
	[58] = { .set = { {0, -4}, {-6, -8}, {4, -10}, {0, -9} } },
	[59] = { .set = { {-1, -10}, {-6, -11}, {4, -11}, {-1, -9} } },
	[60] = { .set = { {4, -6}, {1, -8}, {-2, -6}, {-1, -8} } },
	[61] = { .set = { {5, -6}, {3, -9}, {0, -6}, {0, -8} } },
	[62] = { .set = { {3, -6}, {1, -9}, {-3, -5}, {-1, -8} } },
	[63] = { .set = { {2, -11}, {-2, -11}, {-2, -8}, {-3, -10} } },
	[64] = { .set = { {6, -8}, {0, -11}, {-1, -6}, {-1, -9} } },
	[65] = { .set = { {6, -9}, {1, -11}, {0, -7}, {-1, -10} } },
	[66] = { .set = { {5, -6}, {-1, -10}, {-2, -5}, {-2, -9} } },
	[67] = { .set = { {5, -12}, {0, -11}, {1, -8}, {-1, -10} } },
	[68] = { .set = { {5, -10}, {-3, -11}, {2, -8}, {-2, -10} } },
	[69] = { .set = { {5, -11}, {-1, -12}, {4, -8}, {-2, -10} } },
	[70] = { .set = { {5, -9}, {-3, -10}, {1, -6}, {-1, -10} } },
	[71] = { .set = { {1, -10}, {-3, -10}, {-2, -6}, {-4, -9} } },
	[72] = { .set = { {-1, -15}, {4, -9}, {-6, -9}, {-1, -10} } },
	[73] = { .set = { {1, -14}, {4, -8}, {-6, -10}, {-1, -10} } },
	[74] = { .set = { {-3, -14}, {4, -10}, {-6, -8}, {-1, -10} } },
	[75] = { .set = { {-1, -11}, {4, -7}, {-6, -7}, {-1, -9} } },
	[76] = { .set = { {-7, -10}, {1, -11}, {-4, -8}, {0, -10} } },
	[77] = { .set = { {-7, -11}, {-1, -12}, {-6, -8}, {0, -10} } },
	[78] = { .set = { {-7, -9}, {1, -10}, {-3, -6}, {-1, -10} } },
	[79] = { .set = { {-4, -10}, {0, -10}, {-1, -6}, {1, -9} } },
	[80] = { .set = { {-8, -8}, {-2, -11}, {-1, -6}, {-1, -9} } },
	[81] = { .set = { {-8, -9}, {-3, -11}, {-2, -7}, {-1, -10} } },
	[82] = { .set = { {-7, -6}, {-1, -10}, {0, -5}, {0, -9} } },
	[83] = { .set = { {-7, -10}, {-2, -9}, {-3, -6}, {-1, -8} } },
	[84] = { .set = { {-6, -6}, {-3, -8}, {0, -6}, {-1, -8} } },
	[85] = { .set = { {-7, -6}, {-5, -9}, {-2, -6}, {-2, -8} } },
	[86] = { .set = { {-5, -6}, {-3, -9}, {1, -5}, {-1, -8} } },
	[87] = { .set = { {-3, -11}, {1, -11}, {1, -8}, {2, -10} } },
	[88] = { .set = { {-1, -4}, {-6, -9}, {4, -9}, {-1, -9} } },
	[89] = { .set = { {-1, -10}, {-6, -11}, {4, -11}, {-1, -9} } },
	[90] = { .set = { {-1, -4}, {-6, -10}, {4, -10}, {-1, -9} } },
	[91] = { .set = { {4, -6}, {1, -8}, {-2, -6}, {-1, -8} } },
	[92] = { .set = { {2, -11}, {-2, -11}, {-2, -8}, {-3, -10} } },
	[93] = { .set = { {4, -6}, {2, -8}, {-2, -6}, {-1, -8} } },
	[94] = { .set = { {6, -8}, {0, -11}, {-1, -6}, {-1, -9} } },
	[95] = { .set = { {5, -12}, {0, -11}, {1, -8}, {-1, -10} } },
	[96] = { .set = { {6, -9}, {0, -10}, {0, -6}, {-1, -9} } },
	[97] = { .set = { {5, -10}, {-3, -11}, {2, -8}, {-2, -10} } },
	[98] = { .set = { {1, -10}, {-3, -10}, {-2, -6}, {-4, -9} } },
	[99] = { .set = { {5, -11}, {-1, -10}, {3, -8}, {-2, -10} } },
	[100] = { .set = { {-1, -15}, {4, -9}, {-6, -9}, {-1, -10} } },
	[101] = { .set = { {-1, -11}, {4, -7}, {-6, -7}, {-1, -9} } },
	[102] = { .set = { {-1, -12}, {4, -9}, {-6, -9}, {-1, -10} } },
	[103] = { .set = { {-7, -10}, {1, -11}, {-4, -8}, {0, -10} } },
	[104] = { .set = { {-4, -10}, {0, -10}, {-1, -6}, {1, -9} } },
	[105] = { .set = { {-7, -11}, {-1, -10}, {-5, -8}, {0, -10} } },
	[106] = { .set = { {-8, -8}, {-2, -11}, {-1, -6}, {-1, -9} } },
	[107] = { .set = { {-7, -10}, {-2, -9}, {-3, -6}, {-1, -8} } },
	[108] = { .set = { {-8, -9}, {-2, -10}, {-2, -6}, {-1, -9} } },
	[109] = { .set = { {-6, -6}, {-3, -8}, {0, -6}, {-1, -8} } },
	[110] = { .set = { {-3, -11}, {1, -11}, {1, -8}, {2, -10} } },
	[111] = { .set = { {-6, -6}, {-4, -8}, {0, -6}, {-1, -8} } },
	[112] = { .set = { {-1, -4}, {-6, -9}, {4, -9}, {-1, -9} } },
	[113] = { .set = { {-1, -10}, {-6, -11}, {4, -11}, {-1, -9} } },
	[114] = { .set = { {-1, -18}, {-6, -10}, {4, -10}, {-1, -12} } },
	[115] = { .set = { {3, -16}, {-6, -11}, {6, -9}, {0, -11} } },
	[116] = { .set = { {-1, -15}, {-5, -9}, {7, -11}, {1, -11} } },
	[117] = { .set = { {4, -6}, {1, -8}, {-2, -6}, {-1, -8} } },
	[118] = { .set = { {3, -11}, {-1, -11}, {-1, -8}, {-2, -10} } },
	[119] = { .set = { {-1, -18}, {5, -13}, {-6, -11}, {-1, -12} } },
	[120] = { .set = { {-4, -18}, {3, -13}, {-7, -11}, {-2, -12} } },
	[121] = { .set = { {0, -18}, {5, -12}, {-6, -12}, {-1, -12} } },
	[122] = { .set = { {6, -8}, {0, -11}, {-1, -6}, {-1, -9} } },
	[123] = { .set = { {5, -12}, {0, -11}, {1, -8}, {-1, -10} } },
	[124] = { .set = { {1, -18}, {2, -13}, {3, -11}, {-1, -12} } },
	[125] = { .set = { {1, -17}, {-1, -12}, {2, -10}, {-2, -12} } },
	[126] = { .set = { {-1, -18}, {-1, -12}, {1, -11}, {-2, -12} } },
	[127] = { .set = { {5, -10}, {-3, -11}, {2, -8}, {-2, -10} } },
	[128] = { .set = { {4, -10}, {0, -10}, {1, -6}, {-1, -9} } },
	[129] = { .set = { {0, -18}, {-2, -12}, {4, -11}, {-1, -12} } },
	[130] = { .set = { {0, -17}, {-3, -13}, {2, -11}, {-2, -11} } },
	[131] = { .set = { {0, -17}, {-1, -12}, {3, -11}, {0, -12} } },
	[132] = { .set = { {-1, -15}, {4, -9}, {-6, -9}, {-1, -10} } },
	[133] = { .set = { {-1, -13}, {4, -9}, {-6, -9}, {-1, -11} } },
	[134] = { .set = { {-1, -15}, {4, -11}, {-6, -11}, {-1, -11} } },
	[135] = { .set = { {-2, -15}, {5, -12}, {-6, -10}, {0, -11} } },
	[136] = { .set = { {1, -15}, {5, -10}, {-6, -12}, {0, -11} } },
	[137] = { .set = { {-7, -10}, {1, -11}, {-4, -8}, {0, -10} } },
	[138] = { .set = { {-6, -10}, {-2, -10}, {-3, -6}, {-1, -9} } },
	[139] = { .set = { {0, -18}, {2, -12}, {-4, -11}, {1, -12} } },
	[140] = { .set = { {0, -17}, {3, -13}, {-2, -11}, {2, -11} } },
	[141] = { .set = { {0, -17}, {1, -12}, {-3, -11}, {0, -12} } },
	[142] = { .set = { {-8, -8}, {-2, -11}, {-1, -6}, {-1, -9} } },
	[143] = { .set = { {-7, -10}, {-2, -9}, {-3, -6}, {-1, -8} } },
	[144] = { .set = { {-3, -18}, {-4, -13}, {-5, -11}, {-1, -12} } },
	[145] = { .set = { {-4, -17}, {-2, -12}, {-5, -10}, {-1, -12} } },
	[146] = { .set = { {-2, -18}, {-2, -12}, {-4, -11}, {-1, -12} } },
	[147] = { .set = { {-6, -6}, {-3, -8}, {0, -6}, {-1, -8} } },
	[148] = { .set = { {-4, -11}, {0, -11}, {0, -8}, {1, -10} } },
	[149] = { .set = { {-1, -18}, {-7, -13}, {4, -11}, {-1, -12} } },
	[150] = { .set = { {2, -18}, {-5, -13}, {5, -11}, {0, -12} } },
	[151] = { .set = { {-2, -18}, {-7, -12}, {4, -12}, {-1, -12} } },
	[152] = { .set = { {-9, -7}, {-4, -7}, {-2, -6}, {-2, -8} } },
	[153] = { .set = { {-9, -8}, {-5, -6}, {-2, -8}, {-2, -7} } },
	[154] = { .set = { {0, -10}, {-5, -15}, {5, -15}, {0, -14} } },
	[155] = { .set = { {6, -14}, {0, -14}, {-1, -11}, {-1, -14} } },
	[156] = { .set = { {5, -16}, {0, -13}, {0, -11}, {-1, -13} } },
	[157] = { .set = { {4, -15}, {-3, -13}, {2, -11}, {-2, -12} } },
	[158] = { .set = { {0, -15}, {5, -12}, {-5, -12}, {0, -12} } },
	[159] = { .set = { {-5, -15}, {2, -13}, {-3, -11}, {1, -12} } },
	[160] = { .set = { {-6, -16}, {-1, -13}, {-1, -11}, {0, -13} } },
	[161] = { .set = { {-7, -14}, {-1, -14}, {0, -11}, {0, -14} } },
	[162] = { .set = { {-1, -4}, {-6, -9}, {4, -9}, {-1, -9} } },
	[163] = { .set = { {-2, -4}, {-6, -10}, {4, -8}, {-1, -8} } },
	[164] = { .set = { {0, -4}, {-6, -8}, {4, -10}, {0, -9} } },
	[165] = { .set = { {4, -6}, {1, -8}, {-2, -6}, {-1, -8} } },
	[166] = { .set = { {5, -6}, {3, -9}, {0, -6}, {0, -8} } },
	[167] = { .set = { {3, -6}, {1, -9}, {-3, -5}, {-1, -8} } },
	[168] = { .set = { {6, -8}, {0, -11}, {-1, -6}, {-1, -9} } },
	[169] = { .set = { {6, -8}, {1, -10}, {0, -6}, {-1, -9} } },
	[170] = { .set = { {5, -7}, {-1, -11}, {-2, -6}, {-2, -10} } },
	[171] = { .set = { {5, -10}, {-3, -11}, {2, -8}, {-2, -10} } },
	[172] = { .set = { {5, -10}, {-1, -11}, {4, -7}, {-2, -9} } },
	[173] = { .set = { {5, -10}, {-3, -11}, {1, -7}, {-1, -11} } },
	[174] = { .set = { {-1, -15}, {4, -9}, {-6, -9}, {-1, -10} } },
	[175] = { .set = { {1, -14}, {4, -8}, {-6, -10}, {-1, -10} } },
	[176] = { .set = { {-3, -14}, {4, -10}, {-6, -8}, {-1, -10} } },
	[177] = { .set = { {-7, -10}, {1, -11}, {-4, -8}, {0, -10} } },
	[178] = { .set = { {-7, -10}, {-1, -11}, {-6, -7}, {0, -9} } },
	[179] = { .set = { {-7, -10}, {1, -11}, {-3, -7}, {-1, -11} } },
	[180] = { .set = { {-8, -8}, {-2, -11}, {-1, -6}, {-1, -9} } },
	[181] = { .set = { {-8, -8}, {-3, -10}, {-2, -6}, {-1, -9} } },
	[182] = { .set = { {-7, -7}, {-1, -11}, {0, -6}, {0, -10} } },
	[183] = { .set = { {-6, -6}, {-3, -8}, {0, -6}, {-1, -8} } },
	[184] = { .set = { {-7, -6}, {-5, -9}, {-2, -6}, {-2, -8} } },
	[185] = { .set = { {-5, -6}, {-3, -9}, {1, -5}, {-1, -8} } },
	[186] = { .set = { {-1, -4}, {-6, -9}, {4, -9}, {-1, -9} } },
	[187] = { .set = { {-6, -6}, {-3, -8}, {0, -6}, {-1, -8} } },
	[188] = { .set = { {-8, -8}, {-2, -11}, {-1, -6}, {-1, -9} } },
	[189] = { .set = { {-7, -10}, {1, -11}, {-4, -8}, {0, -10} } },
	[190] = { .set = { {-1, -15}, {4, -9}, {-6, -9}, {-1, -10} } },
	[191] = { .set = { {5, -10}, {-3, -11}, {2, -8}, {-2, -10} } },
	[192] = { .set = { {6, -8}, {0, -11}, {-1, -6}, {-1, -9} } },
	[193] = { .set = { {4, -6}, {1, -8}, {-2, -6}, {-1, -8} } },
	[194] = { .set = { {-1, -4}, {-6, -10}, {4, -10}, {-1, -9} } },
	[195] = { .set = { {4, -6}, {2, -8}, {-2, -6}, {-1, -8} } },
	[196] = { .set = { {6, -9}, {0, -10}, {0, -6}, {-1, -9} } },
	[197] = { .set = { {5, -11}, {-1, -10}, {3, -8}, {-2, -10} } },
	[198] = { .set = { {-1, -12}, {4, -9}, {-6, -9}, {-1, -10} } },
	[199] = { .set = { {-7, -11}, {-1, -10}, {-5, -8}, {0, -10} } },
	[200] = { .set = { {-8, -9}, {-2, -10}, {-2, -6}, {-1, -9} } },
	[201] = { .set = { {-6, -6}, {-4, -8}, {0, -6}, {-1, -8} } },
	[202] = { .set = { {-1, -4}, {-6, -9}, {4, -9}, {-1, -9} } },
	[203] = { .set = { {-1, -10}, {-6, -11}, {4, -11}, {-1, -9} } },
	[204] = { .set = { {-1, -4}, {-6, -10}, {4, -10}, {-1, -9} } },
	[205] = { .set = { {5, -6}, {2, -8}, {-1, -6}, {0, -8} } },
	[206] = { .set = { {3, -14}, {-1, -14}, {-1, -11}, {-2, -13} } },
	[207] = { .set = { {5, -6}, {3, -8}, {-1, -6}, {0, -8} } },
	[208] = { .set = { {6, -8}, {0, -11}, {-1, -6}, {-1, -9} } },
	[209] = { .set = { {5, -15}, {0, -14}, {1, -11}, {-1, -13} } },
	[210] = { .set = { {6, -9}, {0, -10}, {0, -6}, {-1, -9} } },
	[211] = { .set = { {6, -10}, {-2, -11}, {3, -8}, {-1, -10} } },
	[212] = { .set = { {4, -11}, {0, -11}, {1, -7}, {-1, -10} } },
	[213] = { .set = { {6, -11}, {0, -10}, {4, -8}, {-1, -10} } },
	[214] = { .set = { {-1, -15}, {4, -9}, {-6, -9}, {-1, -10} } },
	[215] = { .set = { {-1, -11}, {4, -7}, {-6, -7}, {-1, -9} } },
	[216] = { .set = { {-1, -12}, {4, -9}, {-6, -9}, {-1, -10} } },
	[217] = { .set = { {-7, -10}, {1, -11}, {-4, -8}, {0, -10} } },
	[218] = { .set = { {-5, -11}, {-1, -11}, {-2, -7}, {0, -10} } },
	[219] = { .set = { {-7, -11}, {-1, -10}, {-5, -8}, {0, -10} } },
	[220] = { .set = { {-8, -8}, {-2, -11}, {-1, -6}, {-1, -9} } },
	[221] = { .set = { {-6, -15}, {-1, -14}, {-2, -11}, {0, -13} } },
	[222] = { .set = { {-8, -9}, {-2, -10}, {-2, -6}, {-1, -9} } },
	[223] = { .set = { {-6, -6}, {-3, -8}, {0, -6}, {-1, -8} } },
	[224] = { .set = { {-4, -14}, {0, -14}, {0, -11}, {1, -13} } },
	[225] = { .set = { {-6, -6}, {-4, -8}, {0, -6}, {-1, -8} } },
	[226] = { .set = { {-1, -18}, {-6, -10}, {4, -10}, {-1, -12} } },
	[227] = { .set = { {0, -18}, {-6, -13}, {5, -11}, {0, -12} } },
	[228] = { .set = { {-3, -17}, {-4, -12}, {-5, -10}, {-1, -11} } },
	[229] = { .set = { {-1, -18}, {1, -12}, {-5, -11}, {0, -12} } },
	[230] = { .set = { {-1, -15}, {4, -11}, {-6, -11}, {-1, -11} } },
	[231] = { .set = { {0, -18}, {-2, -12}, {4, -11}, {-1, -12} } },
	[232] = { .set = { {2, -17}, {3, -12}, {4, -10}, {0, -11} } },
	[233] = { .set = { {-1, -18}, {5, -13}, {-6, -11}, {-1, -12} } },
	[234] = { .set = { {-2, -15}, {-6, -9}, {6, -11}, {0, -11} } },
	[235] = { .set = { {-1, -17}, {-6, -11}, {5, -11}, {0, -11} } },
	[236] = { .set = { {0, -17}, {0, -11}, {-2, -10}, {1, -11} } },
	[237] = { .set = { {-1, -18}, {0, -13}, {-4, -12}, {-1, -13} } },
	[238] = { .set = { {1, -15}, {5, -10}, {-6, -12}, {0, -11} } },
	[239] = { .set = { {0, -18}, {-1, -13}, {3, -12}, {0, -13} } },
	[240] = { .set = { {0, -18}, {0, -12}, {2, -11}, {-1, -12} } },
	[241] = { .set = { {0, -18}, {5, -12}, {-6, -12}, {-1, -12} } },
	[242] = { .set = { {3, -16}, {-6, -11}, {6, -9}, {0, -11} } },
	[243] = { .set = { {2, -16}, {-5, -11}, {5, -9}, {0, -10} } },
	[244] = { .set = { {-3, -16}, {-1, -11}, {-4, -9}, {0, -11} } },
	[245] = { .set = { {-2, -17}, {1, -13}, {-4, -11}, {0, -11} } },
	[246] = { .set = { {-2, -15}, {5, -12}, {-6, -10}, {0, -11} } },
	[247] = { .set = { {1, -17}, {-2, -13}, {3, -11}, {-1, -11} } },
	[248] = { .set = { {2, -16}, {0, -11}, {3, -9}, {-1, -11} } },
	[249] = { .set = { {-3, -18}, {4, -13}, {-6, -11}, {-1, -12} } },
	[250] = { .set = { {-1, -4}, {-6, -9}, {4, -9}, {-1, -9} } },
	[251] = { .set = { {-6, -6}, {-3, -8}, {0, -6}, {-1, -8} } },
	[252] = { .set = { {-8, -8}, {-2, -11}, {-1, -6}, {-1, -9} } },
	[253] = { .set = { {-7, -10}, {1, -11}, {-4, -8}, {0, -10} } },
	[254] = { .set = { {-1, -15}, {4, -9}, {-6, -9}, {-1, -10} } },
	[255] = { .set = { {5, -10}, {-3, -11}, {2, -8}, {-2, -10} } },
	[256] = { .set = { {6, -8}, {0, -11}, {-1, -6}, {-1, -9} } },
	[257] = { .set = { {4, -6}, {1, -8}, {-2, -6}, {-1, -8} } },
};

static const ax_anim *const sRemoraidAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02606),
	AX_ANIM_PTR(gAxSharedAnim_02682),
	AX_ANIM_PTR(gAxSharedAnim_02691),
	AX_ANIM_PTR(gAxSharedAnim_02701),
	AX_ANIM_PTR(gAxSharedAnim_02618),
	AX_ANIM_PTR(gAxSharedAnim_02641),
	AX_ANIM_PTR(gAxSharedAnim_02654),
	AX_ANIM_PTR(gAxSharedAnim_02663),
};

static const ax_anim *const sRemoraidAnimTable2[] = {
	AX_ANIM_PTR(sRemoraidAnims_2_1),
	AX_ANIM_PTR(sRemoraidAnims_2_2),
	AX_ANIM_PTR(sRemoraidAnims_2_3),
	AX_ANIM_PTR(sRemoraidAnims_2_4),
	AX_ANIM_PTR(sRemoraidAnims_2_5),
	AX_ANIM_PTR(sRemoraidAnims_2_6),
	AX_ANIM_PTR(sRemoraidAnims_2_7),
	AX_ANIM_PTR(sRemoraidAnims_2_8),
};

static const ax_anim *const sRemoraidAnimTable3[] = {
	AX_ANIM_PTR(sRemoraidAnims_3_1),
	AX_ANIM_PTR(sRemoraidAnims_3_2),
	AX_ANIM_PTR(sRemoraidAnims_3_3),
	AX_ANIM_PTR(sRemoraidAnims_3_4),
	AX_ANIM_PTR(sRemoraidAnims_3_5),
	AX_ANIM_PTR(sRemoraidAnims_3_6),
	AX_ANIM_PTR(sRemoraidAnims_3_7),
	AX_ANIM_PTR(sRemoraidAnims_3_8),
};

static const ax_anim *const sRemoraidAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_02226),
	AX_ANIM_PTR(gAxSharedAnim_02254),
	AX_ANIM_PTR(gAxSharedAnim_02283),
	AX_ANIM_PTR(gAxSharedAnim_02307),
	AX_ANIM_PTR(gAxSharedAnim_00160),
	AX_ANIM_PTR(gAxSharedAnim_00181),
	AX_ANIM_PTR(gAxSharedAnim_00207),
	AX_ANIM_PTR(gAxSharedAnim_00236),
};

static const ax_anim *const sRemoraidAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00001),
	AX_ANIM_PTR(gAxSharedAnim_00004),
	AX_ANIM_PTR(sRemoraidAnims_5_3),
	AX_ANIM_PTR(gAxSharedAnim_00012),
	AX_ANIM_PTR(sRemoraidAnims_5_5),
	AX_ANIM_PTR(gAxSharedAnim_00021),
	AX_ANIM_PTR(sRemoraidAnims_5_7),
	AX_ANIM_PTR(gAxSharedAnim_00029),
};

static const ax_anim *const sRemoraidAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02644),
	AX_ANIM_PTR(gAxSharedAnim_02644),
	AX_ANIM_PTR(gAxSharedAnim_02644),
	AX_ANIM_PTR(gAxSharedAnim_02644),
	AX_ANIM_PTR(gAxSharedAnim_02644),
	AX_ANIM_PTR(gAxSharedAnim_02644),
	AX_ANIM_PTR(gAxSharedAnim_02644),
	AX_ANIM_PTR(gAxSharedAnim_02644),
};

static const ax_anim *const sRemoraidAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00604),
	AX_ANIM_PTR(gAxSharedAnim_00615),
	AX_ANIM_PTR(gAxSharedAnim_00624),
	AX_ANIM_PTR(gAxSharedAnim_00635),
	AX_ANIM_PTR(gAxSharedAnim_00652),
	AX_ANIM_PTR(gAxSharedAnim_00663),
	AX_ANIM_PTR(gAxSharedAnim_00678),
	AX_ANIM_PTR(gAxSharedAnim_00689),
};

static const ax_anim *const sRemoraidAnimTable8[] = {
	AX_ANIM_PTR(sRemoraidAnims_8_1),
	AX_ANIM_PTR(sRemoraidAnims_8_2),
	AX_ANIM_PTR(sRemoraidAnims_8_3),
	AX_ANIM_PTR(sRemoraidAnims_8_4),
	AX_ANIM_PTR(sRemoraidAnims_8_5),
	AX_ANIM_PTR(sRemoraidAnims_8_6),
	AX_ANIM_PTR(sRemoraidAnims_8_7),
	AX_ANIM_PTR(sRemoraidAnims_8_8),
};

static const ax_anim *const sRemoraidAnimTable9[] = {
	AX_ANIM_PTR(sRemoraidAnims_9_1),
	AX_ANIM_PTR(sRemoraidAnims_9_2),
	AX_ANIM_PTR(sRemoraidAnims_9_3),
	AX_ANIM_PTR(sRemoraidAnims_9_4),
	AX_ANIM_PTR(sRemoraidAnims_9_5),
	AX_ANIM_PTR(sRemoraidAnims_9_6),
	AX_ANIM_PTR(sRemoraidAnims_9_7),
	AX_ANIM_PTR(sRemoraidAnims_9_8),
};

static const ax_anim *const sRemoraidAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01143),
	AX_ANIM_PTR(gAxSharedAnim_01156),
	AX_ANIM_PTR(gAxSharedAnim_01167),
	AX_ANIM_PTR(gAxSharedAnim_01178),
	AX_ANIM_PTR(gAxSharedAnim_01189),
	AX_ANIM_PTR(gAxSharedAnim_01200),
	AX_ANIM_PTR(gAxSharedAnim_01217),
	AX_ANIM_PTR(gAxSharedAnim_01228),
};

static const ax_anim *const sRemoraidAnimTable11[] = {
	AX_ANIM_PTR(sRemoraidAnims_11_1),
	AX_ANIM_PTR(sRemoraidAnims_11_2),
	AX_ANIM_PTR(sRemoraidAnims_11_3),
	AX_ANIM_PTR(sRemoraidAnims_11_4),
	AX_ANIM_PTR(sRemoraidAnims_11_5),
	AX_ANIM_PTR(gAxSharedAnim_01403),
	AX_ANIM_PTR(sRemoraidAnims_11_7),
	AX_ANIM_PTR(sRemoraidAnims_11_8),
};

static const ax_anim *const sRemoraidAnimTable12[] = {
	AX_ANIM_PTR(sRemoraidAnims_12_1),
	AX_ANIM_PTR(sRemoraidAnims_12_2),
	AX_ANIM_PTR(sRemoraidAnims_12_3),
	AX_ANIM_PTR(sRemoraidAnims_12_4),
	AX_ANIM_PTR(sRemoraidAnims_12_5),
	AX_ANIM_PTR(sRemoraidAnims_12_6),
	AX_ANIM_PTR(sRemoraidAnims_12_7),
	AX_ANIM_PTR(sRemoraidAnims_12_8),
};

static const ax_anim *const sRemoraidAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01637),
	AX_ANIM_PTR(gAxSharedAnim_01670),
	AX_ANIM_PTR(gAxSharedAnim_01667),
	AX_ANIM_PTR(gAxSharedAnim_01663),
	AX_ANIM_PTR(gAxSharedAnim_01658),
	AX_ANIM_PTR(gAxSharedAnim_01653),
	AX_ANIM_PTR(gAxSharedAnim_01649),
	AX_ANIM_PTR(gAxSharedAnim_01644),
};

static const ax_anim *const *const sAxAnimationsRemoraid[] = {
	sRemoraidAnimTable1,
	sRemoraidAnimTable2,
	sRemoraidAnimTable3,
	sRemoraidAnimTable4,
	sRemoraidAnimTable5,
	sRemoraidAnimTable6,
	sRemoraidAnimTable7,
	sRemoraidAnimTable8,
	sRemoraidAnimTable9,
	sRemoraidAnimTable10,
	sRemoraidAnimTable11,
	sRemoraidAnimTable12,
	sRemoraidAnimTable13,
};

static const ax_sprite *const sAxSpritesRemoraid[] = {
	sRemoraidSprites1,
	sRemoraidSprites2,
	sRemoraidSprites3,
	sRemoraidSprites4,
	sRemoraidSprites5,
	sRemoraidSprites6,
	sRemoraidSprites7,
	sRemoraidSprites8,
	sRemoraidSprites9,
	sRemoraidSprites10,
	sRemoraidSprites11,
	sRemoraidSprites12,
	sRemoraidSprites13,
	sRemoraidSprites14,
	sRemoraidSprites15,
	sRemoraidSprites16,
	sRemoraidSprites17,
	sRemoraidSprites18,
	sRemoraidSprites19,
	sRemoraidSprites20,
	sRemoraidSprites21,
	sRemoraidSprites22,
	sRemoraidSprites23,
	sRemoraidSprites24,
	sRemoraidSprites25,
	sRemoraidSprites26,
	sRemoraidSprites27,
	sRemoraidSprites28,
	sRemoraidSprites29,
	sRemoraidSprites30,
	sRemoraidSprites31,
	sRemoraidSprites32,
	sRemoraidSprites33,
	sRemoraidSprites34,
	sRemoraidSprites35,
	sRemoraidSprites36,
	sRemoraidSprites37,
	sRemoraidSprites38,
	sRemoraidSprites39,
	sRemoraidSprites40,
	sRemoraidSprites41,
	sRemoraidSprites42,
	sRemoraidSprites43,
	sRemoraidSprites44,
	sRemoraidSprites45,
	sRemoraidSprites46,
	sRemoraidSprites47,
};

static const axmain sAxMainRemoraid = {
	.poses = sAxPosesRemoraid,
	.animations = sAxAnimationsRemoraid,
	.animCount = ARRAY_COUNT(sAxAnimationsRemoraid),
	.spriteData = sAxSpritesRemoraid,
	.positions = sAxPositionsRemoraid,
};
