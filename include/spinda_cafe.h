#ifndef GUARD_SPINDA_CAFE_H
#define GUARD_SPINDA_CAFE_H

#include "gba/types.h"
#include "constants/item.h"

#define SPINDA_CAFE_SAVE_SIZE 0x20

enum SpindaCafeTicketType
{
    CAFE_TICKET_NONE = 0,
    CAFE_TICKET_BRONZE,
    CAFE_TICKET_SILVER,
    CAFE_TICKET_GOLD,
    CAFE_TICKET_PRISM,
};

/* Recycle Shop ticket tiers (index into the tier table). */
enum RecycleTicketTierId
{
    RECYCLE_TICKET_PRIZE,
    RECYCLE_TICKET_SILVER,
    RECYCLE_TICKET_GOLD,
    RECYCLE_TICKET_PRISM,
    RECYCLE_TICKET_TIERS,
};

static inline bool8 IsRecycleTicket(u8 itemId)
{
    return itemId >= ITEM_PRIZE_TICKET && itemId <= ITEM_PRISM_TICKET;
}

/* Persistent recycle progress (also serialized to flash). ticketType is only
 * read to hand old saves' abstract ticket over as a ticket item. */
struct SpindaCafeData
{
    u16 itemsRecycled;
    u8 catalogTier; /* derived from itemsRecycled; kept for the save layout */
    u8 ticketType;
    u8 fill04[0x1C];
};

extern struct SpindaCafeData gSpindaCafeData;

void InitSpindaCafe(void);
void ResetSpindaCafeData(void);
u32 SaveSpindaCafeData(u8 *buffer, u32 bufLen);
u32 RestoreSpindaCafeData(u8 *buffer, u32 bufLen);

u8 GetSpindaCafeCatalogTier(void);
void NoteSpindaCafeItemsRecycled(u16 count);

bool8 CreateSpindaJuiceBar(s32 mode);
bool8 CreateSpindaJuiceServe(void);
void DestroySpindaJuiceBar(void);
u32 SpindaJuiceBarCallback(void);

bool8 CreateRecycleShop(s32 mode);
void DestroyRecycleShop(void);
u32 RecycleShopCallback(void);

#endif /* GUARD_SPINDA_CAFE_H */
