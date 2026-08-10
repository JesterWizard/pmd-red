namespace RescueEditor.Core;

/// <summary>PMD sprite dumps often fill unused pixels with opaque teal chroma.</summary>
public static class GbaChroma
{
    /// <summary>Standard AX / portrait dump background (0, 127, 151).</summary>
    public static bool IsChromaKey(byte r, byte g, byte b, byte a = 255)
    {
        if (a < 8)
            return true;
        // Teal key used by graphics/ax dumps.
        if (r <= 8 && g is >= 120 and <= 135 && b is >= 145 and <= 160)
            return true;
        // Bright cyan used by some effect dumps / chroma fills.
        if (r <= 8 && g >= 248 && b >= 248)
            return true;
        // Magenta key used by some portrait/effect dumps.
        if (r >= 248 && g <= 8 && b >= 248)
            return true;
        return false;
    }

    /// <summary>Zero alpha on chroma-key pixels (in place).</summary>
    public static void KeyOut(RgbaImage image)
    {
        var px = image.Pixels;
        for (var i = 0; i < px.Length; i += 4)
        {
            if (IsChromaKey(px[i], px[i + 1], px[i + 2], px[i + 3]))
                px[i + 3] = 0;
        }
    }

    /// <summary>Last opaque row index, or -1 if empty.</summary>
    public static int ContentBottom(RgbaImage image)
    {
        for (var y = image.Height - 1; y >= 0; y--)
        {
            var row = y * image.Width * 4;
            for (var x = 0; x < image.Width; x++)
            {
                if (image.Pixels[row + x * 4 + 3] > 16)
                    return y;
            }
        }
        return -1;
    }

    /// <summary>First opaque row index, or -1 if empty.</summary>
    public static int ContentTop(RgbaImage image)
    {
        for (var y = 0; y < image.Height; y++)
        {
            var row = y * image.Width * 4;
            for (var x = 0; x < image.Width; x++)
            {
                if (image.Pixels[row + x * 4 + 3] > 16)
                    return y;
            }
        }
        return -1;
    }

    /// <summary>
    /// Ground contact point inside the sheet: average opaque X on the bottom content
    /// rows, plus the bottom row index. Accounts for horizontal flip (east facings).
    /// </summary>
    public static bool TryGetFootAnchor(RgbaImage image, bool flipH, out int footX, out int footY)
    {
        footX = image.Width / 2;
        footY = image.Height - 1;
        var bottom = ContentBottom(image);
        if (bottom < 0)
            return false;

        footY = bottom;
        // Average opaque pixels on the lowest few solid rows (toes / heels).
        var y0 = Math.Max(0, bottom - 2);
        long sumX = 0;
        var count = 0;
        for (var y = y0; y <= bottom; y++)
        {
            var row = y * image.Width * 4;
            for (var x = 0; x < image.Width; x++)
            {
                if (image.Pixels[row + x * 4 + 3] <= 16)
                    continue;
                sumX += x;
                count++;
            }
        }

        if (count == 0)
            return false;

        var cx = (int)Math.Round(sumX / (double)count);
        footX = flipH ? image.Width - 1 - cx : cx;
        return true;
    }
}
