/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainTangela;
const SiroArchive gAxTangela = {"SIRO", &sAxMainTangela};

static const ax_pose sTangelaPose1[] = {
	AX_POSE(0, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose2[] = {
	AX_POSE(1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose3[] = {
	AX_POSE(2, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose4[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose5[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose6[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose7[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose8[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose9[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose10[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose11[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose12[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose13[] = {
	AX_POSE(12, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose14[] = {
	AX_POSE(13, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose15[] = {
	AX_POSE(14, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose16[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose17[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose18[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose19[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose20[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose21[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose22[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose23[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose24[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose27[] = {
	AX_POSE(15, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose30[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose33[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose36[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose39[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose42[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose45[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose48[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose98[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose100[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose102[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose104[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose106[] = {
	AX_POSE(24, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose108[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose110[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose112[] = {
	AX_POSE(27, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose114[] = {
	AX_POSE(28, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose116[] = {
	AX_POSE(29, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose118[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose120[] = {
	AX_POSE(27, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose122[] = {
	AX_POSE(24, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose124[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose126[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose128[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose129[] = {
	AX_POSE(30, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose130[] = {
	AX_POSE(31, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose131[] = {
	AX_POSE(32, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose132[] = {
	AX_POSE(33, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose133[] = {
	AX_POSE(34, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose134[] = {
	AX_POSE(35, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose135[] = {
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose136[] = {
	AX_POSE(35, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose137[] = {
	AX_POSE(34, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose138[] = {
	AX_POSE(33, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose180[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose181[] = {
	AX_POSE(2, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose183[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose184[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose186[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose187[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose189[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose190[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose192[] = {
	AX_POSE(13, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose193[] = {
	AX_POSE(14, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose195[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose196[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose198[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose199[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose201[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose202[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose204[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose205[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose206[] = {
	AX_POSE(27, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose207[] = {
	AX_POSE(29, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose209[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTangelaPose210[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_anim sTangelaAnims_1_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -2}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -1}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, -1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_1_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {-1, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, -2}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {1, -1}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, 1}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {-1, 0}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_1_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {-1, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, -2}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {1, -1}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {-1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_1_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {-1, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, -2}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {1, -1}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, -1}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {-1, 0}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_1_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -2}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -1}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, 1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_1_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {1, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, -2}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {-1, -1}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, -1}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {1, 0}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_1_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {1, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, -2}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {-1, -1}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_1_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {1, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, -2}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {-1, -1}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, 1}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {1, 0}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 26, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 26, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 27, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {4, 2}, .shadow = {4, 5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 28, .offset = {10, 9}, .shadow = {10, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {17, 20}, .shadow = {17, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 29, .offset = {18, 19}, .shadow = {18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {17, 20}, .shadow = {17, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {18, 19}, .shadow = {18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {8, 8}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {4, -4}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 31, .offset = {10, -4}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {18, -1}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 32, .offset = {18, 0}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {18, -1}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {18, 0}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {0, -3}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {4, -9}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 34, .offset = {10, -14}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {17, -20}, .shadow = {17, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {18, -19}, .shadow = {18, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {17, -20}, .shadow = {17, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {18, -19}, .shadow = {18, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 37, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 38, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {0, -3}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-4, -9}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 40, .offset = {-10, -14}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-17, -20}, .shadow = {-17, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 41, .offset = {-18, -19}, .shadow = {-18, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-17, -20}, .shadow = {-17, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-18, -19}, .shadow = {-18, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-4, -4}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 43, .offset = {-10, -4}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-18, -1}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 44, .offset = {-18, 0}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-18, -1}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-18, 0}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-4, 2}, .shadow = {-4, 5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 46, .offset = {-10, 9}, .shadow = {-10, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-17, 20}, .shadow = {-17, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-17, 20}, .shadow = {-17, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-8, 8}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 48, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 50, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 50, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 51, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {4, 2}, .shadow = {4, 5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 52, .offset = {10, 9}, .shadow = {10, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {17, 20}, .shadow = {17, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 53, .offset = {18, 19}, .shadow = {18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {17, 20}, .shadow = {17, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {18, 19}, .shadow = {18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {8, 8}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {4, -4}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 55, .offset = {10, -4}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {18, -1}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 56, .offset = {18, 0}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {18, -1}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {18, 0}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 57, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {0, -3}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {4, -9}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 58, .offset = {10, -14}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {17, -20}, .shadow = {17, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 59, .offset = {18, -19}, .shadow = {18, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {17, -20}, .shadow = {17, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {18, -19}, .shadow = {18, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 61, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 62, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 63, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {0, -3}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-4, -9}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 64, .offset = {-10, -14}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-17, -20}, .shadow = {-17, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 65, .offset = {-18, -19}, .shadow = {-18, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-17, -20}, .shadow = {-17, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-18, -19}, .shadow = {-18, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 66, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-4, -4}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 67, .offset = {-10, -4}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-18, -1}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 68, .offset = {-18, 0}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-18, -1}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-18, 0}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-4, 2}, .shadow = {-4, 5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 70, .offset = {-10, 9}, .shadow = {-10, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-17, 20}, .shadow = {-17, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-17, 20}, .shadow = {-17, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-8, 8}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_5_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_5_2[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_5_3[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_5_4[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_5_5[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_5_6[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_5_7[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_5_8[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_8_1[] = {
	{ .frames = 34, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 139, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 139, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 140, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_8_2[] = {
	{ .frames = 34, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 142, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 142, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 143, .offset = {-4, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_8_3[] = {
	{ .frames = 34, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 145, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 145, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 146, .offset = {-3, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_8_4[] = {
	{ .frames = 34, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 148, .offset = {-3, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 148, .offset = {-3, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 149, .offset = {-3, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_8_5[] = {
	{ .frames = 34, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 151, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 151, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 152, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_8_6[] = {
	{ .frames = 34, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 154, .offset = {3, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 154, .offset = {3, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 155, .offset = {3, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_8_7[] = {
	{ .frames = 34, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 157, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 157, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 158, .offset = {3, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_8_8[] = {
	{ .frames = 34, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 160, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 160, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 161, .offset = {4, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {7, 17}, .shadow = {7, 17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 166, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 167, .offset = {-7, 17}, .shadow = {-7, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-8, 9}, .shadow = {-8, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {17, 5}, .shadow = {17, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {21, 14}, .shadow = {21, 14} },
	{ .frames = 3, .unkFlags = 0, .poseId = 165, .offset = {20, 19}, .shadow = {20, 19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 166, .offset = {11, 20}, .shadow = {11, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {16, -5}, .shadow = {16, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 164, .offset = {20, -2}, .shadow = {20, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 165, .offset = {16, 4}, .shadow = {16, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {12, 5}, .shadow = {12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-7, -17}, .shadow = {-7, -17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 162, .offset = {0, -20}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 163, .offset = {7, -17}, .shadow = {7, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {9, -10}, .shadow = {9, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-16, -5}, .shadow = {-16, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 168, .offset = {-20, -2}, .shadow = {-20, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 167, .offset = {-16, 4}, .shadow = {-16, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {-12, 5}, .shadow = {-12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-17, 5}, .shadow = {-17, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-21, 14}, .shadow = {-21, 14} },
	{ .frames = 3, .unkFlags = 0, .poseId = 167, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 166, .offset = {-11, 20}, .shadow = {-11, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 179, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 179, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 179, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 180, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 180, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 191, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 191, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 190, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 192, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 197, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 197, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 197, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 196, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 198, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 198, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTangelaAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 200, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 200, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 200, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 199, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 201, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 201, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 201, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sTangelaGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_1.4bpp.lz");
static const ax_sprite sTangelaSprites1[] = {
	{sTangelaGfx1, ARRAY_COUNT(sTangelaGfx1)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_2.4bpp.lz");
static const ax_sprite sTangelaSprites2[] = {
	{sTangelaGfx2, ARRAY_COUNT(sTangelaGfx2)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_3.4bpp.lz");
static const ax_sprite sTangelaSprites3[] = {
	{sTangelaGfx3, ARRAY_COUNT(sTangelaGfx3)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_4.4bpp.lz");
static const ax_sprite sTangelaSprites4[] = {
	{sTangelaGfx4, ARRAY_COUNT(sTangelaGfx4)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_5.4bpp.lz");
static const ax_sprite sTangelaSprites5[] = {
	{sTangelaGfx5, ARRAY_COUNT(sTangelaGfx5)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_6.4bpp.lz");
static const ax_sprite sTangelaSprites6[] = {
	{sTangelaGfx6, ARRAY_COUNT(sTangelaGfx6)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_7.4bpp.lz");
static const ax_sprite sTangelaSprites7[] = {
	{sTangelaGfx7, ARRAY_COUNT(sTangelaGfx7)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_8.4bpp.lz");
static const ax_sprite sTangelaSprites8[] = {
	{sTangelaGfx8, ARRAY_COUNT(sTangelaGfx8)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_9.4bpp.lz");
static const ax_sprite sTangelaSprites9[] = {
	{sTangelaGfx9, ARRAY_COUNT(sTangelaGfx9)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_10.4bpp.lz");
static const ax_sprite sTangelaSprites10[] = {
	{sTangelaGfx10, ARRAY_COUNT(sTangelaGfx10)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_11.4bpp.lz");
static const ax_sprite sTangelaSprites11[] = {
	{sTangelaGfx11, ARRAY_COUNT(sTangelaGfx11)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_12.4bpp.lz");
static const ax_sprite sTangelaSprites12[] = {
	{sTangelaGfx12, ARRAY_COUNT(sTangelaGfx12)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_13.4bpp.lz");
static const ax_sprite sTangelaSprites13[] = {
	{sTangelaGfx13, ARRAY_COUNT(sTangelaGfx13)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_14.4bpp.lz");
static const ax_sprite sTangelaSprites14[] = {
	{sTangelaGfx14, ARRAY_COUNT(sTangelaGfx14)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_15.4bpp.lz");
static const ax_sprite sTangelaSprites15[] = {
	{sTangelaGfx15, ARRAY_COUNT(sTangelaGfx15)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_16.4bpp.lz");
static const ax_sprite sTangelaSprites16[] = {
	{NULL, 128}, 
	{sTangelaGfx16, ARRAY_COUNT(sTangelaGfx16)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTangelaGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_17.4bpp.lz");
static const u8 sTangelaGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_17_1.4bpp.lz");
static const ax_sprite sTangelaSprites17[] = {
	{NULL, 32}, 
	{sTangelaGfx17, ARRAY_COUNT(sTangelaGfx17)}, 
	{NULL, 64}, 
	{sTangelaGfx17_1, ARRAY_COUNT(sTangelaGfx17_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTangelaGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_18.4bpp.lz");
static const ax_sprite sTangelaSprites18[] = {
	{NULL, 128}, 
	{sTangelaGfx18, ARRAY_COUNT(sTangelaGfx18)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTangelaGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_19.4bpp.lz");
static const u8 sTangelaGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_19_1.4bpp.lz");
static const ax_sprite sTangelaSprites19[] = {
	{NULL, 32}, 
	{sTangelaGfx19, ARRAY_COUNT(sTangelaGfx19)}, 
	{NULL, 32}, 
	{sTangelaGfx19_1, ARRAY_COUNT(sTangelaGfx19_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTangelaGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_20.4bpp.lz");
static const ax_sprite sTangelaSprites20[] = {
	{sTangelaGfx20, ARRAY_COUNT(sTangelaGfx20)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sTangelaGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_21.4bpp.lz");
static const u8 sTangelaGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_21_1.4bpp.lz");
static const ax_sprite sTangelaSprites21[] = {
	{NULL, 32}, 
	{sTangelaGfx21, ARRAY_COUNT(sTangelaGfx21)}, 
	{NULL, 32}, 
	{sTangelaGfx21_1, ARRAY_COUNT(sTangelaGfx21_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTangelaGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_22.4bpp.lz");
static const ax_sprite sTangelaSprites22[] = {
	{NULL, 128}, 
	{sTangelaGfx22, ARRAY_COUNT(sTangelaGfx22)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_23.4bpp.lz");
static const u8 sTangelaGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_23_1.4bpp.lz");
static const ax_sprite sTangelaSprites23[] = {
	{NULL, 32}, 
	{sTangelaGfx23, ARRAY_COUNT(sTangelaGfx23)}, 
	{NULL, 32}, 
	{sTangelaGfx23_1, ARRAY_COUNT(sTangelaGfx23_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTangelaGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_24.4bpp.lz");
static const u8 sTangelaGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_24_1.4bpp.lz");
static const ax_sprite sTangelaSprites24[] = {
	{NULL, 32}, 
	{sTangelaGfx24, ARRAY_COUNT(sTangelaGfx24)}, 
	{NULL, 64}, 
	{sTangelaGfx24_1, ARRAY_COUNT(sTangelaGfx24_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTangelaGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_25.4bpp.lz");
static const u8 sTangelaGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_25_1.4bpp.lz");
static const u8 sTangelaGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_25_2.4bpp.lz");
static const ax_sprite sTangelaSprites25[] = {
	{NULL, 32}, 
	{sTangelaGfx25, ARRAY_COUNT(sTangelaGfx25)}, 
	{NULL, 32}, 
	{sTangelaGfx25_1, ARRAY_COUNT(sTangelaGfx25_1)}, 
	{NULL, 32}, 
	{sTangelaGfx25_2, ARRAY_COUNT(sTangelaGfx25_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTangelaGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_26.4bpp.lz");
static const ax_sprite sTangelaSprites26[] = {
	{NULL, 128}, 
	{sTangelaGfx26, ARRAY_COUNT(sTangelaGfx26)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTangelaGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_27.4bpp.lz");
static const u8 sTangelaGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_27_1.4bpp.lz");
static const ax_sprite sTangelaSprites27[] = {
	{NULL, 32}, 
	{sTangelaGfx27, ARRAY_COUNT(sTangelaGfx27)}, 
	{NULL, 32}, 
	{sTangelaGfx27_1, ARRAY_COUNT(sTangelaGfx27_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTangelaGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_28.4bpp.lz");
static const u8 sTangelaGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_28_1.4bpp.lz");
static const ax_sprite sTangelaSprites28[] = {
	{NULL, 32}, 
	{sTangelaGfx28, ARRAY_COUNT(sTangelaGfx28)}, 
	{NULL, 32}, 
	{sTangelaGfx28_1, ARRAY_COUNT(sTangelaGfx28_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTangelaGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_29.4bpp.lz");
static const ax_sprite sTangelaSprites29[] = {
	{sTangelaGfx29, ARRAY_COUNT(sTangelaGfx29)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sTangelaGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_30.4bpp.lz");
static const u8 sTangelaGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_30_1.4bpp.lz");
static const ax_sprite sTangelaSprites30[] = {
	{sTangelaGfx30, ARRAY_COUNT(sTangelaGfx30)}, 
	{NULL, 32}, 
	{sTangelaGfx30_1, ARRAY_COUNT(sTangelaGfx30_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sTangelaGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_31.4bpp.lz");
static const ax_sprite sTangelaSprites31[] = {
	{sTangelaGfx31, ARRAY_COUNT(sTangelaGfx31)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_32.4bpp.lz");
static const ax_sprite sTangelaSprites32[] = {
	{sTangelaGfx32, ARRAY_COUNT(sTangelaGfx32)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_33.4bpp.lz");
static const ax_sprite sTangelaSprites33[] = {
	{sTangelaGfx33, ARRAY_COUNT(sTangelaGfx33)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_34.4bpp.lz");
static const ax_sprite sTangelaSprites34[] = {
	{sTangelaGfx34, ARRAY_COUNT(sTangelaGfx34)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_35.4bpp.lz");
static const ax_sprite sTangelaSprites35[] = {
	{sTangelaGfx35, ARRAY_COUNT(sTangelaGfx35)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_36.4bpp.lz");
static const ax_sprite sTangelaSprites36[] = {
	{sTangelaGfx36, ARRAY_COUNT(sTangelaGfx36)}, 
	{NULL, 0}
};
static const u8 sTangelaGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tangela/sprite_37.4bpp.lz");
static const ax_sprite sTangelaSprites37[] = {
	{sTangelaGfx37, ARRAY_COUNT(sTangelaGfx37)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesTangela[] = {
	sTangelaPose1,
	sTangelaPose2,
	sTangelaPose3,
	sTangelaPose4,
	sTangelaPose5,
	sTangelaPose6,
	sTangelaPose7,
	sTangelaPose8,
	sTangelaPose9,
	sTangelaPose10,
	sTangelaPose11,
	sTangelaPose12,
	sTangelaPose13,
	sTangelaPose14,
	sTangelaPose15,
	sTangelaPose16,
	sTangelaPose17,
	sTangelaPose18,
	sTangelaPose19,
	sTangelaPose20,
	sTangelaPose21,
	sTangelaPose22,
	sTangelaPose23,
	sTangelaPose24,
	sTangelaPose1,
	sTangelaPose2,
	sTangelaPose27,
	sTangelaPose4,
	sTangelaPose5,
	sTangelaPose30,
	sTangelaPose7,
	sTangelaPose8,
	sTangelaPose33,
	sTangelaPose10,
	sTangelaPose11,
	sTangelaPose36,
	sTangelaPose13,
	sTangelaPose14,
	sTangelaPose39,
	sTangelaPose16,
	sTangelaPose17,
	sTangelaPose42,
	sTangelaPose19,
	sTangelaPose20,
	sTangelaPose45,
	sTangelaPose22,
	sTangelaPose23,
	sTangelaPose48,
	sTangelaPose1,
	sTangelaPose2,
	sTangelaPose27,
	sTangelaPose4,
	sTangelaPose5,
	sTangelaPose30,
	sTangelaPose7,
	sTangelaPose8,
	sTangelaPose33,
	sTangelaPose10,
	sTangelaPose11,
	sTangelaPose36,
	sTangelaPose13,
	sTangelaPose14,
	sTangelaPose39,
	sTangelaPose16,
	sTangelaPose17,
	sTangelaPose42,
	sTangelaPose19,
	sTangelaPose20,
	sTangelaPose45,
	sTangelaPose22,
	sTangelaPose23,
	sTangelaPose48,
	sTangelaPose1,
	sTangelaPose2,
	sTangelaPose27,
	sTangelaPose4,
	sTangelaPose5,
	sTangelaPose30,
	sTangelaPose7,
	sTangelaPose8,
	sTangelaPose33,
	sTangelaPose10,
	sTangelaPose11,
	sTangelaPose36,
	sTangelaPose13,
	sTangelaPose14,
	sTangelaPose39,
	sTangelaPose16,
	sTangelaPose17,
	sTangelaPose42,
	sTangelaPose19,
	sTangelaPose20,
	sTangelaPose45,
	sTangelaPose22,
	sTangelaPose23,
	sTangelaPose48,
	sTangelaPose1,
	sTangelaPose98,
	sTangelaPose27,
	sTangelaPose100,
	sTangelaPose4,
	sTangelaPose102,
	sTangelaPose30,
	sTangelaPose104,
	sTangelaPose7,
	sTangelaPose106,
	sTangelaPose33,
	sTangelaPose108,
	sTangelaPose10,
	sTangelaPose110,
	sTangelaPose36,
	sTangelaPose112,
	sTangelaPose13,
	sTangelaPose114,
	sTangelaPose39,
	sTangelaPose116,
	sTangelaPose16,
	sTangelaPose118,
	sTangelaPose42,
	sTangelaPose120,
	sTangelaPose19,
	sTangelaPose122,
	sTangelaPose45,
	sTangelaPose124,
	sTangelaPose22,
	sTangelaPose126,
	sTangelaPose48,
	sTangelaPose128,
	sTangelaPose129,
	sTangelaPose130,
	sTangelaPose131,
	sTangelaPose132,
	sTangelaPose133,
	sTangelaPose134,
	sTangelaPose135,
	sTangelaPose136,
	sTangelaPose137,
	sTangelaPose138,
	sTangelaPose1,
	sTangelaPose2,
	sTangelaPose3,
	sTangelaPose4,
	sTangelaPose5,
	sTangelaPose6,
	sTangelaPose7,
	sTangelaPose8,
	sTangelaPose9,
	sTangelaPose10,
	sTangelaPose11,
	sTangelaPose12,
	sTangelaPose13,
	sTangelaPose14,
	sTangelaPose15,
	sTangelaPose16,
	sTangelaPose17,
	sTangelaPose18,
	sTangelaPose19,
	sTangelaPose20,
	sTangelaPose21,
	sTangelaPose22,
	sTangelaPose23,
	sTangelaPose24,
	sTangelaPose1,
	sTangelaPose22,
	sTangelaPose19,
	sTangelaPose16,
	sTangelaPose13,
	sTangelaPose10,
	sTangelaPose7,
	sTangelaPose4,
	sTangelaPose98,
	sTangelaPose102,
	sTangelaPose106,
	sTangelaPose110,
	sTangelaPose114,
	sTangelaPose118,
	sTangelaPose122,
	sTangelaPose126,
	sTangelaPose1,
	sTangelaPose180,
	sTangelaPose181,
	sTangelaPose4,
	sTangelaPose183,
	sTangelaPose184,
	sTangelaPose7,
	sTangelaPose186,
	sTangelaPose187,
	sTangelaPose10,
	sTangelaPose189,
	sTangelaPose190,
	sTangelaPose13,
	sTangelaPose192,
	sTangelaPose193,
	sTangelaPose16,
	sTangelaPose195,
	sTangelaPose196,
	sTangelaPose19,
	sTangelaPose198,
	sTangelaPose199,
	sTangelaPose22,
	sTangelaPose201,
	sTangelaPose202,
	sTangelaPose100,
	sTangelaPose204,
	sTangelaPose205,
	sTangelaPose206,
	sTangelaPose207,
	sTangelaPose112,
	sTangelaPose209,
	sTangelaPose210,
	sTangelaPose1,
	sTangelaPose22,
	sTangelaPose19,
	sTangelaPose16,
	sTangelaPose13,
	sTangelaPose10,
	sTangelaPose7,
	sTangelaPose4,
};

static const struct PositionSets sAxPositionsTangela[] = {
	[0] = { .set = { {-1, -5}, {-10, -9}, {8, -9}, {-1, -11} } },
	[1] = { .set = { {-1, -9}, {-9, -13}, {8, -13}, {0, -14} } },
	[2] = { .set = { {-1, -2}, {-10, -6}, {7, -6}, {-1, -7} } },
	[3] = { .set = { {4, -7}, {6, -15}, {-5, -6}, {-1, -10} } },
	[4] = { .set = { {6, -11}, {7, -18}, {-4, -10}, {0, -13} } },
	[5] = { .set = { {7, -4}, {8, -11}, {-1, -4}, {2, -8} } },
	[6] = { .set = { {6, -8}, {3, -15}, {1, -8}, {-1, -11} } },
	[7] = { .set = { {8, -12}, {5, -17}, {3, -11}, {-1, -13} } },
	[8] = { .set = { {9, -4}, {7, -9}, {5, -3}, {0, -7} } },
	[9] = { .set = { {3, -13}, {-4, -16}, {5, -11}, {-2, -11} } },
	[10] = { .set = { {6, -17}, {-1, -19}, {8, -15}, {1, -13} } },
	[11] = { .set = { {6, -8}, {-2, -12}, {7, -6}, {1, -8} } },
	[12] = { .set = { {0, -11}, {8, -12}, {-8, -12}, {0, -10} } },
	[13] = { .set = { {0, -17}, {8, -16}, {-7, -16}, {0, -14} } },
	[14] = { .set = { {0, -10}, {8, -11}, {-8, -12}, {0, -9} } },
	[15] = { .set = { {-5, -13}, {2, -16}, {-7, -11}, {0, -11} } },
	[16] = { .set = { {-8, -17}, {-1, -19}, {-10, -15}, {-3, -13} } },
	[17] = { .set = { {-8, -8}, {0, -12}, {-9, -6}, {-3, -8} } },
	[18] = { .set = { {-8, -8}, {-5, -15}, {-3, -8}, {-1, -11} } },
	[19] = { .set = { {-10, -12}, {-7, -17}, {-5, -11}, {-1, -13} } },
	[20] = { .set = { {-11, -4}, {-9, -9}, {-7, -3}, {-2, -7} } },
	[21] = { .set = { {-6, -7}, {-8, -15}, {3, -6}, {-1, -10} } },
	[22] = { .set = { {-8, -11}, {-9, -18}, {2, -10}, {-2, -13} } },
	[23] = { .set = { {-9, -4}, {-10, -11}, {-1, -4}, {-4, -8} } },
	[24] = { .set = { {-1, -5}, {-10, -9}, {8, -9}, {-1, -11} } },
	[25] = { .set = { {-1, -9}, {-9, -13}, {8, -13}, {0, -14} } },
	[26] = { .set = { {-2, -3}, {-10, -10}, {6, -9}, {-1, -10} } },
	[27] = { .set = { {4, -7}, {6, -15}, {-5, -6}, {-1, -10} } },
	[28] = { .set = { {6, -11}, {7, -18}, {-4, -10}, {0, -13} } },
	[29] = { .set = { {7, -5}, {7, -13}, {0, -5}, {0, -9} } },
	[30] = { .set = { {6, -8}, {3, -15}, {1, -8}, {-1, -11} } },
	[31] = { .set = { {8, -12}, {5, -17}, {3, -11}, {-1, -13} } },
	[32] = { .set = { {8, -6}, {7, -15}, {7, -8}, {0, -9} } },
	[33] = { .set = { {3, -13}, {-4, -16}, {5, -11}, {-2, -11} } },
	[34] = { .set = { {6, -17}, {-1, -19}, {8, -15}, {1, -13} } },
	[35] = { .set = { {4, -8}, {-5, -15}, {6, -10}, {-1, -9} } },
	[36] = { .set = { {0, -11}, {8, -12}, {-8, -12}, {0, -10} } },
	[37] = { .set = { {0, -17}, {8, -16}, {-7, -16}, {0, -14} } },
	[38] = { .set = { {-1, -10}, {7, -11}, {-9, -9}, {-1, -9} } },
	[39] = { .set = { {-5, -13}, {2, -16}, {-7, -11}, {0, -11} } },
	[40] = { .set = { {-8, -17}, {-1, -19}, {-10, -15}, {-3, -13} } },
	[41] = { .set = { {-6, -8}, {3, -15}, {-8, -10}, {-1, -9} } },
	[42] = { .set = { {-8, -8}, {-5, -15}, {-3, -8}, {-1, -11} } },
	[43] = { .set = { {-10, -12}, {-7, -17}, {-5, -11}, {-1, -13} } },
	[44] = { .set = { {-10, -6}, {-9, -15}, {-9, -8}, {-2, -9} } },
	[45] = { .set = { {-6, -7}, {-8, -15}, {3, -6}, {-1, -10} } },
	[46] = { .set = { {-8, -11}, {-9, -18}, {2, -10}, {-2, -13} } },
	[47] = { .set = { {-9, -5}, {-9, -13}, {-2, -5}, {-2, -9} } },
	[48] = { .set = { {-1, -5}, {-10, -9}, {8, -9}, {-1, -11} } },
	[49] = { .set = { {-1, -9}, {-9, -13}, {8, -13}, {0, -14} } },
	[50] = { .set = { {-2, -3}, {-10, -10}, {6, -9}, {-1, -10} } },
	[51] = { .set = { {4, -7}, {6, -15}, {-5, -6}, {-1, -10} } },
	[52] = { .set = { {6, -11}, {7, -18}, {-4, -10}, {0, -13} } },
	[53] = { .set = { {7, -5}, {7, -13}, {0, -5}, {0, -9} } },
	[54] = { .set = { {6, -8}, {3, -15}, {1, -8}, {-1, -11} } },
	[55] = { .set = { {8, -12}, {5, -17}, {3, -11}, {-1, -13} } },
	[56] = { .set = { {8, -6}, {7, -15}, {7, -8}, {0, -9} } },
	[57] = { .set = { {3, -13}, {-4, -16}, {5, -11}, {-2, -11} } },
	[58] = { .set = { {6, -17}, {-1, -19}, {8, -15}, {1, -13} } },
	[59] = { .set = { {4, -8}, {-5, -15}, {6, -10}, {-1, -9} } },
	[60] = { .set = { {0, -11}, {8, -12}, {-8, -12}, {0, -10} } },
	[61] = { .set = { {0, -17}, {8, -16}, {-7, -16}, {0, -14} } },
	[62] = { .set = { {-1, -10}, {7, -11}, {-9, -9}, {-1, -9} } },
	[63] = { .set = { {-5, -13}, {2, -16}, {-7, -11}, {0, -11} } },
	[64] = { .set = { {-8, -17}, {-1, -19}, {-10, -15}, {-3, -13} } },
	[65] = { .set = { {-6, -8}, {3, -15}, {-8, -10}, {-1, -9} } },
	[66] = { .set = { {-8, -8}, {-5, -15}, {-3, -8}, {-1, -11} } },
	[67] = { .set = { {-10, -12}, {-7, -17}, {-5, -11}, {-1, -13} } },
	[68] = { .set = { {-10, -6}, {-9, -15}, {-9, -8}, {-2, -9} } },
	[69] = { .set = { {-6, -7}, {-8, -15}, {3, -6}, {-1, -10} } },
	[70] = { .set = { {-8, -11}, {-9, -18}, {2, -10}, {-2, -13} } },
	[71] = { .set = { {-9, -5}, {-9, -13}, {-2, -5}, {-2, -9} } },
	[72] = { .set = { {-1, -5}, {-10, -9}, {8, -9}, {-1, -11} } },
	[73] = { .set = { {-1, -9}, {-9, -13}, {8, -13}, {0, -14} } },
	[74] = { .set = { {-2, -3}, {-10, -10}, {6, -9}, {-1, -10} } },
	[75] = { .set = { {4, -7}, {6, -15}, {-5, -6}, {-1, -10} } },
	[76] = { .set = { {6, -11}, {7, -18}, {-4, -10}, {0, -13} } },
	[77] = { .set = { {7, -5}, {7, -13}, {0, -5}, {0, -9} } },
	[78] = { .set = { {6, -8}, {3, -15}, {1, -8}, {-1, -11} } },
	[79] = { .set = { {8, -12}, {5, -17}, {3, -11}, {-1, -13} } },
	[80] = { .set = { {8, -6}, {7, -15}, {7, -8}, {0, -9} } },
	[81] = { .set = { {3, -13}, {-4, -16}, {5, -11}, {-2, -11} } },
	[82] = { .set = { {6, -17}, {-1, -19}, {8, -15}, {1, -13} } },
	[83] = { .set = { {4, -8}, {-5, -15}, {6, -10}, {-1, -9} } },
	[84] = { .set = { {0, -11}, {8, -12}, {-8, -12}, {0, -10} } },
	[85] = { .set = { {0, -17}, {8, -16}, {-7, -16}, {0, -14} } },
	[86] = { .set = { {-1, -10}, {7, -11}, {-9, -9}, {-1, -9} } },
	[87] = { .set = { {-5, -13}, {2, -16}, {-7, -11}, {0, -11} } },
	[88] = { .set = { {-8, -17}, {-1, -19}, {-10, -15}, {-3, -13} } },
	[89] = { .set = { {-6, -8}, {3, -15}, {-8, -10}, {-1, -9} } },
	[90] = { .set = { {-8, -8}, {-5, -15}, {-3, -8}, {-1, -11} } },
	[91] = { .set = { {-10, -12}, {-7, -17}, {-5, -11}, {-1, -13} } },
	[92] = { .set = { {-10, -6}, {-9, -15}, {-9, -8}, {-2, -9} } },
	[93] = { .set = { {-6, -7}, {-8, -15}, {3, -6}, {-1, -10} } },
	[94] = { .set = { {-8, -11}, {-9, -18}, {2, -10}, {-2, -13} } },
	[95] = { .set = { {-9, -5}, {-9, -13}, {-2, -5}, {-2, -9} } },
	[96] = { .set = { {-1, -5}, {-10, -9}, {8, -9}, {-1, -11} } },
	[97] = { .set = { {2, -11}, {-5, -14}, {8, -10}, {0, -10} } },
	[98] = { .set = { {-2, -3}, {-10, -10}, {6, -9}, {-1, -10} } },
	[99] = { .set = { {0, -3}, {-9, -7}, {8, -10}, {-1, -9} } },
	[100] = { .set = { {4, -7}, {6, -15}, {-5, -6}, {-1, -10} } },
	[101] = { .set = { {0, -11}, {5, -17}, {-7, -8}, {-2, -12} } },
	[102] = { .set = { {7, -5}, {7, -13}, {0, -5}, {0, -9} } },
	[103] = { .set = { {5, -4}, {8, -12}, {0, -4}, {-2, -9} } },
	[104] = { .set = { {6, -8}, {3, -15}, {1, -8}, {-1, -11} } },
	[105] = { .set = { {5, -12}, {3, -18}, {-4, -7}, {-3, -12} } },
	[106] = { .set = { {8, -6}, {7, -15}, {7, -8}, {0, -9} } },
	[107] = { .set = { {7, -5}, {5, -14}, {5, -7}, {0, -10} } },
	[108] = { .set = { {3, -13}, {-4, -16}, {5, -11}, {-2, -11} } },
	[109] = { .set = { {5, -14}, {3, -18}, {5, -8}, {-1, -11} } },
	[110] = { .set = { {4, -8}, {-5, -15}, {6, -10}, {-1, -9} } },
	[111] = { .set = { {4, -7}, {-2, -17}, {7, -13}, {-2, -10} } },
	[112] = { .set = { {0, -11}, {8, -12}, {-8, -12}, {0, -10} } },
	[113] = { .set = { {-2, -14}, {8, -11}, {-8, -13}, {1, -11} } },
	[114] = { .set = { {-1, -10}, {7, -11}, {-9, -9}, {-1, -9} } },
	[115] = { .set = { {-1, -9}, {7, -8}, {-9, -9}, {-1, -8} } },
	[116] = { .set = { {-5, -13}, {2, -16}, {-7, -11}, {0, -11} } },
	[117] = { .set = { {-7, -14}, {-5, -18}, {-7, -8}, {-1, -11} } },
	[118] = { .set = { {-6, -8}, {3, -15}, {-8, -10}, {-1, -9} } },
	[119] = { .set = { {-6, -7}, {0, -17}, {-9, -13}, {0, -10} } },
	[120] = { .set = { {-8, -8}, {-5, -15}, {-3, -8}, {-1, -11} } },
	[121] = { .set = { {-7, -12}, {-5, -18}, {2, -7}, {1, -12} } },
	[122] = { .set = { {-10, -6}, {-9, -15}, {-9, -8}, {-2, -9} } },
	[123] = { .set = { {-9, -5}, {-7, -14}, {-7, -7}, {-2, -10} } },
	[124] = { .set = { {-6, -7}, {-8, -15}, {3, -6}, {-1, -10} } },
	[125] = { .set = { {-2, -11}, {-7, -17}, {5, -8}, {0, -12} } },
	[126] = { .set = { {-9, -5}, {-9, -13}, {-2, -5}, {-2, -9} } },
	[127] = { .set = { {-7, -4}, {-10, -12}, {-2, -4}, {0, -9} } },
	[128] = { .set = { {-1, -2}, {-10, -8}, {8, -8}, {0, -9} } },
	[129] = { .set = { {-1, -1}, {-10, -7}, {8, -7}, {-1, -8} } },
	[130] = { .set = { {0, -5}, {-9, -10}, {8, -9}, {0, -9} } },
	[131] = { .set = { {3, -7}, {4, -13}, {-4, -7}, {-2, -12} } },
	[132] = { .set = { {7, -8}, {3, -11}, {2, -7}, {-1, -9} } },
	[133] = { .set = { {4, -10}, {-5, -14}, {7, -9}, {-1, -10} } },
	[134] = { .set = { {0, -8}, {7, -8}, {-8, -8}, {0, -9} } },
	[135] = { .set = { {-5, -10}, {4, -14}, {-8, -9}, {0, -10} } },
	[136] = { .set = { {-8, -8}, {-4, -11}, {-3, -7}, {0, -9} } },
	[137] = { .set = { {-4, -7}, {-5, -13}, {3, -7}, {1, -12} } },
	[138] = { .set = { {-1, -5}, {-10, -9}, {8, -9}, {-1, -11} } },
	[139] = { .set = { {-1, -9}, {-9, -13}, {8, -13}, {0, -14} } },
	[140] = { .set = { {-1, -2}, {-10, -6}, {7, -6}, {-1, -7} } },
	[141] = { .set = { {4, -7}, {6, -15}, {-5, -6}, {-1, -10} } },
	[142] = { .set = { {6, -11}, {7, -18}, {-4, -10}, {0, -13} } },
	[143] = { .set = { {7, -4}, {8, -11}, {-1, -4}, {2, -8} } },
	[144] = { .set = { {6, -8}, {3, -15}, {1, -8}, {-1, -11} } },
	[145] = { .set = { {8, -12}, {5, -17}, {3, -11}, {-1, -13} } },
	[146] = { .set = { {9, -4}, {7, -9}, {5, -3}, {0, -7} } },
	[147] = { .set = { {3, -13}, {-4, -16}, {5, -11}, {-2, -11} } },
	[148] = { .set = { {6, -17}, {-1, -19}, {8, -15}, {1, -13} } },
	[149] = { .set = { {6, -8}, {-2, -12}, {7, -6}, {1, -8} } },
	[150] = { .set = { {0, -11}, {8, -12}, {-8, -12}, {0, -10} } },
	[151] = { .set = { {0, -17}, {8, -16}, {-7, -16}, {0, -14} } },
	[152] = { .set = { {0, -10}, {8, -11}, {-8, -12}, {0, -9} } },
	[153] = { .set = { {-5, -13}, {2, -16}, {-7, -11}, {0, -11} } },
	[154] = { .set = { {-8, -17}, {-1, -19}, {-10, -15}, {-3, -13} } },
	[155] = { .set = { {-8, -8}, {0, -12}, {-9, -6}, {-3, -8} } },
	[156] = { .set = { {-8, -8}, {-5, -15}, {-3, -8}, {-1, -11} } },
	[157] = { .set = { {-10, -12}, {-7, -17}, {-5, -11}, {-1, -13} } },
	[158] = { .set = { {-11, -4}, {-9, -9}, {-7, -3}, {-2, -7} } },
	[159] = { .set = { {-6, -7}, {-8, -15}, {3, -6}, {-1, -10} } },
	[160] = { .set = { {-8, -11}, {-9, -18}, {2, -10}, {-2, -13} } },
	[161] = { .set = { {-9, -4}, {-10, -11}, {-1, -4}, {-4, -8} } },
	[162] = { .set = { {-1, -5}, {-10, -9}, {8, -9}, {-1, -11} } },
	[163] = { .set = { {-6, -7}, {-8, -15}, {3, -6}, {-1, -10} } },
	[164] = { .set = { {-8, -8}, {-5, -15}, {-3, -8}, {-1, -11} } },
	[165] = { .set = { {-5, -13}, {2, -16}, {-7, -11}, {0, -11} } },
	[166] = { .set = { {0, -11}, {8, -12}, {-8, -12}, {0, -10} } },
	[167] = { .set = { {3, -13}, {-4, -16}, {5, -11}, {-2, -11} } },
	[168] = { .set = { {6, -8}, {3, -15}, {1, -8}, {-1, -11} } },
	[169] = { .set = { {4, -7}, {6, -15}, {-5, -6}, {-1, -10} } },
	[170] = { .set = { {2, -11}, {-5, -14}, {8, -10}, {0, -10} } },
	[171] = { .set = { {0, -11}, {5, -17}, {-7, -8}, {-2, -12} } },
	[172] = { .set = { {5, -12}, {3, -18}, {-4, -7}, {-3, -12} } },
	[173] = { .set = { {5, -14}, {3, -18}, {5, -8}, {-1, -11} } },
	[174] = { .set = { {-2, -14}, {8, -11}, {-8, -13}, {1, -11} } },
	[175] = { .set = { {-7, -14}, {-5, -18}, {-7, -8}, {-1, -11} } },
	[176] = { .set = { {-7, -12}, {-5, -18}, {2, -7}, {1, -12} } },
	[177] = { .set = { {-2, -11}, {-7, -17}, {5, -8}, {0, -12} } },
	[178] = { .set = { {-1, -5}, {-10, -9}, {8, -9}, {-1, -11} } },
	[179] = { .set = { {-1, -6}, {-9, -10}, {8, -10}, {0, -11} } },
	[180] = { .set = { {-1, -4}, {-10, -8}, {7, -8}, {-1, -9} } },
	[181] = { .set = { {4, -7}, {6, -15}, {-5, -6}, {-1, -10} } },
	[182] = { .set = { {4, -8}, {5, -15}, {-6, -7}, {-2, -10} } },
	[183] = { .set = { {4, -5}, {5, -12}, {-4, -5}, {-1, -9} } },
	[184] = { .set = { {6, -8}, {3, -15}, {1, -8}, {-1, -11} } },
	[185] = { .set = { {6, -9}, {3, -14}, {1, -8}, {-3, -10} } },
	[186] = { .set = { {6, -6}, {4, -11}, {2, -5}, {-3, -9} } },
	[187] = { .set = { {3, -13}, {-4, -16}, {5, -11}, {-2, -11} } },
	[188] = { .set = { {3, -14}, {-4, -16}, {5, -12}, {-2, -10} } },
	[189] = { .set = { {3, -10}, {-5, -14}, {4, -8}, {-2, -10} } },
	[190] = { .set = { {0, -11}, {8, -12}, {-8, -12}, {0, -10} } },
	[191] = { .set = { {0, -14}, {8, -13}, {-7, -13}, {0, -11} } },
	[192] = { .set = { {0, -11}, {8, -12}, {-8, -13}, {0, -10} } },
	[193] = { .set = { {-5, -13}, {2, -16}, {-7, -11}, {0, -11} } },
	[194] = { .set = { {-5, -14}, {2, -16}, {-7, -12}, {0, -10} } },
	[195] = { .set = { {-5, -10}, {3, -14}, {-6, -8}, {0, -10} } },
	[196] = { .set = { {-8, -8}, {-5, -15}, {-3, -8}, {-1, -11} } },
	[197] = { .set = { {-8, -9}, {-5, -14}, {-3, -8}, {1, -10} } },
	[198] = { .set = { {-8, -6}, {-6, -11}, {-4, -5}, {1, -9} } },
	[199] = { .set = { {-6, -7}, {-8, -15}, {3, -6}, {-1, -10} } },
	[200] = { .set = { {-6, -8}, {-7, -15}, {4, -7}, {0, -10} } },
	[201] = { .set = { {-6, -5}, {-7, -12}, {2, -5}, {-1, -9} } },
	[202] = { .set = { {0, -3}, {-9, -7}, {8, -10}, {-1, -9} } },
	[203] = { .set = { {-6, -4}, {-9, -12}, {-1, -4}, {1, -9} } },
	[204] = { .set = { {-7, -5}, {-5, -14}, {-5, -7}, {0, -10} } },
	[205] = { .set = { {-5, -7}, {1, -17}, {-8, -13}, {1, -10} } },
	[206] = { .set = { {0, -9}, {8, -8}, {-8, -9}, {0, -8} } },
	[207] = { .set = { {4, -7}, {-2, -17}, {7, -13}, {-2, -10} } },
	[208] = { .set = { {6, -5}, {4, -14}, {4, -7}, {-1, -10} } },
	[209] = { .set = { {4, -4}, {7, -12}, {-1, -4}, {-3, -9} } },
	[210] = { .set = { {-1, -5}, {-10, -9}, {8, -9}, {-1, -11} } },
	[211] = { .set = { {-6, -7}, {-8, -15}, {3, -6}, {-1, -10} } },
	[212] = { .set = { {-8, -8}, {-5, -15}, {-3, -8}, {-1, -11} } },
	[213] = { .set = { {-5, -13}, {2, -16}, {-7, -11}, {0, -11} } },
	[214] = { .set = { {0, -11}, {8, -12}, {-8, -12}, {0, -10} } },
	[215] = { .set = { {3, -13}, {-4, -16}, {5, -11}, {-2, -11} } },
	[216] = { .set = { {6, -8}, {3, -15}, {1, -8}, {-1, -11} } },
	[217] = { .set = { {4, -7}, {6, -15}, {-5, -6}, {-1, -10} } },
};

static const ax_anim *const sTangelaAnimTable1[] = {
	sTangelaAnims_1_1,
	sTangelaAnims_1_2,
	sTangelaAnims_1_3,
	sTangelaAnims_1_4,
	sTangelaAnims_1_5,
	sTangelaAnims_1_6,
	sTangelaAnims_1_7,
	sTangelaAnims_1_8,
};

static const ax_anim *const sTangelaAnimTable2[] = {
	sTangelaAnims_2_1,
	sTangelaAnims_2_2,
	sTangelaAnims_2_3,
	sTangelaAnims_2_4,
	sTangelaAnims_2_5,
	sTangelaAnims_2_6,
	sTangelaAnims_2_7,
	sTangelaAnims_2_8,
};

static const ax_anim *const sTangelaAnimTable3[] = {
	sTangelaAnims_3_1,
	sTangelaAnims_3_2,
	sTangelaAnims_3_3,
	sTangelaAnims_3_4,
	sTangelaAnims_3_5,
	sTangelaAnims_3_6,
	sTangelaAnims_3_7,
	sTangelaAnims_3_8,
};

static const ax_anim *const sTangelaAnimTable4[] = {
	gAxSharedAnim_02089,
	gAxSharedAnim_02111,
	gAxSharedAnim_02134,
	gAxSharedAnim_02157,
	gAxSharedAnim_02182,
	gAxSharedAnim_02209,
	gAxSharedAnim_02241,
	gAxSharedAnim_02270,
};

static const ax_anim *const sTangelaAnimTable5[] = {
	sTangelaAnims_5_1,
	sTangelaAnims_5_2,
	sTangelaAnims_5_3,
	sTangelaAnims_5_4,
	sTangelaAnims_5_5,
	sTangelaAnims_5_6,
	sTangelaAnims_5_7,
	sTangelaAnims_5_8,
};

static const ax_anim *const sTangelaAnimTable6[] = {
	gAxSharedAnim_02363,
	gAxSharedAnim_02363,
	gAxSharedAnim_02363,
	gAxSharedAnim_02363,
	gAxSharedAnim_02363,
	gAxSharedAnim_02363,
	gAxSharedAnim_02363,
	gAxSharedAnim_02363,
};

static const ax_anim *const sTangelaAnimTable7[] = {
	gAxSharedAnim_00398,
	gAxSharedAnim_00404,
	gAxSharedAnim_00415,
	gAxSharedAnim_00424,
	gAxSharedAnim_00436,
	gAxSharedAnim_00444,
	gAxSharedAnim_00454,
	gAxSharedAnim_00464,
};

static const ax_anim *const sTangelaAnimTable8[] = {
	sTangelaAnims_8_1,
	sTangelaAnims_8_2,
	sTangelaAnims_8_3,
	sTangelaAnims_8_4,
	sTangelaAnims_8_5,
	sTangelaAnims_8_6,
	sTangelaAnims_8_7,
	sTangelaAnims_8_8,
};

static const ax_anim *const sTangelaAnimTable9[] = {
	sTangelaAnims_9_1,
	sTangelaAnims_9_2,
	sTangelaAnims_9_3,
	gAxSharedAnim_00758,
	sTangelaAnims_9_5,
	gAxSharedAnim_00732,
	sTangelaAnims_9_7,
	sTangelaAnims_9_8,
};

static const ax_anim *const sTangelaAnimTable10[] = {
	gAxSharedAnim_00801,
	gAxSharedAnim_00813,
	gAxSharedAnim_00827,
	gAxSharedAnim_00838,
	gAxSharedAnim_00849,
	gAxSharedAnim_00862,
	gAxSharedAnim_00879,
	gAxSharedAnim_00889,
};

static const ax_anim *const sTangelaAnimTable11[] = {
	sTangelaAnims_11_1,
	gAxSharedAnim_00940,
	gAxSharedAnim_00975,
	gAxSharedAnim_01025,
	sTangelaAnims_11_5,
	gAxSharedAnim_01121,
	sTangelaAnims_11_7,
	sTangelaAnims_11_8,
};

static const ax_anim *const sTangelaAnimTable12[] = {
	gAxSharedAnim_01243,
	gAxSharedAnim_01326,
	gAxSharedAnim_01308,
	gAxSharedAnim_01292,
	gAxSharedAnim_01291,
	gAxSharedAnim_01280,
	gAxSharedAnim_01260,
	gAxSharedAnim_01244,
};

static const ax_anim *const sTangelaAnimTable13[] = {
	gAxSharedAnim_01335,
	gAxSharedAnim_01409,
	gAxSharedAnim_01397,
	gAxSharedAnim_01386,
	gAxSharedAnim_01374,
	gAxSharedAnim_01366,
	gAxSharedAnim_01358,
	gAxSharedAnim_01348,
};

static const ax_anim *const *const sAxAnimationsTangela[] = {
	sTangelaAnimTable1,
	sTangelaAnimTable2,
	sTangelaAnimTable3,
	sTangelaAnimTable4,
	sTangelaAnimTable5,
	sTangelaAnimTable6,
	sTangelaAnimTable7,
	sTangelaAnimTable8,
	sTangelaAnimTable9,
	sTangelaAnimTable10,
	sTangelaAnimTable11,
	sTangelaAnimTable12,
	sTangelaAnimTable13,
};

static const ax_sprite *const sAxSpritesTangela[] = {
	sTangelaSprites1,
	sTangelaSprites2,
	sTangelaSprites3,
	sTangelaSprites4,
	sTangelaSprites5,
	sTangelaSprites6,
	sTangelaSprites7,
	sTangelaSprites8,
	sTangelaSprites9,
	sTangelaSprites10,
	sTangelaSprites11,
	sTangelaSprites12,
	sTangelaSprites13,
	sTangelaSprites14,
	sTangelaSprites15,
	sTangelaSprites16,
	sTangelaSprites17,
	sTangelaSprites18,
	sTangelaSprites19,
	sTangelaSprites20,
	sTangelaSprites21,
	sTangelaSprites22,
	sTangelaSprites23,
	sTangelaSprites24,
	sTangelaSprites25,
	sTangelaSprites26,
	sTangelaSprites27,
	sTangelaSprites28,
	sTangelaSprites29,
	sTangelaSprites30,
	sTangelaSprites31,
	sTangelaSprites32,
	sTangelaSprites33,
	sTangelaSprites34,
	sTangelaSprites35,
	sTangelaSprites36,
	sTangelaSprites37,
};

static const axmain sAxMainTangela = {
	.poses = sAxPosesTangela,
	.animations = sAxAnimationsTangela,
	.animCount = ARRAY_COUNT(sAxAnimationsTangela),
	.spriteData = sAxSpritesTangela,
	.positions = sAxPositionsTangela,
};
