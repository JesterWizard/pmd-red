using System.Buffers.Binary;

namespace RescueEditor.Core;

/// <summary>Uncompressed 8bpp AT4PN used by custom title / friend-area intros (240×160).</summary>
public static class At4pn8bpp
{
    public const int ScreenWidth = 240;
    public const int ScreenHeight = 160;
    public const int TilePx = 8;
    public const int MapStride = 32;
    public const int PalEntries = 240;
    public const int MaxColors = 239;
    public const int MaxTiles = 600;

    public static (byte[] At4pn, byte[] Pal) Encode(RgbaImage image)
    {
        var src = image.Width == ScreenWidth && image.Height == ScreenHeight
            ? image
            : NearestResize(image, ScreenWidth, ScreenHeight);

        var (indices, pal) = Quantize(src);
        var tiles = new List<byte[]> { new byte[TilePx * TilePx] };
        var lookup = new Dictionary<string, (int Index, int Flags)>(StringComparer.Ordinal)
        {
            [Key(tiles[0])] = (0, 0),
        };

        var bg3 = new ushort[MapStride * MapStride];
        var tilesX = ScreenWidth / TilePx;
        var tilesY = ScreenHeight / TilePx;
        for (var ty = 0; ty < tilesY; ty++)
        {
            for (var tx = 0; tx < tilesX; tx++)
            {
                var raw = ExtractTile(indices, src.Width, tx, ty);
                var (index, flags) = Intern(raw, tiles, lookup);
                bg3[ty * MapStride + tx] = (ushort)((index & 0x3FF) | flags);
            }
        }

        var payload = new byte[MapStride * MapStride * 4 + tiles.Count * 64];
        for (var i = 0; i < MapStride * MapStride; i++)
            BinaryPrimitives.WriteUInt16LittleEndian(payload.AsSpan((MapStride * MapStride + i) * 2), bg3[i]);
        for (var t = 0; t < tiles.Count; t++)
            tiles[t].CopyTo(payload, MapStride * MapStride * 4 + t * 64);

        var at4pn = new byte[7 + payload.Length];
        "AT4PN"u8.CopyTo(at4pn);
        BinaryPrimitives.WriteUInt16LittleEndian(at4pn.AsSpan(5), (ushort)payload.Length);
        payload.CopyTo(at4pn, 7);
        return (at4pn, pal);
    }

    public static RgbaImage Decode(ReadOnlySpan<byte> at4pn, ReadOnlySpan<byte> pal)
    {
        var decoded = Compression.DecompressAt(at4pn);
        if (decoded.Length < 0x1000)
            throw new InvalidDataException("AT4PN payload is missing tilemaps.");

        var palette = new RgbaColor[256];
        var colors = Math.Min(PalEntries, pal.Length / 4);
        for (var i = 0; i < colors; i++)
        {
            palette[i] = new RgbaColor(pal[i * 4], pal[i * 4 + 1], pal[i * 4 + 2], 255);
        }

        var pixels = new byte[256 * 256 * 4];
        var tiles = decoded.AsSpan(0x1000);
        for (var ty = 0; ty < MapStride; ty++)
        {
            for (var tx = 0; tx < MapStride; tx++)
            {
                var entry = BinaryPrimitives.ReadUInt16LittleEndian(
                    decoded.AsSpan((MapStride * MapStride + ty * MapStride + tx) * 2));
                var tileIndex = entry & 0x3FF;
                var hFlip = (entry & 0x400) != 0;
                var vFlip = (entry & 0x800) != 0;
                var tileOff = tileIndex * 64;
                if (tileOff + 64 > tiles.Length)
                    continue;
                Blit8(tiles.Slice(tileOff, 64), palette, pixels, 256, tx * 8, ty * 8, hFlip, vFlip);
            }
        }

        var cropped = new byte[ScreenWidth * ScreenHeight * 4];
        for (var y = 0; y < ScreenHeight; y++)
            pixels.AsSpan(y * 256 * 4, ScreenWidth * 4).CopyTo(cropped.AsSpan(y * ScreenWidth * 4));
        return new RgbaImage(ScreenWidth, ScreenHeight, cropped);
    }

    public static RgbaImage? TryDecode(RomImage rom, int gfxOffset, int palOffset)
    {
        if (!rom.IsRangeValid(gfxOffset, 7) || !rom.IsRangeValid(palOffset, PalEntries * 4))
            return null;
        var len = rom.ReadUInt16(gfxOffset + 5);
        var size = 7 + len;
        if (!rom.IsRangeValid(gfxOffset, size))
            return null;
        try
        {
            return Decode(rom.Copy(gfxOffset, size), rom.Copy(palOffset, PalEntries * 4));
        }
        catch (InvalidDataException)
        {
            return null;
        }
    }

    private static (int[] Indices, byte[] Pal) Quantize(RgbaImage image)
    {
        var map = new Dictionary<int, byte>();
        var pal = new byte[PalEntries * 4];
        byte next = 1;
        var indices = new int[image.Width * image.Height];
        for (var i = 0; i < indices.Length; i++)
        {
            var o = i * 4;
            var key = image.Pixels[o] << 16 | image.Pixels[o + 1] << 8 | image.Pixels[o + 2];
            if (!map.TryGetValue(key, out var idx))
            {
                if (next <= MaxColors)
                {
                    idx = next++;
                    pal[idx * 4] = image.Pixels[o];
                    pal[idx * 4 + 1] = image.Pixels[o + 1];
                    pal[idx * 4 + 2] = image.Pixels[o + 2];
                    pal[idx * 4 + 3] = 0x80;
                    map[key] = idx;
                }
                else
                {
                    idx = Nearest(pal, next, image.Pixels[o], image.Pixels[o + 1], image.Pixels[o + 2]);
                }
            }

            indices[i] = idx;
        }

        return (indices, pal);
    }

    private static byte Nearest(byte[] pal, int count, byte r, byte g, byte b)
    {
        var best = 1;
        var bestD = int.MaxValue;
        for (var i = 1; i < count; i++)
        {
            var dr = pal[i * 4] - r;
            var dg = pal[i * 4 + 1] - g;
            var db = pal[i * 4 + 2] - b;
            var d = dr * dr + dg * dg + db * db;
            if (d >= bestD)
                continue;
            bestD = d;
            best = i;
        }

        return (byte)best;
    }

    private static byte[] ExtractTile(int[] indices, int width, int tx, int ty)
    {
        var tile = new byte[64];
        for (var y = 0; y < 8; y++)
        {
            for (var x = 0; x < 8; x++)
                tile[y * 8 + x] = (byte)indices[(ty * 8 + y) * width + tx * 8 + x];
        }

        return tile;
    }

    private static (int Index, int Flags) Intern(
        byte[] raw, List<byte[]> tiles, Dictionary<string, (int Index, int Flags)> lookup)
    {
        foreach (var (flipped, flags) in Flips(raw))
        {
            if (lookup.TryGetValue(Key(flipped), out var hit))
                return (hit.Index, flags);
        }

        if (tiles.Count >= MaxTiles)
            return (0, 0);
        var index = tiles.Count;
        tiles.Add(raw);
        lookup[Key(raw)] = (index, 0);
        return (index, 0);
    }

    private static IEnumerable<(byte[] Tile, int Flags)> Flips(byte[] raw)
    {
        yield return (raw, 0);
        yield return (Flip(raw, h: true, v: false), 0x400);
        yield return (Flip(raw, h: false, v: true), 0x800);
        yield return (Flip(raw, h: true, v: true), 0xC00);
    }

    private static byte[] Flip(byte[] raw, bool h, bool v)
    {
        var tile = new byte[64];
        for (var y = 0; y < 8; y++)
        {
            for (var x = 0; x < 8; x++)
            {
                var sx = h ? 7 - x : x;
                var sy = v ? 7 - y : y;
                tile[y * 8 + x] = raw[sy * 8 + sx];
            }
        }

        return tile;
    }

    private static string Key(byte[] tile) => Convert.ToHexString(tile);

    private static void Blit8(
        ReadOnlySpan<byte> tile, RgbaColor[] palette, byte[] pixels, int width, int dx, int dy, bool hFlip, bool vFlip)
    {
        for (var row = 0; row < 8; row++)
        {
            for (var col = 0; col < 8; col++)
            {
                var sx = hFlip ? 7 - col : col;
                var sy = vFlip ? 7 - row : row;
                var color = palette[tile[sy * 8 + sx]];
                var di = ((dy + row) * width + dx + col) * 4;
                pixels[di] = color.R;
                pixels[di + 1] = color.G;
                pixels[di + 2] = color.B;
                pixels[di + 3] = 255;
            }
        }
    }

    private static RgbaImage NearestResize(RgbaImage src, int width, int height)
    {
        var dest = new byte[width * height * 4];
        for (var y = 0; y < height; y++)
        {
            var sy = y * src.Height / height;
            for (var x = 0; x < width; x++)
            {
                var sx = x * src.Width / width;
                var si = (sy * src.Width + sx) * 4;
                var di = (y * width + x) * 4;
                dest[di] = src.Pixels[si];
                dest[di + 1] = src.Pixels[si + 1];
                dest[di + 2] = src.Pixels[si + 2];
                dest[di + 3] = src.Pixels[si + 3];
            }
        }

        return new RgbaImage(width, height, dest);
    }
}
