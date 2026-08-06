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
#include "ax_shared_anims.h"
static const axmain sAxMainWeedle;
const SiroArchive gAxWeedle = {"SIRO", &sAxMainWeedle};

static const ax_pose sWeedlePose1[] = {
	AX_POSE(0, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose3[] = {
	AX_POSE(2, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose4[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose5[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose6[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose7[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose8[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose9[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose10[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose11[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose12[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose13[] = {
	AX_POSE(12, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose14[] = {
	AX_POSE(13, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose15[] = {
	AX_POSE(14, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose16[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose17[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose18[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose19[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose20[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose21[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose22[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose23[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose24[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose28[] = {
	AX_POSE(15, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose29[] = {
	AX_POSE(16, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(15, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose33[] = {
	AX_POSE(17, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose37[] = {
	AX_POSE(18, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose41[] = {
	AX_POSE(19, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose45[] = {
	AX_POSE(20, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose49[] = {
	AX_POSE(19, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose53[] = {
	AX_POSE(18, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose57[] = {
	AX_POSE(17, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose62[] = {
	AX_POSE(16, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(15, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose67[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(17, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose72[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(18, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose77[] = {
	AX_POSE(23, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(19, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose82[] = {
	AX_POSE(24, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(20, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose87[] = {
	AX_POSE(23, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(19, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose92[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(18, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose97[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(17, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose99[] = {
	AX_POSE(25, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose100[] = {
	AX_POSE(26, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose102[] = {
	AX_POSE(27, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose103[] = {
	AX_POSE(28, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose105[] = {
	AX_POSE(29, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose106[] = {
	AX_POSE(30, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose108[] = {
	AX_POSE(31, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose109[] = {
	AX_POSE(32, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose111[] = {
	AX_POSE(33, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose112[] = {
	AX_POSE(34, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose114[] = {
	AX_POSE(31, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose115[] = {
	AX_POSE(32, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose117[] = {
	AX_POSE(29, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose118[] = {
	AX_POSE(30, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose120[] = {
	AX_POSE(27, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose121[] = {
	AX_POSE(28, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose162[] = {
	AX_POSE(35, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose163[] = {
	AX_POSE(36, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose164[] = {
	AX_POSE(37, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose165[] = {
	AX_POSE(38, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose166[] = {
	AX_POSE(39, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose167[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose168[] = {
	AX_POSE(41, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose169[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose170[] = {
	AX_POSE(39, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose171[] = {
	AX_POSE(38, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose196[] = {
	AX_POSE(15, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose197[] = {
	AX_POSE(17, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose199[] = {
	AX_POSE(19, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose201[] = {
	AX_POSE(19, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose203[] = {
	AX_POSE(17, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose237[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose238[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose239[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose240[] = {
	AX_POSE(13, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose241[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose242[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWeedlePose243[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const u8 sWeedleAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_1_1.lz");
static const u8 sWeedleAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_1_2.lz");
static const u8 sWeedleAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_1_3.lz");
static const u8 sWeedleAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_1_4.lz");
static const u8 sWeedleAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_1_5.lz");
static const u8 sWeedleAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_1_6.lz");
static const u8 sWeedleAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_1_7.lz");
static const u8 sWeedleAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_1_8.lz");
static const u8 sWeedleAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_2_1.lz");
static const u8 sWeedleAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_2_2.lz");
static const u8 sWeedleAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_2_3.lz");
static const u8 sWeedleAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_2_4.lz");
static const u8 sWeedleAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_2_5.lz");
static const u8 sWeedleAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_2_6.lz");
static const u8 sWeedleAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_2_7.lz");
static const u8 sWeedleAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_2_8.lz");
static const u8 sWeedleAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_3_1.lz");
static const u8 sWeedleAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_3_2.lz");
static const u8 sWeedleAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_3_3.lz");
static const u8 sWeedleAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_3_4.lz");
static const u8 sWeedleAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_3_5.lz");
static const u8 sWeedleAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_3_6.lz");
static const u8 sWeedleAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_3_7.lz");
static const u8 sWeedleAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_3_8.lz");
static const u8 sWeedleAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_4_1.lz");
static const u8 sWeedleAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_4_2.lz");
static const u8 sWeedleAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_4_3.lz");
static const u8 sWeedleAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_4_4.lz");
static const u8 sWeedleAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_4_5.lz");
static const u8 sWeedleAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_4_6.lz");
static const u8 sWeedleAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_4_7.lz");
static const u8 sWeedleAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_4_8.lz");
static const u8 sWeedleAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_5_1.lz");
static const u8 sWeedleAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_5_2.lz");
static const u8 sWeedleAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_5_3.lz");
static const u8 sWeedleAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_5_4.lz");
static const u8 sWeedleAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_5_5.lz");
static const u8 sWeedleAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_5_6.lz");
static const u8 sWeedleAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_5_7.lz");
static const u8 sWeedleAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_5_8.lz");
static const u8 sWeedleAnims_7_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_7_1.lz");
static const u8 sWeedleAnims_7_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_7_2.lz");
static const u8 sWeedleAnims_7_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_7_3.lz");
static const u8 sWeedleAnims_7_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_7_4.lz");
static const u8 sWeedleAnims_7_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_7_5.lz");
static const u8 sWeedleAnims_7_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_7_6.lz");
static const u8 sWeedleAnims_7_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_7_7.lz");
static const ax_anim sWeedleAnims_7_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 170, .offset = {3, -3}, .shadow = {3, -3} },
	AX_ANIM_TERMINATOR
};
static const u8 sWeedleAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_8_1.lz");
static const u8 sWeedleAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_8_2.lz");
static const u8 sWeedleAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_8_3.lz");
static const u8 sWeedleAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_8_4.lz");
static const u8 sWeedleAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_8_5.lz");
static const u8 sWeedleAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_8_6.lz");
static const u8 sWeedleAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_8_7.lz");
static const u8 sWeedleAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_8_8.lz");
static const u8 sWeedleAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_9_1.lz");
static const u8 sWeedleAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_9_2.lz");
static const u8 sWeedleAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_9_3.lz");
static const u8 sWeedleAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_9_4.lz");
static const u8 sWeedleAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_9_5.lz");
static const u8 sWeedleAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_9_6.lz");
static const u8 sWeedleAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_9_7.lz");
static const u8 sWeedleAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_9_8.lz");
static const u8 sWeedleAnims_10_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_10_1.lz");
static const u8 sWeedleAnims_10_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_10_2.lz");
static const u8 sWeedleAnims_10_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_10_3.lz");
static const u8 sWeedleAnims_10_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_10_4.lz");
static const u8 sWeedleAnims_10_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_10_5.lz");
static const u8 sWeedleAnims_10_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_10_6.lz");
static const u8 sWeedleAnims_10_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_10_7.lz");
static const u8 sWeedleAnims_10_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_10_8.lz");
static const u8 sWeedleAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_11_1.lz");
static const u8 sWeedleAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_11_4.lz");
static const u8 sWeedleAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_11_5.lz");
static const u8 sWeedleAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_11_6.lz");
static const u8 sWeedleAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_11_7.lz");
static const u8 sWeedleAnims_12_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_12_1.lz");
static const u8 sWeedleAnims_12_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_12_2.lz");
static const u8 sWeedleAnims_12_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_12_3.lz");
static const u8 sWeedleAnims_12_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_12_4.lz");
static const u8 sWeedleAnims_12_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_12_5.lz");
static const u8 sWeedleAnims_12_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_12_6.lz");
static const u8 sWeedleAnims_12_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_12_7.lz");
static const u8 sWeedleAnims_12_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_12_8.lz");
static const u8 sWeedleAnims_13_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_13_1.lz");
static const u8 sWeedleAnims_13_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_13_2.lz");
static const u8 sWeedleAnims_13_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_13_3.lz");
static const u8 sWeedleAnims_13_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_13_4.lz");
static const u8 sWeedleAnims_13_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_13_5.lz");
static const u8 sWeedleAnims_13_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_13_6.lz");
static const u8 sWeedleAnims_13_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_13_7.lz");
static const u8 sWeedleAnims_13_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/weedle/sWeedleAnims_13_8.lz");

static const u8 sWeedleGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_1.4bpp.lz");
static const ax_sprite sWeedleSprites1[] = {
	{sWeedleGfx1, ARRAY_COUNT(sWeedleGfx1)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_2.4bpp.lz");
static const ax_sprite sWeedleSprites2[] = {
	{sWeedleGfx2, ARRAY_COUNT(sWeedleGfx2)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_3.4bpp.lz");
static const ax_sprite sWeedleSprites3[] = {
	{sWeedleGfx3, ARRAY_COUNT(sWeedleGfx3)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_4.4bpp.lz");
static const ax_sprite sWeedleSprites4[] = {
	{sWeedleGfx4, ARRAY_COUNT(sWeedleGfx4)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_5.4bpp.lz");
static const ax_sprite sWeedleSprites5[] = {
	{sWeedleGfx5, ARRAY_COUNT(sWeedleGfx5)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_6.4bpp.lz");
static const ax_sprite sWeedleSprites6[] = {
	{sWeedleGfx6, ARRAY_COUNT(sWeedleGfx6)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_7.4bpp.lz");
static const ax_sprite sWeedleSprites7[] = {
	{sWeedleGfx7, ARRAY_COUNT(sWeedleGfx7)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_8.4bpp.lz");
static const ax_sprite sWeedleSprites8[] = {
	{sWeedleGfx8, ARRAY_COUNT(sWeedleGfx8)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_9.4bpp.lz");
static const ax_sprite sWeedleSprites9[] = {
	{sWeedleGfx9, ARRAY_COUNT(sWeedleGfx9)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_10.4bpp.lz");
static const ax_sprite sWeedleSprites10[] = {
	{sWeedleGfx10, ARRAY_COUNT(sWeedleGfx10)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_11.4bpp.lz");
static const ax_sprite sWeedleSprites11[] = {
	{sWeedleGfx11, ARRAY_COUNT(sWeedleGfx11)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_12.4bpp.lz");
static const ax_sprite sWeedleSprites12[] = {
	{sWeedleGfx12, ARRAY_COUNT(sWeedleGfx12)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_13.4bpp.lz");
static const ax_sprite sWeedleSprites13[] = {
	{sWeedleGfx13, ARRAY_COUNT(sWeedleGfx13)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_14.4bpp.lz");
static const ax_sprite sWeedleSprites14[] = {
	{sWeedleGfx14, ARRAY_COUNT(sWeedleGfx14)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_15.4bpp.lz");
static const ax_sprite sWeedleSprites15[] = {
	{sWeedleGfx15, ARRAY_COUNT(sWeedleGfx15)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_16.4bpp.lz");
static const ax_sprite sWeedleSprites16[] = {
	{sWeedleGfx16, ARRAY_COUNT(sWeedleGfx16)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sWeedleGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_17.4bpp.lz");
static const u8 sWeedleGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_17_1.4bpp.lz");
static const ax_sprite sWeedleSprites17[] = {
	{sWeedleGfx17, ARRAY_COUNT(sWeedleGfx17)}, 
	{NULL, 32}, 
	{sWeedleGfx17_1, ARRAY_COUNT(sWeedleGfx17_1)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_18.4bpp.lz");
static const u8 sWeedleGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_18_1.4bpp.lz");
static const ax_sprite sWeedleSprites18[] = {
	{sWeedleGfx18, ARRAY_COUNT(sWeedleGfx18)}, 
	{NULL, 32}, 
	{sWeedleGfx18_1, ARRAY_COUNT(sWeedleGfx18_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sWeedleGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_19.4bpp.lz");
static const u8 sWeedleGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_19_1.4bpp.lz");
static const ax_sprite sWeedleSprites19[] = {
	{sWeedleGfx19, ARRAY_COUNT(sWeedleGfx19)}, 
	{NULL, 64}, 
	{sWeedleGfx19_1, ARRAY_COUNT(sWeedleGfx19_1)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_20.4bpp.lz");
static const u8 sWeedleGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_20_1.4bpp.lz");
static const u8 sWeedleGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_20_2.4bpp.lz");
static const ax_sprite sWeedleSprites20[] = {
	{sWeedleGfx20, ARRAY_COUNT(sWeedleGfx20)}, 
	{NULL, 64}, 
	{sWeedleGfx20_1, ARRAY_COUNT(sWeedleGfx20_1)}, 
	{NULL, 64}, 
	{sWeedleGfx20_2, ARRAY_COUNT(sWeedleGfx20_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sWeedleGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_21.4bpp.lz");
static const ax_sprite sWeedleSprites21[] = {
	{sWeedleGfx21, ARRAY_COUNT(sWeedleGfx21)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_22.4bpp.lz");
static const u8 sWeedleGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_22_1.4bpp.lz");
static const u8 sWeedleGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_22_2.4bpp.lz");
static const ax_sprite sWeedleSprites22[] = {
	{NULL, 128}, 
	{sWeedleGfx22, ARRAY_COUNT(sWeedleGfx22)}, 
	{NULL, 32}, 
	{sWeedleGfx22_1, ARRAY_COUNT(sWeedleGfx22_1)}, 
	{NULL, 32}, 
	{sWeedleGfx22_2, ARRAY_COUNT(sWeedleGfx22_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sWeedleGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_23.4bpp.lz");
static const u8 sWeedleGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_23_1.4bpp.lz");
static const u8 sWeedleGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_23_2.4bpp.lz");
static const ax_sprite sWeedleSprites23[] = {
	{sWeedleGfx23, ARRAY_COUNT(sWeedleGfx23)}, 
	{NULL, 64}, 
	{sWeedleGfx23_1, ARRAY_COUNT(sWeedleGfx23_1)}, 
	{NULL, 32}, 
	{sWeedleGfx23_2, ARRAY_COUNT(sWeedleGfx23_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sWeedleGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_24.4bpp.lz");
static const u8 sWeedleGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_24_1.4bpp.lz");
static const u8 sWeedleGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_24_2.4bpp.lz");
static const ax_sprite sWeedleSprites24[] = {
	{sWeedleGfx24, ARRAY_COUNT(sWeedleGfx24)}, 
	{NULL, 32}, 
	{sWeedleGfx24_1, ARRAY_COUNT(sWeedleGfx24_1)}, 
	{NULL, 32}, 
	{sWeedleGfx24_2, ARRAY_COUNT(sWeedleGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sWeedleGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_25.4bpp.lz");
static const ax_sprite sWeedleSprites25[] = {
	{sWeedleGfx25, ARRAY_COUNT(sWeedleGfx25)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sWeedleGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_26.4bpp.lz");
static const ax_sprite sWeedleSprites26[] = {
	{sWeedleGfx26, ARRAY_COUNT(sWeedleGfx26)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sWeedleGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_27.4bpp.lz");
static const u8 sWeedleGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_27_1.4bpp.lz");
static const u8 sWeedleGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_27_2.4bpp.lz");
static const ax_sprite sWeedleSprites27[] = {
	{sWeedleGfx27, ARRAY_COUNT(sWeedleGfx27)}, 
	{NULL, 32}, 
	{sWeedleGfx27_1, ARRAY_COUNT(sWeedleGfx27_1)}, 
	{NULL, 32}, 
	{sWeedleGfx27_2, ARRAY_COUNT(sWeedleGfx27_2)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_28.4bpp.lz");
static const ax_sprite sWeedleSprites28[] = {
	{sWeedleGfx28, ARRAY_COUNT(sWeedleGfx28)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sWeedleGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_29.4bpp.lz");
static const ax_sprite sWeedleSprites29[] = {
	{sWeedleGfx29, ARRAY_COUNT(sWeedleGfx29)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sWeedleGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_30.4bpp.lz");
static const ax_sprite sWeedleSprites30[] = {
	{sWeedleGfx30, ARRAY_COUNT(sWeedleGfx30)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sWeedleGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_31.4bpp.lz");
static const ax_sprite sWeedleSprites31[] = {
	{sWeedleGfx31, ARRAY_COUNT(sWeedleGfx31)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sWeedleGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_32.4bpp.lz");
static const u8 sWeedleGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_32_1.4bpp.lz");
static const u8 sWeedleGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_32_2.4bpp.lz");
static const ax_sprite sWeedleSprites32[] = {
	{sWeedleGfx32, ARRAY_COUNT(sWeedleGfx32)}, 
	{NULL, 64}, 
	{sWeedleGfx32_1, ARRAY_COUNT(sWeedleGfx32_1)}, 
	{NULL, 32}, 
	{sWeedleGfx32_2, ARRAY_COUNT(sWeedleGfx32_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sWeedleGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_33.4bpp.lz");
static const u8 sWeedleGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_33_1.4bpp.lz");
static const u8 sWeedleGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_33_2.4bpp.lz");
static const ax_sprite sWeedleSprites33[] = {
	{NULL, 32}, 
	{sWeedleGfx33, ARRAY_COUNT(sWeedleGfx33)}, 
	{NULL, 64}, 
	{sWeedleGfx33_1, ARRAY_COUNT(sWeedleGfx33_1)}, 
	{NULL, 32}, 
	{sWeedleGfx33_2, ARRAY_COUNT(sWeedleGfx33_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sWeedleGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_34.4bpp.lz");
static const ax_sprite sWeedleSprites34[] = {
	{sWeedleGfx34, ARRAY_COUNT(sWeedleGfx34)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sWeedleGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_35.4bpp.lz");
static const u8 sWeedleGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_35_1.4bpp.lz");
static const u8 sWeedleGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_35_2.4bpp.lz");
static const ax_sprite sWeedleSprites35[] = {
	{NULL, 32}, 
	{sWeedleGfx35, ARRAY_COUNT(sWeedleGfx35)}, 
	{NULL, 64}, 
	{sWeedleGfx35_1, ARRAY_COUNT(sWeedleGfx35_1)}, 
	{NULL, 32}, 
	{sWeedleGfx35_2, ARRAY_COUNT(sWeedleGfx35_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sWeedleGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_36.4bpp.lz");
static const ax_sprite sWeedleSprites36[] = {
	{sWeedleGfx36, ARRAY_COUNT(sWeedleGfx36)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_37.4bpp.lz");
static const ax_sprite sWeedleSprites37[] = {
	{sWeedleGfx37, ARRAY_COUNT(sWeedleGfx37)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_38.4bpp.lz");
static const ax_sprite sWeedleSprites38[] = {
	{sWeedleGfx38, ARRAY_COUNT(sWeedleGfx38)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_39.4bpp.lz");
static const ax_sprite sWeedleSprites39[] = {
	{sWeedleGfx39, ARRAY_COUNT(sWeedleGfx39)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_40.4bpp.lz");
static const ax_sprite sWeedleSprites40[] = {
	{sWeedleGfx40, ARRAY_COUNT(sWeedleGfx40)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_41.4bpp.lz");
static const ax_sprite sWeedleSprites41[] = {
	{sWeedleGfx41, ARRAY_COUNT(sWeedleGfx41)}, 
	{NULL, 0}
};
static const u8 sWeedleGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/weedle/sprite_42.4bpp.lz");
static const ax_sprite sWeedleSprites42[] = {
	{sWeedleGfx42, ARRAY_COUNT(sWeedleGfx42)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesWeedle[] = {
	sWeedlePose1,
	sWeedlePose2,
	sWeedlePose3,
	sWeedlePose4,
	sWeedlePose5,
	sWeedlePose6,
	sWeedlePose7,
	sWeedlePose8,
	sWeedlePose9,
	sWeedlePose10,
	sWeedlePose11,
	sWeedlePose12,
	sWeedlePose13,
	sWeedlePose14,
	sWeedlePose15,
	sWeedlePose16,
	sWeedlePose17,
	sWeedlePose18,
	sWeedlePose19,
	sWeedlePose20,
	sWeedlePose21,
	sWeedlePose22,
	sWeedlePose23,
	sWeedlePose24,
	sWeedlePose1,
	sWeedlePose2,
	sWeedlePose3,
	sWeedlePose28,
	sWeedlePose29,
	sWeedlePose4,
	sWeedlePose5,
	sWeedlePose6,
	sWeedlePose33,
	sWeedlePose7,
	sWeedlePose8,
	sWeedlePose9,
	sWeedlePose37,
	sWeedlePose10,
	sWeedlePose11,
	sWeedlePose12,
	sWeedlePose41,
	sWeedlePose13,
	sWeedlePose14,
	sWeedlePose15,
	sWeedlePose45,
	sWeedlePose16,
	sWeedlePose17,
	sWeedlePose18,
	sWeedlePose49,
	sWeedlePose19,
	sWeedlePose20,
	sWeedlePose21,
	sWeedlePose53,
	sWeedlePose22,
	sWeedlePose23,
	sWeedlePose24,
	sWeedlePose57,
	sWeedlePose1,
	sWeedlePose2,
	sWeedlePose3,
	sWeedlePose28,
	sWeedlePose62,
	sWeedlePose4,
	sWeedlePose5,
	sWeedlePose6,
	sWeedlePose33,
	sWeedlePose67,
	sWeedlePose7,
	sWeedlePose8,
	sWeedlePose9,
	sWeedlePose37,
	sWeedlePose72,
	sWeedlePose10,
	sWeedlePose11,
	sWeedlePose12,
	sWeedlePose41,
	sWeedlePose77,
	sWeedlePose13,
	sWeedlePose14,
	sWeedlePose15,
	sWeedlePose45,
	sWeedlePose82,
	sWeedlePose16,
	sWeedlePose17,
	sWeedlePose18,
	sWeedlePose49,
	sWeedlePose87,
	sWeedlePose19,
	sWeedlePose20,
	sWeedlePose21,
	sWeedlePose53,
	sWeedlePose92,
	sWeedlePose22,
	sWeedlePose23,
	sWeedlePose24,
	sWeedlePose57,
	sWeedlePose97,
	sWeedlePose1,
	sWeedlePose99,
	sWeedlePose100,
	sWeedlePose4,
	sWeedlePose102,
	sWeedlePose103,
	sWeedlePose7,
	sWeedlePose105,
	sWeedlePose106,
	sWeedlePose10,
	sWeedlePose108,
	sWeedlePose109,
	sWeedlePose13,
	sWeedlePose111,
	sWeedlePose112,
	sWeedlePose16,
	sWeedlePose114,
	sWeedlePose115,
	sWeedlePose19,
	sWeedlePose117,
	sWeedlePose118,
	sWeedlePose22,
	sWeedlePose120,
	sWeedlePose121,
	sWeedlePose1,
	sWeedlePose2,
	sWeedlePose3,
	sWeedlePose28,
	sWeedlePose62,
	sWeedlePose4,
	sWeedlePose5,
	sWeedlePose6,
	sWeedlePose33,
	sWeedlePose67,
	sWeedlePose7,
	sWeedlePose8,
	sWeedlePose9,
	sWeedlePose37,
	sWeedlePose72,
	sWeedlePose10,
	sWeedlePose11,
	sWeedlePose12,
	sWeedlePose41,
	sWeedlePose77,
	sWeedlePose13,
	sWeedlePose14,
	sWeedlePose15,
	sWeedlePose45,
	sWeedlePose82,
	sWeedlePose16,
	sWeedlePose17,
	sWeedlePose18,
	sWeedlePose49,
	sWeedlePose87,
	sWeedlePose19,
	sWeedlePose20,
	sWeedlePose21,
	sWeedlePose53,
	sWeedlePose92,
	sWeedlePose22,
	sWeedlePose23,
	sWeedlePose24,
	sWeedlePose57,
	sWeedlePose97,
	sWeedlePose162,
	sWeedlePose163,
	sWeedlePose164,
	sWeedlePose165,
	sWeedlePose166,
	sWeedlePose167,
	sWeedlePose168,
	sWeedlePose169,
	sWeedlePose170,
	sWeedlePose171,
	sWeedlePose1,
	sWeedlePose2,
	sWeedlePose3,
	sWeedlePose4,
	sWeedlePose5,
	sWeedlePose6,
	sWeedlePose7,
	sWeedlePose8,
	sWeedlePose9,
	sWeedlePose10,
	sWeedlePose11,
	sWeedlePose12,
	sWeedlePose13,
	sWeedlePose14,
	sWeedlePose15,
	sWeedlePose16,
	sWeedlePose17,
	sWeedlePose18,
	sWeedlePose19,
	sWeedlePose20,
	sWeedlePose21,
	sWeedlePose22,
	sWeedlePose23,
	sWeedlePose24,
	sWeedlePose196,
	sWeedlePose197,
	sWeedlePose53,
	sWeedlePose199,
	sWeedlePose45,
	sWeedlePose201,
	sWeedlePose37,
	sWeedlePose203,
	sWeedlePose99,
	sWeedlePose102,
	sWeedlePose105,
	sWeedlePose108,
	sWeedlePose111,
	sWeedlePose114,
	sWeedlePose117,
	sWeedlePose120,
	sWeedlePose2,
	sWeedlePose1,
	sWeedlePose28,
	sWeedlePose5,
	sWeedlePose4,
	sWeedlePose33,
	sWeedlePose8,
	sWeedlePose7,
	sWeedlePose37,
	sWeedlePose11,
	sWeedlePose10,
	sWeedlePose41,
	sWeedlePose14,
	sWeedlePose13,
	sWeedlePose45,
	sWeedlePose17,
	sWeedlePose16,
	sWeedlePose49,
	sWeedlePose20,
	sWeedlePose19,
	sWeedlePose53,
	sWeedlePose23,
	sWeedlePose22,
	sWeedlePose57,
	sWeedlePose2,
	sWeedlePose237,
	sWeedlePose238,
	sWeedlePose239,
	sWeedlePose240,
	sWeedlePose241,
	sWeedlePose242,
	sWeedlePose243,
	sWeedlePose1,
	sWeedlePose22,
	sWeedlePose19,
	sWeedlePose16,
	sWeedlePose13,
	sWeedlePose10,
	sWeedlePose7,
	sWeedlePose4,
};

static const struct PositionSets sAxPositionsWeedle[] = {
	[0] = { .set = { {-1, -8}, {-3, -5}, {1, -5}, {-1, -7} } },
	[1] = { .set = { {-1, -6}, {-3, -3}, {1, -3}, {-1, -5} } },
	[2] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -6} } },
	[3] = { .set = { {7, -10}, {4, -6}, {1, -5}, {2, -7} } },
	[4] = { .set = { {8, -8}, {4, -4}, {1, -3}, {2, -5} } },
	[5] = { .set = { {7, -9}, {4, -5}, {1, -4}, {2, -6} } },
	[6] = { .set = { {10, -13}, {5, -8}, {4, -6}, {4, -8} } },
	[7] = { .set = { {11, -11}, {5, -6}, {4, -4}, {4, -6} } },
	[8] = { .set = { {10, -12}, {5, -7}, {4, -5}, {4, -7} } },
	[9] = { .set = { {8, -16}, {2, -8}, {5, -7}, {3, -9} } },
	[10] = { .set = { {8, -14}, {3, -6}, {5, -5}, {3, -7} } },
	[11] = { .set = { {9, -15}, {3, -7}, {5, -6}, {3, -8} } },
	[12] = { .set = { {-1, -19}, {1, -9}, {-3, -9}, {-1, -9} } },
	[13] = { .set = { {-1, -17}, {1, -7}, {-3, -7}, {-1, -9} } },
	[14] = { .set = { {-1, -18}, {1, -7}, {-3, -7}, {-1, -9} } },
	[15] = { .set = { {-10, -16}, {-4, -8}, {-7, -7}, {-5, -9} } },
	[16] = { .set = { {-10, -14}, {-5, -6}, {-7, -5}, {-5, -7} } },
	[17] = { .set = { {-11, -15}, {-5, -7}, {-7, -6}, {-5, -8} } },
	[18] = { .set = { {-12, -13}, {-7, -8}, {-6, -6}, {-6, -8} } },
	[19] = { .set = { {-13, -11}, {-7, -6}, {-6, -4}, {-6, -6} } },
	[20] = { .set = { {-12, -12}, {-7, -7}, {-6, -5}, {-6, -7} } },
	[21] = { .set = { {-9, -10}, {-6, -6}, {-3, -5}, {-4, -7} } },
	[22] = { .set = { {-10, -8}, {-6, -4}, {-3, -3}, {-4, -5} } },
	[23] = { .set = { {-9, -9}, {-6, -5}, {-3, -4}, {-4, -6} } },
	[24] = { .set = { {-1, -8}, {-3, -5}, {1, -5}, {-1, -7} } },
	[25] = { .set = { {-1, -6}, {-3, -3}, {1, -3}, {-1, -5} } },
	[26] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -6} } },
	[27] = { .set = { {-1, 3}, {-3, -2}, {1, -2}, {-1, -5} } },
	[28] = { .set = { {-1, 1}, {-3, -4}, {1, -4}, {-1, -7} } },
	[29] = { .set = { {7, -10}, {4, -6}, {1, -5}, {2, -7} } },
	[30] = { .set = { {8, -8}, {4, -4}, {1, -3}, {2, -5} } },
	[31] = { .set = { {7, -9}, {4, -5}, {1, -4}, {2, -6} } },
	[32] = { .set = { {7, 2}, {2, -1}, {0, 0}, {-1, -3} } },
	[33] = { .set = { {10, -13}, {5, -8}, {4, -6}, {4, -8} } },
	[34] = { .set = { {11, -11}, {5, -6}, {4, -4}, {4, -6} } },
	[35] = { .set = { {10, -12}, {5, -7}, {4, -5}, {4, -7} } },
	[36] = { .set = { {10, -3}, {2, -4}, {1, -3}, {-1, -3} } },
	[37] = { .set = { {8, -16}, {2, -8}, {5, -7}, {3, -9} } },
	[38] = { .set = { {8, -14}, {3, -6}, {5, -5}, {3, -7} } },
	[39] = { .set = { {9, -15}, {3, -7}, {5, -6}, {3, -8} } },
	[40] = { .set = { {10, -6}, {0, -4}, {2, -3}, {-2, -2} } },
	[41] = { .set = { {-1, -19}, {1, -9}, {-3, -9}, {-1, -9} } },
	[42] = { .set = { {-1, -17}, {1, -7}, {-3, -7}, {-1, -9} } },
	[43] = { .set = { {-1, -18}, {1, -7}, {-3, -7}, {-1, -9} } },
	[44] = { .set = { {-1, -11}, {1, -5}, {-3, -5}, {-1, -4} } },
	[45] = { .set = { {-10, -16}, {-4, -8}, {-7, -7}, {-5, -9} } },
	[46] = { .set = { {-10, -14}, {-5, -6}, {-7, -5}, {-5, -7} } },
	[47] = { .set = { {-11, -15}, {-5, -7}, {-7, -6}, {-5, -8} } },
	[48] = { .set = { {-12, -6}, {-2, -4}, {-4, -3}, {0, -2} } },
	[49] = { .set = { {-12, -13}, {-7, -8}, {-6, -6}, {-6, -8} } },
	[50] = { .set = { {-13, -11}, {-7, -6}, {-6, -4}, {-6, -6} } },
	[51] = { .set = { {-12, -12}, {-7, -7}, {-6, -5}, {-6, -7} } },
	[52] = { .set = { {-12, -3}, {-4, -4}, {-3, -3}, {-1, -3} } },
	[53] = { .set = { {-9, -10}, {-6, -6}, {-3, -5}, {-4, -7} } },
	[54] = { .set = { {-10, -8}, {-6, -4}, {-3, -3}, {-4, -5} } },
	[55] = { .set = { {-9, -9}, {-6, -5}, {-3, -4}, {-4, -6} } },
	[56] = { .set = { {-9, 2}, {-4, -1}, {-2, 0}, {-1, -3} } },
	[57] = { .set = { {-1, -8}, {-3, -5}, {1, -5}, {-1, -7} } },
	[58] = { .set = { {-1, -6}, {-3, -3}, {1, -3}, {-1, -5} } },
	[59] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -6} } },
	[60] = { .set = { {-1, 3}, {-3, -2}, {1, -2}, {-1, -5} } },
	[61] = { .set = { {-1, 2}, {-3, -3}, {1, -3}, {-1, -6} } },
	[62] = { .set = { {7, -10}, {4, -6}, {1, -5}, {2, -7} } },
	[63] = { .set = { {8, -8}, {4, -4}, {1, -3}, {2, -5} } },
	[64] = { .set = { {7, -9}, {4, -5}, {1, -4}, {2, -6} } },
	[65] = { .set = { {7, 2}, {2, -1}, {0, 0}, {-1, -3} } },
	[66] = { .set = { {7, 2}, {2, -1}, {0, 0}, {-1, -3} } },
	[67] = { .set = { {10, -13}, {5, -8}, {4, -6}, {4, -8} } },
	[68] = { .set = { {11, -11}, {5, -6}, {4, -4}, {4, -6} } },
	[69] = { .set = { {10, -12}, {5, -7}, {4, -5}, {4, -7} } },
	[70] = { .set = { {10, -3}, {2, -4}, {1, -3}, {-1, -3} } },
	[71] = { .set = { {10, -3}, {2, -4}, {1, -3}, {-1, -3} } },
	[72] = { .set = { {8, -16}, {2, -8}, {5, -7}, {3, -9} } },
	[73] = { .set = { {8, -14}, {3, -6}, {5, -5}, {3, -7} } },
	[74] = { .set = { {9, -15}, {3, -7}, {5, -6}, {3, -8} } },
	[75] = { .set = { {10, -6}, {0, -4}, {2, -3}, {-2, -2} } },
	[76] = { .set = { {10, -6}, {0, -4}, {2, -3}, {-2, -2} } },
	[77] = { .set = { {-1, -19}, {1, -9}, {-3, -9}, {-1, -9} } },
	[78] = { .set = { {-1, -17}, {1, -7}, {-3, -7}, {-1, -9} } },
	[79] = { .set = { {-1, -18}, {1, -7}, {-3, -7}, {-1, -9} } },
	[80] = { .set = { {-1, -11}, {1, -5}, {-3, -5}, {-1, -4} } },
	[81] = { .set = { {-1, -11}, {1, -5}, {-3, -5}, {-1, -4} } },
	[82] = { .set = { {-10, -16}, {-4, -8}, {-7, -7}, {-5, -9} } },
	[83] = { .set = { {-10, -14}, {-5, -6}, {-7, -5}, {-5, -7} } },
	[84] = { .set = { {-11, -15}, {-5, -7}, {-7, -6}, {-5, -8} } },
	[85] = { .set = { {-12, -6}, {-2, -4}, {-4, -3}, {0, -2} } },
	[86] = { .set = { {-12, -6}, {-2, -4}, {-4, -3}, {0, -2} } },
	[87] = { .set = { {-12, -13}, {-7, -8}, {-6, -6}, {-6, -8} } },
	[88] = { .set = { {-13, -11}, {-7, -6}, {-6, -4}, {-6, -6} } },
	[89] = { .set = { {-12, -12}, {-7, -7}, {-6, -5}, {-6, -7} } },
	[90] = { .set = { {-12, -3}, {-4, -4}, {-3, -3}, {-1, -3} } },
	[91] = { .set = { {-12, -3}, {-4, -4}, {-3, -3}, {-1, -3} } },
	[92] = { .set = { {-9, -10}, {-6, -6}, {-3, -5}, {-4, -7} } },
	[93] = { .set = { {-10, -8}, {-6, -4}, {-3, -3}, {-4, -5} } },
	[94] = { .set = { {-9, -9}, {-6, -5}, {-3, -4}, {-4, -6} } },
	[95] = { .set = { {-9, 2}, {-4, -1}, {-2, 0}, {-1, -3} } },
	[96] = { .set = { {-9, 2}, {-4, -1}, {-2, 0}, {-1, -3} } },
	[97] = { .set = { {-1, -8}, {-3, -5}, {1, -5}, {-1, -7} } },
	[98] = { .set = { {2, 1}, {-4, -3}, {-1, -3}, {0, -5} } },
	[99] = { .set = { {2, 3}, {-5, -3}, {-2, -3}, {-1, -4} } },
	[100] = { .set = { {7, -10}, {4, -6}, {1, -5}, {2, -7} } },
	[101] = { .set = { {5, 0}, {3, -4}, {1, -3}, {0, -4} } },
	[102] = { .set = { {5, 2}, {3, -4}, {1, -3}, {0, -4} } },
	[103] = { .set = { {10, -13}, {5, -8}, {4, -6}, {4, -8} } },
	[104] = { .set = { {7, -5}, {-1, -7}, {-2, -5}, {-3, -6} } },
	[105] = { .set = { {7, -2}, {0, -7}, {-1, -5}, {-2, -6} } },
	[106] = { .set = { {8, -16}, {2, -8}, {5, -7}, {3, -9} } },
	[107] = { .set = { {7, -7}, {-3, -7}, {-1, -6}, {-3, -6} } },
	[108] = { .set = { {7, -5}, {-3, -6}, {-1, -5}, {-3, -5} } },
	[109] = { .set = { {-1, -19}, {1, -9}, {-3, -9}, {-1, -9} } },
	[110] = { .set = { {-6, -10}, {2, -2}, {0, -3}, {1, -4} } },
	[111] = { .set = { {-6, -7}, {3, -2}, {1, -3}, {2, -4} } },
	[112] = { .set = { {-10, -16}, {-4, -8}, {-7, -7}, {-5, -9} } },
	[113] = { .set = { {-9, -7}, {1, -7}, {-1, -6}, {1, -6} } },
	[114] = { .set = { {-9, -5}, {1, -6}, {-1, -5}, {1, -5} } },
	[115] = { .set = { {-12, -13}, {-7, -8}, {-6, -6}, {-6, -8} } },
	[116] = { .set = { {-9, -5}, {-1, -7}, {0, -5}, {1, -6} } },
	[117] = { .set = { {-9, -2}, {-2, -7}, {-1, -5}, {0, -6} } },
	[118] = { .set = { {-9, -10}, {-6, -6}, {-3, -5}, {-4, -7} } },
	[119] = { .set = { {-5, 0}, {-3, -4}, {-1, -3}, {0, -4} } },
	[120] = { .set = { {-5, 2}, {-3, -4}, {-1, -3}, {0, -4} } },
	[121] = { .set = { {-1, -8}, {-3, -5}, {1, -5}, {-1, -7} } },
	[122] = { .set = { {-1, -6}, {-3, -3}, {1, -3}, {-1, -5} } },
	[123] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -6} } },
	[124] = { .set = { {-1, 3}, {-3, -2}, {1, -2}, {-1, -5} } },
	[125] = { .set = { {-1, 2}, {-3, -3}, {1, -3}, {-1, -6} } },
	[126] = { .set = { {7, -10}, {4, -6}, {1, -5}, {2, -7} } },
	[127] = { .set = { {8, -8}, {4, -4}, {1, -3}, {2, -5} } },
	[128] = { .set = { {7, -9}, {4, -5}, {1, -4}, {2, -6} } },
	[129] = { .set = { {7, 2}, {2, -1}, {0, 0}, {-1, -3} } },
	[130] = { .set = { {7, 2}, {2, -1}, {0, 0}, {-1, -3} } },
	[131] = { .set = { {10, -13}, {5, -8}, {4, -6}, {4, -8} } },
	[132] = { .set = { {11, -11}, {5, -6}, {4, -4}, {4, -6} } },
	[133] = { .set = { {10, -12}, {5, -7}, {4, -5}, {4, -7} } },
	[134] = { .set = { {10, -3}, {2, -4}, {1, -3}, {-1, -3} } },
	[135] = { .set = { {10, -3}, {2, -4}, {1, -3}, {-1, -3} } },
	[136] = { .set = { {8, -16}, {2, -8}, {5, -7}, {3, -9} } },
	[137] = { .set = { {8, -14}, {3, -6}, {5, -5}, {3, -7} } },
	[138] = { .set = { {9, -15}, {3, -7}, {5, -6}, {3, -8} } },
	[139] = { .set = { {10, -6}, {0, -4}, {2, -3}, {-2, -2} } },
	[140] = { .set = { {10, -6}, {0, -4}, {2, -3}, {-2, -2} } },
	[141] = { .set = { {-1, -19}, {1, -9}, {-3, -9}, {-1, -9} } },
	[142] = { .set = { {-1, -17}, {1, -7}, {-3, -7}, {-1, -9} } },
	[143] = { .set = { {-1, -18}, {1, -7}, {-3, -7}, {-1, -9} } },
	[144] = { .set = { {-1, -11}, {1, -5}, {-3, -5}, {-1, -4} } },
	[145] = { .set = { {-1, -11}, {1, -5}, {-3, -5}, {-1, -4} } },
	[146] = { .set = { {-10, -16}, {-4, -8}, {-7, -7}, {-5, -9} } },
	[147] = { .set = { {-10, -14}, {-5, -6}, {-7, -5}, {-5, -7} } },
	[148] = { .set = { {-11, -15}, {-5, -7}, {-7, -6}, {-5, -8} } },
	[149] = { .set = { {-12, -6}, {-2, -4}, {-4, -3}, {0, -2} } },
	[150] = { .set = { {-12, -6}, {-2, -4}, {-4, -3}, {0, -2} } },
	[151] = { .set = { {-12, -13}, {-7, -8}, {-6, -6}, {-6, -8} } },
	[152] = { .set = { {-13, -11}, {-7, -6}, {-6, -4}, {-6, -6} } },
	[153] = { .set = { {-12, -12}, {-7, -7}, {-6, -5}, {-6, -7} } },
	[154] = { .set = { {-12, -3}, {-4, -4}, {-3, -3}, {-1, -3} } },
	[155] = { .set = { {-12, -3}, {-4, -4}, {-3, -3}, {-1, -3} } },
	[156] = { .set = { {-9, -10}, {-6, -6}, {-3, -5}, {-4, -7} } },
	[157] = { .set = { {-10, -8}, {-6, -4}, {-3, -3}, {-4, -5} } },
	[158] = { .set = { {-9, -9}, {-6, -5}, {-3, -4}, {-4, -6} } },
	[159] = { .set = { {-9, 2}, {-4, -1}, {-2, 0}, {-1, -3} } },
	[160] = { .set = { {-9, 2}, {-4, -1}, {-2, 0}, {-1, -3} } },
	[161] = { .set = { {-6, -6}, {2, -5}, {1, -4}, {0, -6} } },
	[162] = { .set = { {-7, -5}, {2, -5}, {1, -4}, {0, -6} } },
	[163] = { .set = { {-1, -12}, {-3, -7}, {1, -7}, {-1, -9} } },
	[164] = { .set = { {0, -14}, {0, -10}, {-2, -8}, {-3, -8} } },
	[165] = { .set = { {3, -17}, {0, -8}, {0, -7}, {-2, -8} } },
	[166] = { .set = { {2, -17}, {1, -8}, {2, -7}, {-1, -7} } },
	[167] = { .set = { {-1, -16}, {1, -5}, {-3, -5}, {-1, -6} } },
	[168] = { .set = { {-3, -17}, {-2, -8}, {-3, -7}, {0, -7} } },
	[169] = { .set = { {-4, -17}, {-1, -8}, {-1, -7}, {1, -8} } },
	[170] = { .set = { {-1, -14}, {-1, -10}, {1, -8}, {2, -8} } },
	[171] = { .set = { {-1, -8}, {-3, -5}, {1, -5}, {-1, -7} } },
	[172] = { .set = { {-1, -6}, {-3, -3}, {1, -3}, {-1, -5} } },
	[173] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -6} } },
	[174] = { .set = { {7, -10}, {4, -6}, {1, -5}, {2, -7} } },
	[175] = { .set = { {8, -8}, {4, -4}, {1, -3}, {2, -5} } },
	[176] = { .set = { {7, -9}, {4, -5}, {1, -4}, {2, -6} } },
	[177] = { .set = { {10, -13}, {5, -8}, {4, -6}, {4, -8} } },
	[178] = { .set = { {11, -11}, {5, -6}, {4, -4}, {4, -6} } },
	[179] = { .set = { {10, -12}, {5, -7}, {4, -5}, {4, -7} } },
	[180] = { .set = { {8, -16}, {2, -8}, {5, -7}, {3, -9} } },
	[181] = { .set = { {8, -14}, {3, -6}, {5, -5}, {3, -7} } },
	[182] = { .set = { {9, -15}, {3, -7}, {5, -6}, {3, -8} } },
	[183] = { .set = { {-1, -19}, {1, -9}, {-3, -9}, {-1, -9} } },
	[184] = { .set = { {-1, -17}, {1, -7}, {-3, -7}, {-1, -9} } },
	[185] = { .set = { {-1, -18}, {1, -7}, {-3, -7}, {-1, -9} } },
	[186] = { .set = { {-10, -16}, {-4, -8}, {-7, -7}, {-5, -9} } },
	[187] = { .set = { {-10, -14}, {-5, -6}, {-7, -5}, {-5, -7} } },
	[188] = { .set = { {-11, -15}, {-5, -7}, {-7, -6}, {-5, -8} } },
	[189] = { .set = { {-12, -13}, {-7, -8}, {-6, -6}, {-6, -8} } },
	[190] = { .set = { {-13, -11}, {-7, -6}, {-6, -4}, {-6, -6} } },
	[191] = { .set = { {-12, -12}, {-7, -7}, {-6, -5}, {-6, -7} } },
	[192] = { .set = { {-9, -10}, {-6, -6}, {-3, -5}, {-4, -7} } },
	[193] = { .set = { {-10, -8}, {-6, -4}, {-3, -3}, {-4, -5} } },
	[194] = { .set = { {-9, -9}, {-6, -5}, {-3, -4}, {-4, -6} } },
	[195] = { .set = { {-1, 4}, {-3, -1}, {1, -1}, {-1, -4} } },
	[196] = { .set = { {-9, 3}, {-4, 0}, {-2, 1}, {-1, -2} } },
	[197] = { .set = { {-12, -3}, {-4, -4}, {-3, -3}, {-1, -3} } },
	[198] = { .set = { {-12, -7}, {-2, -5}, {-4, -4}, {0, -3} } },
	[199] = { .set = { {-1, -11}, {1, -5}, {-3, -5}, {-1, -4} } },
	[200] = { .set = { {10, -7}, {0, -5}, {2, -4}, {-2, -3} } },
	[201] = { .set = { {10, -3}, {2, -4}, {1, -3}, {-1, -3} } },
	[202] = { .set = { {7, 3}, {2, 0}, {0, 1}, {-1, -2} } },
	[203] = { .set = { {2, 1}, {-4, -3}, {-1, -3}, {0, -5} } },
	[204] = { .set = { {5, 0}, {3, -4}, {1, -3}, {0, -4} } },
	[205] = { .set = { {7, -5}, {-1, -7}, {-2, -5}, {-3, -6} } },
	[206] = { .set = { {7, -7}, {-3, -7}, {-1, -6}, {-3, -6} } },
	[207] = { .set = { {-6, -10}, {2, -2}, {0, -3}, {1, -4} } },
	[208] = { .set = { {-9, -7}, {1, -7}, {-1, -6}, {1, -6} } },
	[209] = { .set = { {-9, -5}, {-1, -7}, {0, -5}, {1, -6} } },
	[210] = { .set = { {-5, 0}, {-3, -4}, {-1, -3}, {0, -4} } },
	[211] = { .set = { {-1, -6}, {-3, -3}, {1, -3}, {-1, -5} } },
	[212] = { .set = { {-1, -8}, {-3, -5}, {1, -5}, {-1, -7} } },
	[213] = { .set = { {-1, 3}, {-3, -2}, {1, -2}, {-1, -5} } },
	[214] = { .set = { {8, -8}, {4, -4}, {1, -3}, {2, -5} } },
	[215] = { .set = { {7, -10}, {4, -6}, {1, -5}, {2, -7} } },
	[216] = { .set = { {7, 2}, {2, -1}, {0, 0}, {-1, -3} } },
	[217] = { .set = { {11, -11}, {5, -6}, {4, -4}, {4, -6} } },
	[218] = { .set = { {10, -13}, {5, -8}, {4, -6}, {4, -8} } },
	[219] = { .set = { {10, -3}, {2, -4}, {1, -3}, {-1, -3} } },
	[220] = { .set = { {8, -14}, {3, -6}, {5, -5}, {3, -7} } },
	[221] = { .set = { {8, -16}, {2, -8}, {5, -7}, {3, -9} } },
	[222] = { .set = { {10, -6}, {0, -4}, {2, -3}, {-2, -2} } },
	[223] = { .set = { {-1, -17}, {1, -7}, {-3, -7}, {-1, -9} } },
	[224] = { .set = { {-1, -19}, {1, -9}, {-3, -9}, {-1, -9} } },
	[225] = { .set = { {-1, -11}, {1, -5}, {-3, -5}, {-1, -4} } },
	[226] = { .set = { {-10, -14}, {-5, -6}, {-7, -5}, {-5, -7} } },
	[227] = { .set = { {-10, -16}, {-4, -8}, {-7, -7}, {-5, -9} } },
	[228] = { .set = { {-12, -6}, {-2, -4}, {-4, -3}, {0, -2} } },
	[229] = { .set = { {-13, -11}, {-7, -6}, {-6, -4}, {-6, -6} } },
	[230] = { .set = { {-12, -13}, {-7, -8}, {-6, -6}, {-6, -8} } },
	[231] = { .set = { {-12, -3}, {-4, -4}, {-3, -3}, {-1, -3} } },
	[232] = { .set = { {-10, -8}, {-6, -4}, {-3, -3}, {-4, -5} } },
	[233] = { .set = { {-9, -10}, {-6, -6}, {-3, -5}, {-4, -7} } },
	[234] = { .set = { {-9, 2}, {-4, -1}, {-2, 0}, {-1, -3} } },
	[235] = { .set = { {-1, -6}, {-3, -3}, {1, -3}, {-1, -5} } },
	[236] = { .set = { {-10, -7}, {-6, -3}, {-3, -2}, {-4, -4} } },
	[237] = { .set = { {-11, -10}, {-5, -5}, {-4, -3}, {-4, -5} } },
	[238] = { .set = { {-8, -13}, {-3, -5}, {-5, -4}, {-3, -6} } },
	[239] = { .set = { {-1, -16}, {1, -6}, {-3, -6}, {-1, -8} } },
	[240] = { .set = { {6, -13}, {1, -5}, {3, -4}, {1, -6} } },
	[241] = { .set = { {9, -10}, {3, -5}, {2, -3}, {2, -5} } },
	[242] = { .set = { {8, -7}, {4, -3}, {1, -2}, {2, -4} } },
	[243] = { .set = { {-1, -8}, {-3, -5}, {1, -5}, {-1, -7} } },
	[244] = { .set = { {-9, -10}, {-6, -6}, {-3, -5}, {-4, -7} } },
	[245] = { .set = { {-12, -13}, {-7, -8}, {-6, -6}, {-6, -8} } },
	[246] = { .set = { {-10, -16}, {-4, -8}, {-7, -7}, {-5, -9} } },
	[247] = { .set = { {-1, -19}, {1, -9}, {-3, -9}, {-1, -9} } },
	[248] = { .set = { {8, -16}, {2, -8}, {5, -7}, {3, -9} } },
	[249] = { .set = { {10, -13}, {5, -8}, {4, -6}, {4, -8} } },
	[250] = { .set = { {7, -10}, {4, -6}, {1, -5}, {2, -7} } },
};

static const ax_anim *const sWeedleAnimTable1[] = {
	AX_ANIM_PTR(sWeedleAnims_1_1),
	AX_ANIM_PTR(sWeedleAnims_1_2),
	AX_ANIM_PTR(sWeedleAnims_1_3),
	AX_ANIM_PTR(sWeedleAnims_1_4),
	AX_ANIM_PTR(sWeedleAnims_1_5),
	AX_ANIM_PTR(sWeedleAnims_1_6),
	AX_ANIM_PTR(sWeedleAnims_1_7),
	AX_ANIM_PTR(sWeedleAnims_1_8),
};

static const ax_anim *const sWeedleAnimTable2[] = {
	AX_ANIM_PTR(sWeedleAnims_2_1),
	AX_ANIM_PTR(sWeedleAnims_2_2),
	AX_ANIM_PTR(sWeedleAnims_2_3),
	AX_ANIM_PTR(sWeedleAnims_2_4),
	AX_ANIM_PTR(sWeedleAnims_2_5),
	AX_ANIM_PTR(sWeedleAnims_2_6),
	AX_ANIM_PTR(sWeedleAnims_2_7),
	AX_ANIM_PTR(sWeedleAnims_2_8),
};

static const ax_anim *const sWeedleAnimTable3[] = {
	AX_ANIM_PTR(sWeedleAnims_3_1),
	AX_ANIM_PTR(sWeedleAnims_3_2),
	AX_ANIM_PTR(sWeedleAnims_3_3),
	AX_ANIM_PTR(sWeedleAnims_3_4),
	AX_ANIM_PTR(sWeedleAnims_3_5),
	AX_ANIM_PTR(sWeedleAnims_3_6),
	AX_ANIM_PTR(sWeedleAnims_3_7),
	AX_ANIM_PTR(sWeedleAnims_3_8),
};

static const ax_anim *const sWeedleAnimTable4[] = {
	AX_ANIM_PTR(sWeedleAnims_4_1),
	AX_ANIM_PTR(sWeedleAnims_4_2),
	AX_ANIM_PTR(sWeedleAnims_4_3),
	AX_ANIM_PTR(sWeedleAnims_4_4),
	AX_ANIM_PTR(sWeedleAnims_4_5),
	AX_ANIM_PTR(sWeedleAnims_4_6),
	AX_ANIM_PTR(sWeedleAnims_4_7),
	AX_ANIM_PTR(sWeedleAnims_4_8),
};

static const ax_anim *const sWeedleAnimTable5[] = {
	AX_ANIM_PTR(sWeedleAnims_5_1),
	AX_ANIM_PTR(sWeedleAnims_5_2),
	AX_ANIM_PTR(sWeedleAnims_5_3),
	AX_ANIM_PTR(sWeedleAnims_5_4),
	AX_ANIM_PTR(sWeedleAnims_5_5),
	AX_ANIM_PTR(sWeedleAnims_5_6),
	AX_ANIM_PTR(sWeedleAnims_5_7),
	AX_ANIM_PTR(sWeedleAnims_5_8),
};

static const ax_anim *const sWeedleAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02372),
	AX_ANIM_PTR(gAxSharedAnim_02372),
	AX_ANIM_PTR(gAxSharedAnim_02372),
	AX_ANIM_PTR(gAxSharedAnim_02372),
	AX_ANIM_PTR(gAxSharedAnim_02372),
	AX_ANIM_PTR(gAxSharedAnim_02372),
	AX_ANIM_PTR(gAxSharedAnim_02372),
	AX_ANIM_PTR(gAxSharedAnim_02372),
};

static const ax_anim *const sWeedleAnimTable7[] = {
	AX_ANIM_PTR(sWeedleAnims_7_1),
	AX_ANIM_PTR(sWeedleAnims_7_2),
	AX_ANIM_PTR(sWeedleAnims_7_3),
	AX_ANIM_PTR(sWeedleAnims_7_4),
	AX_ANIM_PTR(sWeedleAnims_7_5),
	AX_ANIM_PTR(sWeedleAnims_7_6),
	AX_ANIM_PTR(sWeedleAnims_7_7),
	AX_ANIM_PTR(sWeedleAnims_7_8),
};

static const ax_anim *const sWeedleAnimTable8[] = {
	AX_ANIM_PTR(sWeedleAnims_8_1),
	AX_ANIM_PTR(sWeedleAnims_8_2),
	AX_ANIM_PTR(sWeedleAnims_8_3),
	AX_ANIM_PTR(sWeedleAnims_8_4),
	AX_ANIM_PTR(sWeedleAnims_8_5),
	AX_ANIM_PTR(sWeedleAnims_8_6),
	AX_ANIM_PTR(sWeedleAnims_8_7),
	AX_ANIM_PTR(sWeedleAnims_8_8),
};

static const ax_anim *const sWeedleAnimTable9[] = {
	AX_ANIM_PTR(sWeedleAnims_9_1),
	AX_ANIM_PTR(sWeedleAnims_9_2),
	AX_ANIM_PTR(sWeedleAnims_9_3),
	AX_ANIM_PTR(sWeedleAnims_9_4),
	AX_ANIM_PTR(sWeedleAnims_9_5),
	AX_ANIM_PTR(sWeedleAnims_9_6),
	AX_ANIM_PTR(sWeedleAnims_9_7),
	AX_ANIM_PTR(sWeedleAnims_9_8),
};

static const ax_anim *const sWeedleAnimTable10[] = {
	AX_ANIM_PTR(sWeedleAnims_10_1),
	AX_ANIM_PTR(sWeedleAnims_10_2),
	AX_ANIM_PTR(sWeedleAnims_10_3),
	AX_ANIM_PTR(sWeedleAnims_10_4),
	AX_ANIM_PTR(sWeedleAnims_10_5),
	AX_ANIM_PTR(sWeedleAnims_10_6),
	AX_ANIM_PTR(sWeedleAnims_10_7),
	AX_ANIM_PTR(sWeedleAnims_10_8),
};

static const ax_anim *const sWeedleAnimTable11[] = {
	AX_ANIM_PTR(sWeedleAnims_11_1),
	AX_ANIM_PTR(gAxSharedAnim_01371),
	AX_ANIM_PTR(gAxSharedAnim_01407),
	AX_ANIM_PTR(sWeedleAnims_11_4),
	AX_ANIM_PTR(sWeedleAnims_11_5),
	AX_ANIM_PTR(sWeedleAnims_11_6),
	AX_ANIM_PTR(sWeedleAnims_11_7),
	AX_ANIM_PTR(gAxSharedAnim_01509),
};

static const ax_anim *const sWeedleAnimTable12[] = {
	AX_ANIM_PTR(sWeedleAnims_12_1),
	AX_ANIM_PTR(sWeedleAnims_12_2),
	AX_ANIM_PTR(sWeedleAnims_12_3),
	AX_ANIM_PTR(sWeedleAnims_12_4),
	AX_ANIM_PTR(sWeedleAnims_12_5),
	AX_ANIM_PTR(sWeedleAnims_12_6),
	AX_ANIM_PTR(sWeedleAnims_12_7),
	AX_ANIM_PTR(sWeedleAnims_12_8),
};

static const ax_anim *const sWeedleAnimTable13[] = {
	AX_ANIM_PTR(sWeedleAnims_13_1),
	AX_ANIM_PTR(sWeedleAnims_13_2),
	AX_ANIM_PTR(sWeedleAnims_13_3),
	AX_ANIM_PTR(sWeedleAnims_13_4),
	AX_ANIM_PTR(sWeedleAnims_13_5),
	AX_ANIM_PTR(sWeedleAnims_13_6),
	AX_ANIM_PTR(sWeedleAnims_13_7),
	AX_ANIM_PTR(sWeedleAnims_13_8),
};

static const ax_anim *const *const sAxAnimationsWeedle[] = {
	sWeedleAnimTable1,
	sWeedleAnimTable2,
	sWeedleAnimTable3,
	sWeedleAnimTable4,
	sWeedleAnimTable5,
	sWeedleAnimTable6,
	sWeedleAnimTable7,
	sWeedleAnimTable8,
	sWeedleAnimTable9,
	sWeedleAnimTable10,
	sWeedleAnimTable11,
	sWeedleAnimTable12,
	sWeedleAnimTable13,
};

static const ax_sprite *const sAxSpritesWeedle[] = {
	sWeedleSprites1,
	sWeedleSprites2,
	sWeedleSprites3,
	sWeedleSprites4,
	sWeedleSprites5,
	sWeedleSprites6,
	sWeedleSprites7,
	sWeedleSprites8,
	sWeedleSprites9,
	sWeedleSprites10,
	sWeedleSprites11,
	sWeedleSprites12,
	sWeedleSprites13,
	sWeedleSprites14,
	sWeedleSprites15,
	sWeedleSprites16,
	sWeedleSprites17,
	sWeedleSprites18,
	sWeedleSprites19,
	sWeedleSprites20,
	sWeedleSprites21,
	sWeedleSprites22,
	sWeedleSprites23,
	sWeedleSprites24,
	sWeedleSprites25,
	sWeedleSprites26,
	sWeedleSprites27,
	sWeedleSprites28,
	sWeedleSprites29,
	sWeedleSprites30,
	sWeedleSprites31,
	sWeedleSprites32,
	sWeedleSprites33,
	sWeedleSprites34,
	sWeedleSprites35,
	sWeedleSprites36,
	sWeedleSprites37,
	sWeedleSprites38,
	sWeedleSprites39,
	sWeedleSprites40,
	sWeedleSprites41,
	sWeedleSprites42,
};

static const axmain sAxMainWeedle = {
	.poses = sAxPosesWeedle,
	.animations = sAxAnimationsWeedle,
	.animCount = ARRAY_COUNT(sAxAnimationsWeedle),
	.spriteData = sAxSpritesWeedle,
	.positions = sAxPositionsWeedle,
};
