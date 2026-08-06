/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainUnownC;
const SiroArchive gAxUnownC = {"SIRO", &sAxMainUnownC};

static const ax_pose sUnownCPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownCPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownCPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownCPose4[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownCPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownCPose6[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownCPose7[] = {
	AX_POSE(6, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownCPose8[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownCPose41[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownCPose42[] = {
	AX_POSE(9, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownCPose43[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownCPose44[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownCPose45[] = {
	AX_POSE(12, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownCPose46[] = {
	AX_POSE(13, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownCPose47[] = {
	AX_POSE(14, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownCPose48[] = {
	AX_POSE(15, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownCPose49[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};

static const u8 sUnownCGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownc/sprite_1.4bpp.lz");
static const ax_sprite sUnownCSprites1[] = {
	{sUnownCGfx1, ARRAY_COUNT(sUnownCGfx1)}, 
	{NULL, 0}
};
static const u8 sUnownCGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownc/sprite_2.4bpp.lz");
static const ax_sprite sUnownCSprites2[] = {
	{sUnownCGfx2, ARRAY_COUNT(sUnownCGfx2)}, 
	{NULL, 0}
};
static const u8 sUnownCGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownc/sprite_3.4bpp.lz");
static const ax_sprite sUnownCSprites3[] = {
	{sUnownCGfx3, ARRAY_COUNT(sUnownCGfx3)}, 
	{NULL, 0}
};
static const u8 sUnownCGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownc/sprite_4.4bpp.lz");
static const ax_sprite sUnownCSprites4[] = {
	{sUnownCGfx4, ARRAY_COUNT(sUnownCGfx4)}, 
	{NULL, 0}
};
static const u8 sUnownCGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownc/sprite_5.4bpp.lz");
static const ax_sprite sUnownCSprites5[] = {
	{sUnownCGfx5, ARRAY_COUNT(sUnownCGfx5)}, 
	{NULL, 0}
};
static const u8 sUnownCGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownc/sprite_6.4bpp.lz");
static const ax_sprite sUnownCSprites6[] = {
	{sUnownCGfx6, ARRAY_COUNT(sUnownCGfx6)}, 
	{NULL, 0}
};
static const u8 sUnownCGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownc/sprite_7.4bpp.lz");
static const ax_sprite sUnownCSprites7[] = {
	{sUnownCGfx7, ARRAY_COUNT(sUnownCGfx7)}, 
	{NULL, 0}
};
static const u8 sUnownCGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownc/sprite_8.4bpp.lz");
static const ax_sprite sUnownCSprites8[] = {
	{sUnownCGfx8, ARRAY_COUNT(sUnownCGfx8)}, 
	{NULL, 0}
};
static const u8 sUnownCGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownc/sprite_9.4bpp.lz");
static const ax_sprite sUnownCSprites9[] = {
	{sUnownCGfx9, ARRAY_COUNT(sUnownCGfx9)}, 
	{NULL, 0}
};
static const u8 sUnownCGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownc/sprite_10.4bpp.lz");
static const ax_sprite sUnownCSprites10[] = {
	{sUnownCGfx10, ARRAY_COUNT(sUnownCGfx10)}, 
	{NULL, 0}
};
static const u8 sUnownCGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownc/sprite_11.4bpp.lz");
static const ax_sprite sUnownCSprites11[] = {
	{sUnownCGfx11, ARRAY_COUNT(sUnownCGfx11)}, 
	{NULL, 0}
};
static const u8 sUnownCGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownc/sprite_12.4bpp.lz");
static const ax_sprite sUnownCSprites12[] = {
	{sUnownCGfx12, ARRAY_COUNT(sUnownCGfx12)}, 
	{NULL, 0}
};
static const u8 sUnownCGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownc/sprite_13.4bpp.lz");
static const ax_sprite sUnownCSprites13[] = {
	{sUnownCGfx13, ARRAY_COUNT(sUnownCGfx13)}, 
	{NULL, 0}
};
static const u8 sUnownCGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownc/sprite_14.4bpp.lz");
static const ax_sprite sUnownCSprites14[] = {
	{sUnownCGfx14, ARRAY_COUNT(sUnownCGfx14)}, 
	{NULL, 0}
};
static const u8 sUnownCGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownc/sprite_15.4bpp.lz");
static const ax_sprite sUnownCSprites15[] = {
	{sUnownCGfx15, ARRAY_COUNT(sUnownCGfx15)}, 
	{NULL, 0}
};
static const u8 sUnownCGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownc/sprite_16.4bpp.lz");
static const ax_sprite sUnownCSprites16[] = {
	{sUnownCGfx16, ARRAY_COUNT(sUnownCGfx16)}, 
	{NULL, 0}
};
static const u8 sUnownCGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownc/sprite_17.4bpp.lz");
static const ax_sprite sUnownCSprites17[] = {
	{sUnownCGfx17, ARRAY_COUNT(sUnownCGfx17)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesUnownC[] = {
	sUnownCPose1,
	sUnownCPose2,
	sUnownCPose3,
	sUnownCPose4,
	sUnownCPose5,
	sUnownCPose6,
	sUnownCPose7,
	sUnownCPose8,
	sUnownCPose1,
	sUnownCPose2,
	sUnownCPose3,
	sUnownCPose4,
	sUnownCPose5,
	sUnownCPose6,
	sUnownCPose7,
	sUnownCPose8,
	sUnownCPose1,
	sUnownCPose2,
	sUnownCPose3,
	sUnownCPose4,
	sUnownCPose5,
	sUnownCPose6,
	sUnownCPose7,
	sUnownCPose8,
	sUnownCPose1,
	sUnownCPose2,
	sUnownCPose3,
	sUnownCPose4,
	sUnownCPose5,
	sUnownCPose6,
	sUnownCPose7,
	sUnownCPose8,
	sUnownCPose1,
	sUnownCPose2,
	sUnownCPose3,
	sUnownCPose4,
	sUnownCPose5,
	sUnownCPose6,
	sUnownCPose7,
	sUnownCPose8,
	sUnownCPose41,
	sUnownCPose42,
	sUnownCPose43,
	sUnownCPose44,
	sUnownCPose45,
	sUnownCPose46,
	sUnownCPose47,
	sUnownCPose48,
	sUnownCPose49,
	sUnownCPose1,
	sUnownCPose2,
	sUnownCPose3,
	sUnownCPose4,
	sUnownCPose5,
	sUnownCPose6,
	sUnownCPose7,
	sUnownCPose8,
	sUnownCPose1,
	sUnownCPose2,
	sUnownCPose3,
	sUnownCPose4,
	sUnownCPose5,
	sUnownCPose6,
	sUnownCPose7,
	sUnownCPose8,
	sUnownCPose1,
	sUnownCPose2,
	sUnownCPose3,
	sUnownCPose4,
	sUnownCPose5,
	sUnownCPose6,
	sUnownCPose7,
	sUnownCPose8,
	sUnownCPose1,
	sUnownCPose2,
	sUnownCPose3,
	sUnownCPose4,
	sUnownCPose5,
	sUnownCPose6,
	sUnownCPose7,
	sUnownCPose8,
	sUnownCPose1,
	sUnownCPose2,
	sUnownCPose3,
	sUnownCPose4,
	sUnownCPose5,
	sUnownCPose6,
	sUnownCPose7,
	sUnownCPose8,
	sUnownCPose1,
	sUnownCPose2,
	sUnownCPose3,
	sUnownCPose4,
	sUnownCPose5,
	sUnownCPose6,
	sUnownCPose7,
	sUnownCPose8,
};

static const struct PositionSets sAxPositionsUnownC[] = {
	[0] = { .set = { {-1, -13}, {-1, -5}, {6, -13}, {-1, -12} } },
	[1] = { .set = { {0, -13}, {-1, -6}, {4, -14}, {-2, -12} } },
	[2] = { .set = { {2, -13}, {-1, -6}, {2, -16}, {0, -12} } },
	[3] = { .set = { {0, -15}, {-1, -6}, {-6, -15}, {-1, -13} } },
	[4] = { .set = { {-1, -13}, {-1, -6}, {-8, -14}, {-1, -12} } },
	[5] = { .set = { {-2, -14}, {-1, -6}, {-6, -11}, {0, -12} } },
	[6] = { .set = { {-4, -13}, {-1, -6}, {2, -11}, {-2, -12} } },
	[7] = { .set = { {-2, -13}, {-1, -6}, {5, -11}, {-1, -12} } },
	[8] = { .set = { {-1, -13}, {-1, -5}, {6, -13}, {-1, -12} } },
	[9] = { .set = { {0, -13}, {-1, -6}, {4, -14}, {-2, -12} } },
	[10] = { .set = { {2, -13}, {-1, -6}, {2, -16}, {0, -12} } },
	[11] = { .set = { {0, -15}, {-1, -6}, {-6, -15}, {-1, -13} } },
	[12] = { .set = { {-1, -13}, {-1, -6}, {-8, -14}, {-1, -12} } },
	[13] = { .set = { {-2, -14}, {-1, -6}, {-6, -11}, {0, -12} } },
	[14] = { .set = { {-4, -13}, {-1, -6}, {2, -11}, {-2, -12} } },
	[15] = { .set = { {-2, -13}, {-1, -6}, {5, -11}, {-1, -12} } },
	[16] = { .set = { {-1, -13}, {-1, -5}, {6, -13}, {-1, -12} } },
	[17] = { .set = { {0, -13}, {-1, -6}, {4, -14}, {-2, -12} } },
	[18] = { .set = { {2, -13}, {-1, -6}, {2, -16}, {0, -12} } },
	[19] = { .set = { {0, -15}, {-1, -6}, {-6, -15}, {-1, -13} } },
	[20] = { .set = { {-1, -13}, {-1, -6}, {-8, -14}, {-1, -12} } },
	[21] = { .set = { {-2, -14}, {-1, -6}, {-6, -11}, {0, -12} } },
	[22] = { .set = { {-4, -13}, {-1, -6}, {2, -11}, {-2, -12} } },
	[23] = { .set = { {-2, -13}, {-1, -6}, {5, -11}, {-1, -12} } },
	[24] = { .set = { {-1, -13}, {-1, -5}, {6, -13}, {-1, -12} } },
	[25] = { .set = { {0, -13}, {-1, -6}, {4, -14}, {-2, -12} } },
	[26] = { .set = { {2, -13}, {-1, -6}, {2, -16}, {0, -12} } },
	[27] = { .set = { {0, -15}, {-1, -6}, {-6, -15}, {-1, -13} } },
	[28] = { .set = { {-1, -13}, {-1, -6}, {-8, -14}, {-1, -12} } },
	[29] = { .set = { {-2, -14}, {-1, -6}, {-6, -11}, {0, -12} } },
	[30] = { .set = { {-4, -13}, {-1, -6}, {2, -11}, {-2, -12} } },
	[31] = { .set = { {-2, -13}, {-1, -6}, {5, -11}, {-1, -12} } },
	[32] = { .set = { {-1, -13}, {-1, -5}, {6, -13}, {-1, -12} } },
	[33] = { .set = { {0, -13}, {-1, -6}, {4, -14}, {-2, -12} } },
	[34] = { .set = { {2, -13}, {-1, -6}, {2, -16}, {0, -12} } },
	[35] = { .set = { {0, -15}, {-1, -6}, {-6, -15}, {-1, -13} } },
	[36] = { .set = { {-1, -13}, {-1, -6}, {-8, -14}, {-1, -12} } },
	[37] = { .set = { {-2, -14}, {-1, -6}, {-6, -11}, {0, -12} } },
	[38] = { .set = { {-4, -13}, {-1, -6}, {2, -11}, {-2, -12} } },
	[39] = { .set = { {-2, -13}, {-1, -6}, {5, -11}, {-1, -12} } },
	[40] = { .set = { {-1, -13}, {-1, -5}, {6, -13}, {-1, -12} } },
	[41] = { .set = { {-1, -13}, {-1, -5}, {6, -13}, {-1, -12} } },
	[42] = { .set = { {0, -14}, {0, -6}, {4, -13}, {-1, -13} } },
	[43] = { .set = { {1, -14}, {-1, -6}, {0, -17}, {-2, -13} } },
	[44] = { .set = { {0, -15}, {0, -6}, {-6, -15}, {-1, -13} } },
	[45] = { .set = { {-1, -14}, {-1, -7}, {-8, -13}, {-1, -12} } },
	[46] = { .set = { {-2, -14}, {-2, -6}, {-6, -11}, {0, -12} } },
	[47] = { .set = { {-4, -14}, {-2, -6}, {2, -11}, {-1, -12} } },
	[48] = { .set = { {-2, -14}, {-3, -6}, {5, -11}, {0, -12} } },
	[49] = { .set = { {-1, -13}, {-1, -5}, {6, -13}, {-1, -12} } },
	[50] = { .set = { {0, -13}, {-1, -6}, {4, -14}, {-2, -12} } },
	[51] = { .set = { {2, -13}, {-1, -6}, {2, -16}, {0, -12} } },
	[52] = { .set = { {0, -15}, {-1, -6}, {-6, -15}, {-1, -13} } },
	[53] = { .set = { {-1, -13}, {-1, -6}, {-8, -14}, {-1, -12} } },
	[54] = { .set = { {-2, -14}, {-1, -6}, {-6, -11}, {0, -12} } },
	[55] = { .set = { {-4, -13}, {-1, -6}, {2, -11}, {-2, -12} } },
	[56] = { .set = { {-2, -13}, {-1, -6}, {5, -11}, {-1, -12} } },
	[57] = { .set = { {-1, -13}, {-1, -5}, {6, -13}, {-1, -12} } },
	[58] = { .set = { {0, -13}, {-1, -6}, {4, -14}, {-2, -12} } },
	[59] = { .set = { {2, -13}, {-1, -6}, {2, -16}, {0, -12} } },
	[60] = { .set = { {0, -15}, {-1, -6}, {-6, -15}, {-1, -13} } },
	[61] = { .set = { {-1, -13}, {-1, -6}, {-8, -14}, {-1, -12} } },
	[62] = { .set = { {-2, -14}, {-1, -6}, {-6, -11}, {0, -12} } },
	[63] = { .set = { {-4, -13}, {-1, -6}, {2, -11}, {-2, -12} } },
	[64] = { .set = { {-2, -13}, {-1, -6}, {5, -11}, {-1, -12} } },
	[65] = { .set = { {-1, -13}, {-1, -5}, {6, -13}, {-1, -12} } },
	[66] = { .set = { {0, -13}, {-1, -6}, {4, -14}, {-2, -12} } },
	[67] = { .set = { {2, -13}, {-1, -6}, {2, -16}, {0, -12} } },
	[68] = { .set = { {0, -15}, {-1, -6}, {-6, -15}, {-1, -13} } },
	[69] = { .set = { {-1, -13}, {-1, -6}, {-8, -14}, {-1, -12} } },
	[70] = { .set = { {-2, -14}, {-1, -6}, {-6, -11}, {0, -12} } },
	[71] = { .set = { {-4, -13}, {-1, -6}, {2, -11}, {-2, -12} } },
	[72] = { .set = { {-2, -13}, {-1, -6}, {5, -11}, {-1, -12} } },
	[73] = { .set = { {-1, -13}, {-1, -5}, {6, -13}, {-1, -12} } },
	[74] = { .set = { {0, -13}, {-1, -6}, {4, -14}, {-2, -12} } },
	[75] = { .set = { {2, -13}, {-1, -6}, {2, -16}, {0, -12} } },
	[76] = { .set = { {0, -15}, {-1, -6}, {-6, -15}, {-1, -13} } },
	[77] = { .set = { {-1, -13}, {-1, -6}, {-8, -14}, {-1, -12} } },
	[78] = { .set = { {-2, -14}, {-1, -6}, {-6, -11}, {0, -12} } },
	[79] = { .set = { {-4, -13}, {-1, -6}, {2, -11}, {-2, -12} } },
	[80] = { .set = { {-2, -13}, {-1, -6}, {5, -11}, {-1, -12} } },
	[81] = { .set = { {-1, -13}, {-1, -5}, {6, -13}, {-1, -12} } },
	[82] = { .set = { {0, -13}, {-1, -6}, {4, -14}, {-2, -12} } },
	[83] = { .set = { {2, -13}, {-1, -6}, {2, -16}, {0, -12} } },
	[84] = { .set = { {0, -15}, {-1, -6}, {-6, -15}, {-1, -13} } },
	[85] = { .set = { {-1, -13}, {-1, -6}, {-8, -14}, {-1, -12} } },
	[86] = { .set = { {-2, -14}, {-1, -6}, {-6, -11}, {0, -12} } },
	[87] = { .set = { {-4, -13}, {-1, -6}, {2, -11}, {-2, -12} } },
	[88] = { .set = { {-2, -13}, {-1, -6}, {5, -11}, {-1, -12} } },
	[89] = { .set = { {-1, -13}, {-1, -5}, {6, -13}, {-1, -12} } },
	[90] = { .set = { {0, -13}, {-1, -6}, {4, -14}, {-2, -12} } },
	[91] = { .set = { {2, -13}, {-1, -6}, {2, -16}, {0, -12} } },
	[92] = { .set = { {0, -15}, {-1, -6}, {-6, -15}, {-1, -13} } },
	[93] = { .set = { {-1, -13}, {-1, -6}, {-8, -14}, {-1, -12} } },
	[94] = { .set = { {-2, -14}, {-1, -6}, {-6, -11}, {0, -12} } },
	[95] = { .set = { {-4, -13}, {-1, -6}, {2, -11}, {-2, -12} } },
	[96] = { .set = { {-2, -13}, {-1, -6}, {5, -11}, {-1, -12} } },
};

static const ax_anim *const sUnownCAnimTable1[] = {
	gAxSharedAnim_02475,
	gAxSharedAnim_02478,
	gAxSharedAnim_02528,
	gAxSharedAnim_02540,
	gAxSharedAnim_02543,
	gAxSharedAnim_02544,
	gAxSharedAnim_02549,
	gAxSharedAnim_02552,
};

static const ax_anim *const sUnownCAnimTable2[] = {
	gAxSharedAnim_02144,
	gAxSharedAnim_02232,
	gAxSharedAnim_00150,
	gAxSharedAnim_00226,
	gAxSharedAnim_00317,
	gAxSharedAnim_00394,
	gAxSharedAnim_00486,
	gAxSharedAnim_00569,
};

static const ax_anim *const sUnownCAnimTable3[] = {
	gAxSharedAnim_00666,
	gAxSharedAnim_00787,
	gAxSharedAnim_00922,
	gAxSharedAnim_01066,
	gAxSharedAnim_01207,
	gAxSharedAnim_01330,
	gAxSharedAnim_01431,
	gAxSharedAnim_01492,
};

static const ax_anim *const sUnownCAnimTable4[] = {
	gAxSharedAnim_01573,
	gAxSharedAnim_01633,
	gAxSharedAnim_01684,
	gAxSharedAnim_01726,
	gAxSharedAnim_01763,
	gAxSharedAnim_01794,
	gAxSharedAnim_01821,
	gAxSharedAnim_01824,
};

static const ax_anim *const sUnownCAnimTable5[] = {
	gAxSharedAnim_01840,
	gAxSharedAnim_01855,
	gAxSharedAnim_01869,
	gAxSharedAnim_01880,
	gAxSharedAnim_01886,
	gAxSharedAnim_01895,
	gAxSharedAnim_01900,
	gAxSharedAnim_01903,
};

static const ax_anim *const sUnownCAnimTable6[] = {
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
};

static const ax_anim *const sUnownCAnimTable7[] = {
	gAxSharedAnim_01921,
	gAxSharedAnim_01924,
	gAxSharedAnim_01935,
	gAxSharedAnim_01937,
	gAxSharedAnim_01947,
	gAxSharedAnim_01957,
	gAxSharedAnim_01960,
	gAxSharedAnim_01975,
};

static const ax_anim *const sUnownCAnimTable8[] = {
	gAxSharedAnim_02320,
	gAxSharedAnim_02321,
	gAxSharedAnim_02322,
	gAxSharedAnim_02323,
	gAxSharedAnim_02324,
	gAxSharedAnim_02325,
	gAxSharedAnim_02326,
	gAxSharedAnim_02327,
};

static const ax_anim *const sUnownCAnimTable9[] = {
	gAxSharedAnim_02011,
	gAxSharedAnim_02016,
	gAxSharedAnim_02019,
	gAxSharedAnim_02025,
	gAxSharedAnim_02032,
	gAxSharedAnim_02037,
	gAxSharedAnim_02040,
	gAxSharedAnim_02051,
};

static const ax_anim *const sUnownCAnimTable10[] = {
	gAxSharedAnim_02055,
	gAxSharedAnim_02059,
	gAxSharedAnim_02066,
	gAxSharedAnim_02072,
	gAxSharedAnim_02073,
	gAxSharedAnim_02078,
	gAxSharedAnim_02082,
	gAxSharedAnim_02085,
};

static const ax_anim *const sUnownCAnimTable11[] = {
	gAxSharedAnim_02098,
	gAxSharedAnim_02104,
	gAxSharedAnim_02108,
	gAxSharedAnim_02118,
	gAxSharedAnim_02125,
	gAxSharedAnim_02131,
	gAxSharedAnim_02139,
	gAxSharedAnim_02145,
};

static const ax_anim *const sUnownCAnimTable12[] = {
	gAxSharedAnim_02158,
	gAxSharedAnim_02167,
	gAxSharedAnim_02169,
	gAxSharedAnim_02174,
	gAxSharedAnim_02196,
	gAxSharedAnim_02202,
	gAxSharedAnim_02205,
	gAxSharedAnim_02214,
};

static const ax_anim *const sUnownCAnimTable13[] = {
	gAxSharedAnim_02230,
	gAxSharedAnim_02240,
	gAxSharedAnim_02247,
	gAxSharedAnim_02259,
	gAxSharedAnim_02269,
	gAxSharedAnim_02276,
	gAxSharedAnim_02286,
	gAxSharedAnim_02291,
};

static const ax_anim *const *const sAxAnimationsUnownC[] = {
	sUnownCAnimTable1,
	sUnownCAnimTable2,
	sUnownCAnimTable3,
	sUnownCAnimTable4,
	sUnownCAnimTable5,
	sUnownCAnimTable6,
	sUnownCAnimTable7,
	sUnownCAnimTable8,
	sUnownCAnimTable9,
	sUnownCAnimTable10,
	sUnownCAnimTable11,
	sUnownCAnimTable12,
	sUnownCAnimTable13,
};

static const ax_sprite *const sAxSpritesUnownC[] = {
	sUnownCSprites1,
	sUnownCSprites2,
	sUnownCSprites3,
	sUnownCSprites4,
	sUnownCSprites5,
	sUnownCSprites6,
	sUnownCSprites7,
	sUnownCSprites8,
	sUnownCSprites9,
	sUnownCSprites10,
	sUnownCSprites11,
	sUnownCSprites12,
	sUnownCSprites13,
	sUnownCSprites14,
	sUnownCSprites15,
	sUnownCSprites16,
	sUnownCSprites17,
};

static const axmain sAxMainUnownC = {
	.poses = sAxPosesUnownC,
	.animations = sAxAnimationsUnownC,
	.animCount = ARRAY_COUNT(sAxAnimationsUnownC),
	.spriteData = sAxSpritesUnownC,
	.positions = sAxPositionsUnownC,
};
