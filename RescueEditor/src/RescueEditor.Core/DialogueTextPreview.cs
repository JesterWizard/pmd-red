namespace RescueEditor.Core;

/// <summary>
/// Renders decoded PMD dialogue (charmap macros) into an in-game textbox preview image.
/// </summary>
public static class DialogueTextPreview
{
    public const int PageGap = 4;
    public const int DefaultScale = 2;

    /// <summary>
    /// Format <paramref name="source"/> into textbox pages and draw each page in a stacked
    /// navy dialogue box (retail border + PMD2 font + color runs).
    /// </summary>
    public static RgbaImage Render(
        string? source,
        DialogueFormatContext? context = null,
        int scale = DefaultScale)
    {
        if (scale < 1)
            throw new ArgumentOutOfRangeException(nameof(scale));

        var pages = DialogueFormatter.SplitPages(source, context);
        if (pages.Count == 0)
            pages = [string.Empty];

        var font = PixelFont.Load();
        var height = pages.Count * GbaDialogueHud.BoxH + Math.Max(0, pages.Count - 1) * PageGap;
        var output = new RgbaImage(GbaDialogueHud.BoxW, height, new byte[GbaDialogueHud.BoxW * height * 4]);

        for (var i = 0; i < pages.Count; i++)
        {
            var pageImage = RenderPage(font, pages[i]);
            var destY = i * (GbaDialogueHud.BoxH + PageGap);
            Blit(output, pageImage, 0, destY);
        }

        return scale == 1 ? output : PortraitSheetPresentation.ScaleNearest(output, scale);
    }

    public static byte[] RenderPng(
        string? source,
        DialogueFormatContext? context = null,
        int scale = DefaultScale) =>
        Render(source, context, scale).ToPng();

    private static RgbaImage RenderPage(PixelFont font, string pageText)
    {
        // Draw into a full camera buffer so GbaDialogueHud layout math stays at BoxX/BoxY,
        // then crop to the textbox region for the editor preview.
        var camera = new RgbaImage(
            ScenePlaySession.CameraWidth,
            ScenePlaySession.CameraHeight,
            new byte[ScenePlaySession.CameraWidth * ScenePlaySession.CameraHeight * 4]);

        GbaDialogueHud.Draw(
            camera,
            font,
            PlayDialogueMode.Box,
            string.IsNullOrEmpty(pageText) ? " " : pageText,
            speakerLabel: null,
            showSpeakerIcon: false,
            quietIcon: false,
            waitingForAdvance: false,
            animTick: 0,
            portraits: null,
            atlas: null,
            fadeAlpha: 0);

        return Crop(
            camera,
            GbaDialogueHud.BoxX,
            GbaDialogueHud.BoxY,
            GbaDialogueHud.BoxW,
            GbaDialogueHud.BoxH);
    }

    private static RgbaImage Crop(RgbaImage src, int x, int y, int w, int h)
    {
        var pixels = new byte[w * h * 4];
        for (var row = 0; row < h; row++)
        {
            var srcY = y + row;
            if (srcY < 0 || srcY >= src.Height)
                continue;
            for (var col = 0; col < w; col++)
            {
                var srcX = x + col;
                if (srcX < 0 || srcX >= src.Width)
                    continue;
                var srcOff = (srcY * src.Width + srcX) * 4;
                var dstOff = (row * w + col) * 4;
                pixels[dstOff] = src.Pixels[srcOff];
                pixels[dstOff + 1] = src.Pixels[srcOff + 1];
                pixels[dstOff + 2] = src.Pixels[srcOff + 2];
                pixels[dstOff + 3] = src.Pixels[srcOff + 3];
            }
        }
        return new RgbaImage(w, h, pixels);
    }

    private static void Blit(RgbaImage dest, RgbaImage src, int dx, int dy)
    {
        for (var row = 0; row < src.Height; row++)
        for (var col = 0; col < src.Width; col++)
        {
            var x = dx + col;
            var y = dy + row;
            if (x < 0 || y < 0 || x >= dest.Width || y >= dest.Height)
                continue;
            var srcOff = (row * src.Width + col) * 4;
            var dstOff = (y * dest.Width + x) * 4;
            dest.Pixels[dstOff] = src.Pixels[srcOff];
            dest.Pixels[dstOff + 1] = src.Pixels[srcOff + 1];
            dest.Pixels[dstOff + 2] = src.Pixels[srcOff + 2];
            dest.Pixels[dstOff + 3] = src.Pixels[srcOff + 3];
        }
    }
}
