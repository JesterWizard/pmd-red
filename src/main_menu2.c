#include "global.h"
#include "globaldata.h"
#include "runtime.h"
#include "constants/main_menu.h"
#include "constants/wonder_mail.h"
#include "code_803D0D8.h"
#include "input.h"
#include "main_menu1.h"
#include "main_menu2.h"
#include "memory.h"
#include "menu_input.h"
#include "save.h"
#include "text_1.h"

static EWRAM_INIT MainMenu2Work *sUnknown_203B34C = {NULL};
static EWRAM_INIT u32 sUnknown_203B350 = {MENU_DEBUG};
static EWRAM_INIT u32 sUnknown_203B354 = {MENU_SEND_ITEMS};

#include "data/main_menu2.h"

static void SetMainMenuItems(void);
static bool8 SetMainMenuText(void);
static const MenuItem *MaybeAppendDebugItem(const MenuItem *items, const WindowTemplate *win, const WindowTemplate **winOut);

static void sub_803623C(void);

static EWRAM_DATA MenuItem sMainMenuItemsWithDebug[8] = {0};
static EWRAM_DATA WindowTemplate sMainMenuWindowWithDebug = {0};

static const MenuItem *MaybeAppendDebugItem(const MenuItem *items, const WindowTemplate *win, const WindowTemplate **winOut)
{
    s32 i;

    *winOut = win;
    if (!gRuntimeConfig.debug_menu)
        return items;

    for (i = 0; items[i].text != NULL; i++)
        sMainMenuItemsWithDebug[i] = items[i];

    sMainMenuItemsWithDebug[i].text = _("Debug");
    sMainMenuItemsWithDebug[i].menuAction = MENU_DEBUG;
    i++;
    sMainMenuItemsWithDebug[i].text = NULL;
    sMainMenuItemsWithDebug[i].menuAction = 0xFFDD;

    sMainMenuWindowWithDebug = *win;
    sMainMenuWindowWithDebug.height += 1;
    sMainMenuWindowWithDebug.totalHeight += 1;
    *winOut = &sMainMenuWindowWithDebug;
    return sMainMenuItemsWithDebug;
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
                case MENU_NEW_GAME:
                case MENU_AWAITING_RESCUE:
                case MENU_CONTINUE:
                case MENU_DELETE_SAVE_PROMPT:
                case MENU_DELETE_SAVE_CONFIRM:
                case MENU_ADVENTURE_LOG:
                case MENU_FRIEND_RESCUE:
                case MENU_WONDER_MAIL:
                case MENU_DUAL_SLOT:
                case MENU_WIRELESS_COMMS:
                case MENU_DEBUG:
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
        case MENU_DEBUG:
            // This is the Debug Mode.
            // It won't be in the release version
            SetMenuItems(sUnknown_203B34C->unk4, &sUnknown_203B34C->unk144, 2, &sUnknown_80E5CB4, sUnknown_80E5D48, FALSE, 0, FALSE);
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

    items = MaybeAppendDebugItem(items, win, &winOut);
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
