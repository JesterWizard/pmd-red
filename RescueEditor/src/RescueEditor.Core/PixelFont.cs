namespace RescueEditor.Core;

/// <summary>GBA-style text using packed glyphs from <c>pmd2_font_data.h</c>.</summary>
public sealed class PixelFont
{
    public const int GlyphRows = 12;
    public const int GlyphCols = 12;

    private static readonly PixelFont Instance = new();

    public static PixelFont Load(string? repositoryRoot = null) => Instance;

    public int Measure(string text) => Measure(text, shrink: 1);

    public int Measure(string text, int shrink)
    {
        shrink = Math.Max(1, shrink);
        var w = 0;
        foreach (var ch in text)
        {
            if (ch is '\n' or '\r')
                continue;
            w += (Advance(ch) + shrink - 1) / shrink;
        }
        return w;
    }

    public int Advance(char ch)
    {
        ch = NormalizeGlyph(ch);
        if (Pmd2FontData.Glyphs.TryGetValue(ch, out var g))
            return Math.Max(1, g.Advance);
        if (ch == ' ')
            return 4;
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
        bool shadow = true,
        int shrink = 1)
    {
        shrink = Math.Max(1, shrink);
        var cursor = x;
        foreach (var ch in text)
        {
            if (ch is '\n' or '\r')
                continue;
            DrawChar(image, ch, cursor, y, r, g, b, shadow, shrink);
            cursor += (Advance(ch) + shrink - 1) / shrink;
        }
    }

    public void DrawCentered(
        RgbaImage image,
        string text,
        int centerX,
        int y,
        byte r,
        byte g,
        byte b,
        int shrink = 1)
    {
        shrink = Math.Max(1, shrink);
        var w = Measure(text, shrink);
        Draw(image, text, centerX - w / 2, y, r, g, b, shadow: true, shrink);
    }

    private void DrawChar(
        RgbaImage image,
        char ch,
        int x,
        int y,
        byte r,
        byte g,
        byte b,
        bool shadow,
        int shrink = 1)
    {
        shrink = Math.Max(1, shrink);
        var drawAccent = ch is 'é' or 'É';
        ch = NormalizeGlyph(ch);
        if (!Pmd2FontData.Glyphs.TryGetValue(ch, out var glyph))
        {
            SceneCompositor.FillRectPublic(image, x + 1, y + 2 / shrink, Math.Max(1, 3 / shrink), Math.Max(1, 8 / shrink), r, g, b, 220);
            return;
        }

        var bits = glyph.Bits;
        for (var row = 0; row < GlyphRows; row += shrink)
        {
            for (var col = 0; col < GlyphCols; col += shrink)
            {
                var nibble = bits[row * GlyphCols + col];
                if (nibble == 0)
                    continue;
                var px = x + col / shrink;
                var py = y + row / shrink;
                if (shadow)
                    Put(image, px + 1, py + 1, 0, 0, 0, 160);
                Put(image, px, py, r, g, b, 255);
            }
        }

        if (drawAccent && shrink == 1)
        {
            // Acute accent above the vowel (full-size glyphs only).
            Put(image, x + 3, y + 0, r, g, b, 255);
            Put(image, x + 4, y + 0, r, g, b, 255);
            Put(image, x + 2, y + 1, r, g, b, 255);
            if (shadow)
            {
                Put(image, x + 4, y + 1, 0, 0, 0, 160);
                Put(image, x + 5, y + 1, 0, 0, 0, 160);
            }
        }
        else if (drawAccent)
        {
            Put(image, x + 1, y, r, g, b, 255);
        }
    }

    private static char NormalizeGlyph(char ch) => ch switch
    {
        'é' => 'e',
        'É' => 'E',
        'á' => 'a',
        'Á' => 'A',
        'í' => 'i',
        'Í' => 'I',
        'ó' => 'o',
        'Ó' => 'O',
        'ú' => 'u',
        'Ú' => 'U',
        'ñ' => 'n',
        'Ñ' => 'N',
        _ => ch,
    };

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
