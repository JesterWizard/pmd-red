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
static const axmain sAxMainMantine;
const SiroArchive gAxMantine = {"SIRO", &sAxMainMantine};

static const ax_pose sMantinePose1[] = {
	AX_POSE(0, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(1, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(2, OAM1(250, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(24, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose2[] = {
	AX_POSE(3, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(4, OAM1(233, ST_OAM_H_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(5, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(24, 3, 7)),
	AX_POSE(6, OAM1(249, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(25, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose3[] = {
	AX_POSE(7, OAM1(226, ST_OAM_H_RECTANGLE, 1), OAM2(228, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose4[] = {
	AX_POSE(8, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(9, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(230, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 7)),
	AX_POSE(10, OAM1(1, ST_OAM_H_RECTANGLE, 2), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(24, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose5[] = {
	AX_POSE(11, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(12, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(16, 3, 7)),
	AX_POSE(13, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(20, 3, 7)),
	AX_POSE(14, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(22, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose6[] = {
	AX_POSE(15, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(16, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(230, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose7[] = {
	AX_POSE(17, OAM1(3, ST_OAM_H_RECTANGLE, 2), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(224, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(2, 3, 7)),
	AX_POSE(19, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(6, 3, 7)),
	AX_POSE(20, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(16, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(22, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose8[] = {
	AX_POSE(21, OAM1(227, ST_OAM_H_RECTANGLE, 1), OAM2(224, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose9[] = {
	AX_POSE(22, OAM1(3, ST_OAM_H_RECTANGLE, 2), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(23, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(224, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(2, 3, 7)),
	AX_POSE(24, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(6, 3, 7)),
	AX_POSE(25, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(22, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose10[] = {
	AX_POSE(26, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(27, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(28, OAM1(2, ST_OAM_H_RECTANGLE, 2), OAM2(236, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose11[] = {
	AX_POSE(29, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(30, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose12[] = {
	AX_POSE(31, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(32, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(33, OAM1(4, ST_OAM_H_RECTANGLE, 2), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose13[] = {
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(35, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(36, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(20, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(24, 3, 7)),
	AX_POSE(37, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(26, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose14[] = {
	AX_POSE(38, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(39, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(40, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(20, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(24, 3, 7)),
	AX_POSE(41, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(26, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose15[] = {
	AX_POSE(42, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(43, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(44, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(20, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(24, 3, 7)),
	AX_POSE(45, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(26, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose16[] = {
	AX_POSE(46, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(47, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(48, OAM1(2, ST_OAM_H_RECTANGLE, 2), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(24, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose17[] = {
	AX_POSE(49, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(50, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(51, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose18[] = {
	AX_POSE(52, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(53, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(12, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(54, OAM1(3, ST_OAM_H_RECTANGLE, 2), OAM2(4, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(20, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose19[] = {
	AX_POSE(55, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(56, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(57, OAM1(2, ST_OAM_H_RECTANGLE, 2), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose20[] = {
	AX_POSE(58, OAM1(226, ST_OAM_H_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose21[] = {
	AX_POSE(59, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(60, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(61, OAM1(3, ST_OAM_H_RECTANGLE, 2), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose22[] = {
	AX_POSE(8, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(9, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(10, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(10, OAM1(1, ST_OAM_H_RECTANGLE, 2), OAM2(2, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(24, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose23[] = {
	AX_POSE(11, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(12, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(10, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(13, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(20, 3, 7)),
	AX_POSE(14, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(22, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose24[] = {
	AX_POSE(15, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(16, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(10, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose76[] = {
	AX_POSE(62, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(63, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(64, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(20, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(24, 3, 7)),
	AX_POSE(65, OAM1(255, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(26, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose80[] = {
	AX_POSE(66, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(214, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose84[] = {
	AX_POSE(67, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(68, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(69, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(18, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(24, 3, 7)),
	AX_POSE(70, OAM1(6, ST_OAM_SQUARE     , 2), OAM2(2, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(25, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose88[] = {
	AX_POSE(71, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(72, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(12, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(73, OAM1(3, ST_OAM_H_RECTANGLE, 2), OAM2(236, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 7)),
	AX_POSE(74, OAM1(219, ST_OAM_H_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(26, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose92[] = {
	AX_POSE(75, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(76, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(77, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(244, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 7)),
	AX_POSE(78, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(25, 3, 7)),
	AX_POSE(79, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(20, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(26, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose96[] = {
	AX_POSE(80, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(81, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(10, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(82, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 7)),
	AX_POSE(83, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(2, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(25, 3, 7)),
	AX_POSE(84, OAM1(1, ST_OAM_H_RECTANGLE, 2), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(26, 3, 7)),
	AX_POSE(85, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(250, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(28, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose100[] = {
	AX_POSE(86, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(87, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(12, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(88, OAM1(5, ST_OAM_H_RECTANGLE, 2), OAM2(244, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose104[] = {
	AX_POSE(66, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose129[] = {
	AX_POSE(89, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(90, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(11, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose130[] = {
	AX_POSE(91, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(92, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(11, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose131[] = {
	AX_POSE(93, OAM1(215, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(94, OAM1(7, ST_OAM_SQUARE     , 2), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(95, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(9, 3, 7)),
	AX_POSE(96, OAM1(247, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 7)),
	AX_POSE(97, OAM1(215, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose132[] = {
	AX_POSE(98, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 7)),
	AX_POSE(99, OAM1(209, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 7)),
	AX_POSE(100, OAM1(209, ST_OAM_V_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(101, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(16, 3, 7)),
	AX_POSE(102, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(228, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(20, 3, 7)),
	AX_POSE(103, OAM1(241, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(22, 3, 7)),
	AX_POSE(104, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(4, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(24, 3, 7)),
	AX_POSE(105, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(252, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(25, 3, 7)),
	AX_POSE(106, OAM1(209, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(26, 3, 7)),
	AX_POSE(107, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(30, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose133[] = {
	AX_POSE(108, OAM1(249, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(109, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(110, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(24, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose134[] = {
	AX_POSE(111, OAM1(213, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(112, OAM1(206, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(4, 3, 7)),
	AX_POSE(113, OAM1(213, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(5, 3, 7)),
	AX_POSE(114, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(21, 3, 7)),
	AX_POSE(115, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(23, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose135[] = {
	AX_POSE(116, OAM1(217, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 7)),
	AX_POSE(117, OAM1(249, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(118, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(21, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 7)),
	AX_POSE(119, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(229, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose136[] = {
	AX_POSE(111, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(112, OAM1(216, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(4, 3, 7)),
	AX_POSE(113, OAM1(213, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(5, 3, 7)),
	AX_POSE(114, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(12, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(21, 3, 7)),
	AX_POSE(115, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(23, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose137[] = {
	AX_POSE(110, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(11, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 7)),
	AX_POSE(108, OAM1(249, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 7)),
	AX_POSE(109, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose138[] = {
	AX_POSE(98, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(99, OAM1(209, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 7)),
	AX_POSE(100, OAM1(209, ST_OAM_V_RECTANGLE, 1), OAM2(12, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(12, 3, 7)),
	AX_POSE(101, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 7)),
	AX_POSE(102, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(12, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(20, 3, 7)),
	AX_POSE(103, OAM1(241, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(22, 3, 7)),
	AX_POSE(104, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(244, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 7)),
	AX_POSE(105, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(25, 3, 7)),
	AX_POSE(106, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(20, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(26, 3, 7)),
	AX_POSE(107, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(20, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(30, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose173[] = {
	AX_POSE(67, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(227, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(68, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(69, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(19, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(24, 3, 7)),
	AX_POSE(70, OAM1(6, ST_OAM_SQUARE     , 2), OAM2(3, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(25, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose174[] = {
	AX_POSE(71, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(72, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(13, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(73, OAM1(2, ST_OAM_H_RECTANGLE, 2), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 7)),
	AX_POSE(74, OAM1(218, ST_OAM_H_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(26, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose175[] = {
	AX_POSE(75, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(76, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(77, OAM1(3, ST_OAM_SQUARE     , 2), OAM2(244, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 7)),
	AX_POSE(78, OAM1(3, ST_OAM_SQUARE     , 2), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(25, 3, 7)),
	AX_POSE(79, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(20, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(26, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose176[] = {
	AX_POSE(80, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(81, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(82, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 7)),
	AX_POSE(83, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(25, 3, 7)),
	AX_POSE(84, OAM1(2, ST_OAM_H_RECTANGLE, 2), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(26, 3, 7)),
	AX_POSE(85, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(28, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMantinePose177[] = {
	AX_POSE(86, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(87, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(11, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(88, OAM1(5, ST_OAM_H_RECTANGLE, 2), OAM2(243, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 7)),
	AX_POSE_TERMINATOR
};
static const u8 sMantineAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_1_1.lz");
static const u8 sMantineAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_1_2.lz");
static const u8 sMantineAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_1_3.lz");
static const u8 sMantineAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_1_4.lz");
static const u8 sMantineAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_1_5.lz");
static const u8 sMantineAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_1_6.lz");
static const u8 sMantineAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_1_7.lz");
static const u8 sMantineAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_1_8.lz");
static const u8 sMantineAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_2_1.lz");
static const u8 sMantineAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_2_2.lz");
static const u8 sMantineAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_2_3.lz");
static const u8 sMantineAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_2_4.lz");
static const u8 sMantineAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_2_5.lz");
static const u8 sMantineAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_2_6.lz");
static const u8 sMantineAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_2_7.lz");
static const u8 sMantineAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_2_8.lz");
static const u8 sMantineAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_3_1.lz");
static const u8 sMantineAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_3_2.lz");
static const u8 sMantineAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_3_3.lz");
static const u8 sMantineAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_3_4.lz");
static const u8 sMantineAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_3_5.lz");
static const u8 sMantineAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_3_6.lz");
static const u8 sMantineAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_3_7.lz");
static const u8 sMantineAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_3_8.lz");
static const u8 sMantineAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_4_1.lz");
static const u8 sMantineAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_4_2.lz");
static const u8 sMantineAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_4_3.lz");
static const u8 sMantineAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_4_4.lz");
static const u8 sMantineAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_4_5.lz");
static const u8 sMantineAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_4_6.lz");
static const u8 sMantineAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_4_7.lz");
static const u8 sMantineAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_4_8.lz");
static const u8 sMantineAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_5_1.lz");
static const u8 sMantineAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_5_2.lz");
static const u8 sMantineAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_5_3.lz");
static const u8 sMantineAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_5_4.lz");
static const u8 sMantineAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_5_5.lz");
static const u8 sMantineAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_5_6.lz");
static const u8 sMantineAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_5_7.lz");
static const u8 sMantineAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_5_8.lz");
static const u8 sMantineAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_8_1.lz");
static const u8 sMantineAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_8_2.lz");
static const u8 sMantineAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_8_3.lz");
static const u8 sMantineAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_8_4.lz");
static const u8 sMantineAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_8_5.lz");
static const u8 sMantineAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_8_6.lz");
static const u8 sMantineAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_8_7.lz");
static const u8 sMantineAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_8_8.lz");
static const u8 sMantineAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_9_1.lz");
static const u8 sMantineAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_9_2.lz");
static const u8 sMantineAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_9_3.lz");
static const u8 sMantineAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_9_4.lz");
static const u8 sMantineAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_9_5.lz");
static const u8 sMantineAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_9_6.lz");
static const u8 sMantineAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_9_7.lz");
static const u8 sMantineAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_9_8.lz");
static const u8 sMantineAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_11_1.lz");
static const u8 sMantineAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_11_2.lz");
static const u8 sMantineAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_11_3.lz");
static const u8 sMantineAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_11_4.lz");
static const u8 sMantineAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_11_5.lz");
static const u8 sMantineAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_11_6.lz");
static const u8 sMantineAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_11_7.lz");
static const u8 sMantineAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mantine/sMantineAnims_11_8.lz");

static const u8 sMantineGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_1.4bpp.lz");
static const ax_sprite sMantineSprites1[] = {
	{sMantineGfx1, ARRAY_COUNT(sMantineGfx1)}, 
	{NULL, 0}
};
static const u8 sMantineGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_2.4bpp.lz");
static const ax_sprite sMantineSprites2[] = {
	{sMantineGfx2, ARRAY_COUNT(sMantineGfx2)}, 
	{NULL, 0}
};
static const u8 sMantineGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_3.4bpp.lz");
static const ax_sprite sMantineSprites3[] = {
	{sMantineGfx3, ARRAY_COUNT(sMantineGfx3)}, 
	{NULL, 0}
};
static const u8 sMantineGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_4.4bpp.lz");
static const ax_sprite sMantineSprites4[] = {
	{sMantineGfx4, ARRAY_COUNT(sMantineGfx4)}, 
	{NULL, 0}
};
static const u8 sMantineGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_5.4bpp.lz");
static const ax_sprite sMantineSprites5[] = {
	{sMantineGfx5, ARRAY_COUNT(sMantineGfx5)}, 
	{NULL, 0}
};
static const u8 sMantineGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_6.4bpp.lz");
static const ax_sprite sMantineSprites6[] = {
	{sMantineGfx6, ARRAY_COUNT(sMantineGfx6)}, 
	{NULL, 0}
};
static const u8 sMantineGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_7.4bpp.lz");
static const ax_sprite sMantineSprites7[] = {
	{sMantineGfx7, ARRAY_COUNT(sMantineGfx7)}, 
	{NULL, 0}
};
static const u8 sMantineGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_8.4bpp.lz");
static const ax_sprite sMantineSprites8[] = {
	{sMantineGfx8, ARRAY_COUNT(sMantineGfx8)}, 
	{NULL, 0}
};
static const u8 sMantineGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_9.4bpp.lz");
static const ax_sprite sMantineSprites9[] = {
	{sMantineGfx9, ARRAY_COUNT(sMantineGfx9)}, 
	{NULL, 0}
};
static const u8 sMantineGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_10.4bpp.lz");
static const ax_sprite sMantineSprites10[] = {
	{sMantineGfx10, ARRAY_COUNT(sMantineGfx10)}, 
	{NULL, 0}
};
static const u8 sMantineGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_11.4bpp.lz");
static const ax_sprite sMantineSprites11[] = {
	{sMantineGfx11, ARRAY_COUNT(sMantineGfx11)}, 
	{NULL, 0}
};
static const u8 sMantineGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_12.4bpp.lz");
static const ax_sprite sMantineSprites12[] = {
	{sMantineGfx12, ARRAY_COUNT(sMantineGfx12)}, 
	{NULL, 0}
};
static const u8 sMantineGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_13.4bpp.lz");
static const ax_sprite sMantineSprites13[] = {
	{sMantineGfx13, ARRAY_COUNT(sMantineGfx13)}, 
	{NULL, 0}
};
static const u8 sMantineGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_14.4bpp.lz");
static const ax_sprite sMantineSprites14[] = {
	{sMantineGfx14, ARRAY_COUNT(sMantineGfx14)}, 
	{NULL, 0}
};
static const u8 sMantineGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_15.4bpp.lz");
static const ax_sprite sMantineSprites15[] = {
	{sMantineGfx15, ARRAY_COUNT(sMantineGfx15)}, 
	{NULL, 0}
};
static const u8 sMantineGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_16.4bpp.lz");
static const ax_sprite sMantineSprites16[] = {
	{sMantineGfx16, ARRAY_COUNT(sMantineGfx16)}, 
	{NULL, 0}
};
static const u8 sMantineGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_17.4bpp.lz");
static const ax_sprite sMantineSprites17[] = {
	{sMantineGfx17, ARRAY_COUNT(sMantineGfx17)}, 
	{NULL, 0}
};
static const u8 sMantineGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_18.4bpp.lz");
static const ax_sprite sMantineSprites18[] = {
	{sMantineGfx18, ARRAY_COUNT(sMantineGfx18)}, 
	{NULL, 0}
};
static const u8 sMantineGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_19.4bpp.lz");
static const ax_sprite sMantineSprites19[] = {
	{sMantineGfx19, ARRAY_COUNT(sMantineGfx19)}, 
	{NULL, 0}
};
static const u8 sMantineGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_20.4bpp.lz");
static const ax_sprite sMantineSprites20[] = {
	{sMantineGfx20, ARRAY_COUNT(sMantineGfx20)}, 
	{NULL, 0}
};
static const u8 sMantineGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_21.4bpp.lz");
static const ax_sprite sMantineSprites21[] = {
	{sMantineGfx21, ARRAY_COUNT(sMantineGfx21)}, 
	{NULL, 0}
};
static const u8 sMantineGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_22.4bpp.lz");
static const ax_sprite sMantineSprites22[] = {
	{sMantineGfx22, ARRAY_COUNT(sMantineGfx22)}, 
	{NULL, 0}
};
static const u8 sMantineGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_23.4bpp.lz");
static const ax_sprite sMantineSprites23[] = {
	{sMantineGfx23, ARRAY_COUNT(sMantineGfx23)}, 
	{NULL, 0}
};
static const u8 sMantineGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_24.4bpp.lz");
static const ax_sprite sMantineSprites24[] = {
	{sMantineGfx24, ARRAY_COUNT(sMantineGfx24)}, 
	{NULL, 0}
};
static const u8 sMantineGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_25.4bpp.lz");
static const ax_sprite sMantineSprites25[] = {
	{sMantineGfx25, ARRAY_COUNT(sMantineGfx25)}, 
	{NULL, 0}
};
static const u8 sMantineGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_26.4bpp.lz");
static const ax_sprite sMantineSprites26[] = {
	{sMantineGfx26, ARRAY_COUNT(sMantineGfx26)}, 
	{NULL, 0}
};
static const u8 sMantineGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_27.4bpp.lz");
static const ax_sprite sMantineSprites27[] = {
	{sMantineGfx27, ARRAY_COUNT(sMantineGfx27)}, 
	{NULL, 0}
};
static const u8 sMantineGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_28.4bpp.lz");
static const ax_sprite sMantineSprites28[] = {
	{sMantineGfx28, ARRAY_COUNT(sMantineGfx28)}, 
	{NULL, 0}
};
static const u8 sMantineGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_29.4bpp.lz");
static const ax_sprite sMantineSprites29[] = {
	{sMantineGfx29, ARRAY_COUNT(sMantineGfx29)}, 
	{NULL, 0}
};
static const u8 sMantineGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_30.4bpp.lz");
static const ax_sprite sMantineSprites30[] = {
	{sMantineGfx30, ARRAY_COUNT(sMantineGfx30)}, 
	{NULL, 0}
};
static const u8 sMantineGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_31.4bpp.lz");
static const ax_sprite sMantineSprites31[] = {
	{sMantineGfx31, ARRAY_COUNT(sMantineGfx31)}, 
	{NULL, 0}
};
static const u8 sMantineGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_32.4bpp.lz");
static const ax_sprite sMantineSprites32[] = {
	{sMantineGfx32, ARRAY_COUNT(sMantineGfx32)}, 
	{NULL, 0}
};
static const u8 sMantineGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_33.4bpp.lz");
static const ax_sprite sMantineSprites33[] = {
	{sMantineGfx33, ARRAY_COUNT(sMantineGfx33)}, 
	{NULL, 0}
};
static const u8 sMantineGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_34.4bpp.lz");
static const ax_sprite sMantineSprites34[] = {
	{sMantineGfx34, ARRAY_COUNT(sMantineGfx34)}, 
	{NULL, 0}
};
static const u8 sMantineGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_35.4bpp.lz");
static const ax_sprite sMantineSprites35[] = {
	{sMantineGfx35, ARRAY_COUNT(sMantineGfx35)}, 
	{NULL, 0}
};
static const u8 sMantineGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_36.4bpp.lz");
static const ax_sprite sMantineSprites36[] = {
	{sMantineGfx36, ARRAY_COUNT(sMantineGfx36)}, 
	{NULL, 0}
};
static const u8 sMantineGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_37.4bpp.lz");
static const ax_sprite sMantineSprites37[] = {
	{sMantineGfx37, ARRAY_COUNT(sMantineGfx37)}, 
	{NULL, 0}
};
static const u8 sMantineGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_38.4bpp.lz");
static const ax_sprite sMantineSprites38[] = {
	{sMantineGfx38, ARRAY_COUNT(sMantineGfx38)}, 
	{NULL, 0}
};
static const u8 sMantineGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_39.4bpp.lz");
static const ax_sprite sMantineSprites39[] = {
	{sMantineGfx39, ARRAY_COUNT(sMantineGfx39)}, 
	{NULL, 0}
};
static const u8 sMantineGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_40.4bpp.lz");
static const ax_sprite sMantineSprites40[] = {
	{sMantineGfx40, ARRAY_COUNT(sMantineGfx40)}, 
	{NULL, 0}
};
static const u8 sMantineGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_41.4bpp.lz");
static const ax_sprite sMantineSprites41[] = {
	{sMantineGfx41, ARRAY_COUNT(sMantineGfx41)}, 
	{NULL, 0}
};
static const u8 sMantineGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_42.4bpp.lz");
static const ax_sprite sMantineSprites42[] = {
	{sMantineGfx42, ARRAY_COUNT(sMantineGfx42)}, 
	{NULL, 0}
};
static const u8 sMantineGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_43.4bpp.lz");
static const ax_sprite sMantineSprites43[] = {
	{sMantineGfx43, ARRAY_COUNT(sMantineGfx43)}, 
	{NULL, 0}
};
static const u8 sMantineGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_44.4bpp.lz");
static const ax_sprite sMantineSprites44[] = {
	{sMantineGfx44, ARRAY_COUNT(sMantineGfx44)}, 
	{NULL, 0}
};
static const u8 sMantineGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_45.4bpp.lz");
static const ax_sprite sMantineSprites45[] = {
	{sMantineGfx45, ARRAY_COUNT(sMantineGfx45)}, 
	{NULL, 0}
};
static const u8 sMantineGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_46.4bpp.lz");
static const ax_sprite sMantineSprites46[] = {
	{sMantineGfx46, ARRAY_COUNT(sMantineGfx46)}, 
	{NULL, 0}
};
static const u8 sMantineGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_47.4bpp.lz");
static const ax_sprite sMantineSprites47[] = {
	{sMantineGfx47, ARRAY_COUNT(sMantineGfx47)}, 
	{NULL, 0}
};
static const u8 sMantineGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_48.4bpp.lz");
static const ax_sprite sMantineSprites48[] = {
	{sMantineGfx48, ARRAY_COUNT(sMantineGfx48)}, 
	{NULL, 0}
};
static const u8 sMantineGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_49.4bpp.lz");
static const ax_sprite sMantineSprites49[] = {
	{sMantineGfx49, ARRAY_COUNT(sMantineGfx49)}, 
	{NULL, 0}
};
static const u8 sMantineGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_50.4bpp.lz");
static const ax_sprite sMantineSprites50[] = {
	{sMantineGfx50, ARRAY_COUNT(sMantineGfx50)}, 
	{NULL, 0}
};
static const u8 sMantineGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_51.4bpp.lz");
static const ax_sprite sMantineSprites51[] = {
	{sMantineGfx51, ARRAY_COUNT(sMantineGfx51)}, 
	{NULL, 0}
};
static const u8 sMantineGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_52.4bpp.lz");
static const ax_sprite sMantineSprites52[] = {
	{sMantineGfx52, ARRAY_COUNT(sMantineGfx52)}, 
	{NULL, 0}
};
static const u8 sMantineGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_53.4bpp.lz");
static const ax_sprite sMantineSprites53[] = {
	{sMantineGfx53, ARRAY_COUNT(sMantineGfx53)}, 
	{NULL, 0}
};
static const u8 sMantineGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_54.4bpp.lz");
static const ax_sprite sMantineSprites54[] = {
	{sMantineGfx54, ARRAY_COUNT(sMantineGfx54)}, 
	{NULL, 0}
};
static const u8 sMantineGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_55.4bpp.lz");
static const ax_sprite sMantineSprites55[] = {
	{sMantineGfx55, ARRAY_COUNT(sMantineGfx55)}, 
	{NULL, 0}
};
static const u8 sMantineGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_56.4bpp.lz");
static const ax_sprite sMantineSprites56[] = {
	{sMantineGfx56, ARRAY_COUNT(sMantineGfx56)}, 
	{NULL, 0}
};
static const u8 sMantineGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_57.4bpp.lz");
static const ax_sprite sMantineSprites57[] = {
	{sMantineGfx57, ARRAY_COUNT(sMantineGfx57)}, 
	{NULL, 0}
};
static const u8 sMantineGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_58.4bpp.lz");
static const ax_sprite sMantineSprites58[] = {
	{sMantineGfx58, ARRAY_COUNT(sMantineGfx58)}, 
	{NULL, 0}
};
static const u8 sMantineGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_59.4bpp.lz");
static const ax_sprite sMantineSprites59[] = {
	{sMantineGfx59, ARRAY_COUNT(sMantineGfx59)}, 
	{NULL, 0}
};
static const u8 sMantineGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_60.4bpp.lz");
static const ax_sprite sMantineSprites60[] = {
	{sMantineGfx60, ARRAY_COUNT(sMantineGfx60)}, 
	{NULL, 0}
};
static const u8 sMantineGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_61.4bpp.lz");
static const ax_sprite sMantineSprites61[] = {
	{sMantineGfx61, ARRAY_COUNT(sMantineGfx61)}, 
	{NULL, 0}
};
static const u8 sMantineGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_62.4bpp.lz");
static const ax_sprite sMantineSprites62[] = {
	{sMantineGfx62, ARRAY_COUNT(sMantineGfx62)}, 
	{NULL, 0}
};
static const u8 sMantineGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_63.4bpp.lz");
static const ax_sprite sMantineSprites63[] = {
	{NULL, 96}, 
	{sMantineGfx63, ARRAY_COUNT(sMantineGfx63)}, 
	{NULL, 0}
};
static const u8 sMantineGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_64.4bpp.lz");
static const ax_sprite sMantineSprites64[] = {
	{NULL, 64}, 
	{sMantineGfx64, ARRAY_COUNT(sMantineGfx64)}, 
	{NULL, 0}
};
static const u8 sMantineGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_65.4bpp.lz");
static const ax_sprite sMantineSprites65[] = {
	{sMantineGfx65, ARRAY_COUNT(sMantineGfx65)}, 
	{NULL, 0}
};
static const u8 sMantineGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_66.4bpp.lz");
static const ax_sprite sMantineSprites66[] = {
	{sMantineGfx66, ARRAY_COUNT(sMantineGfx66)}, 
	{NULL, 0}
};
static const u8 sMantineGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_67.4bpp.lz");
static const u8 sMantineGfx67_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_67_1.4bpp.lz");
static const u8 sMantineGfx67_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_67_2.4bpp.lz");
static const u8 sMantineGfx67_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_67_3.4bpp.lz");
static const ax_sprite sMantineSprites67[] = {
	{sMantineGfx67, ARRAY_COUNT(sMantineGfx67)}, 
	{NULL, 64}, 
	{sMantineGfx67_1, ARRAY_COUNT(sMantineGfx67_1)}, 
	{NULL, 64}, 
	{sMantineGfx67_2, ARRAY_COUNT(sMantineGfx67_2)}, 
	{NULL, 128}, 
	{sMantineGfx67_3, ARRAY_COUNT(sMantineGfx67_3)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sMantineGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_68.4bpp.lz");
static const u8 sMantineGfx68_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_68_1.4bpp.lz");
static const ax_sprite sMantineSprites68[] = {
	{NULL, 64}, 
	{sMantineGfx68, ARRAY_COUNT(sMantineGfx68)}, 
	{NULL, 64}, 
	{sMantineGfx68_1, ARRAY_COUNT(sMantineGfx68_1)}, 
	{NULL, 0}
};
static const u8 sMantineGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_69.4bpp.lz");
static const ax_sprite sMantineSprites69[] = {
	{sMantineGfx69, ARRAY_COUNT(sMantineGfx69)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMantineGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_70.4bpp.lz");
static const ax_sprite sMantineSprites70[] = {
	{sMantineGfx70, ARRAY_COUNT(sMantineGfx70)}, 
	{NULL, 0}
};
static const u8 sMantineGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_71.4bpp.lz");
static const ax_sprite sMantineSprites71[] = {
	{sMantineGfx71, ARRAY_COUNT(sMantineGfx71)}, 
	{NULL, 0}
};
static const u8 sMantineGfx72[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_72.4bpp.lz");
static const ax_sprite sMantineSprites72[] = {
	{sMantineGfx72, ARRAY_COUNT(sMantineGfx72)}, 
	{NULL, 0}
};
static const u8 sMantineGfx73[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_73.4bpp.lz");
static const u8 sMantineGfx73_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_73_1.4bpp.lz");
static const u8 sMantineGfx73_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_73_2.4bpp.lz");
static const ax_sprite sMantineSprites73[] = {
	{sMantineGfx73, ARRAY_COUNT(sMantineGfx73)}, 
	{NULL, 32}, 
	{sMantineGfx73_1, ARRAY_COUNT(sMantineGfx73_1)}, 
	{NULL, 32}, 
	{sMantineGfx73_2, ARRAY_COUNT(sMantineGfx73_2)}, 
	{NULL, 0}
};
static const u8 sMantineGfx74[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_74.4bpp.lz");
static const ax_sprite sMantineSprites74[] = {
	{sMantineGfx74, ARRAY_COUNT(sMantineGfx74)}, 
	{NULL, 0}
};
static const u8 sMantineGfx75[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_75.4bpp.lz");
static const ax_sprite sMantineSprites75[] = {
	{sMantineGfx75, ARRAY_COUNT(sMantineGfx75)}, 
	{NULL, 0}
};
static const u8 sMantineGfx76[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_76.4bpp.lz");
static const u8 sMantineGfx76_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_76_1.4bpp.lz");
static const ax_sprite sMantineSprites76[] = {
	{NULL, 64}, 
	{sMantineGfx76, ARRAY_COUNT(sMantineGfx76)}, 
	{NULL, 32}, 
	{sMantineGfx76_1, ARRAY_COUNT(sMantineGfx76_1)}, 
	{NULL, 0}
};
static const u8 sMantineGfx77[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_77.4bpp.lz");
static const u8 sMantineGfx77_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_77_1.4bpp.lz");
static const ax_sprite sMantineSprites77[] = {
	{sMantineGfx77, ARRAY_COUNT(sMantineGfx77)}, 
	{NULL, 32}, 
	{sMantineGfx77_1, ARRAY_COUNT(sMantineGfx77_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMantineGfx78[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_78.4bpp.lz");
static const ax_sprite sMantineSprites78[] = {
	{sMantineGfx78, ARRAY_COUNT(sMantineGfx78)}, 
	{NULL, 0}
};
static const u8 sMantineGfx79[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_79.4bpp.lz");
static const ax_sprite sMantineSprites79[] = {
	{sMantineGfx79, ARRAY_COUNT(sMantineGfx79)}, 
	{NULL, 0}
};
static const u8 sMantineGfx80[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_80.4bpp.lz");
static const ax_sprite sMantineSprites80[] = {
	{sMantineGfx80, ARRAY_COUNT(sMantineGfx80)}, 
	{NULL, 0}
};
static const u8 sMantineGfx81[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_81.4bpp.lz");
static const u8 sMantineGfx81_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_81_1.4bpp.lz");
static const ax_sprite sMantineSprites81[] = {
	{NULL, 32}, 
	{sMantineGfx81, ARRAY_COUNT(sMantineGfx81)}, 
	{NULL, 32}, 
	{sMantineGfx81_1, ARRAY_COUNT(sMantineGfx81_1)}, 
	{NULL, 0}
};
static const u8 sMantineGfx82[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_82.4bpp.lz");
static const u8 sMantineGfx82_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_82_1.4bpp.lz");
static const ax_sprite sMantineSprites82[] = {
	{sMantineGfx82, ARRAY_COUNT(sMantineGfx82)}, 
	{NULL, 32}, 
	{sMantineGfx82_1, ARRAY_COUNT(sMantineGfx82_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMantineGfx83[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_83.4bpp.lz");
static const ax_sprite sMantineSprites83[] = {
	{sMantineGfx83, ARRAY_COUNT(sMantineGfx83)}, 
	{NULL, 0}
};
static const u8 sMantineGfx84[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_84.4bpp.lz");
static const ax_sprite sMantineSprites84[] = {
	{sMantineGfx84, ARRAY_COUNT(sMantineGfx84)}, 
	{NULL, 0}
};
static const u8 sMantineGfx85[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_85.4bpp.lz");
static const ax_sprite sMantineSprites85[] = {
	{sMantineGfx85, ARRAY_COUNT(sMantineGfx85)}, 
	{NULL, 0}
};
static const u8 sMantineGfx86[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_86.4bpp.lz");
static const ax_sprite sMantineSprites86[] = {
	{sMantineGfx86, ARRAY_COUNT(sMantineGfx86)}, 
	{NULL, 0}
};
static const u8 sMantineGfx87[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_87.4bpp.lz");
static const u8 sMantineGfx87_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_87_1.4bpp.lz");
static const ax_sprite sMantineSprites87[] = {
	{sMantineGfx87, ARRAY_COUNT(sMantineGfx87)}, 
	{NULL, 32}, 
	{sMantineGfx87_1, ARRAY_COUNT(sMantineGfx87_1)}, 
	{NULL, 0}
};
static const u8 sMantineGfx88[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_88.4bpp.lz");
static const ax_sprite sMantineSprites88[] = {
	{sMantineGfx88, ARRAY_COUNT(sMantineGfx88)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMantineGfx89[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_89.4bpp.lz");
static const ax_sprite sMantineSprites89[] = {
	{sMantineGfx89, ARRAY_COUNT(sMantineGfx89)}, 
	{NULL, 0}
};
static const u8 sMantineGfx90[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_90.4bpp.lz");
static const ax_sprite sMantineSprites90[] = {
	{sMantineGfx90, ARRAY_COUNT(sMantineGfx90)}, 
	{NULL, 0}
};
static const u8 sMantineGfx91[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_91.4bpp.lz");
static const ax_sprite sMantineSprites91[] = {
	{sMantineGfx91, ARRAY_COUNT(sMantineGfx91)}, 
	{NULL, 0}
};
static const u8 sMantineGfx92[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_92.4bpp.lz");
static const ax_sprite sMantineSprites92[] = {
	{sMantineGfx92, ARRAY_COUNT(sMantineGfx92)}, 
	{NULL, 0}
};
static const u8 sMantineGfx93[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_93.4bpp.lz");
static const ax_sprite sMantineSprites93[] = {
	{sMantineGfx93, ARRAY_COUNT(sMantineGfx93)}, 
	{NULL, 0}
};
static const u8 sMantineGfx94[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_94.4bpp.lz");
static const ax_sprite sMantineSprites94[] = {
	{sMantineGfx94, ARRAY_COUNT(sMantineGfx94)}, 
	{NULL, 0}
};
static const u8 sMantineGfx95[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_95.4bpp.lz");
static const ax_sprite sMantineSprites95[] = {
	{sMantineGfx95, ARRAY_COUNT(sMantineGfx95)}, 
	{NULL, 0}
};
static const u8 sMantineGfx96[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_96.4bpp.lz");
static const ax_sprite sMantineSprites96[] = {
	{sMantineGfx96, ARRAY_COUNT(sMantineGfx96)}, 
	{NULL, 0}
};
static const u8 sMantineGfx97[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_97.4bpp.lz");
static const ax_sprite sMantineSprites97[] = {
	{sMantineGfx97, ARRAY_COUNT(sMantineGfx97)}, 
	{NULL, 0}
};
static const u8 sMantineGfx98[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_98.4bpp.lz");
static const ax_sprite sMantineSprites98[] = {
	{sMantineGfx98, ARRAY_COUNT(sMantineGfx98)}, 
	{NULL, 0}
};
static const u8 sMantineGfx99[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_99.4bpp.lz");
static const ax_sprite sMantineSprites99[] = {
	{sMantineGfx99, ARRAY_COUNT(sMantineGfx99)}, 
	{NULL, 0}
};
static const u8 sMantineGfx100[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_100.4bpp.lz");
static const ax_sprite sMantineSprites100[] = {
	{sMantineGfx100, ARRAY_COUNT(sMantineGfx100)}, 
	{NULL, 0}
};
static const u8 sMantineGfx101[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_101.4bpp.lz");
static const ax_sprite sMantineSprites101[] = {
	{sMantineGfx101, ARRAY_COUNT(sMantineGfx101)}, 
	{NULL, 0}
};
static const u8 sMantineGfx102[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_102.4bpp.lz");
static const ax_sprite sMantineSprites102[] = {
	{sMantineGfx102, ARRAY_COUNT(sMantineGfx102)}, 
	{NULL, 0}
};
static const u8 sMantineGfx103[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_103.4bpp.lz");
static const ax_sprite sMantineSprites103[] = {
	{sMantineGfx103, ARRAY_COUNT(sMantineGfx103)}, 
	{NULL, 0}
};
static const u8 sMantineGfx104[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_104.4bpp.lz");
static const ax_sprite sMantineSprites104[] = {
	{sMantineGfx104, ARRAY_COUNT(sMantineGfx104)}, 
	{NULL, 0}
};
static const u8 sMantineGfx105[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_105.4bpp.lz");
static const ax_sprite sMantineSprites105[] = {
	{sMantineGfx105, ARRAY_COUNT(sMantineGfx105)}, 
	{NULL, 0}
};
static const u8 sMantineGfx106[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_106.4bpp.lz");
static const ax_sprite sMantineSprites106[] = {
	{sMantineGfx106, ARRAY_COUNT(sMantineGfx106)}, 
	{NULL, 0}
};
static const u8 sMantineGfx107[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_107.4bpp.lz");
static const ax_sprite sMantineSprites107[] = {
	{sMantineGfx107, ARRAY_COUNT(sMantineGfx107)}, 
	{NULL, 0}
};
static const u8 sMantineGfx108[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_108.4bpp.lz");
static const ax_sprite sMantineSprites108[] = {
	{sMantineGfx108, ARRAY_COUNT(sMantineGfx108)}, 
	{NULL, 0}
};
static const u8 sMantineGfx109[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_109.4bpp.lz");
static const ax_sprite sMantineSprites109[] = {
	{sMantineGfx109, ARRAY_COUNT(sMantineGfx109)}, 
	{NULL, 0}
};
static const u8 sMantineGfx110[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_110.4bpp.lz");
static const ax_sprite sMantineSprites110[] = {
	{sMantineGfx110, ARRAY_COUNT(sMantineGfx110)}, 
	{NULL, 0}
};
static const u8 sMantineGfx111[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_111.4bpp.lz");
static const ax_sprite sMantineSprites111[] = {
	{sMantineGfx111, ARRAY_COUNT(sMantineGfx111)}, 
	{NULL, 0}
};
static const u8 sMantineGfx112[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_112.4bpp.lz");
static const ax_sprite sMantineSprites112[] = {
	{sMantineGfx112, ARRAY_COUNT(sMantineGfx112)}, 
	{NULL, 0}
};
static const u8 sMantineGfx113[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_113.4bpp.lz");
static const ax_sprite sMantineSprites113[] = {
	{sMantineGfx113, ARRAY_COUNT(sMantineGfx113)}, 
	{NULL, 0}
};
static const u8 sMantineGfx114[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_114.4bpp.lz");
static const ax_sprite sMantineSprites114[] = {
	{sMantineGfx114, ARRAY_COUNT(sMantineGfx114)}, 
	{NULL, 0}
};
static const u8 sMantineGfx115[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_115.4bpp.lz");
static const ax_sprite sMantineSprites115[] = {
	{sMantineGfx115, ARRAY_COUNT(sMantineGfx115)}, 
	{NULL, 0}
};
static const u8 sMantineGfx116[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_116.4bpp.lz");
static const ax_sprite sMantineSprites116[] = {
	{sMantineGfx116, ARRAY_COUNT(sMantineGfx116)}, 
	{NULL, 0}
};
static const u8 sMantineGfx117[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_117.4bpp.lz");
static const ax_sprite sMantineSprites117[] = {
	{sMantineGfx117, ARRAY_COUNT(sMantineGfx117)}, 
	{NULL, 0}
};
static const u8 sMantineGfx118[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_118.4bpp.lz");
static const ax_sprite sMantineSprites118[] = {
	{sMantineGfx118, ARRAY_COUNT(sMantineGfx118)}, 
	{NULL, 0}
};
static const u8 sMantineGfx119[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_119.4bpp.lz");
static const ax_sprite sMantineSprites119[] = {
	{sMantineGfx119, ARRAY_COUNT(sMantineGfx119)}, 
	{NULL, 0}
};
static const u8 sMantineGfx120[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mantine/sprite_120.4bpp.lz");
static const ax_sprite sMantineSprites120[] = {
	{sMantineGfx120, ARRAY_COUNT(sMantineGfx120)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesMantine[] = {
	sMantinePose1,
	sMantinePose2,
	sMantinePose3,
	sMantinePose4,
	sMantinePose5,
	sMantinePose6,
	sMantinePose7,
	sMantinePose8,
	sMantinePose9,
	sMantinePose10,
	sMantinePose11,
	sMantinePose12,
	sMantinePose13,
	sMantinePose14,
	sMantinePose15,
	sMantinePose16,
	sMantinePose17,
	sMantinePose18,
	sMantinePose19,
	sMantinePose20,
	sMantinePose21,
	sMantinePose22,
	sMantinePose23,
	sMantinePose24,
	sMantinePose1,
	sMantinePose2,
	sMantinePose3,
	sMantinePose4,
	sMantinePose5,
	sMantinePose6,
	sMantinePose7,
	sMantinePose8,
	sMantinePose9,
	sMantinePose10,
	sMantinePose11,
	sMantinePose12,
	sMantinePose13,
	sMantinePose14,
	sMantinePose15,
	sMantinePose16,
	sMantinePose17,
	sMantinePose18,
	sMantinePose19,
	sMantinePose20,
	sMantinePose21,
	sMantinePose22,
	sMantinePose23,
	sMantinePose24,
	sMantinePose1,
	sMantinePose2,
	sMantinePose3,
	sMantinePose4,
	sMantinePose5,
	sMantinePose6,
	sMantinePose7,
	sMantinePose8,
	sMantinePose9,
	sMantinePose10,
	sMantinePose11,
	sMantinePose12,
	sMantinePose13,
	sMantinePose14,
	sMantinePose15,
	sMantinePose16,
	sMantinePose17,
	sMantinePose18,
	sMantinePose19,
	sMantinePose20,
	sMantinePose21,
	sMantinePose22,
	sMantinePose23,
	sMantinePose24,
	sMantinePose1,
	sMantinePose2,
	sMantinePose3,
	sMantinePose76,
	sMantinePose4,
	sMantinePose5,
	sMantinePose6,
	sMantinePose80,
	sMantinePose7,
	sMantinePose8,
	sMantinePose9,
	sMantinePose84,
	sMantinePose10,
	sMantinePose11,
	sMantinePose12,
	sMantinePose88,
	sMantinePose13,
	sMantinePose14,
	sMantinePose15,
	sMantinePose92,
	sMantinePose16,
	sMantinePose17,
	sMantinePose18,
	sMantinePose96,
	sMantinePose19,
	sMantinePose20,
	sMantinePose21,
	sMantinePose100,
	sMantinePose22,
	sMantinePose23,
	sMantinePose24,
	sMantinePose104,
	sMantinePose1,
	sMantinePose2,
	sMantinePose3,
	sMantinePose4,
	sMantinePose5,
	sMantinePose6,
	sMantinePose7,
	sMantinePose8,
	sMantinePose9,
	sMantinePose10,
	sMantinePose11,
	sMantinePose12,
	sMantinePose13,
	sMantinePose14,
	sMantinePose15,
	sMantinePose16,
	sMantinePose17,
	sMantinePose18,
	sMantinePose19,
	sMantinePose20,
	sMantinePose21,
	sMantinePose22,
	sMantinePose23,
	sMantinePose24,
	sMantinePose129,
	sMantinePose130,
	sMantinePose131,
	sMantinePose132,
	sMantinePose133,
	sMantinePose134,
	sMantinePose135,
	sMantinePose136,
	sMantinePose137,
	sMantinePose138,
	sMantinePose1,
	sMantinePose2,
	sMantinePose3,
	sMantinePose4,
	sMantinePose5,
	sMantinePose6,
	sMantinePose7,
	sMantinePose8,
	sMantinePose9,
	sMantinePose10,
	sMantinePose11,
	sMantinePose12,
	sMantinePose13,
	sMantinePose14,
	sMantinePose15,
	sMantinePose16,
	sMantinePose17,
	sMantinePose18,
	sMantinePose19,
	sMantinePose20,
	sMantinePose21,
	sMantinePose22,
	sMantinePose23,
	sMantinePose24,
	sMantinePose76,
	sMantinePose104,
	sMantinePose100,
	sMantinePose96,
	sMantinePose92,
	sMantinePose88,
	sMantinePose84,
	sMantinePose80,
	sMantinePose76,
	sMantinePose80,
	sMantinePose173,
	sMantinePose174,
	sMantinePose175,
	sMantinePose176,
	sMantinePose177,
	sMantinePose104,
	sMantinePose1,
	sMantinePose2,
	sMantinePose3,
	sMantinePose4,
	sMantinePose5,
	sMantinePose6,
	sMantinePose7,
	sMantinePose8,
	sMantinePose9,
	sMantinePose10,
	sMantinePose11,
	sMantinePose12,
	sMantinePose13,
	sMantinePose14,
	sMantinePose15,
	sMantinePose16,
	sMantinePose17,
	sMantinePose18,
	sMantinePose19,
	sMantinePose20,
	sMantinePose21,
	sMantinePose22,
	sMantinePose23,
	sMantinePose24,
	sMantinePose76,
	sMantinePose104,
	sMantinePose177,
	sMantinePose176,
	sMantinePose175,
	sMantinePose174,
	sMantinePose173,
	sMantinePose80,
	sMantinePose1,
	sMantinePose22,
	sMantinePose19,
	sMantinePose16,
	sMantinePose13,
	sMantinePose10,
	sMantinePose7,
	sMantinePose4,
};

static const struct PositionSets sAxPositionsMantine[] = {
	[0] = { .set = { {0, -4}, {-21, -14}, {20, -14}, {0, -13} } },
	[1] = { .set = { {0, -4}, {-20, -17}, {19, -17}, {0, -13} } },
	[2] = { .set = { {0, -4}, {-21, -9}, {20, -9}, {0, -13} } },
	[3] = { .set = { {6, -5}, {12, -23}, {-11, -3}, {2, -13} } },
	[4] = { .set = { {6, -5}, {11, -24}, {-11, -5}, {2, -13} } },
	[5] = { .set = { {5, -5}, {11, -20}, {-10, -2}, {1, -13} } },
	[6] = { .set = { {6, -10}, {2, -1}, {2, -23}, {1, -13} } },
	[7] = { .set = { {8, -12}, {1, -4}, {1, -25}, {1, -14} } },
	[8] = { .set = { {7, -13}, {2, 1}, {1, -21}, {3, -13} } },
	[9] = { .set = { {4, -15}, {16, -5}, {-13, -20}, {1, -13} } },
	[10] = { .set = { {5, -15}, {16, -6}, {-12, -22}, {2, -14} } },
	[11] = { .set = { {5, -15}, {15, -3}, {-13, -17}, {2, -12} } },
	[12] = { .set = { {-1, -18}, {20, -14}, {-21, -14}, {-1, -14} } },
	[13] = { .set = { {0, -18}, {19, -17}, {-19, -16}, {0, -14} } },
	[14] = { .set = { {0, -17}, {19, -10}, {-20, -10}, {-1, -14} } },
	[15] = { .set = { {-4, -17}, {14, -21}, {-14, -6}, {1, -15} } },
	[16] = { .set = { {-4, -17}, {14, -24}, {-14, -8}, {1, -15} } },
	[17] = { .set = { {-5, -16}, {14, -18}, {-13, -4}, {0, -15} } },
	[18] = { .set = { {-10, -10}, {-2, -23}, {-2, -2}, {-1, -13} } },
	[19] = { .set = { {-10, -10}, {-2, -25}, {-2, -4}, {-1, -13} } },
	[20] = { .set = { {-9, -9}, {-2, -21}, {-2, 1}, {-2, -13} } },
	[21] = { .set = { {-7, -5}, {-13, -23}, {10, -3}, {-3, -13} } },
	[22] = { .set = { {-7, -5}, {-12, -24}, {10, -5}, {-3, -13} } },
	[23] = { .set = { {-6, -5}, {-12, -20}, {9, -2}, {-2, -13} } },
	[24] = { .set = { {0, -4}, {-21, -14}, {20, -14}, {0, -13} } },
	[25] = { .set = { {0, -4}, {-20, -17}, {19, -17}, {0, -13} } },
	[26] = { .set = { {0, -4}, {-21, -9}, {20, -9}, {0, -13} } },
	[27] = { .set = { {6, -5}, {12, -23}, {-11, -3}, {2, -13} } },
	[28] = { .set = { {6, -5}, {11, -24}, {-11, -5}, {2, -13} } },
	[29] = { .set = { {5, -5}, {11, -20}, {-10, -2}, {1, -13} } },
	[30] = { .set = { {6, -10}, {2, -1}, {2, -23}, {1, -13} } },
	[31] = { .set = { {8, -12}, {1, -4}, {1, -25}, {1, -14} } },
	[32] = { .set = { {7, -13}, {2, 1}, {1, -21}, {3, -13} } },
	[33] = { .set = { {4, -15}, {16, -5}, {-13, -20}, {1, -13} } },
	[34] = { .set = { {5, -15}, {16, -6}, {-12, -22}, {2, -14} } },
	[35] = { .set = { {5, -15}, {15, -3}, {-13, -17}, {2, -12} } },
	[36] = { .set = { {-1, -18}, {20, -14}, {-21, -14}, {-1, -14} } },
	[37] = { .set = { {0, -18}, {19, -17}, {-19, -16}, {0, -14} } },
	[38] = { .set = { {0, -17}, {19, -10}, {-20, -10}, {-1, -14} } },
	[39] = { .set = { {-4, -17}, {14, -21}, {-14, -6}, {1, -15} } },
	[40] = { .set = { {-4, -17}, {14, -24}, {-14, -8}, {1, -15} } },
	[41] = { .set = { {-5, -16}, {14, -18}, {-13, -4}, {0, -15} } },
	[42] = { .set = { {-10, -10}, {-2, -23}, {-2, -2}, {-1, -13} } },
	[43] = { .set = { {-10, -10}, {-2, -25}, {-2, -4}, {-1, -13} } },
	[44] = { .set = { {-9, -9}, {-2, -21}, {-2, 1}, {-2, -13} } },
	[45] = { .set = { {-7, -5}, {-13, -23}, {10, -3}, {-3, -13} } },
	[46] = { .set = { {-7, -5}, {-12, -24}, {10, -5}, {-3, -13} } },
	[47] = { .set = { {-6, -5}, {-12, -20}, {9, -2}, {-2, -13} } },
	[48] = { .set = { {0, -4}, {-21, -14}, {20, -14}, {0, -13} } },
	[49] = { .set = { {0, -4}, {-20, -17}, {19, -17}, {0, -13} } },
	[50] = { .set = { {0, -4}, {-21, -9}, {20, -9}, {0, -13} } },
	[51] = { .set = { {6, -5}, {12, -23}, {-11, -3}, {2, -13} } },
	[52] = { .set = { {6, -5}, {11, -24}, {-11, -5}, {2, -13} } },
	[53] = { .set = { {5, -5}, {11, -20}, {-10, -2}, {1, -13} } },
	[54] = { .set = { {6, -10}, {2, -1}, {2, -23}, {1, -13} } },
	[55] = { .set = { {8, -12}, {1, -4}, {1, -25}, {1, -14} } },
	[56] = { .set = { {7, -13}, {2, 1}, {1, -21}, {3, -13} } },
	[57] = { .set = { {4, -15}, {16, -5}, {-13, -20}, {1, -13} } },
	[58] = { .set = { {5, -15}, {16, -6}, {-12, -22}, {2, -14} } },
	[59] = { .set = { {5, -15}, {15, -3}, {-13, -17}, {2, -12} } },
	[60] = { .set = { {-1, -18}, {20, -14}, {-21, -14}, {-1, -14} } },
	[61] = { .set = { {0, -18}, {19, -17}, {-19, -16}, {0, -14} } },
	[62] = { .set = { {0, -17}, {19, -10}, {-20, -10}, {-1, -14} } },
	[63] = { .set = { {-4, -17}, {14, -21}, {-14, -6}, {1, -15} } },
	[64] = { .set = { {-4, -17}, {14, -24}, {-14, -8}, {1, -15} } },
	[65] = { .set = { {-5, -16}, {14, -18}, {-13, -4}, {0, -15} } },
	[66] = { .set = { {-10, -10}, {-2, -23}, {-2, -2}, {-1, -13} } },
	[67] = { .set = { {-10, -10}, {-2, -25}, {-2, -4}, {-1, -13} } },
	[68] = { .set = { {-9, -9}, {-2, -21}, {-2, 1}, {-2, -13} } },
	[69] = { .set = { {-7, -5}, {-13, -23}, {10, -3}, {-3, -13} } },
	[70] = { .set = { {-7, -5}, {-12, -24}, {10, -5}, {-3, -13} } },
	[71] = { .set = { {-6, -5}, {-12, -20}, {9, -2}, {-2, -13} } },
	[72] = { .set = { {0, -4}, {-21, -14}, {20, -14}, {0, -13} } },
	[73] = { .set = { {0, -4}, {-20, -17}, {19, -17}, {0, -13} } },
	[74] = { .set = { {0, -4}, {-21, -9}, {20, -9}, {0, -13} } },
	[75] = { .set = { {-1, -3}, {-21, -15}, {20, -15}, {0, -13} } },
	[76] = { .set = { {6, -5}, {12, -23}, {-11, -3}, {2, -13} } },
	[77] = { .set = { {6, -5}, {11, -24}, {-11, -5}, {2, -13} } },
	[78] = { .set = { {5, -5}, {11, -20}, {-10, -2}, {1, -13} } },
	[79] = { .set = { {7, -4}, {11, -23}, {-12, -3}, {0, -12} } },
	[80] = { .set = { {6, -10}, {2, -1}, {2, -23}, {1, -13} } },
	[81] = { .set = { {8, -12}, {1, -4}, {1, -25}, {1, -14} } },
	[82] = { .set = { {7, -13}, {2, 1}, {1, -21}, {3, -13} } },
	[83] = { .set = { {12, -10}, {1, -1}, {0, -23}, {1, -12} } },
	[84] = { .set = { {4, -15}, {16, -5}, {-13, -20}, {1, -13} } },
	[85] = { .set = { {5, -15}, {16, -6}, {-12, -22}, {2, -14} } },
	[86] = { .set = { {5, -15}, {15, -3}, {-13, -17}, {2, -12} } },
	[87] = { .set = { {6, -14}, {15, -4}, {-14, -20}, {1, -12} } },
	[88] = { .set = { {-1, -18}, {20, -14}, {-21, -14}, {-1, -14} } },
	[89] = { .set = { {0, -18}, {19, -17}, {-19, -16}, {0, -14} } },
	[90] = { .set = { {0, -17}, {19, -10}, {-20, -10}, {-1, -14} } },
	[91] = { .set = { {0, -19}, {20, -13}, {-21, -14}, {-1, -14} } },
	[92] = { .set = { {-4, -17}, {14, -21}, {-14, -6}, {1, -15} } },
	[93] = { .set = { {-4, -17}, {14, -24}, {-14, -8}, {1, -15} } },
	[94] = { .set = { {-5, -16}, {14, -18}, {-13, -4}, {0, -15} } },
	[95] = { .set = { {-5, -18}, {15, -21}, {-14, -6}, {1, -15} } },
	[96] = { .set = { {-10, -10}, {-2, -23}, {-2, -2}, {-1, -13} } },
	[97] = { .set = { {-10, -10}, {-2, -25}, {-2, -4}, {-1, -13} } },
	[98] = { .set = { {-9, -9}, {-2, -21}, {-2, 1}, {-2, -13} } },
	[99] = { .set = { {-13, -10}, {-1, -23}, {-2, -2}, {-1, -13} } },
	[100] = { .set = { {-7, -5}, {-13, -23}, {10, -3}, {-3, -13} } },
	[101] = { .set = { {-7, -5}, {-12, -24}, {10, -5}, {-3, -13} } },
	[102] = { .set = { {-6, -5}, {-12, -20}, {9, -2}, {-2, -13} } },
	[103] = { .set = { {-8, -4}, {-12, -23}, {11, -3}, {-1, -12} } },
	[104] = { .set = { {0, -4}, {-21, -14}, {20, -14}, {0, -13} } },
	[105] = { .set = { {0, -4}, {-20, -17}, {19, -17}, {0, -13} } },
	[106] = { .set = { {0, -4}, {-21, -9}, {20, -9}, {0, -13} } },
	[107] = { .set = { {6, -5}, {12, -23}, {-11, -3}, {2, -13} } },
	[108] = { .set = { {6, -5}, {11, -24}, {-11, -5}, {2, -13} } },
	[109] = { .set = { {5, -5}, {11, -20}, {-10, -2}, {1, -13} } },
	[110] = { .set = { {6, -10}, {2, -1}, {2, -23}, {1, -13} } },
	[111] = { .set = { {8, -12}, {1, -4}, {1, -25}, {1, -14} } },
	[112] = { .set = { {7, -13}, {2, 1}, {1, -21}, {3, -13} } },
	[113] = { .set = { {4, -15}, {16, -5}, {-13, -20}, {1, -13} } },
	[114] = { .set = { {5, -15}, {16, -6}, {-12, -22}, {2, -14} } },
	[115] = { .set = { {5, -15}, {15, -3}, {-13, -17}, {2, -12} } },
	[116] = { .set = { {-1, -18}, {20, -14}, {-21, -14}, {-1, -14} } },
	[117] = { .set = { {0, -18}, {19, -17}, {-19, -16}, {0, -14} } },
	[118] = { .set = { {0, -17}, {19, -10}, {-20, -10}, {-1, -14} } },
	[119] = { .set = { {-4, -17}, {14, -21}, {-14, -6}, {1, -15} } },
	[120] = { .set = { {-4, -17}, {14, -24}, {-14, -8}, {1, -15} } },
	[121] = { .set = { {-5, -16}, {14, -18}, {-13, -4}, {0, -15} } },
	[122] = { .set = { {-10, -10}, {-2, -23}, {-2, -2}, {-1, -13} } },
	[123] = { .set = { {-10, -10}, {-2, -25}, {-2, -4}, {-1, -13} } },
	[124] = { .set = { {-9, -9}, {-2, -21}, {-2, 1}, {-2, -13} } },
	[125] = { .set = { {-7, -5}, {-13, -23}, {10, -3}, {-3, -13} } },
	[126] = { .set = { {-7, -5}, {-12, -24}, {10, -5}, {-3, -13} } },
	[127] = { .set = { {-6, -5}, {-12, -20}, {9, -2}, {-2, -13} } },
	[128] = { .set = { {-5, -8}, {-11, -20}, {9, -1}, {-2, -14} } },
	[129] = { .set = { {-5, -7}, {-12, -20}, {10, -2}, {-1, -14} } },
	[130] = { .set = { {0, -25}, {-20, -18}, {20, -18}, {1, -19} } },
	[131] = { .set = { {0, -25}, {14, -24}, {-17, -15}, {0, -18} } },
	[132] = { .set = { {4, -24}, {5, -24}, {-4, -17}, {-1, -17} } },
	[133] = { .set = { {1, -23}, {-15, -23}, {12, -8}, {-1, -18} } },
	[134] = { .set = { {0, -22}, {21, -17}, {-20, -17}, {0, -19} } },
	[135] = { .set = { {-2, -23}, {14, -23}, {-13, -8}, {0, -18} } },
	[136] = { .set = { {-5, -24}, {-6, -24}, {3, -17}, {0, -17} } },
	[137] = { .set = { {-1, -25}, {-15, -24}, {16, -15}, {-1, -18} } },
	[138] = { .set = { {0, -4}, {-21, -14}, {20, -14}, {0, -13} } },
	[139] = { .set = { {0, -4}, {-20, -17}, {19, -17}, {0, -13} } },
	[140] = { .set = { {0, -4}, {-21, -9}, {20, -9}, {0, -13} } },
	[141] = { .set = { {6, -5}, {12, -23}, {-11, -3}, {2, -13} } },
	[142] = { .set = { {6, -5}, {11, -24}, {-11, -5}, {2, -13} } },
	[143] = { .set = { {5, -5}, {11, -20}, {-10, -2}, {1, -13} } },
	[144] = { .set = { {6, -10}, {2, -1}, {2, -23}, {1, -13} } },
	[145] = { .set = { {8, -12}, {1, -4}, {1, -25}, {1, -14} } },
	[146] = { .set = { {7, -13}, {2, 1}, {1, -21}, {3, -13} } },
	[147] = { .set = { {4, -15}, {16, -5}, {-13, -20}, {1, -13} } },
	[148] = { .set = { {5, -15}, {16, -6}, {-12, -22}, {2, -14} } },
	[149] = { .set = { {5, -15}, {15, -3}, {-13, -17}, {2, -12} } },
	[150] = { .set = { {-1, -18}, {20, -14}, {-21, -14}, {-1, -14} } },
	[151] = { .set = { {0, -18}, {19, -17}, {-19, -16}, {0, -14} } },
	[152] = { .set = { {0, -17}, {19, -10}, {-20, -10}, {-1, -14} } },
	[153] = { .set = { {-4, -17}, {14, -21}, {-14, -6}, {1, -15} } },
	[154] = { .set = { {-4, -17}, {14, -24}, {-14, -8}, {1, -15} } },
	[155] = { .set = { {-5, -16}, {14, -18}, {-13, -4}, {0, -15} } },
	[156] = { .set = { {-10, -10}, {-2, -23}, {-2, -2}, {-1, -13} } },
	[157] = { .set = { {-10, -10}, {-2, -25}, {-2, -4}, {-1, -13} } },
	[158] = { .set = { {-9, -9}, {-2, -21}, {-2, 1}, {-2, -13} } },
	[159] = { .set = { {-7, -5}, {-13, -23}, {10, -3}, {-3, -13} } },
	[160] = { .set = { {-7, -5}, {-12, -24}, {10, -5}, {-3, -13} } },
	[161] = { .set = { {-6, -5}, {-12, -20}, {9, -2}, {-2, -13} } },
	[162] = { .set = { {-1, -3}, {-21, -15}, {20, -15}, {0, -13} } },
	[163] = { .set = { {-8, -4}, {-12, -23}, {11, -3}, {-1, -12} } },
	[164] = { .set = { {-13, -10}, {-1, -23}, {-2, -2}, {-1, -13} } },
	[165] = { .set = { {-5, -18}, {15, -21}, {-14, -6}, {1, -15} } },
	[166] = { .set = { {0, -19}, {20, -13}, {-21, -14}, {-1, -14} } },
	[167] = { .set = { {6, -14}, {15, -4}, {-14, -20}, {1, -12} } },
	[168] = { .set = { {12, -10}, {1, -1}, {0, -23}, {1, -12} } },
	[169] = { .set = { {7, -4}, {11, -23}, {-12, -3}, {0, -12} } },
	[170] = { .set = { {-1, -3}, {-21, -15}, {20, -15}, {0, -13} } },
	[171] = { .set = { {7, -4}, {11, -23}, {-12, -3}, {0, -12} } },
	[172] = { .set = { {13, -10}, {2, -1}, {1, -23}, {2, -12} } },
	[173] = { .set = { {7, -15}, {16, -5}, {-13, -21}, {2, -13} } },
	[174] = { .set = { {0, -20}, {20, -14}, {-21, -15}, {-1, -15} } },
	[175] = { .set = { {-7, -17}, {13, -20}, {-16, -5}, {-1, -14} } },
	[176] = { .set = { {-14, -10}, {-2, -23}, {-3, -2}, {-2, -13} } },
	[177] = { .set = { {-8, -4}, {-12, -23}, {11, -3}, {-1, -12} } },
	[178] = { .set = { {0, -4}, {-21, -14}, {20, -14}, {0, -13} } },
	[179] = { .set = { {0, -4}, {-20, -17}, {19, -17}, {0, -13} } },
	[180] = { .set = { {0, -4}, {-21, -9}, {20, -9}, {0, -13} } },
	[181] = { .set = { {6, -5}, {12, -23}, {-11, -3}, {2, -13} } },
	[182] = { .set = { {6, -5}, {11, -24}, {-11, -5}, {2, -13} } },
	[183] = { .set = { {5, -5}, {11, -20}, {-10, -2}, {1, -13} } },
	[184] = { .set = { {6, -10}, {2, -1}, {2, -23}, {1, -13} } },
	[185] = { .set = { {8, -12}, {1, -4}, {1, -25}, {1, -14} } },
	[186] = { .set = { {7, -13}, {2, 1}, {1, -21}, {3, -13} } },
	[187] = { .set = { {4, -15}, {16, -5}, {-13, -20}, {1, -13} } },
	[188] = { .set = { {5, -15}, {16, -6}, {-12, -22}, {2, -14} } },
	[189] = { .set = { {5, -15}, {15, -3}, {-13, -17}, {2, -12} } },
	[190] = { .set = { {-1, -18}, {20, -14}, {-21, -14}, {-1, -14} } },
	[191] = { .set = { {0, -18}, {19, -17}, {-19, -16}, {0, -14} } },
	[192] = { .set = { {0, -17}, {19, -10}, {-20, -10}, {-1, -14} } },
	[193] = { .set = { {-4, -17}, {14, -21}, {-14, -6}, {1, -15} } },
	[194] = { .set = { {-4, -17}, {14, -24}, {-14, -8}, {1, -15} } },
	[195] = { .set = { {-5, -16}, {14, -18}, {-13, -4}, {0, -15} } },
	[196] = { .set = { {-10, -10}, {-2, -23}, {-2, -2}, {-1, -13} } },
	[197] = { .set = { {-10, -10}, {-2, -25}, {-2, -4}, {-1, -13} } },
	[198] = { .set = { {-9, -9}, {-2, -21}, {-2, 1}, {-2, -13} } },
	[199] = { .set = { {-7, -5}, {-13, -23}, {10, -3}, {-3, -13} } },
	[200] = { .set = { {-7, -5}, {-12, -24}, {10, -5}, {-3, -13} } },
	[201] = { .set = { {-6, -5}, {-12, -20}, {9, -2}, {-2, -13} } },
	[202] = { .set = { {-1, -3}, {-21, -15}, {20, -15}, {0, -13} } },
	[203] = { .set = { {-8, -4}, {-12, -23}, {11, -3}, {-1, -12} } },
	[204] = { .set = { {-14, -10}, {-2, -23}, {-3, -2}, {-2, -13} } },
	[205] = { .set = { {-7, -17}, {13, -20}, {-16, -5}, {-1, -14} } },
	[206] = { .set = { {0, -20}, {20, -14}, {-21, -15}, {-1, -15} } },
	[207] = { .set = { {7, -15}, {16, -5}, {-13, -21}, {2, -13} } },
	[208] = { .set = { {13, -10}, {2, -1}, {1, -23}, {2, -12} } },
	[209] = { .set = { {7, -4}, {11, -23}, {-12, -3}, {0, -12} } },
	[210] = { .set = { {0, -4}, {-21, -14}, {20, -14}, {0, -13} } },
	[211] = { .set = { {-7, -5}, {-13, -23}, {10, -3}, {-3, -13} } },
	[212] = { .set = { {-10, -10}, {-2, -23}, {-2, -2}, {-1, -13} } },
	[213] = { .set = { {-4, -17}, {14, -21}, {-14, -6}, {1, -15} } },
	[214] = { .set = { {-1, -18}, {20, -14}, {-21, -14}, {-1, -14} } },
	[215] = { .set = { {4, -15}, {16, -5}, {-13, -20}, {1, -13} } },
	[216] = { .set = { {6, -10}, {2, -1}, {2, -23}, {1, -13} } },
	[217] = { .set = { {6, -5}, {12, -23}, {-11, -3}, {2, -13} } },
};

static const ax_anim *const sMantineAnimTable1[] = {
	AX_ANIM_PTR(sMantineAnims_1_1),
	AX_ANIM_PTR(sMantineAnims_1_2),
	AX_ANIM_PTR(sMantineAnims_1_3),
	AX_ANIM_PTR(sMantineAnims_1_4),
	AX_ANIM_PTR(sMantineAnims_1_5),
	AX_ANIM_PTR(sMantineAnims_1_6),
	AX_ANIM_PTR(sMantineAnims_1_7),
	AX_ANIM_PTR(sMantineAnims_1_8),
};

static const ax_anim *const sMantineAnimTable2[] = {
	AX_ANIM_PTR(sMantineAnims_2_1),
	AX_ANIM_PTR(sMantineAnims_2_2),
	AX_ANIM_PTR(sMantineAnims_2_3),
	AX_ANIM_PTR(sMantineAnims_2_4),
	AX_ANIM_PTR(sMantineAnims_2_5),
	AX_ANIM_PTR(sMantineAnims_2_6),
	AX_ANIM_PTR(sMantineAnims_2_7),
	AX_ANIM_PTR(sMantineAnims_2_8),
};

static const ax_anim *const sMantineAnimTable3[] = {
	AX_ANIM_PTR(sMantineAnims_3_1),
	AX_ANIM_PTR(sMantineAnims_3_2),
	AX_ANIM_PTR(sMantineAnims_3_3),
	AX_ANIM_PTR(sMantineAnims_3_4),
	AX_ANIM_PTR(sMantineAnims_3_5),
	AX_ANIM_PTR(sMantineAnims_3_6),
	AX_ANIM_PTR(sMantineAnims_3_7),
	AX_ANIM_PTR(sMantineAnims_3_8),
};

static const ax_anim *const sMantineAnimTable4[] = {
	AX_ANIM_PTR(sMantineAnims_4_1),
	AX_ANIM_PTR(sMantineAnims_4_2),
	AX_ANIM_PTR(sMantineAnims_4_3),
	AX_ANIM_PTR(sMantineAnims_4_4),
	AX_ANIM_PTR(sMantineAnims_4_5),
	AX_ANIM_PTR(sMantineAnims_4_6),
	AX_ANIM_PTR(sMantineAnims_4_7),
	AX_ANIM_PTR(sMantineAnims_4_8),
};

static const ax_anim *const sMantineAnimTable5[] = {
	AX_ANIM_PTR(sMantineAnims_5_1),
	AX_ANIM_PTR(sMantineAnims_5_2),
	AX_ANIM_PTR(sMantineAnims_5_3),
	AX_ANIM_PTR(sMantineAnims_5_4),
	AX_ANIM_PTR(sMantineAnims_5_5),
	AX_ANIM_PTR(sMantineAnims_5_6),
	AX_ANIM_PTR(sMantineAnims_5_7),
	AX_ANIM_PTR(sMantineAnims_5_8),
};

static const ax_anim *const sMantineAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_00134),
	AX_ANIM_PTR(gAxSharedAnim_00134),
	AX_ANIM_PTR(gAxSharedAnim_00134),
	AX_ANIM_PTR(gAxSharedAnim_00134),
	AX_ANIM_PTR(gAxSharedAnim_00134),
	AX_ANIM_PTR(gAxSharedAnim_00134),
	AX_ANIM_PTR(gAxSharedAnim_00134),
	AX_ANIM_PTR(gAxSharedAnim_00134),
};

static const ax_anim *const sMantineAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00398),
	AX_ANIM_PTR(gAxSharedAnim_00404),
	AX_ANIM_PTR(gAxSharedAnim_00415),
	AX_ANIM_PTR(gAxSharedAnim_00424),
	AX_ANIM_PTR(gAxSharedAnim_00436),
	AX_ANIM_PTR(gAxSharedAnim_00444),
	AX_ANIM_PTR(gAxSharedAnim_00454),
	AX_ANIM_PTR(gAxSharedAnim_00464),
};

static const ax_anim *const sMantineAnimTable8[] = {
	AX_ANIM_PTR(sMantineAnims_8_1),
	AX_ANIM_PTR(sMantineAnims_8_2),
	AX_ANIM_PTR(sMantineAnims_8_3),
	AX_ANIM_PTR(sMantineAnims_8_4),
	AX_ANIM_PTR(sMantineAnims_8_5),
	AX_ANIM_PTR(sMantineAnims_8_6),
	AX_ANIM_PTR(sMantineAnims_8_7),
	AX_ANIM_PTR(sMantineAnims_8_8),
};

static const ax_anim *const sMantineAnimTable9[] = {
	AX_ANIM_PTR(sMantineAnims_9_1),
	AX_ANIM_PTR(sMantineAnims_9_2),
	AX_ANIM_PTR(sMantineAnims_9_3),
	AX_ANIM_PTR(sMantineAnims_9_4),
	AX_ANIM_PTR(sMantineAnims_9_5),
	AX_ANIM_PTR(sMantineAnims_9_6),
	AX_ANIM_PTR(sMantineAnims_9_7),
	AX_ANIM_PTR(sMantineAnims_9_8),
};

static const ax_anim *const sMantineAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00801),
	AX_ANIM_PTR(gAxSharedAnim_00813),
	AX_ANIM_PTR(gAxSharedAnim_00827),
	AX_ANIM_PTR(gAxSharedAnim_00838),
	AX_ANIM_PTR(gAxSharedAnim_00849),
	AX_ANIM_PTR(gAxSharedAnim_00862),
	AX_ANIM_PTR(gAxSharedAnim_00879),
	AX_ANIM_PTR(gAxSharedAnim_00889),
};

static const ax_anim *const sMantineAnimTable11[] = {
	AX_ANIM_PTR(sMantineAnims_11_1),
	AX_ANIM_PTR(sMantineAnims_11_2),
	AX_ANIM_PTR(sMantineAnims_11_3),
	AX_ANIM_PTR(sMantineAnims_11_4),
	AX_ANIM_PTR(sMantineAnims_11_5),
	AX_ANIM_PTR(sMantineAnims_11_6),
	AX_ANIM_PTR(sMantineAnims_11_7),
	AX_ANIM_PTR(sMantineAnims_11_8),
};

static const ax_anim *const sMantineAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01243),
	AX_ANIM_PTR(gAxSharedAnim_01327),
	AX_ANIM_PTR(gAxSharedAnim_01308),
	AX_ANIM_PTR(gAxSharedAnim_01292),
	AX_ANIM_PTR(gAxSharedAnim_01291),
	AX_ANIM_PTR(gAxSharedAnim_01280),
	AX_ANIM_PTR(gAxSharedAnim_01260),
	AX_ANIM_PTR(gAxSharedAnim_01244),
};

static const ax_anim *const sMantineAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01335),
	AX_ANIM_PTR(gAxSharedAnim_01409),
	AX_ANIM_PTR(gAxSharedAnim_01397),
	AX_ANIM_PTR(gAxSharedAnim_01386),
	AX_ANIM_PTR(gAxSharedAnim_01374),
	AX_ANIM_PTR(gAxSharedAnim_01366),
	AX_ANIM_PTR(gAxSharedAnim_01358),
	AX_ANIM_PTR(gAxSharedAnim_01348),
};

static const ax_anim *const *const sAxAnimationsMantine[] = {
	sMantineAnimTable1,
	sMantineAnimTable2,
	sMantineAnimTable3,
	sMantineAnimTable4,
	sMantineAnimTable5,
	sMantineAnimTable6,
	sMantineAnimTable7,
	sMantineAnimTable8,
	sMantineAnimTable9,
	sMantineAnimTable10,
	sMantineAnimTable11,
	sMantineAnimTable12,
	sMantineAnimTable13,
};

static const ax_sprite *const sAxSpritesMantine[] = {
	sMantineSprites1,
	sMantineSprites2,
	sMantineSprites3,
	sMantineSprites4,
	sMantineSprites5,
	sMantineSprites6,
	sMantineSprites7,
	sMantineSprites8,
	sMantineSprites9,
	sMantineSprites10,
	sMantineSprites11,
	sMantineSprites12,
	sMantineSprites13,
	sMantineSprites14,
	sMantineSprites15,
	sMantineSprites16,
	sMantineSprites17,
	sMantineSprites18,
	sMantineSprites19,
	sMantineSprites20,
	sMantineSprites21,
	sMantineSprites22,
	sMantineSprites23,
	sMantineSprites24,
	sMantineSprites25,
	sMantineSprites26,
	sMantineSprites27,
	sMantineSprites28,
	sMantineSprites29,
	sMantineSprites30,
	sMantineSprites31,
	sMantineSprites32,
	sMantineSprites33,
	sMantineSprites34,
	sMantineSprites35,
	sMantineSprites36,
	sMantineSprites37,
	sMantineSprites38,
	sMantineSprites39,
	sMantineSprites40,
	sMantineSprites41,
	sMantineSprites42,
	sMantineSprites43,
	sMantineSprites44,
	sMantineSprites45,
	sMantineSprites46,
	sMantineSprites47,
	sMantineSprites48,
	sMantineSprites49,
	sMantineSprites50,
	sMantineSprites51,
	sMantineSprites52,
	sMantineSprites53,
	sMantineSprites54,
	sMantineSprites55,
	sMantineSprites56,
	sMantineSprites57,
	sMantineSprites58,
	sMantineSprites59,
	sMantineSprites60,
	sMantineSprites61,
	sMantineSprites62,
	sMantineSprites63,
	sMantineSprites64,
	sMantineSprites65,
	sMantineSprites66,
	sMantineSprites67,
	sMantineSprites68,
	sMantineSprites69,
	sMantineSprites70,
	sMantineSprites71,
	sMantineSprites72,
	sMantineSprites73,
	sMantineSprites74,
	sMantineSprites75,
	sMantineSprites76,
	sMantineSprites77,
	sMantineSprites78,
	sMantineSprites79,
	sMantineSprites80,
	sMantineSprites81,
	sMantineSprites82,
	sMantineSprites83,
	sMantineSprites84,
	sMantineSprites85,
	sMantineSprites86,
	sMantineSprites87,
	sMantineSprites88,
	sMantineSprites89,
	sMantineSprites90,
	sMantineSprites91,
	sMantineSprites92,
	sMantineSprites93,
	sMantineSprites94,
	sMantineSprites95,
	sMantineSprites96,
	sMantineSprites97,
	sMantineSprites98,
	sMantineSprites99,
	sMantineSprites100,
	sMantineSprites101,
	sMantineSprites102,
	sMantineSprites103,
	sMantineSprites104,
	sMantineSprites105,
	sMantineSprites106,
	sMantineSprites107,
	sMantineSprites108,
	sMantineSprites109,
	sMantineSprites110,
	sMantineSprites111,
	sMantineSprites112,
	sMantineSprites113,
	sMantineSprites114,
	sMantineSprites115,
	sMantineSprites116,
	sMantineSprites117,
	sMantineSprites118,
	sMantineSprites119,
	sMantineSprites120,
};

static const axmain sAxMainMantine = {
	.poses = sAxPosesMantine,
	.animations = sAxAnimationsMantine,
	.animCount = ARRAY_COUNT(sAxAnimationsMantine),
	.spriteData = sAxSpritesMantine,
	.positions = sAxPositionsMantine,
};
