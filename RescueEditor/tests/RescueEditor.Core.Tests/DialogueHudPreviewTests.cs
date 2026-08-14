using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class DialogueHudPreviewTests
{
    [Fact]
    public void RenderMatchesGbaScreenAndBoxPlacement()
    {
        var image = DialogueHudPreview.Render("Hello", scale: 1);
        Assert.Equal(ScenePlaySession.CameraWidth, image.Width);
        Assert.Equal(ScenePlaySession.CameraHeight, image.Height);
        AssertPixel(image, GbaDialogueHud.BoxX, GbaDialogueHud.BoxY, 0x88, 0xA8, 0xE0);
        AssertPixel(image, GbaDialogueHud.BoxX + 4, GbaDialogueHud.BoxY + 4, 0x14, 0x1C, 0x40);
    }

    [Fact]
    public void RenderPlacesPortraitAtRetailTile()
    {
        var face = new RgbaImage(40, 40, new byte[40 * 40 * 4]);
        for (var i = 0; i < face.Pixels.Length; i += 4)
        {
            face.Pixels[i] = 10;
            face.Pixels[i + 1] = 200;
            face.Pixels[i + 2] = 30;
            face.Pixels[i + 3] = 255;
        }

        var image = DialogueHudPreview.Render(
            "Hi",
            speakerLabel: "Bulbasaur",
            face: face,
            placement: 0,
            scale: 1);

        var (x, y, _) = GbaDialogueHud.ResolvePortraitPlacement(0);
        AssertPixel(image, x, y, 10, 200, 30);
        AssertPixel(image, x - 2, y - 2, 0x88, 0xA8, 0xE0);
        Assert.True(y + 40 <= GbaDialogueHud.BoxY || y < GbaDialogueHud.BoxY + 8,
            "Bottom portraits should sit on the textbox, not below the screen.");
    }

    [Fact]
    public void RenderDefaultsToTwoXScale()
    {
        var image = DialogueHudPreview.Render("Hello");
        Assert.Equal(ScenePlaySession.CameraWidth * DialogueHudPreview.DefaultScale, image.Width);
        Assert.Equal(ScenePlaySession.CameraHeight * DialogueHudPreview.DefaultScale, image.Height);
    }

    private static void AssertPixel(RgbaImage image, int x, int y, byte r, byte g, byte b)
    {
        var o = (y * image.Width + x) * 4;
        Assert.Equal(r, image.Pixels[o]);
        Assert.Equal(g, image.Pixels[o + 1]);
        Assert.Equal(b, image.Pixels[o + 2]);
    }
}
