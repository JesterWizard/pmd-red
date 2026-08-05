#include "global.h"
#include "globaldata.h"
#include "constants/input.h"
#include "constants/item.h"
#include "structs/menu.h"
#include "text_3.h"
#include "code_800D090.h"
#include "music_util.h"
#include "code_8099360.h"
#include "input.h"
#include "items.h"
#include "kecleon_bros4.h"
#include "memory.h"
#include "menu_input.h"
#include "menu_work.h"
#include "string_format.h"
#include "text_1.h"
#include "text_2.h"
#include "runtime.h"

// This file seems to be the kecleon "sell" menu

// size: R=0xF4 | B=0xF0
typedef struct unkStruct_203B224
{
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u32 unk4[INVENTORY_SIZE];
    /* 0x54 */ MenuHeaderWindow unk54;
} unkStruct_203B224;

#define gUnknown_203B224 MENU_WORK(unkStruct_203B224, MENU_WORK_SLOT_1)
static EWRAM_INIT u16 gUnknown_203B228 = {0};
static EWRAM_INIT u16 gUnknown_203B22A = {0};

#include "data/kecleon_bros4.h"

static void SortInventoryItems(void);

static void sub_801A998(void);
static s32 sub_801AE24(u32);
static bool8 CanSelectItemForSell(s32 index);

// arm9.bin::02026BE4
bool8 sub_801A5D8(u32 param_1, s32 param_2, DungeonPos *param_3, u32 param_4)
{
    if (GetNumberOfFilledInventorySlots() == 0)
        return FALSE;

    param_4 = GetBagItemsPerPage();

    if (gUnknown_203B224 == NULL)
        gUnknown_203B224 = MemoryAlloc(sizeof(unkStruct_203B224), MEMALLOC_GROUP_8);

    gUnknown_203B224->unk0 = param_1;
    FillInventoryGaps();
    sub_801AE84();
    gUnknown_203B224->unk54.m.menuWinId = param_2;
    gUnknown_203B224->unk54.m.menuWindow = &gUnknown_203B224->unk54.m.windows.id[param_2];
    RestoreSavedWindows(&gUnknown_203B224->unk54.m.windows);
    gUnknown_203B224->unk54.m.windows.id[gUnknown_203B224->unk54.m.menuWinId] = sUnknown_80DB95C;
    gUnknown_203B224->unk54.m.menuWindow->header = &gUnknown_203B224->unk54.header;

    if (param_3 != NULL)
        gUnknown_203B224->unk54.m.windows.id[gUnknown_203B224->unk54.m.menuWinId].pos = *param_3;

    sub_8012D08(gUnknown_203B224->unk54.m.menuWindow, param_4);
    sub_8099690(1);
    ResetUnusedInputStruct();
    ShowWindows(&gUnknown_203B224->unk54.m.windows, TRUE, TRUE);
    CreateMenuOnWindow(&gUnknown_203B224->unk54.m.input, GetNumberOfFilledInventorySlots(), param_4, param_2);
    gUnknown_203B224->unk54.m.input.menuIndex = gUnknown_203B228;
    gUnknown_203B224->unk54.m.input.currPage = gUnknown_203B22A;
    MenuUpdatePagesData(&gUnknown_203B224->unk54.m.input);
    sub_801A998();
    sub_801A9E0();
    return TRUE;
}

// arm9.bin::02026954
u32 sub_801A6E8(bool8 param_1)
{
    if (param_1 == FALSE) {
        sub_8013660(&gUnknown_203B224->unk54.m.input);
        return 0;
    }

    switch (GetKeyPress(&gUnknown_203B224->unk54.m.input)) {
        case INPUT_B_BUTTON: {
            PlayMenuSoundEffect(MENU_SFX_BACK);
            return 2;
        }
        case INPUT_A_BUTTON: {
            switch (gUnknown_203B224->unk0) {
                case 0:
                case 1:
                case 2: {
                    if (gUnknown_203B224->unk4[sub_801A8AC()] != 0)
                        PlayMenuSoundEffect(MENU_SFX_FAIL);
                    else
                        PlayMenuSoundEffect(MENU_SFX_ACCEPT);
                    break;
                }
                case 3: {
                    if (sub_801AEA8() != 0 || sub_801ADA0(sub_801A8AC()))
                        PlayMenuSoundEffect(MENU_SFX_ACCEPT);
                    else
                        PlayMenuSoundEffect(MENU_SFX_FAIL);
                    break;
                }
                case 4: {
                    if (gRuntimeConfig.multi_select_selling
                        && (sub_801AEA8() != 0 || CanSelectItemForSell(sub_801A8AC())))
                        PlayMenuSoundEffect(MENU_SFX_ACCEPT);
                    else {
                        Item item = gTeamInventoryRef->teamItems[sub_801A8AC()];

                        if (IsShoppableItem(item.id) && GetActualSellPrice(&item) + gTeamInventoryRef->teamMoney <= MAX_TEAM_MONEY)
                            PlayMenuSoundEffect(MENU_SFX_ACCEPT);
                        else
                            PlayMenuSoundEffect(MENU_SFX_FAIL);
                    }
                    break;
                }
                case 5: {
                    PlayMenuSoundEffect(MENU_SFX_ACCEPT);
                    break;
                }
            }
            return 3;
        }
        case INPUT_START_BUTTON: {
            PlayMenuSoundEffect(MENU_SFX_INFO);
            return 4;
        }
        case INPUT_L_BUTTON:
        case INPUT_R_BUTTON: {
            if (gUnknown_203B224->unk0 == 3
                || (gUnknown_203B224->unk0 == 4 && gRuntimeConfig.multi_select_selling)) {
                s32 index = sub_801A8AC();
                bool8 canToggle;

                if (gUnknown_203B224->unk0 == 3)
                    canToggle = gUnknown_203B224->unk4[index] != 0 || sub_801ADA0(index);
                else
                    canToggle = gUnknown_203B224->unk4[index] != 0 || CanSelectItemForSell(index);

                if (canToggle) {
                    PlayMenuSoundEffect(MENU_SFX_TOGGLE);
                    gUnknown_203B224->unk4[index] ^= 1;
                    MenuCursorUpdate(&gUnknown_203B224->unk54.m.input, 0);
                    sub_801A9E0();
                    return 1;
                }

                PlayMenuSoundEffect(MENU_SFX_FAIL);
            }
            break;
        }
        case INPUT_SELECT_BUTTON: {
            if (gUnknown_203B224->unk0 != 2) {
                PlayMenuSoundEffect(MENU_SFX_SORT);
                SortInventoryItems();
                sub_801A9E0();
            }
            break;
        }
        default: {
            break;
        }
    }

    if (MenuCursorUpdate(&gUnknown_203B224->unk54.m.input, 1)) {
        sub_801A998();
        sub_801A9E0();
        return 1;
    }
    return 0;
}

// arm9.bin::02026934
s32 sub_801A8AC(void)
{
    return GET_CURRENT_MENU_ENTRY(gUnknown_203B224->unk54.m.input);
}

// arm9.bin::020268C0
void sub_801A8D0(bool8 r0)
{
    sub_8099690(1);
    ResetUnusedInputStruct();
    ShowWindows(&gUnknown_203B224->unk54.m.windows, FALSE, FALSE);
    FillInventoryGaps();
    gUnknown_203B224->unk54.m.input.totalEntriesCount = GetNumberOfFilledInventorySlots();
    MenuUpdatePagesData(&gUnknown_203B224->unk54.m.input);
    sub_801A998();
    sub_801A9E0();
    if (r0)
        AddMenuCursorSprite(&gUnknown_203B224->unk54.m.input);
}

// arm9.bin::02026818
void sub_801A928(void)
{
    if (gUnknown_203B224 != NULL) {
        gUnknown_203B228 = gUnknown_203B224->unk54.m.input.menuIndex;
        gUnknown_203B22A = gUnknown_203B224->unk54.m.input.currPage;
        gUnknown_203B224->unk54.m.windows.id[gUnknown_203B224->unk54.m.menuWinId] = sUnknown_80DB944;
        sub_8099690(0);
        ResetUnusedInputStruct();
        ShowWindows(&gUnknown_203B224->unk54.m.windows, TRUE, TRUE);
        MemoryFree(gUnknown_203B224);
        gUnknown_203B224 = NULL;
    }
}

static void sub_801A998(void)
{
    /* Rank rewards already puts "n/m" in the title; one tab avoids the broken multi-tab chrome. */
    if (gRuntimeConfig.rank_rewards) {
        gUnknown_203B224->unk54.header.count = 1;
        gUnknown_203B224->unk54.header.currId = 0;
    }
    else {
        gUnknown_203B224->unk54.header.count = gUnknown_203B224->unk54.m.input.pagesCount;
        gUnknown_203B224->unk54.header.currId = gUnknown_203B224->unk54.m.input.currPage;
    }
    gUnknown_203B224->unk54.header.width = 14;
    gUnknown_203B224->unk54.header.f3 = 0;
    ResetUnusedInputStruct();
    ShowWindows(&gUnknown_203B224->unk54.m.windows, TRUE, TRUE);
}

// arm9.bin::020262DC
void sub_801A9E0(void)
{
    s32 teamItemIndex;
    s32 r7;
    s32 x;
    u8 buf1[80]; // sp4
    Item item; // spC8

    CallPrepareTextbox_8008C54(gUnknown_203B224->unk54.m.menuWinId);
    sub_80073B8(gUnknown_203B224->unk54.m.menuWinId);
    x = gRuntimeConfig.rank_rewards ? 10 : (gUnknown_203B224->unk54.m.input.currPage * 8 + 10);

    sprintfStatic(buf1, sTeamToolboxFmt,
                  gUnknown_203B224->unk54.m.input.currPage + 1,
                  GetBagPageCount());
    PrintStringOnWindow(x, 0, buf1, gUnknown_203B224->unk54.m.menuWinId, 0);

    for (r7 = 0; r7 < gUnknown_203B224->unk54.m.input.currPageEntries; r7++) {
        teamItemIndex = (gUnknown_203B224->unk54.m.input.currPage * gUnknown_203B224->unk54.m.input.entriesPerPage) + r7;
        item = gTeamInventoryRef->teamItems[teamItemIndex];

        switch (gUnknown_203B224->unk0) {
            case 0: {
                sub_8090E14(buf1, &item, 0);
                PrintStringOnWindow(8, GetMenuEntryYCoord(&gUnknown_203B224->unk54.m.input, r7), buf1, gUnknown_203B224->unk54.m.menuWinId, 0);
                break;
            }
            case 1:
            case 2: {
                struct unkStruct_8090F58 thing; // sp54

                thing.unk0 = 0;
                thing.unk4 = 0;
                thing.unk8 = 1;
                item.flags = 1;
                sub_8090E14(buf1, &item, &thing);

                PrintStringOnWindow(8, GetMenuEntryYCoord(&gUnknown_203B224->unk54.m.input, r7), buf1, gUnknown_203B224->unk54.m.menuWinId, 0);
                break;
            }
            case 3: {
                struct unkStruct_8090F58 thing; // sp60

                thing.unk0 = 0;
                thing.unk4 = 0;
                thing.unk8 = 1;
                item.flags = 1;
                sub_8090E14(buf1, &item, &thing);

                if (gUnknown_203B224->unk4[teamItemIndex] != 0 || sub_801ADA0(teamItemIndex))
                    PrintStringOnWindow(8,GetMenuEntryYCoord(&gUnknown_203B224->unk54.m.input,r7), buf1, gUnknown_203B224->unk54.m.menuWinId, 0);
                else {
                    strncpy(gFormatBuffer_Items[0], buf1, 80);
                    PrintFormattedStringOnWindow(8, GetMenuEntryYCoord(&gUnknown_203B224->unk54.m.input, r7), sFmtMoveItem0, gUnknown_203B224->unk54.m.menuWinId, 0);
                }
                break;
            }
            case 4: {
                struct unkStruct_8090F58 thing; // sp6C
                u8 buf2[80]; // sp78

                if (IsShoppableItem(item.id)) {
                    /* Hide price while selected so it doesn't sit on the highlight bar. */
                    if (gRuntimeConfig.multi_select_selling && gUnknown_203B224->unk4[teamItemIndex] != 0) {
                        thing.unk0 = 0;
                        thing.unk4 = 0;
                        thing.unk8 = 1;
                        item.flags = 1;
                        sub_8090E14(buf1, &item, &thing);
                        PrintStringOnWindow(8, GetMenuEntryYCoord(&gUnknown_203B224->unk54.m.input, r7), buf1, gUnknown_203B224->unk54.m.menuWinId, 0);
                    }
                    else {
                        thing.unk0 = 3;
                        thing.unk4 = 0;
                        thing.unk6 = 88;
                        thing.unk8 = 1;
                        item.flags = 3;
                        sub_8090E14(buf1, &item, &thing);

                        if (gRuntimeConfig.multi_select_selling) {
                            if (CanSelectItemForSell(teamItemIndex))
                                PrintStringOnWindow(8, GetMenuEntryYCoord(&gUnknown_203B224->unk54.m.input, r7), buf1, gUnknown_203B224->unk54.m.menuWinId, 0);
                            else {
                                strncpy(gFormatBuffer_Items[0], buf1, 80);
                                PrintFormattedStringOnWindow(8, GetMenuEntryYCoord(&gUnknown_203B224->unk54.m.input, r7), sFmtMoveItem0, gUnknown_203B224->unk54.m.menuWinId, 0);
                            }
                        }
                        else if (GetActualSellPrice(&item) + gTeamInventoryRef->teamMoney > MAX_TEAM_MONEY) {
                            sprintfStatic(buf2, sFmtRed, buf1);
                            PrintStringOnWindow(8, GetMenuEntryYCoord(&gUnknown_203B224->unk54.m.input, r7), buf2, gUnknown_203B224->unk54.m.menuWinId, 0);
                        }
                        else
                            PrintStringOnWindow(8, GetMenuEntryYCoord(&gUnknown_203B224->unk54.m.input, r7), buf1, gUnknown_203B224->unk54.m.menuWinId, 0);
                    }
                }
                else {
                    sub_8090E14(buf1, &item, 0);
                    strncpy(gFormatBuffer_Items[0], buf1, 80);
                    PrintFormattedStringOnWindow(8, GetMenuEntryYCoord(&gUnknown_203B224->unk54.m.input, r7), sFmtMoveItem0, gUnknown_203B224->unk54.m.menuWinId, 0);
                }
                break;
            }
            case 5: {
                UNUSED struct unkStruct_8090F58 thingUnused; // sp6C
                struct unkStruct_8090F58 thing; // sp78

                thing.unk0 = 0;
                thing.unk4 = 0;
                thing.unk8 = 1;
                item.flags = 1;
                sub_8090E14(buf1, &item, &thing);

                if (IsGummiItem(item.id))
                    PrintStringOnWindow(8, GetMenuEntryYCoord(&gUnknown_203B224->unk54.m.input, r7), buf1, gUnknown_203B224->unk54.m.menuWinId, 0);
                else {
                    strncpy(gFormatBuffer_Items[0], buf1, 80);
                    PrintFormattedStringOnWindow(8, GetMenuEntryYCoord(&gUnknown_203B224->unk54.m.input, r7), sFmtMoveItem0, gUnknown_203B224->unk54.m.menuWinId, 0);
                }
                break;
            }
        }

        if (sub_801AED0(teamItemIndex) & 1)
            sub_8007B7C(gUnknown_203B224->unk54.m.menuWinId, 8, GetMenuEntryYCoord(&gUnknown_203B224->unk54.m.input, r7), (gUnknown_203B224->unk54.m.menuWindow->width - 2) * 8, 10);
    }

    sub_80073E0(gUnknown_203B224->unk54.m.menuWinId);
}

// arm9.bin::02026234
void sub_801AD34(u32 param_1)
{
    CallPrepareTextbox_8008C54(param_1);
    sub_80073B8(param_1);
    PrintStringOnWindow(6, 0, sItems, param_1, 0);
    PrintNumOnWindow(18, 13, GetNumberOfFilledInventorySlots(), 2, 7, param_1);
    PrintStringOnWindow(22, 13, sSlash, param_1, 0);
    PrintNumOnWindow(43, 13, GetBagCapacity(), 2, 7, param_1);
    sub_80073E0(param_1);
}

void DrawStorageCapacityWindow(u32 winId)
{
    if (!gRuntimeConfig.rank_rewards)
        return;

    CallPrepareTextbox_8008C54(winId);
    sub_80073B8(winId);
    PrintStringOnWindow(4, 0, sStorage, winId, 0);
    /* Same layout idea as sub_801AD34 Items n/m, but 3-digit (max 480). */
    PrintNumOnWindow(24, 13, GetStorageUsedCount(), 3, 7, winId);
    PrintStringOnWindow(28, 13, sSlash, winId, 0);
    PrintNumOnWindow(54, 13, GetStorageCapacity(), 3, 7, winId);
    sub_80073E0(winId);
}

bool8 sub_801ADA0(s32 param_1)
{
    s32 pending;
    s32 pendingCost;
    s32 selectedSameId;
    s32 selectedTotal;
    s32 invIndex;
    s32 earlier;
    Item item;
    Item other;
    bool8 alreadyCounted;

    item = gTeamInventoryRef->teamItems[param_1];
    if (!IsNotMoneyOrUsedTMItem(item.id))
        return FALSE;

    pending = GetStorageDepositQuantity(&item);
    selectedSameId = sub_801AE24(item.id);
    if (gTeamInventoryRef->teamStorage[item.id] + selectedSameId + pending > GetMaxStorageQuantity())
        return FALSE;

    /* Capacity: thrown stacks cost 1 only when opening a new id (dedupe selection). */
    selectedTotal = 0;
    for (invIndex = 0; invIndex < GetNumberOfFilledInventorySlots(); invIndex++) {
        if (gUnknown_203B224->unk4[invIndex] == 0)
            continue;
        other = gTeamInventoryRef->teamItems[invIndex];
        if (!IsNotMoneyOrUsedTMItem(other.id))
            continue;
        if (IsThrownItem(other.id)) {
            if (gTeamInventoryRef->teamStorage[other.id] != 0)
                continue;
            alreadyCounted = FALSE;
            for (earlier = 0; earlier < invIndex; earlier++) {
                if (gUnknown_203B224->unk4[earlier] != 0
                    && gTeamInventoryRef->teamItems[earlier].id == other.id) {
                    alreadyCounted = TRUE;
                    break;
                }
            }
            if (!alreadyCounted)
                selectedTotal++;
        }
        else {
            selectedTotal += GetStorageDepositQuantity(&other);
        }
    }

    if (IsThrownItem(item.id))
        pendingCost = (gTeamInventoryRef->teamStorage[item.id] == 0 && selectedSameId == 0) ? 1 : 0;
    else
        pendingCost = pending;

    if (GetStorageUsedCount() + selectedTotal + pendingCost > GetStorageCapacity())
        return FALSE;

    return TRUE;
}

/* Like sub_801ADA0, but for Kecleon sell multi-select (shoppable + money cap). */
static bool8 CanSelectItemForSell(s32 index)
{
    s32 selectedTotal;
    s32 invIndex;
    Item item;
    Item other;

    item = gTeamInventoryRef->teamItems[index];
    if (!IsShoppableItem(item.id))
        return FALSE;

    selectedTotal = 0;
    for (invIndex = 0; invIndex < GetNumberOfFilledInventorySlots(); invIndex++) {
        if (gUnknown_203B224->unk4[invIndex] != 0) {
            other = gTeamInventoryRef->teamItems[invIndex];
            if (IsShoppableItem(other.id))
                selectedTotal += GetActualSellPrice(&other);
        }
    }
    if (gTeamInventoryRef->teamMoney + selectedTotal + GetActualSellPrice(&item) > MAX_TEAM_MONEY)
        return FALSE;

    return TRUE;
}

static s32 sub_801AE24(u32 itemID)
{
    Item item;
    u16 count;
    s32 invIndex;

    count = 0;
    for (invIndex = 0; invIndex < GetNumberOfFilledInventorySlots(); invIndex++) {
        if (gUnknown_203B224->unk4[invIndex] != 0) {
            item = gTeamInventoryRef->teamItems[invIndex];

            if (item.id == itemID) {
                if (IsThrownItem(item.id))
                    count += item.quantity;
                else
                    count++;
            }
        }
    }
    return count;
}

void sub_801AE84(void)
{
    s32 index;

    for (index = 0; index < INVENTORY_SIZE; index++)
        gUnknown_203B224->unk4[index] = 0;
}

s32 sub_801AEA8(void)
{
    s32 index;
    s32 count;

    count = 0;
    for (index = 0; index < INVENTORY_SIZE; index++) {
        if (gUnknown_203B224->unk4[index] != 0)
            count++;
    }
    return count;
}

s32 sub_801AED0(s32 index)
{
    return gUnknown_203B224->unk4[index];
}

void sub_801AEE4(s32 index, s32 value)
{
    gUnknown_203B224->unk4[index] = value;
}

static void SortInventoryItems(void)
{
    Item *itemSlotR;
    u32 *itemIDR;
    u32 *base;
    s32 orderL;
    s32 orderR;
    u32 itemIDL;
    Item itemSlotL;
    s32 itemR;
    s32 itemL;

    for (itemL = 0; itemL < GetNumberOfFilledInventorySlots() - 1; itemL++) {
        for (itemR = itemL + 1; itemR < GetNumberOfFilledInventorySlots(); itemR++) {
            orderL = GetItemOrder(gTeamInventoryRef->teamItems[itemL].id);
            orderR = GetItemOrder(gTeamInventoryRef->teamItems[itemR].id);

            if (orderL > orderR
                         || (orderL == orderR && gTeamInventoryRef->teamItems[itemL].quantity < gTeamInventoryRef->teamItems[itemR].quantity)) {
                itemSlotL = gTeamInventoryRef->teamItems[itemL];
                itemSlotR = &gTeamInventoryRef->teamItems[itemR];
                gTeamInventoryRef->teamItems[itemL] = *itemSlotR;
                *itemSlotR = itemSlotL;

                base = gUnknown_203B224->unk4;
                itemIDL = gUnknown_203B224->unk4[itemL];
                itemIDR = &base[itemR];
                base[itemL] = *itemIDR;
                *itemIDR = itemIDL;
            }
        }
    }
}

UNUSED static unkStruct_203B224 *sub_801AF98(void)
{
    return gUnknown_203B224;
}
