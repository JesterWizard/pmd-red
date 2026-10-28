using System.Buffers.Binary;
using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class FriendAreaIntroTablesTests : IDisposable
{
    private const int TableOffset = 0x100;
    private const int ArtOffset = 0x200;
    private const int PalOffset = 0x2000;
    private const int RomSize = 0x3000;

    private readonly string _dir = Path.Combine(
        Path.GetTempPath(), "rescue-intro-tables-" + Guid.NewGuid().ToString("N"));

    public void Dispose()
    {
        if (Directory.Exists(_dir))
            Directory.Delete(_dir, recursive: true);
    }

    [Fact]
    public void TryLoad_FindsAt4pnArtFromAssetTable()
    {
        var (at4pn, pal) = SolidArt(0xC8, 0x40, 0x20);
        var rom = SyntheticRom(at4pn, pal);

        var tables = FriendAreaIntroTables.TryLoad(rom);

        Assert.NotNull(tables);
        Assert.Equal(TableOffset, tables!.Assets);
    }

    [Fact]
    public void TryLoad_FindsAt4pxArtFromAssetTable()
    {
        var (at4pn, pal) = SolidArt(0xC8, 0x40, 0x20);
        var at4px = Compression.CompressAt4px(at4pn.AsSpan(7));
        var rom = SyntheticRom(at4px, pal);

        var tables = FriendAreaIntroTables.TryLoad(rom);

        Assert.NotNull(tables);
        Assert.Equal(TableOffset, tables!.Assets);
    }

    [Fact]
    public void TryLoad_RejectsZeroPointerPatternWithoutSecondEntry()
    {
        // Same "8 zero bytes + art pointer" shape as a real entry, but nothing valid at +16.
        var (at4pn, pal) = SolidArt(0xC8, 0x40, 0x20);
        var at4px = Compression.CompressAt4px(at4pn.AsSpan(7));
        var rom = SyntheticRom(at4px, pal, withSecondEntry: false);

        Assert.Null(FriendAreaIntroTables.TryLoad(rom));
    }

    [Fact]
    public void TryLoad_AcceptsFirstValidTableWhenEarlierPatternIsUnrelated()
    {
        var (at4pn, pal) = SolidArt(0xC8, 0x40, 0x20);
        var at4px = Compression.CompressAt4px(at4pn.AsSpan(7));
        var rom = new byte[RomSize];
        at4px.CopyTo(rom, ArtOffset);
        pal.CopyTo(rom, PalOffset);
        WriteTable(rom, TableOffset, withSecondEntry: false);
        WriteTable(rom, TableOffset + 0x40, withSecondEntry: true);

        var tables = FriendAreaIntroTables.TryLoad(RomImage.FromBytes("synthetic.gba", rom));

        Assert.NotNull(tables);
        Assert.Equal(TableOffset + 0x40, tables!.Assets);
    }

    [Fact]
    public void TryRender_DecodesAt4pxArtFromRom()
    {
        var color = (R: (byte)0x20, G: (byte)0x80, B: (byte)0xF0);
        var (at4pn, pal) = SolidArt(color.R, color.G, color.B);
        var at4px = Compression.CompressAt4px(at4pn.AsSpan(7));
        var rom = SyntheticRom(at4px, pal);

        var tables = FriendAreaIntroTables.TryLoad(rom);
        Assert.NotNull(tables);

        var image = tables!.TryRender(rom, 1);

        Assert.NotNull(image);
        Assert.Equal(240, image!.Width);
        Assert.Equal(160, image.Height);
        Assert.Equal(color.R, image.Pixels[0]);
        Assert.Equal(color.G, image.Pixels[1]);
        Assert.Equal(color.B, image.Pixels[2]);
    }

    [Fact]
    public void TryLoad_ReturnsNullWhenNoAssetTableReferencesArt()
    {
        var rom = RomImage.FromBytes("synthetic.gba", new byte[RomSize]);

        Assert.Null(FriendAreaIntroTables.TryLoad(rom));
    }

    [Fact]
    public void TryLoadFromRepository_MissingFilesReturnsNull()
    {
        Directory.CreateDirectory(Path.Combine(_dir, FriendAreaIntroArt.RelativeDirectory));

        Assert.Null(FriendAreaIntroArt.TryLoadFromRepository(_dir, 17));
        Assert.Null(FriendAreaIntroArt.TryLoadFromRepository(_dir, 0));
        Assert.Null(FriendAreaIntroArt.TryLoadFromRepository(null, 17));
    }

    [Fact]
    public void TryLoadFromRepository_PrefersAt4pxOverStaleAt4pn()
    {
        var color = (R: (byte)0x20, G: (byte)0x80, B: (byte)0xF0);
        var (at4pn, pal) = SolidArt(color.R, color.G, color.B);
        var dir = Path.Combine(_dir, FriendAreaIntroArt.RelativeDirectory);
        Directory.CreateDirectory(dir);

        // A stale .at4pn whose payload has no tilemaps (Decode throws) must not be used when .at4px exists.
        var slug = FriendAreaIntroArt.SlugFor(17)!;
        var stale = new byte[0x20];
        "AT4PN"u8.CopyTo(stale);
        stale[5] = 0x19;
        File.WriteAllBytes(Path.Combine(dir, slug + ".at4pn"), stale);
        File.WriteAllBytes(Path.Combine(dir, slug + ".at4px"), Compression.CompressAt4px(at4pn.AsSpan(7)));
        File.WriteAllBytes(Path.Combine(dir, slug + ".pal"), pal);

        var image = FriendAreaIntroArt.TryLoadFromRepository(_dir, 17);

        Assert.NotNull(image);
        Assert.Equal(240, image!.Width);
        Assert.Equal(160, image.Height);
        Assert.Equal(color.R, image.Pixels[0]);
        Assert.Equal(color.G, image.Pixels[1]);
        Assert.Equal(color.B, image.Pixels[2]);
    }

    private static (byte[] At4pn, byte[] Pal) SolidArt(byte r, byte g, byte b)
    {
        var pixels = new byte[240 * 160 * 4];
        for (var i = 0; i < pixels.Length; i += 4)
        {
            pixels[i] = r;
            pixels[i + 1] = g;
            pixels[i + 2] = b;
            pixels[i + 3] = 255;
        }

        return At4pn8bpp.Encode(new RgbaImage(240, 160, pixels));
    }

    // Layout mirrors gFriendAreaIntroAssets: entry 0 is zeroed, entries 1 and 2 hold art pointers,
    // entry 1 also holds the palette pointer.
    private static RomImage SyntheticRom(byte[] art, byte[] pal, bool withSecondEntry = true)
    {
        var rom = new byte[RomSize];
        art.CopyTo(rom, ArtOffset);
        pal.CopyTo(rom, PalOffset);
        WriteTable(rom, TableOffset, withSecondEntry);
        return RomImage.FromBytes("synthetic.gba", rom);
    }

    private static void WriteTable(byte[] rom, int table, bool withSecondEntry)
    {
        BinaryPrimitives.WriteUInt32LittleEndian(rom.AsSpan(table + 8), ArtPointer);
        BinaryPrimitives.WriteUInt32LittleEndian(rom.AsSpan(table + 12), RomImage.RomVirtualAddress + (uint)PalOffset);
        if (withSecondEntry)
            BinaryPrimitives.WriteUInt32LittleEndian(rom.AsSpan(table + 16), ArtPointer);
    }

    private static uint ArtPointer => RomImage.RomVirtualAddress + (uint)ArtOffset;
}
