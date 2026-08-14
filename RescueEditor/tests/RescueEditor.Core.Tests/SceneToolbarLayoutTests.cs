using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class SceneToolbarLayoutTests
{
    [Fact]
    public void UsesTwoRowsSoOverlaysAreNotOnTheToolStrip()
    {
        Assert.Equal(2, SceneToolbarLayout.RowCount);
        Assert.Equal(0, SceneToolbarLayout.RowOf(SceneToolbarBand.Tools));
        Assert.Equal(0, SceneToolbarLayout.RowOf(SceneToolbarBand.View));
        Assert.Equal(0, SceneToolbarLayout.RowOf(SceneToolbarBand.Placement));
        Assert.Equal(1, SceneToolbarLayout.RowOf(SceneToolbarBand.Overlays));
        Assert.Equal(1, SceneToolbarLayout.RowOf(SceneToolbarBand.Actions));
    }

    [Fact]
    public void EveryBandAppearsOnExactlyOneRow()
    {
        var bands = Enum.GetValues<SceneToolbarBand>();
        var seen = new HashSet<SceneToolbarBand>();
        for (var row = 0; row < SceneToolbarLayout.RowCount; row++)
        {
            foreach (var band in SceneToolbarLayout.BandsOnRow(row))
                Assert.True(seen.Add(band), $"{band} listed on more than one row");
        }

        Assert.Equal(bands.ToHashSet(), seen);
    }

    [Fact]
    public void HostHeightStacksRowStrips()
    {
        Assert.Equal(52, SceneToolbarLayout.HostHeight(rowHeight: 26));
    }

    [Fact]
    public void ClustersUseDeskCaptionsOnEachRow()
    {
        Assert.Equal(
            new[] { "Tool", "View", "Place" },
            SceneToolbarLayout.ClustersOnRow(0).Select(c => c.Caption));
        Assert.Equal(
            new[] { "Show", "Edit" },
            SceneToolbarLayout.ClustersOnRow(1).Select(c => c.Caption));
    }

    [Fact]
    public void VolumeAndCollisionToolsUseShortMapNouns()
    {
        Assert.Equal("Link", SceneToolbarCopy.DrawLink);
        Assert.Equal("Event", SceneToolbarCopy.DrawEvent);
        Assert.Equal("Paint", SceneToolbarCopy.PaintCollision);
        Assert.Equal("Erase", SceneToolbarCopy.EraseCollision);
    }
}
