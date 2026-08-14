using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class PortraitSheetPresentationTests
{
    [Theory]
    [InlineData(0, "Normal", "0 - Normal")]
    [InlineData(3, "Angry", "3 - Angry")]
    public void EmotionLabel_FormatsIndexAndName(int index, string emotion, string expected)
    {
        Assert.Equal(expected, PortraitSheetPresentation.EmotionLabel(index, emotion));
    }

    [Fact]
    public void PortraitPreviewStartsAtThreeHundredPercent()
    {
        // Sheets are pre-scaled to 3× in the PNG; open at 100%.
        Assert.Equal(1.0, AssetPreviewZoom.InitialFor(AssetKind.KaoPortraitSheet));
        Assert.Equal(3.0, AssetPreviewZoom.InitialFor(AssetKind.KaoPortrait));
        Assert.Equal(1.0, AssetPreviewZoom.InitialFor(AssetKind.TitleBackground));
    }

    [Fact]
    public void ScaleNearest_IntegerUpscaleKeepsBlockyPixels()
    {
        var src = new RgbaImage(2, 2, new byte[2 * 2 * 4]);
        // Opaque red at (0,0)
        src.Pixels[0] = 255;
        src.Pixels[1] = 0;
        src.Pixels[2] = 0;
        src.Pixels[3] = 255;

        var scaled = PortraitSheetPresentation.ScaleNearest(src, 3);
        Assert.Equal(6, scaled.Width);
        Assert.Equal(6, scaled.Height);
        // Top-left 3×3 block is red
        Assert.Equal(255, scaled.Pixels[0]);
        Assert.Equal(255, scaled.Pixels[(2 * 6 + 2) * 4]);
        // Pixel just outside that block stays transparent
        Assert.Equal(0, scaled.Pixels[(0 * 6 + 3) * 4 + 3]);
    }

    [Fact]
    public void SheetUsesFourColumnsThenWraps()
    {
        Assert.Equal(4, PortraitSheetPresentation.ColumnsPerRow);
        Assert.Equal(4, PortraitSheetPresentation.ColumnCount(13));
        Assert.Equal(2, PortraitSheetPresentation.ColumnCount(2));
        Assert.Equal(4, PortraitSheetPresentation.RowCount(13)); // ceil(13/4)=4
        Assert.Equal(1, PortraitSheetPresentation.RowCount(4));
    }

    [Fact]
    public void HitTestSelectsEmotionCellAndIgnoresGaps()
    {
        var (w, h) = PortraitSheetPresentation.SheetPixelSize(5);
        Assert.True(w > PortraitSheetPresentation.CellWidth);
        Assert.True(h > PortraitSheetPresentation.CellHeight);

        Assert.Equal(0, PortraitSheetPresentation.HitTest(0, 0, 5));
        Assert.Equal(1, PortraitSheetPresentation.HitTest(PortraitSheetPresentation.CellWidth + PortraitSheetPresentation.GapX, 0, 5));
        Assert.Equal(4, PortraitSheetPresentation.HitTest(0, PortraitSheetPresentation.CellHeight + PortraitSheetPresentation.GapY, 5));
        Assert.Null(PortraitSheetPresentation.HitTest(PortraitSheetPresentation.CellWidth + 1, 0, 5)); // gap
        Assert.Null(PortraitSheetPresentation.HitTest(w - 1, h - 1, 5)); // empty cell 7 in 4-col grid
        Assert.Null(PortraitSheetPresentation.HitTest(-1, 0, 5));
    }

    [Fact]
    public void LabelShrinkKeepsCaptionUnderFaceWidth()
    {
        var font = PixelFont.Load();
        var label = PortraitSheetPresentation.EmotionLabel(10, "Determined");
        // At 3× sheet scale, face cells are 120px — full font captions fit without shrink.
        var width = font.Measure(label);
        Assert.True(width <= PortraitSheetPresentation.FaceSize * PortraitSheetPresentation.DefaultDisplayScale,
            $"Label too wide for 3× face cell: {width}px");
    }
}
