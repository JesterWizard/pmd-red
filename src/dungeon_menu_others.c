#include "global.h"
#include "globaldata.h"
#include "code_803D110.h"
#include "constants/dungeon_exit.h"
#include "dungeon_vram.h"
#include "dungeon_tilemap.h"
#include "dungeon_action.h"
#include "status_strings.h"
#include "dungeon_info.h"
#include "dungeon_exit.h"
#include "dungeon_action.h"
#include "dungeon_range.h"
#include "dungeon_main.h"
#include "dungeon_map.h"
#include "dungeon_map_access.h"
#include "dungeon_menu_others.h"
#include "dungeon_menu_recruitment.h"
#include "dungeon_message.h"
#include "dungeon_message_log.h"
#include "dungeon_misc.h"
#include "dungeon_music.h"
#include "dungeon_strings.h"
#include "dungeon_submenu.h"
#include "dungeon_engine.h"
#include "dungeon_util.h"
#include "game_options.h"
#include "input.h"
#include "menu_input.h"
#include "post_office_guide2.h"
#include "text_1.h"
#include "text_2.h"
#include "text_3.h"
#include "run_dungeon.h"
#include "ui_style.h"

static void PrintOthersMenuOptions(void);
static void ShowGameOptionsMenu(void);
static void ShowQuickSaveGiveUpMenu(void);
static void ShowMissionObjectivesMenu(void);
static void ShowHintsMenu(void);
static bool8 ShowDungeonOptions(void);
static bool8 ShowOthersOptions(void);
static void TrySetNewGameOptions(bool8 bPressed);
static void AskToResetToDefault(void);
static void PrintGameOptions(void);
static void PrintDungeonOptions(void);
static void PrintOthersOptions(void);
static void ChangeGameOptionLeft(s32 optionId);
static void ChangeGameOptionRight(s32 optionId);
static bool8 UnknownDungeonOption(void);
static bool8 UnknownOthersOption(void);
static bool8 AskToQuickSave(void);
static bool8 AskToGiveUp(void);
static void PrintQuickSaveMenuOptions(void);
static void PrintHintsMenu(void);
static void ShowChosenHintWindow(s32 hintId);

EWRAM_DATA static s32 sOthersCursorId = 0;
UNUSED EWRAM_DATA static u8 sUnused[4] = {0};
EWRAM_DATA static GameOptions sChangedGameOptions = {0};

enum {
    OTHERS_GAME_OPTIONS,
    OTHERS_QUICKSAVE_GIVEUP,
    OTHERS_MESSAGE_LOG,
    OTHERS_MISSION_OBJECTIVES,
    OTHERS_RECRUITMENT_SEARCH,
    OTHERS_HINTS,
    OTHERS_COUNT
};

#ifdef SKY_STORY
/* EoS's Others menu: Options, Message log, Mission objectives, Recruitment
 * search (when recruiting is possible), Dungeon hints. Quicksave / Give Up is
 * the main menu's Rest (ShowDungeonRestMenu). EoS's Window and Map entries
 * have no Red screen of their own (Options holds the window colour and the
 * map settings). */
static s32 SkyOthersOptionsCount(void)
{
    return gDungeon->unk644.canRecruit ? 5 : 4;
}

static s32 SkyOthersOptionAt(s32 index)
{
    static const u8 sWithRecruit[] = {OTHERS_GAME_OPTIONS, OTHERS_MESSAGE_LOG, OTHERS_MISSION_OBJECTIVES, OTHERS_RECRUITMENT_SEARCH, OTHERS_HINTS};
    static const u8 sNoRecruit[] = {OTHERS_GAME_OPTIONS, OTHERS_MESSAGE_LOG, OTHERS_MISSION_OBJECTIVES, OTHERS_HINTS};

    if (index < 0 || index >= SkyOthersOptionsCount())
        return -1;
    return gDungeon->unk644.canRecruit ? sWithRecruit[index] : sNoRecruit[index];
}
#endif

void ShowDungeonOthersMenu(void)
{
    bool8 unkAlwaysFalse;
    s32 hintsMenuId = (gDungeon->unk644.canRecruit) ? OTHERS_HINTS : OTHERS_HINTS - 1;

    sOthersCursorId = 0;
    unkAlwaysFalse = FALSE;
    while (TRUE) {
        bool8 bPress = FALSE;

        PrintOthersMenuOptions();
        while (TRUE) {
            AddMenuCursorSprite(&gDungeonMenu);
            DungeonRunFrameActions(0x24);
            if (gRealInputs.repeated & DPAD_DOWN) {
                PlayDungeonCursorSE(TRUE);
                MoveMenuCursorDownWrapAround(&gDungeonMenu, TRUE);
            }
            if (gRealInputs.repeated & DPAD_UP) {
                PlayDungeonCursorSE(TRUE);
                MoveMenuCursorUpWrapAround(&gDungeonMenu, TRUE);
            }

            if ((gRealInputs.pressed & A_BUTTON) || gDungeonMenu.touchScreen.a_button) {
#ifdef SKY_STORY
                if (SkyOthersOptionAt(gDungeonMenu.menuIndex) != OTHERS_RECRUITMENT_SEARCH || !IsFloorwideFixedRoom()) {
#else
                if (gDungeonMenu.menuIndex != OTHERS_RECRUITMENT_SEARCH || (gDungeon->unk644.canRecruit && !IsFloorwideFixedRoom())) {
#endif
                    PlayDungeonConfirmationSE();
                }
                else {
                    PlayDungeonCancelSE();
                }
                break;
            }
            else if ((gRealInputs.pressed & B_BUTTON) || gDungeonMenu.touchScreen.b_button) {
                PlayDungeonCancelSE();
                bPress = TRUE;
                break;
            }
        }

        AddMenuCursorSprite(&gDungeonMenu);
        DungeonRunFrameActions(0x24);
        if (unkAlwaysFalse)
            continue;
        if (bPress)
            break;

        sOthersCursorId = gDungeonMenu.menuIndex;
#ifdef SKY_STORY
        switch (SkyOthersOptionAt(sOthersCursorId)) {
            case OTHERS_GAME_OPTIONS:
                ShowGameOptionsMenu();
                break;
            case OTHERS_MESSAGE_LOG:
                DisplayMessageLog();
                break;
            case OTHERS_MISSION_OBJECTIVES:
                ShowMissionObjectivesMenu();
                break;
            case OTHERS_RECRUITMENT_SEARCH:
                if (!IsFloorwideFixedRoom())
                    ShowRecruitmentSearchMenu();
                break;
            case OTHERS_HINTS:
                ShowHintsMenu();
                break;
        }
        (void)hintsMenuId;
#else
        if (sOthersCursorId == OTHERS_GAME_OPTIONS) {
            ShowGameOptionsMenu();
        }
        if (sOthersCursorId == OTHERS_QUICKSAVE_GIVEUP) {
            ShowQuickSaveGiveUpMenu();
        }
        if (sOthersCursorId == OTHERS_MESSAGE_LOG) {
            DisplayMessageLog();
        }
        if (sOthersCursorId == OTHERS_MISSION_OBJECTIVES) {
            ShowMissionObjectivesMenu();
        }
        if (gDungeon->unk644.canRecruit && !IsFloorwideFixedRoom() && sOthersCursorId == OTHERS_RECRUITMENT_SEARCH) {
            ShowRecruitmentSearchMenu();
        }
        if (sOthersCursorId == hintsMenuId) {
            ShowHintsMenu();
        }
#endif

        if (gDungeon->unk4)
            break;
        if (GetLeaderActionId() != ACTION_NOTHING)
            break;
    }

    UpdateMinimap();
    sub_803EAF0(0, NULL);
}

enum {
    GAME_OPTION_DUNGEON,
    GAME_OPTION_OTHERS,
    GAME_OPTION_DEFAULT,
};

static void ShowGameOptionsMenu(void)
{
    while (TRUE) {
        bool8 bPress = FALSE;

        PrintGameOptions();
        while (TRUE) {
            AddMenuCursorSprite(&gDungeonMenu);
            DungeonRunFrameActions(0x24);
            if (gRealInputs.repeated & DPAD_DOWN) {
                PlayDungeonCursorSE(TRUE);
                MoveMenuCursorDownWrapAround(&gDungeonMenu, TRUE);
            }
            if (gRealInputs.repeated & DPAD_UP) {
                PlayDungeonCursorSE(TRUE);
                MoveMenuCursorUpWrapAround(&gDungeonMenu, TRUE);
            }

            if ((gRealInputs.pressed & A_BUTTON) || gDungeonMenu.touchScreen.a_button) {
                PlayDungeonConfirmationSE();
                break;
            }
            if ((gRealInputs.pressed & B_BUTTON) || gDungeonMenu.touchScreen.b_button) {
                PlayDungeonCancelSE();
                bPress = TRUE;
                break;
            }
        }

        AddMenuCursorSprite(&gDungeonMenu);
        DungeonRunFrameActions(0x24);
        if (bPress)
            break;

        sChangedGameOptions = *gGameOptionsRef;
        if (gDungeonMenu.menuIndex == GAME_OPTION_DUNGEON) {
            bPress = ShowDungeonOptions();
            TrySetNewGameOptions(bPress);
        }
        else if (gDungeonMenu.menuIndex == GAME_OPTION_OTHERS) {
            bPress = ShowOthersOptions();
            TrySetNewGameOptions(bPress);
        }
        else if (gDungeonMenu.menuIndex == GAME_OPTION_DEFAULT) {
            AskToResetToDefault();
        }
    }

    sub_803EAF0(0, NULL);
}

enum {
    OPTION_SPEED,
    OPTION_FAR_OFF_PALS,
    OPTION_DAMAGE_TURN,
    OPTION_GRIDS,
    OPTION_MAP,
    OPTION_WINDOWS,
    OPTION_COUNT
};

#define DUNGEON_OPTIONS_COUNT OPTION_WINDOWS
#define OTHERS_OPTIONS_COUNT (OPTION_COUNT - DUNGEON_OPTIONS_COUNT)

static bool8 ShowDungeonOptions(void)
{
    bool8 dpadMoved;
    bool8 bPress = FALSE;

    gDungeonMenu.menuIndex = 0;
    while (TRUE) {
        bPress = FALSE;
        dpadMoved = FALSE;

        PrintDungeonOptions();
        while (TRUE) {
            AddMenuCursorSprite(&gDungeonMenu);
            DungeonRunFrameActions(0x24);
            if (gRealInputs.repeated & DPAD_DOWN) {
                PlayDungeonCursorSE(TRUE);
                MoveMenuCursorDownWrapAround(&gDungeonMenu, TRUE);
            }
            if (gRealInputs.repeated & DPAD_UP) {
                PlayDungeonCursorSE(TRUE);
                MoveMenuCursorUpWrapAround(&gDungeonMenu, TRUE);
            }

            if (gRealInputs.repeated & DPAD_LEFT) {
                PlayDungeonCursorSE(FALSE);
                ChangeGameOptionLeft(gDungeonMenu.menuIndex);
                dpadMoved = TRUE;
                break;
            }
            if (gRealInputs.repeated & DPAD_RIGHT) {
                PlayDungeonCursorSE(FALSE);
                ChangeGameOptionRight(gDungeonMenu.menuIndex);
                dpadMoved = TRUE;
                break;
            }

            if ((gRealInputs.pressed & A_BUTTON) || gDungeonMenu.touchScreen.b_button) {
                PlayDungeonConfirmationSE();
                break;
            }
            if (gRealInputs.pressed & B_BUTTON) {
                PlayDungeonCancelSE();
                bPress = TRUE;
                break;
            }

            if (UnknownDungeonOption()) {
                dpadMoved = TRUE;
                break;
            }
        }

        AddMenuCursorSprite(&gDungeonMenu);
        DungeonRunFrameActions(0x24);
        if (!dpadMoved)
            break;
    }

    return bPress;
}

static bool8 ShowOthersOptions(void)
{
    bool8 dpadMoved;
    bool8 bPress = FALSE;

    gDungeonMenu.menuIndex = 0;
    while (TRUE) {
        bPress = FALSE;
        dpadMoved = FALSE;

        PrintOthersOptions();
        while (TRUE) {
            AddMenuCursorSprite(&gDungeonMenu);
            DungeonRunFrameActions(0x24);
            if (gRealInputs.repeated & DPAD_DOWN) {
                PlayDungeonCursorSE(TRUE);
                MoveMenuCursorDownWrapAround(&gDungeonMenu, TRUE);
            }
            if (gRealInputs.repeated & DPAD_UP) {
                PlayDungeonCursorSE(TRUE);
                MoveMenuCursorUpWrapAround(&gDungeonMenu, TRUE);
            }

            if (gRealInputs.repeated & DPAD_LEFT) {
                PlayDungeonCursorSE(FALSE);
                ChangeGameOptionLeft(gDungeonMenu.menuIndex + DUNGEON_OPTIONS_COUNT);
                dpadMoved = TRUE;
                break;
            }
            if (gRealInputs.repeated & DPAD_RIGHT) {
                PlayDungeonCursorSE(FALSE);
                ChangeGameOptionRight(gDungeonMenu.menuIndex + DUNGEON_OPTIONS_COUNT);
                dpadMoved = TRUE;
                break;
            }

            if ((gRealInputs.pressed & A_BUTTON) || gDungeonMenu.touchScreen.b_button) {
                PlayDungeonConfirmationSE();
                break;
            }
            if (gRealInputs.pressed & B_BUTTON) {
                PlayDungeonCancelSE();
                bPress = TRUE;
                break;
            }

            if (UnknownOthersOption()) {
                dpadMoved = TRUE;
                break;
            }
        }

        AddMenuCursorSprite(&gDungeonMenu);
        DungeonRunFrameActions(0x24);
        if (!dpadMoved)
            break;
    }

    return bPress;
}

static void TrySetNewGameOptions(bool8 bPressed)
{
    bool8 optionsChanged = FALSE;

    if (bPressed) {
        if (!GameOptionsNotChange(&sChangedGameOptions))
            optionsChanged = TRUE;
    }
    else {
        optionsChanged = TRUE;
    }

    if (optionsChanged) {
        if (DisplayDungeonYesNoMessage_Async(0, gUnknown_80FEBF8, TRUE) == 1) {
            *gGameOptionsRef = sChangedGameOptions;
            sub_803E13C();
            LoadDungeonMapPalette();
        }
    }
}

static void AskToResetToDefault(void)
{
    if (DisplayDungeonYesNoMessage_Async(0, gUnknown_80FEC28, FALSE) == 1) {
        InitializeGameOptions(FALSE);
        sub_803E13C();
    }
}

#ifdef SKY_STORY
void ShowDungeonRestMenu(void)
{
    ShowQuickSaveGiveUpMenu();
    UpdateMinimap();
    sub_803EAF0(0, NULL);
}
#endif

static void ShowQuickSaveGiveUpMenu(void)
{
    bool8 unkAlwaysFalse = FALSE;
    while (TRUE) {
        bool8 bPress = FALSE;

        PrintQuickSaveMenuOptions();
        while (TRUE) {
            AddMenuCursorSprite(&gDungeonMenu);
            DungeonRunFrameActions(0x24);
            if (gRealInputs.repeated & DPAD_DOWN) {
                PlayDungeonCursorSE(TRUE);
                MoveMenuCursorDownWrapAround(&gDungeonMenu, TRUE);
            }
            if (gRealInputs.repeated & DPAD_UP) {
                PlayDungeonCursorSE(TRUE);
                MoveMenuCursorUpWrapAround(&gDungeonMenu, TRUE);
            }

            if ((gRealInputs.pressed & A_BUTTON) || gDungeonMenu.touchScreen.a_button) {
                PlayDungeonConfirmationSE();
                break;
            }
            if ((gRealInputs.pressed & B_BUTTON) || gDungeonMenu.touchScreen.b_button) {
                PlayDungeonCancelSE();
                bPress = TRUE;
                break;
            }
        }

        AddMenuCursorSprite(&gDungeonMenu);
        DungeonRunFrameActions(0x24);

        if (unkAlwaysFalse)
            continue;
        if (bPress)
            break;

        if (gDungeonMenu.menuIndex == 0) {
            AskToQuickSave();
        }
        else if (gDungeonMenu.menuIndex == 1) {
            AskToGiveUp();
        }

        if (GetLeaderActionId() != ACTION_NOTHING)
            break;
    }
}

static void ShowMissionObjectivesMenu(void)
{
    sub_80319A4(gDungeon->unk644.missionKind, gDungeon->unk644.dungeonLocation.id, 0);
    do {
        DungeonRunFrameActions(0x47);
    } while (sub_80319F8() == 0);
    sub_8031A3C();
}

static bool8 AskToQuickSave(void)
{
    if (DisplayDungeonYesNoMessage_Async(NULL, gUnknown_80FDE6C, FALSE) != 1) {
        return TRUE;
    }
    SetMonsterActionFields(GetLeaderActionContainer(), ACTION_QUICK_SAVE);
    return FALSE;
}

static bool8 AskToGiveUp(void)
{
    if (DisplayDungeonYesNoMessage_Async(NULL, gUnknown_80FDEB8, FALSE) != 1) {
        return TRUE;
    }
    SetMonsterActionFields(GetLeaderActionContainer(), ACTION_GIVE_UP);
    SetUpDungeonExitData(DUNGEON_EXIT_GAVE_UP_EXPLORATION, NULL, GetLeader());
    gDungeon->unk644.unk10 = 1;
    return FALSE;
}

#ifdef SKY_STORY
static const u8 sSkyOthersTitle[] = _("Others");
static const u8 sSkyOthersOptions[] = _("Options");
static const u8 sSkyOthersHints[] = _("Dungeon hints");
static const u8 sSkyRestTitle[] = _("Rest");
static const u8 sSkyRestQuicksave[] = _("Quicksave");
static const u8 sSkyRestGiveUp[] = _("Give Up");

/* An EoS titled list (SKY_MENU_* in ui_style.h) at (2,2), width in tiles
 * as measured on EoS. */
static void SkyShowTitledList(s32 width, const u8 *title, const u8 *const *options, s32 count, s32 cursor)
{
    s32 i;
    WindowHeader header;
    WindowTemplates windows = {
        .id = {
            [0] = {
                .type = WINDOW_TYPE_WITH_HEADER,
                .pos = { 2, 2 },
                .width = width,
                .height = 0,
                .totalHeight = 0,
                .unk12 = 0,
                .header = &header,
            },
            [1] = WIN_TEMPLATE_DUMMY,
            [2] = WIN_TEMPLATE_DUMMY,
            [3] = WIN_TEMPLATE_DUMMY,
        }
    };

    header.count = 1;
    header.currId = 0;
    header.f3 = 0;
    header.width = width;
    gDungeonMenu.menuIndex = cursor;
    gDungeonMenu.currPageEntries = count;
    gDungeonMenu.entriesPerPage = count;
    gDungeonMenu.currPage = 0;
    gDungeonMenu.pagesCount = 0;
    gDungeonMenu.unk4 = 0;
    gDungeonMenu.firstEntryY = SKY_MENU_FIRST_ENTRY_Y;
    gDungeonMenu.leftRightArrowsPos.x = 0;
    gDungeonMenu.leftRightArrowsPos.y = 0;
    gDungeonMenu.unk14.x = 0;
    gDungeonMenu.windowId = 0;
    ResetTouchScreenMenuInput(&gDungeonMenu.touchScreen);
    windows.id[0].height = windows.id[0].totalHeight = CalcEntriesTotalHeight(count, SKY_MENU_ENTRY_HEIGHT) + 2;
    DungeonShowWindows(&windows, TRUE);
    sub_80137B0(&gDungeonMenu, count * SKY_MENU_ENTRY_HEIGHT);
    sub_80073B8(0);
    PrintFormattedStringOnWindow(SKY_MENU_TITLE_X, 0, title, 0, '\0');
    for (i = 0; i < count; i++)
        PrintFormattedStringOnWindow(SKY_MENU_ENTRY_X, GetMenuEntryYCoord(&gDungeonMenu, i), options[i], 0, '\0');
    sub_80073E0(0);
}

static void SkyPrintOthersMenuOptions(void)
{
    s32 i, count = SkyOthersOptionsCount();
    const u8 *options[OTHERS_COUNT];

    for (i = 0; i < count; i++) {
        switch (SkyOthersOptionAt(i)) {
            case OTHERS_GAME_OPTIONS: options[i] = sSkyOthersOptions; break;
            case OTHERS_MESSAGE_LOG: options[i] = gUnknown_80FE9F8; break;
            case OTHERS_MISSION_OBJECTIVES: options[i] = gUnknown_80FEA10; break;
            case OTHERS_RECRUITMENT_SEARCH:
                options[i] = IsFloorwideFixedRoom() ? gUnknown_80FEA44 : gUnknown_80FEA28;
                break;
            default: options[i] = sSkyOthersHints; break;
        }
    }
    /* EoS: interior 13 tiles wide. */
    SkyShowTitledList(13, sSkyOthersTitle, options, count, sOthersCursorId);
}

static void SkyPrintQuickSaveMenuOptions(void)
{
    static const u8 *const sOptions[] = {sSkyRestQuicksave, sSkyRestGiveUp};

    /* EoS: about 12.5 tiles wide (its Rest window is sized to the text). */
    SkyShowTitledList(12, sSkyRestTitle, sOptions, ARRAY_COUNT(sOptions), 0);
}
#endif

static void PrintOthersMenuOptions(void)
{
    s32 optionsCount, currOptionId;
    WindowHeader header;
    WindowTemplates windows = {
        .id = {
            [0] = {
                .type = WINDOW_TYPE_WITH_HEADER,
                .pos = { 2, 2 },
                .width = 18,
                .height = 16,
                .totalHeight = 16,
                .unk12 = 0,
                .header = &header,
            },
            [1] = WIN_TEMPLATE_DUMMY,
            [2] = WIN_TEMPLATE_DUMMY,
            [3] = WIN_TEMPLATE_DUMMY,
        }
    };

#ifdef SKY_STORY
    if (TRUE) {
        SkyPrintOthersMenuOptions();
        return;
    }
#endif
    header.count = 1;
    header.currId = 0;
    header.f3 = 0;
    gDungeonMenu.menuIndex = sOthersCursorId;
    optionsCount = (gDungeon->unk644.canRecruit) ? OTHERS_COUNT : OTHERS_COUNT - 1;
    gDungeonMenu.currPageEntries = optionsCount;
    gDungeonMenu.entriesPerPage = optionsCount;
    gDungeonMenu.currPage = 0;
    gDungeonMenu.pagesCount = 0;
    gDungeonMenu.unk4 = 0;
    gDungeonMenu.firstEntryY = 16;
    gDungeonMenu.leftRightArrowsPos.x = 0;
    gDungeonMenu.leftRightArrowsPos.y = 0;
    gDungeonMenu.unk14.x = 0;
    gDungeonMenu.windowId = 0;
    ResetTouchScreenMenuInput(&gDungeonMenu.touchScreen);
    windows.id[0].width = 18;
    windows.id[0].height = windows.id[0].totalHeight = CalcEntriesTotalHeight(optionsCount, DEFAULT_MENU_ENTRY_HEIGHT) + 2;
    header.width = 10;
    windows.id[0].pos.x = 2;
    DungeonShowWindows(&windows, TRUE);
    sub_80137B0(&gDungeonMenu, 0);
    sub_80073B8(0);
    currOptionId = 0;
    PrintFormattedStringOnWindow(16, 0, gUnknown_80FE8F8, 0, '\0');
    PrintFormattedStringOnWindow(8, GetMenuEntryYCoord(&gDungeonMenu, currOptionId++), gUnknown_80FE9CC, 0, '\0');
    PrintFormattedStringOnWindow(8, GetMenuEntryYCoord(&gDungeonMenu, currOptionId++), gUnknown_80FE9E8, 0, '\0');
    PrintFormattedStringOnWindow(8, GetMenuEntryYCoord(&gDungeonMenu, currOptionId++), gUnknown_80FE9F8, 0, '\0');
    PrintFormattedStringOnWindow(8, GetMenuEntryYCoord(&gDungeonMenu, currOptionId++), gUnknown_80FEA10, 0, '\0');
    if (gDungeon->unk644.canRecruit) {
        if (!IsFloorwideFixedRoom()) {
            PrintFormattedStringOnWindow(8, GetMenuEntryYCoord(&gDungeonMenu, currOptionId++), gUnknown_80FEA28, 0, '\0');
        }
        else {
            PrintFormattedStringOnWindow(8, GetMenuEntryYCoord(&gDungeonMenu, currOptionId++), gUnknown_80FEA44, 0, '\0');
        }
    }
    PrintFormattedStringOnWindow(8, GetMenuEntryYCoord(&gDungeonMenu, currOptionId), gUnknown_80FEA50, 0, '\0');

    sub_80073E0(0);
}

static void PrintQuickSaveMenuOptions(void)
{
    s32 optionsCount, currOptionId;
    WindowHeader header;
    WindowTemplates windows = {
        .id = {
            [0] = {
                .type = WINDOW_TYPE_WITH_HEADER,
                .pos = { 2, 2 },
                .width = 18,
                .height = 16,
                .totalHeight = 16,
                .unk12 = 0,
                .header = &header,
            },
            [1] = WIN_TEMPLATE_DUMMY,
            [2] = WIN_TEMPLATE_DUMMY,
            [3] = WIN_TEMPLATE_DUMMY,
        }
    };

#ifdef SKY_STORY
    if (TRUE) {
        SkyPrintQuickSaveMenuOptions();
        return;
    }
#endif
    header.count = 1;
    header.currId = 0;
    header.f3 = 0;
    gDungeonMenu.menuIndex = 0;
    optionsCount = 2;
    gDungeonMenu.currPageEntries = optionsCount;
    gDungeonMenu.entriesPerPage = optionsCount;
    gDungeonMenu.currPage = 0;
    gDungeonMenu.pagesCount = 0;
    gDungeonMenu.unk4 = 0;
    gDungeonMenu.firstEntryY = 16;
    gDungeonMenu.leftRightArrowsPos.x = 0;
    gDungeonMenu.leftRightArrowsPos.y = 0;
    gDungeonMenu.unk14.x = 0;
    gDungeonMenu.windowId = 0;
    ResetTouchScreenMenuInput(&gDungeonMenu.touchScreen);
    windows.id[0].width = 18;
    windows.id[0].height = windows.id[0].totalHeight = CalcEntriesTotalHeight(optionsCount, DEFAULT_MENU_ENTRY_HEIGHT) + 2;
    header.width = 10;
    windows.id[0].pos.x = 2;
    DungeonShowWindows(&windows, TRUE);
    sub_80137B0(&gDungeonMenu, 0);
    sub_80073B8(0);
    currOptionId = 0;
    PrintFormattedStringOnWindow(16, 0, gUnknown_80FE8F4, 0, '\0');
    PrintFormattedStringOnWindow(8, GetMenuEntryYCoord(&gDungeonMenu, currOptionId++), gUnknown_80F7C50[43].str, 0, '\0');
    PrintFormattedStringOnWindow(8, GetMenuEntryYCoord(&gDungeonMenu, currOptionId++), gUnknown_80F7C50[46].str, 0, '\0');

    sub_80073E0(0);
}

static void PrintGameOptions(void)
{
    s32 optionsCount;
    s32 y[3];
    WindowHeader header;
    WindowTemplates windows = {
        .id = {
            [0] = {
                .type = WINDOW_TYPE_WITH_HEADER,
                .pos = { 2, 2 },
                .width = 12,
                .height = 16,
                .totalHeight = 16,
                .unk12 = 0,
                .header = &header,
            },
            [1] = WIN_TEMPLATE_DUMMY,
            [2] = WIN_TEMPLATE_DUMMY,
            [3] = WIN_TEMPLATE_DUMMY,
        }
    };

    header.count = 1;
    header.currId = 0;
    header.f3 = 0;
    gDungeonMenu.menuIndex = 0;
    optionsCount = 3;
    gDungeonMenu.currPageEntries = optionsCount;
    gDungeonMenu.entriesPerPage = optionsCount;
    gDungeonMenu.currPage = 0;
    gDungeonMenu.pagesCount = 0;
    gDungeonMenu.unk4 = 0;
    gDungeonMenu.firstEntryY = 16;
    gDungeonMenu.leftRightArrowsPos.x = 0;
    gDungeonMenu.leftRightArrowsPos.y = 0;
    gDungeonMenu.unk14.x = 0;
    gDungeonMenu.windowId = 0;
    ResetTouchScreenMenuInput(&gDungeonMenu.touchScreen);
    windows.id[0].width = 12;
    windows.id[0].height = windows.id[0].totalHeight = CalcEntriesTotalHeight(optionsCount, DEFAULT_MENU_ENTRY_HEIGHT) + 2;
    header.width = 10;
    windows.id[0].pos.x = 2;
    DungeonShowWindows(&windows, TRUE);
    sub_80137B0(&gDungeonMenu, 0);

    y[0] = GetMenuEntryYCoord(&gDungeonMenu, 0);
    y[1] = GetMenuEntryYCoord(&gDungeonMenu, 1);
    y[2] = GetMenuEntryYCoord(&gDungeonMenu, 2);
    sub_80073B8(0);
    PrintFormattedStringOnWindow(16, 0, gGameOptionsTextPtr, 0, '\0');
    PrintFormattedStringOnWindow(8, y[0], gOptionsDungeonTextPtr, 0, '\0');
    PrintFormattedStringOnWindow(8, y[1], gOptionsOthersTextPtr, 0, '\0');
    PrintFormattedStringOnWindow(8, y[2], gUnknown_80FE748, 0, '\0');
    sub_80073E0(0);
}

static void PrintDungeonOptions(void)
{
    s32 y[DUNGEON_OPTIONS_COUNT];
    WindowHeader header;
    WindowTemplates windows = {
        .id = {
            [0] = {
                .type = WINDOW_TYPE_WITH_HEADER,
                .pos = { 2, 2 },
                .width = 18,
                .height = 16,
                .totalHeight = 16,
                .unk12 = 0,
                .header = &header,
            },
            [1] = WIN_TEMPLATE_DUMMY,
            [2] = WIN_TEMPLATE_DUMMY,
            [3] = WIN_TEMPLATE_DUMMY,
        }
    };
    s32 mapOptionUnderscoreWidths[] = {16, 25, 27};

    header.count = 1;
    header.currId = 0;
    header.f3 = 0;

    gDungeonMenu.currPageEntries = DUNGEON_OPTIONS_COUNT;
    gDungeonMenu.entriesPerPage = DUNGEON_OPTIONS_COUNT;
    gDungeonMenu.currPage = 0;
    gDungeonMenu.pagesCount = 0;
    gDungeonMenu.unk4 = 0;
    gDungeonMenu.firstEntryY = 16;
    gDungeonMenu.leftRightArrowsPos.x = 0;
    gDungeonMenu.leftRightArrowsPos.y = 0;
    gDungeonMenu.unk14.x = 0;
    gDungeonMenu.windowId = 0;
    ResetTouchScreenMenuInput(&gDungeonMenu.touchScreen);
    windows.id[0].width = 24;
    windows.id[0].height = windows.id[0].totalHeight = CalcEntriesTotalHeight(DUNGEON_OPTIONS_COUNT, DEFAULT_MENU_ENTRY_HEIGHT) + 2;
    header.width = 10;
    windows.id[0].pos.x = 2;
    DungeonShowWindows(&windows, TRUE);
    sub_80137B0(&gDungeonMenu, 0);

    y[0] = GetMenuEntryYCoord(&gDungeonMenu, 0);
    y[1] = GetMenuEntryYCoord(&gDungeonMenu, 1);
    y[2] = GetMenuEntryYCoord(&gDungeonMenu, 2);
    y[3] = GetMenuEntryYCoord(&gDungeonMenu, 3);
    y[4] = GetMenuEntryYCoord(&gDungeonMenu, 4);
    sub_80073B8(0);
    PrintFormattedStringOnWindow(16, 0, gOptionsDungeonTextPtr, 0, '\0');
    PrintFormattedStringOnWindow(8, y[0], gUnknown_80FE764, 0, '\0');
    PrintFormattedStringOnWindow(8, y[1], gUnknown_80FE788, 0, '\0');
    PrintFormattedStringOnWindow(8, y[2], gUnknown_80FE7A8, 0, '\0');
    PrintFormattedStringOnWindow(8, y[3], gUnknown_80FE7C0, 0, '\0');
    PrintFormattedStringOnWindow(8, y[4], gUnknown_80FE7E4, 0, '\0');

    if (sChangedGameOptions.dungeonSpeed != DUNGEON_SPEED_SLOW) {
        AddDoubleUnderScoreHighlight(0, 136, y[0] + 10, 21, 7);
    }
    else {
        AddDoubleUnderScoreHighlight(0, 80, y[0] + 10, 22, 7);
    }

    if (sChangedGameOptions.FarOffPals != FAROFFPALS_SELF) {
        AddDoubleUnderScoreHighlight(0, 136, y[1] + 10, 22, 7);
    }
    else {
        AddDoubleUnderScoreHighlight(0, 80, y[1] + 10, 18, 7);
    }

    if (sChangedGameOptions.damageTurn) {
        AddDoubleUnderScoreHighlight(0, 136, y[2] + 10, 16, 7);
    }
    else {
        AddDoubleUnderScoreHighlight(0, 80, y[2] + 10, 12, 7);
    }

    if (sChangedGameOptions.gridEnable) {
        AddDoubleUnderScoreHighlight(0, 136, y[3] + 10, 12, 7);
    }
    else {
        AddDoubleUnderScoreHighlight(0, 80, y[3] + 10, 16, 7);
    }

    AddDoubleUnderScoreHighlight(0, 80 + (sChangedGameOptions.mapOption * 40), y[4] + 10, mapOptionUnderscoreWidths[sChangedGameOptions.mapOption], 7);

    sub_80073E0(0);
}

static void PrintOthersOptions(void)
{
    s32 i;
    s32 y[OTHERS_OPTIONS_COUNT];
    WindowHeader header;
    WindowTemplates windows = {
        .id = {
            [0] = {
                .type = WINDOW_TYPE_WITH_HEADER,
                .pos = { 2, 2 },
                .width = 18,
                .height = 16,
                .totalHeight = 16,
                .unk12 = 0,
                .header = &header,
            },
            [1] = WIN_TEMPLATE_DUMMY,
            [2] = WIN_TEMPLATE_DUMMY,
            [3] = WIN_TEMPLATE_DUMMY,
        }
    };
    s32 underscoreWidths[] = {19, 17, 25};

    header.count = 1;
    header.currId = 0;
    header.f3 = 0;

    gDungeonMenu.currPageEntries = OTHERS_OPTIONS_COUNT;
    gDungeonMenu.entriesPerPage = OTHERS_OPTIONS_COUNT;
    gDungeonMenu.currPage = 0;
    gDungeonMenu.pagesCount = 0;
    gDungeonMenu.unk4 = 0;
    gDungeonMenu.firstEntryY = 16;
    gDungeonMenu.leftRightArrowsPos.x = 0;
    gDungeonMenu.leftRightArrowsPos.y = 0;
    gDungeonMenu.unk14.x = 0;
    gDungeonMenu.windowId = 0;
    ResetTouchScreenMenuInput(&gDungeonMenu.touchScreen);
    windows.id[0].width = 24;
    windows.id[0].height = windows.id[0].totalHeight = CalcEntriesTotalHeight(OTHERS_OPTIONS_COUNT, DEFAULT_MENU_ENTRY_HEIGHT) + 2;
    header.width = 10;
    windows.id[0].pos.x = 2;
    DungeonShowWindows(&windows, TRUE);
    sub_80137B0(&gDungeonMenu, 0);

    for (i = 0; i < OTHERS_OPTIONS_COUNT; i++) {
        y[i] = GetMenuEntryYCoord(&gDungeonMenu, i);
    }
    sub_80073B8(0);

    PrintFormattedStringOnWindow(16, 0, gOptionsOthersTextPtr, 0, '\0');
    PrintFormattedStringOnWindow(8, y[0], gOptionsWindowColorPtr, 0, '\0');
    AddDoubleUnderScoreHighlight(0, 80 + (sChangedGameOptions.windowColor * 40), y[0] + 10, underscoreWidths[sChangedGameOptions.windowColor], 7);

    sub_80073E0(0);
}

static void ChangeGameOptionLeft(s32 optionId)
{
    switch (optionId) {
        case OPTION_SPEED:
            sChangedGameOptions.dungeonSpeed = (sChangedGameOptions.dungeonSpeed == DUNGEON_SPEED_SLOW) ? DUNGEON_SPEED_FAST : DUNGEON_SPEED_SLOW;
            break;
        case OPTION_FAR_OFF_PALS:
            sChangedGameOptions.FarOffPals = (sChangedGameOptions.FarOffPals == 0) ? 1 : 0;
            break;
        case OPTION_DAMAGE_TURN:
            sChangedGameOptions.damageTurn = (sChangedGameOptions.damageTurn == 0) ? 1 : 0;
            break;
        case OPTION_GRIDS:
            sChangedGameOptions.gridEnable = (sChangedGameOptions.gridEnable == 0) ? 1 : 0;
            break;
        case OPTION_MAP:
            if (sChangedGameOptions.mapOption == 0) {
                sChangedGameOptions.mapOption = MAP_OPTION_SHADE;
            }
            else {
                sChangedGameOptions.mapOption--;
            }
            break;
        case OPTION_WINDOWS:
            if (sChangedGameOptions.windowColor == 0) {
                sChangedGameOptions.windowColor = WINDOW_COLOR_GREEN;
            }
            else {
                sChangedGameOptions.windowColor--;
            }
            break;
    }
}

static void ChangeGameOptionRight(s32 optionId)
{
    switch (optionId) {
        case OPTION_SPEED:
            sChangedGameOptions.dungeonSpeed = (sChangedGameOptions.dungeonSpeed == DUNGEON_SPEED_SLOW) ? DUNGEON_SPEED_FAST : DUNGEON_SPEED_SLOW;
            break;
        case OPTION_FAR_OFF_PALS:
            sChangedGameOptions.FarOffPals = (sChangedGameOptions.FarOffPals == 0) ? 1 : 0;
            break;
        case OPTION_DAMAGE_TURN:
            sChangedGameOptions.damageTurn = (sChangedGameOptions.damageTurn == 0) ? 1 : 0;
            break;
        case OPTION_GRIDS:
            sChangedGameOptions.gridEnable = (sChangedGameOptions.gridEnable == 0) ? 1 : 0;
            break;
        case OPTION_MAP:
            if (sChangedGameOptions.mapOption == MAP_OPTION_SHADE) {
                sChangedGameOptions.mapOption = 0;
            }
            else {
                sChangedGameOptions.mapOption++;
            }
            break;
        case OPTION_WINDOWS:
            if (sChangedGameOptions.windowColor == WINDOW_COLOR_GREEN) {
                sChangedGameOptions.windowColor = 0;
            }
            else {
                sChangedGameOptions.windowColor++;
            }
            break;
    }
}

// Different in Blue maybe?
static bool8 UnknownDungeonOption(void)
{
    return FALSE;
}

static bool8 UnknownOthersOption(void)
{
    return FALSE;
}

static void ShowHintsMenu(void)
{
    while (TRUE) {
        bool8 bPress = FALSE;

        PrintHintsMenu();
        while (TRUE) {
            AddMenuCursorSprite(&gDungeonMenu);
            DungeonRunFrameActions(0x24);
            if (gRealInputs.repeated & DPAD_DOWN) {
                PlayDungeonCursorSE(TRUE);
                MoveMenuCursorDownWrapAround(&gDungeonMenu, TRUE);
            }
            if (gRealInputs.repeated & DPAD_UP) {
                PlayDungeonCursorSE(TRUE);
                MoveMenuCursorUpWrapAround(&gDungeonMenu, TRUE);
            }

            if ((gRealInputs.pressed & A_BUTTON) || gDungeonMenu.touchScreen.a_button) {
                PlayDungeonConfirmationSE();
                break;
            }
            if ((gRealInputs.pressed & B_BUTTON) || gDungeonMenu.touchScreen.b_button) {
                PlayDungeonCancelSE();
                bPress = TRUE;
                break;
            }
        }

        AddMenuCursorSprite(&gDungeonMenu);
        DungeonRunFrameActions(0x24);
        if (bPress)
            break;

        ShowChosenHintWindow(gDungeonMenu.menuIndex);
    }
}

static void PrintHintsMenu(void)
{
    s32 i;
    WindowHeader header;
    WindowTemplates windows = {
        .id = {
            [0] = {
                .type = WINDOW_TYPE_WITH_HEADER,
                .pos = { 2, 2 },
                .width = 12,
                .height = 16,
                .totalHeight = 16,
                .unk12 = 0,
                .header = &header,
            },
            [1] = WIN_TEMPLATE_DUMMY,
            [2] = WIN_TEMPLATE_DUMMY,
            [3] = WIN_TEMPLATE_DUMMY,
        }
    };

    header.count = 1;
    header.currId = 0;
    header.f3 = 0;
    gDungeonMenu.menuIndex = 0;
    gDungeonMenu.currPageEntries = HINTS_COUNT_RED_VERSION;
    gDungeonMenu.entriesPerPage = HINTS_COUNT_RED_VERSION;
    gDungeonMenu.currPage = 0;
    gDungeonMenu.pagesCount = 0;
    gDungeonMenu.unk4 = 0;
    gDungeonMenu.firstEntryY = 16;
    gDungeonMenu.leftRightArrowsPos.x = 0;
    gDungeonMenu.leftRightArrowsPos.y = 0;
    gDungeonMenu.unk14.x = 0;
    gDungeonMenu.windowId = 0;
    ResetTouchScreenMenuInput(&gDungeonMenu.touchScreen);
    windows.id[0].width = 12;
    windows.id[0].height = windows.id[0].totalHeight = CalcEntriesTotalHeight(HINTS_COUNT_RED_VERSION, DEFAULT_MENU_ENTRY_HEIGHT) + 2;
    header.width = 10;
    windows.id[0].pos.x = 2;
    DungeonShowWindows(&windows, TRUE);
    sub_80137B0(&gDungeonMenu, 0);
    sub_80073B8(0);
    PrintFormattedStringOnWindow(16, 0, gText_Hints, 0, '\0');
    for (i = 0; i < HINTS_COUNT_RED_VERSION; i++) {
        PrintFormattedStringOnWindow(8, GetMenuEntryYCoord(&gDungeonMenu, i), gHintsNames[i], 0, '\0');
    }
    sub_80073E0(0);
}

static void ShowChosenHintWindow(s32 hintId)
{
    bool8 dsControls = (gGameOptionsRef->controls != CONTROLS_GBA);

    while (TRUE) {
        bool8 dpadPressed = FALSE;
        WindowHeader header;
        WindowTemplates windows = {
            .id = {
                [0] = {
                    .type = WINDOW_TYPE_WITH_HEADER,
                    .pos = { 2, 2 },
                    .width = 12,
                    .height = 16,
                    .totalHeight = 16,
                    .unk12 = 0,
                    .header = &header,
                },
                [1] = WIN_TEMPLATE_DUMMY,
                [2] = WIN_TEMPLATE_DUMMY,
                [3] = WIN_TEMPLATE_DUMMY,
            }
        };

        header.count = HINTS_COUNT_RED_VERSION;
        header.currId = hintId;
        header.f3 = 0;
        gDungeonMenu.currPage = hintId;
        gDungeonMenu.pagesCount = HINTS_COUNT_RED_VERSION;
        gDungeonMenu.currPageEntries = 0;
        gDungeonMenu.menuIndex = 0;
        gDungeonMenu.entriesPerPage = 0;
        gDungeonMenu.unk4 = 0;
        gDungeonMenu.firstEntryY = 16;
        gDungeonMenu.unk14.x = 0;
        gDungeonMenu.windowId = 0;
        ResetTouchScreenMenuInput(&gDungeonMenu.touchScreen);
        windows.id[0].width = 24;
        windows.id[0].height = windows.id[0].totalHeight = CalcEntriesTotalHeight(HINTS_COUNT, DEFAULT_MENU_ENTRY_HEIGHT) + 2;
        header.width = 10;
        windows.id[0].pos.x = 2;
        DungeonShowWindows(&windows, TRUE);
        gDungeonMenu.leftRightArrowsPos.x = (gWindows[0].x + 19) * 8;
        gDungeonMenu.leftRightArrowsPos.y = ((gWindows[0].y + 1) * 8) - 2;
        sub_80073B8(0);
        PrintFormattedStringOnWindow(16 + hintId * 8, 0, gHintsNames[hintId], 0, '\0');
        PrintFormattedStringOnWindow(8, 16, gHintsDescriptions[dsControls][hintId], 0, '\0');
        sub_80073E0(0);

        while (TRUE) {
            AddMenuCursorSprite(&gDungeonMenu);
            DungeonRunFrameActions(0x24);
            if ((gRealInputs.pressed & DPAD_RIGHT) || gDungeonMenu.touchScreen.dpad_right) {
                PlayDungeonCursorSE(FALSE);
                if (++hintId == HINTS_COUNT_RED_VERSION) {
                    hintId = 0;
                }
                dpadPressed = TRUE;
                break;
            }
            if ((gRealInputs.pressed & DPAD_LEFT) || gDungeonMenu.touchScreen.dpad_left) {
                PlayDungeonCursorSE(FALSE);
                if (--hintId == -1) {
                    hintId = HINTS_COUNT_RED_VERSION - 1;
                }
                dpadPressed = TRUE;
                break;
            }

            if ((gRealInputs.pressed & A_BUTTON) || gDungeonMenu.touchScreen.a_button) {
                PlayDungeonConfirmationSE();
                break;
            }
            if ((gRealInputs.pressed & B_BUTTON) || gDungeonMenu.touchScreen.b_button) {
                PlayDungeonCancelSE();
                break;
            }
        }

        DungeonRunFrameActions(0x24);
        if (!dpadPressed)
            break;
    }
}
