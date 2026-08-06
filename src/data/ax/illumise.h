/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainIllumise;
const SiroArchive gAxIllumise = {"SIRO", &sAxMainIllumise};

static const ax_pose sIllumisePose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose2[] = {
	AX_POSE(1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose3[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose4[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose5[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose6[] = {
	AX_POSE(5, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose7[] = {
	AX_POSE(6, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose8[] = {
	AX_POSE(7, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose9[] = {
	AX_POSE(8, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose10[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose11[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose12[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose13[] = {
	AX_POSE(12, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose14[] = {
	AX_POSE(13, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose15[] = {
	AX_POSE(14, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose16[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose17[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose18[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose19[] = {
	AX_POSE(6, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose20[] = {
	AX_POSE(7, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose21[] = {
	AX_POSE(8, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose22[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose23[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose24[] = {
	AX_POSE(5, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose36[] = {
	AX_POSE(15, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose37[] = {
	AX_POSE(16, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose41[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose42[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose46[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose47[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose51[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose52[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose56[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose57[] = {
	AX_POSE(24, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose61[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose62[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose66[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose67[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose71[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose72[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose114[] = {
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose115[] = {
	AX_POSE(26, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose117[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose118[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose120[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose121[] = {
	AX_POSE(30, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose123[] = {
	AX_POSE(31, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose124[] = {
	AX_POSE(32, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose126[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose127[] = {
	AX_POSE(34, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose129[] = {
	AX_POSE(31, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose130[] = {
	AX_POSE(32, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose132[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose133[] = {
	AX_POSE(30, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose135[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose136[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose177[] = {
	AX_POSE(35, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose178[] = {
	AX_POSE(36, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose179[] = {
	AX_POSE(37, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose180[] = {
	AX_POSE(38, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose181[] = {
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose182[] = {
	AX_POSE(40, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose183[] = {
	AX_POSE(41, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose184[] = {
	AX_POSE(40, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose185[] = {
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose186[] = {
	AX_POSE(38, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose213[] = {
	AX_POSE(30, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose214[] = {
	AX_POSE(32, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose215[] = {
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose216[] = {
	AX_POSE(32, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose217[] = {
	AX_POSE(30, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose252[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose253[] = {
	AX_POSE(42, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sIllumisePose257[] = {
	AX_POSE(42, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const u8 sIllumiseAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_1_1.lz");
static const u8 sIllumiseAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_1_2.lz");
static const u8 sIllumiseAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_1_3.lz");
static const u8 sIllumiseAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_1_4.lz");
static const u8 sIllumiseAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_1_5.lz");
static const u8 sIllumiseAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_1_6.lz");
static const u8 sIllumiseAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_1_7.lz");
static const u8 sIllumiseAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_1_8.lz");
static const u8 sIllumiseAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_2_1.lz");
static const u8 sIllumiseAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_2_2.lz");
static const u8 sIllumiseAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_2_3.lz");
static const u8 sIllumiseAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_2_4.lz");
static const u8 sIllumiseAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_2_5.lz");
static const u8 sIllumiseAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_2_6.lz");
static const u8 sIllumiseAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_2_7.lz");
static const u8 sIllumiseAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_2_8.lz");
static const u8 sIllumiseAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_3_1.lz");
static const u8 sIllumiseAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_3_2.lz");
static const u8 sIllumiseAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_3_3.lz");
static const u8 sIllumiseAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_3_4.lz");
static const u8 sIllumiseAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_3_5.lz");
static const u8 sIllumiseAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_3_6.lz");
static const u8 sIllumiseAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_3_7.lz");
static const u8 sIllumiseAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_3_8.lz");
static const u8 sIllumiseAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_4_1.lz");
static const u8 sIllumiseAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_4_2.lz");
static const u8 sIllumiseAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_4_4.lz");
static const u8 sIllumiseAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_4_5.lz");
static const u8 sIllumiseAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_4_6.lz");
static const u8 sIllumiseAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_4_8.lz");
static const u8 sIllumiseAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_5_1.lz");
static const u8 sIllumiseAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_5_2.lz");
static const u8 sIllumiseAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_5_3.lz");
static const u8 sIllumiseAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_5_4.lz");
static const u8 sIllumiseAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_5_5.lz");
static const u8 sIllumiseAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_5_6.lz");
static const u8 sIllumiseAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_5_7.lz");
static const u8 sIllumiseAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_5_8.lz");
static const u8 sIllumiseAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_8_1.lz");
static const u8 sIllumiseAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_8_2.lz");
static const u8 sIllumiseAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_8_3.lz");
static const u8 sIllumiseAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_8_4.lz");
static const u8 sIllumiseAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_8_5.lz");
static const u8 sIllumiseAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_8_6.lz");
static const u8 sIllumiseAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_8_7.lz");
static const u8 sIllumiseAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_8_8.lz");
static const u8 sIllumiseAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_9_1.lz");
static const u8 sIllumiseAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_9_2.lz");
static const u8 sIllumiseAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_9_3.lz");
static const u8 sIllumiseAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_9_4.lz");
static const u8 sIllumiseAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_9_5.lz");
static const u8 sIllumiseAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_9_6.lz");
static const u8 sIllumiseAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_9_7.lz");
static const u8 sIllumiseAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_9_8.lz");
static const u8 sIllumiseAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_11_1.lz");
static const u8 sIllumiseAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_11_2.lz");
static const u8 sIllumiseAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_11_3.lz");
static const u8 sIllumiseAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_11_4.lz");
static const u8 sIllumiseAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_11_5.lz");
static const u8 sIllumiseAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_11_6.lz");
static const u8 sIllumiseAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_11_7.lz");
static const u8 sIllumiseAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/illumise/sIllumiseAnims_11_8.lz");

static const u8 sIllumiseGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_1.4bpp.lz");
static const ax_sprite sIllumiseSprites1[] = {
	{sIllumiseGfx1, ARRAY_COUNT(sIllumiseGfx1)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_2.4bpp.lz");
static const ax_sprite sIllumiseSprites2[] = {
	{sIllumiseGfx2, ARRAY_COUNT(sIllumiseGfx2)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_3.4bpp.lz");
static const ax_sprite sIllumiseSprites3[] = {
	{sIllumiseGfx3, ARRAY_COUNT(sIllumiseGfx3)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_4.4bpp.lz");
static const ax_sprite sIllumiseSprites4[] = {
	{sIllumiseGfx4, ARRAY_COUNT(sIllumiseGfx4)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_5.4bpp.lz");
static const ax_sprite sIllumiseSprites5[] = {
	{sIllumiseGfx5, ARRAY_COUNT(sIllumiseGfx5)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_6.4bpp.lz");
static const ax_sprite sIllumiseSprites6[] = {
	{sIllumiseGfx6, ARRAY_COUNT(sIllumiseGfx6)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_7.4bpp.lz");
static const ax_sprite sIllumiseSprites7[] = {
	{sIllumiseGfx7, ARRAY_COUNT(sIllumiseGfx7)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_8.4bpp.lz");
static const ax_sprite sIllumiseSprites8[] = {
	{sIllumiseGfx8, ARRAY_COUNT(sIllumiseGfx8)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_9.4bpp.lz");
static const ax_sprite sIllumiseSprites9[] = {
	{sIllumiseGfx9, ARRAY_COUNT(sIllumiseGfx9)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_10.4bpp.lz");
static const ax_sprite sIllumiseSprites10[] = {
	{sIllumiseGfx10, ARRAY_COUNT(sIllumiseGfx10)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_11.4bpp.lz");
static const ax_sprite sIllumiseSprites11[] = {
	{sIllumiseGfx11, ARRAY_COUNT(sIllumiseGfx11)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_12.4bpp.lz");
static const ax_sprite sIllumiseSprites12[] = {
	{sIllumiseGfx12, ARRAY_COUNT(sIllumiseGfx12)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_13.4bpp.lz");
static const ax_sprite sIllumiseSprites13[] = {
	{sIllumiseGfx13, ARRAY_COUNT(sIllumiseGfx13)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_14.4bpp.lz");
static const ax_sprite sIllumiseSprites14[] = {
	{sIllumiseGfx14, ARRAY_COUNT(sIllumiseGfx14)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_15.4bpp.lz");
static const ax_sprite sIllumiseSprites15[] = {
	{sIllumiseGfx15, ARRAY_COUNT(sIllumiseGfx15)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_16.4bpp.lz");
static const u8 sIllumiseGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_16_1.4bpp.lz");
static const ax_sprite sIllumiseSprites16[] = {
	{NULL, 128}, 
	{sIllumiseGfx16, ARRAY_COUNT(sIllumiseGfx16)}, 
	{NULL, 32}, 
	{sIllumiseGfx16_1, ARRAY_COUNT(sIllumiseGfx16_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_17.4bpp.lz");
static const u8 sIllumiseGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_17_1.4bpp.lz");
static const ax_sprite sIllumiseSprites17[] = {
	{NULL, 128}, 
	{sIllumiseGfx17, ARRAY_COUNT(sIllumiseGfx17)}, 
	{NULL, 32}, 
	{sIllumiseGfx17_1, ARRAY_COUNT(sIllumiseGfx17_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_18.4bpp.lz");
static const u8 sIllumiseGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_18_1.4bpp.lz");
static const ax_sprite sIllumiseSprites18[] = {
	{NULL, 128}, 
	{sIllumiseGfx18, ARRAY_COUNT(sIllumiseGfx18)}, 
	{NULL, 64}, 
	{sIllumiseGfx18_1, ARRAY_COUNT(sIllumiseGfx18_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_19.4bpp.lz");
static const u8 sIllumiseGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_19_1.4bpp.lz");
static const ax_sprite sIllumiseSprites19[] = {
	{NULL, 128}, 
	{sIllumiseGfx19, ARRAY_COUNT(sIllumiseGfx19)}, 
	{NULL, 64}, 
	{sIllumiseGfx19_1, ARRAY_COUNT(sIllumiseGfx19_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_20.4bpp.lz");
static const u8 sIllumiseGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_20_1.4bpp.lz");
static const ax_sprite sIllumiseSprites20[] = {
	{NULL, 128}, 
	{sIllumiseGfx20, ARRAY_COUNT(sIllumiseGfx20)}, 
	{NULL, 64}, 
	{sIllumiseGfx20_1, ARRAY_COUNT(sIllumiseGfx20_1)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_21.4bpp.lz");
static const u8 sIllumiseGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_21_1.4bpp.lz");
static const u8 sIllumiseGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_21_2.4bpp.lz");
static const ax_sprite sIllumiseSprites21[] = {
	{NULL, 128}, 
	{sIllumiseGfx21, ARRAY_COUNT(sIllumiseGfx21)}, 
	{NULL, 32}, 
	{sIllumiseGfx21_1, ARRAY_COUNT(sIllumiseGfx21_1)}, 
	{NULL, 64}, 
	{sIllumiseGfx21_2, ARRAY_COUNT(sIllumiseGfx21_2)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_22.4bpp.lz");
static const u8 sIllumiseGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_22_1.4bpp.lz");
static const u8 sIllumiseGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_22_2.4bpp.lz");
static const ax_sprite sIllumiseSprites22[] = {
	{NULL, 128}, 
	{sIllumiseGfx22, ARRAY_COUNT(sIllumiseGfx22)}, 
	{NULL, 32}, 
	{sIllumiseGfx22_1, ARRAY_COUNT(sIllumiseGfx22_1)}, 
	{NULL, 32}, 
	{sIllumiseGfx22_2, ARRAY_COUNT(sIllumiseGfx22_2)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_23.4bpp.lz");
static const u8 sIllumiseGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_23_1.4bpp.lz");
static const u8 sIllumiseGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_23_2.4bpp.lz");
static const ax_sprite sIllumiseSprites23[] = {
	{NULL, 128}, 
	{sIllumiseGfx23, ARRAY_COUNT(sIllumiseGfx23)}, 
	{NULL, 64}, 
	{sIllumiseGfx23_1, ARRAY_COUNT(sIllumiseGfx23_1)}, 
	{NULL, 32}, 
	{sIllumiseGfx23_2, ARRAY_COUNT(sIllumiseGfx23_2)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_24.4bpp.lz");
static const u8 sIllumiseGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_24_1.4bpp.lz");
static const u8 sIllumiseGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_24_2.4bpp.lz");
static const u8 sIllumiseGfx24_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_24_3.4bpp.lz");
static const ax_sprite sIllumiseSprites24[] = {
	{NULL, 32}, 
	{sIllumiseGfx24, ARRAY_COUNT(sIllumiseGfx24)}, 
	{NULL, 32}, 
	{sIllumiseGfx24_1, ARRAY_COUNT(sIllumiseGfx24_1)}, 
	{NULL, 32}, 
	{sIllumiseGfx24_2, ARRAY_COUNT(sIllumiseGfx24_2)}, 
	{NULL, 32}, 
	{sIllumiseGfx24_3, ARRAY_COUNT(sIllumiseGfx24_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_25.4bpp.lz");
static const u8 sIllumiseGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_25_1.4bpp.lz");
static const u8 sIllumiseGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_25_2.4bpp.lz");
static const u8 sIllumiseGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_25_3.4bpp.lz");
static const ax_sprite sIllumiseSprites25[] = {
	{NULL, 32}, 
	{sIllumiseGfx25, ARRAY_COUNT(sIllumiseGfx25)}, 
	{NULL, 32}, 
	{sIllumiseGfx25_1, ARRAY_COUNT(sIllumiseGfx25_1)}, 
	{NULL, 32}, 
	{sIllumiseGfx25_2, ARRAY_COUNT(sIllumiseGfx25_2)}, 
	{NULL, 32}, 
	{sIllumiseGfx25_3, ARRAY_COUNT(sIllumiseGfx25_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_26.4bpp.lz");
static const u8 sIllumiseGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_26_1.4bpp.lz");
static const u8 sIllumiseGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_26_2.4bpp.lz");
static const ax_sprite sIllumiseSprites26[] = {
	{NULL, 32}, 
	{sIllumiseGfx26, ARRAY_COUNT(sIllumiseGfx26)}, 
	{NULL, 32}, 
	{sIllumiseGfx26_1, ARRAY_COUNT(sIllumiseGfx26_1)}, 
	{NULL, 32}, 
	{sIllumiseGfx26_2, ARRAY_COUNT(sIllumiseGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_27.4bpp.lz");
static const u8 sIllumiseGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_27_1.4bpp.lz");
static const u8 sIllumiseGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_27_2.4bpp.lz");
static const ax_sprite sIllumiseSprites27[] = {
	{NULL, 128}, 
	{sIllumiseGfx27, ARRAY_COUNT(sIllumiseGfx27)}, 
	{NULL, 32}, 
	{sIllumiseGfx27_1, ARRAY_COUNT(sIllumiseGfx27_1)}, 
	{NULL, 32}, 
	{sIllumiseGfx27_2, ARRAY_COUNT(sIllumiseGfx27_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_28.4bpp.lz");
static const u8 sIllumiseGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_28_1.4bpp.lz");
static const u8 sIllumiseGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_28_2.4bpp.lz");
static const u8 sIllumiseGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_28_3.4bpp.lz");
static const ax_sprite sIllumiseSprites28[] = {
	{NULL, 32}, 
	{sIllumiseGfx28, ARRAY_COUNT(sIllumiseGfx28)}, 
	{NULL, 64}, 
	{sIllumiseGfx28_1, ARRAY_COUNT(sIllumiseGfx28_1)}, 
	{NULL, 32}, 
	{sIllumiseGfx28_2, ARRAY_COUNT(sIllumiseGfx28_2)}, 
	{NULL, 32}, 
	{sIllumiseGfx28_3, ARRAY_COUNT(sIllumiseGfx28_3)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_29.4bpp.lz");
static const u8 sIllumiseGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_29_1.4bpp.lz");
static const u8 sIllumiseGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_29_2.4bpp.lz");
static const ax_sprite sIllumiseSprites29[] = {
	{NULL, 128}, 
	{sIllumiseGfx29, ARRAY_COUNT(sIllumiseGfx29)}, 
	{NULL, 32}, 
	{sIllumiseGfx29_1, ARRAY_COUNT(sIllumiseGfx29_1)}, 
	{NULL, 32}, 
	{sIllumiseGfx29_2, ARRAY_COUNT(sIllumiseGfx29_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_30.4bpp.lz");
static const u8 sIllumiseGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_30_1.4bpp.lz");
static const u8 sIllumiseGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_30_2.4bpp.lz");
static const u8 sIllumiseGfx30_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_30_3.4bpp.lz");
static const ax_sprite sIllumiseSprites30[] = {
	{NULL, 64}, 
	{sIllumiseGfx30, ARRAY_COUNT(sIllumiseGfx30)}, 
	{NULL, 64}, 
	{sIllumiseGfx30_1, ARRAY_COUNT(sIllumiseGfx30_1)}, 
	{NULL, 32}, 
	{sIllumiseGfx30_2, ARRAY_COUNT(sIllumiseGfx30_2)}, 
	{NULL, 32}, 
	{sIllumiseGfx30_3, ARRAY_COUNT(sIllumiseGfx30_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_31.4bpp.lz");
static const u8 sIllumiseGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_31_1.4bpp.lz");
static const u8 sIllumiseGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_31_2.4bpp.lz");
static const u8 sIllumiseGfx31_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_31_3.4bpp.lz");
static const ax_sprite sIllumiseSprites31[] = {
	{NULL, 32}, 
	{sIllumiseGfx31, ARRAY_COUNT(sIllumiseGfx31)}, 
	{NULL, 64}, 
	{sIllumiseGfx31_1, ARRAY_COUNT(sIllumiseGfx31_1)}, 
	{NULL, 32}, 
	{sIllumiseGfx31_2, ARRAY_COUNT(sIllumiseGfx31_2)}, 
	{NULL, 64}, 
	{sIllumiseGfx31_3, ARRAY_COUNT(sIllumiseGfx31_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_32.4bpp.lz");
static const u8 sIllumiseGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_32_1.4bpp.lz");
static const u8 sIllumiseGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_32_2.4bpp.lz");
static const u8 sIllumiseGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_32_3.4bpp.lz");
static const ax_sprite sIllumiseSprites32[] = {
	{NULL, 32}, 
	{sIllumiseGfx32, ARRAY_COUNT(sIllumiseGfx32)}, 
	{NULL, 64}, 
	{sIllumiseGfx32_1, ARRAY_COUNT(sIllumiseGfx32_1)}, 
	{NULL, 32}, 
	{sIllumiseGfx32_2, ARRAY_COUNT(sIllumiseGfx32_2)}, 
	{NULL, 32}, 
	{sIllumiseGfx32_3, ARRAY_COUNT(sIllumiseGfx32_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_33.4bpp.lz");
static const u8 sIllumiseGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_33_1.4bpp.lz");
static const u8 sIllumiseGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_33_2.4bpp.lz");
static const u8 sIllumiseGfx33_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_33_3.4bpp.lz");
static const ax_sprite sIllumiseSprites33[] = {
	{NULL, 32}, 
	{sIllumiseGfx33, ARRAY_COUNT(sIllumiseGfx33)}, 
	{NULL, 32}, 
	{sIllumiseGfx33_1, ARRAY_COUNT(sIllumiseGfx33_1)}, 
	{NULL, 32}, 
	{sIllumiseGfx33_2, ARRAY_COUNT(sIllumiseGfx33_2)}, 
	{NULL, 64}, 
	{sIllumiseGfx33_3, ARRAY_COUNT(sIllumiseGfx33_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_34.4bpp.lz");
static const u8 sIllumiseGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_34_1.4bpp.lz");
static const u8 sIllumiseGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_34_2.4bpp.lz");
static const u8 sIllumiseGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_34_3.4bpp.lz");
static const ax_sprite sIllumiseSprites34[] = {
	{NULL, 32}, 
	{sIllumiseGfx34, ARRAY_COUNT(sIllumiseGfx34)}, 
	{NULL, 32}, 
	{sIllumiseGfx34_1, ARRAY_COUNT(sIllumiseGfx34_1)}, 
	{NULL, 32}, 
	{sIllumiseGfx34_2, ARRAY_COUNT(sIllumiseGfx34_2)}, 
	{NULL, 32}, 
	{sIllumiseGfx34_3, ARRAY_COUNT(sIllumiseGfx34_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_35.4bpp.lz");
static const u8 sIllumiseGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_35_1.4bpp.lz");
static const u8 sIllumiseGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_35_2.4bpp.lz");
static const u8 sIllumiseGfx35_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_35_3.4bpp.lz");
static const ax_sprite sIllumiseSprites35[] = {
	{NULL, 32}, 
	{sIllumiseGfx35, ARRAY_COUNT(sIllumiseGfx35)}, 
	{NULL, 32}, 
	{sIllumiseGfx35_1, ARRAY_COUNT(sIllumiseGfx35_1)}, 
	{NULL, 32}, 
	{sIllumiseGfx35_2, ARRAY_COUNT(sIllumiseGfx35_2)}, 
	{NULL, 32}, 
	{sIllumiseGfx35_3, ARRAY_COUNT(sIllumiseGfx35_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_36.4bpp.lz");
static const ax_sprite sIllumiseSprites36[] = {
	{sIllumiseGfx36, ARRAY_COUNT(sIllumiseGfx36)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_37.4bpp.lz");
static const ax_sprite sIllumiseSprites37[] = {
	{sIllumiseGfx37, ARRAY_COUNT(sIllumiseGfx37)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_38.4bpp.lz");
static const ax_sprite sIllumiseSprites38[] = {
	{sIllumiseGfx38, ARRAY_COUNT(sIllumiseGfx38)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_39.4bpp.lz");
static const ax_sprite sIllumiseSprites39[] = {
	{sIllumiseGfx39, ARRAY_COUNT(sIllumiseGfx39)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_40.4bpp.lz");
static const ax_sprite sIllumiseSprites40[] = {
	{sIllumiseGfx40, ARRAY_COUNT(sIllumiseGfx40)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_41.4bpp.lz");
static const ax_sprite sIllumiseSprites41[] = {
	{sIllumiseGfx41, ARRAY_COUNT(sIllumiseGfx41)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_42.4bpp.lz");
static const ax_sprite sIllumiseSprites42[] = {
	{sIllumiseGfx42, ARRAY_COUNT(sIllumiseGfx42)}, 
	{NULL, 0}
};
static const u8 sIllumiseGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/illumise/sprite_43.4bpp.lz");
static const ax_sprite sIllumiseSprites43[] = {
	{sIllumiseGfx43, ARRAY_COUNT(sIllumiseGfx43)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesIllumise[] = {
	sIllumisePose1,
	sIllumisePose2,
	sIllumisePose3,
	sIllumisePose4,
	sIllumisePose5,
	sIllumisePose6,
	sIllumisePose7,
	sIllumisePose8,
	sIllumisePose9,
	sIllumisePose10,
	sIllumisePose11,
	sIllumisePose12,
	sIllumisePose13,
	sIllumisePose14,
	sIllumisePose15,
	sIllumisePose16,
	sIllumisePose17,
	sIllumisePose18,
	sIllumisePose19,
	sIllumisePose20,
	sIllumisePose21,
	sIllumisePose22,
	sIllumisePose23,
	sIllumisePose24,
	sIllumisePose1,
	sIllumisePose22,
	sIllumisePose19,
	sIllumisePose16,
	sIllumisePose13,
	sIllumisePose10,
	sIllumisePose7,
	sIllumisePose4,
	sIllumisePose1,
	sIllumisePose2,
	sIllumisePose3,
	sIllumisePose36,
	sIllumisePose37,
	sIllumisePose4,
	sIllumisePose5,
	sIllumisePose6,
	sIllumisePose41,
	sIllumisePose42,
	sIllumisePose7,
	sIllumisePose8,
	sIllumisePose9,
	sIllumisePose46,
	sIllumisePose47,
	sIllumisePose10,
	sIllumisePose11,
	sIllumisePose12,
	sIllumisePose51,
	sIllumisePose52,
	sIllumisePose13,
	sIllumisePose14,
	sIllumisePose15,
	sIllumisePose56,
	sIllumisePose57,
	sIllumisePose16,
	sIllumisePose17,
	sIllumisePose18,
	sIllumisePose61,
	sIllumisePose62,
	sIllumisePose19,
	sIllumisePose20,
	sIllumisePose21,
	sIllumisePose66,
	sIllumisePose67,
	sIllumisePose22,
	sIllumisePose23,
	sIllumisePose24,
	sIllumisePose71,
	sIllumisePose72,
	sIllumisePose1,
	sIllumisePose2,
	sIllumisePose3,
	sIllumisePose36,
	sIllumisePose37,
	sIllumisePose4,
	sIllumisePose5,
	sIllumisePose6,
	sIllumisePose41,
	sIllumisePose42,
	sIllumisePose7,
	sIllumisePose8,
	sIllumisePose9,
	sIllumisePose46,
	sIllumisePose47,
	sIllumisePose10,
	sIllumisePose11,
	sIllumisePose12,
	sIllumisePose51,
	sIllumisePose52,
	sIllumisePose13,
	sIllumisePose14,
	sIllumisePose15,
	sIllumisePose56,
	sIllumisePose57,
	sIllumisePose16,
	sIllumisePose17,
	sIllumisePose18,
	sIllumisePose61,
	sIllumisePose62,
	sIllumisePose19,
	sIllumisePose20,
	sIllumisePose21,
	sIllumisePose66,
	sIllumisePose67,
	sIllumisePose22,
	sIllumisePose23,
	sIllumisePose24,
	sIllumisePose71,
	sIllumisePose72,
	sIllumisePose1,
	sIllumisePose114,
	sIllumisePose115,
	sIllumisePose4,
	sIllumisePose117,
	sIllumisePose118,
	sIllumisePose7,
	sIllumisePose120,
	sIllumisePose121,
	sIllumisePose10,
	sIllumisePose123,
	sIllumisePose124,
	sIllumisePose13,
	sIllumisePose126,
	sIllumisePose127,
	sIllumisePose16,
	sIllumisePose129,
	sIllumisePose130,
	sIllumisePose19,
	sIllumisePose132,
	sIllumisePose133,
	sIllumisePose22,
	sIllumisePose135,
	sIllumisePose136,
	sIllumisePose1,
	sIllumisePose2,
	sIllumisePose3,
	sIllumisePose36,
	sIllumisePose37,
	sIllumisePose4,
	sIllumisePose5,
	sIllumisePose6,
	sIllumisePose41,
	sIllumisePose42,
	sIllumisePose7,
	sIllumisePose8,
	sIllumisePose9,
	sIllumisePose46,
	sIllumisePose47,
	sIllumisePose10,
	sIllumisePose11,
	sIllumisePose12,
	sIllumisePose51,
	sIllumisePose52,
	sIllumisePose13,
	sIllumisePose14,
	sIllumisePose15,
	sIllumisePose56,
	sIllumisePose57,
	sIllumisePose16,
	sIllumisePose17,
	sIllumisePose18,
	sIllumisePose61,
	sIllumisePose62,
	sIllumisePose19,
	sIllumisePose20,
	sIllumisePose21,
	sIllumisePose66,
	sIllumisePose67,
	sIllumisePose22,
	sIllumisePose23,
	sIllumisePose24,
	sIllumisePose71,
	sIllumisePose72,
	sIllumisePose177,
	sIllumisePose178,
	sIllumisePose179,
	sIllumisePose180,
	sIllumisePose181,
	sIllumisePose182,
	sIllumisePose183,
	sIllumisePose184,
	sIllumisePose185,
	sIllumisePose186,
	sIllumisePose1,
	sIllumisePose114,
	sIllumisePose4,
	sIllumisePose117,
	sIllumisePose7,
	sIllumisePose120,
	sIllumisePose10,
	sIllumisePose123,
	sIllumisePose13,
	sIllumisePose126,
	sIllumisePose16,
	sIllumisePose129,
	sIllumisePose19,
	sIllumisePose132,
	sIllumisePose22,
	sIllumisePose135,
	sIllumisePose36,
	sIllumisePose71,
	sIllumisePose66,
	sIllumisePose61,
	sIllumisePose56,
	sIllumisePose51,
	sIllumisePose46,
	sIllumisePose41,
	sIllumisePose115,
	sIllumisePose118,
	sIllumisePose213,
	sIllumisePose214,
	sIllumisePose215,
	sIllumisePose216,
	sIllumisePose217,
	sIllumisePose136,
	sIllumisePose1,
	sIllumisePose3,
	sIllumisePose2,
	sIllumisePose4,
	sIllumisePose6,
	sIllumisePose5,
	sIllumisePose7,
	sIllumisePose9,
	sIllumisePose8,
	sIllumisePose10,
	sIllumisePose12,
	sIllumisePose11,
	sIllumisePose13,
	sIllumisePose15,
	sIllumisePose14,
	sIllumisePose16,
	sIllumisePose18,
	sIllumisePose17,
	sIllumisePose19,
	sIllumisePose21,
	sIllumisePose20,
	sIllumisePose22,
	sIllumisePose24,
	sIllumisePose23,
	sIllumisePose114,
	sIllumisePose135,
	sIllumisePose132,
	sIllumisePose129,
	sIllumisePose126,
	sIllumisePose123,
	sIllumisePose120,
	sIllumisePose117,
	sIllumisePose1,
	sIllumisePose252,
	sIllumisePose253,
	sIllumisePose16,
	sIllumisePose13,
	sIllumisePose10,
	sIllumisePose257,
	sIllumisePose4,
};

static const struct PositionSets sAxPositionsIllumise[] = {
	[0] = { .set = { {-1, -9}, {-8, -6}, {6, -6}, {-1, -8} } },
	[1] = { .set = { {-1, -9}, {-8, -6}, {6, -6}, {-1, -8} } },
	[2] = { .set = { {-1, -9}, {-8, -6}, {6, -6}, {-1, -8} } },
	[3] = { .set = { {2, -10}, {5, -7}, {-6, -5}, {0, -7} } },
	[4] = { .set = { {2, -10}, {5, -7}, {-6, -5}, {0, -7} } },
	[5] = { .set = { {2, -10}, {5, -7}, {-6, -5}, {-1, -7} } },
	[6] = { .set = { {4, -10}, {1, -5}, {-1, -4}, {-2, -6} } },
	[7] = { .set = { {4, -10}, {1, -5}, {-1, -4}, {-1, -6} } },
	[8] = { .set = { {4, -10}, {1, -5}, {-1, -4}, {-1, -6} } },
	[9] = { .set = { {4, -11}, {-5, -6}, {4, -4}, {-2, -6} } },
	[10] = { .set = { {3, -12}, {-5, -6}, {4, -4}, {-2, -6} } },
	[11] = { .set = { {4, -12}, {-5, -7}, {4, -4}, {-2, -6} } },
	[12] = { .set = { {-1, -11}, {7, -5}, {-9, -5}, {-1, -7} } },
	[13] = { .set = { {-1, -11}, {7, -5}, {-9, -5}, {-1, -7} } },
	[14] = { .set = { {-1, -12}, {7, -5}, {-9, -5}, {-1, -6} } },
	[15] = { .set = { {-6, -11}, {3, -6}, {-6, -4}, {0, -6} } },
	[16] = { .set = { {-5, -12}, {3, -6}, {-6, -4}, {0, -6} } },
	[17] = { .set = { {-6, -12}, {3, -7}, {-6, -4}, {0, -6} } },
	[18] = { .set = { {-6, -10}, {-3, -5}, {-1, -4}, {0, -6} } },
	[19] = { .set = { {-6, -10}, {-3, -5}, {-1, -4}, {-1, -6} } },
	[20] = { .set = { {-6, -10}, {-3, -5}, {-1, -4}, {-1, -6} } },
	[21] = { .set = { {-4, -10}, {-7, -7}, {4, -5}, {-2, -7} } },
	[22] = { .set = { {-4, -10}, {-7, -7}, {4, -5}, {-2, -7} } },
	[23] = { .set = { {-4, -10}, {-7, -7}, {4, -5}, {-1, -7} } },
	[24] = { .set = { {-1, -9}, {-8, -6}, {6, -6}, {-1, -8} } },
	[25] = { .set = { {-4, -10}, {-7, -7}, {4, -5}, {-2, -7} } },
	[26] = { .set = { {-6, -10}, {-3, -5}, {-1, -4}, {0, -6} } },
	[27] = { .set = { {-6, -11}, {3, -6}, {-6, -4}, {0, -6} } },
	[28] = { .set = { {-1, -11}, {7, -5}, {-9, -5}, {-1, -7} } },
	[29] = { .set = { {4, -11}, {-5, -6}, {4, -4}, {-2, -6} } },
	[30] = { .set = { {4, -10}, {1, -5}, {-1, -4}, {-2, -6} } },
	[31] = { .set = { {2, -10}, {5, -7}, {-6, -5}, {0, -7} } },
	[32] = { .set = { {-1, -9}, {-8, -6}, {6, -6}, {-1, -8} } },
	[33] = { .set = { {-1, -9}, {-8, -6}, {6, -6}, {-1, -8} } },
	[34] = { .set = { {-1, -9}, {-8, -6}, {6, -6}, {-1, -8} } },
	[35] = { .set = { {-1, -6}, {-9, -6}, {7, -6}, {-1, -9} } },
	[36] = { .set = { {-1, -6}, {-9, -6}, {7, -6}, {-1, -9} } },
	[37] = { .set = { {2, -10}, {5, -7}, {-6, -5}, {0, -7} } },
	[38] = { .set = { {2, -10}, {5, -7}, {-6, -5}, {0, -7} } },
	[39] = { .set = { {2, -10}, {5, -7}, {-6, -5}, {-1, -7} } },
	[40] = { .set = { {2, -6}, {7, -9}, {-8, -5}, {-1, -7} } },
	[41] = { .set = { {2, -6}, {7, -9}, {-8, -5}, {-1, -7} } },
	[42] = { .set = { {4, -10}, {1, -5}, {-1, -4}, {-2, -6} } },
	[43] = { .set = { {4, -10}, {1, -5}, {-1, -4}, {-1, -6} } },
	[44] = { .set = { {4, -10}, {1, -5}, {-1, -4}, {-1, -6} } },
	[45] = { .set = { {3, -7}, {-5, -9}, {-5, -6}, {-3, -8} } },
	[46] = { .set = { {3, -7}, {-5, -9}, {-5, -6}, {-3, -8} } },
	[47] = { .set = { {4, -11}, {-5, -6}, {4, -4}, {-2, -6} } },
	[48] = { .set = { {3, -12}, {-5, -6}, {4, -4}, {-2, -6} } },
	[49] = { .set = { {4, -12}, {-5, -7}, {4, -4}, {-2, -6} } },
	[50] = { .set = { {3, -7}, {-6, -7}, {1, -3}, {-3, -7} } },
	[51] = { .set = { {3, -7}, {-6, -7}, {1, -3}, {-3, -7} } },
	[52] = { .set = { {-1, -11}, {7, -5}, {-9, -5}, {-1, -7} } },
	[53] = { .set = { {-1, -11}, {7, -5}, {-9, -5}, {-1, -7} } },
	[54] = { .set = { {-1, -12}, {7, -5}, {-9, -5}, {-1, -6} } },
	[55] = { .set = { {-1, -10}, {7, -5}, {-9, -5}, {-1, -7} } },
	[56] = { .set = { {-1, -10}, {7, -6}, {-9, -6}, {-1, -7} } },
	[57] = { .set = { {-6, -11}, {3, -6}, {-6, -4}, {0, -6} } },
	[58] = { .set = { {-5, -12}, {3, -6}, {-6, -4}, {0, -6} } },
	[59] = { .set = { {-6, -12}, {3, -7}, {-6, -4}, {0, -6} } },
	[60] = { .set = { {-5, -7}, {4, -7}, {-3, -3}, {1, -7} } },
	[61] = { .set = { {-5, -7}, {4, -7}, {-3, -3}, {1, -7} } },
	[62] = { .set = { {-6, -10}, {-3, -5}, {-1, -4}, {0, -6} } },
	[63] = { .set = { {-6, -10}, {-3, -5}, {-1, -4}, {-1, -6} } },
	[64] = { .set = { {-6, -10}, {-3, -5}, {-1, -4}, {-1, -6} } },
	[65] = { .set = { {-5, -7}, {3, -9}, {3, -6}, {1, -8} } },
	[66] = { .set = { {-5, -7}, {3, -9}, {3, -6}, {1, -8} } },
	[67] = { .set = { {-4, -10}, {-7, -7}, {4, -5}, {-2, -7} } },
	[68] = { .set = { {-4, -10}, {-7, -7}, {4, -5}, {-2, -7} } },
	[69] = { .set = { {-4, -10}, {-7, -7}, {4, -5}, {-1, -7} } },
	[70] = { .set = { {-4, -6}, {-9, -9}, {6, -5}, {-1, -7} } },
	[71] = { .set = { {-4, -6}, {-9, -9}, {6, -5}, {-1, -7} } },
	[72] = { .set = { {-1, -9}, {-8, -6}, {6, -6}, {-1, -8} } },
	[73] = { .set = { {-1, -9}, {-8, -6}, {6, -6}, {-1, -8} } },
	[74] = { .set = { {-1, -9}, {-8, -6}, {6, -6}, {-1, -8} } },
	[75] = { .set = { {-1, -6}, {-9, -6}, {7, -6}, {-1, -9} } },
	[76] = { .set = { {-1, -6}, {-9, -6}, {7, -6}, {-1, -9} } },
	[77] = { .set = { {2, -10}, {5, -7}, {-6, -5}, {0, -7} } },
	[78] = { .set = { {2, -10}, {5, -7}, {-6, -5}, {0, -7} } },
	[79] = { .set = { {2, -10}, {5, -7}, {-6, -5}, {-1, -7} } },
	[80] = { .set = { {2, -6}, {7, -9}, {-8, -5}, {-1, -7} } },
	[81] = { .set = { {2, -6}, {7, -9}, {-8, -5}, {-1, -7} } },
	[82] = { .set = { {4, -10}, {1, -5}, {-1, -4}, {-2, -6} } },
	[83] = { .set = { {4, -10}, {1, -5}, {-1, -4}, {-1, -6} } },
	[84] = { .set = { {4, -10}, {1, -5}, {-1, -4}, {-1, -6} } },
	[85] = { .set = { {3, -7}, {-5, -9}, {-5, -6}, {-3, -8} } },
	[86] = { .set = { {3, -7}, {-5, -9}, {-5, -6}, {-3, -8} } },
	[87] = { .set = { {4, -11}, {-5, -6}, {4, -4}, {-2, -6} } },
	[88] = { .set = { {3, -12}, {-5, -6}, {4, -4}, {-2, -6} } },
	[89] = { .set = { {4, -12}, {-5, -7}, {4, -4}, {-2, -6} } },
	[90] = { .set = { {3, -7}, {-6, -7}, {1, -3}, {-3, -7} } },
	[91] = { .set = { {3, -7}, {-6, -7}, {1, -3}, {-3, -7} } },
	[92] = { .set = { {-1, -11}, {7, -5}, {-9, -5}, {-1, -7} } },
	[93] = { .set = { {-1, -11}, {7, -5}, {-9, -5}, {-1, -7} } },
	[94] = { .set = { {-1, -12}, {7, -5}, {-9, -5}, {-1, -6} } },
	[95] = { .set = { {-1, -10}, {7, -5}, {-9, -5}, {-1, -7} } },
	[96] = { .set = { {-1, -10}, {7, -6}, {-9, -6}, {-1, -7} } },
	[97] = { .set = { {-6, -11}, {3, -6}, {-6, -4}, {0, -6} } },
	[98] = { .set = { {-5, -12}, {3, -6}, {-6, -4}, {0, -6} } },
	[99] = { .set = { {-6, -12}, {3, -7}, {-6, -4}, {0, -6} } },
	[100] = { .set = { {-5, -7}, {4, -7}, {-3, -3}, {1, -7} } },
	[101] = { .set = { {-5, -7}, {4, -7}, {-3, -3}, {1, -7} } },
	[102] = { .set = { {-6, -10}, {-3, -5}, {-1, -4}, {0, -6} } },
	[103] = { .set = { {-6, -10}, {-3, -5}, {-1, -4}, {-1, -6} } },
	[104] = { .set = { {-6, -10}, {-3, -5}, {-1, -4}, {-1, -6} } },
	[105] = { .set = { {-5, -7}, {3, -9}, {3, -6}, {1, -8} } },
	[106] = { .set = { {-5, -7}, {3, -9}, {3, -6}, {1, -8} } },
	[107] = { .set = { {-4, -10}, {-7, -7}, {4, -5}, {-2, -7} } },
	[108] = { .set = { {-4, -10}, {-7, -7}, {4, -5}, {-2, -7} } },
	[109] = { .set = { {-4, -10}, {-7, -7}, {4, -5}, {-1, -7} } },
	[110] = { .set = { {-4, -6}, {-9, -9}, {6, -5}, {-1, -7} } },
	[111] = { .set = { {-4, -6}, {-9, -9}, {6, -5}, {-1, -7} } },
	[112] = { .set = { {-1, -9}, {-8, -6}, {6, -6}, {-1, -8} } },
	[113] = { .set = { {-1, -12}, {-9, -9}, {7, -9}, {-1, -8} } },
	[114] = { .set = { {-1, -7}, {-8, -6}, {6, -6}, {-1, -6} } },
	[115] = { .set = { {2, -10}, {5, -7}, {-6, -5}, {0, -7} } },
	[116] = { .set = { {1, -12}, {4, -8}, {-8, -7}, {-2, -7} } },
	[117] = { .set = { {2, -9}, {3, -6}, {-8, -6}, {-1, -5} } },
	[118] = { .set = { {4, -10}, {1, -5}, {-1, -4}, {-2, -6} } },
	[119] = { .set = { {3, -12}, {-1, -6}, {-2, -5}, {-2, -7} } },
	[120] = { .set = { {6, -10}, {-2, -7}, {-3, -6}, {0, -7} } },
	[121] = { .set = { {4, -11}, {-5, -6}, {4, -4}, {-2, -6} } },
	[122] = { .set = { {3, -14}, {-6, -5}, {4, -5}, {-2, -7} } },
	[123] = { .set = { {4, -15}, {-6, -7}, {2, -4}, {-2, -7} } },
	[124] = { .set = { {-1, -11}, {7, -5}, {-9, -5}, {-1, -7} } },
	[125] = { .set = { {-1, -9}, {8, -7}, {-10, -7}, {-1, -6} } },
	[126] = { .set = { {-1, -14}, {8, -6}, {-10, -6}, {-1, -7} } },
	[127] = { .set = { {-6, -11}, {3, -6}, {-6, -4}, {0, -6} } },
	[128] = { .set = { {-5, -14}, {4, -5}, {-6, -5}, {0, -7} } },
	[129] = { .set = { {-6, -15}, {4, -7}, {-4, -4}, {0, -7} } },
	[130] = { .set = { {-6, -10}, {-3, -5}, {-1, -4}, {0, -6} } },
	[131] = { .set = { {-5, -12}, {-1, -6}, {0, -5}, {0, -7} } },
	[132] = { .set = { {-8, -10}, {0, -7}, {1, -6}, {-2, -7} } },
	[133] = { .set = { {-4, -10}, {-7, -7}, {4, -5}, {-2, -7} } },
	[134] = { .set = { {-3, -12}, {-6, -8}, {6, -7}, {0, -7} } },
	[135] = { .set = { {-4, -9}, {-5, -6}, {6, -6}, {-1, -5} } },
	[136] = { .set = { {-1, -9}, {-8, -6}, {6, -6}, {-1, -8} } },
	[137] = { .set = { {-1, -9}, {-8, -6}, {6, -6}, {-1, -8} } },
	[138] = { .set = { {-1, -9}, {-8, -6}, {6, -6}, {-1, -8} } },
	[139] = { .set = { {-1, -6}, {-9, -6}, {7, -6}, {-1, -9} } },
	[140] = { .set = { {-1, -6}, {-9, -6}, {7, -6}, {-1, -9} } },
	[141] = { .set = { {2, -10}, {5, -7}, {-6, -5}, {0, -7} } },
	[142] = { .set = { {2, -10}, {5, -7}, {-6, -5}, {0, -7} } },
	[143] = { .set = { {2, -10}, {5, -7}, {-6, -5}, {-1, -7} } },
	[144] = { .set = { {2, -6}, {7, -9}, {-8, -5}, {-1, -7} } },
	[145] = { .set = { {2, -6}, {7, -9}, {-8, -5}, {-1, -7} } },
	[146] = { .set = { {4, -10}, {1, -5}, {-1, -4}, {-2, -6} } },
	[147] = { .set = { {4, -10}, {1, -5}, {-1, -4}, {-1, -6} } },
	[148] = { .set = { {4, -10}, {1, -5}, {-1, -4}, {-1, -6} } },
	[149] = { .set = { {3, -7}, {-5, -9}, {-5, -6}, {-3, -8} } },
	[150] = { .set = { {3, -7}, {-5, -9}, {-5, -6}, {-3, -8} } },
	[151] = { .set = { {4, -11}, {-5, -6}, {4, -4}, {-2, -6} } },
	[152] = { .set = { {3, -12}, {-5, -6}, {4, -4}, {-2, -6} } },
	[153] = { .set = { {4, -12}, {-5, -7}, {4, -4}, {-2, -6} } },
	[154] = { .set = { {3, -7}, {-6, -7}, {1, -3}, {-3, -7} } },
	[155] = { .set = { {3, -7}, {-6, -7}, {1, -3}, {-3, -7} } },
	[156] = { .set = { {-1, -11}, {7, -5}, {-9, -5}, {-1, -7} } },
	[157] = { .set = { {-1, -11}, {7, -5}, {-9, -5}, {-1, -7} } },
	[158] = { .set = { {-1, -12}, {7, -5}, {-9, -5}, {-1, -6} } },
	[159] = { .set = { {-1, -10}, {7, -5}, {-9, -5}, {-1, -7} } },
	[160] = { .set = { {-1, -10}, {7, -6}, {-9, -6}, {-1, -7} } },
	[161] = { .set = { {-6, -11}, {3, -6}, {-6, -4}, {0, -6} } },
	[162] = { .set = { {-5, -12}, {3, -6}, {-6, -4}, {0, -6} } },
	[163] = { .set = { {-6, -12}, {3, -7}, {-6, -4}, {0, -6} } },
	[164] = { .set = { {-5, -7}, {4, -7}, {-3, -3}, {1, -7} } },
	[165] = { .set = { {-5, -7}, {4, -7}, {-3, -3}, {1, -7} } },
	[166] = { .set = { {-6, -10}, {-3, -5}, {-1, -4}, {0, -6} } },
	[167] = { .set = { {-6, -10}, {-3, -5}, {-1, -4}, {-1, -6} } },
	[168] = { .set = { {-6, -10}, {-3, -5}, {-1, -4}, {-1, -6} } },
	[169] = { .set = { {-5, -7}, {3, -9}, {3, -6}, {1, -8} } },
	[170] = { .set = { {-5, -7}, {3, -9}, {3, -6}, {1, -8} } },
	[171] = { .set = { {-4, -10}, {-7, -7}, {4, -5}, {-2, -7} } },
	[172] = { .set = { {-4, -10}, {-7, -7}, {4, -5}, {-2, -7} } },
	[173] = { .set = { {-4, -10}, {-7, -7}, {4, -5}, {-1, -7} } },
	[174] = { .set = { {-4, -6}, {-9, -9}, {6, -5}, {-1, -7} } },
	[175] = { .set = { {-4, -6}, {-9, -9}, {6, -5}, {-1, -7} } },
	[176] = { .set = { {-3, -9}, {-6, -5}, {4, -4}, {-1, -5} } },
	[177] = { .set = { {-3, -8}, {-6, -5}, {4, -4}, {-1, -5} } },
	[178] = { .set = { {0, -11}, {-7, -10}, {7, -10}, {0, -9} } },
	[179] = { .set = { {1, -9}, {6, -10}, {-7, -8}, {-1, -6} } },
	[180] = { .set = { {4, -11}, {2, -10}, {-2, -8}, {0, -5} } },
	[181] = { .set = { {1, -13}, {-1, -11}, {7, -9}, {1, -6} } },
	[182] = { .set = { {0, -13}, {8, -7}, {-8, -7}, {0, -5} } },
	[183] = { .set = { {-1, -12}, {1, -10}, {-7, -8}, {-1, -5} } },
	[184] = { .set = { {-5, -11}, {-3, -10}, {1, -8}, {-1, -5} } },
	[185] = { .set = { {-2, -9}, {-7, -10}, {6, -8}, {0, -6} } },
	[186] = { .set = { {-1, -9}, {-8, -6}, {6, -6}, {-1, -8} } },
	[187] = { .set = { {-1, -12}, {-9, -9}, {7, -9}, {-1, -8} } },
	[188] = { .set = { {2, -10}, {5, -7}, {-6, -5}, {0, -7} } },
	[189] = { .set = { {1, -12}, {4, -8}, {-8, -7}, {-2, -7} } },
	[190] = { .set = { {4, -10}, {1, -5}, {-1, -4}, {-2, -6} } },
	[191] = { .set = { {3, -12}, {-1, -6}, {-2, -5}, {-2, -7} } },
	[192] = { .set = { {4, -11}, {-5, -6}, {4, -4}, {-2, -6} } },
	[193] = { .set = { {3, -14}, {-6, -5}, {4, -5}, {-2, -7} } },
	[194] = { .set = { {-1, -11}, {7, -5}, {-9, -5}, {-1, -7} } },
	[195] = { .set = { {-1, -9}, {8, -7}, {-10, -7}, {-1, -6} } },
	[196] = { .set = { {-6, -11}, {3, -6}, {-6, -4}, {0, -6} } },
	[197] = { .set = { {-5, -14}, {4, -5}, {-6, -5}, {0, -7} } },
	[198] = { .set = { {-6, -10}, {-3, -5}, {-1, -4}, {0, -6} } },
	[199] = { .set = { {-5, -12}, {-1, -6}, {0, -5}, {0, -7} } },
	[200] = { .set = { {-4, -10}, {-7, -7}, {4, -5}, {-2, -7} } },
	[201] = { .set = { {-3, -12}, {-6, -8}, {6, -7}, {0, -7} } },
	[202] = { .set = { {-1, -6}, {-9, -6}, {7, -6}, {-1, -9} } },
	[203] = { .set = { {-4, -6}, {-9, -9}, {6, -5}, {-1, -7} } },
	[204] = { .set = { {-5, -7}, {3, -9}, {3, -6}, {1, -8} } },
	[205] = { .set = { {-5, -7}, {4, -7}, {-3, -3}, {1, -7} } },
	[206] = { .set = { {-1, -10}, {7, -5}, {-9, -5}, {-1, -7} } },
	[207] = { .set = { {3, -7}, {-6, -7}, {1, -3}, {-3, -7} } },
	[208] = { .set = { {3, -7}, {-5, -9}, {-5, -6}, {-3, -8} } },
	[209] = { .set = { {2, -6}, {7, -9}, {-8, -5}, {-1, -7} } },
	[210] = { .set = { {-1, -7}, {-8, -6}, {6, -6}, {-1, -6} } },
	[211] = { .set = { {2, -9}, {3, -6}, {-8, -6}, {-1, -5} } },
	[212] = { .set = { {6, -9}, {-2, -6}, {-3, -5}, {0, -6} } },
	[213] = { .set = { {4, -14}, {-6, -6}, {2, -3}, {-2, -6} } },
	[214] = { .set = { {-1, -13}, {8, -5}, {-10, -5}, {-1, -6} } },
	[215] = { .set = { {-6, -14}, {4, -6}, {-4, -3}, {0, -6} } },
	[216] = { .set = { {-8, -9}, {0, -6}, {1, -5}, {-2, -6} } },
	[217] = { .set = { {-4, -9}, {-5, -6}, {6, -6}, {-1, -5} } },
	[218] = { .set = { {-1, -9}, {-8, -6}, {6, -6}, {-1, -8} } },
	[219] = { .set = { {-1, -9}, {-8, -6}, {6, -6}, {-1, -8} } },
	[220] = { .set = { {-1, -9}, {-8, -6}, {6, -6}, {-1, -8} } },
	[221] = { .set = { {2, -10}, {5, -7}, {-6, -5}, {0, -7} } },
	[222] = { .set = { {2, -10}, {5, -7}, {-6, -5}, {-1, -7} } },
	[223] = { .set = { {2, -10}, {5, -7}, {-6, -5}, {0, -7} } },
	[224] = { .set = { {4, -10}, {1, -5}, {-1, -4}, {-2, -6} } },
	[225] = { .set = { {4, -10}, {1, -5}, {-1, -4}, {-1, -6} } },
	[226] = { .set = { {4, -10}, {1, -5}, {-1, -4}, {-1, -6} } },
	[227] = { .set = { {4, -11}, {-5, -6}, {4, -4}, {-2, -6} } },
	[228] = { .set = { {4, -12}, {-5, -7}, {4, -4}, {-2, -6} } },
	[229] = { .set = { {3, -12}, {-5, -6}, {4, -4}, {-2, -6} } },
	[230] = { .set = { {-1, -11}, {7, -5}, {-9, -5}, {-1, -7} } },
	[231] = { .set = { {-1, -12}, {7, -5}, {-9, -5}, {-1, -6} } },
	[232] = { .set = { {-1, -11}, {7, -5}, {-9, -5}, {-1, -7} } },
	[233] = { .set = { {-6, -11}, {3, -6}, {-6, -4}, {0, -6} } },
	[234] = { .set = { {-6, -12}, {3, -7}, {-6, -4}, {0, -6} } },
	[235] = { .set = { {-5, -12}, {3, -6}, {-6, -4}, {0, -6} } },
	[236] = { .set = { {-6, -10}, {-3, -5}, {-1, -4}, {0, -6} } },
	[237] = { .set = { {-6, -10}, {-3, -5}, {-1, -4}, {-1, -6} } },
	[238] = { .set = { {-6, -10}, {-3, -5}, {-1, -4}, {-1, -6} } },
	[239] = { .set = { {-4, -10}, {-7, -7}, {4, -5}, {-2, -7} } },
	[240] = { .set = { {-4, -10}, {-7, -7}, {4, -5}, {-1, -7} } },
	[241] = { .set = { {-4, -10}, {-7, -7}, {4, -5}, {-2, -7} } },
	[242] = { .set = { {-1, -12}, {-9, -9}, {7, -9}, {-1, -8} } },
	[243] = { .set = { {-3, -12}, {-6, -8}, {6, -7}, {0, -7} } },
	[244] = { .set = { {-5, -12}, {-1, -6}, {0, -5}, {0, -7} } },
	[245] = { .set = { {-5, -14}, {4, -5}, {-6, -5}, {0, -7} } },
	[246] = { .set = { {-1, -9}, {8, -7}, {-10, -7}, {-1, -6} } },
	[247] = { .set = { {3, -14}, {-6, -5}, {4, -5}, {-2, -7} } },
	[248] = { .set = { {3, -12}, {-1, -6}, {-2, -5}, {-2, -7} } },
	[249] = { .set = { {1, -12}, {4, -8}, {-8, -7}, {-2, -7} } },
	[250] = { .set = { {-1, -9}, {-8, -6}, {6, -6}, {-1, -8} } },
	[251] = { .set = { {-3, -10}, {-6, -7}, {5, -5}, {-1, -7} } },
	[252] = { .set = { {-6, -10}, {-3, -5}, {-1, -4}, {0, -6} } },
	[253] = { .set = { {-6, -11}, {3, -6}, {-6, -4}, {0, -6} } },
	[254] = { .set = { {-1, -11}, {7, -5}, {-9, -5}, {-1, -7} } },
	[255] = { .set = { {4, -11}, {-5, -6}, {4, -4}, {-2, -6} } },
	[256] = { .set = { {5, -10}, {2, -5}, {0, -4}, {-1, -6} } },
	[257] = { .set = { {2, -10}, {5, -7}, {-6, -5}, {0, -7} } },
};

static const ax_anim *const sIllumiseAnimTable1[] = {
	AX_ANIM_PTR(sIllumiseAnims_1_1),
	AX_ANIM_PTR(sIllumiseAnims_1_2),
	AX_ANIM_PTR(sIllumiseAnims_1_3),
	AX_ANIM_PTR(sIllumiseAnims_1_4),
	AX_ANIM_PTR(sIllumiseAnims_1_5),
	AX_ANIM_PTR(sIllumiseAnims_1_6),
	AX_ANIM_PTR(sIllumiseAnims_1_7),
	AX_ANIM_PTR(sIllumiseAnims_1_8),
};

static const ax_anim *const sIllumiseAnimTable2[] = {
	AX_ANIM_PTR(sIllumiseAnims_2_1),
	AX_ANIM_PTR(sIllumiseAnims_2_2),
	AX_ANIM_PTR(sIllumiseAnims_2_3),
	AX_ANIM_PTR(sIllumiseAnims_2_4),
	AX_ANIM_PTR(sIllumiseAnims_2_5),
	AX_ANIM_PTR(sIllumiseAnims_2_6),
	AX_ANIM_PTR(sIllumiseAnims_2_7),
	AX_ANIM_PTR(sIllumiseAnims_2_8),
};

static const ax_anim *const sIllumiseAnimTable3[] = {
	AX_ANIM_PTR(sIllumiseAnims_3_1),
	AX_ANIM_PTR(sIllumiseAnims_3_2),
	AX_ANIM_PTR(sIllumiseAnims_3_3),
	AX_ANIM_PTR(sIllumiseAnims_3_4),
	AX_ANIM_PTR(sIllumiseAnims_3_5),
	AX_ANIM_PTR(sIllumiseAnims_3_6),
	AX_ANIM_PTR(sIllumiseAnims_3_7),
	AX_ANIM_PTR(sIllumiseAnims_3_8),
};

static const ax_anim *const sIllumiseAnimTable4[] = {
	AX_ANIM_PTR(sIllumiseAnims_4_1),
	AX_ANIM_PTR(sIllumiseAnims_4_2),
	AX_ANIM_PTR(gAxSharedAnim_00307),
	AX_ANIM_PTR(sIllumiseAnims_4_4),
	AX_ANIM_PTR(sIllumiseAnims_4_5),
	AX_ANIM_PTR(sIllumiseAnims_4_6),
	AX_ANIM_PTR(gAxSharedAnim_00411),
	AX_ANIM_PTR(sIllumiseAnims_4_8),
};

static const ax_anim *const sIllumiseAnimTable5[] = {
	AX_ANIM_PTR(sIllumiseAnims_5_1),
	AX_ANIM_PTR(sIllumiseAnims_5_2),
	AX_ANIM_PTR(sIllumiseAnims_5_3),
	AX_ANIM_PTR(sIllumiseAnims_5_4),
	AX_ANIM_PTR(sIllumiseAnims_5_5),
	AX_ANIM_PTR(sIllumiseAnims_5_6),
	AX_ANIM_PTR(sIllumiseAnims_5_7),
	AX_ANIM_PTR(sIllumiseAnims_5_8),
};

static const ax_anim *const sIllumiseAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
};

static const ax_anim *const sIllumiseAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00897),
	AX_ANIM_PTR(gAxSharedAnim_00910),
	AX_ANIM_PTR(gAxSharedAnim_00924),
	AX_ANIM_PTR(gAxSharedAnim_00935),
	AX_ANIM_PTR(gAxSharedAnim_00958),
	AX_ANIM_PTR(gAxSharedAnim_00970),
	AX_ANIM_PTR(gAxSharedAnim_00983),
	AX_ANIM_PTR(gAxSharedAnim_00999),
};

static const ax_anim *const sIllumiseAnimTable8[] = {
	AX_ANIM_PTR(sIllumiseAnims_8_1),
	AX_ANIM_PTR(sIllumiseAnims_8_2),
	AX_ANIM_PTR(sIllumiseAnims_8_3),
	AX_ANIM_PTR(sIllumiseAnims_8_4),
	AX_ANIM_PTR(sIllumiseAnims_8_5),
	AX_ANIM_PTR(sIllumiseAnims_8_6),
	AX_ANIM_PTR(sIllumiseAnims_8_7),
	AX_ANIM_PTR(sIllumiseAnims_8_8),
};

static const ax_anim *const sIllumiseAnimTable9[] = {
	AX_ANIM_PTR(sIllumiseAnims_9_1),
	AX_ANIM_PTR(sIllumiseAnims_9_2),
	AX_ANIM_PTR(sIllumiseAnims_9_3),
	AX_ANIM_PTR(sIllumiseAnims_9_4),
	AX_ANIM_PTR(sIllumiseAnims_9_5),
	AX_ANIM_PTR(sIllumiseAnims_9_6),
	AX_ANIM_PTR(sIllumiseAnims_9_7),
	AX_ANIM_PTR(sIllumiseAnims_9_8),
};

static const ax_anim *const sIllumiseAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01333),
	AX_ANIM_PTR(gAxSharedAnim_01347),
	AX_ANIM_PTR(gAxSharedAnim_01357),
	AX_ANIM_PTR(gAxSharedAnim_01365),
	AX_ANIM_PTR(gAxSharedAnim_01373),
	AX_ANIM_PTR(gAxSharedAnim_01384),
	AX_ANIM_PTR(gAxSharedAnim_01395),
	AX_ANIM_PTR(gAxSharedAnim_01410),
};

static const ax_anim *const sIllumiseAnimTable11[] = {
	AX_ANIM_PTR(sIllumiseAnims_11_1),
	AX_ANIM_PTR(sIllumiseAnims_11_2),
	AX_ANIM_PTR(sIllumiseAnims_11_3),
	AX_ANIM_PTR(sIllumiseAnims_11_4),
	AX_ANIM_PTR(sIllumiseAnims_11_5),
	AX_ANIM_PTR(sIllumiseAnims_11_6),
	AX_ANIM_PTR(sIllumiseAnims_11_7),
	AX_ANIM_PTR(sIllumiseAnims_11_8),
};

static const ax_anim *const sIllumiseAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01587),
	AX_ANIM_PTR(gAxSharedAnim_01627),
	AX_ANIM_PTR(gAxSharedAnim_01617),
	AX_ANIM_PTR(gAxSharedAnim_01610),
	AX_ANIM_PTR(gAxSharedAnim_01609),
	AX_ANIM_PTR(gAxSharedAnim_01603),
	AX_ANIM_PTR(gAxSharedAnim_01595),
	AX_ANIM_PTR(gAxSharedAnim_01588),
};

static const ax_anim *const sIllumiseAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01637),
	AX_ANIM_PTR(gAxSharedAnim_01670),
	AX_ANIM_PTR(gAxSharedAnim_01667),
	AX_ANIM_PTR(gAxSharedAnim_01663),
	AX_ANIM_PTR(gAxSharedAnim_01658),
	AX_ANIM_PTR(gAxSharedAnim_01653),
	AX_ANIM_PTR(gAxSharedAnim_01649),
	AX_ANIM_PTR(gAxSharedAnim_01644),
};

static const ax_anim *const *const sAxAnimationsIllumise[] = {
	sIllumiseAnimTable1,
	sIllumiseAnimTable2,
	sIllumiseAnimTable3,
	sIllumiseAnimTable4,
	sIllumiseAnimTable5,
	sIllumiseAnimTable6,
	sIllumiseAnimTable7,
	sIllumiseAnimTable8,
	sIllumiseAnimTable9,
	sIllumiseAnimTable10,
	sIllumiseAnimTable11,
	sIllumiseAnimTable12,
	sIllumiseAnimTable13,
};

static const ax_sprite *const sAxSpritesIllumise[] = {
	sIllumiseSprites1,
	sIllumiseSprites2,
	sIllumiseSprites3,
	sIllumiseSprites4,
	sIllumiseSprites5,
	sIllumiseSprites6,
	sIllumiseSprites7,
	sIllumiseSprites8,
	sIllumiseSprites9,
	sIllumiseSprites10,
	sIllumiseSprites11,
	sIllumiseSprites12,
	sIllumiseSprites13,
	sIllumiseSprites14,
	sIllumiseSprites15,
	sIllumiseSprites16,
	sIllumiseSprites17,
	sIllumiseSprites18,
	sIllumiseSprites19,
	sIllumiseSprites20,
	sIllumiseSprites21,
	sIllumiseSprites22,
	sIllumiseSprites23,
	sIllumiseSprites24,
	sIllumiseSprites25,
	sIllumiseSprites26,
	sIllumiseSprites27,
	sIllumiseSprites28,
	sIllumiseSprites29,
	sIllumiseSprites30,
	sIllumiseSprites31,
	sIllumiseSprites32,
	sIllumiseSprites33,
	sIllumiseSprites34,
	sIllumiseSprites35,
	sIllumiseSprites36,
	sIllumiseSprites37,
	sIllumiseSprites38,
	sIllumiseSprites39,
	sIllumiseSprites40,
	sIllumiseSprites41,
	sIllumiseSprites42,
	sIllumiseSprites43,
};

static const axmain sAxMainIllumise = {
	.poses = sAxPosesIllumise,
	.animations = sAxAnimationsIllumise,
	.animCount = ARRAY_COUNT(sAxAnimationsIllumise),
	.spriteData = sAxSpritesIllumise,
	.positions = sAxPositionsIllumise,
};
