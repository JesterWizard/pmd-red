/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainSmeargle;
const SiroArchive gAxSmeargle = {"SIRO", &sAxMainSmeargle};

static const ax_pose sSmearglePose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose3[] = {
	AX_POSE(2, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose4[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose5[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose6[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose7[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose8[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose9[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose10[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose11[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose12[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose13[] = {
	AX_POSE(12, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose14[] = {
	AX_POSE(13, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose15[] = {
	AX_POSE(14, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose16[] = {
	AX_POSE(15, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose17[] = {
	AX_POSE(16, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose18[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose19[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose20[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose21[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose22[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose23[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose24[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose74[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose75[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose76[] = {
	AX_POSE(26, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose78[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose79[] = {
	AX_POSE(28, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose80[] = {
	AX_POSE(29, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose82[] = {
	AX_POSE(30, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose83[] = {
	AX_POSE(31, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(23, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 8)),
	AX_POSE(32, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 8)),
	AX_POSE(33, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(9, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose84[] = {
	AX_POSE(34, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose86[] = {
	AX_POSE(35, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose87[] = {
	AX_POSE(36, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose88[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose90[] = {
	AX_POSE(38, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose91[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose92[] = {
	AX_POSE(40, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose94[] = {
	AX_POSE(41, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose95[] = {
	AX_POSE(42, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose96[] = {
	AX_POSE(43, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose98[] = {
	AX_POSE(44, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose99[] = {
	AX_POSE(45, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(46, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 8)),
	AX_POSE(47, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose100[] = {
	AX_POSE(48, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose102[] = {
	AX_POSE(49, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose103[] = {
	AX_POSE(50, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(51, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 8)),
	AX_POSE(52, OAM1(248, ST_OAM_V_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 8)),
	AX_POSE(53, OAM1(0, ST_OAM_SQUARE     , 2), OAM2(227, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose104[] = {
	AX_POSE(54, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose108[] = {
	AX_POSE(55, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(56, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose109[] = {
	AX_POSE(56, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose113[] = {
	AX_POSE(57, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(58, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose114[] = {
	AX_POSE(58, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose118[] = {
	AX_POSE(59, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 8)),
	AX_POSE(60, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose119[] = {
	AX_POSE(60, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose123[] = {
	AX_POSE(61, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(62, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose124[] = {
	AX_POSE(62, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose128[] = {
	AX_POSE(63, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(64, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose129[] = {
	AX_POSE(64, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose133[] = {
	AX_POSE(65, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(66, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose134[] = {
	AX_POSE(66, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose138[] = {
	AX_POSE(67, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(68, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose139[] = {
	AX_POSE(68, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose143[] = {
	AX_POSE(69, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(70, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose144[] = {
	AX_POSE(70, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose145[] = {
	AX_POSE(71, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose146[] = {
	AX_POSE(72, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose147[] = {
	AX_POSE(73, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose148[] = {
	AX_POSE(74, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose149[] = {
	AX_POSE(75, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose150[] = {
	AX_POSE(76, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose151[] = {
	AX_POSE(77, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose152[] = {
	AX_POSE(78, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose153[] = {
	AX_POSE(79, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose154[] = {
	AX_POSE(80, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose156[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose160[] = {
	AX_POSE(30, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose164[] = {
	AX_POSE(38, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose168[] = {
	AX_POSE(44, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose170[] = {
	AX_POSE(49, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose173[] = {
	AX_POSE(48, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose175[] = {
	AX_POSE(40, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose176[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose186[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose189[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose212[] = {
	AX_POSE(28, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose213[] = {
	AX_POSE(31, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(21, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 8)),
	AX_POSE(32, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 8)),
	AX_POSE(33, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(9, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose214[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose215[] = {
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose216[] = {
	AX_POSE(42, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose217[] = {
	AX_POSE(45, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(46, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 8)),
	AX_POSE(47, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSmearglePose218[] = {
	AX_POSE(50, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(51, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 8)),
	AX_POSE(52, OAM1(248, ST_OAM_V_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 8)),
	AX_POSE(53, OAM1(0, ST_OAM_SQUARE     , 2), OAM2(228, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 8)),
	AX_POSE_TERMINATOR
};
static const u8 sSmeargleAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_2_1.lz");
static const u8 sSmeargleAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_2_2.lz");
static const u8 sSmeargleAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_2_3.lz");
static const u8 sSmeargleAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_2_4.lz");
static const u8 sSmeargleAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_2_5.lz");
static const u8 sSmeargleAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_2_6.lz");
static const u8 sSmeargleAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_2_7.lz");
static const u8 sSmeargleAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_2_8.lz");
static const u8 sSmeargleAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_3_1.lz");
static const u8 sSmeargleAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_3_2.lz");
static const u8 sSmeargleAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_3_3.lz");
static const u8 sSmeargleAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_3_4.lz");
static const u8 sSmeargleAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_3_5.lz");
static const u8 sSmeargleAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_3_6.lz");
static const u8 sSmeargleAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_3_7.lz");
static const u8 sSmeargleAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_3_8.lz");
static const u8 sSmeargleAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_4_1.lz");
static const u8 sSmeargleAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_4_2.lz");
static const u8 sSmeargleAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_4_3.lz");
static const u8 sSmeargleAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_4_4.lz");
static const u8 sSmeargleAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_4_5.lz");
static const u8 sSmeargleAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_4_6.lz");
static const u8 sSmeargleAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_4_7.lz");
static const u8 sSmeargleAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_4_8.lz");
static const u8 sSmeargleAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_5_1.lz");
static const u8 sSmeargleAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_5_2.lz");
static const u8 sSmeargleAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_5_3.lz");
static const u8 sSmeargleAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_5_4.lz");
static const u8 sSmeargleAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_5_5.lz");
static const u8 sSmeargleAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_5_6.lz");
static const u8 sSmeargleAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_5_7.lz");
static const u8 sSmeargleAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_5_8.lz");
static const u8 sSmeargleAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_8_1.lz");
static const u8 sSmeargleAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_8_2.lz");
static const u8 sSmeargleAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_8_3.lz");
static const u8 sSmeargleAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_8_4.lz");
static const u8 sSmeargleAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_8_5.lz");
static const u8 sSmeargleAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_8_6.lz");
static const u8 sSmeargleAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_8_7.lz");
static const u8 sSmeargleAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_8_8.lz");
static const u8 sSmeargleAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_9_1.lz");
static const u8 sSmeargleAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_9_2.lz");
static const u8 sSmeargleAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_9_3.lz");
static const u8 sSmeargleAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_9_4.lz");
static const u8 sSmeargleAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_9_5.lz");
static const u8 sSmeargleAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_9_6.lz");
static const u8 sSmeargleAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_9_7.lz");
static const u8 sSmeargleAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_9_8.lz");
static const u8 sSmeargleAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_11_2.lz");
static const u8 sSmeargleAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_11_7.lz");
static const u8 sSmeargleAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/smeargle/sSmeargleAnims_11_8.lz");

static const u8 sSmeargleGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_1.4bpp.lz");
static const ax_sprite sSmeargleSprites1[] = {
	{sSmeargleGfx1, ARRAY_COUNT(sSmeargleGfx1)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_2.4bpp.lz");
static const ax_sprite sSmeargleSprites2[] = {
	{sSmeargleGfx2, ARRAY_COUNT(sSmeargleGfx2)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_3.4bpp.lz");
static const ax_sprite sSmeargleSprites3[] = {
	{sSmeargleGfx3, ARRAY_COUNT(sSmeargleGfx3)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_4.4bpp.lz");
static const ax_sprite sSmeargleSprites4[] = {
	{sSmeargleGfx4, ARRAY_COUNT(sSmeargleGfx4)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_5.4bpp.lz");
static const ax_sprite sSmeargleSprites5[] = {
	{sSmeargleGfx5, ARRAY_COUNT(sSmeargleGfx5)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_6.4bpp.lz");
static const ax_sprite sSmeargleSprites6[] = {
	{sSmeargleGfx6, ARRAY_COUNT(sSmeargleGfx6)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_7.4bpp.lz");
static const ax_sprite sSmeargleSprites7[] = {
	{sSmeargleGfx7, ARRAY_COUNT(sSmeargleGfx7)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_8.4bpp.lz");
static const ax_sprite sSmeargleSprites8[] = {
	{sSmeargleGfx8, ARRAY_COUNT(sSmeargleGfx8)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_9.4bpp.lz");
static const ax_sprite sSmeargleSprites9[] = {
	{sSmeargleGfx9, ARRAY_COUNT(sSmeargleGfx9)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_10.4bpp.lz");
static const ax_sprite sSmeargleSprites10[] = {
	{sSmeargleGfx10, ARRAY_COUNT(sSmeargleGfx10)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_11.4bpp.lz");
static const ax_sprite sSmeargleSprites11[] = {
	{sSmeargleGfx11, ARRAY_COUNT(sSmeargleGfx11)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_12.4bpp.lz");
static const ax_sprite sSmeargleSprites12[] = {
	{sSmeargleGfx12, ARRAY_COUNT(sSmeargleGfx12)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_13.4bpp.lz");
static const ax_sprite sSmeargleSprites13[] = {
	{sSmeargleGfx13, ARRAY_COUNT(sSmeargleGfx13)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_14.4bpp.lz");
static const ax_sprite sSmeargleSprites14[] = {
	{sSmeargleGfx14, ARRAY_COUNT(sSmeargleGfx14)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_15.4bpp.lz");
static const ax_sprite sSmeargleSprites15[] = {
	{sSmeargleGfx15, ARRAY_COUNT(sSmeargleGfx15)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_16.4bpp.lz");
static const ax_sprite sSmeargleSprites16[] = {
	{sSmeargleGfx16, ARRAY_COUNT(sSmeargleGfx16)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_17.4bpp.lz");
static const ax_sprite sSmeargleSprites17[] = {
	{sSmeargleGfx17, ARRAY_COUNT(sSmeargleGfx17)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_18.4bpp.lz");
static const ax_sprite sSmeargleSprites18[] = {
	{sSmeargleGfx18, ARRAY_COUNT(sSmeargleGfx18)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_19.4bpp.lz");
static const ax_sprite sSmeargleSprites19[] = {
	{sSmeargleGfx19, ARRAY_COUNT(sSmeargleGfx19)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_20.4bpp.lz");
static const ax_sprite sSmeargleSprites20[] = {
	{sSmeargleGfx20, ARRAY_COUNT(sSmeargleGfx20)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_21.4bpp.lz");
static const ax_sprite sSmeargleSprites21[] = {
	{sSmeargleGfx21, ARRAY_COUNT(sSmeargleGfx21)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_22.4bpp.lz");
static const ax_sprite sSmeargleSprites22[] = {
	{sSmeargleGfx22, ARRAY_COUNT(sSmeargleGfx22)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_23.4bpp.lz");
static const ax_sprite sSmeargleSprites23[] = {
	{sSmeargleGfx23, ARRAY_COUNT(sSmeargleGfx23)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_24.4bpp.lz");
static const ax_sprite sSmeargleSprites24[] = {
	{sSmeargleGfx24, ARRAY_COUNT(sSmeargleGfx24)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_25.4bpp.lz");
static const u8 sSmeargleGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_25_1.4bpp.lz");
static const u8 sSmeargleGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_25_2.4bpp.lz");
static const ax_sprite sSmeargleSprites25[] = {
	{NULL, 32}, 
	{sSmeargleGfx25, ARRAY_COUNT(sSmeargleGfx25)}, 
	{NULL, 32}, 
	{sSmeargleGfx25_1, ARRAY_COUNT(sSmeargleGfx25_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx25_2, ARRAY_COUNT(sSmeargleGfx25_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_26.4bpp.lz");
static const u8 sSmeargleGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_26_1.4bpp.lz");
static const u8 sSmeargleGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_26_2.4bpp.lz");
static const ax_sprite sSmeargleSprites26[] = {
	{NULL, 32}, 
	{sSmeargleGfx26, ARRAY_COUNT(sSmeargleGfx26)}, 
	{NULL, 32}, 
	{sSmeargleGfx26_1, ARRAY_COUNT(sSmeargleGfx26_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx26_2, ARRAY_COUNT(sSmeargleGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_27.4bpp.lz");
static const u8 sSmeargleGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_27_1.4bpp.lz");
static const u8 sSmeargleGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_27_2.4bpp.lz");
static const u8 sSmeargleGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_27_3.4bpp.lz");
static const ax_sprite sSmeargleSprites27[] = {
	{NULL, 32}, 
	{sSmeargleGfx27, ARRAY_COUNT(sSmeargleGfx27)}, 
	{NULL, 32}, 
	{sSmeargleGfx27_1, ARRAY_COUNT(sSmeargleGfx27_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx27_2, ARRAY_COUNT(sSmeargleGfx27_2)}, 
	{NULL, 32}, 
	{sSmeargleGfx27_3, ARRAY_COUNT(sSmeargleGfx27_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_28.4bpp.lz");
static const u8 sSmeargleGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_28_1.4bpp.lz");
static const u8 sSmeargleGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_28_2.4bpp.lz");
static const u8 sSmeargleGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_28_3.4bpp.lz");
static const ax_sprite sSmeargleSprites28[] = {
	{NULL, 32}, 
	{sSmeargleGfx28, ARRAY_COUNT(sSmeargleGfx28)}, 
	{NULL, 64}, 
	{sSmeargleGfx28_1, ARRAY_COUNT(sSmeargleGfx28_1)}, 
	{NULL, 64}, 
	{sSmeargleGfx28_2, ARRAY_COUNT(sSmeargleGfx28_2)}, 
	{NULL, 32}, 
	{sSmeargleGfx28_3, ARRAY_COUNT(sSmeargleGfx28_3)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_29.4bpp.lz");
static const u8 sSmeargleGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_29_1.4bpp.lz");
static const u8 sSmeargleGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_29_2.4bpp.lz");
static const u8 sSmeargleGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_29_3.4bpp.lz");
static const ax_sprite sSmeargleSprites29[] = {
	{sSmeargleGfx29, ARRAY_COUNT(sSmeargleGfx29)}, 
	{NULL, 32}, 
	{sSmeargleGfx29_1, ARRAY_COUNT(sSmeargleGfx29_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx29_2, ARRAY_COUNT(sSmeargleGfx29_2)}, 
	{NULL, 32}, 
	{sSmeargleGfx29_3, ARRAY_COUNT(sSmeargleGfx29_3)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_30.4bpp.lz");
static const u8 sSmeargleGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_30_1.4bpp.lz");
static const u8 sSmeargleGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_30_2.4bpp.lz");
static const u8 sSmeargleGfx30_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_30_3.4bpp.lz");
static const ax_sprite sSmeargleSprites30[] = {
	{NULL, 32}, 
	{sSmeargleGfx30, ARRAY_COUNT(sSmeargleGfx30)}, 
	{NULL, 64}, 
	{sSmeargleGfx30_1, ARRAY_COUNT(sSmeargleGfx30_1)}, 
	{NULL, 64}, 
	{sSmeargleGfx30_2, ARRAY_COUNT(sSmeargleGfx30_2)}, 
	{NULL, 32}, 
	{sSmeargleGfx30_3, ARRAY_COUNT(sSmeargleGfx30_3)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_31.4bpp.lz");
static const u8 sSmeargleGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_31_1.4bpp.lz");
static const u8 sSmeargleGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_31_2.4bpp.lz");
static const u8 sSmeargleGfx31_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_31_3.4bpp.lz");
static const ax_sprite sSmeargleSprites31[] = {
	{NULL, 32}, 
	{sSmeargleGfx31, ARRAY_COUNT(sSmeargleGfx31)}, 
	{NULL, 32}, 
	{sSmeargleGfx31_1, ARRAY_COUNT(sSmeargleGfx31_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx31_2, ARRAY_COUNT(sSmeargleGfx31_2)}, 
	{NULL, 32}, 
	{sSmeargleGfx31_3, ARRAY_COUNT(sSmeargleGfx31_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_32.4bpp.lz");
static const ax_sprite sSmeargleSprites32[] = {
	{sSmeargleGfx32, ARRAY_COUNT(sSmeargleGfx32)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_33.4bpp.lz");
static const u8 sSmeargleGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_33_1.4bpp.lz");
static const ax_sprite sSmeargleSprites33[] = {
	{sSmeargleGfx33, ARRAY_COUNT(sSmeargleGfx33)}, 
	{NULL, 32}, 
	{sSmeargleGfx33_1, ARRAY_COUNT(sSmeargleGfx33_1)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_34.4bpp.lz");
static const ax_sprite sSmeargleSprites34[] = {
	{sSmeargleGfx34, ARRAY_COUNT(sSmeargleGfx34)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_35.4bpp.lz");
static const u8 sSmeargleGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_35_1.4bpp.lz");
static const ax_sprite sSmeargleSprites35[] = {
	{sSmeargleGfx35, ARRAY_COUNT(sSmeargleGfx35)}, 
	{NULL, 32}, 
	{sSmeargleGfx35_1, ARRAY_COUNT(sSmeargleGfx35_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_36.4bpp.lz");
static const u8 sSmeargleGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_36_1.4bpp.lz");
static const u8 sSmeargleGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_36_2.4bpp.lz");
static const u8 sSmeargleGfx36_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_36_3.4bpp.lz");
static const ax_sprite sSmeargleSprites36[] = {
	{NULL, 64}, 
	{sSmeargleGfx36, ARRAY_COUNT(sSmeargleGfx36)}, 
	{NULL, 64}, 
	{sSmeargleGfx36_1, ARRAY_COUNT(sSmeargleGfx36_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx36_2, ARRAY_COUNT(sSmeargleGfx36_2)}, 
	{NULL, 32}, 
	{sSmeargleGfx36_3, ARRAY_COUNT(sSmeargleGfx36_3)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_37.4bpp.lz");
static const u8 sSmeargleGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_37_1.4bpp.lz");
static const ax_sprite sSmeargleSprites37[] = {
	{NULL, 32}, 
	{sSmeargleGfx37, ARRAY_COUNT(sSmeargleGfx37)}, 
	{NULL, 64}, 
	{sSmeargleGfx37_1, ARRAY_COUNT(sSmeargleGfx37_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_38.4bpp.lz");
static const u8 sSmeargleGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_38_1.4bpp.lz");
static const u8 sSmeargleGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_38_2.4bpp.lz");
static const ax_sprite sSmeargleSprites38[] = {
	{NULL, 32}, 
	{sSmeargleGfx38, ARRAY_COUNT(sSmeargleGfx38)}, 
	{NULL, 64}, 
	{sSmeargleGfx38_1, ARRAY_COUNT(sSmeargleGfx38_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx38_2, ARRAY_COUNT(sSmeargleGfx38_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_39.4bpp.lz");
static const u8 sSmeargleGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_39_1.4bpp.lz");
static const u8 sSmeargleGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_39_2.4bpp.lz");
static const u8 sSmeargleGfx39_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_39_3.4bpp.lz");
static const ax_sprite sSmeargleSprites39[] = {
	{NULL, 32}, 
	{sSmeargleGfx39, ARRAY_COUNT(sSmeargleGfx39)}, 
	{NULL, 64}, 
	{sSmeargleGfx39_1, ARRAY_COUNT(sSmeargleGfx39_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx39_2, ARRAY_COUNT(sSmeargleGfx39_2)}, 
	{NULL, 32}, 
	{sSmeargleGfx39_3, ARRAY_COUNT(sSmeargleGfx39_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_40.4bpp.lz");
static const u8 sSmeargleGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_40_1.4bpp.lz");
static const ax_sprite sSmeargleSprites40[] = {
	{NULL, 32}, 
	{sSmeargleGfx40, ARRAY_COUNT(sSmeargleGfx40)}, 
	{NULL, 32}, 
	{sSmeargleGfx40_1, ARRAY_COUNT(sSmeargleGfx40_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_41.4bpp.lz");
static const u8 sSmeargleGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_41_1.4bpp.lz");
static const u8 sSmeargleGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_41_2.4bpp.lz");
static const ax_sprite sSmeargleSprites41[] = {
	{NULL, 32}, 
	{sSmeargleGfx41, ARRAY_COUNT(sSmeargleGfx41)}, 
	{NULL, 64}, 
	{sSmeargleGfx41_1, ARRAY_COUNT(sSmeargleGfx41_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx41_2, ARRAY_COUNT(sSmeargleGfx41_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_42.4bpp.lz");
static const u8 sSmeargleGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_42_1.4bpp.lz");
static const u8 sSmeargleGfx42_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_42_2.4bpp.lz");
static const u8 sSmeargleGfx42_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_42_3.4bpp.lz");
static const ax_sprite sSmeargleSprites42[] = {
	{NULL, 32}, 
	{sSmeargleGfx42, ARRAY_COUNT(sSmeargleGfx42)}, 
	{NULL, 64}, 
	{sSmeargleGfx42_1, ARRAY_COUNT(sSmeargleGfx42_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx42_2, ARRAY_COUNT(sSmeargleGfx42_2)}, 
	{NULL, 32}, 
	{sSmeargleGfx42_3, ARRAY_COUNT(sSmeargleGfx42_3)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_43.4bpp.lz");
static const u8 sSmeargleGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_43_1.4bpp.lz");
static const u8 sSmeargleGfx43_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_43_2.4bpp.lz");
static const u8 sSmeargleGfx43_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_43_3.4bpp.lz");
static const ax_sprite sSmeargleSprites43[] = {
	{sSmeargleGfx43, ARRAY_COUNT(sSmeargleGfx43)}, 
	{NULL, 32}, 
	{sSmeargleGfx43_1, ARRAY_COUNT(sSmeargleGfx43_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx43_2, ARRAY_COUNT(sSmeargleGfx43_2)}, 
	{NULL, 32}, 
	{sSmeargleGfx43_3, ARRAY_COUNT(sSmeargleGfx43_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_44.4bpp.lz");
static const u8 sSmeargleGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_44_1.4bpp.lz");
static const u8 sSmeargleGfx44_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_44_2.4bpp.lz");
static const u8 sSmeargleGfx44_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_44_3.4bpp.lz");
static const ax_sprite sSmeargleSprites44[] = {
	{NULL, 32}, 
	{sSmeargleGfx44, ARRAY_COUNT(sSmeargleGfx44)}, 
	{NULL, 32}, 
	{sSmeargleGfx44_1, ARRAY_COUNT(sSmeargleGfx44_1)}, 
	{NULL, 64}, 
	{sSmeargleGfx44_2, ARRAY_COUNT(sSmeargleGfx44_2)}, 
	{NULL, 64}, 
	{sSmeargleGfx44_3, ARRAY_COUNT(sSmeargleGfx44_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_45.4bpp.lz");
static const u8 sSmeargleGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_45_1.4bpp.lz");
static const u8 sSmeargleGfx45_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_45_2.4bpp.lz");
static const ax_sprite sSmeargleSprites45[] = {
	{NULL, 32}, 
	{sSmeargleGfx45, ARRAY_COUNT(sSmeargleGfx45)}, 
	{NULL, 32}, 
	{sSmeargleGfx45_1, ARRAY_COUNT(sSmeargleGfx45_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx45_2, ARRAY_COUNT(sSmeargleGfx45_2)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_46.4bpp.lz");
static const ax_sprite sSmeargleSprites46[] = {
	{sSmeargleGfx46, ARRAY_COUNT(sSmeargleGfx46)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_47.4bpp.lz");
static const ax_sprite sSmeargleSprites47[] = {
	{sSmeargleGfx47, ARRAY_COUNT(sSmeargleGfx47)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_48.4bpp.lz");
static const ax_sprite sSmeargleSprites48[] = {
	{sSmeargleGfx48, ARRAY_COUNT(sSmeargleGfx48)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_49.4bpp.lz");
static const u8 sSmeargleGfx49_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_49_1.4bpp.lz");
static const u8 sSmeargleGfx49_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_49_2.4bpp.lz");
static const u8 sSmeargleGfx49_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_49_3.4bpp.lz");
static const ax_sprite sSmeargleSprites49[] = {
	{NULL, 32}, 
	{sSmeargleGfx49, ARRAY_COUNT(sSmeargleGfx49)}, 
	{NULL, 32}, 
	{sSmeargleGfx49_1, ARRAY_COUNT(sSmeargleGfx49_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx49_2, ARRAY_COUNT(sSmeargleGfx49_2)}, 
	{NULL, 32}, 
	{sSmeargleGfx49_3, ARRAY_COUNT(sSmeargleGfx49_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_50.4bpp.lz");
static const u8 sSmeargleGfx50_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_50_1.4bpp.lz");
static const u8 sSmeargleGfx50_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_50_2.4bpp.lz");
static const u8 sSmeargleGfx50_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_50_3.4bpp.lz");
static const ax_sprite sSmeargleSprites50[] = {
	{NULL, 32}, 
	{sSmeargleGfx50, ARRAY_COUNT(sSmeargleGfx50)}, 
	{NULL, 64}, 
	{sSmeargleGfx50_1, ARRAY_COUNT(sSmeargleGfx50_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx50_2, ARRAY_COUNT(sSmeargleGfx50_2)}, 
	{NULL, 32}, 
	{sSmeargleGfx50_3, ARRAY_COUNT(sSmeargleGfx50_3)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_51.4bpp.lz");
static const ax_sprite sSmeargleSprites51[] = {
	{sSmeargleGfx51, ARRAY_COUNT(sSmeargleGfx51)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_52.4bpp.lz");
static const ax_sprite sSmeargleSprites52[] = {
	{NULL, 32}, 
	{sSmeargleGfx52, ARRAY_COUNT(sSmeargleGfx52)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_53.4bpp.lz");
static const ax_sprite sSmeargleSprites53[] = {
	{sSmeargleGfx53, ARRAY_COUNT(sSmeargleGfx53)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_54.4bpp.lz");
static const ax_sprite sSmeargleSprites54[] = {
	{sSmeargleGfx54, ARRAY_COUNT(sSmeargleGfx54)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_55.4bpp.lz");
static const u8 sSmeargleGfx55_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_55_1.4bpp.lz");
static const u8 sSmeargleGfx55_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_55_2.4bpp.lz");
static const ax_sprite sSmeargleSprites55[] = {
	{NULL, 32}, 
	{sSmeargleGfx55, ARRAY_COUNT(sSmeargleGfx55)}, 
	{NULL, 32}, 
	{sSmeargleGfx55_1, ARRAY_COUNT(sSmeargleGfx55_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx55_2, ARRAY_COUNT(sSmeargleGfx55_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_56.4bpp.lz");
static const u8 sSmeargleGfx56_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_56_1.4bpp.lz");
static const ax_sprite sSmeargleSprites56[] = {
	{sSmeargleGfx56, ARRAY_COUNT(sSmeargleGfx56)}, 
	{NULL, 64}, 
	{sSmeargleGfx56_1, ARRAY_COUNT(sSmeargleGfx56_1)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_57.4bpp.lz");
static const u8 sSmeargleGfx57_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_57_1.4bpp.lz");
static const u8 sSmeargleGfx57_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_57_2.4bpp.lz");
static const ax_sprite sSmeargleSprites57[] = {
	{NULL, 32}, 
	{sSmeargleGfx57, ARRAY_COUNT(sSmeargleGfx57)}, 
	{NULL, 32}, 
	{sSmeargleGfx57_1, ARRAY_COUNT(sSmeargleGfx57_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx57_2, ARRAY_COUNT(sSmeargleGfx57_2)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_58.4bpp.lz");
static const u8 sSmeargleGfx58_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_58_1.4bpp.lz");
static const ax_sprite sSmeargleSprites58[] = {
	{sSmeargleGfx58, ARRAY_COUNT(sSmeargleGfx58)}, 
	{NULL, 64}, 
	{sSmeargleGfx58_1, ARRAY_COUNT(sSmeargleGfx58_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_59.4bpp.lz");
static const u8 sSmeargleGfx59_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_59_1.4bpp.lz");
static const u8 sSmeargleGfx59_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_59_2.4bpp.lz");
static const u8 sSmeargleGfx59_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_59_3.4bpp.lz");
static const ax_sprite sSmeargleSprites59[] = {
	{NULL, 32}, 
	{sSmeargleGfx59, ARRAY_COUNT(sSmeargleGfx59)}, 
	{NULL, 32}, 
	{sSmeargleGfx59_1, ARRAY_COUNT(sSmeargleGfx59_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx59_2, ARRAY_COUNT(sSmeargleGfx59_2)}, 
	{NULL, 32}, 
	{sSmeargleGfx59_3, ARRAY_COUNT(sSmeargleGfx59_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_60.4bpp.lz");
static const u8 sSmeargleGfx60_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_60_1.4bpp.lz");
static const ax_sprite sSmeargleSprites60[] = {
	{sSmeargleGfx60, ARRAY_COUNT(sSmeargleGfx60)}, 
	{NULL, 32}, 
	{sSmeargleGfx60_1, ARRAY_COUNT(sSmeargleGfx60_1)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_61.4bpp.lz");
static const u8 sSmeargleGfx61_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_61_1.4bpp.lz");
static const u8 sSmeargleGfx61_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_61_2.4bpp.lz");
static const u8 sSmeargleGfx61_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_61_3.4bpp.lz");
static const ax_sprite sSmeargleSprites61[] = {
	{sSmeargleGfx61, ARRAY_COUNT(sSmeargleGfx61)}, 
	{NULL, 32}, 
	{sSmeargleGfx61_1, ARRAY_COUNT(sSmeargleGfx61_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx61_2, ARRAY_COUNT(sSmeargleGfx61_2)}, 
	{NULL, 32}, 
	{sSmeargleGfx61_3, ARRAY_COUNT(sSmeargleGfx61_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_62.4bpp.lz");
static const u8 sSmeargleGfx62_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_62_1.4bpp.lz");
static const ax_sprite sSmeargleSprites62[] = {
	{sSmeargleGfx62, ARRAY_COUNT(sSmeargleGfx62)}, 
	{NULL, 32}, 
	{sSmeargleGfx62_1, ARRAY_COUNT(sSmeargleGfx62_1)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_63.4bpp.lz");
static const u8 sSmeargleGfx63_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_63_1.4bpp.lz");
static const u8 sSmeargleGfx63_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_63_2.4bpp.lz");
static const u8 sSmeargleGfx63_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_63_3.4bpp.lz");
static const ax_sprite sSmeargleSprites63[] = {
	{NULL, 32}, 
	{sSmeargleGfx63, ARRAY_COUNT(sSmeargleGfx63)}, 
	{NULL, 64}, 
	{sSmeargleGfx63_1, ARRAY_COUNT(sSmeargleGfx63_1)}, 
	{NULL, 64}, 
	{sSmeargleGfx63_2, ARRAY_COUNT(sSmeargleGfx63_2)}, 
	{NULL, 64}, 
	{sSmeargleGfx63_3, ARRAY_COUNT(sSmeargleGfx63_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_64.4bpp.lz");
static const ax_sprite sSmeargleSprites64[] = {
	{NULL, 128}, 
	{sSmeargleGfx64, ARRAY_COUNT(sSmeargleGfx64)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_65.4bpp.lz");
static const u8 sSmeargleGfx65_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_65_1.4bpp.lz");
static const u8 sSmeargleGfx65_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_65_2.4bpp.lz");
static const u8 sSmeargleGfx65_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_65_3.4bpp.lz");
static const ax_sprite sSmeargleSprites65[] = {
	{NULL, 32}, 
	{sSmeargleGfx65, ARRAY_COUNT(sSmeargleGfx65)}, 
	{NULL, 64}, 
	{sSmeargleGfx65_1, ARRAY_COUNT(sSmeargleGfx65_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx65_2, ARRAY_COUNT(sSmeargleGfx65_2)}, 
	{NULL, 64}, 
	{sSmeargleGfx65_3, ARRAY_COUNT(sSmeargleGfx65_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_66.4bpp.lz");
static const ax_sprite sSmeargleSprites66[] = {
	{NULL, 64}, 
	{sSmeargleGfx66, ARRAY_COUNT(sSmeargleGfx66)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_67.4bpp.lz");
static const u8 sSmeargleGfx67_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_67_1.4bpp.lz");
static const u8 sSmeargleGfx67_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_67_2.4bpp.lz");
static const u8 sSmeargleGfx67_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_67_3.4bpp.lz");
static const ax_sprite sSmeargleSprites67[] = {
	{NULL, 32}, 
	{sSmeargleGfx67, ARRAY_COUNT(sSmeargleGfx67)}, 
	{NULL, 64}, 
	{sSmeargleGfx67_1, ARRAY_COUNT(sSmeargleGfx67_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx67_2, ARRAY_COUNT(sSmeargleGfx67_2)}, 
	{NULL, 64}, 
	{sSmeargleGfx67_3, ARRAY_COUNT(sSmeargleGfx67_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_68.4bpp.lz");
static const ax_sprite sSmeargleSprites68[] = {
	{NULL, 64}, 
	{sSmeargleGfx68, ARRAY_COUNT(sSmeargleGfx68)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_69.4bpp.lz");
static const u8 sSmeargleGfx69_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_69_1.4bpp.lz");
static const ax_sprite sSmeargleSprites69[] = {
	{NULL, 32}, 
	{sSmeargleGfx69, ARRAY_COUNT(sSmeargleGfx69)}, 
	{NULL, 64}, 
	{sSmeargleGfx69_1, ARRAY_COUNT(sSmeargleGfx69_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_70.4bpp.lz");
static const u8 sSmeargleGfx70_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_70_1.4bpp.lz");
static const u8 sSmeargleGfx70_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_70_2.4bpp.lz");
static const ax_sprite sSmeargleSprites70[] = {
	{sSmeargleGfx70, ARRAY_COUNT(sSmeargleGfx70)}, 
	{NULL, 64}, 
	{sSmeargleGfx70_1, ARRAY_COUNT(sSmeargleGfx70_1)}, 
	{NULL, 32}, 
	{sSmeargleGfx70_2, ARRAY_COUNT(sSmeargleGfx70_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_71.4bpp.lz");
static const u8 sSmeargleGfx71_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_71_1.4bpp.lz");
static const u8 sSmeargleGfx71_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_71_2.4bpp.lz");
static const u8 sSmeargleGfx71_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_71_3.4bpp.lz");
static const ax_sprite sSmeargleSprites71[] = {
	{NULL, 32}, 
	{sSmeargleGfx71, ARRAY_COUNT(sSmeargleGfx71)}, 
	{NULL, 64}, 
	{sSmeargleGfx71_1, ARRAY_COUNT(sSmeargleGfx71_1)}, 
	{NULL, 64}, 
	{sSmeargleGfx71_2, ARRAY_COUNT(sSmeargleGfx71_2)}, 
	{NULL, 32}, 
	{sSmeargleGfx71_3, ARRAY_COUNT(sSmeargleGfx71_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx72[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_72.4bpp.lz");
static const ax_sprite sSmeargleSprites72[] = {
	{sSmeargleGfx72, ARRAY_COUNT(sSmeargleGfx72)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx73[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_73.4bpp.lz");
static const ax_sprite sSmeargleSprites73[] = {
	{sSmeargleGfx73, ARRAY_COUNT(sSmeargleGfx73)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx74[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_74.4bpp.lz");
static const ax_sprite sSmeargleSprites74[] = {
	{sSmeargleGfx74, ARRAY_COUNT(sSmeargleGfx74)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx75[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_75.4bpp.lz");
static const ax_sprite sSmeargleSprites75[] = {
	{sSmeargleGfx75, ARRAY_COUNT(sSmeargleGfx75)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx76[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_76.4bpp.lz");
static const ax_sprite sSmeargleSprites76[] = {
	{sSmeargleGfx76, ARRAY_COUNT(sSmeargleGfx76)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx77[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_77.4bpp.lz");
static const ax_sprite sSmeargleSprites77[] = {
	{sSmeargleGfx77, ARRAY_COUNT(sSmeargleGfx77)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx78[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_78.4bpp.lz");
static const ax_sprite sSmeargleSprites78[] = {
	{sSmeargleGfx78, ARRAY_COUNT(sSmeargleGfx78)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx79[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_79.4bpp.lz");
static const ax_sprite sSmeargleSprites79[] = {
	{sSmeargleGfx79, ARRAY_COUNT(sSmeargleGfx79)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx80[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_80.4bpp.lz");
static const ax_sprite sSmeargleSprites80[] = {
	{sSmeargleGfx80, ARRAY_COUNT(sSmeargleGfx80)}, 
	{NULL, 0}
};
static const u8 sSmeargleGfx81[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/smeargle/sprite_81.4bpp.lz");
static const ax_sprite sSmeargleSprites81[] = {
	{sSmeargleGfx81, ARRAY_COUNT(sSmeargleGfx81)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesSmeargle[] = {
	sSmearglePose1,
	sSmearglePose2,
	sSmearglePose3,
	sSmearglePose4,
	sSmearglePose5,
	sSmearglePose6,
	sSmearglePose7,
	sSmearglePose8,
	sSmearglePose9,
	sSmearglePose10,
	sSmearglePose11,
	sSmearglePose12,
	sSmearglePose13,
	sSmearglePose14,
	sSmearglePose15,
	sSmearglePose16,
	sSmearglePose17,
	sSmearglePose18,
	sSmearglePose19,
	sSmearglePose20,
	sSmearglePose21,
	sSmearglePose22,
	sSmearglePose23,
	sSmearglePose24,
	sSmearglePose1,
	sSmearglePose2,
	sSmearglePose3,
	sSmearglePose4,
	sSmearglePose5,
	sSmearglePose6,
	sSmearglePose7,
	sSmearglePose8,
	sSmearglePose9,
	sSmearglePose10,
	sSmearglePose11,
	sSmearglePose12,
	sSmearglePose13,
	sSmearglePose14,
	sSmearglePose15,
	sSmearglePose16,
	sSmearglePose17,
	sSmearglePose18,
	sSmearglePose19,
	sSmearglePose20,
	sSmearglePose21,
	sSmearglePose22,
	sSmearglePose23,
	sSmearglePose24,
	sSmearglePose1,
	sSmearglePose2,
	sSmearglePose3,
	sSmearglePose4,
	sSmearglePose5,
	sSmearglePose6,
	sSmearglePose7,
	sSmearglePose8,
	sSmearglePose9,
	sSmearglePose10,
	sSmearglePose11,
	sSmearglePose12,
	sSmearglePose13,
	sSmearglePose14,
	sSmearglePose15,
	sSmearglePose16,
	sSmearglePose17,
	sSmearglePose18,
	sSmearglePose19,
	sSmearglePose20,
	sSmearglePose21,
	sSmearglePose22,
	sSmearglePose23,
	sSmearglePose24,
	sSmearglePose1,
	sSmearglePose74,
	sSmearglePose75,
	sSmearglePose76,
	sSmearglePose4,
	sSmearglePose78,
	sSmearglePose79,
	sSmearglePose80,
	sSmearglePose7,
	sSmearglePose82,
	sSmearglePose83,
	sSmearglePose84,
	sSmearglePose10,
	sSmearglePose86,
	sSmearglePose87,
	sSmearglePose88,
	sSmearglePose13,
	sSmearglePose90,
	sSmearglePose91,
	sSmearglePose92,
	sSmearglePose16,
	sSmearglePose94,
	sSmearglePose95,
	sSmearglePose96,
	sSmearglePose19,
	sSmearglePose98,
	sSmearglePose99,
	sSmearglePose100,
	sSmearglePose22,
	sSmearglePose102,
	sSmearglePose103,
	sSmearglePose104,
	sSmearglePose1,
	sSmearglePose74,
	sSmearglePose76,
	sSmearglePose108,
	sSmearglePose109,
	sSmearglePose4,
	sSmearglePose78,
	sSmearglePose80,
	sSmearglePose113,
	sSmearglePose114,
	sSmearglePose7,
	sSmearglePose82,
	sSmearglePose84,
	sSmearglePose118,
	sSmearglePose119,
	sSmearglePose10,
	sSmearglePose86,
	sSmearglePose88,
	sSmearglePose123,
	sSmearglePose124,
	sSmearglePose13,
	sSmearglePose90,
	sSmearglePose92,
	sSmearglePose128,
	sSmearglePose129,
	sSmearglePose16,
	sSmearglePose94,
	sSmearglePose96,
	sSmearglePose133,
	sSmearglePose134,
	sSmearglePose19,
	sSmearglePose98,
	sSmearglePose100,
	sSmearglePose138,
	sSmearglePose139,
	sSmearglePose22,
	sSmearglePose102,
	sSmearglePose104,
	sSmearglePose143,
	sSmearglePose144,
	sSmearglePose145,
	sSmearglePose146,
	sSmearglePose147,
	sSmearglePose148,
	sSmearglePose149,
	sSmearglePose150,
	sSmearglePose151,
	sSmearglePose152,
	sSmearglePose153,
	sSmearglePose154,
	sSmearglePose1,
	sSmearglePose156,
	sSmearglePose4,
	sSmearglePose78,
	sSmearglePose7,
	sSmearglePose160,
	sSmearglePose10,
	sSmearglePose86,
	sSmearglePose13,
	sSmearglePose164,
	sSmearglePose16,
	sSmearglePose94,
	sSmearglePose19,
	sSmearglePose168,
	sSmearglePose22,
	sSmearglePose170,
	sSmearglePose76,
	sSmearglePose104,
	sSmearglePose173,
	sSmearglePose96,
	sSmearglePose175,
	sSmearglePose176,
	sSmearglePose84,
	sSmearglePose80,
	sSmearglePose74,
	sSmearglePose170,
	sSmearglePose168,
	sSmearglePose94,
	sSmearglePose164,
	sSmearglePose86,
	sSmearglePose160,
	sSmearglePose186,
	sSmearglePose1,
	sSmearglePose74,
	sSmearglePose189,
	sSmearglePose4,
	sSmearglePose78,
	sSmearglePose80,
	sSmearglePose7,
	sSmearglePose82,
	sSmearglePose84,
	sSmearglePose10,
	sSmearglePose86,
	sSmearglePose88,
	sSmearglePose13,
	sSmearglePose90,
	sSmearglePose92,
	sSmearglePose16,
	sSmearglePose94,
	sSmearglePose96,
	sSmearglePose19,
	sSmearglePose98,
	sSmearglePose100,
	sSmearglePose22,
	sSmearglePose102,
	sSmearglePose104,
	sSmearglePose75,
	sSmearglePose212,
	sSmearglePose213,
	sSmearglePose214,
	sSmearglePose215,
	sSmearglePose216,
	sSmearglePose217,
	sSmearglePose218,
	sSmearglePose1,
	sSmearglePose22,
	sSmearglePose19,
	sSmearglePose16,
	sSmearglePose13,
	sSmearglePose10,
	sSmearglePose7,
	sSmearglePose4,
};

static const struct PositionSets sAxPositionsSmeargle[] = {
	[0] = { .set = { {0, -9}, {-11, -7}, {7, -3}, {0, -8} } },
	[1] = { .set = { {1, -7}, {-9, -8}, {4, -3}, {0, -6} } },
	[2] = { .set = { {-1, -7}, {-9, -5}, {7, -4}, {0, -6} } },
	[3] = { .set = { {4, -10}, {-8, -6}, {5, -4}, {1, -9} } },
	[4] = { .set = { {4, -8}, {-8, -7}, {7, -3}, {1, -7} } },
	[5] = { .set = { {5, -9}, {-5, -6}, {-1, -5}, {1, -7} } },
	[6] = { .set = { {5, -11}, {-4, -6}, {1, -5}, {1, -8} } },
	[7] = { .set = { {5, -9}, {-6, -5}, {6, -3}, {1, -7} } },
	[8] = { .set = { {4, -10}, {3, -5}, {-7, -3}, {0, -7} } },
	[9] = { .set = { {5, -12}, {7, -6}, {-5, -5}, {1, -10} } },
	[10] = { .set = { {6, -11}, {4, -4}, {0, -5}, {1, -9} } },
	[11] = { .set = { {4, -10}, {7, -7}, {-7, -5}, {0, -8} } },
	[12] = { .set = { {0, -12}, {11, -8}, {-7, -4}, {0, -10} } },
	[13] = { .set = { {-1, -10}, {10, -7}, {-6, -6}, {0, -8} } },
	[14] = { .set = { {1, -10}, {9, -10}, {-6, -4}, {1, -8} } },
	[15] = { .set = { {-5, -12}, {6, -12}, {-5, -3}, {0, -8} } },
	[16] = { .set = { {-6, -11}, {8, -10}, {-6, -6}, {-1, -9} } },
	[17] = { .set = { {-4, -11}, {0, -10}, {1, -3}, {0, -8} } },
	[18] = { .set = { {-4, -10}, {-3, -11}, {2, -2}, {-1, -7} } },
	[19] = { .set = { {-5, -9}, {0, -9}, {-4, -3}, {0, -6} } },
	[20] = { .set = { {-6, -10}, {-8, -7}, {6, -3}, {-1, -7} } },
	[21] = { .set = { {-3, -10}, {-8, -10}, {5, -2}, {0, -8} } },
	[22] = { .set = { {-3, -8}, {-5, -6}, {0, -2}, {-1, -7} } },
	[23] = { .set = { {-4, -9}, {-9, -7}, {9, -5}, {0, -7} } },
	[24] = { .set = { {0, -9}, {-11, -7}, {7, -3}, {0, -8} } },
	[25] = { .set = { {1, -7}, {-9, -8}, {4, -3}, {0, -6} } },
	[26] = { .set = { {-1, -7}, {-9, -5}, {7, -4}, {0, -6} } },
	[27] = { .set = { {4, -10}, {-8, -6}, {5, -4}, {1, -9} } },
	[28] = { .set = { {4, -8}, {-8, -7}, {7, -3}, {1, -7} } },
	[29] = { .set = { {5, -9}, {-5, -6}, {-1, -5}, {1, -7} } },
	[30] = { .set = { {5, -11}, {-4, -6}, {1, -5}, {1, -8} } },
	[31] = { .set = { {5, -9}, {-6, -5}, {6, -3}, {1, -7} } },
	[32] = { .set = { {4, -10}, {3, -5}, {-7, -3}, {0, -7} } },
	[33] = { .set = { {5, -12}, {7, -6}, {-5, -5}, {1, -10} } },
	[34] = { .set = { {6, -11}, {4, -4}, {0, -5}, {1, -9} } },
	[35] = { .set = { {4, -10}, {7, -7}, {-7, -5}, {0, -8} } },
	[36] = { .set = { {0, -12}, {11, -8}, {-7, -4}, {0, -10} } },
	[37] = { .set = { {-1, -10}, {10, -7}, {-6, -6}, {0, -8} } },
	[38] = { .set = { {1, -10}, {9, -10}, {-6, -4}, {1, -8} } },
	[39] = { .set = { {-5, -12}, {6, -12}, {-5, -3}, {0, -8} } },
	[40] = { .set = { {-6, -11}, {8, -10}, {-6, -6}, {-1, -9} } },
	[41] = { .set = { {-4, -11}, {0, -10}, {1, -3}, {0, -8} } },
	[42] = { .set = { {-4, -10}, {-3, -11}, {2, -2}, {-1, -7} } },
	[43] = { .set = { {-5, -9}, {0, -9}, {-4, -3}, {0, -6} } },
	[44] = { .set = { {-6, -10}, {-8, -7}, {6, -3}, {-1, -7} } },
	[45] = { .set = { {-3, -10}, {-8, -10}, {5, -2}, {0, -8} } },
	[46] = { .set = { {-3, -8}, {-5, -6}, {0, -2}, {-1, -7} } },
	[47] = { .set = { {-4, -9}, {-9, -7}, {9, -5}, {0, -7} } },
	[48] = { .set = { {0, -9}, {-11, -7}, {7, -3}, {0, -8} } },
	[49] = { .set = { {1, -7}, {-9, -8}, {4, -3}, {0, -6} } },
	[50] = { .set = { {-1, -7}, {-9, -5}, {7, -4}, {0, -6} } },
	[51] = { .set = { {4, -10}, {-8, -6}, {5, -4}, {1, -9} } },
	[52] = { .set = { {4, -8}, {-8, -7}, {7, -3}, {1, -7} } },
	[53] = { .set = { {5, -9}, {-5, -6}, {-1, -5}, {1, -7} } },
	[54] = { .set = { {5, -11}, {-4, -6}, {1, -5}, {1, -8} } },
	[55] = { .set = { {5, -9}, {-6, -5}, {6, -3}, {1, -7} } },
	[56] = { .set = { {4, -10}, {3, -5}, {-7, -3}, {0, -7} } },
	[57] = { .set = { {5, -12}, {7, -6}, {-5, -5}, {1, -10} } },
	[58] = { .set = { {6, -11}, {4, -4}, {0, -5}, {1, -9} } },
	[59] = { .set = { {4, -10}, {7, -7}, {-7, -5}, {0, -8} } },
	[60] = { .set = { {0, -12}, {11, -8}, {-7, -4}, {0, -10} } },
	[61] = { .set = { {-1, -10}, {10, -7}, {-6, -6}, {0, -8} } },
	[62] = { .set = { {1, -10}, {9, -10}, {-6, -4}, {1, -8} } },
	[63] = { .set = { {-5, -12}, {6, -12}, {-5, -3}, {0, -8} } },
	[64] = { .set = { {-6, -11}, {8, -10}, {-6, -6}, {-1, -9} } },
	[65] = { .set = { {-4, -11}, {0, -10}, {1, -3}, {0, -8} } },
	[66] = { .set = { {-4, -10}, {-3, -11}, {2, -2}, {-1, -7} } },
	[67] = { .set = { {-5, -9}, {0, -9}, {-4, -3}, {0, -6} } },
	[68] = { .set = { {-6, -10}, {-8, -7}, {6, -3}, {-1, -7} } },
	[69] = { .set = { {-3, -10}, {-8, -10}, {5, -2}, {0, -8} } },
	[70] = { .set = { {-3, -8}, {-5, -6}, {0, -2}, {-1, -7} } },
	[71] = { .set = { {-4, -9}, {-9, -7}, {9, -5}, {0, -7} } },
	[72] = { .set = { {0, -9}, {-11, -7}, {7, -3}, {0, -8} } },
	[73] = { .set = { {-1, -10}, {-7, -5}, {6, -8}, {0, -8} } },
	[74] = { .set = { {-4, 7}, {-5, -5}, {10, -10}, {0, -7} } },
	[75] = { .set = { {-4, -2}, {-5, -5}, {10, -10}, {0, -7} } },
	[76] = { .set = { {4, -10}, {-8, -6}, {5, -4}, {1, -9} } },
	[77] = { .set = { {3, -10}, {-6, -4}, {7, -8}, {0, -7} } },
	[78] = { .set = { {17, 8}, {1, -2}, {3, -7}, {0, -7} } },
	[79] = { .set = { {8, 0}, {1, -2}, {3, -7}, {-1, -7} } },
	[80] = { .set = { {5, -11}, {-4, -6}, {1, -5}, {1, -8} } },
	[81] = { .set = { {3, -11}, {-5, -3}, {6, -11}, {-1, -6} } },
	[82] = { .set = { {27, -8}, {7, -5}, {1, -10}, {0, -8} } },
	[83] = { .set = { {14, -7}, {6, -6}, {-3, -6}, {0, -7} } },
	[84] = { .set = { {5, -12}, {7, -6}, {-5, -5}, {1, -10} } },
	[85] = { .set = { {4, -12}, {-3, -3}, {3, -6}, {0, -7} } },
	[86] = { .set = { {19, -17}, {5, -7}, {-8, -9}, {0, -10} } },
	[87] = { .set = { {10, -11}, {5, -7}, {-8, -8}, {0, -9} } },
	[88] = { .set = { {0, -12}, {11, -8}, {-7, -4}, {0, -10} } },
	[89] = { .set = { {0, -12}, {4, -2}, {-5, -12}, {0, -5} } },
	[90] = { .set = { {5, -23}, {7, -6}, {-8, -4}, {0, -7} } },
	[91] = { .set = { {7, -10}, {6, -6}, {-8, -4}, {0, -7} } },
	[92] = { .set = { {-5, -12}, {6, -12}, {-5, -3}, {0, -8} } },
	[93] = { .set = { {-5, -12}, {6, -3}, {-7, -10}, {0, -8} } },
	[94] = { .set = { {-17, -19}, {-4, -8}, {-5, -3}, {0, -8} } },
	[95] = { .set = { {-10, -13}, {-5, -9}, {-5, -3}, {0, -8} } },
	[96] = { .set = { {-4, -10}, {-3, -11}, {2, -2}, {-1, -7} } },
	[97] = { .set = { {-2, -10}, {6, -7}, {-9, -9}, {1, -6} } },
	[98] = { .set = { {-26, -9}, {-7, -7}, {4, -4}, {1, -8} } },
	[99] = { .set = { {-14, -8}, {-6, -7}, {4, -4}, {1, -7} } },
	[100] = { .set = { {-3, -10}, {-8, -10}, {5, -2}, {0, -8} } },
	[101] = { .set = { {-4, -11}, {1, -12}, {-5, -9}, {-1, -9} } },
	[102] = { .set = { {-21, 6}, {-7, -6}, {8, -7}, {-1, -7} } },
	[103] = { .set = { {-11, -2}, {-8, -5}, {8, -7}, {-1, -7} } },
	[104] = { .set = { {0, -9}, {-11, -7}, {7, -3}, {0, -8} } },
	[105] = { .set = { {-1, -10}, {-7, -5}, {6, -8}, {0, -8} } },
	[106] = { .set = { {-4, -2}, {-5, -5}, {10, -10}, {0, -7} } },
	[107] = { .set = { {-1, -8}, {-1, 0}, {7, -8}, {-1, -7} } },
	[108] = { .set = { {-1, -8}, {-1, 0}, {7, -8}, {-1, -7} } },
	[109] = { .set = { {4, -10}, {-8, -6}, {5, -4}, {1, -9} } },
	[110] = { .set = { {3, -10}, {-6, -4}, {7, -8}, {0, -7} } },
	[111] = { .set = { {8, 0}, {1, -2}, {3, -7}, {-1, -7} } },
	[112] = { .set = { {4, -9}, {2, -3}, {-3, -6}, {-1, -8} } },
	[113] = { .set = { {4, -9}, {2, -3}, {-3, -6}, {-1, -8} } },
	[114] = { .set = { {5, -11}, {-4, -6}, {1, -5}, {1, -8} } },
	[115] = { .set = { {3, -11}, {-5, -3}, {6, -11}, {-1, -6} } },
	[116] = { .set = { {14, -7}, {6, -6}, {-3, -6}, {0, -7} } },
	[117] = { .set = { {4, -10}, {4, -3}, {-8, -5}, {-1, -9} } },
	[118] = { .set = { {4, -10}, {4, -3}, {-8, -5}, {-1, -9} } },
	[119] = { .set = { {5, -12}, {7, -6}, {-5, -5}, {1, -10} } },
	[120] = { .set = { {4, -12}, {-3, -3}, {3, -6}, {0, -7} } },
	[121] = { .set = { {10, -11}, {5, -7}, {-8, -8}, {0, -9} } },
	[122] = { .set = { {5, -12}, {5, -7}, {-5, -5}, {0, -11} } },
	[123] = { .set = { {5, -12}, {5, -7}, {-5, -5}, {0, -11} } },
	[124] = { .set = { {0, -12}, {11, -8}, {-7, -4}, {0, -10} } },
	[125] = { .set = { {0, -12}, {4, -2}, {-5, -12}, {0, -5} } },
	[126] = { .set = { {7, -10}, {6, -6}, {-8, -4}, {0, -7} } },
	[127] = { .set = { {0, -10}, {-3, -4}, {-7, -3}, {0, -7} } },
	[128] = { .set = { {0, -10}, {-3, -4}, {-7, -3}, {0, -7} } },
	[129] = { .set = { {-5, -12}, {6, -12}, {-5, -3}, {0, -8} } },
	[130] = { .set = { {-5, -12}, {6, -3}, {-7, -10}, {0, -8} } },
	[131] = { .set = { {-10, -13}, {-5, -9}, {-5, -3}, {0, -8} } },
	[132] = { .set = { {-4, -11}, {-3, -7}, {-1, -3}, {1, -9} } },
	[133] = { .set = { {-4, -11}, {-3, -7}, {-1, -3}, {1, -9} } },
	[134] = { .set = { {-4, -10}, {-3, -11}, {2, -2}, {-1, -7} } },
	[135] = { .set = { {-2, -10}, {6, -7}, {-9, -9}, {1, -6} } },
	[136] = { .set = { {-14, -8}, {-6, -7}, {4, -4}, {1, -7} } },
	[137] = { .set = { {-4, -9}, {-5, -3}, {3, -2}, {0, -7} } },
	[138] = { .set = { {-4, -9}, {-5, -3}, {3, -2}, {0, -7} } },
	[139] = { .set = { {-3, -10}, {-8, -10}, {5, -2}, {0, -8} } },
	[140] = { .set = { {-4, -11}, {1, -12}, {-5, -9}, {-1, -9} } },
	[141] = { .set = { {-11, -2}, {-8, -5}, {8, -7}, {-1, -7} } },
	[142] = { .set = { {-3, -8}, {-5, -3}, {8, -6}, {0, -7} } },
	[143] = { .set = { {-3, -8}, {-5, -3}, {8, -6}, {0, -7} } },
	[144] = { .set = { {-2, -8}, {-4, -5}, {5, 1}, {2, -7} } },
	[145] = { .set = { {-2, -7}, {-4, -5}, {5, 1}, {2, -5} } },
	[146] = { .set = { {0, -12}, {-11, -13}, {9, -13}, {0, -8} } },
	[147] = { .set = { {1, -12}, {-9, -11}, {2, -15}, {0, -8} } },
	[148] = { .set = { {1, -13}, {-8, -10}, {-6, -16}, {-1, -8} } },
	[149] = { .set = { {2, -13}, {4, -11}, {-10, -16}, {-1, -6} } },
	[150] = { .set = { {0, -10}, {11, -10}, {-11, -11}, {0, -7} } },
	[151] = { .set = { {-2, -12}, {5, -13}, {-4, -11}, {1, -7} } },
	[152] = { .set = { {0, -11}, {5, -12}, {9, -9}, {2, -8} } },
	[153] = { .set = { {1, -11}, {-4, -14}, {10, -12}, {2, -8} } },
	[154] = { .set = { {0, -9}, {-11, -7}, {7, -3}, {0, -8} } },
	[155] = { .set = { {-2, -10}, {-8, -5}, {5, -8}, {-1, -8} } },
	[156] = { .set = { {4, -10}, {-8, -6}, {5, -4}, {1, -9} } },
	[157] = { .set = { {3, -10}, {-6, -4}, {7, -8}, {0, -7} } },
	[158] = { .set = { {5, -11}, {-4, -6}, {1, -5}, {1, -8} } },
	[159] = { .set = { {4, -11}, {-4, -3}, {7, -11}, {0, -6} } },
	[160] = { .set = { {5, -12}, {7, -6}, {-5, -5}, {1, -10} } },
	[161] = { .set = { {4, -12}, {-3, -3}, {3, -6}, {0, -7} } },
	[162] = { .set = { {0, -12}, {11, -8}, {-7, -4}, {0, -10} } },
	[163] = { .set = { {0, -14}, {4, -4}, {-5, -14}, {0, -7} } },
	[164] = { .set = { {-5, -12}, {6, -12}, {-5, -3}, {0, -8} } },
	[165] = { .set = { {-5, -12}, {6, -3}, {-7, -10}, {0, -8} } },
	[166] = { .set = { {-4, -10}, {-3, -11}, {2, -2}, {-1, -7} } },
	[167] = { .set = { {-3, -10}, {5, -7}, {-10, -9}, {0, -6} } },
	[168] = { .set = { {-3, -10}, {-8, -10}, {5, -2}, {0, -8} } },
	[169] = { .set = { {-4, -10}, {1, -11}, {-5, -8}, {-1, -8} } },
	[170] = { .set = { {-4, -2}, {-5, -5}, {10, -10}, {0, -7} } },
	[171] = { .set = { {-11, -2}, {-8, -5}, {8, -7}, {-1, -7} } },
	[172] = { .set = { {-15, -8}, {-7, -7}, {3, -4}, {0, -7} } },
	[173] = { .set = { {-10, -13}, {-5, -9}, {-5, -3}, {0, -8} } },
	[174] = { .set = { {7, -11}, {6, -7}, {-8, -5}, {0, -8} } },
	[175] = { .set = { {10, -10}, {5, -6}, {-8, -7}, {0, -8} } },
	[176] = { .set = { {14, -7}, {6, -6}, {-3, -6}, {0, -7} } },
	[177] = { .set = { {8, 0}, {1, -2}, {3, -7}, {-1, -7} } },
	[178] = { .set = { {-1, -10}, {-7, -5}, {6, -8}, {0, -8} } },
	[179] = { .set = { {-4, -10}, {1, -11}, {-5, -8}, {-1, -8} } },
	[180] = { .set = { {-3, -10}, {5, -7}, {-10, -9}, {0, -6} } },
	[181] = { .set = { {-5, -12}, {6, -3}, {-7, -10}, {0, -8} } },
	[182] = { .set = { {0, -14}, {4, -4}, {-5, -14}, {0, -7} } },
	[183] = { .set = { {4, -12}, {-3, -3}, {3, -6}, {0, -7} } },
	[184] = { .set = { {4, -11}, {-4, -3}, {7, -11}, {0, -6} } },
	[185] = { .set = { {4, -10}, {-5, -4}, {8, -8}, {1, -7} } },
	[186] = { .set = { {0, -9}, {-11, -7}, {7, -3}, {0, -8} } },
	[187] = { .set = { {-1, -10}, {-7, -5}, {6, -8}, {0, -8} } },
	[188] = { .set = { {-4, -4}, {-5, -7}, {10, -12}, {0, -9} } },
	[189] = { .set = { {4, -10}, {-8, -6}, {5, -4}, {1, -9} } },
	[190] = { .set = { {3, -10}, {-6, -4}, {7, -8}, {0, -7} } },
	[191] = { .set = { {8, 0}, {1, -2}, {3, -7}, {-1, -7} } },
	[192] = { .set = { {5, -11}, {-4, -6}, {1, -5}, {1, -8} } },
	[193] = { .set = { {3, -11}, {-5, -3}, {6, -11}, {-1, -6} } },
	[194] = { .set = { {14, -7}, {6, -6}, {-3, -6}, {0, -7} } },
	[195] = { .set = { {5, -12}, {7, -6}, {-5, -5}, {1, -10} } },
	[196] = { .set = { {4, -12}, {-3, -3}, {3, -6}, {0, -7} } },
	[197] = { .set = { {10, -11}, {5, -7}, {-8, -8}, {0, -9} } },
	[198] = { .set = { {0, -12}, {11, -8}, {-7, -4}, {0, -10} } },
	[199] = { .set = { {0, -12}, {4, -2}, {-5, -12}, {0, -5} } },
	[200] = { .set = { {7, -10}, {6, -6}, {-8, -4}, {0, -7} } },
	[201] = { .set = { {-5, -12}, {6, -12}, {-5, -3}, {0, -8} } },
	[202] = { .set = { {-5, -12}, {6, -3}, {-7, -10}, {0, -8} } },
	[203] = { .set = { {-10, -13}, {-5, -9}, {-5, -3}, {0, -8} } },
	[204] = { .set = { {-4, -10}, {-3, -11}, {2, -2}, {-1, -7} } },
	[205] = { .set = { {-2, -10}, {6, -7}, {-9, -9}, {1, -6} } },
	[206] = { .set = { {-14, -8}, {-6, -7}, {4, -4}, {1, -7} } },
	[207] = { .set = { {-3, -10}, {-8, -10}, {5, -2}, {0, -8} } },
	[208] = { .set = { {-4, -11}, {1, -12}, {-5, -9}, {-1, -9} } },
	[209] = { .set = { {-11, -2}, {-8, -5}, {8, -7}, {-1, -7} } },
	[210] = { .set = { {-4, 7}, {-5, -5}, {10, -10}, {0, -7} } },
	[211] = { .set = { {16, 8}, {0, -2}, {2, -7}, {-1, -7} } },
	[212] = { .set = { {25, -8}, {5, -5}, {-1, -10}, {-2, -8} } },
	[213] = { .set = { {18, -16}, {4, -6}, {-9, -8}, {-1, -9} } },
	[214] = { .set = { {5, -24}, {7, -7}, {-8, -5}, {0, -8} } },
	[215] = { .set = { {-16, -19}, {-3, -8}, {-4, -3}, {1, -8} } },
	[216] = { .set = { {-24, -9}, {-5, -7}, {6, -4}, {3, -8} } },
	[217] = { .set = { {-20, 6}, {-6, -6}, {9, -7}, {0, -7} } },
	[218] = { .set = { {0, -9}, {-11, -7}, {7, -3}, {0, -8} } },
	[219] = { .set = { {-3, -10}, {-8, -10}, {5, -2}, {0, -8} } },
	[220] = { .set = { {-4, -10}, {-3, -11}, {2, -2}, {-1, -7} } },
	[221] = { .set = { {-5, -12}, {6, -12}, {-5, -3}, {0, -8} } },
	[222] = { .set = { {0, -12}, {11, -8}, {-7, -4}, {0, -10} } },
	[223] = { .set = { {5, -12}, {7, -6}, {-5, -5}, {1, -10} } },
	[224] = { .set = { {5, -11}, {-4, -6}, {1, -5}, {1, -8} } },
	[225] = { .set = { {4, -10}, {-8, -6}, {5, -4}, {1, -9} } },
};

static const ax_anim *const sSmeargleAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02606),
	AX_ANIM_PTR(gAxSharedAnim_02682),
	AX_ANIM_PTR(gAxSharedAnim_02691),
	AX_ANIM_PTR(gAxSharedAnim_02701),
	AX_ANIM_PTR(gAxSharedAnim_02618),
	AX_ANIM_PTR(gAxSharedAnim_02641),
	AX_ANIM_PTR(gAxSharedAnim_02654),
	AX_ANIM_PTR(gAxSharedAnim_02663),
};

static const ax_anim *const sSmeargleAnimTable2[] = {
	AX_ANIM_PTR(sSmeargleAnims_2_1),
	AX_ANIM_PTR(sSmeargleAnims_2_2),
	AX_ANIM_PTR(sSmeargleAnims_2_3),
	AX_ANIM_PTR(sSmeargleAnims_2_4),
	AX_ANIM_PTR(sSmeargleAnims_2_5),
	AX_ANIM_PTR(sSmeargleAnims_2_6),
	AX_ANIM_PTR(sSmeargleAnims_2_7),
	AX_ANIM_PTR(sSmeargleAnims_2_8),
};

static const ax_anim *const sSmeargleAnimTable3[] = {
	AX_ANIM_PTR(sSmeargleAnims_3_1),
	AX_ANIM_PTR(sSmeargleAnims_3_2),
	AX_ANIM_PTR(sSmeargleAnims_3_3),
	AX_ANIM_PTR(sSmeargleAnims_3_4),
	AX_ANIM_PTR(sSmeargleAnims_3_5),
	AX_ANIM_PTR(sSmeargleAnims_3_6),
	AX_ANIM_PTR(sSmeargleAnims_3_7),
	AX_ANIM_PTR(sSmeargleAnims_3_8),
};

static const ax_anim *const sSmeargleAnimTable4[] = {
	AX_ANIM_PTR(sSmeargleAnims_4_1),
	AX_ANIM_PTR(sSmeargleAnims_4_2),
	AX_ANIM_PTR(sSmeargleAnims_4_3),
	AX_ANIM_PTR(sSmeargleAnims_4_4),
	AX_ANIM_PTR(sSmeargleAnims_4_5),
	AX_ANIM_PTR(sSmeargleAnims_4_6),
	AX_ANIM_PTR(sSmeargleAnims_4_7),
	AX_ANIM_PTR(sSmeargleAnims_4_8),
};

static const ax_anim *const sSmeargleAnimTable5[] = {
	AX_ANIM_PTR(sSmeargleAnims_5_1),
	AX_ANIM_PTR(sSmeargleAnims_5_2),
	AX_ANIM_PTR(sSmeargleAnims_5_3),
	AX_ANIM_PTR(sSmeargleAnims_5_4),
	AX_ANIM_PTR(sSmeargleAnims_5_5),
	AX_ANIM_PTR(sSmeargleAnims_5_6),
	AX_ANIM_PTR(sSmeargleAnims_5_7),
	AX_ANIM_PTR(sSmeargleAnims_5_8),
};

static const ax_anim *const sSmeargleAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
};

static const ax_anim *const sSmeargleAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00532),
	AX_ANIM_PTR(gAxSharedAnim_00544),
	AX_ANIM_PTR(gAxSharedAnim_00552),
	AX_ANIM_PTR(gAxSharedAnim_00560),
	AX_ANIM_PTR(gAxSharedAnim_00578),
	AX_ANIM_PTR(gAxSharedAnim_00588),
	AX_ANIM_PTR(gAxSharedAnim_00597),
	AX_ANIM_PTR(gAxSharedAnim_00603),
};

static const ax_anim *const sSmeargleAnimTable8[] = {
	AX_ANIM_PTR(sSmeargleAnims_8_1),
	AX_ANIM_PTR(sSmeargleAnims_8_2),
	AX_ANIM_PTR(sSmeargleAnims_8_3),
	AX_ANIM_PTR(sSmeargleAnims_8_4),
	AX_ANIM_PTR(sSmeargleAnims_8_5),
	AX_ANIM_PTR(sSmeargleAnims_8_6),
	AX_ANIM_PTR(sSmeargleAnims_8_7),
	AX_ANIM_PTR(sSmeargleAnims_8_8),
};

static const ax_anim *const sSmeargleAnimTable9[] = {
	AX_ANIM_PTR(sSmeargleAnims_9_1),
	AX_ANIM_PTR(sSmeargleAnims_9_2),
	AX_ANIM_PTR(sSmeargleAnims_9_3),
	AX_ANIM_PTR(sSmeargleAnims_9_4),
	AX_ANIM_PTR(sSmeargleAnims_9_5),
	AX_ANIM_PTR(sSmeargleAnims_9_6),
	AX_ANIM_PTR(sSmeargleAnims_9_7),
	AX_ANIM_PTR(sSmeargleAnims_9_8),
};

static const ax_anim *const sSmeargleAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00905),
	AX_ANIM_PTR(gAxSharedAnim_00995),
	AX_ANIM_PTR(gAxSharedAnim_00978),
	AX_ANIM_PTR(gAxSharedAnim_00964),
	AX_ANIM_PTR(gAxSharedAnim_00955),
	AX_ANIM_PTR(gAxSharedAnim_00943),
	AX_ANIM_PTR(gAxSharedAnim_00930),
	AX_ANIM_PTR(gAxSharedAnim_00917),
};

static const ax_anim *const sSmeargleAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_01007),
	AX_ANIM_PTR(sSmeargleAnims_11_2),
	AX_ANIM_PTR(gAxSharedAnim_01106),
	AX_ANIM_PTR(gAxSharedAnim_01153),
	AX_ANIM_PTR(gAxSharedAnim_01188),
	AX_ANIM_PTR(gAxSharedAnim_01226),
	AX_ANIM_PTR(sSmeargleAnims_11_7),
	AX_ANIM_PTR(sSmeargleAnims_11_8),
};

static const ax_anim *const sSmeargleAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01337),
	AX_ANIM_PTR(gAxSharedAnim_01350),
	AX_ANIM_PTR(gAxSharedAnim_01354),
	AX_ANIM_PTR(gAxSharedAnim_01360),
	AX_ANIM_PTR(gAxSharedAnim_01379),
	AX_ANIM_PTR(gAxSharedAnim_01389),
	AX_ANIM_PTR(gAxSharedAnim_01392),
	AX_ANIM_PTR(gAxSharedAnim_01401),
};

static const ax_anim *const sSmeargleAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01422),
	AX_ANIM_PTR(gAxSharedAnim_01464),
	AX_ANIM_PTR(gAxSharedAnim_01461),
	AX_ANIM_PTR(gAxSharedAnim_01456),
	AX_ANIM_PTR(gAxSharedAnim_01446),
	AX_ANIM_PTR(gAxSharedAnim_01443),
	AX_ANIM_PTR(gAxSharedAnim_01438),
	AX_ANIM_PTR(gAxSharedAnim_01429),
};

static const ax_anim *const *const sAxAnimationsSmeargle[] = {
	sSmeargleAnimTable1,
	sSmeargleAnimTable2,
	sSmeargleAnimTable3,
	sSmeargleAnimTable4,
	sSmeargleAnimTable5,
	sSmeargleAnimTable6,
	sSmeargleAnimTable7,
	sSmeargleAnimTable8,
	sSmeargleAnimTable9,
	sSmeargleAnimTable10,
	sSmeargleAnimTable11,
	sSmeargleAnimTable12,
	sSmeargleAnimTable13,
};

static const ax_sprite *const sAxSpritesSmeargle[] = {
	sSmeargleSprites1,
	sSmeargleSprites2,
	sSmeargleSprites3,
	sSmeargleSprites4,
	sSmeargleSprites5,
	sSmeargleSprites6,
	sSmeargleSprites7,
	sSmeargleSprites8,
	sSmeargleSprites9,
	sSmeargleSprites10,
	sSmeargleSprites11,
	sSmeargleSprites12,
	sSmeargleSprites13,
	sSmeargleSprites14,
	sSmeargleSprites15,
	sSmeargleSprites16,
	sSmeargleSprites17,
	sSmeargleSprites18,
	sSmeargleSprites19,
	sSmeargleSprites20,
	sSmeargleSprites21,
	sSmeargleSprites22,
	sSmeargleSprites23,
	sSmeargleSprites24,
	sSmeargleSprites25,
	sSmeargleSprites26,
	sSmeargleSprites27,
	sSmeargleSprites28,
	sSmeargleSprites29,
	sSmeargleSprites30,
	sSmeargleSprites31,
	sSmeargleSprites32,
	sSmeargleSprites33,
	sSmeargleSprites34,
	sSmeargleSprites35,
	sSmeargleSprites36,
	sSmeargleSprites37,
	sSmeargleSprites38,
	sSmeargleSprites39,
	sSmeargleSprites40,
	sSmeargleSprites41,
	sSmeargleSprites42,
	sSmeargleSprites43,
	sSmeargleSprites44,
	sSmeargleSprites45,
	sSmeargleSprites46,
	sSmeargleSprites47,
	sSmeargleSprites48,
	sSmeargleSprites49,
	sSmeargleSprites50,
	sSmeargleSprites51,
	sSmeargleSprites52,
	sSmeargleSprites53,
	sSmeargleSprites54,
	sSmeargleSprites55,
	sSmeargleSprites56,
	sSmeargleSprites57,
	sSmeargleSprites58,
	sSmeargleSprites59,
	sSmeargleSprites60,
	sSmeargleSprites61,
	sSmeargleSprites62,
	sSmeargleSprites63,
	sSmeargleSprites64,
	sSmeargleSprites65,
	sSmeargleSprites66,
	sSmeargleSprites67,
	sSmeargleSprites68,
	sSmeargleSprites69,
	sSmeargleSprites70,
	sSmeargleSprites71,
	sSmeargleSprites72,
	sSmeargleSprites73,
	sSmeargleSprites74,
	sSmeargleSprites75,
	sSmeargleSprites76,
	sSmeargleSprites77,
	sSmeargleSprites78,
	sSmeargleSprites79,
	sSmeargleSprites80,
	sSmeargleSprites81,
};

static const axmain sAxMainSmeargle = {
	.poses = sAxPosesSmeargle,
	.animations = sAxAnimationsSmeargle,
	.animCount = ARRAY_COUNT(sAxAnimationsSmeargle),
	.spriteData = sAxSpritesSmeargle,
	.positions = sAxPositionsSmeargle,
};
