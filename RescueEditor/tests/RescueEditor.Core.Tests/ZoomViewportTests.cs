using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class ZoomViewportTests
{
    [Fact]
    public void AnchorOffset_KeepsContentUnderCursorWhenZoomingIn()
    {
        // Cursor at (100, 50) in viewport; scroll at origin; 2× zoom.
        var (ox, oy) = ZoomViewport.AnchorOffset(
            offsetX: 0, offsetY: 0,
            viewportX: 100, viewportY: 50,
            zoomBefore: 1, zoomAfter: 2);

        // Content point (100,50) should stay under cursor → offset becomes (100, 50).
        Assert.Equal(100, ox, 6);
        Assert.Equal(50, oy, 6);
    }

    [Fact]
    public void AnchorOffset_PreservesPointWhenAlreadyScrolled()
    {
        var (ox, oy) = ZoomViewport.AnchorOffset(
            offsetX: 200, offsetY: 80,
            viewportX: 40, viewportY: 20,
            zoomBefore: 2, zoomAfter: 4);

        // Content (240, 100) × 2 − viewport → (440, 180)
        Assert.Equal(440, ox, 6);
        Assert.Equal(180, oy, 6);
    }

    [Fact]
    public void AnchorOffset_ZoomOutTowardCursor()
    {
        var (ox, oy) = ZoomViewport.AnchorOffset(
            offsetX: 100, offsetY: 50,
            viewportX: 100, viewportY: 50,
            zoomBefore: 2, zoomAfter: 1);

        Assert.Equal(0, ox, 6);
        Assert.Equal(0, oy, 6);
    }

    [Fact]
    public void ClampOffset_LimitsToScrollableExtent()
    {
        var (ox, oy) = ZoomViewport.ClampOffset(
            offsetX: 999, offsetY: -10,
            extentWidth: 500, extentHeight: 400,
            viewportWidth: 200, viewportHeight: 100);

        Assert.Equal(300, ox);
        Assert.Equal(0, oy);
    }
}
