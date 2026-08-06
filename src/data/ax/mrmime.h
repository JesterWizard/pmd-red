/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainMrMime;
const SiroArchive gAxMrMime = {"SIRO", &sAxMainMrMime};

static const ax_pose sMrMimePose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose2[] = {
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose3[] = {
	AX_POSE(2, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose4[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose5[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose6[] = {
	AX_POSE(5, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose7[] = {
	AX_POSE(6, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose8[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose9[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose10[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose11[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose12[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose13[] = {
	AX_POSE(12, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose14[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose15[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose16[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose17[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose18[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose19[] = {
	AX_POSE(6, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose20[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose21[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose22[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose23[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose24[] = {
	AX_POSE(5, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose73[] = {
	AX_POSE(15, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose74[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose75[] = {
	AX_POSE(17, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose76[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose78[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose79[] = {
	AX_POSE(20, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose80[] = {
	AX_POSE(21, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose81[] = {
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose83[] = {
	AX_POSE(23, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose84[] = {
	AX_POSE(24, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose85[] = {
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose86[] = {
	AX_POSE(26, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose88[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose89[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose90[] = {
	AX_POSE(29, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose91[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose93[] = {
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose94[] = {
	AX_POSE(32, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose95[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose96[] = {
	AX_POSE(34, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose98[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose99[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose100[] = {
	AX_POSE(29, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose101[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose103[] = {
	AX_POSE(23, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose104[] = {
	AX_POSE(24, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose105[] = {
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose106[] = {
	AX_POSE(26, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose108[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose109[] = {
	AX_POSE(20, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose110[] = {
	AX_POSE(21, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose111[] = {
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose113[] = {
	AX_POSE(35, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose114[] = {
	AX_POSE(36, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose115[] = {
	AX_POSE(37, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose116[] = {
	AX_POSE(38, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose117[] = {
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose118[] = {
	AX_POSE(40, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose119[] = {
	AX_POSE(41, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose120[] = {
	AX_POSE(42, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose121[] = {
	AX_POSE(43, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose122[] = {
	AX_POSE(44, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose123[] = {
	AX_POSE(45, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose124[] = {
	AX_POSE(46, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose125[] = {
	AX_POSE(47, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose126[] = {
	AX_POSE(48, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose127[] = {
	AX_POSE(49, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose128[] = {
	AX_POSE(48, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose129[] = {
	AX_POSE(47, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose130[] = {
	AX_POSE(46, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose139[] = {
	AX_POSE(50, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose140[] = {
	AX_POSE(51, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose141[] = {
	AX_POSE(52, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose142[] = {
	AX_POSE(53, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose143[] = {
	AX_POSE(54, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose144[] = {
	AX_POSE(55, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose145[] = {
	AX_POSE(56, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose146[] = {
	AX_POSE(57, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose147[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose148[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose149[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose150[] = {
	AX_POSE(30, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose151[] = {
	AX_POSE(34, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose152[] = {
	AX_POSE(30, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose153[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMrMimePose154[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_anim sMrMimeAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 24, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 25, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 3}, .shadow = {0, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 27, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 28, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {18, 18}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 28, .offset = {19, 17}, .shadow = {19, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {18, 18}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {19, 17}, .shadow = {19, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {3, 3}, .shadow = {3, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 30, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 31, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 31, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {3, 0}, .shadow = {3, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 33, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 34, .offset = {4, -6}, .shadow = {4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {10, -13}, .shadow = {10, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {18, -23}, .shadow = {18, -23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 34, .offset = {19, -22}, .shadow = {19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {18, -23}, .shadow = {18, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {19, -22}, .shadow = {19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {3, -3}, .shadow = {3, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 36, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 37, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, -11}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 37, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -3}, .shadow = {0, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 39, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 40, .offset = {-4, -6}, .shadow = {-4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {-10, -13}, .shadow = {-10, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-18, -23}, .shadow = {-18, -23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 40, .offset = {-19, -22}, .shadow = {-19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-18, -23}, .shadow = {-18, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-19, -22}, .shadow = {-19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-3, -3}, .shadow = {-3, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 42, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 43, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 43, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-3, 0}, .shadow = {-3, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 45, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 46, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 46, .offset = {-18, 18}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-18, 18}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-6, 6}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-3, 3}, .shadow = {-3, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 48, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 49, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 49, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 3}, .shadow = {0, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 51, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 52, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {18, 18}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 52, .offset = {19, 17}, .shadow = {19, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {18, 18}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {19, 17}, .shadow = {19, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {3, 3}, .shadow = {3, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 54, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 55, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 55, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {3, 0}, .shadow = {3, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 57, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 58, .offset = {4, -6}, .shadow = {4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {10, -13}, .shadow = {10, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {18, -23}, .shadow = {18, -23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 58, .offset = {19, -22}, .shadow = {19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {18, -23}, .shadow = {18, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {19, -22}, .shadow = {19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {3, -3}, .shadow = {3, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 60, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 61, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, -11}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 61, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -3}, .shadow = {0, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 63, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 64, .offset = {-4, -6}, .shadow = {-4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {-10, -13}, .shadow = {-10, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-18, -23}, .shadow = {-18, -23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 64, .offset = {-19, -22}, .shadow = {-19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-18, -23}, .shadow = {-18, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-19, -22}, .shadow = {-19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-3, -3}, .shadow = {-3, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 66, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 67, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-3, 0}, .shadow = {-3, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 69, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 70, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 70, .offset = {-18, 18}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-18, 18}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-6, 6}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-3, 3}, .shadow = {-3, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_4_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 74, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 75, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 75, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {1, 5}, .shadow = {1, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {1, 5}, .shadow = {1, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 2}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_4_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 78, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 78, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 78, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 80, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 80, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 80, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {6, 4}, .shadow = {6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {6, 4}, .shadow = {6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {2, 2}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_4_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 82, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 83, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 84, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 83, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 82, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 83, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 85, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 85, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 85, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {5, -1}, .shadow = {5, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {5, -1}, .shadow = {5, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_4_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 87, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 87, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 90, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {6, -4}, .shadow = {6, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {6, -4}, .shadow = {6, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {2, -2}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_4_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {1, -5}, .shadow = {1, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {1, -5}, .shadow = {1, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_4_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 100, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {-6, -4}, .shadow = {-6, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {-6, -4}, .shadow = {-6, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {-2, -2}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_4_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 105, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-5, -1}, .shadow = {-5, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-5, -1}, .shadow = {-5, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_4_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 110, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-6, 4}, .shadow = {-6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-6, 4}, .shadow = {-6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-2, 2}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_8_1[] = {
	{ .frames = 20, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_8_2[] = {
	{ .frames = 20, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_8_3[] = {
	{ .frames = 20, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_8_4[] = {
	{ .frames = 20, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_8_5[] = {
	{ .frames = 20, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_8_6[] = {
	{ .frames = 20, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_8_7[] = {
	{ .frames = 20, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_8_8[] = {
	{ .frames = 20, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 146, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {19, 10}, .shadow = {19, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 149, .offset = {19, 19}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 150, .offset = {11, 19}, .shadow = {11, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {18, -5}, .shadow = {18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 148, .offset = {21, -2}, .shadow = {21, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 149, .offset = {18, 4}, .shadow = {18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {12, 4}, .shadow = {12, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 151, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {3, -17}, .shadow = {3, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {12, -22}, .shadow = {12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 147, .offset = {21, -22}, .shadow = {21, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 148, .offset = {21, -14}, .shadow = {21, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 150, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 151, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {-7, -20}, .shadow = {-7, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 146, .offset = {0, -24}, .shadow = {0, -24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 147, .offset = {7, -20}, .shadow = {7, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {9, -10}, .shadow = {9, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 149, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 148, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {-3, -17}, .shadow = {-3, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {-12, -22}, .shadow = {-12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 153, .offset = {-21, -22}, .shadow = {-21, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 152, .offset = {-21, -14}, .shadow = {-21, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 150, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sMrMimeAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 147, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {-18, -5}, .shadow = {-18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 152, .offset = {-21, -2}, .shadow = {-21, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 151, .offset = {-18, 4}, .shadow = {-18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {-12, 4}, .shadow = {-12, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 149, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sMrMimeGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_1.4bpp.lz");
static const ax_sprite sMrMimeSprites1[] = {
	{sMrMimeGfx1, ARRAY_COUNT(sMrMimeGfx1)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_2.4bpp.lz");
static const ax_sprite sMrMimeSprites2[] = {
	{sMrMimeGfx2, ARRAY_COUNT(sMrMimeGfx2)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_3.4bpp.lz");
static const ax_sprite sMrMimeSprites3[] = {
	{sMrMimeGfx3, ARRAY_COUNT(sMrMimeGfx3)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_4.4bpp.lz");
static const ax_sprite sMrMimeSprites4[] = {
	{sMrMimeGfx4, ARRAY_COUNT(sMrMimeGfx4)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_5.4bpp.lz");
static const ax_sprite sMrMimeSprites5[] = {
	{sMrMimeGfx5, ARRAY_COUNT(sMrMimeGfx5)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_6.4bpp.lz");
static const ax_sprite sMrMimeSprites6[] = {
	{sMrMimeGfx6, ARRAY_COUNT(sMrMimeGfx6)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_7.4bpp.lz");
static const ax_sprite sMrMimeSprites7[] = {
	{sMrMimeGfx7, ARRAY_COUNT(sMrMimeGfx7)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_8.4bpp.lz");
static const ax_sprite sMrMimeSprites8[] = {
	{sMrMimeGfx8, ARRAY_COUNT(sMrMimeGfx8)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_9.4bpp.lz");
static const ax_sprite sMrMimeSprites9[] = {
	{sMrMimeGfx9, ARRAY_COUNT(sMrMimeGfx9)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_10.4bpp.lz");
static const ax_sprite sMrMimeSprites10[] = {
	{sMrMimeGfx10, ARRAY_COUNT(sMrMimeGfx10)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_11.4bpp.lz");
static const ax_sprite sMrMimeSprites11[] = {
	{sMrMimeGfx11, ARRAY_COUNT(sMrMimeGfx11)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_12.4bpp.lz");
static const ax_sprite sMrMimeSprites12[] = {
	{sMrMimeGfx12, ARRAY_COUNT(sMrMimeGfx12)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_13.4bpp.lz");
static const ax_sprite sMrMimeSprites13[] = {
	{sMrMimeGfx13, ARRAY_COUNT(sMrMimeGfx13)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_14.4bpp.lz");
static const ax_sprite sMrMimeSprites14[] = {
	{sMrMimeGfx14, ARRAY_COUNT(sMrMimeGfx14)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_15.4bpp.lz");
static const ax_sprite sMrMimeSprites15[] = {
	{sMrMimeGfx15, ARRAY_COUNT(sMrMimeGfx15)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_16.4bpp.lz");
static const u8 sMrMimeGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_16_1.4bpp.lz");
static const u8 sMrMimeGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_16_2.4bpp.lz");
static const ax_sprite sMrMimeSprites16[] = {
	{NULL, 32}, 
	{sMrMimeGfx16, ARRAY_COUNT(sMrMimeGfx16)}, 
	{NULL, 32}, 
	{sMrMimeGfx16_1, ARRAY_COUNT(sMrMimeGfx16_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx16_2, ARRAY_COUNT(sMrMimeGfx16_2)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_17.4bpp.lz");
static const u8 sMrMimeGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_17_1.4bpp.lz");
static const ax_sprite sMrMimeSprites17[] = {
	{NULL, 32}, 
	{sMrMimeGfx17, ARRAY_COUNT(sMrMimeGfx17)}, 
	{NULL, 32}, 
	{sMrMimeGfx17_1, ARRAY_COUNT(sMrMimeGfx17_1)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_18.4bpp.lz");
static const u8 sMrMimeGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_18_1.4bpp.lz");
static const ax_sprite sMrMimeSprites18[] = {
	{sMrMimeGfx18, ARRAY_COUNT(sMrMimeGfx18)}, 
	{NULL, 32}, 
	{sMrMimeGfx18_1, ARRAY_COUNT(sMrMimeGfx18_1)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_19.4bpp.lz");
static const ax_sprite sMrMimeSprites19[] = {
	{NULL, 128}, 
	{sMrMimeGfx19, ARRAY_COUNT(sMrMimeGfx19)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_20.4bpp.lz");
static const u8 sMrMimeGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_20_1.4bpp.lz");
static const u8 sMrMimeGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_20_2.4bpp.lz");
static const u8 sMrMimeGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_20_3.4bpp.lz");
static const ax_sprite sMrMimeSprites20[] = {
	{NULL, 32}, 
	{sMrMimeGfx20, ARRAY_COUNT(sMrMimeGfx20)}, 
	{NULL, 32}, 
	{sMrMimeGfx20_1, ARRAY_COUNT(sMrMimeGfx20_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx20_2, ARRAY_COUNT(sMrMimeGfx20_2)}, 
	{NULL, 32}, 
	{sMrMimeGfx20_3, ARRAY_COUNT(sMrMimeGfx20_3)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_21.4bpp.lz");
static const u8 sMrMimeGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_21_1.4bpp.lz");
static const u8 sMrMimeGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_21_2.4bpp.lz");
static const u8 sMrMimeGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_21_3.4bpp.lz");
static const ax_sprite sMrMimeSprites21[] = {
	{NULL, 32}, 
	{sMrMimeGfx21, ARRAY_COUNT(sMrMimeGfx21)}, 
	{NULL, 32}, 
	{sMrMimeGfx21_1, ARRAY_COUNT(sMrMimeGfx21_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx21_2, ARRAY_COUNT(sMrMimeGfx21_2)}, 
	{NULL, 32}, 
	{sMrMimeGfx21_3, ARRAY_COUNT(sMrMimeGfx21_3)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_22.4bpp.lz");
static const u8 sMrMimeGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_22_1.4bpp.lz");
static const u8 sMrMimeGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_22_2.4bpp.lz");
static const u8 sMrMimeGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_22_3.4bpp.lz");
static const ax_sprite sMrMimeSprites22[] = {
	{NULL, 32}, 
	{sMrMimeGfx22, ARRAY_COUNT(sMrMimeGfx22)}, 
	{NULL, 32}, 
	{sMrMimeGfx22_1, ARRAY_COUNT(sMrMimeGfx22_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx22_2, ARRAY_COUNT(sMrMimeGfx22_2)}, 
	{NULL, 32}, 
	{sMrMimeGfx22_3, ARRAY_COUNT(sMrMimeGfx22_3)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_23.4bpp.lz");
static const u8 sMrMimeGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_23_1.4bpp.lz");
static const ax_sprite sMrMimeSprites23[] = {
	{NULL, 128}, 
	{sMrMimeGfx23, ARRAY_COUNT(sMrMimeGfx23)}, 
	{NULL, 32}, 
	{sMrMimeGfx23_1, ARRAY_COUNT(sMrMimeGfx23_1)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_24.4bpp.lz");
static const u8 sMrMimeGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_24_1.4bpp.lz");
static const u8 sMrMimeGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_24_2.4bpp.lz");
static const ax_sprite sMrMimeSprites24[] = {
	{NULL, 128}, 
	{sMrMimeGfx24, ARRAY_COUNT(sMrMimeGfx24)}, 
	{NULL, 32}, 
	{sMrMimeGfx24_1, ARRAY_COUNT(sMrMimeGfx24_1)}, 
	{NULL, 64}, 
	{sMrMimeGfx24_2, ARRAY_COUNT(sMrMimeGfx24_2)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_25.4bpp.lz");
static const u8 sMrMimeGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_25_1.4bpp.lz");
static const u8 sMrMimeGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_25_2.4bpp.lz");
static const u8 sMrMimeGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_25_3.4bpp.lz");
static const ax_sprite sMrMimeSprites25[] = {
	{NULL, 32}, 
	{sMrMimeGfx25, ARRAY_COUNT(sMrMimeGfx25)}, 
	{NULL, 96}, 
	{sMrMimeGfx25_1, ARRAY_COUNT(sMrMimeGfx25_1)}, 
	{NULL, 64}, 
	{sMrMimeGfx25_2, ARRAY_COUNT(sMrMimeGfx25_2)}, 
	{NULL, 32}, 
	{sMrMimeGfx25_3, ARRAY_COUNT(sMrMimeGfx25_3)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_26.4bpp.lz");
static const u8 sMrMimeGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_26_1.4bpp.lz");
static const u8 sMrMimeGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_26_2.4bpp.lz");
static const u8 sMrMimeGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_26_3.4bpp.lz");
static const ax_sprite sMrMimeSprites26[] = {
	{NULL, 32}, 
	{sMrMimeGfx26, ARRAY_COUNT(sMrMimeGfx26)}, 
	{NULL, 96}, 
	{sMrMimeGfx26_1, ARRAY_COUNT(sMrMimeGfx26_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx26_2, ARRAY_COUNT(sMrMimeGfx26_2)}, 
	{NULL, 32}, 
	{sMrMimeGfx26_3, ARRAY_COUNT(sMrMimeGfx26_3)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_27.4bpp.lz");
static const u8 sMrMimeGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_27_1.4bpp.lz");
static const u8 sMrMimeGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_27_2.4bpp.lz");
static const ax_sprite sMrMimeSprites27[] = {
	{NULL, 128}, 
	{sMrMimeGfx27, ARRAY_COUNT(sMrMimeGfx27)}, 
	{NULL, 32}, 
	{sMrMimeGfx27_1, ARRAY_COUNT(sMrMimeGfx27_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx27_2, ARRAY_COUNT(sMrMimeGfx27_2)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_28.4bpp.lz");
static const u8 sMrMimeGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_28_1.4bpp.lz");
static const u8 sMrMimeGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_28_2.4bpp.lz");
static const u8 sMrMimeGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_28_3.4bpp.lz");
static const ax_sprite sMrMimeSprites28[] = {
	{NULL, 32}, 
	{sMrMimeGfx28, ARRAY_COUNT(sMrMimeGfx28)}, 
	{NULL, 32}, 
	{sMrMimeGfx28_1, ARRAY_COUNT(sMrMimeGfx28_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx28_2, ARRAY_COUNT(sMrMimeGfx28_2)}, 
	{NULL, 32}, 
	{sMrMimeGfx28_3, ARRAY_COUNT(sMrMimeGfx28_3)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_29.4bpp.lz");
static const u8 sMrMimeGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_29_1.4bpp.lz");
static const u8 sMrMimeGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_29_2.4bpp.lz");
static const u8 sMrMimeGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_29_3.4bpp.lz");
static const ax_sprite sMrMimeSprites29[] = {
	{NULL, 32}, 
	{sMrMimeGfx29, ARRAY_COUNT(sMrMimeGfx29)}, 
	{NULL, 32}, 
	{sMrMimeGfx29_1, ARRAY_COUNT(sMrMimeGfx29_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx29_2, ARRAY_COUNT(sMrMimeGfx29_2)}, 
	{NULL, 32}, 
	{sMrMimeGfx29_3, ARRAY_COUNT(sMrMimeGfx29_3)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_30.4bpp.lz");
static const u8 sMrMimeGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_30_1.4bpp.lz");
static const u8 sMrMimeGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_30_2.4bpp.lz");
static const u8 sMrMimeGfx30_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_30_3.4bpp.lz");
static const ax_sprite sMrMimeSprites30[] = {
	{NULL, 32}, 
	{sMrMimeGfx30, ARRAY_COUNT(sMrMimeGfx30)}, 
	{NULL, 32}, 
	{sMrMimeGfx30_1, ARRAY_COUNT(sMrMimeGfx30_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx30_2, ARRAY_COUNT(sMrMimeGfx30_2)}, 
	{NULL, 32}, 
	{sMrMimeGfx30_3, ARRAY_COUNT(sMrMimeGfx30_3)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_31.4bpp.lz");
static const u8 sMrMimeGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_31_1.4bpp.lz");
static const u8 sMrMimeGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_31_2.4bpp.lz");
static const u8 sMrMimeGfx31_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_31_3.4bpp.lz");
static const ax_sprite sMrMimeSprites31[] = {
	{sMrMimeGfx31, ARRAY_COUNT(sMrMimeGfx31)}, 
	{NULL, 32}, 
	{sMrMimeGfx31_1, ARRAY_COUNT(sMrMimeGfx31_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx31_2, ARRAY_COUNT(sMrMimeGfx31_2)}, 
	{NULL, 32}, 
	{sMrMimeGfx31_3, ARRAY_COUNT(sMrMimeGfx31_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_32.4bpp.lz");
static const u8 sMrMimeGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_32_1.4bpp.lz");
static const ax_sprite sMrMimeSprites32[] = {
	{NULL, 32}, 
	{sMrMimeGfx32, ARRAY_COUNT(sMrMimeGfx32)}, 
	{NULL, 64}, 
	{sMrMimeGfx32_1, ARRAY_COUNT(sMrMimeGfx32_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_33.4bpp.lz");
static const u8 sMrMimeGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_33_1.4bpp.lz");
static const u8 sMrMimeGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_33_2.4bpp.lz");
static const ax_sprite sMrMimeSprites33[] = {
	{sMrMimeGfx33, ARRAY_COUNT(sMrMimeGfx33)}, 
	{NULL, 32}, 
	{sMrMimeGfx33_1, ARRAY_COUNT(sMrMimeGfx33_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx33_2, ARRAY_COUNT(sMrMimeGfx33_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_34.4bpp.lz");
static const u8 sMrMimeGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_34_1.4bpp.lz");
static const u8 sMrMimeGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_34_2.4bpp.lz");
static const ax_sprite sMrMimeSprites34[] = {
	{sMrMimeGfx34, ARRAY_COUNT(sMrMimeGfx34)}, 
	{NULL, 32}, 
	{sMrMimeGfx34_1, ARRAY_COUNT(sMrMimeGfx34_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx34_2, ARRAY_COUNT(sMrMimeGfx34_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_35.4bpp.lz");
static const u8 sMrMimeGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_35_1.4bpp.lz");
static const u8 sMrMimeGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_35_2.4bpp.lz");
static const ax_sprite sMrMimeSprites35[] = {
	{sMrMimeGfx35, ARRAY_COUNT(sMrMimeGfx35)}, 
	{NULL, 32}, 
	{sMrMimeGfx35_1, ARRAY_COUNT(sMrMimeGfx35_1)}, 
	{NULL, 64}, 
	{sMrMimeGfx35_2, ARRAY_COUNT(sMrMimeGfx35_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_36.4bpp.lz");
static const u8 sMrMimeGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_36_1.4bpp.lz");
static const u8 sMrMimeGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_36_2.4bpp.lz");
static const u8 sMrMimeGfx36_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_36_3.4bpp.lz");
static const ax_sprite sMrMimeSprites36[] = {
	{sMrMimeGfx36, ARRAY_COUNT(sMrMimeGfx36)}, 
	{NULL, 32}, 
	{sMrMimeGfx36_1, ARRAY_COUNT(sMrMimeGfx36_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx36_2, ARRAY_COUNT(sMrMimeGfx36_2)}, 
	{NULL, 32}, 
	{sMrMimeGfx36_3, ARRAY_COUNT(sMrMimeGfx36_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_37.4bpp.lz");
static const u8 sMrMimeGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_37_1.4bpp.lz");
static const u8 sMrMimeGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_37_2.4bpp.lz");
static const u8 sMrMimeGfx37_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_37_3.4bpp.lz");
static const ax_sprite sMrMimeSprites37[] = {
	{sMrMimeGfx37, ARRAY_COUNT(sMrMimeGfx37)}, 
	{NULL, 64}, 
	{sMrMimeGfx37_1, ARRAY_COUNT(sMrMimeGfx37_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx37_2, ARRAY_COUNT(sMrMimeGfx37_2)}, 
	{NULL, 32}, 
	{sMrMimeGfx37_3, ARRAY_COUNT(sMrMimeGfx37_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_38.4bpp.lz");
static const u8 sMrMimeGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_38_1.4bpp.lz");
static const u8 sMrMimeGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_38_2.4bpp.lz");
static const u8 sMrMimeGfx38_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_38_3.4bpp.lz");
static const ax_sprite sMrMimeSprites38[] = {
	{sMrMimeGfx38, ARRAY_COUNT(sMrMimeGfx38)}, 
	{NULL, 32}, 
	{sMrMimeGfx38_1, ARRAY_COUNT(sMrMimeGfx38_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx38_2, ARRAY_COUNT(sMrMimeGfx38_2)}, 
	{NULL, 64}, 
	{sMrMimeGfx38_3, ARRAY_COUNT(sMrMimeGfx38_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_39.4bpp.lz");
static const u8 sMrMimeGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_39_1.4bpp.lz");
static const u8 sMrMimeGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_39_2.4bpp.lz");
static const u8 sMrMimeGfx39_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_39_3.4bpp.lz");
static const ax_sprite sMrMimeSprites39[] = {
	{sMrMimeGfx39, ARRAY_COUNT(sMrMimeGfx39)}, 
	{NULL, 32}, 
	{sMrMimeGfx39_1, ARRAY_COUNT(sMrMimeGfx39_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx39_2, ARRAY_COUNT(sMrMimeGfx39_2)}, 
	{NULL, 32}, 
	{sMrMimeGfx39_3, ARRAY_COUNT(sMrMimeGfx39_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_40.4bpp.lz");
static const u8 sMrMimeGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_40_1.4bpp.lz");
static const u8 sMrMimeGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_40_2.4bpp.lz");
static const u8 sMrMimeGfx40_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_40_3.4bpp.lz");
static const ax_sprite sMrMimeSprites40[] = {
	{sMrMimeGfx40, ARRAY_COUNT(sMrMimeGfx40)}, 
	{NULL, 32}, 
	{sMrMimeGfx40_1, ARRAY_COUNT(sMrMimeGfx40_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx40_2, ARRAY_COUNT(sMrMimeGfx40_2)}, 
	{NULL, 32}, 
	{sMrMimeGfx40_3, ARRAY_COUNT(sMrMimeGfx40_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_41.4bpp.lz");
static const u8 sMrMimeGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_41_1.4bpp.lz");
static const u8 sMrMimeGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_41_2.4bpp.lz");
static const u8 sMrMimeGfx41_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_41_3.4bpp.lz");
static const ax_sprite sMrMimeSprites41[] = {
	{sMrMimeGfx41, ARRAY_COUNT(sMrMimeGfx41)}, 
	{NULL, 32}, 
	{sMrMimeGfx41_1, ARRAY_COUNT(sMrMimeGfx41_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx41_2, ARRAY_COUNT(sMrMimeGfx41_2)}, 
	{NULL, 32}, 
	{sMrMimeGfx41_3, ARRAY_COUNT(sMrMimeGfx41_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_42.4bpp.lz");
static const u8 sMrMimeGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_42_1.4bpp.lz");
static const u8 sMrMimeGfx42_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_42_2.4bpp.lz");
static const u8 sMrMimeGfx42_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_42_3.4bpp.lz");
static const ax_sprite sMrMimeSprites42[] = {
	{NULL, 32}, 
	{sMrMimeGfx42, ARRAY_COUNT(sMrMimeGfx42)}, 
	{NULL, 32}, 
	{sMrMimeGfx42_1, ARRAY_COUNT(sMrMimeGfx42_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx42_2, ARRAY_COUNT(sMrMimeGfx42_2)}, 
	{NULL, 64}, 
	{sMrMimeGfx42_3, ARRAY_COUNT(sMrMimeGfx42_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_43.4bpp.lz");
static const u8 sMrMimeGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_43_1.4bpp.lz");
static const u8 sMrMimeGfx43_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_43_2.4bpp.lz");
static const u8 sMrMimeGfx43_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_43_3.4bpp.lz");
static const ax_sprite sMrMimeSprites43[] = {
	{NULL, 32}, 
	{sMrMimeGfx43, ARRAY_COUNT(sMrMimeGfx43)}, 
	{NULL, 32}, 
	{sMrMimeGfx43_1, ARRAY_COUNT(sMrMimeGfx43_1)}, 
	{NULL, 32}, 
	{sMrMimeGfx43_2, ARRAY_COUNT(sMrMimeGfx43_2)}, 
	{NULL, 32}, 
	{sMrMimeGfx43_3, ARRAY_COUNT(sMrMimeGfx43_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_44.4bpp.lz");
static const ax_sprite sMrMimeSprites44[] = {
	{sMrMimeGfx44, ARRAY_COUNT(sMrMimeGfx44)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_45.4bpp.lz");
static const ax_sprite sMrMimeSprites45[] = {
	{sMrMimeGfx45, ARRAY_COUNT(sMrMimeGfx45)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_46.4bpp.lz");
static const ax_sprite sMrMimeSprites46[] = {
	{sMrMimeGfx46, ARRAY_COUNT(sMrMimeGfx46)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_47.4bpp.lz");
static const ax_sprite sMrMimeSprites47[] = {
	{sMrMimeGfx47, ARRAY_COUNT(sMrMimeGfx47)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_48.4bpp.lz");
static const ax_sprite sMrMimeSprites48[] = {
	{sMrMimeGfx48, ARRAY_COUNT(sMrMimeGfx48)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_49.4bpp.lz");
static const ax_sprite sMrMimeSprites49[] = {
	{sMrMimeGfx49, ARRAY_COUNT(sMrMimeGfx49)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_50.4bpp.lz");
static const ax_sprite sMrMimeSprites50[] = {
	{sMrMimeGfx50, ARRAY_COUNT(sMrMimeGfx50)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_51.4bpp.lz");
static const ax_sprite sMrMimeSprites51[] = {
	{sMrMimeGfx51, ARRAY_COUNT(sMrMimeGfx51)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_52.4bpp.lz");
static const ax_sprite sMrMimeSprites52[] = {
	{sMrMimeGfx52, ARRAY_COUNT(sMrMimeGfx52)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_53.4bpp.lz");
static const ax_sprite sMrMimeSprites53[] = {
	{sMrMimeGfx53, ARRAY_COUNT(sMrMimeGfx53)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_54.4bpp.lz");
static const ax_sprite sMrMimeSprites54[] = {
	{sMrMimeGfx54, ARRAY_COUNT(sMrMimeGfx54)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_55.4bpp.lz");
static const ax_sprite sMrMimeSprites55[] = {
	{sMrMimeGfx55, ARRAY_COUNT(sMrMimeGfx55)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_56.4bpp.lz");
static const ax_sprite sMrMimeSprites56[] = {
	{sMrMimeGfx56, ARRAY_COUNT(sMrMimeGfx56)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_57.4bpp.lz");
static const ax_sprite sMrMimeSprites57[] = {
	{sMrMimeGfx57, ARRAY_COUNT(sMrMimeGfx57)}, 
	{NULL, 0}
};
static const u8 sMrMimeGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mrmime/sprite_58.4bpp.lz");
static const ax_sprite sMrMimeSprites58[] = {
	{sMrMimeGfx58, ARRAY_COUNT(sMrMimeGfx58)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesMrMime[] = {
	sMrMimePose1,
	sMrMimePose2,
	sMrMimePose3,
	sMrMimePose4,
	sMrMimePose5,
	sMrMimePose6,
	sMrMimePose7,
	sMrMimePose8,
	sMrMimePose9,
	sMrMimePose10,
	sMrMimePose11,
	sMrMimePose12,
	sMrMimePose13,
	sMrMimePose14,
	sMrMimePose15,
	sMrMimePose16,
	sMrMimePose17,
	sMrMimePose18,
	sMrMimePose19,
	sMrMimePose20,
	sMrMimePose21,
	sMrMimePose22,
	sMrMimePose23,
	sMrMimePose24,
	sMrMimePose1,
	sMrMimePose2,
	sMrMimePose3,
	sMrMimePose4,
	sMrMimePose5,
	sMrMimePose6,
	sMrMimePose7,
	sMrMimePose8,
	sMrMimePose9,
	sMrMimePose10,
	sMrMimePose11,
	sMrMimePose12,
	sMrMimePose13,
	sMrMimePose14,
	sMrMimePose15,
	sMrMimePose16,
	sMrMimePose17,
	sMrMimePose18,
	sMrMimePose19,
	sMrMimePose20,
	sMrMimePose21,
	sMrMimePose22,
	sMrMimePose23,
	sMrMimePose24,
	sMrMimePose1,
	sMrMimePose2,
	sMrMimePose3,
	sMrMimePose4,
	sMrMimePose5,
	sMrMimePose6,
	sMrMimePose7,
	sMrMimePose8,
	sMrMimePose9,
	sMrMimePose10,
	sMrMimePose11,
	sMrMimePose12,
	sMrMimePose13,
	sMrMimePose14,
	sMrMimePose15,
	sMrMimePose16,
	sMrMimePose17,
	sMrMimePose18,
	sMrMimePose19,
	sMrMimePose20,
	sMrMimePose21,
	sMrMimePose22,
	sMrMimePose23,
	sMrMimePose24,
	sMrMimePose73,
	sMrMimePose74,
	sMrMimePose75,
	sMrMimePose76,
	sMrMimePose1,
	sMrMimePose78,
	sMrMimePose79,
	sMrMimePose80,
	sMrMimePose81,
	sMrMimePose4,
	sMrMimePose83,
	sMrMimePose84,
	sMrMimePose85,
	sMrMimePose86,
	sMrMimePose7,
	sMrMimePose88,
	sMrMimePose89,
	sMrMimePose90,
	sMrMimePose91,
	sMrMimePose10,
	sMrMimePose93,
	sMrMimePose94,
	sMrMimePose95,
	sMrMimePose96,
	sMrMimePose13,
	sMrMimePose98,
	sMrMimePose99,
	sMrMimePose100,
	sMrMimePose101,
	sMrMimePose16,
	sMrMimePose103,
	sMrMimePose104,
	sMrMimePose105,
	sMrMimePose106,
	sMrMimePose19,
	sMrMimePose108,
	sMrMimePose109,
	sMrMimePose110,
	sMrMimePose111,
	sMrMimePose22,
	sMrMimePose113,
	sMrMimePose114,
	sMrMimePose115,
	sMrMimePose116,
	sMrMimePose117,
	sMrMimePose118,
	sMrMimePose119,
	sMrMimePose120,
	sMrMimePose121,
	sMrMimePose122,
	sMrMimePose123,
	sMrMimePose124,
	sMrMimePose125,
	sMrMimePose126,
	sMrMimePose127,
	sMrMimePose128,
	sMrMimePose129,
	sMrMimePose130,
	sMrMimePose113,
	sMrMimePose114,
	sMrMimePose115,
	sMrMimePose116,
	sMrMimePose117,
	sMrMimePose118,
	sMrMimePose119,
	sMrMimePose120,
	sMrMimePose139,
	sMrMimePose140,
	sMrMimePose141,
	sMrMimePose142,
	sMrMimePose143,
	sMrMimePose144,
	sMrMimePose145,
	sMrMimePose146,
	sMrMimePose147,
	sMrMimePose148,
	sMrMimePose149,
	sMrMimePose150,
	sMrMimePose151,
	sMrMimePose152,
	sMrMimePose153,
	sMrMimePose154,
	sMrMimePose113,
	sMrMimePose120,
	sMrMimePose119,
	sMrMimePose118,
	sMrMimePose117,
	sMrMimePose116,
	sMrMimePose115,
	sMrMimePose114,
	sMrMimePose1,
	sMrMimePose2,
	sMrMimePose3,
	sMrMimePose4,
	sMrMimePose5,
	sMrMimePose6,
	sMrMimePose7,
	sMrMimePose8,
	sMrMimePose9,
	sMrMimePose10,
	sMrMimePose11,
	sMrMimePose12,
	sMrMimePose13,
	sMrMimePose14,
	sMrMimePose15,
	sMrMimePose16,
	sMrMimePose17,
	sMrMimePose18,
	sMrMimePose19,
	sMrMimePose20,
	sMrMimePose21,
	sMrMimePose22,
	sMrMimePose23,
	sMrMimePose24,
	sMrMimePose147,
	sMrMimePose148,
	sMrMimePose149,
	sMrMimePose150,
	sMrMimePose151,
	sMrMimePose152,
	sMrMimePose153,
	sMrMimePose154,
	sMrMimePose113,
	sMrMimePose114,
	sMrMimePose115,
	sMrMimePose116,
	sMrMimePose117,
	sMrMimePose118,
	sMrMimePose119,
	sMrMimePose120,
};

static const struct PositionSets sAxPositionsMrMime[] = {
	[0] = { .set = { {1, -10}, {-10, -3}, {11, -3}, {1, -9} } },
	[1] = { .set = { {1, -9}, {-9, -4}, {6, 0}, {1, -8} } },
	[2] = { .set = { {1, -9}, {-4, -1}, {10, -4}, {1, -8} } },
	[3] = { .set = { {2, -10}, {9, -4}, {-8, 0}, {0, -9} } },
	[4] = { .set = { {2, -9}, {6, -6}, {1, 1}, {0, -7} } },
	[5] = { .set = { {2, -9}, {8, 0}, {-10, -3}, {0, -7} } },
	[6] = { .set = { {5, -13}, {1, -7}, {1, 0}, {-2, -10} } },
	[7] = { .set = { {5, -12}, {-7, -6}, {6, -2}, {-2, -9} } },
	[8] = { .set = { {5, -12}, {8, -6}, {-8, 0}, {-2, -9} } },
	[9] = { .set = { {3, -14}, {-4, -7}, {10, -1}, {-2, -11} } },
	[10] = { .set = { {2, -14}, {-10, -5}, {11, -7}, {-2, -10} } },
	[11] = { .set = { {2, -14}, {-1, -9}, {3, 2}, {-2, -10} } },
	[12] = { .set = { {-1, -15}, {10, -5}, {-11, -5}, {-1, -12} } },
	[13] = { .set = { {0, -14}, {8, -1}, {-7, -7}, {0, -11} } },
	[14] = { .set = { {-1, -14}, {6, -7}, {-9, -1}, {-1, -11} } },
	[15] = { .set = { {-4, -14}, {3, -7}, {-11, -1}, {1, -11} } },
	[16] = { .set = { {-3, -14}, {9, -5}, {-12, -7}, {1, -10} } },
	[17] = { .set = { {-3, -14}, {0, -9}, {-4, 2}, {1, -10} } },
	[18] = { .set = { {-6, -13}, {-2, -7}, {-2, 0}, {1, -10} } },
	[19] = { .set = { {-6, -12}, {6, -6}, {-7, -2}, {1, -9} } },
	[20] = { .set = { {-6, -12}, {-9, -6}, {7, 0}, {1, -9} } },
	[21] = { .set = { {-2, -10}, {-9, -4}, {8, 0}, {0, -9} } },
	[22] = { .set = { {-2, -9}, {-6, -6}, {-1, 1}, {0, -7} } },
	[23] = { .set = { {-2, -9}, {-8, 0}, {10, -3}, {0, -7} } },
	[24] = { .set = { {1, -10}, {-10, -3}, {11, -3}, {1, -9} } },
	[25] = { .set = { {1, -9}, {-9, -4}, {6, 0}, {1, -8} } },
	[26] = { .set = { {1, -9}, {-4, -1}, {10, -4}, {1, -8} } },
	[27] = { .set = { {2, -10}, {9, -4}, {-8, 0}, {0, -9} } },
	[28] = { .set = { {2, -9}, {6, -6}, {1, 1}, {0, -7} } },
	[29] = { .set = { {2, -9}, {8, 0}, {-10, -3}, {0, -7} } },
	[30] = { .set = { {5, -13}, {1, -7}, {1, 0}, {-2, -10} } },
	[31] = { .set = { {5, -12}, {-7, -6}, {6, -2}, {-2, -9} } },
	[32] = { .set = { {5, -12}, {8, -6}, {-8, 0}, {-2, -9} } },
	[33] = { .set = { {3, -14}, {-4, -7}, {10, -1}, {-2, -11} } },
	[34] = { .set = { {2, -14}, {-10, -5}, {11, -7}, {-2, -10} } },
	[35] = { .set = { {2, -14}, {-1, -9}, {3, 2}, {-2, -10} } },
	[36] = { .set = { {-1, -15}, {10, -5}, {-11, -5}, {-1, -12} } },
	[37] = { .set = { {0, -14}, {8, -1}, {-7, -7}, {0, -11} } },
	[38] = { .set = { {-1, -14}, {6, -7}, {-9, -1}, {-1, -11} } },
	[39] = { .set = { {-4, -14}, {3, -7}, {-11, -1}, {1, -11} } },
	[40] = { .set = { {-3, -14}, {9, -5}, {-12, -7}, {1, -10} } },
	[41] = { .set = { {-3, -14}, {0, -9}, {-4, 2}, {1, -10} } },
	[42] = { .set = { {-6, -13}, {-2, -7}, {-2, 0}, {1, -10} } },
	[43] = { .set = { {-6, -12}, {6, -6}, {-7, -2}, {1, -9} } },
	[44] = { .set = { {-6, -12}, {-9, -6}, {7, 0}, {1, -9} } },
	[45] = { .set = { {-2, -10}, {-9, -4}, {8, 0}, {0, -9} } },
	[46] = { .set = { {-2, -9}, {-6, -6}, {-1, 1}, {0, -7} } },
	[47] = { .set = { {-2, -9}, {-8, 0}, {10, -3}, {0, -7} } },
	[48] = { .set = { {1, -10}, {-10, -3}, {11, -3}, {1, -9} } },
	[49] = { .set = { {1, -9}, {-9, -4}, {6, 0}, {1, -8} } },
	[50] = { .set = { {1, -9}, {-4, -1}, {10, -4}, {1, -8} } },
	[51] = { .set = { {2, -10}, {9, -4}, {-8, 0}, {0, -9} } },
	[52] = { .set = { {2, -9}, {6, -6}, {1, 1}, {0, -7} } },
	[53] = { .set = { {2, -9}, {8, 0}, {-10, -3}, {0, -7} } },
	[54] = { .set = { {5, -13}, {1, -7}, {1, 0}, {-2, -10} } },
	[55] = { .set = { {5, -12}, {-7, -6}, {6, -2}, {-2, -9} } },
	[56] = { .set = { {5, -12}, {8, -6}, {-8, 0}, {-2, -9} } },
	[57] = { .set = { {3, -14}, {-4, -7}, {10, -1}, {-2, -11} } },
	[58] = { .set = { {2, -14}, {-10, -5}, {11, -7}, {-2, -10} } },
	[59] = { .set = { {2, -14}, {-1, -9}, {3, 2}, {-2, -10} } },
	[60] = { .set = { {-1, -15}, {10, -5}, {-11, -5}, {-1, -12} } },
	[61] = { .set = { {0, -14}, {8, -1}, {-7, -7}, {0, -11} } },
	[62] = { .set = { {-1, -14}, {6, -7}, {-9, -1}, {-1, -11} } },
	[63] = { .set = { {-4, -14}, {3, -7}, {-11, -1}, {1, -11} } },
	[64] = { .set = { {-3, -14}, {9, -5}, {-12, -7}, {1, -10} } },
	[65] = { .set = { {-3, -14}, {0, -9}, {-4, 2}, {1, -10} } },
	[66] = { .set = { {-6, -13}, {-2, -7}, {-2, 0}, {1, -10} } },
	[67] = { .set = { {-6, -12}, {6, -6}, {-7, -2}, {1, -9} } },
	[68] = { .set = { {-6, -12}, {-9, -6}, {7, 0}, {1, -9} } },
	[69] = { .set = { {-2, -10}, {-9, -4}, {8, 0}, {0, -9} } },
	[70] = { .set = { {-2, -9}, {-6, -6}, {-1, 1}, {0, -7} } },
	[71] = { .set = { {-2, -9}, {-8, 0}, {10, -3}, {0, -7} } },
	[72] = { .set = { {-2, -10}, {1, -2}, {-1, -7}, {-1, -9} } },
	[73] = { .set = { {-1, -10}, {1, -8}, {3, -5}, {-1, -9} } },
	[74] = { .set = { {0, -10}, {3, -9}, {5, -4}, {1, -9} } },
	[75] = { .set = { {0, -4}, {-7, 0}, {6, 0}, {0, -6} } },
	[76] = { .set = { {1, -10}, {-10, -3}, {11, -3}, {1, -9} } },
	[77] = { .set = { {4, -7}, {4, 0}, {4, -5}, {3, -9} } },
	[78] = { .set = { {3, -8}, {1, -6}, {1, -3}, {2, -10} } },
	[79] = { .set = { {3, -8}, {1, -7}, {-2, -1}, {0, -9} } },
	[80] = { .set = { {2, -5}, {12, -3}, {2, 1}, {0, -6} } },
	[81] = { .set = { {2, -10}, {9, -4}, {-8, 0}, {0, -9} } },
	[82] = { .set = { {6, -9}, {8, -2}, {11, -8}, {2, -10} } },
	[83] = { .set = { {5, -10}, {5, -7}, {10, -5}, {2, -11} } },
	[84] = { .set = { {4, -10}, {9, -8}, {5, -2}, {1, -11} } },
	[85] = { .set = { {7, -8}, {17, -13}, {17, -7}, {3, -11} } },
	[86] = { .set = { {5, -13}, {1, -7}, {1, 0}, {-2, -10} } },
	[87] = { .set = { {2, -12}, {4, -6}, {2, -13}, {-1, -11} } },
	[88] = { .set = { {2, -13}, {3, -10}, {5, -8}, {-1, -12} } },
	[89] = { .set = { {3, -12}, {4, -11}, {3, -7}, {-1, -12} } },
	[90] = { .set = { {6, -11}, {8, -23}, {18, -19}, {2, -12} } },
	[91] = { .set = { {3, -14}, {-4, -7}, {10, -1}, {-2, -11} } },
	[92] = { .set = { {1, -14}, {1, -7}, {0, -12}, {0, -11} } },
	[93] = { .set = { {0, -15}, {-1, -10}, {-2, -11}, {-1, -13} } },
	[94] = { .set = { {-1, -15}, {-1, -11}, {-3, -9}, {-2, -12} } },
	[95] = { .set = { {0, -16}, {5, -22}, {-6, -22}, {0, -13} } },
	[96] = { .set = { {-1, -15}, {10, -5}, {-11, -5}, {-1, -12} } },
	[97] = { .set = { {-3, -12}, {-5, -6}, {-3, -13}, {0, -11} } },
	[98] = { .set = { {-3, -13}, {-4, -10}, {-6, -8}, {0, -12} } },
	[99] = { .set = { {-4, -12}, {-5, -11}, {-4, -7}, {0, -12} } },
	[100] = { .set = { {-7, -11}, {-9, -23}, {-19, -19}, {-3, -12} } },
	[101] = { .set = { {-4, -14}, {3, -7}, {-11, -1}, {1, -11} } },
	[102] = { .set = { {-7, -9}, {-9, -2}, {-12, -8}, {-3, -10} } },
	[103] = { .set = { {-6, -10}, {-6, -7}, {-11, -5}, {-3, -11} } },
	[104] = { .set = { {-5, -10}, {-10, -8}, {-6, -2}, {-2, -11} } },
	[105] = { .set = { {-8, -8}, {-18, -13}, {-18, -7}, {-4, -11} } },
	[106] = { .set = { {-6, -13}, {-2, -7}, {-2, 0}, {1, -10} } },
	[107] = { .set = { {-5, -7}, {-5, 0}, {-5, -5}, {-4, -9} } },
	[108] = { .set = { {-4, -8}, {-2, -6}, {-2, -3}, {-3, -10} } },
	[109] = { .set = { {-4, -8}, {-2, -7}, {1, -1}, {-1, -9} } },
	[110] = { .set = { {-3, -5}, {-13, -3}, {-3, 1}, {-1, -6} } },
	[111] = { .set = { {-2, -10}, {-9, -4}, {8, 0}, {0, -9} } },
	[112] = { .set = { {0, -10}, {-3, -3}, {0, -19}, {1, -9} } },
	[113] = { .set = { {-3, -11}, {-9, -5}, {-3, -19}, {-1, -10} } },
	[114] = { .set = { {-4, -12}, {-3, -7}, {-8, -19}, {1, -10} } },
	[115] = { .set = { {-3, -15}, {0, -8}, {-7, -23}, {1, -11} } },
	[116] = { .set = { {0, -15}, {2, -8}, {-1, -22}, {0, -12} } },
	[117] = { .set = { {3, -14}, {2, -9}, {3, -22}, {-1, -12} } },
	[118] = { .set = { {4, -11}, {9, -8}, {8, -20}, {-1, -12} } },
	[119] = { .set = { {3, -10}, {2, -4}, {4, -19}, {0, -10} } },
	[120] = { .set = { {-2, -7}, {-9, -6}, {10, 2}, {0, -6} } },
	[121] = { .set = { {-2, -6}, {-9, -6}, {10, 2}, {0, -6} } },
	[122] = { .set = { {0, -13}, {2, -23}, {-3, -24}, {0, -9} } },
	[123] = { .set = { {0, -13}, {-5, -23}, {-1, -24}, {-2, -10} } },
	[124] = { .set = { {4, -13}, {0, -22}, {1, -23}, {-1, -11} } },
	[125] = { .set = { {2, -15}, {2, -23}, {1, -22}, {-1, -10} } },
	[126] = { .set = { {1, -14}, {-1, -25}, {2, -23}, {1, -11} } },
	[127] = { .set = { {-3, -15}, {-3, -23}, {-2, -22}, {0, -10} } },
	[128] = { .set = { {-5, -13}, {-1, -22}, {-2, -23}, {0, -11} } },
	[129] = { .set = { {-1, -13}, {4, -23}, {0, -24}, {1, -10} } },
	[130] = { .set = { {0, -10}, {-3, -3}, {0, -19}, {1, -9} } },
	[131] = { .set = { {-3, -11}, {-9, -5}, {-3, -19}, {-1, -10} } },
	[132] = { .set = { {-4, -12}, {-3, -7}, {-8, -19}, {1, -10} } },
	[133] = { .set = { {-3, -15}, {0, -8}, {-7, -23}, {1, -11} } },
	[134] = { .set = { {0, -15}, {2, -8}, {-1, -22}, {0, -12} } },
	[135] = { .set = { {3, -14}, {2, -9}, {3, -22}, {-1, -12} } },
	[136] = { .set = { {4, -11}, {9, -8}, {8, -20}, {-1, -12} } },
	[137] = { .set = { {3, -10}, {2, -4}, {4, -19}, {0, -10} } },
	[138] = { .set = { {0, -9}, {-2, -2}, {-1, -18}, {0, -8} } },
	[139] = { .set = { {-2, -10}, {-8, -4}, {-4, -18}, {-1, -9} } },
	[140] = { .set = { {-4, -10}, {-2, -8}, {-8, -17}, {1, -9} } },
	[141] = { .set = { {-3, -14}, {-4, -8}, {-7, -20}, {0, -10} } },
	[142] = { .set = { {0, -14}, {-2, -8}, {0, -21}, {0, -11} } },
	[143] = { .set = { {3, -14}, {2, -10}, {5, -20}, {-2, -11} } },
	[144] = { .set = { {4, -10}, {8, -9}, {9, -18}, {-1, -11} } },
	[145] = { .set = { {4, -10}, {4, -4}, {3, -18}, {0, -9} } },
	[146] = { .set = { {0, -6}, {-7, -2}, {6, -2}, {0, -8} } },
	[147] = { .set = { {-3, -6}, {-13, -4}, {-3, 0}, {-1, -7} } },
	[148] = { .set = { {-3, -7}, {-13, -12}, {-13, -6}, {1, -10} } },
	[149] = { .set = { {-1, -8}, {-3, -20}, {-13, -16}, {3, -9} } },
	[150] = { .set = { {0, -11}, {5, -17}, {-6, -17}, {0, -8} } },
	[151] = { .set = { {0, -8}, {2, -20}, {12, -16}, {-4, -9} } },
	[152] = { .set = { {2, -7}, {12, -12}, {12, -6}, {-2, -10} } },
	[153] = { .set = { {2, -6}, {12, -4}, {2, 0}, {0, -7} } },
	[154] = { .set = { {0, -10}, {-3, -3}, {0, -19}, {1, -9} } },
	[155] = { .set = { {3, -10}, {2, -4}, {4, -19}, {0, -10} } },
	[156] = { .set = { {4, -11}, {9, -8}, {8, -20}, {-1, -12} } },
	[157] = { .set = { {3, -14}, {2, -9}, {3, -22}, {-1, -12} } },
	[158] = { .set = { {0, -15}, {2, -8}, {-1, -22}, {0, -12} } },
	[159] = { .set = { {-3, -15}, {0, -8}, {-7, -23}, {1, -11} } },
	[160] = { .set = { {-4, -12}, {-3, -7}, {-8, -19}, {1, -10} } },
	[161] = { .set = { {-3, -11}, {-9, -5}, {-3, -19}, {-1, -10} } },
	[162] = { .set = { {1, -10}, {-10, -3}, {11, -3}, {1, -9} } },
	[163] = { .set = { {1, -9}, {-9, -4}, {6, 0}, {1, -8} } },
	[164] = { .set = { {1, -9}, {-4, -1}, {10, -4}, {1, -8} } },
	[165] = { .set = { {2, -10}, {9, -4}, {-8, 0}, {0, -9} } },
	[166] = { .set = { {2, -9}, {6, -6}, {1, 1}, {0, -7} } },
	[167] = { .set = { {2, -9}, {8, 0}, {-10, -3}, {0, -7} } },
	[168] = { .set = { {5, -13}, {1, -7}, {1, 0}, {-2, -10} } },
	[169] = { .set = { {5, -12}, {-7, -6}, {6, -2}, {-2, -9} } },
	[170] = { .set = { {5, -12}, {8, -6}, {-8, 0}, {-2, -9} } },
	[171] = { .set = { {3, -14}, {-4, -7}, {10, -1}, {-2, -11} } },
	[172] = { .set = { {2, -14}, {-10, -5}, {11, -7}, {-2, -10} } },
	[173] = { .set = { {2, -14}, {-1, -9}, {3, 2}, {-2, -10} } },
	[174] = { .set = { {-1, -15}, {10, -5}, {-11, -5}, {-1, -12} } },
	[175] = { .set = { {0, -14}, {8, -1}, {-7, -7}, {0, -11} } },
	[176] = { .set = { {-1, -14}, {6, -7}, {-9, -1}, {-1, -11} } },
	[177] = { .set = { {-4, -14}, {3, -7}, {-11, -1}, {1, -11} } },
	[178] = { .set = { {-3, -14}, {9, -5}, {-12, -7}, {1, -10} } },
	[179] = { .set = { {-3, -14}, {0, -9}, {-4, 2}, {1, -10} } },
	[180] = { .set = { {-6, -13}, {-2, -7}, {-2, 0}, {1, -10} } },
	[181] = { .set = { {-6, -12}, {6, -6}, {-7, -2}, {1, -9} } },
	[182] = { .set = { {-6, -12}, {-9, -6}, {7, 0}, {1, -9} } },
	[183] = { .set = { {-2, -10}, {-9, -4}, {8, 0}, {0, -9} } },
	[184] = { .set = { {-2, -9}, {-6, -6}, {-1, 1}, {0, -7} } },
	[185] = { .set = { {-2, -9}, {-8, 0}, {10, -3}, {0, -7} } },
	[186] = { .set = { {0, -6}, {-7, -2}, {6, -2}, {0, -8} } },
	[187] = { .set = { {-3, -6}, {-13, -4}, {-3, 0}, {-1, -7} } },
	[188] = { .set = { {-3, -7}, {-13, -12}, {-13, -6}, {1, -10} } },
	[189] = { .set = { {-1, -8}, {-3, -20}, {-13, -16}, {3, -9} } },
	[190] = { .set = { {0, -11}, {5, -17}, {-6, -17}, {0, -8} } },
	[191] = { .set = { {0, -8}, {2, -20}, {12, -16}, {-4, -9} } },
	[192] = { .set = { {2, -7}, {12, -12}, {12, -6}, {-2, -10} } },
	[193] = { .set = { {2, -6}, {12, -4}, {2, 0}, {0, -7} } },
	[194] = { .set = { {0, -10}, {-3, -3}, {0, -19}, {1, -9} } },
	[195] = { .set = { {-3, -11}, {-9, -5}, {-3, -19}, {-1, -10} } },
	[196] = { .set = { {-4, -12}, {-3, -7}, {-8, -19}, {1, -10} } },
	[197] = { .set = { {-3, -15}, {0, -8}, {-7, -23}, {1, -11} } },
	[198] = { .set = { {0, -15}, {2, -8}, {-1, -22}, {0, -12} } },
	[199] = { .set = { {3, -14}, {2, -9}, {3, -22}, {-1, -12} } },
	[200] = { .set = { {4, -11}, {9, -8}, {8, -20}, {-1, -12} } },
	[201] = { .set = { {3, -10}, {2, -4}, {4, -19}, {0, -10} } },
};

static const ax_anim *const sMrMimeAnimTable1[] = {
	gAxSharedAnim_02603,
	gAxSharedAnim_02679,
	gAxSharedAnim_02688,
	gAxSharedAnim_02697,
	gAxSharedAnim_02615,
	gAxSharedAnim_02637,
	gAxSharedAnim_02650,
	gAxSharedAnim_02659,
};

static const ax_anim *const sMrMimeAnimTable2[] = {
	sMrMimeAnims_2_1,
	sMrMimeAnims_2_2,
	sMrMimeAnims_2_3,
	sMrMimeAnims_2_4,
	sMrMimeAnims_2_5,
	sMrMimeAnims_2_6,
	sMrMimeAnims_2_7,
	sMrMimeAnims_2_8,
};

static const ax_anim *const sMrMimeAnimTable3[] = {
	sMrMimeAnims_3_1,
	sMrMimeAnims_3_2,
	sMrMimeAnims_3_3,
	sMrMimeAnims_3_4,
	sMrMimeAnims_3_5,
	sMrMimeAnims_3_6,
	sMrMimeAnims_3_7,
	sMrMimeAnims_3_8,
};

static const ax_anim *const sMrMimeAnimTable4[] = {
	sMrMimeAnims_4_1,
	sMrMimeAnims_4_2,
	sMrMimeAnims_4_3,
	sMrMimeAnims_4_4,
	sMrMimeAnims_4_5,
	sMrMimeAnims_4_6,
	sMrMimeAnims_4_7,
	sMrMimeAnims_4_8,
};

static const ax_anim *const sMrMimeAnimTable5[] = {
	gAxSharedAnim_00249,
	gAxSharedAnim_00309,
	gAxSharedAnim_00301,
	gAxSharedAnim_00294,
	gAxSharedAnim_00285,
	gAxSharedAnim_00276,
	gAxSharedAnim_00270,
	gAxSharedAnim_00258,
};

static const ax_anim *const sMrMimeAnimTable6[] = {
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
};

static const ax_anim *const sMrMimeAnimTable7[] = {
	gAxSharedAnim_00330,
	gAxSharedAnim_00340,
	gAxSharedAnim_00348,
	gAxSharedAnim_00356,
	gAxSharedAnim_00368,
	gAxSharedAnim_00376,
	gAxSharedAnim_00383,
	gAxSharedAnim_00390,
};

static const ax_anim *const sMrMimeAnimTable8[] = {
	sMrMimeAnims_8_1,
	sMrMimeAnims_8_2,
	sMrMimeAnims_8_3,
	sMrMimeAnims_8_4,
	sMrMimeAnims_8_5,
	sMrMimeAnims_8_6,
	sMrMimeAnims_8_7,
	sMrMimeAnims_8_8,
};

static const ax_anim *const sMrMimeAnimTable9[] = {
	gAxSharedAnim_00534,
	sMrMimeAnims_9_2,
	sMrMimeAnims_9_3,
	sMrMimeAnims_9_4,
	sMrMimeAnims_9_5,
	sMrMimeAnims_9_6,
	sMrMimeAnims_9_7,
	gAxSharedAnim_00546,
};

static const ax_anim *const sMrMimeAnimTable10[] = {
	gAxSharedAnim_00612,
	gAxSharedAnim_00622,
	gAxSharedAnim_00632,
	gAxSharedAnim_00642,
	gAxSharedAnim_00651,
	gAxSharedAnim_00660,
	gAxSharedAnim_00675,
	gAxSharedAnim_00686,
};

static const ax_anim *const sMrMimeAnimTable11[] = {
	gAxSharedAnim_00697,
	gAxSharedAnim_00736,
	gAxSharedAnim_00768,
	gAxSharedAnim_00812,
	gAxSharedAnim_00847,
	gAxSharedAnim_00887,
	gAxSharedAnim_00929,
	gAxSharedAnim_00963,
};

static const ax_anim *const sMrMimeAnimTable12[] = {
	gAxSharedAnim_01018,
	gAxSharedAnim_01127,
	gAxSharedAnim_01099,
	gAxSharedAnim_01085,
	gAxSharedAnim_01084,
	gAxSharedAnim_01065,
	gAxSharedAnim_01034,
	gAxSharedAnim_01019,
};

static const ax_anim *const sMrMimeAnimTable13[] = {
	gAxSharedAnim_01145,
	gAxSharedAnim_01227,
	gAxSharedAnim_01218,
	gAxSharedAnim_01201,
	gAxSharedAnim_01190,
	gAxSharedAnim_01179,
	gAxSharedAnim_01168,
	gAxSharedAnim_01157,
};

static const ax_anim *const *const sAxAnimationsMrMime[] = {
	sMrMimeAnimTable1,
	sMrMimeAnimTable2,
	sMrMimeAnimTable3,
	sMrMimeAnimTable4,
	sMrMimeAnimTable5,
	sMrMimeAnimTable6,
	sMrMimeAnimTable7,
	sMrMimeAnimTable8,
	sMrMimeAnimTable9,
	sMrMimeAnimTable10,
	sMrMimeAnimTable11,
	sMrMimeAnimTable12,
	sMrMimeAnimTable13,
};

static const ax_sprite *const sAxSpritesMrMime[] = {
	sMrMimeSprites1,
	sMrMimeSprites2,
	sMrMimeSprites3,
	sMrMimeSprites4,
	sMrMimeSprites5,
	sMrMimeSprites6,
	sMrMimeSprites7,
	sMrMimeSprites8,
	sMrMimeSprites9,
	sMrMimeSprites10,
	sMrMimeSprites11,
	sMrMimeSprites12,
	sMrMimeSprites13,
	sMrMimeSprites14,
	sMrMimeSprites15,
	sMrMimeSprites16,
	sMrMimeSprites17,
	sMrMimeSprites18,
	sMrMimeSprites19,
	sMrMimeSprites20,
	sMrMimeSprites21,
	sMrMimeSprites22,
	sMrMimeSprites23,
	sMrMimeSprites24,
	sMrMimeSprites25,
	sMrMimeSprites26,
	sMrMimeSprites27,
	sMrMimeSprites28,
	sMrMimeSprites29,
	sMrMimeSprites30,
	sMrMimeSprites31,
	sMrMimeSprites32,
	sMrMimeSprites33,
	sMrMimeSprites34,
	sMrMimeSprites35,
	sMrMimeSprites36,
	sMrMimeSprites37,
	sMrMimeSprites38,
	sMrMimeSprites39,
	sMrMimeSprites40,
	sMrMimeSprites41,
	sMrMimeSprites42,
	sMrMimeSprites43,
	sMrMimeSprites44,
	sMrMimeSprites45,
	sMrMimeSprites46,
	sMrMimeSprites47,
	sMrMimeSprites48,
	sMrMimeSprites49,
	sMrMimeSprites50,
	sMrMimeSprites51,
	sMrMimeSprites52,
	sMrMimeSprites53,
	sMrMimeSprites54,
	sMrMimeSprites55,
	sMrMimeSprites56,
	sMrMimeSprites57,
	sMrMimeSprites58,
};

static const axmain sAxMainMrMime = {
	.poses = sAxPosesMrMime,
	.animations = sAxAnimationsMrMime,
	.animCount = ARRAY_COUNT(sAxAnimationsMrMime),
	.spriteData = sAxSpritesMrMime,
	.positions = sAxPositionsMrMime,
};
