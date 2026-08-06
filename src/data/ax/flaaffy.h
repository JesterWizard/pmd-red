/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainFlaaffy;
const SiroArchive gAxFlaaffy = {"SIRO", &sAxMainFlaaffy};

static const ax_pose sFlaaffyPose1[] = {
	AX_POSE(0, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose2[] = {
	AX_POSE(1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose3[] = {
	AX_POSE(2, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose4[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose5[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose6[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose7[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose8[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose9[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose10[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose11[] = {
	AX_POSE(10, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose12[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose13[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose14[] = {
	AX_POSE(13, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose15[] = {
	AX_POSE(14, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose16[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose17[] = {
	AX_POSE(10, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose18[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose19[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose20[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose21[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose22[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose23[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose24[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose28[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose32[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose36[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose40[] = {
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose44[] = {
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose48[] = {
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose52[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose56[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose90[] = {
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose91[] = {
	AX_POSE(15, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose93[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose94[] = {
	AX_POSE(16, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose96[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose99[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose102[] = {
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose103[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose105[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose108[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose111[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose112[] = {
	AX_POSE(16, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose113[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose114[] = {
	AX_POSE(26, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose115[] = {
	AX_POSE(27, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose116[] = {
	AX_POSE(28, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose117[] = {
	AX_POSE(29, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose118[] = {
	AX_POSE(30, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose119[] = {
	AX_POSE(31, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose120[] = {
	AX_POSE(32, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose121[] = {
	AX_POSE(33, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose122[] = {
	AX_POSE(34, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose123[] = {
	AX_POSE(31, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose124[] = {
	AX_POSE(32, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose125[] = {
	AX_POSE(29, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose126[] = {
	AX_POSE(30, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose127[] = {
	AX_POSE(27, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose128[] = {
	AX_POSE(28, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose129[] = {
	AX_POSE(35, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose130[] = {
	AX_POSE(36, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose131[] = {
	AX_POSE(37, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose132[] = {
	AX_POSE(38, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose133[] = {
	AX_POSE(39, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose134[] = {
	AX_POSE(40, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose135[] = {
	AX_POSE(41, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose136[] = {
	AX_POSE(40, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose137[] = {
	AX_POSE(39, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose138[] = {
	AX_POSE(38, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose165[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose169[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose175[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose183[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose184[] = {
	AX_POSE(16, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose190[] = {
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose196[] = {
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose201[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sFlaaffyPose202[] = {
	AX_POSE(16, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const u8 sFlaaffyAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_2_1.lz");
static const u8 sFlaaffyAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_2_2.lz");
static const u8 sFlaaffyAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_2_3.lz");
static const u8 sFlaaffyAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_2_4.lz");
static const u8 sFlaaffyAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_2_5.lz");
static const u8 sFlaaffyAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_2_6.lz");
static const u8 sFlaaffyAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_2_7.lz");
static const u8 sFlaaffyAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_2_8.lz");
static const u8 sFlaaffyAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_3_1.lz");
static const u8 sFlaaffyAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_3_2.lz");
static const u8 sFlaaffyAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_3_3.lz");
static const u8 sFlaaffyAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_3_4.lz");
static const u8 sFlaaffyAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_3_5.lz");
static const u8 sFlaaffyAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_3_6.lz");
static const u8 sFlaaffyAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_3_7.lz");
static const u8 sFlaaffyAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_3_8.lz");
static const u8 sFlaaffyAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_4_1.lz");
static const u8 sFlaaffyAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_4_2.lz");
static const u8 sFlaaffyAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_4_3.lz");
static const u8 sFlaaffyAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_4_4.lz");
static const u8 sFlaaffyAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_4_5.lz");
static const u8 sFlaaffyAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_4_6.lz");
static const u8 sFlaaffyAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_4_7.lz");
static const u8 sFlaaffyAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_4_8.lz");
static const u8 sFlaaffyAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_5_1.lz");
static const u8 sFlaaffyAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_5_2.lz");
static const u8 sFlaaffyAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_5_3.lz");
static const u8 sFlaaffyAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_5_4.lz");
static const u8 sFlaaffyAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_5_5.lz");
static const u8 sFlaaffyAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_5_6.lz");
static const u8 sFlaaffyAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_5_7.lz");
static const u8 sFlaaffyAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_5_8.lz");
static const u8 sFlaaffyAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_8_1.lz");
static const u8 sFlaaffyAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_8_2.lz");
static const u8 sFlaaffyAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_8_3.lz");
static const u8 sFlaaffyAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_8_4.lz");
static const u8 sFlaaffyAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_8_5.lz");
static const u8 sFlaaffyAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_8_6.lz");
static const u8 sFlaaffyAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_8_7.lz");
static const u8 sFlaaffyAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_8_8.lz");
static const u8 sFlaaffyAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_9_1.lz");
static const u8 sFlaaffyAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_9_2.lz");
static const u8 sFlaaffyAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_9_3.lz");
static const u8 sFlaaffyAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_9_4.lz");
static const u8 sFlaaffyAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_9_5.lz");
static const u8 sFlaaffyAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_9_6.lz");
static const u8 sFlaaffyAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_9_7.lz");
static const u8 sFlaaffyAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_9_8.lz");
static const u8 sFlaaffyAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_11_1.lz");
static const u8 sFlaaffyAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_11_2.lz");
static const u8 sFlaaffyAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_11_3.lz");
static const u8 sFlaaffyAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_11_4.lz");
static const u8 sFlaaffyAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_11_5.lz");
static const u8 sFlaaffyAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_11_6.lz");
static const u8 sFlaaffyAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_11_7.lz");
static const u8 sFlaaffyAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/flaaffy/sFlaaffyAnims_11_8.lz");

static const u8 sFlaaffyGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_1.4bpp.lz");
static const ax_sprite sFlaaffySprites1[] = {
	{sFlaaffyGfx1, ARRAY_COUNT(sFlaaffyGfx1)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_2.4bpp.lz");
static const ax_sprite sFlaaffySprites2[] = {
	{sFlaaffyGfx2, ARRAY_COUNT(sFlaaffyGfx2)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_3.4bpp.lz");
static const ax_sprite sFlaaffySprites3[] = {
	{sFlaaffyGfx3, ARRAY_COUNT(sFlaaffyGfx3)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_4.4bpp.lz");
static const ax_sprite sFlaaffySprites4[] = {
	{sFlaaffyGfx4, ARRAY_COUNT(sFlaaffyGfx4)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_5.4bpp.lz");
static const ax_sprite sFlaaffySprites5[] = {
	{sFlaaffyGfx5, ARRAY_COUNT(sFlaaffyGfx5)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_6.4bpp.lz");
static const ax_sprite sFlaaffySprites6[] = {
	{sFlaaffyGfx6, ARRAY_COUNT(sFlaaffyGfx6)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_7.4bpp.lz");
static const ax_sprite sFlaaffySprites7[] = {
	{sFlaaffyGfx7, ARRAY_COUNT(sFlaaffyGfx7)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_8.4bpp.lz");
static const ax_sprite sFlaaffySprites8[] = {
	{sFlaaffyGfx8, ARRAY_COUNT(sFlaaffyGfx8)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_9.4bpp.lz");
static const ax_sprite sFlaaffySprites9[] = {
	{sFlaaffyGfx9, ARRAY_COUNT(sFlaaffyGfx9)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_10.4bpp.lz");
static const ax_sprite sFlaaffySprites10[] = {
	{sFlaaffyGfx10, ARRAY_COUNT(sFlaaffyGfx10)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_11.4bpp.lz");
static const ax_sprite sFlaaffySprites11[] = {
	{sFlaaffyGfx11, ARRAY_COUNT(sFlaaffyGfx11)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_12.4bpp.lz");
static const ax_sprite sFlaaffySprites12[] = {
	{sFlaaffyGfx12, ARRAY_COUNT(sFlaaffyGfx12)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_13.4bpp.lz");
static const ax_sprite sFlaaffySprites13[] = {
	{sFlaaffyGfx13, ARRAY_COUNT(sFlaaffyGfx13)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_14.4bpp.lz");
static const ax_sprite sFlaaffySprites14[] = {
	{sFlaaffyGfx14, ARRAY_COUNT(sFlaaffyGfx14)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_15.4bpp.lz");
static const ax_sprite sFlaaffySprites15[] = {
	{sFlaaffyGfx15, ARRAY_COUNT(sFlaaffyGfx15)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_16.4bpp.lz");
static const u8 sFlaaffyGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_16_1.4bpp.lz");
static const u8 sFlaaffyGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_16_2.4bpp.lz");
static const ax_sprite sFlaaffySprites16[] = {
	{NULL, 32}, 
	{sFlaaffyGfx16, ARRAY_COUNT(sFlaaffyGfx16)}, 
	{NULL, 32}, 
	{sFlaaffyGfx16_1, ARRAY_COUNT(sFlaaffyGfx16_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx16_2, ARRAY_COUNT(sFlaaffyGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_17.4bpp.lz");
static const u8 sFlaaffyGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_17_1.4bpp.lz");
static const u8 sFlaaffyGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_17_2.4bpp.lz");
static const ax_sprite sFlaaffySprites17[] = {
	{sFlaaffyGfx17, ARRAY_COUNT(sFlaaffyGfx17)}, 
	{NULL, 32}, 
	{sFlaaffyGfx17_1, ARRAY_COUNT(sFlaaffyGfx17_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx17_2, ARRAY_COUNT(sFlaaffyGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_18.4bpp.lz");
static const u8 sFlaaffyGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_18_1.4bpp.lz");
static const u8 sFlaaffyGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_18_2.4bpp.lz");
static const ax_sprite sFlaaffySprites18[] = {
	{sFlaaffyGfx18, ARRAY_COUNT(sFlaaffyGfx18)}, 
	{NULL, 32}, 
	{sFlaaffyGfx18_1, ARRAY_COUNT(sFlaaffyGfx18_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx18_2, ARRAY_COUNT(sFlaaffyGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_19.4bpp.lz");
static const u8 sFlaaffyGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_19_1.4bpp.lz");
static const u8 sFlaaffyGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_19_2.4bpp.lz");
static const ax_sprite sFlaaffySprites19[] = {
	{sFlaaffyGfx19, ARRAY_COUNT(sFlaaffyGfx19)}, 
	{NULL, 32}, 
	{sFlaaffyGfx19_1, ARRAY_COUNT(sFlaaffyGfx19_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx19_2, ARRAY_COUNT(sFlaaffyGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_20.4bpp.lz");
static const u8 sFlaaffyGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_20_1.4bpp.lz");
static const u8 sFlaaffyGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_20_2.4bpp.lz");
static const ax_sprite sFlaaffySprites20[] = {
	{sFlaaffyGfx20, ARRAY_COUNT(sFlaaffyGfx20)}, 
	{NULL, 32}, 
	{sFlaaffyGfx20_1, ARRAY_COUNT(sFlaaffyGfx20_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx20_2, ARRAY_COUNT(sFlaaffyGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_21.4bpp.lz");
static const u8 sFlaaffyGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_21_1.4bpp.lz");
static const u8 sFlaaffyGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_21_2.4bpp.lz");
static const ax_sprite sFlaaffySprites21[] = {
	{sFlaaffyGfx21, ARRAY_COUNT(sFlaaffyGfx21)}, 
	{NULL, 32}, 
	{sFlaaffyGfx21_1, ARRAY_COUNT(sFlaaffyGfx21_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx21_2, ARRAY_COUNT(sFlaaffyGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_22.4bpp.lz");
static const u8 sFlaaffyGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_22_1.4bpp.lz");
static const u8 sFlaaffyGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_22_2.4bpp.lz");
static const u8 sFlaaffyGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_22_3.4bpp.lz");
static const ax_sprite sFlaaffySprites22[] = {
	{sFlaaffyGfx22, ARRAY_COUNT(sFlaaffyGfx22)}, 
	{NULL, 32}, 
	{sFlaaffyGfx22_1, ARRAY_COUNT(sFlaaffyGfx22_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx22_2, ARRAY_COUNT(sFlaaffyGfx22_2)}, 
	{NULL, 64}, 
	{sFlaaffyGfx22_3, ARRAY_COUNT(sFlaaffyGfx22_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_23.4bpp.lz");
static const u8 sFlaaffyGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_23_1.4bpp.lz");
static const u8 sFlaaffyGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_23_2.4bpp.lz");
static const ax_sprite sFlaaffySprites23[] = {
	{sFlaaffyGfx23, ARRAY_COUNT(sFlaaffyGfx23)}, 
	{NULL, 32}, 
	{sFlaaffyGfx23_1, ARRAY_COUNT(sFlaaffyGfx23_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx23_2, ARRAY_COUNT(sFlaaffyGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_24.4bpp.lz");
static const u8 sFlaaffyGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_24_1.4bpp.lz");
static const u8 sFlaaffyGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_24_2.4bpp.lz");
static const ax_sprite sFlaaffySprites24[] = {
	{sFlaaffyGfx24, ARRAY_COUNT(sFlaaffyGfx24)}, 
	{NULL, 32}, 
	{sFlaaffyGfx24_1, ARRAY_COUNT(sFlaaffyGfx24_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx24_2, ARRAY_COUNT(sFlaaffyGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_25.4bpp.lz");
static const u8 sFlaaffyGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_25_1.4bpp.lz");
static const u8 sFlaaffyGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_25_2.4bpp.lz");
static const ax_sprite sFlaaffySprites25[] = {
	{sFlaaffyGfx25, ARRAY_COUNT(sFlaaffyGfx25)}, 
	{NULL, 32}, 
	{sFlaaffyGfx25_1, ARRAY_COUNT(sFlaaffyGfx25_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx25_2, ARRAY_COUNT(sFlaaffyGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_26.4bpp.lz");
static const u8 sFlaaffyGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_26_1.4bpp.lz");
static const u8 sFlaaffyGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_26_2.4bpp.lz");
static const u8 sFlaaffyGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_26_3.4bpp.lz");
static const ax_sprite sFlaaffySprites26[] = {
	{NULL, 32}, 
	{sFlaaffyGfx26, ARRAY_COUNT(sFlaaffyGfx26)}, 
	{NULL, 32}, 
	{sFlaaffyGfx26_1, ARRAY_COUNT(sFlaaffyGfx26_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx26_2, ARRAY_COUNT(sFlaaffyGfx26_2)}, 
	{NULL, 32}, 
	{sFlaaffyGfx26_3, ARRAY_COUNT(sFlaaffyGfx26_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_27.4bpp.lz");
static const u8 sFlaaffyGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_27_1.4bpp.lz");
static const u8 sFlaaffyGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_27_2.4bpp.lz");
static const u8 sFlaaffyGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_27_3.4bpp.lz");
static const ax_sprite sFlaaffySprites27[] = {
	{NULL, 32}, 
	{sFlaaffyGfx27, ARRAY_COUNT(sFlaaffyGfx27)}, 
	{NULL, 32}, 
	{sFlaaffyGfx27_1, ARRAY_COUNT(sFlaaffyGfx27_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx27_2, ARRAY_COUNT(sFlaaffyGfx27_2)}, 
	{NULL, 32}, 
	{sFlaaffyGfx27_3, ARRAY_COUNT(sFlaaffyGfx27_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_28.4bpp.lz");
static const u8 sFlaaffyGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_28_1.4bpp.lz");
static const u8 sFlaaffyGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_28_2.4bpp.lz");
static const u8 sFlaaffyGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_28_3.4bpp.lz");
static const ax_sprite sFlaaffySprites28[] = {
	{sFlaaffyGfx28, ARRAY_COUNT(sFlaaffyGfx28)}, 
	{NULL, 32}, 
	{sFlaaffyGfx28_1, ARRAY_COUNT(sFlaaffyGfx28_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx28_2, ARRAY_COUNT(sFlaaffyGfx28_2)}, 
	{NULL, 64}, 
	{sFlaaffyGfx28_3, ARRAY_COUNT(sFlaaffyGfx28_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_29.4bpp.lz");
static const u8 sFlaaffyGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_29_1.4bpp.lz");
static const u8 sFlaaffyGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_29_2.4bpp.lz");
static const u8 sFlaaffyGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_29_3.4bpp.lz");
static const ax_sprite sFlaaffySprites29[] = {
	{sFlaaffyGfx29, ARRAY_COUNT(sFlaaffyGfx29)}, 
	{NULL, 32}, 
	{sFlaaffyGfx29_1, ARRAY_COUNT(sFlaaffyGfx29_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx29_2, ARRAY_COUNT(sFlaaffyGfx29_2)}, 
	{NULL, 64}, 
	{sFlaaffyGfx29_3, ARRAY_COUNT(sFlaaffyGfx29_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_30.4bpp.lz");
static const u8 sFlaaffyGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_30_1.4bpp.lz");
static const u8 sFlaaffyGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_30_2.4bpp.lz");
static const ax_sprite sFlaaffySprites30[] = {
	{NULL, 32}, 
	{sFlaaffyGfx30, ARRAY_COUNT(sFlaaffyGfx30)}, 
	{NULL, 32}, 
	{sFlaaffyGfx30_1, ARRAY_COUNT(sFlaaffyGfx30_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx30_2, ARRAY_COUNT(sFlaaffyGfx30_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_31.4bpp.lz");
static const u8 sFlaaffyGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_31_1.4bpp.lz");
static const u8 sFlaaffyGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_31_2.4bpp.lz");
static const ax_sprite sFlaaffySprites31[] = {
	{NULL, 32}, 
	{sFlaaffyGfx31, ARRAY_COUNT(sFlaaffyGfx31)}, 
	{NULL, 32}, 
	{sFlaaffyGfx31_1, ARRAY_COUNT(sFlaaffyGfx31_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx31_2, ARRAY_COUNT(sFlaaffyGfx31_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_32.4bpp.lz");
static const u8 sFlaaffyGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_32_1.4bpp.lz");
static const u8 sFlaaffyGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_32_2.4bpp.lz");
static const ax_sprite sFlaaffySprites32[] = {
	{NULL, 32}, 
	{sFlaaffyGfx32, ARRAY_COUNT(sFlaaffyGfx32)}, 
	{NULL, 32}, 
	{sFlaaffyGfx32_1, ARRAY_COUNT(sFlaaffyGfx32_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx32_2, ARRAY_COUNT(sFlaaffyGfx32_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_33.4bpp.lz");
static const u8 sFlaaffyGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_33_1.4bpp.lz");
static const u8 sFlaaffyGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_33_2.4bpp.lz");
static const ax_sprite sFlaaffySprites33[] = {
	{NULL, 32}, 
	{sFlaaffyGfx33, ARRAY_COUNT(sFlaaffyGfx33)}, 
	{NULL, 32}, 
	{sFlaaffyGfx33_1, ARRAY_COUNT(sFlaaffyGfx33_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx33_2, ARRAY_COUNT(sFlaaffyGfx33_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_34.4bpp.lz");
static const u8 sFlaaffyGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_34_1.4bpp.lz");
static const u8 sFlaaffyGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_34_2.4bpp.lz");
static const u8 sFlaaffyGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_34_3.4bpp.lz");
static const ax_sprite sFlaaffySprites34[] = {
	{sFlaaffyGfx34, ARRAY_COUNT(sFlaaffyGfx34)}, 
	{NULL, 32}, 
	{sFlaaffyGfx34_1, ARRAY_COUNT(sFlaaffyGfx34_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx34_2, ARRAY_COUNT(sFlaaffyGfx34_2)}, 
	{NULL, 64}, 
	{sFlaaffyGfx34_3, ARRAY_COUNT(sFlaaffyGfx34_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_35.4bpp.lz");
static const u8 sFlaaffyGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_35_1.4bpp.lz");
static const u8 sFlaaffyGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_35_2.4bpp.lz");
static const u8 sFlaaffyGfx35_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_35_3.4bpp.lz");
static const ax_sprite sFlaaffySprites35[] = {
	{sFlaaffyGfx35, ARRAY_COUNT(sFlaaffyGfx35)}, 
	{NULL, 32}, 
	{sFlaaffyGfx35_1, ARRAY_COUNT(sFlaaffyGfx35_1)}, 
	{NULL, 32}, 
	{sFlaaffyGfx35_2, ARRAY_COUNT(sFlaaffyGfx35_2)}, 
	{NULL, 64}, 
	{sFlaaffyGfx35_3, ARRAY_COUNT(sFlaaffyGfx35_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_36.4bpp.lz");
static const ax_sprite sFlaaffySprites36[] = {
	{sFlaaffyGfx36, ARRAY_COUNT(sFlaaffyGfx36)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_37.4bpp.lz");
static const ax_sprite sFlaaffySprites37[] = {
	{sFlaaffyGfx37, ARRAY_COUNT(sFlaaffyGfx37)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_38.4bpp.lz");
static const ax_sprite sFlaaffySprites38[] = {
	{sFlaaffyGfx38, ARRAY_COUNT(sFlaaffyGfx38)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_39.4bpp.lz");
static const ax_sprite sFlaaffySprites39[] = {
	{sFlaaffyGfx39, ARRAY_COUNT(sFlaaffyGfx39)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_40.4bpp.lz");
static const ax_sprite sFlaaffySprites40[] = {
	{sFlaaffyGfx40, ARRAY_COUNT(sFlaaffyGfx40)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_41.4bpp.lz");
static const ax_sprite sFlaaffySprites41[] = {
	{sFlaaffyGfx41, ARRAY_COUNT(sFlaaffyGfx41)}, 
	{NULL, 0}
};
static const u8 sFlaaffyGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/flaaffy/sprite_42.4bpp.lz");
static const ax_sprite sFlaaffySprites42[] = {
	{sFlaaffyGfx42, ARRAY_COUNT(sFlaaffyGfx42)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesFlaaffy[] = {
	sFlaaffyPose1,
	sFlaaffyPose2,
	sFlaaffyPose3,
	sFlaaffyPose4,
	sFlaaffyPose5,
	sFlaaffyPose6,
	sFlaaffyPose7,
	sFlaaffyPose8,
	sFlaaffyPose9,
	sFlaaffyPose10,
	sFlaaffyPose11,
	sFlaaffyPose12,
	sFlaaffyPose13,
	sFlaaffyPose14,
	sFlaaffyPose15,
	sFlaaffyPose16,
	sFlaaffyPose17,
	sFlaaffyPose18,
	sFlaaffyPose19,
	sFlaaffyPose20,
	sFlaaffyPose21,
	sFlaaffyPose22,
	sFlaaffyPose23,
	sFlaaffyPose24,
	sFlaaffyPose1,
	sFlaaffyPose2,
	sFlaaffyPose3,
	sFlaaffyPose28,
	sFlaaffyPose4,
	sFlaaffyPose5,
	sFlaaffyPose6,
	sFlaaffyPose32,
	sFlaaffyPose7,
	sFlaaffyPose8,
	sFlaaffyPose9,
	sFlaaffyPose36,
	sFlaaffyPose10,
	sFlaaffyPose11,
	sFlaaffyPose12,
	sFlaaffyPose40,
	sFlaaffyPose13,
	sFlaaffyPose14,
	sFlaaffyPose15,
	sFlaaffyPose44,
	sFlaaffyPose16,
	sFlaaffyPose17,
	sFlaaffyPose18,
	sFlaaffyPose48,
	sFlaaffyPose19,
	sFlaaffyPose20,
	sFlaaffyPose21,
	sFlaaffyPose52,
	sFlaaffyPose22,
	sFlaaffyPose23,
	sFlaaffyPose24,
	sFlaaffyPose56,
	sFlaaffyPose1,
	sFlaaffyPose2,
	sFlaaffyPose3,
	sFlaaffyPose28,
	sFlaaffyPose4,
	sFlaaffyPose5,
	sFlaaffyPose6,
	sFlaaffyPose32,
	sFlaaffyPose7,
	sFlaaffyPose8,
	sFlaaffyPose9,
	sFlaaffyPose36,
	sFlaaffyPose10,
	sFlaaffyPose11,
	sFlaaffyPose12,
	sFlaaffyPose40,
	sFlaaffyPose13,
	sFlaaffyPose14,
	sFlaaffyPose15,
	sFlaaffyPose44,
	sFlaaffyPose16,
	sFlaaffyPose17,
	sFlaaffyPose18,
	sFlaaffyPose48,
	sFlaaffyPose19,
	sFlaaffyPose20,
	sFlaaffyPose21,
	sFlaaffyPose52,
	sFlaaffyPose22,
	sFlaaffyPose23,
	sFlaaffyPose24,
	sFlaaffyPose56,
	sFlaaffyPose1,
	sFlaaffyPose90,
	sFlaaffyPose91,
	sFlaaffyPose4,
	sFlaaffyPose93,
	sFlaaffyPose94,
	sFlaaffyPose7,
	sFlaaffyPose96,
	sFlaaffyPose36,
	sFlaaffyPose10,
	sFlaaffyPose99,
	sFlaaffyPose40,
	sFlaaffyPose13,
	sFlaaffyPose102,
	sFlaaffyPose103,
	sFlaaffyPose16,
	sFlaaffyPose105,
	sFlaaffyPose48,
	sFlaaffyPose19,
	sFlaaffyPose108,
	sFlaaffyPose52,
	sFlaaffyPose22,
	sFlaaffyPose111,
	sFlaaffyPose112,
	sFlaaffyPose113,
	sFlaaffyPose114,
	sFlaaffyPose115,
	sFlaaffyPose116,
	sFlaaffyPose117,
	sFlaaffyPose118,
	sFlaaffyPose119,
	sFlaaffyPose120,
	sFlaaffyPose121,
	sFlaaffyPose122,
	sFlaaffyPose123,
	sFlaaffyPose124,
	sFlaaffyPose125,
	sFlaaffyPose126,
	sFlaaffyPose127,
	sFlaaffyPose128,
	sFlaaffyPose129,
	sFlaaffyPose130,
	sFlaaffyPose131,
	sFlaaffyPose132,
	sFlaaffyPose133,
	sFlaaffyPose134,
	sFlaaffyPose135,
	sFlaaffyPose136,
	sFlaaffyPose137,
	sFlaaffyPose138,
	sFlaaffyPose1,
	sFlaaffyPose2,
	sFlaaffyPose3,
	sFlaaffyPose4,
	sFlaaffyPose5,
	sFlaaffyPose6,
	sFlaaffyPose7,
	sFlaaffyPose8,
	sFlaaffyPose9,
	sFlaaffyPose10,
	sFlaaffyPose11,
	sFlaaffyPose12,
	sFlaaffyPose13,
	sFlaaffyPose14,
	sFlaaffyPose15,
	sFlaaffyPose16,
	sFlaaffyPose17,
	sFlaaffyPose18,
	sFlaaffyPose19,
	sFlaaffyPose20,
	sFlaaffyPose21,
	sFlaaffyPose22,
	sFlaaffyPose23,
	sFlaaffyPose24,
	sFlaaffyPose91,
	sFlaaffyPose56,
	sFlaaffyPose165,
	sFlaaffyPose48,
	sFlaaffyPose103,
	sFlaaffyPose40,
	sFlaaffyPose169,
	sFlaaffyPose32,
	sFlaaffyPose90,
	sFlaaffyPose93,
	sFlaaffyPose96,
	sFlaaffyPose99,
	sFlaaffyPose175,
	sFlaaffyPose105,
	sFlaaffyPose108,
	sFlaaffyPose111,
	sFlaaffyPose1,
	sFlaaffyPose90,
	sFlaaffyPose91,
	sFlaaffyPose4,
	sFlaaffyPose183,
	sFlaaffyPose184,
	sFlaaffyPose7,
	sFlaaffyPose96,
	sFlaaffyPose36,
	sFlaaffyPose10,
	sFlaaffyPose99,
	sFlaaffyPose190,
	sFlaaffyPose13,
	sFlaaffyPose102,
	sFlaaffyPose103,
	sFlaaffyPose16,
	sFlaaffyPose105,
	sFlaaffyPose196,
	sFlaaffyPose19,
	sFlaaffyPose108,
	sFlaaffyPose52,
	sFlaaffyPose22,
	sFlaaffyPose201,
	sFlaaffyPose202,
	sFlaaffyPose91,
	sFlaaffyPose56,
	sFlaaffyPose165,
	sFlaaffyPose48,
	sFlaaffyPose103,
	sFlaaffyPose40,
	sFlaaffyPose169,
	sFlaaffyPose32,
	sFlaaffyPose1,
	sFlaaffyPose22,
	sFlaaffyPose19,
	sFlaaffyPose16,
	sFlaaffyPose13,
	sFlaaffyPose10,
	sFlaaffyPose7,
	sFlaaffyPose4,
};

static const struct PositionSets sAxPositionsFlaaffy[] = {
	[0] = { .set = { {-1, -10}, {-4, -5}, {2, -5}, {-1, -7} } },
	[1] = { .set = { {-2, -9}, {-2, -4}, {5, -6}, {-1, -7} } },
	[2] = { .set = { {0, -9}, {-7, -6}, {0, -4}, {-1, -7} } },
	[3] = { .set = { {3, -10}, {3, -6}, {-1, -5}, {-1, -9} } },
	[4] = { .set = { {4, -9}, {2, -4}, {-5, -4}, {0, -8} } },
	[5] = { .set = { {2, -9}, {6, -7}, {1, -4}, {-1, -8} } },
	[6] = { .set = { {4, -10}, {4, -6}, {3, -4}, {-1, -8} } },
	[7] = { .set = { {5, -9}, {3, -4}, {-1, -4}, {-1, -7} } },
	[8] = { .set = { {4, -9}, {3, -8}, {5, -5}, {-1, -8} } },
	[9] = { .set = { {1, -11}, {-4, -9}, {0, -6}, {-2, -9} } },
	[10] = { .set = { {1, -11}, {-1, -5}, {3, -4}, {-2, -9} } },
	[11] = { .set = { {3, -10}, {-4, -8}, {0, -5}, {-1, -8} } },
	[12] = { .set = { {-1, -12}, {2, -6}, {-4, -6}, {-1, -10} } },
	[13] = { .set = { {0, -11}, {0, -6}, {-7, -6}, {-1, -9} } },
	[14] = { .set = { {-1, -11}, {-2, -6}, {5, -6}, {0, -9} } },
	[15] = { .set = { {-3, -11}, {2, -9}, {-2, -6}, {0, -9} } },
	[16] = { .set = { {-3, -11}, {-1, -5}, {-5, -4}, {0, -9} } },
	[17] = { .set = { {-5, -10}, {2, -8}, {-2, -5}, {-1, -8} } },
	[18] = { .set = { {-6, -10}, {-6, -6}, {-5, -4}, {-1, -8} } },
	[19] = { .set = { {-7, -9}, {-5, -4}, {-1, -4}, {-1, -7} } },
	[20] = { .set = { {-6, -9}, {-5, -8}, {-7, -5}, {-1, -8} } },
	[21] = { .set = { {-5, -10}, {-5, -6}, {-1, -5}, {-1, -9} } },
	[22] = { .set = { {-6, -9}, {-4, -4}, {3, -4}, {-2, -8} } },
	[23] = { .set = { {-4, -9}, {-8, -7}, {-3, -4}, {-1, -8} } },
	[24] = { .set = { {-1, -10}, {-4, -5}, {2, -5}, {-1, -7} } },
	[25] = { .set = { {-2, -9}, {-2, -4}, {5, -6}, {-1, -7} } },
	[26] = { .set = { {0, -9}, {-7, -6}, {0, -4}, {-1, -7} } },
	[27] = { .set = { {-1, -5}, {-3, -1}, {1, -1}, {-1, -6} } },
	[28] = { .set = { {3, -10}, {3, -6}, {-1, -5}, {-1, -9} } },
	[29] = { .set = { {4, -9}, {2, -4}, {-5, -4}, {0, -8} } },
	[30] = { .set = { {2, -9}, {6, -7}, {1, -4}, {-1, -8} } },
	[31] = { .set = { {6, -8}, {4, -4}, {0, -3}, {0, -9} } },
	[32] = { .set = { {4, -10}, {4, -6}, {3, -4}, {-1, -8} } },
	[33] = { .set = { {5, -9}, {3, -4}, {-1, -4}, {-1, -7} } },
	[34] = { .set = { {4, -9}, {3, -8}, {5, -5}, {-1, -8} } },
	[35] = { .set = { {7, -10}, {4, -6}, {4, -5}, {-1, -9} } },
	[36] = { .set = { {1, -11}, {-4, -9}, {0, -6}, {-2, -9} } },
	[37] = { .set = { {1, -11}, {-1, -5}, {3, -4}, {-2, -9} } },
	[38] = { .set = { {3, -10}, {-4, -8}, {0, -5}, {-1, -8} } },
	[39] = { .set = { {6, -11}, {0, -7}, {5, -5}, {0, -8} } },
	[40] = { .set = { {-1, -12}, {2, -6}, {-4, -6}, {-1, -10} } },
	[41] = { .set = { {0, -11}, {0, -6}, {-7, -6}, {-1, -9} } },
	[42] = { .set = { {-1, -11}, {-2, -6}, {5, -6}, {0, -9} } },
	[43] = { .set = { {-1, -15}, {1, -6}, {-3, -6}, {-1, -10} } },
	[44] = { .set = { {-3, -11}, {2, -9}, {-2, -6}, {0, -9} } },
	[45] = { .set = { {-3, -11}, {-1, -5}, {-5, -4}, {0, -9} } },
	[46] = { .set = { {-5, -10}, {2, -8}, {-2, -5}, {-1, -8} } },
	[47] = { .set = { {-8, -11}, {-2, -7}, {-7, -5}, {-2, -8} } },
	[48] = { .set = { {-6, -10}, {-6, -6}, {-5, -4}, {-1, -8} } },
	[49] = { .set = { {-7, -9}, {-5, -4}, {-1, -4}, {-1, -7} } },
	[50] = { .set = { {-6, -9}, {-5, -8}, {-7, -5}, {-1, -8} } },
	[51] = { .set = { {-9, -10}, {-6, -6}, {-6, -5}, {-1, -9} } },
	[52] = { .set = { {-5, -10}, {-5, -6}, {-1, -5}, {-1, -9} } },
	[53] = { .set = { {-6, -9}, {-4, -4}, {3, -4}, {-2, -8} } },
	[54] = { .set = { {-4, -9}, {-8, -7}, {-3, -4}, {-1, -8} } },
	[55] = { .set = { {-8, -8}, {-6, -4}, {-2, -3}, {-2, -9} } },
	[56] = { .set = { {-1, -10}, {-4, -5}, {2, -5}, {-1, -7} } },
	[57] = { .set = { {-2, -9}, {-2, -4}, {5, -6}, {-1, -7} } },
	[58] = { .set = { {0, -9}, {-7, -6}, {0, -4}, {-1, -7} } },
	[59] = { .set = { {-1, -5}, {-3, -1}, {1, -1}, {-1, -6} } },
	[60] = { .set = { {3, -10}, {3, -6}, {-1, -5}, {-1, -9} } },
	[61] = { .set = { {4, -9}, {2, -4}, {-5, -4}, {0, -8} } },
	[62] = { .set = { {2, -9}, {6, -7}, {1, -4}, {-1, -8} } },
	[63] = { .set = { {6, -8}, {4, -4}, {0, -3}, {0, -9} } },
	[64] = { .set = { {4, -10}, {4, -6}, {3, -4}, {-1, -8} } },
	[65] = { .set = { {5, -9}, {3, -4}, {-1, -4}, {-1, -7} } },
	[66] = { .set = { {4, -9}, {3, -8}, {5, -5}, {-1, -8} } },
	[67] = { .set = { {7, -10}, {4, -6}, {4, -5}, {-1, -9} } },
	[68] = { .set = { {1, -11}, {-4, -9}, {0, -6}, {-2, -9} } },
	[69] = { .set = { {1, -11}, {-1, -5}, {3, -4}, {-2, -9} } },
	[70] = { .set = { {3, -10}, {-4, -8}, {0, -5}, {-1, -8} } },
	[71] = { .set = { {6, -11}, {0, -7}, {5, -5}, {0, -8} } },
	[72] = { .set = { {-1, -12}, {2, -6}, {-4, -6}, {-1, -10} } },
	[73] = { .set = { {0, -11}, {0, -6}, {-7, -6}, {-1, -9} } },
	[74] = { .set = { {-1, -11}, {-2, -6}, {5, -6}, {0, -9} } },
	[75] = { .set = { {-1, -15}, {1, -6}, {-3, -6}, {-1, -10} } },
	[76] = { .set = { {-3, -11}, {2, -9}, {-2, -6}, {0, -9} } },
	[77] = { .set = { {-3, -11}, {-1, -5}, {-5, -4}, {0, -9} } },
	[78] = { .set = { {-5, -10}, {2, -8}, {-2, -5}, {-1, -8} } },
	[79] = { .set = { {-8, -11}, {-2, -7}, {-7, -5}, {-2, -8} } },
	[80] = { .set = { {-6, -10}, {-6, -6}, {-5, -4}, {-1, -8} } },
	[81] = { .set = { {-7, -9}, {-5, -4}, {-1, -4}, {-1, -7} } },
	[82] = { .set = { {-6, -9}, {-5, -8}, {-7, -5}, {-1, -8} } },
	[83] = { .set = { {-9, -10}, {-6, -6}, {-6, -5}, {-1, -9} } },
	[84] = { .set = { {-5, -10}, {-5, -6}, {-1, -5}, {-1, -9} } },
	[85] = { .set = { {-6, -9}, {-4, -4}, {3, -4}, {-2, -8} } },
	[86] = { .set = { {-4, -9}, {-8, -7}, {-3, -4}, {-1, -8} } },
	[87] = { .set = { {-8, -8}, {-6, -4}, {-2, -3}, {-2, -9} } },
	[88] = { .set = { {-1, -10}, {-4, -5}, {2, -5}, {-1, -7} } },
	[89] = { .set = { {-1, -12}, {-4, -9}, {2, -9}, {-1, -9} } },
	[90] = { .set = { {-1, -6}, {-3, -2}, {1, -2}, {-1, -7} } },
	[91] = { .set = { {3, -10}, {3, -6}, {-1, -5}, {-1, -9} } },
	[92] = { .set = { {1, -12}, {3, -10}, {-2, -9}, {-1, -8} } },
	[93] = { .set = { {6, -9}, {4, -5}, {0, -4}, {0, -10} } },
	[94] = { .set = { {4, -10}, {4, -6}, {3, -4}, {-1, -8} } },
	[95] = { .set = { {3, -14}, {2, -11}, {2, -9}, {-1, -9} } },
	[96] = { .set = { {7, -10}, {4, -6}, {4, -5}, {-1, -9} } },
	[97] = { .set = { {1, -11}, {-4, -9}, {0, -6}, {-2, -9} } },
	[98] = { .set = { {4, -14}, {-3, -12}, {3, -8}, {-2, -8} } },
	[99] = { .set = { {6, -11}, {0, -7}, {5, -5}, {0, -8} } },
	[100] = { .set = { {-1, -12}, {2, -6}, {-4, -6}, {-1, -10} } },
	[101] = { .set = { {-1, -15}, {2, -12}, {-4, -12}, {-1, -10} } },
	[102] = { .set = { {-1, -13}, {1, -4}, {-3, -4}, {-1, -8} } },
	[103] = { .set = { {-3, -11}, {2, -9}, {-2, -6}, {0, -9} } },
	[104] = { .set = { {-6, -14}, {1, -12}, {-5, -8}, {0, -8} } },
	[105] = { .set = { {-8, -11}, {-2, -7}, {-7, -5}, {-2, -8} } },
	[106] = { .set = { {-6, -10}, {-6, -6}, {-5, -4}, {-1, -8} } },
	[107] = { .set = { {-5, -14}, {-4, -11}, {-4, -9}, {-1, -9} } },
	[108] = { .set = { {-9, -10}, {-6, -6}, {-6, -5}, {-1, -9} } },
	[109] = { .set = { {-5, -10}, {-5, -6}, {-1, -5}, {-1, -9} } },
	[110] = { .set = { {-3, -12}, {-5, -10}, {0, -9}, {-1, -8} } },
	[111] = { .set = { {-8, -9}, {-6, -5}, {-2, -4}, {-2, -10} } },
	[112] = { .set = { {-1, -11}, {-4, -7}, {2, -7}, {-1, -7} } },
	[113] = { .set = { {-1, -11}, {-5, -7}, {3, -7}, {-1, -6} } },
	[114] = { .set = { {1, -10}, {3, -8}, {-2, -7}, {-2, -6} } },
	[115] = { .set = { {1, -11}, {4, -8}, {-4, -6}, {-1, -7} } },
	[116] = { .set = { {0, -12}, {3, -12}, {2, -9}, {-1, -7} } },
	[117] = { .set = { {0, -12}, {3, -11}, {3, -6}, {-2, -8} } },
	[118] = { .set = { {-1, -12}, {-3, -12}, {3, -9}, {-2, -7} } },
	[119] = { .set = { {0, -12}, {-2, -10}, {4, -9}, {-2, -7} } },
	[120] = { .set = { {-1, -13}, {2, -10}, {-4, -10}, {-1, -7} } },
	[121] = { .set = { {-1, -12}, {5, -9}, {-7, -9}, {-1, -7} } },
	[122] = { .set = { {0, -12}, {2, -12}, {-4, -9}, {1, -7} } },
	[123] = { .set = { {-1, -12}, {1, -10}, {-5, -9}, {1, -7} } },
	[124] = { .set = { {-2, -12}, {-5, -12}, {-4, -9}, {-1, -7} } },
	[125] = { .set = { {-2, -12}, {-5, -11}, {-5, -6}, {0, -8} } },
	[126] = { .set = { {-2, -10}, {-4, -8}, {1, -7}, {1, -6} } },
	[127] = { .set = { {-2, -11}, {-5, -8}, {3, -6}, {0, -7} } },
	[128] = { .set = { {-4, -8}, {-4, -4}, {0, -3}, {0, -8} } },
	[129] = { .set = { {-5, -6}, {-4, -4}, {0, -3}, {0, -7} } },
	[130] = { .set = { {0, -7}, {-7, -5}, {7, -5}, {0, -5} } },
	[131] = { .set = { {0, -8}, {4, -7}, {-6, -4}, {-3, -7} } },
	[132] = { .set = { {2, -9}, {1, -10}, {0, -6}, {-2, -8} } },
	[133] = { .set = { {1, -11}, {-2, -9}, {5, -8}, {-1, -8} } },
	[134] = { .set = { {0, -10}, {5, -6}, {-5, -6}, {0, -8} } },
	[135] = { .set = { {-2, -11}, {1, -9}, {-6, -8}, {0, -8} } },
	[136] = { .set = { {-3, -9}, {-2, -10}, {-1, -6}, {1, -8} } },
	[137] = { .set = { {-1, -8}, {-5, -7}, {5, -4}, {2, -7} } },
	[138] = { .set = { {-1, -10}, {-4, -5}, {2, -5}, {-1, -7} } },
	[139] = { .set = { {-2, -9}, {-2, -4}, {5, -6}, {-1, -7} } },
	[140] = { .set = { {0, -9}, {-7, -6}, {0, -4}, {-1, -7} } },
	[141] = { .set = { {3, -10}, {3, -6}, {-1, -5}, {-1, -9} } },
	[142] = { .set = { {4, -9}, {2, -4}, {-5, -4}, {0, -8} } },
	[143] = { .set = { {2, -9}, {6, -7}, {1, -4}, {-1, -8} } },
	[144] = { .set = { {4, -10}, {4, -6}, {3, -4}, {-1, -8} } },
	[145] = { .set = { {5, -9}, {3, -4}, {-1, -4}, {-1, -7} } },
	[146] = { .set = { {4, -9}, {3, -8}, {5, -5}, {-1, -8} } },
	[147] = { .set = { {1, -11}, {-4, -9}, {0, -6}, {-2, -9} } },
	[148] = { .set = { {1, -11}, {-1, -5}, {3, -4}, {-2, -9} } },
	[149] = { .set = { {3, -10}, {-4, -8}, {0, -5}, {-1, -8} } },
	[150] = { .set = { {-1, -12}, {2, -6}, {-4, -6}, {-1, -10} } },
	[151] = { .set = { {0, -11}, {0, -6}, {-7, -6}, {-1, -9} } },
	[152] = { .set = { {-1, -11}, {-2, -6}, {5, -6}, {0, -9} } },
	[153] = { .set = { {-3, -11}, {2, -9}, {-2, -6}, {0, -9} } },
	[154] = { .set = { {-3, -11}, {-1, -5}, {-5, -4}, {0, -9} } },
	[155] = { .set = { {-5, -10}, {2, -8}, {-2, -5}, {-1, -8} } },
	[156] = { .set = { {-6, -10}, {-6, -6}, {-5, -4}, {-1, -8} } },
	[157] = { .set = { {-7, -9}, {-5, -4}, {-1, -4}, {-1, -7} } },
	[158] = { .set = { {-6, -9}, {-5, -8}, {-7, -5}, {-1, -8} } },
	[159] = { .set = { {-5, -10}, {-5, -6}, {-1, -5}, {-1, -9} } },
	[160] = { .set = { {-6, -9}, {-4, -4}, {3, -4}, {-2, -8} } },
	[161] = { .set = { {-4, -9}, {-8, -7}, {-3, -4}, {-1, -8} } },
	[162] = { .set = { {-1, -6}, {-3, -2}, {1, -2}, {-1, -7} } },
	[163] = { .set = { {-8, -8}, {-6, -4}, {-2, -3}, {-2, -9} } },
	[164] = { .set = { {-10, -9}, {-7, -5}, {-7, -4}, {-2, -8} } },
	[165] = { .set = { {-8, -11}, {-2, -7}, {-7, -5}, {-2, -8} } },
	[166] = { .set = { {-1, -13}, {1, -4}, {-3, -4}, {-1, -8} } },
	[167] = { .set = { {6, -11}, {0, -7}, {5, -5}, {0, -8} } },
	[168] = { .set = { {8, -9}, {5, -5}, {5, -4}, {0, -8} } },
	[169] = { .set = { {6, -8}, {4, -4}, {0, -3}, {0, -9} } },
	[170] = { .set = { {-1, -12}, {-4, -9}, {2, -9}, {-1, -9} } },
	[171] = { .set = { {1, -12}, {3, -10}, {-2, -9}, {-1, -8} } },
	[172] = { .set = { {3, -14}, {2, -11}, {2, -9}, {-1, -9} } },
	[173] = { .set = { {4, -14}, {-3, -12}, {3, -8}, {-2, -8} } },
	[174] = { .set = { {-1, -14}, {2, -11}, {-4, -11}, {-1, -9} } },
	[175] = { .set = { {-6, -14}, {1, -12}, {-5, -8}, {0, -8} } },
	[176] = { .set = { {-5, -14}, {-4, -11}, {-4, -9}, {-1, -9} } },
	[177] = { .set = { {-3, -12}, {-5, -10}, {0, -9}, {-1, -8} } },
	[178] = { .set = { {-1, -10}, {-4, -5}, {2, -5}, {-1, -7} } },
	[179] = { .set = { {-1, -12}, {-4, -9}, {2, -9}, {-1, -9} } },
	[180] = { .set = { {-1, -6}, {-3, -2}, {1, -2}, {-1, -7} } },
	[181] = { .set = { {3, -10}, {3, -6}, {-1, -5}, {-1, -9} } },
	[182] = { .set = { {2, -12}, {4, -10}, {-1, -9}, {0, -8} } },
	[183] = { .set = { {5, -9}, {3, -5}, {-1, -4}, {-1, -10} } },
	[184] = { .set = { {4, -10}, {4, -6}, {3, -4}, {-1, -8} } },
	[185] = { .set = { {3, -14}, {2, -11}, {2, -9}, {-1, -9} } },
	[186] = { .set = { {7, -10}, {4, -6}, {4, -5}, {-1, -9} } },
	[187] = { .set = { {1, -11}, {-4, -9}, {0, -6}, {-2, -9} } },
	[188] = { .set = { {4, -14}, {-3, -12}, {3, -8}, {-2, -8} } },
	[189] = { .set = { {5, -11}, {-1, -7}, {4, -5}, {-1, -8} } },
	[190] = { .set = { {-1, -12}, {2, -6}, {-4, -6}, {-1, -10} } },
	[191] = { .set = { {-1, -15}, {2, -12}, {-4, -12}, {-1, -10} } },
	[192] = { .set = { {-1, -13}, {1, -4}, {-3, -4}, {-1, -8} } },
	[193] = { .set = { {-3, -11}, {2, -9}, {-2, -6}, {0, -9} } },
	[194] = { .set = { {-6, -14}, {1, -12}, {-5, -8}, {0, -8} } },
	[195] = { .set = { {-7, -11}, {-1, -7}, {-6, -5}, {-1, -8} } },
	[196] = { .set = { {-6, -10}, {-6, -6}, {-5, -4}, {-1, -8} } },
	[197] = { .set = { {-5, -14}, {-4, -11}, {-4, -9}, {-1, -9} } },
	[198] = { .set = { {-9, -10}, {-6, -6}, {-6, -5}, {-1, -9} } },
	[199] = { .set = { {-5, -10}, {-5, -6}, {-1, -5}, {-1, -9} } },
	[200] = { .set = { {-4, -12}, {-6, -10}, {-1, -9}, {-2, -8} } },
	[201] = { .set = { {-7, -9}, {-5, -5}, {-1, -4}, {-1, -10} } },
	[202] = { .set = { {-1, -6}, {-3, -2}, {1, -2}, {-1, -7} } },
	[203] = { .set = { {-8, -8}, {-6, -4}, {-2, -3}, {-2, -9} } },
	[204] = { .set = { {-10, -9}, {-7, -5}, {-7, -4}, {-2, -8} } },
	[205] = { .set = { {-8, -11}, {-2, -7}, {-7, -5}, {-2, -8} } },
	[206] = { .set = { {-1, -13}, {1, -4}, {-3, -4}, {-1, -8} } },
	[207] = { .set = { {6, -11}, {0, -7}, {5, -5}, {0, -8} } },
	[208] = { .set = { {8, -9}, {5, -5}, {5, -4}, {0, -8} } },
	[209] = { .set = { {6, -8}, {4, -4}, {0, -3}, {0, -9} } },
	[210] = { .set = { {-1, -10}, {-4, -5}, {2, -5}, {-1, -7} } },
	[211] = { .set = { {-5, -10}, {-5, -6}, {-1, -5}, {-1, -9} } },
	[212] = { .set = { {-6, -10}, {-6, -6}, {-5, -4}, {-1, -8} } },
	[213] = { .set = { {-3, -11}, {2, -9}, {-2, -6}, {0, -9} } },
	[214] = { .set = { {-1, -12}, {2, -6}, {-4, -6}, {-1, -10} } },
	[215] = { .set = { {1, -11}, {-4, -9}, {0, -6}, {-2, -9} } },
	[216] = { .set = { {4, -10}, {4, -6}, {3, -4}, {-1, -8} } },
	[217] = { .set = { {3, -10}, {3, -6}, {-1, -5}, {-1, -9} } },
};

static const ax_anim *const sFlaaffyAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sFlaaffyAnimTable2[] = {
	AX_ANIM_PTR(sFlaaffyAnims_2_1),
	AX_ANIM_PTR(sFlaaffyAnims_2_2),
	AX_ANIM_PTR(sFlaaffyAnims_2_3),
	AX_ANIM_PTR(sFlaaffyAnims_2_4),
	AX_ANIM_PTR(sFlaaffyAnims_2_5),
	AX_ANIM_PTR(sFlaaffyAnims_2_6),
	AX_ANIM_PTR(sFlaaffyAnims_2_7),
	AX_ANIM_PTR(sFlaaffyAnims_2_8),
};

static const ax_anim *const sFlaaffyAnimTable3[] = {
	AX_ANIM_PTR(sFlaaffyAnims_3_1),
	AX_ANIM_PTR(sFlaaffyAnims_3_2),
	AX_ANIM_PTR(sFlaaffyAnims_3_3),
	AX_ANIM_PTR(sFlaaffyAnims_3_4),
	AX_ANIM_PTR(sFlaaffyAnims_3_5),
	AX_ANIM_PTR(sFlaaffyAnims_3_6),
	AX_ANIM_PTR(sFlaaffyAnims_3_7),
	AX_ANIM_PTR(sFlaaffyAnims_3_8),
};

static const ax_anim *const sFlaaffyAnimTable4[] = {
	AX_ANIM_PTR(sFlaaffyAnims_4_1),
	AX_ANIM_PTR(sFlaaffyAnims_4_2),
	AX_ANIM_PTR(sFlaaffyAnims_4_3),
	AX_ANIM_PTR(sFlaaffyAnims_4_4),
	AX_ANIM_PTR(sFlaaffyAnims_4_5),
	AX_ANIM_PTR(sFlaaffyAnims_4_6),
	AX_ANIM_PTR(sFlaaffyAnims_4_7),
	AX_ANIM_PTR(sFlaaffyAnims_4_8),
};

static const ax_anim *const sFlaaffyAnimTable5[] = {
	AX_ANIM_PTR(sFlaaffyAnims_5_1),
	AX_ANIM_PTR(sFlaaffyAnims_5_2),
	AX_ANIM_PTR(sFlaaffyAnims_5_3),
	AX_ANIM_PTR(sFlaaffyAnims_5_4),
	AX_ANIM_PTR(sFlaaffyAnims_5_5),
	AX_ANIM_PTR(sFlaaffyAnims_5_6),
	AX_ANIM_PTR(sFlaaffyAnims_5_7),
	AX_ANIM_PTR(sFlaaffyAnims_5_8),
};

static const ax_anim *const sFlaaffyAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
};

static const ax_anim *const sFlaaffyAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00398),
	AX_ANIM_PTR(gAxSharedAnim_00404),
	AX_ANIM_PTR(gAxSharedAnim_00415),
	AX_ANIM_PTR(gAxSharedAnim_00424),
	AX_ANIM_PTR(gAxSharedAnim_00436),
	AX_ANIM_PTR(gAxSharedAnim_00444),
	AX_ANIM_PTR(gAxSharedAnim_00454),
	AX_ANIM_PTR(gAxSharedAnim_00464),
};

static const ax_anim *const sFlaaffyAnimTable8[] = {
	AX_ANIM_PTR(sFlaaffyAnims_8_1),
	AX_ANIM_PTR(sFlaaffyAnims_8_2),
	AX_ANIM_PTR(sFlaaffyAnims_8_3),
	AX_ANIM_PTR(sFlaaffyAnims_8_4),
	AX_ANIM_PTR(sFlaaffyAnims_8_5),
	AX_ANIM_PTR(sFlaaffyAnims_8_6),
	AX_ANIM_PTR(sFlaaffyAnims_8_7),
	AX_ANIM_PTR(sFlaaffyAnims_8_8),
};

static const ax_anim *const sFlaaffyAnimTable9[] = {
	AX_ANIM_PTR(sFlaaffyAnims_9_1),
	AX_ANIM_PTR(sFlaaffyAnims_9_2),
	AX_ANIM_PTR(sFlaaffyAnims_9_3),
	AX_ANIM_PTR(sFlaaffyAnims_9_4),
	AX_ANIM_PTR(sFlaaffyAnims_9_5),
	AX_ANIM_PTR(sFlaaffyAnims_9_6),
	AX_ANIM_PTR(sFlaaffyAnims_9_7),
	AX_ANIM_PTR(sFlaaffyAnims_9_8),
};

static const ax_anim *const sFlaaffyAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00801),
	AX_ANIM_PTR(gAxSharedAnim_00813),
	AX_ANIM_PTR(gAxSharedAnim_00827),
	AX_ANIM_PTR(gAxSharedAnim_00838),
	AX_ANIM_PTR(gAxSharedAnim_00849),
	AX_ANIM_PTR(gAxSharedAnim_00862),
	AX_ANIM_PTR(gAxSharedAnim_00879),
	AX_ANIM_PTR(gAxSharedAnim_00889),
};

static const ax_anim *const sFlaaffyAnimTable11[] = {
	AX_ANIM_PTR(sFlaaffyAnims_11_1),
	AX_ANIM_PTR(sFlaaffyAnims_11_2),
	AX_ANIM_PTR(sFlaaffyAnims_11_3),
	AX_ANIM_PTR(sFlaaffyAnims_11_4),
	AX_ANIM_PTR(sFlaaffyAnims_11_5),
	AX_ANIM_PTR(sFlaaffyAnims_11_6),
	AX_ANIM_PTR(sFlaaffyAnims_11_7),
	AX_ANIM_PTR(sFlaaffyAnims_11_8),
};

static const ax_anim *const sFlaaffyAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01243),
	AX_ANIM_PTR(gAxSharedAnim_01326),
	AX_ANIM_PTR(gAxSharedAnim_01308),
	AX_ANIM_PTR(gAxSharedAnim_01292),
	AX_ANIM_PTR(gAxSharedAnim_01291),
	AX_ANIM_PTR(gAxSharedAnim_01280),
	AX_ANIM_PTR(gAxSharedAnim_01260),
	AX_ANIM_PTR(gAxSharedAnim_01244),
};

static const ax_anim *const sFlaaffyAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01335),
	AX_ANIM_PTR(gAxSharedAnim_01409),
	AX_ANIM_PTR(gAxSharedAnim_01397),
	AX_ANIM_PTR(gAxSharedAnim_01386),
	AX_ANIM_PTR(gAxSharedAnim_01374),
	AX_ANIM_PTR(gAxSharedAnim_01366),
	AX_ANIM_PTR(gAxSharedAnim_01358),
	AX_ANIM_PTR(gAxSharedAnim_01348),
};

static const ax_anim *const *const sAxAnimationsFlaaffy[] = {
	sFlaaffyAnimTable1,
	sFlaaffyAnimTable2,
	sFlaaffyAnimTable3,
	sFlaaffyAnimTable4,
	sFlaaffyAnimTable5,
	sFlaaffyAnimTable6,
	sFlaaffyAnimTable7,
	sFlaaffyAnimTable8,
	sFlaaffyAnimTable9,
	sFlaaffyAnimTable10,
	sFlaaffyAnimTable11,
	sFlaaffyAnimTable12,
	sFlaaffyAnimTable13,
};

static const ax_sprite *const sAxSpritesFlaaffy[] = {
	sFlaaffySprites1,
	sFlaaffySprites2,
	sFlaaffySprites3,
	sFlaaffySprites4,
	sFlaaffySprites5,
	sFlaaffySprites6,
	sFlaaffySprites7,
	sFlaaffySprites8,
	sFlaaffySprites9,
	sFlaaffySprites10,
	sFlaaffySprites11,
	sFlaaffySprites12,
	sFlaaffySprites13,
	sFlaaffySprites14,
	sFlaaffySprites15,
	sFlaaffySprites16,
	sFlaaffySprites17,
	sFlaaffySprites18,
	sFlaaffySprites19,
	sFlaaffySprites20,
	sFlaaffySprites21,
	sFlaaffySprites22,
	sFlaaffySprites23,
	sFlaaffySprites24,
	sFlaaffySprites25,
	sFlaaffySprites26,
	sFlaaffySprites27,
	sFlaaffySprites28,
	sFlaaffySprites29,
	sFlaaffySprites30,
	sFlaaffySprites31,
	sFlaaffySprites32,
	sFlaaffySprites33,
	sFlaaffySprites34,
	sFlaaffySprites35,
	sFlaaffySprites36,
	sFlaaffySprites37,
	sFlaaffySprites38,
	sFlaaffySprites39,
	sFlaaffySprites40,
	sFlaaffySprites41,
	sFlaaffySprites42,
};

static const axmain sAxMainFlaaffy = {
	.poses = sAxPosesFlaaffy,
	.animations = sAxAnimationsFlaaffy,
	.animCount = ARRAY_COUNT(sAxAnimationsFlaaffy),
	.spriteData = sAxSpritesFlaaffy,
	.positions = sAxPositionsFlaaffy,
};
