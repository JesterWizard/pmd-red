#ifndef GUARD_DUNGEON_DAMAGE_PREVIEW_H
#define GUARD_DUNGEON_DAMAGE_PREVIEW_H

#include "structs/dungeon_entity.h"
#include "structs/str_moves.h"
#include "structs/str_text.h"

void CreateDungeonMenuSubWindowWithDamagePreview(WindowTemplate *mainWindow, s32 subWindowX, Entity *attacker, Move *move);

#endif /* GUARD_DUNGEON_DAMAGE_PREVIEW_H */
