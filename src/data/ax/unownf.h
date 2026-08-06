/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainUnownF;
const SiroArchive gAxUnownF = {"SIRO", &sAxMainUnownF};

static const ax_pose sUnownFPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownFPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownFPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownFPose4[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownFPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownFPose6[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownFPose7[] = {
	AX_POSE(6, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownFPose8[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownFPose41[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownFPose42[] = {
	AX_POSE(9, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownFPose43[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownFPose44[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownFPose45[] = {
	AX_POSE(12, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownFPose46[] = {
	AX_POSE(13, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownFPose47[] = {
	AX_POSE(14, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownFPose48[] = {
	AX_POSE(15, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownFPose49[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};

static const u8 sUnownFGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownf/sprite_1.4bpp.lz");
static const ax_sprite sUnownFSprites1[] = {
	{sUnownFGfx1, ARRAY_COUNT(sUnownFGfx1)}, 
	{NULL, 0}
};
static const u8 sUnownFGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownf/sprite_2.4bpp.lz");
static const ax_sprite sUnownFSprites2[] = {
	{sUnownFGfx2, ARRAY_COUNT(sUnownFGfx2)}, 
	{NULL, 0}
};
static const u8 sUnownFGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownf/sprite_3.4bpp.lz");
static const ax_sprite sUnownFSprites3[] = {
	{sUnownFGfx3, ARRAY_COUNT(sUnownFGfx3)}, 
	{NULL, 0}
};
static const u8 sUnownFGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownf/sprite_4.4bpp.lz");
static const ax_sprite sUnownFSprites4[] = {
	{sUnownFGfx4, ARRAY_COUNT(sUnownFGfx4)}, 
	{NULL, 0}
};
static const u8 sUnownFGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownf/sprite_5.4bpp.lz");
static const ax_sprite sUnownFSprites5[] = {
	{sUnownFGfx5, ARRAY_COUNT(sUnownFGfx5)}, 
	{NULL, 0}
};
static const u8 sUnownFGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownf/sprite_6.4bpp.lz");
static const ax_sprite sUnownFSprites6[] = {
	{sUnownFGfx6, ARRAY_COUNT(sUnownFGfx6)}, 
	{NULL, 0}
};
static const u8 sUnownFGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownf/sprite_7.4bpp.lz");
static const ax_sprite sUnownFSprites7[] = {
	{sUnownFGfx7, ARRAY_COUNT(sUnownFGfx7)}, 
	{NULL, 0}
};
static const u8 sUnownFGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownf/sprite_8.4bpp.lz");
static const ax_sprite sUnownFSprites8[] = {
	{sUnownFGfx8, ARRAY_COUNT(sUnownFGfx8)}, 
	{NULL, 0}
};
static const u8 sUnownFGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownf/sprite_9.4bpp.lz");
static const ax_sprite sUnownFSprites9[] = {
	{sUnownFGfx9, ARRAY_COUNT(sUnownFGfx9)}, 
	{NULL, 0}
};
static const u8 sUnownFGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownf/sprite_10.4bpp.lz");
static const ax_sprite sUnownFSprites10[] = {
	{sUnownFGfx10, ARRAY_COUNT(sUnownFGfx10)}, 
	{NULL, 0}
};
static const u8 sUnownFGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownf/sprite_11.4bpp.lz");
static const ax_sprite sUnownFSprites11[] = {
	{sUnownFGfx11, ARRAY_COUNT(sUnownFGfx11)}, 
	{NULL, 0}
};
static const u8 sUnownFGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownf/sprite_12.4bpp.lz");
static const ax_sprite sUnownFSprites12[] = {
	{sUnownFGfx12, ARRAY_COUNT(sUnownFGfx12)}, 
	{NULL, 0}
};
static const u8 sUnownFGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownf/sprite_13.4bpp.lz");
static const ax_sprite sUnownFSprites13[] = {
	{sUnownFGfx13, ARRAY_COUNT(sUnownFGfx13)}, 
	{NULL, 0}
};
static const u8 sUnownFGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownf/sprite_14.4bpp.lz");
static const ax_sprite sUnownFSprites14[] = {
	{sUnownFGfx14, ARRAY_COUNT(sUnownFGfx14)}, 
	{NULL, 0}
};
static const u8 sUnownFGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownf/sprite_15.4bpp.lz");
static const ax_sprite sUnownFSprites15[] = {
	{sUnownFGfx15, ARRAY_COUNT(sUnownFGfx15)}, 
	{NULL, 0}
};
static const u8 sUnownFGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownf/sprite_16.4bpp.lz");
static const ax_sprite sUnownFSprites16[] = {
	{sUnownFGfx16, ARRAY_COUNT(sUnownFGfx16)}, 
	{NULL, 0}
};
static const u8 sUnownFGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownf/sprite_17.4bpp.lz");
static const ax_sprite sUnownFSprites17[] = {
	{sUnownFGfx17, ARRAY_COUNT(sUnownFGfx17)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesUnownF[] = {
	sUnownFPose1,
	sUnownFPose2,
	sUnownFPose3,
	sUnownFPose4,
	sUnownFPose5,
	sUnownFPose6,
	sUnownFPose7,
	sUnownFPose8,
	sUnownFPose1,
	sUnownFPose2,
	sUnownFPose3,
	sUnownFPose4,
	sUnownFPose5,
	sUnownFPose6,
	sUnownFPose7,
	sUnownFPose8,
	sUnownFPose1,
	sUnownFPose2,
	sUnownFPose3,
	sUnownFPose4,
	sUnownFPose5,
	sUnownFPose6,
	sUnownFPose7,
	sUnownFPose8,
	sUnownFPose1,
	sUnownFPose2,
	sUnownFPose3,
	sUnownFPose4,
	sUnownFPose5,
	sUnownFPose6,
	sUnownFPose7,
	sUnownFPose8,
	sUnownFPose1,
	sUnownFPose2,
	sUnownFPose3,
	sUnownFPose4,
	sUnownFPose5,
	sUnownFPose6,
	sUnownFPose7,
	sUnownFPose8,
	sUnownFPose41,
	sUnownFPose42,
	sUnownFPose43,
	sUnownFPose44,
	sUnownFPose45,
	sUnownFPose46,
	sUnownFPose47,
	sUnownFPose48,
	sUnownFPose49,
	sUnownFPose1,
	sUnownFPose2,
	sUnownFPose3,
	sUnownFPose4,
	sUnownFPose5,
	sUnownFPose6,
	sUnownFPose7,
	sUnownFPose8,
	sUnownFPose1,
	sUnownFPose2,
	sUnownFPose3,
	sUnownFPose4,
	sUnownFPose5,
	sUnownFPose6,
	sUnownFPose7,
	sUnownFPose8,
	sUnownFPose1,
	sUnownFPose2,
	sUnownFPose3,
	sUnownFPose4,
	sUnownFPose5,
	sUnownFPose6,
	sUnownFPose7,
	sUnownFPose8,
	sUnownFPose1,
	sUnownFPose2,
	sUnownFPose3,
	sUnownFPose4,
	sUnownFPose5,
	sUnownFPose6,
	sUnownFPose7,
	sUnownFPose8,
	sUnownFPose1,
	sUnownFPose2,
	sUnownFPose3,
	sUnownFPose4,
	sUnownFPose5,
	sUnownFPose6,
	sUnownFPose7,
	sUnownFPose8,
	sUnownFPose1,
	sUnownFPose2,
	sUnownFPose3,
	sUnownFPose4,
	sUnownFPose5,
	sUnownFPose6,
	sUnownFPose7,
	sUnownFPose8,
};

static const struct PositionSets sAxPositionsUnownF[] = {
	[0] = { .set = { {-1, -15}, {-3, -5}, {1, -5}, {-1, -12} } },
	[1] = { .set = { {0, -15}, {-3, -5}, {1, -6}, {-1, -11} } },
	[2] = { .set = { {0, -15}, {-2, -5}, {0, -7}, {-1, -11} } },
	[3] = { .set = { {1, -15}, {1, -5}, {-3, -6}, {-1, -11} } },
	[4] = { .set = { {-1, -14}, {2, -5}, {-3, -5}, {-1, -11} } },
	[5] = { .set = { {-2, -16}, {1, -6}, {-3, -5}, {-1, -11} } },
	[6] = { .set = { {-2, -15}, {-2, -7}, {0, -5}, {-1, -12} } },
	[7] = { .set = { {-2, -15}, {-3, -6}, {1, -5}, {-1, -12} } },
	[8] = { .set = { {-1, -15}, {-3, -5}, {1, -5}, {-1, -12} } },
	[9] = { .set = { {0, -15}, {-3, -5}, {1, -6}, {-1, -11} } },
	[10] = { .set = { {0, -15}, {-2, -5}, {0, -7}, {-1, -11} } },
	[11] = { .set = { {1, -15}, {1, -5}, {-3, -6}, {-1, -11} } },
	[12] = { .set = { {-1, -14}, {2, -5}, {-3, -5}, {-1, -11} } },
	[13] = { .set = { {-2, -16}, {1, -6}, {-3, -5}, {-1, -11} } },
	[14] = { .set = { {-2, -15}, {-2, -7}, {0, -5}, {-1, -12} } },
	[15] = { .set = { {-2, -15}, {-3, -6}, {1, -5}, {-1, -12} } },
	[16] = { .set = { {-1, -15}, {-3, -5}, {1, -5}, {-1, -12} } },
	[17] = { .set = { {0, -15}, {-3, -5}, {1, -6}, {-1, -11} } },
	[18] = { .set = { {0, -15}, {-2, -5}, {0, -7}, {-1, -11} } },
	[19] = { .set = { {1, -15}, {1, -5}, {-3, -6}, {-1, -11} } },
	[20] = { .set = { {-1, -14}, {2, -5}, {-3, -5}, {-1, -11} } },
	[21] = { .set = { {-2, -16}, {1, -6}, {-3, -5}, {-1, -11} } },
	[22] = { .set = { {-2, -15}, {-2, -7}, {0, -5}, {-1, -12} } },
	[23] = { .set = { {-2, -15}, {-3, -6}, {1, -5}, {-1, -12} } },
	[24] = { .set = { {-1, -15}, {-3, -5}, {1, -5}, {-1, -12} } },
	[25] = { .set = { {0, -15}, {-3, -5}, {1, -6}, {-1, -11} } },
	[26] = { .set = { {0, -15}, {-2, -5}, {0, -7}, {-1, -11} } },
	[27] = { .set = { {1, -15}, {1, -5}, {-3, -6}, {-1, -11} } },
	[28] = { .set = { {-1, -14}, {2, -5}, {-3, -5}, {-1, -11} } },
	[29] = { .set = { {-2, -16}, {1, -6}, {-3, -5}, {-1, -11} } },
	[30] = { .set = { {-2, -15}, {-2, -7}, {0, -5}, {-1, -12} } },
	[31] = { .set = { {-2, -15}, {-3, -6}, {1, -5}, {-1, -12} } },
	[32] = { .set = { {-1, -15}, {-3, -5}, {1, -5}, {-1, -12} } },
	[33] = { .set = { {0, -15}, {-3, -5}, {1, -6}, {-1, -11} } },
	[34] = { .set = { {0, -15}, {-2, -5}, {0, -7}, {-1, -11} } },
	[35] = { .set = { {1, -15}, {1, -5}, {-3, -6}, {-1, -11} } },
	[36] = { .set = { {-1, -14}, {2, -5}, {-3, -5}, {-1, -11} } },
	[37] = { .set = { {-2, -16}, {1, -6}, {-3, -5}, {-1, -11} } },
	[38] = { .set = { {-2, -15}, {-2, -7}, {0, -5}, {-1, -12} } },
	[39] = { .set = { {-2, -15}, {-3, -6}, {1, -5}, {-1, -12} } },
	[40] = { .set = { {-1, -15}, {-3, -5}, {1, -5}, {-1, -12} } },
	[41] = { .set = { {-1, -15}, {-3, -5}, {1, -5}, {-1, -11} } },
	[42] = { .set = { {-1, -16}, {-2, -5}, {2, -6}, {-1, -11} } },
	[43] = { .set = { {-1, -16}, {-1, -5}, {1, -7}, {-1, -11} } },
	[44] = { .set = { {0, -16}, {2, -5}, {-2, -6}, {-1, -11} } },
	[45] = { .set = { {-1, -14}, {1, -5}, {-3, -5}, {-1, -11} } },
	[46] = { .set = { {-1, -17}, {1, -6}, {-4, -5}, {-1, -11} } },
	[47] = { .set = { {0, -16}, {-3, -7}, {-1, -5}, {0, -11} } },
	[48] = { .set = { {-1, -16}, {-4, -6}, {0, -5}, {0, -12} } },
	[49] = { .set = { {-1, -15}, {-3, -5}, {1, -5}, {-1, -12} } },
	[50] = { .set = { {0, -15}, {-3, -5}, {1, -6}, {-1, -11} } },
	[51] = { .set = { {0, -15}, {-2, -5}, {0, -7}, {-1, -11} } },
	[52] = { .set = { {1, -15}, {1, -5}, {-3, -6}, {-1, -11} } },
	[53] = { .set = { {-1, -14}, {2, -5}, {-3, -5}, {-1, -11} } },
	[54] = { .set = { {-2, -16}, {1, -6}, {-3, -5}, {-1, -11} } },
	[55] = { .set = { {-2, -15}, {-2, -7}, {0, -5}, {-1, -12} } },
	[56] = { .set = { {-2, -15}, {-3, -6}, {1, -5}, {-1, -12} } },
	[57] = { .set = { {-1, -15}, {-3, -5}, {1, -5}, {-1, -12} } },
	[58] = { .set = { {0, -15}, {-3, -5}, {1, -6}, {-1, -11} } },
	[59] = { .set = { {0, -15}, {-2, -5}, {0, -7}, {-1, -11} } },
	[60] = { .set = { {1, -15}, {1, -5}, {-3, -6}, {-1, -11} } },
	[61] = { .set = { {-1, -14}, {2, -5}, {-3, -5}, {-1, -11} } },
	[62] = { .set = { {-2, -16}, {1, -6}, {-3, -5}, {-1, -11} } },
	[63] = { .set = { {-2, -15}, {-2, -7}, {0, -5}, {-1, -12} } },
	[64] = { .set = { {-2, -15}, {-3, -6}, {1, -5}, {-1, -12} } },
	[65] = { .set = { {-1, -15}, {-3, -5}, {1, -5}, {-1, -12} } },
	[66] = { .set = { {0, -15}, {-3, -5}, {1, -6}, {-1, -11} } },
	[67] = { .set = { {0, -15}, {-2, -5}, {0, -7}, {-1, -11} } },
	[68] = { .set = { {1, -15}, {1, -5}, {-3, -6}, {-1, -11} } },
	[69] = { .set = { {-1, -14}, {2, -5}, {-3, -5}, {-1, -11} } },
	[70] = { .set = { {-2, -16}, {1, -6}, {-3, -5}, {-1, -11} } },
	[71] = { .set = { {-2, -15}, {-2, -7}, {0, -5}, {-1, -12} } },
	[72] = { .set = { {-2, -15}, {-3, -6}, {1, -5}, {-1, -12} } },
	[73] = { .set = { {-1, -15}, {-3, -5}, {1, -5}, {-1, -12} } },
	[74] = { .set = { {0, -15}, {-3, -5}, {1, -6}, {-1, -11} } },
	[75] = { .set = { {0, -15}, {-2, -5}, {0, -7}, {-1, -11} } },
	[76] = { .set = { {1, -15}, {1, -5}, {-3, -6}, {-1, -11} } },
	[77] = { .set = { {-1, -14}, {2, -5}, {-3, -5}, {-1, -11} } },
	[78] = { .set = { {-2, -16}, {1, -6}, {-3, -5}, {-1, -11} } },
	[79] = { .set = { {-2, -15}, {-2, -7}, {0, -5}, {-1, -12} } },
	[80] = { .set = { {-2, -15}, {-3, -6}, {1, -5}, {-1, -12} } },
	[81] = { .set = { {-1, -15}, {-3, -5}, {1, -5}, {-1, -12} } },
	[82] = { .set = { {0, -15}, {-3, -5}, {1, -6}, {-1, -11} } },
	[83] = { .set = { {0, -15}, {-2, -5}, {0, -7}, {-1, -11} } },
	[84] = { .set = { {1, -15}, {1, -5}, {-3, -6}, {-1, -11} } },
	[85] = { .set = { {-1, -14}, {2, -5}, {-3, -5}, {-1, -11} } },
	[86] = { .set = { {-2, -16}, {1, -6}, {-3, -5}, {-1, -11} } },
	[87] = { .set = { {-2, -15}, {-2, -7}, {0, -5}, {-1, -12} } },
	[88] = { .set = { {-2, -15}, {-3, -6}, {1, -5}, {-1, -12} } },
	[89] = { .set = { {-1, -15}, {-3, -5}, {1, -5}, {-1, -12} } },
	[90] = { .set = { {0, -15}, {-3, -5}, {1, -6}, {-1, -11} } },
	[91] = { .set = { {0, -15}, {-2, -5}, {0, -7}, {-1, -11} } },
	[92] = { .set = { {1, -15}, {1, -5}, {-3, -6}, {-1, -11} } },
	[93] = { .set = { {-1, -14}, {2, -5}, {-3, -5}, {-1, -11} } },
	[94] = { .set = { {-2, -16}, {1, -6}, {-3, -5}, {-1, -11} } },
	[95] = { .set = { {-2, -15}, {-2, -7}, {0, -5}, {-1, -12} } },
	[96] = { .set = { {-2, -15}, {-3, -6}, {1, -5}, {-1, -12} } },
};

static const ax_anim *const sUnownFAnimTable1[] = {
	gAxSharedAnim_02475,
	gAxSharedAnim_02478,
	gAxSharedAnim_02528,
	gAxSharedAnim_02540,
	gAxSharedAnim_02543,
	gAxSharedAnim_02544,
	gAxSharedAnim_02549,
	gAxSharedAnim_02552,
};

static const ax_anim *const sUnownFAnimTable2[] = {
	gAxSharedAnim_02144,
	gAxSharedAnim_02232,
	gAxSharedAnim_00150,
	gAxSharedAnim_00226,
	gAxSharedAnim_00317,
	gAxSharedAnim_00394,
	gAxSharedAnim_00486,
	gAxSharedAnim_00569,
};

static const ax_anim *const sUnownFAnimTable3[] = {
	gAxSharedAnim_00666,
	gAxSharedAnim_00787,
	gAxSharedAnim_00922,
	gAxSharedAnim_01066,
	gAxSharedAnim_01207,
	gAxSharedAnim_01330,
	gAxSharedAnim_01431,
	gAxSharedAnim_01492,
};

static const ax_anim *const sUnownFAnimTable4[] = {
	gAxSharedAnim_01573,
	gAxSharedAnim_01633,
	gAxSharedAnim_01684,
	gAxSharedAnim_01726,
	gAxSharedAnim_01763,
	gAxSharedAnim_01794,
	gAxSharedAnim_01821,
	gAxSharedAnim_01824,
};

static const ax_anim *const sUnownFAnimTable5[] = {
	gAxSharedAnim_01840,
	gAxSharedAnim_01855,
	gAxSharedAnim_01869,
	gAxSharedAnim_01880,
	gAxSharedAnim_01886,
	gAxSharedAnim_01895,
	gAxSharedAnim_01900,
	gAxSharedAnim_01903,
};

static const ax_anim *const sUnownFAnimTable6[] = {
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
};

static const ax_anim *const sUnownFAnimTable7[] = {
	gAxSharedAnim_01921,
	gAxSharedAnim_01924,
	gAxSharedAnim_01935,
	gAxSharedAnim_01937,
	gAxSharedAnim_01947,
	gAxSharedAnim_01957,
	gAxSharedAnim_01960,
	gAxSharedAnim_01975,
};

static const ax_anim *const sUnownFAnimTable8[] = {
	gAxSharedAnim_02320,
	gAxSharedAnim_02321,
	gAxSharedAnim_02322,
	gAxSharedAnim_02323,
	gAxSharedAnim_02324,
	gAxSharedAnim_02325,
	gAxSharedAnim_02326,
	gAxSharedAnim_02327,
};

static const ax_anim *const sUnownFAnimTable9[] = {
	gAxSharedAnim_02011,
	gAxSharedAnim_02016,
	gAxSharedAnim_02019,
	gAxSharedAnim_02025,
	gAxSharedAnim_02032,
	gAxSharedAnim_02037,
	gAxSharedAnim_02040,
	gAxSharedAnim_02051,
};

static const ax_anim *const sUnownFAnimTable10[] = {
	gAxSharedAnim_02055,
	gAxSharedAnim_02059,
	gAxSharedAnim_02066,
	gAxSharedAnim_02072,
	gAxSharedAnim_02073,
	gAxSharedAnim_02078,
	gAxSharedAnim_02082,
	gAxSharedAnim_02085,
};

static const ax_anim *const sUnownFAnimTable11[] = {
	gAxSharedAnim_02098,
	gAxSharedAnim_02104,
	gAxSharedAnim_02108,
	gAxSharedAnim_02118,
	gAxSharedAnim_02125,
	gAxSharedAnim_02131,
	gAxSharedAnim_02139,
	gAxSharedAnim_02145,
};

static const ax_anim *const sUnownFAnimTable12[] = {
	gAxSharedAnim_02158,
	gAxSharedAnim_02167,
	gAxSharedAnim_02169,
	gAxSharedAnim_02174,
	gAxSharedAnim_02196,
	gAxSharedAnim_02202,
	gAxSharedAnim_02205,
	gAxSharedAnim_02214,
};

static const ax_anim *const sUnownFAnimTable13[] = {
	gAxSharedAnim_02230,
	gAxSharedAnim_02240,
	gAxSharedAnim_02247,
	gAxSharedAnim_02259,
	gAxSharedAnim_02269,
	gAxSharedAnim_02276,
	gAxSharedAnim_02286,
	gAxSharedAnim_02291,
};

static const ax_anim *const *const sAxAnimationsUnownF[] = {
	sUnownFAnimTable1,
	sUnownFAnimTable2,
	sUnownFAnimTable3,
	sUnownFAnimTable4,
	sUnownFAnimTable5,
	sUnownFAnimTable6,
	sUnownFAnimTable7,
	sUnownFAnimTable8,
	sUnownFAnimTable9,
	sUnownFAnimTable10,
	sUnownFAnimTable11,
	sUnownFAnimTable12,
	sUnownFAnimTable13,
};

static const ax_sprite *const sAxSpritesUnownF[] = {
	sUnownFSprites1,
	sUnownFSprites2,
	sUnownFSprites3,
	sUnownFSprites4,
	sUnownFSprites5,
	sUnownFSprites6,
	sUnownFSprites7,
	sUnownFSprites8,
	sUnownFSprites9,
	sUnownFSprites10,
	sUnownFSprites11,
	sUnownFSprites12,
	sUnownFSprites13,
	sUnownFSprites14,
	sUnownFSprites15,
	sUnownFSprites16,
	sUnownFSprites17,
};

static const axmain sAxMainUnownF = {
	.poses = sAxPosesUnownF,
	.animations = sAxAnimationsUnownF,
	.animCount = ARRAY_COUNT(sAxAnimationsUnownF),
	.spriteData = sAxSpritesUnownF,
	.positions = sAxPositionsUnownF,
};
