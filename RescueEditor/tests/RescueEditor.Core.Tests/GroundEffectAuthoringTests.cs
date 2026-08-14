using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class GroundEffectAuthoringTests
{
    [Fact]
    public void Validate_RejectsNonTileSize()
    {
        var image = Solid(10, 8, 20, 40, 80);
        var error = GroundEffectAuthoring.Validate(image, charCount: 4);
        Assert.NotNull(error);
        Assert.Contains("8", error);
    }

    [Fact]
    public void Validate_RejectsTileCountMismatch()
    {
        var image = Solid(16, 8, 20, 40, 80);
        var error = GroundEffectAuthoring.Validate(image, charCount: 4);
        Assert.NotNull(error);
        Assert.Contains("4", error);
    }

    [Fact]
    public void TryWrite_RoundTripsThroughWorkingRomAndModPackage()
    {
        var bytes = BuildToyEfob(charCount: 4);
        var working = new WorkingRom(RomImage.FromBytes("/tmp/efob-write.gba", bytes));
        var next = Solid(32, 8, 10, 180, 40);
        Mark(next, 2, 3, 220, 20, 20);

        var buffer = working.BeginMutate();
        var dirty = new List<RomSpan>();
        var error = GroundEffectAuthoring.TryWrite(buffer, "efob001", next, dirty);
        Assert.Null(error);
        working.CommitDirty(buffer, dirty);

        var atlas = new GroundEffectAtlas(working.View);
        var preview = atlas.TryGetForEffect(1);
        Assert.NotNull(preview);
        AssertPixelNear(preview!, 2, 3, 220, 20, 20);

        var package = ModPackage.Collect(working, new ProjectDocument { Name = "efob" });
        Assert.NotEmpty(package.Overlays);
    }

    [Fact]
    public void TryWrite_FailsWhenNameIsNotObjectEffect()
    {
        var bytes = BuildToyEfob(charCount: 4);
        var rom = MutableRom.From(RomImage.FromBytes("/tmp/efbg.gba", bytes));
        var error = GroundEffectAuthoring.TryWrite(rom, "efbg001", Solid(32, 8, 1, 2, 3), []);
        Assert.NotNull(error);
        Assert.Contains("efob", error, StringComparison.OrdinalIgnoreCase);
    }

    private static byte[] BuildToyEfob(int charCount)
    {
        var bytes = new byte[0x400];
        "SIRO"u8.CopyTo(bytes);
        WritePointer(bytes, 4, 0x20);
        WritePointer(bytes, 0x34, 0x80);
        WritePointer(bytes, 0x38, 0x180);
        BitConverter.GetBytes(charCount).CopyTo(bytes, 0x3C);
        "efob001\0"u8.CopyTo(bytes.AsSpan(0x1C0));
        WritePointer(bytes, 0x1D0, 0x1C0);
        WritePointer(bytes, 0x1D4, 0);
        return bytes;
    }

    private static void WritePointer(byte[] bytes, int offset, int dest)
    {
        BitConverter.GetBytes(RomImage.RomVirtualAddress + (uint)dest).CopyTo(bytes, offset);
    }

    private static RgbaImage Solid(int w, int h, byte r, byte g, byte b)
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

    private static void Mark(RgbaImage image, int x, int y, byte r, byte g, byte b)
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
        Assert.InRange(image.Pixels[o], r - 12, r + 12);
        Assert.InRange(image.Pixels[o + 1], g - 12, g + 12);
        Assert.InRange(image.Pixels[o + 2], b - 12, b + 12);
        Assert.True(image.Pixels[o + 3] > 8);
    }
}
