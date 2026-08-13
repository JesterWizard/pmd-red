using System.Buffers.Binary;
using System.Text.RegularExpressions;

namespace RescueEditor.Core;

/// <summary>
/// Previews empty dungeon-shell ground maps (render mode 0xA/0xB) using the retail
/// tileset≥64 emap path (<c>GroundMap_SelectDungeon</c> → <c>sub_80ADD9C</c>).
/// </summary>
public static class DungeonShellPreview
{
    private static readonly Regex ShellBma = new(
        @"^D\d{2}P0[2-9]m$",
        RegexOptions.CultureInvariant | RegexOptions.Compiled);

    // sMapToDungeonTable subset (ground_map.c) — mapId → (dungeonId, floor).
    private static readonly Dictionary<int, (int DungeonId, int Floor)> MapToDungeon = new()
    {
        [189] = (5, 100),  // MAP_MT_THUNDER_MID
        [190] = (6, 100),  // MAP_MT_THUNDER_END → Mt. Thunder Peak
        [196] = (9, 100),  // MAP_MT_BLAZE_MID
        [197] = (10, 100), // MAP_MT_BLAZE_END
        [199] = (11, 100), // MAP_FROSTY_FOREST_MID
        [200] = (12, 100), // MAP_FROSTY_FOREST_END
        [202] = (13, 100), // MAP_MT_FREEZE_MID
        [203] = (14, 100), // MAP_MT_FREEZE_END
        [205] = (15, 100), // MAP_MAGMA_CAVERN_MID
        [206] = (16, 100), // MAP_MAGMA_CAVERN_END
        [208] = (17, 100), // MAP_SKY_TOWER_MID
        [209] = (18, 100), // MAP_SKY_TOWER_END
    };

    // GetDungeonFloorCount for dungeons above (dungeon_info.c).
    private static readonly Dictionary<int, int> FloorCounts = new()
    {
        [5] = 11,
        [6] = 4,
        [9] = 13,
        [10] = 4,
        [11] = 10,
        [12] = 6,
        [13] = 16,
        [14] = 6,
        [15] = 24,
        [16] = 4,
        [17] = 26,
        [18] = 10,
    };

    public static PreviewContent? TryRender(RomImage rom, GroundMapDefinition? map, int animTick = 0)
    {
        if (map is null || map.BmaName is null || !ShellBma.IsMatch(map.BmaName))
            return null;
        if (map.RenderMode is not (10 or 11))
            return null;
        if (!MapToDungeon.TryGetValue(map.MapId, out var loc))
            return null;
        if (!TryResolveTileset(rom, loc.DungeonId, loc.Floor, out var tileset) || tileset < 64)
            return null;

        try
        {
            var (widthChunks, heightChunks) = ResolveShellChunks(map, rom);
            return RenderEmap(rom, tileset, map.Name, widthChunks, heightChunks, animTick);
        }
        catch
        {
            return null;
        }
    }

    /// <summary>Render a dungeon tileset's baked emap (or a tile sheet if emap is missing).</summary>
    public static PreviewContent? TryRenderTileset(RomImage rom, int tileset, int animTick = 0)
    {
        try
        {
            return RenderEmap(rom, tileset, $"tileset {tileset}", 24, 24, animTick);
        }
        catch
        {
            return TryRenderTileSheet(rom, tileset);
        }
    }

    /// <summary>Resolve dungeon tileset for a boss-end shell map, if applicable.</summary>
    public static bool TryResolveTilesetForMap(RomImage rom, GroundMapDefinition? map, out int tileset)
    {
        tileset = 0;
        if (map is null || !MapToDungeon.TryGetValue(map.MapId, out var loc))
            return false;
        return TryResolveTileset(rom, loc.DungeonId, loc.Floor, out tileset);
    }

    public static bool TryResolveTileset(RomImage rom, int dungeonId, int floor, out int tileset)
    {
        tileset = 0;
        if (dungeonId is < 0 or > 62)
            return false;

        var floorCount = FloorCounts.GetValueOrDefault(dungeonId, 99);
        var dungFloor = floor;
        if (dungFloor <= 0)
            dungFloor = 1;
        if (dungFloor >= floorCount)
            dungFloor = floorCount - 1;

        var tables = DungeonMapParamTables.TryLoad(rom);
        if (tables is null)
            return false;
        var unk0 = tables.FloorTablePointers;
        var floorProperties = tables.FloorProperties;

        var dungArray = rom.ReadPointerOffset(unk0 + dungeonId * 4);
        if (dungArray < 0)
            return false;

        // DungeonMapParam1 is 16 bytes; floors are 1-indexed like retail.
        var paramOff = dungArray + dungFloor * 16;
        if (!rom.IsRangeValid(paramOff, 2))
            return false;
        var mainDataIndex = rom.ReadInt16(paramOff);
        if (mainDataIndex < 0)
            return false;

        const int floorPropertiesSize = 28;
        var tilesetOff = floorProperties + mainDataIndex * floorPropertiesSize + 2;
        if (!rom.IsRangeValid(tilesetOff, 1))
            return false;
        tileset = rom.ReadByte(tilesetOff);
        return true;
    }

    private static PreviewContent RenderEmap(
        RomImage rom, int tileset, string title, int widthChunks, int heightChunks, int animTick = 0)
    {
        // gUnknown_8108EC0[tileset] is identity for tileset ≥ 64.
        var fonCelId = tileset;
        var emap = LoadDungeonAsset(rom, $"b{tileset:D2}emap0");
        var cel = LoadDungeonAsset(rom, $"b{fonCelId:D2}cel");
        var fon = LoadDungeonAsset(rom, $"b{fonCelId:D2}fon");
        var palBytes = LoadDungeonAsset(rom, $"b{tileset:D2}pal");

        if (emap.Length < 24 * 24 || cel.Length < 18 || fon.Length < 32 || palBytes.Length < 64)
            throw new InvalidDataException("Dungeon tileset asset is truncated.");

        var pal = ReadDungeonPalette(palBytes);
        var canm = DungeonCanmAnimation.TryLoad(rom, tileset);
        canm?.ApplyTo(pal, animTick);

        widthChunks = Math.Clamp(widthChunks, 1, 24);
        heightChunks = Math.Clamp(heightChunks, 1, 24);

        const int chunkPixels = 24; // 3×3 tiles of 8×8
        var imageWidth = widthChunks * chunkPixels;
        var imageHeight = heightChunks * chunkPixels;
        var pixels = new byte[checked(imageWidth * imageHeight * 4)];
        for (var i = 0; i < pixels.Length; i += 4)
        {
            pixels[i] = 0x20;
            pixels[i + 1] = 0x20;
            pixels[i + 2] = 0x20;
            pixels[i + 3] = 255;
        }

        for (var cy = 0; cy < heightChunks; cy++)
        for (var cx = 0; cx < widthChunks; cx++)
        {
            var cell = emap[cy * 24 + cx];
            var celBase = cell * 9;
            if ((celBase + 9) * 2 > cel.Length)
                continue;

            for (var ty = 0; ty < 3; ty++)
            for (var tx = 0; tx < 3; tx++)
            {
                var entry = BinaryPrimitives.ReadUInt16LittleEndian(
                    cel.AsSpan((celBase + ty * 3 + tx) * 2, 2));
                BlitTile(fon, pal, entry, pixels, imageWidth,
                    cx * chunkPixels + tx * 8,
                    cy * chunkPixels + ty * 8);
            }
        }

        return new PreviewContent(
            title,
            Png: new RgbaImage(imageWidth, imageHeight, pixels).ToPng(),
            MimeType: "image/png");
    }

    private static PreviewContent? TryRenderTileSheet(RomImage rom, int tileset)
    {
        try
        {
            var fon = LoadDungeonAsset(rom, $"b{tileset:D2}fon");
            var palBytes = LoadDungeonAsset(rom, $"b{tileset:D2}pal");
            if (fon.Length < 32 || palBytes.Length < 64)
                return null;
            var pal = ReadDungeonPalette(palBytes);
            var tileCount = Math.Min(fon.Length / 32, 256);
            var columns = 16;
            var rows = Math.Max(1, (tileCount + columns - 1) / columns);
            var imageWidth = columns * 8;
            var imageHeight = rows * 8;
            var pixels = new byte[checked(imageWidth * imageHeight * 4)];
            for (var i = 0; i < tileCount; i++)
            {
                var tx = (i % columns) * 8;
                var ty = (i / columns) * 8;
                BlitTile(fon, pal, (ushort)i, pixels, imageWidth, tx, ty);
            }

            return new PreviewContent(
                $"tileset {tileset}",
                Png: new RgbaImage(imageWidth, imageHeight, pixels).ToPng(),
                MimeType: "image/png");
        }
        catch
        {
            return null;
        }
    }

    private static (int WidthChunks, int HeightChunks) ResolveShellChunks(
        GroundMapDefinition map, RomImage rom)
    {
        // Prefer live BMA header (matches actor coordinate space).
        try
        {
            foreach (var archive in RomArchiveParser.FindArchives(rom))
            {
                var bma = archive.Entries.FirstOrDefault(e =>
                    e.Name.Equals(map.BmaName, StringComparison.Ordinal));
                if (bma is null)
                    continue;
                var data = Compression.DecompressGmlz(rom.Copy(bma.Offset, bma.Size));
                if (data.Length >= 6)
                    return (data[4], data[5]);
            }
        }
        catch
        {
            // Fall through to defaults.
        }

        return (19, 19);
    }

    private static byte[] LoadDungeonAsset(RomImage rom, string name)
    {
        foreach (var archive in RomArchiveParser.FindArchives(rom))
        {
            var entry = archive.Entries.FirstOrDefault(e =>
                e.Name.Equals(name, StringComparison.Ordinal));
            if (entry is null)
                continue;

            var raw = rom.Copy(entry.Offset, entry.Size);
            var at = raw.AsSpan().IndexOf("AT4PX"u8);
            if (at >= 0)
                return Compression.DecompressAt(raw.AsSpan(at));
            return raw;
        }

        throw new FileNotFoundException($"Dungeon asset '{name}' not found in ROM archives.");
    }

    private static RgbaColor[] ReadDungeonPalette(ReadOnlySpan<byte> palBytes)
    {
        // RGB_Struct: r, g, b, unk(0x80) — see include/structs/rgb.h
        var count = palBytes.Length / 4;
        var colors = new RgbaColor[count];
        for (var i = 0; i < count; i++)
        {
            var o = i * 4;
            colors[i] = new RgbaColor(palBytes[o], palBytes[o + 1], palBytes[o + 2], 255);
        }

        return colors;
    }

    private static void BlitTile(
        ReadOnlySpan<byte> fon,
        RgbaColor[] pal,
        ushort entry,
        byte[] pixels,
        int stride,
        int destX,
        int destY)
    {
        var tileIndex = entry & 0x3FF;
        var tileOff = tileIndex * 32;
        if (tileOff < 0 || tileOff + 32 > fon.Length)
            return;

        var palBank = (entry >> 12) & 0xF;
        var hFlip = (entry & 0x400) != 0;
        var vFlip = (entry & 0x800) != 0;

        for (var row = 0; row < 8; row++)
        for (var col = 0; col < 8; col++)
        {
            var sx = hFlip ? 7 - col : col;
            var sy = vFlip ? 7 - row : row;
            var packed = fon[tileOff + sy * 4 + sx / 2];
            var index = (sx & 1) == 0 ? packed & 0xF : packed >> 4;
            if (index == 0)
                continue;
            var pi = palBank * 16 + index;
            if ((uint)pi >= (uint)pal.Length)
                continue;
            var c = pal[pi];
            var o = ((destY + row) * stride + destX + col) * 4;
            pixels[o] = c.R;
            pixels[o + 1] = c.G;
            pixels[o + 2] = c.B;
            pixels[o + 3] = 255;
        }
    }
}
