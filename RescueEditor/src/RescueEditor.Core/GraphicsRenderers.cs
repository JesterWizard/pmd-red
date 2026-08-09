using System.Buffers.Binary;

namespace RescueEditor.Core;

public static class GraphicsRenderers
{
    public static PreviewContent RenderPortrait(RomImage rom, AssetDescriptor asset)
    {
        var graphics = rom.Copy(asset.Offset, asset.Size);
        if (asset.Metadata.TryGetValue("forcePrefix", out var forcePrefix) &&
            string.Equals(forcePrefix, "true", StringComparison.OrdinalIgnoreCase) ||
            !graphics.AsSpan().StartsWith("AT4P"u8))
        {
            graphics = [.. "AT4PX"u8, .. graphics];
        }

        var decoded = Compression.DecompressAt(graphics);
        if (decoded.Length < 0x320)
            throw new InvalidDataException($"Portrait data is only 0x{decoded.Length:X} bytes.");

        var palette = ReadRgbPalette(rom, asset.AuxiliaryOffset, asset.AuxiliarySize, transparentFirst: true);
        var pixels = new byte[40 * 40 * 4];
        for (var tileY = 0; tileY < 5; tileY++)
        {
            for (var tileX = 0; tileX < 5; tileX++)
            {
                var tileOffset = (tileY * 5 + tileX) * 32;
                Blit4BppTile(decoded.AsSpan(tileOffset, 32), palette, pixels, 40,
                    tileX * 8, tileY * 8);
            }
        }

        return new PreviewContent(asset.Name, Png: new RgbaImage(40, 40, pixels).ToPng(),
            MimeType: "image/png");
    }

    public static PreviewContent RenderTitleBackground(RomImage rom, AssetDescriptor asset)
    {
        var graphics = rom.Copy(asset.Offset, asset.Size);
        if (asset.Metadata.TryGetValue("forcePrefix", out var forcePrefix) &&
            string.Equals(forcePrefix, "true", StringComparison.OrdinalIgnoreCase) ||
            !graphics.AsSpan().StartsWith("AT4P"u8))
        {
            graphics = [.. "AT4PX"u8, .. graphics];
        }

        var decoded = Compression.DecompressAt(graphics);
        if (decoded.Length < 4096)
            throw new InvalidDataException($"Title background data is only 0x{decoded.Length:X} bytes.");

        var palette = ReadRgbPalette(rom, asset.AuxiliaryOffset, asset.AuxiliarySize, transparentFirst: false);
        if (palette.Length < 256)
            palette = palette.Concat(Enumerable.Repeat(new RgbaColor(0, 0, 0, 255), 256 - palette.Length)).ToArray();

        var tilemap = new ushort[2048];
        for (var i = 0; i < tilemap.Length; i++)
            tilemap[i] = BinaryPrimitives.ReadUInt16LittleEndian(decoded.AsSpan(i * 2));

        var full = new byte[256 * 256 * 4];
        for (var i = 0; i < 256 * 256; i++)
        {
            var color = palette[0];
            WritePixel(full, 256, i % 256, i / 256, color);
        }

        // BG3 is drawn first and BG2 is drawn over it, matching the game's
        // tilemap priority for the title screen.
        RenderTileLayer(decoded[4096..], tilemap, 1024, palette, full, 256, skipTransparent: false);
        RenderTileLayer(decoded[4096..], tilemap, 0, palette, full, 256, skipTransparent: true);

        var cropped = new byte[240 * 160 * 4];
        for (var y = 0; y < 160; y++)
            full.AsSpan(y * 256 * 4, 240 * 4).CopyTo(cropped.AsSpan(y * 240 * 4, 240 * 4));

        return new PreviewContent(asset.Name, Png: new RgbaImage(240, 160, cropped).ToPng(),
            MimeType: "image/png");
    }

    public static RgbaImage Render4BppSheet(
        ReadOnlySpan<byte> tileData,
        ReadOnlySpan<RgbaColor> palette,
        int tileCount,
        int columns = 16,
        bool objectPalette = false)
    {
        tileCount = Math.Max(1, Math.Min(tileCount, tileData.Length / 32));
        columns = Math.Max(1, Math.Min(columns, tileCount));
        var rows = (tileCount + columns - 1) / columns;
        var pixels = new byte[columns * 8 * rows * 8 * 4];
        for (var tile = 0; tile < tileCount; tile++)
        {
            var x = tile % columns * 8;
            var y = tile / columns * 8;
            Blit4BppTile(tileData.Slice(tile * 32, 32), palette, pixels, columns * 8,
                x, y, objectPalette);
        }

        return new RgbaImage(columns * 8, rows * 8, pixels);
    }

    public static RgbaColor[] ReadRgbPalette(
        RomImage rom,
        int offset,
        int size,
        bool transparentFirst)
    {
        if (!rom.IsRangeValid(offset, size) || size < 4)
            throw new InvalidDataException("Palette range is outside the ROM.");

        var colors = new RgbaColor[size / 4];
        for (var i = 0; i < colors.Length; i++)
        {
            var source = offset + i * 4;
            colors[i] = new RgbaColor(
                rom.ReadByte(source),
                rom.ReadByte(source + 1),
                rom.ReadByte(source + 2),
                transparentFirst && i == 0 ? (byte)0 : (byte)255);
        }

        return colors;
    }

    private static void RenderTileLayer(
        ReadOnlySpan<byte> tiles,
        ReadOnlySpan<ushort> tilemap,
        int tilemapOffset,
        ReadOnlySpan<RgbaColor> palette,
        byte[] pixels,
        int width,
        bool skipTransparent)
    {
        for (var tileY = 0; tileY < 32; tileY++)
        {
            for (var tileX = 0; tileX < 32; tileX++)
            {
                var entry = tilemap[tilemapOffset + tileY * 32 + tileX];
                var tileIndex = entry & 0x3FF;
                var hFlip = (entry & 0x400) != 0;
                var vFlip = (entry & 0x800) != 0;
                var paletteBank = (entry >> 12) & 0xF;
                var tileOffset = tileIndex * 32;
                if (tileOffset + 32 > tiles.Length)
                    continue;

                for (var row = 0; row < 8; row++)
                {
                    for (var column = 0; column < 8; column++)
                    {
                        var sourceX = hFlip ? 7 - column : column;
                        var sourceY = vFlip ? 7 - row : row;
                        var packed = tiles[tileOffset + sourceY * 4 + sourceX / 2];
                        var index = (sourceX & 1) == 0 ? packed & 0xF : packed >> 4;
                        var paletteIndex = paletteBank * 16 + index;
                        if (paletteIndex >= palette.Length || (skipTransparent && index == 0))
                            continue;
                        WritePixel(pixels, width, tileX * 8 + column, tileY * 8 + row,
                            palette[paletteIndex]);
                    }
                }
            }
        }
    }

    private static void Blit4BppTile(
        ReadOnlySpan<byte> tile,
        ReadOnlySpan<RgbaColor> palette,
        byte[] pixels,
        int width,
        int destinationX,
        int destinationY,
        bool objectPalette = false)
    {
        for (var row = 0; row < 8; row++)
        {
            for (var pair = 0; pair < 4; pair++)
            {
                var packed = tile[row * 4 + pair];
                WriteIndexedPixel(pixels, width, destinationX + pair * 2, destinationY + row,
                    packed & 0xF, palette, objectPalette);
                WriteIndexedPixel(pixels, width, destinationX + pair * 2 + 1, destinationY + row,
                    packed >> 4, palette, objectPalette);
            }
        }
    }

    private static void WriteIndexedPixel(
        byte[] pixels,
        int width,
        int x,
        int y,
        int index,
        ReadOnlySpan<RgbaColor> palette,
        bool objectPalette)
    {
        if (index >= palette.Length)
            return;
        var colorIndex = objectPalette ? index : index;
        WritePixel(pixels, width, x, y, palette[colorIndex]);
    }

    private static void WritePixel(byte[] pixels, int width, int x, int y, RgbaColor color)
    {
        var offset = (y * width + x) * 4;
        pixels[offset] = color.R;
        pixels[offset + 1] = color.G;
        pixels[offset + 2] = color.B;
        pixels[offset + 3] = color.A;
    }
}

public readonly record struct RgbaColor(byte R, byte G, byte B, byte A);
