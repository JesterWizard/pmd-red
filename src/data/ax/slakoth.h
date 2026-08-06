/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainSlakoth;
const SiroArchive gAxSlakoth = {"SIRO", &sAxMainSlakoth};

static const ax_pose sSlakothPose1[] = {
	AX_POSE(0, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose2[] = {
	AX_POSE(1, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose3[] = {
	AX_POSE(2, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose4[] = {
	AX_POSE(3, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose5[] = {
	AX_POSE(4, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose6[] = {
	AX_POSE(5, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose7[] = {
	AX_POSE(6, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose8[] = {
	AX_POSE(7, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose9[] = {
	AX_POSE(8, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose10[] = {
	AX_POSE(9, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose11[] = {
	AX_POSE(10, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose12[] = {
	AX_POSE(11, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose13[] = {
	AX_POSE(12, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose14[] = {
	AX_POSE(13, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose15[] = {
	AX_POSE(14, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose16[] = {
	AX_POSE(9, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose17[] = {
	AX_POSE(10, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose18[] = {
	AX_POSE(11, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose19[] = {
	AX_POSE(6, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose20[] = {
	AX_POSE(7, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose21[] = {
	AX_POSE(8, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose22[] = {
	AX_POSE(3, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose23[] = {
	AX_POSE(4, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose24[] = {
	AX_POSE(5, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose52[] = {
	AX_POSE(15, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose56[] = {
	AX_POSE(16, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose60[] = {
	AX_POSE(17, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose64[] = {
	AX_POSE(18, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose68[] = {
	AX_POSE(19, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose72[] = {
	AX_POSE(18, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose76[] = {
	AX_POSE(17, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose80[] = {
	AX_POSE(16, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose84[] = {
	AX_POSE(20, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose88[] = {
	AX_POSE(21, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose92[] = {
	AX_POSE(22, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose96[] = {
	AX_POSE(23, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose100[] = {
	AX_POSE(24, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose104[] = {
	AX_POSE(23, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose108[] = {
	AX_POSE(22, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose112[] = {
	AX_POSE(21, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose116[] = {
	AX_POSE(20, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose124[] = {
	AX_POSE(22, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose128[] = {
	AX_POSE(23, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose132[] = {
	AX_POSE(24, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose136[] = {
	AX_POSE(23, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose140[] = {
	AX_POSE(22, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose145[] = {
	AX_POSE(25, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose146[] = {
	AX_POSE(26, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose147[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose148[] = {
	AX_POSE(28, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose149[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose150[] = {
	AX_POSE(30, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose151[] = {
	AX_POSE(31, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose152[] = {
	AX_POSE(30, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose153[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose154[] = {
	AX_POSE(28, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose155[] = {
	AX_POSE(32, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose156[] = {
	AX_POSE(33, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose157[] = {
	AX_POSE(34, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose158[] = {
	AX_POSE(35, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose159[] = {
	AX_POSE(36, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose160[] = {
	AX_POSE(35, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose161[] = {
	AX_POSE(34, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose162[] = {
	AX_POSE(33, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose172[] = {
	AX_POSE(21, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose174[] = {
	AX_POSE(23, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose175[] = {
	AX_POSE(24, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose176[] = {
	AX_POSE(23, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose178[] = {
	AX_POSE(21, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose188[] = {
	AX_POSE(15, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose190[] = {
	AX_POSE(16, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose192[] = {
	AX_POSE(17, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose194[] = {
	AX_POSE(18, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose196[] = {
	AX_POSE(19, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose198[] = {
	AX_POSE(18, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose200[] = {
	AX_POSE(17, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose202[] = {
	AX_POSE(16, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose205[] = {
	AX_POSE(6, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakothPose209[] = {
	AX_POSE(6, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_anim sSlakothAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 26, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 25, .offset = {0, 16}, .shadow = {0, 16} },
	{ .frames = 3, .unkFlags = 1, .poseId = 26, .offset = {0, 16}, .shadow = {0, 16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 25, .offset = {0, 16}, .shadow = {0, 16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 26, .offset = {0, 16}, .shadow = {0, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 27, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 29, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 28, .offset = {19, 16}, .shadow = {19, 16} },
	{ .frames = 3, .unkFlags = 1, .poseId = 29, .offset = {20, 15}, .shadow = {20, 15} },
	{ .frames = 3, .unkFlags = 0, .poseId = 28, .offset = {19, 16}, .shadow = {19, 16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 29, .offset = {20, 15}, .shadow = {20, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 32, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 31, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 32, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 31, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 32, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {4, -6}, .shadow = {4, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 35, .offset = {10, -13}, .shadow = {10, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 34, .offset = {18, -23}, .shadow = {18, -23} },
	{ .frames = 3, .unkFlags = 1, .poseId = 35, .offset = {19, -22}, .shadow = {19, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 34, .offset = {18, -23}, .shadow = {18, -23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 35, .offset = {19, -22}, .shadow = {19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 38, .offset = {0, -11}, .shadow = {0, -11} },
	{ .frames = 3, .unkFlags = 0, .poseId = 37, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 3, .unkFlags = 1, .poseId = 38, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 3, .unkFlags = 0, .poseId = 37, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 3, .unkFlags = 0, .poseId = 38, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-4, -6}, .shadow = {-4, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 41, .offset = {-10, -13}, .shadow = {-10, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 40, .offset = {-18, -23}, .shadow = {-18, -23} },
	{ .frames = 3, .unkFlags = 1, .poseId = 41, .offset = {-19, -22}, .shadow = {-19, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 40, .offset = {-18, -23}, .shadow = {-18, -23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 41, .offset = {-19, -22}, .shadow = {-19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 44, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 43, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 44, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 43, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 44, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 47, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 46, .offset = {-19, 16}, .shadow = {-19, 16} },
	{ .frames = 3, .unkFlags = 1, .poseId = 47, .offset = {-20, 15}, .shadow = {-20, 15} },
	{ .frames = 3, .unkFlags = 0, .poseId = 46, .offset = {-19, 16}, .shadow = {-19, 16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 47, .offset = {-20, 15}, .shadow = {-20, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_3_1[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 2, .poseId = 51, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_3_2[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 2, .poseId = 55, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_3_3[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 56, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 58, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 56, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 59, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 2, .poseId = 59, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 59, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 56, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 56, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 58, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 56, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_3_4[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 61, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 62, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 2, .poseId = 63, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 61, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 62, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_3_5[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 2, .poseId = 67, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_3_6[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 2, .poseId = 71, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_3_7[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 74, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 2, .poseId = 75, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 74, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_3_8[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 78, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 2, .poseId = 79, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 78, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_4_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 81, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 82, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 80, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {1, 2}, .shadow = {1, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {1, 2}, .shadow = {1, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {1, 2}, .shadow = {1, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_4_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 85, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 86, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 84, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 87, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {3, 1}, .shadow = {3, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_4_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 89, .offset = {-2, 0}, .shadow = {-2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {-3, 0}, .shadow = {-3, -3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 88, .offset = {-4, 0}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-1, 0}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 91, .offset = {2, 0}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {3, 0}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {2, 0}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {3, 0}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {2, 0}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {3, 0}, .shadow = {3, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_4_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 92, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {3, -1}, .shadow = {3, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_4_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 97, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 6, .unkFlags = 2, .poseId = 96, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {1, -2}, .shadow = {1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {1, -2}, .shadow = {1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {1, -2}, .shadow = {1, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_4_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 101, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 100, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-3, -1}, .shadow = {-3, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_4_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 105, .offset = {2, 0}, .shadow = {2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 106, .offset = {3, 0}, .shadow = {3, -3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 104, .offset = {4, 0}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {1, 0}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 107, .offset = {-2, 0}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-3, 0}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-2, 0}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-3, 0}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-2, 0}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-3, 0}, .shadow = {-3, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_4_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 108, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 111, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-3, 1}, .shadow = {-3, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 115, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 115, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 115, .offset = {-1, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-1, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 112, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 119, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 119, .offset = {-1, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-1, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 116, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 123, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 123, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 123, .offset = {-1, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {-1, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 120, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 127, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 127, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 127, .offset = {-1, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {-1, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 124, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 131, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 131, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 131, .offset = {-1, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {-1, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 128, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 135, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 135, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 135, .offset = {-1, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {-1, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 132, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 139, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 139, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 139, .offset = {-1, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {-1, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 136, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 143, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 143, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 143, .offset = {-1, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {-1, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 140, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_8_1[] = {
	{ .frames = 60, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_8_2[] = {
	{ .frames = 60, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_8_3[] = {
	{ .frames = 60, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_8_4[] = {
	{ .frames = 60, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_8_5[] = {
	{ .frames = 60, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_8_6[] = {
	{ .frames = 60, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_8_7[] = {
	{ .frames = 60, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_8_8[] = {
	{ .frames = 60, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {7, 2}, .shadow = {7, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {13, 9}, .shadow = {13, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {7, 13}, .shadow = {7, 13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 174, .offset = {0, 14}, .shadow = {0, 14} },
	{ .frames = 2, .unkFlags = 3, .poseId = 175, .offset = {-7, 13}, .shadow = {-7, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-13, 9}, .shadow = {-13, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {-7, 2}, .shadow = {-7, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {9, 2}, .shadow = {9, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {19, 5}, .shadow = {19, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {24, 11}, .shadow = {24, 11} },
	{ .frames = 3, .unkFlags = 0, .poseId = 173, .offset = {20, 15}, .shadow = {20, 15} },
	{ .frames = 2, .unkFlags = 3, .poseId = 174, .offset = {12, 15}, .shadow = {12, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {6, 12}, .shadow = {6, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {1, 8}, .shadow = {1, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {2, -5}, .shadow = {2, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {9, -7}, .shadow = {9, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {15, -5}, .shadow = {15, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 172, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 173, .offset = {15, 4}, .shadow = {15, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {8, 6}, .shadow = {8, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {3, -19}, .shadow = {3, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {12, -25}, .shadow = {12, -25} },
	{ .frames = 3, .unkFlags = 0, .poseId = 171, .offset = {20, -25}, .shadow = {20, -25} },
	{ .frames = 2, .unkFlags = 3, .poseId = 172, .offset = {23, -16}, .shadow = {23, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {18, -6}, .shadow = {18, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {10, -1}, .shadow = {10, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-14, -12}, .shadow = {-14, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-9, -22}, .shadow = {-9, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 170, .offset = {0, -25}, .shadow = {0, -25} },
	{ .frames = 2, .unkFlags = 3, .poseId = 171, .offset = {9, -22}, .shadow = {9, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {14, -12}, .shadow = {14, -12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {-3, -19}, .shadow = {-3, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-12, -25}, .shadow = {-12, -25} },
	{ .frames = 3, .unkFlags = 0, .poseId = 177, .offset = {-20, -25}, .shadow = {-20, -25} },
	{ .frames = 2, .unkFlags = 3, .poseId = 176, .offset = {-23, -16}, .shadow = {-23, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {-18, -6}, .shadow = {-18, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {-10, -1}, .shadow = {-10, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {-2, -5}, .shadow = {-2, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-9, -7}, .shadow = {-9, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-15, -5}, .shadow = {-15, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 176, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 175, .offset = {-15, 4}, .shadow = {-15, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {-8, 6}, .shadow = {-8, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {-9, 2}, .shadow = {-9, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-19, 5}, .shadow = {-19, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-24, 11}, .shadow = {-24, 11} },
	{ .frames = 3, .unkFlags = 0, .poseId = 175, .offset = {-20, 15}, .shadow = {-20, 15} },
	{ .frames = 2, .unkFlags = 3, .poseId = 174, .offset = {-12, 15}, .shadow = {-12, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {-6, 12}, .shadow = {-6, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {-1, 8}, .shadow = {-1, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 187, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 187, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 186, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 186, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 189, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 189, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 188, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 188, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSlakothAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 201, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 201, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 201, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 200, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 200, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 200, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 200, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sSlakothGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_1.4bpp.lz");
static const ax_sprite sSlakothSprites1[] = {
	{sSlakothGfx1, ARRAY_COUNT(sSlakothGfx1)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_2.4bpp.lz");
static const ax_sprite sSlakothSprites2[] = {
	{sSlakothGfx2, ARRAY_COUNT(sSlakothGfx2)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_3.4bpp.lz");
static const ax_sprite sSlakothSprites3[] = {
	{sSlakothGfx3, ARRAY_COUNT(sSlakothGfx3)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_4.4bpp.lz");
static const ax_sprite sSlakothSprites4[] = {
	{sSlakothGfx4, ARRAY_COUNT(sSlakothGfx4)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_5.4bpp.lz");
static const ax_sprite sSlakothSprites5[] = {
	{sSlakothGfx5, ARRAY_COUNT(sSlakothGfx5)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_6.4bpp.lz");
static const ax_sprite sSlakothSprites6[] = {
	{sSlakothGfx6, ARRAY_COUNT(sSlakothGfx6)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_7.4bpp.lz");
static const ax_sprite sSlakothSprites7[] = {
	{sSlakothGfx7, ARRAY_COUNT(sSlakothGfx7)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_8.4bpp.lz");
static const ax_sprite sSlakothSprites8[] = {
	{sSlakothGfx8, ARRAY_COUNT(sSlakothGfx8)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_9.4bpp.lz");
static const ax_sprite sSlakothSprites9[] = {
	{sSlakothGfx9, ARRAY_COUNT(sSlakothGfx9)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_10.4bpp.lz");
static const ax_sprite sSlakothSprites10[] = {
	{sSlakothGfx10, ARRAY_COUNT(sSlakothGfx10)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_11.4bpp.lz");
static const ax_sprite sSlakothSprites11[] = {
	{sSlakothGfx11, ARRAY_COUNT(sSlakothGfx11)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_12.4bpp.lz");
static const ax_sprite sSlakothSprites12[] = {
	{sSlakothGfx12, ARRAY_COUNT(sSlakothGfx12)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_13.4bpp.lz");
static const ax_sprite sSlakothSprites13[] = {
	{sSlakothGfx13, ARRAY_COUNT(sSlakothGfx13)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_14.4bpp.lz");
static const ax_sprite sSlakothSprites14[] = {
	{sSlakothGfx14, ARRAY_COUNT(sSlakothGfx14)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_15.4bpp.lz");
static const ax_sprite sSlakothSprites15[] = {
	{sSlakothGfx15, ARRAY_COUNT(sSlakothGfx15)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_16.4bpp.lz");
static const u8 sSlakothGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_16_1.4bpp.lz");
static const ax_sprite sSlakothSprites16[] = {
	{sSlakothGfx16, ARRAY_COUNT(sSlakothGfx16)}, 
	{NULL, 64}, 
	{sSlakothGfx16_1, ARRAY_COUNT(sSlakothGfx16_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sSlakothGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_17.4bpp.lz");
static const ax_sprite sSlakothSprites17[] = {
	{sSlakothGfx17, ARRAY_COUNT(sSlakothGfx17)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSlakothGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_18.4bpp.lz");
static const u8 sSlakothGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_18_1.4bpp.lz");
static const ax_sprite sSlakothSprites18[] = {
	{sSlakothGfx18, ARRAY_COUNT(sSlakothGfx18)}, 
	{NULL, 32}, 
	{sSlakothGfx18_1, ARRAY_COUNT(sSlakothGfx18_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSlakothGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_19.4bpp.lz");
static const ax_sprite sSlakothSprites19[] = {
	{sSlakothGfx19, ARRAY_COUNT(sSlakothGfx19)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sSlakothGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_20.4bpp.lz");
static const u8 sSlakothGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_20_1.4bpp.lz");
static const ax_sprite sSlakothSprites20[] = {
	{NULL, 32}, 
	{sSlakothGfx20, ARRAY_COUNT(sSlakothGfx20)}, 
	{NULL, 32}, 
	{sSlakothGfx20_1, ARRAY_COUNT(sSlakothGfx20_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sSlakothGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_21.4bpp.lz");
static const u8 sSlakothGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_21_1.4bpp.lz");
static const ax_sprite sSlakothSprites21[] = {
	{sSlakothGfx21, ARRAY_COUNT(sSlakothGfx21)}, 
	{NULL, 32}, 
	{sSlakothGfx21_1, ARRAY_COUNT(sSlakothGfx21_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sSlakothGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_22.4bpp.lz");
static const u8 sSlakothGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_22_1.4bpp.lz");
static const ax_sprite sSlakothSprites22[] = {
	{sSlakothGfx22, ARRAY_COUNT(sSlakothGfx22)}, 
	{NULL, 32}, 
	{sSlakothGfx22_1, ARRAY_COUNT(sSlakothGfx22_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sSlakothGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_23.4bpp.lz");
static const u8 sSlakothGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_23_1.4bpp.lz");
static const u8 sSlakothGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_23_2.4bpp.lz");
static const ax_sprite sSlakothSprites23[] = {
	{sSlakothGfx23, ARRAY_COUNT(sSlakothGfx23)}, 
	{NULL, 32}, 
	{sSlakothGfx23_1, ARRAY_COUNT(sSlakothGfx23_1)}, 
	{NULL, 32}, 
	{sSlakothGfx23_2, ARRAY_COUNT(sSlakothGfx23_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sSlakothGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_24.4bpp.lz");
static const ax_sprite sSlakothSprites24[] = {
	{NULL, 32}, 
	{sSlakothGfx24, ARRAY_COUNT(sSlakothGfx24)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sSlakothGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_25.4bpp.lz");
static const u8 sSlakothGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_25_1.4bpp.lz");
static const ax_sprite sSlakothSprites25[] = {
	{NULL, 32}, 
	{sSlakothGfx25, ARRAY_COUNT(sSlakothGfx25)}, 
	{NULL, 32}, 
	{sSlakothGfx25_1, ARRAY_COUNT(sSlakothGfx25_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSlakothGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_26.4bpp.lz");
static const ax_sprite sSlakothSprites26[] = {
	{sSlakothGfx26, ARRAY_COUNT(sSlakothGfx26)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_27.4bpp.lz");
static const ax_sprite sSlakothSprites27[] = {
	{sSlakothGfx27, ARRAY_COUNT(sSlakothGfx27)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_28.4bpp.lz");
static const ax_sprite sSlakothSprites28[] = {
	{sSlakothGfx28, ARRAY_COUNT(sSlakothGfx28)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_29.4bpp.lz");
static const ax_sprite sSlakothSprites29[] = {
	{sSlakothGfx29, ARRAY_COUNT(sSlakothGfx29)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_30.4bpp.lz");
static const ax_sprite sSlakothSprites30[] = {
	{sSlakothGfx30, ARRAY_COUNT(sSlakothGfx30)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_31.4bpp.lz");
static const ax_sprite sSlakothSprites31[] = {
	{sSlakothGfx31, ARRAY_COUNT(sSlakothGfx31)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_32.4bpp.lz");
static const ax_sprite sSlakothSprites32[] = {
	{sSlakothGfx32, ARRAY_COUNT(sSlakothGfx32)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_33.4bpp.lz");
static const ax_sprite sSlakothSprites33[] = {
	{sSlakothGfx33, ARRAY_COUNT(sSlakothGfx33)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_34.4bpp.lz");
static const ax_sprite sSlakothSprites34[] = {
	{sSlakothGfx34, ARRAY_COUNT(sSlakothGfx34)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_35.4bpp.lz");
static const ax_sprite sSlakothSprites35[] = {
	{sSlakothGfx35, ARRAY_COUNT(sSlakothGfx35)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_36.4bpp.lz");
static const ax_sprite sSlakothSprites36[] = {
	{sSlakothGfx36, ARRAY_COUNT(sSlakothGfx36)}, 
	{NULL, 0}
};
static const u8 sSlakothGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slakoth/sprite_37.4bpp.lz");
static const ax_sprite sSlakothSprites37[] = {
	{sSlakothGfx37, ARRAY_COUNT(sSlakothGfx37)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesSlakoth[] = {
	sSlakothPose1,
	sSlakothPose2,
	sSlakothPose3,
	sSlakothPose4,
	sSlakothPose5,
	sSlakothPose6,
	sSlakothPose7,
	sSlakothPose8,
	sSlakothPose9,
	sSlakothPose10,
	sSlakothPose11,
	sSlakothPose12,
	sSlakothPose13,
	sSlakothPose14,
	sSlakothPose15,
	sSlakothPose16,
	sSlakothPose17,
	sSlakothPose18,
	sSlakothPose19,
	sSlakothPose20,
	sSlakothPose21,
	sSlakothPose22,
	sSlakothPose23,
	sSlakothPose24,
	sSlakothPose1,
	sSlakothPose2,
	sSlakothPose3,
	sSlakothPose4,
	sSlakothPose5,
	sSlakothPose6,
	sSlakothPose7,
	sSlakothPose8,
	sSlakothPose9,
	sSlakothPose10,
	sSlakothPose11,
	sSlakothPose12,
	sSlakothPose13,
	sSlakothPose14,
	sSlakothPose15,
	sSlakothPose16,
	sSlakothPose17,
	sSlakothPose18,
	sSlakothPose19,
	sSlakothPose20,
	sSlakothPose21,
	sSlakothPose22,
	sSlakothPose23,
	sSlakothPose24,
	sSlakothPose1,
	sSlakothPose2,
	sSlakothPose3,
	sSlakothPose52,
	sSlakothPose4,
	sSlakothPose5,
	sSlakothPose6,
	sSlakothPose56,
	sSlakothPose7,
	sSlakothPose8,
	sSlakothPose9,
	sSlakothPose60,
	sSlakothPose10,
	sSlakothPose11,
	sSlakothPose12,
	sSlakothPose64,
	sSlakothPose13,
	sSlakothPose14,
	sSlakothPose15,
	sSlakothPose68,
	sSlakothPose16,
	sSlakothPose17,
	sSlakothPose18,
	sSlakothPose72,
	sSlakothPose19,
	sSlakothPose20,
	sSlakothPose21,
	sSlakothPose76,
	sSlakothPose22,
	sSlakothPose23,
	sSlakothPose24,
	sSlakothPose80,
	sSlakothPose1,
	sSlakothPose2,
	sSlakothPose3,
	sSlakothPose84,
	sSlakothPose4,
	sSlakothPose5,
	sSlakothPose6,
	sSlakothPose88,
	sSlakothPose7,
	sSlakothPose8,
	sSlakothPose9,
	sSlakothPose92,
	sSlakothPose10,
	sSlakothPose11,
	sSlakothPose12,
	sSlakothPose96,
	sSlakothPose13,
	sSlakothPose14,
	sSlakothPose15,
	sSlakothPose100,
	sSlakothPose16,
	sSlakothPose17,
	sSlakothPose18,
	sSlakothPose104,
	sSlakothPose19,
	sSlakothPose20,
	sSlakothPose21,
	sSlakothPose108,
	sSlakothPose22,
	sSlakothPose23,
	sSlakothPose24,
	sSlakothPose112,
	sSlakothPose1,
	sSlakothPose2,
	sSlakothPose3,
	sSlakothPose116,
	sSlakothPose4,
	sSlakothPose5,
	sSlakothPose6,
	sSlakothPose88,
	sSlakothPose7,
	sSlakothPose8,
	sSlakothPose9,
	sSlakothPose124,
	sSlakothPose10,
	sSlakothPose11,
	sSlakothPose12,
	sSlakothPose128,
	sSlakothPose13,
	sSlakothPose14,
	sSlakothPose15,
	sSlakothPose132,
	sSlakothPose16,
	sSlakothPose17,
	sSlakothPose18,
	sSlakothPose136,
	sSlakothPose19,
	sSlakothPose20,
	sSlakothPose21,
	sSlakothPose140,
	sSlakothPose22,
	sSlakothPose23,
	sSlakothPose24,
	sSlakothPose112,
	sSlakothPose145,
	sSlakothPose146,
	sSlakothPose147,
	sSlakothPose148,
	sSlakothPose149,
	sSlakothPose150,
	sSlakothPose151,
	sSlakothPose152,
	sSlakothPose153,
	sSlakothPose154,
	sSlakothPose155,
	sSlakothPose156,
	sSlakothPose157,
	sSlakothPose158,
	sSlakothPose159,
	sSlakothPose160,
	sSlakothPose161,
	sSlakothPose162,
	sSlakothPose1,
	sSlakothPose22,
	sSlakothPose19,
	sSlakothPose16,
	sSlakothPose13,
	sSlakothPose10,
	sSlakothPose7,
	sSlakothPose4,
	sSlakothPose84,
	sSlakothPose172,
	sSlakothPose108,
	sSlakothPose174,
	sSlakothPose175,
	sSlakothPose176,
	sSlakothPose92,
	sSlakothPose178,
	sSlakothPose84,
	sSlakothPose178,
	sSlakothPose92,
	sSlakothPose176,
	sSlakothPose175,
	sSlakothPose174,
	sSlakothPose108,
	sSlakothPose172,
	sSlakothPose1,
	sSlakothPose188,
	sSlakothPose4,
	sSlakothPose190,
	sSlakothPose7,
	sSlakothPose192,
	sSlakothPose10,
	sSlakothPose194,
	sSlakothPose13,
	sSlakothPose196,
	sSlakothPose16,
	sSlakothPose198,
	sSlakothPose19,
	sSlakothPose200,
	sSlakothPose22,
	sSlakothPose202,
	sSlakothPose1,
	sSlakothPose22,
	sSlakothPose205,
	sSlakothPose16,
	sSlakothPose13,
	sSlakothPose10,
	sSlakothPose209,
	sSlakothPose4,
	sSlakothPose155,
	sSlakothPose156,
	sSlakothPose157,
	sSlakothPose158,
	sSlakothPose159,
	sSlakothPose160,
	sSlakothPose161,
	sSlakothPose162,
};

static const struct PositionSets sAxPositionsSlakoth[] = {
	[0] = { .set = { {-1, 3}, {-13, 2}, {11, 2}, {-1, -3} } },
	[1] = { .set = { {-2, 4}, {-12, -1}, {9, 4}, {-2, -2} } },
	[2] = { .set = { {0, 4}, {-12, 4}, {10, -1}, {0, -2} } },
	[3] = { .set = { {5, 2}, {12, -1}, {-7, 6}, {-1, -5} } },
	[4] = { .set = { {6, 3}, {9, -4}, {-4, 7}, {-1, -4} } },
	[5] = { .set = { {5, 3}, {13, 1}, {-9, 5}, {-1, -4} } },
	[6] = { .set = { {11, -3}, {3, -10}, {3, 5}, {0, -5} } },
	[7] = { .set = { {11, -3}, {0, -8}, {6, 6}, {0, -4} } },
	[8] = { .set = { {10, -1}, {8, -7}, {1, 6}, {0, -4} } },
	[9] = { .set = { {5, -9}, {-4, -7}, {11, 2}, {0, -6} } },
	[10] = { .set = { {5, -8}, {-5, -3}, {12, 2}, {0, -5} } },
	[11] = { .set = { {5, -8}, {2, -8}, {8, 4}, {0, -5} } },
	[12] = { .set = { {-1, -8}, {9, -2}, {-11, -2}, {-1, -5} } },
	[13] = { .set = { {-1, -7}, {8, 0}, {-10, -4}, {-1, -4} } },
	[14] = { .set = { {-1, -7}, {8, -4}, {-10, 0}, {-1, -4} } },
	[15] = { .set = { {-7, -9}, {2, -7}, {-13, 2}, {-2, -6} } },
	[16] = { .set = { {-7, -8}, {3, -3}, {-14, 2}, {-2, -5} } },
	[17] = { .set = { {-7, -8}, {-4, -8}, {-10, 4}, {-2, -5} } },
	[18] = { .set = { {-13, -3}, {-5, -10}, {-5, 5}, {-2, -5} } },
	[19] = { .set = { {-13, -3}, {-2, -8}, {-8, 6}, {-2, -4} } },
	[20] = { .set = { {-12, -1}, {-10, -7}, {-3, 6}, {-2, -4} } },
	[21] = { .set = { {-7, 2}, {-14, -1}, {5, 6}, {-1, -5} } },
	[22] = { .set = { {-8, 3}, {-11, -4}, {2, 7}, {-1, -4} } },
	[23] = { .set = { {-7, 3}, {-15, 1}, {7, 5}, {-1, -4} } },
	[24] = { .set = { {-1, 3}, {-13, 2}, {11, 2}, {-1, -3} } },
	[25] = { .set = { {-2, 4}, {-12, -1}, {9, 4}, {-2, -2} } },
	[26] = { .set = { {0, 4}, {-12, 4}, {10, -1}, {0, -2} } },
	[27] = { .set = { {5, 2}, {12, -1}, {-7, 6}, {-1, -5} } },
	[28] = { .set = { {6, 3}, {9, -4}, {-4, 7}, {-1, -4} } },
	[29] = { .set = { {5, 3}, {13, 1}, {-9, 5}, {-1, -4} } },
	[30] = { .set = { {11, -3}, {3, -10}, {3, 5}, {0, -5} } },
	[31] = { .set = { {11, -3}, {0, -8}, {6, 6}, {0, -4} } },
	[32] = { .set = { {10, -1}, {8, -7}, {1, 6}, {0, -4} } },
	[33] = { .set = { {5, -9}, {-4, -7}, {11, 2}, {0, -6} } },
	[34] = { .set = { {5, -8}, {-5, -3}, {12, 2}, {0, -5} } },
	[35] = { .set = { {5, -8}, {2, -8}, {8, 4}, {0, -5} } },
	[36] = { .set = { {-1, -8}, {9, -2}, {-11, -2}, {-1, -5} } },
	[37] = { .set = { {-1, -7}, {8, 0}, {-10, -4}, {-1, -4} } },
	[38] = { .set = { {-1, -7}, {8, -4}, {-10, 0}, {-1, -4} } },
	[39] = { .set = { {-7, -9}, {2, -7}, {-13, 2}, {-2, -6} } },
	[40] = { .set = { {-7, -8}, {3, -3}, {-14, 2}, {-2, -5} } },
	[41] = { .set = { {-7, -8}, {-4, -8}, {-10, 4}, {-2, -5} } },
	[42] = { .set = { {-13, -3}, {-5, -10}, {-5, 5}, {-2, -5} } },
	[43] = { .set = { {-13, -3}, {-2, -8}, {-8, 6}, {-2, -4} } },
	[44] = { .set = { {-12, -1}, {-10, -7}, {-3, 6}, {-2, -4} } },
	[45] = { .set = { {-7, 2}, {-14, -1}, {5, 6}, {-1, -5} } },
	[46] = { .set = { {-8, 3}, {-11, -4}, {2, 7}, {-1, -4} } },
	[47] = { .set = { {-7, 3}, {-15, 1}, {7, 5}, {-1, -4} } },
	[48] = { .set = { {-1, 3}, {-13, 2}, {11, 2}, {-1, -3} } },
	[49] = { .set = { {-2, 4}, {-12, -1}, {9, 4}, {-2, -2} } },
	[50] = { .set = { {0, 4}, {-12, 4}, {10, -1}, {0, -2} } },
	[51] = { .set = { {-1, -5}, {-12, -2}, {10, -2}, {-1, -8} } },
	[52] = { .set = { {5, 2}, {12, -1}, {-7, 6}, {-1, -5} } },
	[53] = { .set = { {6, 3}, {9, -4}, {-4, 7}, {-1, -4} } },
	[54] = { .set = { {5, 3}, {13, 1}, {-9, 5}, {-1, -4} } },
	[55] = { .set = { {2, -1}, {11, -1}, {-6, 1}, {0, -9} } },
	[56] = { .set = { {11, -3}, {3, -10}, {3, 5}, {0, -5} } },
	[57] = { .set = { {11, -3}, {0, -8}, {6, 6}, {0, -4} } },
	[58] = { .set = { {10, -1}, {8, -7}, {1, 6}, {0, -4} } },
	[59] = { .set = { {4, -6}, {4, -10}, {3, 0}, {2, -12} } },
	[60] = { .set = { {5, -9}, {-4, -7}, {11, 2}, {0, -6} } },
	[61] = { .set = { {5, -8}, {-5, -3}, {12, 2}, {0, -5} } },
	[62] = { .set = { {5, -8}, {2, -8}, {8, 4}, {0, -5} } },
	[63] = { .set = { {4, -10}, {-7, -9}, {8, 0}, {0, -11} } },
	[64] = { .set = { {-1, -8}, {9, -2}, {-11, -2}, {-1, -5} } },
	[65] = { .set = { {-1, -7}, {8, 0}, {-10, -4}, {-1, -4} } },
	[66] = { .set = { {-1, -7}, {8, -4}, {-10, 0}, {-1, -4} } },
	[67] = { .set = { {-1, -10}, {9, -4}, {-11, -4}, {-1, -9} } },
	[68] = { .set = { {-7, -9}, {2, -7}, {-13, 2}, {-2, -6} } },
	[69] = { .set = { {-7, -8}, {3, -3}, {-14, 2}, {-2, -5} } },
	[70] = { .set = { {-7, -8}, {-4, -8}, {-10, 4}, {-2, -5} } },
	[71] = { .set = { {-6, -10}, {5, -9}, {-10, 0}, {-2, -11} } },
	[72] = { .set = { {-13, -3}, {-5, -10}, {-5, 5}, {-2, -5} } },
	[73] = { .set = { {-13, -3}, {-2, -8}, {-8, 6}, {-2, -4} } },
	[74] = { .set = { {-12, -1}, {-10, -7}, {-3, 6}, {-2, -4} } },
	[75] = { .set = { {-6, -6}, {-6, -10}, {-5, 0}, {-4, -12} } },
	[76] = { .set = { {-7, 2}, {-14, -1}, {5, 6}, {-1, -5} } },
	[77] = { .set = { {-8, 3}, {-11, -4}, {2, 7}, {-1, -4} } },
	[78] = { .set = { {-7, 3}, {-15, 1}, {7, 5}, {-1, -4} } },
	[79] = { .set = { {-4, -1}, {-13, -1}, {4, 1}, {-2, -9} } },
	[80] = { .set = { {-1, 3}, {-13, 2}, {11, 2}, {-1, -3} } },
	[81] = { .set = { {-2, 4}, {-12, -1}, {9, 4}, {-2, -2} } },
	[82] = { .set = { {0, 4}, {-12, 4}, {10, -1}, {0, -2} } },
	[83] = { .set = { {-1, 1}, {-12, 2}, {10, 2}, {-1, -4} } },
	[84] = { .set = { {5, 2}, {12, -1}, {-7, 6}, {-1, -5} } },
	[85] = { .set = { {6, 3}, {9, -4}, {-4, 7}, {-1, -4} } },
	[86] = { .set = { {5, 3}, {13, 1}, {-9, 5}, {-1, -4} } },
	[87] = { .set = { {6, 2}, {11, -1}, {-7, 7}, {-2, -4} } },
	[88] = { .set = { {11, -3}, {3, -10}, {3, 5}, {0, -5} } },
	[89] = { .set = { {11, -3}, {0, -8}, {6, 6}, {0, -4} } },
	[90] = { .set = { {10, -1}, {8, -7}, {1, 6}, {0, -4} } },
	[91] = { .set = { {8, -1}, {4, -7}, {4, 5}, {-1, -6} } },
	[92] = { .set = { {5, -9}, {-4, -7}, {11, 2}, {0, -6} } },
	[93] = { .set = { {5, -8}, {-5, -3}, {12, 2}, {0, -5} } },
	[94] = { .set = { {5, -8}, {2, -8}, {8, 4}, {0, -5} } },
	[95] = { .set = { {6, -7}, {-6, -7}, {11, 1}, {-1, -5} } },
	[96] = { .set = { {-1, -8}, {9, -2}, {-11, -2}, {-1, -5} } },
	[97] = { .set = { {-1, -7}, {8, 0}, {-10, -4}, {-1, -4} } },
	[98] = { .set = { {-1, -7}, {8, -4}, {-10, 0}, {-1, -4} } },
	[99] = { .set = { {-1, -8}, {11, -4}, {-13, -4}, {-1, -4} } },
	[100] = { .set = { {-7, -9}, {2, -7}, {-13, 2}, {-2, -6} } },
	[101] = { .set = { {-7, -8}, {3, -3}, {-14, 2}, {-2, -5} } },
	[102] = { .set = { {-7, -8}, {-4, -8}, {-10, 4}, {-2, -5} } },
	[103] = { .set = { {-8, -7}, {4, -7}, {-13, 1}, {-1, -5} } },
	[104] = { .set = { {-13, -3}, {-5, -10}, {-5, 5}, {-2, -5} } },
	[105] = { .set = { {-13, -3}, {-2, -8}, {-8, 6}, {-2, -4} } },
	[106] = { .set = { {-12, -1}, {-10, -7}, {-3, 6}, {-2, -4} } },
	[107] = { .set = { {-10, -1}, {-6, -7}, {-6, 5}, {-1, -6} } },
	[108] = { .set = { {-7, 2}, {-14, -1}, {5, 6}, {-1, -5} } },
	[109] = { .set = { {-8, 3}, {-11, -4}, {2, 7}, {-1, -4} } },
	[110] = { .set = { {-7, 3}, {-15, 1}, {7, 5}, {-1, -4} } },
	[111] = { .set = { {-8, 2}, {-13, -1}, {5, 7}, {0, -4} } },
	[112] = { .set = { {-1, 3}, {-13, 2}, {11, 2}, {-1, -3} } },
	[113] = { .set = { {-2, 4}, {-12, -1}, {9, 4}, {-2, -2} } },
	[114] = { .set = { {0, 4}, {-12, 4}, {10, -1}, {0, -2} } },
	[115] = { .set = { {-1, 2}, {-12, 3}, {10, 3}, {-1, -3} } },
	[116] = { .set = { {5, 2}, {12, -1}, {-7, 6}, {-1, -5} } },
	[117] = { .set = { {6, 3}, {9, -4}, {-4, 7}, {-1, -4} } },
	[118] = { .set = { {5, 3}, {13, 1}, {-9, 5}, {-1, -4} } },
	[119] = { .set = { {6, 2}, {11, -1}, {-7, 7}, {-2, -4} } },
	[120] = { .set = { {11, -3}, {3, -10}, {3, 5}, {0, -5} } },
	[121] = { .set = { {11, -3}, {0, -8}, {6, 6}, {0, -4} } },
	[122] = { .set = { {10, -1}, {8, -7}, {1, 6}, {0, -4} } },
	[123] = { .set = { {9, -1}, {5, -7}, {5, 5}, {0, -6} } },
	[124] = { .set = { {5, -9}, {-4, -7}, {11, 2}, {0, -6} } },
	[125] = { .set = { {5, -8}, {-5, -3}, {12, 2}, {0, -5} } },
	[126] = { .set = { {5, -8}, {2, -8}, {8, 4}, {0, -5} } },
	[127] = { .set = { {7, -8}, {-5, -8}, {12, 0}, {0, -6} } },
	[128] = { .set = { {-1, -8}, {9, -2}, {-11, -2}, {-1, -5} } },
	[129] = { .set = { {-1, -7}, {8, 0}, {-10, -4}, {-1, -4} } },
	[130] = { .set = { {-1, -7}, {8, -4}, {-10, 0}, {-1, -4} } },
	[131] = { .set = { {-1, -10}, {11, -6}, {-13, -6}, {-1, -6} } },
	[132] = { .set = { {-7, -9}, {2, -7}, {-13, 2}, {-2, -6} } },
	[133] = { .set = { {-7, -8}, {3, -3}, {-14, 2}, {-2, -5} } },
	[134] = { .set = { {-7, -8}, {-4, -8}, {-10, 4}, {-2, -5} } },
	[135] = { .set = { {-9, -8}, {3, -8}, {-14, 0}, {-2, -6} } },
	[136] = { .set = { {-13, -3}, {-5, -10}, {-5, 5}, {-2, -5} } },
	[137] = { .set = { {-13, -3}, {-2, -8}, {-8, 6}, {-2, -4} } },
	[138] = { .set = { {-12, -1}, {-10, -7}, {-3, 6}, {-2, -4} } },
	[139] = { .set = { {-11, -1}, {-7, -7}, {-7, 5}, {-2, -6} } },
	[140] = { .set = { {-7, 2}, {-14, -1}, {5, 6}, {-1, -5} } },
	[141] = { .set = { {-8, 3}, {-11, -4}, {2, 7}, {-1, -4} } },
	[142] = { .set = { {-7, 3}, {-15, 1}, {7, 5}, {-1, -4} } },
	[143] = { .set = { {-8, 2}, {-13, -1}, {5, 7}, {0, -4} } },
	[144] = { .set = { {-7, 4}, {-11, 1}, {-4, 4}, {-1, -4} } },
	[145] = { .set = { {-7, 4}, {-11, 1}, {-4, 4}, {-1, -4} } },
	[146] = { .set = { {0, 1}, {-4, -7}, {4, -7}, {0, -5} } },
	[147] = { .set = { {6, 2}, {8, -7}, {0, -6}, {1, -5} } },
	[148] = { .set = { {10, 0}, {4, -11}, {4, -5}, {1, -5} } },
	[149] = { .set = { {5, -6}, {1, -12}, {8, -8}, {2, -6} } },
	[150] = { .set = { {0, -7}, {5, -11}, {-5, -11}, {0, -5} } },
	[151] = { .set = { {-6, -6}, {-2, -12}, {-9, -8}, {-3, -6} } },
	[152] = { .set = { {-11, 0}, {-5, -11}, {-5, -5}, {-2, -5} } },
	[153] = { .set = { {-7, 2}, {-9, -7}, {-1, -6}, {-2, -5} } },
	[154] = { .set = { {-1, 4}, {-14, 3}, {12, 3}, {-1, -2} } },
	[155] = { .set = { {-7, 3}, {-15, -3}, {6, 8}, {-1, -4} } },
	[156] = { .set = { {-13, -2}, {-10, -12}, {-9, 7}, {-2, -4} } },
	[157] = { .set = { {-7, -8}, {4, -11}, {-16, -2}, {-2, -5} } },
	[158] = { .set = { {-1, -7}, {12, -7}, {-14, -7}, {-1, -4} } },
	[159] = { .set = { {5, -8}, {-6, -11}, {14, -2}, {0, -5} } },
	[160] = { .set = { {11, -2}, {8, -12}, {7, 7}, {0, -4} } },
	[161] = { .set = { {5, 3}, {13, -3}, {-8, 8}, {-1, -4} } },
	[162] = { .set = { {-1, 3}, {-13, 2}, {11, 2}, {-1, -3} } },
	[163] = { .set = { {-7, 2}, {-14, -1}, {5, 6}, {-1, -5} } },
	[164] = { .set = { {-13, -3}, {-5, -10}, {-5, 5}, {-2, -5} } },
	[165] = { .set = { {-7, -9}, {2, -7}, {-13, 2}, {-2, -6} } },
	[166] = { .set = { {-1, -8}, {9, -2}, {-11, -2}, {-1, -5} } },
	[167] = { .set = { {5, -9}, {-4, -7}, {11, 2}, {0, -6} } },
	[168] = { .set = { {11, -3}, {3, -10}, {3, 5}, {0, -5} } },
	[169] = { .set = { {5, 2}, {12, -1}, {-7, 6}, {-1, -5} } },
	[170] = { .set = { {-1, 1}, {-12, 2}, {10, 2}, {-1, -4} } },
	[171] = { .set = { {-8, 1}, {-13, -2}, {5, 6}, {0, -5} } },
	[172] = { .set = { {-10, -1}, {-6, -7}, {-6, 5}, {-1, -6} } },
	[173] = { .set = { {-8, -8}, {4, -8}, {-13, 0}, {-1, -6} } },
	[174] = { .set = { {-1, -7}, {11, -3}, {-13, -3}, {-1, -3} } },
	[175] = { .set = { {6, -8}, {-6, -8}, {11, 0}, {-1, -6} } },
	[176] = { .set = { {8, -1}, {4, -7}, {4, 5}, {-1, -6} } },
	[177] = { .set = { {6, 1}, {11, -2}, {-7, 6}, {-2, -5} } },
	[178] = { .set = { {-1, 1}, {-12, 2}, {10, 2}, {-1, -4} } },
	[179] = { .set = { {6, 1}, {11, -2}, {-7, 6}, {-2, -5} } },
	[180] = { .set = { {8, -1}, {4, -7}, {4, 5}, {-1, -6} } },
	[181] = { .set = { {6, -8}, {-6, -8}, {11, 0}, {-1, -6} } },
	[182] = { .set = { {-1, -7}, {11, -3}, {-13, -3}, {-1, -3} } },
	[183] = { .set = { {-8, -8}, {4, -8}, {-13, 0}, {-1, -6} } },
	[184] = { .set = { {-10, -1}, {-6, -7}, {-6, 5}, {-1, -6} } },
	[185] = { .set = { {-8, 1}, {-13, -2}, {5, 6}, {0, -5} } },
	[186] = { .set = { {-1, 3}, {-13, 2}, {11, 2}, {-1, -3} } },
	[187] = { .set = { {-1, -2}, {-12, 1}, {10, 1}, {-1, -5} } },
	[188] = { .set = { {5, 2}, {12, -1}, {-7, 6}, {-1, -5} } },
	[189] = { .set = { {2, 1}, {11, 1}, {-6, 3}, {0, -7} } },
	[190] = { .set = { {11, -3}, {3, -10}, {3, 5}, {0, -5} } },
	[191] = { .set = { {4, -2}, {4, -6}, {3, 4}, {2, -8} } },
	[192] = { .set = { {5, -9}, {-4, -7}, {11, 2}, {0, -6} } },
	[193] = { .set = { {4, -6}, {-7, -5}, {8, 4}, {0, -7} } },
	[194] = { .set = { {-1, -8}, {9, -2}, {-11, -2}, {-1, -5} } },
	[195] = { .set = { {-1, -6}, {9, 0}, {-11, 0}, {-1, -5} } },
	[196] = { .set = { {-7, -9}, {2, -7}, {-13, 2}, {-2, -6} } },
	[197] = { .set = { {-6, -6}, {5, -5}, {-10, 4}, {-2, -7} } },
	[198] = { .set = { {-13, -3}, {-5, -10}, {-5, 5}, {-2, -5} } },
	[199] = { .set = { {-6, -2}, {-6, -6}, {-5, 4}, {-4, -8} } },
	[200] = { .set = { {-7, 2}, {-14, -1}, {5, 6}, {-1, -5} } },
	[201] = { .set = { {-4, 1}, {-13, 1}, {4, 3}, {-2, -7} } },
	[202] = { .set = { {-1, 3}, {-13, 2}, {11, 2}, {-1, -3} } },
	[203] = { .set = { {-7, 2}, {-14, -1}, {5, 6}, {-1, -5} } },
	[204] = { .set = { {-12, -3}, {-4, -10}, {-4, 5}, {-1, -5} } },
	[205] = { .set = { {-7, -9}, {2, -7}, {-13, 2}, {-2, -6} } },
	[206] = { .set = { {-1, -8}, {9, -2}, {-11, -2}, {-1, -5} } },
	[207] = { .set = { {5, -9}, {-4, -7}, {11, 2}, {0, -6} } },
	[208] = { .set = { {10, -3}, {2, -10}, {2, 5}, {-1, -5} } },
	[209] = { .set = { {5, 2}, {12, -1}, {-7, 6}, {-1, -5} } },
	[210] = { .set = { {-1, 4}, {-14, 3}, {12, 3}, {-1, -2} } },
	[211] = { .set = { {-7, 3}, {-15, -3}, {6, 8}, {-1, -4} } },
	[212] = { .set = { {-13, -2}, {-10, -12}, {-9, 7}, {-2, -4} } },
	[213] = { .set = { {-7, -8}, {4, -11}, {-16, -2}, {-2, -5} } },
	[214] = { .set = { {-1, -7}, {12, -7}, {-14, -7}, {-1, -4} } },
	[215] = { .set = { {5, -8}, {-6, -11}, {14, -2}, {0, -5} } },
	[216] = { .set = { {11, -2}, {8, -12}, {7, 7}, {0, -4} } },
	[217] = { .set = { {5, 3}, {13, -3}, {-8, 8}, {-1, -4} } },
};

static const ax_anim *const sSlakothAnimTable1[] = {
	gAxSharedAnim_02602,
	gAxSharedAnim_02678,
	gAxSharedAnim_02687,
	gAxSharedAnim_02696,
	gAxSharedAnim_02614,
	gAxSharedAnim_02636,
	gAxSharedAnim_02649,
	gAxSharedAnim_02658,
};

static const ax_anim *const sSlakothAnimTable2[] = {
	sSlakothAnims_2_1,
	sSlakothAnims_2_2,
	sSlakothAnims_2_3,
	sSlakothAnims_2_4,
	sSlakothAnims_2_5,
	sSlakothAnims_2_6,
	sSlakothAnims_2_7,
	sSlakothAnims_2_8,
};

static const ax_anim *const sSlakothAnimTable3[] = {
	sSlakothAnims_3_1,
	sSlakothAnims_3_2,
	sSlakothAnims_3_3,
	sSlakothAnims_3_4,
	sSlakothAnims_3_5,
	sSlakothAnims_3_6,
	sSlakothAnims_3_7,
	sSlakothAnims_3_8,
};

static const ax_anim *const sSlakothAnimTable4[] = {
	sSlakothAnims_4_1,
	sSlakothAnims_4_2,
	sSlakothAnims_4_3,
	sSlakothAnims_4_4,
	sSlakothAnims_4_5,
	sSlakothAnims_4_6,
	sSlakothAnims_4_7,
	sSlakothAnims_4_8,
};

static const ax_anim *const sSlakothAnimTable5[] = {
	sSlakothAnims_5_1,
	sSlakothAnims_5_2,
	sSlakothAnims_5_3,
	sSlakothAnims_5_4,
	sSlakothAnims_5_5,
	sSlakothAnims_5_6,
	sSlakothAnims_5_7,
	sSlakothAnims_5_8,
};

static const ax_anim *const sSlakothAnimTable6[] = {
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
};

static const ax_anim *const sSlakothAnimTable7[] = {
	gAxSharedAnim_00532,
	gAxSharedAnim_00544,
	gAxSharedAnim_00552,
	gAxSharedAnim_00560,
	gAxSharedAnim_00578,
	gAxSharedAnim_00588,
	gAxSharedAnim_00597,
	gAxSharedAnim_00603,
};

static const ax_anim *const sSlakothAnimTable8[] = {
	sSlakothAnims_8_1,
	sSlakothAnims_8_2,
	sSlakothAnims_8_3,
	sSlakothAnims_8_4,
	sSlakothAnims_8_5,
	sSlakothAnims_8_6,
	sSlakothAnims_8_7,
	sSlakothAnims_8_8,
};

static const ax_anim *const sSlakothAnimTable9[] = {
	sSlakothAnims_9_1,
	sSlakothAnims_9_2,
	sSlakothAnims_9_3,
	sSlakothAnims_9_4,
	sSlakothAnims_9_5,
	sSlakothAnims_9_6,
	sSlakothAnims_9_7,
	sSlakothAnims_9_8,
};

static const ax_anim *const sSlakothAnimTable10[] = {
	gAxSharedAnim_00905,
	gAxSharedAnim_00918,
	gAxSharedAnim_00930,
	gAxSharedAnim_00942,
	gAxSharedAnim_00955,
	gAxSharedAnim_00965,
	gAxSharedAnim_00978,
	gAxSharedAnim_00993,
};

static const ax_anim *const sSlakothAnimTable11[] = {
	sSlakothAnims_11_1,
	sSlakothAnims_11_2,
	gAxSharedAnim_01073,
	gAxSharedAnim_01101,
	gAxSharedAnim_01134,
	gAxSharedAnim_01164,
	gAxSharedAnim_01185,
	sSlakothAnims_11_8,
};

static const ax_anim *const sSlakothAnimTable12[] = {
	gAxSharedAnim_01243,
	gAxSharedAnim_01326,
	gAxSharedAnim_01308,
	gAxSharedAnim_01292,
	gAxSharedAnim_01291,
	gAxSharedAnim_01280,
	gAxSharedAnim_01260,
	gAxSharedAnim_01244,
};

static const ax_anim *const sSlakothAnimTable13[] = {
	gAxSharedAnim_01335,
	gAxSharedAnim_01409,
	gAxSharedAnim_01397,
	gAxSharedAnim_01386,
	gAxSharedAnim_01374,
	gAxSharedAnim_01366,
	gAxSharedAnim_01358,
	gAxSharedAnim_01348,
};

static const ax_anim *const *const sAxAnimationsSlakoth[] = {
	sSlakothAnimTable1,
	sSlakothAnimTable2,
	sSlakothAnimTable3,
	sSlakothAnimTable4,
	sSlakothAnimTable5,
	sSlakothAnimTable6,
	sSlakothAnimTable7,
	sSlakothAnimTable8,
	sSlakothAnimTable9,
	sSlakothAnimTable10,
	sSlakothAnimTable11,
	sSlakothAnimTable12,
	sSlakothAnimTable13,
};

static const ax_sprite *const sAxSpritesSlakoth[] = {
	sSlakothSprites1,
	sSlakothSprites2,
	sSlakothSprites3,
	sSlakothSprites4,
	sSlakothSprites5,
	sSlakothSprites6,
	sSlakothSprites7,
	sSlakothSprites8,
	sSlakothSprites9,
	sSlakothSprites10,
	sSlakothSprites11,
	sSlakothSprites12,
	sSlakothSprites13,
	sSlakothSprites14,
	sSlakothSprites15,
	sSlakothSprites16,
	sSlakothSprites17,
	sSlakothSprites18,
	sSlakothSprites19,
	sSlakothSprites20,
	sSlakothSprites21,
	sSlakothSprites22,
	sSlakothSprites23,
	sSlakothSprites24,
	sSlakothSprites25,
	sSlakothSprites26,
	sSlakothSprites27,
	sSlakothSprites28,
	sSlakothSprites29,
	sSlakothSprites30,
	sSlakothSprites31,
	sSlakothSprites32,
	sSlakothSprites33,
	sSlakothSprites34,
	sSlakothSprites35,
	sSlakothSprites36,
	sSlakothSprites37,
};

static const axmain sAxMainSlakoth = {
	.poses = sAxPosesSlakoth,
	.animations = sAxAnimationsSlakoth,
	.animCount = ARRAY_COUNT(sAxAnimationsSlakoth),
	.spriteData = sAxSpritesSlakoth,
	.positions = sAxPositionsSlakoth,
};
