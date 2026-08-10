#include "global.h"
#include "globaldata.h"
#include "constants/emotions.h"
#include "constants/colors.h"
#include "constants/iq_skill.h"
#include "constants/item.h"
#include "constants/monster.h"
#include "achievements.h"
#include "common_strings.h"
#include "data_serializer.h"
#include "input.h"
#include "items.h"
#include "dungeon_config.h"
#include "kecleon_bros4.h"
#include "memory.h"
#include "menu_input.h"
#include "moves.h"
#include "music_util.h"
#include "other_random.h"
#include "pokemon.h"
#include "pokemon_3.h"
#include "random.h"
#include "runtime.h"
#include "spinda_cafe.h"
#include "string_format.h"
#include "text_1.h"
#include "text_2.h"
#include "text_3.h"

EWRAM_DATA struct SpindaCafeData gSpindaCafeData = {0};

enum JuiceMenuActions {
    JUICE_CANCEL = 1,
    JUICE_MIX,
    JUICE_INFO,
};

enum JuiceStates {
    JUICE_INIT,
    JUICE_MAIN_PROMPT,
    JUICE_MAIN_MENU,
    JUICE_INFO_DLG,
    JUICE_NO_FOOD,
    JUICE_PICK_ITEM_DLG,
    JUICE_PICK_ITEM,
    JUICE_NOT_FOOD,
    JUICE_PICK_MON_DLG,
    JUICE_PICK_MON,
    JUICE_MIXING,
    JUICE_DRANK_SYS,
    JUICE_SPINDA_REACT,
    JUICE_STAT_SYS,
    JUICE_IQ_SKILL,
    JUICE_BYE,
    JUICE_EXIT,
};

typedef struct SpindaJuiceBarWork
{
    s32 currState;
    s32 fallbackState;
    u32 menuAction;
    s32 itemIndex;
    Item item;
    s32 monCount;
    Pokemon *teamMons[MAX_TEAM_MEMBERS];
    MenuItem menuItems[8];
    u16 menuRestrict[8];
    MonPortraitMsg monPortrait;
    MonPortraitMsg *monPortraitPtr;
    WindowTemplates windows;
    bool8 goodFeeling;
    bool8 miracleFeeling;
    bool8 wasGummi;
    s32 iqGain;
    u8 reactEmotion;
    Pokemon *drinkMon;
    u8 iqSkillPre[NUM_IQ_SKILLS];
    u8 iqSkillPost[NUM_IQ_SKILLS];
    s32 availIQSkillPre;
    s32 availIQSkillPost;
    s32 nextIqSkillCheck;
    u8 msgKinds[8];
    u8 msgAmounts[8];
    s32 msgCount;
    s32 msgIndex;
} SpindaJuiceBarWork;

enum JuiceMsgKind {
    JUICE_MSG_ATK,
    JUICE_MSG_SPATK,
    JUICE_MSG_DEF,
    JUICE_MSG_SPDEF,
    JUICE_MSG_ALL,
    JUICE_MSG_HP,
    JUICE_MSG_LEVEL,
    JUICE_MSG_GINSENG,
};

static EWRAM_INIT SpindaJuiceBarWork *sJuiceWork = {NULL};

#include "data/spinda_cafe.h"
#include "data/spinda_juice_effects.h"

static void UpdateJuiceState(u32 newState);
static void SetupJuiceWindows(void);
static void UpdateJuiceDialogue(void);
static void BuildJuiceMainMenu(void);
static void BuildJuiceMonMenu(void);
static void HandleJuiceMainMenu(void);
static void HandleJuiceMonMenu(void);
static void HandleJuiceItemPick(void);
static void ApplyJuiceDrink(Pokemon *mon);
static void SetSpindaEmotion(u8 emotion);
static void QueueJuiceMsg(u8 kind, u8 amount);
static void AddJuiceHP(Pokemon *mon, s32 amount);
static void AddJuiceIQ(Pokemon *mon, s32 amount);
static bool8 AddJuiceOffense(Pokemon *mon, s32 which, s32 amount);
static bool8 BoostRandomOffense(Pokemon *mon, s32 amount);
static bool8 ApplyJoySeedLevelUp(Pokemon *mon);
static bool8 ApplyGinsengBoost(Pokemon *mon);
static void ApplyPermanentJuiceEffect(Pokemon *mon, u8 itemId);
static void ApplyMiracleBonus(Pokemon *mon);
static void ShowNextStatSystemMessage(void);
static void ShowNextIqSkillMessage(void);
static bool8 IsJuiceFoodItem(u8 itemId);
static bool8 TeamHasJuiceFood(void);
static void CollectTeamMons(void);

void InitSpindaCafe(void)
{
    /* EWRAM BSS / DATA already zeroed; keep API for parity with achievements. */
}

void ResetSpindaCafeData(void)
{
    MemoryFill8(&gSpindaCafeData, 0, sizeof(gSpindaCafeData));
}

u8 GetSpindaCafeCatalogTier(void)
{
    u16 n = gSpindaCafeData.itemsRecycled;
    u8 tier = 1;

    if (n >= 8)
        tier = 2;
    if (n >= 24)
        tier = 3;
    if (n >= 48)
        tier = 4;
    return tier;
}

void NoteSpindaCafeItemsRecycled(u16 count)
{
    u32 sum = gSpindaCafeData.itemsRecycled + count;

    if (sum > 0xFFFF)
        sum = 0xFFFF;
    gSpindaCafeData.itemsRecycled = sum;
    gSpindaCafeData.catalogTier = GetSpindaCafeCatalogTier();
}

u32 SaveSpindaCafeData(u8 *buffer, u32 bufLen)
{
    DataSerializer seri;

    InitBitWriter(&seri, buffer, bufLen);
    WriteBits(&seri, &gSpindaCafeData.itemsRecycled, 16);
    WriteBits(&seri, &gSpindaCafeData.catalogTier, 8);
    WriteBits(&seri, &gSpindaCafeData.ticketType, 8);
    FinishBitSerializer(&seri);
    return seri.count;
}

u32 RestoreSpindaCafeData(u8 *buffer, u32 bufLen)
{
    DataSerializer seri;

    ResetSpindaCafeData();
    InitBitReader(&seri, buffer, bufLen);
    ReadBits(&seri, &gSpindaCafeData.itemsRecycled, 16);
    ReadBits(&seri, &gSpindaCafeData.catalogTier, 8);
    ReadBits(&seri, &gSpindaCafeData.ticketType, 8);
    FinishBitSerializer(&seri);
    if (gSpindaCafeData.catalogTier == 0)
        gSpindaCafeData.catalogTier = GetSpindaCafeCatalogTier();
    return seri.count;
}

static bool8 IsJuiceFoodItem(u8 itemId)
{
    u8 cat;

    if (itemId == ITEM_NOTHING)
        return FALSE;
    if (IsGummiItem(itemId))
        return TRUE;
    cat = GetItemCategory(itemId);
    return cat == CATEGORY_BERRIES_SEEDS_VITAMINS || cat == CATEGORY_FOOD_GUMMIES;
}

static bool8 TeamHasJuiceFood(void)
{
    s32 i;

    for (i = 0; i < INVENTORY_SIZE; i++) {
        if (ItemExists(&gTeamInventoryRef->teamItems[i])
            && IsJuiceFoodItem(gTeamInventoryRef->teamItems[i].id))
            return TRUE;
    }
    return FALSE;
}

static void CollectTeamMons(void)
{
    s32 i;

    sJuiceWork->monCount = 0;
    for (i = 0; i < NUM_MONSTERS && sJuiceWork->monCount < MAX_TEAM_MEMBERS; i++) {
        Pokemon *mon = &gRecruitedPokemonRef->pokemon[i];

        if (PokemonExists(mon) && PokemonIsOnTeam(mon))
            sJuiceWork->teamMons[sJuiceWork->monCount++] = mon;
    }
}

bool8 CreateSpindaJuiceBar(s32 mode)
{
    OpenedFile *faceFile;
    u8 *monName;

    (void)mode;
    if (!gRuntimeConfig.spinda_cafe)
        return FALSE;

    ResetUnusedInputStruct();
    ShowWindows(NULL, TRUE, TRUE);
    sJuiceWork = MemoryAlloc(sizeof(SpindaJuiceBarWork), MEMALLOC_GROUP_8);
    MemoryFill8(sJuiceWork, 0, sizeof(SpindaJuiceBarWork));
    sJuiceWork->menuAction = JUICE_MIX;

    CopyYellowMonsterNametoBuffer(gSpeakerNameBuffer, MONSTER_SPINDA);
    CopyYellowMonsterNametoBuffer(gFormatBuffer_Monsters[7], MONSTER_SPINDA);
    monName = GetMonSpecies(MONSTER_SPINDA);
    strcpy(gFormatBuffer_Monsters[6], monName);

    sJuiceWork->monPortraitPtr = &sJuiceWork->monPortrait;
    faceFile = GetDialogueSpriteDataPtr(MONSTER_SPINDA);
    sJuiceWork->monPortrait.faceFile = faceFile;
    sJuiceWork->monPortrait.faceData = (PortraitGfx *)faceFile->data;
    sJuiceWork->monPortrait.spriteId = 0;
    sJuiceWork->monPortrait.flip = FALSE;
    sJuiceWork->monPortrait.unkE = 0;
    sJuiceWork->monPortrait.pos.x = 2;
    sJuiceWork->monPortrait.pos.y = 8;

    CollectTeamMons();
    UpdateJuiceState(JUICE_INIT);
    return TRUE;
}

u32 SpindaJuiceBarCallback(void)
{
    switch (sJuiceWork->currState) {
        case JUICE_MAIN_PROMPT:
            HandleJuiceMainMenu();
            break;
        case JUICE_PICK_MON_DLG:
            HandleJuiceMonMenu();
            break;
        case JUICE_PICK_ITEM:
            HandleJuiceItemPick();
            break;
        case JUICE_EXIT:
            return 3;
        default: {
            s32 tmp;

            if (sub_80144A4(&tmp) == 0)
                UpdateJuiceState(sJuiceWork->fallbackState);
            break;
        }
    }
    return 0;
}

void DestroySpindaJuiceBar(void)
{
    if (sJuiceWork != NULL) {
        CloseFile(sJuiceWork->monPortrait.faceFile);
        FREE_AND_SET_NULL(sJuiceWork);
    }
}

static void UpdateJuiceState(u32 newState)
{
    sJuiceWork->currState = newState;
    SetupJuiceWindows();
    UpdateJuiceDialogue();
}

static void SetupJuiceWindows(void)
{
    s32 i;

    RestoreSavedWindows(&sJuiceWork->windows);
    for (i = 0; i < 4; i++)
        sJuiceWork->windows.id[i] = sSpindaCafeDummyWin;
    ResetUnusedInputStruct();
    ShowWindows(&sJuiceWork->windows, TRUE, TRUE);
}

static void BuildJuiceMainMenu(void)
{
    s32 n = 0;

    MemoryFill16(sJuiceWork->menuRestrict, 0, sizeof(sJuiceWork->menuRestrict));
    sJuiceWork->menuItems[n].text = sMixDrink;
    sJuiceWork->menuItems[n].menuAction = JUICE_MIX;
    n++;
    sJuiceWork->menuItems[n].text = gCommonInfo[0];
    sJuiceWork->menuItems[n].menuAction = JUICE_INFO;
    n++;
    sJuiceWork->menuItems[n].text = gCommonCancel[0];
    sJuiceWork->menuItems[n].menuAction = JUICE_CANCEL;
    n++;
    sJuiceWork->menuItems[n].text = NULL;
    sJuiceWork->menuItems[n].menuAction = JUICE_CANCEL;
}

static void BuildJuiceMonMenu(void)
{
    s32 i;
    s32 n = 0;

    MemoryFill16(sJuiceWork->menuRestrict, 0, sizeof(sJuiceWork->menuRestrict));
    for (i = 0; i < sJuiceWork->monCount; i++) {
        PrintColoredPokeNameToBuffer(gFormatBuffer_Names[i], sJuiceWork->teamMons[i], COLOR_WHITE_2);
        sJuiceWork->menuItems[n].text = gFormatBuffer_Names[i];
        sJuiceWork->menuItems[n].menuAction = i + 10;
        n++;
    }
    sJuiceWork->menuItems[n].text = gCommonCancel[0];
    sJuiceWork->menuItems[n].menuAction = JUICE_CANCEL;
    n++;
    sJuiceWork->menuItems[n].text = NULL;
    sJuiceWork->menuItems[n].menuAction = JUICE_CANCEL;
}

static void SetSpindaEmotion(u8 emotion)
{
    if (IsPokemonDialogueSpriteAvail(MONSTER_SPINDA, emotion))
        sJuiceWork->monPortrait.spriteId = emotion;
    else
        sJuiceWork->monPortrait.spriteId = EMOTION_NORMAL;
}

static void QueueJuiceMsg(u8 kind, u8 amount)
{
    if (sJuiceWork->msgCount >= (s32)ARRAY_COUNT(sJuiceWork->msgKinds))
        return;
    sJuiceWork->msgKinds[sJuiceWork->msgCount] = kind;
    sJuiceWork->msgAmounts[sJuiceWork->msgCount] = amount;
    sJuiceWork->msgCount++;
}

static void AddJuiceHP(Pokemon *mon, s32 amount)
{
    s32 before = mon->pokeHP;

    if (amount <= 0)
        return;
    mon->pokeHP += amount;
    if (mon->pokeHP > 999)
        mon->pokeHP = 999;
    if (mon->pokeHP > before)
        QueueJuiceMsg(JUICE_MSG_HP, mon->pokeHP - before);
}

static void AddJuiceIQ(Pokemon *mon, s32 amount)
{
    if (amount <= 0)
        return;
    if (mon->IQ >= 999)
        return;
    mon->IQ += amount;
    if (mon->IQ > 999)
        mon->IQ = 999;
}

static bool8 AddJuiceOffense(Pokemon *mon, s32 which, s32 amount)
{
    s32 before;
    s32 after;
    u8 *stat;
    u8 msgKind;

    if (amount <= 0)
        return FALSE;

    switch (which) {
        case 0:
            stat = &mon->offense.att[OFFENSE_NRM];
            msgKind = JUICE_MSG_ATK;
            break;
        case 1:
            stat = &mon->offense.att[OFFENSE_SP];
            msgKind = JUICE_MSG_SPATK;
            break;
        case 2:
            stat = &mon->offense.def[OFFENSE_NRM];
            msgKind = JUICE_MSG_DEF;
            break;
        default:
            stat = &mon->offense.def[OFFENSE_SP];
            msgKind = JUICE_MSG_SPDEF;
            break;
    }

    before = *stat;
    after = before + amount;
    if (after > 255)
        after = 255;
    *stat = after;
    if (after > before) {
        QueueJuiceMsg(msgKind, after - before);
        return TRUE;
    }
    return FALSE;
}

static bool8 BoostRandomOffense(Pokemon *mon, s32 amount)
{
    s32 order[4];
    s32 i, j, t;

    for (i = 0; i < 4; i++)
        order[i] = i;
    for (i = 3; i > 0; i--) {
        j = RandInt(i + 1);
        t = order[i];
        order[i] = order[j];
        order[j] = t;
    }

    for (i = 0; i < 4; i++) {
        if (AddJuiceOffense(mon, order[i], amount))
            return TRUE;
    }
    return FALSE;
}

static bool8 ApplyJoySeedLevelUp(Pokemon *mon)
{
    LevelData levelData;
    u16 learnedMoves[16];
    s32 movesCount;
    s32 i;
    s32 atk, spAtk, def, spDef;
    s32 newLevel;

    if (mon->level >= 100)
        return FALSE;

    newLevel = mon->level + 1;
    GetLvlUpEntry(&levelData, mon->speciesNum, newLevel);
    mon->level = newLevel;
    mon->currExp = levelData.expRequired;
    mon->pokeHP += levelData.gainHP;
    if (mon->pokeHP > 999)
        mon->pokeHP = 999;

    atk = mon->offense.att[0] + levelData.gainAtt[0];
    spAtk = mon->offense.att[1] + levelData.gainAtt[1];
    def = mon->offense.def[0] + levelData.gainDef[0];
    spDef = mon->offense.def[1] + levelData.gainDef[1];
    if (atk > 255) atk = 255;
    if (spAtk > 255) spAtk = 255;
    if (def > 255) def = 255;
    if (spDef > 255) spDef = 255;
    mon->offense.att[0] = atk;
    mon->offense.att[1] = spAtk;
    mon->offense.def[0] = def;
    mon->offense.def[1] = spDef;

    movesCount = GetMovesLearnedAtLevel(learnedMoves, mon->speciesNum, mon->level, 999);
    for (i = 0; i < movesCount; i++) {
        s32 moveSlot;

        for (moveSlot = 0; moveSlot < MAX_MON_MOVES; moveSlot++) {
            if (!MoveFlagExists(&mon->moves[moveSlot])) {
                InitZeroedPPPokemonMove(&mon->moves[moveSlot], learnedMoves[i]);
                break;
            }
        }
    }

    QueueJuiceMsg(JUICE_MSG_LEVEL, 1);
    return TRUE;
}

static bool8 ApplyGinsengBoost(Pokemon *mon)
{
    s32 i;
    s32 moveBoost = 1;
    bool8 boosted = FALSE;

    if (RandInt(100) < gGinsengPlus3BoostChance)
        moveBoost = 3;

    for (i = 0; i < MAX_MON_MOVES; i++) {
        Move *move = &mon->moves[i];

        if (MoveFlagExists(move) && (move->moveFlags & MOVE_FLAG_SET)) {
            if (GetMoveBasePower(move) != 0) {
                s32 before = move->ginseng;
                s32 maxBoost = GetMoveMaxUpgradeLevel(move);

                move->ginseng += moveBoost;
                if (move->ginseng >= maxBoost)
                    move->ginseng = maxBoost;
                if (move->ginseng != before)
                    boosted = TRUE;
            }
        }
    }

    if (boosted)
        QueueJuiceMsg(JUICE_MSG_GINSENG, moveBoost);
    return boosted;
}

static void ApplyPermanentJuiceEffect(Pokemon *mon, u8 itemId)
{
    Gummi gummi;

    if (IsGummiItem(itemId)) {
        sJuiceWork->wasGummi = TRUE;
        GetGummiItemStatBoost(mon, itemId, FALSE, &gummi);
        if (gummi.flags == 0) {
            BoostRandomOffense(mon, 1);
        }
        else if (gummi.flags == 0xF) {
            QueueJuiceMsg(JUICE_MSG_ALL, 1);
        }
        else {
            if (gummi.flags & 1)
                QueueJuiceMsg(JUICE_MSG_ATK, 1);
            if (gummi.flags & 2)
                QueueJuiceMsg(JUICE_MSG_SPATK, 1);
            if (gummi.flags & 4)
                QueueJuiceMsg(JUICE_MSG_DEF, 1);
            if (gummi.flags & 8)
                QueueJuiceMsg(JUICE_MSG_SPDEF, 1);
        }
        return;
    }

    switch (itemId) {
        case ITEM_PROTEIN:
            AddJuiceOffense(mon, 0, 3);
            break;
        case ITEM_CALCIUM:
            AddJuiceOffense(mon, 1, 3);
            break;
        case ITEM_IRON:
            AddJuiceOffense(mon, 2, 3);
            break;
        case ITEM_ZINC:
            AddJuiceOffense(mon, 3, 3);
            break;
        case ITEM_LIFE_SEED:
            AddJuiceHP(mon, 3);
            break;
        case ITEM_SITRUS_BERRY:
            AddJuiceHP(mon, 2);
            break;
        case ITEM_JOY_SEED:
            ApplyJoySeedLevelUp(mon);
            break;
        case ITEM_GINSENG:
            ApplyGinsengBoost(mon);
            break;
        default:
            break;
    }
}

static void ApplyMiracleBonus(Pokemon *mon)
{
    s32 amount = 2 + RandInt(4);
    s32 which = RandInt(6);

    switch (which) {
        case 0:
            AddJuiceHP(mon, amount);
            break;
        case 1:
            AddJuiceOffense(mon, 0, amount);
            break;
        case 2:
            AddJuiceOffense(mon, 1, amount);
            break;
        case 3:
            AddJuiceOffense(mon, 2, amount);
            break;
        case 4:
            AddJuiceOffense(mon, 3, amount);
            break;
        default:
            AddJuiceIQ(mon, amount);
            break;
    }
}

static void ApplyJuiceDrink(Pokemon *mon)
{
    s32 iqBefore;
    u8 itemId;
    const JuiceGoodFeelingEntry *goodEntry = NULL;

    sJuiceWork->goodFeeling = FALSE;
    sJuiceWork->miracleFeeling = FALSE;
    sJuiceWork->wasGummi = FALSE;
    sJuiceWork->iqGain = 0;
    sJuiceWork->msgCount = 0;
    sJuiceWork->msgIndex = 0;
    sJuiceWork->reactEmotion = EMOTION_NORMAL;

    PrintColoredPokeNameToBuffer(gFormatBuffer_Names[0], mon, COLOR_CYAN);
    sJuiceWork->drinkMon = mon;
    iqBefore = mon->IQ;
    sJuiceWork->availIQSkillPre = GetNumAvailableIQSkills(sJuiceWork->iqSkillPre, mon->IQ);
    sJuiceWork->nextIqSkillCheck = 1;

    itemId = sJuiceWork->item.id;
    ApplyPermanentJuiceEffect(mon, itemId);

    /* Quality roll: miracle (~1%) beats good feeling. */
    if (JuiceItemAllowsMiracle(itemId) && RandInt(100) < 1) {
        sJuiceWork->miracleFeeling = TRUE;
        ApplyMiracleBonus(mon);
        sJuiceWork->reactEmotion = EMOTION_JOYOUS;
    }
    else if (!JuiceItemSkipsGoodFeeling(itemId)) {
        s32 goodChance = 0;

        if (IsGummiItem(itemId))
            goodChance = 25;
        else {
            goodEntry = FindJuiceGoodFeeling(itemId);
            if (goodEntry != NULL)
                goodChance = goodEntry->chance;
        }

        if (goodChance > 0 && RandInt(100) < goodChance) {
            sJuiceWork->goodFeeling = TRUE;
            if (IsGummiItem(itemId))
                AddJuiceIQ(mon, 2);
            else if (goodEntry != NULL) {
                AddJuiceIQ(mon, goodEntry->iqBonus);
                AddJuiceHP(mon, goodEntry->hpBonus);
            }
            sJuiceWork->reactEmotion = EMOTION_JOYOUS;
        }
        else if (sJuiceWork->wasGummi) {
            sJuiceWork->reactEmotion = EMOTION_HAPPY;
        }
        else if (sJuiceWork->msgCount > 0 || mon->IQ != iqBefore) {
            sJuiceWork->reactEmotion = EMOTION_HAPPY;
        }
        else {
            sJuiceWork->reactEmotion = EMOTION_SAD;
        }
    }
    else if (sJuiceWork->msgCount > 0 || mon->IQ != iqBefore) {
        sJuiceWork->reactEmotion = EMOTION_HAPPY;
    }
    else {
        sJuiceWork->reactEmotion = EMOTION_SAD;
    }

    if (mon->IQ < 1)
        mon->IQ = 1;
    if (mon->IQ > 999)
        mon->IQ = 999;
    sJuiceWork->iqGain = mon->IQ - iqBefore;
    if (sJuiceWork->iqGain < 0)
        sJuiceWork->iqGain = 0;
    sJuiceWork->availIQSkillPost = GetNumAvailableIQSkills(sJuiceWork->iqSkillPost, mon->IQ);
    ShiftItemsDownFrom(sJuiceWork->itemIndex);
}

static void ShowNextStatSystemMessage(void)
{
    sJuiceWork->fallbackState = JUICE_MAIN_PROMPT;

    while (sJuiceWork->msgIndex < sJuiceWork->msgCount) {
        u8 kind = sJuiceWork->msgKinds[sJuiceWork->msgIndex];
        u8 amount = sJuiceWork->msgAmounts[sJuiceWork->msgIndex];

        sJuiceWork->msgIndex++;
        gFormatArgs[0] = amount;

        if (sJuiceWork->msgIndex < sJuiceWork->msgCount || sJuiceWork->iqGain > 0)
            sJuiceWork->fallbackState = JUICE_STAT_SYS;

        switch (kind) {
            case JUICE_MSG_ALL:
                CreateDialogueBoxAndPortrait(SPINDA_PLUS_ALL, 0, NULL, 0x301);
                return;
            case JUICE_MSG_ATK:
                CreateDialogueBoxAndPortrait(SPINDA_PLUS_ATK, 0, NULL, 0x301);
                return;
            case JUICE_MSG_SPATK:
                CreateDialogueBoxAndPortrait(SPINDA_PLUS_SPATK, 0, NULL, 0x301);
                return;
            case JUICE_MSG_DEF:
                CreateDialogueBoxAndPortrait(SPINDA_PLUS_DEF, 0, NULL, 0x301);
                return;
            case JUICE_MSG_SPDEF:
                CreateDialogueBoxAndPortrait(SPINDA_PLUS_SPDEF, 0, NULL, 0x301);
                return;
            case JUICE_MSG_HP:
                CreateDialogueBoxAndPortrait(SPINDA_PLUS_HP, 0, NULL, 0x301);
                return;
            case JUICE_MSG_LEVEL:
                CreateDialogueBoxAndPortrait(SPINDA_LEVEL_UP, 0, NULL, 0x301);
                return;
            case JUICE_MSG_GINSENG:
                CreateDialogueBoxAndPortrait(SPINDA_GINSENG, 0, NULL, 0x301);
                return;
        }
    }

    if (sJuiceWork->iqGain > 0) {
        sJuiceWork->iqGain = 0;
        sJuiceWork->nextIqSkillCheck = 1;
        sJuiceWork->fallbackState = JUICE_IQ_SKILL;
        CreateDialogueBoxAndPortrait(SPINDA_IQ_UP, 0, NULL, 0x101);
        return;
    }

    UpdateJuiceState(JUICE_MAIN_PROMPT);
}

/* Same pattern as town gummi feeding (code_80227B8): announce each newly available skill. */
static void ShowNextIqSkillMessage(void)
{
    s32 i;

    sJuiceWork->fallbackState = JUICE_MAIN_PROMPT;

    while (sJuiceWork->nextIqSkillCheck < NUM_IQ_SKILLS) {
        u8 skill = sJuiceWork->nextIqSkillCheck;
        bool8 hadBefore = FALSE;
        bool8 hasNow = FALSE;

        for (i = 0; i < sJuiceWork->availIQSkillPre; i++) {
            if (sJuiceWork->iqSkillPre[i] == skill) {
                hadBefore = TRUE;
                break;
            }
        }
        for (i = 0; i < sJuiceWork->availIQSkillPost; i++) {
            if (sJuiceWork->iqSkillPost[i] == skill) {
                hasNow = TRUE;
                break;
            }
        }

        sJuiceWork->nextIqSkillCheck++;
        if (hadBefore != hasNow) {
            sJuiceWork->fallbackState = JUICE_IQ_SKILL;
            /* Plain name so only the skill is cyan-highlighted. */
            if (sJuiceWork->drinkMon != NULL)
                PrintPokeNameToBuffer(gFormatBuffer_Names[0], sJuiceWork->drinkMon);
            strcpy(gFormatBuffer_Items[1], GetIQSkillName(skill));
            PlaySound(203);
            CreateDialogueBoxAndPortrait(SPINDA_IQ_LEARNED, 0, NULL, 0x101);
            return;
        }
    }

    UpdateJuiceState(JUICE_MAIN_PROMPT);
}

static void UpdateJuiceDialogue(void)
{
    switch (sJuiceWork->currState) {
        case JUICE_INIT:
            SetSpindaEmotion(EMOTION_NORMAL);
            sJuiceWork->fallbackState = JUICE_MAIN_PROMPT;
            CreateDialogueBoxAndPortrait(SPINDA_WELCOME, 0, sJuiceWork->monPortraitPtr, 0x10D);
            break;
        case JUICE_MAIN_PROMPT:
            SetSpindaEmotion(EMOTION_NORMAL);
            BuildJuiceMainMenu();
            CreateMenuDialogueBoxAndPortrait(SPINDA_HOW_MAY, 0, sJuiceWork->menuAction,
                sJuiceWork->menuItems, sJuiceWork->menuRestrict, 4, 0, sJuiceWork->monPortraitPtr, 0xC);
            break;
        case JUICE_INFO_DLG:
            SetSpindaEmotion(EMOTION_NORMAL);
            sJuiceWork->fallbackState = JUICE_MAIN_PROMPT;
            CreateDialogueBoxAndPortrait(SPINDA_INFO, 0, sJuiceWork->monPortraitPtr, 0x10D);
            break;
        case JUICE_NO_FOOD:
            SetSpindaEmotion(EMOTION_SAD);
            sJuiceWork->fallbackState = JUICE_MAIN_PROMPT;
            CreateDialogueBoxAndPortrait(SPINDA_NO_FOOD, 0, sJuiceWork->monPortraitPtr, 0x10D);
            break;
        case JUICE_PICK_ITEM_DLG:
            SetSpindaEmotion(EMOTION_NORMAL);
            sJuiceWork->fallbackState = JUICE_PICK_ITEM;
            CreateDialogueBoxAndPortrait(SPINDA_PICK_ITEM, 0, sJuiceWork->monPortraitPtr, 0x10D);
            break;
        case JUICE_PICK_ITEM:
            sub_801A5D8(1, 3, NULL, 10);
            sub_801A8D0(TRUE);
            break;
        case JUICE_NOT_FOOD:
            SetSpindaEmotion(EMOTION_SAD);
            sJuiceWork->fallbackState = JUICE_MAIN_PROMPT;
            CreateDialogueBoxAndPortrait(SPINDA_NOT_FOOD, 0, sJuiceWork->monPortraitPtr, 0x10D);
            break;
        case JUICE_PICK_MON_DLG:
            SetSpindaEmotion(EMOTION_NORMAL);
            BuildJuiceMonMenu();
            CreateMenuDialogueBoxAndPortrait(SPINDA_PICK_MON, 0, 10,
                sJuiceWork->menuItems, sJuiceWork->menuRestrict, 4, 0, sJuiceWork->monPortraitPtr, 0xC);
            break;
        case JUICE_MIXING:
            SetSpindaEmotion(EMOTION_HAPPY);
            sJuiceWork->fallbackState = JUICE_DRANK_SYS;
            CreateDialogueBoxAndPortrait(SPINDA_MIXING, 0, sJuiceWork->monPortraitPtr, 0x10D);
            break;
        case JUICE_DRANK_SYS:
            /* System narration — no Spinda portrait. */
            sJuiceWork->fallbackState = JUICE_SPINDA_REACT;
            CreateDialogueBoxAndPortrait(SPINDA_DRANK_SYS, 0, NULL, 0x101);
            break;
        case JUICE_SPINDA_REACT:
            SetSpindaEmotion(sJuiceWork->reactEmotion);
            if (sJuiceWork->msgCount > 0 || sJuiceWork->iqGain > 0)
                sJuiceWork->fallbackState = JUICE_STAT_SYS;
            else
                sJuiceWork->fallbackState = JUICE_MAIN_PROMPT;

            if (sJuiceWork->miracleFeeling)
                CreateDialogueBoxAndPortrait(SPINDA_REACT_MIRACLE, 0, sJuiceWork->monPortraitPtr, 0x10D);
            else if (sJuiceWork->goodFeeling)
                CreateDialogueBoxAndPortrait(SPINDA_REACT_GOOD, 0, sJuiceWork->monPortraitPtr, 0x10D);
            else if (sJuiceWork->wasGummi)
                CreateDialogueBoxAndPortrait(SPINDA_REACT_GUMMI, 0, sJuiceWork->monPortraitPtr, 0x10D);
            else if (sJuiceWork->msgCount > 0 || sJuiceWork->iqGain > 0)
                CreateDialogueBoxAndPortrait(SPINDA_REACT_OK, 0, sJuiceWork->monPortraitPtr, 0x10D);
            else
                CreateDialogueBoxAndPortrait(SPINDA_REACT_NOTHING, 0, sJuiceWork->monPortraitPtr, 0x10D);
            break;
        case JUICE_STAT_SYS:
            ShowNextStatSystemMessage();
            break;
        case JUICE_IQ_SKILL:
            ShowNextIqSkillMessage();
            break;
        case JUICE_BYE:
            SetSpindaEmotion(EMOTION_HAPPY);
            sJuiceWork->fallbackState = JUICE_EXIT;
            CreateDialogueBoxAndPortrait(SPINDA_BYE, 0, sJuiceWork->monPortraitPtr, 0x10D);
            break;
        case JUICE_MAIN_MENU:
        case JUICE_PICK_MON:
        case JUICE_EXIT:
        default:
            break;
    }
}

static void HandleJuiceMainMenu(void)
{
    s32 menuAction;

    if (sub_80144A4(&menuAction))
        return;

    sJuiceWork->menuAction = menuAction;
    switch (menuAction) {
        case JUICE_CANCEL:
            UpdateJuiceState(JUICE_BYE);
            break;
        case JUICE_INFO:
            UpdateJuiceState(JUICE_INFO_DLG);
            break;
        case JUICE_MIX:
            if (!TeamHasJuiceFood())
                UpdateJuiceState(JUICE_NO_FOOD);
            else
                UpdateJuiceState(JUICE_PICK_ITEM_DLG);
            break;
    }
}

static void HandleJuiceItemPick(void)
{
    switch (sub_801A6E8(TRUE)) {
        case 3: {
            sJuiceWork->itemIndex = sub_801A8AC();
            sJuiceWork->item = gTeamInventoryRef->teamItems[sJuiceWork->itemIndex];
            sub_801A928();
            if (!IsJuiceFoodItem(sJuiceWork->item.id))
                UpdateJuiceState(JUICE_NOT_FOOD);
            else if (sJuiceWork->monCount <= 0)
                UpdateJuiceState(JUICE_MAIN_PROMPT);
            else
                UpdateJuiceState(JUICE_PICK_MON_DLG);
            break;
        }
        case 2:
            sub_801A928();
            UpdateJuiceState(JUICE_MAIN_PROMPT);
            break;
    }
}

static void HandleJuiceMonMenu(void)
{
    s32 menuAction;

    if (sub_80144A4(&menuAction))
        return;

    if (menuAction == JUICE_CANCEL) {
        UpdateJuiceState(JUICE_MAIN_PROMPT);
        return;
    }

    if (menuAction >= 10 && menuAction < 10 + sJuiceWork->monCount) {
        ApplyJuiceDrink(sJuiceWork->teamMons[menuAction - 10]);
        UpdateJuiceState(JUICE_MIXING);
    }
}
