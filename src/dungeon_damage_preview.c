#include "global.h"
#include "globaldata.h"
#include "runtime.h"
#include "constants/colors.h"
#include "constants/ability.h"
#include "constants/iq_skill.h"
#include "constants/move.h"
#include "constants/move_id.h"
#include "constants/status.h"
#include "constants/targeting.h"
#include "code_800D090.h"
#include "dungeon_action.h"
#include "dungeon_damage.h"
#include "dungeon_damage_preview.h"
#include "dungeon_engine.h"
#include "dungeon_logic.h"
#include "dungeon_move.h"
#include "dungeon_move_util.h"
#include "dungeon_strings.h"
#include "dungeon_submenu.h"
#include "dungeon_util.h"
#include "dungeon_vram.h"
#include "menu_input.h"
#include "moves.h"
#include "number_util.h"
#include "structs/str_damage.h"
#include "structs/str_dungeon.h"
#include "structs/str_text.h"
#include "string_format.h"
#include "text_1.h"
#include "text_3.h"

static Entity *GetPreviewEnemyTarget(Entity *attacker, Move *move)
{
    Entity *targets[MAX_MOVE_TARGETS + 1];
    s32 i;

    targets[0] = NULL;
    SetTargetsForMove(targets, attacker, move);
    for (i = 0; i < MAX_MOVE_TARGETS && targets[i] != NULL; i++) {
        Entity *target = targets[i];
        if (!EntityIsValid(target) || target == attacker)
            continue;
        if (GetTreatmentBetweenMonsters(attacker, target, TRUE, FALSE) == TREATMENT_TREAT_AS_ENEMY)
            return target;
    }
    return NULL;
}

static void CalcPreviewDamageRange(Entity *attacker, Entity *target, Move *move, s32 *minOut, s32 *maxOut)
{
    struct DamageStruct dmgStruct;
    EntityInfo *atkInfo = GetEntInfo(attacker);
    EntityInfo *tgtInfo = GetEntInfo(target);
    u16 savedAtkVis = atkInfo->visualFlags;
    u16 savedAtkPrev = atkInfo->previousVisualFlags;
    u16 savedTgtVis = tgtInfo->visualFlags;
    u16 savedTgtPrev = tgtInfo->previousVisualFlags;
    u8 savedUnk152 = tgtInfo->unk152;
    s32 moveType = GetMoveTypeForMonster(attacker, move);
    s32 movePower = GetMovePower(attacker, move);
    s32 critChance = GetMoveCritChance(move);
    s24_8 modifier = (move->id == MOVE_REGULAR_ATTACK) ? IntToF248(0.5) : IntToF248(1);
    s32 minDmg;
    s32 maxDmg;

    gCalcDamagePreviewMode = CALC_DAMAGE_PREVIEW_MIN;
    CalcDamage(attacker, target, moveType, movePower, critChance, &dmgStruct, modifier, move->id, TRUE);
    minDmg = dmgStruct.dmg;

    atkInfo->visualFlags = savedAtkVis;
    atkInfo->previousVisualFlags = savedAtkPrev;
    tgtInfo->visualFlags = savedTgtVis;
    tgtInfo->previousVisualFlags = savedTgtPrev;
    tgtInfo->unk152 = savedUnk152;

    gCalcDamagePreviewMode = CALC_DAMAGE_PREVIEW_MAX;
    CalcDamage(attacker, target, moveType, movePower, critChance, &dmgStruct, modifier, move->id, TRUE);
    maxDmg = dmgStruct.dmg;

    gCalcDamagePreviewMode = CALC_DAMAGE_NORMAL;
    atkInfo->visualFlags = savedAtkVis;
    atkInfo->previousVisualFlags = savedAtkPrev;
    tgtInfo->visualFlags = savedTgtVis;
    tgtInfo->previousVisualFlags = savedTgtPrev;
    tgtInfo->unk152 = savedUnk152;

    if (minDmg > maxDmg) {
        s32 tmp = minDmg;
        minDmg = maxDmg;
        maxDmg = tmp;
    }
    *minOut = minDmg;
    *maxOut = maxDmg;
}

static bool8 MoveDealsHpDamage(Move *move)
{
    s32 power = GetMoveBasePower(move);

    /* PMD status moves use basePower 2 as a placeholder; real attacks either
     * have higher power or ignore Taunt (Air Cutter, Hidden Power, etc.). */
    if (power <= 0)
        return FALSE;
    if (power == 2 && !MoveIgnoresTaunted(move))
        return FALSE;
    return TRUE;
}

static void PrintDamagePreviewContents(Entity *attacker, Move *move, s32 windowId)
{
    u8 line[64];
    Entity *target;
    s32 minDmg = 0;
    s32 maxDmg = 0;
    s32 accuracy = 0;
    bool8 hasDamage;
    bool8 hasTarget;

    target = GetPreviewEnemyTarget(attacker, move);
    hasTarget = (target != NULL);
    hasDamage = hasTarget && MoveDealsHpDamage(move);

    if (hasTarget) {
        accuracy = GetCombinedAccuracyPercent(attacker, target, move);
        if (hasDamage)
            CalcPreviewDamageRange(attacker, target, move, &minDmg, &maxDmg);
    }

    sub_80073B8(windowId);

    PrintStringOnWindow(8, 0, gDamagePreviewEstimatedDamageLabel, windowId, '\0');
    if (hasDamage)
        sprintfStatic(line, _("{color}%c%d-%d{reset}"), COLOR_YELLOW, minDmg, maxDmg);
    else
        sprintfStatic(line, _("{color}%c0{reset}"), COLOR_YELLOW);
    PrintFormattedStringOnWindow(8, 12, line, windowId, '\0');

    PrintStringOnWindow(8, 24, gDamagePreviewAccuracyLabel, windowId, '\0');
    if (hasTarget)
        sprintfStatic(line, _("{color}%c%d%%{reset}"), COLOR_YELLOW, accuracy);
    else
        sprintfStatic(line, _("{color}%c--{reset}"), COLOR_YELLOW);
    PrintFormattedStringOnWindow(8, 36, line, windowId, '\0');

    sub_80073E0(windowId);
}

void CreateDungeonMenuSubWindowWithDamagePreview(WindowTemplate *mainWindow, s32 subWindowX, Entity *attacker, Move *move)
{
    s32 i;
    bool8 showPreview = gRuntimeConfig.damage_preview && EntityIsValid(attacker) && move != NULL;
    WindowTemplates windows = {
        .id = {
            [0] = WIN_TEMPLATE_DUMMY,
            [1] = {
                .flags = WINTEMPLATE_FLAG_NONE,
                .type = WINDOW_TYPE_NORMAL,
                .pos = { 22, 4 },
                .width = 6,
                .height = 4,
                .totalHeight = 4,
                .unk12 = 0,
                .header = NULL,
            },
            [2] = WIN_TEMPLATE_DUMMY,
            [3] = WIN_TEMPLATE_DUMMY,
        }
    };

    windows.id[0] = *mainWindow;
    windows.id[0].flags = WINTEMPLATE_FLAG_x80;

    if (showPreview) {
        /* Separate box below the vanilla-sized moves window (pos.y=2, height=8). */
        windows.id[2].type = WINDOW_TYPE_NORMAL;
        windows.id[2].pos.x = 2;
        windows.id[2].pos.y = 12;
        windows.id[2].width = 18;
        windows.id[2].height = 6;
        windows.id[2].totalHeight = 6;
        windows.id[2].unk12 = 0;
        windows.id[2].header = NULL;
    }

    gDungeonMenu.menuIndex = 0;
    gDungeonMenu.entriesPerPage = gDungeonSubMenuItemsCount;
    gDungeonMenu.currPageEntries = gDungeonSubMenuItemsCount;
    gDungeonMenu.currPage = 0;
    gDungeonMenu.pagesCount = 0;
    gDungeonMenu.unk4 = 0;
    gDungeonMenu.firstEntryY = 0;
    gDungeonMenu.windowId = 1;
    gDungeonMenu.leftRightArrowsPos.x = 0;
    gDungeonMenu.leftRightArrowsPos.y = 0;
    gDungeonMenu.unk14 = gDungeonMenu.cursorArrowPos;

    ResetTouchScreenMenuInput(&gDungeonMenu.touchScreen);

    windows.id[1].pos.x = subWindowX;
    windows.id[1].width = 28 - subWindowX;
    windows.id[1].height = windows.id[1].totalHeight = CalcEntriesTotalHeight(gDungeonMenu.entriesPerPage, 0);
    DungeonShowWindows(&windows, FALSE);
    sub_80137B0(&gDungeonMenu, windows.id[1].height * 8);
    sub_80073B8(1);

    for (i = 0; i < gDungeonSubMenuItemsCount; i++) {
        s32 colorId, y;
        u8 text[20];

        colorId = CanSubMenuItemBeChosen(i) ? 7 : 2;
        sprintfStatic(text, _("{COLOR}%c%s"), colorId, GetDungeonSubMenuItemString(i));
        y = GetMenuEntryYCoord(&gDungeonMenu, i);
        PrintStringOnWindow(8, y, text, 1, 0);
    }
    sub_80073E0(1);

    if (showPreview)
        PrintDamagePreviewContents(attacker, move, 2);
}
