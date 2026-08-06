/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainEevee;
const SiroArchive gAxEevee = {"SIRO", &sAxMainEevee};

static const ax_pose sEeveePose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose2[] = {
	AX_POSE(1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose3[] = {
	AX_POSE(2, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose4[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose5[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose6[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose7[] = {
	AX_POSE(6, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose8[] = {
	AX_POSE(7, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose9[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose10[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose11[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose12[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose13[] = {
	AX_POSE(12, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose14[] = {
	AX_POSE(13, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose15[] = {
	AX_POSE(14, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose16[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose17[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose18[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose19[] = {
	AX_POSE(6, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose20[] = {
	AX_POSE(7, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose21[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose22[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose23[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose24[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose25[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose26[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose27[] = {
	AX_POSE(2, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose30[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose36[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose42[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose48[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose73[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose74[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose75[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose76[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose77[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose78[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose79[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose80[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose81[] = {
	AX_POSE(6, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose82[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose83[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose84[] = {
	AX_POSE(10, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose85[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose86[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose87[] = {
	AX_POSE(13, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose88[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose89[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose90[] = {
	AX_POSE(10, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose91[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose92[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose93[] = {
	AX_POSE(6, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose94[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose95[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose96[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose98[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose99[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose100[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose101[] = {
	AX_POSE(27, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose102[] = {
	AX_POSE(28, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose104[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose105[] = {
	AX_POSE(30, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose107[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose108[] = {
	AX_POSE(32, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose110[] = {
	AX_POSE(33, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose111[] = {
	AX_POSE(34, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose113[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose114[] = {
	AX_POSE(32, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose116[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose117[] = {
	AX_POSE(30, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose118[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose119[] = {
	AX_POSE(27, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose120[] = {
	AX_POSE(28, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose121[] = {
	AX_POSE(35, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose122[] = {
	AX_POSE(36, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose123[] = {
	AX_POSE(37, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose124[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose125[] = {
	AX_POSE(39, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose126[] = {
	AX_POSE(40, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose127[] = {
	AX_POSE(41, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose128[] = {
	AX_POSE(40, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose129[] = {
	AX_POSE(39, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose130[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose187[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose188[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose211[] = {
	AX_POSE(42, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose212[] = {
	AX_POSE(43, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose213[] = {
	AX_POSE(42, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose214[] = {
	AX_POSE(43, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose216[] = {
	AX_POSE(44, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose217[] = {
	AX_POSE(45, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose218[] = {
	AX_POSE(46, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose221[] = {
	AX_POSE(47, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose222[] = {
	AX_POSE(48, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose223[] = {
	AX_POSE(49, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose224[] = {
	AX_POSE(50, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose227[] = {
	AX_POSE(51, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose228[] = {
	AX_POSE(52, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose229[] = {
	AX_POSE(53, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose230[] = {
	AX_POSE(54, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose231[] = {
	AX_POSE(55, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose232[] = {
	AX_POSE(56, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose234[] = {
	AX_POSE(57, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose235[] = {
	AX_POSE(58, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose237[] = {
	AX_POSE(59, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose238[] = {
	AX_POSE(60, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose240[] = {
	AX_POSE(61, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose241[] = {
	AX_POSE(62, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose243[] = {
	AX_POSE(63, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose245[] = {
	AX_POSE(63, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose247[] = {
	AX_POSE(64, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose248[] = {
	AX_POSE(65, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose249[] = {
	AX_POSE(66, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose250[] = {
	AX_POSE(67, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose251[] = {
	AX_POSE(68, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose252[] = {
	AX_POSE(69, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose253[] = {
	AX_POSE(65, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose254[] = {
	AX_POSE(66, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose255[] = {
	AX_POSE(67, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose256[] = {
	AX_POSE(68, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose257[] = {
	AX_POSE(69, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEeveePose258[] = {
	AX_POSE(70, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_anim sEeveeAnims_1_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 1, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 1, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {0, -4}, .shadow = {0, 3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, -1}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 0, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 0, .offset = {0, 2}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_1_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {3, 1}, .shadow = {3, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 5, .offset = {5, 0}, .shadow = {4, 4} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {5, 3}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 3, .offset = {4, 4}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 3, .offset = {2, 2}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_1_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 7, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 7, .offset = {2, -1}, .shadow = {2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {2, -5}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {3, -3}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 6, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 6, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_1_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {-1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {0, -3}, .shadow = {3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 11, .offset = {0, -6}, .shadow = {4, -4} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {1, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 9, .offset = {5, -5}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 9, .offset = {2, -2}, .shadow = {3, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_1_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 13, .offset = {0, 2}, .shadow = {0, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {0, -4} },
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {0, -8}, .shadow = {0, -6} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 12, .offset = {0, -2}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 12, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_1_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 16, .offset = {1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 16, .offset = {0, -3}, .shadow = {-3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 17, .offset = {0, -6}, .shadow = {-4, -4} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {-1, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 15, .offset = {-5, -5}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 15, .offset = {-2, -2}, .shadow = {-3, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_1_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 19, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 19, .offset = {-2, -1}, .shadow = {-2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 20, .offset = {-2, -5}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {-3, -3}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 18, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 18, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_1_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 22, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 22, .offset = {-3, 1}, .shadow = {-3, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 23, .offset = {-5, 0}, .shadow = {-4, 4} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {-5, 3}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 21, .offset = {-4, 4}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 21, .offset = {-2, 2}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_2_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 26, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 16}, .shadow = {0, 12} },
	{ .frames = 2, .unkFlags = 1, .poseId = 26, .offset = {-1, 16}, .shadow = {-1, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 16}, .shadow = {0, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-1, 16}, .shadow = {-1, 12} },
	{ .frames = 4, .unkFlags = 0, .poseId = 25, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 4, .unkFlags = 0, .poseId = 25, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 25, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_2_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {2, 0}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {4, 0}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 29, .offset = {6, 3}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {16, 18}, .shadow = {16, 16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 29, .offset = {15, 19}, .shadow = {15, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {16, 18}, .shadow = {16, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {15, 19}, .shadow = {15, 17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 28, .offset = {10, 6}, .shadow = {10, 10} },
	{ .frames = 4, .unkFlags = 0, .poseId = 28, .offset = {3, -2}, .shadow = {3, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 28, .offset = {1, -1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_2_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {2, 1}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 32, .offset = {6, -3}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {16, 0}, .shadow = {16, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 32, .offset = {16, 1}, .shadow = {16, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {16, 0}, .shadow = {16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {16, 1}, .shadow = {16, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 31, .offset = {10, -1}, .shadow = {10, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 31, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 31, .offset = {1, 1}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_2_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {2, -4}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {4, -9}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 35, .offset = {7, -16}, .shadow = {7, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {14, -17}, .shadow = {16, -16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {15, -16}, .shadow = {17, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {14, -17}, .shadow = {16, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {15, -16}, .shadow = {17, -15} },
	{ .frames = 4, .unkFlags = 0, .poseId = 34, .offset = {7, -9}, .shadow = {7, -7} },
	{ .frames = 4, .unkFlags = 0, .poseId = 34, .offset = {0, -2}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 34, .offset = {-1, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_2_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, 0}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 38, .offset = {0, -16}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 38, .offset = {-1, -22}, .shadow = {-1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {-1, -22}, .shadow = {-1, -22} },
	{ .frames = 4, .unkFlags = 0, .poseId = 37, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 4, .unkFlags = 0, .poseId = 37, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 37, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_2_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-2, -4}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-4, -9}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 41, .offset = {-7, -16}, .shadow = {-7, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-14, -17}, .shadow = {-16, -16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 41, .offset = {-15, -16}, .shadow = {-17, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-14, -17}, .shadow = {-16, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-15, -16}, .shadow = {-17, -15} },
	{ .frames = 4, .unkFlags = 0, .poseId = 40, .offset = {-7, -9}, .shadow = {-7, -7} },
	{ .frames = 4, .unkFlags = 0, .poseId = 40, .offset = {0, -2}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 40, .offset = {1, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_2_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-2, 1}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 44, .offset = {-6, -3}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-16, 0}, .shadow = {-16, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 44, .offset = {-16, 1}, .shadow = {-16, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-16, 0}, .shadow = {-16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-16, 1}, .shadow = {-16, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 43, .offset = {-10, -1}, .shadow = {-10, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 43, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 43, .offset = {-1, 1}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_2_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-2, 0}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-4, 0}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 47, .offset = {-6, 3}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-16, 18}, .shadow = {-16, 16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-15, 19}, .shadow = {-15, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-16, 18}, .shadow = {-16, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-15, 19}, .shadow = {-15, 17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 46, .offset = {-10, 6}, .shadow = {-10, 10} },
	{ .frames = 4, .unkFlags = 0, .poseId = 46, .offset = {-3, -2}, .shadow = {-3, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 46, .offset = {-1, -1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_3_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 50, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 16}, .shadow = {0, 12} },
	{ .frames = 2, .unkFlags = 1, .poseId = 50, .offset = {-1, 16}, .shadow = {-1, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 16}, .shadow = {0, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {-1, 16}, .shadow = {-1, 12} },
	{ .frames = 4, .unkFlags = 0, .poseId = 49, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 4, .unkFlags = 0, .poseId = 49, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 49, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_3_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {2, 0}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {4, 0}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 53, .offset = {6, 3}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {16, 18}, .shadow = {16, 16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 53, .offset = {15, 19}, .shadow = {15, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {16, 18}, .shadow = {16, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {15, 19}, .shadow = {15, 17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 52, .offset = {10, 6}, .shadow = {10, 10} },
	{ .frames = 4, .unkFlags = 0, .poseId = 52, .offset = {3, -2}, .shadow = {3, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 52, .offset = {1, -1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_3_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {2, 1}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 56, .offset = {6, -3}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {16, 0}, .shadow = {16, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 56, .offset = {16, 1}, .shadow = {16, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {16, 0}, .shadow = {16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {16, 1}, .shadow = {16, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 55, .offset = {10, -1}, .shadow = {10, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 55, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 55, .offset = {1, 1}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_3_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {2, -4}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {4, -9}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 59, .offset = {7, -16}, .shadow = {7, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {14, -17}, .shadow = {16, -16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 59, .offset = {15, -16}, .shadow = {17, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {14, -17}, .shadow = {16, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {15, -16}, .shadow = {17, -15} },
	{ .frames = 4, .unkFlags = 0, .poseId = 58, .offset = {7, -9}, .shadow = {7, -7} },
	{ .frames = 4, .unkFlags = 0, .poseId = 58, .offset = {0, -2}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 58, .offset = {-1, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_3_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, 0}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 62, .offset = {0, -16}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 62, .offset = {-1, -22}, .shadow = {-1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {-1, -22}, .shadow = {-1, -22} },
	{ .frames = 4, .unkFlags = 0, .poseId = 61, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 4, .unkFlags = 0, .poseId = 61, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 61, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_3_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-2, -4}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-4, -9}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 65, .offset = {-7, -16}, .shadow = {-7, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-14, -17}, .shadow = {-16, -16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 65, .offset = {-15, -16}, .shadow = {-17, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-14, -17}, .shadow = {-16, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-15, -16}, .shadow = {-17, -15} },
	{ .frames = 4, .unkFlags = 0, .poseId = 64, .offset = {-7, -9}, .shadow = {-7, -7} },
	{ .frames = 4, .unkFlags = 0, .poseId = 64, .offset = {0, -2}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 64, .offset = {1, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_3_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-2, 1}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 68, .offset = {-6, -3}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-16, 0}, .shadow = {-16, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 68, .offset = {-16, 1}, .shadow = {-16, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-16, 0}, .shadow = {-16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-16, 1}, .shadow = {-16, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 67, .offset = {-10, -1}, .shadow = {-10, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 67, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 67, .offset = {-1, 1}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_3_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-2, 0}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-4, 0}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 71, .offset = {-6, 3}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-16, 18}, .shadow = {-16, 16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {-15, 19}, .shadow = {-15, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-16, 18}, .shadow = {-16, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-15, 19}, .shadow = {-15, 17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 70, .offset = {-10, 6}, .shadow = {-10, 10} },
	{ .frames = 4, .unkFlags = 0, .poseId = 70, .offset = {-3, -2}, .shadow = {-3, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 70, .offset = {-1, -1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_4_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 74, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 74, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 73, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 72, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 1, .poseId = 73, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 72, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 73, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_4_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 77, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 77, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 76, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 75, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 1, .poseId = 76, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 75, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 76, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_4_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 80, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 80, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 78, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 79, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 78, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 1, .poseId = 79, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 78, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 79, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_4_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 83, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 83, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 81, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 82, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 81, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 1, .poseId = 82, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 81, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 82, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_4_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 86, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 86, .offset = {0, 2}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 84, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 85, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 84, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 1, .poseId = 85, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 84, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 85, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_4_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 89, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 89, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 87, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 88, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 87, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 1, .poseId = 88, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 87, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 88, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_4_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 92, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 92, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 91, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 1, .poseId = 91, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 91, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_4_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 95, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 95, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 94, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 1, .poseId = 94, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_5_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_5_2[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_5_3[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_5_4[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_5_5[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_5_6[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_5_7[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_5_8[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_12_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_12_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_15_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 214, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 215, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 216, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 217, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_18_1[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 226, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_18_5[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 227, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 227, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 228, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_19_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 229, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 230, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 229, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 231, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_20_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 232, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 233, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 233, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 233, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 234, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 234, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {1, 1}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_20_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 232, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 233, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 233, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 233, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 234, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 234, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_21_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 235, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 236, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 237, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_22_1[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 239, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 34, .unkFlags = 0, .poseId = 240, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 30, .unkFlags = 0, .poseId = 239, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 34, .unkFlags = 0, .poseId = 240, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 238, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_23_1[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 241, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 242, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 241, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 242, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 241, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_23_3[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 243, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 244, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 243, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 244, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 243, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_24_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 246, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_25_1[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 252, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 253, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 254, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 252, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 255, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 256, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_26_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 257, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 257, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_27_1[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 258, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 258, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 258, .offset = {-1, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 258, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 258, .offset = {1, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 258, .offset = {2, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_28_1[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 262, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sEeveeAnims_28_3[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 264, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sEeveeGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_1.4bpp.lz");
static const ax_sprite sEeveeSprites1[] = {
	{sEeveeGfx1, ARRAY_COUNT(sEeveeGfx1)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_2.4bpp.lz");
static const ax_sprite sEeveeSprites2[] = {
	{sEeveeGfx2, ARRAY_COUNT(sEeveeGfx2)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_3.4bpp.lz");
static const ax_sprite sEeveeSprites3[] = {
	{sEeveeGfx3, ARRAY_COUNT(sEeveeGfx3)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_4.4bpp.lz");
static const ax_sprite sEeveeSprites4[] = {
	{sEeveeGfx4, ARRAY_COUNT(sEeveeGfx4)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_5.4bpp.lz");
static const ax_sprite sEeveeSprites5[] = {
	{sEeveeGfx5, ARRAY_COUNT(sEeveeGfx5)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_6.4bpp.lz");
static const ax_sprite sEeveeSprites6[] = {
	{sEeveeGfx6, ARRAY_COUNT(sEeveeGfx6)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_7.4bpp.lz");
static const ax_sprite sEeveeSprites7[] = {
	{sEeveeGfx7, ARRAY_COUNT(sEeveeGfx7)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_8.4bpp.lz");
static const ax_sprite sEeveeSprites8[] = {
	{sEeveeGfx8, ARRAY_COUNT(sEeveeGfx8)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_9.4bpp.lz");
static const ax_sprite sEeveeSprites9[] = {
	{sEeveeGfx9, ARRAY_COUNT(sEeveeGfx9)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_10.4bpp.lz");
static const ax_sprite sEeveeSprites10[] = {
	{sEeveeGfx10, ARRAY_COUNT(sEeveeGfx10)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_11.4bpp.lz");
static const ax_sprite sEeveeSprites11[] = {
	{sEeveeGfx11, ARRAY_COUNT(sEeveeGfx11)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_12.4bpp.lz");
static const ax_sprite sEeveeSprites12[] = {
	{sEeveeGfx12, ARRAY_COUNT(sEeveeGfx12)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_13.4bpp.lz");
static const ax_sprite sEeveeSprites13[] = {
	{sEeveeGfx13, ARRAY_COUNT(sEeveeGfx13)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_14.4bpp.lz");
static const ax_sprite sEeveeSprites14[] = {
	{sEeveeGfx14, ARRAY_COUNT(sEeveeGfx14)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_15.4bpp.lz");
static const ax_sprite sEeveeSprites15[] = {
	{sEeveeGfx15, ARRAY_COUNT(sEeveeGfx15)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_16.4bpp.lz");
static const u8 sEeveeGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_16_1.4bpp.lz");
static const u8 sEeveeGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_16_2.4bpp.lz");
static const ax_sprite sEeveeSprites16[] = {
	{sEeveeGfx16, ARRAY_COUNT(sEeveeGfx16)}, 
	{NULL, 32}, 
	{sEeveeGfx16_1, ARRAY_COUNT(sEeveeGfx16_1)}, 
	{NULL, 32}, 
	{sEeveeGfx16_2, ARRAY_COUNT(sEeveeGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_17.4bpp.lz");
static const u8 sEeveeGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_17_1.4bpp.lz");
static const u8 sEeveeGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_17_2.4bpp.lz");
static const ax_sprite sEeveeSprites17[] = {
	{sEeveeGfx17, ARRAY_COUNT(sEeveeGfx17)}, 
	{NULL, 32}, 
	{sEeveeGfx17_1, ARRAY_COUNT(sEeveeGfx17_1)}, 
	{NULL, 32}, 
	{sEeveeGfx17_2, ARRAY_COUNT(sEeveeGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_18.4bpp.lz");
static const u8 sEeveeGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_18_1.4bpp.lz");
static const u8 sEeveeGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_18_2.4bpp.lz");
static const ax_sprite sEeveeSprites18[] = {
	{NULL, 32}, 
	{sEeveeGfx18, ARRAY_COUNT(sEeveeGfx18)}, 
	{NULL, 32}, 
	{sEeveeGfx18_1, ARRAY_COUNT(sEeveeGfx18_1)}, 
	{NULL, 32}, 
	{sEeveeGfx18_2, ARRAY_COUNT(sEeveeGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_19.4bpp.lz");
static const u8 sEeveeGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_19_1.4bpp.lz");
static const u8 sEeveeGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_19_2.4bpp.lz");
static const ax_sprite sEeveeSprites19[] = {
	{sEeveeGfx19, ARRAY_COUNT(sEeveeGfx19)}, 
	{NULL, 32}, 
	{sEeveeGfx19_1, ARRAY_COUNT(sEeveeGfx19_1)}, 
	{NULL, 32}, 
	{sEeveeGfx19_2, ARRAY_COUNT(sEeveeGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_20.4bpp.lz");
static const u8 sEeveeGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_20_1.4bpp.lz");
static const u8 sEeveeGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_20_2.4bpp.lz");
static const ax_sprite sEeveeSprites20[] = {
	{sEeveeGfx20, ARRAY_COUNT(sEeveeGfx20)}, 
	{NULL, 32}, 
	{sEeveeGfx20_1, ARRAY_COUNT(sEeveeGfx20_1)}, 
	{NULL, 32}, 
	{sEeveeGfx20_2, ARRAY_COUNT(sEeveeGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_21.4bpp.lz");
static const u8 sEeveeGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_21_1.4bpp.lz");
static const u8 sEeveeGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_21_2.4bpp.lz");
static const ax_sprite sEeveeSprites21[] = {
	{sEeveeGfx21, ARRAY_COUNT(sEeveeGfx21)}, 
	{NULL, 32}, 
	{sEeveeGfx21_1, ARRAY_COUNT(sEeveeGfx21_1)}, 
	{NULL, 32}, 
	{sEeveeGfx21_2, ARRAY_COUNT(sEeveeGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_22.4bpp.lz");
static const u8 sEeveeGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_22_1.4bpp.lz");
static const u8 sEeveeGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_22_2.4bpp.lz");
static const ax_sprite sEeveeSprites22[] = {
	{sEeveeGfx22, ARRAY_COUNT(sEeveeGfx22)}, 
	{NULL, 32}, 
	{sEeveeGfx22_1, ARRAY_COUNT(sEeveeGfx22_1)}, 
	{NULL, 32}, 
	{sEeveeGfx22_2, ARRAY_COUNT(sEeveeGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_23.4bpp.lz");
static const u8 sEeveeGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_23_1.4bpp.lz");
static const u8 sEeveeGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_23_2.4bpp.lz");
static const ax_sprite sEeveeSprites23[] = {
	{sEeveeGfx23, ARRAY_COUNT(sEeveeGfx23)}, 
	{NULL, 32}, 
	{sEeveeGfx23_1, ARRAY_COUNT(sEeveeGfx23_1)}, 
	{NULL, 32}, 
	{sEeveeGfx23_2, ARRAY_COUNT(sEeveeGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_24.4bpp.lz");
static const u8 sEeveeGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_24_1.4bpp.lz");
static const u8 sEeveeGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_24_2.4bpp.lz");
static const ax_sprite sEeveeSprites24[] = {
	{sEeveeGfx24, ARRAY_COUNT(sEeveeGfx24)}, 
	{NULL, 32}, 
	{sEeveeGfx24_1, ARRAY_COUNT(sEeveeGfx24_1)}, 
	{NULL, 32}, 
	{sEeveeGfx24_2, ARRAY_COUNT(sEeveeGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_25.4bpp.lz");
static const u8 sEeveeGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_25_1.4bpp.lz");
static const u8 sEeveeGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_25_2.4bpp.lz");
static const ax_sprite sEeveeSprites25[] = {
	{sEeveeGfx25, ARRAY_COUNT(sEeveeGfx25)}, 
	{NULL, 32}, 
	{sEeveeGfx25_1, ARRAY_COUNT(sEeveeGfx25_1)}, 
	{NULL, 32}, 
	{sEeveeGfx25_2, ARRAY_COUNT(sEeveeGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_26.4bpp.lz");
static const u8 sEeveeGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_26_1.4bpp.lz");
static const u8 sEeveeGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_26_2.4bpp.lz");
static const ax_sprite sEeveeSprites26[] = {
	{sEeveeGfx26, ARRAY_COUNT(sEeveeGfx26)}, 
	{NULL, 32}, 
	{sEeveeGfx26_1, ARRAY_COUNT(sEeveeGfx26_1)}, 
	{NULL, 32}, 
	{sEeveeGfx26_2, ARRAY_COUNT(sEeveeGfx26_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_27.4bpp.lz");
static const u8 sEeveeGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_27_1.4bpp.lz");
static const u8 sEeveeGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_27_2.4bpp.lz");
static const ax_sprite sEeveeSprites27[] = {
	{sEeveeGfx27, ARRAY_COUNT(sEeveeGfx27)}, 
	{NULL, 32}, 
	{sEeveeGfx27_1, ARRAY_COUNT(sEeveeGfx27_1)}, 
	{NULL, 32}, 
	{sEeveeGfx27_2, ARRAY_COUNT(sEeveeGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_28.4bpp.lz");
static const u8 sEeveeGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_28_1.4bpp.lz");
static const u8 sEeveeGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_28_2.4bpp.lz");
static const ax_sprite sEeveeSprites28[] = {
	{sEeveeGfx28, ARRAY_COUNT(sEeveeGfx28)}, 
	{NULL, 32}, 
	{sEeveeGfx28_1, ARRAY_COUNT(sEeveeGfx28_1)}, 
	{NULL, 32}, 
	{sEeveeGfx28_2, ARRAY_COUNT(sEeveeGfx28_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_29.4bpp.lz");
static const u8 sEeveeGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_29_1.4bpp.lz");
static const u8 sEeveeGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_29_2.4bpp.lz");
static const ax_sprite sEeveeSprites29[] = {
	{sEeveeGfx29, ARRAY_COUNT(sEeveeGfx29)}, 
	{NULL, 32}, 
	{sEeveeGfx29_1, ARRAY_COUNT(sEeveeGfx29_1)}, 
	{NULL, 32}, 
	{sEeveeGfx29_2, ARRAY_COUNT(sEeveeGfx29_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_30.4bpp.lz");
static const u8 sEeveeGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_30_1.4bpp.lz");
static const u8 sEeveeGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_30_2.4bpp.lz");
static const ax_sprite sEeveeSprites30[] = {
	{NULL, 32}, 
	{sEeveeGfx30, ARRAY_COUNT(sEeveeGfx30)}, 
	{NULL, 64}, 
	{sEeveeGfx30_1, ARRAY_COUNT(sEeveeGfx30_1)}, 
	{NULL, 32}, 
	{sEeveeGfx30_2, ARRAY_COUNT(sEeveeGfx30_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_31.4bpp.lz");
static const u8 sEeveeGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_31_1.4bpp.lz");
static const u8 sEeveeGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_31_2.4bpp.lz");
static const ax_sprite sEeveeSprites31[] = {
	{NULL, 32}, 
	{sEeveeGfx31, ARRAY_COUNT(sEeveeGfx31)}, 
	{NULL, 64}, 
	{sEeveeGfx31_1, ARRAY_COUNT(sEeveeGfx31_1)}, 
	{NULL, 32}, 
	{sEeveeGfx31_2, ARRAY_COUNT(sEeveeGfx31_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_32.4bpp.lz");
static const u8 sEeveeGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_32_1.4bpp.lz");
static const u8 sEeveeGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_32_2.4bpp.lz");
static const ax_sprite sEeveeSprites32[] = {
	{sEeveeGfx32, ARRAY_COUNT(sEeveeGfx32)}, 
	{NULL, 32}, 
	{sEeveeGfx32_1, ARRAY_COUNT(sEeveeGfx32_1)}, 
	{NULL, 32}, 
	{sEeveeGfx32_2, ARRAY_COUNT(sEeveeGfx32_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_33.4bpp.lz");
static const u8 sEeveeGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_33_1.4bpp.lz");
static const u8 sEeveeGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_33_2.4bpp.lz");
static const ax_sprite sEeveeSprites33[] = {
	{sEeveeGfx33, ARRAY_COUNT(sEeveeGfx33)}, 
	{NULL, 32}, 
	{sEeveeGfx33_1, ARRAY_COUNT(sEeveeGfx33_1)}, 
	{NULL, 32}, 
	{sEeveeGfx33_2, ARRAY_COUNT(sEeveeGfx33_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_34.4bpp.lz");
static const u8 sEeveeGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_34_1.4bpp.lz");
static const u8 sEeveeGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_34_2.4bpp.lz");
static const ax_sprite sEeveeSprites34[] = {
	{sEeveeGfx34, ARRAY_COUNT(sEeveeGfx34)}, 
	{NULL, 32}, 
	{sEeveeGfx34_1, ARRAY_COUNT(sEeveeGfx34_1)}, 
	{NULL, 32}, 
	{sEeveeGfx34_2, ARRAY_COUNT(sEeveeGfx34_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_35.4bpp.lz");
static const u8 sEeveeGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_35_1.4bpp.lz");
static const u8 sEeveeGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_35_2.4bpp.lz");
static const ax_sprite sEeveeSprites35[] = {
	{sEeveeGfx35, ARRAY_COUNT(sEeveeGfx35)}, 
	{NULL, 32}, 
	{sEeveeGfx35_1, ARRAY_COUNT(sEeveeGfx35_1)}, 
	{NULL, 32}, 
	{sEeveeGfx35_2, ARRAY_COUNT(sEeveeGfx35_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEeveeGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_36.4bpp.lz");
static const ax_sprite sEeveeSprites36[] = {
	{sEeveeGfx36, ARRAY_COUNT(sEeveeGfx36)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_37.4bpp.lz");
static const ax_sprite sEeveeSprites37[] = {
	{sEeveeGfx37, ARRAY_COUNT(sEeveeGfx37)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_38.4bpp.lz");
static const ax_sprite sEeveeSprites38[] = {
	{sEeveeGfx38, ARRAY_COUNT(sEeveeGfx38)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_39.4bpp.lz");
static const ax_sprite sEeveeSprites39[] = {
	{sEeveeGfx39, ARRAY_COUNT(sEeveeGfx39)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_40.4bpp.lz");
static const ax_sprite sEeveeSprites40[] = {
	{sEeveeGfx40, ARRAY_COUNT(sEeveeGfx40)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_41.4bpp.lz");
static const ax_sprite sEeveeSprites41[] = {
	{sEeveeGfx41, ARRAY_COUNT(sEeveeGfx41)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_42.4bpp.lz");
static const ax_sprite sEeveeSprites42[] = {
	{sEeveeGfx42, ARRAY_COUNT(sEeveeGfx42)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_43.4bpp.lz");
static const ax_sprite sEeveeSprites43[] = {
	{sEeveeGfx43, ARRAY_COUNT(sEeveeGfx43)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_44.4bpp.lz");
static const ax_sprite sEeveeSprites44[] = {
	{sEeveeGfx44, ARRAY_COUNT(sEeveeGfx44)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_45.4bpp.lz");
static const ax_sprite sEeveeSprites45[] = {
	{sEeveeGfx45, ARRAY_COUNT(sEeveeGfx45)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_46.4bpp.lz");
static const ax_sprite sEeveeSprites46[] = {
	{sEeveeGfx46, ARRAY_COUNT(sEeveeGfx46)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_47.4bpp.lz");
static const ax_sprite sEeveeSprites47[] = {
	{sEeveeGfx47, ARRAY_COUNT(sEeveeGfx47)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_48.4bpp.lz");
static const ax_sprite sEeveeSprites48[] = {
	{sEeveeGfx48, ARRAY_COUNT(sEeveeGfx48)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_49.4bpp.lz");
static const ax_sprite sEeveeSprites49[] = {
	{sEeveeGfx49, ARRAY_COUNT(sEeveeGfx49)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_50.4bpp.lz");
static const ax_sprite sEeveeSprites50[] = {
	{sEeveeGfx50, ARRAY_COUNT(sEeveeGfx50)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_51.4bpp.lz");
static const ax_sprite sEeveeSprites51[] = {
	{sEeveeGfx51, ARRAY_COUNT(sEeveeGfx51)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_52.4bpp.lz");
static const ax_sprite sEeveeSprites52[] = {
	{sEeveeGfx52, ARRAY_COUNT(sEeveeGfx52)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_53.4bpp.lz");
static const ax_sprite sEeveeSprites53[] = {
	{sEeveeGfx53, ARRAY_COUNT(sEeveeGfx53)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_54.4bpp.lz");
static const ax_sprite sEeveeSprites54[] = {
	{sEeveeGfx54, ARRAY_COUNT(sEeveeGfx54)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_55.4bpp.lz");
static const ax_sprite sEeveeSprites55[] = {
	{sEeveeGfx55, ARRAY_COUNT(sEeveeGfx55)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_56.4bpp.lz");
static const ax_sprite sEeveeSprites56[] = {
	{sEeveeGfx56, ARRAY_COUNT(sEeveeGfx56)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_57.4bpp.lz");
static const ax_sprite sEeveeSprites57[] = {
	{sEeveeGfx57, ARRAY_COUNT(sEeveeGfx57)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_58.4bpp.lz");
static const ax_sprite sEeveeSprites58[] = {
	{sEeveeGfx58, ARRAY_COUNT(sEeveeGfx58)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_59.4bpp.lz");
static const ax_sprite sEeveeSprites59[] = {
	{sEeveeGfx59, ARRAY_COUNT(sEeveeGfx59)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_60.4bpp.lz");
static const ax_sprite sEeveeSprites60[] = {
	{sEeveeGfx60, ARRAY_COUNT(sEeveeGfx60)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_61.4bpp.lz");
static const ax_sprite sEeveeSprites61[] = {
	{sEeveeGfx61, ARRAY_COUNT(sEeveeGfx61)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_62.4bpp.lz");
static const ax_sprite sEeveeSprites62[] = {
	{sEeveeGfx62, ARRAY_COUNT(sEeveeGfx62)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_63.4bpp.lz");
static const ax_sprite sEeveeSprites63[] = {
	{sEeveeGfx63, ARRAY_COUNT(sEeveeGfx63)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_64.4bpp.lz");
static const ax_sprite sEeveeSprites64[] = {
	{sEeveeGfx64, ARRAY_COUNT(sEeveeGfx64)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_65.4bpp.lz");
static const ax_sprite sEeveeSprites65[] = {
	{sEeveeGfx65, ARRAY_COUNT(sEeveeGfx65)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_66.4bpp.lz");
static const ax_sprite sEeveeSprites66[] = {
	{sEeveeGfx66, ARRAY_COUNT(sEeveeGfx66)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_67.4bpp.lz");
static const ax_sprite sEeveeSprites67[] = {
	{sEeveeGfx67, ARRAY_COUNT(sEeveeGfx67)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_68.4bpp.lz");
static const ax_sprite sEeveeSprites68[] = {
	{sEeveeGfx68, ARRAY_COUNT(sEeveeGfx68)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_69.4bpp.lz");
static const ax_sprite sEeveeSprites69[] = {
	{sEeveeGfx69, ARRAY_COUNT(sEeveeGfx69)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_70.4bpp.lz");
static const ax_sprite sEeveeSprites70[] = {
	{sEeveeGfx70, ARRAY_COUNT(sEeveeGfx70)}, 
	{NULL, 0}
};
static const u8 sEeveeGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/eevee/sprite_71.4bpp.lz");
static const ax_sprite sEeveeSprites71[] = {
	{sEeveeGfx71, ARRAY_COUNT(sEeveeGfx71)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesEevee[] = {
	sEeveePose1,
	sEeveePose2,
	sEeveePose3,
	sEeveePose4,
	sEeveePose5,
	sEeveePose6,
	sEeveePose7,
	sEeveePose8,
	sEeveePose9,
	sEeveePose10,
	sEeveePose11,
	sEeveePose12,
	sEeveePose13,
	sEeveePose14,
	sEeveePose15,
	sEeveePose16,
	sEeveePose17,
	sEeveePose18,
	sEeveePose19,
	sEeveePose20,
	sEeveePose21,
	sEeveePose22,
	sEeveePose23,
	sEeveePose24,
	sEeveePose25,
	sEeveePose26,
	sEeveePose27,
	sEeveePose4,
	sEeveePose5,
	sEeveePose30,
	sEeveePose7,
	sEeveePose8,
	sEeveePose9,
	sEeveePose10,
	sEeveePose11,
	sEeveePose36,
	sEeveePose13,
	sEeveePose14,
	sEeveePose15,
	sEeveePose16,
	sEeveePose17,
	sEeveePose42,
	sEeveePose19,
	sEeveePose20,
	sEeveePose21,
	sEeveePose22,
	sEeveePose23,
	sEeveePose48,
	sEeveePose25,
	sEeveePose26,
	sEeveePose27,
	sEeveePose4,
	sEeveePose5,
	sEeveePose30,
	sEeveePose7,
	sEeveePose8,
	sEeveePose9,
	sEeveePose10,
	sEeveePose11,
	sEeveePose36,
	sEeveePose13,
	sEeveePose14,
	sEeveePose15,
	sEeveePose16,
	sEeveePose17,
	sEeveePose42,
	sEeveePose19,
	sEeveePose20,
	sEeveePose21,
	sEeveePose22,
	sEeveePose23,
	sEeveePose48,
	sEeveePose73,
	sEeveePose74,
	sEeveePose75,
	sEeveePose76,
	sEeveePose77,
	sEeveePose78,
	sEeveePose79,
	sEeveePose80,
	sEeveePose81,
	sEeveePose82,
	sEeveePose83,
	sEeveePose84,
	sEeveePose85,
	sEeveePose86,
	sEeveePose87,
	sEeveePose88,
	sEeveePose89,
	sEeveePose90,
	sEeveePose91,
	sEeveePose92,
	sEeveePose93,
	sEeveePose94,
	sEeveePose95,
	sEeveePose96,
	sEeveePose1,
	sEeveePose98,
	sEeveePose99,
	sEeveePose100,
	sEeveePose101,
	sEeveePose102,
	sEeveePose7,
	sEeveePose104,
	sEeveePose105,
	sEeveePose10,
	sEeveePose107,
	sEeveePose108,
	sEeveePose13,
	sEeveePose110,
	sEeveePose111,
	sEeveePose16,
	sEeveePose113,
	sEeveePose114,
	sEeveePose19,
	sEeveePose116,
	sEeveePose117,
	sEeveePose118,
	sEeveePose119,
	sEeveePose120,
	sEeveePose121,
	sEeveePose122,
	sEeveePose123,
	sEeveePose124,
	sEeveePose125,
	sEeveePose126,
	sEeveePose127,
	sEeveePose128,
	sEeveePose129,
	sEeveePose130,
	sEeveePose98,
	sEeveePose99,
	sEeveePose101,
	sEeveePose102,
	sEeveePose104,
	sEeveePose105,
	sEeveePose107,
	sEeveePose108,
	sEeveePose110,
	sEeveePose111,
	sEeveePose113,
	sEeveePose114,
	sEeveePose116,
	sEeveePose117,
	sEeveePose119,
	sEeveePose120,
	sEeveePose1,
	sEeveePose118,
	sEeveePose19,
	sEeveePose16,
	sEeveePose13,
	sEeveePose10,
	sEeveePose7,
	sEeveePose100,
	sEeveePose1,
	sEeveePose100,
	sEeveePose7,
	sEeveePose10,
	sEeveePose13,
	sEeveePose16,
	sEeveePose19,
	sEeveePose118,
	sEeveePose1,
	sEeveePose2,
	sEeveePose3,
	sEeveePose4,
	sEeveePose5,
	sEeveePose6,
	sEeveePose7,
	sEeveePose8,
	sEeveePose9,
	sEeveePose10,
	sEeveePose11,
	sEeveePose36,
	sEeveePose13,
	sEeveePose14,
	sEeveePose15,
	sEeveePose16,
	sEeveePose17,
	sEeveePose42,
	sEeveePose19,
	sEeveePose20,
	sEeveePose21,
	sEeveePose22,
	sEeveePose23,
	sEeveePose24,
	sEeveePose187,
	sEeveePose188,
	sEeveePose76,
	sEeveePose77,
	sEeveePose79,
	sEeveePose80,
	sEeveePose82,
	sEeveePose83,
	sEeveePose85,
	sEeveePose86,
	sEeveePose88,
	sEeveePose89,
	sEeveePose91,
	sEeveePose92,
	sEeveePose94,
	sEeveePose95,
	sEeveePose1,
	sEeveePose118,
	sEeveePose19,
	sEeveePose16,
	sEeveePose13,
	sEeveePose10,
	sEeveePose7,
	sEeveePose100,
	sEeveePose211,
	sEeveePose212,
	sEeveePose213,
	sEeveePose214,
	sEeveePose211,
	sEeveePose216,
	sEeveePose217,
	sEeveePose218,
	sEeveePose7,
	sEeveePose13,
	sEeveePose221,
	sEeveePose222,
	sEeveePose223,
	sEeveePose224,
	sEeveePose223,
	sEeveePose224,
	sEeveePose227,
	sEeveePose228,
	sEeveePose229,
	sEeveePose230,
	sEeveePose231,
	sEeveePose232,
	sEeveePose19,
	sEeveePose234,
	sEeveePose235,
	sEeveePose13,
	sEeveePose237,
	sEeveePose238,
	sEeveePose1,
	sEeveePose240,
	sEeveePose241,
	sEeveePose19,
	sEeveePose243,
	sEeveePose7,
	sEeveePose245,
	sEeveePose13,
	sEeveePose247,
	sEeveePose248,
	sEeveePose249,
	sEeveePose250,
	sEeveePose251,
	sEeveePose252,
	sEeveePose253,
	sEeveePose254,
	sEeveePose255,
	sEeveePose256,
	sEeveePose257,
	sEeveePose258,
	sEeveePose211,
	sEeveePose212,
	sEeveePose213,
	sEeveePose214,
	sEeveePose211,
	sEeveePose212,
	sEeveePose213,
	sEeveePose214,
};

static const struct PositionSets sAxPositionsEevee[] = {
	[0] = { .set = { {0, -7}, {-2, 0}, {2, 0}, {0, -6} } },
	[1] = { .set = { {0, -12}, {-2, -5}, {2, -5}, {0, -10} } },
	[2] = { .set = { {0, 0}, {-3, 3}, {3, 3}, {0, -3} } },
	[3] = { .set = { {6, -8}, {4, -1}, {2, 0}, {0, -7} } },
	[4] = { .set = { {5, -11}, {7, -9}, {2, -8}, {-2, -10} } },
	[5] = { .set = { {6, -5}, {5, -1}, {2, 0}, {0, -6} } },
	[6] = { .set = { {8, -9}, {5, -2}, {3, -1}, {0, -6} } },
	[7] = { .set = { {7, -13}, {8, -12}, {5, -9}, {-3, -10} } },
	[8] = { .set = { {8, -6}, {6, -3}, {3, -1}, {1, -7} } },
	[9] = { .set = { {6, -11}, {1, -5}, {4, -2}, {-2, -6} } },
	[10] = { .set = { {6, -15}, {3, -13}, {8, -11}, {0, -10} } },
	[11] = { .set = { {8, -9}, {3, -4}, {6, -2}, {4, -9} } },
	[12] = { .set = { {0, -13}, {3, -7}, {-3, -7}, {0, -8} } },
	[13] = { .set = { {0, -17}, {3, -13}, {-3, -13}, {0, -9} } },
	[14] = { .set = { {0, -11}, {4, -8}, {-4, -8}, {0, -8} } },
	[15] = { .set = { {-7, -11}, {-2, -5}, {-5, -2}, {1, -6} } },
	[16] = { .set = { {-7, -15}, {-4, -13}, {-9, -11}, {-1, -10} } },
	[17] = { .set = { {-9, -9}, {-4, -4}, {-7, -2}, {-5, -9} } },
	[18] = { .set = { {-9, -9}, {-6, -2}, {-4, -1}, {-1, -6} } },
	[19] = { .set = { {-8, -13}, {-9, -12}, {-6, -9}, {2, -10} } },
	[20] = { .set = { {-9, -6}, {-7, -3}, {-4, -1}, {-2, -7} } },
	[21] = { .set = { {-7, -8}, {-5, -1}, {-3, 0}, {-1, -7} } },
	[22] = { .set = { {-6, -11}, {-8, -9}, {-3, -8}, {1, -10} } },
	[23] = { .set = { {-7, -5}, {-6, -1}, {-3, 0}, {-1, -6} } },
	[24] = { .set = { {-1, -7}, {-3, 0}, {1, 0}, {-1, -6} } },
	[25] = { .set = { {-1, -11}, {-3, -4}, {1, -4}, {-1, -9} } },
	[26] = { .set = { {-1, -6}, {-4, -3}, {2, -3}, {-1, -9} } },
	[27] = { .set = { {6, -8}, {4, -1}, {2, 0}, {0, -7} } },
	[28] = { .set = { {5, -11}, {7, -9}, {2, -8}, {-2, -10} } },
	[29] = { .set = { {6, -8}, {5, -4}, {2, -3}, {0, -9} } },
	[30] = { .set = { {8, -9}, {5, -2}, {3, -1}, {0, -6} } },
	[31] = { .set = { {7, -13}, {8, -12}, {5, -9}, {-3, -10} } },
	[32] = { .set = { {8, -6}, {6, -3}, {3, -1}, {1, -7} } },
	[33] = { .set = { {6, -11}, {1, -5}, {4, -2}, {-2, -6} } },
	[34] = { .set = { {6, -15}, {3, -13}, {8, -11}, {0, -10} } },
	[35] = { .set = { {5, -9}, {0, -4}, {3, -2}, {1, -9} } },
	[36] = { .set = { {0, -13}, {3, -7}, {-3, -7}, {0, -8} } },
	[37] = { .set = { {0, -17}, {3, -13}, {-3, -13}, {0, -9} } },
	[38] = { .set = { {0, -11}, {4, -8}, {-4, -8}, {0, -8} } },
	[39] = { .set = { {-7, -11}, {-2, -5}, {-5, -2}, {1, -6} } },
	[40] = { .set = { {-7, -15}, {-4, -13}, {-9, -11}, {-1, -10} } },
	[41] = { .set = { {-6, -9}, {-1, -4}, {-4, -2}, {-2, -9} } },
	[42] = { .set = { {-9, -9}, {-6, -2}, {-4, -1}, {-1, -6} } },
	[43] = { .set = { {-8, -13}, {-9, -12}, {-6, -9}, {2, -10} } },
	[44] = { .set = { {-9, -6}, {-7, -3}, {-4, -1}, {-2, -7} } },
	[45] = { .set = { {-7, -8}, {-5, -1}, {-3, 0}, {-1, -7} } },
	[46] = { .set = { {-6, -11}, {-8, -9}, {-3, -8}, {1, -10} } },
	[47] = { .set = { {-7, -8}, {-6, -4}, {-3, -3}, {-1, -9} } },
	[48] = { .set = { {-1, -7}, {-3, 0}, {1, 0}, {-1, -6} } },
	[49] = { .set = { {-1, -11}, {-3, -4}, {1, -4}, {-1, -9} } },
	[50] = { .set = { {-1, -6}, {-4, -3}, {2, -3}, {-1, -9} } },
	[51] = { .set = { {6, -8}, {4, -1}, {2, 0}, {0, -7} } },
	[52] = { .set = { {5, -11}, {7, -9}, {2, -8}, {-2, -10} } },
	[53] = { .set = { {6, -8}, {5, -4}, {2, -3}, {0, -9} } },
	[54] = { .set = { {8, -9}, {5, -2}, {3, -1}, {0, -6} } },
	[55] = { .set = { {7, -13}, {8, -12}, {5, -9}, {-3, -10} } },
	[56] = { .set = { {8, -6}, {6, -3}, {3, -1}, {1, -7} } },
	[57] = { .set = { {6, -11}, {1, -5}, {4, -2}, {-2, -6} } },
	[58] = { .set = { {6, -15}, {3, -13}, {8, -11}, {0, -10} } },
	[59] = { .set = { {5, -9}, {0, -4}, {3, -2}, {1, -9} } },
	[60] = { .set = { {0, -13}, {3, -7}, {-3, -7}, {0, -8} } },
	[61] = { .set = { {0, -17}, {3, -13}, {-3, -13}, {0, -9} } },
	[62] = { .set = { {0, -11}, {4, -8}, {-4, -8}, {0, -8} } },
	[63] = { .set = { {-7, -11}, {-2, -5}, {-5, -2}, {1, -6} } },
	[64] = { .set = { {-7, -15}, {-4, -13}, {-9, -11}, {-1, -10} } },
	[65] = { .set = { {-6, -9}, {-1, -4}, {-4, -2}, {-2, -9} } },
	[66] = { .set = { {-9, -9}, {-6, -2}, {-4, -1}, {-1, -6} } },
	[67] = { .set = { {-8, -13}, {-9, -12}, {-6, -9}, {2, -10} } },
	[68] = { .set = { {-9, -6}, {-7, -3}, {-4, -1}, {-2, -7} } },
	[69] = { .set = { {-7, -8}, {-5, -1}, {-3, 0}, {-1, -7} } },
	[70] = { .set = { {-6, -11}, {-8, -9}, {-3, -8}, {1, -10} } },
	[71] = { .set = { {-7, -8}, {-6, -4}, {-3, -3}, {-1, -9} } },
	[72] = { .set = { {-1, -10}, {-5, 1}, {2, -1}, {-1, -5} } },
	[73] = { .set = { {-1, -9}, {-5, 1}, {2, -1}, {-1, -5} } },
	[74] = { .set = { {-1, -3}, {-4, 0}, {2, 0}, {-1, -6} } },
	[75] = { .set = { {5, -10}, {5, 0}, {-2, -1}, {-2, -7} } },
	[76] = { .set = { {5, -9}, {5, 0}, {-2, -1}, {-2, -7} } },
	[77] = { .set = { {6, -3}, {5, 1}, {2, 2}, {0, -4} } },
	[78] = { .set = { {8, -11}, {7, -2}, {2, 0}, {-1, -6} } },
	[79] = { .set = { {8, -10}, {7, -2}, {2, 0}, {-1, -6} } },
	[80] = { .set = { {7, -9}, {4, -2}, {2, -1}, {-1, -6} } },
	[81] = { .set = { {6, -12}, {-1, -4}, {2, -2}, {-2, -8} } },
	[82] = { .set = { {6, -11}, {-1, -4}, {2, -2}, {-2, -7} } },
	[83] = { .set = { {3, -9}, {0, -7}, {5, -5}, {-3, -4} } },
	[84] = { .set = { {0, -13}, {3, -7}, {-2, -8}, {0, -7} } },
	[85] = { .set = { {0, -12}, {3, -7}, {-3, -8}, {1, -7} } },
	[86] = { .set = { {0, -12}, {3, -8}, {-3, -8}, {0, -4} } },
	[87] = { .set = { {-7, -12}, {0, -4}, {-3, -2}, {1, -8} } },
	[88] = { .set = { {-7, -11}, {0, -4}, {-3, -2}, {1, -7} } },
	[89] = { .set = { {-4, -9}, {-1, -7}, {-6, -5}, {2, -4} } },
	[90] = { .set = { {-9, -11}, {-8, -2}, {-3, 0}, {0, -6} } },
	[91] = { .set = { {-9, -10}, {-8, -2}, {-3, 0}, {0, -6} } },
	[92] = { .set = { {-8, -9}, {-5, -2}, {-3, -1}, {0, -6} } },
	[93] = { .set = { {-6, -10}, {-6, 0}, {1, -1}, {1, -7} } },
	[94] = { .set = { {-6, -9}, {-6, 0}, {1, -1}, {1, -7} } },
	[95] = { .set = { {-7, -3}, {-6, 1}, {-3, 2}, {-1, -4} } },
	[96] = { .set = { {0, -7}, {-2, 0}, {2, 0}, {0, -6} } },
	[97] = { .set = { {0, -6}, {-2, 0}, {2, 0}, {0, -4} } },
	[98] = { .set = { {0, -6}, {-2, 0}, {2, 0}, {0, -4} } },
	[99] = { .set = { {5, -8}, {3, -1}, {1, 0}, {-1, -7} } },
	[100] = { .set = { {5, -7}, {3, -1}, {0, 0}, {-1, -6} } },
	[101] = { .set = { {5, -7}, {4, -1}, {0, 0}, {-1, -6} } },
	[102] = { .set = { {8, -9}, {5, -2}, {3, -1}, {0, -6} } },
	[103] = { .set = { {8, -8}, {5, -3}, {3, -1}, {-1, -5} } },
	[104] = { .set = { {8, -8}, {5, -3}, {3, -1}, {-1, -4} } },
	[105] = { .set = { {6, -11}, {1, -5}, {4, -2}, {-2, -6} } },
	[106] = { .set = { {7, -10}, {1, -4}, {4, -2}, {-1, -6} } },
	[107] = { .set = { {7, -10}, {1, -4}, {4, -2}, {-1, -6} } },
	[108] = { .set = { {0, -13}, {3, -7}, {-3, -7}, {0, -8} } },
	[109] = { .set = { {0, -11}, {3, -6}, {-2, -7}, {0, -6} } },
	[110] = { .set = { {0, -11}, {2, -7}, {-2, -7}, {1, -5} } },
	[111] = { .set = { {-7, -11}, {-2, -5}, {-5, -2}, {1, -6} } },
	[112] = { .set = { {-8, -10}, {-2, -4}, {-5, -2}, {0, -6} } },
	[113] = { .set = { {-8, -10}, {-2, -4}, {-5, -2}, {0, -6} } },
	[114] = { .set = { {-9, -9}, {-6, -2}, {-4, -1}, {-1, -6} } },
	[115] = { .set = { {-9, -8}, {-6, -3}, {-4, -1}, {0, -5} } },
	[116] = { .set = { {-9, -8}, {-6, -3}, {-4, -1}, {0, -4} } },
	[117] = { .set = { {-6, -8}, {-4, -1}, {-2, 0}, {0, -7} } },
	[118] = { .set = { {-6, -7}, {-4, -1}, {-1, 0}, {0, -6} } },
	[119] = { .set = { {-6, -7}, {-5, -1}, {-1, 0}, {0, -6} } },
	[120] = { .set = { {-6, -7}, {-7, -1}, {-5, 0}, {0, -5} } },
	[121] = { .set = { {-6, -6}, {-7, -1}, {-5, 0}, {1, -4} } },
	[122] = { .set = { {0, -4}, {-4, 1}, {4, 1}, {0, -8} } },
	[123] = { .set = { {4, -4}, {8, -1}, {3, 0}, {-1, -6} } },
	[124] = { .set = { {8, -5}, {9, -3}, {9, 0}, {1, -4} } },
	[125] = { .set = { {6, -8}, {4, -5}, {8, -3}, {0, -6} } },
	[126] = { .set = { {0, -10}, {4, -5}, {-3, -5}, {0, -5} } },
	[127] = { .set = { {-7, -8}, {-5, -5}, {-9, -3}, {-1, -6} } },
	[128] = { .set = { {-9, -5}, {-10, -3}, {-10, 0}, {-2, -4} } },
	[129] = { .set = { {-5, -4}, {-9, -1}, {-4, 0}, {0, -6} } },
	[130] = { .set = { {0, -6}, {-2, 0}, {2, 0}, {0, -4} } },
	[131] = { .set = { {0, -6}, {-2, 0}, {2, 0}, {0, -4} } },
	[132] = { .set = { {5, -7}, {3, -1}, {0, 0}, {-1, -6} } },
	[133] = { .set = { {5, -7}, {4, -1}, {0, 0}, {-1, -6} } },
	[134] = { .set = { {8, -8}, {5, -3}, {3, -1}, {-1, -5} } },
	[135] = { .set = { {8, -8}, {5, -3}, {3, -1}, {-1, -4} } },
	[136] = { .set = { {7, -10}, {1, -4}, {4, -2}, {-1, -6} } },
	[137] = { .set = { {7, -10}, {1, -4}, {4, -2}, {-1, -6} } },
	[138] = { .set = { {0, -11}, {3, -6}, {-2, -7}, {0, -6} } },
	[139] = { .set = { {0, -11}, {2, -7}, {-2, -7}, {1, -5} } },
	[140] = { .set = { {-8, -10}, {-2, -4}, {-5, -2}, {0, -6} } },
	[141] = { .set = { {-8, -10}, {-2, -4}, {-5, -2}, {0, -6} } },
	[142] = { .set = { {-9, -8}, {-6, -3}, {-4, -1}, {0, -5} } },
	[143] = { .set = { {-9, -8}, {-6, -3}, {-4, -1}, {0, -4} } },
	[144] = { .set = { {-6, -7}, {-4, -1}, {-1, 0}, {0, -6} } },
	[145] = { .set = { {-6, -7}, {-5, -1}, {-1, 0}, {0, -6} } },
	[146] = { .set = { {0, -7}, {-2, 0}, {2, 0}, {0, -6} } },
	[147] = { .set = { {-6, -8}, {-4, -1}, {-2, 0}, {0, -7} } },
	[148] = { .set = { {-9, -9}, {-6, -2}, {-4, -1}, {-1, -6} } },
	[149] = { .set = { {-7, -11}, {-2, -5}, {-5, -2}, {1, -6} } },
	[150] = { .set = { {0, -13}, {3, -7}, {-3, -7}, {0, -8} } },
	[151] = { .set = { {6, -11}, {1, -5}, {4, -2}, {-2, -6} } },
	[152] = { .set = { {8, -9}, {5, -2}, {3, -1}, {0, -6} } },
	[153] = { .set = { {5, -8}, {3, -1}, {1, 0}, {-1, -7} } },
	[154] = { .set = { {0, -7}, {-2, 0}, {2, 0}, {0, -6} } },
	[155] = { .set = { {5, -8}, {3, -1}, {1, 0}, {-1, -7} } },
	[156] = { .set = { {8, -9}, {5, -2}, {3, -1}, {0, -6} } },
	[157] = { .set = { {6, -11}, {1, -5}, {4, -2}, {-2, -6} } },
	[158] = { .set = { {0, -13}, {3, -7}, {-3, -7}, {0, -8} } },
	[159] = { .set = { {-7, -11}, {-2, -5}, {-5, -2}, {1, -6} } },
	[160] = { .set = { {-9, -9}, {-6, -2}, {-4, -1}, {-1, -6} } },
	[161] = { .set = { {-6, -8}, {-4, -1}, {-2, 0}, {0, -7} } },
	[162] = { .set = { {0, -7}, {-2, 0}, {2, 0}, {0, -6} } },
	[163] = { .set = { {0, -12}, {-2, -5}, {2, -5}, {0, -10} } },
	[164] = { .set = { {0, 0}, {-3, 3}, {3, 3}, {0, -3} } },
	[165] = { .set = { {6, -8}, {4, -1}, {2, 0}, {0, -7} } },
	[166] = { .set = { {5, -11}, {7, -9}, {2, -8}, {-2, -10} } },
	[167] = { .set = { {6, -5}, {5, -1}, {2, 0}, {0, -6} } },
	[168] = { .set = { {8, -9}, {5, -2}, {3, -1}, {0, -6} } },
	[169] = { .set = { {7, -13}, {8, -12}, {5, -9}, {-3, -10} } },
	[170] = { .set = { {8, -6}, {6, -3}, {3, -1}, {1, -7} } },
	[171] = { .set = { {6, -11}, {1, -5}, {4, -2}, {-2, -6} } },
	[172] = { .set = { {6, -15}, {3, -13}, {8, -11}, {0, -10} } },
	[173] = { .set = { {5, -9}, {0, -4}, {3, -2}, {1, -9} } },
	[174] = { .set = { {0, -13}, {3, -7}, {-3, -7}, {0, -8} } },
	[175] = { .set = { {0, -17}, {3, -13}, {-3, -13}, {0, -9} } },
	[176] = { .set = { {0, -11}, {4, -8}, {-4, -8}, {0, -8} } },
	[177] = { .set = { {-7, -11}, {-2, -5}, {-5, -2}, {1, -6} } },
	[178] = { .set = { {-7, -15}, {-4, -13}, {-9, -11}, {-1, -10} } },
	[179] = { .set = { {-6, -9}, {-1, -4}, {-4, -2}, {-2, -9} } },
	[180] = { .set = { {-9, -9}, {-6, -2}, {-4, -1}, {-1, -6} } },
	[181] = { .set = { {-8, -13}, {-9, -12}, {-6, -9}, {2, -10} } },
	[182] = { .set = { {-9, -6}, {-7, -3}, {-4, -1}, {-2, -7} } },
	[183] = { .set = { {-7, -8}, {-5, -1}, {-3, 0}, {-1, -7} } },
	[184] = { .set = { {-6, -11}, {-8, -9}, {-3, -8}, {1, -10} } },
	[185] = { .set = { {-7, -5}, {-6, -1}, {-3, 0}, {-1, -6} } },
	[186] = { .set = { {0, -10}, {-4, 1}, {3, -1}, {0, -5} } },
	[187] = { .set = { {0, -9}, {-4, 1}, {3, -1}, {0, -5} } },
	[188] = { .set = { {5, -10}, {5, 0}, {-2, -1}, {-2, -7} } },
	[189] = { .set = { {5, -9}, {5, 0}, {-2, -1}, {-2, -7} } },
	[190] = { .set = { {8, -11}, {7, -2}, {2, 0}, {-1, -6} } },
	[191] = { .set = { {8, -10}, {7, -2}, {2, 0}, {-1, -6} } },
	[192] = { .set = { {6, -12}, {-1, -4}, {2, -2}, {-2, -8} } },
	[193] = { .set = { {6, -11}, {-1, -4}, {2, -2}, {-2, -7} } },
	[194] = { .set = { {0, -13}, {3, -7}, {-2, -8}, {0, -7} } },
	[195] = { .set = { {0, -12}, {3, -7}, {-3, -8}, {1, -7} } },
	[196] = { .set = { {-7, -12}, {0, -4}, {-3, -2}, {1, -8} } },
	[197] = { .set = { {-7, -11}, {0, -4}, {-3, -2}, {1, -7} } },
	[198] = { .set = { {-9, -11}, {-8, -2}, {-3, 0}, {0, -6} } },
	[199] = { .set = { {-9, -10}, {-8, -2}, {-3, 0}, {0, -6} } },
	[200] = { .set = { {-6, -10}, {-6, 0}, {1, -1}, {1, -7} } },
	[201] = { .set = { {-6, -9}, {-6, 0}, {1, -1}, {1, -7} } },
	[202] = { .set = { {0, -7}, {-2, 0}, {2, 0}, {0, -6} } },
	[203] = { .set = { {-6, -8}, {-4, -1}, {-2, 0}, {0, -7} } },
	[204] = { .set = { {-9, -9}, {-6, -2}, {-4, -1}, {-1, -6} } },
	[205] = { .set = { {-7, -11}, {-2, -5}, {-5, -2}, {1, -6} } },
	[206] = { .set = { {0, -13}, {3, -7}, {-3, -7}, {0, -8} } },
	[207] = { .set = { {6, -11}, {1, -5}, {4, -2}, {-2, -6} } },
	[208] = { .set = { {8, -9}, {5, -2}, {3, -1}, {0, -6} } },
	[209] = { .set = { {5, -8}, {3, -1}, {1, 0}, {-1, -7} } },
	[210] = { .set = { {7, -6}, {5, -2}, {4, -1}, {-1, -5} } },
	[211] = { .set = { {7, -7}, {5, -2}, {4, -1}, {-1, -5} } },
	[212] = { .set = { {-8, -6}, {-6, -2}, {-5, -1}, {0, -5} } },
	[213] = { .set = { {-8, -7}, {-6, -2}, {-5, -1}, {0, -5} } },
	[214] = { .set = { {7, -6}, {5, -2}, {4, -1}, {-1, -5} } },
	[215] = { .set = { {6, -8}, {5, -3}, {5, -1}, {-1, -6} } },
	[216] = { .set = { {5, -10}, {4, -3}, {4, -1}, {-2, -6} } },
	[217] = { .set = { {7, -7}, {4, -3}, {2, -1}, {-1, -6} } },
	[218] = { .set = { {8, -9}, {5, -2}, {3, -1}, {0, -6} } },
	[219] = { .set = { {0, -13}, {3, -7}, {-3, -7}, {0, -8} } },
	[220] = { .set = { {0, -10}, {4, -3}, {-4, -3}, {0, -8} } },
	[221] = { .set = { {0, -9}, {5, -3}, {-5, -3}, {0, -8} } },
	[222] = { .set = { {0, -4}, {-4, 0}, {4, 0}, {0, -3} } },
	[223] = { .set = { {0, -11}, {-4, 0}, {4, 0}, {0, -7} } },
	[224] = { .set = { {0, -4}, {-4, 0}, {4, 0}, {0, -3} } },
	[225] = { .set = { {0, -11}, {-4, 0}, {4, 0}, {0, -7} } },
	[226] = { .set = { {0, -4}, {-4, 0}, {4, 0}, {0, -7} } },
	[227] = { .set = { {-1, -5}, {2, -1}, {-4, -1}, {-1, -6} } },
	[228] = { .set = { {-1, -9}, {3, -2}, {-8, -7}, {-1, -6} } },
	[229] = { .set = { {0, -7}, {-4, 0}, {4, 0}, {0, -6} } },
	[230] = { .set = { {0, -6}, {-4, 1}, {3, 0}, {0, -5} } },
	[231] = { .set = { {0, -6}, {-3, 0}, {4, 1}, {0, -5} } },
	[232] = { .set = { {-9, -9}, {-6, -2}, {-4, -1}, {-1, -6} } },
	[233] = { .set = { {-9, -7}, {-7, -1}, {-2, -3}, {0, -6} } },
	[234] = { .set = { {-8, -6}, {-9, 0}, {-1, -5}, {-2, -5} } },
	[235] = { .set = { {0, -13}, {3, -7}, {-3, -7}, {0, -8} } },
	[236] = { .set = { {0, -10}, {5, -5}, {-5, -5}, {0, -8} } },
	[237] = { .set = { {0, -9}, {6, -7}, {-6, -7}, {0, -6} } },
	[238] = { .set = { {0, -7}, {-2, 0}, {2, 0}, {0, -6} } },
	[239] = { .set = { {0, -10}, {-2, 0}, {2, 0}, {0, -6} } },
	[240] = { .set = { {0, -5}, {-2, 0}, {2, 0}, {0, -8} } },
	[241] = { .set = { {-9, -9}, {-6, -2}, {-4, -1}, {-1, -6} } },
	[242] = { .set = { {-6, -5}, {-5, -2}, {-4, -1}, {-1, -6} } },
	[243] = { .set = { {8, -9}, {5, -2}, {3, -1}, {0, -6} } },
	[244] = { .set = { {5, -5}, {4, -2}, {3, -1}, {0, -6} } },
	[245] = { .set = { {0, -13}, {3, -7}, {-3, -7}, {0, -8} } },
	[246] = { .set = { {0, -10}, {6, -7}, {-6, -7}, {0, -3} } },
	[247] = { .set = { {-9, -7}, {-6, -2}, {-4, -1}, {-2, -7} } },
	[248] = { .set = { {-8, -8}, {-12, -6}, {-3, -1}, {-2, -7} } },
	[249] = { .set = { {-9, -6}, {-12, -2}, {-3, 0}, {-2, -6} } },
	[250] = { .set = { {-10, -9}, {-10, -5}, {-4, -2}, {-3, -7} } },
	[251] = { .set = { {-11, -8}, {-4, -2}, {-10, -1}, {-3, -6} } },
	[252] = { .set = { {8, -7}, {5, -2}, {3, -1}, {1, -7} } },
	[253] = { .set = { {7, -8}, {11, -6}, {2, -1}, {1, -7} } },
	[254] = { .set = { {8, -6}, {11, -2}, {2, 0}, {1, -6} } },
	[255] = { .set = { {9, -9}, {9, -5}, {3, -2}, {2, -7} } },
	[256] = { .set = { {10, -8}, {3, -2}, {9, -1}, {2, -6} } },
	[257] = { .set = { {1, -9}, {0, -13}, {6, -8}, {-2, -7} } },
	[258] = { .set = { {7, -6}, {5, -2}, {4, -1}, {-1, -5} } },
	[259] = { .set = { {7, -7}, {5, -2}, {4, -1}, {-1, -5} } },
	[260] = { .set = { {-8, -6}, {-6, -2}, {-5, -1}, {0, -5} } },
	[261] = { .set = { {-8, -7}, {-6, -2}, {-5, -1}, {0, -5} } },
	[262] = { .set = { {7, -6}, {5, -2}, {4, -1}, {-1, -5} } },
	[263] = { .set = { {7, -7}, {5, -2}, {4, -1}, {-1, -5} } },
	[264] = { .set = { {-8, -6}, {-6, -2}, {-5, -1}, {0, -5} } },
	[265] = { .set = { {-8, -7}, {-6, -2}, {-5, -1}, {0, -5} } },
};

static const ax_anim *const sEeveeAnimTable1[] = {
	sEeveeAnims_1_1,
	sEeveeAnims_1_2,
	sEeveeAnims_1_3,
	sEeveeAnims_1_4,
	sEeveeAnims_1_5,
	sEeveeAnims_1_6,
	sEeveeAnims_1_7,
	sEeveeAnims_1_8,
};

static const ax_anim *const sEeveeAnimTable2[] = {
	sEeveeAnims_2_1,
	sEeveeAnims_2_2,
	sEeveeAnims_2_3,
	sEeveeAnims_2_4,
	sEeveeAnims_2_5,
	sEeveeAnims_2_6,
	sEeveeAnims_2_7,
	sEeveeAnims_2_8,
};

static const ax_anim *const sEeveeAnimTable3[] = {
	sEeveeAnims_3_1,
	sEeveeAnims_3_2,
	sEeveeAnims_3_3,
	sEeveeAnims_3_4,
	sEeveeAnims_3_5,
	sEeveeAnims_3_6,
	sEeveeAnims_3_7,
	sEeveeAnims_3_8,
};

static const ax_anim *const sEeveeAnimTable4[] = {
	sEeveeAnims_4_1,
	sEeveeAnims_4_2,
	sEeveeAnims_4_3,
	sEeveeAnims_4_4,
	sEeveeAnims_4_5,
	sEeveeAnims_4_6,
	sEeveeAnims_4_7,
	sEeveeAnims_4_8,
};

static const ax_anim *const sEeveeAnimTable5[] = {
	sEeveeAnims_5_1,
	sEeveeAnims_5_2,
	sEeveeAnims_5_3,
	sEeveeAnims_5_4,
	sEeveeAnims_5_5,
	sEeveeAnims_5_6,
	sEeveeAnims_5_7,
	sEeveeAnims_5_8,
};

static const ax_anim *const sEeveeAnimTable6[] = {
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
};

static const ax_anim *const sEeveeAnimTable7[] = {
	gAxSharedAnim_00331,
	gAxSharedAnim_00341,
	gAxSharedAnim_00349,
	gAxSharedAnim_00357,
	gAxSharedAnim_00369,
	gAxSharedAnim_00377,
	gAxSharedAnim_00384,
	gAxSharedAnim_00391,
};

static const ax_anim *const sEeveeAnimTable8[] = {
	gAxSharedAnim_00135,
	gAxSharedAnim_00136,
	gAxSharedAnim_00137,
	gAxSharedAnim_00139,
	gAxSharedAnim_00140,
	gAxSharedAnim_00141,
	gAxSharedAnim_00142,
	gAxSharedAnim_00143,
};

static const ax_anim *const sEeveeAnimTable9[] = {
	gAxSharedAnim_00538,
	gAxSharedAnim_00598,
	gAxSharedAnim_00591,
	gAxSharedAnim_00582,
	gAxSharedAnim_00571,
	gAxSharedAnim_00561,
	gAxSharedAnim_00554,
	gAxSharedAnim_00545,
};

static const ax_anim *const sEeveeAnimTable10[] = {
	gAxSharedAnim_00612,
	gAxSharedAnim_00622,
	gAxSharedAnim_00632,
	gAxSharedAnim_00642,
	gAxSharedAnim_00651,
	gAxSharedAnim_00660,
	gAxSharedAnim_00675,
	gAxSharedAnim_00686,
};

static const ax_anim *const sEeveeAnimTable11[] = {
	gAxSharedAnim_00697,
	gAxSharedAnim_00736,
	gAxSharedAnim_00768,
	gAxSharedAnim_00812,
	gAxSharedAnim_00847,
	gAxSharedAnim_00887,
	gAxSharedAnim_00929,
	gAxSharedAnim_00963,
};

static const ax_anim *const sEeveeAnimTable12[] = {
	gAxSharedAnim_01030,
	sEeveeAnims_12_2,
	sEeveeAnims_12_3,
	gAxSharedAnim_01116,
	gAxSharedAnim_01159,
	gAxSharedAnim_01181,
	gAxSharedAnim_01195,
	gAxSharedAnim_01222,
};

static const ax_anim *const sEeveeAnimTable13[] = {
	gAxSharedAnim_01242,
	gAxSharedAnim_01323,
	gAxSharedAnim_01314,
	gAxSharedAnim_01301,
	gAxSharedAnim_01286,
	gAxSharedAnim_01278,
	gAxSharedAnim_01267,
	gAxSharedAnim_01253,
};

static const ax_anim *const sEeveeAnimTable14[] = {
	gAxSharedAnim_02388,
	gAxSharedAnim_02388,
	gAxSharedAnim_02388,
	gAxSharedAnim_02388,
	gAxSharedAnim_02388,
	gAxSharedAnim_02388,
	gAxSharedAnim_02388,
	gAxSharedAnim_02388,
};

static const ax_anim *const sEeveeAnimTable15[] = {
	sEeveeAnims_15_1,
	sEeveeAnims_15_1,
	sEeveeAnims_15_1,
	sEeveeAnims_15_1,
	sEeveeAnims_15_1,
	sEeveeAnims_15_1,
	sEeveeAnims_15_1,
	sEeveeAnims_15_1,
};

static const ax_anim *const sEeveeAnimTable16[] = {
	gAxSharedAnim_02667,
	gAxSharedAnim_02667,
	gAxSharedAnim_02667,
	gAxSharedAnim_02667,
	gAxSharedAnim_02667,
	gAxSharedAnim_02667,
	gAxSharedAnim_02667,
	gAxSharedAnim_02667,
};

static const ax_anim *const sEeveeAnimTable17[] = {
	gAxSharedAnim_00105,
	gAxSharedAnim_00105,
	gAxSharedAnim_00105,
	gAxSharedAnim_00105,
	gAxSharedAnim_00105,
	gAxSharedAnim_00105,
	gAxSharedAnim_00105,
	gAxSharedAnim_00105,
};

static const ax_anim *const sEeveeAnimTable18[] = {
	sEeveeAnims_18_1,
	sEeveeAnims_18_1,
	sEeveeAnims_18_1,
	sEeveeAnims_18_1,
	sEeveeAnims_18_5,
	sEeveeAnims_18_1,
	sEeveeAnims_18_1,
	sEeveeAnims_18_1,
};

static const ax_anim *const sEeveeAnimTable19[] = {
	sEeveeAnims_19_1,
	sEeveeAnims_19_1,
	sEeveeAnims_19_1,
	sEeveeAnims_19_1,
	sEeveeAnims_19_1,
	sEeveeAnims_19_1,
	sEeveeAnims_19_1,
	sEeveeAnims_19_1,
};

static const ax_anim *const sEeveeAnimTable20[] = {
	sEeveeAnims_20_1,
	sEeveeAnims_20_2,
	sEeveeAnims_20_2,
	sEeveeAnims_20_2,
	sEeveeAnims_20_2,
	sEeveeAnims_20_2,
	sEeveeAnims_20_2,
	sEeveeAnims_20_2,
};

static const ax_anim *const sEeveeAnimTable21[] = {
	sEeveeAnims_21_1,
	sEeveeAnims_21_1,
	sEeveeAnims_21_1,
	sEeveeAnims_21_1,
	sEeveeAnims_21_1,
	sEeveeAnims_21_1,
	sEeveeAnims_21_1,
	sEeveeAnims_21_1,
};

static const ax_anim *const sEeveeAnimTable22[] = {
	sEeveeAnims_22_1,
	sEeveeAnims_22_1,
	sEeveeAnims_22_1,
	sEeveeAnims_22_1,
	sEeveeAnims_22_1,
	sEeveeAnims_22_1,
	sEeveeAnims_22_1,
	sEeveeAnims_22_1,
};

static const ax_anim *const sEeveeAnimTable23[] = {
	sEeveeAnims_23_1,
	sEeveeAnims_23_1,
	sEeveeAnims_23_3,
	sEeveeAnims_23_1,
	sEeveeAnims_23_1,
	sEeveeAnims_23_1,
	sEeveeAnims_23_1,
	sEeveeAnims_23_1,
};

static const ax_anim *const sEeveeAnimTable24[] = {
	sEeveeAnims_24_1,
	sEeveeAnims_24_1,
	sEeveeAnims_24_1,
	sEeveeAnims_24_1,
	sEeveeAnims_24_1,
	sEeveeAnims_24_1,
	sEeveeAnims_24_1,
	sEeveeAnims_24_1,
};

static const ax_anim *const sEeveeAnimTable25[] = {
	sEeveeAnims_25_1,
	sEeveeAnims_25_1,
	sEeveeAnims_25_1,
	sEeveeAnims_25_1,
	sEeveeAnims_25_1,
	sEeveeAnims_25_1,
	gAxSharedAnim_00077,
	gAxSharedAnim_00077,
};

static const ax_anim *const sEeveeAnimTable26[] = {
	sEeveeAnims_26_1,
	sEeveeAnims_26_1,
	sEeveeAnims_26_1,
	sEeveeAnims_26_1,
	sEeveeAnims_26_1,
	sEeveeAnims_26_1,
	sEeveeAnims_26_1,
	sEeveeAnims_26_1,
};

static const ax_anim *const sEeveeAnimTable27[] = {
	sEeveeAnims_27_1,
	sEeveeAnims_27_1,
	sEeveeAnims_27_1,
	sEeveeAnims_27_1,
	sEeveeAnims_27_1,
	sEeveeAnims_27_1,
	sEeveeAnims_27_1,
	sEeveeAnims_27_1,
};

static const ax_anim *const sEeveeAnimTable28[] = {
	sEeveeAnims_28_1,
	sEeveeAnims_28_1,
	sEeveeAnims_28_3,
	sEeveeAnims_28_1,
	sEeveeAnims_28_1,
	sEeveeAnims_28_1,
	sEeveeAnims_28_1,
	sEeveeAnims_28_1,
};

static const ax_anim *const *const sAxAnimationsEevee[] = {
	sEeveeAnimTable1,
	sEeveeAnimTable2,
	sEeveeAnimTable3,
	sEeveeAnimTable4,
	sEeveeAnimTable5,
	sEeveeAnimTable6,
	sEeveeAnimTable7,
	sEeveeAnimTable8,
	sEeveeAnimTable9,
	sEeveeAnimTable10,
	sEeveeAnimTable11,
	sEeveeAnimTable12,
	sEeveeAnimTable13,
	sEeveeAnimTable14,
	sEeveeAnimTable15,
	sEeveeAnimTable16,
	sEeveeAnimTable17,
	sEeveeAnimTable18,
	sEeveeAnimTable19,
	sEeveeAnimTable20,
	sEeveeAnimTable21,
	sEeveeAnimTable22,
	sEeveeAnimTable23,
	sEeveeAnimTable24,
	sEeveeAnimTable25,
	sEeveeAnimTable26,
	sEeveeAnimTable27,
	sEeveeAnimTable28,
};

static const ax_sprite *const sAxSpritesEevee[] = {
	sEeveeSprites1,
	sEeveeSprites2,
	sEeveeSprites3,
	sEeveeSprites4,
	sEeveeSprites5,
	sEeveeSprites6,
	sEeveeSprites7,
	sEeveeSprites8,
	sEeveeSprites9,
	sEeveeSprites10,
	sEeveeSprites11,
	sEeveeSprites12,
	sEeveeSprites13,
	sEeveeSprites14,
	sEeveeSprites15,
	sEeveeSprites16,
	sEeveeSprites17,
	sEeveeSprites18,
	sEeveeSprites19,
	sEeveeSprites20,
	sEeveeSprites21,
	sEeveeSprites22,
	sEeveeSprites23,
	sEeveeSprites24,
	sEeveeSprites25,
	sEeveeSprites26,
	sEeveeSprites27,
	sEeveeSprites28,
	sEeveeSprites29,
	sEeveeSprites30,
	sEeveeSprites31,
	sEeveeSprites32,
	sEeveeSprites33,
	sEeveeSprites34,
	sEeveeSprites35,
	sEeveeSprites36,
	sEeveeSprites37,
	sEeveeSprites38,
	sEeveeSprites39,
	sEeveeSprites40,
	sEeveeSprites41,
	sEeveeSprites42,
	sEeveeSprites43,
	sEeveeSprites44,
	sEeveeSprites45,
	sEeveeSprites46,
	sEeveeSprites47,
	sEeveeSprites48,
	sEeveeSprites49,
	sEeveeSprites50,
	sEeveeSprites51,
	sEeveeSprites52,
	sEeveeSprites53,
	sEeveeSprites54,
	sEeveeSprites55,
	sEeveeSprites56,
	sEeveeSprites57,
	sEeveeSprites58,
	sEeveeSprites59,
	sEeveeSprites60,
	sEeveeSprites61,
	sEeveeSprites62,
	sEeveeSprites63,
	sEeveeSprites64,
	sEeveeSprites65,
	sEeveeSprites66,
	sEeveeSprites67,
	sEeveeSprites68,
	sEeveeSprites69,
	sEeveeSprites70,
	sEeveeSprites71,
};

static const axmain sAxMainEevee = {
	.poses = sAxPosesEevee,
	.animations = sAxAnimationsEevee,
	.animCount = ARRAY_COUNT(sAxAnimationsEevee),
	.spriteData = sAxSpritesEevee,
	.positions = sAxPositionsEevee,
};
