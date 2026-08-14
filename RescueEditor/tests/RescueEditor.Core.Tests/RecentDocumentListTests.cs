using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class RecentDocumentListTests
{
    [Fact]
    public void Remember_MovesExistingPathToFrontAndCaps()
    {
        var current = new[]
        {
            @"C:\roms\a.gba",
            @"C:\roms\b.gba",
            @"C:\roms\c.gba",
        };

        var next = RecentDocumentList.Remember(current, @"c:\roms\B.gba", cap: 3);

        Assert.Equal(new[] { @"C:\roms\b.gba", @"C:\roms\a.gba", @"C:\roms\c.gba" }, next);
    }

    [Fact]
    public void Remember_InsertsNewPathAndDropsOldest()
    {
        var current = new[] { "rom1.gba", "rom2.gba" };

        var next = RecentDocumentList.Remember(current, "rom3.gba", cap: 2);

        Assert.Equal(new[] { "rom3.gba", "rom1.gba" }, next);
    }

    [Fact]
    public void Remember_IgnoresBlankPaths()
    {
        var current = new[] { "rom1.gba" };
        Assert.Equal(current, RecentDocumentList.Remember(current, "   ", cap: 8));
    }

    [Fact]
    public void Existing_DropsMissingFilesUsingFileSystem()
    {
        var files = new MemoryEditorFileSystem();
        files.WriteAllText("keep.gba", "rom");
        var current = new[] { "keep.gba", "gone.gba" };

        Assert.Equal(new[] { "keep.gba" }, RecentDocumentList.Existing(current, files));
    }
}
