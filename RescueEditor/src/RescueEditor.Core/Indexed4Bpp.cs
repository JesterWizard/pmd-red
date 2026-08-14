namespace RescueEditor.Core;

/// <summary>Shared 16-color 4bpp tile pack used by AX sprites and efob sheets.</summary>
public static class Indexed4Bpp
{
    public const int TilePx = 8;
    public const int TileBytes = 32;
    public const int PaletteColors = 16;
    public const int PaletteBytes = PaletteColors * 4;
    public const int MaxOpaqueColors = 15;

    public static int CountOpaqueColors(RgbaImage image)
    {
        var set = new HashSet<int>();
        var px = image.Pixels;
        for (var i = 0; i < px.Length; i += 4)
        {
            if (px[i + 3] < 8)
                continue;
            set.Add(px[i] << 16 | px[i + 1] << 8 | px[i + 2]);
        }

        return set.Count;
    }

    public static string? ValidateTileImage(RgbaImage image, int? requiredTiles = null)
    {
        if (image.Width % TilePx != 0 || image.Height % TilePx != 0)
        {
            return $"Width and height must be multiples of {TilePx} (got {image.Width}×{image.Height}).";
        }

        var colors = CountOpaqueColors(image);
        if (colors > MaxOpaqueColors)
        {
            return $"Image has {colors} unique colors; 4bpp sprites allow at most {PaletteColors} " +
                   $"(index 0 is transparent).";
        }

        if (requiredTiles is int tiles)
        {
            var got = TileCount(image.Width, image.Height);
            if (got != tiles)
                return $"Sheet has {got} tiles; the existing asset has {tiles}.";
        }

        return null;
    }

    public static int TileCount(int width, int height) =>
        width / TilePx * (height / TilePx);

    public static EncodedSheet Encode(RgbaImage image)
    {
        var rejected = ValidateTileImage(image);
        if (rejected is not null)
            throw new ArgumentException(rejected, nameof(image));

        var (indices, palette) = Quantize(image);
        var tiles = PackSheet(indices, image.Width, image.Height);
        return new EncodedSheet(indices, palette, tiles);
    }

    public readonly record struct EncodedSheet(byte[] Indices, byte[] PaletteRgbx, byte[] Tiles);

    public static (byte[] Indices, byte[] Palette) Quantize(RgbaImage image)
    {
        var map = new Dictionary<int, byte>();
        var pal = new byte[PaletteBytes];
        byte next = 1;
        var indices = new byte[image.Width * image.Height];
        for (var i = 0; i < indices.Length; i++)
        {
            var o = i * 4;
            if (image.Pixels[o + 3] < 8)
            {
                indices[i] = 0;
                continue;
            }

            var key = image.Pixels[o] << 16 | image.Pixels[o + 1] << 8 | image.Pixels[o + 2];
            if (!map.TryGetValue(key, out var idx))
            {
                if (next <= MaxOpaqueColors)
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

    public static byte[] PackSheet(byte[] indices, int width, int height)
    {
        var tilesX = width / TilePx;
        var tilesY = height / TilePx;
        var tiles = new byte[tilesX * tilesY * TileBytes];
        for (var tileY = 0; tileY < tilesY; tileY++)
        for (var tileX = 0; tileX < tilesX; tileX++)
        {
            var dest = (tileY * tilesX + tileX) * TileBytes;
            for (var row = 0; row < TilePx; row++)
            for (var pair = 0; pair < 4; pair++)
            {
                var x = tileX * TilePx + pair * 2;
                var y = tileY * TilePx + row;
                var lo = indices[y * width + x];
                var hi = indices[y * width + x + 1];
                tiles[dest + row * 4 + pair] = (byte)((lo & 0xF) | ((hi & 0xF) << 4));
            }
        }

        return tiles;
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
}
