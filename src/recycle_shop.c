#include "global.h"
#include "globaldata.h"
#include "constants/colors.h"
#include "constants/item.h"
#include "constants/monster.h"
#include "achievements.h"
#include "common_strings.h"
#include "input.h"
#include "items.h"
#include "kecleon_bros4.h"
#include "memory.h"
#include "menu_input.h"
#include "music_util.h"
#include "pokemon.h"
#include "random.h"
#include "runtime.h"
#include "spinda_cafe.h"
#include "string_format.h"
#include "text_1.h"
#include "text_2.h"
#include "text_3.h"

enum RecycleMenuActions {
    REC_CANCEL = 1,
    REC_RECYCLE,
    REC_TICKET,
    REC_INFO,
    REC_EXCHANGE,
    REC_GET_TICKET,
    REC_COUNT_2 = 20,
    REC_COUNT_4 = 21,
    REC_COUNT_6 = 22,
    REC_COUNT_8 = 23,
    REC_COLOR_RED = 30,
    REC_COLOR_BLUE = 31,
    REC_COLOR_YELLOW = 32,
    REC_REWARD_BASE = 40,
};

enum RecycleStates {
    REC_INIT,
    REC_MAIN_PROMPT,
    REC_MAIN_MENU,
    REC_INFO_DLG,
    REC_NO_ITEMS,
    REC_PICK_COUNT_DLG,
    REC_PICK_COUNT,
    REC_PICK_ITEMS_DLG,
    REC_PICK_ITEMS,
    REC_CANT_ITEM,
    REC_ALREADY,
    REC_CHOOSE_REWARD_DLG,
    REC_CHOOSE_REWARD,
    REC_GOT_ITEM,
    REC_GOT_TICKET,
    REC_BAG_FULL_NOTE,
    REC_NO_TICKET,
    REC_LOTTERY_DLG,
    REC_LOTTERY_MENU,
    REC_LOTTERY_RESULT,
    REC_NEED_MORE,
    REC_BYE,
    REC_EXIT,
};

#define REC_MAX_PICK 8

typedef struct RecycleShopWork
{
    s32 currState;
    s32 fallbackState;
    u32 menuAction;
    s32 targetCount;
    s32 pickedCount;
    s32 pickedIndices[REC_MAX_PICK];
    s32 rewardItemId;
    s32 lotteryTier;
    MenuItem menuItems[12];
    u16 menuRestrict[12];
    MonPortraitMsg monPortrait;
    MonPortraitMsg *monPortraitPtr;
    WindowTemplates windows;
} RecycleShopWork;

static EWRAM_INIT RecycleShopWork *sRecWork = {NULL};

#include "data/spinda_cafe.h"

/* Catalog rewards by tier (item ids). */
static const u8 sRecycleCatalogTier[][6] = {
    { ITEM_ORAN_BERRY, ITEM_APPLE, ITEM_MAX_ELIXIR, ITEM_CHERI_BERRY, ITEM_PECHA_BERRY, ITEM_RAWST_BERRY },
    { ITEM_REVIVER_SEED, ITEM_WHITE_GUMMI, ITEM_BIG_APPLE, ITEM_LIFE_SEED, ITEM_JOY_SEED, ITEM_PROTEIN },
    { ITEM_REVIVER_SEED, ITEM_GOLD_GUMMI, ITEM_HUGE_APPLE, ITEM_IRON, ITEM_CALCIUM, ITEM_ZINC },
    { ITEM_REVIVER_ORB, ITEM_GOLD_GUMMI, ITEM_SILVER_GUMMI, ITEM_LIFE_SEED, ITEM_JOY_SEED, ITEM_GINSENG },
};

static const u8 sLotteryNormalPrizes[] = {
    ITEM_ORAN_BERRY, ITEM_APPLE, ITEM_MAX_ELIXIR, ITEM_CHERI_BERRY, ITEM_WHITE_GUMMI, ITEM_REVIVER_SEED,
};

static const u8 sLotteryBigPrizes[] = {
    ITEM_REVIVER_SEED, ITEM_GOLD_GUMMI, ITEM_LIFE_SEED, ITEM_JOY_SEED, ITEM_REVIVER_ORB, ITEM_GINSENG,
};

static void UpdateRecState(u32 newState);
static void SetupRecWindows(void);
static void UpdateRecDialogue(void);
static void BuildRecMainMenu(void);
static void BuildRecCountMenu(void);
static void BuildRecRewardMenu(void);
static void BuildRecLotteryMenu(void);
static void HandleRecMainMenu(void);
static void HandleRecCountMenu(void);
static void HandleRecRewardMenu(void);
static void HandleRecLotteryMenu(void);
static void HandleRecItemPick(void);
static bool8 CanRecycleItem(u8 itemId);
static bool8 IndexAlreadyPicked(s32 index);
static void RemovePickedItems(void);
static bool8 GiveRewardItem(u8 itemId);
static u8 TicketForCount(s32 count);

static bool8 CanRecycleItem(u8 itemId)
{
    u8 cat;

    if (itemId == ITEM_NOTHING)
        return FALSE;
    if (itemId == ITEM_STICK || itemId == ITEM_IRON_THORN
        || itemId == ITEM_SILVER_SPIKE || itemId == ITEM_GEO_PEBBLE)
        return FALSE;
    cat = GetItemCategory(itemId);
    if (cat == CATEGORY_THROWN_LINE || cat == CATEGORY_THROWN_ARC)
        return FALSE;
    if (cat == CATEGORY_POKE || cat == CATEGORY_LINK_BOX)
        return FALSE;
    return TRUE;
}

static bool8 IndexAlreadyPicked(s32 index)
{
    s32 i;

    for (i = 0; i < sRecWork->pickedCount; i++) {
        if (sRecWork->pickedIndices[i] == index)
            return TRUE;
    }
    return FALSE;
}

static void RemovePickedItems(void)
{
    s32 i, j;
    s32 indices[REC_MAX_PICK];

    for (i = 0; i < sRecWork->pickedCount; i++)
        indices[i] = sRecWork->pickedIndices[i];

    /* Highest index first so ShiftItemsDownFrom stays valid. */
    for (i = 0; i < sRecWork->pickedCount; i++) {
        for (j = i + 1; j < sRecWork->pickedCount; j++) {
            if (indices[j] > indices[i]) {
                s32 t = indices[i];

                indices[i] = indices[j];
                indices[j] = t;
            }
        }
    }

    for (i = 0; i < sRecWork->pickedCount; i++)
        ShiftItemsDownFrom(indices[i]);

    NoteSpindaCafeItemsRecycled(sRecWork->pickedCount);
}

static bool8 GiveRewardItem(u8 itemId)
{
    Item slot;

    ItemIdToItem(&slot, itemId, FALSE);
    sub_8090E14(gFormatBuffer_Items[0], &slot, NULL);
    sRecWork->rewardItemId = itemId;

    if (AddItemToInventory(&slot)) {
        NoteAchievementItemObtained(itemId);
        return TRUE;
    }

    MoveToStorage(&slot);
    NoteAchievementItemObtained(itemId);
    return FALSE;
}

static u8 TicketForCount(s32 count)
{
    if (count >= 8)
        return CAFE_TICKET_PRISM;
    if (count >= 6)
        return CAFE_TICKET_GOLD;
    if (count >= 4)
        return CAFE_TICKET_SILVER;
    return CAFE_TICKET_BRONZE;
}

bool8 CreateRecycleShop(s32 mode)
{
    OpenedFile *faceFile;
    u8 *monName;

    (void)mode;
    if (!gRuntimeConfig.spinda_cafe)
        return FALSE;

    ResetUnusedInputStruct();
    ShowWindows(NULL, TRUE, TRUE);
    sRecWork = MemoryAlloc(sizeof(RecycleShopWork), MEMALLOC_GROUP_8);
    MemoryFill8(sRecWork, 0, sizeof(RecycleShopWork));
    sRecWork->menuAction = REC_RECYCLE;

    CopyYellowMonsterNametoBuffer(gSpeakerNameBuffer, MONSTER_WYNAUT);
    CopyYellowMonsterNametoBuffer(gFormatBuffer_Monsters[7], MONSTER_WYNAUT);
    monName = GetMonSpecies(MONSTER_WYNAUT);
    strcpy(gFormatBuffer_Monsters[6], monName);

    sRecWork->monPortraitPtr = &sRecWork->monPortrait;
    faceFile = GetDialogueSpriteDataPtr(MONSTER_WYNAUT);
    sRecWork->monPortrait.faceFile = faceFile;
    sRecWork->monPortrait.faceData = (PortraitGfx *)faceFile->data;
    sRecWork->monPortrait.spriteId = 0;
    sRecWork->monPortrait.flip = FALSE;
    sRecWork->monPortrait.unkE = 0;
    sRecWork->monPortrait.pos.x = 2;
    sRecWork->monPortrait.pos.y = 8;

    UpdateRecState(REC_INIT);
    return TRUE;
}

u32 RecycleShopCallback(void)
{
    switch (sRecWork->currState) {
        case REC_MAIN_PROMPT:
            HandleRecMainMenu();
            break;
        case REC_PICK_COUNT_DLG:
            HandleRecCountMenu();
            break;
        case REC_CHOOSE_REWARD_DLG:
            HandleRecRewardMenu();
            break;
        case REC_LOTTERY_DLG:
            HandleRecLotteryMenu();
            break;
        case REC_PICK_ITEMS:
            HandleRecItemPick();
            break;
        case REC_EXIT:
            return 3;
        default: {
            s32 tmp;

            if (sub_80144A4(&tmp) == 0)
                UpdateRecState(sRecWork->fallbackState);
            break;
        }
    }
    return 0;
}

void DestroyRecycleShop(void)
{
    if (sRecWork != NULL) {
        CloseFile(sRecWork->monPortrait.faceFile);
        FREE_AND_SET_NULL(sRecWork);
    }
}

static void UpdateRecState(u32 newState)
{
    sRecWork->currState = newState;
    SetupRecWindows();
    UpdateRecDialogue();
}

static void SetupRecWindows(void)
{
    s32 i;

    RestoreSavedWindows(&sRecWork->windows);
    for (i = 0; i < 4; i++)
        sRecWork->windows.id[i] = sSpindaCafeDummyWin;
    ResetUnusedInputStruct();
    ShowWindows(&sRecWork->windows, TRUE, TRUE);
}

static void BuildRecMainMenu(void)
{
    s32 n = 0;

    MemoryFill16(sRecWork->menuRestrict, 0, sizeof(sRecWork->menuRestrict));
    sRecWork->menuItems[n].text = sRecycleItems;
    sRecWork->menuItems[n].menuAction = REC_RECYCLE;
    n++;
    sRecWork->menuItems[n].text = sPrizeTicket;
    sRecWork->menuItems[n].menuAction = REC_TICKET;
    n++;
    sRecWork->menuItems[n].text = gCommonInfo[0];
    sRecWork->menuItems[n].menuAction = REC_INFO;
    n++;
    sRecWork->menuItems[n].text = gCommonCancel[0];
    sRecWork->menuItems[n].menuAction = REC_CANCEL;
    n++;
    sRecWork->menuItems[n].text = NULL;
    sRecWork->menuItems[n].menuAction = REC_CANCEL;
}

static void BuildRecCountMenu(void)
{
    s32 n = 0;
    u8 tier = GetSpindaCafeCatalogTier();

    MemoryFill16(sRecWork->menuRestrict, 0, sizeof(sRecWork->menuRestrict));
    sRecWork->menuItems[n].text = sCount2;
    sRecWork->menuItems[n].menuAction = REC_COUNT_2;
    n++;
    sRecWork->menuItems[n].text = sCount4;
    sRecWork->menuItems[n].menuAction = REC_COUNT_4;
    if (tier < 2)
        sRecWork->menuRestrict[n] = 1;
    n++;
    sRecWork->menuItems[n].text = sCount6;
    sRecWork->menuItems[n].menuAction = REC_COUNT_6;
    if (tier < 3)
        sRecWork->menuRestrict[n] = 1;
    n++;
    sRecWork->menuItems[n].text = sCount8;
    sRecWork->menuItems[n].menuAction = REC_COUNT_8;
    if (tier < 4)
        sRecWork->menuRestrict[n] = 1;
    n++;
    sRecWork->menuItems[n].text = gCommonCancel[0];
    sRecWork->menuItems[n].menuAction = REC_CANCEL;
    n++;
    sRecWork->menuItems[n].text = NULL;
    sRecWork->menuItems[n].menuAction = REC_CANCEL;
}

static void BuildRecRewardMenu(void)
{
    s32 n = 0;
    u8 tier = GetSpindaCafeCatalogTier();
    const u8 *catalog = sRecycleCatalogTier[tier - 1];
    s32 i;

    MemoryFill16(sRecWork->menuRestrict, 0, sizeof(sRecWork->menuRestrict));

    sRecWork->menuItems[n].text = sExchangeCatalog;
    sRecWork->menuItems[n].menuAction = REC_EXCHANGE;
    n++;
    sRecWork->menuItems[n].text = sGetTicket;
    sRecWork->menuItems[n].menuAction = REC_GET_TICKET;
    n++;

    /* Show first 3 catalog names as direct picks when exchanging path expands — kept simple: Exchange opens subpick via actions 40+ */
    for (i = 0; i < 3; i++) {
        Item tmp;

        ItemIdToItem(&tmp, catalog[i], FALSE);
        sub_8090E14(gFormatBuffer_Items[i], &tmp, NULL);
        sRecWork->menuItems[n].text = gFormatBuffer_Items[i];
        sRecWork->menuItems[n].menuAction = REC_REWARD_BASE + i;
        n++;
    }

    sRecWork->menuItems[n].text = gCommonCancel[0];
    sRecWork->menuItems[n].menuAction = REC_CANCEL;
    n++;
    sRecWork->menuItems[n].text = NULL;
    sRecWork->menuItems[n].menuAction = REC_CANCEL;

    (void)catalog;
}

static void BuildRecLotteryMenu(void)
{
    s32 n = 0;

    MemoryFill16(sRecWork->menuRestrict, 0, sizeof(sRecWork->menuRestrict));
    sRecWork->menuItems[n].text = sColorRed;
    sRecWork->menuItems[n].menuAction = REC_COLOR_RED;
    n++;
    sRecWork->menuItems[n].text = sColorBlue;
    sRecWork->menuItems[n].menuAction = REC_COLOR_BLUE;
    n++;
    sRecWork->menuItems[n].text = sColorYellow;
    sRecWork->menuItems[n].menuAction = REC_COLOR_YELLOW;
    n++;
    sRecWork->menuItems[n].text = gCommonCancel[0];
    sRecWork->menuItems[n].menuAction = REC_CANCEL;
    n++;
    sRecWork->menuItems[n].text = NULL;
    sRecWork->menuItems[n].menuAction = REC_CANCEL;
}

static void UpdateRecDialogue(void)
{
    switch (sRecWork->currState) {
        case REC_INIT:
            sRecWork->fallbackState = REC_MAIN_PROMPT;
            CreateDialogueBoxAndPortrait(RECYCLE_WELCOME, 0, sRecWork->monPortraitPtr, 0x10D);
            break;
        case REC_MAIN_PROMPT:
            BuildRecMainMenu();
            CreateMenuDialogueBoxAndPortrait(RECYCLE_HOW_MAY, 0, sRecWork->menuAction,
                sRecWork->menuItems, sRecWork->menuRestrict, 4, 0, sRecWork->monPortraitPtr, 0xC);
            break;
        case REC_INFO_DLG:
            sRecWork->fallbackState = REC_MAIN_PROMPT;
            CreateDialogueBoxAndPortrait(RECYCLE_INFO, 0, sRecWork->monPortraitPtr, 0x10D);
            break;
        case REC_NO_ITEMS:
            sRecWork->fallbackState = REC_MAIN_PROMPT;
            CreateDialogueBoxAndPortrait(RECYCLE_NO_ITEMS, 0, sRecWork->monPortraitPtr, 0x10D);
            break;
        case REC_PICK_COUNT_DLG:
            BuildRecCountMenu();
            CreateMenuDialogueBoxAndPortrait(RECYCLE_PICK_COUNT, 0, REC_COUNT_2,
                sRecWork->menuItems, sRecWork->menuRestrict, 4, 0, sRecWork->monPortraitPtr, 0xC);
            break;
        case REC_PICK_ITEMS_DLG:
            gFormatArgs[0] = sRecWork->targetCount;
            sRecWork->fallbackState = REC_PICK_ITEMS;
            CreateDialogueBoxAndPortrait(RECYCLE_PICK_ITEMS, 0, sRecWork->monPortraitPtr, 0x10D);
            break;
        case REC_PICK_ITEMS:
            sub_801A5D8(1, 3, NULL, 10);
            sub_801A8D0(TRUE);
            break;
        case REC_CANT_ITEM:
            sRecWork->fallbackState = REC_PICK_ITEMS_DLG;
            CreateDialogueBoxAndPortrait(RECYCLE_CANT_RECYCLE, 0, sRecWork->monPortraitPtr, 0x10D);
            break;
        case REC_ALREADY:
            sRecWork->fallbackState = REC_PICK_ITEMS_DLG;
            CreateDialogueBoxAndPortrait(RECYCLE_ALREADY_PICKED, 0, sRecWork->monPortraitPtr, 0x10D);
            break;
        case REC_CHOOSE_REWARD_DLG:
            BuildRecRewardMenu();
            CreateMenuDialogueBoxAndPortrait(RECYCLE_CHOOSE_REWARD, 0, REC_EXCHANGE,
                sRecWork->menuItems, sRecWork->menuRestrict, 4, 0, sRecWork->monPortraitPtr, 0xC);
            break;
        case REC_GOT_ITEM:
            sRecWork->fallbackState = REC_MAIN_PROMPT;
            CreateDialogueBoxAndPortrait(RECYCLE_GOT_ITEM, 0, sRecWork->monPortraitPtr, 0x10D);
            break;
        case REC_GOT_TICKET:
            sRecWork->fallbackState = REC_MAIN_PROMPT;
            CreateDialogueBoxAndPortrait(RECYCLE_GOT_TICKET, 0, sRecWork->monPortraitPtr, 0x10D);
            break;
        case REC_BAG_FULL_NOTE:
            if (sRecWork->lotteryTier != 0)
                sRecWork->fallbackState = REC_LOTTERY_RESULT;
            else
                sRecWork->fallbackState = REC_GOT_ITEM;
            CreateDialogueBoxAndPortrait(RECYCLE_BAG_FULL, 0, sRecWork->monPortraitPtr, 0x10D);
            break;
        case REC_NO_TICKET:
            sRecWork->fallbackState = REC_MAIN_PROMPT;
            CreateDialogueBoxAndPortrait(RECYCLE_NO_TICKET, 0, sRecWork->monPortraitPtr, 0x10D);
            break;
        case REC_LOTTERY_DLG:
            BuildRecLotteryMenu();
            CreateMenuDialogueBoxAndPortrait(RECYCLE_LOTTERY, 0, REC_COLOR_RED,
                sRecWork->menuItems, sRecWork->menuRestrict, 4, 0, sRecWork->monPortraitPtr, 0xC);
            break;
        case REC_LOTTERY_RESULT:
            sRecWork->fallbackState = REC_MAIN_PROMPT;
            if (sRecWork->lotteryTier == 0)
                CreateDialogueBoxAndPortrait(RECYCLE_LOTTERY_LOSS, 0, sRecWork->monPortraitPtr, 0x10D);
            else if (sRecWork->lotteryTier == 2)
                CreateDialogueBoxAndPortrait(RECYCLE_LOTTERY_BIG, 0, sRecWork->monPortraitPtr, 0x10D);
            else
                CreateDialogueBoxAndPortrait(RECYCLE_LOTTERY_WIN, 0, sRecWork->monPortraitPtr, 0x10D);
            break;
        case REC_NEED_MORE:
            sRecWork->fallbackState = REC_MAIN_PROMPT;
            CreateDialogueBoxAndPortrait(RECYCLE_NEED_MORE, 0, sRecWork->monPortraitPtr, 0x10D);
            break;
        case REC_BYE:
            sRecWork->fallbackState = REC_EXIT;
            CreateDialogueBoxAndPortrait(RECYCLE_BYE, 0, sRecWork->monPortraitPtr, 0x10D);
            break;
        default:
            break;
    }
}

static void HandleRecMainMenu(void)
{
    s32 menuAction;

    if (sub_80144A4(&menuAction))
        return;

    sRecWork->menuAction = menuAction;
    switch (menuAction) {
        case REC_CANCEL:
            UpdateRecState(REC_BYE);
            break;
        case REC_INFO:
            UpdateRecState(REC_INFO_DLG);
            break;
        case REC_RECYCLE:
            if (GetNumberOfFilledInventorySlots() == 0)
                UpdateRecState(REC_NO_ITEMS);
            else
                UpdateRecState(REC_PICK_COUNT_DLG);
            break;
        case REC_TICKET:
            if (gSpindaCafeData.ticketType == CAFE_TICKET_NONE)
                UpdateRecState(REC_NO_TICKET);
            else
                UpdateRecState(REC_LOTTERY_DLG);
            break;
    }
}

static void HandleRecCountMenu(void)
{
    s32 menuAction;

    if (sub_80144A4(&menuAction))
        return;

    if (menuAction == REC_CANCEL) {
        UpdateRecState(REC_MAIN_PROMPT);
        return;
    }

    switch (menuAction) {
        case REC_COUNT_2:
            sRecWork->targetCount = 2;
            break;
        case REC_COUNT_4:
            sRecWork->targetCount = 4;
            break;
        case REC_COUNT_6:
            sRecWork->targetCount = 6;
            break;
        case REC_COUNT_8:
            sRecWork->targetCount = 8;
            break;
        default:
            return;
    }

    if (GetNumberOfFilledInventorySlots() < sRecWork->targetCount) {
        UpdateRecState(REC_NO_ITEMS);
        return;
    }

    sRecWork->pickedCount = 0;
    UpdateRecState(REC_PICK_ITEMS_DLG);
}

static void HandleRecItemPick(void)
{
    switch (sub_801A6E8(TRUE)) {
        case 3: {
            s32 idx = sub_801A8AC();
            Item item = gTeamInventoryRef->teamItems[idx];

            sub_801A928();
            if (!CanRecycleItem(item.id)) {
                UpdateRecState(REC_CANT_ITEM);
                break;
            }
            if (IndexAlreadyPicked(idx)) {
                UpdateRecState(REC_ALREADY);
                break;
            }
            sRecWork->pickedIndices[sRecWork->pickedCount++] = idx;
            if (sRecWork->pickedCount >= sRecWork->targetCount)
                UpdateRecState(REC_CHOOSE_REWARD_DLG);
            else
                UpdateRecState(REC_PICK_ITEMS_DLG);
            break;
        }
        case 2:
            sub_801A928();
            UpdateRecState(REC_MAIN_PROMPT);
            break;
    }
}

static void HandleRecRewardMenu(void)
{
    s32 menuAction;
    u8 tier = GetSpindaCafeCatalogTier();
    const u8 *catalog = sRecycleCatalogTier[tier - 1];

    if (sub_80144A4(&menuAction))
        return;

    if (menuAction == REC_CANCEL) {
        UpdateRecState(REC_MAIN_PROMPT);
        return;
    }

    if (menuAction == REC_GET_TICKET) {
        RemovePickedItems();
        gSpindaCafeData.ticketType = TicketForCount(sRecWork->targetCount);
        UpdateRecState(REC_GOT_TICKET);
        return;
    }

    if (menuAction == REC_EXCHANGE)
        menuAction = REC_REWARD_BASE;

    if (menuAction >= REC_REWARD_BASE && menuAction < REC_REWARD_BASE + 3) {
        u8 itemId = catalog[menuAction - REC_REWARD_BASE];
        bool8 inBag;

        RemovePickedItems();
        inBag = GiveRewardItem(itemId);
        if (!inBag)
            UpdateRecState(REC_BAG_FULL_NOTE);
        else
            UpdateRecState(REC_GOT_ITEM);
    }
}

static void HandleRecLotteryMenu(void)
{
    s32 menuAction;
    s32 roll;

    if (sub_80144A4(&menuAction))
        return;

    if (menuAction == REC_CANCEL) {
        UpdateRecState(REC_MAIN_PROMPT);
        return;
    }

    /* Color is cosmetic. */
    (void)menuAction;
    gSpindaCafeData.ticketType = CAFE_TICKET_NONE;
    roll = RandInt(100);
    if (roll < 35) {
        sRecWork->lotteryTier = 0;
        UpdateRecState(REC_LOTTERY_RESULT);
    }
    else if (roll < 90) {
        u8 itemId = sLotteryNormalPrizes[RandInt(ARRAY_COUNT(sLotteryNormalPrizes))];
        bool8 inBag;

        sRecWork->lotteryTier = 1;
        inBag = GiveRewardItem(itemId);
        if (!inBag)
            sRecWork->fallbackState = REC_LOTTERY_RESULT;
        UpdateRecState(inBag ? REC_LOTTERY_RESULT : REC_BAG_FULL_NOTE);
    }
    else {
        u8 itemId = sLotteryBigPrizes[RandInt(ARRAY_COUNT(sLotteryBigPrizes))];
        bool8 inBag;

        sRecWork->lotteryTier = 2;
        inBag = GiveRewardItem(itemId);
        if (!inBag)
            sRecWork->fallbackState = REC_LOTTERY_RESULT;
        UpdateRecState(inBag ? REC_LOTTERY_RESULT : REC_BAG_FULL_NOTE);
    }
}
