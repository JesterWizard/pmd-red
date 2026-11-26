#include "global.h"
#include "globaldata.h"
#include "runtime.h"
#include "constants/main_menu.h"
#include "constants/wonder_mail.h"
#include "achievements_menu.h"
#include "code_803D0D8.h"
#include "input.h"
#include "main_menu1.h"
#include "main_menu2.h"
#include "memory.h"
#include "menu_input.h"
#include "save.h"
#include "text_1.h"
#include "text_3.h"
#include "sky_story.h"
#include "sky_jukebox.h"

static EWRAM_INIT MainMenu2Work *sUnknown_203B34C = {NULL};
static EWRAM_INIT u32 sUnknown_203B350 = {-1};
static EWRAM_INIT u32 sUnknown_203B354 = {MENU_SEND_ITEMS};

#include "data/main_menu2.h"

static void SetMainMenuItems(void);
static bool8 SetMainMenuText(void);
static const MenuItem *MaybeAppendExtraItems(const MenuItem *items, const WindowTemplate *win, const WindowTemplate **winOut);

static void sub_803623C(void);


static EWRAM_DATA MenuItem sMainMenuItemsExtra[10] = {0};
static EWRAM_DATA WindowTemplate sMainMenuWindowExtra = {0};

#ifdef SKY_STORY
/*
 * Explorers of Sky demake: EoS's top menu. The top level is New Game / Other,
 * or Continue (Revive Team, Awaiting Rescue) / Friend Rescue / Wonder Mail S /
 * Other; "Other" opens a second window (Adventure Log, Achievements, Trade
 * Items, Delete Save Data, Exit). Descriptions are EoS's, with the DS-only
 * parts (wireless, Nintendo WFC) changed to the GBA's.
 */
#define MENU_SKY_OTHER 60
#define MENU_SKY_EXIT  61
#define SKY_MENU_STATE_OTHER 14

static EWRAM_DATA MenuItem sSkyOtherItems[8] = {0};
static EWRAM_DATA WindowTemplate sSkyOtherWindow = {0};

static const MenuItem sSkyDescNewGame[] = {
    {_("Start an entirely new adventure."), 0xFFDE}, {_("  "), 0xFFDE}, {NULL, 0xFFDD} };
static const MenuItem sSkyDescContinue[] = {
    {_("Resume your adventure from your last"), 0xFFDE}, {_("save point."), 0xFFDE}, {NULL, 0xFFDD} };
static const MenuItem sSkyDescRevive[] = {
    {_("Resume your adventure from where your"), 0xFFDE}, {_("team was last defeated."), 0xFFDE}, {NULL, 0xFFDD} };
static const MenuItem sSkyDescAwaiting[] = {
    {_("You are waiting for rescue by a friend."), 0xFFDE}, {_("You may also choose to give up waiting."), 0xFFDE}, {NULL, 0xFFDD} };
static const MenuItem sSkyDescFriendRescue[] = {
    {_("Using a Game Link cable or passwords,"), 0xFFDE}, {_("friends may rescue each other."), 0xFFDE}, {NULL, 0xFFDD} };
static const MenuItem sSkyDescWonderMail[] = {
    {_("Using passwords, you can receive"), 0xFFDE}, {_("Wonder Mail S."), 0xFFDE}, {NULL, 0xFFDD} };
static const MenuItem sSkyDescOther[] = {
    {_("View saved game data, trade items,"), 0xFFDE}, {_("and more..."), 0xFFDE}, {NULL, 0xFFDD} };
static const MenuItem sSkyDescAdventureLog[] = {
    {_("Check your career as an adventurer."), 0xFFDE}, {_("  "), 0xFFDE}, {NULL, 0xFFDD} };
static const MenuItem sSkyDescAchievements[] = {
    {_("View achievements and rewards."), 0xFFDE}, {_("  "), 0xFFDE}, {NULL, 0xFFDD} };
static const MenuItem sSkyDescTradeItems[] = {
    {_("Using a Game Link cable, you can"), 0xFFDE}, {_("trade stored items with a friend."), 0xFFDE}, {NULL, 0xFFDD} };
static const MenuItem sSkyDescDeleteSave[] = {
    {_("This will delete your saved game data."), 0xFFDE}, {_("{COLOR RED}Caution{RESET}: This will delete it permanently!"), 0xFFDE}, {NULL, 0xFFDD} };
static const MenuItem sSkyDescJukebox[] = {
    {_("Listen to music from \"Explorers of Sky.\""), 0xFFDE}, {_("  "), 0xFFDE}, {NULL, 0xFFDD} };
static const MenuItem sSkyDescExit[] = {
    {_("Return to the Top Menu."), 0xFFDE}, {_("  "), 0xFFDE}, {NULL, 0xFFDD} };

static void SkySetWindow(WindowTemplate *win, s32 x, s32 width, s32 count)
{
    *win = sUnknown_80E59E0;
    win->pos.x = x;
    win->width = width;
    /* items are 12 px tall: 1.5 tiles each, as in Red's own menu windows */
    win->height = (count * 3 + 1) / 2;
    win->totalHeight = win->height;
}

/* EoS sizes its top-menu windows to the longest entry. */
static s32 SkyFitWidth(const MenuItem *items)
{
    s32 i, w = 0;

    for (i = 0; items[i].text != NULL; i++) {
        s32 lw = GetStringLineWidth(items[i].text);
        if (lw > w)
            w = lw;
    }
    return (w + 8 + 6 + 7) / 8;
}

static void SkyBuildTopMenu(void)
{
    s32 n = 0;

    if (sub_8011C34() == -1) {
        sMainMenuItemsExtra[n].text = _("New Game");
        sMainMenuItemsExtra[n++].menuAction = MENU_NEW_GAME;
    }
    else {
        if (CountMailType(WONDER_MAIL_TYPE_SOS) != 0) {
            sMainMenuItemsExtra[n].text = _("Awaiting Rescue");
            sMainMenuItemsExtra[n++].menuAction = MENU_AWAITING_RESCUE;
        }
        else if (CountMailType(WONDER_MAIL_TYPE_OKD) != 0) {
            sMainMenuItemsExtra[n].text = _("Revive Team");
            sMainMenuItemsExtra[n++].menuAction = MENU_CONTINUE;
        }
        else {
            sMainMenuItemsExtra[n].text = _("Continue");
            sMainMenuItemsExtra[n++].menuAction = MENU_CONTINUE;
        }
        sMainMenuItemsExtra[n].text = _("Friend Rescue");
        sMainMenuItemsExtra[n++].menuAction = MENU_FRIEND_RESCUE;
        if (sub_803D0D8()) {
            sMainMenuItemsExtra[n].text = _("Wonder Mail S");
            sMainMenuItemsExtra[n++].menuAction = MENU_WONDER_MAIL;
        }
    }
    sMainMenuItemsExtra[n].text = _("Other");
    sMainMenuItemsExtra[n++].menuAction = MENU_SKY_OTHER;
    sMainMenuItemsExtra[n].text = NULL;
    sMainMenuItemsExtra[n].menuAction = 0xFFDD;
    SkySetWindow(&sMainMenuWindowExtra, 2, SkyFitWidth(sMainMenuItemsExtra), n);
}

static void SkyOpenOtherMenu(void)
{
    s32 n = 0;

    sSkyOtherItems[n].text = _("Adventure Log");
    sSkyOtherItems[n++].menuAction = MENU_ADVENTURE_LOG;
    if (gRuntimeConfig.achievements) {
        sSkyOtherItems[n].text = _("Achievements");
        sSkyOtherItems[n++].menuAction = MENU_ACHIEVEMENTS;
    }
    if (sub_8011C34() != -1) {
        sSkyOtherItems[n].text = _("Trade Items");
        sSkyOtherItems[n++].menuAction = MENU_TRADE_ITEMS;
        sSkyOtherItems[n].text = _("Delete Save Data");
        sSkyOtherItems[n++].menuAction = MENU_DELETE_SAVE_PROMPT;
    }
    sSkyOtherItems[n].text = _("Sky Jukebox");
    sSkyOtherItems[n++].menuAction = MENU_SKY_JUKEBOX;
    sSkyOtherItems[n].text = _("Exit");
    sSkyOtherItems[n++].menuAction = MENU_SKY_EXIT;
    sSkyOtherItems[n].text = NULL;
    sSkyOtherItems[n].menuAction = 0xFFDD;
    SkySetWindow(&sSkyOtherWindow, 14, SkyFitWidth(sSkyOtherItems), n);

    SetMenuItems(sUnknown_203B34C->unk4, &sUnknown_203B34C->unk144, 1, &sSkyOtherWindow, sSkyOtherItems, TRUE, 0, TRUE);
    sUnknown_203B34C->currMenuChoice = -1;
    sUnknown_203B34C->unk0 = SKY_MENU_STATE_OTHER;
}

/* Showing a description re-shows every window, so both menus are redrawn. */
static void SkyRedrawOtherMenu(void)
{
    sub_8035CF4(sUnknown_203B34C->unk4, 0, FALSE);
    sub_8035CF4(sUnknown_203B34C->unk4, 1, TRUE);
    sub_8035CF4(sUnknown_203B34C->unk4, 2, FALSE);
}

/* Description line for whichever menu (0 = top, 1 = Other) has the cursor. */
static bool8 SkySetMenuText(s32 menuIndex)
{
    const MenuItem *items = sUnknown_203B34C->unk4[menuIndex].menuItems;
    u32 choice = items[sUnknown_203B34C->unk4[menuIndex].input.menuIndex].menuAction;
    const MenuItem *desc = NULL;

    if (sUnknown_203B34C->currMenuChoice == choice)
        return FALSE;
    sUnknown_203B34C->currMenuChoice = choice;
    sub_8035CC0(&sUnknown_203B34C->unk144, 2);
    sub_8035CC0(&sUnknown_203B34C->unk144, 3);

    switch (choice) {
        case MENU_NEW_GAME: desc = sSkyDescNewGame; break;
        case MENU_CONTINUE: desc = CountMailType(WONDER_MAIL_TYPE_OKD) != 0 ? sSkyDescRevive : sSkyDescContinue; break;
        case MENU_AWAITING_RESCUE: desc = sSkyDescAwaiting; break;
        case MENU_FRIEND_RESCUE: desc = sSkyDescFriendRescue; break;
        case MENU_WONDER_MAIL: desc = sSkyDescWonderMail; break;
        case MENU_SKY_OTHER: desc = sSkyDescOther; break;
        case MENU_ADVENTURE_LOG: desc = sSkyDescAdventureLog; break;
        case MENU_ACHIEVEMENTS: desc = sSkyDescAchievements; break;
        case MENU_TRADE_ITEMS: desc = sSkyDescTradeItems; break;
        case MENU_DELETE_SAVE_PROMPT: desc = sSkyDescDeleteSave; break;
        case MENU_SKY_JUKEBOX: desc = sSkyDescJukebox; break;
        case MENU_SKY_EXIT: desc = sSkyDescExit; break;
    }
    if (desc != NULL)
        SetMenuItems(sUnknown_203B34C->unk4, &sUnknown_203B34C->unk144, 2, &sUnknown_80E5CB4, desc, FALSE, 0, FALSE);
    return TRUE;
}
#endif

static const MenuItem *MaybeAppendExtraItems(const MenuItem *items, const WindowTemplate *win, const WindowTemplate **winOut)
{
    s32 i;
    s32 out;
    bool8 addedAchievements = FALSE;

    *winOut = win;
    if (!gRuntimeConfig.achievements)
        return items;

    out = 0;
    for (i = 0; items[i].text != NULL; i++) {
        sMainMenuItemsExtra[out++] = items[i];
        if (gRuntimeConfig.achievements
            && !addedAchievements
            && items[i].menuAction == MENU_ADVENTURE_LOG) {
            sMainMenuItemsExtra[out].text = _("Achievements");
            sMainMenuItemsExtra[out].menuAction = MENU_ACHIEVEMENTS;
            out++;
            addedAchievements = TRUE;
        }
    }

    sMainMenuItemsExtra[out].text = NULL;
    sMainMenuItemsExtra[out].menuAction = 0xFFDD;

    sMainMenuWindowExtra = *win;
    if (addedAchievements) {
        sMainMenuWindowExtra.height += 1;
        sMainMenuWindowExtra.totalHeight += 1;
    }
    *winOut = &sMainMenuWindowExtra;
    return sMainMenuItemsExtra;
}

void DrawMainMenu(void)
{
    s32 i;

    if (sUnknown_203B34C == NULL) {
        sUnknown_203B34C = MemoryAlloc(sizeof(MainMenu2Work), MEMALLOC_GROUP_8);
        MemoryFill8(sUnknown_203B34C, 0, sizeof(MainMenu2Work));
    }

    for (i = 0; i < 4; i++)
        sUnknown_203B34C->unk144.id[i] = sUnknown_80E59C8;

    ResetUnusedInputStruct();
    ShowWindows(&sUnknown_203B34C->unk144, TRUE, TRUE);
    SetMainMenuItems();
    sUnknown_203B34C->currMenuChoice = -1;

    if (SetMainMenuText())
        sub_8035CF4(sUnknown_203B34C->unk4, 2, FALSE);

    sub_8035CF4(sUnknown_203B34C->unk4, 0, TRUE);
    sUnknown_203B34C->unk0 = 1;
}

void CleanMainMenu(void)
{
    ResetUnusedInputStruct();
    ShowWindows(NULL, TRUE, TRUE);

    if (sUnknown_203B34C != NULL) {
        MemoryFree(sUnknown_203B34C);
        sUnknown_203B34C = NULL;
    }
}

u32 UpdateMainMenu(void)
{
    u32 nextMenu = MENU_NO_SCREEN_CHANGE;

    switch (sUnknown_203B34C->unk0) {
        case 1:
            sub_8012FD8(&sUnknown_203B34C->unk4[2]);

            if (!sub_8012FD8(sUnknown_203B34C->unk4))
                sub_8013114(sUnknown_203B34C->unk4, &nextMenu);

            if (SetMainMenuText()) {
                sub_8035CF4(sUnknown_203B34C->unk4, 0, TRUE);
                sub_8035CF4(sUnknown_203B34C->unk4, 2, FALSE);
            }

            switch (nextMenu) {
                case MENU_NO_SCREEN_CHANGE:
                     nextMenu = MENU_NO_SCREEN_CHANGE;
                     break;
                case 0xFFDD:
                    sUnknown_203B34C->unk0 = 1;
                    nextMenu = MENU_NO_SCREEN_CHANGE;
                    ResetUnusedInputStruct();
                    sub_8035CF4(sUnknown_203B34C->unk4, 0, TRUE);
                    sub_8035CF4(sUnknown_203B34C->unk4, 2, FALSE);
                    break;
                case MENU_TRADE_ITEMS:
                    sub_8035DA0();
                    sUnknown_203B350 = nextMenu;
                    break;
#ifdef SKY_STORY
                case MENU_SKY_OTHER:
                    sUnknown_203B350 = MENU_SKY_OTHER;
                    SkyOpenOtherMenu();
                    SkySetMenuText(1);
                    SkyRedrawOtherMenu();
                    nextMenu = MENU_NO_SCREEN_CHANGE;
                    break;
#endif
                case MENU_NEW_GAME:
                case MENU_AWAITING_RESCUE:
                case MENU_CONTINUE:
                case MENU_DELETE_SAVE_PROMPT:
                case MENU_DELETE_SAVE_CONFIRM:
                case MENU_ADVENTURE_LOG:
                case MENU_ACHIEVEMENTS:
                case MENU_FRIEND_RESCUE:
                case MENU_WONDER_MAIL:
                case MENU_DUAL_SLOT:
                case MENU_WIRELESS_COMMS:
                    sUnknown_203B350 = nextMenu;
                    break;
            }
            break;
        case 12:
            if (!sub_8012FD8(&sUnknown_203B34C->unk4[1]))
                sub_8013114(&sUnknown_203B34C->unk4[1], &nextMenu);

            switch (nextMenu) {
                case 0xFFDD:
                    sub_803623C();
                    sUnknown_203B34C->unk0 = 1;
                    nextMenu = MENU_NO_SCREEN_CHANGE;
                    break;
                case MENU_SEND_ITEMS:
                    sUnknown_203B354 = nextMenu;
                    nextMenu = MENU_TRADE_ITEMS;
                    break;
                case MENU_RECEIVE_ITEMS:
                    sUnknown_203B354 = nextMenu;
                    nextMenu = MENU_COMMUNICATION_2;
                    break;
                case MENU_NO_SCREEN_CHANGE:
                    nextMenu = MENU_NO_SCREEN_CHANGE;
                    break;
                default:
                    break;
            }
            break;
#ifdef SKY_STORY
        case SKY_MENU_STATE_OTHER:
            if (!sub_8012FD8(&sUnknown_203B34C->unk4[1]))
                sub_8013114(&sUnknown_203B34C->unk4[1], &nextMenu);
            if (SkySetMenuText(1))
                SkyRedrawOtherMenu();

            switch (nextMenu) {
                case MENU_NO_SCREEN_CHANGE:
                    break;
                case 0xFFDD:
                case MENU_SKY_EXIT:
                    /* back to the top menu, cursor on "Other" */
                    sUnknown_203B350 = MENU_SKY_OTHER;
                    sub_803623C();
                    sUnknown_203B34C->unk0 = 1;
                    nextMenu = MENU_NO_SCREEN_CHANGE;
                    break;
                case MENU_TRADE_ITEMS:
                    sub_8035DA0();
                    sUnknown_203B350 = MENU_SKY_OTHER;
                    break;
                default:
                    sUnknown_203B350 = MENU_SKY_OTHER;
                    break;
            }
            break;
#endif
        default:
        case 13: // forces the bls switch
            break;
    }

    return nextMenu;
}

static bool8 SetMainMenuText(void)
{
    u32 menuChoice;
    const MenuItem *preload;

#ifdef SKY_STORY
    return SkySetMenuText(0);
#endif

    // Have to load the pointer before the index
    preload = sUnknown_203B34C->unk4[0].menuItems;
    menuChoice = preload[sUnknown_203B34C->unk4[0].input.menuIndex].menuAction; // chosen menu action?
    if (sUnknown_203B34C->currMenuChoice == menuChoice)
        return FALSE;

    sUnknown_203B34C->currMenuChoice = menuChoice;
    sub_8035CC0(&sUnknown_203B34C->unk144, 2);
    sub_8035CC0(&sUnknown_203B34C->unk144, 3);

    switch (menuChoice) {
        case MENU_WIRELESS_COMMS:
            // Using wireless communications, you can go on an adventure to unknown worlds.
            SetMenuItems(sUnknown_203B34C->unk4, &sUnknown_203B34C->unk144, 2, &sUnknown_80E5CB4, sUnknown_80E6030, FALSE, 0, FALSE);
            break;
        case MENU_WONDER_MAIL:
            // Using passwords, you can receive Wonder Mail
            SetMenuItems(sUnknown_203B34C->unk4, &sUnknown_203B34C->unk144, 2, &sUnknown_80E5CB4, sUnknown_80E5F80, FALSE, 0, FALSE);
            break;
        case MENU_AWAITING_RESCUE:
            // You are awaiting resuce by a friend
            // You can give up waiting for rescue
            SetMenuItems(sUnknown_203B34C->unk4, &sUnknown_203B34C->unk144, 2, &sUnknown_80E5CB4, sUnknown_80E5F1C, FALSE, 0, FALSE);
            break;
        case MENU_NEW_GAME:
            // Start an entirely new adventure
            SetMenuItems(sUnknown_203B34C->unk4, &sUnknown_203B34C->unk144, 2, &sUnknown_80E5CB4, sUnknown_80E5CCC, FALSE, 0, FALSE);
            break;
        case MENU_CONTINUE:
            // Resume your adventure from where you last saved
            SetMenuItems(sUnknown_203B34C->unk4, &sUnknown_203B34C->unk144, 2, &sUnknown_80E5CB4, sUnknown_80E5DA0, FALSE, 0, FALSE);
            break;
        case MENU_DELETE_SAVE_PROMPT:
            // This will delete your saved game data.
            // Beware! This will delete it forever
            SetMenuItems(sUnknown_203B34C->unk4, &sUnknown_203B34C->unk144, 2, &sUnknown_80E5CB4, sUnknown_80E5DF0, FALSE, 0, FALSE);
            break;
        case MENU_ADVENTURE_LOG:
            // Check your career as an adventurer
            SetMenuItems(sUnknown_203B34C->unk4, &sUnknown_203B34C->unk144, 2, &sUnknown_80E5CB4, sUnknown_80E5D0C, FALSE, 0, FALSE);
            break;
        case MENU_ACHIEVEMENTS:
            SetMenuItems(sUnknown_203B34C->unk4, &sUnknown_203B34C->unk144, 2, &sUnknown_80E5CB4, sUnknown_80E5DAchievements, FALSE, 0, FALSE);
            break;
        case MENU_FRIEND_RESCUE:
            // Using a Game Link cable or passwords, friends may rescue each other
            SetMenuItems(sUnknown_203B34C->unk4, &sUnknown_203B34C->unk144, 2, &sUnknown_80E5CB4, sUnknown_80E5E5C, FALSE, 0, FALSE);
            break;
        case MENU_TRADE_ITEMS:
            // Using a Game Link cable you can trade stored items with a friend
            SetMenuItems(sUnknown_203B34C->unk4, &sUnknown_203B34C->unk144, 2, &sUnknown_80E5CB4, sUnknown_80E5EBC, FALSE, 0, FALSE);
            break;
        case MENU_DUAL_SLOT:
            // Using Dual Slot function, you can receive teams from your friends
            SetMenuItems(sUnknown_203B34C->unk4, &sUnknown_203B34C->unk144, 2, &sUnknown_80E5CB4, sUnknown_80E5FCC, FALSE, 0, FALSE);
            break;
        default:
            break;
    }

    return TRUE;
}

static void sub_803623C(void)
{
    sub_8035CC0(&sUnknown_203B34C->unk144, 1);
    SetMainMenuItems();
    sUnknown_203B34C->currMenuChoice = -1;

    if (SetMainMenuText())
        sub_8035CF4(sUnknown_203B34C->unk4, 2, FALSE);

    sub_8035CF4(sUnknown_203B34C->unk4, 0, TRUE);
}

static void SetMainMenuItems(void)
{
    const MenuItem *items;
    const WindowTemplate *win;
    const WindowTemplate *winOut;

#ifdef SKY_STORY
    SkyBuildTopMenu();
    SetMenuItems(sUnknown_203B34C->unk4, &sUnknown_203B34C->unk144, 0, &sMainMenuWindowExtra, sMainMenuItemsExtra, TRUE, sUnknown_203B350, TRUE);
    return;
#endif

    if (sub_8011C34() != -1) {
        if (CountMailType(WONDER_MAIL_TYPE_SOS) == 0) {
            if (CountMailType(WONDER_MAIL_TYPE_OKD) != 0) {
                if (sub_803D0D8()) {
                    // Revive Team
                    // Delete Save Data
                    // Adventure Log
                    // Friend Rescue
                    // Trade Items
                    // Wonder Mail
                    items = sUnknown_80E5C18;
                    win = &sUnknown_80E5A78;
                }
                else {
                    // Revive Team
                    // Delete Save Data
                    // Adventure Log
                    // Friend Rescue
                    // Trade Items
                    items = sUnknown_80E5BDC;
                    win = &sUnknown_80E5BC4;
                }
            }
            else {
                if (sub_803D0D8()) {
                    // Continue
                    // Delete Save Data
                    // Adventure Log
                    // Friend Rescue
                    // Trade Items
                    // Wonder Mail
                    items = sUnknown_80E5AFC;
                    win = &sUnknown_80E5A78;
                }
                else {
                    // Continue
                    // Delete Save Data
                    // Adventure Log
                    // Friend Rescue
                    // Trade Items
                    items = sUnknown_80E5A90;
                    win = &sUnknown_80E5A60;
                }
            }
        }
        else {
            if (sub_803D0D8()) {
                    // Awaiting Rescue
                    // Delete Save Data
                    // Adventure Log
                    // Friend Rescue
                    // Trade Items
                    // Wonder Mail
                items = sUnknown_80E5B8C;
                win = &sUnknown_80E5A78;
            }
            else {
                    // Awaiting Rescue
                    // Delete Save Data
                    // Adventure Log
                    // Friend Rescue
                    // Trade Items
                items = sUnknown_80E5B4C;
                win = &sUnknown_80E5B34;
            }
        }
    }
    else {
        // New Game
        // Adventure Log
        items = sUnknown_80E59F8;
        win = &sUnknown_80E59E0;
    }

    items = MaybeAppendExtraItems(items, win, &winOut);
    SetMenuItems(sUnknown_203B34C->unk4, &sUnknown_203B34C->unk144, 0, winOut, items, TRUE, sUnknown_203B350, TRUE);
}

bool8 sub_80363E0(void)
{
    if (sUnknown_203B34C == NULL)
        return FALSE;
    if (sUnknown_203B34C->unk0 == 12)
        return FALSE;
    return TRUE;
}
