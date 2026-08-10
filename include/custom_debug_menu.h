#ifndef GUARD_CUSTOM_DEBUG_MENU_H
#define GUARD_CUSTOM_DEBUG_MENU_H

#include "data_serializer.h"
#include "structs/menu.h"
#include "structs/str_text.h"

#define CUSTOM_DEBUG_MENU_LABEL_LENGTH 64
#define CUSTOM_DEBUG_MENU_PAGE_LABEL_LENGTH 8
#define CUSTOM_DEBUG_MENU_ENTRIES_PER_PAGE 10

enum CustomDebugMenuUiState
{
    CUSTOM_DEBUG_MENU_UI_LIST,
    CUSTOM_DEBUG_MENU_UI_INFO,
};

struct CustomDebugMenu
{
    MenuWindow menu;
    u8 labels[CUSTOM_DEBUG_MENU_ENTRIES_PER_PAGE][CUSTOM_DEBUG_MENU_LABEL_LENGTH];
    u8 pageLabel[CUSTOM_DEBUG_MENU_PAGE_LABEL_LENGTH];
    u8 state;
    s32 infoOptionIndex;
    TouchScreenMenuInput touchScreen;
    WindowTemplates infoWindows;
    WindowHeader infoHeader;
};

void CreateCustomDebugMenu(void);
void DeleteCustomDebugMenu(void);
u32 UpdateCustomDebugMenu(void);
void ResetCustomDebugMenuState(void);
void WriteCustomDebugMenuBits(DataSerializer *serializer);
void ReadCustomDebugMenuBits(DataSerializer *serializer);

#endif // GUARD_CUSTOM_DEBUG_MENU_H
