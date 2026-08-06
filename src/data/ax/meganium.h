/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainMeganium;
const SiroArchive gAxMeganium = {"SIRO", &sAxMainMeganium};

static const ax_pose sMeganiumPose1[] = {
	AX_POSE(0, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose2[] = {
	AX_POSE(1, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose3[] = {
	AX_POSE(2, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose4[] = {
	AX_POSE(3, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose5[] = {
	AX_POSE(4, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose6[] = {
	AX_POSE(5, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose7[] = {
	AX_POSE(6, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose8[] = {
	AX_POSE(7, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose9[] = {
	AX_POSE(8, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose10[] = {
	AX_POSE(9, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose11[] = {
	AX_POSE(10, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose12[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose13[] = {
	AX_POSE(12, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose14[] = {
	AX_POSE(13, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose15[] = {
	AX_POSE(14, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose16[] = {
	AX_POSE(9, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose17[] = {
	AX_POSE(10, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose18[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose19[] = {
	AX_POSE(6, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose20[] = {
	AX_POSE(7, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose21[] = {
	AX_POSE(8, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose22[] = {
	AX_POSE(3, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose23[] = {
	AX_POSE(4, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose24[] = {
	AX_POSE(5, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose28[] = {
	AX_POSE(15, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose32[] = {
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose36[] = {
	AX_POSE(17, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose40[] = {
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose44[] = {
	AX_POSE(19, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose48[] = {
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose52[] = {
	AX_POSE(17, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose56[] = {
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose90[] = {
	AX_POSE(20, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose93[] = {
	AX_POSE(21, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose94[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose96[] = {
	AX_POSE(22, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose99[] = {
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose102[] = {
	AX_POSE(24, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose105[] = {
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose108[] = {
	AX_POSE(22, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose111[] = {
	AX_POSE(21, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose112[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose114[] = {
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose115[] = {
	AX_POSE(26, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose117[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose118[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose120[] = {
	AX_POSE(29, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose121[] = {
	AX_POSE(30, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose123[] = {
	AX_POSE(31, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose124[] = {
	AX_POSE(32, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(33, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE(34, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose126[] = {
	AX_POSE(35, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose127[] = {
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose129[] = {
	AX_POSE(31, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose130[] = {
	AX_POSE(32, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(33, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(34, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose132[] = {
	AX_POSE(29, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose133[] = {
	AX_POSE(30, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose135[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose136[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose137[] = {
	AX_POSE(37, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose138[] = {
	AX_POSE(38, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose139[] = {
	AX_POSE(39, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose140[] = {
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose141[] = {
	AX_POSE(41, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose142[] = {
	AX_POSE(42, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(43, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(255, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(4, 3, 3)),
	AX_POSE(44, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(5, 3, 3)),
	AX_POSE(45, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(7, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose143[] = {
	AX_POSE(46, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose144[] = {
	AX_POSE(42, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 3)),
	AX_POSE(43, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(4, 3, 3)),
	AX_POSE(44, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(5, 3, 3)),
	AX_POSE(45, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(7, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose145[] = {
	AX_POSE(41, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose146[] = {
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose173[] = {
	AX_POSE(17, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose174[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose175[] = {
	AX_POSE(19, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose176[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose177[] = {
	AX_POSE(17, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose180[] = {
	AX_POSE(21, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose181[] = {
	AX_POSE(22, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose185[] = {
	AX_POSE(22, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose186[] = {
	AX_POSE(21, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose188[] = {
	AX_POSE(20, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose191[] = {
	AX_POSE(21, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMeganiumPose192[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const u8 sMeganiumAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_2_1.lz");
static const u8 sMeganiumAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_2_2.lz");
static const u8 sMeganiumAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_2_3.lz");
static const u8 sMeganiumAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_2_4.lz");
static const u8 sMeganiumAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_2_5.lz");
static const u8 sMeganiumAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_2_6.lz");
static const u8 sMeganiumAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_2_7.lz");
static const u8 sMeganiumAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_2_8.lz");
static const u8 sMeganiumAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_3_1.lz");
static const u8 sMeganiumAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_3_2.lz");
static const u8 sMeganiumAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_3_3.lz");
static const u8 sMeganiumAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_3_4.lz");
static const u8 sMeganiumAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_3_5.lz");
static const u8 sMeganiumAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_3_6.lz");
static const u8 sMeganiumAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_3_7.lz");
static const u8 sMeganiumAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_3_8.lz");
static const u8 sMeganiumAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_4_1.lz");
static const u8 sMeganiumAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_4_2.lz");
static const u8 sMeganiumAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_4_3.lz");
static const u8 sMeganiumAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_4_4.lz");
static const u8 sMeganiumAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_4_5.lz");
static const u8 sMeganiumAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_4_6.lz");
static const u8 sMeganiumAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_4_7.lz");
static const u8 sMeganiumAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_4_8.lz");
static const u8 sMeganiumAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_5_1.lz");
static const u8 sMeganiumAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_5_2.lz");
static const u8 sMeganiumAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_5_3.lz");
static const u8 sMeganiumAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_5_4.lz");
static const u8 sMeganiumAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_5_5.lz");
static const u8 sMeganiumAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_5_6.lz");
static const u8 sMeganiumAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_5_7.lz");
static const u8 sMeganiumAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_5_8.lz");
static const u8 sMeganiumAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_8_1.lz");
static const u8 sMeganiumAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_8_2.lz");
static const u8 sMeganiumAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_8_3.lz");
static const u8 sMeganiumAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_8_4.lz");
static const u8 sMeganiumAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_8_5.lz");
static const u8 sMeganiumAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_8_6.lz");
static const u8 sMeganiumAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_8_7.lz");
static const u8 sMeganiumAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_8_8.lz");
static const u8 sMeganiumAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_9_1.lz");
static const u8 sMeganiumAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_9_2.lz");
static const u8 sMeganiumAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_9_3.lz");
static const u8 sMeganiumAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_9_4.lz");
static const u8 sMeganiumAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_9_5.lz");
static const u8 sMeganiumAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_9_6.lz");
static const u8 sMeganiumAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_9_7.lz");
static const u8 sMeganiumAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_9_8.lz");
static const u8 sMeganiumAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_11_1.lz");
static const u8 sMeganiumAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_11_2.lz");
static const u8 sMeganiumAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_11_3.lz");
static const u8 sMeganiumAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_11_4.lz");
static const u8 sMeganiumAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_11_5.lz");
static const u8 sMeganiumAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_11_6.lz");
static const u8 sMeganiumAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_11_7.lz");
static const u8 sMeganiumAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/meganium/sMeganiumAnims_11_8.lz");

static const u8 sMeganiumGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_1.4bpp.lz");
static const ax_sprite sMeganiumSprites1[] = {
	{sMeganiumGfx1, ARRAY_COUNT(sMeganiumGfx1)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_2.4bpp.lz");
static const ax_sprite sMeganiumSprites2[] = {
	{sMeganiumGfx2, ARRAY_COUNT(sMeganiumGfx2)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_3.4bpp.lz");
static const ax_sprite sMeganiumSprites3[] = {
	{sMeganiumGfx3, ARRAY_COUNT(sMeganiumGfx3)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_4.4bpp.lz");
static const ax_sprite sMeganiumSprites4[] = {
	{sMeganiumGfx4, ARRAY_COUNT(sMeganiumGfx4)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_5.4bpp.lz");
static const ax_sprite sMeganiumSprites5[] = {
	{sMeganiumGfx5, ARRAY_COUNT(sMeganiumGfx5)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_6.4bpp.lz");
static const ax_sprite sMeganiumSprites6[] = {
	{sMeganiumGfx6, ARRAY_COUNT(sMeganiumGfx6)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_7.4bpp.lz");
static const ax_sprite sMeganiumSprites7[] = {
	{sMeganiumGfx7, ARRAY_COUNT(sMeganiumGfx7)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_8.4bpp.lz");
static const ax_sprite sMeganiumSprites8[] = {
	{sMeganiumGfx8, ARRAY_COUNT(sMeganiumGfx8)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_9.4bpp.lz");
static const ax_sprite sMeganiumSprites9[] = {
	{sMeganiumGfx9, ARRAY_COUNT(sMeganiumGfx9)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_10.4bpp.lz");
static const ax_sprite sMeganiumSprites10[] = {
	{sMeganiumGfx10, ARRAY_COUNT(sMeganiumGfx10)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_11.4bpp.lz");
static const ax_sprite sMeganiumSprites11[] = {
	{sMeganiumGfx11, ARRAY_COUNT(sMeganiumGfx11)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_12.4bpp.lz");
static const ax_sprite sMeganiumSprites12[] = {
	{sMeganiumGfx12, ARRAY_COUNT(sMeganiumGfx12)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_13.4bpp.lz");
static const ax_sprite sMeganiumSprites13[] = {
	{sMeganiumGfx13, ARRAY_COUNT(sMeganiumGfx13)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_14.4bpp.lz");
static const ax_sprite sMeganiumSprites14[] = {
	{sMeganiumGfx14, ARRAY_COUNT(sMeganiumGfx14)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_15.4bpp.lz");
static const ax_sprite sMeganiumSprites15[] = {
	{sMeganiumGfx15, ARRAY_COUNT(sMeganiumGfx15)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_16.4bpp.lz");
static const ax_sprite sMeganiumSprites16[] = {
	{NULL, 128}, 
	{sMeganiumGfx16, ARRAY_COUNT(sMeganiumGfx16)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_17.4bpp.lz");
static const u8 sMeganiumGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_17_1.4bpp.lz");
static const ax_sprite sMeganiumSprites17[] = {
	{sMeganiumGfx17, ARRAY_COUNT(sMeganiumGfx17)}, 
	{NULL, 96}, 
	{sMeganiumGfx17_1, ARRAY_COUNT(sMeganiumGfx17_1)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_18.4bpp.lz");
static const u8 sMeganiumGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_18_1.4bpp.lz");
static const u8 sMeganiumGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_18_2.4bpp.lz");
static const ax_sprite sMeganiumSprites18[] = {
	{sMeganiumGfx18, ARRAY_COUNT(sMeganiumGfx18)}, 
	{NULL, 64}, 
	{sMeganiumGfx18_1, ARRAY_COUNT(sMeganiumGfx18_1)}, 
	{NULL, 32}, 
	{sMeganiumGfx18_2, ARRAY_COUNT(sMeganiumGfx18_2)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_19.4bpp.lz");
static const u8 sMeganiumGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_19_1.4bpp.lz");
static const u8 sMeganiumGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_19_2.4bpp.lz");
static const u8 sMeganiumGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_19_3.4bpp.lz");
static const ax_sprite sMeganiumSprites19[] = {
	{sMeganiumGfx19, ARRAY_COUNT(sMeganiumGfx19)}, 
	{NULL, 64}, 
	{sMeganiumGfx19_1, ARRAY_COUNT(sMeganiumGfx19_1)}, 
	{NULL, 32}, 
	{sMeganiumGfx19_2, ARRAY_COUNT(sMeganiumGfx19_2)}, 
	{NULL, 32}, 
	{sMeganiumGfx19_3, ARRAY_COUNT(sMeganiumGfx19_3)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_20.4bpp.lz");
static const u8 sMeganiumGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_20_1.4bpp.lz");
static const u8 sMeganiumGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_20_2.4bpp.lz");
static const u8 sMeganiumGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_20_3.4bpp.lz");
static const ax_sprite sMeganiumSprites20[] = {
	{NULL, 32}, 
	{sMeganiumGfx20, ARRAY_COUNT(sMeganiumGfx20)}, 
	{NULL, 64}, 
	{sMeganiumGfx20_1, ARRAY_COUNT(sMeganiumGfx20_1)}, 
	{NULL, 32}, 
	{sMeganiumGfx20_2, ARRAY_COUNT(sMeganiumGfx20_2)}, 
	{NULL, 32}, 
	{sMeganiumGfx20_3, ARRAY_COUNT(sMeganiumGfx20_3)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_21.4bpp.lz");
static const ax_sprite sMeganiumSprites21[] = {
	{NULL, 32}, 
	{sMeganiumGfx21, ARRAY_COUNT(sMeganiumGfx21)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_22.4bpp.lz");
static const ax_sprite sMeganiumSprites22[] = {
	{NULL, 32}, 
	{sMeganiumGfx22, ARRAY_COUNT(sMeganiumGfx22)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_23.4bpp.lz");
static const u8 sMeganiumGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_23_1.4bpp.lz");
static const ax_sprite sMeganiumSprites23[] = {
	{NULL, 32}, 
	{sMeganiumGfx23, ARRAY_COUNT(sMeganiumGfx23)}, 
	{NULL, 32}, 
	{sMeganiumGfx23_1, ARRAY_COUNT(sMeganiumGfx23_1)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_24.4bpp.lz");
static const u8 sMeganiumGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_24_1.4bpp.lz");
static const ax_sprite sMeganiumSprites24[] = {
	{NULL, 32}, 
	{sMeganiumGfx24, ARRAY_COUNT(sMeganiumGfx24)}, 
	{NULL, 32}, 
	{sMeganiumGfx24_1, ARRAY_COUNT(sMeganiumGfx24_1)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_25.4bpp.lz");
static const u8 sMeganiumGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_25_1.4bpp.lz");
static const u8 sMeganiumGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_25_2.4bpp.lz");
static const ax_sprite sMeganiumSprites25[] = {
	{NULL, 32}, 
	{sMeganiumGfx25, ARRAY_COUNT(sMeganiumGfx25)}, 
	{NULL, 32}, 
	{sMeganiumGfx25_1, ARRAY_COUNT(sMeganiumGfx25_1)}, 
	{NULL, 32}, 
	{sMeganiumGfx25_2, ARRAY_COUNT(sMeganiumGfx25_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_26.4bpp.lz");
static const u8 sMeganiumGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_26_1.4bpp.lz");
static const u8 sMeganiumGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_26_2.4bpp.lz");
static const u8 sMeganiumGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_26_3.4bpp.lz");
static const ax_sprite sMeganiumSprites26[] = {
	{NULL, 32}, 
	{sMeganiumGfx26, ARRAY_COUNT(sMeganiumGfx26)}, 
	{NULL, 64}, 
	{sMeganiumGfx26_1, ARRAY_COUNT(sMeganiumGfx26_1)}, 
	{NULL, 64}, 
	{sMeganiumGfx26_2, ARRAY_COUNT(sMeganiumGfx26_2)}, 
	{NULL, 32}, 
	{sMeganiumGfx26_3, ARRAY_COUNT(sMeganiumGfx26_3)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_27.4bpp.lz");
static const u8 sMeganiumGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_27_1.4bpp.lz");
static const ax_sprite sMeganiumSprites27[] = {
	{NULL, 32}, 
	{sMeganiumGfx27, ARRAY_COUNT(sMeganiumGfx27)}, 
	{NULL, 64}, 
	{sMeganiumGfx27_1, ARRAY_COUNT(sMeganiumGfx27_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_28.4bpp.lz");
static const u8 sMeganiumGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_28_1.4bpp.lz");
static const u8 sMeganiumGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_28_2.4bpp.lz");
static const ax_sprite sMeganiumSprites28[] = {
	{NULL, 32}, 
	{sMeganiumGfx28, ARRAY_COUNT(sMeganiumGfx28)}, 
	{NULL, 64}, 
	{sMeganiumGfx28_1, ARRAY_COUNT(sMeganiumGfx28_1)}, 
	{NULL, 32}, 
	{sMeganiumGfx28_2, ARRAY_COUNT(sMeganiumGfx28_2)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_29.4bpp.lz");
static const u8 sMeganiumGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_29_1.4bpp.lz");
static const u8 sMeganiumGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_29_2.4bpp.lz");
static const ax_sprite sMeganiumSprites29[] = {
	{sMeganiumGfx29, ARRAY_COUNT(sMeganiumGfx29)}, 
	{NULL, 32}, 
	{sMeganiumGfx29_1, ARRAY_COUNT(sMeganiumGfx29_1)}, 
	{NULL, 32}, 
	{sMeganiumGfx29_2, ARRAY_COUNT(sMeganiumGfx29_2)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_30.4bpp.lz");
static const u8 sMeganiumGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_30_1.4bpp.lz");
static const u8 sMeganiumGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_30_2.4bpp.lz");
static const ax_sprite sMeganiumSprites30[] = {
	{sMeganiumGfx30, ARRAY_COUNT(sMeganiumGfx30)}, 
	{NULL, 64}, 
	{sMeganiumGfx30_1, ARRAY_COUNT(sMeganiumGfx30_1)}, 
	{NULL, 32}, 
	{sMeganiumGfx30_2, ARRAY_COUNT(sMeganiumGfx30_2)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_31.4bpp.lz");
static const u8 sMeganiumGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_31_1.4bpp.lz");
static const u8 sMeganiumGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_31_2.4bpp.lz");
static const ax_sprite sMeganiumSprites31[] = {
	{sMeganiumGfx31, ARRAY_COUNT(sMeganiumGfx31)}, 
	{NULL, 64}, 
	{sMeganiumGfx31_1, ARRAY_COUNT(sMeganiumGfx31_1)}, 
	{NULL, 32}, 
	{sMeganiumGfx31_2, ARRAY_COUNT(sMeganiumGfx31_2)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_32.4bpp.lz");
static const u8 sMeganiumGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_32_1.4bpp.lz");
static const u8 sMeganiumGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_32_2.4bpp.lz");
static const u8 sMeganiumGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_32_3.4bpp.lz");
static const ax_sprite sMeganiumSprites32[] = {
	{sMeganiumGfx32, ARRAY_COUNT(sMeganiumGfx32)}, 
	{NULL, 32}, 
	{sMeganiumGfx32_1, ARRAY_COUNT(sMeganiumGfx32_1)}, 
	{NULL, 32}, 
	{sMeganiumGfx32_2, ARRAY_COUNT(sMeganiumGfx32_2)}, 
	{NULL, 32}, 
	{sMeganiumGfx32_3, ARRAY_COUNT(sMeganiumGfx32_3)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_33.4bpp.lz");
static const u8 sMeganiumGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_33_1.4bpp.lz");
static const ax_sprite sMeganiumSprites33[] = {
	{sMeganiumGfx33, ARRAY_COUNT(sMeganiumGfx33)}, 
	{NULL, 32}, 
	{sMeganiumGfx33_1, ARRAY_COUNT(sMeganiumGfx33_1)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_34.4bpp.lz");
static const ax_sprite sMeganiumSprites34[] = {
	{sMeganiumGfx34, ARRAY_COUNT(sMeganiumGfx34)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_35.4bpp.lz");
static const ax_sprite sMeganiumSprites35[] = {
	{sMeganiumGfx35, ARRAY_COUNT(sMeganiumGfx35)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_36.4bpp.lz");
static const u8 sMeganiumGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_36_1.4bpp.lz");
static const u8 sMeganiumGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_36_2.4bpp.lz");
static const ax_sprite sMeganiumSprites36[] = {
	{NULL, 32}, 
	{sMeganiumGfx36, ARRAY_COUNT(sMeganiumGfx36)}, 
	{NULL, 64}, 
	{sMeganiumGfx36_1, ARRAY_COUNT(sMeganiumGfx36_1)}, 
	{NULL, 32}, 
	{sMeganiumGfx36_2, ARRAY_COUNT(sMeganiumGfx36_2)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_37.4bpp.lz");
static const u8 sMeganiumGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_37_1.4bpp.lz");
static const u8 sMeganiumGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_37_2.4bpp.lz");
static const u8 sMeganiumGfx37_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_37_3.4bpp.lz");
static const ax_sprite sMeganiumSprites37[] = {
	{NULL, 32}, 
	{sMeganiumGfx37, ARRAY_COUNT(sMeganiumGfx37)}, 
	{NULL, 32}, 
	{sMeganiumGfx37_1, ARRAY_COUNT(sMeganiumGfx37_1)}, 
	{NULL, 32}, 
	{sMeganiumGfx37_2, ARRAY_COUNT(sMeganiumGfx37_2)}, 
	{NULL, 32}, 
	{sMeganiumGfx37_3, ARRAY_COUNT(sMeganiumGfx37_3)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_38.4bpp.lz");
static const ax_sprite sMeganiumSprites38[] = {
	{sMeganiumGfx38, ARRAY_COUNT(sMeganiumGfx38)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_39.4bpp.lz");
static const ax_sprite sMeganiumSprites39[] = {
	{sMeganiumGfx39, ARRAY_COUNT(sMeganiumGfx39)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_40.4bpp.lz");
static const ax_sprite sMeganiumSprites40[] = {
	{sMeganiumGfx40, ARRAY_COUNT(sMeganiumGfx40)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_41.4bpp.lz");
static const ax_sprite sMeganiumSprites41[] = {
	{sMeganiumGfx41, ARRAY_COUNT(sMeganiumGfx41)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_42.4bpp.lz");
static const ax_sprite sMeganiumSprites42[] = {
	{sMeganiumGfx42, ARRAY_COUNT(sMeganiumGfx42)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_43.4bpp.lz");
static const ax_sprite sMeganiumSprites43[] = {
	{sMeganiumGfx43, ARRAY_COUNT(sMeganiumGfx43)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_44.4bpp.lz");
static const ax_sprite sMeganiumSprites44[] = {
	{sMeganiumGfx44, ARRAY_COUNT(sMeganiumGfx44)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_45.4bpp.lz");
static const ax_sprite sMeganiumSprites45[] = {
	{sMeganiumGfx45, ARRAY_COUNT(sMeganiumGfx45)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_46.4bpp.lz");
static const ax_sprite sMeganiumSprites46[] = {
	{sMeganiumGfx46, ARRAY_COUNT(sMeganiumGfx46)}, 
	{NULL, 0}
};
static const u8 sMeganiumGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/meganium/sprite_47.4bpp.lz");
static const ax_sprite sMeganiumSprites47[] = {
	{sMeganiumGfx47, ARRAY_COUNT(sMeganiumGfx47)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesMeganium[] = {
	sMeganiumPose1,
	sMeganiumPose2,
	sMeganiumPose3,
	sMeganiumPose4,
	sMeganiumPose5,
	sMeganiumPose6,
	sMeganiumPose7,
	sMeganiumPose8,
	sMeganiumPose9,
	sMeganiumPose10,
	sMeganiumPose11,
	sMeganiumPose12,
	sMeganiumPose13,
	sMeganiumPose14,
	sMeganiumPose15,
	sMeganiumPose16,
	sMeganiumPose17,
	sMeganiumPose18,
	sMeganiumPose19,
	sMeganiumPose20,
	sMeganiumPose21,
	sMeganiumPose22,
	sMeganiumPose23,
	sMeganiumPose24,
	sMeganiumPose1,
	sMeganiumPose2,
	sMeganiumPose3,
	sMeganiumPose28,
	sMeganiumPose4,
	sMeganiumPose5,
	sMeganiumPose6,
	sMeganiumPose32,
	sMeganiumPose7,
	sMeganiumPose8,
	sMeganiumPose9,
	sMeganiumPose36,
	sMeganiumPose10,
	sMeganiumPose11,
	sMeganiumPose12,
	sMeganiumPose40,
	sMeganiumPose13,
	sMeganiumPose14,
	sMeganiumPose15,
	sMeganiumPose44,
	sMeganiumPose16,
	sMeganiumPose17,
	sMeganiumPose18,
	sMeganiumPose48,
	sMeganiumPose19,
	sMeganiumPose20,
	sMeganiumPose21,
	sMeganiumPose52,
	sMeganiumPose22,
	sMeganiumPose23,
	sMeganiumPose24,
	sMeganiumPose56,
	sMeganiumPose1,
	sMeganiumPose2,
	sMeganiumPose3,
	sMeganiumPose28,
	sMeganiumPose4,
	sMeganiumPose5,
	sMeganiumPose6,
	sMeganiumPose32,
	sMeganiumPose7,
	sMeganiumPose8,
	sMeganiumPose9,
	sMeganiumPose36,
	sMeganiumPose10,
	sMeganiumPose11,
	sMeganiumPose12,
	sMeganiumPose40,
	sMeganiumPose13,
	sMeganiumPose14,
	sMeganiumPose15,
	sMeganiumPose44,
	sMeganiumPose16,
	sMeganiumPose17,
	sMeganiumPose18,
	sMeganiumPose48,
	sMeganiumPose19,
	sMeganiumPose20,
	sMeganiumPose21,
	sMeganiumPose52,
	sMeganiumPose22,
	sMeganiumPose23,
	sMeganiumPose24,
	sMeganiumPose56,
	sMeganiumPose1,
	sMeganiumPose90,
	sMeganiumPose28,
	sMeganiumPose4,
	sMeganiumPose93,
	sMeganiumPose94,
	sMeganiumPose7,
	sMeganiumPose96,
	sMeganiumPose36,
	sMeganiumPose10,
	sMeganiumPose99,
	sMeganiumPose40,
	sMeganiumPose13,
	sMeganiumPose102,
	sMeganiumPose44,
	sMeganiumPose16,
	sMeganiumPose105,
	sMeganiumPose48,
	sMeganiumPose19,
	sMeganiumPose108,
	sMeganiumPose52,
	sMeganiumPose22,
	sMeganiumPose111,
	sMeganiumPose112,
	sMeganiumPose1,
	sMeganiumPose114,
	sMeganiumPose115,
	sMeganiumPose4,
	sMeganiumPose117,
	sMeganiumPose118,
	sMeganiumPose7,
	sMeganiumPose120,
	sMeganiumPose121,
	sMeganiumPose10,
	sMeganiumPose123,
	sMeganiumPose124,
	sMeganiumPose13,
	sMeganiumPose126,
	sMeganiumPose127,
	sMeganiumPose16,
	sMeganiumPose129,
	sMeganiumPose130,
	sMeganiumPose19,
	sMeganiumPose132,
	sMeganiumPose133,
	sMeganiumPose22,
	sMeganiumPose135,
	sMeganiumPose136,
	sMeganiumPose137,
	sMeganiumPose138,
	sMeganiumPose139,
	sMeganiumPose140,
	sMeganiumPose141,
	sMeganiumPose142,
	sMeganiumPose143,
	sMeganiumPose144,
	sMeganiumPose145,
	sMeganiumPose146,
	sMeganiumPose1,
	sMeganiumPose114,
	sMeganiumPose115,
	sMeganiumPose4,
	sMeganiumPose117,
	sMeganiumPose118,
	sMeganiumPose7,
	sMeganiumPose120,
	sMeganiumPose121,
	sMeganiumPose10,
	sMeganiumPose123,
	sMeganiumPose124,
	sMeganiumPose13,
	sMeganiumPose126,
	sMeganiumPose127,
	sMeganiumPose16,
	sMeganiumPose129,
	sMeganiumPose130,
	sMeganiumPose19,
	sMeganiumPose132,
	sMeganiumPose133,
	sMeganiumPose22,
	sMeganiumPose135,
	sMeganiumPose136,
	sMeganiumPose28,
	sMeganiumPose112,
	sMeganiumPose173,
	sMeganiumPose174,
	sMeganiumPose175,
	sMeganiumPose176,
	sMeganiumPose177,
	sMeganiumPose94,
	sMeganiumPose90,
	sMeganiumPose180,
	sMeganiumPose181,
	sMeganiumPose99,
	sMeganiumPose102,
	sMeganiumPose105,
	sMeganiumPose185,
	sMeganiumPose186,
	sMeganiumPose1,
	sMeganiumPose188,
	sMeganiumPose28,
	sMeganiumPose4,
	sMeganiumPose191,
	sMeganiumPose192,
	sMeganiumPose7,
	sMeganiumPose96,
	sMeganiumPose36,
	sMeganiumPose10,
	sMeganiumPose99,
	sMeganiumPose40,
	sMeganiumPose13,
	sMeganiumPose102,
	sMeganiumPose44,
	sMeganiumPose16,
	sMeganiumPose105,
	sMeganiumPose48,
	sMeganiumPose19,
	sMeganiumPose108,
	sMeganiumPose52,
	sMeganiumPose22,
	sMeganiumPose111,
	sMeganiumPose112,
	sMeganiumPose28,
	sMeganiumPose112,
	sMeganiumPose173,
	sMeganiumPose174,
	sMeganiumPose175,
	sMeganiumPose176,
	sMeganiumPose177,
	sMeganiumPose94,
	sMeganiumPose1,
	sMeganiumPose22,
	sMeganiumPose19,
	sMeganiumPose16,
	sMeganiumPose13,
	sMeganiumPose10,
	sMeganiumPose7,
	sMeganiumPose4,
};

static const struct PositionSets sAxPositionsMeganium[] = {
	[0] = { .set = { {0, -13}, {-4, 1}, {4, 1}, {0, -11} } },
	[1] = { .set = { {0, -12}, {-5, 0}, {4, 0}, {0, -10} } },
	[2] = { .set = { {0, -12}, {-4, 0}, {5, 0}, {0, -10} } },
	[3] = { .set = { {7, -14}, {8, -1}, {0, 1}, {0, -8} } },
	[4] = { .set = { {7, -13}, {10, -1}, {-1, 1}, {1, -7} } },
	[5] = { .set = { {7, -13}, {8, -1}, {2, 0}, {0, -7} } },
	[6] = { .set = { {11, -17}, {8, -3}, {6, -1}, {0, -8} } },
	[7] = { .set = { {11, -16}, {9, -2}, {4, 0}, {0, -7} } },
	[8] = { .set = { {11, -16}, {3, -3}, {9, -1}, {1, -7} } },
	[9] = { .set = { {8, -18}, {0, -7}, {7, -4}, {0, -8} } },
	[10] = { .set = { {8, -17}, {2, -8}, {6, -3}, {-1, -7} } },
	[11] = { .set = { {8, -17}, {0, -6}, {8, -5}, {0, -7} } },
	[12] = { .set = { {0, -19}, {7, -4}, {-7, -4}, {0, -8} } },
	[13] = { .set = { {0, -18}, {6, -7}, {-7, -4}, {0, -7} } },
	[14] = { .set = { {0, -18}, {6, -4}, {-6, -7}, {0, -7} } },
	[15] = { .set = { {-8, -18}, {0, -7}, {-7, -4}, {0, -8} } },
	[16] = { .set = { {-8, -17}, {-2, -8}, {-6, -3}, {1, -7} } },
	[17] = { .set = { {-8, -17}, {0, -6}, {-8, -5}, {0, -7} } },
	[18] = { .set = { {-11, -17}, {-8, -3}, {-6, -1}, {0, -8} } },
	[19] = { .set = { {-11, -16}, {-9, -2}, {-4, 0}, {0, -7} } },
	[20] = { .set = { {-11, -16}, {-3, -3}, {-9, -1}, {-1, -7} } },
	[21] = { .set = { {-7, -14}, {-8, -1}, {0, 1}, {0, -8} } },
	[22] = { .set = { {-7, -13}, {-10, -1}, {1, 1}, {-1, -7} } },
	[23] = { .set = { {-7, -13}, {-8, -1}, {-2, 0}, {0, -7} } },
	[24] = { .set = { {0, -13}, {-4, 1}, {4, 1}, {0, -11} } },
	[25] = { .set = { {0, -12}, {-5, 0}, {4, 0}, {0, -10} } },
	[26] = { .set = { {0, -12}, {-4, 0}, {5, 0}, {0, -10} } },
	[27] = { .set = { {0, -4}, {-5, 1}, {5, 1}, {0, -7} } },
	[28] = { .set = { {7, -14}, {8, -1}, {0, 1}, {0, -8} } },
	[29] = { .set = { {7, -13}, {10, -1}, {-1, 1}, {1, -7} } },
	[30] = { .set = { {7, -13}, {8, -1}, {2, 0}, {0, -7} } },
	[31] = { .set = { {15, -7}, {9, -1}, {1, 1}, {3, -8} } },
	[32] = { .set = { {11, -17}, {8, -3}, {6, -1}, {0, -8} } },
	[33] = { .set = { {11, -16}, {9, -2}, {4, 0}, {0, -7} } },
	[34] = { .set = { {11, -16}, {3, -3}, {9, -1}, {1, -7} } },
	[35] = { .set = { {16, -11}, {9, -3}, {6, -1}, {0, -8} } },
	[36] = { .set = { {8, -18}, {0, -7}, {7, -4}, {0, -8} } },
	[37] = { .set = { {8, -17}, {2, -8}, {6, -3}, {-1, -7} } },
	[38] = { .set = { {8, -17}, {0, -6}, {8, -5}, {0, -7} } },
	[39] = { .set = { {13, -15}, {1, -8}, {8, -5}, {0, -9} } },
	[40] = { .set = { {0, -19}, {7, -4}, {-7, -4}, {0, -8} } },
	[41] = { .set = { {0, -18}, {6, -7}, {-7, -4}, {0, -7} } },
	[42] = { .set = { {0, -18}, {6, -4}, {-6, -7}, {0, -7} } },
	[43] = { .set = { {0, -17}, {7, -4}, {-7, -4}, {0, -8} } },
	[44] = { .set = { {-8, -18}, {0, -7}, {-7, -4}, {0, -8} } },
	[45] = { .set = { {-8, -17}, {-2, -8}, {-6, -3}, {1, -7} } },
	[46] = { .set = { {-8, -17}, {0, -6}, {-8, -5}, {0, -7} } },
	[47] = { .set = { {-13, -15}, {-1, -8}, {-8, -5}, {0, -9} } },
	[48] = { .set = { {-11, -17}, {-8, -3}, {-6, -1}, {0, -8} } },
	[49] = { .set = { {-11, -16}, {-9, -2}, {-4, 0}, {0, -7} } },
	[50] = { .set = { {-11, -16}, {-3, -3}, {-9, -1}, {-1, -7} } },
	[51] = { .set = { {-16, -11}, {-9, -3}, {-6, -1}, {0, -8} } },
	[52] = { .set = { {-7, -14}, {-8, -1}, {0, 1}, {0, -8} } },
	[53] = { .set = { {-7, -13}, {-10, -1}, {1, 1}, {-1, -7} } },
	[54] = { .set = { {-7, -13}, {-8, -1}, {-2, 0}, {0, -7} } },
	[55] = { .set = { {-15, -7}, {-9, -1}, {-1, 1}, {-3, -8} } },
	[56] = { .set = { {0, -13}, {-4, 1}, {4, 1}, {0, -11} } },
	[57] = { .set = { {0, -12}, {-5, 0}, {4, 0}, {0, -10} } },
	[58] = { .set = { {0, -12}, {-4, 0}, {5, 0}, {0, -10} } },
	[59] = { .set = { {0, -4}, {-5, 1}, {5, 1}, {0, -7} } },
	[60] = { .set = { {7, -14}, {8, -1}, {0, 1}, {0, -8} } },
	[61] = { .set = { {7, -13}, {10, -1}, {-1, 1}, {1, -7} } },
	[62] = { .set = { {7, -13}, {8, -1}, {2, 0}, {0, -7} } },
	[63] = { .set = { {15, -7}, {9, -1}, {1, 1}, {3, -8} } },
	[64] = { .set = { {11, -17}, {8, -3}, {6, -1}, {0, -8} } },
	[65] = { .set = { {11, -16}, {9, -2}, {4, 0}, {0, -7} } },
	[66] = { .set = { {11, -16}, {3, -3}, {9, -1}, {1, -7} } },
	[67] = { .set = { {16, -11}, {9, -3}, {6, -1}, {0, -8} } },
	[68] = { .set = { {8, -18}, {0, -7}, {7, -4}, {0, -8} } },
	[69] = { .set = { {8, -17}, {2, -8}, {6, -3}, {-1, -7} } },
	[70] = { .set = { {8, -17}, {0, -6}, {8, -5}, {0, -7} } },
	[71] = { .set = { {13, -15}, {1, -8}, {8, -5}, {0, -9} } },
	[72] = { .set = { {0, -19}, {7, -4}, {-7, -4}, {0, -8} } },
	[73] = { .set = { {0, -18}, {6, -7}, {-7, -4}, {0, -7} } },
	[74] = { .set = { {0, -18}, {6, -4}, {-6, -7}, {0, -7} } },
	[75] = { .set = { {0, -17}, {7, -4}, {-7, -4}, {0, -8} } },
	[76] = { .set = { {-8, -18}, {0, -7}, {-7, -4}, {0, -8} } },
	[77] = { .set = { {-8, -17}, {-2, -8}, {-6, -3}, {1, -7} } },
	[78] = { .set = { {-8, -17}, {0, -6}, {-8, -5}, {0, -7} } },
	[79] = { .set = { {-13, -15}, {-1, -8}, {-8, -5}, {0, -9} } },
	[80] = { .set = { {-11, -17}, {-8, -3}, {-6, -1}, {0, -8} } },
	[81] = { .set = { {-11, -16}, {-9, -2}, {-4, 0}, {0, -7} } },
	[82] = { .set = { {-11, -16}, {-3, -3}, {-9, -1}, {-1, -7} } },
	[83] = { .set = { {-16, -11}, {-9, -3}, {-6, -1}, {0, -8} } },
	[84] = { .set = { {-7, -14}, {-8, -1}, {0, 1}, {0, -8} } },
	[85] = { .set = { {-7, -13}, {-10, -1}, {1, 1}, {-1, -7} } },
	[86] = { .set = { {-7, -13}, {-8, -1}, {-2, 0}, {0, -7} } },
	[87] = { .set = { {-15, -7}, {-9, -1}, {-1, 1}, {-3, -8} } },
	[88] = { .set = { {0, -13}, {-4, 1}, {4, 1}, {0, -11} } },
	[89] = { .set = { {-4, -26}, {-11, -7}, {-5, -5}, {0, -9} } },
	[90] = { .set = { {0, -4}, {-5, 1}, {5, 1}, {0, -7} } },
	[91] = { .set = { {7, -14}, {8, -1}, {0, 1}, {0, -8} } },
	[92] = { .set = { {-2, -29}, {13, -13}, {9, -9}, {-1, -11} } },
	[93] = { .set = { {14, -6}, {8, 0}, {0, 2}, {2, -7} } },
	[94] = { .set = { {11, -17}, {8, -3}, {6, -1}, {0, -8} } },
	[95] = { .set = { {-7, -26}, {4, -18}, {8, -12}, {-3, -10} } },
	[96] = { .set = { {16, -11}, {9, -3}, {6, -1}, {0, -8} } },
	[97] = { .set = { {8, -18}, {0, -7}, {7, -4}, {0, -8} } },
	[98] = { .set = { {-6, -26}, {-1, -19}, {8, -16}, {-1, -10} } },
	[99] = { .set = { {13, -15}, {1, -8}, {8, -5}, {0, -9} } },
	[100] = { .set = { {0, -19}, {7, -4}, {-7, -4}, {0, -8} } },
	[101] = { .set = { {2, -25}, {9, -17}, {-3, -19}, {0, -8} } },
	[102] = { .set = { {0, -17}, {7, -4}, {-7, -4}, {0, -8} } },
	[103] = { .set = { {-8, -18}, {0, -7}, {-7, -4}, {0, -8} } },
	[104] = { .set = { {6, -26}, {1, -19}, {-8, -16}, {1, -10} } },
	[105] = { .set = { {-13, -15}, {-1, -8}, {-8, -5}, {0, -9} } },
	[106] = { .set = { {-11, -17}, {-8, -3}, {-6, -1}, {0, -8} } },
	[107] = { .set = { {7, -26}, {-4, -18}, {-8, -12}, {3, -10} } },
	[108] = { .set = { {-16, -11}, {-9, -3}, {-6, -1}, {0, -8} } },
	[109] = { .set = { {-7, -14}, {-8, -1}, {0, 1}, {0, -8} } },
	[110] = { .set = { {3, -29}, {-12, -13}, {-8, -9}, {2, -11} } },
	[111] = { .set = { {-15, -6}, {-9, 0}, {-1, 2}, {-3, -7} } },
	[112] = { .set = { {0, -13}, {-4, 1}, {4, 1}, {0, -11} } },
	[113] = { .set = { {2, -13}, {-4, 1}, {4, 1}, {1, -7} } },
	[114] = { .set = { {-2, -13}, {-4, 1}, {4, 1}, {-1, -7} } },
	[115] = { .set = { {7, -14}, {8, -1}, {0, 1}, {0, -8} } },
	[116] = { .set = { {6, -13}, {8, -1}, {0, 1}, {0, -7} } },
	[117] = { .set = { {9, -15}, {8, -1}, {0, 1}, {1, -9} } },
	[118] = { .set = { {11, -17}, {8, -3}, {6, -1}, {0, -8} } },
	[119] = { .set = { {12, -15}, {8, -3}, {6, -1}, {-1, -8} } },
	[120] = { .set = { {12, -18}, {8, -3}, {6, -1}, {-1, -8} } },
	[121] = { .set = { {8, -18}, {0, -7}, {7, -4}, {0, -8} } },
	[122] = { .set = { {11, -17}, {0, -8}, {7, -4}, {-1, -8} } },
	[123] = { .set = { {6, -19}, {0, -7}, {7, -4}, {-1, -8} } },
	[124] = { .set = { {0, -19}, {7, -4}, {-7, -4}, {0, -8} } },
	[125] = { .set = { {-2, -21}, {7, -4}, {-7, -4}, {0, -9} } },
	[126] = { .set = { {2, -20}, {7, -4}, {-7, -4}, {1, -9} } },
	[127] = { .set = { {-8, -18}, {0, -7}, {-7, -4}, {0, -8} } },
	[128] = { .set = { {-11, -17}, {0, -8}, {-7, -4}, {1, -8} } },
	[129] = { .set = { {-6, -19}, {0, -7}, {-7, -4}, {1, -8} } },
	[130] = { .set = { {-11, -17}, {-8, -3}, {-6, -1}, {0, -8} } },
	[131] = { .set = { {-12, -15}, {-8, -3}, {-6, -1}, {1, -8} } },
	[132] = { .set = { {-12, -18}, {-8, -3}, {-6, -1}, {1, -8} } },
	[133] = { .set = { {-7, -14}, {-8, -1}, {0, 1}, {0, -8} } },
	[134] = { .set = { {-6, -13}, {-8, -1}, {0, 1}, {0, -7} } },
	[135] = { .set = { {-9, -15}, {-8, -1}, {0, 1}, {-1, -9} } },
	[136] = { .set = { {-8, -10}, {-8, 1}, {-6, 1}, {1, -5} } },
	[137] = { .set = { {-8, -10}, {-8, 1}, {-6, 1}, {0, -4} } },
	[138] = { .set = { {0, -22}, {-5, -6}, {5, -6}, {0, -14} } },
	[139] = { .set = { {2, -21}, {8, -7}, {2, -4}, {-2, -9} } },
	[140] = { .set = { {4, -23}, {10, -11}, {9, -8}, {-1, -9} } },
	[141] = { .set = { {1, -26}, {-1, -18}, {10, -16}, {1, -10} } },
	[142] = { .set = { {0, -26}, {7, -16}, {-7, -16}, {0, -9} } },
	[143] = { .set = { {-2, -26}, {0, -18}, {-11, -16}, {-2, -10} } },
	[144] = { .set = { {-5, -23}, {-11, -11}, {-10, -8}, {0, -9} } },
	[145] = { .set = { {-3, -21}, {-9, -7}, {-3, -4}, {1, -9} } },
	[146] = { .set = { {0, -13}, {-4, 1}, {4, 1}, {0, -11} } },
	[147] = { .set = { {2, -13}, {-4, 1}, {4, 1}, {1, -7} } },
	[148] = { .set = { {-2, -13}, {-4, 1}, {4, 1}, {-1, -7} } },
	[149] = { .set = { {7, -14}, {8, -1}, {0, 1}, {0, -8} } },
	[150] = { .set = { {6, -13}, {8, -1}, {0, 1}, {0, -7} } },
	[151] = { .set = { {9, -15}, {8, -1}, {0, 1}, {1, -9} } },
	[152] = { .set = { {11, -17}, {8, -3}, {6, -1}, {0, -8} } },
	[153] = { .set = { {12, -15}, {8, -3}, {6, -1}, {-1, -8} } },
	[154] = { .set = { {12, -18}, {8, -3}, {6, -1}, {-1, -8} } },
	[155] = { .set = { {8, -18}, {0, -7}, {7, -4}, {0, -8} } },
	[156] = { .set = { {11, -17}, {0, -8}, {7, -4}, {-1, -8} } },
	[157] = { .set = { {6, -19}, {0, -7}, {7, -4}, {-1, -8} } },
	[158] = { .set = { {0, -19}, {7, -4}, {-7, -4}, {0, -8} } },
	[159] = { .set = { {-2, -21}, {7, -4}, {-7, -4}, {0, -9} } },
	[160] = { .set = { {2, -20}, {7, -4}, {-7, -4}, {1, -9} } },
	[161] = { .set = { {-8, -18}, {0, -7}, {-7, -4}, {0, -8} } },
	[162] = { .set = { {-11, -17}, {0, -8}, {-7, -4}, {1, -8} } },
	[163] = { .set = { {-6, -19}, {0, -7}, {-7, -4}, {1, -8} } },
	[164] = { .set = { {-11, -17}, {-8, -3}, {-6, -1}, {0, -8} } },
	[165] = { .set = { {-12, -15}, {-8, -3}, {-6, -1}, {1, -8} } },
	[166] = { .set = { {-12, -18}, {-8, -3}, {-6, -1}, {1, -8} } },
	[167] = { .set = { {-7, -14}, {-8, -1}, {0, 1}, {0, -8} } },
	[168] = { .set = { {-6, -13}, {-8, -1}, {0, 1}, {0, -7} } },
	[169] = { .set = { {-9, -15}, {-8, -1}, {0, 1}, {-1, -9} } },
	[170] = { .set = { {0, -4}, {-5, 1}, {5, 1}, {0, -7} } },
	[171] = { .set = { {-15, -6}, {-9, 0}, {-1, 2}, {-3, -7} } },
	[172] = { .set = { {-16, -10}, {-9, -2}, {-6, 0}, {0, -7} } },
	[173] = { .set = { {-13, -14}, {-1, -7}, {-8, -4}, {0, -8} } },
	[174] = { .set = { {0, -16}, {7, -3}, {-7, -3}, {0, -7} } },
	[175] = { .set = { {13, -14}, {1, -7}, {8, -4}, {0, -8} } },
	[176] = { .set = { {16, -10}, {9, -2}, {6, 0}, {0, -7} } },
	[177] = { .set = { {14, -6}, {8, 0}, {0, 2}, {2, -7} } },
	[178] = { .set = { {-4, -26}, {-11, -7}, {-5, -5}, {0, -9} } },
	[179] = { .set = { {-3, -27}, {12, -11}, {8, -7}, {-2, -9} } },
	[180] = { .set = { {-5, -25}, {6, -17}, {10, -11}, {-1, -9} } },
	[181] = { .set = { {-6, -26}, {-1, -19}, {8, -16}, {-1, -10} } },
	[182] = { .set = { {2, -25}, {9, -17}, {-3, -19}, {0, -8} } },
	[183] = { .set = { {6, -26}, {1, -19}, {-8, -16}, {1, -10} } },
	[184] = { .set = { {5, -25}, {-6, -17}, {-10, -11}, {1, -9} } },
	[185] = { .set = { {3, -27}, {-12, -11}, {-8, -7}, {2, -9} } },
	[186] = { .set = { {0, -13}, {-4, 1}, {4, 1}, {0, -11} } },
	[187] = { .set = { {-3, -26}, {-10, -7}, {-4, -5}, {1, -9} } },
	[188] = { .set = { {0, -4}, {-5, 1}, {5, 1}, {0, -7} } },
	[189] = { .set = { {7, -14}, {8, -1}, {0, 1}, {0, -8} } },
	[190] = { .set = { {-1, -29}, {14, -13}, {10, -9}, {0, -11} } },
	[191] = { .set = { {15, -6}, {9, 0}, {1, 2}, {3, -7} } },
	[192] = { .set = { {11, -17}, {8, -3}, {6, -1}, {0, -8} } },
	[193] = { .set = { {-7, -26}, {4, -18}, {8, -12}, {-3, -10} } },
	[194] = { .set = { {16, -11}, {9, -3}, {6, -1}, {0, -8} } },
	[195] = { .set = { {8, -18}, {0, -7}, {7, -4}, {0, -8} } },
	[196] = { .set = { {-6, -26}, {-1, -19}, {8, -16}, {-1, -10} } },
	[197] = { .set = { {13, -15}, {1, -8}, {8, -5}, {0, -9} } },
	[198] = { .set = { {0, -19}, {7, -4}, {-7, -4}, {0, -8} } },
	[199] = { .set = { {2, -25}, {9, -17}, {-3, -19}, {0, -8} } },
	[200] = { .set = { {0, -17}, {7, -4}, {-7, -4}, {0, -8} } },
	[201] = { .set = { {-8, -18}, {0, -7}, {-7, -4}, {0, -8} } },
	[202] = { .set = { {6, -26}, {1, -19}, {-8, -16}, {1, -10} } },
	[203] = { .set = { {-13, -15}, {-1, -8}, {-8, -5}, {0, -9} } },
	[204] = { .set = { {-11, -17}, {-8, -3}, {-6, -1}, {0, -8} } },
	[205] = { .set = { {7, -26}, {-4, -18}, {-8, -12}, {3, -10} } },
	[206] = { .set = { {-16, -11}, {-9, -3}, {-6, -1}, {0, -8} } },
	[207] = { .set = { {-7, -14}, {-8, -1}, {0, 1}, {0, -8} } },
	[208] = { .set = { {3, -29}, {-12, -13}, {-8, -9}, {2, -11} } },
	[209] = { .set = { {-15, -6}, {-9, 0}, {-1, 2}, {-3, -7} } },
	[210] = { .set = { {0, -4}, {-5, 1}, {5, 1}, {0, -7} } },
	[211] = { .set = { {-15, -6}, {-9, 0}, {-1, 2}, {-3, -7} } },
	[212] = { .set = { {-16, -10}, {-9, -2}, {-6, 0}, {0, -7} } },
	[213] = { .set = { {-13, -14}, {-1, -7}, {-8, -4}, {0, -8} } },
	[214] = { .set = { {0, -16}, {7, -3}, {-7, -3}, {0, -7} } },
	[215] = { .set = { {13, -14}, {1, -7}, {8, -4}, {0, -8} } },
	[216] = { .set = { {16, -10}, {9, -2}, {6, 0}, {0, -7} } },
	[217] = { .set = { {14, -6}, {8, 0}, {0, 2}, {2, -7} } },
	[218] = { .set = { {0, -13}, {-4, 1}, {4, 1}, {0, -11} } },
	[219] = { .set = { {-7, -14}, {-8, -1}, {0, 1}, {0, -8} } },
	[220] = { .set = { {-11, -17}, {-8, -3}, {-6, -1}, {0, -8} } },
	[221] = { .set = { {-8, -18}, {0, -7}, {-7, -4}, {0, -8} } },
	[222] = { .set = { {0, -19}, {7, -4}, {-7, -4}, {0, -8} } },
	[223] = { .set = { {8, -18}, {0, -7}, {7, -4}, {0, -8} } },
	[224] = { .set = { {11, -17}, {8, -3}, {6, -1}, {0, -8} } },
	[225] = { .set = { {7, -14}, {8, -1}, {0, 1}, {0, -8} } },
};

static const ax_anim *const sMeganiumAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_00037),
	AX_ANIM_PTR(gAxSharedAnim_00081),
	AX_ANIM_PTR(gAxSharedAnim_00086),
	AX_ANIM_PTR(gAxSharedAnim_00091),
	AX_ANIM_PTR(gAxSharedAnim_00042),
	AX_ANIM_PTR(gAxSharedAnim_00056),
	AX_ANIM_PTR(gAxSharedAnim_00062),
	AX_ANIM_PTR(gAxSharedAnim_00067),
};

static const ax_anim *const sMeganiumAnimTable2[] = {
	AX_ANIM_PTR(sMeganiumAnims_2_1),
	AX_ANIM_PTR(sMeganiumAnims_2_2),
	AX_ANIM_PTR(sMeganiumAnims_2_3),
	AX_ANIM_PTR(sMeganiumAnims_2_4),
	AX_ANIM_PTR(sMeganiumAnims_2_5),
	AX_ANIM_PTR(sMeganiumAnims_2_6),
	AX_ANIM_PTR(sMeganiumAnims_2_7),
	AX_ANIM_PTR(sMeganiumAnims_2_8),
};

static const ax_anim *const sMeganiumAnimTable3[] = {
	AX_ANIM_PTR(sMeganiumAnims_3_1),
	AX_ANIM_PTR(sMeganiumAnims_3_2),
	AX_ANIM_PTR(sMeganiumAnims_3_3),
	AX_ANIM_PTR(sMeganiumAnims_3_4),
	AX_ANIM_PTR(sMeganiumAnims_3_5),
	AX_ANIM_PTR(sMeganiumAnims_3_6),
	AX_ANIM_PTR(sMeganiumAnims_3_7),
	AX_ANIM_PTR(sMeganiumAnims_3_8),
};

static const ax_anim *const sMeganiumAnimTable4[] = {
	AX_ANIM_PTR(sMeganiumAnims_4_1),
	AX_ANIM_PTR(sMeganiumAnims_4_2),
	AX_ANIM_PTR(sMeganiumAnims_4_3),
	AX_ANIM_PTR(sMeganiumAnims_4_4),
	AX_ANIM_PTR(sMeganiumAnims_4_5),
	AX_ANIM_PTR(sMeganiumAnims_4_6),
	AX_ANIM_PTR(sMeganiumAnims_4_7),
	AX_ANIM_PTR(sMeganiumAnims_4_8),
};

static const ax_anim *const sMeganiumAnimTable5[] = {
	AX_ANIM_PTR(sMeganiumAnims_5_1),
	AX_ANIM_PTR(sMeganiumAnims_5_2),
	AX_ANIM_PTR(sMeganiumAnims_5_3),
	AX_ANIM_PTR(sMeganiumAnims_5_4),
	AX_ANIM_PTR(sMeganiumAnims_5_5),
	AX_ANIM_PTR(sMeganiumAnims_5_6),
	AX_ANIM_PTR(sMeganiumAnims_5_7),
	AX_ANIM_PTR(sMeganiumAnims_5_8),
};

static const ax_anim *const sMeganiumAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
};

static const ax_anim *const sMeganiumAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00466),
	AX_ANIM_PTR(gAxSharedAnim_00479),
	AX_ANIM_PTR(gAxSharedAnim_00487),
	AX_ANIM_PTR(gAxSharedAnim_00496),
	AX_ANIM_PTR(gAxSharedAnim_00508),
	AX_ANIM_PTR(gAxSharedAnim_00517),
	AX_ANIM_PTR(gAxSharedAnim_00523),
	AX_ANIM_PTR(gAxSharedAnim_00529),
};

static const ax_anim *const sMeganiumAnimTable8[] = {
	AX_ANIM_PTR(sMeganiumAnims_8_1),
	AX_ANIM_PTR(sMeganiumAnims_8_2),
	AX_ANIM_PTR(sMeganiumAnims_8_3),
	AX_ANIM_PTR(sMeganiumAnims_8_4),
	AX_ANIM_PTR(sMeganiumAnims_8_5),
	AX_ANIM_PTR(sMeganiumAnims_8_6),
	AX_ANIM_PTR(sMeganiumAnims_8_7),
	AX_ANIM_PTR(sMeganiumAnims_8_8),
};

static const ax_anim *const sMeganiumAnimTable9[] = {
	AX_ANIM_PTR(sMeganiumAnims_9_1),
	AX_ANIM_PTR(sMeganiumAnims_9_2),
	AX_ANIM_PTR(sMeganiumAnims_9_3),
	AX_ANIM_PTR(sMeganiumAnims_9_4),
	AX_ANIM_PTR(sMeganiumAnims_9_5),
	AX_ANIM_PTR(sMeganiumAnims_9_6),
	AX_ANIM_PTR(sMeganiumAnims_9_7),
	AX_ANIM_PTR(sMeganiumAnims_9_8),
};

static const ax_anim *const sMeganiumAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00905),
	AX_ANIM_PTR(gAxSharedAnim_00918),
	AX_ANIM_PTR(gAxSharedAnim_00930),
	AX_ANIM_PTR(gAxSharedAnim_00942),
	AX_ANIM_PTR(gAxSharedAnim_00955),
	AX_ANIM_PTR(gAxSharedAnim_00965),
	AX_ANIM_PTR(gAxSharedAnim_00978),
	AX_ANIM_PTR(gAxSharedAnim_00993),
};

static const ax_anim *const sMeganiumAnimTable11[] = {
	AX_ANIM_PTR(sMeganiumAnims_11_1),
	AX_ANIM_PTR(sMeganiumAnims_11_2),
	AX_ANIM_PTR(sMeganiumAnims_11_3),
	AX_ANIM_PTR(sMeganiumAnims_11_4),
	AX_ANIM_PTR(sMeganiumAnims_11_5),
	AX_ANIM_PTR(sMeganiumAnims_11_6),
	AX_ANIM_PTR(sMeganiumAnims_11_7),
	AX_ANIM_PTR(sMeganiumAnims_11_8),
};

static const ax_anim *const sMeganiumAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01337),
	AX_ANIM_PTR(gAxSharedAnim_01414),
	AX_ANIM_PTR(gAxSharedAnim_01392),
	AX_ANIM_PTR(gAxSharedAnim_01380),
	AX_ANIM_PTR(gAxSharedAnim_01379),
	AX_ANIM_PTR(gAxSharedAnim_01368),
	AX_ANIM_PTR(gAxSharedAnim_01354),
	AX_ANIM_PTR(gAxSharedAnim_01338),
};

static const ax_anim *const sMeganiumAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01422),
	AX_ANIM_PTR(gAxSharedAnim_01464),
	AX_ANIM_PTR(gAxSharedAnim_01461),
	AX_ANIM_PTR(gAxSharedAnim_01456),
	AX_ANIM_PTR(gAxSharedAnim_01446),
	AX_ANIM_PTR(gAxSharedAnim_01443),
	AX_ANIM_PTR(gAxSharedAnim_01438),
	AX_ANIM_PTR(gAxSharedAnim_01429),
};

static const ax_anim *const *const sAxAnimationsMeganium[] = {
	sMeganiumAnimTable1,
	sMeganiumAnimTable2,
	sMeganiumAnimTable3,
	sMeganiumAnimTable4,
	sMeganiumAnimTable5,
	sMeganiumAnimTable6,
	sMeganiumAnimTable7,
	sMeganiumAnimTable8,
	sMeganiumAnimTable9,
	sMeganiumAnimTable10,
	sMeganiumAnimTable11,
	sMeganiumAnimTable12,
	sMeganiumAnimTable13,
};

static const ax_sprite *const sAxSpritesMeganium[] = {
	sMeganiumSprites1,
	sMeganiumSprites2,
	sMeganiumSprites3,
	sMeganiumSprites4,
	sMeganiumSprites5,
	sMeganiumSprites6,
	sMeganiumSprites7,
	sMeganiumSprites8,
	sMeganiumSprites9,
	sMeganiumSprites10,
	sMeganiumSprites11,
	sMeganiumSprites12,
	sMeganiumSprites13,
	sMeganiumSprites14,
	sMeganiumSprites15,
	sMeganiumSprites16,
	sMeganiumSprites17,
	sMeganiumSprites18,
	sMeganiumSprites19,
	sMeganiumSprites20,
	sMeganiumSprites21,
	sMeganiumSprites22,
	sMeganiumSprites23,
	sMeganiumSprites24,
	sMeganiumSprites25,
	sMeganiumSprites26,
	sMeganiumSprites27,
	sMeganiumSprites28,
	sMeganiumSprites29,
	sMeganiumSprites30,
	sMeganiumSprites31,
	sMeganiumSprites32,
	sMeganiumSprites33,
	sMeganiumSprites34,
	sMeganiumSprites35,
	sMeganiumSprites36,
	sMeganiumSprites37,
	sMeganiumSprites38,
	sMeganiumSprites39,
	sMeganiumSprites40,
	sMeganiumSprites41,
	sMeganiumSprites42,
	sMeganiumSprites43,
	sMeganiumSprites44,
	sMeganiumSprites45,
	sMeganiumSprites46,
	sMeganiumSprites47,
};

static const axmain sAxMainMeganium = {
	.poses = sAxPosesMeganium,
	.animations = sAxAnimationsMeganium,
	.animCount = ARRAY_COUNT(sAxAnimationsMeganium),
	.spriteData = sAxSpritesMeganium,
	.positions = sAxPositionsMeganium,
};
