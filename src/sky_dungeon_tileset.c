/*
 * Explorers of Sky demake: dungeons use the EoS Beach Cave tileset
 * (dungeon.bin #1), converted by tools/convert_eos_dungeon_tileset.py into
 * the five pieces Red loads per tileset (fon/cel/cex/pal/canm). Game logic
 * keeps the Lapis Cave tileset id (water terrain etc.); only the graphics,
 * palette and autotile table are swapped.
 *
 * The sky ROM has no Red dungeon tilesets (b##fon/cel/cex/pal/canm/emap are
 * left out of its dungeon archive, tools/make_sky_dungeon_archive.py), so
 * every tileset id draws Beach Cave: pre-drawn background tilesets (ids 0x40+,
 * Red's boss rooms) the Beach Cave Pit background, the rest the Beach Cave
 * floors. Dungeon-type ground maps (Red's dungeon entrances and summits) draw
 * the Beach Cave floor tiles too. Drenched Bluff's floors (tileset id
 * SKY_DRENCHED_BLUFF_TILESET) draw EoS dungeon.bin #2, Mt. Bristle's
 * (SKY_MT_BRISTLE_TILESET) EoS dungeon.bin #3, and Mt. Bristle Peak
 * (SKY_MT_BRISTLE_PEAK_TILESET, a pre-drawn background id) EoS's fixed-floor
 * background dungeon_bg1.
 */
#include "global.h"

#ifdef SKY_STORY

#include "globaldata.h"
#include "sky_story.h"
#include "cpu.h"
#include "structs/rgb.h"
#include "structs/str_dungeon.h"
#include "structs/str_file_system.h"

#include "data/sky_beach_cave_tileset.h"
#include "data/sky_beach_cave_pit_tileset.h"
#include "data/sky_drenched_bluff_tileset.h"
#include "data/sky_mt_bristle_tileset.h"
#include "data/sky_mt_bristle_peak_tileset.h"

static const OpenedFile sPaletteFile = { NULL, sBeachCavePalette };
static const OpenedFile sAnimFile = { NULL, sBeachCaveAnim };
static const OpenedFile sPitPaletteFile = { NULL, sBeachCavePitPalette };
static const OpenedFile sPitAnimFile = { NULL, sBeachCavePitAnim };
static const OpenedFile sDrenchedBluffPaletteFile = { NULL, sDrenchedBluffPalette };
static const OpenedFile sDrenchedBluffAnimFile = { NULL, sDrenchedBluffAnim };
static const OpenedFile sMtBristlePaletteFile = { NULL, sMtBristlePalette };
static const OpenedFile sMtBristleAnimFile = { NULL, sMtBristleAnim };
static const OpenedFile sMtBristlePeakPaletteFile = { NULL, sMtBristlePeakPalette };
static const OpenedFile sMtBristlePeakAnimFile = { NULL, sMtBristlePeakAnim };

bool8 SkyStory_IsSkyTilesetFile(const OpenedFile *file)
{
    return file == &sPaletteFile || file == &sAnimFile
        || file == &sPitPaletteFile || file == &sPitAnimFile
        || file == &sDrenchedBluffPaletteFile || file == &sDrenchedBluffAnimFile
        || file == &sMtBristlePaletteFile || file == &sMtBristleAnimFile
        || file == &sMtBristlePeakPaletteFile || file == &sMtBristlePeakAnimFile;
}

static void LoadBeachCaveFloorTiles(void *tiles, void *cel, u8 *cex, OpenedFile **paletteFile, OpenedFile **animFile)
{
    CpuCopy(tiles, sBeachCaveTiles, sizeof(sBeachCaveTiles));
    CpuCopy(cel, sBeachCaveChunks, sizeof(sBeachCaveChunks));
    CpuCopy(cex, sBeachCaveCex, sizeof(sBeachCaveCex));
    *paletteFile = (OpenedFile *)&sPaletteFile;
    *animFile = (OpenedFile *)&sAnimFile;
}

/* Fills the same destinations LoadDungeonTilesetAssets does. */
void SkyStory_LoadDungeonTileset(OpenedFile **paletteFile, OpenedFile **animFile, u16 (*cel)[9], u8 *cex)
{
    if (gDungeon->tileset == SKY_MT_BRISTLE_PEAK_TILESET) {
        /* Mt. Bristle Peak: EoS fixed-floor background dungeon_bg1 (533
         * tiles: the grid tiles move after them, as for the Pit). */
        CpuCopy((void *)0x06008000, sMtBristlePeakTiles, sizeof(sMtBristlePeakTiles));
        CpuCopy(cel, sMtBristlePeakChunks, sizeof(sMtBristlePeakChunks));
        CpuCopy(cex, sMtBristlePeakEmap, sizeof(sMtBristlePeakEmap));
        if (sizeof(sMtBristlePeakTiles) > 0x200 * 0x20)
            SkyStory_RelocateGridTiles(sizeof(sMtBristlePeakTiles) / 0x20);
        *paletteFile = (OpenedFile *)&sMtBristlePeakPaletteFile;
        *animFile = (OpenedFile *)&sMtBristlePeakAnimFile;
        return;
    }
    if (gDungeon->tileset >= SKY_BEACH_CAVE_PIT_TILESET) {
        /* Beach Cave Pit: EoS fixed-floor background (dungeon_bg0) as a
         * pre-drawn 24x24 map, like Red's boss backgrounds. */
        CpuCopy((void *)0x06008000, sBeachCavePitTiles, sizeof(sBeachCavePitTiles));
        CpuCopy(cel, sBeachCavePitChunks, sizeof(sBeachCavePitChunks));
        CpuCopy(cex, sBeachCavePitEmap, sizeof(sBeachCavePitEmap));
        if (sizeof(sBeachCavePitTiles) > 0x200 * 0x20)
            SkyStory_RelocateGridTiles(sizeof(sBeachCavePitTiles) / 0x20);
        *paletteFile = (OpenedFile *)&sPitPaletteFile;
        *animFile = (OpenedFile *)&sPitAnimFile;
        return;
    }
    if (gDungeon->tileset == SKY_DRENCHED_BLUFF_TILESET) {
        /* Drenched Bluff: EoS dungeon.bin #2 (478 tiles; water colours
         * animated in palettes 10-11 like Beach Cave's). */
        CpuCopy((void *)0x06008000, sDrenchedBluffTiles, sizeof(sDrenchedBluffTiles));
        CpuCopy(cel, sDrenchedBluffChunks, sizeof(sDrenchedBluffChunks));
        CpuCopy(cex, sDrenchedBluffCex, sizeof(sDrenchedBluffCex));
        *paletteFile = (OpenedFile *)&sDrenchedBluffPaletteFile;
        *animFile = (OpenedFile *)&sDrenchedBluffAnimFile;
        return;
    }
    if (gDungeon->tileset == SKY_MT_BRISTLE_TILESET) {
        /* Mt. Bristle: EoS dungeon.bin #3 (381 tiles). */
        CpuCopy((void *)0x06008000, sMtBristleTiles, sizeof(sMtBristleTiles));
        CpuCopy(cel, sMtBristleChunks, sizeof(sMtBristleChunks));
        CpuCopy(cex, sMtBristleCex, sizeof(sMtBristleCex));
        *paletteFile = (OpenedFile *)&sMtBristlePaletteFile;
        *animFile = (OpenedFile *)&sMtBristleAnimFile;
        return;
    }
    LoadBeachCaveFloorTiles((void *)0x06008000, cel, cex, paletteFile, animFile);
}

/* Pre-drawn backgrounds are 24x24 tiles; Mt. Bristle Peak's room (24x22 at
 * (5,5)) reaches x 28 and y 26. EoS's background repeats its edge there
 * (every 3 columns from x 17, every 2 rows): the chunk for such a tile. */
u8 SkyStory_BackgroundChunk(const u8 *emap, s32 x, s32 y)
{
    if (gDungeon->tileset == SKY_MT_BRISTLE_PEAK_TILESET) {
        if (x > 23)
            x = 21 + (x - 21) % 3;
        if (y > 23)
            y = 22 + (y - 22) % 2;
    }
    if (x > 23 || y > 23)
        return 0;
    return emap[y * 24 + x];
}

/* sub_80ADD9C (dungeon-type ground maps): tiles, chunks (0x1194 bytes) and
 * the autotile table (0x930 bytes) of the Beach Cave floors. */
void SkyStory_LoadGroundDungeonTileset(OpenedFile **paletteFile, OpenedFile **animFile, void *tiles, void *cel, u8 *cex)
{
    LoadBeachCaveFloorTiles(tiles, cel, cex, paletteFile, animFile);
}

#endif /* SKY_STORY */
