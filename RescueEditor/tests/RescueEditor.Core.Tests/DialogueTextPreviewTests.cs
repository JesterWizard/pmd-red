using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class DialogueTextPreviewTests
{
    [Fact]
    public void SplitPagesTreatsExtraMsgAsPageBreak()
    {
        var pages = DialogueFormatter.SplitPages(
            "{COLOR RED}Fire Types{RESET}\nCharmander{EXTRA_MSG}{COLOR RED}Water Types{RESET}\nSquirtle");

        Assert.Equal(2, pages.Count);
        Assert.Equal("Fire Types\nCharmander", DialogueRuns.PlainText(pages[0]));
        Assert.Equal("Water Types\nSquirtle", DialogueRuns.PlainText(pages[1]));
        Assert.DoesNotContain("{EXTRA_MSG}", pages[0], StringComparison.OrdinalIgnoreCase);
        Assert.DoesNotContain("{EXTRA_MSG}", pages[1], StringComparison.OrdinalIgnoreCase);
    }

    [Fact]
    public void SplitPagesTreatsWaitPressAndExtraMsgAsPageBreaks()
    {
        var pages = DialogueFormatter.SplitPages(
            "One.{WAIT_PRESS}Two.{EXTRA_MSG}Three.");

        Assert.Equal(3, pages.Count);
        Assert.Equal(["One.", "Two.", "Three."], pages.Select(DialogueRuns.PlainText).ToArray());
    }

    [Fact]
    public void RenderProducesInGameBoxChrome()
    {
        var image = DialogueTextPreview.Render("Hello", scale: 1);

        Assert.Equal(GbaDialogueHud.BoxW, image.Width);
        Assert.Equal(GbaDialogueHud.BoxH, image.Height);

        // Outer cyan border
        AssertPixel(image, 0, 0, 0x88, 0xA8, 0xE0);
        // Inner navy fill (avoid text inset at top-left)
        AssertPixel(image, image.Width - 6, image.Height - 6, 0x14, 0x1C, 0x40);
    }

    [Fact]
    public void RenderDefaultsToTwoXScale()
    {
        var image = DialogueTextPreview.Render("Hello");
        Assert.Equal(GbaDialogueHud.BoxW * DialogueTextPreview.DefaultScale, image.Width);
        Assert.Equal(GbaDialogueHud.BoxH * DialogueTextPreview.DefaultScale, image.Height);
        // Nearest-neighbor keeps solid border color after upscale
        AssertPixel(image, 0, 0, 0x88, 0xA8, 0xE0);
        AssertPixel(image, 1, 0, 0x88, 0xA8, 0xE0);
    }

    [Fact]
    public void RenderAppliesColorControlCodesWithoutShowingTags()
    {
        var image = DialogueTextPreview.Render("{COLOR RED}Fire{RESET} ok", scale: 1);

        Assert.DoesNotContain("{COLOR", DialogueRuns.PlainText(DialogueFormatter.ForTextbox("{COLOR RED}Fire{RESET} ok")), StringComparison.Ordinal);
        Assert.True(CountNearRgb(image, 0xF8, 0x48, 0x48, tolerance: 24) > 0,
            "Expected red ink from {COLOR RED}");
        Assert.True(CountNearRgb(image, 0xF8, 0xF8, 0xF8, tolerance: 24) > 0,
            "Expected default white ink for uncolored text");
    }

    [Fact]
    public void RenderStacksPagesForExtraMsg()
    {
        var image = DialogueTextPreview.Render("Page A{EXTRA_MSG}Page B", scale: 1);

        var expectedH = GbaDialogueHud.BoxH * 2 + DialogueTextPreview.PageGap;
        Assert.Equal(GbaDialogueHud.BoxW, image.Width);
        Assert.Equal(expectedH, image.Height);
        // Second box also has chrome
        AssertPixel(image, 0, GbaDialogueHud.BoxH + DialogueTextPreview.PageGap, 0x88, 0xA8, 0xE0);
    }

    [Fact]
    public void RenderUpdatesWhenSourceChanges()
    {
        var a = DialogueTextPreview.Render("AAA", scale: 1);
        var b = DialogueTextPreview.Render("BBB", scale: 1);
        Assert.False(a.Pixels.AsSpan().SequenceEqual(b.Pixels));
    }

    private static void AssertPixel(RgbaImage image, int x, int y, byte r, byte g, byte b)
    {
        var o = (y * image.Width + x) * 4;
        Assert.Equal(r, image.Pixels[o]);
        Assert.Equal(g, image.Pixels[o + 1]);
        Assert.Equal(b, image.Pixels[o + 2]);
    }

    private static int CountNearRgb(RgbaImage image, byte r, byte g, byte b, int tolerance)
    {
        var count = 0;
        for (var i = 0; i < image.Pixels.Length; i += 4)
        {
            if (Math.Abs(image.Pixels[i] - r) <= tolerance &&
                Math.Abs(image.Pixels[i + 1] - g) <= tolerance &&
                Math.Abs(image.Pixels[i + 2] - b) <= tolerance &&
                image.Pixels[i + 3] > 200)
            {
                count++;
            }
        }
        return count;
    }
}
