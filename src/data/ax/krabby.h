/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainKrabby;
const SiroArchive gAxKrabby = {"SIRO", &sAxMainKrabby};

static const ax_pose sKrabbyPose1[] = {
	AX_POSE(0, OAM1(240, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose2[] = {
	AX_POSE(1, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose3[] = {
	AX_POSE(2, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose4[] = {
	AX_POSE(3, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose5[] = {
	AX_POSE(4, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose6[] = {
	AX_POSE(5, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose7[] = {
	AX_POSE(6, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose8[] = {
	AX_POSE(7, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose9[] = {
	AX_POSE(8, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose10[] = {
	AX_POSE(3, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose11[] = {
	AX_POSE(4, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose12[] = {
	AX_POSE(5, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose13[] = {
	AX_POSE(0, OAM1(240, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose14[] = {
	AX_POSE(1, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose15[] = {
	AX_POSE(2, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose16[] = {
	AX_POSE(9, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose17[] = {
	AX_POSE(10, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose18[] = {
	AX_POSE(11, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose19[] = {
	AX_POSE(12, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose20[] = {
	AX_POSE(13, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose21[] = {
	AX_POSE(14, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose22[] = {
	AX_POSE(9, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose23[] = {
	AX_POSE(10, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose24[] = {
	AX_POSE(11, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose28[] = {
	AX_POSE(15, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose29[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose30[] = {
	AX_POSE(17, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose31[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose32[] = {
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose33[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose34[] = {
	AX_POSE(17, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose35[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose178[] = {
	AX_POSE(20, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose179[] = {
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(22, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose180[] = {
	AX_POSE(22, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose182[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose183[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose184[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose186[] = {
	AX_POSE(26, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose187[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(28, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose188[] = {
	AX_POSE(28, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose190[] = {
	AX_POSE(29, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose191[] = {
	AX_POSE(30, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose192[] = {
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose194[] = {
	AX_POSE(32, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose195[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(34, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose196[] = {
	AX_POSE(34, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose198[] = {
	AX_POSE(29, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose199[] = {
	AX_POSE(30, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose200[] = {
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose202[] = {
	AX_POSE(26, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose203[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(28, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose204[] = {
	AX_POSE(28, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose206[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose207[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose208[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose211[] = {
	AX_POSE(35, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose214[] = {
	AX_POSE(36, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose217[] = {
	AX_POSE(37, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose220[] = {
	AX_POSE(38, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose222[] = {
	AX_POSE(32, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose223[] = {
	AX_POSE(39, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose226[] = {
	AX_POSE(38, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose229[] = {
	AX_POSE(37, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose232[] = {
	AX_POSE(36, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose241[] = {
	AX_POSE(40, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose242[] = {
	AX_POSE(41, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose243[] = {
	AX_POSE(42, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose244[] = {
	AX_POSE(43, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose245[] = {
	AX_POSE(44, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose246[] = {
	AX_POSE(45, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose247[] = {
	AX_POSE(46, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose248[] = {
	AX_POSE(45, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose249[] = {
	AX_POSE(44, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose250[] = {
	AX_POSE(43, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose285[] = {
	AX_POSE(37, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose286[] = {
	AX_POSE(38, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose287[] = {
	AX_POSE(39, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose288[] = {
	AX_POSE(38, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose289[] = {
	AX_POSE(37, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose292[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose293[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose294[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose295[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose296[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose297[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose298[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose304[] = {
	AX_POSE(36, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose307[] = {
	AX_POSE(37, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose319[] = {
	AX_POSE(37, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKrabbyPose322[] = {
	AX_POSE(36, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const u8 sKrabbyAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_3_1.lz");
static const u8 sKrabbyAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_3_2.lz");
static const u8 sKrabbyAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_3_3.lz");
static const u8 sKrabbyAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_3_4.lz");
static const u8 sKrabbyAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_3_5.lz");
static const u8 sKrabbyAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_3_6.lz");
static const u8 sKrabbyAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_3_7.lz");
static const u8 sKrabbyAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_3_8.lz");
static const u8 sKrabbyAnims_7_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_7_1.lz");
static const u8 sKrabbyAnims_7_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_7_2.lz");
static const u8 sKrabbyAnims_7_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_7_3.lz");
static const u8 sKrabbyAnims_7_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_7_4.lz");
static const u8 sKrabbyAnims_7_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_7_5.lz");
static const u8 sKrabbyAnims_7_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_7_6.lz");
static const u8 sKrabbyAnims_7_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_7_7.lz");
static const ax_anim sKrabbyAnims_7_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 249, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 8, .unkFlags = 0, .poseId = 249, .offset = {5, -5}, .shadow = {5, -5} },
	AX_ANIM_TERMINATOR
};
static const u8 sKrabbyAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_9_1.lz");
static const u8 sKrabbyAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_9_2.lz");
static const u8 sKrabbyAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_9_3.lz");
static const u8 sKrabbyAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_9_4.lz");
static const u8 sKrabbyAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_9_5.lz");
static const u8 sKrabbyAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_9_6.lz");
static const u8 sKrabbyAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_9_7.lz");
static const u8 sKrabbyAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_9_8.lz");
static const u8 sKrabbyAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_11_1.lz");
static const u8 sKrabbyAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_11_2.lz");
static const u8 sKrabbyAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_11_3.lz");
static const u8 sKrabbyAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_11_4.lz");
static const u8 sKrabbyAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_11_5.lz");
static const u8 sKrabbyAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_11_6.lz");
static const u8 sKrabbyAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_11_7.lz");
static const u8 sKrabbyAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/krabby/sKrabbyAnims_11_8.lz");

static const u8 sKrabbyGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_1.4bpp.lz");
static const ax_sprite sKrabbySprites1[] = {
	{sKrabbyGfx1, ARRAY_COUNT(sKrabbyGfx1)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_2.4bpp.lz");
static const ax_sprite sKrabbySprites2[] = {
	{sKrabbyGfx2, ARRAY_COUNT(sKrabbyGfx2)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_3.4bpp.lz");
static const ax_sprite sKrabbySprites3[] = {
	{sKrabbyGfx3, ARRAY_COUNT(sKrabbyGfx3)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_4.4bpp.lz");
static const ax_sprite sKrabbySprites4[] = {
	{sKrabbyGfx4, ARRAY_COUNT(sKrabbyGfx4)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_5.4bpp.lz");
static const ax_sprite sKrabbySprites5[] = {
	{sKrabbyGfx5, ARRAY_COUNT(sKrabbyGfx5)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_6.4bpp.lz");
static const ax_sprite sKrabbySprites6[] = {
	{sKrabbyGfx6, ARRAY_COUNT(sKrabbyGfx6)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_7.4bpp.lz");
static const ax_sprite sKrabbySprites7[] = {
	{sKrabbyGfx7, ARRAY_COUNT(sKrabbyGfx7)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_8.4bpp.lz");
static const ax_sprite sKrabbySprites8[] = {
	{sKrabbyGfx8, ARRAY_COUNT(sKrabbyGfx8)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_9.4bpp.lz");
static const ax_sprite sKrabbySprites9[] = {
	{sKrabbyGfx9, ARRAY_COUNT(sKrabbyGfx9)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_10.4bpp.lz");
static const ax_sprite sKrabbySprites10[] = {
	{sKrabbyGfx10, ARRAY_COUNT(sKrabbyGfx10)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_11.4bpp.lz");
static const ax_sprite sKrabbySprites11[] = {
	{sKrabbyGfx11, ARRAY_COUNT(sKrabbyGfx11)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_12.4bpp.lz");
static const ax_sprite sKrabbySprites12[] = {
	{sKrabbyGfx12, ARRAY_COUNT(sKrabbyGfx12)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_13.4bpp.lz");
static const ax_sprite sKrabbySprites13[] = {
	{sKrabbyGfx13, ARRAY_COUNT(sKrabbyGfx13)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_14.4bpp.lz");
static const ax_sprite sKrabbySprites14[] = {
	{sKrabbyGfx14, ARRAY_COUNT(sKrabbyGfx14)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_15.4bpp.lz");
static const ax_sprite sKrabbySprites15[] = {
	{sKrabbyGfx15, ARRAY_COUNT(sKrabbyGfx15)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_16.4bpp.lz");
static const u8 sKrabbyGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_16_1.4bpp.lz");
static const u8 sKrabbyGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_16_2.4bpp.lz");
static const ax_sprite sKrabbySprites16[] = {
	{sKrabbyGfx16, ARRAY_COUNT(sKrabbyGfx16)}, 
	{NULL, 32}, 
	{sKrabbyGfx16_1, ARRAY_COUNT(sKrabbyGfx16_1)}, 
	{NULL, 32}, 
	{sKrabbyGfx16_2, ARRAY_COUNT(sKrabbyGfx16_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_17.4bpp.lz");
static const u8 sKrabbyGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_17_1.4bpp.lz");
static const u8 sKrabbyGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_17_2.4bpp.lz");
static const ax_sprite sKrabbySprites17[] = {
	{sKrabbyGfx17, ARRAY_COUNT(sKrabbyGfx17)}, 
	{NULL, 32}, 
	{sKrabbyGfx17_1, ARRAY_COUNT(sKrabbyGfx17_1)}, 
	{NULL, 32}, 
	{sKrabbyGfx17_2, ARRAY_COUNT(sKrabbyGfx17_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_18.4bpp.lz");
static const u8 sKrabbyGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_18_1.4bpp.lz");
static const u8 sKrabbyGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_18_2.4bpp.lz");
static const u8 sKrabbyGfx18_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_18_3.4bpp.lz");
static const ax_sprite sKrabbySprites18[] = {
	{sKrabbyGfx18, ARRAY_COUNT(sKrabbyGfx18)}, 
	{NULL, 64}, 
	{sKrabbyGfx18_1, ARRAY_COUNT(sKrabbyGfx18_1)}, 
	{NULL, 64}, 
	{sKrabbyGfx18_2, ARRAY_COUNT(sKrabbyGfx18_2)}, 
	{NULL, 64}, 
	{sKrabbyGfx18_3, ARRAY_COUNT(sKrabbyGfx18_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_19.4bpp.lz");
static const u8 sKrabbyGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_19_1.4bpp.lz");
static const u8 sKrabbyGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_19_2.4bpp.lz");
static const ax_sprite sKrabbySprites19[] = {
	{sKrabbyGfx19, ARRAY_COUNT(sKrabbyGfx19)}, 
	{NULL, 32}, 
	{sKrabbyGfx19_1, ARRAY_COUNT(sKrabbyGfx19_1)}, 
	{NULL, 64}, 
	{sKrabbyGfx19_2, ARRAY_COUNT(sKrabbyGfx19_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_20.4bpp.lz");
static const u8 sKrabbyGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_20_1.4bpp.lz");
static const u8 sKrabbyGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_20_2.4bpp.lz");
static const u8 sKrabbyGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_20_3.4bpp.lz");
static const ax_sprite sKrabbySprites20[] = {
	{sKrabbyGfx20, ARRAY_COUNT(sKrabbyGfx20)}, 
	{NULL, 32}, 
	{sKrabbyGfx20_1, ARRAY_COUNT(sKrabbyGfx20_1)}, 
	{NULL, 32}, 
	{sKrabbyGfx20_2, ARRAY_COUNT(sKrabbyGfx20_2)}, 
	{NULL, 32}, 
	{sKrabbyGfx20_3, ARRAY_COUNT(sKrabbyGfx20_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_21.4bpp.lz");
static const ax_sprite sKrabbySprites21[] = {
	{sKrabbyGfx21, ARRAY_COUNT(sKrabbyGfx21)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_22.4bpp.lz");
static const u8 sKrabbyGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_22_1.4bpp.lz");
static const ax_sprite sKrabbySprites22[] = {
	{sKrabbyGfx22, ARRAY_COUNT(sKrabbyGfx22)}, 
	{NULL, 64}, 
	{sKrabbyGfx22_1, ARRAY_COUNT(sKrabbyGfx22_1)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_23.4bpp.lz");
static const u8 sKrabbyGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_23_1.4bpp.lz");
static const ax_sprite sKrabbySprites23[] = {
	{NULL, 128}, 
	{sKrabbyGfx23, ARRAY_COUNT(sKrabbyGfx23)}, 
	{NULL, 32}, 
	{sKrabbyGfx23_1, ARRAY_COUNT(sKrabbyGfx23_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_24.4bpp.lz");
static const u8 sKrabbyGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_24_1.4bpp.lz");
static const u8 sKrabbyGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_24_2.4bpp.lz");
static const u8 sKrabbyGfx24_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_24_3.4bpp.lz");
static const ax_sprite sKrabbySprites24[] = {
	{sKrabbyGfx24, ARRAY_COUNT(sKrabbyGfx24)}, 
	{NULL, 32}, 
	{sKrabbyGfx24_1, ARRAY_COUNT(sKrabbyGfx24_1)}, 
	{NULL, 32}, 
	{sKrabbyGfx24_2, ARRAY_COUNT(sKrabbyGfx24_2)}, 
	{NULL, 64}, 
	{sKrabbyGfx24_3, ARRAY_COUNT(sKrabbyGfx24_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_25.4bpp.lz");
static const u8 sKrabbyGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_25_1.4bpp.lz");
static const u8 sKrabbyGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_25_2.4bpp.lz");
static const ax_sprite sKrabbySprites25[] = {
	{sKrabbyGfx25, ARRAY_COUNT(sKrabbyGfx25)}, 
	{NULL, 32}, 
	{sKrabbyGfx25_1, ARRAY_COUNT(sKrabbyGfx25_1)}, 
	{NULL, 32}, 
	{sKrabbyGfx25_2, ARRAY_COUNT(sKrabbyGfx25_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_26.4bpp.lz");
static const u8 sKrabbyGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_26_1.4bpp.lz");
static const ax_sprite sKrabbySprites26[] = {
	{NULL, 160}, 
	{sKrabbyGfx26, ARRAY_COUNT(sKrabbyGfx26)}, 
	{NULL, 32}, 
	{sKrabbyGfx26_1, ARRAY_COUNT(sKrabbyGfx26_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_27.4bpp.lz");
static const u8 sKrabbyGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_27_1.4bpp.lz");
static const u8 sKrabbyGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_27_2.4bpp.lz");
static const u8 sKrabbyGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_27_3.4bpp.lz");
static const ax_sprite sKrabbySprites27[] = {
	{NULL, 32}, 
	{sKrabbyGfx27, ARRAY_COUNT(sKrabbyGfx27)}, 
	{NULL, 64}, 
	{sKrabbyGfx27_1, ARRAY_COUNT(sKrabbyGfx27_1)}, 
	{NULL, 64}, 
	{sKrabbyGfx27_2, ARRAY_COUNT(sKrabbyGfx27_2)}, 
	{NULL, 64}, 
	{sKrabbyGfx27_3, ARRAY_COUNT(sKrabbyGfx27_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_28.4bpp.lz");
static const u8 sKrabbyGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_28_1.4bpp.lz");
static const u8 sKrabbyGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_28_2.4bpp.lz");
static const ax_sprite sKrabbySprites28[] = {
	{sKrabbyGfx28, ARRAY_COUNT(sKrabbyGfx28)}, 
	{NULL, 32}, 
	{sKrabbyGfx28_1, ARRAY_COUNT(sKrabbyGfx28_1)}, 
	{NULL, 64}, 
	{sKrabbyGfx28_2, ARRAY_COUNT(sKrabbyGfx28_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_29.4bpp.lz");
static const u8 sKrabbyGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_29_1.4bpp.lz");
static const ax_sprite sKrabbySprites29[] = {
	{NULL, 128}, 
	{sKrabbyGfx29, ARRAY_COUNT(sKrabbyGfx29)}, 
	{NULL, 32}, 
	{sKrabbyGfx29_1, ARRAY_COUNT(sKrabbyGfx29_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_30.4bpp.lz");
static const u8 sKrabbyGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_30_1.4bpp.lz");
static const u8 sKrabbyGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_30_2.4bpp.lz");
static const ax_sprite sKrabbySprites30[] = {
	{sKrabbyGfx30, ARRAY_COUNT(sKrabbyGfx30)}, 
	{NULL, 32}, 
	{sKrabbyGfx30_1, ARRAY_COUNT(sKrabbyGfx30_1)}, 
	{NULL, 32}, 
	{sKrabbyGfx30_2, ARRAY_COUNT(sKrabbyGfx30_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_31.4bpp.lz");
static const u8 sKrabbyGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_31_1.4bpp.lz");
static const ax_sprite sKrabbySprites31[] = {
	{sKrabbyGfx31, ARRAY_COUNT(sKrabbyGfx31)}, 
	{NULL, 32}, 
	{sKrabbyGfx31_1, ARRAY_COUNT(sKrabbyGfx31_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_32.4bpp.lz");
static const u8 sKrabbyGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_32_1.4bpp.lz");
static const u8 sKrabbyGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_32_2.4bpp.lz");
static const u8 sKrabbyGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_32_3.4bpp.lz");
static const ax_sprite sKrabbySprites32[] = {
	{sKrabbyGfx32, ARRAY_COUNT(sKrabbyGfx32)}, 
	{NULL, 64}, 
	{sKrabbyGfx32_1, ARRAY_COUNT(sKrabbyGfx32_1)}, 
	{NULL, 32}, 
	{sKrabbyGfx32_2, ARRAY_COUNT(sKrabbyGfx32_2)}, 
	{NULL, 32}, 
	{sKrabbyGfx32_3, ARRAY_COUNT(sKrabbyGfx32_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_33.4bpp.lz");
static const ax_sprite sKrabbySprites33[] = {
	{sKrabbyGfx33, ARRAY_COUNT(sKrabbyGfx33)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_34.4bpp.lz");
static const u8 sKrabbyGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_34_1.4bpp.lz");
static const ax_sprite sKrabbySprites34[] = {
	{sKrabbyGfx34, ARRAY_COUNT(sKrabbyGfx34)}, 
	{NULL, 64}, 
	{sKrabbyGfx34_1, ARRAY_COUNT(sKrabbyGfx34_1)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_35.4bpp.lz");
static const ax_sprite sKrabbySprites35[] = {
	{NULL, 128}, 
	{sKrabbyGfx35, ARRAY_COUNT(sKrabbyGfx35)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_36.4bpp.lz");
static const u8 sKrabbyGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_36_1.4bpp.lz");
static const ax_sprite sKrabbySprites36[] = {
	{NULL, 128}, 
	{sKrabbyGfx36, ARRAY_COUNT(sKrabbyGfx36)}, 
	{NULL, 32}, 
	{sKrabbyGfx36_1, ARRAY_COUNT(sKrabbyGfx36_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_37.4bpp.lz");
static const u8 sKrabbyGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_37_1.4bpp.lz");
static const ax_sprite sKrabbySprites37[] = {
	{NULL, 160}, 
	{sKrabbyGfx37, ARRAY_COUNT(sKrabbyGfx37)}, 
	{NULL, 32}, 
	{sKrabbyGfx37_1, ARRAY_COUNT(sKrabbyGfx37_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_38.4bpp.lz");
static const u8 sKrabbyGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_38_1.4bpp.lz");
static const ax_sprite sKrabbySprites38[] = {
	{NULL, 128}, 
	{sKrabbyGfx38, ARRAY_COUNT(sKrabbyGfx38)}, 
	{NULL, 32}, 
	{sKrabbyGfx38_1, ARRAY_COUNT(sKrabbyGfx38_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_39.4bpp.lz");
static const u8 sKrabbyGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_39_1.4bpp.lz");
static const u8 sKrabbyGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_39_2.4bpp.lz");
static const u8 sKrabbyGfx39_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_39_3.4bpp.lz");
static const ax_sprite sKrabbySprites39[] = {
	{sKrabbyGfx39, ARRAY_COUNT(sKrabbyGfx39)}, 
	{NULL, 64}, 
	{sKrabbyGfx39_1, ARRAY_COUNT(sKrabbyGfx39_1)}, 
	{NULL, 32}, 
	{sKrabbyGfx39_2, ARRAY_COUNT(sKrabbyGfx39_2)}, 
	{NULL, 32}, 
	{sKrabbyGfx39_3, ARRAY_COUNT(sKrabbyGfx39_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_40.4bpp.lz");
static const u8 sKrabbyGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_40_1.4bpp.lz");
static const ax_sprite sKrabbySprites40[] = {
	{NULL, 32}, 
	{sKrabbyGfx40, ARRAY_COUNT(sKrabbyGfx40)}, 
	{NULL, 32}, 
	{sKrabbyGfx40_1, ARRAY_COUNT(sKrabbyGfx40_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_41.4bpp.lz");
static const ax_sprite sKrabbySprites41[] = {
	{sKrabbyGfx41, ARRAY_COUNT(sKrabbyGfx41)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_42.4bpp.lz");
static const ax_sprite sKrabbySprites42[] = {
	{sKrabbyGfx42, ARRAY_COUNT(sKrabbyGfx42)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_43.4bpp.lz");
static const ax_sprite sKrabbySprites43[] = {
	{sKrabbyGfx43, ARRAY_COUNT(sKrabbyGfx43)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_44.4bpp.lz");
static const ax_sprite sKrabbySprites44[] = {
	{sKrabbyGfx44, ARRAY_COUNT(sKrabbyGfx44)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_45.4bpp.lz");
static const ax_sprite sKrabbySprites45[] = {
	{sKrabbyGfx45, ARRAY_COUNT(sKrabbyGfx45)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_46.4bpp.lz");
static const ax_sprite sKrabbySprites46[] = {
	{sKrabbyGfx46, ARRAY_COUNT(sKrabbyGfx46)}, 
	{NULL, 0}
};
static const u8 sKrabbyGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/krabby/sprite_47.4bpp.lz");
static const ax_sprite sKrabbySprites47[] = {
	{sKrabbyGfx47, ARRAY_COUNT(sKrabbyGfx47)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesKrabby[] = {
	sKrabbyPose1,
	sKrabbyPose2,
	sKrabbyPose3,
	sKrabbyPose4,
	sKrabbyPose5,
	sKrabbyPose6,
	sKrabbyPose7,
	sKrabbyPose8,
	sKrabbyPose9,
	sKrabbyPose10,
	sKrabbyPose11,
	sKrabbyPose12,
	sKrabbyPose13,
	sKrabbyPose14,
	sKrabbyPose15,
	sKrabbyPose16,
	sKrabbyPose17,
	sKrabbyPose18,
	sKrabbyPose19,
	sKrabbyPose20,
	sKrabbyPose21,
	sKrabbyPose22,
	sKrabbyPose23,
	sKrabbyPose24,
	sKrabbyPose1,
	sKrabbyPose2,
	sKrabbyPose3,
	sKrabbyPose28,
	sKrabbyPose29,
	sKrabbyPose30,
	sKrabbyPose31,
	sKrabbyPose32,
	sKrabbyPose33,
	sKrabbyPose34,
	sKrabbyPose35,
	sKrabbyPose19,
	sKrabbyPose16,
	sKrabbyPose13,
	sKrabbyPose10,
	sKrabbyPose7,
	sKrabbyPose4,
	sKrabbyPose1,
	sKrabbyPose22,
	sKrabbyPose4,
	sKrabbyPose5,
	sKrabbyPose6,
	sKrabbyPose28,
	sKrabbyPose29,
	sKrabbyPose30,
	sKrabbyPose31,
	sKrabbyPose32,
	sKrabbyPose33,
	sKrabbyPose34,
	sKrabbyPose35,
	sKrabbyPose19,
	sKrabbyPose16,
	sKrabbyPose13,
	sKrabbyPose10,
	sKrabbyPose7,
	sKrabbyPose4,
	sKrabbyPose1,
	sKrabbyPose22,
	sKrabbyPose7,
	sKrabbyPose8,
	sKrabbyPose9,
	sKrabbyPose28,
	sKrabbyPose29,
	sKrabbyPose30,
	sKrabbyPose31,
	sKrabbyPose32,
	sKrabbyPose33,
	sKrabbyPose34,
	sKrabbyPose35,
	sKrabbyPose19,
	sKrabbyPose16,
	sKrabbyPose13,
	sKrabbyPose10,
	sKrabbyPose7,
	sKrabbyPose4,
	sKrabbyPose1,
	sKrabbyPose22,
	sKrabbyPose10,
	sKrabbyPose11,
	sKrabbyPose12,
	sKrabbyPose28,
	sKrabbyPose29,
	sKrabbyPose30,
	sKrabbyPose31,
	sKrabbyPose32,
	sKrabbyPose33,
	sKrabbyPose34,
	sKrabbyPose35,
	sKrabbyPose19,
	sKrabbyPose16,
	sKrabbyPose13,
	sKrabbyPose10,
	sKrabbyPose7,
	sKrabbyPose4,
	sKrabbyPose1,
	sKrabbyPose22,
	sKrabbyPose13,
	sKrabbyPose14,
	sKrabbyPose15,
	sKrabbyPose28,
	sKrabbyPose29,
	sKrabbyPose30,
	sKrabbyPose31,
	sKrabbyPose32,
	sKrabbyPose33,
	sKrabbyPose34,
	sKrabbyPose35,
	sKrabbyPose19,
	sKrabbyPose16,
	sKrabbyPose13,
	sKrabbyPose10,
	sKrabbyPose7,
	sKrabbyPose4,
	sKrabbyPose1,
	sKrabbyPose22,
	sKrabbyPose16,
	sKrabbyPose17,
	sKrabbyPose18,
	sKrabbyPose28,
	sKrabbyPose29,
	sKrabbyPose30,
	sKrabbyPose31,
	sKrabbyPose32,
	sKrabbyPose33,
	sKrabbyPose34,
	sKrabbyPose35,
	sKrabbyPose19,
	sKrabbyPose16,
	sKrabbyPose13,
	sKrabbyPose10,
	sKrabbyPose7,
	sKrabbyPose4,
	sKrabbyPose1,
	sKrabbyPose22,
	sKrabbyPose19,
	sKrabbyPose20,
	sKrabbyPose21,
	sKrabbyPose28,
	sKrabbyPose29,
	sKrabbyPose30,
	sKrabbyPose31,
	sKrabbyPose32,
	sKrabbyPose33,
	sKrabbyPose34,
	sKrabbyPose35,
	sKrabbyPose19,
	sKrabbyPose16,
	sKrabbyPose13,
	sKrabbyPose10,
	sKrabbyPose7,
	sKrabbyPose4,
	sKrabbyPose1,
	sKrabbyPose22,
	sKrabbyPose22,
	sKrabbyPose23,
	sKrabbyPose24,
	sKrabbyPose28,
	sKrabbyPose29,
	sKrabbyPose30,
	sKrabbyPose31,
	sKrabbyPose32,
	sKrabbyPose33,
	sKrabbyPose34,
	sKrabbyPose35,
	sKrabbyPose19,
	sKrabbyPose16,
	sKrabbyPose13,
	sKrabbyPose10,
	sKrabbyPose7,
	sKrabbyPose4,
	sKrabbyPose1,
	sKrabbyPose22,
	sKrabbyPose19,
	sKrabbyPose178,
	sKrabbyPose179,
	sKrabbyPose180,
	sKrabbyPose22,
	sKrabbyPose182,
	sKrabbyPose183,
	sKrabbyPose184,
	sKrabbyPose1,
	sKrabbyPose186,
	sKrabbyPose187,
	sKrabbyPose188,
	sKrabbyPose4,
	sKrabbyPose190,
	sKrabbyPose191,
	sKrabbyPose192,
	sKrabbyPose7,
	sKrabbyPose194,
	sKrabbyPose195,
	sKrabbyPose196,
	sKrabbyPose10,
	sKrabbyPose198,
	sKrabbyPose199,
	sKrabbyPose200,
	sKrabbyPose13,
	sKrabbyPose202,
	sKrabbyPose203,
	sKrabbyPose204,
	sKrabbyPose16,
	sKrabbyPose206,
	sKrabbyPose207,
	sKrabbyPose208,
	sKrabbyPose19,
	sKrabbyPose178,
	sKrabbyPose211,
	sKrabbyPose22,
	sKrabbyPose182,
	sKrabbyPose214,
	sKrabbyPose1,
	sKrabbyPose186,
	sKrabbyPose217,
	sKrabbyPose4,
	sKrabbyPose190,
	sKrabbyPose220,
	sKrabbyPose7,
	sKrabbyPose222,
	sKrabbyPose223,
	sKrabbyPose10,
	sKrabbyPose198,
	sKrabbyPose226,
	sKrabbyPose13,
	sKrabbyPose202,
	sKrabbyPose229,
	sKrabbyPose16,
	sKrabbyPose206,
	sKrabbyPose232,
	sKrabbyPose19,
	sKrabbyPose16,
	sKrabbyPose13,
	sKrabbyPose10,
	sKrabbyPose7,
	sKrabbyPose4,
	sKrabbyPose1,
	sKrabbyPose22,
	sKrabbyPose241,
	sKrabbyPose242,
	sKrabbyPose243,
	sKrabbyPose244,
	sKrabbyPose245,
	sKrabbyPose246,
	sKrabbyPose247,
	sKrabbyPose248,
	sKrabbyPose249,
	sKrabbyPose250,
	sKrabbyPose19,
	sKrabbyPose178,
	sKrabbyPose179,
	sKrabbyPose180,
	sKrabbyPose22,
	sKrabbyPose182,
	sKrabbyPose183,
	sKrabbyPose184,
	sKrabbyPose1,
	sKrabbyPose186,
	sKrabbyPose187,
	sKrabbyPose188,
	sKrabbyPose4,
	sKrabbyPose190,
	sKrabbyPose191,
	sKrabbyPose192,
	sKrabbyPose7,
	sKrabbyPose194,
	sKrabbyPose195,
	sKrabbyPose196,
	sKrabbyPose10,
	sKrabbyPose198,
	sKrabbyPose199,
	sKrabbyPose200,
	sKrabbyPose13,
	sKrabbyPose202,
	sKrabbyPose203,
	sKrabbyPose204,
	sKrabbyPose16,
	sKrabbyPose206,
	sKrabbyPose207,
	sKrabbyPose208,
	sKrabbyPose211,
	sKrabbyPose232,
	sKrabbyPose285,
	sKrabbyPose286,
	sKrabbyPose287,
	sKrabbyPose288,
	sKrabbyPose289,
	sKrabbyPose214,
	sKrabbyPose28,
	sKrabbyPose292,
	sKrabbyPose293,
	sKrabbyPose294,
	sKrabbyPose295,
	sKrabbyPose296,
	sKrabbyPose297,
	sKrabbyPose298,
	sKrabbyPose19,
	sKrabbyPose178,
	sKrabbyPose211,
	sKrabbyPose22,
	sKrabbyPose182,
	sKrabbyPose304,
	sKrabbyPose1,
	sKrabbyPose186,
	sKrabbyPose307,
	sKrabbyPose4,
	sKrabbyPose190,
	sKrabbyPose220,
	sKrabbyPose7,
	sKrabbyPose222,
	sKrabbyPose223,
	sKrabbyPose10,
	sKrabbyPose198,
	sKrabbyPose226,
	sKrabbyPose13,
	sKrabbyPose202,
	sKrabbyPose319,
	sKrabbyPose16,
	sKrabbyPose206,
	sKrabbyPose322,
	sKrabbyPose211,
	sKrabbyPose232,
	sKrabbyPose285,
	sKrabbyPose286,
	sKrabbyPose287,
	sKrabbyPose288,
	sKrabbyPose289,
	sKrabbyPose214,
	sKrabbyPose19,
	sKrabbyPose16,
	sKrabbyPose13,
	sKrabbyPose10,
	sKrabbyPose7,
	sKrabbyPose4,
	sKrabbyPose1,
	sKrabbyPose22,
};

static const struct PositionSets sAxPositionsKrabby[] = {
	[0] = { .set = { {4, -6}, {5, -14}, {6, -6}, {-1, -5} } },
	[1] = { .set = { {4, -5}, {4, -12}, {6, -4}, {-1, -4} } },
	[2] = { .set = { {4, -5}, {4, -12}, {6, -3}, {-1, -4} } },
	[3] = { .set = { {2, -7}, {0, -13}, {8, -9}, {0, -5} } },
	[4] = { .set = { {2, -6}, {0, -13}, {7, -8}, {0, -4} } },
	[5] = { .set = { {3, -6}, {1, -12}, {8, -7}, {0, -4} } },
	[6] = { .set = { {0, -8}, {6, -14}, {-7, -14}, {0, -5} } },
	[7] = { .set = { {0, -7}, {7, -13}, {-7, -13}, {0, -5} } },
	[8] = { .set = { {0, -7}, {6, -12}, {-8, -12}, {0, -5} } },
	[9] = { .set = { {-3, -7}, {-1, -13}, {-9, -9}, {-1, -5} } },
	[10] = { .set = { {-3, -6}, {-1, -13}, {-8, -8}, {-1, -4} } },
	[11] = { .set = { {-4, -6}, {-2, -12}, {-9, -7}, {-1, -4} } },
	[12] = { .set = { {-5, -6}, {-6, -14}, {-7, -6}, {0, -5} } },
	[13] = { .set = { {-5, -5}, {-5, -12}, {-7, -4}, {0, -4} } },
	[14] = { .set = { {-5, -5}, {-5, -12}, {-7, -3}, {0, -4} } },
	[15] = { .set = { {-2, -3}, {-6, -13}, {3, -9}, {0, -5} } },
	[16] = { .set = { {-2, -2}, {-7, -11}, {2, -8}, {0, -4} } },
	[17] = { .set = { {-2, -2}, {-6, -11}, {4, -7}, {0, -3} } },
	[18] = { .set = { {0, -3}, {-7, -12}, {6, -12}, {0, -6} } },
	[19] = { .set = { {0, -2}, {-7, -10}, {6, -10}, {0, -5} } },
	[20] = { .set = { {0, -2}, {-6, -11}, {6, -11}, {0, -5} } },
	[21] = { .set = { {1, -3}, {5, -13}, {-4, -9}, {-1, -5} } },
	[22] = { .set = { {1, -2}, {6, -11}, {-3, -8}, {-1, -4} } },
	[23] = { .set = { {1, -2}, {5, -11}, {-5, -7}, {-1, -3} } },
	[24] = { .set = { {4, -6}, {5, -14}, {6, -6}, {-1, -5} } },
	[25] = { .set = { {4, -5}, {4, -12}, {6, -4}, {-1, -4} } },
	[26] = { .set = { {4, -5}, {4, -12}, {6, -3}, {-1, -4} } },
	[27] = { .set = { {-1, -8}, {-7, -18}, {5, -17}, {0, -9} } },
	[28] = { .set = { {-2, -9}, {-6, -19}, {4, -15}, {-1, -9} } },
	[29] = { .set = { {-3, -14}, {-3, -22}, {-7, -15}, {0, -10} } },
	[30] = { .set = { {-5, -11}, {-1, -21}, {-9, -16}, {-1, -9} } },
	[31] = { .set = { {0, -13}, {7, -21}, {-7, -20}, {-1, -10} } },
	[32] = { .set = { {3, -11}, {-1, -21}, {7, -16}, {-1, -9} } },
	[33] = { .set = { {2, -14}, {2, -22}, {6, -15}, {-1, -10} } },
	[34] = { .set = { {1, -9}, {5, -19}, {-5, -15}, {0, -9} } },
	[35] = { .set = { {0, -3}, {-7, -12}, {6, -12}, {0, -6} } },
	[36] = { .set = { {-2, -3}, {-6, -13}, {3, -9}, {0, -5} } },
	[37] = { .set = { {-5, -6}, {-6, -14}, {-7, -6}, {0, -5} } },
	[38] = { .set = { {-3, -7}, {-1, -13}, {-9, -9}, {-1, -5} } },
	[39] = { .set = { {0, -8}, {6, -14}, {-7, -14}, {0, -5} } },
	[40] = { .set = { {2, -7}, {0, -13}, {8, -9}, {0, -5} } },
	[41] = { .set = { {4, -6}, {5, -14}, {6, -6}, {-1, -5} } },
	[42] = { .set = { {1, -3}, {5, -13}, {-4, -9}, {-1, -5} } },
	[43] = { .set = { {2, -7}, {0, -13}, {8, -9}, {0, -5} } },
	[44] = { .set = { {2, -6}, {0, -13}, {7, -8}, {0, -4} } },
	[45] = { .set = { {3, -6}, {1, -12}, {8, -7}, {0, -4} } },
	[46] = { .set = { {-1, -8}, {-7, -18}, {5, -17}, {0, -9} } },
	[47] = { .set = { {-2, -9}, {-6, -19}, {4, -15}, {-1, -9} } },
	[48] = { .set = { {-3, -14}, {-3, -22}, {-7, -15}, {0, -10} } },
	[49] = { .set = { {-5, -11}, {-1, -21}, {-9, -16}, {-1, -9} } },
	[50] = { .set = { {0, -13}, {7, -21}, {-7, -20}, {-1, -10} } },
	[51] = { .set = { {3, -11}, {-1, -21}, {7, -16}, {-1, -9} } },
	[52] = { .set = { {2, -14}, {2, -22}, {6, -15}, {-1, -10} } },
	[53] = { .set = { {1, -9}, {5, -19}, {-5, -15}, {0, -9} } },
	[54] = { .set = { {0, -3}, {-7, -12}, {6, -12}, {0, -6} } },
	[55] = { .set = { {-2, -3}, {-6, -13}, {3, -9}, {0, -5} } },
	[56] = { .set = { {-5, -6}, {-6, -14}, {-7, -6}, {0, -5} } },
	[57] = { .set = { {-3, -7}, {-1, -13}, {-9, -9}, {-1, -5} } },
	[58] = { .set = { {0, -8}, {6, -14}, {-7, -14}, {0, -5} } },
	[59] = { .set = { {2, -7}, {0, -13}, {8, -9}, {0, -5} } },
	[60] = { .set = { {4, -6}, {5, -14}, {6, -6}, {-1, -5} } },
	[61] = { .set = { {1, -3}, {5, -13}, {-4, -9}, {-1, -5} } },
	[62] = { .set = { {0, -8}, {6, -14}, {-7, -14}, {0, -5} } },
	[63] = { .set = { {0, -7}, {7, -13}, {-7, -13}, {0, -5} } },
	[64] = { .set = { {0, -7}, {6, -12}, {-8, -12}, {0, -5} } },
	[65] = { .set = { {-1, -8}, {-7, -18}, {5, -17}, {0, -9} } },
	[66] = { .set = { {-2, -9}, {-6, -19}, {4, -15}, {-1, -9} } },
	[67] = { .set = { {-3, -14}, {-3, -22}, {-7, -15}, {0, -10} } },
	[68] = { .set = { {-5, -11}, {-1, -21}, {-9, -16}, {-1, -9} } },
	[69] = { .set = { {0, -13}, {7, -21}, {-7, -20}, {-1, -10} } },
	[70] = { .set = { {3, -11}, {-1, -21}, {7, -16}, {-1, -9} } },
	[71] = { .set = { {2, -14}, {2, -22}, {6, -15}, {-1, -10} } },
	[72] = { .set = { {1, -9}, {5, -19}, {-5, -15}, {0, -9} } },
	[73] = { .set = { {0, -3}, {-7, -12}, {6, -12}, {0, -6} } },
	[74] = { .set = { {-2, -3}, {-6, -13}, {3, -9}, {0, -5} } },
	[75] = { .set = { {-5, -6}, {-6, -14}, {-7, -6}, {0, -5} } },
	[76] = { .set = { {-3, -7}, {-1, -13}, {-9, -9}, {-1, -5} } },
	[77] = { .set = { {0, -8}, {6, -14}, {-7, -14}, {0, -5} } },
	[78] = { .set = { {2, -7}, {0, -13}, {8, -9}, {0, -5} } },
	[79] = { .set = { {4, -6}, {5, -14}, {6, -6}, {-1, -5} } },
	[80] = { .set = { {1, -3}, {5, -13}, {-4, -9}, {-1, -5} } },
	[81] = { .set = { {-3, -7}, {-1, -13}, {-9, -9}, {-1, -5} } },
	[82] = { .set = { {-3, -6}, {-1, -13}, {-8, -8}, {-1, -4} } },
	[83] = { .set = { {-4, -6}, {-2, -12}, {-9, -7}, {-1, -4} } },
	[84] = { .set = { {-1, -8}, {-7, -18}, {5, -17}, {0, -9} } },
	[85] = { .set = { {-2, -9}, {-6, -19}, {4, -15}, {-1, -9} } },
	[86] = { .set = { {-3, -14}, {-3, -22}, {-7, -15}, {0, -10} } },
	[87] = { .set = { {-5, -11}, {-1, -21}, {-9, -16}, {-1, -9} } },
	[88] = { .set = { {0, -13}, {7, -21}, {-7, -20}, {-1, -10} } },
	[89] = { .set = { {3, -11}, {-1, -21}, {7, -16}, {-1, -9} } },
	[90] = { .set = { {2, -14}, {2, -22}, {6, -15}, {-1, -10} } },
	[91] = { .set = { {1, -9}, {5, -19}, {-5, -15}, {0, -9} } },
	[92] = { .set = { {0, -3}, {-7, -12}, {6, -12}, {0, -6} } },
	[93] = { .set = { {-2, -3}, {-6, -13}, {3, -9}, {0, -5} } },
	[94] = { .set = { {-5, -6}, {-6, -14}, {-7, -6}, {0, -5} } },
	[95] = { .set = { {-3, -7}, {-1, -13}, {-9, -9}, {-1, -5} } },
	[96] = { .set = { {0, -8}, {6, -14}, {-7, -14}, {0, -5} } },
	[97] = { .set = { {2, -7}, {0, -13}, {8, -9}, {0, -5} } },
	[98] = { .set = { {4, -6}, {5, -14}, {6, -6}, {-1, -5} } },
	[99] = { .set = { {1, -3}, {5, -13}, {-4, -9}, {-1, -5} } },
	[100] = { .set = { {-5, -6}, {-6, -14}, {-7, -6}, {0, -5} } },
	[101] = { .set = { {-5, -5}, {-5, -12}, {-7, -4}, {0, -4} } },
	[102] = { .set = { {-5, -5}, {-5, -12}, {-7, -3}, {0, -4} } },
	[103] = { .set = { {-1, -8}, {-7, -18}, {5, -17}, {0, -9} } },
	[104] = { .set = { {-2, -9}, {-6, -19}, {4, -15}, {-1, -9} } },
	[105] = { .set = { {-3, -14}, {-3, -22}, {-7, -15}, {0, -10} } },
	[106] = { .set = { {-5, -11}, {-1, -21}, {-9, -16}, {-1, -9} } },
	[107] = { .set = { {0, -13}, {7, -21}, {-7, -20}, {-1, -10} } },
	[108] = { .set = { {3, -11}, {-1, -21}, {7, -16}, {-1, -9} } },
	[109] = { .set = { {2, -14}, {2, -22}, {6, -15}, {-1, -10} } },
	[110] = { .set = { {1, -9}, {5, -19}, {-5, -15}, {0, -9} } },
	[111] = { .set = { {0, -3}, {-7, -12}, {6, -12}, {0, -6} } },
	[112] = { .set = { {-2, -3}, {-6, -13}, {3, -9}, {0, -5} } },
	[113] = { .set = { {-5, -6}, {-6, -14}, {-7, -6}, {0, -5} } },
	[114] = { .set = { {-3, -7}, {-1, -13}, {-9, -9}, {-1, -5} } },
	[115] = { .set = { {0, -8}, {6, -14}, {-7, -14}, {0, -5} } },
	[116] = { .set = { {2, -7}, {0, -13}, {8, -9}, {0, -5} } },
	[117] = { .set = { {4, -6}, {5, -14}, {6, -6}, {-1, -5} } },
	[118] = { .set = { {1, -3}, {5, -13}, {-4, -9}, {-1, -5} } },
	[119] = { .set = { {-2, -3}, {-6, -13}, {3, -9}, {0, -5} } },
	[120] = { .set = { {-2, -2}, {-7, -11}, {2, -8}, {0, -4} } },
	[121] = { .set = { {-2, -2}, {-6, -11}, {4, -7}, {0, -3} } },
	[122] = { .set = { {-1, -8}, {-7, -18}, {5, -17}, {0, -9} } },
	[123] = { .set = { {-2, -9}, {-6, -19}, {4, -15}, {-1, -9} } },
	[124] = { .set = { {-3, -14}, {-3, -22}, {-7, -15}, {0, -10} } },
	[125] = { .set = { {-5, -11}, {-1, -21}, {-9, -16}, {-1, -9} } },
	[126] = { .set = { {0, -13}, {7, -21}, {-7, -20}, {-1, -10} } },
	[127] = { .set = { {3, -11}, {-1, -21}, {7, -16}, {-1, -9} } },
	[128] = { .set = { {2, -14}, {2, -22}, {6, -15}, {-1, -10} } },
	[129] = { .set = { {1, -9}, {5, -19}, {-5, -15}, {0, -9} } },
	[130] = { .set = { {0, -3}, {-7, -12}, {6, -12}, {0, -6} } },
	[131] = { .set = { {-2, -3}, {-6, -13}, {3, -9}, {0, -5} } },
	[132] = { .set = { {-5, -6}, {-6, -14}, {-7, -6}, {0, -5} } },
	[133] = { .set = { {-3, -7}, {-1, -13}, {-9, -9}, {-1, -5} } },
	[134] = { .set = { {0, -8}, {6, -14}, {-7, -14}, {0, -5} } },
	[135] = { .set = { {2, -7}, {0, -13}, {8, -9}, {0, -5} } },
	[136] = { .set = { {4, -6}, {5, -14}, {6, -6}, {-1, -5} } },
	[137] = { .set = { {1, -3}, {5, -13}, {-4, -9}, {-1, -5} } },
	[138] = { .set = { {0, -3}, {-7, -12}, {6, -12}, {0, -6} } },
	[139] = { .set = { {0, -2}, {-7, -10}, {6, -10}, {0, -5} } },
	[140] = { .set = { {0, -2}, {-6, -11}, {6, -11}, {0, -5} } },
	[141] = { .set = { {-1, -8}, {-7, -18}, {5, -17}, {0, -9} } },
	[142] = { .set = { {-2, -9}, {-6, -19}, {4, -15}, {-1, -9} } },
	[143] = { .set = { {-3, -14}, {-3, -22}, {-7, -15}, {0, -10} } },
	[144] = { .set = { {-5, -11}, {-1, -21}, {-9, -16}, {-1, -9} } },
	[145] = { .set = { {0, -13}, {7, -21}, {-7, -20}, {-1, -10} } },
	[146] = { .set = { {3, -11}, {-1, -21}, {7, -16}, {-1, -9} } },
	[147] = { .set = { {2, -14}, {2, -22}, {6, -15}, {-1, -10} } },
	[148] = { .set = { {1, -9}, {5, -19}, {-5, -15}, {0, -9} } },
	[149] = { .set = { {0, -3}, {-7, -12}, {6, -12}, {0, -6} } },
	[150] = { .set = { {-2, -3}, {-6, -13}, {3, -9}, {0, -5} } },
	[151] = { .set = { {-5, -6}, {-6, -14}, {-7, -6}, {0, -5} } },
	[152] = { .set = { {-3, -7}, {-1, -13}, {-9, -9}, {-1, -5} } },
	[153] = { .set = { {0, -8}, {6, -14}, {-7, -14}, {0, -5} } },
	[154] = { .set = { {2, -7}, {0, -13}, {8, -9}, {0, -5} } },
	[155] = { .set = { {4, -6}, {5, -14}, {6, -6}, {-1, -5} } },
	[156] = { .set = { {1, -3}, {5, -13}, {-4, -9}, {-1, -5} } },
	[157] = { .set = { {1, -3}, {5, -13}, {-4, -9}, {-1, -5} } },
	[158] = { .set = { {1, -2}, {6, -11}, {-3, -8}, {-1, -4} } },
	[159] = { .set = { {1, -2}, {5, -11}, {-5, -7}, {-1, -3} } },
	[160] = { .set = { {-1, -8}, {-7, -18}, {5, -17}, {0, -9} } },
	[161] = { .set = { {-2, -9}, {-6, -19}, {4, -15}, {-1, -9} } },
	[162] = { .set = { {-3, -14}, {-3, -22}, {-7, -15}, {0, -10} } },
	[163] = { .set = { {-5, -11}, {-1, -21}, {-9, -16}, {-1, -9} } },
	[164] = { .set = { {0, -13}, {7, -21}, {-7, -20}, {-1, -10} } },
	[165] = { .set = { {3, -11}, {-1, -21}, {7, -16}, {-1, -9} } },
	[166] = { .set = { {2, -14}, {2, -22}, {6, -15}, {-1, -10} } },
	[167] = { .set = { {1, -9}, {5, -19}, {-5, -15}, {0, -9} } },
	[168] = { .set = { {0, -3}, {-7, -12}, {6, -12}, {0, -6} } },
	[169] = { .set = { {-2, -3}, {-6, -13}, {3, -9}, {0, -5} } },
	[170] = { .set = { {-5, -6}, {-6, -14}, {-7, -6}, {0, -5} } },
	[171] = { .set = { {-3, -7}, {-1, -13}, {-9, -9}, {-1, -5} } },
	[172] = { .set = { {0, -8}, {6, -14}, {-7, -14}, {0, -5} } },
	[173] = { .set = { {2, -7}, {0, -13}, {8, -9}, {0, -5} } },
	[174] = { .set = { {4, -6}, {5, -14}, {6, -6}, {-1, -5} } },
	[175] = { .set = { {1, -3}, {5, -13}, {-4, -9}, {-1, -5} } },
	[176] = { .set = { {0, -3}, {-7, -12}, {6, -12}, {0, -6} } },
	[177] = { .set = { {-1, -9}, {-7, -17}, {6, -17}, {0, -10} } },
	[178] = { .set = { {0, 1}, {-5, 6}, {4, 6}, {0, -1} } },
	[179] = { .set = { {0, 1}, {-5, 6}, {4, 6}, {0, -1} } },
	[180] = { .set = { {1, -3}, {5, -13}, {-4, -9}, {-1, -5} } },
	[181] = { .set = { {1, -10}, {3, -19}, {-8, -14}, {-1, -10} } },
	[182] = { .set = { {1, -1}, {8, 2}, {2, 5}, {-1, -3} } },
	[183] = { .set = { {1, -1}, {8, 2}, {2, 5}, {-1, -3} } },
	[184] = { .set = { {4, -6}, {5, -14}, {6, -6}, {-1, -5} } },
	[185] = { .set = { {0, -10}, {-1, -18}, {-4, -14}, {-2, -7} } },
	[186] = { .set = { {6, -4}, {13, -5}, {12, -1}, {0, -4} } },
	[187] = { .set = { {6, -4}, {13, -5}, {12, -1}, {0, -4} } },
	[188] = { .set = { {2, -7}, {0, -13}, {8, -9}, {0, -5} } },
	[189] = { .set = { {3, -9}, {-8, -17}, {5, -14}, {-1, -7} } },
	[190] = { .set = { {4, -7}, {4, -14}, {9, -11}, {0, -5} } },
	[191] = { .set = { {4, -7}, {4, -14}, {9, -11}, {0, -5} } },
	[192] = { .set = { {0, -8}, {6, -14}, {-7, -14}, {0, -5} } },
	[193] = { .set = { {0, -14}, {8, -18}, {-8, -18}, {-1, -10} } },
	[194] = { .set = { {0, -9}, {2, -12}, {-3, -11}, {0, -7} } },
	[195] = { .set = { {0, -9}, {2, -12}, {-3, -11}, {0, -7} } },
	[196] = { .set = { {-3, -7}, {-1, -13}, {-9, -9}, {-1, -5} } },
	[197] = { .set = { {-4, -9}, {7, -17}, {-6, -14}, {0, -7} } },
	[198] = { .set = { {-5, -7}, {-5, -14}, {-10, -11}, {-1, -5} } },
	[199] = { .set = { {-5, -7}, {-5, -14}, {-10, -11}, {-1, -5} } },
	[200] = { .set = { {-5, -6}, {-6, -14}, {-7, -6}, {0, -5} } },
	[201] = { .set = { {-1, -10}, {0, -18}, {3, -14}, {1, -7} } },
	[202] = { .set = { {-7, -4}, {-14, -5}, {-13, -1}, {-1, -4} } },
	[203] = { .set = { {-7, -4}, {-14, -5}, {-13, -1}, {-1, -4} } },
	[204] = { .set = { {-2, -3}, {-6, -13}, {3, -9}, {0, -5} } },
	[205] = { .set = { {-2, -10}, {-4, -19}, {7, -14}, {0, -10} } },
	[206] = { .set = { {-2, -1}, {-9, 2}, {-3, 5}, {0, -3} } },
	[207] = { .set = { {-2, -1}, {-9, 2}, {-3, 5}, {0, -3} } },
	[208] = { .set = { {0, -3}, {-7, -12}, {6, -12}, {0, -6} } },
	[209] = { .set = { {-1, -9}, {-7, -17}, {6, -17}, {0, -10} } },
	[210] = { .set = { {0, -2}, {-8, 2}, {7, 2}, {0, -3} } },
	[211] = { .set = { {1, -3}, {5, -13}, {-4, -9}, {-1, -5} } },
	[212] = { .set = { {1, -10}, {3, -19}, {-8, -14}, {-1, -10} } },
	[213] = { .set = { {1, -2}, {10, -4}, {-1, 1}, {0, -4} } },
	[214] = { .set = { {4, -6}, {5, -14}, {6, -6}, {-1, -5} } },
	[215] = { .set = { {0, -10}, {-1, -18}, {-4, -14}, {-2, -7} } },
	[216] = { .set = { {6, -4}, {12, -8}, {12, -2}, {0, -4} } },
	[217] = { .set = { {2, -7}, {0, -13}, {8, -9}, {0, -5} } },
	[218] = { .set = { {3, -9}, {-8, -17}, {5, -14}, {-1, -7} } },
	[219] = { .set = { {4, -7}, {3, -15}, {10, -11}, {0, -6} } },
	[220] = { .set = { {0, -8}, {6, -14}, {-7, -14}, {0, -5} } },
	[221] = { .set = { {0, -13}, {8, -17}, {-8, -17}, {-1, -9} } },
	[222] = { .set = { {0, -9}, {6, -12}, {-7, -12}, {-1, -6} } },
	[223] = { .set = { {-3, -7}, {-1, -13}, {-9, -9}, {-1, -5} } },
	[224] = { .set = { {-4, -9}, {7, -17}, {-6, -14}, {0, -7} } },
	[225] = { .set = { {-5, -7}, {-4, -15}, {-11, -11}, {-1, -6} } },
	[226] = { .set = { {-5, -6}, {-6, -14}, {-7, -6}, {0, -5} } },
	[227] = { .set = { {-1, -10}, {0, -18}, {3, -14}, {1, -7} } },
	[228] = { .set = { {-7, -4}, {-13, -8}, {-13, -2}, {-1, -4} } },
	[229] = { .set = { {-2, -3}, {-6, -13}, {3, -9}, {0, -5} } },
	[230] = { .set = { {-2, -10}, {-4, -19}, {7, -14}, {0, -10} } },
	[231] = { .set = { {-2, -2}, {-11, -4}, {0, 1}, {-1, -4} } },
	[232] = { .set = { {0, -3}, {-7, -12}, {6, -12}, {0, -6} } },
	[233] = { .set = { {-2, -3}, {-6, -13}, {3, -9}, {0, -5} } },
	[234] = { .set = { {-5, -6}, {-6, -14}, {-7, -6}, {0, -5} } },
	[235] = { .set = { {-3, -7}, {-1, -13}, {-9, -9}, {-1, -5} } },
	[236] = { .set = { {0, -8}, {6, -14}, {-7, -14}, {0, -5} } },
	[237] = { .set = { {2, -7}, {0, -13}, {8, -9}, {0, -5} } },
	[238] = { .set = { {4, -6}, {5, -14}, {6, -6}, {-1, -5} } },
	[239] = { .set = { {1, -3}, {5, -13}, {-4, -9}, {-1, -5} } },
	[240] = { .set = { {-2, -3}, {-7, -3}, {2, 0}, {0, -5} } },
	[241] = { .set = { {-2, -2}, {-7, -2}, {1, 1}, {0, -3} } },
	[242] = { .set = { {0, -1}, {-6, 5}, {5, 5}, {0, -4} } },
	[243] = { .set = { {1, -1}, {9, 4}, {1, 9}, {0, -4} } },
	[244] = { .set = { {2, -4}, {8, -6}, {8, 3}, {-1, -4} } },
	[245] = { .set = { {2, -4}, {4, -11}, {10, -5}, {-2, -3} } },
	[246] = { .set = { {0, -5}, {5, -14}, {-6, -14}, {0, -3} } },
	[247] = { .set = { {-3, -4}, {-5, -11}, {-11, -5}, {1, -3} } },
	[248] = { .set = { {-3, -4}, {-9, -6}, {-9, 3}, {0, -4} } },
	[249] = { .set = { {-2, -1}, {-10, 4}, {-2, 9}, {-1, -4} } },
	[250] = { .set = { {0, -3}, {-7, -12}, {6, -12}, {0, -6} } },
	[251] = { .set = { {-1, -9}, {-7, -17}, {6, -17}, {0, -10} } },
	[252] = { .set = { {0, 1}, {-5, 6}, {4, 6}, {0, -1} } },
	[253] = { .set = { {0, 1}, {-5, 6}, {4, 6}, {0, -1} } },
	[254] = { .set = { {1, -3}, {5, -13}, {-4, -9}, {-1, -5} } },
	[255] = { .set = { {1, -10}, {3, -19}, {-8, -14}, {-1, -10} } },
	[256] = { .set = { {1, -1}, {8, 2}, {2, 5}, {-1, -3} } },
	[257] = { .set = { {1, -1}, {8, 2}, {2, 5}, {-1, -3} } },
	[258] = { .set = { {4, -6}, {5, -14}, {6, -6}, {-1, -5} } },
	[259] = { .set = { {0, -10}, {-1, -18}, {-4, -14}, {-2, -7} } },
	[260] = { .set = { {6, -4}, {13, -5}, {12, -1}, {0, -4} } },
	[261] = { .set = { {6, -4}, {13, -5}, {12, -1}, {0, -4} } },
	[262] = { .set = { {2, -7}, {0, -13}, {8, -9}, {0, -5} } },
	[263] = { .set = { {3, -9}, {-8, -17}, {5, -14}, {-1, -7} } },
	[264] = { .set = { {4, -7}, {4, -14}, {9, -11}, {0, -5} } },
	[265] = { .set = { {4, -7}, {4, -14}, {9, -11}, {0, -5} } },
	[266] = { .set = { {0, -8}, {6, -14}, {-7, -14}, {0, -5} } },
	[267] = { .set = { {0, -14}, {8, -18}, {-8, -18}, {-1, -10} } },
	[268] = { .set = { {0, -9}, {2, -12}, {-3, -11}, {0, -7} } },
	[269] = { .set = { {0, -9}, {2, -12}, {-3, -11}, {0, -7} } },
	[270] = { .set = { {-3, -7}, {-1, -13}, {-9, -9}, {-1, -5} } },
	[271] = { .set = { {-4, -9}, {7, -17}, {-6, -14}, {0, -7} } },
	[272] = { .set = { {-5, -7}, {-5, -14}, {-10, -11}, {-1, -5} } },
	[273] = { .set = { {-5, -7}, {-5, -14}, {-10, -11}, {-1, -5} } },
	[274] = { .set = { {-5, -6}, {-6, -14}, {-7, -6}, {0, -5} } },
	[275] = { .set = { {-1, -10}, {0, -18}, {3, -14}, {1, -7} } },
	[276] = { .set = { {-7, -4}, {-14, -5}, {-13, -1}, {-1, -4} } },
	[277] = { .set = { {-7, -4}, {-14, -5}, {-13, -1}, {-1, -4} } },
	[278] = { .set = { {-2, -3}, {-6, -13}, {3, -9}, {0, -5} } },
	[279] = { .set = { {-2, -10}, {-4, -19}, {7, -14}, {0, -10} } },
	[280] = { .set = { {-2, -1}, {-9, 2}, {-3, 5}, {0, -3} } },
	[281] = { .set = { {-2, -1}, {-9, 2}, {-3, 5}, {0, -3} } },
	[282] = { .set = { {0, -2}, {-8, 2}, {7, 2}, {0, -3} } },
	[283] = { .set = { {-2, -2}, {-11, -4}, {0, 1}, {-1, -4} } },
	[284] = { .set = { {-6, -4}, {-12, -8}, {-12, -2}, {0, -4} } },
	[285] = { .set = { {-3, -6}, {-2, -14}, {-9, -10}, {1, -5} } },
	[286] = { .set = { {0, -8}, {6, -11}, {-7, -11}, {-1, -5} } },
	[287] = { .set = { {2, -6}, {1, -14}, {8, -10}, {-2, -5} } },
	[288] = { .set = { {5, -4}, {11, -8}, {11, -2}, {-1, -4} } },
	[289] = { .set = { {1, -2}, {10, -4}, {-1, 1}, {0, -4} } },
	[290] = { .set = { {-1, -8}, {-7, -18}, {5, -17}, {0, -9} } },
	[291] = { .set = { {1, -8}, {5, -18}, {-5, -14}, {0, -8} } },
	[292] = { .set = { {2, -12}, {2, -20}, {6, -13}, {-1, -8} } },
	[293] = { .set = { {3, -9}, {-1, -19}, {7, -14}, {-1, -7} } },
	[294] = { .set = { {0, -11}, {7, -19}, {-7, -18}, {-1, -8} } },
	[295] = { .set = { {-5, -9}, {-1, -19}, {-9, -14}, {-1, -7} } },
	[296] = { .set = { {-3, -12}, {-3, -20}, {-7, -13}, {0, -8} } },
	[297] = { .set = { {-2, -8}, {-6, -18}, {4, -14}, {-1, -8} } },
	[298] = { .set = { {0, -3}, {-7, -12}, {6, -12}, {0, -6} } },
	[299] = { .set = { {-1, -9}, {-7, -17}, {6, -17}, {0, -10} } },
	[300] = { .set = { {0, -2}, {-8, 2}, {7, 2}, {0, -3} } },
	[301] = { .set = { {1, -3}, {5, -13}, {-4, -9}, {-1, -5} } },
	[302] = { .set = { {1, -10}, {3, -19}, {-8, -14}, {-1, -10} } },
	[303] = { .set = { {2, -2}, {11, -4}, {0, 1}, {1, -4} } },
	[304] = { .set = { {4, -6}, {5, -14}, {6, -6}, {-1, -5} } },
	[305] = { .set = { {0, -10}, {-1, -18}, {-4, -14}, {-2, -7} } },
	[306] = { .set = { {4, -4}, {10, -8}, {10, -2}, {-2, -4} } },
	[307] = { .set = { {2, -7}, {0, -13}, {8, -9}, {0, -5} } },
	[308] = { .set = { {3, -9}, {-8, -17}, {5, -14}, {-1, -7} } },
	[309] = { .set = { {4, -7}, {3, -15}, {10, -11}, {0, -6} } },
	[310] = { .set = { {0, -8}, {6, -14}, {-7, -14}, {0, -5} } },
	[311] = { .set = { {0, -13}, {8, -17}, {-8, -17}, {-1, -9} } },
	[312] = { .set = { {0, -9}, {6, -12}, {-7, -12}, {-1, -6} } },
	[313] = { .set = { {-3, -7}, {-1, -13}, {-9, -9}, {-1, -5} } },
	[314] = { .set = { {-4, -9}, {7, -17}, {-6, -14}, {0, -7} } },
	[315] = { .set = { {-5, -7}, {-4, -15}, {-11, -11}, {-1, -6} } },
	[316] = { .set = { {-5, -6}, {-6, -14}, {-7, -6}, {0, -5} } },
	[317] = { .set = { {-1, -10}, {0, -18}, {3, -14}, {1, -7} } },
	[318] = { .set = { {-5, -4}, {-11, -8}, {-11, -2}, {1, -4} } },
	[319] = { .set = { {-2, -3}, {-6, -13}, {3, -9}, {0, -5} } },
	[320] = { .set = { {-2, -10}, {-4, -19}, {7, -14}, {0, -10} } },
	[321] = { .set = { {-3, -2}, {-12, -4}, {-1, 1}, {-2, -4} } },
	[322] = { .set = { {0, -2}, {-8, 2}, {7, 2}, {0, -3} } },
	[323] = { .set = { {-2, -2}, {-11, -4}, {0, 1}, {-1, -4} } },
	[324] = { .set = { {-6, -4}, {-12, -8}, {-12, -2}, {0, -4} } },
	[325] = { .set = { {-3, -6}, {-2, -14}, {-9, -10}, {1, -5} } },
	[326] = { .set = { {0, -8}, {6, -11}, {-7, -11}, {-1, -5} } },
	[327] = { .set = { {2, -6}, {1, -14}, {8, -10}, {-2, -5} } },
	[328] = { .set = { {5, -4}, {11, -8}, {11, -2}, {-1, -4} } },
	[329] = { .set = { {1, -2}, {10, -4}, {-1, 1}, {0, -4} } },
	[330] = { .set = { {0, -3}, {-7, -12}, {6, -12}, {0, -6} } },
	[331] = { .set = { {-2, -3}, {-6, -13}, {3, -9}, {0, -5} } },
	[332] = { .set = { {-5, -6}, {-6, -14}, {-7, -6}, {0, -5} } },
	[333] = { .set = { {-3, -7}, {-1, -13}, {-9, -9}, {-1, -5} } },
	[334] = { .set = { {0, -8}, {6, -14}, {-7, -14}, {0, -5} } },
	[335] = { .set = { {2, -7}, {0, -13}, {8, -9}, {0, -5} } },
	[336] = { .set = { {4, -6}, {5, -14}, {6, -6}, {-1, -5} } },
	[337] = { .set = { {1, -3}, {5, -13}, {-4, -9}, {-1, -5} } },
};

static const ax_anim *const sKrabbyAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sKrabbyAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_00031),
	AX_ANIM_PTR(gAxSharedAnim_00032),
	AX_ANIM_PTR(gAxSharedAnim_00033),
	AX_ANIM_PTR(gAxSharedAnim_00034),
	AX_ANIM_PTR(gAxSharedAnim_00000),
	AX_ANIM_PTR(gAxSharedAnim_00010),
	AX_ANIM_PTR(gAxSharedAnim_00027),
	AX_ANIM_PTR(gAxSharedAnim_00030),
};

static const ax_anim *const sKrabbyAnimTable3[] = {
	AX_ANIM_PTR(sKrabbyAnims_3_1),
	AX_ANIM_PTR(sKrabbyAnims_3_2),
	AX_ANIM_PTR(sKrabbyAnims_3_3),
	AX_ANIM_PTR(sKrabbyAnims_3_4),
	AX_ANIM_PTR(sKrabbyAnims_3_5),
	AX_ANIM_PTR(sKrabbyAnims_3_6),
	AX_ANIM_PTR(sKrabbyAnims_3_7),
	AX_ANIM_PTR(sKrabbyAnims_3_8),
};

static const ax_anim *const sKrabbyAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_02418),
	AX_ANIM_PTR(gAxSharedAnim_02419),
	AX_ANIM_PTR(gAxSharedAnim_02420),
	AX_ANIM_PTR(gAxSharedAnim_02421),
	AX_ANIM_PTR(gAxSharedAnim_02422),
	AX_ANIM_PTR(gAxSharedAnim_02423),
	AX_ANIM_PTR(gAxSharedAnim_02425),
	AX_ANIM_PTR(gAxSharedAnim_02426),
};

static const ax_anim *const sKrabbyAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_01513),
	AX_ANIM_PTR(gAxSharedAnim_01553),
	AX_ANIM_PTR(gAxSharedAnim_01548),
	AX_ANIM_PTR(gAxSharedAnim_01543),
	AX_ANIM_PTR(gAxSharedAnim_01538),
	AX_ANIM_PTR(gAxSharedAnim_01530),
	AX_ANIM_PTR(gAxSharedAnim_01524),
	AX_ANIM_PTR(gAxSharedAnim_01519),
};

static const ax_anim *const sKrabbyAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02393),
	AX_ANIM_PTR(gAxSharedAnim_02393),
	AX_ANIM_PTR(gAxSharedAnim_02393),
	AX_ANIM_PTR(gAxSharedAnim_02393),
	AX_ANIM_PTR(gAxSharedAnim_02393),
	AX_ANIM_PTR(gAxSharedAnim_02393),
	AX_ANIM_PTR(gAxSharedAnim_02393),
	AX_ANIM_PTR(gAxSharedAnim_02393),
};

static const ax_anim *const sKrabbyAnimTable7[] = {
	AX_ANIM_PTR(sKrabbyAnims_7_1),
	AX_ANIM_PTR(sKrabbyAnims_7_2),
	AX_ANIM_PTR(sKrabbyAnims_7_3),
	AX_ANIM_PTR(sKrabbyAnims_7_4),
	AX_ANIM_PTR(sKrabbyAnims_7_5),
	AX_ANIM_PTR(sKrabbyAnims_7_6),
	AX_ANIM_PTR(sKrabbyAnims_7_7),
	AX_ANIM_PTR(sKrabbyAnims_7_8),
};

static const ax_anim *const sKrabbyAnimTable8[] = {
	AX_ANIM_PTR(gAxSharedAnim_02394),
	AX_ANIM_PTR(gAxSharedAnim_02395),
	AX_ANIM_PTR(gAxSharedAnim_02396),
	AX_ANIM_PTR(gAxSharedAnim_02397),
	AX_ANIM_PTR(gAxSharedAnim_02398),
	AX_ANIM_PTR(gAxSharedAnim_02399),
	AX_ANIM_PTR(gAxSharedAnim_02400),
	AX_ANIM_PTR(gAxSharedAnim_02401),
};

static const ax_anim *const sKrabbyAnimTable9[] = {
	AX_ANIM_PTR(sKrabbyAnims_9_1),
	AX_ANIM_PTR(sKrabbyAnims_9_2),
	AX_ANIM_PTR(sKrabbyAnims_9_3),
	AX_ANIM_PTR(sKrabbyAnims_9_4),
	AX_ANIM_PTR(sKrabbyAnims_9_5),
	AX_ANIM_PTR(sKrabbyAnims_9_6),
	AX_ANIM_PTR(sKrabbyAnims_9_7),
	AX_ANIM_PTR(sKrabbyAnims_9_8),
};

static const ax_anim *const sKrabbyAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01795),
	AX_ANIM_PTR(gAxSharedAnim_01799),
	AX_ANIM_PTR(gAxSharedAnim_01802),
	AX_ANIM_PTR(gAxSharedAnim_01804),
	AX_ANIM_PTR(gAxSharedAnim_01807),
	AX_ANIM_PTR(gAxSharedAnim_01809),
	AX_ANIM_PTR(gAxSharedAnim_01811),
	AX_ANIM_PTR(gAxSharedAnim_01814),
};

static const ax_anim *const sKrabbyAnimTable11[] = {
	AX_ANIM_PTR(sKrabbyAnims_11_1),
	AX_ANIM_PTR(sKrabbyAnims_11_2),
	AX_ANIM_PTR(sKrabbyAnims_11_3),
	AX_ANIM_PTR(sKrabbyAnims_11_4),
	AX_ANIM_PTR(sKrabbyAnims_11_5),
	AX_ANIM_PTR(sKrabbyAnims_11_6),
	AX_ANIM_PTR(sKrabbyAnims_11_7),
	AX_ANIM_PTR(sKrabbyAnims_11_8),
};

static const ax_anim *const sKrabbyAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01841),
	AX_ANIM_PTR(gAxSharedAnim_01848),
	AX_ANIM_PTR(gAxSharedAnim_01847),
	AX_ANIM_PTR(gAxSharedAnim_01846),
	AX_ANIM_PTR(gAxSharedAnim_01845),
	AX_ANIM_PTR(gAxSharedAnim_01844),
	AX_ANIM_PTR(gAxSharedAnim_01843),
	AX_ANIM_PTR(gAxSharedAnim_01842),
};

static const ax_anim *const sKrabbyAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01856),
	AX_ANIM_PTR(gAxSharedAnim_01863),
	AX_ANIM_PTR(gAxSharedAnim_01862),
	AX_ANIM_PTR(gAxSharedAnim_01861),
	AX_ANIM_PTR(gAxSharedAnim_01860),
	AX_ANIM_PTR(gAxSharedAnim_01859),
	AX_ANIM_PTR(gAxSharedAnim_01858),
	AX_ANIM_PTR(gAxSharedAnim_01857),
};

static const ax_anim *const *const sAxAnimationsKrabby[] = {
	sKrabbyAnimTable1,
	sKrabbyAnimTable2,
	sKrabbyAnimTable3,
	sKrabbyAnimTable4,
	sKrabbyAnimTable5,
	sKrabbyAnimTable6,
	sKrabbyAnimTable7,
	sKrabbyAnimTable8,
	sKrabbyAnimTable9,
	sKrabbyAnimTable10,
	sKrabbyAnimTable11,
	sKrabbyAnimTable12,
	sKrabbyAnimTable13,
};

static const ax_sprite *const sAxSpritesKrabby[] = {
	sKrabbySprites1,
	sKrabbySprites2,
	sKrabbySprites3,
	sKrabbySprites4,
	sKrabbySprites5,
	sKrabbySprites6,
	sKrabbySprites7,
	sKrabbySprites8,
	sKrabbySprites9,
	sKrabbySprites10,
	sKrabbySprites11,
	sKrabbySprites12,
	sKrabbySprites13,
	sKrabbySprites14,
	sKrabbySprites15,
	sKrabbySprites16,
	sKrabbySprites17,
	sKrabbySprites18,
	sKrabbySprites19,
	sKrabbySprites20,
	sKrabbySprites21,
	sKrabbySprites22,
	sKrabbySprites23,
	sKrabbySprites24,
	sKrabbySprites25,
	sKrabbySprites26,
	sKrabbySprites27,
	sKrabbySprites28,
	sKrabbySprites29,
	sKrabbySprites30,
	sKrabbySprites31,
	sKrabbySprites32,
	sKrabbySprites33,
	sKrabbySprites34,
	sKrabbySprites35,
	sKrabbySprites36,
	sKrabbySprites37,
	sKrabbySprites38,
	sKrabbySprites39,
	sKrabbySprites40,
	sKrabbySprites41,
	sKrabbySprites42,
	sKrabbySprites43,
	sKrabbySprites44,
	sKrabbySprites45,
	sKrabbySprites46,
	sKrabbySprites47,
};

static const axmain sAxMainKrabby = {
	.poses = sAxPosesKrabby,
	.animations = sAxAnimationsKrabby,
	.animCount = ARRAY_COUNT(sAxAnimationsKrabby),
	.spriteData = sAxSpritesKrabby,
	.positions = sAxPositionsKrabby,
};
