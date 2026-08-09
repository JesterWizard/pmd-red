using System.IO.Compression;
using System.Buffers.Binary;

namespace RescueEditor.Core;

public sealed class RgbaImage
{
    public RgbaImage(int width, int height, byte[] pixels)
    {
        if (width <= 0 || height <= 0)
            throw new ArgumentOutOfRangeException(nameof(width));
        if (pixels.Length != checked(width * height * 4))
            throw new ArgumentException("RGBA buffer size does not match the image dimensions.", nameof(pixels));

        Width = width;
        Height = height;
        Pixels = pixels;
    }

    public int Width { get; }
    public int Height { get; }
    public byte[] Pixels { get; }

    public byte[] ToPng() => PngCodec.Encode(this);
}

public static class PngCodec
{
    private static readonly byte[] Signature =
    [
        0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A,
    ];

    public static byte[] Encode(RgbaImage image)
    {
        using var output = new MemoryStream();
        output.Write(Signature);

        Span<byte> ihdr = stackalloc byte[13];
        BinaryPrimitives.WriteInt32BigEndian(ihdr, image.Width);
        BinaryPrimitives.WriteInt32BigEndian(ihdr[4..], image.Height);
        ihdr[8] = 8;
        ihdr[9] = 6;
        WriteChunk(output, "IHDR"u8, ihdr);

        var scanlineLength = checked(image.Width * 4);
        var scanlines = new byte[checked((scanlineLength + 1) * image.Height)];
        for (var y = 0; y < image.Height; y++)
        {
            var destination = y * (scanlineLength + 1);
            scanlines[destination] = 0;
            image.Pixels.AsSpan(y * scanlineLength, scanlineLength)
                .CopyTo(scanlines.AsSpan(destination + 1, scanlineLength));
        }

        using var compressed = new MemoryStream();
        using (var zlib = new ZLibStream(compressed, CompressionLevel.SmallestSize, leaveOpen: true))
            zlib.Write(scanlines);
        WriteChunk(output, "IDAT"u8, compressed.ToArray());
        WriteChunk(output, "IEND"u8, ReadOnlySpan<byte>.Empty);
        return output.ToArray();
    }

    private static void WriteChunk(Stream destination, ReadOnlySpan<byte> type, ReadOnlySpan<byte> data)
    {
        Span<byte> length = stackalloc byte[4];
        BinaryPrimitives.WriteInt32BigEndian(length, data.Length);
        destination.Write(length);
        destination.Write(type);
        destination.Write(data);

        var crc = new Crc32();
        crc.Append(type);
        crc.Append(data);
        Span<byte> crcBytes = stackalloc byte[4];
        BinaryPrimitives.WriteUInt32BigEndian(crcBytes, crc.GetCurrentHashAsUInt32());
        destination.Write(crcBytes);
    }

    private sealed class Crc32
    {
        private uint _value = 0xFFFFFFFF;

        public void Append(ReadOnlySpan<byte> data)
        {
            foreach (var value in data)
            {
                _value ^= value;
                for (var bit = 0; bit < 8; bit++)
                    _value = (_value >> 1) ^ (0xEDB88320u & (uint)-(int)(_value & 1));
            }
        }

        public uint GetCurrentHashAsUInt32() => ~_value;
    }
}
