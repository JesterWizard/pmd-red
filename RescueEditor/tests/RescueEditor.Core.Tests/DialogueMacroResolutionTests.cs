using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class DialogueMacroResolutionTests
{
    [Theory]
    [InlineData("A_BUTTON")]
    [InlineData("B_BUTTON")]
    [InlineData("L_BUTTON")]
    [InlineData("R_BUTTON")]
    [InlineData("DPAD")]
    [InlineData("SPEECH_BUBBLE")]
    [InlineData("STAR_BULLET")]
    [InlineData("POKE")]
    [InlineData("ENVELOPE_OPEN")]
    [InlineData("ICON_GO")]
    public void ForTextboxKeepsIconGlyphs(string tag)
    {
        var text = DialogueFormatter.ForTextbox($"Press {{{tag}}} now");
        Assert.DoesNotContain("{" + tag + "}", text, StringComparison.OrdinalIgnoreCase);
        Assert.Contains("Press ", text, StringComparison.Ordinal);
        Assert.Contains(" now", text, StringComparison.Ordinal);
        Assert.Contains(text, DialogueIcons.IsIcon);
    }

    [Fact]
    public void StartAndSelectButtonsExpandToTwoIconCells()
    {
        var start = DialogueFormatter.ForTextbox("{START_BUTTON}");
        var select = DialogueFormatter.ForTextbox("{SELECT_BUTTON}");
        Assert.Equal(2, start.Count(DialogueIcons.IsIcon));
        Assert.Equal(2, select.Count(DialogueIcons.IsIcon));
    }

    [Fact]
    public void PixelFontDrawsIconInk()
    {
        var font = PixelFont.Load();
        var icon = DialogueIcons.Resolve("A_BUTTON");
        Assert.True(font.Advance(icon[0]) >= 8);

        var img = new RgbaImage(32, 16, new byte[32 * 16 * 4]);
        font.Draw(img, icon, 2, 2, 0xF8, 0xF8, 0xF8);
        Assert.Contains(img.Pixels, b => b > 200);
    }

    [Fact]
    public void ForTextboxKeepsCenterAlignMarker()
    {
        var text = DialogueFormatter.ForTextbox("{CENTER_ALIGN}Hello");
        Assert.StartsWith("{CENTER_ALIGN}", text, StringComparison.OrdinalIgnoreCase);
        Assert.Equal("Hello", DialogueRuns.PlainText(text));
        Assert.True(DialogueRuns.IsCentered(text));
    }

    [Fact]
    public void CenteredPreviewShiftsInkTowardBoxCenter()
    {
        var left = DialogueTextPreview.Render("Hi", scale: 1);
        var centered = DialogueTextPreview.Render("{CENTER_ALIGN}Hi", scale: 1);

        Assert.True(InkCentroidX(centered) > InkCentroidX(left) + 4,
            $"expected centered ink further right (left={InkCentroidX(left)}, center={InkCentroidX(centered)})");
    }

    [Fact]
    public void MoveXPositionByMacrosBecomeMoveXTags()
    {
        var text = DialogueFormatter.ForTextbox("{MOVE_X_POSITION_BY_64}Hi");
        Assert.Contains("{MOVE_X 64}", text, StringComparison.OrdinalIgnoreCase);
        Assert.Equal(64, DialogueRuns.LeadingMoveX(text));
        Assert.Equal("Hi", DialogueRuns.PlainText(text));
    }

    [Fact]
    public void SubstitutionsUsePlaceholdersByDefault()
    {
        var text = DialogueFormatter.ForTextbox(
            "{VALUE_0} {FRIEND_AREA} {MOVE_ITEM_1} {TEAM_NAME}");
        Assert.Equal("0 [Friend Area] [Item] Team", DialogueRuns.PlainText(text));
    }

    [Fact]
    public void SubstitutionsUseFormatContextWhenProvided()
    {
        var ctx = new DialogueFormatContext(
            teamName: "Aqua",
            values: ["42"],
            friendArea: "Beach Cave",
            items: ["Oran Berry", "Apple"]);

        var text = DialogueFormatter.ForTextbox(
            "{VALUE_0}/{FRIEND_AREA}/{MOVE_ITEM_1}/{TEAM_NAME}", ctx);
        Assert.Equal("42/Beach Cave/Apple/Aqua", DialogueRuns.PlainText(text));
    }

    [Fact]
    public void OpaqueMacrosStayStripped()
    {
        var text = DialogueFormatter.ForTextbox("{UNK_MACRO_5F_1}{WAIT_FRAMES}Hi");
        Assert.Equal("Hi", DialogueRuns.PlainText(text));
        Assert.DoesNotContain("{UNK", text, StringComparison.OrdinalIgnoreCase);
        Assert.DoesNotContain("{WAIT_FRAMES}", text, StringComparison.OrdinalIgnoreCase);
    }

    private static double InkCentroidX(RgbaImage image)
    {
        long sumX = 0;
        long count = 0;
        for (var y = 0; y < image.Height; y++)
        for (var x = 0; x < image.Width; x++)
        {
            var o = (y * image.Width + x) * 4;
            // Text/icon ink (bright), ignore navy fill / cyan border
            if (image.Pixels[o] > 180 && image.Pixels[o + 1] > 180 && image.Pixels[o + 2] > 180)
            {
                sumX += x;
                count++;
            }
        }
        Assert.True(count > 0, "expected bright ink pixels");
        return sumX / (double)count;
    }
}
