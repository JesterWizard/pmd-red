/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainUnownN;
const SiroArchive gAxUnownN = {"SIRO", &sAxMainUnownN};

static const ax_pose sUnownNPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownNPose2[] = {
	AX_POSE(1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownNPose3[] = {
	AX_POSE(2, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownNPose4[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownNPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownNPose6[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownNPose7[] = {
	AX_POSE(6, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownNPose8[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownNPose41[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownNPose42[] = {
	AX_POSE(9, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownNPose43[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownNPose44[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownNPose45[] = {
	AX_POSE(12, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownNPose46[] = {
	AX_POSE(13, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownNPose47[] = {
	AX_POSE(14, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownNPose48[] = {
	AX_POSE(15, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownNPose49[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};

static const u8 sUnownNGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownn/sprite_1.4bpp.lz");
static const ax_sprite sUnownNSprites1[] = {
	{sUnownNGfx1, ARRAY_COUNT(sUnownNGfx1)}, 
	{NULL, 0}
};
static const u8 sUnownNGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownn/sprite_2.4bpp.lz");
static const ax_sprite sUnownNSprites2[] = {
	{sUnownNGfx2, ARRAY_COUNT(sUnownNGfx2)}, 
	{NULL, 0}
};
static const u8 sUnownNGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownn/sprite_3.4bpp.lz");
static const ax_sprite sUnownNSprites3[] = {
	{sUnownNGfx3, ARRAY_COUNT(sUnownNGfx3)}, 
	{NULL, 0}
};
static const u8 sUnownNGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownn/sprite_4.4bpp.lz");
static const ax_sprite sUnownNSprites4[] = {
	{sUnownNGfx4, ARRAY_COUNT(sUnownNGfx4)}, 
	{NULL, 0}
};
static const u8 sUnownNGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownn/sprite_5.4bpp.lz");
static const ax_sprite sUnownNSprites5[] = {
	{sUnownNGfx5, ARRAY_COUNT(sUnownNGfx5)}, 
	{NULL, 0}
};
static const u8 sUnownNGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownn/sprite_6.4bpp.lz");
static const ax_sprite sUnownNSprites6[] = {
	{sUnownNGfx6, ARRAY_COUNT(sUnownNGfx6)}, 
	{NULL, 0}
};
static const u8 sUnownNGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownn/sprite_7.4bpp.lz");
static const ax_sprite sUnownNSprites7[] = {
	{sUnownNGfx7, ARRAY_COUNT(sUnownNGfx7)}, 
	{NULL, 0}
};
static const u8 sUnownNGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownn/sprite_8.4bpp.lz");
static const ax_sprite sUnownNSprites8[] = {
	{sUnownNGfx8, ARRAY_COUNT(sUnownNGfx8)}, 
	{NULL, 0}
};
static const u8 sUnownNGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownn/sprite_9.4bpp.lz");
static const ax_sprite sUnownNSprites9[] = {
	{sUnownNGfx9, ARRAY_COUNT(sUnownNGfx9)}, 
	{NULL, 0}
};
static const u8 sUnownNGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownn/sprite_10.4bpp.lz");
static const ax_sprite sUnownNSprites10[] = {
	{sUnownNGfx10, ARRAY_COUNT(sUnownNGfx10)}, 
	{NULL, 0}
};
static const u8 sUnownNGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownn/sprite_11.4bpp.lz");
static const ax_sprite sUnownNSprites11[] = {
	{sUnownNGfx11, ARRAY_COUNT(sUnownNGfx11)}, 
	{NULL, 0}
};
static const u8 sUnownNGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownn/sprite_12.4bpp.lz");
static const ax_sprite sUnownNSprites12[] = {
	{sUnownNGfx12, ARRAY_COUNT(sUnownNGfx12)}, 
	{NULL, 0}
};
static const u8 sUnownNGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownn/sprite_13.4bpp.lz");
static const ax_sprite sUnownNSprites13[] = {
	{sUnownNGfx13, ARRAY_COUNT(sUnownNGfx13)}, 
	{NULL, 0}
};
static const u8 sUnownNGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownn/sprite_14.4bpp.lz");
static const ax_sprite sUnownNSprites14[] = {
	{sUnownNGfx14, ARRAY_COUNT(sUnownNGfx14)}, 
	{NULL, 0}
};
static const u8 sUnownNGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownn/sprite_15.4bpp.lz");
static const ax_sprite sUnownNSprites15[] = {
	{sUnownNGfx15, ARRAY_COUNT(sUnownNGfx15)}, 
	{NULL, 0}
};
static const u8 sUnownNGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownn/sprite_16.4bpp.lz");
static const ax_sprite sUnownNSprites16[] = {
	{sUnownNGfx16, ARRAY_COUNT(sUnownNGfx16)}, 
	{NULL, 0}
};
static const u8 sUnownNGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownn/sprite_17.4bpp.lz");
static const ax_sprite sUnownNSprites17[] = {
	{sUnownNGfx17, ARRAY_COUNT(sUnownNGfx17)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesUnownN[] = {
	sUnownNPose1,
	sUnownNPose2,
	sUnownNPose3,
	sUnownNPose4,
	sUnownNPose5,
	sUnownNPose6,
	sUnownNPose7,
	sUnownNPose8,
	sUnownNPose1,
	sUnownNPose2,
	sUnownNPose3,
	sUnownNPose4,
	sUnownNPose5,
	sUnownNPose6,
	sUnownNPose7,
	sUnownNPose8,
	sUnownNPose1,
	sUnownNPose2,
	sUnownNPose3,
	sUnownNPose4,
	sUnownNPose5,
	sUnownNPose6,
	sUnownNPose7,
	sUnownNPose8,
	sUnownNPose1,
	sUnownNPose2,
	sUnownNPose3,
	sUnownNPose4,
	sUnownNPose5,
	sUnownNPose6,
	sUnownNPose7,
	sUnownNPose8,
	sUnownNPose1,
	sUnownNPose2,
	sUnownNPose3,
	sUnownNPose4,
	sUnownNPose5,
	sUnownNPose6,
	sUnownNPose7,
	sUnownNPose8,
	sUnownNPose41,
	sUnownNPose42,
	sUnownNPose43,
	sUnownNPose44,
	sUnownNPose45,
	sUnownNPose46,
	sUnownNPose47,
	sUnownNPose48,
	sUnownNPose49,
	sUnownNPose1,
	sUnownNPose2,
	sUnownNPose3,
	sUnownNPose4,
	sUnownNPose5,
	sUnownNPose6,
	sUnownNPose7,
	sUnownNPose8,
	sUnownNPose1,
	sUnownNPose2,
	sUnownNPose3,
	sUnownNPose4,
	sUnownNPose5,
	sUnownNPose6,
	sUnownNPose7,
	sUnownNPose8,
	sUnownNPose1,
	sUnownNPose2,
	sUnownNPose3,
	sUnownNPose4,
	sUnownNPose5,
	sUnownNPose6,
	sUnownNPose7,
	sUnownNPose8,
	sUnownNPose1,
	sUnownNPose2,
	sUnownNPose3,
	sUnownNPose4,
	sUnownNPose5,
	sUnownNPose6,
	sUnownNPose7,
	sUnownNPose8,
	sUnownNPose1,
	sUnownNPose2,
	sUnownNPose3,
	sUnownNPose4,
	sUnownNPose5,
	sUnownNPose6,
	sUnownNPose7,
	sUnownNPose8,
	sUnownNPose1,
	sUnownNPose2,
	sUnownNPose3,
	sUnownNPose4,
	sUnownNPose5,
	sUnownNPose6,
	sUnownNPose7,
	sUnownNPose8,
};

static const struct PositionSets sAxPositionsUnownN[] = {
	[0] = { .set = { {-1, -12}, {-9, -7}, {7, -18}, {-1, -11} } },
	[1] = { .set = { {0, -12}, {-7, -6}, {5, -16}, {-1, -11} } },
	[2] = { .set = { {1, -12}, {-5, -5}, {2, -18}, {-1, -11} } },
	[3] = { .set = { {0, -13}, {5, -7}, {-7, -17}, {0, -11} } },
	[4] = { .set = { {-2, -13}, {6, -8}, {-10, -17}, {-2, -12} } },
	[5] = { .set = { {-2, -13}, {5, -9}, {-7, -17}, {-1, -11} } },
	[6] = { .set = { {-3, -12}, {-3, -9}, {3, -15}, {-1, -11} } },
	[7] = { .set = { {-2, -12}, {-7, -9}, {5, -16}, {-1, -11} } },
	[8] = { .set = { {-1, -12}, {-9, -7}, {7, -18}, {-1, -11} } },
	[9] = { .set = { {0, -12}, {-7, -6}, {5, -16}, {-1, -11} } },
	[10] = { .set = { {1, -12}, {-5, -5}, {2, -18}, {-1, -11} } },
	[11] = { .set = { {0, -13}, {5, -7}, {-7, -17}, {0, -11} } },
	[12] = { .set = { {-2, -13}, {6, -8}, {-10, -17}, {-2, -12} } },
	[13] = { .set = { {-2, -13}, {5, -9}, {-7, -17}, {-1, -11} } },
	[14] = { .set = { {-3, -12}, {-3, -9}, {3, -15}, {-1, -11} } },
	[15] = { .set = { {-2, -12}, {-7, -9}, {5, -16}, {-1, -11} } },
	[16] = { .set = { {-1, -12}, {-9, -7}, {7, -18}, {-1, -11} } },
	[17] = { .set = { {0, -12}, {-7, -6}, {5, -16}, {-1, -11} } },
	[18] = { .set = { {1, -12}, {-5, -5}, {2, -18}, {-1, -11} } },
	[19] = { .set = { {0, -13}, {5, -7}, {-7, -17}, {0, -11} } },
	[20] = { .set = { {-2, -13}, {6, -8}, {-10, -17}, {-2, -12} } },
	[21] = { .set = { {-2, -13}, {5, -9}, {-7, -17}, {-1, -11} } },
	[22] = { .set = { {-3, -12}, {-3, -9}, {3, -15}, {-1, -11} } },
	[23] = { .set = { {-2, -12}, {-7, -9}, {5, -16}, {-1, -11} } },
	[24] = { .set = { {-1, -12}, {-9, -7}, {7, -18}, {-1, -11} } },
	[25] = { .set = { {0, -12}, {-7, -6}, {5, -16}, {-1, -11} } },
	[26] = { .set = { {1, -12}, {-5, -5}, {2, -18}, {-1, -11} } },
	[27] = { .set = { {0, -13}, {5, -7}, {-7, -17}, {0, -11} } },
	[28] = { .set = { {-2, -13}, {6, -8}, {-10, -17}, {-2, -12} } },
	[29] = { .set = { {-2, -13}, {5, -9}, {-7, -17}, {-1, -11} } },
	[30] = { .set = { {-3, -12}, {-3, -9}, {3, -15}, {-1, -11} } },
	[31] = { .set = { {-2, -12}, {-7, -9}, {5, -16}, {-1, -11} } },
	[32] = { .set = { {-1, -12}, {-9, -7}, {7, -18}, {-1, -11} } },
	[33] = { .set = { {0, -12}, {-7, -6}, {5, -16}, {-1, -11} } },
	[34] = { .set = { {1, -12}, {-5, -5}, {2, -18}, {-1, -11} } },
	[35] = { .set = { {0, -13}, {5, -7}, {-7, -17}, {0, -11} } },
	[36] = { .set = { {-2, -13}, {6, -8}, {-10, -17}, {-2, -12} } },
	[37] = { .set = { {-2, -13}, {5, -9}, {-7, -17}, {-1, -11} } },
	[38] = { .set = { {-3, -12}, {-3, -9}, {3, -15}, {-1, -11} } },
	[39] = { .set = { {-2, -12}, {-7, -9}, {5, -16}, {-1, -11} } },
	[40] = { .set = { {-1, -12}, {-9, -7}, {7, -18}, {-1, -11} } },
	[41] = { .set = { {-1, -12}, {-9, -7}, {7, -18}, {-1, -11} } },
	[42] = { .set = { {0, -13}, {-6, -6}, {3, -17}, {-1, -11} } },
	[43] = { .set = { {1, -13}, {-4, -5}, {1, -17}, {-1, -11} } },
	[44] = { .set = { {0, -14}, {6, -6}, {-8, -17}, {-1, -11} } },
	[45] = { .set = { {-2, -13}, {6, -9}, {-10, -17}, {-2, -11} } },
	[46] = { .set = { {-2, -14}, {4, -9}, {-6, -16}, {0, -12} } },
	[47] = { .set = { {-3, -13}, {-5, -9}, {4, -15}, {0, -11} } },
	[48] = { .set = { {-2, -13}, {-8, -9}, {6, -17}, {0, -12} } },
	[49] = { .set = { {-1, -12}, {-9, -7}, {7, -18}, {-1, -11} } },
	[50] = { .set = { {0, -12}, {-7, -6}, {5, -16}, {-1, -11} } },
	[51] = { .set = { {1, -12}, {-5, -5}, {2, -18}, {-1, -11} } },
	[52] = { .set = { {0, -13}, {5, -7}, {-7, -17}, {0, -11} } },
	[53] = { .set = { {-2, -13}, {6, -8}, {-10, -17}, {-2, -12} } },
	[54] = { .set = { {-2, -13}, {5, -9}, {-7, -17}, {-1, -11} } },
	[55] = { .set = { {-3, -12}, {-3, -9}, {3, -15}, {-1, -11} } },
	[56] = { .set = { {-2, -12}, {-7, -9}, {5, -16}, {-1, -11} } },
	[57] = { .set = { {-1, -12}, {-9, -7}, {7, -18}, {-1, -11} } },
	[58] = { .set = { {0, -12}, {-7, -6}, {5, -16}, {-1, -11} } },
	[59] = { .set = { {1, -12}, {-5, -5}, {2, -18}, {-1, -11} } },
	[60] = { .set = { {0, -13}, {5, -7}, {-7, -17}, {0, -11} } },
	[61] = { .set = { {-2, -13}, {6, -8}, {-10, -17}, {-2, -12} } },
	[62] = { .set = { {-2, -13}, {5, -9}, {-7, -17}, {-1, -11} } },
	[63] = { .set = { {-3, -12}, {-3, -9}, {3, -15}, {-1, -11} } },
	[64] = { .set = { {-2, -12}, {-7, -9}, {5, -16}, {-1, -11} } },
	[65] = { .set = { {-1, -12}, {-9, -7}, {7, -18}, {-1, -11} } },
	[66] = { .set = { {0, -12}, {-7, -6}, {5, -16}, {-1, -11} } },
	[67] = { .set = { {1, -12}, {-5, -5}, {2, -18}, {-1, -11} } },
	[68] = { .set = { {0, -13}, {5, -7}, {-7, -17}, {0, -11} } },
	[69] = { .set = { {-2, -13}, {6, -8}, {-10, -17}, {-2, -12} } },
	[70] = { .set = { {-2, -13}, {5, -9}, {-7, -17}, {-1, -11} } },
	[71] = { .set = { {-3, -12}, {-3, -9}, {3, -15}, {-1, -11} } },
	[72] = { .set = { {-2, -12}, {-7, -9}, {5, -16}, {-1, -11} } },
	[73] = { .set = { {-1, -12}, {-9, -7}, {7, -18}, {-1, -11} } },
	[74] = { .set = { {0, -12}, {-7, -6}, {5, -16}, {-1, -11} } },
	[75] = { .set = { {1, -12}, {-5, -5}, {2, -18}, {-1, -11} } },
	[76] = { .set = { {0, -13}, {5, -7}, {-7, -17}, {0, -11} } },
	[77] = { .set = { {-2, -13}, {6, -8}, {-10, -17}, {-2, -12} } },
	[78] = { .set = { {-2, -13}, {5, -9}, {-7, -17}, {-1, -11} } },
	[79] = { .set = { {-3, -12}, {-3, -9}, {3, -15}, {-1, -11} } },
	[80] = { .set = { {-2, -12}, {-7, -9}, {5, -16}, {-1, -11} } },
	[81] = { .set = { {-1, -12}, {-9, -7}, {7, -18}, {-1, -11} } },
	[82] = { .set = { {0, -12}, {-7, -6}, {5, -16}, {-1, -11} } },
	[83] = { .set = { {1, -12}, {-5, -5}, {2, -18}, {-1, -11} } },
	[84] = { .set = { {0, -13}, {5, -7}, {-7, -17}, {0, -11} } },
	[85] = { .set = { {-2, -13}, {6, -8}, {-10, -17}, {-2, -12} } },
	[86] = { .set = { {-2, -13}, {5, -9}, {-7, -17}, {-1, -11} } },
	[87] = { .set = { {-3, -12}, {-3, -9}, {3, -15}, {-1, -11} } },
	[88] = { .set = { {-2, -12}, {-7, -9}, {5, -16}, {-1, -11} } },
	[89] = { .set = { {-1, -12}, {-9, -7}, {7, -18}, {-1, -11} } },
	[90] = { .set = { {0, -12}, {-7, -6}, {5, -16}, {-1, -11} } },
	[91] = { .set = { {1, -12}, {-5, -5}, {2, -18}, {-1, -11} } },
	[92] = { .set = { {0, -13}, {5, -7}, {-7, -17}, {0, -11} } },
	[93] = { .set = { {-2, -13}, {6, -8}, {-10, -17}, {-2, -12} } },
	[94] = { .set = { {-2, -13}, {5, -9}, {-7, -17}, {-1, -11} } },
	[95] = { .set = { {-3, -12}, {-3, -9}, {3, -15}, {-1, -11} } },
	[96] = { .set = { {-2, -12}, {-7, -9}, {5, -16}, {-1, -11} } },
};

static const ax_anim *const sUnownNAnimTable1[] = {
	gAxSharedAnim_02475,
	gAxSharedAnim_02478,
	gAxSharedAnim_02528,
	gAxSharedAnim_02540,
	gAxSharedAnim_02543,
	gAxSharedAnim_02544,
	gAxSharedAnim_02549,
	gAxSharedAnim_02552,
};

static const ax_anim *const sUnownNAnimTable2[] = {
	gAxSharedAnim_02144,
	gAxSharedAnim_02232,
	gAxSharedAnim_00150,
	gAxSharedAnim_00226,
	gAxSharedAnim_00317,
	gAxSharedAnim_00394,
	gAxSharedAnim_00486,
	gAxSharedAnim_00569,
};

static const ax_anim *const sUnownNAnimTable3[] = {
	gAxSharedAnim_00666,
	gAxSharedAnim_00787,
	gAxSharedAnim_00922,
	gAxSharedAnim_01066,
	gAxSharedAnim_01207,
	gAxSharedAnim_01330,
	gAxSharedAnim_01431,
	gAxSharedAnim_01492,
};

static const ax_anim *const sUnownNAnimTable4[] = {
	gAxSharedAnim_01573,
	gAxSharedAnim_01633,
	gAxSharedAnim_01684,
	gAxSharedAnim_01726,
	gAxSharedAnim_01763,
	gAxSharedAnim_01794,
	gAxSharedAnim_01821,
	gAxSharedAnim_01824,
};

static const ax_anim *const sUnownNAnimTable5[] = {
	gAxSharedAnim_01840,
	gAxSharedAnim_01855,
	gAxSharedAnim_01869,
	gAxSharedAnim_01880,
	gAxSharedAnim_01886,
	gAxSharedAnim_01895,
	gAxSharedAnim_01900,
	gAxSharedAnim_01903,
};

static const ax_anim *const sUnownNAnimTable6[] = {
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
};

static const ax_anim *const sUnownNAnimTable7[] = {
	gAxSharedAnim_01921,
	gAxSharedAnim_01924,
	gAxSharedAnim_01935,
	gAxSharedAnim_01937,
	gAxSharedAnim_01947,
	gAxSharedAnim_01957,
	gAxSharedAnim_01960,
	gAxSharedAnim_01975,
};

static const ax_anim *const sUnownNAnimTable8[] = {
	gAxSharedAnim_02320,
	gAxSharedAnim_02321,
	gAxSharedAnim_02322,
	gAxSharedAnim_02323,
	gAxSharedAnim_02324,
	gAxSharedAnim_02325,
	gAxSharedAnim_02326,
	gAxSharedAnim_02327,
};

static const ax_anim *const sUnownNAnimTable9[] = {
	gAxSharedAnim_02011,
	gAxSharedAnim_02016,
	gAxSharedAnim_02019,
	gAxSharedAnim_02025,
	gAxSharedAnim_02032,
	gAxSharedAnim_02037,
	gAxSharedAnim_02040,
	gAxSharedAnim_02051,
};

static const ax_anim *const sUnownNAnimTable10[] = {
	gAxSharedAnim_02055,
	gAxSharedAnim_02059,
	gAxSharedAnim_02066,
	gAxSharedAnim_02072,
	gAxSharedAnim_02073,
	gAxSharedAnim_02078,
	gAxSharedAnim_02082,
	gAxSharedAnim_02085,
};

static const ax_anim *const sUnownNAnimTable11[] = {
	gAxSharedAnim_02098,
	gAxSharedAnim_02104,
	gAxSharedAnim_02108,
	gAxSharedAnim_02118,
	gAxSharedAnim_02125,
	gAxSharedAnim_02131,
	gAxSharedAnim_02139,
	gAxSharedAnim_02145,
};

static const ax_anim *const sUnownNAnimTable12[] = {
	gAxSharedAnim_02158,
	gAxSharedAnim_02167,
	gAxSharedAnim_02169,
	gAxSharedAnim_02174,
	gAxSharedAnim_02196,
	gAxSharedAnim_02202,
	gAxSharedAnim_02205,
	gAxSharedAnim_02214,
};

static const ax_anim *const sUnownNAnimTable13[] = {
	gAxSharedAnim_02230,
	gAxSharedAnim_02240,
	gAxSharedAnim_02247,
	gAxSharedAnim_02259,
	gAxSharedAnim_02269,
	gAxSharedAnim_02276,
	gAxSharedAnim_02286,
	gAxSharedAnim_02291,
};

static const ax_anim *const *const sAxAnimationsUnownN[] = {
	sUnownNAnimTable1,
	sUnownNAnimTable2,
	sUnownNAnimTable3,
	sUnownNAnimTable4,
	sUnownNAnimTable5,
	sUnownNAnimTable6,
	sUnownNAnimTable7,
	sUnownNAnimTable8,
	sUnownNAnimTable9,
	sUnownNAnimTable10,
	sUnownNAnimTable11,
	sUnownNAnimTable12,
	sUnownNAnimTable13,
};

static const ax_sprite *const sAxSpritesUnownN[] = {
	sUnownNSprites1,
	sUnownNSprites2,
	sUnownNSprites3,
	sUnownNSprites4,
	sUnownNSprites5,
	sUnownNSprites6,
	sUnownNSprites7,
	sUnownNSprites8,
	sUnownNSprites9,
	sUnownNSprites10,
	sUnownNSprites11,
	sUnownNSprites12,
	sUnownNSprites13,
	sUnownNSprites14,
	sUnownNSprites15,
	sUnownNSprites16,
	sUnownNSprites17,
};

static const axmain sAxMainUnownN = {
	.poses = sAxPosesUnownN,
	.animations = sAxAnimationsUnownN,
	.animCount = ARRAY_COUNT(sAxAnimationsUnownN),
	.spriteData = sAxSpritesUnownN,
	.positions = sAxPositionsUnownN,
};
