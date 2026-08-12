namespace RescueEditor.Core;

/// <summary>
/// Keep a viewport point fixed over the same content pixel when zoom changes.
/// </summary>
public static class ZoomViewport
{
    /// <summary>
    /// Given scroll offsets and a point in viewport DIPs, return the offsets that keep that
    /// content location under the cursor after zoom goes from <paramref name="zoomBefore"/>
    /// to <paramref name="zoomAfter"/> (content size proportional to zoom).
    /// </summary>
    public static (double OffsetX, double OffsetY) AnchorOffset(
        double offsetX,
        double offsetY,
        double viewportX,
        double viewportY,
        double zoomBefore,
        double zoomAfter)
    {
        if (zoomBefore <= 0)
            zoomBefore = 1;
        if (zoomAfter <= 0)
            zoomAfter = zoomBefore;

        var scale = zoomAfter / zoomBefore;
        var contentX = offsetX + viewportX;
        var contentY = offsetY + viewportY;
        return (contentX * scale - viewportX, contentY * scale - viewportY);
    }

    public static (double OffsetX, double OffsetY) ClampOffset(
        double offsetX,
        double offsetY,
        double extentWidth,
        double extentHeight,
        double viewportWidth,
        double viewportHeight)
    {
        var maxX = Math.Max(0, extentWidth - viewportWidth);
        var maxY = Math.Max(0, extentHeight - viewportHeight);
        return (Math.Clamp(offsetX, 0, maxX), Math.Clamp(offsetY, 0, maxY));
    }
}
