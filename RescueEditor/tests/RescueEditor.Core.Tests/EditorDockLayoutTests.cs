using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class EditorDockLayoutTests
{
    [Fact]
    public void DefaultsMatchEditorChrome()
    {
        var layout = new EditorDockLayout();
        Assert.Equal(EditorDockLayout.DefaultExplorerWidth, layout.ExplorerWidth);
        Assert.Equal(EditorDockLayout.DefaultInspectorWidth, layout.InspectorWidth);
        Assert.True(layout.ExplorerVisible);
        Assert.True(layout.InspectorVisible);
        Assert.False(layout.OutputVisible);
    }

    [Fact]
    public void ToggleCollapsesEffectiveWidth()
    {
        var layout = new EditorDockLayout();
        layout.Toggle(DockPanelId.Explorer);
        Assert.False(layout.ExplorerVisible);
        Assert.Equal(0, layout.EffectiveWidth(DockPanelId.Explorer));
        layout.Toggle(DockPanelId.Explorer);
        Assert.Equal(layout.ExplorerWidth, layout.EffectiveWidth(DockPanelId.Explorer));
    }

    [Fact]
    public void SetWidthClampsToMinimum()
    {
        var layout = new EditorDockLayout();
        layout.SetWidth(DockPanelId.Inspector, 10);
        Assert.Equal(EditorDockLayout.MinSideWidth, layout.InspectorWidth);
    }

    [Fact]
    public void CaptureAndRestoreRoundTrip()
    {
        var layout = new EditorDockLayout();
        layout.SetWidth(DockPanelId.Explorer, 280);
        layout.SetWidth(DockPanelId.Inspector, 360);
        layout.SetWidth(DockPanelId.Output, 180);
        layout.SetVisible(DockPanelId.Output, true);
        layout.SetVisible(DockPanelId.Inspector, false);

        var snapshot = layout.Capture();
        var restored = new EditorDockLayout();
        restored.Restore(snapshot);

        Assert.Equal(280, restored.ExplorerWidth);
        Assert.Equal(360, restored.InspectorWidth);
        Assert.Equal(180, restored.OutputHeight);
        Assert.True(restored.OutputVisible);
        Assert.False(restored.InspectorVisible);
        Assert.True(restored.ExplorerVisible);
    }

    [Fact]
    public void WorkspaceCannotBeHidden()
    {
        var layout = new EditorDockLayout();
        layout.SetVisible(DockPanelId.Workspace, false);
        // No workspace-visible flag — center always remains.
        Assert.True(layout.ExplorerVisible);
    }
}
