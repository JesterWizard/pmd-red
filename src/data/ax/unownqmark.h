/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainUnownQmark;
const SiroArchive gAxUnownQmark = {"SIRO", &sAxMainUnownQmark};

static const ax_pose sUnownQmarkPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQmarkPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQmarkPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQmarkPose4[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQmarkPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQmarkPose6[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQmarkPose7[] = {
	AX_POSE(6, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQmarkPose8[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQmarkPose41[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQmarkPose42[] = {
	AX_POSE(9, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQmarkPose43[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQmarkPose44[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQmarkPose45[] = {
	AX_POSE(12, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQmarkPose46[] = {
	AX_POSE(13, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQmarkPose47[] = {
	AX_POSE(14, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQmarkPose48[] = {
	AX_POSE(15, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQmarkPose49[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};

static const u8 sUnownQmarkGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownqmark/sprite_1.4bpp.lz");
static const ax_sprite sUnownQmarkSprites1[] = {
	{sUnownQmarkGfx1, ARRAY_COUNT(sUnownQmarkGfx1)}, 
	{NULL, 0}
};
static const u8 sUnownQmarkGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownqmark/sprite_2.4bpp.lz");
static const ax_sprite sUnownQmarkSprites2[] = {
	{sUnownQmarkGfx2, ARRAY_COUNT(sUnownQmarkGfx2)}, 
	{NULL, 0}
};
static const u8 sUnownQmarkGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownqmark/sprite_3.4bpp.lz");
static const ax_sprite sUnownQmarkSprites3[] = {
	{sUnownQmarkGfx3, ARRAY_COUNT(sUnownQmarkGfx3)}, 
	{NULL, 0}
};
static const u8 sUnownQmarkGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownqmark/sprite_4.4bpp.lz");
static const ax_sprite sUnownQmarkSprites4[] = {
	{sUnownQmarkGfx4, ARRAY_COUNT(sUnownQmarkGfx4)}, 
	{NULL, 0}
};
static const u8 sUnownQmarkGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownqmark/sprite_5.4bpp.lz");
static const ax_sprite sUnownQmarkSprites5[] = {
	{sUnownQmarkGfx5, ARRAY_COUNT(sUnownQmarkGfx5)}, 
	{NULL, 0}
};
static const u8 sUnownQmarkGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownqmark/sprite_6.4bpp.lz");
static const ax_sprite sUnownQmarkSprites6[] = {
	{sUnownQmarkGfx6, ARRAY_COUNT(sUnownQmarkGfx6)}, 
	{NULL, 0}
};
static const u8 sUnownQmarkGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownqmark/sprite_7.4bpp.lz");
static const ax_sprite sUnownQmarkSprites7[] = {
	{sUnownQmarkGfx7, ARRAY_COUNT(sUnownQmarkGfx7)}, 
	{NULL, 0}
};
static const u8 sUnownQmarkGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownqmark/sprite_8.4bpp.lz");
static const ax_sprite sUnownQmarkSprites8[] = {
	{sUnownQmarkGfx8, ARRAY_COUNT(sUnownQmarkGfx8)}, 
	{NULL, 0}
};
static const u8 sUnownQmarkGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownqmark/sprite_9.4bpp.lz");
static const ax_sprite sUnownQmarkSprites9[] = {
	{sUnownQmarkGfx9, ARRAY_COUNT(sUnownQmarkGfx9)}, 
	{NULL, 0}
};
static const u8 sUnownQmarkGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownqmark/sprite_10.4bpp.lz");
static const ax_sprite sUnownQmarkSprites10[] = {
	{sUnownQmarkGfx10, ARRAY_COUNT(sUnownQmarkGfx10)}, 
	{NULL, 0}
};
static const u8 sUnownQmarkGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownqmark/sprite_11.4bpp.lz");
static const ax_sprite sUnownQmarkSprites11[] = {
	{sUnownQmarkGfx11, ARRAY_COUNT(sUnownQmarkGfx11)}, 
	{NULL, 0}
};
static const u8 sUnownQmarkGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownqmark/sprite_12.4bpp.lz");
static const ax_sprite sUnownQmarkSprites12[] = {
	{sUnownQmarkGfx12, ARRAY_COUNT(sUnownQmarkGfx12)}, 
	{NULL, 0}
};
static const u8 sUnownQmarkGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownqmark/sprite_13.4bpp.lz");
static const ax_sprite sUnownQmarkSprites13[] = {
	{sUnownQmarkGfx13, ARRAY_COUNT(sUnownQmarkGfx13)}, 
	{NULL, 0}
};
static const u8 sUnownQmarkGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownqmark/sprite_14.4bpp.lz");
static const ax_sprite sUnownQmarkSprites14[] = {
	{sUnownQmarkGfx14, ARRAY_COUNT(sUnownQmarkGfx14)}, 
	{NULL, 0}
};
static const u8 sUnownQmarkGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownqmark/sprite_15.4bpp.lz");
static const ax_sprite sUnownQmarkSprites15[] = {
	{sUnownQmarkGfx15, ARRAY_COUNT(sUnownQmarkGfx15)}, 
	{NULL, 0}
};
static const u8 sUnownQmarkGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownqmark/sprite_16.4bpp.lz");
static const ax_sprite sUnownQmarkSprites16[] = {
	{sUnownQmarkGfx16, ARRAY_COUNT(sUnownQmarkGfx16)}, 
	{NULL, 0}
};
static const u8 sUnownQmarkGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownqmark/sprite_17.4bpp.lz");
static const ax_sprite sUnownQmarkSprites17[] = {
	{sUnownQmarkGfx17, ARRAY_COUNT(sUnownQmarkGfx17)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesUnownQmark[] = {
	sUnownQmarkPose1,
	sUnownQmarkPose2,
	sUnownQmarkPose3,
	sUnownQmarkPose4,
	sUnownQmarkPose5,
	sUnownQmarkPose6,
	sUnownQmarkPose7,
	sUnownQmarkPose8,
	sUnownQmarkPose1,
	sUnownQmarkPose2,
	sUnownQmarkPose3,
	sUnownQmarkPose4,
	sUnownQmarkPose5,
	sUnownQmarkPose6,
	sUnownQmarkPose7,
	sUnownQmarkPose8,
	sUnownQmarkPose1,
	sUnownQmarkPose2,
	sUnownQmarkPose3,
	sUnownQmarkPose4,
	sUnownQmarkPose5,
	sUnownQmarkPose6,
	sUnownQmarkPose7,
	sUnownQmarkPose8,
	sUnownQmarkPose1,
	sUnownQmarkPose2,
	sUnownQmarkPose3,
	sUnownQmarkPose4,
	sUnownQmarkPose5,
	sUnownQmarkPose6,
	sUnownQmarkPose7,
	sUnownQmarkPose8,
	sUnownQmarkPose1,
	sUnownQmarkPose2,
	sUnownQmarkPose3,
	sUnownQmarkPose4,
	sUnownQmarkPose5,
	sUnownQmarkPose6,
	sUnownQmarkPose7,
	sUnownQmarkPose8,
	sUnownQmarkPose41,
	sUnownQmarkPose42,
	sUnownQmarkPose43,
	sUnownQmarkPose44,
	sUnownQmarkPose45,
	sUnownQmarkPose46,
	sUnownQmarkPose47,
	sUnownQmarkPose48,
	sUnownQmarkPose49,
	sUnownQmarkPose1,
	sUnownQmarkPose2,
	sUnownQmarkPose3,
	sUnownQmarkPose4,
	sUnownQmarkPose5,
	sUnownQmarkPose6,
	sUnownQmarkPose7,
	sUnownQmarkPose8,
	sUnownQmarkPose1,
	sUnownQmarkPose2,
	sUnownQmarkPose3,
	sUnownQmarkPose4,
	sUnownQmarkPose5,
	sUnownQmarkPose6,
	sUnownQmarkPose7,
	sUnownQmarkPose8,
	sUnownQmarkPose1,
	sUnownQmarkPose2,
	sUnownQmarkPose3,
	sUnownQmarkPose4,
	sUnownQmarkPose5,
	sUnownQmarkPose6,
	sUnownQmarkPose7,
	sUnownQmarkPose8,
	sUnownQmarkPose1,
	sUnownQmarkPose2,
	sUnownQmarkPose3,
	sUnownQmarkPose4,
	sUnownQmarkPose5,
	sUnownQmarkPose6,
	sUnownQmarkPose7,
	sUnownQmarkPose8,
	sUnownQmarkPose1,
	sUnownQmarkPose2,
	sUnownQmarkPose3,
	sUnownQmarkPose4,
	sUnownQmarkPose5,
	sUnownQmarkPose6,
	sUnownQmarkPose7,
	sUnownQmarkPose8,
	sUnownQmarkPose1,
	sUnownQmarkPose2,
	sUnownQmarkPose3,
	sUnownQmarkPose4,
	sUnownQmarkPose5,
	sUnownQmarkPose6,
	sUnownQmarkPose7,
	sUnownQmarkPose8,
};

static const struct PositionSets sAxPositionsUnownQmark[] = {
	[0] = { .set = { {-1, -8}, {-4, -8}, {2, -8}, {-1, -9} } },
	[1] = { .set = { {0, -8}, {-3, -8}, {2, -9}, {-1, -12} } },
	[2] = { .set = { {1, -8}, {-3, -7}, {1, -9}, {-1, -11} } },
	[3] = { .set = { {1, -8}, {1, -9}, {-3, -8}, {-1, -12} } },
	[4] = { .set = { {-1, -8}, {2, -8}, {-4, -8}, {-1, -11} } },
	[5] = { .set = { {-1, -9}, {1, -8}, {-3, -6}, {-1, -11} } },
	[6] = { .set = { {-3, -8}, {-1, -8}, {1, -7}, {-1, -11} } },
	[7] = { .set = { {-2, -8}, {-3, -9}, {1, -7}, {-1, -11} } },
	[8] = { .set = { {-1, -8}, {-4, -8}, {2, -8}, {-1, -9} } },
	[9] = { .set = { {0, -8}, {-3, -8}, {2, -9}, {-1, -12} } },
	[10] = { .set = { {1, -8}, {-3, -7}, {1, -9}, {-1, -11} } },
	[11] = { .set = { {1, -8}, {1, -9}, {-3, -8}, {-1, -12} } },
	[12] = { .set = { {-1, -8}, {2, -8}, {-4, -8}, {-1, -11} } },
	[13] = { .set = { {-1, -9}, {1, -8}, {-3, -6}, {-1, -11} } },
	[14] = { .set = { {-3, -8}, {-1, -8}, {1, -7}, {-1, -11} } },
	[15] = { .set = { {-2, -8}, {-3, -9}, {1, -7}, {-1, -11} } },
	[16] = { .set = { {-1, -8}, {-4, -8}, {2, -8}, {-1, -9} } },
	[17] = { .set = { {0, -8}, {-3, -8}, {2, -9}, {-1, -12} } },
	[18] = { .set = { {1, -8}, {-3, -7}, {1, -9}, {-1, -11} } },
	[19] = { .set = { {1, -8}, {1, -9}, {-3, -8}, {-1, -12} } },
	[20] = { .set = { {-1, -8}, {2, -8}, {-4, -8}, {-1, -11} } },
	[21] = { .set = { {-1, -9}, {1, -8}, {-3, -6}, {-1, -11} } },
	[22] = { .set = { {-3, -8}, {-1, -8}, {1, -7}, {-1, -11} } },
	[23] = { .set = { {-2, -8}, {-3, -9}, {1, -7}, {-1, -11} } },
	[24] = { .set = { {-1, -8}, {-4, -8}, {2, -8}, {-1, -9} } },
	[25] = { .set = { {0, -8}, {-3, -8}, {2, -9}, {-1, -12} } },
	[26] = { .set = { {1, -8}, {-3, -7}, {1, -9}, {-1, -11} } },
	[27] = { .set = { {1, -8}, {1, -9}, {-3, -8}, {-1, -12} } },
	[28] = { .set = { {-1, -8}, {2, -8}, {-4, -8}, {-1, -11} } },
	[29] = { .set = { {-1, -9}, {1, -8}, {-3, -6}, {-1, -11} } },
	[30] = { .set = { {-3, -8}, {-1, -8}, {1, -7}, {-1, -11} } },
	[31] = { .set = { {-2, -8}, {-3, -9}, {1, -7}, {-1, -11} } },
	[32] = { .set = { {-1, -8}, {-4, -8}, {2, -8}, {-1, -9} } },
	[33] = { .set = { {0, -8}, {-3, -8}, {2, -9}, {-1, -12} } },
	[34] = { .set = { {1, -8}, {-3, -7}, {1, -9}, {-1, -11} } },
	[35] = { .set = { {1, -8}, {1, -9}, {-3, -8}, {-1, -12} } },
	[36] = { .set = { {-1, -8}, {2, -8}, {-4, -8}, {-1, -11} } },
	[37] = { .set = { {-1, -9}, {1, -8}, {-3, -6}, {-1, -11} } },
	[38] = { .set = { {-3, -8}, {-1, -8}, {1, -7}, {-1, -11} } },
	[39] = { .set = { {-2, -8}, {-3, -9}, {1, -7}, {-1, -11} } },
	[40] = { .set = { {-1, -7}, {-4, -8}, {2, -8}, {-1, -8} } },
	[41] = { .set = { {-1, -8}, {-4, -8}, {2, -8}, {-1, -9} } },
	[42] = { .set = { {0, -9}, {-3, -8}, {1, -10}, {-2, -12} } },
	[43] = { .set = { {1, -9}, {-2, -7}, {1, -8}, {-1, -12} } },
	[44] = { .set = { {1, -8}, {1, -9}, {-3, -8}, {-1, -12} } },
	[45] = { .set = { {-1, -7}, {2, -8}, {-4, -8}, {-1, -11} } },
	[46] = { .set = { {-2, -9}, {1, -8}, {-3, -6}, {-1, -11} } },
	[47] = { .set = { {-3, -9}, {-1, -8}, {1, -7}, {0, -11} } },
	[48] = { .set = { {-2, -9}, {-3, -10}, {1, -8}, {-1, -12} } },
	[49] = { .set = { {-1, -8}, {-4, -8}, {2, -8}, {-1, -9} } },
	[50] = { .set = { {0, -8}, {-3, -8}, {2, -9}, {-1, -12} } },
	[51] = { .set = { {1, -8}, {-3, -7}, {1, -9}, {-1, -11} } },
	[52] = { .set = { {1, -8}, {1, -9}, {-3, -8}, {-1, -12} } },
	[53] = { .set = { {-1, -8}, {2, -8}, {-4, -8}, {-1, -11} } },
	[54] = { .set = { {-1, -9}, {1, -8}, {-3, -6}, {-1, -11} } },
	[55] = { .set = { {-3, -8}, {-1, -8}, {1, -7}, {-1, -11} } },
	[56] = { .set = { {-2, -8}, {-3, -9}, {1, -7}, {-1, -11} } },
	[57] = { .set = { {-1, -8}, {-4, -8}, {2, -8}, {-1, -9} } },
	[58] = { .set = { {0, -8}, {-3, -8}, {2, -9}, {-1, -12} } },
	[59] = { .set = { {1, -8}, {-3, -7}, {1, -9}, {-1, -11} } },
	[60] = { .set = { {1, -8}, {1, -9}, {-3, -8}, {-1, -12} } },
	[61] = { .set = { {-1, -8}, {2, -8}, {-4, -8}, {-1, -11} } },
	[62] = { .set = { {-1, -9}, {1, -8}, {-3, -6}, {-1, -11} } },
	[63] = { .set = { {-3, -8}, {-1, -8}, {1, -7}, {-1, -11} } },
	[64] = { .set = { {-2, -8}, {-3, -9}, {1, -7}, {-1, -11} } },
	[65] = { .set = { {-1, -8}, {-4, -8}, {2, -8}, {-1, -9} } },
	[66] = { .set = { {0, -8}, {-3, -8}, {2, -9}, {-1, -12} } },
	[67] = { .set = { {1, -8}, {-3, -7}, {1, -9}, {-1, -11} } },
	[68] = { .set = { {1, -8}, {1, -9}, {-3, -8}, {-1, -12} } },
	[69] = { .set = { {-1, -8}, {2, -8}, {-4, -8}, {-1, -11} } },
	[70] = { .set = { {-1, -9}, {1, -8}, {-3, -6}, {-1, -11} } },
	[71] = { .set = { {-3, -8}, {-1, -8}, {1, -7}, {-1, -11} } },
	[72] = { .set = { {-2, -8}, {-3, -9}, {1, -7}, {-1, -11} } },
	[73] = { .set = { {-1, -8}, {-4, -8}, {2, -8}, {-1, -9} } },
	[74] = { .set = { {0, -8}, {-3, -8}, {2, -9}, {-1, -12} } },
	[75] = { .set = { {1, -8}, {-3, -7}, {1, -9}, {-1, -11} } },
	[76] = { .set = { {1, -8}, {1, -9}, {-3, -8}, {-1, -12} } },
	[77] = { .set = { {-1, -8}, {2, -8}, {-4, -8}, {-1, -11} } },
	[78] = { .set = { {-1, -9}, {1, -8}, {-3, -6}, {-1, -11} } },
	[79] = { .set = { {-3, -8}, {-1, -8}, {1, -7}, {-1, -11} } },
	[80] = { .set = { {-2, -8}, {-3, -9}, {1, -7}, {-1, -11} } },
	[81] = { .set = { {-1, -8}, {-4, -8}, {2, -8}, {-1, -9} } },
	[82] = { .set = { {0, -8}, {-3, -8}, {2, -9}, {-1, -12} } },
	[83] = { .set = { {1, -8}, {-3, -7}, {1, -9}, {-1, -11} } },
	[84] = { .set = { {1, -8}, {1, -9}, {-3, -8}, {-1, -12} } },
	[85] = { .set = { {-1, -8}, {2, -8}, {-4, -8}, {-1, -11} } },
	[86] = { .set = { {-1, -9}, {1, -8}, {-3, -6}, {-1, -11} } },
	[87] = { .set = { {-3, -8}, {-1, -8}, {1, -7}, {-1, -11} } },
	[88] = { .set = { {-2, -8}, {-3, -9}, {1, -7}, {-1, -11} } },
	[89] = { .set = { {-1, -8}, {-4, -8}, {2, -8}, {-1, -9} } },
	[90] = { .set = { {0, -8}, {-3, -8}, {2, -9}, {-1, -12} } },
	[91] = { .set = { {1, -8}, {-3, -7}, {1, -9}, {-1, -11} } },
	[92] = { .set = { {1, -8}, {1, -9}, {-3, -8}, {-1, -12} } },
	[93] = { .set = { {-1, -8}, {2, -8}, {-4, -8}, {-1, -11} } },
	[94] = { .set = { {-1, -9}, {1, -8}, {-3, -6}, {-1, -11} } },
	[95] = { .set = { {-3, -8}, {-1, -8}, {1, -7}, {-1, -11} } },
	[96] = { .set = { {-2, -8}, {-3, -9}, {1, -7}, {-1, -11} } },
};

static const ax_anim *const sUnownQmarkAnimTable1[] = {
	gAxSharedAnim_02475,
	gAxSharedAnim_02478,
	gAxSharedAnim_02528,
	gAxSharedAnim_02540,
	gAxSharedAnim_02543,
	gAxSharedAnim_02544,
	gAxSharedAnim_02549,
	gAxSharedAnim_02552,
};

static const ax_anim *const sUnownQmarkAnimTable2[] = {
	gAxSharedAnim_02144,
	gAxSharedAnim_02232,
	gAxSharedAnim_00150,
	gAxSharedAnim_00226,
	gAxSharedAnim_00317,
	gAxSharedAnim_00394,
	gAxSharedAnim_00486,
	gAxSharedAnim_00569,
};

static const ax_anim *const sUnownQmarkAnimTable3[] = {
	gAxSharedAnim_00666,
	gAxSharedAnim_00787,
	gAxSharedAnim_00922,
	gAxSharedAnim_01066,
	gAxSharedAnim_01207,
	gAxSharedAnim_01330,
	gAxSharedAnim_01431,
	gAxSharedAnim_01492,
};

static const ax_anim *const sUnownQmarkAnimTable4[] = {
	gAxSharedAnim_01573,
	gAxSharedAnim_01633,
	gAxSharedAnim_01684,
	gAxSharedAnim_01726,
	gAxSharedAnim_01763,
	gAxSharedAnim_01794,
	gAxSharedAnim_01821,
	gAxSharedAnim_01824,
};

static const ax_anim *const sUnownQmarkAnimTable5[] = {
	gAxSharedAnim_01840,
	gAxSharedAnim_01855,
	gAxSharedAnim_01869,
	gAxSharedAnim_01880,
	gAxSharedAnim_01886,
	gAxSharedAnim_01895,
	gAxSharedAnim_01900,
	gAxSharedAnim_01903,
};

static const ax_anim *const sUnownQmarkAnimTable6[] = {
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
};

static const ax_anim *const sUnownQmarkAnimTable7[] = {
	gAxSharedAnim_01921,
	gAxSharedAnim_01924,
	gAxSharedAnim_01935,
	gAxSharedAnim_01937,
	gAxSharedAnim_01947,
	gAxSharedAnim_01957,
	gAxSharedAnim_01960,
	gAxSharedAnim_01975,
};

static const ax_anim *const sUnownQmarkAnimTable8[] = {
	gAxSharedAnim_02320,
	gAxSharedAnim_02321,
	gAxSharedAnim_02322,
	gAxSharedAnim_02323,
	gAxSharedAnim_02324,
	gAxSharedAnim_02325,
	gAxSharedAnim_02326,
	gAxSharedAnim_02327,
};

static const ax_anim *const sUnownQmarkAnimTable9[] = {
	gAxSharedAnim_02011,
	gAxSharedAnim_02016,
	gAxSharedAnim_02019,
	gAxSharedAnim_02025,
	gAxSharedAnim_02032,
	gAxSharedAnim_02037,
	gAxSharedAnim_02040,
	gAxSharedAnim_02051,
};

static const ax_anim *const sUnownQmarkAnimTable10[] = {
	gAxSharedAnim_02055,
	gAxSharedAnim_02059,
	gAxSharedAnim_02066,
	gAxSharedAnim_02072,
	gAxSharedAnim_02073,
	gAxSharedAnim_02078,
	gAxSharedAnim_02082,
	gAxSharedAnim_02085,
};

static const ax_anim *const sUnownQmarkAnimTable11[] = {
	gAxSharedAnim_02098,
	gAxSharedAnim_02104,
	gAxSharedAnim_02108,
	gAxSharedAnim_02118,
	gAxSharedAnim_02125,
	gAxSharedAnim_02131,
	gAxSharedAnim_02139,
	gAxSharedAnim_02145,
};

static const ax_anim *const sUnownQmarkAnimTable12[] = {
	gAxSharedAnim_02158,
	gAxSharedAnim_02167,
	gAxSharedAnim_02169,
	gAxSharedAnim_02174,
	gAxSharedAnim_02196,
	gAxSharedAnim_02202,
	gAxSharedAnim_02205,
	gAxSharedAnim_02214,
};

static const ax_anim *const sUnownQmarkAnimTable13[] = {
	gAxSharedAnim_02230,
	gAxSharedAnim_02240,
	gAxSharedAnim_02247,
	gAxSharedAnim_02259,
	gAxSharedAnim_02269,
	gAxSharedAnim_02276,
	gAxSharedAnim_02286,
	gAxSharedAnim_02291,
};

static const ax_anim *const *const sAxAnimationsUnownQmark[] = {
	sUnownQmarkAnimTable1,
	sUnownQmarkAnimTable2,
	sUnownQmarkAnimTable3,
	sUnownQmarkAnimTable4,
	sUnownQmarkAnimTable5,
	sUnownQmarkAnimTable6,
	sUnownQmarkAnimTable7,
	sUnownQmarkAnimTable8,
	sUnownQmarkAnimTable9,
	sUnownQmarkAnimTable10,
	sUnownQmarkAnimTable11,
	sUnownQmarkAnimTable12,
	sUnownQmarkAnimTable13,
};

static const ax_sprite *const sAxSpritesUnownQmark[] = {
	sUnownQmarkSprites1,
	sUnownQmarkSprites2,
	sUnownQmarkSprites3,
	sUnownQmarkSprites4,
	sUnownQmarkSprites5,
	sUnownQmarkSprites6,
	sUnownQmarkSprites7,
	sUnownQmarkSprites8,
	sUnownQmarkSprites9,
	sUnownQmarkSprites10,
	sUnownQmarkSprites11,
	sUnownQmarkSprites12,
	sUnownQmarkSprites13,
	sUnownQmarkSprites14,
	sUnownQmarkSprites15,
	sUnownQmarkSprites16,
	sUnownQmarkSprites17,
};

static const axmain sAxMainUnownQmark = {
	.poses = sAxPosesUnownQmark,
	.animations = sAxAnimationsUnownQmark,
	.animCount = ARRAY_COUNT(sAxAnimationsUnownQmark),
	.spriteData = sAxSpritesUnownQmark,
	.positions = sAxPositionsUnownQmark,
};
