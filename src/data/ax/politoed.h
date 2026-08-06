/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainPolitoed;
const SiroArchive gAxPolitoed = {"SIRO", &sAxMainPolitoed};

static const ax_pose sPolitoedPose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose2[] = {
	AX_POSE(1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose3[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose4[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose5[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose6[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose7[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose8[] = {
	AX_POSE(7, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose10[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose11[] = {
	AX_POSE(10, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose12[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose13[] = {
	AX_POSE(12, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose14[] = {
	AX_POSE(13, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose15[] = {
	AX_POSE(14, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose16[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose17[] = {
	AX_POSE(10, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose18[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose19[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose20[] = {
	AX_POSE(7, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose21[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose22[] = {
	AX_POSE(15, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose23[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose24[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose74[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose75[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose77[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose78[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose80[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose81[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose83[] = {
	AX_POSE(24, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose84[] = {
	AX_POSE(25, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose86[] = {
	AX_POSE(26, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose87[] = {
	AX_POSE(27, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose89[] = {
	AX_POSE(24, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose90[] = {
	AX_POSE(25, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose92[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose93[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose95[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose96[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose97[] = {
	AX_POSE(30, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose98[] = {
	AX_POSE(31, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose99[] = {
	AX_POSE(32, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose100[] = {
	AX_POSE(33, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose101[] = {
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose102[] = {
	AX_POSE(35, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose103[] = {
	AX_POSE(36, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose104[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose105[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose106[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose107[] = {
	AX_POSE(36, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose108[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose109[] = {
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose110[] = {
	AX_POSE(35, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose111[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose112[] = {
	AX_POSE(33, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose113[] = {
	AX_POSE(41, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose114[] = {
	AX_POSE(42, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose115[] = {
	AX_POSE(43, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose116[] = {
	AX_POSE(44, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose117[] = {
	AX_POSE(45, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose118[] = {
	AX_POSE(46, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose119[] = {
	AX_POSE(47, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose120[] = {
	AX_POSE(46, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose121[] = {
	AX_POSE(45, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose122[] = {
	AX_POSE(48, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose130[] = {
	AX_POSE(7, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose142[] = {
	AX_POSE(7, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose148[] = {
	AX_POSE(29, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose149[] = {
	AX_POSE(23, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose150[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose151[] = {
	AX_POSE(27, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose152[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose153[] = {
	AX_POSE(23, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose154[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose180[] = {
	AX_POSE(1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose184[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose187[] = {
	AX_POSE(23, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose190[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose196[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose199[] = {
	AX_POSE(23, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose202[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose204[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose206[] = {
	AX_POSE(24, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose208[] = {
	AX_POSE(24, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPolitoedPose210[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const u8 sPolitoedAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_1_1.lz");
static const u8 sPolitoedAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_1_2.lz");
static const u8 sPolitoedAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_1_3.lz");
static const u8 sPolitoedAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_1_4.lz");
static const u8 sPolitoedAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_1_5.lz");
static const u8 sPolitoedAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_1_6.lz");
static const u8 sPolitoedAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_1_7.lz");
static const u8 sPolitoedAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_1_8.lz");
static const u8 sPolitoedAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_2_1.lz");
static const u8 sPolitoedAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_2_2.lz");
static const u8 sPolitoedAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_2_3.lz");
static const u8 sPolitoedAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_2_4.lz");
static const u8 sPolitoedAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_2_5.lz");
static const u8 sPolitoedAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_2_6.lz");
static const u8 sPolitoedAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_2_7.lz");
static const u8 sPolitoedAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_2_8.lz");
static const u8 sPolitoedAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_3_1.lz");
static const u8 sPolitoedAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_3_2.lz");
static const u8 sPolitoedAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_3_3.lz");
static const u8 sPolitoedAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_3_4.lz");
static const u8 sPolitoedAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_3_5.lz");
static const u8 sPolitoedAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_3_6.lz");
static const u8 sPolitoedAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_3_7.lz");
static const u8 sPolitoedAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_3_8.lz");
static const u8 sPolitoedAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_4_1.lz");
static const u8 sPolitoedAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_4_2.lz");
static const u8 sPolitoedAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_4_3.lz");
static const u8 sPolitoedAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_4_4.lz");
static const u8 sPolitoedAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_4_5.lz");
static const u8 sPolitoedAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_4_6.lz");
static const u8 sPolitoedAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_4_7.lz");
static const u8 sPolitoedAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_4_8.lz");
static const u8 sPolitoedAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_5_1.lz");
static const u8 sPolitoedAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_5_2.lz");
static const u8 sPolitoedAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_5_4.lz");
static const u8 sPolitoedAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_5_5.lz");
static const u8 sPolitoedAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_5_7.lz");
static const u8 sPolitoedAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_5_8.lz");
static const u8 sPolitoedAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_8_1.lz");
static const u8 sPolitoedAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_8_2.lz");
static const u8 sPolitoedAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_8_3.lz");
static const u8 sPolitoedAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_8_4.lz");
static const u8 sPolitoedAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_8_5.lz");
static const u8 sPolitoedAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_8_6.lz");
static const u8 sPolitoedAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_8_7.lz");
static const u8 sPolitoedAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_8_8.lz");
static const u8 sPolitoedAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_9_1.lz");
static const u8 sPolitoedAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_9_2.lz");
static const u8 sPolitoedAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_9_3.lz");
static const u8 sPolitoedAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_9_4.lz");
static const u8 sPolitoedAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_9_5.lz");
static const u8 sPolitoedAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_9_6.lz");
static const u8 sPolitoedAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_9_7.lz");
static const u8 sPolitoedAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_9_8.lz");
static const u8 sPolitoedAnims_10_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_10_2.lz");
static const u8 sPolitoedAnims_10_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_10_4.lz");
static const u8 sPolitoedAnims_10_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_10_5.lz");
static const u8 sPolitoedAnims_10_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_10_8.lz");
static const u8 sPolitoedAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_11_1.lz");
static const u8 sPolitoedAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_11_2.lz");
static const u8 sPolitoedAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_11_3.lz");
static const u8 sPolitoedAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_11_4.lz");
static const u8 sPolitoedAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_11_5.lz");
static const u8 sPolitoedAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_11_6.lz");
static const u8 sPolitoedAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_11_7.lz");
static const u8 sPolitoedAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/politoed/sPolitoedAnims_11_8.lz");

static const u8 sPolitoedGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_1.4bpp.lz");
static const ax_sprite sPolitoedSprites1[] = {
	{sPolitoedGfx1, ARRAY_COUNT(sPolitoedGfx1)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_2.4bpp.lz");
static const ax_sprite sPolitoedSprites2[] = {
	{sPolitoedGfx2, ARRAY_COUNT(sPolitoedGfx2)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_3.4bpp.lz");
static const ax_sprite sPolitoedSprites3[] = {
	{sPolitoedGfx3, ARRAY_COUNT(sPolitoedGfx3)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_4.4bpp.lz");
static const ax_sprite sPolitoedSprites4[] = {
	{sPolitoedGfx4, ARRAY_COUNT(sPolitoedGfx4)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_5.4bpp.lz");
static const ax_sprite sPolitoedSprites5[] = {
	{sPolitoedGfx5, ARRAY_COUNT(sPolitoedGfx5)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_6.4bpp.lz");
static const ax_sprite sPolitoedSprites6[] = {
	{sPolitoedGfx6, ARRAY_COUNT(sPolitoedGfx6)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_7.4bpp.lz");
static const ax_sprite sPolitoedSprites7[] = {
	{sPolitoedGfx7, ARRAY_COUNT(sPolitoedGfx7)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_8.4bpp.lz");
static const ax_sprite sPolitoedSprites8[] = {
	{sPolitoedGfx8, ARRAY_COUNT(sPolitoedGfx8)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_9.4bpp.lz");
static const ax_sprite sPolitoedSprites9[] = {
	{sPolitoedGfx9, ARRAY_COUNT(sPolitoedGfx9)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_10.4bpp.lz");
static const ax_sprite sPolitoedSprites10[] = {
	{sPolitoedGfx10, ARRAY_COUNT(sPolitoedGfx10)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_11.4bpp.lz");
static const ax_sprite sPolitoedSprites11[] = {
	{sPolitoedGfx11, ARRAY_COUNT(sPolitoedGfx11)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_12.4bpp.lz");
static const ax_sprite sPolitoedSprites12[] = {
	{sPolitoedGfx12, ARRAY_COUNT(sPolitoedGfx12)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_13.4bpp.lz");
static const ax_sprite sPolitoedSprites13[] = {
	{sPolitoedGfx13, ARRAY_COUNT(sPolitoedGfx13)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_14.4bpp.lz");
static const ax_sprite sPolitoedSprites14[] = {
	{sPolitoedGfx14, ARRAY_COUNT(sPolitoedGfx14)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_15.4bpp.lz");
static const ax_sprite sPolitoedSprites15[] = {
	{sPolitoedGfx15, ARRAY_COUNT(sPolitoedGfx15)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_16.4bpp.lz");
static const ax_sprite sPolitoedSprites16[] = {
	{sPolitoedGfx16, ARRAY_COUNT(sPolitoedGfx16)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_17.4bpp.lz");
static const ax_sprite sPolitoedSprites17[] = {
	{sPolitoedGfx17, ARRAY_COUNT(sPolitoedGfx17)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_18.4bpp.lz");
static const ax_sprite sPolitoedSprites18[] = {
	{sPolitoedGfx18, ARRAY_COUNT(sPolitoedGfx18)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_19.4bpp.lz");
static const u8 sPolitoedGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_19_1.4bpp.lz");
static const u8 sPolitoedGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_19_2.4bpp.lz");
static const ax_sprite sPolitoedSprites19[] = {
	{NULL, 32}, 
	{sPolitoedGfx19, ARRAY_COUNT(sPolitoedGfx19)}, 
	{NULL, 32}, 
	{sPolitoedGfx19_1, ARRAY_COUNT(sPolitoedGfx19_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx19_2, ARRAY_COUNT(sPolitoedGfx19_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_20.4bpp.lz");
static const u8 sPolitoedGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_20_1.4bpp.lz");
static const ax_sprite sPolitoedSprites20[] = {
	{NULL, 32}, 
	{sPolitoedGfx20, ARRAY_COUNT(sPolitoedGfx20)}, 
	{NULL, 32}, 
	{sPolitoedGfx20_1, ARRAY_COUNT(sPolitoedGfx20_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_21.4bpp.lz");
static const u8 sPolitoedGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_21_1.4bpp.lz");
static const u8 sPolitoedGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_21_2.4bpp.lz");
static const u8 sPolitoedGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_21_3.4bpp.lz");
static const ax_sprite sPolitoedSprites21[] = {
	{NULL, 32}, 
	{sPolitoedGfx21, ARRAY_COUNT(sPolitoedGfx21)}, 
	{NULL, 64}, 
	{sPolitoedGfx21_1, ARRAY_COUNT(sPolitoedGfx21_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx21_2, ARRAY_COUNT(sPolitoedGfx21_2)}, 
	{NULL, 32}, 
	{sPolitoedGfx21_3, ARRAY_COUNT(sPolitoedGfx21_3)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_22.4bpp.lz");
static const u8 sPolitoedGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_22_1.4bpp.lz");
static const u8 sPolitoedGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_22_2.4bpp.lz");
static const u8 sPolitoedGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_22_3.4bpp.lz");
static const ax_sprite sPolitoedSprites22[] = {
	{NULL, 32}, 
	{sPolitoedGfx22, ARRAY_COUNT(sPolitoedGfx22)}, 
	{NULL, 32}, 
	{sPolitoedGfx22_1, ARRAY_COUNT(sPolitoedGfx22_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx22_2, ARRAY_COUNT(sPolitoedGfx22_2)}, 
	{NULL, 32}, 
	{sPolitoedGfx22_3, ARRAY_COUNT(sPolitoedGfx22_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_23.4bpp.lz");
static const u8 sPolitoedGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_23_1.4bpp.lz");
static const u8 sPolitoedGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_23_2.4bpp.lz");
static const u8 sPolitoedGfx23_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_23_3.4bpp.lz");
static const ax_sprite sPolitoedSprites23[] = {
	{NULL, 32}, 
	{sPolitoedGfx23, ARRAY_COUNT(sPolitoedGfx23)}, 
	{NULL, 32}, 
	{sPolitoedGfx23_1, ARRAY_COUNT(sPolitoedGfx23_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx23_2, ARRAY_COUNT(sPolitoedGfx23_2)}, 
	{NULL, 64}, 
	{sPolitoedGfx23_3, ARRAY_COUNT(sPolitoedGfx23_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_24.4bpp.lz");
static const u8 sPolitoedGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_24_1.4bpp.lz");
static const u8 sPolitoedGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_24_2.4bpp.lz");
static const u8 sPolitoedGfx24_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_24_3.4bpp.lz");
static const ax_sprite sPolitoedSprites24[] = {
	{NULL, 32}, 
	{sPolitoedGfx24, ARRAY_COUNT(sPolitoedGfx24)}, 
	{NULL, 64}, 
	{sPolitoedGfx24_1, ARRAY_COUNT(sPolitoedGfx24_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx24_2, ARRAY_COUNT(sPolitoedGfx24_2)}, 
	{NULL, 64}, 
	{sPolitoedGfx24_3, ARRAY_COUNT(sPolitoedGfx24_3)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_25.4bpp.lz");
static const u8 sPolitoedGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_25_1.4bpp.lz");
static const u8 sPolitoedGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_25_2.4bpp.lz");
static const u8 sPolitoedGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_25_3.4bpp.lz");
static const ax_sprite sPolitoedSprites25[] = {
	{NULL, 32}, 
	{sPolitoedGfx25, ARRAY_COUNT(sPolitoedGfx25)}, 
	{NULL, 32}, 
	{sPolitoedGfx25_1, ARRAY_COUNT(sPolitoedGfx25_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx25_2, ARRAY_COUNT(sPolitoedGfx25_2)}, 
	{NULL, 32}, 
	{sPolitoedGfx25_3, ARRAY_COUNT(sPolitoedGfx25_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_26.4bpp.lz");
static const u8 sPolitoedGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_26_1.4bpp.lz");
static const u8 sPolitoedGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_26_2.4bpp.lz");
static const u8 sPolitoedGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_26_3.4bpp.lz");
static const ax_sprite sPolitoedSprites26[] = {
	{NULL, 32}, 
	{sPolitoedGfx26, ARRAY_COUNT(sPolitoedGfx26)}, 
	{NULL, 64}, 
	{sPolitoedGfx26_1, ARRAY_COUNT(sPolitoedGfx26_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx26_2, ARRAY_COUNT(sPolitoedGfx26_2)}, 
	{NULL, 32}, 
	{sPolitoedGfx26_3, ARRAY_COUNT(sPolitoedGfx26_3)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_27.4bpp.lz");
static const u8 sPolitoedGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_27_1.4bpp.lz");
static const u8 sPolitoedGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_27_2.4bpp.lz");
static const u8 sPolitoedGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_27_3.4bpp.lz");
static const ax_sprite sPolitoedSprites27[] = {
	{NULL, 32}, 
	{sPolitoedGfx27, ARRAY_COUNT(sPolitoedGfx27)}, 
	{NULL, 64}, 
	{sPolitoedGfx27_1, ARRAY_COUNT(sPolitoedGfx27_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx27_2, ARRAY_COUNT(sPolitoedGfx27_2)}, 
	{NULL, 32}, 
	{sPolitoedGfx27_3, ARRAY_COUNT(sPolitoedGfx27_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_28.4bpp.lz");
static const u8 sPolitoedGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_28_1.4bpp.lz");
static const u8 sPolitoedGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_28_2.4bpp.lz");
static const ax_sprite sPolitoedSprites28[] = {
	{NULL, 32}, 
	{sPolitoedGfx28, ARRAY_COUNT(sPolitoedGfx28)}, 
	{NULL, 64}, 
	{sPolitoedGfx28_1, ARRAY_COUNT(sPolitoedGfx28_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx28_2, ARRAY_COUNT(sPolitoedGfx28_2)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_29.4bpp.lz");
static const u8 sPolitoedGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_29_1.4bpp.lz");
static const u8 sPolitoedGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_29_2.4bpp.lz");
static const u8 sPolitoedGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_29_3.4bpp.lz");
static const ax_sprite sPolitoedSprites29[] = {
	{NULL, 32}, 
	{sPolitoedGfx29, ARRAY_COUNT(sPolitoedGfx29)}, 
	{NULL, 32}, 
	{sPolitoedGfx29_1, ARRAY_COUNT(sPolitoedGfx29_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx29_2, ARRAY_COUNT(sPolitoedGfx29_2)}, 
	{NULL, 32}, 
	{sPolitoedGfx29_3, ARRAY_COUNT(sPolitoedGfx29_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_30.4bpp.lz");
static const u8 sPolitoedGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_30_1.4bpp.lz");
static const u8 sPolitoedGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_30_2.4bpp.lz");
static const u8 sPolitoedGfx30_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_30_3.4bpp.lz");
static const ax_sprite sPolitoedSprites30[] = {
	{NULL, 32}, 
	{sPolitoedGfx30, ARRAY_COUNT(sPolitoedGfx30)}, 
	{NULL, 64}, 
	{sPolitoedGfx30_1, ARRAY_COUNT(sPolitoedGfx30_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx30_2, ARRAY_COUNT(sPolitoedGfx30_2)}, 
	{NULL, 32}, 
	{sPolitoedGfx30_3, ARRAY_COUNT(sPolitoedGfx30_3)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_31.4bpp.lz");
static const u8 sPolitoedGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_31_1.4bpp.lz");
static const u8 sPolitoedGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_31_2.4bpp.lz");
static const ax_sprite sPolitoedSprites31[] = {
	{NULL, 32}, 
	{sPolitoedGfx31, ARRAY_COUNT(sPolitoedGfx31)}, 
	{NULL, 32}, 
	{sPolitoedGfx31_1, ARRAY_COUNT(sPolitoedGfx31_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx31_2, ARRAY_COUNT(sPolitoedGfx31_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_32.4bpp.lz");
static const u8 sPolitoedGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_32_1.4bpp.lz");
static const u8 sPolitoedGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_32_2.4bpp.lz");
static const u8 sPolitoedGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_32_3.4bpp.lz");
static const u8 sPolitoedGfx32_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_32_4.4bpp.lz");
static const ax_sprite sPolitoedSprites32[] = {
	{sPolitoedGfx32, ARRAY_COUNT(sPolitoedGfx32)}, 
	{NULL, 32}, 
	{sPolitoedGfx32_1, ARRAY_COUNT(sPolitoedGfx32_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx32_2, ARRAY_COUNT(sPolitoedGfx32_2)}, 
	{NULL, 32}, 
	{sPolitoedGfx32_3, ARRAY_COUNT(sPolitoedGfx32_3)}, 
	{NULL, 32}, 
	{sPolitoedGfx32_4, ARRAY_COUNT(sPolitoedGfx32_4)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_33.4bpp.lz");
static const u8 sPolitoedGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_33_1.4bpp.lz");
static const u8 sPolitoedGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_33_2.4bpp.lz");
static const ax_sprite sPolitoedSprites33[] = {
	{NULL, 64}, 
	{sPolitoedGfx33, ARRAY_COUNT(sPolitoedGfx33)}, 
	{NULL, 32}, 
	{sPolitoedGfx33_1, ARRAY_COUNT(sPolitoedGfx33_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx33_2, ARRAY_COUNT(sPolitoedGfx33_2)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_34.4bpp.lz");
static const u8 sPolitoedGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_34_1.4bpp.lz");
static const u8 sPolitoedGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_34_2.4bpp.lz");
static const u8 sPolitoedGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_34_3.4bpp.lz");
static const ax_sprite sPolitoedSprites34[] = {
	{sPolitoedGfx34, ARRAY_COUNT(sPolitoedGfx34)}, 
	{NULL, 64}, 
	{sPolitoedGfx34_1, ARRAY_COUNT(sPolitoedGfx34_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx34_2, ARRAY_COUNT(sPolitoedGfx34_2)}, 
	{NULL, 32}, 
	{sPolitoedGfx34_3, ARRAY_COUNT(sPolitoedGfx34_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_35.4bpp.lz");
static const u8 sPolitoedGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_35_1.4bpp.lz");
static const u8 sPolitoedGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_35_2.4bpp.lz");
static const u8 sPolitoedGfx35_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_35_3.4bpp.lz");
static const ax_sprite sPolitoedSprites35[] = {
	{sPolitoedGfx35, ARRAY_COUNT(sPolitoedGfx35)}, 
	{NULL, 64}, 
	{sPolitoedGfx35_1, ARRAY_COUNT(sPolitoedGfx35_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx35_2, ARRAY_COUNT(sPolitoedGfx35_2)}, 
	{NULL, 32}, 
	{sPolitoedGfx35_3, ARRAY_COUNT(sPolitoedGfx35_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_36.4bpp.lz");
static const u8 sPolitoedGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_36_1.4bpp.lz");
static const u8 sPolitoedGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_36_2.4bpp.lz");
static const u8 sPolitoedGfx36_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_36_3.4bpp.lz");
static const ax_sprite sPolitoedSprites36[] = {
	{sPolitoedGfx36, ARRAY_COUNT(sPolitoedGfx36)}, 
	{NULL, 64}, 
	{sPolitoedGfx36_1, ARRAY_COUNT(sPolitoedGfx36_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx36_2, ARRAY_COUNT(sPolitoedGfx36_2)}, 
	{NULL, 32}, 
	{sPolitoedGfx36_3, ARRAY_COUNT(sPolitoedGfx36_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_37.4bpp.lz");
static const u8 sPolitoedGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_37_1.4bpp.lz");
static const u8 sPolitoedGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_37_2.4bpp.lz");
static const u8 sPolitoedGfx37_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_37_3.4bpp.lz");
static const ax_sprite sPolitoedSprites37[] = {
	{sPolitoedGfx37, ARRAY_COUNT(sPolitoedGfx37)}, 
	{NULL, 64}, 
	{sPolitoedGfx37_1, ARRAY_COUNT(sPolitoedGfx37_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx37_2, ARRAY_COUNT(sPolitoedGfx37_2)}, 
	{NULL, 32}, 
	{sPolitoedGfx37_3, ARRAY_COUNT(sPolitoedGfx37_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_38.4bpp.lz");
static const u8 sPolitoedGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_38_1.4bpp.lz");
static const u8 sPolitoedGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_38_2.4bpp.lz");
static const u8 sPolitoedGfx38_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_38_3.4bpp.lz");
static const ax_sprite sPolitoedSprites38[] = {
	{NULL, 32}, 
	{sPolitoedGfx38, ARRAY_COUNT(sPolitoedGfx38)}, 
	{NULL, 32}, 
	{sPolitoedGfx38_1, ARRAY_COUNT(sPolitoedGfx38_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx38_2, ARRAY_COUNT(sPolitoedGfx38_2)}, 
	{NULL, 32}, 
	{sPolitoedGfx38_3, ARRAY_COUNT(sPolitoedGfx38_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_39.4bpp.lz");
static const u8 sPolitoedGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_39_1.4bpp.lz");
static const u8 sPolitoedGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_39_2.4bpp.lz");
static const u8 sPolitoedGfx39_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_39_3.4bpp.lz");
static const ax_sprite sPolitoedSprites39[] = {
	{NULL, 32}, 
	{sPolitoedGfx39, ARRAY_COUNT(sPolitoedGfx39)}, 
	{NULL, 64}, 
	{sPolitoedGfx39_1, ARRAY_COUNT(sPolitoedGfx39_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx39_2, ARRAY_COUNT(sPolitoedGfx39_2)}, 
	{NULL, 32}, 
	{sPolitoedGfx39_3, ARRAY_COUNT(sPolitoedGfx39_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_40.4bpp.lz");
static const u8 sPolitoedGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_40_1.4bpp.lz");
static const u8 sPolitoedGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_40_2.4bpp.lz");
static const ax_sprite sPolitoedSprites40[] = {
	{NULL, 32}, 
	{sPolitoedGfx40, ARRAY_COUNT(sPolitoedGfx40)}, 
	{NULL, 32}, 
	{sPolitoedGfx40_1, ARRAY_COUNT(sPolitoedGfx40_1)}, 
	{NULL, 32}, 
	{sPolitoedGfx40_2, ARRAY_COUNT(sPolitoedGfx40_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_41.4bpp.lz");
static const u8 sPolitoedGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_41_1.4bpp.lz");
static const ax_sprite sPolitoedSprites41[] = {
	{NULL, 32}, 
	{sPolitoedGfx41, ARRAY_COUNT(sPolitoedGfx41)}, 
	{NULL, 64}, 
	{sPolitoedGfx41_1, ARRAY_COUNT(sPolitoedGfx41_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_42.4bpp.lz");
static const ax_sprite sPolitoedSprites42[] = {
	{sPolitoedGfx42, ARRAY_COUNT(sPolitoedGfx42)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_43.4bpp.lz");
static const ax_sprite sPolitoedSprites43[] = {
	{sPolitoedGfx43, ARRAY_COUNT(sPolitoedGfx43)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_44.4bpp.lz");
static const ax_sprite sPolitoedSprites44[] = {
	{sPolitoedGfx44, ARRAY_COUNT(sPolitoedGfx44)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_45.4bpp.lz");
static const ax_sprite sPolitoedSprites45[] = {
	{sPolitoedGfx45, ARRAY_COUNT(sPolitoedGfx45)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_46.4bpp.lz");
static const ax_sprite sPolitoedSprites46[] = {
	{sPolitoedGfx46, ARRAY_COUNT(sPolitoedGfx46)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_47.4bpp.lz");
static const ax_sprite sPolitoedSprites47[] = {
	{sPolitoedGfx47, ARRAY_COUNT(sPolitoedGfx47)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_48.4bpp.lz");
static const ax_sprite sPolitoedSprites48[] = {
	{sPolitoedGfx48, ARRAY_COUNT(sPolitoedGfx48)}, 
	{NULL, 0}
};
static const u8 sPolitoedGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/politoed/sprite_49.4bpp.lz");
static const ax_sprite sPolitoedSprites49[] = {
	{sPolitoedGfx49, ARRAY_COUNT(sPolitoedGfx49)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesPolitoed[] = {
	sPolitoedPose1,
	sPolitoedPose2,
	sPolitoedPose3,
	sPolitoedPose4,
	sPolitoedPose5,
	sPolitoedPose6,
	sPolitoedPose7,
	sPolitoedPose8,
	sPolitoedPose9,
	sPolitoedPose10,
	sPolitoedPose11,
	sPolitoedPose12,
	sPolitoedPose13,
	sPolitoedPose14,
	sPolitoedPose15,
	sPolitoedPose16,
	sPolitoedPose17,
	sPolitoedPose18,
	sPolitoedPose19,
	sPolitoedPose20,
	sPolitoedPose21,
	sPolitoedPose22,
	sPolitoedPose23,
	sPolitoedPose24,
	sPolitoedPose1,
	sPolitoedPose2,
	sPolitoedPose3,
	sPolitoedPose4,
	sPolitoedPose5,
	sPolitoedPose6,
	sPolitoedPose7,
	sPolitoedPose8,
	sPolitoedPose9,
	sPolitoedPose10,
	sPolitoedPose11,
	sPolitoedPose12,
	sPolitoedPose13,
	sPolitoedPose14,
	sPolitoedPose15,
	sPolitoedPose16,
	sPolitoedPose17,
	sPolitoedPose18,
	sPolitoedPose19,
	sPolitoedPose20,
	sPolitoedPose21,
	sPolitoedPose22,
	sPolitoedPose23,
	sPolitoedPose24,
	sPolitoedPose1,
	sPolitoedPose2,
	sPolitoedPose3,
	sPolitoedPose4,
	sPolitoedPose5,
	sPolitoedPose6,
	sPolitoedPose7,
	sPolitoedPose8,
	sPolitoedPose9,
	sPolitoedPose10,
	sPolitoedPose11,
	sPolitoedPose12,
	sPolitoedPose13,
	sPolitoedPose14,
	sPolitoedPose15,
	sPolitoedPose16,
	sPolitoedPose17,
	sPolitoedPose18,
	sPolitoedPose19,
	sPolitoedPose20,
	sPolitoedPose21,
	sPolitoedPose22,
	sPolitoedPose23,
	sPolitoedPose24,
	sPolitoedPose1,
	sPolitoedPose74,
	sPolitoedPose75,
	sPolitoedPose4,
	sPolitoedPose77,
	sPolitoedPose78,
	sPolitoedPose7,
	sPolitoedPose80,
	sPolitoedPose81,
	sPolitoedPose10,
	sPolitoedPose83,
	sPolitoedPose84,
	sPolitoedPose13,
	sPolitoedPose86,
	sPolitoedPose87,
	sPolitoedPose16,
	sPolitoedPose89,
	sPolitoedPose90,
	sPolitoedPose19,
	sPolitoedPose92,
	sPolitoedPose93,
	sPolitoedPose22,
	sPolitoedPose95,
	sPolitoedPose96,
	sPolitoedPose97,
	sPolitoedPose98,
	sPolitoedPose99,
	sPolitoedPose100,
	sPolitoedPose101,
	sPolitoedPose102,
	sPolitoedPose103,
	sPolitoedPose104,
	sPolitoedPose105,
	sPolitoedPose106,
	sPolitoedPose107,
	sPolitoedPose108,
	sPolitoedPose109,
	sPolitoedPose110,
	sPolitoedPose111,
	sPolitoedPose112,
	sPolitoedPose113,
	sPolitoedPose114,
	sPolitoedPose115,
	sPolitoedPose116,
	sPolitoedPose117,
	sPolitoedPose118,
	sPolitoedPose119,
	sPolitoedPose120,
	sPolitoedPose121,
	sPolitoedPose122,
	sPolitoedPose1,
	sPolitoedPose2,
	sPolitoedPose3,
	sPolitoedPose4,
	sPolitoedPose5,
	sPolitoedPose6,
	sPolitoedPose7,
	sPolitoedPose130,
	sPolitoedPose9,
	sPolitoedPose10,
	sPolitoedPose11,
	sPolitoedPose12,
	sPolitoedPose13,
	sPolitoedPose14,
	sPolitoedPose15,
	sPolitoedPose16,
	sPolitoedPose17,
	sPolitoedPose18,
	sPolitoedPose19,
	sPolitoedPose142,
	sPolitoedPose21,
	sPolitoedPose22,
	sPolitoedPose23,
	sPolitoedPose24,
	sPolitoedPose75,
	sPolitoedPose148,
	sPolitoedPose149,
	sPolitoedPose150,
	sPolitoedPose151,
	sPolitoedPose152,
	sPolitoedPose153,
	sPolitoedPose154,
	sPolitoedPose1,
	sPolitoedPose74,
	sPolitoedPose75,
	sPolitoedPose4,
	sPolitoedPose77,
	sPolitoedPose78,
	sPolitoedPose7,
	sPolitoedPose80,
	sPolitoedPose81,
	sPolitoedPose10,
	sPolitoedPose83,
	sPolitoedPose84,
	sPolitoedPose13,
	sPolitoedPose86,
	sPolitoedPose87,
	sPolitoedPose16,
	sPolitoedPose89,
	sPolitoedPose90,
	sPolitoedPose19,
	sPolitoedPose92,
	sPolitoedPose93,
	sPolitoedPose22,
	sPolitoedPose95,
	sPolitoedPose96,
	sPolitoedPose1,
	sPolitoedPose180,
	sPolitoedPose75,
	sPolitoedPose4,
	sPolitoedPose5,
	sPolitoedPose184,
	sPolitoedPose7,
	sPolitoedPose8,
	sPolitoedPose187,
	sPolitoedPose10,
	sPolitoedPose11,
	sPolitoedPose190,
	sPolitoedPose13,
	sPolitoedPose14,
	sPolitoedPose151,
	sPolitoedPose16,
	sPolitoedPose17,
	sPolitoedPose196,
	sPolitoedPose19,
	sPolitoedPose20,
	sPolitoedPose199,
	sPolitoedPose22,
	sPolitoedPose23,
	sPolitoedPose202,
	sPolitoedPose74,
	sPolitoedPose204,
	sPolitoedPose92,
	sPolitoedPose206,
	sPolitoedPose86,
	sPolitoedPose208,
	sPolitoedPose80,
	sPolitoedPose210,
	sPolitoedPose1,
	sPolitoedPose22,
	sPolitoedPose19,
	sPolitoedPose16,
	sPolitoedPose13,
	sPolitoedPose10,
	sPolitoedPose7,
	sPolitoedPose4,
};

static const struct PositionSets sAxPositionsPolitoed[] = {
	[0] = { .set = { {0, -7}, {-9, -5}, {9, -5}, {0, -8} } },
	[1] = { .set = { {0, -7}, {-11, -9}, {11, -9}, {0, -8} } },
	[2] = { .set = { {0, -5}, {-9, -4}, {9, -4}, {0, -7} } },
	[3] = { .set = { {5, -8}, {-4, -4}, {10, -9}, {1, -9} } },
	[4] = { .set = { {5, -14}, {-7, -12}, {11, -16}, {1, -13} } },
	[5] = { .set = { {6, -6}, {-3, -3}, {10, -7}, {1, -8} } },
	[6] = { .set = { {7, -9}, {4, -10}, {2, -4}, {0, -9} } },
	[7] = { .set = { {8, -15}, {6, -15}, {5, -11}, {-1, -15} } },
	[8] = { .set = { {8, -8}, {4, -5}, {2, -2}, {-1, -10} } },
	[9] = { .set = { {4, -12}, {1, -12}, {8, -6}, {-1, -10} } },
	[10] = { .set = { {3, -17}, {1, -18}, {10, -14}, {-1, -16} } },
	[11] = { .set = { {4, -11}, {-1, -11}, {7, -5}, {0, -10} } },
	[12] = { .set = { {0, -13}, {5, -9}, {-5, -9}, {0, -10} } },
	[13] = { .set = { {0, -21}, {9, -19}, {-9, -19}, {0, -17} } },
	[14] = { .set = { {0, -13}, {6, -8}, {-6, -8}, {0, -9} } },
	[15] = { .set = { {-4, -12}, {-1, -12}, {-8, -6}, {1, -10} } },
	[16] = { .set = { {-3, -17}, {-1, -18}, {-10, -14}, {1, -16} } },
	[17] = { .set = { {-4, -11}, {1, -11}, {-7, -5}, {0, -10} } },
	[18] = { .set = { {-7, -9}, {-4, -10}, {-2, -4}, {0, -9} } },
	[19] = { .set = { {-8, -15}, {-6, -15}, {-5, -11}, {1, -15} } },
	[20] = { .set = { {-8, -8}, {-4, -5}, {-2, -2}, {1, -10} } },
	[21] = { .set = { {-5, -8}, {-10, -9}, {4, -4}, {-1, -9} } },
	[22] = { .set = { {-5, -13}, {-11, -16}, {7, -12}, {0, -13} } },
	[23] = { .set = { {-5, -5}, {-10, -7}, {3, -3}, {-1, -8} } },
	[24] = { .set = { {0, -7}, {-9, -5}, {9, -5}, {0, -8} } },
	[25] = { .set = { {0, -7}, {-11, -9}, {11, -9}, {0, -8} } },
	[26] = { .set = { {0, -5}, {-9, -4}, {9, -4}, {0, -7} } },
	[27] = { .set = { {5, -8}, {-4, -4}, {10, -9}, {1, -9} } },
	[28] = { .set = { {5, -14}, {-7, -12}, {11, -16}, {1, -13} } },
	[29] = { .set = { {6, -6}, {-3, -3}, {10, -7}, {1, -8} } },
	[30] = { .set = { {7, -9}, {4, -10}, {2, -4}, {0, -9} } },
	[31] = { .set = { {8, -15}, {6, -15}, {5, -11}, {-1, -15} } },
	[32] = { .set = { {8, -8}, {4, -5}, {2, -2}, {-1, -10} } },
	[33] = { .set = { {4, -12}, {1, -12}, {8, -6}, {-1, -10} } },
	[34] = { .set = { {3, -17}, {1, -18}, {10, -14}, {-1, -16} } },
	[35] = { .set = { {4, -11}, {-1, -11}, {7, -5}, {0, -10} } },
	[36] = { .set = { {0, -13}, {5, -9}, {-5, -9}, {0, -10} } },
	[37] = { .set = { {0, -21}, {9, -19}, {-9, -19}, {0, -17} } },
	[38] = { .set = { {0, -13}, {6, -8}, {-6, -8}, {0, -9} } },
	[39] = { .set = { {-4, -12}, {-1, -12}, {-8, -6}, {1, -10} } },
	[40] = { .set = { {-3, -17}, {-1, -18}, {-10, -14}, {1, -16} } },
	[41] = { .set = { {-4, -11}, {1, -11}, {-7, -5}, {0, -10} } },
	[42] = { .set = { {-7, -9}, {-4, -10}, {-2, -4}, {0, -9} } },
	[43] = { .set = { {-8, -15}, {-6, -15}, {-5, -11}, {1, -15} } },
	[44] = { .set = { {-8, -8}, {-4, -5}, {-2, -2}, {1, -10} } },
	[45] = { .set = { {-5, -8}, {-10, -9}, {4, -4}, {-1, -9} } },
	[46] = { .set = { {-5, -13}, {-11, -16}, {7, -12}, {0, -13} } },
	[47] = { .set = { {-5, -5}, {-10, -7}, {3, -3}, {-1, -8} } },
	[48] = { .set = { {0, -7}, {-9, -5}, {9, -5}, {0, -8} } },
	[49] = { .set = { {0, -7}, {-11, -9}, {11, -9}, {0, -8} } },
	[50] = { .set = { {0, -5}, {-9, -4}, {9, -4}, {0, -7} } },
	[51] = { .set = { {5, -8}, {-4, -4}, {10, -9}, {1, -9} } },
	[52] = { .set = { {5, -14}, {-7, -12}, {11, -16}, {1, -13} } },
	[53] = { .set = { {6, -6}, {-3, -3}, {10, -7}, {1, -8} } },
	[54] = { .set = { {7, -9}, {4, -10}, {2, -4}, {0, -9} } },
	[55] = { .set = { {8, -15}, {6, -15}, {5, -11}, {-1, -15} } },
	[56] = { .set = { {8, -8}, {4, -5}, {2, -2}, {-1, -10} } },
	[57] = { .set = { {4, -12}, {1, -12}, {8, -6}, {-1, -10} } },
	[58] = { .set = { {3, -17}, {1, -18}, {10, -14}, {-1, -16} } },
	[59] = { .set = { {4, -11}, {-1, -11}, {7, -5}, {0, -10} } },
	[60] = { .set = { {0, -13}, {5, -9}, {-5, -9}, {0, -10} } },
	[61] = { .set = { {0, -21}, {9, -19}, {-9, -19}, {0, -17} } },
	[62] = { .set = { {0, -13}, {6, -8}, {-6, -8}, {0, -9} } },
	[63] = { .set = { {-4, -12}, {-1, -12}, {-8, -6}, {1, -10} } },
	[64] = { .set = { {-3, -17}, {-1, -18}, {-10, -14}, {1, -16} } },
	[65] = { .set = { {-4, -11}, {1, -11}, {-7, -5}, {0, -10} } },
	[66] = { .set = { {-7, -9}, {-4, -10}, {-2, -4}, {0, -9} } },
	[67] = { .set = { {-8, -15}, {-6, -15}, {-5, -11}, {1, -15} } },
	[68] = { .set = { {-8, -8}, {-4, -5}, {-2, -2}, {1, -10} } },
	[69] = { .set = { {-5, -8}, {-10, -9}, {4, -4}, {-1, -9} } },
	[70] = { .set = { {-5, -13}, {-11, -16}, {7, -12}, {0, -13} } },
	[71] = { .set = { {-5, -5}, {-10, -7}, {3, -3}, {-1, -8} } },
	[72] = { .set = { {0, -7}, {-9, -5}, {9, -5}, {0, -8} } },
	[73] = { .set = { {0, -12}, {-7, -6}, {7, -6}, {0, -9} } },
	[74] = { .set = { {0, -7}, {-10, -10}, {10, -10}, {0, -8} } },
	[75] = { .set = { {5, -8}, {-4, -4}, {10, -9}, {1, -9} } },
	[76] = { .set = { {4, -14}, {-2, -5}, {8, -9}, {1, -10} } },
	[77] = { .set = { {7, -10}, {-7, -7}, {11, -12}, {4, -9} } },
	[78] = { .set = { {7, -9}, {4, -10}, {2, -4}, {0, -9} } },
	[79] = { .set = { {7, -16}, {3, -9}, {2, -6}, {-2, -10} } },
	[80] = { .set = { {8, -10}, {-4, -15}, {-5, -7}, {1, -11} } },
	[81] = { .set = { {4, -12}, {1, -12}, {8, -6}, {-1, -10} } },
	[82] = { .set = { {4, -16}, {-1, -12}, {6, -9}, {-1, -11} } },
	[83] = { .set = { {8, -14}, {-7, -14}, {3, -8}, {0, -12} } },
	[84] = { .set = { {0, -13}, {5, -9}, {-5, -9}, {0, -10} } },
	[85] = { .set = { {0, -11}, {4, -11}, {-4, -11}, {0, -9} } },
	[86] = { .set = { {0, -14}, {11, -9}, {-11, -9}, {0, -11} } },
	[87] = { .set = { {-4, -12}, {-1, -12}, {-8, -6}, {1, -10} } },
	[88] = { .set = { {-4, -16}, {1, -12}, {-6, -9}, {1, -11} } },
	[89] = { .set = { {-8, -14}, {7, -14}, {-3, -8}, {0, -12} } },
	[90] = { .set = { {-7, -9}, {-4, -10}, {-2, -4}, {0, -9} } },
	[91] = { .set = { {-7, -16}, {-3, -9}, {-2, -6}, {2, -10} } },
	[92] = { .set = { {-8, -10}, {4, -15}, {5, -7}, {-1, -11} } },
	[93] = { .set = { {-5, -8}, {-10, -9}, {4, -4}, {-1, -9} } },
	[94] = { .set = { {-4, -13}, {-8, -9}, {2, -6}, {0, -9} } },
	[95] = { .set = { {-7, -10}, {-10, -12}, {7, -7}, {-2, -9} } },
	[96] = { .set = { {1, -7}, {-4, -4}, {11, -13}, {1, -9} } },
	[97] = { .set = { {-1, -7}, {-11, -13}, {4, -4}, {-1, -8} } },
	[98] = { .set = { {4, -8}, {-10, -13}, {6, -5}, {1, -8} } },
	[99] = { .set = { {6, -9}, {9, -18}, {0, -6}, {2, -11} } },
	[100] = { .set = { {7, -8}, {7, -5}, {-6, -13}, {0, -7} } },
	[101] = { .set = { {7, -10}, {0, -21}, {3, -5}, {-1, -10} } },
	[102] = { .set = { {5, -12}, {2, -9}, {11, -13}, {2, -10} } },
	[103] = { .set = { {4, -13}, {-7, -21}, {5, -8}, {-1, -11} } },
	[104] = { .set = { {-1, -12}, {3, -9}, {-10, -16}, {-1, -10} } },
	[105] = { .set = { {1, -13}, {10, -16}, {-3, -9}, {1, -10} } },
	[106] = { .set = { {-5, -12}, {-2, -9}, {-11, -13}, {-2, -10} } },
	[107] = { .set = { {-4, -13}, {7, -21}, {-5, -8}, {1, -11} } },
	[108] = { .set = { {-7, -8}, {-7, -5}, {6, -13}, {0, -7} } },
	[109] = { .set = { {-7, -10}, {0, -21}, {-3, -5}, {1, -10} } },
	[110] = { .set = { {-4, -7}, {-6, -5}, {9, -12}, {0, -9} } },
	[111] = { .set = { {-6, -9}, {-9, -18}, {0, -6}, {-2, -11} } },
	[112] = { .set = { {-3, -6}, {-6, -6}, {7, -1}, {2, -8} } },
	[113] = { .set = { {-4, -5}, {-6, -5}, {6, -1}, {0, -7} } },
	[114] = { .set = { {0, -13}, {-8, -16}, {8, -16}, {0, -9} } },
	[115] = { .set = { {-1, -13}, {-10, -13}, {5, -16}, {0, -11} } },
	[116] = { .set = { {5, -15}, {0, -17}, {-3, -14}, {-2, -10} } },
	[117] = { .set = { {0, -13}, {-5, -16}, {4, -13}, {-2, -9} } },
	[118] = { .set = { {0, -14}, {7, -14}, {-7, -14}, {0, -10} } },
	[119] = { .set = { {-1, -13}, {4, -16}, {-5, -13}, {1, -9} } },
	[120] = { .set = { {-6, -15}, {-1, -17}, {2, -14}, {1, -10} } },
	[121] = { .set = { {-1, -13}, {-6, -16}, {9, -13}, {0, -10} } },
	[122] = { .set = { {0, -7}, {-9, -5}, {9, -5}, {0, -8} } },
	[123] = { .set = { {0, -7}, {-11, -9}, {11, -9}, {0, -8} } },
	[124] = { .set = { {0, -5}, {-9, -4}, {9, -4}, {0, -7} } },
	[125] = { .set = { {5, -8}, {-4, -4}, {10, -9}, {1, -9} } },
	[126] = { .set = { {5, -14}, {-7, -12}, {11, -16}, {1, -13} } },
	[127] = { .set = { {6, -6}, {-3, -3}, {10, -7}, {1, -8} } },
	[128] = { .set = { {7, -9}, {4, -10}, {2, -4}, {0, -9} } },
	[129] = { .set = { {9, -15}, {7, -15}, {6, -11}, {0, -15} } },
	[130] = { .set = { {8, -8}, {4, -5}, {2, -2}, {-1, -10} } },
	[131] = { .set = { {4, -12}, {1, -12}, {8, -6}, {-1, -10} } },
	[132] = { .set = { {3, -17}, {1, -18}, {10, -14}, {-1, -16} } },
	[133] = { .set = { {4, -11}, {-1, -11}, {7, -5}, {0, -10} } },
	[134] = { .set = { {0, -13}, {5, -9}, {-5, -9}, {0, -10} } },
	[135] = { .set = { {0, -21}, {9, -19}, {-9, -19}, {0, -17} } },
	[136] = { .set = { {0, -13}, {6, -8}, {-6, -8}, {0, -9} } },
	[137] = { .set = { {-4, -12}, {-1, -12}, {-8, -6}, {1, -10} } },
	[138] = { .set = { {-3, -17}, {-1, -18}, {-10, -14}, {1, -16} } },
	[139] = { .set = { {-4, -11}, {1, -11}, {-7, -5}, {0, -10} } },
	[140] = { .set = { {-7, -9}, {-4, -10}, {-2, -4}, {0, -9} } },
	[141] = { .set = { {-9, -15}, {-7, -15}, {-6, -11}, {0, -15} } },
	[142] = { .set = { {-8, -8}, {-4, -5}, {-2, -2}, {1, -10} } },
	[143] = { .set = { {-5, -8}, {-10, -9}, {4, -4}, {-1, -9} } },
	[144] = { .set = { {-5, -13}, {-11, -16}, {7, -12}, {0, -13} } },
	[145] = { .set = { {-5, -5}, {-10, -7}, {3, -3}, {-1, -8} } },
	[146] = { .set = { {0, -7}, {-10, -10}, {10, -10}, {0, -8} } },
	[147] = { .set = { {-6, -9}, {-9, -11}, {8, -6}, {-1, -8} } },
	[148] = { .set = { {-8, -8}, {4, -13}, {5, -5}, {-1, -9} } },
	[149] = { .set = { {-8, -11}, {7, -11}, {-3, -5}, {0, -9} } },
	[150] = { .set = { {0, -12}, {11, -7}, {-11, -7}, {0, -9} } },
	[151] = { .set = { {7, -11}, {-8, -11}, {2, -5}, {-1, -9} } },
	[152] = { .set = { {7, -8}, {-5, -13}, {-6, -5}, {0, -9} } },
	[153] = { .set = { {5, -9}, {-9, -6}, {9, -11}, {2, -8} } },
	[154] = { .set = { {0, -7}, {-9, -5}, {9, -5}, {0, -8} } },
	[155] = { .set = { {0, -12}, {-7, -6}, {7, -6}, {0, -9} } },
	[156] = { .set = { {0, -7}, {-10, -10}, {10, -10}, {0, -8} } },
	[157] = { .set = { {5, -8}, {-4, -4}, {10, -9}, {1, -9} } },
	[158] = { .set = { {4, -14}, {-2, -5}, {8, -9}, {1, -10} } },
	[159] = { .set = { {7, -10}, {-7, -7}, {11, -12}, {4, -9} } },
	[160] = { .set = { {7, -9}, {4, -10}, {2, -4}, {0, -9} } },
	[161] = { .set = { {7, -16}, {3, -9}, {2, -6}, {-2, -10} } },
	[162] = { .set = { {8, -10}, {-4, -15}, {-5, -7}, {1, -11} } },
	[163] = { .set = { {4, -12}, {1, -12}, {8, -6}, {-1, -10} } },
	[164] = { .set = { {4, -16}, {-1, -12}, {6, -9}, {-1, -11} } },
	[165] = { .set = { {8, -14}, {-7, -14}, {3, -8}, {0, -12} } },
	[166] = { .set = { {0, -13}, {5, -9}, {-5, -9}, {0, -10} } },
	[167] = { .set = { {0, -11}, {4, -11}, {-4, -11}, {0, -9} } },
	[168] = { .set = { {0, -14}, {11, -9}, {-11, -9}, {0, -11} } },
	[169] = { .set = { {-4, -12}, {-1, -12}, {-8, -6}, {1, -10} } },
	[170] = { .set = { {-4, -16}, {1, -12}, {-6, -9}, {1, -11} } },
	[171] = { .set = { {-8, -14}, {7, -14}, {-3, -8}, {0, -12} } },
	[172] = { .set = { {-7, -9}, {-4, -10}, {-2, -4}, {0, -9} } },
	[173] = { .set = { {-7, -16}, {-3, -9}, {-2, -6}, {2, -10} } },
	[174] = { .set = { {-8, -10}, {4, -15}, {5, -7}, {-1, -11} } },
	[175] = { .set = { {-5, -8}, {-10, -9}, {4, -4}, {-1, -9} } },
	[176] = { .set = { {-4, -13}, {-8, -9}, {2, -6}, {0, -9} } },
	[177] = { .set = { {-7, -10}, {-10, -12}, {7, -7}, {-2, -9} } },
	[178] = { .set = { {0, -7}, {-9, -5}, {9, -5}, {0, -8} } },
	[179] = { .set = { {0, -11}, {-11, -13}, {11, -13}, {0, -12} } },
	[180] = { .set = { {0, -7}, {-10, -10}, {10, -10}, {0, -8} } },
	[181] = { .set = { {5, -8}, {-4, -4}, {10, -9}, {1, -9} } },
	[182] = { .set = { {5, -14}, {-7, -12}, {11, -16}, {1, -13} } },
	[183] = { .set = { {5, -10}, {-9, -7}, {9, -12}, {2, -9} } },
	[184] = { .set = { {7, -9}, {4, -10}, {2, -4}, {0, -9} } },
	[185] = { .set = { {8, -15}, {6, -15}, {5, -11}, {-1, -15} } },
	[186] = { .set = { {6, -8}, {-6, -13}, {-7, -5}, {-1, -9} } },
	[187] = { .set = { {4, -12}, {1, -12}, {8, -6}, {-1, -10} } },
	[188] = { .set = { {3, -17}, {1, -18}, {10, -14}, {-1, -16} } },
	[189] = { .set = { {6, -11}, {-9, -11}, {1, -5}, {-2, -9} } },
	[190] = { .set = { {0, -13}, {5, -9}, {-5, -9}, {0, -10} } },
	[191] = { .set = { {0, -21}, {9, -19}, {-9, -19}, {0, -17} } },
	[192] = { .set = { {0, -12}, {11, -7}, {-11, -7}, {0, -9} } },
	[193] = { .set = { {-4, -12}, {-1, -12}, {-8, -6}, {1, -10} } },
	[194] = { .set = { {-3, -17}, {-1, -18}, {-10, -14}, {1, -16} } },
	[195] = { .set = { {-6, -11}, {9, -11}, {-1, -5}, {2, -9} } },
	[196] = { .set = { {-7, -9}, {-4, -10}, {-2, -4}, {0, -9} } },
	[197] = { .set = { {-8, -15}, {-6, -15}, {-5, -11}, {1, -15} } },
	[198] = { .set = { {-6, -8}, {6, -13}, {7, -5}, {1, -9} } },
	[199] = { .set = { {-5, -8}, {-10, -9}, {4, -4}, {-1, -9} } },
	[200] = { .set = { {-5, -13}, {-11, -16}, {7, -12}, {0, -13} } },
	[201] = { .set = { {-5, -10}, {-8, -12}, {9, -7}, {0, -9} } },
	[202] = { .set = { {0, -12}, {-7, -6}, {7, -6}, {0, -9} } },
	[203] = { .set = { {-3, -13}, {-7, -9}, {3, -6}, {1, -9} } },
	[204] = { .set = { {-7, -16}, {-3, -9}, {-2, -6}, {2, -10} } },
	[205] = { .set = { {-4, -15}, {1, -11}, {-6, -8}, {1, -10} } },
	[206] = { .set = { {0, -11}, {4, -11}, {-4, -11}, {0, -9} } },
	[207] = { .set = { {4, -15}, {-1, -11}, {6, -8}, {-1, -10} } },
	[208] = { .set = { {7, -16}, {3, -9}, {2, -6}, {-2, -10} } },
	[209] = { .set = { {3, -14}, {-3, -5}, {7, -9}, {0, -10} } },
	[210] = { .set = { {0, -7}, {-9, -5}, {9, -5}, {0, -8} } },
	[211] = { .set = { {-5, -8}, {-10, -9}, {4, -4}, {-1, -9} } },
	[212] = { .set = { {-7, -9}, {-4, -10}, {-2, -4}, {0, -9} } },
	[213] = { .set = { {-4, -12}, {-1, -12}, {-8, -6}, {1, -10} } },
	[214] = { .set = { {0, -13}, {5, -9}, {-5, -9}, {0, -10} } },
	[215] = { .set = { {4, -12}, {1, -12}, {8, -6}, {-1, -10} } },
	[216] = { .set = { {7, -9}, {4, -10}, {2, -4}, {0, -9} } },
	[217] = { .set = { {5, -8}, {-4, -4}, {10, -9}, {1, -9} } },
};

static const ax_anim *const sPolitoedAnimTable1[] = {
	AX_ANIM_PTR(sPolitoedAnims_1_1),
	AX_ANIM_PTR(sPolitoedAnims_1_2),
	AX_ANIM_PTR(sPolitoedAnims_1_3),
	AX_ANIM_PTR(sPolitoedAnims_1_4),
	AX_ANIM_PTR(sPolitoedAnims_1_5),
	AX_ANIM_PTR(sPolitoedAnims_1_6),
	AX_ANIM_PTR(sPolitoedAnims_1_7),
	AX_ANIM_PTR(sPolitoedAnims_1_8),
};

static const ax_anim *const sPolitoedAnimTable2[] = {
	AX_ANIM_PTR(sPolitoedAnims_2_1),
	AX_ANIM_PTR(sPolitoedAnims_2_2),
	AX_ANIM_PTR(sPolitoedAnims_2_3),
	AX_ANIM_PTR(sPolitoedAnims_2_4),
	AX_ANIM_PTR(sPolitoedAnims_2_5),
	AX_ANIM_PTR(sPolitoedAnims_2_6),
	AX_ANIM_PTR(sPolitoedAnims_2_7),
	AX_ANIM_PTR(sPolitoedAnims_2_8),
};

static const ax_anim *const sPolitoedAnimTable3[] = {
	AX_ANIM_PTR(sPolitoedAnims_3_1),
	AX_ANIM_PTR(sPolitoedAnims_3_2),
	AX_ANIM_PTR(sPolitoedAnims_3_3),
	AX_ANIM_PTR(sPolitoedAnims_3_4),
	AX_ANIM_PTR(sPolitoedAnims_3_5),
	AX_ANIM_PTR(sPolitoedAnims_3_6),
	AX_ANIM_PTR(sPolitoedAnims_3_7),
	AX_ANIM_PTR(sPolitoedAnims_3_8),
};

static const ax_anim *const sPolitoedAnimTable4[] = {
	AX_ANIM_PTR(sPolitoedAnims_4_1),
	AX_ANIM_PTR(sPolitoedAnims_4_2),
	AX_ANIM_PTR(sPolitoedAnims_4_3),
	AX_ANIM_PTR(sPolitoedAnims_4_4),
	AX_ANIM_PTR(sPolitoedAnims_4_5),
	AX_ANIM_PTR(sPolitoedAnims_4_6),
	AX_ANIM_PTR(sPolitoedAnims_4_7),
	AX_ANIM_PTR(sPolitoedAnims_4_8),
};

static const ax_anim *const sPolitoedAnimTable5[] = {
	AX_ANIM_PTR(sPolitoedAnims_5_1),
	AX_ANIM_PTR(sPolitoedAnims_5_2),
	AX_ANIM_PTR(gAxSharedAnim_02480),
	AX_ANIM_PTR(sPolitoedAnims_5_4),
	AX_ANIM_PTR(sPolitoedAnims_5_5),
	AX_ANIM_PTR(gAxSharedAnim_02485),
	AX_ANIM_PTR(sPolitoedAnims_5_7),
	AX_ANIM_PTR(sPolitoedAnims_5_8),
};

static const ax_anim *const sPolitoedAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
};

static const ax_anim *const sPolitoedAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00266),
	AX_ANIM_PTR(gAxSharedAnim_00273),
	AX_ANIM_PTR(gAxSharedAnim_00280),
	AX_ANIM_PTR(gAxSharedAnim_00290),
	AX_ANIM_PTR(gAxSharedAnim_00302),
	AX_ANIM_PTR(gAxSharedAnim_00315),
	AX_ANIM_PTR(gAxSharedAnim_00322),
	AX_ANIM_PTR(gAxSharedAnim_00328),
};

static const ax_anim *const sPolitoedAnimTable8[] = {
	AX_ANIM_PTR(sPolitoedAnims_8_1),
	AX_ANIM_PTR(sPolitoedAnims_8_2),
	AX_ANIM_PTR(sPolitoedAnims_8_3),
	AX_ANIM_PTR(sPolitoedAnims_8_4),
	AX_ANIM_PTR(sPolitoedAnims_8_5),
	AX_ANIM_PTR(sPolitoedAnims_8_6),
	AX_ANIM_PTR(sPolitoedAnims_8_7),
	AX_ANIM_PTR(sPolitoedAnims_8_8),
};

static const ax_anim *const sPolitoedAnimTable9[] = {
	AX_ANIM_PTR(sPolitoedAnims_9_1),
	AX_ANIM_PTR(sPolitoedAnims_9_2),
	AX_ANIM_PTR(sPolitoedAnims_9_3),
	AX_ANIM_PTR(sPolitoedAnims_9_4),
	AX_ANIM_PTR(sPolitoedAnims_9_5),
	AX_ANIM_PTR(sPolitoedAnims_9_6),
	AX_ANIM_PTR(sPolitoedAnims_9_7),
	AX_ANIM_PTR(sPolitoedAnims_9_8),
};

static const ax_anim *const sPolitoedAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00623),
	AX_ANIM_PTR(sPolitoedAnims_10_2),
	AX_ANIM_PTR(gAxSharedAnim_00687),
	AX_ANIM_PTR(sPolitoedAnims_10_4),
	AX_ANIM_PTR(sPolitoedAnims_10_5),
	AX_ANIM_PTR(gAxSharedAnim_00800),
	AX_ANIM_PTR(gAxSharedAnim_00839),
	AX_ANIM_PTR(sPolitoedAnims_10_8),
};

static const ax_anim *const sPolitoedAnimTable11[] = {
	AX_ANIM_PTR(sPolitoedAnims_11_1),
	AX_ANIM_PTR(sPolitoedAnims_11_2),
	AX_ANIM_PTR(sPolitoedAnims_11_3),
	AX_ANIM_PTR(sPolitoedAnims_11_4),
	AX_ANIM_PTR(sPolitoedAnims_11_5),
	AX_ANIM_PTR(sPolitoedAnims_11_6),
	AX_ANIM_PTR(sPolitoedAnims_11_7),
	AX_ANIM_PTR(sPolitoedAnims_11_8),
};

static const ax_anim *const sPolitoedAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01243),
	AX_ANIM_PTR(gAxSharedAnim_01326),
	AX_ANIM_PTR(gAxSharedAnim_01308),
	AX_ANIM_PTR(gAxSharedAnim_01292),
	AX_ANIM_PTR(gAxSharedAnim_01291),
	AX_ANIM_PTR(gAxSharedAnim_01280),
	AX_ANIM_PTR(gAxSharedAnim_01260),
	AX_ANIM_PTR(gAxSharedAnim_01244),
};

static const ax_anim *const sPolitoedAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01335),
	AX_ANIM_PTR(gAxSharedAnim_01409),
	AX_ANIM_PTR(gAxSharedAnim_01397),
	AX_ANIM_PTR(gAxSharedAnim_01386),
	AX_ANIM_PTR(gAxSharedAnim_01374),
	AX_ANIM_PTR(gAxSharedAnim_01366),
	AX_ANIM_PTR(gAxSharedAnim_01358),
	AX_ANIM_PTR(gAxSharedAnim_01348),
};

static const ax_anim *const *const sAxAnimationsPolitoed[] = {
	sPolitoedAnimTable1,
	sPolitoedAnimTable2,
	sPolitoedAnimTable3,
	sPolitoedAnimTable4,
	sPolitoedAnimTable5,
	sPolitoedAnimTable6,
	sPolitoedAnimTable7,
	sPolitoedAnimTable8,
	sPolitoedAnimTable9,
	sPolitoedAnimTable10,
	sPolitoedAnimTable11,
	sPolitoedAnimTable12,
	sPolitoedAnimTable13,
};

static const ax_sprite *const sAxSpritesPolitoed[] = {
	sPolitoedSprites1,
	sPolitoedSprites2,
	sPolitoedSprites3,
	sPolitoedSprites4,
	sPolitoedSprites5,
	sPolitoedSprites6,
	sPolitoedSprites7,
	sPolitoedSprites8,
	sPolitoedSprites9,
	sPolitoedSprites10,
	sPolitoedSprites11,
	sPolitoedSprites12,
	sPolitoedSprites13,
	sPolitoedSprites14,
	sPolitoedSprites15,
	sPolitoedSprites16,
	sPolitoedSprites17,
	sPolitoedSprites18,
	sPolitoedSprites19,
	sPolitoedSprites20,
	sPolitoedSprites21,
	sPolitoedSprites22,
	sPolitoedSprites23,
	sPolitoedSprites24,
	sPolitoedSprites25,
	sPolitoedSprites26,
	sPolitoedSprites27,
	sPolitoedSprites28,
	sPolitoedSprites29,
	sPolitoedSprites30,
	sPolitoedSprites31,
	sPolitoedSprites32,
	sPolitoedSprites33,
	sPolitoedSprites34,
	sPolitoedSprites35,
	sPolitoedSprites36,
	sPolitoedSprites37,
	sPolitoedSprites38,
	sPolitoedSprites39,
	sPolitoedSprites40,
	sPolitoedSprites41,
	sPolitoedSprites42,
	sPolitoedSprites43,
	sPolitoedSprites44,
	sPolitoedSprites45,
	sPolitoedSprites46,
	sPolitoedSprites47,
	sPolitoedSprites48,
	sPolitoedSprites49,
};

static const axmain sAxMainPolitoed = {
	.poses = sAxPosesPolitoed,
	.animations = sAxAnimationsPolitoed,
	.animCount = ARRAY_COUNT(sAxAnimationsPolitoed),
	.spriteData = sAxSpritesPolitoed,
	.positions = sAxPositionsPolitoed,
};
