using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class DialogueResolverTests
{
    [Fact]
    public void PreviewPrefersInMemoryTextOverStaleRomBytes()
    {
        var bytes = new byte[0x80];
        System.Text.Encoding.ASCII.GetBytes("Old").CopyTo(bytes, 0x20);
        var rom = RomImage.FromBytes("preview.gba", bytes);
        var command = new ScriptCommandData
        {
            Op = 0x34,
            ArgShort = 2,
            ArgPtr = RomPointer.FromOffset(0x20).Value,
        };
        var station = new ScriptRefData { Name = "EVENT_TEST" };
        station.Commands.Add(command);
        var sector = new SceneSector { Group = 0, Sector = 0 };
        sector.Stations.Add(station);
        var group = new SceneGroup { Index = 0 };
        group.Sectors.Add(sector);
        var scene = new Scene { MapId = 1 };
        scene.Groups.Add(group);
        var dialogue = new Dictionary<int, DialogueString>
        {
            [0x20] = new() { Offset = 0x20, Size = 3, Text = "Replacement line." },
        };

        var state = SceneCompositor.BuildPreviewState(
            rom, scene, Charmap.CreateAsciiFallback(), 0, 0, 0, station, dialogue);

        Assert.Equal("Replacement line.", state.Dialogue);
    }

    [Fact]
    public void PreviewResolvesPendingNegativeDialogueOffsets()
    {
        var rom = RomImage.FromBytes("preview.gba", new byte[0x80]);
        var command = new ScriptCommandData
        {
            Op = 0x34,
            ArgShort = 2,
            ArgPtr = unchecked((uint)(-1)),
        };
        var station = new ScriptRefData();
        station.Commands.Add(command);
        var sector = new SceneSector { Group = 0, Sector = 0 };
        sector.Stations.Add(station);
        var group = new SceneGroup { Index = 0 };
        group.Sectors.Add(sector);
        var scene = new Scene { MapId = 1 };
        scene.Groups.Add(group);
        var dialogue = new Dictionary<int, DialogueString>
        {
            [-1] = new() { Offset = -1, Size = 64, Text = "{CENTER_ALIGN}Welcome!" },
        };

        var state = SceneCompositor.BuildPreviewState(
            rom, scene, Charmap.CreateAsciiFallback(), 0, 0, 0, station, dialogue);

        Assert.Equal("{CENTER_ALIGN}Welcome!", state.Dialogue);
    }
}
