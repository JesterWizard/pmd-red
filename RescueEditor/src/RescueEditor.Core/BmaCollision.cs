using System.Buffers.Binary;

namespace RescueEditor.Core;

/// <summary>Tile collision for ground maps (true = solid / blocked).</summary>
public sealed class GroundCollisionMap
{
    public GroundCollisionMap(int widthTiles, int heightTiles, bool[] solid)
    {
        if (widthTiles <= 0 || heightTiles <= 0)
            throw new ArgumentOutOfRangeException(nameof(widthTiles));
        if (solid.Length != widthTiles * heightTiles)
            throw new ArgumentException("Solid buffer length must equal width×height.", nameof(solid));
        WidthTiles = widthTiles;
        HeightTiles = heightTiles;
        _solid = solid;
    }

    public int WidthTiles { get; }
    public int HeightTiles { get; }
    private readonly bool[] _solid;

    public bool IsSolidTile(int tileX, int tileY)
    {
        if (tileX < 0 || tileY < 0 || tileX >= WidthTiles || tileY >= HeightTiles)
            return true;
        return _solid[tileY * WidthTiles + tileX];
    }

    /// <summary>Sample the tile under a pixel (top-left of an 8×8 cell).</summary>
    public bool IsSolidPixel(double pixelX, double pixelY) =>
        IsSolidTile((int)Math.Floor(pixelX / 8.0), (int)Math.Floor(pixelY / 8.0));
}

/// <summary>BMA collision RLE (+ row XOR) matching SkyTemple / game layout.</summary>
public static class BmaCollisionDecoder
{
    public static GroundCollisionMap? TryDecode(ReadOnlySpan<byte> bma)
    {
        if (bma.Length < 12)
            return null;

        var width = bma[0];
        var height = bma[1];
        var widthChunks = bma[4];
        var heightChunks = bma[5];
        var layers = Math.Clamp((int)bma[6], 0, 2);
        var hasDataLayer = BinaryPrimitives.ReadInt16LittleEndian(bma[8..]);
        var hasCollision = BinaryPrimitives.ReadInt16LittleEndian(bma[10..]);
        if (width <= 0 || height <= 0 || hasCollision <= 0)
            return null;

        var index = 12;
        // Skip visual layers (same NRL walk as GroundMapRenderer).
        for (var layer = 0; layer < Math.Max(1, layers); layer++)
            index += ConsumeBmaLayer(bma[index..], widthChunks, heightChunks);

        if (hasDataLayer > 0)
            index += ConsumeGenericNrl(bma[index..], width * height);

        if (index >= bma.Length)
            return null;

        var tiles = DecodeCollisionLayer(bma[index..], width, height, out _);
        return new GroundCollisionMap(width, height, tiles);
    }

    public static bool[] DecodeCollisionLayer(
        ReadOnlySpan<byte> source,
        int width,
        int height,
        out int bytesConsumed)
    {
        var needed = width * height;
        var raw = new byte[needed];
        var cursor = 0;
        var written = 0;
        while (cursor < source.Length && written < needed)
        {
            var cmd = source[cursor++];
            var value = (byte)(cmd >> 7);
            var count = (cmd & 0x7F) + 1;
            for (var i = 0; i < count && written < needed; i++)
                raw[written++] = value;
        }

        if (written != needed)
            throw new InvalidDataException(
                $"BMA collision RLE produced {written} tiles, expected {needed}.");

        bytesConsumed = cursor;
        var previous = new bool[width];
        var result = new bool[needed];
        for (var i = 0; i < needed; i++)
        {
            var col = i % width;
            var value = (raw[i] != 0) ^ previous[col];
            previous[col] = value;
            result[i] = value;
        }
        return result;
    }

    private static int ConsumeBmaLayer(ReadOnlySpan<byte> source, int widthChunks, int heightChunks)
    {
        var index = 0;
        for (var row = 0; row < heightChunks; row++)
        {
            var column = 0;
            while (column < widthChunks)
            {
                if (index >= source.Length)
                    throw new InvalidDataException("BMA layer data is truncated.");
                var command = source[index++];
                if (command >= 0xC0)
                {
                    var pairCount = command - 0xBF;
                    for (var pair = 0; pair < pairCount && column < widthChunks; pair++)
                    {
                        if (index + 3 > source.Length)
                            throw new InvalidDataException("BMA chunk command is truncated.");
                        index += 3;
                        column += 2;
                    }
                }
                else if (command >= 0x80)
                {
                    var pairCount = command - 0x7F;
                    if (index + 3 > source.Length)
                        throw new InvalidDataException("BMA chunk command is truncated.");
                    index += 3;
                    column += pairCount * 2;
                }
                else
                {
                    var pairCount = command + 1;
                    column += pairCount * 2;
                }
            }
        }
        return index;
    }

    private static int ConsumeGenericNrl(ReadOnlySpan<byte> source, int stopWhenSize)
    {
        const int cmdZeroOut = 0x80;
        const int cmdFillOut = 0x80;
        const int cmdCopyBytes = 0xC0;
        var cursor = 0;
        var written = 0;
        while (cursor < source.Length && written < stopWhenSize)
        {
            var cmd = source[cursor++];
            if (cmd < cmdZeroOut)
            {
                written += cmd + 1;
            }
            else if (cmd < cmdCopyBytes)
            {
                if (cursor >= source.Length)
                    throw new InvalidDataException("Generic NRL truncated (fill).");
                cursor++;
                written += cmd - (cmdFillOut - 1);
            }
            else
            {
                var count = cmd - (cmdCopyBytes - 1);
                cursor += count;
                written += count;
            }
        }
        if (written < stopWhenSize)
            throw new InvalidDataException("Generic NRL ended before expected size.");
        return cursor;
    }
}
