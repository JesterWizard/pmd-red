#ifndef GUARD_MENU_WORK_H
#define GUARD_MENU_WORK_H

// Shared EWRAM slots for mutually exclusive UI work pointers.
// Most town/shop menus already heap-allocate their work structs via
// MemoryAlloc; each file still kept a permanent 4-byte EWRAM_INIT NULL
// pointer. Menus that cannot be open at the same time share these slots.
//
// Slot conventions (shop/storage first pass):
//   0 — root shop/storage menus (Kangaskhan, Kecleon, Gulpin, Wigglytuff,
//       Felicity, Makuhita). Only one root at a time.
//   1 — first nested submenu (inventory/shop lists, Gulpin move UI,
//       Wigglytuff area list, Makuhita course list).
//   2 — second nested layer (Wigglytuff friend-area info while list is
//       still live; item description over an inventory picker).
//   3 — reserved for deeper nesting / future menus.
enum MenuWorkSlot {
    MENU_WORK_SLOT_0 = 0,
    MENU_WORK_SLOT_1 = 1,
    MENU_WORK_SLOT_2 = 2,
    MENU_WORK_SLOT_3 = 3,
    MENU_WORK_SLOTS = 4,
};

extern void *gMenuWork[MENU_WORK_SLOTS];

// L-value access to a typed work pointer stored in a pool slot.
#define MENU_WORK(type, slot) (*(type **)&gMenuWork[slot])

#endif // GUARD_MENU_WORK_H
