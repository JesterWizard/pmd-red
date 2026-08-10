/* Per-ingredient Juice Bar good-feeling bonuses (PMD2-inspired, Red item set).
 * chance: percent for good feeling when the item allows it.
 * iqBonus / hpBonus: applied only on a successful good-feeling roll. */

typedef struct JuiceGoodFeelingEntry
{
    u8 itemId;
    u8 chance;
    u8 iqBonus;
    u8 hpBonus;
} JuiceGoodFeelingEntry;

/* Permanent boosters: base effect only; never good-feeling / miracle (Hunger is miracle-only). */
static bool8 JuiceItemSkipsGoodFeeling(u8 itemId)
{
    switch (itemId) {
        case ITEM_DOOM_SEED:
        case ITEM_JOY_SEED:
        case ITEM_LIFE_SEED:
        case ITEM_HUNGER_SEED:
        case ITEM_SITRUS_BERRY:
        case ITEM_PROTEIN:
        case ITEM_CALCIUM:
        case ITEM_IRON:
        case ITEM_ZINC:
        case ITEM_GINSENG:
            return TRUE;
        default:
            return FALSE;
    }
}

/* Hunger Seed is the documented exception that can still miracle. */
static bool8 JuiceItemAllowsMiracle(u8 itemId)
{
    if (itemId == ITEM_HUNGER_SEED)
        return TRUE;
    return !JuiceItemSkipsGoodFeeling(itemId);
}

static const JuiceGoodFeelingEntry sJuiceGoodFeelingTable[] = {
    /* IQ bonuses */
    { ITEM_EYEDROP_SEED, 15, 3, 0 },
    { ITEM_MAX_ELIXIR, 20, 2, 0 },
    /* HP +1 */
    { ITEM_HEAL_SEED, 20, 0, 1 },
    { ITEM_ORAN_BERRY, 13, 0, 1 },
    { ITEM_PLAIN_SEED, 15, 0, 1 },
    { ITEM_REVIVER_SEED, 45, 0, 1 },
    /* HP +2 */
    { ITEM_APPLE, 2, 0, 2 },
    { ITEM_BIG_APPLE, 5, 0, 2 },
    { ITEM_HUGE_APPLE, 8, 0, 2 },
    { ITEM_BANANA, 5, 0, 2 },
    { ITEM_CHESTNUT, 5, 0, 2 },
    { ITEM_BLAST_SEED, 15, 0, 2 },
    { ITEM_CHERI_BERRY, 15, 0, 2 },
    { ITEM_CHESTO_BERRY, 15, 0, 2 },
    { ITEM_GRIMY_FOOD, 10, 0, 2 },
    { ITEM_PECHA_BERRY, 15, 0, 2 },
    { ITEM_QUICK_SEED, 15, 0, 2 },
    { ITEM_RAWST_BERRY, 15, 0, 2 },
    { ITEM_STUN_SEED, 15, 0, 2 },
    { ITEM_WARP_SEED, 15, 0, 2 },
    /* HP +4 */
    { ITEM_BLINKER_SEED, 15, 0, 4 },
    { ITEM_SLEEP_SEED, 15, 0, 4 },
    { ITEM_TOTTER_SEED, 15, 0, 4 },
};

static const JuiceGoodFeelingEntry *FindJuiceGoodFeeling(u8 itemId)
{
    s32 i;

    for (i = 0; i < (s32)ARRAY_COUNT(sJuiceGoodFeelingTable); i++) {
        if (sJuiceGoodFeelingTable[i].itemId == itemId)
            return &sJuiceGoodFeelingTable[i];
    }
    return NULL;
}
