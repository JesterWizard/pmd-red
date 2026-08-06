/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainMakuhita;
const SiroArchive gAxMakuhita = {"SIRO", &sAxMainMakuhita};

static const ax_pose sMakuhitaPose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose2[] = {
	AX_POSE(1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose3[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose4[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose5[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose6[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose7[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose8[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose9[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose10[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose11[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose12[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose13[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose14[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose15[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose16[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose17[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose18[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose19[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose20[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose21[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose22[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose23[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose24[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose26[] = {
	AX_POSE(15, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose27[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose28[] = {
	AX_POSE(17, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose30[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose31[] = {
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose32[] = {
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose34[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose35[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose36[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose38[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose39[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose40[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose42[] = {
	AX_POSE(27, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose43[] = {
	AX_POSE(28, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose44[] = {
	AX_POSE(29, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose46[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose47[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose48[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose50[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose51[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose52[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose54[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose55[] = {
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose56[] = {
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose90[] = {
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose91[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose96[] = {
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose105[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose106[] = {
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose107[] = {
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose108[] = {
	AX_POSE(33, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose109[] = {
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose110[] = {
	AX_POSE(35, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose111[] = {
	AX_POSE(36, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose112[] = {
	AX_POSE(35, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose113[] = {
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose114[] = {
	AX_POSE(33, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose116[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose117[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose119[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose120[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose122[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose125[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose126[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose128[] = {
	AX_POSE(13, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose129[] = {
	AX_POSE(14, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose131[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose132[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose134[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose137[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose138[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose140[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose141[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose143[] = {
	AX_POSE(29, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose145[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose146[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose151[] = {
	AX_POSE(28, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose156[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose158[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose161[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose162[] = {
	AX_POSE(26, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose163[] = {
	AX_POSE(12, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose166[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose170[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose173[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose176[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMakuhitaPose177[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const u8 sMakuhitaAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_2_1.lz");
static const u8 sMakuhitaAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_2_2.lz");
static const u8 sMakuhitaAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_2_3.lz");
static const u8 sMakuhitaAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_2_4.lz");
static const u8 sMakuhitaAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_2_5.lz");
static const u8 sMakuhitaAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_2_6.lz");
static const u8 sMakuhitaAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_2_7.lz");
static const u8 sMakuhitaAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_2_8.lz");
static const u8 sMakuhitaAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_8_1.lz");
static const u8 sMakuhitaAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_8_2.lz");
static const u8 sMakuhitaAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_8_3.lz");
static const u8 sMakuhitaAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_8_4.lz");
static const u8 sMakuhitaAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_8_5.lz");
static const u8 sMakuhitaAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_8_6.lz");
static const u8 sMakuhitaAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_8_7.lz");
static const u8 sMakuhitaAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_8_8.lz");
static const u8 sMakuhitaAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_9_1.lz");
static const u8 sMakuhitaAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_9_2.lz");
static const u8 sMakuhitaAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_9_3.lz");
static const u8 sMakuhitaAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_9_4.lz");
static const u8 sMakuhitaAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_9_5.lz");
static const u8 sMakuhitaAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_9_6.lz");
static const u8 sMakuhitaAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_9_7.lz");
static const u8 sMakuhitaAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_9_8.lz");
static const u8 sMakuhitaAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_11_1.lz");
static const u8 sMakuhitaAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_11_2.lz");
static const u8 sMakuhitaAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_11_3.lz");
static const u8 sMakuhitaAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_11_4.lz");
static const u8 sMakuhitaAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_11_5.lz");
static const u8 sMakuhitaAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_11_6.lz");
static const u8 sMakuhitaAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_11_7.lz");
static const u8 sMakuhitaAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/makuhita/sMakuhitaAnims_11_8.lz");

static const u8 sMakuhitaGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_1.4bpp.lz");
static const ax_sprite sMakuhitaSprites1[] = {
	{sMakuhitaGfx1, ARRAY_COUNT(sMakuhitaGfx1)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_2.4bpp.lz");
static const ax_sprite sMakuhitaSprites2[] = {
	{sMakuhitaGfx2, ARRAY_COUNT(sMakuhitaGfx2)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_3.4bpp.lz");
static const ax_sprite sMakuhitaSprites3[] = {
	{sMakuhitaGfx3, ARRAY_COUNT(sMakuhitaGfx3)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_4.4bpp.lz");
static const ax_sprite sMakuhitaSprites4[] = {
	{sMakuhitaGfx4, ARRAY_COUNT(sMakuhitaGfx4)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_5.4bpp.lz");
static const ax_sprite sMakuhitaSprites5[] = {
	{sMakuhitaGfx5, ARRAY_COUNT(sMakuhitaGfx5)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_6.4bpp.lz");
static const ax_sprite sMakuhitaSprites6[] = {
	{sMakuhitaGfx6, ARRAY_COUNT(sMakuhitaGfx6)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_7.4bpp.lz");
static const ax_sprite sMakuhitaSprites7[] = {
	{sMakuhitaGfx7, ARRAY_COUNT(sMakuhitaGfx7)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_8.4bpp.lz");
static const ax_sprite sMakuhitaSprites8[] = {
	{sMakuhitaGfx8, ARRAY_COUNT(sMakuhitaGfx8)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_9.4bpp.lz");
static const ax_sprite sMakuhitaSprites9[] = {
	{sMakuhitaGfx9, ARRAY_COUNT(sMakuhitaGfx9)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_10.4bpp.lz");
static const ax_sprite sMakuhitaSprites10[] = {
	{sMakuhitaGfx10, ARRAY_COUNT(sMakuhitaGfx10)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_11.4bpp.lz");
static const ax_sprite sMakuhitaSprites11[] = {
	{sMakuhitaGfx11, ARRAY_COUNT(sMakuhitaGfx11)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_12.4bpp.lz");
static const ax_sprite sMakuhitaSprites12[] = {
	{sMakuhitaGfx12, ARRAY_COUNT(sMakuhitaGfx12)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_13.4bpp.lz");
static const ax_sprite sMakuhitaSprites13[] = {
	{sMakuhitaGfx13, ARRAY_COUNT(sMakuhitaGfx13)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_14.4bpp.lz");
static const ax_sprite sMakuhitaSprites14[] = {
	{sMakuhitaGfx14, ARRAY_COUNT(sMakuhitaGfx14)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_15.4bpp.lz");
static const ax_sprite sMakuhitaSprites15[] = {
	{sMakuhitaGfx15, ARRAY_COUNT(sMakuhitaGfx15)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_16.4bpp.lz");
static const u8 sMakuhitaGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_16_1.4bpp.lz");
static const ax_sprite sMakuhitaSprites16[] = {
	{sMakuhitaGfx16, ARRAY_COUNT(sMakuhitaGfx16)}, 
	{NULL, 32}, 
	{sMakuhitaGfx16_1, ARRAY_COUNT(sMakuhitaGfx16_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_17.4bpp.lz");
static const u8 sMakuhitaGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_17_1.4bpp.lz");
static const u8 sMakuhitaGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_17_2.4bpp.lz");
static const u8 sMakuhitaGfx17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_17_3.4bpp.lz");
static const ax_sprite sMakuhitaSprites17[] = {
	{sMakuhitaGfx17, ARRAY_COUNT(sMakuhitaGfx17)}, 
	{NULL, 32}, 
	{sMakuhitaGfx17_1, ARRAY_COUNT(sMakuhitaGfx17_1)}, 
	{NULL, 32}, 
	{sMakuhitaGfx17_2, ARRAY_COUNT(sMakuhitaGfx17_2)}, 
	{NULL, 64}, 
	{sMakuhitaGfx17_3, ARRAY_COUNT(sMakuhitaGfx17_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_18.4bpp.lz");
static const u8 sMakuhitaGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_18_1.4bpp.lz");
static const u8 sMakuhitaGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_18_2.4bpp.lz");
static const ax_sprite sMakuhitaSprites18[] = {
	{NULL, 128}, 
	{sMakuhitaGfx18, ARRAY_COUNT(sMakuhitaGfx18)}, 
	{NULL, 32}, 
	{sMakuhitaGfx18_1, ARRAY_COUNT(sMakuhitaGfx18_1)}, 
	{NULL, 32}, 
	{sMakuhitaGfx18_2, ARRAY_COUNT(sMakuhitaGfx18_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_19.4bpp.lz");
static const u8 sMakuhitaGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_19_1.4bpp.lz");
static const ax_sprite sMakuhitaSprites19[] = {
	{NULL, 32}, 
	{sMakuhitaGfx19, ARRAY_COUNT(sMakuhitaGfx19)}, 
	{NULL, 32}, 
	{sMakuhitaGfx19_1, ARRAY_COUNT(sMakuhitaGfx19_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_20.4bpp.lz");
static const u8 sMakuhitaGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_20_1.4bpp.lz");
static const u8 sMakuhitaGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_20_2.4bpp.lz");
static const u8 sMakuhitaGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_20_3.4bpp.lz");
static const ax_sprite sMakuhitaSprites20[] = {
	{sMakuhitaGfx20, ARRAY_COUNT(sMakuhitaGfx20)}, 
	{NULL, 64}, 
	{sMakuhitaGfx20_1, ARRAY_COUNT(sMakuhitaGfx20_1)}, 
	{NULL, 32}, 
	{sMakuhitaGfx20_2, ARRAY_COUNT(sMakuhitaGfx20_2)}, 
	{NULL, 32}, 
	{sMakuhitaGfx20_3, ARRAY_COUNT(sMakuhitaGfx20_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_21.4bpp.lz");
static const u8 sMakuhitaGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_21_1.4bpp.lz");
static const u8 sMakuhitaGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_21_2.4bpp.lz");
static const u8 sMakuhitaGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_21_3.4bpp.lz");
static const ax_sprite sMakuhitaSprites21[] = {
	{sMakuhitaGfx21, ARRAY_COUNT(sMakuhitaGfx21)}, 
	{NULL, 64}, 
	{sMakuhitaGfx21_1, ARRAY_COUNT(sMakuhitaGfx21_1)}, 
	{NULL, 32}, 
	{sMakuhitaGfx21_2, ARRAY_COUNT(sMakuhitaGfx21_2)}, 
	{NULL, 32}, 
	{sMakuhitaGfx21_3, ARRAY_COUNT(sMakuhitaGfx21_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_22.4bpp.lz");
static const u8 sMakuhitaGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_22_1.4bpp.lz");
static const u8 sMakuhitaGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_22_2.4bpp.lz");
static const ax_sprite sMakuhitaSprites22[] = {
	{NULL, 32}, 
	{sMakuhitaGfx22, ARRAY_COUNT(sMakuhitaGfx22)}, 
	{NULL, 64}, 
	{sMakuhitaGfx22_1, ARRAY_COUNT(sMakuhitaGfx22_1)}, 
	{NULL, 32}, 
	{sMakuhitaGfx22_2, ARRAY_COUNT(sMakuhitaGfx22_2)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_23.4bpp.lz");
static const u8 sMakuhitaGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_23_1.4bpp.lz");
static const u8 sMakuhitaGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_23_2.4bpp.lz");
static const u8 sMakuhitaGfx23_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_23_3.4bpp.lz");
static const ax_sprite sMakuhitaSprites23[] = {
	{NULL, 32}, 
	{sMakuhitaGfx23, ARRAY_COUNT(sMakuhitaGfx23)}, 
	{NULL, 64}, 
	{sMakuhitaGfx23_1, ARRAY_COUNT(sMakuhitaGfx23_1)}, 
	{NULL, 32}, 
	{sMakuhitaGfx23_2, ARRAY_COUNT(sMakuhitaGfx23_2)}, 
	{NULL, 32}, 
	{sMakuhitaGfx23_3, ARRAY_COUNT(sMakuhitaGfx23_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_24.4bpp.lz");
static const u8 sMakuhitaGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_24_1.4bpp.lz");
static const u8 sMakuhitaGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_24_2.4bpp.lz");
static const ax_sprite sMakuhitaSprites24[] = {
	{NULL, 128}, 
	{sMakuhitaGfx24, ARRAY_COUNT(sMakuhitaGfx24)}, 
	{NULL, 32}, 
	{sMakuhitaGfx24_1, ARRAY_COUNT(sMakuhitaGfx24_1)}, 
	{NULL, 32}, 
	{sMakuhitaGfx24_2, ARRAY_COUNT(sMakuhitaGfx24_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_25.4bpp.lz");
static const u8 sMakuhitaGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_25_1.4bpp.lz");
static const u8 sMakuhitaGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_25_2.4bpp.lz");
static const u8 sMakuhitaGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_25_3.4bpp.lz");
static const ax_sprite sMakuhitaSprites25[] = {
	{sMakuhitaGfx25, ARRAY_COUNT(sMakuhitaGfx25)}, 
	{NULL, 64}, 
	{sMakuhitaGfx25_1, ARRAY_COUNT(sMakuhitaGfx25_1)}, 
	{NULL, 32}, 
	{sMakuhitaGfx25_2, ARRAY_COUNT(sMakuhitaGfx25_2)}, 
	{NULL, 32}, 
	{sMakuhitaGfx25_3, ARRAY_COUNT(sMakuhitaGfx25_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_26.4bpp.lz");
static const u8 sMakuhitaGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_26_1.4bpp.lz");
static const u8 sMakuhitaGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_26_2.4bpp.lz");
static const ax_sprite sMakuhitaSprites26[] = {
	{sMakuhitaGfx26, ARRAY_COUNT(sMakuhitaGfx26)}, 
	{NULL, 32}, 
	{sMakuhitaGfx26_1, ARRAY_COUNT(sMakuhitaGfx26_1)}, 
	{NULL, 96}, 
	{sMakuhitaGfx26_2, ARRAY_COUNT(sMakuhitaGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_27.4bpp.lz");
static const u8 sMakuhitaGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_27_1.4bpp.lz");
static const u8 sMakuhitaGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_27_2.4bpp.lz");
static const u8 sMakuhitaGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_27_3.4bpp.lz");
static const ax_sprite sMakuhitaSprites27[] = {
	{sMakuhitaGfx27, ARRAY_COUNT(sMakuhitaGfx27)}, 
	{NULL, 64}, 
	{sMakuhitaGfx27_1, ARRAY_COUNT(sMakuhitaGfx27_1)}, 
	{NULL, 32}, 
	{sMakuhitaGfx27_2, ARRAY_COUNT(sMakuhitaGfx27_2)}, 
	{NULL, 64}, 
	{sMakuhitaGfx27_3, ARRAY_COUNT(sMakuhitaGfx27_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_28.4bpp.lz");
static const u8 sMakuhitaGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_28_1.4bpp.lz");
static const u8 sMakuhitaGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_28_2.4bpp.lz");
static const ax_sprite sMakuhitaSprites28[] = {
	{sMakuhitaGfx28, ARRAY_COUNT(sMakuhitaGfx28)}, 
	{NULL, 64}, 
	{sMakuhitaGfx28_1, ARRAY_COUNT(sMakuhitaGfx28_1)}, 
	{NULL, 64}, 
	{sMakuhitaGfx28_2, ARRAY_COUNT(sMakuhitaGfx28_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_29.4bpp.lz");
static const u8 sMakuhitaGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_29_1.4bpp.lz");
static const u8 sMakuhitaGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_29_2.4bpp.lz");
static const u8 sMakuhitaGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_29_3.4bpp.lz");
static const ax_sprite sMakuhitaSprites29[] = {
	{sMakuhitaGfx29, ARRAY_COUNT(sMakuhitaGfx29)}, 
	{NULL, 32}, 
	{sMakuhitaGfx29_1, ARRAY_COUNT(sMakuhitaGfx29_1)}, 
	{NULL, 32}, 
	{sMakuhitaGfx29_2, ARRAY_COUNT(sMakuhitaGfx29_2)}, 
	{NULL, 32}, 
	{sMakuhitaGfx29_3, ARRAY_COUNT(sMakuhitaGfx29_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_30.4bpp.lz");
static const u8 sMakuhitaGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_30_1.4bpp.lz");
static const u8 sMakuhitaGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_30_2.4bpp.lz");
static const ax_sprite sMakuhitaSprites30[] = {
	{sMakuhitaGfx30, ARRAY_COUNT(sMakuhitaGfx30)}, 
	{NULL, 32}, 
	{sMakuhitaGfx30_1, ARRAY_COUNT(sMakuhitaGfx30_1)}, 
	{NULL, 32}, 
	{sMakuhitaGfx30_2, ARRAY_COUNT(sMakuhitaGfx30_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_31.4bpp.lz");
static const ax_sprite sMakuhitaSprites31[] = {
	{sMakuhitaGfx31, ARRAY_COUNT(sMakuhitaGfx31)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_32.4bpp.lz");
static const ax_sprite sMakuhitaSprites32[] = {
	{sMakuhitaGfx32, ARRAY_COUNT(sMakuhitaGfx32)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_33.4bpp.lz");
static const ax_sprite sMakuhitaSprites33[] = {
	{sMakuhitaGfx33, ARRAY_COUNT(sMakuhitaGfx33)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_34.4bpp.lz");
static const ax_sprite sMakuhitaSprites34[] = {
	{sMakuhitaGfx34, ARRAY_COUNT(sMakuhitaGfx34)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_35.4bpp.lz");
static const ax_sprite sMakuhitaSprites35[] = {
	{sMakuhitaGfx35, ARRAY_COUNT(sMakuhitaGfx35)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_36.4bpp.lz");
static const ax_sprite sMakuhitaSprites36[] = {
	{sMakuhitaGfx36, ARRAY_COUNT(sMakuhitaGfx36)}, 
	{NULL, 0}
};
static const u8 sMakuhitaGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/makuhita/sprite_37.4bpp.lz");
static const ax_sprite sMakuhitaSprites37[] = {
	{sMakuhitaGfx37, ARRAY_COUNT(sMakuhitaGfx37)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesMakuhita[] = {
	sMakuhitaPose1,
	sMakuhitaPose2,
	sMakuhitaPose3,
	sMakuhitaPose4,
	sMakuhitaPose5,
	sMakuhitaPose6,
	sMakuhitaPose7,
	sMakuhitaPose8,
	sMakuhitaPose9,
	sMakuhitaPose10,
	sMakuhitaPose11,
	sMakuhitaPose12,
	sMakuhitaPose13,
	sMakuhitaPose14,
	sMakuhitaPose15,
	sMakuhitaPose16,
	sMakuhitaPose17,
	sMakuhitaPose18,
	sMakuhitaPose19,
	sMakuhitaPose20,
	sMakuhitaPose21,
	sMakuhitaPose22,
	sMakuhitaPose23,
	sMakuhitaPose24,
	sMakuhitaPose1,
	sMakuhitaPose26,
	sMakuhitaPose27,
	sMakuhitaPose28,
	sMakuhitaPose4,
	sMakuhitaPose30,
	sMakuhitaPose31,
	sMakuhitaPose32,
	sMakuhitaPose7,
	sMakuhitaPose34,
	sMakuhitaPose35,
	sMakuhitaPose36,
	sMakuhitaPose10,
	sMakuhitaPose38,
	sMakuhitaPose39,
	sMakuhitaPose40,
	sMakuhitaPose13,
	sMakuhitaPose42,
	sMakuhitaPose43,
	sMakuhitaPose44,
	sMakuhitaPose16,
	sMakuhitaPose46,
	sMakuhitaPose47,
	sMakuhitaPose48,
	sMakuhitaPose19,
	sMakuhitaPose50,
	sMakuhitaPose51,
	sMakuhitaPose52,
	sMakuhitaPose22,
	sMakuhitaPose54,
	sMakuhitaPose55,
	sMakuhitaPose56,
	sMakuhitaPose1,
	sMakuhitaPose26,
	sMakuhitaPose27,
	sMakuhitaPose28,
	sMakuhitaPose4,
	sMakuhitaPose30,
	sMakuhitaPose31,
	sMakuhitaPose32,
	sMakuhitaPose7,
	sMakuhitaPose34,
	sMakuhitaPose35,
	sMakuhitaPose36,
	sMakuhitaPose10,
	sMakuhitaPose38,
	sMakuhitaPose39,
	sMakuhitaPose40,
	sMakuhitaPose13,
	sMakuhitaPose42,
	sMakuhitaPose43,
	sMakuhitaPose44,
	sMakuhitaPose16,
	sMakuhitaPose46,
	sMakuhitaPose47,
	sMakuhitaPose48,
	sMakuhitaPose19,
	sMakuhitaPose50,
	sMakuhitaPose51,
	sMakuhitaPose52,
	sMakuhitaPose22,
	sMakuhitaPose54,
	sMakuhitaPose55,
	sMakuhitaPose56,
	sMakuhitaPose28,
	sMakuhitaPose90,
	sMakuhitaPose91,
	sMakuhitaPose40,
	sMakuhitaPose44,
	sMakuhitaPose48,
	sMakuhitaPose52,
	sMakuhitaPose96,
	sMakuhitaPose1,
	sMakuhitaPose22,
	sMakuhitaPose19,
	sMakuhitaPose16,
	sMakuhitaPose13,
	sMakuhitaPose10,
	sMakuhitaPose7,
	sMakuhitaPose4,
	sMakuhitaPose105,
	sMakuhitaPose106,
	sMakuhitaPose107,
	sMakuhitaPose108,
	sMakuhitaPose109,
	sMakuhitaPose110,
	sMakuhitaPose111,
	sMakuhitaPose112,
	sMakuhitaPose113,
	sMakuhitaPose114,
	sMakuhitaPose1,
	sMakuhitaPose116,
	sMakuhitaPose117,
	sMakuhitaPose4,
	sMakuhitaPose119,
	sMakuhitaPose120,
	sMakuhitaPose7,
	sMakuhitaPose122,
	sMakuhitaPose9,
	sMakuhitaPose10,
	sMakuhitaPose125,
	sMakuhitaPose126,
	sMakuhitaPose13,
	sMakuhitaPose128,
	sMakuhitaPose129,
	sMakuhitaPose16,
	sMakuhitaPose131,
	sMakuhitaPose132,
	sMakuhitaPose19,
	sMakuhitaPose134,
	sMakuhitaPose21,
	sMakuhitaPose22,
	sMakuhitaPose137,
	sMakuhitaPose138,
	sMakuhitaPose28,
	sMakuhitaPose140,
	sMakuhitaPose141,
	sMakuhitaPose48,
	sMakuhitaPose143,
	sMakuhitaPose40,
	sMakuhitaPose145,
	sMakuhitaPose146,
	sMakuhitaPose27,
	sMakuhitaPose30,
	sMakuhitaPose34,
	sMakuhitaPose38,
	sMakuhitaPose151,
	sMakuhitaPose47,
	sMakuhitaPose51,
	sMakuhitaPose55,
	sMakuhitaPose1,
	sMakuhitaPose156,
	sMakuhitaPose4,
	sMakuhitaPose158,
	sMakuhitaPose7,
	sMakuhitaPose36,
	sMakuhitaPose161,
	sMakuhitaPose162,
	sMakuhitaPose163,
	sMakuhitaPose143,
	sMakuhitaPose16,
	sMakuhitaPose166,
	sMakuhitaPose19,
	sMakuhitaPose52,
	sMakuhitaPose22,
	sMakuhitaPose170,
	sMakuhitaPose28,
	sMakuhitaPose140,
	sMakuhitaPose173,
	sMakuhitaPose166,
	sMakuhitaPose143,
	sMakuhitaPose176,
	sMakuhitaPose177,
	sMakuhitaPose146,
	sMakuhitaPose1,
	sMakuhitaPose22,
	sMakuhitaPose19,
	sMakuhitaPose16,
	sMakuhitaPose13,
	sMakuhitaPose10,
	sMakuhitaPose7,
	sMakuhitaPose4,
};

static const struct PositionSets sAxPositionsMakuhita[] = {
	[0] = { .set = { {-1, -8}, {-9, -5}, {8, -5}, {-1, -7} } },
	[1] = { .set = { {-3, -7}, {-10, -3}, {8, -6}, {-3, -6} } },
	[2] = { .set = { {2, -7}, {-9, -6}, {9, -3}, {2, -6} } },
	[3] = { .set = { {2, -9}, {8, -8}, {-5, -3}, {1, -7} } },
	[4] = { .set = { {4, -8}, {10, -5}, {-6, -4}, {2, -6} } },
	[5] = { .set = { {1, -7}, {7, -8}, {-5, 0}, {0, -5} } },
	[6] = { .set = { {4, -9}, {5, -9}, {2, -2}, {-2, -7} } },
	[7] = { .set = { {5, -9}, {7, -6}, {1, -2}, {-1, -6} } },
	[8] = { .set = { {4, -7}, {4, -10}, {2, 0}, {-2, -5} } },
	[9] = { .set = { {2, -12}, {-5, -12}, {8, -6}, {-2, -7} } },
	[10] = { .set = { {-2, -11}, {-7, -10}, {6, -6}, {-2, -6} } },
	[11] = { .set = { {2, -10}, {-3, -11}, {9, -3}, {0, -5} } },
	[12] = { .set = { {-1, -11}, {9, -8}, {-10, -8}, {0, -7} } },
	[13] = { .set = { {1, -9}, {11, -4}, {-10, -6}, {1, -5} } },
	[14] = { .set = { {-2, -9}, {9, -6}, {-12, -4}, {-2, -5} } },
	[15] = { .set = { {-3, -12}, {4, -12}, {-9, -6}, {1, -7} } },
	[16] = { .set = { {1, -11}, {6, -10}, {-7, -6}, {1, -6} } },
	[17] = { .set = { {-3, -10}, {2, -11}, {-10, -3}, {-1, -5} } },
	[18] = { .set = { {-5, -9}, {-6, -9}, {-3, -2}, {1, -7} } },
	[19] = { .set = { {-6, -9}, {-8, -6}, {-2, -2}, {0, -6} } },
	[20] = { .set = { {-5, -7}, {-5, -10}, {-3, 0}, {1, -5} } },
	[21] = { .set = { {-3, -9}, {-9, -8}, {4, -3}, {-2, -7} } },
	[22] = { .set = { {-5, -8}, {-11, -5}, {5, -4}, {-3, -6} } },
	[23] = { .set = { {-2, -7}, {-8, -8}, {4, 0}, {-1, -5} } },
	[24] = { .set = { {-1, -8}, {-9, -5}, {8, -5}, {-1, -7} } },
	[25] = { .set = { {1, -8}, {1, -6}, {13, -11}, {0, -7} } },
	[26] = { .set = { {-2, -8}, {-13, -11}, {2, -6}, {-2, -7} } },
	[27] = { .set = { {-1, -4}, {-8, 1}, {7, 1}, {-1, -6} } },
	[28] = { .set = { {2, -9}, {8, -8}, {-5, -3}, {1, -7} } },
	[29] = { .set = { {4, -8}, {12, -5}, {-12, -7}, {1, -6} } },
	[30] = { .set = { {5, -8}, {7, -15}, {3, -4}, {-2, -6} } },
	[31] = { .set = { {2, -4}, {8, -2}, {-1, 3}, {-1, -4} } },
	[32] = { .set = { {4, -9}, {5, -9}, {2, -2}, {-2, -7} } },
	[33] = { .set = { {5, -9}, {13, -9}, {-5, -2}, {0, -7} } },
	[34] = { .set = { {6, -10}, {-1, -9}, {10, -7}, {0, -7} } },
	[35] = { .set = { {5, -5}, {9, -5}, {5, 0}, {-2, -6} } },
	[36] = { .set = { {2, -12}, {-5, -12}, {8, -6}, {-2, -7} } },
	[37] = { .set = { {4, -13}, {8, -15}, {5, -1}, {0, -8} } },
	[38] = { .set = { {4, -13}, {-11, -12}, {10, -13}, {0, -8} } },
	[39] = { .set = { {4, -10}, {0, -10}, {10, -4}, {0, -8} } },
	[40] = { .set = { {-1, -11}, {9, -8}, {-10, -8}, {0, -7} } },
	[41] = { .set = { {-2, -14}, {1, -20}, {-13, -4}, {0, -9} } },
	[42] = { .set = { {0, -15}, {11, -4}, {-5, -18}, {0, -9} } },
	[43] = { .set = { {-1, -13}, {7, -11}, {-8, -11}, {0, -9} } },
	[44] = { .set = { {-3, -12}, {4, -12}, {-9, -6}, {1, -7} } },
	[45] = { .set = { {-5, -13}, {-9, -15}, {-6, -1}, {-1, -8} } },
	[46] = { .set = { {-5, -13}, {10, -12}, {-11, -13}, {-1, -8} } },
	[47] = { .set = { {-5, -10}, {-1, -10}, {-11, -4}, {-1, -8} } },
	[48] = { .set = { {-5, -9}, {-6, -9}, {-3, -2}, {1, -7} } },
	[49] = { .set = { {-6, -9}, {-14, -9}, {4, -2}, {-1, -7} } },
	[50] = { .set = { {-7, -10}, {0, -9}, {-11, -7}, {-1, -7} } },
	[51] = { .set = { {-6, -5}, {-10, -5}, {-6, 0}, {1, -6} } },
	[52] = { .set = { {-3, -9}, {-9, -8}, {4, -3}, {-2, -7} } },
	[53] = { .set = { {-5, -8}, {-13, -5}, {11, -7}, {-2, -6} } },
	[54] = { .set = { {-6, -8}, {-8, -15}, {-4, -4}, {1, -6} } },
	[55] = { .set = { {-3, -4}, {-9, -2}, {0, 3}, {0, -4} } },
	[56] = { .set = { {-1, -8}, {-9, -5}, {8, -5}, {-1, -7} } },
	[57] = { .set = { {1, -8}, {1, -6}, {13, -11}, {0, -7} } },
	[58] = { .set = { {-2, -8}, {-13, -11}, {2, -6}, {-2, -7} } },
	[59] = { .set = { {-1, -4}, {-8, 1}, {7, 1}, {-1, -6} } },
	[60] = { .set = { {2, -9}, {8, -8}, {-5, -3}, {1, -7} } },
	[61] = { .set = { {4, -8}, {12, -5}, {-12, -7}, {1, -6} } },
	[62] = { .set = { {5, -8}, {7, -15}, {3, -4}, {-2, -6} } },
	[63] = { .set = { {2, -4}, {8, -2}, {-1, 3}, {-1, -4} } },
	[64] = { .set = { {4, -9}, {5, -9}, {2, -2}, {-2, -7} } },
	[65] = { .set = { {5, -9}, {13, -9}, {-5, -2}, {0, -7} } },
	[66] = { .set = { {6, -10}, {-1, -9}, {10, -7}, {0, -7} } },
	[67] = { .set = { {5, -5}, {9, -5}, {5, 0}, {-2, -6} } },
	[68] = { .set = { {2, -12}, {-5, -12}, {8, -6}, {-2, -7} } },
	[69] = { .set = { {4, -13}, {8, -15}, {5, -1}, {0, -8} } },
	[70] = { .set = { {4, -13}, {-11, -12}, {10, -13}, {0, -8} } },
	[71] = { .set = { {4, -10}, {0, -10}, {10, -4}, {0, -8} } },
	[72] = { .set = { {-1, -11}, {9, -8}, {-10, -8}, {0, -7} } },
	[73] = { .set = { {-2, -14}, {1, -20}, {-13, -4}, {0, -9} } },
	[74] = { .set = { {0, -15}, {11, -4}, {-5, -18}, {0, -9} } },
	[75] = { .set = { {-1, -13}, {7, -11}, {-8, -11}, {0, -9} } },
	[76] = { .set = { {-3, -12}, {4, -12}, {-9, -6}, {1, -7} } },
	[77] = { .set = { {-5, -13}, {-9, -15}, {-6, -1}, {-1, -8} } },
	[78] = { .set = { {-5, -13}, {10, -12}, {-11, -13}, {-1, -8} } },
	[79] = { .set = { {-5, -10}, {-1, -10}, {-11, -4}, {-1, -8} } },
	[80] = { .set = { {-5, -9}, {-6, -9}, {-3, -2}, {1, -7} } },
	[81] = { .set = { {-6, -9}, {-14, -9}, {4, -2}, {-1, -7} } },
	[82] = { .set = { {-7, -10}, {0, -9}, {-11, -7}, {-1, -7} } },
	[83] = { .set = { {-6, -5}, {-10, -5}, {-6, 0}, {1, -6} } },
	[84] = { .set = { {-3, -9}, {-9, -8}, {4, -3}, {-2, -7} } },
	[85] = { .set = { {-5, -8}, {-13, -5}, {11, -7}, {-2, -6} } },
	[86] = { .set = { {-6, -8}, {-8, -15}, {-4, -4}, {1, -6} } },
	[87] = { .set = { {-3, -4}, {-9, -2}, {0, 3}, {0, -4} } },
	[88] = { .set = { {-1, -4}, {-8, 1}, {7, 1}, {-1, -6} } },
	[89] = { .set = { {3, -4}, {9, -2}, {0, 3}, {0, -4} } },
	[90] = { .set = { {6, -5}, {10, -5}, {6, 0}, {-1, -6} } },
	[91] = { .set = { {4, -10}, {0, -10}, {10, -4}, {0, -8} } },
	[92] = { .set = { {-1, -13}, {7, -11}, {-8, -11}, {0, -9} } },
	[93] = { .set = { {-5, -10}, {-1, -10}, {-11, -4}, {-1, -8} } },
	[94] = { .set = { {-6, -5}, {-10, -5}, {-6, 0}, {1, -6} } },
	[95] = { .set = { {-4, -4}, {-10, -2}, {-1, 3}, {-1, -4} } },
	[96] = { .set = { {-1, -8}, {-9, -5}, {8, -5}, {-1, -7} } },
	[97] = { .set = { {-3, -9}, {-9, -8}, {4, -3}, {-2, -7} } },
	[98] = { .set = { {-5, -9}, {-6, -9}, {-3, -2}, {1, -7} } },
	[99] = { .set = { {-3, -12}, {4, -12}, {-9, -6}, {1, -7} } },
	[100] = { .set = { {-1, -11}, {9, -8}, {-10, -8}, {0, -7} } },
	[101] = { .set = { {2, -12}, {-5, -12}, {8, -6}, {-2, -7} } },
	[102] = { .set = { {4, -9}, {5, -9}, {2, -2}, {-2, -7} } },
	[103] = { .set = { {2, -9}, {8, -8}, {-5, -3}, {1, -7} } },
	[104] = { .set = { {-1, -10}, {-13, -3}, {12, -3}, {-1, -8} } },
	[105] = { .set = { {-1, -9}, {-13, -3}, {12, -3}, {-1, -7} } },
	[106] = { .set = { {0, -15}, {-11, -20}, {10, -20}, {-1, -12} } },
	[107] = { .set = { {-1, -15}, {2, -21}, {-11, -15}, {0, -12} } },
	[108] = { .set = { {2, -14}, {1, -19}, {-8, -11}, {0, -11} } },
	[109] = { .set = { {1, -15}, {-9, -18}, {2, -12}, {-1, -9} } },
	[110] = { .set = { {-1, -15}, {9, -13}, {-10, -13}, {-1, -8} } },
	[111] = { .set = { {-2, -15}, {8, -18}, {-3, -12}, {0, -9} } },
	[112] = { .set = { {-3, -14}, {-2, -19}, {7, -11}, {-1, -11} } },
	[113] = { .set = { {0, -15}, {-3, -21}, {10, -15}, {-1, -12} } },
	[114] = { .set = { {-1, -8}, {-9, -5}, {8, -5}, {-1, -7} } },
	[115] = { .set = { {-4, -9}, {-11, -5}, {7, -8}, {-4, -8} } },
	[116] = { .set = { {3, -9}, {-8, -8}, {10, -5}, {3, -8} } },
	[117] = { .set = { {2, -9}, {8, -8}, {-5, -3}, {1, -7} } },
	[118] = { .set = { {4, -10}, {10, -7}, {-6, -6}, {2, -8} } },
	[119] = { .set = { {0, -9}, {6, -10}, {-6, -2}, {-1, -7} } },
	[120] = { .set = { {4, -9}, {5, -9}, {2, -2}, {-2, -7} } },
	[121] = { .set = { {7, -10}, {9, -7}, {3, -3}, {1, -7} } },
	[122] = { .set = { {4, -7}, {4, -10}, {2, 0}, {-2, -5} } },
	[123] = { .set = { {2, -12}, {-5, -12}, {8, -6}, {-2, -7} } },
	[124] = { .set = { {1, -13}, {-4, -12}, {9, -8}, {1, -8} } },
	[125] = { .set = { {3, -12}, {-2, -13}, {10, -5}, {1, -7} } },
	[126] = { .set = { {-1, -11}, {9, -8}, {-10, -8}, {0, -7} } },
	[127] = { .set = { {0, -11}, {10, -6}, {-11, -8}, {0, -7} } },
	[128] = { .set = { {-1, -11}, {10, -8}, {-11, -6}, {-1, -7} } },
	[129] = { .set = { {-3, -12}, {4, -12}, {-9, -6}, {1, -7} } },
	[130] = { .set = { {-2, -13}, {3, -12}, {-10, -8}, {-2, -8} } },
	[131] = { .set = { {-4, -12}, {1, -13}, {-11, -5}, {-2, -7} } },
	[132] = { .set = { {-5, -9}, {-6, -9}, {-3, -2}, {1, -7} } },
	[133] = { .set = { {-8, -10}, {-10, -7}, {-4, -3}, {-2, -7} } },
	[134] = { .set = { {-5, -7}, {-5, -10}, {-3, 0}, {1, -5} } },
	[135] = { .set = { {-3, -9}, {-9, -8}, {4, -3}, {-2, -7} } },
	[136] = { .set = { {-5, -10}, {-11, -7}, {5, -6}, {-3, -8} } },
	[137] = { .set = { {-1, -9}, {-7, -10}, {5, -2}, {0, -7} } },
	[138] = { .set = { {-1, -4}, {-8, 1}, {7, 1}, {-1, -6} } },
	[139] = { .set = { {-4, -5}, {-10, -3}, {-1, 2}, {-1, -5} } },
	[140] = { .set = { {-7, -6}, {-11, -6}, {-7, -1}, {0, -7} } },
	[141] = { .set = { {-5, -10}, {-1, -10}, {-11, -4}, {-1, -8} } },
	[142] = { .set = { {-1, -12}, {7, -10}, {-8, -10}, {0, -8} } },
	[143] = { .set = { {4, -10}, {0, -10}, {10, -4}, {0, -8} } },
	[144] = { .set = { {6, -6}, {10, -6}, {6, -1}, {-1, -7} } },
	[145] = { .set = { {3, -5}, {9, -3}, {0, 2}, {0, -5} } },
	[146] = { .set = { {-2, -8}, {-13, -11}, {2, -6}, {-2, -7} } },
	[147] = { .set = { {4, -8}, {12, -5}, {-12, -7}, {1, -6} } },
	[148] = { .set = { {5, -9}, {13, -9}, {-5, -2}, {0, -7} } },
	[149] = { .set = { {4, -13}, {8, -15}, {5, -1}, {0, -8} } },
	[150] = { .set = { {-1, -15}, {10, -4}, {-6, -18}, {-1, -9} } },
	[151] = { .set = { {-5, -13}, {10, -12}, {-11, -13}, {-1, -8} } },
	[152] = { .set = { {-7, -10}, {0, -9}, {-11, -7}, {-1, -7} } },
	[153] = { .set = { {-6, -8}, {-8, -15}, {-4, -4}, {1, -6} } },
	[154] = { .set = { {-1, -8}, {-9, -5}, {8, -5}, {-1, -7} } },
	[155] = { .set = { {-1, -5}, {-8, 0}, {7, 0}, {-1, -7} } },
	[156] = { .set = { {2, -9}, {8, -8}, {-5, -3}, {1, -7} } },
	[157] = { .set = { {2, -5}, {8, -3}, {-1, 2}, {-1, -5} } },
	[158] = { .set = { {4, -9}, {5, -9}, {2, -2}, {-2, -7} } },
	[159] = { .set = { {5, -5}, {9, -5}, {5, 0}, {-2, -6} } },
	[160] = { .set = { {1, -12}, {-6, -12}, {7, -6}, {-3, -7} } },
	[161] = { .set = { {2, -11}, {-2, -11}, {8, -5}, {-2, -9} } },
	[162] = { .set = { {-1, -10}, {9, -7}, {-10, -7}, {0, -6} } },
	[163] = { .set = { {-1, -12}, {7, -10}, {-8, -10}, {0, -8} } },
	[164] = { .set = { {-3, -12}, {4, -12}, {-9, -6}, {1, -7} } },
	[165] = { .set = { {-4, -10}, {0, -10}, {-10, -4}, {0, -8} } },
	[166] = { .set = { {-5, -9}, {-6, -9}, {-3, -2}, {1, -7} } },
	[167] = { .set = { {-6, -5}, {-10, -5}, {-6, 0}, {1, -6} } },
	[168] = { .set = { {-3, -9}, {-9, -8}, {4, -3}, {-2, -7} } },
	[169] = { .set = { {-3, -5}, {-9, -3}, {0, 2}, {0, -5} } },
	[170] = { .set = { {-1, -4}, {-8, 1}, {7, 1}, {-1, -6} } },
	[171] = { .set = { {-4, -5}, {-10, -3}, {-1, 2}, {-1, -5} } },
	[172] = { .set = { {-6, -6}, {-10, -6}, {-6, -1}, {1, -7} } },
	[173] = { .set = { {-4, -10}, {0, -10}, {-10, -4}, {0, -8} } },
	[174] = { .set = { {-1, -12}, {7, -10}, {-8, -10}, {0, -8} } },
	[175] = { .set = { {3, -10}, {-1, -10}, {9, -4}, {-1, -8} } },
	[176] = { .set = { {5, -6}, {9, -6}, {5, -1}, {-2, -7} } },
	[177] = { .set = { {3, -5}, {9, -3}, {0, 2}, {0, -5} } },
	[178] = { .set = { {-1, -8}, {-9, -5}, {8, -5}, {-1, -7} } },
	[179] = { .set = { {-3, -9}, {-9, -8}, {4, -3}, {-2, -7} } },
	[180] = { .set = { {-5, -9}, {-6, -9}, {-3, -2}, {1, -7} } },
	[181] = { .set = { {-3, -12}, {4, -12}, {-9, -6}, {1, -7} } },
	[182] = { .set = { {-1, -11}, {9, -8}, {-10, -8}, {0, -7} } },
	[183] = { .set = { {2, -12}, {-5, -12}, {8, -6}, {-2, -7} } },
	[184] = { .set = { {4, -9}, {5, -9}, {2, -2}, {-2, -7} } },
	[185] = { .set = { {2, -9}, {8, -8}, {-5, -3}, {1, -7} } },
};

static const ax_anim *const sMakuhitaAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sMakuhitaAnimTable2[] = {
	AX_ANIM_PTR(sMakuhitaAnims_2_1),
	AX_ANIM_PTR(sMakuhitaAnims_2_2),
	AX_ANIM_PTR(sMakuhitaAnims_2_3),
	AX_ANIM_PTR(sMakuhitaAnims_2_4),
	AX_ANIM_PTR(sMakuhitaAnims_2_5),
	AX_ANIM_PTR(sMakuhitaAnims_2_6),
	AX_ANIM_PTR(sMakuhitaAnims_2_7),
	AX_ANIM_PTR(sMakuhitaAnims_2_8),
};

static const ax_anim *const sMakuhitaAnimTable3[] = {
	AX_ANIM_PTR(gAxSharedAnim_02018),
	AX_ANIM_PTR(gAxSharedAnim_02039),
	AX_ANIM_PTR(gAxSharedAnim_02065),
	AX_ANIM_PTR(gAxSharedAnim_02081),
	AX_ANIM_PTR(gAxSharedAnim_02112),
	AX_ANIM_PTR(gAxSharedAnim_02143),
	AX_ANIM_PTR(gAxSharedAnim_02173),
	AX_ANIM_PTR(gAxSharedAnim_02212),
};

static const ax_anim *const sMakuhitaAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_02216),
	AX_ANIM_PTR(gAxSharedAnim_02228),
	AX_ANIM_PTR(gAxSharedAnim_02237),
	AX_ANIM_PTR(gAxSharedAnim_02245),
	AX_ANIM_PTR(gAxSharedAnim_02257),
	AX_ANIM_PTR(gAxSharedAnim_02266),
	AX_ANIM_PTR(gAxSharedAnim_02274),
	AX_ANIM_PTR(gAxSharedAnim_02285),
};

static const ax_anim *const sMakuhitaAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_02292),
	AX_ANIM_PTR(gAxSharedAnim_00169),
	AX_ANIM_PTR(gAxSharedAnim_00162),
	AX_ANIM_PTR(gAxSharedAnim_00159),
	AX_ANIM_PTR(gAxSharedAnim_00154),
	AX_ANIM_PTR(gAxSharedAnim_02316),
	AX_ANIM_PTR(gAxSharedAnim_02311),
	AX_ANIM_PTR(gAxSharedAnim_02300),
};

static const ax_anim *const sMakuhitaAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
};

static const ax_anim *const sMakuhitaAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00194),
	AX_ANIM_PTR(gAxSharedAnim_00202),
	AX_ANIM_PTR(gAxSharedAnim_00211),
	AX_ANIM_PTR(gAxSharedAnim_00219),
	AX_ANIM_PTR(gAxSharedAnim_00233),
	AX_ANIM_PTR(gAxSharedAnim_00245),
	AX_ANIM_PTR(gAxSharedAnim_00254),
	AX_ANIM_PTR(gAxSharedAnim_00260),
};

static const ax_anim *const sMakuhitaAnimTable8[] = {
	AX_ANIM_PTR(sMakuhitaAnims_8_1),
	AX_ANIM_PTR(sMakuhitaAnims_8_2),
	AX_ANIM_PTR(sMakuhitaAnims_8_3),
	AX_ANIM_PTR(sMakuhitaAnims_8_4),
	AX_ANIM_PTR(sMakuhitaAnims_8_5),
	AX_ANIM_PTR(sMakuhitaAnims_8_6),
	AX_ANIM_PTR(sMakuhitaAnims_8_7),
	AX_ANIM_PTR(sMakuhitaAnims_8_8),
};

static const ax_anim *const sMakuhitaAnimTable9[] = {
	AX_ANIM_PTR(sMakuhitaAnims_9_1),
	AX_ANIM_PTR(sMakuhitaAnims_9_2),
	AX_ANIM_PTR(sMakuhitaAnims_9_3),
	AX_ANIM_PTR(sMakuhitaAnims_9_4),
	AX_ANIM_PTR(sMakuhitaAnims_9_5),
	AX_ANIM_PTR(sMakuhitaAnims_9_6),
	AX_ANIM_PTR(sMakuhitaAnims_9_7),
	AX_ANIM_PTR(sMakuhitaAnims_9_8),
};

static const ax_anim *const sMakuhitaAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00540),
	AX_ANIM_PTR(gAxSharedAnim_00547),
	AX_ANIM_PTR(gAxSharedAnim_00555),
	AX_ANIM_PTR(gAxSharedAnim_00564),
	AX_ANIM_PTR(gAxSharedAnim_00574),
	AX_ANIM_PTR(gAxSharedAnim_00584),
	AX_ANIM_PTR(gAxSharedAnim_00593),
	AX_ANIM_PTR(gAxSharedAnim_00600),
};

static const ax_anim *const sMakuhitaAnimTable11[] = {
	AX_ANIM_PTR(sMakuhitaAnims_11_1),
	AX_ANIM_PTR(sMakuhitaAnims_11_2),
	AX_ANIM_PTR(sMakuhitaAnims_11_3),
	AX_ANIM_PTR(sMakuhitaAnims_11_4),
	AX_ANIM_PTR(sMakuhitaAnims_11_5),
	AX_ANIM_PTR(sMakuhitaAnims_11_6),
	AX_ANIM_PTR(sMakuhitaAnims_11_7),
	AX_ANIM_PTR(sMakuhitaAnims_11_8),
};

static const ax_anim *const sMakuhitaAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_00804),
	AX_ANIM_PTR(gAxSharedAnim_00891),
	AX_ANIM_PTR(gAxSharedAnim_00868),
	AX_ANIM_PTR(gAxSharedAnim_00856),
	AX_ANIM_PTR(gAxSharedAnim_00855),
	AX_ANIM_PTR(gAxSharedAnim_00842),
	AX_ANIM_PTR(gAxSharedAnim_00820),
	AX_ANIM_PTR(gAxSharedAnim_00805),
};

static const ax_anim *const sMakuhitaAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_00906),
	AX_ANIM_PTR(gAxSharedAnim_00992),
	AX_ANIM_PTR(gAxSharedAnim_00980),
	AX_ANIM_PTR(gAxSharedAnim_00967),
	AX_ANIM_PTR(gAxSharedAnim_00956),
	AX_ANIM_PTR(gAxSharedAnim_00944),
	AX_ANIM_PTR(gAxSharedAnim_00931),
	AX_ANIM_PTR(gAxSharedAnim_00919),
};

static const ax_anim *const *const sAxAnimationsMakuhita[] = {
	sMakuhitaAnimTable1,
	sMakuhitaAnimTable2,
	sMakuhitaAnimTable3,
	sMakuhitaAnimTable4,
	sMakuhitaAnimTable5,
	sMakuhitaAnimTable6,
	sMakuhitaAnimTable7,
	sMakuhitaAnimTable8,
	sMakuhitaAnimTable9,
	sMakuhitaAnimTable10,
	sMakuhitaAnimTable11,
	sMakuhitaAnimTable12,
	sMakuhitaAnimTable13,
};

static const ax_sprite *const sAxSpritesMakuhita[] = {
	sMakuhitaSprites1,
	sMakuhitaSprites2,
	sMakuhitaSprites3,
	sMakuhitaSprites4,
	sMakuhitaSprites5,
	sMakuhitaSprites6,
	sMakuhitaSprites7,
	sMakuhitaSprites8,
	sMakuhitaSprites9,
	sMakuhitaSprites10,
	sMakuhitaSprites11,
	sMakuhitaSprites12,
	sMakuhitaSprites13,
	sMakuhitaSprites14,
	sMakuhitaSprites15,
	sMakuhitaSprites16,
	sMakuhitaSprites17,
	sMakuhitaSprites18,
	sMakuhitaSprites19,
	sMakuhitaSprites20,
	sMakuhitaSprites21,
	sMakuhitaSprites22,
	sMakuhitaSprites23,
	sMakuhitaSprites24,
	sMakuhitaSprites25,
	sMakuhitaSprites26,
	sMakuhitaSprites27,
	sMakuhitaSprites28,
	sMakuhitaSprites29,
	sMakuhitaSprites30,
	sMakuhitaSprites31,
	sMakuhitaSprites32,
	sMakuhitaSprites33,
	sMakuhitaSprites34,
	sMakuhitaSprites35,
	sMakuhitaSprites36,
	sMakuhitaSprites37,
};

static const axmain sAxMainMakuhita = {
	.poses = sAxPosesMakuhita,
	.animations = sAxAnimationsMakuhita,
	.animCount = ARRAY_COUNT(sAxAnimationsMakuhita),
	.spriteData = sAxSpritesMakuhita,
	.positions = sAxPositionsMakuhita,
};
