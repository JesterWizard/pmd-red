using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class ScenePlayTests
{
    [Fact]
    public void RenderFrameCanSkipBackgroundComposeForInstantOpen()
    {
        var scene = MakeEmptyScene(mapW: 40, mapH: 30);
        var rom = EmptyRom();
        var session = new ScenePlaySession(rom, scene, group: 0, sector: 0, scripted: false);
        Assert.False(session.HasBackground);
        var instant = session.RenderFrameImage(composeBackground: false);
        Assert.Equal(ScenePlaySession.CameraWidth, instant.Width);
        Assert.Equal(ScenePlaySession.CameraHeight, instant.Height);
        Assert.False(session.HasBackground);

        session.EnsureBackground();
        Assert.True(session.HasBackground);
        var full = session.RenderFrameImage(composeBackground: true);
        Assert.Equal(ScenePlaySession.CameraWidth, full.Width);
    }

    [Fact]
    public void SessionSpawnsAtFirstPlayerLive()
    {
        var scene = MakeSceneWithLive(typeId: 1, tileX: 5, tileY: 7, mapW: 40, mapH: 30);
        var rom = EmptyRom();
        var session = new ScenePlaySession(rom, scene, group: 0, sector: 0);
        Assert.Equal(5 * 8, session.PlayerX);
        Assert.Equal(7 * 8, session.PlayerY);
    }

    [Fact]
    public void SessionSpawnsAtMapCenterWithoutPlayerLive()
    {
        var scene = MakeEmptyScene(mapW: 40, mapH: 30);
        var rom = EmptyRom();
        var session = new ScenePlaySession(rom, scene, group: 0, sector: 0);
        Assert.Equal(20 * 8, session.PlayerX);
        Assert.Equal(15 * 8, session.PlayerY);
    }

    [Fact]
    public void TickMovesPlayerWithDpadAndUpdatesCamera()
    {
        var scene = MakeEmptyScene(mapW: 80, mapH: 60);
        var rom = EmptyRom();
        var session = new ScenePlaySession(rom, scene, group: 0, sector: 0);
        var startX = session.PlayerX;
        var startCamX = session.CameraX;
        session.SetButton(GbaButton.Right, true);
        session.Tick(0.5);
        Assert.True(session.PlayerX > startX);
        Assert.True(session.CameraX >= startCamX);
        Assert.Equal(240, ScenePlaySession.CameraWidth);
        Assert.Equal(160, ScenePlaySession.CameraHeight);
    }

    [Fact]
    public void TickClampsPlayerToMapBounds()
    {
        var scene = MakeEmptyScene(mapW: 40, mapH: 30);
        var rom = EmptyRom();
        var session = new ScenePlaySession(rom, scene, group: 0, sector: 0);
        session.SetButton(GbaButton.Left, true);
        session.SetButton(GbaButton.Up, true);
        session.Tick(10);
        Assert.Equal(0, session.PlayerX);
        Assert.Equal(0, session.PlayerY);
    }

    [Fact]
    public void RenderFrameReturnsNonEmptyGbaSizedPng()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10);
        var scene = database.FindScene(1) ?? database.Scenes.First();
        var assetsRoot = CatalogBuilder.FindRepositoryRoot(baserom);
        var actors = new ActorSpriteAtlas(assetsRoot, database.Profile);
        var objects = new ObjectSpriteAtlas(assetsRoot);
        var session = new ScenePlaySession(rom, scene, group: 0, sector: 0,
            actorSprites: actors, objectSprites: objects);
        var png = session.RenderFrame();
        Assert.NotEmpty(png);
        var image = RgbaImage.FromPng(png);
        Assert.NotNull(image);
        Assert.Equal(ScenePlaySession.CameraWidth, image!.Width);
        Assert.Equal(ScenePlaySession.CameraHeight, image.Height);
        Assert.Contains(image.Pixels, b => b != 0);
    }

    [Fact]
    public void DisplayDialogueStripsWaitPressAndFormatsLines()
    {
        var cleaned = DialogueFormatter.ForTextbox(
            "Huh?{WAIT_PRESS} You're a human?");
        Assert.Equal("Huh? You're a human?", cleaned);
    }

    [Fact]
    public void PixelFontAdvancesSoGlyphsDoNotStack()
    {
        var font = PixelFont.Load(null);
        Assert.True(font.Advance('A') >= 4);
        Assert.True(font.Measure("Where am I?") > font.Advance('W') * 2);

        var img = new RgbaImage(240, 160, new byte[240 * 160 * 4]);
        font.DrawCentered(img, "Where am I?", 120, 70, 255, 255, 255);
        // Ink should occupy more than one column near center.
        var cols = new HashSet<int>();
        for (var y = 70; y < 82; y++)
        for (var x = 0; x < 240; x++)
        {
            var o = (y * 240 + x) * 4;
            if (img.Pixels[o] > 200 && img.Pixels[o + 1] > 200 && img.Pixels[o + 2] > 200)
                cols.Add(x);
        }
        Assert.True(cols.Count > 20, $"expected spread glyphs, got {cols.Count} columns");
    }

    [Fact]
    public void CollisionRleDecodesWalkableAndSolidTiles()
    {
        var raw = new byte[] { 0x03, 0x83 };
        var tiles = BmaCollisionDecoder.DecodeCollisionLayer(raw, width: 4, height: 2, out var consumed);
        Assert.Equal(2, consumed);
        Assert.False(tiles[0]);
        Assert.False(tiles[3]);
        Assert.True(tiles[4]);
        Assert.True(tiles[7]);
    }

    [Fact]
    public void SessionBlocksWalkIntoSolidCollision()
    {
        var scene = MakeEmptyScene(mapW: 8, mapH: 8);
        var rom = EmptyRom();
        var solid = new bool[8 * 8];
        solid[4 * 8 + 5] = true;
        var collision = new GroundCollisionMap(8, 8, solid);
        var session = new ScenePlaySession(rom, scene, 0, 0, collision: collision);
        var startX = session.PlayerX;
        session.SetButton(GbaButton.Right, true);
        session.Tick(2);
        Assert.True(session.PlayerX < startX + 8);
        Assert.True(session.PlayerX >= startX);
    }

    [Fact]
    public void StationScriptAppliesSelectEntitiesAndQueuesSfx()
    {
        var scene = MakeSceneWithTwoSectorsAndStation(
            selectGroup: 0, selectSector: 1,
            musicId: 12, sfxId: 301, sfx2Id: 302);
        var rom = EmptyRom();
        var session = new ScenePlaySession(rom, scene, group: 0, sector: 0);
        Assert.Equal(0, session.ActiveGroup);
        Assert.Equal(1, session.ActiveSector);
        Assert.Equal(12, session.MusicId);
        var sfx = session.DrainPendingSfx();
        Assert.Contains(301, sfx);
        Assert.Contains(302, sfx);
    }

    [Fact]
    public void BootstrapStationAppliesBgmSwitchOpcode()
    {
        var scene = MakeEmptyScene(40, 30);
        scene.Groups[0].Sectors[0].Stations.Add(new ScriptRefData
        {
            Id = 1,
            Name = "station",
            Commands =
            [
                new ScriptCommandData { Op = 0x44, Arg1 = 7 }, // BGM_SWITCH
            ],
        });
        scene.Groups[0].Sectors[0].HasStation = true;
        var session = new ScenePlaySession(EmptyRom(), scene, 0, 0, scripted: false);
        Assert.Equal(7, session.MusicId);
        Assert.True(session.TryConsumeMusicChange(out var song));
        Assert.Equal(7, song);
    }

    [Fact]
    public void ScriptedSessionPropagatesBgmSwitchAndStop()
    {
        var commands = new List<ScriptCommandData>
        {
            new() { Op = 0x46, Arg1 = 101 }, // BGM_QUEUE
            new() { Op = 0x44, Arg1 = 10 }, // BGM_SWITCH
            new() { Op = 0x48, ArgShort = 30 }, // BGM_FADEOUT
            new() { Op = 0xEF },
        };
        var scene = MakeEmptyScene(40, 30);
        scene.Groups[0].Sectors[0].Stations.Add(new ScriptRefData
        {
            Id = 1,
            Name = "station",
            Commands = commands,
        });
        scene.Groups[0].Sectors[0].HasStation = true;
        var session = new ScenePlaySession(EmptyRom(), scene, 0, 0, scripted: true);
        session.Tick(1.0 / 60.0);
        Assert.True(session.TryConsumeMusicChange(out var first));
        Assert.Equal(101, first);
        session.Tick(1.0 / 60.0);
        Assert.True(session.TryConsumeMusicChange(out var second));
        Assert.Equal(10, second);
        session.Tick(1.0 / 60.0);
        Assert.True(session.TryConsumeMusicChange(out var stopped));
        Assert.Null(stopped);
    }

    [Fact]
    public void TinyWoodsBgmGoesHeartwarmingThenTheresTrouble()
    {
        // Scene graph anchors match retail layout; use baserom for scripting (vanilla has the same BGM beat).
        var romPath = FindUpwards("baserom.gba");
        if (romPath is null) return;

        var rom = RomImage.Open(romPath);
        var charmapPath = FindUpwards("charmap.txt");
        var charmap = charmapPath is null ? null : Charmap.FromFile(charmapPath);
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10, charmap: charmap);
        var scene = database.FindScene(ScenePlayPresets.TinyWoodsEntryMapId);
        Assert.NotNull(scene);

        var session = new ScenePlaySession(
            rom, scene!, 1, 0,
            charmap: charmap,
            appearance: new PlayAppearance(1, 4),
            profile: database.Profile,
            scripted: true);

        var music = new List<int?>();
        void Drain()
        {
            while (session.TryConsumeMusicChange(out var id))
                music.Add(id);
        }

        for (var i = 0; i < 30000 && !session.ScriptFinished; i++)
        {
            if (session.WaitingForAdvance)
                session.AdvanceDialogue();
            session.Tick(1.0 / 60.0);
            Drain();
            if (music.Contains(10))
                break;
        }

        Assert.True(music.Any(id => id == 101), $"Expected heartwarming (101). Got: [{string.Join(",", music)}]");
        Assert.True(music.Any(id => id is null), $"Expected fadeout. Got: [{string.Join(",", music)}]");
        Assert.True(music.Any(id => id == 10), $"Expected Theres Trouble (10). Got: [{string.Join(",", music)}]");
        var troubleAt = music.FindIndex(id => id == 10);
        var fadeBefore = music.FindLastIndex(troubleAt, id => id is null);
        Assert.True(fadeBefore >= 0 && fadeBefore < troubleAt,
            $"Theres Trouble must follow a fadeout. Sequence: [{string.Join(",", music)}]");
    }

    [Fact]
    public void TickDetectsLinkWhenPlayerEntersRect()
    {
        var scene = MakeEmptyScene(mapW: 40, mapH: 30);
        scene.Links.Add(new SceneLink
        {
            Position = new CompactPos(20, 15, 0, 0),
            Width = 2,
            Height = 2,
        });
        var rom = EmptyRom();
        var session = new ScenePlaySession(rom, scene, 0, 0);
        Assert.NotNull(session.ActiveLink);
    }

    [Fact]
    public void TryDecodeCollisionFromRetailBma()
    {
        var bmaPath = FindUpwards(Path.Combine("data", "map_bg", "T01P06m.bma"));
        if (bmaPath is null)
        {
            // FindUpwards only searches file names; try repo-relative from baserom.
            var baserom = FindUpwards("baserom.gba");
            if (baserom is null) return;
            var root = CatalogBuilder.FindRepositoryRoot(baserom);
            if (root is null) return;
            bmaPath = Path.Combine(root, "data", "map_bg", "T01P06m.bma");
            if (!File.Exists(bmaPath)) return;
        }

        var map = BmaCollisionDecoder.TryDecode(File.ReadAllBytes(bmaPath));
        Assert.NotNull(map);
        Assert.Equal(63, map!.WidthTiles);
        Assert.Equal(48, map.HeightTiles);
        Assert.Contains(true, Enumerable.Range(0, map.WidthTiles * map.HeightTiles)
            .Select(i => map.IsSolidTile(i % map.WidthTiles, i / map.WidthTiles)));
        Assert.Contains(false, Enumerable.Range(0, map.WidthTiles * map.HeightTiles)
            .Select(i => map.IsSolidTile(i % map.WidthTiles, i / map.WidthTiles)));
    }

    [Fact]
    public void PlayTeamSpeciesPicksDistinctPlayerAndPartner()
    {
        var rng = new Random(42);
        for (var i = 0; i < 40; i++)
        {
            var (player, partner) = PlayTeamSpecies.PickRandom(rng);
            Assert.Contains(player, PlayTeamSpecies.Starters);
            Assert.Contains(partner, PlayTeamSpecies.Partners);
            Assert.NotEqual(player, partner);
        }
    }

    [Fact]
    public void TinyWoodsIntroPresetUsesGroup1()
    {
        var scene = new Scene { MapId = ScenePlayPresets.TinyWoodsEntryMapId, Name = "Tiny Woods" };
        var (g, s) = ScenePlayPresets.ResolvePlayTarget(scene, group: 0, sector: 0);
        Assert.Equal(1, g);
        Assert.Equal(0, s);
        Assert.True(ScenePlayPresets.IsTinyWoodsIntro(scene, g, s));
    }

    [Fact]
    public void EventControlStationScriptsEvenWithoutMsgOpcodes()
    {
        // Tiny Woods end (179 g1) is EVENT_CONTROL with BGM/cues but no MSG_* in the station body.
        var scene = new Scene { MapId = 179, Name = "Tiny Woods End" };
        var group = new SceneGroup { Index = 1 };
        var sector = new SceneSector { Group = 1, Sector = 0 };
        sector.Stations.Add(new ScriptRefData
        {
            Id = ScenePlayPresets.EventControlScriptId,
            Type = ScenePlayPresets.EventScriptType,
            Commands =
            [
                new ScriptCommandData { Op = 0x0C, ArgShort = -1, ArgByte = 0 },
                new ScriptCommandData { Op = 0x44, Arg1 = 101 },
                new ScriptCommandData { Op = 0xE3, ArgShort = 3 },
                new ScriptCommandData { Op = 0xEF },
            ],
        });
        group.Sectors.Add(sector);
        // pad group 0 so ElementAtOrDefault(1) works
        scene.Groups.Add(new SceneGroup { Index = 0 });
        scene.Groups.Add(group);

        Assert.True(ScenePlayPresets.ShouldScriptPlay(scene, 1, 0));
    }

    [Fact]
    public void EnterControlStationStaysFreeRoam()
    {
        var scene = new Scene { MapId = 178, Name = "Tiny Woods" };
        var group = new SceneGroup { Index = 0 };
        var sector = new SceneSector { Group = 0, Sector = 0 };
        sector.Stations.Add(new ScriptRefData
        {
            Id = ScenePlayPresets.EnterControlScriptId,
            Type = 1,
            Commands =
            [
                new ScriptCommandData { Op = 0x08, Arg1 = 178 },
                new ScriptCommandData { Op = 0x47 },
                new ScriptCommandData { Op = 0xE9, ArgShort = 1 },
            ],
        });
        group.Sectors.Add(sector);
        scene.Groups.Add(group);

        Assert.False(ScenePlayPresets.ShouldScriptPlay(scene, 0, 0));
    }

    [Fact]
    public void TinyWoodsEndRomStationIsScripted()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10);
        var scene = database.FindScene(179);
        Assert.NotNull(scene);
        Assert.True(ScenePlayPresets.ShouldScriptPlay(scene!, 1, 0));

        var session = new ScenePlaySession(rom, scene!, group: 1, sector: 0);
        Assert.True(session.IsScripted);
        Assert.False(session.AllowFreeRoam);
    }

    [Fact]
    public void TinyWoodsIntroSessionIsScriptedWithCharmanderBulbasaur()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var charmapPath = FindUpwards("charmap.txt");
        Charmap? charmap = charmapPath is null ? null : Charmap.FromFile(charmapPath);
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10, charmap: charmap);
        var scene = database.FindScene(ScenePlayPresets.TinyWoodsEntryMapId);
        Assert.NotNull(scene);

        var appearance = PlayAppearance.CharmanderAndBulbasaur;
        var assetsRoot = CatalogBuilder.FindRepositoryRoot(baserom);
        var actors = new ActorSpriteAtlas(assetsRoot, database.Profile);
        var session = new ScenePlaySession(
            rom, scene!, group: 0, sector: 0,
            actorSprites: actors,
            charmap: charmap,
            appearance: appearance);

        Assert.True(session.IsScripted);
        Assert.Equal(1, session.ActiveGroup);
        Assert.Equal(4, session.PlayerSpecies);
        Assert.Equal(1, session.PartnerSpecies);
        Assert.False(session.AllowFreeRoam);

        // Skip FADE/WAIT preamble until dialogue or entities.
        for (var i = 0; i < 400 && string.IsNullOrEmpty(session.Dialogue); i++)
            session.Tick(1.0 / 60.0);

        Assert.False(string.IsNullOrWhiteSpace(session.Dialogue));
        Assert.Contains("Where am I", session.Dialogue!, StringComparison.OrdinalIgnoreCase);
        Assert.DoesNotContain("{WAIT_PRESS}", session.DisplayDialogue, StringComparison.Ordinal);
        Assert.Contains("Where am I", session.DisplayDialogue, StringComparison.OrdinalIgnoreCase);
        Assert.Equal(PlayDialogueMode.OnBackground, session.DialogueMode);

        var png = session.RenderFrame();
        Assert.NotEmpty(png);
        var image = RgbaImage.FromPng(png);
        Assert.NotNull(image);
        Assert.Equal(240, image!.Width);
        Assert.Equal(160, image.Height);
    }

    [Fact]
    public void DialogueFormatterSplitsWaitPressPages()
    {
        var pages = DialogueFormatter.SplitPages(
            "Huh?{WAIT_PRESS} You're a human?{NEW_LINE}Really?");
        Assert.Equal(2, pages.Count);
        Assert.Equal("Huh?", pages[0]);
        Assert.Contains("You're a human?", pages[1]);
    }

    [Fact]
    public void PortraitPlacementMatchesRetailTiles()
    {
        var (x, y, flip) = GbaDialogueHud.ResolvePortraitPlacement(3); // RIGHT_BOTTOM_FLIP
        Assert.Equal(23 * 8, x);
        Assert.Equal(8 * 8, y);
        Assert.True(flip);
    }

    private static Scene MakeEmptyScene(int mapW, int mapH)
    {
        var scene = new Scene { MapId = 99, Name = "PlayTest" };
        scene.Map = new GroundMapDefinition { MapId = 99, Name = "PlayTest" };
        scene.Diagnostics.Add($"playMapTiles:{mapW}x{mapH}");
        var group = new SceneGroup { Index = 0 };
        group.Sectors.Add(new SceneSector { Group = 0, Sector = 0 });
        scene.Groups.Add(group);
        return scene;
    }

    private static Scene MakeSceneWithLive(byte typeId, byte tileX, byte tileY, int mapW, int mapH)
    {
        var scene = MakeEmptyScene(mapW, mapH);
        scene.Groups[0].Sectors[0].Lives.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            TypeId = typeId,
            Position = new CompactPos(tileX, tileY, 0, 0),
            DisplayName = "Player",
            Index = 0,
        });
        return scene;
    }

    private static Scene MakeSceneWithTwoSectorsAndStation(
        int selectGroup, int selectSector, int musicId, int sfxId, int sfx2Id)
    {
        var scene = MakeEmptyScene(40, 30);
        scene.Groups[0].Sectors.Add(new SceneSector { Group = 0, Sector = 1 });
        var station = new ScriptRefData
        {
            Id = 1,
            Name = "station",
            Commands =
            [
                new ScriptCommandData { Op = 0x0C, ArgShort = (short)selectGroup, ArgByte = (byte)selectSector },
                new ScriptCommandData { Op = 0x46, Arg1 = musicId },
                new ScriptCommandData { Op = 0x49, Arg1 = sfxId },
                new ScriptCommandData { Op = 0x4C, Arg1 = sfx2Id },
            ],
        };
        scene.Groups[0].Sectors[0].Stations.Add(station);
        scene.Groups[0].Sectors[0].HasStation = true;
        return scene;
    }

    private static RomImage EmptyRom()
    {
        var path = Path.GetTempFileName();
        File.WriteAllBytes(path, new byte[0x100]);
        return RomImage.Open(path);
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
