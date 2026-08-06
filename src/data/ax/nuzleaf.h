/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainNuzleaf;
const SiroArchive gAxNuzleaf = {"SIRO", &sAxMainNuzleaf};

static const ax_pose sNuzleafPose1[] = {
	AX_POSE(0, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose2[] = {
	AX_POSE(1, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose3[] = {
	AX_POSE(2, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose4[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose5[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose6[] = {
	AX_POSE(5, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose7[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose8[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose9[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose10[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose11[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose12[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose13[] = {
	AX_POSE(12, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose14[] = {
	AX_POSE(13, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose15[] = {
	AX_POSE(14, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose16[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose17[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose18[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose19[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose20[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose21[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose22[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose23[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose24[] = {
	AX_POSE(5, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose74[] = {
	AX_POSE(15, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose75[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose76[] = {
	AX_POSE(17, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose77[] = {
	AX_POSE(18, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose78[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose79[] = {
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose80[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose81[] = {
	AX_POSE(21, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose82[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose83[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose84[] = {
	AX_POSE(23, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose85[] = {
	AX_POSE(24, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose86[] = {
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose87[] = {
	AX_POSE(26, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose88[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose89[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose90[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose91[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose92[] = {
	AX_POSE(30, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose94[] = {
	AX_POSE(31, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose95[] = {
	AX_POSE(32, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose96[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose97[] = {
	AX_POSE(34, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose98[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose99[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose100[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose101[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose102[] = {
	AX_POSE(30, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose103[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose104[] = {
	AX_POSE(23, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose105[] = {
	AX_POSE(24, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose106[] = {
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose107[] = {
	AX_POSE(26, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose109[] = {
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose110[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose111[] = {
	AX_POSE(21, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose112[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose119[] = {
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose120[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose121[] = {
	AX_POSE(21, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose122[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose124[] = {
	AX_POSE(23, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose125[] = {
	AX_POSE(24, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose126[] = {
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose127[] = {
	AX_POSE(26, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose129[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose130[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose131[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose132[] = {
	AX_POSE(30, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose139[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose140[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose141[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose142[] = {
	AX_POSE(30, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose144[] = {
	AX_POSE(23, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose145[] = {
	AX_POSE(24, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose146[] = {
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose147[] = {
	AX_POSE(26, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose153[] = {
	AX_POSE(35, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose154[] = {
	AX_POSE(36, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose155[] = {
	AX_POSE(37, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose156[] = {
	AX_POSE(38, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose157[] = {
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose158[] = {
	AX_POSE(40, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose159[] = {
	AX_POSE(41, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose160[] = {
	AX_POSE(40, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose161[] = {
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose162[] = {
	AX_POSE(38, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose190[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose191[] = {
	AX_POSE(34, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose192[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose195[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose198[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose199[] = {
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose200[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose204[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose207[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose208[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose210[] = {
	AX_POSE(24, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose211[] = {
	AX_POSE(26, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose213[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose214[] = {
	AX_POSE(30, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose219[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose220[] = {
	AX_POSE(30, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose222[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose223[] = {
	AX_POSE(26, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose225[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose226[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose228[] = {
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose229[] = {
	AX_POSE(23, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose230[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose232[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sNuzleafPose233[] = {
	AX_POSE(23, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const u8 sNuzleafAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_2_1.lz");
static const u8 sNuzleafAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_2_2.lz");
static const u8 sNuzleafAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_2_3.lz");
static const u8 sNuzleafAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_2_4.lz");
static const u8 sNuzleafAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_2_5.lz");
static const u8 sNuzleafAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_2_6.lz");
static const u8 sNuzleafAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_2_7.lz");
static const u8 sNuzleafAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_2_8.lz");
static const u8 sNuzleafAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_4_1.lz");
static const u8 sNuzleafAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_4_2.lz");
static const u8 sNuzleafAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_4_3.lz");
static const u8 sNuzleafAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_4_4.lz");
static const u8 sNuzleafAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_4_5.lz");
static const u8 sNuzleafAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_4_6.lz");
static const u8 sNuzleafAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_4_7.lz");
static const u8 sNuzleafAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_4_8.lz");
static const u8 sNuzleafAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_5_1.lz");
static const u8 sNuzleafAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_5_2.lz");
static const u8 sNuzleafAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_5_3.lz");
static const u8 sNuzleafAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_5_4.lz");
static const u8 sNuzleafAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_5_5.lz");
static const u8 sNuzleafAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_5_6.lz");
static const u8 sNuzleafAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_5_7.lz");
static const u8 sNuzleafAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_5_8.lz");
static const u8 sNuzleafAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_8_1.lz");
static const u8 sNuzleafAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_8_2.lz");
static const u8 sNuzleafAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_8_3.lz");
static const u8 sNuzleafAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_8_4.lz");
static const u8 sNuzleafAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_8_5.lz");
static const u8 sNuzleafAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_8_6.lz");
static const u8 sNuzleafAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_8_7.lz");
static const u8 sNuzleafAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_8_8.lz");
static const u8 sNuzleafAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_9_1.lz");
static const u8 sNuzleafAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_9_2.lz");
static const u8 sNuzleafAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_9_3.lz");
static const u8 sNuzleafAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_9_4.lz");
static const u8 sNuzleafAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_9_5.lz");
static const u8 sNuzleafAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_9_6.lz");
static const u8 sNuzleafAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_9_7.lz");
static const u8 sNuzleafAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_9_8.lz");
static const u8 sNuzleafAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_11_1.lz");
static const u8 sNuzleafAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_11_2.lz");
static const u8 sNuzleafAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_11_3.lz");
static const u8 sNuzleafAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_11_5.lz");
static const u8 sNuzleafAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_11_7.lz");
static const u8 sNuzleafAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/nuzleaf/sNuzleafAnims_11_8.lz");

static const u8 sNuzleafGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_1.4bpp.lz");
static const ax_sprite sNuzleafSprites1[] = {
	{sNuzleafGfx1, ARRAY_COUNT(sNuzleafGfx1)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_2.4bpp.lz");
static const ax_sprite sNuzleafSprites2[] = {
	{sNuzleafGfx2, ARRAY_COUNT(sNuzleafGfx2)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_3.4bpp.lz");
static const ax_sprite sNuzleafSprites3[] = {
	{sNuzleafGfx3, ARRAY_COUNT(sNuzleafGfx3)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_4.4bpp.lz");
static const ax_sprite sNuzleafSprites4[] = {
	{sNuzleafGfx4, ARRAY_COUNT(sNuzleafGfx4)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_5.4bpp.lz");
static const ax_sprite sNuzleafSprites5[] = {
	{sNuzleafGfx5, ARRAY_COUNT(sNuzleafGfx5)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_6.4bpp.lz");
static const ax_sprite sNuzleafSprites6[] = {
	{sNuzleafGfx6, ARRAY_COUNT(sNuzleafGfx6)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_7.4bpp.lz");
static const ax_sprite sNuzleafSprites7[] = {
	{sNuzleafGfx7, ARRAY_COUNT(sNuzleafGfx7)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_8.4bpp.lz");
static const ax_sprite sNuzleafSprites8[] = {
	{sNuzleafGfx8, ARRAY_COUNT(sNuzleafGfx8)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_9.4bpp.lz");
static const ax_sprite sNuzleafSprites9[] = {
	{sNuzleafGfx9, ARRAY_COUNT(sNuzleafGfx9)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_10.4bpp.lz");
static const ax_sprite sNuzleafSprites10[] = {
	{sNuzleafGfx10, ARRAY_COUNT(sNuzleafGfx10)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_11.4bpp.lz");
static const ax_sprite sNuzleafSprites11[] = {
	{sNuzleafGfx11, ARRAY_COUNT(sNuzleafGfx11)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_12.4bpp.lz");
static const ax_sprite sNuzleafSprites12[] = {
	{sNuzleafGfx12, ARRAY_COUNT(sNuzleafGfx12)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_13.4bpp.lz");
static const ax_sprite sNuzleafSprites13[] = {
	{sNuzleafGfx13, ARRAY_COUNT(sNuzleafGfx13)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_14.4bpp.lz");
static const ax_sprite sNuzleafSprites14[] = {
	{sNuzleafGfx14, ARRAY_COUNT(sNuzleafGfx14)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_15.4bpp.lz");
static const ax_sprite sNuzleafSprites15[] = {
	{sNuzleafGfx15, ARRAY_COUNT(sNuzleafGfx15)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_16.4bpp.lz");
static const u8 sNuzleafGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_16_1.4bpp.lz");
static const u8 sNuzleafGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_16_2.4bpp.lz");
static const ax_sprite sNuzleafSprites16[] = {
	{NULL, 32}, 
	{sNuzleafGfx16, ARRAY_COUNT(sNuzleafGfx16)}, 
	{NULL, 64}, 
	{sNuzleafGfx16_1, ARRAY_COUNT(sNuzleafGfx16_1)}, 
	{NULL, 32}, 
	{sNuzleafGfx16_2, ARRAY_COUNT(sNuzleafGfx16_2)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_17.4bpp.lz");
static const u8 sNuzleafGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_17_1.4bpp.lz");
static const u8 sNuzleafGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_17_2.4bpp.lz");
static const u8 sNuzleafGfx17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_17_3.4bpp.lz");
static const ax_sprite sNuzleafSprites17[] = {
	{NULL, 32}, 
	{sNuzleafGfx17, ARRAY_COUNT(sNuzleafGfx17)}, 
	{NULL, 64}, 
	{sNuzleafGfx17_1, ARRAY_COUNT(sNuzleafGfx17_1)}, 
	{NULL, 64}, 
	{sNuzleafGfx17_2, ARRAY_COUNT(sNuzleafGfx17_2)}, 
	{NULL, 96}, 
	{sNuzleafGfx17_3, ARRAY_COUNT(sNuzleafGfx17_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_18.4bpp.lz");
static const u8 sNuzleafGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_18_1.4bpp.lz");
static const ax_sprite sNuzleafSprites18[] = {
	{NULL, 160}, 
	{sNuzleafGfx18, ARRAY_COUNT(sNuzleafGfx18)}, 
	{NULL, 32}, 
	{sNuzleafGfx18_1, ARRAY_COUNT(sNuzleafGfx18_1)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_19.4bpp.lz");
static const u8 sNuzleafGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_19_1.4bpp.lz");
static const u8 sNuzleafGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_19_2.4bpp.lz");
static const ax_sprite sNuzleafSprites19[] = {
	{NULL, 64}, 
	{sNuzleafGfx19, ARRAY_COUNT(sNuzleafGfx19)}, 
	{NULL, 64}, 
	{sNuzleafGfx19_1, ARRAY_COUNT(sNuzleafGfx19_1)}, 
	{NULL, 32}, 
	{sNuzleafGfx19_2, ARRAY_COUNT(sNuzleafGfx19_2)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_20.4bpp.lz");
static const u8 sNuzleafGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_20_1.4bpp.lz");
static const u8 sNuzleafGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_20_2.4bpp.lz");
static const u8 sNuzleafGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_20_3.4bpp.lz");
static const ax_sprite sNuzleafSprites20[] = {
	{NULL, 32}, 
	{sNuzleafGfx20, ARRAY_COUNT(sNuzleafGfx20)}, 
	{NULL, 96}, 
	{sNuzleafGfx20_1, ARRAY_COUNT(sNuzleafGfx20_1)}, 
	{NULL, 64}, 
	{sNuzleafGfx20_2, ARRAY_COUNT(sNuzleafGfx20_2)}, 
	{NULL, 32}, 
	{sNuzleafGfx20_3, ARRAY_COUNT(sNuzleafGfx20_3)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_21.4bpp.lz");
static const u8 sNuzleafGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_21_1.4bpp.lz");
static const u8 sNuzleafGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_21_2.4bpp.lz");
static const ax_sprite sNuzleafSprites21[] = {
	{NULL, 32}, 
	{sNuzleafGfx21, ARRAY_COUNT(sNuzleafGfx21)}, 
	{NULL, 64}, 
	{sNuzleafGfx21_1, ARRAY_COUNT(sNuzleafGfx21_1)}, 
	{NULL, 64}, 
	{sNuzleafGfx21_2, ARRAY_COUNT(sNuzleafGfx21_2)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_22.4bpp.lz");
static const u8 sNuzleafGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_22_1.4bpp.lz");
static const ax_sprite sNuzleafSprites22[] = {
	{NULL, 128}, 
	{sNuzleafGfx22, ARRAY_COUNT(sNuzleafGfx22)}, 
	{NULL, 32}, 
	{sNuzleafGfx22_1, ARRAY_COUNT(sNuzleafGfx22_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_23.4bpp.lz");
static const u8 sNuzleafGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_23_1.4bpp.lz");
static const u8 sNuzleafGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_23_2.4bpp.lz");
static const ax_sprite sNuzleafSprites23[] = {
	{NULL, 64}, 
	{sNuzleafGfx23, ARRAY_COUNT(sNuzleafGfx23)}, 
	{NULL, 32}, 
	{sNuzleafGfx23_1, ARRAY_COUNT(sNuzleafGfx23_1)}, 
	{NULL, 32}, 
	{sNuzleafGfx23_2, ARRAY_COUNT(sNuzleafGfx23_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_24.4bpp.lz");
static const u8 sNuzleafGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_24_1.4bpp.lz");
static const u8 sNuzleafGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_24_2.4bpp.lz");
static const u8 sNuzleafGfx24_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_24_3.4bpp.lz");
static const ax_sprite sNuzleafSprites24[] = {
	{NULL, 32}, 
	{sNuzleafGfx24, ARRAY_COUNT(sNuzleafGfx24)}, 
	{NULL, 64}, 
	{sNuzleafGfx24_1, ARRAY_COUNT(sNuzleafGfx24_1)}, 
	{NULL, 64}, 
	{sNuzleafGfx24_2, ARRAY_COUNT(sNuzleafGfx24_2)}, 
	{NULL, 32}, 
	{sNuzleafGfx24_3, ARRAY_COUNT(sNuzleafGfx24_3)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_25.4bpp.lz");
static const u8 sNuzleafGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_25_1.4bpp.lz");
static const u8 sNuzleafGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_25_2.4bpp.lz");
static const ax_sprite sNuzleafSprites25[] = {
	{sNuzleafGfx25, ARRAY_COUNT(sNuzleafGfx25)}, 
	{NULL, 32}, 
	{sNuzleafGfx25_1, ARRAY_COUNT(sNuzleafGfx25_1)}, 
	{NULL, 64}, 
	{sNuzleafGfx25_2, ARRAY_COUNT(sNuzleafGfx25_2)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_26.4bpp.lz");
static const u8 sNuzleafGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_26_1.4bpp.lz");
static const u8 sNuzleafGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_26_2.4bpp.lz");
static const ax_sprite sNuzleafSprites26[] = {
	{NULL, 128}, 
	{sNuzleafGfx26, ARRAY_COUNT(sNuzleafGfx26)}, 
	{NULL, 32}, 
	{sNuzleafGfx26_1, ARRAY_COUNT(sNuzleafGfx26_1)}, 
	{NULL, 32}, 
	{sNuzleafGfx26_2, ARRAY_COUNT(sNuzleafGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_27.4bpp.lz");
static const u8 sNuzleafGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_27_1.4bpp.lz");
static const u8 sNuzleafGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_27_2.4bpp.lz");
static const ax_sprite sNuzleafSprites27[] = {
	{NULL, 128}, 
	{sNuzleafGfx27, ARRAY_COUNT(sNuzleafGfx27)}, 
	{NULL, 32}, 
	{sNuzleafGfx27_1, ARRAY_COUNT(sNuzleafGfx27_1)}, 
	{NULL, 32}, 
	{sNuzleafGfx27_2, ARRAY_COUNT(sNuzleafGfx27_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_28.4bpp.lz");
static const u8 sNuzleafGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_28_1.4bpp.lz");
static const u8 sNuzleafGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_28_2.4bpp.lz");
static const u8 sNuzleafGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_28_3.4bpp.lz");
static const ax_sprite sNuzleafSprites28[] = {
	{NULL, 32}, 
	{sNuzleafGfx28, ARRAY_COUNT(sNuzleafGfx28)}, 
	{NULL, 64}, 
	{sNuzleafGfx28_1, ARRAY_COUNT(sNuzleafGfx28_1)}, 
	{NULL, 64}, 
	{sNuzleafGfx28_2, ARRAY_COUNT(sNuzleafGfx28_2)}, 
	{NULL, 32}, 
	{sNuzleafGfx28_3, ARRAY_COUNT(sNuzleafGfx28_3)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_29.4bpp.lz");
static const u8 sNuzleafGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_29_1.4bpp.lz");
static const u8 sNuzleafGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_29_2.4bpp.lz");
static const u8 sNuzleafGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_29_3.4bpp.lz");
static const ax_sprite sNuzleafSprites29[] = {
	{sNuzleafGfx29, ARRAY_COUNT(sNuzleafGfx29)}, 
	{NULL, 32}, 
	{sNuzleafGfx29_1, ARRAY_COUNT(sNuzleafGfx29_1)}, 
	{NULL, 64}, 
	{sNuzleafGfx29_2, ARRAY_COUNT(sNuzleafGfx29_2)}, 
	{NULL, 64}, 
	{sNuzleafGfx29_3, ARRAY_COUNT(sNuzleafGfx29_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_30.4bpp.lz");
static const u8 sNuzleafGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_30_1.4bpp.lz");
static const u8 sNuzleafGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_30_2.4bpp.lz");
static const u8 sNuzleafGfx30_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_30_3.4bpp.lz");
static const ax_sprite sNuzleafSprites30[] = {
	{sNuzleafGfx30, ARRAY_COUNT(sNuzleafGfx30)}, 
	{NULL, 32}, 
	{sNuzleafGfx30_1, ARRAY_COUNT(sNuzleafGfx30_1)}, 
	{NULL, 32}, 
	{sNuzleafGfx30_2, ARRAY_COUNT(sNuzleafGfx30_2)}, 
	{NULL, 32}, 
	{sNuzleafGfx30_3, ARRAY_COUNT(sNuzleafGfx30_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_31.4bpp.lz");
static const u8 sNuzleafGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_31_1.4bpp.lz");
static const u8 sNuzleafGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_31_2.4bpp.lz");
static const u8 sNuzleafGfx31_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_31_3.4bpp.lz");
static const ax_sprite sNuzleafSprites31[] = {
	{sNuzleafGfx31, ARRAY_COUNT(sNuzleafGfx31)}, 
	{NULL, 32}, 
	{sNuzleafGfx31_1, ARRAY_COUNT(sNuzleafGfx31_1)}, 
	{NULL, 32}, 
	{sNuzleafGfx31_2, ARRAY_COUNT(sNuzleafGfx31_2)}, 
	{NULL, 32}, 
	{sNuzleafGfx31_3, ARRAY_COUNT(sNuzleafGfx31_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_32.4bpp.lz");
static const u8 sNuzleafGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_32_1.4bpp.lz");
static const u8 sNuzleafGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_32_2.4bpp.lz");
static const u8 sNuzleafGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_32_3.4bpp.lz");
static const ax_sprite sNuzleafSprites32[] = {
	{NULL, 32}, 
	{sNuzleafGfx32, ARRAY_COUNT(sNuzleafGfx32)}, 
	{NULL, 64}, 
	{sNuzleafGfx32_1, ARRAY_COUNT(sNuzleafGfx32_1)}, 
	{NULL, 64}, 
	{sNuzleafGfx32_2, ARRAY_COUNT(sNuzleafGfx32_2)}, 
	{NULL, 32}, 
	{sNuzleafGfx32_3, ARRAY_COUNT(sNuzleafGfx32_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_33.4bpp.lz");
static const u8 sNuzleafGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_33_1.4bpp.lz");
static const u8 sNuzleafGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_33_2.4bpp.lz");
static const u8 sNuzleafGfx33_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_33_3.4bpp.lz");
static const ax_sprite sNuzleafSprites33[] = {
	{NULL, 32}, 
	{sNuzleafGfx33, ARRAY_COUNT(sNuzleafGfx33)}, 
	{NULL, 64}, 
	{sNuzleafGfx33_1, ARRAY_COUNT(sNuzleafGfx33_1)}, 
	{NULL, 64}, 
	{sNuzleafGfx33_2, ARRAY_COUNT(sNuzleafGfx33_2)}, 
	{NULL, 64}, 
	{sNuzleafGfx33_3, ARRAY_COUNT(sNuzleafGfx33_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_34.4bpp.lz");
static const u8 sNuzleafGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_34_1.4bpp.lz");
static const u8 sNuzleafGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_34_2.4bpp.lz");
static const ax_sprite sNuzleafSprites34[] = {
	{NULL, 32}, 
	{sNuzleafGfx34, ARRAY_COUNT(sNuzleafGfx34)}, 
	{NULL, 32}, 
	{sNuzleafGfx34_1, ARRAY_COUNT(sNuzleafGfx34_1)}, 
	{NULL, 32}, 
	{sNuzleafGfx34_2, ARRAY_COUNT(sNuzleafGfx34_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_35.4bpp.lz");
static const u8 sNuzleafGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_35_1.4bpp.lz");
static const u8 sNuzleafGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_35_2.4bpp.lz");
static const ax_sprite sNuzleafSprites35[] = {
	{NULL, 32}, 
	{sNuzleafGfx35, ARRAY_COUNT(sNuzleafGfx35)}, 
	{NULL, 32}, 
	{sNuzleafGfx35_1, ARRAY_COUNT(sNuzleafGfx35_1)}, 
	{NULL, 32}, 
	{sNuzleafGfx35_2, ARRAY_COUNT(sNuzleafGfx35_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_36.4bpp.lz");
static const ax_sprite sNuzleafSprites36[] = {
	{sNuzleafGfx36, ARRAY_COUNT(sNuzleafGfx36)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_37.4bpp.lz");
static const ax_sprite sNuzleafSprites37[] = {
	{sNuzleafGfx37, ARRAY_COUNT(sNuzleafGfx37)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_38.4bpp.lz");
static const ax_sprite sNuzleafSprites38[] = {
	{sNuzleafGfx38, ARRAY_COUNT(sNuzleafGfx38)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_39.4bpp.lz");
static const ax_sprite sNuzleafSprites39[] = {
	{sNuzleafGfx39, ARRAY_COUNT(sNuzleafGfx39)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_40.4bpp.lz");
static const ax_sprite sNuzleafSprites40[] = {
	{sNuzleafGfx40, ARRAY_COUNT(sNuzleafGfx40)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_41.4bpp.lz");
static const ax_sprite sNuzleafSprites41[] = {
	{sNuzleafGfx41, ARRAY_COUNT(sNuzleafGfx41)}, 
	{NULL, 0}
};
static const u8 sNuzleafGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/nuzleaf/sprite_42.4bpp.lz");
static const ax_sprite sNuzleafSprites42[] = {
	{sNuzleafGfx42, ARRAY_COUNT(sNuzleafGfx42)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesNuzleaf[] = {
	sNuzleafPose1,
	sNuzleafPose2,
	sNuzleafPose3,
	sNuzleafPose4,
	sNuzleafPose5,
	sNuzleafPose6,
	sNuzleafPose7,
	sNuzleafPose8,
	sNuzleafPose9,
	sNuzleafPose10,
	sNuzleafPose11,
	sNuzleafPose12,
	sNuzleafPose13,
	sNuzleafPose14,
	sNuzleafPose15,
	sNuzleafPose16,
	sNuzleafPose17,
	sNuzleafPose18,
	sNuzleafPose19,
	sNuzleafPose20,
	sNuzleafPose21,
	sNuzleafPose22,
	sNuzleafPose23,
	sNuzleafPose24,
	sNuzleafPose1,
	sNuzleafPose2,
	sNuzleafPose3,
	sNuzleafPose4,
	sNuzleafPose5,
	sNuzleafPose6,
	sNuzleafPose7,
	sNuzleafPose8,
	sNuzleafPose9,
	sNuzleafPose10,
	sNuzleafPose11,
	sNuzleafPose12,
	sNuzleafPose13,
	sNuzleafPose14,
	sNuzleafPose15,
	sNuzleafPose16,
	sNuzleafPose17,
	sNuzleafPose18,
	sNuzleafPose19,
	sNuzleafPose20,
	sNuzleafPose21,
	sNuzleafPose22,
	sNuzleafPose23,
	sNuzleafPose24,
	sNuzleafPose1,
	sNuzleafPose2,
	sNuzleafPose3,
	sNuzleafPose4,
	sNuzleafPose5,
	sNuzleafPose6,
	sNuzleafPose7,
	sNuzleafPose8,
	sNuzleafPose9,
	sNuzleafPose10,
	sNuzleafPose11,
	sNuzleafPose12,
	sNuzleafPose13,
	sNuzleafPose14,
	sNuzleafPose15,
	sNuzleafPose16,
	sNuzleafPose17,
	sNuzleafPose18,
	sNuzleafPose19,
	sNuzleafPose20,
	sNuzleafPose21,
	sNuzleafPose22,
	sNuzleafPose23,
	sNuzleafPose24,
	sNuzleafPose1,
	sNuzleafPose74,
	sNuzleafPose75,
	sNuzleafPose76,
	sNuzleafPose77,
	sNuzleafPose78,
	sNuzleafPose79,
	sNuzleafPose80,
	sNuzleafPose81,
	sNuzleafPose82,
	sNuzleafPose83,
	sNuzleafPose84,
	sNuzleafPose85,
	sNuzleafPose86,
	sNuzleafPose87,
	sNuzleafPose88,
	sNuzleafPose89,
	sNuzleafPose90,
	sNuzleafPose91,
	sNuzleafPose92,
	sNuzleafPose13,
	sNuzleafPose94,
	sNuzleafPose95,
	sNuzleafPose96,
	sNuzleafPose97,
	sNuzleafPose98,
	sNuzleafPose99,
	sNuzleafPose100,
	sNuzleafPose101,
	sNuzleafPose102,
	sNuzleafPose103,
	sNuzleafPose104,
	sNuzleafPose105,
	sNuzleafPose106,
	sNuzleafPose107,
	sNuzleafPose22,
	sNuzleafPose109,
	sNuzleafPose110,
	sNuzleafPose111,
	sNuzleafPose112,
	sNuzleafPose1,
	sNuzleafPose74,
	sNuzleafPose75,
	sNuzleafPose76,
	sNuzleafPose77,
	sNuzleafPose4,
	sNuzleafPose119,
	sNuzleafPose120,
	sNuzleafPose121,
	sNuzleafPose122,
	sNuzleafPose7,
	sNuzleafPose124,
	sNuzleafPose125,
	sNuzleafPose126,
	sNuzleafPose127,
	sNuzleafPose10,
	sNuzleafPose129,
	sNuzleafPose130,
	sNuzleafPose131,
	sNuzleafPose132,
	sNuzleafPose13,
	sNuzleafPose94,
	sNuzleafPose95,
	sNuzleafPose96,
	sNuzleafPose97,
	sNuzleafPose16,
	sNuzleafPose139,
	sNuzleafPose140,
	sNuzleafPose141,
	sNuzleafPose142,
	sNuzleafPose19,
	sNuzleafPose144,
	sNuzleafPose145,
	sNuzleafPose146,
	sNuzleafPose147,
	sNuzleafPose22,
	sNuzleafPose109,
	sNuzleafPose110,
	sNuzleafPose111,
	sNuzleafPose112,
	sNuzleafPose153,
	sNuzleafPose154,
	sNuzleafPose155,
	sNuzleafPose156,
	sNuzleafPose157,
	sNuzleafPose158,
	sNuzleafPose159,
	sNuzleafPose160,
	sNuzleafPose161,
	sNuzleafPose162,
	sNuzleafPose1,
	sNuzleafPose2,
	sNuzleafPose3,
	sNuzleafPose4,
	sNuzleafPose5,
	sNuzleafPose6,
	sNuzleafPose7,
	sNuzleafPose8,
	sNuzleafPose9,
	sNuzleafPose10,
	sNuzleafPose11,
	sNuzleafPose12,
	sNuzleafPose13,
	sNuzleafPose14,
	sNuzleafPose15,
	sNuzleafPose16,
	sNuzleafPose17,
	sNuzleafPose18,
	sNuzleafPose19,
	sNuzleafPose20,
	sNuzleafPose21,
	sNuzleafPose22,
	sNuzleafPose23,
	sNuzleafPose24,
	sNuzleafPose77,
	sNuzleafPose112,
	sNuzleafPose107,
	sNuzleafPose190,
	sNuzleafPose191,
	sNuzleafPose192,
	sNuzleafPose87,
	sNuzleafPose82,
	sNuzleafPose195,
	sNuzleafPose80,
	sNuzleafPose85,
	sNuzleafPose198,
	sNuzleafPose199,
	sNuzleafPose200,
	sNuzleafPose105,
	sNuzleafPose110,
	sNuzleafPose1,
	sNuzleafPose204,
	sNuzleafPose77,
	sNuzleafPose78,
	sNuzleafPose207,
	sNuzleafPose208,
	sNuzleafPose83,
	sNuzleafPose210,
	sNuzleafPose211,
	sNuzleafPose88,
	sNuzleafPose213,
	sNuzleafPose214,
	sNuzleafPose13,
	sNuzleafPose199,
	sNuzleafPose97,
	sNuzleafPose98,
	sNuzleafPose219,
	sNuzleafPose220,
	sNuzleafPose103,
	sNuzleafPose222,
	sNuzleafPose223,
	sNuzleafPose22,
	sNuzleafPose225,
	sNuzleafPose226,
	sNuzleafPose74,
	sNuzleafPose228,
	sNuzleafPose229,
	sNuzleafPose230,
	sNuzleafPose94,
	sNuzleafPose232,
	sNuzleafPose233,
	sNuzleafPose79,
	sNuzleafPose1,
	sNuzleafPose22,
	sNuzleafPose19,
	sNuzleafPose16,
	sNuzleafPose13,
	sNuzleafPose10,
	sNuzleafPose7,
	sNuzleafPose4,
};

static const struct PositionSets sAxPositionsNuzleaf[] = {
	[0] = { .set = { {0, -8}, {-9, -11}, {9, -11}, {0, -9} } },
	[1] = { .set = { {0, -6}, {-10, -9}, {10, -9}, {0, -7} } },
	[2] = { .set = { {0, -6}, {-8, -10}, {8, -10}, {0, -7} } },
	[3] = { .set = { {5, -8}, {1, -13}, {-8, -9}, {1, -9} } },
	[4] = { .set = { {6, -6}, {2, -11}, {-7, -6}, {2, -7} } },
	[5] = { .set = { {6, -6}, {2, -11}, {-7, -8}, {2, -7} } },
	[6] = { .set = { {7, -10}, {-4, -13}, {-5, -6}, {2, -8} } },
	[7] = { .set = { {9, -9}, {-2, -13}, {-4, -4}, {3, -7} } },
	[8] = { .set = { {9, -9}, {-2, -11}, {-4, -7}, {2, -7} } },
	[9] = { .set = { {7, -13}, {-7, -10}, {4, -5}, {1, -10} } },
	[10] = { .set = { {9, -13}, {-6, -11}, {6, -5}, {2, -10} } },
	[11] = { .set = { {9, -13}, {-6, -9}, {2, -5}, {2, -11} } },
	[12] = { .set = { {0, -13}, {9, -6}, {-9, -6}, {0, -11} } },
	[13] = { .set = { {0, -12}, {9, -7}, {-9, -7}, {0, -10} } },
	[14] = { .set = { {0, -12}, {8, -6}, {-8, -6}, {0, -10} } },
	[15] = { .set = { {-7, -13}, {7, -10}, {-4, -5}, {-1, -10} } },
	[16] = { .set = { {-9, -13}, {6, -11}, {-6, -5}, {-2, -10} } },
	[17] = { .set = { {-9, -13}, {6, -9}, {-2, -5}, {-2, -11} } },
	[18] = { .set = { {-7, -10}, {4, -13}, {5, -6}, {-2, -8} } },
	[19] = { .set = { {-9, -9}, {2, -13}, {4, -4}, {-3, -7} } },
	[20] = { .set = { {-9, -9}, {2, -11}, {4, -7}, {-2, -7} } },
	[21] = { .set = { {-5, -8}, {-1, -13}, {8, -9}, {-1, -9} } },
	[22] = { .set = { {-6, -6}, {-2, -11}, {7, -6}, {-2, -7} } },
	[23] = { .set = { {-6, -6}, {-2, -11}, {7, -8}, {-2, -7} } },
	[24] = { .set = { {0, -8}, {-9, -11}, {9, -11}, {0, -9} } },
	[25] = { .set = { {0, -6}, {-10, -9}, {10, -9}, {0, -7} } },
	[26] = { .set = { {0, -6}, {-8, -10}, {8, -10}, {0, -7} } },
	[27] = { .set = { {5, -8}, {1, -13}, {-8, -9}, {1, -9} } },
	[28] = { .set = { {6, -6}, {2, -11}, {-7, -6}, {2, -7} } },
	[29] = { .set = { {6, -6}, {2, -11}, {-7, -8}, {2, -7} } },
	[30] = { .set = { {7, -10}, {-4, -13}, {-5, -6}, {2, -8} } },
	[31] = { .set = { {9, -9}, {-2, -13}, {-4, -4}, {3, -7} } },
	[32] = { .set = { {9, -9}, {-2, -11}, {-4, -7}, {2, -7} } },
	[33] = { .set = { {7, -13}, {-7, -10}, {4, -5}, {1, -10} } },
	[34] = { .set = { {9, -13}, {-6, -11}, {6, -5}, {2, -10} } },
	[35] = { .set = { {9, -13}, {-6, -9}, {2, -5}, {2, -11} } },
	[36] = { .set = { {0, -13}, {9, -6}, {-9, -6}, {0, -11} } },
	[37] = { .set = { {0, -12}, {9, -7}, {-9, -7}, {0, -10} } },
	[38] = { .set = { {0, -12}, {8, -6}, {-8, -6}, {0, -10} } },
	[39] = { .set = { {-7, -13}, {7, -10}, {-4, -5}, {-1, -10} } },
	[40] = { .set = { {-9, -13}, {6, -11}, {-6, -5}, {-2, -10} } },
	[41] = { .set = { {-9, -13}, {6, -9}, {-2, -5}, {-2, -11} } },
	[42] = { .set = { {-7, -10}, {4, -13}, {5, -6}, {-2, -8} } },
	[43] = { .set = { {-9, -9}, {2, -13}, {4, -4}, {-3, -7} } },
	[44] = { .set = { {-9, -9}, {2, -11}, {4, -7}, {-2, -7} } },
	[45] = { .set = { {-5, -8}, {-1, -13}, {8, -9}, {-1, -9} } },
	[46] = { .set = { {-6, -6}, {-2, -11}, {7, -6}, {-2, -7} } },
	[47] = { .set = { {-6, -6}, {-2, -11}, {7, -8}, {-2, -7} } },
	[48] = { .set = { {0, -8}, {-9, -11}, {9, -11}, {0, -9} } },
	[49] = { .set = { {0, -6}, {-10, -9}, {10, -9}, {0, -7} } },
	[50] = { .set = { {0, -6}, {-8, -10}, {8, -10}, {0, -7} } },
	[51] = { .set = { {5, -8}, {1, -13}, {-8, -9}, {1, -9} } },
	[52] = { .set = { {6, -6}, {2, -11}, {-7, -6}, {2, -7} } },
	[53] = { .set = { {6, -6}, {2, -11}, {-7, -8}, {2, -7} } },
	[54] = { .set = { {7, -10}, {-4, -13}, {-5, -6}, {2, -8} } },
	[55] = { .set = { {9, -9}, {-2, -13}, {-4, -4}, {3, -7} } },
	[56] = { .set = { {9, -9}, {-2, -11}, {-4, -7}, {2, -7} } },
	[57] = { .set = { {7, -13}, {-7, -10}, {4, -5}, {1, -10} } },
	[58] = { .set = { {9, -13}, {-6, -11}, {6, -5}, {2, -10} } },
	[59] = { .set = { {9, -13}, {-6, -9}, {2, -5}, {2, -11} } },
	[60] = { .set = { {0, -13}, {9, -6}, {-9, -6}, {0, -11} } },
	[61] = { .set = { {0, -12}, {9, -7}, {-9, -7}, {0, -10} } },
	[62] = { .set = { {0, -12}, {8, -6}, {-8, -6}, {0, -10} } },
	[63] = { .set = { {-7, -13}, {7, -10}, {-4, -5}, {-1, -10} } },
	[64] = { .set = { {-9, -13}, {6, -11}, {-6, -5}, {-2, -10} } },
	[65] = { .set = { {-9, -13}, {6, -9}, {-2, -5}, {-2, -11} } },
	[66] = { .set = { {-7, -10}, {4, -13}, {5, -6}, {-2, -8} } },
	[67] = { .set = { {-9, -9}, {2, -13}, {4, -4}, {-3, -7} } },
	[68] = { .set = { {-9, -9}, {2, -11}, {4, -7}, {-2, -7} } },
	[69] = { .set = { {-5, -8}, {-1, -13}, {8, -9}, {-1, -9} } },
	[70] = { .set = { {-6, -6}, {-2, -11}, {7, -6}, {-2, -7} } },
	[71] = { .set = { {-6, -6}, {-2, -11}, {7, -8}, {-2, -7} } },
	[72] = { .set = { {0, -8}, {-9, -11}, {9, -11}, {0, -9} } },
	[73] = { .set = { {0, -4}, {-7, -5}, {7, -5}, {0, -7} } },
	[74] = { .set = { {0, -15}, {-4, -14}, {4, -14}, {0, -13} } },
	[75] = { .set = { {0, -2}, {-12, -7}, {12, -7}, {0, -5} } },
	[76] = { .set = { {0, 0}, {-12, -7}, {12, -7}, {0, -5} } },
	[77] = { .set = { {4, -8}, {0, -13}, {-9, -9}, {0, -9} } },
	[78] = { .set = { {0, -2}, {8, -4}, {-4, -4}, {-1, -6} } },
	[79] = { .set = { {6, -14}, {7, -13}, {3, -12}, {0, -10} } },
	[80] = { .set = { {7, -3}, {1, -9}, {-8, -4}, {0, -4} } },
	[81] = { .set = { {7, -2}, {1, -9}, {-8, -4}, {0, -4} } },
	[82] = { .set = { {5, -10}, {-6, -13}, {-7, -6}, {0, -8} } },
	[83] = { .set = { {5, -4}, {4, -7}, {3, -3}, {1, -5} } },
	[84] = { .set = { {9, -17}, {6, -20}, {9, -15}, {1, -11} } },
	[85] = { .set = { {9, -5}, {-2, -12}, {-4, -5}, {0, -4} } },
	[86] = { .set = { {9, -4}, {-2, -12}, {-4, -5}, {0, -4} } },
	[87] = { .set = { {5, -13}, {-9, -10}, {2, -5}, {-1, -10} } },
	[88] = { .set = { {5, -5}, {0, -10}, {6, -5}, {-2, -6} } },
	[89] = { .set = { {7, -21}, {0, -20}, {8, -17}, {-1, -13} } },
	[90] = { .set = { {7, -14}, {-10, -13}, {7, -5}, {-1, -9} } },
	[91] = { .set = { {7, -13}, {-10, -13}, {7, -5}, {-1, -9} } },
	[92] = { .set = { {0, -13}, {9, -6}, {-9, -6}, {0, -11} } },
	[93] = { .set = { {0, -8}, {6, -8}, {-6, -8}, {0, -9} } },
	[94] = { .set = { {0, -19}, {3, -17}, {-3, -17}, {0, -14} } },
	[95] = { .set = { {0, -10}, {11, -11}, {-11, -11}, {0, -9} } },
	[96] = { .set = { {0, -10}, {11, -11}, {-11, -11}, {0, -9} } },
	[97] = { .set = { {-6, -13}, {8, -10}, {-3, -5}, {0, -10} } },
	[98] = { .set = { {-6, -5}, {-1, -10}, {-7, -5}, {1, -6} } },
	[99] = { .set = { {-8, -21}, {-1, -20}, {-9, -17}, {0, -13} } },
	[100] = { .set = { {-8, -14}, {9, -13}, {-8, -5}, {0, -9} } },
	[101] = { .set = { {-8, -13}, {9, -13}, {-8, -5}, {0, -9} } },
	[102] = { .set = { {-6, -10}, {5, -13}, {6, -6}, {-1, -8} } },
	[103] = { .set = { {-6, -4}, {-5, -7}, {-4, -3}, {-2, -5} } },
	[104] = { .set = { {-10, -17}, {-7, -20}, {-10, -15}, {-2, -11} } },
	[105] = { .set = { {-10, -5}, {1, -12}, {3, -5}, {-1, -4} } },
	[106] = { .set = { {-10, -4}, {1, -12}, {3, -5}, {-1, -4} } },
	[107] = { .set = { {-5, -8}, {-1, -13}, {8, -9}, {-1, -9} } },
	[108] = { .set = { {-1, -2}, {-9, -4}, {3, -4}, {0, -6} } },
	[109] = { .set = { {-7, -14}, {-8, -13}, {-4, -12}, {-1, -10} } },
	[110] = { .set = { {-8, -3}, {-2, -9}, {7, -4}, {-1, -4} } },
	[111] = { .set = { {-8, -2}, {-2, -9}, {7, -4}, {-1, -4} } },
	[112] = { .set = { {0, -8}, {-9, -11}, {9, -11}, {0, -9} } },
	[113] = { .set = { {0, -4}, {-7, -5}, {7, -5}, {0, -7} } },
	[114] = { .set = { {0, -15}, {-4, -14}, {4, -14}, {0, -13} } },
	[115] = { .set = { {0, -2}, {-12, -7}, {12, -7}, {0, -5} } },
	[116] = { .set = { {0, 0}, {-12, -7}, {12, -7}, {0, -5} } },
	[117] = { .set = { {5, -8}, {1, -13}, {-8, -9}, {1, -9} } },
	[118] = { .set = { {1, -2}, {9, -4}, {-3, -4}, {0, -6} } },
	[119] = { .set = { {7, -14}, {8, -13}, {4, -12}, {1, -10} } },
	[120] = { .set = { {8, -3}, {2, -9}, {-7, -4}, {1, -4} } },
	[121] = { .set = { {8, -2}, {2, -9}, {-7, -4}, {1, -4} } },
	[122] = { .set = { {7, -10}, {-4, -13}, {-5, -6}, {2, -8} } },
	[123] = { .set = { {8, -4}, {7, -7}, {6, -3}, {4, -5} } },
	[124] = { .set = { {12, -17}, {9, -20}, {12, -15}, {4, -11} } },
	[125] = { .set = { {11, -5}, {0, -12}, {-2, -5}, {2, -4} } },
	[126] = { .set = { {11, -4}, {0, -12}, {-2, -5}, {2, -4} } },
	[127] = { .set = { {7, -13}, {-7, -10}, {4, -5}, {1, -10} } },
	[128] = { .set = { {7, -5}, {2, -10}, {8, -5}, {0, -6} } },
	[129] = { .set = { {9, -21}, {2, -20}, {10, -17}, {1, -13} } },
	[130] = { .set = { {10, -15}, {-7, -14}, {10, -6}, {2, -10} } },
	[131] = { .set = { {10, -14}, {-7, -14}, {10, -6}, {2, -10} } },
	[132] = { .set = { {0, -13}, {9, -6}, {-9, -6}, {0, -11} } },
	[133] = { .set = { {0, -8}, {6, -8}, {-6, -8}, {0, -9} } },
	[134] = { .set = { {0, -19}, {3, -17}, {-3, -17}, {0, -14} } },
	[135] = { .set = { {0, -10}, {11, -11}, {-11, -11}, {0, -9} } },
	[136] = { .set = { {0, -10}, {11, -11}, {-11, -11}, {0, -9} } },
	[137] = { .set = { {-7, -13}, {7, -10}, {-4, -5}, {-1, -10} } },
	[138] = { .set = { {-7, -5}, {-2, -10}, {-8, -5}, {0, -6} } },
	[139] = { .set = { {-9, -21}, {-2, -20}, {-10, -17}, {-1, -13} } },
	[140] = { .set = { {-10, -15}, {7, -14}, {-10, -6}, {-2, -10} } },
	[141] = { .set = { {-10, -14}, {7, -14}, {-10, -6}, {-2, -10} } },
	[142] = { .set = { {-7, -10}, {4, -13}, {5, -6}, {-2, -8} } },
	[143] = { .set = { {-8, -4}, {-7, -7}, {-6, -3}, {-4, -5} } },
	[144] = { .set = { {-12, -17}, {-9, -20}, {-12, -15}, {-4, -11} } },
	[145] = { .set = { {-11, -5}, {0, -12}, {2, -5}, {-2, -4} } },
	[146] = { .set = { {-11, -4}, {0, -12}, {2, -5}, {-2, -4} } },
	[147] = { .set = { {-5, -8}, {-1, -13}, {8, -9}, {-1, -9} } },
	[148] = { .set = { {-1, -2}, {-9, -4}, {3, -4}, {0, -6} } },
	[149] = { .set = { {-7, -14}, {-8, -13}, {-4, -12}, {-1, -10} } },
	[150] = { .set = { {-8, -3}, {-2, -9}, {7, -4}, {-1, -4} } },
	[151] = { .set = { {-8, -2}, {-2, -9}, {7, -4}, {-1, -4} } },
	[152] = { .set = { {-3, -7}, {-5, -2}, {7, 0}, {1, -7} } },
	[153] = { .set = { {-4, -6}, {-5, -2}, {7, 0}, {0, -6} } },
	[154] = { .set = { {0, -12}, {-9, -7}, {9, -7}, {0, -10} } },
	[155] = { .set = { {-1, -11}, {7, -9}, {-10, -2}, {-1, -9} } },
	[156] = { .set = { {-2, -11}, {2, -12}, {-5, -1}, {-1, -8} } },
	[157] = { .set = { {0, -10}, {-12, -8}, {4, 0}, {1, -8} } },
	[158] = { .set = { {0, -11}, {10, -5}, {-10, -5}, {0, -7} } },
	[159] = { .set = { {-1, -10}, {11, -8}, {-5, 0}, {-2, -8} } },
	[160] = { .set = { {1, -11}, {-3, -12}, {4, -1}, {0, -8} } },
	[161] = { .set = { {0, -11}, {-8, -9}, {9, -2}, {0, -9} } },
	[162] = { .set = { {0, -8}, {-9, -11}, {9, -11}, {0, -9} } },
	[163] = { .set = { {0, -6}, {-10, -9}, {10, -9}, {0, -7} } },
	[164] = { .set = { {0, -6}, {-8, -10}, {8, -10}, {0, -7} } },
	[165] = { .set = { {5, -8}, {1, -13}, {-8, -9}, {1, -9} } },
	[166] = { .set = { {6, -6}, {2, -11}, {-7, -6}, {2, -7} } },
	[167] = { .set = { {6, -6}, {2, -11}, {-7, -8}, {2, -7} } },
	[168] = { .set = { {7, -10}, {-4, -13}, {-5, -6}, {2, -8} } },
	[169] = { .set = { {9, -9}, {-2, -13}, {-4, -4}, {3, -7} } },
	[170] = { .set = { {9, -9}, {-2, -11}, {-4, -7}, {2, -7} } },
	[171] = { .set = { {7, -13}, {-7, -10}, {4, -5}, {1, -10} } },
	[172] = { .set = { {9, -13}, {-6, -11}, {6, -5}, {2, -10} } },
	[173] = { .set = { {9, -13}, {-6, -9}, {2, -5}, {2, -11} } },
	[174] = { .set = { {0, -13}, {9, -6}, {-9, -6}, {0, -11} } },
	[175] = { .set = { {0, -12}, {9, -7}, {-9, -7}, {0, -10} } },
	[176] = { .set = { {0, -12}, {8, -6}, {-8, -6}, {0, -10} } },
	[177] = { .set = { {-7, -13}, {7, -10}, {-4, -5}, {-1, -10} } },
	[178] = { .set = { {-9, -13}, {6, -11}, {-6, -5}, {-2, -10} } },
	[179] = { .set = { {-9, -13}, {6, -9}, {-2, -5}, {-2, -11} } },
	[180] = { .set = { {-7, -10}, {4, -13}, {5, -6}, {-2, -8} } },
	[181] = { .set = { {-9, -9}, {2, -13}, {4, -4}, {-3, -7} } },
	[182] = { .set = { {-9, -9}, {2, -11}, {4, -7}, {-2, -7} } },
	[183] = { .set = { {-5, -8}, {-1, -13}, {8, -9}, {-1, -9} } },
	[184] = { .set = { {-6, -6}, {-2, -11}, {7, -6}, {-2, -7} } },
	[185] = { .set = { {-6, -6}, {-2, -11}, {7, -8}, {-2, -7} } },
	[186] = { .set = { {0, 0}, {-12, -7}, {12, -7}, {0, -5} } },
	[187] = { .set = { {-8, -2}, {-2, -9}, {7, -4}, {-1, -4} } },
	[188] = { .set = { {-10, -4}, {1, -12}, {3, -5}, {-1, -4} } },
	[189] = { .set = { {-9, -12}, {8, -12}, {-9, -4}, {-1, -8} } },
	[190] = { .set = { {0, -9}, {11, -10}, {-11, -10}, {0, -8} } },
	[191] = { .set = { {8, -12}, {-9, -12}, {8, -4}, {0, -8} } },
	[192] = { .set = { {9, -4}, {-2, -12}, {-4, -5}, {0, -4} } },
	[193] = { .set = { {7, -2}, {1, -9}, {-8, -4}, {0, -4} } },
	[194] = { .set = { {0, -14}, {-4, -13}, {4, -13}, {0, -12} } },
	[195] = { .set = { {6, -14}, {7, -13}, {3, -12}, {0, -10} } },
	[196] = { .set = { {9, -17}, {6, -20}, {9, -15}, {1, -11} } },
	[197] = { .set = { {6, -19}, {-1, -18}, {7, -15}, {-2, -11} } },
	[198] = { .set = { {0, -16}, {3, -14}, {-3, -14}, {0, -11} } },
	[199] = { .set = { {-7, -19}, {0, -18}, {-8, -15}, {1, -11} } },
	[200] = { .set = { {-10, -17}, {-7, -20}, {-10, -15}, {-2, -11} } },
	[201] = { .set = { {-7, -14}, {-8, -13}, {-4, -12}, {-1, -10} } },
	[202] = { .set = { {0, -8}, {-9, -11}, {9, -11}, {0, -9} } },
	[203] = { .set = { {0, -12}, {-4, -11}, {4, -11}, {0, -10} } },
	[204] = { .set = { {0, 0}, {-12, -7}, {12, -7}, {0, -5} } },
	[205] = { .set = { {4, -8}, {0, -13}, {-9, -9}, {0, -9} } },
	[206] = { .set = { {5, -14}, {6, -13}, {2, -12}, {-1, -10} } },
	[207] = { .set = { {6, -2}, {0, -9}, {-9, -4}, {-1, -4} } },
	[208] = { .set = { {5, -10}, {-6, -13}, {-7, -6}, {0, -8} } },
	[209] = { .set = { {7, -14}, {4, -17}, {7, -12}, {-1, -8} } },
	[210] = { .set = { {5, -4}, {-6, -12}, {-8, -5}, {-4, -4} } },
	[211] = { .set = { {5, -13}, {-9, -10}, {2, -5}, {-1, -10} } },
	[212] = { .set = { {5, -19}, {-2, -18}, {6, -15}, {-3, -11} } },
	[213] = { .set = { {6, -13}, {-11, -13}, {6, -5}, {-2, -9} } },
	[214] = { .set = { {0, -13}, {9, -6}, {-9, -6}, {0, -11} } },
	[215] = { .set = { {0, -16}, {3, -14}, {-3, -14}, {0, -11} } },
	[216] = { .set = { {0, -10}, {11, -11}, {-11, -11}, {0, -9} } },
	[217] = { .set = { {-6, -13}, {8, -10}, {-3, -5}, {0, -10} } },
	[218] = { .set = { {-6, -19}, {1, -18}, {-7, -15}, {2, -11} } },
	[219] = { .set = { {-7, -13}, {10, -13}, {-7, -5}, {1, -9} } },
	[220] = { .set = { {-6, -10}, {5, -13}, {6, -6}, {-1, -8} } },
	[221] = { .set = { {-8, -15}, {-5, -18}, {-8, -13}, {0, -9} } },
	[222] = { .set = { {-6, -4}, {5, -12}, {7, -5}, {3, -4} } },
	[223] = { .set = { {-5, -8}, {-1, -13}, {8, -9}, {-1, -9} } },
	[224] = { .set = { {-6, -14}, {-7, -13}, {-3, -12}, {0, -10} } },
	[225] = { .set = { {-7, -2}, {-1, -9}, {8, -4}, {0, -4} } },
	[226] = { .set = { {0, -4}, {-7, -5}, {7, -5}, {0, -7} } },
	[227] = { .set = { {0, -2}, {-8, -4}, {4, -4}, {1, -6} } },
	[228] = { .set = { {-4, -4}, {-3, -7}, {-2, -3}, {0, -5} } },
	[229] = { .set = { {-5, -5}, {0, -10}, {-6, -5}, {2, -6} } },
	[230] = { .set = { {0, -8}, {6, -8}, {-6, -8}, {0, -9} } },
	[231] = { .set = { {4, -5}, {-1, -10}, {5, -5}, {-3, -6} } },
	[232] = { .set = { {4, -4}, {3, -7}, {2, -3}, {0, -5} } },
	[233] = { .set = { {0, -2}, {8, -4}, {-4, -4}, {-1, -6} } },
	[234] = { .set = { {0, -8}, {-9, -11}, {9, -11}, {0, -9} } },
	[235] = { .set = { {-5, -8}, {-1, -13}, {8, -9}, {-1, -9} } },
	[236] = { .set = { {-7, -10}, {4, -13}, {5, -6}, {-2, -8} } },
	[237] = { .set = { {-7, -13}, {7, -10}, {-4, -5}, {-1, -10} } },
	[238] = { .set = { {0, -13}, {9, -6}, {-9, -6}, {0, -11} } },
	[239] = { .set = { {7, -13}, {-7, -10}, {4, -5}, {1, -10} } },
	[240] = { .set = { {7, -10}, {-4, -13}, {-5, -6}, {2, -8} } },
	[241] = { .set = { {5, -8}, {1, -13}, {-8, -9}, {1, -9} } },
};

static const ax_anim *const sNuzleafAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02471),
	AX_ANIM_PTR(gAxSharedAnim_02536),
	AX_ANIM_PTR(gAxSharedAnim_02545),
	AX_ANIM_PTR(gAxSharedAnim_02554),
	AX_ANIM_PTR(gAxSharedAnim_02494),
	AX_ANIM_PTR(gAxSharedAnim_02514),
	AX_ANIM_PTR(gAxSharedAnim_02521),
	AX_ANIM_PTR(gAxSharedAnim_02530),
};

static const ax_anim *const sNuzleafAnimTable2[] = {
	AX_ANIM_PTR(sNuzleafAnims_2_1),
	AX_ANIM_PTR(sNuzleafAnims_2_2),
	AX_ANIM_PTR(sNuzleafAnims_2_3),
	AX_ANIM_PTR(sNuzleafAnims_2_4),
	AX_ANIM_PTR(sNuzleafAnims_2_5),
	AX_ANIM_PTR(sNuzleafAnims_2_6),
	AX_ANIM_PTR(sNuzleafAnims_2_7),
	AX_ANIM_PTR(sNuzleafAnims_2_8),
};

static const ax_anim *const sNuzleafAnimTable3[] = {
	AX_ANIM_PTR(gAxSharedAnim_01979),
	AX_ANIM_PTR(gAxSharedAnim_01986),
	AX_ANIM_PTR(gAxSharedAnim_01998),
	AX_ANIM_PTR(gAxSharedAnim_02013),
	AX_ANIM_PTR(gAxSharedAnim_02034),
	AX_ANIM_PTR(gAxSharedAnim_02042),
	AX_ANIM_PTR(gAxSharedAnim_02064),
	AX_ANIM_PTR(gAxSharedAnim_02080),
};

static const ax_anim *const sNuzleafAnimTable4[] = {
	AX_ANIM_PTR(sNuzleafAnims_4_1),
	AX_ANIM_PTR(sNuzleafAnims_4_2),
	AX_ANIM_PTR(sNuzleafAnims_4_3),
	AX_ANIM_PTR(sNuzleafAnims_4_4),
	AX_ANIM_PTR(sNuzleafAnims_4_5),
	AX_ANIM_PTR(sNuzleafAnims_4_6),
	AX_ANIM_PTR(sNuzleafAnims_4_7),
	AX_ANIM_PTR(sNuzleafAnims_4_8),
};

static const ax_anim *const sNuzleafAnimTable5[] = {
	AX_ANIM_PTR(sNuzleafAnims_5_1),
	AX_ANIM_PTR(sNuzleafAnims_5_2),
	AX_ANIM_PTR(sNuzleafAnims_5_3),
	AX_ANIM_PTR(sNuzleafAnims_5_4),
	AX_ANIM_PTR(sNuzleafAnims_5_5),
	AX_ANIM_PTR(sNuzleafAnims_5_6),
	AX_ANIM_PTR(sNuzleafAnims_5_7),
	AX_ANIM_PTR(sNuzleafAnims_5_8),
};

static const ax_anim *const sNuzleafAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
};

static const ax_anim *const sNuzleafAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00606),
	AX_ANIM_PTR(gAxSharedAnim_00617),
	AX_ANIM_PTR(gAxSharedAnim_00626),
	AX_ANIM_PTR(gAxSharedAnim_00637),
	AX_ANIM_PTR(gAxSharedAnim_00654),
	AX_ANIM_PTR(gAxSharedAnim_00665),
	AX_ANIM_PTR(gAxSharedAnim_00680),
	AX_ANIM_PTR(gAxSharedAnim_00691),
};

static const ax_anim *const sNuzleafAnimTable8[] = {
	AX_ANIM_PTR(sNuzleafAnims_8_1),
	AX_ANIM_PTR(sNuzleafAnims_8_2),
	AX_ANIM_PTR(sNuzleafAnims_8_3),
	AX_ANIM_PTR(sNuzleafAnims_8_4),
	AX_ANIM_PTR(sNuzleafAnims_8_5),
	AX_ANIM_PTR(sNuzleafAnims_8_6),
	AX_ANIM_PTR(sNuzleafAnims_8_7),
	AX_ANIM_PTR(sNuzleafAnims_8_8),
};

static const ax_anim *const sNuzleafAnimTable9[] = {
	AX_ANIM_PTR(sNuzleafAnims_9_1),
	AX_ANIM_PTR(sNuzleafAnims_9_2),
	AX_ANIM_PTR(sNuzleafAnims_9_3),
	AX_ANIM_PTR(sNuzleafAnims_9_4),
	AX_ANIM_PTR(sNuzleafAnims_9_5),
	AX_ANIM_PTR(sNuzleafAnims_9_6),
	AX_ANIM_PTR(sNuzleafAnims_9_7),
	AX_ANIM_PTR(sNuzleafAnims_9_8),
};

static const ax_anim *const sNuzleafAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01143),
	AX_ANIM_PTR(gAxSharedAnim_01156),
	AX_ANIM_PTR(gAxSharedAnim_01167),
	AX_ANIM_PTR(gAxSharedAnim_01178),
	AX_ANIM_PTR(gAxSharedAnim_01189),
	AX_ANIM_PTR(gAxSharedAnim_01200),
	AX_ANIM_PTR(gAxSharedAnim_01217),
	AX_ANIM_PTR(gAxSharedAnim_01228),
};

static const ax_anim *const sNuzleafAnimTable11[] = {
	AX_ANIM_PTR(sNuzleafAnims_11_1),
	AX_ANIM_PTR(sNuzleafAnims_11_2),
	AX_ANIM_PTR(sNuzleafAnims_11_3),
	AX_ANIM_PTR(gAxSharedAnim_01345),
	AX_ANIM_PTR(sNuzleafAnims_11_5),
	AX_ANIM_PTR(gAxSharedAnim_01408),
	AX_ANIM_PTR(sNuzleafAnims_11_7),
	AX_ANIM_PTR(sNuzleafAnims_11_8),
};

static const ax_anim *const sNuzleafAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01472),
	AX_ANIM_PTR(gAxSharedAnim_01520),
	AX_ANIM_PTR(gAxSharedAnim_01507),
	AX_ANIM_PTR(gAxSharedAnim_01500),
	AX_ANIM_PTR(gAxSharedAnim_01499),
	AX_ANIM_PTR(gAxSharedAnim_01491),
	AX_ANIM_PTR(gAxSharedAnim_01481),
	AX_ANIM_PTR(gAxSharedAnim_01473),
};

static const ax_anim *const sNuzleafAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01525),
	AX_ANIM_PTR(gAxSharedAnim_01579),
	AX_ANIM_PTR(gAxSharedAnim_01577),
	AX_ANIM_PTR(gAxSharedAnim_01555),
	AX_ANIM_PTR(gAxSharedAnim_01549),
	AX_ANIM_PTR(gAxSharedAnim_01544),
	AX_ANIM_PTR(gAxSharedAnim_01539),
	AX_ANIM_PTR(gAxSharedAnim_01531),
};

static const ax_anim *const *const sAxAnimationsNuzleaf[] = {
	sNuzleafAnimTable1,
	sNuzleafAnimTable2,
	sNuzleafAnimTable3,
	sNuzleafAnimTable4,
	sNuzleafAnimTable5,
	sNuzleafAnimTable6,
	sNuzleafAnimTable7,
	sNuzleafAnimTable8,
	sNuzleafAnimTable9,
	sNuzleafAnimTable10,
	sNuzleafAnimTable11,
	sNuzleafAnimTable12,
	sNuzleafAnimTable13,
};

static const ax_sprite *const sAxSpritesNuzleaf[] = {
	sNuzleafSprites1,
	sNuzleafSprites2,
	sNuzleafSprites3,
	sNuzleafSprites4,
	sNuzleafSprites5,
	sNuzleafSprites6,
	sNuzleafSprites7,
	sNuzleafSprites8,
	sNuzleafSprites9,
	sNuzleafSprites10,
	sNuzleafSprites11,
	sNuzleafSprites12,
	sNuzleafSprites13,
	sNuzleafSprites14,
	sNuzleafSprites15,
	sNuzleafSprites16,
	sNuzleafSprites17,
	sNuzleafSprites18,
	sNuzleafSprites19,
	sNuzleafSprites20,
	sNuzleafSprites21,
	sNuzleafSprites22,
	sNuzleafSprites23,
	sNuzleafSprites24,
	sNuzleafSprites25,
	sNuzleafSprites26,
	sNuzleafSprites27,
	sNuzleafSprites28,
	sNuzleafSprites29,
	sNuzleafSprites30,
	sNuzleafSprites31,
	sNuzleafSprites32,
	sNuzleafSprites33,
	sNuzleafSprites34,
	sNuzleafSprites35,
	sNuzleafSprites36,
	sNuzleafSprites37,
	sNuzleafSprites38,
	sNuzleafSprites39,
	sNuzleafSprites40,
	sNuzleafSprites41,
	sNuzleafSprites42,
};

static const axmain sAxMainNuzleaf = {
	.poses = sAxPosesNuzleaf,
	.animations = sAxAnimationsNuzleaf,
	.animCount = ARRAY_COUNT(sAxAnimationsNuzleaf),
	.spriteData = sAxSpritesNuzleaf,
	.positions = sAxPositionsNuzleaf,
};
