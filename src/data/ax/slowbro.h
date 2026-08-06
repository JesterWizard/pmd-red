/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainSlowbro;
const SiroArchive gAxSlowbro = {"SIRO", &sAxMainSlowbro};

static const ax_pose sSlowbroPose1[] = {
	AX_POSE(0, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose2[] = {
	AX_POSE(1, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose3[] = {
	AX_POSE(2, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose4[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose5[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose6[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose8[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose10[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose11[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose12[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose13[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose14[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose15[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose16[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose17[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose18[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose19[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose20[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose21[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose22[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose23[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose24[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose28[] = {
	AX_POSE(15, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose29[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose33[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose34[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose38[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose39[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose43[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose44[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose48[] = {
	AX_POSE(23, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose49[] = {
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose53[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose54[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose58[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose59[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose63[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose64[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose114[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose119[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose139[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose144[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose150[] = {
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose151[] = {
	AX_POSE(26, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose156[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose157[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose158[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose164[] = {
	AX_POSE(29, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose165[] = {
	AX_POSE(30, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose170[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose171[] = {
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose172[] = {
	AX_POSE(32, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose178[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose179[] = {
	AX_POSE(34, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose184[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose185[] = {
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose186[] = {
	AX_POSE(32, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose192[] = {
	AX_POSE(29, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose193[] = {
	AX_POSE(30, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose198[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose199[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose200[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose201[] = {
	AX_POSE(35, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose202[] = {
	AX_POSE(36, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose203[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose204[] = {
	AX_POSE(38, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose205[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose206[] = {
	AX_POSE(40, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose207[] = {
	AX_POSE(41, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose208[] = {
	AX_POSE(40, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose209[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose210[] = {
	AX_POSE(38, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose272[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose274[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose278[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlowbroPose280[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const u8 sSlowbroAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_2_1.lz");
static const u8 sSlowbroAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_2_2.lz");
static const u8 sSlowbroAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_2_3.lz");
static const u8 sSlowbroAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_2_4.lz");
static const u8 sSlowbroAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_2_5.lz");
static const u8 sSlowbroAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_2_6.lz");
static const u8 sSlowbroAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_2_7.lz");
static const u8 sSlowbroAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_2_8.lz");
static const u8 sSlowbroAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_3_1.lz");
static const u8 sSlowbroAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_3_2.lz");
static const u8 sSlowbroAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_3_3.lz");
static const u8 sSlowbroAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_3_4.lz");
static const u8 sSlowbroAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_3_5.lz");
static const u8 sSlowbroAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_3_6.lz");
static const u8 sSlowbroAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_3_7.lz");
static const u8 sSlowbroAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_3_8.lz");
static const u8 sSlowbroAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_4_1.lz");
static const u8 sSlowbroAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_4_2.lz");
static const u8 sSlowbroAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_4_3.lz");
static const u8 sSlowbroAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_4_4.lz");
static const u8 sSlowbroAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_4_5.lz");
static const u8 sSlowbroAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_4_6.lz");
static const u8 sSlowbroAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_4_7.lz");
static const u8 sSlowbroAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_4_8.lz");
static const u8 sSlowbroAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_5_1.lz");
static const u8 sSlowbroAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_5_2.lz");
static const u8 sSlowbroAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_5_3.lz");
static const u8 sSlowbroAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_5_4.lz");
static const u8 sSlowbroAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_5_5.lz");
static const u8 sSlowbroAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_5_6.lz");
static const u8 sSlowbroAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_5_7.lz");
static const u8 sSlowbroAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_5_8.lz");
static const u8 sSlowbroAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_8_1.lz");
static const u8 sSlowbroAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_8_2.lz");
static const u8 sSlowbroAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_8_3.lz");
static const u8 sSlowbroAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_8_4.lz");
static const u8 sSlowbroAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_8_5.lz");
static const u8 sSlowbroAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_8_6.lz");
static const u8 sSlowbroAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_8_7.lz");
static const u8 sSlowbroAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_8_8.lz");
static const u8 sSlowbroAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_9_1.lz");
static const u8 sSlowbroAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_9_2.lz");
static const u8 sSlowbroAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_9_3.lz");
static const u8 sSlowbroAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_9_4.lz");
static const u8 sSlowbroAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_9_5.lz");
static const u8 sSlowbroAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_9_6.lz");
static const u8 sSlowbroAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_9_7.lz");
static const u8 sSlowbroAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_9_8.lz");
static const u8 sSlowbroAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_11_1.lz");
static const u8 sSlowbroAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_11_2.lz");
static const u8 sSlowbroAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_11_3.lz");
static const u8 sSlowbroAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_11_4.lz");
static const u8 sSlowbroAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_11_5.lz");
static const u8 sSlowbroAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_11_6.lz");
static const u8 sSlowbroAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_11_7.lz");
static const u8 sSlowbroAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slowbro/sSlowbroAnims_11_8.lz");

static const u8 sSlowbroGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_1.4bpp.lz");
static const ax_sprite sSlowbroSprites1[] = {
	{sSlowbroGfx1, ARRAY_COUNT(sSlowbroGfx1)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_2.4bpp.lz");
static const ax_sprite sSlowbroSprites2[] = {
	{sSlowbroGfx2, ARRAY_COUNT(sSlowbroGfx2)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_3.4bpp.lz");
static const ax_sprite sSlowbroSprites3[] = {
	{sSlowbroGfx3, ARRAY_COUNT(sSlowbroGfx3)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_4.4bpp.lz");
static const ax_sprite sSlowbroSprites4[] = {
	{sSlowbroGfx4, ARRAY_COUNT(sSlowbroGfx4)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_5.4bpp.lz");
static const ax_sprite sSlowbroSprites5[] = {
	{sSlowbroGfx5, ARRAY_COUNT(sSlowbroGfx5)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_6.4bpp.lz");
static const ax_sprite sSlowbroSprites6[] = {
	{sSlowbroGfx6, ARRAY_COUNT(sSlowbroGfx6)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_7.4bpp.lz");
static const ax_sprite sSlowbroSprites7[] = {
	{sSlowbroGfx7, ARRAY_COUNT(sSlowbroGfx7)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_8.4bpp.lz");
static const ax_sprite sSlowbroSprites8[] = {
	{sSlowbroGfx8, ARRAY_COUNT(sSlowbroGfx8)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_9.4bpp.lz");
static const ax_sprite sSlowbroSprites9[] = {
	{sSlowbroGfx9, ARRAY_COUNT(sSlowbroGfx9)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_10.4bpp.lz");
static const ax_sprite sSlowbroSprites10[] = {
	{sSlowbroGfx10, ARRAY_COUNT(sSlowbroGfx10)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_11.4bpp.lz");
static const ax_sprite sSlowbroSprites11[] = {
	{sSlowbroGfx11, ARRAY_COUNT(sSlowbroGfx11)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_12.4bpp.lz");
static const ax_sprite sSlowbroSprites12[] = {
	{sSlowbroGfx12, ARRAY_COUNT(sSlowbroGfx12)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_13.4bpp.lz");
static const ax_sprite sSlowbroSprites13[] = {
	{sSlowbroGfx13, ARRAY_COUNT(sSlowbroGfx13)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_14.4bpp.lz");
static const ax_sprite sSlowbroSprites14[] = {
	{sSlowbroGfx14, ARRAY_COUNT(sSlowbroGfx14)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_15.4bpp.lz");
static const ax_sprite sSlowbroSprites15[] = {
	{sSlowbroGfx15, ARRAY_COUNT(sSlowbroGfx15)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_16.4bpp.lz");
static const u8 sSlowbroGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_16_1.4bpp.lz");
static const u8 sSlowbroGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_16_2.4bpp.lz");
static const u8 sSlowbroGfx16_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_16_3.4bpp.lz");
static const ax_sprite sSlowbroSprites16[] = {
	{sSlowbroGfx16, ARRAY_COUNT(sSlowbroGfx16)}, 
	{NULL, 32}, 
	{sSlowbroGfx16_1, ARRAY_COUNT(sSlowbroGfx16_1)}, 
	{NULL, 32}, 
	{sSlowbroGfx16_2, ARRAY_COUNT(sSlowbroGfx16_2)}, 
	{NULL, 32}, 
	{sSlowbroGfx16_3, ARRAY_COUNT(sSlowbroGfx16_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_17.4bpp.lz");
static const u8 sSlowbroGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_17_1.4bpp.lz");
static const u8 sSlowbroGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_17_2.4bpp.lz");
static const u8 sSlowbroGfx17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_17_3.4bpp.lz");
static const ax_sprite sSlowbroSprites17[] = {
	{NULL, 32}, 
	{sSlowbroGfx17, ARRAY_COUNT(sSlowbroGfx17)}, 
	{NULL, 64}, 
	{sSlowbroGfx17_1, ARRAY_COUNT(sSlowbroGfx17_1)}, 
	{NULL, 32}, 
	{sSlowbroGfx17_2, ARRAY_COUNT(sSlowbroGfx17_2)}, 
	{NULL, 32}, 
	{sSlowbroGfx17_3, ARRAY_COUNT(sSlowbroGfx17_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_18.4bpp.lz");
static const u8 sSlowbroGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_18_1.4bpp.lz");
static const ax_sprite sSlowbroSprites18[] = {
	{NULL, 64}, 
	{sSlowbroGfx18, ARRAY_COUNT(sSlowbroGfx18)}, 
	{NULL, 32}, 
	{sSlowbroGfx18_1, ARRAY_COUNT(sSlowbroGfx18_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_19.4bpp.lz");
static const ax_sprite sSlowbroSprites19[] = {
	{NULL, 64}, 
	{sSlowbroGfx19, ARRAY_COUNT(sSlowbroGfx19)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_20.4bpp.lz");
static const ax_sprite sSlowbroSprites20[] = {
	{sSlowbroGfx20, ARRAY_COUNT(sSlowbroGfx20)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_21.4bpp.lz");
static const ax_sprite sSlowbroSprites21[] = {
	{sSlowbroGfx21, ARRAY_COUNT(sSlowbroGfx21)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_22.4bpp.lz");
static const u8 sSlowbroGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_22_1.4bpp.lz");
static const ax_sprite sSlowbroSprites22[] = {
	{sSlowbroGfx22, ARRAY_COUNT(sSlowbroGfx22)}, 
	{NULL, 32}, 
	{sSlowbroGfx22_1, ARRAY_COUNT(sSlowbroGfx22_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_23.4bpp.lz");
static const ax_sprite sSlowbroSprites23[] = {
	{sSlowbroGfx23, ARRAY_COUNT(sSlowbroGfx23)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_24.4bpp.lz");
static const u8 sSlowbroGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_24_1.4bpp.lz");
static const u8 sSlowbroGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_24_2.4bpp.lz");
static const u8 sSlowbroGfx24_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_24_3.4bpp.lz");
static const ax_sprite sSlowbroSprites24[] = {
	{sSlowbroGfx24, ARRAY_COUNT(sSlowbroGfx24)}, 
	{NULL, 32}, 
	{sSlowbroGfx24_1, ARRAY_COUNT(sSlowbroGfx24_1)}, 
	{NULL, 32}, 
	{sSlowbroGfx24_2, ARRAY_COUNT(sSlowbroGfx24_2)}, 
	{NULL, 64}, 
	{sSlowbroGfx24_3, ARRAY_COUNT(sSlowbroGfx24_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_25.4bpp.lz");
static const u8 sSlowbroGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_25_1.4bpp.lz");
static const u8 sSlowbroGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_25_2.4bpp.lz");
static const ax_sprite sSlowbroSprites25[] = {
	{sSlowbroGfx25, ARRAY_COUNT(sSlowbroGfx25)}, 
	{NULL, 32}, 
	{sSlowbroGfx25_1, ARRAY_COUNT(sSlowbroGfx25_1)}, 
	{NULL, 32}, 
	{sSlowbroGfx25_2, ARRAY_COUNT(sSlowbroGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_26.4bpp.lz");
static const u8 sSlowbroGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_26_1.4bpp.lz");
static const u8 sSlowbroGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_26_2.4bpp.lz");
static const u8 sSlowbroGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_26_3.4bpp.lz");
static const ax_sprite sSlowbroSprites26[] = {
	{NULL, 32}, 
	{sSlowbroGfx26, ARRAY_COUNT(sSlowbroGfx26)}, 
	{NULL, 32}, 
	{sSlowbroGfx26_1, ARRAY_COUNT(sSlowbroGfx26_1)}, 
	{NULL, 32}, 
	{sSlowbroGfx26_2, ARRAY_COUNT(sSlowbroGfx26_2)}, 
	{NULL, 32}, 
	{sSlowbroGfx26_3, ARRAY_COUNT(sSlowbroGfx26_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_27.4bpp.lz");
static const u8 sSlowbroGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_27_1.4bpp.lz");
static const u8 sSlowbroGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_27_2.4bpp.lz");
static const ax_sprite sSlowbroSprites27[] = {
	{NULL, 128}, 
	{sSlowbroGfx27, ARRAY_COUNT(sSlowbroGfx27)}, 
	{NULL, 32}, 
	{sSlowbroGfx27_1, ARRAY_COUNT(sSlowbroGfx27_1)}, 
	{NULL, 32}, 
	{sSlowbroGfx27_2, ARRAY_COUNT(sSlowbroGfx27_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_28.4bpp.lz");
static const u8 sSlowbroGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_28_1.4bpp.lz");
static const ax_sprite sSlowbroSprites28[] = {
	{sSlowbroGfx28, ARRAY_COUNT(sSlowbroGfx28)}, 
	{NULL, 64}, 
	{sSlowbroGfx28_1, ARRAY_COUNT(sSlowbroGfx28_1)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_29.4bpp.lz");
static const u8 sSlowbroGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_29_1.4bpp.lz");
static const u8 sSlowbroGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_29_2.4bpp.lz");
static const u8 sSlowbroGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_29_3.4bpp.lz");
static const ax_sprite sSlowbroSprites29[] = {
	{NULL, 32}, 
	{sSlowbroGfx29, ARRAY_COUNT(sSlowbroGfx29)}, 
	{NULL, 32}, 
	{sSlowbroGfx29_1, ARRAY_COUNT(sSlowbroGfx29_1)}, 
	{NULL, 32}, 
	{sSlowbroGfx29_2, ARRAY_COUNT(sSlowbroGfx29_2)}, 
	{NULL, 32}, 
	{sSlowbroGfx29_3, ARRAY_COUNT(sSlowbroGfx29_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_30.4bpp.lz");
static const u8 sSlowbroGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_30_1.4bpp.lz");
static const ax_sprite sSlowbroSprites30[] = {
	{sSlowbroGfx30, ARRAY_COUNT(sSlowbroGfx30)}, 
	{NULL, 32}, 
	{sSlowbroGfx30_1, ARRAY_COUNT(sSlowbroGfx30_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_31.4bpp.lz");
static const u8 sSlowbroGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_31_1.4bpp.lz");
static const ax_sprite sSlowbroSprites31[] = {
	{sSlowbroGfx31, ARRAY_COUNT(sSlowbroGfx31)}, 
	{NULL, 64}, 
	{sSlowbroGfx31_1, ARRAY_COUNT(sSlowbroGfx31_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_32.4bpp.lz");
static const u8 sSlowbroGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_32_1.4bpp.lz");
static const u8 sSlowbroGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_32_2.4bpp.lz");
static const ax_sprite sSlowbroSprites32[] = {
	{NULL, 32}, 
	{sSlowbroGfx32, ARRAY_COUNT(sSlowbroGfx32)}, 
	{NULL, 64}, 
	{sSlowbroGfx32_1, ARRAY_COUNT(sSlowbroGfx32_1)}, 
	{NULL, 32}, 
	{sSlowbroGfx32_2, ARRAY_COUNT(sSlowbroGfx32_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_33.4bpp.lz");
static const ax_sprite sSlowbroSprites33[] = {
	{sSlowbroGfx33, ARRAY_COUNT(sSlowbroGfx33)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_34.4bpp.lz");
static const u8 sSlowbroGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_34_1.4bpp.lz");
static const u8 sSlowbroGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_34_2.4bpp.lz");
static const u8 sSlowbroGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_34_3.4bpp.lz");
static const ax_sprite sSlowbroSprites34[] = {
	{NULL, 32}, 
	{sSlowbroGfx34, ARRAY_COUNT(sSlowbroGfx34)}, 
	{NULL, 32}, 
	{sSlowbroGfx34_1, ARRAY_COUNT(sSlowbroGfx34_1)}, 
	{NULL, 32}, 
	{sSlowbroGfx34_2, ARRAY_COUNT(sSlowbroGfx34_2)}, 
	{NULL, 32}, 
	{sSlowbroGfx34_3, ARRAY_COUNT(sSlowbroGfx34_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_35.4bpp.lz");
static const u8 sSlowbroGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_35_1.4bpp.lz");
static const u8 sSlowbroGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_35_2.4bpp.lz");
static const u8 sSlowbroGfx35_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_35_3.4bpp.lz");
static const ax_sprite sSlowbroSprites35[] = {
	{sSlowbroGfx35, ARRAY_COUNT(sSlowbroGfx35)}, 
	{NULL, 32}, 
	{sSlowbroGfx35_1, ARRAY_COUNT(sSlowbroGfx35_1)}, 
	{NULL, 32}, 
	{sSlowbroGfx35_2, ARRAY_COUNT(sSlowbroGfx35_2)}, 
	{NULL, 32}, 
	{sSlowbroGfx35_3, ARRAY_COUNT(sSlowbroGfx35_3)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_36.4bpp.lz");
static const ax_sprite sSlowbroSprites36[] = {
	{sSlowbroGfx36, ARRAY_COUNT(sSlowbroGfx36)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_37.4bpp.lz");
static const ax_sprite sSlowbroSprites37[] = {
	{sSlowbroGfx37, ARRAY_COUNT(sSlowbroGfx37)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_38.4bpp.lz");
static const ax_sprite sSlowbroSprites38[] = {
	{sSlowbroGfx38, ARRAY_COUNT(sSlowbroGfx38)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_39.4bpp.lz");
static const ax_sprite sSlowbroSprites39[] = {
	{sSlowbroGfx39, ARRAY_COUNT(sSlowbroGfx39)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_40.4bpp.lz");
static const ax_sprite sSlowbroSprites40[] = {
	{sSlowbroGfx40, ARRAY_COUNT(sSlowbroGfx40)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_41.4bpp.lz");
static const ax_sprite sSlowbroSprites41[] = {
	{sSlowbroGfx41, ARRAY_COUNT(sSlowbroGfx41)}, 
	{NULL, 0}
};
static const u8 sSlowbroGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slowbro/sprite_42.4bpp.lz");
static const ax_sprite sSlowbroSprites42[] = {
	{sSlowbroGfx42, ARRAY_COUNT(sSlowbroGfx42)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesSlowbro[] = {
	sSlowbroPose1,
	sSlowbroPose2,
	sSlowbroPose3,
	sSlowbroPose4,
	sSlowbroPose5,
	sSlowbroPose6,
	sSlowbroPose7,
	sSlowbroPose8,
	sSlowbroPose9,
	sSlowbroPose10,
	sSlowbroPose11,
	sSlowbroPose12,
	sSlowbroPose13,
	sSlowbroPose14,
	sSlowbroPose15,
	sSlowbroPose16,
	sSlowbroPose17,
	sSlowbroPose18,
	sSlowbroPose19,
	sSlowbroPose20,
	sSlowbroPose21,
	sSlowbroPose22,
	sSlowbroPose23,
	sSlowbroPose24,
	sSlowbroPose1,
	sSlowbroPose2,
	sSlowbroPose3,
	sSlowbroPose28,
	sSlowbroPose29,
	sSlowbroPose4,
	sSlowbroPose5,
	sSlowbroPose6,
	sSlowbroPose33,
	sSlowbroPose34,
	sSlowbroPose7,
	sSlowbroPose8,
	sSlowbroPose9,
	sSlowbroPose38,
	sSlowbroPose39,
	sSlowbroPose10,
	sSlowbroPose11,
	sSlowbroPose12,
	sSlowbroPose43,
	sSlowbroPose44,
	sSlowbroPose13,
	sSlowbroPose14,
	sSlowbroPose15,
	sSlowbroPose48,
	sSlowbroPose49,
	sSlowbroPose16,
	sSlowbroPose17,
	sSlowbroPose18,
	sSlowbroPose53,
	sSlowbroPose54,
	sSlowbroPose19,
	sSlowbroPose20,
	sSlowbroPose21,
	sSlowbroPose58,
	sSlowbroPose59,
	sSlowbroPose22,
	sSlowbroPose23,
	sSlowbroPose24,
	sSlowbroPose63,
	sSlowbroPose64,
	sSlowbroPose1,
	sSlowbroPose2,
	sSlowbroPose3,
	sSlowbroPose28,
	sSlowbroPose29,
	sSlowbroPose4,
	sSlowbroPose5,
	sSlowbroPose6,
	sSlowbroPose33,
	sSlowbroPose34,
	sSlowbroPose7,
	sSlowbroPose8,
	sSlowbroPose9,
	sSlowbroPose38,
	sSlowbroPose39,
	sSlowbroPose10,
	sSlowbroPose11,
	sSlowbroPose12,
	sSlowbroPose43,
	sSlowbroPose44,
	sSlowbroPose13,
	sSlowbroPose14,
	sSlowbroPose15,
	sSlowbroPose48,
	sSlowbroPose49,
	sSlowbroPose16,
	sSlowbroPose17,
	sSlowbroPose18,
	sSlowbroPose53,
	sSlowbroPose54,
	sSlowbroPose19,
	sSlowbroPose20,
	sSlowbroPose21,
	sSlowbroPose58,
	sSlowbroPose59,
	sSlowbroPose22,
	sSlowbroPose23,
	sSlowbroPose24,
	sSlowbroPose63,
	sSlowbroPose64,
	sSlowbroPose1,
	sSlowbroPose2,
	sSlowbroPose3,
	sSlowbroPose28,
	sSlowbroPose29,
	sSlowbroPose4,
	sSlowbroPose5,
	sSlowbroPose6,
	sSlowbroPose33,
	sSlowbroPose114,
	sSlowbroPose7,
	sSlowbroPose8,
	sSlowbroPose9,
	sSlowbroPose38,
	sSlowbroPose119,
	sSlowbroPose10,
	sSlowbroPose11,
	sSlowbroPose12,
	sSlowbroPose43,
	sSlowbroPose44,
	sSlowbroPose13,
	sSlowbroPose14,
	sSlowbroPose15,
	sSlowbroPose48,
	sSlowbroPose49,
	sSlowbroPose16,
	sSlowbroPose17,
	sSlowbroPose18,
	sSlowbroPose53,
	sSlowbroPose54,
	sSlowbroPose19,
	sSlowbroPose20,
	sSlowbroPose21,
	sSlowbroPose58,
	sSlowbroPose139,
	sSlowbroPose22,
	sSlowbroPose23,
	sSlowbroPose24,
	sSlowbroPose63,
	sSlowbroPose144,
	sSlowbroPose1,
	sSlowbroPose2,
	sSlowbroPose3,
	sSlowbroPose28,
	sSlowbroPose29,
	sSlowbroPose150,
	sSlowbroPose151,
	sSlowbroPose4,
	sSlowbroPose5,
	sSlowbroPose6,
	sSlowbroPose33,
	sSlowbroPose156,
	sSlowbroPose157,
	sSlowbroPose158,
	sSlowbroPose7,
	sSlowbroPose8,
	sSlowbroPose9,
	sSlowbroPose38,
	sSlowbroPose39,
	sSlowbroPose164,
	sSlowbroPose165,
	sSlowbroPose10,
	sSlowbroPose11,
	sSlowbroPose12,
	sSlowbroPose43,
	sSlowbroPose170,
	sSlowbroPose171,
	sSlowbroPose172,
	sSlowbroPose13,
	sSlowbroPose14,
	sSlowbroPose15,
	sSlowbroPose48,
	sSlowbroPose49,
	sSlowbroPose178,
	sSlowbroPose179,
	sSlowbroPose16,
	sSlowbroPose17,
	sSlowbroPose18,
	sSlowbroPose53,
	sSlowbroPose184,
	sSlowbroPose185,
	sSlowbroPose186,
	sSlowbroPose19,
	sSlowbroPose20,
	sSlowbroPose21,
	sSlowbroPose58,
	sSlowbroPose59,
	sSlowbroPose192,
	sSlowbroPose193,
	sSlowbroPose22,
	sSlowbroPose23,
	sSlowbroPose24,
	sSlowbroPose63,
	sSlowbroPose198,
	sSlowbroPose199,
	sSlowbroPose200,
	sSlowbroPose201,
	sSlowbroPose202,
	sSlowbroPose203,
	sSlowbroPose204,
	sSlowbroPose205,
	sSlowbroPose206,
	sSlowbroPose207,
	sSlowbroPose208,
	sSlowbroPose209,
	sSlowbroPose210,
	sSlowbroPose1,
	sSlowbroPose2,
	sSlowbroPose3,
	sSlowbroPose28,
	sSlowbroPose29,
	sSlowbroPose4,
	sSlowbroPose5,
	sSlowbroPose6,
	sSlowbroPose33,
	sSlowbroPose34,
	sSlowbroPose7,
	sSlowbroPose8,
	sSlowbroPose9,
	sSlowbroPose38,
	sSlowbroPose39,
	sSlowbroPose10,
	sSlowbroPose11,
	sSlowbroPose12,
	sSlowbroPose43,
	sSlowbroPose44,
	sSlowbroPose13,
	sSlowbroPose14,
	sSlowbroPose15,
	sSlowbroPose48,
	sSlowbroPose49,
	sSlowbroPose16,
	sSlowbroPose17,
	sSlowbroPose18,
	sSlowbroPose53,
	sSlowbroPose54,
	sSlowbroPose19,
	sSlowbroPose20,
	sSlowbroPose21,
	sSlowbroPose58,
	sSlowbroPose59,
	sSlowbroPose22,
	sSlowbroPose23,
	sSlowbroPose24,
	sSlowbroPose63,
	sSlowbroPose64,
	sSlowbroPose29,
	sSlowbroPose144,
	sSlowbroPose139,
	sSlowbroPose54,
	sSlowbroPose49,
	sSlowbroPose44,
	sSlowbroPose119,
	sSlowbroPose114,
	sSlowbroPose29,
	sSlowbroPose114,
	sSlowbroPose119,
	sSlowbroPose44,
	sSlowbroPose49,
	sSlowbroPose54,
	sSlowbroPose139,
	sSlowbroPose144,
	sSlowbroPose1,
	sSlowbroPose29,
	sSlowbroPose4,
	sSlowbroPose34,
	sSlowbroPose7,
	sSlowbroPose272,
	sSlowbroPose10,
	sSlowbroPose274,
	sSlowbroPose13,
	sSlowbroPose49,
	sSlowbroPose16,
	sSlowbroPose278,
	sSlowbroPose19,
	sSlowbroPose280,
	sSlowbroPose22,
	sSlowbroPose64,
	sSlowbroPose29,
	sSlowbroPose144,
	sSlowbroPose139,
	sSlowbroPose54,
	sSlowbroPose49,
	sSlowbroPose44,
	sSlowbroPose119,
	sSlowbroPose114,
	sSlowbroPose1,
	sSlowbroPose22,
	sSlowbroPose19,
	sSlowbroPose16,
	sSlowbroPose13,
	sSlowbroPose10,
	sSlowbroPose7,
	sSlowbroPose4,
};

static const struct PositionSets sAxPositionsSlowbro[] = {
	[0] = { .set = { {-1, -5}, {-4, -3}, {3, -3}, {-1, -9} } },
	[1] = { .set = { {0, -4}, {-7, -6}, {2, -2}, {0, -7} } },
	[2] = { .set = { {-1, -4}, {-3, -2}, {6, -6}, {-1, -7} } },
	[3] = { .set = { {7, -7}, {9, -5}, {3, -4}, {0, -7} } },
	[4] = { .set = { {6, -4}, {2, -7}, {5, -3}, {1, -6} } },
	[5] = { .set = { {8, -5}, {7, -3}, {-1, -3}, {1, -5} } },
	[6] = { .set = { {9, -9}, {6, -7}, {5, -4}, {1, -7} } },
	[7] = { .set = { {8, -7}, {1, -8}, {7, -5}, {1, -6} } },
	[8] = { .set = { {9, -7}, {7, -4}, {2, -3}, {1, -6} } },
	[9] = { .set = { {5, -14}, {-2, -9}, {7, -7}, {1, -8} } },
	[10] = { .set = { {6, -12}, {-2, -9}, {6, -6}, {1, -6} } },
	[11] = { .set = { {6, -12}, {2, -10}, {5, -5}, {1, -6} } },
	[12] = { .set = { {-1, -16}, {6, -7}, {-7, -7}, {-1, -7} } },
	[13] = { .set = { {0, -14}, {8, -10}, {-7, -5}, {1, -6} } },
	[14] = { .set = { {-1, -15}, {6, -5}, {-9, -10}, {-2, -7} } },
	[15] = { .set = { {-6, -14}, {1, -9}, {-8, -7}, {-2, -8} } },
	[16] = { .set = { {-7, -12}, {1, -9}, {-7, -6}, {-2, -6} } },
	[17] = { .set = { {-7, -12}, {-3, -10}, {-6, -5}, {-2, -6} } },
	[18] = { .set = { {-10, -9}, {-7, -7}, {-6, -4}, {-2, -7} } },
	[19] = { .set = { {-9, -7}, {-2, -8}, {-8, -5}, {-2, -6} } },
	[20] = { .set = { {-10, -7}, {-8, -4}, {-3, -3}, {-2, -6} } },
	[21] = { .set = { {-8, -7}, {-10, -5}, {-4, -4}, {-1, -7} } },
	[22] = { .set = { {-7, -4}, {-3, -7}, {-6, -3}, {-2, -6} } },
	[23] = { .set = { {-9, -5}, {-8, -3}, {0, -3}, {-2, -5} } },
	[24] = { .set = { {-1, -5}, {-4, -3}, {3, -3}, {-1, -9} } },
	[25] = { .set = { {0, -4}, {-7, -6}, {2, -2}, {0, -7} } },
	[26] = { .set = { {-1, -4}, {-3, -2}, {6, -6}, {-1, -7} } },
	[27] = { .set = { {-1, -6}, {-3, -3}, {2, -3}, {-1, -12} } },
	[28] = { .set = { {-1, -3}, {-10, -6}, {9, -6}, {-1, -10} } },
	[29] = { .set = { {7, -7}, {9, -5}, {3, -4}, {0, -7} } },
	[30] = { .set = { {6, -4}, {2, -7}, {5, -3}, {1, -6} } },
	[31] = { .set = { {8, -5}, {7, -3}, {-1, -3}, {1, -5} } },
	[32] = { .set = { {7, -7}, {9, -5}, {3, -4}, {0, -7} } },
	[33] = { .set = { {8, -5}, {7, -8}, {-3, -3}, {0, -6} } },
	[34] = { .set = { {9, -9}, {6, -7}, {5, -4}, {1, -7} } },
	[35] = { .set = { {8, -7}, {1, -8}, {7, -5}, {1, -6} } },
	[36] = { .set = { {9, -7}, {7, -4}, {2, -3}, {1, -6} } },
	[37] = { .set = { {9, -9}, {6, -6}, {5, -4}, {2, -7} } },
	[38] = { .set = { {10, -9}, {2, -11}, {2, -6}, {1, -7} } },
	[39] = { .set = { {5, -14}, {-2, -9}, {7, -7}, {1, -8} } },
	[40] = { .set = { {6, -12}, {-2, -9}, {6, -6}, {1, -6} } },
	[41] = { .set = { {6, -12}, {2, -10}, {5, -5}, {1, -6} } },
	[42] = { .set = { {8, -13}, {2, -11}, {7, -8}, {1, -8} } },
	[43] = { .set = { {10, -15}, {-2, -12}, {6, -7}, {1, -8} } },
	[44] = { .set = { {-1, -16}, {6, -7}, {-7, -7}, {-1, -7} } },
	[45] = { .set = { {0, -14}, {8, -10}, {-7, -5}, {1, -6} } },
	[46] = { .set = { {-1, -15}, {6, -5}, {-9, -10}, {-2, -7} } },
	[47] = { .set = { {-1, -16}, {6, -3}, {-7, -3}, {-1, -5} } },
	[48] = { .set = { {-1, -19}, {8, -14}, {-9, -14}, {0, -8} } },
	[49] = { .set = { {-6, -14}, {1, -9}, {-8, -7}, {-2, -8} } },
	[50] = { .set = { {-7, -12}, {1, -9}, {-7, -6}, {-2, -6} } },
	[51] = { .set = { {-7, -12}, {-3, -10}, {-6, -5}, {-2, -6} } },
	[52] = { .set = { {-9, -13}, {-3, -11}, {-8, -8}, {-2, -8} } },
	[53] = { .set = { {-11, -15}, {1, -12}, {-7, -7}, {-2, -8} } },
	[54] = { .set = { {-10, -9}, {-7, -7}, {-6, -4}, {-2, -7} } },
	[55] = { .set = { {-9, -7}, {-2, -8}, {-8, -5}, {-2, -6} } },
	[56] = { .set = { {-10, -7}, {-8, -4}, {-3, -3}, {-2, -6} } },
	[57] = { .set = { {-10, -9}, {-7, -6}, {-6, -4}, {-3, -7} } },
	[58] = { .set = { {-11, -9}, {-3, -11}, {-3, -6}, {-2, -7} } },
	[59] = { .set = { {-8, -7}, {-10, -5}, {-4, -4}, {-1, -7} } },
	[60] = { .set = { {-7, -4}, {-3, -7}, {-6, -3}, {-2, -6} } },
	[61] = { .set = { {-9, -5}, {-8, -3}, {0, -3}, {-2, -5} } },
	[62] = { .set = { {-8, -7}, {-10, -5}, {-4, -4}, {-1, -7} } },
	[63] = { .set = { {-9, -5}, {-8, -8}, {2, -3}, {-1, -6} } },
	[64] = { .set = { {-1, -5}, {-4, -3}, {3, -3}, {-1, -9} } },
	[65] = { .set = { {0, -4}, {-7, -6}, {2, -2}, {0, -7} } },
	[66] = { .set = { {-1, -4}, {-3, -2}, {6, -6}, {-1, -7} } },
	[67] = { .set = { {-1, -6}, {-3, -3}, {2, -3}, {-1, -12} } },
	[68] = { .set = { {-1, -3}, {-10, -6}, {9, -6}, {-1, -10} } },
	[69] = { .set = { {7, -7}, {9, -5}, {3, -4}, {0, -7} } },
	[70] = { .set = { {6, -4}, {2, -7}, {5, -3}, {1, -6} } },
	[71] = { .set = { {8, -5}, {7, -3}, {-1, -3}, {1, -5} } },
	[72] = { .set = { {7, -7}, {9, -5}, {3, -4}, {0, -7} } },
	[73] = { .set = { {8, -5}, {7, -8}, {-3, -3}, {0, -6} } },
	[74] = { .set = { {9, -9}, {6, -7}, {5, -4}, {1, -7} } },
	[75] = { .set = { {8, -7}, {1, -8}, {7, -5}, {1, -6} } },
	[76] = { .set = { {9, -7}, {7, -4}, {2, -3}, {1, -6} } },
	[77] = { .set = { {9, -9}, {6, -6}, {5, -4}, {2, -7} } },
	[78] = { .set = { {10, -9}, {2, -11}, {2, -6}, {1, -7} } },
	[79] = { .set = { {5, -14}, {-2, -9}, {7, -7}, {1, -8} } },
	[80] = { .set = { {6, -12}, {-2, -9}, {6, -6}, {1, -6} } },
	[81] = { .set = { {6, -12}, {2, -10}, {5, -5}, {1, -6} } },
	[82] = { .set = { {8, -13}, {2, -11}, {7, -8}, {1, -8} } },
	[83] = { .set = { {10, -15}, {-2, -12}, {6, -7}, {1, -8} } },
	[84] = { .set = { {-1, -16}, {6, -7}, {-7, -7}, {-1, -7} } },
	[85] = { .set = { {0, -14}, {8, -10}, {-7, -5}, {1, -6} } },
	[86] = { .set = { {-1, -15}, {6, -5}, {-9, -10}, {-2, -7} } },
	[87] = { .set = { {-1, -16}, {6, -3}, {-7, -3}, {-1, -5} } },
	[88] = { .set = { {-1, -19}, {8, -14}, {-9, -14}, {0, -8} } },
	[89] = { .set = { {-6, -14}, {1, -9}, {-8, -7}, {-2, -8} } },
	[90] = { .set = { {-7, -12}, {1, -9}, {-7, -6}, {-2, -6} } },
	[91] = { .set = { {-7, -12}, {-3, -10}, {-6, -5}, {-2, -6} } },
	[92] = { .set = { {-9, -13}, {-3, -11}, {-8, -8}, {-2, -8} } },
	[93] = { .set = { {-11, -15}, {1, -12}, {-7, -7}, {-2, -8} } },
	[94] = { .set = { {-10, -9}, {-7, -7}, {-6, -4}, {-2, -7} } },
	[95] = { .set = { {-9, -7}, {-2, -8}, {-8, -5}, {-2, -6} } },
	[96] = { .set = { {-10, -7}, {-8, -4}, {-3, -3}, {-2, -6} } },
	[97] = { .set = { {-10, -9}, {-7, -6}, {-6, -4}, {-3, -7} } },
	[98] = { .set = { {-11, -9}, {-3, -11}, {-3, -6}, {-2, -7} } },
	[99] = { .set = { {-8, -7}, {-10, -5}, {-4, -4}, {-1, -7} } },
	[100] = { .set = { {-7, -4}, {-3, -7}, {-6, -3}, {-2, -6} } },
	[101] = { .set = { {-9, -5}, {-8, -3}, {0, -3}, {-2, -5} } },
	[102] = { .set = { {-8, -7}, {-10, -5}, {-4, -4}, {-1, -7} } },
	[103] = { .set = { {-9, -5}, {-8, -8}, {2, -3}, {-1, -6} } },
	[104] = { .set = { {-1, -5}, {-4, -3}, {3, -3}, {-1, -9} } },
	[105] = { .set = { {0, -4}, {-7, -6}, {2, -2}, {0, -7} } },
	[106] = { .set = { {-1, -4}, {-3, -2}, {6, -6}, {-1, -7} } },
	[107] = { .set = { {-1, -6}, {-3, -3}, {2, -3}, {-1, -12} } },
	[108] = { .set = { {-1, -3}, {-10, -6}, {9, -6}, {-1, -10} } },
	[109] = { .set = { {7, -7}, {9, -5}, {3, -4}, {0, -7} } },
	[110] = { .set = { {6, -4}, {2, -7}, {5, -3}, {1, -6} } },
	[111] = { .set = { {8, -5}, {7, -3}, {-1, -3}, {1, -5} } },
	[112] = { .set = { {7, -7}, {9, -5}, {3, -4}, {0, -7} } },
	[113] = { .set = { {9, -5}, {8, -8}, {-2, -3}, {1, -6} } },
	[114] = { .set = { {9, -9}, {6, -7}, {5, -4}, {1, -7} } },
	[115] = { .set = { {8, -7}, {1, -8}, {7, -5}, {1, -6} } },
	[116] = { .set = { {9, -7}, {7, -4}, {2, -3}, {1, -6} } },
	[117] = { .set = { {9, -9}, {6, -6}, {5, -4}, {2, -7} } },
	[118] = { .set = { {12, -9}, {4, -11}, {4, -6}, {3, -7} } },
	[119] = { .set = { {5, -14}, {-2, -9}, {7, -7}, {1, -8} } },
	[120] = { .set = { {6, -12}, {-2, -9}, {6, -6}, {1, -6} } },
	[121] = { .set = { {6, -12}, {2, -10}, {5, -5}, {1, -6} } },
	[122] = { .set = { {8, -13}, {2, -11}, {7, -8}, {1, -8} } },
	[123] = { .set = { {10, -15}, {-2, -12}, {6, -7}, {1, -8} } },
	[124] = { .set = { {-1, -16}, {6, -7}, {-7, -7}, {-1, -7} } },
	[125] = { .set = { {0, -14}, {8, -10}, {-7, -5}, {1, -6} } },
	[126] = { .set = { {-1, -15}, {6, -5}, {-9, -10}, {-2, -7} } },
	[127] = { .set = { {-1, -16}, {6, -3}, {-7, -3}, {-1, -5} } },
	[128] = { .set = { {-1, -19}, {8, -14}, {-9, -14}, {0, -8} } },
	[129] = { .set = { {-6, -14}, {1, -9}, {-8, -7}, {-2, -8} } },
	[130] = { .set = { {-7, -12}, {1, -9}, {-7, -6}, {-2, -6} } },
	[131] = { .set = { {-7, -12}, {-3, -10}, {-6, -5}, {-2, -6} } },
	[132] = { .set = { {-9, -13}, {-3, -11}, {-8, -8}, {-2, -8} } },
	[133] = { .set = { {-11, -15}, {1, -12}, {-7, -7}, {-2, -8} } },
	[134] = { .set = { {-10, -9}, {-7, -7}, {-6, -4}, {-2, -7} } },
	[135] = { .set = { {-9, -7}, {-2, -8}, {-8, -5}, {-2, -6} } },
	[136] = { .set = { {-10, -7}, {-8, -4}, {-3, -3}, {-2, -6} } },
	[137] = { .set = { {-10, -9}, {-7, -6}, {-6, -4}, {-3, -7} } },
	[138] = { .set = { {-13, -9}, {-5, -11}, {-5, -6}, {-4, -7} } },
	[139] = { .set = { {-8, -7}, {-10, -5}, {-4, -4}, {-1, -7} } },
	[140] = { .set = { {-7, -4}, {-3, -7}, {-6, -3}, {-2, -6} } },
	[141] = { .set = { {-9, -5}, {-8, -3}, {0, -3}, {-2, -5} } },
	[142] = { .set = { {-8, -7}, {-10, -5}, {-4, -4}, {-1, -7} } },
	[143] = { .set = { {-10, -5}, {-9, -8}, {1, -3}, {-2, -6} } },
	[144] = { .set = { {-1, -5}, {-4, -3}, {3, -3}, {-1, -9} } },
	[145] = { .set = { {0, -4}, {-7, -6}, {2, -2}, {0, -7} } },
	[146] = { .set = { {-1, -4}, {-3, -2}, {6, -6}, {-1, -7} } },
	[147] = { .set = { {-1, -6}, {-3, -3}, {2, -3}, {-1, -12} } },
	[148] = { .set = { {-1, -3}, {-10, -6}, {9, -6}, {-1, -10} } },
	[149] = { .set = { {-5, -13}, {-8, -11}, {0, -8}, {1, -12} } },
	[150] = { .set = { {5, -16}, {-2, -9}, {8, -13}, {1, -10} } },
	[151] = { .set = { {7, -7}, {9, -5}, {3, -4}, {0, -7} } },
	[152] = { .set = { {6, -4}, {2, -7}, {5, -3}, {1, -6} } },
	[153] = { .set = { {8, -5}, {7, -3}, {-1, -3}, {1, -5} } },
	[154] = { .set = { {7, -7}, {9, -5}, {3, -4}, {0, -7} } },
	[155] = { .set = { {7, -5}, {6, -8}, {-4, -3}, {-1, -6} } },
	[156] = { .set = { {7, -13}, {9, -13}, {3, -9}, {-1, -11} } },
	[157] = { .set = { {2, -15}, {3, -10}, {-5, -13}, {0, -9} } },
	[158] = { .set = { {9, -9}, {6, -7}, {5, -4}, {1, -7} } },
	[159] = { .set = { {8, -7}, {1, -8}, {7, -5}, {1, -6} } },
	[160] = { .set = { {9, -7}, {7, -4}, {2, -3}, {1, -6} } },
	[161] = { .set = { {9, -9}, {6, -6}, {5, -4}, {2, -7} } },
	[162] = { .set = { {10, -9}, {2, -11}, {2, -6}, {1, -7} } },
	[163] = { .set = { {7, -14}, {3, -13}, {7, -8}, {1, -8} } },
	[164] = { .set = { {5, -13}, {6, -9}, {0, -12}, {2, -7} } },
	[165] = { .set = { {5, -14}, {-2, -9}, {7, -7}, {1, -8} } },
	[166] = { .set = { {6, -12}, {-2, -9}, {6, -6}, {1, -6} } },
	[167] = { .set = { {6, -12}, {2, -10}, {5, -5}, {1, -6} } },
	[168] = { .set = { {8, -13}, {2, -11}, {7, -8}, {1, -8} } },
	[169] = { .set = { {8, -15}, {-4, -12}, {4, -7}, {-1, -8} } },
	[170] = { .set = { {-2, -14}, {-4, -15}, {5, -11}, {-1, -7} } },
	[171] = { .set = { {4, -13}, {4, -10}, {0, -12}, {-1, -7} } },
	[172] = { .set = { {-1, -16}, {6, -7}, {-7, -7}, {-1, -7} } },
	[173] = { .set = { {0, -14}, {8, -10}, {-7, -5}, {1, -6} } },
	[174] = { .set = { {-1, -15}, {6, -5}, {-9, -10}, {-2, -7} } },
	[175] = { .set = { {-1, -16}, {6, -3}, {-7, -3}, {-1, -5} } },
	[176] = { .set = { {-1, -19}, {8, -14}, {-9, -14}, {0, -8} } },
	[177] = { .set = { {6, -18}, {6, -17}, {2, -19}, {-1, -11} } },
	[178] = { .set = { {-3, -19}, {3, -18}, {-5, -16}, {1, -10} } },
	[179] = { .set = { {-6, -14}, {1, -9}, {-8, -7}, {-2, -8} } },
	[180] = { .set = { {-7, -12}, {1, -9}, {-7, -6}, {-2, -6} } },
	[181] = { .set = { {-7, -12}, {-3, -10}, {-6, -5}, {-2, -6} } },
	[182] = { .set = { {-9, -13}, {-3, -11}, {-8, -8}, {-2, -8} } },
	[183] = { .set = { {-9, -15}, {3, -12}, {-5, -7}, {0, -8} } },
	[184] = { .set = { {1, -14}, {3, -15}, {-6, -11}, {0, -7} } },
	[185] = { .set = { {-5, -13}, {-5, -10}, {-1, -12}, {0, -7} } },
	[186] = { .set = { {-10, -9}, {-7, -7}, {-6, -4}, {-2, -7} } },
	[187] = { .set = { {-9, -7}, {-2, -8}, {-8, -5}, {-2, -6} } },
	[188] = { .set = { {-10, -7}, {-8, -4}, {-3, -3}, {-2, -6} } },
	[189] = { .set = { {-10, -9}, {-7, -6}, {-6, -4}, {-3, -7} } },
	[190] = { .set = { {-11, -9}, {-3, -11}, {-3, -6}, {-2, -7} } },
	[191] = { .set = { {-8, -14}, {-4, -13}, {-8, -8}, {-2, -8} } },
	[192] = { .set = { {-6, -13}, {-7, -9}, {-1, -12}, {-3, -7} } },
	[193] = { .set = { {-8, -7}, {-10, -5}, {-4, -4}, {-1, -7} } },
	[194] = { .set = { {-7, -4}, {-3, -7}, {-6, -3}, {-2, -6} } },
	[195] = { .set = { {-9, -5}, {-8, -3}, {0, -3}, {-2, -5} } },
	[196] = { .set = { {-8, -7}, {-10, -5}, {-4, -4}, {-1, -7} } },
	[197] = { .set = { {-8, -5}, {-7, -8}, {3, -3}, {0, -6} } },
	[198] = { .set = { {-8, -13}, {-10, -13}, {-4, -9}, {0, -11} } },
	[199] = { .set = { {-3, -15}, {-4, -10}, {4, -13}, {-1, -9} } },
	[200] = { .set = { {-9, 1}, {-12, 0}, {-2, 2}, {2, -6} } },
	[201] = { .set = { {-9, 1}, {-12, 0}, {-2, 2}, {2, -7} } },
	[202] = { .set = { {1, 1}, {-8, 0}, {9, 0}, {0, -7} } },
	[203] = { .set = { {9, 1}, {6, -5}, {-3, 0}, {1, -5} } },
	[204] = { .set = { {10, -1}, {1, -5}, {1, 0}, {-1, -6} } },
	[205] = { .set = { {5, -9}, {-6, -6}, {5, -1}, {-3, -5} } },
	[206] = { .set = { {-1, -10}, {8, -1}, {-9, -1}, {-1, -1} } },
	[207] = { .set = { {-7, -9}, {4, -6}, {-7, -1}, {1, -5} } },
	[208] = { .set = { {-11, -1}, {-2, -5}, {-2, 0}, {0, -6} } },
	[209] = { .set = { {-10, 1}, {-7, -5}, {2, 0}, {-2, -5} } },
	[210] = { .set = { {-1, -5}, {-4, -3}, {3, -3}, {-1, -9} } },
	[211] = { .set = { {0, -4}, {-7, -6}, {2, -2}, {0, -7} } },
	[212] = { .set = { {-1, -4}, {-3, -2}, {6, -6}, {-1, -7} } },
	[213] = { .set = { {-1, -6}, {-3, -3}, {2, -3}, {-1, -12} } },
	[214] = { .set = { {-1, -3}, {-10, -6}, {9, -6}, {-1, -10} } },
	[215] = { .set = { {7, -7}, {9, -5}, {3, -4}, {0, -7} } },
	[216] = { .set = { {6, -4}, {2, -7}, {5, -3}, {1, -6} } },
	[217] = { .set = { {8, -5}, {7, -3}, {-1, -3}, {1, -5} } },
	[218] = { .set = { {7, -7}, {9, -5}, {3, -4}, {0, -7} } },
	[219] = { .set = { {8, -5}, {7, -8}, {-3, -3}, {0, -6} } },
	[220] = { .set = { {9, -9}, {6, -7}, {5, -4}, {1, -7} } },
	[221] = { .set = { {8, -7}, {1, -8}, {7, -5}, {1, -6} } },
	[222] = { .set = { {9, -7}, {7, -4}, {2, -3}, {1, -6} } },
	[223] = { .set = { {9, -9}, {6, -6}, {5, -4}, {2, -7} } },
	[224] = { .set = { {10, -9}, {2, -11}, {2, -6}, {1, -7} } },
	[225] = { .set = { {5, -14}, {-2, -9}, {7, -7}, {1, -8} } },
	[226] = { .set = { {6, -12}, {-2, -9}, {6, -6}, {1, -6} } },
	[227] = { .set = { {6, -12}, {2, -10}, {5, -5}, {1, -6} } },
	[228] = { .set = { {8, -13}, {2, -11}, {7, -8}, {1, -8} } },
	[229] = { .set = { {10, -15}, {-2, -12}, {6, -7}, {1, -8} } },
	[230] = { .set = { {-1, -16}, {6, -7}, {-7, -7}, {-1, -7} } },
	[231] = { .set = { {0, -14}, {8, -10}, {-7, -5}, {1, -6} } },
	[232] = { .set = { {-1, -15}, {6, -5}, {-9, -10}, {-2, -7} } },
	[233] = { .set = { {-1, -16}, {6, -3}, {-7, -3}, {-1, -5} } },
	[234] = { .set = { {-1, -19}, {8, -14}, {-9, -14}, {0, -8} } },
	[235] = { .set = { {-6, -14}, {1, -9}, {-8, -7}, {-2, -8} } },
	[236] = { .set = { {-7, -12}, {1, -9}, {-7, -6}, {-2, -6} } },
	[237] = { .set = { {-7, -12}, {-3, -10}, {-6, -5}, {-2, -6} } },
	[238] = { .set = { {-9, -13}, {-3, -11}, {-8, -8}, {-2, -8} } },
	[239] = { .set = { {-11, -15}, {1, -12}, {-7, -7}, {-2, -8} } },
	[240] = { .set = { {-10, -9}, {-7, -7}, {-6, -4}, {-2, -7} } },
	[241] = { .set = { {-9, -7}, {-2, -8}, {-8, -5}, {-2, -6} } },
	[242] = { .set = { {-10, -7}, {-8, -4}, {-3, -3}, {-2, -6} } },
	[243] = { .set = { {-10, -9}, {-7, -6}, {-6, -4}, {-3, -7} } },
	[244] = { .set = { {-11, -9}, {-3, -11}, {-3, -6}, {-2, -7} } },
	[245] = { .set = { {-8, -7}, {-10, -5}, {-4, -4}, {-1, -7} } },
	[246] = { .set = { {-7, -4}, {-3, -7}, {-6, -3}, {-2, -6} } },
	[247] = { .set = { {-9, -5}, {-8, -3}, {0, -3}, {-2, -5} } },
	[248] = { .set = { {-8, -7}, {-10, -5}, {-4, -4}, {-1, -7} } },
	[249] = { .set = { {-9, -5}, {-8, -8}, {2, -3}, {-1, -6} } },
	[250] = { .set = { {-1, -3}, {-10, -6}, {9, -6}, {-1, -10} } },
	[251] = { .set = { {-10, -5}, {-9, -8}, {1, -3}, {-2, -6} } },
	[252] = { .set = { {-13, -9}, {-5, -11}, {-5, -6}, {-4, -7} } },
	[253] = { .set = { {-11, -15}, {1, -12}, {-7, -7}, {-2, -8} } },
	[254] = { .set = { {-1, -19}, {8, -14}, {-9, -14}, {0, -8} } },
	[255] = { .set = { {10, -15}, {-2, -12}, {6, -7}, {1, -8} } },
	[256] = { .set = { {12, -9}, {4, -11}, {4, -6}, {3, -7} } },
	[257] = { .set = { {9, -5}, {8, -8}, {-2, -3}, {1, -6} } },
	[258] = { .set = { {-1, -3}, {-10, -6}, {9, -6}, {-1, -10} } },
	[259] = { .set = { {9, -5}, {8, -8}, {-2, -3}, {1, -6} } },
	[260] = { .set = { {12, -9}, {4, -11}, {4, -6}, {3, -7} } },
	[261] = { .set = { {10, -15}, {-2, -12}, {6, -7}, {1, -8} } },
	[262] = { .set = { {-1, -19}, {8, -14}, {-9, -14}, {0, -8} } },
	[263] = { .set = { {-11, -15}, {1, -12}, {-7, -7}, {-2, -8} } },
	[264] = { .set = { {-13, -9}, {-5, -11}, {-5, -6}, {-4, -7} } },
	[265] = { .set = { {-10, -5}, {-9, -8}, {1, -3}, {-2, -6} } },
	[266] = { .set = { {-1, -5}, {-4, -3}, {3, -3}, {-1, -9} } },
	[267] = { .set = { {-1, -3}, {-10, -6}, {9, -6}, {-1, -10} } },
	[268] = { .set = { {7, -7}, {9, -5}, {3, -4}, {0, -7} } },
	[269] = { .set = { {8, -5}, {7, -8}, {-3, -3}, {0, -6} } },
	[270] = { .set = { {9, -9}, {6, -7}, {5, -4}, {1, -7} } },
	[271] = { .set = { {11, -9}, {3, -11}, {3, -6}, {2, -7} } },
	[272] = { .set = { {5, -14}, {-2, -9}, {7, -7}, {1, -8} } },
	[273] = { .set = { {9, -15}, {-3, -12}, {5, -7}, {0, -8} } },
	[274] = { .set = { {-1, -16}, {6, -7}, {-7, -7}, {-1, -7} } },
	[275] = { .set = { {-1, -19}, {8, -14}, {-9, -14}, {0, -8} } },
	[276] = { .set = { {-6, -14}, {1, -9}, {-8, -7}, {-2, -8} } },
	[277] = { .set = { {-10, -15}, {2, -12}, {-6, -7}, {-1, -8} } },
	[278] = { .set = { {-10, -9}, {-7, -7}, {-6, -4}, {-2, -7} } },
	[279] = { .set = { {-12, -9}, {-4, -11}, {-4, -6}, {-3, -7} } },
	[280] = { .set = { {-8, -7}, {-10, -5}, {-4, -4}, {-1, -7} } },
	[281] = { .set = { {-9, -5}, {-8, -8}, {2, -3}, {-1, -6} } },
	[282] = { .set = { {-1, -3}, {-10, -6}, {9, -6}, {-1, -10} } },
	[283] = { .set = { {-10, -5}, {-9, -8}, {1, -3}, {-2, -6} } },
	[284] = { .set = { {-13, -9}, {-5, -11}, {-5, -6}, {-4, -7} } },
	[285] = { .set = { {-11, -15}, {1, -12}, {-7, -7}, {-2, -8} } },
	[286] = { .set = { {-1, -19}, {8, -14}, {-9, -14}, {0, -8} } },
	[287] = { .set = { {10, -15}, {-2, -12}, {6, -7}, {1, -8} } },
	[288] = { .set = { {12, -9}, {4, -11}, {4, -6}, {3, -7} } },
	[289] = { .set = { {9, -5}, {8, -8}, {-2, -3}, {1, -6} } },
	[290] = { .set = { {-1, -5}, {-4, -3}, {3, -3}, {-1, -9} } },
	[291] = { .set = { {-8, -7}, {-10, -5}, {-4, -4}, {-1, -7} } },
	[292] = { .set = { {-10, -9}, {-7, -7}, {-6, -4}, {-2, -7} } },
	[293] = { .set = { {-6, -14}, {1, -9}, {-8, -7}, {-2, -8} } },
	[294] = { .set = { {-1, -16}, {6, -7}, {-7, -7}, {-1, -7} } },
	[295] = { .set = { {5, -14}, {-2, -9}, {7, -7}, {1, -8} } },
	[296] = { .set = { {9, -9}, {6, -7}, {5, -4}, {1, -7} } },
	[297] = { .set = { {7, -7}, {9, -5}, {3, -4}, {0, -7} } },
};

static const ax_anim *const sSlowbroAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02603),
	AX_ANIM_PTR(gAxSharedAnim_02679),
	AX_ANIM_PTR(gAxSharedAnim_02688),
	AX_ANIM_PTR(gAxSharedAnim_02697),
	AX_ANIM_PTR(gAxSharedAnim_02615),
	AX_ANIM_PTR(gAxSharedAnim_02637),
	AX_ANIM_PTR(gAxSharedAnim_02650),
	AX_ANIM_PTR(gAxSharedAnim_02659),
};

static const ax_anim *const sSlowbroAnimTable2[] = {
	AX_ANIM_PTR(sSlowbroAnims_2_1),
	AX_ANIM_PTR(sSlowbroAnims_2_2),
	AX_ANIM_PTR(sSlowbroAnims_2_3),
	AX_ANIM_PTR(sSlowbroAnims_2_4),
	AX_ANIM_PTR(sSlowbroAnims_2_5),
	AX_ANIM_PTR(sSlowbroAnims_2_6),
	AX_ANIM_PTR(sSlowbroAnims_2_7),
	AX_ANIM_PTR(sSlowbroAnims_2_8),
};

static const ax_anim *const sSlowbroAnimTable3[] = {
	AX_ANIM_PTR(sSlowbroAnims_3_1),
	AX_ANIM_PTR(sSlowbroAnims_3_2),
	AX_ANIM_PTR(sSlowbroAnims_3_3),
	AX_ANIM_PTR(sSlowbroAnims_3_4),
	AX_ANIM_PTR(sSlowbroAnims_3_5),
	AX_ANIM_PTR(sSlowbroAnims_3_6),
	AX_ANIM_PTR(sSlowbroAnims_3_7),
	AX_ANIM_PTR(sSlowbroAnims_3_8),
};

static const ax_anim *const sSlowbroAnimTable4[] = {
	AX_ANIM_PTR(sSlowbroAnims_4_1),
	AX_ANIM_PTR(sSlowbroAnims_4_2),
	AX_ANIM_PTR(sSlowbroAnims_4_3),
	AX_ANIM_PTR(sSlowbroAnims_4_4),
	AX_ANIM_PTR(sSlowbroAnims_4_5),
	AX_ANIM_PTR(sSlowbroAnims_4_6),
	AX_ANIM_PTR(sSlowbroAnims_4_7),
	AX_ANIM_PTR(sSlowbroAnims_4_8),
};

static const ax_anim *const sSlowbroAnimTable5[] = {
	AX_ANIM_PTR(sSlowbroAnims_5_1),
	AX_ANIM_PTR(sSlowbroAnims_5_2),
	AX_ANIM_PTR(sSlowbroAnims_5_3),
	AX_ANIM_PTR(sSlowbroAnims_5_4),
	AX_ANIM_PTR(sSlowbroAnims_5_5),
	AX_ANIM_PTR(sSlowbroAnims_5_6),
	AX_ANIM_PTR(sSlowbroAnims_5_7),
	AX_ANIM_PTR(sSlowbroAnims_5_8),
};

static const ax_anim *const sSlowbroAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
};

static const ax_anim *const sSlowbroAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_01234),
	AX_ANIM_PTR(gAxSharedAnim_01245),
	AX_ANIM_PTR(gAxSharedAnim_01258),
	AX_ANIM_PTR(gAxSharedAnim_01270),
	AX_ANIM_PTR(gAxSharedAnim_01288),
	AX_ANIM_PTR(gAxSharedAnim_01305),
	AX_ANIM_PTR(gAxSharedAnim_01316),
	AX_ANIM_PTR(gAxSharedAnim_01328),
};

static const ax_anim *const sSlowbroAnimTable8[] = {
	AX_ANIM_PTR(sSlowbroAnims_8_1),
	AX_ANIM_PTR(sSlowbroAnims_8_2),
	AX_ANIM_PTR(sSlowbroAnims_8_3),
	AX_ANIM_PTR(sSlowbroAnims_8_4),
	AX_ANIM_PTR(sSlowbroAnims_8_5),
	AX_ANIM_PTR(sSlowbroAnims_8_6),
	AX_ANIM_PTR(sSlowbroAnims_8_7),
	AX_ANIM_PTR(sSlowbroAnims_8_8),
};

static const ax_anim *const sSlowbroAnimTable9[] = {
	AX_ANIM_PTR(sSlowbroAnims_9_1),
	AX_ANIM_PTR(sSlowbroAnims_9_2),
	AX_ANIM_PTR(sSlowbroAnims_9_3),
	AX_ANIM_PTR(sSlowbroAnims_9_4),
	AX_ANIM_PTR(sSlowbroAnims_9_5),
	AX_ANIM_PTR(sSlowbroAnims_9_6),
	AX_ANIM_PTR(sSlowbroAnims_9_7),
	AX_ANIM_PTR(sSlowbroAnims_9_8),
};

static const ax_anim *const sSlowbroAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01677),
	AX_ANIM_PTR(gAxSharedAnim_01681),
	AX_ANIM_PTR(gAxSharedAnim_01691),
	AX_ANIM_PTR(gAxSharedAnim_01693),
	AX_ANIM_PTR(gAxSharedAnim_01697),
	AX_ANIM_PTR(gAxSharedAnim_01703),
	AX_ANIM_PTR(gAxSharedAnim_01707),
	AX_ANIM_PTR(gAxSharedAnim_01711),
};

static const ax_anim *const sSlowbroAnimTable11[] = {
	AX_ANIM_PTR(sSlowbroAnims_11_1),
	AX_ANIM_PTR(sSlowbroAnims_11_2),
	AX_ANIM_PTR(sSlowbroAnims_11_3),
	AX_ANIM_PTR(sSlowbroAnims_11_4),
	AX_ANIM_PTR(sSlowbroAnims_11_5),
	AX_ANIM_PTR(sSlowbroAnims_11_6),
	AX_ANIM_PTR(sSlowbroAnims_11_7),
	AX_ANIM_PTR(sSlowbroAnims_11_8),
};

static const ax_anim *const sSlowbroAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01773),
	AX_ANIM_PTR(gAxSharedAnim_01790),
	AX_ANIM_PTR(gAxSharedAnim_01787),
	AX_ANIM_PTR(gAxSharedAnim_01785),
	AX_ANIM_PTR(gAxSharedAnim_01784),
	AX_ANIM_PTR(gAxSharedAnim_01782),
	AX_ANIM_PTR(gAxSharedAnim_01777),
	AX_ANIM_PTR(gAxSharedAnim_01774),
};

static const ax_anim *const sSlowbroAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01796),
	AX_ANIM_PTR(gAxSharedAnim_01813),
	AX_ANIM_PTR(gAxSharedAnim_01812),
	AX_ANIM_PTR(gAxSharedAnim_01810),
	AX_ANIM_PTR(gAxSharedAnim_01808),
	AX_ANIM_PTR(gAxSharedAnim_01805),
	AX_ANIM_PTR(gAxSharedAnim_01803),
	AX_ANIM_PTR(gAxSharedAnim_01800),
};

static const ax_anim *const *const sAxAnimationsSlowbro[] = {
	sSlowbroAnimTable1,
	sSlowbroAnimTable2,
	sSlowbroAnimTable3,
	sSlowbroAnimTable4,
	sSlowbroAnimTable5,
	sSlowbroAnimTable6,
	sSlowbroAnimTable7,
	sSlowbroAnimTable8,
	sSlowbroAnimTable9,
	sSlowbroAnimTable10,
	sSlowbroAnimTable11,
	sSlowbroAnimTable12,
	sSlowbroAnimTable13,
};

static const ax_sprite *const sAxSpritesSlowbro[] = {
	sSlowbroSprites1,
	sSlowbroSprites2,
	sSlowbroSprites3,
	sSlowbroSprites4,
	sSlowbroSprites5,
	sSlowbroSprites6,
	sSlowbroSprites7,
	sSlowbroSprites8,
	sSlowbroSprites9,
	sSlowbroSprites10,
	sSlowbroSprites11,
	sSlowbroSprites12,
	sSlowbroSprites13,
	sSlowbroSprites14,
	sSlowbroSprites15,
	sSlowbroSprites16,
	sSlowbroSprites17,
	sSlowbroSprites18,
	sSlowbroSprites19,
	sSlowbroSprites20,
	sSlowbroSprites21,
	sSlowbroSprites22,
	sSlowbroSprites23,
	sSlowbroSprites24,
	sSlowbroSprites25,
	sSlowbroSprites26,
	sSlowbroSprites27,
	sSlowbroSprites28,
	sSlowbroSprites29,
	sSlowbroSprites30,
	sSlowbroSprites31,
	sSlowbroSprites32,
	sSlowbroSprites33,
	sSlowbroSprites34,
	sSlowbroSprites35,
	sSlowbroSprites36,
	sSlowbroSprites37,
	sSlowbroSprites38,
	sSlowbroSprites39,
	sSlowbroSprites40,
	sSlowbroSprites41,
	sSlowbroSprites42,
};

static const axmain sAxMainSlowbro = {
	.poses = sAxPosesSlowbro,
	.animations = sAxAnimationsSlowbro,
	.animCount = ARRAY_COUNT(sAxAnimationsSlowbro),
	.spriteData = sAxSpritesSlowbro,
	.positions = sAxPositionsSlowbro,
};
