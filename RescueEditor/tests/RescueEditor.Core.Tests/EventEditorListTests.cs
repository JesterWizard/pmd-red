using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class EventEditorListTests
{
    [Fact]
    public void ScriptEditorKind_ParseAndToggle()
    {
        Assert.Equal(ScriptEditorKind.Script, ScriptEditorKindCodec.Parse(null));
        Assert.Equal(ScriptEditorKind.Script, ScriptEditorKindCodec.Parse("script"));
        Assert.Equal(ScriptEditorKind.Event, ScriptEditorKindCodec.Parse("event"));
        Assert.Equal(ScriptEditorKind.Event, ScriptEditorKindCodec.Parse("EVENT"));
        Assert.Equal("event", ScriptEditorKindCodec.ToToken(ScriptEditorKind.Event));
        Assert.Equal("script", ScriptEditorKindCodec.ToToken(ScriptEditorKind.Script));
        Assert.Equal(ScriptEditorKind.Event, ScriptEditorKindCodec.Toggle(ScriptEditorKind.Script));
        Assert.Equal(ScriptEditorKind.Script, ScriptEditorKindCodec.Toggle(ScriptEditorKind.Event));
    }

    [Fact]
    public void Build_WaitFadeMsgAndStationCall_HaveDescriptionsParamsAndOpcodeSuffix()
    {
        var dialogue = new Dictionary<int, DialogueString>
        {
            [0x100] = new() { Offset = 0x100, Text = "Princess, this way!" },
        };
        var parsed = SceneScriptSource.Parse("""
            @station g0/s0 INTRO
            WAIT(60)
            FADE_IN(1, 16)
            MSG_NPC(0, "Princess, this way!")
            CALL_STATION(1, 0)
            WALK_RELATIVE(8, 4, 4)
            RET
            """, dialogue);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));

        var cast = new ScriptSceneCast([
            new ScriptCastMember(0, 1, 4, "Charmander", "MONSTER_CHARMANDER", "PLAYER"),
        ]);
        var rows = EventEditorList.Build(parsed, dialogue, cast: cast);

        Assert.Equal(6, rows.Count);
        Assert.Contains("Wait", rows[0].Description, StringComparison.OrdinalIgnoreCase);
        Assert.Contains("60", rows[0].ParameterBrackets);
        Assert.Contains("(WAIT)", rows[0].DisplayLine);
        Assert.Contains("1 sec", rows[0].ParameterBrackets);

        Assert.Contains("Fade", rows[1].Description, StringComparison.OrdinalIgnoreCase);
        Assert.Contains("(FADE_IN)", rows[1].DisplayLine);

        Assert.Null(rows[0].SpeakerName);
        Assert.Equal("Princess, this way!", rows[2].DialogueSnippet);
        Assert.Equal("PLAYER (Charmander)", rows[2].SpeakerName);
        Assert.Contains("(MSG_NPC)", rows[2].DisplayLine);

        Assert.Contains("Call", rows[3].Description, StringComparison.OrdinalIgnoreCase);
        Assert.Contains("(CALL_STATION)", rows[3].DisplayLine);
        Assert.Contains("Group", rows[3].ParameterBrackets);

        Assert.Equal(EventEditorVisualKind.Wait, rows[0].Visual.Kind);
        Assert.Equal(EventEditorVisualKind.Fade, rows[1].Visual.Kind);
        Assert.Equal(EventEditorVisualKind.Portrait, rows[2].Visual.Kind);
        Assert.Equal(0, rows[2].Visual.Id);
        Assert.Equal(EventEditorVisualKind.Jump, rows[3].Visual.Kind);
        Assert.Equal(EventEditorVisualKind.Actor, rows[4].Visual.Kind);
    }

    [Fact]
    public void FindRow_ByStationAndSourceLine()
    {
        var parsed = SceneScriptSource.Parse("""
            @station g0/s0
            WAIT(1)
            RET
            @station g0/s1
            FADE_OUT(1, 8)
            RET
            """);
        var rows = EventEditorList.Build(parsed);

        var first = EventEditorList.FindRowIndex(rows, "station", 0, 0, 0, commandIndex: 0);
        var fade = EventEditorList.FindRowIndex(rows, "station", 0, 1, 0, commandIndex: 0);
        Assert.Equal(0, first);
        Assert.Equal(2, fade);

        var fromLine = EventEditorList.FindRowIndexForSourceLine(rows, 5);
        Assert.Equal(fade, fromLine);
    }

    [Fact]
    public void RoundTrip_EditWaitFrames_ThenApplyToScene_IsUndoable()
    {
        var scene = new Scene { MapId = 1, Name = "Toy" };
        var group = new SceneGroup { Index = 0 };
        var sector = new SceneSector { Group = 0, Sector = 0, HasStation = true };
        sector.Stations.Add(new ScriptRefData
        {
            Name = "INTRO",
            Commands =
            {
                new ScriptCommandData { Op = 0xDB, ArgShort = 60 },
                new ScriptCommandData { Op = 0xEF },
            },
        });
        group.Sectors.Add(sector);
        scene.Groups.Add(group);

        var source = SceneScriptSource.Format(scene);
        var parsed = SceneScriptSource.Parse(source);
        Assert.True(parsed.Ok);

        var rows = EventEditorList.Build(parsed);
        EventEditorList.SetParam(parsed, rows[0], ScriptArgField.ArgShort, 30);

        var nextSource = EventEditorList.FormatSource(parsed);
        var nextParsed = SceneScriptSource.Parse(nextSource);
        Assert.True(nextParsed.Ok, string.Join("; ", nextParsed.Errors.Select(e => e.Message)));
        Assert.Equal(30, nextParsed.Sections[0].Commands[0].Command.ArgShort);

        var changes = new ChangeService();
        SceneEditing.ApplySceneScriptSource(changes, scene, nextParsed, sourceText: nextSource);
        Assert.Equal(30, sector.Stations[0].Commands[0].ArgShort);

        changes.Undo();
        Assert.Equal(60, sector.Stations[0].Commands[0].ArgShort);
        changes.Redo();
        Assert.Equal(30, sector.Stations[0].Commands[0].ArgShort);
    }

    [Fact]
    public void InsertDeleteReorder_StayInSection_AndFormatRoundTrips()
    {
        var parsed = SceneScriptSource.Parse("""
            @station g1/s2
            WAIT(1)
            RET
            """);
        var rows = EventEditorList.Build(parsed);
        EventEditorList.InsertAfter(parsed, rows[0], EventEditorList.CreateStub(0x22));
        rows = EventEditorList.Build(parsed);
        Assert.Equal(3, rows.Count);
        Assert.Equal(0x22, rows[1].Op);

        EventEditorList.Move(parsed, rows[1], delta: -1);
        rows = EventEditorList.Build(parsed);
        Assert.Equal(0x22, rows[0].Op);
        Assert.Equal(0xDB, rows[1].Op);

        EventEditorList.Remove(parsed, rows[0]);
        rows = EventEditorList.Build(parsed);
        Assert.Equal(2, rows.Count);
        Assert.Equal(0xDB, rows[0].Op);

        var source = EventEditorList.FormatSource(parsed);
        var again = SceneScriptSource.Parse(source);
        Assert.True(again.Ok);
        Assert.Equal("station", again.Sections[0].Kind);
        Assert.Equal(1, again.Sections[0].Group);
        Assert.Equal(2, again.Sections[0].Sector);
        Assert.Equal(2, again.Sections[0].Commands.Count);
    }

    [Fact]
    public void TrySwitchFromSource_FailsOnParseErrors()
    {
        Assert.False(EventEditorList.TryBuild(
            """
            @station g0/s0
            NOT_A_COMMAND(
            """,
            dialogue: null,
            names: null,
            cast: null,
            out _,
            out var parsed));
        Assert.False(parsed.Ok);
    }

    [Fact]
    public void SessionSettings_RoundTripScriptEditorKind()
    {
        var files = new MemoryEditorFileSystem();
        var settings = new EditorSessionSettings { ScriptEditorKind = "event" };
        EditorSessionSettingsStore.Save(files, "session.json", settings);
        var loaded = EditorSessionSettingsStore.LoadOrDefault(files, "session.json");
        Assert.Equal(ScriptEditorKind.Event, ScriptEditorKindCodec.Parse(loaded.ScriptEditorKind));
    }

    [Fact]
    public void Classify_SelectMapAndBgmAndPortrait()
    {
        Assert.Equal(
            new EventEditorVisual(EventEditorVisualKind.Map, 197),
            EventEditorVisuals.Classify(new ScriptCommandData { Op = 0x08, Arg1 = 197 }));
        Assert.Equal(
            new EventEditorVisual(EventEditorVisualKind.Music, 114),
            EventEditorVisuals.Classify(new ScriptCommandData { Op = 0x44, Arg1 = 114 }));
        Assert.Equal(
            new EventEditorVisual(EventEditorVisualKind.Portrait, 2, 3),
            EventEditorVisuals.Classify(new ScriptCommandData { Op = 0x2E, ArgShort = 2, Arg1 = 3 }));
        Assert.Equal(
            EventEditorVisualKind.Jump,
            EventEditorVisuals.Classify(new ScriptCommandData { Op = 0xEB }).Kind);
        Assert.Equal(
            new EventEditorVisual(EventEditorVisualKind.Portrait, 0, 3),
            EventEditorVisuals.Classify(new ScriptCommandData { Op = 0xD0, ArgShort = 1 }, speakerId: 0, emotion: 3));
    }

    [Fact]
    public void VariantBranch_InheritsPortraitFromPriorPortraitCommand()
    {
        var parsed = SceneScriptSource.Parse("""
            @station g0/s0
            PORTRAIT(0, 0, 2)
            VARIANT(1, "Branch text")
            VARIANT_DEFAULT("Default text")
            RET
            """);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));
        var cast = new ScriptSceneCast([
            new ScriptCastMember(0, 1, 4, "Charmander", "MONSTER_CHARMANDER", "PLAYER"),
        ]);
        var rows = EventEditorList.Build(parsed, cast: cast);
        var variant = rows.First(row => row.Op == 0xD0);
        Assert.Equal(EventEditorVisualKind.Portrait, variant.Visual.Kind);
        Assert.Equal(0, variant.Visual.Id);
        Assert.Equal(2, variant.Visual.Extra);
        Assert.Equal("PLAYER (Charmander)", variant.SpeakerName);
        Assert.Equal("Branch text", variant.DialogueSnippet);
        Assert.Equal(EventEditorVisualKind.Portrait, rows.First(row => row.Op == 0xD1).Visual.Kind);
    }

    [Fact]
    public void SpeakerPortraits_FollowUpdateNameBindsNotLiveIndex()
    {
        var parsed = SceneScriptSource.Parse("""
            @live g1/s0.0 dlg0
            PORTRAIT(0, 2, 0)
            MSG_NPC(2, "Gyaoooh!")
            PORTRAIT(0, 4, 0)
            MSG_NPC(4, "You want more? I will take you on!")
            RET
            @live g1/s0.4 dlg0
            UPDATE_NAME(7, 2, 0)
            RET
            @live g1/s0.6 dlg0
            UPDATE_NAME(7, 4, 0)
            RET
            """);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));
        var cast = new ScriptSceneCast([
            new ScriptCastMember(0, 0, 4, "Charmander", "MONSTER_CHARMANDER", "PLAYER"),
            new ScriptCastMember(4, 96, 145, "Zapdos", "MONSTER_ZAPDOS"),
            new ScriptCastMember(6, 89, 6, "Charizard", "MONSTER_CHARIZARD"),
        ]);
        var rows = EventEditorList.Build(parsed, cast: cast);
        var zapdosLine = rows.First(row => row.DialogueSnippet == "Gyaoooh!");
        var charizardLine = rows.First(row =>
            row.DialogueSnippet is not null &&
            row.DialogueSnippet.Contains("You want more", StringComparison.Ordinal));
        Assert.Equal("Zapdos", zapdosLine.SpeakerName);
        Assert.Equal(4, zapdosLine.ResolvedLiveIndex);
        Assert.Equal(145, zapdosLine.ResolvedSpeciesId);
        Assert.Equal("Charizard", charizardLine.SpeakerName);
        Assert.Equal(6, charizardLine.ResolvedLiveIndex);
        Assert.Equal(6, charizardLine.ResolvedSpeciesId);
        Assert.Equal("Charizard", rows.First(row => row.Op == 0x2E && row.SpeakerId == 4).SpeakerName);
    }

    [Fact]
    public void SpeakerPortraits_UseSceneLiveBindsWhenSourceOmitsThem()
    {
        var parsed = SceneScriptSource.Parse("""
            @live g1/s0.0 dlg0
            MSG_NPC(4, "You want more? I will take you on!")
            RET
            """);
        Assert.True(parsed.Ok);
        var scene = new Scene { MapId = 1, Name = "Mt. Thunder Peak" };
        var group = new SceneGroup { Index = 1 };
        var sector = new SceneSector { Group = 1, Sector = 0 };
        for (var i = 0; i <= 6; i++)
        {
            var live = new SceneEntity
            {
                Kind = SceneEntityKind.Live,
                Group = 1,
                Sector = 0,
                Index = i,
                TypeId = (byte)i,
            };
            live.Scripts.Add(new EntityScriptSlot());
            sector.Lives.Add(live);
        }

        sector.Lives[6].Scripts[0].Commands.Add(new ScriptCommandData
        {
            Op = 0x2D,
            ArgByte = 7,
            ArgShort = 4,
        });
        group.Sectors.Add(sector);
        scene.Groups.Add(group);
        var cast = new ScriptSceneCast([
            new ScriptCastMember(4, 96, 145, "Zapdos", "MONSTER_ZAPDOS"),
            new ScriptCastMember(6, 89, 6, "Charizard", "MONSTER_CHARIZARD"),
        ]);
        var rows = EventEditorList.Build(parsed, cast: cast, scene: scene);
        var line = rows.First(row => row.Op == 0x34);
        Assert.Equal("Charizard", line.SpeakerName);
        Assert.Equal(6, line.ResolvedLiveIndex);
        Assert.Equal(6, line.ResolvedSpeciesId);
    }

    [Fact]
    public void TypeBoundSpeaker_DoesNotFallBackToLiveIndex()
    {
        var parsed = SceneScriptSource.Parse("""
            @live g1/s0.0 dlg0
            UPDATE_NAME(9, 6, 85)
            PORTRAIT(0, 6, 0)
            MSG_NPC(6, "Uh... Yeah...")
            RET
            """);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));
        var cast = new ScriptSceneCast([
            new ScriptCastMember(6, 89, 6, "Charizard", "MONSTER_CHARIZARD"),
        ]);
        var rows = EventEditorList.Build(
            parsed,
            cast: cast,
            resolveTypeSpecies: typeId => typeId == 85 ? (short)300 : (short)0,
            prettySpecies: species => species == 300 ? "Shiftry" : "Pokémon");
        var line = rows.First(row => row.Op == 0x34);
        Assert.Equal("Shiftry", line.SpeakerName);
        Assert.Equal(300, line.ResolvedSpeciesId);
        Assert.Null(line.ResolvedLiveIndex);
        Assert.Equal("Shiftry", rows.First(row => row.Op == 0x2E).SpeakerName);
    }

    [Fact]
    public void ForSection_ShowsOnlyTheChosenScript()
    {
        var parsed = SceneScriptSource.Parse("""
            @station g0/s0
            WAIT(1)
            RET
            @live g1/s0.0 dlg0
            MSG_NPC(0, "Hello")
            RET
            """);
        Assert.True(parsed.Ok);
        var rows = EventEditorList.Build(parsed);
        var scripts = EventEditorList.ListScripts(parsed);
        Assert.Equal(2, scripts.Count);
        var live = EventEditorList.ForSection(rows, scripts[1].SectionIndex);
        Assert.All(live, row => Assert.Equal("live", row.SectionKind));
        Assert.Contains(live, row => row.DialogueSnippet == "Hello");
        Assert.DoesNotContain(live, row => row.Op == 0xDB);
    }

    [Fact]
    public void Icons_AreDistinctThumbnails()
    {
        var jump = EventEditorVisuals.RenderIcon(EventEditorVisualKind.Jump);
        var music = EventEditorVisuals.RenderIcon(EventEditorVisualKind.Music);
        var fade = EventEditorVisuals.RenderIcon(EventEditorVisualKind.Fade);
        Assert.Equal(EventEditorVisuals.IconSize, jump.Width);
        Assert.True(CountOpaque(jump) > 8);
        Assert.NotEqual(Sample(jump, 10, 8), Sample(music, 10, 8));
        Assert.NotEqual(Sample(fade, 2, 8), Sample(fade, 13, 8));
    }

    [Fact]
    public void ScaleToFit_PreservesAspect()
    {
        var source = new RgbaImage(100, 50, new byte[100 * 50 * 4]);
        var fit = source.ScaleToFit(40, 40);
        Assert.Equal(40, fit.Width);
        Assert.Equal(20, fit.Height);
        Assert.Same(source, source.ScaleToFit(200, 200));
    }

    private static int CountOpaque(RgbaImage image)
    {
        var n = 0;
        for (var i = 3; i < image.Pixels.Length; i += 4)
        {
            if (image.Pixels[i] > 0)
                n++;
        }

        return n;
    }

    private static (byte R, byte G, byte B) Sample(RgbaImage image, int x, int y)
    {
        var i = (y * image.Width + x) * 4;
        return (image.Pixels[i], image.Pixels[i + 1], image.Pixels[i + 2]);
    }
}
