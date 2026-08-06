/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainPhanpy;
const SiroArchive gAxPhanpy = {"SIRO", &sAxMainPhanpy};

static const ax_pose sPhanpyPose1[] = {
	AX_POSE(0, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose2[] = {
	AX_POSE(1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose3[] = {
	AX_POSE(2, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose4[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose5[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose6[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose8[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose10[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose11[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose12[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose13[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose14[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose15[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose16[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose17[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose18[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose19[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose20[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose21[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose22[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose23[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose24[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose28[] = {
	AX_POSE(15, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose32[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose36[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose40[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose44[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose48[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose52[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose56[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose90[] = {
	AX_POSE(20, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose93[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose96[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose99[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose102[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose105[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose108[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose111[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose115[] = {
	AX_POSE(25, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose118[] = {
	AX_POSE(26, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose120[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose121[] = {
	AX_POSE(27, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose124[] = {
	AX_POSE(28, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose127[] = {
	AX_POSE(29, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose130[] = {
	AX_POSE(28, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose132[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose133[] = {
	AX_POSE(27, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose136[] = {
	AX_POSE(26, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose137[] = {
	AX_POSE(30, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose138[] = {
	AX_POSE(31, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose139[] = {
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose140[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose141[] = {
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose142[] = {
	AX_POSE(35, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose143[] = {
	AX_POSE(36, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose144[] = {
	AX_POSE(35, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose145[] = {
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose146[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose172[] = {
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose173[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose175[] = {
	AX_POSE(24, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose177[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose178[] = {
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose180[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose183[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose186[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose191[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose192[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose193[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose195[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose197[] = {
	AX_POSE(23, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose202[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose203[] = {
	AX_POSE(23, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose204[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose206[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose208[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPhanpyPose209[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const u8 sPhanpyAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_2_1.lz");
static const u8 sPhanpyAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_2_2.lz");
static const u8 sPhanpyAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_2_3.lz");
static const u8 sPhanpyAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_2_4.lz");
static const u8 sPhanpyAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_2_5.lz");
static const u8 sPhanpyAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_2_6.lz");
static const u8 sPhanpyAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_2_7.lz");
static const u8 sPhanpyAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_2_8.lz");
static const u8 sPhanpyAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_3_1.lz");
static const u8 sPhanpyAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_3_2.lz");
static const u8 sPhanpyAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_3_3.lz");
static const u8 sPhanpyAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_3_4.lz");
static const u8 sPhanpyAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_3_5.lz");
static const u8 sPhanpyAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_3_6.lz");
static const u8 sPhanpyAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_3_7.lz");
static const u8 sPhanpyAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_3_8.lz");
static const u8 sPhanpyAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_4_1.lz");
static const u8 sPhanpyAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_4_2.lz");
static const u8 sPhanpyAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_4_3.lz");
static const u8 sPhanpyAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_4_4.lz");
static const u8 sPhanpyAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_4_5.lz");
static const u8 sPhanpyAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_4_6.lz");
static const u8 sPhanpyAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_4_7.lz");
static const u8 sPhanpyAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_4_8.lz");
static const u8 sPhanpyAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_9_1.lz");
static const u8 sPhanpyAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_9_2.lz");
static const u8 sPhanpyAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_9_3.lz");
static const u8 sPhanpyAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_9_4.lz");
static const u8 sPhanpyAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_9_5.lz");
static const u8 sPhanpyAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_9_6.lz");
static const u8 sPhanpyAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_9_7.lz");
static const u8 sPhanpyAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_9_8.lz");
static const u8 sPhanpyAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_11_2.lz");
static const u8 sPhanpyAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_11_3.lz");
static const u8 sPhanpyAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_11_4.lz");
static const u8 sPhanpyAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_11_5.lz");
static const u8 sPhanpyAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_11_6.lz");
static const u8 sPhanpyAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/phanpy/sPhanpyAnims_11_7.lz");

static const u8 sPhanpyGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_1.4bpp.lz");
static const ax_sprite sPhanpySprites1[] = {
	{sPhanpyGfx1, ARRAY_COUNT(sPhanpyGfx1)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_2.4bpp.lz");
static const ax_sprite sPhanpySprites2[] = {
	{sPhanpyGfx2, ARRAY_COUNT(sPhanpyGfx2)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_3.4bpp.lz");
static const ax_sprite sPhanpySprites3[] = {
	{sPhanpyGfx3, ARRAY_COUNT(sPhanpyGfx3)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_4.4bpp.lz");
static const ax_sprite sPhanpySprites4[] = {
	{sPhanpyGfx4, ARRAY_COUNT(sPhanpyGfx4)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_5.4bpp.lz");
static const ax_sprite sPhanpySprites5[] = {
	{sPhanpyGfx5, ARRAY_COUNT(sPhanpyGfx5)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_6.4bpp.lz");
static const ax_sprite sPhanpySprites6[] = {
	{sPhanpyGfx6, ARRAY_COUNT(sPhanpyGfx6)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_7.4bpp.lz");
static const ax_sprite sPhanpySprites7[] = {
	{sPhanpyGfx7, ARRAY_COUNT(sPhanpyGfx7)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_8.4bpp.lz");
static const ax_sprite sPhanpySprites8[] = {
	{sPhanpyGfx8, ARRAY_COUNT(sPhanpyGfx8)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_9.4bpp.lz");
static const ax_sprite sPhanpySprites9[] = {
	{sPhanpyGfx9, ARRAY_COUNT(sPhanpyGfx9)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_10.4bpp.lz");
static const ax_sprite sPhanpySprites10[] = {
	{sPhanpyGfx10, ARRAY_COUNT(sPhanpyGfx10)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_11.4bpp.lz");
static const ax_sprite sPhanpySprites11[] = {
	{sPhanpyGfx11, ARRAY_COUNT(sPhanpyGfx11)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_12.4bpp.lz");
static const ax_sprite sPhanpySprites12[] = {
	{sPhanpyGfx12, ARRAY_COUNT(sPhanpyGfx12)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_13.4bpp.lz");
static const ax_sprite sPhanpySprites13[] = {
	{sPhanpyGfx13, ARRAY_COUNT(sPhanpyGfx13)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_14.4bpp.lz");
static const ax_sprite sPhanpySprites14[] = {
	{sPhanpyGfx14, ARRAY_COUNT(sPhanpyGfx14)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_15.4bpp.lz");
static const ax_sprite sPhanpySprites15[] = {
	{sPhanpyGfx15, ARRAY_COUNT(sPhanpyGfx15)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_16.4bpp.lz");
static const u8 sPhanpyGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_16_1.4bpp.lz");
static const u8 sPhanpyGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_16_2.4bpp.lz");
static const ax_sprite sPhanpySprites16[] = {
	{sPhanpyGfx16, ARRAY_COUNT(sPhanpyGfx16)}, 
	{NULL, 32}, 
	{sPhanpyGfx16_1, ARRAY_COUNT(sPhanpyGfx16_1)}, 
	{NULL, 32}, 
	{sPhanpyGfx16_2, ARRAY_COUNT(sPhanpyGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_17.4bpp.lz");
static const u8 sPhanpyGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_17_1.4bpp.lz");
static const u8 sPhanpyGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_17_2.4bpp.lz");
static const ax_sprite sPhanpySprites17[] = {
	{sPhanpyGfx17, ARRAY_COUNT(sPhanpyGfx17)}, 
	{NULL, 32}, 
	{sPhanpyGfx17_1, ARRAY_COUNT(sPhanpyGfx17_1)}, 
	{NULL, 32}, 
	{sPhanpyGfx17_2, ARRAY_COUNT(sPhanpyGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_18.4bpp.lz");
static const u8 sPhanpyGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_18_1.4bpp.lz");
static const u8 sPhanpyGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_18_2.4bpp.lz");
static const ax_sprite sPhanpySprites18[] = {
	{sPhanpyGfx18, ARRAY_COUNT(sPhanpyGfx18)}, 
	{NULL, 32}, 
	{sPhanpyGfx18_1, ARRAY_COUNT(sPhanpyGfx18_1)}, 
	{NULL, 32}, 
	{sPhanpyGfx18_2, ARRAY_COUNT(sPhanpyGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_19.4bpp.lz");
static const u8 sPhanpyGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_19_1.4bpp.lz");
static const u8 sPhanpyGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_19_2.4bpp.lz");
static const u8 sPhanpyGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_19_3.4bpp.lz");
static const ax_sprite sPhanpySprites19[] = {
	{sPhanpyGfx19, ARRAY_COUNT(sPhanpyGfx19)}, 
	{NULL, 32}, 
	{sPhanpyGfx19_1, ARRAY_COUNT(sPhanpyGfx19_1)}, 
	{NULL, 32}, 
	{sPhanpyGfx19_2, ARRAY_COUNT(sPhanpyGfx19_2)}, 
	{NULL, 64}, 
	{sPhanpyGfx19_3, ARRAY_COUNT(sPhanpyGfx19_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_20.4bpp.lz");
static const u8 sPhanpyGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_20_1.4bpp.lz");
static const u8 sPhanpyGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_20_2.4bpp.lz");
static const ax_sprite sPhanpySprites20[] = {
	{sPhanpyGfx20, ARRAY_COUNT(sPhanpyGfx20)}, 
	{NULL, 32}, 
	{sPhanpyGfx20_1, ARRAY_COUNT(sPhanpyGfx20_1)}, 
	{NULL, 32}, 
	{sPhanpyGfx20_2, ARRAY_COUNT(sPhanpyGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_21.4bpp.lz");
static const u8 sPhanpyGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_21_1.4bpp.lz");
static const u8 sPhanpyGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_21_2.4bpp.lz");
static const ax_sprite sPhanpySprites21[] = {
	{NULL, 32}, 
	{sPhanpyGfx21, ARRAY_COUNT(sPhanpyGfx21)}, 
	{NULL, 32}, 
	{sPhanpyGfx21_1, ARRAY_COUNT(sPhanpyGfx21_1)}, 
	{NULL, 32}, 
	{sPhanpyGfx21_2, ARRAY_COUNT(sPhanpyGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_22.4bpp.lz");
static const u8 sPhanpyGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_22_1.4bpp.lz");
static const u8 sPhanpyGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_22_2.4bpp.lz");
static const ax_sprite sPhanpySprites22[] = {
	{sPhanpyGfx22, ARRAY_COUNT(sPhanpyGfx22)}, 
	{NULL, 32}, 
	{sPhanpyGfx22_1, ARRAY_COUNT(sPhanpyGfx22_1)}, 
	{NULL, 32}, 
	{sPhanpyGfx22_2, ARRAY_COUNT(sPhanpyGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_23.4bpp.lz");
static const u8 sPhanpyGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_23_1.4bpp.lz");
static const ax_sprite sPhanpySprites23[] = {
	{NULL, 32}, 
	{sPhanpyGfx23, ARRAY_COUNT(sPhanpyGfx23)}, 
	{NULL, 32}, 
	{sPhanpyGfx23_1, ARRAY_COUNT(sPhanpyGfx23_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_24.4bpp.lz");
static const u8 sPhanpyGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_24_1.4bpp.lz");
static const u8 sPhanpyGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_24_2.4bpp.lz");
static const ax_sprite sPhanpySprites24[] = {
	{NULL, 128}, 
	{sPhanpyGfx24, ARRAY_COUNT(sPhanpyGfx24)}, 
	{NULL, 32}, 
	{sPhanpyGfx24_1, ARRAY_COUNT(sPhanpyGfx24_1)}, 
	{NULL, 64}, 
	{sPhanpyGfx24_2, ARRAY_COUNT(sPhanpyGfx24_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_25.4bpp.lz");
static const u8 sPhanpyGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_25_1.4bpp.lz");
static const u8 sPhanpyGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_25_2.4bpp.lz");
static const ax_sprite sPhanpySprites25[] = {
	{NULL, 32}, 
	{sPhanpyGfx25, ARRAY_COUNT(sPhanpyGfx25)}, 
	{NULL, 64}, 
	{sPhanpyGfx25_1, ARRAY_COUNT(sPhanpyGfx25_1)}, 
	{NULL, 32}, 
	{sPhanpyGfx25_2, ARRAY_COUNT(sPhanpyGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_26.4bpp.lz");
static const u8 sPhanpyGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_26_1.4bpp.lz");
static const ax_sprite sPhanpySprites26[] = {
	{sPhanpyGfx26, ARRAY_COUNT(sPhanpyGfx26)}, 
	{NULL, 32}, 
	{sPhanpyGfx26_1, ARRAY_COUNT(sPhanpyGfx26_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_27.4bpp.lz");
static const u8 sPhanpyGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_27_1.4bpp.lz");
static const ax_sprite sPhanpySprites27[] = {
	{sPhanpyGfx27, ARRAY_COUNT(sPhanpyGfx27)}, 
	{NULL, 32}, 
	{sPhanpyGfx27_1, ARRAY_COUNT(sPhanpyGfx27_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_28.4bpp.lz");
static const ax_sprite sPhanpySprites28[] = {
	{sPhanpyGfx28, ARRAY_COUNT(sPhanpyGfx28)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_29.4bpp.lz");
static const u8 sPhanpyGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_29_1.4bpp.lz");
static const u8 sPhanpyGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_29_2.4bpp.lz");
static const ax_sprite sPhanpySprites29[] = {
	{NULL, 32}, 
	{sPhanpyGfx29, ARRAY_COUNT(sPhanpyGfx29)}, 
	{NULL, 64}, 
	{sPhanpyGfx29_1, ARRAY_COUNT(sPhanpyGfx29_1)}, 
	{NULL, 32}, 
	{sPhanpyGfx29_2, ARRAY_COUNT(sPhanpyGfx29_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_30.4bpp.lz");
static const u8 sPhanpyGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_30_1.4bpp.lz");
static const u8 sPhanpyGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_30_2.4bpp.lz");
static const ax_sprite sPhanpySprites30[] = {
	{NULL, 32}, 
	{sPhanpyGfx30, ARRAY_COUNT(sPhanpyGfx30)}, 
	{NULL, 64}, 
	{sPhanpyGfx30_1, ARRAY_COUNT(sPhanpyGfx30_1)}, 
	{NULL, 32}, 
	{sPhanpyGfx30_2, ARRAY_COUNT(sPhanpyGfx30_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_31.4bpp.lz");
static const ax_sprite sPhanpySprites31[] = {
	{sPhanpyGfx31, ARRAY_COUNT(sPhanpyGfx31)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_32.4bpp.lz");
static const ax_sprite sPhanpySprites32[] = {
	{sPhanpyGfx32, ARRAY_COUNT(sPhanpyGfx32)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_33.4bpp.lz");
static const ax_sprite sPhanpySprites33[] = {
	{sPhanpyGfx33, ARRAY_COUNT(sPhanpyGfx33)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_34.4bpp.lz");
static const ax_sprite sPhanpySprites34[] = {
	{sPhanpyGfx34, ARRAY_COUNT(sPhanpyGfx34)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_35.4bpp.lz");
static const ax_sprite sPhanpySprites35[] = {
	{sPhanpyGfx35, ARRAY_COUNT(sPhanpyGfx35)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_36.4bpp.lz");
static const ax_sprite sPhanpySprites36[] = {
	{sPhanpyGfx36, ARRAY_COUNT(sPhanpyGfx36)}, 
	{NULL, 0}
};
static const u8 sPhanpyGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/phanpy/sprite_37.4bpp.lz");
static const ax_sprite sPhanpySprites37[] = {
	{sPhanpyGfx37, ARRAY_COUNT(sPhanpyGfx37)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesPhanpy[] = {
	sPhanpyPose1,
	sPhanpyPose2,
	sPhanpyPose3,
	sPhanpyPose4,
	sPhanpyPose5,
	sPhanpyPose6,
	sPhanpyPose7,
	sPhanpyPose8,
	sPhanpyPose9,
	sPhanpyPose10,
	sPhanpyPose11,
	sPhanpyPose12,
	sPhanpyPose13,
	sPhanpyPose14,
	sPhanpyPose15,
	sPhanpyPose16,
	sPhanpyPose17,
	sPhanpyPose18,
	sPhanpyPose19,
	sPhanpyPose20,
	sPhanpyPose21,
	sPhanpyPose22,
	sPhanpyPose23,
	sPhanpyPose24,
	sPhanpyPose1,
	sPhanpyPose2,
	sPhanpyPose3,
	sPhanpyPose28,
	sPhanpyPose4,
	sPhanpyPose5,
	sPhanpyPose6,
	sPhanpyPose32,
	sPhanpyPose7,
	sPhanpyPose8,
	sPhanpyPose9,
	sPhanpyPose36,
	sPhanpyPose10,
	sPhanpyPose11,
	sPhanpyPose12,
	sPhanpyPose40,
	sPhanpyPose13,
	sPhanpyPose14,
	sPhanpyPose15,
	sPhanpyPose44,
	sPhanpyPose16,
	sPhanpyPose17,
	sPhanpyPose18,
	sPhanpyPose48,
	sPhanpyPose19,
	sPhanpyPose20,
	sPhanpyPose21,
	sPhanpyPose52,
	sPhanpyPose22,
	sPhanpyPose23,
	sPhanpyPose24,
	sPhanpyPose56,
	sPhanpyPose1,
	sPhanpyPose2,
	sPhanpyPose3,
	sPhanpyPose28,
	sPhanpyPose4,
	sPhanpyPose5,
	sPhanpyPose6,
	sPhanpyPose32,
	sPhanpyPose7,
	sPhanpyPose8,
	sPhanpyPose9,
	sPhanpyPose36,
	sPhanpyPose10,
	sPhanpyPose11,
	sPhanpyPose12,
	sPhanpyPose40,
	sPhanpyPose13,
	sPhanpyPose14,
	sPhanpyPose15,
	sPhanpyPose44,
	sPhanpyPose16,
	sPhanpyPose17,
	sPhanpyPose18,
	sPhanpyPose48,
	sPhanpyPose19,
	sPhanpyPose20,
	sPhanpyPose21,
	sPhanpyPose52,
	sPhanpyPose22,
	sPhanpyPose23,
	sPhanpyPose24,
	sPhanpyPose56,
	sPhanpyPose1,
	sPhanpyPose90,
	sPhanpyPose28,
	sPhanpyPose4,
	sPhanpyPose93,
	sPhanpyPose32,
	sPhanpyPose7,
	sPhanpyPose96,
	sPhanpyPose36,
	sPhanpyPose10,
	sPhanpyPose99,
	sPhanpyPose40,
	sPhanpyPose13,
	sPhanpyPose102,
	sPhanpyPose44,
	sPhanpyPose16,
	sPhanpyPose105,
	sPhanpyPose48,
	sPhanpyPose19,
	sPhanpyPose108,
	sPhanpyPose52,
	sPhanpyPose22,
	sPhanpyPose111,
	sPhanpyPose56,
	sPhanpyPose1,
	sPhanpyPose28,
	sPhanpyPose115,
	sPhanpyPose4,
	sPhanpyPose32,
	sPhanpyPose118,
	sPhanpyPose7,
	sPhanpyPose120,
	sPhanpyPose121,
	sPhanpyPose10,
	sPhanpyPose40,
	sPhanpyPose124,
	sPhanpyPose13,
	sPhanpyPose44,
	sPhanpyPose127,
	sPhanpyPose16,
	sPhanpyPose48,
	sPhanpyPose130,
	sPhanpyPose19,
	sPhanpyPose132,
	sPhanpyPose133,
	sPhanpyPose22,
	sPhanpyPose56,
	sPhanpyPose136,
	sPhanpyPose137,
	sPhanpyPose138,
	sPhanpyPose139,
	sPhanpyPose140,
	sPhanpyPose141,
	sPhanpyPose142,
	sPhanpyPose143,
	sPhanpyPose144,
	sPhanpyPose145,
	sPhanpyPose146,
	sPhanpyPose1,
	sPhanpyPose90,
	sPhanpyPose28,
	sPhanpyPose4,
	sPhanpyPose93,
	sPhanpyPose32,
	sPhanpyPose7,
	sPhanpyPose96,
	sPhanpyPose36,
	sPhanpyPose10,
	sPhanpyPose99,
	sPhanpyPose40,
	sPhanpyPose13,
	sPhanpyPose102,
	sPhanpyPose44,
	sPhanpyPose16,
	sPhanpyPose105,
	sPhanpyPose48,
	sPhanpyPose19,
	sPhanpyPose108,
	sPhanpyPose52,
	sPhanpyPose22,
	sPhanpyPose111,
	sPhanpyPose56,
	sPhanpyPose90,
	sPhanpyPose172,
	sPhanpyPose173,
	sPhanpyPose105,
	sPhanpyPose175,
	sPhanpyPose99,
	sPhanpyPose177,
	sPhanpyPose178,
	sPhanpyPose28,
	sPhanpyPose180,
	sPhanpyPose120,
	sPhanpyPose40,
	sPhanpyPose183,
	sPhanpyPose48,
	sPhanpyPose132,
	sPhanpyPose186,
	sPhanpyPose1,
	sPhanpyPose90,
	sPhanpyPose28,
	sPhanpyPose4,
	sPhanpyPose191,
	sPhanpyPose192,
	sPhanpyPose193,
	sPhanpyPose96,
	sPhanpyPose195,
	sPhanpyPose10,
	sPhanpyPose197,
	sPhanpyPose40,
	sPhanpyPose13,
	sPhanpyPose102,
	sPhanpyPose44,
	sPhanpyPose202,
	sPhanpyPose203,
	sPhanpyPose204,
	sPhanpyPose19,
	sPhanpyPose206,
	sPhanpyPose132,
	sPhanpyPose208,
	sPhanpyPose209,
	sPhanpyPose186,
	sPhanpyPose115,
	sPhanpyPose136,
	sPhanpyPose133,
	sPhanpyPose130,
	sPhanpyPose127,
	sPhanpyPose124,
	sPhanpyPose121,
	sPhanpyPose118,
	sPhanpyPose1,
	sPhanpyPose22,
	sPhanpyPose19,
	sPhanpyPose16,
	sPhanpyPose13,
	sPhanpyPose10,
	sPhanpyPose7,
	sPhanpyPose4,
};

static const struct PositionSets sAxPositionsPhanpy[] = {
	[0] = { .set = { {0, -2}, {-4, 1}, {4, 1}, {0, -4} } },
	[1] = { .set = { {0, -4}, {-4, -1}, {3, 2}, {0, -6} } },
	[2] = { .set = { {0, -3}, {-3, 2}, {4, -1}, {0, -4} } },
	[3] = { .set = { {5, -4}, {6, -1}, {1, 1}, {0, -6} } },
	[4] = { .set = { {5, -5}, {5, -2}, {3, 0}, {-1, -8} } },
	[5] = { .set = { {4, -5}, {8, -1}, {-1, 0}, {1, -7} } },
	[6] = { .set = { {8, -7}, {5, -3}, {4, -1}, {0, -7} } },
	[7] = { .set = { {8, -8}, {3, -2}, {7, -3}, {-1, -8} } },
	[8] = { .set = { {7, -7}, {8, -4}, {3, -1}, {0, -8} } },
	[9] = { .set = { {7, -10}, {-1, -3}, {4, -2}, {1, -8} } },
	[10] = { .set = { {7, -12}, {-1, -4}, {6, -5}, {1, -9} } },
	[11] = { .set = { {6, -10}, {1, -4}, {4, -1}, {1, -8} } },
	[12] = { .set = { {0, -11}, {3, -3}, {-3, -3}, {0, -8} } },
	[13] = { .set = { {0, -12}, {3, -3}, {-3, -4}, {0, -9} } },
	[14] = { .set = { {0, -13}, {3, -4}, {-3, -3}, {0, -9} } },
	[15] = { .set = { {-7, -10}, {1, -3}, {-4, -2}, {-1, -8} } },
	[16] = { .set = { {-7, -12}, {1, -4}, {-6, -5}, {-1, -9} } },
	[17] = { .set = { {-6, -10}, {-1, -4}, {-4, -1}, {-1, -8} } },
	[18] = { .set = { {-8, -7}, {-5, -3}, {-4, -1}, {0, -7} } },
	[19] = { .set = { {-8, -8}, {-3, -2}, {-7, -3}, {1, -8} } },
	[20] = { .set = { {-7, -7}, {-8, -4}, {-3, -1}, {0, -8} } },
	[21] = { .set = { {-5, -4}, {-6, -1}, {-1, 1}, {0, -6} } },
	[22] = { .set = { {-5, -5}, {-5, -2}, {-3, 0}, {1, -8} } },
	[23] = { .set = { {-4, -5}, {-8, -1}, {1, 0}, {-1, -7} } },
	[24] = { .set = { {0, -2}, {-4, 1}, {4, 1}, {0, -4} } },
	[25] = { .set = { {0, -4}, {-4, -1}, {3, 2}, {0, -6} } },
	[26] = { .set = { {0, -3}, {-3, 2}, {4, -1}, {0, -4} } },
	[27] = { .set = { {0, -7}, {-4, 1}, {4, 1}, {0, -6} } },
	[28] = { .set = { {5, -4}, {6, -1}, {1, 1}, {0, -6} } },
	[29] = { .set = { {5, -5}, {5, -2}, {3, 0}, {-1, -8} } },
	[30] = { .set = { {4, -5}, {8, -1}, {-1, 0}, {1, -7} } },
	[31] = { .set = { {8, -9}, {6, -1}, {2, 1}, {2, -6} } },
	[32] = { .set = { {8, -7}, {5, -3}, {4, -1}, {0, -7} } },
	[33] = { .set = { {8, -8}, {3, -2}, {7, -3}, {-1, -8} } },
	[34] = { .set = { {7, -7}, {8, -4}, {3, -1}, {0, -8} } },
	[35] = { .set = { {10, -10}, {5, -3}, {5, -1}, {2, -7} } },
	[36] = { .set = { {7, -10}, {-1, -3}, {4, -2}, {1, -8} } },
	[37] = { .set = { {7, -12}, {-1, -4}, {6, -5}, {1, -9} } },
	[38] = { .set = { {6, -10}, {1, -4}, {4, -1}, {1, -8} } },
	[39] = { .set = { {6, -14}, {0, -4}, {4, -2}, {0, -8} } },
	[40] = { .set = { {0, -11}, {3, -3}, {-3, -3}, {0, -8} } },
	[41] = { .set = { {0, -12}, {3, -3}, {-3, -4}, {0, -9} } },
	[42] = { .set = { {0, -13}, {3, -4}, {-3, -3}, {0, -9} } },
	[43] = { .set = { {0, -13}, {3, -3}, {-3, -3}, {0, -8} } },
	[44] = { .set = { {-7, -10}, {1, -3}, {-4, -2}, {-1, -8} } },
	[45] = { .set = { {-7, -12}, {1, -4}, {-6, -5}, {-1, -9} } },
	[46] = { .set = { {-6, -10}, {-1, -4}, {-4, -1}, {-1, -8} } },
	[47] = { .set = { {-6, -14}, {0, -4}, {-4, -2}, {0, -8} } },
	[48] = { .set = { {-8, -7}, {-5, -3}, {-4, -1}, {0, -7} } },
	[49] = { .set = { {-8, -8}, {-3, -2}, {-7, -3}, {1, -8} } },
	[50] = { .set = { {-7, -7}, {-8, -4}, {-3, -1}, {0, -8} } },
	[51] = { .set = { {-10, -10}, {-5, -3}, {-5, -1}, {-2, -7} } },
	[52] = { .set = { {-5, -4}, {-6, -1}, {-1, 1}, {0, -6} } },
	[53] = { .set = { {-5, -5}, {-5, -2}, {-3, 0}, {1, -8} } },
	[54] = { .set = { {-4, -5}, {-8, -1}, {1, 0}, {-1, -7} } },
	[55] = { .set = { {-8, -9}, {-6, -1}, {-2, 1}, {-2, -6} } },
	[56] = { .set = { {0, -2}, {-4, 1}, {4, 1}, {0, -4} } },
	[57] = { .set = { {0, -4}, {-4, -1}, {3, 2}, {0, -6} } },
	[58] = { .set = { {0, -3}, {-3, 2}, {4, -1}, {0, -4} } },
	[59] = { .set = { {0, -7}, {-4, 1}, {4, 1}, {0, -6} } },
	[60] = { .set = { {5, -4}, {6, -1}, {1, 1}, {0, -6} } },
	[61] = { .set = { {5, -5}, {5, -2}, {3, 0}, {-1, -8} } },
	[62] = { .set = { {4, -5}, {8, -1}, {-1, 0}, {1, -7} } },
	[63] = { .set = { {8, -9}, {6, -1}, {2, 1}, {2, -6} } },
	[64] = { .set = { {8, -7}, {5, -3}, {4, -1}, {0, -7} } },
	[65] = { .set = { {8, -8}, {3, -2}, {7, -3}, {-1, -8} } },
	[66] = { .set = { {7, -7}, {8, -4}, {3, -1}, {0, -8} } },
	[67] = { .set = { {10, -10}, {5, -3}, {5, -1}, {2, -7} } },
	[68] = { .set = { {7, -10}, {-1, -3}, {4, -2}, {1, -8} } },
	[69] = { .set = { {7, -12}, {-1, -4}, {6, -5}, {1, -9} } },
	[70] = { .set = { {6, -10}, {1, -4}, {4, -1}, {1, -8} } },
	[71] = { .set = { {6, -14}, {0, -4}, {4, -2}, {0, -8} } },
	[72] = { .set = { {0, -11}, {3, -3}, {-3, -3}, {0, -8} } },
	[73] = { .set = { {0, -12}, {3, -3}, {-3, -4}, {0, -9} } },
	[74] = { .set = { {0, -13}, {3, -4}, {-3, -3}, {0, -9} } },
	[75] = { .set = { {0, -13}, {3, -3}, {-3, -3}, {0, -8} } },
	[76] = { .set = { {-7, -10}, {1, -3}, {-4, -2}, {-1, -8} } },
	[77] = { .set = { {-7, -12}, {1, -4}, {-6, -5}, {-1, -9} } },
	[78] = { .set = { {-6, -10}, {-1, -4}, {-4, -1}, {-1, -8} } },
	[79] = { .set = { {-6, -14}, {0, -4}, {-4, -2}, {0, -8} } },
	[80] = { .set = { {-8, -7}, {-5, -3}, {-4, -1}, {0, -7} } },
	[81] = { .set = { {-8, -8}, {-3, -2}, {-7, -3}, {1, -8} } },
	[82] = { .set = { {-7, -7}, {-8, -4}, {-3, -1}, {0, -8} } },
	[83] = { .set = { {-10, -10}, {-5, -3}, {-5, -1}, {-2, -7} } },
	[84] = { .set = { {-5, -4}, {-6, -1}, {-1, 1}, {0, -6} } },
	[85] = { .set = { {-5, -5}, {-5, -2}, {-3, 0}, {1, -8} } },
	[86] = { .set = { {-4, -5}, {-8, -1}, {1, 0}, {-1, -7} } },
	[87] = { .set = { {-8, -9}, {-6, -1}, {-2, 1}, {-2, -6} } },
	[88] = { .set = { {0, -2}, {-4, 1}, {4, 1}, {0, -4} } },
	[89] = { .set = { {0, -1}, {-4, 1}, {4, 1}, {0, -5} } },
	[90] = { .set = { {0, -7}, {-4, 1}, {4, 1}, {0, -6} } },
	[91] = { .set = { {5, -4}, {6, -1}, {1, 1}, {0, -6} } },
	[92] = { .set = { {5, -3}, {6, -1}, {1, 1}, {0, -6} } },
	[93] = { .set = { {8, -9}, {6, -1}, {2, 1}, {2, -6} } },
	[94] = { .set = { {8, -7}, {5, -3}, {4, -1}, {0, -7} } },
	[95] = { .set = { {7, -5}, {6, -4}, {4, -1}, {0, -7} } },
	[96] = { .set = { {10, -10}, {5, -3}, {5, -1}, {2, -7} } },
	[97] = { .set = { {7, -10}, {-1, -3}, {4, -2}, {1, -8} } },
	[98] = { .set = { {5, -7}, {-1, -4}, {4, -2}, {0, -6} } },
	[99] = { .set = { {6, -14}, {0, -4}, {4, -2}, {0, -8} } },
	[100] = { .set = { {0, -11}, {3, -3}, {-3, -3}, {0, -8} } },
	[101] = { .set = { {0, -9}, {3, -2}, {-3, -2}, {0, -7} } },
	[102] = { .set = { {0, -13}, {3, -3}, {-3, -3}, {0, -8} } },
	[103] = { .set = { {-7, -10}, {1, -3}, {-4, -2}, {-1, -8} } },
	[104] = { .set = { {-5, -7}, {1, -4}, {-4, -2}, {0, -6} } },
	[105] = { .set = { {-6, -14}, {0, -4}, {-4, -2}, {0, -8} } },
	[106] = { .set = { {-8, -7}, {-5, -3}, {-4, -1}, {0, -7} } },
	[107] = { .set = { {-7, -5}, {-6, -4}, {-4, -1}, {0, -7} } },
	[108] = { .set = { {-10, -10}, {-5, -3}, {-5, -1}, {-2, -7} } },
	[109] = { .set = { {-5, -4}, {-6, -1}, {-1, 1}, {0, -6} } },
	[110] = { .set = { {-5, -3}, {-6, -1}, {-1, 1}, {0, -6} } },
	[111] = { .set = { {-8, -9}, {-6, -1}, {-2, 1}, {-2, -6} } },
	[112] = { .set = { {0, -2}, {-4, 1}, {4, 1}, {0, -4} } },
	[113] = { .set = { {0, -7}, {-4, 1}, {4, 1}, {0, -6} } },
	[114] = { .set = { {0, 0}, {-4, 1}, {4, 1}, {0, -5} } },
	[115] = { .set = { {5, -4}, {6, -1}, {1, 1}, {0, -6} } },
	[116] = { .set = { {8, -9}, {6, -1}, {2, 1}, {2, -6} } },
	[117] = { .set = { {4, -1}, {6, -1}, {1, 1}, {2, -7} } },
	[118] = { .set = { {8, -7}, {5, -3}, {4, -1}, {0, -7} } },
	[119] = { .set = { {9, -10}, {4, -3}, {4, -1}, {1, -7} } },
	[120] = { .set = { {7, -3}, {6, -3}, {4, -1}, {1, -7} } },
	[121] = { .set = { {7, -10}, {-1, -3}, {4, -2}, {1, -8} } },
	[122] = { .set = { {6, -14}, {0, -4}, {4, -2}, {0, -8} } },
	[123] = { .set = { {5, -8}, {-1, -4}, {5, -2}, {1, -7} } },
	[124] = { .set = { {0, -11}, {3, -3}, {-3, -3}, {0, -8} } },
	[125] = { .set = { {0, -13}, {3, -3}, {-3, -3}, {0, -8} } },
	[126] = { .set = { {0, -10}, {3, -3}, {-3, -3}, {0, -7} } },
	[127] = { .set = { {-7, -10}, {1, -3}, {-4, -2}, {-1, -8} } },
	[128] = { .set = { {-6, -14}, {0, -4}, {-4, -2}, {0, -8} } },
	[129] = { .set = { {-5, -8}, {1, -4}, {-5, -2}, {-1, -7} } },
	[130] = { .set = { {-8, -7}, {-5, -3}, {-4, -1}, {0, -7} } },
	[131] = { .set = { {-9, -10}, {-4, -3}, {-4, -1}, {-1, -7} } },
	[132] = { .set = { {-7, -3}, {-6, -3}, {-4, -1}, {-1, -7} } },
	[133] = { .set = { {-5, -4}, {-6, -1}, {-1, 1}, {0, -6} } },
	[134] = { .set = { {-8, -9}, {-6, -1}, {-2, 1}, {-2, -6} } },
	[135] = { .set = { {-4, -1}, {-6, -1}, {-1, 1}, {-2, -7} } },
	[136] = { .set = { {-6, 0}, {-10, -2}, {1, 3}, {-1, -5} } },
	[137] = { .set = { {-6, 1}, {-10, -1}, {1, 3}, {-1, -5} } },
	[138] = { .set = { {0, -9}, {-5, -7}, {5, -7}, {0, -5} } },
	[139] = { .set = { {2, -10}, {6, -10}, {0, -9}, {-1, -5} } },
	[140] = { .set = { {3, -11}, {6, -11}, {5, -8}, {-1, -6} } },
	[141] = { .set = { {3, -14}, {-2, -9}, {3, -8}, {-2, -6} } },
	[142] = { .set = { {0, -14}, {3, -8}, {-3, -8}, {0, -8} } },
	[143] = { .set = { {-4, -14}, {1, -9}, {-4, -8}, {1, -6} } },
	[144] = { .set = { {-4, -11}, {-7, -11}, {-6, -8}, {0, -6} } },
	[145] = { .set = { {-3, -10}, {-7, -10}, {-1, -9}, {0, -5} } },
	[146] = { .set = { {0, -2}, {-4, 1}, {4, 1}, {0, -4} } },
	[147] = { .set = { {0, -1}, {-4, 1}, {4, 1}, {0, -5} } },
	[148] = { .set = { {0, -7}, {-4, 1}, {4, 1}, {0, -6} } },
	[149] = { .set = { {5, -4}, {6, -1}, {1, 1}, {0, -6} } },
	[150] = { .set = { {5, -3}, {6, -1}, {1, 1}, {0, -6} } },
	[151] = { .set = { {8, -9}, {6, -1}, {2, 1}, {2, -6} } },
	[152] = { .set = { {8, -7}, {5, -3}, {4, -1}, {0, -7} } },
	[153] = { .set = { {7, -5}, {6, -4}, {4, -1}, {0, -7} } },
	[154] = { .set = { {10, -10}, {5, -3}, {5, -1}, {2, -7} } },
	[155] = { .set = { {7, -10}, {-1, -3}, {4, -2}, {1, -8} } },
	[156] = { .set = { {5, -7}, {-1, -4}, {4, -2}, {0, -6} } },
	[157] = { .set = { {6, -14}, {0, -4}, {4, -2}, {0, -8} } },
	[158] = { .set = { {0, -11}, {3, -3}, {-3, -3}, {0, -8} } },
	[159] = { .set = { {0, -9}, {3, -2}, {-3, -2}, {0, -7} } },
	[160] = { .set = { {0, -13}, {3, -3}, {-3, -3}, {0, -8} } },
	[161] = { .set = { {-7, -10}, {1, -3}, {-4, -2}, {-1, -8} } },
	[162] = { .set = { {-5, -7}, {1, -4}, {-4, -2}, {0, -6} } },
	[163] = { .set = { {-6, -14}, {0, -4}, {-4, -2}, {0, -8} } },
	[164] = { .set = { {-8, -7}, {-5, -3}, {-4, -1}, {0, -7} } },
	[165] = { .set = { {-7, -5}, {-6, -4}, {-4, -1}, {0, -7} } },
	[166] = { .set = { {-10, -10}, {-5, -3}, {-5, -1}, {-2, -7} } },
	[167] = { .set = { {-5, -4}, {-6, -1}, {-1, 1}, {0, -6} } },
	[168] = { .set = { {-5, -3}, {-6, -1}, {-1, 1}, {0, -6} } },
	[169] = { .set = { {-8, -9}, {-6, -1}, {-2, 1}, {-2, -6} } },
	[170] = { .set = { {0, -1}, {-4, 1}, {4, 1}, {0, -5} } },
	[171] = { .set = { {-5, -2}, {-6, 0}, {-1, 2}, {0, -5} } },
	[172] = { .set = { {-7, -4}, {-6, -3}, {-4, 0}, {0, -6} } },
	[173] = { .set = { {-5, -7}, {1, -4}, {-4, -2}, {0, -6} } },
	[174] = { .set = { {0, -8}, {3, -1}, {-3, -1}, {0, -6} } },
	[175] = { .set = { {5, -7}, {-1, -4}, {4, -2}, {0, -6} } },
	[176] = { .set = { {7, -4}, {6, -3}, {4, 0}, {0, -6} } },
	[177] = { .set = { {5, -2}, {6, 0}, {1, 2}, {0, -5} } },
	[178] = { .set = { {0, -7}, {-4, 1}, {4, 1}, {0, -6} } },
	[179] = { .set = { {7, -9}, {5, -1}, {1, 1}, {1, -6} } },
	[180] = { .set = { {9, -10}, {4, -3}, {4, -1}, {1, -7} } },
	[181] = { .set = { {6, -14}, {0, -4}, {4, -2}, {0, -8} } },
	[182] = { .set = { {0, -12}, {3, -2}, {-3, -2}, {0, -7} } },
	[183] = { .set = { {-6, -14}, {0, -4}, {-4, -2}, {0, -8} } },
	[184] = { .set = { {-9, -10}, {-4, -3}, {-4, -1}, {-1, -7} } },
	[185] = { .set = { {-7, -9}, {-5, -1}, {-1, 1}, {-1, -6} } },
	[186] = { .set = { {0, -2}, {-4, 1}, {4, 1}, {0, -4} } },
	[187] = { .set = { {0, -1}, {-4, 1}, {4, 1}, {0, -5} } },
	[188] = { .set = { {0, -7}, {-4, 1}, {4, 1}, {0, -6} } },
	[189] = { .set = { {5, -4}, {6, -1}, {1, 1}, {0, -6} } },
	[190] = { .set = { {6, -3}, {7, -1}, {2, 1}, {1, -6} } },
	[191] = { .set = { {6, -9}, {4, -1}, {0, 1}, {0, -6} } },
	[192] = { .set = { {7, -7}, {4, -3}, {3, -1}, {-1, -7} } },
	[193] = { .set = { {7, -5}, {6, -4}, {4, -1}, {0, -7} } },
	[194] = { .set = { {8, -10}, {3, -3}, {3, -1}, {0, -7} } },
	[195] = { .set = { {7, -10}, {-1, -3}, {4, -2}, {1, -8} } },
	[196] = { .set = { {6, -8}, {0, -5}, {5, -3}, {1, -7} } },
	[197] = { .set = { {6, -14}, {0, -4}, {4, -2}, {0, -8} } },
	[198] = { .set = { {0, -11}, {3, -3}, {-3, -3}, {0, -8} } },
	[199] = { .set = { {0, -9}, {3, -2}, {-3, -2}, {0, -7} } },
	[200] = { .set = { {0, -13}, {3, -3}, {-3, -3}, {0, -8} } },
	[201] = { .set = { {-8, -10}, {0, -3}, {-5, -2}, {-2, -8} } },
	[202] = { .set = { {-7, -8}, {-1, -5}, {-6, -3}, {-2, -7} } },
	[203] = { .set = { {-7, -14}, {-1, -4}, {-5, -2}, {-1, -8} } },
	[204] = { .set = { {-8, -7}, {-5, -3}, {-4, -1}, {0, -7} } },
	[205] = { .set = { {-8, -5}, {-7, -4}, {-5, -1}, {-1, -7} } },
	[206] = { .set = { {-9, -10}, {-4, -3}, {-4, -1}, {-1, -7} } },
	[207] = { .set = { {-6, -4}, {-7, -1}, {-2, 1}, {-1, -6} } },
	[208] = { .set = { {-7, -3}, {-8, -1}, {-3, 1}, {-2, -6} } },
	[209] = { .set = { {-7, -9}, {-5, -1}, {-1, 1}, {-1, -6} } },
	[210] = { .set = { {0, 0}, {-4, 1}, {4, 1}, {0, -5} } },
	[211] = { .set = { {-4, -1}, {-6, -1}, {-1, 1}, {-2, -7} } },
	[212] = { .set = { {-7, -3}, {-6, -3}, {-4, -1}, {-1, -7} } },
	[213] = { .set = { {-5, -8}, {1, -4}, {-5, -2}, {-1, -7} } },
	[214] = { .set = { {0, -10}, {3, -3}, {-3, -3}, {0, -7} } },
	[215] = { .set = { {5, -8}, {-1, -4}, {5, -2}, {1, -7} } },
	[216] = { .set = { {7, -3}, {6, -3}, {4, -1}, {1, -7} } },
	[217] = { .set = { {4, -1}, {6, -1}, {1, 1}, {2, -7} } },
	[218] = { .set = { {0, -2}, {-4, 1}, {4, 1}, {0, -4} } },
	[219] = { .set = { {-5, -4}, {-6, -1}, {-1, 1}, {0, -6} } },
	[220] = { .set = { {-8, -7}, {-5, -3}, {-4, -1}, {0, -7} } },
	[221] = { .set = { {-7, -10}, {1, -3}, {-4, -2}, {-1, -8} } },
	[222] = { .set = { {0, -11}, {3, -3}, {-3, -3}, {0, -8} } },
	[223] = { .set = { {7, -10}, {-1, -3}, {4, -2}, {1, -8} } },
	[224] = { .set = { {8, -7}, {5, -3}, {4, -1}, {0, -7} } },
	[225] = { .set = { {5, -4}, {6, -1}, {1, 1}, {0, -6} } },
};

static const ax_anim *const sPhanpyAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02477),
	AX_ANIM_PTR(gAxSharedAnim_02542),
	AX_ANIM_PTR(gAxSharedAnim_02551),
	AX_ANIM_PTR(gAxSharedAnim_02559),
	AX_ANIM_PTR(gAxSharedAnim_02499),
	AX_ANIM_PTR(gAxSharedAnim_02519),
	AX_ANIM_PTR(gAxSharedAnim_02526),
	AX_ANIM_PTR(gAxSharedAnim_02535),
};

static const ax_anim *const sPhanpyAnimTable2[] = {
	AX_ANIM_PTR(sPhanpyAnims_2_1),
	AX_ANIM_PTR(sPhanpyAnims_2_2),
	AX_ANIM_PTR(sPhanpyAnims_2_3),
	AX_ANIM_PTR(sPhanpyAnims_2_4),
	AX_ANIM_PTR(sPhanpyAnims_2_5),
	AX_ANIM_PTR(sPhanpyAnims_2_6),
	AX_ANIM_PTR(sPhanpyAnims_2_7),
	AX_ANIM_PTR(sPhanpyAnims_2_8),
};

static const ax_anim *const sPhanpyAnimTable3[] = {
	AX_ANIM_PTR(sPhanpyAnims_3_1),
	AX_ANIM_PTR(sPhanpyAnims_3_2),
	AX_ANIM_PTR(sPhanpyAnims_3_3),
	AX_ANIM_PTR(sPhanpyAnims_3_4),
	AX_ANIM_PTR(sPhanpyAnims_3_5),
	AX_ANIM_PTR(sPhanpyAnims_3_6),
	AX_ANIM_PTR(sPhanpyAnims_3_7),
	AX_ANIM_PTR(sPhanpyAnims_3_8),
};

static const ax_anim *const sPhanpyAnimTable4[] = {
	AX_ANIM_PTR(sPhanpyAnims_4_1),
	AX_ANIM_PTR(sPhanpyAnims_4_2),
	AX_ANIM_PTR(sPhanpyAnims_4_3),
	AX_ANIM_PTR(sPhanpyAnims_4_4),
	AX_ANIM_PTR(sPhanpyAnims_4_5),
	AX_ANIM_PTR(sPhanpyAnims_4_6),
	AX_ANIM_PTR(sPhanpyAnims_4_7),
	AX_ANIM_PTR(sPhanpyAnims_4_8),
};

static const ax_anim *const sPhanpyAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00002),
	AX_ANIM_PTR(gAxSharedAnim_00003),
	AX_ANIM_PTR(gAxSharedAnim_00005),
	AX_ANIM_PTR(gAxSharedAnim_00007),
	AX_ANIM_PTR(gAxSharedAnim_00009),
	AX_ANIM_PTR(gAxSharedAnim_00013),
	AX_ANIM_PTR(gAxSharedAnim_00015),
	AX_ANIM_PTR(gAxSharedAnim_00019),
};

static const ax_anim *const sPhanpyAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
};

static const ax_anim *const sPhanpyAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00467),
	AX_ANIM_PTR(gAxSharedAnim_00480),
	AX_ANIM_PTR(gAxSharedAnim_00488),
	AX_ANIM_PTR(gAxSharedAnim_00497),
	AX_ANIM_PTR(gAxSharedAnim_00509),
	AX_ANIM_PTR(gAxSharedAnim_00518),
	AX_ANIM_PTR(gAxSharedAnim_00524),
	AX_ANIM_PTR(gAxSharedAnim_00530),
};

static const ax_anim *const sPhanpyAnimTable8[] = {
	AX_ANIM_PTR(gAxSharedAnim_02463),
	AX_ANIM_PTR(gAxSharedAnim_02464),
	AX_ANIM_PTR(gAxSharedAnim_02465),
	AX_ANIM_PTR(gAxSharedAnim_02466),
	AX_ANIM_PTR(gAxSharedAnim_02467),
	AX_ANIM_PTR(gAxSharedAnim_02468),
	AX_ANIM_PTR(gAxSharedAnim_02469),
	AX_ANIM_PTR(gAxSharedAnim_02470),
};

static const ax_anim *const sPhanpyAnimTable9[] = {
	AX_ANIM_PTR(sPhanpyAnims_9_1),
	AX_ANIM_PTR(sPhanpyAnims_9_2),
	AX_ANIM_PTR(sPhanpyAnims_9_3),
	AX_ANIM_PTR(sPhanpyAnims_9_4),
	AX_ANIM_PTR(sPhanpyAnims_9_5),
	AX_ANIM_PTR(sPhanpyAnims_9_6),
	AX_ANIM_PTR(sPhanpyAnims_9_7),
	AX_ANIM_PTR(sPhanpyAnims_9_8),
};

static const ax_anim *const sPhanpyAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00905),
	AX_ANIM_PTR(gAxSharedAnim_00918),
	AX_ANIM_PTR(gAxSharedAnim_00930),
	AX_ANIM_PTR(gAxSharedAnim_00942),
	AX_ANIM_PTR(gAxSharedAnim_00955),
	AX_ANIM_PTR(gAxSharedAnim_00965),
	AX_ANIM_PTR(gAxSharedAnim_00978),
	AX_ANIM_PTR(gAxSharedAnim_00993),
};

static const ax_anim *const sPhanpyAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_01014),
	AX_ANIM_PTR(sPhanpyAnims_11_2),
	AX_ANIM_PTR(sPhanpyAnims_11_3),
	AX_ANIM_PTR(sPhanpyAnims_11_4),
	AX_ANIM_PTR(sPhanpyAnims_11_5),
	AX_ANIM_PTR(sPhanpyAnims_11_6),
	AX_ANIM_PTR(sPhanpyAnims_11_7),
	AX_ANIM_PTR(gAxSharedAnim_01299),
};

static const ax_anim *const sPhanpyAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01337),
	AX_ANIM_PTR(gAxSharedAnim_01414),
	AX_ANIM_PTR(gAxSharedAnim_01392),
	AX_ANIM_PTR(gAxSharedAnim_01380),
	AX_ANIM_PTR(gAxSharedAnim_01379),
	AX_ANIM_PTR(gAxSharedAnim_01368),
	AX_ANIM_PTR(gAxSharedAnim_01354),
	AX_ANIM_PTR(gAxSharedAnim_01338),
};

static const ax_anim *const sPhanpyAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01422),
	AX_ANIM_PTR(gAxSharedAnim_01464),
	AX_ANIM_PTR(gAxSharedAnim_01461),
	AX_ANIM_PTR(gAxSharedAnim_01456),
	AX_ANIM_PTR(gAxSharedAnim_01446),
	AX_ANIM_PTR(gAxSharedAnim_01443),
	AX_ANIM_PTR(gAxSharedAnim_01438),
	AX_ANIM_PTR(gAxSharedAnim_01429),
};

static const ax_anim *const *const sAxAnimationsPhanpy[] = {
	sPhanpyAnimTable1,
	sPhanpyAnimTable2,
	sPhanpyAnimTable3,
	sPhanpyAnimTable4,
	sPhanpyAnimTable5,
	sPhanpyAnimTable6,
	sPhanpyAnimTable7,
	sPhanpyAnimTable8,
	sPhanpyAnimTable9,
	sPhanpyAnimTable10,
	sPhanpyAnimTable11,
	sPhanpyAnimTable12,
	sPhanpyAnimTable13,
};

static const ax_sprite *const sAxSpritesPhanpy[] = {
	sPhanpySprites1,
	sPhanpySprites2,
	sPhanpySprites3,
	sPhanpySprites4,
	sPhanpySprites5,
	sPhanpySprites6,
	sPhanpySprites7,
	sPhanpySprites8,
	sPhanpySprites9,
	sPhanpySprites10,
	sPhanpySprites11,
	sPhanpySprites12,
	sPhanpySprites13,
	sPhanpySprites14,
	sPhanpySprites15,
	sPhanpySprites16,
	sPhanpySprites17,
	sPhanpySprites18,
	sPhanpySprites19,
	sPhanpySprites20,
	sPhanpySprites21,
	sPhanpySprites22,
	sPhanpySprites23,
	sPhanpySprites24,
	sPhanpySprites25,
	sPhanpySprites26,
	sPhanpySprites27,
	sPhanpySprites28,
	sPhanpySprites29,
	sPhanpySprites30,
	sPhanpySprites31,
	sPhanpySprites32,
	sPhanpySprites33,
	sPhanpySprites34,
	sPhanpySprites35,
	sPhanpySprites36,
	sPhanpySprites37,
};

static const axmain sAxMainPhanpy = {
	.poses = sAxPosesPhanpy,
	.animations = sAxAnimationsPhanpy,
	.animCount = ARRAY_COUNT(sAxAnimationsPhanpy),
	.spriteData = sAxSpritesPhanpy,
	.positions = sAxPositionsPhanpy,
};
