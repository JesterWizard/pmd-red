/*
 * Explorers of Sky demake: Beach Cave floors use the EoS Beach Cave tileset
 * (dungeon.bin #1), converted by tools/convert_eos_dungeon_tileset.py into
 * the five pieces Red loads per tileset (fon/cel/cex/pal/canm). Game logic
 * keeps the Lapis Cave tileset id (water terrain etc.); only the graphics,
 * palette and autotile table are swapped.
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

/* Fills the same destinations LoadDungeonTilesetAssets does; returns FALSE
 * when the vanilla files should be loaded instead. */
bool8 SkyStory_LoadDungeonTileset(OpenedFile **paletteFile, OpenedFile **animFile, u16 (*cel)[9], u8 *cex)
{
    if (!SkyStory_IsBeachCave(gDungeon->unk644.dungeonLocation.id))
        return FALSE;
    if (gDungeon->tileset == SKY_BEACH_CAVE_PIT_TILESET) {
        /* Beach Cave Pit: EoS fixed-floor background (dungeon_bg0) as a
         * pre-drawn 24x24 map, like Red's boss backgrounds. */
        CpuCopy((void *)0x06008000, sBeachCavePitTiles, sizeof(sBeachCavePitTiles));
        CpuCopy(cel, sBeachCavePitChunks, sizeof(sBeachCavePitChunks));
        CpuCopy(cex, sBeachCavePitEmap, sizeof(sBeachCavePitEmap));
        *paletteFile = (OpenedFile *)&sPitPaletteFile;
        *animFile = (OpenedFile *)&sPitAnimFile;
        return TRUE;
    }
    CpuCopy((void *)0x06008000, sBeachCaveTiles, sizeof(sBeachCaveTiles));
    CpuCopy(cel, sBeachCaveChunks, sizeof(sBeachCaveChunks));
    CpuCopy(cex, sBeachCaveCex, sizeof(sBeachCaveCex));
    *paletteFile = (OpenedFile *)&sPaletteFile;
    *animFile = (OpenedFile *)&sAnimFile;
    return TRUE;
}

#endif /* SKY_STORY */
