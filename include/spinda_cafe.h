#ifndef GUARD_SPINDA_CAFE_H
#define GUARD_SPINDA_CAFE_H

#include "gba/types.h"

#define SPINDA_CAFE_SAVE_SIZE 0x20

enum SpindaCafeTicketType
{
    CAFE_TICKET_NONE = 0,
    CAFE_TICKET_BRONZE,
    CAFE_TICKET_SILVER,
    CAFE_TICKET_GOLD,
    CAFE_TICKET_PRISM,
};

/* Persistent recycle progress (also serialized to flash). */
struct SpindaCafeData
{
    u16 itemsRecycled;
    u8 catalogTier; /* bit0–3 unlock tiers */
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
void DestroySpindaJuiceBar(void);
u32 SpindaJuiceBarCallback(void);

bool8 CreateRecycleShop(s32 mode);
void DestroyRecycleShop(void);
u32 RecycleShopCallback(void);

#endif /* GUARD_SPINDA_CAFE_H */
