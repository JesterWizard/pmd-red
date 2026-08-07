#include "global.h"
#include "globaldata.h"
#include "code_801EE10_mid.h"
#include "constants/dungeon.h"
#include "constants/input.h"
#include "constants/item.h"
#include "input.h"
#include "memory.h"
#include "menu_input.h"
#include "moves.h"
#include "music_util.h"
#include "pokemon.h"
#include "pokemon_summary_window.h"
#include "sprite.h"
#include "starter_confirm_menu.h"
#include "string_format.h"
#include "text_1.h"
#include "text_2.h"

#define STARTER_CONFIRM_TAB_MOVES 100
#define STARTER_CONFIRM_TAB_COUNT 4
#define STARTER_CONFIRM_START_LEVEL 5
/* Same content origin as Stats/Features rows; entry pitch matches dungeon move list. */
#define MOVES_LIST_FIRST_Y 32
#define MOVES_LIST_ENTRY_HEIGHT 14

enum StarterConfirmMenuState
{
    STARTER_CONFIRM_STATE_SUMMARY,
    STARTER_CONFIRM_STATE_MOVE_INFO,
};

typedef struct StarterConfirmMenuWork
{
    MenuInputStruct tabInput;
    MenuInputStruct moveInput;
    u32 summaryTabs[STARTER_CONFIRM_TAB_COUNT];
    s16 species;
    Pokemon pokemon;
    MonSummaryInfo monInfo;
    UnkInfoTabStruct unkB0;
    u32 windowID;
    WindowTemplate *activeWinTemplate;
    WindowTemplates winTemplates;
    WindowHeader winHeader;
    u8 state;
    s32 moveCount;
    s32 selectedMove; /* list index; not MenuInputStruct.menuIndex (avoids wrap/offset bugs) */
    u16 moveIDs[MAX_MON_MOVES];
    s32 moveSlotIndex[MAX_MON_MOVES]; /* pokemon.moves[] index per list entry */
    s16 lastTabPage; /* detect Moves-tab entry so cursor resets to the first move */
} StarterConfirmMenuWork;

static EWRAM_INIT StarterConfirmMenuWork *sMenuWork = { NULL };

static const WindowTemplate sDummyWinTemplate = WIN_TEMPLATE_DUMMY;

static const WindowTemplate sSummaryWinTemplate =
{
    .flags = WINTEMPLATE_FLAG_NONE,
    .type = WINDOW_TYPE_WITH_HEADER,
    .pos = { .x = 2, .y = 2 },
    .width = MON_SUMMARY_WINDOW_WIDTH,
    .height = 14,
    .totalHeight = 18,
    .unk12 = 2,
    .header = NULL
};

ALIGNED(4) static const u8 sMovesHeader[] = _("Moves");
ALIGNED(4) static const u8 sMoveLine[] = _("{MOVE_ITEM_0}");
ALIGNED(4) static const u8 sNoMoves[] = _("None");

static void StarterConfirmMenu_InitSummaryMenu(void);
static void StarterConfirmMenu_ResetAndShowWindows(void);
static void StarterConfirmMenu_ShowSummaryWindow(void);
static void StarterConfirmMenu_DrawMovesTab(void);
static void StarterConfirmMenu_SetupAndShowWindows(void);
static void StarterConfirmMenu_BuildLevel5Pokemon(s16 species);
static void StarterConfirmMenu_InitMoveList(void);
static void StarterConfirmMenu_SyncMoveCursorLayout(void);
static void StarterConfirmMenu_DrawMoveCursor(void);
static bool8 StarterConfirmMenu_OnMovesTab(void);
static u32 StarterConfirmMenu_HandleSummaryInput(void);
static u32 StarterConfirmMenu_HandleMoveInfoInput(void);
static void StarterConfirmMenu_ClearAllWindows(void);

bool8 StarterConfirmMenu_Create(s16 species)
{
    sMenuWork = MemoryAlloc(sizeof(StarterConfirmMenuWork), MEMALLOC_GROUP_8);
    sMenuWork->species = species;
    sMenuWork->windowID = 0;
    sMenuWork->state = STARTER_CONFIRM_STATE_SUMMARY;
    sMenuWork->moveCount = 0;
    sMenuWork->selectedMove = 0;
    sMenuWork->lastTabPage = -1;
    sMenuWork->activeWinTemplate = &sMenuWork->winTemplates.id[sMenuWork->windowID];

    StarterConfirmMenu_BuildLevel5Pokemon(species);

    RestoreSavedWindows(&sMenuWork->winTemplates);
    StarterConfirmMenu_ClearAllWindows();
    sMenuWork->winTemplates.id[sMenuWork->windowID] = sSummaryWinTemplate;
    sMenuWork->activeWinTemplate->header = &sMenuWork->winHeader;
    sMenuWork->winHeader.width = 10;

    StarterConfirmMenu_InitSummaryMenu();
    StarterConfirmMenu_SetupAndShowWindows();
    MenuUpdatePagesData(&sMenuWork->tabInput);
    return TRUE;
}

u32 StarterConfirmMenu_Input(void)
{
    if (sMenuWork->state == STARTER_CONFIRM_STATE_MOVE_INFO)
        return StarterConfirmMenu_HandleMoveInfoInput();

    return StarterConfirmMenu_HandleSummaryInput();
}

void StarterConfirmMenu_Destroy(void)
{
    if (sMenuWork != NULL) {
        if (sMenuWork->state == STARTER_CONFIRM_STATE_MOVE_INFO)
            sub_801F8D0();

        sMenuWork->winTemplates.id[sMenuWork->windowID] = sDummyWinTemplate;
        ResetUnusedInputStruct();
        ShowWindows(&sMenuWork->winTemplates, TRUE, TRUE);
        MemoryFree(sMenuWork);
        sMenuWork = NULL;
    }
}

static void StarterConfirmMenu_ClearAllWindows(void)
{
    s32 i;

    for (i = 0; i < MAX_WINDOWS; i++)
        sMenuWork->winTemplates.id[i] = sDummyWinTemplate;
}

static void StarterConfirmMenu_BuildLevel5Pokemon(s16 species)
{
    DungeonLocation loc;
    s32 level;

    loc.id = DUNGEON_JOIN_LOCATION_LEADER;
    loc.floor = 0;
    CreateLevel1Pokemon(&sMenuWork->pokemon, species, NULL, ITEM_NOTHING, &loc, NULL);

    /* Match sub_8043FD0: leaders/partners are raised to level 5 on first dungeon entry. */
    for (level = 2; level <= STARTER_CONFIRM_START_LEVEL; level++) {
        LevelData levelData;
        u16 learnedMoves[16];
        s32 movesCount;
        s32 i;
        s32 atk, spAtk, def, spDef;

        GetLvlUpEntry(&levelData, sMenuWork->pokemon.speciesNum, level);
        sMenuWork->pokemon.level = level;
        sMenuWork->pokemon.currExp = levelData.expRequired;
        sMenuWork->pokemon.pokeHP += levelData.gainHP;
        if (sMenuWork->pokemon.pokeHP >= 999)
            sMenuWork->pokemon.pokeHP = 999;

        atk = sMenuWork->pokemon.offense.att[0] + levelData.gainAtt[0];
        spAtk = sMenuWork->pokemon.offense.att[1] + levelData.gainAtt[1];
        def = sMenuWork->pokemon.offense.def[0] + levelData.gainDef[0];
        spDef = sMenuWork->pokemon.offense.def[1] + levelData.gainDef[1];

        if (atk >= 255) atk = 255;
        if (spAtk >= 255) spAtk = 255;
        if (def >= 255) def = 255;
        if (spDef >= 255) spDef = 255;

        sMenuWork->pokemon.offense.att[0] = atk;
        sMenuWork->pokemon.offense.att[1] = spAtk;
        sMenuWork->pokemon.offense.def[0] = def;
        sMenuWork->pokemon.offense.def[1] = spDef;

        movesCount = GetMovesLearnedAtLevel(learnedMoves, sMenuWork->pokemon.speciesNum, sMenuWork->pokemon.level, 999);
        for (i = 0; i < movesCount; i++) {
            s32 moveSlot;

            for (moveSlot = 0; moveSlot < MAX_MON_MOVES; moveSlot++) {
                if (!MoveFlagExists(&sMenuWork->pokemon.moves[moveSlot])) {
                    InitZeroedPPPokemonMove(&sMenuWork->pokemon.moves[moveSlot], learnedMoves[i]);
                    break;
                }
            }
        }
    }
}

static void StarterConfirmMenu_InitMoveList(void)
{
    s32 i;

    sMenuWork->moveCount = 0;
    for (i = 0; i < MAX_MON_MOVES; i++) {
        if (MoveFlagExists(&sMenuWork->pokemon.moves[i])) {
            sMenuWork->moveSlotIndex[sMenuWork->moveCount] = i;
            sMenuWork->moveCount++;
        }
    }

    if (sMenuWork->moveCount > 0) {
        CreateMenuOnWindow(&sMenuWork->moveInput, sMenuWork->moveCount, sMenuWork->moveCount, sMenuWork->windowID);
        sMenuWork->selectedMove = 0;
        StarterConfirmMenu_SyncMoveCursorLayout();
    }
}

static void StarterConfirmMenu_SyncMoveCursorLayout(void)
{
    if (sMenuWork->selectedMove < 0 || sMenuWork->selectedMove >= sMenuWork->moveCount)
        sMenuWork->selectedMove = 0;
}

/* Arrow Y is one entry above the printed row: WITH_HEADER windows place OAM
 * relative to the outer frame, while text rows sit one pitch lower in content. */
static void StarterConfirmMenu_DrawMoveCursor(void)
{
    Window *window;
    struct SpriteOAM sp = {0};
    s32 y;

    if (sMenuWork->moveCount <= 0)
        return;

    StarterConfirmMenu_SyncMoveCursorLayout();
    window = &gWindows[sMenuWork->windowID];
    y = MOVES_LIST_FIRST_Y + sMenuWork->selectedMove * MOVES_LIST_ENTRY_HEIGHT - MOVES_LIST_ENTRY_HEIGHT;

    sMenuWork->moveInput.unk24++;
    if (sMenuWork->moveInput.unk24 & 8)
        return;

    SpriteSetAffine1(&sp, 0);
    SpriteSetAffine2(&sp, 0);
    SpriteSetObjMode(&sp, 0);
    SpriteSetMosaic(&sp, 0);
    SpriteSetBpp(&sp, 0);
    SpriteSetShape(&sp, 0);
    SpriteSetMatrixNum(&sp, 0);
    SpriteSetSize(&sp, 0);
    SpriteSetTileNum(&sp, 0x3F4);
    SpriteSetPriority(&sp, 0);
    SpriteSetPalNum(&sp, 15);
    SpriteSetUnk6_0(&sp, 0);
    SpriteSetUnk6_1(&sp, 0);
    SpriteSetX(&sp, window->x * 8);
    SpriteSetY(&sp, window->y * 8 + y + 1);
    AddSprite(&sp, 0xFF, 0, 0);
}

static bool8 StarterConfirmMenu_OnMovesTab(void)
{
    return sMenuWork->summaryTabs[sMenuWork->tabInput.currPage] == STARTER_CONFIRM_TAB_MOVES;
}

static u32 StarterConfirmMenu_HandleSummaryInput(void)
{
    u32 key = GetKeyPress(&sMenuWork->tabInput);

    if (StarterConfirmMenu_OnMovesTab() && sMenuWork->moveCount > 0) {
        switch (key) {
            case INPUT_B_BUTTON:
                PlayMenuSoundEffect(MENU_SFX_BACK);
                return StarterConfirmMenu_INPUTRET_BACK;
            case INPUT_A_BUTTON: {
                s32 slot = sMenuWork->moveSlotIndex[sMenuWork->selectedMove];

                PlayMenuSoundEffect(MENU_SFX_ACCEPT);
                GetLinkedSequence(slot, sMenuWork->pokemon.moves, sMenuWork->moveIDs);
                sub_801F808(sMenuWork->moveIDs);
                sMenuWork->state = STARTER_CONFIRM_STATE_MOVE_INFO;
                return StarterConfirmMenu_INPUTRET_NONE;
            }
            case INPUT_DPAD_LEFT:
                if (sMenuWork->tabInput.currPage > 0) {
                    PlayMenuSoundEffect(MENU_SFX_NAVIGATE);
                    sMenuWork->tabInput.currPage--;
                    StarterConfirmMenu_SetupAndShowWindows();
                    return StarterConfirmMenu_INPUTRET_LEFTRIGHT;
                }
                return StarterConfirmMenu_INPUTRET_NONE;
            case INPUT_DPAD_RIGHT:
                if (sMenuWork->tabInput.currPage < sMenuWork->tabInput.pagesCount - 1) {
                    PlayMenuSoundEffect(MENU_SFX_NAVIGATE);
                    sMenuWork->tabInput.currPage++;
                    StarterConfirmMenu_SetupAndShowWindows();
                    return StarterConfirmMenu_INPUTRET_LEFTRIGHT;
                }
                return StarterConfirmMenu_INPUTRET_NONE;
            default: {
                switch (key) {
                    case INPUT_DPAD_UP:
                        if (sMenuWork->selectedMove > 0) {
                            sMenuWork->selectedMove--;
                            PlayMenuSoundEffect(MENU_SFX_NAVIGATE);
                        }
                        else if (sMenuWork->moveCount > 0) {
                            sMenuWork->selectedMove = sMenuWork->moveCount - 1;
                            PlayMenuSoundEffect(MENU_SFX_NAVIGATE);
                        }
                        break;
                    case INPUT_DPAD_DOWN:
                        if (sMenuWork->selectedMove < sMenuWork->moveCount - 1) {
                            sMenuWork->selectedMove++;
                            PlayMenuSoundEffect(MENU_SFX_NAVIGATE);
                        }
                        else if (sMenuWork->moveCount > 0) {
                            sMenuWork->selectedMove = 0;
                            PlayMenuSoundEffect(MENU_SFX_NAVIGATE);
                        }
                        break;
                    default:
                        break;
                }
                StarterConfirmMenu_DrawMoveCursor();
                return StarterConfirmMenu_INPUTRET_NONE;
            }
        }
    }

    switch (key) {
        case INPUT_B_BUTTON:
            PlayMenuSoundEffect(MENU_SFX_BACK);
            return StarterConfirmMenu_INPUTRET_BACK;
        case INPUT_A_BUTTON:
            PlayMenuSoundEffect(MENU_SFX_ACCEPT);
            return StarterConfirmMenu_INPUTRET_ACCEPT;
        default:
            if (MenuCursorUpdateOnlyLeftRight(&sMenuWork->tabInput)) {
                if (StarterConfirmMenu_OnMovesTab())
                    StarterConfirmMenu_InitMoveList();
                StarterConfirmMenu_SetupAndShowWindows();
                return StarterConfirmMenu_INPUTRET_LEFTRIGHT;
            }
            return StarterConfirmMenu_INPUTRET_NONE;
    }
}

static u32 StarterConfirmMenu_HandleMoveInfoInput(void)
{
    switch (sub_801F890()) {
        case 2:
        case 3:
            sub_801F8D0();
            sMenuWork->state = STARTER_CONFIRM_STATE_SUMMARY;
            /* Rebuild summary windows after move-info teardown. */
            RestoreSavedWindows(&sMenuWork->winTemplates);
            StarterConfirmMenu_ClearAllWindows();
            sMenuWork->winTemplates.id[sMenuWork->windowID] = sSummaryWinTemplate;
            sMenuWork->activeWinTemplate = &sMenuWork->winTemplates.id[sMenuWork->windowID];
            sMenuWork->activeWinTemplate->header = &sMenuWork->winHeader;
            sMenuWork->winHeader.width = 10;
            StarterConfirmMenu_SetupAndShowWindows();
            break;
        default:
            break;
    }
    return StarterConfirmMenu_INPUTRET_NONE;
}

static void StarterConfirmMenu_SetupAndShowWindows(void)
{
    StarterConfirmMenu_ResetAndShowWindows();
    StarterConfirmMenu_ShowSummaryWindow();
}

static void StarterConfirmMenu_ResetAndShowWindows(void)
{
    sMenuWork->winHeader.count = sMenuWork->tabInput.pagesCount;
    sMenuWork->winHeader.currId = sMenuWork->tabInput.currPage;
    sMenuWork->winHeader.f3 = 0;
    ResetUnusedInputStruct();
    ShowWindows(&sMenuWork->winTemplates, TRUE, TRUE);
}

static void StarterConfirmMenu_ShowSummaryWindow(void)
{
    u32 which = sMenuWork->summaryTabs[sMenuWork->tabInput.currPage];
    s16 currPage = sMenuWork->tabInput.currPage;

    if (which == STARTER_CONFIRM_TAB_MOVES) {
        if (sMenuWork->moveCount == 0)
            StarterConfirmMenu_InitMoveList();
        /* Entering Moves from another tab: always land on the first move. */
        if (sMenuWork->lastTabPage != currPage)
            sMenuWork->selectedMove = 0;
        StarterConfirmMenu_DrawMovesTab();
    }
    else {
        ShowPokemonSummaryWindow(which, currPage, &sMenuWork->monInfo, &sMenuWork->unkB0, sMenuWork->windowID);
    }

    sMenuWork->lastTabPage = currPage;
}

static void StarterConfirmMenu_DrawMovesTab(void)
{
    s32 i;
    MoveBufferStruct bufParams = {0};

    StarterConfirmMenu_SyncMoveCursorLayout();

    CallPrepareTextbox_8008C54(sMenuWork->windowID);
    sub_80073B8(sMenuWork->windowID);

    PrintFormattedStringOnWindow((sMenuWork->tabInput.currPage * 8) + 16, 0, sMovesHeader, sMenuWork->windowID, '\0');

    if (sMenuWork->moveCount == 0) {
        PrintFormattedStringOnWindow(4, MOVES_LIST_FIRST_Y, sNoMoves, sMenuWork->windowID, '\0');
    }
    else {
        bufParams.style = BUFFER_MOVE_JUST_NAME;
        bufParams.xPPCoord = X_PP_COORD_DEFAULT;

        for (i = 0; i < sMenuWork->moveCount; i++) {
            s32 slot = sMenuWork->moveSlotIndex[i];
            Move *move = &sMenuWork->pokemon.moves[slot];
            s32 y = MOVES_LIST_FIRST_Y + i * MOVES_LIST_ENTRY_HEIGHT;

            BufferDefaultMoveName(gFormatBuffer_Items[0], move, &bufParams);
            /* Same separators as the dungeon moves list. */
            if (i != 0)
                AddDoubleUnderScoreHighlight(sMenuWork->windowID, 12, y - 2, 120, 7);
            PrintFormattedStringOnWindow(8, y, sMoveLine, sMenuWork->windowID, '\0');
        }
    }

    sub_80073E0(sMenuWork->windowID);
}

static void StarterConfirmMenu_InitSummaryMenu(void)
{
    s32 i = 0;

    sMenuWork->summaryTabs[i++] = SUB_WINDOW_STATS;
    sMenuWork->summaryTabs[i++] = SUB_WINDOW_FEATURES;
    sMenuWork->summaryTabs[i++] = STARTER_CONFIRM_TAB_MOVES;
    sMenuWork->summaryTabs[i++] = SUB_WINDOW_INFO;

    CreateMenuOnWindow(&sMenuWork->tabInput, i, 1, sMenuWork->windowID);
    SetMonSummaryInfo(&sMenuWork->monInfo, &sMenuWork->pokemon, FALSE);
    StarterConfirmMenu_InitMoveList();
}
