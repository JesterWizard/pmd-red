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
#include "music.h"
#include "music_util.h"
#include "pokemon.h"
#include "random.h"
#include "rescue_team_info.h"
#include "runtime.h"
#include "spinda_cafe.h"
#include "string_format.h"
#include "text_1.h"
#include "text_2.h"
#include "text_3.h"

/*
 * Recycle Shop (Wynaut / Wobbuffet), modelled on Explorers of Sky:
 *   Trade    — fixed offers "give N of item A, get item B"; offers unlock as the
 *              lifetime recycle count grows.
 *   Tickets  — recycle any 4 / 6 / 8 / 10 items for a Prize / Silver / Gold /
 *              Prism Ticket (rank-gated). Tickets are real items.
 *   Lottery  — hand in a ticket, pick one of three cards: loss / win / big win,
 *              each with its own prize pool per ticket tier. Big wins can award
 *              a higher ticket.
 *   Bonus    — rare free Prize Ticket draw right after a trade or exchange.
 */

enum RecycleMenuActions {
    REC_CANCEL = 1,
    REC_TRADE,
    REC_TICKETS,
    REC_LOTTERY,
    REC_INFO,
    REC_YES,
    REC_NO,
    REC_NEXT_PAGE,
    REC_OFFER_BASE = 20,   /* + offer index on page */
    REC_TIER_BASE = 40,    /* + ticket tier */
    REC_CARD_BASE = 50,    /* + card 0..2 */
};

enum RecycleStates {
    REC_INIT,
    REC_LEGACY_TICKET,
    REC_MAIN_PROMPT,
    REC_INFO_DLG,
    REC_BYE,
    REC_EXIT,
    /* Trade */
    REC_TRADE_MENU,
    REC_TRADE_NONE,
    REC_TRADE_CONFIRM,
    REC_TRADE_SHORT,
    REC_TRADE_DONE,
    /* Tickets */
    REC_TICKET_MENU,
    REC_TICKET_RANK,
    REC_TICKET_FEW_ITEMS,
    REC_PICK_ITEMS_DLG,
    REC_PICK_ITEMS,
    REC_CANT_ITEM,
    REC_ALREADY,
    REC_TICKET_DONE,
    /* Lottery */
    REC_LOTTERY_MENU,
    REC_NO_TICKET,
    REC_BONUS_DLG,
    REC_CARD_MENU,
    REC_CARD_RESULT,
    REC_BAG_FULL_NOTE,
};

enum RecycleOutcome {
    REC_OUTCOME_LOSS,
    REC_OUTCOME_WIN,
    REC_OUTCOME_BIG_WIN,
};

#define REC_MAX_PICK 10
#define REC_OFFERS_PER_PAGE 5
#define REC_BONUS_DRAW_CHANCE 32 /* 1 in N after a trade / exchange */
#define REC_WIN_JINGLE 0x137      /* same jingle as an achievement unlock */

typedef struct RecycleShopWork
{
    s32 currState;
    s32 fallbackState;
    s32 afterRewardState;
    u32 menuAction;
    /* Trade */
    s32 offerPage;
    s32 offerIds[REC_OFFERS_PER_PAGE];
    s32 offerCount;
    s32 chosenOffer;
    /* Tickets */
    s32 ticketTier;
    s32 targetCount;
    s32 pickedCount;
    s32 pickedIndices[REC_MAX_PICK];
    /* Lottery */
    s32 drawTier;
    bool8 bonusDraw;
    s32 outcome;
    u8 rewardItemId;
    MenuItem menuItems[10];
    u16 menuRestrict[10];
    u8 menuLabels[REC_OFFERS_PER_PAGE][FORMAT_BUFFER_LEN]; /* offer / ticket names */
    MonPortraitMsg monPortrait;
    MonPortraitMsg *monPortraitPtr;
    WindowTemplates windows;
} RecycleShopWork;

static EWRAM_INIT RecycleShopWork *sRecWork = {NULL};

#include "data/spinda_cafe.h"
#include "data/recycle_shop.h"

static void UpdateRecState(u32 newState);
static void SetupRecWindows(void);
static void UpdateRecDialogue(void);
static void HandleRecMainMenu(void);
static void HandleRecTradeMenu(void);
static void HandleRecTradeConfirm(void);
static void HandleRecTicketMenu(void);
static void HandleRecItemPick(void);
static void HandleRecLotteryMenu(void);
static void HandleRecCardMenu(void);

static bool8 CanRecycleItem(u8 itemId)
{
    u8 cat;

    if (itemId == ITEM_NOTHING)
        return FALSE;
    if (itemId == ITEM_STICK || itemId == ITEM_IRON_THORN
        || itemId == ITEM_SILVER_SPIKE || itemId == ITEM_GEO_PEBBLE)
        return FALSE;
    if (IsRecycleTicket(itemId))
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

/* Removes the toolbox slots in indices[0..count), highest index first so
 * ShiftItemsDownFrom keeps the remaining indices valid. */
static void RemoveInventorySlots(s32 *indices, s32 count)
{
    s32 i, j;

    for (i = 0; i < count; i++) {
        for (j = i + 1; j < count; j++) {
            if (indices[j] > indices[i]) {
                s32 t = indices[i];

                indices[i] = indices[j];
                indices[j] = t;
            }
        }
    }
    for (i = 0; i < count; i++)
        ShiftItemsDownFrom(indices[i]);
}

static s32 CountRecyclableInventory(void)
{
    s32 i, n = 0;

    for (i = 0; i < INVENTORY_SIZE; i++) {
        if (ItemExists(&gTeamInventoryRef->teamItems[i])
            && CanRecycleItem(gTeamInventoryRef->teamItems[i].id))
            n++;
    }
    return n;
}

/* Toolbox slots holding itemId (unequipped). Fills indices if non-NULL. */
static s32 FindInventorySlotsOf(u8 itemId, s32 *indices, s32 max)
{
    s32 i, n = 0;

    for (i = 0; i < INVENTORY_SIZE && n < max; i++) {
        Item *slot = &gTeamInventoryRef->teamItems[i];

        if (ItemExists(slot) && slot->id == itemId && !ItemInShop(slot)) {
            if (indices != NULL)
                indices[n] = i;
            n++;
        }
    }
    return n;
}

static s32 CountTicketsOfTier(s32 tier)
{
    return FindInventorySlotsOf(sTicketTiers[tier].itemId, NULL, INVENTORY_SIZE);
}

/* Adds to the toolbox, or storage when full. Returns TRUE if it went in the bag. */
static bool8 GiveRewardItem(u8 itemId)
{
    Item slot;

    ItemIdToItem(&slot, itemId, FALSE);
    sub_8090E14(gFormatBuffer_Items[0], &slot, NULL);
    sRecWork->rewardItemId = itemId;

    /* AddItemToInventory returns TRUE when the bag is full. */
    if (!AddItemToInventory(&slot))
        return TRUE;
    NoteAchievementItemObtained(itemId);
    MoveToStorage(&slot);
    return FALSE;
}

/* Shows the reward line next (or the "went to storage" note first). */
static void ShowReward(u8 itemId, u32 rewardState, u32 afterState)
{
    sRecWork->afterRewardState = afterState;
    if (GiveRewardItem(itemId)) {
        UpdateRecState(rewardState);
    }
    else {
        sRecWork->fallbackState = rewardState;
        UpdateRecState(REC_BAG_FULL_NOTE);
    }
}

/* After a trade / exchange: rare free draw, else back to the main menu. */
static u32 NextStateAfterRecycle(void)
{
    if (RandInt(REC_BONUS_DRAW_CHANCE) == 0) {
        sRecWork->bonusDraw = TRUE;
        sRecWork->drawTier = RECYCLE_TICKET_PRIZE;
        return REC_BONUS_DLG;
    }
    return REC_MAIN_PROMPT;
}

static s32 CountUnlockedOffers(void)
{
    s32 i, n = 0;

    for (i = 0; i < (s32)ARRAY_COUNT(sTradeOffers); i++) {
        if (gSpindaCafeData.itemsRecycled >= sTradeOffers[i].unlockAt)
            n++;
    }
    return n;
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
    sRecWork->menuAction = REC_TRADE;

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
        case REC_TRADE_MENU:
            HandleRecTradeMenu();
            break;
        case REC_TRADE_CONFIRM:
            HandleRecTradeConfirm();
            break;
        case REC_TICKET_MENU:
            HandleRecTicketMenu();
            break;
        case REC_PICK_ITEMS:
            HandleRecItemPick();
            break;
        case REC_LOTTERY_MENU:
            HandleRecLotteryMenu();
            break;
        case REC_CARD_MENU:
            HandleRecCardMenu();
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

static void AddMenuItem(s32 *n, const u8 *text, u32 action, bool8 disabled)
{
    sRecWork->menuItems[*n].text = text;
    sRecWork->menuItems[*n].menuAction = action;
    sRecWork->menuRestrict[*n] = disabled;
    (*n)++;
}

static void EndMenu(s32 n)
{
    sRecWork->menuItems[n].text = NULL;
    sRecWork->menuItems[n].menuAction = REC_CANCEL;
}

static void BuildRecMainMenu(void)
{
    s32 n = 0;

    MemoryFill16(sRecWork->menuRestrict, 0, sizeof(sRecWork->menuRestrict));
    AddMenuItem(&n, sRecTrade, REC_TRADE, FALSE);
    AddMenuItem(&n, sRecTickets, REC_TICKETS, FALSE);
    AddMenuItem(&n, sRecLottery, REC_LOTTERY, FALSE);
    AddMenuItem(&n, gCommonInfo[0], REC_INFO, FALSE);
    AddMenuItem(&n, gCommonCancel[0], REC_CANCEL, FALSE);
    EndMenu(n);
}

/* Page of unlocked offers. */
static void BuildRecTradeMenu(void)
{
    s32 n = 0;
    s32 i, seen = 0;
    s32 first = sRecWork->offerPage * REC_OFFERS_PER_PAGE;

    MemoryFill16(sRecWork->menuRestrict, 0, sizeof(sRecWork->menuRestrict));
    sRecWork->offerCount = 0;
    for (i = 0; i < (s32)ARRAY_COUNT(sTradeOffers) && sRecWork->offerCount < REC_OFFERS_PER_PAGE; i++) {
        Item tmp;

        if (gSpindaCafeData.itemsRecycled < sTradeOffers[i].unlockAt)
            continue;
        if (seen++ < first)
            continue;
        ItemIdToItem(&tmp, sTradeOffers[i].reward, FALSE);
        sub_8090E14(sRecWork->menuLabels[sRecWork->offerCount], &tmp, NULL);
        sRecWork->offerIds[sRecWork->offerCount] = i;
        AddMenuItem(&n, sRecWork->menuLabels[sRecWork->offerCount],
                    REC_OFFER_BASE + sRecWork->offerCount, FALSE);
        sRecWork->offerCount++;
    }
    if (CountUnlockedOffers() > REC_OFFERS_PER_PAGE)
        AddMenuItem(&n, sRecNextPage, REC_NEXT_PAGE, FALSE);
    AddMenuItem(&n, gCommonCancel[0], REC_CANCEL, FALSE);
    EndMenu(n);
}

static void BuildYesNoMenu(void)
{
    s32 n = 0;

    MemoryFill16(sRecWork->menuRestrict, 0, sizeof(sRecWork->menuRestrict));
    AddMenuItem(&n, gCommonYes[0], REC_YES, FALSE);
    AddMenuItem(&n, gCommonNo[0], REC_NO, FALSE);
    EndMenu(n);
}

static void BuildRecTicketMenu(void)
{
    s32 n = 0;
    s32 tier;

    MemoryFill16(sRecWork->menuRestrict, 0, sizeof(sRecWork->menuRestrict));
    for (tier = 0; tier < RECYCLE_TICKET_TIERS; tier++)
        AddMenuItem(&n, sTicketTiers[tier].menuText, REC_TIER_BASE + tier, FALSE);
    AddMenuItem(&n, gCommonCancel[0], REC_CANCEL, FALSE);
    EndMenu(n);
}

/* Tickets you hold, with counts. */
static void BuildRecLotteryMenu(void)
{
    s32 n = 0;
    s32 tier;

    MemoryFill16(sRecWork->menuRestrict, 0, sizeof(sRecWork->menuRestrict));
    for (tier = 0; tier < RECYCLE_TICKET_TIERS; tier++) {
        s32 count = CountTicketsOfTier(tier);

        if (count == 0)
            continue;
        sprintfStatic(sRecWork->menuLabels[tier], sRecTicketCountFmt,
                      gItemParametersData[sTicketTiers[tier].itemId].name, count);
        AddMenuItem(&n, sRecWork->menuLabels[tier], REC_TIER_BASE + tier, FALSE);
    }
    AddMenuItem(&n, gCommonCancel[0], REC_CANCEL, FALSE);
    EndMenu(n);
}

static void BuildRecCardMenu(void)
{
    s32 n = 0;

    MemoryFill16(sRecWork->menuRestrict, 0, sizeof(sRecWork->menuRestrict));
    AddMenuItem(&n, sRecCardLeft, REC_CARD_BASE + 0, FALSE);
    AddMenuItem(&n, sRecCardMiddle, REC_CARD_BASE + 1, FALSE);
    AddMenuItem(&n, sRecCardRight, REC_CARD_BASE + 2, FALSE);
    EndMenu(n);
}

static void SetOfferFormatArgs(const struct RecycleTradeOffer *offer)
{
    Item tmp;

    ItemIdToItem(&tmp, offer->reward, FALSE);
    sub_8090E14(gFormatBuffer_Items[0], &tmp, NULL);
    ItemIdToItem(&tmp, offer->cost, FALSE);
    sub_8090E14(gFormatBuffer_Items[1], &tmp, NULL);
    gFormatArgs[0] = offer->costCount;
}

static void ShowRecMessage(const u8 *text, u32 next)
{
    sRecWork->fallbackState = next;
    CreateDialogueBoxAndPortrait(text, 0, sRecWork->monPortraitPtr, 0x10D);
}

static void ShowRecMenu(const u8 *text, u32 defaultAction)
{
    CreateMenuDialogueBoxAndPortrait(text, 0, defaultAction, sRecWork->menuItems,
                                     sRecWork->menuRestrict, 4, 0, sRecWork->monPortraitPtr, 0xC);
}

static void UpdateRecDialogue(void)
{
    switch (sRecWork->currState) {
        case REC_INIT:
            ShowRecMessage(RECYCLE_WELCOME,
                gSpindaCafeData.ticketType != CAFE_TICKET_NONE ? REC_LEGACY_TICKET : REC_MAIN_PROMPT);
            break;
        case REC_LEGACY_TICKET: {
            /* Saves from before tickets were items held one abstract ticket. */
            u8 itemId = LegacyTicketItem(gSpindaCafeData.ticketType);

            gSpindaCafeData.ticketType = CAFE_TICKET_NONE;
            sRecWork->afterRewardState = REC_MAIN_PROMPT;
            if (GiveRewardItem(itemId)) {
                ShowRecMessage(RECYCLE_LEGACY_TICKET, REC_MAIN_PROMPT);
            }
            else {
                sRecWork->fallbackState = REC_MAIN_PROMPT;
                CreateDialogueBoxAndPortrait(RECYCLE_BAG_FULL, 0, sRecWork->monPortraitPtr, 0x10D);
            }
            break;
        }
        case REC_MAIN_PROMPT:
            sRecWork->bonusDraw = FALSE;
            BuildRecMainMenu();
            ShowRecMenu(RECYCLE_HOW_MAY, sRecWork->menuAction);
            break;
        case REC_INFO_DLG:
            ShowRecMessage(RECYCLE_INFO, REC_MAIN_PROMPT);
            break;
        case REC_BYE:
            ShowRecMessage(RECYCLE_BYE, REC_EXIT);
            break;

        case REC_TRADE_MENU:
            BuildRecTradeMenu();
            gFormatArgs[0] = gSpindaCafeData.itemsRecycled;
            ShowRecMenu(RECYCLE_TRADE_PROMPT, REC_OFFER_BASE);
            break;
        case REC_TRADE_NONE:
            ShowRecMessage(RECYCLE_TRADE_NONE, REC_MAIN_PROMPT);
            break;
        case REC_TRADE_CONFIRM:
            SetOfferFormatArgs(&sTradeOffers[sRecWork->chosenOffer]);
            BuildYesNoMenu();
            ShowRecMenu(RECYCLE_TRADE_CONFIRM, REC_YES);
            break;
        case REC_TRADE_SHORT:
            SetOfferFormatArgs(&sTradeOffers[sRecWork->chosenOffer]);
            ShowRecMessage(RECYCLE_TRADE_SHORT, REC_TRADE_MENU);
            break;
        case REC_TRADE_DONE:
            ShowRecMessage(RECYCLE_GOT_ITEM, sRecWork->afterRewardState);
            break;

        case REC_TICKET_MENU:
            BuildRecTicketMenu();
            ShowRecMenu(RECYCLE_TICKET_PROMPT, REC_TIER_BASE);
            break;
        case REC_TICKET_RANK:
            ShowRecMessage(sTicketTiers[sRecWork->ticketTier].rankText, REC_TICKET_MENU);
            break;
        case REC_TICKET_FEW_ITEMS:
            gFormatArgs[0] = sRecWork->targetCount;
            ShowRecMessage(RECYCLE_TICKET_FEW_ITEMS, REC_TICKET_MENU);
            break;
        case REC_PICK_ITEMS_DLG:
            gFormatArgs[0] = sRecWork->targetCount - sRecWork->pickedCount;
            ShowRecMessage(RECYCLE_PICK_ITEMS, REC_PICK_ITEMS);
            break;
        case REC_PICK_ITEMS:
            sub_801A5D8(1, 3, NULL, 10);
            sub_801A8D0(TRUE);
            break;
        case REC_CANT_ITEM:
            ShowRecMessage(RECYCLE_CANT_RECYCLE, REC_PICK_ITEMS_DLG);
            break;
        case REC_ALREADY:
            ShowRecMessage(RECYCLE_ALREADY_PICKED, REC_PICK_ITEMS_DLG);
            break;
        case REC_TICKET_DONE:
            ShowRecMessage(RECYCLE_GOT_TICKET, sRecWork->afterRewardState);
            break;

        case REC_LOTTERY_MENU:
            BuildRecLotteryMenu();
            ShowRecMenu(RECYCLE_LOTTERY_PROMPT, REC_TIER_BASE);
            break;
        case REC_NO_TICKET:
            ShowRecMessage(RECYCLE_NO_TICKET, REC_MAIN_PROMPT);
            break;
        case REC_BONUS_DLG:
            ShowRecMessage(RECYCLE_BONUS_DRAW, REC_CARD_MENU);
            break;
        case REC_CARD_MENU:
            BuildRecCardMenu();
            ShowRecMenu(sTicketTiers[sRecWork->drawTier].drawText, REC_CARD_BASE + 1);
            break;
        case REC_CARD_RESULT:
            if (sRecWork->outcome == REC_OUTCOME_BIG_WIN)
                ShowRecMessage(RECYCLE_LOTTERY_BIG, sRecWork->afterRewardState);
            else if (sRecWork->outcome == REC_OUTCOME_WIN)
                ShowRecMessage(RECYCLE_LOTTERY_WIN, sRecWork->afterRewardState);
            else
                ShowRecMessage(RECYCLE_LOTTERY_LOSS, sRecWork->afterRewardState);
            break;
        case REC_BAG_FULL_NOTE:
            /* fallbackState already holds the reward line to show next. */
            CreateDialogueBoxAndPortrait(RECYCLE_BAG_FULL, 0, sRecWork->monPortraitPtr, 0x10D);
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
        case REC_TRADE:
            sRecWork->offerPage = 0;
            UpdateRecState(CountUnlockedOffers() == 0 ? REC_TRADE_NONE : REC_TRADE_MENU);
            break;
        case REC_TICKETS:
            UpdateRecState(REC_TICKET_MENU);
            break;
        case REC_LOTTERY: {
            s32 tier;
            bool8 any = FALSE;

            for (tier = 0; tier < RECYCLE_TICKET_TIERS; tier++) {
                if (CountTicketsOfTier(tier) != 0)
                    any = TRUE;
            }
            UpdateRecState(any ? REC_LOTTERY_MENU : REC_NO_TICKET);
            break;
        }
    }
}

static void HandleRecTradeMenu(void)
{
    s32 menuAction;

    if (sub_80144A4(&menuAction))
        return;

    if (menuAction == REC_NEXT_PAGE) {
        sRecWork->offerPage++;
        if (sRecWork->offerPage * REC_OFFERS_PER_PAGE >= CountUnlockedOffers())
            sRecWork->offerPage = 0;
        UpdateRecState(REC_TRADE_MENU);
        return;
    }
    if (menuAction >= REC_OFFER_BASE && menuAction < REC_OFFER_BASE + sRecWork->offerCount) {
        sRecWork->chosenOffer = sRecWork->offerIds[menuAction - REC_OFFER_BASE];
        UpdateRecState(REC_TRADE_CONFIRM);
        return;
    }
    UpdateRecState(REC_MAIN_PROMPT);
}

static void HandleRecTradeConfirm(void)
{
    s32 menuAction;
    const struct RecycleTradeOffer *offer;
    s32 slots[REC_MAX_PICK];

    if (sub_80144A4(&menuAction))
        return;

    if (menuAction != REC_YES) {
        UpdateRecState(REC_TRADE_MENU);
        return;
    }

    offer = &sTradeOffers[sRecWork->chosenOffer];
    if (FindInventorySlotsOf(offer->cost, slots, offer->costCount) < offer->costCount) {
        UpdateRecState(REC_TRADE_SHORT);
        return;
    }
    RemoveInventorySlots(slots, offer->costCount);
    NoteSpindaCafeItemsRecycled(offer->costCount);
    ShowReward(offer->reward, REC_TRADE_DONE, NextStateAfterRecycle());
}

static void HandleRecTicketMenu(void)
{
    s32 menuAction;
    const struct RecycleTicketTier *tier;

    if (sub_80144A4(&menuAction))
        return;

    if (menuAction < REC_TIER_BASE || menuAction >= REC_TIER_BASE + RECYCLE_TICKET_TIERS) {
        UpdateRecState(REC_MAIN_PROMPT);
        return;
    }

    sRecWork->ticketTier = menuAction - REC_TIER_BASE;
    tier = &sTicketTiers[sRecWork->ticketTier];
    sRecWork->targetCount = tier->recycleCount;
    if (GetRescueTeamRank() < tier->minRank) {
        UpdateRecState(REC_TICKET_RANK);
        return;
    }
    if (CountRecyclableInventory() < sRecWork->targetCount) {
        UpdateRecState(REC_TICKET_FEW_ITEMS);
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
            if (sRecWork->pickedCount < sRecWork->targetCount) {
                UpdateRecState(REC_PICK_ITEMS_DLG);
                break;
            }
            RemoveInventorySlots(sRecWork->pickedIndices, sRecWork->pickedCount);
            NoteSpindaCafeItemsRecycled(sRecWork->pickedCount);
            ShowReward(sTicketTiers[sRecWork->ticketTier].itemId, REC_TICKET_DONE, NextStateAfterRecycle());
            break;
        }
        case 2:
            sub_801A928();
            UpdateRecState(REC_MAIN_PROMPT);
            break;
    }
}

static void HandleRecLotteryMenu(void)
{
    s32 menuAction;
    s32 tier;
    s32 slot[1];

    if (sub_80144A4(&menuAction))
        return;

    if (menuAction < REC_TIER_BASE || menuAction >= REC_TIER_BASE + RECYCLE_TICKET_TIERS) {
        UpdateRecState(REC_MAIN_PROMPT);
        return;
    }

    tier = menuAction - REC_TIER_BASE;
    if (FindInventorySlotsOf(sTicketTiers[tier].itemId, slot, 1) == 0) {
        UpdateRecState(REC_NO_TICKET);
        return;
    }
    RemoveInventorySlots(slot, 1);
    sRecWork->drawTier = tier;
    sRecWork->bonusDraw = FALSE;
    UpdateRecState(REC_CARD_MENU);
}

static u8 PickFromPool(const struct RecyclePrizePool *pool)
{
    return pool->items[RandInt(pool->count)];
}

static void HandleRecCardMenu(void)
{
    s32 menuAction;
    const struct RecycleTicketTier *tier;
    s32 roll;
    u8 prize;

    if (sub_80144A4(&menuAction))
        return;

    /* Which card is cosmetic; the outcome is rolled from the ticket's odds. */
    tier = &sTicketTiers[sRecWork->drawTier];
    roll = RandInt(100);
    if (roll < tier->lossChance) {
        sRecWork->outcome = REC_OUTCOME_LOSS;
        prize = PickFromPool(&tier->lossPool);
    }
    else if (roll < tier->lossChance + tier->winChance) {
        sRecWork->outcome = REC_OUTCOME_WIN;
        prize = PickFromPool(&tier->winPool);
    }
    else {
        sRecWork->outcome = REC_OUTCOME_BIG_WIN;
        prize = PickFromPool(&tier->bigWinPool);
    }
    if (sRecWork->outcome != REC_OUTCOME_LOSS)
        PlayFanfareSE(REC_WIN_JINGLE, 0x100);
    ShowReward(prize, REC_CARD_RESULT, REC_MAIN_PROMPT);
}
