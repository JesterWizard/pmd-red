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
static const axmain sAxMainGyarados;
const SiroArchive gAxGyarados = {"SIRO", &sAxMainGyarados};

static const ax_pose sGyaradosPose1[] = {
	AX_POSE(0, OAM1(214, ST_OAM_V_RECTANGLE, 1), OAM2(14, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(1, OAM1(198, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose2[] = {
	AX_POSE(2, OAM1(217, ST_OAM_V_RECTANGLE, 1), OAM2(14, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(3, OAM1(201, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose3[] = {
	AX_POSE(4, OAM1(213, ST_OAM_V_RECTANGLE, 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(5, OAM1(197, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose4[] = {
	AX_POSE(6, OAM1(196, ST_OAM_SQUARE     , 1), OAM2(224, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose5[] = {
	AX_POSE(7, OAM1(198, ST_OAM_H_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(8, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE(9, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(6, 3, 5)),
	AX_POSE(10, OAM1(206, ST_OAM_H_RECTANGLE, 1), OAM2(227, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose6[] = {
	AX_POSE(11, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(230, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(12, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(230, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE(13, OAM1(233, ST_OAM_H_RECTANGLE, 1), OAM2(14, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(5, 3, 5)),
	AX_POSE(14, OAM1(201, ST_OAM_V_RECTANGLE, 1), OAM2(14, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(7, 3, 5)),
	AX_POSE(15, OAM1(193, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose7[] = {
	AX_POSE(16, OAM1(196, ST_OAM_SQUARE     , 1), OAM2(222, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose8[] = {
	AX_POSE(17, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(207, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(18, OAM1(223, ST_OAM_H_RECTANGLE, 1), OAM2(199, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE(19, OAM1(207, ST_OAM_SQUARE     , 1), OAM2(215, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(6, 3, 5)),
	AX_POSE(20, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE(21, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE(22, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(22, 3, 5)),
	AX_POSE(23, OAM1(199, ST_OAM_H_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(30, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose9[] = {
	AX_POSE(24, OAM1(216, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(25, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(1, 3, 5)),
	AX_POSE(26, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(228, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE(27, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(220, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE(28, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(20, 3, 5)),
	AX_POSE(29, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(28, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose10[] = {
	AX_POSE(30, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(31, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(1, 3, 5)),
	AX_POSE(32, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(5, 3, 5)),
	AX_POSE(33, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose11[] = {
	AX_POSE(34, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(35, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(36, OAM1(213, ST_OAM_SQUARE     , 1), OAM2(222, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(37, OAM1(197, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(28, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose12[] = {
	AX_POSE(38, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(229, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(39, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE(40, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(229, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(6, 3, 5)),
	AX_POSE(41, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose13[] = {
	AX_POSE(42, OAM1(208, ST_OAM_V_RECTANGLE, 1), OAM2(13, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(43, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose14[] = {
	AX_POSE(44, OAM1(207, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(45, OAM1(191, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(1, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose15[] = {
	AX_POSE(46, OAM1(255, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(47, OAM1(207, ST_OAM_V_RECTANGLE, 1), OAM2(13, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(2, 3, 5)),
	AX_POSE(48, OAM1(191, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(6, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose16[] = {
	AX_POSE(30, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(31, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(1, 3, 5)),
	AX_POSE(32, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(5, 3, 5)),
	AX_POSE(33, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose17[] = {
	AX_POSE(34, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(226, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(35, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(36, OAM1(213, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(37, OAM1(197, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(28, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose18[] = {
	AX_POSE(38, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(11, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(39, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(11, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(2, 3, 5)),
	AX_POSE(40, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(11, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(6, 3, 5)),
	AX_POSE(41, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose19[] = {
	AX_POSE(16, OAM1(196, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose20[] = {
	AX_POSE(17, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(33, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(18, OAM1(223, ST_OAM_H_RECTANGLE, 1), OAM2(25, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(2, 3, 5)),
	AX_POSE(19, OAM1(207, ST_OAM_SQUARE     , 1), OAM2(25, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(6, 3, 5)),
	AX_POSE(20, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE(21, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE(22, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(217, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(22, 3, 5)),
	AX_POSE(23, OAM1(199, ST_OAM_H_RECTANGLE, 1), OAM2(217, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(30, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose21[] = {
	AX_POSE(24, OAM1(216, ST_OAM_SQUARE     , 1), OAM2(20, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(25, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(20, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(1, 3, 5)),
	AX_POSE(26, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(12, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(2, 3, 5)),
	AX_POSE(27, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(4, 3, 5)),
	AX_POSE(28, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(20, 3, 5)),
	AX_POSE(29, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(228, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(28, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose22[] = {
	AX_POSE(6, OAM1(196, ST_OAM_SQUARE     , 1), OAM2(224, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose23[] = {
	AX_POSE(7, OAM1(198, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(8, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE(9, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(221, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(6, 3, 5)),
	AX_POSE(10, OAM1(206, ST_OAM_H_RECTANGLE, 1), OAM2(221, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose24[] = {
	AX_POSE(11, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(18, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(12, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(18, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 5)),
	AX_POSE(13, OAM1(233, ST_OAM_H_RECTANGLE, 1), OAM2(226, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(5, 3, 5)),
	AX_POSE(14, OAM1(201, ST_OAM_V_RECTANGLE, 1), OAM2(226, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(7, 3, 5)),
	AX_POSE(15, OAM1(193, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose76[] = {
	AX_POSE(49, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(50, OAM1(216, ST_OAM_V_RECTANGLE, 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(32, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose80[] = {
	AX_POSE(51, OAM1(205, ST_OAM_H_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(52, OAM1(205, ST_OAM_H_RECTANGLE, 1), OAM2(227, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(53, OAM1(221, ST_OAM_H_RECTANGLE, 1), OAM2(227, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE(54, OAM1(216, ST_OAM_V_RECTANGLE, 1), OAM2(35, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(48, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose84[] = {
	AX_POSE(55, OAM1(204, ST_OAM_H_RECTANGLE, 1), OAM2(222, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(56, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(32, 3, 5)),
	AX_POSE(57, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(40, 3, 5)),
	AX_POSE(58, OAM1(204, ST_OAM_V_RECTANGLE, 1), OAM2(30, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(44, 3, 5)),
	AX_POSE(59, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(206, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(52, 3, 5)),
	AX_POSE(60, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(30, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(56, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose88[] = {
	AX_POSE(61, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(62, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(32, 3, 5)),
	AX_POSE(63, OAM1(208, ST_OAM_V_RECTANGLE, 1), OAM2(230, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(36, 3, 5)),
	AX_POSE(64, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(222, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(38, 3, 5)),
	AX_POSE(65, OAM1(208, ST_OAM_V_RECTANGLE, 1), OAM2(30, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(54, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose92[] = {
	AX_POSE(66, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(67, OAM1(208, ST_OAM_V_RECTANGLE, 1), OAM2(16, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(32, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose96[] = {
	AX_POSE(61, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(226, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(62, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(32, 3, 5)),
	AX_POSE(63, OAM1(208, ST_OAM_V_RECTANGLE, 1), OAM2(18, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(36, 3, 5)),
	AX_POSE(64, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(38, 3, 5)),
	AX_POSE(65, OAM1(208, ST_OAM_V_RECTANGLE, 1), OAM2(218, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(54, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose100[] = {
	AX_POSE(55, OAM1(204, ST_OAM_H_RECTANGLE, 1), OAM2(226, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(56, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(226, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(32, 3, 5)),
	AX_POSE(57, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(40, 3, 5)),
	AX_POSE(58, OAM1(204, ST_OAM_V_RECTANGLE, 1), OAM2(210, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(44, 3, 5)),
	AX_POSE(59, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(34, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(52, 3, 5)),
	AX_POSE(60, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(218, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(56, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose104[] = {
	AX_POSE(51, OAM1(205, ST_OAM_H_RECTANGLE, 1), OAM2(221, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(52, OAM1(205, ST_OAM_H_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(53, OAM1(221, ST_OAM_H_RECTANGLE, 1), OAM2(221, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE(54, OAM1(216, ST_OAM_V_RECTANGLE, 1), OAM2(213, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(48, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose108[] = {
	AX_POSE(68, OAM1(200, ST_OAM_V_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(69, OAM1(200, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(32, 3, 5)),
	AX_POSE(70, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(40, 3, 5)),
	AX_POSE(71, OAM1(8, ST_OAM_H_RECTANGLE, 2), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(44, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose112[] = {
	AX_POSE(72, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(73, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(32, 3, 5)),
	AX_POSE(74, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(36, 3, 5)),
	AX_POSE(75, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(44, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose116[] = {
	AX_POSE(76, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(77, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(32, 3, 5)),
	AX_POSE(78, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(222, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(40, 3, 5)),
	AX_POSE(79, OAM1(0, ST_OAM_SQUARE     , 2), OAM2(229, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(56, 3, 5)),
	AX_POSE(80, OAM1(16, ST_OAM_H_RECTANGLE, 2), OAM2(229, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(60, 3, 5)),
	AX_POSE(81, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(30, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(62, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose120[] = {
	AX_POSE(82, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(83, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(32, 3, 5)),
	AX_POSE(84, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(222, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(40, 3, 5)),
	AX_POSE(85, OAM1(0, ST_OAM_V_RECTANGLE, 2), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(56, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose124[] = {
	AX_POSE(86, OAM1(191, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(87, OAM1(207, ST_OAM_V_RECTANGLE, 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(32, 3, 5)),
	AX_POSE(88, OAM1(255, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(34, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose128[] = {
	AX_POSE(82, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(226, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(83, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(32, 3, 5)),
	AX_POSE(84, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(40, 3, 5)),
	AX_POSE(85, OAM1(0, ST_OAM_V_RECTANGLE, 2), OAM2(6, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(56, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose132[] = {
	AX_POSE(76, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(226, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(77, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(32, 3, 5)),
	AX_POSE(78, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(40, 3, 5)),
	AX_POSE(79, OAM1(0, ST_OAM_SQUARE     , 2), OAM2(11, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(56, 3, 5)),
	AX_POSE(80, OAM1(16, ST_OAM_H_RECTANGLE, 2), OAM2(11, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(60, 3, 5)),
	AX_POSE(81, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(218, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(62, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose136[] = {
	AX_POSE(72, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(73, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(32, 3, 5)),
	AX_POSE(74, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(36, 3, 5)),
	AX_POSE(75, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(44, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose137[] = {
	AX_POSE(89, OAM1(192, ST_OAM_SQUARE     , 1), OAM2(223, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose138[] = {
	AX_POSE(90, OAM1(192, ST_OAM_SQUARE     , 1), OAM2(223, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose139[] = {
	AX_POSE(91, OAM1(197, ST_OAM_SQUARE     , 1), OAM2(223, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose140[] = {
	AX_POSE(92, OAM1(193, ST_OAM_SQUARE     , 1), OAM2(221, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose141[] = {
	AX_POSE(93, OAM1(195, ST_OAM_SQUARE     , 1), OAM2(222, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose142[] = {
	AX_POSE(94, OAM1(195, ST_OAM_SQUARE     , 1), OAM2(222, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose143[] = {
	AX_POSE(95, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(96, OAM1(194, ST_OAM_H_RECTANGLE, 1), OAM2(225, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose144[] = {
	AX_POSE(94, OAM1(195, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose145[] = {
	AX_POSE(93, OAM1(195, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose146[] = {
	AX_POSE(92, OAM1(193, ST_OAM_SQUARE     , 1), OAM2(227, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose155[] = {
	AX_POSE(49, OAM1(201, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(50, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(32, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose156[] = {
	AX_POSE(51, OAM1(208, ST_OAM_H_RECTANGLE, 1), OAM2(223, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(52, OAM1(208, ST_OAM_H_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(53, OAM1(224, ST_OAM_H_RECTANGLE, 1), OAM2(223, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE(54, OAM1(219, ST_OAM_V_RECTANGLE, 1), OAM2(215, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(48, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose157[] = {
	AX_POSE(55, OAM1(204, ST_OAM_H_RECTANGLE, 1), OAM2(229, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(56, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(229, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(32, 3, 5)),
	AX_POSE(57, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(40, 3, 5)),
	AX_POSE(58, OAM1(204, ST_OAM_V_RECTANGLE, 1), OAM2(213, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(44, 3, 5)),
	AX_POSE(59, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(37, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(52, 3, 5)),
	AX_POSE(60, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(221, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(56, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose158[] = {
	AX_POSE(61, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(229, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(62, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(32, 3, 5)),
	AX_POSE(63, OAM1(208, ST_OAM_V_RECTANGLE, 1), OAM2(21, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(36, 3, 5)),
	AX_POSE(64, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(38, 3, 5)),
	AX_POSE(65, OAM1(208, ST_OAM_V_RECTANGLE, 1), OAM2(221, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(54, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose159[] = {
	AX_POSE(66, OAM1(191, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(67, OAM1(207, ST_OAM_V_RECTANGLE, 1), OAM2(16, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(32, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose160[] = {
	AX_POSE(61, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(62, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(32, 3, 5)),
	AX_POSE(63, OAM1(208, ST_OAM_V_RECTANGLE, 1), OAM2(227, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(36, 3, 5)),
	AX_POSE(64, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(219, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(38, 3, 5)),
	AX_POSE(65, OAM1(208, ST_OAM_V_RECTANGLE, 1), OAM2(27, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(54, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose161[] = {
	AX_POSE(55, OAM1(204, ST_OAM_H_RECTANGLE, 1), OAM2(219, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(56, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(32, 3, 5)),
	AX_POSE(57, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(40, 3, 5)),
	AX_POSE(58, OAM1(204, ST_OAM_V_RECTANGLE, 1), OAM2(27, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(44, 3, 5)),
	AX_POSE(59, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(203, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(52, 3, 5)),
	AX_POSE(60, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(27, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(56, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose162[] = {
	AX_POSE(51, OAM1(208, ST_OAM_H_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(52, OAM1(208, ST_OAM_H_RECTANGLE, 1), OAM2(225, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(53, OAM1(224, ST_OAM_H_RECTANGLE, 1), OAM2(225, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE(54, OAM1(219, ST_OAM_V_RECTANGLE, 1), OAM2(33, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(48, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose176[] = {
	AX_POSE(7, OAM1(198, ST_OAM_H_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(8, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE(9, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(6, 3, 5)),
	AX_POSE(10, OAM1(206, ST_OAM_H_RECTANGLE, 1), OAM2(225, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose177[] = {
	AX_POSE(72, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(73, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(32, 3, 5)),
	AX_POSE(74, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(36, 3, 5)),
	AX_POSE(75, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(231, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(44, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose178[] = {
	AX_POSE(51, OAM1(208, ST_OAM_H_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(52, OAM1(208, ST_OAM_H_RECTANGLE, 1), OAM2(223, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(53, OAM1(224, ST_OAM_H_RECTANGLE, 1), OAM2(223, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE(54, OAM1(219, ST_OAM_V_RECTANGLE, 1), OAM2(31, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(48, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose182[] = {
	AX_POSE(55, OAM1(204, ST_OAM_H_RECTANGLE, 1), OAM2(220, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(56, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(32, 3, 5)),
	AX_POSE(57, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(40, 3, 5)),
	AX_POSE(58, OAM1(204, ST_OAM_V_RECTANGLE, 1), OAM2(28, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(44, 3, 5)),
	AX_POSE(59, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(204, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(52, 3, 5)),
	AX_POSE(60, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(28, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(56, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose185[] = {
	AX_POSE(82, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(83, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(32, 3, 5)),
	AX_POSE(84, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(220, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(40, 3, 5)),
	AX_POSE(85, OAM1(0, ST_OAM_V_RECTANGLE, 2), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(56, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose193[] = {
	AX_POSE(82, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(228, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(83, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(32, 3, 5)),
	AX_POSE(84, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(40, 3, 5)),
	AX_POSE(85, OAM1(0, ST_OAM_V_RECTANGLE, 2), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(56, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose198[] = {
	AX_POSE(55, OAM1(204, ST_OAM_H_RECTANGLE, 1), OAM2(228, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(56, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(228, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(32, 3, 5)),
	AX_POSE(57, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(40, 3, 5)),
	AX_POSE(58, OAM1(204, ST_OAM_V_RECTANGLE, 1), OAM2(212, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(44, 3, 5)),
	AX_POSE(59, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(36, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(52, 3, 5)),
	AX_POSE(60, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(220, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(56, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose200[] = {
	AX_POSE(7, OAM1(198, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(8, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE(9, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(223, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(6, 3, 5)),
	AX_POSE(10, OAM1(206, ST_OAM_H_RECTANGLE, 1), OAM2(223, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose201[] = {
	AX_POSE(72, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(73, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(32, 3, 5)),
	AX_POSE(74, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(36, 3, 5)),
	AX_POSE(75, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(44, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose202[] = {
	AX_POSE(51, OAM1(208, ST_OAM_H_RECTANGLE, 1), OAM2(225, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(52, OAM1(208, ST_OAM_H_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(53, OAM1(224, ST_OAM_H_RECTANGLE, 1), OAM2(225, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE(54, OAM1(219, ST_OAM_V_RECTANGLE, 1), OAM2(217, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(48, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose204[] = {
	AX_POSE(51, OAM1(208, ST_OAM_H_RECTANGLE, 1), OAM2(221, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(52, OAM1(208, ST_OAM_H_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(53, OAM1(224, ST_OAM_H_RECTANGLE, 1), OAM2(221, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE(54, OAM1(219, ST_OAM_V_RECTANGLE, 1), OAM2(213, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(48, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose206[] = {
	AX_POSE(61, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(62, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(32, 3, 5)),
	AX_POSE(63, OAM1(208, ST_OAM_V_RECTANGLE, 1), OAM2(23, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(36, 3, 5)),
	AX_POSE(64, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(38, 3, 5)),
	AX_POSE(65, OAM1(208, ST_OAM_V_RECTANGLE, 1), OAM2(223, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(54, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose208[] = {
	AX_POSE(61, OAM1(192, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(62, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(32, 3, 5)),
	AX_POSE(63, OAM1(208, ST_OAM_V_RECTANGLE, 1), OAM2(226, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(36, 3, 5)),
	AX_POSE(64, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(218, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(38, 3, 5)),
	AX_POSE(65, OAM1(208, ST_OAM_V_RECTANGLE, 1), OAM2(26, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(54, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGyaradosPose210[] = {
	AX_POSE(51, OAM1(208, ST_OAM_H_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(52, OAM1(208, ST_OAM_H_RECTANGLE, 1), OAM2(227, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(53, OAM1(224, ST_OAM_H_RECTANGLE, 1), OAM2(227, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE(54, OAM1(219, ST_OAM_V_RECTANGLE, 1), OAM2(35, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(48, 3, 5)),
	AX_POSE_TERMINATOR
};
static const u8 sGyaradosAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_2_1.lz");
static const u8 sGyaradosAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_2_2.lz");
static const u8 sGyaradosAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_2_3.lz");
static const u8 sGyaradosAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_2_4.lz");
static const u8 sGyaradosAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_2_5.lz");
static const u8 sGyaradosAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_2_6.lz");
static const u8 sGyaradosAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_2_7.lz");
static const u8 sGyaradosAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_2_8.lz");
static const u8 sGyaradosAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_3_1.lz");
static const u8 sGyaradosAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_3_2.lz");
static const u8 sGyaradosAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_3_3.lz");
static const u8 sGyaradosAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_3_4.lz");
static const u8 sGyaradosAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_3_5.lz");
static const u8 sGyaradosAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_3_6.lz");
static const u8 sGyaradosAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_3_7.lz");
static const u8 sGyaradosAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_3_8.lz");
static const u8 sGyaradosAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_4_1.lz");
static const u8 sGyaradosAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_4_2.lz");
static const u8 sGyaradosAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_4_3.lz");
static const u8 sGyaradosAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_4_4.lz");
static const u8 sGyaradosAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_4_5.lz");
static const u8 sGyaradosAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_4_6.lz");
static const u8 sGyaradosAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_4_7.lz");
static const u8 sGyaradosAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_4_8.lz");
static const u8 sGyaradosAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_5_1.lz");
static const u8 sGyaradosAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_5_2.lz");
static const u8 sGyaradosAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_5_3.lz");
static const u8 sGyaradosAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_5_4.lz");
static const u8 sGyaradosAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_5_5.lz");
static const u8 sGyaradosAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_5_6.lz");
static const u8 sGyaradosAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_5_7.lz");
static const u8 sGyaradosAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_5_8.lz");
static const u8 sGyaradosAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_8_1.lz");
static const u8 sGyaradosAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_8_2.lz");
static const u8 sGyaradosAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_8_3.lz");
static const u8 sGyaradosAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_8_4.lz");
static const u8 sGyaradosAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_8_5.lz");
static const u8 sGyaradosAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_8_6.lz");
static const u8 sGyaradosAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_8_7.lz");
static const u8 sGyaradosAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_8_8.lz");
static const u8 sGyaradosAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_9_1.lz");
static const u8 sGyaradosAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_9_2.lz");
static const u8 sGyaradosAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_9_3.lz");
static const u8 sGyaradosAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_9_4.lz");
static const u8 sGyaradosAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_9_5.lz");
static const u8 sGyaradosAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_9_6.lz");
static const u8 sGyaradosAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_9_7.lz");
static const u8 sGyaradosAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_9_8.lz");
static const u8 sGyaradosAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_11_1.lz");
static const u8 sGyaradosAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_11_2.lz");
static const u8 sGyaradosAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_11_3.lz");
static const u8 sGyaradosAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_11_4.lz");
static const u8 sGyaradosAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_11_5.lz");
static const u8 sGyaradosAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_11_6.lz");
static const u8 sGyaradosAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_11_7.lz");
static const u8 sGyaradosAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/gyarados/sGyaradosAnims_11_8.lz");

static const u8 sGyaradosGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_1.4bpp.lz");
static const ax_sprite sGyaradosSprites1[] = {
	{sGyaradosGfx1, ARRAY_COUNT(sGyaradosGfx1)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_2.4bpp.lz");
static const ax_sprite sGyaradosSprites2[] = {
	{sGyaradosGfx2, ARRAY_COUNT(sGyaradosGfx2)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_3.4bpp.lz");
static const ax_sprite sGyaradosSprites3[] = {
	{sGyaradosGfx3, ARRAY_COUNT(sGyaradosGfx3)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_4.4bpp.lz");
static const ax_sprite sGyaradosSprites4[] = {
	{sGyaradosGfx4, ARRAY_COUNT(sGyaradosGfx4)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_5.4bpp.lz");
static const ax_sprite sGyaradosSprites5[] = {
	{sGyaradosGfx5, ARRAY_COUNT(sGyaradosGfx5)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_6.4bpp.lz");
static const ax_sprite sGyaradosSprites6[] = {
	{sGyaradosGfx6, ARRAY_COUNT(sGyaradosGfx6)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_7.4bpp.lz");
static const ax_sprite sGyaradosSprites7[] = {
	{sGyaradosGfx7, ARRAY_COUNT(sGyaradosGfx7)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_8.4bpp.lz");
static const ax_sprite sGyaradosSprites8[] = {
	{sGyaradosGfx8, ARRAY_COUNT(sGyaradosGfx8)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_9.4bpp.lz");
static const ax_sprite sGyaradosSprites9[] = {
	{sGyaradosGfx9, ARRAY_COUNT(sGyaradosGfx9)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_10.4bpp.lz");
static const ax_sprite sGyaradosSprites10[] = {
	{sGyaradosGfx10, ARRAY_COUNT(sGyaradosGfx10)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_11.4bpp.lz");
static const ax_sprite sGyaradosSprites11[] = {
	{sGyaradosGfx11, ARRAY_COUNT(sGyaradosGfx11)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_12.4bpp.lz");
static const ax_sprite sGyaradosSprites12[] = {
	{sGyaradosGfx12, ARRAY_COUNT(sGyaradosGfx12)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_13.4bpp.lz");
static const ax_sprite sGyaradosSprites13[] = {
	{sGyaradosGfx13, ARRAY_COUNT(sGyaradosGfx13)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_14.4bpp.lz");
static const ax_sprite sGyaradosSprites14[] = {
	{sGyaradosGfx14, ARRAY_COUNT(sGyaradosGfx14)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_15.4bpp.lz");
static const ax_sprite sGyaradosSprites15[] = {
	{sGyaradosGfx15, ARRAY_COUNT(sGyaradosGfx15)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_16.4bpp.lz");
static const ax_sprite sGyaradosSprites16[] = {
	{sGyaradosGfx16, ARRAY_COUNT(sGyaradosGfx16)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_17.4bpp.lz");
static const ax_sprite sGyaradosSprites17[] = {
	{sGyaradosGfx17, ARRAY_COUNT(sGyaradosGfx17)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_18.4bpp.lz");
static const ax_sprite sGyaradosSprites18[] = {
	{sGyaradosGfx18, ARRAY_COUNT(sGyaradosGfx18)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_19.4bpp.lz");
static const ax_sprite sGyaradosSprites19[] = {
	{sGyaradosGfx19, ARRAY_COUNT(sGyaradosGfx19)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_20.4bpp.lz");
static const ax_sprite sGyaradosSprites20[] = {
	{sGyaradosGfx20, ARRAY_COUNT(sGyaradosGfx20)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_21.4bpp.lz");
static const ax_sprite sGyaradosSprites21[] = {
	{sGyaradosGfx21, ARRAY_COUNT(sGyaradosGfx21)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_22.4bpp.lz");
static const ax_sprite sGyaradosSprites22[] = {
	{sGyaradosGfx22, ARRAY_COUNT(sGyaradosGfx22)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_23.4bpp.lz");
static const ax_sprite sGyaradosSprites23[] = {
	{sGyaradosGfx23, ARRAY_COUNT(sGyaradosGfx23)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_24.4bpp.lz");
static const ax_sprite sGyaradosSprites24[] = {
	{sGyaradosGfx24, ARRAY_COUNT(sGyaradosGfx24)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_25.4bpp.lz");
static const ax_sprite sGyaradosSprites25[] = {
	{sGyaradosGfx25, ARRAY_COUNT(sGyaradosGfx25)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_26.4bpp.lz");
static const ax_sprite sGyaradosSprites26[] = {
	{sGyaradosGfx26, ARRAY_COUNT(sGyaradosGfx26)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_27.4bpp.lz");
static const ax_sprite sGyaradosSprites27[] = {
	{sGyaradosGfx27, ARRAY_COUNT(sGyaradosGfx27)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_28.4bpp.lz");
static const ax_sprite sGyaradosSprites28[] = {
	{sGyaradosGfx28, ARRAY_COUNT(sGyaradosGfx28)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_29.4bpp.lz");
static const ax_sprite sGyaradosSprites29[] = {
	{sGyaradosGfx29, ARRAY_COUNT(sGyaradosGfx29)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_30.4bpp.lz");
static const ax_sprite sGyaradosSprites30[] = {
	{sGyaradosGfx30, ARRAY_COUNT(sGyaradosGfx30)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_31.4bpp.lz");
static const ax_sprite sGyaradosSprites31[] = {
	{sGyaradosGfx31, ARRAY_COUNT(sGyaradosGfx31)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_32.4bpp.lz");
static const ax_sprite sGyaradosSprites32[] = {
	{sGyaradosGfx32, ARRAY_COUNT(sGyaradosGfx32)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_33.4bpp.lz");
static const ax_sprite sGyaradosSprites33[] = {
	{sGyaradosGfx33, ARRAY_COUNT(sGyaradosGfx33)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_34.4bpp.lz");
static const ax_sprite sGyaradosSprites34[] = {
	{sGyaradosGfx34, ARRAY_COUNT(sGyaradosGfx34)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_35.4bpp.lz");
static const ax_sprite sGyaradosSprites35[] = {
	{sGyaradosGfx35, ARRAY_COUNT(sGyaradosGfx35)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_36.4bpp.lz");
static const ax_sprite sGyaradosSprites36[] = {
	{sGyaradosGfx36, ARRAY_COUNT(sGyaradosGfx36)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_37.4bpp.lz");
static const ax_sprite sGyaradosSprites37[] = {
	{sGyaradosGfx37, ARRAY_COUNT(sGyaradosGfx37)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_38.4bpp.lz");
static const ax_sprite sGyaradosSprites38[] = {
	{sGyaradosGfx38, ARRAY_COUNT(sGyaradosGfx38)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_39.4bpp.lz");
static const ax_sprite sGyaradosSprites39[] = {
	{sGyaradosGfx39, ARRAY_COUNT(sGyaradosGfx39)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_40.4bpp.lz");
static const ax_sprite sGyaradosSprites40[] = {
	{sGyaradosGfx40, ARRAY_COUNT(sGyaradosGfx40)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_41.4bpp.lz");
static const ax_sprite sGyaradosSprites41[] = {
	{sGyaradosGfx41, ARRAY_COUNT(sGyaradosGfx41)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_42.4bpp.lz");
static const ax_sprite sGyaradosSprites42[] = {
	{sGyaradosGfx42, ARRAY_COUNT(sGyaradosGfx42)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_43.4bpp.lz");
static const ax_sprite sGyaradosSprites43[] = {
	{sGyaradosGfx43, ARRAY_COUNT(sGyaradosGfx43)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_44.4bpp.lz");
static const ax_sprite sGyaradosSprites44[] = {
	{sGyaradosGfx44, ARRAY_COUNT(sGyaradosGfx44)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_45.4bpp.lz");
static const ax_sprite sGyaradosSprites45[] = {
	{sGyaradosGfx45, ARRAY_COUNT(sGyaradosGfx45)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_46.4bpp.lz");
static const ax_sprite sGyaradosSprites46[] = {
	{sGyaradosGfx46, ARRAY_COUNT(sGyaradosGfx46)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_47.4bpp.lz");
static const ax_sprite sGyaradosSprites47[] = {
	{sGyaradosGfx47, ARRAY_COUNT(sGyaradosGfx47)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_48.4bpp.lz");
static const ax_sprite sGyaradosSprites48[] = {
	{sGyaradosGfx48, ARRAY_COUNT(sGyaradosGfx48)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_49.4bpp.lz");
static const ax_sprite sGyaradosSprites49[] = {
	{sGyaradosGfx49, ARRAY_COUNT(sGyaradosGfx49)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_50.4bpp.lz");
static const u8 sGyaradosGfx50_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_50_1.4bpp.lz");
static const u8 sGyaradosGfx50_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_50_2.4bpp.lz");
static const u8 sGyaradosGfx50_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_50_3.4bpp.lz");
static const ax_sprite sGyaradosSprites50[] = {
	{NULL, 96}, 
	{sGyaradosGfx50, ARRAY_COUNT(sGyaradosGfx50)}, 
	{NULL, 32}, 
	{sGyaradosGfx50_1, ARRAY_COUNT(sGyaradosGfx50_1)}, 
	{NULL, 32}, 
	{sGyaradosGfx50_2, ARRAY_COUNT(sGyaradosGfx50_2)}, 
	{NULL, 32}, 
	{sGyaradosGfx50_3, ARRAY_COUNT(sGyaradosGfx50_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_51.4bpp.lz");
static const ax_sprite sGyaradosSprites51[] = {
	{sGyaradosGfx51, ARRAY_COUNT(sGyaradosGfx51)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_52.4bpp.lz");
static const ax_sprite sGyaradosSprites52[] = {
	{NULL, 64}, 
	{sGyaradosGfx52, ARRAY_COUNT(sGyaradosGfx52)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_53.4bpp.lz");
static const ax_sprite sGyaradosSprites53[] = {
	{sGyaradosGfx53, ARRAY_COUNT(sGyaradosGfx53)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_54.4bpp.lz");
static const u8 sGyaradosGfx54_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_54_1.4bpp.lz");
static const u8 sGyaradosGfx54_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_54_2.4bpp.lz");
static const ax_sprite sGyaradosSprites54[] = {
	{sGyaradosGfx54, ARRAY_COUNT(sGyaradosGfx54)}, 
	{NULL, 64}, 
	{sGyaradosGfx54_1, ARRAY_COUNT(sGyaradosGfx54_1)}, 
	{NULL, 64}, 
	{sGyaradosGfx54_2, ARRAY_COUNT(sGyaradosGfx54_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_55.4bpp.lz");
static const ax_sprite sGyaradosSprites55[] = {
	{sGyaradosGfx55, ARRAY_COUNT(sGyaradosGfx55)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_56.4bpp.lz");
static const ax_sprite sGyaradosSprites56[] = {
	{sGyaradosGfx56, ARRAY_COUNT(sGyaradosGfx56)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_57.4bpp.lz");
static const ax_sprite sGyaradosSprites57[] = {
	{sGyaradosGfx57, ARRAY_COUNT(sGyaradosGfx57)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_58.4bpp.lz");
static const ax_sprite sGyaradosSprites58[] = {
	{sGyaradosGfx58, ARRAY_COUNT(sGyaradosGfx58)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_59.4bpp.lz");
static const ax_sprite sGyaradosSprites59[] = {
	{sGyaradosGfx59, ARRAY_COUNT(sGyaradosGfx59)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_60.4bpp.lz");
static const ax_sprite sGyaradosSprites60[] = {
	{sGyaradosGfx60, ARRAY_COUNT(sGyaradosGfx60)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_61.4bpp.lz");
static const ax_sprite sGyaradosSprites61[] = {
	{sGyaradosGfx61, ARRAY_COUNT(sGyaradosGfx61)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_62.4bpp.lz");
static const u8 sGyaradosGfx62_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_62_1.4bpp.lz");
static const ax_sprite sGyaradosSprites62[] = {
	{NULL, 128}, 
	{sGyaradosGfx62, ARRAY_COUNT(sGyaradosGfx62)}, 
	{NULL, 64}, 
	{sGyaradosGfx62_1, ARRAY_COUNT(sGyaradosGfx62_1)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_63.4bpp.lz");
static const ax_sprite sGyaradosSprites63[] = {
	{sGyaradosGfx63, ARRAY_COUNT(sGyaradosGfx63)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_64.4bpp.lz");
static const ax_sprite sGyaradosSprites64[] = {
	{sGyaradosGfx64, ARRAY_COUNT(sGyaradosGfx64)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_65.4bpp.lz");
static const u8 sGyaradosGfx65_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_65_1.4bpp.lz");
static const ax_sprite sGyaradosSprites65[] = {
	{sGyaradosGfx65, ARRAY_COUNT(sGyaradosGfx65)}, 
	{NULL, 64}, 
	{sGyaradosGfx65_1, ARRAY_COUNT(sGyaradosGfx65_1)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_66.4bpp.lz");
static const ax_sprite sGyaradosSprites66[] = {
	{sGyaradosGfx66, ARRAY_COUNT(sGyaradosGfx66)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_67.4bpp.lz");
static const u8 sGyaradosGfx67_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_67_1.4bpp.lz");
static const u8 sGyaradosGfx67_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_67_2.4bpp.lz");
static const u8 sGyaradosGfx67_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_67_3.4bpp.lz");
static const u8 sGyaradosGfx67_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_67_4.4bpp.lz");
static const ax_sprite sGyaradosSprites67[] = {
	{NULL, 32}, 
	{sGyaradosGfx67, ARRAY_COUNT(sGyaradosGfx67)}, 
	{NULL, 32}, 
	{sGyaradosGfx67_1, ARRAY_COUNT(sGyaradosGfx67_1)}, 
	{NULL, 32}, 
	{sGyaradosGfx67_2, ARRAY_COUNT(sGyaradosGfx67_2)}, 
	{NULL, 64}, 
	{sGyaradosGfx67_3, ARRAY_COUNT(sGyaradosGfx67_3)}, 
	{NULL, 64}, 
	{sGyaradosGfx67_4, ARRAY_COUNT(sGyaradosGfx67_4)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_68.4bpp.lz");
static const ax_sprite sGyaradosSprites68[] = {
	{sGyaradosGfx68, ARRAY_COUNT(sGyaradosGfx68)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_69.4bpp.lz");
static const u8 sGyaradosGfx69_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_69_1.4bpp.lz");
static const u8 sGyaradosGfx69_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_69_2.4bpp.lz");
static const u8 sGyaradosGfx69_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_69_3.4bpp.lz");
static const u8 sGyaradosGfx69_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_69_4.4bpp.lz");
static const u8 sGyaradosGfx69_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_69_5.4bpp.lz");
static const ax_sprite sGyaradosSprites69[] = {
	{NULL, 32}, 
	{sGyaradosGfx69, ARRAY_COUNT(sGyaradosGfx69)}, 
	{NULL, 32}, 
	{sGyaradosGfx69_1, ARRAY_COUNT(sGyaradosGfx69_1)}, 
	{NULL, 32}, 
	{sGyaradosGfx69_2, ARRAY_COUNT(sGyaradosGfx69_2)}, 
	{NULL, 64}, 
	{sGyaradosGfx69_3, ARRAY_COUNT(sGyaradosGfx69_3)}, 
	{NULL, 64}, 
	{sGyaradosGfx69_4, ARRAY_COUNT(sGyaradosGfx69_4)}, 
	{NULL, 96}, 
	{sGyaradosGfx69_5, ARRAY_COUNT(sGyaradosGfx69_5)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_70.4bpp.lz");
static const u8 sGyaradosGfx70_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_70_1.4bpp.lz");
static const u8 sGyaradosGfx70_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_70_2.4bpp.lz");
static const ax_sprite sGyaradosSprites70[] = {
	{sGyaradosGfx70, ARRAY_COUNT(sGyaradosGfx70)}, 
	{NULL, 32}, 
	{sGyaradosGfx70_1, ARRAY_COUNT(sGyaradosGfx70_1)}, 
	{NULL, 32}, 
	{sGyaradosGfx70_2, ARRAY_COUNT(sGyaradosGfx70_2)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_71.4bpp.lz");
static const ax_sprite sGyaradosSprites71[] = {
	{sGyaradosGfx71, ARRAY_COUNT(sGyaradosGfx71)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx72[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_72.4bpp.lz");
static const ax_sprite sGyaradosSprites72[] = {
	{sGyaradosGfx72, ARRAY_COUNT(sGyaradosGfx72)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx73[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_73.4bpp.lz");
static const u8 sGyaradosGfx73_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_73_1.4bpp.lz");
static const u8 sGyaradosGfx73_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_73_2.4bpp.lz");
static const u8 sGyaradosGfx73_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_73_3.4bpp.lz");
static const ax_sprite sGyaradosSprites73[] = {
	{NULL, 32}, 
	{sGyaradosGfx73, ARRAY_COUNT(sGyaradosGfx73)}, 
	{NULL, 32}, 
	{sGyaradosGfx73_1, ARRAY_COUNT(sGyaradosGfx73_1)}, 
	{NULL, 32}, 
	{sGyaradosGfx73_2, ARRAY_COUNT(sGyaradosGfx73_2)}, 
	{NULL, 32}, 
	{sGyaradosGfx73_3, ARRAY_COUNT(sGyaradosGfx73_3)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx74[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_74.4bpp.lz");
static const ax_sprite sGyaradosSprites74[] = {
	{sGyaradosGfx74, ARRAY_COUNT(sGyaradosGfx74)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx75[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_75.4bpp.lz");
static const ax_sprite sGyaradosSprites75[] = {
	{sGyaradosGfx75, ARRAY_COUNT(sGyaradosGfx75)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx76[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_76.4bpp.lz");
static const ax_sprite sGyaradosSprites76[] = {
	{sGyaradosGfx76, ARRAY_COUNT(sGyaradosGfx76)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx77[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_77.4bpp.lz");
static const u8 sGyaradosGfx77_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_77_1.4bpp.lz");
static const u8 sGyaradosGfx77_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_77_2.4bpp.lz");
static const u8 sGyaradosGfx77_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_77_3.4bpp.lz");
static const ax_sprite sGyaradosSprites77[] = {
	{NULL, 32}, 
	{sGyaradosGfx77, ARRAY_COUNT(sGyaradosGfx77)}, 
	{NULL, 32}, 
	{sGyaradosGfx77_1, ARRAY_COUNT(sGyaradosGfx77_1)}, 
	{NULL, 32}, 
	{sGyaradosGfx77_2, ARRAY_COUNT(sGyaradosGfx77_2)}, 
	{NULL, 64}, 
	{sGyaradosGfx77_3, ARRAY_COUNT(sGyaradosGfx77_3)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx78[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_78.4bpp.lz");
static const u8 sGyaradosGfx78_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_78_1.4bpp.lz");
static const ax_sprite sGyaradosSprites78[] = {
	{sGyaradosGfx78, ARRAY_COUNT(sGyaradosGfx78)}, 
	{NULL, 96}, 
	{sGyaradosGfx78_1, ARRAY_COUNT(sGyaradosGfx78_1)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx79[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_79.4bpp.lz");
static const u8 sGyaradosGfx79_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_79_1.4bpp.lz");
static const ax_sprite sGyaradosSprites79[] = {
	{sGyaradosGfx79, ARRAY_COUNT(sGyaradosGfx79)}, 
	{NULL, 64}, 
	{sGyaradosGfx79_1, ARRAY_COUNT(sGyaradosGfx79_1)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx80[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_80.4bpp.lz");
static const ax_sprite sGyaradosSprites80[] = {
	{sGyaradosGfx80, ARRAY_COUNT(sGyaradosGfx80)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx81[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_81.4bpp.lz");
static const ax_sprite sGyaradosSprites81[] = {
	{sGyaradosGfx81, ARRAY_COUNT(sGyaradosGfx81)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx82[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_82.4bpp.lz");
static const ax_sprite sGyaradosSprites82[] = {
	{sGyaradosGfx82, ARRAY_COUNT(sGyaradosGfx82)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx83[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_83.4bpp.lz");
static const u8 sGyaradosGfx83_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_83_1.4bpp.lz");
static const u8 sGyaradosGfx83_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_83_2.4bpp.lz");
static const u8 sGyaradosGfx83_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_83_3.4bpp.lz");
static const u8 sGyaradosGfx83_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_83_4.4bpp.lz");
static const u8 sGyaradosGfx83_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_83_5.4bpp.lz");
static const u8 sGyaradosGfx83_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_83_6.4bpp.lz");
static const u8 sGyaradosGfx83_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_83_7.4bpp.lz");
static const ax_sprite sGyaradosSprites83[] = {
	{NULL, 64}, 
	{sGyaradosGfx83, ARRAY_COUNT(sGyaradosGfx83)}, 
	{NULL, 32}, 
	{sGyaradosGfx83_1, ARRAY_COUNT(sGyaradosGfx83_1)}, 
	{NULL, 32}, 
	{sGyaradosGfx83_2, ARRAY_COUNT(sGyaradosGfx83_2)}, 
	{NULL, 32}, 
	{sGyaradosGfx83_3, ARRAY_COUNT(sGyaradosGfx83_3)}, 
	{NULL, 32}, 
	{sGyaradosGfx83_4, ARRAY_COUNT(sGyaradosGfx83_4)}, 
	{NULL, 32}, 
	{sGyaradosGfx83_5, ARRAY_COUNT(sGyaradosGfx83_5)}, 
	{NULL, 32}, 
	{sGyaradosGfx83_6, ARRAY_COUNT(sGyaradosGfx83_6)}, 
	{NULL, 64}, 
	{sGyaradosGfx83_7, ARRAY_COUNT(sGyaradosGfx83_7)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx84[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_84.4bpp.lz");
static const u8 sGyaradosGfx84_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_84_1.4bpp.lz");
static const ax_sprite sGyaradosSprites84[] = {
	{sGyaradosGfx84, ARRAY_COUNT(sGyaradosGfx84)}, 
	{NULL, 32}, 
	{sGyaradosGfx84_1, ARRAY_COUNT(sGyaradosGfx84_1)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx85[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_85.4bpp.lz");
static const u8 sGyaradosGfx85_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_85_1.4bpp.lz");
static const u8 sGyaradosGfx85_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_85_2.4bpp.lz");
static const u8 sGyaradosGfx85_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_85_3.4bpp.lz");
static const ax_sprite sGyaradosSprites85[] = {
	{sGyaradosGfx85, ARRAY_COUNT(sGyaradosGfx85)}, 
	{NULL, 96}, 
	{sGyaradosGfx85_1, ARRAY_COUNT(sGyaradosGfx85_1)}, 
	{NULL, 32}, 
	{sGyaradosGfx85_2, ARRAY_COUNT(sGyaradosGfx85_2)}, 
	{NULL, 32}, 
	{sGyaradosGfx85_3, ARRAY_COUNT(sGyaradosGfx85_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx86[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_86.4bpp.lz");
static const ax_sprite sGyaradosSprites86[] = {
	{sGyaradosGfx86, ARRAY_COUNT(sGyaradosGfx86)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx87[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_87.4bpp.lz");
static const u8 sGyaradosGfx87_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_87_1.4bpp.lz");
static const u8 sGyaradosGfx87_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_87_2.4bpp.lz");
static const u8 sGyaradosGfx87_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_87_3.4bpp.lz");
static const ax_sprite sGyaradosSprites87[] = {
	{sGyaradosGfx87, ARRAY_COUNT(sGyaradosGfx87)}, 
	{NULL, 32}, 
	{sGyaradosGfx87_1, ARRAY_COUNT(sGyaradosGfx87_1)}, 
	{NULL, 32}, 
	{sGyaradosGfx87_2, ARRAY_COUNT(sGyaradosGfx87_2)}, 
	{NULL, 32}, 
	{sGyaradosGfx87_3, ARRAY_COUNT(sGyaradosGfx87_3)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx88[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_88.4bpp.lz");
static const ax_sprite sGyaradosSprites88[] = {
	{sGyaradosGfx88, ARRAY_COUNT(sGyaradosGfx88)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx89[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_89.4bpp.lz");
static const ax_sprite sGyaradosSprites89[] = {
	{sGyaradosGfx89, ARRAY_COUNT(sGyaradosGfx89)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx90[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_90.4bpp.lz");
static const ax_sprite sGyaradosSprites90[] = {
	{sGyaradosGfx90, ARRAY_COUNT(sGyaradosGfx90)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx91[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_91.4bpp.lz");
static const ax_sprite sGyaradosSprites91[] = {
	{sGyaradosGfx91, ARRAY_COUNT(sGyaradosGfx91)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx92[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_92.4bpp.lz");
static const ax_sprite sGyaradosSprites92[] = {
	{sGyaradosGfx92, ARRAY_COUNT(sGyaradosGfx92)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx93[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_93.4bpp.lz");
static const ax_sprite sGyaradosSprites93[] = {
	{sGyaradosGfx93, ARRAY_COUNT(sGyaradosGfx93)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx94[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_94.4bpp.lz");
static const ax_sprite sGyaradosSprites94[] = {
	{sGyaradosGfx94, ARRAY_COUNT(sGyaradosGfx94)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx95[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_95.4bpp.lz");
static const ax_sprite sGyaradosSprites95[] = {
	{sGyaradosGfx95, ARRAY_COUNT(sGyaradosGfx95)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx96[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_96.4bpp.lz");
static const ax_sprite sGyaradosSprites96[] = {
	{sGyaradosGfx96, ARRAY_COUNT(sGyaradosGfx96)}, 
	{NULL, 0}
};
static const u8 sGyaradosGfx97[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gyarados/sprite_97.4bpp.lz");
static const ax_sprite sGyaradosSprites97[] = {
	{sGyaradosGfx97, ARRAY_COUNT(sGyaradosGfx97)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesGyarados[] = {
	sGyaradosPose1,
	sGyaradosPose2,
	sGyaradosPose3,
	sGyaradosPose4,
	sGyaradosPose5,
	sGyaradosPose6,
	sGyaradosPose7,
	sGyaradosPose8,
	sGyaradosPose9,
	sGyaradosPose10,
	sGyaradosPose11,
	sGyaradosPose12,
	sGyaradosPose13,
	sGyaradosPose14,
	sGyaradosPose15,
	sGyaradosPose16,
	sGyaradosPose17,
	sGyaradosPose18,
	sGyaradosPose19,
	sGyaradosPose20,
	sGyaradosPose21,
	sGyaradosPose22,
	sGyaradosPose23,
	sGyaradosPose24,
	sGyaradosPose1,
	sGyaradosPose2,
	sGyaradosPose3,
	sGyaradosPose4,
	sGyaradosPose5,
	sGyaradosPose6,
	sGyaradosPose7,
	sGyaradosPose8,
	sGyaradosPose9,
	sGyaradosPose10,
	sGyaradosPose11,
	sGyaradosPose12,
	sGyaradosPose13,
	sGyaradosPose14,
	sGyaradosPose15,
	sGyaradosPose16,
	sGyaradosPose17,
	sGyaradosPose18,
	sGyaradosPose19,
	sGyaradosPose20,
	sGyaradosPose21,
	sGyaradosPose22,
	sGyaradosPose23,
	sGyaradosPose24,
	sGyaradosPose1,
	sGyaradosPose2,
	sGyaradosPose3,
	sGyaradosPose4,
	sGyaradosPose5,
	sGyaradosPose6,
	sGyaradosPose7,
	sGyaradosPose8,
	sGyaradosPose9,
	sGyaradosPose10,
	sGyaradosPose11,
	sGyaradosPose12,
	sGyaradosPose13,
	sGyaradosPose14,
	sGyaradosPose15,
	sGyaradosPose16,
	sGyaradosPose17,
	sGyaradosPose18,
	sGyaradosPose19,
	sGyaradosPose20,
	sGyaradosPose21,
	sGyaradosPose22,
	sGyaradosPose23,
	sGyaradosPose24,
	sGyaradosPose1,
	sGyaradosPose2,
	sGyaradosPose3,
	sGyaradosPose76,
	sGyaradosPose4,
	sGyaradosPose5,
	sGyaradosPose6,
	sGyaradosPose80,
	sGyaradosPose7,
	sGyaradosPose8,
	sGyaradosPose9,
	sGyaradosPose84,
	sGyaradosPose10,
	sGyaradosPose11,
	sGyaradosPose12,
	sGyaradosPose88,
	sGyaradosPose13,
	sGyaradosPose14,
	sGyaradosPose15,
	sGyaradosPose92,
	sGyaradosPose16,
	sGyaradosPose17,
	sGyaradosPose18,
	sGyaradosPose96,
	sGyaradosPose19,
	sGyaradosPose20,
	sGyaradosPose21,
	sGyaradosPose100,
	sGyaradosPose22,
	sGyaradosPose23,
	sGyaradosPose24,
	sGyaradosPose104,
	sGyaradosPose1,
	sGyaradosPose2,
	sGyaradosPose3,
	sGyaradosPose108,
	sGyaradosPose4,
	sGyaradosPose5,
	sGyaradosPose6,
	sGyaradosPose112,
	sGyaradosPose7,
	sGyaradosPose8,
	sGyaradosPose9,
	sGyaradosPose116,
	sGyaradosPose10,
	sGyaradosPose11,
	sGyaradosPose12,
	sGyaradosPose120,
	sGyaradosPose13,
	sGyaradosPose14,
	sGyaradosPose15,
	sGyaradosPose124,
	sGyaradosPose16,
	sGyaradosPose17,
	sGyaradosPose18,
	sGyaradosPose128,
	sGyaradosPose19,
	sGyaradosPose20,
	sGyaradosPose21,
	sGyaradosPose132,
	sGyaradosPose22,
	sGyaradosPose23,
	sGyaradosPose24,
	sGyaradosPose136,
	sGyaradosPose137,
	sGyaradosPose138,
	sGyaradosPose139,
	sGyaradosPose140,
	sGyaradosPose141,
	sGyaradosPose142,
	sGyaradosPose143,
	sGyaradosPose144,
	sGyaradosPose145,
	sGyaradosPose146,
	sGyaradosPose1,
	sGyaradosPose22,
	sGyaradosPose19,
	sGyaradosPose16,
	sGyaradosPose13,
	sGyaradosPose10,
	sGyaradosPose7,
	sGyaradosPose4,
	sGyaradosPose155,
	sGyaradosPose156,
	sGyaradosPose157,
	sGyaradosPose158,
	sGyaradosPose159,
	sGyaradosPose160,
	sGyaradosPose161,
	sGyaradosPose162,
	sGyaradosPose3,
	sGyaradosPose6,
	sGyaradosPose9,
	sGyaradosPose12,
	sGyaradosPose15,
	sGyaradosPose18,
	sGyaradosPose21,
	sGyaradosPose24,
	sGyaradosPose1,
	sGyaradosPose2,
	sGyaradosPose108,
	sGyaradosPose155,
	sGyaradosPose4,
	sGyaradosPose176,
	sGyaradosPose177,
	sGyaradosPose178,
	sGyaradosPose7,
	sGyaradosPose8,
	sGyaradosPose116,
	sGyaradosPose182,
	sGyaradosPose10,
	sGyaradosPose11,
	sGyaradosPose185,
	sGyaradosPose160,
	sGyaradosPose13,
	sGyaradosPose14,
	sGyaradosPose124,
	sGyaradosPose159,
	sGyaradosPose16,
	sGyaradosPose17,
	sGyaradosPose193,
	sGyaradosPose158,
	sGyaradosPose19,
	sGyaradosPose20,
	sGyaradosPose132,
	sGyaradosPose198,
	sGyaradosPose22,
	sGyaradosPose200,
	sGyaradosPose201,
	sGyaradosPose202,
	sGyaradosPose155,
	sGyaradosPose204,
	sGyaradosPose100,
	sGyaradosPose206,
	sGyaradosPose159,
	sGyaradosPose208,
	sGyaradosPose84,
	sGyaradosPose210,
	sGyaradosPose1,
	sGyaradosPose22,
	sGyaradosPose19,
	sGyaradosPose16,
	sGyaradosPose13,
	sGyaradosPose10,
	sGyaradosPose7,
	sGyaradosPose4,
};

static const struct PositionSets sAxPositionsGyarados[] = {
	[0] = { .set = { {0, -24}, {-16, -30}, {16, -30}, {0, -30} } },
	[1] = { .set = { {0, -18}, {-14, -28}, {13, -28}, {0, -26} } },
	[2] = { .set = { {0, -29}, {-13, -33}, {13, -33}, {0, -32} } },
	[3] = { .set = { {18, -26}, {26, -34}, {2, -29}, {1, -10} } },
	[4] = { .set = { {25, -20}, {31, -31}, {8, -24}, {2, -11} } },
	[5] = { .set = { {15, -30}, {23, -36}, {2, -31}, {-1, -14} } },
	[6] = { .set = { {24, -33}, {15, -43}, {14, -32}, {2, -14} } },
	[7] = { .set = { {33, -28}, {21, -38}, {18, -28}, {1, -15} } },
	[8] = { .set = { {18, -39}, {12, -43}, {11, -32}, {2, -14} } },
	[9] = { .set = { {15, -39}, {0, -42}, {19, -38}, {3, -17} } },
	[10] = { .set = { {23, -34}, {6, -42}, {22, -37}, {2, -17} } },
	[11] = { .set = { {11, -41}, {-4, -46}, {17, -42}, {3, -15} } },
	[12] = { .set = { {0, -44}, {15, -41}, {-15, -41}, {0, -31} } },
	[13] = { .set = { {1, -41}, {13, -39}, {-13, -39}, {1, -31} } },
	[14] = { .set = { {0, -45}, {15, -45}, {-15, -45}, {0, -29} } },
	[15] = { .set = { {-16, -39}, {-1, -42}, {-20, -38}, {-4, -17} } },
	[16] = { .set = { {-24, -34}, {-7, -42}, {-23, -37}, {-3, -17} } },
	[17] = { .set = { {-12, -41}, {3, -46}, {-18, -42}, {-4, -15} } },
	[18] = { .set = { {-25, -33}, {-16, -43}, {-15, -32}, {-3, -14} } },
	[19] = { .set = { {-34, -28}, {-22, -38}, {-19, -28}, {-2, -15} } },
	[20] = { .set = { {-19, -39}, {-13, -43}, {-12, -32}, {-3, -14} } },
	[21] = { .set = { {-19, -26}, {-27, -34}, {-3, -29}, {-2, -10} } },
	[22] = { .set = { {-26, -20}, {-32, -31}, {-9, -24}, {-3, -11} } },
	[23] = { .set = { {-16, -30}, {-24, -36}, {-3, -31}, {0, -14} } },
	[24] = { .set = { {0, -24}, {-16, -30}, {16, -30}, {0, -30} } },
	[25] = { .set = { {0, -18}, {-14, -28}, {13, -28}, {0, -26} } },
	[26] = { .set = { {0, -29}, {-13, -33}, {13, -33}, {0, -32} } },
	[27] = { .set = { {18, -26}, {26, -34}, {2, -29}, {1, -10} } },
	[28] = { .set = { {25, -20}, {31, -31}, {8, -24}, {2, -11} } },
	[29] = { .set = { {15, -30}, {23, -36}, {2, -31}, {-1, -14} } },
	[30] = { .set = { {24, -33}, {15, -43}, {14, -32}, {2, -14} } },
	[31] = { .set = { {33, -28}, {21, -38}, {18, -28}, {1, -15} } },
	[32] = { .set = { {18, -39}, {12, -43}, {11, -32}, {2, -14} } },
	[33] = { .set = { {15, -39}, {0, -42}, {19, -38}, {3, -17} } },
	[34] = { .set = { {23, -34}, {6, -42}, {22, -37}, {2, -17} } },
	[35] = { .set = { {11, -41}, {-4, -46}, {17, -42}, {3, -15} } },
	[36] = { .set = { {0, -44}, {15, -41}, {-15, -41}, {0, -31} } },
	[37] = { .set = { {1, -41}, {13, -39}, {-13, -39}, {1, -31} } },
	[38] = { .set = { {0, -45}, {15, -45}, {-15, -45}, {0, -29} } },
	[39] = { .set = { {-16, -39}, {-1, -42}, {-20, -38}, {-4, -17} } },
	[40] = { .set = { {-24, -34}, {-7, -42}, {-23, -37}, {-3, -17} } },
	[41] = { .set = { {-12, -41}, {3, -46}, {-18, -42}, {-4, -15} } },
	[42] = { .set = { {-25, -33}, {-16, -43}, {-15, -32}, {-3, -14} } },
	[43] = { .set = { {-34, -28}, {-22, -38}, {-19, -28}, {-2, -15} } },
	[44] = { .set = { {-19, -39}, {-13, -43}, {-12, -32}, {-3, -14} } },
	[45] = { .set = { {-19, -26}, {-27, -34}, {-3, -29}, {-2, -10} } },
	[46] = { .set = { {-26, -20}, {-32, -31}, {-9, -24}, {-3, -11} } },
	[47] = { .set = { {-16, -30}, {-24, -36}, {-3, -31}, {0, -14} } },
	[48] = { .set = { {0, -24}, {-16, -30}, {16, -30}, {0, -30} } },
	[49] = { .set = { {0, -18}, {-14, -28}, {13, -28}, {0, -26} } },
	[50] = { .set = { {0, -29}, {-13, -33}, {13, -33}, {0, -32} } },
	[51] = { .set = { {18, -26}, {26, -34}, {2, -29}, {1, -10} } },
	[52] = { .set = { {25, -20}, {31, -31}, {8, -24}, {2, -11} } },
	[53] = { .set = { {15, -30}, {23, -36}, {2, -31}, {-1, -14} } },
	[54] = { .set = { {24, -33}, {15, -43}, {14, -32}, {2, -14} } },
	[55] = { .set = { {33, -28}, {21, -38}, {18, -28}, {1, -15} } },
	[56] = { .set = { {18, -39}, {12, -43}, {11, -32}, {2, -14} } },
	[57] = { .set = { {15, -39}, {0, -42}, {19, -38}, {3, -17} } },
	[58] = { .set = { {23, -34}, {6, -42}, {22, -37}, {2, -17} } },
	[59] = { .set = { {11, -41}, {-4, -46}, {17, -42}, {3, -15} } },
	[60] = { .set = { {0, -44}, {15, -41}, {-15, -41}, {0, -31} } },
	[61] = { .set = { {1, -41}, {13, -39}, {-13, -39}, {1, -31} } },
	[62] = { .set = { {0, -45}, {15, -45}, {-15, -45}, {0, -29} } },
	[63] = { .set = { {-16, -39}, {-1, -42}, {-20, -38}, {-4, -17} } },
	[64] = { .set = { {-24, -34}, {-7, -42}, {-23, -37}, {-3, -17} } },
	[65] = { .set = { {-12, -41}, {3, -46}, {-18, -42}, {-4, -15} } },
	[66] = { .set = { {-25, -33}, {-16, -43}, {-15, -32}, {-3, -14} } },
	[67] = { .set = { {-34, -28}, {-22, -38}, {-19, -28}, {-2, -15} } },
	[68] = { .set = { {-19, -39}, {-13, -43}, {-12, -32}, {-3, -14} } },
	[69] = { .set = { {-19, -26}, {-27, -34}, {-3, -29}, {-2, -10} } },
	[70] = { .set = { {-26, -20}, {-32, -31}, {-9, -24}, {-3, -11} } },
	[71] = { .set = { {-16, -30}, {-24, -36}, {-3, -31}, {0, -14} } },
	[72] = { .set = { {0, -24}, {-16, -30}, {16, -30}, {0, -30} } },
	[73] = { .set = { {0, -18}, {-14, -28}, {13, -28}, {0, -26} } },
	[74] = { .set = { {0, -29}, {-13, -33}, {13, -33}, {0, -32} } },
	[75] = { .set = { {0, -17}, {-14, -29}, {13, -29}, {1, -32} } },
	[76] = { .set = { {18, -26}, {26, -34}, {2, -29}, {1, -10} } },
	[77] = { .set = { {25, -20}, {31, -31}, {8, -24}, {2, -11} } },
	[78] = { .set = { {15, -30}, {23, -36}, {2, -31}, {-1, -14} } },
	[79] = { .set = { {26, -17}, {32, -27}, {11, -23}, {0, -14} } },
	[80] = { .set = { {24, -33}, {15, -43}, {14, -32}, {2, -14} } },
	[81] = { .set = { {33, -28}, {21, -38}, {18, -28}, {1, -15} } },
	[82] = { .set = { {18, -39}, {12, -43}, {11, -32}, {2, -14} } },
	[83] = { .set = { {33, -25}, {25, -41}, {21, -28}, {5, -13} } },
	[84] = { .set = { {15, -39}, {0, -42}, {19, -38}, {3, -17} } },
	[85] = { .set = { {23, -34}, {6, -42}, {22, -37}, {2, -17} } },
	[86] = { .set = { {11, -41}, {-4, -46}, {17, -42}, {3, -15} } },
	[87] = { .set = { {24, -32}, {13, -42}, {26, -35}, {6, -15} } },
	[88] = { .set = { {0, -44}, {15, -41}, {-15, -41}, {0, -31} } },
	[89] = { .set = { {1, -41}, {13, -39}, {-13, -39}, {1, -31} } },
	[90] = { .set = { {0, -45}, {15, -45}, {-15, -45}, {0, -29} } },
	[91] = { .set = { {1, -41}, {12, -40}, {-12, -40}, {1, -28} } },
	[92] = { .set = { {-16, -39}, {-1, -42}, {-20, -38}, {-4, -17} } },
	[93] = { .set = { {-24, -34}, {-7, -42}, {-23, -37}, {-3, -17} } },
	[94] = { .set = { {-12, -41}, {3, -46}, {-18, -42}, {-4, -15} } },
	[95] = { .set = { {-25, -32}, {-14, -42}, {-27, -35}, {-7, -15} } },
	[96] = { .set = { {-25, -33}, {-16, -43}, {-15, -32}, {-3, -14} } },
	[97] = { .set = { {-34, -28}, {-22, -38}, {-19, -28}, {-2, -15} } },
	[98] = { .set = { {-19, -39}, {-13, -43}, {-12, -32}, {-3, -14} } },
	[99] = { .set = { {-34, -25}, {-26, -41}, {-22, -28}, {-6, -13} } },
	[100] = { .set = { {-19, -26}, {-27, -34}, {-3, -29}, {-2, -10} } },
	[101] = { .set = { {-26, -20}, {-32, -31}, {-9, -24}, {-3, -11} } },
	[102] = { .set = { {-16, -30}, {-24, -36}, {-3, -31}, {0, -14} } },
	[103] = { .set = { {-27, -17}, {-33, -27}, {-12, -23}, {-1, -14} } },
	[104] = { .set = { {0, -24}, {-16, -30}, {16, -30}, {0, -30} } },
	[105] = { .set = { {0, -18}, {-14, -28}, {13, -28}, {0, -26} } },
	[106] = { .set = { {0, -29}, {-13, -33}, {13, -33}, {0, -32} } },
	[107] = { .set = { {0, -36}, {-17, -34}, {15, -33}, {0, -17} } },
	[108] = { .set = { {18, -26}, {26, -34}, {2, -29}, {1, -10} } },
	[109] = { .set = { {25, -20}, {31, -31}, {8, -24}, {2, -11} } },
	[110] = { .set = { {15, -30}, {23, -36}, {2, -31}, {-1, -14} } },
	[111] = { .set = { {13, -40}, {18, -44}, {-1, -35}, {6, -14} } },
	[112] = { .set = { {24, -33}, {15, -43}, {14, -32}, {2, -14} } },
	[113] = { .set = { {33, -28}, {21, -38}, {18, -28}, {1, -15} } },
	[114] = { .set = { {18, -39}, {12, -43}, {11, -32}, {2, -14} } },
	[115] = { .set = { {19, -53}, {9, -51}, {10, -42}, {5, -13} } },
	[116] = { .set = { {15, -39}, {0, -42}, {19, -38}, {3, -17} } },
	[117] = { .set = { {23, -34}, {6, -42}, {22, -37}, {2, -17} } },
	[118] = { .set = { {11, -41}, {-4, -46}, {17, -42}, {3, -15} } },
	[119] = { .set = { {8, -46}, {-6, -48}, {13, -49}, {6, -19} } },
	[120] = { .set = { {0, -44}, {15, -41}, {-15, -41}, {0, -31} } },
	[121] = { .set = { {1, -41}, {13, -39}, {-13, -39}, {1, -31} } },
	[122] = { .set = { {0, -45}, {15, -45}, {-15, -45}, {0, -29} } },
	[123] = { .set = { {0, -50}, {14, -41}, {-14, -41}, {1, -25} } },
	[124] = { .set = { {-16, -39}, {-1, -42}, {-20, -38}, {-4, -17} } },
	[125] = { .set = { {-24, -34}, {-7, -42}, {-23, -37}, {-3, -17} } },
	[126] = { .set = { {-12, -41}, {3, -46}, {-18, -42}, {-4, -15} } },
	[127] = { .set = { {-9, -46}, {5, -48}, {-14, -49}, {-7, -19} } },
	[128] = { .set = { {-25, -33}, {-16, -43}, {-15, -32}, {-3, -14} } },
	[129] = { .set = { {-34, -28}, {-22, -38}, {-19, -28}, {-2, -15} } },
	[130] = { .set = { {-19, -39}, {-13, -43}, {-12, -32}, {-3, -14} } },
	[131] = { .set = { {-20, -53}, {-10, -51}, {-11, -42}, {-6, -13} } },
	[132] = { .set = { {-19, -26}, {-27, -34}, {-3, -29}, {-2, -10} } },
	[133] = { .set = { {-26, -20}, {-32, -31}, {-9, -24}, {-3, -11} } },
	[134] = { .set = { {-16, -30}, {-24, -36}, {-3, -31}, {0, -14} } },
	[135] = { .set = { {-14, -40}, {-19, -44}, {0, -35}, {-7, -14} } },
	[136] = { .set = { {-21, -24}, {-28, -34}, {-3, -29}, {-2, -13} } },
	[137] = { .set = { {-22, -23}, {-29, -33}, {-6, -28}, {-3, -12} } },
	[138] = { .set = { {0, -36}, {-14, -33}, {13, -33}, {1, -20} } },
	[139] = { .set = { {18, -38}, {19, -46}, {3, -30}, {4, -11} } },
	[140] = { .set = { {21, -48}, {10, -43}, {11, -35}, {1, -8} } },
	[141] = { .set = { {9, -42}, {-5, -45}, {13, -43}, {5, -10} } },
	[142] = { .set = { {0, -47}, {14, -36}, {-14, -36}, {0, -24} } },
	[143] = { .set = { {-10, -42}, {4, -45}, {-14, -43}, {-6, -10} } },
	[144] = { .set = { {-22, -48}, {-11, -43}, {-12, -35}, {-2, -8} } },
	[145] = { .set = { {-19, -38}, {-20, -46}, {-4, -30}, {-5, -11} } },
	[146] = { .set = { {0, -24}, {-16, -30}, {16, -30}, {0, -30} } },
	[147] = { .set = { {-19, -26}, {-27, -34}, {-3, -29}, {-2, -10} } },
	[148] = { .set = { {-25, -33}, {-16, -43}, {-15, -32}, {-3, -14} } },
	[149] = { .set = { {-16, -39}, {-1, -42}, {-20, -38}, {-4, -17} } },
	[150] = { .set = { {0, -44}, {15, -41}, {-15, -41}, {0, -31} } },
	[151] = { .set = { {15, -39}, {0, -42}, {19, -38}, {3, -17} } },
	[152] = { .set = { {24, -33}, {15, -43}, {14, -32}, {2, -14} } },
	[153] = { .set = { {18, -26}, {26, -34}, {2, -29}, {1, -10} } },
	[154] = { .set = { {0, -8}, {-14, -20}, {13, -20}, {1, -23} } },
	[155] = { .set = { {-25, -14}, {-31, -24}, {-10, -20}, {1, -11} } },
	[156] = { .set = { {-31, -25}, {-23, -41}, {-19, -28}, {-3, -13} } },
	[157] = { .set = { {-22, -32}, {-11, -42}, {-24, -35}, {-4, -15} } },
	[158] = { .set = { {1, -42}, {12, -41}, {-12, -41}, {1, -29} } },
	[159] = { .set = { {21, -32}, {10, -42}, {23, -35}, {3, -15} } },
	[160] = { .set = { {30, -25}, {22, -41}, {18, -28}, {2, -13} } },
	[161] = { .set = { {24, -14}, {30, -24}, {9, -20}, {-2, -11} } },
	[162] = { .set = { {0, -29}, {-13, -33}, {13, -33}, {0, -32} } },
	[163] = { .set = { {15, -30}, {23, -36}, {2, -31}, {-1, -14} } },
	[164] = { .set = { {18, -39}, {12, -43}, {11, -32}, {2, -14} } },
	[165] = { .set = { {11, -41}, {-4, -46}, {17, -42}, {3, -15} } },
	[166] = { .set = { {0, -45}, {15, -45}, {-15, -45}, {0, -29} } },
	[167] = { .set = { {-12, -41}, {3, -46}, {-18, -42}, {-4, -15} } },
	[168] = { .set = { {-19, -39}, {-13, -43}, {-12, -32}, {-3, -14} } },
	[169] = { .set = { {-16, -30}, {-24, -36}, {-3, -31}, {0, -14} } },
	[170] = { .set = { {0, -24}, {-16, -30}, {16, -30}, {0, -30} } },
	[171] = { .set = { {0, -18}, {-14, -28}, {13, -28}, {0, -26} } },
	[172] = { .set = { {0, -36}, {-17, -34}, {15, -33}, {0, -17} } },
	[173] = { .set = { {0, -8}, {-14, -20}, {13, -20}, {1, -23} } },
	[174] = { .set = { {18, -26}, {26, -34}, {2, -29}, {1, -10} } },
	[175] = { .set = { {23, -20}, {29, -31}, {6, -24}, {0, -11} } },
	[176] = { .set = { {11, -40}, {16, -44}, {-3, -35}, {4, -14} } },
	[177] = { .set = { {22, -14}, {28, -24}, {7, -20}, {-4, -11} } },
	[178] = { .set = { {24, -33}, {15, -43}, {14, -32}, {2, -14} } },
	[179] = { .set = { {33, -28}, {21, -38}, {18, -28}, {1, -15} } },
	[180] = { .set = { {19, -53}, {9, -51}, {10, -42}, {5, -13} } },
	[181] = { .set = { {31, -25}, {23, -41}, {19, -28}, {3, -13} } },
	[182] = { .set = { {15, -39}, {0, -42}, {19, -38}, {3, -17} } },
	[183] = { .set = { {23, -34}, {6, -42}, {22, -37}, {2, -17} } },
	[184] = { .set = { {6, -46}, {-8, -48}, {11, -49}, {4, -19} } },
	[185] = { .set = { {21, -32}, {10, -42}, {23, -35}, {3, -15} } },
	[186] = { .set = { {0, -44}, {15, -41}, {-15, -41}, {0, -31} } },
	[187] = { .set = { {1, -41}, {13, -39}, {-13, -39}, {1, -31} } },
	[188] = { .set = { {0, -50}, {14, -41}, {-14, -41}, {1, -25} } },
	[189] = { .set = { {1, -42}, {12, -41}, {-12, -41}, {1, -29} } },
	[190] = { .set = { {-16, -39}, {-1, -42}, {-20, -38}, {-4, -17} } },
	[191] = { .set = { {-24, -34}, {-7, -42}, {-23, -37}, {-3, -17} } },
	[192] = { .set = { {-7, -46}, {7, -48}, {-12, -49}, {-5, -19} } },
	[193] = { .set = { {-22, -32}, {-11, -42}, {-24, -35}, {-4, -15} } },
	[194] = { .set = { {-25, -33}, {-16, -43}, {-15, -32}, {-3, -14} } },
	[195] = { .set = { {-34, -28}, {-22, -38}, {-19, -28}, {-2, -15} } },
	[196] = { .set = { {-20, -53}, {-10, -51}, {-11, -42}, {-6, -13} } },
	[197] = { .set = { {-32, -25}, {-24, -41}, {-20, -28}, {-4, -13} } },
	[198] = { .set = { {-19, -26}, {-27, -34}, {-3, -29}, {-2, -10} } },
	[199] = { .set = { {-24, -20}, {-30, -31}, {-7, -24}, {-1, -11} } },
	[200] = { .set = { {-12, -40}, {-17, -44}, {2, -35}, {-5, -14} } },
	[201] = { .set = { {-23, -14}, {-29, -24}, {-8, -20}, {3, -11} } },
	[202] = { .set = { {0, -8}, {-14, -20}, {13, -20}, {1, -23} } },
	[203] = { .set = { {-27, -14}, {-33, -24}, {-12, -20}, {-1, -11} } },
	[204] = { .set = { {-34, -25}, {-26, -41}, {-22, -28}, {-6, -13} } },
	[205] = { .set = { {-20, -32}, {-9, -42}, {-22, -35}, {-2, -15} } },
	[206] = { .set = { {1, -42}, {12, -41}, {-12, -41}, {1, -29} } },
	[207] = { .set = { {20, -32}, {9, -42}, {22, -35}, {2, -15} } },
	[208] = { .set = { {33, -25}, {25, -41}, {21, -28}, {5, -13} } },
	[209] = { .set = { {26, -14}, {32, -24}, {11, -20}, {0, -11} } },
	[210] = { .set = { {0, -24}, {-16, -30}, {16, -30}, {0, -30} } },
	[211] = { .set = { {-19, -26}, {-27, -34}, {-3, -29}, {-2, -10} } },
	[212] = { .set = { {-25, -33}, {-16, -43}, {-15, -32}, {-3, -14} } },
	[213] = { .set = { {-16, -39}, {-1, -42}, {-20, -38}, {-4, -17} } },
	[214] = { .set = { {0, -44}, {15, -41}, {-15, -41}, {0, -31} } },
	[215] = { .set = { {15, -39}, {0, -42}, {19, -38}, {3, -17} } },
	[216] = { .set = { {24, -33}, {15, -43}, {14, -32}, {2, -14} } },
	[217] = { .set = { {18, -26}, {26, -34}, {2, -29}, {1, -10} } },
};

static const ax_anim *const sGyaradosAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_00037),
	AX_ANIM_PTR(gAxSharedAnim_00081),
	AX_ANIM_PTR(gAxSharedAnim_00086),
	AX_ANIM_PTR(gAxSharedAnim_00091),
	AX_ANIM_PTR(gAxSharedAnim_00042),
	AX_ANIM_PTR(gAxSharedAnim_00056),
	AX_ANIM_PTR(gAxSharedAnim_00062),
	AX_ANIM_PTR(gAxSharedAnim_00067),
};

static const ax_anim *const sGyaradosAnimTable2[] = {
	AX_ANIM_PTR(sGyaradosAnims_2_1),
	AX_ANIM_PTR(sGyaradosAnims_2_2),
	AX_ANIM_PTR(sGyaradosAnims_2_3),
	AX_ANIM_PTR(sGyaradosAnims_2_4),
	AX_ANIM_PTR(sGyaradosAnims_2_5),
	AX_ANIM_PTR(sGyaradosAnims_2_6),
	AX_ANIM_PTR(sGyaradosAnims_2_7),
	AX_ANIM_PTR(sGyaradosAnims_2_8),
};

static const ax_anim *const sGyaradosAnimTable3[] = {
	AX_ANIM_PTR(sGyaradosAnims_3_1),
	AX_ANIM_PTR(sGyaradosAnims_3_2),
	AX_ANIM_PTR(sGyaradosAnims_3_3),
	AX_ANIM_PTR(sGyaradosAnims_3_4),
	AX_ANIM_PTR(sGyaradosAnims_3_5),
	AX_ANIM_PTR(sGyaradosAnims_3_6),
	AX_ANIM_PTR(sGyaradosAnims_3_7),
	AX_ANIM_PTR(sGyaradosAnims_3_8),
};

static const ax_anim *const sGyaradosAnimTable4[] = {
	AX_ANIM_PTR(sGyaradosAnims_4_1),
	AX_ANIM_PTR(sGyaradosAnims_4_2),
	AX_ANIM_PTR(sGyaradosAnims_4_3),
	AX_ANIM_PTR(sGyaradosAnims_4_4),
	AX_ANIM_PTR(sGyaradosAnims_4_5),
	AX_ANIM_PTR(sGyaradosAnims_4_6),
	AX_ANIM_PTR(sGyaradosAnims_4_7),
	AX_ANIM_PTR(sGyaradosAnims_4_8),
};

static const ax_anim *const sGyaradosAnimTable5[] = {
	AX_ANIM_PTR(sGyaradosAnims_5_1),
	AX_ANIM_PTR(sGyaradosAnims_5_2),
	AX_ANIM_PTR(sGyaradosAnims_5_3),
	AX_ANIM_PTR(sGyaradosAnims_5_4),
	AX_ANIM_PTR(sGyaradosAnims_5_5),
	AX_ANIM_PTR(sGyaradosAnims_5_6),
	AX_ANIM_PTR(sGyaradosAnims_5_7),
	AX_ANIM_PTR(sGyaradosAnims_5_8),
};

static const ax_anim *const sGyaradosAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_00138),
	AX_ANIM_PTR(gAxSharedAnim_00138),
	AX_ANIM_PTR(gAxSharedAnim_00138),
	AX_ANIM_PTR(gAxSharedAnim_00138),
	AX_ANIM_PTR(gAxSharedAnim_00138),
	AX_ANIM_PTR(gAxSharedAnim_00138),
	AX_ANIM_PTR(gAxSharedAnim_00138),
	AX_ANIM_PTR(gAxSharedAnim_00138),
};

static const ax_anim *const sGyaradosAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00466),
	AX_ANIM_PTR(gAxSharedAnim_00479),
	AX_ANIM_PTR(gAxSharedAnim_00487),
	AX_ANIM_PTR(gAxSharedAnim_00496),
	AX_ANIM_PTR(gAxSharedAnim_00508),
	AX_ANIM_PTR(gAxSharedAnim_00517),
	AX_ANIM_PTR(gAxSharedAnim_00523),
	AX_ANIM_PTR(gAxSharedAnim_00529),
};

static const ax_anim *const sGyaradosAnimTable8[] = {
	AX_ANIM_PTR(sGyaradosAnims_8_1),
	AX_ANIM_PTR(sGyaradosAnims_8_2),
	AX_ANIM_PTR(sGyaradosAnims_8_3),
	AX_ANIM_PTR(sGyaradosAnims_8_4),
	AX_ANIM_PTR(sGyaradosAnims_8_5),
	AX_ANIM_PTR(sGyaradosAnims_8_6),
	AX_ANIM_PTR(sGyaradosAnims_8_7),
	AX_ANIM_PTR(sGyaradosAnims_8_8),
};

static const ax_anim *const sGyaradosAnimTable9[] = {
	AX_ANIM_PTR(sGyaradosAnims_9_1),
	AX_ANIM_PTR(sGyaradosAnims_9_2),
	AX_ANIM_PTR(sGyaradosAnims_9_3),
	AX_ANIM_PTR(sGyaradosAnims_9_4),
	AX_ANIM_PTR(sGyaradosAnims_9_5),
	AX_ANIM_PTR(sGyaradosAnims_9_6),
	AX_ANIM_PTR(sGyaradosAnims_9_7),
	AX_ANIM_PTR(sGyaradosAnims_9_8),
};

static const ax_anim *const sGyaradosAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00705),
	AX_ANIM_PTR(gAxSharedAnim_00714),
	AX_ANIM_PTR(gAxSharedAnim_00725),
	AX_ANIM_PTR(gAxSharedAnim_00737),
	AX_ANIM_PTR(gAxSharedAnim_00750),
	AX_ANIM_PTR(gAxSharedAnim_00760),
	AX_ANIM_PTR(gAxSharedAnim_00772),
	AX_ANIM_PTR(gAxSharedAnim_00781),
};

static const ax_anim *const sGyaradosAnimTable11[] = {
	AX_ANIM_PTR(sGyaradosAnims_11_1),
	AX_ANIM_PTR(sGyaradosAnims_11_2),
	AX_ANIM_PTR(sGyaradosAnims_11_3),
	AX_ANIM_PTR(sGyaradosAnims_11_4),
	AX_ANIM_PTR(sGyaradosAnims_11_5),
	AX_ANIM_PTR(sGyaradosAnims_11_6),
	AX_ANIM_PTR(sGyaradosAnims_11_7),
	AX_ANIM_PTR(sGyaradosAnims_11_8),
};

static const ax_anim *const sGyaradosAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01243),
	AX_ANIM_PTR(gAxSharedAnim_01326),
	AX_ANIM_PTR(gAxSharedAnim_01308),
	AX_ANIM_PTR(gAxSharedAnim_01292),
	AX_ANIM_PTR(gAxSharedAnim_01291),
	AX_ANIM_PTR(gAxSharedAnim_01280),
	AX_ANIM_PTR(gAxSharedAnim_01260),
	AX_ANIM_PTR(gAxSharedAnim_01244),
};

static const ax_anim *const sGyaradosAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01335),
	AX_ANIM_PTR(gAxSharedAnim_01409),
	AX_ANIM_PTR(gAxSharedAnim_01397),
	AX_ANIM_PTR(gAxSharedAnim_01386),
	AX_ANIM_PTR(gAxSharedAnim_01374),
	AX_ANIM_PTR(gAxSharedAnim_01366),
	AX_ANIM_PTR(gAxSharedAnim_01358),
	AX_ANIM_PTR(gAxSharedAnim_01348),
};

static const ax_anim *const *const sAxAnimationsGyarados[] = {
	sGyaradosAnimTable1,
	sGyaradosAnimTable2,
	sGyaradosAnimTable3,
	sGyaradosAnimTable4,
	sGyaradosAnimTable5,
	sGyaradosAnimTable6,
	sGyaradosAnimTable7,
	sGyaradosAnimTable8,
	sGyaradosAnimTable9,
	sGyaradosAnimTable10,
	sGyaradosAnimTable11,
	sGyaradosAnimTable12,
	sGyaradosAnimTable13,
};

static const ax_sprite *const sAxSpritesGyarados[] = {
	sGyaradosSprites1,
	sGyaradosSprites2,
	sGyaradosSprites3,
	sGyaradosSprites4,
	sGyaradosSprites5,
	sGyaradosSprites6,
	sGyaradosSprites7,
	sGyaradosSprites8,
	sGyaradosSprites9,
	sGyaradosSprites10,
	sGyaradosSprites11,
	sGyaradosSprites12,
	sGyaradosSprites13,
	sGyaradosSprites14,
	sGyaradosSprites15,
	sGyaradosSprites16,
	sGyaradosSprites17,
	sGyaradosSprites18,
	sGyaradosSprites19,
	sGyaradosSprites20,
	sGyaradosSprites21,
	sGyaradosSprites22,
	sGyaradosSprites23,
	sGyaradosSprites24,
	sGyaradosSprites25,
	sGyaradosSprites26,
	sGyaradosSprites27,
	sGyaradosSprites28,
	sGyaradosSprites29,
	sGyaradosSprites30,
	sGyaradosSprites31,
	sGyaradosSprites32,
	sGyaradosSprites33,
	sGyaradosSprites34,
	sGyaradosSprites35,
	sGyaradosSprites36,
	sGyaradosSprites37,
	sGyaradosSprites38,
	sGyaradosSprites39,
	sGyaradosSprites40,
	sGyaradosSprites41,
	sGyaradosSprites42,
	sGyaradosSprites43,
	sGyaradosSprites44,
	sGyaradosSprites45,
	sGyaradosSprites46,
	sGyaradosSprites47,
	sGyaradosSprites48,
	sGyaradosSprites49,
	sGyaradosSprites50,
	sGyaradosSprites51,
	sGyaradosSprites52,
	sGyaradosSprites53,
	sGyaradosSprites54,
	sGyaradosSprites55,
	sGyaradosSprites56,
	sGyaradosSprites57,
	sGyaradosSprites58,
	sGyaradosSprites59,
	sGyaradosSprites60,
	sGyaradosSprites61,
	sGyaradosSprites62,
	sGyaradosSprites63,
	sGyaradosSprites64,
	sGyaradosSprites65,
	sGyaradosSprites66,
	sGyaradosSprites67,
	sGyaradosSprites68,
	sGyaradosSprites69,
	sGyaradosSprites70,
	sGyaradosSprites71,
	sGyaradosSprites72,
	sGyaradosSprites73,
	sGyaradosSprites74,
	sGyaradosSprites75,
	sGyaradosSprites76,
	sGyaradosSprites77,
	sGyaradosSprites78,
	sGyaradosSprites79,
	sGyaradosSprites80,
	sGyaradosSprites81,
	sGyaradosSprites82,
	sGyaradosSprites83,
	sGyaradosSprites84,
	sGyaradosSprites85,
	sGyaradosSprites86,
	sGyaradosSprites87,
	sGyaradosSprites88,
	sGyaradosSprites89,
	sGyaradosSprites90,
	sGyaradosSprites91,
	sGyaradosSprites92,
	sGyaradosSprites93,
	sGyaradosSprites94,
	sGyaradosSprites95,
	sGyaradosSprites96,
	sGyaradosSprites97,
};

static const axmain sAxMainGyarados = {
	.poses = sAxPosesGyarados,
	.animations = sAxAnimationsGyarados,
	.animCount = ARRAY_COUNT(sAxAnimationsGyarados),
	.spriteData = sAxSpritesGyarados,
	.positions = sAxPositionsGyarados,
};
