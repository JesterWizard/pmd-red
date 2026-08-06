/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainUnownY;
const SiroArchive gAxUnownY = {"SIRO", &sAxMainUnownY};

static const ax_pose sUnownYPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownYPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownYPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownYPose4[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownYPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownYPose6[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownYPose7[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownYPose8[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownYPose41[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownYPose42[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownYPose43[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownYPose44[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownYPose45[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownYPose46[] = {
	AX_POSE(10, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownYPose47[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownYPose48[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownYPose49[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};

static const u8 sUnownYGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowny/sprite_1.4bpp.lz");
static const ax_sprite sUnownYSprites1[] = {
	{sUnownYGfx1, ARRAY_COUNT(sUnownYGfx1)}, 
	{NULL, 0}
};
static const u8 sUnownYGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowny/sprite_2.4bpp.lz");
static const ax_sprite sUnownYSprites2[] = {
	{sUnownYGfx2, ARRAY_COUNT(sUnownYGfx2)}, 
	{NULL, 0}
};
static const u8 sUnownYGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowny/sprite_3.4bpp.lz");
static const ax_sprite sUnownYSprites3[] = {
	{sUnownYGfx3, ARRAY_COUNT(sUnownYGfx3)}, 
	{NULL, 0}
};
static const u8 sUnownYGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowny/sprite_4.4bpp.lz");
static const ax_sprite sUnownYSprites4[] = {
	{sUnownYGfx4, ARRAY_COUNT(sUnownYGfx4)}, 
	{NULL, 0}
};
static const u8 sUnownYGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowny/sprite_5.4bpp.lz");
static const ax_sprite sUnownYSprites5[] = {
	{sUnownYGfx5, ARRAY_COUNT(sUnownYGfx5)}, 
	{NULL, 0}
};
static const u8 sUnownYGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowny/sprite_6.4bpp.lz");
static const ax_sprite sUnownYSprites6[] = {
	{sUnownYGfx6, ARRAY_COUNT(sUnownYGfx6)}, 
	{NULL, 0}
};
static const u8 sUnownYGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowny/sprite_7.4bpp.lz");
static const ax_sprite sUnownYSprites7[] = {
	{sUnownYGfx7, ARRAY_COUNT(sUnownYGfx7)}, 
	{NULL, 0}
};
static const u8 sUnownYGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowny/sprite_8.4bpp.lz");
static const ax_sprite sUnownYSprites8[] = {
	{sUnownYGfx8, ARRAY_COUNT(sUnownYGfx8)}, 
	{NULL, 0}
};
static const u8 sUnownYGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowny/sprite_9.4bpp.lz");
static const ax_sprite sUnownYSprites9[] = {
	{sUnownYGfx9, ARRAY_COUNT(sUnownYGfx9)}, 
	{NULL, 0}
};
static const u8 sUnownYGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowny/sprite_10.4bpp.lz");
static const ax_sprite sUnownYSprites10[] = {
	{sUnownYGfx10, ARRAY_COUNT(sUnownYGfx10)}, 
	{NULL, 0}
};
static const u8 sUnownYGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowny/sprite_11.4bpp.lz");
static const ax_sprite sUnownYSprites11[] = {
	{sUnownYGfx11, ARRAY_COUNT(sUnownYGfx11)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesUnownY[] = {
	sUnownYPose1,
	sUnownYPose2,
	sUnownYPose3,
	sUnownYPose4,
	sUnownYPose5,
	sUnownYPose6,
	sUnownYPose7,
	sUnownYPose8,
	sUnownYPose1,
	sUnownYPose2,
	sUnownYPose3,
	sUnownYPose4,
	sUnownYPose5,
	sUnownYPose6,
	sUnownYPose7,
	sUnownYPose8,
	sUnownYPose1,
	sUnownYPose2,
	sUnownYPose3,
	sUnownYPose4,
	sUnownYPose5,
	sUnownYPose6,
	sUnownYPose7,
	sUnownYPose8,
	sUnownYPose1,
	sUnownYPose2,
	sUnownYPose3,
	sUnownYPose4,
	sUnownYPose5,
	sUnownYPose6,
	sUnownYPose7,
	sUnownYPose8,
	sUnownYPose1,
	sUnownYPose2,
	sUnownYPose3,
	sUnownYPose4,
	sUnownYPose5,
	sUnownYPose6,
	sUnownYPose7,
	sUnownYPose8,
	sUnownYPose41,
	sUnownYPose42,
	sUnownYPose43,
	sUnownYPose44,
	sUnownYPose45,
	sUnownYPose46,
	sUnownYPose47,
	sUnownYPose48,
	sUnownYPose49,
	sUnownYPose1,
	sUnownYPose2,
	sUnownYPose3,
	sUnownYPose4,
	sUnownYPose5,
	sUnownYPose6,
	sUnownYPose7,
	sUnownYPose8,
	sUnownYPose1,
	sUnownYPose2,
	sUnownYPose3,
	sUnownYPose4,
	sUnownYPose5,
	sUnownYPose6,
	sUnownYPose7,
	sUnownYPose8,
	sUnownYPose1,
	sUnownYPose2,
	sUnownYPose3,
	sUnownYPose4,
	sUnownYPose5,
	sUnownYPose6,
	sUnownYPose7,
	sUnownYPose8,
	sUnownYPose1,
	sUnownYPose2,
	sUnownYPose3,
	sUnownYPose4,
	sUnownYPose5,
	sUnownYPose6,
	sUnownYPose7,
	sUnownYPose8,
	sUnownYPose1,
	sUnownYPose2,
	sUnownYPose3,
	sUnownYPose4,
	sUnownYPose5,
	sUnownYPose6,
	sUnownYPose7,
	sUnownYPose8,
	sUnownYPose1,
	sUnownYPose2,
	sUnownYPose3,
	sUnownYPose4,
	sUnownYPose5,
	sUnownYPose6,
	sUnownYPose7,
	sUnownYPose8,
};

static const struct PositionSets sAxPositionsUnownY[] = {
	[0] = { .set = { {-1, -14}, {-6, -18}, {4, -18}, {-1, -12} } },
	[1] = { .set = { {0, -14}, {2, -19}, {-4, -17}, {-1, -11} } },
	[2] = { .set = { {1, -14}, {-1, -19}, {-4, -16}, {-1, -10} } },
	[3] = { .set = { {-1, -14}, {-4, -19}, {3, -17}, {-1, -11} } },
	[4] = { .set = { {-1, -14}, {4, -18}, {-6, -18}, {-1, -11} } },
	[5] = { .set = { {-1, -14}, {2, -19}, {-5, -17}, {-1, -11} } },
	[6] = { .set = { {-3, -14}, {-1, -19}, {2, -16}, {-1, -10} } },
	[7] = { .set = { {-2, -14}, {-4, -19}, {2, -17}, {-1, -11} } },
	[8] = { .set = { {-1, -14}, {-6, -18}, {4, -18}, {-1, -12} } },
	[9] = { .set = { {0, -14}, {2, -19}, {-4, -17}, {-1, -11} } },
	[10] = { .set = { {1, -14}, {-1, -19}, {-4, -16}, {-1, -10} } },
	[11] = { .set = { {-1, -14}, {-4, -19}, {3, -17}, {-1, -11} } },
	[12] = { .set = { {-1, -14}, {4, -18}, {-6, -18}, {-1, -11} } },
	[13] = { .set = { {-1, -14}, {2, -19}, {-5, -17}, {-1, -11} } },
	[14] = { .set = { {-3, -14}, {-1, -19}, {2, -16}, {-1, -10} } },
	[15] = { .set = { {-2, -14}, {-4, -19}, {2, -17}, {-1, -11} } },
	[16] = { .set = { {-1, -14}, {-6, -18}, {4, -18}, {-1, -12} } },
	[17] = { .set = { {0, -14}, {2, -19}, {-4, -17}, {-1, -11} } },
	[18] = { .set = { {1, -14}, {-1, -19}, {-4, -16}, {-1, -10} } },
	[19] = { .set = { {-1, -14}, {-4, -19}, {3, -17}, {-1, -11} } },
	[20] = { .set = { {-1, -14}, {4, -18}, {-6, -18}, {-1, -11} } },
	[21] = { .set = { {-1, -14}, {2, -19}, {-5, -17}, {-1, -11} } },
	[22] = { .set = { {-3, -14}, {-1, -19}, {2, -16}, {-1, -10} } },
	[23] = { .set = { {-2, -14}, {-4, -19}, {2, -17}, {-1, -11} } },
	[24] = { .set = { {-1, -14}, {-6, -18}, {4, -18}, {-1, -12} } },
	[25] = { .set = { {0, -14}, {2, -19}, {-4, -17}, {-1, -11} } },
	[26] = { .set = { {1, -14}, {-1, -19}, {-4, -16}, {-1, -10} } },
	[27] = { .set = { {-1, -14}, {-4, -19}, {3, -17}, {-1, -11} } },
	[28] = { .set = { {-1, -14}, {4, -18}, {-6, -18}, {-1, -11} } },
	[29] = { .set = { {-1, -14}, {2, -19}, {-5, -17}, {-1, -11} } },
	[30] = { .set = { {-3, -14}, {-1, -19}, {2, -16}, {-1, -10} } },
	[31] = { .set = { {-2, -14}, {-4, -19}, {2, -17}, {-1, -11} } },
	[32] = { .set = { {-1, -14}, {-6, -18}, {4, -18}, {-1, -12} } },
	[33] = { .set = { {0, -14}, {2, -19}, {-4, -17}, {-1, -11} } },
	[34] = { .set = { {1, -14}, {-1, -19}, {-4, -16}, {-1, -10} } },
	[35] = { .set = { {-1, -14}, {-4, -19}, {3, -17}, {-1, -11} } },
	[36] = { .set = { {-1, -14}, {4, -18}, {-6, -18}, {-1, -11} } },
	[37] = { .set = { {-1, -14}, {2, -19}, {-5, -17}, {-1, -11} } },
	[38] = { .set = { {-3, -14}, {-1, -19}, {2, -16}, {-1, -10} } },
	[39] = { .set = { {-2, -14}, {-4, -19}, {2, -17}, {-1, -11} } },
	[40] = { .set = { {-1, -14}, {-6, -18}, {4, -18}, {-1, -12} } },
	[41] = { .set = { {-1, -13}, {-7, -18}, {4, -17}, {-1, -11} } },
	[42] = { .set = { {-1, -14}, {0, -18}, {-6, -15}, {-1, -11} } },
	[43] = { .set = { {0, -15}, {-3, -19}, {-5, -15}, {-2, -11} } },
	[44] = { .set = { {-1, -15}, {-5, -19}, {2, -18}, {-1, -11} } },
	[45] = { .set = { {-1, -14}, {4, -17}, {-6, -17}, {-1, -11} } },
	[46] = { .set = { {-1, -15}, {3, -19}, {-4, -18}, {-1, -11} } },
	[47] = { .set = { {-2, -15}, {1, -19}, {3, -15}, {0, -11} } },
	[48] = { .set = { {-1, -14}, {-2, -18}, {4, -15}, {-1, -11} } },
	[49] = { .set = { {-1, -14}, {-6, -18}, {4, -18}, {-1, -12} } },
	[50] = { .set = { {0, -14}, {2, -19}, {-4, -17}, {-1, -11} } },
	[51] = { .set = { {1, -14}, {-1, -19}, {-4, -16}, {-1, -10} } },
	[52] = { .set = { {-1, -14}, {-4, -19}, {3, -17}, {-1, -11} } },
	[53] = { .set = { {-1, -14}, {4, -18}, {-6, -18}, {-1, -11} } },
	[54] = { .set = { {-1, -14}, {2, -19}, {-5, -17}, {-1, -11} } },
	[55] = { .set = { {-3, -14}, {-1, -19}, {2, -16}, {-1, -10} } },
	[56] = { .set = { {-2, -14}, {-4, -19}, {2, -17}, {-1, -11} } },
	[57] = { .set = { {-1, -14}, {-6, -18}, {4, -18}, {-1, -12} } },
	[58] = { .set = { {0, -14}, {2, -19}, {-4, -17}, {-1, -11} } },
	[59] = { .set = { {1, -14}, {-1, -19}, {-4, -16}, {-1, -10} } },
	[60] = { .set = { {-1, -14}, {-4, -19}, {3, -17}, {-1, -11} } },
	[61] = { .set = { {-1, -14}, {4, -18}, {-6, -18}, {-1, -11} } },
	[62] = { .set = { {-1, -14}, {2, -19}, {-5, -17}, {-1, -11} } },
	[63] = { .set = { {-3, -14}, {-1, -19}, {2, -16}, {-1, -10} } },
	[64] = { .set = { {-2, -14}, {-4, -19}, {2, -17}, {-1, -11} } },
	[65] = { .set = { {-1, -14}, {-6, -18}, {4, -18}, {-1, -12} } },
	[66] = { .set = { {0, -14}, {2, -19}, {-4, -17}, {-1, -11} } },
	[67] = { .set = { {1, -14}, {-1, -19}, {-4, -16}, {-1, -10} } },
	[68] = { .set = { {-1, -14}, {-4, -19}, {3, -17}, {-1, -11} } },
	[69] = { .set = { {-1, -14}, {4, -18}, {-6, -18}, {-1, -11} } },
	[70] = { .set = { {-1, -14}, {2, -19}, {-5, -17}, {-1, -11} } },
	[71] = { .set = { {-3, -14}, {-1, -19}, {2, -16}, {-1, -10} } },
	[72] = { .set = { {-2, -14}, {-4, -19}, {2, -17}, {-1, -11} } },
	[73] = { .set = { {-1, -14}, {-6, -18}, {4, -18}, {-1, -12} } },
	[74] = { .set = { {0, -14}, {2, -19}, {-4, -17}, {-1, -11} } },
	[75] = { .set = { {1, -14}, {-1, -19}, {-4, -16}, {-1, -10} } },
	[76] = { .set = { {-1, -14}, {-4, -19}, {3, -17}, {-1, -11} } },
	[77] = { .set = { {-1, -14}, {4, -18}, {-6, -18}, {-1, -11} } },
	[78] = { .set = { {-1, -14}, {2, -19}, {-5, -17}, {-1, -11} } },
	[79] = { .set = { {-3, -14}, {-1, -19}, {2, -16}, {-1, -10} } },
	[80] = { .set = { {-2, -14}, {-4, -19}, {2, -17}, {-1, -11} } },
	[81] = { .set = { {-1, -14}, {-6, -18}, {4, -18}, {-1, -12} } },
	[82] = { .set = { {0, -14}, {2, -19}, {-4, -17}, {-1, -11} } },
	[83] = { .set = { {1, -14}, {-1, -19}, {-4, -16}, {-1, -10} } },
	[84] = { .set = { {-1, -14}, {-4, -19}, {3, -17}, {-1, -11} } },
	[85] = { .set = { {-1, -14}, {4, -18}, {-6, -18}, {-1, -11} } },
	[86] = { .set = { {-1, -14}, {2, -19}, {-5, -17}, {-1, -11} } },
	[87] = { .set = { {-3, -14}, {-1, -19}, {2, -16}, {-1, -10} } },
	[88] = { .set = { {-2, -14}, {-4, -19}, {2, -17}, {-1, -11} } },
	[89] = { .set = { {-1, -14}, {-6, -18}, {4, -18}, {-1, -12} } },
	[90] = { .set = { {0, -14}, {2, -19}, {-4, -17}, {-1, -11} } },
	[91] = { .set = { {1, -14}, {-1, -19}, {-4, -16}, {-1, -10} } },
	[92] = { .set = { {-1, -14}, {-4, -19}, {3, -17}, {-1, -11} } },
	[93] = { .set = { {-1, -14}, {4, -18}, {-6, -18}, {-1, -11} } },
	[94] = { .set = { {-1, -14}, {2, -19}, {-5, -17}, {-1, -11} } },
	[95] = { .set = { {-3, -14}, {-1, -19}, {2, -16}, {-1, -10} } },
	[96] = { .set = { {-2, -14}, {-4, -19}, {2, -17}, {-1, -11} } },
};

static const ax_anim *const sUnownYAnimTable1[] = {
	gAxSharedAnim_02475,
	gAxSharedAnim_02478,
	gAxSharedAnim_02528,
	gAxSharedAnim_02540,
	gAxSharedAnim_02543,
	gAxSharedAnim_02544,
	gAxSharedAnim_02549,
	gAxSharedAnim_02552,
};

static const ax_anim *const sUnownYAnimTable2[] = {
	gAxSharedAnim_02144,
	gAxSharedAnim_02232,
	gAxSharedAnim_00150,
	gAxSharedAnim_00226,
	gAxSharedAnim_00317,
	gAxSharedAnim_00394,
	gAxSharedAnim_00486,
	gAxSharedAnim_00569,
};

static const ax_anim *const sUnownYAnimTable3[] = {
	gAxSharedAnim_00666,
	gAxSharedAnim_00787,
	gAxSharedAnim_00922,
	gAxSharedAnim_01066,
	gAxSharedAnim_01207,
	gAxSharedAnim_01330,
	gAxSharedAnim_01431,
	gAxSharedAnim_01492,
};

static const ax_anim *const sUnownYAnimTable4[] = {
	gAxSharedAnim_01573,
	gAxSharedAnim_01633,
	gAxSharedAnim_01684,
	gAxSharedAnim_01726,
	gAxSharedAnim_01763,
	gAxSharedAnim_01794,
	gAxSharedAnim_01821,
	gAxSharedAnim_01824,
};

static const ax_anim *const sUnownYAnimTable5[] = {
	gAxSharedAnim_01840,
	gAxSharedAnim_01855,
	gAxSharedAnim_01869,
	gAxSharedAnim_01880,
	gAxSharedAnim_01886,
	gAxSharedAnim_01895,
	gAxSharedAnim_01900,
	gAxSharedAnim_01903,
};

static const ax_anim *const sUnownYAnimTable6[] = {
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
};

static const ax_anim *const sUnownYAnimTable7[] = {
	gAxSharedAnim_01921,
	gAxSharedAnim_01924,
	gAxSharedAnim_01935,
	gAxSharedAnim_01937,
	gAxSharedAnim_01947,
	gAxSharedAnim_01957,
	gAxSharedAnim_01960,
	gAxSharedAnim_01975,
};

static const ax_anim *const sUnownYAnimTable8[] = {
	gAxSharedAnim_02320,
	gAxSharedAnim_02321,
	gAxSharedAnim_02322,
	gAxSharedAnim_02323,
	gAxSharedAnim_02324,
	gAxSharedAnim_02325,
	gAxSharedAnim_02326,
	gAxSharedAnim_02327,
};

static const ax_anim *const sUnownYAnimTable9[] = {
	gAxSharedAnim_02011,
	gAxSharedAnim_02016,
	gAxSharedAnim_02019,
	gAxSharedAnim_02025,
	gAxSharedAnim_02032,
	gAxSharedAnim_02037,
	gAxSharedAnim_02040,
	gAxSharedAnim_02051,
};

static const ax_anim *const sUnownYAnimTable10[] = {
	gAxSharedAnim_02055,
	gAxSharedAnim_02059,
	gAxSharedAnim_02066,
	gAxSharedAnim_02072,
	gAxSharedAnim_02073,
	gAxSharedAnim_02078,
	gAxSharedAnim_02082,
	gAxSharedAnim_02085,
};

static const ax_anim *const sUnownYAnimTable11[] = {
	gAxSharedAnim_02098,
	gAxSharedAnim_02104,
	gAxSharedAnim_02108,
	gAxSharedAnim_02118,
	gAxSharedAnim_02125,
	gAxSharedAnim_02131,
	gAxSharedAnim_02139,
	gAxSharedAnim_02145,
};

static const ax_anim *const sUnownYAnimTable12[] = {
	gAxSharedAnim_02158,
	gAxSharedAnim_02167,
	gAxSharedAnim_02169,
	gAxSharedAnim_02174,
	gAxSharedAnim_02196,
	gAxSharedAnim_02202,
	gAxSharedAnim_02205,
	gAxSharedAnim_02214,
};

static const ax_anim *const sUnownYAnimTable13[] = {
	gAxSharedAnim_02230,
	gAxSharedAnim_02240,
	gAxSharedAnim_02247,
	gAxSharedAnim_02259,
	gAxSharedAnim_02269,
	gAxSharedAnim_02276,
	gAxSharedAnim_02286,
	gAxSharedAnim_02291,
};

static const ax_anim *const *const sAxAnimationsUnownY[] = {
	sUnownYAnimTable1,
	sUnownYAnimTable2,
	sUnownYAnimTable3,
	sUnownYAnimTable4,
	sUnownYAnimTable5,
	sUnownYAnimTable6,
	sUnownYAnimTable7,
	sUnownYAnimTable8,
	sUnownYAnimTable9,
	sUnownYAnimTable10,
	sUnownYAnimTable11,
	sUnownYAnimTable12,
	sUnownYAnimTable13,
};

static const ax_sprite *const sAxSpritesUnownY[] = {
	sUnownYSprites1,
	sUnownYSprites2,
	sUnownYSprites3,
	sUnownYSprites4,
	sUnownYSprites5,
	sUnownYSprites6,
	sUnownYSprites7,
	sUnownYSprites8,
	sUnownYSprites9,
	sUnownYSprites10,
	sUnownYSprites11,
};

static const axmain sAxMainUnownY = {
	.poses = sAxPosesUnownY,
	.animations = sAxAnimationsUnownY,
	.animCount = ARRAY_COUNT(sAxAnimationsUnownY),
	.spriteData = sAxSpritesUnownY,
	.positions = sAxPositionsUnownY,
};
