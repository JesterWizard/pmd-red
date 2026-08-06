/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainHoothoot;
const SiroArchive gAxHoothoot = {"SIRO", &sAxMainHoothoot};

static const ax_pose sHoothootPose1[] = {
	AX_POSE(0, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose3[] = {
	AX_POSE(2, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose4[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose5[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose6[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose7[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose8[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose9[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose10[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose11[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose12[] = {
	AX_POSE(11, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose13[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose14[] = {
	AX_POSE(13, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose15[] = {
	AX_POSE(14, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose16[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose17[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose18[] = {
	AX_POSE(11, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose19[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose20[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose21[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose22[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose23[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose24[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose26[] = {
	AX_POSE(1, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose27[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose29[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose30[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose32[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose33[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose35[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose36[] = {
	AX_POSE(11, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose38[] = {
	AX_POSE(13, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose39[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose41[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose42[] = {
	AX_POSE(11, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose44[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose45[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose47[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose48[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose76[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose78[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose80[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose84[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose86[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose88[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose97[] = {
	AX_POSE(15, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose98[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose99[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose100[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose101[] = {
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose102[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose103[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose104[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose105[] = {
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose106[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose110[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose112[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose114[] = {
	AX_POSE(11, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose116[] = {
	AX_POSE(14, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose118[] = {
	AX_POSE(11, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose120[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose122[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose127[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose141[] = {
	AX_POSE(2, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose144[] = {
	AX_POSE(5, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose147[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose150[] = {
	AX_POSE(11, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose156[] = {
	AX_POSE(11, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose159[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sHoothootPose162[] = {
	AX_POSE(5, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const u8 sHoothootAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_1_1.lz");
static const u8 sHoothootAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_1_2.lz");
static const u8 sHoothootAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_1_3.lz");
static const u8 sHoothootAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_1_4.lz");
static const u8 sHoothootAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_1_5.lz");
static const u8 sHoothootAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_1_6.lz");
static const u8 sHoothootAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_1_7.lz");
static const u8 sHoothootAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_1_8.lz");
static const u8 sHoothootAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_2_1.lz");
static const u8 sHoothootAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_2_2.lz");
static const u8 sHoothootAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_2_3.lz");
static const u8 sHoothootAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_2_4.lz");
static const u8 sHoothootAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_2_5.lz");
static const u8 sHoothootAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_2_6.lz");
static const u8 sHoothootAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_2_7.lz");
static const u8 sHoothootAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_2_8.lz");
static const u8 sHoothootAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_3_1.lz");
static const u8 sHoothootAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_3_2.lz");
static const u8 sHoothootAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_3_3.lz");
static const u8 sHoothootAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_3_4.lz");
static const u8 sHoothootAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_3_5.lz");
static const u8 sHoothootAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_3_6.lz");
static const u8 sHoothootAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_3_7.lz");
static const u8 sHoothootAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_3_8.lz");
static const u8 sHoothootAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_4_1.lz");
static const u8 sHoothootAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_4_2.lz");
static const u8 sHoothootAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_4_3.lz");
static const u8 sHoothootAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_4_4.lz");
static const u8 sHoothootAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_4_5.lz");
static const u8 sHoothootAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_4_6.lz");
static const u8 sHoothootAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_4_7.lz");
static const u8 sHoothootAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_4_8.lz");
static const u8 sHoothootAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_8_1.lz");
static const u8 sHoothootAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_8_2.lz");
static const u8 sHoothootAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_8_3.lz");
static const u8 sHoothootAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_8_4.lz");
static const u8 sHoothootAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_8_5.lz");
static const u8 sHoothootAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_8_6.lz");
static const u8 sHoothootAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_8_7.lz");
static const u8 sHoothootAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_8_8.lz");
static const u8 sHoothootAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_9_1.lz");
static const u8 sHoothootAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_9_2.lz");
static const u8 sHoothootAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_9_3.lz");
static const u8 sHoothootAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_9_4.lz");
static const u8 sHoothootAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_9_5.lz");
static const u8 sHoothootAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_9_6.lz");
static const u8 sHoothootAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_9_7.lz");
static const u8 sHoothootAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_9_8.lz");
static const u8 sHoothootAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_11_1.lz");
static const u8 sHoothootAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_11_2.lz");
static const u8 sHoothootAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_11_3.lz");
static const u8 sHoothootAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_11_4.lz");
static const u8 sHoothootAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_11_5.lz");
static const u8 sHoothootAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_11_6.lz");
static const u8 sHoothootAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_11_7.lz");
static const u8 sHoothootAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/hoothoot/sHoothootAnims_11_8.lz");

static const u8 sHoothootGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_1.4bpp.lz");
static const ax_sprite sHoothootSprites1[] = {
	{sHoothootGfx1, ARRAY_COUNT(sHoothootGfx1)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_2.4bpp.lz");
static const ax_sprite sHoothootSprites2[] = {
	{sHoothootGfx2, ARRAY_COUNT(sHoothootGfx2)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_3.4bpp.lz");
static const ax_sprite sHoothootSprites3[] = {
	{sHoothootGfx3, ARRAY_COUNT(sHoothootGfx3)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_4.4bpp.lz");
static const ax_sprite sHoothootSprites4[] = {
	{sHoothootGfx4, ARRAY_COUNT(sHoothootGfx4)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_5.4bpp.lz");
static const ax_sprite sHoothootSprites5[] = {
	{sHoothootGfx5, ARRAY_COUNT(sHoothootGfx5)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_6.4bpp.lz");
static const ax_sprite sHoothootSprites6[] = {
	{sHoothootGfx6, ARRAY_COUNT(sHoothootGfx6)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_7.4bpp.lz");
static const ax_sprite sHoothootSprites7[] = {
	{sHoothootGfx7, ARRAY_COUNT(sHoothootGfx7)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_8.4bpp.lz");
static const ax_sprite sHoothootSprites8[] = {
	{sHoothootGfx8, ARRAY_COUNT(sHoothootGfx8)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_9.4bpp.lz");
static const ax_sprite sHoothootSprites9[] = {
	{sHoothootGfx9, ARRAY_COUNT(sHoothootGfx9)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_10.4bpp.lz");
static const ax_sprite sHoothootSprites10[] = {
	{sHoothootGfx10, ARRAY_COUNT(sHoothootGfx10)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_11.4bpp.lz");
static const ax_sprite sHoothootSprites11[] = {
	{sHoothootGfx11, ARRAY_COUNT(sHoothootGfx11)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_12.4bpp.lz");
static const ax_sprite sHoothootSprites12[] = {
	{sHoothootGfx12, ARRAY_COUNT(sHoothootGfx12)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_13.4bpp.lz");
static const ax_sprite sHoothootSprites13[] = {
	{sHoothootGfx13, ARRAY_COUNT(sHoothootGfx13)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_14.4bpp.lz");
static const ax_sprite sHoothootSprites14[] = {
	{sHoothootGfx14, ARRAY_COUNT(sHoothootGfx14)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_15.4bpp.lz");
static const ax_sprite sHoothootSprites15[] = {
	{sHoothootGfx15, ARRAY_COUNT(sHoothootGfx15)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_16.4bpp.lz");
static const ax_sprite sHoothootSprites16[] = {
	{sHoothootGfx16, ARRAY_COUNT(sHoothootGfx16)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_17.4bpp.lz");
static const ax_sprite sHoothootSprites17[] = {
	{sHoothootGfx17, ARRAY_COUNT(sHoothootGfx17)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_18.4bpp.lz");
static const ax_sprite sHoothootSprites18[] = {
	{sHoothootGfx18, ARRAY_COUNT(sHoothootGfx18)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_19.4bpp.lz");
static const ax_sprite sHoothootSprites19[] = {
	{sHoothootGfx19, ARRAY_COUNT(sHoothootGfx19)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_20.4bpp.lz");
static const ax_sprite sHoothootSprites20[] = {
	{sHoothootGfx20, ARRAY_COUNT(sHoothootGfx20)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_21.4bpp.lz");
static const ax_sprite sHoothootSprites21[] = {
	{sHoothootGfx21, ARRAY_COUNT(sHoothootGfx21)}, 
	{NULL, 0}
};
static const u8 sHoothootGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/hoothoot/sprite_22.4bpp.lz");
static const ax_sprite sHoothootSprites22[] = {
	{sHoothootGfx22, ARRAY_COUNT(sHoothootGfx22)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesHoothoot[] = {
	sHoothootPose1,
	sHoothootPose2,
	sHoothootPose3,
	sHoothootPose4,
	sHoothootPose5,
	sHoothootPose6,
	sHoothootPose7,
	sHoothootPose8,
	sHoothootPose9,
	sHoothootPose10,
	sHoothootPose11,
	sHoothootPose12,
	sHoothootPose13,
	sHoothootPose14,
	sHoothootPose15,
	sHoothootPose16,
	sHoothootPose17,
	sHoothootPose18,
	sHoothootPose19,
	sHoothootPose20,
	sHoothootPose21,
	sHoothootPose22,
	sHoothootPose23,
	sHoothootPose24,
	sHoothootPose1,
	sHoothootPose26,
	sHoothootPose27,
	sHoothootPose4,
	sHoothootPose29,
	sHoothootPose30,
	sHoothootPose7,
	sHoothootPose32,
	sHoothootPose33,
	sHoothootPose10,
	sHoothootPose35,
	sHoothootPose36,
	sHoothootPose13,
	sHoothootPose38,
	sHoothootPose39,
	sHoothootPose16,
	sHoothootPose41,
	sHoothootPose42,
	sHoothootPose19,
	sHoothootPose44,
	sHoothootPose45,
	sHoothootPose22,
	sHoothootPose47,
	sHoothootPose48,
	sHoothootPose1,
	sHoothootPose26,
	sHoothootPose27,
	sHoothootPose4,
	sHoothootPose29,
	sHoothootPose30,
	sHoothootPose7,
	sHoothootPose32,
	sHoothootPose33,
	sHoothootPose10,
	sHoothootPose35,
	sHoothootPose36,
	sHoothootPose13,
	sHoothootPose38,
	sHoothootPose39,
	sHoothootPose16,
	sHoothootPose41,
	sHoothootPose42,
	sHoothootPose19,
	sHoothootPose44,
	sHoothootPose45,
	sHoothootPose22,
	sHoothootPose47,
	sHoothootPose48,
	sHoothootPose1,
	sHoothootPose26,
	sHoothootPose4,
	sHoothootPose76,
	sHoothootPose7,
	sHoothootPose78,
	sHoothootPose10,
	sHoothootPose80,
	sHoothootPose13,
	sHoothootPose38,
	sHoothootPose16,
	sHoothootPose84,
	sHoothootPose19,
	sHoothootPose86,
	sHoothootPose22,
	sHoothootPose88,
	sHoothootPose1,
	sHoothootPose22,
	sHoothootPose19,
	sHoothootPose16,
	sHoothootPose13,
	sHoothootPose10,
	sHoothootPose7,
	sHoothootPose4,
	sHoothootPose97,
	sHoothootPose98,
	sHoothootPose99,
	sHoothootPose100,
	sHoothootPose101,
	sHoothootPose102,
	sHoothootPose103,
	sHoothootPose104,
	sHoothootPose105,
	sHoothootPose106,
	sHoothootPose1,
	sHoothootPose27,
	sHoothootPose4,
	sHoothootPose110,
	sHoothootPose7,
	sHoothootPose112,
	sHoothootPose10,
	sHoothootPose114,
	sHoothootPose13,
	sHoothootPose116,
	sHoothootPose16,
	sHoothootPose118,
	sHoothootPose19,
	sHoothootPose120,
	sHoothootPose22,
	sHoothootPose122,
	sHoothootPose26,
	sHoothootPose88,
	sHoothootPose86,
	sHoothootPose84,
	sHoothootPose127,
	sHoothootPose80,
	sHoothootPose78,
	sHoothootPose76,
	sHoothootPose26,
	sHoothootPose76,
	sHoothootPose78,
	sHoothootPose80,
	sHoothootPose127,
	sHoothootPose84,
	sHoothootPose86,
	sHoothootPose88,
	sHoothootPose1,
	sHoothootPose26,
	sHoothootPose141,
	sHoothootPose4,
	sHoothootPose76,
	sHoothootPose144,
	sHoothootPose7,
	sHoothootPose78,
	sHoothootPose147,
	sHoothootPose10,
	sHoothootPose80,
	sHoothootPose150,
	sHoothootPose13,
	sHoothootPose127,
	sHoothootPose15,
	sHoothootPose16,
	sHoothootPose84,
	sHoothootPose156,
	sHoothootPose19,
	sHoothootPose86,
	sHoothootPose159,
	sHoothootPose22,
	sHoothootPose88,
	sHoothootPose162,
	sHoothootPose1,
	sHoothootPose22,
	sHoothootPose19,
	sHoothootPose16,
	sHoothootPose13,
	sHoothootPose10,
	sHoothootPose7,
	sHoothootPose4,
	sHoothootPose1,
	sHoothootPose22,
	sHoothootPose19,
	sHoothootPose16,
	sHoothootPose13,
	sHoothootPose10,
	sHoothootPose7,
	sHoothootPose4,
};

static const struct PositionSets sAxPositionsHoothoot[] = {
	[0] = { .set = { {0, -6}, {-8, -5}, {8, -5}, {0, -8} } },
	[1] = { .set = { {0, -11}, {-8, -12}, {8, -12}, {0, -12} } },
	[2] = { .set = { {0, -3}, {-7, -2}, {7, -2}, {0, -5} } },
	[3] = { .set = { {5, -7}, {7, -8}, {-4, -4}, {0, -8} } },
	[4] = { .set = { {5, -12}, {8, -15}, {-4, -11}, {1, -12} } },
	[5] = { .set = { {8, -4}, {10, -5}, {0, -2}, {3, -7} } },
	[6] = { .set = { {8, -8}, {1, -8}, {1, -4}, {0, -9} } },
	[7] = { .set = { {10, -14}, {2, -15}, {1, -12}, {2, -12} } },
	[8] = { .set = { {11, -5}, {5, -7}, {5, -3}, {2, -8} } },
	[9] = { .set = { {6, -12}, {-3, -10}, {7, -5}, {-1, -9} } },
	[10] = { .set = { {5, -17}, {-4, -18}, {7, -13}, {-1, -13} } },
	[11] = { .set = { {6, -9}, {-1, -10}, {7, -4}, {0, -9} } },
	[12] = { .set = { {0, -14}, {8, -7}, {-8, -7}, {0, -9} } },
	[13] = { .set = { {0, -18}, {8, -14}, {-8, -14}, {0, -14} } },
	[14] = { .set = { {0, -15}, {7, -6}, {-7, -6}, {0, -9} } },
	[15] = { .set = { {-6, -12}, {3, -10}, {-7, -5}, {1, -9} } },
	[16] = { .set = { {-7, -17}, {2, -18}, {-9, -13}, {-1, -13} } },
	[17] = { .set = { {-8, -9}, {-1, -10}, {-9, -4}, {-2, -9} } },
	[18] = { .set = { {-8, -8}, {-1, -8}, {-1, -4}, {0, -9} } },
	[19] = { .set = { {-10, -14}, {-2, -15}, {-1, -12}, {-2, -12} } },
	[20] = { .set = { {-11, -5}, {-5, -7}, {-5, -3}, {-2, -8} } },
	[21] = { .set = { {-5, -7}, {-7, -8}, {4, -4}, {0, -8} } },
	[22] = { .set = { {-5, -12}, {-8, -15}, {4, -11}, {-1, -12} } },
	[23] = { .set = { {-8, -4}, {-10, -5}, {0, -2}, {-3, -7} } },
	[24] = { .set = { {0, -6}, {-8, -5}, {8, -5}, {0, -8} } },
	[25] = { .set = { {0, -7}, {-8, -8}, {8, -8}, {0, -8} } },
	[26] = { .set = { {0, -4}, {-7, -3}, {7, -3}, {0, -6} } },
	[27] = { .set = { {5, -7}, {7, -8}, {-4, -4}, {0, -8} } },
	[28] = { .set = { {4, -9}, {7, -12}, {-5, -8}, {0, -9} } },
	[29] = { .set = { {5, -5}, {7, -6}, {-3, -3}, {0, -8} } },
	[30] = { .set = { {8, -8}, {1, -8}, {1, -4}, {0, -9} } },
	[31] = { .set = { {9, -10}, {1, -11}, {0, -8}, {1, -8} } },
	[32] = { .set = { {9, -5}, {3, -7}, {3, -3}, {0, -8} } },
	[33] = { .set = { {6, -12}, {-3, -10}, {7, -5}, {-1, -9} } },
	[34] = { .set = { {5, -14}, {-4, -15}, {7, -10}, {-1, -10} } },
	[35] = { .set = { {5, -8}, {-2, -9}, {6, -3}, {-1, -8} } },
	[36] = { .set = { {0, -14}, {8, -7}, {-8, -7}, {0, -9} } },
	[37] = { .set = { {0, -14}, {8, -10}, {-8, -10}, {0, -10} } },
	[38] = { .set = { {0, -13}, {7, -4}, {-7, -4}, {0, -7} } },
	[39] = { .set = { {-6, -12}, {3, -10}, {-7, -5}, {1, -9} } },
	[40] = { .set = { {-5, -14}, {4, -15}, {-7, -10}, {1, -10} } },
	[41] = { .set = { {-5, -8}, {2, -9}, {-6, -3}, {1, -8} } },
	[42] = { .set = { {-8, -8}, {-1, -8}, {-1, -4}, {0, -9} } },
	[43] = { .set = { {-9, -10}, {-1, -11}, {0, -8}, {-1, -8} } },
	[44] = { .set = { {-9, -5}, {-3, -7}, {-3, -3}, {0, -8} } },
	[45] = { .set = { {-5, -7}, {-7, -8}, {4, -4}, {0, -8} } },
	[46] = { .set = { {-4, -9}, {-7, -12}, {5, -8}, {0, -9} } },
	[47] = { .set = { {-5, -5}, {-7, -6}, {3, -3}, {0, -8} } },
	[48] = { .set = { {0, -6}, {-8, -5}, {8, -5}, {0, -8} } },
	[49] = { .set = { {0, -7}, {-8, -8}, {8, -8}, {0, -8} } },
	[50] = { .set = { {0, -4}, {-7, -3}, {7, -3}, {0, -6} } },
	[51] = { .set = { {5, -7}, {7, -8}, {-4, -4}, {0, -8} } },
	[52] = { .set = { {4, -9}, {7, -12}, {-5, -8}, {0, -9} } },
	[53] = { .set = { {5, -5}, {7, -6}, {-3, -3}, {0, -8} } },
	[54] = { .set = { {8, -8}, {1, -8}, {1, -4}, {0, -9} } },
	[55] = { .set = { {9, -10}, {1, -11}, {0, -8}, {1, -8} } },
	[56] = { .set = { {9, -5}, {3, -7}, {3, -3}, {0, -8} } },
	[57] = { .set = { {6, -12}, {-3, -10}, {7, -5}, {-1, -9} } },
	[58] = { .set = { {5, -14}, {-4, -15}, {7, -10}, {-1, -10} } },
	[59] = { .set = { {5, -8}, {-2, -9}, {6, -3}, {-1, -8} } },
	[60] = { .set = { {0, -14}, {8, -7}, {-8, -7}, {0, -9} } },
	[61] = { .set = { {0, -14}, {8, -10}, {-8, -10}, {0, -10} } },
	[62] = { .set = { {0, -13}, {7, -4}, {-7, -4}, {0, -7} } },
	[63] = { .set = { {-6, -12}, {3, -10}, {-7, -5}, {1, -9} } },
	[64] = { .set = { {-5, -14}, {4, -15}, {-7, -10}, {1, -10} } },
	[65] = { .set = { {-5, -8}, {2, -9}, {-6, -3}, {1, -8} } },
	[66] = { .set = { {-8, -8}, {-1, -8}, {-1, -4}, {0, -9} } },
	[67] = { .set = { {-9, -10}, {-1, -11}, {0, -8}, {-1, -8} } },
	[68] = { .set = { {-9, -5}, {-3, -7}, {-3, -3}, {0, -8} } },
	[69] = { .set = { {-5, -7}, {-7, -8}, {4, -4}, {0, -8} } },
	[70] = { .set = { {-4, -9}, {-7, -12}, {5, -8}, {0, -9} } },
	[71] = { .set = { {-5, -5}, {-7, -6}, {3, -3}, {0, -8} } },
	[72] = { .set = { {0, -6}, {-8, -5}, {8, -5}, {0, -8} } },
	[73] = { .set = { {0, -7}, {-8, -8}, {8, -8}, {0, -8} } },
	[74] = { .set = { {5, -7}, {7, -8}, {-4, -4}, {0, -8} } },
	[75] = { .set = { {4, -8}, {7, -11}, {-5, -7}, {0, -8} } },
	[76] = { .set = { {8, -8}, {1, -8}, {1, -4}, {0, -9} } },
	[77] = { .set = { {8, -10}, {0, -11}, {-1, -8}, {0, -8} } },
	[78] = { .set = { {6, -12}, {-3, -10}, {7, -5}, {-1, -9} } },
	[79] = { .set = { {5, -13}, {-4, -14}, {7, -9}, {-1, -9} } },
	[80] = { .set = { {0, -14}, {8, -7}, {-8, -7}, {0, -9} } },
	[81] = { .set = { {0, -14}, {8, -10}, {-8, -10}, {0, -10} } },
	[82] = { .set = { {-6, -12}, {3, -10}, {-7, -5}, {1, -9} } },
	[83] = { .set = { {-5, -13}, {4, -14}, {-7, -9}, {1, -9} } },
	[84] = { .set = { {-8, -8}, {-1, -8}, {-1, -4}, {0, -9} } },
	[85] = { .set = { {-8, -10}, {0, -11}, {1, -8}, {0, -8} } },
	[86] = { .set = { {-5, -7}, {-7, -8}, {4, -4}, {0, -8} } },
	[87] = { .set = { {-4, -8}, {-7, -11}, {5, -7}, {0, -8} } },
	[88] = { .set = { {0, -6}, {-8, -5}, {8, -5}, {0, -8} } },
	[89] = { .set = { {-5, -7}, {-7, -8}, {4, -4}, {0, -8} } },
	[90] = { .set = { {-8, -8}, {-1, -8}, {-1, -4}, {0, -9} } },
	[91] = { .set = { {-6, -12}, {3, -10}, {-7, -5}, {1, -9} } },
	[92] = { .set = { {0, -14}, {8, -7}, {-8, -7}, {0, -9} } },
	[93] = { .set = { {6, -12}, {-3, -10}, {7, -5}, {-1, -9} } },
	[94] = { .set = { {8, -8}, {1, -8}, {1, -4}, {0, -9} } },
	[95] = { .set = { {5, -7}, {7, -8}, {-4, -4}, {0, -8} } },
	[96] = { .set = { {-5, -5}, {-4, -6}, {4, -3}, {0, -8} } },
	[97] = { .set = { {-5, -3}, {-3, -5}, {4, -2}, {1, -7} } },
	[98] = { .set = { {0, -9}, {-8, -10}, {8, -10}, {0, -8} } },
	[99] = { .set = { {2, -10}, {6, -13}, {-6, -9}, {0, -8} } },
	[100] = { .set = { {6, -12}, {-2, -12}, {-2, -9}, {-1, -9} } },
	[101] = { .set = { {3, -14}, {-3, -15}, {5, -10}, {-2, -9} } },
	[102] = { .set = { {0, -15}, {8, -9}, {-8, -9}, {0, -8} } },
	[103] = { .set = { {-4, -14}, {2, -15}, {-6, -10}, {1, -9} } },
	[104] = { .set = { {-7, -12}, {1, -12}, {1, -9}, {0, -9} } },
	[105] = { .set = { {-3, -10}, {-7, -13}, {5, -9}, {-1, -8} } },
	[106] = { .set = { {0, -6}, {-8, -5}, {8, -5}, {0, -8} } },
	[107] = { .set = { {0, -4}, {-7, -3}, {7, -3}, {0, -6} } },
	[108] = { .set = { {5, -7}, {7, -8}, {-4, -4}, {0, -8} } },
	[109] = { .set = { {6, -5}, {8, -6}, {-2, -3}, {1, -8} } },
	[110] = { .set = { {8, -8}, {1, -8}, {1, -4}, {0, -9} } },
	[111] = { .set = { {10, -5}, {4, -7}, {4, -3}, {1, -8} } },
	[112] = { .set = { {6, -12}, {-3, -10}, {7, -5}, {-1, -9} } },
	[113] = { .set = { {6, -8}, {-1, -9}, {7, -3}, {0, -8} } },
	[114] = { .set = { {0, -14}, {8, -7}, {-8, -7}, {0, -9} } },
	[115] = { .set = { {0, -14}, {7, -5}, {-7, -5}, {0, -8} } },
	[116] = { .set = { {-6, -12}, {3, -10}, {-7, -5}, {1, -9} } },
	[117] = { .set = { {-6, -8}, {1, -9}, {-7, -3}, {0, -8} } },
	[118] = { .set = { {-8, -8}, {-1, -8}, {-1, -4}, {0, -9} } },
	[119] = { .set = { {-10, -5}, {-4, -7}, {-4, -3}, {-1, -8} } },
	[120] = { .set = { {-5, -7}, {-7, -8}, {4, -4}, {0, -8} } },
	[121] = { .set = { {-6, -5}, {-8, -6}, {2, -3}, {-1, -8} } },
	[122] = { .set = { {0, -7}, {-8, -8}, {8, -8}, {0, -8} } },
	[123] = { .set = { {-4, -8}, {-7, -11}, {5, -7}, {0, -8} } },
	[124] = { .set = { {-8, -10}, {0, -11}, {1, -8}, {0, -8} } },
	[125] = { .set = { {-5, -13}, {4, -14}, {-7, -9}, {1, -9} } },
	[126] = { .set = { {0, -13}, {8, -9}, {-8, -9}, {0, -9} } },
	[127] = { .set = { {5, -13}, {-4, -14}, {7, -9}, {-1, -9} } },
	[128] = { .set = { {8, -10}, {0, -11}, {-1, -8}, {0, -8} } },
	[129] = { .set = { {4, -8}, {7, -11}, {-5, -7}, {0, -8} } },
	[130] = { .set = { {0, -7}, {-8, -8}, {8, -8}, {0, -8} } },
	[131] = { .set = { {4, -8}, {7, -11}, {-5, -7}, {0, -8} } },
	[132] = { .set = { {8, -10}, {0, -11}, {-1, -8}, {0, -8} } },
	[133] = { .set = { {5, -13}, {-4, -14}, {7, -9}, {-1, -9} } },
	[134] = { .set = { {0, -13}, {8, -9}, {-8, -9}, {0, -9} } },
	[135] = { .set = { {-5, -13}, {4, -14}, {-7, -9}, {1, -9} } },
	[136] = { .set = { {-8, -10}, {0, -11}, {1, -8}, {0, -8} } },
	[137] = { .set = { {-4, -8}, {-7, -11}, {5, -7}, {0, -8} } },
	[138] = { .set = { {0, -6}, {-8, -5}, {8, -5}, {0, -8} } },
	[139] = { .set = { {0, -7}, {-8, -8}, {8, -8}, {0, -8} } },
	[140] = { .set = { {0, -5}, {-7, -4}, {7, -4}, {0, -7} } },
	[141] = { .set = { {5, -7}, {7, -8}, {-4, -4}, {0, -8} } },
	[142] = { .set = { {4, -8}, {7, -11}, {-5, -7}, {0, -8} } },
	[143] = { .set = { {5, -6}, {7, -7}, {-3, -4}, {0, -9} } },
	[144] = { .set = { {8, -8}, {1, -8}, {1, -4}, {0, -9} } },
	[145] = { .set = { {8, -10}, {0, -11}, {-1, -8}, {0, -8} } },
	[146] = { .set = { {8, -6}, {2, -8}, {2, -4}, {-1, -9} } },
	[147] = { .set = { {6, -12}, {-3, -10}, {7, -5}, {-1, -9} } },
	[148] = { .set = { {5, -13}, {-4, -14}, {7, -9}, {-1, -9} } },
	[149] = { .set = { {5, -9}, {-2, -10}, {6, -4}, {-1, -9} } },
	[150] = { .set = { {0, -14}, {8, -7}, {-8, -7}, {0, -9} } },
	[151] = { .set = { {0, -13}, {8, -9}, {-8, -9}, {0, -9} } },
	[152] = { .set = { {0, -15}, {7, -6}, {-7, -6}, {0, -9} } },
	[153] = { .set = { {-6, -12}, {3, -10}, {-7, -5}, {1, -9} } },
	[154] = { .set = { {-5, -13}, {4, -14}, {-7, -9}, {1, -9} } },
	[155] = { .set = { {-5, -9}, {2, -10}, {-6, -4}, {1, -9} } },
	[156] = { .set = { {-8, -8}, {-1, -8}, {-1, -4}, {0, -9} } },
	[157] = { .set = { {-8, -10}, {0, -11}, {1, -8}, {0, -8} } },
	[158] = { .set = { {-8, -6}, {-2, -8}, {-2, -4}, {1, -9} } },
	[159] = { .set = { {-5, -7}, {-7, -8}, {4, -4}, {0, -8} } },
	[160] = { .set = { {-4, -8}, {-7, -11}, {5, -7}, {0, -8} } },
	[161] = { .set = { {-5, -6}, {-7, -7}, {3, -4}, {0, -9} } },
	[162] = { .set = { {0, -6}, {-8, -5}, {8, -5}, {0, -8} } },
	[163] = { .set = { {-5, -7}, {-7, -8}, {4, -4}, {0, -8} } },
	[164] = { .set = { {-8, -8}, {-1, -8}, {-1, -4}, {0, -9} } },
	[165] = { .set = { {-6, -12}, {3, -10}, {-7, -5}, {1, -9} } },
	[166] = { .set = { {0, -14}, {8, -7}, {-8, -7}, {0, -9} } },
	[167] = { .set = { {6, -12}, {-3, -10}, {7, -5}, {-1, -9} } },
	[168] = { .set = { {8, -8}, {1, -8}, {1, -4}, {0, -9} } },
	[169] = { .set = { {5, -7}, {7, -8}, {-4, -4}, {0, -8} } },
	[170] = { .set = { {0, -6}, {-8, -5}, {8, -5}, {0, -8} } },
	[171] = { .set = { {-5, -7}, {-7, -8}, {4, -4}, {0, -8} } },
	[172] = { .set = { {-8, -8}, {-1, -8}, {-1, -4}, {0, -9} } },
	[173] = { .set = { {-6, -12}, {3, -10}, {-7, -5}, {1, -9} } },
	[174] = { .set = { {0, -14}, {8, -7}, {-8, -7}, {0, -9} } },
	[175] = { .set = { {6, -12}, {-3, -10}, {7, -5}, {-1, -9} } },
	[176] = { .set = { {8, -8}, {1, -8}, {1, -4}, {0, -9} } },
	[177] = { .set = { {5, -7}, {7, -8}, {-4, -4}, {0, -8} } },
};

static const ax_anim *const sHoothootAnimTable1[] = {
	AX_ANIM_PTR(sHoothootAnims_1_1),
	AX_ANIM_PTR(sHoothootAnims_1_2),
	AX_ANIM_PTR(sHoothootAnims_1_3),
	AX_ANIM_PTR(sHoothootAnims_1_4),
	AX_ANIM_PTR(sHoothootAnims_1_5),
	AX_ANIM_PTR(sHoothootAnims_1_6),
	AX_ANIM_PTR(sHoothootAnims_1_7),
	AX_ANIM_PTR(sHoothootAnims_1_8),
};

static const ax_anim *const sHoothootAnimTable2[] = {
	AX_ANIM_PTR(sHoothootAnims_2_1),
	AX_ANIM_PTR(sHoothootAnims_2_2),
	AX_ANIM_PTR(sHoothootAnims_2_3),
	AX_ANIM_PTR(sHoothootAnims_2_4),
	AX_ANIM_PTR(sHoothootAnims_2_5),
	AX_ANIM_PTR(sHoothootAnims_2_6),
	AX_ANIM_PTR(sHoothootAnims_2_7),
	AX_ANIM_PTR(sHoothootAnims_2_8),
};

static const ax_anim *const sHoothootAnimTable3[] = {
	AX_ANIM_PTR(sHoothootAnims_3_1),
	AX_ANIM_PTR(sHoothootAnims_3_2),
	AX_ANIM_PTR(sHoothootAnims_3_3),
	AX_ANIM_PTR(sHoothootAnims_3_4),
	AX_ANIM_PTR(sHoothootAnims_3_5),
	AX_ANIM_PTR(sHoothootAnims_3_6),
	AX_ANIM_PTR(sHoothootAnims_3_7),
	AX_ANIM_PTR(sHoothootAnims_3_8),
};

static const ax_anim *const sHoothootAnimTable4[] = {
	AX_ANIM_PTR(sHoothootAnims_4_1),
	AX_ANIM_PTR(sHoothootAnims_4_2),
	AX_ANIM_PTR(sHoothootAnims_4_3),
	AX_ANIM_PTR(sHoothootAnims_4_4),
	AX_ANIM_PTR(sHoothootAnims_4_5),
	AX_ANIM_PTR(sHoothootAnims_4_6),
	AX_ANIM_PTR(sHoothootAnims_4_7),
	AX_ANIM_PTR(sHoothootAnims_4_8),
};

static const ax_anim *const sHoothootAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_02217),
	AX_ANIM_PTR(gAxSharedAnim_02284),
	AX_ANIM_PTR(gAxSharedAnim_02275),
	AX_ANIM_PTR(gAxSharedAnim_02268),
	AX_ANIM_PTR(gAxSharedAnim_02258),
	AX_ANIM_PTR(gAxSharedAnim_02246),
	AX_ANIM_PTR(gAxSharedAnim_02239),
	AX_ANIM_PTR(gAxSharedAnim_02229),
};

static const ax_anim *const sHoothootAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02406),
	AX_ANIM_PTR(gAxSharedAnim_02406),
	AX_ANIM_PTR(gAxSharedAnim_02406),
	AX_ANIM_PTR(gAxSharedAnim_02406),
	AX_ANIM_PTR(gAxSharedAnim_02406),
	AX_ANIM_PTR(gAxSharedAnim_02406),
	AX_ANIM_PTR(gAxSharedAnim_02406),
	AX_ANIM_PTR(gAxSharedAnim_02406),
};

static const ax_anim *const sHoothootAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_02309),
	AX_ANIM_PTR(gAxSharedAnim_02312),
	AX_ANIM_PTR(gAxSharedAnim_00152),
	AX_ANIM_PTR(gAxSharedAnim_00157),
	AX_ANIM_PTR(gAxSharedAnim_00164),
	AX_ANIM_PTR(gAxSharedAnim_00172),
	AX_ANIM_PTR(gAxSharedAnim_00179),
	AX_ANIM_PTR(gAxSharedAnim_00189),
};

static const ax_anim *const sHoothootAnimTable8[] = {
	AX_ANIM_PTR(sHoothootAnims_8_1),
	AX_ANIM_PTR(sHoothootAnims_8_2),
	AX_ANIM_PTR(sHoothootAnims_8_3),
	AX_ANIM_PTR(sHoothootAnims_8_4),
	AX_ANIM_PTR(sHoothootAnims_8_5),
	AX_ANIM_PTR(sHoothootAnims_8_6),
	AX_ANIM_PTR(sHoothootAnims_8_7),
	AX_ANIM_PTR(sHoothootAnims_8_8),
};

static const ax_anim *const sHoothootAnimTable9[] = {
	AX_ANIM_PTR(sHoothootAnims_9_1),
	AX_ANIM_PTR(sHoothootAnims_9_2),
	AX_ANIM_PTR(sHoothootAnims_9_3),
	AX_ANIM_PTR(sHoothootAnims_9_4),
	AX_ANIM_PTR(sHoothootAnims_9_5),
	AX_ANIM_PTR(sHoothootAnims_9_6),
	AX_ANIM_PTR(sHoothootAnims_9_7),
	AX_ANIM_PTR(sHoothootAnims_9_8),
};

static const ax_anim *const sHoothootAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00400),
	AX_ANIM_PTR(gAxSharedAnim_00408),
	AX_ANIM_PTR(gAxSharedAnim_00417),
	AX_ANIM_PTR(gAxSharedAnim_00426),
	AX_ANIM_PTR(gAxSharedAnim_00432),
	AX_ANIM_PTR(gAxSharedAnim_00439),
	AX_ANIM_PTR(gAxSharedAnim_00447),
	AX_ANIM_PTR(gAxSharedAnim_00458),
};

static const ax_anim *const sHoothootAnimTable11[] = {
	AX_ANIM_PTR(sHoothootAnims_11_1),
	AX_ANIM_PTR(sHoothootAnims_11_2),
	AX_ANIM_PTR(sHoothootAnims_11_3),
	AX_ANIM_PTR(sHoothootAnims_11_4),
	AX_ANIM_PTR(sHoothootAnims_11_5),
	AX_ANIM_PTR(sHoothootAnims_11_6),
	AX_ANIM_PTR(sHoothootAnims_11_7),
	AX_ANIM_PTR(sHoothootAnims_11_8),
};

static const ax_anim *const sHoothootAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_00707),
	AX_ANIM_PTR(gAxSharedAnim_00783),
	AX_ANIM_PTR(gAxSharedAnim_00765),
	AX_ANIM_PTR(gAxSharedAnim_00755),
	AX_ANIM_PTR(gAxSharedAnim_00754),
	AX_ANIM_PTR(gAxSharedAnim_00740),
	AX_ANIM_PTR(gAxSharedAnim_00719),
	AX_ANIM_PTR(gAxSharedAnim_00708),
};

static const ax_anim *const sHoothootAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_00803),
	AX_ANIM_PTR(gAxSharedAnim_00888),
	AX_ANIM_PTR(gAxSharedAnim_00881),
	AX_ANIM_PTR(gAxSharedAnim_00864),
	AX_ANIM_PTR(gAxSharedAnim_00851),
	AX_ANIM_PTR(gAxSharedAnim_00841),
	AX_ANIM_PTR(gAxSharedAnim_00830),
	AX_ANIM_PTR(gAxSharedAnim_00816),
};

static const ax_anim *const *const sAxAnimationsHoothoot[] = {
	sHoothootAnimTable1,
	sHoothootAnimTable2,
	sHoothootAnimTable3,
	sHoothootAnimTable4,
	sHoothootAnimTable5,
	sHoothootAnimTable6,
	sHoothootAnimTable7,
	sHoothootAnimTable8,
	sHoothootAnimTable9,
	sHoothootAnimTable10,
	sHoothootAnimTable11,
	sHoothootAnimTable12,
	sHoothootAnimTable13,
};

static const ax_sprite *const sAxSpritesHoothoot[] = {
	sHoothootSprites1,
	sHoothootSprites2,
	sHoothootSprites3,
	sHoothootSprites4,
	sHoothootSprites5,
	sHoothootSprites6,
	sHoothootSprites7,
	sHoothootSprites8,
	sHoothootSprites9,
	sHoothootSprites10,
	sHoothootSprites11,
	sHoothootSprites12,
	sHoothootSprites13,
	sHoothootSprites14,
	sHoothootSprites15,
	sHoothootSprites16,
	sHoothootSprites17,
	sHoothootSprites18,
	sHoothootSprites19,
	sHoothootSprites20,
	sHoothootSprites21,
	sHoothootSprites22,
};

static const axmain sAxMainHoothoot = {
	.poses = sAxPosesHoothoot,
	.animations = sAxAnimationsHoothoot,
	.animCount = ARRAY_COUNT(sAxAnimationsHoothoot),
	.spriteData = sAxSpritesHoothoot,
	.positions = sAxPositionsHoothoot,
};
