namespace RescueEditor.Core;

/// <summary>
/// Helpers so pixel-art previews stay 1:1 with physical pixels under desktop DPI scaling.
/// </summary>
public static class PixelPerfectLayout
{
    /// <summary>
    /// Control size in DIPs such that <paramref name="bitmapPixels"/> × <paramref name="zoom"/>
    /// land on whole physical pixels after <paramref name="renderScaling"/> is applied.
    /// </summary>
    public static double LayoutDipSize(int bitmapPixels, double zoom, double renderScaling)
    {
        var scaling = renderScaling <= 0 ? 1.0 : renderScaling;
        return bitmapPixels * zoom / scaling;
    }
}
