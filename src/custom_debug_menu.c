#include "global.h"
#include "globaldata.h"
#include "constants/friend_area.h"
#include "constants/item.h"
#include "code_800D090.h"
#include "custom_debug_menu.h"
#include "dungeon_range.h"
#include "friend_area.h"
#include "input.h"
#include "main_menu1.h"
#include "memory.h"
#include "menu_input.h"
#include "run_dungeon.h"
#include "string_format.h"
#include "text_1.h"
#include "items.h"

enum CustomDebugMenuOptions
{
    CUSTOM_DEBUG_MENU_GIVE_MONEY,
    CUSTOM_DEBUG_MENU_FILL_BELLY,
    CUSTOM_DEBUG_MENU_UNLOCK_FRIEND_AREAS,
    CUSTOM_DEBUG_MENU_CANCEL,
    CUSTOM_DEBUG_MENU_NO_ACTION = -1,
};

enum CustomDebugMenuState
{
    CUSTOM_DEBUG_MENU_STATE_GIVE_MONEY = 1 << CUSTOM_DEBUG_MENU_GIVE_MONEY,
    CUSTOM_DEBUG_MENU_STATE_FILL_BELLY = 1 << CUSTOM_DEBUG_MENU_FILL_BELLY,
    CUSTOM_DEBUG_MENU_STATE_UNLOCK_FRIEND_AREAS = 1 << CUSTOM_DEBUG_MENU_UNLOCK_FRIEND_AREAS,
    CUSTOM_DEBUG_MENU_STATE_MASK = (1 << CUSTOM_DEBUG_MENU_CANCEL) - 1,
};

static EWRAM_INIT struct CustomDebugMenu *sCustomDebugMenu = {NULL};
static EWRAM_INIT u8 sCustomDebugMenuState = {0};

#include "data/custom_debug_menu.h"

static void SetCustomDebugMenuItems(void);
static void FillLeaderBelly(void);
static void UnlockAllFriendAreas(void);
static EntityInfo *GetDebugLeaderInfo(void);
static bool8 IsCustomDebugMenuOptionSelected(s32 option);
static void ToggleCustomDebugMenuOption(s32 option);

void CreateCustomDebugMenu(void)
{
    s32 i;

    if (sCustomDebugMenu == NULL) {
        sCustomDebugMenu = MemoryAlloc(sizeof(struct CustomDebugMenu), MEMALLOC_GROUP_8);
        MemoryFill8(sCustomDebugMenu, 0, sizeof(struct CustomDebugMenu));
    }

    for (i = 0; i < MAX_WINDOWS; i++)
        sCustomDebugMenu->windows.id[i] = sCustomDebugMenuDummyWindow;

    ResetUnusedInputStruct();
    ShowWindows(&sCustomDebugMenu->windows, TRUE, TRUE);
    SetCustomDebugMenuItems();
}

void DeleteCustomDebugMenu(void)
{
    ResetUnusedInputStruct();
    ShowWindows(NULL, TRUE, TRUE);
    if (sCustomDebugMenu != NULL) {
        MemoryFree(sCustomDebugMenu);
        sCustomDebugMenu = NULL;
    }
}

u32 UpdateCustomDebugMenu(void)
{
    s32 menuAction = CUSTOM_DEBUG_MENU_NO_ACTION;

    if (sub_8012FD8(&sCustomDebugMenu->menus[0]) == 0)
        sub_8013114(&sCustomDebugMenu->menus[0], &menuAction);

    switch (menuAction) {
        case CUSTOM_DEBUG_MENU_GIVE_MONEY:
            ToggleCustomDebugMenuOption(CUSTOM_DEBUG_MENU_GIVE_MONEY);
            AddToTeamMoney(MAX_TEAM_MONEY);
            break;
        case CUSTOM_DEBUG_MENU_FILL_BELLY:
            ToggleCustomDebugMenuOption(CUSTOM_DEBUG_MENU_FILL_BELLY);
            FillLeaderBelly();
            break;
        case CUSTOM_DEBUG_MENU_UNLOCK_FRIEND_AREAS:
            ToggleCustomDebugMenuOption(CUSTOM_DEBUG_MENU_UNLOCK_FRIEND_AREAS);
            UnlockAllFriendAreas();
            break;
        case CUSTOM_DEBUG_MENU_CANCEL:
            return 3;
        default:
            return 0;
    }

    SetCustomDebugMenuItems();
    return 0;
}

static void SetCustomDebugMenuItems(void)
{
    s16 menuIndex = sCustomDebugMenu->menus[0].input.menuIndex;

    if (menuIndex < 0 || menuIndex > CUSTOM_DEBUG_MENU_CANCEL)
        menuIndex = 0;

    sprintfStatic(sCustomDebugMenu->labels[0],
                  IsCustomDebugMenuOptionSelected(CUSTOM_DEBUG_MENU_GIVE_MONEY)
                      ? _("{STAR_BULLET} Give money")
                      : _("Give money"));
    sprintfStatic(sCustomDebugMenu->labels[1],
                  IsCustomDebugMenuOptionSelected(CUSTOM_DEBUG_MENU_FILL_BELLY)
                      ? _("{STAR_BULLET} Fill belly")
                      : _("Fill belly"));
    sprintfStatic(sCustomDebugMenu->labels[2],
                  IsCustomDebugMenuOptionSelected(CUSTOM_DEBUG_MENU_UNLOCK_FRIEND_AREAS)
                      ? _("{STAR_BULLET} Unlock friend areas")
                      : _("Unlock friend areas"));
    sprintfStatic(sCustomDebugMenu->labels[3], _("Cancel"));

    sCustomDebugMenu->items[0].text = sCustomDebugMenu->labels[0];
    sCustomDebugMenu->items[0].menuAction = CUSTOM_DEBUG_MENU_GIVE_MONEY;
    sCustomDebugMenu->items[1].text = sCustomDebugMenu->labels[1];
    sCustomDebugMenu->items[1].menuAction = CUSTOM_DEBUG_MENU_FILL_BELLY;
    sCustomDebugMenu->items[2].text = sCustomDebugMenu->labels[2];
    sCustomDebugMenu->items[2].menuAction = CUSTOM_DEBUG_MENU_UNLOCK_FRIEND_AREAS;
    sCustomDebugMenu->items[3].text = sCustomDebugMenu->labels[3];
    sCustomDebugMenu->items[3].menuAction = CUSTOM_DEBUG_MENU_CANCEL;
    sCustomDebugMenu->items[4].text = NULL;
    sCustomDebugMenu->items[4].menuAction = CUSTOM_DEBUG_MENU_CANCEL;

    SetMenuItems(sCustomDebugMenu->menus, &sCustomDebugMenu->windows, 0,
                 &sCustomDebugMenuWindow, sCustomDebugMenu->items, TRUE, 13, FALSE);
    sCustomDebugMenu->menus[0].input.menuIndex = menuIndex;
    sub_8035CF4(sCustomDebugMenu->menus, 0, TRUE);
}

void ResetCustomDebugMenuState(void)
{
    sCustomDebugMenuState = 0;
}

void WriteCustomDebugMenuBits(DataSerializer *serializer)
{
    WriteBits(serializer, &sCustomDebugMenuState, 8);
}

void ReadCustomDebugMenuBits(DataSerializer *serializer)
{
    u8 state;

    ReadBits(serializer, &state, 8);
    sCustomDebugMenuState = state & CUSTOM_DEBUG_MENU_STATE_MASK;
}

static bool8 IsCustomDebugMenuOptionSelected(s32 option)
{
    return (sCustomDebugMenuState & (1 << option)) != 0;
}

static void ToggleCustomDebugMenuOption(s32 option)
{
    sCustomDebugMenuState ^= 1 << option;
}

static void FillLeaderBelly(void)
{
    EntityInfo *leaderInfo = GetDebugLeaderInfo();

    if (leaderInfo != NULL) {
        leaderInfo->belly = leaderInfo->maxBelly;
        leaderInfo->bellyEmpty = FALSE;
    }
}

static EntityInfo *GetDebugLeaderInfo(void)
{
    if (gDungeon == NULL || gLeaderPointer == NULL)
        return NULL;
    return GetLeaderInfo();
}

static void UnlockAllFriendAreas(void)
{
    s32 i;

    for (i = 1; i < FRIEND_AREA_COUNT; i++)
        UnlockFriendArea(i);
}
