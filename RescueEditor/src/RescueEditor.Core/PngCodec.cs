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

    public RgbaImage ScaleToFit(int maxWidth, int maxHeight)
    {
        if (maxWidth <= 0 || maxHeight <= 0)
            throw new ArgumentOutOfRangeException(nameof(maxWidth));
        if (Width <= maxWidth && Height <= maxHeight)
            return this;
        var scale = Math.Min(maxWidth / (double)Width, maxHeight / (double)Height);
        var width = Math.Max(1, (int)Math.Round(Width * scale));
        var height = Math.Max(1, (int)Math.Round(Height * scale));
        return NearestResize(width, height);
    }

    public RgbaImage NearestResize(int width, int height)
    {
        if (width <= 0 || height <= 0)
            throw new ArgumentOutOfRangeException(nameof(width));
        var dest = new byte[width * height * 4];
        for (var y = 0; y < height; y++)
        {
            var sy = y * Height / height;
            for (var x = 0; x < width; x++)
            {
                var sx = x * Width / width;
                var si = (sy * Width + sx) * 4;
                var di = (y * width + x) * 4;
                dest[di] = Pixels[si];
                dest[di + 1] = Pixels[si + 1];
                dest[di + 2] = Pixels[si + 2];
                dest[di + 3] = Pixels[si + 3];
            }
        }

        return new RgbaImage(width, height, dest);
    }
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
        byte bitDepth = 0, colorType = 0;
        byte[]? idat = null;
        byte[]? palette = null; // RGB triples
        byte[]? transparency = null; // per-index alpha for indexed
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
                bitDepth = data[8];
                colorType = data[9];
            }
            else if (type == "PLTE")
            {
                palette = data.ToArray();
            }
            else if (type == "tRNS")
            {
                transparency = data.ToArray();
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

        if (colorType == 6 && bitDepth == 8)
            return DecodeRgba8(width, height, scanlines);
        if (colorType == 3 && bitDepth is 4 or 8 && palette is not null)
            return DecodeIndexed(width, height, bitDepth, scanlines, palette, transparency);
        return null;
    }

    private static RgbaImage? DecodeRgba8(int width, int height, byte[] scanlines)
    {
        var stride = width * 4;
        var reconstructed = Unfilter(scanlines, height, stride, bytesPerPixel: 4);
        if (reconstructed is null)
            return null;
        return new RgbaImage(width, height, reconstructed);
    }

    private static RgbaImage? DecodeIndexed(
        int width, int height, byte bitDepth, byte[] scanlines, byte[] palette, byte[]? transparency)
    {
        var samplesPerByte = 8 / bitDepth;
        var rowBytes = (width * bitDepth + 7) / 8;
        var reconstructed = Unfilter(scanlines, height, rowBytes, bytesPerPixel: 1);
        if (reconstructed is null)
            return null;

        var pixels = new byte[width * height * 4];
        var mask = (1 << bitDepth) - 1;
        for (var y = 0; y < height; y++)
        {
            for (var x = 0; x < width; x++)
            {
                int index;
                if (bitDepth == 8)
                {
                    index = reconstructed[y * rowBytes + x];
                }
                else
                {
                    var byteIndex = y * rowBytes + x / samplesPerByte;
                    var shift = (samplesPerByte - 1 - x % samplesPerByte) * bitDepth;
                    index = (reconstructed[byteIndex] >> shift) & mask;
                }

                var palOffset = index * 3;
                if (palOffset + 2 >= palette.Length)
                    return null;
                var dst = (y * width + x) * 4;
                pixels[dst] = palette[palOffset];
                pixels[dst + 1] = palette[palOffset + 1];
                pixels[dst + 2] = palette[palOffset + 2];
                pixels[dst + 3] = transparency is not null && index < transparency.Length
                    ? transparency[index]
                    : index == 0 ? (byte)0 : (byte)255;
            }
        }
        return new RgbaImage(width, height, pixels);
    }

    private static byte[]? Unfilter(byte[] scanlines, int height, int stride, int bytesPerPixel)
    {
        var expected = (stride + 1) * height;
        if (scanlines.Length < expected || stride <= 0 || bytesPerPixel <= 0)
            return null;

        var output = new byte[stride * height];
        var prior = new byte[stride];
        for (var y = 0; y < height; y++)
        {
            var src = y * (stride + 1);
            var filter = scanlines[src];
            var row = scanlines.AsSpan(src + 1, stride);
            var dest = output.AsSpan(y * stride, stride);
            switch (filter)
            {
                case 0: // None
                    row.CopyTo(dest);
                    break;
                case 1: // Sub — left sample is bytesPerPixel behind (not 1)
                    for (var i = 0; i < stride; i++)
                    {
                        var left = i >= bytesPerPixel ? dest[i - bytesPerPixel] : (byte)0;
                        dest[i] = (byte)(row[i] + left);
                    }
                    break;
                case 2: // Up
                    for (var i = 0; i < stride; i++)
                        dest[i] = (byte)(row[i] + prior[i]);
                    break;
                case 3: // Average
                    for (var i = 0; i < stride; i++)
                    {
                        var left = i >= bytesPerPixel ? dest[i - bytesPerPixel] : (byte)0;
                        dest[i] = (byte)(row[i] + ((left + prior[i]) >> 1));
                    }
                    break;
                case 4: // Paeth
                    for (var i = 0; i < stride; i++)
                    {
                        var left = i >= bytesPerPixel ? dest[i - bytesPerPixel] : (byte)0;
                        var up = prior[i];
                        var upLeft = i >= bytesPerPixel ? prior[i - bytesPerPixel] : (byte)0;
                        dest[i] = (byte)(row[i] + PaethPredictor(left, up, upLeft));
                    }
                    break;
                default:
                    return null;
            }
            dest.CopyTo(prior);
        }
        return output;
    }

    private static byte PaethPredictor(byte a, byte b, byte c)
    {
        var p = a + b - c;
        var pa = Math.Abs(p - a);
        var pb = Math.Abs(p - b);
        var pc = Math.Abs(p - c);
        if (pa <= pb && pa <= pc)
            return a;
        if (pb <= pc)
            return b;
        return c;
    }

    public static byte[] EncodeIndexed(int width, int height, ReadOnlySpan<byte> indices, ReadOnlySpan<byte> paletteRgbx)
    {
        if (width <= 0 || height <= 0)
            throw new ArgumentOutOfRangeException(nameof(width));
        if (indices.Length != checked(width * height))
            throw new ArgumentException("Index buffer size does not match the image dimensions.", nameof(indices));

        using var output = new MemoryStream();
        output.Write(Signature);

        Span<byte> ihdr = stackalloc byte[13];
        BinaryPrimitives.WriteInt32BigEndian(ihdr, width);
        BinaryPrimitives.WriteInt32BigEndian(ihdr[4..], height);
        ihdr[8] = 8;
        ihdr[9] = 3;
        WriteChunk(output, "IHDR"u8, ihdr);

        var colors = Math.Max(1, paletteRgbx.Length / 4);
        var plte = new byte[colors * 3];
        for (var i = 0; i < colors; i++)
        {
            plte[i * 3] = paletteRgbx[i * 4];
            plte[i * 3 + 1] = paletteRgbx[i * 4 + 1];
            plte[i * 3 + 2] = paletteRgbx[i * 4 + 2];
        }

        WriteChunk(output, "PLTE"u8, plte);
        WriteChunk(output, "tRNS"u8, [0]);

        var scanlines = new byte[checked((width + 1) * height)];
        for (var y = 0; y < height; y++)
        {
            var destination = y * (width + 1);
            scanlines[destination] = 0;
            indices.Slice(y * width, width).CopyTo(scanlines.AsSpan(destination + 1, width));
        }

        using var compressed = new MemoryStream();
        using (var zlib = new ZLibStream(compressed, CompressionLevel.SmallestSize, leaveOpen: true))
            zlib.Write(scanlines);
        WriteChunk(output, "IDAT"u8, compressed.ToArray());
        WriteChunk(output, "IEND"u8, ReadOnlySpan<byte>.Empty);
        return output.ToArray();
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
