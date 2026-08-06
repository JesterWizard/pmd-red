/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainMareep;
const SiroArchive gAxMareep = {"SIRO", &sAxMainMareep};

static const ax_pose sMareepPose1[] = {
	AX_POSE(0, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose2[] = {
	AX_POSE(1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose3[] = {
	AX_POSE(2, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose4[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose5[] = {
	AX_POSE(4, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose6[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose7[] = {
	AX_POSE(6, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose8[] = {
	AX_POSE(7, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose9[] = {
	AX_POSE(8, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose10[] = {
	AX_POSE(9, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose11[] = {
	AX_POSE(10, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose12[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose13[] = {
	AX_POSE(12, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose14[] = {
	AX_POSE(13, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose15[] = {
	AX_POSE(14, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose16[] = {
	AX_POSE(9, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose17[] = {
	AX_POSE(10, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose18[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose19[] = {
	AX_POSE(6, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose20[] = {
	AX_POSE(7, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose21[] = {
	AX_POSE(8, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose22[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose23[] = {
	AX_POSE(4, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose24[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose26[] = {
	AX_POSE(15, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose28[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose30[] = {
	AX_POSE(17, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose32[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose34[] = {
	AX_POSE(19, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose36[] = {
	AX_POSE(20, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose38[] = {
	AX_POSE(21, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose40[] = {
	AX_POSE(22, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose42[] = {
	AX_POSE(23, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose44[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose46[] = {
	AX_POSE(21, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose48[] = {
	AX_POSE(22, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose50[] = {
	AX_POSE(19, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose52[] = {
	AX_POSE(20, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose54[] = {
	AX_POSE(17, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose56[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose92[] = {
	AX_POSE(15, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose97[] = {
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose102[] = {
	AX_POSE(19, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose107[] = {
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose112[] = {
	AX_POSE(23, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose117[] = {
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose122[] = {
	AX_POSE(19, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose127[] = {
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose130[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose132[] = {
	AX_POSE(26, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose134[] = {
	AX_POSE(27, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose136[] = {
	AX_POSE(28, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose138[] = {
	AX_POSE(29, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose140[] = {
	AX_POSE(28, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose142[] = {
	AX_POSE(27, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose144[] = {
	AX_POSE(26, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose145[] = {
	AX_POSE(30, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose146[] = {
	AX_POSE(31, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose147[] = {
	AX_POSE(32, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose148[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose149[] = {
	AX_POSE(34, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose150[] = {
	AX_POSE(35, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose151[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose152[] = {
	AX_POSE(35, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose153[] = {
	AX_POSE(34, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose154[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose179[] = {
	AX_POSE(16, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose180[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose183[] = {
	AX_POSE(24, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose186[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose188[] = {
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose190[] = {
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose192[] = {
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose194[] = {
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose197[] = {
	AX_POSE(25, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose200[] = {
	AX_POSE(26, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose203[] = {
	AX_POSE(27, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose206[] = {
	AX_POSE(28, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose209[] = {
	AX_POSE(29, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose212[] = {
	AX_POSE(28, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose215[] = {
	AX_POSE(27, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose218[] = {
	AX_POSE(26, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose221[] = {
	AX_POSE(27, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMareepPose225[] = {
	AX_POSE(27, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const u8 sMareepAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_2_1.lz");
static const u8 sMareepAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_2_2.lz");
static const u8 sMareepAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_2_3.lz");
static const u8 sMareepAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_2_4.lz");
static const u8 sMareepAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_2_5.lz");
static const u8 sMareepAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_2_6.lz");
static const u8 sMareepAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_2_7.lz");
static const u8 sMareepAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_2_8.lz");
static const u8 sMareepAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_3_1.lz");
static const u8 sMareepAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_3_2.lz");
static const u8 sMareepAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_3_3.lz");
static const u8 sMareepAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_3_4.lz");
static const u8 sMareepAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_3_5.lz");
static const u8 sMareepAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_3_6.lz");
static const u8 sMareepAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_3_7.lz");
static const u8 sMareepAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_3_8.lz");
static const u8 sMareepAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_4_1.lz");
static const u8 sMareepAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_4_2.lz");
static const u8 sMareepAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_4_3.lz");
static const u8 sMareepAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_4_4.lz");
static const u8 sMareepAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_4_5.lz");
static const u8 sMareepAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_4_6.lz");
static const u8 sMareepAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_4_7.lz");
static const u8 sMareepAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_4_8.lz");
static const u8 sMareepAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_5_1.lz");
static const u8 sMareepAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_5_2.lz");
static const u8 sMareepAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_5_3.lz");
static const u8 sMareepAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_5_4.lz");
static const u8 sMareepAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_5_5.lz");
static const u8 sMareepAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_5_6.lz");
static const u8 sMareepAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_5_7.lz");
static const u8 sMareepAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_5_8.lz");
static const u8 sMareepAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_8_1.lz");
static const u8 sMareepAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_8_2.lz");
static const u8 sMareepAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_8_3.lz");
static const u8 sMareepAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_8_4.lz");
static const u8 sMareepAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_8_5.lz");
static const u8 sMareepAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_8_6.lz");
static const u8 sMareepAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_8_7.lz");
static const u8 sMareepAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_8_8.lz");
static const u8 sMareepAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_9_1.lz");
static const u8 sMareepAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_9_2.lz");
static const u8 sMareepAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_9_3.lz");
static const u8 sMareepAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_9_4.lz");
static const u8 sMareepAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_9_5.lz");
static const u8 sMareepAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_9_6.lz");
static const u8 sMareepAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_9_7.lz");
static const u8 sMareepAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_9_8.lz");
static const u8 sMareepAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_11_1.lz");
static const u8 sMareepAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_11_2.lz");
static const u8 sMareepAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_11_3.lz");
static const u8 sMareepAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_11_4.lz");
static const u8 sMareepAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_11_5.lz");
static const u8 sMareepAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_11_6.lz");
static const u8 sMareepAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_11_7.lz");
static const u8 sMareepAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_11_8.lz");
static const u8 sMareepAnims_13_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_13_1.lz");
static const u8 sMareepAnims_13_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_13_2.lz");
static const u8 sMareepAnims_13_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_13_3.lz");
static const u8 sMareepAnims_13_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_13_4.lz");
static const u8 sMareepAnims_13_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_13_5.lz");
static const u8 sMareepAnims_13_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_13_6.lz");
static const u8 sMareepAnims_13_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_13_7.lz");
static const u8 sMareepAnims_13_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mareep/sMareepAnims_13_8.lz");

static const u8 sMareepGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_1.4bpp.lz");
static const ax_sprite sMareepSprites1[] = {
	{sMareepGfx1, ARRAY_COUNT(sMareepGfx1)}, 
	{NULL, 0}
};
static const u8 sMareepGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_2.4bpp.lz");
static const ax_sprite sMareepSprites2[] = {
	{sMareepGfx2, ARRAY_COUNT(sMareepGfx2)}, 
	{NULL, 0}
};
static const u8 sMareepGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_3.4bpp.lz");
static const ax_sprite sMareepSprites3[] = {
	{sMareepGfx3, ARRAY_COUNT(sMareepGfx3)}, 
	{NULL, 0}
};
static const u8 sMareepGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_4.4bpp.lz");
static const ax_sprite sMareepSprites4[] = {
	{sMareepGfx4, ARRAY_COUNT(sMareepGfx4)}, 
	{NULL, 0}
};
static const u8 sMareepGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_5.4bpp.lz");
static const ax_sprite sMareepSprites5[] = {
	{sMareepGfx5, ARRAY_COUNT(sMareepGfx5)}, 
	{NULL, 0}
};
static const u8 sMareepGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_6.4bpp.lz");
static const ax_sprite sMareepSprites6[] = {
	{sMareepGfx6, ARRAY_COUNT(sMareepGfx6)}, 
	{NULL, 0}
};
static const u8 sMareepGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_7.4bpp.lz");
static const ax_sprite sMareepSprites7[] = {
	{sMareepGfx7, ARRAY_COUNT(sMareepGfx7)}, 
	{NULL, 0}
};
static const u8 sMareepGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_8.4bpp.lz");
static const ax_sprite sMareepSprites8[] = {
	{sMareepGfx8, ARRAY_COUNT(sMareepGfx8)}, 
	{NULL, 0}
};
static const u8 sMareepGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_9.4bpp.lz");
static const ax_sprite sMareepSprites9[] = {
	{sMareepGfx9, ARRAY_COUNT(sMareepGfx9)}, 
	{NULL, 0}
};
static const u8 sMareepGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_10.4bpp.lz");
static const ax_sprite sMareepSprites10[] = {
	{sMareepGfx10, ARRAY_COUNT(sMareepGfx10)}, 
	{NULL, 0}
};
static const u8 sMareepGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_11.4bpp.lz");
static const ax_sprite sMareepSprites11[] = {
	{sMareepGfx11, ARRAY_COUNT(sMareepGfx11)}, 
	{NULL, 0}
};
static const u8 sMareepGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_12.4bpp.lz");
static const ax_sprite sMareepSprites12[] = {
	{sMareepGfx12, ARRAY_COUNT(sMareepGfx12)}, 
	{NULL, 0}
};
static const u8 sMareepGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_13.4bpp.lz");
static const ax_sprite sMareepSprites13[] = {
	{sMareepGfx13, ARRAY_COUNT(sMareepGfx13)}, 
	{NULL, 0}
};
static const u8 sMareepGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_14.4bpp.lz");
static const ax_sprite sMareepSprites14[] = {
	{sMareepGfx14, ARRAY_COUNT(sMareepGfx14)}, 
	{NULL, 0}
};
static const u8 sMareepGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_15.4bpp.lz");
static const ax_sprite sMareepSprites15[] = {
	{sMareepGfx15, ARRAY_COUNT(sMareepGfx15)}, 
	{NULL, 0}
};
static const u8 sMareepGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_16.4bpp.lz");
static const u8 sMareepGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_16_1.4bpp.lz");
static const u8 sMareepGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_16_2.4bpp.lz");
static const ax_sprite sMareepSprites16[] = {
	{sMareepGfx16, ARRAY_COUNT(sMareepGfx16)}, 
	{NULL, 32}, 
	{sMareepGfx16_1, ARRAY_COUNT(sMareepGfx16_1)}, 
	{NULL, 32}, 
	{sMareepGfx16_2, ARRAY_COUNT(sMareepGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMareepGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_17.4bpp.lz");
static const u8 sMareepGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_17_1.4bpp.lz");
static const u8 sMareepGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_17_2.4bpp.lz");
static const u8 sMareepGfx17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_17_3.4bpp.lz");
static const ax_sprite sMareepSprites17[] = {
	{NULL, 32}, 
	{sMareepGfx17, ARRAY_COUNT(sMareepGfx17)}, 
	{NULL, 64}, 
	{sMareepGfx17_1, ARRAY_COUNT(sMareepGfx17_1)}, 
	{NULL, 32}, 
	{sMareepGfx17_2, ARRAY_COUNT(sMareepGfx17_2)}, 
	{NULL, 32}, 
	{sMareepGfx17_3, ARRAY_COUNT(sMareepGfx17_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMareepGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_18.4bpp.lz");
static const u8 sMareepGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_18_1.4bpp.lz");
static const u8 sMareepGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_18_2.4bpp.lz");
static const ax_sprite sMareepSprites18[] = {
	{sMareepGfx18, ARRAY_COUNT(sMareepGfx18)}, 
	{NULL, 32}, 
	{sMareepGfx18_1, ARRAY_COUNT(sMareepGfx18_1)}, 
	{NULL, 64}, 
	{sMareepGfx18_2, ARRAY_COUNT(sMareepGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMareepGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_19.4bpp.lz");
static const u8 sMareepGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_19_1.4bpp.lz");
static const u8 sMareepGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_19_2.4bpp.lz");
static const u8 sMareepGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_19_3.4bpp.lz");
static const ax_sprite sMareepSprites19[] = {
	{NULL, 32}, 
	{sMareepGfx19, ARRAY_COUNT(sMareepGfx19)}, 
	{NULL, 32}, 
	{sMareepGfx19_1, ARRAY_COUNT(sMareepGfx19_1)}, 
	{NULL, 32}, 
	{sMareepGfx19_2, ARRAY_COUNT(sMareepGfx19_2)}, 
	{NULL, 64}, 
	{sMareepGfx19_3, ARRAY_COUNT(sMareepGfx19_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMareepGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_20.4bpp.lz");
static const u8 sMareepGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_20_1.4bpp.lz");
static const ax_sprite sMareepSprites20[] = {
	{sMareepGfx20, ARRAY_COUNT(sMareepGfx20)}, 
	{NULL, 32}, 
	{sMareepGfx20_1, ARRAY_COUNT(sMareepGfx20_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMareepGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_21.4bpp.lz");
static const u8 sMareepGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_21_1.4bpp.lz");
static const ax_sprite sMareepSprites21[] = {
	{sMareepGfx21, ARRAY_COUNT(sMareepGfx21)}, 
	{NULL, 32}, 
	{sMareepGfx21_1, ARRAY_COUNT(sMareepGfx21_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMareepGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_22.4bpp.lz");
static const u8 sMareepGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_22_1.4bpp.lz");
static const u8 sMareepGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_22_2.4bpp.lz");
static const ax_sprite sMareepSprites22[] = {
	{sMareepGfx22, ARRAY_COUNT(sMareepGfx22)}, 
	{NULL, 32}, 
	{sMareepGfx22_1, ARRAY_COUNT(sMareepGfx22_1)}, 
	{NULL, 32}, 
	{sMareepGfx22_2, ARRAY_COUNT(sMareepGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMareepGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_23.4bpp.lz");
static const u8 sMareepGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_23_1.4bpp.lz");
static const u8 sMareepGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_23_2.4bpp.lz");
static const ax_sprite sMareepSprites23[] = {
	{sMareepGfx23, ARRAY_COUNT(sMareepGfx23)}, 
	{NULL, 32}, 
	{sMareepGfx23_1, ARRAY_COUNT(sMareepGfx23_1)}, 
	{NULL, 64}, 
	{sMareepGfx23_2, ARRAY_COUNT(sMareepGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMareepGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_24.4bpp.lz");
static const u8 sMareepGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_24_1.4bpp.lz");
static const u8 sMareepGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_24_2.4bpp.lz");
static const ax_sprite sMareepSprites24[] = {
	{NULL, 32}, 
	{sMareepGfx24, ARRAY_COUNT(sMareepGfx24)}, 
	{NULL, 32}, 
	{sMareepGfx24_1, ARRAY_COUNT(sMareepGfx24_1)}, 
	{NULL, 32}, 
	{sMareepGfx24_2, ARRAY_COUNT(sMareepGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMareepGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_25.4bpp.lz");
static const u8 sMareepGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_25_1.4bpp.lz");
static const u8 sMareepGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_25_2.4bpp.lz");
static const u8 sMareepGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_25_3.4bpp.lz");
static const ax_sprite sMareepSprites25[] = {
	{NULL, 32}, 
	{sMareepGfx25, ARRAY_COUNT(sMareepGfx25)}, 
	{NULL, 32}, 
	{sMareepGfx25_1, ARRAY_COUNT(sMareepGfx25_1)}, 
	{NULL, 32}, 
	{sMareepGfx25_2, ARRAY_COUNT(sMareepGfx25_2)}, 
	{NULL, 64}, 
	{sMareepGfx25_3, ARRAY_COUNT(sMareepGfx25_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMareepGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_26.4bpp.lz");
static const u8 sMareepGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_26_1.4bpp.lz");
static const u8 sMareepGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_26_2.4bpp.lz");
static const u8 sMareepGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_26_3.4bpp.lz");
static const ax_sprite sMareepSprites26[] = {
	{NULL, 32}, 
	{sMareepGfx26, ARRAY_COUNT(sMareepGfx26)}, 
	{NULL, 64}, 
	{sMareepGfx26_1, ARRAY_COUNT(sMareepGfx26_1)}, 
	{NULL, 32}, 
	{sMareepGfx26_2, ARRAY_COUNT(sMareepGfx26_2)}, 
	{NULL, 32}, 
	{sMareepGfx26_3, ARRAY_COUNT(sMareepGfx26_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMareepGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_27.4bpp.lz");
static const u8 sMareepGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_27_1.4bpp.lz");
static const u8 sMareepGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_27_2.4bpp.lz");
static const u8 sMareepGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_27_3.4bpp.lz");
static const ax_sprite sMareepSprites27[] = {
	{NULL, 32}, 
	{sMareepGfx27, ARRAY_COUNT(sMareepGfx27)}, 
	{NULL, 32}, 
	{sMareepGfx27_1, ARRAY_COUNT(sMareepGfx27_1)}, 
	{NULL, 32}, 
	{sMareepGfx27_2, ARRAY_COUNT(sMareepGfx27_2)}, 
	{NULL, 64}, 
	{sMareepGfx27_3, ARRAY_COUNT(sMareepGfx27_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMareepGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_28.4bpp.lz");
static const ax_sprite sMareepSprites28[] = {
	{sMareepGfx28, ARRAY_COUNT(sMareepGfx28)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMareepGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_29.4bpp.lz");
static const u8 sMareepGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_29_1.4bpp.lz");
static const u8 sMareepGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_29_2.4bpp.lz");
static const ax_sprite sMareepSprites29[] = {
	{sMareepGfx29, ARRAY_COUNT(sMareepGfx29)}, 
	{NULL, 32}, 
	{sMareepGfx29_1, ARRAY_COUNT(sMareepGfx29_1)}, 
	{NULL, 32}, 
	{sMareepGfx29_2, ARRAY_COUNT(sMareepGfx29_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMareepGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_30.4bpp.lz");
static const u8 sMareepGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_30_1.4bpp.lz");
static const u8 sMareepGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_30_2.4bpp.lz");
static const ax_sprite sMareepSprites30[] = {
	{NULL, 32}, 
	{sMareepGfx30, ARRAY_COUNT(sMareepGfx30)}, 
	{NULL, 32}, 
	{sMareepGfx30_1, ARRAY_COUNT(sMareepGfx30_1)}, 
	{NULL, 32}, 
	{sMareepGfx30_2, ARRAY_COUNT(sMareepGfx30_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMareepGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_31.4bpp.lz");
static const ax_sprite sMareepSprites31[] = {
	{sMareepGfx31, ARRAY_COUNT(sMareepGfx31)}, 
	{NULL, 0}
};
static const u8 sMareepGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_32.4bpp.lz");
static const ax_sprite sMareepSprites32[] = {
	{sMareepGfx32, ARRAY_COUNT(sMareepGfx32)}, 
	{NULL, 0}
};
static const u8 sMareepGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_33.4bpp.lz");
static const ax_sprite sMareepSprites33[] = {
	{sMareepGfx33, ARRAY_COUNT(sMareepGfx33)}, 
	{NULL, 0}
};
static const u8 sMareepGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_34.4bpp.lz");
static const ax_sprite sMareepSprites34[] = {
	{sMareepGfx34, ARRAY_COUNT(sMareepGfx34)}, 
	{NULL, 0}
};
static const u8 sMareepGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_35.4bpp.lz");
static const ax_sprite sMareepSprites35[] = {
	{sMareepGfx35, ARRAY_COUNT(sMareepGfx35)}, 
	{NULL, 0}
};
static const u8 sMareepGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_36.4bpp.lz");
static const ax_sprite sMareepSprites36[] = {
	{sMareepGfx36, ARRAY_COUNT(sMareepGfx36)}, 
	{NULL, 0}
};
static const u8 sMareepGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mareep/sprite_37.4bpp.lz");
static const ax_sprite sMareepSprites37[] = {
	{sMareepGfx37, ARRAY_COUNT(sMareepGfx37)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesMareep[] = {
	sMareepPose1,
	sMareepPose2,
	sMareepPose3,
	sMareepPose4,
	sMareepPose5,
	sMareepPose6,
	sMareepPose7,
	sMareepPose8,
	sMareepPose9,
	sMareepPose10,
	sMareepPose11,
	sMareepPose12,
	sMareepPose13,
	sMareepPose14,
	sMareepPose15,
	sMareepPose16,
	sMareepPose17,
	sMareepPose18,
	sMareepPose19,
	sMareepPose20,
	sMareepPose21,
	sMareepPose22,
	sMareepPose23,
	sMareepPose24,
	sMareepPose1,
	sMareepPose26,
	sMareepPose3,
	sMareepPose28,
	sMareepPose4,
	sMareepPose30,
	sMareepPose6,
	sMareepPose32,
	sMareepPose7,
	sMareepPose34,
	sMareepPose9,
	sMareepPose36,
	sMareepPose10,
	sMareepPose38,
	sMareepPose12,
	sMareepPose40,
	sMareepPose13,
	sMareepPose42,
	sMareepPose15,
	sMareepPose44,
	sMareepPose16,
	sMareepPose46,
	sMareepPose18,
	sMareepPose48,
	sMareepPose19,
	sMareepPose50,
	sMareepPose21,
	sMareepPose52,
	sMareepPose22,
	sMareepPose54,
	sMareepPose24,
	sMareepPose56,
	sMareepPose1,
	sMareepPose26,
	sMareepPose3,
	sMareepPose28,
	sMareepPose4,
	sMareepPose30,
	sMareepPose6,
	sMareepPose32,
	sMareepPose7,
	sMareepPose34,
	sMareepPose9,
	sMareepPose36,
	sMareepPose10,
	sMareepPose38,
	sMareepPose12,
	sMareepPose40,
	sMareepPose13,
	sMareepPose42,
	sMareepPose15,
	sMareepPose44,
	sMareepPose16,
	sMareepPose46,
	sMareepPose18,
	sMareepPose48,
	sMareepPose19,
	sMareepPose50,
	sMareepPose21,
	sMareepPose52,
	sMareepPose22,
	sMareepPose54,
	sMareepPose24,
	sMareepPose56,
	sMareepPose1,
	sMareepPose2,
	sMareepPose3,
	sMareepPose92,
	sMareepPose28,
	sMareepPose4,
	sMareepPose5,
	sMareepPose6,
	sMareepPose97,
	sMareepPose32,
	sMareepPose7,
	sMareepPose8,
	sMareepPose9,
	sMareepPose102,
	sMareepPose36,
	sMareepPose10,
	sMareepPose11,
	sMareepPose12,
	sMareepPose107,
	sMareepPose40,
	sMareepPose13,
	sMareepPose14,
	sMareepPose15,
	sMareepPose112,
	sMareepPose44,
	sMareepPose16,
	sMareepPose17,
	sMareepPose18,
	sMareepPose117,
	sMareepPose48,
	sMareepPose19,
	sMareepPose20,
	sMareepPose21,
	sMareepPose122,
	sMareepPose52,
	sMareepPose22,
	sMareepPose23,
	sMareepPose24,
	sMareepPose127,
	sMareepPose56,
	sMareepPose92,
	sMareepPose130,
	sMareepPose97,
	sMareepPose132,
	sMareepPose102,
	sMareepPose134,
	sMareepPose107,
	sMareepPose136,
	sMareepPose112,
	sMareepPose138,
	sMareepPose117,
	sMareepPose140,
	sMareepPose122,
	sMareepPose142,
	sMareepPose127,
	sMareepPose144,
	sMareepPose145,
	sMareepPose146,
	sMareepPose147,
	sMareepPose148,
	sMareepPose149,
	sMareepPose150,
	sMareepPose151,
	sMareepPose152,
	sMareepPose153,
	sMareepPose154,
	sMareepPose1,
	sMareepPose2,
	sMareepPose3,
	sMareepPose4,
	sMareepPose5,
	sMareepPose6,
	sMareepPose7,
	sMareepPose8,
	sMareepPose9,
	sMareepPose10,
	sMareepPose11,
	sMareepPose12,
	sMareepPose13,
	sMareepPose14,
	sMareepPose15,
	sMareepPose16,
	sMareepPose17,
	sMareepPose18,
	sMareepPose19,
	sMareepPose20,
	sMareepPose21,
	sMareepPose22,
	sMareepPose23,
	sMareepPose24,
	sMareepPose179,
	sMareepPose180,
	sMareepPose52,
	sMareepPose48,
	sMareepPose183,
	sMareepPose40,
	sMareepPose36,
	sMareepPose186,
	sMareepPose92,
	sMareepPose188,
	sMareepPose34,
	sMareepPose190,
	sMareepPose112,
	sMareepPose192,
	sMareepPose50,
	sMareepPose194,
	sMareepPose1,
	sMareepPose92,
	sMareepPose197,
	sMareepPose4,
	sMareepPose188,
	sMareepPose200,
	sMareepPose7,
	sMareepPose34,
	sMareepPose203,
	sMareepPose10,
	sMareepPose190,
	sMareepPose206,
	sMareepPose13,
	sMareepPose112,
	sMareepPose209,
	sMareepPose16,
	sMareepPose117,
	sMareepPose212,
	sMareepPose19,
	sMareepPose50,
	sMareepPose215,
	sMareepPose22,
	sMareepPose127,
	sMareepPose218,
	sMareepPose197,
	sMareepPose218,
	sMareepPose221,
	sMareepPose212,
	sMareepPose138,
	sMareepPose206,
	sMareepPose225,
	sMareepPose200,
	sMareepPose200,
	sMareepPose203,
	sMareepPose200,
	sMareepPose206,
	sMareepPose203,
	sMareepPose200,
	sMareepPose209,
	sMareepPose206,
	sMareepPose203,
	sMareepPose200,
	sMareepPose212,
	sMareepPose209,
	sMareepPose206,
	sMareepPose203,
	sMareepPose200,
	sMareepPose215,
	sMareepPose212,
	sMareepPose209,
	sMareepPose206,
	sMareepPose203,
	sMareepPose200,
	sMareepPose218,
	sMareepPose215,
	sMareepPose212,
	sMareepPose209,
	sMareepPose206,
	sMareepPose203,
	sMareepPose200,
	sMareepPose1,
	sMareepPose22,
	sMareepPose19,
	sMareepPose16,
	sMareepPose13,
	sMareepPose10,
	sMareepPose7,
	sMareepPose4,
};

static const struct PositionSets sAxPositionsMareep[] = {
	[0] = { .set = { {-1, 0}, {-5, 1}, {3, 1}, {-1, -7} } },
	[1] = { .set = { {-2, 1}, {-5, 1}, {3, 3}, {0, -6} } },
	[2] = { .set = { {0, 1}, {-5, 3}, {3, 1}, {-1, -6} } },
	[3] = { .set = { {7, -1}, {6, 0}, {0, 2}, {-2, -7} } },
	[4] = { .set = { {8, 0}, {3, 0}, {2, 4}, {-1, -7} } },
	[5] = { .set = { {7, 1}, {8, 2}, {-1, 2}, {-1, -7} } },
	[6] = { .set = { {10, -3}, {4, -2}, {3, 0}, {-1, -7} } },
	[7] = { .set = { {10, -2}, {1, -2}, {5, 0}, {-2, -7} } },
	[8] = { .set = { {9, -2}, {6, 0}, {1, 0}, {-2, -7} } },
	[9] = { .set = { {5, -9}, {-2, -5}, {4, -3}, {-3, -7} } },
	[10] = { .set = { {4, -8}, {-3, -3}, {6, -4}, {-2, -6} } },
	[11] = { .set = { {6, -8}, {1, -5}, {3, -1}, {-2, -7} } },
	[12] = { .set = { {-1, -14}, {3, -6}, {-5, -6}, {-1, -9} } },
	[13] = { .set = { {0, -13}, {3, -4}, {-3, -6}, {-1, -7} } },
	[14] = { .set = { {-2, -13}, {1, -6}, {-5, -4}, {-1, -7} } },
	[15] = { .set = { {-6, -9}, {1, -5}, {-5, -3}, {2, -7} } },
	[16] = { .set = { {-5, -8}, {2, -3}, {-7, -4}, {1, -6} } },
	[17] = { .set = { {-7, -8}, {-2, -5}, {-4, -1}, {1, -7} } },
	[18] = { .set = { {-11, -3}, {-5, -2}, {-4, 0}, {0, -7} } },
	[19] = { .set = { {-11, -2}, {-2, -2}, {-6, 0}, {1, -7} } },
	[20] = { .set = { {-10, -2}, {-7, 0}, {-2, 0}, {1, -7} } },
	[21] = { .set = { {-8, -1}, {-7, 0}, {-1, 2}, {1, -7} } },
	[22] = { .set = { {-9, 0}, {-4, 0}, {-3, 4}, {0, -7} } },
	[23] = { .set = { {-8, 1}, {-9, 2}, {0, 2}, {0, -7} } },
	[24] = { .set = { {-1, 0}, {-5, 1}, {3, 1}, {-1, -7} } },
	[25] = { .set = { {-1, -7}, {-4, -3}, {2, -3}, {-1, -12} } },
	[26] = { .set = { {0, 1}, {-5, 3}, {3, 1}, {-1, -6} } },
	[27] = { .set = { {-1, 2}, {-5, 3}, {3, 3}, {-1, -6} } },
	[28] = { .set = { {7, -1}, {6, 0}, {0, 2}, {-2, -7} } },
	[29] = { .set = { {7, -5}, {6, -4}, {0, -2}, {-2, -9} } },
	[30] = { .set = { {7, 1}, {8, 2}, {-1, 2}, {-1, -7} } },
	[31] = { .set = { {10, 0}, {7, 2}, {1, 4}, {0, -6} } },
	[32] = { .set = { {10, -3}, {4, -2}, {3, 0}, {-1, -7} } },
	[33] = { .set = { {9, -8}, {3, -5}, {3, -3}, {-2, -9} } },
	[34] = { .set = { {9, -2}, {6, 0}, {1, 0}, {-2, -7} } },
	[35] = { .set = { {15, -5}, {6, -2}, {5, 0}, {0, -8} } },
	[36] = { .set = { {5, -9}, {-2, -5}, {4, -3}, {-3, -7} } },
	[37] = { .set = { {4, -11}, {-2, -7}, {4, -5}, {-3, -7} } },
	[38] = { .set = { {6, -8}, {1, -5}, {3, -1}, {-2, -7} } },
	[39] = { .set = { {9, -16}, {1, -6}, {6, -4}, {-1, -8} } },
	[40] = { .set = { {-1, -14}, {3, -6}, {-5, -6}, {-1, -9} } },
	[41] = { .set = { {-1, -14}, {3, -7}, {-5, -7}, {-1, -8} } },
	[42] = { .set = { {-2, -13}, {1, -6}, {-5, -4}, {-1, -7} } },
	[43] = { .set = { {-1, -21}, {3, -8}, {-5, -8}, {-1, -10} } },
	[44] = { .set = { {-6, -9}, {1, -5}, {-5, -3}, {2, -7} } },
	[45] = { .set = { {-5, -11}, {1, -7}, {-5, -5}, {2, -7} } },
	[46] = { .set = { {-7, -8}, {-2, -5}, {-4, -1}, {1, -7} } },
	[47] = { .set = { {-10, -16}, {-2, -6}, {-7, -4}, {0, -8} } },
	[48] = { .set = { {-11, -3}, {-5, -2}, {-4, 0}, {0, -7} } },
	[49] = { .set = { {-10, -8}, {-4, -5}, {-4, -3}, {1, -9} } },
	[50] = { .set = { {-10, -2}, {-7, 0}, {-2, 0}, {1, -7} } },
	[51] = { .set = { {-16, -5}, {-7, -2}, {-6, 0}, {-1, -8} } },
	[52] = { .set = { {-8, -1}, {-7, 0}, {-1, 2}, {1, -7} } },
	[53] = { .set = { {-9, -5}, {-8, -4}, {-2, -2}, {0, -9} } },
	[54] = { .set = { {-8, 1}, {-9, 2}, {0, 2}, {0, -7} } },
	[55] = { .set = { {-11, 0}, {-8, 2}, {-2, 4}, {-1, -6} } },
	[56] = { .set = { {-1, 0}, {-5, 1}, {3, 1}, {-1, -7} } },
	[57] = { .set = { {-1, -7}, {-4, -3}, {2, -3}, {-1, -12} } },
	[58] = { .set = { {0, 1}, {-5, 3}, {3, 1}, {-1, -6} } },
	[59] = { .set = { {-1, 2}, {-5, 3}, {3, 3}, {-1, -6} } },
	[60] = { .set = { {7, -1}, {6, 0}, {0, 2}, {-2, -7} } },
	[61] = { .set = { {7, -5}, {6, -4}, {0, -2}, {-2, -9} } },
	[62] = { .set = { {7, 1}, {8, 2}, {-1, 2}, {-1, -7} } },
	[63] = { .set = { {10, 0}, {7, 2}, {1, 4}, {0, -6} } },
	[64] = { .set = { {10, -3}, {4, -2}, {3, 0}, {-1, -7} } },
	[65] = { .set = { {9, -8}, {3, -5}, {3, -3}, {-2, -9} } },
	[66] = { .set = { {9, -2}, {6, 0}, {1, 0}, {-2, -7} } },
	[67] = { .set = { {15, -5}, {6, -2}, {5, 0}, {0, -8} } },
	[68] = { .set = { {5, -9}, {-2, -5}, {4, -3}, {-3, -7} } },
	[69] = { .set = { {4, -11}, {-2, -7}, {4, -5}, {-3, -7} } },
	[70] = { .set = { {6, -8}, {1, -5}, {3, -1}, {-2, -7} } },
	[71] = { .set = { {9, -16}, {1, -6}, {6, -4}, {-1, -8} } },
	[72] = { .set = { {-1, -14}, {3, -6}, {-5, -6}, {-1, -9} } },
	[73] = { .set = { {-1, -14}, {3, -7}, {-5, -7}, {-1, -8} } },
	[74] = { .set = { {-2, -13}, {1, -6}, {-5, -4}, {-1, -7} } },
	[75] = { .set = { {-1, -21}, {3, -8}, {-5, -8}, {-1, -10} } },
	[76] = { .set = { {-6, -9}, {1, -5}, {-5, -3}, {2, -7} } },
	[77] = { .set = { {-5, -11}, {1, -7}, {-5, -5}, {2, -7} } },
	[78] = { .set = { {-7, -8}, {-2, -5}, {-4, -1}, {1, -7} } },
	[79] = { .set = { {-10, -16}, {-2, -6}, {-7, -4}, {0, -8} } },
	[80] = { .set = { {-11, -3}, {-5, -2}, {-4, 0}, {0, -7} } },
	[81] = { .set = { {-10, -8}, {-4, -5}, {-4, -3}, {1, -9} } },
	[82] = { .set = { {-10, -2}, {-7, 0}, {-2, 0}, {1, -7} } },
	[83] = { .set = { {-16, -5}, {-7, -2}, {-6, 0}, {-1, -8} } },
	[84] = { .set = { {-8, -1}, {-7, 0}, {-1, 2}, {1, -7} } },
	[85] = { .set = { {-9, -5}, {-8, -4}, {-2, -2}, {0, -9} } },
	[86] = { .set = { {-8, 1}, {-9, 2}, {0, 2}, {0, -7} } },
	[87] = { .set = { {-11, 0}, {-8, 2}, {-2, 4}, {-1, -6} } },
	[88] = { .set = { {-1, 0}, {-5, 1}, {3, 1}, {-1, -7} } },
	[89] = { .set = { {-2, 1}, {-5, 1}, {3, 3}, {0, -6} } },
	[90] = { .set = { {0, 1}, {-5, 3}, {3, 1}, {-1, -6} } },
	[91] = { .set = { {-1, -6}, {-4, -2}, {2, -2}, {-1, -11} } },
	[92] = { .set = { {-1, 2}, {-5, 3}, {3, 3}, {-1, -6} } },
	[93] = { .set = { {7, -1}, {6, 0}, {0, 2}, {-2, -7} } },
	[94] = { .set = { {8, 0}, {3, 0}, {2, 4}, {-1, -7} } },
	[95] = { .set = { {7, 1}, {8, 2}, {-1, 2}, {-1, -7} } },
	[96] = { .set = { {6, -6}, {5, -5}, {-1, -3}, {-3, -10} } },
	[97] = { .set = { {10, 0}, {7, 2}, {1, 4}, {0, -6} } },
	[98] = { .set = { {10, -3}, {4, -2}, {3, 0}, {-1, -7} } },
	[99] = { .set = { {10, -2}, {1, -2}, {5, 0}, {-2, -7} } },
	[100] = { .set = { {9, -2}, {6, 0}, {1, 0}, {-2, -7} } },
	[101] = { .set = { {7, -8}, {1, -5}, {1, -3}, {-4, -9} } },
	[102] = { .set = { {15, -5}, {6, -2}, {5, 0}, {0, -8} } },
	[103] = { .set = { {5, -9}, {-2, -5}, {4, -3}, {-3, -7} } },
	[104] = { .set = { {4, -8}, {-3, -3}, {6, -4}, {-2, -6} } },
	[105] = { .set = { {6, -8}, {1, -5}, {3, -1}, {-2, -7} } },
	[106] = { .set = { {3, -12}, {-3, -8}, {3, -6}, {-4, -8} } },
	[107] = { .set = { {9, -16}, {1, -6}, {6, -4}, {-1, -8} } },
	[108] = { .set = { {-1, -14}, {3, -6}, {-5, -6}, {-1, -9} } },
	[109] = { .set = { {0, -13}, {3, -4}, {-3, -6}, {-1, -7} } },
	[110] = { .set = { {-2, -13}, {1, -6}, {-5, -4}, {-1, -7} } },
	[111] = { .set = { {-1, -15}, {3, -8}, {-5, -8}, {-1, -9} } },
	[112] = { .set = { {-1, -21}, {3, -8}, {-5, -8}, {-1, -10} } },
	[113] = { .set = { {-6, -9}, {1, -5}, {-5, -3}, {2, -7} } },
	[114] = { .set = { {-5, -8}, {2, -3}, {-7, -4}, {1, -6} } },
	[115] = { .set = { {-7, -8}, {-2, -5}, {-4, -1}, {1, -7} } },
	[116] = { .set = { {-4, -12}, {2, -8}, {-4, -6}, {3, -8} } },
	[117] = { .set = { {-10, -16}, {-2, -6}, {-7, -4}, {0, -8} } },
	[118] = { .set = { {-11, -3}, {-5, -2}, {-4, 0}, {0, -7} } },
	[119] = { .set = { {-11, -2}, {-2, -2}, {-6, 0}, {1, -7} } },
	[120] = { .set = { {-10, -2}, {-7, 0}, {-2, 0}, {1, -7} } },
	[121] = { .set = { {-8, -8}, {-2, -5}, {-2, -3}, {3, -9} } },
	[122] = { .set = { {-16, -5}, {-7, -2}, {-6, 0}, {-1, -8} } },
	[123] = { .set = { {-8, -1}, {-7, 0}, {-1, 2}, {1, -7} } },
	[124] = { .set = { {-9, 0}, {-4, 0}, {-3, 4}, {0, -7} } },
	[125] = { .set = { {-8, 1}, {-9, 2}, {0, 2}, {0, -7} } },
	[126] = { .set = { {-7, -6}, {-6, -5}, {0, -3}, {2, -10} } },
	[127] = { .set = { {-11, 0}, {-8, 2}, {-2, 4}, {-1, -6} } },
	[128] = { .set = { {-1, -6}, {-4, -2}, {2, -2}, {-1, -11} } },
	[129] = { .set = { {-1, 2}, {-5, 1}, {3, 1}, {-1, -8} } },
	[130] = { .set = { {6, -6}, {5, -5}, {-1, -3}, {-3, -10} } },
	[131] = { .set = { {5, 1}, {4, 0}, {0, 2}, {-2, -8} } },
	[132] = { .set = { {7, -8}, {1, -5}, {1, -3}, {-4, -9} } },
	[133] = { .set = { {8, -1}, {4, -3}, {3, 0}, {-4, -8} } },
	[134] = { .set = { {3, -12}, {-3, -8}, {3, -6}, {-4, -8} } },
	[135] = { .set = { {7, -7}, {-1, -5}, {4, -3}, {-3, -6} } },
	[136] = { .set = { {-1, -15}, {3, -8}, {-5, -8}, {-1, -9} } },
	[137] = { .set = { {-1, -10}, {3, -4}, {-5, -4}, {-1, -7} } },
	[138] = { .set = { {-4, -12}, {2, -8}, {-4, -6}, {3, -8} } },
	[139] = { .set = { {-8, -7}, {0, -5}, {-5, -3}, {2, -6} } },
	[140] = { .set = { {-8, -8}, {-2, -5}, {-2, -3}, {3, -9} } },
	[141] = { .set = { {-9, -1}, {-5, -3}, {-4, 0}, {3, -8} } },
	[142] = { .set = { {-7, -6}, {-6, -5}, {0, -3}, {2, -10} } },
	[143] = { .set = { {-6, 1}, {-5, 0}, {-1, 2}, {1, -8} } },
	[144] = { .set = { {-1, 2}, {-5, 1}, {3, 1}, {-1, -6} } },
	[145] = { .set = { {-1, 3}, {-5, 1}, {2, 1}, {-1, -5} } },
	[146] = { .set = { {0, 1}, {-8, 0}, {8, 0}, {0, -5} } },
	[147] = { .set = { {9, 2}, {9, 0}, {-1, 2}, {0, -5} } },
	[148] = { .set = { {12, 0}, {8, -3}, {6, 2}, {0, -3} } },
	[149] = { .set = { {6, -5}, {0, -8}, {10, -3}, {0, -4} } },
	[150] = { .set = { {0, -10}, {7, -5}, {-7, -5}, {0, -5} } },
	[151] = { .set = { {-6, -5}, {0, -8}, {-10, -3}, {0, -4} } },
	[152] = { .set = { {-12, 0}, {-8, -3}, {-6, 2}, {0, -3} } },
	[153] = { .set = { {-9, 2}, {-9, 0}, {1, 2}, {0, -5} } },
	[154] = { .set = { {-1, 0}, {-5, 1}, {3, 1}, {-1, -7} } },
	[155] = { .set = { {-2, 1}, {-5, 1}, {3, 3}, {0, -6} } },
	[156] = { .set = { {0, 1}, {-5, 3}, {3, 1}, {-1, -6} } },
	[157] = { .set = { {7, -1}, {6, 0}, {0, 2}, {-2, -7} } },
	[158] = { .set = { {8, 0}, {3, 0}, {2, 4}, {-1, -7} } },
	[159] = { .set = { {7, 1}, {8, 2}, {-1, 2}, {-1, -7} } },
	[160] = { .set = { {10, -3}, {4, -2}, {3, 0}, {-1, -7} } },
	[161] = { .set = { {10, -2}, {1, -2}, {5, 0}, {-2, -7} } },
	[162] = { .set = { {9, -2}, {6, 0}, {1, 0}, {-2, -7} } },
	[163] = { .set = { {5, -9}, {-2, -5}, {4, -3}, {-3, -7} } },
	[164] = { .set = { {4, -8}, {-3, -3}, {6, -4}, {-2, -6} } },
	[165] = { .set = { {6, -8}, {1, -5}, {3, -1}, {-2, -7} } },
	[166] = { .set = { {-1, -14}, {3, -6}, {-5, -6}, {-1, -9} } },
	[167] = { .set = { {0, -13}, {3, -4}, {-3, -6}, {-1, -7} } },
	[168] = { .set = { {-2, -13}, {1, -6}, {-5, -4}, {-1, -7} } },
	[169] = { .set = { {-6, -9}, {1, -5}, {-5, -3}, {2, -7} } },
	[170] = { .set = { {-5, -8}, {2, -3}, {-7, -4}, {1, -6} } },
	[171] = { .set = { {-7, -8}, {-2, -5}, {-4, -1}, {1, -7} } },
	[172] = { .set = { {-11, -3}, {-5, -2}, {-4, 0}, {0, -7} } },
	[173] = { .set = { {-11, -2}, {-2, -2}, {-6, 0}, {1, -7} } },
	[174] = { .set = { {-10, -2}, {-7, 0}, {-2, 0}, {1, -7} } },
	[175] = { .set = { {-8, -1}, {-7, 0}, {-1, 2}, {1, -7} } },
	[176] = { .set = { {-9, 0}, {-4, 0}, {-3, 4}, {0, -7} } },
	[177] = { .set = { {-8, 1}, {-9, 2}, {0, 2}, {0, -7} } },
	[178] = { .set = { {-1, 1}, {-5, 2}, {3, 2}, {-1, -7} } },
	[179] = { .set = { {-11, -1}, {-8, 1}, {-2, 3}, {-1, -7} } },
	[180] = { .set = { {-16, -5}, {-7, -2}, {-6, 0}, {-1, -8} } },
	[181] = { .set = { {-10, -16}, {-2, -6}, {-7, -4}, {0, -8} } },
	[182] = { .set = { {-1, -20}, {3, -7}, {-5, -7}, {-1, -9} } },
	[183] = { .set = { {9, -16}, {1, -6}, {6, -4}, {-1, -8} } },
	[184] = { .set = { {15, -5}, {6, -2}, {5, 0}, {0, -8} } },
	[185] = { .set = { {10, -1}, {7, 1}, {1, 3}, {0, -7} } },
	[186] = { .set = { {-1, -6}, {-4, -2}, {2, -2}, {-1, -11} } },
	[187] = { .set = { {7, -6}, {6, -5}, {0, -3}, {-2, -10} } },
	[188] = { .set = { {9, -8}, {3, -5}, {3, -3}, {-2, -9} } },
	[189] = { .set = { {4, -12}, {-2, -8}, {4, -6}, {-3, -8} } },
	[190] = { .set = { {-1, -15}, {3, -8}, {-5, -8}, {-1, -9} } },
	[191] = { .set = { {-5, -12}, {1, -8}, {-5, -6}, {2, -8} } },
	[192] = { .set = { {-10, -8}, {-4, -5}, {-4, -3}, {1, -9} } },
	[193] = { .set = { {-8, -6}, {-7, -5}, {-1, -3}, {1, -10} } },
	[194] = { .set = { {-1, 0}, {-5, 1}, {3, 1}, {-1, -7} } },
	[195] = { .set = { {-1, -6}, {-4, -2}, {2, -2}, {-1, -11} } },
	[196] = { .set = { {-1, 4}, {-5, 3}, {3, 3}, {-1, -6} } },
	[197] = { .set = { {7, -1}, {6, 0}, {0, 2}, {-2, -7} } },
	[198] = { .set = { {7, -6}, {6, -5}, {0, -3}, {-2, -10} } },
	[199] = { .set = { {6, 3}, {5, 2}, {1, 4}, {-1, -6} } },
	[200] = { .set = { {10, -3}, {4, -2}, {3, 0}, {-1, -7} } },
	[201] = { .set = { {9, -8}, {3, -5}, {3, -3}, {-2, -9} } },
	[202] = { .set = { {10, -1}, {6, -3}, {5, 0}, {-2, -8} } },
	[203] = { .set = { {5, -9}, {-2, -5}, {4, -3}, {-3, -7} } },
	[204] = { .set = { {4, -12}, {-2, -8}, {4, -6}, {-3, -8} } },
	[205] = { .set = { {8, -7}, {0, -5}, {5, -3}, {-2, -6} } },
	[206] = { .set = { {-1, -14}, {3, -6}, {-5, -6}, {-1, -9} } },
	[207] = { .set = { {-1, -15}, {3, -8}, {-5, -8}, {-1, -9} } },
	[208] = { .set = { {-1, -14}, {3, -8}, {-5, -8}, {-1, -11} } },
	[209] = { .set = { {-6, -9}, {1, -5}, {-5, -3}, {2, -7} } },
	[210] = { .set = { {-4, -12}, {2, -8}, {-4, -6}, {3, -8} } },
	[211] = { .set = { {-9, -7}, {-1, -5}, {-6, -3}, {1, -6} } },
	[212] = { .set = { {-11, -3}, {-5, -2}, {-4, 0}, {0, -7} } },
	[213] = { .set = { {-10, -8}, {-4, -5}, {-4, -3}, {1, -9} } },
	[214] = { .set = { {-11, -1}, {-7, -3}, {-6, 0}, {1, -8} } },
	[215] = { .set = { {-8, -1}, {-7, 0}, {-1, 2}, {1, -7} } },
	[216] = { .set = { {-7, -6}, {-6, -5}, {0, -3}, {2, -10} } },
	[217] = { .set = { {-7, 3}, {-6, 2}, {-2, 4}, {0, -6} } },
	[218] = { .set = { {-1, 4}, {-5, 3}, {3, 3}, {-1, -6} } },
	[219] = { .set = { {-7, 3}, {-6, 2}, {-2, 4}, {0, -6} } },
	[220] = { .set = { {-11, 0}, {-7, -2}, {-6, 1}, {1, -7} } },
	[221] = { .set = { {-9, -7}, {-1, -5}, {-6, -3}, {1, -6} } },
	[222] = { .set = { {-1, -10}, {3, -4}, {-5, -4}, {-1, -7} } },
	[223] = { .set = { {8, -7}, {0, -5}, {5, -3}, {-2, -6} } },
	[224] = { .set = { {10, 0}, {6, -2}, {5, 1}, {-2, -7} } },
	[225] = { .set = { {6, 3}, {5, 2}, {1, 4}, {-1, -6} } },
	[226] = { .set = { {6, 3}, {5, 2}, {1, 4}, {-1, -6} } },
	[227] = { .set = { {10, -1}, {6, -3}, {5, 0}, {-2, -8} } },
	[228] = { .set = { {6, 3}, {5, 2}, {1, 4}, {-1, -6} } },
	[229] = { .set = { {8, -7}, {0, -5}, {5, -3}, {-2, -6} } },
	[230] = { .set = { {10, -1}, {6, -3}, {5, 0}, {-2, -8} } },
	[231] = { .set = { {6, 3}, {5, 2}, {1, 4}, {-1, -6} } },
	[232] = { .set = { {-1, -14}, {3, -8}, {-5, -8}, {-1, -11} } },
	[233] = { .set = { {8, -7}, {0, -5}, {5, -3}, {-2, -6} } },
	[234] = { .set = { {10, -1}, {6, -3}, {5, 0}, {-2, -8} } },
	[235] = { .set = { {6, 3}, {5, 2}, {1, 4}, {-1, -6} } },
	[236] = { .set = { {-9, -7}, {-1, -5}, {-6, -3}, {1, -6} } },
	[237] = { .set = { {-1, -14}, {3, -8}, {-5, -8}, {-1, -11} } },
	[238] = { .set = { {8, -7}, {0, -5}, {5, -3}, {-2, -6} } },
	[239] = { .set = { {10, -1}, {6, -3}, {5, 0}, {-2, -8} } },
	[240] = { .set = { {6, 3}, {5, 2}, {1, 4}, {-1, -6} } },
	[241] = { .set = { {-11, -1}, {-7, -3}, {-6, 0}, {1, -8} } },
	[242] = { .set = { {-9, -7}, {-1, -5}, {-6, -3}, {1, -6} } },
	[243] = { .set = { {-1, -14}, {3, -8}, {-5, -8}, {-1, -11} } },
	[244] = { .set = { {8, -7}, {0, -5}, {5, -3}, {-2, -6} } },
	[245] = { .set = { {10, -1}, {6, -3}, {5, 0}, {-2, -8} } },
	[246] = { .set = { {6, 3}, {5, 2}, {1, 4}, {-1, -6} } },
	[247] = { .set = { {-7, 3}, {-6, 2}, {-2, 4}, {0, -6} } },
	[248] = { .set = { {-11, -1}, {-7, -3}, {-6, 0}, {1, -8} } },
	[249] = { .set = { {-9, -7}, {-1, -5}, {-6, -3}, {1, -6} } },
	[250] = { .set = { {-1, -14}, {3, -8}, {-5, -8}, {-1, -11} } },
	[251] = { .set = { {8, -7}, {0, -5}, {5, -3}, {-2, -6} } },
	[252] = { .set = { {10, -1}, {6, -3}, {5, 0}, {-2, -8} } },
	[253] = { .set = { {6, 3}, {5, 2}, {1, 4}, {-1, -6} } },
	[254] = { .set = { {-1, 0}, {-5, 1}, {3, 1}, {-1, -7} } },
	[255] = { .set = { {-8, -1}, {-7, 0}, {-1, 2}, {1, -7} } },
	[256] = { .set = { {-11, -3}, {-5, -2}, {-4, 0}, {0, -7} } },
	[257] = { .set = { {-6, -9}, {1, -5}, {-5, -3}, {2, -7} } },
	[258] = { .set = { {-1, -14}, {3, -6}, {-5, -6}, {-1, -9} } },
	[259] = { .set = { {5, -9}, {-2, -5}, {4, -3}, {-3, -7} } },
	[260] = { .set = { {10, -3}, {4, -2}, {3, 0}, {-1, -7} } },
	[261] = { .set = { {7, -1}, {6, 0}, {0, 2}, {-2, -7} } },
};

static const ax_anim *const sMareepAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sMareepAnimTable2[] = {
	AX_ANIM_PTR(sMareepAnims_2_1),
	AX_ANIM_PTR(sMareepAnims_2_2),
	AX_ANIM_PTR(sMareepAnims_2_3),
	AX_ANIM_PTR(sMareepAnims_2_4),
	AX_ANIM_PTR(sMareepAnims_2_5),
	AX_ANIM_PTR(sMareepAnims_2_6),
	AX_ANIM_PTR(sMareepAnims_2_7),
	AX_ANIM_PTR(sMareepAnims_2_8),
};

static const ax_anim *const sMareepAnimTable3[] = {
	AX_ANIM_PTR(sMareepAnims_3_1),
	AX_ANIM_PTR(sMareepAnims_3_2),
	AX_ANIM_PTR(sMareepAnims_3_3),
	AX_ANIM_PTR(sMareepAnims_3_4),
	AX_ANIM_PTR(sMareepAnims_3_5),
	AX_ANIM_PTR(sMareepAnims_3_6),
	AX_ANIM_PTR(sMareepAnims_3_7),
	AX_ANIM_PTR(sMareepAnims_3_8),
};

static const ax_anim *const sMareepAnimTable4[] = {
	AX_ANIM_PTR(sMareepAnims_4_1),
	AX_ANIM_PTR(sMareepAnims_4_2),
	AX_ANIM_PTR(sMareepAnims_4_3),
	AX_ANIM_PTR(sMareepAnims_4_4),
	AX_ANIM_PTR(sMareepAnims_4_5),
	AX_ANIM_PTR(sMareepAnims_4_6),
	AX_ANIM_PTR(sMareepAnims_4_7),
	AX_ANIM_PTR(sMareepAnims_4_8),
};

static const ax_anim *const sMareepAnimTable5[] = {
	AX_ANIM_PTR(sMareepAnims_5_1),
	AX_ANIM_PTR(sMareepAnims_5_2),
	AX_ANIM_PTR(sMareepAnims_5_3),
	AX_ANIM_PTR(sMareepAnims_5_4),
	AX_ANIM_PTR(sMareepAnims_5_5),
	AX_ANIM_PTR(sMareepAnims_5_6),
	AX_ANIM_PTR(sMareepAnims_5_7),
	AX_ANIM_PTR(sMareepAnims_5_8),
};

static const ax_anim *const sMareepAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
};

static const ax_anim *const sMareepAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00531),
	AX_ANIM_PTR(gAxSharedAnim_00543),
	AX_ANIM_PTR(gAxSharedAnim_00552),
	AX_ANIM_PTR(gAxSharedAnim_00559),
	AX_ANIM_PTR(gAxSharedAnim_00577),
	AX_ANIM_PTR(gAxSharedAnim_00587),
	AX_ANIM_PTR(gAxSharedAnim_00597),
	AX_ANIM_PTR(gAxSharedAnim_00602),
};

static const ax_anim *const sMareepAnimTable8[] = {
	AX_ANIM_PTR(sMareepAnims_8_1),
	AX_ANIM_PTR(sMareepAnims_8_2),
	AX_ANIM_PTR(sMareepAnims_8_3),
	AX_ANIM_PTR(sMareepAnims_8_4),
	AX_ANIM_PTR(sMareepAnims_8_5),
	AX_ANIM_PTR(sMareepAnims_8_6),
	AX_ANIM_PTR(sMareepAnims_8_7),
	AX_ANIM_PTR(sMareepAnims_8_8),
};

static const ax_anim *const sMareepAnimTable9[] = {
	AX_ANIM_PTR(sMareepAnims_9_1),
	AX_ANIM_PTR(sMareepAnims_9_2),
	AX_ANIM_PTR(sMareepAnims_9_3),
	AX_ANIM_PTR(sMareepAnims_9_4),
	AX_ANIM_PTR(sMareepAnims_9_5),
	AX_ANIM_PTR(sMareepAnims_9_6),
	AX_ANIM_PTR(sMareepAnims_9_7),
	AX_ANIM_PTR(sMareepAnims_9_8),
};

static const ax_anim *const sMareepAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01016),
	AX_ANIM_PTR(gAxSharedAnim_01027),
	AX_ANIM_PTR(gAxSharedAnim_01046),
	AX_ANIM_PTR(gAxSharedAnim_01061),
	AX_ANIM_PTR(gAxSharedAnim_01078),
	AX_ANIM_PTR(gAxSharedAnim_01092),
	AX_ANIM_PTR(gAxSharedAnim_01110),
	AX_ANIM_PTR(gAxSharedAnim_01124),
};

static const ax_anim *const sMareepAnimTable11[] = {
	AX_ANIM_PTR(sMareepAnims_11_1),
	AX_ANIM_PTR(sMareepAnims_11_2),
	AX_ANIM_PTR(sMareepAnims_11_3),
	AX_ANIM_PTR(sMareepAnims_11_4),
	AX_ANIM_PTR(sMareepAnims_11_5),
	AX_ANIM_PTR(sMareepAnims_11_6),
	AX_ANIM_PTR(sMareepAnims_11_7),
	AX_ANIM_PTR(sMareepAnims_11_8),
};

static const ax_anim *const sMareepAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01423),
	AX_ANIM_PTR(gAxSharedAnim_01467),
	AX_ANIM_PTR(gAxSharedAnim_01458),
	AX_ANIM_PTR(gAxSharedAnim_01449),
	AX_ANIM_PTR(gAxSharedAnim_01448),
	AX_ANIM_PTR(gAxSharedAnim_01444),
	AX_ANIM_PTR(gAxSharedAnim_01432),
	AX_ANIM_PTR(gAxSharedAnim_01424),
};

static const ax_anim *const sMareepAnimTable13[] = {
	AX_ANIM_PTR(sMareepAnims_13_1),
	AX_ANIM_PTR(sMareepAnims_13_2),
	AX_ANIM_PTR(sMareepAnims_13_3),
	AX_ANIM_PTR(sMareepAnims_13_4),
	AX_ANIM_PTR(sMareepAnims_13_5),
	AX_ANIM_PTR(sMareepAnims_13_6),
	AX_ANIM_PTR(sMareepAnims_13_7),
	AX_ANIM_PTR(sMareepAnims_13_8),
};

static const ax_anim *const *const sAxAnimationsMareep[] = {
	sMareepAnimTable1,
	sMareepAnimTable2,
	sMareepAnimTable3,
	sMareepAnimTable4,
	sMareepAnimTable5,
	sMareepAnimTable6,
	sMareepAnimTable7,
	sMareepAnimTable8,
	sMareepAnimTable9,
	sMareepAnimTable10,
	sMareepAnimTable11,
	sMareepAnimTable12,
	sMareepAnimTable13,
};

static const ax_sprite *const sAxSpritesMareep[] = {
	sMareepSprites1,
	sMareepSprites2,
	sMareepSprites3,
	sMareepSprites4,
	sMareepSprites5,
	sMareepSprites6,
	sMareepSprites7,
	sMareepSprites8,
	sMareepSprites9,
	sMareepSprites10,
	sMareepSprites11,
	sMareepSprites12,
	sMareepSprites13,
	sMareepSprites14,
	sMareepSprites15,
	sMareepSprites16,
	sMareepSprites17,
	sMareepSprites18,
	sMareepSprites19,
	sMareepSprites20,
	sMareepSprites21,
	sMareepSprites22,
	sMareepSprites23,
	sMareepSprites24,
	sMareepSprites25,
	sMareepSprites26,
	sMareepSprites27,
	sMareepSprites28,
	sMareepSprites29,
	sMareepSprites30,
	sMareepSprites31,
	sMareepSprites32,
	sMareepSprites33,
	sMareepSprites34,
	sMareepSprites35,
	sMareepSprites36,
	sMareepSprites37,
};

static const axmain sAxMainMareep = {
	.poses = sAxPosesMareep,
	.animations = sAxAnimationsMareep,
	.animCount = ARRAY_COUNT(sAxAnimationsMareep),
	.spriteData = sAxSpritesMareep,
	.positions = sAxPositionsMareep,
};
