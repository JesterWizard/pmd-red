#ifndef GUARD_DUNGEON_SUBMENU_H
#define GUARD_DUNGEON_SUBMENU_H

#include "structs/str_text.h"

void CreateDungeonMenuSubWindow(WindowTemplate *mainWindow, s32 subWindowX);
#ifdef SKY_STORY
void CreateDungeonMenuSubWindowKeepWindow1(WindowTemplate *mainWindow, const WindowTemplate *keptWindow, s32 subWindowX);
#endif

#endif
