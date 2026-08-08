#include "global.h"
#include "globaldata.h"
#include "constants/emotions.h"
#include "bg_palette_buffer.h"
#include "custom_graphics.h"
#include "confirm_name_menu.h"
#include "random_mersenne_twister.h"
#include "code_8099360.h"
#include "game_options.h"
#include "input.h"
#include "main_loops.h"
#include "memory.h"
#include "menu_input.h"
#include "palette_fade_util.h"
#include "personality_test1.h"
#include "personality_test2.h"
#include "random.h"
#include "runtime.h"
#include "save.h"
#include "starter_confirm_menu.h"
#include "string_format.h"
#include "structs/rgb.h"
#include "text_1.h"
#include "text_2.h"
#include "text_util.h"

enum
{
    PERSONALITY_CHOICE_PROMPT,
    PERSONALITY_CHOICE_WAIT,
    PERSONALITY_GENERATE_NEW_QUESTION,
    PERSONALITY_ASK_QUESTION,
    PERSONALITY_UPDATE_TOTALS,
    PERSONALITY_PLAYER_GENDER,
    PERSONALITY_STARTER_PROMPT,
    PERSONALITY_ADVANCE_TO_STARTER_SELECTION,
    PERSONALITY_STARTER_SELECTION,
    PERSONALITY_HANDLE_STARTER_SELECTION,
    PERSONALITY_STARTER_CONFIRM,
    PERSONALITY_STARTER_CONFIRM_YESNO,
    PERSONALITY_REVEAL,
    PERSONALITY_STARTER_REVEAL,
    PERSONALITY_ADVANCE_TO_PARTNER_SELECTION_1,
    PERSONALITY_ADVANCE_TO_PARTNER_SELECTION_2,
    PERSONALITY_ADVANCE_TO_PARTNER_SELECTION_3,
    PERSONALITY_PARTNER_SELECTION,
    PERSONALITY_ADVANCE_TO_PARTNER_NICKNAME_1,
    PERSONALITY_PARTNER_CONFIRM,
    PERSONALITY_PARTNER_CONFIRM_YESNO,
    PERSONALITY_ADVANCE_TO_PARTNER_NICKNAME_2,
    PERSONALITY_PARTNER_NICKNAME,
    PERSONALITY_END_INTRO,
    PERSONALITY_ADVANCE_TO_TEST_END,
    PERSONALITY_TEST_END,
    PERSONALITY_CUSTOM_FORCE_PAIR,
};

static EWRAM_INIT PersonalityTestTracker *sPersonalityTestTracker = {NULL};

#include "data/personality_test1.h"

static void AdvanceToPartnerNicknameScreen(void);
static void AdvanceToPartnerSelection(void);
static void AdvanceToPickPartnerPrompt(void);
static void AdvanceToStarterSelection(void);
static void AdvanceToTestEnd(void);
static void CallCreatePartnerSelectionMenu(void);
static void CallCreateStarterSelectionMenu(void);
static void CallPromptNewQuestion(void);
static void GenerateNewQuestionOrGender(void);
static void CommitPendingPartner(void);
static void CommitPendingStarter(void);
static void HandlePartnerConfirm(void);
static void HandlePartnerConfirmYesNo(void);
static void HandleStarterChoice(void);
static void HandleStarterConfirm(void);
static void HandleStarterConfirmYesNo(void);
static void HandleStarterSelection(void);
static void InitializeTestStats(void);
static void NicknamePartner(void);
static void PersonalityTest_DisplayStarterSprite(void);
static void PrintEndIntroText(void);
static void PrintPersonalityTypeDescription(void);
static void PromptForPartnerNickname(void);
static void PromptNewQuestion(void);
static void PromptPickPartner(void);
static void PromptStarterChoice(void);
static void PromptStarterSelect(void);
static void RevealPersonality(void);
static void RevealStarter(void);
static void SetPlayerGender(void);
static void StartCustomStoryPair(void);
static void UpdateNatureTotals(void);

bool8 CreateTestTracker(void)
{
    sPersonalityTestTracker = MemoryAlloc(sizeof(PersonalityTestTracker), MEMALLOC_GROUP_8);
    ResetTouchScreenMenuInput(&sPersonalityTestTracker->input);
    InitializeTestStats();
    sub_8099690(1);
    return TRUE;
}

static void InitializeTestStats(void)
{
    s32 i;

    ReadTeamBasicInfo(&sPersonalityTestTracker->TeamBasicInfo);
    sPersonalityTestTracker->FrameCounter = 0;
    sPersonalityTestTracker->QuestionCounter = 0;
    sPersonalityTestTracker->directStarterSelect = FALSE;

    for (i = 0; i < NUM_PERSONALITIES; i++)
        sPersonalityTestTracker->NatureTotals[i] = 0;

    sPersonalityTestTracker->currQuestionIndex = 0;

    for (i = 0; i < NUM_QUIZ_QUESTIONS; i++)
        sPersonalityTestTracker->QuestionTracker[i] = 0;

    sPersonalityTestTracker->playerNature = 0;
    sPersonalityTestTracker->playerGender = 0;

    if (gRuntimeConfig.custom_story) {
        sPersonalityTestTracker->TeamBasicInfo.StarterID = MONSTER_TREECKO;
        sPersonalityTestTracker->TeamBasicInfo.PartnerID = MONSTER_SQUIRTLE;
        sPersonalityTestTracker->TestState = PERSONALITY_GENERATE_NEW_QUESTION;
    }
    else if (gRuntimeConfig.starter_choice_prompt)
        sPersonalityTestTracker->TestState = PERSONALITY_CHOICE_PROMPT;
    else
        sPersonalityTestTracker->TestState = PERSONALITY_GENERATE_NEW_QUESTION;
}

u32 HandleTestTrackerState(void)
{
    s32 counter;
    s32 iVar1;

    sPersonalityTestTracker->FrameCounter++;

    switch (sPersonalityTestTracker->TestState) {
        case PERSONALITY_CHOICE_PROMPT:
            PromptStarterChoice();
            break;
        case PERSONALITY_CHOICE_WAIT:
            HandleStarterChoice();
            break;
        case PERSONALITY_GENERATE_NEW_QUESTION:
            GenerateNewQuestionOrGender();
            break;
        case PERSONALITY_ASK_QUESTION:
            CallPromptNewQuestion();
            break;
        case PERSONALITY_UPDATE_TOTALS:
            UpdateNatureTotals();
            break;
        case PERSONALITY_PLAYER_GENDER:
            SetPlayerGender();
            break;
        case PERSONALITY_STARTER_PROMPT:
            PromptStarterSelect();
            break;
        case PERSONALITY_ADVANCE_TO_STARTER_SELECTION:
            AdvanceToStarterSelection();
            break;
        case PERSONALITY_STARTER_SELECTION:
            CallCreateStarterSelectionMenu();
            break;
        case PERSONALITY_HANDLE_STARTER_SELECTION:
            HandleStarterSelection();
            break;
        case PERSONALITY_STARTER_CONFIRM:
            HandleStarterConfirm();
            break;
        case PERSONALITY_STARTER_CONFIRM_YESNO:
            HandleStarterConfirmYesNo();
            break;
        case PERSONALITY_REVEAL:
            RevealPersonality();
            break;
        case PERSONALITY_STARTER_REVEAL:
            RevealStarter();
            break;
        case PERSONALITY_ADVANCE_TO_PARTNER_SELECTION_1:
            AdvanceToPickPartnerPrompt();
            break;
        case PERSONALITY_ADVANCE_TO_PARTNER_SELECTION_2:
            PromptPickPartner();
            break;
        case PERSONALITY_ADVANCE_TO_PARTNER_SELECTION_3:
            AdvanceToPartnerSelection();
            break;
        case PERSONALITY_PARTNER_SELECTION:
            CallCreatePartnerSelectionMenu();
            break;
        case PERSONALITY_ADVANCE_TO_PARTNER_NICKNAME_1:
            PromptForPartnerNickname();
            break;
        case PERSONALITY_PARTNER_CONFIRM:
            HandlePartnerConfirm();
            break;
        case PERSONALITY_PARTNER_CONFIRM_YESNO:
            HandlePartnerConfirmYesNo();
            break;
        case PERSONALITY_ADVANCE_TO_PARTNER_NICKNAME_2:
            AdvanceToPartnerNicknameScreen();
            break;
        case PERSONALITY_PARTNER_NICKNAME:
            NicknamePartner();
            break;
        case PERSONALITY_END_INTRO:
            PrintEndIntroText();
            break;
        case PERSONALITY_ADVANCE_TO_TEST_END:
            AdvanceToTestEnd();
            break;
        case PERSONALITY_CUSTOM_FORCE_PAIR:
            StartCustomStoryPair();
            break;
        case PERSONALITY_TEST_END:
            iVar1 = Rand32Bit() * sPersonalityTestTracker->FrameCounter;
            MersenneTwister_InitializeState(Rand32Bit());

            for (counter = 0; counter < NUM_PERSONALITIES; counter++)
                iVar1 *= sPersonalityTestTracker->NatureTotals[counter] + counter + 3;

            iVar1 += Random32MersenneTwister();
            while (iVar1 == -1)
                iVar1 += Random32MersenneTwister();

            sub_8011C40(iVar1);
            return 3;
        default:
            break;
    }
    return 0;
}

void DeleteTestTracker(void)
{
    WriteTeamBasicInfo(&sPersonalityTestTracker->TeamBasicInfo);
    MemoryFree(sPersonalityTestTracker);
    sPersonalityTestTracker = NULL;
}

static void GenerateNewQuestionOrGender(void)
{
    u8 category;
    s32 i;
    s32 newQuestion;

    sPersonalityTestTracker->QuestionCounter++;

    if (sPersonalityTestTracker->QuestionCounter > MAX_ASKED_QUESTIONS) {
        if (gRuntimeConfig.custom_story)
            CreateMenuDialogueBoxAndPortrait(sGender0, 0, 0, gCustomStoryGenderMenu, 0, 3, 0, 0, 257);
        else
            CreateMenuDialogueBoxAndPortrait(sGender0, 0, 0, gGenderMenu, 0, 3, 0, 0, 257);
        sPersonalityTestTracker->TestState = PERSONALITY_PLAYER_GENDER;
    }
    else if (gRuntimeConfig.custom_story) {
        sPersonalityTestTracker->currQuestionIndex = sPersonalityTestTracker->QuestionCounter - 1;
        sPersonalityTestTracker->TestState = PERSONALITY_ASK_QUESTION;
    }
    else {
        do {
            // Generate new question number and make sure we haven't done it
            newQuestion = RandInt(NUM_QUIZ_QUESTIONS);
            sPersonalityTestTracker->currQuestionIndex = newQuestion;
        } while (sPersonalityTestTracker->QuestionTracker[newQuestion] == 1);

        // Found one so let's get the category
        category = gNatureQuestionTable[sPersonalityTestTracker->currQuestionIndex];

        // Mark all of the questions in the category as used
        for (i = 0; i < NUM_QUIZ_QUESTIONS; i++) {
            if (gNatureQuestionTable[i] == category)
                sPersonalityTestTracker->QuestionTracker[i] = 1;
        }
        sPersonalityTestTracker->TestState = PERSONALITY_ASK_QUESTION;
    }
}

static void CallPromptNewQuestion(void)
{
    PromptNewQuestion();
    sPersonalityTestTracker->TestState = PERSONALITY_UPDATE_TOTALS;
}

static void UpdateNatureTotals(void)
{
    s32 answerIndex;
    s32 natureIndex;
    const PersonalityEffects *pointArray;
    const PersonalityQuestion *question;

    if (sub_80144A4(&answerIndex))
        return;

    // This is for the second part of Brave 2 Question if you fight..
    if (!gRuntimeConfig.custom_story && answerIndex == BRAVE_2B_TRIGGER) {
        // Set question to BRAVE_2B and ask the question..
        sPersonalityTestTracker->currQuestionIndex = NUM_QUIZ_QUESTIONS;
        sPersonalityTestTracker->TestState = PERSONALITY_ASK_QUESTION;
    }
    else {
        if (gRuntimeConfig.custom_story)
            question = gCustomStoryQuestionPointerTable[sPersonalityTestTracker->currQuestionIndex];
        else
            question = gPersonalityQuestionPointerTable[sPersonalityTestTracker->currQuestionIndex];

        pointArray = question->effects;
        pointArray += answerIndex;
        for (natureIndex = 0; natureIndex < NUM_PERSONALITIES; natureIndex++)
            sPersonalityTestTracker->NatureTotals[natureIndex] += (*pointArray)[natureIndex];

        sPersonalityTestTracker->TestState = PERSONALITY_GENERATE_NEW_QUESTION;
    }
}

static void SetPlayerGender(void)
{
    s32 gender;

    if (sub_80144A4(&gender) != 0)
        return;

    /* custom_story only offers “What does it matter?” (menuAction 0 = male). */
    if (gender == MALE || gRuntimeConfig.custom_story) {
        sPersonalityTestTracker->playerGender = MALE;
        gGameOptionsRef->playerGender = MALE;
    }
    else {
        sPersonalityTestTracker->playerGender = FEMALE;
        gGameOptionsRef->playerGender = FEMALE;
    }

    sub_8099690(0);

    if (sPersonalityTestTracker->directStarterSelect)
        sPersonalityTestTracker->TestState = PERSONALITY_STARTER_PROMPT;
    else
        sPersonalityTestTracker->TestState = PERSONALITY_REVEAL;
}

static void PromptStarterChoice(void)
{
    CreateMenuDialogueBoxAndPortrait(sStarterChoicePrompt, 0, 0, gStarterChoiceMenu, 0, 3, 0, 0, 0x101);
    sPersonalityTestTracker->TestState = PERSONALITY_CHOICE_WAIT;
}

static void HandleStarterChoice(void)
{
    s32 choice;

    if (sub_80144A4(&choice) != 0)
        return;

    if (choice == STARTER_CHOICE_PICK) {
        sPersonalityTestTracker->directStarterSelect = TRUE;
        CreateMenuDialogueBoxAndPortrait(sGender0, 0, 0, gGenderMenu, 0, 3, 0, 0, 257);
        sPersonalityTestTracker->TestState = PERSONALITY_PLAYER_GENDER;
    }
    else {
        sPersonalityTestTracker->directStarterSelect = FALSE;
        sPersonalityTestTracker->TestState = PERSONALITY_GENERATE_NEW_QUESTION;
    }
}

static void PromptStarterSelect(void)
{
    CreateDialogueBoxAndPortrait(gStarterPrompt, 0, 0, 0x301);
    sPersonalityTestTracker->TestState = PERSONALITY_ADVANCE_TO_STARTER_SELECTION;
}

static void AdvanceToStarterSelection(void)
{
    s32 temp;

    if (sub_80144A4(&temp) == 0)
        sPersonalityTestTracker->TestState = PERSONALITY_STARTER_SELECTION;
}

static void CallCreateStarterSelectionMenu(void)
{
    CreateStarterSelectionMenu();
    sPersonalityTestTracker->TestState = PERSONALITY_HANDLE_STARTER_SELECTION;
}

static void CommitPendingStarter(void)
{
    sPersonalityTestTracker->TeamBasicInfo.StarterID = sPersonalityTestTracker->pendingSpecies;
    CreateDialogueBoxAndPortrait(gPartnerPrompt, 0, 0, 0x301);
    sPersonalityTestTracker->TestState = PERSONALITY_ADVANCE_TO_PARTNER_SELECTION_3;
}

static void HandleStarterSelection(void)
{
    u16 selectedStarter;

    selectedStarter = HandlePartnerSelectionInput();

    if (selectedStarter != 0xFFFF) {
        if (selectedStarter != 0xFFFE) {
            sub_803CE6C();
            if (gRuntimeConfig.starter_confirm_preview) {
                sPersonalityTestTracker->pendingSpecies = selectedStarter;
                StarterConfirmMenu_Create(selectedStarter);
                sPersonalityTestTracker->TestState = PERSONALITY_STARTER_CONFIRM;
            }
            else {
                sPersonalityTestTracker->pendingSpecies = selectedStarter;
                CommitPendingStarter();
            }
        }
    }
}

static void HandleStarterConfirm(void)
{
    switch (StarterConfirmMenu_Input()) {
        case StarterConfirmMenu_INPUTRET_ACCEPT:
            StarterConfirmMenu_Destroy();
            CopyMonsterNameToBuffer(gFormatBuffer_Monsters[0], sPersonalityTestTracker->pendingSpecies);
            CreateYesNoDialogueBoxAndPortrait_DefaultYes(gStarterConfirmPrompt, NULL, 0x101);
            sPersonalityTestTracker->TestState = PERSONALITY_STARTER_CONFIRM_YESNO;
            break;
        case StarterConfirmMenu_INPUTRET_BACK:
            StarterConfirmMenu_Destroy();
            CreateStarterSelectionMenu();
            sPersonalityTestTracker->TestState = PERSONALITY_HANDLE_STARTER_SELECTION;
            break;
        default:
            break;
    }
}

static void HandleStarterConfirmYesNo(void)
{
    s32 choice;

    if (sub_80144A4(&choice) != 0)
        return;

    if (choice == 1)
        CommitPendingStarter();
    else {
        CreateStarterSelectionMenu();
        sPersonalityTestTracker->TestState = PERSONALITY_HANDLE_STARTER_SELECTION;
    }
}

static void RevealPersonality(void)
{
    s32 currentNature;
    s32 i;

    if (gRuntimeConfig.custom_story) {
        sPersonalityTestTracker->playerNature = SASSY;
        sPersonalityTestTracker->TeamBasicInfo.StarterID = MONSTER_TREECKO;
        sPersonalityTestTracker->TeamBasicInfo.PartnerID = MONSTER_SQUIRTLE;
    }
    else {
        sPersonalityTestTracker->playerNature = RandInt(NUM_PERSONALITIES);
        currentNature = sPersonalityTestTracker->playerNature;

        for (i = 0; i < NUM_PERSONALITIES - 1; i++) {
            currentNature++;

            // Wraparound check
            if (currentNature > QUIRKY)
                currentNature = HARDY;

            if (sPersonalityTestTracker->NatureTotals[currentNature] > sPersonalityTestTracker->NatureTotals[sPersonalityTestTracker->playerNature])
                sPersonalityTestTracker->playerNature = currentNature;
        }

        sPersonalityTestTracker->TeamBasicInfo.StarterID = gStarters[sPersonalityTestTracker->playerNature][sPersonalityTestTracker->playerGender];
    }

    PrintPersonalityTypeDescription();
    sPersonalityTestTracker->TestState = PERSONALITY_STARTER_REVEAL;
}

static void RevealStarter(void)
{
    s32 temp;

    if (sub_80144A4(&temp) == 0) {
        CreateDialogueBoxAndPortrait(gStarterReveal, 0, 0, 0x101);
        PersonalityTest_DisplayStarterSprite();
        sPersonalityTestTracker->TestState = PERSONALITY_ADVANCE_TO_PARTNER_SELECTION_1;
    }
}

static void AdvanceToPickPartnerPrompt(void)
{
    s32 temp;

    if (sub_80144A4(&temp) == 0) {
        if (gRuntimeConfig.custom_story)
            sPersonalityTestTracker->TestState = PERSONALITY_CUSTOM_FORCE_PAIR;
        else
            sPersonalityTestTracker->TestState = PERSONALITY_ADVANCE_TO_PARTNER_SELECTION_2;
    }
}

static void PromptPickPartner(void)
{
    CreateDialogueBoxAndPortrait(gPartnerPrompt, 0, 0, 0x301);
    sPersonalityTestTracker->TestState = PERSONALITY_ADVANCE_TO_PARTNER_SELECTION_3;
}

static void AdvanceToPartnerSelection(void)
{
    s32 temp;

    if (sub_80144A4(&temp) == 0)
        sPersonalityTestTracker->TestState = PERSONALITY_PARTNER_SELECTION;
}

static void CallCreatePartnerSelectionMenu(void)
{
    CreatePartnerSelectionMenu(sPersonalityTestTracker->TeamBasicInfo.StarterID);
    sPersonalityTestTracker->TestState = PERSONALITY_ADVANCE_TO_PARTNER_NICKNAME_1;
}

static void CommitPendingPartner(void)
{
    sPersonalityTestTracker->TeamBasicInfo.PartnerID = sPersonalityTestTracker->pendingSpecies;
    CreateDialogueBoxAndPortrait(gPartnerNickPrompt, 0, 0, 0x301);
    sPersonalityTestTracker->TestState = PERSONALITY_ADVANCE_TO_PARTNER_NICKNAME_2;
}

static void PromptForPartnerNickname(void)
{
    u16 selectedPartner;

    selectedPartner = HandlePartnerSelectionInput();

    if (selectedPartner != 0xFFFF) {
        if (selectedPartner != 0xFFFE) {
            sub_803CE6C();
            if (gRuntimeConfig.starter_confirm_preview) {
                sPersonalityTestTracker->pendingSpecies = selectedPartner;
                StarterConfirmMenu_Create(selectedPartner);
                sPersonalityTestTracker->TestState = PERSONALITY_PARTNER_CONFIRM;
            }
            else {
                sPersonalityTestTracker->pendingSpecies = selectedPartner;
                CommitPendingPartner();
            }
        }
    }
}

static void HandlePartnerConfirm(void)
{
    switch (StarterConfirmMenu_Input()) {
        case StarterConfirmMenu_INPUTRET_ACCEPT:
            StarterConfirmMenu_Destroy();
            CopyMonsterNameToBuffer(gFormatBuffer_Monsters[0], sPersonalityTestTracker->pendingSpecies);
            CreateYesNoDialogueBoxAndPortrait_DefaultYes(gPartnerConfirmPrompt, NULL, 0x101);
            sPersonalityTestTracker->TestState = PERSONALITY_PARTNER_CONFIRM_YESNO;
            break;
        case StarterConfirmMenu_INPUTRET_BACK:
            StarterConfirmMenu_Destroy();
            CreatePartnerSelectionMenu(sPersonalityTestTracker->TeamBasicInfo.StarterID);
            sPersonalityTestTracker->TestState = PERSONALITY_ADVANCE_TO_PARTNER_NICKNAME_1;
            break;
        default:
            break;
    }
}

static void HandlePartnerConfirmYesNo(void)
{
    s32 choice;

    if (sub_80144A4(&choice) != 0)
        return;

    if (choice == 1)
        CommitPendingPartner();
    else {
        CreatePartnerSelectionMenu(sPersonalityTestTracker->TeamBasicInfo.StarterID);
        sPersonalityTestTracker->TestState = PERSONALITY_ADVANCE_TO_PARTNER_NICKNAME_1;
    }
}

static void StartCustomStoryPair(void)
{
    CopyStringtoBuffer(sPersonalityTestTracker->TeamBasicInfo.PartnerNick, gCustomStoryPartnerNick);
    CreateDialogueBoxAndPortrait(gEndIntroText, 0, 0, 0x301);
    sPersonalityTestTracker->TestState = PERSONALITY_ADVANCE_TO_TEST_END;
}

static void AdvanceToPartnerNicknameScreen(void)
{
    s32 temp;

    if (sub_80144A4(&temp) == 0)
        sPersonalityTestTracker->TestState = PERSONALITY_PARTNER_NICKNAME;
}

static void NicknamePartner(void)
{
    CopyStringtoBuffer(sPersonalityTestTracker->TeamBasicInfo.PartnerNick, GetMonSpecies(sPersonalityTestTracker->TeamBasicInfo.PartnerID));
    CreateConfirmNameMenu(3, sPersonalityTestTracker->TeamBasicInfo.PartnerNick);
    sPersonalityTestTracker->TestState = PERSONALITY_END_INTRO;
}

static void PrintEndIntroText(void)
{
    if (sub_8016080()) {
        CleanConfirmNameMenu();
        CreateDialogueBoxAndPortrait(gEndIntroText, 0, 0, 0x301);
        sPersonalityTestTracker->TestState = PERSONALITY_ADVANCE_TO_TEST_END;
    }
}

static void AdvanceToTestEnd(void)
{
    s32 temp;

    if (sub_80144A4(&temp) == 0)
        sPersonalityTestTracker->TestState = PERSONALITY_TEST_END;
}

static void PromptNewQuestion(void)
{
    const PersonalityQuestion *question;

    if (gRuntimeConfig.custom_story)
        question = gCustomStoryQuestionPointerTable[sPersonalityTestTracker->currQuestionIndex];
    else
        question = gPersonalityQuestionPointerTable[sPersonalityTestTracker->currQuestionIndex];

    CreateMenuDialogueBoxAndPortrait(question->question, 0, 0, question->answers, 0, 3, 0, 0, 0x101);
}

static void PrintPersonalityTypeDescription(void)
{
    CopyMonsterNameToBuffer(gFormatBuffer_Monsters[0], sPersonalityTestTracker->TeamBasicInfo.StarterID);
    CreateDialogueBoxAndPortrait(sPersonalityTypeDescriptionTable[sPersonalityTestTracker->playerNature], 0, 0, 0x101);
}

static void PersonalityTest_DisplayStarterSprite(void)
{
    s32 starterID;
    struct OpenedFile *faceFile;
    s32 paletteIndex;
    s32 emotionId;
    const u8 *gfx;
    WindowTemplates stackArray;

    starterID = sPersonalityTestTracker->TeamBasicInfo.StarterID;
    RestoreSavedWindows(&stackArray);
    stackArray.id[1] = sUnknown_80F4244;
    ResetUnusedInputStruct();
    ShowWindows(&stackArray, TRUE, FALSE);
    CallPrepareTextbox_8008C54(1);
    sub_80073B8(1);

    faceFile = GetDialogueSpriteDataPtr(starterID);
    gfx = ((PortraitGfx *)(faceFile->data))->sprites[EMOTION_HAPPY].gfx;
    emotionId = EMOTION_HAPPY;
    for (paletteIndex = 0; paletteIndex < 0x10; paletteIndex++) {
        SetBGPaletteBufferColorArray(paletteIndex + 0xE0, &((PortraitGfx *)(faceFile->data))->sprites[emotionId].pal[paletteIndex]);
    }
    sub_800388C(0xE0, (const RGB_Union *)((PortraitGfx *)(faceFile->data))->sprites[emotionId].pal, 16);
    SetPokeCoinTownPortraitBankInUse(TRUE);

    DisplayMonPortraitSpriteFlipped(1, gfx, 14);
    CloseFile(faceFile);
    sub_80073E0(1);
}
