using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class UnsavedChangesGateTests
{
    [Theory]
    [InlineData(false, false, false)]
    [InlineData(true, false, true)]
    [InlineData(false, true, true)]
    [InlineData(true, true, true)]
    public void RequiresConfirmation(bool projectDirty, bool changeDirty, bool expected)
    {
        Assert.Equal(expected, UnsavedChangesGate.RequiresConfirmation(projectDirty, changeDirty));
    }
}
