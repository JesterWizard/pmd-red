/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainShedinja;
const SiroArchive gAxShedinja = {"SIRO", &sAxMainShedinja};

static const ax_pose sShedinjaPose1[] = {
	AX_POSE(0, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose2[] = {
	AX_POSE(1, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose3[] = {
	AX_POSE(2, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose4[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose5[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose6[] = {
	AX_POSE(5, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose7[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose8[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose9[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose10[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose11[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose12[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose13[] = {
	AX_POSE(12, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose14[] = {
	AX_POSE(13, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose15[] = {
	AX_POSE(14, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose16[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose17[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose18[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose19[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose20[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose21[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose22[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose23[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose24[] = {
	AX_POSE(5, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose28[] = {
	AX_POSE(15, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose29[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose33[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose34[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose38[] = {
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose39[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose43[] = {
	AX_POSE(21, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose44[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose48[] = {
	AX_POSE(23, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose49[] = {
	AX_POSE(24, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose53[] = {
	AX_POSE(21, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose54[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose58[] = {
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose59[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose63[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose64[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose136[] = {
	AX_POSE(21, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose140[] = {
	AX_POSE(21, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose145[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose146[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose147[] = {
	AX_POSE(27, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose148[] = {
	AX_POSE(28, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose149[] = {
	AX_POSE(29, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose150[] = {
	AX_POSE(30, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose151[] = {
	AX_POSE(31, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose152[] = {
	AX_POSE(30, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose153[] = {
	AX_POSE(29, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose154[] = {
	AX_POSE(28, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose181[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose182[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose183[] = {
	AX_POSE(24, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose184[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose185[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose197[] = {
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose199[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose200[] = {
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose202[] = {
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose203[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose206[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose212[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose214[] = {
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose215[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose217[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose218[] = {
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShedinjaPose231[] = {
	AX_POSE(12, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const u8 sShedinjaAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_1_1.lz");
static const u8 sShedinjaAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_1_2.lz");
static const u8 sShedinjaAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_1_3.lz");
static const u8 sShedinjaAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_1_4.lz");
static const u8 sShedinjaAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_1_5.lz");
static const u8 sShedinjaAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_1_6.lz");
static const u8 sShedinjaAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_1_7.lz");
static const u8 sShedinjaAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_1_8.lz");
static const u8 sShedinjaAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_2_1.lz");
static const u8 sShedinjaAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_2_2.lz");
static const u8 sShedinjaAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_2_3.lz");
static const u8 sShedinjaAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_2_4.lz");
static const u8 sShedinjaAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_2_5.lz");
static const u8 sShedinjaAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_2_6.lz");
static const u8 sShedinjaAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_2_7.lz");
static const u8 sShedinjaAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_2_8.lz");
static const u8 sShedinjaAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_3_1.lz");
static const u8 sShedinjaAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_3_2.lz");
static const u8 sShedinjaAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_3_3.lz");
static const u8 sShedinjaAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_3_4.lz");
static const u8 sShedinjaAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_3_5.lz");
static const u8 sShedinjaAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_3_6.lz");
static const u8 sShedinjaAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_3_7.lz");
static const u8 sShedinjaAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_3_8.lz");
static const u8 sShedinjaAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_4_1.lz");
static const u8 sShedinjaAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_4_5.lz");
static const u8 sShedinjaAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_5_1.lz");
static const u8 sShedinjaAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_5_2.lz");
static const u8 sShedinjaAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_5_3.lz");
static const u8 sShedinjaAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_5_4.lz");
static const u8 sShedinjaAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_5_5.lz");
static const u8 sShedinjaAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_5_6.lz");
static const u8 sShedinjaAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_5_7.lz");
static const u8 sShedinjaAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_5_8.lz");
static const u8 sShedinjaAnims_6_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_6_1.lz");
static const u8 sShedinjaAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_8_1.lz");
static const u8 sShedinjaAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_8_2.lz");
static const u8 sShedinjaAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_8_3.lz");
static const u8 sShedinjaAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_8_4.lz");
static const u8 sShedinjaAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_8_5.lz");
static const u8 sShedinjaAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_8_6.lz");
static const u8 sShedinjaAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_8_7.lz");
static const u8 sShedinjaAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_8_8.lz");
static const u8 sShedinjaAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_9_1.lz");
static const u8 sShedinjaAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_9_2.lz");
static const u8 sShedinjaAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_9_3.lz");
static const u8 sShedinjaAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_9_4.lz");
static const u8 sShedinjaAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_9_5.lz");
static const u8 sShedinjaAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_9_6.lz");
static const u8 sShedinjaAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_9_7.lz");
static const u8 sShedinjaAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_9_8.lz");
static const u8 sShedinjaAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_11_1.lz");
static const u8 sShedinjaAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_11_2.lz");
static const u8 sShedinjaAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_11_3.lz");
static const u8 sShedinjaAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_11_4.lz");
static const u8 sShedinjaAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_11_6.lz");
static const u8 sShedinjaAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_11_7.lz");
static const u8 sShedinjaAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/shedinja/sShedinjaAnims_11_8.lz");

static const u8 sShedinjaGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_1.4bpp.lz");
static const ax_sprite sShedinjaSprites1[] = {
	{sShedinjaGfx1, ARRAY_COUNT(sShedinjaGfx1)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_2.4bpp.lz");
static const ax_sprite sShedinjaSprites2[] = {
	{sShedinjaGfx2, ARRAY_COUNT(sShedinjaGfx2)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_3.4bpp.lz");
static const ax_sprite sShedinjaSprites3[] = {
	{sShedinjaGfx3, ARRAY_COUNT(sShedinjaGfx3)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_4.4bpp.lz");
static const ax_sprite sShedinjaSprites4[] = {
	{sShedinjaGfx4, ARRAY_COUNT(sShedinjaGfx4)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_5.4bpp.lz");
static const ax_sprite sShedinjaSprites5[] = {
	{sShedinjaGfx5, ARRAY_COUNT(sShedinjaGfx5)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_6.4bpp.lz");
static const ax_sprite sShedinjaSprites6[] = {
	{sShedinjaGfx6, ARRAY_COUNT(sShedinjaGfx6)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_7.4bpp.lz");
static const ax_sprite sShedinjaSprites7[] = {
	{sShedinjaGfx7, ARRAY_COUNT(sShedinjaGfx7)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_8.4bpp.lz");
static const ax_sprite sShedinjaSprites8[] = {
	{sShedinjaGfx8, ARRAY_COUNT(sShedinjaGfx8)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_9.4bpp.lz");
static const ax_sprite sShedinjaSprites9[] = {
	{sShedinjaGfx9, ARRAY_COUNT(sShedinjaGfx9)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_10.4bpp.lz");
static const ax_sprite sShedinjaSprites10[] = {
	{sShedinjaGfx10, ARRAY_COUNT(sShedinjaGfx10)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_11.4bpp.lz");
static const ax_sprite sShedinjaSprites11[] = {
	{sShedinjaGfx11, ARRAY_COUNT(sShedinjaGfx11)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_12.4bpp.lz");
static const ax_sprite sShedinjaSprites12[] = {
	{sShedinjaGfx12, ARRAY_COUNT(sShedinjaGfx12)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_13.4bpp.lz");
static const ax_sprite sShedinjaSprites13[] = {
	{sShedinjaGfx13, ARRAY_COUNT(sShedinjaGfx13)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_14.4bpp.lz");
static const ax_sprite sShedinjaSprites14[] = {
	{sShedinjaGfx14, ARRAY_COUNT(sShedinjaGfx14)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_15.4bpp.lz");
static const ax_sprite sShedinjaSprites15[] = {
	{sShedinjaGfx15, ARRAY_COUNT(sShedinjaGfx15)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_16.4bpp.lz");
static const u8 sShedinjaGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_16_1.4bpp.lz");
static const u8 sShedinjaGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_16_2.4bpp.lz");
static const u8 sShedinjaGfx16_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_16_3.4bpp.lz");
static const ax_sprite sShedinjaSprites16[] = {
	{NULL, 32}, 
	{sShedinjaGfx16, ARRAY_COUNT(sShedinjaGfx16)}, 
	{NULL, 32}, 
	{sShedinjaGfx16_1, ARRAY_COUNT(sShedinjaGfx16_1)}, 
	{NULL, 32}, 
	{sShedinjaGfx16_2, ARRAY_COUNT(sShedinjaGfx16_2)}, 
	{NULL, 64}, 
	{sShedinjaGfx16_3, ARRAY_COUNT(sShedinjaGfx16_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_17.4bpp.lz");
static const u8 sShedinjaGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_17_1.4bpp.lz");
static const u8 sShedinjaGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_17_2.4bpp.lz");
static const ax_sprite sShedinjaSprites17[] = {
	{sShedinjaGfx17, ARRAY_COUNT(sShedinjaGfx17)}, 
	{NULL, 32}, 
	{sShedinjaGfx17_1, ARRAY_COUNT(sShedinjaGfx17_1)}, 
	{NULL, 32}, 
	{sShedinjaGfx17_2, ARRAY_COUNT(sShedinjaGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_18.4bpp.lz");
static const u8 sShedinjaGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_18_1.4bpp.lz");
static const u8 sShedinjaGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_18_2.4bpp.lz");
static const ax_sprite sShedinjaSprites18[] = {
	{sShedinjaGfx18, ARRAY_COUNT(sShedinjaGfx18)}, 
	{NULL, 32}, 
	{sShedinjaGfx18_1, ARRAY_COUNT(sShedinjaGfx18_1)}, 
	{NULL, 32}, 
	{sShedinjaGfx18_2, ARRAY_COUNT(sShedinjaGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_19.4bpp.lz");
static const u8 sShedinjaGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_19_1.4bpp.lz");
static const u8 sShedinjaGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_19_2.4bpp.lz");
static const ax_sprite sShedinjaSprites19[] = {
	{sShedinjaGfx19, ARRAY_COUNT(sShedinjaGfx19)}, 
	{NULL, 64}, 
	{sShedinjaGfx19_1, ARRAY_COUNT(sShedinjaGfx19_1)}, 
	{NULL, 32}, 
	{sShedinjaGfx19_2, ARRAY_COUNT(sShedinjaGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_20.4bpp.lz");
static const u8 sShedinjaGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_20_1.4bpp.lz");
static const u8 sShedinjaGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_20_2.4bpp.lz");
static const ax_sprite sShedinjaSprites20[] = {
	{sShedinjaGfx20, ARRAY_COUNT(sShedinjaGfx20)}, 
	{NULL, 32}, 
	{sShedinjaGfx20_1, ARRAY_COUNT(sShedinjaGfx20_1)}, 
	{NULL, 32}, 
	{sShedinjaGfx20_2, ARRAY_COUNT(sShedinjaGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_21.4bpp.lz");
static const u8 sShedinjaGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_21_1.4bpp.lz");
static const u8 sShedinjaGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_21_2.4bpp.lz");
static const ax_sprite sShedinjaSprites21[] = {
	{sShedinjaGfx21, ARRAY_COUNT(sShedinjaGfx21)}, 
	{NULL, 64}, 
	{sShedinjaGfx21_1, ARRAY_COUNT(sShedinjaGfx21_1)}, 
	{NULL, 32}, 
	{sShedinjaGfx21_2, ARRAY_COUNT(sShedinjaGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_22.4bpp.lz");
static const u8 sShedinjaGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_22_1.4bpp.lz");
static const u8 sShedinjaGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_22_2.4bpp.lz");
static const ax_sprite sShedinjaSprites22[] = {
	{NULL, 32}, 
	{sShedinjaGfx22, ARRAY_COUNT(sShedinjaGfx22)}, 
	{NULL, 32}, 
	{sShedinjaGfx22_1, ARRAY_COUNT(sShedinjaGfx22_1)}, 
	{NULL, 32}, 
	{sShedinjaGfx22_2, ARRAY_COUNT(sShedinjaGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_23.4bpp.lz");
static const u8 sShedinjaGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_23_1.4bpp.lz");
static const u8 sShedinjaGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_23_2.4bpp.lz");
static const ax_sprite sShedinjaSprites23[] = {
	{sShedinjaGfx23, ARRAY_COUNT(sShedinjaGfx23)}, 
	{NULL, 32}, 
	{sShedinjaGfx23_1, ARRAY_COUNT(sShedinjaGfx23_1)}, 
	{NULL, 32}, 
	{sShedinjaGfx23_2, ARRAY_COUNT(sShedinjaGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_24.4bpp.lz");
static const u8 sShedinjaGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_24_1.4bpp.lz");
static const u8 sShedinjaGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_24_2.4bpp.lz");
static const ax_sprite sShedinjaSprites24[] = {
	{NULL, 32}, 
	{sShedinjaGfx24, ARRAY_COUNT(sShedinjaGfx24)}, 
	{NULL, 32}, 
	{sShedinjaGfx24_1, ARRAY_COUNT(sShedinjaGfx24_1)}, 
	{NULL, 32}, 
	{sShedinjaGfx24_2, ARRAY_COUNT(sShedinjaGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_25.4bpp.lz");
static const u8 sShedinjaGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_25_1.4bpp.lz");
static const u8 sShedinjaGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_25_2.4bpp.lz");
static const u8 sShedinjaGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_25_3.4bpp.lz");
static const ax_sprite sShedinjaSprites25[] = {
	{sShedinjaGfx25, ARRAY_COUNT(sShedinjaGfx25)}, 
	{NULL, 32}, 
	{sShedinjaGfx25_1, ARRAY_COUNT(sShedinjaGfx25_1)}, 
	{NULL, 32}, 
	{sShedinjaGfx25_2, ARRAY_COUNT(sShedinjaGfx25_2)}, 
	{NULL, 64}, 
	{sShedinjaGfx25_3, ARRAY_COUNT(sShedinjaGfx25_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_26.4bpp.lz");
static const ax_sprite sShedinjaSprites26[] = {
	{sShedinjaGfx26, ARRAY_COUNT(sShedinjaGfx26)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_27.4bpp.lz");
static const ax_sprite sShedinjaSprites27[] = {
	{sShedinjaGfx27, ARRAY_COUNT(sShedinjaGfx27)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_28.4bpp.lz");
static const ax_sprite sShedinjaSprites28[] = {
	{sShedinjaGfx28, ARRAY_COUNT(sShedinjaGfx28)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_29.4bpp.lz");
static const ax_sprite sShedinjaSprites29[] = {
	{sShedinjaGfx29, ARRAY_COUNT(sShedinjaGfx29)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_30.4bpp.lz");
static const ax_sprite sShedinjaSprites30[] = {
	{sShedinjaGfx30, ARRAY_COUNT(sShedinjaGfx30)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_31.4bpp.lz");
static const ax_sprite sShedinjaSprites31[] = {
	{sShedinjaGfx31, ARRAY_COUNT(sShedinjaGfx31)}, 
	{NULL, 0}
};
static const u8 sShedinjaGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shedinja/sprite_32.4bpp.lz");
static const ax_sprite sShedinjaSprites32[] = {
	{sShedinjaGfx32, ARRAY_COUNT(sShedinjaGfx32)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesShedinja[] = {
	sShedinjaPose1,
	sShedinjaPose2,
	sShedinjaPose3,
	sShedinjaPose4,
	sShedinjaPose5,
	sShedinjaPose6,
	sShedinjaPose7,
	sShedinjaPose8,
	sShedinjaPose9,
	sShedinjaPose10,
	sShedinjaPose11,
	sShedinjaPose12,
	sShedinjaPose13,
	sShedinjaPose14,
	sShedinjaPose15,
	sShedinjaPose16,
	sShedinjaPose17,
	sShedinjaPose18,
	sShedinjaPose19,
	sShedinjaPose20,
	sShedinjaPose21,
	sShedinjaPose22,
	sShedinjaPose23,
	sShedinjaPose24,
	sShedinjaPose1,
	sShedinjaPose2,
	sShedinjaPose3,
	sShedinjaPose28,
	sShedinjaPose29,
	sShedinjaPose4,
	sShedinjaPose5,
	sShedinjaPose6,
	sShedinjaPose33,
	sShedinjaPose34,
	sShedinjaPose7,
	sShedinjaPose8,
	sShedinjaPose9,
	sShedinjaPose38,
	sShedinjaPose39,
	sShedinjaPose10,
	sShedinjaPose11,
	sShedinjaPose12,
	sShedinjaPose43,
	sShedinjaPose44,
	sShedinjaPose13,
	sShedinjaPose14,
	sShedinjaPose15,
	sShedinjaPose48,
	sShedinjaPose49,
	sShedinjaPose16,
	sShedinjaPose17,
	sShedinjaPose18,
	sShedinjaPose53,
	sShedinjaPose54,
	sShedinjaPose19,
	sShedinjaPose20,
	sShedinjaPose21,
	sShedinjaPose58,
	sShedinjaPose59,
	sShedinjaPose22,
	sShedinjaPose23,
	sShedinjaPose24,
	sShedinjaPose63,
	sShedinjaPose64,
	sShedinjaPose1,
	sShedinjaPose2,
	sShedinjaPose3,
	sShedinjaPose28,
	sShedinjaPose29,
	sShedinjaPose4,
	sShedinjaPose5,
	sShedinjaPose6,
	sShedinjaPose33,
	sShedinjaPose34,
	sShedinjaPose7,
	sShedinjaPose8,
	sShedinjaPose9,
	sShedinjaPose38,
	sShedinjaPose39,
	sShedinjaPose10,
	sShedinjaPose11,
	sShedinjaPose12,
	sShedinjaPose43,
	sShedinjaPose44,
	sShedinjaPose13,
	sShedinjaPose14,
	sShedinjaPose15,
	sShedinjaPose48,
	sShedinjaPose49,
	sShedinjaPose16,
	sShedinjaPose17,
	sShedinjaPose18,
	sShedinjaPose53,
	sShedinjaPose54,
	sShedinjaPose19,
	sShedinjaPose20,
	sShedinjaPose21,
	sShedinjaPose58,
	sShedinjaPose59,
	sShedinjaPose22,
	sShedinjaPose23,
	sShedinjaPose24,
	sShedinjaPose63,
	sShedinjaPose64,
	sShedinjaPose1,
	sShedinjaPose28,
	sShedinjaPose29,
	sShedinjaPose4,
	sShedinjaPose33,
	sShedinjaPose34,
	sShedinjaPose7,
	sShedinjaPose38,
	sShedinjaPose39,
	sShedinjaPose10,
	sShedinjaPose43,
	sShedinjaPose44,
	sShedinjaPose13,
	sShedinjaPose48,
	sShedinjaPose49,
	sShedinjaPose16,
	sShedinjaPose53,
	sShedinjaPose54,
	sShedinjaPose19,
	sShedinjaPose58,
	sShedinjaPose59,
	sShedinjaPose22,
	sShedinjaPose63,
	sShedinjaPose64,
	sShedinjaPose1,
	sShedinjaPose28,
	sShedinjaPose4,
	sShedinjaPose33,
	sShedinjaPose7,
	sShedinjaPose38,
	sShedinjaPose10,
	sShedinjaPose136,
	sShedinjaPose13,
	sShedinjaPose48,
	sShedinjaPose16,
	sShedinjaPose140,
	sShedinjaPose19,
	sShedinjaPose58,
	sShedinjaPose22,
	sShedinjaPose63,
	sShedinjaPose145,
	sShedinjaPose146,
	sShedinjaPose147,
	sShedinjaPose148,
	sShedinjaPose149,
	sShedinjaPose150,
	sShedinjaPose151,
	sShedinjaPose152,
	sShedinjaPose153,
	sShedinjaPose154,
	sShedinjaPose1,
	sShedinjaPose2,
	sShedinjaPose3,
	sShedinjaPose4,
	sShedinjaPose5,
	sShedinjaPose6,
	sShedinjaPose7,
	sShedinjaPose8,
	sShedinjaPose9,
	sShedinjaPose10,
	sShedinjaPose11,
	sShedinjaPose12,
	sShedinjaPose13,
	sShedinjaPose14,
	sShedinjaPose15,
	sShedinjaPose16,
	sShedinjaPose17,
	sShedinjaPose18,
	sShedinjaPose19,
	sShedinjaPose20,
	sShedinjaPose21,
	sShedinjaPose22,
	sShedinjaPose23,
	sShedinjaPose24,
	sShedinjaPose29,
	sShedinjaPose64,
	sShedinjaPose181,
	sShedinjaPose182,
	sShedinjaPose183,
	sShedinjaPose184,
	sShedinjaPose185,
	sShedinjaPose34,
	sShedinjaPose28,
	sShedinjaPose33,
	sShedinjaPose38,
	sShedinjaPose136,
	sShedinjaPose48,
	sShedinjaPose140,
	sShedinjaPose58,
	sShedinjaPose63,
	sShedinjaPose1,
	sShedinjaPose28,
	sShedinjaPose197,
	sShedinjaPose4,
	sShedinjaPose199,
	sShedinjaPose200,
	sShedinjaPose7,
	sShedinjaPose202,
	sShedinjaPose203,
	sShedinjaPose10,
	sShedinjaPose136,
	sShedinjaPose206,
	sShedinjaPose13,
	sShedinjaPose48,
	sShedinjaPose49,
	sShedinjaPose16,
	sShedinjaPose140,
	sShedinjaPose212,
	sShedinjaPose19,
	sShedinjaPose214,
	sShedinjaPose215,
	sShedinjaPose22,
	sShedinjaPose217,
	sShedinjaPose218,
	sShedinjaPose29,
	sShedinjaPose64,
	sShedinjaPose181,
	sShedinjaPose182,
	sShedinjaPose183,
	sShedinjaPose184,
	sShedinjaPose185,
	sShedinjaPose34,
	sShedinjaPose1,
	sShedinjaPose22,
	sShedinjaPose19,
	sShedinjaPose16,
	sShedinjaPose231,
	sShedinjaPose10,
	sShedinjaPose7,
	sShedinjaPose4,
};

static const struct PositionSets sAxPositionsShedinja[] = {
	[0] = { .set = { {0, -10}, {-4, -9}, {4, -9}, {0, -13} } },
	[1] = { .set = { {0, -10}, {-4, -9}, {4, -9}, {0, -12} } },
	[2] = { .set = { {0, -10}, {-4, -9}, {4, -9}, {0, -12} } },
	[3] = { .set = { {5, -11}, {3, -11}, {-3, -9}, {-1, -12} } },
	[4] = { .set = { {5, -11}, {3, -11}, {-3, -9}, {-1, -12} } },
	[5] = { .set = { {5, -11}, {3, -11}, {-3, -9}, {-1, -12} } },
	[6] = { .set = { {5, -11}, {1, -14}, {0, -9}, {0, -13} } },
	[7] = { .set = { {5, -11}, {1, -14}, {0, -9}, {0, -13} } },
	[8] = { .set = { {5, -11}, {1, -14}, {0, -9}, {0, -13} } },
	[9] = { .set = { {6, -16}, {-4, -14}, {2, -12}, {-2, -15} } },
	[10] = { .set = { {6, -16}, {-4, -14}, {2, -12}, {-2, -15} } },
	[11] = { .set = { {6, -16}, {-4, -14}, {2, -12}, {-2, -15} } },
	[12] = { .set = { {0, -16}, {4, -14}, {-4, -14}, {0, -15} } },
	[13] = { .set = { {0, -16}, {4, -14}, {-4, -14}, {0, -15} } },
	[14] = { .set = { {0, -16}, {4, -14}, {-4, -14}, {0, -15} } },
	[15] = { .set = { {-7, -16}, {3, -14}, {-3, -12}, {1, -15} } },
	[16] = { .set = { {-7, -16}, {3, -14}, {-3, -12}, {1, -15} } },
	[17] = { .set = { {-7, -16}, {3, -14}, {-3, -12}, {1, -15} } },
	[18] = { .set = { {-6, -11}, {-2, -14}, {-1, -9}, {-1, -13} } },
	[19] = { .set = { {-6, -11}, {-2, -14}, {-1, -9}, {-1, -13} } },
	[20] = { .set = { {-6, -11}, {-2, -14}, {-1, -9}, {-1, -13} } },
	[21] = { .set = { {-6, -11}, {-4, -11}, {2, -9}, {0, -12} } },
	[22] = { .set = { {-6, -11}, {-4, -11}, {2, -9}, {0, -12} } },
	[23] = { .set = { {-6, -11}, {-4, -11}, {2, -9}, {0, -12} } },
	[24] = { .set = { {0, -10}, {-4, -9}, {4, -9}, {0, -13} } },
	[25] = { .set = { {0, -10}, {-4, -9}, {4, -9}, {0, -12} } },
	[26] = { .set = { {0, -10}, {-4, -9}, {4, -9}, {0, -12} } },
	[27] = { .set = { {0, -12}, {-4, -10}, {4, -10}, {0, -14} } },
	[28] = { .set = { {0, -8}, {-4, -8}, {4, -8}, {0, -12} } },
	[29] = { .set = { {5, -11}, {3, -11}, {-3, -9}, {-1, -12} } },
	[30] = { .set = { {5, -11}, {3, -11}, {-3, -9}, {-1, -12} } },
	[31] = { .set = { {5, -11}, {3, -11}, {-3, -9}, {-1, -12} } },
	[32] = { .set = { {4, -13}, {5, -11}, {-1, -10}, {0, -13} } },
	[33] = { .set = { {5, -7}, {3, -11}, {-3, -8}, {-1, -11} } },
	[34] = { .set = { {5, -11}, {1, -14}, {0, -9}, {0, -13} } },
	[35] = { .set = { {5, -11}, {1, -14}, {0, -9}, {0, -13} } },
	[36] = { .set = { {5, -11}, {1, -14}, {0, -9}, {0, -13} } },
	[37] = { .set = { {4, -13}, {2, -13}, {2, -10}, {-1, -13} } },
	[38] = { .set = { {6, -9}, {0, -11}, {1, -8}, {1, -13} } },
	[39] = { .set = { {6, -16}, {-4, -14}, {2, -12}, {-2, -15} } },
	[40] = { .set = { {6, -16}, {-4, -14}, {2, -12}, {-2, -15} } },
	[41] = { .set = { {6, -16}, {-4, -14}, {2, -12}, {-2, -15} } },
	[42] = { .set = { {3, -15}, {-4, -13}, {2, -12}, {-3, -15} } },
	[43] = { .set = { {5, -14}, {-1, -15}, {2, -10}, {-1, -16} } },
	[44] = { .set = { {0, -16}, {4, -14}, {-4, -14}, {0, -15} } },
	[45] = { .set = { {0, -16}, {4, -14}, {-4, -14}, {0, -15} } },
	[46] = { .set = { {0, -16}, {4, -14}, {-4, -14}, {0, -15} } },
	[47] = { .set = { {0, -17}, {4, -13}, {-4, -13}, {0, -14} } },
	[48] = { .set = { {0, -15}, {4, -13}, {-4, -13}, {0, -16} } },
	[49] = { .set = { {-7, -16}, {3, -14}, {-3, -12}, {1, -15} } },
	[50] = { .set = { {-7, -16}, {3, -14}, {-3, -12}, {1, -15} } },
	[51] = { .set = { {-7, -16}, {3, -14}, {-3, -12}, {1, -15} } },
	[52] = { .set = { {-4, -15}, {3, -13}, {-3, -12}, {2, -15} } },
	[53] = { .set = { {-6, -14}, {0, -15}, {-3, -10}, {0, -16} } },
	[54] = { .set = { {-6, -11}, {-2, -14}, {-1, -9}, {-1, -13} } },
	[55] = { .set = { {-6, -11}, {-2, -14}, {-1, -9}, {-1, -13} } },
	[56] = { .set = { {-6, -11}, {-2, -14}, {-1, -9}, {-1, -13} } },
	[57] = { .set = { {-5, -13}, {-3, -13}, {-3, -10}, {0, -13} } },
	[58] = { .set = { {-7, -9}, {-1, -11}, {-2, -8}, {-2, -13} } },
	[59] = { .set = { {-6, -11}, {-4, -11}, {2, -9}, {0, -12} } },
	[60] = { .set = { {-6, -11}, {-4, -11}, {2, -9}, {0, -12} } },
	[61] = { .set = { {-6, -11}, {-4, -11}, {2, -9}, {0, -12} } },
	[62] = { .set = { {-5, -13}, {-6, -11}, {0, -10}, {-1, -13} } },
	[63] = { .set = { {-6, -7}, {-4, -11}, {2, -8}, {0, -11} } },
	[64] = { .set = { {0, -10}, {-4, -9}, {4, -9}, {0, -13} } },
	[65] = { .set = { {0, -10}, {-4, -9}, {4, -9}, {0, -12} } },
	[66] = { .set = { {0, -10}, {-4, -9}, {4, -9}, {0, -12} } },
	[67] = { .set = { {0, -12}, {-4, -10}, {4, -10}, {0, -14} } },
	[68] = { .set = { {0, -8}, {-4, -8}, {4, -8}, {0, -12} } },
	[69] = { .set = { {5, -11}, {3, -11}, {-3, -9}, {-1, -12} } },
	[70] = { .set = { {5, -11}, {3, -11}, {-3, -9}, {-1, -12} } },
	[71] = { .set = { {5, -11}, {3, -11}, {-3, -9}, {-1, -12} } },
	[72] = { .set = { {4, -13}, {5, -11}, {-1, -10}, {0, -13} } },
	[73] = { .set = { {5, -7}, {3, -11}, {-3, -8}, {-1, -11} } },
	[74] = { .set = { {5, -11}, {1, -14}, {0, -9}, {0, -13} } },
	[75] = { .set = { {5, -11}, {1, -14}, {0, -9}, {0, -13} } },
	[76] = { .set = { {5, -11}, {1, -14}, {0, -9}, {0, -13} } },
	[77] = { .set = { {4, -13}, {2, -13}, {2, -10}, {-1, -13} } },
	[78] = { .set = { {6, -9}, {0, -11}, {1, -8}, {1, -13} } },
	[79] = { .set = { {6, -16}, {-4, -14}, {2, -12}, {-2, -15} } },
	[80] = { .set = { {6, -16}, {-4, -14}, {2, -12}, {-2, -15} } },
	[81] = { .set = { {6, -16}, {-4, -14}, {2, -12}, {-2, -15} } },
	[82] = { .set = { {3, -15}, {-4, -13}, {2, -12}, {-3, -15} } },
	[83] = { .set = { {5, -14}, {-1, -15}, {2, -10}, {-1, -16} } },
	[84] = { .set = { {0, -16}, {4, -14}, {-4, -14}, {0, -15} } },
	[85] = { .set = { {0, -16}, {4, -14}, {-4, -14}, {0, -15} } },
	[86] = { .set = { {0, -16}, {4, -14}, {-4, -14}, {0, -15} } },
	[87] = { .set = { {0, -17}, {4, -13}, {-4, -13}, {0, -14} } },
	[88] = { .set = { {0, -15}, {4, -13}, {-4, -13}, {0, -16} } },
	[89] = { .set = { {-7, -16}, {3, -14}, {-3, -12}, {1, -15} } },
	[90] = { .set = { {-7, -16}, {3, -14}, {-3, -12}, {1, -15} } },
	[91] = { .set = { {-7, -16}, {3, -14}, {-3, -12}, {1, -15} } },
	[92] = { .set = { {-4, -15}, {3, -13}, {-3, -12}, {2, -15} } },
	[93] = { .set = { {-6, -14}, {0, -15}, {-3, -10}, {0, -16} } },
	[94] = { .set = { {-6, -11}, {-2, -14}, {-1, -9}, {-1, -13} } },
	[95] = { .set = { {-6, -11}, {-2, -14}, {-1, -9}, {-1, -13} } },
	[96] = { .set = { {-6, -11}, {-2, -14}, {-1, -9}, {-1, -13} } },
	[97] = { .set = { {-5, -13}, {-3, -13}, {-3, -10}, {0, -13} } },
	[98] = { .set = { {-7, -9}, {-1, -11}, {-2, -8}, {-2, -13} } },
	[99] = { .set = { {-6, -11}, {-4, -11}, {2, -9}, {0, -12} } },
	[100] = { .set = { {-6, -11}, {-4, -11}, {2, -9}, {0, -12} } },
	[101] = { .set = { {-6, -11}, {-4, -11}, {2, -9}, {0, -12} } },
	[102] = { .set = { {-5, -13}, {-6, -11}, {0, -10}, {-1, -13} } },
	[103] = { .set = { {-6, -7}, {-4, -11}, {2, -8}, {0, -11} } },
	[104] = { .set = { {0, -10}, {-4, -9}, {4, -9}, {0, -13} } },
	[105] = { .set = { {0, -12}, {-4, -10}, {4, -10}, {0, -14} } },
	[106] = { .set = { {0, -8}, {-4, -8}, {4, -8}, {0, -12} } },
	[107] = { .set = { {5, -11}, {3, -11}, {-3, -9}, {-1, -12} } },
	[108] = { .set = { {4, -13}, {5, -11}, {-1, -10}, {0, -13} } },
	[109] = { .set = { {5, -7}, {3, -11}, {-3, -8}, {-1, -11} } },
	[110] = { .set = { {5, -11}, {1, -14}, {0, -9}, {0, -13} } },
	[111] = { .set = { {4, -13}, {2, -13}, {2, -10}, {-1, -13} } },
	[112] = { .set = { {6, -9}, {0, -11}, {1, -8}, {1, -13} } },
	[113] = { .set = { {6, -16}, {-4, -14}, {2, -12}, {-2, -15} } },
	[114] = { .set = { {3, -15}, {-4, -13}, {2, -12}, {-3, -15} } },
	[115] = { .set = { {5, -14}, {-1, -15}, {2, -10}, {-1, -16} } },
	[116] = { .set = { {0, -16}, {4, -14}, {-4, -14}, {0, -15} } },
	[117] = { .set = { {0, -17}, {4, -13}, {-4, -13}, {0, -14} } },
	[118] = { .set = { {0, -15}, {4, -13}, {-4, -13}, {0, -16} } },
	[119] = { .set = { {-7, -16}, {3, -14}, {-3, -12}, {1, -15} } },
	[120] = { .set = { {-4, -15}, {3, -13}, {-3, -12}, {2, -15} } },
	[121] = { .set = { {-6, -14}, {0, -15}, {-3, -10}, {0, -16} } },
	[122] = { .set = { {-6, -11}, {-2, -14}, {-1, -9}, {-1, -13} } },
	[123] = { .set = { {-5, -13}, {-3, -13}, {-3, -10}, {0, -13} } },
	[124] = { .set = { {-7, -9}, {-1, -11}, {-2, -8}, {-2, -13} } },
	[125] = { .set = { {-6, -11}, {-4, -11}, {2, -9}, {0, -12} } },
	[126] = { .set = { {-5, -13}, {-6, -11}, {0, -10}, {-1, -13} } },
	[127] = { .set = { {-6, -7}, {-4, -11}, {2, -8}, {0, -11} } },
	[128] = { .set = { {0, -10}, {-4, -9}, {4, -9}, {0, -13} } },
	[129] = { .set = { {0, -12}, {-4, -10}, {4, -10}, {0, -14} } },
	[130] = { .set = { {5, -11}, {3, -11}, {-3, -9}, {-1, -12} } },
	[131] = { .set = { {4, -13}, {5, -11}, {-1, -10}, {0, -13} } },
	[132] = { .set = { {5, -11}, {1, -14}, {0, -9}, {0, -13} } },
	[133] = { .set = { {4, -13}, {2, -13}, {2, -10}, {-1, -13} } },
	[134] = { .set = { {6, -16}, {-4, -14}, {2, -12}, {-2, -15} } },
	[135] = { .set = { {4, -15}, {-3, -13}, {3, -12}, {-2, -15} } },
	[136] = { .set = { {0, -16}, {4, -14}, {-4, -14}, {0, -15} } },
	[137] = { .set = { {0, -17}, {4, -13}, {-4, -13}, {0, -14} } },
	[138] = { .set = { {-7, -16}, {3, -14}, {-3, -12}, {1, -15} } },
	[139] = { .set = { {-5, -15}, {2, -13}, {-4, -12}, {1, -15} } },
	[140] = { .set = { {-6, -11}, {-2, -14}, {-1, -9}, {-1, -13} } },
	[141] = { .set = { {-5, -13}, {-3, -13}, {-3, -10}, {0, -13} } },
	[142] = { .set = { {-6, -11}, {-4, -11}, {2, -9}, {0, -12} } },
	[143] = { .set = { {-5, -13}, {-6, -11}, {0, -10}, {-1, -13} } },
	[144] = { .set = { {-6, -10}, {-6, -11}, {1, -9}, {1, -11} } },
	[145] = { .set = { {-6, -9}, {-6, -10}, {2, -9}, {2, -11} } },
	[146] = { .set = { {-1, -16}, {-5, -14}, {3, -14}, {-1, -15} } },
	[147] = { .set = { {2, -17}, {5, -14}, {-1, -11}, {0, -14} } },
	[148] = { .set = { {2, -15}, {4, -14}, {2, -12}, {-2, -13} } },
	[149] = { .set = { {4, -16}, {-4, -15}, {6, -13}, {-3, -14} } },
	[150] = { .set = { {-1, -15}, {3, -13}, {-5, -13}, {-1, -13} } },
	[151] = { .set = { {-5, -16}, {3, -15}, {-7, -13}, {2, -14} } },
	[152] = { .set = { {-3, -15}, {-5, -14}, {-3, -12}, {1, -13} } },
	[153] = { .set = { {-3, -17}, {-6, -14}, {0, -11}, {-1, -14} } },
	[154] = { .set = { {0, -10}, {-4, -9}, {4, -9}, {0, -13} } },
	[155] = { .set = { {0, -10}, {-4, -9}, {4, -9}, {0, -12} } },
	[156] = { .set = { {0, -10}, {-4, -9}, {4, -9}, {0, -12} } },
	[157] = { .set = { {5, -11}, {3, -11}, {-3, -9}, {-1, -12} } },
	[158] = { .set = { {5, -11}, {3, -11}, {-3, -9}, {-1, -12} } },
	[159] = { .set = { {5, -11}, {3, -11}, {-3, -9}, {-1, -12} } },
	[160] = { .set = { {5, -11}, {1, -14}, {0, -9}, {0, -13} } },
	[161] = { .set = { {5, -11}, {1, -14}, {0, -9}, {0, -13} } },
	[162] = { .set = { {5, -11}, {1, -14}, {0, -9}, {0, -13} } },
	[163] = { .set = { {6, -16}, {-4, -14}, {2, -12}, {-2, -15} } },
	[164] = { .set = { {6, -16}, {-4, -14}, {2, -12}, {-2, -15} } },
	[165] = { .set = { {6, -16}, {-4, -14}, {2, -12}, {-2, -15} } },
	[166] = { .set = { {0, -16}, {4, -14}, {-4, -14}, {0, -15} } },
	[167] = { .set = { {0, -16}, {4, -14}, {-4, -14}, {0, -15} } },
	[168] = { .set = { {0, -16}, {4, -14}, {-4, -14}, {0, -15} } },
	[169] = { .set = { {-7, -16}, {3, -14}, {-3, -12}, {1, -15} } },
	[170] = { .set = { {-7, -16}, {3, -14}, {-3, -12}, {1, -15} } },
	[171] = { .set = { {-7, -16}, {3, -14}, {-3, -12}, {1, -15} } },
	[172] = { .set = { {-6, -11}, {-2, -14}, {-1, -9}, {-1, -13} } },
	[173] = { .set = { {-6, -11}, {-2, -14}, {-1, -9}, {-1, -13} } },
	[174] = { .set = { {-6, -11}, {-2, -14}, {-1, -9}, {-1, -13} } },
	[175] = { .set = { {-6, -11}, {-4, -11}, {2, -9}, {0, -12} } },
	[176] = { .set = { {-6, -11}, {-4, -11}, {2, -9}, {0, -12} } },
	[177] = { .set = { {-6, -11}, {-4, -11}, {2, -9}, {0, -12} } },
	[178] = { .set = { {0, -8}, {-4, -8}, {4, -8}, {0, -12} } },
	[179] = { .set = { {-6, -7}, {-4, -11}, {2, -8}, {0, -11} } },
	[180] = { .set = { {-7, -8}, {-1, -10}, {-2, -7}, {-2, -12} } },
	[181] = { .set = { {-7, -12}, {-1, -13}, {-4, -8}, {-1, -14} } },
	[182] = { .set = { {0, -14}, {4, -12}, {-4, -12}, {0, -15} } },
	[183] = { .set = { {6, -12}, {0, -13}, {3, -8}, {0, -14} } },
	[184] = { .set = { {6, -8}, {0, -10}, {1, -7}, {1, -12} } },
	[185] = { .set = { {5, -7}, {3, -11}, {-3, -8}, {-1, -11} } },
	[186] = { .set = { {0, -12}, {-4, -10}, {4, -10}, {0, -14} } },
	[187] = { .set = { {4, -13}, {5, -11}, {-1, -10}, {0, -13} } },
	[188] = { .set = { {4, -13}, {2, -13}, {2, -10}, {-1, -13} } },
	[189] = { .set = { {4, -15}, {-3, -13}, {3, -12}, {-2, -15} } },
	[190] = { .set = { {0, -17}, {4, -13}, {-4, -13}, {0, -14} } },
	[191] = { .set = { {-5, -15}, {2, -13}, {-4, -12}, {1, -15} } },
	[192] = { .set = { {-5, -13}, {-3, -13}, {-3, -10}, {0, -13} } },
	[193] = { .set = { {-5, -13}, {-6, -11}, {0, -10}, {-1, -13} } },
	[194] = { .set = { {0, -10}, {-4, -9}, {4, -9}, {0, -13} } },
	[195] = { .set = { {0, -12}, {-4, -10}, {4, -10}, {0, -14} } },
	[196] = { .set = { {0, -9}, {-4, -9}, {4, -9}, {0, -13} } },
	[197] = { .set = { {5, -11}, {3, -11}, {-3, -9}, {-1, -12} } },
	[198] = { .set = { {3, -13}, {4, -11}, {-2, -10}, {-1, -13} } },
	[199] = { .set = { {4, -8}, {2, -12}, {-4, -9}, {-2, -12} } },
	[200] = { .set = { {5, -11}, {1, -14}, {0, -9}, {0, -13} } },
	[201] = { .set = { {3, -13}, {1, -13}, {1, -10}, {-2, -13} } },
	[202] = { .set = { {5, -9}, {-1, -11}, {0, -8}, {0, -13} } },
	[203] = { .set = { {6, -16}, {-4, -14}, {2, -12}, {-2, -15} } },
	[204] = { .set = { {4, -15}, {-3, -13}, {3, -12}, {-2, -15} } },
	[205] = { .set = { {4, -14}, {-2, -15}, {1, -10}, {-2, -16} } },
	[206] = { .set = { {0, -16}, {4, -14}, {-4, -14}, {0, -15} } },
	[207] = { .set = { {0, -17}, {4, -13}, {-4, -13}, {0, -14} } },
	[208] = { .set = { {0, -15}, {4, -13}, {-4, -13}, {0, -16} } },
	[209] = { .set = { {-7, -16}, {3, -14}, {-3, -12}, {1, -15} } },
	[210] = { .set = { {-5, -15}, {2, -13}, {-4, -12}, {1, -15} } },
	[211] = { .set = { {-5, -14}, {1, -15}, {-2, -10}, {1, -16} } },
	[212] = { .set = { {-6, -11}, {-2, -14}, {-1, -9}, {-1, -13} } },
	[213] = { .set = { {-4, -13}, {-2, -13}, {-2, -10}, {1, -13} } },
	[214] = { .set = { {-6, -9}, {0, -11}, {-1, -8}, {-1, -13} } },
	[215] = { .set = { {-6, -11}, {-4, -11}, {2, -9}, {0, -12} } },
	[216] = { .set = { {-4, -13}, {-5, -11}, {1, -10}, {0, -13} } },
	[217] = { .set = { {-5, -8}, {-3, -12}, {3, -9}, {1, -12} } },
	[218] = { .set = { {0, -8}, {-4, -8}, {4, -8}, {0, -12} } },
	[219] = { .set = { {-6, -7}, {-4, -11}, {2, -8}, {0, -11} } },
	[220] = { .set = { {-7, -8}, {-1, -10}, {-2, -7}, {-2, -12} } },
	[221] = { .set = { {-7, -12}, {-1, -13}, {-4, -8}, {-1, -14} } },
	[222] = { .set = { {0, -14}, {4, -12}, {-4, -12}, {0, -15} } },
	[223] = { .set = { {6, -12}, {0, -13}, {3, -8}, {0, -14} } },
	[224] = { .set = { {6, -8}, {0, -10}, {1, -7}, {1, -12} } },
	[225] = { .set = { {5, -7}, {3, -11}, {-3, -8}, {-1, -11} } },
	[226] = { .set = { {0, -10}, {-4, -9}, {4, -9}, {0, -13} } },
	[227] = { .set = { {-6, -11}, {-4, -11}, {2, -9}, {0, -12} } },
	[228] = { .set = { {-6, -11}, {-2, -14}, {-1, -9}, {-1, -13} } },
	[229] = { .set = { {-7, -16}, {3, -14}, {-3, -12}, {1, -15} } },
	[230] = { .set = { {0, -15}, {4, -13}, {-4, -13}, {0, -14} } },
	[231] = { .set = { {6, -16}, {-4, -14}, {2, -12}, {-2, -15} } },
	[232] = { .set = { {5, -11}, {1, -14}, {0, -9}, {0, -13} } },
	[233] = { .set = { {5, -11}, {3, -11}, {-3, -9}, {-1, -12} } },
};

static const ax_anim *const sShedinjaAnimTable1[] = {
	AX_ANIM_PTR(sShedinjaAnims_1_1),
	AX_ANIM_PTR(sShedinjaAnims_1_2),
	AX_ANIM_PTR(sShedinjaAnims_1_3),
	AX_ANIM_PTR(sShedinjaAnims_1_4),
	AX_ANIM_PTR(sShedinjaAnims_1_5),
	AX_ANIM_PTR(sShedinjaAnims_1_6),
	AX_ANIM_PTR(sShedinjaAnims_1_7),
	AX_ANIM_PTR(sShedinjaAnims_1_8),
};

static const ax_anim *const sShedinjaAnimTable2[] = {
	AX_ANIM_PTR(sShedinjaAnims_2_1),
	AX_ANIM_PTR(sShedinjaAnims_2_2),
	AX_ANIM_PTR(sShedinjaAnims_2_3),
	AX_ANIM_PTR(sShedinjaAnims_2_4),
	AX_ANIM_PTR(sShedinjaAnims_2_5),
	AX_ANIM_PTR(sShedinjaAnims_2_6),
	AX_ANIM_PTR(sShedinjaAnims_2_7),
	AX_ANIM_PTR(sShedinjaAnims_2_8),
};

static const ax_anim *const sShedinjaAnimTable3[] = {
	AX_ANIM_PTR(sShedinjaAnims_3_1),
	AX_ANIM_PTR(sShedinjaAnims_3_2),
	AX_ANIM_PTR(sShedinjaAnims_3_3),
	AX_ANIM_PTR(sShedinjaAnims_3_4),
	AX_ANIM_PTR(sShedinjaAnims_3_5),
	AX_ANIM_PTR(sShedinjaAnims_3_6),
	AX_ANIM_PTR(sShedinjaAnims_3_7),
	AX_ANIM_PTR(sShedinjaAnims_3_8),
};

static const ax_anim *const sShedinjaAnimTable4[] = {
	AX_ANIM_PTR(sShedinjaAnims_4_1),
	AX_ANIM_PTR(gAxSharedAnim_00208),
	AX_ANIM_PTR(gAxSharedAnim_00239),
	AX_ANIM_PTR(gAxSharedAnim_00262),
	AX_ANIM_PTR(sShedinjaAnims_4_5),
	AX_ANIM_PTR(gAxSharedAnim_00323),
	AX_ANIM_PTR(gAxSharedAnim_00346),
	AX_ANIM_PTR(gAxSharedAnim_00371),
};

static const ax_anim *const sShedinjaAnimTable5[] = {
	AX_ANIM_PTR(sShedinjaAnims_5_1),
	AX_ANIM_PTR(sShedinjaAnims_5_2),
	AX_ANIM_PTR(sShedinjaAnims_5_3),
	AX_ANIM_PTR(sShedinjaAnims_5_4),
	AX_ANIM_PTR(sShedinjaAnims_5_5),
	AX_ANIM_PTR(sShedinjaAnims_5_6),
	AX_ANIM_PTR(sShedinjaAnims_5_7),
	AX_ANIM_PTR(sShedinjaAnims_5_8),
};

static const ax_anim *const sShedinjaAnimTable6[] = {
	AX_ANIM_PTR(sShedinjaAnims_6_1),
	AX_ANIM_PTR(sShedinjaAnims_6_1),
	AX_ANIM_PTR(sShedinjaAnims_6_1),
	AX_ANIM_PTR(sShedinjaAnims_6_1),
	AX_ANIM_PTR(sShedinjaAnims_6_1),
	AX_ANIM_PTR(sShedinjaAnims_6_1),
	AX_ANIM_PTR(sShedinjaAnims_6_1),
	AX_ANIM_PTR(sShedinjaAnims_6_1),
};

static const ax_anim *const sShedinjaAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00532),
	AX_ANIM_PTR(gAxSharedAnim_00544),
	AX_ANIM_PTR(gAxSharedAnim_00552),
	AX_ANIM_PTR(gAxSharedAnim_00560),
	AX_ANIM_PTR(gAxSharedAnim_00578),
	AX_ANIM_PTR(gAxSharedAnim_00588),
	AX_ANIM_PTR(gAxSharedAnim_00597),
	AX_ANIM_PTR(gAxSharedAnim_00603),
};

static const ax_anim *const sShedinjaAnimTable8[] = {
	AX_ANIM_PTR(sShedinjaAnims_8_1),
	AX_ANIM_PTR(sShedinjaAnims_8_2),
	AX_ANIM_PTR(sShedinjaAnims_8_3),
	AX_ANIM_PTR(sShedinjaAnims_8_4),
	AX_ANIM_PTR(sShedinjaAnims_8_5),
	AX_ANIM_PTR(sShedinjaAnims_8_6),
	AX_ANIM_PTR(sShedinjaAnims_8_7),
	AX_ANIM_PTR(sShedinjaAnims_8_8),
};

static const ax_anim *const sShedinjaAnimTable9[] = {
	AX_ANIM_PTR(sShedinjaAnims_9_1),
	AX_ANIM_PTR(sShedinjaAnims_9_2),
	AX_ANIM_PTR(sShedinjaAnims_9_3),
	AX_ANIM_PTR(sShedinjaAnims_9_4),
	AX_ANIM_PTR(sShedinjaAnims_9_5),
	AX_ANIM_PTR(sShedinjaAnims_9_6),
	AX_ANIM_PTR(sShedinjaAnims_9_7),
	AX_ANIM_PTR(sShedinjaAnims_9_8),
};

static const ax_anim *const sShedinjaAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01016),
	AX_ANIM_PTR(gAxSharedAnim_01027),
	AX_ANIM_PTR(gAxSharedAnim_01046),
	AX_ANIM_PTR(gAxSharedAnim_01061),
	AX_ANIM_PTR(gAxSharedAnim_01078),
	AX_ANIM_PTR(gAxSharedAnim_01092),
	AX_ANIM_PTR(gAxSharedAnim_01110),
	AX_ANIM_PTR(gAxSharedAnim_01124),
};

static const ax_anim *const sShedinjaAnimTable11[] = {
	AX_ANIM_PTR(sShedinjaAnims_11_1),
	AX_ANIM_PTR(sShedinjaAnims_11_2),
	AX_ANIM_PTR(sShedinjaAnims_11_3),
	AX_ANIM_PTR(sShedinjaAnims_11_4),
	AX_ANIM_PTR(gAxSharedAnim_01282),
	AX_ANIM_PTR(sShedinjaAnims_11_6),
	AX_ANIM_PTR(sShedinjaAnims_11_7),
	AX_ANIM_PTR(sShedinjaAnims_11_8),
};

static const ax_anim *const sShedinjaAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01423),
	AX_ANIM_PTR(gAxSharedAnim_01467),
	AX_ANIM_PTR(gAxSharedAnim_01458),
	AX_ANIM_PTR(gAxSharedAnim_01449),
	AX_ANIM_PTR(gAxSharedAnim_01448),
	AX_ANIM_PTR(gAxSharedAnim_01444),
	AX_ANIM_PTR(gAxSharedAnim_01432),
	AX_ANIM_PTR(gAxSharedAnim_01424),
};

static const ax_anim *const sShedinjaAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01471),
	AX_ANIM_PTR(gAxSharedAnim_01516),
	AX_ANIM_PTR(gAxSharedAnim_01511),
	AX_ANIM_PTR(gAxSharedAnim_01504),
	AX_ANIM_PTR(gAxSharedAnim_01497),
	AX_ANIM_PTR(gAxSharedAnim_01490),
	AX_ANIM_PTR(gAxSharedAnim_01486),
	AX_ANIM_PTR(gAxSharedAnim_01478),
};

static const ax_anim *const *const sAxAnimationsShedinja[] = {
	sShedinjaAnimTable1,
	sShedinjaAnimTable2,
	sShedinjaAnimTable3,
	sShedinjaAnimTable4,
	sShedinjaAnimTable5,
	sShedinjaAnimTable6,
	sShedinjaAnimTable7,
	sShedinjaAnimTable8,
	sShedinjaAnimTable9,
	sShedinjaAnimTable10,
	sShedinjaAnimTable11,
	sShedinjaAnimTable12,
	sShedinjaAnimTable13,
};

static const ax_sprite *const sAxSpritesShedinja[] = {
	sShedinjaSprites1,
	sShedinjaSprites2,
	sShedinjaSprites3,
	sShedinjaSprites4,
	sShedinjaSprites5,
	sShedinjaSprites6,
	sShedinjaSprites7,
	sShedinjaSprites8,
	sShedinjaSprites9,
	sShedinjaSprites10,
	sShedinjaSprites11,
	sShedinjaSprites12,
	sShedinjaSprites13,
	sShedinjaSprites14,
	sShedinjaSprites15,
	sShedinjaSprites16,
	sShedinjaSprites17,
	sShedinjaSprites18,
	sShedinjaSprites19,
	sShedinjaSprites20,
	sShedinjaSprites21,
	sShedinjaSprites22,
	sShedinjaSprites23,
	sShedinjaSprites24,
	sShedinjaSprites25,
	sShedinjaSprites26,
	sShedinjaSprites27,
	sShedinjaSprites28,
	sShedinjaSprites29,
	sShedinjaSprites30,
	sShedinjaSprites31,
	sShedinjaSprites32,
};

static const axmain sAxMainShedinja = {
	.poses = sAxPosesShedinja,
	.animations = sAxAnimationsShedinja,
	.animCount = ARRAY_COUNT(sAxAnimationsShedinja),
	.spriteData = sAxSpritesShedinja,
	.positions = sAxPositionsShedinja,
};
