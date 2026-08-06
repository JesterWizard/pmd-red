/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainClefairy;
const SiroArchive gAxClefairy = {"SIRO", &sAxMainClefairy};

static const ax_pose sClefairyPose1[] = {
	AX_POSE(0, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose4[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose6[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose7[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose8[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose9[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose10[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose11[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose12[] = {
	AX_POSE(11, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose13[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose14[] = {
	AX_POSE(13, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose15[] = {
	AX_POSE(14, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose16[] = {
	AX_POSE(15, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose17[] = {
	AX_POSE(16, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose18[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose19[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose20[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose21[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose22[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose23[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose24[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose26[] = {
	AX_POSE(1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose27[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose28[] = {
	AX_POSE(24, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose30[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose31[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose32[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose34[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose35[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose36[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose38[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose39[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose40[] = {
	AX_POSE(27, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose42[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose43[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose44[] = {
	AX_POSE(28, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose46[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose47[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose48[] = {
	AX_POSE(27, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose50[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose51[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose52[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose54[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose55[] = {
	AX_POSE(23, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose56[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose90[] = {
	AX_POSE(29, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose93[] = {
	AX_POSE(30, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose95[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose96[] = {
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose98[] = {
	AX_POSE(15, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose99[] = {
	AX_POSE(32, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose102[] = {
	AX_POSE(33, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose105[] = {
	AX_POSE(32, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose108[] = {
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose111[] = {
	AX_POSE(30, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose114[] = {
	AX_POSE(34, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose115[] = {
	AX_POSE(35, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose117[] = {
	AX_POSE(36, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose118[] = {
	AX_POSE(37, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose120[] = {
	AX_POSE(38, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose121[] = {
	AX_POSE(39, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose123[] = {
	AX_POSE(40, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose124[] = {
	AX_POSE(41, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose126[] = {
	AX_POSE(42, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose127[] = {
	AX_POSE(43, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose129[] = {
	AX_POSE(40, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose130[] = {
	AX_POSE(41, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose132[] = {
	AX_POSE(38, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose133[] = {
	AX_POSE(39, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose135[] = {
	AX_POSE(36, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose136[] = {
	AX_POSE(37, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose137[] = {
	AX_POSE(44, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose138[] = {
	AX_POSE(45, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose139[] = {
	AX_POSE(46, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose140[] = {
	AX_POSE(47, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose141[] = {
	AX_POSE(48, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose142[] = {
	AX_POSE(49, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose143[] = {
	AX_POSE(50, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose144[] = {
	AX_POSE(49, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose145[] = {
	AX_POSE(48, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose146[] = {
	AX_POSE(47, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sClefairyPose214[] = {
	AX_POSE(32, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const u8 sClefairyAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_1_1.lz");
static const u8 sClefairyAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_1_2.lz");
static const u8 sClefairyAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_1_3.lz");
static const u8 sClefairyAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_1_4.lz");
static const u8 sClefairyAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_1_5.lz");
static const u8 sClefairyAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_1_6.lz");
static const u8 sClefairyAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_1_7.lz");
static const u8 sClefairyAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_1_8.lz");
static const u8 sClefairyAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_2_4.lz");
static const u8 sClefairyAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_2_6.lz");
static const u8 sClefairyAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_3_4.lz");
static const u8 sClefairyAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_3_6.lz");
static const u8 sClefairyAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_4_1.lz");
static const u8 sClefairyAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_4_2.lz");
static const u8 sClefairyAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_4_3.lz");
static const u8 sClefairyAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_4_4.lz");
static const u8 sClefairyAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_4_5.lz");
static const u8 sClefairyAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_4_6.lz");
static const u8 sClefairyAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_4_7.lz");
static const u8 sClefairyAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_4_8.lz");
static const u8 sClefairyAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_5_1.lz");
static const u8 sClefairyAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_5_2.lz");
static const u8 sClefairyAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_5_3.lz");
static const u8 sClefairyAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_5_4.lz");
static const u8 sClefairyAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_5_5.lz");
static const u8 sClefairyAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_5_6.lz");
static const u8 sClefairyAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_5_7.lz");
static const u8 sClefairyAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_5_8.lz");
static const u8 sClefairyAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_8_1.lz");
static const u8 sClefairyAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_8_2.lz");
static const u8 sClefairyAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_8_3.lz");
static const u8 sClefairyAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_8_4.lz");
static const u8 sClefairyAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_8_5.lz");
static const u8 sClefairyAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_8_6.lz");
static const u8 sClefairyAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_8_7.lz");
static const u8 sClefairyAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_8_8.lz");
static const u8 sClefairyAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_9_2.lz");
static const u8 sClefairyAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_9_3.lz");
static const u8 sClefairyAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_9_4.lz");
static const u8 sClefairyAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_9_5.lz");
static const u8 sClefairyAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_9_6.lz");
static const u8 sClefairyAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_9_7.lz");
static const u8 sClefairyAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_9_8.lz");
static const u8 sClefairyAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/clefairy/sClefairyAnims_11_1.lz");

static const u8 sClefairyGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_1.4bpp.lz");
static const ax_sprite sClefairySprites1[] = {
	{sClefairyGfx1, ARRAY_COUNT(sClefairyGfx1)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_2.4bpp.lz");
static const ax_sprite sClefairySprites2[] = {
	{sClefairyGfx2, ARRAY_COUNT(sClefairyGfx2)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_3.4bpp.lz");
static const ax_sprite sClefairySprites3[] = {
	{sClefairyGfx3, ARRAY_COUNT(sClefairyGfx3)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_4.4bpp.lz");
static const ax_sprite sClefairySprites4[] = {
	{sClefairyGfx4, ARRAY_COUNT(sClefairyGfx4)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_5.4bpp.lz");
static const ax_sprite sClefairySprites5[] = {
	{sClefairyGfx5, ARRAY_COUNT(sClefairyGfx5)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_6.4bpp.lz");
static const ax_sprite sClefairySprites6[] = {
	{sClefairyGfx6, ARRAY_COUNT(sClefairyGfx6)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_7.4bpp.lz");
static const ax_sprite sClefairySprites7[] = {
	{sClefairyGfx7, ARRAY_COUNT(sClefairyGfx7)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_8.4bpp.lz");
static const ax_sprite sClefairySprites8[] = {
	{sClefairyGfx8, ARRAY_COUNT(sClefairyGfx8)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_9.4bpp.lz");
static const ax_sprite sClefairySprites9[] = {
	{sClefairyGfx9, ARRAY_COUNT(sClefairyGfx9)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_10.4bpp.lz");
static const ax_sprite sClefairySprites10[] = {
	{sClefairyGfx10, ARRAY_COUNT(sClefairyGfx10)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_11.4bpp.lz");
static const ax_sprite sClefairySprites11[] = {
	{sClefairyGfx11, ARRAY_COUNT(sClefairyGfx11)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_12.4bpp.lz");
static const ax_sprite sClefairySprites12[] = {
	{sClefairyGfx12, ARRAY_COUNT(sClefairyGfx12)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_13.4bpp.lz");
static const ax_sprite sClefairySprites13[] = {
	{sClefairyGfx13, ARRAY_COUNT(sClefairyGfx13)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_14.4bpp.lz");
static const ax_sprite sClefairySprites14[] = {
	{sClefairyGfx14, ARRAY_COUNT(sClefairyGfx14)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_15.4bpp.lz");
static const ax_sprite sClefairySprites15[] = {
	{sClefairyGfx15, ARRAY_COUNT(sClefairyGfx15)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_16.4bpp.lz");
static const ax_sprite sClefairySprites16[] = {
	{sClefairyGfx16, ARRAY_COUNT(sClefairyGfx16)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_17.4bpp.lz");
static const ax_sprite sClefairySprites17[] = {
	{sClefairyGfx17, ARRAY_COUNT(sClefairyGfx17)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_18.4bpp.lz");
static const ax_sprite sClefairySprites18[] = {
	{sClefairyGfx18, ARRAY_COUNT(sClefairyGfx18)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_19.4bpp.lz");
static const ax_sprite sClefairySprites19[] = {
	{sClefairyGfx19, ARRAY_COUNT(sClefairyGfx19)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_20.4bpp.lz");
static const ax_sprite sClefairySprites20[] = {
	{sClefairyGfx20, ARRAY_COUNT(sClefairyGfx20)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_21.4bpp.lz");
static const ax_sprite sClefairySprites21[] = {
	{sClefairyGfx21, ARRAY_COUNT(sClefairyGfx21)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_22.4bpp.lz");
static const ax_sprite sClefairySprites22[] = {
	{sClefairyGfx22, ARRAY_COUNT(sClefairyGfx22)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_23.4bpp.lz");
static const ax_sprite sClefairySprites23[] = {
	{sClefairyGfx23, ARRAY_COUNT(sClefairyGfx23)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_24.4bpp.lz");
static const ax_sprite sClefairySprites24[] = {
	{sClefairyGfx24, ARRAY_COUNT(sClefairyGfx24)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_25.4bpp.lz");
static const u8 sClefairyGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_25_1.4bpp.lz");
static const u8 sClefairyGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_25_2.4bpp.lz");
static const ax_sprite sClefairySprites25[] = {
	{sClefairyGfx25, ARRAY_COUNT(sClefairyGfx25)}, 
	{NULL, 32}, 
	{sClefairyGfx25_1, ARRAY_COUNT(sClefairyGfx25_1)}, 
	{NULL, 32}, 
	{sClefairyGfx25_2, ARRAY_COUNT(sClefairyGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefairyGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_26.4bpp.lz");
static const u8 sClefairyGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_26_1.4bpp.lz");
static const u8 sClefairyGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_26_2.4bpp.lz");
static const u8 sClefairyGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_26_3.4bpp.lz");
static const ax_sprite sClefairySprites26[] = {
	{sClefairyGfx26, ARRAY_COUNT(sClefairyGfx26)}, 
	{NULL, 32}, 
	{sClefairyGfx26_1, ARRAY_COUNT(sClefairyGfx26_1)}, 
	{NULL, 32}, 
	{sClefairyGfx26_2, ARRAY_COUNT(sClefairyGfx26_2)}, 
	{NULL, 64}, 
	{sClefairyGfx26_3, ARRAY_COUNT(sClefairyGfx26_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sClefairyGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_27.4bpp.lz");
static const u8 sClefairyGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_27_1.4bpp.lz");
static const u8 sClefairyGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_27_2.4bpp.lz");
static const u8 sClefairyGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_27_3.4bpp.lz");
static const ax_sprite sClefairySprites27[] = {
	{sClefairyGfx27, ARRAY_COUNT(sClefairyGfx27)}, 
	{NULL, 32}, 
	{sClefairyGfx27_1, ARRAY_COUNT(sClefairyGfx27_1)}, 
	{NULL, 32}, 
	{sClefairyGfx27_2, ARRAY_COUNT(sClefairyGfx27_2)}, 
	{NULL, 64}, 
	{sClefairyGfx27_3, ARRAY_COUNT(sClefairyGfx27_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sClefairyGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_28.4bpp.lz");
static const u8 sClefairyGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_28_1.4bpp.lz");
static const u8 sClefairyGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_28_2.4bpp.lz");
static const u8 sClefairyGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_28_3.4bpp.lz");
static const ax_sprite sClefairySprites28[] = {
	{sClefairyGfx28, ARRAY_COUNT(sClefairyGfx28)}, 
	{NULL, 32}, 
	{sClefairyGfx28_1, ARRAY_COUNT(sClefairyGfx28_1)}, 
	{NULL, 32}, 
	{sClefairyGfx28_2, ARRAY_COUNT(sClefairyGfx28_2)}, 
	{NULL, 64}, 
	{sClefairyGfx28_3, ARRAY_COUNT(sClefairyGfx28_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sClefairyGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_29.4bpp.lz");
static const u8 sClefairyGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_29_1.4bpp.lz");
static const u8 sClefairyGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_29_2.4bpp.lz");
static const ax_sprite sClefairySprites29[] = {
	{sClefairyGfx29, ARRAY_COUNT(sClefairyGfx29)}, 
	{NULL, 32}, 
	{sClefairyGfx29_1, ARRAY_COUNT(sClefairyGfx29_1)}, 
	{NULL, 32}, 
	{sClefairyGfx29_2, ARRAY_COUNT(sClefairyGfx29_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefairyGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_30.4bpp.lz");
static const u8 sClefairyGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_30_1.4bpp.lz");
static const u8 sClefairyGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_30_2.4bpp.lz");
static const ax_sprite sClefairySprites30[] = {
	{sClefairyGfx30, ARRAY_COUNT(sClefairyGfx30)}, 
	{NULL, 32}, 
	{sClefairyGfx30_1, ARRAY_COUNT(sClefairyGfx30_1)}, 
	{NULL, 32}, 
	{sClefairyGfx30_2, ARRAY_COUNT(sClefairyGfx30_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefairyGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_31.4bpp.lz");
static const u8 sClefairyGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_31_1.4bpp.lz");
static const u8 sClefairyGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_31_2.4bpp.lz");
static const ax_sprite sClefairySprites31[] = {
	{sClefairyGfx31, ARRAY_COUNT(sClefairyGfx31)}, 
	{NULL, 32}, 
	{sClefairyGfx31_1, ARRAY_COUNT(sClefairyGfx31_1)}, 
	{NULL, 32}, 
	{sClefairyGfx31_2, ARRAY_COUNT(sClefairyGfx31_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefairyGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_32.4bpp.lz");
static const u8 sClefairyGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_32_1.4bpp.lz");
static const u8 sClefairyGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_32_2.4bpp.lz");
static const ax_sprite sClefairySprites32[] = {
	{sClefairyGfx32, ARRAY_COUNT(sClefairyGfx32)}, 
	{NULL, 32}, 
	{sClefairyGfx32_1, ARRAY_COUNT(sClefairyGfx32_1)}, 
	{NULL, 32}, 
	{sClefairyGfx32_2, ARRAY_COUNT(sClefairyGfx32_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefairyGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_33.4bpp.lz");
static const u8 sClefairyGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_33_1.4bpp.lz");
static const u8 sClefairyGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_33_2.4bpp.lz");
static const ax_sprite sClefairySprites33[] = {
	{sClefairyGfx33, ARRAY_COUNT(sClefairyGfx33)}, 
	{NULL, 32}, 
	{sClefairyGfx33_1, ARRAY_COUNT(sClefairyGfx33_1)}, 
	{NULL, 32}, 
	{sClefairyGfx33_2, ARRAY_COUNT(sClefairyGfx33_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefairyGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_34.4bpp.lz");
static const u8 sClefairyGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_34_1.4bpp.lz");
static const u8 sClefairyGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_34_2.4bpp.lz");
static const ax_sprite sClefairySprites34[] = {
	{sClefairyGfx34, ARRAY_COUNT(sClefairyGfx34)}, 
	{NULL, 32}, 
	{sClefairyGfx34_1, ARRAY_COUNT(sClefairyGfx34_1)}, 
	{NULL, 32}, 
	{sClefairyGfx34_2, ARRAY_COUNT(sClefairyGfx34_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefairyGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_35.4bpp.lz");
static const u8 sClefairyGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_35_1.4bpp.lz");
static const u8 sClefairyGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_35_2.4bpp.lz");
static const ax_sprite sClefairySprites35[] = {
	{sClefairyGfx35, ARRAY_COUNT(sClefairyGfx35)}, 
	{NULL, 32}, 
	{sClefairyGfx35_1, ARRAY_COUNT(sClefairyGfx35_1)}, 
	{NULL, 32}, 
	{sClefairyGfx35_2, ARRAY_COUNT(sClefairyGfx35_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefairyGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_36.4bpp.lz");
static const u8 sClefairyGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_36_1.4bpp.lz");
static const u8 sClefairyGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_36_2.4bpp.lz");
static const ax_sprite sClefairySprites36[] = {
	{sClefairyGfx36, ARRAY_COUNT(sClefairyGfx36)}, 
	{NULL, 32}, 
	{sClefairyGfx36_1, ARRAY_COUNT(sClefairyGfx36_1)}, 
	{NULL, 32}, 
	{sClefairyGfx36_2, ARRAY_COUNT(sClefairyGfx36_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefairyGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_37.4bpp.lz");
static const u8 sClefairyGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_37_1.4bpp.lz");
static const u8 sClefairyGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_37_2.4bpp.lz");
static const ax_sprite sClefairySprites37[] = {
	{sClefairyGfx37, ARRAY_COUNT(sClefairyGfx37)}, 
	{NULL, 32}, 
	{sClefairyGfx37_1, ARRAY_COUNT(sClefairyGfx37_1)}, 
	{NULL, 32}, 
	{sClefairyGfx37_2, ARRAY_COUNT(sClefairyGfx37_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefairyGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_38.4bpp.lz");
static const u8 sClefairyGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_38_1.4bpp.lz");
static const u8 sClefairyGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_38_2.4bpp.lz");
static const ax_sprite sClefairySprites38[] = {
	{sClefairyGfx38, ARRAY_COUNT(sClefairyGfx38)}, 
	{NULL, 32}, 
	{sClefairyGfx38_1, ARRAY_COUNT(sClefairyGfx38_1)}, 
	{NULL, 32}, 
	{sClefairyGfx38_2, ARRAY_COUNT(sClefairyGfx38_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefairyGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_39.4bpp.lz");
static const u8 sClefairyGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_39_1.4bpp.lz");
static const u8 sClefairyGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_39_2.4bpp.lz");
static const ax_sprite sClefairySprites39[] = {
	{sClefairyGfx39, ARRAY_COUNT(sClefairyGfx39)}, 
	{NULL, 32}, 
	{sClefairyGfx39_1, ARRAY_COUNT(sClefairyGfx39_1)}, 
	{NULL, 32}, 
	{sClefairyGfx39_2, ARRAY_COUNT(sClefairyGfx39_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefairyGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_40.4bpp.lz");
static const u8 sClefairyGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_40_1.4bpp.lz");
static const u8 sClefairyGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_40_2.4bpp.lz");
static const u8 sClefairyGfx40_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_40_3.4bpp.lz");
static const ax_sprite sClefairySprites40[] = {
	{sClefairyGfx40, ARRAY_COUNT(sClefairyGfx40)}, 
	{NULL, 32}, 
	{sClefairyGfx40_1, ARRAY_COUNT(sClefairyGfx40_1)}, 
	{NULL, 32}, 
	{sClefairyGfx40_2, ARRAY_COUNT(sClefairyGfx40_2)}, 
	{NULL, 64}, 
	{sClefairyGfx40_3, ARRAY_COUNT(sClefairyGfx40_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sClefairyGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_41.4bpp.lz");
static const u8 sClefairyGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_41_1.4bpp.lz");
static const u8 sClefairyGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_41_2.4bpp.lz");
static const ax_sprite sClefairySprites41[] = {
	{sClefairyGfx41, ARRAY_COUNT(sClefairyGfx41)}, 
	{NULL, 32}, 
	{sClefairyGfx41_1, ARRAY_COUNT(sClefairyGfx41_1)}, 
	{NULL, 32}, 
	{sClefairyGfx41_2, ARRAY_COUNT(sClefairyGfx41_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefairyGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_42.4bpp.lz");
static const u8 sClefairyGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_42_1.4bpp.lz");
static const u8 sClefairyGfx42_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_42_2.4bpp.lz");
static const ax_sprite sClefairySprites42[] = {
	{sClefairyGfx42, ARRAY_COUNT(sClefairyGfx42)}, 
	{NULL, 32}, 
	{sClefairyGfx42_1, ARRAY_COUNT(sClefairyGfx42_1)}, 
	{NULL, 32}, 
	{sClefairyGfx42_2, ARRAY_COUNT(sClefairyGfx42_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefairyGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_43.4bpp.lz");
static const u8 sClefairyGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_43_1.4bpp.lz");
static const u8 sClefairyGfx43_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_43_2.4bpp.lz");
static const ax_sprite sClefairySprites43[] = {
	{sClefairyGfx43, ARRAY_COUNT(sClefairyGfx43)}, 
	{NULL, 32}, 
	{sClefairyGfx43_1, ARRAY_COUNT(sClefairyGfx43_1)}, 
	{NULL, 32}, 
	{sClefairyGfx43_2, ARRAY_COUNT(sClefairyGfx43_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefairyGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_44.4bpp.lz");
static const u8 sClefairyGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_44_1.4bpp.lz");
static const u8 sClefairyGfx44_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_44_2.4bpp.lz");
static const ax_sprite sClefairySprites44[] = {
	{sClefairyGfx44, ARRAY_COUNT(sClefairyGfx44)}, 
	{NULL, 32}, 
	{sClefairyGfx44_1, ARRAY_COUNT(sClefairyGfx44_1)}, 
	{NULL, 32}, 
	{sClefairyGfx44_2, ARRAY_COUNT(sClefairyGfx44_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sClefairyGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_45.4bpp.lz");
static const ax_sprite sClefairySprites45[] = {
	{sClefairyGfx45, ARRAY_COUNT(sClefairyGfx45)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_46.4bpp.lz");
static const ax_sprite sClefairySprites46[] = {
	{sClefairyGfx46, ARRAY_COUNT(sClefairyGfx46)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_47.4bpp.lz");
static const ax_sprite sClefairySprites47[] = {
	{sClefairyGfx47, ARRAY_COUNT(sClefairyGfx47)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_48.4bpp.lz");
static const ax_sprite sClefairySprites48[] = {
	{sClefairyGfx48, ARRAY_COUNT(sClefairyGfx48)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_49.4bpp.lz");
static const ax_sprite sClefairySprites49[] = {
	{sClefairyGfx49, ARRAY_COUNT(sClefairyGfx49)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_50.4bpp.lz");
static const ax_sprite sClefairySprites50[] = {
	{sClefairyGfx50, ARRAY_COUNT(sClefairyGfx50)}, 
	{NULL, 0}
};
static const u8 sClefairyGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/clefairy/sprite_51.4bpp.lz");
static const ax_sprite sClefairySprites51[] = {
	{sClefairyGfx51, ARRAY_COUNT(sClefairyGfx51)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesClefairy[] = {
	sClefairyPose1,
	sClefairyPose2,
	sClefairyPose3,
	sClefairyPose4,
	sClefairyPose5,
	sClefairyPose6,
	sClefairyPose7,
	sClefairyPose8,
	sClefairyPose9,
	sClefairyPose10,
	sClefairyPose11,
	sClefairyPose12,
	sClefairyPose13,
	sClefairyPose14,
	sClefairyPose15,
	sClefairyPose16,
	sClefairyPose17,
	sClefairyPose18,
	sClefairyPose19,
	sClefairyPose20,
	sClefairyPose21,
	sClefairyPose22,
	sClefairyPose23,
	sClefairyPose24,
	sClefairyPose1,
	sClefairyPose26,
	sClefairyPose27,
	sClefairyPose28,
	sClefairyPose4,
	sClefairyPose30,
	sClefairyPose31,
	sClefairyPose32,
	sClefairyPose7,
	sClefairyPose34,
	sClefairyPose35,
	sClefairyPose36,
	sClefairyPose10,
	sClefairyPose38,
	sClefairyPose39,
	sClefairyPose40,
	sClefairyPose13,
	sClefairyPose42,
	sClefairyPose43,
	sClefairyPose44,
	sClefairyPose16,
	sClefairyPose46,
	sClefairyPose47,
	sClefairyPose48,
	sClefairyPose19,
	sClefairyPose50,
	sClefairyPose51,
	sClefairyPose52,
	sClefairyPose22,
	sClefairyPose54,
	sClefairyPose55,
	sClefairyPose56,
	sClefairyPose1,
	sClefairyPose26,
	sClefairyPose27,
	sClefairyPose28,
	sClefairyPose4,
	sClefairyPose30,
	sClefairyPose31,
	sClefairyPose32,
	sClefairyPose7,
	sClefairyPose34,
	sClefairyPose35,
	sClefairyPose36,
	sClefairyPose10,
	sClefairyPose38,
	sClefairyPose39,
	sClefairyPose40,
	sClefairyPose13,
	sClefairyPose42,
	sClefairyPose43,
	sClefairyPose44,
	sClefairyPose16,
	sClefairyPose46,
	sClefairyPose47,
	sClefairyPose48,
	sClefairyPose19,
	sClefairyPose50,
	sClefairyPose51,
	sClefairyPose52,
	sClefairyPose22,
	sClefairyPose54,
	sClefairyPose55,
	sClefairyPose56,
	sClefairyPose1,
	sClefairyPose90,
	sClefairyPose28,
	sClefairyPose4,
	sClefairyPose93,
	sClefairyPose32,
	sClefairyPose95,
	sClefairyPose96,
	sClefairyPose36,
	sClefairyPose98,
	sClefairyPose99,
	sClefairyPose40,
	sClefairyPose13,
	sClefairyPose102,
	sClefairyPose44,
	sClefairyPose16,
	sClefairyPose105,
	sClefairyPose48,
	sClefairyPose19,
	sClefairyPose108,
	sClefairyPose52,
	sClefairyPose22,
	sClefairyPose111,
	sClefairyPose56,
	sClefairyPose28,
	sClefairyPose114,
	sClefairyPose115,
	sClefairyPose32,
	sClefairyPose117,
	sClefairyPose118,
	sClefairyPose36,
	sClefairyPose120,
	sClefairyPose121,
	sClefairyPose40,
	sClefairyPose123,
	sClefairyPose124,
	sClefairyPose44,
	sClefairyPose126,
	sClefairyPose127,
	sClefairyPose48,
	sClefairyPose129,
	sClefairyPose130,
	sClefairyPose52,
	sClefairyPose132,
	sClefairyPose133,
	sClefairyPose56,
	sClefairyPose135,
	sClefairyPose136,
	sClefairyPose137,
	sClefairyPose138,
	sClefairyPose139,
	sClefairyPose140,
	sClefairyPose141,
	sClefairyPose142,
	sClefairyPose143,
	sClefairyPose144,
	sClefairyPose145,
	sClefairyPose146,
	sClefairyPose1,
	sClefairyPose2,
	sClefairyPose3,
	sClefairyPose4,
	sClefairyPose5,
	sClefairyPose6,
	sClefairyPose7,
	sClefairyPose8,
	sClefairyPose9,
	sClefairyPose10,
	sClefairyPose11,
	sClefairyPose12,
	sClefairyPose13,
	sClefairyPose14,
	sClefairyPose15,
	sClefairyPose16,
	sClefairyPose17,
	sClefairyPose18,
	sClefairyPose19,
	sClefairyPose20,
	sClefairyPose21,
	sClefairyPose22,
	sClefairyPose23,
	sClefairyPose24,
	sClefairyPose90,
	sClefairyPose111,
	sClefairyPose108,
	sClefairyPose105,
	sClefairyPose102,
	sClefairyPose99,
	sClefairyPose96,
	sClefairyPose93,
	sClefairyPose28,
	sClefairyPose32,
	sClefairyPose36,
	sClefairyPose40,
	sClefairyPose44,
	sClefairyPose48,
	sClefairyPose52,
	sClefairyPose56,
	sClefairyPose1,
	sClefairyPose28,
	sClefairyPose90,
	sClefairyPose4,
	sClefairyPose32,
	sClefairyPose93,
	sClefairyPose95,
	sClefairyPose36,
	sClefairyPose96,
	sClefairyPose98,
	sClefairyPose40,
	sClefairyPose99,
	sClefairyPose13,
	sClefairyPose44,
	sClefairyPose102,
	sClefairyPose16,
	sClefairyPose48,
	sClefairyPose105,
	sClefairyPose19,
	sClefairyPose52,
	sClefairyPose108,
	sClefairyPose22,
	sClefairyPose56,
	sClefairyPose111,
	sClefairyPose90,
	sClefairyPose111,
	sClefairyPose108,
	sClefairyPose214,
	sClefairyPose102,
	sClefairyPose99,
	sClefairyPose96,
	sClefairyPose93,
	sClefairyPose1,
	sClefairyPose22,
	sClefairyPose19,
	sClefairyPose16,
	sClefairyPose13,
	sClefairyPose10,
	sClefairyPose7,
	sClefairyPose4,
};

static const struct PositionSets sAxPositionsClefairy[] = {
	[0] = { .set = { {0, -5}, {-9, -5}, {8, -5}, {0, -6} } },
	[1] = { .set = { {0, -9}, {-9, -12}, {7, -6}, {0, -10} } },
	[2] = { .set = { {0, -9}, {-8, -6}, {8, -12}, {-1, -10} } },
	[3] = { .set = { {2, -6}, {-7, -3}, {7, -8}, {0, -7} } },
	[4] = { .set = { {2, -10}, {-5, -5}, {8, -14}, {0, -11} } },
	[5] = { .set = { {4, -9}, {-6, -10}, {9, -8}, {2, -10} } },
	[6] = { .set = { {6, -7}, {0, -2}, {1, -6}, {-1, -8} } },
	[7] = { .set = { {5, -6}, {0, -3}, {1, -13}, {-1, -10} } },
	[8] = { .set = { {6, -10}, {0, -8}, {1, -7}, {0, -10} } },
	[9] = { .set = { {1, -8}, {6, -3}, {-5, -8}, {-1, -8} } },
	[10] = { .set = { {2, -8}, {5, -4}, {-6, -10}, {0, -9} } },
	[11] = { .set = { {-2, -12}, {6, -11}, {-8, -9}, {-2, -11} } },
	[12] = { .set = { {-1, -9}, {8, -5}, {-8, -5}, {-1, -7} } },
	[13] = { .set = { {-2, -10}, {8, -10}, {-8, -4}, {-1, -9} } },
	[14] = { .set = { {1, -10}, {7, -4}, {-9, -10}, {0, -9} } },
	[15] = { .set = { {-2, -9}, {6, -7}, {-7, -3}, {0, -8} } },
	[16] = { .set = { {-3, -10}, {1, -11}, {-6, -4}, {0, -10} } },
	[17] = { .set = { {0, -12}, {7, -9}, {-7, -11}, {1, -11} } },
	[18] = { .set = { {-7, -7}, {-2, -8}, {-1, -2}, {0, -7} } },
	[19] = { .set = { {-6, -7}, {-3, -11}, {-1, -3}, {0, -10} } },
	[20] = { .set = { {-7, -10}, {0, -11}, {-1, -8}, {0, -10} } },
	[21] = { .set = { {-3, -6}, {-8, -8}, {6, -3}, {0, -6} } },
	[22] = { .set = { {-3, -10}, {-9, -14}, {4, -5}, {0, -10} } },
	[23] = { .set = { {-5, -9}, {-10, -8}, {5, -10}, {-2, -10} } },
	[24] = { .set = { {0, -5}, {-9, -5}, {8, -5}, {0, -6} } },
	[25] = { .set = { {0, -7}, {-9, -10}, {7, -4}, {0, -8} } },
	[26] = { .set = { {0, -7}, {-8, -4}, {8, -10}, {-1, -8} } },
	[27] = { .set = { {0, -5}, {-9, -9}, {8, -9}, {-1, -8} } },
	[28] = { .set = { {2, -6}, {-7, -3}, {7, -8}, {0, -7} } },
	[29] = { .set = { {2, -7}, {-5, -2}, {8, -11}, {0, -8} } },
	[30] = { .set = { {4, -6}, {-6, -7}, {9, -5}, {2, -7} } },
	[31] = { .set = { {2, -6}, {7, -11}, {-7, -7}, {-1, -8} } },
	[32] = { .set = { {6, -7}, {0, -2}, {1, -6}, {-1, -8} } },
	[33] = { .set = { {5, -4}, {0, -1}, {1, -11}, {-1, -8} } },
	[34] = { .set = { {6, -8}, {0, -6}, {1, -5}, {0, -8} } },
	[35] = { .set = { {6, -7}, {2, -13}, {0, -7}, {-1, -8} } },
	[36] = { .set = { {1, -8}, {6, -3}, {-5, -8}, {-1, -8} } },
	[37] = { .set = { {2, -6}, {5, -2}, {-6, -8}, {0, -7} } },
	[38] = { .set = { {-2, -10}, {6, -9}, {-8, -7}, {-2, -9} } },
	[39] = { .set = { {1, -8}, {-6, -12}, {7, -7}, {-1, -8} } },
	[40] = { .set = { {-1, -9}, {8, -5}, {-8, -5}, {-1, -7} } },
	[41] = { .set = { {-2, -8}, {8, -8}, {-8, -2}, {-1, -7} } },
	[42] = { .set = { {1, -8}, {7, -2}, {-9, -8}, {0, -7} } },
	[43] = { .set = { {-1, -10}, {8, -9}, {-9, -9}, {-1, -8} } },
	[44] = { .set = { {-2, -9}, {6, -7}, {-7, -3}, {0, -8} } },
	[45] = { .set = { {-3, -8}, {1, -9}, {-6, -2}, {0, -8} } },
	[46] = { .set = { {0, -10}, {7, -7}, {-7, -9}, {1, -9} } },
	[47] = { .set = { {-2, -8}, {5, -12}, {-8, -7}, {0, -8} } },
	[48] = { .set = { {-7, -7}, {-2, -8}, {-1, -2}, {0, -7} } },
	[49] = { .set = { {-6, -5}, {-3, -9}, {-1, -1}, {0, -8} } },
	[50] = { .set = { {-7, -8}, {0, -9}, {-1, -6}, {0, -8} } },
	[51] = { .set = { {-7, -7}, {-3, -13}, {-1, -7}, {0, -8} } },
	[52] = { .set = { {-3, -6}, {-8, -8}, {6, -3}, {0, -6} } },
	[53] = { .set = { {-3, -7}, {-9, -11}, {4, -2}, {0, -7} } },
	[54] = { .set = { {-5, -6}, {-10, -5}, {5, -7}, {-2, -7} } },
	[55] = { .set = { {-3, -6}, {-8, -11}, {6, -7}, {0, -8} } },
	[56] = { .set = { {0, -5}, {-9, -5}, {8, -5}, {0, -6} } },
	[57] = { .set = { {0, -7}, {-9, -10}, {7, -4}, {0, -8} } },
	[58] = { .set = { {0, -7}, {-8, -4}, {8, -10}, {-1, -8} } },
	[59] = { .set = { {0, -5}, {-9, -9}, {8, -9}, {-1, -8} } },
	[60] = { .set = { {2, -6}, {-7, -3}, {7, -8}, {0, -7} } },
	[61] = { .set = { {2, -7}, {-5, -2}, {8, -11}, {0, -8} } },
	[62] = { .set = { {4, -6}, {-6, -7}, {9, -5}, {2, -7} } },
	[63] = { .set = { {2, -6}, {7, -11}, {-7, -7}, {-1, -8} } },
	[64] = { .set = { {6, -7}, {0, -2}, {1, -6}, {-1, -8} } },
	[65] = { .set = { {5, -4}, {0, -1}, {1, -11}, {-1, -8} } },
	[66] = { .set = { {6, -8}, {0, -6}, {1, -5}, {0, -8} } },
	[67] = { .set = { {6, -7}, {2, -13}, {0, -7}, {-1, -8} } },
	[68] = { .set = { {1, -8}, {6, -3}, {-5, -8}, {-1, -8} } },
	[69] = { .set = { {2, -6}, {5, -2}, {-6, -8}, {0, -7} } },
	[70] = { .set = { {-2, -10}, {6, -9}, {-8, -7}, {-2, -9} } },
	[71] = { .set = { {1, -8}, {-6, -12}, {7, -7}, {-1, -8} } },
	[72] = { .set = { {-1, -9}, {8, -5}, {-8, -5}, {-1, -7} } },
	[73] = { .set = { {-2, -8}, {8, -8}, {-8, -2}, {-1, -7} } },
	[74] = { .set = { {1, -8}, {7, -2}, {-9, -8}, {0, -7} } },
	[75] = { .set = { {-1, -10}, {8, -9}, {-9, -9}, {-1, -8} } },
	[76] = { .set = { {-2, -9}, {6, -7}, {-7, -3}, {0, -8} } },
	[77] = { .set = { {-3, -8}, {1, -9}, {-6, -2}, {0, -8} } },
	[78] = { .set = { {0, -10}, {7, -7}, {-7, -9}, {1, -9} } },
	[79] = { .set = { {-2, -8}, {5, -12}, {-8, -7}, {0, -8} } },
	[80] = { .set = { {-7, -7}, {-2, -8}, {-1, -2}, {0, -7} } },
	[81] = { .set = { {-6, -5}, {-3, -9}, {-1, -1}, {0, -8} } },
	[82] = { .set = { {-7, -8}, {0, -9}, {-1, -6}, {0, -8} } },
	[83] = { .set = { {-7, -7}, {-3, -13}, {-1, -7}, {0, -8} } },
	[84] = { .set = { {-3, -6}, {-8, -8}, {6, -3}, {0, -6} } },
	[85] = { .set = { {-3, -7}, {-9, -11}, {4, -2}, {0, -7} } },
	[86] = { .set = { {-5, -6}, {-10, -5}, {5, -7}, {-2, -7} } },
	[87] = { .set = { {-3, -6}, {-8, -11}, {6, -7}, {0, -8} } },
	[88] = { .set = { {0, -5}, {-9, -5}, {8, -5}, {0, -6} } },
	[89] = { .set = { {-1, -2}, {-6, -3}, {5, -3}, {-1, -6} } },
	[90] = { .set = { {0, -5}, {-9, -9}, {8, -9}, {-1, -8} } },
	[91] = { .set = { {2, -6}, {-7, -3}, {7, -8}, {0, -7} } },
	[92] = { .set = { {3, -4}, {6, -6}, {-2, -4}, {0, -6} } },
	[93] = { .set = { {2, -6}, {7, -11}, {-7, -7}, {-1, -8} } },
	[94] = { .set = { {6, -7}, {1, -8}, {0, -2}, {-1, -7} } },
	[95] = { .set = { {7, -4}, {6, -7}, {3, -4}, {0, -7} } },
	[96] = { .set = { {6, -7}, {2, -13}, {0, -7}, {-1, -8} } },
	[97] = { .set = { {1, -9}, {-7, -7}, {6, -3}, {-1, -8} } },
	[98] = { .set = { {3, -8}, {-2, -9}, {6, -6}, {0, -7} } },
	[99] = { .set = { {1, -8}, {-6, -12}, {7, -7}, {-1, -8} } },
	[100] = { .set = { {-1, -9}, {8, -5}, {-8, -5}, {-1, -7} } },
	[101] = { .set = { {-1, -8}, {3, -8}, {-5, -8}, {-1, -7} } },
	[102] = { .set = { {-1, -10}, {8, -9}, {-9, -9}, {-1, -8} } },
	[103] = { .set = { {-2, -9}, {6, -7}, {-7, -3}, {0, -8} } },
	[104] = { .set = { {-4, -8}, {1, -9}, {-7, -6}, {-1, -7} } },
	[105] = { .set = { {-2, -8}, {5, -12}, {-8, -7}, {0, -8} } },
	[106] = { .set = { {-7, -7}, {-2, -8}, {-1, -2}, {0, -7} } },
	[107] = { .set = { {-8, -4}, {-7, -7}, {-4, -4}, {-1, -7} } },
	[108] = { .set = { {-7, -7}, {-3, -13}, {-1, -7}, {0, -8} } },
	[109] = { .set = { {-3, -6}, {-8, -8}, {6, -3}, {0, -6} } },
	[110] = { .set = { {-4, -4}, {-7, -6}, {1, -4}, {-1, -6} } },
	[111] = { .set = { {-3, -6}, {-8, -11}, {6, -7}, {0, -8} } },
	[112] = { .set = { {0, -5}, {-9, -9}, {8, -9}, {-1, -8} } },
	[113] = { .set = { {-2, -7}, {-10, -10}, {4, -13}, {-2, -9} } },
	[114] = { .set = { {1, -7}, {-5, -13}, {9, -10}, {1, -9} } },
	[115] = { .set = { {2, -6}, {7, -11}, {-7, -7}, {-1, -8} } },
	[116] = { .set = { {3, -8}, {9, -9}, {-3, -12}, {0, -10} } },
	[117] = { .set = { {0, -8}, {4, -15}, {-8, -6}, {-3, -9} } },
	[118] = { .set = { {6, -7}, {2, -13}, {0, -7}, {-1, -8} } },
	[119] = { .set = { {6, -10}, {3, -18}, {1, -15}, {-1, -10} } },
	[120] = { .set = { {6, -4}, {7, -14}, {2, -5}, {-1, -8} } },
	[121] = { .set = { {1, -8}, {-6, -12}, {7, -7}, {-1, -8} } },
	[122] = { .set = { {-1, -10}, {-10, -12}, {3, -14}, {-2, -9} } },
	[123] = { .set = { {2, -9}, {-4, -14}, {8, -6}, {-1, -8} } },
	[124] = { .set = { {-1, -10}, {8, -9}, {-9, -9}, {-1, -8} } },
	[125] = { .set = { {1, -11}, {9, -7}, {-6, -14}, {0, -9} } },
	[126] = { .set = { {-3, -11}, {4, -13}, {-10, -8}, {-3, -9} } },
	[127] = { .set = { {-2, -8}, {5, -12}, {-8, -7}, {0, -8} } },
	[128] = { .set = { {0, -10}, {9, -12}, {-4, -14}, {1, -9} } },
	[129] = { .set = { {-3, -9}, {3, -14}, {-9, -6}, {0, -8} } },
	[130] = { .set = { {-7, -7}, {-3, -13}, {-1, -7}, {0, -8} } },
	[131] = { .set = { {-7, -10}, {-4, -18}, {-2, -15}, {0, -10} } },
	[132] = { .set = { {-7, -4}, {-8, -14}, {-3, -5}, {0, -8} } },
	[133] = { .set = { {-3, -6}, {-8, -11}, {6, -7}, {0, -8} } },
	[134] = { .set = { {-4, -8}, {-10, -9}, {2, -12}, {-1, -10} } },
	[135] = { .set = { {-1, -8}, {-5, -15}, {7, -6}, {2, -9} } },
	[136] = { .set = { {-3, -3}, {-8, -6}, {5, -1}, {0, -7} } },
	[137] = { .set = { {-3, -2}, {-8, -5}, {5, 0}, {0, -6} } },
	[138] = { .set = { {-1, -8}, {-9, -13}, {8, -13}, {0, -9} } },
	[139] = { .set = { {0, -9}, {4, -14}, {-10, -8}, {-4, -9} } },
	[140] = { .set = { {2, -11}, {-4, -14}, {-6, -10}, {-3, -9} } },
	[141] = { .set = { {1, -10}, {-10, -9}, {3, -10}, {-4, -6} } },
	[142] = { .set = { {-1, -7}, {8, -7}, {-9, -7}, {-1, -5} } },
	[143] = { .set = { {-2, -10}, {9, -9}, {-4, -10}, {3, -6} } },
	[144] = { .set = { {-3, -11}, {3, -14}, {5, -10}, {2, -9} } },
	[145] = { .set = { {-1, -9}, {-5, -14}, {9, -8}, {3, -9} } },
	[146] = { .set = { {0, -5}, {-9, -5}, {8, -5}, {0, -6} } },
	[147] = { .set = { {0, -9}, {-9, -12}, {7, -6}, {0, -10} } },
	[148] = { .set = { {0, -9}, {-8, -6}, {8, -12}, {-1, -10} } },
	[149] = { .set = { {2, -6}, {-7, -3}, {7, -8}, {0, -7} } },
	[150] = { .set = { {2, -10}, {-5, -5}, {8, -14}, {0, -11} } },
	[151] = { .set = { {4, -9}, {-6, -10}, {9, -8}, {2, -10} } },
	[152] = { .set = { {6, -7}, {0, -2}, {1, -6}, {-1, -8} } },
	[153] = { .set = { {5, -6}, {0, -3}, {1, -13}, {-1, -10} } },
	[154] = { .set = { {6, -10}, {0, -8}, {1, -7}, {0, -10} } },
	[155] = { .set = { {1, -8}, {6, -3}, {-5, -8}, {-1, -8} } },
	[156] = { .set = { {2, -8}, {5, -4}, {-6, -10}, {0, -9} } },
	[157] = { .set = { {-2, -12}, {6, -11}, {-8, -9}, {-2, -11} } },
	[158] = { .set = { {-1, -9}, {8, -5}, {-8, -5}, {-1, -7} } },
	[159] = { .set = { {-2, -10}, {8, -10}, {-8, -4}, {-1, -9} } },
	[160] = { .set = { {1, -10}, {7, -4}, {-9, -10}, {0, -9} } },
	[161] = { .set = { {-2, -9}, {6, -7}, {-7, -3}, {0, -8} } },
	[162] = { .set = { {-3, -10}, {1, -11}, {-6, -4}, {0, -10} } },
	[163] = { .set = { {0, -12}, {7, -9}, {-7, -11}, {1, -11} } },
	[164] = { .set = { {-7, -7}, {-2, -8}, {-1, -2}, {0, -7} } },
	[165] = { .set = { {-6, -7}, {-3, -11}, {-1, -3}, {0, -10} } },
	[166] = { .set = { {-7, -10}, {0, -11}, {-1, -8}, {0, -10} } },
	[167] = { .set = { {-3, -6}, {-8, -8}, {6, -3}, {0, -6} } },
	[168] = { .set = { {-3, -10}, {-9, -14}, {4, -5}, {0, -10} } },
	[169] = { .set = { {-5, -9}, {-10, -8}, {5, -10}, {-2, -10} } },
	[170] = { .set = { {-1, -2}, {-6, -3}, {5, -3}, {-1, -6} } },
	[171] = { .set = { {-4, -4}, {-7, -6}, {1, -4}, {-1, -6} } },
	[172] = { .set = { {-8, -4}, {-7, -7}, {-4, -4}, {-1, -7} } },
	[173] = { .set = { {-4, -8}, {1, -9}, {-7, -6}, {-1, -7} } },
	[174] = { .set = { {-1, -8}, {3, -8}, {-5, -8}, {-1, -7} } },
	[175] = { .set = { {3, -8}, {-2, -9}, {6, -6}, {0, -7} } },
	[176] = { .set = { {7, -4}, {6, -7}, {3, -4}, {0, -7} } },
	[177] = { .set = { {3, -4}, {6, -6}, {-2, -4}, {0, -6} } },
	[178] = { .set = { {0, -5}, {-9, -9}, {8, -9}, {-1, -8} } },
	[179] = { .set = { {2, -6}, {7, -11}, {-7, -7}, {-1, -8} } },
	[180] = { .set = { {6, -7}, {2, -13}, {0, -7}, {-1, -8} } },
	[181] = { .set = { {1, -8}, {-6, -12}, {7, -7}, {-1, -8} } },
	[182] = { .set = { {-1, -10}, {8, -9}, {-9, -9}, {-1, -8} } },
	[183] = { .set = { {-2, -8}, {5, -12}, {-8, -7}, {0, -8} } },
	[184] = { .set = { {-7, -7}, {-3, -13}, {-1, -7}, {0, -8} } },
	[185] = { .set = { {-3, -6}, {-8, -11}, {6, -7}, {0, -8} } },
	[186] = { .set = { {0, -5}, {-9, -5}, {8, -5}, {0, -6} } },
	[187] = { .set = { {0, -5}, {-9, -9}, {8, -9}, {-1, -8} } },
	[188] = { .set = { {-1, -2}, {-6, -3}, {5, -3}, {-1, -6} } },
	[189] = { .set = { {2, -6}, {-7, -3}, {7, -8}, {0, -7} } },
	[190] = { .set = { {2, -6}, {7, -11}, {-7, -7}, {-1, -8} } },
	[191] = { .set = { {3, -4}, {6, -6}, {-2, -4}, {0, -6} } },
	[192] = { .set = { {6, -7}, {1, -8}, {0, -2}, {-1, -7} } },
	[193] = { .set = { {6, -7}, {2, -13}, {0, -7}, {-1, -8} } },
	[194] = { .set = { {7, -4}, {6, -7}, {3, -4}, {0, -7} } },
	[195] = { .set = { {1, -9}, {-7, -7}, {6, -3}, {-1, -8} } },
	[196] = { .set = { {1, -8}, {-6, -12}, {7, -7}, {-1, -8} } },
	[197] = { .set = { {3, -8}, {-2, -9}, {6, -6}, {0, -7} } },
	[198] = { .set = { {-1, -9}, {8, -5}, {-8, -5}, {-1, -7} } },
	[199] = { .set = { {-1, -10}, {8, -9}, {-9, -9}, {-1, -8} } },
	[200] = { .set = { {-1, -8}, {3, -8}, {-5, -8}, {-1, -7} } },
	[201] = { .set = { {-2, -9}, {6, -7}, {-7, -3}, {0, -8} } },
	[202] = { .set = { {-2, -8}, {5, -12}, {-8, -7}, {0, -8} } },
	[203] = { .set = { {-4, -8}, {1, -9}, {-7, -6}, {-1, -7} } },
	[204] = { .set = { {-7, -7}, {-2, -8}, {-1, -2}, {0, -7} } },
	[205] = { .set = { {-7, -7}, {-3, -13}, {-1, -7}, {0, -8} } },
	[206] = { .set = { {-8, -4}, {-7, -7}, {-4, -4}, {-1, -7} } },
	[207] = { .set = { {-3, -6}, {-8, -8}, {6, -3}, {0, -6} } },
	[208] = { .set = { {-3, -6}, {-8, -11}, {6, -7}, {0, -8} } },
	[209] = { .set = { {-4, -4}, {-7, -6}, {1, -4}, {-1, -6} } },
	[210] = { .set = { {-1, -2}, {-6, -3}, {5, -3}, {-1, -6} } },
	[211] = { .set = { {-4, -4}, {-7, -6}, {1, -4}, {-1, -6} } },
	[212] = { .set = { {-8, -4}, {-7, -7}, {-4, -4}, {-1, -7} } },
	[213] = { .set = { {-5, -8}, {0, -9}, {-8, -6}, {-2, -7} } },
	[214] = { .set = { {-1, -8}, {3, -8}, {-5, -8}, {-1, -7} } },
	[215] = { .set = { {3, -8}, {-2, -9}, {6, -6}, {0, -7} } },
	[216] = { .set = { {7, -4}, {6, -7}, {3, -4}, {0, -7} } },
	[217] = { .set = { {3, -4}, {6, -6}, {-2, -4}, {0, -6} } },
	[218] = { .set = { {0, -5}, {-9, -5}, {8, -5}, {0, -6} } },
	[219] = { .set = { {-3, -6}, {-8, -8}, {6, -3}, {0, -6} } },
	[220] = { .set = { {-7, -7}, {-2, -8}, {-1, -2}, {0, -7} } },
	[221] = { .set = { {-2, -9}, {6, -7}, {-7, -3}, {0, -8} } },
	[222] = { .set = { {-1, -9}, {8, -5}, {-8, -5}, {-1, -7} } },
	[223] = { .set = { {1, -8}, {6, -3}, {-5, -8}, {-1, -8} } },
	[224] = { .set = { {6, -7}, {0, -2}, {1, -6}, {-1, -8} } },
	[225] = { .set = { {2, -6}, {-7, -3}, {7, -8}, {0, -7} } },
};

static const ax_anim *const sClefairyAnimTable1[] = {
	AX_ANIM_PTR(sClefairyAnims_1_1),
	AX_ANIM_PTR(sClefairyAnims_1_2),
	AX_ANIM_PTR(sClefairyAnims_1_3),
	AX_ANIM_PTR(sClefairyAnims_1_4),
	AX_ANIM_PTR(sClefairyAnims_1_5),
	AX_ANIM_PTR(sClefairyAnims_1_6),
	AX_ANIM_PTR(sClefairyAnims_1_7),
	AX_ANIM_PTR(sClefairyAnims_1_8),
};

static const ax_anim *const sClefairyAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_01566),
	AX_ANIM_PTR(gAxSharedAnim_01759),
	AX_ANIM_PTR(gAxSharedAnim_01831),
	AX_ANIM_PTR(sClefairyAnims_2_4),
	AX_ANIM_PTR(gAxSharedAnim_01918),
	AX_ANIM_PTR(sClefairyAnims_2_6),
	AX_ANIM_PTR(gAxSharedAnim_01972),
	AX_ANIM_PTR(gAxSharedAnim_01990),
};

static const ax_anim *const sClefairyAnimTable3[] = {
	AX_ANIM_PTR(gAxSharedAnim_02004),
	AX_ANIM_PTR(gAxSharedAnim_02022),
	AX_ANIM_PTR(gAxSharedAnim_02048),
	AX_ANIM_PTR(sClefairyAnims_3_4),
	AX_ANIM_PTR(gAxSharedAnim_02093),
	AX_ANIM_PTR(sClefairyAnims_3_6),
	AX_ANIM_PTR(gAxSharedAnim_02152),
	AX_ANIM_PTR(gAxSharedAnim_02184),
};

static const ax_anim *const sClefairyAnimTable4[] = {
	AX_ANIM_PTR(sClefairyAnims_4_1),
	AX_ANIM_PTR(sClefairyAnims_4_2),
	AX_ANIM_PTR(sClefairyAnims_4_3),
	AX_ANIM_PTR(sClefairyAnims_4_4),
	AX_ANIM_PTR(sClefairyAnims_4_5),
	AX_ANIM_PTR(sClefairyAnims_4_6),
	AX_ANIM_PTR(sClefairyAnims_4_7),
	AX_ANIM_PTR(sClefairyAnims_4_8),
};

static const ax_anim *const sClefairyAnimTable5[] = {
	AX_ANIM_PTR(sClefairyAnims_5_1),
	AX_ANIM_PTR(sClefairyAnims_5_2),
	AX_ANIM_PTR(sClefairyAnims_5_3),
	AX_ANIM_PTR(sClefairyAnims_5_4),
	AX_ANIM_PTR(sClefairyAnims_5_5),
	AX_ANIM_PTR(sClefairyAnims_5_6),
	AX_ANIM_PTR(sClefairyAnims_5_7),
	AX_ANIM_PTR(sClefairyAnims_5_8),
};

static const ax_anim *const sClefairyAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
};

static const ax_anim *const sClefairyAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00466),
	AX_ANIM_PTR(gAxSharedAnim_00479),
	AX_ANIM_PTR(gAxSharedAnim_00487),
	AX_ANIM_PTR(gAxSharedAnim_00496),
	AX_ANIM_PTR(gAxSharedAnim_00508),
	AX_ANIM_PTR(gAxSharedAnim_00517),
	AX_ANIM_PTR(gAxSharedAnim_00523),
	AX_ANIM_PTR(gAxSharedAnim_00529),
};

static const ax_anim *const sClefairyAnimTable8[] = {
	AX_ANIM_PTR(sClefairyAnims_8_1),
	AX_ANIM_PTR(sClefairyAnims_8_2),
	AX_ANIM_PTR(sClefairyAnims_8_3),
	AX_ANIM_PTR(sClefairyAnims_8_4),
	AX_ANIM_PTR(sClefairyAnims_8_5),
	AX_ANIM_PTR(sClefairyAnims_8_6),
	AX_ANIM_PTR(sClefairyAnims_8_7),
	AX_ANIM_PTR(sClefairyAnims_8_8),
};

static const ax_anim *const sClefairyAnimTable9[] = {
	AX_ANIM_PTR(gAxSharedAnim_00796),
	AX_ANIM_PTR(sClefairyAnims_9_2),
	AX_ANIM_PTR(sClefairyAnims_9_3),
	AX_ANIM_PTR(sClefairyAnims_9_4),
	AX_ANIM_PTR(sClefairyAnims_9_5),
	AX_ANIM_PTR(sClefairyAnims_9_6),
	AX_ANIM_PTR(sClefairyAnims_9_7),
	AX_ANIM_PTR(sClefairyAnims_9_8),
};

static const ax_anim *const sClefairyAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00905),
	AX_ANIM_PTR(gAxSharedAnim_00918),
	AX_ANIM_PTR(gAxSharedAnim_00930),
	AX_ANIM_PTR(gAxSharedAnim_00942),
	AX_ANIM_PTR(gAxSharedAnim_00955),
	AX_ANIM_PTR(gAxSharedAnim_00965),
	AX_ANIM_PTR(gAxSharedAnim_00978),
	AX_ANIM_PTR(gAxSharedAnim_00993),
};

static const ax_anim *const sClefairyAnimTable11[] = {
	AX_ANIM_PTR(sClefairyAnims_11_1),
	AX_ANIM_PTR(gAxSharedAnim_01059),
	AX_ANIM_PTR(gAxSharedAnim_01106),
	AX_ANIM_PTR(gAxSharedAnim_01153),
	AX_ANIM_PTR(gAxSharedAnim_01188),
	AX_ANIM_PTR(gAxSharedAnim_01226),
	AX_ANIM_PTR(gAxSharedAnim_01265),
	AX_ANIM_PTR(gAxSharedAnim_01297),
};

static const ax_anim *const sClefairyAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01337),
	AX_ANIM_PTR(gAxSharedAnim_01415),
	AX_ANIM_PTR(gAxSharedAnim_01392),
	AX_ANIM_PTR(gAxSharedAnim_01380),
	AX_ANIM_PTR(gAxSharedAnim_01379),
	AX_ANIM_PTR(gAxSharedAnim_01368),
	AX_ANIM_PTR(gAxSharedAnim_01354),
	AX_ANIM_PTR(gAxSharedAnim_01338),
};

static const ax_anim *const sClefairyAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01422),
	AX_ANIM_PTR(gAxSharedAnim_01464),
	AX_ANIM_PTR(gAxSharedAnim_01461),
	AX_ANIM_PTR(gAxSharedAnim_01456),
	AX_ANIM_PTR(gAxSharedAnim_01446),
	AX_ANIM_PTR(gAxSharedAnim_01443),
	AX_ANIM_PTR(gAxSharedAnim_01438),
	AX_ANIM_PTR(gAxSharedAnim_01429),
};

static const ax_anim *const *const sAxAnimationsClefairy[] = {
	sClefairyAnimTable1,
	sClefairyAnimTable2,
	sClefairyAnimTable3,
	sClefairyAnimTable4,
	sClefairyAnimTable5,
	sClefairyAnimTable6,
	sClefairyAnimTable7,
	sClefairyAnimTable8,
	sClefairyAnimTable9,
	sClefairyAnimTable10,
	sClefairyAnimTable11,
	sClefairyAnimTable12,
	sClefairyAnimTable13,
};

static const ax_sprite *const sAxSpritesClefairy[] = {
	sClefairySprites1,
	sClefairySprites2,
	sClefairySprites3,
	sClefairySprites4,
	sClefairySprites5,
	sClefairySprites6,
	sClefairySprites7,
	sClefairySprites8,
	sClefairySprites9,
	sClefairySprites10,
	sClefairySprites11,
	sClefairySprites12,
	sClefairySprites13,
	sClefairySprites14,
	sClefairySprites15,
	sClefairySprites16,
	sClefairySprites17,
	sClefairySprites18,
	sClefairySprites19,
	sClefairySprites20,
	sClefairySprites21,
	sClefairySprites22,
	sClefairySprites23,
	sClefairySprites24,
	sClefairySprites25,
	sClefairySprites26,
	sClefairySprites27,
	sClefairySprites28,
	sClefairySprites29,
	sClefairySprites30,
	sClefairySprites31,
	sClefairySprites32,
	sClefairySprites33,
	sClefairySprites34,
	sClefairySprites35,
	sClefairySprites36,
	sClefairySprites37,
	sClefairySprites38,
	sClefairySprites39,
	sClefairySprites40,
	sClefairySprites41,
	sClefairySprites42,
	sClefairySprites43,
	sClefairySprites44,
	sClefairySprites45,
	sClefairySprites46,
	sClefairySprites47,
	sClefairySprites48,
	sClefairySprites49,
	sClefairySprites50,
	sClefairySprites51,
};

static const axmain sAxMainClefairy = {
	.poses = sAxPosesClefairy,
	.animations = sAxAnimationsClefairy,
	.animCount = ARRAY_COUNT(sAxAnimationsClefairy),
	.spriteData = sAxSpritesClefairy,
	.positions = sAxPositionsClefairy,
};
