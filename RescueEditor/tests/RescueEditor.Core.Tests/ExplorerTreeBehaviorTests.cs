using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class ExplorerTreeBehaviorTests
{
    [Theory]
    [InlineData(true, false, true)]  // collapsed branch → open
    [InlineData(true, true, false)]  // expanded branch → close
    [InlineData(false, false, false)] // leaf stays collapsed
    [InlineData(false, true, true)]   // leaf stays expanded (no-op)
    public void RowClickTogglesOnlyWhenBranchHasChildren(
        bool hasChildren, bool currentlyExpanded, bool expected)
    {
        Assert.Equal(
            expected,
            ExplorerTreeBehavior.NextExpandedAfterRowClick(hasChildren, currentlyExpanded));
    }
}
