namespace RescueEditor.Core;

public sealed class DungeonFloorRenderResult
{
    public required byte[] Png { get; init; }
    public required int Width { get; init; }
    public required int Height { get; init; }
    public required int FloorTileCount { get; init; }
    public required int RoomCount { get; init; }
}

public static class DungeonFloorRenderer
{
    public const uint DefaultSeed = 1;
    private const int ChunkPixels = 24;

    public static string DefaultCacheDirectory(string? repositoryRoot)
    {
        var root = repositoryRoot;
        if (!string.IsNullOrWhiteSpace(root))
        {
            var local = Path.Combine(root, ".rescue-temple", "dungeon-floors");
            return local;
        }

        return Path.Combine(
            Environment.GetFolderPath(Environment.SpecialFolder.LocalApplicationData),
            "RescueTemple", "dungeon-floors");
    }

    public static DungeonFloorRenderResult Render(
        RomImage rom,
        DungeonFloorRecord floor,
        string? cacheDirectory = null,
        uint seed = DefaultSeed,
        bool searchShipped = true)
    {
        var writable = cacheDirectory ?? DefaultCacheDirectory(CatalogBuilder.FindRepositoryRoot(rom.Path));
        if (DungeonFloorPreviewCache.TryLoad(writable, floor, seed, out var cached) && cached is not null)
            return cached;
        if (searchShipped)
        {
            var shipped = DungeonFloorPreviewCache.ShippedDirectory();
            if (!string.Equals(shipped, writable, StringComparison.OrdinalIgnoreCase) &&
                DungeonFloorPreviewCache.TryLoad(shipped, floor, seed, out cached) && cached is not null)
                return cached;
        }

        var map = new DungeonFloorGenerator(seed).Generate(floor.Properties);
        var image = RenderMap(rom, floor.Properties.Tileset, map);
        var result = new DungeonFloorRenderResult
        {
            Png = image.Png,
            Width = image.Width,
            Height = image.Height,
            FloorTileCount = map.FloorTileCount,
            RoomCount = map.RoomCount,
        };
        DungeonFloorPreviewCache.Save(writable, floor, seed, result);
        return result;
    }

    private static (byte[] Png, int Width, int Height) RenderMap(
        RomImage rom, int tileset, GeneratedDungeonFloor map)
    {
        var fon = LoadAsset(rom, $"b{tileset:D2}fon");
        var cel = LoadAsset(rom, $"b{tileset:D2}cel");
        var palBytes = LoadAsset(rom, $"b{tileset:D2}pal");
        var cex = tileset < 64 ? TryLoadAsset(rom, $"b{tileset:D2}cex") : null;
        if (fon is null || cel is null || palBytes is null)
            throw new InvalidDataException($"Dungeon tileset {tileset} is missing fon/cel/pal.");

        var pal = ReadPalette(palBytes);
        var width = map.Width * ChunkPixels;
        var height = map.Height * ChunkPixels;
        var pixels = new byte[checked(width * height * 4)];
        var oob = tileset is >= 0 and < 64 && IsWaterTileset(rom, tileset) ? 3 : 0;

        for (var ty = 0; ty < map.Height; ty++)
        for (var tx = 0; tx < map.Width; tx++)
        {
            var cell = ResolveCell(map, tx, ty, cex, oob, tileset);
            BlitCell(fon, cel, pal, cell, pixels, width, tx * ChunkPixels, ty * ChunkPixels);
            if (map.Shop[tx, ty])
                TintShopCell(pixels, width, tx * ChunkPixels, ty * ChunkPixels);
        }

        return (new RgbaImage(width, height, pixels).ToPng(), width, height);
    }

    private static int ResolveCell(GeneratedDungeonFloor map, int x, int y, byte[]? cex, int oob, int tileset)
    {
        if (tileset >= 64 || cex is null)
            return map.Terrain[x, y] == DungeonFloorGenerator.TerrainFloor ? 1 : 0;

        var self = TerrainAt(map, x, y, oob);
        Span<int> n = stackalloc int[8];
        n[0] = TerrainAt(map, x, y + 1, oob);
        n[1] = TerrainAt(map, x + 1, y + 1, oob);
        n[2] = TerrainAt(map, x + 1, y, oob);
        n[3] = TerrainAt(map, x + 1, y - 1, oob);
        n[4] = TerrainAt(map, x, y - 1, oob);
        n[5] = TerrainAt(map, x - 1, y - 1, oob);
        n[6] = TerrainAt(map, x - 1, y, oob);
        n[7] = TerrainAt(map, x - 1, y + 1, oob);

        uint mask;
        if (self == 1)
        {
            mask = 0xFF;
            for (var i = 0; i < 8; i++)
                if (n[i] == 0)
                    mask &= ~(1u << i);
            mask |= 0x200;
        }
        else if (self is 2 or 3)
        {
            mask = 0xFF;
            for (var i = 0; i < 8; i++)
                if (n[i] != self)
                    mask &= ~(1u << i);
            mask |= 0x100;
        }
        else
        {
            mask = 0;
            for (var i = 0; i < 8; i++)
                if (n[i] == 0)
                    mask |= 1u << i;
        }

        var id = (int)(mask * 3);
        return id >= 0 && id < cex.Length ? cex[id] : 0;
    }

    private static void TintShopCell(byte[] pixels, int stride, int destX, int destY)
    {
        for (var row = 0; row < ChunkPixels; row++)
        for (var col = 0; col < ChunkPixels; col++)
        {
            var o = ((destY + row) * stride + destX + col) * 4;
            if ((uint)o + 3 >= (uint)pixels.Length)
                continue;
            pixels[o] = (byte)Math.Min(255, pixels[o] + 40);
            pixels[o + 1] = (byte)Math.Min(255, pixels[o + 1] + 28);
            pixels[o + 2] = (byte)(pixels[o + 2] * 3 / 4);
        }
    }

    private static int TerrainAt(GeneratedDungeonFloor map, int x, int y, int oob)
    {
        if (x < 0 || y < 0 || x >= map.Width || y >= map.Height)
            return oob;
        return map.Terrain[x, y];
    }

    private static void BlitCell(
        byte[] fon, byte[] cel, RgbaColor[] pal, int cell, byte[] pixels, int stride, int destX, int destY)
    {
        var celBase = cell * 9;
        if ((celBase + 9) * 2 > cel.Length)
            return;
        for (var ty = 0; ty < 3; ty++)
        for (var tx = 0; tx < 3; tx++)
        {
            var entry = BitConverter.ToUInt16(cel, (celBase + ty * 3 + tx) * 2);
            BlitTile(fon, pal, entry, pixels, stride, destX + tx * 8, destY + ty * 8);
        }
    }

    private static void BlitTile(
        ReadOnlySpan<byte> fon, RgbaColor[] pal, ushort entry, byte[] pixels, int stride, int destX, int destY)
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
            if ((uint)o + 3 >= (uint)pixels.Length)
                continue;
            pixels[o] = c.R;
            pixels[o + 1] = c.G;
            pixels[o + 2] = c.B;
            pixels[o + 3] = 255;
        }
    }

    private static bool IsWaterTileset(RomImage rom, int tileset)
    {
        // gDungeonWaterType is not required for a readable preview; lava/water only changes OOB.
        return tileset is 17 or 18 or 22 or 26 or 30 or 34 or 42 or 49;
    }

    private static RgbaColor[] ReadPalette(ReadOnlySpan<byte> palBytes)
    {
        var count = palBytes.Length / 4;
        var colors = new RgbaColor[count];
        for (var i = 0; i < count; i++)
        {
            var o = i * 4;
            colors[i] = new RgbaColor(palBytes[o], palBytes[o + 1], palBytes[o + 2], 255);
        }

        return colors;
    }

    private static byte[]? TryLoadAsset(RomImage rom, string name)
    {
        try
        {
            return LoadAsset(rom, name);
        }
        catch
        {
            return null;
        }
    }

    private static byte[] LoadAsset(RomImage rom, string name)
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

        throw new FileNotFoundException($"Dungeon asset '{name}' was not found.");
    }
}
