/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainLotad;
const SiroArchive gAxLotad = {"SIRO", &sAxMainLotad};

static const ax_pose sLotadPose1[] = {
	AX_POSE(0, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose2[] = {
	AX_POSE(1, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose3[] = {
	AX_POSE(2, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose4[] = {
	AX_POSE(3, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose5[] = {
	AX_POSE(4, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose6[] = {
	AX_POSE(5, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose7[] = {
	AX_POSE(6, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose8[] = {
	AX_POSE(7, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose9[] = {
	AX_POSE(8, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose10[] = {
	AX_POSE(9, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose11[] = {
	AX_POSE(10, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose12[] = {
	AX_POSE(11, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose13[] = {
	AX_POSE(12, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose14[] = {
	AX_POSE(13, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose15[] = {
	AX_POSE(14, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose16[] = {
	AX_POSE(9, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose17[] = {
	AX_POSE(10, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose18[] = {
	AX_POSE(11, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose19[] = {
	AX_POSE(6, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose20[] = {
	AX_POSE(7, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose21[] = {
	AX_POSE(8, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose22[] = {
	AX_POSE(3, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose23[] = {
	AX_POSE(4, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose24[] = {
	AX_POSE(5, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose28[] = {
	AX_POSE(15, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose29[] = {
	AX_POSE(16, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose33[] = {
	AX_POSE(17, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose34[] = {
	AX_POSE(18, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose38[] = {
	AX_POSE(19, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose39[] = {
	AX_POSE(20, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose43[] = {
	AX_POSE(21, OAM1(240, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose44[] = {
	AX_POSE(22, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose48[] = {
	AX_POSE(23, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose49[] = {
	AX_POSE(24, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose53[] = {
	AX_POSE(21, OAM1(240, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose54[] = {
	AX_POSE(22, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose58[] = {
	AX_POSE(19, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose59[] = {
	AX_POSE(20, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose63[] = {
	AX_POSE(17, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose64[] = {
	AX_POSE(18, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose115[] = {
	AX_POSE(21, OAM1(240, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose116[] = {
	AX_POSE(22, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose121[] = {
	AX_POSE(21, OAM1(240, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose122[] = {
	AX_POSE(22, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose132[] = {
	AX_POSE(25, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose133[] = {
	AX_POSE(26, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose137[] = {
	AX_POSE(27, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose138[] = {
	AX_POSE(28, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose142[] = {
	AX_POSE(29, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose143[] = {
	AX_POSE(30, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose146[] = {
	AX_POSE(22, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose147[] = {
	AX_POSE(31, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose148[] = {
	AX_POSE(32, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose152[] = {
	AX_POSE(33, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose153[] = {
	AX_POSE(34, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose156[] = {
	AX_POSE(22, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose157[] = {
	AX_POSE(31, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose158[] = {
	AX_POSE(32, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose162[] = {
	AX_POSE(29, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose163[] = {
	AX_POSE(30, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose167[] = {
	AX_POSE(27, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose168[] = {
	AX_POSE(28, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose169[] = {
	AX_POSE(35, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose170[] = {
	AX_POSE(36, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose171[] = {
	AX_POSE(37, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose172[] = {
	AX_POSE(38, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose173[] = {
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose174[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose175[] = {
	AX_POSE(41, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose176[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose177[] = {
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose178[] = {
	AX_POSE(38, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose211[] = {
	AX_POSE(15, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose213[] = {
	AX_POSE(19, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose217[] = {
	AX_POSE(19, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLotadPose218[] = {
	AX_POSE(17, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const u8 sLotadAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_2_2.lz");
static const u8 sLotadAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_2_3.lz");
static const u8 sLotadAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_2_4.lz");
static const u8 sLotadAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_2_5.lz");
static const u8 sLotadAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_2_6.lz");
static const u8 sLotadAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_2_7.lz");
static const u8 sLotadAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_2_8.lz");
static const u8 sLotadAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_3_1.lz");
static const u8 sLotadAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_3_2.lz");
static const u8 sLotadAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_3_3.lz");
static const u8 sLotadAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_3_4.lz");
static const u8 sLotadAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_3_5.lz");
static const u8 sLotadAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_3_6.lz");
static const u8 sLotadAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_3_7.lz");
static const u8 sLotadAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_3_8.lz");
static const u8 sLotadAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_4_1.lz");
static const u8 sLotadAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_4_2.lz");
static const u8 sLotadAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_4_3.lz");
static const u8 sLotadAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_4_4.lz");
static const u8 sLotadAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_4_5.lz");
static const u8 sLotadAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_4_6.lz");
static const u8 sLotadAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_4_7.lz");
static const u8 sLotadAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_4_8.lz");
static const u8 sLotadAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_5_1.lz");
static const u8 sLotadAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_5_2.lz");
static const u8 sLotadAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_5_3.lz");
static const u8 sLotadAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_5_4.lz");
static const u8 sLotadAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_5_5.lz");
static const u8 sLotadAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_5_6.lz");
static const u8 sLotadAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_5_7.lz");
static const u8 sLotadAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_5_8.lz");
static const u8 sLotadAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_8_1.lz");
static const u8 sLotadAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_8_2.lz");
static const u8 sLotadAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_8_3.lz");
static const u8 sLotadAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_8_4.lz");
static const u8 sLotadAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_8_5.lz");
static const u8 sLotadAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_8_6.lz");
static const u8 sLotadAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_8_7.lz");
static const u8 sLotadAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_8_8.lz");
static const u8 sLotadAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_9_1.lz");
static const u8 sLotadAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_9_2.lz");
static const u8 sLotadAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_9_3.lz");
static const u8 sLotadAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_9_4.lz");
static const u8 sLotadAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_9_5.lz");
static const u8 sLotadAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_9_6.lz");
static const u8 sLotadAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_9_7.lz");
static const u8 sLotadAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/lotad/sLotadAnims_9_8.lz");

static const u8 sLotadGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_1.4bpp.lz");
static const ax_sprite sLotadSprites1[] = {
	{sLotadGfx1, ARRAY_COUNT(sLotadGfx1)}, 
	{NULL, 0}
};
static const u8 sLotadGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_2.4bpp.lz");
static const ax_sprite sLotadSprites2[] = {
	{sLotadGfx2, ARRAY_COUNT(sLotadGfx2)}, 
	{NULL, 0}
};
static const u8 sLotadGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_3.4bpp.lz");
static const ax_sprite sLotadSprites3[] = {
	{sLotadGfx3, ARRAY_COUNT(sLotadGfx3)}, 
	{NULL, 0}
};
static const u8 sLotadGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_4.4bpp.lz");
static const ax_sprite sLotadSprites4[] = {
	{sLotadGfx4, ARRAY_COUNT(sLotadGfx4)}, 
	{NULL, 0}
};
static const u8 sLotadGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_5.4bpp.lz");
static const ax_sprite sLotadSprites5[] = {
	{sLotadGfx5, ARRAY_COUNT(sLotadGfx5)}, 
	{NULL, 0}
};
static const u8 sLotadGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_6.4bpp.lz");
static const ax_sprite sLotadSprites6[] = {
	{sLotadGfx6, ARRAY_COUNT(sLotadGfx6)}, 
	{NULL, 0}
};
static const u8 sLotadGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_7.4bpp.lz");
static const ax_sprite sLotadSprites7[] = {
	{sLotadGfx7, ARRAY_COUNT(sLotadGfx7)}, 
	{NULL, 0}
};
static const u8 sLotadGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_8.4bpp.lz");
static const ax_sprite sLotadSprites8[] = {
	{sLotadGfx8, ARRAY_COUNT(sLotadGfx8)}, 
	{NULL, 0}
};
static const u8 sLotadGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_9.4bpp.lz");
static const ax_sprite sLotadSprites9[] = {
	{sLotadGfx9, ARRAY_COUNT(sLotadGfx9)}, 
	{NULL, 0}
};
static const u8 sLotadGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_10.4bpp.lz");
static const ax_sprite sLotadSprites10[] = {
	{sLotadGfx10, ARRAY_COUNT(sLotadGfx10)}, 
	{NULL, 0}
};
static const u8 sLotadGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_11.4bpp.lz");
static const ax_sprite sLotadSprites11[] = {
	{sLotadGfx11, ARRAY_COUNT(sLotadGfx11)}, 
	{NULL, 0}
};
static const u8 sLotadGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_12.4bpp.lz");
static const ax_sprite sLotadSprites12[] = {
	{sLotadGfx12, ARRAY_COUNT(sLotadGfx12)}, 
	{NULL, 0}
};
static const u8 sLotadGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_13.4bpp.lz");
static const ax_sprite sLotadSprites13[] = {
	{sLotadGfx13, ARRAY_COUNT(sLotadGfx13)}, 
	{NULL, 0}
};
static const u8 sLotadGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_14.4bpp.lz");
static const ax_sprite sLotadSprites14[] = {
	{sLotadGfx14, ARRAY_COUNT(sLotadGfx14)}, 
	{NULL, 0}
};
static const u8 sLotadGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_15.4bpp.lz");
static const ax_sprite sLotadSprites15[] = {
	{sLotadGfx15, ARRAY_COUNT(sLotadGfx15)}, 
	{NULL, 0}
};
static const u8 sLotadGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_16.4bpp.lz");
static const u8 sLotadGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_16_1.4bpp.lz");
static const ax_sprite sLotadSprites16[] = {
	{sLotadGfx16, ARRAY_COUNT(sLotadGfx16)}, 
	{NULL, 32}, 
	{sLotadGfx16_1, ARRAY_COUNT(sLotadGfx16_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sLotadGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_17.4bpp.lz");
static const u8 sLotadGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_17_1.4bpp.lz");
static const ax_sprite sLotadSprites17[] = {
	{sLotadGfx17, ARRAY_COUNT(sLotadGfx17)}, 
	{NULL, 32}, 
	{sLotadGfx17_1, ARRAY_COUNT(sLotadGfx17_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sLotadGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_18.4bpp.lz");
static const u8 sLotadGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_18_1.4bpp.lz");
static const ax_sprite sLotadSprites18[] = {
	{sLotadGfx18, ARRAY_COUNT(sLotadGfx18)}, 
	{NULL, 32}, 
	{sLotadGfx18_1, ARRAY_COUNT(sLotadGfx18_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sLotadGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_19.4bpp.lz");
static const u8 sLotadGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_19_1.4bpp.lz");
static const ax_sprite sLotadSprites19[] = {
	{sLotadGfx19, ARRAY_COUNT(sLotadGfx19)}, 
	{NULL, 32}, 
	{sLotadGfx19_1, ARRAY_COUNT(sLotadGfx19_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sLotadGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_20.4bpp.lz");
static const u8 sLotadGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_20_1.4bpp.lz");
static const u8 sLotadGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_20_2.4bpp.lz");
static const ax_sprite sLotadSprites20[] = {
	{sLotadGfx20, ARRAY_COUNT(sLotadGfx20)}, 
	{NULL, 32}, 
	{sLotadGfx20_1, ARRAY_COUNT(sLotadGfx20_1)}, 
	{NULL, 64}, 
	{sLotadGfx20_2, ARRAY_COUNT(sLotadGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sLotadGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_21.4bpp.lz");
static const u8 sLotadGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_21_1.4bpp.lz");
static const u8 sLotadGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_21_2.4bpp.lz");
static const ax_sprite sLotadSprites21[] = {
	{sLotadGfx21, ARRAY_COUNT(sLotadGfx21)}, 
	{NULL, 32}, 
	{sLotadGfx21_1, ARRAY_COUNT(sLotadGfx21_1)}, 
	{NULL, 64}, 
	{sLotadGfx21_2, ARRAY_COUNT(sLotadGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sLotadGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_22.4bpp.lz");
static const ax_sprite sLotadSprites22[] = {
	{sLotadGfx22, ARRAY_COUNT(sLotadGfx22)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLotadGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_23.4bpp.lz");
static const u8 sLotadGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_23_1.4bpp.lz");
static const u8 sLotadGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_23_2.4bpp.lz");
static const ax_sprite sLotadSprites23[] = {
	{sLotadGfx23, ARRAY_COUNT(sLotadGfx23)}, 
	{NULL, 32}, 
	{sLotadGfx23_1, ARRAY_COUNT(sLotadGfx23_1)}, 
	{NULL, 64}, 
	{sLotadGfx23_2, ARRAY_COUNT(sLotadGfx23_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sLotadGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_24.4bpp.lz");
static const u8 sLotadGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_24_1.4bpp.lz");
static const u8 sLotadGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_24_2.4bpp.lz");
static const ax_sprite sLotadSprites24[] = {
	{sLotadGfx24, ARRAY_COUNT(sLotadGfx24)}, 
	{NULL, 32}, 
	{sLotadGfx24_1, ARRAY_COUNT(sLotadGfx24_1)}, 
	{NULL, 32}, 
	{sLotadGfx24_2, ARRAY_COUNT(sLotadGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sLotadGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_25.4bpp.lz");
static const u8 sLotadGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_25_1.4bpp.lz");
static const u8 sLotadGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_25_2.4bpp.lz");
static const ax_sprite sLotadSprites25[] = {
	{sLotadGfx25, ARRAY_COUNT(sLotadGfx25)}, 
	{NULL, 32}, 
	{sLotadGfx25_1, ARRAY_COUNT(sLotadGfx25_1)}, 
	{NULL, 32}, 
	{sLotadGfx25_2, ARRAY_COUNT(sLotadGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sLotadGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_26.4bpp.lz");
static const u8 sLotadGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_26_1.4bpp.lz");
static const u8 sLotadGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_26_2.4bpp.lz");
static const ax_sprite sLotadSprites26[] = {
	{sLotadGfx26, ARRAY_COUNT(sLotadGfx26)}, 
	{NULL, 32}, 
	{sLotadGfx26_1, ARRAY_COUNT(sLotadGfx26_1)}, 
	{NULL, 32}, 
	{sLotadGfx26_2, ARRAY_COUNT(sLotadGfx26_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sLotadGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_27.4bpp.lz");
static const u8 sLotadGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_27_1.4bpp.lz");
static const u8 sLotadGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_27_2.4bpp.lz");
static const ax_sprite sLotadSprites27[] = {
	{sLotadGfx27, ARRAY_COUNT(sLotadGfx27)}, 
	{NULL, 32}, 
	{sLotadGfx27_1, ARRAY_COUNT(sLotadGfx27_1)}, 
	{NULL, 64}, 
	{sLotadGfx27_2, ARRAY_COUNT(sLotadGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sLotadGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_28.4bpp.lz");
static const u8 sLotadGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_28_1.4bpp.lz");
static const u8 sLotadGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_28_2.4bpp.lz");
static const ax_sprite sLotadSprites28[] = {
	{sLotadGfx28, ARRAY_COUNT(sLotadGfx28)}, 
	{NULL, 32}, 
	{sLotadGfx28_1, ARRAY_COUNT(sLotadGfx28_1)}, 
	{NULL, 64}, 
	{sLotadGfx28_2, ARRAY_COUNT(sLotadGfx28_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sLotadGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_29.4bpp.lz");
static const u8 sLotadGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_29_1.4bpp.lz");
static const u8 sLotadGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_29_2.4bpp.lz");
static const ax_sprite sLotadSprites29[] = {
	{sLotadGfx29, ARRAY_COUNT(sLotadGfx29)}, 
	{NULL, 32}, 
	{sLotadGfx29_1, ARRAY_COUNT(sLotadGfx29_1)}, 
	{NULL, 64}, 
	{sLotadGfx29_2, ARRAY_COUNT(sLotadGfx29_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sLotadGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_30.4bpp.lz");
static const u8 sLotadGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_30_1.4bpp.lz");
static const u8 sLotadGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_30_2.4bpp.lz");
static const ax_sprite sLotadSprites30[] = {
	{sLotadGfx30, ARRAY_COUNT(sLotadGfx30)}, 
	{NULL, 32}, 
	{sLotadGfx30_1, ARRAY_COUNT(sLotadGfx30_1)}, 
	{NULL, 64}, 
	{sLotadGfx30_2, ARRAY_COUNT(sLotadGfx30_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sLotadGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_31.4bpp.lz");
static const u8 sLotadGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_31_1.4bpp.lz");
static const u8 sLotadGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_31_2.4bpp.lz");
static const ax_sprite sLotadSprites31[] = {
	{sLotadGfx31, ARRAY_COUNT(sLotadGfx31)}, 
	{NULL, 32}, 
	{sLotadGfx31_1, ARRAY_COUNT(sLotadGfx31_1)}, 
	{NULL, 64}, 
	{sLotadGfx31_2, ARRAY_COUNT(sLotadGfx31_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sLotadGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_32.4bpp.lz");
static const ax_sprite sLotadSprites32[] = {
	{sLotadGfx32, ARRAY_COUNT(sLotadGfx32)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLotadGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_33.4bpp.lz");
static const u8 sLotadGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_33_1.4bpp.lz");
static const u8 sLotadGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_33_2.4bpp.lz");
static const ax_sprite sLotadSprites33[] = {
	{sLotadGfx33, ARRAY_COUNT(sLotadGfx33)}, 
	{NULL, 32}, 
	{sLotadGfx33_1, ARRAY_COUNT(sLotadGfx33_1)}, 
	{NULL, 32}, 
	{sLotadGfx33_2, ARRAY_COUNT(sLotadGfx33_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sLotadGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_34.4bpp.lz");
static const u8 sLotadGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_34_1.4bpp.lz");
static const u8 sLotadGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_34_2.4bpp.lz");
static const ax_sprite sLotadSprites34[] = {
	{sLotadGfx34, ARRAY_COUNT(sLotadGfx34)}, 
	{NULL, 32}, 
	{sLotadGfx34_1, ARRAY_COUNT(sLotadGfx34_1)}, 
	{NULL, 32}, 
	{sLotadGfx34_2, ARRAY_COUNT(sLotadGfx34_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sLotadGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_35.4bpp.lz");
static const u8 sLotadGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_35_1.4bpp.lz");
static const u8 sLotadGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_35_2.4bpp.lz");
static const ax_sprite sLotadSprites35[] = {
	{sLotadGfx35, ARRAY_COUNT(sLotadGfx35)}, 
	{NULL, 32}, 
	{sLotadGfx35_1, ARRAY_COUNT(sLotadGfx35_1)}, 
	{NULL, 32}, 
	{sLotadGfx35_2, ARRAY_COUNT(sLotadGfx35_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sLotadGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_36.4bpp.lz");
static const ax_sprite sLotadSprites36[] = {
	{sLotadGfx36, ARRAY_COUNT(sLotadGfx36)}, 
	{NULL, 0}
};
static const u8 sLotadGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_37.4bpp.lz");
static const ax_sprite sLotadSprites37[] = {
	{sLotadGfx37, ARRAY_COUNT(sLotadGfx37)}, 
	{NULL, 0}
};
static const u8 sLotadGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_38.4bpp.lz");
static const ax_sprite sLotadSprites38[] = {
	{sLotadGfx38, ARRAY_COUNT(sLotadGfx38)}, 
	{NULL, 0}
};
static const u8 sLotadGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_39.4bpp.lz");
static const ax_sprite sLotadSprites39[] = {
	{sLotadGfx39, ARRAY_COUNT(sLotadGfx39)}, 
	{NULL, 0}
};
static const u8 sLotadGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_40.4bpp.lz");
static const ax_sprite sLotadSprites40[] = {
	{sLotadGfx40, ARRAY_COUNT(sLotadGfx40)}, 
	{NULL, 0}
};
static const u8 sLotadGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_41.4bpp.lz");
static const ax_sprite sLotadSprites41[] = {
	{sLotadGfx41, ARRAY_COUNT(sLotadGfx41)}, 
	{NULL, 0}
};
static const u8 sLotadGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/lotad/sprite_42.4bpp.lz");
static const ax_sprite sLotadSprites42[] = {
	{sLotadGfx42, ARRAY_COUNT(sLotadGfx42)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesLotad[] = {
	sLotadPose1,
	sLotadPose2,
	sLotadPose3,
	sLotadPose4,
	sLotadPose5,
	sLotadPose6,
	sLotadPose7,
	sLotadPose8,
	sLotadPose9,
	sLotadPose10,
	sLotadPose11,
	sLotadPose12,
	sLotadPose13,
	sLotadPose14,
	sLotadPose15,
	sLotadPose16,
	sLotadPose17,
	sLotadPose18,
	sLotadPose19,
	sLotadPose20,
	sLotadPose21,
	sLotadPose22,
	sLotadPose23,
	sLotadPose24,
	sLotadPose1,
	sLotadPose2,
	sLotadPose3,
	sLotadPose28,
	sLotadPose29,
	sLotadPose4,
	sLotadPose5,
	sLotadPose6,
	sLotadPose33,
	sLotadPose34,
	sLotadPose7,
	sLotadPose8,
	sLotadPose9,
	sLotadPose38,
	sLotadPose39,
	sLotadPose10,
	sLotadPose11,
	sLotadPose12,
	sLotadPose43,
	sLotadPose44,
	sLotadPose13,
	sLotadPose14,
	sLotadPose15,
	sLotadPose48,
	sLotadPose49,
	sLotadPose16,
	sLotadPose17,
	sLotadPose18,
	sLotadPose53,
	sLotadPose54,
	sLotadPose19,
	sLotadPose20,
	sLotadPose21,
	sLotadPose58,
	sLotadPose59,
	sLotadPose22,
	sLotadPose23,
	sLotadPose24,
	sLotadPose63,
	sLotadPose64,
	sLotadPose1,
	sLotadPose2,
	sLotadPose3,
	sLotadPose28,
	sLotadPose29,
	sLotadPose4,
	sLotadPose5,
	sLotadPose6,
	sLotadPose33,
	sLotadPose34,
	sLotadPose7,
	sLotadPose8,
	sLotadPose9,
	sLotadPose38,
	sLotadPose39,
	sLotadPose10,
	sLotadPose11,
	sLotadPose12,
	sLotadPose43,
	sLotadPose44,
	sLotadPose13,
	sLotadPose14,
	sLotadPose15,
	sLotadPose48,
	sLotadPose49,
	sLotadPose16,
	sLotadPose17,
	sLotadPose18,
	sLotadPose53,
	sLotadPose54,
	sLotadPose19,
	sLotadPose20,
	sLotadPose21,
	sLotadPose58,
	sLotadPose59,
	sLotadPose22,
	sLotadPose23,
	sLotadPose24,
	sLotadPose63,
	sLotadPose64,
	sLotadPose1,
	sLotadPose28,
	sLotadPose29,
	sLotadPose4,
	sLotadPose33,
	sLotadPose34,
	sLotadPose7,
	sLotadPose38,
	sLotadPose39,
	sLotadPose10,
	sLotadPose115,
	sLotadPose116,
	sLotadPose13,
	sLotadPose48,
	sLotadPose49,
	sLotadPose16,
	sLotadPose121,
	sLotadPose122,
	sLotadPose19,
	sLotadPose58,
	sLotadPose59,
	sLotadPose22,
	sLotadPose63,
	sLotadPose64,
	sLotadPose1,
	sLotadPose28,
	sLotadPose29,
	sLotadPose132,
	sLotadPose133,
	sLotadPose4,
	sLotadPose33,
	sLotadPose34,
	sLotadPose137,
	sLotadPose138,
	sLotadPose7,
	sLotadPose38,
	sLotadPose39,
	sLotadPose142,
	sLotadPose143,
	sLotadPose10,
	sLotadPose43,
	sLotadPose146,
	sLotadPose147,
	sLotadPose148,
	sLotadPose13,
	sLotadPose48,
	sLotadPose49,
	sLotadPose152,
	sLotadPose153,
	sLotadPose16,
	sLotadPose53,
	sLotadPose156,
	sLotadPose157,
	sLotadPose158,
	sLotadPose19,
	sLotadPose58,
	sLotadPose59,
	sLotadPose162,
	sLotadPose163,
	sLotadPose22,
	sLotadPose63,
	sLotadPose64,
	sLotadPose167,
	sLotadPose168,
	sLotadPose169,
	sLotadPose170,
	sLotadPose171,
	sLotadPose172,
	sLotadPose173,
	sLotadPose174,
	sLotadPose175,
	sLotadPose176,
	sLotadPose177,
	sLotadPose178,
	sLotadPose1,
	sLotadPose28,
	sLotadPose29,
	sLotadPose4,
	sLotadPose33,
	sLotadPose34,
	sLotadPose7,
	sLotadPose38,
	sLotadPose39,
	sLotadPose10,
	sLotadPose115,
	sLotadPose116,
	sLotadPose13,
	sLotadPose48,
	sLotadPose49,
	sLotadPose16,
	sLotadPose121,
	sLotadPose122,
	sLotadPose19,
	sLotadPose58,
	sLotadPose59,
	sLotadPose22,
	sLotadPose63,
	sLotadPose64,
	sLotadPose1,
	sLotadPose22,
	sLotadPose19,
	sLotadPose16,
	sLotadPose13,
	sLotadPose10,
	sLotadPose7,
	sLotadPose4,
	sLotadPose211,
	sLotadPose33,
	sLotadPose213,
	sLotadPose115,
	sLotadPose48,
	sLotadPose121,
	sLotadPose217,
	sLotadPose218,
	sLotadPose1,
	sLotadPose28,
	sLotadPose29,
	sLotadPose4,
	sLotadPose33,
	sLotadPose34,
	sLotadPose7,
	sLotadPose38,
	sLotadPose39,
	sLotadPose10,
	sLotadPose115,
	sLotadPose116,
	sLotadPose13,
	sLotadPose48,
	sLotadPose49,
	sLotadPose16,
	sLotadPose121,
	sLotadPose122,
	sLotadPose19,
	sLotadPose58,
	sLotadPose59,
	sLotadPose22,
	sLotadPose63,
	sLotadPose64,
	sLotadPose1,
	sLotadPose22,
	sLotadPose19,
	sLotadPose16,
	sLotadPose13,
	sLotadPose10,
	sLotadPose7,
	sLotadPose4,
	sLotadPose1,
	sLotadPose22,
	sLotadPose19,
	sLotadPose16,
	sLotadPose13,
	sLotadPose10,
	sLotadPose7,
	sLotadPose4,
};

static const struct PositionSets sAxPositionsLotad[] = {
	[0] = { .set = { {-1, 0}, {-7, 0}, {5, 0}, {-1, -4} } },
	[1] = { .set = { {-1, 1}, {-7, 0}, {3, 2}, {-1, -3} } },
	[2] = { .set = { {-1, 1}, {-6, 2}, {5, 0}, {-1, -3} } },
	[3] = { .set = { {5, -1}, {4, -1}, {0, 0}, {-1, -4} } },
	[4] = { .set = { {5, 0}, {0, 0}, {1, 2}, {-1, -3} } },
	[5] = { .set = { {5, 0}, {6, 1}, {-3, 1}, {-1, -3} } },
	[6] = { .set = { {5, -3}, {3, -4}, {3, 0}, {-1, -5} } },
	[7] = { .set = { {5, -2}, {1, -3}, {5, 1}, {-1, -4} } },
	[8] = { .set = { {5, -2}, {6, -3}, {1, 1}, {-1, -4} } },
	[9] = { .set = { {4, -4}, {-2, -2}, {4, -1}, {0, -6} } },
	[10] = { .set = { {4, -3}, {-2, -2}, {5, -1}, {0, -5} } },
	[11] = { .set = { {4, -3}, {1, -3}, {3, 0}, {0, -5} } },
	[12] = { .set = { {-1, -3}, {5, -4}, {-7, -4}, {-1, -5} } },
	[13] = { .set = { {0, -2}, {6, -4}, {-6, -1}, {-1, -4} } },
	[14] = { .set = { {-2, -2}, {4, -1}, {-8, -4}, {-1, -4} } },
	[15] = { .set = { {-6, -4}, {0, -2}, {-6, -1}, {-2, -6} } },
	[16] = { .set = { {-6, -3}, {0, -2}, {-7, -1}, {-2, -5} } },
	[17] = { .set = { {-6, -3}, {-3, -3}, {-5, 0}, {-2, -5} } },
	[18] = { .set = { {-7, -3}, {-5, -4}, {-5, 0}, {-1, -5} } },
	[19] = { .set = { {-7, -2}, {-3, -3}, {-7, 1}, {-1, -4} } },
	[20] = { .set = { {-7, -2}, {-8, -3}, {-3, 1}, {-1, -4} } },
	[21] = { .set = { {-7, -1}, {-6, -1}, {-2, 0}, {-1, -4} } },
	[22] = { .set = { {-7, 0}, {-2, 0}, {-3, 2}, {-1, -3} } },
	[23] = { .set = { {-7, 0}, {-8, 1}, {1, 1}, {-1, -3} } },
	[24] = { .set = { {-1, 0}, {-7, 0}, {5, 0}, {-1, -4} } },
	[25] = { .set = { {-1, 1}, {-7, 0}, {3, 2}, {-1, -3} } },
	[26] = { .set = { {-1, 1}, {-6, 2}, {5, 0}, {-1, -3} } },
	[27] = { .set = { {-2, -3}, {-7, 0}, {5, -3}, {-2, -5} } },
	[28] = { .set = { {0, -3}, {-7, -3}, {5, 0}, {1, -5} } },
	[29] = { .set = { {5, -1}, {4, -1}, {0, 0}, {-1, -4} } },
	[30] = { .set = { {5, 0}, {0, 0}, {1, 2}, {-1, -3} } },
	[31] = { .set = { {5, 0}, {6, 1}, {-3, 1}, {-1, -3} } },
	[32] = { .set = { {3, -5}, {5, -2}, {-1, -4}, {0, -5} } },
	[33] = { .set = { {3, -5}, {6, -5}, {0, -1}, {-1, -5} } },
	[34] = { .set = { {5, -3}, {3, -4}, {3, 0}, {-1, -5} } },
	[35] = { .set = { {5, -2}, {1, -3}, {5, 1}, {-1, -4} } },
	[36] = { .set = { {5, -2}, {6, -3}, {1, 1}, {-1, -4} } },
	[37] = { .set = { {4, -7}, {3, -6}, {1, -4}, {-3, -5} } },
	[38] = { .set = { {5, -7}, {2, -10}, {1, -2}, {-3, -8} } },
	[39] = { .set = { {4, -4}, {-2, -2}, {4, -1}, {0, -6} } },
	[40] = { .set = { {4, -3}, {-2, -2}, {5, -1}, {0, -5} } },
	[41] = { .set = { {4, -3}, {1, -3}, {3, 0}, {0, -5} } },
	[42] = { .set = { {1, -10}, {-3, -10}, {4, -6}, {-3, -6} } },
	[43] = { .set = { {2, -11}, {-2, -12}, {4, -6}, {-2, -9} } },
	[44] = { .set = { {-1, -3}, {5, -4}, {-7, -4}, {-1, -5} } },
	[45] = { .set = { {0, -2}, {6, -4}, {-6, -1}, {-1, -4} } },
	[46] = { .set = { {-2, -2}, {4, -1}, {-8, -4}, {-1, -4} } },
	[47] = { .set = { {1, -11}, {4, -3}, {-8, -6}, {1, -6} } },
	[48] = { .set = { {-3, -11}, {6, -6}, {-6, -3}, {-3, -6} } },
	[49] = { .set = { {-6, -4}, {0, -2}, {-6, -1}, {-2, -6} } },
	[50] = { .set = { {-6, -3}, {0, -2}, {-7, -1}, {-2, -5} } },
	[51] = { .set = { {-6, -3}, {-3, -3}, {-5, 0}, {-2, -5} } },
	[52] = { .set = { {-5, -10}, {-1, -10}, {-8, -6}, {-1, -6} } },
	[53] = { .set = { {-4, -11}, {0, -12}, {-6, -6}, {0, -9} } },
	[54] = { .set = { {-7, -3}, {-5, -4}, {-5, 0}, {-1, -5} } },
	[55] = { .set = { {-7, -2}, {-3, -3}, {-7, 1}, {-1, -4} } },
	[56] = { .set = { {-7, -2}, {-8, -3}, {-3, 1}, {-1, -4} } },
	[57] = { .set = { {-6, -7}, {-5, -6}, {-3, -4}, {1, -5} } },
	[58] = { .set = { {-7, -7}, {-4, -10}, {-3, -2}, {1, -8} } },
	[59] = { .set = { {-7, -1}, {-6, -1}, {-2, 0}, {-1, -4} } },
	[60] = { .set = { {-7, 0}, {-2, 0}, {-3, 2}, {-1, -3} } },
	[61] = { .set = { {-7, 0}, {-8, 1}, {1, 1}, {-1, -3} } },
	[62] = { .set = { {-5, -5}, {-7, -2}, {-1, -4}, {-2, -5} } },
	[63] = { .set = { {-5, -5}, {-8, -5}, {-2, -1}, {-1, -5} } },
	[64] = { .set = { {-1, 0}, {-7, 0}, {5, 0}, {-1, -4} } },
	[65] = { .set = { {-1, 1}, {-7, 0}, {3, 2}, {-1, -3} } },
	[66] = { .set = { {-1, 1}, {-6, 2}, {5, 0}, {-1, -3} } },
	[67] = { .set = { {-2, -3}, {-7, 0}, {5, -3}, {-2, -5} } },
	[68] = { .set = { {0, -3}, {-7, -3}, {5, 0}, {1, -5} } },
	[69] = { .set = { {5, -1}, {4, -1}, {0, 0}, {-1, -4} } },
	[70] = { .set = { {5, 0}, {0, 0}, {1, 2}, {-1, -3} } },
	[71] = { .set = { {5, 0}, {6, 1}, {-3, 1}, {-1, -3} } },
	[72] = { .set = { {3, -5}, {5, -2}, {-1, -4}, {0, -5} } },
	[73] = { .set = { {3, -5}, {6, -5}, {0, -1}, {-1, -5} } },
	[74] = { .set = { {5, -3}, {3, -4}, {3, 0}, {-1, -5} } },
	[75] = { .set = { {5, -2}, {1, -3}, {5, 1}, {-1, -4} } },
	[76] = { .set = { {5, -2}, {6, -3}, {1, 1}, {-1, -4} } },
	[77] = { .set = { {4, -7}, {3, -6}, {1, -4}, {-3, -5} } },
	[78] = { .set = { {5, -7}, {2, -10}, {1, -2}, {-3, -8} } },
	[79] = { .set = { {4, -4}, {-2, -2}, {4, -1}, {0, -6} } },
	[80] = { .set = { {4, -3}, {-2, -2}, {5, -1}, {0, -5} } },
	[81] = { .set = { {4, -3}, {1, -3}, {3, 0}, {0, -5} } },
	[82] = { .set = { {1, -10}, {-3, -10}, {4, -6}, {-3, -6} } },
	[83] = { .set = { {2, -11}, {-2, -12}, {4, -6}, {-2, -9} } },
	[84] = { .set = { {-1, -3}, {5, -4}, {-7, -4}, {-1, -5} } },
	[85] = { .set = { {0, -2}, {6, -4}, {-6, -1}, {-1, -4} } },
	[86] = { .set = { {-2, -2}, {4, -1}, {-8, -4}, {-1, -4} } },
	[87] = { .set = { {1, -11}, {4, -3}, {-8, -6}, {1, -6} } },
	[88] = { .set = { {-3, -11}, {6, -6}, {-6, -3}, {-3, -6} } },
	[89] = { .set = { {-6, -4}, {0, -2}, {-6, -1}, {-2, -6} } },
	[90] = { .set = { {-6, -3}, {0, -2}, {-7, -1}, {-2, -5} } },
	[91] = { .set = { {-6, -3}, {-3, -3}, {-5, 0}, {-2, -5} } },
	[92] = { .set = { {-5, -10}, {-1, -10}, {-8, -6}, {-1, -6} } },
	[93] = { .set = { {-4, -11}, {0, -12}, {-6, -6}, {0, -9} } },
	[94] = { .set = { {-7, -3}, {-5, -4}, {-5, 0}, {-1, -5} } },
	[95] = { .set = { {-7, -2}, {-3, -3}, {-7, 1}, {-1, -4} } },
	[96] = { .set = { {-7, -2}, {-8, -3}, {-3, 1}, {-1, -4} } },
	[97] = { .set = { {-6, -7}, {-5, -6}, {-3, -4}, {1, -5} } },
	[98] = { .set = { {-7, -7}, {-4, -10}, {-3, -2}, {1, -8} } },
	[99] = { .set = { {-7, -1}, {-6, -1}, {-2, 0}, {-1, -4} } },
	[100] = { .set = { {-7, 0}, {-2, 0}, {-3, 2}, {-1, -3} } },
	[101] = { .set = { {-7, 0}, {-8, 1}, {1, 1}, {-1, -3} } },
	[102] = { .set = { {-5, -5}, {-7, -2}, {-1, -4}, {-2, -5} } },
	[103] = { .set = { {-5, -5}, {-8, -5}, {-2, -1}, {-1, -5} } },
	[104] = { .set = { {-1, 0}, {-7, 0}, {5, 0}, {-1, -4} } },
	[105] = { .set = { {-2, -3}, {-7, 0}, {5, -3}, {-2, -5} } },
	[106] = { .set = { {0, -3}, {-7, -3}, {5, 0}, {1, -5} } },
	[107] = { .set = { {5, -1}, {4, -1}, {0, 0}, {-1, -4} } },
	[108] = { .set = { {3, -5}, {5, -2}, {-1, -4}, {0, -5} } },
	[109] = { .set = { {3, -5}, {6, -5}, {0, -1}, {-1, -5} } },
	[110] = { .set = { {5, -3}, {3, -4}, {3, 0}, {-1, -5} } },
	[111] = { .set = { {4, -7}, {3, -6}, {1, -4}, {-3, -5} } },
	[112] = { .set = { {5, -7}, {2, -10}, {1, -2}, {-3, -8} } },
	[113] = { .set = { {4, -4}, {-2, -2}, {4, -1}, {0, -6} } },
	[114] = { .set = { {2, -10}, {-2, -10}, {5, -6}, {-2, -6} } },
	[115] = { .set = { {2, -9}, {-2, -10}, {4, -4}, {-2, -7} } },
	[116] = { .set = { {-1, -3}, {5, -4}, {-7, -4}, {-1, -5} } },
	[117] = { .set = { {1, -11}, {4, -3}, {-8, -6}, {1, -6} } },
	[118] = { .set = { {-3, -11}, {6, -6}, {-6, -3}, {-3, -6} } },
	[119] = { .set = { {-6, -4}, {0, -2}, {-6, -1}, {-2, -6} } },
	[120] = { .set = { {-4, -10}, {0, -10}, {-7, -6}, {0, -6} } },
	[121] = { .set = { {-4, -9}, {0, -10}, {-6, -4}, {0, -7} } },
	[122] = { .set = { {-7, -3}, {-5, -4}, {-5, 0}, {-1, -5} } },
	[123] = { .set = { {-6, -7}, {-5, -6}, {-3, -4}, {1, -5} } },
	[124] = { .set = { {-7, -7}, {-4, -10}, {-3, -2}, {1, -8} } },
	[125] = { .set = { {-7, -1}, {-6, -1}, {-2, 0}, {-1, -4} } },
	[126] = { .set = { {-5, -5}, {-7, -2}, {-1, -4}, {-2, -5} } },
	[127] = { .set = { {-5, -5}, {-8, -5}, {-2, -1}, {-1, -5} } },
	[128] = { .set = { {-1, 0}, {-7, 0}, {5, 0}, {-1, -4} } },
	[129] = { .set = { {-2, -3}, {-7, 0}, {5, -3}, {-2, -5} } },
	[130] = { .set = { {0, -3}, {-7, -3}, {5, 0}, {1, -5} } },
	[131] = { .set = { {0, -4}, {-6, -2}, {6, -7}, {-1, -6} } },
	[132] = { .set = { {0, -6}, {-8, -8}, {4, -2}, {0, -7} } },
	[133] = { .set = { {5, -1}, {4, -1}, {0, 0}, {-1, -4} } },
	[134] = { .set = { {3, -5}, {5, -2}, {-1, -4}, {0, -5} } },
	[135] = { .set = { {3, -5}, {6, -5}, {0, -1}, {-1, -5} } },
	[136] = { .set = { {3, -5}, {6, -2}, {-2, -4}, {-1, -6} } },
	[137] = { .set = { {3, -6}, {7, -8}, {-2, -1}, {1, -5} } },
	[138] = { .set = { {5, -3}, {3, -4}, {3, 0}, {-1, -5} } },
	[139] = { .set = { {4, -7}, {3, -6}, {1, -4}, {-3, -5} } },
	[140] = { .set = { {5, -7}, {2, -10}, {1, -2}, {-3, -8} } },
	[141] = { .set = { {4, -5}, {4, -2}, {1, -5}, {-1, -3} } },
	[142] = { .set = { {1, -8}, {-1, -9}, {4, -1}, {-1, -7} } },
	[143] = { .set = { {4, -4}, {-2, -2}, {4, -1}, {0, -6} } },
	[144] = { .set = { {1, -10}, {-3, -10}, {4, -6}, {-3, -6} } },
	[145] = { .set = { {2, -10}, {-2, -11}, {4, -5}, {-2, -8} } },
	[146] = { .set = { {4, -10}, {4, -2}, {5, -6}, {0, -6} } },
	[147] = { .set = { {0, -11}, {-2, -11}, {5, -2}, {-2, -8} } },
	[148] = { .set = { {-1, -3}, {5, -4}, {-7, -4}, {-1, -5} } },
	[149] = { .set = { {1, -11}, {4, -3}, {-8, -6}, {1, -6} } },
	[150] = { .set = { {-3, -11}, {6, -6}, {-6, -3}, {-3, -6} } },
	[151] = { .set = { {1, -10}, {4, -6}, {-6, -8}, {2, -6} } },
	[152] = { .set = { {-4, -10}, {4, -8}, {-7, -6}, {-5, -6} } },
	[153] = { .set = { {-6, -4}, {0, -2}, {-6, -1}, {-2, -6} } },
	[154] = { .set = { {-5, -10}, {-1, -10}, {-8, -6}, {-1, -6} } },
	[155] = { .set = { {-4, -10}, {0, -11}, {-6, -5}, {0, -8} } },
	[156] = { .set = { {-5, -10}, {-5, -2}, {-6, -6}, {-1, -6} } },
	[157] = { .set = { {-1, -11}, {1, -11}, {-6, -2}, {1, -8} } },
	[158] = { .set = { {-7, -3}, {-5, -4}, {-5, 0}, {-1, -5} } },
	[159] = { .set = { {-6, -7}, {-5, -6}, {-3, -4}, {1, -5} } },
	[160] = { .set = { {-7, -7}, {-4, -10}, {-3, -2}, {1, -8} } },
	[161] = { .set = { {-5, -5}, {-5, -2}, {-2, -5}, {0, -3} } },
	[162] = { .set = { {-2, -8}, {0, -9}, {-5, -1}, {0, -7} } },
	[163] = { .set = { {-7, -1}, {-6, -1}, {-2, 0}, {-1, -4} } },
	[164] = { .set = { {-5, -5}, {-7, -2}, {-1, -4}, {-2, -5} } },
	[165] = { .set = { {-5, -5}, {-8, -5}, {-2, -1}, {-1, -5} } },
	[166] = { .set = { {-5, -4}, {-8, -1}, {0, -3}, {-1, -5} } },
	[167] = { .set = { {-5, -5}, {-9, -7}, {0, 0}, {-3, -4} } },
	[168] = { .set = { {-7, -1}, {-6, -1}, {-2, 0}, {-1, -6} } },
	[169] = { .set = { {-7, 0}, {-5, 0}, {-1, 0}, {-1, -5} } },
	[170] = { .set = { {0, -7}, {-6, -7}, {6, -7}, {0, -9} } },
	[171] = { .set = { {4, -8}, {7, -7}, {-1, -4}, {-1, -7} } },
	[172] = { .set = { {6, -10}, {4, -11}, {6, -7}, {-1, -8} } },
	[173] = { .set = { {3, -11}, {0, -11}, {7, -7}, {-1, -10} } },
	[174] = { .set = { {0, -12}, {8, -8}, {-8, -8}, {0, -8} } },
	[175] = { .set = { {-3, -11}, {0, -11}, {-7, -7}, {1, -10} } },
	[176] = { .set = { {-6, -10}, {-4, -11}, {-6, -7}, {1, -8} } },
	[177] = { .set = { {-4, -8}, {-7, -7}, {1, -4}, {1, -7} } },
	[178] = { .set = { {-1, 0}, {-7, 0}, {5, 0}, {-1, -4} } },
	[179] = { .set = { {-2, -3}, {-7, 0}, {5, -3}, {-2, -5} } },
	[180] = { .set = { {0, -3}, {-7, -3}, {5, 0}, {1, -5} } },
	[181] = { .set = { {5, -1}, {4, -1}, {0, 0}, {-1, -4} } },
	[182] = { .set = { {3, -5}, {5, -2}, {-1, -4}, {0, -5} } },
	[183] = { .set = { {3, -5}, {6, -5}, {0, -1}, {-1, -5} } },
	[184] = { .set = { {5, -3}, {3, -4}, {3, 0}, {-1, -5} } },
	[185] = { .set = { {4, -7}, {3, -6}, {1, -4}, {-3, -5} } },
	[186] = { .set = { {5, -7}, {2, -10}, {1, -2}, {-3, -8} } },
	[187] = { .set = { {4, -4}, {-2, -2}, {4, -1}, {0, -6} } },
	[188] = { .set = { {2, -10}, {-2, -10}, {5, -6}, {-2, -6} } },
	[189] = { .set = { {2, -9}, {-2, -10}, {4, -4}, {-2, -7} } },
	[190] = { .set = { {-1, -3}, {5, -4}, {-7, -4}, {-1, -5} } },
	[191] = { .set = { {1, -11}, {4, -3}, {-8, -6}, {1, -6} } },
	[192] = { .set = { {-3, -11}, {6, -6}, {-6, -3}, {-3, -6} } },
	[193] = { .set = { {-6, -4}, {0, -2}, {-6, -1}, {-2, -6} } },
	[194] = { .set = { {-4, -10}, {0, -10}, {-7, -6}, {0, -6} } },
	[195] = { .set = { {-4, -9}, {0, -10}, {-6, -4}, {0, -7} } },
	[196] = { .set = { {-7, -3}, {-5, -4}, {-5, 0}, {-1, -5} } },
	[197] = { .set = { {-6, -7}, {-5, -6}, {-3, -4}, {1, -5} } },
	[198] = { .set = { {-7, -7}, {-4, -10}, {-3, -2}, {1, -8} } },
	[199] = { .set = { {-7, -1}, {-6, -1}, {-2, 0}, {-1, -4} } },
	[200] = { .set = { {-5, -5}, {-7, -2}, {-1, -4}, {-2, -5} } },
	[201] = { .set = { {-5, -5}, {-8, -5}, {-2, -1}, {-1, -5} } },
	[202] = { .set = { {-1, 0}, {-7, 0}, {5, 0}, {-1, -4} } },
	[203] = { .set = { {-7, -1}, {-6, -1}, {-2, 0}, {-1, -4} } },
	[204] = { .set = { {-7, -3}, {-5, -4}, {-5, 0}, {-1, -5} } },
	[205] = { .set = { {-6, -4}, {0, -2}, {-6, -1}, {-2, -6} } },
	[206] = { .set = { {-1, -3}, {5, -4}, {-7, -4}, {-1, -5} } },
	[207] = { .set = { {4, -4}, {-2, -2}, {4, -1}, {0, -6} } },
	[208] = { .set = { {5, -3}, {3, -4}, {3, 0}, {-1, -5} } },
	[209] = { .set = { {5, -1}, {4, -1}, {0, 0}, {-1, -4} } },
	[210] = { .set = { {-1, -3}, {-6, 0}, {6, -3}, {-1, -5} } },
	[211] = { .set = { {3, -5}, {5, -2}, {-1, -4}, {0, -5} } },
	[212] = { .set = { {6, -7}, {5, -6}, {3, -4}, {-1, -5} } },
	[213] = { .set = { {2, -10}, {-2, -10}, {5, -6}, {-2, -6} } },
	[214] = { .set = { {1, -11}, {4, -3}, {-8, -6}, {1, -6} } },
	[215] = { .set = { {-4, -10}, {0, -10}, {-7, -6}, {0, -6} } },
	[216] = { .set = { {-7, -7}, {-6, -6}, {-4, -4}, {0, -5} } },
	[217] = { .set = { {-4, -5}, {-6, -2}, {0, -4}, {-1, -5} } },
	[218] = { .set = { {-1, 0}, {-7, 0}, {5, 0}, {-1, -4} } },
	[219] = { .set = { {-2, -3}, {-7, 0}, {5, -3}, {-2, -5} } },
	[220] = { .set = { {0, -3}, {-7, -3}, {5, 0}, {1, -5} } },
	[221] = { .set = { {5, -1}, {4, -1}, {0, 0}, {-1, -4} } },
	[222] = { .set = { {3, -5}, {5, -2}, {-1, -4}, {0, -5} } },
	[223] = { .set = { {3, -5}, {6, -5}, {0, -1}, {-1, -5} } },
	[224] = { .set = { {5, -3}, {3, -4}, {3, 0}, {-1, -5} } },
	[225] = { .set = { {4, -7}, {3, -6}, {1, -4}, {-3, -5} } },
	[226] = { .set = { {5, -7}, {2, -10}, {1, -2}, {-3, -8} } },
	[227] = { .set = { {4, -4}, {-2, -2}, {4, -1}, {0, -6} } },
	[228] = { .set = { {2, -10}, {-2, -10}, {5, -6}, {-2, -6} } },
	[229] = { .set = { {2, -9}, {-2, -10}, {4, -4}, {-2, -7} } },
	[230] = { .set = { {-1, -3}, {5, -4}, {-7, -4}, {-1, -5} } },
	[231] = { .set = { {1, -11}, {4, -3}, {-8, -6}, {1, -6} } },
	[232] = { .set = { {-3, -11}, {6, -6}, {-6, -3}, {-3, -6} } },
	[233] = { .set = { {-6, -4}, {0, -2}, {-6, -1}, {-2, -6} } },
	[234] = { .set = { {-4, -10}, {0, -10}, {-7, -6}, {0, -6} } },
	[235] = { .set = { {-4, -9}, {0, -10}, {-6, -4}, {0, -7} } },
	[236] = { .set = { {-7, -3}, {-5, -4}, {-5, 0}, {-1, -5} } },
	[237] = { .set = { {-6, -7}, {-5, -6}, {-3, -4}, {1, -5} } },
	[238] = { .set = { {-7, -7}, {-4, -10}, {-3, -2}, {1, -8} } },
	[239] = { .set = { {-7, -1}, {-6, -1}, {-2, 0}, {-1, -4} } },
	[240] = { .set = { {-5, -5}, {-7, -2}, {-1, -4}, {-2, -5} } },
	[241] = { .set = { {-5, -5}, {-8, -5}, {-2, -1}, {-1, -5} } },
	[242] = { .set = { {-1, 0}, {-7, 0}, {5, 0}, {-1, -4} } },
	[243] = { .set = { {-7, -1}, {-6, -1}, {-2, 0}, {-1, -4} } },
	[244] = { .set = { {-7, -3}, {-5, -4}, {-5, 0}, {-1, -5} } },
	[245] = { .set = { {-6, -4}, {0, -2}, {-6, -1}, {-2, -6} } },
	[246] = { .set = { {-1, -3}, {5, -4}, {-7, -4}, {-1, -5} } },
	[247] = { .set = { {4, -4}, {-2, -2}, {4, -1}, {0, -6} } },
	[248] = { .set = { {5, -3}, {3, -4}, {3, 0}, {-1, -5} } },
	[249] = { .set = { {5, -1}, {4, -1}, {0, 0}, {-1, -4} } },
	[250] = { .set = { {-1, 0}, {-7, 0}, {5, 0}, {-1, -4} } },
	[251] = { .set = { {-7, -1}, {-6, -1}, {-2, 0}, {-1, -4} } },
	[252] = { .set = { {-7, -3}, {-5, -4}, {-5, 0}, {-1, -5} } },
	[253] = { .set = { {-6, -4}, {0, -2}, {-6, -1}, {-2, -6} } },
	[254] = { .set = { {-1, -3}, {5, -4}, {-7, -4}, {-1, -5} } },
	[255] = { .set = { {4, -4}, {-2, -2}, {4, -1}, {0, -6} } },
	[256] = { .set = { {5, -3}, {3, -4}, {3, 0}, {-1, -5} } },
	[257] = { .set = { {5, -1}, {4, -1}, {0, 0}, {-1, -4} } },
};

static const ax_anim *const sLotadAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sLotadAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_01566),
	AX_ANIM_PTR(sLotadAnims_2_2),
	AX_ANIM_PTR(sLotadAnims_2_3),
	AX_ANIM_PTR(sLotadAnims_2_4),
	AX_ANIM_PTR(sLotadAnims_2_5),
	AX_ANIM_PTR(sLotadAnims_2_6),
	AX_ANIM_PTR(sLotadAnims_2_7),
	AX_ANIM_PTR(sLotadAnims_2_8),
};

static const ax_anim *const sLotadAnimTable3[] = {
	AX_ANIM_PTR(sLotadAnims_3_1),
	AX_ANIM_PTR(sLotadAnims_3_2),
	AX_ANIM_PTR(sLotadAnims_3_3),
	AX_ANIM_PTR(sLotadAnims_3_4),
	AX_ANIM_PTR(sLotadAnims_3_5),
	AX_ANIM_PTR(sLotadAnims_3_6),
	AX_ANIM_PTR(sLotadAnims_3_7),
	AX_ANIM_PTR(sLotadAnims_3_8),
};

static const ax_anim *const sLotadAnimTable4[] = {
	AX_ANIM_PTR(sLotadAnims_4_1),
	AX_ANIM_PTR(sLotadAnims_4_2),
	AX_ANIM_PTR(sLotadAnims_4_3),
	AX_ANIM_PTR(sLotadAnims_4_4),
	AX_ANIM_PTR(sLotadAnims_4_5),
	AX_ANIM_PTR(sLotadAnims_4_6),
	AX_ANIM_PTR(sLotadAnims_4_7),
	AX_ANIM_PTR(sLotadAnims_4_8),
};

static const ax_anim *const sLotadAnimTable5[] = {
	AX_ANIM_PTR(sLotadAnims_5_1),
	AX_ANIM_PTR(sLotadAnims_5_2),
	AX_ANIM_PTR(sLotadAnims_5_3),
	AX_ANIM_PTR(sLotadAnims_5_4),
	AX_ANIM_PTR(sLotadAnims_5_5),
	AX_ANIM_PTR(sLotadAnims_5_6),
	AX_ANIM_PTR(sLotadAnims_5_7),
	AX_ANIM_PTR(sLotadAnims_5_8),
};

static const ax_anim *const sLotadAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02373),
	AX_ANIM_PTR(gAxSharedAnim_02373),
	AX_ANIM_PTR(gAxSharedAnim_02373),
	AX_ANIM_PTR(gAxSharedAnim_02373),
	AX_ANIM_PTR(gAxSharedAnim_02373),
	AX_ANIM_PTR(gAxSharedAnim_02373),
	AX_ANIM_PTR(gAxSharedAnim_02373),
	AX_ANIM_PTR(gAxSharedAnim_02373),
};

static const ax_anim *const sLotadAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00790),
	AX_ANIM_PTR(gAxSharedAnim_00808),
	AX_ANIM_PTR(gAxSharedAnim_00819),
	AX_ANIM_PTR(gAxSharedAnim_00833),
	AX_ANIM_PTR(gAxSharedAnim_00854),
	AX_ANIM_PTR(gAxSharedAnim_00867),
	AX_ANIM_PTR(gAxSharedAnim_00884),
	AX_ANIM_PTR(gAxSharedAnim_00895),
};

static const ax_anim *const sLotadAnimTable8[] = {
	AX_ANIM_PTR(sLotadAnims_8_1),
	AX_ANIM_PTR(sLotadAnims_8_2),
	AX_ANIM_PTR(sLotadAnims_8_3),
	AX_ANIM_PTR(sLotadAnims_8_4),
	AX_ANIM_PTR(sLotadAnims_8_5),
	AX_ANIM_PTR(sLotadAnims_8_6),
	AX_ANIM_PTR(sLotadAnims_8_7),
	AX_ANIM_PTR(sLotadAnims_8_8),
};

static const ax_anim *const sLotadAnimTable9[] = {
	AX_ANIM_PTR(sLotadAnims_9_1),
	AX_ANIM_PTR(sLotadAnims_9_2),
	AX_ANIM_PTR(sLotadAnims_9_3),
	AX_ANIM_PTR(sLotadAnims_9_4),
	AX_ANIM_PTR(sLotadAnims_9_5),
	AX_ANIM_PTR(sLotadAnims_9_6),
	AX_ANIM_PTR(sLotadAnims_9_7),
	AX_ANIM_PTR(sLotadAnims_9_8),
};

static const ax_anim *const sLotadAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01333),
	AX_ANIM_PTR(gAxSharedAnim_01347),
	AX_ANIM_PTR(gAxSharedAnim_01357),
	AX_ANIM_PTR(gAxSharedAnim_01365),
	AX_ANIM_PTR(gAxSharedAnim_01373),
	AX_ANIM_PTR(gAxSharedAnim_01384),
	AX_ANIM_PTR(gAxSharedAnim_01395),
	AX_ANIM_PTR(gAxSharedAnim_01410),
};

static const ax_anim *const sLotadAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_01417),
	AX_ANIM_PTR(gAxSharedAnim_01440),
	AX_ANIM_PTR(gAxSharedAnim_01459),
	AX_ANIM_PTR(gAxSharedAnim_01475),
	AX_ANIM_PTR(gAxSharedAnim_01495),
	AX_ANIM_PTR(gAxSharedAnim_01515),
	AX_ANIM_PTR(gAxSharedAnim_01535),
	AX_ANIM_PTR(gAxSharedAnim_01552),
};

static const ax_anim *const sLotadAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01587),
	AX_ANIM_PTR(gAxSharedAnim_01627),
	AX_ANIM_PTR(gAxSharedAnim_01617),
	AX_ANIM_PTR(gAxSharedAnim_01610),
	AX_ANIM_PTR(gAxSharedAnim_01609),
	AX_ANIM_PTR(gAxSharedAnim_01603),
	AX_ANIM_PTR(gAxSharedAnim_01595),
	AX_ANIM_PTR(gAxSharedAnim_01588),
};

static const ax_anim *const sLotadAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01637),
	AX_ANIM_PTR(gAxSharedAnim_01670),
	AX_ANIM_PTR(gAxSharedAnim_01667),
	AX_ANIM_PTR(gAxSharedAnim_01663),
	AX_ANIM_PTR(gAxSharedAnim_01658),
	AX_ANIM_PTR(gAxSharedAnim_01653),
	AX_ANIM_PTR(gAxSharedAnim_01649),
	AX_ANIM_PTR(gAxSharedAnim_01644),
};

static const ax_anim *const *const sAxAnimationsLotad[] = {
	sLotadAnimTable1,
	sLotadAnimTable2,
	sLotadAnimTable3,
	sLotadAnimTable4,
	sLotadAnimTable5,
	sLotadAnimTable6,
	sLotadAnimTable7,
	sLotadAnimTable8,
	sLotadAnimTable9,
	sLotadAnimTable10,
	sLotadAnimTable11,
	sLotadAnimTable12,
	sLotadAnimTable13,
};

static const ax_sprite *const sAxSpritesLotad[] = {
	sLotadSprites1,
	sLotadSprites2,
	sLotadSprites3,
	sLotadSprites4,
	sLotadSprites5,
	sLotadSprites6,
	sLotadSprites7,
	sLotadSprites8,
	sLotadSprites9,
	sLotadSprites10,
	sLotadSprites11,
	sLotadSprites12,
	sLotadSprites13,
	sLotadSprites14,
	sLotadSprites15,
	sLotadSprites16,
	sLotadSprites17,
	sLotadSprites18,
	sLotadSprites19,
	sLotadSprites20,
	sLotadSprites21,
	sLotadSprites22,
	sLotadSprites23,
	sLotadSprites24,
	sLotadSprites25,
	sLotadSprites26,
	sLotadSprites27,
	sLotadSprites28,
	sLotadSprites29,
	sLotadSprites30,
	sLotadSprites31,
	sLotadSprites32,
	sLotadSprites33,
	sLotadSprites34,
	sLotadSprites35,
	sLotadSprites36,
	sLotadSprites37,
	sLotadSprites38,
	sLotadSprites39,
	sLotadSprites40,
	sLotadSprites41,
	sLotadSprites42,
};

static const axmain sAxMainLotad = {
	.poses = sAxPosesLotad,
	.animations = sAxAnimationsLotad,
	.animCount = ARRAY_COUNT(sAxAnimationsLotad),
	.spriteData = sAxSpritesLotad,
	.positions = sAxPositionsLotad,
};
