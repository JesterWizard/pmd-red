using System.Buffers.Binary;
using System.Security.Cryptography;

namespace RescueEditor.Core;

public sealed class RomImage
{
    public const uint RomVirtualAddress = 0x08000000;
    public const int ExpectedRetailSize = 0x02000000;
    public const string ExpectedRetailSha1 = "9f4cfc5b5f4859d17169a485462e977c7aac2b89";

    private readonly byte[] _bytes;

    private RomImage(string path, byte[] bytes)
    {
        Path = path;
        _bytes = bytes;
        Sha1 = Convert.ToHexString(SHA1.HashData(bytes)).ToLowerInvariant();
        Info = new RomInfo(path, bytes.Length, Sha1, bytes.Length == ExpectedRetailSize &&
            string.Equals(Sha1, ExpectedRetailSha1, StringComparison.OrdinalIgnoreCase));
    }

    public string Path { get; }
    public string Sha1 { get; }
    public RomInfo Info { get; }
    public int Length => _bytes.Length;
    public ReadOnlySpan<byte> Bytes => _bytes;

    public static RomImage Open(string path)
    {
        ArgumentException.ThrowIfNullOrWhiteSpace(path);
        var bytes = File.ReadAllBytes(path);
        if (bytes.Length == 0)
            throw new InvalidDataException("The selected file is empty.");
        return new RomImage(System.IO.Path.GetFullPath(path), bytes);
    }

    /// <summary>In-memory ROM view. Does not read or write <paramref name="path"/>.</summary>
    public static RomImage FromBytes(string path, byte[] bytes)
    {
        ArgumentException.ThrowIfNullOrWhiteSpace(path);
        ArgumentNullException.ThrowIfNull(bytes);
        if (bytes.Length == 0)
            throw new InvalidDataException("The ROM image is empty.");
        var copy = new byte[bytes.Length];
        bytes.CopyTo(copy, 0);
        return new RomImage(path, copy);
    }

    public byte ReadByte(int offset) => _bytes[CheckedOffset(offset, 1)];

    public ushort ReadUInt16(int offset)
    {
        offset = CheckedOffset(offset, sizeof(ushort));
        return BinaryPrimitives.ReadUInt16LittleEndian(_bytes.AsSpan(offset));
    }

    public short ReadInt16(int offset) => unchecked((short)ReadUInt16(offset));

    public uint ReadUInt32(int offset)
    {
        offset = CheckedOffset(offset, sizeof(uint));
        return BinaryPrimitives.ReadUInt32LittleEndian(_bytes.AsSpan(offset));
    }

    public int ReadInt32(int offset) => unchecked((int)ReadUInt32(offset));

    public bool TryReadUInt32(int offset, out uint value)
    {
        if (!IsRangeValid(offset, sizeof(uint)))
        {
            value = 0;
            return false;
        }

        value = BinaryPrimitives.ReadUInt32LittleEndian(_bytes.AsSpan(offset));
        return true;
    }

    public int PointerToOffset(uint pointer)
    {
        if (pointer < RomVirtualAddress)
            return -1;

        var offset = pointer - RomVirtualAddress;
        return offset < _bytes.Length ? (int)offset : -1;
    }

    public bool TryPointerToOffset(uint pointer, out int offset)
    {
        offset = PointerToOffset(pointer);
        return offset >= 0;
    }

    public int ReadPointerOffset(int offset)
    {
        return PointerToOffset(ReadUInt32(offset));
    }

    public ReadOnlySpan<byte> Slice(int offset, int length)
    {
        CheckedOffset(offset, length);
        return _bytes.AsSpan(offset, length);
    }

    public byte[] Copy(int offset, int length) => Slice(offset, length).ToArray();

    public bool IsRangeValid(int offset, int length)
    {
        return offset >= 0 && length >= 0 && offset <= _bytes.Length - length;
    }

    public string ReadAscii(int offset, int maxLength)
    {
        var span = Slice(offset, Math.Min(maxLength, _bytes.Length - offset));
        var length = span.IndexOf((byte)0);
        if (length < 0)
            length = span.Length;
        return System.Text.Encoding.ASCII.GetString(span[..length]);
    }

    public int Find(ReadOnlySpan<byte> needle, int start = 0)
    {
        if (needle.IsEmpty)
            return Math.Clamp(start, 0, _bytes.Length);
        if (start < 0 || start >= _bytes.Length || needle.Length > _bytes.Length - start)
            return -1;
        var relative = _bytes.AsSpan(start).IndexOf(needle);
        return relative < 0 ? -1 : start + relative;
    }

    public IEnumerable<int> FindAll(byte[] needle, int start = 0, int limit = 100_000)
    {
        var cursor = Math.Max(0, start);
        var count = 0;
        while (count < limit)
        {
            var found = Find(needle, cursor);
            if (found < 0)
                yield break;
            yield return found;
            count++;
            cursor = found + Math.Max(1, needle.Length);
            if (cursor >= _bytes.Length)
                yield break;
        }
    }

    public IEnumerable<int> FindAscii(string text, bool includeTerminator = false, int limit = 100_000)
    {
        var bytes = System.Text.Encoding.ASCII.GetBytes(text);
        if (includeTerminator)
            bytes = bytes.Append((byte)0).ToArray();
        return FindAll(bytes, limit: limit);
    }

    public IEnumerable<(int Offset, int Size)> RangesFromPointers(IEnumerable<int> pointers)
    {
        var sorted = pointers.Where(offset => IsRangeValid(offset, 1))
            .Distinct()
            .OrderBy(value => value)
            .ToArray();
        for (var i = 0; i < sorted.Length; i++)
        {
            var size = i + 1 < sorted.Length ? sorted[i + 1] - sorted[i] : Length - sorted[i];
            if (size > 0)
                yield return (sorted[i], size);
        }
    }

    private int CheckedOffset(int offset, int length)
    {
        if (!IsRangeValid(offset, length))
            throw new ArgumentOutOfRangeException(nameof(offset),
                $"ROM range 0x{offset:X}+0x{length:X} is outside the image.");
        return offset;
    }
}
