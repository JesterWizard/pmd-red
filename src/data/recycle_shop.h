/* Recycle Shop data (included by recycle_shop.c). Red-adapted Explorers of Sky
 * tables: Sky's ticket costs (4/6/8/10), rank gates and Prize/Silver odds;
 * offers and prize pools use Red's item set. */

ALIGNED(4) static const u8 sRecTrade[] = _("Trade");
ALIGNED(4) static const u8 sRecTickets[] = _("Get Ticket");
ALIGNED(4) static const u8 sRecLottery[] = _("Lottery");
ALIGNED(4) static const u8 sRecNextPage[] = _("More Offers");
ALIGNED(4) static const u8 sRecCardLeft[] = _("Left Card");
ALIGNED(4) static const u8 sRecCardMiddle[] = _("Middle Card");
ALIGNED(4) static const u8 sRecCardRight[] = _("Right Card");
ALIGNED(4) static const u8 sRecTicketCountFmt[] = _("%s (%d)");

ALIGNED(4) static const u8 sRecPrizeMenu[] = _("Prize Ticket (4)");
ALIGNED(4) static const u8 sRecSilverMenu[] = _("Silver Ticket (6)");
ALIGNED(4) static const u8 sRecGoldMenu[] = _("Gold Ticket (8)");
ALIGNED(4) static const u8 sRecPrismMenu[] = _("Prism Ticket (10)");

/* Give costCount × cost, get reward. Offers appear once the team has
 * recycled unlockAt items in total (trades and ticket exchanges both count). */
struct RecycleTradeOffer
{
    u16 unlockAt;
    u8 reward;
    u8 cost;
    u8 costCount;
};

static const struct RecycleTradeOffer sTradeOffers[] = {
    {  0, ITEM_ORAN_BERRY,   ITEM_PLAIN_SEED,   2 },
    {  0, ITEM_BIG_APPLE,    ITEM_APPLE,        2 },
    {  0, ITEM_MAX_ELIXIR,   ITEM_ORAN_BERRY,   3 },
    {  4, ITEM_HEAL_SEED,    ITEM_PECHA_BERRY,  2 },
    {  6, ITEM_SITRUS_BERRY, ITEM_ORAN_BERRY,   3 },
    {  8, ITEM_HUGE_APPLE,   ITEM_BIG_APPLE,    2 },
    { 10, ITEM_REVIVER_SEED, ITEM_ESCAPE_ORB,   2 },
    { 12, ITEM_ESCAPE_ORB,   ITEM_WARP_SEED,    2 },
    { 14, ITEM_POWER_BAND,   ITEM_BLAST_SEED,   3 },
    { 16, ITEM_DEF_SCARF,    ITEM_SLEEP_SEED,   3 },
    { 18, ITEM_SPECIAL_BAND, ITEM_TOTTER_SEED,  3 },
    { 20, ITEM_ZINC_BAND,    ITEM_STUN_SEED,    3 },
    { 25, ITEM_JOY_SEED,     ITEM_SITRUS_BERRY, 2 },
    { 30, ITEM_LIFE_SEED,    ITEM_HUGE_APPLE,   2 },
    { 40, ITEM_GOLD_GUMMI,   ITEM_WHITE_GUMMI,  3 },
    { 50, ITEM_REVIVER_ORB,  ITEM_REVIVER_SEED, 2 },
    { 60, ITEM_GOLD_RIBBON,  ITEM_LIFE_SEED,    3 },
    { 80, ITEM_WONDER_GUMMI, ITEM_GOLD_GUMMI,   3 },
};

struct RecyclePrizePool
{
    const u8 *items;
    u8 count;
};

#define PRIZE_POOL(arr) { arr, ARRAY_COUNT(arr) }

static const u8 sPrizeLoss[]    = { ITEM_ORAN_BERRY, ITEM_APPLE, ITEM_HEAL_SEED, ITEM_CHERI_BERRY, ITEM_PECHA_BERRY };
static const u8 sPrizeWin[]     = { ITEM_BIG_APPLE, ITEM_SITRUS_BERRY, ITEM_REVIVER_SEED, ITEM_BLAST_SEED, ITEM_ESCAPE_ORB, ITEM_WHITE_GUMMI };
static const u8 sPrizeBig[]     = { ITEM_TWIST_BAND, ITEM_GOLD_RIBBON, ITEM_JOY_SEED, ITEM_REVIVER_SEED, ITEM_RED_GUMMI, ITEM_SILVER_TICKET, ITEM_GOLD_TICKET };

static const u8 sSilverLoss[]   = { ITEM_APPLE, ITEM_ORAN_BERRY, ITEM_HEAL_SEED, ITEM_MAX_ELIXIR, ITEM_BIG_APPLE };
static const u8 sSilverWin[]    = { ITEM_REVIVER_SEED, ITEM_SITRUS_BERRY, ITEM_ESCAPE_ORB, ITEM_HUGE_APPLE, ITEM_WHITE_GUMMI, ITEM_RED_GUMMI };
static const u8 sSilverBig[]    = { ITEM_GOLD_TICKET, ITEM_JOY_SEED, ITEM_LIFE_SEED, ITEM_GOLD_RIBBON, ITEM_DEF_SCARF, ITEM_POWER_BAND };

static const u8 sGoldLoss[]     = { ITEM_BIG_APPLE, ITEM_REVIVER_SEED, ITEM_MAX_ELIXIR, ITEM_SITRUS_BERRY };
static const u8 sGoldWin[]      = { ITEM_JOY_SEED, ITEM_LIFE_SEED, ITEM_PROTEIN, ITEM_CALCIUM, ITEM_IRON, ITEM_ZINC, ITEM_HUGE_APPLE };
static const u8 sGoldBig[]      = { ITEM_PRISM_TICKET, ITEM_GOLD_GUMMI, ITEM_REVIVER_ORB, ITEM_GOLD_RIBBON, ITEM_GINSENG };

static const u8 sPrismLoss[]    = { ITEM_REVIVER_SEED, ITEM_JOY_SEED, ITEM_LIFE_SEED, ITEM_HUGE_APPLE };
static const u8 sPrismWin[]     = { ITEM_GOLD_GUMMI, ITEM_SILVER_GUMMI, ITEM_GINSENG, ITEM_PROTEIN, ITEM_CALCIUM, ITEM_IRON, ITEM_ZINC, ITEM_REVIVER_ORB };
static const u8 sPrismBig[]     = { ITEM_WONDER_GUMMI, ITEM_WONDER_GUMMI, ITEM_FRIEND_BOW, ITEM_GOLD_RIBBON, ITEM_SILVER_GUMMI };

struct RecycleTicketTier
{
    u8 itemId;
    u8 recycleCount; /* items to recycle for this ticket */
    u8 minRank;      /* enum TeamRanks */
    u8 lossChance;   /* percent; big win = 100 - loss - win */
    u8 winChance;
    const u8 *menuText;
    const u8 *rankText;
    const u8 *drawText;
    struct RecyclePrizePool lossPool;
    struct RecyclePrizePool winPool;
    struct RecyclePrizePool bigWinPool;
};

static const struct RecycleTicketTier sTicketTiers[RECYCLE_TICKET_TIERS] = {
    [RECYCLE_TICKET_PRIZE] = {
        ITEM_PRIZE_TICKET, 4, NORMAL_RANK, 65, 30,
        sRecPrizeMenu, NULL, RECYCLE_DRAW_PRIZE,
        PRIZE_POOL(sPrizeLoss), PRIZE_POOL(sPrizeWin), PRIZE_POOL(sPrizeBig),
    },
    [RECYCLE_TICKET_SILVER] = {
        ITEM_SILVER_TICKET, 6, SILVER_RANK, 55, 40,
        sRecSilverMenu, RECYCLE_NEED_SILVER_RANK, RECYCLE_DRAW_SILVER,
        PRIZE_POOL(sSilverLoss), PRIZE_POOL(sSilverWin), PRIZE_POOL(sSilverBig),
    },
    [RECYCLE_TICKET_GOLD] = {
        ITEM_GOLD_TICKET, 8, GOLD_RANK, 45, 45,
        sRecGoldMenu, RECYCLE_NEED_GOLD_RANK, RECYCLE_DRAW_GOLD,
        PRIZE_POOL(sGoldLoss), PRIZE_POOL(sGoldWin), PRIZE_POOL(sGoldBig),
    },
    [RECYCLE_TICKET_PRISM] = {
        ITEM_PRISM_TICKET, 10, DIAMOND_RANK, 30, 50,
        sRecPrismMenu, RECYCLE_NEED_DIAMOND_RANK, RECYCLE_DRAW_PRISM,
        PRIZE_POOL(sPrismLoss), PRIZE_POOL(sPrismWin), PRIZE_POOL(sPrismBig),
    },
};

/* Old saves stored one abstract ticket (enum SpindaCafeTicketType). */
static u8 LegacyTicketItem(u8 ticketType)
{
    switch (ticketType) {
        case CAFE_TICKET_SILVER:
            return ITEM_SILVER_TICKET;
        case CAFE_TICKET_GOLD:
            return ITEM_GOLD_TICKET;
        case CAFE_TICKET_PRISM:
            return ITEM_PRISM_TICKET;
        default:
            return ITEM_PRIZE_TICKET;
    }
}
