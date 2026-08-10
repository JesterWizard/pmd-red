#ifndef GUARD_CODE_801C8C4_H
#define GUARD_CODE_801C8C4_H

#include "constants/item.h"
#include "structs/menu.h"
#include "structs/str_text.h"
#include "text_3.h"

/* Take-list rows: one per stored unit when compact (toolbox-style), else one per id. */
#define STORAGE_MENU_MAX_ENTRIES STORAGE_SIZE

// size: varies with STORAGE_MENU_MAX_ENTRIES
struct unkStruct_203B244
{
    u32 unk0;
    /* 0x4 */ u8 itemIDs[STORAGE_MENU_MAX_ENTRIES];
    /* selection flags indexed by menu entry, not item id */
    u8 selected[STORAGE_MENU_MAX_ENTRIES];
    MenuHeaderWindow unk4B4;
};

bool8 sub_801C8C4(s32, s32, DungeonPos *, u32);
u32 sub_801CA08(bool8);
u8 sub_801CB24(void);
void sub_801CB5C(bool8);
void sub_801CBB8(void);
void sub_801CCD8(void);
bool8 sub_801CF14(s32);
bool8 sub_801CF50(s32);
void sub_801CF94(void);
s32 sub_801CFB8(void);
u32 sub_801CFE0(s32 index);
struct unkStruct_203B244 *sub_801D008(void);

#endif // GUARD_CODE_801C8C4_H
