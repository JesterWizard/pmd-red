/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainMunchlax;
const SiroArchive gAxMunchlax = {"SIRO", &sAxMainMunchlax};

static const ax_pose sMunchlaxPose1[] = {
	AX_POSE(0, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose3[] = {
	AX_POSE(2, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose4[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose5[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose6[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose7[] = {
	AX_POSE(6, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose8[] = {
	AX_POSE(7, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose9[] = {
	AX_POSE(8, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose10[] = {
	AX_POSE(9, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose11[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose12[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose13[] = {
	AX_POSE(12, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose14[] = {
	AX_POSE(13, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose15[] = {
	AX_POSE(14, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose16[] = {
	AX_POSE(9, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose17[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose18[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose19[] = {
	AX_POSE(6, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose20[] = {
	AX_POSE(7, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose21[] = {
	AX_POSE(8, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose22[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose23[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose24[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose84[] = {
	AX_POSE(15, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose85[] = {
	AX_POSE(16, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose86[] = {
	AX_POSE(17, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose93[] = {
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose94[] = {
	AX_POSE(19, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose95[] = {
	AX_POSE(20, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose108[] = {
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose109[] = {
	AX_POSE(19, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose110[] = {
	AX_POSE(20, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose114[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose115[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose116[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose117[] = {
	AX_POSE(24, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose118[] = {
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose119[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose120[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose121[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose122[] = {
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose123[] = {
	AX_POSE(24, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose148[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose149[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose150[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose151[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose152[] = {
	AX_POSE(12, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose153[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose154[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose155[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose170[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose172[] = {
	AX_POSE(8, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose176[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose178[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose204[] = {
	AX_POSE(28, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose205[] = {
	AX_POSE(29, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose206[] = {
	AX_POSE(30, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose209[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose210[] = {
	AX_POSE(32, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose211[] = {
	AX_POSE(33, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose212[] = {
	AX_POSE(34, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose213[] = {
	AX_POSE(35, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose214[] = {
	AX_POSE(33, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose215[] = {
	AX_POSE(34, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose216[] = {
	AX_POSE(35, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose226[] = {
	AX_POSE(6, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose227[] = {
	AX_POSE(7, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose228[] = {
	AX_POSE(8, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose229[] = {
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose230[] = {
	AX_POSE(19, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose231[] = {
	AX_POSE(20, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose232[] = {
	AX_POSE(36, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose233[] = {
	AX_POSE(35, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose235[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose236[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose237[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose238[] = {
	AX_POSE(9, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose239[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose240[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose256[] = {
	AX_POSE(36, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose257[] = {
	AX_POSE(35, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMunchlaxPose258[] = {
	AX_POSE(33, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const u8 sMunchlaxAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_3_1.lz");
static const u8 sMunchlaxAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_3_2.lz");
static const u8 sMunchlaxAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_3_3.lz");
static const u8 sMunchlaxAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_3_4.lz");
static const u8 sMunchlaxAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_3_5.lz");
static const u8 sMunchlaxAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_3_6.lz");
static const u8 sMunchlaxAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_3_7.lz");
static const u8 sMunchlaxAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_3_8.lz");
static const u8 sMunchlaxAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_5_1.lz");
static const u8 sMunchlaxAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_5_2.lz");
static const u8 sMunchlaxAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_5_6.lz");
static const u8 sMunchlaxAnims_6_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_6_1.lz");
static const u8 sMunchlaxAnims_7_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_7_1.lz");
static const u8 sMunchlaxAnims_7_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_7_2.lz");
static const u8 sMunchlaxAnims_7_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_7_3.lz");
static const u8 sMunchlaxAnims_7_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_7_4.lz");
static const u8 sMunchlaxAnims_7_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_7_5.lz");
static const u8 sMunchlaxAnims_7_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_7_6.lz");
static const u8 sMunchlaxAnims_7_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_7_7.lz");
static const ax_anim sMunchlaxAnims_7_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 8, .unkFlags = 0, .poseId = 122, .offset = {4, -4}, .shadow = {4, -4} },
	AX_ANIM_TERMINATOR
};
static const u8 sMunchlaxAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_8_1.lz");
static const u8 sMunchlaxAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_8_2.lz");
static const u8 sMunchlaxAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_8_3.lz");
static const u8 sMunchlaxAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_8_4.lz");
static const u8 sMunchlaxAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_8_5.lz");
static const u8 sMunchlaxAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_9_1.lz");
static const u8 sMunchlaxAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_9_2.lz");
static const u8 sMunchlaxAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_9_3.lz");
static const u8 sMunchlaxAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_9_4.lz");
static const u8 sMunchlaxAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_9_5.lz");
static const u8 sMunchlaxAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_9_6.lz");
static const u8 sMunchlaxAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_9_7.lz");
static const u8 sMunchlaxAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_9_8.lz");
static const u8 sMunchlaxAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_11_1.lz");
static const u8 sMunchlaxAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_11_2.lz");
static const u8 sMunchlaxAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_11_3.lz");
static const u8 sMunchlaxAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_11_4.lz");
static const u8 sMunchlaxAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_11_6.lz");
static const u8 sMunchlaxAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_11_8.lz");
static const u8 sMunchlaxAnims_14_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_14_1.lz");
static const u8 sMunchlaxAnims_15_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_15_1.lz");
static const u8 sMunchlaxAnims_16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_16_1.lz");
static const u8 sMunchlaxAnims_17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_17_1.lz");
static const u8 sMunchlaxAnims_17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_17_3.lz");
static const u8 sMunchlaxAnims_18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_18_1.lz");
static const u8 sMunchlaxAnims_18_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/munchlax/sMunchlaxAnims_18_6.lz");

static const u8 sMunchlaxGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_1.4bpp.lz");
static const ax_sprite sMunchlaxSprites1[] = {
	{sMunchlaxGfx1, ARRAY_COUNT(sMunchlaxGfx1)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_2.4bpp.lz");
static const ax_sprite sMunchlaxSprites2[] = {
	{sMunchlaxGfx2, ARRAY_COUNT(sMunchlaxGfx2)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_3.4bpp.lz");
static const ax_sprite sMunchlaxSprites3[] = {
	{sMunchlaxGfx3, ARRAY_COUNT(sMunchlaxGfx3)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_4.4bpp.lz");
static const ax_sprite sMunchlaxSprites4[] = {
	{sMunchlaxGfx4, ARRAY_COUNT(sMunchlaxGfx4)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_5.4bpp.lz");
static const ax_sprite sMunchlaxSprites5[] = {
	{sMunchlaxGfx5, ARRAY_COUNT(sMunchlaxGfx5)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_6.4bpp.lz");
static const ax_sprite sMunchlaxSprites6[] = {
	{sMunchlaxGfx6, ARRAY_COUNT(sMunchlaxGfx6)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_7.4bpp.lz");
static const ax_sprite sMunchlaxSprites7[] = {
	{sMunchlaxGfx7, ARRAY_COUNT(sMunchlaxGfx7)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_8.4bpp.lz");
static const ax_sprite sMunchlaxSprites8[] = {
	{sMunchlaxGfx8, ARRAY_COUNT(sMunchlaxGfx8)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_9.4bpp.lz");
static const ax_sprite sMunchlaxSprites9[] = {
	{sMunchlaxGfx9, ARRAY_COUNT(sMunchlaxGfx9)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_10.4bpp.lz");
static const ax_sprite sMunchlaxSprites10[] = {
	{sMunchlaxGfx10, ARRAY_COUNT(sMunchlaxGfx10)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_11.4bpp.lz");
static const ax_sprite sMunchlaxSprites11[] = {
	{sMunchlaxGfx11, ARRAY_COUNT(sMunchlaxGfx11)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_12.4bpp.lz");
static const ax_sprite sMunchlaxSprites12[] = {
	{sMunchlaxGfx12, ARRAY_COUNT(sMunchlaxGfx12)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_13.4bpp.lz");
static const ax_sprite sMunchlaxSprites13[] = {
	{sMunchlaxGfx13, ARRAY_COUNT(sMunchlaxGfx13)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_14.4bpp.lz");
static const ax_sprite sMunchlaxSprites14[] = {
	{sMunchlaxGfx14, ARRAY_COUNT(sMunchlaxGfx14)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_15.4bpp.lz");
static const ax_sprite sMunchlaxSprites15[] = {
	{sMunchlaxGfx15, ARRAY_COUNT(sMunchlaxGfx15)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_16.4bpp.lz");
static const u8 sMunchlaxGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_16_1.4bpp.lz");
static const u8 sMunchlaxGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_16_2.4bpp.lz");
static const ax_sprite sMunchlaxSprites16[] = {
	{NULL, 32}, 
	{sMunchlaxGfx16, ARRAY_COUNT(sMunchlaxGfx16)}, 
	{NULL, 64}, 
	{sMunchlaxGfx16_1, ARRAY_COUNT(sMunchlaxGfx16_1)}, 
	{NULL, 32}, 
	{sMunchlaxGfx16_2, ARRAY_COUNT(sMunchlaxGfx16_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_17.4bpp.lz");
static const ax_sprite sMunchlaxSprites17[] = {
	{sMunchlaxGfx17, ARRAY_COUNT(sMunchlaxGfx17)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_18.4bpp.lz");
static const u8 sMunchlaxGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_18_1.4bpp.lz");
static const ax_sprite sMunchlaxSprites18[] = {
	{NULL, 32}, 
	{sMunchlaxGfx18, ARRAY_COUNT(sMunchlaxGfx18)}, 
	{NULL, 32}, 
	{sMunchlaxGfx18_1, ARRAY_COUNT(sMunchlaxGfx18_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_19.4bpp.lz");
static const u8 sMunchlaxGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_19_1.4bpp.lz");
static const u8 sMunchlaxGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_19_2.4bpp.lz");
static const u8 sMunchlaxGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_19_3.4bpp.lz");
static const ax_sprite sMunchlaxSprites19[] = {
	{sMunchlaxGfx19, ARRAY_COUNT(sMunchlaxGfx19)}, 
	{NULL, 32}, 
	{sMunchlaxGfx19_1, ARRAY_COUNT(sMunchlaxGfx19_1)}, 
	{NULL, 32}, 
	{sMunchlaxGfx19_2, ARRAY_COUNT(sMunchlaxGfx19_2)}, 
	{NULL, 64}, 
	{sMunchlaxGfx19_3, ARRAY_COUNT(sMunchlaxGfx19_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_20.4bpp.lz");
static const ax_sprite sMunchlaxSprites20[] = {
	{sMunchlaxGfx20, ARRAY_COUNT(sMunchlaxGfx20)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_21.4bpp.lz");
static const ax_sprite sMunchlaxSprites21[] = {
	{sMunchlaxGfx21, ARRAY_COUNT(sMunchlaxGfx21)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_22.4bpp.lz");
static const ax_sprite sMunchlaxSprites22[] = {
	{sMunchlaxGfx22, ARRAY_COUNT(sMunchlaxGfx22)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_23.4bpp.lz");
static const ax_sprite sMunchlaxSprites23[] = {
	{sMunchlaxGfx23, ARRAY_COUNT(sMunchlaxGfx23)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_24.4bpp.lz");
static const ax_sprite sMunchlaxSprites24[] = {
	{sMunchlaxGfx24, ARRAY_COUNT(sMunchlaxGfx24)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_25.4bpp.lz");
static const ax_sprite sMunchlaxSprites25[] = {
	{sMunchlaxGfx25, ARRAY_COUNT(sMunchlaxGfx25)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_26.4bpp.lz");
static const ax_sprite sMunchlaxSprites26[] = {
	{sMunchlaxGfx26, ARRAY_COUNT(sMunchlaxGfx26)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_27.4bpp.lz");
static const ax_sprite sMunchlaxSprites27[] = {
	{sMunchlaxGfx27, ARRAY_COUNT(sMunchlaxGfx27)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_28.4bpp.lz");
static const ax_sprite sMunchlaxSprites28[] = {
	{sMunchlaxGfx28, ARRAY_COUNT(sMunchlaxGfx28)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_29.4bpp.lz");
static const ax_sprite sMunchlaxSprites29[] = {
	{sMunchlaxGfx29, ARRAY_COUNT(sMunchlaxGfx29)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_30.4bpp.lz");
static const ax_sprite sMunchlaxSprites30[] = {
	{sMunchlaxGfx30, ARRAY_COUNT(sMunchlaxGfx30)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_31.4bpp.lz");
static const ax_sprite sMunchlaxSprites31[] = {
	{sMunchlaxGfx31, ARRAY_COUNT(sMunchlaxGfx31)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_32.4bpp.lz");
static const ax_sprite sMunchlaxSprites32[] = {
	{sMunchlaxGfx32, ARRAY_COUNT(sMunchlaxGfx32)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_33.4bpp.lz");
static const ax_sprite sMunchlaxSprites33[] = {
	{sMunchlaxGfx33, ARRAY_COUNT(sMunchlaxGfx33)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_34.4bpp.lz");
static const ax_sprite sMunchlaxSprites34[] = {
	{sMunchlaxGfx34, ARRAY_COUNT(sMunchlaxGfx34)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_35.4bpp.lz");
static const ax_sprite sMunchlaxSprites35[] = {
	{sMunchlaxGfx35, ARRAY_COUNT(sMunchlaxGfx35)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_36.4bpp.lz");
static const ax_sprite sMunchlaxSprites36[] = {
	{sMunchlaxGfx36, ARRAY_COUNT(sMunchlaxGfx36)}, 
	{NULL, 0}
};
static const u8 sMunchlaxGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/munchlax/sprite_37.4bpp.lz");
static const ax_sprite sMunchlaxSprites37[] = {
	{sMunchlaxGfx37, ARRAY_COUNT(sMunchlaxGfx37)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesMunchlax[] = {
	sMunchlaxPose1,
	sMunchlaxPose2,
	sMunchlaxPose3,
	sMunchlaxPose4,
	sMunchlaxPose5,
	sMunchlaxPose6,
	sMunchlaxPose7,
	sMunchlaxPose8,
	sMunchlaxPose9,
	sMunchlaxPose10,
	sMunchlaxPose11,
	sMunchlaxPose12,
	sMunchlaxPose13,
	sMunchlaxPose14,
	sMunchlaxPose15,
	sMunchlaxPose16,
	sMunchlaxPose17,
	sMunchlaxPose18,
	sMunchlaxPose19,
	sMunchlaxPose20,
	sMunchlaxPose21,
	sMunchlaxPose22,
	sMunchlaxPose23,
	sMunchlaxPose24,
	sMunchlaxPose1,
	sMunchlaxPose2,
	sMunchlaxPose3,
	sMunchlaxPose4,
	sMunchlaxPose5,
	sMunchlaxPose6,
	sMunchlaxPose7,
	sMunchlaxPose8,
	sMunchlaxPose9,
	sMunchlaxPose10,
	sMunchlaxPose11,
	sMunchlaxPose12,
	sMunchlaxPose13,
	sMunchlaxPose14,
	sMunchlaxPose15,
	sMunchlaxPose16,
	sMunchlaxPose17,
	sMunchlaxPose18,
	sMunchlaxPose19,
	sMunchlaxPose20,
	sMunchlaxPose21,
	sMunchlaxPose22,
	sMunchlaxPose23,
	sMunchlaxPose24,
	sMunchlaxPose1,
	sMunchlaxPose2,
	sMunchlaxPose3,
	sMunchlaxPose4,
	sMunchlaxPose5,
	sMunchlaxPose6,
	sMunchlaxPose7,
	sMunchlaxPose8,
	sMunchlaxPose9,
	sMunchlaxPose10,
	sMunchlaxPose11,
	sMunchlaxPose12,
	sMunchlaxPose13,
	sMunchlaxPose14,
	sMunchlaxPose15,
	sMunchlaxPose16,
	sMunchlaxPose17,
	sMunchlaxPose18,
	sMunchlaxPose19,
	sMunchlaxPose20,
	sMunchlaxPose21,
	sMunchlaxPose22,
	sMunchlaxPose23,
	sMunchlaxPose24,
	sMunchlaxPose3,
	sMunchlaxPose24,
	sMunchlaxPose21,
	sMunchlaxPose18,
	sMunchlaxPose15,
	sMunchlaxPose12,
	sMunchlaxPose9,
	sMunchlaxPose6,
	sMunchlaxPose1,
	sMunchlaxPose2,
	sMunchlaxPose3,
	sMunchlaxPose84,
	sMunchlaxPose85,
	sMunchlaxPose86,
	sMunchlaxPose4,
	sMunchlaxPose5,
	sMunchlaxPose6,
	sMunchlaxPose7,
	sMunchlaxPose8,
	sMunchlaxPose9,
	sMunchlaxPose93,
	sMunchlaxPose94,
	sMunchlaxPose95,
	sMunchlaxPose10,
	sMunchlaxPose11,
	sMunchlaxPose12,
	sMunchlaxPose13,
	sMunchlaxPose14,
	sMunchlaxPose15,
	sMunchlaxPose16,
	sMunchlaxPose17,
	sMunchlaxPose18,
	sMunchlaxPose19,
	sMunchlaxPose20,
	sMunchlaxPose21,
	sMunchlaxPose108,
	sMunchlaxPose109,
	sMunchlaxPose110,
	sMunchlaxPose22,
	sMunchlaxPose23,
	sMunchlaxPose24,
	sMunchlaxPose114,
	sMunchlaxPose115,
	sMunchlaxPose116,
	sMunchlaxPose117,
	sMunchlaxPose118,
	sMunchlaxPose119,
	sMunchlaxPose120,
	sMunchlaxPose121,
	sMunchlaxPose122,
	sMunchlaxPose123,
	sMunchlaxPose1,
	sMunchlaxPose2,
	sMunchlaxPose3,
	sMunchlaxPose4,
	sMunchlaxPose5,
	sMunchlaxPose6,
	sMunchlaxPose7,
	sMunchlaxPose8,
	sMunchlaxPose9,
	sMunchlaxPose10,
	sMunchlaxPose11,
	sMunchlaxPose12,
	sMunchlaxPose13,
	sMunchlaxPose14,
	sMunchlaxPose15,
	sMunchlaxPose16,
	sMunchlaxPose17,
	sMunchlaxPose18,
	sMunchlaxPose19,
	sMunchlaxPose20,
	sMunchlaxPose21,
	sMunchlaxPose22,
	sMunchlaxPose23,
	sMunchlaxPose24,
	sMunchlaxPose148,
	sMunchlaxPose149,
	sMunchlaxPose150,
	sMunchlaxPose151,
	sMunchlaxPose152,
	sMunchlaxPose153,
	sMunchlaxPose154,
	sMunchlaxPose155,
	sMunchlaxPose3,
	sMunchlaxPose5,
	sMunchlaxPose8,
	sMunchlaxPose11,
	sMunchlaxPose14,
	sMunchlaxPose17,
	sMunchlaxPose20,
	sMunchlaxPose23,
	sMunchlaxPose1,
	sMunchlaxPose2,
	sMunchlaxPose3,
	sMunchlaxPose4,
	sMunchlaxPose5,
	sMunchlaxPose6,
	sMunchlaxPose170,
	sMunchlaxPose8,
	sMunchlaxPose172,
	sMunchlaxPose153,
	sMunchlaxPose11,
	sMunchlaxPose12,
	sMunchlaxPose176,
	sMunchlaxPose14,
	sMunchlaxPose178,
	sMunchlaxPose151,
	sMunchlaxPose17,
	sMunchlaxPose18,
	sMunchlaxPose19,
	sMunchlaxPose20,
	sMunchlaxPose21,
	sMunchlaxPose22,
	sMunchlaxPose23,
	sMunchlaxPose24,
	sMunchlaxPose3,
	sMunchlaxPose24,
	sMunchlaxPose21,
	sMunchlaxPose18,
	sMunchlaxPose15,
	sMunchlaxPose12,
	sMunchlaxPose9,
	sMunchlaxPose6,
	sMunchlaxPose148,
	sMunchlaxPose149,
	sMunchlaxPose150,
	sMunchlaxPose151,
	sMunchlaxPose152,
	sMunchlaxPose153,
	sMunchlaxPose154,
	sMunchlaxPose155,
	sMunchlaxPose204,
	sMunchlaxPose205,
	sMunchlaxPose206,
	sMunchlaxPose205,
	sMunchlaxPose206,
	sMunchlaxPose209,
	sMunchlaxPose210,
	sMunchlaxPose211,
	sMunchlaxPose212,
	sMunchlaxPose213,
	sMunchlaxPose214,
	sMunchlaxPose215,
	sMunchlaxPose216,
	sMunchlaxPose1,
	sMunchlaxPose2,
	sMunchlaxPose3,
	sMunchlaxPose84,
	sMunchlaxPose85,
	sMunchlaxPose86,
	sMunchlaxPose4,
	sMunchlaxPose5,
	sMunchlaxPose6,
	sMunchlaxPose226,
	sMunchlaxPose227,
	sMunchlaxPose228,
	sMunchlaxPose229,
	sMunchlaxPose230,
	sMunchlaxPose231,
	sMunchlaxPose232,
	sMunchlaxPose233,
	sMunchlaxPose214,
	sMunchlaxPose235,
	sMunchlaxPose236,
	sMunchlaxPose237,
	sMunchlaxPose238,
	sMunchlaxPose239,
	sMunchlaxPose240,
	sMunchlaxPose10,
	sMunchlaxPose11,
	sMunchlaxPose12,
	sMunchlaxPose13,
	sMunchlaxPose14,
	sMunchlaxPose15,
	sMunchlaxPose16,
	sMunchlaxPose17,
	sMunchlaxPose18,
	sMunchlaxPose19,
	sMunchlaxPose20,
	sMunchlaxPose21,
	sMunchlaxPose108,
	sMunchlaxPose109,
	sMunchlaxPose110,
	sMunchlaxPose256,
	sMunchlaxPose257,
	sMunchlaxPose258,
	sMunchlaxPose22,
	sMunchlaxPose23,
	sMunchlaxPose24,
	sMunchlaxPose16,
	sMunchlaxPose17,
	sMunchlaxPose18,
	sMunchlaxPose22,
	sMunchlaxPose23,
	sMunchlaxPose24,
};

static const struct PositionSets sAxPositionsMunchlax[] = {
	[0] = { .set = { {0, -9}, {-7, -10}, {8, -10}, {0, -6} } },
	[1] = { .set = { {0, -8}, {-6, -9}, {8, -9}, {1, -5} } },
	[2] = { .set = { {0, -8}, {-8, -9}, {7, -9}, {0, -5} } },
	[3] = { .set = { {3, -9}, {7, -13}, {-7, -8}, {0, -6} } },
	[4] = { .set = { {3, -8}, {5, -10}, {-6, -6}, {0, -5} } },
	[5] = { .set = { {3, -8}, {8, -11}, {-7, -7}, {-1, -5} } },
	[6] = { .set = { {3, -9}, {-2, -10}, {-3, -7}, {0, -6} } },
	[7] = { .set = { {3, -8}, {-3, -9}, {-1, -6}, {0, -5} } },
	[8] = { .set = { {3, -8}, {3, -9}, {-4, -6}, {-1, -5} } },
	[9] = { .set = { {0, -13}, {-7, -13}, {5, -8}, {-2, -7} } },
	[10] = { .set = { {0, -12}, {-8, -11}, {6, -8}, {-2, -6} } },
	[11] = { .set = { {0, -12}, {-2, -12}, {4, -7}, {-2, -6} } },
	[12] = { .set = { {0, -12}, {8, -10}, {-8, -10}, {0, -7} } },
	[13] = { .set = { {0, -11}, {8, -8}, {-7, -10}, {0, -6} } },
	[14] = { .set = { {0, -11}, {7, -10}, {-8, -9}, {0, -6} } },
	[15] = { .set = { {0, -13}, {7, -13}, {-5, -8}, {2, -7} } },
	[16] = { .set = { {0, -12}, {8, -11}, {-6, -8}, {2, -6} } },
	[17] = { .set = { {0, -12}, {2, -12}, {-4, -7}, {2, -6} } },
	[18] = { .set = { {-3, -9}, {2, -10}, {3, -7}, {0, -6} } },
	[19] = { .set = { {-3, -8}, {3, -9}, {1, -6}, {0, -5} } },
	[20] = { .set = { {-3, -8}, {-3, -9}, {4, -6}, {1, -5} } },
	[21] = { .set = { {-3, -9}, {-7, -13}, {7, -8}, {0, -6} } },
	[22] = { .set = { {-3, -8}, {-5, -10}, {6, -6}, {0, -5} } },
	[23] = { .set = { {-3, -8}, {-8, -11}, {7, -7}, {1, -5} } },
	[24] = { .set = { {0, -9}, {-7, -10}, {8, -10}, {0, -6} } },
	[25] = { .set = { {0, -8}, {-6, -9}, {8, -9}, {1, -5} } },
	[26] = { .set = { {0, -8}, {-8, -9}, {7, -9}, {0, -5} } },
	[27] = { .set = { {3, -9}, {7, -13}, {-7, -8}, {0, -6} } },
	[28] = { .set = { {3, -8}, {5, -10}, {-6, -6}, {0, -5} } },
	[29] = { .set = { {3, -8}, {8, -11}, {-7, -7}, {-1, -5} } },
	[30] = { .set = { {3, -9}, {-2, -10}, {-3, -7}, {0, -6} } },
	[31] = { .set = { {3, -8}, {-3, -9}, {-1, -6}, {0, -5} } },
	[32] = { .set = { {3, -8}, {3, -9}, {-4, -6}, {-1, -5} } },
	[33] = { .set = { {0, -13}, {-7, -13}, {5, -8}, {-2, -7} } },
	[34] = { .set = { {0, -12}, {-8, -11}, {6, -8}, {-2, -6} } },
	[35] = { .set = { {0, -12}, {-2, -12}, {4, -7}, {-2, -6} } },
	[36] = { .set = { {0, -12}, {8, -10}, {-8, -10}, {0, -7} } },
	[37] = { .set = { {0, -11}, {8, -8}, {-7, -10}, {0, -6} } },
	[38] = { .set = { {0, -11}, {7, -10}, {-8, -9}, {0, -6} } },
	[39] = { .set = { {0, -13}, {7, -13}, {-5, -8}, {2, -7} } },
	[40] = { .set = { {0, -12}, {8, -11}, {-6, -8}, {2, -6} } },
	[41] = { .set = { {0, -12}, {2, -12}, {-4, -7}, {2, -6} } },
	[42] = { .set = { {-3, -9}, {2, -10}, {3, -7}, {0, -6} } },
	[43] = { .set = { {-3, -8}, {3, -9}, {1, -6}, {0, -5} } },
	[44] = { .set = { {-3, -8}, {-3, -9}, {4, -6}, {1, -5} } },
	[45] = { .set = { {-3, -9}, {-7, -13}, {7, -8}, {0, -6} } },
	[46] = { .set = { {-3, -8}, {-5, -10}, {6, -6}, {0, -5} } },
	[47] = { .set = { {-3, -8}, {-8, -11}, {7, -7}, {1, -5} } },
	[48] = { .set = { {0, -9}, {-7, -10}, {8, -10}, {0, -6} } },
	[49] = { .set = { {0, -8}, {-6, -9}, {8, -9}, {1, -5} } },
	[50] = { .set = { {0, -8}, {-8, -9}, {7, -9}, {0, -5} } },
	[51] = { .set = { {3, -9}, {7, -13}, {-7, -8}, {0, -6} } },
	[52] = { .set = { {3, -8}, {5, -10}, {-6, -6}, {0, -5} } },
	[53] = { .set = { {3, -8}, {8, -11}, {-7, -7}, {-1, -5} } },
	[54] = { .set = { {3, -9}, {-2, -10}, {-3, -7}, {0, -6} } },
	[55] = { .set = { {3, -8}, {-3, -9}, {-1, -6}, {0, -5} } },
	[56] = { .set = { {3, -8}, {3, -9}, {-4, -6}, {-1, -5} } },
	[57] = { .set = { {0, -13}, {-7, -13}, {5, -8}, {-2, -7} } },
	[58] = { .set = { {0, -12}, {-8, -11}, {6, -8}, {-2, -6} } },
	[59] = { .set = { {0, -12}, {-2, -12}, {4, -7}, {-2, -6} } },
	[60] = { .set = { {0, -12}, {8, -10}, {-8, -10}, {0, -7} } },
	[61] = { .set = { {0, -11}, {8, -8}, {-7, -10}, {0, -6} } },
	[62] = { .set = { {0, -11}, {7, -10}, {-8, -9}, {0, -6} } },
	[63] = { .set = { {0, -13}, {7, -13}, {-5, -8}, {2, -7} } },
	[64] = { .set = { {0, -12}, {8, -11}, {-6, -8}, {2, -6} } },
	[65] = { .set = { {0, -12}, {2, -12}, {-4, -7}, {2, -6} } },
	[66] = { .set = { {-3, -9}, {2, -10}, {3, -7}, {0, -6} } },
	[67] = { .set = { {-3, -8}, {3, -9}, {1, -6}, {0, -5} } },
	[68] = { .set = { {-3, -8}, {-3, -9}, {4, -6}, {1, -5} } },
	[69] = { .set = { {-3, -9}, {-7, -13}, {7, -8}, {0, -6} } },
	[70] = { .set = { {-3, -8}, {-5, -10}, {6, -6}, {0, -5} } },
	[71] = { .set = { {-3, -8}, {-8, -11}, {7, -7}, {1, -5} } },
	[72] = { .set = { {0, -8}, {-8, -9}, {7, -9}, {0, -5} } },
	[73] = { .set = { {-3, -8}, {-8, -11}, {7, -7}, {1, -5} } },
	[74] = { .set = { {-3, -8}, {-3, -9}, {4, -6}, {1, -5} } },
	[75] = { .set = { {0, -12}, {2, -12}, {-4, -7}, {2, -6} } },
	[76] = { .set = { {0, -11}, {7, -10}, {-8, -9}, {0, -6} } },
	[77] = { .set = { {0, -12}, {-2, -12}, {4, -7}, {-2, -6} } },
	[78] = { .set = { {3, -8}, {3, -9}, {-4, -6}, {-1, -5} } },
	[79] = { .set = { {3, -8}, {8, -11}, {-7, -7}, {-1, -5} } },
	[80] = { .set = { {0, -9}, {-7, -10}, {8, -10}, {0, -6} } },
	[81] = { .set = { {0, -8}, {-6, -9}, {8, -9}, {1, -5} } },
	[82] = { .set = { {0, -8}, {-8, -9}, {7, -9}, {0, -5} } },
	[83] = { .set = { {0, -9}, {-7, -7}, {9, -9}, {0, -10} } },
	[84] = { .set = { {0, 3}, {-9, 0}, {9, 0}, {0, -4} } },
	[85] = { .set = { {0, 3}, {-9, 0}, {9, 0}, {0, -4} } },
	[86] = { .set = { {3, -9}, {7, -13}, {-7, -8}, {0, -6} } },
	[87] = { .set = { {3, -8}, {5, -10}, {-6, -6}, {0, -5} } },
	[88] = { .set = { {3, -8}, {8, -11}, {-7, -7}, {-1, -5} } },
	[89] = { .set = { {3, -9}, {-2, -10}, {-3, -7}, {0, -6} } },
	[90] = { .set = { {3, -8}, {-3, -9}, {-1, -6}, {0, -5} } },
	[91] = { .set = { {3, -8}, {3, -9}, {-4, -6}, {-1, -5} } },
	[92] = { .set = { {4, -10}, {5, -8}, {-4, -9}, {0, -9} } },
	[93] = { .set = { {5, -1}, {6, -2}, {4, 0}, {0, -4} } },
	[94] = { .set = { {5, -1}, {6, -2}, {4, 0}, {0, -4} } },
	[95] = { .set = { {0, -13}, {-7, -13}, {5, -8}, {-2, -7} } },
	[96] = { .set = { {0, -12}, {-8, -11}, {6, -8}, {-2, -6} } },
	[97] = { .set = { {0, -12}, {-2, -12}, {4, -7}, {-2, -6} } },
	[98] = { .set = { {0, -12}, {8, -10}, {-8, -10}, {0, -7} } },
	[99] = { .set = { {0, -11}, {8, -8}, {-7, -10}, {0, -6} } },
	[100] = { .set = { {0, -11}, {7, -10}, {-8, -9}, {0, -6} } },
	[101] = { .set = { {0, -13}, {7, -13}, {-5, -8}, {2, -7} } },
	[102] = { .set = { {0, -12}, {8, -11}, {-6, -8}, {2, -6} } },
	[103] = { .set = { {0, -12}, {2, -12}, {-4, -7}, {2, -6} } },
	[104] = { .set = { {-3, -9}, {2, -10}, {3, -7}, {0, -6} } },
	[105] = { .set = { {-3, -8}, {3, -9}, {1, -6}, {0, -5} } },
	[106] = { .set = { {-3, -8}, {-3, -9}, {4, -6}, {1, -5} } },
	[107] = { .set = { {-4, -10}, {-5, -8}, {4, -9}, {0, -9} } },
	[108] = { .set = { {-5, -1}, {-6, -2}, {-4, 0}, {0, -4} } },
	[109] = { .set = { {-5, -1}, {-6, -2}, {-4, 0}, {0, -4} } },
	[110] = { .set = { {-3, -9}, {-7, -13}, {7, -8}, {0, -6} } },
	[111] = { .set = { {-3, -8}, {-5, -10}, {6, -6}, {0, -5} } },
	[112] = { .set = { {-3, -8}, {-8, -11}, {7, -7}, {1, -5} } },
	[113] = { .set = { {-3, -6}, {-5, -3}, {3, -1}, {0, -3} } },
	[114] = { .set = { {-3, -5}, {-5, -3}, {3, -1}, {0, -3} } },
	[115] = { .set = { {0, -5}, {-8, -10}, {8, -10}, {0, -6} } },
	[116] = { .set = { {4, -6}, {6, -11}, {-7, -9}, {0, -6} } },
	[117] = { .set = { {2, -6}, {-3, -11}, {-7, -7}, {-2, -6} } },
	[118] = { .set = { {2, -10}, {-9, -9}, {3, -7}, {-2, -6} } },
	[119] = { .set = { {0, -9}, {9, -7}, {-8, -7}, {0, -5} } },
	[120] = { .set = { {-3, -10}, {8, -9}, {-4, -7}, {1, -6} } },
	[121] = { .set = { {-3, -6}, {2, -11}, {6, -7}, {1, -6} } },
	[122] = { .set = { {-5, -6}, {-7, -11}, {6, -9}, {-1, -6} } },
	[123] = { .set = { {0, -9}, {-7, -10}, {8, -10}, {0, -6} } },
	[124] = { .set = { {0, -8}, {-6, -9}, {8, -9}, {1, -5} } },
	[125] = { .set = { {0, -8}, {-8, -9}, {7, -9}, {0, -5} } },
	[126] = { .set = { {3, -9}, {7, -13}, {-7, -8}, {0, -6} } },
	[127] = { .set = { {3, -8}, {5, -10}, {-6, -6}, {0, -5} } },
	[128] = { .set = { {3, -8}, {8, -11}, {-7, -7}, {-1, -5} } },
	[129] = { .set = { {3, -9}, {-2, -10}, {-3, -7}, {0, -6} } },
	[130] = { .set = { {3, -8}, {-3, -9}, {-1, -6}, {0, -5} } },
	[131] = { .set = { {3, -8}, {3, -9}, {-4, -6}, {-1, -5} } },
	[132] = { .set = { {0, -13}, {-7, -13}, {5, -8}, {-2, -7} } },
	[133] = { .set = { {0, -12}, {-8, -11}, {6, -8}, {-2, -6} } },
	[134] = { .set = { {0, -12}, {-2, -12}, {4, -7}, {-2, -6} } },
	[135] = { .set = { {0, -12}, {8, -10}, {-8, -10}, {0, -7} } },
	[136] = { .set = { {0, -11}, {8, -8}, {-7, -10}, {0, -6} } },
	[137] = { .set = { {0, -11}, {7, -10}, {-8, -9}, {0, -6} } },
	[138] = { .set = { {0, -13}, {7, -13}, {-5, -8}, {2, -7} } },
	[139] = { .set = { {0, -12}, {8, -11}, {-6, -8}, {2, -6} } },
	[140] = { .set = { {0, -12}, {2, -12}, {-4, -7}, {2, -6} } },
	[141] = { .set = { {-3, -9}, {2, -10}, {3, -7}, {0, -6} } },
	[142] = { .set = { {-3, -8}, {3, -9}, {1, -6}, {0, -5} } },
	[143] = { .set = { {-3, -8}, {-3, -9}, {4, -6}, {1, -5} } },
	[144] = { .set = { {-3, -9}, {-7, -13}, {7, -8}, {0, -6} } },
	[145] = { .set = { {-3, -8}, {-5, -10}, {6, -6}, {0, -5} } },
	[146] = { .set = { {-3, -8}, {-8, -11}, {7, -7}, {1, -5} } },
	[147] = { .set = { {0, -8}, {-7, -9}, {8, -9}, {0, -5} } },
	[148] = { .set = { {-3, -8}, {-7, -12}, {7, -7}, {0, -5} } },
	[149] = { .set = { {-3, -8}, {2, -9}, {3, -6}, {0, -5} } },
	[150] = { .set = { {0, -12}, {7, -12}, {-5, -7}, {2, -6} } },
	[151] = { .set = { {0, -11}, {8, -9}, {-8, -9}, {0, -6} } },
	[152] = { .set = { {0, -12}, {-7, -12}, {5, -7}, {-2, -6} } },
	[153] = { .set = { {3, -8}, {-2, -9}, {-3, -6}, {0, -5} } },
	[154] = { .set = { {3, -8}, {7, -12}, {-7, -7}, {0, -5} } },
	[155] = { .set = { {0, -8}, {-8, -9}, {7, -9}, {0, -5} } },
	[156] = { .set = { {3, -8}, {5, -10}, {-6, -6}, {0, -5} } },
	[157] = { .set = { {3, -8}, {-3, -9}, {-1, -6}, {0, -5} } },
	[158] = { .set = { {0, -12}, {-8, -11}, {6, -8}, {-2, -6} } },
	[159] = { .set = { {0, -11}, {8, -8}, {-7, -10}, {0, -6} } },
	[160] = { .set = { {0, -12}, {8, -11}, {-6, -8}, {2, -6} } },
	[161] = { .set = { {-3, -8}, {3, -9}, {1, -6}, {0, -5} } },
	[162] = { .set = { {-3, -8}, {-5, -10}, {6, -6}, {0, -5} } },
	[163] = { .set = { {0, -9}, {-7, -10}, {8, -10}, {0, -6} } },
	[164] = { .set = { {0, -8}, {-6, -9}, {8, -9}, {1, -5} } },
	[165] = { .set = { {0, -8}, {-8, -9}, {7, -9}, {0, -5} } },
	[166] = { .set = { {3, -9}, {7, -13}, {-7, -8}, {0, -6} } },
	[167] = { .set = { {3, -8}, {5, -10}, {-6, -6}, {0, -5} } },
	[168] = { .set = { {3, -8}, {8, -11}, {-7, -7}, {-1, -5} } },
	[169] = { .set = { {3, -7}, {-2, -8}, {-3, -5}, {0, -4} } },
	[170] = { .set = { {3, -8}, {-3, -9}, {-1, -6}, {0, -5} } },
	[171] = { .set = { {3, -7}, {3, -8}, {-4, -5}, {-1, -4} } },
	[172] = { .set = { {0, -12}, {-7, -12}, {5, -7}, {-2, -6} } },
	[173] = { .set = { {0, -12}, {-8, -11}, {6, -8}, {-2, -6} } },
	[174] = { .set = { {0, -12}, {-2, -12}, {4, -7}, {-2, -6} } },
	[175] = { .set = { {0, -10}, {8, -8}, {-8, -8}, {0, -5} } },
	[176] = { .set = { {0, -11}, {8, -8}, {-7, -10}, {0, -6} } },
	[177] = { .set = { {0, -10}, {7, -9}, {-8, -8}, {0, -5} } },
	[178] = { .set = { {0, -12}, {7, -12}, {-5, -7}, {2, -6} } },
	[179] = { .set = { {0, -12}, {8, -11}, {-6, -8}, {2, -6} } },
	[180] = { .set = { {0, -12}, {2, -12}, {-4, -7}, {2, -6} } },
	[181] = { .set = { {-3, -9}, {2, -10}, {3, -7}, {0, -6} } },
	[182] = { .set = { {-3, -8}, {3, -9}, {1, -6}, {0, -5} } },
	[183] = { .set = { {-3, -8}, {-3, -9}, {4, -6}, {1, -5} } },
	[184] = { .set = { {-3, -9}, {-7, -13}, {7, -8}, {0, -6} } },
	[185] = { .set = { {-3, -8}, {-5, -10}, {6, -6}, {0, -5} } },
	[186] = { .set = { {-3, -8}, {-8, -11}, {7, -7}, {1, -5} } },
	[187] = { .set = { {0, -8}, {-8, -9}, {7, -9}, {0, -5} } },
	[188] = { .set = { {-3, -8}, {-8, -11}, {7, -7}, {1, -5} } },
	[189] = { .set = { {-3, -8}, {-3, -9}, {4, -6}, {1, -5} } },
	[190] = { .set = { {0, -12}, {2, -12}, {-4, -7}, {2, -6} } },
	[191] = { .set = { {0, -11}, {7, -10}, {-8, -9}, {0, -6} } },
	[192] = { .set = { {0, -12}, {-2, -12}, {4, -7}, {-2, -6} } },
	[193] = { .set = { {3, -8}, {3, -9}, {-4, -6}, {-1, -5} } },
	[194] = { .set = { {3, -8}, {8, -11}, {-7, -7}, {-1, -5} } },
	[195] = { .set = { {0, -8}, {-7, -9}, {8, -9}, {0, -5} } },
	[196] = { .set = { {-3, -8}, {-7, -12}, {7, -7}, {0, -5} } },
	[197] = { .set = { {-3, -8}, {2, -9}, {3, -6}, {0, -5} } },
	[198] = { .set = { {0, -12}, {7, -12}, {-5, -7}, {2, -6} } },
	[199] = { .set = { {0, -11}, {8, -9}, {-8, -9}, {0, -6} } },
	[200] = { .set = { {0, -12}, {-7, -12}, {5, -7}, {-2, -6} } },
	[201] = { .set = { {3, -8}, {-2, -9}, {-3, -6}, {0, -5} } },
	[202] = { .set = { {3, -8}, {7, -12}, {-7, -7}, {0, -5} } },
	[203] = { .set = { {0, -7}, {-5, -4}, {5, -4}, {0, -4} } },
	[204] = { .set = { {0, -8}, {-6, -6}, {6, -6}, {0, -5} } },
	[205] = { .set = { {0, -8}, {-6, -6}, {6, -6}, {0, -5} } },
	[206] = { .set = { {0, -8}, {-6, -6}, {6, -6}, {0, -5} } },
	[207] = { .set = { {0, -8}, {-6, -6}, {6, -6}, {0, -5} } },
	[208] = { .set = { {0, -9}, {-8, -9}, {8, -5}, {0, -5} } },
	[209] = { .set = { {0, -8}, {-7, -5}, {8, -9}, {0, -4} } },
	[210] = { .set = { {-5, -6}, {1, -6}, {2, -4}, {0, -5} } },
	[211] = { .set = { {-5, -7}, {1, -7}, {2, -5}, {0, -6} } },
	[212] = { .set = { {-5, -7}, {1, -7}, {2, -5}, {0, -6} } },
	[213] = { .set = { {5, -6}, {-1, -6}, {-2, -4}, {0, -5} } },
	[214] = { .set = { {5, -7}, {-1, -7}, {-2, -5}, {0, -6} } },
	[215] = { .set = { {5, -7}, {-1, -7}, {-2, -5}, {0, -6} } },
	[216] = { .set = { {0, -9}, {-7, -10}, {8, -10}, {0, -6} } },
	[217] = { .set = { {0, -8}, {-6, -9}, {8, -9}, {1, -5} } },
	[218] = { .set = { {0, -8}, {-8, -9}, {7, -9}, {0, -5} } },
	[219] = { .set = { {0, -9}, {-7, -7}, {9, -9}, {0, -10} } },
	[220] = { .set = { {0, 3}, {-9, 0}, {9, 0}, {0, -4} } },
	[221] = { .set = { {0, 3}, {-9, 0}, {9, 0}, {0, -4} } },
	[222] = { .set = { {3, -9}, {7, -13}, {-7, -8}, {0, -6} } },
	[223] = { .set = { {3, -8}, {5, -10}, {-6, -6}, {0, -5} } },
	[224] = { .set = { {3, -8}, {8, -11}, {-7, -7}, {-1, -5} } },
	[225] = { .set = { {2, -9}, {-3, -10}, {-4, -7}, {-1, -6} } },
	[226] = { .set = { {2, -8}, {-4, -9}, {-2, -6}, {-1, -5} } },
	[227] = { .set = { {2, -8}, {2, -9}, {-5, -6}, {-2, -5} } },
	[228] = { .set = { {3, -10}, {4, -8}, {-5, -9}, {-1, -9} } },
	[229] = { .set = { {4, -1}, {5, -2}, {3, 0}, {-1, -4} } },
	[230] = { .set = { {4, -1}, {5, -2}, {3, 0}, {-1, -4} } },
	[231] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[232] = { .set = { {3, -6}, {-3, -6}, {-4, -4}, {-2, -5} } },
	[233] = { .set = { {5, -6}, {-1, -6}, {-2, -4}, {0, -5} } },
	[234] = { .set = { {2, -9}, {6, -13}, {-8, -8}, {-1, -6} } },
	[235] = { .set = { {2, -8}, {4, -10}, {-7, -6}, {-1, -5} } },
	[236] = { .set = { {2, -8}, {7, -11}, {-8, -7}, {-2, -5} } },
	[237] = { .set = { {-1, -13}, {-8, -13}, {4, -8}, {-3, -7} } },
	[238] = { .set = { {-1, -12}, {-9, -11}, {5, -8}, {-3, -6} } },
	[239] = { .set = { {-1, -12}, {-3, -12}, {3, -7}, {-3, -6} } },
	[240] = { .set = { {0, -13}, {-7, -13}, {5, -8}, {-2, -7} } },
	[241] = { .set = { {0, -12}, {-8, -11}, {6, -8}, {-2, -6} } },
	[242] = { .set = { {0, -12}, {-2, -12}, {4, -7}, {-2, -6} } },
	[243] = { .set = { {0, -12}, {8, -10}, {-8, -10}, {0, -7} } },
	[244] = { .set = { {0, -11}, {8, -8}, {-7, -10}, {0, -6} } },
	[245] = { .set = { {0, -11}, {7, -10}, {-8, -9}, {0, -6} } },
	[246] = { .set = { {0, -13}, {7, -13}, {-5, -8}, {2, -7} } },
	[247] = { .set = { {0, -12}, {8, -11}, {-6, -8}, {2, -6} } },
	[248] = { .set = { {0, -12}, {2, -12}, {-4, -7}, {2, -6} } },
	[249] = { .set = { {-3, -9}, {2, -10}, {3, -7}, {0, -6} } },
	[250] = { .set = { {-3, -8}, {3, -9}, {1, -6}, {0, -5} } },
	[251] = { .set = { {-3, -8}, {-3, -9}, {4, -6}, {1, -5} } },
	[252] = { .set = { {-4, -10}, {-5, -8}, {4, -9}, {0, -9} } },
	[253] = { .set = { {-5, -1}, {-6, -2}, {-4, 0}, {0, -4} } },
	[254] = { .set = { {-5, -1}, {-6, -2}, {-4, 0}, {0, -4} } },
	[255] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[256] = { .set = { {-4, -6}, {2, -6}, {3, -4}, {1, -5} } },
	[257] = { .set = { {-6, -6}, {0, -6}, {1, -4}, {-1, -5} } },
	[258] = { .set = { {-3, -9}, {-7, -13}, {7, -8}, {0, -6} } },
	[259] = { .set = { {-3, -8}, {-5, -10}, {6, -6}, {0, -5} } },
	[260] = { .set = { {-3, -8}, {-8, -11}, {7, -7}, {1, -5} } },
	[261] = { .set = { {0, -13}, {7, -13}, {-5, -8}, {2, -7} } },
	[262] = { .set = { {0, -12}, {8, -11}, {-6, -8}, {2, -6} } },
	[263] = { .set = { {0, -12}, {2, -12}, {-4, -7}, {2, -6} } },
	[264] = { .set = { {-3, -9}, {-7, -13}, {7, -8}, {0, -6} } },
	[265] = { .set = { {-3, -8}, {-5, -10}, {6, -6}, {0, -5} } },
	[266] = { .set = { {-3, -8}, {-8, -11}, {7, -7}, {1, -5} } },
};

static const ax_anim *const sMunchlaxAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sMunchlaxAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_01685),
	AX_ANIM_PTR(gAxSharedAnim_01791),
	AX_ANIM_PTR(gAxSharedAnim_01833),
	AX_ANIM_PTR(gAxSharedAnim_01877),
	AX_ANIM_PTR(gAxSharedAnim_01901),
	AX_ANIM_PTR(gAxSharedAnim_01922),
	AX_ANIM_PTR(gAxSharedAnim_01940),
	AX_ANIM_PTR(gAxSharedAnim_01958),
};

static const ax_anim *const sMunchlaxAnimTable3[] = {
	AX_ANIM_PTR(sMunchlaxAnims_3_1),
	AX_ANIM_PTR(sMunchlaxAnims_3_2),
	AX_ANIM_PTR(sMunchlaxAnims_3_3),
	AX_ANIM_PTR(sMunchlaxAnims_3_4),
	AX_ANIM_PTR(sMunchlaxAnims_3_5),
	AX_ANIM_PTR(sMunchlaxAnims_3_6),
	AX_ANIM_PTR(sMunchlaxAnims_3_7),
	AX_ANIM_PTR(sMunchlaxAnims_3_8),
};

static const ax_anim *const sMunchlaxAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_02094),
	AX_ANIM_PTR(gAxSharedAnim_02142),
	AX_ANIM_PTR(gAxSharedAnim_02128),
	AX_ANIM_PTR(gAxSharedAnim_02124),
	AX_ANIM_PTR(gAxSharedAnim_02122),
	AX_ANIM_PTR(gAxSharedAnim_02113),
	AX_ANIM_PTR(gAxSharedAnim_02101),
	AX_ANIM_PTR(gAxSharedAnim_02095),
};

static const ax_anim *const sMunchlaxAnimTable5[] = {
	AX_ANIM_PTR(sMunchlaxAnims_5_1),
	AX_ANIM_PTR(sMunchlaxAnims_5_2),
	AX_ANIM_PTR(sMunchlaxAnims_5_2),
	AX_ANIM_PTR(sMunchlaxAnims_5_2),
	AX_ANIM_PTR(sMunchlaxAnims_5_2),
	AX_ANIM_PTR(sMunchlaxAnims_5_6),
	AX_ANIM_PTR(sMunchlaxAnims_5_6),
	AX_ANIM_PTR(sMunchlaxAnims_5_6),
};

static const ax_anim *const sMunchlaxAnimTable6[] = {
	AX_ANIM_PTR(sMunchlaxAnims_6_1),
	AX_ANIM_PTR(sMunchlaxAnims_6_1),
	AX_ANIM_PTR(sMunchlaxAnims_6_1),
	AX_ANIM_PTR(sMunchlaxAnims_6_1),
	AX_ANIM_PTR(sMunchlaxAnims_6_1),
	AX_ANIM_PTR(sMunchlaxAnims_6_1),
	AX_ANIM_PTR(sMunchlaxAnims_6_1),
	AX_ANIM_PTR(sMunchlaxAnims_6_1),
};

static const ax_anim *const sMunchlaxAnimTable7[] = {
	AX_ANIM_PTR(sMunchlaxAnims_7_1),
	AX_ANIM_PTR(sMunchlaxAnims_7_2),
	AX_ANIM_PTR(sMunchlaxAnims_7_3),
	AX_ANIM_PTR(sMunchlaxAnims_7_4),
	AX_ANIM_PTR(sMunchlaxAnims_7_5),
	AX_ANIM_PTR(sMunchlaxAnims_7_6),
	AX_ANIM_PTR(sMunchlaxAnims_7_7),
	AX_ANIM_PTR(sMunchlaxAnims_7_8),
};

static const ax_anim *const sMunchlaxAnimTable8[] = {
	AX_ANIM_PTR(sMunchlaxAnims_8_1),
	AX_ANIM_PTR(sMunchlaxAnims_8_2),
	AX_ANIM_PTR(sMunchlaxAnims_8_3),
	AX_ANIM_PTR(sMunchlaxAnims_8_4),
	AX_ANIM_PTR(sMunchlaxAnims_8_5),
	AX_ANIM_PTR(gAxSharedAnim_02458),
	AX_ANIM_PTR(gAxSharedAnim_02460),
	AX_ANIM_PTR(gAxSharedAnim_02462),
};

static const ax_anim *const sMunchlaxAnimTable9[] = {
	AX_ANIM_PTR(sMunchlaxAnims_9_1),
	AX_ANIM_PTR(sMunchlaxAnims_9_2),
	AX_ANIM_PTR(sMunchlaxAnims_9_3),
	AX_ANIM_PTR(sMunchlaxAnims_9_4),
	AX_ANIM_PTR(sMunchlaxAnims_9_5),
	AX_ANIM_PTR(sMunchlaxAnims_9_6),
	AX_ANIM_PTR(sMunchlaxAnims_9_7),
	AX_ANIM_PTR(sMunchlaxAnims_9_8),
};

static const ax_anim *const sMunchlaxAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00623),
	AX_ANIM_PTR(gAxSharedAnim_00633),
	AX_ANIM_PTR(gAxSharedAnim_00643),
	AX_ANIM_PTR(gAxSharedAnim_00649),
	AX_ANIM_PTR(gAxSharedAnim_00661),
	AX_ANIM_PTR(gAxSharedAnim_00676),
	AX_ANIM_PTR(gAxSharedAnim_00687),
	AX_ANIM_PTR(gAxSharedAnim_00704),
};

static const ax_anim *const sMunchlaxAnimTable11[] = {
	AX_ANIM_PTR(sMunchlaxAnims_11_1),
	AX_ANIM_PTR(sMunchlaxAnims_11_2),
	AX_ANIM_PTR(sMunchlaxAnims_11_3),
	AX_ANIM_PTR(sMunchlaxAnims_11_4),
	AX_ANIM_PTR(gAxSharedAnim_00858),
	AX_ANIM_PTR(sMunchlaxAnims_11_6),
	AX_ANIM_PTR(gAxSharedAnim_00937),
	AX_ANIM_PTR(sMunchlaxAnims_11_8),
};

static const ax_anim *const sMunchlaxAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01030),
	AX_ANIM_PTR(gAxSharedAnim_01146),
	AX_ANIM_PTR(gAxSharedAnim_01117),
	AX_ANIM_PTR(gAxSharedAnim_01098),
	AX_ANIM_PTR(gAxSharedAnim_01095),
	AX_ANIM_PTR(gAxSharedAnim_01083),
	AX_ANIM_PTR(gAxSharedAnim_01052),
	AX_ANIM_PTR(gAxSharedAnim_01031),
};

static const ax_anim *const sMunchlaxAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01158),
	AX_ANIM_PTR(gAxSharedAnim_01240),
	AX_ANIM_PTR(gAxSharedAnim_01229),
	AX_ANIM_PTR(gAxSharedAnim_01219),
	AX_ANIM_PTR(gAxSharedAnim_01202),
	AX_ANIM_PTR(gAxSharedAnim_01191),
	AX_ANIM_PTR(gAxSharedAnim_01180),
	AX_ANIM_PTR(gAxSharedAnim_01169),
};

static const ax_anim *const sMunchlaxAnimTable14[] = {
	AX_ANIM_PTR(sMunchlaxAnims_14_1),
	AX_ANIM_PTR(sMunchlaxAnims_14_1),
	AX_ANIM_PTR(sMunchlaxAnims_14_1),
	AX_ANIM_PTR(sMunchlaxAnims_14_1),
	AX_ANIM_PTR(sMunchlaxAnims_14_1),
	AX_ANIM_PTR(sMunchlaxAnims_14_1),
	AX_ANIM_PTR(sMunchlaxAnims_14_1),
	AX_ANIM_PTR(sMunchlaxAnims_14_1),
};

static const ax_anim *const sMunchlaxAnimTable15[] = {
	AX_ANIM_PTR(sMunchlaxAnims_15_1),
	AX_ANIM_PTR(sMunchlaxAnims_15_1),
	AX_ANIM_PTR(sMunchlaxAnims_15_1),
	AX_ANIM_PTR(sMunchlaxAnims_15_1),
	AX_ANIM_PTR(sMunchlaxAnims_15_1),
	AX_ANIM_PTR(sMunchlaxAnims_15_1),
	AX_ANIM_PTR(sMunchlaxAnims_15_1),
	AX_ANIM_PTR(sMunchlaxAnims_15_1),
};

static const ax_anim *const sMunchlaxAnimTable16[] = {
	AX_ANIM_PTR(sMunchlaxAnims_16_1),
	AX_ANIM_PTR(sMunchlaxAnims_16_1),
	AX_ANIM_PTR(sMunchlaxAnims_16_1),
	AX_ANIM_PTR(sMunchlaxAnims_16_1),
	AX_ANIM_PTR(sMunchlaxAnims_16_1),
	AX_ANIM_PTR(sMunchlaxAnims_16_1),
	AX_ANIM_PTR(sMunchlaxAnims_16_1),
	AX_ANIM_PTR(sMunchlaxAnims_16_1),
};

static const ax_anim *const sMunchlaxAnimTable17[] = {
	AX_ANIM_PTR(sMunchlaxAnims_17_1),
	AX_ANIM_PTR(sMunchlaxAnims_17_1),
	AX_ANIM_PTR(sMunchlaxAnims_17_3),
	AX_ANIM_PTR(sMunchlaxAnims_17_1),
	AX_ANIM_PTR(sMunchlaxAnims_17_1),
	AX_ANIM_PTR(sMunchlaxAnims_17_1),
	AX_ANIM_PTR(sMunchlaxAnims_17_1),
	AX_ANIM_PTR(sMunchlaxAnims_17_1),
};

static const ax_anim *const sMunchlaxAnimTable18[] = {
	AX_ANIM_PTR(sMunchlaxAnims_18_1),
	AX_ANIM_PTR(sMunchlaxAnims_18_1),
	AX_ANIM_PTR(sMunchlaxAnims_18_1),
	AX_ANIM_PTR(sMunchlaxAnims_18_1),
	AX_ANIM_PTR(sMunchlaxAnims_18_1),
	AX_ANIM_PTR(sMunchlaxAnims_18_6),
	AX_ANIM_PTR(sMunchlaxAnims_18_6),
	AX_ANIM_PTR(sMunchlaxAnims_18_6),
};

static const ax_anim *const *const sAxAnimationsMunchlax[] = {
	sMunchlaxAnimTable1,
	sMunchlaxAnimTable2,
	sMunchlaxAnimTable3,
	sMunchlaxAnimTable4,
	sMunchlaxAnimTable5,
	sMunchlaxAnimTable6,
	sMunchlaxAnimTable7,
	sMunchlaxAnimTable8,
	sMunchlaxAnimTable9,
	sMunchlaxAnimTable10,
	sMunchlaxAnimTable11,
	sMunchlaxAnimTable12,
	sMunchlaxAnimTable13,
	sMunchlaxAnimTable14,
	sMunchlaxAnimTable15,
	sMunchlaxAnimTable16,
	sMunchlaxAnimTable17,
	sMunchlaxAnimTable18,
};

static const ax_sprite *const sAxSpritesMunchlax[] = {
	sMunchlaxSprites1,
	sMunchlaxSprites2,
	sMunchlaxSprites3,
	sMunchlaxSprites4,
	sMunchlaxSprites5,
	sMunchlaxSprites6,
	sMunchlaxSprites7,
	sMunchlaxSprites8,
	sMunchlaxSprites9,
	sMunchlaxSprites10,
	sMunchlaxSprites11,
	sMunchlaxSprites12,
	sMunchlaxSprites13,
	sMunchlaxSprites14,
	sMunchlaxSprites15,
	sMunchlaxSprites16,
	sMunchlaxSprites17,
	sMunchlaxSprites18,
	sMunchlaxSprites19,
	sMunchlaxSprites20,
	sMunchlaxSprites21,
	sMunchlaxSprites22,
	sMunchlaxSprites23,
	sMunchlaxSprites24,
	sMunchlaxSprites25,
	sMunchlaxSprites26,
	sMunchlaxSprites27,
	sMunchlaxSprites28,
	sMunchlaxSprites29,
	sMunchlaxSprites30,
	sMunchlaxSprites31,
	sMunchlaxSprites32,
	sMunchlaxSprites33,
	sMunchlaxSprites34,
	sMunchlaxSprites35,
	sMunchlaxSprites36,
	sMunchlaxSprites37,
};

static const axmain sAxMainMunchlax = {
	.poses = sAxPosesMunchlax,
	.animations = sAxAnimationsMunchlax,
	.animCount = ARRAY_COUNT(sAxAnimationsMunchlax),
	.spriteData = sAxSpritesMunchlax,
	.positions = sAxPositionsMunchlax,
};
