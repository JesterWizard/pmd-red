/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainHorsea;
const SiroArchive gAxHorsea = {"SIRO", &sAxMainHorsea};

static const ax_pose sHorseaPose1[] = {
	AX_POSE(0, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose2[] = {
	AX_POSE(1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose3[] = {
	AX_POSE(2, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose4[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose5[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose6[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose7[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose8[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose9[] = {
	AX_POSE(8, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose10[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose11[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose12[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose13[] = {
	AX_POSE(12, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose14[] = {
	AX_POSE(13, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose15[] = {
	AX_POSE(14, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose16[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose17[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose18[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose19[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose20[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose21[] = {
	AX_POSE(8, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose22[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose23[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose24[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose28[] = {
	AX_POSE(15, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose32[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose36[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose40[] = {
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose44[] = {
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose48[] = {
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose52[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose56[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose90[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose91[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose93[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose94[] = {
	AX_POSE(23, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose96[] = {
	AX_POSE(24, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose97[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose99[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose100[] = {
	AX_POSE(27, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose102[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose103[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose105[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose106[] = {
	AX_POSE(27, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose108[] = {
	AX_POSE(24, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose109[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose111[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose112[] = {
	AX_POSE(23, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose121[] = {
	AX_POSE(30, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose122[] = {
	AX_POSE(31, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose123[] = {
	AX_POSE(32, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose124[] = {
	AX_POSE(33, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose125[] = {
	AX_POSE(34, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose126[] = {
	AX_POSE(35, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose127[] = {
	AX_POSE(36, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose128[] = {
	AX_POSE(35, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose129[] = {
	AX_POSE(34, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose130[] = {
	AX_POSE(33, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose140[] = {
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose141[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose142[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose144[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose145[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose146[] = {
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose148[] = {
	AX_POSE(22, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose149[] = {
	AX_POSE(24, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose150[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose151[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose152[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose153[] = {
	AX_POSE(24, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose154[] = {
	AX_POSE(22, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose157[] = {
	AX_POSE(1, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose160[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose178[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose179[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose180[] = {
	AX_POSE(23, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose181[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose182[] = {
	AX_POSE(27, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose183[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose184[] = {
	AX_POSE(27, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose185[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHorseaPose186[] = {
	AX_POSE(23, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_anim sHorseaAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 26, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 13}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 26}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 27, .offset = {1, 26}, .shadow = {1, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 26}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {1, 26}, .shadow = {1, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 34, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 33, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {13, 3}, .shadow = {13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {18, 5}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {18, 6}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {18, 5}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {18, 6}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {6, 1}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 38, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 37, .offset = {6, -5}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {12, -9}, .shadow = {12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {20, -15}, .shadow = {20, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {21, -14}, .shadow = {21, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {20, -15}, .shadow = {20, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {21, -14}, .shadow = {21, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {7, -5}, .shadow = {7, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 46, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 45, .offset = {-6, -5}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {-12, -9}, .shadow = {-12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-20, -15}, .shadow = {-20, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-21, -14}, .shadow = {-21, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-20, -15}, .shadow = {-20, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-21, -14}, .shadow = {-21, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-7, -5}, .shadow = {-7, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 50, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 49, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {-13, 3}, .shadow = {-13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-18, 5}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {-18, 6}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-18, 5}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-18, 6}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {-6, 1}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 58, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 57, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {0, 13}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, 26}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 59, .offset = {1, 26}, .shadow = {1, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, 26}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {1, 26}, .shadow = {1, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 66, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 65, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {13, 3}, .shadow = {13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {18, 5}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {18, 6}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {18, 5}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {18, 6}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {6, 1}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 70, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 69, .offset = {6, -5}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {12, -9}, .shadow = {12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {20, -15}, .shadow = {20, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {21, -14}, .shadow = {21, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {20, -15}, .shadow = {20, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {21, -14}, .shadow = {21, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {7, -5}, .shadow = {7, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 78, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 76, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 77, .offset = {-6, -5}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 77, .offset = {-12, -9}, .shadow = {-12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-20, -15}, .shadow = {-20, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {-21, -14}, .shadow = {-21, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-20, -15}, .shadow = {-20, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-21, -14}, .shadow = {-21, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-7, -5}, .shadow = {-7, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 82, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 80, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 81, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 81, .offset = {-13, 3}, .shadow = {-13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-18, 5}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {-18, 6}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-18, 5}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-18, 6}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-6, 1}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 89, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 90, .offset = {-1, 4}, .shadow = {-1, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-1, 4}, .shadow = {-1, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-1, 4}, .shadow = {-1, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, 2}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 92, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 93, .offset = {3, 5}, .shadow = {3, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {3, 5}, .shadow = {3, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {3, 5}, .shadow = {3, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {2, 2}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 95, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 96, .offset = {4, 1}, .shadow = {4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {4, 1}, .shadow = {4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {4, 1}, .shadow = {4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 98, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {2, -2}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 101, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 102, .offset = {-1, -4}, .shadow = {-1, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {-1, -4}, .shadow = {-1, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {-1, -4}, .shadow = {-1, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 104, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 105, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-2, -2}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 107, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 108, .offset = {-4, 1}, .shadow = {-4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-4, 1}, .shadow = {-4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-4, 1}, .shadow = {-4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 110, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 111, .offset = {-3, 5}, .shadow = {-3, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-3, 5}, .shadow = {-3, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-3, 5}, .shadow = {-3, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {-2, 2}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_8_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 130, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 130, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_8_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 137, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 137, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_8_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 136, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 136, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_8_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 135, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 135, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_8_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 134, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 134, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_8_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 133, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 133, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_8_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 132, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 132, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_8_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 131, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 131, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {6, 5}, .shadow = {6, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {8, 14}, .shadow = {8, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {5, 23}, .shadow = {5, 20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 142, .offset = {0, 25}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 143, .offset = {-5, 23}, .shadow = {-5, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-8, 14}, .shadow = {-8, 13} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {-6, 5}, .shadow = {-6, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {18, 5}, .shadow = {18, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {21, 15}, .shadow = {21, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 141, .offset = {21, 26}, .shadow = {21, 22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 142, .offset = {13, 25}, .shadow = {13, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {5, 19}, .shadow = {5, 17} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {0, 9}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {17, -3}, .shadow = {17, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 140, .offset = {20, 4}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 141, .offset = {17, 10}, .shadow = {17, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {12, 9}, .shadow = {12, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {12, -20}, .shadow = {12, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 139, .offset = {21, -17}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 140, .offset = {20, -13}, .shadow = {20, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {17, -4}, .shadow = {17, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {7, -2}, .shadow = {7, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-7, -17}, .shadow = {-7, -19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 138, .offset = {0, -19}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 139, .offset = {7, -17}, .shadow = {7, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {9, -10}, .shadow = {9, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {-12, -20}, .shadow = {-12, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 145, .offset = {-21, -17}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 144, .offset = {-20, -13}, .shadow = {-20, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {-17, -4}, .shadow = {-17, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {-7, -2}, .shadow = {-7, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-17, -3}, .shadow = {-17, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 144, .offset = {-20, 4}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 143, .offset = {-17, 10}, .shadow = {-17, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {-12, 9}, .shadow = {-12, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-19, 10}, .shadow = {-19, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 143, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 142, .offset = {-11, 19}, .shadow = {-11, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 155, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 155, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 154, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 156, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 156, .offset = {0, 5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 158, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 158, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 157, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 159, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 159, .offset = {0, 5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 161, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 161, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 160, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 162, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 162, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 164, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 164, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 163, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 165, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 165, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 167, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 167, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 166, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 168, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 168, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 170, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 170, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 169, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 171, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 171, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 173, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 173, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 172, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 174, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 174, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sHorseaAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 176, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 176, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 175, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 177, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 177, .offset = {0, 5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sHorseaGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_1.4bpp.lz");
static const ax_sprite sHorseaSprites1[] = {
	{sHorseaGfx1, ARRAY_COUNT(sHorseaGfx1)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_2.4bpp.lz");
static const ax_sprite sHorseaSprites2[] = {
	{sHorseaGfx2, ARRAY_COUNT(sHorseaGfx2)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_3.4bpp.lz");
static const ax_sprite sHorseaSprites3[] = {
	{sHorseaGfx3, ARRAY_COUNT(sHorseaGfx3)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_4.4bpp.lz");
static const ax_sprite sHorseaSprites4[] = {
	{sHorseaGfx4, ARRAY_COUNT(sHorseaGfx4)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_5.4bpp.lz");
static const ax_sprite sHorseaSprites5[] = {
	{sHorseaGfx5, ARRAY_COUNT(sHorseaGfx5)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_6.4bpp.lz");
static const ax_sprite sHorseaSprites6[] = {
	{sHorseaGfx6, ARRAY_COUNT(sHorseaGfx6)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_7.4bpp.lz");
static const ax_sprite sHorseaSprites7[] = {
	{sHorseaGfx7, ARRAY_COUNT(sHorseaGfx7)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_8.4bpp.lz");
static const ax_sprite sHorseaSprites8[] = {
	{sHorseaGfx8, ARRAY_COUNT(sHorseaGfx8)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_9.4bpp.lz");
static const ax_sprite sHorseaSprites9[] = {
	{sHorseaGfx9, ARRAY_COUNT(sHorseaGfx9)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_10.4bpp.lz");
static const ax_sprite sHorseaSprites10[] = {
	{sHorseaGfx10, ARRAY_COUNT(sHorseaGfx10)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_11.4bpp.lz");
static const ax_sprite sHorseaSprites11[] = {
	{sHorseaGfx11, ARRAY_COUNT(sHorseaGfx11)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_12.4bpp.lz");
static const ax_sprite sHorseaSprites12[] = {
	{sHorseaGfx12, ARRAY_COUNT(sHorseaGfx12)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_13.4bpp.lz");
static const ax_sprite sHorseaSprites13[] = {
	{sHorseaGfx13, ARRAY_COUNT(sHorseaGfx13)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_14.4bpp.lz");
static const ax_sprite sHorseaSprites14[] = {
	{sHorseaGfx14, ARRAY_COUNT(sHorseaGfx14)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_15.4bpp.lz");
static const ax_sprite sHorseaSprites15[] = {
	{sHorseaGfx15, ARRAY_COUNT(sHorseaGfx15)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_16.4bpp.lz");
static const u8 sHorseaGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_16_1.4bpp.lz");
static const u8 sHorseaGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_16_2.4bpp.lz");
static const ax_sprite sHorseaSprites16[] = {
	{NULL, 32}, 
	{sHorseaGfx16, ARRAY_COUNT(sHorseaGfx16)}, 
	{NULL, 64}, 
	{sHorseaGfx16_1, ARRAY_COUNT(sHorseaGfx16_1)}, 
	{NULL, 32}, 
	{sHorseaGfx16_2, ARRAY_COUNT(sHorseaGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHorseaGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_17.4bpp.lz");
static const u8 sHorseaGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_17_1.4bpp.lz");
static const u8 sHorseaGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_17_2.4bpp.lz");
static const ax_sprite sHorseaSprites17[] = {
	{sHorseaGfx17, ARRAY_COUNT(sHorseaGfx17)}, 
	{NULL, 96}, 
	{sHorseaGfx17_1, ARRAY_COUNT(sHorseaGfx17_1)}, 
	{NULL, 32}, 
	{sHorseaGfx17_2, ARRAY_COUNT(sHorseaGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHorseaGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_18.4bpp.lz");
static const u8 sHorseaGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_18_1.4bpp.lz");
static const u8 sHorseaGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_18_2.4bpp.lz");
static const ax_sprite sHorseaSprites18[] = {
	{sHorseaGfx18, ARRAY_COUNT(sHorseaGfx18)}, 
	{NULL, 64}, 
	{sHorseaGfx18_1, ARRAY_COUNT(sHorseaGfx18_1)}, 
	{NULL, 32}, 
	{sHorseaGfx18_2, ARRAY_COUNT(sHorseaGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHorseaGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_19.4bpp.lz");
static const u8 sHorseaGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_19_1.4bpp.lz");
static const u8 sHorseaGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_19_2.4bpp.lz");
static const ax_sprite sHorseaSprites19[] = {
	{sHorseaGfx19, ARRAY_COUNT(sHorseaGfx19)}, 
	{NULL, 64}, 
	{sHorseaGfx19_1, ARRAY_COUNT(sHorseaGfx19_1)}, 
	{NULL, 32}, 
	{sHorseaGfx19_2, ARRAY_COUNT(sHorseaGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHorseaGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_20.4bpp.lz");
static const u8 sHorseaGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_20_1.4bpp.lz");
static const u8 sHorseaGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_20_2.4bpp.lz");
static const u8 sHorseaGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_20_3.4bpp.lz");
static const ax_sprite sHorseaSprites20[] = {
	{sHorseaGfx20, ARRAY_COUNT(sHorseaGfx20)}, 
	{NULL, 32}, 
	{sHorseaGfx20_1, ARRAY_COUNT(sHorseaGfx20_1)}, 
	{NULL, 32}, 
	{sHorseaGfx20_2, ARRAY_COUNT(sHorseaGfx20_2)}, 
	{NULL, 64}, 
	{sHorseaGfx20_3, ARRAY_COUNT(sHorseaGfx20_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sHorseaGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_21.4bpp.lz");
static const u8 sHorseaGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_21_1.4bpp.lz");
static const u8 sHorseaGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_21_2.4bpp.lz");
static const ax_sprite sHorseaSprites21[] = {
	{sHorseaGfx21, ARRAY_COUNT(sHorseaGfx21)}, 
	{NULL, 32}, 
	{sHorseaGfx21_1, ARRAY_COUNT(sHorseaGfx21_1)}, 
	{NULL, 64}, 
	{sHorseaGfx21_2, ARRAY_COUNT(sHorseaGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHorseaGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_22.4bpp.lz");
static const u8 sHorseaGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_22_1.4bpp.lz");
static const u8 sHorseaGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_22_2.4bpp.lz");
static const ax_sprite sHorseaSprites22[] = {
	{sHorseaGfx22, ARRAY_COUNT(sHorseaGfx22)}, 
	{NULL, 32}, 
	{sHorseaGfx22_1, ARRAY_COUNT(sHorseaGfx22_1)}, 
	{NULL, 32}, 
	{sHorseaGfx22_2, ARRAY_COUNT(sHorseaGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHorseaGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_23.4bpp.lz");
static const u8 sHorseaGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_23_1.4bpp.lz");
static const u8 sHorseaGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_23_2.4bpp.lz");
static const ax_sprite sHorseaSprites23[] = {
	{sHorseaGfx23, ARRAY_COUNT(sHorseaGfx23)}, 
	{NULL, 32}, 
	{sHorseaGfx23_1, ARRAY_COUNT(sHorseaGfx23_1)}, 
	{NULL, 32}, 
	{sHorseaGfx23_2, ARRAY_COUNT(sHorseaGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHorseaGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_24.4bpp.lz");
static const u8 sHorseaGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_24_1.4bpp.lz");
static const u8 sHorseaGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_24_2.4bpp.lz");
static const ax_sprite sHorseaSprites24[] = {
	{sHorseaGfx24, ARRAY_COUNT(sHorseaGfx24)}, 
	{NULL, 64}, 
	{sHorseaGfx24_1, ARRAY_COUNT(sHorseaGfx24_1)}, 
	{NULL, 32}, 
	{sHorseaGfx24_2, ARRAY_COUNT(sHorseaGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHorseaGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_25.4bpp.lz");
static const u8 sHorseaGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_25_1.4bpp.lz");
static const u8 sHorseaGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_25_2.4bpp.lz");
static const ax_sprite sHorseaSprites25[] = {
	{NULL, 32}, 
	{sHorseaGfx25, ARRAY_COUNT(sHorseaGfx25)}, 
	{NULL, 32}, 
	{sHorseaGfx25_1, ARRAY_COUNT(sHorseaGfx25_1)}, 
	{NULL, 64}, 
	{sHorseaGfx25_2, ARRAY_COUNT(sHorseaGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHorseaGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_26.4bpp.lz");
static const u8 sHorseaGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_26_1.4bpp.lz");
static const u8 sHorseaGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_26_2.4bpp.lz");
static const ax_sprite sHorseaSprites26[] = {
	{sHorseaGfx26, ARRAY_COUNT(sHorseaGfx26)}, 
	{NULL, 64}, 
	{sHorseaGfx26_1, ARRAY_COUNT(sHorseaGfx26_1)}, 
	{NULL, 32}, 
	{sHorseaGfx26_2, ARRAY_COUNT(sHorseaGfx26_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHorseaGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_27.4bpp.lz");
static const u8 sHorseaGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_27_1.4bpp.lz");
static const u8 sHorseaGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_27_2.4bpp.lz");
static const ax_sprite sHorseaSprites27[] = {
	{sHorseaGfx27, ARRAY_COUNT(sHorseaGfx27)}, 
	{NULL, 32}, 
	{sHorseaGfx27_1, ARRAY_COUNT(sHorseaGfx27_1)}, 
	{NULL, 32}, 
	{sHorseaGfx27_2, ARRAY_COUNT(sHorseaGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHorseaGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_28.4bpp.lz");
static const u8 sHorseaGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_28_1.4bpp.lz");
static const u8 sHorseaGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_28_2.4bpp.lz");
static const ax_sprite sHorseaSprites28[] = {
	{sHorseaGfx28, ARRAY_COUNT(sHorseaGfx28)}, 
	{NULL, 32}, 
	{sHorseaGfx28_1, ARRAY_COUNT(sHorseaGfx28_1)}, 
	{NULL, 32}, 
	{sHorseaGfx28_2, ARRAY_COUNT(sHorseaGfx28_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHorseaGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_29.4bpp.lz");
static const u8 sHorseaGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_29_1.4bpp.lz");
static const u8 sHorseaGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_29_2.4bpp.lz");
static const u8 sHorseaGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_29_3.4bpp.lz");
static const ax_sprite sHorseaSprites29[] = {
	{NULL, 32}, 
	{sHorseaGfx29, ARRAY_COUNT(sHorseaGfx29)}, 
	{NULL, 64}, 
	{sHorseaGfx29_1, ARRAY_COUNT(sHorseaGfx29_1)}, 
	{NULL, 32}, 
	{sHorseaGfx29_2, ARRAY_COUNT(sHorseaGfx29_2)}, 
	{NULL, 64}, 
	{sHorseaGfx29_3, ARRAY_COUNT(sHorseaGfx29_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sHorseaGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_30.4bpp.lz");
static const u8 sHorseaGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_30_1.4bpp.lz");
static const u8 sHorseaGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_30_2.4bpp.lz");
static const ax_sprite sHorseaSprites30[] = {
	{sHorseaGfx30, ARRAY_COUNT(sHorseaGfx30)}, 
	{NULL, 32}, 
	{sHorseaGfx30_1, ARRAY_COUNT(sHorseaGfx30_1)}, 
	{NULL, 32}, 
	{sHorseaGfx30_2, ARRAY_COUNT(sHorseaGfx30_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sHorseaGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_31.4bpp.lz");
static const ax_sprite sHorseaSprites31[] = {
	{sHorseaGfx31, ARRAY_COUNT(sHorseaGfx31)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_32.4bpp.lz");
static const ax_sprite sHorseaSprites32[] = {
	{sHorseaGfx32, ARRAY_COUNT(sHorseaGfx32)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_33.4bpp.lz");
static const ax_sprite sHorseaSprites33[] = {
	{sHorseaGfx33, ARRAY_COUNT(sHorseaGfx33)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_34.4bpp.lz");
static const ax_sprite sHorseaSprites34[] = {
	{sHorseaGfx34, ARRAY_COUNT(sHorseaGfx34)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_35.4bpp.lz");
static const ax_sprite sHorseaSprites35[] = {
	{sHorseaGfx35, ARRAY_COUNT(sHorseaGfx35)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_36.4bpp.lz");
static const ax_sprite sHorseaSprites36[] = {
	{sHorseaGfx36, ARRAY_COUNT(sHorseaGfx36)}, 
	{NULL, 0}
};
static const u8 sHorseaGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/horsea/sprite_37.4bpp.lz");
static const ax_sprite sHorseaSprites37[] = {
	{sHorseaGfx37, ARRAY_COUNT(sHorseaGfx37)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesHorsea[] = {
	sHorseaPose1,
	sHorseaPose2,
	sHorseaPose3,
	sHorseaPose4,
	sHorseaPose5,
	sHorseaPose6,
	sHorseaPose7,
	sHorseaPose8,
	sHorseaPose9,
	sHorseaPose10,
	sHorseaPose11,
	sHorseaPose12,
	sHorseaPose13,
	sHorseaPose14,
	sHorseaPose15,
	sHorseaPose16,
	sHorseaPose17,
	sHorseaPose18,
	sHorseaPose19,
	sHorseaPose20,
	sHorseaPose21,
	sHorseaPose22,
	sHorseaPose23,
	sHorseaPose24,
	sHorseaPose1,
	sHorseaPose2,
	sHorseaPose3,
	sHorseaPose28,
	sHorseaPose4,
	sHorseaPose5,
	sHorseaPose6,
	sHorseaPose32,
	sHorseaPose7,
	sHorseaPose8,
	sHorseaPose9,
	sHorseaPose36,
	sHorseaPose10,
	sHorseaPose11,
	sHorseaPose12,
	sHorseaPose40,
	sHorseaPose13,
	sHorseaPose14,
	sHorseaPose15,
	sHorseaPose44,
	sHorseaPose16,
	sHorseaPose17,
	sHorseaPose18,
	sHorseaPose48,
	sHorseaPose19,
	sHorseaPose20,
	sHorseaPose21,
	sHorseaPose52,
	sHorseaPose22,
	sHorseaPose23,
	sHorseaPose24,
	sHorseaPose56,
	sHorseaPose1,
	sHorseaPose2,
	sHorseaPose3,
	sHorseaPose28,
	sHorseaPose4,
	sHorseaPose5,
	sHorseaPose6,
	sHorseaPose32,
	sHorseaPose7,
	sHorseaPose8,
	sHorseaPose9,
	sHorseaPose36,
	sHorseaPose10,
	sHorseaPose11,
	sHorseaPose12,
	sHorseaPose40,
	sHorseaPose13,
	sHorseaPose14,
	sHorseaPose15,
	sHorseaPose44,
	sHorseaPose16,
	sHorseaPose17,
	sHorseaPose18,
	sHorseaPose48,
	sHorseaPose19,
	sHorseaPose20,
	sHorseaPose21,
	sHorseaPose52,
	sHorseaPose22,
	sHorseaPose23,
	sHorseaPose24,
	sHorseaPose56,
	sHorseaPose1,
	sHorseaPose90,
	sHorseaPose91,
	sHorseaPose4,
	sHorseaPose93,
	sHorseaPose94,
	sHorseaPose7,
	sHorseaPose96,
	sHorseaPose97,
	sHorseaPose10,
	sHorseaPose99,
	sHorseaPose100,
	sHorseaPose13,
	sHorseaPose102,
	sHorseaPose103,
	sHorseaPose16,
	sHorseaPose105,
	sHorseaPose106,
	sHorseaPose19,
	sHorseaPose108,
	sHorseaPose109,
	sHorseaPose22,
	sHorseaPose111,
	sHorseaPose112,
	sHorseaPose1,
	sHorseaPose22,
	sHorseaPose19,
	sHorseaPose16,
	sHorseaPose13,
	sHorseaPose10,
	sHorseaPose7,
	sHorseaPose4,
	sHorseaPose121,
	sHorseaPose122,
	sHorseaPose123,
	sHorseaPose124,
	sHorseaPose125,
	sHorseaPose126,
	sHorseaPose127,
	sHorseaPose128,
	sHorseaPose129,
	sHorseaPose130,
	sHorseaPose1,
	sHorseaPose22,
	sHorseaPose19,
	sHorseaPose16,
	sHorseaPose13,
	sHorseaPose10,
	sHorseaPose7,
	sHorseaPose4,
	sHorseaPose28,
	sHorseaPose140,
	sHorseaPose141,
	sHorseaPose142,
	sHorseaPose44,
	sHorseaPose144,
	sHorseaPose145,
	sHorseaPose146,
	sHorseaPose90,
	sHorseaPose148,
	sHorseaPose149,
	sHorseaPose150,
	sHorseaPose151,
	sHorseaPose152,
	sHorseaPose153,
	sHorseaPose154,
	sHorseaPose1,
	sHorseaPose3,
	sHorseaPose157,
	sHorseaPose4,
	sHorseaPose6,
	sHorseaPose160,
	sHorseaPose7,
	sHorseaPose9,
	sHorseaPose8,
	sHorseaPose10,
	sHorseaPose12,
	sHorseaPose11,
	sHorseaPose13,
	sHorseaPose15,
	sHorseaPose14,
	sHorseaPose16,
	sHorseaPose18,
	sHorseaPose17,
	sHorseaPose19,
	sHorseaPose21,
	sHorseaPose20,
	sHorseaPose22,
	sHorseaPose24,
	sHorseaPose178,
	sHorseaPose179,
	sHorseaPose180,
	sHorseaPose181,
	sHorseaPose182,
	sHorseaPose183,
	sHorseaPose184,
	sHorseaPose185,
	sHorseaPose186,
	sHorseaPose1,
	sHorseaPose22,
	sHorseaPose19,
	sHorseaPose16,
	sHorseaPose13,
	sHorseaPose10,
	sHorseaPose7,
	sHorseaPose4,
};

static const struct PositionSets sAxPositionsHorsea[] = {
	[0] = { .set = { {0, -10}, {-3, -11}, {3, -11}, {0, -14} } },
	[1] = { .set = { {0, -9}, {-3, -10}, {3, -10}, {0, -13} } },
	[2] = { .set = { {0, -12}, {-3, -12}, {3, -12}, {0, -15} } },
	[3] = { .set = { {5, -11}, {2, -12}, {-2, -11}, {0, -12} } },
	[4] = { .set = { {6, -10}, {2, -12}, {-2, -10}, {-1, -11} } },
	[5] = { .set = { {4, -12}, {0, -13}, {-3, -12}, {-1, -13} } },
	[6] = { .set = { {8, -14}, {0, -13}, {-1, -11}, {-1, -13} } },
	[7] = { .set = { {9, -14}, {0, -13}, {-1, -10}, {-1, -13} } },
	[8] = { .set = { {7, -16}, {0, -14}, {0, -11}, {-1, -14} } },
	[9] = { .set = { {7, -18}, {-2, -12}, {1, -12}, {-1, -14} } },
	[10] = { .set = { {8, -18}, {-2, -12}, {1, -11}, {0, -14} } },
	[11] = { .set = { {6, -19}, {-3, -13}, {1, -11}, {-1, -15} } },
	[12] = { .set = { {0, -17}, {3, -12}, {-3, -12}, {0, -13} } },
	[13] = { .set = { {0, -20}, {3, -12}, {-3, -12}, {0, -15} } },
	[14] = { .set = { {0, -23}, {3, -13}, {-3, -13}, {0, -14} } },
	[15] = { .set = { {-7, -18}, {2, -12}, {-1, -12}, {1, -14} } },
	[16] = { .set = { {-8, -18}, {2, -12}, {-1, -11}, {0, -14} } },
	[17] = { .set = { {-6, -19}, {3, -13}, {-1, -11}, {1, -15} } },
	[18] = { .set = { {-8, -14}, {0, -13}, {1, -11}, {1, -13} } },
	[19] = { .set = { {-9, -14}, {0, -13}, {1, -10}, {1, -13} } },
	[20] = { .set = { {-7, -16}, {0, -14}, {0, -11}, {1, -14} } },
	[21] = { .set = { {-5, -11}, {-2, -12}, {2, -11}, {0, -12} } },
	[22] = { .set = { {-6, -10}, {-2, -12}, {2, -10}, {1, -11} } },
	[23] = { .set = { {-4, -12}, {0, -13}, {3, -12}, {1, -13} } },
	[24] = { .set = { {0, -10}, {-3, -11}, {3, -11}, {0, -14} } },
	[25] = { .set = { {0, -9}, {-3, -10}, {3, -10}, {0, -13} } },
	[26] = { .set = { {0, -12}, {-3, -12}, {3, -12}, {0, -15} } },
	[27] = { .set = { {0, -6}, {-3, -10}, {3, -10}, {0, -13} } },
	[28] = { .set = { {5, -11}, {2, -12}, {-2, -11}, {0, -12} } },
	[29] = { .set = { {6, -10}, {2, -12}, {-2, -10}, {-1, -11} } },
	[30] = { .set = { {4, -12}, {0, -13}, {-3, -12}, {-1, -13} } },
	[31] = { .set = { {7, -6}, {2, -9}, {-1, -8}, {0, -9} } },
	[32] = { .set = { {8, -14}, {0, -13}, {-1, -11}, {-1, -13} } },
	[33] = { .set = { {9, -14}, {0, -13}, {-1, -10}, {-1, -13} } },
	[34] = { .set = { {7, -16}, {0, -14}, {0, -11}, {-1, -14} } },
	[35] = { .set = { {10, -11}, {-1, -15}, {-1, -12}, {0, -14} } },
	[36] = { .set = { {7, -18}, {-2, -12}, {1, -12}, {-1, -14} } },
	[37] = { .set = { {8, -18}, {-2, -12}, {1, -11}, {0, -14} } },
	[38] = { .set = { {6, -19}, {-3, -13}, {1, -11}, {-1, -15} } },
	[39] = { .set = { {8, -12}, {-2, -14}, {1, -12}, {0, -15} } },
	[40] = { .set = { {0, -17}, {3, -12}, {-3, -12}, {0, -13} } },
	[41] = { .set = { {0, -20}, {3, -12}, {-3, -12}, {0, -15} } },
	[42] = { .set = { {0, -23}, {3, -13}, {-3, -13}, {0, -14} } },
	[43] = { .set = { {0, -18}, {3, -11}, {-3, -11}, {0, -13} } },
	[44] = { .set = { {-7, -18}, {2, -12}, {-1, -12}, {1, -14} } },
	[45] = { .set = { {-8, -18}, {2, -12}, {-1, -11}, {0, -14} } },
	[46] = { .set = { {-6, -19}, {3, -13}, {-1, -11}, {1, -15} } },
	[47] = { .set = { {-8, -12}, {2, -14}, {-1, -12}, {0, -15} } },
	[48] = { .set = { {-8, -14}, {0, -13}, {1, -11}, {1, -13} } },
	[49] = { .set = { {-9, -14}, {0, -13}, {1, -10}, {1, -13} } },
	[50] = { .set = { {-7, -16}, {0, -14}, {0, -11}, {1, -14} } },
	[51] = { .set = { {-10, -11}, {1, -15}, {1, -12}, {0, -14} } },
	[52] = { .set = { {-5, -11}, {-2, -12}, {2, -11}, {0, -12} } },
	[53] = { .set = { {-6, -10}, {-2, -12}, {2, -10}, {1, -11} } },
	[54] = { .set = { {-4, -12}, {0, -13}, {3, -12}, {1, -13} } },
	[55] = { .set = { {-7, -6}, {-2, -9}, {1, -8}, {0, -9} } },
	[56] = { .set = { {0, -10}, {-3, -11}, {3, -11}, {0, -14} } },
	[57] = { .set = { {0, -9}, {-3, -10}, {3, -10}, {0, -13} } },
	[58] = { .set = { {0, -12}, {-3, -12}, {3, -12}, {0, -15} } },
	[59] = { .set = { {0, -6}, {-3, -10}, {3, -10}, {0, -13} } },
	[60] = { .set = { {5, -11}, {2, -12}, {-2, -11}, {0, -12} } },
	[61] = { .set = { {6, -10}, {2, -12}, {-2, -10}, {-1, -11} } },
	[62] = { .set = { {4, -12}, {0, -13}, {-3, -12}, {-1, -13} } },
	[63] = { .set = { {7, -6}, {2, -9}, {-1, -8}, {0, -9} } },
	[64] = { .set = { {8, -14}, {0, -13}, {-1, -11}, {-1, -13} } },
	[65] = { .set = { {9, -14}, {0, -13}, {-1, -10}, {-1, -13} } },
	[66] = { .set = { {7, -16}, {0, -14}, {0, -11}, {-1, -14} } },
	[67] = { .set = { {10, -11}, {-1, -15}, {-1, -12}, {0, -14} } },
	[68] = { .set = { {7, -18}, {-2, -12}, {1, -12}, {-1, -14} } },
	[69] = { .set = { {8, -18}, {-2, -12}, {1, -11}, {0, -14} } },
	[70] = { .set = { {6, -19}, {-3, -13}, {1, -11}, {-1, -15} } },
	[71] = { .set = { {8, -12}, {-2, -14}, {1, -12}, {0, -15} } },
	[72] = { .set = { {0, -17}, {3, -12}, {-3, -12}, {0, -13} } },
	[73] = { .set = { {0, -20}, {3, -12}, {-3, -12}, {0, -15} } },
	[74] = { .set = { {0, -23}, {3, -13}, {-3, -13}, {0, -14} } },
	[75] = { .set = { {0, -18}, {3, -11}, {-3, -11}, {0, -13} } },
	[76] = { .set = { {-7, -18}, {2, -12}, {-1, -12}, {1, -14} } },
	[77] = { .set = { {-8, -18}, {2, -12}, {-1, -11}, {0, -14} } },
	[78] = { .set = { {-6, -19}, {3, -13}, {-1, -11}, {1, -15} } },
	[79] = { .set = { {-8, -12}, {2, -14}, {-1, -12}, {0, -15} } },
	[80] = { .set = { {-8, -14}, {0, -13}, {1, -11}, {1, -13} } },
	[81] = { .set = { {-9, -14}, {0, -13}, {1, -10}, {1, -13} } },
	[82] = { .set = { {-7, -16}, {0, -14}, {0, -11}, {1, -14} } },
	[83] = { .set = { {-10, -11}, {1, -15}, {1, -12}, {0, -14} } },
	[84] = { .set = { {-5, -11}, {-2, -12}, {2, -11}, {0, -12} } },
	[85] = { .set = { {-6, -10}, {-2, -12}, {2, -10}, {1, -11} } },
	[86] = { .set = { {-4, -12}, {0, -13}, {3, -12}, {1, -13} } },
	[87] = { .set = { {-7, -6}, {-2, -9}, {1, -8}, {0, -9} } },
	[88] = { .set = { {0, -10}, {-3, -11}, {3, -11}, {0, -14} } },
	[89] = { .set = { {0, -13}, {-3, -12}, {3, -12}, {0, -14} } },
	[90] = { .set = { {0, -8}, {-4, -11}, {4, -11}, {0, -13} } },
	[91] = { .set = { {5, -11}, {2, -12}, {-2, -11}, {0, -12} } },
	[92] = { .set = { {4, -11}, {1, -11}, {-2, -9}, {-2, -11} } },
	[93] = { .set = { {7, -10}, {1, -11}, {-2, -10}, {-1, -12} } },
	[94] = { .set = { {8, -14}, {0, -13}, {-1, -11}, {-1, -13} } },
	[95] = { .set = { {5, -15}, {-1, -10}, {-2, -8}, {-2, -11} } },
	[96] = { .set = { {10, -13}, {2, -12}, {0, -11}, {1, -12} } },
	[97] = { .set = { {7, -18}, {-2, -12}, {1, -12}, {-1, -14} } },
	[98] = { .set = { {6, -20}, {-3, -11}, {1, -10}, {-2, -13} } },
	[99] = { .set = { {10, -16}, {-1, -12}, {2, -11}, {1, -13} } },
	[100] = { .set = { {0, -17}, {3, -12}, {-3, -12}, {0, -13} } },
	[101] = { .set = { {0, -20}, {3, -9}, {-3, -9}, {0, -12} } },
	[102] = { .set = { {0, -23}, {3, -12}, {-3, -12}, {0, -13} } },
	[103] = { .set = { {-7, -18}, {2, -12}, {-1, -12}, {1, -14} } },
	[104] = { .set = { {-6, -20}, {3, -11}, {-1, -10}, {2, -13} } },
	[105] = { .set = { {-10, -16}, {1, -12}, {-2, -11}, {-1, -13} } },
	[106] = { .set = { {-8, -14}, {0, -13}, {1, -11}, {1, -13} } },
	[107] = { .set = { {-5, -15}, {1, -10}, {2, -8}, {2, -11} } },
	[108] = { .set = { {-10, -13}, {-2, -12}, {0, -11}, {-1, -12} } },
	[109] = { .set = { {-5, -11}, {-2, -12}, {2, -11}, {0, -12} } },
	[110] = { .set = { {-4, -11}, {-1, -11}, {2, -9}, {2, -11} } },
	[111] = { .set = { {-7, -10}, {-1, -11}, {2, -10}, {1, -12} } },
	[112] = { .set = { {0, -10}, {-3, -11}, {3, -11}, {0, -14} } },
	[113] = { .set = { {-5, -11}, {-2, -12}, {2, -11}, {0, -12} } },
	[114] = { .set = { {-8, -14}, {0, -13}, {1, -11}, {1, -13} } },
	[115] = { .set = { {-7, -18}, {2, -12}, {-1, -12}, {1, -14} } },
	[116] = { .set = { {0, -17}, {3, -12}, {-3, -12}, {0, -13} } },
	[117] = { .set = { {7, -18}, {-2, -12}, {1, -12}, {-1, -14} } },
	[118] = { .set = { {8, -14}, {0, -13}, {-1, -11}, {-1, -13} } },
	[119] = { .set = { {5, -11}, {2, -12}, {-2, -11}, {0, -12} } },
	[120] = { .set = { {-4, -9}, {-1, -10}, {3, -9}, {1, -10} } },
	[121] = { .set = { {-4, -9}, {-1, -10}, {3, -9}, {1, -10} } },
	[122] = { .set = { {0, -6}, {-4, -12}, {4, -12}, {0, -12} } },
	[123] = { .set = { {6, -7}, {0, -11}, {-4, -10}, {-1, -12} } },
	[124] = { .set = { {10, -10}, {1, -10}, {0, -8}, {-1, -10} } },
	[125] = { .set = { {7, -14}, {-2, -10}, {1, -9}, {0, -12} } },
	[126] = { .set = { {0, -14}, {3, -9}, {-3, -9}, {0, -11} } },
	[127] = { .set = { {-8, -14}, {1, -10}, {-2, -9}, {-1, -12} } },
	[128] = { .set = { {-11, -10}, {-2, -10}, {-1, -8}, {0, -10} } },
	[129] = { .set = { {-7, -7}, {-1, -11}, {3, -10}, {0, -12} } },
	[130] = { .set = { {0, -10}, {-3, -11}, {3, -11}, {0, -14} } },
	[131] = { .set = { {-5, -11}, {-2, -12}, {2, -11}, {0, -12} } },
	[132] = { .set = { {-8, -14}, {0, -13}, {1, -11}, {1, -13} } },
	[133] = { .set = { {-7, -18}, {2, -12}, {-1, -12}, {1, -14} } },
	[134] = { .set = { {0, -17}, {3, -12}, {-3, -12}, {0, -13} } },
	[135] = { .set = { {7, -18}, {-2, -12}, {1, -12}, {-1, -14} } },
	[136] = { .set = { {8, -14}, {0, -13}, {-1, -11}, {-1, -13} } },
	[137] = { .set = { {5, -11}, {2, -12}, {-2, -11}, {0, -12} } },
	[138] = { .set = { {0, -6}, {-3, -10}, {3, -10}, {0, -13} } },
	[139] = { .set = { {-7, -8}, {-2, -11}, {1, -10}, {0, -11} } },
	[140] = { .set = { {-11, -10}, {0, -14}, {0, -11}, {-1, -13} } },
	[141] = { .set = { {-8, -11}, {2, -13}, {-1, -11}, {0, -14} } },
	[142] = { .set = { {0, -18}, {3, -11}, {-3, -11}, {0, -13} } },
	[143] = { .set = { {7, -11}, {-3, -13}, {0, -11}, {-1, -14} } },
	[144] = { .set = { {10, -10}, {-1, -14}, {-1, -11}, {0, -13} } },
	[145] = { .set = { {6, -8}, {1, -11}, {-2, -10}, {-1, -11} } },
	[146] = { .set = { {0, -13}, {-3, -12}, {3, -12}, {0, -14} } },
	[147] = { .set = { {4, -13}, {1, -13}, {-2, -11}, {-2, -13} } },
	[148] = { .set = { {5, -16}, {-1, -11}, {-2, -9}, {-2, -12} } },
	[149] = { .set = { {5, -20}, {-4, -11}, {0, -10}, {-3, -13} } },
	[150] = { .set = { {0, -21}, {3, -10}, {-3, -10}, {0, -13} } },
	[151] = { .set = { {-5, -20}, {4, -11}, {0, -10}, {3, -13} } },
	[152] = { .set = { {-5, -16}, {1, -11}, {2, -9}, {2, -12} } },
	[153] = { .set = { {-4, -13}, {-1, -13}, {2, -11}, {2, -13} } },
	[154] = { .set = { {0, -10}, {-3, -11}, {3, -11}, {0, -14} } },
	[155] = { .set = { {0, -12}, {-3, -12}, {3, -12}, {0, -15} } },
	[156] = { .set = { {0, -10}, {-3, -11}, {3, -11}, {0, -14} } },
	[157] = { .set = { {5, -11}, {2, -12}, {-2, -11}, {0, -12} } },
	[158] = { .set = { {4, -12}, {0, -13}, {-3, -12}, {-1, -13} } },
	[159] = { .set = { {6, -11}, {2, -13}, {-2, -11}, {-1, -12} } },
	[160] = { .set = { {8, -14}, {0, -13}, {-1, -11}, {-1, -13} } },
	[161] = { .set = { {7, -16}, {0, -14}, {0, -11}, {-1, -14} } },
	[162] = { .set = { {9, -14}, {0, -13}, {-1, -10}, {-1, -13} } },
	[163] = { .set = { {7, -18}, {-2, -12}, {1, -12}, {-1, -14} } },
	[164] = { .set = { {6, -19}, {-3, -13}, {1, -11}, {-1, -15} } },
	[165] = { .set = { {8, -18}, {-2, -12}, {1, -11}, {0, -14} } },
	[166] = { .set = { {0, -17}, {3, -12}, {-3, -12}, {0, -13} } },
	[167] = { .set = { {0, -23}, {3, -13}, {-3, -13}, {0, -14} } },
	[168] = { .set = { {0, -20}, {3, -12}, {-3, -12}, {0, -15} } },
	[169] = { .set = { {-7, -18}, {2, -12}, {-1, -12}, {1, -14} } },
	[170] = { .set = { {-6, -19}, {3, -13}, {-1, -11}, {1, -15} } },
	[171] = { .set = { {-8, -18}, {2, -12}, {-1, -11}, {0, -14} } },
	[172] = { .set = { {-8, -14}, {0, -13}, {1, -11}, {1, -13} } },
	[173] = { .set = { {-7, -16}, {0, -14}, {0, -11}, {1, -14} } },
	[174] = { .set = { {-9, -14}, {0, -13}, {1, -10}, {1, -13} } },
	[175] = { .set = { {-5, -11}, {-2, -12}, {2, -11}, {0, -12} } },
	[176] = { .set = { {-4, -12}, {0, -13}, {3, -12}, {1, -13} } },
	[177] = { .set = { {-6, -11}, {-2, -13}, {2, -11}, {1, -12} } },
	[178] = { .set = { {0, -4}, {-4, -7}, {4, -7}, {0, -9} } },
	[179] = { .set = { {-7, -5}, {-1, -6}, {2, -5}, {1, -7} } },
	[180] = { .set = { {-10, -9}, {-2, -8}, {0, -7}, {-1, -8} } },
	[181] = { .set = { {-10, -12}, {1, -8}, {-2, -7}, {-1, -9} } },
	[182] = { .set = { {0, -19}, {3, -8}, {-3, -8}, {0, -9} } },
	[183] = { .set = { {10, -12}, {-1, -8}, {2, -7}, {1, -9} } },
	[184] = { .set = { {10, -9}, {2, -8}, {0, -7}, {1, -8} } },
	[185] = { .set = { {7, -5}, {1, -6}, {-2, -5}, {-1, -7} } },
	[186] = { .set = { {0, -10}, {-3, -11}, {3, -11}, {0, -14} } },
	[187] = { .set = { {-5, -11}, {-2, -12}, {2, -11}, {0, -12} } },
	[188] = { .set = { {-8, -14}, {0, -13}, {1, -11}, {1, -13} } },
	[189] = { .set = { {-7, -18}, {2, -12}, {-1, -12}, {1, -14} } },
	[190] = { .set = { {0, -17}, {3, -12}, {-3, -12}, {0, -13} } },
	[191] = { .set = { {7, -18}, {-2, -12}, {1, -12}, {-1, -14} } },
	[192] = { .set = { {8, -14}, {0, -13}, {-1, -11}, {-1, -13} } },
	[193] = { .set = { {5, -11}, {2, -12}, {-2, -11}, {0, -12} } },
};

static const ax_anim *const sHorseaAnimTable1[] = {
	gAxSharedAnim_02603,
	gAxSharedAnim_02679,
	gAxSharedAnim_02688,
	gAxSharedAnim_02697,
	gAxSharedAnim_02615,
	gAxSharedAnim_02637,
	gAxSharedAnim_02650,
	gAxSharedAnim_02659,
};

static const ax_anim *const sHorseaAnimTable2[] = {
	sHorseaAnims_2_1,
	gAxSharedAnim_01816,
	sHorseaAnims_2_3,
	sHorseaAnims_2_4,
	gAxSharedAnim_01928,
	sHorseaAnims_2_6,
	sHorseaAnims_2_7,
	gAxSharedAnim_01996,
};

static const ax_anim *const sHorseaAnimTable3[] = {
	sHorseaAnims_3_1,
	gAxSharedAnim_02035,
	sHorseaAnims_3_3,
	sHorseaAnims_3_4,
	gAxSharedAnim_02106,
	sHorseaAnims_3_6,
	sHorseaAnims_3_7,
	gAxSharedAnim_02203,
};

static const ax_anim *const sHorseaAnimTable4[] = {
	sHorseaAnims_4_1,
	sHorseaAnims_4_2,
	sHorseaAnims_4_3,
	sHorseaAnims_4_4,
	sHorseaAnims_4_5,
	sHorseaAnims_4_6,
	sHorseaAnims_4_7,
	sHorseaAnims_4_8,
};

static const ax_anim *const sHorseaAnimTable5[] = {
	gAxSharedAnim_00249,
	gAxSharedAnim_00309,
	gAxSharedAnim_00301,
	gAxSharedAnim_00294,
	gAxSharedAnim_00285,
	gAxSharedAnim_00276,
	gAxSharedAnim_00270,
	gAxSharedAnim_00258,
};

static const ax_anim *const sHorseaAnimTable6[] = {
	gAxSharedAnim_00133,
	gAxSharedAnim_00133,
	gAxSharedAnim_00133,
	gAxSharedAnim_00133,
	gAxSharedAnim_00133,
	gAxSharedAnim_00133,
	gAxSharedAnim_00133,
	gAxSharedAnim_00133,
};

static const ax_anim *const sHorseaAnimTable7[] = {
	gAxSharedAnim_00332,
	gAxSharedAnim_00342,
	gAxSharedAnim_00350,
	gAxSharedAnim_00358,
	gAxSharedAnim_00370,
	gAxSharedAnim_00378,
	gAxSharedAnim_00385,
	gAxSharedAnim_00392,
};

static const ax_anim *const sHorseaAnimTable8[] = {
	sHorseaAnims_8_1,
	sHorseaAnims_8_2,
	sHorseaAnims_8_3,
	sHorseaAnims_8_4,
	sHorseaAnims_8_5,
	sHorseaAnims_8_6,
	sHorseaAnims_8_7,
	sHorseaAnims_8_8,
};

static const ax_anim *const sHorseaAnimTable9[] = {
	sHorseaAnims_9_1,
	sHorseaAnims_9_2,
	sHorseaAnims_9_3,
	sHorseaAnims_9_4,
	sHorseaAnims_9_5,
	sHorseaAnims_9_6,
	sHorseaAnims_9_7,
	sHorseaAnims_9_8,
};

static const ax_anim *const sHorseaAnimTable10[] = {
	gAxSharedAnim_00540,
	gAxSharedAnim_00547,
	gAxSharedAnim_00555,
	gAxSharedAnim_00564,
	gAxSharedAnim_00574,
	gAxSharedAnim_00584,
	gAxSharedAnim_00593,
	gAxSharedAnim_00600,
};

static const ax_anim *const sHorseaAnimTable11[] = {
	sHorseaAnims_11_1,
	sHorseaAnims_11_2,
	sHorseaAnims_11_3,
	sHorseaAnims_11_4,
	sHorseaAnims_11_5,
	sHorseaAnims_11_6,
	sHorseaAnims_11_7,
	sHorseaAnims_11_8,
};

static const ax_anim *const sHorseaAnimTable12[] = {
	gAxSharedAnim_00907,
	gAxSharedAnim_00996,
	gAxSharedAnim_00971,
	gAxSharedAnim_00960,
	gAxSharedAnim_00959,
	gAxSharedAnim_00945,
	gAxSharedAnim_00925,
	gAxSharedAnim_00908,
};

static const ax_anim *const sHorseaAnimTable13[] = {
	gAxSharedAnim_01017,
	gAxSharedAnim_01123,
	gAxSharedAnim_01112,
	gAxSharedAnim_01093,
	gAxSharedAnim_01079,
	gAxSharedAnim_01063,
	gAxSharedAnim_01048,
	gAxSharedAnim_01028,
};

static const ax_anim *const *const sAxAnimationsHorsea[] = {
	sHorseaAnimTable1,
	sHorseaAnimTable2,
	sHorseaAnimTable3,
	sHorseaAnimTable4,
	sHorseaAnimTable5,
	sHorseaAnimTable6,
	sHorseaAnimTable7,
	sHorseaAnimTable8,
	sHorseaAnimTable9,
	sHorseaAnimTable10,
	sHorseaAnimTable11,
	sHorseaAnimTable12,
	sHorseaAnimTable13,
};

static const ax_sprite *const sAxSpritesHorsea[] = {
	sHorseaSprites1,
	sHorseaSprites2,
	sHorseaSprites3,
	sHorseaSprites4,
	sHorseaSprites5,
	sHorseaSprites6,
	sHorseaSprites7,
	sHorseaSprites8,
	sHorseaSprites9,
	sHorseaSprites10,
	sHorseaSprites11,
	sHorseaSprites12,
	sHorseaSprites13,
	sHorseaSprites14,
	sHorseaSprites15,
	sHorseaSprites16,
	sHorseaSprites17,
	sHorseaSprites18,
	sHorseaSprites19,
	sHorseaSprites20,
	sHorseaSprites21,
	sHorseaSprites22,
	sHorseaSprites23,
	sHorseaSprites24,
	sHorseaSprites25,
	sHorseaSprites26,
	sHorseaSprites27,
	sHorseaSprites28,
	sHorseaSprites29,
	sHorseaSprites30,
	sHorseaSprites31,
	sHorseaSprites32,
	sHorseaSprites33,
	sHorseaSprites34,
	sHorseaSprites35,
	sHorseaSprites36,
	sHorseaSprites37,
};

static const axmain sAxMainHorsea = {
	.poses = sAxPosesHorsea,
	.animations = sAxAnimationsHorsea,
	.animCount = ARRAY_COUNT(sAxAnimationsHorsea),
	.spriteData = sAxSpritesHorsea,
	.positions = sAxPositionsHorsea,
};
