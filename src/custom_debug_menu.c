#include "global.h"
#include "globaldata.h"
#include "constants/friend_area.h"
#include "constants/item.h"
#include "constants/input.h"
#include "code_800D090.h"
#include "custom_debug_menu.h"
#include "dungeon_range.h"
#include "friend_area.h"
#include "input.h"
#include "main_menu1.h"
#include "memory.h"
#include "menu_input.h"
#include "music_util.h"
#include "pokemon.h"
#include "run_dungeon.h"
#include "runtime.h"
#include "string_format.h"
#include "text_1.h"
#include "text_2.h"
#include "text_3.h"
#include "items.h"

enum CustomDebugMenuAction
{
    CUSTOM_DEBUG_MENU_GIVE_MONEY,
    CUSTOM_DEBUG_MENU_FILL_BELLY,
    CUSTOM_DEBUG_MENU_UNLOCK_FRIEND_AREAS,
    CUSTOM_DEBUG_MENU_ACTION_COUNT,
};

#define CUSTOM_DEBUG_MENU_STATE_MASK ((1 << CUSTOM_DEBUG_MENU_ACTION_COUNT) - 1)

enum CustomDebugMenuOptionType
{
    CUSTOM_DEBUG_MENU_OPTION_ACTION,
    CUSTOM_DEBUG_MENU_OPTION_TOGGLE,
    CUSTOM_DEBUG_MENU_OPTION_EXP_MULTIPLIER,
    CUSTOM_DEBUG_MENU_OPTION_BANK_INTEREST,
    CUSTOM_DEBUG_MENU_OPTION_ONE_WAY,
};

enum CustomDebugMenuOptionFlags
{
    CUSTOM_DEBUG_MENU_OPTION_RESTART_REQUIRED = 1 << 0,
};

enum CustomDebugMenuOptionEffect
{
    CUSTOM_DEBUG_MENU_EFFECT_NONE,
    CUSTOM_DEBUG_MENU_EFFECT_INITIALIZE_FRIEND_AREAS,
    CUSTOM_DEBUG_MENU_EFFECT_APPLY_MAX_LEVEL_STATS,
};

struct CustomDebugMenuOption
{
    const u8 *label;
    u8 *value;
    u8 type;
    u8 flags;
    u8 effect;
    s32 action;
};

static EWRAM_INIT struct CustomDebugMenu *sCustomDebugMenu = {NULL};
static EWRAM_INIT u8 sCustomDebugMenuState = {0};

#include "data/custom_debug_menu.h"

static void DisplayCustomDebugMenu(void);
static void ExecuteCustomDebugMenuOption(s32 optionIndex);
static bool8 IsCustomDebugMenuOptionEnabled(const struct CustomDebugMenuOption *option);
static void BuildCustomDebugMenuLabel(u8 *buffer, s32 optionIndex);
static void FillLeaderBelly(void);
static void UnlockAllFriendAreas(void);
static EntityInfo *GetDebugLeaderInfo(void);

void CreateCustomDebugMenu(void)
{
    s32 i;

    if (sCustomDebugMenu == NULL) {
        sCustomDebugMenu = MemoryAlloc(sizeof(struct CustomDebugMenu), MEMALLOC_GROUP_8);
        MemoryFill8(sCustomDebugMenu, 0, sizeof(struct CustomDebugMenu));
    }

    sCustomDebugMenu->menu.menuWinId = 0;
    sCustomDebugMenu->menu.menuWindow = &sCustomDebugMenu->menu.windows.id[0];
    for (i = 0; i < MAX_WINDOWS; i++)
        sCustomDebugMenu->menu.windows.id[i] = sCustomDebugMenuDummyWindow;
    sCustomDebugMenu->menu.windows.id[0] = sCustomDebugMenuWindow;

    ResetUnusedInputStruct();
    ShowWindows(&sCustomDebugMenu->menu.windows, TRUE, TRUE);
    CreateMenuOnWindow(&sCustomDebugMenu->menu.input,
                       ARRAY_COUNT(sCustomDebugMenuOptions) + 1,
                       CUSTOM_DEBUG_MENU_ENTRIES_PER_PAGE,
                       sCustomDebugMenu->menu.menuWinId);
    DisplayCustomDebugMenu();
    AddMenuCursorSprite(&sCustomDebugMenu->menu.input);
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
    s32 input = GetKeyPress(&sCustomDebugMenu->menu.input);
    s32 optionIndex;

    switch (input) {
        case INPUT_B_BUTTON:
            PlayMenuSoundEffect(MENU_SFX_BACK);
            return 3;
        case INPUT_A_BUTTON:
            optionIndex = GET_CURRENT_MENU_ENTRY(sCustomDebugMenu->menu.input);
            if (optionIndex == ARRAY_COUNT(sCustomDebugMenuOptions)) {
                PlayMenuSoundEffect(MENU_SFX_BACK);
                return 3;
            }
            PlayMenuSoundEffect(MENU_SFX_ACCEPT);
            ExecuteCustomDebugMenuOption(optionIndex);
            DisplayCustomDebugMenu();
            return 0;
        default:
            if (MenuCursorUpdate(&sCustomDebugMenu->menu.input, TRUE))
                DisplayCustomDebugMenu();
            return 0;
    }
}

static void DisplayCustomDebugMenu(void)
{
    s32 i;
    s32 optionIndex;
    s32 firstOption = sCustomDebugMenu->menu.input.currPage
        * sCustomDebugMenu->menu.input.entriesPerPage;

    UPDATE_MENU_WINDOW_HEIGHT(sCustomDebugMenu->menu);
    sCustomDebugMenu->menu.input.firstEntryY = DEFAULT_MENU_ENTRY_HEIGHT;
    sCustomDebugMenu->menu.input.leftRightArrowsPos.y =
        (sCustomDebugMenu->menu.windows.id[sCustomDebugMenu->menu.menuWinId].pos.y + 1) * 8 - 2 + 8;
    CallPrepareTextbox_8008C54(sCustomDebugMenu->menu.menuWinId);
    sub_80073B8(sCustomDebugMenu->menu.menuWinId);

    for (i = 0; i < sCustomDebugMenu->menu.input.currPageEntries; i++) {
        optionIndex = firstOption + i;
        BuildCustomDebugMenuLabel(sCustomDebugMenu->labels[i], optionIndex);
        PrintFormattedStringOnWindow(8,
                                     GetMenuEntryYCoord(&sCustomDebugMenu->menu.input, i),
                                     sCustomDebugMenu->labels[i],
                                     sCustomDebugMenu->menu.menuWinId,
                                     0);
    }

    sprintfStatic(sCustomDebugMenu->pageLabel, _("%d/%d"),
                  sCustomDebugMenu->menu.input.currPage + 1,
                  sCustomDebugMenu->menu.input.pagesCount);
    PrintFormattedStringOnWindow(
        sCustomDebugMenu->menu.windows.id[sCustomDebugMenu->menu.menuWinId].width * 8
            - GetStringLineWidth(sCustomDebugMenu->pageLabel) - 4,
        0,
        sCustomDebugMenu->pageLabel,
        sCustomDebugMenu->menu.menuWinId,
        0);
    sub_80073E0(sCustomDebugMenu->menu.menuWinId);
}

static void BuildCustomDebugMenuLabel(u8 *buffer, s32 optionIndex)
{
    const struct CustomDebugMenuOption *option;
    bool8 enabled;

    if (optionIndex == ARRAY_COUNT(sCustomDebugMenuOptions)) {
        sprintfStatic(buffer, _("Cancel"));
        return;
    }

    option = &sCustomDebugMenuOptions[optionIndex];
    enabled = IsCustomDebugMenuOptionEnabled(option);

    switch (option->type) {
        case CUSTOM_DEBUG_MENU_OPTION_EXP_MULTIPLIER:
            sprintfStatic(buffer,
                          enabled ? _("{STAR_BULLET}EXP x%d")
                                  : _("EXP x%d"),
                          gRuntimeConfig.exp_multiplier);
            break;
        case CUSTOM_DEBUG_MENU_OPTION_BANK_INTEREST:
            sprintfStatic(buffer,
                          enabled ? _("{STAR_BULLET}Bank %d%%")
                                  : _("Bank %d%%"),
                          gRuntimeConfig.bank_interest_percent);
            break;
        default:
            if (enabled && (option->flags & CUSTOM_DEBUG_MENU_OPTION_RESTART_REQUIRED))
                sprintfStatic(buffer, _("{STAR_BULLET}%s"), option->label);
            else if (enabled)
                sprintfStatic(buffer, _("{STAR_BULLET}%s"), option->label);
            else if (option->flags & CUSTOM_DEBUG_MENU_OPTION_RESTART_REQUIRED)
                sprintfStatic(buffer, _("%s"), option->label);
            else
                sprintfStatic(buffer, _("%s"), option->label);
            break;
    }
}

static bool8 IsCustomDebugMenuOptionEnabled(const struct CustomDebugMenuOption *option)
{
    switch (option->type) {
        case CUSTOM_DEBUG_MENU_OPTION_ACTION:
            return (sCustomDebugMenuState & (1 << option->action)) != 0;
        case CUSTOM_DEBUG_MENU_OPTION_EXP_MULTIPLIER:
            return gRuntimeConfig.exp_multiplier > 1;
        case CUSTOM_DEBUG_MENU_OPTION_BANK_INTEREST:
            return gRuntimeConfig.bank_interest_percent != 0;
        default:
            return *option->value != 0;
    }
}

static void ExecuteCustomDebugMenuOption(s32 optionIndex)
{
    const struct CustomDebugMenuOption *option = &sCustomDebugMenuOptions[optionIndex];

    switch (option->type) {
        case CUSTOM_DEBUG_MENU_OPTION_ACTION:
            switch (option->action) {
                case CUSTOM_DEBUG_MENU_GIVE_MONEY:
                    sCustomDebugMenuState ^= 1 << CUSTOM_DEBUG_MENU_GIVE_MONEY;
                    AddToTeamMoney(MAX_TEAM_MONEY);
                    break;
                case CUSTOM_DEBUG_MENU_FILL_BELLY:
                    sCustomDebugMenuState ^= 1 << CUSTOM_DEBUG_MENU_FILL_BELLY;
                    FillLeaderBelly();
                    break;
                case CUSTOM_DEBUG_MENU_UNLOCK_FRIEND_AREAS:
                    sCustomDebugMenuState ^= 1 << CUSTOM_DEBUG_MENU_UNLOCK_FRIEND_AREAS;
                    UnlockAllFriendAreas();
                    break;
            }
            break;
        case CUSTOM_DEBUG_MENU_OPTION_EXP_MULTIPLIER:
            if (gRuntimeConfig.exp_multiplier <= 1)
                gRuntimeConfig.exp_multiplier = 2;
            else if (gRuntimeConfig.exp_multiplier == 2)
                gRuntimeConfig.exp_multiplier = 4;
            else
                gRuntimeConfig.exp_multiplier = 1;
            break;
        case CUSTOM_DEBUG_MENU_OPTION_BANK_INTEREST:
            if (gRuntimeConfig.bank_interest_percent == 0)
                gRuntimeConfig.bank_interest_percent = 5;
            else if (gRuntimeConfig.bank_interest_percent == 5)
                gRuntimeConfig.bank_interest_percent = 10;
            else
                gRuntimeConfig.bank_interest_percent = 0;
            break;
        case CUSTOM_DEBUG_MENU_OPTION_ONE_WAY:
            if (*option->value == 0) {
                *option->value = TRUE;
                if (option->effect == CUSTOM_DEBUG_MENU_EFFECT_INITIALIZE_FRIEND_AREAS)
                    InitializeFriendAreas();
                else if (option->effect == CUSTOM_DEBUG_MENU_EFFECT_APPLY_MAX_LEVEL_STATS)
                    ApplyMaxLevelStatsToTeam();
            }
            break;
        default:
            *option->value = !*option->value;
            break;
    }
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
