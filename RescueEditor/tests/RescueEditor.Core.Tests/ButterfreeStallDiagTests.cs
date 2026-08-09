using RescueEditor.Core;
using Xunit;
using Xunit.Abstractions;

namespace RescueEditor.Core.Tests;

public sealed class ButterfreeStallDiagTests
{
    private readonly ITestOutputHelper _out;

    public ButterfreeStallDiagTests(ITestOutputHelper output) => _out = output;

    [Fact]
    public void TinyWoodsReachesButterfreeDialogueAfterArrival()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null) return;

        var rom = RomImage.Open(baserom);
        var charmapPath = FindUpwards("charmap.txt");
        var charmap = charmapPath is null ? null : Charmap.FromFile(charmapPath);
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10, charmap: charmap);
        var scene = database.FindScene(ScenePlayPresets.TinyWoodsEntryMapId);
        Assert.NotNull(scene);

        var session = new ScenePlaySession(
            rom, scene!, 1, 0,
            charmap: charmap,
            appearance: new PlayAppearance(1, 4),
            profile: database.Profile);

        var sawButterfreeSouth = false;
        var sawMatterLine = false;
        var sawHorribleLine = false;
        string? stallDump = null;

        for (var i = 0; i < 20000 && !session.ScriptFinished; i++)
        {
            if (session.WaitingForAdvance)
                session.AdvanceDialogue();

            session.Tick(1.0 / 60.0);
            var vm = session.ScriptVm;
            if (vm is null) continue;

            // Butterfree is live slot 2 after SELECT_LIVES sector 1.
            if (vm.LiveIndices.Contains(2) && vm.GetDirection(2) == GroundScriptVm.DirSouth)
                sawButterfreeSouth = true;

            var page = session.DisplayDialogue ?? "";
            if (page.Contains("What's the matter", StringComparison.OrdinalIgnoreCase) ||
                page.Contains("What's wrong", StringComparison.OrdinalIgnoreCase))
                sawMatterLine = true;

            if (page.Contains("horrible", StringComparison.OrdinalIgnoreCase))
                sawHorribleLine = true;

            if (sawButterfreeSouth && !sawMatterLine && i > 0 && i % 600 == 0)
            {
                stallDump = string.Join('\n', vm.DescribeActors());
                _out.WriteLine($"frame={i}\n{stallDump}\ndialogue={page}");
            }

            if (sawMatterLine && sawHorribleLine)
                break;
        }

        if (!sawMatterLine)
            _out.WriteLine("STALL:\n" + (stallDump ?? string.Join('\n', session.ScriptVm?.DescribeActors() ?? Array.Empty<string>())));

        Assert.True(sawButterfreeSouth, "Butterfree never faced south");
        Assert.True(sawMatterLine, "Never reached partner 'What's the matter?' after E5 handshake");
    }

    [Fact]
    public void ButterfreeArrivalWalksAreNotInstant()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null) return;

        var rom = RomImage.Open(baserom);
        var charmapPath = FindUpwards("charmap.txt");
        var charmap = charmapPath is null ? null : Charmap.FromFile(charmapPath);
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10, charmap: charmap);
        var scene = database.FindScene(ScenePlayPresets.TinyWoodsEntryMapId);
        Assert.NotNull(scene);

        var session = new ScenePlaySession(
            rom, scene!, 1, 0,
            charmap: charmap,
            appearance: new PlayAppearance(1, 4),
            profile: database.Profile);

        var framesWalking = 0;
        var spawned = false;
        double? x0 = null, y0 = null, x1 = null, y1 = null;

        for (var i = 0; i < 20000 && !session.ScriptFinished; i++)
        {
            if (session.WaitingForAdvance)
                session.AdvanceDialogue();
            session.Tick(1.0 / 60.0);
            var vm = session.ScriptVm;
            if (vm is null) continue;

            if (!vm.LiveIndices.Contains(2))
                continue;

            if (!spawned)
            {
                spawned = true;
                // Sample start pos next frame after spawn.
            }

            var actors = vm.DescribeActors();
            var bf = actors.FirstOrDefault(a => a.StartsWith("live2", StringComparison.Ordinal));
            if (bf is not null && bf.Contains("walk=True", StringComparison.Ordinal))
                framesWalking++;

            // Capture first and a later position via direction/south arrival.
            if (vm.GetDirection(2) == GroundScriptVm.DirSouth && framesWalking > 0)
                break;

            if (i > 15000)
                break;
        }

        _out.WriteLine($"spawned={spawned} framesWalking={framesWalking}");
        Assert.True(spawned, "Butterfree never spawned");
        Assert.True(framesWalking > 30, $"Expected multi-frame Butterfree walk, got {framesWalking}");
    }

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
