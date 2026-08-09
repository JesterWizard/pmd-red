namespace RescueEditor.Core;

public enum PlayDialogueMode
{
    None,
    /// <summary>Normal navy textbox (MSG_NPC / MSG_INSTANT / MSG_LETTER).</summary>
    Box,
    /// <summary>Textbox with thought-bubble icon (MSG_QUIET).</summary>
    Quiet,
    /// <summary>Black screen, centered white text (MSG_ON_BG*).</summary>
    OnBackground,
}

/// <summary>Retail-style dialogue + portrait chrome for the 240×160 Scene Play view.</summary>
public static class GbaDialogueHud
{
    // Window template: pos (2,15) size 26×5 tiles → pixels.
    public const int BoxX = 16;
    public const int BoxY = 120;
    public const int BoxW = 208;
    public const int BoxH = 40;

    // Cyan border / navy fill matched to emulator screenshots.
    private static readonly (byte R, byte G, byte B) Border = (0x88, 0xA8, 0xE0);
    private static readonly (byte R, byte G, byte B) Fill = (0x14, 0x1C, 0x40);
    private static readonly (byte R, byte G, byte B) Yellow = (0xF8, 0xF0, 0x40);
    private static readonly (byte R, byte G, byte B) White = (0xF8, 0xF8, 0xF8);

    // Portrait placements from src/data/portrait_placements.h (tile units × 8).
    private static readonly (int X, int Y, bool Flip)[] PortraitTiles =
    [
        (2, 8, false),  // 0 LEFT_BOTTOM_1
        (12, 5, false), // 1 CENTERLEFT_CENTER
        (2, 8, false),  // 2 LEFT_BOTTOM_2
        (23, 8, true),  // 3 RIGHT_BOTTOM_FLIP
        (7, 8, false),  // 4 MIDLEFT_BOTTOM
        (18, 8, true),  // 5 MIDRIGHT_BOTTOM_FLIP
        (13, 5, true),  // 6 CENTERRIGHT_CENTER_FLIP
        (2, 8, true),   // 7 LEFT_BOTTOM_FLIP
        (23, 8, false), // 8 RIGHT_BOTTOM
        (7, 8, true),   // 9 MIDLEFT_BOTTOM_FLIP
        (18, 8, false), // 10 MIDRIGHT_BOTTOM
        (12, 1, false), // 11 CENTERLEFT_TOP
        (2, 2, false),  // 12 LEFT_MIDTOP
        (23, 2, true),  // 13 RIGHT_MIDTOP_FLIP
        (7, 1, false),  // 14 MIDLEFT_TOP
        (18, 1, true),  // 15 MIDRIGHT_TOP_FLIP
        (13, 1, true),  // 16 CENTERRIGHT_TOP_FLIP
        (2, 2, true),   // 17 LEFT_MIDTOP_FLIP
        (23, 2, false), // 18 RIGHT_MIDTOP
        (7, 1, true),   // 19 MIDLEFT_TOP_FLIP
        (18, 1, false), // 20 MIDRIGHT_TOP
    ];

    public static void Draw(
        RgbaImage camera,
        PixelFont font,
        PlayDialogueMode mode,
        string? pageText,
        string? speakerLabel, // null = none; empty path uses speech icon via flag
        bool showSpeakerIcon,
        bool quietIcon,
        bool waitingForAdvance,
        int animTick,
        IEnumerable<PlayPortraitSlot>? portraits,
        PortraitAtlas? atlas,
        byte fadeAlpha)
    {
        if (mode == PlayDialogueMode.OnBackground)
        {
            FillRect(camera, 0, 0, camera.Width, camera.Height, 0, 0, 0, 255);
            DrawOnBackgroundText(camera, font, pageText, waitingForAdvance, animTick);
            return;
        }

        // Fade the world under the UI (textbox/portraits stay crisp).
        if (fadeAlpha > 0)
            ApplyFade(camera, fadeAlpha);

        if (portraits is not null && atlas is not null)
            DrawPortraits(camera, portraits, atlas);

        if ((mode is PlayDialogueMode.Box or PlayDialogueMode.Quiet) &&
            !string.IsNullOrEmpty(pageText))
        {
            DrawWindow(camera, BoxX, BoxY, BoxW, BoxH);
            DrawBoxContents(camera, font, pageText, speakerLabel, showSpeakerIcon, quietIcon || mode == PlayDialogueMode.Quiet);
            if (waitingForAdvance)
                DrawContinueArrow(camera, BoxX + BoxW / 2, BoxY + BoxH - 2, animTick);
        }
    }

    public static (int X, int Y, bool Flip) ResolvePortraitPlacement(int placement)
    {
        if (placement < 0 || placement >= PortraitTiles.Length)
            return (2 * 8, 8 * 8, false);
        var (tx, ty, flip) = PortraitTiles[placement];
        return (tx * 8, ty * 8, flip);
    }

    private static void DrawOnBackgroundText(
        RgbaImage camera,
        PixelFont font,
        string? pageText,
        bool waiting,
        int tick)
    {
        if (string.IsNullOrEmpty(pageText))
            return;

        var lines = pageText.Replace("\r", "").Split('\n');
        var lineH = 14;
        var totalH = lines.Length * lineH;
        var y0 = Math.Max(8, (camera.Height - totalH) / 2 - 8);
        for (var i = 0; i < lines.Length; i++)
        {
            var line = lines[i].Trim();
            if (line.Length == 0)
                continue;
            font.DrawCentered(camera, line, camera.Width / 2, y0 + i * lineH, White.R, White.G, White.B);
        }

        if (waiting)
            DrawContinueArrow(camera, camera.Width / 2, camera.Height - 16, tick);
    }

    private static void DrawBoxContents(
        RgbaImage camera,
        PixelFont font,
        string pageText,
        string? speakerLabel,
        bool speechIcon,
        bool thoughtIcon)
    {
        var bodyLeft = BoxX + 8;
        var textY = BoxY + 6;
        var maxWidth = BoxW - 16;

        if (thoughtIcon)
        {
            DrawThoughtIcon(camera, bodyLeft, textY + 2);
            bodyLeft += 14;
            maxWidth -= 14;
        }
        else if (speechIcon && speakerLabel is null)
        {
            DrawSpeechIcon(camera, bodyLeft, textY + 2, yellow: true);
            bodyLeft += 14;
            maxWidth -= 14;
        }

        var firstLineX = bodyLeft;
        if (!string.IsNullOrEmpty(speakerLabel) && !thoughtIcon)
        {
            var label = speakerLabel.EndsWith(':') ? speakerLabel : speakerLabel + ":";
            font.Draw(camera, label, bodyLeft, textY, Yellow.R, Yellow.G, Yellow.B);
            firstLineX = bodyLeft + font.Measure(label) + 4;
        }

        DrawWrapped(
            camera, font, pageText.TrimStart(),
            firstLineX, bodyLeft, textY, maxWidth,
            White.R, White.G, White.B);
    }

    private static void DrawWrapped(
        RgbaImage image,
        PixelFont font,
        string text,
        int firstLineX,
        int bodyLeft,
        int y,
        int maxWidth,
        byte r, byte g, byte b)
    {
        // First line may sit after the speaker name; every NEW_LINE returns to bodyLeft.
        var lines = text.Replace("\r", "").Split('\n');
        var cy = y;
        var lineIndex = 0;
        foreach (var raw in lines)
        {
            var line = raw.TrimStart();
            var x = lineIndex == 0 ? firstLineX : bodyLeft;
            var widthBudget = maxWidth - (x - bodyLeft);
            if (widthBudget < 8)
                widthBudget = maxWidth;
            while (line.Length > 0 && cy < BoxY + BoxH - 10)
            {
                var fit = FitWidth(font, line, widthBudget);
                var chunk = line[..fit].TrimEnd();
                font.Draw(image, chunk, x, cy, r, g, b);
                line = line[fit..].TrimStart();
                cy += 12;
                lineIndex++;
                x = bodyLeft;
                widthBudget = maxWidth;
                if (fit == 0)
                    break;
            }
            if (raw.Length == 0)
            {
                cy += 12;
                lineIndex++;
            }
        }
    }

    private static int FitWidth(PixelFont font, string text, int maxWidth)
    {
        if (font.Measure(text) <= maxWidth)
            return text.Length;

        var best = 0;
        var w = 0;
        for (var i = 0; i < text.Length; i++)
        {
            w += font.Advance(text[i]);
            if (w > maxWidth)
                break;
            best = i + 1;
            if (text[i] == ' ')
                best = i + 1;
        }
        return Math.Max(1, best);
    }

    private static void DrawPortraits(
        RgbaImage camera,
        IEnumerable<PlayPortraitSlot> portraits,
        PortraitAtlas atlas)
    {
        foreach (var slot in portraits)
        {
            var portrait = atlas.TryGet(slot.Species, slot.Emotion);
            if (portrait is null)
                continue;

            var (x, y, _) = ResolvePortraitPlacement(slot.Placement);
            var flip = slot.Flip;
            // Frame: 5×5 tiles = 40×40 content, border ~2px like WINDOW_TYPE_7.
            DrawWindow(camera, x - 2, y - 2, portrait.Width + 4, portrait.Height + 4);
            if (flip)
                BlitFlipped(camera, portrait, x, y);
            else
                SceneCompositor.BlitSpritePublic(camera, portrait, x, y);
        }
    }

    public static void DrawWindow(RgbaImage image, int x, int y, int w, int h)
    {
        // Outer highlight
        FillRect(image, x, y, w, h, Border.R, Border.G, Border.B, 255);
        // Inner navy
        FillRect(image, x + 2, y + 2, Math.Max(0, w - 4), Math.Max(0, h - 4), Fill.R, Fill.G, Fill.B, 255);
        // Soft inner line
        DrawHLine(image, x + 2, y + 2, w - 4, 0x28, 0x38, 0x60);
        DrawHLine(image, x + 2, y + h - 3, w - 4, 0x28, 0x38, 0x60);
    }

    public static void DrawContinueArrow(RgbaImage image, int cx, int y, int tick)
    {
        var bob = (tick / 8) % 2;
        var top = y - 4 + bob;
        // Down-pointing triangle
        for (var row = 0; row < 5; row++)
        {
            var half = row;
            for (var dx = -half; dx <= half; dx++)
                Put(image, cx + dx, top + row, White.R, White.G, White.B, 255);
        }
    }

    public static void DrawSpeechIcon(RgbaImage image, int x, int y, bool yellow)
    {
        var (r, g, b) = yellow ? Yellow : White;
        // Rounded bubble
        FillRect(image, x + 1, y, 9, 7, r, g, b, 255);
        FillRect(image, x, y + 1, 11, 5, r, g, b, 255);
        // Tail
        Put(image, x + 2, y + 7, r, g, b, 255);
        Put(image, x + 1, y + 8, r, g, b, 255);
        Put(image, x, y + 9, r, g, b, 255);
    }

    public static void DrawThoughtIcon(RgbaImage image, int x, int y)
    {
        var (r, g, b) = White;
        FillRect(image, x + 2, y, 8, 6, r, g, b, 255);
        FillRect(image, x + 1, y + 1, 10, 4, r, g, b, 255);
        Put(image, x + 8, y + 7, r, g, b, 255);
        Put(image, x + 10, y + 9, r, g, b, 255);
    }

    public static void DrawDropShadow(RgbaImage image, int cx, int cy)
    {
        // Soft oval under feet.
        for (var dy = -2; dy <= 2; dy++)
        for (var dx = -6; dx <= 6; dx++)
        {
            var v = (dx * dx) / 36.0 + (dy * dy) / 4.0;
            if (v > 1.0) continue;
            var a = (byte)(110 * (1.0 - v));
            Put(image, cx + dx, cy + dy, 0, 0, 0, a);
        }
    }

    private static void ApplyFade(RgbaImage image, byte alpha)
    {
        for (var i = 0; i < image.Pixels.Length; i += 4)
        {
            var inv = 255 - alpha;
            image.Pixels[i] = (byte)((image.Pixels[i] * inv) / 255);
            image.Pixels[i + 1] = (byte)((image.Pixels[i + 1] * inv) / 255);
            image.Pixels[i + 2] = (byte)((image.Pixels[i + 2] * inv) / 255);
        }
    }

    private static void FillRect(RgbaImage image, int x, int y, int w, int h, byte r, byte g, byte b, byte a)
    {
        for (var row = 0; row < h; row++)
        for (var col = 0; col < w; col++)
            Put(image, x + col, y + row, r, g, b, a);
    }

    private static void DrawHLine(RgbaImage image, int x, int y, int w, byte r, byte g, byte b)
    {
        for (var i = 0; i < w; i++)
            Put(image, x + i, y, r, g, b, 255);
    }

    private static void Put(RgbaImage image, int x, int y, byte r, byte g, byte b, byte a)
    {
        if (x < 0 || y < 0 || x >= image.Width || y >= image.Height)
            return;
        var off = (y * image.Width + x) * 4;
        if (a >= 250)
        {
            image.Pixels[off] = r;
            image.Pixels[off + 1] = g;
            image.Pixels[off + 2] = b;
            image.Pixels[off + 3] = 255;
            return;
        }
        var inv = 255 - a;
        image.Pixels[off] = (byte)((image.Pixels[off] * inv + r * a) / 255);
        image.Pixels[off + 1] = (byte)((image.Pixels[off + 1] * inv + g * a) / 255);
        image.Pixels[off + 2] = (byte)((image.Pixels[off + 2] * inv + b * a) / 255);
        image.Pixels[off + 3] = 255;
    }

    private static void BlitFlipped(RgbaImage dest, RgbaImage src, int x, int y)
    {
        for (var row = 0; row < src.Height; row++)
        for (var col = 0; col < src.Width; col++)
        {
            var sx = src.Width - 1 - col;
            var srcOff = (row * src.Width + sx) * 4;
            var a = src.Pixels[srcOff + 3];
            if (a == 0) continue;
            Put(dest, x + col, y + row,
                src.Pixels[srcOff], src.Pixels[srcOff + 1], src.Pixels[srcOff + 2], a);
        }
    }
}
