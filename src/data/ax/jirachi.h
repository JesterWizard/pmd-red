/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainJirachi;
const SiroArchive gAxJirachi = {"SIRO", &sAxMainJirachi};

static const ax_pose sJirachiPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose4[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose5[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose6[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose7[] = {
	AX_POSE(6, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose8[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose9[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose10[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose11[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose12[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose13[] = {
	AX_POSE(12, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose14[] = {
	AX_POSE(13, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose15[] = {
	AX_POSE(14, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose16[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose17[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose18[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose19[] = {
	AX_POSE(6, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose20[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose21[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose22[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose23[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose24[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose25[] = {
	AX_POSE(15, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose29[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose30[] = {
	AX_POSE(17, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose34[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose35[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose39[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose40[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose44[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose45[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose49[] = {
	AX_POSE(24, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose50[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose54[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose55[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose59[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose60[] = {
	AX_POSE(17, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose64[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose106[] = {
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose108[] = {
	AX_POSE(26, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose110[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose112[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose114[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose116[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose118[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose120[] = {
	AX_POSE(26, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose122[] = {
	AX_POSE(30, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose124[] = {
	AX_POSE(31, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose126[] = {
	AX_POSE(32, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose128[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose130[] = {
	AX_POSE(34, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose132[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose134[] = {
	AX_POSE(32, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose136[] = {
	AX_POSE(31, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose137[] = {
	AX_POSE(35, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose138[] = {
	AX_POSE(36, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose139[] = {
	AX_POSE(37, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose140[] = {
	AX_POSE(38, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose141[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose142[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose143[] = {
	AX_POSE(41, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose144[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose145[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose146[] = {
	AX_POSE(38, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose157[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose158[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose160[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose161[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose164[] = {
	AX_POSE(26, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose170[] = {
	AX_POSE(26, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose173[] = {
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose179[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose182[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose188[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose191[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose211[] = {
	AX_POSE(42, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 2, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose212[] = {
	AX_POSE(43, OAM1(214, ST_OAM_SQUARE     , 1), OAM2(224, ST_OAM_SIZE_3, FLIP(0, 0), 2, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose213[] = {
	AX_POSE(44, OAM1(214, ST_OAM_SQUARE     , 1), OAM2(224, ST_OAM_SIZE_3, FLIP(0, 0), 2, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose214[] = {
	AX_POSE(45, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 2, 0), OAM3(0, 3, 7)),
	AX_POSE(46, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 2, 0), OAM3(16, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose215[] = {
	AX_POSE(47, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(224, ST_OAM_SIZE_3, FLIP(0, 0), 2, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose216[] = {
	AX_POSE(48, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(224, ST_OAM_SIZE_3, FLIP(0, 0), 2, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose217[] = {
	AX_POSE(49, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(224, ST_OAM_SIZE_3, FLIP(0, 0), 2, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose218[] = {
	AX_POSE(50, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 2, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJirachiPose220[] = {
	AX_POSE(30, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const u8 sJirachiAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_1_1.lz");
static const u8 sJirachiAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_1_2.lz");
static const u8 sJirachiAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_1_3.lz");
static const u8 sJirachiAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_1_4.lz");
static const u8 sJirachiAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_1_5.lz");
static const u8 sJirachiAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_1_6.lz");
static const u8 sJirachiAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_1_7.lz");
static const u8 sJirachiAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_1_8.lz");
static const u8 sJirachiAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_2_1.lz");
static const u8 sJirachiAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_2_2.lz");
static const u8 sJirachiAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_2_3.lz");
static const u8 sJirachiAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_2_4.lz");
static const u8 sJirachiAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_2_5.lz");
static const u8 sJirachiAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_2_6.lz");
static const u8 sJirachiAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_2_7.lz");
static const u8 sJirachiAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_2_8.lz");
static const u8 sJirachiAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_3_1.lz");
static const u8 sJirachiAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_3_2.lz");
static const u8 sJirachiAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_3_3.lz");
static const u8 sJirachiAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_3_4.lz");
static const u8 sJirachiAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_3_5.lz");
static const u8 sJirachiAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_3_6.lz");
static const u8 sJirachiAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_3_7.lz");
static const u8 sJirachiAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_3_8.lz");
static const u8 sJirachiAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_4_1.lz");
static const u8 sJirachiAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_4_2.lz");
static const u8 sJirachiAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_4_3.lz");
static const u8 sJirachiAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_4_4.lz");
static const u8 sJirachiAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_4_5.lz");
static const u8 sJirachiAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_4_6.lz");
static const u8 sJirachiAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_4_7.lz");
static const u8 sJirachiAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_4_8.lz");
static const u8 sJirachiAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_5_1.lz");
static const u8 sJirachiAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_5_2.lz");
static const u8 sJirachiAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_5_3.lz");
static const u8 sJirachiAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_5_4.lz");
static const u8 sJirachiAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_5_5.lz");
static const u8 sJirachiAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_5_6.lz");
static const u8 sJirachiAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_5_7.lz");
static const u8 sJirachiAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_5_8.lz");
static const u8 sJirachiAnims_6_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_6_1.lz");
static const u8 sJirachiAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_9_1.lz");
static const u8 sJirachiAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_9_2.lz");
static const u8 sJirachiAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_9_3.lz");
static const u8 sJirachiAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_9_4.lz");
static const u8 sJirachiAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_9_5.lz");
static const u8 sJirachiAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_9_6.lz");
static const u8 sJirachiAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_9_7.lz");
static const u8 sJirachiAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_9_8.lz");
static const u8 sJirachiAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_11_1.lz");
static const u8 sJirachiAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_11_2.lz");
static const u8 sJirachiAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_11_3.lz");
static const u8 sJirachiAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_11_4.lz");
static const u8 sJirachiAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_11_5.lz");
static const u8 sJirachiAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_11_6.lz");
static const u8 sJirachiAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_11_7.lz");
static const u8 sJirachiAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_11_8.lz");
static const ax_anim sJirachiAnims_14_1[] = {
	{ .frames = 20, .unkFlags = 0, .poseId = 210, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 211, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 212, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 211, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 212, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 211, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 212, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 211, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 212, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 211, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 212, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 211, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 212, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 211, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 212, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 211, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 212, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 213, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 214, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 215, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 216, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 214, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 215, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 216, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 214, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 215, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 216, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 214, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 215, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 216, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 214, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 215, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 7, .unkFlags = 0, .poseId = 216, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 217, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 219, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 217, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 219, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 217, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 219, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 217, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 219, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 217, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 219, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 217, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 219, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 217, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 219, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 217, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 219, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 217, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 219, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 217, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 219, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 217, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 219, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 217, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 219, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 219, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 219, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 219, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 219, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 219, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 219, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 219, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 219, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 219, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 219, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const u8 sJirachiAnims_15_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jirachi/sJirachiAnims_15_1.lz");
static const ax_anim sJirachiAnims_16_1[] = {
	{ .frames = 20, .unkFlags = 0, .poseId = 232, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sJirachiGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_1.4bpp.lz");
static const ax_sprite sJirachiSprites1[] = {
	{sJirachiGfx1, ARRAY_COUNT(sJirachiGfx1)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_2.4bpp.lz");
static const ax_sprite sJirachiSprites2[] = {
	{sJirachiGfx2, ARRAY_COUNT(sJirachiGfx2)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_3.4bpp.lz");
static const ax_sprite sJirachiSprites3[] = {
	{sJirachiGfx3, ARRAY_COUNT(sJirachiGfx3)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_4.4bpp.lz");
static const ax_sprite sJirachiSprites4[] = {
	{sJirachiGfx4, ARRAY_COUNT(sJirachiGfx4)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_5.4bpp.lz");
static const ax_sprite sJirachiSprites5[] = {
	{sJirachiGfx5, ARRAY_COUNT(sJirachiGfx5)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_6.4bpp.lz");
static const ax_sprite sJirachiSprites6[] = {
	{sJirachiGfx6, ARRAY_COUNT(sJirachiGfx6)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_7.4bpp.lz");
static const ax_sprite sJirachiSprites7[] = {
	{sJirachiGfx7, ARRAY_COUNT(sJirachiGfx7)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_8.4bpp.lz");
static const ax_sprite sJirachiSprites8[] = {
	{sJirachiGfx8, ARRAY_COUNT(sJirachiGfx8)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_9.4bpp.lz");
static const ax_sprite sJirachiSprites9[] = {
	{sJirachiGfx9, ARRAY_COUNT(sJirachiGfx9)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_10.4bpp.lz");
static const ax_sprite sJirachiSprites10[] = {
	{sJirachiGfx10, ARRAY_COUNT(sJirachiGfx10)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_11.4bpp.lz");
static const ax_sprite sJirachiSprites11[] = {
	{sJirachiGfx11, ARRAY_COUNT(sJirachiGfx11)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_12.4bpp.lz");
static const ax_sprite sJirachiSprites12[] = {
	{sJirachiGfx12, ARRAY_COUNT(sJirachiGfx12)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_13.4bpp.lz");
static const ax_sprite sJirachiSprites13[] = {
	{sJirachiGfx13, ARRAY_COUNT(sJirachiGfx13)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_14.4bpp.lz");
static const ax_sprite sJirachiSprites14[] = {
	{sJirachiGfx14, ARRAY_COUNT(sJirachiGfx14)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_15.4bpp.lz");
static const ax_sprite sJirachiSprites15[] = {
	{sJirachiGfx15, ARRAY_COUNT(sJirachiGfx15)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_16.4bpp.lz");
static const u8 sJirachiGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_16_1.4bpp.lz");
static const u8 sJirachiGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_16_2.4bpp.lz");
static const ax_sprite sJirachiSprites16[] = {
	{sJirachiGfx16, ARRAY_COUNT(sJirachiGfx16)}, 
	{NULL, 32}, 
	{sJirachiGfx16_1, ARRAY_COUNT(sJirachiGfx16_1)}, 
	{NULL, 32}, 
	{sJirachiGfx16_2, ARRAY_COUNT(sJirachiGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sJirachiGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_17.4bpp.lz");
static const u8 sJirachiGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_17_1.4bpp.lz");
static const ax_sprite sJirachiSprites17[] = {
	{NULL, 128}, 
	{sJirachiGfx17, ARRAY_COUNT(sJirachiGfx17)}, 
	{NULL, 32}, 
	{sJirachiGfx17_1, ARRAY_COUNT(sJirachiGfx17_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJirachiGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_18.4bpp.lz");
static const u8 sJirachiGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_18_1.4bpp.lz");
static const u8 sJirachiGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_18_2.4bpp.lz");
static const ax_sprite sJirachiSprites18[] = {
	{sJirachiGfx18, ARRAY_COUNT(sJirachiGfx18)}, 
	{NULL, 32}, 
	{sJirachiGfx18_1, ARRAY_COUNT(sJirachiGfx18_1)}, 
	{NULL, 32}, 
	{sJirachiGfx18_2, ARRAY_COUNT(sJirachiGfx18_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sJirachiGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_19.4bpp.lz");
static const u8 sJirachiGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_19_1.4bpp.lz");
static const ax_sprite sJirachiSprites19[] = {
	{NULL, 64}, 
	{sJirachiGfx19, ARRAY_COUNT(sJirachiGfx19)}, 
	{NULL, 32}, 
	{sJirachiGfx19_1, ARRAY_COUNT(sJirachiGfx19_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sJirachiGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_20.4bpp.lz");
static const u8 sJirachiGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_20_1.4bpp.lz");
static const u8 sJirachiGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_20_2.4bpp.lz");
static const ax_sprite sJirachiSprites20[] = {
	{NULL, 32}, 
	{sJirachiGfx20, ARRAY_COUNT(sJirachiGfx20)}, 
	{NULL, 32}, 
	{sJirachiGfx20_1, ARRAY_COUNT(sJirachiGfx20_1)}, 
	{NULL, 32}, 
	{sJirachiGfx20_2, ARRAY_COUNT(sJirachiGfx20_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sJirachiGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_21.4bpp.lz");
static const u8 sJirachiGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_21_1.4bpp.lz");
static const ax_sprite sJirachiSprites21[] = {
	{NULL, 128}, 
	{sJirachiGfx21, ARRAY_COUNT(sJirachiGfx21)}, 
	{NULL, 32}, 
	{sJirachiGfx21_1, ARRAY_COUNT(sJirachiGfx21_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sJirachiGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_22.4bpp.lz");
static const u8 sJirachiGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_22_1.4bpp.lz");
static const u8 sJirachiGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_22_2.4bpp.lz");
static const ax_sprite sJirachiSprites22[] = {
	{NULL, 32}, 
	{sJirachiGfx22, ARRAY_COUNT(sJirachiGfx22)}, 
	{NULL, 32}, 
	{sJirachiGfx22_1, ARRAY_COUNT(sJirachiGfx22_1)}, 
	{NULL, 32}, 
	{sJirachiGfx22_2, ARRAY_COUNT(sJirachiGfx22_2)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_23.4bpp.lz");
static const u8 sJirachiGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_23_1.4bpp.lz");
static const u8 sJirachiGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_23_2.4bpp.lz");
static const ax_sprite sJirachiSprites23[] = {
	{NULL, 32}, 
	{sJirachiGfx23, ARRAY_COUNT(sJirachiGfx23)}, 
	{NULL, 64}, 
	{sJirachiGfx23_1, ARRAY_COUNT(sJirachiGfx23_1)}, 
	{NULL, 32}, 
	{sJirachiGfx23_2, ARRAY_COUNT(sJirachiGfx23_2)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_24.4bpp.lz");
static const u8 sJirachiGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_24_1.4bpp.lz");
static const u8 sJirachiGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_24_2.4bpp.lz");
static const u8 sJirachiGfx24_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_24_3.4bpp.lz");
static const u8 sJirachiGfx24_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_24_4.4bpp.lz");
static const ax_sprite sJirachiSprites24[] = {
	{sJirachiGfx24, ARRAY_COUNT(sJirachiGfx24)}, 
	{NULL, 32}, 
	{sJirachiGfx24_1, ARRAY_COUNT(sJirachiGfx24_1)}, 
	{NULL, 32}, 
	{sJirachiGfx24_2, ARRAY_COUNT(sJirachiGfx24_2)}, 
	{NULL, 32}, 
	{sJirachiGfx24_3, ARRAY_COUNT(sJirachiGfx24_3)}, 
	{NULL, 32}, 
	{sJirachiGfx24_4, ARRAY_COUNT(sJirachiGfx24_4)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJirachiGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_25.4bpp.lz");
static const u8 sJirachiGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_25_1.4bpp.lz");
static const ax_sprite sJirachiSprites25[] = {
	{NULL, 32}, 
	{sJirachiGfx25, ARRAY_COUNT(sJirachiGfx25)}, 
	{NULL, 32}, 
	{sJirachiGfx25_1, ARRAY_COUNT(sJirachiGfx25_1)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_26.4bpp.lz");
static const u8 sJirachiGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_26_1.4bpp.lz");
static const u8 sJirachiGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_26_2.4bpp.lz");
static const ax_sprite sJirachiSprites26[] = {
	{NULL, 32}, 
	{sJirachiGfx26, ARRAY_COUNT(sJirachiGfx26)}, 
	{NULL, 32}, 
	{sJirachiGfx26_1, ARRAY_COUNT(sJirachiGfx26_1)}, 
	{NULL, 32}, 
	{sJirachiGfx26_2, ARRAY_COUNT(sJirachiGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJirachiGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_27.4bpp.lz");
static const u8 sJirachiGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_27_1.4bpp.lz");
static const u8 sJirachiGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_27_2.4bpp.lz");
static const ax_sprite sJirachiSprites27[] = {
	{NULL, 32}, 
	{sJirachiGfx27, ARRAY_COUNT(sJirachiGfx27)}, 
	{NULL, 32}, 
	{sJirachiGfx27_1, ARRAY_COUNT(sJirachiGfx27_1)}, 
	{NULL, 32}, 
	{sJirachiGfx27_2, ARRAY_COUNT(sJirachiGfx27_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJirachiGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_28.4bpp.lz");
static const u8 sJirachiGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_28_1.4bpp.lz");
static const u8 sJirachiGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_28_2.4bpp.lz");
static const u8 sJirachiGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_28_3.4bpp.lz");
static const ax_sprite sJirachiSprites28[] = {
	{NULL, 32}, 
	{sJirachiGfx28, ARRAY_COUNT(sJirachiGfx28)}, 
	{NULL, 32}, 
	{sJirachiGfx28_1, ARRAY_COUNT(sJirachiGfx28_1)}, 
	{NULL, 64}, 
	{sJirachiGfx28_2, ARRAY_COUNT(sJirachiGfx28_2)}, 
	{NULL, 32}, 
	{sJirachiGfx28_3, ARRAY_COUNT(sJirachiGfx28_3)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_29.4bpp.lz");
static const u8 sJirachiGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_29_1.4bpp.lz");
static const u8 sJirachiGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_29_2.4bpp.lz");
static const ax_sprite sJirachiSprites29[] = {
	{NULL, 32}, 
	{sJirachiGfx29, ARRAY_COUNT(sJirachiGfx29)}, 
	{NULL, 32}, 
	{sJirachiGfx29_1, ARRAY_COUNT(sJirachiGfx29_1)}, 
	{NULL, 32}, 
	{sJirachiGfx29_2, ARRAY_COUNT(sJirachiGfx29_2)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_30.4bpp.lz");
static const u8 sJirachiGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_30_1.4bpp.lz");
static const ax_sprite sJirachiSprites30[] = {
	{NULL, 32}, 
	{sJirachiGfx30, ARRAY_COUNT(sJirachiGfx30)}, 
	{NULL, 32}, 
	{sJirachiGfx30_1, ARRAY_COUNT(sJirachiGfx30_1)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_31.4bpp.lz");
static const u8 sJirachiGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_31_1.4bpp.lz");
static const u8 sJirachiGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_31_2.4bpp.lz");
static const ax_sprite sJirachiSprites31[] = {
	{NULL, 32}, 
	{sJirachiGfx31, ARRAY_COUNT(sJirachiGfx31)}, 
	{NULL, 32}, 
	{sJirachiGfx31_1, ARRAY_COUNT(sJirachiGfx31_1)}, 
	{NULL, 32}, 
	{sJirachiGfx31_2, ARRAY_COUNT(sJirachiGfx31_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJirachiGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_32.4bpp.lz");
static const u8 sJirachiGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_32_1.4bpp.lz");
static const u8 sJirachiGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_32_2.4bpp.lz");
static const ax_sprite sJirachiSprites32[] = {
	{NULL, 32}, 
	{sJirachiGfx32, ARRAY_COUNT(sJirachiGfx32)}, 
	{NULL, 32}, 
	{sJirachiGfx32_1, ARRAY_COUNT(sJirachiGfx32_1)}, 
	{NULL, 32}, 
	{sJirachiGfx32_2, ARRAY_COUNT(sJirachiGfx32_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sJirachiGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_33.4bpp.lz");
static const u8 sJirachiGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_33_1.4bpp.lz");
static const u8 sJirachiGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_33_2.4bpp.lz");
static const u8 sJirachiGfx33_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_33_3.4bpp.lz");
static const ax_sprite sJirachiSprites33[] = {
	{NULL, 32}, 
	{sJirachiGfx33, ARRAY_COUNT(sJirachiGfx33)}, 
	{NULL, 32}, 
	{sJirachiGfx33_1, ARRAY_COUNT(sJirachiGfx33_1)}, 
	{NULL, 64}, 
	{sJirachiGfx33_2, ARRAY_COUNT(sJirachiGfx33_2)}, 
	{NULL, 32}, 
	{sJirachiGfx33_3, ARRAY_COUNT(sJirachiGfx33_3)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_34.4bpp.lz");
static const u8 sJirachiGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_34_1.4bpp.lz");
static const u8 sJirachiGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_34_2.4bpp.lz");
static const u8 sJirachiGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_34_3.4bpp.lz");
static const ax_sprite sJirachiSprites34[] = {
	{NULL, 32}, 
	{sJirachiGfx34, ARRAY_COUNT(sJirachiGfx34)}, 
	{NULL, 32}, 
	{sJirachiGfx34_1, ARRAY_COUNT(sJirachiGfx34_1)}, 
	{NULL, 32}, 
	{sJirachiGfx34_2, ARRAY_COUNT(sJirachiGfx34_2)}, 
	{NULL, 64}, 
	{sJirachiGfx34_3, ARRAY_COUNT(sJirachiGfx34_3)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_35.4bpp.lz");
static const u8 sJirachiGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_35_1.4bpp.lz");
static const ax_sprite sJirachiSprites35[] = {
	{NULL, 32}, 
	{sJirachiGfx35, ARRAY_COUNT(sJirachiGfx35)}, 
	{NULL, 32}, 
	{sJirachiGfx35_1, ARRAY_COUNT(sJirachiGfx35_1)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_36.4bpp.lz");
static const ax_sprite sJirachiSprites36[] = {
	{sJirachiGfx36, ARRAY_COUNT(sJirachiGfx36)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_37.4bpp.lz");
static const ax_sprite sJirachiSprites37[] = {
	{sJirachiGfx37, ARRAY_COUNT(sJirachiGfx37)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_38.4bpp.lz");
static const ax_sprite sJirachiSprites38[] = {
	{sJirachiGfx38, ARRAY_COUNT(sJirachiGfx38)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_39.4bpp.lz");
static const ax_sprite sJirachiSprites39[] = {
	{sJirachiGfx39, ARRAY_COUNT(sJirachiGfx39)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_40.4bpp.lz");
static const ax_sprite sJirachiSprites40[] = {
	{sJirachiGfx40, ARRAY_COUNT(sJirachiGfx40)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_41.4bpp.lz");
static const ax_sprite sJirachiSprites41[] = {
	{sJirachiGfx41, ARRAY_COUNT(sJirachiGfx41)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_42.4bpp.lz");
static const ax_sprite sJirachiSprites42[] = {
	{sJirachiGfx42, ARRAY_COUNT(sJirachiGfx42)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_43.4bpp.lz");
static const u8 sJirachiGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_43_1.4bpp.lz");
static const ax_sprite sJirachiSprites43[] = {
	{sJirachiGfx43, ARRAY_COUNT(sJirachiGfx43)}, 
	{NULL, 32}, 
	{sJirachiGfx43_1, ARRAY_COUNT(sJirachiGfx43_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJirachiGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_44.4bpp.lz");
static const u8 sJirachiGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_44_1.4bpp.lz");
static const u8 sJirachiGfx44_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_44_2.4bpp.lz");
static const u8 sJirachiGfx44_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_44_3.4bpp.lz");
static const u8 sJirachiGfx44_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_44_4.4bpp.lz");
static const ax_sprite sJirachiSprites44[] = {
	{NULL, 320}, 
	{sJirachiGfx44, ARRAY_COUNT(sJirachiGfx44)}, 
	{NULL, 32}, 
	{sJirachiGfx44_1, ARRAY_COUNT(sJirachiGfx44_1)}, 
	{NULL, 64}, 
	{sJirachiGfx44_2, ARRAY_COUNT(sJirachiGfx44_2)}, 
	{NULL, 96}, 
	{sJirachiGfx44_3, ARRAY_COUNT(sJirachiGfx44_3)}, 
	{NULL, 64}, 
	{sJirachiGfx44_4, ARRAY_COUNT(sJirachiGfx44_4)}, 
	{NULL, 320}, 
	{NULL, 0}
};
static const u8 sJirachiGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_45.4bpp.lz");
static const u8 sJirachiGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_45_1.4bpp.lz");
static const u8 sJirachiGfx45_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_45_2.4bpp.lz");
static const u8 sJirachiGfx45_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_45_3.4bpp.lz");
static const u8 sJirachiGfx45_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_45_4.4bpp.lz");
static const u8 sJirachiGfx45_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_45_5.4bpp.lz");
static const u8 sJirachiGfx45_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_45_6.4bpp.lz");
static const u8 sJirachiGfx45_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_45_7.4bpp.lz");
static const ax_sprite sJirachiSprites45[] = {
	{NULL, 96}, 
	{sJirachiGfx45, ARRAY_COUNT(sJirachiGfx45)}, 
	{NULL, 96}, 
	{sJirachiGfx45_1, ARRAY_COUNT(sJirachiGfx45_1)}, 
	{NULL, 32}, 
	{sJirachiGfx45_2, ARRAY_COUNT(sJirachiGfx45_2)}, 
	{NULL, 32}, 
	{sJirachiGfx45_3, ARRAY_COUNT(sJirachiGfx45_3)}, 
	{NULL, 96}, 
	{sJirachiGfx45_4, ARRAY_COUNT(sJirachiGfx45_4)}, 
	{NULL, 96}, 
	{sJirachiGfx45_5, ARRAY_COUNT(sJirachiGfx45_5)}, 
	{NULL, 64}, 
	{sJirachiGfx45_6, ARRAY_COUNT(sJirachiGfx45_6)}, 
	{NULL, 160}, 
	{sJirachiGfx45_7, ARRAY_COUNT(sJirachiGfx45_7)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sJirachiGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_46.4bpp.lz");
static const u8 sJirachiGfx46_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_46_1.4bpp.lz");
static const ax_sprite sJirachiSprites46[] = {
	{NULL, 32}, 
	{sJirachiGfx46, ARRAY_COUNT(sJirachiGfx46)}, 
	{NULL, 32}, 
	{sJirachiGfx46_1, ARRAY_COUNT(sJirachiGfx46_1)}, 
	{NULL, 0}
};
static const u8 sJirachiGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_47.4bpp.lz");
static const u8 sJirachiGfx47_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_47_1.4bpp.lz");
static const ax_sprite sJirachiSprites47[] = {
	{sJirachiGfx47, ARRAY_COUNT(sJirachiGfx47)}, 
	{NULL, 32}, 
	{sJirachiGfx47_1, ARRAY_COUNT(sJirachiGfx47_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJirachiGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_48.4bpp.lz");
static const u8 sJirachiGfx48_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_48_1.4bpp.lz");
static const u8 sJirachiGfx48_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_48_2.4bpp.lz");
static const ax_sprite sJirachiSprites48[] = {
	{NULL, 64}, 
	{sJirachiGfx48, ARRAY_COUNT(sJirachiGfx48)}, 
	{NULL, 64}, 
	{sJirachiGfx48_1, ARRAY_COUNT(sJirachiGfx48_1)}, 
	{NULL, 32}, 
	{sJirachiGfx48_2, ARRAY_COUNT(sJirachiGfx48_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJirachiGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_49.4bpp.lz");
static const u8 sJirachiGfx49_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_49_1.4bpp.lz");
static const u8 sJirachiGfx49_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_49_2.4bpp.lz");
static const u8 sJirachiGfx49_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_49_3.4bpp.lz");
static const ax_sprite sJirachiSprites49[] = {
	{NULL, 32}, 
	{sJirachiGfx49, ARRAY_COUNT(sJirachiGfx49)}, 
	{NULL, 64}, 
	{sJirachiGfx49_1, ARRAY_COUNT(sJirachiGfx49_1)}, 
	{NULL, 32}, 
	{sJirachiGfx49_2, ARRAY_COUNT(sJirachiGfx49_2)}, 
	{NULL, 64}, 
	{sJirachiGfx49_3, ARRAY_COUNT(sJirachiGfx49_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJirachiGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_50.4bpp.lz");
static const u8 sJirachiGfx50_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_50_1.4bpp.lz");
static const u8 sJirachiGfx50_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_50_2.4bpp.lz");
static const ax_sprite sJirachiSprites50[] = {
	{NULL, 32}, 
	{sJirachiGfx50, ARRAY_COUNT(sJirachiGfx50)}, 
	{NULL, 32}, 
	{sJirachiGfx50_1, ARRAY_COUNT(sJirachiGfx50_1)}, 
	{NULL, 32}, 
	{sJirachiGfx50_2, ARRAY_COUNT(sJirachiGfx50_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJirachiGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_51.4bpp.lz");
static const u8 sJirachiGfx51_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jirachi/sprite_51_1.4bpp.lz");
static const ax_sprite sJirachiSprites51[] = {
	{sJirachiGfx51, ARRAY_COUNT(sJirachiGfx51)}, 
	{NULL, 32}, 
	{sJirachiGfx51_1, ARRAY_COUNT(sJirachiGfx51_1)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesJirachi[] = {
	sJirachiPose1,
	sJirachiPose2,
	sJirachiPose3,
	sJirachiPose4,
	sJirachiPose5,
	sJirachiPose6,
	sJirachiPose7,
	sJirachiPose8,
	sJirachiPose9,
	sJirachiPose10,
	sJirachiPose11,
	sJirachiPose12,
	sJirachiPose13,
	sJirachiPose14,
	sJirachiPose15,
	sJirachiPose16,
	sJirachiPose17,
	sJirachiPose18,
	sJirachiPose19,
	sJirachiPose20,
	sJirachiPose21,
	sJirachiPose22,
	sJirachiPose23,
	sJirachiPose24,
	sJirachiPose25,
	sJirachiPose1,
	sJirachiPose2,
	sJirachiPose3,
	sJirachiPose29,
	sJirachiPose30,
	sJirachiPose4,
	sJirachiPose5,
	sJirachiPose6,
	sJirachiPose34,
	sJirachiPose35,
	sJirachiPose7,
	sJirachiPose8,
	sJirachiPose9,
	sJirachiPose39,
	sJirachiPose40,
	sJirachiPose10,
	sJirachiPose11,
	sJirachiPose12,
	sJirachiPose44,
	sJirachiPose45,
	sJirachiPose13,
	sJirachiPose14,
	sJirachiPose15,
	sJirachiPose49,
	sJirachiPose50,
	sJirachiPose16,
	sJirachiPose17,
	sJirachiPose18,
	sJirachiPose54,
	sJirachiPose55,
	sJirachiPose19,
	sJirachiPose20,
	sJirachiPose21,
	sJirachiPose59,
	sJirachiPose60,
	sJirachiPose22,
	sJirachiPose23,
	sJirachiPose24,
	sJirachiPose64,
	sJirachiPose25,
	sJirachiPose1,
	sJirachiPose2,
	sJirachiPose3,
	sJirachiPose29,
	sJirachiPose30,
	sJirachiPose4,
	sJirachiPose5,
	sJirachiPose6,
	sJirachiPose34,
	sJirachiPose35,
	sJirachiPose7,
	sJirachiPose8,
	sJirachiPose9,
	sJirachiPose39,
	sJirachiPose40,
	sJirachiPose10,
	sJirachiPose11,
	sJirachiPose12,
	sJirachiPose44,
	sJirachiPose45,
	sJirachiPose13,
	sJirachiPose14,
	sJirachiPose15,
	sJirachiPose49,
	sJirachiPose50,
	sJirachiPose16,
	sJirachiPose17,
	sJirachiPose18,
	sJirachiPose54,
	sJirachiPose55,
	sJirachiPose19,
	sJirachiPose20,
	sJirachiPose21,
	sJirachiPose59,
	sJirachiPose60,
	sJirachiPose22,
	sJirachiPose23,
	sJirachiPose24,
	sJirachiPose64,
	sJirachiPose25,
	sJirachiPose106,
	sJirachiPose30,
	sJirachiPose108,
	sJirachiPose35,
	sJirachiPose110,
	sJirachiPose40,
	sJirachiPose112,
	sJirachiPose45,
	sJirachiPose114,
	sJirachiPose50,
	sJirachiPose116,
	sJirachiPose55,
	sJirachiPose118,
	sJirachiPose60,
	sJirachiPose120,
	sJirachiPose25,
	sJirachiPose122,
	sJirachiPose30,
	sJirachiPose124,
	sJirachiPose35,
	sJirachiPose126,
	sJirachiPose40,
	sJirachiPose128,
	sJirachiPose45,
	sJirachiPose130,
	sJirachiPose50,
	sJirachiPose132,
	sJirachiPose55,
	sJirachiPose134,
	sJirachiPose60,
	sJirachiPose136,
	sJirachiPose137,
	sJirachiPose138,
	sJirachiPose139,
	sJirachiPose140,
	sJirachiPose141,
	sJirachiPose142,
	sJirachiPose143,
	sJirachiPose144,
	sJirachiPose145,
	sJirachiPose146,
	sJirachiPose25,
	sJirachiPose60,
	sJirachiPose55,
	sJirachiPose50,
	sJirachiPose45,
	sJirachiPose40,
	sJirachiPose35,
	sJirachiPose30,
	sJirachiPose106,
	sJirachiPose120,
	sJirachiPose157,
	sJirachiPose158,
	sJirachiPose114,
	sJirachiPose160,
	sJirachiPose161,
	sJirachiPose108,
	sJirachiPose106,
	sJirachiPose164,
	sJirachiPose161,
	sJirachiPose160,
	sJirachiPose114,
	sJirachiPose158,
	sJirachiPose157,
	sJirachiPose170,
	sJirachiPose25,
	sJirachiPose106,
	sJirachiPose173,
	sJirachiPose30,
	sJirachiPose108,
	sJirachiPose34,
	sJirachiPose35,
	sJirachiPose110,
	sJirachiPose179,
	sJirachiPose40,
	sJirachiPose112,
	sJirachiPose182,
	sJirachiPose45,
	sJirachiPose114,
	sJirachiPose49,
	sJirachiPose50,
	sJirachiPose116,
	sJirachiPose188,
	sJirachiPose55,
	sJirachiPose118,
	sJirachiPose191,
	sJirachiPose60,
	sJirachiPose120,
	sJirachiPose64,
	sJirachiPose122,
	sJirachiPose136,
	sJirachiPose134,
	sJirachiPose132,
	sJirachiPose130,
	sJirachiPose128,
	sJirachiPose126,
	sJirachiPose124,
	sJirachiPose25,
	sJirachiPose60,
	sJirachiPose55,
	sJirachiPose50,
	sJirachiPose45,
	sJirachiPose40,
	sJirachiPose35,
	sJirachiPose30,
	sJirachiPose211,
	sJirachiPose212,
	sJirachiPose213,
	sJirachiPose214,
	sJirachiPose215,
	sJirachiPose216,
	sJirachiPose217,
	sJirachiPose218,
	sJirachiPose25,
	sJirachiPose220,
	sJirachiPose106,
	sJirachiPose211,
	sJirachiPose212,
	sJirachiPose213,
	sJirachiPose214,
	sJirachiPose215,
	sJirachiPose216,
	sJirachiPose217,
	sJirachiPose218,
	sJirachiPose25,
	sJirachiPose220,
	sJirachiPose106,
	sJirachiPose211,
};

static const struct PositionSets sAxPositionsJirachi[] = {
	[0] = { .set = { {-1, -6}, {-6, -5}, {5, -5}, {0, -7} } },
	[1] = { .set = { {-1, -6}, {-6, -5}, {5, -5}, {0, -7} } },
	[2] = { .set = { {-1, -6}, {-6, -5}, {5, -5}, {0, -7} } },
	[3] = { .set = { {3, -8}, {3, -7}, {-4, -5}, {2, -9} } },
	[4] = { .set = { {3, -8}, {3, -7}, {-4, -5}, {2, -9} } },
	[5] = { .set = { {3, -8}, {3, -7}, {-4, -5}, {2, -9} } },
	[6] = { .set = { {7, -10}, {0, -7}, {-2, -5}, {2, -9} } },
	[7] = { .set = { {7, -10}, {-2, -7}, {-2, -5}, {2, -9} } },
	[8] = { .set = { {7, -10}, {-2, -7}, {-2, -5}, {2, -9} } },
	[9] = { .set = { {3, -13}, {-3, -8}, {2, -6}, {1, -10} } },
	[10] = { .set = { {2, -13}, {-2, -8}, {2, -6}, {1, -10} } },
	[11] = { .set = { {2, -13}, {-3, -8}, {2, -6}, {1, -10} } },
	[12] = { .set = { {0, -14}, {4, -7}, {-4, -7}, {0, -9} } },
	[13] = { .set = { {0, -14}, {4, -7}, {-5, -7}, {0, -9} } },
	[14] = { .set = { {0, -14}, {3, -7}, {-4, -7}, {0, -9} } },
	[15] = { .set = { {-4, -13}, {2, -8}, {-3, -6}, {-2, -10} } },
	[16] = { .set = { {-3, -13}, {1, -8}, {-3, -6}, {-2, -10} } },
	[17] = { .set = { {-3, -13}, {2, -8}, {-3, -6}, {-2, -10} } },
	[18] = { .set = { {-8, -10}, {-1, -7}, {1, -5}, {-3, -9} } },
	[19] = { .set = { {-8, -10}, {1, -7}, {1, -5}, {-3, -9} } },
	[20] = { .set = { {-8, -10}, {1, -7}, {1, -5}, {-3, -9} } },
	[21] = { .set = { {-4, -8}, {-4, -7}, {3, -5}, {-3, -9} } },
	[22] = { .set = { {-4, -8}, {-4, -7}, {3, -5}, {-3, -9} } },
	[23] = { .set = { {-4, -8}, {-4, -7}, {3, -5}, {-3, -9} } },
	[24] = { .set = { {-1, -9}, {-5, -6}, {4, -6}, {0, -10} } },
	[25] = { .set = { {-1, -6}, {-6, -5}, {5, -5}, {0, -7} } },
	[26] = { .set = { {-1, -6}, {-6, -5}, {5, -5}, {0, -7} } },
	[27] = { .set = { {-1, -6}, {-6, -5}, {5, -5}, {0, -7} } },
	[28] = { .set = { {-1, -7}, {-6, -7}, {5, -7}, {0, -10} } },
	[29] = { .set = { {2, -9}, {5, -7}, {-3, -6}, {1, -10} } },
	[30] = { .set = { {3, -8}, {3, -7}, {-4, -5}, {2, -9} } },
	[31] = { .set = { {3, -8}, {3, -7}, {-4, -5}, {2, -9} } },
	[32] = { .set = { {3, -8}, {3, -7}, {-4, -5}, {2, -9} } },
	[33] = { .set = { {2, -8}, {4, -7}, {-5, -7}, {-1, -11} } },
	[34] = { .set = { {4, -11}, {0, -7}, {-1, -4}, {0, -10} } },
	[35] = { .set = { {7, -10}, {0, -7}, {-2, -5}, {2, -9} } },
	[36] = { .set = { {7, -10}, {-2, -7}, {-2, -5}, {2, -9} } },
	[37] = { .set = { {7, -10}, {-2, -7}, {-2, -5}, {2, -9} } },
	[38] = { .set = { {4, -7}, {-1, -8}, {-4, -6}, {1, -10} } },
	[39] = { .set = { {1, -13}, {-2, -8}, {3, -6}, {-1, -10} } },
	[40] = { .set = { {3, -13}, {-3, -8}, {2, -6}, {1, -10} } },
	[41] = { .set = { {2, -13}, {-2, -8}, {2, -6}, {1, -10} } },
	[42] = { .set = { {2, -13}, {-3, -8}, {2, -6}, {1, -10} } },
	[43] = { .set = { {3, -12}, {-3, -9}, {2, -5}, {0, -9} } },
	[44] = { .set = { {0, -16}, {3, -7}, {-3, -7}, {0, -10} } },
	[45] = { .set = { {0, -14}, {4, -7}, {-4, -7}, {0, -9} } },
	[46] = { .set = { {0, -14}, {4, -7}, {-5, -7}, {0, -9} } },
	[47] = { .set = { {0, -14}, {3, -7}, {-4, -7}, {0, -9} } },
	[48] = { .set = { {0, -15}, {4, -6}, {-5, -6}, {0, -9} } },
	[49] = { .set = { {-2, -13}, {1, -8}, {-4, -6}, {0, -10} } },
	[50] = { .set = { {-4, -13}, {2, -8}, {-3, -6}, {-2, -10} } },
	[51] = { .set = { {-3, -13}, {1, -8}, {-3, -6}, {-2, -10} } },
	[52] = { .set = { {-3, -13}, {2, -8}, {-3, -6}, {-2, -10} } },
	[53] = { .set = { {-4, -12}, {2, -9}, {-3, -5}, {-1, -9} } },
	[54] = { .set = { {-5, -11}, {-1, -7}, {0, -4}, {-1, -10} } },
	[55] = { .set = { {-8, -10}, {-1, -7}, {1, -5}, {-3, -9} } },
	[56] = { .set = { {-8, -10}, {1, -7}, {1, -5}, {-3, -9} } },
	[57] = { .set = { {-8, -10}, {1, -7}, {1, -5}, {-3, -9} } },
	[58] = { .set = { {-5, -7}, {0, -8}, {3, -6}, {-2, -10} } },
	[59] = { .set = { {-3, -9}, {-6, -7}, {2, -6}, {-2, -10} } },
	[60] = { .set = { {-4, -8}, {-4, -7}, {3, -5}, {-3, -9} } },
	[61] = { .set = { {-4, -8}, {-4, -7}, {3, -5}, {-3, -9} } },
	[62] = { .set = { {-4, -8}, {-4, -7}, {3, -5}, {-3, -9} } },
	[63] = { .set = { {-3, -8}, {-5, -7}, {4, -7}, {0, -11} } },
	[64] = { .set = { {-1, -9}, {-5, -6}, {4, -6}, {0, -10} } },
	[65] = { .set = { {-1, -6}, {-6, -5}, {5, -5}, {0, -7} } },
	[66] = { .set = { {-1, -6}, {-6, -5}, {5, -5}, {0, -7} } },
	[67] = { .set = { {-1, -6}, {-6, -5}, {5, -5}, {0, -7} } },
	[68] = { .set = { {-1, -7}, {-6, -7}, {5, -7}, {0, -10} } },
	[69] = { .set = { {2, -9}, {5, -7}, {-3, -6}, {1, -10} } },
	[70] = { .set = { {3, -8}, {3, -7}, {-4, -5}, {2, -9} } },
	[71] = { .set = { {3, -8}, {3, -7}, {-4, -5}, {2, -9} } },
	[72] = { .set = { {3, -8}, {3, -7}, {-4, -5}, {2, -9} } },
	[73] = { .set = { {2, -8}, {4, -7}, {-5, -7}, {-1, -11} } },
	[74] = { .set = { {4, -11}, {0, -7}, {-1, -4}, {0, -10} } },
	[75] = { .set = { {7, -10}, {0, -7}, {-2, -5}, {2, -9} } },
	[76] = { .set = { {7, -10}, {-2, -7}, {-2, -5}, {2, -9} } },
	[77] = { .set = { {7, -10}, {-2, -7}, {-2, -5}, {2, -9} } },
	[78] = { .set = { {4, -7}, {-1, -8}, {-4, -6}, {1, -10} } },
	[79] = { .set = { {1, -13}, {-2, -8}, {3, -6}, {-1, -10} } },
	[80] = { .set = { {3, -13}, {-3, -8}, {2, -6}, {1, -10} } },
	[81] = { .set = { {2, -13}, {-2, -8}, {2, -6}, {1, -10} } },
	[82] = { .set = { {2, -13}, {-3, -8}, {2, -6}, {1, -10} } },
	[83] = { .set = { {3, -12}, {-3, -9}, {2, -5}, {0, -9} } },
	[84] = { .set = { {0, -16}, {3, -7}, {-3, -7}, {0, -10} } },
	[85] = { .set = { {0, -14}, {4, -7}, {-4, -7}, {0, -9} } },
	[86] = { .set = { {0, -14}, {4, -7}, {-5, -7}, {0, -9} } },
	[87] = { .set = { {0, -14}, {3, -7}, {-4, -7}, {0, -9} } },
	[88] = { .set = { {0, -15}, {4, -6}, {-5, -6}, {0, -9} } },
	[89] = { .set = { {-2, -13}, {1, -8}, {-4, -6}, {0, -10} } },
	[90] = { .set = { {-4, -13}, {2, -8}, {-3, -6}, {-2, -10} } },
	[91] = { .set = { {-3, -13}, {1, -8}, {-3, -6}, {-2, -10} } },
	[92] = { .set = { {-3, -13}, {2, -8}, {-3, -6}, {-2, -10} } },
	[93] = { .set = { {-4, -12}, {2, -9}, {-3, -5}, {-1, -9} } },
	[94] = { .set = { {-5, -11}, {-1, -7}, {0, -4}, {-1, -10} } },
	[95] = { .set = { {-8, -10}, {-1, -7}, {1, -5}, {-3, -9} } },
	[96] = { .set = { {-8, -10}, {1, -7}, {1, -5}, {-3, -9} } },
	[97] = { .set = { {-8, -10}, {1, -7}, {1, -5}, {-3, -9} } },
	[98] = { .set = { {-5, -7}, {0, -8}, {3, -6}, {-2, -10} } },
	[99] = { .set = { {-3, -9}, {-6, -7}, {2, -6}, {-2, -10} } },
	[100] = { .set = { {-4, -8}, {-4, -7}, {3, -5}, {-3, -9} } },
	[101] = { .set = { {-4, -8}, {-4, -7}, {3, -5}, {-3, -9} } },
	[102] = { .set = { {-4, -8}, {-4, -7}, {3, -5}, {-3, -9} } },
	[103] = { .set = { {-3, -8}, {-5, -7}, {4, -7}, {0, -11} } },
	[104] = { .set = { {-1, -9}, {-5, -6}, {4, -6}, {0, -10} } },
	[105] = { .set = { {-1, -11}, {-6, -10}, {5, -10}, {0, -10} } },
	[106] = { .set = { {2, -9}, {5, -7}, {-3, -6}, {1, -10} } },
	[107] = { .set = { {3, -11}, {5, -9}, {-4, -8}, {1, -10} } },
	[108] = { .set = { {4, -11}, {0, -7}, {-1, -4}, {0, -10} } },
	[109] = { .set = { {5, -13}, {1, -10}, {-2, -8}, {0, -10} } },
	[110] = { .set = { {1, -13}, {-2, -8}, {3, -6}, {-1, -10} } },
	[111] = { .set = { {1, -15}, {-3, -10}, {5, -8}, {0, -10} } },
	[112] = { .set = { {0, -16}, {3, -7}, {-3, -7}, {0, -10} } },
	[113] = { .set = { {0, -16}, {5, -11}, {-6, -11}, {0, -11} } },
	[114] = { .set = { {-2, -13}, {1, -8}, {-4, -6}, {0, -10} } },
	[115] = { .set = { {-2, -15}, {2, -10}, {-6, -8}, {-1, -10} } },
	[116] = { .set = { {-5, -11}, {-1, -7}, {0, -4}, {-1, -10} } },
	[117] = { .set = { {-6, -13}, {-2, -10}, {1, -8}, {-1, -10} } },
	[118] = { .set = { {-3, -9}, {-6, -7}, {2, -6}, {-2, -10} } },
	[119] = { .set = { {-4, -11}, {-6, -9}, {3, -8}, {-2, -10} } },
	[120] = { .set = { {-1, -9}, {-5, -6}, {4, -6}, {0, -10} } },
	[121] = { .set = { {-1, -8}, {-2, -6}, {1, -6}, {0, -11} } },
	[122] = { .set = { {2, -9}, {5, -7}, {-3, -6}, {1, -10} } },
	[123] = { .set = { {2, -8}, {4, -6}, {0, -6}, {1, -10} } },
	[124] = { .set = { {4, -11}, {0, -7}, {-1, -4}, {0, -10} } },
	[125] = { .set = { {4, -10}, {2, -9}, {2, -7}, {0, -10} } },
	[126] = { .set = { {1, -13}, {-2, -8}, {3, -6}, {-1, -10} } },
	[127] = { .set = { {1, -13}, {-1, -10}, {2, -8}, {0, -10} } },
	[128] = { .set = { {0, -16}, {3, -7}, {-3, -7}, {0, -10} } },
	[129] = { .set = { {0, -16}, {3, -9}, {-4, -9}, {0, -10} } },
	[130] = { .set = { {-2, -13}, {1, -8}, {-4, -6}, {0, -10} } },
	[131] = { .set = { {-2, -13}, {0, -10}, {-3, -8}, {-1, -10} } },
	[132] = { .set = { {-5, -11}, {-1, -7}, {0, -4}, {-1, -10} } },
	[133] = { .set = { {-5, -10}, {-3, -9}, {-3, -7}, {-1, -10} } },
	[134] = { .set = { {-3, -9}, {-6, -7}, {2, -6}, {-2, -10} } },
	[135] = { .set = { {-3, -8}, {-5, -6}, {-1, -6}, {-2, -10} } },
	[136] = { .set = { {-1, -11}, {-4, -8}, {1, -6}, {-1, -9} } },
	[137] = { .set = { {-1, -10}, {-4, -8}, {1, -6}, {-1, -8} } },
	[138] = { .set = { {0, -10}, {-5, -9}, {4, -9}, {-1, -9} } },
	[139] = { .set = { {0, -10}, {3, -9}, {-5, -8}, {-1, -9} } },
	[140] = { .set = { {2, -10}, {-2, -9}, {-4, -7}, {-2, -11} } },
	[141] = { .set = { {0, -14}, {-5, -10}, {3, -7}, {-2, -9} } },
	[142] = { .set = { {0, -14}, {5, -9}, {-6, -9}, {0, -10} } },
	[143] = { .set = { {-1, -14}, {4, -10}, {-4, -7}, {1, -9} } },
	[144] = { .set = { {-3, -10}, {1, -9}, {3, -7}, {1, -11} } },
	[145] = { .set = { {-1, -10}, {-4, -9}, {4, -8}, {0, -9} } },
	[146] = { .set = { {-1, -9}, {-5, -6}, {4, -6}, {0, -10} } },
	[147] = { .set = { {-3, -9}, {-6, -7}, {2, -6}, {-2, -10} } },
	[148] = { .set = { {-5, -11}, {-1, -7}, {0, -4}, {-1, -10} } },
	[149] = { .set = { {-2, -13}, {1, -8}, {-4, -6}, {0, -10} } },
	[150] = { .set = { {0, -16}, {3, -7}, {-3, -7}, {0, -10} } },
	[151] = { .set = { {1, -13}, {-2, -8}, {3, -6}, {-1, -10} } },
	[152] = { .set = { {4, -11}, {0, -7}, {-1, -4}, {0, -10} } },
	[153] = { .set = { {2, -9}, {5, -7}, {-3, -6}, {1, -10} } },
	[154] = { .set = { {-1, -11}, {-6, -10}, {5, -10}, {0, -10} } },
	[155] = { .set = { {-4, -11}, {-6, -9}, {3, -8}, {-2, -10} } },
	[156] = { .set = { {-5, -13}, {-1, -10}, {2, -8}, {0, -10} } },
	[157] = { .set = { {-1, -15}, {3, -10}, {-5, -8}, {0, -10} } },
	[158] = { .set = { {0, -16}, {5, -11}, {-6, -11}, {0, -11} } },
	[159] = { .set = { {0, -15}, {-4, -10}, {4, -8}, {-1, -10} } },
	[160] = { .set = { {4, -13}, {0, -10}, {-3, -8}, {-1, -10} } },
	[161] = { .set = { {3, -11}, {5, -9}, {-4, -8}, {1, -10} } },
	[162] = { .set = { {-1, -11}, {-6, -10}, {5, -10}, {0, -10} } },
	[163] = { .set = { {2, -11}, {4, -9}, {-5, -8}, {0, -10} } },
	[164] = { .set = { {4, -13}, {0, -10}, {-3, -8}, {-1, -10} } },
	[165] = { .set = { {0, -15}, {-4, -10}, {4, -8}, {-1, -10} } },
	[166] = { .set = { {0, -16}, {5, -11}, {-6, -11}, {0, -11} } },
	[167] = { .set = { {-1, -15}, {3, -10}, {-5, -8}, {0, -10} } },
	[168] = { .set = { {-5, -13}, {-1, -10}, {2, -8}, {0, -10} } },
	[169] = { .set = { {-3, -11}, {-5, -9}, {4, -8}, {-1, -10} } },
	[170] = { .set = { {-1, -9}, {-5, -6}, {4, -6}, {0, -10} } },
	[171] = { .set = { {-1, -11}, {-6, -10}, {5, -10}, {0, -10} } },
	[172] = { .set = { {-1, -8}, {-6, -8}, {5, -8}, {0, -11} } },
	[173] = { .set = { {2, -9}, {5, -7}, {-3, -6}, {1, -10} } },
	[174] = { .set = { {3, -11}, {5, -9}, {-4, -8}, {1, -10} } },
	[175] = { .set = { {2, -8}, {4, -7}, {-5, -7}, {-1, -11} } },
	[176] = { .set = { {4, -11}, {0, -7}, {-1, -4}, {0, -10} } },
	[177] = { .set = { {5, -13}, {1, -10}, {-2, -8}, {0, -10} } },
	[178] = { .set = { {3, -7}, {-2, -8}, {-5, -6}, {0, -10} } },
	[179] = { .set = { {1, -13}, {-2, -8}, {3, -6}, {-1, -10} } },
	[180] = { .set = { {1, -15}, {-3, -10}, {5, -8}, {0, -10} } },
	[181] = { .set = { {2, -12}, {-4, -9}, {1, -5}, {-1, -9} } },
	[182] = { .set = { {0, -16}, {3, -7}, {-3, -7}, {0, -10} } },
	[183] = { .set = { {0, -16}, {5, -11}, {-6, -11}, {0, -11} } },
	[184] = { .set = { {0, -15}, {4, -6}, {-5, -6}, {0, -9} } },
	[185] = { .set = { {-2, -13}, {1, -8}, {-4, -6}, {0, -10} } },
	[186] = { .set = { {-2, -15}, {2, -10}, {-6, -8}, {-1, -10} } },
	[187] = { .set = { {-3, -12}, {3, -9}, {-2, -5}, {0, -9} } },
	[188] = { .set = { {-5, -11}, {-1, -7}, {0, -4}, {-1, -10} } },
	[189] = { .set = { {-6, -13}, {-2, -10}, {1, -8}, {-1, -10} } },
	[190] = { .set = { {-4, -7}, {1, -8}, {4, -6}, {-1, -10} } },
	[191] = { .set = { {-3, -9}, {-6, -7}, {2, -6}, {-2, -10} } },
	[192] = { .set = { {-4, -11}, {-6, -9}, {3, -8}, {-2, -10} } },
	[193] = { .set = { {-3, -8}, {-5, -7}, {4, -7}, {0, -11} } },
	[194] = { .set = { {-1, -8}, {-2, -6}, {1, -6}, {0, -11} } },
	[195] = { .set = { {-3, -8}, {-5, -6}, {-1, -6}, {-2, -10} } },
	[196] = { .set = { {-5, -10}, {-3, -9}, {-3, -7}, {-1, -10} } },
	[197] = { .set = { {-2, -13}, {0, -10}, {-3, -8}, {-1, -10} } },
	[198] = { .set = { {0, -16}, {3, -9}, {-4, -9}, {0, -10} } },
	[199] = { .set = { {1, -13}, {-1, -10}, {2, -8}, {0, -10} } },
	[200] = { .set = { {4, -10}, {2, -9}, {2, -7}, {0, -10} } },
	[201] = { .set = { {2, -8}, {4, -6}, {0, -6}, {1, -10} } },
	[202] = { .set = { {-1, -9}, {-5, -6}, {4, -6}, {0, -10} } },
	[203] = { .set = { {-3, -9}, {-6, -7}, {2, -6}, {-2, -10} } },
	[204] = { .set = { {-5, -11}, {-1, -7}, {0, -4}, {-1, -10} } },
	[205] = { .set = { {-2, -13}, {1, -8}, {-4, -6}, {0, -10} } },
	[206] = { .set = { {0, -16}, {3, -7}, {-3, -7}, {0, -10} } },
	[207] = { .set = { {1, -13}, {-2, -8}, {3, -6}, {-1, -10} } },
	[208] = { .set = { {4, -11}, {0, -7}, {-1, -4}, {0, -10} } },
	[209] = { .set = { {2, -9}, {5, -7}, {-3, -6}, {1, -10} } },
	[210] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[211] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[212] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[213] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[214] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[215] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[216] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[217] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[218] = { .set = { {-1, -9}, {-5, -6}, {4, -6}, {0, -10} } },
	[219] = { .set = { {-1, -10}, {-2, -8}, {1, -8}, {0, -13} } },
	[220] = { .set = { {-1, -11}, {-6, -10}, {5, -10}, {0, -10} } },
	[221] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[222] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[223] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[224] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[225] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[226] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[227] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[228] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
	[229] = { .set = { {-1, -9}, {-5, -6}, {4, -6}, {0, -10} } },
	[230] = { .set = { {-1, -10}, {-2, -8}, {1, -8}, {0, -13} } },
	[231] = { .set = { {-1, -11}, {-6, -10}, {5, -10}, {0, -10} } },
	[232] = { .set = { {0, 0}, {0, 0}, {0, 0}, {0, 0} } },
};

static const ax_anim *const sJirachiAnimTable1[] = {
	AX_ANIM_PTR(sJirachiAnims_1_1),
	AX_ANIM_PTR(sJirachiAnims_1_2),
	AX_ANIM_PTR(sJirachiAnims_1_3),
	AX_ANIM_PTR(sJirachiAnims_1_4),
	AX_ANIM_PTR(sJirachiAnims_1_5),
	AX_ANIM_PTR(sJirachiAnims_1_6),
	AX_ANIM_PTR(sJirachiAnims_1_7),
	AX_ANIM_PTR(sJirachiAnims_1_8),
};

static const ax_anim *const sJirachiAnimTable2[] = {
	AX_ANIM_PTR(sJirachiAnims_2_1),
	AX_ANIM_PTR(sJirachiAnims_2_2),
	AX_ANIM_PTR(sJirachiAnims_2_3),
	AX_ANIM_PTR(sJirachiAnims_2_4),
	AX_ANIM_PTR(sJirachiAnims_2_5),
	AX_ANIM_PTR(sJirachiAnims_2_6),
	AX_ANIM_PTR(sJirachiAnims_2_7),
	AX_ANIM_PTR(sJirachiAnims_2_8),
};

static const ax_anim *const sJirachiAnimTable3[] = {
	AX_ANIM_PTR(sJirachiAnims_3_1),
	AX_ANIM_PTR(sJirachiAnims_3_2),
	AX_ANIM_PTR(sJirachiAnims_3_3),
	AX_ANIM_PTR(sJirachiAnims_3_4),
	AX_ANIM_PTR(sJirachiAnims_3_5),
	AX_ANIM_PTR(sJirachiAnims_3_6),
	AX_ANIM_PTR(sJirachiAnims_3_7),
	AX_ANIM_PTR(sJirachiAnims_3_8),
};

static const ax_anim *const sJirachiAnimTable4[] = {
	AX_ANIM_PTR(sJirachiAnims_4_1),
	AX_ANIM_PTR(sJirachiAnims_4_2),
	AX_ANIM_PTR(sJirachiAnims_4_3),
	AX_ANIM_PTR(sJirachiAnims_4_4),
	AX_ANIM_PTR(sJirachiAnims_4_5),
	AX_ANIM_PTR(sJirachiAnims_4_6),
	AX_ANIM_PTR(sJirachiAnims_4_7),
	AX_ANIM_PTR(sJirachiAnims_4_8),
};

static const ax_anim *const sJirachiAnimTable5[] = {
	AX_ANIM_PTR(sJirachiAnims_5_1),
	AX_ANIM_PTR(sJirachiAnims_5_2),
	AX_ANIM_PTR(sJirachiAnims_5_3),
	AX_ANIM_PTR(sJirachiAnims_5_4),
	AX_ANIM_PTR(sJirachiAnims_5_5),
	AX_ANIM_PTR(sJirachiAnims_5_6),
	AX_ANIM_PTR(sJirachiAnims_5_7),
	AX_ANIM_PTR(sJirachiAnims_5_8),
};

static const ax_anim *const sJirachiAnimTable6[] = {
	AX_ANIM_PTR(sJirachiAnims_6_1),
	AX_ANIM_PTR(sJirachiAnims_6_1),
	AX_ANIM_PTR(sJirachiAnims_6_1),
	AX_ANIM_PTR(sJirachiAnims_6_1),
	AX_ANIM_PTR(sJirachiAnims_6_1),
	AX_ANIM_PTR(sJirachiAnims_6_1),
	AX_ANIM_PTR(sJirachiAnims_6_1),
	AX_ANIM_PTR(sJirachiAnims_6_1),
};

static const ax_anim *const sJirachiAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00466),
	AX_ANIM_PTR(gAxSharedAnim_00479),
	AX_ANIM_PTR(gAxSharedAnim_00487),
	AX_ANIM_PTR(gAxSharedAnim_00496),
	AX_ANIM_PTR(gAxSharedAnim_00508),
	AX_ANIM_PTR(gAxSharedAnim_00517),
	AX_ANIM_PTR(gAxSharedAnim_00523),
	AX_ANIM_PTR(gAxSharedAnim_00529),
};

static const ax_anim *const sJirachiAnimTable8[] = {
	AX_ANIM_PTR(gAxSharedAnim_00094),
	AX_ANIM_PTR(gAxSharedAnim_00101),
	AX_ANIM_PTR(gAxSharedAnim_00100),
	AX_ANIM_PTR(gAxSharedAnim_00099),
	AX_ANIM_PTR(gAxSharedAnim_00098),
	AX_ANIM_PTR(gAxSharedAnim_00097),
	AX_ANIM_PTR(gAxSharedAnim_00096),
	AX_ANIM_PTR(gAxSharedAnim_00095),
};

static const ax_anim *const sJirachiAnimTable9[] = {
	AX_ANIM_PTR(sJirachiAnims_9_1),
	AX_ANIM_PTR(sJirachiAnims_9_2),
	AX_ANIM_PTR(sJirachiAnims_9_3),
	AX_ANIM_PTR(sJirachiAnims_9_4),
	AX_ANIM_PTR(sJirachiAnims_9_5),
	AX_ANIM_PTR(sJirachiAnims_9_6),
	AX_ANIM_PTR(sJirachiAnims_9_7),
	AX_ANIM_PTR(sJirachiAnims_9_8),
};

static const ax_anim *const sJirachiAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00705),
	AX_ANIM_PTR(gAxSharedAnim_00714),
	AX_ANIM_PTR(gAxSharedAnim_00725),
	AX_ANIM_PTR(gAxSharedAnim_00737),
	AX_ANIM_PTR(gAxSharedAnim_00750),
	AX_ANIM_PTR(gAxSharedAnim_00760),
	AX_ANIM_PTR(gAxSharedAnim_00772),
	AX_ANIM_PTR(gAxSharedAnim_00781),
};

static const ax_anim *const sJirachiAnimTable11[] = {
	AX_ANIM_PTR(sJirachiAnims_11_1),
	AX_ANIM_PTR(sJirachiAnims_11_2),
	AX_ANIM_PTR(sJirachiAnims_11_3),
	AX_ANIM_PTR(sJirachiAnims_11_4),
	AX_ANIM_PTR(sJirachiAnims_11_5),
	AX_ANIM_PTR(sJirachiAnims_11_6),
	AX_ANIM_PTR(sJirachiAnims_11_7),
	AX_ANIM_PTR(sJirachiAnims_11_8),
};

static const ax_anim *const sJirachiAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01147),
	AX_ANIM_PTR(gAxSharedAnim_01230),
	AX_ANIM_PTR(gAxSharedAnim_01208),
	AX_ANIM_PTR(gAxSharedAnim_01194),
	AX_ANIM_PTR(gAxSharedAnim_01193),
	AX_ANIM_PTR(gAxSharedAnim_01181),
	AX_ANIM_PTR(gAxSharedAnim_01161),
	AX_ANIM_PTR(gAxSharedAnim_01148),
};

static const ax_anim *const sJirachiAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01242),
	AX_ANIM_PTR(gAxSharedAnim_01323),
	AX_ANIM_PTR(gAxSharedAnim_01314),
	AX_ANIM_PTR(gAxSharedAnim_01301),
	AX_ANIM_PTR(gAxSharedAnim_01286),
	AX_ANIM_PTR(gAxSharedAnim_01278),
	AX_ANIM_PTR(gAxSharedAnim_01267),
	AX_ANIM_PTR(gAxSharedAnim_01253),
};

static const ax_anim *const sJirachiAnimTable14[] = {
	AX_ANIM_PTR(sJirachiAnims_14_1),
	AX_ANIM_PTR(sJirachiAnims_14_1),
	AX_ANIM_PTR(sJirachiAnims_14_1),
	AX_ANIM_PTR(sJirachiAnims_14_1),
	AX_ANIM_PTR(sJirachiAnims_14_1),
	AX_ANIM_PTR(sJirachiAnims_14_1),
	AX_ANIM_PTR(sJirachiAnims_14_1),
	AX_ANIM_PTR(sJirachiAnims_14_1),
};

static const ax_anim *const sJirachiAnimTable15[] = {
	AX_ANIM_PTR(sJirachiAnims_15_1),
	AX_ANIM_PTR(sJirachiAnims_15_1),
	AX_ANIM_PTR(sJirachiAnims_15_1),
	AX_ANIM_PTR(sJirachiAnims_15_1),
	AX_ANIM_PTR(sJirachiAnims_15_1),
	AX_ANIM_PTR(sJirachiAnims_15_1),
	AX_ANIM_PTR(sJirachiAnims_15_1),
	AX_ANIM_PTR(sJirachiAnims_15_1),
};

static const ax_anim *const sJirachiAnimTable16[] = {
	AX_ANIM_PTR(sJirachiAnims_16_1),
	AX_ANIM_PTR(sJirachiAnims_16_1),
	AX_ANIM_PTR(sJirachiAnims_16_1),
	AX_ANIM_PTR(sJirachiAnims_16_1),
	AX_ANIM_PTR(sJirachiAnims_16_1),
	AX_ANIM_PTR(sJirachiAnims_16_1),
	AX_ANIM_PTR(sJirachiAnims_16_1),
	AX_ANIM_PTR(sJirachiAnims_16_1),
};

static const ax_anim *const *const sAxAnimationsJirachi[] = {
	sJirachiAnimTable1,
	sJirachiAnimTable2,
	sJirachiAnimTable3,
	sJirachiAnimTable4,
	sJirachiAnimTable5,
	sJirachiAnimTable6,
	sJirachiAnimTable7,
	sJirachiAnimTable8,
	sJirachiAnimTable9,
	sJirachiAnimTable10,
	sJirachiAnimTable11,
	sJirachiAnimTable12,
	sJirachiAnimTable13,
	sJirachiAnimTable14,
	sJirachiAnimTable15,
	sJirachiAnimTable16,
};

static const ax_sprite *const sAxSpritesJirachi[] = {
	sJirachiSprites1,
	sJirachiSprites2,
	sJirachiSprites3,
	sJirachiSprites4,
	sJirachiSprites5,
	sJirachiSprites6,
	sJirachiSprites7,
	sJirachiSprites8,
	sJirachiSprites9,
	sJirachiSprites10,
	sJirachiSprites11,
	sJirachiSprites12,
	sJirachiSprites13,
	sJirachiSprites14,
	sJirachiSprites15,
	sJirachiSprites16,
	sJirachiSprites17,
	sJirachiSprites18,
	sJirachiSprites19,
	sJirachiSprites20,
	sJirachiSprites21,
	sJirachiSprites22,
	sJirachiSprites23,
	sJirachiSprites24,
	sJirachiSprites25,
	sJirachiSprites26,
	sJirachiSprites27,
	sJirachiSprites28,
	sJirachiSprites29,
	sJirachiSprites30,
	sJirachiSprites31,
	sJirachiSprites32,
	sJirachiSprites33,
	sJirachiSprites34,
	sJirachiSprites35,
	sJirachiSprites36,
	sJirachiSprites37,
	sJirachiSprites38,
	sJirachiSprites39,
	sJirachiSprites40,
	sJirachiSprites41,
	sJirachiSprites42,
	sJirachiSprites43,
	sJirachiSprites44,
	sJirachiSprites45,
	sJirachiSprites46,
	sJirachiSprites47,
	sJirachiSprites48,
	sJirachiSprites49,
	sJirachiSprites50,
	sJirachiSprites51,
};

static const axmain sAxMainJirachi = {
	.poses = sAxPosesJirachi,
	.animations = sAxAnimationsJirachi,
	.animCount = ARRAY_COUNT(sAxAnimationsJirachi),
	.spriteData = sAxSpritesJirachi,
	.positions = sAxPositionsJirachi,
};
