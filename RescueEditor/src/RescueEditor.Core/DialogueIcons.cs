namespace RescueEditor.Core;

/// <summary>
/// Private-use icon glyphs for dialogue macros that Charmap decodes as <c>{TAG}</c>.
/// </summary>
public static class DialogueIcons
{
    public const char First = '\uE100';
    public const int Count = 48;

    private static readonly Dictionary<string, string> TagToChars =
        new(StringComparer.OrdinalIgnoreCase)
        {
            ["SPEECH_BUBBLE"] = Char(0),
            ["POKE"] = Char(1) + Char(2),
            ["UNK_95"] = Char(3),
            ["A_BUTTON"] = Char(4),
            ["B_BUTTON"] = Char(5),
            ["L_BUTTON"] = Char(6),
            ["R_BUTTON"] = Char(7),
            ["DPAD"] = Char(8),
            ["START_BUTTON"] = Char(9) + Char(10),
            ["SELECT_BUTTON"] = Char(11) + Char(12),
            ["STAR_BULLET"] = Char(13),
            ["ICON_BLANK"] = Char(14),
            ["ICON_SET"] = Char(15),
            ["ICON_GO"] = Char(16),
            ["ICON_NEWS"] = Char(17),
            ["ICON_STICKY"] = Char(18),
            ["ENVELOPE_OPEN"] = Char(19),
            ["ENVELOPE_CLOSED"] = Char(20),
            ["THANK_YOU_MAIL"] = Char(21),
            ["TM"] = Char(22),
            ["ORB"] = Char(23),
            ["HEART_RED_TINY"] = Char(24),
            ["HEART_RED_SMALL"] = Char(24),
            ["HEART_RED_MEDIUM"] = Char(24),
            ["HEART_RED_LARGE"] = Char(24),
            ["HEART_YELLOW_TINY"] = Char(25),
            ["HEART_YELLOW_SMALL"] = Char(25),
            ["HEART_YELLOW_MEDIUM"] = Char(25),
            ["HEART_YELLOW_LARGE"] = Char(25),
            ["POWER_STAR_HALF"] = Char(26),
            ["NDS_Y_BUTTON"] = Char(27),
        };

    // 12×12 bit packs (row-major, MSB = left). Advance is typically 11.
    private static readonly (byte[] Bits, int Advance)[] Glyphs = BuildGlyphs();

    public static bool IsIcon(char ch) =>
        ch >= First && ch < First + Count;

    public static bool TryResolve(string tagName, out string replacement) =>
        TagToChars.TryGetValue(tagName, out replacement!);

    public static string Resolve(string tagName) =>
        TagToChars.TryGetValue(tagName, out var chars) ? chars : string.Empty;

    public static bool IsIconTag(string tagName) =>
        TagToChars.ContainsKey(tagName);

    public static int Advance(char ch)
    {
        if (!TryGet(ch, out var glyph))
            return 0;
        return glyph.Advance;
    }

    public static void Draw(
        RgbaImage image,
        char ch,
        int x,
        int y,
        byte r,
        byte g,
        byte b,
        bool shadow = true)
    {
        if (!TryGet(ch, out var glyph))
            return;

        for (var row = 0; row < 12; row++)
        {
            var bits = glyph.Bits[row];
            for (var col = 0; col < 12; col++)
            {
                if ((bits & (1 << (11 - col))) == 0)
                    continue;
                if (shadow)
                    Put(image, x + col + 1, y + row + 1, 0, 0, 0, 160);
                Put(image, x + col, y + row, r, g, b, 255);
            }
        }
    }

    private static bool TryGet(char ch, out (byte[] Bits, int Advance) glyph)
    {
        glyph = default;
        if (!IsIcon(ch))
            return false;
        glyph = Glyphs[ch - First];
        return true;
    }

    private static string Char(int index) => ((char)(First + index)).ToString();

    private static (byte[] Bits, int Advance)[] BuildGlyphs()
    {
        var list = new (byte[] Bits, int Advance)[Count];
        list[0] = (Pack(Bubble()), 11);
        list[1] = (Pack(LetterBlock('P')), 11);
        list[2] = (Pack(LetterBlock('k')), 11);
        list[3] = (Pack(LetterBlock('?')), 11);
        list[4] = (Pack(LetterBlock('A')), 11);
        list[5] = (Pack(LetterBlock('B')), 11);
        list[6] = (Pack(LetterBlock('L')), 11);
        list[7] = (Pack(LetterBlock('R')), 11);
        list[8] = (Pack(Dpad()), 11);
        list[9] = (Pack(LetterBlock('S')), 11);
        list[10] = (Pack(LetterBlock('T')), 11);
        list[11] = (Pack(LetterBlock('s')), 11);
        list[12] = (Pack(LetterBlock('e')), 11);
        list[13] = (Pack(Star()), 11);
        list[14] = (Pack(BoxOutline()), 11);
        list[15] = (Pack(LetterBlock('E')), 11);
        list[16] = (Pack(LetterBlock('G')), 11);
        list[17] = (Pack(LetterBlock('N')), 11);
        list[18] = (Pack(LetterBlock('!')), 11);
        list[19] = (Pack(Envelope(open: true)), 11);
        list[20] = (Pack(Envelope(open: false)), 11);
        list[21] = (Pack(LetterBlock('T')), 11);
        list[22] = (Pack(LetterBlock('M')), 11);
        list[23] = (Pack(Orb()), 11);
        list[24] = (Pack(Heart()), 10);
        list[25] = (Pack(Heart()), 10);
        list[26] = (Pack(StarHalf()), 6);
        list[27] = (Pack(LetterBlock('Y')), 11);
        for (var i = 0; i < Count; i++)
        {
            if (list[i].Bits is null)
                list[i] = (Pack(BoxOutline()), 11);
        }
        return list;
    }

    private static byte[] Pack(bool[,] pixels)
    {
        var bits = new byte[12];
        for (var row = 0; row < 12; row++)
        {
            byte b = 0;
            for (var col = 0; col < 12; col++)
            {
                if (pixels[row, col])
                    b |= (byte)(1 << (11 - col));
            }
            bits[row] = b;
        }
        return bits;
    }

    private static bool[,] LetterBlock(char label)
    {
        var p = BoxOutline();
        // Tiny 3×5 letter hints inside the button.
        switch (char.ToUpperInvariant(label))
        {
            case 'A':
                Set(p, 4, 5); Set(p, 4, 6); Set(p, 5, 4); Set(p, 5, 7);
                Set(p, 6, 4); Set(p, 6, 5); Set(p, 6, 6); Set(p, 6, 7);
                Set(p, 7, 4); Set(p, 7, 7);
                break;
            case 'B':
                Set(p, 4, 4); Set(p, 4, 5); Set(p, 4, 6);
                Set(p, 5, 4); Set(p, 5, 7);
                Set(p, 6, 4); Set(p, 6, 5); Set(p, 6, 6);
                Set(p, 7, 4); Set(p, 7, 7);
                Set(p, 8, 4); Set(p, 8, 5); Set(p, 8, 6);
                break;
            case 'L':
                Set(p, 4, 4); Set(p, 5, 4); Set(p, 6, 4); Set(p, 7, 4);
                Set(p, 8, 4); Set(p, 8, 5); Set(p, 8, 6);
                break;
            case 'R':
                Set(p, 4, 4); Set(p, 4, 5); Set(p, 4, 6);
                Set(p, 5, 4); Set(p, 5, 7);
                Set(p, 6, 4); Set(p, 6, 5); Set(p, 6, 6);
                Set(p, 7, 4); Set(p, 7, 7);
                Set(p, 8, 4); Set(p, 8, 7);
                break;
            case 'S':
                Set(p, 4, 5); Set(p, 4, 6); Set(p, 4, 7);
                Set(p, 5, 4); Set(p, 6, 5); Set(p, 6, 6);
                Set(p, 7, 7); Set(p, 8, 4); Set(p, 8, 5); Set(p, 8, 6);
                break;
            case 'T':
                Set(p, 4, 4); Set(p, 4, 5); Set(p, 4, 6); Set(p, 4, 7);
                Set(p, 5, 5); Set(p, 5, 6); Set(p, 6, 5); Set(p, 6, 6);
                Set(p, 7, 5); Set(p, 7, 6); Set(p, 8, 5); Set(p, 8, 6);
                break;
            case 'E':
                Set(p, 4, 4); Set(p, 4, 5); Set(p, 4, 6); Set(p, 4, 7);
                Set(p, 5, 4); Set(p, 6, 4); Set(p, 6, 5); Set(p, 6, 6);
                Set(p, 7, 4); Set(p, 8, 4); Set(p, 8, 5); Set(p, 8, 6); Set(p, 8, 7);
                break;
            case 'G':
                Set(p, 4, 5); Set(p, 4, 6); Set(p, 4, 7);
                Set(p, 5, 4); Set(p, 6, 4); Set(p, 6, 6); Set(p, 6, 7);
                Set(p, 7, 4); Set(p, 7, 7); Set(p, 8, 5); Set(p, 8, 6); Set(p, 8, 7);
                break;
            case 'N':
                Set(p, 4, 4); Set(p, 4, 7); Set(p, 5, 4); Set(p, 5, 5); Set(p, 5, 7);
                Set(p, 6, 4); Set(p, 6, 6); Set(p, 6, 7);
                Set(p, 7, 4); Set(p, 7, 7); Set(p, 8, 4); Set(p, 8, 7);
                break;
            case 'M':
                Set(p, 4, 4); Set(p, 4, 7); Set(p, 5, 4); Set(p, 5, 5); Set(p, 5, 6); Set(p, 5, 7);
                Set(p, 6, 4); Set(p, 6, 7); Set(p, 7, 4); Set(p, 7, 7); Set(p, 8, 4); Set(p, 8, 7);
                break;
            case 'Y':
                Set(p, 4, 4); Set(p, 4, 7); Set(p, 5, 5); Set(p, 5, 6);
                Set(p, 6, 5); Set(p, 6, 6); Set(p, 7, 5); Set(p, 7, 6); Set(p, 8, 5); Set(p, 8, 6);
                break;
            case 'P':
                Set(p, 4, 4); Set(p, 4, 5); Set(p, 4, 6);
                Set(p, 5, 4); Set(p, 5, 7); Set(p, 6, 4); Set(p, 6, 5); Set(p, 6, 6);
                Set(p, 7, 4); Set(p, 8, 4);
                break;
            case 'K':
                Set(p, 4, 4); Set(p, 4, 7); Set(p, 5, 4); Set(p, 5, 6);
                Set(p, 6, 4); Set(p, 6, 5); Set(p, 7, 4); Set(p, 7, 6);
                Set(p, 8, 4); Set(p, 8, 7);
                break;
            case '?':
                Set(p, 4, 5); Set(p, 4, 6); Set(p, 5, 4); Set(p, 5, 7);
                Set(p, 6, 6); Set(p, 7, 5); Set(p, 8, 5);
                break;
            case '!':
                Set(p, 4, 5); Set(p, 5, 5); Set(p, 6, 5); Set(p, 8, 5);
                break;
            default:
                Set(p, 5, 5); Set(p, 5, 6); Set(p, 6, 5); Set(p, 6, 6);
                break;
        }
        return p;
    }

    private static bool[,] BoxOutline()
    {
        var p = new bool[12, 12];
        for (var i = 2; i <= 9; i++)
        {
            Set(p, 2, i); Set(p, 9, i); Set(p, i, 2); Set(p, i, 9);
        }
        return p;
    }

    private static bool[,] Bubble()
    {
        var p = BoxOutline();
        Set(p, 10, 3); Set(p, 10, 4); Set(p, 11, 2);
        return p;
    }

    private static bool[,] Dpad()
    {
        var p = new bool[12, 12];
        for (var i = 4; i <= 7; i++)
        {
            Set(p, 2, i); Set(p, 3, i); Set(p, 8, i); Set(p, 9, i);
            Set(p, i, 2); Set(p, i, 3); Set(p, i, 8); Set(p, i, 9);
        }
        for (var r = 4; r <= 7; r++)
        for (var c = 4; c <= 7; c++)
            Set(p, r, c);
        return p;
    }

    private static bool[,] Star()
    {
        var p = new bool[12, 12];
        Set(p, 2, 5); Set(p, 3, 5); Set(p, 4, 3); Set(p, 4, 4); Set(p, 4, 5); Set(p, 4, 6); Set(p, 4, 7);
        Set(p, 5, 4); Set(p, 5, 5); Set(p, 5, 6);
        Set(p, 6, 3); Set(p, 6, 5); Set(p, 6, 7);
        Set(p, 7, 2); Set(p, 7, 5); Set(p, 7, 8);
        Set(p, 8, 5);
        return p;
    }

    private static bool[,] StarHalf()
    {
        var p = new bool[12, 12];
        Set(p, 2, 2); Set(p, 3, 2); Set(p, 4, 1); Set(p, 4, 2); Set(p, 4, 3);
        Set(p, 5, 2); Set(p, 5, 3); Set(p, 6, 1); Set(p, 6, 2); Set(p, 7, 2);
        return p;
    }

    private static bool[,] Envelope(bool open)
    {
        var p = BoxOutline();
        Set(p, 3, 3); Set(p, 3, 8); Set(p, 4, 4); Set(p, 4, 7); Set(p, 5, 5); Set(p, 5, 6);
        if (open)
        {
            Set(p, 2, 5); Set(p, 2, 6);
        }
        return p;
    }

    private static bool[,] Orb()
    {
        var p = new bool[12, 12];
        for (var r = 3; r <= 8; r++)
        for (var c = 3; c <= 8; c++)
        {
            var dx = r - 5.5; var dy = c - 5.5;
            if (dx * dx + dy * dy <= 9)
                Set(p, r, c);
        }
        return p;
    }

    private static bool[,] Heart()
    {
        var p = new bool[12, 12];
        Set(p, 3, 3); Set(p, 3, 4); Set(p, 3, 6); Set(p, 3, 7);
        Set(p, 4, 2); Set(p, 4, 5); Set(p, 4, 8);
        Set(p, 5, 2); Set(p, 5, 8);
        Set(p, 6, 3); Set(p, 6, 7);
        Set(p, 7, 4); Set(p, 7, 6);
        Set(p, 8, 5);
        return p;
    }

    private static void Set(bool[,] p, int row, int col)
    {
        if (row is >= 0 and < 12 && col is >= 0 and < 12)
            p[row, col] = true;
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
