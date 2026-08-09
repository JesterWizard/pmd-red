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

    public static RgbaImage? FromPng(byte[] png) => PngCodec.TryDecode(png);
}

public static class PngCodec
{
    private static readonly byte[] Signature =
    [
        0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A,
    ];

    public static RgbaImage? TryDecode(byte[] png)
    {
        if (png.Length < 8 || !png.AsSpan(0, 8).SequenceEqual(Signature))
            return null;

        var offset = 8;
        int width = 0, height = 0;
        byte[]? idat = null;
        while (offset + 8 <= png.Length)
        {
            var length = BinaryPrimitives.ReadInt32BigEndian(png.AsSpan(offset));
            var type = System.Text.Encoding.ASCII.GetString(png, offset + 4, 4);
            offset += 8;
            if (length < 0 || offset + length + 4 > png.Length)
                return null;
            var data = png.AsSpan(offset, length);
            if (type == "IHDR" && length >= 13)
            {
                width = BinaryPrimitives.ReadInt32BigEndian(data);
                height = BinaryPrimitives.ReadInt32BigEndian(data[4..]);
                if (data[8] != 8 || data[9] != 6)
                    return null;
            }
            else if (type == "IDAT")
            {
                if (idat is null)
                    idat = data.ToArray();
                else
                {
                    var merged = new byte[idat.Length + data.Length];
                    idat.CopyTo(merged, 0);
                    data.CopyTo(merged.AsSpan(idat.Length));
                    idat = merged;
                }
            }
            else if (type == "IEND")
                break;
            offset += length + 4;
        }

        if (width <= 0 || height <= 0 || idat is null)
            return null;

        using var input = new MemoryStream(idat);
        using var zlib = new ZLibStream(input, CompressionMode.Decompress);
        using var raw = new MemoryStream();
        zlib.CopyTo(raw);
        var scanlines = raw.ToArray();
        var stride = width * 4;
        var expected = (stride + 1) * height;
        if (scanlines.Length < expected)
            return null;
        var pixels = new byte[stride * height];
        for (var y = 0; y < height; y++)
        {
            var src = y * (stride + 1);
            if (scanlines[src] != 0)
                return null; // only filter-none written by Encode
            scanlines.AsSpan(src + 1, stride).CopyTo(pixels.AsSpan(y * stride, stride));
        }
        return new RgbaImage(width, height, pixels);
    }

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
