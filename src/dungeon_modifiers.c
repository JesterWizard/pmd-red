#include "global.h"
#include "constants/dungeon_modifiers.h"
#include "constants/iq_skill.h"
#include "dungeon_modifiers.h"
#include "dungeon_logic.h"
#include "dungeon_message.h"
#include "dungeon_random.h"
#include "dungeon_range.h"
#include "dungeon_strings.h"
#include "dungeon_util.h"
#include "items.h"
#include "run_dungeon.h"
#include "runtime.h"
#include "structs/str_dungeon.h"

u8 GetFloorModifier(void)
{
    return gDungeon->unk644.floorModifier;
}

void TryRollAndApplyFloorModifier(void)
{
    u8 modifier;

    if (!gRuntimeConfig.dungeon_modifiers) {
        gDungeon->unk644.floorModifier = FLOOR_MODIFIER_NONE;
        return;
    }

    if (IsCurrentFixedRoomBossFight()) {
        gDungeon->unk644.floorModifier = FLOOR_MODIFIER_NONE;
        return;
    }

    modifier = FLOOR_MODIFIER_NONE;
    if (DungeonRandInt(100) < FLOOR_MODIFIER_CHANCE) {
        /* Pick one of the four active modifiers (skip NONE). */
        modifier = (u8)(DungeonRandInt(FLOOR_MODIFIER_COUNT - 1) + 1);
    }

    gDungeon->unk644.floorModifier = modifier;

    if (modifier == FLOOR_MODIFIER_DARKNESS)
        gDungeon->floorProperties.visibilityRange = 1;
}

void AnnounceFloorModifier(void)
{
    Entity *cameraTarget;
    const u8 *msg;

    switch (GetFloorModifier()) {
    case FLOOR_MODIFIER_POISONOUS_AIR:
        msg = gFloorModifierPoisonousAirMessage;
        break;
    case FLOOR_MODIFIER_DARKNESS:
        msg = gFloorModifierDarknessMessage;
        break;
    case FLOOR_MODIFIER_ELECTRIC_TERRAIN:
        msg = gFloorModifierElectricTerrainMessage;
        break;
    case FLOOR_MODIFIER_TREASURE_RICH:
        msg = gFloorModifierTreasureRichMessage;
        break;
    default:
        return;
    }

    cameraTarget = gDungeon->unk181e8.cameraTarget;
    if (cameraTarget == NULL)
        cameraTarget = GetLeader();
    LogMessageByIdWithPopupCheckUser_Async(cameraTarget, msg);
}

void AddDungeonFloorMoney(Entity *picker, s32 amount)
{
    if (picker != NULL && IqSkillIsEnabled(picker, IQ_COIN_WATCHER))
        amount = (amount * 6) / 5;
    if (GetFloorModifier() == FLOOR_MODIFIER_TREASURE_RICH)
        amount *= 2;
    AddToTeamMoney(amount);
}
