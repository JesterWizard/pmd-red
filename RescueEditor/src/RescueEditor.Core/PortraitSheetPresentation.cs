namespace RescueEditor.Core;

/// <summary>Portrait sheet layout labels and integer nearest-neighbor scaling.</summary>
public static class PortraitSheetPresentation
{
    public const int FaceSize = 40;
    public const int DefaultDisplayScale = 3;
    public const int ColumnsPerRow = 4;
    public const int GapX = 8;
    public const int GapY = 10;
    public const int LabelGap = 3;
    public const int LabelHeight = PixelFont.GlyphRows + 2;
    /// <summary>Draw emotion captions at 1/LabelShrink of the full pixel font.</summary>
    public const int LabelShrink = 2;

    public const int ScaledFace = FaceSize * DefaultDisplayScale;
    public const int CellWidth = ScaledFace;
    public const int CellHeight = ScaledFace + LabelGap + LabelHeight;

    public static string EmotionLabel(int index, string emotion) => $"{index} - {emotion}";

    public static int ColumnCount(int faceCount) =>
        Math.Clamp(faceCount, 1, ColumnsPerRow);

    public static int RowCount(int faceCount)
    {
        var cols = ColumnCount(faceCount);
        return Math.Max(1, (faceCount + cols - 1) / cols);
    }

    public static (int Width, int Height) SheetPixelSize(int faceCount)
    {
        var cols = ColumnCount(faceCount);
        var rows = RowCount(faceCount);
        return (
            cols * CellWidth + (cols - 1) * GapX,
            rows * CellHeight + (rows - 1) * GapY);
    }

    public static (int X, int Y) CellOrigin(int index, int faceCount)
    {
        var cols = ColumnCount(faceCount);
        var col = index % cols;
        var row = index / cols;
        return (col * (CellWidth + GapX), row * (CellHeight + GapY));
    }

    /// <summary>Emotion index under a composed-sheet pixel, or null for gaps / empty cells.</summary>
    public static int? HitTest(int x, int y, int faceCount)
    {
        if (x < 0 || y < 0 || faceCount <= 0)
            return null;
        var strideX = CellWidth + GapX;
        var strideY = CellHeight + GapY;
        var col = x / strideX;
        var row = y / strideY;
        var localX = x - col * strideX;
        var localY = y - row * strideY;
        if (localX >= CellWidth || localY >= CellHeight)
            return null;
        var cols = ColumnCount(faceCount);
        if (col < 0 || col >= cols)
            return null;
        var index = row * cols + col;
        return index >= 0 && index < faceCount ? index : null;
    }

    public static RgbaImage ScaleNearest(RgbaImage source, int scale)
    {
        if (scale < 1)
            throw new ArgumentOutOfRangeException(nameof(scale));
        if (scale == 1)
            return source;

        var width = source.Width * scale;
        var height = source.Height * scale;
        var dest = new RgbaImage(width, height, new byte[width * height * 4]);
        for (var y = 0; y < source.Height; y++)
        {
            for (var x = 0; x < source.Width; x++)
            {
                var si = (y * source.Width + x) * 4;
                for (var oy = 0; oy < scale; oy++)
                {
                    for (var ox = 0; ox < scale; ox++)
                    {
                        var di = ((y * scale + oy) * width + (x * scale + ox)) * 4;
                        dest.Pixels[di] = source.Pixels[si];
                        dest.Pixels[di + 1] = source.Pixels[si + 1];
                        dest.Pixels[di + 2] = source.Pixels[si + 2];
                        dest.Pixels[di + 3] = source.Pixels[si + 3];
                    }
                }
            }
        }

        return dest;
    }
}

/// <summary>Default zoom factors for the asset preview pane.</summary>
public static class AssetPreviewZoom
{
    public static double InitialFor(AssetKind kind) => kind switch
    {
        // Sheets are already composed at 3× native face size.
        AssetKind.KaoPortraitSheet => 1.0,
        AssetKind.KaoPortrait => 3.0,
        _ => 1.0,
    };
}
