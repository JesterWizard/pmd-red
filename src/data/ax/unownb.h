/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainUnownB;
const SiroArchive gAxUnownB = {"SIRO", &sAxMainUnownB};

static const ax_pose sUnownBPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownBPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownBPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownBPose4[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownBPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownBPose6[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownBPose7[] = {
	AX_POSE(6, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownBPose8[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownBPose41[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownBPose42[] = {
	AX_POSE(9, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownBPose43[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownBPose44[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownBPose45[] = {
	AX_POSE(12, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownBPose46[] = {
	AX_POSE(13, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownBPose47[] = {
	AX_POSE(14, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownBPose48[] = {
	AX_POSE(15, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownBPose49[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};

static const u8 sUnownBGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownb/sprite_1.4bpp.lz");
static const ax_sprite sUnownBSprites1[] = {
	{sUnownBGfx1, ARRAY_COUNT(sUnownBGfx1)}, 
	{NULL, 0}
};
static const u8 sUnownBGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownb/sprite_2.4bpp.lz");
static const ax_sprite sUnownBSprites2[] = {
	{sUnownBGfx2, ARRAY_COUNT(sUnownBGfx2)}, 
	{NULL, 0}
};
static const u8 sUnownBGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownb/sprite_3.4bpp.lz");
static const ax_sprite sUnownBSprites3[] = {
	{sUnownBGfx3, ARRAY_COUNT(sUnownBGfx3)}, 
	{NULL, 0}
};
static const u8 sUnownBGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownb/sprite_4.4bpp.lz");
static const ax_sprite sUnownBSprites4[] = {
	{sUnownBGfx4, ARRAY_COUNT(sUnownBGfx4)}, 
	{NULL, 0}
};
static const u8 sUnownBGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownb/sprite_5.4bpp.lz");
static const ax_sprite sUnownBSprites5[] = {
	{sUnownBGfx5, ARRAY_COUNT(sUnownBGfx5)}, 
	{NULL, 0}
};
static const u8 sUnownBGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownb/sprite_6.4bpp.lz");
static const ax_sprite sUnownBSprites6[] = {
	{sUnownBGfx6, ARRAY_COUNT(sUnownBGfx6)}, 
	{NULL, 0}
};
static const u8 sUnownBGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownb/sprite_7.4bpp.lz");
static const ax_sprite sUnownBSprites7[] = {
	{sUnownBGfx7, ARRAY_COUNT(sUnownBGfx7)}, 
	{NULL, 0}
};
static const u8 sUnownBGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownb/sprite_8.4bpp.lz");
static const ax_sprite sUnownBSprites8[] = {
	{sUnownBGfx8, ARRAY_COUNT(sUnownBGfx8)}, 
	{NULL, 0}
};
static const u8 sUnownBGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownb/sprite_9.4bpp.lz");
static const ax_sprite sUnownBSprites9[] = {
	{sUnownBGfx9, ARRAY_COUNT(sUnownBGfx9)}, 
	{NULL, 0}
};
static const u8 sUnownBGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownb/sprite_10.4bpp.lz");
static const ax_sprite sUnownBSprites10[] = {
	{sUnownBGfx10, ARRAY_COUNT(sUnownBGfx10)}, 
	{NULL, 0}
};
static const u8 sUnownBGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownb/sprite_11.4bpp.lz");
static const ax_sprite sUnownBSprites11[] = {
	{sUnownBGfx11, ARRAY_COUNT(sUnownBGfx11)}, 
	{NULL, 0}
};
static const u8 sUnownBGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownb/sprite_12.4bpp.lz");
static const ax_sprite sUnownBSprites12[] = {
	{sUnownBGfx12, ARRAY_COUNT(sUnownBGfx12)}, 
	{NULL, 0}
};
static const u8 sUnownBGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownb/sprite_13.4bpp.lz");
static const ax_sprite sUnownBSprites13[] = {
	{sUnownBGfx13, ARRAY_COUNT(sUnownBGfx13)}, 
	{NULL, 0}
};
static const u8 sUnownBGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownb/sprite_14.4bpp.lz");
static const ax_sprite sUnownBSprites14[] = {
	{sUnownBGfx14, ARRAY_COUNT(sUnownBGfx14)}, 
	{NULL, 0}
};
static const u8 sUnownBGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownb/sprite_15.4bpp.lz");
static const ax_sprite sUnownBSprites15[] = {
	{sUnownBGfx15, ARRAY_COUNT(sUnownBGfx15)}, 
	{NULL, 0}
};
static const u8 sUnownBGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownb/sprite_16.4bpp.lz");
static const ax_sprite sUnownBSprites16[] = {
	{sUnownBGfx16, ARRAY_COUNT(sUnownBGfx16)}, 
	{NULL, 0}
};
static const u8 sUnownBGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownb/sprite_17.4bpp.lz");
static const ax_sprite sUnownBSprites17[] = {
	{sUnownBGfx17, ARRAY_COUNT(sUnownBGfx17)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesUnownB[] = {
	sUnownBPose1,
	sUnownBPose2,
	sUnownBPose3,
	sUnownBPose4,
	sUnownBPose5,
	sUnownBPose6,
	sUnownBPose7,
	sUnownBPose8,
	sUnownBPose1,
	sUnownBPose2,
	sUnownBPose3,
	sUnownBPose4,
	sUnownBPose5,
	sUnownBPose6,
	sUnownBPose7,
	sUnownBPose8,
	sUnownBPose1,
	sUnownBPose2,
	sUnownBPose3,
	sUnownBPose4,
	sUnownBPose5,
	sUnownBPose6,
	sUnownBPose7,
	sUnownBPose8,
	sUnownBPose1,
	sUnownBPose2,
	sUnownBPose3,
	sUnownBPose4,
	sUnownBPose5,
	sUnownBPose6,
	sUnownBPose7,
	sUnownBPose8,
	sUnownBPose1,
	sUnownBPose2,
	sUnownBPose3,
	sUnownBPose4,
	sUnownBPose5,
	sUnownBPose6,
	sUnownBPose7,
	sUnownBPose8,
	sUnownBPose41,
	sUnownBPose42,
	sUnownBPose43,
	sUnownBPose44,
	sUnownBPose45,
	sUnownBPose46,
	sUnownBPose47,
	sUnownBPose48,
	sUnownBPose49,
	sUnownBPose1,
	sUnownBPose2,
	sUnownBPose3,
	sUnownBPose4,
	sUnownBPose5,
	sUnownBPose6,
	sUnownBPose7,
	sUnownBPose8,
	sUnownBPose1,
	sUnownBPose2,
	sUnownBPose3,
	sUnownBPose4,
	sUnownBPose5,
	sUnownBPose6,
	sUnownBPose7,
	sUnownBPose8,
	sUnownBPose1,
	sUnownBPose2,
	sUnownBPose3,
	sUnownBPose4,
	sUnownBPose5,
	sUnownBPose6,
	sUnownBPose7,
	sUnownBPose8,
	sUnownBPose1,
	sUnownBPose2,
	sUnownBPose3,
	sUnownBPose4,
	sUnownBPose5,
	sUnownBPose6,
	sUnownBPose7,
	sUnownBPose8,
	sUnownBPose1,
	sUnownBPose2,
	sUnownBPose3,
	sUnownBPose4,
	sUnownBPose5,
	sUnownBPose6,
	sUnownBPose7,
	sUnownBPose8,
	sUnownBPose1,
	sUnownBPose2,
	sUnownBPose3,
	sUnownBPose4,
	sUnownBPose5,
	sUnownBPose6,
	sUnownBPose7,
	sUnownBPose8,
};

static const struct PositionSets sAxPositionsUnownB[] = {
	[0] = { .set = { {-1, -16}, {-6, -8}, {4, -16}, {-1, -12} } },
	[1] = { .set = { {0, -15}, {-4, -6}, {4, -16}, {-1, -12} } },
	[2] = { .set = { {1, -15}, {-2, -6}, {0, -16}, {0, -11} } },
	[3] = { .set = { {1, -16}, {2, -6}, {-5, -16}, {-1, -12} } },
	[4] = { .set = { {-1, -15}, {3, -7}, {-5, -15}, {-1, -12} } },
	[5] = { .set = { {-2, -16}, {3, -8}, {-5, -14}, {-1, -11} } },
	[6] = { .set = { {-3, -15}, {-3, -8}, {1, -14}, {-1, -11} } },
	[7] = { .set = { {-2, -15}, {-5, -8}, {2, -14}, {-1, -11} } },
	[8] = { .set = { {-1, -16}, {-6, -8}, {4, -16}, {-1, -12} } },
	[9] = { .set = { {0, -15}, {-4, -6}, {4, -16}, {-1, -12} } },
	[10] = { .set = { {1, -15}, {-2, -6}, {0, -16}, {0, -11} } },
	[11] = { .set = { {1, -16}, {2, -6}, {-5, -16}, {-1, -12} } },
	[12] = { .set = { {-1, -15}, {3, -7}, {-5, -15}, {-1, -12} } },
	[13] = { .set = { {-2, -16}, {3, -8}, {-5, -14}, {-1, -11} } },
	[14] = { .set = { {-3, -15}, {-3, -8}, {1, -14}, {-1, -11} } },
	[15] = { .set = { {-2, -15}, {-5, -8}, {2, -14}, {-1, -11} } },
	[16] = { .set = { {-1, -16}, {-6, -8}, {4, -16}, {-1, -12} } },
	[17] = { .set = { {0, -15}, {-4, -6}, {4, -16}, {-1, -12} } },
	[18] = { .set = { {1, -15}, {-2, -6}, {0, -16}, {0, -11} } },
	[19] = { .set = { {1, -16}, {2, -6}, {-5, -16}, {-1, -12} } },
	[20] = { .set = { {-1, -15}, {3, -7}, {-5, -15}, {-1, -12} } },
	[21] = { .set = { {-2, -16}, {3, -8}, {-5, -14}, {-1, -11} } },
	[22] = { .set = { {-3, -15}, {-3, -8}, {1, -14}, {-1, -11} } },
	[23] = { .set = { {-2, -15}, {-5, -8}, {2, -14}, {-1, -11} } },
	[24] = { .set = { {-1, -16}, {-6, -8}, {4, -16}, {-1, -12} } },
	[25] = { .set = { {0, -15}, {-4, -6}, {4, -16}, {-1, -12} } },
	[26] = { .set = { {1, -15}, {-2, -6}, {0, -16}, {0, -11} } },
	[27] = { .set = { {1, -16}, {2, -6}, {-5, -16}, {-1, -12} } },
	[28] = { .set = { {-1, -15}, {3, -7}, {-5, -15}, {-1, -12} } },
	[29] = { .set = { {-2, -16}, {3, -8}, {-5, -14}, {-1, -11} } },
	[30] = { .set = { {-3, -15}, {-3, -8}, {1, -14}, {-1, -11} } },
	[31] = { .set = { {-2, -15}, {-5, -8}, {2, -14}, {-1, -11} } },
	[32] = { .set = { {-1, -16}, {-6, -8}, {4, -16}, {-1, -12} } },
	[33] = { .set = { {0, -15}, {-4, -6}, {4, -16}, {-1, -12} } },
	[34] = { .set = { {1, -15}, {-2, -6}, {0, -16}, {0, -11} } },
	[35] = { .set = { {1, -16}, {2, -6}, {-5, -16}, {-1, -12} } },
	[36] = { .set = { {-1, -15}, {3, -7}, {-5, -15}, {-1, -12} } },
	[37] = { .set = { {-2, -16}, {3, -8}, {-5, -14}, {-1, -11} } },
	[38] = { .set = { {-3, -15}, {-3, -8}, {1, -14}, {-1, -11} } },
	[39] = { .set = { {-2, -15}, {-5, -8}, {2, -14}, {-1, -11} } },
	[40] = { .set = { {-1, -16}, {-6, -8}, {4, -16}, {-1, -12} } },
	[41] = { .set = { {-1, -16}, {-6, -8}, {4, -16}, {-1, -12} } },
	[42] = { .set = { {-3, -16}, {-4, -6}, {0, -16}, {-2, -12} } },
	[43] = { .set = { {-2, -16}, {-3, -6}, {-4, -17}, {-2, -11} } },
	[44] = { .set = { {-1, -15}, {2, -6}, {-6, -14}, {-3, -11} } },
	[45] = { .set = { {-1, -13}, {3, -7}, {-4, -13}, {-1, -10} } },
	[46] = { .set = { {-1, -15}, {3, -7}, {-4, -13}, {0, -10} } },
	[47] = { .set = { {-1, -16}, {-2, -8}, {2, -14}, {0, -12} } },
	[48] = { .set = { {0, -16}, {-4, -9}, {5, -14}, {1, -11} } },
	[49] = { .set = { {-1, -16}, {-6, -8}, {4, -16}, {-1, -12} } },
	[50] = { .set = { {0, -15}, {-4, -6}, {4, -16}, {-1, -12} } },
	[51] = { .set = { {1, -15}, {-2, -6}, {0, -16}, {0, -11} } },
	[52] = { .set = { {1, -16}, {2, -6}, {-5, -16}, {-1, -12} } },
	[53] = { .set = { {-1, -15}, {3, -7}, {-5, -15}, {-1, -12} } },
	[54] = { .set = { {-2, -16}, {3, -8}, {-5, -14}, {-1, -11} } },
	[55] = { .set = { {-3, -15}, {-3, -8}, {1, -14}, {-1, -11} } },
	[56] = { .set = { {-2, -15}, {-5, -8}, {2, -14}, {-1, -11} } },
	[57] = { .set = { {-1, -16}, {-6, -8}, {4, -16}, {-1, -12} } },
	[58] = { .set = { {0, -15}, {-4, -6}, {4, -16}, {-1, -12} } },
	[59] = { .set = { {1, -15}, {-2, -6}, {0, -16}, {0, -11} } },
	[60] = { .set = { {1, -16}, {2, -6}, {-5, -16}, {-1, -12} } },
	[61] = { .set = { {-1, -15}, {3, -7}, {-5, -15}, {-1, -12} } },
	[62] = { .set = { {-2, -16}, {3, -8}, {-5, -14}, {-1, -11} } },
	[63] = { .set = { {-3, -15}, {-3, -8}, {1, -14}, {-1, -11} } },
	[64] = { .set = { {-2, -15}, {-5, -8}, {2, -14}, {-1, -11} } },
	[65] = { .set = { {-1, -16}, {-6, -8}, {4, -16}, {-1, -12} } },
	[66] = { .set = { {0, -15}, {-4, -6}, {4, -16}, {-1, -12} } },
	[67] = { .set = { {1, -15}, {-2, -6}, {0, -16}, {0, -11} } },
	[68] = { .set = { {1, -16}, {2, -6}, {-5, -16}, {-1, -12} } },
	[69] = { .set = { {-1, -15}, {3, -7}, {-5, -15}, {-1, -12} } },
	[70] = { .set = { {-2, -16}, {3, -8}, {-5, -14}, {-1, -11} } },
	[71] = { .set = { {-3, -15}, {-3, -8}, {1, -14}, {-1, -11} } },
	[72] = { .set = { {-2, -15}, {-5, -8}, {2, -14}, {-1, -11} } },
	[73] = { .set = { {-1, -16}, {-6, -8}, {4, -16}, {-1, -12} } },
	[74] = { .set = { {0, -15}, {-4, -6}, {4, -16}, {-1, -12} } },
	[75] = { .set = { {1, -15}, {-2, -6}, {0, -16}, {0, -11} } },
	[76] = { .set = { {1, -16}, {2, -6}, {-5, -16}, {-1, -12} } },
	[77] = { .set = { {-1, -15}, {3, -7}, {-5, -15}, {-1, -12} } },
	[78] = { .set = { {-2, -16}, {3, -8}, {-5, -14}, {-1, -11} } },
	[79] = { .set = { {-3, -15}, {-3, -8}, {1, -14}, {-1, -11} } },
	[80] = { .set = { {-2, -15}, {-5, -8}, {2, -14}, {-1, -11} } },
	[81] = { .set = { {-1, -16}, {-6, -8}, {4, -16}, {-1, -12} } },
	[82] = { .set = { {0, -15}, {-4, -6}, {4, -16}, {-1, -12} } },
	[83] = { .set = { {1, -15}, {-2, -6}, {0, -16}, {0, -11} } },
	[84] = { .set = { {1, -16}, {2, -6}, {-5, -16}, {-1, -12} } },
	[85] = { .set = { {-1, -15}, {3, -7}, {-5, -15}, {-1, -12} } },
	[86] = { .set = { {-2, -16}, {3, -8}, {-5, -14}, {-1, -11} } },
	[87] = { .set = { {-3, -15}, {-3, -8}, {1, -14}, {-1, -11} } },
	[88] = { .set = { {-2, -15}, {-5, -8}, {2, -14}, {-1, -11} } },
	[89] = { .set = { {-1, -16}, {-6, -8}, {4, -16}, {-1, -12} } },
	[90] = { .set = { {0, -15}, {-4, -6}, {4, -16}, {-1, -12} } },
	[91] = { .set = { {1, -15}, {-2, -6}, {0, -16}, {0, -11} } },
	[92] = { .set = { {1, -16}, {2, -6}, {-5, -16}, {-1, -12} } },
	[93] = { .set = { {-1, -15}, {3, -7}, {-5, -15}, {-1, -12} } },
	[94] = { .set = { {-2, -16}, {3, -8}, {-5, -14}, {-1, -11} } },
	[95] = { .set = { {-3, -15}, {-3, -8}, {1, -14}, {-1, -11} } },
	[96] = { .set = { {-2, -15}, {-5, -8}, {2, -14}, {-1, -11} } },
};

static const ax_anim *const sUnownBAnimTable1[] = {
	gAxSharedAnim_02475,
	gAxSharedAnim_02478,
	gAxSharedAnim_02528,
	gAxSharedAnim_02540,
	gAxSharedAnim_02543,
	gAxSharedAnim_02544,
	gAxSharedAnim_02549,
	gAxSharedAnim_02552,
};

static const ax_anim *const sUnownBAnimTable2[] = {
	gAxSharedAnim_02144,
	gAxSharedAnim_02232,
	gAxSharedAnim_00150,
	gAxSharedAnim_00226,
	gAxSharedAnim_00317,
	gAxSharedAnim_00394,
	gAxSharedAnim_00486,
	gAxSharedAnim_00569,
};

static const ax_anim *const sUnownBAnimTable3[] = {
	gAxSharedAnim_00666,
	gAxSharedAnim_00787,
	gAxSharedAnim_00922,
	gAxSharedAnim_01066,
	gAxSharedAnim_01207,
	gAxSharedAnim_01330,
	gAxSharedAnim_01431,
	gAxSharedAnim_01492,
};

static const ax_anim *const sUnownBAnimTable4[] = {
	gAxSharedAnim_01573,
	gAxSharedAnim_01633,
	gAxSharedAnim_01684,
	gAxSharedAnim_01726,
	gAxSharedAnim_01763,
	gAxSharedAnim_01794,
	gAxSharedAnim_01821,
	gAxSharedAnim_01824,
};

static const ax_anim *const sUnownBAnimTable5[] = {
	gAxSharedAnim_01840,
	gAxSharedAnim_01855,
	gAxSharedAnim_01869,
	gAxSharedAnim_01880,
	gAxSharedAnim_01886,
	gAxSharedAnim_01895,
	gAxSharedAnim_01900,
	gAxSharedAnim_01903,
};

static const ax_anim *const sUnownBAnimTable6[] = {
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
};

static const ax_anim *const sUnownBAnimTable7[] = {
	gAxSharedAnim_01921,
	gAxSharedAnim_01924,
	gAxSharedAnim_01935,
	gAxSharedAnim_01937,
	gAxSharedAnim_01947,
	gAxSharedAnim_01957,
	gAxSharedAnim_01960,
	gAxSharedAnim_01975,
};

static const ax_anim *const sUnownBAnimTable8[] = {
	gAxSharedAnim_02320,
	gAxSharedAnim_02321,
	gAxSharedAnim_02322,
	gAxSharedAnim_02323,
	gAxSharedAnim_02324,
	gAxSharedAnim_02325,
	gAxSharedAnim_02326,
	gAxSharedAnim_02327,
};

static const ax_anim *const sUnownBAnimTable9[] = {
	gAxSharedAnim_02011,
	gAxSharedAnim_02016,
	gAxSharedAnim_02019,
	gAxSharedAnim_02025,
	gAxSharedAnim_02032,
	gAxSharedAnim_02037,
	gAxSharedAnim_02040,
	gAxSharedAnim_02051,
};

static const ax_anim *const sUnownBAnimTable10[] = {
	gAxSharedAnim_02055,
	gAxSharedAnim_02059,
	gAxSharedAnim_02066,
	gAxSharedAnim_02072,
	gAxSharedAnim_02073,
	gAxSharedAnim_02078,
	gAxSharedAnim_02082,
	gAxSharedAnim_02085,
};

static const ax_anim *const sUnownBAnimTable11[] = {
	gAxSharedAnim_02098,
	gAxSharedAnim_02104,
	gAxSharedAnim_02108,
	gAxSharedAnim_02118,
	gAxSharedAnim_02125,
	gAxSharedAnim_02131,
	gAxSharedAnim_02139,
	gAxSharedAnim_02145,
};

static const ax_anim *const sUnownBAnimTable12[] = {
	gAxSharedAnim_02158,
	gAxSharedAnim_02167,
	gAxSharedAnim_02169,
	gAxSharedAnim_02174,
	gAxSharedAnim_02196,
	gAxSharedAnim_02202,
	gAxSharedAnim_02205,
	gAxSharedAnim_02214,
};

static const ax_anim *const sUnownBAnimTable13[] = {
	gAxSharedAnim_02230,
	gAxSharedAnim_02240,
	gAxSharedAnim_02247,
	gAxSharedAnim_02259,
	gAxSharedAnim_02269,
	gAxSharedAnim_02276,
	gAxSharedAnim_02286,
	gAxSharedAnim_02291,
};

static const ax_anim *const *const sAxAnimationsUnownB[] = {
	sUnownBAnimTable1,
	sUnownBAnimTable2,
	sUnownBAnimTable3,
	sUnownBAnimTable4,
	sUnownBAnimTable5,
	sUnownBAnimTable6,
	sUnownBAnimTable7,
	sUnownBAnimTable8,
	sUnownBAnimTable9,
	sUnownBAnimTable10,
	sUnownBAnimTable11,
	sUnownBAnimTable12,
	sUnownBAnimTable13,
};

static const ax_sprite *const sAxSpritesUnownB[] = {
	sUnownBSprites1,
	sUnownBSprites2,
	sUnownBSprites3,
	sUnownBSprites4,
	sUnownBSprites5,
	sUnownBSprites6,
	sUnownBSprites7,
	sUnownBSprites8,
	sUnownBSprites9,
	sUnownBSprites10,
	sUnownBSprites11,
	sUnownBSprites12,
	sUnownBSprites13,
	sUnownBSprites14,
	sUnownBSprites15,
	sUnownBSprites16,
	sUnownBSprites17,
};

static const axmain sAxMainUnownB = {
	.poses = sAxPosesUnownB,
	.animations = sAxAnimationsUnownB,
	.animCount = ARRAY_COUNT(sAxAnimationsUnownB),
	.spriteData = sAxSpritesUnownB,
	.positions = sAxPositionsUnownB,
};
