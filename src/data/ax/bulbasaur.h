/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainBulbasaur;
const SiroArchive gAxBulbasaur = {"SIRO", &sAxMainBulbasaur};

static const ax_pose sBulbasaurPose1[] = {
	AX_POSE(0, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose2[] = {
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose3[] = {
	AX_POSE(2, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose4[] = {
	AX_POSE(3, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose5[] = {
	AX_POSE(4, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose6[] = {
	AX_POSE(5, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose7[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose8[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose9[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose10[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose11[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose12[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose13[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose14[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose15[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose16[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose17[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose18[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose19[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose20[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose21[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose22[] = {
	AX_POSE(3, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose23[] = {
	AX_POSE(4, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose24[] = {
	AX_POSE(5, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose73[] = {
	AX_POSE(15, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose74[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose75[] = {
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose76[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose77[] = {
	AX_POSE(19, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose78[] = {
	AX_POSE(20, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose79[] = {
	AX_POSE(21, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose80[] = {
	AX_POSE(22, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose81[] = {
	AX_POSE(23, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose82[] = {
	AX_POSE(24, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose83[] = {
	AX_POSE(21, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose84[] = {
	AX_POSE(22, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose85[] = {
	AX_POSE(19, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose86[] = {
	AX_POSE(20, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose87[] = {
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose88[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose89[] = {
	AX_POSE(25, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose90[] = {
	AX_POSE(26, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose91[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose92[] = {
	AX_POSE(28, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose93[] = {
	AX_POSE(29, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose94[] = {
	AX_POSE(30, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose95[] = {
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose96[] = {
	AX_POSE(32, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose97[] = {
	AX_POSE(33, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose98[] = {
	AX_POSE(34, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose99[] = {
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose100[] = {
	AX_POSE(32, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose101[] = {
	AX_POSE(29, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose102[] = {
	AX_POSE(30, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose103[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose104[] = {
	AX_POSE(28, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose105[] = {
	AX_POSE(35, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose106[] = {
	AX_POSE(36, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose107[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose108[] = {
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose109[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose110[] = {
	AX_POSE(40, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose111[] = {
	AX_POSE(41, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose112[] = {
	AX_POSE(40, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose113[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose114[] = {
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose154[] = {
	AX_POSE(3, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose211[] = {
	AX_POSE(42, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose212[] = {
	AX_POSE(43, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose213[] = {
	AX_POSE(42, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose214[] = {
	AX_POSE(43, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose216[] = {
	AX_POSE(44, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose217[] = {
	AX_POSE(45, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose218[] = {
	AX_POSE(46, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose221[] = {
	AX_POSE(47, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose222[] = {
	AX_POSE(48, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose223[] = {
	AX_POSE(49, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose224[] = {
	AX_POSE(50, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose225[] = {
	AX_POSE(51, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose227[] = {
	AX_POSE(52, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose228[] = {
	AX_POSE(53, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose229[] = {
	AX_POSE(54, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose230[] = {
	AX_POSE(55, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose231[] = {
	AX_POSE(56, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose233[] = {
	AX_POSE(57, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose234[] = {
	AX_POSE(58, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose236[] = {
	AX_POSE(59, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose237[] = {
	AX_POSE(60, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose239[] = {
	AX_POSE(61, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose240[] = {
	AX_POSE(62, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose242[] = {
	AX_POSE(63, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose244[] = {
	AX_POSE(63, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose245[] = {
	AX_POSE(64, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose246[] = {
	AX_POSE(65, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose247[] = {
	AX_POSE(66, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose248[] = {
	AX_POSE(67, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose249[] = {
	AX_POSE(68, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose250[] = {
	AX_POSE(69, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose251[] = {
	AX_POSE(65, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose252[] = {
	AX_POSE(66, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose253[] = {
	AX_POSE(67, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose254[] = {
	AX_POSE(68, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose255[] = {
	AX_POSE(69, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose257[] = {
	AX_POSE(70, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBulbasaurPose259[] = {
	AX_POSE(70, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const u8 sBulbasaurAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_1_1.lz");
static const u8 sBulbasaurAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_1_2.lz");
static const u8 sBulbasaurAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_1_3.lz");
static const u8 sBulbasaurAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_1_4.lz");
static const u8 sBulbasaurAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_1_5.lz");
static const u8 sBulbasaurAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_1_6.lz");
static const u8 sBulbasaurAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_1_7.lz");
static const u8 sBulbasaurAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_1_8.lz");
static const u8 sBulbasaurAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_2_1.lz");
static const u8 sBulbasaurAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_2_2.lz");
static const u8 sBulbasaurAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_2_3.lz");
static const u8 sBulbasaurAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_2_4.lz");
static const u8 sBulbasaurAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_2_5.lz");
static const u8 sBulbasaurAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_2_6.lz");
static const u8 sBulbasaurAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_2_7.lz");
static const u8 sBulbasaurAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_2_8.lz");
static const u8 sBulbasaurAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_3_1.lz");
static const u8 sBulbasaurAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_3_2.lz");
static const u8 sBulbasaurAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_3_3.lz");
static const u8 sBulbasaurAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_3_4.lz");
static const u8 sBulbasaurAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_3_5.lz");
static const u8 sBulbasaurAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_3_6.lz");
static const u8 sBulbasaurAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_3_7.lz");
static const u8 sBulbasaurAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_3_8.lz");
static const u8 sBulbasaurAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_5_1.lz");
static const u8 sBulbasaurAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_5_2.lz");
static const u8 sBulbasaurAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_5_3.lz");
static const u8 sBulbasaurAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_5_4.lz");
static const u8 sBulbasaurAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_5_5.lz");
static const u8 sBulbasaurAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_5_6.lz");
static const u8 sBulbasaurAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_5_7.lz");
static const u8 sBulbasaurAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_5_8.lz");
static const u8 sBulbasaurAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_8_1.lz");
static const u8 sBulbasaurAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_8_2.lz");
static const u8 sBulbasaurAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_8_3.lz");
static const u8 sBulbasaurAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_8_4.lz");
static const u8 sBulbasaurAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_8_5.lz");
static const u8 sBulbasaurAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_8_6.lz");
static const u8 sBulbasaurAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_8_7.lz");
static const u8 sBulbasaurAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_8_8.lz");
static const u8 sBulbasaurAnims_12_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_12_2.lz");
static const u8 sBulbasaurAnims_12_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_12_8.lz");
static const u8 sBulbasaurAnims_15_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_15_1.lz");
static const u8 sBulbasaurAnims_18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_18_1.lz");
static const u8 sBulbasaurAnims_18_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_18_5.lz");
static const u8 sBulbasaurAnims_25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/bulbasaur/sBulbasaurAnims_25_1.lz");

static const u8 sBulbasaurGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_1.4bpp.lz");
static const ax_sprite sBulbasaurSprites1[] = {
	{sBulbasaurGfx1, ARRAY_COUNT(sBulbasaurGfx1)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites2[] = {
	{sBulbasaurGfx2, ARRAY_COUNT(sBulbasaurGfx2)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_3.4bpp.lz");
static const ax_sprite sBulbasaurSprites3[] = {
	{sBulbasaurGfx3, ARRAY_COUNT(sBulbasaurGfx3)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_4.4bpp.lz");
static const ax_sprite sBulbasaurSprites4[] = {
	{sBulbasaurGfx4, ARRAY_COUNT(sBulbasaurGfx4)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_5.4bpp.lz");
static const ax_sprite sBulbasaurSprites5[] = {
	{sBulbasaurGfx5, ARRAY_COUNT(sBulbasaurGfx5)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_6.4bpp.lz");
static const ax_sprite sBulbasaurSprites6[] = {
	{sBulbasaurGfx6, ARRAY_COUNT(sBulbasaurGfx6)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_7.4bpp.lz");
static const ax_sprite sBulbasaurSprites7[] = {
	{sBulbasaurGfx7, ARRAY_COUNT(sBulbasaurGfx7)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_8.4bpp.lz");
static const ax_sprite sBulbasaurSprites8[] = {
	{sBulbasaurGfx8, ARRAY_COUNT(sBulbasaurGfx8)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_9.4bpp.lz");
static const ax_sprite sBulbasaurSprites9[] = {
	{sBulbasaurGfx9, ARRAY_COUNT(sBulbasaurGfx9)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_10.4bpp.lz");
static const ax_sprite sBulbasaurSprites10[] = {
	{sBulbasaurGfx10, ARRAY_COUNT(sBulbasaurGfx10)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_11.4bpp.lz");
static const ax_sprite sBulbasaurSprites11[] = {
	{sBulbasaurGfx11, ARRAY_COUNT(sBulbasaurGfx11)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_12.4bpp.lz");
static const ax_sprite sBulbasaurSprites12[] = {
	{sBulbasaurGfx12, ARRAY_COUNT(sBulbasaurGfx12)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_13.4bpp.lz");
static const ax_sprite sBulbasaurSprites13[] = {
	{sBulbasaurGfx13, ARRAY_COUNT(sBulbasaurGfx13)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_14.4bpp.lz");
static const ax_sprite sBulbasaurSprites14[] = {
	{sBulbasaurGfx14, ARRAY_COUNT(sBulbasaurGfx14)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_15.4bpp.lz");
static const ax_sprite sBulbasaurSprites15[] = {
	{sBulbasaurGfx15, ARRAY_COUNT(sBulbasaurGfx15)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_16.4bpp.lz");
static const u8 sBulbasaurGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_16_1.4bpp.lz");
static const u8 sBulbasaurGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_16_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites16[] = {
	{NULL, 32}, 
	{sBulbasaurGfx16, ARRAY_COUNT(sBulbasaurGfx16)}, 
	{NULL, 32}, 
	{sBulbasaurGfx16_1, ARRAY_COUNT(sBulbasaurGfx16_1)}, 
	{NULL, 64}, 
	{sBulbasaurGfx16_2, ARRAY_COUNT(sBulbasaurGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_17.4bpp.lz");
static const u8 sBulbasaurGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_17_1.4bpp.lz");
static const u8 sBulbasaurGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_17_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites17[] = {
	{NULL, 32}, 
	{sBulbasaurGfx17, ARRAY_COUNT(sBulbasaurGfx17)}, 
	{NULL, 32}, 
	{sBulbasaurGfx17_1, ARRAY_COUNT(sBulbasaurGfx17_1)}, 
	{NULL, 64}, 
	{sBulbasaurGfx17_2, ARRAY_COUNT(sBulbasaurGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_18.4bpp.lz");
static const u8 sBulbasaurGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_18_1.4bpp.lz");
static const u8 sBulbasaurGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_18_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites18[] = {
	{NULL, 32}, 
	{sBulbasaurGfx18, ARRAY_COUNT(sBulbasaurGfx18)}, 
	{NULL, 32}, 
	{sBulbasaurGfx18_1, ARRAY_COUNT(sBulbasaurGfx18_1)}, 
	{NULL, 32}, 
	{sBulbasaurGfx18_2, ARRAY_COUNT(sBulbasaurGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_19.4bpp.lz");
static const u8 sBulbasaurGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_19_1.4bpp.lz");
static const u8 sBulbasaurGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_19_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites19[] = {
	{NULL, 32}, 
	{sBulbasaurGfx19, ARRAY_COUNT(sBulbasaurGfx19)}, 
	{NULL, 32}, 
	{sBulbasaurGfx19_1, ARRAY_COUNT(sBulbasaurGfx19_1)}, 
	{NULL, 32}, 
	{sBulbasaurGfx19_2, ARRAY_COUNT(sBulbasaurGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_20.4bpp.lz");
static const u8 sBulbasaurGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_20_1.4bpp.lz");
static const u8 sBulbasaurGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_20_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites20[] = {
	{NULL, 32}, 
	{sBulbasaurGfx20, ARRAY_COUNT(sBulbasaurGfx20)}, 
	{NULL, 32}, 
	{sBulbasaurGfx20_1, ARRAY_COUNT(sBulbasaurGfx20_1)}, 
	{NULL, 32}, 
	{sBulbasaurGfx20_2, ARRAY_COUNT(sBulbasaurGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_21.4bpp.lz");
static const u8 sBulbasaurGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_21_1.4bpp.lz");
static const u8 sBulbasaurGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_21_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites21[] = {
	{NULL, 32}, 
	{sBulbasaurGfx21, ARRAY_COUNT(sBulbasaurGfx21)}, 
	{NULL, 32}, 
	{sBulbasaurGfx21_1, ARRAY_COUNT(sBulbasaurGfx21_1)}, 
	{NULL, 32}, 
	{sBulbasaurGfx21_2, ARRAY_COUNT(sBulbasaurGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_22.4bpp.lz");
static const u8 sBulbasaurGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_22_1.4bpp.lz");
static const u8 sBulbasaurGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_22_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites22[] = {
	{NULL, 32}, 
	{sBulbasaurGfx22, ARRAY_COUNT(sBulbasaurGfx22)}, 
	{NULL, 32}, 
	{sBulbasaurGfx22_1, ARRAY_COUNT(sBulbasaurGfx22_1)}, 
	{NULL, 32}, 
	{sBulbasaurGfx22_2, ARRAY_COUNT(sBulbasaurGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_23.4bpp.lz");
static const u8 sBulbasaurGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_23_1.4bpp.lz");
static const u8 sBulbasaurGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_23_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites23[] = {
	{NULL, 32}, 
	{sBulbasaurGfx23, ARRAY_COUNT(sBulbasaurGfx23)}, 
	{NULL, 32}, 
	{sBulbasaurGfx23_1, ARRAY_COUNT(sBulbasaurGfx23_1)}, 
	{NULL, 32}, 
	{sBulbasaurGfx23_2, ARRAY_COUNT(sBulbasaurGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_24.4bpp.lz");
static const u8 sBulbasaurGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_24_1.4bpp.lz");
static const u8 sBulbasaurGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_24_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites24[] = {
	{NULL, 32}, 
	{sBulbasaurGfx24, ARRAY_COUNT(sBulbasaurGfx24)}, 
	{NULL, 32}, 
	{sBulbasaurGfx24_1, ARRAY_COUNT(sBulbasaurGfx24_1)}, 
	{NULL, 32}, 
	{sBulbasaurGfx24_2, ARRAY_COUNT(sBulbasaurGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_25.4bpp.lz");
static const u8 sBulbasaurGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_25_1.4bpp.lz");
static const u8 sBulbasaurGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_25_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites25[] = {
	{NULL, 32}, 
	{sBulbasaurGfx25, ARRAY_COUNT(sBulbasaurGfx25)}, 
	{NULL, 32}, 
	{sBulbasaurGfx25_1, ARRAY_COUNT(sBulbasaurGfx25_1)}, 
	{NULL, 32}, 
	{sBulbasaurGfx25_2, ARRAY_COUNT(sBulbasaurGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_26.4bpp.lz");
static const u8 sBulbasaurGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_26_1.4bpp.lz");
static const u8 sBulbasaurGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_26_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites26[] = {
	{NULL, 32}, 
	{sBulbasaurGfx26, ARRAY_COUNT(sBulbasaurGfx26)}, 
	{NULL, 32}, 
	{sBulbasaurGfx26_1, ARRAY_COUNT(sBulbasaurGfx26_1)}, 
	{NULL, 32}, 
	{sBulbasaurGfx26_2, ARRAY_COUNT(sBulbasaurGfx26_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_27.4bpp.lz");
static const u8 sBulbasaurGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_27_1.4bpp.lz");
static const u8 sBulbasaurGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_27_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites27[] = {
	{NULL, 32}, 
	{sBulbasaurGfx27, ARRAY_COUNT(sBulbasaurGfx27)}, 
	{NULL, 64}, 
	{sBulbasaurGfx27_1, ARRAY_COUNT(sBulbasaurGfx27_1)}, 
	{NULL, 64}, 
	{sBulbasaurGfx27_2, ARRAY_COUNT(sBulbasaurGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_28.4bpp.lz");
static const u8 sBulbasaurGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_28_1.4bpp.lz");
static const u8 sBulbasaurGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_28_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites28[] = {
	{sBulbasaurGfx28, ARRAY_COUNT(sBulbasaurGfx28)}, 
	{NULL, 32}, 
	{sBulbasaurGfx28_1, ARRAY_COUNT(sBulbasaurGfx28_1)}, 
	{NULL, 32}, 
	{sBulbasaurGfx28_2, ARRAY_COUNT(sBulbasaurGfx28_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_29.4bpp.lz");
static const u8 sBulbasaurGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_29_1.4bpp.lz");
static const u8 sBulbasaurGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_29_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites29[] = {
	{sBulbasaurGfx29, ARRAY_COUNT(sBulbasaurGfx29)}, 
	{NULL, 32}, 
	{sBulbasaurGfx29_1, ARRAY_COUNT(sBulbasaurGfx29_1)}, 
	{NULL, 32}, 
	{sBulbasaurGfx29_2, ARRAY_COUNT(sBulbasaurGfx29_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_30.4bpp.lz");
static const u8 sBulbasaurGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_30_1.4bpp.lz");
static const u8 sBulbasaurGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_30_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites30[] = {
	{sBulbasaurGfx30, ARRAY_COUNT(sBulbasaurGfx30)}, 
	{NULL, 32}, 
	{sBulbasaurGfx30_1, ARRAY_COUNT(sBulbasaurGfx30_1)}, 
	{NULL, 32}, 
	{sBulbasaurGfx30_2, ARRAY_COUNT(sBulbasaurGfx30_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_31.4bpp.lz");
static const u8 sBulbasaurGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_31_1.4bpp.lz");
static const u8 sBulbasaurGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_31_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites31[] = {
	{sBulbasaurGfx31, ARRAY_COUNT(sBulbasaurGfx31)}, 
	{NULL, 32}, 
	{sBulbasaurGfx31_1, ARRAY_COUNT(sBulbasaurGfx31_1)}, 
	{NULL, 32}, 
	{sBulbasaurGfx31_2, ARRAY_COUNT(sBulbasaurGfx31_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_32.4bpp.lz");
static const u8 sBulbasaurGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_32_1.4bpp.lz");
static const u8 sBulbasaurGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_32_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites32[] = {
	{sBulbasaurGfx32, ARRAY_COUNT(sBulbasaurGfx32)}, 
	{NULL, 32}, 
	{sBulbasaurGfx32_1, ARRAY_COUNT(sBulbasaurGfx32_1)}, 
	{NULL, 32}, 
	{sBulbasaurGfx32_2, ARRAY_COUNT(sBulbasaurGfx32_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_33.4bpp.lz");
static const u8 sBulbasaurGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_33_1.4bpp.lz");
static const u8 sBulbasaurGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_33_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites33[] = {
	{sBulbasaurGfx33, ARRAY_COUNT(sBulbasaurGfx33)}, 
	{NULL, 32}, 
	{sBulbasaurGfx33_1, ARRAY_COUNT(sBulbasaurGfx33_1)}, 
	{NULL, 32}, 
	{sBulbasaurGfx33_2, ARRAY_COUNT(sBulbasaurGfx33_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_34.4bpp.lz");
static const u8 sBulbasaurGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_34_1.4bpp.lz");
static const u8 sBulbasaurGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_34_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites34[] = {
	{NULL, 32}, 
	{sBulbasaurGfx34, ARRAY_COUNT(sBulbasaurGfx34)}, 
	{NULL, 32}, 
	{sBulbasaurGfx34_1, ARRAY_COUNT(sBulbasaurGfx34_1)}, 
	{NULL, 32}, 
	{sBulbasaurGfx34_2, ARRAY_COUNT(sBulbasaurGfx34_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_35.4bpp.lz");
static const u8 sBulbasaurGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_35_1.4bpp.lz");
static const u8 sBulbasaurGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_35_2.4bpp.lz");
static const ax_sprite sBulbasaurSprites35[] = {
	{NULL, 32}, 
	{sBulbasaurGfx35, ARRAY_COUNT(sBulbasaurGfx35)}, 
	{NULL, 32}, 
	{sBulbasaurGfx35_1, ARRAY_COUNT(sBulbasaurGfx35_1)}, 
	{NULL, 32}, 
	{sBulbasaurGfx35_2, ARRAY_COUNT(sBulbasaurGfx35_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_36.4bpp.lz");
static const ax_sprite sBulbasaurSprites36[] = {
	{sBulbasaurGfx36, ARRAY_COUNT(sBulbasaurGfx36)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_37.4bpp.lz");
static const ax_sprite sBulbasaurSprites37[] = {
	{sBulbasaurGfx37, ARRAY_COUNT(sBulbasaurGfx37)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_38.4bpp.lz");
static const ax_sprite sBulbasaurSprites38[] = {
	{sBulbasaurGfx38, ARRAY_COUNT(sBulbasaurGfx38)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_39.4bpp.lz");
static const ax_sprite sBulbasaurSprites39[] = {
	{sBulbasaurGfx39, ARRAY_COUNT(sBulbasaurGfx39)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_40.4bpp.lz");
static const ax_sprite sBulbasaurSprites40[] = {
	{sBulbasaurGfx40, ARRAY_COUNT(sBulbasaurGfx40)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_41.4bpp.lz");
static const ax_sprite sBulbasaurSprites41[] = {
	{sBulbasaurGfx41, ARRAY_COUNT(sBulbasaurGfx41)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_42.4bpp.lz");
static const ax_sprite sBulbasaurSprites42[] = {
	{sBulbasaurGfx42, ARRAY_COUNT(sBulbasaurGfx42)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_43.4bpp.lz");
static const ax_sprite sBulbasaurSprites43[] = {
	{sBulbasaurGfx43, ARRAY_COUNT(sBulbasaurGfx43)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_44.4bpp.lz");
static const ax_sprite sBulbasaurSprites44[] = {
	{sBulbasaurGfx44, ARRAY_COUNT(sBulbasaurGfx44)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_45.4bpp.lz");
static const ax_sprite sBulbasaurSprites45[] = {
	{sBulbasaurGfx45, ARRAY_COUNT(sBulbasaurGfx45)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_46.4bpp.lz");
static const ax_sprite sBulbasaurSprites46[] = {
	{sBulbasaurGfx46, ARRAY_COUNT(sBulbasaurGfx46)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_47.4bpp.lz");
static const ax_sprite sBulbasaurSprites47[] = {
	{sBulbasaurGfx47, ARRAY_COUNT(sBulbasaurGfx47)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_48.4bpp.lz");
static const ax_sprite sBulbasaurSprites48[] = {
	{sBulbasaurGfx48, ARRAY_COUNT(sBulbasaurGfx48)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_49.4bpp.lz");
static const ax_sprite sBulbasaurSprites49[] = {
	{sBulbasaurGfx49, ARRAY_COUNT(sBulbasaurGfx49)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_50.4bpp.lz");
static const ax_sprite sBulbasaurSprites50[] = {
	{sBulbasaurGfx50, ARRAY_COUNT(sBulbasaurGfx50)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_51.4bpp.lz");
static const ax_sprite sBulbasaurSprites51[] = {
	{sBulbasaurGfx51, ARRAY_COUNT(sBulbasaurGfx51)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_52.4bpp.lz");
static const ax_sprite sBulbasaurSprites52[] = {
	{sBulbasaurGfx52, ARRAY_COUNT(sBulbasaurGfx52)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_53.4bpp.lz");
static const ax_sprite sBulbasaurSprites53[] = {
	{sBulbasaurGfx53, ARRAY_COUNT(sBulbasaurGfx53)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_54.4bpp.lz");
static const ax_sprite sBulbasaurSprites54[] = {
	{sBulbasaurGfx54, ARRAY_COUNT(sBulbasaurGfx54)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_55.4bpp.lz");
static const ax_sprite sBulbasaurSprites55[] = {
	{sBulbasaurGfx55, ARRAY_COUNT(sBulbasaurGfx55)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_56.4bpp.lz");
static const ax_sprite sBulbasaurSprites56[] = {
	{sBulbasaurGfx56, ARRAY_COUNT(sBulbasaurGfx56)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_57.4bpp.lz");
static const ax_sprite sBulbasaurSprites57[] = {
	{sBulbasaurGfx57, ARRAY_COUNT(sBulbasaurGfx57)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_58.4bpp.lz");
static const ax_sprite sBulbasaurSprites58[] = {
	{sBulbasaurGfx58, ARRAY_COUNT(sBulbasaurGfx58)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_59.4bpp.lz");
static const ax_sprite sBulbasaurSprites59[] = {
	{sBulbasaurGfx59, ARRAY_COUNT(sBulbasaurGfx59)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_60.4bpp.lz");
static const ax_sprite sBulbasaurSprites60[] = {
	{sBulbasaurGfx60, ARRAY_COUNT(sBulbasaurGfx60)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_61.4bpp.lz");
static const ax_sprite sBulbasaurSprites61[] = {
	{sBulbasaurGfx61, ARRAY_COUNT(sBulbasaurGfx61)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_62.4bpp.lz");
static const ax_sprite sBulbasaurSprites62[] = {
	{sBulbasaurGfx62, ARRAY_COUNT(sBulbasaurGfx62)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_63.4bpp.lz");
static const ax_sprite sBulbasaurSprites63[] = {
	{sBulbasaurGfx63, ARRAY_COUNT(sBulbasaurGfx63)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_64.4bpp.lz");
static const ax_sprite sBulbasaurSprites64[] = {
	{sBulbasaurGfx64, ARRAY_COUNT(sBulbasaurGfx64)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_65.4bpp.lz");
static const ax_sprite sBulbasaurSprites65[] = {
	{sBulbasaurGfx65, ARRAY_COUNT(sBulbasaurGfx65)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_66.4bpp.lz");
static const ax_sprite sBulbasaurSprites66[] = {
	{sBulbasaurGfx66, ARRAY_COUNT(sBulbasaurGfx66)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_67.4bpp.lz");
static const ax_sprite sBulbasaurSprites67[] = {
	{sBulbasaurGfx67, ARRAY_COUNT(sBulbasaurGfx67)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_68.4bpp.lz");
static const ax_sprite sBulbasaurSprites68[] = {
	{sBulbasaurGfx68, ARRAY_COUNT(sBulbasaurGfx68)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_69.4bpp.lz");
static const ax_sprite sBulbasaurSprites69[] = {
	{sBulbasaurGfx69, ARRAY_COUNT(sBulbasaurGfx69)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_70.4bpp.lz");
static const ax_sprite sBulbasaurSprites70[] = {
	{sBulbasaurGfx70, ARRAY_COUNT(sBulbasaurGfx70)}, 
	{NULL, 0}
};
static const u8 sBulbasaurGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bulbasaur/sprite_71.4bpp.lz");
static const ax_sprite sBulbasaurSprites71[] = {
	{sBulbasaurGfx71, ARRAY_COUNT(sBulbasaurGfx71)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesBulbasaur[] = {
	sBulbasaurPose1,
	sBulbasaurPose2,
	sBulbasaurPose3,
	sBulbasaurPose4,
	sBulbasaurPose5,
	sBulbasaurPose6,
	sBulbasaurPose7,
	sBulbasaurPose8,
	sBulbasaurPose9,
	sBulbasaurPose10,
	sBulbasaurPose11,
	sBulbasaurPose12,
	sBulbasaurPose13,
	sBulbasaurPose14,
	sBulbasaurPose15,
	sBulbasaurPose16,
	sBulbasaurPose17,
	sBulbasaurPose18,
	sBulbasaurPose19,
	sBulbasaurPose20,
	sBulbasaurPose21,
	sBulbasaurPose22,
	sBulbasaurPose23,
	sBulbasaurPose24,
	sBulbasaurPose1,
	sBulbasaurPose2,
	sBulbasaurPose3,
	sBulbasaurPose4,
	sBulbasaurPose5,
	sBulbasaurPose6,
	sBulbasaurPose7,
	sBulbasaurPose8,
	sBulbasaurPose9,
	sBulbasaurPose10,
	sBulbasaurPose11,
	sBulbasaurPose12,
	sBulbasaurPose13,
	sBulbasaurPose14,
	sBulbasaurPose15,
	sBulbasaurPose16,
	sBulbasaurPose17,
	sBulbasaurPose18,
	sBulbasaurPose19,
	sBulbasaurPose20,
	sBulbasaurPose21,
	sBulbasaurPose22,
	sBulbasaurPose23,
	sBulbasaurPose24,
	sBulbasaurPose1,
	sBulbasaurPose2,
	sBulbasaurPose3,
	sBulbasaurPose4,
	sBulbasaurPose5,
	sBulbasaurPose6,
	sBulbasaurPose7,
	sBulbasaurPose8,
	sBulbasaurPose9,
	sBulbasaurPose10,
	sBulbasaurPose11,
	sBulbasaurPose12,
	sBulbasaurPose13,
	sBulbasaurPose14,
	sBulbasaurPose15,
	sBulbasaurPose16,
	sBulbasaurPose17,
	sBulbasaurPose18,
	sBulbasaurPose19,
	sBulbasaurPose20,
	sBulbasaurPose21,
	sBulbasaurPose22,
	sBulbasaurPose23,
	sBulbasaurPose24,
	sBulbasaurPose73,
	sBulbasaurPose74,
	sBulbasaurPose75,
	sBulbasaurPose76,
	sBulbasaurPose77,
	sBulbasaurPose78,
	sBulbasaurPose79,
	sBulbasaurPose80,
	sBulbasaurPose81,
	sBulbasaurPose82,
	sBulbasaurPose83,
	sBulbasaurPose84,
	sBulbasaurPose85,
	sBulbasaurPose86,
	sBulbasaurPose87,
	sBulbasaurPose88,
	sBulbasaurPose89,
	sBulbasaurPose90,
	sBulbasaurPose91,
	sBulbasaurPose92,
	sBulbasaurPose93,
	sBulbasaurPose94,
	sBulbasaurPose95,
	sBulbasaurPose96,
	sBulbasaurPose97,
	sBulbasaurPose98,
	sBulbasaurPose99,
	sBulbasaurPose100,
	sBulbasaurPose101,
	sBulbasaurPose102,
	sBulbasaurPose103,
	sBulbasaurPose104,
	sBulbasaurPose105,
	sBulbasaurPose106,
	sBulbasaurPose107,
	sBulbasaurPose108,
	sBulbasaurPose109,
	sBulbasaurPose110,
	sBulbasaurPose111,
	sBulbasaurPose112,
	sBulbasaurPose113,
	sBulbasaurPose114,
	sBulbasaurPose1,
	sBulbasaurPose2,
	sBulbasaurPose3,
	sBulbasaurPose4,
	sBulbasaurPose5,
	sBulbasaurPose6,
	sBulbasaurPose7,
	sBulbasaurPose8,
	sBulbasaurPose9,
	sBulbasaurPose10,
	sBulbasaurPose11,
	sBulbasaurPose12,
	sBulbasaurPose13,
	sBulbasaurPose14,
	sBulbasaurPose15,
	sBulbasaurPose16,
	sBulbasaurPose17,
	sBulbasaurPose18,
	sBulbasaurPose19,
	sBulbasaurPose20,
	sBulbasaurPose21,
	sBulbasaurPose22,
	sBulbasaurPose23,
	sBulbasaurPose24,
	sBulbasaurPose1,
	sBulbasaurPose22,
	sBulbasaurPose19,
	sBulbasaurPose16,
	sBulbasaurPose13,
	sBulbasaurPose10,
	sBulbasaurPose7,
	sBulbasaurPose4,
	sBulbasaurPose1,
	sBulbasaurPose4,
	sBulbasaurPose7,
	sBulbasaurPose10,
	sBulbasaurPose13,
	sBulbasaurPose16,
	sBulbasaurPose19,
	sBulbasaurPose154,
	sBulbasaurPose1,
	sBulbasaurPose2,
	sBulbasaurPose3,
	sBulbasaurPose4,
	sBulbasaurPose5,
	sBulbasaurPose6,
	sBulbasaurPose7,
	sBulbasaurPose8,
	sBulbasaurPose9,
	sBulbasaurPose10,
	sBulbasaurPose11,
	sBulbasaurPose12,
	sBulbasaurPose13,
	sBulbasaurPose14,
	sBulbasaurPose15,
	sBulbasaurPose16,
	sBulbasaurPose17,
	sBulbasaurPose18,
	sBulbasaurPose19,
	sBulbasaurPose20,
	sBulbasaurPose21,
	sBulbasaurPose22,
	sBulbasaurPose23,
	sBulbasaurPose24,
	sBulbasaurPose1,
	sBulbasaurPose2,
	sBulbasaurPose3,
	sBulbasaurPose4,
	sBulbasaurPose5,
	sBulbasaurPose6,
	sBulbasaurPose7,
	sBulbasaurPose8,
	sBulbasaurPose9,
	sBulbasaurPose10,
	sBulbasaurPose11,
	sBulbasaurPose12,
	sBulbasaurPose13,
	sBulbasaurPose14,
	sBulbasaurPose15,
	sBulbasaurPose16,
	sBulbasaurPose17,
	sBulbasaurPose18,
	sBulbasaurPose19,
	sBulbasaurPose20,
	sBulbasaurPose21,
	sBulbasaurPose22,
	sBulbasaurPose23,
	sBulbasaurPose24,
	sBulbasaurPose1,
	sBulbasaurPose22,
	sBulbasaurPose19,
	sBulbasaurPose16,
	sBulbasaurPose13,
	sBulbasaurPose10,
	sBulbasaurPose7,
	sBulbasaurPose4,
	sBulbasaurPose211,
	sBulbasaurPose212,
	sBulbasaurPose213,
	sBulbasaurPose214,
	sBulbasaurPose211,
	sBulbasaurPose216,
	sBulbasaurPose217,
	sBulbasaurPose218,
	sBulbasaurPose19,
	sBulbasaurPose13,
	sBulbasaurPose221,
	sBulbasaurPose222,
	sBulbasaurPose223,
	sBulbasaurPose224,
	sBulbasaurPose225,
	sBulbasaurPose224,
	sBulbasaurPose227,
	sBulbasaurPose228,
	sBulbasaurPose229,
	sBulbasaurPose230,
	sBulbasaurPose231,
	sBulbasaurPose19,
	sBulbasaurPose233,
	sBulbasaurPose234,
	sBulbasaurPose13,
	sBulbasaurPose236,
	sBulbasaurPose237,
	sBulbasaurPose1,
	sBulbasaurPose239,
	sBulbasaurPose240,
	sBulbasaurPose19,
	sBulbasaurPose242,
	sBulbasaurPose7,
	sBulbasaurPose244,
	sBulbasaurPose245,
	sBulbasaurPose246,
	sBulbasaurPose247,
	sBulbasaurPose248,
	sBulbasaurPose249,
	sBulbasaurPose250,
	sBulbasaurPose251,
	sBulbasaurPose252,
	sBulbasaurPose253,
	sBulbasaurPose254,
	sBulbasaurPose255,
	sBulbasaurPose16,
	sBulbasaurPose257,
	sBulbasaurPose10,
	sBulbasaurPose259,
	sBulbasaurPose211,
	sBulbasaurPose212,
	sBulbasaurPose213,
	sBulbasaurPose214,
	sBulbasaurPose211,
	sBulbasaurPose212,
	sBulbasaurPose213,
	sBulbasaurPose214,
};

static const struct PositionSets sAxPositionsBulbasaur[] = {
	[0] = { .set = { {-1, -1}, {-6, 0}, {4, 0}, {-1, -6} } },
	[1] = { .set = { {-1, -7}, {-8, -7}, {6, -7}, {-1, -8} } },
	[2] = { .set = { {-1, 1}, {-7, 4}, {5, 4}, {-1, -4} } },
	[3] = { .set = { {6, -4}, {4, -5}, {-3, 0}, {-2, -6} } },
	[4] = { .set = { {6, -6}, {10, -7}, {1, -2}, {-1, -8} } },
	[5] = { .set = { {7, -1}, {7, -4}, {-2, 3}, {-2, -6} } },
	[6] = { .set = { {8, -6}, {2, -5}, {-1, 0}, {-2, -5} } },
	[7] = { .set = { {8, -9}, {5, -7}, {6, -4}, {-2, -7} } },
	[8] = { .set = { {9, -4}, {3, -2}, {1, 2}, {-2, -6} } },
	[9] = { .set = { {6, -13}, {0, -8}, {6, -3}, {-1, -6} } },
	[10] = { .set = { {6, -16}, {-1, -13}, {8, -9}, {-2, -9} } },
	[11] = { .set = { {8, -15}, {1, -11}, {7, -5}, {0, -10} } },
	[12] = { .set = { {-1, -15}, {5, -12}, {-7, -12}, {-1, -8} } },
	[13] = { .set = { {-1, -18}, {6, -15}, {-8, -15}, {-1, -10} } },
	[14] = { .set = { {-1, -13}, {4, -8}, {-6, -8}, {-1, -9} } },
	[15] = { .set = { {-8, -13}, {-2, -8}, {-8, -3}, {-1, -6} } },
	[16] = { .set = { {-8, -16}, {-1, -13}, {-10, -9}, {0, -9} } },
	[17] = { .set = { {-10, -15}, {-3, -11}, {-9, -5}, {-2, -10} } },
	[18] = { .set = { {-10, -6}, {-4, -5}, {-1, 0}, {0, -5} } },
	[19] = { .set = { {-10, -9}, {-7, -7}, {-8, -4}, {0, -7} } },
	[20] = { .set = { {-11, -4}, {-5, -2}, {-3, 2}, {0, -6} } },
	[21] = { .set = { {-8, -4}, {-6, -5}, {1, 0}, {0, -6} } },
	[22] = { .set = { {-8, -6}, {-12, -7}, {-3, -2}, {-1, -8} } },
	[23] = { .set = { {-9, -1}, {-9, -4}, {0, 3}, {0, -6} } },
	[24] = { .set = { {-1, -1}, {-6, 0}, {4, 0}, {-1, -6} } },
	[25] = { .set = { {-1, -7}, {-8, -7}, {6, -7}, {-1, -8} } },
	[26] = { .set = { {-1, 1}, {-7, 4}, {5, 4}, {-1, -4} } },
	[27] = { .set = { {6, -4}, {4, -5}, {-3, 0}, {-2, -6} } },
	[28] = { .set = { {6, -6}, {10, -7}, {1, -2}, {-1, -8} } },
	[29] = { .set = { {7, -1}, {7, -4}, {-2, 3}, {-2, -6} } },
	[30] = { .set = { {8, -6}, {2, -5}, {-1, 0}, {-2, -5} } },
	[31] = { .set = { {8, -9}, {5, -7}, {6, -4}, {-2, -7} } },
	[32] = { .set = { {9, -4}, {3, -2}, {1, 2}, {-2, -6} } },
	[33] = { .set = { {6, -13}, {0, -8}, {6, -3}, {-1, -6} } },
	[34] = { .set = { {6, -16}, {-1, -13}, {8, -9}, {-2, -9} } },
	[35] = { .set = { {8, -15}, {1, -11}, {7, -5}, {0, -10} } },
	[36] = { .set = { {-1, -15}, {5, -12}, {-7, -12}, {-1, -8} } },
	[37] = { .set = { {-1, -18}, {6, -15}, {-8, -15}, {-1, -10} } },
	[38] = { .set = { {-1, -13}, {4, -8}, {-6, -8}, {-1, -9} } },
	[39] = { .set = { {-8, -13}, {-2, -8}, {-8, -3}, {-1, -6} } },
	[40] = { .set = { {-8, -16}, {-1, -13}, {-10, -9}, {0, -9} } },
	[41] = { .set = { {-10, -15}, {-3, -11}, {-9, -5}, {-2, -10} } },
	[42] = { .set = { {-10, -6}, {-4, -5}, {-1, 0}, {0, -5} } },
	[43] = { .set = { {-10, -9}, {-7, -7}, {-8, -4}, {0, -7} } },
	[44] = { .set = { {-11, -4}, {-5, -2}, {-3, 2}, {0, -6} } },
	[45] = { .set = { {-8, -4}, {-6, -5}, {1, 0}, {0, -6} } },
	[46] = { .set = { {-8, -6}, {-12, -7}, {-3, -2}, {-1, -8} } },
	[47] = { .set = { {-9, -1}, {-9, -4}, {0, 3}, {0, -6} } },
	[48] = { .set = { {-1, -1}, {-6, 0}, {4, 0}, {-1, -6} } },
	[49] = { .set = { {-1, -7}, {-8, -7}, {6, -7}, {-1, -8} } },
	[50] = { .set = { {-1, 1}, {-7, 4}, {5, 4}, {-1, -4} } },
	[51] = { .set = { {6, -4}, {4, -5}, {-3, 0}, {-2, -6} } },
	[52] = { .set = { {6, -6}, {10, -7}, {1, -2}, {-1, -8} } },
	[53] = { .set = { {7, -1}, {7, -4}, {-2, 3}, {-2, -6} } },
	[54] = { .set = { {8, -6}, {2, -5}, {-1, 0}, {-2, -5} } },
	[55] = { .set = { {8, -9}, {5, -7}, {6, -4}, {-2, -7} } },
	[56] = { .set = { {9, -4}, {3, -2}, {1, 2}, {-2, -6} } },
	[57] = { .set = { {6, -13}, {0, -8}, {6, -3}, {-1, -6} } },
	[58] = { .set = { {6, -16}, {-1, -13}, {8, -9}, {-2, -9} } },
	[59] = { .set = { {8, -15}, {1, -11}, {7, -5}, {0, -10} } },
	[60] = { .set = { {-1, -15}, {5, -12}, {-7, -12}, {-1, -8} } },
	[61] = { .set = { {-1, -18}, {6, -15}, {-8, -15}, {-1, -10} } },
	[62] = { .set = { {-1, -13}, {4, -8}, {-6, -8}, {-1, -9} } },
	[63] = { .set = { {-8, -13}, {-2, -8}, {-8, -3}, {-1, -6} } },
	[64] = { .set = { {-8, -16}, {-1, -13}, {-10, -9}, {0, -9} } },
	[65] = { .set = { {-10, -15}, {-3, -11}, {-9, -5}, {-2, -10} } },
	[66] = { .set = { {-10, -6}, {-4, -5}, {-1, 0}, {0, -5} } },
	[67] = { .set = { {-10, -9}, {-7, -7}, {-8, -4}, {0, -7} } },
	[68] = { .set = { {-11, -4}, {-5, -2}, {-3, 2}, {0, -6} } },
	[69] = { .set = { {-8, -4}, {-6, -5}, {1, 0}, {0, -6} } },
	[70] = { .set = { {-8, -6}, {-12, -7}, {-3, -2}, {-1, -8} } },
	[71] = { .set = { {-9, -1}, {-9, -4}, {0, 3}, {0, -6} } },
	[72] = { .set = { {-1, -11}, {-7, 0}, {5, 0}, {-1, -6} } },
	[73] = { .set = { {-1, -14}, {-7, 0}, {5, 0}, {-1, -7} } },
	[74] = { .set = { {2, -13}, {7, -3}, {-2, 1}, {2, -7} } },
	[75] = { .set = { {1, -15}, {6, -2}, {-2, 1}, {0, -7} } },
	[76] = { .set = { {5, -16}, {6, -8}, {1, 0}, {3, -7} } },
	[77] = { .set = { {4, -16}, {4, -7}, {1, 0}, {2, -7} } },
	[78] = { .set = { {3, -16}, {-4, -11}, {7, -3}, {2, -11} } },
	[79] = { .set = { {2, -16}, {-4, -10}, {7, -2}, {1, -10} } },
	[80] = { .set = { {-1, -17}, {4, -8}, {-6, -8}, {-1, -10} } },
	[81] = { .set = { {-1, -16}, {4, -8}, {-6, -7}, {-1, -9} } },
	[82] = { .set = { {-5, -16}, {2, -11}, {-9, -3}, {-4, -11} } },
	[83] = { .set = { {-3, -16}, {3, -10}, {-8, -2}, {-2, -10} } },
	[84] = { .set = { {-6, -16}, {-7, -8}, {-2, 0}, {-4, -7} } },
	[85] = { .set = { {-5, -16}, {-5, -7}, {-2, 0}, {-3, -7} } },
	[86] = { .set = { {-4, -13}, {-9, -3}, {0, 1}, {-4, -7} } },
	[87] = { .set = { {-3, -15}, {-8, -2}, {0, 1}, {-2, -7} } },
	[88] = { .set = { {-3, -12}, {-7, 0}, {5, 0}, {-2, -6} } },
	[89] = { .set = { {1, -12}, {-7, 0}, {5, 0}, {0, -7} } },
	[90] = { .set = { {-3, -12}, {6, -5}, {-3, 0}, {-2, -9} } },
	[91] = { .set = { {-5, -11}, {4, -5}, {-3, 0}, {-3, -9} } },
	[92] = { .set = { {-4, -10}, {0, -8}, {-1, 0}, {-2, -7} } },
	[93] = { .set = { {-4, -8}, {0, -7}, {-1, 0}, {-1, -6} } },
	[94] = { .set = { {-4, -11}, {-8, -7}, {6, -3}, {-1, -8} } },
	[95] = { .set = { {0, -10}, {-8, -7}, {6, -3}, {0, -7} } },
	[96] = { .set = { {1, -10}, {5, -7}, {-7, -7}, {0, -6} } },
	[97] = { .set = { {-2, -10}, {5, -7}, {-7, -8}, {-2, -6} } },
	[98] = { .set = { {2, -11}, {6, -7}, {-8, -3}, {-1, -8} } },
	[99] = { .set = { {-2, -10}, {6, -7}, {-8, -3}, {-2, -7} } },
	[100] = { .set = { {2, -10}, {-2, -8}, {-1, 0}, {0, -7} } },
	[101] = { .set = { {2, -8}, {-2, -7}, {-1, 0}, {-1, -6} } },
	[102] = { .set = { {1, -12}, {-8, -5}, {1, 0}, {0, -9} } },
	[103] = { .set = { {3, -11}, {-6, -5}, {1, 0}, {1, -9} } },
	[104] = { .set = { {-8, -2}, {-8, -5}, {-2, 2}, {0, -6} } },
	[105] = { .set = { {-8, -1}, {-8, -4}, {-2, 2}, {0, -6} } },
	[106] = { .set = { {-1, 0}, {-8, 1}, {6, 1}, {-1, -8} } },
	[107] = { .set = { {8, -2}, {7, -7}, {2, 1}, {-1, -8} } },
	[108] = { .set = { {10, -4}, {7, -8}, {5, 1}, {1, -7} } },
	[109] = { .set = { {9, -11}, {0, -13}, {8, -3}, {-1, -8} } },
	[110] = { .set = { {-1, -15}, {4, -9}, {-6, -8}, {-1, -9} } },
	[111] = { .set = { {-10, -11}, {-1, -13}, {-9, -3}, {0, -8} } },
	[112] = { .set = { {-11, -4}, {-8, -8}, {-6, 1}, {-2, -7} } },
	[113] = { .set = { {-9, -2}, {-8, -7}, {-3, 1}, {0, -8} } },
	[114] = { .set = { {-1, -1}, {-6, 0}, {4, 0}, {-1, -6} } },
	[115] = { .set = { {-1, -7}, {-8, -7}, {6, -7}, {-1, -8} } },
	[116] = { .set = { {-1, 1}, {-7, 4}, {5, 4}, {-1, -4} } },
	[117] = { .set = { {6, -4}, {4, -5}, {-3, 0}, {-2, -6} } },
	[118] = { .set = { {6, -6}, {10, -7}, {1, -2}, {-1, -8} } },
	[119] = { .set = { {7, -1}, {7, -4}, {-2, 3}, {-2, -6} } },
	[120] = { .set = { {8, -6}, {2, -5}, {-1, 0}, {-2, -5} } },
	[121] = { .set = { {8, -9}, {5, -7}, {6, -4}, {-2, -7} } },
	[122] = { .set = { {9, -4}, {3, -2}, {1, 2}, {-2, -6} } },
	[123] = { .set = { {6, -13}, {0, -8}, {6, -3}, {-1, -6} } },
	[124] = { .set = { {6, -16}, {-1, -13}, {8, -9}, {-2, -9} } },
	[125] = { .set = { {8, -15}, {1, -11}, {7, -5}, {0, -10} } },
	[126] = { .set = { {-1, -15}, {5, -12}, {-7, -12}, {-1, -8} } },
	[127] = { .set = { {-1, -18}, {6, -15}, {-8, -15}, {-1, -10} } },
	[128] = { .set = { {-1, -13}, {4, -8}, {-6, -8}, {-1, -9} } },
	[129] = { .set = { {-8, -13}, {-2, -8}, {-8, -3}, {-1, -6} } },
	[130] = { .set = { {-8, -16}, {-1, -13}, {-10, -9}, {0, -9} } },
	[131] = { .set = { {-10, -15}, {-3, -11}, {-9, -5}, {-2, -10} } },
	[132] = { .set = { {-10, -6}, {-4, -5}, {-1, 0}, {0, -5} } },
	[133] = { .set = { {-10, -9}, {-7, -7}, {-8, -4}, {0, -7} } },
	[134] = { .set = { {-11, -4}, {-5, -2}, {-3, 2}, {0, -6} } },
	[135] = { .set = { {-8, -4}, {-6, -5}, {1, 0}, {0, -6} } },
	[136] = { .set = { {-8, -6}, {-12, -7}, {-3, -2}, {-1, -8} } },
	[137] = { .set = { {-9, -1}, {-9, -4}, {0, 3}, {0, -6} } },
	[138] = { .set = { {-1, -1}, {-6, 0}, {4, 0}, {-1, -6} } },
	[139] = { .set = { {-8, -4}, {-6, -5}, {1, 0}, {0, -6} } },
	[140] = { .set = { {-10, -6}, {-4, -5}, {-1, 0}, {0, -5} } },
	[141] = { .set = { {-8, -13}, {-2, -8}, {-8, -3}, {-1, -6} } },
	[142] = { .set = { {-1, -15}, {5, -12}, {-7, -12}, {-1, -8} } },
	[143] = { .set = { {6, -13}, {0, -8}, {6, -3}, {-1, -6} } },
	[144] = { .set = { {8, -6}, {2, -5}, {-1, 0}, {-2, -5} } },
	[145] = { .set = { {6, -4}, {4, -5}, {-3, 0}, {-2, -6} } },
	[146] = { .set = { {-1, -1}, {-6, 0}, {4, 0}, {-1, -6} } },
	[147] = { .set = { {6, -4}, {4, -5}, {-3, 0}, {-2, -6} } },
	[148] = { .set = { {8, -6}, {2, -5}, {-1, 0}, {-2, -5} } },
	[149] = { .set = { {6, -13}, {0, -8}, {6, -3}, {-1, -6} } },
	[150] = { .set = { {-1, -15}, {5, -12}, {-7, -12}, {-1, -8} } },
	[151] = { .set = { {-8, -13}, {-2, -8}, {-8, -3}, {-1, -6} } },
	[152] = { .set = { {-10, -6}, {-4, -5}, {-1, 0}, {0, -5} } },
	[153] = { .set = { {-7, -4}, {-5, -5}, {2, 0}, {1, -6} } },
	[154] = { .set = { {-1, -1}, {-6, 0}, {4, 0}, {-1, -6} } },
	[155] = { .set = { {-1, -7}, {-8, -7}, {6, -7}, {-1, -8} } },
	[156] = { .set = { {-1, 1}, {-7, 4}, {5, 4}, {-1, -4} } },
	[157] = { .set = { {6, -4}, {4, -5}, {-3, 0}, {-2, -6} } },
	[158] = { .set = { {6, -6}, {10, -7}, {1, -2}, {-1, -8} } },
	[159] = { .set = { {7, -1}, {7, -4}, {-2, 3}, {-2, -6} } },
	[160] = { .set = { {8, -6}, {2, -5}, {-1, 0}, {-2, -5} } },
	[161] = { .set = { {8, -9}, {5, -7}, {6, -4}, {-2, -7} } },
	[162] = { .set = { {9, -4}, {3, -2}, {1, 2}, {-2, -6} } },
	[163] = { .set = { {6, -13}, {0, -8}, {6, -3}, {-1, -6} } },
	[164] = { .set = { {6, -16}, {-1, -13}, {8, -9}, {-2, -9} } },
	[165] = { .set = { {8, -15}, {1, -11}, {7, -5}, {0, -10} } },
	[166] = { .set = { {-1, -15}, {5, -12}, {-7, -12}, {-1, -8} } },
	[167] = { .set = { {-1, -18}, {6, -15}, {-8, -15}, {-1, -10} } },
	[168] = { .set = { {-1, -13}, {4, -8}, {-6, -8}, {-1, -9} } },
	[169] = { .set = { {-8, -13}, {-2, -8}, {-8, -3}, {-1, -6} } },
	[170] = { .set = { {-8, -16}, {-1, -13}, {-10, -9}, {0, -9} } },
	[171] = { .set = { {-10, -15}, {-3, -11}, {-9, -5}, {-2, -10} } },
	[172] = { .set = { {-10, -6}, {-4, -5}, {-1, 0}, {0, -5} } },
	[173] = { .set = { {-10, -9}, {-7, -7}, {-8, -4}, {0, -7} } },
	[174] = { .set = { {-11, -4}, {-5, -2}, {-3, 2}, {0, -6} } },
	[175] = { .set = { {-8, -4}, {-6, -5}, {1, 0}, {0, -6} } },
	[176] = { .set = { {-8, -6}, {-12, -7}, {-3, -2}, {-1, -8} } },
	[177] = { .set = { {-9, -1}, {-9, -4}, {0, 3}, {0, -6} } },
	[178] = { .set = { {-1, -1}, {-6, 0}, {4, 0}, {-1, -6} } },
	[179] = { .set = { {-1, -7}, {-8, -7}, {6, -7}, {-1, -8} } },
	[180] = { .set = { {-1, 1}, {-7, 4}, {5, 4}, {-1, -4} } },
	[181] = { .set = { {6, -4}, {4, -5}, {-3, 0}, {-2, -6} } },
	[182] = { .set = { {6, -6}, {10, -7}, {1, -2}, {-1, -8} } },
	[183] = { .set = { {7, -1}, {7, -4}, {-2, 3}, {-2, -6} } },
	[184] = { .set = { {8, -6}, {2, -5}, {-1, 0}, {-2, -5} } },
	[185] = { .set = { {8, -9}, {5, -7}, {6, -4}, {-2, -7} } },
	[186] = { .set = { {9, -4}, {3, -2}, {1, 2}, {-2, -6} } },
	[187] = { .set = { {6, -13}, {0, -8}, {6, -3}, {-1, -6} } },
	[188] = { .set = { {6, -16}, {-1, -13}, {8, -9}, {-2, -9} } },
	[189] = { .set = { {8, -15}, {1, -11}, {7, -5}, {0, -10} } },
	[190] = { .set = { {-1, -15}, {5, -12}, {-7, -12}, {-1, -8} } },
	[191] = { .set = { {-1, -18}, {6, -15}, {-8, -15}, {-1, -10} } },
	[192] = { .set = { {-1, -13}, {4, -8}, {-6, -8}, {-1, -9} } },
	[193] = { .set = { {-8, -13}, {-2, -8}, {-8, -3}, {-1, -6} } },
	[194] = { .set = { {-8, -16}, {-1, -13}, {-10, -9}, {0, -9} } },
	[195] = { .set = { {-10, -15}, {-3, -11}, {-9, -5}, {-2, -10} } },
	[196] = { .set = { {-10, -6}, {-4, -5}, {-1, 0}, {0, -5} } },
	[197] = { .set = { {-10, -9}, {-7, -7}, {-8, -4}, {0, -7} } },
	[198] = { .set = { {-11, -4}, {-5, -2}, {-3, 2}, {0, -6} } },
	[199] = { .set = { {-8, -4}, {-6, -5}, {1, 0}, {0, -6} } },
	[200] = { .set = { {-8, -6}, {-12, -7}, {-3, -2}, {-1, -8} } },
	[201] = { .set = { {-9, -1}, {-9, -4}, {0, 3}, {0, -6} } },
	[202] = { .set = { {-1, -1}, {-6, 0}, {4, 0}, {-1, -6} } },
	[203] = { .set = { {-8, -4}, {-6, -5}, {1, 0}, {0, -6} } },
	[204] = { .set = { {-10, -6}, {-4, -5}, {-1, 0}, {0, -5} } },
	[205] = { .set = { {-8, -13}, {-2, -8}, {-8, -3}, {-1, -6} } },
	[206] = { .set = { {-1, -15}, {5, -12}, {-7, -12}, {-1, -8} } },
	[207] = { .set = { {6, -13}, {0, -8}, {6, -3}, {-1, -6} } },
	[208] = { .set = { {8, -6}, {2, -5}, {-1, 0}, {-2, -5} } },
	[209] = { .set = { {6, -4}, {4, -5}, {-3, 0}, {-2, -6} } },
	[210] = { .set = { {-9, -2}, {-8, -3}, {-6, 0}, {-1, -6} } },
	[211] = { .set = { {-9, -1}, {-8, -2}, {-6, 0}, {-1, -6} } },
	[212] = { .set = { {8, -2}, {7, -3}, {5, 0}, {0, -6} } },
	[213] = { .set = { {8, -1}, {7, -2}, {5, 0}, {0, -6} } },
	[214] = { .set = { {-9, -2}, {-8, -3}, {-6, 0}, {-1, -6} } },
	[215] = { .set = { {-6, -4}, {-6, -2}, {-5, 0}, {0, -6} } },
	[216] = { .set = { {-6, -5}, {-6, -2}, {-5, 0}, {0, -6} } },
	[217] = { .set = { {-9, -2}, {-7, -2}, {-6, 0}, {0, -6} } },
	[218] = { .set = { {-10, -6}, {-4, -5}, {-1, 0}, {0, -5} } },
	[219] = { .set = { {-1, -15}, {5, -12}, {-7, -12}, {-1, -8} } },
	[220] = { .set = { {-1, -9}, {5, -7}, {-7, -7}, {-1, -8} } },
	[221] = { .set = { {-1, -8}, {5, -8}, {-7, -8}, {-1, -9} } },
	[222] = { .set = { {-1, 3}, {-8, 2}, {6, 2}, {-1, -6} } },
	[223] = { .set = { {-1, -2}, {-8, 2}, {6, 2}, {-1, -6} } },
	[224] = { .set = { {-1, 3}, {-8, 2}, {6, 2}, {-1, -5} } },
	[225] = { .set = { {-1, -2}, {-8, 2}, {6, 2}, {-1, -6} } },
	[226] = { .set = { {-1, -6}, {7, -6}, {-9, -6}, {-1, -3} } },
	[227] = { .set = { {-1, -8}, {7, -6}, {-9, -6}, {-1, -3} } },
	[228] = { .set = { {-1, -4}, {-8, -6}, {6, -6}, {-1, -7} } },
	[229] = { .set = { {-1, -3}, {-8, -5}, {6, -5}, {-1, -6} } },
	[230] = { .set = { {-1, -3}, {-8, -5}, {6, -5}, {-1, -6} } },
	[231] = { .set = { {-10, -6}, {-4, -5}, {-1, 0}, {0, -5} } },
	[232] = { .set = { {-8, -6}, {-9, -5}, {0, -6}, {-2, -7} } },
	[233] = { .set = { {-5, -7}, {-8, -4}, {-1, -11}, {-1, -7} } },
	[234] = { .set = { {-1, -15}, {5, -12}, {-7, -12}, {-1, -8} } },
	[235] = { .set = { {-1, -9}, {6, -7}, {-8, -7}, {-1, -7} } },
	[236] = { .set = { {-1, -6}, {7, -5}, {-9, -5}, {-1, -5} } },
	[237] = { .set = { {-1, -1}, {-6, 0}, {4, 0}, {-1, -6} } },
	[238] = { .set = { {-1, -5}, {-7, 0}, {5, 0}, {-1, -7} } },
	[239] = { .set = { {-1, 4}, {-8, 0}, {6, 0}, {-1, -5} } },
	[240] = { .set = { {-10, -6}, {-4, -5}, {-1, 0}, {0, -5} } },
	[241] = { .set = { {-8, -1}, {-4, -3}, {-1, -1}, {-2, -6} } },
	[242] = { .set = { {8, -6}, {2, -5}, {-1, 0}, {-2, -5} } },
	[243] = { .set = { {6, -1}, {2, -3}, {-1, -1}, {0, -6} } },
	[244] = { .set = { {-1, -11}, {7, -9}, {-9, -9}, {-1, -7} } },
	[245] = { .set = { {-7, -1}, {-6, -3}, {-2, -1}, {-1, -7} } },
	[246] = { .set = { {-6, -2}, {-12, -7}, {-1, -1}, {-2, -7} } },
	[247] = { .set = { {-7, 0}, {-13, -3}, {0, 1}, {-2, -6} } },
	[248] = { .set = { {-8, -2}, {-8, -4}, {-5, -2}, {-1, -7} } },
	[249] = { .set = { {-9, 0}, {-8, -2}, {-6, 1}, {-1, -5} } },
	[250] = { .set = { {5, -1}, {4, -3}, {0, -1}, {-1, -7} } },
	[251] = { .set = { {4, -2}, {10, -7}, {-1, -1}, {0, -7} } },
	[252] = { .set = { {5, 0}, {11, -3}, {-2, 1}, {0, -6} } },
	[253] = { .set = { {6, -2}, {6, -4}, {3, -2}, {-1, -7} } },
	[254] = { .set = { {7, 0}, {6, -2}, {4, 1}, {-1, -5} } },
	[255] = { .set = { {-8, -13}, {-2, -8}, {-8, -3}, {-1, -6} } },
	[256] = { .set = { {-4, -9}, {1, -10}, {-8, -7}, {1, -7} } },
	[257] = { .set = { {6, -13}, {0, -8}, {6, -3}, {-1, -6} } },
	[258] = { .set = { {2, -9}, {-3, -10}, {6, -7}, {-3, -7} } },
	[259] = { .set = { {-9, -2}, {-8, -3}, {-6, 0}, {-1, -6} } },
	[260] = { .set = { {-9, -1}, {-8, -2}, {-6, 0}, {-1, -6} } },
	[261] = { .set = { {8, -2}, {7, -3}, {5, 0}, {0, -6} } },
	[262] = { .set = { {8, -1}, {7, -2}, {5, 0}, {0, -6} } },
	[263] = { .set = { {-9, -2}, {-8, -3}, {-6, 0}, {-1, -6} } },
	[264] = { .set = { {-9, -1}, {-8, -2}, {-6, 0}, {-1, -6} } },
	[265] = { .set = { {8, -2}, {7, -3}, {5, 0}, {0, -6} } },
	[266] = { .set = { {8, -1}, {7, -2}, {5, 0}, {0, -6} } },
};

static const ax_anim *const sBulbasaurAnimTable1[] = {
	AX_ANIM_PTR(sBulbasaurAnims_1_1),
	AX_ANIM_PTR(sBulbasaurAnims_1_2),
	AX_ANIM_PTR(sBulbasaurAnims_1_3),
	AX_ANIM_PTR(sBulbasaurAnims_1_4),
	AX_ANIM_PTR(sBulbasaurAnims_1_5),
	AX_ANIM_PTR(sBulbasaurAnims_1_6),
	AX_ANIM_PTR(sBulbasaurAnims_1_7),
	AX_ANIM_PTR(sBulbasaurAnims_1_8),
};

static const ax_anim *const sBulbasaurAnimTable2[] = {
	AX_ANIM_PTR(sBulbasaurAnims_2_1),
	AX_ANIM_PTR(sBulbasaurAnims_2_2),
	AX_ANIM_PTR(sBulbasaurAnims_2_3),
	AX_ANIM_PTR(sBulbasaurAnims_2_4),
	AX_ANIM_PTR(sBulbasaurAnims_2_5),
	AX_ANIM_PTR(sBulbasaurAnims_2_6),
	AX_ANIM_PTR(sBulbasaurAnims_2_7),
	AX_ANIM_PTR(sBulbasaurAnims_2_8),
};

static const ax_anim *const sBulbasaurAnimTable3[] = {
	AX_ANIM_PTR(sBulbasaurAnims_3_1),
	AX_ANIM_PTR(sBulbasaurAnims_3_2),
	AX_ANIM_PTR(sBulbasaurAnims_3_3),
	AX_ANIM_PTR(sBulbasaurAnims_3_4),
	AX_ANIM_PTR(sBulbasaurAnims_3_5),
	AX_ANIM_PTR(sBulbasaurAnims_3_6),
	AX_ANIM_PTR(sBulbasaurAnims_3_7),
	AX_ANIM_PTR(sBulbasaurAnims_3_8),
};

static const ax_anim *const sBulbasaurAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_00117),
	AX_ANIM_PTR(gAxSharedAnim_00118),
	AX_ANIM_PTR(gAxSharedAnim_00119),
	AX_ANIM_PTR(gAxSharedAnim_00120),
	AX_ANIM_PTR(gAxSharedAnim_00121),
	AX_ANIM_PTR(gAxSharedAnim_00122),
	AX_ANIM_PTR(gAxSharedAnim_00123),
	AX_ANIM_PTR(gAxSharedAnim_00124),
};

static const ax_anim *const sBulbasaurAnimTable5[] = {
	AX_ANIM_PTR(sBulbasaurAnims_5_1),
	AX_ANIM_PTR(sBulbasaurAnims_5_2),
	AX_ANIM_PTR(sBulbasaurAnims_5_3),
	AX_ANIM_PTR(sBulbasaurAnims_5_4),
	AX_ANIM_PTR(sBulbasaurAnims_5_5),
	AX_ANIM_PTR(sBulbasaurAnims_5_6),
	AX_ANIM_PTR(sBulbasaurAnims_5_7),
	AX_ANIM_PTR(sBulbasaurAnims_5_8),
};

static const ax_anim *const sBulbasaurAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
};

static const ax_anim *const sBulbasaurAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00193),
	AX_ANIM_PTR(gAxSharedAnim_00201),
	AX_ANIM_PTR(gAxSharedAnim_00210),
	AX_ANIM_PTR(gAxSharedAnim_00218),
	AX_ANIM_PTR(gAxSharedAnim_00232),
	AX_ANIM_PTR(gAxSharedAnim_00244),
	AX_ANIM_PTR(gAxSharedAnim_00252),
	AX_ANIM_PTR(gAxSharedAnim_00259),
};

static const ax_anim *const sBulbasaurAnimTable8[] = {
	AX_ANIM_PTR(sBulbasaurAnims_8_1),
	AX_ANIM_PTR(sBulbasaurAnims_8_2),
	AX_ANIM_PTR(sBulbasaurAnims_8_3),
	AX_ANIM_PTR(sBulbasaurAnims_8_4),
	AX_ANIM_PTR(sBulbasaurAnims_8_5),
	AX_ANIM_PTR(sBulbasaurAnims_8_6),
	AX_ANIM_PTR(sBulbasaurAnims_8_7),
	AX_ANIM_PTR(sBulbasaurAnims_8_8),
};

static const ax_anim *const sBulbasaurAnimTable9[] = {
	AX_ANIM_PTR(gAxSharedAnim_00472),
	AX_ANIM_PTR(gAxSharedAnim_00525),
	AX_ANIM_PTR(gAxSharedAnim_00520),
	AX_ANIM_PTR(gAxSharedAnim_00512),
	AX_ANIM_PTR(gAxSharedAnim_00504),
	AX_ANIM_PTR(gAxSharedAnim_00499),
	AX_ANIM_PTR(gAxSharedAnim_00490),
	AX_ANIM_PTR(gAxSharedAnim_00481),
};

static const ax_anim *const sBulbasaurAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00540),
	AX_ANIM_PTR(gAxSharedAnim_00547),
	AX_ANIM_PTR(gAxSharedAnim_00555),
	AX_ANIM_PTR(gAxSharedAnim_00564),
	AX_ANIM_PTR(gAxSharedAnim_00574),
	AX_ANIM_PTR(gAxSharedAnim_00584),
	AX_ANIM_PTR(gAxSharedAnim_00593),
	AX_ANIM_PTR(gAxSharedAnim_00600),
};

static const ax_anim *const sBulbasaurAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_00607),
	AX_ANIM_PTR(gAxSharedAnim_00640),
	AX_ANIM_PTR(gAxSharedAnim_00671),
	AX_ANIM_PTR(gAxSharedAnim_00712),
	AX_ANIM_PTR(gAxSharedAnim_00747),
	AX_ANIM_PTR(gAxSharedAnim_00778),
	AX_ANIM_PTR(gAxSharedAnim_00826),
	AX_ANIM_PTR(gAxSharedAnim_00859),
};

static const ax_anim *const sBulbasaurAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_00920),
	AX_ANIM_PTR(sBulbasaurAnims_12_2),
	AX_ANIM_PTR(gAxSharedAnim_00985),
	AX_ANIM_PTR(gAxSharedAnim_01031),
	AX_ANIM_PTR(gAxSharedAnim_01095),
	AX_ANIM_PTR(gAxSharedAnim_01146),
	AX_ANIM_PTR(gAxSharedAnim_01173),
	AX_ANIM_PTR(sBulbasaurAnims_12_8),
};

static const ax_anim *const sBulbasaurAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01242),
	AX_ANIM_PTR(gAxSharedAnim_01323),
	AX_ANIM_PTR(gAxSharedAnim_01314),
	AX_ANIM_PTR(gAxSharedAnim_01301),
	AX_ANIM_PTR(gAxSharedAnim_01286),
	AX_ANIM_PTR(gAxSharedAnim_01278),
	AX_ANIM_PTR(gAxSharedAnim_01267),
	AX_ANIM_PTR(gAxSharedAnim_01253),
};

static const ax_anim *const sBulbasaurAnimTable14[] = {
	AX_ANIM_PTR(gAxSharedAnim_02388),
	AX_ANIM_PTR(gAxSharedAnim_02388),
	AX_ANIM_PTR(gAxSharedAnim_02388),
	AX_ANIM_PTR(gAxSharedAnim_02388),
	AX_ANIM_PTR(gAxSharedAnim_02388),
	AX_ANIM_PTR(gAxSharedAnim_02388),
	AX_ANIM_PTR(gAxSharedAnim_02388),
	AX_ANIM_PTR(gAxSharedAnim_02388),
};

static const ax_anim *const sBulbasaurAnimTable15[] = {
	AX_ANIM_PTR(sBulbasaurAnims_15_1),
	AX_ANIM_PTR(sBulbasaurAnims_15_1),
	AX_ANIM_PTR(sBulbasaurAnims_15_1),
	AX_ANIM_PTR(sBulbasaurAnims_15_1),
	AX_ANIM_PTR(sBulbasaurAnims_15_1),
	AX_ANIM_PTR(sBulbasaurAnims_15_1),
	AX_ANIM_PTR(sBulbasaurAnims_15_1),
	AX_ANIM_PTR(sBulbasaurAnims_15_1),
};

static const ax_anim *const sBulbasaurAnimTable16[] = {
	AX_ANIM_PTR(gAxSharedAnim_02667),
	AX_ANIM_PTR(gAxSharedAnim_02667),
	AX_ANIM_PTR(gAxSharedAnim_02667),
	AX_ANIM_PTR(gAxSharedAnim_02667),
	AX_ANIM_PTR(gAxSharedAnim_02667),
	AX_ANIM_PTR(gAxSharedAnim_02667),
	AX_ANIM_PTR(gAxSharedAnim_02667),
	AX_ANIM_PTR(gAxSharedAnim_02667),
};

static const ax_anim *const sBulbasaurAnimTable17[] = {
	AX_ANIM_PTR(gAxSharedAnim_00105),
	AX_ANIM_PTR(gAxSharedAnim_00105),
	AX_ANIM_PTR(gAxSharedAnim_00105),
	AX_ANIM_PTR(gAxSharedAnim_00105),
	AX_ANIM_PTR(gAxSharedAnim_00105),
	AX_ANIM_PTR(gAxSharedAnim_00105),
	AX_ANIM_PTR(gAxSharedAnim_00105),
	AX_ANIM_PTR(gAxSharedAnim_00105),
};

static const ax_anim *const sBulbasaurAnimTable18[] = {
	AX_ANIM_PTR(sBulbasaurAnims_18_1),
	AX_ANIM_PTR(sBulbasaurAnims_18_1),
	AX_ANIM_PTR(sBulbasaurAnims_18_1),
	AX_ANIM_PTR(sBulbasaurAnims_18_1),
	AX_ANIM_PTR(sBulbasaurAnims_18_5),
	AX_ANIM_PTR(sBulbasaurAnims_18_1),
	AX_ANIM_PTR(sBulbasaurAnims_18_1),
	AX_ANIM_PTR(sBulbasaurAnims_18_1),
};

static const ax_anim *const sBulbasaurAnimTable19[] = {
	AX_ANIM_PTR(gAxSharedAnim_02672),
	AX_ANIM_PTR(gAxSharedAnim_02672),
	AX_ANIM_PTR(gAxSharedAnim_02672),
	AX_ANIM_PTR(gAxSharedAnim_02672),
	AX_ANIM_PTR(gAxSharedAnim_02672),
	AX_ANIM_PTR(gAxSharedAnim_02672),
	AX_ANIM_PTR(gAxSharedAnim_02672),
	AX_ANIM_PTR(gAxSharedAnim_02672),
};

static const ax_anim *const sBulbasaurAnimTable20[] = {
	AX_ANIM_PTR(gAxSharedAnim_02428),
	AX_ANIM_PTR(gAxSharedAnim_02427),
	AX_ANIM_PTR(gAxSharedAnim_02427),
	AX_ANIM_PTR(gAxSharedAnim_02427),
	AX_ANIM_PTR(gAxSharedAnim_02427),
	AX_ANIM_PTR(gAxSharedAnim_02427),
	AX_ANIM_PTR(gAxSharedAnim_02427),
	AX_ANIM_PTR(gAxSharedAnim_02427),
};

static const ax_anim *const sBulbasaurAnimTable21[] = {
	AX_ANIM_PTR(gAxSharedAnim_02675),
	AX_ANIM_PTR(gAxSharedAnim_02675),
	AX_ANIM_PTR(gAxSharedAnim_02675),
	AX_ANIM_PTR(gAxSharedAnim_02675),
	AX_ANIM_PTR(gAxSharedAnim_02675),
	AX_ANIM_PTR(gAxSharedAnim_02675),
	AX_ANIM_PTR(gAxSharedAnim_02675),
	AX_ANIM_PTR(gAxSharedAnim_02675),
};

static const ax_anim *const sBulbasaurAnimTable22[] = {
	AX_ANIM_PTR(gAxSharedAnim_02391),
	AX_ANIM_PTR(gAxSharedAnim_02391),
	AX_ANIM_PTR(gAxSharedAnim_02391),
	AX_ANIM_PTR(gAxSharedAnim_02391),
	AX_ANIM_PTR(gAxSharedAnim_02391),
	AX_ANIM_PTR(gAxSharedAnim_02391),
	AX_ANIM_PTR(gAxSharedAnim_02391),
	AX_ANIM_PTR(gAxSharedAnim_02391),
};

static const ax_anim *const sBulbasaurAnimTable23[] = {
	AX_ANIM_PTR(gAxSharedAnim_00072),
	AX_ANIM_PTR(gAxSharedAnim_00072),
	AX_ANIM_PTR(gAxSharedAnim_00074),
	AX_ANIM_PTR(gAxSharedAnim_00072),
	AX_ANIM_PTR(gAxSharedAnim_00072),
	AX_ANIM_PTR(gAxSharedAnim_00072),
	AX_ANIM_PTR(gAxSharedAnim_00072),
	AX_ANIM_PTR(gAxSharedAnim_00072),
};

static const ax_anim *const sBulbasaurAnimTable24[] = {
	AX_ANIM_PTR(gAxSharedAnim_02433),
	AX_ANIM_PTR(gAxSharedAnim_02433),
	AX_ANIM_PTR(gAxSharedAnim_02433),
	AX_ANIM_PTR(gAxSharedAnim_02433),
	AX_ANIM_PTR(gAxSharedAnim_02433),
	AX_ANIM_PTR(gAxSharedAnim_02433),
	AX_ANIM_PTR(gAxSharedAnim_02433),
	AX_ANIM_PTR(gAxSharedAnim_02433),
};

static const ax_anim *const sBulbasaurAnimTable25[] = {
	AX_ANIM_PTR(sBulbasaurAnims_25_1),
	AX_ANIM_PTR(sBulbasaurAnims_25_1),
	AX_ANIM_PTR(sBulbasaurAnims_25_1),
	AX_ANIM_PTR(sBulbasaurAnims_25_1),
	AX_ANIM_PTR(sBulbasaurAnims_25_1),
	AX_ANIM_PTR(sBulbasaurAnims_25_1),
	AX_ANIM_PTR(gAxSharedAnim_00076),
	AX_ANIM_PTR(gAxSharedAnim_00076),
};

static const ax_anim *const sBulbasaurAnimTable26[] = {
	AX_ANIM_PTR(gAxSharedAnim_01676),
	AX_ANIM_PTR(gAxSharedAnim_01676),
	AX_ANIM_PTR(gAxSharedAnim_01676),
	AX_ANIM_PTR(gAxSharedAnim_01676),
	AX_ANIM_PTR(gAxSharedAnim_01676),
	AX_ANIM_PTR(gAxSharedAnim_01676),
	AX_ANIM_PTR(gAxSharedAnim_01676),
	AX_ANIM_PTR(gAxSharedAnim_01676),
};

static const ax_anim *const sBulbasaurAnimTable27[] = {
	AX_ANIM_PTR(gAxSharedAnim_00113),
	AX_ANIM_PTR(gAxSharedAnim_00113),
	AX_ANIM_PTR(gAxSharedAnim_00113),
	AX_ANIM_PTR(gAxSharedAnim_00113),
	AX_ANIM_PTR(gAxSharedAnim_00113),
	AX_ANIM_PTR(gAxSharedAnim_00113),
	AX_ANIM_PTR(gAxSharedAnim_00113),
	AX_ANIM_PTR(gAxSharedAnim_00113),
};

static const ax_anim *const sBulbasaurAnimTable28[] = {
	AX_ANIM_PTR(gAxSharedAnim_00114),
	AX_ANIM_PTR(gAxSharedAnim_00114),
	AX_ANIM_PTR(gAxSharedAnim_00115),
	AX_ANIM_PTR(gAxSharedAnim_00114),
	AX_ANIM_PTR(gAxSharedAnim_00114),
	AX_ANIM_PTR(gAxSharedAnim_00114),
	AX_ANIM_PTR(gAxSharedAnim_00114),
	AX_ANIM_PTR(gAxSharedAnim_00114),
};

static const ax_anim *const *const sAxAnimationsBulbasaur[] = {
	sBulbasaurAnimTable1,
	sBulbasaurAnimTable2,
	sBulbasaurAnimTable3,
	sBulbasaurAnimTable4,
	sBulbasaurAnimTable5,
	sBulbasaurAnimTable6,
	sBulbasaurAnimTable7,
	sBulbasaurAnimTable8,
	sBulbasaurAnimTable9,
	sBulbasaurAnimTable10,
	sBulbasaurAnimTable11,
	sBulbasaurAnimTable12,
	sBulbasaurAnimTable13,
	sBulbasaurAnimTable14,
	sBulbasaurAnimTable15,
	sBulbasaurAnimTable16,
	sBulbasaurAnimTable17,
	sBulbasaurAnimTable18,
	sBulbasaurAnimTable19,
	sBulbasaurAnimTable20,
	sBulbasaurAnimTable21,
	sBulbasaurAnimTable22,
	sBulbasaurAnimTable23,
	sBulbasaurAnimTable24,
	sBulbasaurAnimTable25,
	sBulbasaurAnimTable26,
	sBulbasaurAnimTable27,
	sBulbasaurAnimTable28,
};

static const ax_sprite *const sAxSpritesBulbasaur[] = {
	sBulbasaurSprites1,
	sBulbasaurSprites2,
	sBulbasaurSprites3,
	sBulbasaurSprites4,
	sBulbasaurSprites5,
	sBulbasaurSprites6,
	sBulbasaurSprites7,
	sBulbasaurSprites8,
	sBulbasaurSprites9,
	sBulbasaurSprites10,
	sBulbasaurSprites11,
	sBulbasaurSprites12,
	sBulbasaurSprites13,
	sBulbasaurSprites14,
	sBulbasaurSprites15,
	sBulbasaurSprites16,
	sBulbasaurSprites17,
	sBulbasaurSprites18,
	sBulbasaurSprites19,
	sBulbasaurSprites20,
	sBulbasaurSprites21,
	sBulbasaurSprites22,
	sBulbasaurSprites23,
	sBulbasaurSprites24,
	sBulbasaurSprites25,
	sBulbasaurSprites26,
	sBulbasaurSprites27,
	sBulbasaurSprites28,
	sBulbasaurSprites29,
	sBulbasaurSprites30,
	sBulbasaurSprites31,
	sBulbasaurSprites32,
	sBulbasaurSprites33,
	sBulbasaurSprites34,
	sBulbasaurSprites35,
	sBulbasaurSprites36,
	sBulbasaurSprites37,
	sBulbasaurSprites38,
	sBulbasaurSprites39,
	sBulbasaurSprites40,
	sBulbasaurSprites41,
	sBulbasaurSprites42,
	sBulbasaurSprites43,
	sBulbasaurSprites44,
	sBulbasaurSprites45,
	sBulbasaurSprites46,
	sBulbasaurSprites47,
	sBulbasaurSprites48,
	sBulbasaurSprites49,
	sBulbasaurSprites50,
	sBulbasaurSprites51,
	sBulbasaurSprites52,
	sBulbasaurSprites53,
	sBulbasaurSprites54,
	sBulbasaurSprites55,
	sBulbasaurSprites56,
	sBulbasaurSprites57,
	sBulbasaurSprites58,
	sBulbasaurSprites59,
	sBulbasaurSprites60,
	sBulbasaurSprites61,
	sBulbasaurSprites62,
	sBulbasaurSprites63,
	sBulbasaurSprites64,
	sBulbasaurSprites65,
	sBulbasaurSprites66,
	sBulbasaurSprites67,
	sBulbasaurSprites68,
	sBulbasaurSprites69,
	sBulbasaurSprites70,
	sBulbasaurSprites71,
};

static const axmain sAxMainBulbasaur = {
	.poses = sAxPosesBulbasaur,
	.animations = sAxAnimationsBulbasaur,
	.animCount = ARRAY_COUNT(sAxAnimationsBulbasaur),
	.spriteData = sAxSpritesBulbasaur,
	.positions = sAxPositionsBulbasaur,
};
