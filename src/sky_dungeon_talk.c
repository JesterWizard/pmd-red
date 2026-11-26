/*
 * Explorers of Sky demake: what team members say in a dungeon (talking to
 * them, levelling up), with EoS's lines and EoS's rules. Red reads these from
 * per-species talk files (talkNN / talkpNN), which the sky ROM leaves out.
 *
 * EoS (tools/make_sky_dungeon_talk.py has the details):
 *  - the partner speaks the lines of its talk kind: kind 1 (Squirtle,
 *    Totodile, Chimchar, Meowth, Munchlax), kind 3 (Torchic, Chikorita, Eevee,
 *    Vulpix, Skitty) or kind 2 (every other partner); other team members
 *    speak their species' personality group;
 *  - healthy at HP >= 80%, pinch below 25%, half HP in between;
 *  - a full-floor fixed room (Beach Cave Pit) always gives the third line,
 *    elsewhere a random one; lines naming a move are skipped when the speaker
 *    knows none;
 *  - [player] is the leader, [kind:0] a species of the floor's spawn list,
 *    [move:1] one of the speaker's moves, [item:0] an item of the floor's
 *    item list;
 *  - the partner's portrait is pained in a pinch; the hero has no level-up
 *    line.
 */
#include "global.h"

#ifdef SKY_STORY

#include "globaldata.h"
#include "sky_story.h"
#include "constants/dungeon.h"
#include "constants/emotions.h"
#include "constants/fixed_rooms.h"
#include "constants/monster.h"
#include "dungeon_floor_spawns.h"
#include "dungeon_logic.h"
#include "dungeon_random.h"
#include "dungeon_range.h"
#include "dungeon_util.h"
#include "items.h"
#include "moves.h"
#include "pokemon.h"
#include "pokemon_3.h"
#include "string_format.h"
#include "structs/str_dungeon.h"

struct SkyTalkGroup
{
    u16 first[SKY_TALK_TYPE_COUNT];
    u8 count[SKY_TALK_TYPE_COUNT];
};

struct SkyPartnerTalkKind
{
    s16 species;
    u8 group;
};

#define SKY_TALK_USES_MOVE   1  /* [move:1] */
#define SKY_TALK_USES_KIND   2  /* [kind:0] */
#define SKY_TALK_USES_ITEM   4  /* [item:0] */
#define SKY_TALK_USES_PLAYER 8  /* [player] */
#define SKY_TALK_USES_SELF   16 /* [kind:1] */

#include "data/sky_dungeon_talk.h"

/* EoS GetTalkLine: retried this many times when a line cannot be filled. */
#define SKY_TALK_TRIES 20

s32 SkyStory_TalkType(EntityInfo *info)
{
    if (info->HP * 10 >= info->maxHPStat * 8)
        return SKY_TALK_HEALTHY;
    if (info->HP < info->maxHPStat / 4)
        return SKY_TALK_PINCH;
    return SKY_TALK_HALF_HP;
}

u8 SkyStory_TalkEmotion(EntityInfo *info)
{
    if (info->joinedAt.id == DUNGEON_JOIN_LOCATION_PARTNER && info->HP < info->maxHPStat / 4)
        return EMOTION_PAINED;
    return 0;
}

static const struct SkyTalkGroup *GetTalkGroup(EntityInfo *info)
{
    s32 i;
    s32 species = info->apparentID;

    if (info->joinedAt.id == DUNGEON_JOIN_LOCATION_PARTNER) {
        for (i = 0; i < ARRAY_COUNT(sSkyPartnerTalkKinds); i++) {
            if (sSkyPartnerTalkKinds[i].species == species)
                return &sSkyTalkGroups[sSkyPartnerTalkKinds[i].group];
        }
        return &sSkyTalkGroups[SKY_TALK_DEFAULT_PARTNER_GROUP];
    }
    if (species < 0 || species >= MONSTER_MAX)
        species = 0;
    return &sSkyTalkGroups[sSkyTalkPersonality[species]];
}

/* A species of the floor's spawn list for [kind:0] (not Kecleon, as in EoS). */
static s32 GetRandomFloorSpecies(void)
{
    s16 list[MONSTER_SPAWNS_ARR_COUNT];
    s32 i, count = 0;

    for (i = 0; i < MONSTER_SPAWNS_ARR_COUNT; i++) {
        s32 species = ExtractSpeciesIndex(&gDungeon->fileMonsterSpawns[i]);
        if (species == MONSTER_NONE)
            break;
        if (species != MONSTER_KECLEON && species != MONSTER_DECOY)
            list[count++] = species;
    }
    if (count == 0)
        return MONSTER_NONE;
    return list[DungeonRandInt(count)];
}

static s32 CountMoves(EntityInfo *info)
{
    s32 i, count = 0;

    for (i = 0; i < MAX_MON_MOVES; i++) {
        if (MoveFlagExists(&info->moves.moves[i]))
            count++;
    }
    return count;
}

/* One of the speaker's moves for [move:1]. */
static void BufferRandomMove(EntityInfo *info, s32 count)
{
    s32 i, n = DungeonRandInt(count);

    for (i = 0; i < MAX_MON_MOVES; i++) {
        if (MoveFlagExists(&info->moves.moves[i]) && n-- == 0) {
            BufferMoveName(gFormatBuffer_Items[0], &info->moves.moves[i], NULL);
            return;
        }
    }
}

/* Fills the placeholders the line uses (only those, so the caller's other
 * format buffers are left alone). */
static void FillTalkTags(EntityInfo *info, u8 flags, s32 kind, s32 moveCount)
{
    Entity *leader;

    if (flags & SKY_TALK_USES_PLAYER) {
        leader = GetLeader();
        if (leader != NULL)
            SetMessageArgument_2(gFormatBuffer_Monsters[1], GetEntInfo(leader), 0);
        else
            gFormatBuffer_Monsters[1][0] = '\0';
    }
    if (flags & SKY_TALK_USES_KIND)
        CopyCyanMonsterNametoBuffer(gFormatBuffer_Monsters[2], kind);
    if (flags & SKY_TALK_USES_SELF)
        CopyCyanMonsterNametoBuffer(gFormatBuffer_Monsters[3], info->apparentID);
    if (flags & SKY_TALK_USES_MOVE)
        BufferRandomMove(info, moveCount);
    if (flags & SKY_TALK_USES_ITEM)
        BufferItemName(gFormatBuffer_Items[1], GetRandomFloorItem(0), NULL);
}

void SkyStory_TalkLine(u8 *dst, Entity *speaker, s32 type)
{
    EntityInfo *info = GetEntInfo(speaker);
    const struct SkyTalkGroup *group = GetTalkGroup(info);
    s32 count = group->count[type];
    s32 fixedRoom = gDungeon->floorProperties.fixedRoomNumber;
    bool8 fullFloorFixedRoom = fixedRoom != FIXED_ROOM_NONE && fixedRoom < FIXED_ROOM_WYVERN_HILL_HM_FLY;
    s32 moveCount = CountMoves(info);
    s32 kind = -1;
    s32 tries;

    for (tries = 0; count != 0 && tries < SKY_TALK_TRIES; tries++) {
        s32 n;
        u8 flags;

        if (fullFloorFixedRoom)
            n = count > 2 ? 2 : count - 1;
        else
            n = DungeonRandInt(count);
        n += group->first[type];
        flags = sSkyTalkLineFlags[n];
        if ((flags & SKY_TALK_USES_MOVE) && moveCount == 0)
            continue;
        if (flags & SKY_TALK_USES_KIND) {
            if (kind < 0)
                kind = GetRandomFloorSpecies();
            if (kind == MONSTER_NONE)
                continue;
        }
        FillTalkTags(info, flags, kind, moveCount);
        strcpy(dst, sSkyTalkLines[n]);
        return;
    }
    strcpy(dst, _("{POKEMON_0}:  ..."));
}

/* EoS speaks no level-up line for the hero (only other team members). */
bool8 SkyStory_HasLevelUpLine(EntityInfo *info)
{
    return !info->isTeamLeader;
}

#endif /* SKY_STORY */
