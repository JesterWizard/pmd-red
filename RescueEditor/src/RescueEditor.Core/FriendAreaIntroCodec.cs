namespace RescueEditor.Core;

public sealed class FriendAreaIntroTables
{
    public required int Assets { get; set; } // gFriendAreaIntroAssets

    public int GfxPointerOffset(int id) => Assets + id * 8;
    public int PalPointerOffset(int id) => Assets + id * 8 + 4;

    public static FriendAreaIntroTables? TryLoad(RomImage rom)
    {
        var magic = "AT4PN"u8;
        var hay = rom.Bytes;
        for (var i = 0; i <= hay.Length - magic.Length; i++)
        {
            if (!hay.Slice(i, magic.Length).SequenceEqual(magic))
                continue;
            var ptr = RomImage.RomVirtualAddress + (uint)i;
            var needle = new byte[12];
            BitConverter.TryWriteBytes(needle.AsSpan(8), ptr);
            var table = IndexOf(hay, needle);
            if (table < 0)
                continue;
            return new FriendAreaIntroTables { Assets = table };
        }

        return null;
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

    private static int IndexOf(ReadOnlySpan<byte> haystack, ReadOnlySpan<byte> needle)
    {
        var last = haystack.Length - needle.Length;
        for (var i = 0; i <= last; i += 4)
        {
            if (haystack.Slice(i, needle.Length).SequenceEqual(needle))
                return i;
        }

        return -1;
    }
}
