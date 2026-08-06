/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainUnownX;
const SiroArchive gAxUnownX = {"SIRO", &sAxMainUnownX};

static const ax_pose sUnownXPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownXPose2[] = {
	AX_POSE(1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownXPose3[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownXPose4[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownXPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownXPose6[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownXPose7[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownXPose8[] = {
	AX_POSE(1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownXPose41[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownXPose42[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownXPose43[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownXPose44[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownXPose45[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownXPose46[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownXPose47[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownXPose48[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownXPose49[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};

static const u8 sUnownXGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownx/sprite_1.4bpp.lz");
static const ax_sprite sUnownXSprites1[] = {
	{sUnownXGfx1, ARRAY_COUNT(sUnownXGfx1)}, 
	{NULL, 0}
};
static const u8 sUnownXGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownx/sprite_2.4bpp.lz");
static const ax_sprite sUnownXSprites2[] = {
	{sUnownXGfx2, ARRAY_COUNT(sUnownXGfx2)}, 
	{NULL, 0}
};
static const u8 sUnownXGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownx/sprite_3.4bpp.lz");
static const ax_sprite sUnownXSprites3[] = {
	{sUnownXGfx3, ARRAY_COUNT(sUnownXGfx3)}, 
	{NULL, 0}
};
static const u8 sUnownXGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownx/sprite_4.4bpp.lz");
static const ax_sprite sUnownXSprites4[] = {
	{sUnownXGfx4, ARRAY_COUNT(sUnownXGfx4)}, 
	{NULL, 0}
};
static const u8 sUnownXGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownx/sprite_5.4bpp.lz");
static const ax_sprite sUnownXSprites5[] = {
	{sUnownXGfx5, ARRAY_COUNT(sUnownXGfx5)}, 
	{NULL, 0}
};
static const u8 sUnownXGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownx/sprite_6.4bpp.lz");
static const ax_sprite sUnownXSprites6[] = {
	{sUnownXGfx6, ARRAY_COUNT(sUnownXGfx6)}, 
	{NULL, 0}
};
static const u8 sUnownXGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownx/sprite_7.4bpp.lz");
static const ax_sprite sUnownXSprites7[] = {
	{sUnownXGfx7, ARRAY_COUNT(sUnownXGfx7)}, 
	{NULL, 0}
};
static const u8 sUnownXGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownx/sprite_8.4bpp.lz");
static const ax_sprite sUnownXSprites8[] = {
	{sUnownXGfx8, ARRAY_COUNT(sUnownXGfx8)}, 
	{NULL, 0}
};
static const u8 sUnownXGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownx/sprite_9.4bpp.lz");
static const ax_sprite sUnownXSprites9[] = {
	{sUnownXGfx9, ARRAY_COUNT(sUnownXGfx9)}, 
	{NULL, 0}
};
static const u8 sUnownXGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownx/sprite_10.4bpp.lz");
static const ax_sprite sUnownXSprites10[] = {
	{sUnownXGfx10, ARRAY_COUNT(sUnownXGfx10)}, 
	{NULL, 0}
};
static const u8 sUnownXGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownx/sprite_11.4bpp.lz");
static const ax_sprite sUnownXSprites11[] = {
	{sUnownXGfx11, ARRAY_COUNT(sUnownXGfx11)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesUnownX[] = {
	sUnownXPose1,
	sUnownXPose2,
	sUnownXPose3,
	sUnownXPose4,
	sUnownXPose5,
	sUnownXPose6,
	sUnownXPose7,
	sUnownXPose8,
	sUnownXPose1,
	sUnownXPose2,
	sUnownXPose3,
	sUnownXPose4,
	sUnownXPose5,
	sUnownXPose6,
	sUnownXPose7,
	sUnownXPose8,
	sUnownXPose1,
	sUnownXPose2,
	sUnownXPose3,
	sUnownXPose4,
	sUnownXPose5,
	sUnownXPose6,
	sUnownXPose7,
	sUnownXPose8,
	sUnownXPose1,
	sUnownXPose2,
	sUnownXPose3,
	sUnownXPose4,
	sUnownXPose5,
	sUnownXPose6,
	sUnownXPose7,
	sUnownXPose8,
	sUnownXPose1,
	sUnownXPose2,
	sUnownXPose3,
	sUnownXPose4,
	sUnownXPose5,
	sUnownXPose6,
	sUnownXPose7,
	sUnownXPose8,
	sUnownXPose41,
	sUnownXPose42,
	sUnownXPose43,
	sUnownXPose44,
	sUnownXPose45,
	sUnownXPose46,
	sUnownXPose47,
	sUnownXPose48,
	sUnownXPose49,
	sUnownXPose1,
	sUnownXPose2,
	sUnownXPose3,
	sUnownXPose4,
	sUnownXPose5,
	sUnownXPose6,
	sUnownXPose7,
	sUnownXPose8,
	sUnownXPose1,
	sUnownXPose2,
	sUnownXPose3,
	sUnownXPose4,
	sUnownXPose5,
	sUnownXPose6,
	sUnownXPose7,
	sUnownXPose8,
	sUnownXPose1,
	sUnownXPose2,
	sUnownXPose3,
	sUnownXPose4,
	sUnownXPose5,
	sUnownXPose6,
	sUnownXPose7,
	sUnownXPose8,
	sUnownXPose1,
	sUnownXPose2,
	sUnownXPose3,
	sUnownXPose4,
	sUnownXPose5,
	sUnownXPose6,
	sUnownXPose7,
	sUnownXPose8,
	sUnownXPose1,
	sUnownXPose2,
	sUnownXPose3,
	sUnownXPose4,
	sUnownXPose5,
	sUnownXPose6,
	sUnownXPose7,
	sUnownXPose8,
	sUnownXPose1,
	sUnownXPose2,
	sUnownXPose3,
	sUnownXPose4,
	sUnownXPose5,
	sUnownXPose6,
	sUnownXPose7,
	sUnownXPose8,
};

static const struct PositionSets sAxPositionsUnownX[] = {
	[0] = { .set = { {-1, -12}, {-6, -16}, {4, -16}, {-1, -11} } },
	[1] = { .set = { {0, -12}, {2, -17}, {-5, -15}, {-2, -11} } },
	[2] = { .set = { {1, -12}, {-1, -17}, {-4, -14}, {-1, -11} } },
	[3] = { .set = { {0, -13}, {-4, -17}, {2, -15}, {-1, -11} } },
	[4] = { .set = { {-1, -13}, {4, -16}, {-6, -16}, {-1, -12} } },
	[5] = { .set = { {-2, -13}, {2, -17}, {-4, -15}, {-1, -11} } },
	[6] = { .set = { {-3, -12}, {-1, -17}, {2, -14}, {-1, -11} } },
	[7] = { .set = { {-2, -12}, {-4, -17}, {3, -15}, {0, -11} } },
	[8] = { .set = { {-1, -12}, {-6, -16}, {4, -16}, {-1, -11} } },
	[9] = { .set = { {0, -12}, {2, -17}, {-5, -15}, {-2, -11} } },
	[10] = { .set = { {1, -12}, {-1, -17}, {-4, -14}, {-1, -11} } },
	[11] = { .set = { {0, -13}, {-4, -17}, {2, -15}, {-1, -11} } },
	[12] = { .set = { {-1, -13}, {4, -16}, {-6, -16}, {-1, -12} } },
	[13] = { .set = { {-2, -13}, {2, -17}, {-4, -15}, {-1, -11} } },
	[14] = { .set = { {-3, -12}, {-1, -17}, {2, -14}, {-1, -11} } },
	[15] = { .set = { {-2, -12}, {-4, -17}, {3, -15}, {0, -11} } },
	[16] = { .set = { {-1, -12}, {-6, -16}, {4, -16}, {-1, -11} } },
	[17] = { .set = { {0, -12}, {2, -17}, {-5, -15}, {-2, -11} } },
	[18] = { .set = { {1, -12}, {-1, -17}, {-4, -14}, {-1, -11} } },
	[19] = { .set = { {0, -13}, {-4, -17}, {2, -15}, {-1, -11} } },
	[20] = { .set = { {-1, -13}, {4, -16}, {-6, -16}, {-1, -12} } },
	[21] = { .set = { {-2, -13}, {2, -17}, {-4, -15}, {-1, -11} } },
	[22] = { .set = { {-3, -12}, {-1, -17}, {2, -14}, {-1, -11} } },
	[23] = { .set = { {-2, -12}, {-4, -17}, {3, -15}, {0, -11} } },
	[24] = { .set = { {-1, -12}, {-6, -16}, {4, -16}, {-1, -11} } },
	[25] = { .set = { {0, -12}, {2, -17}, {-5, -15}, {-2, -11} } },
	[26] = { .set = { {1, -12}, {-1, -17}, {-4, -14}, {-1, -11} } },
	[27] = { .set = { {0, -13}, {-4, -17}, {2, -15}, {-1, -11} } },
	[28] = { .set = { {-1, -13}, {4, -16}, {-6, -16}, {-1, -12} } },
	[29] = { .set = { {-2, -13}, {2, -17}, {-4, -15}, {-1, -11} } },
	[30] = { .set = { {-3, -12}, {-1, -17}, {2, -14}, {-1, -11} } },
	[31] = { .set = { {-2, -12}, {-4, -17}, {3, -15}, {0, -11} } },
	[32] = { .set = { {-1, -12}, {-6, -16}, {4, -16}, {-1, -11} } },
	[33] = { .set = { {0, -12}, {2, -17}, {-5, -15}, {-2, -11} } },
	[34] = { .set = { {1, -12}, {-1, -17}, {-4, -14}, {-1, -11} } },
	[35] = { .set = { {0, -13}, {-4, -17}, {2, -15}, {-1, -11} } },
	[36] = { .set = { {-1, -13}, {4, -16}, {-6, -16}, {-1, -12} } },
	[37] = { .set = { {-2, -13}, {2, -17}, {-4, -15}, {-1, -11} } },
	[38] = { .set = { {-3, -12}, {-1, -17}, {2, -14}, {-1, -11} } },
	[39] = { .set = { {-2, -12}, {-4, -17}, {3, -15}, {0, -11} } },
	[40] = { .set = { {-1, -12}, {-6, -16}, {4, -16}, {-1, -11} } },
	[41] = { .set = { {-1, -12}, {-6, -16}, {4, -16}, {-1, -11} } },
	[42] = { .set = { {0, -13}, {1, -17}, {-5, -14}, {-1, -12} } },
	[43] = { .set = { {1, -13}, {-2, -17}, {-5, -13}, {-1, -11} } },
	[44] = { .set = { {-1, -14}, {-5, -17}, {2, -16}, {-1, -12} } },
	[45] = { .set = { {-1, -14}, {4, -15}, {-6, -16}, {-1, -11} } },
	[46] = { .set = { {-2, -15}, {2, -18}, {-5, -17}, {-2, -13} } },
	[47] = { .set = { {-3, -13}, {0, -17}, {3, -13}, {-1, -11} } },
	[48] = { .set = { {-2, -13}, {-3, -17}, {3, -14}, {-1, -12} } },
	[49] = { .set = { {-1, -12}, {-6, -16}, {4, -16}, {-1, -11} } },
	[50] = { .set = { {0, -12}, {2, -17}, {-5, -15}, {-2, -11} } },
	[51] = { .set = { {1, -12}, {-1, -17}, {-4, -14}, {-1, -11} } },
	[52] = { .set = { {0, -13}, {-4, -17}, {2, -15}, {-1, -11} } },
	[53] = { .set = { {-1, -13}, {4, -16}, {-6, -16}, {-1, -12} } },
	[54] = { .set = { {-2, -13}, {2, -17}, {-4, -15}, {-1, -11} } },
	[55] = { .set = { {-3, -12}, {-1, -17}, {2, -14}, {-1, -11} } },
	[56] = { .set = { {-2, -12}, {-4, -17}, {3, -15}, {0, -11} } },
	[57] = { .set = { {-1, -12}, {-6, -16}, {4, -16}, {-1, -11} } },
	[58] = { .set = { {0, -12}, {2, -17}, {-5, -15}, {-2, -11} } },
	[59] = { .set = { {1, -12}, {-1, -17}, {-4, -14}, {-1, -11} } },
	[60] = { .set = { {0, -13}, {-4, -17}, {2, -15}, {-1, -11} } },
	[61] = { .set = { {-1, -13}, {4, -16}, {-6, -16}, {-1, -12} } },
	[62] = { .set = { {-2, -13}, {2, -17}, {-4, -15}, {-1, -11} } },
	[63] = { .set = { {-3, -12}, {-1, -17}, {2, -14}, {-1, -11} } },
	[64] = { .set = { {-2, -12}, {-4, -17}, {3, -15}, {0, -11} } },
	[65] = { .set = { {-1, -12}, {-6, -16}, {4, -16}, {-1, -11} } },
	[66] = { .set = { {0, -12}, {2, -17}, {-5, -15}, {-2, -11} } },
	[67] = { .set = { {1, -12}, {-1, -17}, {-4, -14}, {-1, -11} } },
	[68] = { .set = { {0, -13}, {-4, -17}, {2, -15}, {-1, -11} } },
	[69] = { .set = { {-1, -13}, {4, -16}, {-6, -16}, {-1, -12} } },
	[70] = { .set = { {-2, -13}, {2, -17}, {-4, -15}, {-1, -11} } },
	[71] = { .set = { {-3, -12}, {-1, -17}, {2, -14}, {-1, -11} } },
	[72] = { .set = { {-2, -12}, {-4, -17}, {3, -15}, {0, -11} } },
	[73] = { .set = { {-1, -12}, {-6, -16}, {4, -16}, {-1, -11} } },
	[74] = { .set = { {0, -12}, {2, -17}, {-5, -15}, {-2, -11} } },
	[75] = { .set = { {1, -12}, {-1, -17}, {-4, -14}, {-1, -11} } },
	[76] = { .set = { {0, -13}, {-4, -17}, {2, -15}, {-1, -11} } },
	[77] = { .set = { {-1, -13}, {4, -16}, {-6, -16}, {-1, -12} } },
	[78] = { .set = { {-2, -13}, {2, -17}, {-4, -15}, {-1, -11} } },
	[79] = { .set = { {-3, -12}, {-1, -17}, {2, -14}, {-1, -11} } },
	[80] = { .set = { {-2, -12}, {-4, -17}, {3, -15}, {0, -11} } },
	[81] = { .set = { {-1, -12}, {-6, -16}, {4, -16}, {-1, -11} } },
	[82] = { .set = { {0, -12}, {2, -17}, {-5, -15}, {-2, -11} } },
	[83] = { .set = { {1, -12}, {-1, -17}, {-4, -14}, {-1, -11} } },
	[84] = { .set = { {0, -13}, {-4, -17}, {2, -15}, {-1, -11} } },
	[85] = { .set = { {-1, -13}, {4, -16}, {-6, -16}, {-1, -12} } },
	[86] = { .set = { {-2, -13}, {2, -17}, {-4, -15}, {-1, -11} } },
	[87] = { .set = { {-3, -12}, {-1, -17}, {2, -14}, {-1, -11} } },
	[88] = { .set = { {-2, -12}, {-4, -17}, {3, -15}, {0, -11} } },
	[89] = { .set = { {-1, -12}, {-6, -16}, {4, -16}, {-1, -11} } },
	[90] = { .set = { {0, -12}, {2, -17}, {-5, -15}, {-2, -11} } },
	[91] = { .set = { {1, -12}, {-1, -17}, {-4, -14}, {-1, -11} } },
	[92] = { .set = { {0, -13}, {-4, -17}, {2, -15}, {-1, -11} } },
	[93] = { .set = { {-1, -13}, {4, -16}, {-6, -16}, {-1, -12} } },
	[94] = { .set = { {-2, -13}, {2, -17}, {-4, -15}, {-1, -11} } },
	[95] = { .set = { {-3, -12}, {-1, -17}, {2, -14}, {-1, -11} } },
	[96] = { .set = { {-2, -12}, {-4, -17}, {3, -15}, {0, -11} } },
};

static const ax_anim *const sUnownXAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02475),
	AX_ANIM_PTR(gAxSharedAnim_02478),
	AX_ANIM_PTR(gAxSharedAnim_02528),
	AX_ANIM_PTR(gAxSharedAnim_02540),
	AX_ANIM_PTR(gAxSharedAnim_02543),
	AX_ANIM_PTR(gAxSharedAnim_02544),
	AX_ANIM_PTR(gAxSharedAnim_02549),
	AX_ANIM_PTR(gAxSharedAnim_02552),
};

static const ax_anim *const sUnownXAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_02144),
	AX_ANIM_PTR(gAxSharedAnim_02232),
	AX_ANIM_PTR(gAxSharedAnim_00150),
	AX_ANIM_PTR(gAxSharedAnim_00226),
	AX_ANIM_PTR(gAxSharedAnim_00317),
	AX_ANIM_PTR(gAxSharedAnim_00394),
	AX_ANIM_PTR(gAxSharedAnim_00486),
	AX_ANIM_PTR(gAxSharedAnim_00569),
};

static const ax_anim *const sUnownXAnimTable3[] = {
	AX_ANIM_PTR(gAxSharedAnim_00666),
	AX_ANIM_PTR(gAxSharedAnim_00787),
	AX_ANIM_PTR(gAxSharedAnim_00922),
	AX_ANIM_PTR(gAxSharedAnim_01066),
	AX_ANIM_PTR(gAxSharedAnim_01207),
	AX_ANIM_PTR(gAxSharedAnim_01330),
	AX_ANIM_PTR(gAxSharedAnim_01431),
	AX_ANIM_PTR(gAxSharedAnim_01492),
};

static const ax_anim *const sUnownXAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_01573),
	AX_ANIM_PTR(gAxSharedAnim_01633),
	AX_ANIM_PTR(gAxSharedAnim_01684),
	AX_ANIM_PTR(gAxSharedAnim_01726),
	AX_ANIM_PTR(gAxSharedAnim_01763),
	AX_ANIM_PTR(gAxSharedAnim_01794),
	AX_ANIM_PTR(gAxSharedAnim_01821),
	AX_ANIM_PTR(gAxSharedAnim_01824),
};

static const ax_anim *const sUnownXAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_01840),
	AX_ANIM_PTR(gAxSharedAnim_01855),
	AX_ANIM_PTR(gAxSharedAnim_01869),
	AX_ANIM_PTR(gAxSharedAnim_01880),
	AX_ANIM_PTR(gAxSharedAnim_01886),
	AX_ANIM_PTR(gAxSharedAnim_01895),
	AX_ANIM_PTR(gAxSharedAnim_01900),
	AX_ANIM_PTR(gAxSharedAnim_01903),
};

static const ax_anim *const sUnownXAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
};

static const ax_anim *const sUnownXAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_01921),
	AX_ANIM_PTR(gAxSharedAnim_01924),
	AX_ANIM_PTR(gAxSharedAnim_01935),
	AX_ANIM_PTR(gAxSharedAnim_01937),
	AX_ANIM_PTR(gAxSharedAnim_01947),
	AX_ANIM_PTR(gAxSharedAnim_01957),
	AX_ANIM_PTR(gAxSharedAnim_01960),
	AX_ANIM_PTR(gAxSharedAnim_01975),
};

static const ax_anim *const sUnownXAnimTable8[] = {
	AX_ANIM_PTR(gAxSharedAnim_02320),
	AX_ANIM_PTR(gAxSharedAnim_02321),
	AX_ANIM_PTR(gAxSharedAnim_02322),
	AX_ANIM_PTR(gAxSharedAnim_02323),
	AX_ANIM_PTR(gAxSharedAnim_02324),
	AX_ANIM_PTR(gAxSharedAnim_02325),
	AX_ANIM_PTR(gAxSharedAnim_02326),
	AX_ANIM_PTR(gAxSharedAnim_02327),
};

static const ax_anim *const sUnownXAnimTable9[] = {
	AX_ANIM_PTR(gAxSharedAnim_02011),
	AX_ANIM_PTR(gAxSharedAnim_02016),
	AX_ANIM_PTR(gAxSharedAnim_02019),
	AX_ANIM_PTR(gAxSharedAnim_02025),
	AX_ANIM_PTR(gAxSharedAnim_02032),
	AX_ANIM_PTR(gAxSharedAnim_02037),
	AX_ANIM_PTR(gAxSharedAnim_02040),
	AX_ANIM_PTR(gAxSharedAnim_02051),
};

static const ax_anim *const sUnownXAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_02055),
	AX_ANIM_PTR(gAxSharedAnim_02059),
	AX_ANIM_PTR(gAxSharedAnim_02066),
	AX_ANIM_PTR(gAxSharedAnim_02072),
	AX_ANIM_PTR(gAxSharedAnim_02073),
	AX_ANIM_PTR(gAxSharedAnim_02078),
	AX_ANIM_PTR(gAxSharedAnim_02082),
	AX_ANIM_PTR(gAxSharedAnim_02085),
};

static const ax_anim *const sUnownXAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_02098),
	AX_ANIM_PTR(gAxSharedAnim_02104),
	AX_ANIM_PTR(gAxSharedAnim_02108),
	AX_ANIM_PTR(gAxSharedAnim_02118),
	AX_ANIM_PTR(gAxSharedAnim_02125),
	AX_ANIM_PTR(gAxSharedAnim_02131),
	AX_ANIM_PTR(gAxSharedAnim_02139),
	AX_ANIM_PTR(gAxSharedAnim_02145),
};

static const ax_anim *const sUnownXAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_02158),
	AX_ANIM_PTR(gAxSharedAnim_02167),
	AX_ANIM_PTR(gAxSharedAnim_02169),
	AX_ANIM_PTR(gAxSharedAnim_02174),
	AX_ANIM_PTR(gAxSharedAnim_02196),
	AX_ANIM_PTR(gAxSharedAnim_02202),
	AX_ANIM_PTR(gAxSharedAnim_02205),
	AX_ANIM_PTR(gAxSharedAnim_02214),
};

static const ax_anim *const sUnownXAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_02230),
	AX_ANIM_PTR(gAxSharedAnim_02240),
	AX_ANIM_PTR(gAxSharedAnim_02247),
	AX_ANIM_PTR(gAxSharedAnim_02259),
	AX_ANIM_PTR(gAxSharedAnim_02269),
	AX_ANIM_PTR(gAxSharedAnim_02276),
	AX_ANIM_PTR(gAxSharedAnim_02286),
	AX_ANIM_PTR(gAxSharedAnim_02291),
};

static const ax_anim *const *const sAxAnimationsUnownX[] = {
	sUnownXAnimTable1,
	sUnownXAnimTable2,
	sUnownXAnimTable3,
	sUnownXAnimTable4,
	sUnownXAnimTable5,
	sUnownXAnimTable6,
	sUnownXAnimTable7,
	sUnownXAnimTable8,
	sUnownXAnimTable9,
	sUnownXAnimTable10,
	sUnownXAnimTable11,
	sUnownXAnimTable12,
	sUnownXAnimTable13,
};

static const ax_sprite *const sAxSpritesUnownX[] = {
	sUnownXSprites1,
	sUnownXSprites2,
	sUnownXSprites3,
	sUnownXSprites4,
	sUnownXSprites5,
	sUnownXSprites6,
	sUnownXSprites7,
	sUnownXSprites8,
	sUnownXSprites9,
	sUnownXSprites10,
	sUnownXSprites11,
};

static const axmain sAxMainUnownX = {
	.poses = sAxPosesUnownX,
	.animations = sAxAnimationsUnownX,
	.animCount = ARRAY_COUNT(sAxAnimationsUnownX),
	.spriteData = sAxSpritesUnownX,
	.positions = sAxPositionsUnownX,
};
