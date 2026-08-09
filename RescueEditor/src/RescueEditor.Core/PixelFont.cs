namespace RescueEditor.Core;

/// <summary>GBA-style text using packed glyphs from <c>pmd2_font_data.h</c>.</summary>
public sealed class PixelFont
{
    public const int GlyphRows = 12;
    public const int GlyphCols = 12;

    private static readonly PixelFont Instance = new();

    public static PixelFont Load(string? repositoryRoot = null) => Instance;

    public int Measure(string text)
    {
        var w = 0;
        foreach (var ch in text)
        {
            if (ch is '\n' or '\r')
                continue;
            w += Advance(ch);
        }
        return w;
    }

    public int Advance(char ch)
    {
        if (Pmd2FontData.Glyphs.TryGetValue(ch, out var g))
            return Math.Max(1, g.Advance);
        if (ch == ' ')
            return 4;
        // Unknown: still advance so characters never stack.
        return 6;
    }

    public void Draw(
        RgbaImage image,
        string text,
        int x,
        int y,
        byte r,
        byte g,
        byte b,
        bool shadow = true)
    {
        var cursor = x;
        foreach (var ch in text)
        {
            if (ch is '\n' or '\r')
                continue;
            DrawChar(image, ch, cursor, y, r, g, b, shadow);
            cursor += Advance(ch);
        }
    }

    public void DrawCentered(
        RgbaImage image,
        string text,
        int centerX,
        int y,
        byte r,
        byte g,
        byte b)
    {
        var w = Measure(text);
        Draw(image, text, centerX - w / 2, y, r, g, b);
    }

    private void DrawChar(
        RgbaImage image,
        char ch,
        int x,
        int y,
        byte r,
        byte g,
        byte b,
        bool shadow)
    {
        if (!Pmd2FontData.Glyphs.TryGetValue(ch, out var glyph))
        {
            // Missing glyph placeholder (still advances via Advance()).
            SceneCompositor.FillRectPublic(image, x + 1, y + 2, 3, 8, r, g, b, 220);
            return;
        }

        var bits = glyph.Bits;
        for (var row = 0; row < GlyphRows; row++)
        {
            for (var col = 0; col < GlyphCols; col++)
            {
                var nibble = bits[row * GlyphCols + col];
                if (nibble == 0)
                    continue;
                if (shadow)
                    Put(image, x + col + 1, y + row + 1, 0, 0, 0, 160);
                Put(image, x + col, y + row, r, g, b, 255);
            }
        }
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
}
