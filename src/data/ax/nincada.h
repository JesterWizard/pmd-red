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
#include "ax_shared_anims.h"
static const axmain sAxMainNincada;
const SiroArchive gAxNincada = {"SIRO", &sAxMainNincada};

static const ax_pose sNincadaPose1[] = {
	AX_POSE(0, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose2[] = {
	AX_POSE(1, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose3[] = {
	AX_POSE(2, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose4[] = {
	AX_POSE(3, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose5[] = {
	AX_POSE(4, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose6[] = {
	AX_POSE(5, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose7[] = {
	AX_POSE(6, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose8[] = {
	AX_POSE(7, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose9[] = {
	AX_POSE(8, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose10[] = {
	AX_POSE(9, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose11[] = {
	AX_POSE(10, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose12[] = {
	AX_POSE(11, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose13[] = {
	AX_POSE(12, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose14[] = {
	AX_POSE(13, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose15[] = {
	AX_POSE(14, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose16[] = {
	AX_POSE(9, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose17[] = {
	AX_POSE(10, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose18[] = {
	AX_POSE(11, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose19[] = {
	AX_POSE(6, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose20[] = {
	AX_POSE(7, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose21[] = {
	AX_POSE(8, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose22[] = {
	AX_POSE(3, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose23[] = {
	AX_POSE(4, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose24[] = {
	AX_POSE(5, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose28[] = {
	AX_POSE(15, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose29[] = {
	AX_POSE(16, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose33[] = {
	AX_POSE(17, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose34[] = {
	AX_POSE(18, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose38[] = {
	AX_POSE(19, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose39[] = {
	AX_POSE(20, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose43[] = {
	AX_POSE(21, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose44[] = {
	AX_POSE(22, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose48[] = {
	AX_POSE(23, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose49[] = {
	AX_POSE(24, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose53[] = {
	AX_POSE(21, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose54[] = {
	AX_POSE(22, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose58[] = {
	AX_POSE(19, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose59[] = {
	AX_POSE(20, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose63[] = {
	AX_POSE(17, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose64[] = {
	AX_POSE(18, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose68[] = {
	AX_POSE(25, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(26, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose69[] = {
	AX_POSE(26, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose70[] = {
	AX_POSE(25, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(26, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose71[] = {
	AX_POSE(26, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose75[] = {
	AX_POSE(27, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(28, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose76[] = {
	AX_POSE(28, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose77[] = {
	AX_POSE(29, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(30, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose78[] = {
	AX_POSE(30, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose82[] = {
	AX_POSE(31, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(32, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose83[] = {
	AX_POSE(32, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose84[] = {
	AX_POSE(33, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(34, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose85[] = {
	AX_POSE(34, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose89[] = {
	AX_POSE(35, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(36, OAM1(3, ST_OAM_SQUARE     , 2), OAM2(254, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE(37, OAM1(239, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(9, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose90[] = {
	AX_POSE(35, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(36, OAM1(3, ST_OAM_SQUARE     , 2), OAM2(254, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose91[] = {
	AX_POSE(38, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 10)),
	AX_POSE(39, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE(40, OAM1(3, ST_OAM_H_RECTANGLE, 2), OAM2(248, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(16, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose92[] = {
	AX_POSE(39, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(40, OAM1(3, ST_OAM_H_RECTANGLE, 2), OAM2(248, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose96[] = {
	AX_POSE(41, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(42, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose97[] = {
	AX_POSE(42, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose98[] = {
	AX_POSE(41, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(42, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose99[] = {
	AX_POSE(42, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose103[] = {
	AX_POSE(35, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(36, OAM1(3, ST_OAM_SQUARE     , 2), OAM2(251, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE(37, OAM1(239, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(9, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose104[] = {
	AX_POSE(35, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(36, OAM1(3, ST_OAM_SQUARE     , 2), OAM2(251, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose105[] = {
	AX_POSE(38, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(39, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE(40, OAM1(3, ST_OAM_H_RECTANGLE, 2), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose106[] = {
	AX_POSE(39, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(40, OAM1(3, ST_OAM_H_RECTANGLE, 2), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose110[] = {
	AX_POSE(31, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(32, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose111[] = {
	AX_POSE(32, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose112[] = {
	AX_POSE(33, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(34, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose113[] = {
	AX_POSE(34, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose117[] = {
	AX_POSE(27, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(28, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose118[] = {
	AX_POSE(28, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose119[] = {
	AX_POSE(29, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(30, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose120[] = {
	AX_POSE(30, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose145[] = {
	AX_POSE(43, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose146[] = {
	AX_POSE(44, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose147[] = {
	AX_POSE(45, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose148[] = {
	AX_POSE(46, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose149[] = {
	AX_POSE(47, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose150[] = {
	AX_POSE(48, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose151[] = {
	AX_POSE(49, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose152[] = {
	AX_POSE(48, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose153[] = {
	AX_POSE(47, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose154[] = {
	AX_POSE(46, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose179[] = {
	AX_POSE(15, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose180[] = {
	AX_POSE(17, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose181[] = {
	AX_POSE(19, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose185[] = {
	AX_POSE(19, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose186[] = {
	AX_POSE(17, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose189[] = {
	AX_POSE(19, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose190[] = {
	AX_POSE(21, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose191[] = {
	AX_POSE(23, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose192[] = {
	AX_POSE(21, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose193[] = {
	AX_POSE(19, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose196[] = {
	AX_POSE(16, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose198[] = {
	AX_POSE(18, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose210[] = {
	AX_POSE(18, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNincadaPose211[] = {
	AX_POSE(16, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const u8 sNincadaAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_2_1.lz");
static const u8 sNincadaAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_2_2.lz");
static const u8 sNincadaAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_2_3.lz");
static const u8 sNincadaAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_2_4.lz");
static const u8 sNincadaAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_2_5.lz");
static const u8 sNincadaAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_2_6.lz");
static const u8 sNincadaAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_2_7.lz");
static const u8 sNincadaAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_2_8.lz");
static const u8 sNincadaAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_3_1.lz");
static const u8 sNincadaAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_3_2.lz");
static const u8 sNincadaAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_3_3.lz");
static const u8 sNincadaAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_3_4.lz");
static const u8 sNincadaAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_3_5.lz");
static const u8 sNincadaAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_3_6.lz");
static const u8 sNincadaAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_3_7.lz");
static const u8 sNincadaAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_3_8.lz");
static const u8 sNincadaAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_4_1.lz");
static const u8 sNincadaAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_4_2.lz");
static const u8 sNincadaAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_4_3.lz");
static const u8 sNincadaAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_4_4.lz");
static const u8 sNincadaAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_4_5.lz");
static const u8 sNincadaAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_4_6.lz");
static const u8 sNincadaAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_4_7.lz");
static const u8 sNincadaAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_4_8.lz");
static const u8 sNincadaAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_8_1.lz");
static const u8 sNincadaAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_8_2.lz");
static const u8 sNincadaAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_8_3.lz");
static const u8 sNincadaAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_8_4.lz");
static const u8 sNincadaAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_8_5.lz");
static const u8 sNincadaAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_8_6.lz");
static const u8 sNincadaAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_8_7.lz");
static const u8 sNincadaAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_8_8.lz");
static const u8 sNincadaAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_9_1.lz");
static const u8 sNincadaAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_9_2.lz");
static const u8 sNincadaAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_9_3.lz");
static const u8 sNincadaAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_9_4.lz");
static const u8 sNincadaAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_9_5.lz");
static const u8 sNincadaAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_9_6.lz");
static const u8 sNincadaAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_9_7.lz");
static const u8 sNincadaAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_9_8.lz");
static const u8 sNincadaAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_11_2.lz");
static const u8 sNincadaAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_11_3.lz");
static const u8 sNincadaAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_11_4.lz");
static const u8 sNincadaAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_11_6.lz");
static const u8 sNincadaAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_11_7.lz");
static const u8 sNincadaAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nincada/sNincadaAnims_11_8.lz");

static const u8 sNincadaGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_1.4bpp.lz");
static const ax_sprite sNincadaSprites1[] = {
	{sNincadaGfx1, ARRAY_COUNT(sNincadaGfx1)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_2.4bpp.lz");
static const ax_sprite sNincadaSprites2[] = {
	{sNincadaGfx2, ARRAY_COUNT(sNincadaGfx2)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_3.4bpp.lz");
static const ax_sprite sNincadaSprites3[] = {
	{sNincadaGfx3, ARRAY_COUNT(sNincadaGfx3)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_4.4bpp.lz");
static const ax_sprite sNincadaSprites4[] = {
	{sNincadaGfx4, ARRAY_COUNT(sNincadaGfx4)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_5.4bpp.lz");
static const ax_sprite sNincadaSprites5[] = {
	{sNincadaGfx5, ARRAY_COUNT(sNincadaGfx5)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_6.4bpp.lz");
static const ax_sprite sNincadaSprites6[] = {
	{sNincadaGfx6, ARRAY_COUNT(sNincadaGfx6)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_7.4bpp.lz");
static const ax_sprite sNincadaSprites7[] = {
	{sNincadaGfx7, ARRAY_COUNT(sNincadaGfx7)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_8.4bpp.lz");
static const ax_sprite sNincadaSprites8[] = {
	{sNincadaGfx8, ARRAY_COUNT(sNincadaGfx8)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_9.4bpp.lz");
static const ax_sprite sNincadaSprites9[] = {
	{sNincadaGfx9, ARRAY_COUNT(sNincadaGfx9)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_10.4bpp.lz");
static const ax_sprite sNincadaSprites10[] = {
	{sNincadaGfx10, ARRAY_COUNT(sNincadaGfx10)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_11.4bpp.lz");
static const ax_sprite sNincadaSprites11[] = {
	{sNincadaGfx11, ARRAY_COUNT(sNincadaGfx11)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_12.4bpp.lz");
static const ax_sprite sNincadaSprites12[] = {
	{sNincadaGfx12, ARRAY_COUNT(sNincadaGfx12)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_13.4bpp.lz");
static const ax_sprite sNincadaSprites13[] = {
	{sNincadaGfx13, ARRAY_COUNT(sNincadaGfx13)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_14.4bpp.lz");
static const ax_sprite sNincadaSprites14[] = {
	{sNincadaGfx14, ARRAY_COUNT(sNincadaGfx14)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_15.4bpp.lz");
static const ax_sprite sNincadaSprites15[] = {
	{sNincadaGfx15, ARRAY_COUNT(sNincadaGfx15)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_16.4bpp.lz");
static const u8 sNincadaGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_16_1.4bpp.lz");
static const ax_sprite sNincadaSprites16[] = {
	{sNincadaGfx16, ARRAY_COUNT(sNincadaGfx16)}, 
	{NULL, 32}, 
	{sNincadaGfx16_1, ARRAY_COUNT(sNincadaGfx16_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNincadaGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_17.4bpp.lz");
static const u8 sNincadaGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_17_1.4bpp.lz");
static const ax_sprite sNincadaSprites17[] = {
	{sNincadaGfx17, ARRAY_COUNT(sNincadaGfx17)}, 
	{NULL, 32}, 
	{sNincadaGfx17_1, ARRAY_COUNT(sNincadaGfx17_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNincadaGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_18.4bpp.lz");
static const u8 sNincadaGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_18_1.4bpp.lz");
static const ax_sprite sNincadaSprites18[] = {
	{sNincadaGfx18, ARRAY_COUNT(sNincadaGfx18)}, 
	{NULL, 32}, 
	{sNincadaGfx18_1, ARRAY_COUNT(sNincadaGfx18_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNincadaGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_19.4bpp.lz");
static const u8 sNincadaGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_19_1.4bpp.lz");
static const ax_sprite sNincadaSprites19[] = {
	{sNincadaGfx19, ARRAY_COUNT(sNincadaGfx19)}, 
	{NULL, 32}, 
	{sNincadaGfx19_1, ARRAY_COUNT(sNincadaGfx19_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNincadaGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_20.4bpp.lz");
static const u8 sNincadaGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_20_1.4bpp.lz");
static const ax_sprite sNincadaSprites20[] = {
	{sNincadaGfx20, ARRAY_COUNT(sNincadaGfx20)}, 
	{NULL, 32}, 
	{sNincadaGfx20_1, ARRAY_COUNT(sNincadaGfx20_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNincadaGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_21.4bpp.lz");
static const u8 sNincadaGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_21_1.4bpp.lz");
static const ax_sprite sNincadaSprites21[] = {
	{sNincadaGfx21, ARRAY_COUNT(sNincadaGfx21)}, 
	{NULL, 32}, 
	{sNincadaGfx21_1, ARRAY_COUNT(sNincadaGfx21_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNincadaGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_22.4bpp.lz");
static const u8 sNincadaGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_22_1.4bpp.lz");
static const ax_sprite sNincadaSprites22[] = {
	{sNincadaGfx22, ARRAY_COUNT(sNincadaGfx22)}, 
	{NULL, 32}, 
	{sNincadaGfx22_1, ARRAY_COUNT(sNincadaGfx22_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNincadaGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_23.4bpp.lz");
static const u8 sNincadaGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_23_1.4bpp.lz");
static const ax_sprite sNincadaSprites23[] = {
	{sNincadaGfx23, ARRAY_COUNT(sNincadaGfx23)}, 
	{NULL, 32}, 
	{sNincadaGfx23_1, ARRAY_COUNT(sNincadaGfx23_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNincadaGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_24.4bpp.lz");
static const u8 sNincadaGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_24_1.4bpp.lz");
static const ax_sprite sNincadaSprites24[] = {
	{sNincadaGfx24, ARRAY_COUNT(sNincadaGfx24)}, 
	{NULL, 32}, 
	{sNincadaGfx24_1, ARRAY_COUNT(sNincadaGfx24_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNincadaGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_25.4bpp.lz");
static const u8 sNincadaGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_25_1.4bpp.lz");
static const ax_sprite sNincadaSprites25[] = {
	{sNincadaGfx25, ARRAY_COUNT(sNincadaGfx25)}, 
	{NULL, 32}, 
	{sNincadaGfx25_1, ARRAY_COUNT(sNincadaGfx25_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNincadaGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_26.4bpp.lz");
static const u8 sNincadaGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_26_1.4bpp.lz");
static const u8 sNincadaGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_26_2.4bpp.lz");
static const ax_sprite sNincadaSprites26[] = {
	{sNincadaGfx26, ARRAY_COUNT(sNincadaGfx26)}, 
	{NULL, 96}, 
	{sNincadaGfx26_1, ARRAY_COUNT(sNincadaGfx26_1)}, 
	{NULL, 32}, 
	{sNincadaGfx26_2, ARRAY_COUNT(sNincadaGfx26_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sNincadaGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_27.4bpp.lz");
static const ax_sprite sNincadaSprites27[] = {
	{sNincadaGfx27, ARRAY_COUNT(sNincadaGfx27)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNincadaGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_28.4bpp.lz");
static const ax_sprite sNincadaSprites28[] = {
	{sNincadaGfx28, ARRAY_COUNT(sNincadaGfx28)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sNincadaGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_29.4bpp.lz");
static const u8 sNincadaGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_29_1.4bpp.lz");
static const ax_sprite sNincadaSprites29[] = {
	{NULL, 32}, 
	{sNincadaGfx29, ARRAY_COUNT(sNincadaGfx29)}, 
	{NULL, 32}, 
	{sNincadaGfx29_1, ARRAY_COUNT(sNincadaGfx29_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNincadaGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_30.4bpp.lz");
static const u8 sNincadaGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_30_1.4bpp.lz");
static const ax_sprite sNincadaSprites30[] = {
	{NULL, 64}, 
	{sNincadaGfx30, ARRAY_COUNT(sNincadaGfx30)}, 
	{NULL, 32}, 
	{sNincadaGfx30_1, ARRAY_COUNT(sNincadaGfx30_1)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sNincadaGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_31.4bpp.lz");
static const u8 sNincadaGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_31_1.4bpp.lz");
static const ax_sprite sNincadaSprites31[] = {
	{sNincadaGfx31, ARRAY_COUNT(sNincadaGfx31)}, 
	{NULL, 32}, 
	{sNincadaGfx31_1, ARRAY_COUNT(sNincadaGfx31_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNincadaGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_32.4bpp.lz");
static const u8 sNincadaGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_32_1.4bpp.lz");
static const ax_sprite sNincadaSprites32[] = {
	{sNincadaGfx32, ARRAY_COUNT(sNincadaGfx32)}, 
	{NULL, 32}, 
	{sNincadaGfx32_1, ARRAY_COUNT(sNincadaGfx32_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sNincadaGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_33.4bpp.lz");
static const u8 sNincadaGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_33_1.4bpp.lz");
static const ax_sprite sNincadaSprites33[] = {
	{NULL, 32}, 
	{sNincadaGfx33, ARRAY_COUNT(sNincadaGfx33)}, 
	{NULL, 32}, 
	{sNincadaGfx33_1, ARRAY_COUNT(sNincadaGfx33_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNincadaGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_34.4bpp.lz");
static const ax_sprite sNincadaSprites34[] = {
	{sNincadaGfx34, ARRAY_COUNT(sNincadaGfx34)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sNincadaGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_35.4bpp.lz");
static const u8 sNincadaGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_35_1.4bpp.lz");
static const u8 sNincadaGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_35_2.4bpp.lz");
static const ax_sprite sNincadaSprites35[] = {
	{sNincadaGfx35, ARRAY_COUNT(sNincadaGfx35)}, 
	{NULL, 32}, 
	{sNincadaGfx35_1, ARRAY_COUNT(sNincadaGfx35_1)}, 
	{NULL, 64}, 
	{sNincadaGfx35_2, ARRAY_COUNT(sNincadaGfx35_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sNincadaGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_36.4bpp.lz");
static const u8 sNincadaGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_36_1.4bpp.lz");
static const ax_sprite sNincadaSprites36[] = {
	{sNincadaGfx36, ARRAY_COUNT(sNincadaGfx36)}, 
	{NULL, 32}, 
	{sNincadaGfx36_1, ARRAY_COUNT(sNincadaGfx36_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNincadaGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_37.4bpp.lz");
static const ax_sprite sNincadaSprites37[] = {
	{sNincadaGfx37, ARRAY_COUNT(sNincadaGfx37)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_38.4bpp.lz");
static const u8 sNincadaGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_38_1.4bpp.lz");
static const u8 sNincadaGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_38_2.4bpp.lz");
static const ax_sprite sNincadaSprites38[] = {
	{sNincadaGfx38, ARRAY_COUNT(sNincadaGfx38)}, 
	{NULL, 32}, 
	{sNincadaGfx38_1, ARRAY_COUNT(sNincadaGfx38_1)}, 
	{NULL, 32}, 
	{sNincadaGfx38_2, ARRAY_COUNT(sNincadaGfx38_2)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_39.4bpp.lz");
static const u8 sNincadaGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_39_1.4bpp.lz");
static const ax_sprite sNincadaSprites39[] = {
	{sNincadaGfx39, ARRAY_COUNT(sNincadaGfx39)}, 
	{NULL, 32}, 
	{sNincadaGfx39_1, ARRAY_COUNT(sNincadaGfx39_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sNincadaGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_40.4bpp.lz");
static const u8 sNincadaGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_40_1.4bpp.lz");
static const ax_sprite sNincadaSprites40[] = {
	{NULL, 32}, 
	{sNincadaGfx40, ARRAY_COUNT(sNincadaGfx40)}, 
	{NULL, 32}, 
	{sNincadaGfx40_1, ARRAY_COUNT(sNincadaGfx40_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNincadaGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_41.4bpp.lz");
static const ax_sprite sNincadaSprites41[] = {
	{sNincadaGfx41, ARRAY_COUNT(sNincadaGfx41)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_42.4bpp.lz");
static const u8 sNincadaGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_42_1.4bpp.lz");
static const u8 sNincadaGfx42_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_42_2.4bpp.lz");
static const ax_sprite sNincadaSprites42[] = {
	{sNincadaGfx42, ARRAY_COUNT(sNincadaGfx42)}, 
	{NULL, 64}, 
	{sNincadaGfx42_1, ARRAY_COUNT(sNincadaGfx42_1)}, 
	{NULL, 96}, 
	{sNincadaGfx42_2, ARRAY_COUNT(sNincadaGfx42_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sNincadaGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_43.4bpp.lz");
static const u8 sNincadaGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_43_1.4bpp.lz");
static const ax_sprite sNincadaSprites43[] = {
	{sNincadaGfx43, ARRAY_COUNT(sNincadaGfx43)}, 
	{NULL, 32}, 
	{sNincadaGfx43_1, ARRAY_COUNT(sNincadaGfx43_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNincadaGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_44.4bpp.lz");
static const ax_sprite sNincadaSprites44[] = {
	{sNincadaGfx44, ARRAY_COUNT(sNincadaGfx44)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_45.4bpp.lz");
static const ax_sprite sNincadaSprites45[] = {
	{sNincadaGfx45, ARRAY_COUNT(sNincadaGfx45)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_46.4bpp.lz");
static const ax_sprite sNincadaSprites46[] = {
	{sNincadaGfx46, ARRAY_COUNT(sNincadaGfx46)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_47.4bpp.lz");
static const ax_sprite sNincadaSprites47[] = {
	{sNincadaGfx47, ARRAY_COUNT(sNincadaGfx47)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_48.4bpp.lz");
static const ax_sprite sNincadaSprites48[] = {
	{sNincadaGfx48, ARRAY_COUNT(sNincadaGfx48)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_49.4bpp.lz");
static const ax_sprite sNincadaSprites49[] = {
	{sNincadaGfx49, ARRAY_COUNT(sNincadaGfx49)}, 
	{NULL, 0}
};
static const u8 sNincadaGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nincada/sprite_50.4bpp.lz");
static const ax_sprite sNincadaSprites50[] = {
	{sNincadaGfx50, ARRAY_COUNT(sNincadaGfx50)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesNincada[] = {
	sNincadaPose1,
	sNincadaPose2,
	sNincadaPose3,
	sNincadaPose4,
	sNincadaPose5,
	sNincadaPose6,
	sNincadaPose7,
	sNincadaPose8,
	sNincadaPose9,
	sNincadaPose10,
	sNincadaPose11,
	sNincadaPose12,
	sNincadaPose13,
	sNincadaPose14,
	sNincadaPose15,
	sNincadaPose16,
	sNincadaPose17,
	sNincadaPose18,
	sNincadaPose19,
	sNincadaPose20,
	sNincadaPose21,
	sNincadaPose22,
	sNincadaPose23,
	sNincadaPose24,
	sNincadaPose1,
	sNincadaPose2,
	sNincadaPose3,
	sNincadaPose28,
	sNincadaPose29,
	sNincadaPose4,
	sNincadaPose5,
	sNincadaPose6,
	sNincadaPose33,
	sNincadaPose34,
	sNincadaPose7,
	sNincadaPose8,
	sNincadaPose9,
	sNincadaPose38,
	sNincadaPose39,
	sNincadaPose10,
	sNincadaPose11,
	sNincadaPose12,
	sNincadaPose43,
	sNincadaPose44,
	sNincadaPose13,
	sNincadaPose14,
	sNincadaPose15,
	sNincadaPose48,
	sNincadaPose49,
	sNincadaPose16,
	sNincadaPose17,
	sNincadaPose18,
	sNincadaPose53,
	sNincadaPose54,
	sNincadaPose19,
	sNincadaPose20,
	sNincadaPose21,
	sNincadaPose58,
	sNincadaPose59,
	sNincadaPose22,
	sNincadaPose23,
	sNincadaPose24,
	sNincadaPose63,
	sNincadaPose64,
	sNincadaPose1,
	sNincadaPose2,
	sNincadaPose3,
	sNincadaPose68,
	sNincadaPose69,
	sNincadaPose70,
	sNincadaPose71,
	sNincadaPose4,
	sNincadaPose5,
	sNincadaPose6,
	sNincadaPose75,
	sNincadaPose76,
	sNincadaPose77,
	sNincadaPose78,
	sNincadaPose7,
	sNincadaPose8,
	sNincadaPose9,
	sNincadaPose82,
	sNincadaPose83,
	sNincadaPose84,
	sNincadaPose85,
	sNincadaPose10,
	sNincadaPose11,
	sNincadaPose12,
	sNincadaPose89,
	sNincadaPose90,
	sNincadaPose91,
	sNincadaPose92,
	sNincadaPose13,
	sNincadaPose14,
	sNincadaPose15,
	sNincadaPose96,
	sNincadaPose97,
	sNincadaPose98,
	sNincadaPose99,
	sNincadaPose16,
	sNincadaPose17,
	sNincadaPose18,
	sNincadaPose103,
	sNincadaPose104,
	sNincadaPose105,
	sNincadaPose106,
	sNincadaPose19,
	sNincadaPose20,
	sNincadaPose21,
	sNincadaPose110,
	sNincadaPose111,
	sNincadaPose112,
	sNincadaPose113,
	sNincadaPose22,
	sNincadaPose23,
	sNincadaPose24,
	sNincadaPose117,
	sNincadaPose118,
	sNincadaPose119,
	sNincadaPose120,
	sNincadaPose1,
	sNincadaPose29,
	sNincadaPose4,
	sNincadaPose34,
	sNincadaPose7,
	sNincadaPose39,
	sNincadaPose10,
	sNincadaPose44,
	sNincadaPose13,
	sNincadaPose49,
	sNincadaPose16,
	sNincadaPose54,
	sNincadaPose19,
	sNincadaPose59,
	sNincadaPose22,
	sNincadaPose64,
	sNincadaPose1,
	sNincadaPose22,
	sNincadaPose19,
	sNincadaPose16,
	sNincadaPose13,
	sNincadaPose10,
	sNincadaPose7,
	sNincadaPose4,
	sNincadaPose145,
	sNincadaPose146,
	sNincadaPose147,
	sNincadaPose148,
	sNincadaPose149,
	sNincadaPose150,
	sNincadaPose151,
	sNincadaPose152,
	sNincadaPose153,
	sNincadaPose154,
	sNincadaPose1,
	sNincadaPose2,
	sNincadaPose3,
	sNincadaPose4,
	sNincadaPose5,
	sNincadaPose6,
	sNincadaPose7,
	sNincadaPose8,
	sNincadaPose9,
	sNincadaPose10,
	sNincadaPose11,
	sNincadaPose12,
	sNincadaPose13,
	sNincadaPose14,
	sNincadaPose15,
	sNincadaPose16,
	sNincadaPose17,
	sNincadaPose18,
	sNincadaPose19,
	sNincadaPose20,
	sNincadaPose21,
	sNincadaPose22,
	sNincadaPose23,
	sNincadaPose24,
	sNincadaPose179,
	sNincadaPose180,
	sNincadaPose181,
	sNincadaPose53,
	sNincadaPose48,
	sNincadaPose43,
	sNincadaPose185,
	sNincadaPose186,
	sNincadaPose179,
	sNincadaPose186,
	sNincadaPose189,
	sNincadaPose190,
	sNincadaPose191,
	sNincadaPose192,
	sNincadaPose193,
	sNincadaPose180,
	sNincadaPose1,
	sNincadaPose196,
	sNincadaPose4,
	sNincadaPose198,
	sNincadaPose7,
	sNincadaPose39,
	sNincadaPose10,
	sNincadaPose44,
	sNincadaPose13,
	sNincadaPose49,
	sNincadaPose16,
	sNincadaPose54,
	sNincadaPose19,
	sNincadaPose59,
	sNincadaPose22,
	sNincadaPose210,
	sNincadaPose211,
	sNincadaPose64,
	sNincadaPose59,
	sNincadaPose54,
	sNincadaPose49,
	sNincadaPose44,
	sNincadaPose39,
	sNincadaPose34,
	sNincadaPose1,
	sNincadaPose22,
	sNincadaPose19,
	sNincadaPose16,
	sNincadaPose13,
	sNincadaPose10,
	sNincadaPose7,
	sNincadaPose4,
};

static const struct PositionSets sAxPositionsNincada[] = {
	[0] = { .set = { {0, -1}, {-6, 2}, {6, 2}, {0, -4} } },
	[1] = { .set = { {0, 0}, {-6, 4}, {6, 1}, {0, -3} } },
	[2] = { .set = { {0, 0}, {-6, 1}, {6, 4}, {0, -3} } },
	[3] = { .set = { {4, -1}, {8, -1}, {0, 3}, {0, -5} } },
	[4] = { .set = { {4, 0}, {7, -2}, {1, 5}, {0, -4} } },
	[5] = { .set = { {4, 0}, {9, 1}, {-1, 3}, {0, -4} } },
	[6] = { .set = { {6, -3}, {6, -4}, {5, 1}, {1, -5} } },
	[7] = { .set = { {6, -2}, {1, -1}, {6, 1}, {1, -4} } },
	[8] = { .set = { {6, -2}, {8, -1}, {3, 1}, {1, -4} } },
	[9] = { .set = { {5, -4}, {-3, -5}, {7, -1}, {0, -5} } },
	[10] = { .set = { {5, -3}, {-3, -2}, {8, -1}, {0, -4} } },
	[11] = { .set = { {5, -2}, {0, -5}, {6, 1}, {0, -4} } },
	[12] = { .set = { {0, -6}, {5, -3}, {-5, -3}, {0, -5} } },
	[13] = { .set = { {0, -5}, {5, -5}, {-5, -2}, {0, -4} } },
	[14] = { .set = { {0, -5}, {5, -2}, {-5, -5}, {0, -4} } },
	[15] = { .set = { {-5, -4}, {3, -5}, {-7, -1}, {0, -5} } },
	[16] = { .set = { {-5, -3}, {3, -2}, {-8, -1}, {0, -4} } },
	[17] = { .set = { {-5, -2}, {0, -5}, {-6, 1}, {0, -4} } },
	[18] = { .set = { {-6, -3}, {-6, -4}, {-5, 1}, {-1, -5} } },
	[19] = { .set = { {-6, -2}, {-1, -1}, {-6, 1}, {-1, -4} } },
	[20] = { .set = { {-6, -2}, {-8, -1}, {-3, 1}, {-1, -4} } },
	[21] = { .set = { {-4, -1}, {-8, -1}, {0, 3}, {0, -5} } },
	[22] = { .set = { {-4, 0}, {-7, -2}, {-1, 5}, {0, -4} } },
	[23] = { .set = { {-4, 0}, {-9, 1}, {1, 3}, {0, -4} } },
	[24] = { .set = { {0, -1}, {-6, 2}, {6, 2}, {0, -4} } },
	[25] = { .set = { {0, 0}, {-6, 4}, {6, 1}, {0, -3} } },
	[26] = { .set = { {0, 0}, {-6, 1}, {6, 4}, {0, -3} } },
	[27] = { .set = { {0, 4}, {-6, -2}, {6, -2}, {0, -1} } },
	[28] = { .set = { {0, 2}, {-6, 3}, {6, 3}, {0, -3} } },
	[29] = { .set = { {4, -1}, {8, -1}, {0, 3}, {0, -5} } },
	[30] = { .set = { {4, 0}, {7, -2}, {1, 5}, {0, -4} } },
	[31] = { .set = { {4, 0}, {9, 1}, {-1, 3}, {0, -4} } },
	[32] = { .set = { {5, 1}, {1, -8}, {-6, -3}, {2, -5} } },
	[33] = { .set = { {6, -2}, {7, -1}, {-1, 2}, {2, -6} } },
	[34] = { .set = { {6, -3}, {6, -4}, {5, 1}, {1, -5} } },
	[35] = { .set = { {6, -2}, {1, -1}, {6, 1}, {1, -4} } },
	[36] = { .set = { {6, -2}, {8, -1}, {3, 1}, {1, -4} } },
	[37] = { .set = { {6, -1}, {-3, -4}, {-2, 1}, {1, -6} } },
	[38] = { .set = { {7, -4}, {4, -8}, {3, 1}, {1, -5} } },
	[39] = { .set = { {5, -4}, {-3, -5}, {7, -1}, {0, -5} } },
	[40] = { .set = { {5, -3}, {-3, -2}, {8, -1}, {0, -4} } },
	[41] = { .set = { {5, -2}, {0, -5}, {6, 1}, {0, -4} } },
	[42] = { .set = { {6, -4}, {-3, -5}, {5, 1}, {1, -6} } },
	[43] = { .set = { {5, -7}, {-3, -5}, {6, -1}, {0, -5} } },
	[44] = { .set = { {0, -6}, {5, -3}, {-5, -3}, {0, -5} } },
	[45] = { .set = { {0, -5}, {5, -5}, {-5, -2}, {0, -4} } },
	[46] = { .set = { {0, -5}, {5, -2}, {-5, -5}, {0, -4} } },
	[47] = { .set = { {0, -7}, {5, -2}, {-5, -2}, {0, -6} } },
	[48] = { .set = { {0, -6}, {5, -2}, {-5, -2}, {0, -5} } },
	[49] = { .set = { {-5, -4}, {3, -5}, {-7, -1}, {0, -5} } },
	[50] = { .set = { {-5, -3}, {3, -2}, {-8, -1}, {0, -4} } },
	[51] = { .set = { {-5, -2}, {0, -5}, {-6, 1}, {0, -4} } },
	[52] = { .set = { {-6, -4}, {3, -5}, {-5, 1}, {-1, -6} } },
	[53] = { .set = { {-5, -7}, {3, -5}, {-6, -1}, {0, -5} } },
	[54] = { .set = { {-6, -3}, {-6, -4}, {-5, 1}, {-1, -5} } },
	[55] = { .set = { {-6, -2}, {-1, -1}, {-6, 1}, {-1, -4} } },
	[56] = { .set = { {-6, -2}, {-8, -1}, {-3, 1}, {-1, -4} } },
	[57] = { .set = { {-6, -1}, {3, -4}, {2, 1}, {-1, -6} } },
	[58] = { .set = { {-7, -4}, {-4, -8}, {-3, 1}, {-1, -5} } },
	[59] = { .set = { {-4, -1}, {-8, -1}, {0, 3}, {0, -5} } },
	[60] = { .set = { {-4, 0}, {-7, -2}, {-1, 5}, {0, -4} } },
	[61] = { .set = { {-4, 0}, {-9, 1}, {1, 3}, {0, -4} } },
	[62] = { .set = { {-5, 1}, {-1, -8}, {6, -3}, {-2, -5} } },
	[63] = { .set = { {-6, -2}, {-7, -1}, {1, 2}, {-2, -6} } },
	[64] = { .set = { {0, -1}, {-6, 2}, {6, 2}, {0, -4} } },
	[65] = { .set = { {0, 0}, {-6, 4}, {6, 1}, {0, -3} } },
	[66] = { .set = { {0, 0}, {-6, 1}, {6, 4}, {0, -3} } },
	[67] = { .set = { {2, -2}, {2, 4}, {10, -7}, {1, -4} } },
	[68] = { .set = { {2, -2}, {2, 4}, {10, -7}, {1, -4} } },
	[69] = { .set = { {-3, -2}, {-3, 4}, {-11, -7}, {-2, -4} } },
	[70] = { .set = { {-3, -2}, {-3, 4}, {-11, -7}, {-2, -4} } },
	[71] = { .set = { {4, -1}, {8, -1}, {0, 3}, {0, -5} } },
	[72] = { .set = { {4, 0}, {7, -2}, {1, 5}, {0, -4} } },
	[73] = { .set = { {4, 0}, {9, 1}, {-1, 3}, {0, -4} } },
	[74] = { .set = { {1, -6}, {2, 1}, {-10, -9}, {-2, -5} } },
	[75] = { .set = { {1, -6}, {2, 1}, {-10, -9}, {-2, -5} } },
	[76] = { .set = { {4, -7}, {7, -13}, {6, 0}, {0, -6} } },
	[77] = { .set = { {4, -7}, {7, -13}, {6, 0}, {0, -6} } },
	[78] = { .set = { {6, -3}, {6, -4}, {5, 1}, {1, -5} } },
	[79] = { .set = { {6, -2}, {1, -1}, {6, 1}, {1, -4} } },
	[80] = { .set = { {6, -2}, {8, -1}, {3, 1}, {1, -4} } },
	[81] = { .set = { {4, -7}, {6, -2}, {-3, -10}, {-1, -7} } },
	[82] = { .set = { {4, -7}, {6, -2}, {-3, -10}, {-1, -7} } },
	[83] = { .set = { {5, -7}, {3, -14}, {10, -5}, {1, -7} } },
	[84] = { .set = { {5, -7}, {3, -14}, {10, -5}, {1, -7} } },
	[85] = { .set = { {5, -4}, {-3, -5}, {7, -1}, {0, -5} } },
	[86] = { .set = { {5, -3}, {-3, -2}, {8, -1}, {0, -4} } },
	[87] = { .set = { {5, -2}, {0, -5}, {6, 1}, {0, -4} } },
	[88] = { .set = { {3, -6}, {6, -3}, {5, -6}, {-1, -5} } },
	[89] = { .set = { {3, -6}, {6, -3}, {5, -6}, {-1, -5} } },
	[90] = { .set = { {3, -7}, {-4, -11}, {5, -9}, {0, -6} } },
	[91] = { .set = { {3, -7}, {-4, -11}, {5, -9}, {0, -6} } },
	[92] = { .set = { {0, -6}, {5, -3}, {-5, -3}, {0, -5} } },
	[93] = { .set = { {0, -5}, {5, -5}, {-5, -2}, {0, -4} } },
	[94] = { .set = { {0, -5}, {5, -2}, {-5, -5}, {0, -4} } },
	[95] = { .set = { {-3, -5}, {-5, -9}, {-10, -2}, {0, -3} } },
	[96] = { .set = { {-3, -5}, {-5, -9}, {-10, -2}, {0, -3} } },
	[97] = { .set = { {2, -5}, {4, -9}, {9, -2}, {-1, -3} } },
	[98] = { .set = { {2, -5}, {4, -9}, {9, -2}, {-1, -3} } },
	[99] = { .set = { {-5, -4}, {3, -5}, {-7, -1}, {0, -5} } },
	[100] = { .set = { {-5, -3}, {3, -2}, {-8, -1}, {0, -4} } },
	[101] = { .set = { {-5, -2}, {0, -5}, {-6, 1}, {0, -4} } },
	[102] = { .set = { {-3, -6}, {-6, -3}, {-5, -6}, {1, -5} } },
	[103] = { .set = { {-3, -6}, {-6, -3}, {-5, -6}, {1, -5} } },
	[104] = { .set = { {-3, -7}, {4, -11}, {-5, -9}, {0, -6} } },
	[105] = { .set = { {-3, -7}, {4, -11}, {-5, -9}, {0, -6} } },
	[106] = { .set = { {-6, -3}, {-6, -4}, {-5, 1}, {-1, -5} } },
	[107] = { .set = { {-6, -2}, {-1, -1}, {-6, 1}, {-1, -4} } },
	[108] = { .set = { {-6, -2}, {-8, -1}, {-3, 1}, {-1, -4} } },
	[109] = { .set = { {-4, -7}, {-6, -2}, {3, -10}, {1, -7} } },
	[110] = { .set = { {-4, -7}, {-6, -2}, {3, -10}, {1, -7} } },
	[111] = { .set = { {-5, -7}, {-3, -14}, {-10, -5}, {-1, -7} } },
	[112] = { .set = { {-5, -7}, {-3, -14}, {-10, -5}, {-1, -7} } },
	[113] = { .set = { {-4, -1}, {-8, -1}, {0, 3}, {0, -5} } },
	[114] = { .set = { {-4, 0}, {-7, -2}, {-1, 5}, {0, -4} } },
	[115] = { .set = { {-4, 0}, {-9, 1}, {1, 3}, {0, -4} } },
	[116] = { .set = { {-1, -6}, {-2, 1}, {10, -9}, {2, -5} } },
	[117] = { .set = { {-1, -6}, {-2, 1}, {10, -9}, {2, -5} } },
	[118] = { .set = { {-4, -7}, {-7, -13}, {-6, 0}, {0, -6} } },
	[119] = { .set = { {-4, -7}, {-7, -13}, {-6, 0}, {0, -6} } },
	[120] = { .set = { {0, -1}, {-6, 2}, {6, 2}, {0, -4} } },
	[121] = { .set = { {0, 2}, {-6, 3}, {6, 3}, {0, -3} } },
	[122] = { .set = { {4, -1}, {8, -1}, {0, 3}, {0, -5} } },
	[123] = { .set = { {6, -2}, {7, -1}, {-1, 2}, {2, -6} } },
	[124] = { .set = { {6, -3}, {6, -4}, {5, 1}, {1, -5} } },
	[125] = { .set = { {7, -4}, {4, -8}, {3, 1}, {1, -5} } },
	[126] = { .set = { {5, -4}, {-3, -5}, {7, -1}, {0, -5} } },
	[127] = { .set = { {5, -7}, {-3, -5}, {6, -1}, {0, -5} } },
	[128] = { .set = { {0, -6}, {5, -3}, {-5, -3}, {0, -5} } },
	[129] = { .set = { {0, -6}, {5, -2}, {-5, -2}, {0, -5} } },
	[130] = { .set = { {-5, -4}, {3, -5}, {-7, -1}, {0, -5} } },
	[131] = { .set = { {-5, -7}, {3, -5}, {-6, -1}, {0, -5} } },
	[132] = { .set = { {-6, -3}, {-6, -4}, {-5, 1}, {-1, -5} } },
	[133] = { .set = { {-7, -4}, {-4, -8}, {-3, 1}, {-1, -5} } },
	[134] = { .set = { {-4, -1}, {-8, -1}, {0, 3}, {0, -5} } },
	[135] = { .set = { {-6, -2}, {-7, -1}, {1, 2}, {-2, -6} } },
	[136] = { .set = { {0, -1}, {-6, 2}, {6, 2}, {0, -4} } },
	[137] = { .set = { {-4, -1}, {-8, -1}, {0, 3}, {0, -5} } },
	[138] = { .set = { {-6, -3}, {-6, -4}, {-5, 1}, {-1, -5} } },
	[139] = { .set = { {-5, -4}, {3, -5}, {-7, -1}, {0, -5} } },
	[140] = { .set = { {0, -6}, {5, -3}, {-5, -3}, {0, -5} } },
	[141] = { .set = { {5, -4}, {-3, -5}, {7, -1}, {0, -5} } },
	[142] = { .set = { {6, -3}, {6, -4}, {5, 1}, {1, -5} } },
	[143] = { .set = { {4, -1}, {8, -1}, {0, 3}, {0, -5} } },
	[144] = { .set = { {-5, 1}, {-8, -2}, {0, 2}, {-1, -5} } },
	[145] = { .set = { {-5, 0}, {-8, -2}, {0, 2}, {-1, -6} } },
	[146] = { .set = { {0, -13}, {-7, -14}, {7, -14}, {0, -9} } },
	[147] = { .set = { {3, -13}, {4, -18}, {-6, -14}, {0, -9} } },
	[148] = { .set = { {0, -13}, {4, -15}, {2, -12}, {-3, -8} } },
	[149] = { .set = { {0, -13}, {-4, -14}, {5, -12}, {-2, -7} } },
	[150] = { .set = { {0, -13}, {6, -11}, {-6, -11}, {0, -8} } },
	[151] = { .set = { {-1, -13}, {3, -14}, {-6, -12}, {1, -7} } },
	[152] = { .set = { {-1, -13}, {-5, -15}, {-3, -12}, {2, -8} } },
	[153] = { .set = { {-3, -13}, {-4, -18}, {6, -14}, {0, -9} } },
	[154] = { .set = { {0, -1}, {-6, 2}, {6, 2}, {0, -4} } },
	[155] = { .set = { {0, 0}, {-6, 4}, {6, 1}, {0, -3} } },
	[156] = { .set = { {0, 0}, {-6, 1}, {6, 4}, {0, -3} } },
	[157] = { .set = { {4, -1}, {8, -1}, {0, 3}, {0, -5} } },
	[158] = { .set = { {4, 0}, {7, -2}, {1, 5}, {0, -4} } },
	[159] = { .set = { {4, 0}, {9, 1}, {-1, 3}, {0, -4} } },
	[160] = { .set = { {6, -3}, {6, -4}, {5, 1}, {1, -5} } },
	[161] = { .set = { {6, -2}, {1, -1}, {6, 1}, {1, -4} } },
	[162] = { .set = { {6, -2}, {8, -1}, {3, 1}, {1, -4} } },
	[163] = { .set = { {5, -4}, {-3, -5}, {7, -1}, {0, -5} } },
	[164] = { .set = { {5, -3}, {-3, -2}, {8, -1}, {0, -4} } },
	[165] = { .set = { {5, -2}, {0, -5}, {6, 1}, {0, -4} } },
	[166] = { .set = { {0, -6}, {5, -3}, {-5, -3}, {0, -5} } },
	[167] = { .set = { {0, -5}, {5, -5}, {-5, -2}, {0, -4} } },
	[168] = { .set = { {0, -5}, {5, -2}, {-5, -5}, {0, -4} } },
	[169] = { .set = { {-5, -4}, {3, -5}, {-7, -1}, {0, -5} } },
	[170] = { .set = { {-5, -3}, {3, -2}, {-8, -1}, {0, -4} } },
	[171] = { .set = { {-5, -2}, {0, -5}, {-6, 1}, {0, -4} } },
	[172] = { .set = { {-6, -3}, {-6, -4}, {-5, 1}, {-1, -5} } },
	[173] = { .set = { {-6, -2}, {-1, -1}, {-6, 1}, {-1, -4} } },
	[174] = { .set = { {-6, -2}, {-8, -1}, {-3, 1}, {-1, -4} } },
	[175] = { .set = { {-4, -1}, {-8, -1}, {0, 3}, {0, -5} } },
	[176] = { .set = { {-4, 0}, {-7, -2}, {-1, 5}, {0, -4} } },
	[177] = { .set = { {-4, 0}, {-9, 1}, {1, 3}, {0, -4} } },
	[178] = { .set = { {0, 3}, {-6, -3}, {6, -3}, {0, -2} } },
	[179] = { .set = { {-5, 2}, {-1, -7}, {6, -2}, {-2, -4} } },
	[180] = { .set = { {-6, 0}, {3, -3}, {2, 2}, {-1, -5} } },
	[181] = { .set = { {-6, -4}, {3, -5}, {-5, 1}, {-1, -6} } },
	[182] = { .set = { {0, -7}, {5, -2}, {-5, -2}, {0, -6} } },
	[183] = { .set = { {6, -4}, {-3, -5}, {5, 1}, {1, -6} } },
	[184] = { .set = { {6, 0}, {-3, -3}, {-2, 2}, {1, -5} } },
	[185] = { .set = { {5, 2}, {1, -7}, {-6, -2}, {2, -4} } },
	[186] = { .set = { {0, 3}, {-6, -3}, {6, -3}, {0, -2} } },
	[187] = { .set = { {5, 2}, {1, -7}, {-6, -2}, {2, -4} } },
	[188] = { .set = { {6, 1}, {-3, -2}, {-2, 3}, {1, -4} } },
	[189] = { .set = { {6, -3}, {-3, -4}, {5, 2}, {1, -5} } },
	[190] = { .set = { {0, -6}, {5, -1}, {-5, -1}, {0, -5} } },
	[191] = { .set = { {-6, -3}, {3, -4}, {-5, 2}, {-1, -5} } },
	[192] = { .set = { {-6, 1}, {3, -2}, {2, 3}, {-1, -4} } },
	[193] = { .set = { {-5, 2}, {-1, -7}, {6, -2}, {-2, -4} } },
	[194] = { .set = { {0, -1}, {-6, 2}, {6, 2}, {0, -4} } },
	[195] = { .set = { {0, -1}, {-6, 0}, {6, 0}, {0, -6} } },
	[196] = { .set = { {4, -1}, {8, -1}, {0, 3}, {0, -5} } },
	[197] = { .set = { {5, -2}, {6, -1}, {-2, 2}, {1, -6} } },
	[198] = { .set = { {6, -3}, {6, -4}, {5, 1}, {1, -5} } },
	[199] = { .set = { {7, -4}, {4, -8}, {3, 1}, {1, -5} } },
	[200] = { .set = { {5, -4}, {-3, -5}, {7, -1}, {0, -5} } },
	[201] = { .set = { {5, -7}, {-3, -5}, {6, -1}, {0, -5} } },
	[202] = { .set = { {0, -6}, {5, -3}, {-5, -3}, {0, -5} } },
	[203] = { .set = { {0, -6}, {5, -2}, {-5, -2}, {0, -5} } },
	[204] = { .set = { {-5, -4}, {3, -5}, {-7, -1}, {0, -5} } },
	[205] = { .set = { {-5, -7}, {3, -5}, {-6, -1}, {0, -5} } },
	[206] = { .set = { {-6, -3}, {-6, -4}, {-5, 1}, {-1, -5} } },
	[207] = { .set = { {-7, -4}, {-4, -8}, {-3, 1}, {-1, -5} } },
	[208] = { .set = { {-4, -1}, {-8, -1}, {0, 3}, {0, -5} } },
	[209] = { .set = { {-5, -2}, {-6, -1}, {2, 2}, {-1, -6} } },
	[210] = { .set = { {0, 1}, {-6, 2}, {6, 2}, {0, -4} } },
	[211] = { .set = { {-6, -2}, {-7, -1}, {1, 2}, {-2, -6} } },
	[212] = { .set = { {-7, -4}, {-4, -8}, {-3, 1}, {-1, -5} } },
	[213] = { .set = { {-5, -7}, {3, -5}, {-6, -1}, {0, -5} } },
	[214] = { .set = { {0, -6}, {5, -2}, {-5, -2}, {0, -5} } },
	[215] = { .set = { {5, -7}, {-3, -5}, {6, -1}, {0, -5} } },
	[216] = { .set = { {7, -4}, {4, -8}, {3, 1}, {1, -5} } },
	[217] = { .set = { {6, -2}, {7, -1}, {-1, 2}, {2, -6} } },
	[218] = { .set = { {0, -1}, {-6, 2}, {6, 2}, {0, -4} } },
	[219] = { .set = { {-4, -1}, {-8, -1}, {0, 3}, {0, -5} } },
	[220] = { .set = { {-6, -3}, {-6, -4}, {-5, 1}, {-1, -5} } },
	[221] = { .set = { {-5, -4}, {3, -5}, {-7, -1}, {0, -5} } },
	[222] = { .set = { {0, -6}, {5, -3}, {-5, -3}, {0, -5} } },
	[223] = { .set = { {5, -4}, {-3, -5}, {7, -1}, {0, -5} } },
	[224] = { .set = { {6, -3}, {6, -4}, {5, 1}, {1, -5} } },
	[225] = { .set = { {4, -1}, {8, -1}, {0, 3}, {0, -5} } },
};

static const ax_anim *const sNincadaAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sNincadaAnimTable2[] = {
	AX_ANIM_PTR(sNincadaAnims_2_1),
	AX_ANIM_PTR(sNincadaAnims_2_2),
	AX_ANIM_PTR(sNincadaAnims_2_3),
	AX_ANIM_PTR(sNincadaAnims_2_4),
	AX_ANIM_PTR(sNincadaAnims_2_5),
	AX_ANIM_PTR(sNincadaAnims_2_6),
	AX_ANIM_PTR(sNincadaAnims_2_7),
	AX_ANIM_PTR(sNincadaAnims_2_8),
};

static const ax_anim *const sNincadaAnimTable3[] = {
	AX_ANIM_PTR(sNincadaAnims_3_1),
	AX_ANIM_PTR(sNincadaAnims_3_2),
	AX_ANIM_PTR(sNincadaAnims_3_3),
	AX_ANIM_PTR(sNincadaAnims_3_4),
	AX_ANIM_PTR(sNincadaAnims_3_5),
	AX_ANIM_PTR(sNincadaAnims_3_6),
	AX_ANIM_PTR(sNincadaAnims_3_7),
	AX_ANIM_PTR(sNincadaAnims_3_8),
};

static const ax_anim *const sNincadaAnimTable4[] = {
	AX_ANIM_PTR(sNincadaAnims_4_1),
	AX_ANIM_PTR(sNincadaAnims_4_2),
	AX_ANIM_PTR(sNincadaAnims_4_3),
	AX_ANIM_PTR(sNincadaAnims_4_4),
	AX_ANIM_PTR(sNincadaAnims_4_5),
	AX_ANIM_PTR(sNincadaAnims_4_6),
	AX_ANIM_PTR(sNincadaAnims_4_7),
	AX_ANIM_PTR(sNincadaAnims_4_8),
};

static const ax_anim *const sNincadaAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00449),
	AX_ANIM_PTR(gAxSharedAnim_00513),
	AX_ANIM_PTR(gAxSharedAnim_00507),
	AX_ANIM_PTR(gAxSharedAnim_00501),
	AX_ANIM_PTR(gAxSharedAnim_00493),
	AX_ANIM_PTR(gAxSharedAnim_00484),
	AX_ANIM_PTR(gAxSharedAnim_00475),
	AX_ANIM_PTR(gAxSharedAnim_00460),
};

static const ax_anim *const sNincadaAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
};

static const ax_anim *const sNincadaAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00532),
	AX_ANIM_PTR(gAxSharedAnim_00544),
	AX_ANIM_PTR(gAxSharedAnim_00552),
	AX_ANIM_PTR(gAxSharedAnim_00560),
	AX_ANIM_PTR(gAxSharedAnim_00578),
	AX_ANIM_PTR(gAxSharedAnim_00588),
	AX_ANIM_PTR(gAxSharedAnim_00597),
	AX_ANIM_PTR(gAxSharedAnim_00603),
};

static const ax_anim *const sNincadaAnimTable8[] = {
	AX_ANIM_PTR(sNincadaAnims_8_1),
	AX_ANIM_PTR(sNincadaAnims_8_2),
	AX_ANIM_PTR(sNincadaAnims_8_3),
	AX_ANIM_PTR(sNincadaAnims_8_4),
	AX_ANIM_PTR(sNincadaAnims_8_5),
	AX_ANIM_PTR(sNincadaAnims_8_6),
	AX_ANIM_PTR(sNincadaAnims_8_7),
	AX_ANIM_PTR(sNincadaAnims_8_8),
};

static const ax_anim *const sNincadaAnimTable9[] = {
	AX_ANIM_PTR(sNincadaAnims_9_1),
	AX_ANIM_PTR(sNincadaAnims_9_2),
	AX_ANIM_PTR(sNincadaAnims_9_3),
	AX_ANIM_PTR(sNincadaAnims_9_4),
	AX_ANIM_PTR(sNincadaAnims_9_5),
	AX_ANIM_PTR(sNincadaAnims_9_6),
	AX_ANIM_PTR(sNincadaAnims_9_7),
	AX_ANIM_PTR(sNincadaAnims_9_8),
};

static const ax_anim *const sNincadaAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01016),
	AX_ANIM_PTR(gAxSharedAnim_01027),
	AX_ANIM_PTR(gAxSharedAnim_01046),
	AX_ANIM_PTR(gAxSharedAnim_01061),
	AX_ANIM_PTR(gAxSharedAnim_01078),
	AX_ANIM_PTR(gAxSharedAnim_01092),
	AX_ANIM_PTR(gAxSharedAnim_01110),
	AX_ANIM_PTR(gAxSharedAnim_01124),
};

static const ax_anim *const sNincadaAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_01136),
	AX_ANIM_PTR(sNincadaAnims_11_2),
	AX_ANIM_PTR(sNincadaAnims_11_3),
	AX_ANIM_PTR(sNincadaAnims_11_4),
	AX_ANIM_PTR(gAxSharedAnim_01237),
	AX_ANIM_PTR(sNincadaAnims_11_6),
	AX_ANIM_PTR(sNincadaAnims_11_7),
	AX_ANIM_PTR(sNincadaAnims_11_8),
};

static const ax_anim *const sNincadaAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01337),
	AX_ANIM_PTR(gAxSharedAnim_01414),
	AX_ANIM_PTR(gAxSharedAnim_01392),
	AX_ANIM_PTR(gAxSharedAnim_01380),
	AX_ANIM_PTR(gAxSharedAnim_01379),
	AX_ANIM_PTR(gAxSharedAnim_01368),
	AX_ANIM_PTR(gAxSharedAnim_01354),
	AX_ANIM_PTR(gAxSharedAnim_01338),
};

static const ax_anim *const sNincadaAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01422),
	AX_ANIM_PTR(gAxSharedAnim_01464),
	AX_ANIM_PTR(gAxSharedAnim_01461),
	AX_ANIM_PTR(gAxSharedAnim_01456),
	AX_ANIM_PTR(gAxSharedAnim_01446),
	AX_ANIM_PTR(gAxSharedAnim_01443),
	AX_ANIM_PTR(gAxSharedAnim_01438),
	AX_ANIM_PTR(gAxSharedAnim_01429),
};

static const ax_anim *const *const sAxAnimationsNincada[] = {
	sNincadaAnimTable1,
	sNincadaAnimTable2,
	sNincadaAnimTable3,
	sNincadaAnimTable4,
	sNincadaAnimTable5,
	sNincadaAnimTable6,
	sNincadaAnimTable7,
	sNincadaAnimTable8,
	sNincadaAnimTable9,
	sNincadaAnimTable10,
	sNincadaAnimTable11,
	sNincadaAnimTable12,
	sNincadaAnimTable13,
};

static const ax_sprite *const sAxSpritesNincada[] = {
	sNincadaSprites1,
	sNincadaSprites2,
	sNincadaSprites3,
	sNincadaSprites4,
	sNincadaSprites5,
	sNincadaSprites6,
	sNincadaSprites7,
	sNincadaSprites8,
	sNincadaSprites9,
	sNincadaSprites10,
	sNincadaSprites11,
	sNincadaSprites12,
	sNincadaSprites13,
	sNincadaSprites14,
	sNincadaSprites15,
	sNincadaSprites16,
	sNincadaSprites17,
	sNincadaSprites18,
	sNincadaSprites19,
	sNincadaSprites20,
	sNincadaSprites21,
	sNincadaSprites22,
	sNincadaSprites23,
	sNincadaSprites24,
	sNincadaSprites25,
	sNincadaSprites26,
	sNincadaSprites27,
	sNincadaSprites28,
	sNincadaSprites29,
	sNincadaSprites30,
	sNincadaSprites31,
	sNincadaSprites32,
	sNincadaSprites33,
	sNincadaSprites34,
	sNincadaSprites35,
	sNincadaSprites36,
	sNincadaSprites37,
	sNincadaSprites38,
	sNincadaSprites39,
	sNincadaSprites40,
	sNincadaSprites41,
	sNincadaSprites42,
	sNincadaSprites43,
	sNincadaSprites44,
	sNincadaSprites45,
	sNincadaSprites46,
	sNincadaSprites47,
	sNincadaSprites48,
	sNincadaSprites49,
	sNincadaSprites50,
};

static const axmain sAxMainNincada = {
	.poses = sAxPosesNincada,
	.animations = sAxAnimationsNincada,
	.animCount = ARRAY_COUNT(sAxAnimationsNincada),
	.spriteData = sAxSpritesNincada,
	.positions = sAxPositionsNincada,
};
