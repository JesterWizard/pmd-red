namespace RescueEditor.Core;

/// <summary>40×40 KAO face ↔ 4bpp tiles + RGBX palette + AT4PX.</summary>
public static class PortraitFaceCodec
{
    public const int TileBytes = 0x320;
    public const int PaletteColors = 16;
    public const int PaletteBytes = PaletteColors * 4;
    public const int MaxOpaqueColors = 15;

    public readonly record struct EncodedFace(byte[] Graphics, byte[] Palette);

    public static string RestrictionsText =>
        $"PNG, {PortraitSheetPresentation.FaceSize}×{PortraitSheetPresentation.FaceSize}, " +
        $"at most {PaletteColors} colors (index 0 is transparent).";

    public static string? Validate(RgbaImage image)
    {
        if (image.Width != PortraitSheetPresentation.FaceSize ||
            image.Height != PortraitSheetPresentation.FaceSize)
        {
            return $"Portrait faces must be {PortraitSheetPresentation.FaceSize}×" +
                   $"{PortraitSheetPresentation.FaceSize} (got {image.Width}×{image.Height}).";
        }

        return null;
    }

    public static EncodedFace Encode(RgbaImage image, bool forcePrefix)
    {
        var rejected = Validate(image);
        if (rejected is not null)
            throw new ArgumentException(rejected, nameof(image));

        var (indices, palette) = Quantize(image);
        var tiles = PackTiles(indices, image.Width);
        var at4px = Compression.CompressAt4px(tiles);
        var graphics = forcePrefix ? at4px[5..] : at4px;
        return new EncodedFace(graphics, palette);
    }

    public static RgbaImage Decode(ReadOnlySpan<byte> graphics, ReadOnlySpan<byte> paletteRgbx, bool forcePrefix)
    {
        byte[] packed = forcePrefix || !graphics.StartsWith("AT4P"u8)
            ? [.. "AT4PX"u8, .. graphics]
            : graphics.ToArray();
        var decoded = Compression.DecompressAt(packed);
        if (decoded.Length < TileBytes)
            throw new InvalidDataException($"Portrait data is only 0x{decoded.Length:X} bytes.");

        var palette = new RgbaColor[Math.Max(PaletteColors, paletteRgbx.Length / 4)];
        for (var i = 0; i < paletteRgbx.Length / 4 && i < palette.Length; i++)
        {
            palette[i] = new RgbaColor(
                paletteRgbx[i * 4],
                paletteRgbx[i * 4 + 1],
                paletteRgbx[i * 4 + 2],
                i == 0 ? (byte)0 : (byte)255);
        }

        var pixels = new byte[PortraitSheetPresentation.FaceSize * PortraitSheetPresentation.FaceSize * 4];
        for (var tileY = 0; tileY < 5; tileY++)
        for (var tileX = 0; tileX < 5; tileX++)
        {
            var tileOffset = (tileY * 5 + tileX) * 32;
            Blit4BppTile(decoded.AsSpan(tileOffset, 32), palette, pixels,
                PortraitSheetPresentation.FaceSize, tileX * 8, tileY * 8);
        }

        return new RgbaImage(PortraitSheetPresentation.FaceSize, PortraitSheetPresentation.FaceSize, pixels);
    }

    public static RgbaImage Decode(RomImage rom, AssetDescriptor asset)
    {
        var graphics = rom.Copy(asset.Offset, asset.Size);
        var forcePrefix = asset.Metadata.TryGetValue("forcePrefix", out var flag) &&
                          string.Equals(flag, "true", StringComparison.OrdinalIgnoreCase);
        var palette = rom.Copy(asset.AuxiliaryOffset, asset.AuxiliarySize);
        return Decode(graphics, palette, forcePrefix);
    }

    public static string? TryWrite(MutableRom rom, AssetDescriptor face, RgbaImage image)
    {
        var rejected = Validate(image);
        if (rejected is not null)
            return rejected;

        var forcePrefix = face.Metadata.TryGetValue("forcePrefix", out var flag) &&
                          string.Equals(flag, "true", StringComparison.OrdinalIgnoreCase);
        EncodedFace encoded;
        try
        {
            encoded = Encode(image, forcePrefix);
        }
        catch (Exception ex)
        {
            return ex.Message;
        }

        if (encoded.Graphics.Length > face.Size)
        {
            return $"Compressed face is {encoded.Graphics.Length} bytes; " +
                   $"ROM slot is {face.Size} bytes. Use a simpler 16-color 40×40 PNG.";
        }

        if (encoded.Palette.Length > face.AuxiliarySize)
        {
            return $"Palette is {encoded.Palette.Length} bytes; slot is {face.AuxiliarySize}.";
        }

        if (!rom.IsRangeValid(face.Offset, encoded.Graphics.Length) ||
            !rom.IsRangeValid(face.AuxiliaryOffset, encoded.Palette.Length))
        {
            return "Portrait offsets are outside the ROM.";
        }

        rom.Fill(face.Offset, face.Size, 0);
        rom.WriteBytes(face.Offset, encoded.Graphics);
        rom.Fill(face.AuxiliaryOffset, face.AuxiliarySize, 0);
        rom.WriteBytes(face.AuxiliaryOffset, encoded.Palette);
        return null;
    }

    private static (byte[] Indices, byte[] Palette) Quantize(RgbaImage image)
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

    private static byte[] PackTiles(byte[] indices, int width)
    {
        var tiles = new byte[TileBytes];
        for (var tileY = 0; tileY < 5; tileY++)
        for (var tileX = 0; tileX < 5; tileX++)
        {
            var dest = (tileY * 5 + tileX) * 32;
            for (var row = 0; row < 8; row++)
            for (var pair = 0; pair < 4; pair++)
            {
                var x = tileX * 8 + pair * 2;
                var y = tileY * 8 + row;
                var lo = indices[y * width + x];
                var hi = indices[y * width + x + 1];
                tiles[dest + row * 4 + pair] = (byte)((lo & 0xF) | ((hi & 0xF) << 4));
            }
        }

        return tiles;
    }

    private static void Blit4BppTile(
        ReadOnlySpan<byte> tile,
        ReadOnlySpan<RgbaColor> palette,
        byte[] pixels,
        int width,
        int destinationX,
        int destinationY)
    {
        for (var row = 0; row < 8; row++)
        for (var pair = 0; pair < 4; pair++)
        {
            var packed = tile[row * 4 + pair];
            WriteIndexed(pixels, width, destinationX + pair * 2, destinationY + row, packed & 0xF, palette);
            WriteIndexed(pixels, width, destinationX + pair * 2 + 1, destinationY + row, packed >> 4, palette);
        }
    }

    private static void WriteIndexed(
        byte[] pixels, int width, int x, int y, int index, ReadOnlySpan<RgbaColor> palette)
    {
        if ((uint)index >= (uint)palette.Length)
            return;
        var color = palette[index];
        var offset = (y * width + x) * 4;
        pixels[offset] = color.R;
        pixels[offset + 1] = color.G;
        pixels[offset + 2] = color.B;
        pixels[offset + 3] = color.A == 0 ? (byte)0 : (byte)255;
    }
}
