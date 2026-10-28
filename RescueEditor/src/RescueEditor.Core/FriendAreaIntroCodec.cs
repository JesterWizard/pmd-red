using System.Buffers.Binary;

namespace RescueEditor.Core;

public sealed class FriendAreaIntroTables
{
    public required int Assets { get; set; } // gFriendAreaIntroAssets

    public int GfxPointerOffset(int id) => Assets + id * 8;
    public int PalPointerOffset(int id) => Assets + id * 8 + 4;

    /// <summary>
    /// Finds gFriendAreaIntroAssets in one linear pass over the ROM. Entry 0 is {NULL, NULL};
    /// entry 1 and entry 2 have a gfx pointer to an AT4PN/AT4PX blob, and entry 1 has a ROM palette pointer
    /// in between. Two passes: collect blob addresses, then test 4-byte-aligned candidates.
    /// </summary>
    public static FriendAreaIntroTables? TryLoad(RomImage rom)
    {
        var hay = rom.Bytes;
        var blobs = CollectAt4pBlobs(hay);
        if (blobs.Count == 0)
            return null;

        var romStart = RomImage.RomVirtualAddress;
        var romEnd = romStart + (uint)hay.Length;
        for (var t = 0; t + 20 <= hay.Length; t += 4)
        {
            if (BinaryPrimitives.ReadUInt64LittleEndian(hay.Slice(t, 8)) != 0)
                continue;
            if (!blobs.Contains(BinaryPrimitives.ReadUInt32LittleEndian(hay.Slice(t + 8, 4))))
                continue;
            var pal = BinaryPrimitives.ReadUInt32LittleEndian(hay.Slice(t + 12, 4));
            if (pal < romStart || pal >= romEnd)
                continue;
            if (!blobs.Contains(BinaryPrimitives.ReadUInt32LittleEndian(hay.Slice(t + 16, 4))))
                continue;
            return new FriendAreaIntroTables { Assets = t };
        }

        return null;
    }

    // Intro art is AT4PN (stored) or AT4PX (compressed); both share the "AT4P" prefix.
    private static HashSet<uint> CollectAt4pBlobs(ReadOnlySpan<byte> hay)
    {
        var blobs = new HashSet<uint>();
        for (var i = 0; i + 5 <= hay.Length; i++)
        {
            if (hay[i] != (byte)'A' || !hay.Slice(i, 4).SequenceEqual("AT4P"u8))
                continue;
            var variant = hay[i + 4];
            if (variant is (byte)'N' or (byte)'X')
                blobs.Add(RomImage.RomVirtualAddress + (uint)i);
        }

        return blobs;
    }

    public (int Gfx, int Pal) ReadPointers(RomImage rom, int id)
    {
        var gfx = DataTableTables.ReadRomPointer(rom, GfxPointerOffset(id));
        var pal = DataTableTables.ReadRomPointer(rom, PalPointerOffset(id));
        return (gfx, pal);
    }

    public RgbaImage? TryRender(RomImage rom, int id)
    {
        if (id <= 0)
            return null;
        var (gfx, pal) = ReadPointers(rom, id);
        if (gfx < 0 || pal < 0)
            return null;
        return At4pn8bpp.TryDecode(rom, gfx, pal);
    }

    public bool WriteImage(MutableRom rom, int id, RgbaImage image, ICollection<RomSpan>? dirty = null)
    {
        if (id <= 0)
            return false;
        var (at4pn, pal) = At4pn8bpp.Encode(image);
        var gfxField = GfxPointerOffset(id);
        var palField = PalPointerOffset(id);
        var gfx = DataTableTables.ReadRomPointer(rom, gfxField);
        var palOff = DataTableTables.ReadRomPointer(rom, palField);
        WriteBlob(rom, gfxField, gfx, at4pn, dirty);
        WriteBlob(rom, palField, palOff, pal, dirty);
        return true;
    }

    private static void WriteBlob(
        MutableRom rom, int pointerField, int dest, byte[] data, ICollection<RomSpan>? dirty)
    {
        var fits = dest >= 0 && rom.IsRangeValid(dest, data.Length) && SlotFits(rom, dest, data.Length);
        if (!fits)
        {
            dest = FreeSpaceAllocator.FindFreeSpace(rom, data.Length, alignment: 4);
            rom.WritePointer(pointerField, dest);
            dirty?.Add(new RomSpan(pointerField, 4));
        }

        rom.WriteBytes(dest, data);
        dirty?.Add(new RomSpan(dest, data.Length));
    }

    private static bool SlotFits(MutableRom rom, int dest, int length)
    {
        if (rom.IsRangeValid(dest, 7) && rom.ReadByte(dest) == (byte)'A')
        {
            var existing = 7 + rom.ReadUInt16(dest + 5);
            return length <= existing;
        }

        return rom.IsRangeValid(dest, length);
    }

}
