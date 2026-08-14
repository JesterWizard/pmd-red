using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class PortraitFaceCodecTests
{
    [Fact]
    public void EncodeRejectsWrongSize()
    {
        var image = SolidFace(8, 8, 255, 0, 0);
        Assert.NotNull(PortraitFaceCodec.Validate(image));
    }

    [Fact]
    public void RoundTripSolidFaceThroughAt4px()
    {
        var src = SolidFace(PortraitSheetPresentation.FaceSize, PortraitSheetPresentation.FaceSize, 40, 160, 80);
        MarkPixel(src, 10, 12, 200, 30, 30);

        var encoded = PortraitFaceCodec.Encode(src, forcePrefix: false);
        Assert.True(encoded.Graphics.AsSpan().StartsWith("AT4PX"u8));
        Assert.Equal(PortraitFaceCodec.PaletteBytes, encoded.Palette.Length);

        var decoded = PortraitFaceCodec.Decode(encoded.Graphics, encoded.Palette, forcePrefix: false);
        Assert.Equal(src.Width, decoded.Width);
        Assert.Equal(src.Height, decoded.Height);
        AssertPixelNear(decoded, 10, 12, 200, 30, 30);
        AssertPixelNear(decoded, 0, 0, 40, 160, 80);
    }

    [Fact]
    public void ForcePrefixOmitsMagicFromRomPayload()
    {
        var src = SolidFace(PortraitSheetPresentation.FaceSize, PortraitSheetPresentation.FaceSize, 10, 20, 30);
        var encoded = PortraitFaceCodec.Encode(src, forcePrefix: true);
        Assert.False(encoded.Graphics.AsSpan().StartsWith("AT4PX"u8));
        var decoded = PortraitFaceCodec.Decode(encoded.Graphics, encoded.Palette, forcePrefix: true);
        AssertPixelNear(decoded, 0, 0, 10, 20, 30);
    }

    [Fact]
    public void WriteFailsWhenCompressedLargerThanSlot()
    {
        var src = NoiseFace();
        var rom = MutableRom.From(RomImage.FromBytes("/tmp/kao-slot.gba", new byte[0x80]));
        var face = FaceAsset(offset: 0, size: 16, palOffset: 0x40, forcePrefix: false);
        var error = PortraitFaceCodec.TryWrite(rom, face, src);
        Assert.NotNull(error);
        Assert.Contains("slot", error, StringComparison.OrdinalIgnoreCase);
    }

    [Fact]
    public void WriteRoundTripsThroughWorkingRomSlot()
    {
        var src = SolidFace(PortraitSheetPresentation.FaceSize, PortraitSheetPresentation.FaceSize, 16, 48, 200);
        MarkPixel(src, 3, 5, 240, 240, 16);
        var encoded = PortraitFaceCodec.Encode(src, forcePrefix: false);
        var bytes = new byte[0x800];
        encoded.Graphics.CopyTo(bytes, 0);
        encoded.Palette.CopyTo(bytes, 0x400);

        var working = new WorkingRom(RomImage.FromBytes("/tmp/kao-write.gba", bytes));
        var next = SolidFace(PortraitSheetPresentation.FaceSize, PortraitSheetPresentation.FaceSize, 90, 10, 10);
        MarkPixel(next, 3, 5, 0, 255, 0);
        var face = FaceAsset(offset: 0, size: 0x400, palOffset: 0x400, forcePrefix: false);
        var buffer = working.BeginMutate();
        var error = PortraitFaceCodec.TryWrite(buffer, face, next);
        Assert.Null(error);
        working.Commit(buffer, 0, 0x400);
        working.Commit(buffer, 0x400, PortraitFaceCodec.PaletteBytes);

        var view = working.View;
        var decoded = PortraitFaceCodec.Decode(
            view.Copy(0, face.Size),
            view.Copy(0x400, PortraitFaceCodec.PaletteBytes),
            forcePrefix: false);
        AssertPixelNear(decoded, 3, 5, 0, 255, 0);
    }

    [Fact]
    public void ReencodingRetailFaceFitsOriginalSlot()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var (catalog, _, _) = CatalogBuilder.Build(rom);
        var sheet = catalog.ForCategory(AssetCategory.Portraits)
            .First(s => s.Children.Count > 0);
        var face = sheet.Children[0];
        var decoded = PortraitFaceCodec.Decode(rom, face);
        var encoded = PortraitFaceCodec.Encode(
            decoded,
            forcePrefix: face.Metadata.GetValueOrDefault("forcePrefix")
                .Equals("true", StringComparison.OrdinalIgnoreCase));
        Assert.True(
            encoded.Graphics.Length <= face.Size,
            $"Re-encoded {sheet.Name} {face.Metadata.GetValueOrDefault("emotion")} is {encoded.Graphics.Length} bytes; slot is {face.Size}.");
        Assert.True(encoded.Palette.Length <= face.AuxiliarySize);
    }

    private static AssetDescriptor FaceAsset(int offset, int size, int palOffset, bool forcePrefix) => new()
    {
        Id = "portrait:test:Normal",
        Name = "test — Normal",
        Category = AssetCategory.Portraits,
        Kind = AssetKind.KaoPortrait,
        Offset = offset,
        Size = size,
        AuxiliaryOffset = palOffset,
        AuxiliarySize = PortraitFaceCodec.PaletteBytes,
        Metadata = new Dictionary<string, string>
        {
            ["forcePrefix"] = forcePrefix.ToString(),
            ["species"] = "test",
            ["emotion"] = "Normal",
        },
    };

    private static RgbaImage SolidFace(int w, int h, byte r, byte g, byte b)
    {
        var px = new byte[w * h * 4];
        for (var i = 0; i < px.Length; i += 4)
        {
            px[i] = r;
            px[i + 1] = g;
            px[i + 2] = b;
            px[i + 3] = 255;
        }
        return new RgbaImage(w, h, px);
    }

    private static RgbaImage NoiseFace()
    {
        var w = PortraitSheetPresentation.FaceSize;
        var px = new byte[w * w * 4];
        for (var i = 0; i < px.Length; i += 4)
        {
            px[i] = (byte)(i * 13);
            px[i + 1] = (byte)(i * 29);
            px[i + 2] = (byte)(i * 47);
            px[i + 3] = 255;
        }
        return new RgbaImage(w, w, px);
    }

    private static void MarkPixel(RgbaImage image, int x, int y, byte r, byte g, byte b)
    {
        var o = (y * image.Width + x) * 4;
        image.Pixels[o] = r;
        image.Pixels[o + 1] = g;
        image.Pixels[o + 2] = b;
        image.Pixels[o + 3] = 255;
    }

    private static void AssertPixelNear(RgbaImage image, int x, int y, byte r, byte g, byte b)
    {
        var o = (y * image.Width + x) * 4;
        Assert.InRange(image.Pixels[o], r - 8, r + 8);
        Assert.InRange(image.Pixels[o + 1], g - 8, g + 8);
        Assert.InRange(image.Pixels[o + 2], b - 8, b + 8);
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
