namespace RescueEditor.Core;

/// <summary>Clean stray fringe pixels on portrait sheets before Scene Play blit.</summary>
public static class PortraitCleanup
{
    /// <summary>
    /// Replace orphan dark (or light) speckles that sit in open background with the
    /// surrounding background color. Attached outlines next to body pixels are kept.
    /// </summary>
    public static void Despeckle(RgbaImage image)
    {
        if (image.Width <= 0 || image.Height <= 0)
            return;

        var w = image.Width;
        var h = image.Height;
        var px = image.Pixels;
        var bg = SampleBackground(px, w, h);
        if (bg.A < 8)
            return;

        // Work on a copy of decisions so neighbors stay stable within one pass.
        var replace = new bool[w * h];
        for (var y = 0; y < h; y++)
        {
            for (var x = 0; x < w; x++)
            {
                var o = (y * w + x) * 4;
                if (px[o + 3] < 8)
                    continue;
                if (NearlySame(px[o], px[o + 1], px[o + 2], bg.R, bg.G, bg.B))
                    continue;

                var bgN = 0;
                var bodyN = 0;
                for (var dy = -1; dy <= 1; dy++)
                for (var dx = -1; dx <= 1; dx++)
                {
                    if (dx == 0 && dy == 0)
                        continue;
                    var nx = x + dx;
                    var ny = y + dy;
                    if ((uint)nx >= (uint)w || (uint)ny >= (uint)h)
                    {
                        bgN++;
                        continue;
                    }

                    var no = (ny * w + nx) * 4;
                    if (px[no + 3] < 8 || NearlySame(px[no], px[no + 1], px[no + 2], bg.R, bg.G, bg.B))
                        bgN++;
                    else if (!IsDarkSpeck(px[no], px[no + 1], px[no + 2]))
                        bodyN++;
                }

                // Orphan in open bg: mostly background neighbors, little/no body contact.
                if (bgN >= 5 && bodyN <= 1 && IsDarkSpeck(px[o], px[o + 1], px[o + 2]))
                    replace[y * w + x] = true;
            }
        }

        for (var i = 0; i < replace.Length; i++)
        {
            if (!replace[i])
                continue;
            var o = i * 4;
            px[o] = bg.R;
            px[o + 1] = bg.G;
            px[o + 2] = bg.B;
            px[o + 3] = bg.A;
        }
    }

    private static (byte R, byte G, byte B, byte A) SampleBackground(byte[] px, int w, int h)
    {
        // Edge pixels vote for the portrait backdrop color.
        long r = 0, g = 0, b = 0, a = 0;
        var n = 0;
        void Acc(int x, int y)
        {
            var o = (y * w + x) * 4;
            if (px[o + 3] < 8)
                return;
            r += px[o];
            g += px[o + 1];
            b += px[o + 2];
            a += px[o + 3];
            n++;
        }

        for (var i = 0; i < w; i++)
        {
            Acc(i, 0);
            Acc(i, h - 1);
        }

        for (var i = 1; i < h - 1; i++)
        {
            Acc(0, i);
            Acc(w - 1, i);
        }

        if (n == 0)
            return (0, 0, 0, 0);
        return ((byte)(r / n), (byte)(g / n), (byte)(b / n), (byte)(a / n));
    }

    private static bool IsDarkSpeck(byte r, byte g, byte b) =>
        r + g + b < 280 && Math.Max(r, Math.Max(g, b)) < 130;

    private static bool NearlySame(byte r, byte g, byte b, byte r2, byte g2, byte b2) =>
        Math.Abs(r - r2) <= 18 && Math.Abs(g - g2) <= 18 && Math.Abs(b - b2) <= 18;
}
