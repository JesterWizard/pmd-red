/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainGrowlithe;
const SiroArchive gAxGrowlithe = {"SIRO", &sAxMainGrowlithe};

static const ax_pose sGrowlithePose1[] = {
	AX_POSE(0, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose2[] = {
	AX_POSE(1, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose3[] = {
	AX_POSE(2, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose4[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose5[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose6[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose7[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose8[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose9[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose10[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose11[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose12[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose13[] = {
	AX_POSE(12, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose14[] = {
	AX_POSE(13, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose15[] = {
	AX_POSE(14, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose16[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose17[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose18[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose19[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose20[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose21[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose22[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose23[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose24[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose28[] = {
	AX_POSE(15, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose29[] = {
	AX_POSE(16, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose33[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose34[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose38[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose39[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose43[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose44[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose48[] = {
	AX_POSE(23, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose49[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose53[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose54[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose58[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose59[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose63[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose64[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose108[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose112[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose116[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose120[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose124[] = {
	AX_POSE(29, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose128[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose132[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose136[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose139[] = {
	AX_POSE(30, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose141[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose142[] = {
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose145[] = {
	AX_POSE(32, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose148[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose151[] = {
	AX_POSE(34, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose154[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose157[] = {
	AX_POSE(32, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose159[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose160[] = {
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose161[] = {
	AX_POSE(35, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose162[] = {
	AX_POSE(36, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose163[] = {
	AX_POSE(37, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose164[] = {
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose165[] = {
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose166[] = {
	AX_POSE(40, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose167[] = {
	AX_POSE(41, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose168[] = {
	AX_POSE(40, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose169[] = {
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose170[] = {
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose182[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose183[] = {
	AX_POSE(24, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose184[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose221[] = {
	AX_POSE(32, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose222[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose223[] = {
	AX_POSE(34, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGrowlithePose224[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const u8 sGrowlitheAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_2_1.lz");
static const u8 sGrowlitheAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_2_2.lz");
static const u8 sGrowlitheAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_2_3.lz");
static const u8 sGrowlitheAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_2_4.lz");
static const u8 sGrowlitheAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_2_5.lz");
static const u8 sGrowlitheAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_2_6.lz");
static const u8 sGrowlitheAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_2_7.lz");
static const u8 sGrowlitheAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_2_8.lz");
static const u8 sGrowlitheAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_3_1.lz");
static const u8 sGrowlitheAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_3_2.lz");
static const u8 sGrowlitheAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_3_3.lz");
static const u8 sGrowlitheAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_3_4.lz");
static const u8 sGrowlitheAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_3_5.lz");
static const u8 sGrowlitheAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_3_6.lz");
static const u8 sGrowlitheAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_3_7.lz");
static const u8 sGrowlitheAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_3_8.lz");
static const u8 sGrowlitheAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_4_1.lz");
static const u8 sGrowlitheAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_4_2.lz");
static const u8 sGrowlitheAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_4_3.lz");
static const u8 sGrowlitheAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_4_4.lz");
static const u8 sGrowlitheAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_4_5.lz");
static const u8 sGrowlitheAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_4_6.lz");
static const u8 sGrowlitheAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_4_7.lz");
static const u8 sGrowlitheAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_4_8.lz");
static const u8 sGrowlitheAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_8_1.lz");
static const u8 sGrowlitheAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_8_2.lz");
static const u8 sGrowlitheAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_8_3.lz");
static const u8 sGrowlitheAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_8_4.lz");
static const u8 sGrowlitheAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_8_5.lz");
static const u8 sGrowlitheAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_8_6.lz");
static const u8 sGrowlitheAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_8_7.lz");
static const u8 sGrowlitheAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_8_8.lz");
static const u8 sGrowlitheAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_9_1.lz");
static const u8 sGrowlitheAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_9_2.lz");
static const u8 sGrowlitheAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_9_3.lz");
static const u8 sGrowlitheAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_9_4.lz");
static const u8 sGrowlitheAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_9_5.lz");
static const u8 sGrowlitheAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_9_6.lz");
static const u8 sGrowlitheAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_9_7.lz");
static const u8 sGrowlitheAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/growlithe/sGrowlitheAnims_9_8.lz");

static const u8 sGrowlitheGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_1.4bpp.lz");
static const ax_sprite sGrowlitheSprites1[] = {
	{sGrowlitheGfx1, ARRAY_COUNT(sGrowlitheGfx1)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_2.4bpp.lz");
static const ax_sprite sGrowlitheSprites2[] = {
	{sGrowlitheGfx2, ARRAY_COUNT(sGrowlitheGfx2)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_3.4bpp.lz");
static const ax_sprite sGrowlitheSprites3[] = {
	{sGrowlitheGfx3, ARRAY_COUNT(sGrowlitheGfx3)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_4.4bpp.lz");
static const ax_sprite sGrowlitheSprites4[] = {
	{sGrowlitheGfx4, ARRAY_COUNT(sGrowlitheGfx4)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_5.4bpp.lz");
static const ax_sprite sGrowlitheSprites5[] = {
	{sGrowlitheGfx5, ARRAY_COUNT(sGrowlitheGfx5)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_6.4bpp.lz");
static const ax_sprite sGrowlitheSprites6[] = {
	{sGrowlitheGfx6, ARRAY_COUNT(sGrowlitheGfx6)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_7.4bpp.lz");
static const ax_sprite sGrowlitheSprites7[] = {
	{sGrowlitheGfx7, ARRAY_COUNT(sGrowlitheGfx7)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_8.4bpp.lz");
static const ax_sprite sGrowlitheSprites8[] = {
	{sGrowlitheGfx8, ARRAY_COUNT(sGrowlitheGfx8)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_9.4bpp.lz");
static const ax_sprite sGrowlitheSprites9[] = {
	{sGrowlitheGfx9, ARRAY_COUNT(sGrowlitheGfx9)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_10.4bpp.lz");
static const ax_sprite sGrowlitheSprites10[] = {
	{sGrowlitheGfx10, ARRAY_COUNT(sGrowlitheGfx10)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_11.4bpp.lz");
static const ax_sprite sGrowlitheSprites11[] = {
	{sGrowlitheGfx11, ARRAY_COUNT(sGrowlitheGfx11)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_12.4bpp.lz");
static const ax_sprite sGrowlitheSprites12[] = {
	{sGrowlitheGfx12, ARRAY_COUNT(sGrowlitheGfx12)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_13.4bpp.lz");
static const ax_sprite sGrowlitheSprites13[] = {
	{sGrowlitheGfx13, ARRAY_COUNT(sGrowlitheGfx13)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_14.4bpp.lz");
static const ax_sprite sGrowlitheSprites14[] = {
	{sGrowlitheGfx14, ARRAY_COUNT(sGrowlitheGfx14)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_15.4bpp.lz");
static const ax_sprite sGrowlitheSprites15[] = {
	{sGrowlitheGfx15, ARRAY_COUNT(sGrowlitheGfx15)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_16.4bpp.lz");
static const u8 sGrowlitheGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_16_1.4bpp.lz");
static const u8 sGrowlitheGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_16_2.4bpp.lz");
static const ax_sprite sGrowlitheSprites16[] = {
	{sGrowlitheGfx16, ARRAY_COUNT(sGrowlitheGfx16)}, 
	{NULL, 64}, 
	{sGrowlitheGfx16_1, ARRAY_COUNT(sGrowlitheGfx16_1)}, 
	{NULL, 32}, 
	{sGrowlitheGfx16_2, ARRAY_COUNT(sGrowlitheGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_17.4bpp.lz");
static const u8 sGrowlitheGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_17_1.4bpp.lz");
static const u8 sGrowlitheGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_17_2.4bpp.lz");
static const u8 sGrowlitheGfx17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_17_3.4bpp.lz");
static const ax_sprite sGrowlitheSprites17[] = {
	{sGrowlitheGfx17, ARRAY_COUNT(sGrowlitheGfx17)}, 
	{NULL, 64}, 
	{sGrowlitheGfx17_1, ARRAY_COUNT(sGrowlitheGfx17_1)}, 
	{NULL, 32}, 
	{sGrowlitheGfx17_2, ARRAY_COUNT(sGrowlitheGfx17_2)}, 
	{NULL, 32}, 
	{sGrowlitheGfx17_3, ARRAY_COUNT(sGrowlitheGfx17_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_18.4bpp.lz");
static const u8 sGrowlitheGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_18_1.4bpp.lz");
static const ax_sprite sGrowlitheSprites18[] = {
	{sGrowlitheGfx18, ARRAY_COUNT(sGrowlitheGfx18)}, 
	{NULL, 64}, 
	{sGrowlitheGfx18_1, ARRAY_COUNT(sGrowlitheGfx18_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_19.4bpp.lz");
static const u8 sGrowlitheGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_19_1.4bpp.lz");
static const u8 sGrowlitheGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_19_2.4bpp.lz");
static const u8 sGrowlitheGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_19_3.4bpp.lz");
static const ax_sprite sGrowlitheSprites19[] = {
	{NULL, 32}, 
	{sGrowlitheGfx19, ARRAY_COUNT(sGrowlitheGfx19)}, 
	{NULL, 32}, 
	{sGrowlitheGfx19_1, ARRAY_COUNT(sGrowlitheGfx19_1)}, 
	{NULL, 32}, 
	{sGrowlitheGfx19_2, ARRAY_COUNT(sGrowlitheGfx19_2)}, 
	{NULL, 32}, 
	{sGrowlitheGfx19_3, ARRAY_COUNT(sGrowlitheGfx19_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_20.4bpp.lz");
static const u8 sGrowlitheGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_20_1.4bpp.lz");
static const ax_sprite sGrowlitheSprites20[] = {
	{sGrowlitheGfx20, ARRAY_COUNT(sGrowlitheGfx20)}, 
	{NULL, 64}, 
	{sGrowlitheGfx20_1, ARRAY_COUNT(sGrowlitheGfx20_1)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_21.4bpp.lz");
static const u8 sGrowlitheGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_21_1.4bpp.lz");
static const ax_sprite sGrowlitheSprites21[] = {
	{NULL, 64}, 
	{sGrowlitheGfx21, ARRAY_COUNT(sGrowlitheGfx21)}, 
	{NULL, 32}, 
	{sGrowlitheGfx21_1, ARRAY_COUNT(sGrowlitheGfx21_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_22.4bpp.lz");
static const u8 sGrowlitheGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_22_1.4bpp.lz");
static const u8 sGrowlitheGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_22_2.4bpp.lz");
static const ax_sprite sGrowlitheSprites22[] = {
	{sGrowlitheGfx22, ARRAY_COUNT(sGrowlitheGfx22)}, 
	{NULL, 32}, 
	{sGrowlitheGfx22_1, ARRAY_COUNT(sGrowlitheGfx22_1)}, 
	{NULL, 32}, 
	{sGrowlitheGfx22_2, ARRAY_COUNT(sGrowlitheGfx22_2)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_23.4bpp.lz");
static const u8 sGrowlitheGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_23_1.4bpp.lz");
static const u8 sGrowlitheGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_23_2.4bpp.lz");
static const u8 sGrowlitheGfx23_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_23_3.4bpp.lz");
static const ax_sprite sGrowlitheSprites23[] = {
	{NULL, 32}, 
	{sGrowlitheGfx23, ARRAY_COUNT(sGrowlitheGfx23)}, 
	{NULL, 32}, 
	{sGrowlitheGfx23_1, ARRAY_COUNT(sGrowlitheGfx23_1)}, 
	{NULL, 32}, 
	{sGrowlitheGfx23_2, ARRAY_COUNT(sGrowlitheGfx23_2)}, 
	{NULL, 64}, 
	{sGrowlitheGfx23_3, ARRAY_COUNT(sGrowlitheGfx23_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_24.4bpp.lz");
static const ax_sprite sGrowlitheSprites24[] = {
	{sGrowlitheGfx24, ARRAY_COUNT(sGrowlitheGfx24)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_25.4bpp.lz");
static const u8 sGrowlitheGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_25_1.4bpp.lz");
static const u8 sGrowlitheGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_25_2.4bpp.lz");
static const u8 sGrowlitheGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_25_3.4bpp.lz");
static const ax_sprite sGrowlitheSprites25[] = {
	{sGrowlitheGfx25, ARRAY_COUNT(sGrowlitheGfx25)}, 
	{NULL, 64}, 
	{sGrowlitheGfx25_1, ARRAY_COUNT(sGrowlitheGfx25_1)}, 
	{NULL, 32}, 
	{sGrowlitheGfx25_2, ARRAY_COUNT(sGrowlitheGfx25_2)}, 
	{NULL, 32}, 
	{sGrowlitheGfx25_3, ARRAY_COUNT(sGrowlitheGfx25_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_26.4bpp.lz");
static const u8 sGrowlitheGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_26_1.4bpp.lz");
static const u8 sGrowlitheGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_26_2.4bpp.lz");
static const u8 sGrowlitheGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_26_3.4bpp.lz");
static const ax_sprite sGrowlitheSprites26[] = {
	{sGrowlitheGfx26, ARRAY_COUNT(sGrowlitheGfx26)}, 
	{NULL, 64}, 
	{sGrowlitheGfx26_1, ARRAY_COUNT(sGrowlitheGfx26_1)}, 
	{NULL, 64}, 
	{sGrowlitheGfx26_2, ARRAY_COUNT(sGrowlitheGfx26_2)}, 
	{NULL, 32}, 
	{sGrowlitheGfx26_3, ARRAY_COUNT(sGrowlitheGfx26_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_27.4bpp.lz");
static const u8 sGrowlitheGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_27_1.4bpp.lz");
static const u8 sGrowlitheGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_27_2.4bpp.lz");
static const u8 sGrowlitheGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_27_3.4bpp.lz");
static const ax_sprite sGrowlitheSprites27[] = {
	{NULL, 32}, 
	{sGrowlitheGfx27, ARRAY_COUNT(sGrowlitheGfx27)}, 
	{NULL, 32}, 
	{sGrowlitheGfx27_1, ARRAY_COUNT(sGrowlitheGfx27_1)}, 
	{NULL, 32}, 
	{sGrowlitheGfx27_2, ARRAY_COUNT(sGrowlitheGfx27_2)}, 
	{NULL, 32}, 
	{sGrowlitheGfx27_3, ARRAY_COUNT(sGrowlitheGfx27_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_28.4bpp.lz");
static const ax_sprite sGrowlitheSprites28[] = {
	{sGrowlitheGfx28, ARRAY_COUNT(sGrowlitheGfx28)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_29.4bpp.lz");
static const u8 sGrowlitheGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_29_1.4bpp.lz");
static const u8 sGrowlitheGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_29_2.4bpp.lz");
static const u8 sGrowlitheGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_29_3.4bpp.lz");
static const ax_sprite sGrowlitheSprites29[] = {
	{sGrowlitheGfx29, ARRAY_COUNT(sGrowlitheGfx29)}, 
	{NULL, 96}, 
	{sGrowlitheGfx29_1, ARRAY_COUNT(sGrowlitheGfx29_1)}, 
	{NULL, 32}, 
	{sGrowlitheGfx29_2, ARRAY_COUNT(sGrowlitheGfx29_2)}, 
	{NULL, 32}, 
	{sGrowlitheGfx29_3, ARRAY_COUNT(sGrowlitheGfx29_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_30.4bpp.lz");
static const ax_sprite sGrowlitheSprites30[] = {
	{sGrowlitheGfx30, ARRAY_COUNT(sGrowlitheGfx30)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_31.4bpp.lz");
static const ax_sprite sGrowlitheSprites31[] = {
	{sGrowlitheGfx31, ARRAY_COUNT(sGrowlitheGfx31)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_32.4bpp.lz");
static const u8 sGrowlitheGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_32_1.4bpp.lz");
static const ax_sprite sGrowlitheSprites32[] = {
	{sGrowlitheGfx32, ARRAY_COUNT(sGrowlitheGfx32)}, 
	{NULL, 64}, 
	{sGrowlitheGfx32_1, ARRAY_COUNT(sGrowlitheGfx32_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_33.4bpp.lz");
static const u8 sGrowlitheGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_33_1.4bpp.lz");
static const u8 sGrowlitheGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_33_2.4bpp.lz");
static const u8 sGrowlitheGfx33_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_33_3.4bpp.lz");
static const ax_sprite sGrowlitheSprites33[] = {
	{sGrowlitheGfx33, ARRAY_COUNT(sGrowlitheGfx33)}, 
	{NULL, 32}, 
	{sGrowlitheGfx33_1, ARRAY_COUNT(sGrowlitheGfx33_1)}, 
	{NULL, 32}, 
	{sGrowlitheGfx33_2, ARRAY_COUNT(sGrowlitheGfx33_2)}, 
	{NULL, 32}, 
	{sGrowlitheGfx33_3, ARRAY_COUNT(sGrowlitheGfx33_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_34.4bpp.lz");
static const u8 sGrowlitheGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_34_1.4bpp.lz");
static const u8 sGrowlitheGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_34_2.4bpp.lz");
static const u8 sGrowlitheGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_34_3.4bpp.lz");
static const ax_sprite sGrowlitheSprites34[] = {
	{sGrowlitheGfx34, ARRAY_COUNT(sGrowlitheGfx34)}, 
	{NULL, 32}, 
	{sGrowlitheGfx34_1, ARRAY_COUNT(sGrowlitheGfx34_1)}, 
	{NULL, 32}, 
	{sGrowlitheGfx34_2, ARRAY_COUNT(sGrowlitheGfx34_2)}, 
	{NULL, 32}, 
	{sGrowlitheGfx34_3, ARRAY_COUNT(sGrowlitheGfx34_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_35.4bpp.lz");
static const ax_sprite sGrowlitheSprites35[] = {
	{sGrowlitheGfx35, ARRAY_COUNT(sGrowlitheGfx35)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_36.4bpp.lz");
static const ax_sprite sGrowlitheSprites36[] = {
	{sGrowlitheGfx36, ARRAY_COUNT(sGrowlitheGfx36)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_37.4bpp.lz");
static const ax_sprite sGrowlitheSprites37[] = {
	{sGrowlitheGfx37, ARRAY_COUNT(sGrowlitheGfx37)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_38.4bpp.lz");
static const ax_sprite sGrowlitheSprites38[] = {
	{sGrowlitheGfx38, ARRAY_COUNT(sGrowlitheGfx38)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_39.4bpp.lz");
static const ax_sprite sGrowlitheSprites39[] = {
	{sGrowlitheGfx39, ARRAY_COUNT(sGrowlitheGfx39)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_40.4bpp.lz");
static const ax_sprite sGrowlitheSprites40[] = {
	{sGrowlitheGfx40, ARRAY_COUNT(sGrowlitheGfx40)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_41.4bpp.lz");
static const ax_sprite sGrowlitheSprites41[] = {
	{sGrowlitheGfx41, ARRAY_COUNT(sGrowlitheGfx41)}, 
	{NULL, 0}
};
static const u8 sGrowlitheGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/growlithe/sprite_42.4bpp.lz");
static const ax_sprite sGrowlitheSprites42[] = {
	{sGrowlitheGfx42, ARRAY_COUNT(sGrowlitheGfx42)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesGrowlithe[] = {
	sGrowlithePose1,
	sGrowlithePose2,
	sGrowlithePose3,
	sGrowlithePose4,
	sGrowlithePose5,
	sGrowlithePose6,
	sGrowlithePose7,
	sGrowlithePose8,
	sGrowlithePose9,
	sGrowlithePose10,
	sGrowlithePose11,
	sGrowlithePose12,
	sGrowlithePose13,
	sGrowlithePose14,
	sGrowlithePose15,
	sGrowlithePose16,
	sGrowlithePose17,
	sGrowlithePose18,
	sGrowlithePose19,
	sGrowlithePose20,
	sGrowlithePose21,
	sGrowlithePose22,
	sGrowlithePose23,
	sGrowlithePose24,
	sGrowlithePose1,
	sGrowlithePose2,
	sGrowlithePose3,
	sGrowlithePose28,
	sGrowlithePose29,
	sGrowlithePose4,
	sGrowlithePose5,
	sGrowlithePose6,
	sGrowlithePose33,
	sGrowlithePose34,
	sGrowlithePose7,
	sGrowlithePose8,
	sGrowlithePose9,
	sGrowlithePose38,
	sGrowlithePose39,
	sGrowlithePose10,
	sGrowlithePose11,
	sGrowlithePose12,
	sGrowlithePose43,
	sGrowlithePose44,
	sGrowlithePose13,
	sGrowlithePose14,
	sGrowlithePose15,
	sGrowlithePose48,
	sGrowlithePose49,
	sGrowlithePose16,
	sGrowlithePose17,
	sGrowlithePose18,
	sGrowlithePose53,
	sGrowlithePose54,
	sGrowlithePose19,
	sGrowlithePose20,
	sGrowlithePose21,
	sGrowlithePose58,
	sGrowlithePose59,
	sGrowlithePose22,
	sGrowlithePose23,
	sGrowlithePose24,
	sGrowlithePose63,
	sGrowlithePose64,
	sGrowlithePose1,
	sGrowlithePose2,
	sGrowlithePose3,
	sGrowlithePose28,
	sGrowlithePose29,
	sGrowlithePose4,
	sGrowlithePose5,
	sGrowlithePose6,
	sGrowlithePose33,
	sGrowlithePose34,
	sGrowlithePose7,
	sGrowlithePose8,
	sGrowlithePose9,
	sGrowlithePose38,
	sGrowlithePose39,
	sGrowlithePose10,
	sGrowlithePose11,
	sGrowlithePose12,
	sGrowlithePose43,
	sGrowlithePose44,
	sGrowlithePose13,
	sGrowlithePose14,
	sGrowlithePose15,
	sGrowlithePose48,
	sGrowlithePose49,
	sGrowlithePose16,
	sGrowlithePose17,
	sGrowlithePose18,
	sGrowlithePose53,
	sGrowlithePose54,
	sGrowlithePose19,
	sGrowlithePose20,
	sGrowlithePose21,
	sGrowlithePose58,
	sGrowlithePose59,
	sGrowlithePose22,
	sGrowlithePose23,
	sGrowlithePose24,
	sGrowlithePose63,
	sGrowlithePose64,
	sGrowlithePose1,
	sGrowlithePose2,
	sGrowlithePose3,
	sGrowlithePose108,
	sGrowlithePose4,
	sGrowlithePose5,
	sGrowlithePose6,
	sGrowlithePose112,
	sGrowlithePose7,
	sGrowlithePose8,
	sGrowlithePose9,
	sGrowlithePose116,
	sGrowlithePose10,
	sGrowlithePose11,
	sGrowlithePose12,
	sGrowlithePose120,
	sGrowlithePose13,
	sGrowlithePose14,
	sGrowlithePose15,
	sGrowlithePose124,
	sGrowlithePose16,
	sGrowlithePose17,
	sGrowlithePose18,
	sGrowlithePose128,
	sGrowlithePose19,
	sGrowlithePose20,
	sGrowlithePose21,
	sGrowlithePose132,
	sGrowlithePose22,
	sGrowlithePose23,
	sGrowlithePose24,
	sGrowlithePose136,
	sGrowlithePose1,
	sGrowlithePose28,
	sGrowlithePose139,
	sGrowlithePose4,
	sGrowlithePose141,
	sGrowlithePose142,
	sGrowlithePose7,
	sGrowlithePose38,
	sGrowlithePose145,
	sGrowlithePose10,
	sGrowlithePose43,
	sGrowlithePose148,
	sGrowlithePose13,
	sGrowlithePose48,
	sGrowlithePose151,
	sGrowlithePose16,
	sGrowlithePose53,
	sGrowlithePose154,
	sGrowlithePose19,
	sGrowlithePose58,
	sGrowlithePose157,
	sGrowlithePose22,
	sGrowlithePose159,
	sGrowlithePose160,
	sGrowlithePose161,
	sGrowlithePose162,
	sGrowlithePose163,
	sGrowlithePose164,
	sGrowlithePose165,
	sGrowlithePose166,
	sGrowlithePose167,
	sGrowlithePose168,
	sGrowlithePose169,
	sGrowlithePose170,
	sGrowlithePose139,
	sGrowlithePose142,
	sGrowlithePose145,
	sGrowlithePose148,
	sGrowlithePose151,
	sGrowlithePose154,
	sGrowlithePose157,
	sGrowlithePose160,
	sGrowlithePose29,
	sGrowlithePose64,
	sGrowlithePose59,
	sGrowlithePose182,
	sGrowlithePose183,
	sGrowlithePose184,
	sGrowlithePose39,
	sGrowlithePose34,
	sGrowlithePose108,
	sGrowlithePose112,
	sGrowlithePose116,
	sGrowlithePose120,
	sGrowlithePose124,
	sGrowlithePose128,
	sGrowlithePose132,
	sGrowlithePose136,
	sGrowlithePose1,
	sGrowlithePose28,
	sGrowlithePose29,
	sGrowlithePose4,
	sGrowlithePose33,
	sGrowlithePose34,
	sGrowlithePose7,
	sGrowlithePose38,
	sGrowlithePose39,
	sGrowlithePose10,
	sGrowlithePose43,
	sGrowlithePose44,
	sGrowlithePose13,
	sGrowlithePose48,
	sGrowlithePose49,
	sGrowlithePose16,
	sGrowlithePose53,
	sGrowlithePose54,
	sGrowlithePose19,
	sGrowlithePose58,
	sGrowlithePose59,
	sGrowlithePose22,
	sGrowlithePose63,
	sGrowlithePose64,
	sGrowlithePose139,
	sGrowlithePose160,
	sGrowlithePose221,
	sGrowlithePose222,
	sGrowlithePose223,
	sGrowlithePose224,
	sGrowlithePose145,
	sGrowlithePose142,
	sGrowlithePose1,
	sGrowlithePose22,
	sGrowlithePose19,
	sGrowlithePose16,
	sGrowlithePose13,
	sGrowlithePose10,
	sGrowlithePose7,
	sGrowlithePose4,
};

static const struct PositionSets sAxPositionsGrowlithe[] = {
	[0] = { .set = { {0, -3}, {-5, 2}, {4, 2}, {0, -7} } },
	[1] = { .set = { {0, -2}, {-5, 4}, {3, 1}, {0, -6} } },
	[2] = { .set = { {0, -2}, {-4, 1}, {4, 4}, {-1, -6} } },
	[3] = { .set = { {6, -5}, {7, 0}, {2, 2}, {-1, -8} } },
	[4] = { .set = { {6, -4}, {9, 1}, {-1, 1}, {0, -7} } },
	[5] = { .set = { {6, -4}, {6, 0}, {3, 4}, {0, -7} } },
	[6] = { .set = { {10, -8}, {7, -3}, {5, 1}, {-1, -8} } },
	[7] = { .set = { {10, -7}, {10, -2}, {3, 1}, {-1, -7} } },
	[8] = { .set = { {10, -7}, {1, -2}, {8, 1}, {-1, -7} } },
	[9] = { .set = { {9, -14}, {1, -4}, {6, -2}, {-2, -8} } },
	[10] = { .set = { {9, -13}, {3, -4}, {5, 0}, {-3, -7} } },
	[11] = { .set = { {9, -13}, {-1, -3}, {8, -2}, {-2, -7} } },
	[12] = { .set = { {0, -16}, {3, -6}, {-4, -6}, {0, -11} } },
	[13] = { .set = { {0, -15}, {2, -9}, {-4, -3}, {0, -9} } },
	[14] = { .set = { {0, -15}, {3, -3}, {-4, -9}, {0, -9} } },
	[15] = { .set = { {-10, -14}, {-2, -4}, {-7, -2}, {1, -8} } },
	[16] = { .set = { {-10, -13}, {-4, -4}, {-6, 0}, {2, -7} } },
	[17] = { .set = { {-10, -13}, {0, -3}, {-9, -2}, {1, -7} } },
	[18] = { .set = { {-11, -8}, {-8, -3}, {-6, 1}, {0, -8} } },
	[19] = { .set = { {-11, -7}, {-11, -2}, {-4, 1}, {0, -7} } },
	[20] = { .set = { {-11, -7}, {-2, -2}, {-9, 1}, {0, -7} } },
	[21] = { .set = { {-7, -5}, {-8, 0}, {-3, 2}, {0, -8} } },
	[22] = { .set = { {-7, -4}, {-10, 1}, {0, 1}, {-1, -7} } },
	[23] = { .set = { {-7, -4}, {-7, 0}, {-4, 4}, {-1, -7} } },
	[24] = { .set = { {0, -3}, {-5, 2}, {4, 2}, {0, -7} } },
	[25] = { .set = { {0, -2}, {-5, 4}, {3, 1}, {0, -6} } },
	[26] = { .set = { {0, -2}, {-4, 1}, {4, 4}, {-1, -6} } },
	[27] = { .set = { {0, -9}, {-7, -9}, {6, -9}, {0, -11} } },
	[28] = { .set = { {0, -2}, {-3, 0}, {2, 0}, {0, -11} } },
	[29] = { .set = { {6, -5}, {7, 0}, {2, 2}, {-1, -8} } },
	[30] = { .set = { {6, -4}, {9, 1}, {-1, 1}, {0, -7} } },
	[31] = { .set = { {6, -4}, {6, 0}, {3, 4}, {0, -7} } },
	[32] = { .set = { {8, -8}, {11, -7}, {5, -5}, {0, -10} } },
	[33] = { .set = { {9, -3}, {0, -1}, {-3, 0}, {1, -8} } },
	[34] = { .set = { {10, -8}, {7, -3}, {5, 1}, {-1, -8} } },
	[35] = { .set = { {10, -7}, {10, -2}, {3, 1}, {-1, -7} } },
	[36] = { .set = { {10, -7}, {1, -2}, {8, 1}, {-1, -7} } },
	[37] = { .set = { {10, -10}, {11, -8}, {9, -6}, {-1, -9} } },
	[38] = { .set = { {10, -4}, {1, -1}, {-2, 0}, {0, -10} } },
	[39] = { .set = { {9, -14}, {1, -4}, {6, -2}, {-2, -8} } },
	[40] = { .set = { {9, -13}, {3, -4}, {5, 0}, {-3, -7} } },
	[41] = { .set = { {9, -13}, {-1, -3}, {8, -2}, {-2, -7} } },
	[42] = { .set = { {7, -16}, {0, -13}, {7, -10}, {-3, -11} } },
	[43] = { .set = { {10, -7}, {-4, -2}, {-2, -1}, {1, -10} } },
	[44] = { .set = { {0, -16}, {3, -6}, {-4, -6}, {0, -11} } },
	[45] = { .set = { {0, -15}, {2, -9}, {-4, -3}, {0, -9} } },
	[46] = { .set = { {0, -15}, {3, -3}, {-4, -9}, {0, -9} } },
	[47] = { .set = { {-1, -18}, {6, -13}, {-7, -13}, {-1, -10} } },
	[48] = { .set = { {-1, -14}, {1, -3}, {-2, -3}, {-1, -12} } },
	[49] = { .set = { {-10, -14}, {-2, -4}, {-7, -2}, {1, -8} } },
	[50] = { .set = { {-10, -13}, {-4, -4}, {-6, 0}, {2, -7} } },
	[51] = { .set = { {-10, -13}, {0, -3}, {-9, -2}, {1, -7} } },
	[52] = { .set = { {-8, -16}, {-1, -13}, {-8, -10}, {2, -11} } },
	[53] = { .set = { {-11, -7}, {3, -2}, {1, -1}, {-2, -10} } },
	[54] = { .set = { {-11, -8}, {-8, -3}, {-6, 1}, {0, -8} } },
	[55] = { .set = { {-11, -7}, {-11, -2}, {-4, 1}, {0, -7} } },
	[56] = { .set = { {-11, -7}, {-2, -2}, {-9, 1}, {0, -7} } },
	[57] = { .set = { {-11, -10}, {-12, -8}, {-10, -6}, {0, -9} } },
	[58] = { .set = { {-11, -4}, {-2, -1}, {1, 0}, {-1, -10} } },
	[59] = { .set = { {-7, -5}, {-8, 0}, {-3, 2}, {0, -8} } },
	[60] = { .set = { {-7, -4}, {-10, 1}, {0, 1}, {-1, -7} } },
	[61] = { .set = { {-7, -4}, {-7, 0}, {-4, 4}, {-1, -7} } },
	[62] = { .set = { {-9, -8}, {-12, -7}, {-6, -5}, {-1, -10} } },
	[63] = { .set = { {-10, -3}, {-1, -1}, {2, 0}, {-2, -8} } },
	[64] = { .set = { {0, -3}, {-5, 2}, {4, 2}, {0, -7} } },
	[65] = { .set = { {0, -2}, {-5, 4}, {3, 1}, {0, -6} } },
	[66] = { .set = { {0, -2}, {-4, 1}, {4, 4}, {-1, -6} } },
	[67] = { .set = { {0, -9}, {-7, -9}, {6, -9}, {0, -11} } },
	[68] = { .set = { {0, -2}, {-3, 0}, {2, 0}, {0, -11} } },
	[69] = { .set = { {6, -5}, {7, 0}, {2, 2}, {-1, -8} } },
	[70] = { .set = { {6, -4}, {9, 1}, {-1, 1}, {0, -7} } },
	[71] = { .set = { {6, -4}, {6, 0}, {3, 4}, {0, -7} } },
	[72] = { .set = { {8, -8}, {11, -7}, {5, -5}, {0, -10} } },
	[73] = { .set = { {9, -3}, {0, -1}, {-3, 0}, {1, -8} } },
	[74] = { .set = { {10, -8}, {7, -3}, {5, 1}, {-1, -8} } },
	[75] = { .set = { {10, -7}, {10, -2}, {3, 1}, {-1, -7} } },
	[76] = { .set = { {10, -7}, {1, -2}, {8, 1}, {-1, -7} } },
	[77] = { .set = { {10, -10}, {11, -8}, {9, -6}, {-1, -9} } },
	[78] = { .set = { {10, -4}, {1, -1}, {-2, 0}, {0, -10} } },
	[79] = { .set = { {9, -14}, {1, -4}, {6, -2}, {-2, -8} } },
	[80] = { .set = { {9, -13}, {3, -4}, {5, 0}, {-3, -7} } },
	[81] = { .set = { {9, -13}, {-1, -3}, {8, -2}, {-2, -7} } },
	[82] = { .set = { {7, -16}, {0, -13}, {7, -10}, {-3, -11} } },
	[83] = { .set = { {10, -7}, {-4, -2}, {-2, -1}, {1, -10} } },
	[84] = { .set = { {0, -16}, {3, -6}, {-4, -6}, {0, -11} } },
	[85] = { .set = { {0, -15}, {2, -9}, {-4, -3}, {0, -9} } },
	[86] = { .set = { {0, -15}, {3, -3}, {-4, -9}, {0, -9} } },
	[87] = { .set = { {-1, -18}, {6, -13}, {-7, -13}, {-1, -10} } },
	[88] = { .set = { {-1, -14}, {1, -3}, {-2, -3}, {-1, -12} } },
	[89] = { .set = { {-10, -14}, {-2, -4}, {-7, -2}, {1, -8} } },
	[90] = { .set = { {-10, -13}, {-4, -4}, {-6, 0}, {2, -7} } },
	[91] = { .set = { {-10, -13}, {0, -3}, {-9, -2}, {1, -7} } },
	[92] = { .set = { {-8, -16}, {-1, -13}, {-8, -10}, {2, -11} } },
	[93] = { .set = { {-11, -7}, {3, -2}, {1, -1}, {-2, -10} } },
	[94] = { .set = { {-11, -8}, {-8, -3}, {-6, 1}, {0, -8} } },
	[95] = { .set = { {-11, -7}, {-11, -2}, {-4, 1}, {0, -7} } },
	[96] = { .set = { {-11, -7}, {-2, -2}, {-9, 1}, {0, -7} } },
	[97] = { .set = { {-11, -10}, {-12, -8}, {-10, -6}, {0, -9} } },
	[98] = { .set = { {-11, -4}, {-2, -1}, {1, 0}, {-1, -10} } },
	[99] = { .set = { {-7, -5}, {-8, 0}, {-3, 2}, {0, -8} } },
	[100] = { .set = { {-7, -4}, {-10, 1}, {0, 1}, {-1, -7} } },
	[101] = { .set = { {-7, -4}, {-7, 0}, {-4, 4}, {-1, -7} } },
	[102] = { .set = { {-9, -8}, {-12, -7}, {-6, -5}, {-1, -10} } },
	[103] = { .set = { {-10, -3}, {-1, -1}, {2, 0}, {-2, -8} } },
	[104] = { .set = { {0, -3}, {-5, 2}, {4, 2}, {0, -7} } },
	[105] = { .set = { {0, -2}, {-5, 4}, {3, 1}, {0, -6} } },
	[106] = { .set = { {0, -2}, {-4, 1}, {4, 4}, {-1, -6} } },
	[107] = { .set = { {0, -2}, {-7, 1}, {6, 1}, {0, -10} } },
	[108] = { .set = { {6, -5}, {7, 0}, {2, 2}, {-1, -8} } },
	[109] = { .set = { {6, -4}, {9, 1}, {-1, 1}, {0, -7} } },
	[110] = { .set = { {6, -4}, {6, 0}, {3, 4}, {0, -7} } },
	[111] = { .set = { {9, -4}, {9, -1}, {1, 2}, {0, -7} } },
	[112] = { .set = { {10, -8}, {7, -3}, {5, 1}, {-1, -8} } },
	[113] = { .set = { {10, -7}, {10, -2}, {3, 1}, {-1, -7} } },
	[114] = { .set = { {10, -7}, {1, -2}, {8, 1}, {-1, -7} } },
	[115] = { .set = { {11, -6}, {6, -3}, {4, 1}, {0, -7} } },
	[116] = { .set = { {9, -14}, {1, -4}, {6, -2}, {-2, -8} } },
	[117] = { .set = { {9, -13}, {3, -4}, {5, 0}, {-3, -7} } },
	[118] = { .set = { {9, -13}, {-1, -3}, {8, -2}, {-2, -7} } },
	[119] = { .set = { {10, -11}, {0, -4}, {5, -2}, {0, -8} } },
	[120] = { .set = { {0, -16}, {3, -6}, {-4, -6}, {0, -11} } },
	[121] = { .set = { {0, -15}, {2, -9}, {-4, -3}, {0, -9} } },
	[122] = { .set = { {0, -15}, {3, -3}, {-4, -9}, {0, -9} } },
	[123] = { .set = { {-1, -14}, {4, -14}, {-5, -14}, {-1, -10} } },
	[124] = { .set = { {-10, -14}, {-2, -4}, {-7, -2}, {1, -8} } },
	[125] = { .set = { {-10, -13}, {-4, -4}, {-6, 0}, {2, -7} } },
	[126] = { .set = { {-10, -13}, {0, -3}, {-9, -2}, {1, -7} } },
	[127] = { .set = { {-11, -11}, {-1, -4}, {-6, -2}, {-1, -8} } },
	[128] = { .set = { {-11, -8}, {-8, -3}, {-6, 1}, {0, -8} } },
	[129] = { .set = { {-11, -7}, {-11, -2}, {-4, 1}, {0, -7} } },
	[130] = { .set = { {-11, -7}, {-2, -2}, {-9, 1}, {0, -7} } },
	[131] = { .set = { {-12, -6}, {-7, -3}, {-5, 1}, {-1, -7} } },
	[132] = { .set = { {-7, -5}, {-8, 0}, {-3, 2}, {0, -8} } },
	[133] = { .set = { {-7, -4}, {-10, 1}, {0, 1}, {-1, -7} } },
	[134] = { .set = { {-7, -4}, {-7, 0}, {-4, 4}, {-1, -7} } },
	[135] = { .set = { {-10, -4}, {-10, -1}, {-2, 2}, {-1, -7} } },
	[136] = { .set = { {0, -3}, {-5, 2}, {4, 2}, {0, -7} } },
	[137] = { .set = { {0, -9}, {-7, -9}, {6, -9}, {0, -11} } },
	[138] = { .set = { {0, -8}, {-4, 1}, {3, 1}, {0, -7} } },
	[139] = { .set = { {6, -5}, {7, 0}, {2, 2}, {-1, -8} } },
	[140] = { .set = { {7, -8}, {10, -7}, {4, -5}, {-1, -10} } },
	[141] = { .set = { {5, -9}, {7, -1}, {1, 1}, {-2, -7} } },
	[142] = { .set = { {10, -8}, {7, -3}, {5, 1}, {-1, -8} } },
	[143] = { .set = { {10, -10}, {11, -8}, {9, -6}, {-1, -9} } },
	[144] = { .set = { {8, -10}, {6, -3}, {4, 1}, {-1, -7} } },
	[145] = { .set = { {9, -14}, {1, -4}, {6, -2}, {-2, -8} } },
	[146] = { .set = { {7, -16}, {0, -13}, {7, -10}, {-3, -11} } },
	[147] = { .set = { {6, -14}, {-1, -2}, {4, -1}, {-2, -8} } },
	[148] = { .set = { {0, -16}, {3, -6}, {-4, -6}, {0, -11} } },
	[149] = { .set = { {-1, -18}, {6, -13}, {-7, -13}, {-1, -10} } },
	[150] = { .set = { {-1, -19}, {3, -6}, {-4, -6}, {-1, -10} } },
	[151] = { .set = { {-10, -14}, {-2, -4}, {-7, -2}, {1, -8} } },
	[152] = { .set = { {-8, -16}, {-1, -13}, {-8, -10}, {2, -11} } },
	[153] = { .set = { {-7, -14}, {0, -2}, {-5, -1}, {1, -8} } },
	[154] = { .set = { {-11, -8}, {-8, -3}, {-6, 1}, {0, -8} } },
	[155] = { .set = { {-11, -10}, {-12, -8}, {-10, -6}, {0, -9} } },
	[156] = { .set = { {-7, -10}, {-5, -3}, {-3, 1}, {2, -7} } },
	[157] = { .set = { {-7, -5}, {-8, 0}, {-3, 2}, {0, -8} } },
	[158] = { .set = { {-8, -8}, {-11, -7}, {-5, -5}, {0, -10} } },
	[159] = { .set = { {-6, -9}, {-8, -1}, {-2, 1}, {1, -7} } },
	[160] = { .set = { {-5, 0}, {-10, 0}, {-3, 2}, {0, -7} } },
	[161] = { .set = { {-5, 1}, {-10, 0}, {-3, 2}, {0, -6} } },
	[162] = { .set = { {0, 0}, {-7, 2}, {6, 2}, {0, -8} } },
	[163] = { .set = { {6, -2}, {13, -5}, {2, 0}, {-1, -8} } },
	[164] = { .set = { {8, -4}, {12, -6}, {11, -2}, {-4, -7} } },
	[165] = { .set = { {7, -9}, {3, -11}, {9, -8}, {-4, -5} } },
	[166] = { .set = { {0, -10}, {6, -12}, {-7, -12}, {0, -5} } },
	[167] = { .set = { {-8, -9}, {-4, -11}, {-10, -8}, {3, -5} } },
	[168] = { .set = { {-9, -4}, {-13, -6}, {-12, -2}, {3, -7} } },
	[169] = { .set = { {-7, -2}, {-14, -5}, {-3, 0}, {0, -8} } },
	[170] = { .set = { {0, -8}, {-4, 1}, {3, 1}, {0, -7} } },
	[171] = { .set = { {5, -9}, {7, -1}, {1, 1}, {-2, -7} } },
	[172] = { .set = { {8, -10}, {6, -3}, {4, 1}, {-1, -7} } },
	[173] = { .set = { {6, -14}, {-1, -2}, {4, -1}, {-2, -8} } },
	[174] = { .set = { {-1, -19}, {3, -6}, {-4, -6}, {-1, -10} } },
	[175] = { .set = { {-7, -14}, {0, -2}, {-5, -1}, {1, -8} } },
	[176] = { .set = { {-7, -10}, {-5, -3}, {-3, 1}, {2, -7} } },
	[177] = { .set = { {-6, -9}, {-8, -1}, {-2, 1}, {1, -7} } },
	[178] = { .set = { {0, -2}, {-3, 0}, {2, 0}, {0, -11} } },
	[179] = { .set = { {-10, -3}, {-1, -1}, {2, 0}, {-2, -8} } },
	[180] = { .set = { {-11, -4}, {-2, -1}, {1, 0}, {-1, -10} } },
	[181] = { .set = { {-10, -7}, {4, -2}, {2, -1}, {-1, -10} } },
	[182] = { .set = { {-1, -13}, {1, -2}, {-2, -2}, {-1, -11} } },
	[183] = { .set = { {9, -7}, {-5, -2}, {-3, -1}, {0, -10} } },
	[184] = { .set = { {10, -4}, {1, -1}, {-2, 0}, {0, -10} } },
	[185] = { .set = { {9, -3}, {0, -1}, {-3, 0}, {1, -8} } },
	[186] = { .set = { {0, -2}, {-7, 1}, {6, 1}, {0, -10} } },
	[187] = { .set = { {9, -4}, {9, -1}, {1, 2}, {0, -7} } },
	[188] = { .set = { {11, -6}, {6, -3}, {4, 1}, {0, -7} } },
	[189] = { .set = { {10, -11}, {0, -4}, {5, -2}, {0, -8} } },
	[190] = { .set = { {-1, -14}, {4, -14}, {-5, -14}, {-1, -10} } },
	[191] = { .set = { {-11, -11}, {-1, -4}, {-6, -2}, {-1, -8} } },
	[192] = { .set = { {-12, -6}, {-7, -3}, {-5, 1}, {-1, -7} } },
	[193] = { .set = { {-10, -4}, {-10, -1}, {-2, 2}, {-1, -7} } },
	[194] = { .set = { {0, -3}, {-5, 2}, {4, 2}, {0, -7} } },
	[195] = { .set = { {0, -9}, {-7, -9}, {6, -9}, {0, -11} } },
	[196] = { .set = { {0, -2}, {-3, 0}, {2, 0}, {0, -11} } },
	[197] = { .set = { {6, -5}, {7, 0}, {2, 2}, {-1, -8} } },
	[198] = { .set = { {8, -8}, {11, -7}, {5, -5}, {0, -10} } },
	[199] = { .set = { {9, -3}, {0, -1}, {-3, 0}, {1, -8} } },
	[200] = { .set = { {10, -8}, {7, -3}, {5, 1}, {-1, -8} } },
	[201] = { .set = { {10, -10}, {11, -8}, {9, -6}, {-1, -9} } },
	[202] = { .set = { {10, -4}, {1, -1}, {-2, 0}, {0, -10} } },
	[203] = { .set = { {9, -14}, {1, -4}, {6, -2}, {-2, -8} } },
	[204] = { .set = { {7, -16}, {0, -13}, {7, -10}, {-3, -11} } },
	[205] = { .set = { {10, -7}, {-4, -2}, {-2, -1}, {1, -10} } },
	[206] = { .set = { {0, -16}, {3, -6}, {-4, -6}, {0, -11} } },
	[207] = { .set = { {-1, -18}, {6, -13}, {-7, -13}, {-1, -10} } },
	[208] = { .set = { {-1, -14}, {1, -3}, {-2, -3}, {-1, -12} } },
	[209] = { .set = { {-10, -14}, {-2, -4}, {-7, -2}, {1, -8} } },
	[210] = { .set = { {-8, -16}, {-1, -13}, {-8, -10}, {2, -11} } },
	[211] = { .set = { {-11, -7}, {3, -2}, {1, -1}, {-2, -10} } },
	[212] = { .set = { {-11, -8}, {-8, -3}, {-6, 1}, {0, -8} } },
	[213] = { .set = { {-11, -10}, {-12, -8}, {-10, -6}, {0, -9} } },
	[214] = { .set = { {-11, -4}, {-2, -1}, {1, 0}, {-1, -10} } },
	[215] = { .set = { {-7, -5}, {-8, 0}, {-3, 2}, {0, -8} } },
	[216] = { .set = { {-9, -8}, {-12, -7}, {-6, -5}, {-1, -10} } },
	[217] = { .set = { {-10, -3}, {-1, -1}, {2, 0}, {-2, -8} } },
	[218] = { .set = { {0, -8}, {-4, 1}, {3, 1}, {0, -7} } },
	[219] = { .set = { {-6, -9}, {-8, -1}, {-2, 1}, {1, -7} } },
	[220] = { .set = { {-9, -10}, {-7, -3}, {-5, 1}, {0, -7} } },
	[221] = { .set = { {-8, -14}, {-1, -2}, {-6, -1}, {0, -8} } },
	[222] = { .set = { {-1, -18}, {3, -5}, {-4, -5}, {-1, -9} } },
	[223] = { .set = { {7, -14}, {0, -2}, {5, -1}, {-1, -8} } },
	[224] = { .set = { {8, -10}, {6, -3}, {4, 1}, {-1, -7} } },
	[225] = { .set = { {5, -9}, {7, -1}, {1, 1}, {-2, -7} } },
	[226] = { .set = { {0, -3}, {-5, 2}, {4, 2}, {0, -7} } },
	[227] = { .set = { {-7, -5}, {-8, 0}, {-3, 2}, {0, -8} } },
	[228] = { .set = { {-11, -8}, {-8, -3}, {-6, 1}, {0, -8} } },
	[229] = { .set = { {-10, -14}, {-2, -4}, {-7, -2}, {1, -8} } },
	[230] = { .set = { {0, -16}, {3, -6}, {-4, -6}, {0, -11} } },
	[231] = { .set = { {9, -14}, {1, -4}, {6, -2}, {-2, -8} } },
	[232] = { .set = { {10, -8}, {7, -3}, {5, 1}, {-1, -8} } },
	[233] = { .set = { {6, -5}, {7, 0}, {2, 2}, {-1, -8} } },
};

static const ax_anim *const sGrowlitheAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02477),
	AX_ANIM_PTR(gAxSharedAnim_02542),
	AX_ANIM_PTR(gAxSharedAnim_02551),
	AX_ANIM_PTR(gAxSharedAnim_02559),
	AX_ANIM_PTR(gAxSharedAnim_02499),
	AX_ANIM_PTR(gAxSharedAnim_02519),
	AX_ANIM_PTR(gAxSharedAnim_02526),
	AX_ANIM_PTR(gAxSharedAnim_02535),
};

static const ax_anim *const sGrowlitheAnimTable2[] = {
	AX_ANIM_PTR(sGrowlitheAnims_2_1),
	AX_ANIM_PTR(sGrowlitheAnims_2_2),
	AX_ANIM_PTR(sGrowlitheAnims_2_3),
	AX_ANIM_PTR(sGrowlitheAnims_2_4),
	AX_ANIM_PTR(sGrowlitheAnims_2_5),
	AX_ANIM_PTR(sGrowlitheAnims_2_6),
	AX_ANIM_PTR(sGrowlitheAnims_2_7),
	AX_ANIM_PTR(sGrowlitheAnims_2_8),
};

static const ax_anim *const sGrowlitheAnimTable3[] = {
	AX_ANIM_PTR(sGrowlitheAnims_3_1),
	AX_ANIM_PTR(sGrowlitheAnims_3_2),
	AX_ANIM_PTR(sGrowlitheAnims_3_3),
	AX_ANIM_PTR(sGrowlitheAnims_3_4),
	AX_ANIM_PTR(sGrowlitheAnims_3_5),
	AX_ANIM_PTR(sGrowlitheAnims_3_6),
	AX_ANIM_PTR(sGrowlitheAnims_3_7),
	AX_ANIM_PTR(sGrowlitheAnims_3_8),
};

static const ax_anim *const sGrowlitheAnimTable4[] = {
	AX_ANIM_PTR(sGrowlitheAnims_4_1),
	AX_ANIM_PTR(sGrowlitheAnims_4_2),
	AX_ANIM_PTR(sGrowlitheAnims_4_3),
	AX_ANIM_PTR(sGrowlitheAnims_4_4),
	AX_ANIM_PTR(sGrowlitheAnims_4_5),
	AX_ANIM_PTR(sGrowlitheAnims_4_6),
	AX_ANIM_PTR(sGrowlitheAnims_4_7),
	AX_ANIM_PTR(sGrowlitheAnims_4_8),
};

static const ax_anim *const sGrowlitheAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00456),
	AX_ANIM_PTR(gAxSharedAnim_00491),
	AX_ANIM_PTR(gAxSharedAnim_00514),
	AX_ANIM_PTR(gAxSharedAnim_00539),
	AX_ANIM_PTR(gAxSharedAnim_00565),
	AX_ANIM_PTR(gAxSharedAnim_00592),
	AX_ANIM_PTR(gAxSharedAnim_00621),
	AX_ANIM_PTR(gAxSharedAnim_00650),
};

static const ax_anim *const sGrowlitheAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02371),
	AX_ANIM_PTR(gAxSharedAnim_02371),
	AX_ANIM_PTR(gAxSharedAnim_02371),
	AX_ANIM_PTR(gAxSharedAnim_02371),
	AX_ANIM_PTR(gAxSharedAnim_02371),
	AX_ANIM_PTR(gAxSharedAnim_02371),
	AX_ANIM_PTR(gAxSharedAnim_02371),
	AX_ANIM_PTR(gAxSharedAnim_02371),
};

static const ax_anim *const sGrowlitheAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00693),
	AX_ANIM_PTR(gAxSharedAnim_00709),
	AX_ANIM_PTR(gAxSharedAnim_00717),
	AX_ANIM_PTR(gAxSharedAnim_00730),
	AX_ANIM_PTR(gAxSharedAnim_00752),
	AX_ANIM_PTR(gAxSharedAnim_00763),
	AX_ANIM_PTR(gAxSharedAnim_00775),
	AX_ANIM_PTR(gAxSharedAnim_00785),
};

static const ax_anim *const sGrowlitheAnimTable8[] = {
	AX_ANIM_PTR(sGrowlitheAnims_8_1),
	AX_ANIM_PTR(sGrowlitheAnims_8_2),
	AX_ANIM_PTR(sGrowlitheAnims_8_3),
	AX_ANIM_PTR(sGrowlitheAnims_8_4),
	AX_ANIM_PTR(sGrowlitheAnims_8_5),
	AX_ANIM_PTR(sGrowlitheAnims_8_6),
	AX_ANIM_PTR(sGrowlitheAnims_8_7),
	AX_ANIM_PTR(sGrowlitheAnims_8_8),
};

static const ax_anim *const sGrowlitheAnimTable9[] = {
	AX_ANIM_PTR(sGrowlitheAnims_9_1),
	AX_ANIM_PTR(sGrowlitheAnims_9_2),
	AX_ANIM_PTR(sGrowlitheAnims_9_3),
	AX_ANIM_PTR(sGrowlitheAnims_9_4),
	AX_ANIM_PTR(sGrowlitheAnims_9_5),
	AX_ANIM_PTR(sGrowlitheAnims_9_6),
	AX_ANIM_PTR(sGrowlitheAnims_9_7),
	AX_ANIM_PTR(sGrowlitheAnims_9_8),
};

static const ax_anim *const sGrowlitheAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01016),
	AX_ANIM_PTR(gAxSharedAnim_01027),
	AX_ANIM_PTR(gAxSharedAnim_01046),
	AX_ANIM_PTR(gAxSharedAnim_01061),
	AX_ANIM_PTR(gAxSharedAnim_01078),
	AX_ANIM_PTR(gAxSharedAnim_01092),
	AX_ANIM_PTR(gAxSharedAnim_01110),
	AX_ANIM_PTR(gAxSharedAnim_01124),
};

static const ax_anim *const sGrowlitheAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_01140),
	AX_ANIM_PTR(gAxSharedAnim_01177),
	AX_ANIM_PTR(gAxSharedAnim_01214),
	AX_ANIM_PTR(gAxSharedAnim_01249),
	AX_ANIM_PTR(gAxSharedAnim_01284),
	AX_ANIM_PTR(gAxSharedAnim_01322),
	AX_ANIM_PTR(gAxSharedAnim_01356),
	AX_ANIM_PTR(gAxSharedAnim_01383),
};

static const ax_anim *const sGrowlitheAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01423),
	AX_ANIM_PTR(gAxSharedAnim_01467),
	AX_ANIM_PTR(gAxSharedAnim_01458),
	AX_ANIM_PTR(gAxSharedAnim_01449),
	AX_ANIM_PTR(gAxSharedAnim_01448),
	AX_ANIM_PTR(gAxSharedAnim_01444),
	AX_ANIM_PTR(gAxSharedAnim_01432),
	AX_ANIM_PTR(gAxSharedAnim_01424),
};

static const ax_anim *const sGrowlitheAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01471),
	AX_ANIM_PTR(gAxSharedAnim_01516),
	AX_ANIM_PTR(gAxSharedAnim_01511),
	AX_ANIM_PTR(gAxSharedAnim_01504),
	AX_ANIM_PTR(gAxSharedAnim_01497),
	AX_ANIM_PTR(gAxSharedAnim_01490),
	AX_ANIM_PTR(gAxSharedAnim_01486),
	AX_ANIM_PTR(gAxSharedAnim_01478),
};

static const ax_anim *const *const sAxAnimationsGrowlithe[] = {
	sGrowlitheAnimTable1,
	sGrowlitheAnimTable2,
	sGrowlitheAnimTable3,
	sGrowlitheAnimTable4,
	sGrowlitheAnimTable5,
	sGrowlitheAnimTable6,
	sGrowlitheAnimTable7,
	sGrowlitheAnimTable8,
	sGrowlitheAnimTable9,
	sGrowlitheAnimTable10,
	sGrowlitheAnimTable11,
	sGrowlitheAnimTable12,
	sGrowlitheAnimTable13,
};

static const ax_sprite *const sAxSpritesGrowlithe[] = {
	sGrowlitheSprites1,
	sGrowlitheSprites2,
	sGrowlitheSprites3,
	sGrowlitheSprites4,
	sGrowlitheSprites5,
	sGrowlitheSprites6,
	sGrowlitheSprites7,
	sGrowlitheSprites8,
	sGrowlitheSprites9,
	sGrowlitheSprites10,
	sGrowlitheSprites11,
	sGrowlitheSprites12,
	sGrowlitheSprites13,
	sGrowlitheSprites14,
	sGrowlitheSprites15,
	sGrowlitheSprites16,
	sGrowlitheSprites17,
	sGrowlitheSprites18,
	sGrowlitheSprites19,
	sGrowlitheSprites20,
	sGrowlitheSprites21,
	sGrowlitheSprites22,
	sGrowlitheSprites23,
	sGrowlitheSprites24,
	sGrowlitheSprites25,
	sGrowlitheSprites26,
	sGrowlitheSprites27,
	sGrowlitheSprites28,
	sGrowlitheSprites29,
	sGrowlitheSprites30,
	sGrowlitheSprites31,
	sGrowlitheSprites32,
	sGrowlitheSprites33,
	sGrowlitheSprites34,
	sGrowlitheSprites35,
	sGrowlitheSprites36,
	sGrowlitheSprites37,
	sGrowlitheSprites38,
	sGrowlitheSprites39,
	sGrowlitheSprites40,
	sGrowlitheSprites41,
	sGrowlitheSprites42,
};

static const axmain sAxMainGrowlithe = {
	.poses = sAxPosesGrowlithe,
	.animations = sAxAnimationsGrowlithe,
	.animCount = ARRAY_COUNT(sAxAnimationsGrowlithe),
	.spriteData = sAxSpritesGrowlithe,
	.positions = sAxPositionsGrowlithe,
};
