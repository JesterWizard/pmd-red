/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainEspeon;
const SiroArchive gAxEspeon = {"SIRO", &sAxMainEspeon};

static const ax_pose sEspeonPose1[] = {
	AX_POSE(0, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose2[] = {
	AX_POSE(1, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose3[] = {
	AX_POSE(2, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose4[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose5[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose6[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose7[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose8[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose9[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose10[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose11[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose12[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose13[] = {
	AX_POSE(12, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose14[] = {
	AX_POSE(13, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose15[] = {
	AX_POSE(14, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose16[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose17[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose18[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose19[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose20[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose21[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose22[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose23[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose24[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose73[] = {
	AX_POSE(15, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose74[] = {
	AX_POSE(16, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose75[] = {
	AX_POSE(17, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(3, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 2)),
	AX_POSE(16, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(5, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose76[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(3, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(16, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose77[] = {
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(17, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE(16, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(5, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose79[] = {
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose80[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose81[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 2)),
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(5, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose82[] = {
	AX_POSE(19, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose83[] = {
	AX_POSE(18, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(17, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(1, 3, 2)),
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(5, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose84[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose85[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose86[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose87[] = {
	AX_POSE(17, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(12, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 2)),
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(5, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose88[] = {
	AX_POSE(19, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(12, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose89[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(17, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(1, 3, 2)),
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(5, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose91[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose92[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose93[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(3, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(16, 3, 2)),
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(20, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose94[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(16, 3, 2)),
	AX_POSE(-1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose95[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(16, 3, 2)),
	AX_POSE(17, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(17, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose97[] = {
	AX_POSE(26, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose98[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose99[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(18, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(20, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose100[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(-1, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose101[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(17, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose102[] = {
	AX_POSE(12, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose103[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose104[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose105[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(20, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose106[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(-1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose107[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(17, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(17, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose109[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose110[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose111[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(5, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose112[] = {
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose113[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(5, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose115[] = {
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose116[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose117[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(5, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose118[] = {
	AX_POSE(19, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose119[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(17, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(5, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose120[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose129[] = {
	AX_POSE(28, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose130[] = {
	AX_POSE(29, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose131[] = {
	AX_POSE(30, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose132[] = {
	AX_POSE(31, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose133[] = {
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose134[] = {
	AX_POSE(33, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose135[] = {
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose136[] = {
	AX_POSE(33, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose137[] = {
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose138[] = {
	AX_POSE(31, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose142[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose143[] = {
	AX_POSE(27, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose144[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose167[] = {
	AX_POSE(20, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose168[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose185[] = {
	AX_POSE(20, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose186[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose187[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose188[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose191[] = {
	AX_POSE(27, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose192[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEspeonPose194[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const u8 sEspeonAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_4_1.lz");
static const u8 sEspeonAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_4_2.lz");
static const u8 sEspeonAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_4_3.lz");
static const u8 sEspeonAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_4_4.lz");
static const u8 sEspeonAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_4_5.lz");
static const u8 sEspeonAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_4_6.lz");
static const u8 sEspeonAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_4_7.lz");
static const u8 sEspeonAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_4_8.lz");
static const u8 sEspeonAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_8_1.lz");
static const u8 sEspeonAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_8_2.lz");
static const u8 sEspeonAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_8_3.lz");
static const u8 sEspeonAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_8_4.lz");
static const u8 sEspeonAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_8_5.lz");
static const u8 sEspeonAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_8_6.lz");
static const u8 sEspeonAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_8_7.lz");
static const u8 sEspeonAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_8_8.lz");
static const u8 sEspeonAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_9_1.lz");
static const u8 sEspeonAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_9_2.lz");
static const u8 sEspeonAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_9_4.lz");
static const u8 sEspeonAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_9_5.lz");
static const u8 sEspeonAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_9_6.lz");
static const u8 sEspeonAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/espeon/sEspeonAnims_9_8.lz");

static const u8 sEspeonGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_1.4bpp.lz");
static const ax_sprite sEspeonSprites1[] = {
	{sEspeonGfx1, ARRAY_COUNT(sEspeonGfx1)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_2.4bpp.lz");
static const ax_sprite sEspeonSprites2[] = {
	{sEspeonGfx2, ARRAY_COUNT(sEspeonGfx2)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_3.4bpp.lz");
static const ax_sprite sEspeonSprites3[] = {
	{sEspeonGfx3, ARRAY_COUNT(sEspeonGfx3)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_4.4bpp.lz");
static const ax_sprite sEspeonSprites4[] = {
	{sEspeonGfx4, ARRAY_COUNT(sEspeonGfx4)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_5.4bpp.lz");
static const ax_sprite sEspeonSprites5[] = {
	{sEspeonGfx5, ARRAY_COUNT(sEspeonGfx5)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_6.4bpp.lz");
static const ax_sprite sEspeonSprites6[] = {
	{sEspeonGfx6, ARRAY_COUNT(sEspeonGfx6)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_7.4bpp.lz");
static const ax_sprite sEspeonSprites7[] = {
	{sEspeonGfx7, ARRAY_COUNT(sEspeonGfx7)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_8.4bpp.lz");
static const ax_sprite sEspeonSprites8[] = {
	{sEspeonGfx8, ARRAY_COUNT(sEspeonGfx8)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_9.4bpp.lz");
static const ax_sprite sEspeonSprites9[] = {
	{sEspeonGfx9, ARRAY_COUNT(sEspeonGfx9)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_10.4bpp.lz");
static const ax_sprite sEspeonSprites10[] = {
	{sEspeonGfx10, ARRAY_COUNT(sEspeonGfx10)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_11.4bpp.lz");
static const ax_sprite sEspeonSprites11[] = {
	{sEspeonGfx11, ARRAY_COUNT(sEspeonGfx11)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_12.4bpp.lz");
static const ax_sprite sEspeonSprites12[] = {
	{sEspeonGfx12, ARRAY_COUNT(sEspeonGfx12)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_13.4bpp.lz");
static const ax_sprite sEspeonSprites13[] = {
	{sEspeonGfx13, ARRAY_COUNT(sEspeonGfx13)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_14.4bpp.lz");
static const ax_sprite sEspeonSprites14[] = {
	{sEspeonGfx14, ARRAY_COUNT(sEspeonGfx14)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_15.4bpp.lz");
static const ax_sprite sEspeonSprites15[] = {
	{sEspeonGfx15, ARRAY_COUNT(sEspeonGfx15)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_16.4bpp.lz");
static const u8 sEspeonGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_16_1.4bpp.lz");
static const u8 sEspeonGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_16_2.4bpp.lz");
static const ax_sprite sEspeonSprites16[] = {
	{sEspeonGfx16, ARRAY_COUNT(sEspeonGfx16)}, 
	{NULL, 32}, 
	{sEspeonGfx16_1, ARRAY_COUNT(sEspeonGfx16_1)}, 
	{NULL, 32}, 
	{sEspeonGfx16_2, ARRAY_COUNT(sEspeonGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEspeonGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_17.4bpp.lz");
static const u8 sEspeonGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_17_1.4bpp.lz");
static const u8 sEspeonGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_17_2.4bpp.lz");
static const u8 sEspeonGfx17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_17_3.4bpp.lz");
static const ax_sprite sEspeonSprites17[] = {
	{sEspeonGfx17, ARRAY_COUNT(sEspeonGfx17)}, 
	{NULL, 32}, 
	{sEspeonGfx17_1, ARRAY_COUNT(sEspeonGfx17_1)}, 
	{NULL, 32}, 
	{sEspeonGfx17_2, ARRAY_COUNT(sEspeonGfx17_2)}, 
	{NULL, 32}, 
	{sEspeonGfx17_3, ARRAY_COUNT(sEspeonGfx17_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sEspeonGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_18.4bpp.lz");
static const ax_sprite sEspeonSprites18[] = {
	{sEspeonGfx18, ARRAY_COUNT(sEspeonGfx18)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_19.4bpp.lz");
static const ax_sprite sEspeonSprites19[] = {
	{sEspeonGfx19, ARRAY_COUNT(sEspeonGfx19)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_20.4bpp.lz");
static const ax_sprite sEspeonSprites20[] = {
	{sEspeonGfx20, ARRAY_COUNT(sEspeonGfx20)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_21.4bpp.lz");
static const u8 sEspeonGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_21_1.4bpp.lz");
static const u8 sEspeonGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_21_2.4bpp.lz");
static const ax_sprite sEspeonSprites21[] = {
	{sEspeonGfx21, ARRAY_COUNT(sEspeonGfx21)}, 
	{NULL, 32}, 
	{sEspeonGfx21_1, ARRAY_COUNT(sEspeonGfx21_1)}, 
	{NULL, 32}, 
	{sEspeonGfx21_2, ARRAY_COUNT(sEspeonGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEspeonGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_22.4bpp.lz");
static const u8 sEspeonGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_22_1.4bpp.lz");
static const u8 sEspeonGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_22_2.4bpp.lz");
static const u8 sEspeonGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_22_3.4bpp.lz");
static const ax_sprite sEspeonSprites22[] = {
	{sEspeonGfx22, ARRAY_COUNT(sEspeonGfx22)}, 
	{NULL, 32}, 
	{sEspeonGfx22_1, ARRAY_COUNT(sEspeonGfx22_1)}, 
	{NULL, 32}, 
	{sEspeonGfx22_2, ARRAY_COUNT(sEspeonGfx22_2)}, 
	{NULL, 32}, 
	{sEspeonGfx22_3, ARRAY_COUNT(sEspeonGfx22_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sEspeonGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_23.4bpp.lz");
static const u8 sEspeonGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_23_1.4bpp.lz");
static const u8 sEspeonGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_23_2.4bpp.lz");
static const ax_sprite sEspeonSprites23[] = {
	{sEspeonGfx23, ARRAY_COUNT(sEspeonGfx23)}, 
	{NULL, 32}, 
	{sEspeonGfx23_1, ARRAY_COUNT(sEspeonGfx23_1)}, 
	{NULL, 64}, 
	{sEspeonGfx23_2, ARRAY_COUNT(sEspeonGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEspeonGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_24.4bpp.lz");
static const ax_sprite sEspeonSprites24[] = {
	{sEspeonGfx24, ARRAY_COUNT(sEspeonGfx24)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sEspeonGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_25.4bpp.lz");
static const u8 sEspeonGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_25_1.4bpp.lz");
static const u8 sEspeonGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_25_2.4bpp.lz");
static const u8 sEspeonGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_25_3.4bpp.lz");
static const ax_sprite sEspeonSprites25[] = {
	{NULL, 32}, 
	{sEspeonGfx25, ARRAY_COUNT(sEspeonGfx25)}, 
	{NULL, 32}, 
	{sEspeonGfx25_1, ARRAY_COUNT(sEspeonGfx25_1)}, 
	{NULL, 32}, 
	{sEspeonGfx25_2, ARRAY_COUNT(sEspeonGfx25_2)}, 
	{NULL, 32}, 
	{sEspeonGfx25_3, ARRAY_COUNT(sEspeonGfx25_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sEspeonGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_26.4bpp.lz");
static const u8 sEspeonGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_26_1.4bpp.lz");
static const u8 sEspeonGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_26_2.4bpp.lz");
static const u8 sEspeonGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_26_3.4bpp.lz");
static const ax_sprite sEspeonSprites26[] = {
	{sEspeonGfx26, ARRAY_COUNT(sEspeonGfx26)}, 
	{NULL, 64}, 
	{sEspeonGfx26_1, ARRAY_COUNT(sEspeonGfx26_1)}, 
	{NULL, 32}, 
	{sEspeonGfx26_2, ARRAY_COUNT(sEspeonGfx26_2)}, 
	{NULL, 32}, 
	{sEspeonGfx26_3, ARRAY_COUNT(sEspeonGfx26_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sEspeonGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_27.4bpp.lz");
static const u8 sEspeonGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_27_1.4bpp.lz");
static const u8 sEspeonGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_27_2.4bpp.lz");
static const ax_sprite sEspeonSprites27[] = {
	{sEspeonGfx27, ARRAY_COUNT(sEspeonGfx27)}, 
	{NULL, 32}, 
	{sEspeonGfx27_1, ARRAY_COUNT(sEspeonGfx27_1)}, 
	{NULL, 32}, 
	{sEspeonGfx27_2, ARRAY_COUNT(sEspeonGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sEspeonGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_28.4bpp.lz");
static const u8 sEspeonGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_28_1.4bpp.lz");
static const u8 sEspeonGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_28_2.4bpp.lz");
static const u8 sEspeonGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_28_3.4bpp.lz");
static const ax_sprite sEspeonSprites28[] = {
	{sEspeonGfx28, ARRAY_COUNT(sEspeonGfx28)}, 
	{NULL, 32}, 
	{sEspeonGfx28_1, ARRAY_COUNT(sEspeonGfx28_1)}, 
	{NULL, 32}, 
	{sEspeonGfx28_2, ARRAY_COUNT(sEspeonGfx28_2)}, 
	{NULL, 32}, 
	{sEspeonGfx28_3, ARRAY_COUNT(sEspeonGfx28_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sEspeonGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_29.4bpp.lz");
static const ax_sprite sEspeonSprites29[] = {
	{sEspeonGfx29, ARRAY_COUNT(sEspeonGfx29)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_30.4bpp.lz");
static const ax_sprite sEspeonSprites30[] = {
	{sEspeonGfx30, ARRAY_COUNT(sEspeonGfx30)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_31.4bpp.lz");
static const ax_sprite sEspeonSprites31[] = {
	{sEspeonGfx31, ARRAY_COUNT(sEspeonGfx31)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_32.4bpp.lz");
static const ax_sprite sEspeonSprites32[] = {
	{sEspeonGfx32, ARRAY_COUNT(sEspeonGfx32)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_33.4bpp.lz");
static const ax_sprite sEspeonSprites33[] = {
	{sEspeonGfx33, ARRAY_COUNT(sEspeonGfx33)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_34.4bpp.lz");
static const ax_sprite sEspeonSprites34[] = {
	{sEspeonGfx34, ARRAY_COUNT(sEspeonGfx34)}, 
	{NULL, 0}
};
static const u8 sEspeonGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/espeon/sprite_35.4bpp.lz");
static const ax_sprite sEspeonSprites35[] = {
	{sEspeonGfx35, ARRAY_COUNT(sEspeonGfx35)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesEspeon[] = {
	sEspeonPose1,
	sEspeonPose2,
	sEspeonPose3,
	sEspeonPose4,
	sEspeonPose5,
	sEspeonPose6,
	sEspeonPose7,
	sEspeonPose8,
	sEspeonPose9,
	sEspeonPose10,
	sEspeonPose11,
	sEspeonPose12,
	sEspeonPose13,
	sEspeonPose14,
	sEspeonPose15,
	sEspeonPose16,
	sEspeonPose17,
	sEspeonPose18,
	sEspeonPose19,
	sEspeonPose20,
	sEspeonPose21,
	sEspeonPose22,
	sEspeonPose23,
	sEspeonPose24,
	sEspeonPose1,
	sEspeonPose2,
	sEspeonPose3,
	sEspeonPose4,
	sEspeonPose5,
	sEspeonPose6,
	sEspeonPose7,
	sEspeonPose8,
	sEspeonPose9,
	sEspeonPose10,
	sEspeonPose11,
	sEspeonPose12,
	sEspeonPose13,
	sEspeonPose14,
	sEspeonPose15,
	sEspeonPose16,
	sEspeonPose17,
	sEspeonPose18,
	sEspeonPose19,
	sEspeonPose20,
	sEspeonPose21,
	sEspeonPose22,
	sEspeonPose23,
	sEspeonPose24,
	sEspeonPose1,
	sEspeonPose2,
	sEspeonPose3,
	sEspeonPose4,
	sEspeonPose5,
	sEspeonPose6,
	sEspeonPose7,
	sEspeonPose8,
	sEspeonPose9,
	sEspeonPose10,
	sEspeonPose11,
	sEspeonPose12,
	sEspeonPose13,
	sEspeonPose14,
	sEspeonPose15,
	sEspeonPose16,
	sEspeonPose17,
	sEspeonPose18,
	sEspeonPose19,
	sEspeonPose20,
	sEspeonPose21,
	sEspeonPose22,
	sEspeonPose23,
	sEspeonPose24,
	sEspeonPose73,
	sEspeonPose74,
	sEspeonPose75,
	sEspeonPose76,
	sEspeonPose77,
	sEspeonPose1,
	sEspeonPose79,
	sEspeonPose80,
	sEspeonPose81,
	sEspeonPose82,
	sEspeonPose83,
	sEspeonPose84,
	sEspeonPose85,
	sEspeonPose86,
	sEspeonPose87,
	sEspeonPose88,
	sEspeonPose89,
	sEspeonPose7,
	sEspeonPose91,
	sEspeonPose92,
	sEspeonPose93,
	sEspeonPose94,
	sEspeonPose95,
	sEspeonPose10,
	sEspeonPose97,
	sEspeonPose98,
	sEspeonPose99,
	sEspeonPose100,
	sEspeonPose101,
	sEspeonPose102,
	sEspeonPose103,
	sEspeonPose104,
	sEspeonPose105,
	sEspeonPose106,
	sEspeonPose107,
	sEspeonPose16,
	sEspeonPose109,
	sEspeonPose110,
	sEspeonPose111,
	sEspeonPose112,
	sEspeonPose113,
	sEspeonPose19,
	sEspeonPose115,
	sEspeonPose116,
	sEspeonPose117,
	sEspeonPose118,
	sEspeonPose119,
	sEspeonPose120,
	sEspeonPose1,
	sEspeonPose22,
	sEspeonPose19,
	sEspeonPose16,
	sEspeonPose13,
	sEspeonPose10,
	sEspeonPose7,
	sEspeonPose4,
	sEspeonPose129,
	sEspeonPose130,
	sEspeonPose131,
	sEspeonPose132,
	sEspeonPose133,
	sEspeonPose134,
	sEspeonPose135,
	sEspeonPose136,
	sEspeonPose137,
	sEspeonPose138,
	sEspeonPose74,
	sEspeonPose116,
	sEspeonPose110,
	sEspeonPose142,
	sEspeonPose143,
	sEspeonPose144,
	sEspeonPose86,
	sEspeonPose80,
	sEspeonPose1,
	sEspeonPose22,
	sEspeonPose19,
	sEspeonPose16,
	sEspeonPose13,
	sEspeonPose10,
	sEspeonPose7,
	sEspeonPose4,
	sEspeonPose74,
	sEspeonPose80,
	sEspeonPose86,
	sEspeonPose144,
	sEspeonPose143,
	sEspeonPose142,
	sEspeonPose110,
	sEspeonPose116,
	sEspeonPose1,
	sEspeonPose73,
	sEspeonPose74,
	sEspeonPose4,
	sEspeonPose167,
	sEspeonPose168,
	sEspeonPose7,
	sEspeonPose85,
	sEspeonPose86,
	sEspeonPose10,
	sEspeonPose91,
	sEspeonPose92,
	sEspeonPose102,
	sEspeonPose97,
	sEspeonPose98,
	sEspeonPose16,
	sEspeonPose103,
	sEspeonPose104,
	sEspeonPose19,
	sEspeonPose109,
	sEspeonPose110,
	sEspeonPose22,
	sEspeonPose185,
	sEspeonPose186,
	sEspeonPose187,
	sEspeonPose188,
	sEspeonPose110,
	sEspeonPose142,
	sEspeonPose191,
	sEspeonPose192,
	sEspeonPose86,
	sEspeonPose194,
	sEspeonPose1,
	sEspeonPose22,
	sEspeonPose19,
	sEspeonPose16,
	sEspeonPose13,
	sEspeonPose10,
	sEspeonPose7,
	sEspeonPose4,
};

static const struct PositionSets sAxPositionsEspeon[] = {
	[0] = { .set = { {0, -8}, {-2, 1}, {2, 1}, {0, -7} } },
	[1] = { .set = { {0, -7}, {-1, 3}, {2, -1}, {0, -6} } },
	[2] = { .set = { {0, -7}, {-2, -1}, {0, 3}, {0, -6} } },
	[3] = { .set = { {8, -9}, {4, 0}, {1, 1}, {1, -7} } },
	[4] = { .set = { {8, -8}, {1, -2}, {5, 2}, {1, -6} } },
	[5] = { .set = { {8, -8}, {8, 1}, {-2, 0}, {1, -5} } },
	[6] = { .set = { {11, -10}, {6, -2}, {4, 0}, {1, -7} } },
	[7] = { .set = { {11, -9}, {10, 0}, {2, 1}, {2, -6} } },
	[8] = { .set = { {11, -9}, {1, 0}, {9, 0}, {2, -6} } },
	[9] = { .set = { {5, -13}, {1, -3}, {5, -1}, {1, -8} } },
	[10] = { .set = { {5, -11}, {1, -2}, {9, -4}, {1, -6} } },
	[11] = { .set = { {5, -11}, {3, -5}, {4, 0}, {1, -7} } },
	[12] = { .set = { {1, -13}, {4, -3}, {-1, -3}, {1, -8} } },
	[13] = { .set = { {0, -12}, {4, -3}, {-1, -4}, {1, -8} } },
	[14] = { .set = { {1, -12}, {3, -6}, {-2, -2}, {1, -8} } },
	[15] = { .set = { {-5, -13}, {-1, -3}, {-5, -1}, {-1, -8} } },
	[16] = { .set = { {-5, -11}, {-1, -2}, {-9, -4}, {-1, -6} } },
	[17] = { .set = { {-5, -11}, {-3, -5}, {-4, 0}, {-1, -7} } },
	[18] = { .set = { {-12, -10}, {-7, -2}, {-5, 0}, {-2, -7} } },
	[19] = { .set = { {-12, -9}, {-11, 0}, {-3, 1}, {-3, -6} } },
	[20] = { .set = { {-12, -9}, {-2, 0}, {-10, 0}, {-3, -6} } },
	[21] = { .set = { {-9, -9}, {-5, 0}, {-2, 1}, {-2, -7} } },
	[22] = { .set = { {-9, -8}, {-2, -2}, {-6, 2}, {-2, -6} } },
	[23] = { .set = { {-9, -8}, {-9, 1}, {1, 0}, {-2, -5} } },
	[24] = { .set = { {0, -8}, {-2, 1}, {2, 1}, {0, -7} } },
	[25] = { .set = { {0, -7}, {-1, 3}, {2, -1}, {0, -6} } },
	[26] = { .set = { {0, -7}, {-2, -1}, {0, 3}, {0, -6} } },
	[27] = { .set = { {8, -9}, {4, 0}, {1, 1}, {1, -7} } },
	[28] = { .set = { {8, -8}, {1, -2}, {5, 2}, {1, -6} } },
	[29] = { .set = { {8, -8}, {8, 1}, {-2, 0}, {1, -5} } },
	[30] = { .set = { {11, -10}, {6, -2}, {4, 0}, {1, -7} } },
	[31] = { .set = { {11, -9}, {10, 0}, {2, 1}, {2, -6} } },
	[32] = { .set = { {11, -9}, {1, 0}, {9, 0}, {2, -6} } },
	[33] = { .set = { {5, -13}, {1, -3}, {5, -1}, {1, -8} } },
	[34] = { .set = { {5, -11}, {1, -2}, {9, -4}, {1, -6} } },
	[35] = { .set = { {5, -11}, {3, -5}, {4, 0}, {1, -7} } },
	[36] = { .set = { {1, -13}, {4, -3}, {-1, -3}, {1, -8} } },
	[37] = { .set = { {0, -12}, {4, -3}, {-1, -4}, {1, -8} } },
	[38] = { .set = { {1, -12}, {3, -6}, {-2, -2}, {1, -8} } },
	[39] = { .set = { {-5, -13}, {-1, -3}, {-5, -1}, {-1, -8} } },
	[40] = { .set = { {-5, -11}, {-1, -2}, {-9, -4}, {-1, -6} } },
	[41] = { .set = { {-5, -11}, {-3, -5}, {-4, 0}, {-1, -7} } },
	[42] = { .set = { {-12, -10}, {-7, -2}, {-5, 0}, {-2, -7} } },
	[43] = { .set = { {-12, -9}, {-11, 0}, {-3, 1}, {-3, -6} } },
	[44] = { .set = { {-12, -9}, {-2, 0}, {-10, 0}, {-3, -6} } },
	[45] = { .set = { {-9, -9}, {-5, 0}, {-2, 1}, {-2, -7} } },
	[46] = { .set = { {-9, -8}, {-2, -2}, {-6, 2}, {-2, -6} } },
	[47] = { .set = { {-9, -8}, {-9, 1}, {1, 0}, {-2, -5} } },
	[48] = { .set = { {0, -8}, {-2, 1}, {2, 1}, {0, -7} } },
	[49] = { .set = { {0, -7}, {-1, 3}, {2, -1}, {0, -6} } },
	[50] = { .set = { {0, -7}, {-2, -1}, {0, 3}, {0, -6} } },
	[51] = { .set = { {8, -9}, {4, 0}, {1, 1}, {1, -7} } },
	[52] = { .set = { {8, -8}, {1, -2}, {5, 2}, {1, -6} } },
	[53] = { .set = { {8, -8}, {8, 1}, {-2, 0}, {1, -5} } },
	[54] = { .set = { {11, -10}, {6, -2}, {4, 0}, {1, -7} } },
	[55] = { .set = { {11, -9}, {10, 0}, {2, 1}, {2, -6} } },
	[56] = { .set = { {11, -9}, {1, 0}, {9, 0}, {2, -6} } },
	[57] = { .set = { {5, -13}, {1, -3}, {5, -1}, {1, -8} } },
	[58] = { .set = { {5, -11}, {1, -2}, {9, -4}, {1, -6} } },
	[59] = { .set = { {5, -11}, {3, -5}, {4, 0}, {1, -7} } },
	[60] = { .set = { {1, -13}, {4, -3}, {-1, -3}, {1, -8} } },
	[61] = { .set = { {0, -12}, {4, -3}, {-1, -4}, {1, -8} } },
	[62] = { .set = { {1, -12}, {3, -6}, {-2, -2}, {1, -8} } },
	[63] = { .set = { {-5, -13}, {-1, -3}, {-5, -1}, {-1, -8} } },
	[64] = { .set = { {-5, -11}, {-1, -2}, {-9, -4}, {-1, -6} } },
	[65] = { .set = { {-5, -11}, {-3, -5}, {-4, 0}, {-1, -7} } },
	[66] = { .set = { {-12, -10}, {-7, -2}, {-5, 0}, {-2, -7} } },
	[67] = { .set = { {-12, -9}, {-11, 0}, {-3, 1}, {-3, -6} } },
	[68] = { .set = { {-12, -9}, {-2, 0}, {-10, 0}, {-3, -6} } },
	[69] = { .set = { {-9, -9}, {-5, 0}, {-2, 1}, {-2, -7} } },
	[70] = { .set = { {-9, -8}, {-2, -2}, {-6, 2}, {-2, -6} } },
	[71] = { .set = { {-9, -8}, {-9, 1}, {1, 0}, {-2, -5} } },
	[72] = { .set = { {6, -19}, {5, -4}, {6, -6}, {0, -8} } },
	[73] = { .set = { {1, -5}, {-3, 2}, {4, 1}, {1, -6} } },
	[74] = { .set = { {1, -5}, {-3, 2}, {4, 1}, {1, -6} } },
	[75] = { .set = { {1, -5}, {-3, 2}, {4, 1}, {1, -6} } },
	[76] = { .set = { {1, -5}, {-3, 2}, {4, 1}, {1, -6} } },
	[77] = { .set = { {0, -8}, {-2, 1}, {2, 1}, {0, -7} } },
	[78] = { .set = { {-5, -16}, {-1, -1}, {-3, -1}, {-2, -7} } },
	[79] = { .set = { {9, -5}, {7, 1}, {2, 1}, {0, -5} } },
	[80] = { .set = { {9, -5}, {7, 1}, {2, 1}, {0, -5} } },
	[81] = { .set = { {9, -5}, {7, 1}, {2, 1}, {0, -5} } },
	[82] = { .set = { {9, -5}, {7, 1}, {2, 1}, {0, -5} } },
	[83] = { .set = { {8, -7}, {4, 2}, {1, 3}, {1, -5} } },
	[84] = { .set = { {0, -14}, {2, -4}, {0, -2}, {-1, -8} } },
	[85] = { .set = { {11, -7}, {7, -2}, {3, 0}, {1, -6} } },
	[86] = { .set = { {11, -7}, {7, -2}, {3, 0}, {1, -6} } },
	[87] = { .set = { {11, -7}, {7, -2}, {3, 0}, {1, -6} } },
	[88] = { .set = { {11, -7}, {7, -2}, {3, 0}, {1, -6} } },
	[89] = { .set = { {11, -10}, {6, -2}, {4, 0}, {1, -7} } },
	[90] = { .set = { {5, -12}, {5, -5}, {3, -2}, {-1, -6} } },
	[91] = { .set = { {6, -9}, {6, -3}, {4, 0}, {1, -6} } },
	[92] = { .set = { {6, -9}, {6, -3}, {4, 0}, {1, -6} } },
	[93] = { .set = { {6, -9}, {6, -3}, {4, 0}, {1, -6} } },
	[94] = { .set = { {6, -9}, {6, -3}, {4, 0}, {1, -6} } },
	[95] = { .set = { {5, -13}, {1, -3}, {5, -1}, {1, -8} } },
	[96] = { .set = { {-4, -14}, {0, -5}, {-4, -3}, {0, -4} } },
	[97] = { .set = { {0, -8}, {5, -5}, {-5, -4}, {0, -4} } },
	[98] = { .set = { {0, -8}, {5, -5}, {-5, -4}, {0, -4} } },
	[99] = { .set = { {0, -8}, {5, -5}, {-5, -4}, {0, -4} } },
	[100] = { .set = { {0, -8}, {5, -5}, {-5, -4}, {0, -4} } },
	[101] = { .set = { {0, -13}, {3, -3}, {-2, -3}, {0, -8} } },
	[102] = { .set = { {-5, -12}, {-5, -5}, {-3, -2}, {1, -6} } },
	[103] = { .set = { {-6, -9}, {-6, -3}, {-4, 0}, {-1, -6} } },
	[104] = { .set = { {-6, -9}, {-6, -3}, {-4, 0}, {-1, -6} } },
	[105] = { .set = { {-6, -9}, {-6, -3}, {-4, 0}, {-1, -6} } },
	[106] = { .set = { {-6, -9}, {-6, -3}, {-4, 0}, {-1, -6} } },
	[107] = { .set = { {-5, -13}, {-1, -3}, {-5, -1}, {-1, -8} } },
	[108] = { .set = { {-1, -14}, {-3, -4}, {-1, -2}, {0, -8} } },
	[109] = { .set = { {-12, -7}, {-8, -2}, {-4, 0}, {-2, -6} } },
	[110] = { .set = { {-12, -7}, {-8, -2}, {-4, 0}, {-2, -6} } },
	[111] = { .set = { {-12, -7}, {-8, -2}, {-4, 0}, {-2, -6} } },
	[112] = { .set = { {-12, -7}, {-8, -2}, {-4, 0}, {-2, -6} } },
	[113] = { .set = { {-12, -10}, {-7, -2}, {-5, 0}, {-2, -7} } },
	[114] = { .set = { {4, -16}, {0, -1}, {2, -1}, {1, -7} } },
	[115] = { .set = { {-10, -5}, {-8, 1}, {-3, 1}, {-1, -5} } },
	[116] = { .set = { {-10, -5}, {-8, 1}, {-3, 1}, {-1, -5} } },
	[117] = { .set = { {-10, -5}, {-8, 1}, {-3, 1}, {-1, -5} } },
	[118] = { .set = { {-10, -5}, {-8, 1}, {-3, 1}, {-1, -5} } },
	[119] = { .set = { {-9, -7}, {-5, 2}, {-2, 3}, {-2, -5} } },
	[120] = { .set = { {0, -8}, {-2, 1}, {2, 1}, {0, -7} } },
	[121] = { .set = { {-9, -9}, {-5, 0}, {-2, 1}, {-2, -7} } },
	[122] = { .set = { {-12, -10}, {-7, -2}, {-5, 0}, {-2, -7} } },
	[123] = { .set = { {-5, -13}, {-1, -3}, {-5, -1}, {-1, -8} } },
	[124] = { .set = { {1, -13}, {4, -3}, {-1, -3}, {1, -8} } },
	[125] = { .set = { {5, -13}, {1, -3}, {5, -1}, {1, -8} } },
	[126] = { .set = { {11, -10}, {6, -2}, {4, 0}, {1, -7} } },
	[127] = { .set = { {8, -9}, {4, 0}, {1, 1}, {1, -7} } },
	[128] = { .set = { {-9, -4}, {-8, -1}, {-7, 0}, {-3, -3} } },
	[129] = { .set = { {-9, -3}, {-8, -1}, {-7, 0}, {-3, -4} } },
	[130] = { .set = { {0, -8}, {-4, -11}, {4, -11}, {0, -7} } },
	[131] = { .set = { {2, -10}, {5, -13}, {-2, -11}, {-4, -7} } },
	[132] = { .set = { {4, -11}, {4, -15}, {1, -12}, {-3, -9} } },
	[133] = { .set = { {1, -12}, {0, -15}, {5, -13}, {-2, -7} } },
	[134] = { .set = { {-1, -12}, {5, -13}, {-7, -13}, {-1, -9} } },
	[135] = { .set = { {-2, -12}, {-1, -15}, {-6, -13}, {1, -7} } },
	[136] = { .set = { {-5, -11}, {-5, -15}, {-2, -12}, {2, -9} } },
	[137] = { .set = { {-3, -10}, {-6, -13}, {1, -11}, {3, -7} } },
	[138] = { .set = { {1, -5}, {-3, 2}, {4, 1}, {1, -6} } },
	[139] = { .set = { {-10, -5}, {-8, 1}, {-3, 1}, {-1, -5} } },
	[140] = { .set = { {-12, -7}, {-8, -2}, {-4, 0}, {-2, -6} } },
	[141] = { .set = { {-6, -10}, {-6, -4}, {-4, -1}, {-1, -7} } },
	[142] = { .set = { {0, -9}, {5, -6}, {-5, -5}, {0, -5} } },
	[143] = { .set = { {6, -10}, {6, -4}, {4, -1}, {1, -7} } },
	[144] = { .set = { {11, -7}, {7, -2}, {3, 0}, {1, -6} } },
	[145] = { .set = { {9, -5}, {7, 1}, {2, 1}, {0, -5} } },
	[146] = { .set = { {0, -8}, {-2, 1}, {2, 1}, {0, -7} } },
	[147] = { .set = { {-9, -9}, {-5, 0}, {-2, 1}, {-2, -7} } },
	[148] = { .set = { {-12, -10}, {-7, -2}, {-5, 0}, {-2, -7} } },
	[149] = { .set = { {-5, -13}, {-1, -3}, {-5, -1}, {-1, -8} } },
	[150] = { .set = { {1, -13}, {4, -3}, {-1, -3}, {1, -8} } },
	[151] = { .set = { {5, -13}, {1, -3}, {5, -1}, {1, -8} } },
	[152] = { .set = { {11, -10}, {6, -2}, {4, 0}, {1, -7} } },
	[153] = { .set = { {8, -9}, {4, 0}, {1, 1}, {1, -7} } },
	[154] = { .set = { {1, -5}, {-3, 2}, {4, 1}, {1, -6} } },
	[155] = { .set = { {9, -5}, {7, 1}, {2, 1}, {0, -5} } },
	[156] = { .set = { {11, -7}, {7, -2}, {3, 0}, {1, -6} } },
	[157] = { .set = { {6, -10}, {6, -4}, {4, -1}, {1, -7} } },
	[158] = { .set = { {0, -9}, {5, -6}, {-5, -5}, {0, -5} } },
	[159] = { .set = { {-6, -10}, {-6, -4}, {-4, -1}, {-1, -7} } },
	[160] = { .set = { {-12, -7}, {-8, -2}, {-4, 0}, {-2, -6} } },
	[161] = { .set = { {-10, -5}, {-8, 1}, {-3, 1}, {-1, -5} } },
	[162] = { .set = { {0, -8}, {-2, 1}, {2, 1}, {0, -7} } },
	[163] = { .set = { {6, -19}, {5, -4}, {6, -6}, {0, -8} } },
	[164] = { .set = { {1, -5}, {-3, 2}, {4, 1}, {1, -6} } },
	[165] = { .set = { {8, -9}, {4, 0}, {1, 1}, {1, -7} } },
	[166] = { .set = { {-5, -18}, {-1, -3}, {-3, -3}, {-2, -9} } },
	[167] = { .set = { {9, -7}, {7, -1}, {2, -1}, {0, -7} } },
	[168] = { .set = { {11, -10}, {6, -2}, {4, 0}, {1, -7} } },
	[169] = { .set = { {0, -14}, {2, -4}, {0, -2}, {-1, -8} } },
	[170] = { .set = { {11, -7}, {7, -2}, {3, 0}, {1, -6} } },
	[171] = { .set = { {5, -13}, {1, -3}, {5, -1}, {1, -8} } },
	[172] = { .set = { {5, -12}, {5, -5}, {3, -2}, {-1, -6} } },
	[173] = { .set = { {6, -9}, {6, -3}, {4, 0}, {1, -6} } },
	[174] = { .set = { {0, -13}, {3, -3}, {-2, -3}, {0, -8} } },
	[175] = { .set = { {-4, -14}, {0, -5}, {-4, -3}, {0, -4} } },
	[176] = { .set = { {0, -8}, {5, -5}, {-5, -4}, {0, -4} } },
	[177] = { .set = { {-5, -13}, {-1, -3}, {-5, -1}, {-1, -8} } },
	[178] = { .set = { {-5, -12}, {-5, -5}, {-3, -2}, {1, -6} } },
	[179] = { .set = { {-6, -9}, {-6, -3}, {-4, 0}, {-1, -6} } },
	[180] = { .set = { {-12, -10}, {-7, -2}, {-5, 0}, {-2, -7} } },
	[181] = { .set = { {-1, -14}, {-3, -4}, {-1, -2}, {0, -8} } },
	[182] = { .set = { {-12, -7}, {-8, -2}, {-4, 0}, {-2, -6} } },
	[183] = { .set = { {-9, -9}, {-5, 0}, {-2, 1}, {-2, -7} } },
	[184] = { .set = { {4, -18}, {0, -3}, {2, -3}, {1, -9} } },
	[185] = { .set = { {-10, -7}, {-8, -1}, {-3, -1}, {-1, -7} } },
	[186] = { .set = { {0, -4}, {-4, 3}, {3, 2}, {0, -5} } },
	[187] = { .set = { {-9, -6}, {-7, 0}, {-2, 0}, {0, -6} } },
	[188] = { .set = { {-12, -7}, {-8, -2}, {-4, 0}, {-2, -6} } },
	[189] = { .set = { {-6, -10}, {-6, -4}, {-4, -1}, {-1, -7} } },
	[190] = { .set = { {-1, -11}, {4, -8}, {-6, -7}, {-1, -7} } },
	[191] = { .set = { {5, -10}, {5, -4}, {3, -1}, {0, -7} } },
	[192] = { .set = { {11, -7}, {7, -2}, {3, 0}, {1, -6} } },
	[193] = { .set = { {8, -6}, {6, 0}, {1, 0}, {-1, -6} } },
	[194] = { .set = { {0, -8}, {-2, 1}, {2, 1}, {0, -7} } },
	[195] = { .set = { {-9, -9}, {-5, 0}, {-2, 1}, {-2, -7} } },
	[196] = { .set = { {-12, -10}, {-7, -2}, {-5, 0}, {-2, -7} } },
	[197] = { .set = { {-5, -13}, {-1, -3}, {-5, -1}, {-1, -8} } },
	[198] = { .set = { {1, -13}, {4, -3}, {-1, -3}, {1, -8} } },
	[199] = { .set = { {5, -13}, {1, -3}, {5, -1}, {1, -8} } },
	[200] = { .set = { {11, -10}, {6, -2}, {4, 0}, {1, -7} } },
	[201] = { .set = { {8, -9}, {4, 0}, {1, 1}, {1, -7} } },
};

static const ax_anim *const sEspeonAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02603),
	AX_ANIM_PTR(gAxSharedAnim_02679),
	AX_ANIM_PTR(gAxSharedAnim_02688),
	AX_ANIM_PTR(gAxSharedAnim_02697),
	AX_ANIM_PTR(gAxSharedAnim_02615),
	AX_ANIM_PTR(gAxSharedAnim_02637),
	AX_ANIM_PTR(gAxSharedAnim_02650),
	AX_ANIM_PTR(gAxSharedAnim_02659),
};

static const ax_anim *const sEspeonAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_02432),
	AX_ANIM_PTR(gAxSharedAnim_02435),
	AX_ANIM_PTR(gAxSharedAnim_02436),
	AX_ANIM_PTR(gAxSharedAnim_02437),
	AX_ANIM_PTR(gAxSharedAnim_02438),
	AX_ANIM_PTR(gAxSharedAnim_02439),
	AX_ANIM_PTR(gAxSharedAnim_02441),
	AX_ANIM_PTR(gAxSharedAnim_02442),
};

static const ax_anim *const sEspeonAnimTable3[] = {
	AX_ANIM_PTR(gAxSharedAnim_02443),
	AX_ANIM_PTR(gAxSharedAnim_02444),
	AX_ANIM_PTR(gAxSharedAnim_02445),
	AX_ANIM_PTR(gAxSharedAnim_02446),
	AX_ANIM_PTR(gAxSharedAnim_02448),
	AX_ANIM_PTR(gAxSharedAnim_02449),
	AX_ANIM_PTR(gAxSharedAnim_02450),
	AX_ANIM_PTR(gAxSharedAnim_02451),
};

static const ax_anim *const sEspeonAnimTable4[] = {
	AX_ANIM_PTR(sEspeonAnims_4_1),
	AX_ANIM_PTR(sEspeonAnims_4_2),
	AX_ANIM_PTR(sEspeonAnims_4_3),
	AX_ANIM_PTR(sEspeonAnims_4_4),
	AX_ANIM_PTR(sEspeonAnims_4_5),
	AX_ANIM_PTR(sEspeonAnims_4_6),
	AX_ANIM_PTR(sEspeonAnims_4_7),
	AX_ANIM_PTR(sEspeonAnims_4_8),
};

static const ax_anim *const sEspeonAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00321),
	AX_ANIM_PTR(gAxSharedAnim_00373),
	AX_ANIM_PTR(gAxSharedAnim_00366),
	AX_ANIM_PTR(gAxSharedAnim_00360),
	AX_ANIM_PTR(gAxSharedAnim_00354),
	AX_ANIM_PTR(gAxSharedAnim_00344),
	AX_ANIM_PTR(gAxSharedAnim_00336),
	AX_ANIM_PTR(gAxSharedAnim_00327),
};

static const ax_anim *const sEspeonAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
};

static const ax_anim *const sEspeonAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00398),
	AX_ANIM_PTR(gAxSharedAnim_00404),
	AX_ANIM_PTR(gAxSharedAnim_00415),
	AX_ANIM_PTR(gAxSharedAnim_00424),
	AX_ANIM_PTR(gAxSharedAnim_00436),
	AX_ANIM_PTR(gAxSharedAnim_00444),
	AX_ANIM_PTR(gAxSharedAnim_00454),
	AX_ANIM_PTR(gAxSharedAnim_00464),
};

static const ax_anim *const sEspeonAnimTable8[] = {
	AX_ANIM_PTR(sEspeonAnims_8_1),
	AX_ANIM_PTR(sEspeonAnims_8_2),
	AX_ANIM_PTR(sEspeonAnims_8_3),
	AX_ANIM_PTR(sEspeonAnims_8_4),
	AX_ANIM_PTR(sEspeonAnims_8_5),
	AX_ANIM_PTR(sEspeonAnims_8_6),
	AX_ANIM_PTR(sEspeonAnims_8_7),
	AX_ANIM_PTR(sEspeonAnims_8_8),
};

static const ax_anim *const sEspeonAnimTable9[] = {
	AX_ANIM_PTR(sEspeonAnims_9_1),
	AX_ANIM_PTR(sEspeonAnims_9_2),
	AX_ANIM_PTR(gAxSharedAnim_00590),
	AX_ANIM_PTR(sEspeonAnims_9_4),
	AX_ANIM_PTR(sEspeonAnims_9_5),
	AX_ANIM_PTR(sEspeonAnims_9_6),
	AX_ANIM_PTR(gAxSharedAnim_00553),
	AX_ANIM_PTR(sEspeonAnims_9_8),
};

static const ax_anim *const sEspeonAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00612),
	AX_ANIM_PTR(gAxSharedAnim_00622),
	AX_ANIM_PTR(gAxSharedAnim_00632),
	AX_ANIM_PTR(gAxSharedAnim_00642),
	AX_ANIM_PTR(gAxSharedAnim_00651),
	AX_ANIM_PTR(gAxSharedAnim_00660),
	AX_ANIM_PTR(gAxSharedAnim_00675),
	AX_ANIM_PTR(gAxSharedAnim_00686),
};

static const ax_anim *const sEspeonAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_00697),
	AX_ANIM_PTR(gAxSharedAnim_00736),
	AX_ANIM_PTR(gAxSharedAnim_00768),
	AX_ANIM_PTR(gAxSharedAnim_00812),
	AX_ANIM_PTR(gAxSharedAnim_00847),
	AX_ANIM_PTR(gAxSharedAnim_00887),
	AX_ANIM_PTR(gAxSharedAnim_00929),
	AX_ANIM_PTR(gAxSharedAnim_00963),
};

static const ax_anim *const sEspeonAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01018),
	AX_ANIM_PTR(gAxSharedAnim_01128),
	AX_ANIM_PTR(gAxSharedAnim_01099),
	AX_ANIM_PTR(gAxSharedAnim_01085),
	AX_ANIM_PTR(gAxSharedAnim_01084),
	AX_ANIM_PTR(gAxSharedAnim_01065),
	AX_ANIM_PTR(gAxSharedAnim_01034),
	AX_ANIM_PTR(gAxSharedAnim_01019),
};

static const ax_anim *const sEspeonAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01145),
	AX_ANIM_PTR(gAxSharedAnim_01227),
	AX_ANIM_PTR(gAxSharedAnim_01218),
	AX_ANIM_PTR(gAxSharedAnim_01201),
	AX_ANIM_PTR(gAxSharedAnim_01190),
	AX_ANIM_PTR(gAxSharedAnim_01179),
	AX_ANIM_PTR(gAxSharedAnim_01168),
	AX_ANIM_PTR(gAxSharedAnim_01157),
};

static const ax_anim *const *const sAxAnimationsEspeon[] = {
	sEspeonAnimTable1,
	sEspeonAnimTable2,
	sEspeonAnimTable3,
	sEspeonAnimTable4,
	sEspeonAnimTable5,
	sEspeonAnimTable6,
	sEspeonAnimTable7,
	sEspeonAnimTable8,
	sEspeonAnimTable9,
	sEspeonAnimTable10,
	sEspeonAnimTable11,
	sEspeonAnimTable12,
	sEspeonAnimTable13,
};

static const ax_sprite *const sAxSpritesEspeon[] = {
	sEspeonSprites1,
	sEspeonSprites2,
	sEspeonSprites3,
	sEspeonSprites4,
	sEspeonSprites5,
	sEspeonSprites6,
	sEspeonSprites7,
	sEspeonSprites8,
	sEspeonSprites9,
	sEspeonSprites10,
	sEspeonSprites11,
	sEspeonSprites12,
	sEspeonSprites13,
	sEspeonSprites14,
	sEspeonSprites15,
	sEspeonSprites16,
	sEspeonSprites17,
	sEspeonSprites18,
	sEspeonSprites19,
	sEspeonSprites20,
	sEspeonSprites21,
	sEspeonSprites22,
	sEspeonSprites23,
	sEspeonSprites24,
	sEspeonSprites25,
	sEspeonSprites26,
	sEspeonSprites27,
	sEspeonSprites28,
	sEspeonSprites29,
	sEspeonSprites30,
	sEspeonSprites31,
	sEspeonSprites32,
	sEspeonSprites33,
	sEspeonSprites34,
	sEspeonSprites35,
};

static const axmain sAxMainEspeon = {
	.poses = sAxPosesEspeon,
	.animations = sAxAnimationsEspeon,
	.animCount = ARRAY_COUNT(sAxAnimationsEspeon),
	.spriteData = sAxSpritesEspeon,
	.positions = sAxPositionsEspeon,
};
