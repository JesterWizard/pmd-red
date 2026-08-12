using System.Buffers.Binary;

namespace RescueEditor.Core;

/// <summary>Mutable ROM buffer used only for Build ROM output; never mutates the source image.</summary>
public sealed class MutableRom
{
    private byte[] _bytes;

    public MutableRom(RomImage source)
    {
        SourcePath = source.Path;
        SourceSha1 = source.Sha1;
        _bytes = source.Copy(0, source.Length);
        Profile = RomProfile.TryMatch(source);
    }

    public MutableRom(byte[] bytes, string sourcePath, string sourceSha1, RomProfile? profile)
    {
        _bytes = bytes;
        SourcePath = sourcePath;
        SourceSha1 = sourceSha1;
        Profile = profile;
    }

    public string SourcePath { get; }
    public string SourceSha1 { get; }
    public RomProfile? Profile { get; }
    public int Length => _bytes.Length;
    public ReadOnlySpan<byte> Bytes => _bytes;

    public static MutableRom From(RomImage rom) => new(rom);

    public byte ReadByte(int offset) => _bytes[Checked(offset, 1)];
    public ushort ReadUInt16(int offset) => BinaryPrimitives.ReadUInt16LittleEndian(_bytes.AsSpan(Checked(offset, 2)));
    public short ReadInt16(int offset) => unchecked((short)ReadUInt16(offset));
    public uint ReadUInt32(int offset) => BinaryPrimitives.ReadUInt32LittleEndian(_bytes.AsSpan(Checked(offset, 4)));
    public int ReadInt32(int offset) => unchecked((int)ReadUInt32(offset));

    public void WriteByte(int offset, byte value) => _bytes[Checked(offset, 1)] = value;

    public void WriteUInt16(int offset, ushort value) =>
        BinaryPrimitives.WriteUInt16LittleEndian(_bytes.AsSpan(Checked(offset, 2)), value);

    public void WriteInt16(int offset, short value) => WriteUInt16(offset, unchecked((ushort)value));

    public void WriteUInt32(int offset, uint value) =>
        BinaryPrimitives.WriteUInt32LittleEndian(_bytes.AsSpan(Checked(offset, 4)), value);

    public void WriteInt32(int offset, int value) => WriteUInt32(offset, unchecked((uint)value));

    public void WritePointer(int offset, int targetOffset) =>
        WriteUInt32(offset, RomImage.RomVirtualAddress + (uint)targetOffset);

    public void WriteBytes(int offset, ReadOnlySpan<byte> data)
    {
        Checked(offset, data.Length);
        data.CopyTo(_bytes.AsSpan(offset));
    }

    public void Fill(int offset, int length, byte value = 0xFF)
    {
        Checked(offset, length);
        _bytes.AsSpan(offset, length).Fill(value);
    }

    public byte[] Copy(int offset, int length) => _bytes.AsSpan(Checked(offset, length), length).ToArray();

    public bool IsRangeValid(int offset, int length) =>
        offset >= 0 && length >= 0 && offset <= _bytes.Length - length;

    /// <summary>Grow the image to at least <paramref name="newLength"/> bytes (0xFF padding).</summary>
    public void ExtendTo(int newLength, byte fill = 0xFF)
    {
        if (newLength < _bytes.Length)
            throw new ArgumentOutOfRangeException(nameof(newLength), "ExtendTo cannot shrink the ROM.");
        if (newLength == _bytes.Length)
            return;
        var next = new byte[newLength];
        _bytes.CopyTo(next, 0);
        next.AsSpan(_bytes.Length).Fill(fill);
        _bytes = next;
    }

    /// <summary>
    /// Insert <paramref name="count"/> bytes at <paramref name="offset"/>, shifting the tail up.
    /// Absolute ROM pointers (<c>0x08xxxxxx</c>/<c>0x09xxxxxx</c>) that reference offsets
    /// at or past the insertion point are adjusted by <paramref name="count"/>.
    /// Returns the number of absolute pointers adjusted.
    /// </summary>
    public int InsertBytes(int offset, int count, byte fill = 0xFF)
    {
        if (offset < 0 || offset > _bytes.Length)
            throw new ArgumentOutOfRangeException(nameof(offset));
        if (count < 0)
            throw new ArgumentOutOfRangeException(nameof(count));
        if (count == 0)
            return 0;

        var next = new byte[_bytes.Length + count];
        Buffer.BlockCopy(_bytes, 0, next, 0, offset);
        next.AsSpan(offset, count).Fill(fill);
        Buffer.BlockCopy(_bytes, offset, next, offset + count, _bytes.Length - offset);
        _bytes = next;
        return RomPointerFixup.AdjustAbsoluteRomPointers(this, offset, count);
    }

    public int PointerToOffset(uint pointer)
    {
        if (pointer < RomImage.RomVirtualAddress)
            return -1;
        var offset = (int)(pointer - RomImage.RomVirtualAddress);
        return offset < _bytes.Length ? offset : -1;
    }

    public void Save(string path) => File.WriteAllBytes(path, _bytes);

    public RomImage ToRomImage(string path)
    {
        Save(path);
        return RomImage.Open(path);
    }

    private int Checked(int offset, int length)
    {
        if (!IsRangeValid(offset, length))
            throw new ArgumentOutOfRangeException(nameof(offset),
                $"ROM range 0x{offset:X}+0x{length:X} is outside the image.");
        return offset;
    }
}

/// <summary>Adjust absolute GBA ROM pointers after a mid-image insertion/shift.</summary>
public static class RomPointerFixup
{
    public static int AdjustAbsoluteRomPointers(MutableRom rom, int insertOffset, int delta)
    {
        if (delta == 0)
            return 0;
        var adjusted = 0;
        var maxPointerOffset = rom.Length - 4;
        for (var i = 0; i <= maxPointerOffset; i += 4)
        {
            var value = rom.ReadUInt32(i);
            if (value < RomImage.RomVirtualAddress)
                continue;
            // ROM window used by this project includes 0x08xxxxxx and 0x09xxxxxx mirrors.
            if (value >= 0x0A000000)
                continue;
            var target = (int)(value - RomImage.RomVirtualAddress);
            if (target < insertOffset)
                continue;
            // Skip the freshly inserted span itself (still fill bytes).
            if (i >= insertOffset && i < insertOffset + delta)
                continue;
            rom.WriteUInt32(i, value + (uint)delta);
            adjusted++;
        }

        return adjusted;
    }
}
