#ifndef GUARD_DUNGEON_HP_BARS_H
#define GUARD_DUNGEON_HP_BARS_H

#include "structs/dungeon_entity.h"

/* Load HP-bar tiles into OBJ VRAM (once per dungeon / floor init). */
void LoadDungeonHpBarGraphics(void);

/* Write OBJ palette 13 for the bars (respects dungeon brightness). */
void ApplyDungeonHpBarPalette(void);

/* Draw a floating HP bar above a visible dungeon Pokémon. */
void DrawDungeonHpBar(Entity *entity, s32 screenX, s32 screenY, s32 ySort, u32 priority);

#endif /* GUARD_DUNGEON_HP_BARS_H */
