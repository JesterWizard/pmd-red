using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class PixelPerfectLayoutTests
{
    [Theory]
    [InlineData(120, 1.0, 1.0, 120.0)]
    [InlineData(120, 1.0, 1.25, 96.0)]
    [InlineData(120, 3.0, 1.5, 240.0)]
    [InlineData(40, 3.0, 1.25, 96.0)]
    public void LayoutDipSize_CompensatesDpiSoBitmapPixelsMapOneToOne(
        int bitmapPixels, double zoom, double renderScaling, double expectedDip)
    {
        Assert.Equal(
            expectedDip,
            PixelPerfectLayout.LayoutDipSize(bitmapPixels, zoom, renderScaling),
            precision: 6);
    }
}
