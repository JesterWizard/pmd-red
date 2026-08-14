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

    public bool SetSolidTile(int tileX, int tileY, bool solid)
    {
        if (tileX < 0 || tileY < 0 || tileX >= WidthTiles || tileY >= HeightTiles)
            return false;
        _solid[tileY * WidthTiles + tileX] = solid;
        return true;
    }

    public bool ToggleTile(int tileX, int tileY)
    {
        if (tileX < 0 || tileY < 0 || tileX >= WidthTiles || tileY >= HeightTiles)
            return false;
        var next = !_solid[tileY * WidthTiles + tileX];
        _solid[tileY * WidthTiles + tileX] = next;
        return next;
    }

    public GroundCollisionMap Clone() =>
        new(WidthTiles, HeightTiles, (bool[])_solid.Clone());

    public bool[] CopySolid() => (bool[])_solid.Clone();

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

        var hasCollision = BinaryPrimitives.ReadInt16LittleEndian(bma[10..]);
        if (hasCollision <= 0)
            return null;
        if (!TryLocateCollision(bma, out var index, out var width, out var height))
            return null;

        var tiles = DecodeCollisionLayer(bma[index..], width, height, out _);
        return new GroundCollisionMap(width, height, tiles);
    }

    public static bool TryLocateCollision(
        ReadOnlySpan<byte> bma, out int offset, out int width, out int height)
    {
        offset = 0;
        width = 0;
        height = 0;
        if (bma.Length < 12)
            return false;

        width = bma[0];
        height = bma[1];
        var widthChunks = bma[4];
        var heightChunks = bma[5];
        var layers = Math.Clamp((int)bma[6], 0, 2);
        var hasDataLayer = BinaryPrimitives.ReadInt16LittleEndian(bma[8..]);
        if (width <= 0 || height <= 0)
            return false;

        var index = 12;
        for (var layer = 0; layer < Math.Max(1, layers); layer++)
            index += ConsumeBmaLayer(bma[index..], widthChunks, heightChunks);

        if (hasDataLayer > 0)
            index += ConsumeGenericNrl(bma[index..], width * height);

        if (index > bma.Length)
            return false;
        offset = index;
        return true;
    }

    public static GroundCollisionMap? TryLoad(RomImage rom, Scene scene)
    {
        if (!string.IsNullOrWhiteSpace(scene.Map?.BmaName))
        {
            var byName = GroundMapCodec.TryLoadCollision(rom, scene.Map.BmaName);
            if (byName is not null)
                return byName;
        }

        var asset = scene.Map?.GroundMapAsset;
        if (asset is null)
            return null;
        try
        {
            var bma = Compression.DecompressGmlz(rom.Copy(asset.Offset, asset.Size));
            return TryDecode(bma);
        }
        catch
        {
            return null;
        }
    }

    public static GroundCollisionMap? TryLoadOrEmpty(RomImage rom, Scene scene)
    {
        var loaded = TryLoad(rom, scene);
        if (loaded is not null)
            return loaded;
        if (string.IsNullOrWhiteSpace(scene.Map?.BmaName))
            return null;
        return GroundMapCodec.TryLoadCollisionOrEmpty(rom, scene.Map.BmaName);
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

/// <summary>Inverse of <see cref="BmaCollisionDecoder"/> collision RLE (+ row XOR).</summary>
public static class BmaCollisionEncoder
{
    public static byte[] EncodeLayer(bool[] solid, int width, int height)
    {
        if (width <= 0 || height <= 0)
            throw new ArgumentOutOfRangeException(nameof(width));
        if (solid.Length != width * height)
            throw new ArgumentException("Solid buffer length must equal width×height.", nameof(solid));

        var raw = new byte[solid.Length];
        var previous = new bool[width];
        for (var i = 0; i < solid.Length; i++)
        {
            var col = i % width;
            raw[i] = (byte)((solid[i] ^ previous[col]) ? 1 : 0);
            previous[col] = solid[i];
        }

        var output = new List<byte>();
        var cursor = 0;
        while (cursor < raw.Length)
        {
            var value = raw[cursor];
            var count = 1;
            while (cursor + count < raw.Length && raw[cursor + count] == value && count < 128)
                count++;
            output.Add((byte)((value << 7) | (count - 1)));
            cursor += count;
        }

        return output.ToArray();
    }

    public static byte[] ReplaceCollision(ReadOnlySpan<byte> bma, GroundCollisionMap collision)
    {
        if (!BmaCollisionDecoder.TryLocateCollision(bma, out var offset, out var width, out var height))
            throw new InvalidDataException("BMA has no collision payload to replace.");
        if (collision.WidthTiles != width || collision.HeightTiles != height)
        {
            throw new ArgumentException(
                $"Collision is {collision.WidthTiles}×{collision.HeightTiles}, BMA is {width}×{height}.",
                nameof(collision));
        }

        var encoded = EncodeLayer(collision.CopySolid(), width, height);
        var result = new byte[offset + encoded.Length];
        bma[..offset].CopyTo(result);
        encoded.CopyTo(result, offset);
        BinaryPrimitives.WriteInt16LittleEndian(result.AsSpan(10), 1);
        return result;
    }
}
