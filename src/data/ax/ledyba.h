/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainLedyba;
const SiroArchive gAxLedyba = {"SIRO", &sAxMainLedyba};

static const ax_pose sLedybaPose1[] = {
	AX_POSE(0, OAM1(240, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(1, OAM1(232, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose2[] = {
	AX_POSE(4, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose3[] = {
	AX_POSE(5, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose4[] = {
	AX_POSE(6, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose5[] = {
	AX_POSE(7, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose6[] = {
	AX_POSE(8, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose7[] = {
	AX_POSE(9, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose8[] = {
	AX_POSE(10, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose9[] = {
	AX_POSE(11, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose10[] = {
	AX_POSE(12, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(13, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE(14, OAM1(226, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 2)),
	AX_POSE(15, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose11[] = {
	AX_POSE(9, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose12[] = {
	AX_POSE(10, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose13[] = {
	AX_POSE(7, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose14[] = {
	AX_POSE(8, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose15[] = {
	AX_POSE(5, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose16[] = {
	AX_POSE(6, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose35[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(17, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose36[] = {
	AX_POSE(17, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose37[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(17, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose38[] = {
	AX_POSE(17, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose41[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(19, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose42[] = {
	AX_POSE(19, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose43[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose44[] = {
	AX_POSE(21, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose47[] = {
	AX_POSE(22, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose48[] = {
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose49[] = {
	AX_POSE(24, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose50[] = {
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose53[] = {
	AX_POSE(26, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(27, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose54[] = {
	AX_POSE(27, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose55[] = {
	AX_POSE(28, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose56[] = {
	AX_POSE(29, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose59[] = {
	AX_POSE(30, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(31, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose60[] = {
	AX_POSE(31, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose61[] = {
	AX_POSE(30, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(31, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose62[] = {
	AX_POSE(31, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose65[] = {
	AX_POSE(26, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(27, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose66[] = {
	AX_POSE(27, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose67[] = {
	AX_POSE(28, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose68[] = {
	AX_POSE(29, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose71[] = {
	AX_POSE(22, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose72[] = {
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose73[] = {
	AX_POSE(24, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose74[] = {
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose77[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(19, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose78[] = {
	AX_POSE(19, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose79[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose80[] = {
	AX_POSE(21, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose97[] = {
	AX_POSE(32, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose98[] = {
	AX_POSE(33, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose99[] = {
	AX_POSE(34, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose100[] = {
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose101[] = {
	AX_POSE(36, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose102[] = {
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose103[] = {
	AX_POSE(34, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose104[] = {
	AX_POSE(33, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose105[] = {
	AX_POSE(37, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose106[] = {
	AX_POSE(38, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose107[] = {
	AX_POSE(39, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose108[] = {
	AX_POSE(40, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose109[] = {
	AX_POSE(41, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose110[] = {
	AX_POSE(42, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose111[] = {
	AX_POSE(43, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose112[] = {
	AX_POSE(42, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose113[] = {
	AX_POSE(41, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose114[] = {
	AX_POSE(40, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose141[] = {
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose142[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose143[] = {
	AX_POSE(31, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose144[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose145[] = {
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose146[] = {
	AX_POSE(19, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose147[] = {
	AX_POSE(32, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose172[] = {
	AX_POSE(33, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose173[] = {
	AX_POSE(34, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose174[] = {
	AX_POSE(35, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose176[] = {
	AX_POSE(35, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose179[] = {
	AX_POSE(44, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose180[] = {
	AX_POSE(45, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose181[] = {
	AX_POSE(46, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose182[] = {
	AX_POSE(47, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose183[] = {
	AX_POSE(48, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose184[] = {
	AX_POSE(47, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose185[] = {
	AX_POSE(46, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLedybaPose186[] = {
	AX_POSE(45, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const u8 sLedybaAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_2_2.lz");
static const u8 sLedybaAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_2_3.lz");
static const u8 sLedybaAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_2_4.lz");
static const u8 sLedybaAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_2_5.lz");
static const u8 sLedybaAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_2_6.lz");
static const u8 sLedybaAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_2_7.lz");
static const u8 sLedybaAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_2_8.lz");
static const u8 sLedybaAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_3_1.lz");
static const u8 sLedybaAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_3_2.lz");
static const u8 sLedybaAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_3_3.lz");
static const u8 sLedybaAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_3_4.lz");
static const u8 sLedybaAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_3_5.lz");
static const u8 sLedybaAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_3_6.lz");
static const u8 sLedybaAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_3_7.lz");
static const u8 sLedybaAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_3_8.lz");
static const u8 sLedybaAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_4_1.lz");
static const u8 sLedybaAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_4_2.lz");
static const u8 sLedybaAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_4_3.lz");
static const u8 sLedybaAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_4_4.lz");
static const u8 sLedybaAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_4_5.lz");
static const u8 sLedybaAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_4_6.lz");
static const u8 sLedybaAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_4_7.lz");
static const u8 sLedybaAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_4_8.lz");
static const u8 sLedybaAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_5_1.lz");
static const u8 sLedybaAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_5_2.lz");
static const u8 sLedybaAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_5_3.lz");
static const u8 sLedybaAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_5_4.lz");
static const u8 sLedybaAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_5_5.lz");
static const u8 sLedybaAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_5_6.lz");
static const u8 sLedybaAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_5_7.lz");
static const u8 sLedybaAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_5_8.lz");
static const u8 sLedybaAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_8_1.lz");
static const u8 sLedybaAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_8_2.lz");
static const u8 sLedybaAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_8_3.lz");
static const u8 sLedybaAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_8_4.lz");
static const u8 sLedybaAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_8_5.lz");
static const u8 sLedybaAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_8_6.lz");
static const u8 sLedybaAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_8_7.lz");
static const u8 sLedybaAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_8_8.lz");
static const u8 sLedybaAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_9_1.lz");
static const u8 sLedybaAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_9_2.lz");
static const u8 sLedybaAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_9_3.lz");
static const u8 sLedybaAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_9_4.lz");
static const u8 sLedybaAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_9_5.lz");
static const u8 sLedybaAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_9_6.lz");
static const u8 sLedybaAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_9_7.lz");
static const u8 sLedybaAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_9_8.lz");
static const u8 sLedybaAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_11_1.lz");
static const u8 sLedybaAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_11_2.lz");
static const u8 sLedybaAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_11_3.lz");
static const u8 sLedybaAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_11_4.lz");
static const u8 sLedybaAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_11_5.lz");
static const u8 sLedybaAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_11_6.lz");
static const u8 sLedybaAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_11_7.lz");
static const u8 sLedybaAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ledyba/sLedybaAnims_11_8.lz");

static const u8 sLedybaGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_1.4bpp.lz");
static const ax_sprite sLedybaSprites1[] = {
	{sLedybaGfx1, ARRAY_COUNT(sLedybaGfx1)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_2.4bpp.lz");
static const ax_sprite sLedybaSprites2[] = {
	{sLedybaGfx2, ARRAY_COUNT(sLedybaGfx2)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_3.4bpp.lz");
static const ax_sprite sLedybaSprites3[] = {
	{sLedybaGfx3, ARRAY_COUNT(sLedybaGfx3)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_4.4bpp.lz");
static const ax_sprite sLedybaSprites4[] = {
	{sLedybaGfx4, ARRAY_COUNT(sLedybaGfx4)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_5.4bpp.lz");
static const ax_sprite sLedybaSprites5[] = {
	{sLedybaGfx5, ARRAY_COUNT(sLedybaGfx5)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_6.4bpp.lz");
static const ax_sprite sLedybaSprites6[] = {
	{sLedybaGfx6, ARRAY_COUNT(sLedybaGfx6)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_7.4bpp.lz");
static const ax_sprite sLedybaSprites7[] = {
	{sLedybaGfx7, ARRAY_COUNT(sLedybaGfx7)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_8.4bpp.lz");
static const ax_sprite sLedybaSprites8[] = {
	{sLedybaGfx8, ARRAY_COUNT(sLedybaGfx8)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_9.4bpp.lz");
static const ax_sprite sLedybaSprites9[] = {
	{sLedybaGfx9, ARRAY_COUNT(sLedybaGfx9)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_10.4bpp.lz");
static const ax_sprite sLedybaSprites10[] = {
	{sLedybaGfx10, ARRAY_COUNT(sLedybaGfx10)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_11.4bpp.lz");
static const ax_sprite sLedybaSprites11[] = {
	{sLedybaGfx11, ARRAY_COUNT(sLedybaGfx11)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_12.4bpp.lz");
static const ax_sprite sLedybaSprites12[] = {
	{sLedybaGfx12, ARRAY_COUNT(sLedybaGfx12)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_13.4bpp.lz");
static const ax_sprite sLedybaSprites13[] = {
	{sLedybaGfx13, ARRAY_COUNT(sLedybaGfx13)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_14.4bpp.lz");
static const ax_sprite sLedybaSprites14[] = {
	{sLedybaGfx14, ARRAY_COUNT(sLedybaGfx14)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_15.4bpp.lz");
static const ax_sprite sLedybaSprites15[] = {
	{sLedybaGfx15, ARRAY_COUNT(sLedybaGfx15)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_16.4bpp.lz");
static const ax_sprite sLedybaSprites16[] = {
	{sLedybaGfx16, ARRAY_COUNT(sLedybaGfx16)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_17.4bpp.lz");
static const u8 sLedybaGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_17_1.4bpp.lz");
static const u8 sLedybaGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_17_2.4bpp.lz");
static const u8 sLedybaGfx17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_17_3.4bpp.lz");
static const ax_sprite sLedybaSprites17[] = {
	{sLedybaGfx17, ARRAY_COUNT(sLedybaGfx17)}, 
	{NULL, 96}, 
	{sLedybaGfx17_1, ARRAY_COUNT(sLedybaGfx17_1)}, 
	{NULL, 96}, 
	{sLedybaGfx17_2, ARRAY_COUNT(sLedybaGfx17_2)}, 
	{NULL, 32}, 
	{sLedybaGfx17_3, ARRAY_COUNT(sLedybaGfx17_3)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_18.4bpp.lz");
static const u8 sLedybaGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_18_1.4bpp.lz");
static const ax_sprite sLedybaSprites18[] = {
	{NULL, 32}, 
	{sLedybaGfx18, ARRAY_COUNT(sLedybaGfx18)}, 
	{NULL, 32}, 
	{sLedybaGfx18_1, ARRAY_COUNT(sLedybaGfx18_1)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_19.4bpp.lz");
static const u8 sLedybaGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_19_1.4bpp.lz");
static const u8 sLedybaGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_19_2.4bpp.lz");
static const u8 sLedybaGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_19_3.4bpp.lz");
static const ax_sprite sLedybaSprites19[] = {
	{NULL, 32}, 
	{sLedybaGfx19, ARRAY_COUNT(sLedybaGfx19)}, 
	{NULL, 64}, 
	{sLedybaGfx19_1, ARRAY_COUNT(sLedybaGfx19_1)}, 
	{NULL, 64}, 
	{sLedybaGfx19_2, ARRAY_COUNT(sLedybaGfx19_2)}, 
	{NULL, 32}, 
	{sLedybaGfx19_3, ARRAY_COUNT(sLedybaGfx19_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sLedybaGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_20.4bpp.lz");
static const u8 sLedybaGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_20_1.4bpp.lz");
static const ax_sprite sLedybaSprites20[] = {
	{sLedybaGfx20, ARRAY_COUNT(sLedybaGfx20)}, 
	{NULL, 32}, 
	{sLedybaGfx20_1, ARRAY_COUNT(sLedybaGfx20_1)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_21.4bpp.lz");
static const u8 sLedybaGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_21_1.4bpp.lz");
static const ax_sprite sLedybaSprites21[] = {
	{NULL, 128}, 
	{sLedybaGfx21, ARRAY_COUNT(sLedybaGfx21)}, 
	{NULL, 64}, 
	{sLedybaGfx21_1, ARRAY_COUNT(sLedybaGfx21_1)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_22.4bpp.lz");
static const u8 sLedybaGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_22_1.4bpp.lz");
static const ax_sprite sLedybaSprites22[] = {
	{sLedybaGfx22, ARRAY_COUNT(sLedybaGfx22)}, 
	{NULL, 32}, 
	{sLedybaGfx22_1, ARRAY_COUNT(sLedybaGfx22_1)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_23.4bpp.lz");
static const u8 sLedybaGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_23_1.4bpp.lz");
static const u8 sLedybaGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_23_2.4bpp.lz");
static const u8 sLedybaGfx23_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_23_3.4bpp.lz");
static const ax_sprite sLedybaSprites23[] = {
	{sLedybaGfx23, ARRAY_COUNT(sLedybaGfx23)}, 
	{NULL, 32}, 
	{sLedybaGfx23_1, ARRAY_COUNT(sLedybaGfx23_1)}, 
	{NULL, 64}, 
	{sLedybaGfx23_2, ARRAY_COUNT(sLedybaGfx23_2)}, 
	{NULL, 32}, 
	{sLedybaGfx23_3, ARRAY_COUNT(sLedybaGfx23_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sLedybaGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_24.4bpp.lz");
static const ax_sprite sLedybaSprites24[] = {
	{sLedybaGfx24, ARRAY_COUNT(sLedybaGfx24)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sLedybaGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_25.4bpp.lz");
static const u8 sLedybaGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_25_1.4bpp.lz");
static const ax_sprite sLedybaSprites25[] = {
	{NULL, 128}, 
	{sLedybaGfx25, ARRAY_COUNT(sLedybaGfx25)}, 
	{NULL, 64}, 
	{sLedybaGfx25_1, ARRAY_COUNT(sLedybaGfx25_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sLedybaGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_26.4bpp.lz");
static const u8 sLedybaGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_26_1.4bpp.lz");
static const u8 sLedybaGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_26_2.4bpp.lz");
static const ax_sprite sLedybaSprites26[] = {
	{NULL, 32}, 
	{sLedybaGfx26, ARRAY_COUNT(sLedybaGfx26)}, 
	{NULL, 32}, 
	{sLedybaGfx26_1, ARRAY_COUNT(sLedybaGfx26_1)}, 
	{NULL, 32}, 
	{sLedybaGfx26_2, ARRAY_COUNT(sLedybaGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sLedybaGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_27.4bpp.lz");
static const ax_sprite sLedybaSprites27[] = {
	{sLedybaGfx27, ARRAY_COUNT(sLedybaGfx27)}, 
	{NULL, 224}, 
	{NULL, 0}
};
static const u8 sLedybaGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_28.4bpp.lz");
static const u8 sLedybaGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_28_1.4bpp.lz");
static const u8 sLedybaGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_28_2.4bpp.lz");
static const ax_sprite sLedybaSprites28[] = {
	{NULL, 32}, 
	{sLedybaGfx28, ARRAY_COUNT(sLedybaGfx28)}, 
	{NULL, 64}, 
	{sLedybaGfx28_1, ARRAY_COUNT(sLedybaGfx28_1)}, 
	{NULL, 32}, 
	{sLedybaGfx28_2, ARRAY_COUNT(sLedybaGfx28_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sLedybaGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_29.4bpp.lz");
static const u8 sLedybaGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_29_1.4bpp.lz");
static const u8 sLedybaGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_29_2.4bpp.lz");
static const u8 sLedybaGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_29_3.4bpp.lz");
static const ax_sprite sLedybaSprites29[] = {
	{sLedybaGfx29, ARRAY_COUNT(sLedybaGfx29)}, 
	{NULL, 64}, 
	{sLedybaGfx29_1, ARRAY_COUNT(sLedybaGfx29_1)}, 
	{NULL, 64}, 
	{sLedybaGfx29_2, ARRAY_COUNT(sLedybaGfx29_2)}, 
	{NULL, 96}, 
	{sLedybaGfx29_3, ARRAY_COUNT(sLedybaGfx29_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLedybaGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_30.4bpp.lz");
static const ax_sprite sLedybaSprites30[] = {
	{sLedybaGfx30, ARRAY_COUNT(sLedybaGfx30)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_31.4bpp.lz");
static const u8 sLedybaGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_31_1.4bpp.lz");
static const ax_sprite sLedybaSprites31[] = {
	{sLedybaGfx31, ARRAY_COUNT(sLedybaGfx31)}, 
	{NULL, 96}, 
	{sLedybaGfx31_1, ARRAY_COUNT(sLedybaGfx31_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sLedybaGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_32.4bpp.lz");
static const u8 sLedybaGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_32_1.4bpp.lz");
static const ax_sprite sLedybaSprites32[] = {
	{NULL, 32}, 
	{sLedybaGfx32, ARRAY_COUNT(sLedybaGfx32)}, 
	{NULL, 32}, 
	{sLedybaGfx32_1, ARRAY_COUNT(sLedybaGfx32_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sLedybaGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_33.4bpp.lz");
static const ax_sprite sLedybaSprites33[] = {
	{sLedybaGfx33, ARRAY_COUNT(sLedybaGfx33)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sLedybaGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_34.4bpp.lz");
static const u8 sLedybaGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_34_1.4bpp.lz");
static const u8 sLedybaGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_34_2.4bpp.lz");
static const u8 sLedybaGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_34_3.4bpp.lz");
static const ax_sprite sLedybaSprites34[] = {
	{sLedybaGfx34, ARRAY_COUNT(sLedybaGfx34)}, 
	{NULL, 32}, 
	{sLedybaGfx34_1, ARRAY_COUNT(sLedybaGfx34_1)}, 
	{NULL, 32}, 
	{sLedybaGfx34_2, ARRAY_COUNT(sLedybaGfx34_2)}, 
	{NULL, 96}, 
	{sLedybaGfx34_3, ARRAY_COUNT(sLedybaGfx34_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sLedybaGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_35.4bpp.lz");
static const u8 sLedybaGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_35_1.4bpp.lz");
static const u8 sLedybaGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_35_2.4bpp.lz");
static const u8 sLedybaGfx35_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_35_3.4bpp.lz");
static const ax_sprite sLedybaSprites35[] = {
	{sLedybaGfx35, ARRAY_COUNT(sLedybaGfx35)}, 
	{NULL, 32}, 
	{sLedybaGfx35_1, ARRAY_COUNT(sLedybaGfx35_1)}, 
	{NULL, 32}, 
	{sLedybaGfx35_2, ARRAY_COUNT(sLedybaGfx35_2)}, 
	{NULL, 64}, 
	{sLedybaGfx35_3, ARRAY_COUNT(sLedybaGfx35_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sLedybaGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_36.4bpp.lz");
static const u8 sLedybaGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_36_1.4bpp.lz");
static const u8 sLedybaGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_36_2.4bpp.lz");
static const ax_sprite sLedybaSprites36[] = {
	{NULL, 32}, 
	{sLedybaGfx36, ARRAY_COUNT(sLedybaGfx36)}, 
	{NULL, 32}, 
	{sLedybaGfx36_1, ARRAY_COUNT(sLedybaGfx36_1)}, 
	{NULL, 32}, 
	{sLedybaGfx36_2, ARRAY_COUNT(sLedybaGfx36_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sLedybaGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_37.4bpp.lz");
static const ax_sprite sLedybaSprites37[] = {
	{sLedybaGfx37, ARRAY_COUNT(sLedybaGfx37)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sLedybaGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_38.4bpp.lz");
static const ax_sprite sLedybaSprites38[] = {
	{sLedybaGfx38, ARRAY_COUNT(sLedybaGfx38)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_39.4bpp.lz");
static const ax_sprite sLedybaSprites39[] = {
	{sLedybaGfx39, ARRAY_COUNT(sLedybaGfx39)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_40.4bpp.lz");
static const ax_sprite sLedybaSprites40[] = {
	{sLedybaGfx40, ARRAY_COUNT(sLedybaGfx40)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_41.4bpp.lz");
static const ax_sprite sLedybaSprites41[] = {
	{sLedybaGfx41, ARRAY_COUNT(sLedybaGfx41)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_42.4bpp.lz");
static const ax_sprite sLedybaSprites42[] = {
	{sLedybaGfx42, ARRAY_COUNT(sLedybaGfx42)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_43.4bpp.lz");
static const ax_sprite sLedybaSprites43[] = {
	{sLedybaGfx43, ARRAY_COUNT(sLedybaGfx43)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_44.4bpp.lz");
static const ax_sprite sLedybaSprites44[] = {
	{sLedybaGfx44, ARRAY_COUNT(sLedybaGfx44)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_45.4bpp.lz");
static const ax_sprite sLedybaSprites45[] = {
	{sLedybaGfx45, ARRAY_COUNT(sLedybaGfx45)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_46.4bpp.lz");
static const ax_sprite sLedybaSprites46[] = {
	{sLedybaGfx46, ARRAY_COUNT(sLedybaGfx46)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_47.4bpp.lz");
static const ax_sprite sLedybaSprites47[] = {
	{sLedybaGfx47, ARRAY_COUNT(sLedybaGfx47)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_48.4bpp.lz");
static const ax_sprite sLedybaSprites48[] = {
	{sLedybaGfx48, ARRAY_COUNT(sLedybaGfx48)}, 
	{NULL, 0}
};
static const u8 sLedybaGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ledyba/sprite_49.4bpp.lz");
static const ax_sprite sLedybaSprites49[] = {
	{sLedybaGfx49, ARRAY_COUNT(sLedybaGfx49)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesLedyba[] = {
	sLedybaPose1,
	sLedybaPose2,
	sLedybaPose3,
	sLedybaPose4,
	sLedybaPose5,
	sLedybaPose6,
	sLedybaPose7,
	sLedybaPose8,
	sLedybaPose9,
	sLedybaPose10,
	sLedybaPose11,
	sLedybaPose12,
	sLedybaPose13,
	sLedybaPose14,
	sLedybaPose15,
	sLedybaPose16,
	sLedybaPose1,
	sLedybaPose2,
	sLedybaPose3,
	sLedybaPose4,
	sLedybaPose5,
	sLedybaPose6,
	sLedybaPose7,
	sLedybaPose8,
	sLedybaPose9,
	sLedybaPose10,
	sLedybaPose11,
	sLedybaPose12,
	sLedybaPose13,
	sLedybaPose14,
	sLedybaPose15,
	sLedybaPose16,
	sLedybaPose1,
	sLedybaPose2,
	sLedybaPose35,
	sLedybaPose36,
	sLedybaPose37,
	sLedybaPose38,
	sLedybaPose3,
	sLedybaPose4,
	sLedybaPose41,
	sLedybaPose42,
	sLedybaPose43,
	sLedybaPose44,
	sLedybaPose5,
	sLedybaPose6,
	sLedybaPose47,
	sLedybaPose48,
	sLedybaPose49,
	sLedybaPose50,
	sLedybaPose7,
	sLedybaPose8,
	sLedybaPose53,
	sLedybaPose54,
	sLedybaPose55,
	sLedybaPose56,
	sLedybaPose10,
	sLedybaPose9,
	sLedybaPose59,
	sLedybaPose60,
	sLedybaPose61,
	sLedybaPose62,
	sLedybaPose11,
	sLedybaPose12,
	sLedybaPose65,
	sLedybaPose66,
	sLedybaPose67,
	sLedybaPose68,
	sLedybaPose13,
	sLedybaPose14,
	sLedybaPose71,
	sLedybaPose72,
	sLedybaPose73,
	sLedybaPose74,
	sLedybaPose15,
	sLedybaPose16,
	sLedybaPose77,
	sLedybaPose78,
	sLedybaPose79,
	sLedybaPose80,
	sLedybaPose1,
	sLedybaPose2,
	sLedybaPose3,
	sLedybaPose4,
	sLedybaPose5,
	sLedybaPose6,
	sLedybaPose7,
	sLedybaPose8,
	sLedybaPose9,
	sLedybaPose10,
	sLedybaPose11,
	sLedybaPose12,
	sLedybaPose13,
	sLedybaPose14,
	sLedybaPose15,
	sLedybaPose16,
	sLedybaPose97,
	sLedybaPose98,
	sLedybaPose99,
	sLedybaPose100,
	sLedybaPose101,
	sLedybaPose102,
	sLedybaPose103,
	sLedybaPose104,
	sLedybaPose105,
	sLedybaPose106,
	sLedybaPose107,
	sLedybaPose108,
	sLedybaPose109,
	sLedybaPose110,
	sLedybaPose111,
	sLedybaPose112,
	sLedybaPose113,
	sLedybaPose114,
	sLedybaPose1,
	sLedybaPose2,
	sLedybaPose3,
	sLedybaPose4,
	sLedybaPose5,
	sLedybaPose6,
	sLedybaPose7,
	sLedybaPose8,
	sLedybaPose9,
	sLedybaPose10,
	sLedybaPose11,
	sLedybaPose12,
	sLedybaPose13,
	sLedybaPose14,
	sLedybaPose15,
	sLedybaPose16,
	sLedybaPose1,
	sLedybaPose15,
	sLedybaPose13,
	sLedybaPose11,
	sLedybaPose9,
	sLedybaPose7,
	sLedybaPose5,
	sLedybaPose3,
	sLedybaPose36,
	sLedybaPose42,
	sLedybaPose141,
	sLedybaPose142,
	sLedybaPose143,
	sLedybaPose144,
	sLedybaPose145,
	sLedybaPose146,
	sLedybaPose147,
	sLedybaPose1,
	sLedybaPose2,
	sLedybaPose98,
	sLedybaPose3,
	sLedybaPose4,
	sLedybaPose99,
	sLedybaPose5,
	sLedybaPose6,
	sLedybaPose100,
	sLedybaPose7,
	sLedybaPose8,
	sLedybaPose101,
	sLedybaPose9,
	sLedybaPose10,
	sLedybaPose102,
	sLedybaPose11,
	sLedybaPose12,
	sLedybaPose103,
	sLedybaPose13,
	sLedybaPose14,
	sLedybaPose104,
	sLedybaPose15,
	sLedybaPose16,
	sLedybaPose147,
	sLedybaPose172,
	sLedybaPose173,
	sLedybaPose174,
	sLedybaPose101,
	sLedybaPose176,
	sLedybaPose99,
	sLedybaPose98,
	sLedybaPose179,
	sLedybaPose180,
	sLedybaPose181,
	sLedybaPose182,
	sLedybaPose183,
	sLedybaPose184,
	sLedybaPose185,
	sLedybaPose186,
};

static const struct PositionSets sAxPositionsLedyba[] = {
	[0] = { .set = { {-1, -11}, {-11, -9}, {9, -9}, {-1, -10} } },
	[1] = { .set = { {-1, -11}, {-11, -9}, {9, -9}, {-1, -10} } },
	[2] = { .set = { {6, -12}, {10, -12}, {-2, -7}, {-1, -10} } },
	[3] = { .set = { {6, -12}, {10, -12}, {-2, -7}, {-1, -11} } },
	[4] = { .set = { {8, -14}, {5, -14}, {5, -8}, {0, -10} } },
	[5] = { .set = { {8, -14}, {5, -14}, {5, -8}, {0, -11} } },
	[6] = { .set = { {4, -18}, {-1, -18}, {10, -11}, {-2, -12} } },
	[7] = { .set = { {4, -17}, {-1, -16}, {10, -11}, {-1, -13} } },
	[8] = { .set = { {-1, -19}, {5, -14}, {-7, -14}, {-1, -12} } },
	[9] = { .set = { {-1, -19}, {8, -16}, {-10, -16}, {-1, -13} } },
	[10] = { .set = { {-6, -18}, {-1, -18}, {-12, -11}, {0, -12} } },
	[11] = { .set = { {-6, -17}, {-1, -16}, {-12, -11}, {-1, -13} } },
	[12] = { .set = { {-10, -14}, {-7, -14}, {-7, -8}, {-2, -10} } },
	[13] = { .set = { {-10, -14}, {-7, -14}, {-7, -8}, {-2, -11} } },
	[14] = { .set = { {-8, -13}, {-12, -13}, {0, -8}, {-1, -11} } },
	[15] = { .set = { {-8, -13}, {-12, -13}, {0, -8}, {-1, -12} } },
	[16] = { .set = { {-1, -11}, {-11, -9}, {9, -9}, {-1, -10} } },
	[17] = { .set = { {-1, -11}, {-11, -9}, {9, -9}, {-1, -10} } },
	[18] = { .set = { {6, -12}, {10, -12}, {-2, -7}, {-1, -10} } },
	[19] = { .set = { {6, -12}, {10, -12}, {-2, -7}, {-1, -11} } },
	[20] = { .set = { {8, -14}, {5, -14}, {5, -8}, {0, -10} } },
	[21] = { .set = { {8, -14}, {5, -14}, {5, -8}, {0, -11} } },
	[22] = { .set = { {4, -18}, {-1, -18}, {10, -11}, {-2, -12} } },
	[23] = { .set = { {4, -17}, {-1, -16}, {10, -11}, {-1, -13} } },
	[24] = { .set = { {-1, -19}, {5, -14}, {-7, -14}, {-1, -12} } },
	[25] = { .set = { {-1, -19}, {8, -16}, {-10, -16}, {-1, -13} } },
	[26] = { .set = { {-6, -18}, {-1, -18}, {-12, -11}, {0, -12} } },
	[27] = { .set = { {-6, -17}, {-1, -16}, {-12, -11}, {-1, -13} } },
	[28] = { .set = { {-10, -14}, {-7, -14}, {-7, -8}, {-2, -10} } },
	[29] = { .set = { {-10, -14}, {-7, -14}, {-7, -8}, {-2, -11} } },
	[30] = { .set = { {-8, -13}, {-12, -13}, {0, -8}, {-1, -11} } },
	[31] = { .set = { {-8, -13}, {-12, -13}, {0, -8}, {-1, -12} } },
	[32] = { .set = { {-1, -11}, {-11, -9}, {9, -9}, {-1, -10} } },
	[33] = { .set = { {-1, -11}, {-11, -9}, {9, -9}, {-1, -10} } },
	[34] = { .set = { {3, -10}, {1, -3}, {10, -14}, {0, -11} } },
	[35] = { .set = { {3, -10}, {1, -3}, {10, -14}, {0, -11} } },
	[36] = { .set = { {-4, -10}, {-2, -3}, {-11, -14}, {-1, -11} } },
	[37] = { .set = { {-4, -10}, {-2, -3}, {-11, -14}, {-1, -11} } },
	[38] = { .set = { {6, -12}, {10, -12}, {-2, -7}, {-1, -10} } },
	[39] = { .set = { {6, -12}, {10, -12}, {-2, -7}, {-1, -11} } },
	[40] = { .set = { {3, -10}, {4, -4}, {-7, -15}, {-1, -9} } },
	[41] = { .set = { {3, -10}, {4, -4}, {-7, -15}, {-1, -9} } },
	[42] = { .set = { {6, -13}, {7, -22}, {8, -9}, {-3, -10} } },
	[43] = { .set = { {6, -13}, {7, -22}, {8, -9}, {-3, -10} } },
	[44] = { .set = { {8, -14}, {5, -14}, {5, -8}, {0, -10} } },
	[45] = { .set = { {8, -14}, {5, -14}, {5, -8}, {0, -11} } },
	[46] = { .set = { {7, -11}, {9, -5}, {-3, -15}, {1, -10} } },
	[47] = { .set = { {7, -11}, {9, -5}, {-3, -15}, {1, -10} } },
	[48] = { .set = { {8, -18}, {1, -23}, {11, -14}, {0, -9} } },
	[49] = { .set = { {8, -18}, {1, -23}, {11, -14}, {0, -9} } },
	[50] = { .set = { {4, -18}, {-1, -18}, {10, -11}, {-2, -12} } },
	[51] = { .set = { {4, -17}, {-1, -16}, {10, -11}, {-1, -13} } },
	[52] = { .set = { {6, -16}, {11, -13}, {8, -14}, {-1, -12} } },
	[53] = { .set = { {6, -16}, {11, -13}, {8, -14}, {-1, -12} } },
	[54] = { .set = { {0, -18}, {-9, -21}, {2, -17}, {-1, -12} } },
	[55] = { .set = { {0, -18}, {-9, -21}, {2, -17}, {-1, -12} } },
	[56] = { .set = { {-1, -19}, {8, -16}, {-10, -16}, {-1, -13} } },
	[57] = { .set = { {-1, -19}, {5, -14}, {-7, -14}, {-1, -12} } },
	[58] = { .set = { {-3, -19}, {-10, -18}, {-11, -12}, {-1, -13} } },
	[59] = { .set = { {-3, -19}, {-10, -18}, {-11, -12}, {-1, -13} } },
	[60] = { .set = { {2, -19}, {9, -18}, {10, -12}, {0, -13} } },
	[61] = { .set = { {2, -19}, {9, -18}, {10, -12}, {0, -13} } },
	[62] = { .set = { {-6, -18}, {-1, -18}, {-12, -11}, {0, -12} } },
	[63] = { .set = { {-6, -17}, {-1, -16}, {-12, -11}, {-1, -13} } },
	[64] = { .set = { {-8, -16}, {-13, -13}, {-10, -14}, {-1, -12} } },
	[65] = { .set = { {-8, -16}, {-13, -13}, {-10, -14}, {-1, -12} } },
	[66] = { .set = { {-2, -18}, {7, -21}, {-4, -17}, {-1, -12} } },
	[67] = { .set = { {-2, -18}, {7, -21}, {-4, -17}, {-1, -12} } },
	[68] = { .set = { {-10, -14}, {-7, -14}, {-7, -8}, {-2, -10} } },
	[69] = { .set = { {-10, -14}, {-7, -14}, {-7, -8}, {-2, -11} } },
	[70] = { .set = { {-9, -11}, {-11, -5}, {1, -15}, {-3, -10} } },
	[71] = { .set = { {-9, -11}, {-11, -5}, {1, -15}, {-3, -10} } },
	[72] = { .set = { {-10, -18}, {-3, -23}, {-13, -14}, {-2, -9} } },
	[73] = { .set = { {-10, -18}, {-3, -23}, {-13, -14}, {-2, -9} } },
	[74] = { .set = { {-8, -13}, {-12, -13}, {0, -8}, {-1, -11} } },
	[75] = { .set = { {-8, -13}, {-12, -13}, {0, -8}, {-1, -12} } },
	[76] = { .set = { {-5, -10}, {-6, -4}, {5, -15}, {-1, -9} } },
	[77] = { .set = { {-5, -10}, {-6, -4}, {5, -15}, {-1, -9} } },
	[78] = { .set = { {-8, -13}, {-9, -22}, {-10, -9}, {1, -10} } },
	[79] = { .set = { {-8, -13}, {-9, -22}, {-10, -9}, {1, -10} } },
	[80] = { .set = { {-1, -11}, {-11, -9}, {9, -9}, {-1, -10} } },
	[81] = { .set = { {-1, -11}, {-11, -9}, {9, -9}, {-1, -10} } },
	[82] = { .set = { {6, -12}, {10, -12}, {-2, -7}, {-1, -10} } },
	[83] = { .set = { {6, -12}, {10, -12}, {-2, -7}, {-1, -11} } },
	[84] = { .set = { {8, -14}, {5, -14}, {5, -8}, {0, -10} } },
	[85] = { .set = { {8, -14}, {5, -14}, {5, -8}, {0, -11} } },
	[86] = { .set = { {4, -18}, {-1, -18}, {10, -11}, {-2, -12} } },
	[87] = { .set = { {4, -17}, {-1, -16}, {10, -11}, {-1, -13} } },
	[88] = { .set = { {-1, -19}, {5, -14}, {-7, -14}, {-1, -12} } },
	[89] = { .set = { {-1, -19}, {8, -16}, {-10, -16}, {-1, -13} } },
	[90] = { .set = { {-6, -18}, {-1, -18}, {-12, -11}, {0, -12} } },
	[91] = { .set = { {-6, -17}, {-1, -16}, {-12, -11}, {-1, -13} } },
	[92] = { .set = { {-10, -14}, {-7, -14}, {-7, -8}, {-2, -10} } },
	[93] = { .set = { {-10, -14}, {-7, -14}, {-7, -8}, {-2, -11} } },
	[94] = { .set = { {-8, -13}, {-12, -13}, {0, -8}, {-1, -11} } },
	[95] = { .set = { {-8, -13}, {-12, -13}, {0, -8}, {-1, -12} } },
	[96] = { .set = { {-1, -8}, {-11, -13}, {9, -13}, {-1, -6} } },
	[97] = { .set = { {5, -10}, {7, -17}, {-7, -9}, {0, -7} } },
	[98] = { .set = { {7, -14}, {2, -15}, {2, -11}, {-2, -8} } },
	[99] = { .set = { {2, -17}, {-6, -19}, {9, -14}, {-2, -10} } },
	[100] = { .set = { {-1, -18}, {8, -17}, {-11, -17}, {-1, -9} } },
	[101] = { .set = { {-4, -17}, {4, -19}, {-11, -14}, {0, -10} } },
	[102] = { .set = { {-9, -15}, {-4, -16}, {-4, -12}, {0, -9} } },
	[103] = { .set = { {-6, -10}, {-8, -17}, {6, -9}, {-1, -7} } },
	[104] = { .set = { {-1, 0}, {-10, 0}, {8, 0}, {-1, -7} } },
	[105] = { .set = { {-1, 0}, {-9, 0}, {7, 0}, {-1, -8} } },
	[106] = { .set = { {0, -4}, {-11, -3}, {11, -3}, {0, -8} } },
	[107] = { .set = { {8, -3}, {9, -9}, {-3, -2}, {1, -11} } },
	[108] = { .set = { {11, -5}, {6, -6}, {3, -2}, {2, -8} } },
	[109] = { .set = { {7, -10}, {-3, -10}, {11, -6}, {0, -9} } },
	[110] = { .set = { {0, -9}, {8, -9}, {-8, -9}, {0, -7} } },
	[111] = { .set = { {-8, -10}, {2, -10}, {-12, -6}, {-1, -9} } },
	[112] = { .set = { {-12, -5}, {-7, -6}, {-4, -2}, {-3, -8} } },
	[113] = { .set = { {-9, -3}, {-10, -9}, {2, -2}, {-2, -11} } },
	[114] = { .set = { {-1, -11}, {-11, -9}, {9, -9}, {-1, -10} } },
	[115] = { .set = { {-1, -11}, {-11, -9}, {9, -9}, {-1, -10} } },
	[116] = { .set = { {6, -12}, {10, -12}, {-2, -7}, {-1, -10} } },
	[117] = { .set = { {6, -12}, {10, -12}, {-2, -7}, {-1, -11} } },
	[118] = { .set = { {8, -14}, {5, -14}, {5, -8}, {0, -10} } },
	[119] = { .set = { {8, -14}, {5, -14}, {5, -8}, {0, -11} } },
	[120] = { .set = { {4, -18}, {-1, -18}, {10, -11}, {-2, -12} } },
	[121] = { .set = { {4, -17}, {-1, -16}, {10, -11}, {-1, -13} } },
	[122] = { .set = { {-1, -19}, {5, -14}, {-7, -14}, {-1, -12} } },
	[123] = { .set = { {-1, -19}, {8, -16}, {-10, -16}, {-1, -13} } },
	[124] = { .set = { {-6, -18}, {-1, -18}, {-12, -11}, {0, -12} } },
	[125] = { .set = { {-6, -17}, {-1, -16}, {-12, -11}, {-1, -13} } },
	[126] = { .set = { {-10, -14}, {-7, -14}, {-7, -8}, {-2, -10} } },
	[127] = { .set = { {-10, -14}, {-7, -14}, {-7, -8}, {-2, -11} } },
	[128] = { .set = { {-8, -13}, {-12, -13}, {0, -8}, {-1, -11} } },
	[129] = { .set = { {-8, -13}, {-12, -13}, {0, -8}, {-1, -12} } },
	[130] = { .set = { {-1, -11}, {-11, -9}, {9, -9}, {-1, -10} } },
	[131] = { .set = { {-8, -13}, {-12, -13}, {0, -8}, {-1, -11} } },
	[132] = { .set = { {-10, -14}, {-7, -14}, {-7, -8}, {-2, -10} } },
	[133] = { .set = { {-6, -18}, {-1, -18}, {-12, -11}, {0, -12} } },
	[134] = { .set = { {-1, -19}, {5, -14}, {-7, -14}, {-1, -12} } },
	[135] = { .set = { {4, -18}, {-1, -18}, {10, -11}, {-2, -12} } },
	[136] = { .set = { {8, -14}, {5, -14}, {5, -8}, {0, -10} } },
	[137] = { .set = { {6, -12}, {10, -12}, {-2, -7}, {-1, -10} } },
	[138] = { .set = { {3, -10}, {1, -3}, {10, -14}, {0, -11} } },
	[139] = { .set = { {3, -10}, {4, -4}, {-7, -15}, {-1, -9} } },
	[140] = { .set = { {5, -11}, {7, -5}, {-5, -15}, {-1, -10} } },
	[141] = { .set = { {6, -15}, {11, -12}, {8, -13}, {-1, -11} } },
	[142] = { .set = { {-1, -18}, {-8, -17}, {-9, -11}, {1, -12} } },
	[143] = { .set = { {-6, -15}, {-11, -12}, {-8, -13}, {1, -11} } },
	[144] = { .set = { {-6, -11}, {-8, -5}, {4, -15}, {0, -10} } },
	[145] = { .set = { {-4, -10}, {-5, -4}, {6, -15}, {0, -9} } },
	[146] = { .set = { {-1, -7}, {-11, -12}, {9, -12}, {-1, -5} } },
	[147] = { .set = { {-1, -11}, {-11, -9}, {9, -9}, {-1, -10} } },
	[148] = { .set = { {-1, -11}, {-11, -9}, {9, -9}, {-1, -10} } },
	[149] = { .set = { {5, -10}, {7, -17}, {-7, -9}, {0, -7} } },
	[150] = { .set = { {6, -12}, {10, -12}, {-2, -7}, {-1, -10} } },
	[151] = { .set = { {6, -12}, {10, -12}, {-2, -7}, {-1, -11} } },
	[152] = { .set = { {7, -14}, {2, -15}, {2, -11}, {-2, -8} } },
	[153] = { .set = { {8, -14}, {5, -14}, {5, -8}, {0, -10} } },
	[154] = { .set = { {8, -14}, {5, -14}, {5, -8}, {0, -11} } },
	[155] = { .set = { {2, -17}, {-6, -19}, {9, -14}, {-2, -10} } },
	[156] = { .set = { {4, -18}, {-1, -18}, {10, -11}, {-2, -12} } },
	[157] = { .set = { {4, -17}, {-1, -16}, {10, -11}, {-1, -13} } },
	[158] = { .set = { {-1, -18}, {8, -17}, {-11, -17}, {-1, -9} } },
	[159] = { .set = { {-1, -19}, {5, -14}, {-7, -14}, {-1, -12} } },
	[160] = { .set = { {-1, -19}, {8, -16}, {-10, -16}, {-1, -13} } },
	[161] = { .set = { {-4, -17}, {4, -19}, {-11, -14}, {0, -10} } },
	[162] = { .set = { {-6, -18}, {-1, -18}, {-12, -11}, {0, -12} } },
	[163] = { .set = { {-6, -17}, {-1, -16}, {-12, -11}, {-1, -13} } },
	[164] = { .set = { {-9, -15}, {-4, -16}, {-4, -12}, {0, -9} } },
	[165] = { .set = { {-10, -14}, {-7, -14}, {-7, -8}, {-2, -10} } },
	[166] = { .set = { {-10, -14}, {-7, -14}, {-7, -8}, {-2, -11} } },
	[167] = { .set = { {-6, -10}, {-8, -17}, {6, -9}, {-1, -7} } },
	[168] = { .set = { {-8, -13}, {-12, -13}, {0, -8}, {-1, -11} } },
	[169] = { .set = { {-8, -13}, {-12, -13}, {0, -8}, {-1, -12} } },
	[170] = { .set = { {-1, -7}, {-11, -12}, {9, -12}, {-1, -5} } },
	[171] = { .set = { {-6, -9}, {-8, -16}, {6, -8}, {-1, -6} } },
	[172] = { .set = { {-9, -14}, {-4, -15}, {-4, -11}, {0, -8} } },
	[173] = { .set = { {-4, -16}, {4, -18}, {-11, -13}, {0, -9} } },
	[174] = { .set = { {-1, -18}, {8, -17}, {-11, -17}, {-1, -9} } },
	[175] = { .set = { {2, -16}, {-6, -18}, {9, -13}, {-2, -9} } },
	[176] = { .set = { {7, -14}, {2, -15}, {2, -11}, {-2, -8} } },
	[177] = { .set = { {5, -10}, {7, -17}, {-7, -9}, {0, -7} } },
	[178] = { .set = { {-1, -11}, {-12, -12}, {10, -12}, {-1, -12} } },
	[179] = { .set = { {-8, -12}, {-11, -16}, {3, -9}, {0, -11} } },
	[180] = { .set = { {-10, -14}, {-5, -15}, {-5, -10}, {0, -11} } },
	[181] = { .set = { {-5, -19}, {1, -20}, {-13, -14}, {0, -13} } },
	[182] = { .set = { {-1, -19}, {9, -18}, {-11, -18}, {-1, -13} } },
	[183] = { .set = { {3, -19}, {-3, -20}, {11, -14}, {-2, -13} } },
	[184] = { .set = { {8, -14}, {3, -15}, {3, -10}, {-2, -11} } },
	[185] = { .set = { {6, -12}, {9, -16}, {-5, -9}, {-2, -11} } },
};

static const ax_anim *const sLedybaAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02409),
	AX_ANIM_PTR(gAxSharedAnim_02417),
	AX_ANIM_PTR(gAxSharedAnim_02440),
	AX_ANIM_PTR(gAxSharedAnim_02447),
	AX_ANIM_PTR(gAxSharedAnim_02452),
	AX_ANIM_PTR(gAxSharedAnim_02410),
	AX_ANIM_PTR(gAxSharedAnim_02415),
	AX_ANIM_PTR(gAxSharedAnim_02416),
};

static const ax_anim *const sLedybaAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_00667),
	AX_ANIM_PTR(sLedybaAnims_2_2),
	AX_ANIM_PTR(sLedybaAnims_2_3),
	AX_ANIM_PTR(sLedybaAnims_2_4),
	AX_ANIM_PTR(sLedybaAnims_2_5),
	AX_ANIM_PTR(sLedybaAnims_2_6),
	AX_ANIM_PTR(sLedybaAnims_2_7),
	AX_ANIM_PTR(sLedybaAnims_2_8),
};

static const ax_anim *const sLedybaAnimTable3[] = {
	AX_ANIM_PTR(sLedybaAnims_3_1),
	AX_ANIM_PTR(sLedybaAnims_3_2),
	AX_ANIM_PTR(sLedybaAnims_3_3),
	AX_ANIM_PTR(sLedybaAnims_3_4),
	AX_ANIM_PTR(sLedybaAnims_3_5),
	AX_ANIM_PTR(sLedybaAnims_3_6),
	AX_ANIM_PTR(sLedybaAnims_3_7),
	AX_ANIM_PTR(sLedybaAnims_3_8),
};

static const ax_anim *const sLedybaAnimTable4[] = {
	AX_ANIM_PTR(sLedybaAnims_4_1),
	AX_ANIM_PTR(sLedybaAnims_4_2),
	AX_ANIM_PTR(sLedybaAnims_4_3),
	AX_ANIM_PTR(sLedybaAnims_4_4),
	AX_ANIM_PTR(sLedybaAnims_4_5),
	AX_ANIM_PTR(sLedybaAnims_4_6),
	AX_ANIM_PTR(sLedybaAnims_4_7),
	AX_ANIM_PTR(sLedybaAnims_4_8),
};

static const ax_anim *const sLedybaAnimTable5[] = {
	AX_ANIM_PTR(sLedybaAnims_5_1),
	AX_ANIM_PTR(sLedybaAnims_5_2),
	AX_ANIM_PTR(sLedybaAnims_5_3),
	AX_ANIM_PTR(sLedybaAnims_5_4),
	AX_ANIM_PTR(sLedybaAnims_5_5),
	AX_ANIM_PTR(sLedybaAnims_5_6),
	AX_ANIM_PTR(sLedybaAnims_5_7),
	AX_ANIM_PTR(sLedybaAnims_5_8),
};

static const ax_anim *const sLedybaAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
};

static const ax_anim *const sLedybaAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00193),
	AX_ANIM_PTR(gAxSharedAnim_00201),
	AX_ANIM_PTR(gAxSharedAnim_00211),
	AX_ANIM_PTR(gAxSharedAnim_00218),
	AX_ANIM_PTR(gAxSharedAnim_00232),
	AX_ANIM_PTR(gAxSharedAnim_00244),
	AX_ANIM_PTR(gAxSharedAnim_00254),
	AX_ANIM_PTR(gAxSharedAnim_00259),
};

static const ax_anim *const sLedybaAnimTable8[] = {
	AX_ANIM_PTR(sLedybaAnims_8_1),
	AX_ANIM_PTR(sLedybaAnims_8_2),
	AX_ANIM_PTR(sLedybaAnims_8_3),
	AX_ANIM_PTR(sLedybaAnims_8_4),
	AX_ANIM_PTR(sLedybaAnims_8_5),
	AX_ANIM_PTR(sLedybaAnims_8_6),
	AX_ANIM_PTR(sLedybaAnims_8_7),
	AX_ANIM_PTR(sLedybaAnims_8_8),
};

static const ax_anim *const sLedybaAnimTable9[] = {
	AX_ANIM_PTR(sLedybaAnims_9_1),
	AX_ANIM_PTR(sLedybaAnims_9_2),
	AX_ANIM_PTR(sLedybaAnims_9_3),
	AX_ANIM_PTR(sLedybaAnims_9_4),
	AX_ANIM_PTR(sLedybaAnims_9_5),
	AX_ANIM_PTR(sLedybaAnims_9_6),
	AX_ANIM_PTR(sLedybaAnims_9_7),
	AX_ANIM_PTR(sLedybaAnims_9_8),
};

static const ax_anim *const sLedybaAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00474),
	AX_ANIM_PTR(gAxSharedAnim_00483),
	AX_ANIM_PTR(gAxSharedAnim_00492),
	AX_ANIM_PTR(gAxSharedAnim_00500),
	AX_ANIM_PTR(gAxSharedAnim_00506),
	AX_ANIM_PTR(gAxSharedAnim_00515),
	AX_ANIM_PTR(gAxSharedAnim_00521),
	AX_ANIM_PTR(gAxSharedAnim_00526),
};

static const ax_anim *const sLedybaAnimTable11[] = {
	AX_ANIM_PTR(sLedybaAnims_11_1),
	AX_ANIM_PTR(sLedybaAnims_11_2),
	AX_ANIM_PTR(sLedybaAnims_11_3),
	AX_ANIM_PTR(sLedybaAnims_11_4),
	AX_ANIM_PTR(sLedybaAnims_11_5),
	AX_ANIM_PTR(sLedybaAnims_11_6),
	AX_ANIM_PTR(sLedybaAnims_11_7),
	AX_ANIM_PTR(sLedybaAnims_11_8),
};

static const ax_anim *const sLedybaAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_00804),
	AX_ANIM_PTR(gAxSharedAnim_00891),
	AX_ANIM_PTR(gAxSharedAnim_00868),
	AX_ANIM_PTR(gAxSharedAnim_00856),
	AX_ANIM_PTR(gAxSharedAnim_00855),
	AX_ANIM_PTR(gAxSharedAnim_00842),
	AX_ANIM_PTR(gAxSharedAnim_00820),
	AX_ANIM_PTR(gAxSharedAnim_00805),
};

static const ax_anim *const sLedybaAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_00906),
	AX_ANIM_PTR(gAxSharedAnim_00992),
	AX_ANIM_PTR(gAxSharedAnim_00980),
	AX_ANIM_PTR(gAxSharedAnim_00967),
	AX_ANIM_PTR(gAxSharedAnim_00956),
	AX_ANIM_PTR(gAxSharedAnim_00944),
	AX_ANIM_PTR(gAxSharedAnim_00931),
	AX_ANIM_PTR(gAxSharedAnim_00919),
};

static const ax_anim *const *const sAxAnimationsLedyba[] = {
	sLedybaAnimTable1,
	sLedybaAnimTable2,
	sLedybaAnimTable3,
	sLedybaAnimTable4,
	sLedybaAnimTable5,
	sLedybaAnimTable6,
	sLedybaAnimTable7,
	sLedybaAnimTable8,
	sLedybaAnimTable9,
	sLedybaAnimTable10,
	sLedybaAnimTable11,
	sLedybaAnimTable12,
	sLedybaAnimTable13,
};

static const ax_sprite *const sAxSpritesLedyba[] = {
	sLedybaSprites1,
	sLedybaSprites2,
	sLedybaSprites3,
	sLedybaSprites4,
	sLedybaSprites5,
	sLedybaSprites6,
	sLedybaSprites7,
	sLedybaSprites8,
	sLedybaSprites9,
	sLedybaSprites10,
	sLedybaSprites11,
	sLedybaSprites12,
	sLedybaSprites13,
	sLedybaSprites14,
	sLedybaSprites15,
	sLedybaSprites16,
	sLedybaSprites17,
	sLedybaSprites18,
	sLedybaSprites19,
	sLedybaSprites20,
	sLedybaSprites21,
	sLedybaSprites22,
	sLedybaSprites23,
	sLedybaSprites24,
	sLedybaSprites25,
	sLedybaSprites26,
	sLedybaSprites27,
	sLedybaSprites28,
	sLedybaSprites29,
	sLedybaSprites30,
	sLedybaSprites31,
	sLedybaSprites32,
	sLedybaSprites33,
	sLedybaSprites34,
	sLedybaSprites35,
	sLedybaSprites36,
	sLedybaSprites37,
	sLedybaSprites38,
	sLedybaSprites39,
	sLedybaSprites40,
	sLedybaSprites41,
	sLedybaSprites42,
	sLedybaSprites43,
	sLedybaSprites44,
	sLedybaSprites45,
	sLedybaSprites46,
	sLedybaSprites47,
	sLedybaSprites48,
	sLedybaSprites49,
};

static const axmain sAxMainLedyba = {
	.poses = sAxPosesLedyba,
	.animations = sAxAnimationsLedyba,
	.animCount = ARRAY_COUNT(sAxAnimationsLedyba),
	.spriteData = sAxSpritesLedyba,
	.positions = sAxPositionsLedyba,
};
