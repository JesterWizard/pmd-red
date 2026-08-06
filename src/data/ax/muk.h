/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainMuk;
const SiroArchive gAxMuk = {"SIRO", &sAxMainMuk};

static const ax_pose sMukPose1[] = {
	AX_POSE(0, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose3[] = {
	AX_POSE(2, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose4[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose5[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose6[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose8[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose10[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose11[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose12[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose13[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose14[] = {
	AX_POSE(13, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose15[] = {
	AX_POSE(14, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose16[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose17[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose18[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose19[] = {
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose20[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose21[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose22[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose23[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose24[] = {
	AX_POSE(23, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose26[] = {
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose27[] = {
	AX_POSE(25, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose30[] = {
	AX_POSE(26, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose31[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose34[] = {
	AX_POSE(28, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(6, ST_OAM_H_RECTANGLE, 2), OAM2(245, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(30, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(229, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(10, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose35[] = {
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose38[] = {
	AX_POSE(32, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose39[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose42[] = {
	AX_POSE(34, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose43[] = {
	AX_POSE(35, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose46[] = {
	AX_POSE(32, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose47[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose50[] = {
	AX_POSE(28, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(6, ST_OAM_H_RECTANGLE, 2), OAM2(250, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(30, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(18, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose51[] = {
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose54[] = {
	AX_POSE(26, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose55[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose92[] = {
	AX_POSE(36, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose97[] = {
	AX_POSE(37, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose100[] = {
	AX_POSE(28, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(4, ST_OAM_H_RECTANGLE, 2), OAM2(245, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(30, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(229, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(10, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose102[] = {
	AX_POSE(38, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose107[] = {
	AX_POSE(39, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose112[] = {
	AX_POSE(40, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose117[] = {
	AX_POSE(39, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose120[] = {
	AX_POSE(28, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(4, ST_OAM_H_RECTANGLE, 2), OAM2(250, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(30, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(18, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose122[] = {
	AX_POSE(38, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose127[] = {
	AX_POSE(37, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose137[] = {
	AX_POSE(41, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose138[] = {
	AX_POSE(42, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose139[] = {
	AX_POSE(43, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose140[] = {
	AX_POSE(44, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose141[] = {
	AX_POSE(45, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose142[] = {
	AX_POSE(46, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose143[] = {
	AX_POSE(47, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose144[] = {
	AX_POSE(46, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose145[] = {
	AX_POSE(45, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose146[] = {
	AX_POSE(44, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose148[] = {
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose154[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose155[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose157[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose158[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose161[] = {
	AX_POSE(14, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose164[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose167[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose172[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose174[] = {
	AX_POSE(32, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose175[] = {
	AX_POSE(34, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose176[] = {
	AX_POSE(32, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose178[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose179[] = {
	AX_POSE(36, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose181[] = {
	AX_POSE(38, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose182[] = {
	AX_POSE(39, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose183[] = {
	AX_POSE(40, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose184[] = {
	AX_POSE(39, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose185[] = {
	AX_POSE(38, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose195[] = {
	AX_POSE(28, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(4, ST_OAM_H_RECTANGLE, 2), OAM2(247, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(30, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(10, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose207[] = {
	AX_POSE(28, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(4, ST_OAM_H_RECTANGLE, 2), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(30, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose211[] = {
	AX_POSE(25, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose214[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMukPose216[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const u8 sMukAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_1_1.lz");
static const u8 sMukAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_1_2.lz");
static const u8 sMukAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_1_3.lz");
static const u8 sMukAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_1_4.lz");
static const u8 sMukAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_1_5.lz");
static const u8 sMukAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_1_6.lz");
static const u8 sMukAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_1_7.lz");
static const u8 sMukAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_1_8.lz");
static const u8 sMukAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_2_1.lz");
static const u8 sMukAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_2_2.lz");
static const u8 sMukAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_2_3.lz");
static const u8 sMukAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_2_4.lz");
static const u8 sMukAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_2_5.lz");
static const u8 sMukAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_2_6.lz");
static const u8 sMukAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_2_7.lz");
static const u8 sMukAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_2_8.lz");
static const u8 sMukAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_3_1.lz");
static const u8 sMukAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_3_2.lz");
static const u8 sMukAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_3_3.lz");
static const u8 sMukAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_3_4.lz");
static const u8 sMukAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_3_5.lz");
static const u8 sMukAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_3_6.lz");
static const u8 sMukAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_3_7.lz");
static const u8 sMukAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_3_8.lz");
static const u8 sMukAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_4_1.lz");
static const u8 sMukAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_4_2.lz");
static const u8 sMukAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_4_3.lz");
static const u8 sMukAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_4_4.lz");
static const u8 sMukAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_4_5.lz");
static const u8 sMukAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_4_6.lz");
static const u8 sMukAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_4_7.lz");
static const u8 sMukAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_4_8.lz");
static const u8 sMukAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_8_1.lz");
static const u8 sMukAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_8_2.lz");
static const u8 sMukAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_8_3.lz");
static const u8 sMukAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_8_4.lz");
static const u8 sMukAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_8_5.lz");
static const u8 sMukAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_8_6.lz");
static const u8 sMukAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_8_7.lz");
static const u8 sMukAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_8_8.lz");
static const u8 sMukAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_9_1.lz");
static const u8 sMukAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_9_2.lz");
static const u8 sMukAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_9_4.lz");
static const u8 sMukAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_9_5.lz");
static const u8 sMukAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_9_6.lz");
static const u8 sMukAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_9_8.lz");
static const u8 sMukAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_11_2.lz");
static const u8 sMukAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_11_3.lz");
static const u8 sMukAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_11_4.lz");
static const u8 sMukAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_11_6.lz");
static const u8 sMukAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_11_7.lz");
static const u8 sMukAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/muk/sMukAnims_11_8.lz");

static const u8 sMukGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_1.4bpp.lz");
static const ax_sprite sMukSprites1[] = {
	{sMukGfx1, ARRAY_COUNT(sMukGfx1)}, 
	{NULL, 0}
};
static const u8 sMukGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_2.4bpp.lz");
static const ax_sprite sMukSprites2[] = {
	{sMukGfx2, ARRAY_COUNT(sMukGfx2)}, 
	{NULL, 0}
};
static const u8 sMukGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_3.4bpp.lz");
static const ax_sprite sMukSprites3[] = {
	{sMukGfx3, ARRAY_COUNT(sMukGfx3)}, 
	{NULL, 0}
};
static const u8 sMukGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_4.4bpp.lz");
static const ax_sprite sMukSprites4[] = {
	{sMukGfx4, ARRAY_COUNT(sMukGfx4)}, 
	{NULL, 0}
};
static const u8 sMukGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_5.4bpp.lz");
static const ax_sprite sMukSprites5[] = {
	{sMukGfx5, ARRAY_COUNT(sMukGfx5)}, 
	{NULL, 0}
};
static const u8 sMukGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_6.4bpp.lz");
static const ax_sprite sMukSprites6[] = {
	{sMukGfx6, ARRAY_COUNT(sMukGfx6)}, 
	{NULL, 0}
};
static const u8 sMukGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_7.4bpp.lz");
static const ax_sprite sMukSprites7[] = {
	{sMukGfx7, ARRAY_COUNT(sMukGfx7)}, 
	{NULL, 0}
};
static const u8 sMukGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_8.4bpp.lz");
static const ax_sprite sMukSprites8[] = {
	{sMukGfx8, ARRAY_COUNT(sMukGfx8)}, 
	{NULL, 0}
};
static const u8 sMukGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_9.4bpp.lz");
static const ax_sprite sMukSprites9[] = {
	{sMukGfx9, ARRAY_COUNT(sMukGfx9)}, 
	{NULL, 0}
};
static const u8 sMukGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_10.4bpp.lz");
static const ax_sprite sMukSprites10[] = {
	{sMukGfx10, ARRAY_COUNT(sMukGfx10)}, 
	{NULL, 0}
};
static const u8 sMukGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_11.4bpp.lz");
static const ax_sprite sMukSprites11[] = {
	{sMukGfx11, ARRAY_COUNT(sMukGfx11)}, 
	{NULL, 0}
};
static const u8 sMukGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_12.4bpp.lz");
static const ax_sprite sMukSprites12[] = {
	{sMukGfx12, ARRAY_COUNT(sMukGfx12)}, 
	{NULL, 0}
};
static const u8 sMukGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_13.4bpp.lz");
static const ax_sprite sMukSprites13[] = {
	{sMukGfx13, ARRAY_COUNT(sMukGfx13)}, 
	{NULL, 0}
};
static const u8 sMukGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_14.4bpp.lz");
static const ax_sprite sMukSprites14[] = {
	{sMukGfx14, ARRAY_COUNT(sMukGfx14)}, 
	{NULL, 0}
};
static const u8 sMukGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_15.4bpp.lz");
static const ax_sprite sMukSprites15[] = {
	{sMukGfx15, ARRAY_COUNT(sMukGfx15)}, 
	{NULL, 0}
};
static const u8 sMukGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_16.4bpp.lz");
static const ax_sprite sMukSprites16[] = {
	{sMukGfx16, ARRAY_COUNT(sMukGfx16)}, 
	{NULL, 0}
};
static const u8 sMukGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_17.4bpp.lz");
static const ax_sprite sMukSprites17[] = {
	{sMukGfx17, ARRAY_COUNT(sMukGfx17)}, 
	{NULL, 0}
};
static const u8 sMukGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_18.4bpp.lz");
static const ax_sprite sMukSprites18[] = {
	{sMukGfx18, ARRAY_COUNT(sMukGfx18)}, 
	{NULL, 0}
};
static const u8 sMukGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_19.4bpp.lz");
static const ax_sprite sMukSprites19[] = {
	{sMukGfx19, ARRAY_COUNT(sMukGfx19)}, 
	{NULL, 0}
};
static const u8 sMukGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_20.4bpp.lz");
static const ax_sprite sMukSprites20[] = {
	{sMukGfx20, ARRAY_COUNT(sMukGfx20)}, 
	{NULL, 0}
};
static const u8 sMukGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_21.4bpp.lz");
static const ax_sprite sMukSprites21[] = {
	{sMukGfx21, ARRAY_COUNT(sMukGfx21)}, 
	{NULL, 0}
};
static const u8 sMukGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_22.4bpp.lz");
static const ax_sprite sMukSprites22[] = {
	{sMukGfx22, ARRAY_COUNT(sMukGfx22)}, 
	{NULL, 0}
};
static const u8 sMukGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_23.4bpp.lz");
static const ax_sprite sMukSprites23[] = {
	{sMukGfx23, ARRAY_COUNT(sMukGfx23)}, 
	{NULL, 0}
};
static const u8 sMukGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_24.4bpp.lz");
static const ax_sprite sMukSprites24[] = {
	{sMukGfx24, ARRAY_COUNT(sMukGfx24)}, 
	{NULL, 0}
};
static const u8 sMukGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_25.4bpp.lz");
static const u8 sMukGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_25_1.4bpp.lz");
static const u8 sMukGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_25_2.4bpp.lz");
static const ax_sprite sMukSprites25[] = {
	{NULL, 32}, 
	{sMukGfx25, ARRAY_COUNT(sMukGfx25)}, 
	{NULL, 64}, 
	{sMukGfx25_1, ARRAY_COUNT(sMukGfx25_1)}, 
	{NULL, 32}, 
	{sMukGfx25_2, ARRAY_COUNT(sMukGfx25_2)}, 
	{NULL, 0}
};
static const u8 sMukGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_26.4bpp.lz");
static const u8 sMukGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_26_1.4bpp.lz");
static const ax_sprite sMukSprites26[] = {
	{sMukGfx26, ARRAY_COUNT(sMukGfx26)}, 
	{NULL, 32}, 
	{sMukGfx26_1, ARRAY_COUNT(sMukGfx26_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMukGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_27.4bpp.lz");
static const ax_sprite sMukSprites27[] = {
	{NULL, 128}, 
	{sMukGfx27, ARRAY_COUNT(sMukGfx27)}, 
	{NULL, 0}
};
static const u8 sMukGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_28.4bpp.lz");
static const u8 sMukGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_28_1.4bpp.lz");
static const u8 sMukGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_28_2.4bpp.lz");
static const ax_sprite sMukSprites28[] = {
	{sMukGfx28, ARRAY_COUNT(sMukGfx28)}, 
	{NULL, 32}, 
	{sMukGfx28_1, ARRAY_COUNT(sMukGfx28_1)}, 
	{NULL, 64}, 
	{sMukGfx28_2, ARRAY_COUNT(sMukGfx28_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMukGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_29.4bpp.lz");
static const ax_sprite sMukSprites29[] = {
	{sMukGfx29, ARRAY_COUNT(sMukGfx29)}, 
	{NULL, 0}
};
static const u8 sMukGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_30.4bpp.lz");
static const ax_sprite sMukSprites30[] = {
	{sMukGfx30, ARRAY_COUNT(sMukGfx30)}, 
	{NULL, 0}
};
static const u8 sMukGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_31.4bpp.lz");
static const ax_sprite sMukSprites31[] = {
	{sMukGfx31, ARRAY_COUNT(sMukGfx31)}, 
	{NULL, 0}
};
static const u8 sMukGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_32.4bpp.lz");
static const u8 sMukGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_32_1.4bpp.lz");
static const u8 sMukGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_32_2.4bpp.lz");
static const ax_sprite sMukSprites32[] = {
	{NULL, 32}, 
	{sMukGfx32, ARRAY_COUNT(sMukGfx32)}, 
	{NULL, 32}, 
	{sMukGfx32_1, ARRAY_COUNT(sMukGfx32_1)}, 
	{NULL, 32}, 
	{sMukGfx32_2, ARRAY_COUNT(sMukGfx32_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sMukGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_33.4bpp.lz");
static const u8 sMukGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_33_1.4bpp.lz");
static const ax_sprite sMukSprites33[] = {
	{sMukGfx33, ARRAY_COUNT(sMukGfx33)}, 
	{NULL, 32}, 
	{sMukGfx33_1, ARRAY_COUNT(sMukGfx33_1)}, 
	{NULL, 0}
};
static const u8 sMukGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_34.4bpp.lz");
static const u8 sMukGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_34_1.4bpp.lz");
static const u8 sMukGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_34_2.4bpp.lz");
static const ax_sprite sMukSprites34[] = {
	{NULL, 64}, 
	{sMukGfx34, ARRAY_COUNT(sMukGfx34)}, 
	{NULL, 32}, 
	{sMukGfx34_1, ARRAY_COUNT(sMukGfx34_1)}, 
	{NULL, 32}, 
	{sMukGfx34_2, ARRAY_COUNT(sMukGfx34_2)}, 
	{NULL, 0}
};
static const u8 sMukGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_35.4bpp.lz");
static const u8 sMukGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_35_1.4bpp.lz");
static const ax_sprite sMukSprites35[] = {
	{sMukGfx35, ARRAY_COUNT(sMukGfx35)}, 
	{NULL, 32}, 
	{sMukGfx35_1, ARRAY_COUNT(sMukGfx35_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMukGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_36.4bpp.lz");
static const ax_sprite sMukSprites36[] = {
	{NULL, 128}, 
	{sMukGfx36, ARRAY_COUNT(sMukGfx36)}, 
	{NULL, 0}
};
static const u8 sMukGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_37.4bpp.lz");
static const ax_sprite sMukSprites37[] = {
	{NULL, 128}, 
	{sMukGfx37, ARRAY_COUNT(sMukGfx37)}, 
	{NULL, 0}
};
static const u8 sMukGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_38.4bpp.lz");
static const ax_sprite sMukSprites38[] = {
	{NULL, 128}, 
	{sMukGfx38, ARRAY_COUNT(sMukGfx38)}, 
	{NULL, 0}
};
static const u8 sMukGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_39.4bpp.lz");
static const u8 sMukGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_39_1.4bpp.lz");
static const u8 sMukGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_39_2.4bpp.lz");
static const ax_sprite sMukSprites39[] = {
	{sMukGfx39, ARRAY_COUNT(sMukGfx39)}, 
	{NULL, 32}, 
	{sMukGfx39_1, ARRAY_COUNT(sMukGfx39_1)}, 
	{NULL, 32}, 
	{sMukGfx39_2, ARRAY_COUNT(sMukGfx39_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMukGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_40.4bpp.lz");
static const u8 sMukGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_40_1.4bpp.lz");
static const u8 sMukGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_40_2.4bpp.lz");
static const ax_sprite sMukSprites40[] = {
	{sMukGfx40, ARRAY_COUNT(sMukGfx40)}, 
	{NULL, 32}, 
	{sMukGfx40_1, ARRAY_COUNT(sMukGfx40_1)}, 
	{NULL, 32}, 
	{sMukGfx40_2, ARRAY_COUNT(sMukGfx40_2)}, 
	{NULL, 0}
};
static const u8 sMukGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_41.4bpp.lz");
static const u8 sMukGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_41_1.4bpp.lz");
static const ax_sprite sMukSprites41[] = {
	{sMukGfx41, ARRAY_COUNT(sMukGfx41)}, 
	{NULL, 32}, 
	{sMukGfx41_1, ARRAY_COUNT(sMukGfx41_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMukGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_42.4bpp.lz");
static const ax_sprite sMukSprites42[] = {
	{sMukGfx42, ARRAY_COUNT(sMukGfx42)}, 
	{NULL, 0}
};
static const u8 sMukGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_43.4bpp.lz");
static const ax_sprite sMukSprites43[] = {
	{sMukGfx43, ARRAY_COUNT(sMukGfx43)}, 
	{NULL, 0}
};
static const u8 sMukGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_44.4bpp.lz");
static const ax_sprite sMukSprites44[] = {
	{sMukGfx44, ARRAY_COUNT(sMukGfx44)}, 
	{NULL, 0}
};
static const u8 sMukGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_45.4bpp.lz");
static const ax_sprite sMukSprites45[] = {
	{sMukGfx45, ARRAY_COUNT(sMukGfx45)}, 
	{NULL, 0}
};
static const u8 sMukGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_46.4bpp.lz");
static const ax_sprite sMukSprites46[] = {
	{sMukGfx46, ARRAY_COUNT(sMukGfx46)}, 
	{NULL, 0}
};
static const u8 sMukGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_47.4bpp.lz");
static const ax_sprite sMukSprites47[] = {
	{sMukGfx47, ARRAY_COUNT(sMukGfx47)}, 
	{NULL, 0}
};
static const u8 sMukGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/muk/sprite_48.4bpp.lz");
static const ax_sprite sMukSprites48[] = {
	{sMukGfx48, ARRAY_COUNT(sMukGfx48)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesMuk[] = {
	sMukPose1,
	sMukPose2,
	sMukPose3,
	sMukPose4,
	sMukPose5,
	sMukPose6,
	sMukPose7,
	sMukPose8,
	sMukPose9,
	sMukPose10,
	sMukPose11,
	sMukPose12,
	sMukPose13,
	sMukPose14,
	sMukPose15,
	sMukPose16,
	sMukPose17,
	sMukPose18,
	sMukPose19,
	sMukPose20,
	sMukPose21,
	sMukPose22,
	sMukPose23,
	sMukPose24,
	sMukPose1,
	sMukPose26,
	sMukPose27,
	sMukPose3,
	sMukPose4,
	sMukPose30,
	sMukPose31,
	sMukPose6,
	sMukPose7,
	sMukPose34,
	sMukPose35,
	sMukPose9,
	sMukPose10,
	sMukPose38,
	sMukPose39,
	sMukPose12,
	sMukPose13,
	sMukPose42,
	sMukPose43,
	sMukPose15,
	sMukPose16,
	sMukPose46,
	sMukPose47,
	sMukPose18,
	sMukPose19,
	sMukPose50,
	sMukPose51,
	sMukPose21,
	sMukPose22,
	sMukPose54,
	sMukPose55,
	sMukPose24,
	sMukPose1,
	sMukPose26,
	sMukPose27,
	sMukPose3,
	sMukPose4,
	sMukPose30,
	sMukPose31,
	sMukPose6,
	sMukPose7,
	sMukPose34,
	sMukPose35,
	sMukPose9,
	sMukPose10,
	sMukPose38,
	sMukPose39,
	sMukPose12,
	sMukPose13,
	sMukPose42,
	sMukPose43,
	sMukPose15,
	sMukPose16,
	sMukPose46,
	sMukPose47,
	sMukPose18,
	sMukPose19,
	sMukPose50,
	sMukPose51,
	sMukPose21,
	sMukPose22,
	sMukPose54,
	sMukPose55,
	sMukPose24,
	sMukPose1,
	sMukPose26,
	sMukPose27,
	sMukPose92,
	sMukPose3,
	sMukPose4,
	sMukPose30,
	sMukPose31,
	sMukPose97,
	sMukPose6,
	sMukPose7,
	sMukPose100,
	sMukPose35,
	sMukPose102,
	sMukPose9,
	sMukPose10,
	sMukPose38,
	sMukPose39,
	sMukPose107,
	sMukPose12,
	sMukPose13,
	sMukPose42,
	sMukPose43,
	sMukPose112,
	sMukPose15,
	sMukPose16,
	sMukPose46,
	sMukPose47,
	sMukPose117,
	sMukPose18,
	sMukPose19,
	sMukPose120,
	sMukPose51,
	sMukPose122,
	sMukPose21,
	sMukPose22,
	sMukPose54,
	sMukPose55,
	sMukPose127,
	sMukPose24,
	sMukPose1,
	sMukPose22,
	sMukPose19,
	sMukPose16,
	sMukPose13,
	sMukPose10,
	sMukPose7,
	sMukPose4,
	sMukPose137,
	sMukPose138,
	sMukPose139,
	sMukPose140,
	sMukPose141,
	sMukPose142,
	sMukPose143,
	sMukPose144,
	sMukPose145,
	sMukPose146,
	sMukPose1,
	sMukPose148,
	sMukPose3,
	sMukPose4,
	sMukPose5,
	sMukPose6,
	sMukPose7,
	sMukPose154,
	sMukPose155,
	sMukPose10,
	sMukPose157,
	sMukPose158,
	sMukPose13,
	sMukPose14,
	sMukPose161,
	sMukPose16,
	sMukPose17,
	sMukPose164,
	sMukPose19,
	sMukPose20,
	sMukPose167,
	sMukPose22,
	sMukPose23,
	sMukPose24,
	sMukPose26,
	sMukPose172,
	sMukPose50,
	sMukPose174,
	sMukPose175,
	sMukPose176,
	sMukPose34,
	sMukPose178,
	sMukPose179,
	sMukPose97,
	sMukPose181,
	sMukPose182,
	sMukPose183,
	sMukPose184,
	sMukPose185,
	sMukPose127,
	sMukPose1,
	sMukPose27,
	sMukPose26,
	sMukPose4,
	sMukPose31,
	sMukPose30,
	sMukPose7,
	sMukPose35,
	sMukPose195,
	sMukPose10,
	sMukPose39,
	sMukPose38,
	sMukPose13,
	sMukPose43,
	sMukPose42,
	sMukPose16,
	sMukPose47,
	sMukPose46,
	sMukPose19,
	sMukPose51,
	sMukPose207,
	sMukPose22,
	sMukPose55,
	sMukPose54,
	sMukPose211,
	sMukPose55,
	sMukPose51,
	sMukPose214,
	sMukPose43,
	sMukPose216,
	sMukPose35,
	sMukPose31,
	sMukPose1,
	sMukPose22,
	sMukPose19,
	sMukPose16,
	sMukPose13,
	sMukPose10,
	sMukPose7,
	sMukPose4,
};

static const struct PositionSets sAxPositionsMuk[] = {
	[0] = { .set = { {-1, -5}, {-9, -8}, {7, -5}, {-1, -9} } },
	[1] = { .set = { {-1, -4}, {-9, -8}, {8, -3}, {-1, -8} } },
	[2] = { .set = { {-1, -2}, {-10, -7}, {10, 0}, {-1, -6} } },
	[3] = { .set = { {1, -6}, {-8, -8}, {9, -10}, {0, -8} } },
	[4] = { .set = { {2, -5}, {-7, -8}, {12, -10}, {1, -8} } },
	[5] = { .set = { {3, -4}, {-6, -6}, {13, -7}, {3, -7} } },
	[6] = { .set = { {2, -8}, {-2, -5}, {0, -12}, {-2, -10} } },
	[7] = { .set = { {4, -8}, {0, -5}, {8, -7}, {1, -9} } },
	[8] = { .set = { {6, -8}, {2, -5}, {11, -7}, {2, -9} } },
	[9] = { .set = { {5, -14}, {4, -6}, {-5, -13}, {-2, -9} } },
	[10] = { .set = { {5, -15}, {5, -6}, {-2, -13}, {0, -10} } },
	[11] = { .set = { {8, -14}, {6, -7}, {1, -13}, {2, -11} } },
	[12] = { .set = { {-1, -15}, {7, -12}, {-13, -9}, {-1, -10} } },
	[13] = { .set = { {-1, -16}, {8, -13}, {-13, -11}, {-1, -11} } },
	[14] = { .set = { {-1, -19}, {7, -15}, {-13, -15}, {-1, -13} } },
	[15] = { .set = { {-7, -11}, {5, -9}, {-12, -8}, {-1, -10} } },
	[16] = { .set = { {-6, -13}, {4, -9}, {-14, -9}, {-1, -10} } },
	[17] = { .set = { {-8, -15}, {3, -10}, {-17, -12}, {-3, -10} } },
	[18] = { .set = { {-5, -8}, {-2, -8}, {-4, -4}, {0, -8} } },
	[19] = { .set = { {-6, -8}, {-3, -9}, {-6, -4}, {-1, -8} } },
	[20] = { .set = { {-8, -7}, {-5, -8}, {-10, -3}, {-3, -8} } },
	[21] = { .set = { {-4, -6}, {-10, -8}, {2, -4}, {-1, -8} } },
	[22] = { .set = { {-6, -5}, {-10, -7}, {2, -3}, {-2, -7} } },
	[23] = { .set = { {-5, -4}, {-10, -5}, {2, 0}, {-2, -6} } },
	[24] = { .set = { {-1, -5}, {-9, -8}, {7, -5}, {-1, -9} } },
	[25] = { .set = { {-1, 7}, {-12, 0}, {11, 0}, {-1, -2} } },
	[26] = { .set = { {-1, -7}, {-12, -10}, {10, -12}, {-1, -10} } },
	[27] = { .set = { {-1, -2}, {-10, -7}, {10, 0}, {-1, -6} } },
	[28] = { .set = { {1, -6}, {-8, -8}, {9, -10}, {0, -8} } },
	[29] = { .set = { {7, 3}, {9, -5}, {-9, 2}, {1, -4} } },
	[30] = { .set = { {1, -6}, {10, -13}, {-8, -10}, {-1, -7} } },
	[31] = { .set = { {3, -4}, {-6, -6}, {13, -7}, {3, -7} } },
	[32] = { .set = { {2, -8}, {-2, -5}, {0, -12}, {-2, -10} } },
	[33] = { .set = { {11, -1}, {2, -8}, {1, 6}, {-1, -2} } },
	[34] = { .set = { {2, -5}, {6, -16}, {3, -9}, {-2, -7} } },
	[35] = { .set = { {6, -8}, {2, -5}, {11, -7}, {2, -9} } },
	[36] = { .set = { {5, -14}, {4, -6}, {-5, -13}, {-2, -9} } },
	[37] = { .set = { {7, -11}, {-6, -11}, {10, -4}, {1, -7} } },
	[38] = { .set = { {2, -10}, {-7, -17}, {9, -12}, {-3, -9} } },
	[39] = { .set = { {8, -14}, {6, -7}, {1, -13}, {2, -11} } },
	[40] = { .set = { {-1, -15}, {7, -12}, {-13, -9}, {-1, -10} } },
	[41] = { .set = { {-1, -11}, {8, -8}, {-10, -8}, {-1, -5} } },
	[42] = { .set = { {-1, -14}, {8, -13}, {-10, -15}, {-1, -9} } },
	[43] = { .set = { {-1, -19}, {7, -15}, {-13, -15}, {-1, -13} } },
	[44] = { .set = { {-7, -11}, {5, -9}, {-12, -8}, {-1, -10} } },
	[45] = { .set = { {-9, -11}, {4, -11}, {-12, -4}, {-3, -7} } },
	[46] = { .set = { {-4, -10}, {5, -17}, {-11, -12}, {1, -9} } },
	[47] = { .set = { {-8, -15}, {3, -10}, {-17, -12}, {-3, -10} } },
	[48] = { .set = { {-5, -8}, {-2, -8}, {-4, -4}, {0, -8} } },
	[49] = { .set = { {-13, -1}, {-4, -8}, {-3, 6}, {-1, -2} } },
	[50] = { .set = { {-4, -5}, {-8, -16}, {-5, -9}, {0, -7} } },
	[51] = { .set = { {-8, -7}, {-5, -8}, {-10, -3}, {-3, -8} } },
	[52] = { .set = { {-4, -6}, {-10, -8}, {2, -4}, {-1, -8} } },
	[53] = { .set = { {-9, 3}, {-11, -5}, {7, 2}, {-3, -4} } },
	[54] = { .set = { {-3, -6}, {-12, -13}, {6, -10}, {-1, -7} } },
	[55] = { .set = { {-5, -4}, {-10, -5}, {2, 0}, {-2, -6} } },
	[56] = { .set = { {-1, -5}, {-9, -8}, {7, -5}, {-1, -9} } },
	[57] = { .set = { {-1, 7}, {-12, 0}, {11, 0}, {-1, -2} } },
	[58] = { .set = { {-1, -7}, {-12, -10}, {10, -12}, {-1, -10} } },
	[59] = { .set = { {-1, -2}, {-10, -7}, {10, 0}, {-1, -6} } },
	[60] = { .set = { {1, -6}, {-8, -8}, {9, -10}, {0, -8} } },
	[61] = { .set = { {7, 3}, {9, -5}, {-9, 2}, {1, -4} } },
	[62] = { .set = { {1, -6}, {10, -13}, {-8, -10}, {-1, -7} } },
	[63] = { .set = { {3, -4}, {-6, -6}, {13, -7}, {3, -7} } },
	[64] = { .set = { {2, -8}, {-2, -5}, {0, -12}, {-2, -10} } },
	[65] = { .set = { {11, -1}, {2, -8}, {1, 6}, {-1, -2} } },
	[66] = { .set = { {2, -5}, {6, -16}, {3, -9}, {-2, -7} } },
	[67] = { .set = { {6, -8}, {2, -5}, {11, -7}, {2, -9} } },
	[68] = { .set = { {5, -14}, {4, -6}, {-5, -13}, {-2, -9} } },
	[69] = { .set = { {7, -11}, {-6, -11}, {10, -4}, {1, -7} } },
	[70] = { .set = { {2, -10}, {-7, -17}, {9, -12}, {-3, -9} } },
	[71] = { .set = { {8, -14}, {6, -7}, {1, -13}, {2, -11} } },
	[72] = { .set = { {-1, -15}, {7, -12}, {-13, -9}, {-1, -10} } },
	[73] = { .set = { {-1, -11}, {8, -8}, {-10, -8}, {-1, -5} } },
	[74] = { .set = { {-1, -14}, {8, -13}, {-10, -15}, {-1, -9} } },
	[75] = { .set = { {-1, -19}, {7, -15}, {-13, -15}, {-1, -13} } },
	[76] = { .set = { {-7, -11}, {5, -9}, {-12, -8}, {-1, -10} } },
	[77] = { .set = { {-9, -11}, {4, -11}, {-12, -4}, {-3, -7} } },
	[78] = { .set = { {-4, -10}, {5, -17}, {-11, -12}, {1, -9} } },
	[79] = { .set = { {-8, -15}, {3, -10}, {-17, -12}, {-3, -10} } },
	[80] = { .set = { {-5, -8}, {-2, -8}, {-4, -4}, {0, -8} } },
	[81] = { .set = { {-13, -1}, {-4, -8}, {-3, 6}, {-1, -2} } },
	[82] = { .set = { {-4, -5}, {-8, -16}, {-5, -9}, {0, -7} } },
	[83] = { .set = { {-8, -7}, {-5, -8}, {-10, -3}, {-3, -8} } },
	[84] = { .set = { {-4, -6}, {-10, -8}, {2, -4}, {-1, -8} } },
	[85] = { .set = { {-9, 3}, {-11, -5}, {7, 2}, {-3, -4} } },
	[86] = { .set = { {-3, -6}, {-12, -13}, {6, -10}, {-1, -7} } },
	[87] = { .set = { {-5, -4}, {-10, -5}, {2, 0}, {-2, -6} } },
	[88] = { .set = { {-1, -5}, {-9, -8}, {7, -5}, {-1, -9} } },
	[89] = { .set = { {-1, 7}, {-12, 0}, {11, 0}, {-1, -2} } },
	[90] = { .set = { {-1, -7}, {-12, -10}, {10, -12}, {-1, -10} } },
	[91] = { .set = { {-1, 0}, {-12, -4}, {10, -4}, {-1, -4} } },
	[92] = { .set = { {-1, -2}, {-10, -7}, {10, 0}, {-1, -6} } },
	[93] = { .set = { {1, -6}, {-8, -8}, {9, -10}, {0, -8} } },
	[94] = { .set = { {7, 3}, {9, -5}, {-9, 2}, {1, -4} } },
	[95] = { .set = { {1, -6}, {10, -13}, {-8, -10}, {-1, -7} } },
	[96] = { .set = { {2, -4}, {12, -11}, {-7, -3}, {1, -5} } },
	[97] = { .set = { {3, -4}, {-6, -6}, {13, -7}, {3, -7} } },
	[98] = { .set = { {2, -8}, {-2, -5}, {0, -12}, {-2, -10} } },
	[99] = { .set = { {11, -3}, {2, -10}, {1, 4}, {-1, -4} } },
	[100] = { .set = { {2, -5}, {6, -16}, {3, -9}, {-2, -7} } },
	[101] = { .set = { {4, -6}, {5, -18}, {2, -3}, {-2, -6} } },
	[102] = { .set = { {6, -8}, {2, -5}, {11, -7}, {2, -9} } },
	[103] = { .set = { {5, -14}, {4, -6}, {-5, -13}, {-2, -9} } },
	[104] = { .set = { {7, -11}, {-6, -11}, {10, -4}, {1, -7} } },
	[105] = { .set = { {2, -10}, {-7, -17}, {9, -12}, {-3, -9} } },
	[106] = { .set = { {4, -13}, {-7, -19}, {10, -9}, {-2, -11} } },
	[107] = { .set = { {8, -14}, {6, -7}, {1, -13}, {2, -11} } },
	[108] = { .set = { {-1, -15}, {7, -12}, {-13, -9}, {-1, -10} } },
	[109] = { .set = { {-1, -11}, {8, -8}, {-10, -8}, {-1, -5} } },
	[110] = { .set = { {-1, -14}, {8, -13}, {-10, -15}, {-1, -9} } },
	[111] = { .set = { {-1, -18}, {11, -15}, {-13, -15}, {-1, -10} } },
	[112] = { .set = { {-1, -19}, {7, -15}, {-13, -15}, {-1, -13} } },
	[113] = { .set = { {-7, -11}, {5, -9}, {-12, -8}, {-1, -10} } },
	[114] = { .set = { {-9, -11}, {4, -11}, {-12, -4}, {-3, -7} } },
	[115] = { .set = { {-4, -10}, {5, -17}, {-11, -12}, {1, -9} } },
	[116] = { .set = { {-6, -13}, {5, -19}, {-12, -9}, {0, -11} } },
	[117] = { .set = { {-8, -15}, {3, -10}, {-17, -12}, {-3, -10} } },
	[118] = { .set = { {-5, -8}, {-2, -8}, {-4, -4}, {0, -8} } },
	[119] = { .set = { {-13, -3}, {-4, -10}, {-3, 4}, {-1, -4} } },
	[120] = { .set = { {-4, -5}, {-8, -16}, {-5, -9}, {0, -7} } },
	[121] = { .set = { {-6, -6}, {-7, -18}, {-4, -3}, {0, -6} } },
	[122] = { .set = { {-8, -7}, {-5, -8}, {-10, -3}, {-3, -8} } },
	[123] = { .set = { {-4, -6}, {-10, -8}, {2, -4}, {-1, -8} } },
	[124] = { .set = { {-9, 3}, {-11, -5}, {7, 2}, {-3, -4} } },
	[125] = { .set = { {-3, -6}, {-12, -13}, {6, -10}, {-1, -7} } },
	[126] = { .set = { {-4, -4}, {-14, -11}, {5, -3}, {-3, -5} } },
	[127] = { .set = { {-5, -4}, {-10, -5}, {2, 0}, {-2, -6} } },
	[128] = { .set = { {-1, -5}, {-9, -8}, {7, -5}, {-1, -9} } },
	[129] = { .set = { {-4, -6}, {-10, -8}, {2, -4}, {-1, -8} } },
	[130] = { .set = { {-5, -8}, {-2, -8}, {-4, -4}, {0, -8} } },
	[131] = { .set = { {-7, -11}, {5, -9}, {-12, -8}, {-1, -10} } },
	[132] = { .set = { {-1, -15}, {7, -12}, {-13, -9}, {-1, -10} } },
	[133] = { .set = { {5, -14}, {4, -6}, {-5, -13}, {-2, -9} } },
	[134] = { .set = { {2, -8}, {-2, -5}, {0, -12}, {-2, -10} } },
	[135] = { .set = { {1, -6}, {-8, -8}, {9, -10}, {0, -8} } },
	[136] = { .set = { {-1, -2}, {-10, -5}, {10, -3}, {0, -5} } },
	[137] = { .set = { {-1, 0}, {-10, -5}, {11, 0}, {0, -5} } },
	[138] = { .set = { {0, -8}, {-11, -6}, {12, -21}, {0, -9} } },
	[139] = { .set = { {3, -8}, {9, -6}, {-13, -17}, {-1, -7} } },
	[140] = { .set = { {5, -6}, {1, -7}, {-6, -19}, {0, -5} } },
	[141] = { .set = { {2, -11}, {-8, -8}, {9, -21}, {-1, -7} } },
	[142] = { .set = { {0, -11}, {12, -6}, {-11, -21}, {0, -7} } },
	[143] = { .set = { {-3, -11}, {7, -8}, {-10, -21}, {0, -7} } },
	[144] = { .set = { {-6, -6}, {-2, -7}, {5, -19}, {-1, -5} } },
	[145] = { .set = { {-3, -8}, {-9, -6}, {13, -17}, {1, -7} } },
	[146] = { .set = { {-1, -5}, {-9, -8}, {7, -5}, {-1, -9} } },
	[147] = { .set = { {-1, -3}, {-9, -7}, {8, -2}, {-1, -7} } },
	[148] = { .set = { {-1, -2}, {-10, -7}, {10, 0}, {-1, -6} } },
	[149] = { .set = { {1, -6}, {-8, -8}, {9, -10}, {0, -8} } },
	[150] = { .set = { {2, -5}, {-7, -8}, {12, -10}, {1, -8} } },
	[151] = { .set = { {3, -4}, {-6, -6}, {13, -7}, {3, -7} } },
	[152] = { .set = { {2, -8}, {-2, -5}, {0, -12}, {-2, -10} } },
	[153] = { .set = { {3, -8}, {-1, -5}, {7, -7}, {0, -9} } },
	[154] = { .set = { {4, -8}, {0, -5}, {9, -7}, {0, -9} } },
	[155] = { .set = { {5, -14}, {4, -6}, {-5, -13}, {-2, -9} } },
	[156] = { .set = { {4, -15}, {4, -6}, {-3, -13}, {-1, -10} } },
	[157] = { .set = { {6, -14}, {4, -7}, {-1, -13}, {0, -11} } },
	[158] = { .set = { {-1, -15}, {7, -12}, {-13, -9}, {-1, -10} } },
	[159] = { .set = { {-1, -16}, {8, -13}, {-13, -11}, {-1, -11} } },
	[160] = { .set = { {-1, -18}, {7, -14}, {-13, -14}, {-1, -12} } },
	[161] = { .set = { {-7, -11}, {5, -9}, {-12, -8}, {-1, -10} } },
	[162] = { .set = { {-6, -13}, {4, -9}, {-14, -9}, {-1, -10} } },
	[163] = { .set = { {-7, -14}, {4, -9}, {-16, -11}, {-2, -9} } },
	[164] = { .set = { {-5, -8}, {-2, -8}, {-4, -4}, {0, -8} } },
	[165] = { .set = { {-6, -8}, {-3, -9}, {-6, -4}, {-1, -8} } },
	[166] = { .set = { {-7, -7}, {-4, -8}, {-9, -3}, {-2, -8} } },
	[167] = { .set = { {-4, -6}, {-10, -8}, {2, -4}, {-1, -8} } },
	[168] = { .set = { {-6, -5}, {-10, -7}, {2, -3}, {-2, -7} } },
	[169] = { .set = { {-5, -4}, {-10, -5}, {2, 0}, {-2, -6} } },
	[170] = { .set = { {-1, 7}, {-12, 0}, {11, 0}, {-1, -2} } },
	[171] = { .set = { {-8, 4}, {-10, -4}, {8, 3}, {-2, -3} } },
	[172] = { .set = { {-13, -1}, {-4, -8}, {-3, 6}, {-1, -2} } },
	[173] = { .set = { {-8, -8}, {5, -8}, {-11, -1}, {-2, -4} } },
	[174] = { .set = { {-1, -9}, {8, -6}, {-10, -6}, {-1, -3} } },
	[175] = { .set = { {8, -8}, {-5, -8}, {11, -1}, {2, -4} } },
	[176] = { .set = { {11, -1}, {2, -8}, {1, 6}, {-1, -2} } },
	[177] = { .set = { {6, 4}, {8, -4}, {-10, 3}, {0, -3} } },
	[178] = { .set = { {-1, -2}, {-12, -6}, {10, -6}, {-1, -6} } },
	[179] = { .set = { {2, -4}, {12, -11}, {-7, -3}, {1, -5} } },
	[180] = { .set = { {6, -6}, {7, -18}, {4, -3}, {0, -6} } },
	[181] = { .set = { {5, -11}, {-6, -17}, {11, -7}, {-1, -9} } },
	[182] = { .set = { {-1, -17}, {11, -14}, {-13, -14}, {-1, -9} } },
	[183] = { .set = { {-5, -11}, {6, -17}, {-11, -7}, {1, -9} } },
	[184] = { .set = { {-7, -6}, {-8, -18}, {-5, -3}, {-1, -6} } },
	[185] = { .set = { {-4, -4}, {-14, -11}, {5, -3}, {-3, -5} } },
	[186] = { .set = { {-1, -5}, {-9, -8}, {7, -5}, {-1, -9} } },
	[187] = { .set = { {-1, -7}, {-12, -10}, {10, -12}, {-1, -10} } },
	[188] = { .set = { {-1, 7}, {-12, 0}, {11, 0}, {-1, -2} } },
	[189] = { .set = { {1, -6}, {-8, -8}, {9, -10}, {0, -8} } },
	[190] = { .set = { {1, -6}, {10, -13}, {-8, -10}, {-1, -7} } },
	[191] = { .set = { {7, 3}, {9, -5}, {-9, 2}, {1, -4} } },
	[192] = { .set = { {2, -8}, {-2, -5}, {0, -12}, {-2, -10} } },
	[193] = { .set = { {2, -5}, {6, -16}, {3, -9}, {-2, -7} } },
	[194] = { .set = { {13, -3}, {4, -10}, {3, 4}, {1, -4} } },
	[195] = { .set = { {5, -14}, {4, -6}, {-5, -13}, {-2, -9} } },
	[196] = { .set = { {2, -10}, {-7, -17}, {9, -12}, {-3, -9} } },
	[197] = { .set = { {7, -11}, {-6, -11}, {10, -4}, {1, -7} } },
	[198] = { .set = { {-1, -15}, {7, -12}, {-13, -9}, {-1, -10} } },
	[199] = { .set = { {-1, -14}, {8, -13}, {-10, -15}, {-1, -9} } },
	[200] = { .set = { {-1, -11}, {8, -8}, {-10, -8}, {-1, -5} } },
	[201] = { .set = { {-7, -11}, {5, -9}, {-12, -8}, {-1, -10} } },
	[202] = { .set = { {-4, -10}, {5, -17}, {-11, -12}, {1, -9} } },
	[203] = { .set = { {-9, -11}, {4, -11}, {-12, -4}, {-3, -7} } },
	[204] = { .set = { {-5, -8}, {-2, -8}, {-4, -4}, {0, -8} } },
	[205] = { .set = { {-4, -5}, {-8, -16}, {-5, -9}, {0, -7} } },
	[206] = { .set = { {-15, -3}, {-6, -10}, {-5, 4}, {-3, -4} } },
	[207] = { .set = { {-4, -6}, {-10, -8}, {2, -4}, {-1, -8} } },
	[208] = { .set = { {-3, -6}, {-12, -13}, {6, -10}, {-1, -7} } },
	[209] = { .set = { {-9, 3}, {-11, -5}, {7, 2}, {-3, -4} } },
	[210] = { .set = { {0, -6}, {-11, -9}, {11, -11}, {0, -9} } },
	[211] = { .set = { {-3, -6}, {-12, -13}, {6, -10}, {-1, -7} } },
	[212] = { .set = { {-4, -5}, {-8, -16}, {-5, -9}, {0, -7} } },
	[213] = { .set = { {-5, -10}, {4, -17}, {-12, -12}, {0, -9} } },
	[214] = { .set = { {-1, -14}, {8, -13}, {-10, -15}, {-1, -9} } },
	[215] = { .set = { {3, -10}, {-6, -17}, {10, -12}, {-2, -9} } },
	[216] = { .set = { {2, -5}, {6, -16}, {3, -9}, {-2, -7} } },
	[217] = { .set = { {1, -6}, {10, -13}, {-8, -10}, {-1, -7} } },
	[218] = { .set = { {-1, -5}, {-9, -8}, {7, -5}, {-1, -9} } },
	[219] = { .set = { {-4, -6}, {-10, -8}, {2, -4}, {-1, -8} } },
	[220] = { .set = { {-5, -8}, {-2, -8}, {-4, -4}, {0, -8} } },
	[221] = { .set = { {-7, -11}, {5, -9}, {-12, -8}, {-1, -10} } },
	[222] = { .set = { {-1, -15}, {7, -12}, {-13, -9}, {-1, -10} } },
	[223] = { .set = { {5, -14}, {4, -6}, {-5, -13}, {-2, -9} } },
	[224] = { .set = { {2, -8}, {-2, -5}, {0, -12}, {-2, -10} } },
	[225] = { .set = { {1, -6}, {-8, -8}, {9, -10}, {0, -8} } },
};

static const ax_anim *const sMukAnimTable1[] = {
	AX_ANIM_PTR(sMukAnims_1_1),
	AX_ANIM_PTR(sMukAnims_1_2),
	AX_ANIM_PTR(sMukAnims_1_3),
	AX_ANIM_PTR(sMukAnims_1_4),
	AX_ANIM_PTR(sMukAnims_1_5),
	AX_ANIM_PTR(sMukAnims_1_6),
	AX_ANIM_PTR(sMukAnims_1_7),
	AX_ANIM_PTR(sMukAnims_1_8),
};

static const ax_anim *const sMukAnimTable2[] = {
	AX_ANIM_PTR(sMukAnims_2_1),
	AX_ANIM_PTR(sMukAnims_2_2),
	AX_ANIM_PTR(sMukAnims_2_3),
	AX_ANIM_PTR(sMukAnims_2_4),
	AX_ANIM_PTR(sMukAnims_2_5),
	AX_ANIM_PTR(sMukAnims_2_6),
	AX_ANIM_PTR(sMukAnims_2_7),
	AX_ANIM_PTR(sMukAnims_2_8),
};

static const ax_anim *const sMukAnimTable3[] = {
	AX_ANIM_PTR(sMukAnims_3_1),
	AX_ANIM_PTR(sMukAnims_3_2),
	AX_ANIM_PTR(sMukAnims_3_3),
	AX_ANIM_PTR(sMukAnims_3_4),
	AX_ANIM_PTR(sMukAnims_3_5),
	AX_ANIM_PTR(sMukAnims_3_6),
	AX_ANIM_PTR(sMukAnims_3_7),
	AX_ANIM_PTR(sMukAnims_3_8),
};

static const ax_anim *const sMukAnimTable4[] = {
	AX_ANIM_PTR(sMukAnims_4_1),
	AX_ANIM_PTR(sMukAnims_4_2),
	AX_ANIM_PTR(sMukAnims_4_3),
	AX_ANIM_PTR(sMukAnims_4_4),
	AX_ANIM_PTR(sMukAnims_4_5),
	AX_ANIM_PTR(sMukAnims_4_6),
	AX_ANIM_PTR(sMukAnims_4_7),
	AX_ANIM_PTR(sMukAnims_4_8),
};

static const ax_anim *const sMukAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00381),
	AX_ANIM_PTR(gAxSharedAnim_00438),
	AX_ANIM_PTR(gAxSharedAnim_00433),
	AX_ANIM_PTR(gAxSharedAnim_00427),
	AX_ANIM_PTR(gAxSharedAnim_00418),
	AX_ANIM_PTR(gAxSharedAnim_00409),
	AX_ANIM_PTR(gAxSharedAnim_00401),
	AX_ANIM_PTR(gAxSharedAnim_00389),
};

static const ax_anim *const sMukAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
};

static const ax_anim *const sMukAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00466),
	AX_ANIM_PTR(gAxSharedAnim_00479),
	AX_ANIM_PTR(gAxSharedAnim_00487),
	AX_ANIM_PTR(gAxSharedAnim_00496),
	AX_ANIM_PTR(gAxSharedAnim_00508),
	AX_ANIM_PTR(gAxSharedAnim_00517),
	AX_ANIM_PTR(gAxSharedAnim_00523),
	AX_ANIM_PTR(gAxSharedAnim_00529),
};

static const ax_anim *const sMukAnimTable8[] = {
	AX_ANIM_PTR(sMukAnims_8_1),
	AX_ANIM_PTR(sMukAnims_8_2),
	AX_ANIM_PTR(sMukAnims_8_3),
	AX_ANIM_PTR(sMukAnims_8_4),
	AX_ANIM_PTR(sMukAnims_8_5),
	AX_ANIM_PTR(sMukAnims_8_6),
	AX_ANIM_PTR(sMukAnims_8_7),
	AX_ANIM_PTR(sMukAnims_8_8),
};

static const ax_anim *const sMukAnimTable9[] = {
	AX_ANIM_PTR(sMukAnims_9_1),
	AX_ANIM_PTR(sMukAnims_9_2),
	AX_ANIM_PTR(gAxSharedAnim_00875),
	AX_ANIM_PTR(sMukAnims_9_4),
	AX_ANIM_PTR(sMukAnims_9_5),
	AX_ANIM_PTR(sMukAnims_9_6),
	AX_ANIM_PTR(gAxSharedAnim_00822),
	AX_ANIM_PTR(sMukAnims_9_8),
};

static const ax_anim *const sMukAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00905),
	AX_ANIM_PTR(gAxSharedAnim_00918),
	AX_ANIM_PTR(gAxSharedAnim_00930),
	AX_ANIM_PTR(gAxSharedAnim_00942),
	AX_ANIM_PTR(gAxSharedAnim_00955),
	AX_ANIM_PTR(gAxSharedAnim_00965),
	AX_ANIM_PTR(gAxSharedAnim_00978),
	AX_ANIM_PTR(gAxSharedAnim_00993),
};

static const ax_anim *const sMukAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_01009),
	AX_ANIM_PTR(sMukAnims_11_2),
	AX_ANIM_PTR(sMukAnims_11_3),
	AX_ANIM_PTR(sMukAnims_11_4),
	AX_ANIM_PTR(gAxSharedAnim_01188),
	AX_ANIM_PTR(sMukAnims_11_6),
	AX_ANIM_PTR(sMukAnims_11_7),
	AX_ANIM_PTR(sMukAnims_11_8),
};

static const ax_anim *const sMukAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01337),
	AX_ANIM_PTR(gAxSharedAnim_01414),
	AX_ANIM_PTR(gAxSharedAnim_01392),
	AX_ANIM_PTR(gAxSharedAnim_01380),
	AX_ANIM_PTR(gAxSharedAnim_01379),
	AX_ANIM_PTR(gAxSharedAnim_01368),
	AX_ANIM_PTR(gAxSharedAnim_01354),
	AX_ANIM_PTR(gAxSharedAnim_01338),
};

static const ax_anim *const sMukAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01422),
	AX_ANIM_PTR(gAxSharedAnim_01464),
	AX_ANIM_PTR(gAxSharedAnim_01461),
	AX_ANIM_PTR(gAxSharedAnim_01456),
	AX_ANIM_PTR(gAxSharedAnim_01446),
	AX_ANIM_PTR(gAxSharedAnim_01443),
	AX_ANIM_PTR(gAxSharedAnim_01438),
	AX_ANIM_PTR(gAxSharedAnim_01429),
};

static const ax_anim *const *const sAxAnimationsMuk[] = {
	sMukAnimTable1,
	sMukAnimTable2,
	sMukAnimTable3,
	sMukAnimTable4,
	sMukAnimTable5,
	sMukAnimTable6,
	sMukAnimTable7,
	sMukAnimTable8,
	sMukAnimTable9,
	sMukAnimTable10,
	sMukAnimTable11,
	sMukAnimTable12,
	sMukAnimTable13,
};

static const ax_sprite *const sAxSpritesMuk[] = {
	sMukSprites1,
	sMukSprites2,
	sMukSprites3,
	sMukSprites4,
	sMukSprites5,
	sMukSprites6,
	sMukSprites7,
	sMukSprites8,
	sMukSprites9,
	sMukSprites10,
	sMukSprites11,
	sMukSprites12,
	sMukSprites13,
	sMukSprites14,
	sMukSprites15,
	sMukSprites16,
	sMukSprites17,
	sMukSprites18,
	sMukSprites19,
	sMukSprites20,
	sMukSprites21,
	sMukSprites22,
	sMukSprites23,
	sMukSprites24,
	sMukSprites25,
	sMukSprites26,
	sMukSprites27,
	sMukSprites28,
	sMukSprites29,
	sMukSprites30,
	sMukSprites31,
	sMukSprites32,
	sMukSprites33,
	sMukSprites34,
	sMukSprites35,
	sMukSprites36,
	sMukSprites37,
	sMukSprites38,
	sMukSprites39,
	sMukSprites40,
	sMukSprites41,
	sMukSprites42,
	sMukSprites43,
	sMukSprites44,
	sMukSprites45,
	sMukSprites46,
	sMukSprites47,
	sMukSprites48,
};

static const axmain sAxMainMuk = {
	.poses = sAxPosesMuk,
	.animations = sAxAnimationsMuk,
	.animCount = ARRAY_COUNT(sAxAnimationsMuk),
	.spriteData = sAxSpritesMuk,
	.positions = sAxPositionsMuk,
};
