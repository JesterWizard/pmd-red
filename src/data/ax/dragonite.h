/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainDragonite;
const SiroArchive gAxDragonite = {"SIRO", &sAxMainDragonite};

static const ax_pose sDragonitePose1[] = {
	AX_POSE(0, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose2[] = {
	AX_POSE(1, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose3[] = {
	AX_POSE(2, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose4[] = {
	AX_POSE(3, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(4, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose5[] = {
	AX_POSE(5, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose6[] = {
	AX_POSE(6, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(7, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose7[] = {
	AX_POSE(8, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(9, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(238, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose8[] = {
	AX_POSE(10, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(11, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(238, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose9[] = {
	AX_POSE(12, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(13, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(238, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose10[] = {
	AX_POSE(14, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(15, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose11[] = {
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose12[] = {
	AX_POSE(17, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose13[] = {
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose14[] = {
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose15[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose16[] = {
	AX_POSE(14, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(15, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose17[] = {
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose18[] = {
	AX_POSE(17, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose19[] = {
	AX_POSE(8, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(9, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(242, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose20[] = {
	AX_POSE(10, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(11, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(242, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose21[] = {
	AX_POSE(12, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(13, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(242, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose22[] = {
	AX_POSE(3, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(4, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose23[] = {
	AX_POSE(5, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose24[] = {
	AX_POSE(6, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(7, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose28[] = {
	AX_POSE(21, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose32[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose36[] = {
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose40[] = {
	AX_POSE(24, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose41[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose42[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose43[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose44[] = {
	AX_POSE(25, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose48[] = {
	AX_POSE(24, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose52[] = {
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose56[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose92[] = {
	AX_POSE(26, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose96[] = {
	AX_POSE(27, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose100[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose104[] = {
	AX_POSE(29, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose108[] = {
	AX_POSE(30, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose112[] = {
	AX_POSE(29, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose116[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose120[] = {
	AX_POSE(27, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose144[] = {
	AX_POSE(30, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose161[] = {
	AX_POSE(31, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose162[] = {
	AX_POSE(32, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose163[] = {
	AX_POSE(33, OAM1(6, ST_OAM_SQUARE     , 2), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(34, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(1, 3, 8)),
	AX_POSE(35, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(5, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose164[] = {
	AX_POSE(36, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(37, OAM1(252, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose165[] = {
	AX_POSE(38, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(39, OAM1(252, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose166[] = {
	AX_POSE(40, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose167[] = {
	AX_POSE(41, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose168[] = {
	AX_POSE(40, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose169[] = {
	AX_POSE(38, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(39, OAM1(252, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose170[] = {
	AX_POSE(36, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(37, OAM1(252, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose197[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose222[] = {
	AX_POSE(10, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(11, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(237, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose223[] = {
	AX_POSE(12, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(13, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(237, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose224[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose225[] = {
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose229[] = {
	AX_POSE(29, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose230[] = {
	AX_POSE(24, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose239[] = {
	AX_POSE(29, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose240[] = {
	AX_POSE(24, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose242[] = {
	AX_POSE(10, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(11, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(243, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose243[] = {
	AX_POSE(12, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(13, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(243, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose244[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose245[] = {
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose252[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonitePose258[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const u8 sDragoniteAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_2_1.lz");
static const u8 sDragoniteAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_2_2.lz");
static const u8 sDragoniteAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_2_3.lz");
static const u8 sDragoniteAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_2_4.lz");
static const u8 sDragoniteAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_2_5.lz");
static const u8 sDragoniteAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_2_6.lz");
static const u8 sDragoniteAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_2_7.lz");
static const u8 sDragoniteAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_2_8.lz");
static const u8 sDragoniteAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_3_1.lz");
static const u8 sDragoniteAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_3_2.lz");
static const u8 sDragoniteAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_3_3.lz");
static const u8 sDragoniteAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_3_4.lz");
static const u8 sDragoniteAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_3_5.lz");
static const u8 sDragoniteAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_3_6.lz");
static const u8 sDragoniteAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_3_7.lz");
static const u8 sDragoniteAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_3_8.lz");
static const u8 sDragoniteAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_4_1.lz");
static const u8 sDragoniteAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_4_2.lz");
static const u8 sDragoniteAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_4_3.lz");
static const u8 sDragoniteAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_4_4.lz");
static const u8 sDragoniteAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_4_5.lz");
static const u8 sDragoniteAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_4_6.lz");
static const u8 sDragoniteAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_4_7.lz");
static const u8 sDragoniteAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_4_8.lz");
static const u8 sDragoniteAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_5_1.lz");
static const u8 sDragoniteAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_5_2.lz");
static const u8 sDragoniteAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_5_3.lz");
static const u8 sDragoniteAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_5_4.lz");
static const u8 sDragoniteAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_5_5.lz");
static const u8 sDragoniteAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_5_6.lz");
static const u8 sDragoniteAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_5_7.lz");
static const u8 sDragoniteAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_5_8.lz");
static const u8 sDragoniteAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_8_1.lz");
static const u8 sDragoniteAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_8_2.lz");
static const u8 sDragoniteAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_8_3.lz");
static const u8 sDragoniteAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_8_4.lz");
static const u8 sDragoniteAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_8_5.lz");
static const u8 sDragoniteAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_8_6.lz");
static const u8 sDragoniteAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_8_7.lz");
static const u8 sDragoniteAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_8_8.lz");
static const u8 sDragoniteAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_9_1.lz");
static const u8 sDragoniteAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_9_2.lz");
static const u8 sDragoniteAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_9_3.lz");
static const u8 sDragoniteAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_9_4.lz");
static const u8 sDragoniteAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_9_5.lz");
static const u8 sDragoniteAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_9_6.lz");
static const u8 sDragoniteAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_9_7.lz");
static const u8 sDragoniteAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_9_8.lz");
static const u8 sDragoniteAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_11_1.lz");
static const u8 sDragoniteAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_11_2.lz");
static const u8 sDragoniteAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_11_3.lz");
static const u8 sDragoniteAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_11_4.lz");
static const u8 sDragoniteAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_11_5.lz");
static const u8 sDragoniteAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_11_6.lz");
static const u8 sDragoniteAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_11_7.lz");
static const u8 sDragoniteAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonite/sDragoniteAnims_11_8.lz");

static const u8 sDragoniteGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_1.4bpp.lz");
static const ax_sprite sDragoniteSprites1[] = {
	{sDragoniteGfx1, ARRAY_COUNT(sDragoniteGfx1)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_2.4bpp.lz");
static const ax_sprite sDragoniteSprites2[] = {
	{sDragoniteGfx2, ARRAY_COUNT(sDragoniteGfx2)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_3.4bpp.lz");
static const ax_sprite sDragoniteSprites3[] = {
	{sDragoniteGfx3, ARRAY_COUNT(sDragoniteGfx3)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_4.4bpp.lz");
static const ax_sprite sDragoniteSprites4[] = {
	{sDragoniteGfx4, ARRAY_COUNT(sDragoniteGfx4)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_5.4bpp.lz");
static const ax_sprite sDragoniteSprites5[] = {
	{sDragoniteGfx5, ARRAY_COUNT(sDragoniteGfx5)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_6.4bpp.lz");
static const ax_sprite sDragoniteSprites6[] = {
	{sDragoniteGfx6, ARRAY_COUNT(sDragoniteGfx6)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_7.4bpp.lz");
static const ax_sprite sDragoniteSprites7[] = {
	{sDragoniteGfx7, ARRAY_COUNT(sDragoniteGfx7)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_8.4bpp.lz");
static const ax_sprite sDragoniteSprites8[] = {
	{sDragoniteGfx8, ARRAY_COUNT(sDragoniteGfx8)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_9.4bpp.lz");
static const ax_sprite sDragoniteSprites9[] = {
	{sDragoniteGfx9, ARRAY_COUNT(sDragoniteGfx9)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_10.4bpp.lz");
static const ax_sprite sDragoniteSprites10[] = {
	{sDragoniteGfx10, ARRAY_COUNT(sDragoniteGfx10)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_11.4bpp.lz");
static const ax_sprite sDragoniteSprites11[] = {
	{sDragoniteGfx11, ARRAY_COUNT(sDragoniteGfx11)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_12.4bpp.lz");
static const ax_sprite sDragoniteSprites12[] = {
	{sDragoniteGfx12, ARRAY_COUNT(sDragoniteGfx12)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_13.4bpp.lz");
static const ax_sprite sDragoniteSprites13[] = {
	{sDragoniteGfx13, ARRAY_COUNT(sDragoniteGfx13)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_14.4bpp.lz");
static const ax_sprite sDragoniteSprites14[] = {
	{sDragoniteGfx14, ARRAY_COUNT(sDragoniteGfx14)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_15.4bpp.lz");
static const ax_sprite sDragoniteSprites15[] = {
	{sDragoniteGfx15, ARRAY_COUNT(sDragoniteGfx15)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_16.4bpp.lz");
static const ax_sprite sDragoniteSprites16[] = {
	{sDragoniteGfx16, ARRAY_COUNT(sDragoniteGfx16)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_17.4bpp.lz");
static const ax_sprite sDragoniteSprites17[] = {
	{sDragoniteGfx17, ARRAY_COUNT(sDragoniteGfx17)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_18.4bpp.lz");
static const ax_sprite sDragoniteSprites18[] = {
	{sDragoniteGfx18, ARRAY_COUNT(sDragoniteGfx18)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_19.4bpp.lz");
static const ax_sprite sDragoniteSprites19[] = {
	{sDragoniteGfx19, ARRAY_COUNT(sDragoniteGfx19)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_20.4bpp.lz");
static const ax_sprite sDragoniteSprites20[] = {
	{sDragoniteGfx20, ARRAY_COUNT(sDragoniteGfx20)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_21.4bpp.lz");
static const ax_sprite sDragoniteSprites21[] = {
	{sDragoniteGfx21, ARRAY_COUNT(sDragoniteGfx21)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_22.4bpp.lz");
static const u8 sDragoniteGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_22_1.4bpp.lz");
static const ax_sprite sDragoniteSprites22[] = {
	{sDragoniteGfx22, ARRAY_COUNT(sDragoniteGfx22)}, 
	{NULL, 32}, 
	{sDragoniteGfx22_1, ARRAY_COUNT(sDragoniteGfx22_1)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_23.4bpp.lz");
static const u8 sDragoniteGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_23_1.4bpp.lz");
static const ax_sprite sDragoniteSprites23[] = {
	{sDragoniteGfx23, ARRAY_COUNT(sDragoniteGfx23)}, 
	{NULL, 32}, 
	{sDragoniteGfx23_1, ARRAY_COUNT(sDragoniteGfx23_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_24.4bpp.lz");
static const u8 sDragoniteGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_24_1.4bpp.lz");
static const u8 sDragoniteGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_24_2.4bpp.lz");
static const ax_sprite sDragoniteSprites24[] = {
	{sDragoniteGfx24, ARRAY_COUNT(sDragoniteGfx24)}, 
	{NULL, 32}, 
	{sDragoniteGfx24_1, ARRAY_COUNT(sDragoniteGfx24_1)}, 
	{NULL, 32}, 
	{sDragoniteGfx24_2, ARRAY_COUNT(sDragoniteGfx24_2)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_25.4bpp.lz");
static const u8 sDragoniteGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_25_1.4bpp.lz");
static const u8 sDragoniteGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_25_2.4bpp.lz");
static const ax_sprite sDragoniteSprites25[] = {
	{NULL, 32}, 
	{sDragoniteGfx25, ARRAY_COUNT(sDragoniteGfx25)}, 
	{NULL, 32}, 
	{sDragoniteGfx25_1, ARRAY_COUNT(sDragoniteGfx25_1)}, 
	{NULL, 32}, 
	{sDragoniteGfx25_2, ARRAY_COUNT(sDragoniteGfx25_2)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_26.4bpp.lz");
static const u8 sDragoniteGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_26_1.4bpp.lz");
static const ax_sprite sDragoniteSprites26[] = {
	{sDragoniteGfx26, ARRAY_COUNT(sDragoniteGfx26)}, 
	{NULL, 32}, 
	{sDragoniteGfx26_1, ARRAY_COUNT(sDragoniteGfx26_1)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_27.4bpp.lz");
static const u8 sDragoniteGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_27_1.4bpp.lz");
static const ax_sprite sDragoniteSprites27[] = {
	{NULL, 32}, 
	{sDragoniteGfx27, ARRAY_COUNT(sDragoniteGfx27)}, 
	{NULL, 32}, 
	{sDragoniteGfx27_1, ARRAY_COUNT(sDragoniteGfx27_1)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_28.4bpp.lz");
static const u8 sDragoniteGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_28_1.4bpp.lz");
static const ax_sprite sDragoniteSprites28[] = {
	{sDragoniteGfx28, ARRAY_COUNT(sDragoniteGfx28)}, 
	{NULL, 32}, 
	{sDragoniteGfx28_1, ARRAY_COUNT(sDragoniteGfx28_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_29.4bpp.lz");
static const u8 sDragoniteGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_29_1.4bpp.lz");
static const ax_sprite sDragoniteSprites29[] = {
	{sDragoniteGfx29, ARRAY_COUNT(sDragoniteGfx29)}, 
	{NULL, 32}, 
	{sDragoniteGfx29_1, ARRAY_COUNT(sDragoniteGfx29_1)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_30.4bpp.lz");
static const u8 sDragoniteGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_30_1.4bpp.lz");
static const ax_sprite sDragoniteSprites30[] = {
	{sDragoniteGfx30, ARRAY_COUNT(sDragoniteGfx30)}, 
	{NULL, 32}, 
	{sDragoniteGfx30_1, ARRAY_COUNT(sDragoniteGfx30_1)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_31.4bpp.lz");
static const u8 sDragoniteGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_31_1.4bpp.lz");
static const ax_sprite sDragoniteSprites31[] = {
	{sDragoniteGfx31, ARRAY_COUNT(sDragoniteGfx31)}, 
	{NULL, 32}, 
	{sDragoniteGfx31_1, ARRAY_COUNT(sDragoniteGfx31_1)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_32.4bpp.lz");
static const ax_sprite sDragoniteSprites32[] = {
	{sDragoniteGfx32, ARRAY_COUNT(sDragoniteGfx32)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_33.4bpp.lz");
static const ax_sprite sDragoniteSprites33[] = {
	{sDragoniteGfx33, ARRAY_COUNT(sDragoniteGfx33)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_34.4bpp.lz");
static const ax_sprite sDragoniteSprites34[] = {
	{sDragoniteGfx34, ARRAY_COUNT(sDragoniteGfx34)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_35.4bpp.lz");
static const ax_sprite sDragoniteSprites35[] = {
	{sDragoniteGfx35, ARRAY_COUNT(sDragoniteGfx35)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_36.4bpp.lz");
static const ax_sprite sDragoniteSprites36[] = {
	{sDragoniteGfx36, ARRAY_COUNT(sDragoniteGfx36)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_37.4bpp.lz");
static const ax_sprite sDragoniteSprites37[] = {
	{sDragoniteGfx37, ARRAY_COUNT(sDragoniteGfx37)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_38.4bpp.lz");
static const ax_sprite sDragoniteSprites38[] = {
	{sDragoniteGfx38, ARRAY_COUNT(sDragoniteGfx38)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_39.4bpp.lz");
static const ax_sprite sDragoniteSprites39[] = {
	{sDragoniteGfx39, ARRAY_COUNT(sDragoniteGfx39)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_40.4bpp.lz");
static const ax_sprite sDragoniteSprites40[] = {
	{sDragoniteGfx40, ARRAY_COUNT(sDragoniteGfx40)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_41.4bpp.lz");
static const ax_sprite sDragoniteSprites41[] = {
	{sDragoniteGfx41, ARRAY_COUNT(sDragoniteGfx41)}, 
	{NULL, 0}
};
static const u8 sDragoniteGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonite/sprite_42.4bpp.lz");
static const ax_sprite sDragoniteSprites42[] = {
	{sDragoniteGfx42, ARRAY_COUNT(sDragoniteGfx42)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesDragonite[] = {
	sDragonitePose1,
	sDragonitePose2,
	sDragonitePose3,
	sDragonitePose4,
	sDragonitePose5,
	sDragonitePose6,
	sDragonitePose7,
	sDragonitePose8,
	sDragonitePose9,
	sDragonitePose10,
	sDragonitePose11,
	sDragonitePose12,
	sDragonitePose13,
	sDragonitePose14,
	sDragonitePose15,
	sDragonitePose16,
	sDragonitePose17,
	sDragonitePose18,
	sDragonitePose19,
	sDragonitePose20,
	sDragonitePose21,
	sDragonitePose22,
	sDragonitePose23,
	sDragonitePose24,
	sDragonitePose1,
	sDragonitePose2,
	sDragonitePose3,
	sDragonitePose28,
	sDragonitePose4,
	sDragonitePose5,
	sDragonitePose6,
	sDragonitePose32,
	sDragonitePose7,
	sDragonitePose8,
	sDragonitePose9,
	sDragonitePose36,
	sDragonitePose10,
	sDragonitePose11,
	sDragonitePose12,
	sDragonitePose40,
	sDragonitePose41,
	sDragonitePose42,
	sDragonitePose43,
	sDragonitePose44,
	sDragonitePose16,
	sDragonitePose17,
	sDragonitePose18,
	sDragonitePose48,
	sDragonitePose19,
	sDragonitePose20,
	sDragonitePose21,
	sDragonitePose52,
	sDragonitePose22,
	sDragonitePose23,
	sDragonitePose24,
	sDragonitePose56,
	sDragonitePose1,
	sDragonitePose2,
	sDragonitePose3,
	sDragonitePose28,
	sDragonitePose4,
	sDragonitePose5,
	sDragonitePose6,
	sDragonitePose32,
	sDragonitePose7,
	sDragonitePose8,
	sDragonitePose9,
	sDragonitePose36,
	sDragonitePose10,
	sDragonitePose11,
	sDragonitePose12,
	sDragonitePose40,
	sDragonitePose41,
	sDragonitePose42,
	sDragonitePose43,
	sDragonitePose44,
	sDragonitePose16,
	sDragonitePose17,
	sDragonitePose18,
	sDragonitePose48,
	sDragonitePose19,
	sDragonitePose20,
	sDragonitePose21,
	sDragonitePose52,
	sDragonitePose22,
	sDragonitePose23,
	sDragonitePose24,
	sDragonitePose56,
	sDragonitePose1,
	sDragonitePose2,
	sDragonitePose3,
	sDragonitePose92,
	sDragonitePose4,
	sDragonitePose5,
	sDragonitePose6,
	sDragonitePose96,
	sDragonitePose7,
	sDragonitePose8,
	sDragonitePose9,
	sDragonitePose100,
	sDragonitePose10,
	sDragonitePose11,
	sDragonitePose12,
	sDragonitePose104,
	sDragonitePose13,
	sDragonitePose14,
	sDragonitePose15,
	sDragonitePose108,
	sDragonitePose16,
	sDragonitePose17,
	sDragonitePose18,
	sDragonitePose112,
	sDragonitePose19,
	sDragonitePose20,
	sDragonitePose21,
	sDragonitePose116,
	sDragonitePose22,
	sDragonitePose23,
	sDragonitePose24,
	sDragonitePose120,
	sDragonitePose1,
	sDragonitePose2,
	sDragonitePose3,
	sDragonitePose92,
	sDragonitePose28,
	sDragonitePose4,
	sDragonitePose5,
	sDragonitePose6,
	sDragonitePose96,
	sDragonitePose32,
	sDragonitePose7,
	sDragonitePose8,
	sDragonitePose9,
	sDragonitePose100,
	sDragonitePose36,
	sDragonitePose10,
	sDragonitePose11,
	sDragonitePose12,
	sDragonitePose104,
	sDragonitePose40,
	sDragonitePose41,
	sDragonitePose42,
	sDragonitePose43,
	sDragonitePose144,
	sDragonitePose44,
	sDragonitePose16,
	sDragonitePose17,
	sDragonitePose18,
	sDragonitePose112,
	sDragonitePose48,
	sDragonitePose19,
	sDragonitePose20,
	sDragonitePose21,
	sDragonitePose116,
	sDragonitePose52,
	sDragonitePose22,
	sDragonitePose23,
	sDragonitePose24,
	sDragonitePose120,
	sDragonitePose56,
	sDragonitePose161,
	sDragonitePose162,
	sDragonitePose163,
	sDragonitePose164,
	sDragonitePose165,
	sDragonitePose166,
	sDragonitePose167,
	sDragonitePose168,
	sDragonitePose169,
	sDragonitePose170,
	sDragonitePose1,
	sDragonitePose2,
	sDragonitePose3,
	sDragonitePose4,
	sDragonitePose5,
	sDragonitePose6,
	sDragonitePose7,
	sDragonitePose8,
	sDragonitePose9,
	sDragonitePose10,
	sDragonitePose11,
	sDragonitePose12,
	sDragonitePose13,
	sDragonitePose14,
	sDragonitePose15,
	sDragonitePose16,
	sDragonitePose17,
	sDragonitePose18,
	sDragonitePose19,
	sDragonitePose20,
	sDragonitePose21,
	sDragonitePose22,
	sDragonitePose23,
	sDragonitePose24,
	sDragonitePose92,
	sDragonitePose120,
	sDragonitePose197,
	sDragonitePose112,
	sDragonitePose108,
	sDragonitePose104,
	sDragonitePose100,
	sDragonitePose96,
	sDragonitePose92,
	sDragonitePose96,
	sDragonitePose100,
	sDragonitePose104,
	sDragonitePose108,
	sDragonitePose112,
	sDragonitePose197,
	sDragonitePose120,
	sDragonitePose1,
	sDragonitePose2,
	sDragonitePose3,
	sDragonitePose92,
	sDragonitePose28,
	sDragonitePose4,
	sDragonitePose5,
	sDragonitePose6,
	sDragonitePose96,
	sDragonitePose32,
	sDragonitePose7,
	sDragonitePose222,
	sDragonitePose223,
	sDragonitePose224,
	sDragonitePose225,
	sDragonitePose10,
	sDragonitePose11,
	sDragonitePose12,
	sDragonitePose229,
	sDragonitePose230,
	sDragonitePose41,
	sDragonitePose42,
	sDragonitePose43,
	sDragonitePose144,
	sDragonitePose44,
	sDragonitePose16,
	sDragonitePose17,
	sDragonitePose18,
	sDragonitePose239,
	sDragonitePose240,
	sDragonitePose19,
	sDragonitePose242,
	sDragonitePose243,
	sDragonitePose244,
	sDragonitePose245,
	sDragonitePose22,
	sDragonitePose23,
	sDragonitePose24,
	sDragonitePose120,
	sDragonitePose56,
	sDragonitePose28,
	sDragonitePose252,
	sDragonitePose52,
	sDragonitePose48,
	sDragonitePose44,
	sDragonitePose40,
	sDragonitePose36,
	sDragonitePose258,
	sDragonitePose1,
	sDragonitePose22,
	sDragonitePose19,
	sDragonitePose16,
	sDragonitePose13,
	sDragonitePose10,
	sDragonitePose7,
	sDragonitePose4,
	sDragonitePose4,
	sDragonitePose5,
	sDragonitePose6,
	sDragonitePose7,
	sDragonitePose8,
	sDragonitePose9,
	sDragonitePose10,
	sDragonitePose11,
	sDragonitePose12,
	sDragonitePose13,
	sDragonitePose14,
	sDragonitePose15,
	sDragonitePose16,
	sDragonitePose17,
	sDragonitePose18,
	sDragonitePose19,
	sDragonitePose20,
	sDragonitePose21,
	sDragonitePose22,
	sDragonitePose23,
	sDragonitePose24,
};

static const struct PositionSets sAxPositionsDragonite[] = {
	[0] = { .set = { {-1, -17}, {-10, -10}, {8, -10}, {-1, -12} } },
	[1] = { .set = { {0, -15}, {-9, -12}, {6, -11}, {-1, -11} } },
	[2] = { .set = { {-2, -15}, {-8, -11}, {7, -12}, {-1, -11} } },
	[3] = { .set = { {3, -17}, {7, -11}, {-6, -7}, {1, -10} } },
	[4] = { .set = { {3, -15}, {0, -12}, {-1, -7}, {0, -9} } },
	[5] = { .set = { {4, -15}, {8, -11}, {-8, -9}, {0, -10} } },
	[6] = { .set = { {6, -19}, {0, -10}, {-1, -7}, {-1, -11} } },
	[7] = { .set = { {7, -17}, {-5, -10}, {4, -8}, {-1, -10} } },
	[8] = { .set = { {7, -17}, {5, -10}, {-5, -8}, {0, -8} } },
	[9] = { .set = { {3, -20}, {-7, -12}, {3, -8}, {-2, -11} } },
	[10] = { .set = { {4, -18}, {-9, -9}, {7, -11}, {-1, -10} } },
	[11] = { .set = { {4, -18}, {1, -13}, {1, -7}, {-2, -10} } },
	[12] = { .set = { {-1, -21}, {7, -10}, {-9, -10}, {-1, -11} } },
	[13] = { .set = { {-2, -20}, {6, -8}, {-7, -13}, {-1, -9} } },
	[14] = { .set = { {0, -20}, {5, -10}, {-8, -8}, {0, -9} } },
	[15] = { .set = { {-4, -20}, {6, -12}, {-4, -8}, {1, -11} } },
	[16] = { .set = { {-5, -18}, {8, -9}, {-8, -11}, {0, -10} } },
	[17] = { .set = { {-5, -18}, {-2, -13}, {-2, -7}, {1, -10} } },
	[18] = { .set = { {-7, -19}, {-1, -10}, {0, -7}, {0, -11} } },
	[19] = { .set = { {-8, -17}, {4, -10}, {-5, -8}, {0, -10} } },
	[20] = { .set = { {-8, -17}, {-6, -10}, {4, -8}, {-1, -8} } },
	[21] = { .set = { {-4, -17}, {-8, -11}, {5, -7}, {-2, -10} } },
	[22] = { .set = { {-4, -15}, {-1, -12}, {0, -7}, {-1, -9} } },
	[23] = { .set = { {-5, -15}, {-9, -11}, {7, -9}, {-1, -10} } },
	[24] = { .set = { {-1, -17}, {-10, -10}, {8, -10}, {-1, -12} } },
	[25] = { .set = { {0, -15}, {-9, -12}, {6, -11}, {-1, -11} } },
	[26] = { .set = { {-2, -15}, {-8, -11}, {7, -12}, {-1, -11} } },
	[27] = { .set = { {-1, -10}, {-7, -10}, {4, -10}, {-1, -8} } },
	[28] = { .set = { {3, -17}, {7, -11}, {-6, -7}, {1, -10} } },
	[29] = { .set = { {3, -15}, {0, -12}, {-1, -7}, {0, -9} } },
	[30] = { .set = { {4, -15}, {8, -11}, {-8, -9}, {0, -10} } },
	[31] = { .set = { {3, -8}, {5, -7}, {-2, -6}, {-1, -7} } },
	[32] = { .set = { {6, -19}, {0, -10}, {-1, -7}, {-1, -11} } },
	[33] = { .set = { {7, -17}, {-5, -10}, {4, -8}, {-1, -10} } },
	[34] = { .set = { {7, -17}, {5, -10}, {-5, -8}, {0, -8} } },
	[35] = { .set = { {6, -10}, {5, -9}, {3, -9}, {-1, -8} } },
	[36] = { .set = { {3, -20}, {-7, -12}, {3, -8}, {-2, -11} } },
	[37] = { .set = { {4, -18}, {-9, -9}, {7, -11}, {-1, -10} } },
	[38] = { .set = { {4, -18}, {1, -13}, {1, -7}, {-2, -10} } },
	[39] = { .set = { {7, -11}, {3, -14}, {8, -11}, {-1, -10} } },
	[40] = { .set = { {-1, -20}, {7, -9}, {-9, -9}, {-1, -10} } },
	[41] = { .set = { {-2, -19}, {6, -7}, {-7, -12}, {-1, -8} } },
	[42] = { .set = { {0, -19}, {5, -9}, {-8, -7}, {0, -8} } },
	[43] = { .set = { {-1, -15}, {2, -16}, {-4, -16}, {-1, -10} } },
	[44] = { .set = { {-4, -20}, {6, -12}, {-4, -8}, {1, -11} } },
	[45] = { .set = { {-5, -18}, {8, -9}, {-8, -11}, {0, -10} } },
	[46] = { .set = { {-5, -18}, {-2, -13}, {-2, -7}, {1, -10} } },
	[47] = { .set = { {-8, -11}, {-4, -14}, {-9, -11}, {0, -10} } },
	[48] = { .set = { {-7, -19}, {-1, -10}, {0, -7}, {0, -11} } },
	[49] = { .set = { {-8, -17}, {4, -10}, {-5, -8}, {0, -10} } },
	[50] = { .set = { {-8, -17}, {-6, -10}, {4, -8}, {-1, -8} } },
	[51] = { .set = { {-7, -10}, {-6, -9}, {-4, -9}, {0, -8} } },
	[52] = { .set = { {-4, -17}, {-8, -11}, {5, -7}, {-2, -10} } },
	[53] = { .set = { {-4, -15}, {-1, -12}, {0, -7}, {-1, -9} } },
	[54] = { .set = { {-5, -15}, {-9, -11}, {7, -9}, {-1, -10} } },
	[55] = { .set = { {-4, -8}, {-6, -7}, {1, -6}, {0, -7} } },
	[56] = { .set = { {-1, -17}, {-10, -10}, {8, -10}, {-1, -12} } },
	[57] = { .set = { {0, -15}, {-9, -12}, {6, -11}, {-1, -11} } },
	[58] = { .set = { {-2, -15}, {-8, -11}, {7, -12}, {-1, -11} } },
	[59] = { .set = { {-1, -10}, {-7, -10}, {4, -10}, {-1, -8} } },
	[60] = { .set = { {3, -17}, {7, -11}, {-6, -7}, {1, -10} } },
	[61] = { .set = { {3, -15}, {0, -12}, {-1, -7}, {0, -9} } },
	[62] = { .set = { {4, -15}, {8, -11}, {-8, -9}, {0, -10} } },
	[63] = { .set = { {3, -8}, {5, -7}, {-2, -6}, {-1, -7} } },
	[64] = { .set = { {6, -19}, {0, -10}, {-1, -7}, {-1, -11} } },
	[65] = { .set = { {7, -17}, {-5, -10}, {4, -8}, {-1, -10} } },
	[66] = { .set = { {7, -17}, {5, -10}, {-5, -8}, {0, -8} } },
	[67] = { .set = { {6, -10}, {5, -9}, {3, -9}, {-1, -8} } },
	[68] = { .set = { {3, -20}, {-7, -12}, {3, -8}, {-2, -11} } },
	[69] = { .set = { {4, -18}, {-9, -9}, {7, -11}, {-1, -10} } },
	[70] = { .set = { {4, -18}, {1, -13}, {1, -7}, {-2, -10} } },
	[71] = { .set = { {7, -11}, {3, -14}, {8, -11}, {-1, -10} } },
	[72] = { .set = { {-1, -20}, {7, -9}, {-9, -9}, {-1, -10} } },
	[73] = { .set = { {-2, -19}, {6, -7}, {-7, -12}, {-1, -8} } },
	[74] = { .set = { {0, -19}, {5, -9}, {-8, -7}, {0, -8} } },
	[75] = { .set = { {-1, -15}, {2, -16}, {-4, -16}, {-1, -10} } },
	[76] = { .set = { {-4, -20}, {6, -12}, {-4, -8}, {1, -11} } },
	[77] = { .set = { {-5, -18}, {8, -9}, {-8, -11}, {0, -10} } },
	[78] = { .set = { {-5, -18}, {-2, -13}, {-2, -7}, {1, -10} } },
	[79] = { .set = { {-8, -11}, {-4, -14}, {-9, -11}, {0, -10} } },
	[80] = { .set = { {-7, -19}, {-1, -10}, {0, -7}, {0, -11} } },
	[81] = { .set = { {-8, -17}, {4, -10}, {-5, -8}, {0, -10} } },
	[82] = { .set = { {-8, -17}, {-6, -10}, {4, -8}, {-1, -8} } },
	[83] = { .set = { {-7, -10}, {-6, -9}, {-4, -9}, {0, -8} } },
	[84] = { .set = { {-4, -17}, {-8, -11}, {5, -7}, {-2, -10} } },
	[85] = { .set = { {-4, -15}, {-1, -12}, {0, -7}, {-1, -9} } },
	[86] = { .set = { {-5, -15}, {-9, -11}, {7, -9}, {-1, -10} } },
	[87] = { .set = { {-4, -8}, {-6, -7}, {1, -6}, {0, -7} } },
	[88] = { .set = { {-1, -17}, {-10, -10}, {8, -10}, {-1, -12} } },
	[89] = { .set = { {0, -15}, {-9, -12}, {6, -11}, {-1, -11} } },
	[90] = { .set = { {-2, -15}, {-8, -11}, {7, -12}, {-1, -11} } },
	[91] = { .set = { {-1, -8}, {-10, -9}, {9, -9}, {-1, -7} } },
	[92] = { .set = { {3, -17}, {7, -11}, {-6, -7}, {1, -10} } },
	[93] = { .set = { {3, -15}, {0, -12}, {-1, -7}, {0, -9} } },
	[94] = { .set = { {4, -15}, {8, -11}, {-8, -9}, {0, -10} } },
	[95] = { .set = { {10, -10}, {3, -10}, {-4, -8}, {1, -8} } },
	[96] = { .set = { {6, -19}, {0, -10}, {-1, -7}, {-1, -11} } },
	[97] = { .set = { {7, -17}, {-5, -10}, {4, -8}, {-1, -10} } },
	[98] = { .set = { {7, -17}, {5, -10}, {-5, -8}, {0, -8} } },
	[99] = { .set = { {10, -12}, {-2, -12}, {-2, -10}, {2, -8} } },
	[100] = { .set = { {3, -20}, {-7, -12}, {3, -8}, {-2, -11} } },
	[101] = { .set = { {4, -18}, {-9, -9}, {7, -11}, {-1, -10} } },
	[102] = { .set = { {4, -18}, {1, -13}, {1, -7}, {-2, -10} } },
	[103] = { .set = { {9, -17}, {-5, -14}, {1, -9}, {-1, -11} } },
	[104] = { .set = { {-1, -21}, {7, -10}, {-9, -10}, {-1, -11} } },
	[105] = { .set = { {-2, -20}, {6, -8}, {-7, -13}, {-1, -9} } },
	[106] = { .set = { {0, -20}, {5, -10}, {-8, -8}, {0, -9} } },
	[107] = { .set = { {-1, -22}, {8, -13}, {-10, -13}, {-1, -11} } },
	[108] = { .set = { {-4, -20}, {6, -12}, {-4, -8}, {1, -11} } },
	[109] = { .set = { {-5, -18}, {8, -9}, {-8, -11}, {0, -10} } },
	[110] = { .set = { {-5, -18}, {-2, -13}, {-2, -7}, {1, -10} } },
	[111] = { .set = { {-10, -17}, {4, -14}, {-2, -9}, {0, -11} } },
	[112] = { .set = { {-7, -19}, {-1, -10}, {0, -7}, {0, -11} } },
	[113] = { .set = { {-8, -17}, {4, -10}, {-5, -8}, {0, -10} } },
	[114] = { .set = { {-8, -17}, {-6, -10}, {4, -8}, {-1, -8} } },
	[115] = { .set = { {-11, -12}, {1, -12}, {1, -10}, {-3, -8} } },
	[116] = { .set = { {-4, -17}, {-8, -11}, {5, -7}, {-2, -10} } },
	[117] = { .set = { {-4, -15}, {-1, -12}, {0, -7}, {-1, -9} } },
	[118] = { .set = { {-5, -15}, {-9, -11}, {7, -9}, {-1, -10} } },
	[119] = { .set = { {-11, -10}, {-4, -10}, {3, -8}, {-2, -8} } },
	[120] = { .set = { {-1, -17}, {-10, -10}, {8, -10}, {-1, -12} } },
	[121] = { .set = { {0, -15}, {-9, -12}, {6, -11}, {-1, -11} } },
	[122] = { .set = { {-2, -15}, {-8, -11}, {7, -12}, {-1, -11} } },
	[123] = { .set = { {-1, -8}, {-10, -9}, {9, -9}, {-1, -7} } },
	[124] = { .set = { {-1, -10}, {-7, -10}, {4, -10}, {-1, -8} } },
	[125] = { .set = { {3, -17}, {7, -11}, {-6, -7}, {1, -10} } },
	[126] = { .set = { {3, -15}, {0, -12}, {-1, -7}, {0, -9} } },
	[127] = { .set = { {4, -15}, {8, -11}, {-8, -9}, {0, -10} } },
	[128] = { .set = { {10, -10}, {3, -10}, {-4, -8}, {1, -8} } },
	[129] = { .set = { {3, -8}, {5, -7}, {-2, -6}, {-1, -7} } },
	[130] = { .set = { {6, -19}, {0, -10}, {-1, -7}, {-1, -11} } },
	[131] = { .set = { {7, -17}, {-5, -10}, {4, -8}, {-1, -10} } },
	[132] = { .set = { {7, -17}, {5, -10}, {-5, -8}, {0, -8} } },
	[133] = { .set = { {10, -12}, {-2, -12}, {-2, -10}, {2, -8} } },
	[134] = { .set = { {6, -10}, {5, -9}, {3, -9}, {-1, -8} } },
	[135] = { .set = { {3, -20}, {-7, -12}, {3, -8}, {-2, -11} } },
	[136] = { .set = { {4, -18}, {-9, -9}, {7, -11}, {-1, -10} } },
	[137] = { .set = { {4, -18}, {1, -13}, {1, -7}, {-2, -10} } },
	[138] = { .set = { {9, -17}, {-5, -14}, {1, -9}, {-1, -11} } },
	[139] = { .set = { {7, -11}, {3, -14}, {8, -11}, {-1, -10} } },
	[140] = { .set = { {-1, -20}, {7, -9}, {-9, -9}, {-1, -10} } },
	[141] = { .set = { {-2, -19}, {6, -7}, {-7, -12}, {-1, -8} } },
	[142] = { .set = { {0, -19}, {5, -9}, {-8, -7}, {0, -8} } },
	[143] = { .set = { {-1, -21}, {8, -12}, {-10, -12}, {-1, -10} } },
	[144] = { .set = { {-1, -15}, {2, -16}, {-4, -16}, {-1, -10} } },
	[145] = { .set = { {-4, -20}, {6, -12}, {-4, -8}, {1, -11} } },
	[146] = { .set = { {-5, -18}, {8, -9}, {-8, -11}, {0, -10} } },
	[147] = { .set = { {-5, -18}, {-2, -13}, {-2, -7}, {1, -10} } },
	[148] = { .set = { {-10, -17}, {4, -14}, {-2, -9}, {0, -11} } },
	[149] = { .set = { {-8, -11}, {-4, -14}, {-9, -11}, {0, -10} } },
	[150] = { .set = { {-7, -19}, {-1, -10}, {0, -7}, {0, -11} } },
	[151] = { .set = { {-8, -17}, {4, -10}, {-5, -8}, {0, -10} } },
	[152] = { .set = { {-8, -17}, {-6, -10}, {4, -8}, {-1, -8} } },
	[153] = { .set = { {-11, -12}, {1, -12}, {1, -10}, {-3, -8} } },
	[154] = { .set = { {-7, -10}, {-6, -9}, {-4, -9}, {0, -8} } },
	[155] = { .set = { {-4, -17}, {-8, -11}, {5, -7}, {-2, -10} } },
	[156] = { .set = { {-4, -15}, {-1, -12}, {0, -7}, {-1, -9} } },
	[157] = { .set = { {-5, -15}, {-9, -11}, {7, -9}, {-1, -10} } },
	[158] = { .set = { {-11, -10}, {-4, -10}, {3, -8}, {-2, -8} } },
	[159] = { .set = { {-4, -8}, {-6, -7}, {1, -6}, {0, -7} } },
	[160] = { .set = { {-1, -11}, {-5, -5}, {3, -5}, {-1, -6} } },
	[161] = { .set = { {-1, -10}, {-5, -5}, {3, -5}, {-1, -7} } },
	[162] = { .set = { {0, -19}, {-7, -17}, {10, -14}, {0, -14} } },
	[163] = { .set = { {3, -20}, {7, -19}, {-9, -13}, {-1, -14} } },
	[164] = { .set = { {3, -20}, {8, -20}, {-6, -12}, {0, -14} } },
	[165] = { .set = { {1, -20}, {1, -19}, {-2, -9}, {0, -13} } },
	[166] = { .set = { {0, -21}, {5, -15}, {-7, -9}, {0, -12} } },
	[167] = { .set = { {-2, -20}, {-2, -19}, {1, -9}, {-1, -13} } },
	[168] = { .set = { {-4, -20}, {-9, -20}, {5, -12}, {-1, -14} } },
	[169] = { .set = { {-4, -20}, {-8, -19}, {8, -13}, {0, -14} } },
	[170] = { .set = { {-1, -17}, {-10, -10}, {8, -10}, {-1, -12} } },
	[171] = { .set = { {0, -15}, {-9, -12}, {6, -11}, {-1, -11} } },
	[172] = { .set = { {-2, -15}, {-8, -11}, {7, -12}, {-1, -11} } },
	[173] = { .set = { {3, -17}, {7, -11}, {-6, -7}, {1, -10} } },
	[174] = { .set = { {3, -15}, {0, -12}, {-1, -7}, {0, -9} } },
	[175] = { .set = { {4, -15}, {8, -11}, {-8, -9}, {0, -10} } },
	[176] = { .set = { {6, -19}, {0, -10}, {-1, -7}, {-1, -11} } },
	[177] = { .set = { {7, -17}, {-5, -10}, {4, -8}, {-1, -10} } },
	[178] = { .set = { {7, -17}, {5, -10}, {-5, -8}, {0, -8} } },
	[179] = { .set = { {3, -20}, {-7, -12}, {3, -8}, {-2, -11} } },
	[180] = { .set = { {4, -18}, {-9, -9}, {7, -11}, {-1, -10} } },
	[181] = { .set = { {4, -18}, {1, -13}, {1, -7}, {-2, -10} } },
	[182] = { .set = { {-1, -21}, {7, -10}, {-9, -10}, {-1, -11} } },
	[183] = { .set = { {-2, -20}, {6, -8}, {-7, -13}, {-1, -9} } },
	[184] = { .set = { {0, -20}, {5, -10}, {-8, -8}, {0, -9} } },
	[185] = { .set = { {-4, -20}, {6, -12}, {-4, -8}, {1, -11} } },
	[186] = { .set = { {-5, -18}, {8, -9}, {-8, -11}, {0, -10} } },
	[187] = { .set = { {-5, -18}, {-2, -13}, {-2, -7}, {1, -10} } },
	[188] = { .set = { {-7, -19}, {-1, -10}, {0, -7}, {0, -11} } },
	[189] = { .set = { {-8, -17}, {4, -10}, {-5, -8}, {0, -10} } },
	[190] = { .set = { {-8, -17}, {-6, -10}, {4, -8}, {-1, -8} } },
	[191] = { .set = { {-4, -17}, {-8, -11}, {5, -7}, {-2, -10} } },
	[192] = { .set = { {-4, -15}, {-1, -12}, {0, -7}, {-1, -9} } },
	[193] = { .set = { {-5, -15}, {-9, -11}, {7, -9}, {-1, -10} } },
	[194] = { .set = { {-1, -8}, {-10, -9}, {9, -9}, {-1, -7} } },
	[195] = { .set = { {-11, -10}, {-4, -10}, {3, -8}, {-2, -8} } },
	[196] = { .set = { {-10, -12}, {2, -12}, {2, -10}, {-2, -8} } },
	[197] = { .set = { {-10, -17}, {4, -14}, {-2, -9}, {0, -11} } },
	[198] = { .set = { {-1, -22}, {8, -13}, {-10, -13}, {-1, -11} } },
	[199] = { .set = { {9, -17}, {-5, -14}, {1, -9}, {-1, -11} } },
	[200] = { .set = { {10, -12}, {-2, -12}, {-2, -10}, {2, -8} } },
	[201] = { .set = { {10, -10}, {3, -10}, {-4, -8}, {1, -8} } },
	[202] = { .set = { {-1, -8}, {-10, -9}, {9, -9}, {-1, -7} } },
	[203] = { .set = { {10, -10}, {3, -10}, {-4, -8}, {1, -8} } },
	[204] = { .set = { {10, -12}, {-2, -12}, {-2, -10}, {2, -8} } },
	[205] = { .set = { {9, -17}, {-5, -14}, {1, -9}, {-1, -11} } },
	[206] = { .set = { {-1, -22}, {8, -13}, {-10, -13}, {-1, -11} } },
	[207] = { .set = { {-10, -17}, {4, -14}, {-2, -9}, {0, -11} } },
	[208] = { .set = { {-10, -12}, {2, -12}, {2, -10}, {-2, -8} } },
	[209] = { .set = { {-11, -10}, {-4, -10}, {3, -8}, {-2, -8} } },
	[210] = { .set = { {-1, -17}, {-10, -10}, {8, -10}, {-1, -12} } },
	[211] = { .set = { {0, -15}, {-9, -12}, {6, -11}, {-1, -11} } },
	[212] = { .set = { {-2, -15}, {-8, -11}, {7, -12}, {-1, -11} } },
	[213] = { .set = { {-1, -8}, {-10, -9}, {9, -9}, {-1, -7} } },
	[214] = { .set = { {-1, -10}, {-7, -10}, {4, -10}, {-1, -8} } },
	[215] = { .set = { {3, -17}, {7, -11}, {-6, -7}, {1, -10} } },
	[216] = { .set = { {3, -15}, {0, -12}, {-1, -7}, {0, -9} } },
	[217] = { .set = { {4, -15}, {8, -11}, {-8, -9}, {0, -10} } },
	[218] = { .set = { {10, -10}, {3, -10}, {-4, -8}, {1, -8} } },
	[219] = { .set = { {3, -8}, {5, -7}, {-2, -6}, {-1, -7} } },
	[220] = { .set = { {6, -19}, {0, -10}, {-1, -7}, {-1, -11} } },
	[221] = { .set = { {6, -17}, {-6, -10}, {3, -8}, {-2, -10} } },
	[222] = { .set = { {6, -17}, {4, -10}, {-6, -8}, {-1, -8} } },
	[223] = { .set = { {8, -12}, {-4, -12}, {-4, -10}, {0, -8} } },
	[224] = { .set = { {4, -10}, {3, -9}, {1, -9}, {-3, -8} } },
	[225] = { .set = { {3, -20}, {-7, -12}, {3, -8}, {-2, -11} } },
	[226] = { .set = { {4, -18}, {-9, -9}, {7, -11}, {-1, -10} } },
	[227] = { .set = { {4, -18}, {1, -13}, {1, -7}, {-2, -10} } },
	[228] = { .set = { {7, -17}, {-7, -14}, {-1, -9}, {-3, -11} } },
	[229] = { .set = { {5, -11}, {1, -14}, {6, -11}, {-3, -10} } },
	[230] = { .set = { {-1, -20}, {7, -9}, {-9, -9}, {-1, -10} } },
	[231] = { .set = { {-2, -19}, {6, -7}, {-7, -12}, {-1, -8} } },
	[232] = { .set = { {0, -19}, {5, -9}, {-8, -7}, {0, -8} } },
	[233] = { .set = { {-1, -21}, {8, -12}, {-10, -12}, {-1, -10} } },
	[234] = { .set = { {-1, -15}, {2, -16}, {-4, -16}, {-1, -10} } },
	[235] = { .set = { {-4, -20}, {6, -12}, {-4, -8}, {1, -11} } },
	[236] = { .set = { {-5, -18}, {8, -9}, {-8, -11}, {0, -10} } },
	[237] = { .set = { {-5, -18}, {-2, -13}, {-2, -7}, {1, -10} } },
	[238] = { .set = { {-8, -17}, {6, -14}, {0, -9}, {2, -11} } },
	[239] = { .set = { {-6, -11}, {-2, -14}, {-7, -11}, {2, -10} } },
	[240] = { .set = { {-7, -19}, {-1, -10}, {0, -7}, {0, -11} } },
	[241] = { .set = { {-7, -17}, {5, -10}, {-4, -8}, {1, -10} } },
	[242] = { .set = { {-7, -17}, {-5, -10}, {5, -8}, {0, -8} } },
	[243] = { .set = { {-8, -12}, {4, -12}, {4, -10}, {0, -8} } },
	[244] = { .set = { {-5, -10}, {-4, -9}, {-2, -9}, {2, -8} } },
	[245] = { .set = { {-4, -17}, {-8, -11}, {5, -7}, {-2, -10} } },
	[246] = { .set = { {-4, -15}, {-1, -12}, {0, -7}, {-1, -9} } },
	[247] = { .set = { {-5, -15}, {-9, -11}, {7, -9}, {-1, -10} } },
	[248] = { .set = { {-11, -10}, {-4, -10}, {3, -8}, {-2, -8} } },
	[249] = { .set = { {-4, -8}, {-6, -7}, {1, -6}, {0, -7} } },
	[250] = { .set = { {-1, -10}, {-7, -10}, {4, -10}, {-1, -8} } },
	[251] = { .set = { {-5, -8}, {-7, -7}, {0, -6}, {-1, -7} } },
	[252] = { .set = { {-7, -10}, {-6, -9}, {-4, -9}, {0, -8} } },
	[253] = { .set = { {-8, -11}, {-4, -14}, {-9, -11}, {0, -10} } },
	[254] = { .set = { {-1, -15}, {2, -16}, {-4, -16}, {-1, -10} } },
	[255] = { .set = { {7, -11}, {3, -14}, {8, -11}, {-1, -10} } },
	[256] = { .set = { {6, -10}, {5, -9}, {3, -9}, {-1, -8} } },
	[257] = { .set = { {4, -8}, {6, -7}, {-1, -6}, {0, -7} } },
	[258] = { .set = { {-1, -17}, {-10, -10}, {8, -10}, {-1, -12} } },
	[259] = { .set = { {-4, -17}, {-8, -11}, {5, -7}, {-2, -10} } },
	[260] = { .set = { {-7, -19}, {-1, -10}, {0, -7}, {0, -11} } },
	[261] = { .set = { {-4, -20}, {6, -12}, {-4, -8}, {1, -11} } },
	[262] = { .set = { {-1, -21}, {7, -10}, {-9, -10}, {-1, -11} } },
	[263] = { .set = { {3, -20}, {-7, -12}, {3, -8}, {-2, -11} } },
	[264] = { .set = { {6, -19}, {0, -10}, {-1, -7}, {-1, -11} } },
	[265] = { .set = { {3, -17}, {7, -11}, {-6, -7}, {1, -10} } },
	[266] = { .set = { {3, -17}, {7, -11}, {-6, -7}, {1, -10} } },
	[267] = { .set = { {3, -15}, {0, -12}, {-1, -7}, {0, -9} } },
	[268] = { .set = { {4, -15}, {8, -11}, {-8, -9}, {0, -10} } },
	[269] = { .set = { {6, -19}, {0, -10}, {-1, -7}, {-1, -11} } },
	[270] = { .set = { {7, -17}, {-5, -10}, {4, -8}, {-1, -10} } },
	[271] = { .set = { {7, -17}, {5, -10}, {-5, -8}, {0, -8} } },
	[272] = { .set = { {3, -20}, {-7, -12}, {3, -8}, {-2, -11} } },
	[273] = { .set = { {4, -18}, {-9, -9}, {7, -11}, {-1, -10} } },
	[274] = { .set = { {4, -18}, {1, -13}, {1, -7}, {-2, -10} } },
	[275] = { .set = { {-1, -21}, {7, -10}, {-9, -10}, {-1, -11} } },
	[276] = { .set = { {-2, -20}, {6, -8}, {-7, -13}, {-1, -9} } },
	[277] = { .set = { {0, -20}, {5, -10}, {-8, -8}, {0, -9} } },
	[278] = { .set = { {-4, -20}, {6, -12}, {-4, -8}, {1, -11} } },
	[279] = { .set = { {-5, -18}, {8, -9}, {-8, -11}, {0, -10} } },
	[280] = { .set = { {-5, -18}, {-2, -13}, {-2, -7}, {1, -10} } },
	[281] = { .set = { {-7, -19}, {-1, -10}, {0, -7}, {0, -11} } },
	[282] = { .set = { {-8, -17}, {4, -10}, {-5, -8}, {0, -10} } },
	[283] = { .set = { {-8, -17}, {-6, -10}, {4, -8}, {-1, -8} } },
	[284] = { .set = { {-4, -17}, {-8, -11}, {5, -7}, {-2, -10} } },
	[285] = { .set = { {-4, -15}, {-1, -12}, {0, -7}, {-1, -9} } },
	[286] = { .set = { {-5, -15}, {-9, -11}, {7, -9}, {-1, -10} } },
};

static const ax_anim *const sDragoniteAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02603),
	AX_ANIM_PTR(gAxSharedAnim_02679),
	AX_ANIM_PTR(gAxSharedAnim_02688),
	AX_ANIM_PTR(gAxSharedAnim_02697),
	AX_ANIM_PTR(gAxSharedAnim_02615),
	AX_ANIM_PTR(gAxSharedAnim_02637),
	AX_ANIM_PTR(gAxSharedAnim_02650),
	AX_ANIM_PTR(gAxSharedAnim_02659),
};

static const ax_anim *const sDragoniteAnimTable2[] = {
	AX_ANIM_PTR(sDragoniteAnims_2_1),
	AX_ANIM_PTR(sDragoniteAnims_2_2),
	AX_ANIM_PTR(sDragoniteAnims_2_3),
	AX_ANIM_PTR(sDragoniteAnims_2_4),
	AX_ANIM_PTR(sDragoniteAnims_2_5),
	AX_ANIM_PTR(sDragoniteAnims_2_6),
	AX_ANIM_PTR(sDragoniteAnims_2_7),
	AX_ANIM_PTR(sDragoniteAnims_2_8),
};

static const ax_anim *const sDragoniteAnimTable3[] = {
	AX_ANIM_PTR(sDragoniteAnims_3_1),
	AX_ANIM_PTR(sDragoniteAnims_3_2),
	AX_ANIM_PTR(sDragoniteAnims_3_3),
	AX_ANIM_PTR(sDragoniteAnims_3_4),
	AX_ANIM_PTR(sDragoniteAnims_3_5),
	AX_ANIM_PTR(sDragoniteAnims_3_6),
	AX_ANIM_PTR(sDragoniteAnims_3_7),
	AX_ANIM_PTR(sDragoniteAnims_3_8),
};

static const ax_anim *const sDragoniteAnimTable4[] = {
	AX_ANIM_PTR(sDragoniteAnims_4_1),
	AX_ANIM_PTR(sDragoniteAnims_4_2),
	AX_ANIM_PTR(sDragoniteAnims_4_3),
	AX_ANIM_PTR(sDragoniteAnims_4_4),
	AX_ANIM_PTR(sDragoniteAnims_4_5),
	AX_ANIM_PTR(sDragoniteAnims_4_6),
	AX_ANIM_PTR(sDragoniteAnims_4_7),
	AX_ANIM_PTR(sDragoniteAnims_4_8),
};

static const ax_anim *const sDragoniteAnimTable5[] = {
	AX_ANIM_PTR(sDragoniteAnims_5_1),
	AX_ANIM_PTR(sDragoniteAnims_5_2),
	AX_ANIM_PTR(sDragoniteAnims_5_3),
	AX_ANIM_PTR(sDragoniteAnims_5_4),
	AX_ANIM_PTR(sDragoniteAnims_5_5),
	AX_ANIM_PTR(sDragoniteAnims_5_6),
	AX_ANIM_PTR(sDragoniteAnims_5_7),
	AX_ANIM_PTR(sDragoniteAnims_5_8),
};

static const ax_anim *const sDragoniteAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02371),
	AX_ANIM_PTR(gAxSharedAnim_02371),
	AX_ANIM_PTR(gAxSharedAnim_02371),
	AX_ANIM_PTR(gAxSharedAnim_02371),
	AX_ANIM_PTR(gAxSharedAnim_02371),
	AX_ANIM_PTR(gAxSharedAnim_02371),
	AX_ANIM_PTR(gAxSharedAnim_02371),
	AX_ANIM_PTR(gAxSharedAnim_02371),
};

static const ax_anim *const sDragoniteAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00693),
	AX_ANIM_PTR(gAxSharedAnim_00709),
	AX_ANIM_PTR(gAxSharedAnim_00717),
	AX_ANIM_PTR(gAxSharedAnim_00730),
	AX_ANIM_PTR(gAxSharedAnim_00752),
	AX_ANIM_PTR(gAxSharedAnim_00763),
	AX_ANIM_PTR(gAxSharedAnim_00775),
	AX_ANIM_PTR(gAxSharedAnim_00785),
};

static const ax_anim *const sDragoniteAnimTable8[] = {
	AX_ANIM_PTR(sDragoniteAnims_8_1),
	AX_ANIM_PTR(sDragoniteAnims_8_2),
	AX_ANIM_PTR(sDragoniteAnims_8_3),
	AX_ANIM_PTR(sDragoniteAnims_8_4),
	AX_ANIM_PTR(sDragoniteAnims_8_5),
	AX_ANIM_PTR(sDragoniteAnims_8_6),
	AX_ANIM_PTR(sDragoniteAnims_8_7),
	AX_ANIM_PTR(sDragoniteAnims_8_8),
};

static const ax_anim *const sDragoniteAnimTable9[] = {
	AX_ANIM_PTR(sDragoniteAnims_9_1),
	AX_ANIM_PTR(sDragoniteAnims_9_2),
	AX_ANIM_PTR(sDragoniteAnims_9_3),
	AX_ANIM_PTR(sDragoniteAnims_9_4),
	AX_ANIM_PTR(sDragoniteAnims_9_5),
	AX_ANIM_PTR(sDragoniteAnims_9_6),
	AX_ANIM_PTR(sDragoniteAnims_9_7),
	AX_ANIM_PTR(sDragoniteAnims_9_8),
};

static const ax_anim *const sDragoniteAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01241),
	AX_ANIM_PTR(gAxSharedAnim_01252),
	AX_ANIM_PTR(gAxSharedAnim_01266),
	AX_ANIM_PTR(gAxSharedAnim_01277),
	AX_ANIM_PTR(gAxSharedAnim_01285),
	AX_ANIM_PTR(gAxSharedAnim_01300),
	AX_ANIM_PTR(gAxSharedAnim_01313),
	AX_ANIM_PTR(gAxSharedAnim_01324),
};

static const ax_anim *const sDragoniteAnimTable11[] = {
	AX_ANIM_PTR(sDragoniteAnims_11_1),
	AX_ANIM_PTR(sDragoniteAnims_11_2),
	AX_ANIM_PTR(sDragoniteAnims_11_3),
	AX_ANIM_PTR(sDragoniteAnims_11_4),
	AX_ANIM_PTR(sDragoniteAnims_11_5),
	AX_ANIM_PTR(sDragoniteAnims_11_6),
	AX_ANIM_PTR(sDragoniteAnims_11_7),
	AX_ANIM_PTR(sDragoniteAnims_11_8),
};

static const ax_anim *const sDragoniteAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01639),
	AX_ANIM_PTR(gAxSharedAnim_01673),
	AX_ANIM_PTR(gAxSharedAnim_01665),
	AX_ANIM_PTR(gAxSharedAnim_01661),
	AX_ANIM_PTR(gAxSharedAnim_01660),
	AX_ANIM_PTR(gAxSharedAnim_01655),
	AX_ANIM_PTR(gAxSharedAnim_01646),
	AX_ANIM_PTR(gAxSharedAnim_01640),
};

static const ax_anim *const sDragoniteAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01678),
	AX_ANIM_PTR(gAxSharedAnim_01710),
	AX_ANIM_PTR(gAxSharedAnim_01708),
	AX_ANIM_PTR(gAxSharedAnim_01704),
	AX_ANIM_PTR(gAxSharedAnim_01698),
	AX_ANIM_PTR(gAxSharedAnim_01694),
	AX_ANIM_PTR(gAxSharedAnim_01692),
	AX_ANIM_PTR(gAxSharedAnim_01682),
};

static const ax_anim *const *const sAxAnimationsDragonite[] = {
	sDragoniteAnimTable1,
	sDragoniteAnimTable2,
	sDragoniteAnimTable3,
	sDragoniteAnimTable4,
	sDragoniteAnimTable5,
	sDragoniteAnimTable6,
	sDragoniteAnimTable7,
	sDragoniteAnimTable8,
	sDragoniteAnimTable9,
	sDragoniteAnimTable10,
	sDragoniteAnimTable11,
	sDragoniteAnimTable12,
	sDragoniteAnimTable13,
};

static const ax_sprite *const sAxSpritesDragonite[] = {
	sDragoniteSprites1,
	sDragoniteSprites2,
	sDragoniteSprites3,
	sDragoniteSprites4,
	sDragoniteSprites5,
	sDragoniteSprites6,
	sDragoniteSprites7,
	sDragoniteSprites8,
	sDragoniteSprites9,
	sDragoniteSprites10,
	sDragoniteSprites11,
	sDragoniteSprites12,
	sDragoniteSprites13,
	sDragoniteSprites14,
	sDragoniteSprites15,
	sDragoniteSprites16,
	sDragoniteSprites17,
	sDragoniteSprites18,
	sDragoniteSprites19,
	sDragoniteSprites20,
	sDragoniteSprites21,
	sDragoniteSprites22,
	sDragoniteSprites23,
	sDragoniteSprites24,
	sDragoniteSprites25,
	sDragoniteSprites26,
	sDragoniteSprites27,
	sDragoniteSprites28,
	sDragoniteSprites29,
	sDragoniteSprites30,
	sDragoniteSprites31,
	sDragoniteSprites32,
	sDragoniteSprites33,
	sDragoniteSprites34,
	sDragoniteSprites35,
	sDragoniteSprites36,
	sDragoniteSprites37,
	sDragoniteSprites38,
	sDragoniteSprites39,
	sDragoniteSprites40,
	sDragoniteSprites41,
	sDragoniteSprites42,
};

static const axmain sAxMainDragonite = {
	.poses = sAxPosesDragonite,
	.animations = sAxAnimationsDragonite,
	.animCount = ARRAY_COUNT(sAxAnimationsDragonite),
	.spriteData = sAxSpritesDragonite,
	.positions = sAxPositionsDragonite,
};
