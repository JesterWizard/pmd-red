using System.Text;
using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class CoreTests
{
    [Fact]
    public void RomImageReadsLittleEndianValuesAndPointers()
    {
        var path = Path.GetTempFileName();
        try
        {
            File.WriteAllBytes(path,
            [
                0x34, 0x12, 0x78, 0x56, 0xBC, 0x9A, 0x00, 0x08,
            ]);
            var rom = RomImage.Open(path);

            Assert.Equal((ushort)0x1234, rom.ReadUInt16(0));
            Assert.Equal(0x9ABC5678u, rom.ReadUInt32(2));
            Assert.Equal(0, rom.PointerToOffset(0x08000000));
            Assert.Equal(-1, rom.PointerToOffset(rom.ReadUInt32(4)));
            Assert.Equal(-1, rom.PointerToOffset(0x09000000));
        }
        finally
        {
            File.Delete(path);
        }
    }

    [Fact]
    public void GbaLzDecompressesLiteralStream()
    {
        var compressed = new byte[] { 0x10, 0x03, 0x00, 0x00, 0x00, 0x41, 0x42, 0x43 };
        Assert.Equal("ABC", Encoding.ASCII.GetString(Compression.DecompressGbaLz(compressed)));
    }

    [Fact]
    public void CharmapDecodesLongestSequenceAndStopsAtNull()
    {
        var path = Path.GetTempFileName();
        try
        {
            File.WriteAllText(path, "'A' = 41\n'é' = 7E 01\n");
            var charmap = Charmap.FromFile(path);
            Assert.Equal("Aé", charmap.Decode([0x41, 0x7E, 0x01, 0x00, 0x41]));
        }
        finally
        {
            File.Delete(path);
        }
    }

    [Fact]
    public void CharmapTranslatesTextMacrosAndColorCodes()
    {
        var path = FindUpwards("charmap.txt");
        Assert.NotNull(path);
        var charmap = Charmap.FromFile(path!);
        // "Hi" + NEW_LINE (#n) + COLOR GREEN (#C + '4') + "OK" + RESET (#R)
        var decoded = charmap.Decode(
        [
            0x48, 0x69, 0x23, 0x6E, 0x23, 0x43, 0x34, 0x4F, 0x4B, 0x23, 0x52, 0x00,
        ]);
        Assert.Equal("Hi\n{COLOR GREEN}OK{RESET}", decoded);
    }

    [Fact]
    public void PngEncoderWritesPngSignatureAndDimensions()
    {
        var png = new RgbaImage(1, 1, [255, 0, 0, 255]).ToPng();
        Assert.Equal([0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A], png[..8]);
        Assert.Equal(0x49, png[12]);
        Assert.Equal(0x48, png[13]);
        Assert.Equal(0x44, png[14]);
        Assert.Equal(0x52, png[15]);
    }

    [Fact]
    public void CatalogBuildFindsRetailAssetsWhenBaseromIsPresent()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var (catalog, _) = CatalogBuilder.Build(RomImage.Open(baserom));
        Assert.NotEmpty(catalog.Assets);
        Assert.Contains(catalog.Assets, asset => asset.Category == AssetCategory.Portraits);
        Assert.Contains(catalog.Assets, asset => asset.Category == AssetCategory.Effects);
        Assert.NotEmpty(catalog.ForCategory(AssetCategory.GroundMaps));
        Assert.NotEmpty(catalog.ForCategory(AssetCategory.Dialogue));
        Assert.NotEmpty(catalog.ForCategory(AssetCategory.Sound));
    }

    [Fact]
    public void RetailGraphicsAndTextEntriesCanBePreviewed()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var (catalog, charmap) = CatalogBuilder.Build(rom);
        var portrait = catalog.Assets.First(asset => asset.Kind == AssetKind.KaoPortrait);
        var title = catalog.Assets.First(asset => asset.Kind == AssetKind.TitleBackground);
        var effect = catalog.Assets.First(asset => asset.Kind == AssetKind.Effect);
        var ground = catalog.Assets.First(asset => asset.Kind == AssetKind.GroundMap);
        var dialogue = catalog.Assets.FirstOrDefault(asset => asset.Kind == AssetKind.Dialogue);

        Assert.True(AssetPreviewer.Create(rom, portrait, charmap).Png!
            .AsSpan(0, 4).SequenceEqual(new byte[] { 0x89, 0x50, 0x4E, 0x47 }));
        Assert.True(AssetPreviewer.Create(rom, title, charmap).Png!
            .AsSpan(0, 4).SequenceEqual(new byte[] { 0x89, 0x50, 0x4E, 0x47 }));
        Assert.True(AssetPreviewer.Create(rom, effect, charmap).Png!
            .AsSpan(0, 4).SequenceEqual(new byte[] { 0x89, 0x50, 0x4E, 0x47 }));
        Assert.True(AssetPreviewer.Create(rom, ground, charmap).Png!
            .AsSpan(0, 4).SequenceEqual(new byte[] { 0x89, 0x50, 0x4E, 0x47 }));
        if (dialogue is not null)
            Assert.NotEmpty(AssetPreviewer.Create(rom, dialogue, charmap).Text);
    }

    private static string? FindUpwards(string fileName)
    {
        var directory = new DirectoryInfo(AppContext.BaseDirectory);
        while (directory is not null)
        {
            var candidate = Path.Combine(directory.FullName, fileName);
            if (File.Exists(candidate))
                return candidate;
            directory = directory.Parent;
        }
        return null;
    }
}
