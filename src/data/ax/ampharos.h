/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainAmpharos;
const SiroArchive gAxAmpharos = {"SIRO", &sAxMainAmpharos};

static const ax_pose sAmpharosPose1[] = {
	AX_POSE(0, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose2[] = {
	AX_POSE(1, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose3[] = {
	AX_POSE(2, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose4[] = {
	AX_POSE(3, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose5[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose6[] = {
	AX_POSE(5, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose7[] = {
	AX_POSE(6, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose8[] = {
	AX_POSE(7, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose9[] = {
	AX_POSE(8, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose10[] = {
	AX_POSE(9, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose11[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose12[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose13[] = {
	AX_POSE(12, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose14[] = {
	AX_POSE(13, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose15[] = {
	AX_POSE(14, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose16[] = {
	AX_POSE(9, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose17[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose18[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose19[] = {
	AX_POSE(6, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose20[] = {
	AX_POSE(7, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose21[] = {
	AX_POSE(8, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose22[] = {
	AX_POSE(3, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose23[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose24[] = {
	AX_POSE(5, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose26[] = {
	AX_POSE(15, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose27[] = {
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose29[] = {
	AX_POSE(17, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose30[] = {
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose31[] = {
	AX_POSE(6, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose32[] = {
	AX_POSE(19, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose33[] = {
	AX_POSE(20, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose35[] = {
	AX_POSE(21, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose36[] = {
	AX_POSE(22, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose37[] = {
	AX_POSE(12, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose38[] = {
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose39[] = {
	AX_POSE(24, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose41[] = {
	AX_POSE(21, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose42[] = {
	AX_POSE(22, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose44[] = {
	AX_POSE(19, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose45[] = {
	AX_POSE(20, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose47[] = {
	AX_POSE(17, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose48[] = {
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose74[] = {
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose75[] = {
	AX_POSE(26, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose76[] = {
	AX_POSE(27, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose78[] = {
	AX_POSE(28, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose79[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose80[] = {
	AX_POSE(30, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose82[] = {
	AX_POSE(31, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose83[] = {
	AX_POSE(32, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose84[] = {
	AX_POSE(33, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose86[] = {
	AX_POSE(34, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose87[] = {
	AX_POSE(35, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose88[] = {
	AX_POSE(36, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose90[] = {
	AX_POSE(37, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose91[] = {
	AX_POSE(38, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose92[] = {
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose94[] = {
	AX_POSE(34, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose95[] = {
	AX_POSE(35, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose96[] = {
	AX_POSE(36, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose98[] = {
	AX_POSE(31, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose99[] = {
	AX_POSE(32, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose100[] = {
	AX_POSE(33, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose102[] = {
	AX_POSE(28, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose103[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose104[] = {
	AX_POSE(30, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose137[] = {
	AX_POSE(40, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose138[] = {
	AX_POSE(41, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose139[] = {
	AX_POSE(42, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose140[] = {
	AX_POSE(43, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose141[] = {
	AX_POSE(44, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose142[] = {
	AX_POSE(45, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose143[] = {
	AX_POSE(46, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose144[] = {
	AX_POSE(45, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose145[] = {
	AX_POSE(44, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose146[] = {
	AX_POSE(43, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose151[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose154[] = {
	AX_POSE(20, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose155[] = {
	AX_POSE(19, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose157[] = {
	AX_POSE(22, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose160[] = {
	AX_POSE(24, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose163[] = {
	AX_POSE(22, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose166[] = {
	AX_POSE(20, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose169[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose171[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose173[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose174[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose175[] = {
	AX_POSE(24, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose176[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose177[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose181[] = {
	AX_POSE(20, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose182[] = {
	AX_POSE(22, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose212[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose213[] = {
	AX_POSE(32, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose214[] = {
	AX_POSE(35, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose216[] = {
	AX_POSE(35, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAmpharosPose218[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const u8 sAmpharosAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_2_1.lz");
static const u8 sAmpharosAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_2_2.lz");
static const u8 sAmpharosAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_2_3.lz");
static const u8 sAmpharosAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_2_4.lz");
static const u8 sAmpharosAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_2_5.lz");
static const u8 sAmpharosAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_2_6.lz");
static const u8 sAmpharosAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_2_7.lz");
static const u8 sAmpharosAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_2_8.lz");
static const u8 sAmpharosAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_3_1.lz");
static const u8 sAmpharosAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_3_2.lz");
static const u8 sAmpharosAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_3_3.lz");
static const u8 sAmpharosAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_3_4.lz");
static const u8 sAmpharosAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_3_5.lz");
static const u8 sAmpharosAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_3_6.lz");
static const u8 sAmpharosAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_3_7.lz");
static const u8 sAmpharosAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_3_8.lz");
static const u8 sAmpharosAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_4_1.lz");
static const u8 sAmpharosAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_4_2.lz");
static const u8 sAmpharosAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_4_3.lz");
static const u8 sAmpharosAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_4_4.lz");
static const u8 sAmpharosAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_4_5.lz");
static const u8 sAmpharosAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_4_6.lz");
static const u8 sAmpharosAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_4_7.lz");
static const u8 sAmpharosAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_4_8.lz");
static const u8 sAmpharosAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_5_1.lz");
static const u8 sAmpharosAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_5_2.lz");
static const u8 sAmpharosAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_5_3.lz");
static const u8 sAmpharosAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_5_4.lz");
static const u8 sAmpharosAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_5_5.lz");
static const u8 sAmpharosAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_5_6.lz");
static const u8 sAmpharosAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_5_7.lz");
static const u8 sAmpharosAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_5_8.lz");
static const u8 sAmpharosAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_8_1.lz");
static const u8 sAmpharosAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_8_2.lz");
static const u8 sAmpharosAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_8_3.lz");
static const u8 sAmpharosAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_8_4.lz");
static const u8 sAmpharosAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_8_5.lz");
static const u8 sAmpharosAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_8_6.lz");
static const u8 sAmpharosAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_8_7.lz");
static const u8 sAmpharosAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_8_8.lz");
static const u8 sAmpharosAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_9_1.lz");
static const u8 sAmpharosAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_9_2.lz");
static const u8 sAmpharosAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_9_3.lz");
static const u8 sAmpharosAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_9_4.lz");
static const u8 sAmpharosAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_9_5.lz");
static const u8 sAmpharosAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_9_6.lz");
static const u8 sAmpharosAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_9_7.lz");
static const u8 sAmpharosAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_9_8.lz");
static const u8 sAmpharosAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_11_1.lz");
static const u8 sAmpharosAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_11_2.lz");
static const u8 sAmpharosAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_11_3.lz");
static const u8 sAmpharosAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_11_4.lz");
static const u8 sAmpharosAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_11_5.lz");
static const u8 sAmpharosAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_11_6.lz");
static const u8 sAmpharosAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_11_7.lz");
static const u8 sAmpharosAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ampharos/sAmpharosAnims_11_8.lz");

static const u8 sAmpharosGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_1.4bpp.lz");
static const ax_sprite sAmpharosSprites1[] = {
	{sAmpharosGfx1, ARRAY_COUNT(sAmpharosGfx1)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_2.4bpp.lz");
static const ax_sprite sAmpharosSprites2[] = {
	{sAmpharosGfx2, ARRAY_COUNT(sAmpharosGfx2)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_3.4bpp.lz");
static const ax_sprite sAmpharosSprites3[] = {
	{sAmpharosGfx3, ARRAY_COUNT(sAmpharosGfx3)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_4.4bpp.lz");
static const ax_sprite sAmpharosSprites4[] = {
	{sAmpharosGfx4, ARRAY_COUNT(sAmpharosGfx4)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_5.4bpp.lz");
static const ax_sprite sAmpharosSprites5[] = {
	{sAmpharosGfx5, ARRAY_COUNT(sAmpharosGfx5)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_6.4bpp.lz");
static const ax_sprite sAmpharosSprites6[] = {
	{sAmpharosGfx6, ARRAY_COUNT(sAmpharosGfx6)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_7.4bpp.lz");
static const ax_sprite sAmpharosSprites7[] = {
	{sAmpharosGfx7, ARRAY_COUNT(sAmpharosGfx7)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_8.4bpp.lz");
static const ax_sprite sAmpharosSprites8[] = {
	{sAmpharosGfx8, ARRAY_COUNT(sAmpharosGfx8)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_9.4bpp.lz");
static const ax_sprite sAmpharosSprites9[] = {
	{sAmpharosGfx9, ARRAY_COUNT(sAmpharosGfx9)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_10.4bpp.lz");
static const ax_sprite sAmpharosSprites10[] = {
	{sAmpharosGfx10, ARRAY_COUNT(sAmpharosGfx10)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_11.4bpp.lz");
static const ax_sprite sAmpharosSprites11[] = {
	{sAmpharosGfx11, ARRAY_COUNT(sAmpharosGfx11)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_12.4bpp.lz");
static const ax_sprite sAmpharosSprites12[] = {
	{sAmpharosGfx12, ARRAY_COUNT(sAmpharosGfx12)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_13.4bpp.lz");
static const ax_sprite sAmpharosSprites13[] = {
	{sAmpharosGfx13, ARRAY_COUNT(sAmpharosGfx13)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_14.4bpp.lz");
static const ax_sprite sAmpharosSprites14[] = {
	{sAmpharosGfx14, ARRAY_COUNT(sAmpharosGfx14)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_15.4bpp.lz");
static const ax_sprite sAmpharosSprites15[] = {
	{sAmpharosGfx15, ARRAY_COUNT(sAmpharosGfx15)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_16.4bpp.lz");
static const u8 sAmpharosGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_16_1.4bpp.lz");
static const u8 sAmpharosGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_16_2.4bpp.lz");
static const ax_sprite sAmpharosSprites16[] = {
	{NULL, 128}, 
	{sAmpharosGfx16, ARRAY_COUNT(sAmpharosGfx16)}, 
	{NULL, 32}, 
	{sAmpharosGfx16_1, ARRAY_COUNT(sAmpharosGfx16_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx16_2, ARRAY_COUNT(sAmpharosGfx16_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_17.4bpp.lz");
static const u8 sAmpharosGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_17_1.4bpp.lz");
static const u8 sAmpharosGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_17_2.4bpp.lz");
static const u8 sAmpharosGfx17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_17_3.4bpp.lz");
static const ax_sprite sAmpharosSprites17[] = {
	{sAmpharosGfx17, ARRAY_COUNT(sAmpharosGfx17)}, 
	{NULL, 32}, 
	{sAmpharosGfx17_1, ARRAY_COUNT(sAmpharosGfx17_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx17_2, ARRAY_COUNT(sAmpharosGfx17_2)}, 
	{NULL, 32}, 
	{sAmpharosGfx17_3, ARRAY_COUNT(sAmpharosGfx17_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_18.4bpp.lz");
static const u8 sAmpharosGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_18_1.4bpp.lz");
static const u8 sAmpharosGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_18_2.4bpp.lz");
static const ax_sprite sAmpharosSprites18[] = {
	{NULL, 128}, 
	{sAmpharosGfx18, ARRAY_COUNT(sAmpharosGfx18)}, 
	{NULL, 32}, 
	{sAmpharosGfx18_1, ARRAY_COUNT(sAmpharosGfx18_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx18_2, ARRAY_COUNT(sAmpharosGfx18_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_19.4bpp.lz");
static const u8 sAmpharosGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_19_1.4bpp.lz");
static const u8 sAmpharosGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_19_2.4bpp.lz");
static const u8 sAmpharosGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_19_3.4bpp.lz");
static const ax_sprite sAmpharosSprites19[] = {
	{NULL, 32}, 
	{sAmpharosGfx19, ARRAY_COUNT(sAmpharosGfx19)}, 
	{NULL, 32}, 
	{sAmpharosGfx19_1, ARRAY_COUNT(sAmpharosGfx19_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx19_2, ARRAY_COUNT(sAmpharosGfx19_2)}, 
	{NULL, 32}, 
	{sAmpharosGfx19_3, ARRAY_COUNT(sAmpharosGfx19_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_20.4bpp.lz");
static const u8 sAmpharosGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_20_1.4bpp.lz");
static const u8 sAmpharosGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_20_2.4bpp.lz");
static const ax_sprite sAmpharosSprites20[] = {
	{NULL, 128}, 
	{sAmpharosGfx20, ARRAY_COUNT(sAmpharosGfx20)}, 
	{NULL, 64}, 
	{sAmpharosGfx20_1, ARRAY_COUNT(sAmpharosGfx20_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx20_2, ARRAY_COUNT(sAmpharosGfx20_2)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_21.4bpp.lz");
static const u8 sAmpharosGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_21_1.4bpp.lz");
static const u8 sAmpharosGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_21_2.4bpp.lz");
static const u8 sAmpharosGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_21_3.4bpp.lz");
static const ax_sprite sAmpharosSprites21[] = {
	{sAmpharosGfx21, ARRAY_COUNT(sAmpharosGfx21)}, 
	{NULL, 64}, 
	{sAmpharosGfx21_1, ARRAY_COUNT(sAmpharosGfx21_1)}, 
	{NULL, 64}, 
	{sAmpharosGfx21_2, ARRAY_COUNT(sAmpharosGfx21_2)}, 
	{NULL, 32}, 
	{sAmpharosGfx21_3, ARRAY_COUNT(sAmpharosGfx21_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_22.4bpp.lz");
static const u8 sAmpharosGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_22_1.4bpp.lz");
static const u8 sAmpharosGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_22_2.4bpp.lz");
static const ax_sprite sAmpharosSprites22[] = {
	{NULL, 128}, 
	{sAmpharosGfx22, ARRAY_COUNT(sAmpharosGfx22)}, 
	{NULL, 64}, 
	{sAmpharosGfx22_1, ARRAY_COUNT(sAmpharosGfx22_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx22_2, ARRAY_COUNT(sAmpharosGfx22_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_23.4bpp.lz");
static const u8 sAmpharosGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_23_1.4bpp.lz");
static const u8 sAmpharosGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_23_2.4bpp.lz");
static const u8 sAmpharosGfx23_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_23_3.4bpp.lz");
static const ax_sprite sAmpharosSprites23[] = {
	{NULL, 32}, 
	{sAmpharosGfx23, ARRAY_COUNT(sAmpharosGfx23)}, 
	{NULL, 32}, 
	{sAmpharosGfx23_1, ARRAY_COUNT(sAmpharosGfx23_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx23_2, ARRAY_COUNT(sAmpharosGfx23_2)}, 
	{NULL, 32}, 
	{sAmpharosGfx23_3, ARRAY_COUNT(sAmpharosGfx23_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_24.4bpp.lz");
static const u8 sAmpharosGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_24_1.4bpp.lz");
static const u8 sAmpharosGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_24_2.4bpp.lz");
static const ax_sprite sAmpharosSprites24[] = {
	{NULL, 128}, 
	{sAmpharosGfx24, ARRAY_COUNT(sAmpharosGfx24)}, 
	{NULL, 32}, 
	{sAmpharosGfx24_1, ARRAY_COUNT(sAmpharosGfx24_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx24_2, ARRAY_COUNT(sAmpharosGfx24_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_25.4bpp.lz");
static const u8 sAmpharosGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_25_1.4bpp.lz");
static const u8 sAmpharosGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_25_2.4bpp.lz");
static const u8 sAmpharosGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_25_3.4bpp.lz");
static const ax_sprite sAmpharosSprites25[] = {
	{sAmpharosGfx25, ARRAY_COUNT(sAmpharosGfx25)}, 
	{NULL, 64}, 
	{sAmpharosGfx25_1, ARRAY_COUNT(sAmpharosGfx25_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx25_2, ARRAY_COUNT(sAmpharosGfx25_2)}, 
	{NULL, 32}, 
	{sAmpharosGfx25_3, ARRAY_COUNT(sAmpharosGfx25_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_26.4bpp.lz");
static const u8 sAmpharosGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_26_1.4bpp.lz");
static const u8 sAmpharosGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_26_2.4bpp.lz");
static const u8 sAmpharosGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_26_3.4bpp.lz");
static const ax_sprite sAmpharosSprites26[] = {
	{sAmpharosGfx26, ARRAY_COUNT(sAmpharosGfx26)}, 
	{NULL, 32}, 
	{sAmpharosGfx26_1, ARRAY_COUNT(sAmpharosGfx26_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx26_2, ARRAY_COUNT(sAmpharosGfx26_2)}, 
	{NULL, 32}, 
	{sAmpharosGfx26_3, ARRAY_COUNT(sAmpharosGfx26_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_27.4bpp.lz");
static const u8 sAmpharosGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_27_1.4bpp.lz");
static const u8 sAmpharosGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_27_2.4bpp.lz");
static const ax_sprite sAmpharosSprites27[] = {
	{NULL, 128}, 
	{sAmpharosGfx27, ARRAY_COUNT(sAmpharosGfx27)}, 
	{NULL, 32}, 
	{sAmpharosGfx27_1, ARRAY_COUNT(sAmpharosGfx27_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx27_2, ARRAY_COUNT(sAmpharosGfx27_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_28.4bpp.lz");
static const u8 sAmpharosGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_28_1.4bpp.lz");
static const u8 sAmpharosGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_28_2.4bpp.lz");
static const ax_sprite sAmpharosSprites28[] = {
	{NULL, 128}, 
	{sAmpharosGfx28, ARRAY_COUNT(sAmpharosGfx28)}, 
	{NULL, 32}, 
	{sAmpharosGfx28_1, ARRAY_COUNT(sAmpharosGfx28_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx28_2, ARRAY_COUNT(sAmpharosGfx28_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_29.4bpp.lz");
static const u8 sAmpharosGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_29_1.4bpp.lz");
static const u8 sAmpharosGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_29_2.4bpp.lz");
static const u8 sAmpharosGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_29_3.4bpp.lz");
static const ax_sprite sAmpharosSprites29[] = {
	{NULL, 32}, 
	{sAmpharosGfx29, ARRAY_COUNT(sAmpharosGfx29)}, 
	{NULL, 32}, 
	{sAmpharosGfx29_1, ARRAY_COUNT(sAmpharosGfx29_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx29_2, ARRAY_COUNT(sAmpharosGfx29_2)}, 
	{NULL, 32}, 
	{sAmpharosGfx29_3, ARRAY_COUNT(sAmpharosGfx29_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_30.4bpp.lz");
static const u8 sAmpharosGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_30_1.4bpp.lz");
static const u8 sAmpharosGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_30_2.4bpp.lz");
static const u8 sAmpharosGfx30_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_30_3.4bpp.lz");
static const ax_sprite sAmpharosSprites30[] = {
	{sAmpharosGfx30, ARRAY_COUNT(sAmpharosGfx30)}, 
	{NULL, 96}, 
	{sAmpharosGfx30_1, ARRAY_COUNT(sAmpharosGfx30_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx30_2, ARRAY_COUNT(sAmpharosGfx30_2)}, 
	{NULL, 32}, 
	{sAmpharosGfx30_3, ARRAY_COUNT(sAmpharosGfx30_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_31.4bpp.lz");
static const u8 sAmpharosGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_31_1.4bpp.lz");
static const u8 sAmpharosGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_31_2.4bpp.lz");
static const u8 sAmpharosGfx31_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_31_3.4bpp.lz");
static const ax_sprite sAmpharosSprites31[] = {
	{sAmpharosGfx31, ARRAY_COUNT(sAmpharosGfx31)}, 
	{NULL, 96}, 
	{sAmpharosGfx31_1, ARRAY_COUNT(sAmpharosGfx31_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx31_2, ARRAY_COUNT(sAmpharosGfx31_2)}, 
	{NULL, 32}, 
	{sAmpharosGfx31_3, ARRAY_COUNT(sAmpharosGfx31_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_32.4bpp.lz");
static const u8 sAmpharosGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_32_1.4bpp.lz");
static const u8 sAmpharosGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_32_2.4bpp.lz");
static const u8 sAmpharosGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_32_3.4bpp.lz");
static const ax_sprite sAmpharosSprites32[] = {
	{sAmpharosGfx32, ARRAY_COUNT(sAmpharosGfx32)}, 
	{NULL, 64}, 
	{sAmpharosGfx32_1, ARRAY_COUNT(sAmpharosGfx32_1)}, 
	{NULL, 64}, 
	{sAmpharosGfx32_2, ARRAY_COUNT(sAmpharosGfx32_2)}, 
	{NULL, 32}, 
	{sAmpharosGfx32_3, ARRAY_COUNT(sAmpharosGfx32_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_33.4bpp.lz");
static const u8 sAmpharosGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_33_1.4bpp.lz");
static const u8 sAmpharosGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_33_2.4bpp.lz");
static const u8 sAmpharosGfx33_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_33_3.4bpp.lz");
static const ax_sprite sAmpharosSprites33[] = {
	{sAmpharosGfx33, ARRAY_COUNT(sAmpharosGfx33)}, 
	{NULL, 64}, 
	{sAmpharosGfx33_1, ARRAY_COUNT(sAmpharosGfx33_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx33_2, ARRAY_COUNT(sAmpharosGfx33_2)}, 
	{NULL, 32}, 
	{sAmpharosGfx33_3, ARRAY_COUNT(sAmpharosGfx33_3)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_34.4bpp.lz");
static const u8 sAmpharosGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_34_1.4bpp.lz");
static const u8 sAmpharosGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_34_2.4bpp.lz");
static const ax_sprite sAmpharosSprites34[] = {
	{sAmpharosGfx34, ARRAY_COUNT(sAmpharosGfx34)}, 
	{NULL, 64}, 
	{sAmpharosGfx34_1, ARRAY_COUNT(sAmpharosGfx34_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx34_2, ARRAY_COUNT(sAmpharosGfx34_2)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_35.4bpp.lz");
static const u8 sAmpharosGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_35_1.4bpp.lz");
static const u8 sAmpharosGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_35_2.4bpp.lz");
static const u8 sAmpharosGfx35_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_35_3.4bpp.lz");
static const ax_sprite sAmpharosSprites35[] = {
	{sAmpharosGfx35, ARRAY_COUNT(sAmpharosGfx35)}, 
	{NULL, 32}, 
	{sAmpharosGfx35_1, ARRAY_COUNT(sAmpharosGfx35_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx35_2, ARRAY_COUNT(sAmpharosGfx35_2)}, 
	{NULL, 64}, 
	{sAmpharosGfx35_3, ARRAY_COUNT(sAmpharosGfx35_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_36.4bpp.lz");
static const u8 sAmpharosGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_36_1.4bpp.lz");
static const u8 sAmpharosGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_36_2.4bpp.lz");
static const u8 sAmpharosGfx36_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_36_3.4bpp.lz");
static const ax_sprite sAmpharosSprites36[] = {
	{NULL, 32}, 
	{sAmpharosGfx36, ARRAY_COUNT(sAmpharosGfx36)}, 
	{NULL, 64}, 
	{sAmpharosGfx36_1, ARRAY_COUNT(sAmpharosGfx36_1)}, 
	{NULL, 64}, 
	{sAmpharosGfx36_2, ARRAY_COUNT(sAmpharosGfx36_2)}, 
	{NULL, 32}, 
	{sAmpharosGfx36_3, ARRAY_COUNT(sAmpharosGfx36_3)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_37.4bpp.lz");
static const u8 sAmpharosGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_37_1.4bpp.lz");
static const u8 sAmpharosGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_37_2.4bpp.lz");
static const u8 sAmpharosGfx37_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_37_3.4bpp.lz");
static const ax_sprite sAmpharosSprites37[] = {
	{NULL, 32}, 
	{sAmpharosGfx37, ARRAY_COUNT(sAmpharosGfx37)}, 
	{NULL, 64}, 
	{sAmpharosGfx37_1, ARRAY_COUNT(sAmpharosGfx37_1)}, 
	{NULL, 64}, 
	{sAmpharosGfx37_2, ARRAY_COUNT(sAmpharosGfx37_2)}, 
	{NULL, 32}, 
	{sAmpharosGfx37_3, ARRAY_COUNT(sAmpharosGfx37_3)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_38.4bpp.lz");
static const u8 sAmpharosGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_38_1.4bpp.lz");
static const u8 sAmpharosGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_38_2.4bpp.lz");
static const u8 sAmpharosGfx38_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_38_3.4bpp.lz");
static const ax_sprite sAmpharosSprites38[] = {
	{sAmpharosGfx38, ARRAY_COUNT(sAmpharosGfx38)}, 
	{NULL, 32}, 
	{sAmpharosGfx38_1, ARRAY_COUNT(sAmpharosGfx38_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx38_2, ARRAY_COUNT(sAmpharosGfx38_2)}, 
	{NULL, 32}, 
	{sAmpharosGfx38_3, ARRAY_COUNT(sAmpharosGfx38_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_39.4bpp.lz");
static const u8 sAmpharosGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_39_1.4bpp.lz");
static const u8 sAmpharosGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_39_2.4bpp.lz");
static const u8 sAmpharosGfx39_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_39_3.4bpp.lz");
static const ax_sprite sAmpharosSprites39[] = {
	{sAmpharosGfx39, ARRAY_COUNT(sAmpharosGfx39)}, 
	{NULL, 32}, 
	{sAmpharosGfx39_1, ARRAY_COUNT(sAmpharosGfx39_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx39_2, ARRAY_COUNT(sAmpharosGfx39_2)}, 
	{NULL, 32}, 
	{sAmpharosGfx39_3, ARRAY_COUNT(sAmpharosGfx39_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_40.4bpp.lz");
static const u8 sAmpharosGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_40_1.4bpp.lz");
static const u8 sAmpharosGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_40_2.4bpp.lz");
static const u8 sAmpharosGfx40_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_40_3.4bpp.lz");
static const ax_sprite sAmpharosSprites40[] = {
	{sAmpharosGfx40, ARRAY_COUNT(sAmpharosGfx40)}, 
	{NULL, 32}, 
	{sAmpharosGfx40_1, ARRAY_COUNT(sAmpharosGfx40_1)}, 
	{NULL, 32}, 
	{sAmpharosGfx40_2, ARRAY_COUNT(sAmpharosGfx40_2)}, 
	{NULL, 32}, 
	{sAmpharosGfx40_3, ARRAY_COUNT(sAmpharosGfx40_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_41.4bpp.lz");
static const ax_sprite sAmpharosSprites41[] = {
	{sAmpharosGfx41, ARRAY_COUNT(sAmpharosGfx41)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_42.4bpp.lz");
static const ax_sprite sAmpharosSprites42[] = {
	{sAmpharosGfx42, ARRAY_COUNT(sAmpharosGfx42)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_43.4bpp.lz");
static const ax_sprite sAmpharosSprites43[] = {
	{sAmpharosGfx43, ARRAY_COUNT(sAmpharosGfx43)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_44.4bpp.lz");
static const ax_sprite sAmpharosSprites44[] = {
	{sAmpharosGfx44, ARRAY_COUNT(sAmpharosGfx44)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_45.4bpp.lz");
static const ax_sprite sAmpharosSprites45[] = {
	{sAmpharosGfx45, ARRAY_COUNT(sAmpharosGfx45)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_46.4bpp.lz");
static const ax_sprite sAmpharosSprites46[] = {
	{sAmpharosGfx46, ARRAY_COUNT(sAmpharosGfx46)}, 
	{NULL, 0}
};
static const u8 sAmpharosGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ampharos/sprite_47.4bpp.lz");
static const ax_sprite sAmpharosSprites47[] = {
	{sAmpharosGfx47, ARRAY_COUNT(sAmpharosGfx47)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesAmpharos[] = {
	sAmpharosPose1,
	sAmpharosPose2,
	sAmpharosPose3,
	sAmpharosPose4,
	sAmpharosPose5,
	sAmpharosPose6,
	sAmpharosPose7,
	sAmpharosPose8,
	sAmpharosPose9,
	sAmpharosPose10,
	sAmpharosPose11,
	sAmpharosPose12,
	sAmpharosPose13,
	sAmpharosPose14,
	sAmpharosPose15,
	sAmpharosPose16,
	sAmpharosPose17,
	sAmpharosPose18,
	sAmpharosPose19,
	sAmpharosPose20,
	sAmpharosPose21,
	sAmpharosPose22,
	sAmpharosPose23,
	sAmpharosPose24,
	sAmpharosPose1,
	sAmpharosPose26,
	sAmpharosPose27,
	sAmpharosPose4,
	sAmpharosPose29,
	sAmpharosPose30,
	sAmpharosPose31,
	sAmpharosPose32,
	sAmpharosPose33,
	sAmpharosPose10,
	sAmpharosPose35,
	sAmpharosPose36,
	sAmpharosPose37,
	sAmpharosPose38,
	sAmpharosPose39,
	sAmpharosPose16,
	sAmpharosPose41,
	sAmpharosPose42,
	sAmpharosPose19,
	sAmpharosPose44,
	sAmpharosPose45,
	sAmpharosPose22,
	sAmpharosPose47,
	sAmpharosPose48,
	sAmpharosPose1,
	sAmpharosPose26,
	sAmpharosPose27,
	sAmpharosPose4,
	sAmpharosPose29,
	sAmpharosPose30,
	sAmpharosPose31,
	sAmpharosPose32,
	sAmpharosPose33,
	sAmpharosPose10,
	sAmpharosPose35,
	sAmpharosPose36,
	sAmpharosPose37,
	sAmpharosPose38,
	sAmpharosPose39,
	sAmpharosPose16,
	sAmpharosPose41,
	sAmpharosPose42,
	sAmpharosPose19,
	sAmpharosPose44,
	sAmpharosPose45,
	sAmpharosPose22,
	sAmpharosPose47,
	sAmpharosPose48,
	sAmpharosPose1,
	sAmpharosPose74,
	sAmpharosPose75,
	sAmpharosPose76,
	sAmpharosPose4,
	sAmpharosPose78,
	sAmpharosPose79,
	sAmpharosPose80,
	sAmpharosPose31,
	sAmpharosPose82,
	sAmpharosPose83,
	sAmpharosPose84,
	sAmpharosPose10,
	sAmpharosPose86,
	sAmpharosPose87,
	sAmpharosPose88,
	sAmpharosPose37,
	sAmpharosPose90,
	sAmpharosPose91,
	sAmpharosPose92,
	sAmpharosPose16,
	sAmpharosPose94,
	sAmpharosPose95,
	sAmpharosPose96,
	sAmpharosPose19,
	sAmpharosPose98,
	sAmpharosPose99,
	sAmpharosPose100,
	sAmpharosPose22,
	sAmpharosPose102,
	sAmpharosPose103,
	sAmpharosPose104,
	sAmpharosPose1,
	sAmpharosPose74,
	sAmpharosPose75,
	sAmpharosPose76,
	sAmpharosPose4,
	sAmpharosPose78,
	sAmpharosPose79,
	sAmpharosPose80,
	sAmpharosPose31,
	sAmpharosPose82,
	sAmpharosPose83,
	sAmpharosPose84,
	sAmpharosPose10,
	sAmpharosPose86,
	sAmpharosPose87,
	sAmpharosPose88,
	sAmpharosPose37,
	sAmpharosPose90,
	sAmpharosPose91,
	sAmpharosPose92,
	sAmpharosPose16,
	sAmpharosPose94,
	sAmpharosPose95,
	sAmpharosPose96,
	sAmpharosPose19,
	sAmpharosPose98,
	sAmpharosPose99,
	sAmpharosPose100,
	sAmpharosPose22,
	sAmpharosPose102,
	sAmpharosPose103,
	sAmpharosPose104,
	sAmpharosPose137,
	sAmpharosPose138,
	sAmpharosPose139,
	sAmpharosPose140,
	sAmpharosPose141,
	sAmpharosPose142,
	sAmpharosPose143,
	sAmpharosPose144,
	sAmpharosPose145,
	sAmpharosPose146,
	sAmpharosPose1,
	sAmpharosPose27,
	sAmpharosPose26,
	sAmpharosPose4,
	sAmpharosPose151,
	sAmpharosPose29,
	sAmpharosPose31,
	sAmpharosPose154,
	sAmpharosPose155,
	sAmpharosPose10,
	sAmpharosPose157,
	sAmpharosPose35,
	sAmpharosPose37,
	sAmpharosPose160,
	sAmpharosPose38,
	sAmpharosPose16,
	sAmpharosPose163,
	sAmpharosPose41,
	sAmpharosPose19,
	sAmpharosPose166,
	sAmpharosPose44,
	sAmpharosPose22,
	sAmpharosPose169,
	sAmpharosPose47,
	sAmpharosPose171,
	sAmpharosPose169,
	sAmpharosPose173,
	sAmpharosPose174,
	sAmpharosPose175,
	sAmpharosPose176,
	sAmpharosPose177,
	sAmpharosPose151,
	sAmpharosPose171,
	sAmpharosPose30,
	sAmpharosPose181,
	sAmpharosPose182,
	sAmpharosPose39,
	sAmpharosPose42,
	sAmpharosPose45,
	sAmpharosPose48,
	sAmpharosPose1,
	sAmpharosPose26,
	sAmpharosPose27,
	sAmpharosPose4,
	sAmpharosPose29,
	sAmpharosPose30,
	sAmpharosPose31,
	sAmpharosPose32,
	sAmpharosPose33,
	sAmpharosPose10,
	sAmpharosPose35,
	sAmpharosPose36,
	sAmpharosPose37,
	sAmpharosPose38,
	sAmpharosPose39,
	sAmpharosPose16,
	sAmpharosPose41,
	sAmpharosPose42,
	sAmpharosPose19,
	sAmpharosPose44,
	sAmpharosPose45,
	sAmpharosPose22,
	sAmpharosPose47,
	sAmpharosPose48,
	sAmpharosPose75,
	sAmpharosPose212,
	sAmpharosPose213,
	sAmpharosPose214,
	sAmpharosPose91,
	sAmpharosPose216,
	sAmpharosPose83,
	sAmpharosPose218,
	sAmpharosPose1,
	sAmpharosPose22,
	sAmpharosPose19,
	sAmpharosPose16,
	sAmpharosPose37,
	sAmpharosPose10,
	sAmpharosPose31,
	sAmpharosPose4,
};

static const struct PositionSets sAxPositionsAmpharos[] = {
	[0] = { .set = { {-1, -18}, {-8, -11}, {6, -11}, {-1, -10} } },
	[1] = { .set = { {-1, -16}, {-7, -11}, {6, -8}, {-1, -9} } },
	[2] = { .set = { {-1, -16}, {-8, -8}, {5, -11}, {-1, -9} } },
	[3] = { .set = { {2, -18}, {5, -12}, {-6, -11}, {-1, -11} } },
	[4] = { .set = { {1, -16}, {4, -11}, {-4, -9}, {-1, -9} } },
	[5] = { .set = { {2, -16}, {5, -9}, {-7, -11}, {0, -9} } },
	[6] = { .set = { {5, -20}, {-1, -10}, {-2, -9}, {-1, -11} } },
	[7] = { .set = { {5, -17}, {2, -8}, {0, -6}, {-1, -8} } },
	[8] = { .set = { {5, -18}, {3, -12}, {-3, -9}, {-1, -8} } },
	[9] = { .set = { {3, -20}, {-6, -12}, {4, -9}, {-1, -10} } },
	[10] = { .set = { {3, -17}, {-6, -11}, {5, -8}, {-1, -9} } },
	[11] = { .set = { {2, -18}, {-5, -11}, {2, -9}, {-1, -9} } },
	[12] = { .set = { {-1, -22}, {6, -12}, {-8, -12}, {-1, -12} } },
	[13] = { .set = { {-2, -20}, {5, -12}, {-8, -11}, {-1, -10} } },
	[14] = { .set = { {0, -20}, {5, -11}, {-7, -12}, {-1, -10} } },
	[15] = { .set = { {-5, -20}, {4, -12}, {-6, -9}, {-1, -10} } },
	[16] = { .set = { {-5, -17}, {4, -11}, {-7, -8}, {-1, -9} } },
	[17] = { .set = { {-4, -18}, {3, -11}, {-4, -9}, {-1, -9} } },
	[18] = { .set = { {-7, -19}, {-1, -9}, {0, -8}, {-1, -10} } },
	[19] = { .set = { {-7, -17}, {-4, -8}, {-2, -6}, {-1, -8} } },
	[20] = { .set = { {-7, -18}, {-5, -12}, {1, -9}, {-1, -8} } },
	[21] = { .set = { {-4, -18}, {-7, -12}, {4, -11}, {-1, -11} } },
	[22] = { .set = { {-3, -16}, {-6, -11}, {2, -9}, {-1, -9} } },
	[23] = { .set = { {-4, -16}, {-7, -9}, {5, -11}, {-2, -9} } },
	[24] = { .set = { {-1, -18}, {-8, -11}, {6, -11}, {-1, -10} } },
	[25] = { .set = { {-1, -10}, {-7, -6}, {5, -6}, {-1, -7} } },
	[26] = { .set = { {-1, -24}, {-6, -19}, {4, -19}, {-1, -11} } },
	[27] = { .set = { {2, -18}, {5, -12}, {-6, -11}, {-1, -11} } },
	[28] = { .set = { {5, -9}, {5, -7}, {-3, -6}, {1, -8} } },
	[29] = { .set = { {0, -24}, {3, -19}, {-5, -17}, {0, -10} } },
	[30] = { .set = { {5, -19}, {-1, -9}, {-2, -8}, {-1, -10} } },
	[31] = { .set = { {6, -9}, {1, -6}, {0, -5}, {0, -7} } },
	[32] = { .set = { {0, -24}, {-2, -18}, {-3, -15}, {1, -10} } },
	[33] = { .set = { {3, -20}, {-6, -12}, {4, -9}, {-1, -10} } },
	[34] = { .set = { {5, -11}, {-5, -8}, {4, -6}, {-1, -9} } },
	[35] = { .set = { {0, -24}, {-7, -18}, {0, -16}, {-1, -10} } },
	[36] = { .set = { {-1, -21}, {6, -11}, {-8, -11}, {-1, -11} } },
	[37] = { .set = { {-1, -14}, {5, -7}, {-7, -7}, {-1, -9} } },
	[38] = { .set = { {-1, -26}, {5, -18}, {-7, -18}, {-1, -12} } },
	[39] = { .set = { {-5, -20}, {4, -12}, {-6, -9}, {-1, -10} } },
	[40] = { .set = { {-7, -11}, {3, -8}, {-6, -6}, {-1, -9} } },
	[41] = { .set = { {-2, -24}, {5, -18}, {-2, -16}, {-1, -10} } },
	[42] = { .set = { {-7, -19}, {-1, -9}, {0, -8}, {-1, -10} } },
	[43] = { .set = { {-8, -9}, {-3, -6}, {-2, -5}, {-2, -7} } },
	[44] = { .set = { {-2, -24}, {0, -18}, {1, -15}, {-3, -10} } },
	[45] = { .set = { {-4, -18}, {-7, -12}, {4, -11}, {-1, -11} } },
	[46] = { .set = { {-7, -9}, {-7, -7}, {1, -6}, {-3, -8} } },
	[47] = { .set = { {-2, -24}, {-5, -19}, {3, -17}, {-2, -10} } },
	[48] = { .set = { {-1, -18}, {-8, -11}, {6, -11}, {-1, -10} } },
	[49] = { .set = { {-1, -10}, {-7, -6}, {5, -6}, {-1, -7} } },
	[50] = { .set = { {-1, -24}, {-6, -19}, {4, -19}, {-1, -11} } },
	[51] = { .set = { {2, -18}, {5, -12}, {-6, -11}, {-1, -11} } },
	[52] = { .set = { {5, -9}, {5, -7}, {-3, -6}, {1, -8} } },
	[53] = { .set = { {0, -24}, {3, -19}, {-5, -17}, {0, -10} } },
	[54] = { .set = { {5, -19}, {-1, -9}, {-2, -8}, {-1, -10} } },
	[55] = { .set = { {6, -9}, {1, -6}, {0, -5}, {0, -7} } },
	[56] = { .set = { {0, -24}, {-2, -18}, {-3, -15}, {1, -10} } },
	[57] = { .set = { {3, -20}, {-6, -12}, {4, -9}, {-1, -10} } },
	[58] = { .set = { {5, -11}, {-5, -8}, {4, -6}, {-1, -9} } },
	[59] = { .set = { {0, -24}, {-7, -18}, {0, -16}, {-1, -10} } },
	[60] = { .set = { {-1, -21}, {6, -11}, {-8, -11}, {-1, -11} } },
	[61] = { .set = { {-1, -14}, {5, -7}, {-7, -7}, {-1, -9} } },
	[62] = { .set = { {-1, -26}, {5, -18}, {-7, -18}, {-1, -12} } },
	[63] = { .set = { {-5, -20}, {4, -12}, {-6, -9}, {-1, -10} } },
	[64] = { .set = { {-7, -11}, {3, -8}, {-6, -6}, {-1, -9} } },
	[65] = { .set = { {-2, -24}, {5, -18}, {-2, -16}, {-1, -10} } },
	[66] = { .set = { {-7, -19}, {-1, -9}, {0, -8}, {-1, -10} } },
	[67] = { .set = { {-8, -9}, {-3, -6}, {-2, -5}, {-2, -7} } },
	[68] = { .set = { {-2, -24}, {0, -18}, {1, -15}, {-3, -10} } },
	[69] = { .set = { {-4, -18}, {-7, -12}, {4, -11}, {-1, -11} } },
	[70] = { .set = { {-7, -9}, {-7, -7}, {1, -6}, {-3, -8} } },
	[71] = { .set = { {-2, -24}, {-5, -19}, {3, -17}, {-2, -10} } },
	[72] = { .set = { {-1, -18}, {-8, -11}, {6, -11}, {-1, -10} } },
	[73] = { .set = { {-1, -19}, {-7, -16}, {5, -16}, {-1, -9} } },
	[74] = { .set = { {-1, -11}, {-7, -8}, {5, -8}, {-1, -8} } },
	[75] = { .set = { {-1, -12}, {-4, -6}, {2, -6}, {-1, -7} } },
	[76] = { .set = { {2, -18}, {5, -12}, {-6, -11}, {-1, -11} } },
	[77] = { .set = { {0, -19}, {2, -18}, {-7, -16}, {-1, -9} } },
	[78] = { .set = { {5, -11}, {6, -11}, {-4, -8}, {0, -10} } },
	[79] = { .set = { {5, -12}, {5, -8}, {1, -8}, {0, -10} } },
	[80] = { .set = { {5, -19}, {-1, -9}, {-2, -8}, {-1, -10} } },
	[81] = { .set = { {1, -22}, {-5, -18}, {-5, -14}, {0, -10} } },
	[82] = { .set = { {5, -14}, {1, -9}, {0, -8}, {-2, -9} } },
	[83] = { .set = { {5, -14}, {4, -12}, {4, -10}, {-1, -9} } },
	[84] = { .set = { {3, -20}, {-6, -12}, {4, -9}, {-1, -10} } },
	[85] = { .set = { {2, -25}, {-6, -17}, {0, -17}, {0, -10} } },
	[86] = { .set = { {4, -13}, {-4, -8}, {3, -7}, {-3, -8} } },
	[87] = { .set = { {4, -13}, {1, -11}, {4, -10}, {-2, -9} } },
	[88] = { .set = { {-1, -21}, {6, -11}, {-8, -11}, {-1, -11} } },
	[89] = { .set = { {-1, -23}, {5, -18}, {-7, -18}, {-1, -10} } },
	[90] = { .set = { {-1, -15}, {5, -10}, {-7, -10}, {-1, -10} } },
	[91] = { .set = { {-1, -15}, {2, -15}, {-4, -15}, {-1, -10} } },
	[92] = { .set = { {-5, -20}, {4, -12}, {-6, -9}, {-1, -10} } },
	[93] = { .set = { {-4, -25}, {4, -17}, {-2, -17}, {-2, -10} } },
	[94] = { .set = { {-6, -13}, {2, -8}, {-5, -7}, {1, -8} } },
	[95] = { .set = { {-6, -13}, {-3, -11}, {-6, -10}, {0, -9} } },
	[96] = { .set = { {-7, -19}, {-1, -9}, {0, -8}, {-1, -10} } },
	[97] = { .set = { {-3, -22}, {3, -18}, {3, -14}, {-2, -10} } },
	[98] = { .set = { {-7, -14}, {-3, -9}, {-2, -8}, {0, -9} } },
	[99] = { .set = { {-7, -14}, {-6, -12}, {-6, -10}, {-1, -9} } },
	[100] = { .set = { {-4, -18}, {-7, -12}, {4, -11}, {-1, -11} } },
	[101] = { .set = { {-2, -19}, {-4, -18}, {5, -16}, {-1, -9} } },
	[102] = { .set = { {-7, -11}, {-8, -11}, {2, -8}, {-2, -10} } },
	[103] = { .set = { {-7, -12}, {-7, -8}, {-3, -8}, {-2, -10} } },
	[104] = { .set = { {-1, -18}, {-8, -11}, {6, -11}, {-1, -10} } },
	[105] = { .set = { {-1, -19}, {-7, -16}, {5, -16}, {-1, -9} } },
	[106] = { .set = { {-1, -11}, {-7, -8}, {5, -8}, {-1, -8} } },
	[107] = { .set = { {-1, -12}, {-4, -6}, {2, -6}, {-1, -7} } },
	[108] = { .set = { {2, -18}, {5, -12}, {-6, -11}, {-1, -11} } },
	[109] = { .set = { {0, -19}, {2, -18}, {-7, -16}, {-1, -9} } },
	[110] = { .set = { {5, -11}, {6, -11}, {-4, -8}, {0, -10} } },
	[111] = { .set = { {5, -12}, {5, -8}, {1, -8}, {0, -10} } },
	[112] = { .set = { {5, -19}, {-1, -9}, {-2, -8}, {-1, -10} } },
	[113] = { .set = { {1, -22}, {-5, -18}, {-5, -14}, {0, -10} } },
	[114] = { .set = { {5, -14}, {1, -9}, {0, -8}, {-2, -9} } },
	[115] = { .set = { {5, -14}, {4, -12}, {4, -10}, {-1, -9} } },
	[116] = { .set = { {3, -20}, {-6, -12}, {4, -9}, {-1, -10} } },
	[117] = { .set = { {2, -25}, {-6, -17}, {0, -17}, {0, -10} } },
	[118] = { .set = { {4, -13}, {-4, -8}, {3, -7}, {-3, -8} } },
	[119] = { .set = { {4, -13}, {1, -11}, {4, -10}, {-2, -9} } },
	[120] = { .set = { {-1, -21}, {6, -11}, {-8, -11}, {-1, -11} } },
	[121] = { .set = { {-1, -23}, {5, -18}, {-7, -18}, {-1, -10} } },
	[122] = { .set = { {-1, -15}, {5, -10}, {-7, -10}, {-1, -10} } },
	[123] = { .set = { {-1, -15}, {2, -15}, {-4, -15}, {-1, -10} } },
	[124] = { .set = { {-5, -20}, {4, -12}, {-6, -9}, {-1, -10} } },
	[125] = { .set = { {-4, -25}, {4, -17}, {-2, -17}, {-2, -10} } },
	[126] = { .set = { {-6, -13}, {2, -8}, {-5, -7}, {1, -8} } },
	[127] = { .set = { {-6, -13}, {-3, -11}, {-6, -10}, {0, -9} } },
	[128] = { .set = { {-7, -19}, {-1, -9}, {0, -8}, {-1, -10} } },
	[129] = { .set = { {-3, -22}, {3, -18}, {3, -14}, {-2, -10} } },
	[130] = { .set = { {-7, -14}, {-3, -9}, {-2, -8}, {0, -9} } },
	[131] = { .set = { {-7, -14}, {-6, -12}, {-6, -10}, {-1, -9} } },
	[132] = { .set = { {-4, -18}, {-7, -12}, {4, -11}, {-1, -11} } },
	[133] = { .set = { {-2, -19}, {-4, -18}, {5, -16}, {-1, -9} } },
	[134] = { .set = { {-7, -11}, {-8, -11}, {2, -8}, {-2, -10} } },
	[135] = { .set = { {-7, -12}, {-7, -8}, {-3, -8}, {-2, -10} } },
	[136] = { .set = { {-3, -15}, {-5, -8}, {2, -6}, {-1, -7} } },
	[137] = { .set = { {-4, -14}, {-5, -7}, {2, -5}, {-1, -7} } },
	[138] = { .set = { {0, -19}, {-5, -17}, {5, -17}, {0, -11} } },
	[139] = { .set = { {-4, -20}, {0, -19}, {-9, -17}, {-3, -12} } },
	[140] = { .set = { {-4, -20}, {-2, -20}, {-5, -17}, {-1, -11} } },
	[141] = { .set = { {0, -22}, {-4, -20}, {3, -18}, {-1, -12} } },
	[142] = { .set = { {-1, -24}, {5, -18}, {-7, -18}, {-1, -10} } },
	[143] = { .set = { {-1, -22}, {3, -20}, {-4, -18}, {0, -12} } },
	[144] = { .set = { {3, -20}, {1, -20}, {4, -17}, {0, -11} } },
	[145] = { .set = { {3, -20}, {-1, -19}, {8, -17}, {2, -12} } },
	[146] = { .set = { {-1, -18}, {-8, -11}, {6, -11}, {-1, -10} } },
	[147] = { .set = { {-1, -24}, {-6, -19}, {4, -19}, {-1, -11} } },
	[148] = { .set = { {-1, -10}, {-7, -6}, {5, -6}, {-1, -7} } },
	[149] = { .set = { {2, -18}, {5, -12}, {-6, -11}, {-1, -11} } },
	[150] = { .set = { {0, -23}, {3, -18}, {-5, -16}, {0, -9} } },
	[151] = { .set = { {5, -9}, {5, -7}, {-3, -6}, {1, -8} } },
	[152] = { .set = { {5, -19}, {-1, -9}, {-2, -8}, {-1, -10} } },
	[153] = { .set = { {2, -24}, {0, -18}, {-1, -15}, {3, -10} } },
	[154] = { .set = { {5, -9}, {0, -6}, {-1, -5}, {-1, -7} } },
	[155] = { .set = { {3, -20}, {-6, -12}, {4, -9}, {-1, -10} } },
	[156] = { .set = { {2, -24}, {-5, -18}, {2, -16}, {1, -10} } },
	[157] = { .set = { {5, -11}, {-5, -8}, {4, -6}, {-1, -9} } },
	[158] = { .set = { {-1, -21}, {6, -11}, {-8, -11}, {-1, -11} } },
	[159] = { .set = { {-1, -27}, {5, -19}, {-7, -19}, {-1, -13} } },
	[160] = { .set = { {-1, -14}, {5, -7}, {-7, -7}, {-1, -9} } },
	[161] = { .set = { {-5, -20}, {4, -12}, {-6, -9}, {-1, -10} } },
	[162] = { .set = { {-3, -25}, {4, -19}, {-3, -17}, {-2, -11} } },
	[163] = { .set = { {-7, -11}, {3, -8}, {-6, -6}, {-1, -9} } },
	[164] = { .set = { {-7, -19}, {-1, -9}, {0, -8}, {-1, -10} } },
	[165] = { .set = { {-3, -24}, {-1, -18}, {0, -15}, {-4, -10} } },
	[166] = { .set = { {-8, -9}, {-3, -6}, {-2, -5}, {-2, -7} } },
	[167] = { .set = { {-4, -18}, {-7, -12}, {4, -11}, {-1, -11} } },
	[168] = { .set = { {-2, -23}, {-5, -18}, {3, -16}, {-2, -9} } },
	[169] = { .set = { {-7, -9}, {-7, -7}, {1, -6}, {-3, -8} } },
	[170] = { .set = { {-1, -23}, {-6, -18}, {4, -18}, {-1, -10} } },
	[171] = { .set = { {-2, -23}, {-5, -18}, {3, -16}, {-2, -9} } },
	[172] = { .set = { {-2, -23}, {0, -17}, {1, -14}, {-3, -9} } },
	[173] = { .set = { {-2, -23}, {5, -17}, {-2, -15}, {-1, -9} } },
	[174] = { .set = { {-1, -25}, {5, -17}, {-7, -17}, {-1, -11} } },
	[175] = { .set = { {1, -23}, {-6, -17}, {1, -15}, {0, -9} } },
	[176] = { .set = { {1, -23}, {-1, -17}, {-2, -14}, {2, -9} } },
	[177] = { .set = { {0, -23}, {3, -18}, {-5, -16}, {0, -9} } },
	[178] = { .set = { {-1, -23}, {-6, -18}, {4, -18}, {-1, -10} } },
	[179] = { .set = { {0, -24}, {3, -19}, {-5, -17}, {0, -10} } },
	[180] = { .set = { {1, -24}, {-1, -18}, {-2, -15}, {2, -10} } },
	[181] = { .set = { {1, -24}, {-6, -18}, {1, -16}, {0, -10} } },
	[182] = { .set = { {-1, -26}, {5, -18}, {-7, -18}, {-1, -12} } },
	[183] = { .set = { {-2, -24}, {5, -18}, {-2, -16}, {-1, -10} } },
	[184] = { .set = { {-2, -24}, {0, -18}, {1, -15}, {-3, -10} } },
	[185] = { .set = { {-2, -24}, {-5, -19}, {3, -17}, {-2, -10} } },
	[186] = { .set = { {-1, -18}, {-8, -11}, {6, -11}, {-1, -10} } },
	[187] = { .set = { {-1, -10}, {-7, -6}, {5, -6}, {-1, -7} } },
	[188] = { .set = { {-1, -24}, {-6, -19}, {4, -19}, {-1, -11} } },
	[189] = { .set = { {2, -18}, {5, -12}, {-6, -11}, {-1, -11} } },
	[190] = { .set = { {5, -9}, {5, -7}, {-3, -6}, {1, -8} } },
	[191] = { .set = { {0, -24}, {3, -19}, {-5, -17}, {0, -10} } },
	[192] = { .set = { {5, -19}, {-1, -9}, {-2, -8}, {-1, -10} } },
	[193] = { .set = { {6, -9}, {1, -6}, {0, -5}, {0, -7} } },
	[194] = { .set = { {0, -24}, {-2, -18}, {-3, -15}, {1, -10} } },
	[195] = { .set = { {3, -20}, {-6, -12}, {4, -9}, {-1, -10} } },
	[196] = { .set = { {5, -11}, {-5, -8}, {4, -6}, {-1, -9} } },
	[197] = { .set = { {0, -24}, {-7, -18}, {0, -16}, {-1, -10} } },
	[198] = { .set = { {-1, -21}, {6, -11}, {-8, -11}, {-1, -11} } },
	[199] = { .set = { {-1, -14}, {5, -7}, {-7, -7}, {-1, -9} } },
	[200] = { .set = { {-1, -26}, {5, -18}, {-7, -18}, {-1, -12} } },
	[201] = { .set = { {-5, -20}, {4, -12}, {-6, -9}, {-1, -10} } },
	[202] = { .set = { {-7, -11}, {3, -8}, {-6, -6}, {-1, -9} } },
	[203] = { .set = { {-2, -24}, {5, -18}, {-2, -16}, {-1, -10} } },
	[204] = { .set = { {-7, -19}, {-1, -9}, {0, -8}, {-1, -10} } },
	[205] = { .set = { {-8, -9}, {-3, -6}, {-2, -5}, {-2, -7} } },
	[206] = { .set = { {-2, -24}, {0, -18}, {1, -15}, {-3, -10} } },
	[207] = { .set = { {-4, -18}, {-7, -12}, {4, -11}, {-1, -11} } },
	[208] = { .set = { {-7, -9}, {-7, -7}, {1, -6}, {-3, -8} } },
	[209] = { .set = { {-2, -24}, {-5, -19}, {3, -17}, {-2, -10} } },
	[210] = { .set = { {-1, -11}, {-7, -8}, {5, -8}, {-1, -8} } },
	[211] = { .set = { {-5, -11}, {-6, -11}, {4, -8}, {0, -10} } },
	[212] = { .set = { {-6, -14}, {-2, -9}, {-1, -8}, {1, -9} } },
	[213] = { .set = { {-6, -14}, {2, -9}, {-5, -8}, {1, -9} } },
	[214] = { .set = { {-1, -15}, {5, -10}, {-7, -10}, {-1, -10} } },
	[215] = { .set = { {4, -14}, {-4, -9}, {3, -8}, {-3, -9} } },
	[216] = { .set = { {5, -14}, {1, -9}, {0, -8}, {-2, -9} } },
	[217] = { .set = { {4, -11}, {5, -11}, {-5, -8}, {-1, -10} } },
	[218] = { .set = { {-1, -18}, {-8, -11}, {6, -11}, {-1, -10} } },
	[219] = { .set = { {-4, -18}, {-7, -12}, {4, -11}, {-1, -11} } },
	[220] = { .set = { {-7, -19}, {-1, -9}, {0, -8}, {-1, -10} } },
	[221] = { .set = { {-5, -20}, {4, -12}, {-6, -9}, {-1, -10} } },
	[222] = { .set = { {-1, -21}, {6, -11}, {-8, -11}, {-1, -11} } },
	[223] = { .set = { {3, -20}, {-6, -12}, {4, -9}, {-1, -10} } },
	[224] = { .set = { {5, -19}, {-1, -9}, {-2, -8}, {-1, -10} } },
	[225] = { .set = { {2, -18}, {5, -12}, {-6, -11}, {-1, -11} } },
};

static const ax_anim *const sAmpharosAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sAmpharosAnimTable2[] = {
	AX_ANIM_PTR(sAmpharosAnims_2_1),
	AX_ANIM_PTR(sAmpharosAnims_2_2),
	AX_ANIM_PTR(sAmpharosAnims_2_3),
	AX_ANIM_PTR(sAmpharosAnims_2_4),
	AX_ANIM_PTR(sAmpharosAnims_2_5),
	AX_ANIM_PTR(sAmpharosAnims_2_6),
	AX_ANIM_PTR(sAmpharosAnims_2_7),
	AX_ANIM_PTR(sAmpharosAnims_2_8),
};

static const ax_anim *const sAmpharosAnimTable3[] = {
	AX_ANIM_PTR(sAmpharosAnims_3_1),
	AX_ANIM_PTR(sAmpharosAnims_3_2),
	AX_ANIM_PTR(sAmpharosAnims_3_3),
	AX_ANIM_PTR(sAmpharosAnims_3_4),
	AX_ANIM_PTR(sAmpharosAnims_3_5),
	AX_ANIM_PTR(sAmpharosAnims_3_6),
	AX_ANIM_PTR(sAmpharosAnims_3_7),
	AX_ANIM_PTR(sAmpharosAnims_3_8),
};

static const ax_anim *const sAmpharosAnimTable4[] = {
	AX_ANIM_PTR(sAmpharosAnims_4_1),
	AX_ANIM_PTR(sAmpharosAnims_4_2),
	AX_ANIM_PTR(sAmpharosAnims_4_3),
	AX_ANIM_PTR(sAmpharosAnims_4_4),
	AX_ANIM_PTR(sAmpharosAnims_4_5),
	AX_ANIM_PTR(sAmpharosAnims_4_6),
	AX_ANIM_PTR(sAmpharosAnims_4_7),
	AX_ANIM_PTR(sAmpharosAnims_4_8),
};

static const ax_anim *const sAmpharosAnimTable5[] = {
	AX_ANIM_PTR(sAmpharosAnims_5_1),
	AX_ANIM_PTR(sAmpharosAnims_5_2),
	AX_ANIM_PTR(sAmpharosAnims_5_3),
	AX_ANIM_PTR(sAmpharosAnims_5_4),
	AX_ANIM_PTR(sAmpharosAnims_5_5),
	AX_ANIM_PTR(sAmpharosAnims_5_6),
	AX_ANIM_PTR(sAmpharosAnims_5_7),
	AX_ANIM_PTR(sAmpharosAnims_5_8),
};

static const ax_anim *const sAmpharosAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
};

static const ax_anim *const sAmpharosAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00467),
	AX_ANIM_PTR(gAxSharedAnim_00480),
	AX_ANIM_PTR(gAxSharedAnim_00488),
	AX_ANIM_PTR(gAxSharedAnim_00497),
	AX_ANIM_PTR(gAxSharedAnim_00509),
	AX_ANIM_PTR(gAxSharedAnim_00518),
	AX_ANIM_PTR(gAxSharedAnim_00524),
	AX_ANIM_PTR(gAxSharedAnim_00530),
};

static const ax_anim *const sAmpharosAnimTable8[] = {
	AX_ANIM_PTR(sAmpharosAnims_8_1),
	AX_ANIM_PTR(sAmpharosAnims_8_2),
	AX_ANIM_PTR(sAmpharosAnims_8_3),
	AX_ANIM_PTR(sAmpharosAnims_8_4),
	AX_ANIM_PTR(sAmpharosAnims_8_5),
	AX_ANIM_PTR(sAmpharosAnims_8_6),
	AX_ANIM_PTR(sAmpharosAnims_8_7),
	AX_ANIM_PTR(sAmpharosAnims_8_8),
};

static const ax_anim *const sAmpharosAnimTable9[] = {
	AX_ANIM_PTR(sAmpharosAnims_9_1),
	AX_ANIM_PTR(sAmpharosAnims_9_2),
	AX_ANIM_PTR(sAmpharosAnims_9_3),
	AX_ANIM_PTR(sAmpharosAnims_9_4),
	AX_ANIM_PTR(sAmpharosAnims_9_5),
	AX_ANIM_PTR(sAmpharosAnims_9_6),
	AX_ANIM_PTR(sAmpharosAnims_9_7),
	AX_ANIM_PTR(sAmpharosAnims_9_8),
};

static const ax_anim *const sAmpharosAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00905),
	AX_ANIM_PTR(gAxSharedAnim_00918),
	AX_ANIM_PTR(gAxSharedAnim_00930),
	AX_ANIM_PTR(gAxSharedAnim_00942),
	AX_ANIM_PTR(gAxSharedAnim_00955),
	AX_ANIM_PTR(gAxSharedAnim_00965),
	AX_ANIM_PTR(gAxSharedAnim_00978),
	AX_ANIM_PTR(gAxSharedAnim_00993),
};

static const ax_anim *const sAmpharosAnimTable11[] = {
	AX_ANIM_PTR(sAmpharosAnims_11_1),
	AX_ANIM_PTR(sAmpharosAnims_11_2),
	AX_ANIM_PTR(sAmpharosAnims_11_3),
	AX_ANIM_PTR(sAmpharosAnims_11_4),
	AX_ANIM_PTR(sAmpharosAnims_11_5),
	AX_ANIM_PTR(sAmpharosAnims_11_6),
	AX_ANIM_PTR(sAmpharosAnims_11_7),
	AX_ANIM_PTR(sAmpharosAnims_11_8),
};

static const ax_anim *const sAmpharosAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01337),
	AX_ANIM_PTR(gAxSharedAnim_01414),
	AX_ANIM_PTR(gAxSharedAnim_01392),
	AX_ANIM_PTR(gAxSharedAnim_01380),
	AX_ANIM_PTR(gAxSharedAnim_01379),
	AX_ANIM_PTR(gAxSharedAnim_01368),
	AX_ANIM_PTR(gAxSharedAnim_01354),
	AX_ANIM_PTR(gAxSharedAnim_01338),
};

static const ax_anim *const sAmpharosAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01422),
	AX_ANIM_PTR(gAxSharedAnim_01464),
	AX_ANIM_PTR(gAxSharedAnim_01461),
	AX_ANIM_PTR(gAxSharedAnim_01456),
	AX_ANIM_PTR(gAxSharedAnim_01446),
	AX_ANIM_PTR(gAxSharedAnim_01443),
	AX_ANIM_PTR(gAxSharedAnim_01438),
	AX_ANIM_PTR(gAxSharedAnim_01429),
};

static const ax_anim *const *const sAxAnimationsAmpharos[] = {
	sAmpharosAnimTable1,
	sAmpharosAnimTable2,
	sAmpharosAnimTable3,
	sAmpharosAnimTable4,
	sAmpharosAnimTable5,
	sAmpharosAnimTable6,
	sAmpharosAnimTable7,
	sAmpharosAnimTable8,
	sAmpharosAnimTable9,
	sAmpharosAnimTable10,
	sAmpharosAnimTable11,
	sAmpharosAnimTable12,
	sAmpharosAnimTable13,
};

static const ax_sprite *const sAxSpritesAmpharos[] = {
	sAmpharosSprites1,
	sAmpharosSprites2,
	sAmpharosSprites3,
	sAmpharosSprites4,
	sAmpharosSprites5,
	sAmpharosSprites6,
	sAmpharosSprites7,
	sAmpharosSprites8,
	sAmpharosSprites9,
	sAmpharosSprites10,
	sAmpharosSprites11,
	sAmpharosSprites12,
	sAmpharosSprites13,
	sAmpharosSprites14,
	sAmpharosSprites15,
	sAmpharosSprites16,
	sAmpharosSprites17,
	sAmpharosSprites18,
	sAmpharosSprites19,
	sAmpharosSprites20,
	sAmpharosSprites21,
	sAmpharosSprites22,
	sAmpharosSprites23,
	sAmpharosSprites24,
	sAmpharosSprites25,
	sAmpharosSprites26,
	sAmpharosSprites27,
	sAmpharosSprites28,
	sAmpharosSprites29,
	sAmpharosSprites30,
	sAmpharosSprites31,
	sAmpharosSprites32,
	sAmpharosSprites33,
	sAmpharosSprites34,
	sAmpharosSprites35,
	sAmpharosSprites36,
	sAmpharosSprites37,
	sAmpharosSprites38,
	sAmpharosSprites39,
	sAmpharosSprites40,
	sAmpharosSprites41,
	sAmpharosSprites42,
	sAmpharosSprites43,
	sAmpharosSprites44,
	sAmpharosSprites45,
	sAmpharosSprites46,
	sAmpharosSprites47,
};

static const axmain sAxMainAmpharos = {
	.poses = sAxPosesAmpharos,
	.animations = sAxAnimationsAmpharos,
	.animCount = ARRAY_COUNT(sAxAnimationsAmpharos),
	.spriteData = sAxSpritesAmpharos,
	.positions = sAxPositionsAmpharos,
};
