#ifndef GUARD_ACHIEVEMENTS_H
#define GUARD_ACHIEVEMENTS_H

#include "data_serializer.h"
#include "gba/types.h"

#define ACHIEVEMENTS_SAVE_SIZE 0x80
#define ACHIEVEMENTS_DATA_SIZE 0x70
#define ACH_POPUP_QUEUE_SIZE 6
#define ACH_POPUP_RANK_BAG 0xFD
#define ACH_POPUP_RANK_STORAGE 0xFE

enum AchievementId
{
    ACH_FIRST_RESCUE,
    ACH_RESCUES_100,
    ACH_RESCUES_500,
    ACH_RESCUES_1000,
    ACH_ENEMIES_1000,
    ACH_CRITS_100,
    ACH_BOSS_NO_DAMAGE,
    ACH_STATUS_KO,
    ACH_FLOORS_100,
    ACH_FLOORS_1000,
    ACH_ALL_DUNGEONS,
    ACH_RECRUIT_50,
    ACH_RECRUIT_ALL,
    ACH_ALL_TMS,
    ACH_ALL_ITEMS,
    ACH_MAX
};

enum AchievementRunFlags
{
    ACH_RUN_BOSS_ACTIVE = 1 << 0,
    ACH_RUN_BOSS_NO_DAMAGE = 1 << 1,
};

/* size: 0x70 */
struct AchievementsData
{
    /* 0x00 */ u32 unlocked[2];
    /* 0x08 */ u32 rewarded[2];
    /* 0x10 */ u32 enemiesDefeated;
    /* 0x14 */ u32 criticalHits;
    /* 0x18 */ u32 dungeonVisited[4];
    /* 0x28 */ u8 itemsEverGot[30];
    /* 0x46 */ u8 runFlags;
    /* 0x47 */ u8 popupQueue[ACH_POPUP_QUEUE_SIZE];
    /* 0x4D */ u8 popupCount;
    /* 0x4E */ u8 fill4E[0x22];
};

extern struct AchievementsData gAchievementsData;

void InitAchievements(void);
void ResetAchievementsData(void);
bool8 GetAchievementUnlocked(u8 id);
bool8 GetAchievementRewarded(u8 id);
const u8 *GetAchievementName(u8 id);
const u8 *GetAchievementRewardText(u8 id);
u32 GetAchievementEnemiesDefeated(void);
u32 GetAchievementCriticalHits(void);

void EvaluateAchievements(void);
void ProcessAchievementUnlockQueue(void);

void NoteAchievementEnemyDefeated(void);
void NoteAchievementCriticalHit(void);
void NoteAchievementStatusKO(void);
void NoteAchievementBossFightStart(void);
void NoteAchievementTeamTookDamage(void);
void NoteAchievementBossDefeated(void);
void NoteAchievementDungeonVisited(u8 dungeonId);
void NoteAchievementItemObtained(u8 itemId);

u32 SaveAchievementsData(u8 *buffer, u32 bufLen);
u32 RestoreAchievementsData(u8 *buffer, u32 bufLen);

#endif /* GUARD_ACHIEVEMENTS_H */
