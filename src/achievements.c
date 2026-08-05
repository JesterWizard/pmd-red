#include "global.h"
#include "globaldata.h"
#include "achievements.h"
#include "adventure_info.h"
#include "constants/dungeon.h"
#include "constants/item.h"
#include "constants/monster.h"
#include "items.h"
#include "memory.h"
#include "dungeon_message.h"
#include "music.h"
#include "pokemon.h"
#include "rescue_team_info.h"
#include "runtime.h"
#include "string_format.h"
#include "textbox.h"

enum AchievementRewardType
{
    ACH_REWARD_NONE,
    ACH_REWARD_MONEY,
    ACH_REWARD_RANK_PTS,
    ACH_REWARD_STORAGE_ITEM,
    ACH_REWARD_MONEY_AND_ITEM,
};

struct AchievementDef
{
    u8 id;
    u8 rewardType;
    u16 rewardAmount;   /* money, rank pts, or item count */
    u16 rewardItemId;   /* for item rewards */
    u16 rewardItemQty;
};

static const struct AchievementDef sAchievementDefs[ACH_MAX] = {
    [ACH_FIRST_RESCUE]   = { ACH_FIRST_RESCUE,   ACH_REWARD_MONEY,            500,  0, 0 },
    [ACH_RESCUES_100]    = { ACH_RESCUES_100,    ACH_REWARD_MONEY_AND_ITEM,  5000,  ITEM_REVIVER_SEED, 3 },
    [ACH_RESCUES_500]    = { ACH_RESCUES_500,    ACH_REWARD_MONEY,           20000, 0, 0 },
    [ACH_RESCUES_1000]   = { ACH_RESCUES_1000,   ACH_REWARD_MONEY_AND_ITEM, 50000,  ITEM_REVIVER_SEED, 5 },
    [ACH_ENEMIES_1000]   = { ACH_ENEMIES_1000,   ACH_REWARD_RANK_PTS,         500,  0, 0 },
    [ACH_CRITS_100]      = { ACH_CRITS_100,      ACH_REWARD_STORAGE_ITEM,       0,  ITEM_SCOPE_LENS, 1 },
    [ACH_BOSS_NO_DAMAGE] = { ACH_BOSS_NO_DAMAGE, ACH_REWARD_MONEY,          10000,  0, 0 },
    [ACH_STATUS_KO]      = { ACH_STATUS_KO,      ACH_REWARD_STORAGE_ITEM,       0,  ITEM_PECHA_SCARF, 1 },
    [ACH_FLOORS_100]     = { ACH_FLOORS_100,     ACH_REWARD_MONEY,           2000,  0, 0 },
    [ACH_FLOORS_1000]    = { ACH_FLOORS_1000,    ACH_REWARD_MONEY,          15000,  0, 0 },
    [ACH_ALL_DUNGEONS]   = { ACH_ALL_DUNGEONS,   ACH_REWARD_MONEY,          30000,  0, 0 },
    [ACH_RECRUIT_50]     = { ACH_RECRUIT_50,     ACH_REWARD_MONEY,           5000,  0, 0 },
    [ACH_RECRUIT_ALL]    = { ACH_RECRUIT_ALL,    ACH_REWARD_MONEY,          50000,  0, 0 },
    [ACH_ALL_TMS]        = { ACH_ALL_TMS,        ACH_REWARD_MONEY,          20000,  0, 0 },
    [ACH_ALL_ITEMS]      = { ACH_ALL_ITEMS,      ACH_REWARD_MONEY_AND_ITEM, 50000,  ITEM_REVIVER_ORB, 1 },
};

static const u8 *const sAchievementNames[ACH_MAX] = {
    [ACH_FIRST_RESCUE]   = _("First Rescue"),
    [ACH_RESCUES_100]    = _("100 Rescues"),
    [ACH_RESCUES_500]    = _("500 Rescues"),
    [ACH_RESCUES_1000]   = _("1000 Rescues"),
    [ACH_ENEMIES_1000]   = _("1000 Enemies Defeated"),
    [ACH_CRITS_100]      = _("100 Critical Hits"),
    [ACH_BOSS_NO_DAMAGE] = _("Flawless Boss Clear"),
    [ACH_STATUS_KO]      = _("Status Effect KO"),
    [ACH_FLOORS_100]     = _("100 Floors Explored"),
    [ACH_FLOORS_1000]    = _("1000 Floors Explored"),
    [ACH_ALL_DUNGEONS]   = _("Discover Every Dungeon"),
    [ACH_RECRUIT_50]     = _("Recruit 50 Pokémon"),
    [ACH_RECRUIT_ALL]    = _("Recruit Every Species"),
    [ACH_ALL_TMS]        = _("Collect Every TM"),
    [ACH_ALL_ITEMS]      = _("Collect Every Item"),
};

static const u8 *const sAchievementRewardTexts[ACH_MAX] = {
    [ACH_FIRST_RESCUE]   = _("500 Poké"),
    [ACH_RESCUES_100]    = _("5000 Poké + Reviver Seeds"),
    [ACH_RESCUES_500]    = _("20000 Poké"),
    [ACH_RESCUES_1000]   = _("50000 Poké + Reviver Seeds"),
    [ACH_ENEMIES_1000]   = _("500 Rank Points"),
    [ACH_CRITS_100]      = _("Scope Lens"),
    [ACH_BOSS_NO_DAMAGE] = _("10000 Poké"),
    [ACH_STATUS_KO]      = _("Pecha Scarf"),
    [ACH_FLOORS_100]     = _("2000 Poké"),
    [ACH_FLOORS_1000]    = _("15000 Poké"),
    [ACH_ALL_DUNGEONS]   = _("30000 Poké"),
    [ACH_RECRUIT_50]     = _("5000 Poké"),
    [ACH_RECRUIT_ALL]    = _("50000 Poké"),
    [ACH_ALL_TMS]        = _("20000 Poké"),
    [ACH_ALL_ITEMS]      = _("50000 Poké + Reviver Orb"),
};

static const u8 sAchievementUnlockedMsg[] = _(
    "{CENTER_ALIGN}Achievement unlocked!\n{CENTER_ALIGN}{MOVE_ITEM_0}\n{CENTER_ALIGN}Reward: {MOVE_ITEM_1}");

static const u8 sRankBagUpgradeMsg[] = _(
    "{CENTER_ALIGN}Toolbox storage increased from\n"
    "{CENTER_ALIGN}{COLOR CYAN}{VALUE_0}{RESET} -> {COLOR CYAN}{VALUE_1}{RESET}");

static const u8 sRankStorageUpgradeMsg[] = _(
    "{CENTER_ALIGN}Kangaskhan storage increased from\n"
    "{CENTER_ALIGN}{COLOR CYAN}{VALUE_0}{RESET} -> {COLOR CYAN}{VALUE_1}{RESET}");

static EWRAM_DATA s32 sRankBagCapBefore = 0;
static EWRAM_DATA s32 sRankStorageCapBefore = 0;

static bool8 IsTrackableDungeon(u8 dungeonId);
static bool8 HasVisitedAllDungeons(void);
static bool8 HasCollectedAllTMs(void);
static bool8 HasCollectedAllItems(void);
static bool8 HasRecruitedAllSpecies(void);
static void UnlockAchievement(u8 id);
static void GrantAchievementReward(u8 id);
static void QueueAchievementPopup(u8 id);
static void QueueRankRewardPopups(u8 rankBefore, u8 rankAfter);
static void AddItemQtyToStorage(u8 itemId, s32 qty);

void InitAchievements(void)
{
    /* gAchievementsData lives in the free EWRAM band; clear once at boot. */
    MemoryFill8(&gAchievementsData, 0, sizeof(gAchievementsData));
}

void ResetAchievementsData(void)
{
    MemoryFill8(&gAchievementsData, 0, sizeof(gAchievementsData));
}

bool8 GetAchievementUnlocked(u8 id)
{
    if (id >= ACH_MAX)
        return FALSE;
    return (gAchievementsData.unlocked[id / 32] & (1 << (id % 32))) != 0;
}

bool8 GetAchievementRewarded(u8 id)
{
    if (id >= ACH_MAX)
        return FALSE;
    return (gAchievementsData.rewarded[id / 32] & (1 << (id % 32))) != 0;
}

const u8 *GetAchievementName(u8 id)
{
    if (id >= ACH_MAX)
        return sAchievementNames[0];
    return sAchievementNames[id];
}

const u8 *GetAchievementRewardText(u8 id)
{
    if (id >= ACH_MAX)
        return sAchievementRewardTexts[0];
    return sAchievementRewardTexts[id];
}

u32 GetAchievementEnemiesDefeated(void)
{
    return gAchievementsData.enemiesDefeated;
}

u32 GetAchievementCriticalHits(void)
{
    return gAchievementsData.criticalHits;
}

static void AddItemQtyToStorage(u8 itemId, s32 qty)
{
    Item slot;
    s32 i;

    if (itemId == ITEM_NOTHING || qty <= 0)
        return;

    ItemIdToItem(&slot, itemId, FALSE);
    for (i = 0; i < qty; i++)
        MoveToStorage(&slot);
}

static void GrantAchievementReward(u8 id)
{
    const struct AchievementDef *def;

    if (id >= ACH_MAX || GetAchievementRewarded(id))
        return;

    def = &sAchievementDefs[id];
    switch (def->rewardType) {
        case ACH_REWARD_MONEY:
            AddToTeamMoney(def->rewardAmount);
            break;
        case ACH_REWARD_RANK_PTS:
            AddToTeamRankPts(def->rewardAmount);
            break;
        case ACH_REWARD_STORAGE_ITEM:
            AddItemQtyToStorage(def->rewardItemId, def->rewardItemQty);
            break;
        case ACH_REWARD_MONEY_AND_ITEM:
            AddToTeamMoney(def->rewardAmount);
            AddItemQtyToStorage(def->rewardItemId, def->rewardItemQty);
            break;
        default:
            break;
    }

    gAchievementsData.rewarded[id / 32] |= (1 << (id % 32));
}

static void QueueAchievementPopup(u8 id)
{
    if (gAchievementsData.popupCount >= ACH_POPUP_QUEUE_SIZE)
        return;
    gAchievementsData.popupQueue[gAchievementsData.popupCount++] = id;
}

static void UnlockAchievement(u8 id)
{
    u8 rankBefore;

    if (!gRuntimeConfig.achievements || id >= ACH_MAX)
        return;
    if (GetAchievementUnlocked(id))
        return;

    /* Defer during boss fights so fanfare/rewards land after the clear, before the event. */
    if (gAchievementsData.runFlags & ACH_RUN_BOSS_ACTIVE) {
        gAchievementsData.pendingUnlocks |= (1 << id);
        return;
    }

    rankBefore = GetRescueTeamRank();
    gAchievementsData.unlocked[id / 32] |= (1 << (id % 32));
    GrantAchievementReward(id);
    QueueAchievementPopup(id);
    QueueRankRewardPopups(rankBefore, GetRescueTeamRank());
    PlayFanfareSE(0x137, 0x100);
}

static void QueueRankRewardPopups(u8 rankBefore, u8 rankAfter)
{
    if (!gRuntimeConfig.rank_rewards || rankAfter <= rankBefore)
        return;

    if (GetBagCapacityForRank(rankAfter) > GetBagCapacityForRank(rankBefore)) {
        sRankBagCapBefore = GetBagCapacityForRank(rankBefore);
        QueueAchievementPopup(ACH_POPUP_RANK_BAG);
    }
    if (GetStorageCapacityForRank(rankAfter) > GetStorageCapacityForRank(rankBefore)) {
        sRankStorageCapBefore = GetStorageCapacityForRank(rankBefore);
        QueueAchievementPopup(ACH_POPUP_RANK_STORAGE);
    }
}

static bool8 IsTrackableDungeon(u8 dungeonId)
{
    if (dungeonId > DUNGEON_PURITY_FOREST)
        return FALSE;
    if (dungeonId == DUNGEON_NORMAL_MAZE || dungeonId == DUNGEON_POISON_MAZE)
        return FALSE;
    if (dungeonId == DUNGEON_AUTOPILOT
        || dungeonId == DUNGEON_D50
        || dungeonId == DUNGEON_D51
        || dungeonId == DUNGEON_D54
        || dungeonId == DUNGEON_D61)
        return FALSE;
    return TRUE;
}

static bool8 HasVisitedAllDungeons(void)
{
    s32 i;

    for (i = 0; i <= DUNGEON_PURITY_FOREST; i++) {
        if (!IsTrackableDungeon(i))
            continue;
        if ((gAchievementsData.dungeonVisited[i / 32] & (1 << (i % 32))) == 0)
            return FALSE;
    }
    return TRUE;
}

static bool8 HasCollectedAllTMs(void)
{
    s32 i;

    for (i = 1; i < NUMBER_OF_ITEM_IDS; i++) {
        if (GetItemCategory(i) != CATEGORY_TMS_HMS)
            continue;
        if (i == ITEM_TM_USED_TM)
            continue;
        if ((gAchievementsData.itemsEverGot[i / 8] & (1 << (i % 8))) == 0)
            return FALSE;
    }
    return TRUE;
}

static bool8 HasCollectedAllItems(void)
{
    s32 i;

    for (i = 1; i < NUMBER_OF_ITEM_IDS; i++) {
        if (i == ITEM_TM_USED_TM)
            continue;
        if (GetItemCategory(i) == CATEGORY_POKE)
            continue;
        if ((gAchievementsData.itemsEverGot[i / 8] & (1 << (i % 8))) == 0)
            return FALSE;
    }
    return TRUE;
}

static bool8 HasRecruitedAllSpecies(void)
{
    s32 i;

    for (i = 0; i < MONSTER_MAX; i++) {
        if (i == MONSTER_NONE) continue;
        if (i == MONSTER_CASTFORM_SNOWY) continue;
        if (i == MONSTER_CASTFORM_SUNNY) continue;
        if (i == MONSTER_CASTFORM_RAINY) continue;
        if (i == MONSTER_DEOXYS_ATTACK) continue;
        if (i == MONSTER_DEOXYS_DEFENSE) continue;
        if (i == MONSTER_DEOXYS_SPEED) continue;
        if (i == MONSTER_MUNCHLAX) continue;
        if (i == MONSTER_DECOY) continue;
        if (i == MONSTER_STATUE) continue;
        if (i == MONSTER_RAYQUAZA_CUTSCENE) continue;

        if (!sub_8097900(i))
            return FALSE;
    }
    return TRUE;
}

void EvaluateAchievements(void)
{
    s32 rescues;
    s32 floors;
    s32 joined;

    if (!gRuntimeConfig.achievements)
        return;

    rescues = GetFriendRescueSuccesses();
    floors = GetAdventureFloorsExplored();
    joined = GetAdventureNumJoined();

    if (rescues >= 1)
        UnlockAchievement(ACH_FIRST_RESCUE);
    if (rescues >= 100)
        UnlockAchievement(ACH_RESCUES_100);
    if (rescues >= 500)
        UnlockAchievement(ACH_RESCUES_500);
    if (rescues >= 1000)
        UnlockAchievement(ACH_RESCUES_1000);

    if (gAchievementsData.enemiesDefeated >= 1000)
        UnlockAchievement(ACH_ENEMIES_1000);
    if (gAchievementsData.criticalHits >= 100)
        UnlockAchievement(ACH_CRITS_100);

    if (floors >= 100)
        UnlockAchievement(ACH_FLOORS_100);
    if (floors >= 1000)
        UnlockAchievement(ACH_FLOORS_1000);

    if (HasVisitedAllDungeons())
        UnlockAchievement(ACH_ALL_DUNGEONS);

    if (joined >= 50)
        UnlockAchievement(ACH_RECRUIT_50);
    if (HasRecruitedAllSpecies())
        UnlockAchievement(ACH_RECRUIT_ALL);

    if (HasCollectedAllTMs())
        UnlockAchievement(ACH_ALL_TMS);
    if (HasCollectedAllItems())
        UnlockAchievement(ACH_ALL_ITEMS);
}

void ProcessAchievementUnlockQueue(void)
{
    u8 id;

    if (!gRuntimeConfig.achievements)
        return;

    while (gAchievementsData.popupCount > 0) {
        id = gAchievementsData.popupQueue[0];
        gAchievementsData.popupCount--;
        if (gAchievementsData.popupCount > 0) {
            MemoryCopy8(&gAchievementsData.popupQueue[0],
                        &gAchievementsData.popupQueue[1],
                        gAchievementsData.popupCount);
        }

        if (id == ACH_POPUP_RANK_BAG) {
            gFormatArgs[0] = sRankBagCapBefore;
            gFormatArgs[1] = GetBagCapacity();
            ScriptPrintText(SCRIPT_TEXT_TYPE_INSTANT, -1, sRankBagUpgradeMsg);
            break;
        }
        if (id == ACH_POPUP_RANK_STORAGE) {
            gFormatArgs[0] = sRankStorageCapBefore;
            gFormatArgs[1] = GetStorageCapacity();
            ScriptPrintText(SCRIPT_TEXT_TYPE_INSTANT, -1, sRankStorageUpgradeMsg);
            break;
        }

        if (id >= ACH_MAX)
            continue;

        strncpy(gFormatBuffer_Items[0], GetAchievementName(id), FORMAT_BUFFER_LEN);
        strncpy(gFormatBuffer_Items[1], GetAchievementRewardText(id), FORMAT_BUFFER_LEN);
        gFormatBuffer_Items[0][FORMAT_BUFFER_LEN - 1] = '\0';
        gFormatBuffer_Items[1][FORMAT_BUFFER_LEN - 1] = '\0';
        ScriptPrintText(SCRIPT_TEXT_TYPE_INSTANT, -1, sAchievementUnlockedMsg);
        /* Only show one per ground tick so the textbox can finish. */
        break;
    }
}

void NoteAchievementEnemyDefeated(void)
{
    if (!gRuntimeConfig.achievements)
        return;
    if (gAchievementsData.enemiesDefeated < 999999)
        gAchievementsData.enemiesDefeated++;
    EvaluateAchievements();
}

void NoteAchievementCriticalHit(void)
{
    if (!gRuntimeConfig.achievements)
        return;
    if (gAchievementsData.criticalHits < 999999)
        gAchievementsData.criticalHits++;
    EvaluateAchievements();
}

void NoteAchievementStatusKO(void)
{
    if (!gRuntimeConfig.achievements)
        return;
    UnlockAchievement(ACH_STATUS_KO);
}

void NoteAchievementBossFightStart(void)
{
    if (!gRuntimeConfig.achievements)
        return;
    gAchievementsData.runFlags |= ACH_RUN_BOSS_ACTIVE | ACH_RUN_BOSS_NO_DAMAGE;
}

void NoteAchievementTeamTookDamage(void)
{
    if (!gRuntimeConfig.achievements)
        return;
    if (gAchievementsData.runFlags & ACH_RUN_BOSS_ACTIVE)
        gAchievementsData.runFlags &= ~ACH_RUN_BOSS_NO_DAMAGE;
}

void FlushBossFightAchievementUnlocks(bool8 bossCleared)
{
    u16 pending;
    s32 id;
    bool8 noDamage;

    if (!gRuntimeConfig.achievements)
        return;
    if (!(gAchievementsData.runFlags & ACH_RUN_BOSS_ACTIVE) && gAchievementsData.pendingUnlocks == 0)
        return;

    noDamage = bossCleared
        && (gAchievementsData.runFlags & ACH_RUN_BOSS_ACTIVE)
        && (gAchievementsData.runFlags & ACH_RUN_BOSS_NO_DAMAGE);

    pending = gAchievementsData.pendingUnlocks;
    gAchievementsData.pendingUnlocks = 0;
    gAchievementsData.runFlags &= ~(ACH_RUN_BOSS_ACTIVE | ACH_RUN_BOSS_NO_DAMAGE);

    for (id = 0; id < ACH_MAX; id++) {
        if (pending & (1 << id))
            UnlockAchievement(id);
    }
    if (noDamage)
        UnlockAchievement(ACH_BOSS_NO_DAMAGE);
}

void PresentQueuedAchievementUnlocksInDungeon(void)
{
    u8 id;

    if (!gRuntimeConfig.achievements)
        return;

    while (gAchievementsData.popupCount > 0) {
        id = gAchievementsData.popupQueue[0];
        gAchievementsData.popupCount--;
        if (gAchievementsData.popupCount > 0) {
            MemoryCopy8(&gAchievementsData.popupQueue[0],
                        &gAchievementsData.popupQueue[1],
                        gAchievementsData.popupCount);
        }

        if (id == ACH_POPUP_RANK_BAG) {
            gFormatArgs[0] = sRankBagCapBefore;
            gFormatArgs[1] = GetBagCapacity();
            DisplayDungeonMessage_Async(NULL, sRankBagUpgradeMsg, TRUE);
            continue;
        }
        if (id == ACH_POPUP_RANK_STORAGE) {
            gFormatArgs[0] = sRankStorageCapBefore;
            gFormatArgs[1] = GetStorageCapacity();
            DisplayDungeonMessage_Async(NULL, sRankStorageUpgradeMsg, TRUE);
            continue;
        }
        if (id >= ACH_MAX)
            continue;

        strncpy(gFormatBuffer_Items[0], GetAchievementName(id), FORMAT_BUFFER_LEN);
        strncpy(gFormatBuffer_Items[1], GetAchievementRewardText(id), FORMAT_BUFFER_LEN);
        gFormatBuffer_Items[0][FORMAT_BUFFER_LEN - 1] = '\0';
        gFormatBuffer_Items[1][FORMAT_BUFFER_LEN - 1] = '\0';
        DisplayDungeonMessage_Async(NULL, sAchievementUnlockedMsg, TRUE);
    }
}

void NoteAchievementDungeonVisited(u8 dungeonId)
{
    if (!gRuntimeConfig.achievements)
        return;
    if (!IsTrackableDungeon(dungeonId))
        return;
    gAchievementsData.dungeonVisited[dungeonId / 32] |= (1 << (dungeonId % 32));
    EvaluateAchievements();
}

void NoteAchievementItemObtained(u8 itemId)
{
    if (!gRuntimeConfig.achievements)
        return;
    if (itemId == ITEM_NOTHING || itemId >= NUMBER_OF_ITEM_IDS)
        return;
    gAchievementsData.itemsEverGot[itemId / 8] |= (1 << (itemId % 8));
    EvaluateAchievements();
}

u32 SaveAchievementsData(u8 *buffer, u32 bufLen)
{
    DataSerializer seri;
    s32 i;

    InitBitWriter(&seri, buffer, bufLen);
    WriteBits(&seri, &gAchievementsData.unlocked[0], 32);
    WriteBits(&seri, &gAchievementsData.unlocked[1], 32);
    WriteBits(&seri, &gAchievementsData.rewarded[0], 32);
    WriteBits(&seri, &gAchievementsData.rewarded[1], 32);
    WriteBits(&seri, &gAchievementsData.enemiesDefeated, 32);
    WriteBits(&seri, &gAchievementsData.criticalHits, 32);
    for (i = 0; i < 4; i++)
        WriteBits(&seri, &gAchievementsData.dungeonVisited[i], 32);
    for (i = 0; i < 30; i++)
        WriteBits(&seri, &gAchievementsData.itemsEverGot[i], 8);
    FinishBitSerializer(&seri);
    return seri.count;
}

u32 RestoreAchievementsData(u8 *buffer, u32 bufLen)
{
    DataSerializer seri;
    s32 i;

    ResetAchievementsData();
    InitBitReader(&seri, buffer, bufLen);
    ReadBits(&seri, &gAchievementsData.unlocked[0], 32);
    ReadBits(&seri, &gAchievementsData.unlocked[1], 32);
    ReadBits(&seri, &gAchievementsData.rewarded[0], 32);
    ReadBits(&seri, &gAchievementsData.rewarded[1], 32);
    ReadBits(&seri, &gAchievementsData.enemiesDefeated, 32);
    ReadBits(&seri, &gAchievementsData.criticalHits, 32);
    for (i = 0; i < 4; i++)
        ReadBits(&seri, &gAchievementsData.dungeonVisited[i], 32);
    for (i = 0; i < 30; i++)
        ReadBits(&seri, &gAchievementsData.itemsEverGot[i], 8);
    FinishBitSerializer(&seri);
    return seri.count;
}
