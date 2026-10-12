using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class DroppedFilesTests
{
    [Theory]
    [InlineData("/roms/pmd_red.GBA")]
    [InlineData("/roms/pmd_red.gba")]
    [InlineData("/roms/dump.bin")]
    public void RomExtensionsClassifyAsRom(string path)
    {
        Assert.Equal(DroppedFileKind.Rom, DroppedFiles.Classify(path, NoDirectories, NoFiles));
    }

    [Theory]
    [InlineData("/projects/x.rtproj")]
    [InlineData("/projects/x.rescue")]
    [InlineData("/projects/X.RTPROJ")]
    public void ProjectExtensionsClassifyAsProject(string path)
    {
        Assert.Equal(DroppedFileKind.Project, DroppedFiles.Classify(path, NoDirectories, NoFiles));
    }

    [Fact]
    public void RtmodClassifiesAsMod()
    {
        Assert.Equal(DroppedFileKind.Mod, DroppedFiles.Classify("/mods/x.rtmod", NoDirectories, NoFiles));
    }

    [Fact]
    public void ManifestFileClassifiesAsMod()
    {
        Assert.Equal(DroppedFileKind.Mod, DroppedFiles.Classify("/a/manifest.json", NoDirectories, NoFiles));
    }

    [Fact]
    public void FolderWithManifestClassifiesAsMod()
    {
        var folder = "/mods/pack";
        var manifest = Path.Combine(folder, "manifest.json");

        var kind = DroppedFiles.Classify(
            folder,
            directoryExists: path => path == folder,
            fileExists: path => path == manifest);

        Assert.Equal(DroppedFileKind.Mod, kind);
    }

    [Fact]
    public void FolderWithoutManifestClassifiesAsUnknown()
    {
        var folder = "/mods/pack";

        var kind = DroppedFiles.Classify(
            folder,
            directoryExists: path => path == folder,
            fileExists: _ => false);

        Assert.Equal(DroppedFileKind.Unknown, kind);
    }

    [Fact]
    public void OtherFilesClassifyAsUnknown()
    {
        Assert.Equal(DroppedFileKind.Unknown, DroppedFiles.Classify("/notes/notes.txt", NoDirectories, NoFiles));
    }

    private static bool NoDirectories(string _) => false;

    private static bool NoFiles(string _) => false;
}
