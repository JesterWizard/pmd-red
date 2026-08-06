/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainUnownW;
const SiroArchive gAxUnownW = {"SIRO", &sAxMainUnownW};

static const ax_pose sUnownWPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownWPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownWPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownWPose4[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownWPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownWPose6[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownWPose7[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownWPose8[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownWPose41[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownWPose42[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownWPose43[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownWPose44[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownWPose45[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownWPose46[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownWPose47[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownWPose48[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownWPose49[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};

static const u8 sUnownWGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownw/sprite_1.4bpp.lz");
static const ax_sprite sUnownWSprites1[] = {
	{sUnownWGfx1, ARRAY_COUNT(sUnownWGfx1)}, 
	{NULL, 0}
};
static const u8 sUnownWGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownw/sprite_2.4bpp.lz");
static const ax_sprite sUnownWSprites2[] = {
	{sUnownWGfx2, ARRAY_COUNT(sUnownWGfx2)}, 
	{NULL, 0}
};
static const u8 sUnownWGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownw/sprite_3.4bpp.lz");
static const ax_sprite sUnownWSprites3[] = {
	{sUnownWGfx3, ARRAY_COUNT(sUnownWGfx3)}, 
	{NULL, 0}
};
static const u8 sUnownWGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownw/sprite_4.4bpp.lz");
static const ax_sprite sUnownWSprites4[] = {
	{sUnownWGfx4, ARRAY_COUNT(sUnownWGfx4)}, 
	{NULL, 0}
};
static const u8 sUnownWGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownw/sprite_5.4bpp.lz");
static const ax_sprite sUnownWSprites5[] = {
	{sUnownWGfx5, ARRAY_COUNT(sUnownWGfx5)}, 
	{NULL, 0}
};
static const u8 sUnownWGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownw/sprite_6.4bpp.lz");
static const ax_sprite sUnownWSprites6[] = {
	{sUnownWGfx6, ARRAY_COUNT(sUnownWGfx6)}, 
	{NULL, 0}
};
static const u8 sUnownWGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownw/sprite_7.4bpp.lz");
static const ax_sprite sUnownWSprites7[] = {
	{sUnownWGfx7, ARRAY_COUNT(sUnownWGfx7)}, 
	{NULL, 0}
};
static const u8 sUnownWGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownw/sprite_8.4bpp.lz");
static const ax_sprite sUnownWSprites8[] = {
	{sUnownWGfx8, ARRAY_COUNT(sUnownWGfx8)}, 
	{NULL, 0}
};
static const u8 sUnownWGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownw/sprite_9.4bpp.lz");
static const ax_sprite sUnownWSprites9[] = {
	{sUnownWGfx9, ARRAY_COUNT(sUnownWGfx9)}, 
	{NULL, 0}
};
static const u8 sUnownWGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownw/sprite_10.4bpp.lz");
static const ax_sprite sUnownWSprites10[] = {
	{sUnownWGfx10, ARRAY_COUNT(sUnownWGfx10)}, 
	{NULL, 0}
};
static const u8 sUnownWGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownw/sprite_11.4bpp.lz");
static const ax_sprite sUnownWSprites11[] = {
	{sUnownWGfx11, ARRAY_COUNT(sUnownWGfx11)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesUnownW[] = {
	sUnownWPose1,
	sUnownWPose2,
	sUnownWPose3,
	sUnownWPose4,
	sUnownWPose5,
	sUnownWPose6,
	sUnownWPose7,
	sUnownWPose8,
	sUnownWPose1,
	sUnownWPose2,
	sUnownWPose3,
	sUnownWPose4,
	sUnownWPose5,
	sUnownWPose6,
	sUnownWPose7,
	sUnownWPose8,
	sUnownWPose1,
	sUnownWPose2,
	sUnownWPose3,
	sUnownWPose4,
	sUnownWPose5,
	sUnownWPose6,
	sUnownWPose7,
	sUnownWPose8,
	sUnownWPose1,
	sUnownWPose2,
	sUnownWPose3,
	sUnownWPose4,
	sUnownWPose5,
	sUnownWPose6,
	sUnownWPose7,
	sUnownWPose8,
	sUnownWPose1,
	sUnownWPose2,
	sUnownWPose3,
	sUnownWPose4,
	sUnownWPose5,
	sUnownWPose6,
	sUnownWPose7,
	sUnownWPose8,
	sUnownWPose41,
	sUnownWPose42,
	sUnownWPose43,
	sUnownWPose44,
	sUnownWPose45,
	sUnownWPose46,
	sUnownWPose47,
	sUnownWPose48,
	sUnownWPose49,
	sUnownWPose1,
	sUnownWPose2,
	sUnownWPose3,
	sUnownWPose4,
	sUnownWPose5,
	sUnownWPose6,
	sUnownWPose7,
	sUnownWPose8,
	sUnownWPose1,
	sUnownWPose2,
	sUnownWPose3,
	sUnownWPose4,
	sUnownWPose5,
	sUnownWPose6,
	sUnownWPose7,
	sUnownWPose8,
	sUnownWPose1,
	sUnownWPose2,
	sUnownWPose3,
	sUnownWPose4,
	sUnownWPose5,
	sUnownWPose6,
	sUnownWPose7,
	sUnownWPose8,
	sUnownWPose1,
	sUnownWPose2,
	sUnownWPose3,
	sUnownWPose4,
	sUnownWPose5,
	sUnownWPose6,
	sUnownWPose7,
	sUnownWPose8,
	sUnownWPose1,
	sUnownWPose2,
	sUnownWPose3,
	sUnownWPose4,
	sUnownWPose5,
	sUnownWPose6,
	sUnownWPose7,
	sUnownWPose8,
	sUnownWPose1,
	sUnownWPose2,
	sUnownWPose3,
	sUnownWPose4,
	sUnownWPose5,
	sUnownWPose6,
	sUnownWPose7,
	sUnownWPose8,
};

static const struct PositionSets sAxPositionsUnownW[] = {
	[0] = { .set = { {-1, -9}, {-7, -15}, {5, -15}, {-1, -10} } },
	[1] = { .set = { {0, -9}, {4, -16}, {-6, -14}, {-1, -11} } },
	[2] = { .set = { {1, -9}, {2, -16}, {-4, -14}, {-1, -11} } },
	[3] = { .set = { {0, -10}, {-6, -16}, {3, -14}, {-1, -12} } },
	[4] = { .set = { {-1, -9}, {5, -15}, {-7, -15}, {-1, -11} } },
	[5] = { .set = { {-2, -10}, {4, -16}, {-5, -14}, {-1, -12} } },
	[6] = { .set = { {-3, -9}, {-4, -16}, {2, -14}, {-1, -11} } },
	[7] = { .set = { {-2, -9}, {-6, -16}, {4, -14}, {-1, -11} } },
	[8] = { .set = { {-1, -9}, {-7, -15}, {5, -15}, {-1, -10} } },
	[9] = { .set = { {0, -9}, {4, -16}, {-6, -14}, {-1, -11} } },
	[10] = { .set = { {1, -9}, {2, -16}, {-4, -14}, {-1, -11} } },
	[11] = { .set = { {0, -10}, {-6, -16}, {3, -14}, {-1, -12} } },
	[12] = { .set = { {-1, -9}, {5, -15}, {-7, -15}, {-1, -11} } },
	[13] = { .set = { {-2, -10}, {4, -16}, {-5, -14}, {-1, -12} } },
	[14] = { .set = { {-3, -9}, {-4, -16}, {2, -14}, {-1, -11} } },
	[15] = { .set = { {-2, -9}, {-6, -16}, {4, -14}, {-1, -11} } },
	[16] = { .set = { {-1, -9}, {-7, -15}, {5, -15}, {-1, -10} } },
	[17] = { .set = { {0, -9}, {4, -16}, {-6, -14}, {-1, -11} } },
	[18] = { .set = { {1, -9}, {2, -16}, {-4, -14}, {-1, -11} } },
	[19] = { .set = { {0, -10}, {-6, -16}, {3, -14}, {-1, -12} } },
	[20] = { .set = { {-1, -9}, {5, -15}, {-7, -15}, {-1, -11} } },
	[21] = { .set = { {-2, -10}, {4, -16}, {-5, -14}, {-1, -12} } },
	[22] = { .set = { {-3, -9}, {-4, -16}, {2, -14}, {-1, -11} } },
	[23] = { .set = { {-2, -9}, {-6, -16}, {4, -14}, {-1, -11} } },
	[24] = { .set = { {-1, -9}, {-7, -15}, {5, -15}, {-1, -10} } },
	[25] = { .set = { {0, -9}, {4, -16}, {-6, -14}, {-1, -11} } },
	[26] = { .set = { {1, -9}, {2, -16}, {-4, -14}, {-1, -11} } },
	[27] = { .set = { {0, -10}, {-6, -16}, {3, -14}, {-1, -12} } },
	[28] = { .set = { {-1, -9}, {5, -15}, {-7, -15}, {-1, -11} } },
	[29] = { .set = { {-2, -10}, {4, -16}, {-5, -14}, {-1, -12} } },
	[30] = { .set = { {-3, -9}, {-4, -16}, {2, -14}, {-1, -11} } },
	[31] = { .set = { {-2, -9}, {-6, -16}, {4, -14}, {-1, -11} } },
	[32] = { .set = { {-1, -9}, {-7, -15}, {5, -15}, {-1, -10} } },
	[33] = { .set = { {0, -9}, {4, -16}, {-6, -14}, {-1, -11} } },
	[34] = { .set = { {1, -9}, {2, -16}, {-4, -14}, {-1, -11} } },
	[35] = { .set = { {0, -10}, {-6, -16}, {3, -14}, {-1, -12} } },
	[36] = { .set = { {-1, -9}, {5, -15}, {-7, -15}, {-1, -11} } },
	[37] = { .set = { {-2, -10}, {4, -16}, {-5, -14}, {-1, -12} } },
	[38] = { .set = { {-3, -9}, {-4, -16}, {2, -14}, {-1, -11} } },
	[39] = { .set = { {-2, -9}, {-6, -16}, {4, -14}, {-1, -11} } },
	[40] = { .set = { {-1, -9}, {-7, -15}, {5, -15}, {-1, -10} } },
	[41] = { .set = { {-1, -9}, {-7, -15}, {5, -15}, {-1, -10} } },
	[42] = { .set = { {1, -10}, {3, -15}, {-6, -14}, {-1, -11} } },
	[43] = { .set = { {1, -10}, {0, -16}, {-6, -14}, {-1, -11} } },
	[44] = { .set = { {0, -10}, {-8, -15}, {2, -14}, {-2, -12} } },
	[45] = { .set = { {-1, -10}, {5, -14}, {-7, -14}, {-1, -11} } },
	[46] = { .set = { {-2, -10}, {6, -15}, {-4, -14}, {0, -12} } },
	[47] = { .set = { {-3, -10}, {-2, -16}, {4, -14}, {-1, -11} } },
	[48] = { .set = { {-2, -10}, {-4, -15}, {5, -14}, {0, -11} } },
	[49] = { .set = { {-1, -9}, {-7, -15}, {5, -15}, {-1, -10} } },
	[50] = { .set = { {0, -9}, {4, -16}, {-6, -14}, {-1, -11} } },
	[51] = { .set = { {1, -9}, {2, -16}, {-4, -14}, {-1, -11} } },
	[52] = { .set = { {0, -10}, {-6, -16}, {3, -14}, {-1, -12} } },
	[53] = { .set = { {-1, -9}, {5, -15}, {-7, -15}, {-1, -11} } },
	[54] = { .set = { {-2, -10}, {4, -16}, {-5, -14}, {-1, -12} } },
	[55] = { .set = { {-3, -9}, {-4, -16}, {2, -14}, {-1, -11} } },
	[56] = { .set = { {-2, -9}, {-6, -16}, {4, -14}, {-1, -11} } },
	[57] = { .set = { {-1, -9}, {-7, -15}, {5, -15}, {-1, -10} } },
	[58] = { .set = { {0, -9}, {4, -16}, {-6, -14}, {-1, -11} } },
	[59] = { .set = { {1, -9}, {2, -16}, {-4, -14}, {-1, -11} } },
	[60] = { .set = { {0, -10}, {-6, -16}, {3, -14}, {-1, -12} } },
	[61] = { .set = { {-1, -9}, {5, -15}, {-7, -15}, {-1, -11} } },
	[62] = { .set = { {-2, -10}, {4, -16}, {-5, -14}, {-1, -12} } },
	[63] = { .set = { {-3, -9}, {-4, -16}, {2, -14}, {-1, -11} } },
	[64] = { .set = { {-2, -9}, {-6, -16}, {4, -14}, {-1, -11} } },
	[65] = { .set = { {-1, -9}, {-7, -15}, {5, -15}, {-1, -10} } },
	[66] = { .set = { {0, -9}, {4, -16}, {-6, -14}, {-1, -11} } },
	[67] = { .set = { {1, -9}, {2, -16}, {-4, -14}, {-1, -11} } },
	[68] = { .set = { {0, -10}, {-6, -16}, {3, -14}, {-1, -12} } },
	[69] = { .set = { {-1, -9}, {5, -15}, {-7, -15}, {-1, -11} } },
	[70] = { .set = { {-2, -10}, {4, -16}, {-5, -14}, {-1, -12} } },
	[71] = { .set = { {-3, -9}, {-4, -16}, {2, -14}, {-1, -11} } },
	[72] = { .set = { {-2, -9}, {-6, -16}, {4, -14}, {-1, -11} } },
	[73] = { .set = { {-1, -9}, {-7, -15}, {5, -15}, {-1, -10} } },
	[74] = { .set = { {0, -9}, {4, -16}, {-6, -14}, {-1, -11} } },
	[75] = { .set = { {1, -9}, {2, -16}, {-4, -14}, {-1, -11} } },
	[76] = { .set = { {0, -10}, {-6, -16}, {3, -14}, {-1, -12} } },
	[77] = { .set = { {-1, -9}, {5, -15}, {-7, -15}, {-1, -11} } },
	[78] = { .set = { {-2, -10}, {4, -16}, {-5, -14}, {-1, -12} } },
	[79] = { .set = { {-3, -9}, {-4, -16}, {2, -14}, {-1, -11} } },
	[80] = { .set = { {-2, -9}, {-6, -16}, {4, -14}, {-1, -11} } },
	[81] = { .set = { {-1, -9}, {-7, -15}, {5, -15}, {-1, -10} } },
	[82] = { .set = { {0, -9}, {4, -16}, {-6, -14}, {-1, -11} } },
	[83] = { .set = { {1, -9}, {2, -16}, {-4, -14}, {-1, -11} } },
	[84] = { .set = { {0, -10}, {-6, -16}, {3, -14}, {-1, -12} } },
	[85] = { .set = { {-1, -9}, {5, -15}, {-7, -15}, {-1, -11} } },
	[86] = { .set = { {-2, -10}, {4, -16}, {-5, -14}, {-1, -12} } },
	[87] = { .set = { {-3, -9}, {-4, -16}, {2, -14}, {-1, -11} } },
	[88] = { .set = { {-2, -9}, {-6, -16}, {4, -14}, {-1, -11} } },
	[89] = { .set = { {-1, -9}, {-7, -15}, {5, -15}, {-1, -10} } },
	[90] = { .set = { {0, -9}, {4, -16}, {-6, -14}, {-1, -11} } },
	[91] = { .set = { {1, -9}, {2, -16}, {-4, -14}, {-1, -11} } },
	[92] = { .set = { {0, -10}, {-6, -16}, {3, -14}, {-1, -12} } },
	[93] = { .set = { {-1, -9}, {5, -15}, {-7, -15}, {-1, -11} } },
	[94] = { .set = { {-2, -10}, {4, -16}, {-5, -14}, {-1, -12} } },
	[95] = { .set = { {-3, -9}, {-4, -16}, {2, -14}, {-1, -11} } },
	[96] = { .set = { {-2, -9}, {-6, -16}, {4, -14}, {-1, -11} } },
};

static const ax_anim *const sUnownWAnimTable1[] = {
	gAxSharedAnim_02475,
	gAxSharedAnim_02478,
	gAxSharedAnim_02528,
	gAxSharedAnim_02540,
	gAxSharedAnim_02543,
	gAxSharedAnim_02544,
	gAxSharedAnim_02549,
	gAxSharedAnim_02552,
};

static const ax_anim *const sUnownWAnimTable2[] = {
	gAxSharedAnim_02144,
	gAxSharedAnim_02232,
	gAxSharedAnim_00150,
	gAxSharedAnim_00226,
	gAxSharedAnim_00317,
	gAxSharedAnim_00394,
	gAxSharedAnim_00486,
	gAxSharedAnim_00569,
};

static const ax_anim *const sUnownWAnimTable3[] = {
	gAxSharedAnim_00666,
	gAxSharedAnim_00787,
	gAxSharedAnim_00922,
	gAxSharedAnim_01066,
	gAxSharedAnim_01207,
	gAxSharedAnim_01330,
	gAxSharedAnim_01431,
	gAxSharedAnim_01492,
};

static const ax_anim *const sUnownWAnimTable4[] = {
	gAxSharedAnim_01573,
	gAxSharedAnim_01633,
	gAxSharedAnim_01684,
	gAxSharedAnim_01726,
	gAxSharedAnim_01763,
	gAxSharedAnim_01794,
	gAxSharedAnim_01821,
	gAxSharedAnim_01824,
};

static const ax_anim *const sUnownWAnimTable5[] = {
	gAxSharedAnim_01840,
	gAxSharedAnim_01855,
	gAxSharedAnim_01869,
	gAxSharedAnim_01880,
	gAxSharedAnim_01886,
	gAxSharedAnim_01895,
	gAxSharedAnim_01900,
	gAxSharedAnim_01903,
};

static const ax_anim *const sUnownWAnimTable6[] = {
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
};

static const ax_anim *const sUnownWAnimTable7[] = {
	gAxSharedAnim_01921,
	gAxSharedAnim_01924,
	gAxSharedAnim_01935,
	gAxSharedAnim_01937,
	gAxSharedAnim_01947,
	gAxSharedAnim_01957,
	gAxSharedAnim_01960,
	gAxSharedAnim_01975,
};

static const ax_anim *const sUnownWAnimTable8[] = {
	gAxSharedAnim_02320,
	gAxSharedAnim_02321,
	gAxSharedAnim_02322,
	gAxSharedAnim_02323,
	gAxSharedAnim_02324,
	gAxSharedAnim_02325,
	gAxSharedAnim_02326,
	gAxSharedAnim_02327,
};

static const ax_anim *const sUnownWAnimTable9[] = {
	gAxSharedAnim_02011,
	gAxSharedAnim_02016,
	gAxSharedAnim_02019,
	gAxSharedAnim_02025,
	gAxSharedAnim_02032,
	gAxSharedAnim_02037,
	gAxSharedAnim_02040,
	gAxSharedAnim_02051,
};

static const ax_anim *const sUnownWAnimTable10[] = {
	gAxSharedAnim_02055,
	gAxSharedAnim_02059,
	gAxSharedAnim_02066,
	gAxSharedAnim_02072,
	gAxSharedAnim_02073,
	gAxSharedAnim_02078,
	gAxSharedAnim_02082,
	gAxSharedAnim_02085,
};

static const ax_anim *const sUnownWAnimTable11[] = {
	gAxSharedAnim_02098,
	gAxSharedAnim_02104,
	gAxSharedAnim_02108,
	gAxSharedAnim_02118,
	gAxSharedAnim_02125,
	gAxSharedAnim_02131,
	gAxSharedAnim_02139,
	gAxSharedAnim_02145,
};

static const ax_anim *const sUnownWAnimTable12[] = {
	gAxSharedAnim_02158,
	gAxSharedAnim_02167,
	gAxSharedAnim_02169,
	gAxSharedAnim_02174,
	gAxSharedAnim_02196,
	gAxSharedAnim_02202,
	gAxSharedAnim_02205,
	gAxSharedAnim_02214,
};

static const ax_anim *const sUnownWAnimTable13[] = {
	gAxSharedAnim_02230,
	gAxSharedAnim_02240,
	gAxSharedAnim_02247,
	gAxSharedAnim_02259,
	gAxSharedAnim_02269,
	gAxSharedAnim_02276,
	gAxSharedAnim_02286,
	gAxSharedAnim_02291,
};

static const ax_anim *const *const sAxAnimationsUnownW[] = {
	sUnownWAnimTable1,
	sUnownWAnimTable2,
	sUnownWAnimTable3,
	sUnownWAnimTable4,
	sUnownWAnimTable5,
	sUnownWAnimTable6,
	sUnownWAnimTable7,
	sUnownWAnimTable8,
	sUnownWAnimTable9,
	sUnownWAnimTable10,
	sUnownWAnimTable11,
	sUnownWAnimTable12,
	sUnownWAnimTable13,
};

static const ax_sprite *const sAxSpritesUnownW[] = {
	sUnownWSprites1,
	sUnownWSprites2,
	sUnownWSprites3,
	sUnownWSprites4,
	sUnownWSprites5,
	sUnownWSprites6,
	sUnownWSprites7,
	sUnownWSprites8,
	sUnownWSprites9,
	sUnownWSprites10,
	sUnownWSprites11,
};

static const axmain sAxMainUnownW = {
	.poses = sAxPosesUnownW,
	.animations = sAxAnimationsUnownW,
	.animCount = ARRAY_COUNT(sAxAnimationsUnownW),
	.spriteData = sAxSpritesUnownW,
	.positions = sAxPositionsUnownW,
};
