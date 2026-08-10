using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class SceneStoryPlaylistTests
{
    [Fact]
    public void FromEventScriptsOrdersExecuteTargetsByEventTableOrder()
    {
        var scripts = new[]
        {
            MakeEvent("WAIT_START_FUNC", cmds: []),
            MakeEvent("EVENT_M00E01A_L001", Execute(223, 1, 0)),
            MakeEvent("EVENT_M01E01A_L001", Execute(178, 1, 0)),
            MakeEvent("EVENT_M01E01A_L002", Execute(178, 2, 0)),
            MakeEvent("EVENT_M01E01A_L003",
                Execute(179, 1, 0),
                Execute(178, 3, 0),
                Execute(9, 17, 0)),
            MakeEvent("EVENT_M01E02A_L001", Execute(12, 15, 0)),
        };

        var playlist = SceneStoryPlaylist.FromEventScripts(scripts);

        Assert.Equal(7, playlist.Beats.Count);
        Assert.Equal(new ScenePlayBeat(223, 1, 0, "EVENT_M00E01A_L001"), playlist.Beats[0]);
        Assert.Equal(new ScenePlayBeat(178, 1, 0, "EVENT_M01E01A_L001"), playlist.Beats[1]);
        Assert.Equal(new ScenePlayBeat(178, 2, 0, "EVENT_M01E01A_L002"), playlist.Beats[2]);
        Assert.Equal(new ScenePlayBeat(179, 1, 0, "EVENT_M01E01A_L003"), playlist.Beats[3]);
        Assert.Equal(new ScenePlayBeat(178, 3, 0, "EVENT_M01E01A_L003"), playlist.Beats[4]);
        Assert.Equal(new ScenePlayBeat(9, 17, 0, "EVENT_M01E01A_L003"), playlist.Beats[5]);
        Assert.Equal(new ScenePlayBeat(12, 15, 0, "EVENT_M01E02A_L001"), playlist.Beats[6]);
    }

    [Fact]
    public void FromEventScriptsDedupesRepeatedMapGroupSector()
    {
        var scripts = new[]
        {
            MakeEvent("EVENT_M02E02A_L001", Execute(12, 6, 0)),
            MakeEvent("EVENT_M02E02B_L001", Execute(12, 6, 0)),
            MakeEvent("EVENT_M02END_L001", Execute(12, 6, 0)),
        };

        var playlist = SceneStoryPlaylist.FromEventScripts(scripts);
        Assert.Single(playlist.Beats);
        Assert.Equal("EVENT_M02E02A_L001", playlist.Beats[0].EventName);
    }

    [Fact]
    public void FromEventScriptsStopsAtJumpScriptSoAdjacentRomScriptsDoNotBleed()
    {
        var scripts = new[]
        {
            new ScriptRefData
            {
                Name = "EVENT_M00E01A_L001",
                Commands =
                [
                    Execute(223, 1, 0),
                    new ScriptCommandData { Op = 0xE9, ArgShort = 102 }, // JUMP_SCRIPT
                    Execute(178, 1, 0), // would be next script in ROM if we did not stop
                ],
            },
            MakeEvent("EVENT_M01E01A_L001", Execute(178, 1, 0)),
        };

        var playlist = SceneStoryPlaylist.FromEventScripts(scripts);
        Assert.Equal(2, playlist.Beats.Count);
        Assert.Equal(223, playlist.Beats[0].MapId);
        Assert.Equal(178, playlist.Beats[1].MapId);
    }

    [Fact]
    public void CursorNavigatesChronologically()
    {
        var playlist = SceneStoryPlaylist.FromEventScripts(
        [
            MakeEvent("EVENT_M00E01A_L001", Execute(223, 1, 0)),
            MakeEvent("EVENT_M01E01A_L001", Execute(178, 1, 0)),
            MakeEvent("EVENT_M01E01A_L002", Execute(178, 2, 0)),
        ]);
        var cursor = new ScenePlayCursor(playlist, startIndex: 1);
        Assert.Equal(178, cursor.Current.MapId);
        Assert.Equal(1, cursor.Current.Group);
        Assert.True(cursor.CanGoBack);
        Assert.True(cursor.CanGoNext);

        Assert.True(cursor.TryMove(-1));
        Assert.Equal(223, cursor.Current.MapId);
        Assert.False(cursor.CanGoBack);

        Assert.True(cursor.TrySelect(2));
        Assert.Equal(2, cursor.Index);
        Assert.Equal(178, cursor.Current.MapId);
        Assert.Equal(2, cursor.Current.Group);
        Assert.False(cursor.CanGoNext);
    }

    [Fact]
    public void FindIndexMatchesMapGroupSector()
    {
        var playlist = SceneStoryPlaylist.FromEventScripts(
        [
            MakeEvent("EVENT_M01E01A_L001", Execute(178, 1, 0)),
            MakeEvent("EVENT_M01E01A_L002", Execute(178, 2, 0)),
        ]);
        Assert.Equal(1, playlist.FindIndex(178, 2, 0));
        Assert.Equal(-1, playlist.FindIndex(178, 9, 0));
        Assert.Equal(0, playlist.FindIndex(178, 0, 0, fallbackToMapOnly: true));
    }

    [Fact]
    public void ResolvePlayTargetOnlyDefaultsTinyWoodsGroup0()
    {
        var scene = new Scene { MapId = ScenePlayPresets.TinyWoodsEntryMapId };
        Assert.Equal((1, 0), ScenePlayPresets.ResolvePlayTarget(scene, 0, 0));
        Assert.Equal((2, 0), ScenePlayPresets.ResolvePlayTarget(scene, 2, 0));
        Assert.Equal((3, 1), ScenePlayPresets.ResolvePlayTarget(scene, 3, 1));
    }

    [Fact]
    public void BuildFromRomYieldsOpeningThenTinyWoodsIntro()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10);
        var playlist = SceneStoryPlaylist.Build(rom, database);

        Assert.True(playlist.Beats.Count >= 100);
        Assert.Equal(223, playlist.Beats[0].MapId);
        Assert.Equal(1, playlist.Beats[0].Group);
        var tinyIntro = playlist.Beats.First(b => b.MapId == 178 && b.Group == 1 && b.Sector == 0);
        Assert.Contains("M01E01A_L001", tinyIntro.EventName, StringComparison.Ordinal);
        Assert.True(playlist.FindIndex(tinyIntro.MapId, tinyIntro.Group, tinyIntro.Sector) >
                    playlist.FindIndex(223, 1, 0));
    }

    [Fact]
    public void BeatDisplayLabelIncludesMapNameAndStation()
    {
        var beat = new ScenePlayBeat(178, 1, 0, "EVENT_M01E01A_L001");
        var label = beat.FormatLabel(sceneName: "Tiny Woods");
        Assert.Contains("Tiny Woods", label, StringComparison.Ordinal);
        Assert.Contains("g1", label, StringComparison.Ordinal);
        Assert.Contains("M01E01A_L001", label, StringComparison.Ordinal);
    }

    private static ScriptRefData MakeEvent(string name, params ScriptCommandData[] cmds) =>
        new() { Name = name, Commands = cmds.ToList() };

    private static ScriptCommandData Execute(int mapId, int group, int sector) =>
        new()
        {
            Op = 0x1E,
            ArgByte = (byte)sector,
            ArgShort = (short)group,
            Arg1 = mapId,
        };

    private static string? FindUpwards(string fileName)
    {
        var directory = new DirectoryInfo(AppContext.BaseDirectory);
        while (directory is not null)
        {
            var candidate = Path.Combine(directory.FullName, fileName);
            if (File.Exists(candidate))
                return candidate;
            directory = directory.Parent;
        }
        return null;
    }
}
