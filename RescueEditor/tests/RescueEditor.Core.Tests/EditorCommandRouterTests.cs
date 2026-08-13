using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class EditorCommandRouterTests
{
    [Theory]
    [InlineData(EditorCommandId.Save, true)]
    [InlineData(EditorCommandId.ToggleExplorer, true)]
    [InlineData(EditorCommandId.ToggleInspector, true)]
    [InlineData(EditorCommandId.ToggleOutput, true)]
    [InlineData(EditorCommandId.GlobalSearch, true)]
    [InlineData(EditorCommandId.Undo, false)]
    [InlineData(EditorCommandId.Redo, false)]
    [InlineData(EditorCommandId.DeleteSelection, false)]
    [InlineData(EditorCommandId.SelectTool, false)]
    [InlineData(EditorCommandId.PanTool, false)]
    [InlineData(EditorCommandId.ToggleGrid, false)]
    public void TextInput_AllowsOnlySaveAndDockToggles(EditorCommandId command, bool expected)
    {
        Assert.Equal(expected, EditorCommandRouter.ShouldDispatch(command, EditorFocusKind.TextInput));
    }

    [Theory]
    [InlineData(EditorCommandId.Undo)]
    [InlineData(EditorCommandId.Redo)]
    [InlineData(EditorCommandId.Save)]
    [InlineData(EditorCommandId.DeleteSelection)]
    [InlineData(EditorCommandId.SelectTool)]
    [InlineData(EditorCommandId.PanTool)]
    [InlineData(EditorCommandId.ToggleGrid)]
    [InlineData(EditorCommandId.ToggleExplorer)]
    [InlineData(EditorCommandId.ToggleInspector)]
    [InlineData(EditorCommandId.ToggleOutput)]
    [InlineData(EditorCommandId.GlobalSearch)]
    public void SceneCanvas_AllowsAllCommands(EditorCommandId command)
    {
        Assert.True(EditorCommandRouter.ShouldDispatch(command, EditorFocusKind.SceneCanvas));
    }

    [Theory]
    [InlineData(EditorCommandId.Undo, true)]
    [InlineData(EditorCommandId.Save, true)]
    [InlineData(EditorCommandId.ToggleExplorer, true)]
    [InlineData(EditorCommandId.DeleteSelection, false)]
    [InlineData(EditorCommandId.SelectTool, false)]
    [InlineData(EditorCommandId.PanTool, false)]
    [InlineData(EditorCommandId.ToggleGrid, false)]
    public void Shell_BlocksSceneOnlyCommands(EditorCommandId command, bool expected)
    {
        Assert.Equal(expected, EditorCommandRouter.ShouldDispatch(command, EditorFocusKind.Shell));
    }

    [Fact]
    public void TryResolve_RespectsFocus()
    {
        var map = EditorKeymap.CreateDefault();
        Assert.False(EditorCommandRouter.TryResolve(
            map, new KeyChord("V", false, false, false), EditorFocusKind.TextInput, out _));
        Assert.True(EditorCommandRouter.TryResolve(
            map, new KeyChord("S", true, false, false), EditorFocusKind.TextInput, out var save));
        Assert.Equal(EditorCommandId.Save, save);
        Assert.True(EditorCommandRouter.TryResolve(
            map, new KeyChord("P", true, false, false), EditorFocusKind.TextInput, out var search));
        Assert.Equal(EditorCommandId.GlobalSearch, search);
    }
}
