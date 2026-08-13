using System.Buffers.Binary;
using System.Globalization;

namespace RescueEditor.Core;

/// <summary>
/// Friend-area scene map upload: GBA tile rules (8×8), at least one screen (240×160),
/// and 4bpp BG palettes (16 banks × 15 opaque colors).
/// </summary>
public static class FriendAreaBackgroundUpload
{
    public const int TilePx = 8;
    public const int MinWidth = 240;
    public const int MinHeight = 160;
    public const int MaxWidth = 512; // 64 chunk columns × 1 tile
    public const int MaxHeight = 2040; // BMA height is a u8 tile count
    public const int MaxPalettes = 16;
    public const int MaxColorsPerTile = 15;
    public const int MaxUniqueColors = MaxPalettes * MaxColorsPerTile;
    public const int MaxTiles = 1023;

    public static string RestrictionsText =>
        $"PNG, width/height multiples of {TilePx}, {MinWidth}×{MinHeight}–{MaxWidth}×{MaxHeight}, " +
        $"at most {MaxUniqueColors} colors ({MaxColorsPerTile} per 8×8 tile).";

    public static string? Validate(RgbaImage image)
    {
        if (image.Width % TilePx != 0 || image.Height % TilePx != 0)
            return $"Width and height must be multiples of {TilePx} (got {image.Width}×{image.Height}).";
        if (image.Width < MinWidth || image.Height < MinHeight)
            return $"Image must be at least {MinWidth}×{MinHeight} (got {image.Width}×{image.Height}).";
        if (image.Width > MaxWidth || image.Height > MaxHeight)
            return $"Image must be at most {MaxWidth}×{MaxHeight} (got {image.Width}×{image.Height}).";

        var colors = CountUniqueOpaqueColors(image);
        if (colors > MaxUniqueColors)
        {
            return $"Image has {colors} unique colors; ground maps allow at most {MaxUniqueColors} " +
                   $"({MaxPalettes} palettes × {MaxColorsPerTile} colors).";
        }

        var tilesX = image.Width / TilePx;
        var tilesY = image.Height / TilePx;
        for (var ty = 0; ty < tilesY; ty++)
        {
            for (var tx = 0; tx < tilesX; tx++)
            {
                var perTile = CountTileColors(image, tx, ty);
                if (perTile > MaxColorsPerTile)
                {
                    return $"Tile ({tx},{ty}) uses {perTile} colors; each 8×8 tile may use at most {MaxColorsPerTile}.";
                }
            }
        }

        return null;
    }

    public static bool TryEncode(
        RgbaImage image, out byte[] bpl, out byte[] bpc, out byte[] bma, out string? error)
    {
        bpl = [];
        bpc = [];
        bma = [];
        error = Validate(image);
        if (error is not null)
            return false;

        if (!TryBuildPalettes(image, out var palettes, out var tileBank, out error))
            return false;

        var tilesX = image.Width / TilePx;
        var tilesY = image.Height / TilePx;
        var tiles = new List<byte[]>();
        var tileKeys = new Dictionary<string, int>(StringComparer.Ordinal);
        var chunkList = new List<ushort>();
        var chunkKeys = new Dictionary<ushort, int>();
        var layer = new ushort[tilesX * tilesY];

        for (var ty = 0; ty < tilesY; ty++)
        {
            for (var tx = 0; tx < tilesX; tx++)
            {
                var pal = tileBank[ty * tilesX + tx];
                var indices = ExtractTileIndices(image, palettes[pal], tx, ty);
                var (tileIndex, flags) = InternTile(indices, tiles, tileKeys);
                if (tiles.Count > MaxTiles)
                {
                    error = $"Image needs more than {MaxTiles} unique tiles.";
                    return false;
                }

                var entry = (ushort)((tileIndex & 0x3FF) | flags | (pal << 12));
                if (!chunkKeys.TryGetValue(entry, out var chunkId))
                {
                    chunkId = chunkList.Count + 1;
                    chunkList.Add(entry);
                    chunkKeys[entry] = chunkId;
                }

                layer[ty * tilesX + tx] = (ushort)chunkId;
            }
        }

        bpl = WriteBpl(palettes);
        bpc = WriteBpc(tiles, chunkList);
        bma = WriteBma(tilesX, tilesY, layer);
        return true;
    }

    public static string? TryWrite(
        MutableRom rom,
        AssetCatalog? catalog,
        string sceneBma,
        RgbaImage image,
        ICollection<RomSpan>? dirty = null)
    {
        if (!TryEncode(image, out var bpl, out var bpc, out var bma, out var error))
            return error ?? "Could not encode the image.";

        var stem = sceneBma.Length > 0 && sceneBma[^1] is 'm' or 'M' ? sceneBma[..^1] : sceneBma;
        RomArchiveEntry? bplEntry = null, bpcEntry = null, bmaEntry = null;
        foreach (var archive in RomArchiveParser.FindArchives(RomImage.FromBytes(rom.SourcePath, rom.Bytes.ToArray())))
        {
            foreach (var entry in archive.Entries)
            {
                if (entry.Name.Equals(stem, StringComparison.Ordinal))
                    bplEntry = entry;
                else if (entry.Name.Equals(stem + "c", StringComparison.Ordinal) ||
                         entry.Name.Equals(stem + "C", StringComparison.Ordinal))
                    bpcEntry = entry;
                else if (entry.Name.Equals(sceneBma, StringComparison.OrdinalIgnoreCase))
                    bmaEntry = entry;
            }
        }

        if (bplEntry is null || bpcEntry is null || bmaEntry is null)
            return $"ROM is missing ground files for {sceneBma}.";

        try
        {
            WriteBlob(rom, bplEntry, bpl, dirty);
            WriteBlob(rom, bpcEntry, bpc, dirty);
            WriteBlob(rom, bmaEntry, bma, dirty);
        }
        catch (InvalidOperationException)
        {
            rom.ExtendTo(rom.Length + 0x20000);
            try
            {
                WriteBlob(rom, bplEntry, bpl, dirty);
                WriteBlob(rom, bpcEntry, bpc, dirty);
                WriteBlob(rom, bmaEntry, bma, dirty);
            }
            catch (InvalidOperationException exception)
            {
                return exception.Message;
            }
        }

        PatchCatalog(catalog, sceneBma, bplEntry, bpcEntry, bmaEntry, bpl.Length, bpc.Length, bma.Length, rom);
        return null;
    }

    private static void WriteBlob(MutableRom rom, RomArchiveEntry entry, byte[] data, ICollection<RomSpan>? dirty)
    {
        var dest = entry.Offset;
        if (data.Length > entry.Size)
        {
            dest = FreeSpaceAllocator.FindFreeSpace(rom, data.Length, alignment: 4);
            rom.WritePointer(entry.DataPointerOffset, dest);
            dirty?.Add(new RomSpan(entry.DataPointerOffset, 4));
            entry.Offset = dest;
            entry.Size = data.Length;
        }

        rom.WriteBytes(dest, data);
        dirty?.Add(new RomSpan(dest, data.Length));
    }

    private static void PatchCatalog(
        AssetCatalog? catalog,
        string sceneBma,
        RomArchiveEntry bpl,
        RomArchiveEntry bpc,
        RomArchiveEntry bma,
        int bplSize,
        int bpcSize,
        int bmaSize,
        MutableRom rom)
    {
        if (catalog is null)
            return;
        foreach (var asset in catalog.ForCategory(AssetCategory.GroundMaps))
        {
            if (!asset.Metadata.TryGetValue("romName", out var name) ||
                !name.Equals(sceneBma, StringComparison.OrdinalIgnoreCase))
                continue;
            if (asset.Metadata is not Dictionary<string, string> meta)
                return;
            meta["bplOffset"] = ReadPointerOffset(rom, bpl.DataPointerOffset).ToString(CultureInfo.InvariantCulture);
            meta["bplSize"] = bplSize.ToString(CultureInfo.InvariantCulture);
            meta["bpcOffset"] = ReadPointerOffset(rom, bpc.DataPointerOffset).ToString(CultureInfo.InvariantCulture);
            meta["bpcSize"] = bpcSize.ToString(CultureInfo.InvariantCulture);
            return;
        }

        _ = bmaSize;
    }

    private static int ReadPointerOffset(MutableRom rom, int pointerField)
    {
        var pointer = rom.ReadUInt32(pointerField);
        return (int)(pointer - RomImage.RomVirtualAddress);
    }

    private static int CountUniqueOpaqueColors(RgbaImage image)
    {
        var set = new HashSet<int>();
        var px = image.Pixels;
        for (var i = 0; i < px.Length; i += 4)
        {
            if (px[i + 3] < 128)
                continue;
            set.Add(px[i] << 16 | px[i + 1] << 8 | px[i + 2]);
        }

        return set.Count;
    }

    private static int CountTileColors(RgbaImage image, int tx, int ty)
    {
        var set = new HashSet<int>();
        var px = image.Pixels;
        for (var row = 0; row < TilePx; row++)
        {
            for (var col = 0; col < TilePx; col++)
            {
                var o = ((ty * TilePx + row) * image.Width + tx * TilePx + col) * 4;
                if (px[o + 3] < 128)
                    continue;
                set.Add(px[o] << 16 | px[o + 1] << 8 | px[o + 2]);
            }
        }

        return set.Count;
    }

    private static bool TryBuildPalettes(
        RgbaImage image,
        out List<int[]> palettes,
        out int[] tileBank,
        out string? error)
    {
        var tilesX = image.Width / TilePx;
        var tilesY = image.Height / TilePx;
        palettes = [];
        tileBank = new int[tilesX * tilesY];
        error = null;

        var tileSets = new List<HashSet<int>>(tilesX * tilesY);
        for (var ty = 0; ty < tilesY; ty++)
        {
            for (var tx = 0; tx < tilesX; tx++)
            {
                var set = new HashSet<int>();
                var px = image.Pixels;
                for (var row = 0; row < TilePx; row++)
                {
                    for (var col = 0; col < TilePx; col++)
                    {
                        var o = ((ty * TilePx + row) * image.Width + tx * TilePx + col) * 4;
                        if (px[o + 3] < 128)
                            continue;
                        set.Add(px[o] << 16 | px[o + 1] << 8 | px[o + 2]);
                    }
                }

                tileSets.Add(set);
            }
        }

        var banks = new List<HashSet<int>>();
        var order = Enumerable.Range(0, tileSets.Count).OrderByDescending(i => tileSets[i].Count).ToArray();
        foreach (var ti in order)
        {
            var set = tileSets[ti];
            var chosen = -1;
            var bestExtra = int.MaxValue;
            for (var b = 0; b < banks.Count; b++)
            {
                var extra = 0;
                foreach (var color in set)
                {
                    if (!banks[b].Contains(color))
                        extra++;
                }

                if (banks[b].Count + extra > MaxColorsPerTile)
                    continue;
                if (extra < bestExtra)
                {
                    bestExtra = extra;
                    chosen = b;
                    if (extra == 0)
                        break;
                }
            }

            if (chosen < 0)
            {
                if (banks.Count >= MaxPalettes)
                {
                    error = $"Cannot pack colors into {MaxPalettes} palettes of {MaxColorsPerTile}.";
                    return false;
                }

                chosen = banks.Count;
                banks.Add([]);
            }

            foreach (var color in set)
                banks[chosen].Add(color);
            tileBank[ti] = chosen;
        }

        if (banks.Count == 0)
            banks.Add([]);

        palettes = banks.Select(BankToRgbaArray).ToList();
        return true;
    }

    private static int[] BankToRgbaArray(HashSet<int> bank)
    {
        var colors = new int[16];
        var i = 1;
        foreach (var color in bank)
        {
            if (i >= 16)
                break;
            colors[i++] = color;
        }

        return colors;
    }

    private static byte[] ExtractTileIndices(RgbaImage image, int[] palette, int tx, int ty)
    {
        var indices = new byte[TilePx * TilePx];
        var px = image.Pixels;
        for (var row = 0; row < TilePx; row++)
        {
            for (var col = 0; col < TilePx; col++)
            {
                var o = ((ty * TilePx + row) * image.Width + tx * TilePx + col) * 4;
                if (px[o + 3] < 128)
                    continue;
                var rgb = px[o] << 16 | px[o + 1] << 8 | px[o + 2];
                var idx = 1;
                for (var p = 1; p < palette.Length; p++)
                {
                    if (palette[p] == rgb)
                    {
                        idx = p;
                        break;
                    }
                }

                indices[row * TilePx + col] = (byte)idx;
            }
        }

        return indices;
    }

    private static (int Index, int Flags) InternTile(
        byte[] indices, List<byte[]> tiles, Dictionary<string, int> lookup)
    {
        var raw = Encode4Bpp(indices);
        var key = Convert.ToHexString(raw);
        if (lookup.TryGetValue(key, out var existing))
            return (existing, 0);

        tiles.Add(raw);
        var index = tiles.Count; // tile 0 is implied empty
        lookup[key] = index;
        return (index, 0);
    }

    private static byte[] Encode4Bpp(byte[] indices)
    {
        var raw = new byte[32];
        for (var i = 0; i < 32; i++)
        {
            var lo = indices[i * 2] & 0xF;
            var hi = indices[i * 2 + 1] & 0xF;
            raw[i] = (byte)(lo | (hi << 4));
        }

        return raw;
    }

    private static byte[] WriteBpl(List<int[]> palettes)
    {
        var data = new byte[4 + palettes.Count * 15 * 4];
        BinaryPrimitives.WriteUInt16LittleEndian(data, (ushort)palettes.Count);
        var o = 4;
        foreach (var pal in palettes)
        {
            for (var c = 1; c < 16; c++, o += 4)
            {
                var rgb = pal[c];
                data[o] = (byte)(rgb >> 16);
                data[o + 1] = (byte)(rgb >> 8);
                data[o + 2] = (byte)rgb;
            }
        }

        return data;
    }

    private static byte[] WriteBpc(List<byte[]> tiles, List<ushort> chunks)
    {
        var numTiles = tiles.Count + 1;
        var numChunks = chunks.Count + 1;
        var data = new byte[16 + tiles.Count * 32 + chunks.Count * 2];
        BinaryPrimitives.WriteInt16LittleEndian(data, 1);
        BinaryPrimitives.WriteInt16LittleEndian(data.AsSpan(2), 1);
        BinaryPrimitives.WriteInt16LittleEndian(data.AsSpan(4), (short)numTiles);
        BinaryPrimitives.WriteInt16LittleEndian(data.AsSpan(14), (short)numChunks);
        var o = 16;
        foreach (var tile in tiles)
        {
            tile.CopyTo(data, o);
            o += 32;
        }

        foreach (var entry in chunks)
        {
            BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(o), entry);
            o += 2;
        }

        return data;
    }

    private static byte[] WriteBma(int tilesX, int tilesY, ushort[] chunks)
    {
        var layer = EncodeLayer(chunks, tilesX, tilesY);
        var collision = EncodeCollision(tilesX * tilesY);
        var data = new byte[12 + layer.Length + collision.Length];
        data[0] = (byte)tilesX;
        data[1] = (byte)tilesY;
        data[2] = 1;
        data[3] = 1;
        data[4] = (byte)tilesX;
        data[5] = (byte)tilesY;
        data[6] = 1;
        BinaryPrimitives.WriteInt16LittleEndian(data.AsSpan(10), 1);
        layer.CopyTo(data, 12);
        collision.CopyTo(data, 12 + layer.Length);
        return data;
    }

    private static byte[] EncodeLayer(ushort[] chunkIds, int widthChunks, int heightChunks)
    {
        var output = new List<byte>(widthChunks * heightChunks * 2);
        var previous = new ushort[64];
        for (var row = 0; row < heightChunks; row++)
        {
            var packed = new ushort[widthChunks];
            for (var x = 0; x < widthChunks; x++)
            {
                var value = chunkIds[row * widthChunks + x];
                packed[x] = row == 0 ? value : (ushort)(value ^ previous[x]);
                previous[x] = value;
            }

            var column = 0;
            while (column < widthChunks)
            {
                var a = packed[column] & 0xFFF;
                var b = column + 1 < widthChunks ? packed[column + 1] & 0xFFF : 0;
                output.Add(0xC0);
                var packedPair = a | (b << 12);
                output.Add((byte)packedPair);
                output.Add((byte)(packedPair >> 8));
                output.Add((byte)(packedPair >> 16));
                column += 2;
            }
        }

        return output.ToArray();
    }

    private static byte[] EncodeCollision(int tileCount)
    {
        var output = new List<byte>();
        var remaining = tileCount;
        while (remaining > 0)
        {
            var run = Math.Min(128, remaining);
            output.Add((byte)(run - 1));
            remaining -= run;
        }

        return output.ToArray();
    }
}
