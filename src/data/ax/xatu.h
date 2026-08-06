/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainXatu;
const SiroArchive gAxXatu = {"SIRO", &sAxMainXatu};

static const ax_pose sXatuPose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose2[] = {
	AX_POSE(1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose3[] = {
	AX_POSE(2, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose4[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose5[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose6[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose7[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose8[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose10[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose11[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose12[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose13[] = {
	AX_POSE(12, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose14[] = {
	AX_POSE(13, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose15[] = {
	AX_POSE(14, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose16[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose17[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose18[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose19[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose20[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose21[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose22[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose23[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose24[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose26[] = {
	AX_POSE(15, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose27[] = {
	AX_POSE(16, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose28[] = {
	AX_POSE(17, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose30[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose31[] = {
	AX_POSE(19, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose32[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose34[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose35[] = {
	AX_POSE(22, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose36[] = {
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose38[] = {
	AX_POSE(24, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose39[] = {
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose40[] = {
	AX_POSE(26, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose42[] = {
	AX_POSE(27, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose43[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose44[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose46[] = {
	AX_POSE(24, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose47[] = {
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose48[] = {
	AX_POSE(26, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose50[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose51[] = {
	AX_POSE(22, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose52[] = {
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose54[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose55[] = {
	AX_POSE(19, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose56[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose91[] = {
	AX_POSE(30, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose92[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose93[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose94[] = {
	AX_POSE(31, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose95[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose96[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose97[] = {
	AX_POSE(32, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose98[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose99[] = {
	AX_POSE(26, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose100[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose102[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose103[] = {
	AX_POSE(34, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose104[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose105[] = {
	AX_POSE(26, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose106[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose107[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose108[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose109[] = {
	AX_POSE(32, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose110[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose111[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose112[] = {
	AX_POSE(31, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose121[] = {
	AX_POSE(35, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose122[] = {
	AX_POSE(36, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose123[] = {
	AX_POSE(37, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose124[] = {
	AX_POSE(38, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose125[] = {
	AX_POSE(39, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose126[] = {
	AX_POSE(40, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose127[] = {
	AX_POSE(41, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose128[] = {
	AX_POSE(40, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose129[] = {
	AX_POSE(39, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose130[] = {
	AX_POSE(38, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose132[] = {
	AX_POSE(15, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose136[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose140[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose144[] = {
	AX_POSE(24, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose148[] = {
	AX_POSE(27, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose152[] = {
	AX_POSE(24, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose156[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose160[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose187[] = {
	AX_POSE(22, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose190[] = {
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose196[] = {
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose199[] = {
	AX_POSE(22, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose203[] = {
	AX_POSE(16, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose206[] = {
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose210[] = {
	AX_POSE(19, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose220[] = {
	AX_POSE(42, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose221[] = {
	AX_POSE(43, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sXatuPose222[] = {
	AX_POSE(44, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const u8 sXatuAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_2_1.lz");
static const u8 sXatuAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_2_2.lz");
static const u8 sXatuAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_2_3.lz");
static const u8 sXatuAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_2_4.lz");
static const u8 sXatuAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_2_5.lz");
static const u8 sXatuAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_2_6.lz");
static const u8 sXatuAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_2_7.lz");
static const u8 sXatuAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_2_8.lz");
static const u8 sXatuAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_3_1.lz");
static const u8 sXatuAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_3_2.lz");
static const u8 sXatuAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_3_3.lz");
static const u8 sXatuAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_3_4.lz");
static const u8 sXatuAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_3_5.lz");
static const u8 sXatuAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_3_6.lz");
static const u8 sXatuAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_3_7.lz");
static const u8 sXatuAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_3_8.lz");
static const u8 sXatuAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_4_1.lz");
static const u8 sXatuAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_4_2.lz");
static const u8 sXatuAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_4_3.lz");
static const u8 sXatuAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_4_4.lz");
static const u8 sXatuAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_4_5.lz");
static const u8 sXatuAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_4_6.lz");
static const u8 sXatuAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_4_7.lz");
static const u8 sXatuAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_4_8.lz");
static const u8 sXatuAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_8_1.lz");
static const u8 sXatuAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_8_2.lz");
static const u8 sXatuAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_8_3.lz");
static const u8 sXatuAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_8_4.lz");
static const u8 sXatuAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_8_5.lz");
static const u8 sXatuAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_8_6.lz");
static const u8 sXatuAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_8_7.lz");
static const u8 sXatuAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_8_8.lz");
static const u8 sXatuAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_9_3.lz");
static const u8 sXatuAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_9_4.lz");
static const u8 sXatuAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_9_5.lz");
static const u8 sXatuAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_9_6.lz");
static const u8 sXatuAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_9_7.lz");
static const u8 sXatuAnims_14_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_14_1.lz");
static const u8 sXatuAnims_15_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/xatu/sXatuAnims_15_1.lz");

static const u8 sXatuGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_1.4bpp.lz");
static const ax_sprite sXatuSprites1[] = {
	{sXatuGfx1, ARRAY_COUNT(sXatuGfx1)}, 
	{NULL, 0}
};
static const u8 sXatuGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_2.4bpp.lz");
static const ax_sprite sXatuSprites2[] = {
	{sXatuGfx2, ARRAY_COUNT(sXatuGfx2)}, 
	{NULL, 0}
};
static const u8 sXatuGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_3.4bpp.lz");
static const ax_sprite sXatuSprites3[] = {
	{sXatuGfx3, ARRAY_COUNT(sXatuGfx3)}, 
	{NULL, 0}
};
static const u8 sXatuGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_4.4bpp.lz");
static const ax_sprite sXatuSprites4[] = {
	{sXatuGfx4, ARRAY_COUNT(sXatuGfx4)}, 
	{NULL, 0}
};
static const u8 sXatuGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_5.4bpp.lz");
static const ax_sprite sXatuSprites5[] = {
	{sXatuGfx5, ARRAY_COUNT(sXatuGfx5)}, 
	{NULL, 0}
};
static const u8 sXatuGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_6.4bpp.lz");
static const ax_sprite sXatuSprites6[] = {
	{sXatuGfx6, ARRAY_COUNT(sXatuGfx6)}, 
	{NULL, 0}
};
static const u8 sXatuGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_7.4bpp.lz");
static const ax_sprite sXatuSprites7[] = {
	{sXatuGfx7, ARRAY_COUNT(sXatuGfx7)}, 
	{NULL, 0}
};
static const u8 sXatuGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_8.4bpp.lz");
static const ax_sprite sXatuSprites8[] = {
	{sXatuGfx8, ARRAY_COUNT(sXatuGfx8)}, 
	{NULL, 0}
};
static const u8 sXatuGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_9.4bpp.lz");
static const ax_sprite sXatuSprites9[] = {
	{sXatuGfx9, ARRAY_COUNT(sXatuGfx9)}, 
	{NULL, 0}
};
static const u8 sXatuGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_10.4bpp.lz");
static const ax_sprite sXatuSprites10[] = {
	{sXatuGfx10, ARRAY_COUNT(sXatuGfx10)}, 
	{NULL, 0}
};
static const u8 sXatuGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_11.4bpp.lz");
static const ax_sprite sXatuSprites11[] = {
	{sXatuGfx11, ARRAY_COUNT(sXatuGfx11)}, 
	{NULL, 0}
};
static const u8 sXatuGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_12.4bpp.lz");
static const ax_sprite sXatuSprites12[] = {
	{sXatuGfx12, ARRAY_COUNT(sXatuGfx12)}, 
	{NULL, 0}
};
static const u8 sXatuGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_13.4bpp.lz");
static const ax_sprite sXatuSprites13[] = {
	{sXatuGfx13, ARRAY_COUNT(sXatuGfx13)}, 
	{NULL, 0}
};
static const u8 sXatuGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_14.4bpp.lz");
static const ax_sprite sXatuSprites14[] = {
	{sXatuGfx14, ARRAY_COUNT(sXatuGfx14)}, 
	{NULL, 0}
};
static const u8 sXatuGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_15.4bpp.lz");
static const ax_sprite sXatuSprites15[] = {
	{sXatuGfx15, ARRAY_COUNT(sXatuGfx15)}, 
	{NULL, 0}
};
static const u8 sXatuGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_16.4bpp.lz");
static const ax_sprite sXatuSprites16[] = {
	{sXatuGfx16, ARRAY_COUNT(sXatuGfx16)}, 
	{NULL, 0}
};
static const u8 sXatuGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_17.4bpp.lz");
static const u8 sXatuGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_17_1.4bpp.lz");
static const u8 sXatuGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_17_2.4bpp.lz");
static const ax_sprite sXatuSprites17[] = {
	{NULL, 32}, 
	{sXatuGfx17, ARRAY_COUNT(sXatuGfx17)}, 
	{NULL, 32}, 
	{sXatuGfx17_1, ARRAY_COUNT(sXatuGfx17_1)}, 
	{NULL, 32}, 
	{sXatuGfx17_2, ARRAY_COUNT(sXatuGfx17_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sXatuGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_18.4bpp.lz");
static const u8 sXatuGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_18_1.4bpp.lz");
static const u8 sXatuGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_18_2.4bpp.lz");
static const ax_sprite sXatuSprites18[] = {
	{NULL, 32}, 
	{sXatuGfx18, ARRAY_COUNT(sXatuGfx18)}, 
	{NULL, 32}, 
	{sXatuGfx18_1, ARRAY_COUNT(sXatuGfx18_1)}, 
	{NULL, 32}, 
	{sXatuGfx18_2, ARRAY_COUNT(sXatuGfx18_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sXatuGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_19.4bpp.lz");
static const u8 sXatuGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_19_1.4bpp.lz");
static const ax_sprite sXatuSprites19[] = {
	{NULL, 32}, 
	{sXatuGfx19, ARRAY_COUNT(sXatuGfx19)}, 
	{NULL, 32}, 
	{sXatuGfx19_1, ARRAY_COUNT(sXatuGfx19_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sXatuGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_20.4bpp.lz");
static const u8 sXatuGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_20_1.4bpp.lz");
static const u8 sXatuGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_20_2.4bpp.lz");
static const u8 sXatuGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_20_3.4bpp.lz");
static const ax_sprite sXatuSprites20[] = {
	{sXatuGfx20, ARRAY_COUNT(sXatuGfx20)}, 
	{NULL, 32}, 
	{sXatuGfx20_1, ARRAY_COUNT(sXatuGfx20_1)}, 
	{NULL, 32}, 
	{sXatuGfx20_2, ARRAY_COUNT(sXatuGfx20_2)}, 
	{NULL, 32}, 
	{sXatuGfx20_3, ARRAY_COUNT(sXatuGfx20_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sXatuGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_21.4bpp.lz");
static const u8 sXatuGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_21_1.4bpp.lz");
static const u8 sXatuGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_21_2.4bpp.lz");
static const u8 sXatuGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_21_3.4bpp.lz");
static const ax_sprite sXatuSprites21[] = {
	{NULL, 32}, 
	{sXatuGfx21, ARRAY_COUNT(sXatuGfx21)}, 
	{NULL, 32}, 
	{sXatuGfx21_1, ARRAY_COUNT(sXatuGfx21_1)}, 
	{NULL, 32}, 
	{sXatuGfx21_2, ARRAY_COUNT(sXatuGfx21_2)}, 
	{NULL, 32}, 
	{sXatuGfx21_3, ARRAY_COUNT(sXatuGfx21_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sXatuGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_22.4bpp.lz");
static const u8 sXatuGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_22_1.4bpp.lz");
static const u8 sXatuGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_22_2.4bpp.lz");
static const ax_sprite sXatuSprites22[] = {
	{NULL, 32}, 
	{sXatuGfx22, ARRAY_COUNT(sXatuGfx22)}, 
	{NULL, 32}, 
	{sXatuGfx22_1, ARRAY_COUNT(sXatuGfx22_1)}, 
	{NULL, 32}, 
	{sXatuGfx22_2, ARRAY_COUNT(sXatuGfx22_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sXatuGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_23.4bpp.lz");
static const u8 sXatuGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_23_1.4bpp.lz");
static const u8 sXatuGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_23_2.4bpp.lz");
static const ax_sprite sXatuSprites23[] = {
	{sXatuGfx23, ARRAY_COUNT(sXatuGfx23)}, 
	{NULL, 32}, 
	{sXatuGfx23_1, ARRAY_COUNT(sXatuGfx23_1)}, 
	{NULL, 32}, 
	{sXatuGfx23_2, ARRAY_COUNT(sXatuGfx23_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sXatuGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_24.4bpp.lz");
static const u8 sXatuGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_24_1.4bpp.lz");
static const u8 sXatuGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_24_2.4bpp.lz");
static const u8 sXatuGfx24_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_24_3.4bpp.lz");
static const ax_sprite sXatuSprites24[] = {
	{NULL, 32}, 
	{sXatuGfx24, ARRAY_COUNT(sXatuGfx24)}, 
	{NULL, 32}, 
	{sXatuGfx24_1, ARRAY_COUNT(sXatuGfx24_1)}, 
	{NULL, 32}, 
	{sXatuGfx24_2, ARRAY_COUNT(sXatuGfx24_2)}, 
	{NULL, 32}, 
	{sXatuGfx24_3, ARRAY_COUNT(sXatuGfx24_3)}, 
	{NULL, 0}
};
static const u8 sXatuGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_25.4bpp.lz");
static const u8 sXatuGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_25_1.4bpp.lz");
static const u8 sXatuGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_25_2.4bpp.lz");
static const ax_sprite sXatuSprites25[] = {
	{NULL, 32}, 
	{sXatuGfx25, ARRAY_COUNT(sXatuGfx25)}, 
	{NULL, 32}, 
	{sXatuGfx25_1, ARRAY_COUNT(sXatuGfx25_1)}, 
	{NULL, 32}, 
	{sXatuGfx25_2, ARRAY_COUNT(sXatuGfx25_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sXatuGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_26.4bpp.lz");
static const u8 sXatuGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_26_1.4bpp.lz");
static const u8 sXatuGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_26_2.4bpp.lz");
static const ax_sprite sXatuSprites26[] = {
	{NULL, 32}, 
	{sXatuGfx26, ARRAY_COUNT(sXatuGfx26)}, 
	{NULL, 32}, 
	{sXatuGfx26_1, ARRAY_COUNT(sXatuGfx26_1)}, 
	{NULL, 64}, 
	{sXatuGfx26_2, ARRAY_COUNT(sXatuGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sXatuGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_27.4bpp.lz");
static const u8 sXatuGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_27_1.4bpp.lz");
static const u8 sXatuGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_27_2.4bpp.lz");
static const ax_sprite sXatuSprites27[] = {
	{NULL, 32}, 
	{sXatuGfx27, ARRAY_COUNT(sXatuGfx27)}, 
	{NULL, 32}, 
	{sXatuGfx27_1, ARRAY_COUNT(sXatuGfx27_1)}, 
	{NULL, 32}, 
	{sXatuGfx27_2, ARRAY_COUNT(sXatuGfx27_2)}, 
	{NULL, 0}
};
static const u8 sXatuGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_28.4bpp.lz");
static const u8 sXatuGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_28_1.4bpp.lz");
static const ax_sprite sXatuSprites28[] = {
	{sXatuGfx28, ARRAY_COUNT(sXatuGfx28)}, 
	{NULL, 32}, 
	{sXatuGfx28_1, ARRAY_COUNT(sXatuGfx28_1)}, 
	{NULL, 0}
};
static const u8 sXatuGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_29.4bpp.lz");
static const u8 sXatuGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_29_1.4bpp.lz");
static const ax_sprite sXatuSprites29[] = {
	{sXatuGfx29, ARRAY_COUNT(sXatuGfx29)}, 
	{NULL, 64}, 
	{sXatuGfx29_1, ARRAY_COUNT(sXatuGfx29_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sXatuGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_30.4bpp.lz");
static const u8 sXatuGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_30_1.4bpp.lz");
static const u8 sXatuGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_30_2.4bpp.lz");
static const ax_sprite sXatuSprites30[] = {
	{NULL, 32}, 
	{sXatuGfx30, ARRAY_COUNT(sXatuGfx30)}, 
	{NULL, 64}, 
	{sXatuGfx30_1, ARRAY_COUNT(sXatuGfx30_1)}, 
	{NULL, 32}, 
	{sXatuGfx30_2, ARRAY_COUNT(sXatuGfx30_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sXatuGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_31.4bpp.lz");
static const u8 sXatuGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_31_1.4bpp.lz");
static const u8 sXatuGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_31_2.4bpp.lz");
static const ax_sprite sXatuSprites31[] = {
	{sXatuGfx31, ARRAY_COUNT(sXatuGfx31)}, 
	{NULL, 32}, 
	{sXatuGfx31_1, ARRAY_COUNT(sXatuGfx31_1)}, 
	{NULL, 64}, 
	{sXatuGfx31_2, ARRAY_COUNT(sXatuGfx31_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sXatuGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_32.4bpp.lz");
static const u8 sXatuGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_32_1.4bpp.lz");
static const u8 sXatuGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_32_2.4bpp.lz");
static const ax_sprite sXatuSprites32[] = {
	{sXatuGfx32, ARRAY_COUNT(sXatuGfx32)}, 
	{NULL, 64}, 
	{sXatuGfx32_1, ARRAY_COUNT(sXatuGfx32_1)}, 
	{NULL, 32}, 
	{sXatuGfx32_2, ARRAY_COUNT(sXatuGfx32_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sXatuGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_33.4bpp.lz");
static const u8 sXatuGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_33_1.4bpp.lz");
static const ax_sprite sXatuSprites33[] = {
	{NULL, 32}, 
	{sXatuGfx33, ARRAY_COUNT(sXatuGfx33)}, 
	{NULL, 64}, 
	{sXatuGfx33_1, ARRAY_COUNT(sXatuGfx33_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sXatuGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_34.4bpp.lz");
static const u8 sXatuGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_34_1.4bpp.lz");
static const u8 sXatuGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_34_2.4bpp.lz");
static const u8 sXatuGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_34_3.4bpp.lz");
static const ax_sprite sXatuSprites34[] = {
	{NULL, 32}, 
	{sXatuGfx34, ARRAY_COUNT(sXatuGfx34)}, 
	{NULL, 32}, 
	{sXatuGfx34_1, ARRAY_COUNT(sXatuGfx34_1)}, 
	{NULL, 32}, 
	{sXatuGfx34_2, ARRAY_COUNT(sXatuGfx34_2)}, 
	{NULL, 32}, 
	{sXatuGfx34_3, ARRAY_COUNT(sXatuGfx34_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sXatuGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_35.4bpp.lz");
static const u8 sXatuGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_35_1.4bpp.lz");
static const ax_sprite sXatuSprites35[] = {
	{sXatuGfx35, ARRAY_COUNT(sXatuGfx35)}, 
	{NULL, 64}, 
	{sXatuGfx35_1, ARRAY_COUNT(sXatuGfx35_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sXatuGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_36.4bpp.lz");
static const ax_sprite sXatuSprites36[] = {
	{sXatuGfx36, ARRAY_COUNT(sXatuGfx36)}, 
	{NULL, 0}
};
static const u8 sXatuGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_37.4bpp.lz");
static const ax_sprite sXatuSprites37[] = {
	{sXatuGfx37, ARRAY_COUNT(sXatuGfx37)}, 
	{NULL, 0}
};
static const u8 sXatuGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_38.4bpp.lz");
static const ax_sprite sXatuSprites38[] = {
	{sXatuGfx38, ARRAY_COUNT(sXatuGfx38)}, 
	{NULL, 0}
};
static const u8 sXatuGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_39.4bpp.lz");
static const ax_sprite sXatuSprites39[] = {
	{sXatuGfx39, ARRAY_COUNT(sXatuGfx39)}, 
	{NULL, 0}
};
static const u8 sXatuGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_40.4bpp.lz");
static const ax_sprite sXatuSprites40[] = {
	{sXatuGfx40, ARRAY_COUNT(sXatuGfx40)}, 
	{NULL, 0}
};
static const u8 sXatuGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_41.4bpp.lz");
static const ax_sprite sXatuSprites41[] = {
	{sXatuGfx41, ARRAY_COUNT(sXatuGfx41)}, 
	{NULL, 0}
};
static const u8 sXatuGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_42.4bpp.lz");
static const ax_sprite sXatuSprites42[] = {
	{sXatuGfx42, ARRAY_COUNT(sXatuGfx42)}, 
	{NULL, 0}
};
static const u8 sXatuGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_43.4bpp.lz");
static const ax_sprite sXatuSprites43[] = {
	{sXatuGfx43, ARRAY_COUNT(sXatuGfx43)}, 
	{NULL, 0}
};
static const u8 sXatuGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_44.4bpp.lz");
static const ax_sprite sXatuSprites44[] = {
	{sXatuGfx44, ARRAY_COUNT(sXatuGfx44)}, 
	{NULL, 0}
};
static const u8 sXatuGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/xatu/sprite_45.4bpp.lz");
static const ax_sprite sXatuSprites45[] = {
	{sXatuGfx45, ARRAY_COUNT(sXatuGfx45)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesXatu[] = {
	sXatuPose1,
	sXatuPose2,
	sXatuPose3,
	sXatuPose4,
	sXatuPose5,
	sXatuPose6,
	sXatuPose7,
	sXatuPose8,
	sXatuPose9,
	sXatuPose10,
	sXatuPose11,
	sXatuPose12,
	sXatuPose13,
	sXatuPose14,
	sXatuPose15,
	sXatuPose16,
	sXatuPose17,
	sXatuPose18,
	sXatuPose19,
	sXatuPose20,
	sXatuPose21,
	sXatuPose22,
	sXatuPose23,
	sXatuPose24,
	sXatuPose1,
	sXatuPose26,
	sXatuPose27,
	sXatuPose28,
	sXatuPose4,
	sXatuPose30,
	sXatuPose31,
	sXatuPose32,
	sXatuPose7,
	sXatuPose34,
	sXatuPose35,
	sXatuPose36,
	sXatuPose10,
	sXatuPose38,
	sXatuPose39,
	sXatuPose40,
	sXatuPose13,
	sXatuPose42,
	sXatuPose43,
	sXatuPose44,
	sXatuPose16,
	sXatuPose46,
	sXatuPose47,
	sXatuPose48,
	sXatuPose19,
	sXatuPose50,
	sXatuPose51,
	sXatuPose52,
	sXatuPose22,
	sXatuPose54,
	sXatuPose55,
	sXatuPose56,
	sXatuPose1,
	sXatuPose26,
	sXatuPose27,
	sXatuPose28,
	sXatuPose4,
	sXatuPose30,
	sXatuPose31,
	sXatuPose32,
	sXatuPose7,
	sXatuPose34,
	sXatuPose35,
	sXatuPose36,
	sXatuPose10,
	sXatuPose38,
	sXatuPose39,
	sXatuPose40,
	sXatuPose13,
	sXatuPose42,
	sXatuPose43,
	sXatuPose44,
	sXatuPose16,
	sXatuPose46,
	sXatuPose47,
	sXatuPose48,
	sXatuPose19,
	sXatuPose50,
	sXatuPose51,
	sXatuPose52,
	sXatuPose22,
	sXatuPose54,
	sXatuPose55,
	sXatuPose56,
	sXatuPose1,
	sXatuPose28,
	sXatuPose91,
	sXatuPose92,
	sXatuPose93,
	sXatuPose94,
	sXatuPose95,
	sXatuPose96,
	sXatuPose97,
	sXatuPose98,
	sXatuPose99,
	sXatuPose100,
	sXatuPose13,
	sXatuPose102,
	sXatuPose103,
	sXatuPose104,
	sXatuPose105,
	sXatuPose106,
	sXatuPose107,
	sXatuPose108,
	sXatuPose109,
	sXatuPose110,
	sXatuPose111,
	sXatuPose112,
	sXatuPose1,
	sXatuPose22,
	sXatuPose19,
	sXatuPose16,
	sXatuPose13,
	sXatuPose10,
	sXatuPose7,
	sXatuPose4,
	sXatuPose121,
	sXatuPose122,
	sXatuPose123,
	sXatuPose124,
	sXatuPose125,
	sXatuPose126,
	sXatuPose127,
	sXatuPose128,
	sXatuPose129,
	sXatuPose130,
	sXatuPose1,
	sXatuPose132,
	sXatuPose27,
	sXatuPose28,
	sXatuPose4,
	sXatuPose136,
	sXatuPose31,
	sXatuPose32,
	sXatuPose7,
	sXatuPose140,
	sXatuPose35,
	sXatuPose36,
	sXatuPose10,
	sXatuPose144,
	sXatuPose39,
	sXatuPose40,
	sXatuPose13,
	sXatuPose148,
	sXatuPose43,
	sXatuPose44,
	sXatuPose16,
	sXatuPose152,
	sXatuPose47,
	sXatuPose48,
	sXatuPose19,
	sXatuPose156,
	sXatuPose51,
	sXatuPose52,
	sXatuPose22,
	sXatuPose160,
	sXatuPose55,
	sXatuPose56,
	sXatuPose28,
	sXatuPose111,
	sXatuPose108,
	sXatuPose105,
	sXatuPose102,
	sXatuPose99,
	sXatuPose96,
	sXatuPose93,
	sXatuPose91,
	sXatuPose94,
	sXatuPose97,
	sXatuPose100,
	sXatuPose103,
	sXatuPose106,
	sXatuPose109,
	sXatuPose112,
	sXatuPose1,
	sXatuPose28,
	sXatuPose27,
	sXatuPose4,
	sXatuPose32,
	sXatuPose31,
	sXatuPose7,
	sXatuPose36,
	sXatuPose187,
	sXatuPose10,
	sXatuPose40,
	sXatuPose190,
	sXatuPose13,
	sXatuPose44,
	sXatuPose43,
	sXatuPose16,
	sXatuPose48,
	sXatuPose196,
	sXatuPose19,
	sXatuPose52,
	sXatuPose199,
	sXatuPose22,
	sXatuPose56,
	sXatuPose55,
	sXatuPose203,
	sXatuPose55,
	sXatuPose51,
	sXatuPose206,
	sXatuPose43,
	sXatuPose190,
	sXatuPose187,
	sXatuPose210,
	sXatuPose1,
	sXatuPose22,
	sXatuPose19,
	sXatuPose16,
	sXatuPose13,
	sXatuPose10,
	sXatuPose7,
	sXatuPose4,
	sXatuPose13,
	sXatuPose220,
	sXatuPose221,
	sXatuPose222,
	sXatuPose1,
	sXatuPose2,
	sXatuPose3,
	sXatuPose4,
	sXatuPose5,
	sXatuPose6,
	sXatuPose7,
	sXatuPose8,
	sXatuPose9,
	sXatuPose10,
	sXatuPose11,
	sXatuPose12,
	sXatuPose13,
	sXatuPose14,
	sXatuPose15,
	sXatuPose16,
	sXatuPose17,
	sXatuPose18,
	sXatuPose19,
	sXatuPose20,
	sXatuPose21,
	sXatuPose22,
	sXatuPose23,
	sXatuPose24,
};

static const struct PositionSets sAxPositionsXatu[] = {
	[0] = { .set = { {-1, -10}, {-4, -2}, {2, -2}, {-1, -7} } },
	[1] = { .set = { {1, -9}, {-3, -1}, {3, -2}, {-1, -6} } },
	[2] = { .set = { {-3, -9}, {-5, -2}, {1, -1}, {-1, -6} } },
	[3] = { .set = { {6, -12}, {4, -4}, {0, -2}, {-1, -7} } },
	[4] = { .set = { {4, -10}, {4, -3}, {-2, -1}, {-1, -6} } },
	[5] = { .set = { {7, -11}, {3, -4}, {-2, -2}, {-1, -6} } },
	[6] = { .set = { {7, -15}, {3, -4}, {2, -3}, {-1, -8} } },
	[7] = { .set = { {7, -13}, {1, -2}, {-2, -1}, {-1, -7} } },
	[8] = { .set = { {6, -14}, {3, -3}, {3, -2}, {-2, -8} } },
	[9] = { .set = { {6, -17}, {-2, -5}, {4, -4}, {0, -8} } },
	[10] = { .set = { {6, -15}, {-1, -5}, {3, -2}, {-2, -8} } },
	[11] = { .set = { {5, -16}, {-3, -5}, {4, -3}, {-2, -8} } },
	[12] = { .set = { {-1, -19}, {2, -4}, {-4, -4}, {-1, -8} } },
	[13] = { .set = { {-3, -18}, {1, -4}, {-4, -3}, {-1, -7} } },
	[14] = { .set = { {1, -18}, {2, -3}, {-3, -4}, {-1, -7} } },
	[15] = { .set = { {-8, -17}, {0, -5}, {-6, -4}, {-2, -8} } },
	[16] = { .set = { {-8, -15}, {-1, -5}, {-5, -2}, {0, -8} } },
	[17] = { .set = { {-7, -16}, {1, -5}, {-6, -3}, {0, -8} } },
	[18] = { .set = { {-9, -15}, {-5, -4}, {-4, -3}, {-1, -8} } },
	[19] = { .set = { {-9, -13}, {-3, -2}, {0, -1}, {-1, -7} } },
	[20] = { .set = { {-8, -14}, {-5, -3}, {-5, -2}, {0, -8} } },
	[21] = { .set = { {-8, -12}, {-6, -4}, {-2, -2}, {-1, -7} } },
	[22] = { .set = { {-6, -10}, {-6, -3}, {0, -1}, {-1, -6} } },
	[23] = { .set = { {-9, -11}, {-5, -4}, {0, -2}, {-1, -6} } },
	[24] = { .set = { {-1, -10}, {-4, -2}, {2, -2}, {-1, -7} } },
	[25] = { .set = { {-1, -10}, {-3, -4}, {1, -4}, {-1, -8} } },
	[26] = { .set = { {-1, -3}, {-12, -11}, {10, -11}, {-1, -7} } },
	[27] = { .set = { {-1, -15}, {-10, -11}, {8, -11}, {-1, -9} } },
	[28] = { .set = { {6, -12}, {4, -4}, {0, -2}, {-1, -7} } },
	[29] = { .set = { {3, -13}, {2, -6}, {-2, -5}, {-2, -9} } },
	[30] = { .set = { {7, -9}, {8, -19}, {-11, -14}, {-1, -8} } },
	[31] = { .set = { {5, -18}, {7, -12}, {-1, -9}, {0, -11} } },
	[32] = { .set = { {7, -15}, {3, -4}, {2, -3}, {-1, -8} } },
	[33] = { .set = { {2, -14}, {1, -8}, {-1, -5}, {-4, -8} } },
	[34] = { .set = { {9, -13}, {2, -23}, {-2, -13}, {-2, -11} } },
	[35] = { .set = { {5, -19}, {4, -13}, {2, -9}, {-1, -11} } },
	[36] = { .set = { {6, -17}, {-2, -5}, {4, -4}, {0, -8} } },
	[37] = { .set = { {2, -15}, {-3, -8}, {1, -7}, {-4, -7} } },
	[38] = { .set = { {3, -18}, {-7, -19}, {7, -12}, {-2, -11} } },
	[39] = { .set = { {3, -20}, {-2, -15}, {6, -10}, {-2, -9} } },
	[40] = { .set = { {-1, -19}, {2, -4}, {-4, -4}, {-1, -8} } },
	[41] = { .set = { {-1, -15}, {1, -4}, {-3, -4}, {-1, -7} } },
	[42] = { .set = { {-1, -18}, {9, -17}, {-11, -17}, {-1, -11} } },
	[43] = { .set = { {0, -19}, {8, -9}, {-8, -9}, {0, -6} } },
	[44] = { .set = { {-8, -17}, {0, -5}, {-6, -4}, {-2, -8} } },
	[45] = { .set = { {-4, -15}, {1, -8}, {-3, -7}, {2, -7} } },
	[46] = { .set = { {-5, -18}, {5, -19}, {-9, -12}, {0, -11} } },
	[47] = { .set = { {-4, -20}, {1, -15}, {-7, -10}, {1, -9} } },
	[48] = { .set = { {-9, -15}, {-5, -4}, {-4, -3}, {-1, -8} } },
	[49] = { .set = { {-4, -14}, {-3, -8}, {-1, -5}, {2, -8} } },
	[50] = { .set = { {-11, -13}, {-4, -23}, {0, -13}, {0, -11} } },
	[51] = { .set = { {-6, -19}, {-5, -13}, {-3, -9}, {0, -11} } },
	[52] = { .set = { {-8, -12}, {-6, -4}, {-2, -2}, {-1, -7} } },
	[53] = { .set = { {-5, -13}, {-4, -6}, {0, -5}, {0, -9} } },
	[54] = { .set = { {-9, -9}, {-10, -19}, {9, -14}, {-1, -8} } },
	[55] = { .set = { {-6, -18}, {-8, -12}, {0, -9}, {-1, -11} } },
	[56] = { .set = { {-1, -10}, {-4, -2}, {2, -2}, {-1, -7} } },
	[57] = { .set = { {-1, -10}, {-3, -4}, {1, -4}, {-1, -8} } },
	[58] = { .set = { {-1, -3}, {-12, -11}, {10, -11}, {-1, -7} } },
	[59] = { .set = { {-1, -15}, {-10, -11}, {8, -11}, {-1, -9} } },
	[60] = { .set = { {6, -12}, {4, -4}, {0, -2}, {-1, -7} } },
	[61] = { .set = { {3, -13}, {2, -6}, {-2, -5}, {-2, -9} } },
	[62] = { .set = { {7, -9}, {8, -19}, {-11, -14}, {-1, -8} } },
	[63] = { .set = { {5, -18}, {7, -12}, {-1, -9}, {0, -11} } },
	[64] = { .set = { {7, -15}, {3, -4}, {2, -3}, {-1, -8} } },
	[65] = { .set = { {2, -14}, {1, -8}, {-1, -5}, {-4, -8} } },
	[66] = { .set = { {9, -13}, {2, -23}, {-2, -13}, {-2, -11} } },
	[67] = { .set = { {5, -19}, {4, -13}, {2, -9}, {-1, -11} } },
	[68] = { .set = { {6, -17}, {-2, -5}, {4, -4}, {0, -8} } },
	[69] = { .set = { {2, -15}, {-3, -8}, {1, -7}, {-4, -7} } },
	[70] = { .set = { {3, -18}, {-7, -19}, {7, -12}, {-2, -11} } },
	[71] = { .set = { {3, -20}, {-2, -15}, {6, -10}, {-2, -9} } },
	[72] = { .set = { {-1, -19}, {2, -4}, {-4, -4}, {-1, -8} } },
	[73] = { .set = { {-1, -15}, {1, -4}, {-3, -4}, {-1, -7} } },
	[74] = { .set = { {-1, -18}, {9, -17}, {-11, -17}, {-1, -11} } },
	[75] = { .set = { {0, -19}, {8, -9}, {-8, -9}, {0, -6} } },
	[76] = { .set = { {-8, -17}, {0, -5}, {-6, -4}, {-2, -8} } },
	[77] = { .set = { {-4, -15}, {1, -8}, {-3, -7}, {2, -7} } },
	[78] = { .set = { {-5, -18}, {5, -19}, {-9, -12}, {0, -11} } },
	[79] = { .set = { {-4, -20}, {1, -15}, {-7, -10}, {1, -9} } },
	[80] = { .set = { {-9, -15}, {-5, -4}, {-4, -3}, {-1, -8} } },
	[81] = { .set = { {-4, -14}, {-3, -8}, {-1, -5}, {2, -8} } },
	[82] = { .set = { {-11, -13}, {-4, -23}, {0, -13}, {0, -11} } },
	[83] = { .set = { {-6, -19}, {-5, -13}, {-3, -9}, {0, -11} } },
	[84] = { .set = { {-8, -12}, {-6, -4}, {-2, -2}, {-1, -7} } },
	[85] = { .set = { {-5, -13}, {-4, -6}, {0, -5}, {0, -9} } },
	[86] = { .set = { {-9, -9}, {-10, -19}, {9, -14}, {-1, -8} } },
	[87] = { .set = { {-6, -18}, {-8, -12}, {0, -9}, {-1, -11} } },
	[88] = { .set = { {-1, -10}, {-4, -2}, {2, -2}, {-1, -7} } },
	[89] = { .set = { {-1, -15}, {-10, -11}, {8, -11}, {-1, -9} } },
	[90] = { .set = { {-1, -10}, {-12, -15}, {10, -15}, {-1, -9} } },
	[91] = { .set = { {6, -13}, {4, -5}, {0, -3}, {-1, -8} } },
	[92] = { .set = { {4, -18}, {6, -12}, {-2, -9}, {-1, -11} } },
	[93] = { .set = { {7, -12}, {7, -18}, {-10, -14}, {-1, -8} } },
	[94] = { .set = { {7, -16}, {3, -5}, {2, -4}, {-1, -9} } },
	[95] = { .set = { {5, -17}, {4, -11}, {2, -7}, {-1, -9} } },
	[96] = { .set = { {8, -15}, {-3, -17}, {-4, -11}, {-1, -9} } },
	[97] = { .set = { {6, -18}, {-2, -6}, {4, -5}, {0, -9} } },
	[98] = { .set = { {4, -19}, {-1, -14}, {7, -9}, {-1, -8} } },
	[99] = { .set = { {7, -17}, {-7, -17}, {8, -12}, {0, -10} } },
	[100] = { .set = { {-1, -19}, {2, -4}, {-4, -4}, {-1, -8} } },
	[101] = { .set = { {-1, -19}, {7, -9}, {-9, -9}, {-1, -6} } },
	[102] = { .set = { {-1, -16}, {10, -15}, {-12, -15}, {-1, -8} } },
	[103] = { .set = { {-7, -18}, {1, -6}, {-5, -5}, {-1, -9} } },
	[104] = { .set = { {-5, -19}, {0, -14}, {-8, -9}, {0, -8} } },
	[105] = { .set = { {-8, -17}, {6, -17}, {-9, -12}, {-1, -10} } },
	[106] = { .set = { {-8, -16}, {-4, -5}, {-3, -4}, {0, -9} } },
	[107] = { .set = { {-6, -17}, {-5, -11}, {-3, -7}, {0, -9} } },
	[108] = { .set = { {-9, -15}, {2, -17}, {3, -11}, {0, -9} } },
	[109] = { .set = { {-7, -13}, {-5, -5}, {-1, -3}, {0, -8} } },
	[110] = { .set = { {-5, -18}, {-7, -12}, {1, -9}, {0, -11} } },
	[111] = { .set = { {-8, -12}, {-8, -18}, {9, -14}, {0, -8} } },
	[112] = { .set = { {-1, -10}, {-4, -2}, {2, -2}, {-1, -7} } },
	[113] = { .set = { {-8, -12}, {-6, -4}, {-2, -2}, {-1, -7} } },
	[114] = { .set = { {-9, -15}, {-5, -4}, {-4, -3}, {-1, -8} } },
	[115] = { .set = { {-8, -17}, {0, -5}, {-6, -4}, {-2, -8} } },
	[116] = { .set = { {-1, -19}, {2, -4}, {-4, -4}, {-1, -8} } },
	[117] = { .set = { {6, -17}, {-2, -5}, {4, -4}, {0, -8} } },
	[118] = { .set = { {7, -15}, {3, -4}, {2, -3}, {-1, -8} } },
	[119] = { .set = { {6, -12}, {4, -4}, {0, -2}, {-1, -7} } },
	[120] = { .set = { {-8, -10}, {-7, -2}, {-2, 0}, {-1, -7} } },
	[121] = { .set = { {-9, -8}, {-6, -3}, {-3, -1}, {-1, -7} } },
	[122] = { .set = { {0, -17}, {-11, -15}, {11, -15}, {0, -11} } },
	[123] = { .set = { {3, -20}, {2, -22}, {-14, -8}, {-1, -12} } },
	[124] = { .set = { {2, -22}, {-4, -19}, {-8, -6}, {-1, -11} } },
	[125] = { .set = { {-1, -21}, {-13, -17}, {1, -8}, {-2, -9} } },
	[126] = { .set = { {0, -21}, {11, -11}, {-11, -11}, {0, -8} } },
	[127] = { .set = { {0, -21}, {12, -17}, {-2, -8}, {1, -9} } },
	[128] = { .set = { {-3, -22}, {3, -19}, {7, -6}, {0, -11} } },
	[129] = { .set = { {-4, -20}, {-3, -22}, {13, -8}, {0, -12} } },
	[130] = { .set = { {-1, -10}, {-4, -2}, {2, -2}, {-1, -7} } },
	[131] = { .set = { {-1, -11}, {-3, -5}, {1, -5}, {-1, -9} } },
	[132] = { .set = { {-1, -3}, {-12, -11}, {10, -11}, {-1, -7} } },
	[133] = { .set = { {-1, -15}, {-10, -11}, {8, -11}, {-1, -9} } },
	[134] = { .set = { {6, -12}, {4, -4}, {0, -2}, {-1, -7} } },
	[135] = { .set = { {6, -12}, {5, -5}, {1, -4}, {1, -8} } },
	[136] = { .set = { {7, -9}, {8, -19}, {-11, -14}, {-1, -8} } },
	[137] = { .set = { {5, -18}, {7, -12}, {-1, -9}, {0, -11} } },
	[138] = { .set = { {7, -15}, {3, -4}, {2, -3}, {-1, -8} } },
	[139] = { .set = { {5, -13}, {4, -7}, {2, -4}, {-1, -7} } },
	[140] = { .set = { {9, -13}, {2, -23}, {-2, -13}, {-2, -11} } },
	[141] = { .set = { {5, -19}, {4, -13}, {2, -9}, {-1, -11} } },
	[142] = { .set = { {6, -17}, {-2, -5}, {4, -4}, {0, -8} } },
	[143] = { .set = { {5, -16}, {0, -9}, {4, -8}, {-1, -8} } },
	[144] = { .set = { {3, -18}, {-7, -19}, {7, -12}, {-2, -11} } },
	[145] = { .set = { {3, -20}, {-2, -15}, {6, -10}, {-2, -9} } },
	[146] = { .set = { {-1, -19}, {2, -4}, {-4, -4}, {-1, -8} } },
	[147] = { .set = { {-1, -17}, {1, -6}, {-3, -6}, {-1, -9} } },
	[148] = { .set = { {-1, -18}, {9, -17}, {-11, -17}, {-1, -11} } },
	[149] = { .set = { {0, -19}, {8, -9}, {-8, -9}, {0, -6} } },
	[150] = { .set = { {-8, -17}, {0, -5}, {-6, -4}, {-2, -8} } },
	[151] = { .set = { {-6, -16}, {-1, -9}, {-5, -8}, {0, -8} } },
	[152] = { .set = { {-5, -18}, {5, -19}, {-9, -12}, {0, -11} } },
	[153] = { .set = { {-4, -20}, {1, -15}, {-7, -10}, {1, -9} } },
	[154] = { .set = { {-9, -15}, {-5, -4}, {-4, -3}, {-1, -8} } },
	[155] = { .set = { {-6, -13}, {-5, -7}, {-3, -4}, {0, -7} } },
	[156] = { .set = { {-11, -13}, {-4, -23}, {0, -13}, {0, -11} } },
	[157] = { .set = { {-6, -19}, {-5, -13}, {-3, -9}, {0, -11} } },
	[158] = { .set = { {-8, -12}, {-6, -4}, {-2, -2}, {-1, -7} } },
	[159] = { .set = { {-7, -12}, {-6, -5}, {-2, -4}, {-2, -8} } },
	[160] = { .set = { {-9, -9}, {-10, -19}, {9, -14}, {-1, -8} } },
	[161] = { .set = { {-6, -18}, {-8, -12}, {0, -9}, {-1, -11} } },
	[162] = { .set = { {-1, -15}, {-10, -11}, {8, -11}, {-1, -9} } },
	[163] = { .set = { {-5, -18}, {-7, -12}, {1, -9}, {0, -11} } },
	[164] = { .set = { {-6, -17}, {-5, -11}, {-3, -7}, {0, -9} } },
	[165] = { .set = { {-5, -19}, {0, -14}, {-8, -9}, {0, -8} } },
	[166] = { .set = { {-1, -19}, {7, -9}, {-9, -9}, {-1, -6} } },
	[167] = { .set = { {4, -19}, {-1, -14}, {7, -9}, {-1, -8} } },
	[168] = { .set = { {5, -17}, {4, -11}, {2, -7}, {-1, -9} } },
	[169] = { .set = { {4, -18}, {6, -12}, {-2, -9}, {-1, -11} } },
	[170] = { .set = { {-1, -10}, {-12, -15}, {10, -15}, {-1, -9} } },
	[171] = { .set = { {7, -12}, {7, -18}, {-10, -14}, {-1, -8} } },
	[172] = { .set = { {8, -15}, {-3, -17}, {-4, -11}, {-1, -9} } },
	[173] = { .set = { {7, -17}, {-7, -17}, {8, -12}, {0, -10} } },
	[174] = { .set = { {-1, -16}, {10, -15}, {-12, -15}, {-1, -8} } },
	[175] = { .set = { {-8, -17}, {6, -17}, {-9, -12}, {-1, -10} } },
	[176] = { .set = { {-9, -15}, {2, -17}, {3, -11}, {0, -9} } },
	[177] = { .set = { {-8, -12}, {-8, -18}, {9, -14}, {0, -8} } },
	[178] = { .set = { {-1, -10}, {-4, -2}, {2, -2}, {-1, -7} } },
	[179] = { .set = { {-1, -15}, {-10, -11}, {8, -11}, {-1, -9} } },
	[180] = { .set = { {-1, -3}, {-12, -11}, {10, -11}, {-1, -7} } },
	[181] = { .set = { {6, -12}, {4, -4}, {0, -2}, {-1, -7} } },
	[182] = { .set = { {5, -18}, {7, -12}, {-1, -9}, {0, -11} } },
	[183] = { .set = { {7, -9}, {8, -19}, {-11, -14}, {-1, -8} } },
	[184] = { .set = { {7, -15}, {3, -4}, {2, -3}, {-1, -8} } },
	[185] = { .set = { {5, -19}, {4, -13}, {2, -9}, {-1, -11} } },
	[186] = { .set = { {10, -13}, {3, -23}, {-1, -13}, {-1, -11} } },
	[187] = { .set = { {6, -17}, {-2, -5}, {4, -4}, {0, -8} } },
	[188] = { .set = { {3, -20}, {-2, -15}, {6, -10}, {-2, -9} } },
	[189] = { .set = { {5, -18}, {-5, -19}, {9, -12}, {0, -11} } },
	[190] = { .set = { {-1, -19}, {2, -4}, {-4, -4}, {-1, -8} } },
	[191] = { .set = { {0, -19}, {8, -9}, {-8, -9}, {0, -6} } },
	[192] = { .set = { {-1, -18}, {9, -17}, {-11, -17}, {-1, -11} } },
	[193] = { .set = { {-8, -17}, {0, -5}, {-6, -4}, {-2, -8} } },
	[194] = { .set = { {-4, -20}, {1, -15}, {-7, -10}, {1, -9} } },
	[195] = { .set = { {-7, -18}, {3, -19}, {-11, -12}, {-2, -11} } },
	[196] = { .set = { {-9, -15}, {-5, -4}, {-4, -3}, {-1, -8} } },
	[197] = { .set = { {-6, -19}, {-5, -13}, {-3, -9}, {0, -11} } },
	[198] = { .set = { {-12, -13}, {-5, -23}, {-1, -13}, {-1, -11} } },
	[199] = { .set = { {-8, -12}, {-6, -4}, {-2, -2}, {-1, -7} } },
	[200] = { .set = { {-6, -18}, {-8, -12}, {0, -9}, {-1, -11} } },
	[201] = { .set = { {-9, -9}, {-10, -19}, {9, -14}, {-1, -8} } },
	[202] = { .set = { {-1, -5}, {-12, -13}, {10, -13}, {-1, -9} } },
	[203] = { .set = { {-9, -9}, {-10, -19}, {9, -14}, {-1, -8} } },
	[204] = { .set = { {-11, -13}, {-4, -23}, {0, -13}, {0, -11} } },
	[205] = { .set = { {-6, -18}, {4, -19}, {-10, -12}, {-1, -11} } },
	[206] = { .set = { {-1, -18}, {9, -17}, {-11, -17}, {-1, -11} } },
	[207] = { .set = { {5, -18}, {-5, -19}, {9, -12}, {0, -11} } },
	[208] = { .set = { {10, -13}, {3, -23}, {-1, -13}, {-1, -11} } },
	[209] = { .set = { {8, -9}, {9, -19}, {-10, -14}, {0, -8} } },
	[210] = { .set = { {-1, -10}, {-4, -2}, {2, -2}, {-1, -7} } },
	[211] = { .set = { {-8, -12}, {-6, -4}, {-2, -2}, {-1, -7} } },
	[212] = { .set = { {-9, -15}, {-5, -4}, {-4, -3}, {-1, -8} } },
	[213] = { .set = { {-8, -17}, {0, -5}, {-6, -4}, {-2, -8} } },
	[214] = { .set = { {-1, -19}, {2, -4}, {-4, -4}, {-1, -8} } },
	[215] = { .set = { {6, -17}, {-2, -5}, {4, -4}, {0, -8} } },
	[216] = { .set = { {7, -15}, {3, -4}, {2, -3}, {-1, -8} } },
	[217] = { .set = { {6, -12}, {4, -4}, {0, -2}, {-1, -7} } },
	[218] = { .set = { {-1, -19}, {2, -4}, {-4, -4}, {-1, -8} } },
	[219] = { .set = { {-1, -17}, {5, -11}, {-7, -11}, {-1, -8} } },
	[220] = { .set = { {-1, -21}, {10, -12}, {-12, -12}, {-1, -8} } },
	[221] = { .set = { {-1, -23}, {2, -4}, {-4, -4}, {-1, -7} } },
	[222] = { .set = { {-1, -10}, {-4, -2}, {2, -2}, {-1, -7} } },
	[223] = { .set = { {1, -9}, {-3, -1}, {3, -2}, {-1, -6} } },
	[224] = { .set = { {-3, -9}, {-5, -2}, {1, -1}, {-1, -6} } },
	[225] = { .set = { {6, -12}, {4, -4}, {0, -2}, {-1, -7} } },
	[226] = { .set = { {4, -10}, {4, -3}, {-2, -1}, {-1, -6} } },
	[227] = { .set = { {7, -11}, {3, -4}, {-2, -2}, {-1, -6} } },
	[228] = { .set = { {7, -15}, {3, -4}, {2, -3}, {-1, -8} } },
	[229] = { .set = { {7, -13}, {1, -2}, {-2, -1}, {-1, -7} } },
	[230] = { .set = { {6, -14}, {3, -3}, {3, -2}, {-2, -8} } },
	[231] = { .set = { {6, -17}, {-2, -5}, {4, -4}, {0, -8} } },
	[232] = { .set = { {6, -15}, {-1, -5}, {3, -2}, {-2, -8} } },
	[233] = { .set = { {5, -16}, {-3, -5}, {4, -3}, {-2, -8} } },
	[234] = { .set = { {-1, -19}, {2, -4}, {-4, -4}, {-1, -8} } },
	[235] = { .set = { {-3, -18}, {1, -4}, {-4, -3}, {-1, -7} } },
	[236] = { .set = { {1, -18}, {2, -3}, {-3, -4}, {-1, -7} } },
	[237] = { .set = { {-8, -17}, {0, -5}, {-6, -4}, {-2, -8} } },
	[238] = { .set = { {-8, -15}, {-1, -5}, {-5, -2}, {0, -8} } },
	[239] = { .set = { {-7, -16}, {1, -5}, {-6, -3}, {0, -8} } },
	[240] = { .set = { {-9, -15}, {-5, -4}, {-4, -3}, {-1, -8} } },
	[241] = { .set = { {-9, -13}, {-3, -2}, {0, -1}, {-1, -7} } },
	[242] = { .set = { {-8, -14}, {-5, -3}, {-5, -2}, {0, -8} } },
	[243] = { .set = { {-8, -12}, {-6, -4}, {-2, -2}, {-1, -7} } },
	[244] = { .set = { {-6, -10}, {-6, -3}, {0, -1}, {-1, -6} } },
	[245] = { .set = { {-9, -11}, {-5, -4}, {0, -2}, {-1, -6} } },
};

static const ax_anim *const sXatuAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sXatuAnimTable2[] = {
	AX_ANIM_PTR(sXatuAnims_2_1),
	AX_ANIM_PTR(sXatuAnims_2_2),
	AX_ANIM_PTR(sXatuAnims_2_3),
	AX_ANIM_PTR(sXatuAnims_2_4),
	AX_ANIM_PTR(sXatuAnims_2_5),
	AX_ANIM_PTR(sXatuAnims_2_6),
	AX_ANIM_PTR(sXatuAnims_2_7),
	AX_ANIM_PTR(sXatuAnims_2_8),
};

static const ax_anim *const sXatuAnimTable3[] = {
	AX_ANIM_PTR(sXatuAnims_3_1),
	AX_ANIM_PTR(sXatuAnims_3_2),
	AX_ANIM_PTR(sXatuAnims_3_3),
	AX_ANIM_PTR(sXatuAnims_3_4),
	AX_ANIM_PTR(sXatuAnims_3_5),
	AX_ANIM_PTR(sXatuAnims_3_6),
	AX_ANIM_PTR(sXatuAnims_3_7),
	AX_ANIM_PTR(sXatuAnims_3_8),
};

static const ax_anim *const sXatuAnimTable4[] = {
	AX_ANIM_PTR(sXatuAnims_4_1),
	AX_ANIM_PTR(sXatuAnims_4_2),
	AX_ANIM_PTR(sXatuAnims_4_3),
	AX_ANIM_PTR(sXatuAnims_4_4),
	AX_ANIM_PTR(sXatuAnims_4_5),
	AX_ANIM_PTR(sXatuAnims_4_6),
	AX_ANIM_PTR(sXatuAnims_4_7),
	AX_ANIM_PTR(sXatuAnims_4_8),
};

static const ax_anim *const sXatuAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00249),
	AX_ANIM_PTR(gAxSharedAnim_00309),
	AX_ANIM_PTR(gAxSharedAnim_00301),
	AX_ANIM_PTR(gAxSharedAnim_00294),
	AX_ANIM_PTR(gAxSharedAnim_00285),
	AX_ANIM_PTR(gAxSharedAnim_00276),
	AX_ANIM_PTR(gAxSharedAnim_00270),
	AX_ANIM_PTR(gAxSharedAnim_00258),
};

static const ax_anim *const sXatuAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
};

static const ax_anim *const sXatuAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00332),
	AX_ANIM_PTR(gAxSharedAnim_00342),
	AX_ANIM_PTR(gAxSharedAnim_00350),
	AX_ANIM_PTR(gAxSharedAnim_00358),
	AX_ANIM_PTR(gAxSharedAnim_00370),
	AX_ANIM_PTR(gAxSharedAnim_00378),
	AX_ANIM_PTR(gAxSharedAnim_00385),
	AX_ANIM_PTR(gAxSharedAnim_00392),
};

static const ax_anim *const sXatuAnimTable8[] = {
	AX_ANIM_PTR(sXatuAnims_8_1),
	AX_ANIM_PTR(sXatuAnims_8_2),
	AX_ANIM_PTR(sXatuAnims_8_3),
	AX_ANIM_PTR(sXatuAnims_8_4),
	AX_ANIM_PTR(sXatuAnims_8_5),
	AX_ANIM_PTR(sXatuAnims_8_6),
	AX_ANIM_PTR(sXatuAnims_8_7),
	AX_ANIM_PTR(sXatuAnims_8_8),
};

static const ax_anim *const sXatuAnimTable9[] = {
	AX_ANIM_PTR(gAxSharedAnim_00703),
	AX_ANIM_PTR(gAxSharedAnim_00777),
	AX_ANIM_PTR(sXatuAnims_9_3),
	AX_ANIM_PTR(sXatuAnims_9_4),
	AX_ANIM_PTR(sXatuAnims_9_5),
	AX_ANIM_PTR(sXatuAnims_9_6),
	AX_ANIM_PTR(sXatuAnims_9_7),
	AX_ANIM_PTR(gAxSharedAnim_00711),
};

static const ax_anim *const sXatuAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00801),
	AX_ANIM_PTR(gAxSharedAnim_00813),
	AX_ANIM_PTR(gAxSharedAnim_00827),
	AX_ANIM_PTR(gAxSharedAnim_00838),
	AX_ANIM_PTR(gAxSharedAnim_00849),
	AX_ANIM_PTR(gAxSharedAnim_00862),
	AX_ANIM_PTR(gAxSharedAnim_00879),
	AX_ANIM_PTR(gAxSharedAnim_00889),
};

static const ax_anim *const sXatuAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_00900),
	AX_ANIM_PTR(gAxSharedAnim_00941),
	AX_ANIM_PTR(gAxSharedAnim_00976),
	AX_ANIM_PTR(gAxSharedAnim_01026),
	AX_ANIM_PTR(gAxSharedAnim_01076),
	AX_ANIM_PTR(gAxSharedAnim_01122),
	AX_ANIM_PTR(gAxSharedAnim_01166),
	AX_ANIM_PTR(gAxSharedAnim_01198),
};

static const ax_anim *const sXatuAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01243),
	AX_ANIM_PTR(gAxSharedAnim_01327),
	AX_ANIM_PTR(gAxSharedAnim_01308),
	AX_ANIM_PTR(gAxSharedAnim_01292),
	AX_ANIM_PTR(gAxSharedAnim_01291),
	AX_ANIM_PTR(gAxSharedAnim_01280),
	AX_ANIM_PTR(gAxSharedAnim_01260),
	AX_ANIM_PTR(gAxSharedAnim_01244),
};

static const ax_anim *const sXatuAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01335),
	AX_ANIM_PTR(gAxSharedAnim_01409),
	AX_ANIM_PTR(gAxSharedAnim_01397),
	AX_ANIM_PTR(gAxSharedAnim_01386),
	AX_ANIM_PTR(gAxSharedAnim_01374),
	AX_ANIM_PTR(gAxSharedAnim_01366),
	AX_ANIM_PTR(gAxSharedAnim_01358),
	AX_ANIM_PTR(gAxSharedAnim_01348),
};

static const ax_anim *const sXatuAnimTable14[] = {
	AX_ANIM_PTR(sXatuAnims_14_1),
	AX_ANIM_PTR(sXatuAnims_14_1),
	AX_ANIM_PTR(sXatuAnims_14_1),
	AX_ANIM_PTR(sXatuAnims_14_1),
	AX_ANIM_PTR(sXatuAnims_14_1),
	AX_ANIM_PTR(sXatuAnims_14_1),
	AX_ANIM_PTR(sXatuAnims_14_1),
	AX_ANIM_PTR(sXatuAnims_14_1),
};

static const ax_anim *const sXatuAnimTable15[] = {
	AX_ANIM_PTR(sXatuAnims_15_1),
	AX_ANIM_PTR(sXatuAnims_15_1),
	AX_ANIM_PTR(sXatuAnims_15_1),
	AX_ANIM_PTR(sXatuAnims_15_1),
	AX_ANIM_PTR(sXatuAnims_15_1),
	AX_ANIM_PTR(sXatuAnims_15_1),
	AX_ANIM_PTR(sXatuAnims_15_1),
	AX_ANIM_PTR(sXatuAnims_15_1),
};

static const ax_anim *const sXatuAnimTable16[] = {
	AX_ANIM_PTR(gAxSharedAnim_01448),
	AX_ANIM_PTR(gAxSharedAnim_01468),
	AX_ANIM_PTR(gAxSharedAnim_01481),
	AX_ANIM_PTR(gAxSharedAnim_01500),
	AX_ANIM_PTR(gAxSharedAnim_01526),
	AX_ANIM_PTR(gAxSharedAnim_01545),
	AX_ANIM_PTR(gAxSharedAnim_01574),
	AX_ANIM_PTR(gAxSharedAnim_01588),
};

static const ax_anim *const *const sAxAnimationsXatu[] = {
	sXatuAnimTable1,
	sXatuAnimTable2,
	sXatuAnimTable3,
	sXatuAnimTable4,
	sXatuAnimTable5,
	sXatuAnimTable6,
	sXatuAnimTable7,
	sXatuAnimTable8,
	sXatuAnimTable9,
	sXatuAnimTable10,
	sXatuAnimTable11,
	sXatuAnimTable12,
	sXatuAnimTable13,
	sXatuAnimTable14,
	sXatuAnimTable15,
	sXatuAnimTable16,
};

static const ax_sprite *const sAxSpritesXatu[] = {
	sXatuSprites1,
	sXatuSprites2,
	sXatuSprites3,
	sXatuSprites4,
	sXatuSprites5,
	sXatuSprites6,
	sXatuSprites7,
	sXatuSprites8,
	sXatuSprites9,
	sXatuSprites10,
	sXatuSprites11,
	sXatuSprites12,
	sXatuSprites13,
	sXatuSprites14,
	sXatuSprites15,
	sXatuSprites16,
	sXatuSprites17,
	sXatuSprites18,
	sXatuSprites19,
	sXatuSprites20,
	sXatuSprites21,
	sXatuSprites22,
	sXatuSprites23,
	sXatuSprites24,
	sXatuSprites25,
	sXatuSprites26,
	sXatuSprites27,
	sXatuSprites28,
	sXatuSprites29,
	sXatuSprites30,
	sXatuSprites31,
	sXatuSprites32,
	sXatuSprites33,
	sXatuSprites34,
	sXatuSprites35,
	sXatuSprites36,
	sXatuSprites37,
	sXatuSprites38,
	sXatuSprites39,
	sXatuSprites40,
	sXatuSprites41,
	sXatuSprites42,
	sXatuSprites43,
	sXatuSprites44,
	sXatuSprites45,
};

static const axmain sAxMainXatu = {
	.poses = sAxPosesXatu,
	.animations = sAxAnimationsXatu,
	.animCount = ARRAY_COUNT(sAxAnimationsXatu),
	.spriteData = sAxSpritesXatu,
	.positions = sAxPositionsXatu,
};
