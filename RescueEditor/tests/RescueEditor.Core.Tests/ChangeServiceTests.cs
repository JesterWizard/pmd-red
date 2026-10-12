using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class ChangeServiceTests
{
    [Fact]
    public void ExecuteMakesDirtyAndMarkSavedCleans()
    {
        var changes = new ChangeService();
        changes.Attach(new ProjectDocument(), new SceneDatabase { Profile = RomProfile.Us10 });
        var value = 0;

        changes.Execute("inc", () => value++, () => value--);
        Assert.True(changes.IsDirty);
        Assert.Equal(1, value);

        changes.MarkSaved();
        Assert.False(changes.IsDirty);

        changes.Undo();
        Assert.True(changes.IsDirty);
        Assert.Equal(0, value);

        changes.Redo();
        Assert.False(changes.IsDirty);
        Assert.Equal(1, value);
    }

    [Fact]
    public void UndoBackToSavedPointIsClean()
    {
        var changes = new ChangeService();
        changes.Attach(new ProjectDocument(), new SceneDatabase { Profile = RomProfile.Us10 });
        var value = 0;

        changes.Execute("A", () => value++, () => value--);
        changes.MarkSaved();
        changes.Execute("B", () => value += 10, () => value -= 10);
        Assert.True(changes.IsDirty);

        changes.Undo();
        Assert.False(changes.IsDirty);
        Assert.Equal(1, value);
    }

    [Fact]
    public void RecordDoesNotApplyButUndoReverts()
    {
        var changes = new ChangeService();
        changes.Attach(new ProjectDocument(), new SceneDatabase { Profile = RomProfile.Us10 });
        var value = 5;

        // The caller already applied the change; Record must not call apply again.
        changes.Record("x", () => value = 5, () => value = 4);
        Assert.Equal(5, value);
        Assert.True(changes.IsDirty);
        Assert.Equal("x", changes.UndoDescription);

        changes.Undo();
        Assert.Equal(4, value);
        Assert.Equal("x", changes.RedoDescription);

        changes.Redo();
        Assert.Equal(5, value);
    }

    [Fact]
    public void AttachResetsSavedPoint()
    {
        var changes = new ChangeService();
        changes.Attach(new ProjectDocument(), new SceneDatabase { Profile = RomProfile.Us10 });
        var value = 0;

        changes.Execute("inc", () => value++, () => value--);
        changes.MarkSaved();
        changes.Attach(new ProjectDocument(), new SceneDatabase { Profile = RomProfile.Us10 });

        Assert.False(changes.IsDirty);
        Assert.False(changes.CanUndo);
    }

    [Fact]
    public void ProjectDirtyFollowsSavedPointOnUndo()
    {
        var project = new ProjectDocument();
        var changes = new ChangeService();
        changes.Attach(project, new SceneDatabase { Profile = RomProfile.Us10 });
        var value = 0;

        changes.Execute("A", () => value++, () => value--);
        project.IsDirty = false;
        changes.MarkSaved();

        changes.Execute("B", () => value++, () => value--);
        changes.Undo();

        Assert.False(project.IsDirty);
        Assert.False(changes.IsDirty);
    }
}
