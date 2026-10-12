using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class ProjectAutosaveTests
{
    [Fact]
    public void Path_LivesUnderAppDataAutosaveAndNeverEqualsRomPath()
    {
        var appData = Path.Combine("appdata", "RescueTemple");
        var romPath = Path.Combine("roms", "baserom.gba");
        var projectPath = Path.Combine("projects", "mod.rtproj");

        var autosavePath = ProjectAutosave.GetPath(appData, projectPath);

        Assert.StartsWith(Path.Combine(appData, "autosave"), autosavePath, StringComparison.Ordinal);
        Assert.NotEqual(romPath, autosavePath);
        Assert.NotEqual(projectPath, autosavePath);
        Assert.EndsWith(".rtproj", autosavePath);
        Assert.Equal(autosavePath, ProjectAutosave.GetPath(appData, projectPath));
    }

    [Fact]
    public void ShouldPrompt_WhenAutosaveIsNewerThanExplicitSave()
    {
        var older = DateTimeOffset.Parse("2026-08-01T12:00:00Z");
        var newer = DateTimeOffset.Parse("2026-08-01T12:05:00Z");
        Assert.True(ProjectAutosave.ShouldPrompt(newer, older));
        Assert.False(ProjectAutosave.ShouldPrompt(older, newer));
        Assert.False(ProjectAutosave.ShouldPrompt(older, older));
        Assert.True(ProjectAutosave.ShouldPrompt(newer, lastExplicitSaveAt: null));
    }

    [Fact]
    public void WriteAndLoad_RoundTripThroughFileSystemFakeWithoutTouchingRom()
    {
        var files = new MemoryEditorFileSystem();
        var appData = "/tmp/RescueTemple";
        var romPath = "/roms/baserom.gba";
        files.WriteAllText(romPath, "BASE");

        var project = new ProjectDocument
        {
            Name = "Mod",
            BaseRomPath = romPath,
            BaseRomSha1 = "abc",
            IsDirty = true,
        };
        project.Edits.Add(new ProjectEdit
        {
            Id = "e1",
            Kind = "test",
            Target = "scene",
            Description = "moved",
        });

        var writtenAt = DateTimeOffset.Parse("2026-08-14T16:00:00Z");
        var envelope = ProjectAutosave.Write(
            files,
            appData,
            key: project.BaseRomPath,
            envelope: new AutosaveEnvelope
            {
                AutosavedAt = writtenAt,
                LastExplicitSaveAt = DateTimeOffset.Parse("2026-08-14T15:00:00Z"),
                ExplicitSavePath = "/projects/mod.rtproj",
                RomPath = romPath,
                ExplorerCategory = "Scenes",
                ExplorerAssetId = "scene-1",
                ExplorerSceneMapId = 12,
                Project = project,
            });

        Assert.Equal("BASE", files.ReadAllText(romPath));
        Assert.NotEqual(romPath, envelope.Path);
        Assert.True(files.FileExists(envelope.Path));

        var loaded = ProjectAutosave.TryLoad(files, appData, key: romPath);
        Assert.NotNull(loaded);
        Assert.True(ProjectAutosave.ShouldPrompt(loaded!.AutosavedAt, loaded.LastExplicitSaveAt));
        Assert.Equal("Mod", loaded.Project.Name);
        Assert.Equal("e1", loaded.Project.Edits[0].Id);
        Assert.Equal(12, loaded.ExplorerSceneMapId);
        Assert.Equal("/projects/mod.rtproj", loaded.ExplicitSavePath);
    }

    [Fact]
    public void TryLoad_MissingFile_ReturnsNull()
    {
        var files = new MemoryEditorFileSystem();
        Assert.Null(ProjectAutosave.TryLoad(files, "/tmp/RescueTemple", "missing-key"));
    }

    [Fact]
    public void DescribeRestore_UsesUpdateWordingWhenBuildChanged()
    {
        var prompt = ProjectAutosave.DescribeRestore(new AutosaveEnvelope { AppBuildId = "old" }, "new");

        Assert.Equal("RescueTemple was updated", prompt.Title);
        Assert.Equal("RescueTemple was updated and restarted while you had unsaved changes. Restore the work from before the update?", prompt.Message);
        Assert.Equal("Restore my changes", prompt.ConfirmLabel);
        Assert.Equal("Discard", prompt.DiscardLabel);
    }

    [Fact]
    public void DescribeRestore_UsesGenericWordingWhenBuildUnchangedOrUnknown()
    {
        var cases = new[]
        {
            (Envelope: new AutosaveEnvelope { AppBuildId = "same" }, Current: "same"),
            (Envelope: new AutosaveEnvelope(), Current: "x"),
        };

        foreach (var (envelope, current) in cases)
        {
            var prompt = ProjectAutosave.DescribeRestore(envelope, current);

            Assert.Equal("Unsaved changes found", prompt.Title);
            Assert.Equal("RescueTemple closed before your last changes were saved. Restore them?", prompt.Message);
            Assert.Equal("Restore my changes", prompt.ConfirmLabel);
            Assert.Equal("Discard", prompt.DiscardLabel);
            Assert.DoesNotContain("autosave", prompt.Title, StringComparison.OrdinalIgnoreCase);
            Assert.DoesNotContain("autosave", prompt.Message, StringComparison.OrdinalIgnoreCase);
        }
    }

    [Fact]
    public void WriteAndLoad_RoundTripsAppBuildId()
    {
        var files = new MemoryEditorFileSystem();
        var appData = "/tmp/RescueTemple";
        var romPath = "/roms/baserom.gba";
        files.WriteAllText(romPath, "BASE");

        var project = new ProjectDocument
        {
            Name = "Mod",
            BaseRomPath = romPath,
            BaseRomSha1 = "abc",
            IsDirty = true,
        };

        var envelope = ProjectAutosave.Write(
            files,
            appData,
            key: project.BaseRomPath,
            envelope: new AutosaveEnvelope
            {
                AutosavedAt = DateTimeOffset.Parse("2026-08-14T16:00:00Z"),
                LastExplicitSaveAt = DateTimeOffset.Parse("2026-08-14T15:00:00Z"),
                RomPath = romPath,
                AppBuildId = "build-123",
                Project = project,
            });

        Assert.True(files.FileExists(envelope.Path));

        var loaded = ProjectAutosave.TryLoad(files, appData, key: romPath);
        Assert.NotNull(loaded);
        Assert.Equal("build-123", loaded!.AppBuildId);
    }
}
