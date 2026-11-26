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
 * the Beach Cave floor tiles too.
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

static const OpenedFile sPaletteFile = { NULL, sBeachCavePalette };
static const OpenedFile sAnimFile = { NULL, sBeachCaveAnim };
static const OpenedFile sPitPaletteFile = { NULL, sBeachCavePitPalette };
static const OpenedFile sPitAnimFile = { NULL, sBeachCavePitAnim };

bool8 SkyStory_IsSkyTilesetFile(const OpenedFile *file)
{
    return file == &sPaletteFile || file == &sAnimFile
        || file == &sPitPaletteFile || file == &sPitAnimFile;
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
    LoadBeachCaveFloorTiles((void *)0x06008000, cel, cex, paletteFile, animFile);
}

/* sub_80ADD9C (dungeon-type ground maps): tiles, chunks (0x1194 bytes) and
 * the autotile table (0x930 bytes) of the Beach Cave floors. */
void SkyStory_LoadGroundDungeonTileset(OpenedFile **paletteFile, OpenedFile **animFile, void *tiles, void *cel, u8 *cex)
{
    LoadBeachCaveFloorTiles(tiles, cel, cex, paletteFile, animFile);
}

#endif /* SKY_STORY */
