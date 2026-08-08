#ifndef GUARD_CUSTOM_DEBUG_MENU_H
#define GUARD_CUSTOM_DEBUG_MENU_H

#include "data_serializer.h"
#include "structs/menu.h"
#include "structs/str_text.h"

#define CUSTOM_DEBUG_MENU_LABEL_LENGTH 64

struct CustomDebugMenu
{
    MenuStruct menus[4];
    WindowTemplates windows;
    MenuItem items[5];
    u8 labels[4][CUSTOM_DEBUG_MENU_LABEL_LENGTH];
};

void CreateCustomDebugMenu(void);
void DeleteCustomDebugMenu(void);
u32 UpdateCustomDebugMenu(void);
void ResetCustomDebugMenuState(void);
void WriteCustomDebugMenuBits(DataSerializer *serializer);
void ReadCustomDebugMenuBits(DataSerializer *serializer);

#endif // GUARD_CUSTOM_DEBUG_MENU_H
