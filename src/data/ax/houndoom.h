/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainHoundoom;
const SiroArchive gAxHoundoom = {"SIRO", &sAxMainHoundoom};

static const ax_pose sHoundoomPose1[] = {
	AX_POSE(0, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 6)),
	AX_POSE(1, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose2[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose3[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose4[] = {
	AX_POSE(4, OAM1(7, ST_OAM_SQUARE     , 2), OAM2(254, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(5, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(1, 3, 6)),
	AX_POSE(6, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(3, 3, 6)),
	AX_POSE(7, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(7, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose5[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose6[] = {
	AX_POSE(9, OAM1(8, ST_OAM_SQUARE     , 2), OAM2(0, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 6)),
	AX_POSE(10, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(1, 3, 6)),
	AX_POSE(11, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(3, 3, 6)),
	AX_POSE(12, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(7, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose7[] = {
	AX_POSE(13, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(1, 3, 6)),
	AX_POSE(15, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(2, 3, 6)),
	AX_POSE(16, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(4, 3, 6)),
	AX_POSE(17, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose8[] = {
	AX_POSE(18, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(19, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(1, 3, 6)),
	AX_POSE(20, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(2, 3, 6)),
	AX_POSE(21, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(4, 3, 6)),
	AX_POSE(22, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose9[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose10[] = {
	AX_POSE(24, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(25, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(249, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(1, 3, 6)),
	AX_POSE(26, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(2, 3, 6)),
	AX_POSE(27, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(3, 3, 6)),
	AX_POSE(28, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(7, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose11[] = {
	AX_POSE(29, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(250, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(30, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(242, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(1, 3, 6)),
	AX_POSE(31, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(2, 3, 6)),
	AX_POSE(32, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(4, 3, 6)),
	AX_POSE(33, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose12[] = {
	AX_POSE(34, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(245, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(35, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(1, 3, 6)),
	AX_POSE(36, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(3, 3, 6)),
	AX_POSE(37, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(7, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose13[] = {
	AX_POSE(38, OAM1(2, ST_OAM_H_RECTANGLE, 2), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(39, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose14[] = {
	AX_POSE(40, OAM1(2, ST_OAM_H_RECTANGLE, 2), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(41, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose15[] = {
	AX_POSE(42, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 6)),
	AX_POSE(43, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(1, 3, 6)),
	AX_POSE(44, OAM1(2, ST_OAM_H_RECTANGLE, 2), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(2, 3, 6)),
	AX_POSE(45, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose16[] = {
	AX_POSE(24, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 6)),
	AX_POSE(25, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(1, 3, 6)),
	AX_POSE(26, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(11, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(2, 3, 6)),
	AX_POSE(27, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(3, 3, 6)),
	AX_POSE(28, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(7, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose17[] = {
	AX_POSE(29, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(254, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(30, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(1, 3, 6)),
	AX_POSE(31, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(11, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(2, 3, 6)),
	AX_POSE(32, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(4, 3, 6)),
	AX_POSE(33, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose18[] = {
	AX_POSE(34, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(3, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 6)),
	AX_POSE(35, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(11, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(1, 3, 6)),
	AX_POSE(36, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(3, 3, 6)),
	AX_POSE(37, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(7, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose19[] = {
	AX_POSE(13, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 6)),
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(1, 3, 6)),
	AX_POSE(15, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(2, 3, 6)),
	AX_POSE(16, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(4, 3, 6)),
	AX_POSE(17, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose20[] = {
	AX_POSE(18, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 6)),
	AX_POSE(19, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(1, 3, 6)),
	AX_POSE(20, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(2, 3, 6)),
	AX_POSE(21, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(4, 3, 6)),
	AX_POSE(22, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose21[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose22[] = {
	AX_POSE(4, OAM1(7, ST_OAM_SQUARE     , 2), OAM2(250, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(5, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(1, 3, 6)),
	AX_POSE(6, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(3, 3, 6)),
	AX_POSE(7, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(7, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose23[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose24[] = {
	AX_POSE(9, OAM1(8, ST_OAM_SQUARE     , 2), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(10, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(1, 3, 6)),
	AX_POSE(11, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(3, 3, 6)),
	AX_POSE(12, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(7, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose28[] = {
	AX_POSE(46, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose32[] = {
	AX_POSE(47, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose36[] = {
	AX_POSE(48, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(12, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 6)),
	AX_POSE(49, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(2, 3, 6)),
	AX_POSE(50, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(6, 3, 6)),
	AX_POSE(51, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(7, 3, 6)),
	AX_POSE(52, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(11, 3, 6)),
	AX_POSE(53, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 6)),
	AX_POSE(54, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose40[] = {
	AX_POSE(55, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(56, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE(57, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 6)),
	AX_POSE(58, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(247, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 6)),
	AX_POSE(59, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose44[] = {
	AX_POSE(60, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(61, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(1, 3, 6)),
	AX_POSE(62, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose48[] = {
	AX_POSE(55, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(56, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 6)),
	AX_POSE(57, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 6)),
	AX_POSE(58, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 6)),
	AX_POSE(59, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose52[] = {
	AX_POSE(48, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(49, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(2, 3, 6)),
	AX_POSE(50, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(6, 3, 6)),
	AX_POSE(51, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(7, 3, 6)),
	AX_POSE(52, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(11, 3, 6)),
	AX_POSE(53, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(12, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 6)),
	AX_POSE(54, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(12, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose56[] = {
	AX_POSE(47, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose91[] = {
	AX_POSE(63, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose93[] = {
	AX_POSE(64, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(65, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose96[] = {
	AX_POSE(66, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose98[] = {
	AX_POSE(67, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(68, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE(69, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 6)),
	AX_POSE(70, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 6)),
	AX_POSE(71, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose101[] = {
	AX_POSE(72, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(73, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE(74, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 6)),
	AX_POSE(75, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(3, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(13, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose103[] = {
	AX_POSE(76, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(77, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE(78, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(9, 3, 6)),
	AX_POSE(79, OAM1(220, ST_OAM_H_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(11, 3, 6)),
	AX_POSE(80, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose106[] = {
	AX_POSE(81, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(82, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE(83, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(3, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 6)),
	AX_POSE(84, OAM1(2, ST_OAM_H_RECTANGLE, 2), OAM2(243, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose108[] = {
	AX_POSE(85, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(86, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE(87, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(9, 3, 6)),
	AX_POSE(88, OAM1(221, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose111[] = {
	AX_POSE(89, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 6)),
	AX_POSE(90, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(1, 3, 6)),
	AX_POSE(91, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 6)),
	AX_POSE(92, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose113[] = {
	AX_POSE(93, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(94, OAM1(1, ST_OAM_H_RECTANGLE, 2), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose116[] = {
	AX_POSE(81, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(82, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 6)),
	AX_POSE(83, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 6)),
	AX_POSE(84, OAM1(2, ST_OAM_H_RECTANGLE, 2), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose118[] = {
	AX_POSE(85, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(86, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(3, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 6)),
	AX_POSE(87, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(3, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(9, 3, 6)),
	AX_POSE(88, OAM1(221, ST_OAM_H_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose121[] = {
	AX_POSE(72, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(73, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 6)),
	AX_POSE(74, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 6)),
	AX_POSE(75, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose123[] = {
	AX_POSE(76, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(77, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 6)),
	AX_POSE(78, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(12, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(9, 3, 6)),
	AX_POSE(79, OAM1(220, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(11, 3, 6)),
	AX_POSE(80, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose126[] = {
	AX_POSE(66, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose128[] = {
	AX_POSE(67, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(68, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 6)),
	AX_POSE(69, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 6)),
	AX_POSE(70, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 6)),
	AX_POSE(71, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose145[] = {
	AX_POSE(95, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose146[] = {
	AX_POSE(96, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose147[] = {
	AX_POSE(97, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(98, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 6)),
	AX_POSE(99, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(12, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 6)),
	AX_POSE(100, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose148[] = {
	AX_POSE(101, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose149[] = {
	AX_POSE(102, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose150[] = {
	AX_POSE(103, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(104, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE(105, OAM1(5, ST_OAM_SQUARE     , 2), OAM2(247, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(9, 3, 6)),
	AX_POSE(106, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(10, 3, 6)),
	AX_POSE(107, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(12, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose151[] = {
	AX_POSE(108, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(-1, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(2, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 6)),
	AX_POSE(109, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 6)),
	AX_POSE(110, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(9, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose152[] = {
	AX_POSE(103, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(104, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 6)),
	AX_POSE(105, OAM1(5, ST_OAM_SQUARE     , 2), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(9, 3, 6)),
	AX_POSE(106, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 6)),
	AX_POSE(107, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(12, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose153[] = {
	AX_POSE(102, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose154[] = {
	AX_POSE(101, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose203[] = {
	AX_POSE(63, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose204[] = {
	AX_POSE(66, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose205[] = {
	AX_POSE(72, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(73, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE(74, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 6)),
	AX_POSE(75, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(13, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose206[] = {
	AX_POSE(81, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(82, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE(83, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 6)),
	AX_POSE(84, OAM1(3, ST_OAM_H_RECTANGLE, 2), OAM2(244, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose207[] = {
	AX_POSE(89, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 6)),
	AX_POSE(90, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(1, 3, 6)),
	AX_POSE(91, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 6)),
	AX_POSE(92, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose208[] = {
	AX_POSE(81, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(82, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 6)),
	AX_POSE(83, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 6)),
	AX_POSE(84, OAM1(3, ST_OAM_H_RECTANGLE, 2), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose209[] = {
	AX_POSE(72, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(73, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 6)),
	AX_POSE(74, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 6)),
	AX_POSE(75, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose210[] = {
	AX_POSE(66, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose219[] = {
	AX_POSE(48, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(11, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 6)),
	AX_POSE(49, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(2, 3, 6)),
	AX_POSE(50, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(3, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(6, 3, 6)),
	AX_POSE(51, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(7, 3, 6)),
	AX_POSE(52, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(11, 3, 6)),
	AX_POSE(53, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 6)),
	AX_POSE(54, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose222[] = {
	AX_POSE(55, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(56, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE(57, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 6)),
	AX_POSE(58, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(246, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 6)),
	AX_POSE(59, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose228[] = {
	AX_POSE(55, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(56, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 6)),
	AX_POSE(57, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 6)),
	AX_POSE(58, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(2, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 6)),
	AX_POSE(59, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoundoomPose231[] = {
	AX_POSE(48, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(49, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(2, 3, 6)),
	AX_POSE(50, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(6, 3, 6)),
	AX_POSE(51, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(7, 3, 6)),
	AX_POSE(52, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(11, 3, 6)),
	AX_POSE(53, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 6)),
	AX_POSE(54, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 6)),
	AX_POSE_TERMINATOR
};
static const u8 sHoundoomAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_2_1.lz");
static const u8 sHoundoomAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_2_2.lz");
static const u8 sHoundoomAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_2_3.lz");
static const u8 sHoundoomAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_2_4.lz");
static const u8 sHoundoomAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_2_5.lz");
static const u8 sHoundoomAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_2_6.lz");
static const u8 sHoundoomAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_2_7.lz");
static const u8 sHoundoomAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_2_8.lz");
static const u8 sHoundoomAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_3_1.lz");
static const u8 sHoundoomAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_3_2.lz");
static const u8 sHoundoomAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_3_3.lz");
static const u8 sHoundoomAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_3_4.lz");
static const u8 sHoundoomAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_3_5.lz");
static const u8 sHoundoomAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_3_6.lz");
static const u8 sHoundoomAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_3_7.lz");
static const u8 sHoundoomAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_3_8.lz");
static const u8 sHoundoomAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_9_1.lz");
static const u8 sHoundoomAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_9_2.lz");
static const u8 sHoundoomAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_9_3.lz");
static const u8 sHoundoomAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_9_4.lz");
static const u8 sHoundoomAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_9_5.lz");
static const u8 sHoundoomAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_9_6.lz");
static const u8 sHoundoomAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_9_7.lz");
static const u8 sHoundoomAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_9_8.lz");
static const u8 sHoundoomAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_11_1.lz");
static const u8 sHoundoomAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_11_2.lz");
static const u8 sHoundoomAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_11_3.lz");
static const u8 sHoundoomAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_11_4.lz");
static const u8 sHoundoomAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_11_5.lz");
static const u8 sHoundoomAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_11_6.lz");
static const u8 sHoundoomAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_11_7.lz");
static const u8 sHoundoomAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/houndoom/sHoundoomAnims_11_8.lz");

static const u8 sHoundoomGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_1.4bpp.lz");
static const ax_sprite sHoundoomSprites1[] = {
	{sHoundoomGfx1, ARRAY_COUNT(sHoundoomGfx1)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_2.4bpp.lz");
static const ax_sprite sHoundoomSprites2[] = {
	{sHoundoomGfx2, ARRAY_COUNT(sHoundoomGfx2)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_3.4bpp.lz");
static const ax_sprite sHoundoomSprites3[] = {
	{sHoundoomGfx3, ARRAY_COUNT(sHoundoomGfx3)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_4.4bpp.lz");
static const ax_sprite sHoundoomSprites4[] = {
	{sHoundoomGfx4, ARRAY_COUNT(sHoundoomGfx4)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_5.4bpp.lz");
static const ax_sprite sHoundoomSprites5[] = {
	{sHoundoomGfx5, ARRAY_COUNT(sHoundoomGfx5)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_6.4bpp.lz");
static const ax_sprite sHoundoomSprites6[] = {
	{sHoundoomGfx6, ARRAY_COUNT(sHoundoomGfx6)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_7.4bpp.lz");
static const ax_sprite sHoundoomSprites7[] = {
	{sHoundoomGfx7, ARRAY_COUNT(sHoundoomGfx7)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_8.4bpp.lz");
static const ax_sprite sHoundoomSprites8[] = {
	{sHoundoomGfx8, ARRAY_COUNT(sHoundoomGfx8)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_9.4bpp.lz");
static const ax_sprite sHoundoomSprites9[] = {
	{sHoundoomGfx9, ARRAY_COUNT(sHoundoomGfx9)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_10.4bpp.lz");
static const ax_sprite sHoundoomSprites10[] = {
	{sHoundoomGfx10, ARRAY_COUNT(sHoundoomGfx10)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_11.4bpp.lz");
static const ax_sprite sHoundoomSprites11[] = {
	{sHoundoomGfx11, ARRAY_COUNT(sHoundoomGfx11)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_12.4bpp.lz");
static const ax_sprite sHoundoomSprites12[] = {
	{sHoundoomGfx12, ARRAY_COUNT(sHoundoomGfx12)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_13.4bpp.lz");
static const ax_sprite sHoundoomSprites13[] = {
	{sHoundoomGfx13, ARRAY_COUNT(sHoundoomGfx13)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_14.4bpp.lz");
static const ax_sprite sHoundoomSprites14[] = {
	{sHoundoomGfx14, ARRAY_COUNT(sHoundoomGfx14)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_15.4bpp.lz");
static const ax_sprite sHoundoomSprites15[] = {
	{sHoundoomGfx15, ARRAY_COUNT(sHoundoomGfx15)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_16.4bpp.lz");
static const ax_sprite sHoundoomSprites16[] = {
	{sHoundoomGfx16, ARRAY_COUNT(sHoundoomGfx16)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_17.4bpp.lz");
static const ax_sprite sHoundoomSprites17[] = {
	{sHoundoomGfx17, ARRAY_COUNT(sHoundoomGfx17)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_18.4bpp.lz");
static const ax_sprite sHoundoomSprites18[] = {
	{sHoundoomGfx18, ARRAY_COUNT(sHoundoomGfx18)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_19.4bpp.lz");
static const ax_sprite sHoundoomSprites19[] = {
	{sHoundoomGfx19, ARRAY_COUNT(sHoundoomGfx19)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_20.4bpp.lz");
static const ax_sprite sHoundoomSprites20[] = {
	{sHoundoomGfx20, ARRAY_COUNT(sHoundoomGfx20)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_21.4bpp.lz");
static const ax_sprite sHoundoomSprites21[] = {
	{sHoundoomGfx21, ARRAY_COUNT(sHoundoomGfx21)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_22.4bpp.lz");
static const ax_sprite sHoundoomSprites22[] = {
	{sHoundoomGfx22, ARRAY_COUNT(sHoundoomGfx22)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_23.4bpp.lz");
static const ax_sprite sHoundoomSprites23[] = {
	{sHoundoomGfx23, ARRAY_COUNT(sHoundoomGfx23)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_24.4bpp.lz");
static const ax_sprite sHoundoomSprites24[] = {
	{sHoundoomGfx24, ARRAY_COUNT(sHoundoomGfx24)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_25.4bpp.lz");
static const ax_sprite sHoundoomSprites25[] = {
	{sHoundoomGfx25, ARRAY_COUNT(sHoundoomGfx25)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_26.4bpp.lz");
static const ax_sprite sHoundoomSprites26[] = {
	{sHoundoomGfx26, ARRAY_COUNT(sHoundoomGfx26)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_27.4bpp.lz");
static const ax_sprite sHoundoomSprites27[] = {
	{sHoundoomGfx27, ARRAY_COUNT(sHoundoomGfx27)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_28.4bpp.lz");
static const ax_sprite sHoundoomSprites28[] = {
	{sHoundoomGfx28, ARRAY_COUNT(sHoundoomGfx28)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_29.4bpp.lz");
static const ax_sprite sHoundoomSprites29[] = {
	{sHoundoomGfx29, ARRAY_COUNT(sHoundoomGfx29)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_30.4bpp.lz");
static const ax_sprite sHoundoomSprites30[] = {
	{sHoundoomGfx30, ARRAY_COUNT(sHoundoomGfx30)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_31.4bpp.lz");
static const ax_sprite sHoundoomSprites31[] = {
	{sHoundoomGfx31, ARRAY_COUNT(sHoundoomGfx31)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_32.4bpp.lz");
static const ax_sprite sHoundoomSprites32[] = {
	{sHoundoomGfx32, ARRAY_COUNT(sHoundoomGfx32)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_33.4bpp.lz");
static const ax_sprite sHoundoomSprites33[] = {
	{sHoundoomGfx33, ARRAY_COUNT(sHoundoomGfx33)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_34.4bpp.lz");
static const ax_sprite sHoundoomSprites34[] = {
	{sHoundoomGfx34, ARRAY_COUNT(sHoundoomGfx34)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_35.4bpp.lz");
static const ax_sprite sHoundoomSprites35[] = {
	{sHoundoomGfx35, ARRAY_COUNT(sHoundoomGfx35)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_36.4bpp.lz");
static const ax_sprite sHoundoomSprites36[] = {
	{sHoundoomGfx36, ARRAY_COUNT(sHoundoomGfx36)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_37.4bpp.lz");
static const ax_sprite sHoundoomSprites37[] = {
	{sHoundoomGfx37, ARRAY_COUNT(sHoundoomGfx37)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_38.4bpp.lz");
static const ax_sprite sHoundoomSprites38[] = {
	{sHoundoomGfx38, ARRAY_COUNT(sHoundoomGfx38)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_39.4bpp.lz");
static const ax_sprite sHoundoomSprites39[] = {
	{sHoundoomGfx39, ARRAY_COUNT(sHoundoomGfx39)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_40.4bpp.lz");
static const ax_sprite sHoundoomSprites40[] = {
	{sHoundoomGfx40, ARRAY_COUNT(sHoundoomGfx40)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_41.4bpp.lz");
static const ax_sprite sHoundoomSprites41[] = {
	{sHoundoomGfx41, ARRAY_COUNT(sHoundoomGfx41)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_42.4bpp.lz");
static const ax_sprite sHoundoomSprites42[] = {
	{sHoundoomGfx42, ARRAY_COUNT(sHoundoomGfx42)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_43.4bpp.lz");
static const ax_sprite sHoundoomSprites43[] = {
	{sHoundoomGfx43, ARRAY_COUNT(sHoundoomGfx43)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_44.4bpp.lz");
static const ax_sprite sHoundoomSprites44[] = {
	{sHoundoomGfx44, ARRAY_COUNT(sHoundoomGfx44)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_45.4bpp.lz");
static const ax_sprite sHoundoomSprites45[] = {
	{sHoundoomGfx45, ARRAY_COUNT(sHoundoomGfx45)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_46.4bpp.lz");
static const ax_sprite sHoundoomSprites46[] = {
	{sHoundoomGfx46, ARRAY_COUNT(sHoundoomGfx46)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_47.4bpp.lz");
static const u8 sHoundoomGfx47_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_47_1.4bpp.lz");
static const u8 sHoundoomGfx47_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_47_2.4bpp.lz");
static const u8 sHoundoomGfx47_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_47_3.4bpp.lz");
static const ax_sprite sHoundoomSprites47[] = {
	{sHoundoomGfx47, ARRAY_COUNT(sHoundoomGfx47)}, 
	{NULL, 32}, 
	{sHoundoomGfx47_1, ARRAY_COUNT(sHoundoomGfx47_1)}, 
	{NULL, 64}, 
	{sHoundoomGfx47_2, ARRAY_COUNT(sHoundoomGfx47_2)}, 
	{NULL, 64}, 
	{sHoundoomGfx47_3, ARRAY_COUNT(sHoundoomGfx47_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_48.4bpp.lz");
static const u8 sHoundoomGfx48_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_48_1.4bpp.lz");
static const ax_sprite sHoundoomSprites48[] = {
	{sHoundoomGfx48, ARRAY_COUNT(sHoundoomGfx48)}, 
	{NULL, 32}, 
	{sHoundoomGfx48_1, ARRAY_COUNT(sHoundoomGfx48_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_49.4bpp.lz");
static const ax_sprite sHoundoomSprites49[] = {
	{sHoundoomGfx49, ARRAY_COUNT(sHoundoomGfx49)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_50.4bpp.lz");
static const ax_sprite sHoundoomSprites50[] = {
	{sHoundoomGfx50, ARRAY_COUNT(sHoundoomGfx50)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_51.4bpp.lz");
static const ax_sprite sHoundoomSprites51[] = {
	{sHoundoomGfx51, ARRAY_COUNT(sHoundoomGfx51)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_52.4bpp.lz");
static const ax_sprite sHoundoomSprites52[] = {
	{sHoundoomGfx52, ARRAY_COUNT(sHoundoomGfx52)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_53.4bpp.lz");
static const ax_sprite sHoundoomSprites53[] = {
	{sHoundoomGfx53, ARRAY_COUNT(sHoundoomGfx53)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_54.4bpp.lz");
static const ax_sprite sHoundoomSprites54[] = {
	{sHoundoomGfx54, ARRAY_COUNT(sHoundoomGfx54)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_55.4bpp.lz");
static const ax_sprite sHoundoomSprites55[] = {
	{sHoundoomGfx55, ARRAY_COUNT(sHoundoomGfx55)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_56.4bpp.lz");
static const ax_sprite sHoundoomSprites56[] = {
	{sHoundoomGfx56, ARRAY_COUNT(sHoundoomGfx56)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_57.4bpp.lz");
static const ax_sprite sHoundoomSprites57[] = {
	{sHoundoomGfx57, ARRAY_COUNT(sHoundoomGfx57)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_58.4bpp.lz");
static const ax_sprite sHoundoomSprites58[] = {
	{sHoundoomGfx58, ARRAY_COUNT(sHoundoomGfx58)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_59.4bpp.lz");
static const ax_sprite sHoundoomSprites59[] = {
	{sHoundoomGfx59, ARRAY_COUNT(sHoundoomGfx59)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_60.4bpp.lz");
static const ax_sprite sHoundoomSprites60[] = {
	{sHoundoomGfx60, ARRAY_COUNT(sHoundoomGfx60)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_61.4bpp.lz");
static const ax_sprite sHoundoomSprites61[] = {
	{sHoundoomGfx61, ARRAY_COUNT(sHoundoomGfx61)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_62.4bpp.lz");
static const ax_sprite sHoundoomSprites62[] = {
	{sHoundoomGfx62, ARRAY_COUNT(sHoundoomGfx62)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_63.4bpp.lz");
static const ax_sprite sHoundoomSprites63[] = {
	{sHoundoomGfx63, ARRAY_COUNT(sHoundoomGfx63)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_64.4bpp.lz");
static const u8 sHoundoomGfx64_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_64_1.4bpp.lz");
static const u8 sHoundoomGfx64_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_64_2.4bpp.lz");
static const u8 sHoundoomGfx64_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_64_3.4bpp.lz");
static const ax_sprite sHoundoomSprites64[] = {
	{sHoundoomGfx64, ARRAY_COUNT(sHoundoomGfx64)}, 
	{NULL, 32}, 
	{sHoundoomGfx64_1, ARRAY_COUNT(sHoundoomGfx64_1)}, 
	{NULL, 32}, 
	{sHoundoomGfx64_2, ARRAY_COUNT(sHoundoomGfx64_2)}, 
	{NULL, 64}, 
	{sHoundoomGfx64_3, ARRAY_COUNT(sHoundoomGfx64_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_65.4bpp.lz");
static const ax_sprite sHoundoomSprites65[] = {
	{sHoundoomGfx65, ARRAY_COUNT(sHoundoomGfx65)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_66.4bpp.lz");
static const ax_sprite sHoundoomSprites66[] = {
	{sHoundoomGfx66, ARRAY_COUNT(sHoundoomGfx66)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_67.4bpp.lz");
static const u8 sHoundoomGfx67_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_67_1.4bpp.lz");
static const ax_sprite sHoundoomSprites67[] = {
	{sHoundoomGfx67, ARRAY_COUNT(sHoundoomGfx67)}, 
	{NULL, 32}, 
	{sHoundoomGfx67_1, ARRAY_COUNT(sHoundoomGfx67_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_68.4bpp.lz");
static const ax_sprite sHoundoomSprites68[] = {
	{sHoundoomGfx68, ARRAY_COUNT(sHoundoomGfx68)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_69.4bpp.lz");
static const ax_sprite sHoundoomSprites69[] = {
	{sHoundoomGfx69, ARRAY_COUNT(sHoundoomGfx69)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_70.4bpp.lz");
static const ax_sprite sHoundoomSprites70[] = {
	{sHoundoomGfx70, ARRAY_COUNT(sHoundoomGfx70)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_71.4bpp.lz");
static const ax_sprite sHoundoomSprites71[] = {
	{sHoundoomGfx71, ARRAY_COUNT(sHoundoomGfx71)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx72[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_72.4bpp.lz");
static const ax_sprite sHoundoomSprites72[] = {
	{sHoundoomGfx72, ARRAY_COUNT(sHoundoomGfx72)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx73[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_73.4bpp.lz");
static const ax_sprite sHoundoomSprites73[] = {
	{sHoundoomGfx73, ARRAY_COUNT(sHoundoomGfx73)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx74[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_74.4bpp.lz");
static const ax_sprite sHoundoomSprites74[] = {
	{sHoundoomGfx74, ARRAY_COUNT(sHoundoomGfx74)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx75[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_75.4bpp.lz");
static const ax_sprite sHoundoomSprites75[] = {
	{sHoundoomGfx75, ARRAY_COUNT(sHoundoomGfx75)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx76[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_76.4bpp.lz");
static const ax_sprite sHoundoomSprites76[] = {
	{sHoundoomGfx76, ARRAY_COUNT(sHoundoomGfx76)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx77[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_77.4bpp.lz");
static const ax_sprite sHoundoomSprites77[] = {
	{sHoundoomGfx77, ARRAY_COUNT(sHoundoomGfx77)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx78[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_78.4bpp.lz");
static const ax_sprite sHoundoomSprites78[] = {
	{sHoundoomGfx78, ARRAY_COUNT(sHoundoomGfx78)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx79[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_79.4bpp.lz");
static const ax_sprite sHoundoomSprites79[] = {
	{sHoundoomGfx79, ARRAY_COUNT(sHoundoomGfx79)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx80[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_80.4bpp.lz");
static const ax_sprite sHoundoomSprites80[] = {
	{sHoundoomGfx80, ARRAY_COUNT(sHoundoomGfx80)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx81[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_81.4bpp.lz");
static const ax_sprite sHoundoomSprites81[] = {
	{sHoundoomGfx81, ARRAY_COUNT(sHoundoomGfx81)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx82[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_82.4bpp.lz");
static const ax_sprite sHoundoomSprites82[] = {
	{sHoundoomGfx82, ARRAY_COUNT(sHoundoomGfx82)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx83[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_83.4bpp.lz");
static const u8 sHoundoomGfx83_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_83_1.4bpp.lz");
static const ax_sprite sHoundoomSprites83[] = {
	{sHoundoomGfx83, ARRAY_COUNT(sHoundoomGfx83)}, 
	{NULL, 32}, 
	{sHoundoomGfx83_1, ARRAY_COUNT(sHoundoomGfx83_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx84[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_84.4bpp.lz");
static const ax_sprite sHoundoomSprites84[] = {
	{sHoundoomGfx84, ARRAY_COUNT(sHoundoomGfx84)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx85[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_85.4bpp.lz");
static const ax_sprite sHoundoomSprites85[] = {
	{sHoundoomGfx85, ARRAY_COUNT(sHoundoomGfx85)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx86[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_86.4bpp.lz");
static const u8 sHoundoomGfx86_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_86_1.4bpp.lz");
static const ax_sprite sHoundoomSprites86[] = {
	{sHoundoomGfx86, ARRAY_COUNT(sHoundoomGfx86)}, 
	{NULL, 32}, 
	{sHoundoomGfx86_1, ARRAY_COUNT(sHoundoomGfx86_1)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx87[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_87.4bpp.lz");
static const ax_sprite sHoundoomSprites87[] = {
	{sHoundoomGfx87, ARRAY_COUNT(sHoundoomGfx87)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx88[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_88.4bpp.lz");
static const u8 sHoundoomGfx88_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_88_1.4bpp.lz");
static const ax_sprite sHoundoomSprites88[] = {
	{sHoundoomGfx88, ARRAY_COUNT(sHoundoomGfx88)}, 
	{NULL, 32}, 
	{sHoundoomGfx88_1, ARRAY_COUNT(sHoundoomGfx88_1)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx89[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_89.4bpp.lz");
static const ax_sprite sHoundoomSprites89[] = {
	{sHoundoomGfx89, ARRAY_COUNT(sHoundoomGfx89)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx90[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_90.4bpp.lz");
static const ax_sprite sHoundoomSprites90[] = {
	{sHoundoomGfx90, ARRAY_COUNT(sHoundoomGfx90)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx91[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_91.4bpp.lz");
static const ax_sprite sHoundoomSprites91[] = {
	{sHoundoomGfx91, ARRAY_COUNT(sHoundoomGfx91)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx92[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_92.4bpp.lz");
static const ax_sprite sHoundoomSprites92[] = {
	{sHoundoomGfx92, ARRAY_COUNT(sHoundoomGfx92)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx93[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_93.4bpp.lz");
static const ax_sprite sHoundoomSprites93[] = {
	{sHoundoomGfx93, ARRAY_COUNT(sHoundoomGfx93)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx94[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_94.4bpp.lz");
static const ax_sprite sHoundoomSprites94[] = {
	{sHoundoomGfx94, ARRAY_COUNT(sHoundoomGfx94)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx95[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_95.4bpp.lz");
static const ax_sprite sHoundoomSprites95[] = {
	{sHoundoomGfx95, ARRAY_COUNT(sHoundoomGfx95)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx96[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_96.4bpp.lz");
static const ax_sprite sHoundoomSprites96[] = {
	{sHoundoomGfx96, ARRAY_COUNT(sHoundoomGfx96)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx97[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_97.4bpp.lz");
static const ax_sprite sHoundoomSprites97[] = {
	{sHoundoomGfx97, ARRAY_COUNT(sHoundoomGfx97)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx98[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_98.4bpp.lz");
static const ax_sprite sHoundoomSprites98[] = {
	{sHoundoomGfx98, ARRAY_COUNT(sHoundoomGfx98)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx99[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_99.4bpp.lz");
static const ax_sprite sHoundoomSprites99[] = {
	{sHoundoomGfx99, ARRAY_COUNT(sHoundoomGfx99)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx100[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_100.4bpp.lz");
static const ax_sprite sHoundoomSprites100[] = {
	{sHoundoomGfx100, ARRAY_COUNT(sHoundoomGfx100)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx101[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_101.4bpp.lz");
static const ax_sprite sHoundoomSprites101[] = {
	{sHoundoomGfx101, ARRAY_COUNT(sHoundoomGfx101)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx102[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_102.4bpp.lz");
static const ax_sprite sHoundoomSprites102[] = {
	{sHoundoomGfx102, ARRAY_COUNT(sHoundoomGfx102)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx103[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_103.4bpp.lz");
static const ax_sprite sHoundoomSprites103[] = {
	{sHoundoomGfx103, ARRAY_COUNT(sHoundoomGfx103)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx104[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_104.4bpp.lz");
static const ax_sprite sHoundoomSprites104[] = {
	{sHoundoomGfx104, ARRAY_COUNT(sHoundoomGfx104)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx105[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_105.4bpp.lz");
static const ax_sprite sHoundoomSprites105[] = {
	{sHoundoomGfx105, ARRAY_COUNT(sHoundoomGfx105)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx106[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_106.4bpp.lz");
static const ax_sprite sHoundoomSprites106[] = {
	{sHoundoomGfx106, ARRAY_COUNT(sHoundoomGfx106)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx107[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_107.4bpp.lz");
static const ax_sprite sHoundoomSprites107[] = {
	{sHoundoomGfx107, ARRAY_COUNT(sHoundoomGfx107)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx108[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_108.4bpp.lz");
static const ax_sprite sHoundoomSprites108[] = {
	{sHoundoomGfx108, ARRAY_COUNT(sHoundoomGfx108)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx109[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_109.4bpp.lz");
static const ax_sprite sHoundoomSprites109[] = {
	{sHoundoomGfx109, ARRAY_COUNT(sHoundoomGfx109)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx110[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_110.4bpp.lz");
static const ax_sprite sHoundoomSprites110[] = {
	{sHoundoomGfx110, ARRAY_COUNT(sHoundoomGfx110)}, 
	{NULL, 0}
};
static const u8 sHoundoomGfx111[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/houndoom/sprite_111.4bpp.lz");
static const ax_sprite sHoundoomSprites111[] = {
	{sHoundoomGfx111, ARRAY_COUNT(sHoundoomGfx111)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesHoundoom[] = {
	sHoundoomPose1,
	sHoundoomPose2,
	sHoundoomPose3,
	sHoundoomPose4,
	sHoundoomPose5,
	sHoundoomPose6,
	sHoundoomPose7,
	sHoundoomPose8,
	sHoundoomPose9,
	sHoundoomPose10,
	sHoundoomPose11,
	sHoundoomPose12,
	sHoundoomPose13,
	sHoundoomPose14,
	sHoundoomPose15,
	sHoundoomPose16,
	sHoundoomPose17,
	sHoundoomPose18,
	sHoundoomPose19,
	sHoundoomPose20,
	sHoundoomPose21,
	sHoundoomPose22,
	sHoundoomPose23,
	sHoundoomPose24,
	sHoundoomPose1,
	sHoundoomPose2,
	sHoundoomPose3,
	sHoundoomPose28,
	sHoundoomPose4,
	sHoundoomPose5,
	sHoundoomPose6,
	sHoundoomPose32,
	sHoundoomPose7,
	sHoundoomPose8,
	sHoundoomPose9,
	sHoundoomPose36,
	sHoundoomPose10,
	sHoundoomPose11,
	sHoundoomPose12,
	sHoundoomPose40,
	sHoundoomPose13,
	sHoundoomPose14,
	sHoundoomPose15,
	sHoundoomPose44,
	sHoundoomPose16,
	sHoundoomPose17,
	sHoundoomPose18,
	sHoundoomPose48,
	sHoundoomPose19,
	sHoundoomPose20,
	sHoundoomPose21,
	sHoundoomPose52,
	sHoundoomPose22,
	sHoundoomPose23,
	sHoundoomPose24,
	sHoundoomPose56,
	sHoundoomPose1,
	sHoundoomPose2,
	sHoundoomPose3,
	sHoundoomPose28,
	sHoundoomPose4,
	sHoundoomPose5,
	sHoundoomPose6,
	sHoundoomPose32,
	sHoundoomPose7,
	sHoundoomPose8,
	sHoundoomPose9,
	sHoundoomPose36,
	sHoundoomPose10,
	sHoundoomPose11,
	sHoundoomPose12,
	sHoundoomPose40,
	sHoundoomPose13,
	sHoundoomPose14,
	sHoundoomPose15,
	sHoundoomPose44,
	sHoundoomPose16,
	sHoundoomPose17,
	sHoundoomPose18,
	sHoundoomPose48,
	sHoundoomPose19,
	sHoundoomPose20,
	sHoundoomPose21,
	sHoundoomPose52,
	sHoundoomPose22,
	sHoundoomPose23,
	sHoundoomPose24,
	sHoundoomPose56,
	sHoundoomPose1,
	sHoundoomPose2,
	sHoundoomPose91,
	sHoundoomPose28,
	sHoundoomPose93,
	sHoundoomPose4,
	sHoundoomPose5,
	sHoundoomPose96,
	sHoundoomPose32,
	sHoundoomPose98,
	sHoundoomPose7,
	sHoundoomPose8,
	sHoundoomPose101,
	sHoundoomPose36,
	sHoundoomPose103,
	sHoundoomPose10,
	sHoundoomPose11,
	sHoundoomPose106,
	sHoundoomPose40,
	sHoundoomPose108,
	sHoundoomPose13,
	sHoundoomPose14,
	sHoundoomPose111,
	sHoundoomPose44,
	sHoundoomPose113,
	sHoundoomPose16,
	sHoundoomPose17,
	sHoundoomPose116,
	sHoundoomPose48,
	sHoundoomPose118,
	sHoundoomPose19,
	sHoundoomPose20,
	sHoundoomPose121,
	sHoundoomPose52,
	sHoundoomPose123,
	sHoundoomPose22,
	sHoundoomPose23,
	sHoundoomPose126,
	sHoundoomPose56,
	sHoundoomPose128,
	sHoundoomPose1,
	sHoundoomPose91,
	sHoundoomPose4,
	sHoundoomPose96,
	sHoundoomPose7,
	sHoundoomPose101,
	sHoundoomPose10,
	sHoundoomPose106,
	sHoundoomPose13,
	sHoundoomPose111,
	sHoundoomPose16,
	sHoundoomPose116,
	sHoundoomPose19,
	sHoundoomPose121,
	sHoundoomPose22,
	sHoundoomPose126,
	sHoundoomPose145,
	sHoundoomPose146,
	sHoundoomPose147,
	sHoundoomPose148,
	sHoundoomPose149,
	sHoundoomPose150,
	sHoundoomPose151,
	sHoundoomPose152,
	sHoundoomPose153,
	sHoundoomPose154,
	sHoundoomPose1,
	sHoundoomPose2,
	sHoundoomPose91,
	sHoundoomPose28,
	sHoundoomPose93,
	sHoundoomPose4,
	sHoundoomPose5,
	sHoundoomPose96,
	sHoundoomPose32,
	sHoundoomPose98,
	sHoundoomPose7,
	sHoundoomPose8,
	sHoundoomPose101,
	sHoundoomPose36,
	sHoundoomPose103,
	sHoundoomPose10,
	sHoundoomPose11,
	sHoundoomPose106,
	sHoundoomPose40,
	sHoundoomPose108,
	sHoundoomPose13,
	sHoundoomPose14,
	sHoundoomPose111,
	sHoundoomPose44,
	sHoundoomPose113,
	sHoundoomPose16,
	sHoundoomPose17,
	sHoundoomPose116,
	sHoundoomPose48,
	sHoundoomPose118,
	sHoundoomPose19,
	sHoundoomPose20,
	sHoundoomPose121,
	sHoundoomPose52,
	sHoundoomPose123,
	sHoundoomPose22,
	sHoundoomPose23,
	sHoundoomPose126,
	sHoundoomPose56,
	sHoundoomPose128,
	sHoundoomPose28,
	sHoundoomPose56,
	sHoundoomPose52,
	sHoundoomPose48,
	sHoundoomPose44,
	sHoundoomPose40,
	sHoundoomPose36,
	sHoundoomPose32,
	sHoundoomPose203,
	sHoundoomPose204,
	sHoundoomPose205,
	sHoundoomPose206,
	sHoundoomPose207,
	sHoundoomPose208,
	sHoundoomPose209,
	sHoundoomPose210,
	sHoundoomPose1,
	sHoundoomPose91,
	sHoundoomPose28,
	sHoundoomPose4,
	sHoundoomPose96,
	sHoundoomPose32,
	sHoundoomPose7,
	sHoundoomPose101,
	sHoundoomPose219,
	sHoundoomPose10,
	sHoundoomPose106,
	sHoundoomPose222,
	sHoundoomPose13,
	sHoundoomPose111,
	sHoundoomPose44,
	sHoundoomPose16,
	sHoundoomPose116,
	sHoundoomPose228,
	sHoundoomPose19,
	sHoundoomPose121,
	sHoundoomPose231,
	sHoundoomPose22,
	sHoundoomPose126,
	sHoundoomPose56,
	sHoundoomPose28,
	sHoundoomPose56,
	sHoundoomPose52,
	sHoundoomPose48,
	sHoundoomPose44,
	sHoundoomPose40,
	sHoundoomPose36,
	sHoundoomPose32,
	sHoundoomPose1,
	sHoundoomPose22,
	sHoundoomPose19,
	sHoundoomPose16,
	sHoundoomPose13,
	sHoundoomPose10,
	sHoundoomPose7,
	sHoundoomPose4,
};

static const struct PositionSets sAxPositionsHoundoom[] = {
	[0] = { .set = { {-1, -8}, {-6, 4}, {4, 4}, {-1, -7} } },
	[1] = { .set = { {-1, -6}, {-5, 7}, {2, 1}, {-1, -7} } },
	[2] = { .set = { {-1, -6}, {-4, 1}, {3, 7}, {-1, -7} } },
	[3] = { .set = { {9, -9}, {8, 2}, {1, 5}, {0, -8} } },
	[4] = { .set = { {9, -7}, {9, 4}, {-3, 4}, {0, -7} } },
	[5] = { .set = { {9, -7}, {5, 1}, {4, 8}, {0, -6} } },
	[6] = { .set = { {13, -15}, {8, -5}, {7, 1}, {2, -10} } },
	[7] = { .set = { {13, -13}, {9, -4}, {1, 2}, {1, -9} } },
	[8] = { .set = { {13, -13}, {-1, -4}, {11, 2}, {4, -8} } },
	[9] = { .set = { {10, -21}, {2, -8}, {7, -4}, {1, -13} } },
	[10] = { .set = { {10, -20}, {1, -8}, {2, -1}, {-1, -12} } },
	[11] = { .set = { {9, -20}, {-1, -6}, {8, -5}, {1, -12} } },
	[12] = { .set = { {0, -22}, {5, -4}, {-5, -4}, {0, -12} } },
	[13] = { .set = { {0, -20}, {6, -8}, {-5, -4}, {1, -11} } },
	[14] = { .set = { {0, -20}, {5, -4}, {-6, -8}, {-1, -11} } },
	[15] = { .set = { {-11, -21}, {-3, -8}, {-8, -4}, {-2, -13} } },
	[16] = { .set = { {-11, -20}, {-2, -8}, {-3, -1}, {0, -12} } },
	[17] = { .set = { {-10, -20}, {0, -6}, {-9, -5}, {-2, -12} } },
	[18] = { .set = { {-14, -15}, {-9, -5}, {-8, 1}, {-3, -10} } },
	[19] = { .set = { {-14, -13}, {-10, -4}, {-2, 2}, {-2, -9} } },
	[20] = { .set = { {-14, -13}, {0, -4}, {-12, 2}, {-5, -8} } },
	[21] = { .set = { {-10, -9}, {-9, 2}, {-2, 5}, {-1, -8} } },
	[22] = { .set = { {-10, -7}, {-10, 4}, {2, 4}, {-1, -7} } },
	[23] = { .set = { {-10, -7}, {-6, 1}, {-5, 8}, {-1, -6} } },
	[24] = { .set = { {-1, -8}, {-6, 4}, {4, 4}, {-1, -7} } },
	[25] = { .set = { {-1, -6}, {-5, 7}, {2, 1}, {-1, -7} } },
	[26] = { .set = { {-1, -6}, {-4, 1}, {3, 7}, {-1, -7} } },
	[27] = { .set = { {-1, -7}, {-7, 4}, {5, 4}, {-1, -8} } },
	[28] = { .set = { {9, -9}, {8, 2}, {1, 5}, {0, -8} } },
	[29] = { .set = { {9, -7}, {9, 4}, {-3, 4}, {0, -7} } },
	[30] = { .set = { {9, -7}, {5, 1}, {4, 8}, {0, -6} } },
	[31] = { .set = { {8, -8}, {8, 2}, {1, 5}, {0, -9} } },
	[32] = { .set = { {13, -15}, {8, -5}, {7, 1}, {2, -10} } },
	[33] = { .set = { {13, -13}, {9, -4}, {1, 2}, {1, -9} } },
	[34] = { .set = { {13, -13}, {-1, -4}, {11, 2}, {4, -8} } },
	[35] = { .set = { {15, -16}, {8, -5}, {7, 1}, {2, -11} } },
	[36] = { .set = { {10, -21}, {2, -8}, {7, -4}, {1, -13} } },
	[37] = { .set = { {10, -20}, {1, -8}, {2, -1}, {-1, -12} } },
	[38] = { .set = { {9, -20}, {-1, -6}, {8, -5}, {1, -12} } },
	[39] = { .set = { {11, -21}, {3, -8}, {6, -4}, {0, -13} } },
	[40] = { .set = { {0, -22}, {5, -4}, {-5, -4}, {0, -12} } },
	[41] = { .set = { {0, -20}, {6, -8}, {-5, -4}, {1, -11} } },
	[42] = { .set = { {0, -20}, {5, -4}, {-6, -8}, {-1, -11} } },
	[43] = { .set = { {0, -28}, {5, -5}, {-5, -5}, {0, -12} } },
	[44] = { .set = { {-11, -21}, {-3, -8}, {-8, -4}, {-2, -13} } },
	[45] = { .set = { {-11, -20}, {-2, -8}, {-3, -1}, {0, -12} } },
	[46] = { .set = { {-10, -20}, {0, -6}, {-9, -5}, {-2, -12} } },
	[47] = { .set = { {-12, -21}, {-4, -8}, {-7, -4}, {-1, -13} } },
	[48] = { .set = { {-14, -15}, {-9, -5}, {-8, 1}, {-3, -10} } },
	[49] = { .set = { {-14, -13}, {-10, -4}, {-2, 2}, {-2, -9} } },
	[50] = { .set = { {-14, -13}, {0, -4}, {-12, 2}, {-5, -8} } },
	[51] = { .set = { {-16, -16}, {-9, -5}, {-8, 1}, {-3, -11} } },
	[52] = { .set = { {-10, -9}, {-9, 2}, {-2, 5}, {-1, -8} } },
	[53] = { .set = { {-10, -7}, {-10, 4}, {2, 4}, {-1, -7} } },
	[54] = { .set = { {-10, -7}, {-6, 1}, {-5, 8}, {-1, -6} } },
	[55] = { .set = { {-9, -8}, {-9, 2}, {-2, 5}, {-1, -9} } },
	[56] = { .set = { {-1, -8}, {-6, 4}, {4, 4}, {-1, -7} } },
	[57] = { .set = { {-1, -6}, {-5, 7}, {2, 1}, {-1, -7} } },
	[58] = { .set = { {-1, -6}, {-4, 1}, {3, 7}, {-1, -7} } },
	[59] = { .set = { {-1, -7}, {-7, 4}, {5, 4}, {-1, -8} } },
	[60] = { .set = { {9, -9}, {8, 2}, {1, 5}, {0, -8} } },
	[61] = { .set = { {9, -7}, {9, 4}, {-3, 4}, {0, -7} } },
	[62] = { .set = { {9, -7}, {5, 1}, {4, 8}, {0, -6} } },
	[63] = { .set = { {8, -8}, {8, 2}, {1, 5}, {0, -9} } },
	[64] = { .set = { {13, -15}, {8, -5}, {7, 1}, {2, -10} } },
	[65] = { .set = { {13, -13}, {9, -4}, {1, 2}, {1, -9} } },
	[66] = { .set = { {13, -13}, {-1, -4}, {11, 2}, {4, -8} } },
	[67] = { .set = { {15, -16}, {8, -5}, {7, 1}, {2, -11} } },
	[68] = { .set = { {10, -21}, {2, -8}, {7, -4}, {1, -13} } },
	[69] = { .set = { {10, -20}, {1, -8}, {2, -1}, {-1, -12} } },
	[70] = { .set = { {9, -20}, {-1, -6}, {8, -5}, {1, -12} } },
	[71] = { .set = { {11, -21}, {3, -8}, {6, -4}, {0, -13} } },
	[72] = { .set = { {0, -22}, {5, -4}, {-5, -4}, {0, -12} } },
	[73] = { .set = { {0, -20}, {6, -8}, {-5, -4}, {1, -11} } },
	[74] = { .set = { {0, -20}, {5, -4}, {-6, -8}, {-1, -11} } },
	[75] = { .set = { {0, -28}, {5, -5}, {-5, -5}, {0, -12} } },
	[76] = { .set = { {-11, -21}, {-3, -8}, {-8, -4}, {-2, -13} } },
	[77] = { .set = { {-11, -20}, {-2, -8}, {-3, -1}, {0, -12} } },
	[78] = { .set = { {-10, -20}, {0, -6}, {-9, -5}, {-2, -12} } },
	[79] = { .set = { {-12, -21}, {-4, -8}, {-7, -4}, {-1, -13} } },
	[80] = { .set = { {-14, -15}, {-9, -5}, {-8, 1}, {-3, -10} } },
	[81] = { .set = { {-14, -13}, {-10, -4}, {-2, 2}, {-2, -9} } },
	[82] = { .set = { {-14, -13}, {0, -4}, {-12, 2}, {-5, -8} } },
	[83] = { .set = { {-16, -16}, {-9, -5}, {-8, 1}, {-3, -11} } },
	[84] = { .set = { {-10, -9}, {-9, 2}, {-2, 5}, {-1, -8} } },
	[85] = { .set = { {-10, -7}, {-10, 4}, {2, 4}, {-1, -7} } },
	[86] = { .set = { {-10, -7}, {-6, 1}, {-5, 8}, {-1, -6} } },
	[87] = { .set = { {-9, -8}, {-9, 2}, {-2, 5}, {-1, -9} } },
	[88] = { .set = { {-1, -8}, {-6, 4}, {4, 4}, {-1, -7} } },
	[89] = { .set = { {-1, -6}, {-5, 7}, {2, 1}, {-1, -7} } },
	[90] = { .set = { {-1, -24}, {-6, 4}, {4, 4}, {-1, -10} } },
	[91] = { .set = { {-1, -7}, {-7, 4}, {5, 4}, {-1, -8} } },
	[92] = { .set = { {-1, -11}, {-6, 3}, {4, 3}, {-1, -10} } },
	[93] = { .set = { {9, -9}, {8, 2}, {1, 5}, {0, -8} } },
	[94] = { .set = { {9, -7}, {9, 4}, {-3, 4}, {0, -7} } },
	[95] = { .set = { {7, -20}, {8, 2}, {1, 5}, {-1, -10} } },
	[96] = { .set = { {8, -8}, {8, 2}, {1, 5}, {0, -9} } },
	[97] = { .set = { {6, -14}, {6, 0}, {0, 3}, {-2, -10} } },
	[98] = { .set = { {13, -15}, {8, -5}, {7, 1}, {2, -10} } },
	[99] = { .set = { {13, -13}, {9, -4}, {1, 2}, {1, -9} } },
	[100] = { .set = { {9, -28}, {7, -5}, {6, 1}, {0, -10} } },
	[101] = { .set = { {15, -16}, {8, -5}, {7, 1}, {2, -11} } },
	[102] = { .set = { {9, -18}, {6, -6}, {5, 1}, {-1, -10} } },
	[103] = { .set = { {10, -21}, {2, -8}, {7, -4}, {1, -13} } },
	[104] = { .set = { {10, -20}, {1, -8}, {2, -1}, {-1, -12} } },
	[105] = { .set = { {9, -28}, {4, -6}, {6, -4}, {-2, -11} } },
	[106] = { .set = { {11, -21}, {3, -8}, {6, -4}, {0, -13} } },
	[107] = { .set = { {7, -23}, {0, -5}, {5, -3}, {-3, -12} } },
	[108] = { .set = { {0, -22}, {5, -4}, {-5, -4}, {0, -12} } },
	[109] = { .set = { {0, -20}, {6, -8}, {-5, -4}, {1, -11} } },
	[110] = { .set = { {0, -32}, {5, -5}, {-5, -5}, {0, -11} } },
	[111] = { .set = { {0, -28}, {5, -5}, {-5, -5}, {0, -12} } },
	[112] = { .set = { {0, -25}, {5, -4}, {-5, -4}, {0, -13} } },
	[113] = { .set = { {-11, -21}, {-3, -8}, {-8, -4}, {-2, -13} } },
	[114] = { .set = { {-11, -20}, {-2, -8}, {-3, -1}, {0, -12} } },
	[115] = { .set = { {-10, -28}, {-5, -6}, {-7, -4}, {1, -11} } },
	[116] = { .set = { {-12, -21}, {-4, -8}, {-7, -4}, {-1, -13} } },
	[117] = { .set = { {-8, -23}, {-1, -5}, {-6, -3}, {2, -12} } },
	[118] = { .set = { {-14, -15}, {-9, -5}, {-8, 1}, {-3, -10} } },
	[119] = { .set = { {-14, -13}, {-10, -4}, {-2, 2}, {-2, -9} } },
	[120] = { .set = { {-10, -28}, {-8, -5}, {-7, 1}, {-1, -10} } },
	[121] = { .set = { {-16, -16}, {-9, -5}, {-8, 1}, {-3, -11} } },
	[122] = { .set = { {-10, -18}, {-7, -6}, {-6, 1}, {0, -10} } },
	[123] = { .set = { {-10, -9}, {-9, 2}, {-2, 5}, {-1, -8} } },
	[124] = { .set = { {-10, -7}, {-10, 4}, {2, 4}, {-1, -7} } },
	[125] = { .set = { {-8, -20}, {-9, 2}, {-2, 5}, {0, -10} } },
	[126] = { .set = { {-9, -8}, {-9, 2}, {-2, 5}, {-1, -9} } },
	[127] = { .set = { {-7, -14}, {-7, 0}, {-1, 3}, {1, -10} } },
	[128] = { .set = { {-1, -8}, {-6, 4}, {4, 4}, {-1, -7} } },
	[129] = { .set = { {-1, -24}, {-6, 4}, {4, 4}, {-1, -10} } },
	[130] = { .set = { {9, -9}, {8, 2}, {1, 5}, {0, -8} } },
	[131] = { .set = { {7, -20}, {8, 2}, {1, 5}, {-1, -10} } },
	[132] = { .set = { {13, -15}, {8, -5}, {7, 1}, {2, -10} } },
	[133] = { .set = { {9, -28}, {7, -5}, {6, 1}, {0, -10} } },
	[134] = { .set = { {10, -21}, {2, -8}, {7, -4}, {1, -13} } },
	[135] = { .set = { {9, -28}, {4, -6}, {6, -4}, {-2, -11} } },
	[136] = { .set = { {0, -22}, {5, -4}, {-5, -4}, {0, -12} } },
	[137] = { .set = { {0, -32}, {5, -5}, {-5, -5}, {0, -11} } },
	[138] = { .set = { {-11, -21}, {-3, -8}, {-8, -4}, {-2, -13} } },
	[139] = { .set = { {-10, -28}, {-5, -6}, {-7, -4}, {1, -11} } },
	[140] = { .set = { {-14, -15}, {-9, -5}, {-8, 1}, {-3, -10} } },
	[141] = { .set = { {-10, -28}, {-8, -5}, {-7, 1}, {-1, -10} } },
	[142] = { .set = { {-10, -9}, {-9, 2}, {-2, 5}, {-1, -8} } },
	[143] = { .set = { {-8, -20}, {-9, 2}, {-2, 5}, {0, -10} } },
	[144] = { .set = { {-11, -2}, {-11, 0}, {-9, 2}, {0, -5} } },
	[145] = { .set = { {-11, -2}, {-11, 0}, {-9, 2}, {0, -5} } },
	[146] = { .set = { {-2, -5}, {-7, 3}, {8, 5}, {0, -7} } },
	[147] = { .set = { {11, -7}, {12, -1}, {2, 3}, {2, -10} } },
	[148] = { .set = { {13, -11}, {9, -6}, {8, 1}, {3, -10} } },
	[149] = { .set = { {11, -17}, {4, -8}, {9, -3}, {1, -13} } },
	[150] = { .set = { {3, -17}, {5, -6}, {-7, -6}, {-1, -10} } },
	[151] = { .set = { {-13, -17}, {-6, -8}, {-11, -3}, {-3, -13} } },
	[152] = { .set = { {-13, -11}, {-9, -6}, {-8, 1}, {-3, -10} } },
	[153] = { .set = { {-10, -7}, {-11, -1}, {-1, 3}, {-1, -10} } },
	[154] = { .set = { {-1, -8}, {-6, 4}, {4, 4}, {-1, -7} } },
	[155] = { .set = { {-1, -6}, {-5, 7}, {2, 1}, {-1, -7} } },
	[156] = { .set = { {-1, -24}, {-6, 4}, {4, 4}, {-1, -10} } },
	[157] = { .set = { {-1, -7}, {-7, 4}, {5, 4}, {-1, -8} } },
	[158] = { .set = { {-1, -11}, {-6, 3}, {4, 3}, {-1, -10} } },
	[159] = { .set = { {9, -9}, {8, 2}, {1, 5}, {0, -8} } },
	[160] = { .set = { {9, -7}, {9, 4}, {-3, 4}, {0, -7} } },
	[161] = { .set = { {7, -20}, {8, 2}, {1, 5}, {-1, -10} } },
	[162] = { .set = { {8, -8}, {8, 2}, {1, 5}, {0, -9} } },
	[163] = { .set = { {6, -14}, {6, 0}, {0, 3}, {-2, -10} } },
	[164] = { .set = { {13, -15}, {8, -5}, {7, 1}, {2, -10} } },
	[165] = { .set = { {13, -13}, {9, -4}, {1, 2}, {1, -9} } },
	[166] = { .set = { {9, -28}, {7, -5}, {6, 1}, {0, -10} } },
	[167] = { .set = { {15, -16}, {8, -5}, {7, 1}, {2, -11} } },
	[168] = { .set = { {9, -18}, {6, -6}, {5, 1}, {-1, -10} } },
	[169] = { .set = { {10, -21}, {2, -8}, {7, -4}, {1, -13} } },
	[170] = { .set = { {10, -20}, {1, -8}, {2, -1}, {-1, -12} } },
	[171] = { .set = { {9, -28}, {4, -6}, {6, -4}, {-2, -11} } },
	[172] = { .set = { {11, -21}, {3, -8}, {6, -4}, {0, -13} } },
	[173] = { .set = { {7, -23}, {0, -5}, {5, -3}, {-3, -12} } },
	[174] = { .set = { {0, -22}, {5, -4}, {-5, -4}, {0, -12} } },
	[175] = { .set = { {0, -20}, {6, -8}, {-5, -4}, {1, -11} } },
	[176] = { .set = { {0, -32}, {5, -5}, {-5, -5}, {0, -11} } },
	[177] = { .set = { {0, -28}, {5, -5}, {-5, -5}, {0, -12} } },
	[178] = { .set = { {0, -25}, {5, -4}, {-5, -4}, {0, -13} } },
	[179] = { .set = { {-11, -21}, {-3, -8}, {-8, -4}, {-2, -13} } },
	[180] = { .set = { {-11, -20}, {-2, -8}, {-3, -1}, {0, -12} } },
	[181] = { .set = { {-10, -28}, {-5, -6}, {-7, -4}, {1, -11} } },
	[182] = { .set = { {-12, -21}, {-4, -8}, {-7, -4}, {-1, -13} } },
	[183] = { .set = { {-8, -23}, {-1, -5}, {-6, -3}, {2, -12} } },
	[184] = { .set = { {-14, -15}, {-9, -5}, {-8, 1}, {-3, -10} } },
	[185] = { .set = { {-14, -13}, {-10, -4}, {-2, 2}, {-2, -9} } },
	[186] = { .set = { {-10, -28}, {-8, -5}, {-7, 1}, {-1, -10} } },
	[187] = { .set = { {-16, -16}, {-9, -5}, {-8, 1}, {-3, -11} } },
	[188] = { .set = { {-10, -18}, {-7, -6}, {-6, 1}, {0, -10} } },
	[189] = { .set = { {-10, -9}, {-9, 2}, {-2, 5}, {-1, -8} } },
	[190] = { .set = { {-10, -7}, {-10, 4}, {2, 4}, {-1, -7} } },
	[191] = { .set = { {-8, -20}, {-9, 2}, {-2, 5}, {0, -10} } },
	[192] = { .set = { {-9, -8}, {-9, 2}, {-2, 5}, {-1, -9} } },
	[193] = { .set = { {-7, -14}, {-7, 0}, {-1, 3}, {1, -10} } },
	[194] = { .set = { {-1, -7}, {-7, 4}, {5, 4}, {-1, -8} } },
	[195] = { .set = { {-9, -8}, {-9, 2}, {-2, 5}, {-1, -9} } },
	[196] = { .set = { {-16, -16}, {-9, -5}, {-8, 1}, {-3, -11} } },
	[197] = { .set = { {-12, -21}, {-4, -8}, {-7, -4}, {-1, -13} } },
	[198] = { .set = { {0, -28}, {5, -5}, {-5, -5}, {0, -12} } },
	[199] = { .set = { {11, -21}, {3, -8}, {6, -4}, {0, -13} } },
	[200] = { .set = { {15, -16}, {8, -5}, {7, 1}, {2, -11} } },
	[201] = { .set = { {8, -8}, {8, 2}, {1, 5}, {0, -9} } },
	[202] = { .set = { {-1, -23}, {-6, 5}, {4, 5}, {-1, -9} } },
	[203] = { .set = { {7, -21}, {8, 1}, {1, 4}, {-1, -11} } },
	[204] = { .set = { {10, -28}, {8, -5}, {7, 1}, {1, -10} } },
	[205] = { .set = { {10, -27}, {5, -5}, {7, -3}, {-1, -10} } },
	[206] = { .set = { {0, -31}, {5, -4}, {-5, -4}, {0, -10} } },
	[207] = { .set = { {-11, -27}, {-6, -5}, {-8, -3}, {0, -10} } },
	[208] = { .set = { {-11, -28}, {-9, -5}, {-8, 1}, {-2, -10} } },
	[209] = { .set = { {-8, -21}, {-9, 1}, {-2, 4}, {0, -11} } },
	[210] = { .set = { {-1, -8}, {-6, 4}, {4, 4}, {-1, -7} } },
	[211] = { .set = { {-1, -24}, {-6, 4}, {4, 4}, {-1, -10} } },
	[212] = { .set = { {-1, -7}, {-7, 4}, {5, 4}, {-1, -8} } },
	[213] = { .set = { {9, -9}, {8, 2}, {1, 5}, {0, -8} } },
	[214] = { .set = { {7, -20}, {8, 2}, {1, 5}, {-1, -10} } },
	[215] = { .set = { {8, -8}, {8, 2}, {1, 5}, {0, -9} } },
	[216] = { .set = { {13, -15}, {8, -5}, {7, 1}, {2, -10} } },
	[217] = { .set = { {9, -28}, {7, -5}, {6, 1}, {0, -10} } },
	[218] = { .set = { {14, -16}, {7, -5}, {6, 1}, {1, -11} } },
	[219] = { .set = { {10, -21}, {2, -8}, {7, -4}, {1, -13} } },
	[220] = { .set = { {9, -28}, {4, -6}, {6, -4}, {-2, -11} } },
	[221] = { .set = { {10, -21}, {2, -8}, {5, -4}, {-1, -13} } },
	[222] = { .set = { {0, -22}, {5, -4}, {-5, -4}, {0, -12} } },
	[223] = { .set = { {0, -32}, {5, -5}, {-5, -5}, {0, -11} } },
	[224] = { .set = { {0, -28}, {5, -5}, {-5, -5}, {0, -12} } },
	[225] = { .set = { {-11, -21}, {-3, -8}, {-8, -4}, {-2, -13} } },
	[226] = { .set = { {-10, -28}, {-5, -6}, {-7, -4}, {1, -11} } },
	[227] = { .set = { {-11, -21}, {-3, -8}, {-6, -4}, {0, -13} } },
	[228] = { .set = { {-14, -15}, {-9, -5}, {-8, 1}, {-3, -10} } },
	[229] = { .set = { {-10, -28}, {-8, -5}, {-7, 1}, {-1, -10} } },
	[230] = { .set = { {-15, -16}, {-8, -5}, {-7, 1}, {-2, -11} } },
	[231] = { .set = { {-10, -9}, {-9, 2}, {-2, 5}, {-1, -8} } },
	[232] = { .set = { {-8, -20}, {-9, 2}, {-2, 5}, {0, -10} } },
	[233] = { .set = { {-9, -8}, {-9, 2}, {-2, 5}, {-1, -9} } },
	[234] = { .set = { {-1, -7}, {-7, 4}, {5, 4}, {-1, -8} } },
	[235] = { .set = { {-9, -8}, {-9, 2}, {-2, 5}, {-1, -9} } },
	[236] = { .set = { {-16, -16}, {-9, -5}, {-8, 1}, {-3, -11} } },
	[237] = { .set = { {-12, -21}, {-4, -8}, {-7, -4}, {-1, -13} } },
	[238] = { .set = { {0, -28}, {5, -5}, {-5, -5}, {0, -12} } },
	[239] = { .set = { {11, -21}, {3, -8}, {6, -4}, {0, -13} } },
	[240] = { .set = { {15, -16}, {8, -5}, {7, 1}, {2, -11} } },
	[241] = { .set = { {8, -8}, {8, 2}, {1, 5}, {0, -9} } },
	[242] = { .set = { {-1, -8}, {-6, 4}, {4, 4}, {-1, -7} } },
	[243] = { .set = { {-10, -9}, {-9, 2}, {-2, 5}, {-1, -8} } },
	[244] = { .set = { {-14, -15}, {-9, -5}, {-8, 1}, {-3, -10} } },
	[245] = { .set = { {-11, -21}, {-3, -8}, {-8, -4}, {-2, -13} } },
	[246] = { .set = { {0, -22}, {5, -4}, {-5, -4}, {0, -12} } },
	[247] = { .set = { {10, -21}, {2, -8}, {7, -4}, {1, -13} } },
	[248] = { .set = { {13, -15}, {8, -5}, {7, 1}, {2, -10} } },
	[249] = { .set = { {9, -9}, {8, 2}, {1, 5}, {0, -8} } },
};

static const ax_anim *const sHoundoomAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02603),
	AX_ANIM_PTR(gAxSharedAnim_02679),
	AX_ANIM_PTR(gAxSharedAnim_02688),
	AX_ANIM_PTR(gAxSharedAnim_02697),
	AX_ANIM_PTR(gAxSharedAnim_02615),
	AX_ANIM_PTR(gAxSharedAnim_02637),
	AX_ANIM_PTR(gAxSharedAnim_02650),
	AX_ANIM_PTR(gAxSharedAnim_02659),
};

static const ax_anim *const sHoundoomAnimTable2[] = {
	AX_ANIM_PTR(sHoundoomAnims_2_1),
	AX_ANIM_PTR(sHoundoomAnims_2_2),
	AX_ANIM_PTR(sHoundoomAnims_2_3),
	AX_ANIM_PTR(sHoundoomAnims_2_4),
	AX_ANIM_PTR(sHoundoomAnims_2_5),
	AX_ANIM_PTR(sHoundoomAnims_2_6),
	AX_ANIM_PTR(sHoundoomAnims_2_7),
	AX_ANIM_PTR(sHoundoomAnims_2_8),
};

static const ax_anim *const sHoundoomAnimTable3[] = {
	AX_ANIM_PTR(sHoundoomAnims_3_1),
	AX_ANIM_PTR(sHoundoomAnims_3_2),
	AX_ANIM_PTR(sHoundoomAnims_3_3),
	AX_ANIM_PTR(sHoundoomAnims_3_4),
	AX_ANIM_PTR(sHoundoomAnims_3_5),
	AX_ANIM_PTR(sHoundoomAnims_3_6),
	AX_ANIM_PTR(sHoundoomAnims_3_7),
	AX_ANIM_PTR(sHoundoomAnims_3_8),
};

static const ax_anim *const sHoundoomAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_02562),
	AX_ANIM_PTR(gAxSharedAnim_02567),
	AX_ANIM_PTR(gAxSharedAnim_02481),
	AX_ANIM_PTR(gAxSharedAnim_02486),
	AX_ANIM_PTR(gAxSharedAnim_02489),
	AX_ANIM_PTR(gAxSharedAnim_02492),
	AX_ANIM_PTR(gAxSharedAnim_02501),
	AX_ANIM_PTR(gAxSharedAnim_02502),
};

static const ax_anim *const sHoundoomAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00046),
	AX_ANIM_PTR(gAxSharedAnim_00047),
	AX_ANIM_PTR(gAxSharedAnim_00048),
	AX_ANIM_PTR(gAxSharedAnim_00049),
	AX_ANIM_PTR(gAxSharedAnim_00050),
	AX_ANIM_PTR(gAxSharedAnim_00051),
	AX_ANIM_PTR(gAxSharedAnim_00052),
	AX_ANIM_PTR(gAxSharedAnim_00053),
};

static const ax_anim *const sHoundoomAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
};

static const ax_anim *const sHoundoomAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00532),
	AX_ANIM_PTR(gAxSharedAnim_00544),
	AX_ANIM_PTR(gAxSharedAnim_00552),
	AX_ANIM_PTR(gAxSharedAnim_00560),
	AX_ANIM_PTR(gAxSharedAnim_00578),
	AX_ANIM_PTR(gAxSharedAnim_00588),
	AX_ANIM_PTR(gAxSharedAnim_00597),
	AX_ANIM_PTR(gAxSharedAnim_00603),
};

static const ax_anim *const sHoundoomAnimTable8[] = {
	AX_ANIM_PTR(gAxSharedAnim_02577),
	AX_ANIM_PTR(gAxSharedAnim_02579),
	AX_ANIM_PTR(gAxSharedAnim_02580),
	AX_ANIM_PTR(gAxSharedAnim_02581),
	AX_ANIM_PTR(gAxSharedAnim_02583),
	AX_ANIM_PTR(gAxSharedAnim_02586),
	AX_ANIM_PTR(gAxSharedAnim_02588),
	AX_ANIM_PTR(gAxSharedAnim_02591),
};

static const ax_anim *const sHoundoomAnimTable9[] = {
	AX_ANIM_PTR(sHoundoomAnims_9_1),
	AX_ANIM_PTR(sHoundoomAnims_9_2),
	AX_ANIM_PTR(sHoundoomAnims_9_3),
	AX_ANIM_PTR(sHoundoomAnims_9_4),
	AX_ANIM_PTR(sHoundoomAnims_9_5),
	AX_ANIM_PTR(sHoundoomAnims_9_6),
	AX_ANIM_PTR(sHoundoomAnims_9_7),
	AX_ANIM_PTR(sHoundoomAnims_9_8),
};

static const ax_anim *const sHoundoomAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01241),
	AX_ANIM_PTR(gAxSharedAnim_01252),
	AX_ANIM_PTR(gAxSharedAnim_01266),
	AX_ANIM_PTR(gAxSharedAnim_01277),
	AX_ANIM_PTR(gAxSharedAnim_01285),
	AX_ANIM_PTR(gAxSharedAnim_01300),
	AX_ANIM_PTR(gAxSharedAnim_01313),
	AX_ANIM_PTR(gAxSharedAnim_01324),
};

static const ax_anim *const sHoundoomAnimTable11[] = {
	AX_ANIM_PTR(sHoundoomAnims_11_1),
	AX_ANIM_PTR(sHoundoomAnims_11_2),
	AX_ANIM_PTR(sHoundoomAnims_11_3),
	AX_ANIM_PTR(sHoundoomAnims_11_4),
	AX_ANIM_PTR(sHoundoomAnims_11_5),
	AX_ANIM_PTR(sHoundoomAnims_11_6),
	AX_ANIM_PTR(sHoundoomAnims_11_7),
	AX_ANIM_PTR(sHoundoomAnims_11_8),
};

static const ax_anim *const sHoundoomAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01526),
	AX_ANIM_PTR(gAxSharedAnim_01581),
	AX_ANIM_PTR(gAxSharedAnim_01574),
	AX_ANIM_PTR(gAxSharedAnim_01551),
	AX_ANIM_PTR(gAxSharedAnim_01550),
	AX_ANIM_PTR(gAxSharedAnim_01545),
	AX_ANIM_PTR(gAxSharedAnim_01533),
	AX_ANIM_PTR(gAxSharedAnim_01527),
};

static const ax_anim *const sHoundoomAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01586),
	AX_ANIM_PTR(gAxSharedAnim_01624),
	AX_ANIM_PTR(gAxSharedAnim_01620),
	AX_ANIM_PTR(gAxSharedAnim_01612),
	AX_ANIM_PTR(gAxSharedAnim_01605),
	AX_ANIM_PTR(gAxSharedAnim_01602),
	AX_ANIM_PTR(gAxSharedAnim_01597),
	AX_ANIM_PTR(gAxSharedAnim_01591),
};

static const ax_anim *const *const sAxAnimationsHoundoom[] = {
	sHoundoomAnimTable1,
	sHoundoomAnimTable2,
	sHoundoomAnimTable3,
	sHoundoomAnimTable4,
	sHoundoomAnimTable5,
	sHoundoomAnimTable6,
	sHoundoomAnimTable7,
	sHoundoomAnimTable8,
	sHoundoomAnimTable9,
	sHoundoomAnimTable10,
	sHoundoomAnimTable11,
	sHoundoomAnimTable12,
	sHoundoomAnimTable13,
};

static const ax_sprite *const sAxSpritesHoundoom[] = {
	sHoundoomSprites1,
	sHoundoomSprites2,
	sHoundoomSprites3,
	sHoundoomSprites4,
	sHoundoomSprites5,
	sHoundoomSprites6,
	sHoundoomSprites7,
	sHoundoomSprites8,
	sHoundoomSprites9,
	sHoundoomSprites10,
	sHoundoomSprites11,
	sHoundoomSprites12,
	sHoundoomSprites13,
	sHoundoomSprites14,
	sHoundoomSprites15,
	sHoundoomSprites16,
	sHoundoomSprites17,
	sHoundoomSprites18,
	sHoundoomSprites19,
	sHoundoomSprites20,
	sHoundoomSprites21,
	sHoundoomSprites22,
	sHoundoomSprites23,
	sHoundoomSprites24,
	sHoundoomSprites25,
	sHoundoomSprites26,
	sHoundoomSprites27,
	sHoundoomSprites28,
	sHoundoomSprites29,
	sHoundoomSprites30,
	sHoundoomSprites31,
	sHoundoomSprites32,
	sHoundoomSprites33,
	sHoundoomSprites34,
	sHoundoomSprites35,
	sHoundoomSprites36,
	sHoundoomSprites37,
	sHoundoomSprites38,
	sHoundoomSprites39,
	sHoundoomSprites40,
	sHoundoomSprites41,
	sHoundoomSprites42,
	sHoundoomSprites43,
	sHoundoomSprites44,
	sHoundoomSprites45,
	sHoundoomSprites46,
	sHoundoomSprites47,
	sHoundoomSprites48,
	sHoundoomSprites49,
	sHoundoomSprites50,
	sHoundoomSprites51,
	sHoundoomSprites52,
	sHoundoomSprites53,
	sHoundoomSprites54,
	sHoundoomSprites55,
	sHoundoomSprites56,
	sHoundoomSprites57,
	sHoundoomSprites58,
	sHoundoomSprites59,
	sHoundoomSprites60,
	sHoundoomSprites61,
	sHoundoomSprites62,
	sHoundoomSprites63,
	sHoundoomSprites64,
	sHoundoomSprites65,
	sHoundoomSprites66,
	sHoundoomSprites67,
	sHoundoomSprites68,
	sHoundoomSprites69,
	sHoundoomSprites70,
	sHoundoomSprites71,
	sHoundoomSprites72,
	sHoundoomSprites73,
	sHoundoomSprites74,
	sHoundoomSprites75,
	sHoundoomSprites76,
	sHoundoomSprites77,
	sHoundoomSprites78,
	sHoundoomSprites79,
	sHoundoomSprites80,
	sHoundoomSprites81,
	sHoundoomSprites82,
	sHoundoomSprites83,
	sHoundoomSprites84,
	sHoundoomSprites85,
	sHoundoomSprites86,
	sHoundoomSprites87,
	sHoundoomSprites88,
	sHoundoomSprites89,
	sHoundoomSprites90,
	sHoundoomSprites91,
	sHoundoomSprites92,
	sHoundoomSprites93,
	sHoundoomSprites94,
	sHoundoomSprites95,
	sHoundoomSprites96,
	sHoundoomSprites97,
	sHoundoomSprites98,
	sHoundoomSprites99,
	sHoundoomSprites100,
	sHoundoomSprites101,
	sHoundoomSprites102,
	sHoundoomSprites103,
	sHoundoomSprites104,
	sHoundoomSprites105,
	sHoundoomSprites106,
	sHoundoomSprites107,
	sHoundoomSprites108,
	sHoundoomSprites109,
	sHoundoomSprites110,
	sHoundoomSprites111,
};

static const axmain sAxMainHoundoom = {
	.poses = sAxPosesHoundoom,
	.animations = sAxAnimationsHoundoom,
	.animCount = ARRAY_COUNT(sAxAnimationsHoundoom),
	.spriteData = sAxSpritesHoundoom,
	.positions = sAxPositionsHoundoom,
};
