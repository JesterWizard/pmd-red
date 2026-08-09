using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class EditorKeymapTests
{
    private readonly EditorKeymap _map = EditorKeymap.CreateDefault();

    [Theory]
    [InlineData("Z", true, false, false, EditorCommandId.Undo)]
    [InlineData("Y", true, false, false, EditorCommandId.Redo)]
    [InlineData("Z", true, true, false, EditorCommandId.Redo)]
    [InlineData("S", true, false, false, EditorCommandId.Save)]
    [InlineData("Delete", false, false, false, EditorCommandId.DeleteSelection)]
    [InlineData("V", false, false, false, EditorCommandId.SelectTool)]
    [InlineData("H", false, false, false, EditorCommandId.PanTool)]
    [InlineData("G", false, false, false, EditorCommandId.ToggleGrid)]
    [InlineData("OemOpenBrackets", true, false, false, EditorCommandId.ToggleExplorer)]
    [InlineData("OemCloseBrackets", true, false, false, EditorCommandId.ToggleInspector)]
    public void ResolvesDefaultBindings(string key, bool ctrl, bool shift, bool alt, EditorCommandId expected)
    {
        Assert.True(_map.TryResolve(new KeyChord(key, ctrl, shift, alt), out var command));
        Assert.Equal(expected, command);
    }

    [Fact]
    public void UnboundChordReturnsFalse()
    {
        Assert.False(_map.TryResolve(new KeyChord("Q", false, false, false), out _));
    }

    [Fact]
    public void ModifierMismatchDoesNotMatch()
    {
        Assert.False(_map.TryResolve(new KeyChord("Z", false, false, false), out _));
    }
}
