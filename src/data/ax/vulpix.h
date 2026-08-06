/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainVulpix;
const SiroArchive gAxVulpix = {"SIRO", &sAxMainVulpix};

static const ax_pose sVulpixPose1[] = {
	AX_POSE(0, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose2[] = {
	AX_POSE(1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose3[] = {
	AX_POSE(2, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose4[] = {
	AX_POSE(3, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose5[] = {
	AX_POSE(4, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose6[] = {
	AX_POSE(5, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose8[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose10[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose11[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose12[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose13[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose14[] = {
	AX_POSE(13, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose15[] = {
	AX_POSE(14, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose16[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose17[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose18[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose19[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose20[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose21[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose22[] = {
	AX_POSE(3, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose23[] = {
	AX_POSE(4, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose24[] = {
	AX_POSE(5, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose28[] = {
	AX_POSE(15, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose29[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose30[] = {
	AX_POSE(4, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose31[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose32[] = {
	AX_POSE(16, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose33[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose34[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose35[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose36[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose37[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose38[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose39[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose40[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose42[] = {
	AX_POSE(13, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose43[] = {
	AX_POSE(14, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose44[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose45[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose46[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose47[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose48[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose50[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose51[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose52[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose53[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose54[] = {
	AX_POSE(4, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose55[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose56[] = {
	AX_POSE(16, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose90[] = {
	AX_POSE(20, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose93[] = {
	AX_POSE(21, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose96[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose99[] = {
	AX_POSE(23, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose102[] = {
	AX_POSE(24, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose105[] = {
	AX_POSE(23, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose108[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose111[] = {
	AX_POSE(21, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose116[] = {
	AX_POSE(25, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose117[] = {
	AX_POSE(26, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose118[] = {
	AX_POSE(3, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose119[] = {
	AX_POSE(21, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose120[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose121[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose122[] = {
	AX_POSE(28, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose124[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose125[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose126[] = {
	AX_POSE(29, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose127[] = {
	AX_POSE(30, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose131[] = {
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose132[] = {
	AX_POSE(32, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose135[] = {
	AX_POSE(19, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose136[] = {
	AX_POSE(33, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose137[] = {
	AX_POSE(34, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose140[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose141[] = {
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose142[] = {
	AX_POSE(32, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose145[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose146[] = {
	AX_POSE(29, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose147[] = {
	AX_POSE(30, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose150[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose151[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose152[] = {
	AX_POSE(28, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose153[] = {
	AX_POSE(35, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose154[] = {
	AX_POSE(36, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose155[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose156[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose157[] = {
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose158[] = {
	AX_POSE(40, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose159[] = {
	AX_POSE(41, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose160[] = {
	AX_POSE(40, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose161[] = {
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose162[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose189[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose190[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose191[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose192[] = {
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose193[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose202[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose203[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose205[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose206[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose211[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose212[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVulpixPose217[] = {
	AX_POSE(4, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_anim sVulpixAnims_1_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 1, .offset = {0, -1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 1, .offset = {0, -2}, .shadow = {0, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {0, -2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, 2}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_1_2[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {0, 0}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {1, 0}, .shadow = {3, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 5, .offset = {3, 1}, .shadow = {3, 3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_1_3[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 7, .offset = {-1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 7, .offset = {1, -1}, .shadow = {2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {2, 0}, .shadow = {4, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_1_4[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {-2, 0}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {1, -2}, .shadow = {3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 11, .offset = {1, -1}, .shadow = {4, -4} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {-2, 2}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_1_5[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 13, .offset = {0, 0}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 13, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_1_6[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 16, .offset = {2, 0}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 16, .offset = {-1, -2}, .shadow = {-3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 17, .offset = {-1, -1}, .shadow = {-4, -4} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {2, 2}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_1_7[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 19, .offset = {1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 19, .offset = {-1, -1}, .shadow = {-2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 20, .offset = {-2, 0}, .shadow = {-4, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_1_8[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 22, .offset = {0, 0}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 22, .offset = {-1, 0}, .shadow = {-3, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 23, .offset = {-3, 1}, .shadow = {-3, 3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_2_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 26, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 27, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 0}, .shadow = {0, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 4}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 26, .offset = {0, 10}, .shadow = {0, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 26, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_2_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 31, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {2, 1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {7, 5}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 29, .offset = {12, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {21, 21}, .shadow = {21, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 30, .offset = {22, 20}, .shadow = {22, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {21, 21}, .shadow = {21, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {22, 20}, .shadow = {22, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {10, 8}, .shadow = {10, 10} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_2_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 34, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-1, 2}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 35, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {5, -1}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 33, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {19, -1}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 34, .offset = {19, 0}, .shadow = {19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {19, -1}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {19, 0}, .shadow = {19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {6, -2}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_2_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 38, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {-2, 3}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 39, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {2, -3}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {6, -10}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 37, .offset = {12, -17}, .shadow = {12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {22, -22}, .shadow = {22, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 38, .offset = {21, -23}, .shadow = {21, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {22, -22}, .shadow = {22, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {21, -23}, .shadow = {21, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {6, -8}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_2_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 43, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {0, -6}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 41, .offset = {0, -12}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 42, .offset = {1, -22}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {1, -22}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, -8}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_2_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 46, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {2, 3}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 47, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {-2, -3}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {-6, -10}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 45, .offset = {-12, -17}, .shadow = {-12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-22, -22}, .shadow = {-22, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 46, .offset = {-21, -23}, .shadow = {-21, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-22, -22}, .shadow = {-22, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-21, -23}, .shadow = {-21, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-6, -8}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_2_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {1, 2}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 51, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {-5, -1}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 49, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {-19, -1}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 50, .offset = {-19, 0}, .shadow = {-19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {-19, -1}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {-19, 0}, .shadow = {-19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {-6, -2}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_2_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 55, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {-2, 1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {-7, 5}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 53, .offset = {-12, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-21, 21}, .shadow = {-21, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 54, .offset = {-22, 20}, .shadow = {-22, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-21, 21}, .shadow = {-21, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-22, 20}, .shadow = {-22, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-10, 8}, .shadow = {-10, 10} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_3_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 58, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 59, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {0, 4}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 58, .offset = {0, 10}, .shadow = {0, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 58, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_3_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 62, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 63, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {2, 1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {7, 5}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 61, .offset = {12, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {21, 21}, .shadow = {21, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 62, .offset = {22, 20}, .shadow = {22, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {21, 21}, .shadow = {21, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {22, 20}, .shadow = {22, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {10, 8}, .shadow = {10, 10} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_3_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-1, 2}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 67, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {5, -1}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 65, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {19, -1}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 66, .offset = {19, 0}, .shadow = {19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {19, -1}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {19, 0}, .shadow = {19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {6, -2}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_3_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-2, 3}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 71, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {2, -3}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {6, -10}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 69, .offset = {12, -17}, .shadow = {12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {22, -22}, .shadow = {22, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 70, .offset = {21, -23}, .shadow = {21, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {22, -22}, .shadow = {22, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {21, -23}, .shadow = {21, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {6, -8}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_3_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 74, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 75, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 73, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 73, .offset = {0, -6}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 73, .offset = {0, -12}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 74, .offset = {1, -22}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {1, -22}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -8}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_3_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 78, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {2, 3}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 79, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 77, .offset = {-2, -3}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 77, .offset = {-6, -10}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 77, .offset = {-12, -17}, .shadow = {-12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {-22, -22}, .shadow = {-22, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 78, .offset = {-21, -23}, .shadow = {-21, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {-22, -22}, .shadow = {-22, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {-21, -23}, .shadow = {-21, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-6, -8}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_3_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 82, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {1, 2}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 83, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 81, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 81, .offset = {-5, -1}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 81, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {-19, -1}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 82, .offset = {-19, 0}, .shadow = {-19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {-19, -1}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {-19, 0}, .shadow = {-19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-6, -2}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_3_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 86, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 87, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 85, .offset = {-2, 1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 85, .offset = {-7, 5}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 85, .offset = {-12, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {-21, 21}, .shadow = {-21, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 86, .offset = {-22, 20}, .shadow = {-22, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {-21, 21}, .shadow = {-21, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {-22, 20}, .shadow = {-22, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-10, 8}, .shadow = {-10, 10} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 90, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 88, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 89, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {1, 3}, .shadow = {1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {1, 3}, .shadow = {1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {1, 3}, .shadow = {1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {1, 3}, .shadow = {1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 93, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 92, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 96, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 99, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 98, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 102, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 101, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 105, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 104, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 108, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 107, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 111, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 110, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 114, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 2, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 119, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 2, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 124, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 2, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 129, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 2, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 134, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 2, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 139, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 2, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 144, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 2, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 149, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 2, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_8_1[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 20, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_8_2[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 20, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_8_3[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 20, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_8_4[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 20, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_8_5[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 20, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_8_6[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 20, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_8_7[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 20, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_8_8[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 20, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 178, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {19, 3}, .shadow = {19, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {23, 10}, .shadow = {23, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 181, .offset = {22, 18}, .shadow = {22, 18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 182, .offset = {11, 19}, .shadow = {11, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 184, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 185, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 185, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {17, -7}, .shadow = {17, -7} },
	{ .frames = 3, .unkFlags = 0, .poseId = 180, .offset = {22, -2}, .shadow = {22, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 181, .offset = {17, 4}, .shadow = {17, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {12, 5}, .shadow = {12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 183, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 184, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 184, .offset = {-1, -6}, .shadow = {-1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {12, -22}, .shadow = {12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 179, .offset = {21, -25}, .shadow = {21, -25} },
	{ .frames = 2, .unkFlags = 3, .poseId = 180, .offset = {22, -15}, .shadow = {22, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 182, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 183, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {-7, -18}, .shadow = {-7, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 178, .offset = {0, -24}, .shadow = {0, -24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 179, .offset = {7, -18}, .shadow = {7, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {9, -10}, .shadow = {9, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 181, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 180, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {-12, -22}, .shadow = {-12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 185, .offset = {-21, -25}, .shadow = {-21, -25} },
	{ .frames = 2, .unkFlags = 3, .poseId = 184, .offset = {-22, -15}, .shadow = {-22, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 182, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 179, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {-17, -7}, .shadow = {-17, -7} },
	{ .frames = 3, .unkFlags = 0, .poseId = 184, .offset = {-22, -2}, .shadow = {-22, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 183, .offset = {-17, 4}, .shadow = {-17, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {-12, 5}, .shadow = {-12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 181, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 178, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {-19, 3}, .shadow = {-19, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {-23, 10}, .shadow = {-23, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 183, .offset = {-22, 18}, .shadow = {-22, 18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 182, .offset = {-11, 19}, .shadow = {-11, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 180, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 195, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 195, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 195, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 195, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 196, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 196, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 196, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 194, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 198, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 198, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 198, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 199, .offset = {0, -25}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 199, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 199, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 197, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 209, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 210, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 210, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 210, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 210, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 211, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 211, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 211, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 211, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 209, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 212, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 213, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 213, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 213, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 213, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 214, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 214, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 214, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 214, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 212, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVulpixAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 215, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 216, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 216, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 216, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 216, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 217, .offset = {0, -25}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 217, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 217, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 217, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 215, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sVulpixGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_1.4bpp.lz");
static const ax_sprite sVulpixSprites1[] = {
	{sVulpixGfx1, ARRAY_COUNT(sVulpixGfx1)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_2.4bpp.lz");
static const ax_sprite sVulpixSprites2[] = {
	{sVulpixGfx2, ARRAY_COUNT(sVulpixGfx2)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_3.4bpp.lz");
static const ax_sprite sVulpixSprites3[] = {
	{sVulpixGfx3, ARRAY_COUNT(sVulpixGfx3)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_4.4bpp.lz");
static const ax_sprite sVulpixSprites4[] = {
	{sVulpixGfx4, ARRAY_COUNT(sVulpixGfx4)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_5.4bpp.lz");
static const ax_sprite sVulpixSprites5[] = {
	{sVulpixGfx5, ARRAY_COUNT(sVulpixGfx5)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_6.4bpp.lz");
static const ax_sprite sVulpixSprites6[] = {
	{sVulpixGfx6, ARRAY_COUNT(sVulpixGfx6)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_7.4bpp.lz");
static const ax_sprite sVulpixSprites7[] = {
	{sVulpixGfx7, ARRAY_COUNT(sVulpixGfx7)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_8.4bpp.lz");
static const ax_sprite sVulpixSprites8[] = {
	{sVulpixGfx8, ARRAY_COUNT(sVulpixGfx8)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_9.4bpp.lz");
static const ax_sprite sVulpixSprites9[] = {
	{sVulpixGfx9, ARRAY_COUNT(sVulpixGfx9)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_10.4bpp.lz");
static const ax_sprite sVulpixSprites10[] = {
	{sVulpixGfx10, ARRAY_COUNT(sVulpixGfx10)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_11.4bpp.lz");
static const ax_sprite sVulpixSprites11[] = {
	{sVulpixGfx11, ARRAY_COUNT(sVulpixGfx11)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_12.4bpp.lz");
static const ax_sprite sVulpixSprites12[] = {
	{sVulpixGfx12, ARRAY_COUNT(sVulpixGfx12)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_13.4bpp.lz");
static const ax_sprite sVulpixSprites13[] = {
	{sVulpixGfx13, ARRAY_COUNT(sVulpixGfx13)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_14.4bpp.lz");
static const ax_sprite sVulpixSprites14[] = {
	{sVulpixGfx14, ARRAY_COUNT(sVulpixGfx14)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_15.4bpp.lz");
static const ax_sprite sVulpixSprites15[] = {
	{sVulpixGfx15, ARRAY_COUNT(sVulpixGfx15)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_16.4bpp.lz");
static const u8 sVulpixGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_16_1.4bpp.lz");
static const u8 sVulpixGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_16_2.4bpp.lz");
static const ax_sprite sVulpixSprites16[] = {
	{sVulpixGfx16, ARRAY_COUNT(sVulpixGfx16)}, 
	{NULL, 32}, 
	{sVulpixGfx16_1, ARRAY_COUNT(sVulpixGfx16_1)}, 
	{NULL, 32}, 
	{sVulpixGfx16_2, ARRAY_COUNT(sVulpixGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVulpixGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_17.4bpp.lz");
static const u8 sVulpixGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_17_1.4bpp.lz");
static const u8 sVulpixGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_17_2.4bpp.lz");
static const ax_sprite sVulpixSprites17[] = {
	{sVulpixGfx17, ARRAY_COUNT(sVulpixGfx17)}, 
	{NULL, 32}, 
	{sVulpixGfx17_1, ARRAY_COUNT(sVulpixGfx17_1)}, 
	{NULL, 64}, 
	{sVulpixGfx17_2, ARRAY_COUNT(sVulpixGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVulpixGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_18.4bpp.lz");
static const u8 sVulpixGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_18_1.4bpp.lz");
static const u8 sVulpixGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_18_2.4bpp.lz");
static const ax_sprite sVulpixSprites18[] = {
	{NULL, 32}, 
	{sVulpixGfx18, ARRAY_COUNT(sVulpixGfx18)}, 
	{NULL, 32}, 
	{sVulpixGfx18_1, ARRAY_COUNT(sVulpixGfx18_1)}, 
	{NULL, 32}, 
	{sVulpixGfx18_2, ARRAY_COUNT(sVulpixGfx18_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sVulpixGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_19.4bpp.lz");
static const u8 sVulpixGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_19_1.4bpp.lz");
static const u8 sVulpixGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_19_2.4bpp.lz");
static const ax_sprite sVulpixSprites19[] = {
	{NULL, 32}, 
	{sVulpixGfx19, ARRAY_COUNT(sVulpixGfx19)}, 
	{NULL, 32}, 
	{sVulpixGfx19_1, ARRAY_COUNT(sVulpixGfx19_1)}, 
	{NULL, 32}, 
	{sVulpixGfx19_2, ARRAY_COUNT(sVulpixGfx19_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sVulpixGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_20.4bpp.lz");
static const u8 sVulpixGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_20_1.4bpp.lz");
static const u8 sVulpixGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_20_2.4bpp.lz");
static const ax_sprite sVulpixSprites20[] = {
	{sVulpixGfx20, ARRAY_COUNT(sVulpixGfx20)}, 
	{NULL, 32}, 
	{sVulpixGfx20_1, ARRAY_COUNT(sVulpixGfx20_1)}, 
	{NULL, 32}, 
	{sVulpixGfx20_2, ARRAY_COUNT(sVulpixGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVulpixGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_21.4bpp.lz");
static const u8 sVulpixGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_21_1.4bpp.lz");
static const u8 sVulpixGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_21_2.4bpp.lz");
static const ax_sprite sVulpixSprites21[] = {
	{sVulpixGfx21, ARRAY_COUNT(sVulpixGfx21)}, 
	{NULL, 32}, 
	{sVulpixGfx21_1, ARRAY_COUNT(sVulpixGfx21_1)}, 
	{NULL, 32}, 
	{sVulpixGfx21_2, ARRAY_COUNT(sVulpixGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVulpixGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_22.4bpp.lz");
static const u8 sVulpixGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_22_1.4bpp.lz");
static const u8 sVulpixGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_22_2.4bpp.lz");
static const ax_sprite sVulpixSprites22[] = {
	{sVulpixGfx22, ARRAY_COUNT(sVulpixGfx22)}, 
	{NULL, 32}, 
	{sVulpixGfx22_1, ARRAY_COUNT(sVulpixGfx22_1)}, 
	{NULL, 32}, 
	{sVulpixGfx22_2, ARRAY_COUNT(sVulpixGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVulpixGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_23.4bpp.lz");
static const u8 sVulpixGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_23_1.4bpp.lz");
static const u8 sVulpixGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_23_2.4bpp.lz");
static const ax_sprite sVulpixSprites23[] = {
	{sVulpixGfx23, ARRAY_COUNT(sVulpixGfx23)}, 
	{NULL, 32}, 
	{sVulpixGfx23_1, ARRAY_COUNT(sVulpixGfx23_1)}, 
	{NULL, 32}, 
	{sVulpixGfx23_2, ARRAY_COUNT(sVulpixGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVulpixGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_24.4bpp.lz");
static const u8 sVulpixGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_24_1.4bpp.lz");
static const u8 sVulpixGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_24_2.4bpp.lz");
static const ax_sprite sVulpixSprites24[] = {
	{sVulpixGfx24, ARRAY_COUNT(sVulpixGfx24)}, 
	{NULL, 32}, 
	{sVulpixGfx24_1, ARRAY_COUNT(sVulpixGfx24_1)}, 
	{NULL, 32}, 
	{sVulpixGfx24_2, ARRAY_COUNT(sVulpixGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVulpixGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_25.4bpp.lz");
static const u8 sVulpixGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_25_1.4bpp.lz");
static const u8 sVulpixGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_25_2.4bpp.lz");
static const ax_sprite sVulpixSprites25[] = {
	{sVulpixGfx25, ARRAY_COUNT(sVulpixGfx25)}, 
	{NULL, 32}, 
	{sVulpixGfx25_1, ARRAY_COUNT(sVulpixGfx25_1)}, 
	{NULL, 32}, 
	{sVulpixGfx25_2, ARRAY_COUNT(sVulpixGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVulpixGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_26.4bpp.lz");
static const u8 sVulpixGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_26_1.4bpp.lz");
static const u8 sVulpixGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_26_2.4bpp.lz");
static const ax_sprite sVulpixSprites26[] = {
	{sVulpixGfx26, ARRAY_COUNT(sVulpixGfx26)}, 
	{NULL, 32}, 
	{sVulpixGfx26_1, ARRAY_COUNT(sVulpixGfx26_1)}, 
	{NULL, 32}, 
	{sVulpixGfx26_2, ARRAY_COUNT(sVulpixGfx26_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVulpixGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_27.4bpp.lz");
static const u8 sVulpixGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_27_1.4bpp.lz");
static const u8 sVulpixGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_27_2.4bpp.lz");
static const ax_sprite sVulpixSprites27[] = {
	{sVulpixGfx27, ARRAY_COUNT(sVulpixGfx27)}, 
	{NULL, 32}, 
	{sVulpixGfx27_1, ARRAY_COUNT(sVulpixGfx27_1)}, 
	{NULL, 32}, 
	{sVulpixGfx27_2, ARRAY_COUNT(sVulpixGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVulpixGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_28.4bpp.lz");
static const u8 sVulpixGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_28_1.4bpp.lz");
static const u8 sVulpixGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_28_2.4bpp.lz");
static const ax_sprite sVulpixSprites28[] = {
	{NULL, 32}, 
	{sVulpixGfx28, ARRAY_COUNT(sVulpixGfx28)}, 
	{NULL, 32}, 
	{sVulpixGfx28_1, ARRAY_COUNT(sVulpixGfx28_1)}, 
	{NULL, 64}, 
	{sVulpixGfx28_2, ARRAY_COUNT(sVulpixGfx28_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVulpixGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_29.4bpp.lz");
static const u8 sVulpixGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_29_1.4bpp.lz");
static const u8 sVulpixGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_29_2.4bpp.lz");
static const ax_sprite sVulpixSprites29[] = {
	{sVulpixGfx29, ARRAY_COUNT(sVulpixGfx29)}, 
	{NULL, 32}, 
	{sVulpixGfx29_1, ARRAY_COUNT(sVulpixGfx29_1)}, 
	{NULL, 64}, 
	{sVulpixGfx29_2, ARRAY_COUNT(sVulpixGfx29_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVulpixGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_30.4bpp.lz");
static const u8 sVulpixGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_30_1.4bpp.lz");
static const u8 sVulpixGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_30_2.4bpp.lz");
static const ax_sprite sVulpixSprites30[] = {
	{NULL, 32}, 
	{sVulpixGfx30, ARRAY_COUNT(sVulpixGfx30)}, 
	{NULL, 64}, 
	{sVulpixGfx30_1, ARRAY_COUNT(sVulpixGfx30_1)}, 
	{NULL, 32}, 
	{sVulpixGfx30_2, ARRAY_COUNT(sVulpixGfx30_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sVulpixGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_31.4bpp.lz");
static const u8 sVulpixGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_31_1.4bpp.lz");
static const u8 sVulpixGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_31_2.4bpp.lz");
static const ax_sprite sVulpixSprites31[] = {
	{NULL, 32}, 
	{sVulpixGfx31, ARRAY_COUNT(sVulpixGfx31)}, 
	{NULL, 32}, 
	{sVulpixGfx31_1, ARRAY_COUNT(sVulpixGfx31_1)}, 
	{NULL, 64}, 
	{sVulpixGfx31_2, ARRAY_COUNT(sVulpixGfx31_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVulpixGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_32.4bpp.lz");
static const u8 sVulpixGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_32_1.4bpp.lz");
static const u8 sVulpixGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_32_2.4bpp.lz");
static const ax_sprite sVulpixSprites32[] = {
	{NULL, 32}, 
	{sVulpixGfx32, ARRAY_COUNT(sVulpixGfx32)}, 
	{NULL, 32}, 
	{sVulpixGfx32_1, ARRAY_COUNT(sVulpixGfx32_1)}, 
	{NULL, 32}, 
	{sVulpixGfx32_2, ARRAY_COUNT(sVulpixGfx32_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sVulpixGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_33.4bpp.lz");
static const u8 sVulpixGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_33_1.4bpp.lz");
static const u8 sVulpixGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_33_2.4bpp.lz");
static const ax_sprite sVulpixSprites33[] = {
	{NULL, 32}, 
	{sVulpixGfx33, ARRAY_COUNT(sVulpixGfx33)}, 
	{NULL, 64}, 
	{sVulpixGfx33_1, ARRAY_COUNT(sVulpixGfx33_1)}, 
	{NULL, 32}, 
	{sVulpixGfx33_2, ARRAY_COUNT(sVulpixGfx33_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sVulpixGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_34.4bpp.lz");
static const u8 sVulpixGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_34_1.4bpp.lz");
static const u8 sVulpixGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_34_2.4bpp.lz");
static const ax_sprite sVulpixSprites34[] = {
	{sVulpixGfx34, ARRAY_COUNT(sVulpixGfx34)}, 
	{NULL, 32}, 
	{sVulpixGfx34_1, ARRAY_COUNT(sVulpixGfx34_1)}, 
	{NULL, 32}, 
	{sVulpixGfx34_2, ARRAY_COUNT(sVulpixGfx34_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVulpixGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_35.4bpp.lz");
static const u8 sVulpixGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_35_1.4bpp.lz");
static const u8 sVulpixGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_35_2.4bpp.lz");
static const ax_sprite sVulpixSprites35[] = {
	{sVulpixGfx35, ARRAY_COUNT(sVulpixGfx35)}, 
	{NULL, 32}, 
	{sVulpixGfx35_1, ARRAY_COUNT(sVulpixGfx35_1)}, 
	{NULL, 32}, 
	{sVulpixGfx35_2, ARRAY_COUNT(sVulpixGfx35_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVulpixGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_36.4bpp.lz");
static const ax_sprite sVulpixSprites36[] = {
	{sVulpixGfx36, ARRAY_COUNT(sVulpixGfx36)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_37.4bpp.lz");
static const ax_sprite sVulpixSprites37[] = {
	{sVulpixGfx37, ARRAY_COUNT(sVulpixGfx37)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_38.4bpp.lz");
static const ax_sprite sVulpixSprites38[] = {
	{sVulpixGfx38, ARRAY_COUNT(sVulpixGfx38)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_39.4bpp.lz");
static const ax_sprite sVulpixSprites39[] = {
	{sVulpixGfx39, ARRAY_COUNT(sVulpixGfx39)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_40.4bpp.lz");
static const ax_sprite sVulpixSprites40[] = {
	{sVulpixGfx40, ARRAY_COUNT(sVulpixGfx40)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_41.4bpp.lz");
static const ax_sprite sVulpixSprites41[] = {
	{sVulpixGfx41, ARRAY_COUNT(sVulpixGfx41)}, 
	{NULL, 0}
};
static const u8 sVulpixGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vulpix/sprite_42.4bpp.lz");
static const ax_sprite sVulpixSprites42[] = {
	{sVulpixGfx42, ARRAY_COUNT(sVulpixGfx42)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesVulpix[] = {
	sVulpixPose1,
	sVulpixPose2,
	sVulpixPose3,
	sVulpixPose4,
	sVulpixPose5,
	sVulpixPose6,
	sVulpixPose7,
	sVulpixPose8,
	sVulpixPose9,
	sVulpixPose10,
	sVulpixPose11,
	sVulpixPose12,
	sVulpixPose13,
	sVulpixPose14,
	sVulpixPose15,
	sVulpixPose16,
	sVulpixPose17,
	sVulpixPose18,
	sVulpixPose19,
	sVulpixPose20,
	sVulpixPose21,
	sVulpixPose22,
	sVulpixPose23,
	sVulpixPose24,
	sVulpixPose1,
	sVulpixPose2,
	sVulpixPose3,
	sVulpixPose28,
	sVulpixPose29,
	sVulpixPose30,
	sVulpixPose31,
	sVulpixPose32,
	sVulpixPose33,
	sVulpixPose34,
	sVulpixPose35,
	sVulpixPose36,
	sVulpixPose37,
	sVulpixPose38,
	sVulpixPose39,
	sVulpixPose40,
	sVulpixPose13,
	sVulpixPose42,
	sVulpixPose43,
	sVulpixPose44,
	sVulpixPose45,
	sVulpixPose46,
	sVulpixPose47,
	sVulpixPose48,
	sVulpixPose19,
	sVulpixPose50,
	sVulpixPose51,
	sVulpixPose52,
	sVulpixPose53,
	sVulpixPose54,
	sVulpixPose55,
	sVulpixPose56,
	sVulpixPose1,
	sVulpixPose2,
	sVulpixPose3,
	sVulpixPose28,
	sVulpixPose29,
	sVulpixPose30,
	sVulpixPose31,
	sVulpixPose32,
	sVulpixPose33,
	sVulpixPose34,
	sVulpixPose35,
	sVulpixPose36,
	sVulpixPose37,
	sVulpixPose38,
	sVulpixPose39,
	sVulpixPose40,
	sVulpixPose13,
	sVulpixPose42,
	sVulpixPose43,
	sVulpixPose44,
	sVulpixPose45,
	sVulpixPose46,
	sVulpixPose47,
	sVulpixPose48,
	sVulpixPose19,
	sVulpixPose50,
	sVulpixPose51,
	sVulpixPose52,
	sVulpixPose53,
	sVulpixPose54,
	sVulpixPose55,
	sVulpixPose56,
	sVulpixPose1,
	sVulpixPose90,
	sVulpixPose28,
	sVulpixPose4,
	sVulpixPose93,
	sVulpixPose32,
	sVulpixPose7,
	sVulpixPose96,
	sVulpixPose36,
	sVulpixPose10,
	sVulpixPose99,
	sVulpixPose40,
	sVulpixPose13,
	sVulpixPose102,
	sVulpixPose44,
	sVulpixPose16,
	sVulpixPose105,
	sVulpixPose48,
	sVulpixPose19,
	sVulpixPose108,
	sVulpixPose52,
	sVulpixPose22,
	sVulpixPose111,
	sVulpixPose56,
	sVulpixPose1,
	sVulpixPose90,
	sVulpixPose28,
	sVulpixPose116,
	sVulpixPose117,
	sVulpixPose118,
	sVulpixPose119,
	sVulpixPose120,
	sVulpixPose121,
	sVulpixPose122,
	sVulpixPose33,
	sVulpixPose124,
	sVulpixPose125,
	sVulpixPose126,
	sVulpixPose127,
	sVulpixPose10,
	sVulpixPose99,
	sVulpixPose40,
	sVulpixPose131,
	sVulpixPose132,
	sVulpixPose13,
	sVulpixPose102,
	sVulpixPose135,
	sVulpixPose136,
	sVulpixPose137,
	sVulpixPose16,
	sVulpixPose105,
	sVulpixPose140,
	sVulpixPose141,
	sVulpixPose142,
	sVulpixPose19,
	sVulpixPose108,
	sVulpixPose145,
	sVulpixPose146,
	sVulpixPose147,
	sVulpixPose22,
	sVulpixPose111,
	sVulpixPose150,
	sVulpixPose151,
	sVulpixPose152,
	sVulpixPose153,
	sVulpixPose154,
	sVulpixPose155,
	sVulpixPose156,
	sVulpixPose157,
	sVulpixPose158,
	sVulpixPose159,
	sVulpixPose160,
	sVulpixPose161,
	sVulpixPose162,
	sVulpixPose1,
	sVulpixPose90,
	sVulpixPose4,
	sVulpixPose93,
	sVulpixPose7,
	sVulpixPose96,
	sVulpixPose10,
	sVulpixPose99,
	sVulpixPose13,
	sVulpixPose102,
	sVulpixPose16,
	sVulpixPose105,
	sVulpixPose19,
	sVulpixPose108,
	sVulpixPose22,
	sVulpixPose111,
	sVulpixPose90,
	sVulpixPose111,
	sVulpixPose108,
	sVulpixPose105,
	sVulpixPose102,
	sVulpixPose99,
	sVulpixPose96,
	sVulpixPose93,
	sVulpixPose28,
	sVulpixPose32,
	sVulpixPose189,
	sVulpixPose190,
	sVulpixPose191,
	sVulpixPose192,
	sVulpixPose193,
	sVulpixPose56,
	sVulpixPose1,
	sVulpixPose2,
	sVulpixPose3,
	sVulpixPose4,
	sVulpixPose30,
	sVulpixPose6,
	sVulpixPose7,
	sVulpixPose202,
	sVulpixPose203,
	sVulpixPose10,
	sVulpixPose205,
	sVulpixPose206,
	sVulpixPose13,
	sVulpixPose14,
	sVulpixPose15,
	sVulpixPose16,
	sVulpixPose211,
	sVulpixPose212,
	sVulpixPose19,
	sVulpixPose50,
	sVulpixPose51,
	sVulpixPose22,
	sVulpixPose217,
	sVulpixPose24,
	sVulpixPose90,
	sVulpixPose111,
	sVulpixPose108,
	sVulpixPose105,
	sVulpixPose102,
	sVulpixPose99,
	sVulpixPose96,
	sVulpixPose93,
	sVulpixPose1,
	sVulpixPose22,
	sVulpixPose19,
	sVulpixPose16,
	sVulpixPose13,
	sVulpixPose10,
	sVulpixPose7,
	sVulpixPose4,
};

static const struct PositionSets sAxPositionsVulpix[] = {
	[0] = { .set = { {-1, -2}, {-5, 1}, {3, 1}, {-1, -7} } },
	[1] = { .set = { {-1, -5}, {-5, -3}, {3, -3}, {-1, -9} } },
	[2] = { .set = { {-1, 1}, {-5, 1}, {3, 1}, {-1, -6} } },
	[3] = { .set = { {2, -2}, {4, 0}, {-1, 2}, {-2, -6} } },
	[4] = { .set = { {4, -5}, {7, -4}, {2, -2}, {-1, -8} } },
	[5] = { .set = { {4, 0}, {5, 0}, {0, 2}, {-1, -4} } },
	[6] = { .set = { {5, -6}, {3, -1}, {1, 0}, {-2, -6} } },
	[7] = { .set = { {7, -9}, {7, -5}, {5, -5}, {0, -8} } },
	[8] = { .set = { {8, -4}, {3, -1}, {2, 0}, {1, -6} } },
	[9] = { .set = { {5, -9}, {0, -3}, {4, -2}, {-1, -7} } },
	[10] = { .set = { {7, -13}, {4, -10}, {8, -9}, {0, -10} } },
	[11] = { .set = { {8, -10}, {3, -5}, {7, -4}, {2, -10} } },
	[12] = { .set = { {-1, -13}, {2, -5}, {-4, -5}, {-1, -7} } },
	[13] = { .set = { {-1, -18}, {3, -12}, {-5, -12}, {-1, -10} } },
	[14] = { .set = { {-1, -12}, {2, -3}, {-4, -3}, {-1, -9} } },
	[15] = { .set = { {-7, -9}, {-2, -3}, {-6, -2}, {-1, -7} } },
	[16] = { .set = { {-9, -11}, {-6, -8}, {-10, -7}, {-2, -8} } },
	[17] = { .set = { {-10, -8}, {-5, -3}, {-9, -2}, {-4, -8} } },
	[18] = { .set = { {-7, -6}, {-5, -1}, {-3, 0}, {0, -6} } },
	[19] = { .set = { {-9, -9}, {-9, -5}, {-7, -5}, {-2, -8} } },
	[20] = { .set = { {-10, -4}, {-5, -1}, {-4, 0}, {-3, -6} } },
	[21] = { .set = { {-4, -2}, {-6, 0}, {-1, 2}, {0, -6} } },
	[22] = { .set = { {-6, -5}, {-9, -4}, {-4, -2}, {-1, -8} } },
	[23] = { .set = { {-6, 0}, {-7, 0}, {-2, 2}, {-1, -4} } },
	[24] = { .set = { {-1, -2}, {-5, 1}, {3, 1}, {-1, -7} } },
	[25] = { .set = { {-1, -5}, {-5, -3}, {3, -3}, {-1, -9} } },
	[26] = { .set = { {-1, 1}, {-5, 1}, {3, 1}, {-1, -6} } },
	[27] = { .set = { {-1, -9}, {-5, -6}, {3, -7}, {-1, -8} } },
	[28] = { .set = { {3, -3}, {5, -1}, {0, 1}, {-1, -7} } },
	[29] = { .set = { {3, -4}, {6, -3}, {1, -1}, {-2, -7} } },
	[30] = { .set = { {4, -1}, {5, -1}, {0, 1}, {-1, -5} } },
	[31] = { .set = { {2, -11}, {6, -7}, {0, -7}, {-2, -8} } },
	[32] = { .set = { {6, -6}, {4, -1}, {2, 0}, {-1, -6} } },
	[33] = { .set = { {6, -9}, {6, -5}, {4, -5}, {-1, -8} } },
	[34] = { .set = { {7, -4}, {2, -1}, {1, 0}, {0, -6} } },
	[35] = { .set = { {4, -14}, {6, -8}, {4, -8}, {-2, -9} } },
	[36] = { .set = { {5, -10}, {0, -4}, {4, -3}, {-1, -8} } },
	[37] = { .set = { {6, -12}, {3, -9}, {7, -8}, {-1, -9} } },
	[38] = { .set = { {4, -7}, {-1, -2}, {3, -1}, {-2, -7} } },
	[39] = { .set = { {2, -13}, {-1, -10}, {5, -10}, {-3, -7} } },
	[40] = { .set = { {-1, -13}, {2, -5}, {-4, -5}, {-1, -7} } },
	[41] = { .set = { {-1, -17}, {3, -11}, {-5, -11}, {-1, -9} } },
	[42] = { .set = { {-1, -11}, {2, -2}, {-4, -2}, {-1, -8} } },
	[43] = { .set = { {-1, -16}, {3, -11}, {-5, -11}, {-1, -8} } },
	[44] = { .set = { {-6, -10}, {-1, -4}, {-5, -3}, {0, -8} } },
	[45] = { .set = { {-7, -12}, {-4, -9}, {-8, -8}, {0, -9} } },
	[46] = { .set = { {-5, -7}, {0, -2}, {-4, -1}, {1, -7} } },
	[47] = { .set = { {-3, -13}, {0, -10}, {-6, -10}, {2, -7} } },
	[48] = { .set = { {-7, -6}, {-5, -1}, {-3, 0}, {0, -6} } },
	[49] = { .set = { {-7, -9}, {-7, -5}, {-5, -5}, {0, -8} } },
	[50] = { .set = { {-8, -4}, {-3, -1}, {-2, 0}, {-1, -6} } },
	[51] = { .set = { {-5, -14}, {-7, -8}, {-5, -8}, {1, -9} } },
	[52] = { .set = { {-4, -3}, {-6, -1}, {-1, 1}, {0, -7} } },
	[53] = { .set = { {-4, -4}, {-7, -3}, {-2, -1}, {1, -7} } },
	[54] = { .set = { {-5, -1}, {-6, -1}, {-1, 1}, {0, -5} } },
	[55] = { .set = { {-3, -11}, {-7, -7}, {-1, -7}, {1, -8} } },
	[56] = { .set = { {-1, -2}, {-5, 1}, {3, 1}, {-1, -7} } },
	[57] = { .set = { {-1, -5}, {-5, -3}, {3, -3}, {-1, -9} } },
	[58] = { .set = { {-1, 1}, {-5, 1}, {3, 1}, {-1, -6} } },
	[59] = { .set = { {-1, -9}, {-5, -6}, {3, -7}, {-1, -8} } },
	[60] = { .set = { {3, -3}, {5, -1}, {0, 1}, {-1, -7} } },
	[61] = { .set = { {3, -4}, {6, -3}, {1, -1}, {-2, -7} } },
	[62] = { .set = { {4, -1}, {5, -1}, {0, 1}, {-1, -5} } },
	[63] = { .set = { {2, -11}, {6, -7}, {0, -7}, {-2, -8} } },
	[64] = { .set = { {6, -6}, {4, -1}, {2, 0}, {-1, -6} } },
	[65] = { .set = { {6, -9}, {6, -5}, {4, -5}, {-1, -8} } },
	[66] = { .set = { {7, -4}, {2, -1}, {1, 0}, {0, -6} } },
	[67] = { .set = { {4, -14}, {6, -8}, {4, -8}, {-2, -9} } },
	[68] = { .set = { {5, -10}, {0, -4}, {4, -3}, {-1, -8} } },
	[69] = { .set = { {6, -12}, {3, -9}, {7, -8}, {-1, -9} } },
	[70] = { .set = { {4, -7}, {-1, -2}, {3, -1}, {-2, -7} } },
	[71] = { .set = { {2, -13}, {-1, -10}, {5, -10}, {-3, -7} } },
	[72] = { .set = { {-1, -13}, {2, -5}, {-4, -5}, {-1, -7} } },
	[73] = { .set = { {-1, -17}, {3, -11}, {-5, -11}, {-1, -9} } },
	[74] = { .set = { {-1, -11}, {2, -2}, {-4, -2}, {-1, -8} } },
	[75] = { .set = { {-1, -16}, {3, -11}, {-5, -11}, {-1, -8} } },
	[76] = { .set = { {-6, -10}, {-1, -4}, {-5, -3}, {0, -8} } },
	[77] = { .set = { {-7, -12}, {-4, -9}, {-8, -8}, {0, -9} } },
	[78] = { .set = { {-5, -7}, {0, -2}, {-4, -1}, {1, -7} } },
	[79] = { .set = { {-3, -13}, {0, -10}, {-6, -10}, {2, -7} } },
	[80] = { .set = { {-7, -6}, {-5, -1}, {-3, 0}, {0, -6} } },
	[81] = { .set = { {-7, -9}, {-7, -5}, {-5, -5}, {0, -8} } },
	[82] = { .set = { {-8, -4}, {-3, -1}, {-2, 0}, {-1, -6} } },
	[83] = { .set = { {-5, -14}, {-7, -8}, {-5, -8}, {1, -9} } },
	[84] = { .set = { {-4, -3}, {-6, -1}, {-1, 1}, {0, -7} } },
	[85] = { .set = { {-4, -4}, {-7, -3}, {-2, -1}, {1, -7} } },
	[86] = { .set = { {-5, -1}, {-6, -1}, {-1, 1}, {0, -5} } },
	[87] = { .set = { {-3, -11}, {-7, -7}, {-1, -7}, {1, -8} } },
	[88] = { .set = { {-1, -2}, {-5, 1}, {3, 1}, {-1, -7} } },
	[89] = { .set = { {-1, 0}, {-5, 2}, {3, 2}, {-1, -7} } },
	[90] = { .set = { {-1, -9}, {-5, -6}, {3, -7}, {-1, -8} } },
	[91] = { .set = { {2, -2}, {4, 0}, {-1, 2}, {-2, -6} } },
	[92] = { .set = { {3, -1}, {5, 1}, {-1, 3}, {-1, -5} } },
	[93] = { .set = { {2, -11}, {6, -7}, {0, -7}, {-2, -8} } },
	[94] = { .set = { {5, -6}, {3, -1}, {1, 0}, {-2, -6} } },
	[95] = { .set = { {6, -4}, {5, -1}, {3, 0}, {-1, -5} } },
	[96] = { .set = { {4, -14}, {6, -8}, {4, -8}, {-2, -9} } },
	[97] = { .set = { {5, -9}, {0, -3}, {4, -2}, {-1, -7} } },
	[98] = { .set = { {6, -8}, {1, -4}, {6, -2}, {0, -6} } },
	[99] = { .set = { {2, -13}, {-1, -10}, {5, -10}, {-3, -7} } },
	[100] = { .set = { {-1, -13}, {2, -5}, {-4, -5}, {-1, -7} } },
	[101] = { .set = { {-1, -12}, {2, -6}, {-4, -6}, {-1, -7} } },
	[102] = { .set = { {-1, -16}, {3, -11}, {-5, -11}, {-1, -8} } },
	[103] = { .set = { {-7, -9}, {-2, -3}, {-6, -2}, {-1, -7} } },
	[104] = { .set = { {-8, -8}, {-3, -4}, {-8, -2}, {-2, -6} } },
	[105] = { .set = { {-3, -13}, {0, -10}, {-6, -10}, {2, -7} } },
	[106] = { .set = { {-7, -6}, {-5, -1}, {-3, 0}, {0, -6} } },
	[107] = { .set = { {-8, -4}, {-7, -1}, {-5, 0}, {-1, -5} } },
	[108] = { .set = { {-5, -14}, {-7, -8}, {-5, -8}, {1, -9} } },
	[109] = { .set = { {-4, -2}, {-6, 0}, {-1, 2}, {0, -6} } },
	[110] = { .set = { {-5, -1}, {-7, 1}, {-1, 3}, {-1, -5} } },
	[111] = { .set = { {-3, -11}, {-7, -7}, {-1, -7}, {1, -8} } },
	[112] = { .set = { {-1, -2}, {-5, 1}, {3, 1}, {-1, -7} } },
	[113] = { .set = { {-1, 0}, {-5, 2}, {3, 2}, {-1, -7} } },
	[114] = { .set = { {-1, -9}, {-5, -6}, {3, -7}, {-1, -8} } },
	[115] = { .set = { {0, -9}, {-4, -7}, {4, -6}, {0, -8} } },
	[116] = { .set = { {-2, -9}, {-6, -5}, {2, -8}, {-2, -8} } },
	[117] = { .set = { {3, -2}, {5, 0}, {0, 2}, {-1, -6} } },
	[118] = { .set = { {4, -1}, {6, 1}, {0, 3}, {0, -5} } },
	[119] = { .set = { {2, -12}, {6, -8}, {0, -8}, {-2, -9} } },
	[120] = { .set = { {1, -12}, {5, -10}, {-1, -7}, {-2, -9} } },
	[121] = { .set = { {3, -12}, {7, -7}, {1, -9}, {0, -10} } },
	[122] = { .set = { {6, -6}, {4, -1}, {2, 0}, {-1, -6} } },
	[123] = { .set = { {7, -4}, {6, -1}, {4, 0}, {0, -5} } },
	[124] = { .set = { {3, -13}, {5, -7}, {3, -7}, {-3, -8} } },
	[125] = { .set = { {2, -12}, {4, -7}, {2, -5}, {-4, -7} } },
	[126] = { .set = { {4, -13}, {5, -6}, {4, -8}, {-2, -8} } },
	[127] = { .set = { {5, -9}, {0, -3}, {4, -2}, {-1, -7} } },
	[128] = { .set = { {6, -8}, {1, -4}, {6, -2}, {0, -6} } },
	[129] = { .set = { {2, -13}, {-1, -10}, {5, -10}, {-3, -7} } },
	[130] = { .set = { {3, -13}, {0, -11}, {6, -8}, {-2, -7} } },
	[131] = { .set = { {1, -13}, {-2, -10}, {4, -11}, {-4, -8} } },
	[132] = { .set = { {-1, -13}, {2, -5}, {-4, -5}, {-1, -7} } },
	[133] = { .set = { {-1, -12}, {2, -6}, {-4, -6}, {-1, -7} } },
	[134] = { .set = { {-1, -15}, {3, -10}, {-5, -10}, {-1, -7} } },
	[135] = { .set = { {-3, -15}, {1, -11}, {-6, -7}, {-2, -8} } },
	[136] = { .set = { {1, -15}, {4, -7}, {-3, -11}, {0, -8} } },
	[137] = { .set = { {-7, -9}, {-2, -3}, {-6, -2}, {-1, -7} } },
	[138] = { .set = { {-8, -8}, {-3, -4}, {-8, -2}, {-2, -6} } },
	[139] = { .set = { {-4, -13}, {-1, -10}, {-7, -10}, {1, -7} } },
	[140] = { .set = { {-5, -13}, {-2, -11}, {-8, -8}, {0, -7} } },
	[141] = { .set = { {-3, -13}, {0, -10}, {-6, -11}, {2, -8} } },
	[142] = { .set = { {-7, -6}, {-5, -1}, {-3, 0}, {0, -6} } },
	[143] = { .set = { {-8, -4}, {-7, -1}, {-5, 0}, {-1, -5} } },
	[144] = { .set = { {-4, -13}, {-6, -7}, {-4, -7}, {2, -8} } },
	[145] = { .set = { {-3, -12}, {-5, -7}, {-3, -5}, {3, -7} } },
	[146] = { .set = { {-5, -13}, {-6, -6}, {-5, -8}, {1, -8} } },
	[147] = { .set = { {-4, -2}, {-6, 0}, {-1, 2}, {0, -6} } },
	[148] = { .set = { {-5, -1}, {-7, 1}, {-1, 3}, {-1, -5} } },
	[149] = { .set = { {-3, -12}, {-7, -8}, {-1, -8}, {1, -9} } },
	[150] = { .set = { {-2, -12}, {-6, -10}, {0, -7}, {1, -9} } },
	[151] = { .set = { {-4, -12}, {-8, -7}, {-2, -9}, {-1, -10} } },
	[152] = { .set = { {-4, -1}, {-6, 0}, {-3, 1}, {1, -5} } },
	[153] = { .set = { {-4, 0}, {-6, 0}, {-3, 1}, {1, -4} } },
	[154] = { .set = { {-1, -8}, {-8, -13}, {6, -13}, {-1, -10} } },
	[155] = { .set = { {3, -10}, {5, -13}, {-5, -13}, {-1, -8} } },
	[156] = { .set = { {3, -12}, {-1, -14}, {-3, -11}, {-1, -7} } },
	[157] = { .set = { {3, -11}, {-4, -12}, {4, -10}, {-1, -7} } },
	[158] = { .set = { {-1, -14}, {6, -14}, {-8, -14}, {-1, -7} } },
	[159] = { .set = { {-4, -11}, {3, -12}, {-5, -10}, {0, -7} } },
	[160] = { .set = { {-4, -12}, {0, -14}, {2, -11}, {0, -7} } },
	[161] = { .set = { {-4, -10}, {-6, -13}, {4, -13}, {0, -8} } },
	[162] = { .set = { {-1, -2}, {-5, 1}, {3, 1}, {-1, -7} } },
	[163] = { .set = { {-1, 0}, {-5, 2}, {3, 2}, {-1, -7} } },
	[164] = { .set = { {2, -2}, {4, 0}, {-1, 2}, {-2, -6} } },
	[165] = { .set = { {3, -1}, {5, 1}, {-1, 3}, {-1, -5} } },
	[166] = { .set = { {5, -6}, {3, -1}, {1, 0}, {-2, -6} } },
	[167] = { .set = { {6, -4}, {5, -1}, {3, 0}, {-1, -5} } },
	[168] = { .set = { {5, -9}, {0, -3}, {4, -2}, {-1, -7} } },
	[169] = { .set = { {6, -8}, {1, -4}, {6, -2}, {0, -6} } },
	[170] = { .set = { {-1, -13}, {2, -5}, {-4, -5}, {-1, -7} } },
	[171] = { .set = { {-1, -12}, {2, -6}, {-4, -6}, {-1, -7} } },
	[172] = { .set = { {-7, -9}, {-2, -3}, {-6, -2}, {-1, -7} } },
	[173] = { .set = { {-8, -8}, {-3, -4}, {-8, -2}, {-2, -6} } },
	[174] = { .set = { {-7, -6}, {-5, -1}, {-3, 0}, {0, -6} } },
	[175] = { .set = { {-8, -4}, {-7, -1}, {-5, 0}, {-1, -5} } },
	[176] = { .set = { {-4, -2}, {-6, 0}, {-1, 2}, {0, -6} } },
	[177] = { .set = { {-5, -1}, {-7, 1}, {-1, 3}, {-1, -5} } },
	[178] = { .set = { {-1, 0}, {-5, 2}, {3, 2}, {-1, -7} } },
	[179] = { .set = { {-5, -1}, {-7, 1}, {-1, 3}, {-1, -5} } },
	[180] = { .set = { {-8, -4}, {-7, -1}, {-5, 0}, {-1, -5} } },
	[181] = { .set = { {-8, -8}, {-3, -4}, {-8, -2}, {-2, -6} } },
	[182] = { .set = { {-1, -12}, {2, -6}, {-4, -6}, {-1, -7} } },
	[183] = { .set = { {6, -8}, {1, -4}, {6, -2}, {0, -6} } },
	[184] = { .set = { {6, -4}, {5, -1}, {3, 0}, {-1, -5} } },
	[185] = { .set = { {3, -1}, {5, 1}, {-1, 3}, {-1, -5} } },
	[186] = { .set = { {-1, -9}, {-5, -6}, {3, -7}, {-1, -8} } },
	[187] = { .set = { {2, -11}, {6, -7}, {0, -7}, {-2, -8} } },
	[188] = { .set = { {4, -13}, {6, -7}, {4, -7}, {-2, -8} } },
	[189] = { .set = { {3, -15}, {0, -12}, {6, -12}, {-2, -9} } },
	[190] = { .set = { {-1, -17}, {3, -12}, {-5, -12}, {-1, -9} } },
	[191] = { .set = { {-4, -14}, {-1, -11}, {-7, -11}, {1, -8} } },
	[192] = { .set = { {-5, -13}, {-7, -7}, {-5, -7}, {1, -8} } },
	[193] = { .set = { {-3, -11}, {-7, -7}, {-1, -7}, {1, -8} } },
	[194] = { .set = { {-1, -2}, {-5, 1}, {3, 1}, {-1, -7} } },
	[195] = { .set = { {-1, -5}, {-5, -3}, {3, -3}, {-1, -9} } },
	[196] = { .set = { {-1, 1}, {-5, 1}, {3, 1}, {-1, -6} } },
	[197] = { .set = { {2, -2}, {4, 0}, {-1, 2}, {-2, -6} } },
	[198] = { .set = { {3, -4}, {6, -3}, {1, -1}, {-2, -7} } },
	[199] = { .set = { {4, 0}, {5, 0}, {0, 2}, {-1, -4} } },
	[200] = { .set = { {5, -6}, {3, -1}, {1, 0}, {-2, -6} } },
	[201] = { .set = { {5, -9}, {5, -5}, {3, -5}, {-2, -8} } },
	[202] = { .set = { {6, -4}, {1, -1}, {0, 0}, {-1, -6} } },
	[203] = { .set = { {5, -9}, {0, -3}, {4, -2}, {-1, -7} } },
	[204] = { .set = { {5, -13}, {2, -10}, {6, -9}, {-2, -10} } },
	[205] = { .set = { {5, -10}, {0, -5}, {4, -4}, {-1, -10} } },
	[206] = { .set = { {-1, -13}, {2, -5}, {-4, -5}, {-1, -7} } },
	[207] = { .set = { {-1, -18}, {3, -12}, {-5, -12}, {-1, -10} } },
	[208] = { .set = { {-1, -12}, {2, -3}, {-4, -3}, {-1, -9} } },
	[209] = { .set = { {-7, -9}, {-2, -3}, {-6, -2}, {-1, -7} } },
	[210] = { .set = { {-7, -11}, {-4, -8}, {-8, -7}, {0, -8} } },
	[211] = { .set = { {-7, -8}, {-2, -3}, {-6, -2}, {-1, -8} } },
	[212] = { .set = { {-7, -6}, {-5, -1}, {-3, 0}, {0, -6} } },
	[213] = { .set = { {-7, -9}, {-7, -5}, {-5, -5}, {0, -8} } },
	[214] = { .set = { {-8, -4}, {-3, -1}, {-2, 0}, {-1, -6} } },
	[215] = { .set = { {-4, -2}, {-6, 0}, {-1, 2}, {0, -6} } },
	[216] = { .set = { {-5, -4}, {-8, -3}, {-3, -1}, {0, -7} } },
	[217] = { .set = { {-6, 0}, {-7, 0}, {-2, 2}, {-1, -4} } },
	[218] = { .set = { {-1, 0}, {-5, 2}, {3, 2}, {-1, -7} } },
	[219] = { .set = { {-5, -1}, {-7, 1}, {-1, 3}, {-1, -5} } },
	[220] = { .set = { {-8, -4}, {-7, -1}, {-5, 0}, {-1, -5} } },
	[221] = { .set = { {-8, -8}, {-3, -4}, {-8, -2}, {-2, -6} } },
	[222] = { .set = { {-1, -12}, {2, -6}, {-4, -6}, {-1, -7} } },
	[223] = { .set = { {6, -8}, {1, -4}, {6, -2}, {0, -6} } },
	[224] = { .set = { {6, -4}, {5, -1}, {3, 0}, {-1, -5} } },
	[225] = { .set = { {3, -1}, {5, 1}, {-1, 3}, {-1, -5} } },
	[226] = { .set = { {-1, -2}, {-5, 1}, {3, 1}, {-1, -7} } },
	[227] = { .set = { {-4, -2}, {-6, 0}, {-1, 2}, {0, -6} } },
	[228] = { .set = { {-7, -6}, {-5, -1}, {-3, 0}, {0, -6} } },
	[229] = { .set = { {-7, -9}, {-2, -3}, {-6, -2}, {-1, -7} } },
	[230] = { .set = { {-1, -13}, {2, -5}, {-4, -5}, {-1, -7} } },
	[231] = { .set = { {5, -9}, {0, -3}, {4, -2}, {-1, -7} } },
	[232] = { .set = { {5, -6}, {3, -1}, {1, 0}, {-2, -6} } },
	[233] = { .set = { {2, -2}, {4, 0}, {-1, 2}, {-2, -6} } },
};

static const ax_anim *const sVulpixAnimTable1[] = {
	sVulpixAnims_1_1,
	sVulpixAnims_1_2,
	sVulpixAnims_1_3,
	sVulpixAnims_1_4,
	sVulpixAnims_1_5,
	sVulpixAnims_1_6,
	sVulpixAnims_1_7,
	sVulpixAnims_1_8,
};

static const ax_anim *const sVulpixAnimTable2[] = {
	sVulpixAnims_2_1,
	sVulpixAnims_2_2,
	sVulpixAnims_2_3,
	sVulpixAnims_2_4,
	sVulpixAnims_2_5,
	sVulpixAnims_2_6,
	sVulpixAnims_2_7,
	sVulpixAnims_2_8,
};

static const ax_anim *const sVulpixAnimTable3[] = {
	sVulpixAnims_3_1,
	sVulpixAnims_3_2,
	sVulpixAnims_3_3,
	sVulpixAnims_3_4,
	sVulpixAnims_3_5,
	sVulpixAnims_3_6,
	sVulpixAnims_3_7,
	sVulpixAnims_3_8,
};

static const ax_anim *const sVulpixAnimTable4[] = {
	sVulpixAnims_4_1,
	sVulpixAnims_4_2,
	sVulpixAnims_4_3,
	sVulpixAnims_4_4,
	sVulpixAnims_4_5,
	sVulpixAnims_4_6,
	sVulpixAnims_4_7,
	sVulpixAnims_4_8,
};

static const ax_anim *const sVulpixAnimTable5[] = {
	sVulpixAnims_5_1,
	sVulpixAnims_5_2,
	sVulpixAnims_5_3,
	sVulpixAnims_5_4,
	sVulpixAnims_5_5,
	sVulpixAnims_5_6,
	sVulpixAnims_5_7,
	sVulpixAnims_5_8,
};

static const ax_anim *const sVulpixAnimTable6[] = {
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
};

static const ax_anim *const sVulpixAnimTable7[] = {
	gAxSharedAnim_00604,
	gAxSharedAnim_00616,
	gAxSharedAnim_00626,
	gAxSharedAnim_00636,
	gAxSharedAnim_00652,
	gAxSharedAnim_00664,
	gAxSharedAnim_00680,
	gAxSharedAnim_00690,
};

static const ax_anim *const sVulpixAnimTable8[] = {
	sVulpixAnims_8_1,
	sVulpixAnims_8_2,
	sVulpixAnims_8_3,
	sVulpixAnims_8_4,
	sVulpixAnims_8_5,
	sVulpixAnims_8_6,
	sVulpixAnims_8_7,
	sVulpixAnims_8_8,
};

static const ax_anim *const sVulpixAnimTable9[] = {
	gAxSharedAnim_00901,
	sVulpixAnims_9_2,
	sVulpixAnims_9_3,
	sVulpixAnims_9_4,
	sVulpixAnims_9_5,
	sVulpixAnims_9_6,
	sVulpixAnims_9_7,
	sVulpixAnims_9_8,
};

static const ax_anim *const sVulpixAnimTable10[] = {
	gAxSharedAnim_01016,
	gAxSharedAnim_01027,
	gAxSharedAnim_01046,
	gAxSharedAnim_01061,
	gAxSharedAnim_01078,
	gAxSharedAnim_01092,
	gAxSharedAnim_01110,
	gAxSharedAnim_01124,
};

static const ax_anim *const sVulpixAnimTable11[] = {
	sVulpixAnims_11_1,
	sVulpixAnims_11_2,
	gAxSharedAnim_01215,
	gAxSharedAnim_01250,
	gAxSharedAnim_01284,
	sVulpixAnims_11_6,
	sVulpixAnims_11_7,
	sVulpixAnims_11_8,
};

static const ax_anim *const sVulpixAnimTable12[] = {
	gAxSharedAnim_01423,
	gAxSharedAnim_01467,
	gAxSharedAnim_01458,
	gAxSharedAnim_01449,
	gAxSharedAnim_01448,
	gAxSharedAnim_01444,
	gAxSharedAnim_01432,
	gAxSharedAnim_01424,
};

static const ax_anim *const sVulpixAnimTable13[] = {
	gAxSharedAnim_01471,
	gAxSharedAnim_01516,
	gAxSharedAnim_01511,
	gAxSharedAnim_01504,
	gAxSharedAnim_01497,
	gAxSharedAnim_01490,
	gAxSharedAnim_01486,
	gAxSharedAnim_01478,
};

static const ax_anim *const *const sAxAnimationsVulpix[] = {
	sVulpixAnimTable1,
	sVulpixAnimTable2,
	sVulpixAnimTable3,
	sVulpixAnimTable4,
	sVulpixAnimTable5,
	sVulpixAnimTable6,
	sVulpixAnimTable7,
	sVulpixAnimTable8,
	sVulpixAnimTable9,
	sVulpixAnimTable10,
	sVulpixAnimTable11,
	sVulpixAnimTable12,
	sVulpixAnimTable13,
};

static const ax_sprite *const sAxSpritesVulpix[] = {
	sVulpixSprites1,
	sVulpixSprites2,
	sVulpixSprites3,
	sVulpixSprites4,
	sVulpixSprites5,
	sVulpixSprites6,
	sVulpixSprites7,
	sVulpixSprites8,
	sVulpixSprites9,
	sVulpixSprites10,
	sVulpixSprites11,
	sVulpixSprites12,
	sVulpixSprites13,
	sVulpixSprites14,
	sVulpixSprites15,
	sVulpixSprites16,
	sVulpixSprites17,
	sVulpixSprites18,
	sVulpixSprites19,
	sVulpixSprites20,
	sVulpixSprites21,
	sVulpixSprites22,
	sVulpixSprites23,
	sVulpixSprites24,
	sVulpixSprites25,
	sVulpixSprites26,
	sVulpixSprites27,
	sVulpixSprites28,
	sVulpixSprites29,
	sVulpixSprites30,
	sVulpixSprites31,
	sVulpixSprites32,
	sVulpixSprites33,
	sVulpixSprites34,
	sVulpixSprites35,
	sVulpixSprites36,
	sVulpixSprites37,
	sVulpixSprites38,
	sVulpixSprites39,
	sVulpixSprites40,
	sVulpixSprites41,
	sVulpixSprites42,
};

static const axmain sAxMainVulpix = {
	.poses = sAxPosesVulpix,
	.animations = sAxAnimationsVulpix,
	.animCount = ARRAY_COUNT(sAxAnimationsVulpix),
	.spriteData = sAxSpritesVulpix,
	.positions = sAxPositionsVulpix,
};
