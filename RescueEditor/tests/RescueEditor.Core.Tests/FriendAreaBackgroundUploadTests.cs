using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class FriendAreaBackgroundUploadTests
{
    [Fact]
    public void Validate_RejectsNonMultipleOfEight()
    {
        var image = Solid(239, 160, 0xFF, 0x00, 0x00);
        var error = FriendAreaBackgroundUpload.Validate(image);
        Assert.NotNull(error);
        Assert.Contains("multiple", error, StringComparison.OrdinalIgnoreCase);
        Assert.Contains("8", error);
    }

    [Fact]
    public void Validate_RejectsSmallerThanGbaScreen()
    {
        var image = Solid(232, 160, 0xFF, 0x00, 0x00);
        var error = FriendAreaBackgroundUpload.Validate(image);
        Assert.NotNull(error);
        Assert.Contains("240", error);
        Assert.Contains("160", error);
    }

    [Fact]
    public void Validate_RejectsTooManyUniqueColors()
    {
        var image = Rainbow(240, 160, uniqueColors: FriendAreaBackgroundUpload.MaxUniqueColors + 1);
        var error = FriendAreaBackgroundUpload.Validate(image);
        Assert.NotNull(error);
        Assert.Contains("color", error, StringComparison.OrdinalIgnoreCase);
    }

    [Fact]
    public void Validate_AcceptsGbaSizedTwoColorImage()
    {
        var image = Solid(240, 160, 0xC8, 0x40, 0x20);
        Assert.Null(FriendAreaBackgroundUpload.Validate(image));
    }

    [Fact]
    public void Encode_RoundTripsSolidColorThroughGroundRenderer()
    {
        var image = Solid(240, 160, 0xC8, 0x40, 0x20);
        Assert.True(FriendAreaBackgroundUpload.TryEncode(image, out var bpl, out var bpc, out var bma, out var error), error);
        var preview = GroundMapRenderer.Render("upload", bpl, bpc, bma);
        Assert.NotNull(preview.Png);
        var decoded = RgbaImage.FromPng(preview.Png!);
        Assert.NotNull(decoded);
        Assert.Equal(240, decoded!.Width);
        Assert.Equal(160, decoded.Height);
        Assert.InRange(decoded.Pixels[0], 0xB0, 0xE0);
        Assert.InRange(decoded.Pixels[1], 0x20, 0x60);
        Assert.InRange(decoded.Pixels[2], 0x10, 0x40);
    }

    [Fact]
    public void TryWrite_ReplacesRainbowPeakOnRetailRom()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var image = Solid(240, 160, 0x20, 0xC0, 0x40);
        var buffer = MutableRom.From(rom);
        var error = FriendAreaBackgroundUpload.TryWrite(buffer, catalog: null, "H05P02m", image);
        Assert.Null(error);

        var view = RomImage.FromBytes(rom.Path, buffer.Copy(0, buffer.Length));
        var loaded = FriendAreaIntroArt.TryLoadSceneBackground(view, catalog: null, "H05P02m");
        Assert.NotNull(loaded);
        Assert.Equal(240, loaded!.Width);
        Assert.Equal(160, loaded.Height);
        Assert.InRange(loaded.Pixels[1], 0xA0, 0xE0);
    }

    private static string? FindUpwards(string fileName)
    {
        var dir = new DirectoryInfo(AppContext.BaseDirectory);
        while (dir is not null)
        {
            var candidate = Path.Combine(dir.FullName, fileName);
            if (File.Exists(candidate))
                return candidate;
            dir = dir.Parent;
        }

        const string local = "/home/username/Github/pmd-red/baserom.gba";
        return File.Exists(local) ? local : null;
    }

    private static RgbaImage Solid(int width, int height, byte r, byte g, byte b)
    {
        var pixels = new byte[width * height * 4];
        for (var i = 0; i < pixels.Length; i += 4)
        {
            pixels[i] = r;
            pixels[i + 1] = g;
            pixels[i + 2] = b;
            pixels[i + 3] = 255;
        }

        return new RgbaImage(width, height, pixels);
    }

    private static RgbaImage Rainbow(int width, int height, int uniqueColors)
    {
        var pixels = new byte[width * height * 4];
        for (var i = 0; i < width * height; i++)
        {
            var n = i % uniqueColors;
            var o = i * 4;
            pixels[o] = (byte)(n % 256);
            pixels[o + 1] = (byte)((n / 256) % 256);
            pixels[o + 2] = (byte)(n / 65536);
            pixels[o + 3] = 255;
        }

        return new RgbaImage(width, height, pixels);
    }
}
