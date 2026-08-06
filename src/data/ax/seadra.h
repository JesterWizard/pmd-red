/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainSeadra;
const SiroArchive gAxSeadra = {"SIRO", &sAxMainSeadra};

static const ax_pose sSeadraPose1[] = {
	AX_POSE(0, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose2[] = {
	AX_POSE(1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose3[] = {
	AX_POSE(2, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose4[] = {
	AX_POSE(3, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose5[] = {
	AX_POSE(4, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose6[] = {
	AX_POSE(5, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose7[] = {
	AX_POSE(6, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose8[] = {
	AX_POSE(7, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose9[] = {
	AX_POSE(8, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose10[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose11[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose12[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose13[] = {
	AX_POSE(12, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose14[] = {
	AX_POSE(13, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose15[] = {
	AX_POSE(14, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose16[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose17[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose18[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose19[] = {
	AX_POSE(6, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose20[] = {
	AX_POSE(7, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose21[] = {
	AX_POSE(8, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose22[] = {
	AX_POSE(3, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose23[] = {
	AX_POSE(4, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose24[] = {
	AX_POSE(5, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose28[] = {
	AX_POSE(15, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose32[] = {
	AX_POSE(16, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose36[] = {
	AX_POSE(17, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose40[] = {
	AX_POSE(18, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose44[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose48[] = {
	AX_POSE(18, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose49[] = {
	AX_POSE(6, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose52[] = {
	AX_POSE(17, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose53[] = {
	AX_POSE(3, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose56[] = {
	AX_POSE(16, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose90[] = {
	AX_POSE(20, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose91[] = {
	AX_POSE(21, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose92[] = {
	AX_POSE(22, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose94[] = {
	AX_POSE(23, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose95[] = {
	AX_POSE(24, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose96[] = {
	AX_POSE(25, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose98[] = {
	AX_POSE(26, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose99[] = {
	AX_POSE(27, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose100[] = {
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose102[] = {
	AX_POSE(29, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose103[] = {
	AX_POSE(30, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose104[] = {
	AX_POSE(31, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose106[] = {
	AX_POSE(32, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose107[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose108[] = {
	AX_POSE(34, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose110[] = {
	AX_POSE(29, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose111[] = {
	AX_POSE(30, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose112[] = {
	AX_POSE(31, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose114[] = {
	AX_POSE(26, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose115[] = {
	AX_POSE(27, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose116[] = {
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose118[] = {
	AX_POSE(23, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose119[] = {
	AX_POSE(24, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose120[] = {
	AX_POSE(25, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose129[] = {
	AX_POSE(35, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose130[] = {
	AX_POSE(36, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose131[] = {
	AX_POSE(37, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose132[] = {
	AX_POSE(38, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose133[] = {
	AX_POSE(39, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose134[] = {
	AX_POSE(40, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose135[] = {
	AX_POSE(41, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose136[] = {
	AX_POSE(40, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose137[] = {
	AX_POSE(39, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose138[] = {
	AX_POSE(38, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose149[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose153[] = {
	AX_POSE(14, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose155[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose158[] = {
	AX_POSE(7, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose159[] = {
	AX_POSE(8, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose161[] = {
	AX_POSE(4, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose162[] = {
	AX_POSE(5, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose166[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose167[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose168[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose172[] = {
	AX_POSE(23, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose174[] = {
	AX_POSE(29, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose176[] = {
	AX_POSE(29, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose178[] = {
	AX_POSE(23, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose204[] = {
	AX_POSE(5, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose206[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose207[] = {
	AX_POSE(14, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose208[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSeadraPose210[] = {
	AX_POSE(5, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_anim sSeadraAnims_1_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 1, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 1, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 2, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_1_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 4, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 4, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 5, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_1_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 7, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 7, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 8, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_1_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 10, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 10, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 11, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_1_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 13, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 14, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_1_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 16, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 10, .unkFlags = 0, .poseId = 16, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 17, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_1_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 19, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 19, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 20, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_1_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 22, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 22, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 23, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 26, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 13}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 24}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 27, .offset = {1, 24}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 24}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {1, 24}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 34, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 33, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {13, 1}, .shadow = {13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {18, 2}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {18, 3}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {18, 2}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {18, 3}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {6, 1}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 38, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 37, .offset = {6, -5}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {11, -9}, .shadow = {11, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {18, -13}, .shadow = {18, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {19, -12}, .shadow = {19, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {18, -13}, .shadow = {18, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {19, -12}, .shadow = {19, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {7, -5}, .shadow = {7, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 46, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 45, .offset = {-6, -5}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {-11, -9}, .shadow = {-11, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-18, -13}, .shadow = {-18, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-19, -12}, .shadow = {-19, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-18, -13}, .shadow = {-18, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-19, -12}, .shadow = {-19, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-7, -5}, .shadow = {-7, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 50, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 49, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {-13, 1}, .shadow = {-13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-18, 2}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {-18, 3}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-18, 2}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-18, 3}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {-6, 1}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 58, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 57, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {0, 13}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, 24}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 59, .offset = {1, 24}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, 24}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {1, 24}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 66, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 65, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {13, 1}, .shadow = {13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {18, 2}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {18, 3}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {18, 2}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {18, 3}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {6, 1}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 70, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 69, .offset = {6, -5}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {11, -9}, .shadow = {11, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {18, -13}, .shadow = {18, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {19, -12}, .shadow = {19, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {18, -13}, .shadow = {18, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {19, -12}, .shadow = {19, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {7, -5}, .shadow = {7, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 78, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 76, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 77, .offset = {-6, -5}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 77, .offset = {-11, -9}, .shadow = {-11, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-18, -13}, .shadow = {-18, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {-19, -12}, .shadow = {-19, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-18, -13}, .shadow = {-18, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-19, -12}, .shadow = {-19, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-7, -5}, .shadow = {-7, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 82, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 80, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 81, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 81, .offset = {-13, 1}, .shadow = {-13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-18, 2}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {-18, 3}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-18, 2}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-18, 3}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-6, 1}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 89, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 91, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, 2}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 93, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {2, 2}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 97, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 101, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {2, -2}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 105, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 107, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 109, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 111, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-2, -2}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 113, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 114, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 115, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 117, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 118, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 119, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {-2, 2}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_8_1[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 140, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 140, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 140, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 139, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 139, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 139, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_8_2[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 143, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 143, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 143, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 142, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 142, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 142, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_8_3[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 146, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 146, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 146, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 145, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 145, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 145, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_8_4[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 149, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 149, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 149, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 148, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 148, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 148, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_8_5[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 152, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 152, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 152, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 151, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 151, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 151, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_8_6[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 155, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 155, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 155, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 154, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 154, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 154, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_8_7[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 158, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 158, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 158, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 157, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 157, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 157, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_8_8[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 161, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 161, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 161, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 160, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 160, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 160, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {7, 18}, .shadow = {7, 16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 166, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 167, .offset = {-7, 18}, .shadow = {-7, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-8, 9}, .shadow = {-8, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {9, 1}, .shadow = {9, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {18, 8}, .shadow = {18, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {19, 16}, .shadow = {19, 16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 165, .offset = {19, 24}, .shadow = {19, 22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 166, .offset = {11, 23}, .shadow = {11, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {3, 19}, .shadow = {3, 19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {16, -5}, .shadow = {16, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 164, .offset = {20, 1}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 165, .offset = {16, 4}, .shadow = {16, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {12, 5}, .shadow = {12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {12, -18}, .shadow = {12, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 163, .offset = {21, -15}, .shadow = {21, -17} },
	{ .frames = 2, .unkFlags = 3, .poseId = 164, .offset = {20, -11}, .shadow = {20, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-9, -10}, .shadow = {-9, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-7, -15}, .shadow = {-7, -17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 162, .offset = {0, -17}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 163, .offset = {7, -15}, .shadow = {7, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {9, -8}, .shadow = {9, -8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {-12, -18}, .shadow = {-12, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 169, .offset = {-21, -15}, .shadow = {-21, -17} },
	{ .frames = 2, .unkFlags = 3, .poseId = 168, .offset = {-20, -11}, .shadow = {-20, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-16, -5}, .shadow = {-16, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 168, .offset = {-20, 1}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 167, .offset = {-16, 4}, .shadow = {-16, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {-12, 5}, .shadow = {-12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {-9, 1}, .shadow = {-9, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-18, 8}, .shadow = {-18, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-19, 16}, .shadow = {-19, 16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 167, .offset = {-19, 24}, .shadow = {-19, 22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 166, .offset = {-11, 23}, .shadow = {-11, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {-3, 19}, .shadow = {-3, 19} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 179, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 179, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 179, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 180, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 180, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 180, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 182, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 182, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 182, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 181, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 183, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 183, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 183, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 185, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 185, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 185, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 184, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 186, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 186, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 188, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 188, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 187, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 189, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 189, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 191, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 191, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 190, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 192, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 192, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 194, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 194, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 194, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 193, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 195, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 195, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 195, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 195, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 197, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 197, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 197, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 196, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 198, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 198, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 198, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSeadraAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 200, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 200, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 200, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 199, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 201, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 201, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 201, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sSeadraGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_1.4bpp.lz");
static const ax_sprite sSeadraSprites1[] = {
	{sSeadraGfx1, ARRAY_COUNT(sSeadraGfx1)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_2.4bpp.lz");
static const ax_sprite sSeadraSprites2[] = {
	{sSeadraGfx2, ARRAY_COUNT(sSeadraGfx2)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_3.4bpp.lz");
static const ax_sprite sSeadraSprites3[] = {
	{sSeadraGfx3, ARRAY_COUNT(sSeadraGfx3)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_4.4bpp.lz");
static const ax_sprite sSeadraSprites4[] = {
	{sSeadraGfx4, ARRAY_COUNT(sSeadraGfx4)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_5.4bpp.lz");
static const ax_sprite sSeadraSprites5[] = {
	{sSeadraGfx5, ARRAY_COUNT(sSeadraGfx5)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_6.4bpp.lz");
static const ax_sprite sSeadraSprites6[] = {
	{sSeadraGfx6, ARRAY_COUNT(sSeadraGfx6)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_7.4bpp.lz");
static const ax_sprite sSeadraSprites7[] = {
	{sSeadraGfx7, ARRAY_COUNT(sSeadraGfx7)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_8.4bpp.lz");
static const ax_sprite sSeadraSprites8[] = {
	{sSeadraGfx8, ARRAY_COUNT(sSeadraGfx8)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_9.4bpp.lz");
static const ax_sprite sSeadraSprites9[] = {
	{sSeadraGfx9, ARRAY_COUNT(sSeadraGfx9)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_10.4bpp.lz");
static const ax_sprite sSeadraSprites10[] = {
	{sSeadraGfx10, ARRAY_COUNT(sSeadraGfx10)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_11.4bpp.lz");
static const ax_sprite sSeadraSprites11[] = {
	{sSeadraGfx11, ARRAY_COUNT(sSeadraGfx11)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_12.4bpp.lz");
static const ax_sprite sSeadraSprites12[] = {
	{sSeadraGfx12, ARRAY_COUNT(sSeadraGfx12)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_13.4bpp.lz");
static const ax_sprite sSeadraSprites13[] = {
	{sSeadraGfx13, ARRAY_COUNT(sSeadraGfx13)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_14.4bpp.lz");
static const ax_sprite sSeadraSprites14[] = {
	{sSeadraGfx14, ARRAY_COUNT(sSeadraGfx14)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_15.4bpp.lz");
static const ax_sprite sSeadraSprites15[] = {
	{sSeadraGfx15, ARRAY_COUNT(sSeadraGfx15)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_16.4bpp.lz");
static const u8 sSeadraGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_16_1.4bpp.lz");
static const u8 sSeadraGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_16_2.4bpp.lz");
static const u8 sSeadraGfx16_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_16_3.4bpp.lz");
static const ax_sprite sSeadraSprites16[] = {
	{sSeadraGfx16, ARRAY_COUNT(sSeadraGfx16)}, 
	{NULL, 32}, 
	{sSeadraGfx16_1, ARRAY_COUNT(sSeadraGfx16_1)}, 
	{NULL, 32}, 
	{sSeadraGfx16_2, ARRAY_COUNT(sSeadraGfx16_2)}, 
	{NULL, 64}, 
	{sSeadraGfx16_3, ARRAY_COUNT(sSeadraGfx16_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSeadraGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_17.4bpp.lz");
static const u8 sSeadraGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_17_1.4bpp.lz");
static const ax_sprite sSeadraSprites17[] = {
	{sSeadraGfx17, ARRAY_COUNT(sSeadraGfx17)}, 
	{NULL, 32}, 
	{sSeadraGfx17_1, ARRAY_COUNT(sSeadraGfx17_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSeadraGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_18.4bpp.lz");
static const u8 sSeadraGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_18_1.4bpp.lz");
static const u8 sSeadraGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_18_2.4bpp.lz");
static const ax_sprite sSeadraSprites18[] = {
	{sSeadraGfx18, ARRAY_COUNT(sSeadraGfx18)}, 
	{NULL, 32}, 
	{sSeadraGfx18_1, ARRAY_COUNT(sSeadraGfx18_1)}, 
	{NULL, 64}, 
	{sSeadraGfx18_2, ARRAY_COUNT(sSeadraGfx18_2)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_19.4bpp.lz");
static const u8 sSeadraGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_19_1.4bpp.lz");
static const u8 sSeadraGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_19_2.4bpp.lz");
static const u8 sSeadraGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_19_3.4bpp.lz");
static const ax_sprite sSeadraSprites19[] = {
	{sSeadraGfx19, ARRAY_COUNT(sSeadraGfx19)}, 
	{NULL, 32}, 
	{sSeadraGfx19_1, ARRAY_COUNT(sSeadraGfx19_1)}, 
	{NULL, 32}, 
	{sSeadraGfx19_2, ARRAY_COUNT(sSeadraGfx19_2)}, 
	{NULL, 64}, 
	{sSeadraGfx19_3, ARRAY_COUNT(sSeadraGfx19_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSeadraGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_20.4bpp.lz");
static const u8 sSeadraGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_20_1.4bpp.lz");
static const ax_sprite sSeadraSprites20[] = {
	{sSeadraGfx20, ARRAY_COUNT(sSeadraGfx20)}, 
	{NULL, 32}, 
	{sSeadraGfx20_1, ARRAY_COUNT(sSeadraGfx20_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSeadraGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_21.4bpp.lz");
static const u8 sSeadraGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_21_1.4bpp.lz");
static const u8 sSeadraGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_21_2.4bpp.lz");
static const u8 sSeadraGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_21_3.4bpp.lz");
static const ax_sprite sSeadraSprites21[] = {
	{sSeadraGfx21, ARRAY_COUNT(sSeadraGfx21)}, 
	{NULL, 32}, 
	{sSeadraGfx21_1, ARRAY_COUNT(sSeadraGfx21_1)}, 
	{NULL, 32}, 
	{sSeadraGfx21_2, ARRAY_COUNT(sSeadraGfx21_2)}, 
	{NULL, 64}, 
	{sSeadraGfx21_3, ARRAY_COUNT(sSeadraGfx21_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSeadraGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_22.4bpp.lz");
static const u8 sSeadraGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_22_1.4bpp.lz");
static const u8 sSeadraGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_22_2.4bpp.lz");
static const u8 sSeadraGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_22_3.4bpp.lz");
static const ax_sprite sSeadraSprites22[] = {
	{sSeadraGfx22, ARRAY_COUNT(sSeadraGfx22)}, 
	{NULL, 32}, 
	{sSeadraGfx22_1, ARRAY_COUNT(sSeadraGfx22_1)}, 
	{NULL, 32}, 
	{sSeadraGfx22_2, ARRAY_COUNT(sSeadraGfx22_2)}, 
	{NULL, 64}, 
	{sSeadraGfx22_3, ARRAY_COUNT(sSeadraGfx22_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSeadraGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_23.4bpp.lz");
static const u8 sSeadraGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_23_1.4bpp.lz");
static const u8 sSeadraGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_23_2.4bpp.lz");
static const ax_sprite sSeadraSprites23[] = {
	{sSeadraGfx23, ARRAY_COUNT(sSeadraGfx23)}, 
	{NULL, 32}, 
	{sSeadraGfx23_1, ARRAY_COUNT(sSeadraGfx23_1)}, 
	{NULL, 64}, 
	{sSeadraGfx23_2, ARRAY_COUNT(sSeadraGfx23_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSeadraGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_24.4bpp.lz");
static const u8 sSeadraGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_24_1.4bpp.lz");
static const ax_sprite sSeadraSprites24[] = {
	{sSeadraGfx24, ARRAY_COUNT(sSeadraGfx24)}, 
	{NULL, 32}, 
	{sSeadraGfx24_1, ARRAY_COUNT(sSeadraGfx24_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSeadraGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_25.4bpp.lz");
static const u8 sSeadraGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_25_1.4bpp.lz");
static const u8 sSeadraGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_25_2.4bpp.lz");
static const ax_sprite sSeadraSprites25[] = {
	{sSeadraGfx25, ARRAY_COUNT(sSeadraGfx25)}, 
	{NULL, 32}, 
	{sSeadraGfx25_1, ARRAY_COUNT(sSeadraGfx25_1)}, 
	{NULL, 32}, 
	{sSeadraGfx25_2, ARRAY_COUNT(sSeadraGfx25_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSeadraGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_26.4bpp.lz");
static const u8 sSeadraGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_26_1.4bpp.lz");
static const u8 sSeadraGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_26_2.4bpp.lz");
static const ax_sprite sSeadraSprites26[] = {
	{sSeadraGfx26, ARRAY_COUNT(sSeadraGfx26)}, 
	{NULL, 32}, 
	{sSeadraGfx26_1, ARRAY_COUNT(sSeadraGfx26_1)}, 
	{NULL, 64}, 
	{sSeadraGfx26_2, ARRAY_COUNT(sSeadraGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSeadraGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_27.4bpp.lz");
static const u8 sSeadraGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_27_1.4bpp.lz");
static const ax_sprite sSeadraSprites27[] = {
	{NULL, 32}, 
	{sSeadraGfx27, ARRAY_COUNT(sSeadraGfx27)}, 
	{NULL, 32}, 
	{sSeadraGfx27_1, ARRAY_COUNT(sSeadraGfx27_1)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_28.4bpp.lz");
static const u8 sSeadraGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_28_1.4bpp.lz");
static const u8 sSeadraGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_28_2.4bpp.lz");
static const ax_sprite sSeadraSprites28[] = {
	{NULL, 32}, 
	{sSeadraGfx28, ARRAY_COUNT(sSeadraGfx28)}, 
	{NULL, 32}, 
	{sSeadraGfx28_1, ARRAY_COUNT(sSeadraGfx28_1)}, 
	{NULL, 64}, 
	{sSeadraGfx28_2, ARRAY_COUNT(sSeadraGfx28_2)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_29.4bpp.lz");
static const u8 sSeadraGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_29_1.4bpp.lz");
static const u8 sSeadraGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_29_2.4bpp.lz");
static const ax_sprite sSeadraSprites29[] = {
	{NULL, 32}, 
	{sSeadraGfx29, ARRAY_COUNT(sSeadraGfx29)}, 
	{NULL, 32}, 
	{sSeadraGfx29_1, ARRAY_COUNT(sSeadraGfx29_1)}, 
	{NULL, 64}, 
	{sSeadraGfx29_2, ARRAY_COUNT(sSeadraGfx29_2)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_30.4bpp.lz");
static const u8 sSeadraGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_30_1.4bpp.lz");
static const ax_sprite sSeadraSprites30[] = {
	{sSeadraGfx30, ARRAY_COUNT(sSeadraGfx30)}, 
	{NULL, 32}, 
	{sSeadraGfx30_1, ARRAY_COUNT(sSeadraGfx30_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSeadraGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_31.4bpp.lz");
static const u8 sSeadraGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_31_1.4bpp.lz");
static const u8 sSeadraGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_31_2.4bpp.lz");
static const u8 sSeadraGfx31_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_31_3.4bpp.lz");
static const ax_sprite sSeadraSprites31[] = {
	{sSeadraGfx31, ARRAY_COUNT(sSeadraGfx31)}, 
	{NULL, 32}, 
	{sSeadraGfx31_1, ARRAY_COUNT(sSeadraGfx31_1)}, 
	{NULL, 32}, 
	{sSeadraGfx31_2, ARRAY_COUNT(sSeadraGfx31_2)}, 
	{NULL, 64}, 
	{sSeadraGfx31_3, ARRAY_COUNT(sSeadraGfx31_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSeadraGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_32.4bpp.lz");
static const u8 sSeadraGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_32_1.4bpp.lz");
static const u8 sSeadraGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_32_2.4bpp.lz");
static const u8 sSeadraGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_32_3.4bpp.lz");
static const ax_sprite sSeadraSprites32[] = {
	{sSeadraGfx32, ARRAY_COUNT(sSeadraGfx32)}, 
	{NULL, 32}, 
	{sSeadraGfx32_1, ARRAY_COUNT(sSeadraGfx32_1)}, 
	{NULL, 32}, 
	{sSeadraGfx32_2, ARRAY_COUNT(sSeadraGfx32_2)}, 
	{NULL, 64}, 
	{sSeadraGfx32_3, ARRAY_COUNT(sSeadraGfx32_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSeadraGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_33.4bpp.lz");
static const ax_sprite sSeadraSprites33[] = {
	{sSeadraGfx33, ARRAY_COUNT(sSeadraGfx33)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sSeadraGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_34.4bpp.lz");
static const ax_sprite sSeadraSprites34[] = {
	{sSeadraGfx34, ARRAY_COUNT(sSeadraGfx34)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sSeadraGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_35.4bpp.lz");
static const ax_sprite sSeadraSprites35[] = {
	{sSeadraGfx35, ARRAY_COUNT(sSeadraGfx35)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sSeadraGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_36.4bpp.lz");
static const ax_sprite sSeadraSprites36[] = {
	{sSeadraGfx36, ARRAY_COUNT(sSeadraGfx36)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_37.4bpp.lz");
static const ax_sprite sSeadraSprites37[] = {
	{sSeadraGfx37, ARRAY_COUNT(sSeadraGfx37)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_38.4bpp.lz");
static const ax_sprite sSeadraSprites38[] = {
	{sSeadraGfx38, ARRAY_COUNT(sSeadraGfx38)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_39.4bpp.lz");
static const ax_sprite sSeadraSprites39[] = {
	{sSeadraGfx39, ARRAY_COUNT(sSeadraGfx39)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_40.4bpp.lz");
static const ax_sprite sSeadraSprites40[] = {
	{sSeadraGfx40, ARRAY_COUNT(sSeadraGfx40)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_41.4bpp.lz");
static const ax_sprite sSeadraSprites41[] = {
	{sSeadraGfx41, ARRAY_COUNT(sSeadraGfx41)}, 
	{NULL, 0}
};
static const u8 sSeadraGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/seadra/sprite_42.4bpp.lz");
static const ax_sprite sSeadraSprites42[] = {
	{sSeadraGfx42, ARRAY_COUNT(sSeadraGfx42)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesSeadra[] = {
	sSeadraPose1,
	sSeadraPose2,
	sSeadraPose3,
	sSeadraPose4,
	sSeadraPose5,
	sSeadraPose6,
	sSeadraPose7,
	sSeadraPose8,
	sSeadraPose9,
	sSeadraPose10,
	sSeadraPose11,
	sSeadraPose12,
	sSeadraPose13,
	sSeadraPose14,
	sSeadraPose15,
	sSeadraPose16,
	sSeadraPose17,
	sSeadraPose18,
	sSeadraPose19,
	sSeadraPose20,
	sSeadraPose21,
	sSeadraPose22,
	sSeadraPose23,
	sSeadraPose24,
	sSeadraPose1,
	sSeadraPose2,
	sSeadraPose3,
	sSeadraPose28,
	sSeadraPose4,
	sSeadraPose5,
	sSeadraPose6,
	sSeadraPose32,
	sSeadraPose7,
	sSeadraPose8,
	sSeadraPose9,
	sSeadraPose36,
	sSeadraPose10,
	sSeadraPose11,
	sSeadraPose12,
	sSeadraPose40,
	sSeadraPose13,
	sSeadraPose14,
	sSeadraPose15,
	sSeadraPose44,
	sSeadraPose16,
	sSeadraPose17,
	sSeadraPose18,
	sSeadraPose48,
	sSeadraPose49,
	sSeadraPose20,
	sSeadraPose21,
	sSeadraPose52,
	sSeadraPose53,
	sSeadraPose23,
	sSeadraPose24,
	sSeadraPose56,
	sSeadraPose1,
	sSeadraPose2,
	sSeadraPose3,
	sSeadraPose28,
	sSeadraPose4,
	sSeadraPose5,
	sSeadraPose6,
	sSeadraPose32,
	sSeadraPose7,
	sSeadraPose8,
	sSeadraPose9,
	sSeadraPose36,
	sSeadraPose10,
	sSeadraPose11,
	sSeadraPose12,
	sSeadraPose40,
	sSeadraPose13,
	sSeadraPose14,
	sSeadraPose15,
	sSeadraPose44,
	sSeadraPose16,
	sSeadraPose17,
	sSeadraPose18,
	sSeadraPose48,
	sSeadraPose49,
	sSeadraPose20,
	sSeadraPose21,
	sSeadraPose52,
	sSeadraPose53,
	sSeadraPose23,
	sSeadraPose24,
	sSeadraPose56,
	sSeadraPose1,
	sSeadraPose90,
	sSeadraPose91,
	sSeadraPose92,
	sSeadraPose4,
	sSeadraPose94,
	sSeadraPose95,
	sSeadraPose96,
	sSeadraPose7,
	sSeadraPose98,
	sSeadraPose99,
	sSeadraPose100,
	sSeadraPose10,
	sSeadraPose102,
	sSeadraPose103,
	sSeadraPose104,
	sSeadraPose13,
	sSeadraPose106,
	sSeadraPose107,
	sSeadraPose108,
	sSeadraPose16,
	sSeadraPose110,
	sSeadraPose111,
	sSeadraPose112,
	sSeadraPose49,
	sSeadraPose114,
	sSeadraPose115,
	sSeadraPose116,
	sSeadraPose53,
	sSeadraPose118,
	sSeadraPose119,
	sSeadraPose120,
	sSeadraPose1,
	sSeadraPose53,
	sSeadraPose49,
	sSeadraPose16,
	sSeadraPose13,
	sSeadraPose10,
	sSeadraPose7,
	sSeadraPose4,
	sSeadraPose129,
	sSeadraPose130,
	sSeadraPose131,
	sSeadraPose132,
	sSeadraPose133,
	sSeadraPose134,
	sSeadraPose135,
	sSeadraPose136,
	sSeadraPose137,
	sSeadraPose138,
	sSeadraPose1,
	sSeadraPose2,
	sSeadraPose3,
	sSeadraPose4,
	sSeadraPose5,
	sSeadraPose6,
	sSeadraPose7,
	sSeadraPose8,
	sSeadraPose9,
	sSeadraPose10,
	sSeadraPose149,
	sSeadraPose12,
	sSeadraPose13,
	sSeadraPose14,
	sSeadraPose153,
	sSeadraPose16,
	sSeadraPose155,
	sSeadraPose18,
	sSeadraPose49,
	sSeadraPose158,
	sSeadraPose159,
	sSeadraPose53,
	sSeadraPose161,
	sSeadraPose162,
	sSeadraPose28,
	sSeadraPose56,
	sSeadraPose52,
	sSeadraPose166,
	sSeadraPose167,
	sSeadraPose168,
	sSeadraPose36,
	sSeadraPose32,
	sSeadraPose90,
	sSeadraPose172,
	sSeadraPose98,
	sSeadraPose174,
	sSeadraPose106,
	sSeadraPose176,
	sSeadraPose114,
	sSeadraPose178,
	sSeadraPose1,
	sSeadraPose3,
	sSeadraPose2,
	sSeadraPose4,
	sSeadraPose6,
	sSeadraPose5,
	sSeadraPose7,
	sSeadraPose9,
	sSeadraPose8,
	sSeadraPose10,
	sSeadraPose12,
	sSeadraPose11,
	sSeadraPose13,
	sSeadraPose15,
	sSeadraPose14,
	sSeadraPose16,
	sSeadraPose18,
	sSeadraPose17,
	sSeadraPose19,
	sSeadraPose21,
	sSeadraPose20,
	sSeadraPose22,
	sSeadraPose24,
	sSeadraPose23,
	sSeadraPose3,
	sSeadraPose204,
	sSeadraPose21,
	sSeadraPose206,
	sSeadraPose207,
	sSeadraPose208,
	sSeadraPose9,
	sSeadraPose210,
	sSeadraPose1,
	sSeadraPose53,
	sSeadraPose49,
	sSeadraPose16,
	sSeadraPose13,
	sSeadraPose10,
	sSeadraPose7,
	sSeadraPose4,
};

static const struct PositionSets sAxPositionsSeadra[] = {
	[0] = { .set = { {-1, -13}, {-8, -16}, {6, -16}, {-1, -16} } },
	[1] = { .set = { {-1, -11}, {-7, -17}, {5, -17}, {-1, -14} } },
	[2] = { .set = { {-1, -15}, {-9, -17}, {6, -17}, {-1, -17} } },
	[3] = { .set = { {7, -14}, {2, -23}, {-8, -15}, {0, -15} } },
	[4] = { .set = { {8, -13}, {1, -23}, {-6, -17}, {-1, -14} } },
	[5] = { .set = { {7, -15}, {2, -23}, {-7, -15}, {0, -15} } },
	[6] = { .set = { {10, -18}, {-5, -23}, {-7, -15}, {1, -14} } },
	[7] = { .set = { {12, -17}, {-7, -23}, {-8, -17}, {-2, -13} } },
	[8] = { .set = { {9, -20}, {-5, -23}, {-4, -14}, {-1, -14} } },
	[9] = { .set = { {8, -24}, {-11, -20}, {2, -15}, {-1, -14} } },
	[10] = { .set = { {9, -25}, {-10, -19}, {-4, -16}, {-3, -14} } },
	[11] = { .set = { {7, -25}, {-9, -21}, {6, -16}, {-1, -14} } },
	[12] = { .set = { {-1, -19}, {8, -17}, {-10, -17}, {-1, -14} } },
	[13] = { .set = { {-1, -22}, {5, -16}, {-7, -16}, {-1, -15} } },
	[14] = { .set = { {-1, -19}, {9, -16}, {-11, -16}, {-1, -11} } },
	[15] = { .set = { {-10, -24}, {9, -20}, {-4, -15}, {-1, -14} } },
	[16] = { .set = { {-11, -24}, {8, -18}, {2, -15}, {1, -13} } },
	[17] = { .set = { {-9, -25}, {7, -21}, {-8, -16}, {-1, -14} } },
	[18] = { .set = { {-11, -18}, {4, -23}, {6, -15}, {-2, -14} } },
	[19] = { .set = { {-13, -17}, {6, -23}, {7, -17}, {1, -13} } },
	[20] = { .set = { {-10, -20}, {4, -23}, {3, -14}, {0, -14} } },
	[21] = { .set = { {-8, -14}, {-3, -23}, {7, -15}, {-1, -15} } },
	[22] = { .set = { {-9, -13}, {-2, -23}, {5, -17}, {0, -14} } },
	[23] = { .set = { {-8, -15}, {-3, -23}, {6, -15}, {-1, -15} } },
	[24] = { .set = { {-1, -13}, {-8, -16}, {6, -16}, {-1, -16} } },
	[25] = { .set = { {-1, -11}, {-7, -17}, {5, -17}, {-1, -14} } },
	[26] = { .set = { {-1, -15}, {-9, -17}, {6, -17}, {-1, -17} } },
	[27] = { .set = { {-1, -7}, {-8, -18}, {5, -18}, {-1, -12} } },
	[28] = { .set = { {7, -14}, {2, -23}, {-8, -15}, {0, -15} } },
	[29] = { .set = { {8, -13}, {1, -23}, {-6, -17}, {-1, -14} } },
	[30] = { .set = { {7, -15}, {2, -23}, {-7, -15}, {0, -15} } },
	[31] = { .set = { {6, -7}, {4, -22}, {-8, -19}, {0, -13} } },
	[32] = { .set = { {10, -18}, {-5, -23}, {-7, -15}, {1, -14} } },
	[33] = { .set = { {12, -17}, {-7, -23}, {-8, -17}, {-2, -13} } },
	[34] = { .set = { {9, -20}, {-5, -23}, {-4, -14}, {-1, -14} } },
	[35] = { .set = { {10, -8}, {-2, -23}, {-6, -17}, {-2, -13} } },
	[36] = { .set = { {8, -24}, {-11, -20}, {2, -15}, {-1, -14} } },
	[37] = { .set = { {9, -25}, {-10, -19}, {-4, -16}, {-3, -14} } },
	[38] = { .set = { {7, -25}, {-9, -21}, {6, -16}, {-1, -14} } },
	[39] = { .set = { {8, -14}, {-5, -24}, {6, -19}, {0, -16} } },
	[40] = { .set = { {-1, -19}, {8, -17}, {-10, -17}, {-1, -14} } },
	[41] = { .set = { {-1, -22}, {5, -16}, {-7, -16}, {-1, -15} } },
	[42] = { .set = { {-1, -19}, {9, -16}, {-11, -16}, {-1, -11} } },
	[43] = { .set = { {-1, -18}, {7, -19}, {-9, -19}, {-1, -13} } },
	[44] = { .set = { {-10, -24}, {9, -20}, {-4, -15}, {-1, -14} } },
	[45] = { .set = { {-11, -24}, {8, -18}, {2, -15}, {1, -13} } },
	[46] = { .set = { {-9, -25}, {7, -21}, {-8, -16}, {-1, -14} } },
	[47] = { .set = { {-10, -14}, {3, -24}, {-8, -19}, {-2, -16} } },
	[48] = { .set = { {-12, -18}, {3, -23}, {5, -15}, {-3, -14} } },
	[49] = { .set = { {-13, -17}, {6, -23}, {7, -17}, {1, -13} } },
	[50] = { .set = { {-10, -20}, {4, -23}, {3, -14}, {0, -14} } },
	[51] = { .set = { {-12, -8}, {0, -23}, {4, -17}, {0, -13} } },
	[52] = { .set = { {-9, -14}, {-4, -23}, {6, -15}, {-2, -15} } },
	[53] = { .set = { {-9, -13}, {-2, -23}, {5, -17}, {0, -14} } },
	[54] = { .set = { {-8, -15}, {-3, -23}, {6, -15}, {-1, -15} } },
	[55] = { .set = { {-8, -7}, {-6, -22}, {6, -19}, {-2, -13} } },
	[56] = { .set = { {-1, -13}, {-8, -16}, {6, -16}, {-1, -16} } },
	[57] = { .set = { {-1, -11}, {-7, -17}, {5, -17}, {-1, -14} } },
	[58] = { .set = { {-1, -15}, {-9, -17}, {6, -17}, {-1, -17} } },
	[59] = { .set = { {-1, -7}, {-8, -18}, {5, -18}, {-1, -12} } },
	[60] = { .set = { {7, -14}, {2, -23}, {-8, -15}, {0, -15} } },
	[61] = { .set = { {8, -13}, {1, -23}, {-6, -17}, {-1, -14} } },
	[62] = { .set = { {7, -15}, {2, -23}, {-7, -15}, {0, -15} } },
	[63] = { .set = { {6, -7}, {4, -22}, {-8, -19}, {0, -13} } },
	[64] = { .set = { {10, -18}, {-5, -23}, {-7, -15}, {1, -14} } },
	[65] = { .set = { {12, -17}, {-7, -23}, {-8, -17}, {-2, -13} } },
	[66] = { .set = { {9, -20}, {-5, -23}, {-4, -14}, {-1, -14} } },
	[67] = { .set = { {10, -8}, {-2, -23}, {-6, -17}, {-2, -13} } },
	[68] = { .set = { {8, -24}, {-11, -20}, {2, -15}, {-1, -14} } },
	[69] = { .set = { {9, -25}, {-10, -19}, {-4, -16}, {-3, -14} } },
	[70] = { .set = { {7, -25}, {-9, -21}, {6, -16}, {-1, -14} } },
	[71] = { .set = { {8, -14}, {-5, -24}, {6, -19}, {0, -16} } },
	[72] = { .set = { {-1, -19}, {8, -17}, {-10, -17}, {-1, -14} } },
	[73] = { .set = { {-1, -22}, {5, -16}, {-7, -16}, {-1, -15} } },
	[74] = { .set = { {-1, -19}, {9, -16}, {-11, -16}, {-1, -11} } },
	[75] = { .set = { {-1, -18}, {7, -19}, {-9, -19}, {-1, -13} } },
	[76] = { .set = { {-10, -24}, {9, -20}, {-4, -15}, {-1, -14} } },
	[77] = { .set = { {-11, -24}, {8, -18}, {2, -15}, {1, -13} } },
	[78] = { .set = { {-9, -25}, {7, -21}, {-8, -16}, {-1, -14} } },
	[79] = { .set = { {-10, -14}, {3, -24}, {-8, -19}, {-2, -16} } },
	[80] = { .set = { {-12, -18}, {3, -23}, {5, -15}, {-3, -14} } },
	[81] = { .set = { {-13, -17}, {6, -23}, {7, -17}, {1, -13} } },
	[82] = { .set = { {-10, -20}, {4, -23}, {3, -14}, {0, -14} } },
	[83] = { .set = { {-12, -8}, {0, -23}, {4, -17}, {0, -13} } },
	[84] = { .set = { {-9, -14}, {-4, -23}, {6, -15}, {-2, -15} } },
	[85] = { .set = { {-9, -13}, {-2, -23}, {5, -17}, {0, -14} } },
	[86] = { .set = { {-8, -15}, {-3, -23}, {6, -15}, {-1, -15} } },
	[87] = { .set = { {-8, -7}, {-6, -22}, {6, -19}, {-2, -13} } },
	[88] = { .set = { {-1, -13}, {-8, -16}, {6, -16}, {-1, -16} } },
	[89] = { .set = { {-1, -16}, {-8, -21}, {5, -21}, {-1, -17} } },
	[90] = { .set = { {-1, -8}, {-8, -19}, {6, -19}, {-1, -12} } },
	[91] = { .set = { {-1, -8}, {-9, -18}, {7, -18}, {-1, -12} } },
	[92] = { .set = { {7, -14}, {2, -23}, {-8, -15}, {0, -15} } },
	[93] = { .set = { {5, -16}, {-1, -23}, {-10, -17}, {-2, -13} } },
	[94] = { .set = { {9, -13}, {4, -23}, {-8, -20}, {0, -15} } },
	[95] = { .set = { {9, -13}, {7, -21}, {-8, -19}, {0, -15} } },
	[96] = { .set = { {10, -18}, {-5, -23}, {-7, -15}, {1, -14} } },
	[97] = { .set = { {8, -19}, {-9, -21}, {-10, -14}, {-3, -12} } },
	[98] = { .set = { {15, -16}, {-2, -23}, {-7, -18}, {-1, -12} } },
	[99] = { .set = { {14, -15}, {-1, -21}, {-5, -16}, {0, -12} } },
	[100] = { .set = { {8, -24}, {-11, -20}, {2, -15}, {-1, -14} } },
	[101] = { .set = { {4, -23}, {-11, -17}, {1, -14}, {-3, -11} } },
	[102] = { .set = { {10, -20}, {-7, -24}, {5, -18}, {-1, -15} } },
	[103] = { .set = { {10, -20}, {-5, -21}, {6, -17}, {-1, -15} } },
	[104] = { .set = { {-1, -19}, {8, -17}, {-10, -17}, {-1, -14} } },
	[105] = { .set = { {-1, -25}, {8, -14}, {-9, -14}, {-1, -12} } },
	[106] = { .set = { {-1, -18}, {7, -20}, {-9, -20}, {-1, -14} } },
	[107] = { .set = { {-1, -18}, {8, -18}, {-9, -18}, {-1, -14} } },
	[108] = { .set = { {-10, -24}, {9, -20}, {-4, -15}, {-1, -14} } },
	[109] = { .set = { {-6, -23}, {9, -17}, {-3, -14}, {1, -11} } },
	[110] = { .set = { {-12, -20}, {5, -24}, {-7, -18}, {-1, -15} } },
	[111] = { .set = { {-12, -20}, {3, -21}, {-8, -17}, {-1, -15} } },
	[112] = { .set = { {-12, -18}, {3, -23}, {5, -15}, {-3, -14} } },
	[113] = { .set = { {-10, -19}, {7, -21}, {8, -14}, {1, -12} } },
	[114] = { .set = { {-17, -16}, {0, -23}, {5, -18}, {-1, -12} } },
	[115] = { .set = { {-16, -15}, {-1, -21}, {3, -16}, {-2, -12} } },
	[116] = { .set = { {-9, -14}, {-4, -23}, {6, -15}, {-2, -15} } },
	[117] = { .set = { {-7, -16}, {-1, -23}, {8, -17}, {0, -13} } },
	[118] = { .set = { {-11, -13}, {-6, -23}, {6, -20}, {-2, -15} } },
	[119] = { .set = { {-11, -13}, {-9, -21}, {6, -19}, {-2, -15} } },
	[120] = { .set = { {-1, -13}, {-8, -16}, {6, -16}, {-1, -16} } },
	[121] = { .set = { {-9, -14}, {-4, -23}, {6, -15}, {-2, -15} } },
	[122] = { .set = { {-12, -18}, {3, -23}, {5, -15}, {-3, -14} } },
	[123] = { .set = { {-10, -24}, {9, -20}, {-4, -15}, {-1, -14} } },
	[124] = { .set = { {-1, -19}, {8, -17}, {-10, -17}, {-1, -14} } },
	[125] = { .set = { {8, -24}, {-11, -20}, {2, -15}, {-1, -14} } },
	[126] = { .set = { {10, -18}, {-5, -23}, {-7, -15}, {1, -14} } },
	[127] = { .set = { {7, -14}, {2, -23}, {-8, -15}, {0, -15} } },
	[128] = { .set = { {-8, -14}, {-3, -25}, {8, -21}, {0, -15} } },
	[129] = { .set = { {-8, -15}, {-4, -23}, {7, -17}, {0, -16} } },
	[130] = { .set = { {-1, -12}, {-11, -21}, {8, -21}, {-1, -14} } },
	[131] = { .set = { {6, -14}, {0, -23}, {-8, -17}, {-1, -14} } },
	[132] = { .set = { {7, -18}, {-6, -19}, {-7, -13}, {-2, -13} } },
	[133] = { .set = { {7, -23}, {-9, -20}, {4, -16}, {-1, -12} } },
	[134] = { .set = { {0, -24}, {10, -16}, {-10, -16}, {0, -11} } },
	[135] = { .set = { {-8, -23}, {8, -20}, {-5, -16}, {0, -12} } },
	[136] = { .set = { {-8, -18}, {5, -19}, {6, -13}, {1, -13} } },
	[137] = { .set = { {-7, -14}, {-1, -23}, {7, -17}, {0, -14} } },
	[138] = { .set = { {-1, -13}, {-8, -16}, {6, -16}, {-1, -16} } },
	[139] = { .set = { {-1, -11}, {-7, -17}, {5, -17}, {-1, -14} } },
	[140] = { .set = { {-1, -15}, {-9, -17}, {6, -17}, {-1, -17} } },
	[141] = { .set = { {7, -14}, {2, -23}, {-8, -15}, {0, -15} } },
	[142] = { .set = { {8, -13}, {1, -23}, {-6, -17}, {-1, -14} } },
	[143] = { .set = { {7, -15}, {2, -23}, {-7, -15}, {0, -15} } },
	[144] = { .set = { {10, -18}, {-5, -23}, {-7, -15}, {1, -14} } },
	[145] = { .set = { {12, -17}, {-7, -23}, {-8, -17}, {-2, -13} } },
	[146] = { .set = { {9, -20}, {-5, -23}, {-4, -14}, {-1, -14} } },
	[147] = { .set = { {8, -24}, {-11, -20}, {2, -15}, {-1, -14} } },
	[148] = { .set = { {10, -24}, {-9, -18}, {-3, -15}, {-2, -13} } },
	[149] = { .set = { {7, -25}, {-9, -21}, {6, -16}, {-1, -14} } },
	[150] = { .set = { {-1, -19}, {8, -17}, {-10, -17}, {-1, -14} } },
	[151] = { .set = { {-1, -22}, {5, -16}, {-7, -16}, {-1, -15} } },
	[152] = { .set = { {-1, -21}, {9, -18}, {-11, -18}, {-1, -13} } },
	[153] = { .set = { {-10, -24}, {9, -20}, {-4, -15}, {-1, -14} } },
	[154] = { .set = { {-12, -24}, {7, -18}, {1, -15}, {0, -13} } },
	[155] = { .set = { {-9, -25}, {7, -21}, {-8, -16}, {-1, -14} } },
	[156] = { .set = { {-12, -18}, {3, -23}, {5, -15}, {-3, -14} } },
	[157] = { .set = { {-14, -17}, {5, -23}, {6, -17}, {0, -13} } },
	[158] = { .set = { {-11, -20}, {3, -23}, {2, -14}, {-1, -14} } },
	[159] = { .set = { {-9, -14}, {-4, -23}, {6, -15}, {-2, -15} } },
	[160] = { .set = { {-10, -13}, {-3, -23}, {4, -17}, {-1, -14} } },
	[161] = { .set = { {-9, -15}, {-4, -23}, {5, -15}, {-2, -15} } },
	[162] = { .set = { {-1, -7}, {-8, -18}, {5, -18}, {-1, -12} } },
	[163] = { .set = { {-8, -7}, {-6, -22}, {6, -19}, {-2, -13} } },
	[164] = { .set = { {-12, -8}, {0, -23}, {4, -17}, {0, -13} } },
	[165] = { .set = { {-9, -12}, {4, -22}, {-7, -17}, {-1, -14} } },
	[166] = { .set = { {-1, -19}, {7, -20}, {-9, -20}, {-1, -14} } },
	[167] = { .set = { {7, -12}, {-6, -22}, {5, -17}, {-1, -14} } },
	[168] = { .set = { {10, -8}, {-2, -23}, {-6, -17}, {-2, -13} } },
	[169] = { .set = { {6, -7}, {4, -22}, {-8, -19}, {0, -13} } },
	[170] = { .set = { {-1, -16}, {-8, -21}, {5, -21}, {-1, -17} } },
	[171] = { .set = { {6, -17}, {0, -24}, {-9, -18}, {-1, -14} } },
	[172] = { .set = { {8, -19}, {-9, -21}, {-10, -14}, {-3, -12} } },
	[173] = { .set = { {4, -25}, {-11, -19}, {1, -16}, {-3, -13} } },
	[174] = { .set = { {-1, -25}, {8, -14}, {-9, -14}, {-1, -12} } },
	[175] = { .set = { {-6, -25}, {9, -19}, {-3, -16}, {1, -13} } },
	[176] = { .set = { {-10, -19}, {7, -21}, {8, -14}, {1, -12} } },
	[177] = { .set = { {-8, -17}, {-2, -24}, {7, -18}, {-1, -14} } },
	[178] = { .set = { {-1, -13}, {-8, -16}, {6, -16}, {-1, -16} } },
	[179] = { .set = { {-1, -15}, {-9, -17}, {6, -17}, {-1, -17} } },
	[180] = { .set = { {-1, -11}, {-7, -17}, {5, -17}, {-1, -14} } },
	[181] = { .set = { {7, -14}, {2, -23}, {-8, -15}, {0, -15} } },
	[182] = { .set = { {7, -15}, {2, -23}, {-7, -15}, {0, -15} } },
	[183] = { .set = { {8, -13}, {1, -23}, {-6, -17}, {-1, -14} } },
	[184] = { .set = { {10, -18}, {-5, -23}, {-7, -15}, {1, -14} } },
	[185] = { .set = { {9, -20}, {-5, -23}, {-4, -14}, {-1, -14} } },
	[186] = { .set = { {12, -17}, {-7, -23}, {-8, -17}, {-2, -13} } },
	[187] = { .set = { {8, -24}, {-11, -20}, {2, -15}, {-1, -14} } },
	[188] = { .set = { {7, -25}, {-9, -21}, {6, -16}, {-1, -14} } },
	[189] = { .set = { {9, -25}, {-10, -19}, {-4, -16}, {-3, -14} } },
	[190] = { .set = { {-1, -19}, {8, -17}, {-10, -17}, {-1, -14} } },
	[191] = { .set = { {-1, -19}, {9, -16}, {-11, -16}, {-1, -11} } },
	[192] = { .set = { {-1, -22}, {5, -16}, {-7, -16}, {-1, -15} } },
	[193] = { .set = { {-10, -24}, {9, -20}, {-4, -15}, {-1, -14} } },
	[194] = { .set = { {-9, -25}, {7, -21}, {-8, -16}, {-1, -14} } },
	[195] = { .set = { {-11, -24}, {8, -18}, {2, -15}, {1, -13} } },
	[196] = { .set = { {-11, -18}, {4, -23}, {6, -15}, {-2, -14} } },
	[197] = { .set = { {-10, -20}, {4, -23}, {3, -14}, {0, -14} } },
	[198] = { .set = { {-13, -17}, {6, -23}, {7, -17}, {1, -13} } },
	[199] = { .set = { {-8, -14}, {-3, -23}, {7, -15}, {-1, -15} } },
	[200] = { .set = { {-8, -15}, {-3, -23}, {6, -15}, {-1, -15} } },
	[201] = { .set = { {-9, -13}, {-2, -23}, {5, -17}, {0, -14} } },
	[202] = { .set = { {-1, -15}, {-9, -17}, {6, -17}, {-1, -17} } },
	[203] = { .set = { {-8, -17}, {-3, -25}, {6, -17}, {-1, -17} } },
	[204] = { .set = { {-10, -20}, {4, -23}, {3, -14}, {0, -14} } },
	[205] = { .set = { {-9, -26}, {7, -22}, {-8, -17}, {-1, -15} } },
	[206] = { .set = { {-1, -22}, {9, -19}, {-11, -19}, {-1, -14} } },
	[207] = { .set = { {7, -26}, {-9, -22}, {6, -17}, {-1, -15} } },
	[208] = { .set = { {9, -20}, {-5, -23}, {-4, -14}, {-1, -14} } },
	[209] = { .set = { {7, -17}, {2, -25}, {-7, -17}, {0, -17} } },
	[210] = { .set = { {-1, -13}, {-8, -16}, {6, -16}, {-1, -16} } },
	[211] = { .set = { {-9, -14}, {-4, -23}, {6, -15}, {-2, -15} } },
	[212] = { .set = { {-12, -18}, {3, -23}, {5, -15}, {-3, -14} } },
	[213] = { .set = { {-10, -24}, {9, -20}, {-4, -15}, {-1, -14} } },
	[214] = { .set = { {-1, -19}, {8, -17}, {-10, -17}, {-1, -14} } },
	[215] = { .set = { {8, -24}, {-11, -20}, {2, -15}, {-1, -14} } },
	[216] = { .set = { {10, -18}, {-5, -23}, {-7, -15}, {1, -14} } },
	[217] = { .set = { {7, -14}, {2, -23}, {-8, -15}, {0, -15} } },
};

static const ax_anim *const sSeadraAnimTable1[] = {
	sSeadraAnims_1_1,
	sSeadraAnims_1_2,
	sSeadraAnims_1_3,
	sSeadraAnims_1_4,
	sSeadraAnims_1_5,
	sSeadraAnims_1_6,
	sSeadraAnims_1_7,
	sSeadraAnims_1_8,
};

static const ax_anim *const sSeadraAnimTable2[] = {
	sSeadraAnims_2_1,
	gAxSharedAnim_01816,
	sSeadraAnims_2_3,
	sSeadraAnims_2_4,
	gAxSharedAnim_01928,
	sSeadraAnims_2_6,
	sSeadraAnims_2_7,
	gAxSharedAnim_01996,
};

static const ax_anim *const sSeadraAnimTable3[] = {
	sSeadraAnims_3_1,
	gAxSharedAnim_02035,
	sSeadraAnims_3_3,
	sSeadraAnims_3_4,
	gAxSharedAnim_02106,
	sSeadraAnims_3_6,
	sSeadraAnims_3_7,
	gAxSharedAnim_02203,
};

static const ax_anim *const sSeadraAnimTable4[] = {
	sSeadraAnims_4_1,
	sSeadraAnims_4_2,
	sSeadraAnims_4_3,
	sSeadraAnims_4_4,
	sSeadraAnims_4_5,
	sSeadraAnims_4_6,
	sSeadraAnims_4_7,
	sSeadraAnims_4_8,
};

static const ax_anim *const sSeadraAnimTable5[] = {
	gAxSharedAnim_00321,
	gAxSharedAnim_00373,
	gAxSharedAnim_00366,
	gAxSharedAnim_00360,
	gAxSharedAnim_00354,
	gAxSharedAnim_00344,
	gAxSharedAnim_00336,
	gAxSharedAnim_00327,
};

static const ax_anim *const sSeadraAnimTable6[] = {
	gAxSharedAnim_00134,
	gAxSharedAnim_00134,
	gAxSharedAnim_00134,
	gAxSharedAnim_00134,
	gAxSharedAnim_00134,
	gAxSharedAnim_00134,
	gAxSharedAnim_00134,
	gAxSharedAnim_00134,
};

static const ax_anim *const sSeadraAnimTable7[] = {
	gAxSharedAnim_00396,
	gAxSharedAnim_00402,
	gAxSharedAnim_00413,
	gAxSharedAnim_00422,
	gAxSharedAnim_00434,
	gAxSharedAnim_00442,
	gAxSharedAnim_00451,
	gAxSharedAnim_00461,
};

static const ax_anim *const sSeadraAnimTable8[] = {
	sSeadraAnims_8_1,
	sSeadraAnims_8_2,
	sSeadraAnims_8_3,
	sSeadraAnims_8_4,
	sSeadraAnims_8_5,
	sSeadraAnims_8_6,
	sSeadraAnims_8_7,
	sSeadraAnims_8_8,
};

static const ax_anim *const sSeadraAnimTable9[] = {
	sSeadraAnims_9_1,
	sSeadraAnims_9_2,
	sSeadraAnims_9_3,
	sSeadraAnims_9_4,
	sSeadraAnims_9_5,
	sSeadraAnims_9_6,
	sSeadraAnims_9_7,
	sSeadraAnims_9_8,
};

static const ax_anim *const sSeadraAnimTable10[] = {
	gAxSharedAnim_00801,
	gAxSharedAnim_00813,
	gAxSharedAnim_00827,
	gAxSharedAnim_00838,
	gAxSharedAnim_00849,
	gAxSharedAnim_00862,
	gAxSharedAnim_00879,
	gAxSharedAnim_00889,
};

static const ax_anim *const sSeadraAnimTable11[] = {
	sSeadraAnims_11_1,
	sSeadraAnims_11_2,
	sSeadraAnims_11_3,
	sSeadraAnims_11_4,
	sSeadraAnims_11_5,
	sSeadraAnims_11_6,
	sSeadraAnims_11_7,
	sSeadraAnims_11_8,
};

static const ax_anim *const sSeadraAnimTable12[] = {
	gAxSharedAnim_01243,
	gAxSharedAnim_01326,
	gAxSharedAnim_01308,
	gAxSharedAnim_01292,
	gAxSharedAnim_01291,
	gAxSharedAnim_01280,
	gAxSharedAnim_01260,
	gAxSharedAnim_01244,
};

static const ax_anim *const sSeadraAnimTable13[] = {
	gAxSharedAnim_01335,
	gAxSharedAnim_01409,
	gAxSharedAnim_01397,
	gAxSharedAnim_01386,
	gAxSharedAnim_01374,
	gAxSharedAnim_01366,
	gAxSharedAnim_01358,
	gAxSharedAnim_01348,
};

static const ax_anim *const *const sAxAnimationsSeadra[] = {
	sSeadraAnimTable1,
	sSeadraAnimTable2,
	sSeadraAnimTable3,
	sSeadraAnimTable4,
	sSeadraAnimTable5,
	sSeadraAnimTable6,
	sSeadraAnimTable7,
	sSeadraAnimTable8,
	sSeadraAnimTable9,
	sSeadraAnimTable10,
	sSeadraAnimTable11,
	sSeadraAnimTable12,
	sSeadraAnimTable13,
};

static const ax_sprite *const sAxSpritesSeadra[] = {
	sSeadraSprites1,
	sSeadraSprites2,
	sSeadraSprites3,
	sSeadraSprites4,
	sSeadraSprites5,
	sSeadraSprites6,
	sSeadraSprites7,
	sSeadraSprites8,
	sSeadraSprites9,
	sSeadraSprites10,
	sSeadraSprites11,
	sSeadraSprites12,
	sSeadraSprites13,
	sSeadraSprites14,
	sSeadraSprites15,
	sSeadraSprites16,
	sSeadraSprites17,
	sSeadraSprites18,
	sSeadraSprites19,
	sSeadraSprites20,
	sSeadraSprites21,
	sSeadraSprites22,
	sSeadraSprites23,
	sSeadraSprites24,
	sSeadraSprites25,
	sSeadraSprites26,
	sSeadraSprites27,
	sSeadraSprites28,
	sSeadraSprites29,
	sSeadraSprites30,
	sSeadraSprites31,
	sSeadraSprites32,
	sSeadraSprites33,
	sSeadraSprites34,
	sSeadraSprites35,
	sSeadraSprites36,
	sSeadraSprites37,
	sSeadraSprites38,
	sSeadraSprites39,
	sSeadraSprites40,
	sSeadraSprites41,
	sSeadraSprites42,
};

static const axmain sAxMainSeadra = {
	.poses = sAxPosesSeadra,
	.animations = sAxAnimationsSeadra,
	.animCount = ARRAY_COUNT(sAxAnimationsSeadra),
	.spriteData = sAxSpritesSeadra,
	.positions = sAxPositionsSeadra,
};
