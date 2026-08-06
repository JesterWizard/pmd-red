/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainSnubbull;
const SiroArchive gAxSnubbull = {"SIRO", &sAxMainSnubbull};

static const ax_pose sSnubbullPose1[] = {
	AX_POSE(0, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose3[] = {
	AX_POSE(2, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose4[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose5[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose6[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose8[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose10[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose11[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose12[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose13[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose14[] = {
	AX_POSE(13, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose15[] = {
	AX_POSE(14, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose16[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose17[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose18[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose19[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose20[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose21[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose22[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose23[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose24[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose74[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose75[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose77[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose78[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose80[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose81[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose83[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose84[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose86[] = {
	AX_POSE(23, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose87[] = {
	AX_POSE(24, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose89[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose90[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose92[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose93[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose95[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose96[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose177[] = {
	AX_POSE(25, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose178[] = {
	AX_POSE(26, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose179[] = {
	AX_POSE(27, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose180[] = {
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose181[] = {
	AX_POSE(29, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose182[] = {
	AX_POSE(30, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose183[] = {
	AX_POSE(31, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose184[] = {
	AX_POSE(30, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose185[] = {
	AX_POSE(29, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose186[] = {
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose220[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose221[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose224[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose225[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose226[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose231[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose232[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose234[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose235[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose237[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose238[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose243[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose244[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose246[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose247[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose250[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose253[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose254[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose257[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnubbullPose258[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const u8 sSnubbullAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_2_2.lz");
static const u8 sSnubbullAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_2_3.lz");
static const u8 sSnubbullAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_2_4.lz");
static const u8 sSnubbullAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_2_6.lz");
static const u8 sSnubbullAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_2_7.lz");
static const u8 sSnubbullAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_2_8.lz");
static const u8 sSnubbullAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_3_2.lz");
static const u8 sSnubbullAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_3_3.lz");
static const u8 sSnubbullAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_3_4.lz");
static const u8 sSnubbullAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_3_6.lz");
static const u8 sSnubbullAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_3_7.lz");
static const u8 sSnubbullAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_3_8.lz");
static const u8 sSnubbullAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_4_1.lz");
static const u8 sSnubbullAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_4_2.lz");
static const u8 sSnubbullAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_4_3.lz");
static const u8 sSnubbullAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_4_4.lz");
static const u8 sSnubbullAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_4_5.lz");
static const u8 sSnubbullAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_4_6.lz");
static const u8 sSnubbullAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_4_7.lz");
static const u8 sSnubbullAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_4_8.lz");
static const u8 sSnubbullAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_5_1.lz");
static const u8 sSnubbullAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_5_2.lz");
static const u8 sSnubbullAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_5_3.lz");
static const u8 sSnubbullAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_5_4.lz");
static const u8 sSnubbullAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_5_5.lz");
static const u8 sSnubbullAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_5_6.lz");
static const u8 sSnubbullAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_5_7.lz");
static const u8 sSnubbullAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_5_8.lz");
static const u8 sSnubbullAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_8_1.lz");
static const u8 sSnubbullAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_8_2.lz");
static const u8 sSnubbullAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_8_3.lz");
static const u8 sSnubbullAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_8_4.lz");
static const u8 sSnubbullAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_8_5.lz");
static const u8 sSnubbullAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_8_6.lz");
static const u8 sSnubbullAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_8_7.lz");
static const u8 sSnubbullAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_8_8.lz");
static const u8 sSnubbullAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_9_1.lz");
static const u8 sSnubbullAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_9_2.lz");
static const u8 sSnubbullAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_9_3.lz");
static const u8 sSnubbullAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_9_4.lz");
static const u8 sSnubbullAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_9_5.lz");
static const u8 sSnubbullAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_9_6.lz");
static const u8 sSnubbullAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_9_7.lz");
static const u8 sSnubbullAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_9_8.lz");
static const u8 sSnubbullAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_11_1.lz");
static const u8 sSnubbullAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_11_2.lz");
static const u8 sSnubbullAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_11_4.lz");
static const u8 sSnubbullAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_11_5.lz");
static const u8 sSnubbullAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_11_6.lz");
static const u8 sSnubbullAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_11_7.lz");
static const u8 sSnubbullAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/snubbull/sSnubbullAnims_11_8.lz");

static const u8 sSnubbullGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_1.4bpp.lz");
static const ax_sprite sSnubbullSprites1[] = {
	{sSnubbullGfx1, ARRAY_COUNT(sSnubbullGfx1)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_2.4bpp.lz");
static const ax_sprite sSnubbullSprites2[] = {
	{sSnubbullGfx2, ARRAY_COUNT(sSnubbullGfx2)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_3.4bpp.lz");
static const ax_sprite sSnubbullSprites3[] = {
	{sSnubbullGfx3, ARRAY_COUNT(sSnubbullGfx3)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_4.4bpp.lz");
static const ax_sprite sSnubbullSprites4[] = {
	{sSnubbullGfx4, ARRAY_COUNT(sSnubbullGfx4)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_5.4bpp.lz");
static const ax_sprite sSnubbullSprites5[] = {
	{sSnubbullGfx5, ARRAY_COUNT(sSnubbullGfx5)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_6.4bpp.lz");
static const ax_sprite sSnubbullSprites6[] = {
	{sSnubbullGfx6, ARRAY_COUNT(sSnubbullGfx6)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_7.4bpp.lz");
static const ax_sprite sSnubbullSprites7[] = {
	{sSnubbullGfx7, ARRAY_COUNT(sSnubbullGfx7)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_8.4bpp.lz");
static const ax_sprite sSnubbullSprites8[] = {
	{sSnubbullGfx8, ARRAY_COUNT(sSnubbullGfx8)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_9.4bpp.lz");
static const ax_sprite sSnubbullSprites9[] = {
	{sSnubbullGfx9, ARRAY_COUNT(sSnubbullGfx9)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_10.4bpp.lz");
static const ax_sprite sSnubbullSprites10[] = {
	{sSnubbullGfx10, ARRAY_COUNT(sSnubbullGfx10)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_11.4bpp.lz");
static const ax_sprite sSnubbullSprites11[] = {
	{sSnubbullGfx11, ARRAY_COUNT(sSnubbullGfx11)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_12.4bpp.lz");
static const ax_sprite sSnubbullSprites12[] = {
	{sSnubbullGfx12, ARRAY_COUNT(sSnubbullGfx12)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_13.4bpp.lz");
static const ax_sprite sSnubbullSprites13[] = {
	{sSnubbullGfx13, ARRAY_COUNT(sSnubbullGfx13)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_14.4bpp.lz");
static const ax_sprite sSnubbullSprites14[] = {
	{sSnubbullGfx14, ARRAY_COUNT(sSnubbullGfx14)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_15.4bpp.lz");
static const ax_sprite sSnubbullSprites15[] = {
	{sSnubbullGfx15, ARRAY_COUNT(sSnubbullGfx15)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_16.4bpp.lz");
static const u8 sSnubbullGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_16_1.4bpp.lz");
static const u8 sSnubbullGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_16_2.4bpp.lz");
static const ax_sprite sSnubbullSprites16[] = {
	{sSnubbullGfx16, ARRAY_COUNT(sSnubbullGfx16)}, 
	{NULL, 32}, 
	{sSnubbullGfx16_1, ARRAY_COUNT(sSnubbullGfx16_1)}, 
	{NULL, 32}, 
	{sSnubbullGfx16_2, ARRAY_COUNT(sSnubbullGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_17.4bpp.lz");
static const u8 sSnubbullGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_17_1.4bpp.lz");
static const u8 sSnubbullGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_17_2.4bpp.lz");
static const ax_sprite sSnubbullSprites17[] = {
	{sSnubbullGfx17, ARRAY_COUNT(sSnubbullGfx17)}, 
	{NULL, 32}, 
	{sSnubbullGfx17_1, ARRAY_COUNT(sSnubbullGfx17_1)}, 
	{NULL, 32}, 
	{sSnubbullGfx17_2, ARRAY_COUNT(sSnubbullGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_18.4bpp.lz");
static const u8 sSnubbullGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_18_1.4bpp.lz");
static const u8 sSnubbullGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_18_2.4bpp.lz");
static const ax_sprite sSnubbullSprites18[] = {
	{sSnubbullGfx18, ARRAY_COUNT(sSnubbullGfx18)}, 
	{NULL, 32}, 
	{sSnubbullGfx18_1, ARRAY_COUNT(sSnubbullGfx18_1)}, 
	{NULL, 32}, 
	{sSnubbullGfx18_2, ARRAY_COUNT(sSnubbullGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_19.4bpp.lz");
static const u8 sSnubbullGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_19_1.4bpp.lz");
static const u8 sSnubbullGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_19_2.4bpp.lz");
static const ax_sprite sSnubbullSprites19[] = {
	{sSnubbullGfx19, ARRAY_COUNT(sSnubbullGfx19)}, 
	{NULL, 32}, 
	{sSnubbullGfx19_1, ARRAY_COUNT(sSnubbullGfx19_1)}, 
	{NULL, 32}, 
	{sSnubbullGfx19_2, ARRAY_COUNT(sSnubbullGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_20.4bpp.lz");
static const u8 sSnubbullGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_20_1.4bpp.lz");
static const u8 sSnubbullGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_20_2.4bpp.lz");
static const ax_sprite sSnubbullSprites20[] = {
	{sSnubbullGfx20, ARRAY_COUNT(sSnubbullGfx20)}, 
	{NULL, 64}, 
	{sSnubbullGfx20_1, ARRAY_COUNT(sSnubbullGfx20_1)}, 
	{NULL, 32}, 
	{sSnubbullGfx20_2, ARRAY_COUNT(sSnubbullGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_21.4bpp.lz");
static const u8 sSnubbullGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_21_1.4bpp.lz");
static const u8 sSnubbullGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_21_2.4bpp.lz");
static const ax_sprite sSnubbullSprites21[] = {
	{sSnubbullGfx21, ARRAY_COUNT(sSnubbullGfx21)}, 
	{NULL, 32}, 
	{sSnubbullGfx21_1, ARRAY_COUNT(sSnubbullGfx21_1)}, 
	{NULL, 32}, 
	{sSnubbullGfx21_2, ARRAY_COUNT(sSnubbullGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_22.4bpp.lz");
static const u8 sSnubbullGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_22_1.4bpp.lz");
static const u8 sSnubbullGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_22_2.4bpp.lz");
static const ax_sprite sSnubbullSprites22[] = {
	{sSnubbullGfx22, ARRAY_COUNT(sSnubbullGfx22)}, 
	{NULL, 32}, 
	{sSnubbullGfx22_1, ARRAY_COUNT(sSnubbullGfx22_1)}, 
	{NULL, 64}, 
	{sSnubbullGfx22_2, ARRAY_COUNT(sSnubbullGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_23.4bpp.lz");
static const u8 sSnubbullGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_23_1.4bpp.lz");
static const u8 sSnubbullGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_23_2.4bpp.lz");
static const ax_sprite sSnubbullSprites23[] = {
	{sSnubbullGfx23, ARRAY_COUNT(sSnubbullGfx23)}, 
	{NULL, 32}, 
	{sSnubbullGfx23_1, ARRAY_COUNT(sSnubbullGfx23_1)}, 
	{NULL, 64}, 
	{sSnubbullGfx23_2, ARRAY_COUNT(sSnubbullGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_24.4bpp.lz");
static const u8 sSnubbullGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_24_1.4bpp.lz");
static const u8 sSnubbullGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_24_2.4bpp.lz");
static const ax_sprite sSnubbullSprites24[] = {
	{sSnubbullGfx24, ARRAY_COUNT(sSnubbullGfx24)}, 
	{NULL, 32}, 
	{sSnubbullGfx24_1, ARRAY_COUNT(sSnubbullGfx24_1)}, 
	{NULL, 32}, 
	{sSnubbullGfx24_2, ARRAY_COUNT(sSnubbullGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_25.4bpp.lz");
static const u8 sSnubbullGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_25_1.4bpp.lz");
static const u8 sSnubbullGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_25_2.4bpp.lz");
static const ax_sprite sSnubbullSprites25[] = {
	{sSnubbullGfx25, ARRAY_COUNT(sSnubbullGfx25)}, 
	{NULL, 32}, 
	{sSnubbullGfx25_1, ARRAY_COUNT(sSnubbullGfx25_1)}, 
	{NULL, 32}, 
	{sSnubbullGfx25_2, ARRAY_COUNT(sSnubbullGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_26.4bpp.lz");
static const ax_sprite sSnubbullSprites26[] = {
	{sSnubbullGfx26, ARRAY_COUNT(sSnubbullGfx26)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_27.4bpp.lz");
static const ax_sprite sSnubbullSprites27[] = {
	{sSnubbullGfx27, ARRAY_COUNT(sSnubbullGfx27)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_28.4bpp.lz");
static const ax_sprite sSnubbullSprites28[] = {
	{sSnubbullGfx28, ARRAY_COUNT(sSnubbullGfx28)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_29.4bpp.lz");
static const ax_sprite sSnubbullSprites29[] = {
	{sSnubbullGfx29, ARRAY_COUNT(sSnubbullGfx29)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_30.4bpp.lz");
static const ax_sprite sSnubbullSprites30[] = {
	{sSnubbullGfx30, ARRAY_COUNT(sSnubbullGfx30)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_31.4bpp.lz");
static const ax_sprite sSnubbullSprites31[] = {
	{sSnubbullGfx31, ARRAY_COUNT(sSnubbullGfx31)}, 
	{NULL, 0}
};
static const u8 sSnubbullGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snubbull/sprite_32.4bpp.lz");
static const ax_sprite sSnubbullSprites32[] = {
	{sSnubbullGfx32, ARRAY_COUNT(sSnubbullGfx32)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesSnubbull[] = {
	sSnubbullPose1,
	sSnubbullPose2,
	sSnubbullPose3,
	sSnubbullPose4,
	sSnubbullPose5,
	sSnubbullPose6,
	sSnubbullPose7,
	sSnubbullPose8,
	sSnubbullPose9,
	sSnubbullPose10,
	sSnubbullPose11,
	sSnubbullPose12,
	sSnubbullPose13,
	sSnubbullPose14,
	sSnubbullPose15,
	sSnubbullPose16,
	sSnubbullPose17,
	sSnubbullPose18,
	sSnubbullPose19,
	sSnubbullPose20,
	sSnubbullPose21,
	sSnubbullPose22,
	sSnubbullPose23,
	sSnubbullPose24,
	sSnubbullPose1,
	sSnubbullPose2,
	sSnubbullPose3,
	sSnubbullPose4,
	sSnubbullPose5,
	sSnubbullPose6,
	sSnubbullPose7,
	sSnubbullPose8,
	sSnubbullPose9,
	sSnubbullPose10,
	sSnubbullPose11,
	sSnubbullPose12,
	sSnubbullPose13,
	sSnubbullPose14,
	sSnubbullPose15,
	sSnubbullPose16,
	sSnubbullPose17,
	sSnubbullPose18,
	sSnubbullPose19,
	sSnubbullPose20,
	sSnubbullPose21,
	sSnubbullPose22,
	sSnubbullPose23,
	sSnubbullPose24,
	sSnubbullPose1,
	sSnubbullPose2,
	sSnubbullPose3,
	sSnubbullPose4,
	sSnubbullPose5,
	sSnubbullPose6,
	sSnubbullPose7,
	sSnubbullPose8,
	sSnubbullPose9,
	sSnubbullPose10,
	sSnubbullPose11,
	sSnubbullPose12,
	sSnubbullPose13,
	sSnubbullPose14,
	sSnubbullPose15,
	sSnubbullPose16,
	sSnubbullPose17,
	sSnubbullPose18,
	sSnubbullPose19,
	sSnubbullPose20,
	sSnubbullPose21,
	sSnubbullPose22,
	sSnubbullPose23,
	sSnubbullPose24,
	sSnubbullPose1,
	sSnubbullPose74,
	sSnubbullPose75,
	sSnubbullPose4,
	sSnubbullPose77,
	sSnubbullPose78,
	sSnubbullPose7,
	sSnubbullPose80,
	sSnubbullPose81,
	sSnubbullPose10,
	sSnubbullPose83,
	sSnubbullPose84,
	sSnubbullPose13,
	sSnubbullPose86,
	sSnubbullPose87,
	sSnubbullPose16,
	sSnubbullPose89,
	sSnubbullPose90,
	sSnubbullPose19,
	sSnubbullPose92,
	sSnubbullPose93,
	sSnubbullPose22,
	sSnubbullPose95,
	sSnubbullPose96,
	sSnubbullPose1,
	sSnubbullPose22,
	sSnubbullPose19,
	sSnubbullPose16,
	sSnubbullPose13,
	sSnubbullPose10,
	sSnubbullPose7,
	sSnubbullPose4,
	sSnubbullPose2,
	sSnubbullPose3,
	sSnubbullPose1,
	sSnubbullPose22,
	sSnubbullPose19,
	sSnubbullPose16,
	sSnubbullPose13,
	sSnubbullPose10,
	sSnubbullPose7,
	sSnubbullPose4,
	sSnubbullPose5,
	sSnubbullPose6,
	sSnubbullPose1,
	sSnubbullPose22,
	sSnubbullPose19,
	sSnubbullPose16,
	sSnubbullPose13,
	sSnubbullPose10,
	sSnubbullPose7,
	sSnubbullPose4,
	sSnubbullPose8,
	sSnubbullPose9,
	sSnubbullPose1,
	sSnubbullPose22,
	sSnubbullPose19,
	sSnubbullPose16,
	sSnubbullPose13,
	sSnubbullPose10,
	sSnubbullPose7,
	sSnubbullPose4,
	sSnubbullPose11,
	sSnubbullPose12,
	sSnubbullPose1,
	sSnubbullPose22,
	sSnubbullPose19,
	sSnubbullPose16,
	sSnubbullPose13,
	sSnubbullPose10,
	sSnubbullPose7,
	sSnubbullPose4,
	sSnubbullPose14,
	sSnubbullPose15,
	sSnubbullPose1,
	sSnubbullPose22,
	sSnubbullPose19,
	sSnubbullPose16,
	sSnubbullPose13,
	sSnubbullPose10,
	sSnubbullPose7,
	sSnubbullPose4,
	sSnubbullPose17,
	sSnubbullPose18,
	sSnubbullPose1,
	sSnubbullPose22,
	sSnubbullPose19,
	sSnubbullPose16,
	sSnubbullPose13,
	sSnubbullPose10,
	sSnubbullPose7,
	sSnubbullPose4,
	sSnubbullPose20,
	sSnubbullPose21,
	sSnubbullPose1,
	sSnubbullPose22,
	sSnubbullPose19,
	sSnubbullPose16,
	sSnubbullPose13,
	sSnubbullPose10,
	sSnubbullPose7,
	sSnubbullPose4,
	sSnubbullPose23,
	sSnubbullPose24,
	sSnubbullPose177,
	sSnubbullPose178,
	sSnubbullPose179,
	sSnubbullPose180,
	sSnubbullPose181,
	sSnubbullPose182,
	sSnubbullPose183,
	sSnubbullPose184,
	sSnubbullPose185,
	sSnubbullPose186,
	sSnubbullPose1,
	sSnubbullPose2,
	sSnubbullPose3,
	sSnubbullPose4,
	sSnubbullPose5,
	sSnubbullPose6,
	sSnubbullPose7,
	sSnubbullPose8,
	sSnubbullPose9,
	sSnubbullPose10,
	sSnubbullPose11,
	sSnubbullPose12,
	sSnubbullPose13,
	sSnubbullPose14,
	sSnubbullPose15,
	sSnubbullPose16,
	sSnubbullPose17,
	sSnubbullPose18,
	sSnubbullPose19,
	sSnubbullPose20,
	sSnubbullPose21,
	sSnubbullPose22,
	sSnubbullPose23,
	sSnubbullPose24,
	sSnubbullPose1,
	sSnubbullPose22,
	sSnubbullPose19,
	sSnubbullPose16,
	sSnubbullPose13,
	sSnubbullPose10,
	sSnubbullPose7,
	sSnubbullPose4,
	sSnubbullPose74,
	sSnubbullPose220,
	sSnubbullPose221,
	sSnubbullPose83,
	sSnubbullPose86,
	sSnubbullPose224,
	sSnubbullPose225,
	sSnubbullPose226,
	sSnubbullPose1,
	sSnubbullPose74,
	sSnubbullPose75,
	sSnubbullPose4,
	sSnubbullPose231,
	sSnubbullPose232,
	sSnubbullPose7,
	sSnubbullPose234,
	sSnubbullPose235,
	sSnubbullPose10,
	sSnubbullPose237,
	sSnubbullPose238,
	sSnubbullPose13,
	sSnubbullPose86,
	sSnubbullPose87,
	sSnubbullPose16,
	sSnubbullPose243,
	sSnubbullPose244,
	sSnubbullPose19,
	sSnubbullPose246,
	sSnubbullPose247,
	sSnubbullPose22,
	sSnubbullPose226,
	sSnubbullPose250,
	sSnubbullPose75,
	sSnubbullPose250,
	sSnubbullPose253,
	sSnubbullPose254,
	sSnubbullPose87,
	sSnubbullPose84,
	sSnubbullPose257,
	sSnubbullPose258,
	sSnubbullPose1,
	sSnubbullPose22,
	sSnubbullPose19,
	sSnubbullPose16,
	sSnubbullPose13,
	sSnubbullPose10,
	sSnubbullPose7,
	sSnubbullPose4,
};

static const struct PositionSets sAxPositionsSnubbull[] = {
	[0] = { .set = { {-1, -8}, {-8, -5}, {6, -5}, {-1, -7} } },
	[1] = { .set = { {-1, -7}, {-7, -5}, {5, -3}, {-1, -6} } },
	[2] = { .set = { {-1, -7}, {-7, -3}, {5, -5}, {-1, -6} } },
	[3] = { .set = { {2, -8}, {4, -6}, {-5, -4}, {0, -8} } },
	[4] = { .set = { {2, -6}, {4, -5}, {-3, -3}, {0, -6} } },
	[5] = { .set = { {2, -7}, {5, -6}, {-6, -3}, {0, -7} } },
	[6] = { .set = { {4, -9}, {1, -4}, {-1, -4}, {-1, -8} } },
	[7] = { .set = { {4, -7}, {-2, -2}, {1, -3}, {-1, -7} } },
	[8] = { .set = { {3, -7}, {1, -2}, {-3, -3}, {-1, -7} } },
	[9] = { .set = { {5, -11}, {-6, -5}, {2, -4}, {-2, -9} } },
	[10] = { .set = { {5, -10}, {-7, -4}, {4, -4}, {-2, -8} } },
	[11] = { .set = { {5, -9}, {-4, -4}, {0, -3}, {-2, -8} } },
	[12] = { .set = { {-1, -12}, {-8, -5}, {6, -5}, {-1, -8} } },
	[13] = { .set = { {-2, -11}, {-8, -6}, {5, -4}, {-1, -7} } },
	[14] = { .set = { {1, -11}, {-7, -4}, {6, -6}, {0, -7} } },
	[15] = { .set = { {-7, -11}, {4, -5}, {-4, -4}, {0, -9} } },
	[16] = { .set = { {-7, -10}, {5, -4}, {-6, -4}, {0, -8} } },
	[17] = { .set = { {-7, -9}, {2, -4}, {-2, -3}, {0, -8} } },
	[18] = { .set = { {-6, -9}, {-3, -4}, {-1, -4}, {-1, -8} } },
	[19] = { .set = { {-6, -7}, {0, -2}, {-3, -3}, {-1, -7} } },
	[20] = { .set = { {-5, -7}, {-3, -2}, {1, -3}, {-1, -7} } },
	[21] = { .set = { {-4, -8}, {-6, -6}, {3, -4}, {-2, -8} } },
	[22] = { .set = { {-4, -6}, {-6, -5}, {1, -3}, {-2, -6} } },
	[23] = { .set = { {-4, -7}, {-7, -6}, {4, -3}, {-2, -7} } },
	[24] = { .set = { {-1, -8}, {-8, -5}, {6, -5}, {-1, -7} } },
	[25] = { .set = { {-1, -7}, {-7, -5}, {5, -3}, {-1, -6} } },
	[26] = { .set = { {-1, -7}, {-7, -3}, {5, -5}, {-1, -6} } },
	[27] = { .set = { {2, -8}, {4, -6}, {-5, -4}, {0, -8} } },
	[28] = { .set = { {2, -6}, {4, -5}, {-3, -3}, {0, -6} } },
	[29] = { .set = { {2, -7}, {5, -6}, {-6, -3}, {0, -7} } },
	[30] = { .set = { {4, -9}, {1, -4}, {-1, -4}, {-1, -8} } },
	[31] = { .set = { {4, -7}, {-2, -2}, {1, -3}, {-1, -7} } },
	[32] = { .set = { {3, -7}, {1, -2}, {-3, -3}, {-1, -7} } },
	[33] = { .set = { {5, -11}, {-6, -5}, {2, -4}, {-2, -9} } },
	[34] = { .set = { {5, -10}, {-7, -4}, {4, -4}, {-2, -8} } },
	[35] = { .set = { {5, -9}, {-4, -4}, {0, -3}, {-2, -8} } },
	[36] = { .set = { {-1, -12}, {-8, -5}, {6, -5}, {-1, -8} } },
	[37] = { .set = { {-2, -11}, {-8, -6}, {5, -4}, {-1, -7} } },
	[38] = { .set = { {1, -11}, {-7, -4}, {6, -6}, {0, -7} } },
	[39] = { .set = { {-7, -11}, {4, -5}, {-4, -4}, {0, -9} } },
	[40] = { .set = { {-7, -10}, {5, -4}, {-6, -4}, {0, -8} } },
	[41] = { .set = { {-7, -9}, {2, -4}, {-2, -3}, {0, -8} } },
	[42] = { .set = { {-6, -9}, {-3, -4}, {-1, -4}, {-1, -8} } },
	[43] = { .set = { {-6, -7}, {0, -2}, {-3, -3}, {-1, -7} } },
	[44] = { .set = { {-5, -7}, {-3, -2}, {1, -3}, {-1, -7} } },
	[45] = { .set = { {-4, -8}, {-6, -6}, {3, -4}, {-2, -8} } },
	[46] = { .set = { {-4, -6}, {-6, -5}, {1, -3}, {-2, -6} } },
	[47] = { .set = { {-4, -7}, {-7, -6}, {4, -3}, {-2, -7} } },
	[48] = { .set = { {-1, -8}, {-8, -5}, {6, -5}, {-1, -7} } },
	[49] = { .set = { {-1, -7}, {-7, -5}, {5, -3}, {-1, -6} } },
	[50] = { .set = { {-1, -7}, {-7, -3}, {5, -5}, {-1, -6} } },
	[51] = { .set = { {2, -8}, {4, -6}, {-5, -4}, {0, -8} } },
	[52] = { .set = { {2, -6}, {4, -5}, {-3, -3}, {0, -6} } },
	[53] = { .set = { {2, -7}, {5, -6}, {-6, -3}, {0, -7} } },
	[54] = { .set = { {4, -9}, {1, -4}, {-1, -4}, {-1, -8} } },
	[55] = { .set = { {4, -7}, {-2, -2}, {1, -3}, {-1, -7} } },
	[56] = { .set = { {3, -7}, {1, -2}, {-3, -3}, {-1, -7} } },
	[57] = { .set = { {5, -11}, {-6, -5}, {2, -4}, {-2, -9} } },
	[58] = { .set = { {5, -10}, {-7, -4}, {4, -4}, {-2, -8} } },
	[59] = { .set = { {5, -9}, {-4, -4}, {0, -3}, {-2, -8} } },
	[60] = { .set = { {-1, -12}, {-8, -5}, {6, -5}, {-1, -8} } },
	[61] = { .set = { {-2, -11}, {-8, -6}, {5, -4}, {-1, -7} } },
	[62] = { .set = { {1, -11}, {-7, -4}, {6, -6}, {0, -7} } },
	[63] = { .set = { {-7, -11}, {4, -5}, {-4, -4}, {0, -9} } },
	[64] = { .set = { {-7, -10}, {5, -4}, {-6, -4}, {0, -8} } },
	[65] = { .set = { {-7, -9}, {2, -4}, {-2, -3}, {0, -8} } },
	[66] = { .set = { {-6, -9}, {-3, -4}, {-1, -4}, {-1, -8} } },
	[67] = { .set = { {-6, -7}, {0, -2}, {-3, -3}, {-1, -7} } },
	[68] = { .set = { {-5, -7}, {-3, -2}, {1, -3}, {-1, -7} } },
	[69] = { .set = { {-4, -8}, {-6, -6}, {3, -4}, {-2, -8} } },
	[70] = { .set = { {-4, -6}, {-6, -5}, {1, -3}, {-2, -6} } },
	[71] = { .set = { {-4, -7}, {-7, -6}, {4, -3}, {-2, -7} } },
	[72] = { .set = { {-1, -8}, {-8, -5}, {6, -5}, {-1, -7} } },
	[73] = { .set = { {-1, -4}, {-8, -5}, {6, -5}, {-1, -6} } },
	[74] = { .set = { {-1, -5}, {-8, -6}, {6, -6}, {-1, -7} } },
	[75] = { .set = { {2, -8}, {4, -6}, {-5, -4}, {0, -8} } },
	[76] = { .set = { {6, -5}, {5, -4}, {-4, -5}, {2, -6} } },
	[77] = { .set = { {6, -5}, {6, -7}, {-3, -5}, {2, -6} } },
	[78] = { .set = { {4, -9}, {1, -4}, {-1, -4}, {-1, -8} } },
	[79] = { .set = { {9, -8}, {2, -8}, {0, -5}, {4, -8} } },
	[80] = { .set = { {9, -8}, {4, -9}, {1, -7}, {5, -9} } },
	[81] = { .set = { {5, -11}, {-6, -5}, {2, -4}, {-2, -9} } },
	[82] = { .set = { {5, -12}, {-5, -7}, {4, -5}, {1, -8} } },
	[83] = { .set = { {7, -10}, {-3, -10}, {5, -7}, {0, -9} } },
	[84] = { .set = { {-1, -12}, {-8, -5}, {6, -5}, {-1, -8} } },
	[85] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -9} } },
	[86] = { .set = { {-1, -11}, {-7, -10}, {5, -10}, {-1, -10} } },
	[87] = { .set = { {-7, -11}, {4, -5}, {-4, -4}, {0, -9} } },
	[88] = { .set = { {-8, -12}, {2, -7}, {-7, -5}, {-4, -8} } },
	[89] = { .set = { {-10, -10}, {0, -10}, {-8, -7}, {-3, -9} } },
	[90] = { .set = { {-6, -9}, {-3, -4}, {-1, -4}, {-1, -8} } },
	[91] = { .set = { {-11, -8}, {-4, -8}, {-2, -5}, {-6, -8} } },
	[92] = { .set = { {-11, -8}, {-6, -9}, {-3, -7}, {-7, -9} } },
	[93] = { .set = { {-4, -8}, {-6, -6}, {3, -4}, {-2, -8} } },
	[94] = { .set = { {-8, -5}, {-7, -4}, {2, -5}, {-4, -6} } },
	[95] = { .set = { {-8, -5}, {-8, -7}, {1, -5}, {-4, -6} } },
	[96] = { .set = { {-1, -8}, {-8, -5}, {6, -5}, {-1, -7} } },
	[97] = { .set = { {-4, -8}, {-6, -6}, {3, -4}, {-2, -8} } },
	[98] = { .set = { {-6, -9}, {-3, -4}, {-1, -4}, {-1, -8} } },
	[99] = { .set = { {-7, -11}, {4, -5}, {-4, -4}, {0, -9} } },
	[100] = { .set = { {-1, -12}, {-8, -5}, {6, -5}, {-1, -8} } },
	[101] = { .set = { {5, -11}, {-6, -5}, {2, -4}, {-2, -9} } },
	[102] = { .set = { {4, -9}, {1, -4}, {-1, -4}, {-1, -8} } },
	[103] = { .set = { {2, -8}, {4, -6}, {-5, -4}, {0, -8} } },
	[104] = { .set = { {-1, -7}, {-7, -5}, {5, -3}, {-1, -6} } },
	[105] = { .set = { {-1, -7}, {-7, -3}, {5, -5}, {-1, -6} } },
	[106] = { .set = { {-1, -8}, {-8, -5}, {6, -5}, {-1, -7} } },
	[107] = { .set = { {-4, -8}, {-6, -6}, {3, -4}, {-2, -8} } },
	[108] = { .set = { {-6, -9}, {-3, -4}, {-1, -4}, {-1, -8} } },
	[109] = { .set = { {-7, -11}, {4, -5}, {-4, -4}, {0, -9} } },
	[110] = { .set = { {-1, -12}, {-8, -5}, {6, -5}, {-1, -8} } },
	[111] = { .set = { {5, -11}, {-6, -5}, {2, -4}, {-2, -9} } },
	[112] = { .set = { {4, -9}, {1, -4}, {-1, -4}, {-1, -8} } },
	[113] = { .set = { {2, -8}, {4, -6}, {-5, -4}, {0, -8} } },
	[114] = { .set = { {2, -6}, {4, -5}, {-3, -3}, {0, -6} } },
	[115] = { .set = { {2, -7}, {5, -6}, {-6, -3}, {0, -7} } },
	[116] = { .set = { {-1, -8}, {-8, -5}, {6, -5}, {-1, -7} } },
	[117] = { .set = { {-4, -8}, {-6, -6}, {3, -4}, {-2, -8} } },
	[118] = { .set = { {-6, -9}, {-3, -4}, {-1, -4}, {-1, -8} } },
	[119] = { .set = { {-7, -11}, {4, -5}, {-4, -4}, {0, -9} } },
	[120] = { .set = { {-1, -12}, {-8, -5}, {6, -5}, {-1, -8} } },
	[121] = { .set = { {5, -11}, {-6, -5}, {2, -4}, {-2, -9} } },
	[122] = { .set = { {4, -9}, {1, -4}, {-1, -4}, {-1, -8} } },
	[123] = { .set = { {2, -8}, {4, -6}, {-5, -4}, {0, -8} } },
	[124] = { .set = { {4, -7}, {-2, -2}, {1, -3}, {-1, -7} } },
	[125] = { .set = { {3, -7}, {1, -2}, {-3, -3}, {-1, -7} } },
	[126] = { .set = { {-1, -8}, {-8, -5}, {6, -5}, {-1, -7} } },
	[127] = { .set = { {-4, -8}, {-6, -6}, {3, -4}, {-2, -8} } },
	[128] = { .set = { {-6, -9}, {-3, -4}, {-1, -4}, {-1, -8} } },
	[129] = { .set = { {-7, -11}, {4, -5}, {-4, -4}, {0, -9} } },
	[130] = { .set = { {-1, -12}, {-8, -5}, {6, -5}, {-1, -8} } },
	[131] = { .set = { {5, -11}, {-6, -5}, {2, -4}, {-2, -9} } },
	[132] = { .set = { {4, -9}, {1, -4}, {-1, -4}, {-1, -8} } },
	[133] = { .set = { {2, -8}, {4, -6}, {-5, -4}, {0, -8} } },
	[134] = { .set = { {5, -10}, {-7, -4}, {4, -4}, {-2, -8} } },
	[135] = { .set = { {5, -9}, {-4, -4}, {0, -3}, {-2, -8} } },
	[136] = { .set = { {-1, -8}, {-8, -5}, {6, -5}, {-1, -7} } },
	[137] = { .set = { {-4, -8}, {-6, -6}, {3, -4}, {-2, -8} } },
	[138] = { .set = { {-6, -9}, {-3, -4}, {-1, -4}, {-1, -8} } },
	[139] = { .set = { {-7, -11}, {4, -5}, {-4, -4}, {0, -9} } },
	[140] = { .set = { {-1, -12}, {-8, -5}, {6, -5}, {-1, -8} } },
	[141] = { .set = { {5, -11}, {-6, -5}, {2, -4}, {-2, -9} } },
	[142] = { .set = { {4, -9}, {1, -4}, {-1, -4}, {-1, -8} } },
	[143] = { .set = { {2, -8}, {4, -6}, {-5, -4}, {0, -8} } },
	[144] = { .set = { {-2, -11}, {-8, -6}, {5, -4}, {-1, -7} } },
	[145] = { .set = { {1, -11}, {-7, -4}, {6, -6}, {0, -7} } },
	[146] = { .set = { {-1, -8}, {-8, -5}, {6, -5}, {-1, -7} } },
	[147] = { .set = { {-4, -8}, {-6, -6}, {3, -4}, {-2, -8} } },
	[148] = { .set = { {-6, -9}, {-3, -4}, {-1, -4}, {-1, -8} } },
	[149] = { .set = { {-7, -11}, {4, -5}, {-4, -4}, {0, -9} } },
	[150] = { .set = { {-1, -12}, {-8, -5}, {6, -5}, {-1, -8} } },
	[151] = { .set = { {5, -11}, {-6, -5}, {2, -4}, {-2, -9} } },
	[152] = { .set = { {4, -9}, {1, -4}, {-1, -4}, {-1, -8} } },
	[153] = { .set = { {2, -8}, {4, -6}, {-5, -4}, {0, -8} } },
	[154] = { .set = { {-7, -10}, {5, -4}, {-6, -4}, {0, -8} } },
	[155] = { .set = { {-7, -9}, {2, -4}, {-2, -3}, {0, -8} } },
	[156] = { .set = { {-1, -8}, {-8, -5}, {6, -5}, {-1, -7} } },
	[157] = { .set = { {-4, -8}, {-6, -6}, {3, -4}, {-2, -8} } },
	[158] = { .set = { {-6, -9}, {-3, -4}, {-1, -4}, {-1, -8} } },
	[159] = { .set = { {-7, -11}, {4, -5}, {-4, -4}, {0, -9} } },
	[160] = { .set = { {-1, -12}, {-8, -5}, {6, -5}, {-1, -8} } },
	[161] = { .set = { {5, -11}, {-6, -5}, {2, -4}, {-2, -9} } },
	[162] = { .set = { {4, -9}, {1, -4}, {-1, -4}, {-1, -8} } },
	[163] = { .set = { {2, -8}, {4, -6}, {-5, -4}, {0, -8} } },
	[164] = { .set = { {-6, -7}, {0, -2}, {-3, -3}, {-1, -7} } },
	[165] = { .set = { {-5, -7}, {-3, -2}, {1, -3}, {-1, -7} } },
	[166] = { .set = { {-1, -8}, {-8, -5}, {6, -5}, {-1, -7} } },
	[167] = { .set = { {-4, -8}, {-6, -6}, {3, -4}, {-2, -8} } },
	[168] = { .set = { {-6, -9}, {-3, -4}, {-1, -4}, {-1, -8} } },
	[169] = { .set = { {-7, -11}, {4, -5}, {-4, -4}, {0, -9} } },
	[170] = { .set = { {-1, -12}, {-8, -5}, {6, -5}, {-1, -8} } },
	[171] = { .set = { {5, -11}, {-6, -5}, {2, -4}, {-2, -9} } },
	[172] = { .set = { {4, -9}, {1, -4}, {-1, -4}, {-1, -8} } },
	[173] = { .set = { {2, -8}, {4, -6}, {-5, -4}, {0, -8} } },
	[174] = { .set = { {-4, -6}, {-6, -5}, {1, -3}, {-2, -6} } },
	[175] = { .set = { {-4, -7}, {-7, -6}, {4, -3}, {-2, -7} } },
	[176] = { .set = { {-3, -6}, {-6, -5}, {5, -3}, {-1, -5} } },
	[177] = { .set = { {-3, -5}, {-6, -5}, {5, -3}, {-1, -5} } },
	[178] = { .set = { {0, -9}, {-5, -8}, {5, -8}, {0, -8} } },
	[179] = { .set = { {0, -9}, {2, -8}, {-4, -6}, {-2, -10} } },
	[180] = { .set = { {3, -11}, {2, -11}, {0, -7}, {-1, -7} } },
	[181] = { .set = { {2, -12}, {0, -10}, {3, -9}, {0, -7} } },
	[182] = { .set = { {0, -9}, {-3, -8}, {3, -8}, {0, -6} } },
	[183] = { .set = { {-3, -12}, {-1, -10}, {-4, -9}, {-1, -7} } },
	[184] = { .set = { {-4, -11}, {-3, -11}, {-1, -7}, {0, -7} } },
	[185] = { .set = { {-1, -9}, {-3, -8}, {3, -6}, {1, -10} } },
	[186] = { .set = { {-1, -8}, {-8, -5}, {6, -5}, {-1, -7} } },
	[187] = { .set = { {-1, -7}, {-7, -5}, {5, -3}, {-1, -6} } },
	[188] = { .set = { {-1, -7}, {-7, -3}, {5, -5}, {-1, -6} } },
	[189] = { .set = { {2, -8}, {4, -6}, {-5, -4}, {0, -8} } },
	[190] = { .set = { {2, -6}, {4, -5}, {-3, -3}, {0, -6} } },
	[191] = { .set = { {2, -7}, {5, -6}, {-6, -3}, {0, -7} } },
	[192] = { .set = { {4, -9}, {1, -4}, {-1, -4}, {-1, -8} } },
	[193] = { .set = { {4, -7}, {-2, -2}, {1, -3}, {-1, -7} } },
	[194] = { .set = { {3, -7}, {1, -2}, {-3, -3}, {-1, -7} } },
	[195] = { .set = { {5, -11}, {-6, -5}, {2, -4}, {-2, -9} } },
	[196] = { .set = { {5, -10}, {-7, -4}, {4, -4}, {-2, -8} } },
	[197] = { .set = { {5, -9}, {-4, -4}, {0, -3}, {-2, -8} } },
	[198] = { .set = { {-1, -12}, {-8, -5}, {6, -5}, {-1, -8} } },
	[199] = { .set = { {-2, -11}, {-8, -6}, {5, -4}, {-1, -7} } },
	[200] = { .set = { {1, -11}, {-7, -4}, {6, -6}, {0, -7} } },
	[201] = { .set = { {-7, -11}, {4, -5}, {-4, -4}, {0, -9} } },
	[202] = { .set = { {-7, -10}, {5, -4}, {-6, -4}, {0, -8} } },
	[203] = { .set = { {-7, -9}, {2, -4}, {-2, -3}, {0, -8} } },
	[204] = { .set = { {-6, -9}, {-3, -4}, {-1, -4}, {-1, -8} } },
	[205] = { .set = { {-6, -7}, {0, -2}, {-3, -3}, {-1, -7} } },
	[206] = { .set = { {-5, -7}, {-3, -2}, {1, -3}, {-1, -7} } },
	[207] = { .set = { {-4, -8}, {-6, -6}, {3, -4}, {-2, -8} } },
	[208] = { .set = { {-4, -6}, {-6, -5}, {1, -3}, {-2, -6} } },
	[209] = { .set = { {-4, -7}, {-7, -6}, {4, -3}, {-2, -7} } },
	[210] = { .set = { {-1, -8}, {-8, -5}, {6, -5}, {-1, -7} } },
	[211] = { .set = { {-4, -8}, {-6, -6}, {3, -4}, {-2, -8} } },
	[212] = { .set = { {-6, -9}, {-3, -4}, {-1, -4}, {-1, -8} } },
	[213] = { .set = { {-7, -11}, {4, -5}, {-4, -4}, {0, -9} } },
	[214] = { .set = { {-1, -12}, {-8, -5}, {6, -5}, {-1, -8} } },
	[215] = { .set = { {5, -11}, {-6, -5}, {2, -4}, {-2, -9} } },
	[216] = { .set = { {4, -9}, {1, -4}, {-1, -4}, {-1, -8} } },
	[217] = { .set = { {2, -8}, {4, -6}, {-5, -4}, {0, -8} } },
	[218] = { .set = { {-1, -4}, {-8, -5}, {6, -5}, {-1, -6} } },
	[219] = { .set = { {5, -5}, {4, -4}, {-5, -5}, {1, -6} } },
	[220] = { .set = { {7, -8}, {0, -8}, {-2, -5}, {2, -8} } },
	[221] = { .set = { {5, -12}, {-5, -7}, {4, -5}, {1, -8} } },
	[222] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -9} } },
	[223] = { .set = { {-5, -12}, {5, -7}, {-4, -5}, {-1, -8} } },
	[224] = { .set = { {-7, -8}, {0, -8}, {2, -5}, {-2, -8} } },
	[225] = { .set = { {-6, -5}, {-5, -4}, {4, -5}, {-2, -6} } },
	[226] = { .set = { {-1, -8}, {-8, -5}, {6, -5}, {-1, -7} } },
	[227] = { .set = { {-1, -4}, {-8, -5}, {6, -5}, {-1, -6} } },
	[228] = { .set = { {-1, -5}, {-8, -6}, {6, -6}, {-1, -7} } },
	[229] = { .set = { {2, -8}, {4, -6}, {-5, -4}, {0, -8} } },
	[230] = { .set = { {4, -5}, {3, -4}, {-6, -5}, {0, -6} } },
	[231] = { .set = { {4, -5}, {4, -7}, {-5, -5}, {0, -6} } },
	[232] = { .set = { {4, -9}, {1, -4}, {-1, -4}, {-1, -8} } },
	[233] = { .set = { {6, -8}, {-1, -8}, {-3, -5}, {1, -8} } },
	[234] = { .set = { {6, -8}, {1, -9}, {-2, -7}, {2, -9} } },
	[235] = { .set = { {5, -11}, {-6, -5}, {2, -4}, {-2, -9} } },
	[236] = { .set = { {4, -12}, {-6, -7}, {3, -5}, {0, -8} } },
	[237] = { .set = { {6, -10}, {-4, -10}, {4, -7}, {-1, -9} } },
	[238] = { .set = { {-1, -12}, {-8, -5}, {6, -5}, {-1, -8} } },
	[239] = { .set = { {-1, -10}, {-7, -8}, {5, -8}, {-1, -9} } },
	[240] = { .set = { {-1, -11}, {-7, -10}, {5, -10}, {-1, -10} } },
	[241] = { .set = { {-7, -11}, {4, -5}, {-4, -4}, {0, -9} } },
	[242] = { .set = { {-6, -12}, {4, -7}, {-5, -5}, {-2, -8} } },
	[243] = { .set = { {-8, -10}, {2, -10}, {-6, -7}, {-1, -9} } },
	[244] = { .set = { {-6, -9}, {-3, -4}, {-1, -4}, {-1, -8} } },
	[245] = { .set = { {-8, -8}, {-1, -8}, {1, -5}, {-3, -8} } },
	[246] = { .set = { {-8, -8}, {-3, -9}, {0, -7}, {-4, -9} } },
	[247] = { .set = { {-4, -8}, {-6, -6}, {3, -4}, {-2, -8} } },
	[248] = { .set = { {-6, -5}, {-5, -4}, {4, -5}, {-2, -6} } },
	[249] = { .set = { {-6, -5}, {-6, -7}, {3, -5}, {-2, -6} } },
	[250] = { .set = { {-1, -5}, {-8, -6}, {6, -6}, {-1, -7} } },
	[251] = { .set = { {-6, -5}, {-6, -7}, {3, -5}, {-2, -6} } },
	[252] = { .set = { {-7, -8}, {-2, -9}, {1, -7}, {-3, -9} } },
	[253] = { .set = { {-7, -10}, {3, -10}, {-5, -7}, {0, -9} } },
	[254] = { .set = { {-1, -11}, {-7, -10}, {5, -10}, {-1, -10} } },
	[255] = { .set = { {7, -10}, {-3, -10}, {5, -7}, {0, -9} } },
	[256] = { .set = { {7, -8}, {2, -9}, {-1, -7}, {3, -9} } },
	[257] = { .set = { {5, -5}, {5, -7}, {-4, -5}, {1, -6} } },
	[258] = { .set = { {-1, -8}, {-8, -5}, {6, -5}, {-1, -7} } },
	[259] = { .set = { {-4, -8}, {-6, -6}, {3, -4}, {-2, -8} } },
	[260] = { .set = { {-6, -9}, {-3, -4}, {-1, -4}, {-1, -8} } },
	[261] = { .set = { {-7, -11}, {4, -5}, {-4, -4}, {0, -9} } },
	[262] = { .set = { {-1, -12}, {-8, -5}, {6, -5}, {-1, -8} } },
	[263] = { .set = { {5, -11}, {-6, -5}, {2, -4}, {-2, -9} } },
	[264] = { .set = { {4, -9}, {1, -4}, {-1, -4}, {-1, -8} } },
	[265] = { .set = { {2, -8}, {4, -6}, {-5, -4}, {0, -8} } },
};

static const ax_anim *const sSnubbullAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02477),
	AX_ANIM_PTR(gAxSharedAnim_02542),
	AX_ANIM_PTR(gAxSharedAnim_02551),
	AX_ANIM_PTR(gAxSharedAnim_02559),
	AX_ANIM_PTR(gAxSharedAnim_02499),
	AX_ANIM_PTR(gAxSharedAnim_02519),
	AX_ANIM_PTR(gAxSharedAnim_02526),
	AX_ANIM_PTR(gAxSharedAnim_02535),
};

static const ax_anim *const sSnubbullAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_01631),
	AX_ANIM_PTR(sSnubbullAnims_2_2),
	AX_ANIM_PTR(sSnubbullAnims_2_3),
	AX_ANIM_PTR(sSnubbullAnims_2_4),
	AX_ANIM_PTR(gAxSharedAnim_01889),
	AX_ANIM_PTR(sSnubbullAnims_2_6),
	AX_ANIM_PTR(sSnubbullAnims_2_7),
	AX_ANIM_PTR(sSnubbullAnims_2_8),
};

static const ax_anim *const sSnubbullAnimTable3[] = {
	AX_ANIM_PTR(gAxSharedAnim_01978),
	AX_ANIM_PTR(sSnubbullAnims_3_2),
	AX_ANIM_PTR(sSnubbullAnims_3_3),
	AX_ANIM_PTR(sSnubbullAnims_3_4),
	AX_ANIM_PTR(gAxSharedAnim_02028),
	AX_ANIM_PTR(sSnubbullAnims_3_6),
	AX_ANIM_PTR(sSnubbullAnims_3_7),
	AX_ANIM_PTR(sSnubbullAnims_3_8),
};

static const ax_anim *const sSnubbullAnimTable4[] = {
	AX_ANIM_PTR(sSnubbullAnims_4_1),
	AX_ANIM_PTR(sSnubbullAnims_4_2),
	AX_ANIM_PTR(sSnubbullAnims_4_3),
	AX_ANIM_PTR(sSnubbullAnims_4_4),
	AX_ANIM_PTR(sSnubbullAnims_4_5),
	AX_ANIM_PTR(sSnubbullAnims_4_6),
	AX_ANIM_PTR(sSnubbullAnims_4_7),
	AX_ANIM_PTR(sSnubbullAnims_4_8),
};

static const ax_anim *const sSnubbullAnimTable5[] = {
	AX_ANIM_PTR(sSnubbullAnims_5_1),
	AX_ANIM_PTR(sSnubbullAnims_5_2),
	AX_ANIM_PTR(sSnubbullAnims_5_3),
	AX_ANIM_PTR(sSnubbullAnims_5_4),
	AX_ANIM_PTR(sSnubbullAnims_5_5),
	AX_ANIM_PTR(sSnubbullAnims_5_6),
	AX_ANIM_PTR(sSnubbullAnims_5_7),
	AX_ANIM_PTR(sSnubbullAnims_5_8),
};

static const ax_anim *const sSnubbullAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
};

static const ax_anim *const sSnubbullAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00897),
	AX_ANIM_PTR(gAxSharedAnim_00910),
	AX_ANIM_PTR(gAxSharedAnim_00924),
	AX_ANIM_PTR(gAxSharedAnim_00935),
	AX_ANIM_PTR(gAxSharedAnim_00958),
	AX_ANIM_PTR(gAxSharedAnim_00970),
	AX_ANIM_PTR(gAxSharedAnim_00983),
	AX_ANIM_PTR(gAxSharedAnim_00999),
};

static const ax_anim *const sSnubbullAnimTable8[] = {
	AX_ANIM_PTR(sSnubbullAnims_8_1),
	AX_ANIM_PTR(sSnubbullAnims_8_2),
	AX_ANIM_PTR(sSnubbullAnims_8_3),
	AX_ANIM_PTR(sSnubbullAnims_8_4),
	AX_ANIM_PTR(sSnubbullAnims_8_5),
	AX_ANIM_PTR(sSnubbullAnims_8_6),
	AX_ANIM_PTR(sSnubbullAnims_8_7),
	AX_ANIM_PTR(sSnubbullAnims_8_8),
};

static const ax_anim *const sSnubbullAnimTable9[] = {
	AX_ANIM_PTR(sSnubbullAnims_9_1),
	AX_ANIM_PTR(sSnubbullAnims_9_2),
	AX_ANIM_PTR(sSnubbullAnims_9_3),
	AX_ANIM_PTR(sSnubbullAnims_9_4),
	AX_ANIM_PTR(sSnubbullAnims_9_5),
	AX_ANIM_PTR(sSnubbullAnims_9_6),
	AX_ANIM_PTR(sSnubbullAnims_9_7),
	AX_ANIM_PTR(sSnubbullAnims_9_8),
};

static const ax_anim *const sSnubbullAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01420),
	AX_ANIM_PTR(gAxSharedAnim_01427),
	AX_ANIM_PTR(gAxSharedAnim_01436),
	AX_ANIM_PTR(gAxSharedAnim_01442),
	AX_ANIM_PTR(gAxSharedAnim_01445),
	AX_ANIM_PTR(gAxSharedAnim_01455),
	AX_ANIM_PTR(gAxSharedAnim_01460),
	AX_ANIM_PTR(gAxSharedAnim_01465),
};

static const ax_anim *const sSnubbullAnimTable11[] = {
	AX_ANIM_PTR(sSnubbullAnims_11_1),
	AX_ANIM_PTR(sSnubbullAnims_11_2),
	AX_ANIM_PTR(gAxSharedAnim_01509),
	AX_ANIM_PTR(sSnubbullAnims_11_4),
	AX_ANIM_PTR(sSnubbullAnims_11_5),
	AX_ANIM_PTR(sSnubbullAnims_11_6),
	AX_ANIM_PTR(sSnubbullAnims_11_7),
	AX_ANIM_PTR(sSnubbullAnims_11_8),
};

static const ax_anim *const sSnubbullAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01639),
	AX_ANIM_PTR(gAxSharedAnim_01674),
	AX_ANIM_PTR(gAxSharedAnim_01665),
	AX_ANIM_PTR(gAxSharedAnim_01661),
	AX_ANIM_PTR(gAxSharedAnim_01660),
	AX_ANIM_PTR(gAxSharedAnim_01655),
	AX_ANIM_PTR(gAxSharedAnim_01646),
	AX_ANIM_PTR(gAxSharedAnim_01640),
};

static const ax_anim *const sSnubbullAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01678),
	AX_ANIM_PTR(gAxSharedAnim_01710),
	AX_ANIM_PTR(gAxSharedAnim_01708),
	AX_ANIM_PTR(gAxSharedAnim_01704),
	AX_ANIM_PTR(gAxSharedAnim_01698),
	AX_ANIM_PTR(gAxSharedAnim_01694),
	AX_ANIM_PTR(gAxSharedAnim_01692),
	AX_ANIM_PTR(gAxSharedAnim_01682),
};

static const ax_anim *const *const sAxAnimationsSnubbull[] = {
	sSnubbullAnimTable1,
	sSnubbullAnimTable2,
	sSnubbullAnimTable3,
	sSnubbullAnimTable4,
	sSnubbullAnimTable5,
	sSnubbullAnimTable6,
	sSnubbullAnimTable7,
	sSnubbullAnimTable8,
	sSnubbullAnimTable9,
	sSnubbullAnimTable10,
	sSnubbullAnimTable11,
	sSnubbullAnimTable12,
	sSnubbullAnimTable13,
};

static const ax_sprite *const sAxSpritesSnubbull[] = {
	sSnubbullSprites1,
	sSnubbullSprites2,
	sSnubbullSprites3,
	sSnubbullSprites4,
	sSnubbullSprites5,
	sSnubbullSprites6,
	sSnubbullSprites7,
	sSnubbullSprites8,
	sSnubbullSprites9,
	sSnubbullSprites10,
	sSnubbullSprites11,
	sSnubbullSprites12,
	sSnubbullSprites13,
	sSnubbullSprites14,
	sSnubbullSprites15,
	sSnubbullSprites16,
	sSnubbullSprites17,
	sSnubbullSprites18,
	sSnubbullSprites19,
	sSnubbullSprites20,
	sSnubbullSprites21,
	sSnubbullSprites22,
	sSnubbullSprites23,
	sSnubbullSprites24,
	sSnubbullSprites25,
	sSnubbullSprites26,
	sSnubbullSprites27,
	sSnubbullSprites28,
	sSnubbullSprites29,
	sSnubbullSprites30,
	sSnubbullSprites31,
	sSnubbullSprites32,
};

static const axmain sAxMainSnubbull = {
	.poses = sAxPosesSnubbull,
	.animations = sAxAnimationsSnubbull,
	.animCount = ARRAY_COUNT(sAxAnimationsSnubbull),
	.spriteData = sAxSpritesSnubbull,
	.positions = sAxPositionsSnubbull,
};
