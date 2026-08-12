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
    public void MapEffectsSkipDormantSectorEffectSheets()
    {
        // Boss rooms host script-only effect entities (e.g. kind 4 on Zapdos).
        // Previewing them as efob sheets covers actors in cyan garbage.
        Assert.False(GroundEffectAtlas.ShouldPreviewSectorEffect(0));
        Assert.False(GroundEffectAtlas.ShouldPreviewSectorEffect(4));
        Assert.True(GroundEffectAtlas.ShouldPreviewSectorEffect(1));

        var scene = MakeEmptyScene(40, 30);
        scene.Groups[0].Sectors[0].Effects.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Effect,
            TypeId = 4,
            Index = 1,
            Position = new CompactPos(28, 20, 0, 4),
            Width = 1,
            Height = 1,
        });
        var vm = new GroundScriptVm(EmptyRom(), scene, group: 0, sector: 0);
        Assert.DoesNotContain(vm.MapEffects, e => e.Kind == 4);
    }

    [Fact]
    public void ScriptedPlayCentersCameraOnActorGroup()
    {
        var scene = MakeEmptyScene(mapW: 57, mapH: 57);
        scene.Groups[0].Sectors[0].Lives.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            TypeId = 1,
            Position = new CompactPos(24, 21, 0, 4),
            Index = 0,
        });
        scene.Groups[0].Sectors[0].Lives.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            TypeId = 96,
            Position = new CompactPos(28, 18, 0, 4),
            Index = 4,
        });
        scene.Groups[0].Sectors[0].Stations.Add(new ScriptRefData
        {
            Id = 1,
            Name = "station",
            Commands = [new ScriptCommandData { Op = 0xF0 }],
        });
        scene.Groups[0].Sectors[0].HasStation = true;

        var session = new ScenePlaySession(EmptyRom(), scene, 0, 0, scripted: true);
        // Camera should favor the actor cluster, not hang on the map origin.
        Assert.InRange(session.CameraX, 80, 200);
        Assert.InRange(session.CameraY, 40, 160);
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
    public void SelectWeatherStoresIdAndTintsCamera()
    {
        var scene = MakeEmptyScene(40, 30);
        scene.Groups[0].Sectors[0].Stations.Add(new ScriptRefData
        {
            Id = 1,
            Name = "station",
            Commands =
            [
                new ScriptCommandData { Op = 0x0B, Arg1 = 4 }, // SELECT_WEATHER RAIN
                new ScriptCommandData { Op = 0xF0 },
            ],
        });
        scene.Groups[0].Sectors[0].HasStation = true;
        var session = new ScenePlaySession(EmptyRom(), scene, 0, 0, scripted: true);
        session.Tick(1.0 / 60.0);
        Assert.Equal(4, session.WeatherId);
        session.EnsureBackground();
        var frame = session.RenderFrameImage();
        // Rain tint should push blue channel above red somewhere in the camera.
        var blueBias = false;
        for (var i = 0; i < frame.Pixels.Length; i += 4)
        {
            if (frame.Pixels[i + 2] > frame.Pixels[i] + 10)
            {
                blueBias = true;
                break;
            }
        }
        Assert.True(blueBias, "Expected rain weather blue tint on camera");
    }

    [Fact]
    public void RotateToStepsThroughDirectionsTowardTarget()
    {
        var vm = GroundScriptVm.FromCommands(
        [
            new ScriptCommandData { Op = 0x8B, ArgByte = 0, ArgShort = GroundScriptVm.DirSouth },
            // ROTATE_TO: ArgByte=frames, ArgShort=SPINRIGHT1(1), Arg1=West
            new ScriptCommandData
            {
                Op = 0x91,
                ArgByte = 8,
                ArgShort = 1, // DIR_TRANS_SPINRIGHT1
                Arg1 = GroundScriptVm.DirWest,
            },
            new ScriptCommandData { Op = 0xF0 },
        ]);
        vm.TickFrames(1);
        Assert.Equal(GroundScriptVm.DirSouth, vm.GetDirection(0));

        var sawEastish = false;
        for (var i = 0; i < 40 && !vm.Finished; i++)
        {
            vm.TickFrames(1);
            var dir = vm.GetDirection(0);
            if (dir is GroundScriptVm.DirEast or 1 or 7) // E / SE / SW during spin
                sawEastish = true;
            if (dir == GroundScriptVm.DirWest && i > 2)
                break;
        }

        Assert.True(sawEastish, "Expected intermediate facing while rotating");
        Assert.Equal(GroundScriptVm.DirWest, vm.GetDirection(0));
    }

    [Fact]
    public void WarpWaypointTeleportsLiveToLink()
    {
        var scene = MakeSceneWithLive(1, 5, 5, 40, 30);
        scene.Links.Add(new SceneLink
        {
            Position = new CompactPos(30, 20, 0, 0),
            Width = 1,
            Height = 1,
        });
        scene.Groups[0].Sectors[0].Stations.Add(new ScriptRefData
        {
            Id = 1,
            Name = "station",
            Commands =
            [
                new ScriptCommandData { Op = 0x5B, Arg1 = 0 }, // WARP_WAYPOINT link 0
                new ScriptCommandData { Op = 0xF0 },
            ],
        });
        scene.Groups[0].Sectors[0].HasStation = true;
        var session = new ScenePlaySession(EmptyRom(), scene, 0, 0, scripted: true);
        session.Tick(1.0 / 60.0);
        Assert.True(session.ScriptVm!.TryGetLivePixelPos(0, out var x, out var y));
        Assert.Equal(30 * 8, x);
        Assert.Equal(20 * 8, y);
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
    public void CameraPanFollowsLinkInsteadOfPlayer()
    {
        var scene = MakeSceneWithLive(typeId: 1, tileX: 20, tileY: 30, mapW: 80, mapH: 60);
        scene.Links.Add(new SceneLink
        {
            Position = new CompactPos(70, 10, 0, 0),
            Width = 1,
            Height = 1,
        });
        scene.Groups[0].Sectors[0].Stations.Add(new ScriptRefData
        {
            Id = 1,
            Name = "station",
            Commands =
            [
                new ScriptCommandData { Op = 0x98 }, // CAMERA_INIT_PAN
                new ScriptCommandData { Op = 0x86, ArgShort = 1, Arg1 = 0 }, // CAMERA_PAN link 0
                new ScriptCommandData { Op = 0xDB, ArgShort = 120 }, // WAIT
                new ScriptCommandData { Op = 0x99 }, // CAMERA_END_PAN
                new ScriptCommandData { Op = 0xF0 }, // HALT
            ],
        });
        scene.Groups[0].Sectors[0].HasStation = true;

        var session = new ScenePlaySession(EmptyRom(), scene, 0, 0, scripted: true);
        var playerCamX = session.CameraX;
        session.Tick(1.0 / 60.0);
        Assert.True(session.ScriptVm!.CameraPanActive);

        // Drive until camera has moved toward the eastern link.
        var movedTowardLink = false;
        for (var i = 0; i < 180 && !session.ScriptFinished; i++)
        {
            session.Tick(1.0 / 60.0);
            if (session.CameraX > playerCamX + 40)
            {
                movedTowardLink = true;
                break;
            }
        }

        Assert.True(movedTowardLink,
            $"Expected camera to pan toward link (x={70 * 8}), playerCam={playerCamX}, got CameraX={session.CameraX}");
        Assert.True(session.ScriptVm!.TryGetCameraFocus(out var fx, out _));
        Assert.True(fx > session.PlayerX + 40);
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
    public void DialogueFormatterSubstitutesPokemonAndNameSlotsWithTeamColors()
    {
        var ctx = new DialogueFormatContext(
            playerSpecies: 4,
            partnerSpecies: 1,
            names: ["Trielo", "Floyd", "Butterfree", "Caterpie"]);

        var text = DialogueFormatter.ForTextbox(
            "A {POKEMON_1}? I'm {NAME_0}. Help my {NAME_3}!",
            ctx);

        Assert.Contains("Bulbasaur", text, StringComparison.OrdinalIgnoreCase);
        Assert.Contains("Trielo", text, StringComparison.Ordinal);
        Assert.Contains("Caterpie", text, StringComparison.OrdinalIgnoreCase);
        Assert.DoesNotContain("{NAME_0}", text, StringComparison.Ordinal);
        Assert.DoesNotContain("{POKEMON_1}", text, StringComparison.Ordinal);
        Assert.DoesNotContain("{NAME_3}", text, StringComparison.Ordinal);

        var runs = DialogueRuns.Parse(text);
        Assert.Contains(runs, r => r.Text.Contains("Trielo", StringComparison.Ordinal) && r.Color == DialogueColor.Cyan);
        Assert.Contains(runs, r => r.Text.Contains("Bulbasaur", StringComparison.OrdinalIgnoreCase) && r.Color == DialogueColor.Yellow);
        Assert.Contains(runs, r => r.Text.Contains("Caterpie", StringComparison.OrdinalIgnoreCase) && r.Color == DialogueColor.Yellow);
    }

    [Fact]
    public void DialogueFormatterPreservesExplicitColorTags()
    {
        var text = DialogueFormatter.ForTextbox(
            "Hit {COLOR RED}Fire{RESET} with {color CYAN}Water{reset}!");
        Assert.Contains("{COLOR RED}", text, StringComparison.OrdinalIgnoreCase);
        Assert.Contains("{RESET}", text, StringComparison.OrdinalIgnoreCase);

        var runs = DialogueRuns.Parse(text);
        Assert.Contains(runs, r => r.Text == "Fire" && r.Color == DialogueColor.Red);
        Assert.Contains(runs, r => r.Text == "Water" && r.Color == DialogueColor.Cyan);
        Assert.Equal("Hit Fire with Water!", DialogueRuns.PlainText(text));
    }

    [Fact]
    public void DialogueRunsMeasureIgnoresControlTags()
    {
        var font = PixelFont.Load(null);
        var plain = font.Measure("Charmander");
        var tagged = DialogueRuns.Measure(font, "{COLOR CYAN}Charmander{RESET}");
        Assert.Equal(plain, tagged);
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
                // Garbage past JUMP_SCRIPT (ROM overrun used to fool ShouldScriptPlay).
                new ScriptCommandData { Op = 0x33, ArgShort = 1 },
            ],
        });
        group.Sectors.Add(sector);
        scene.Groups.Add(group);

        Assert.False(ScenePlayPresets.ShouldScriptPlay(scene, 0, 0));
    }

    [Fact]
    public void ResolvePlayTargetPrefersFirstEventCutsceneOverEnterControl()
    {
        var scene = new Scene { MapId = 173, Name = "Comet" };
        var enter = new SceneGroup { Index = 0 };
        var enterSector = new SceneSector { Group = 0, Sector = 0 };
        enterSector.Stations.Add(new ScriptRefData
        {
            Id = ScenePlayPresets.EnterControlScriptId,
            Type = 1,
            Commands =
            [
                new ScriptCommandData { Op = 0x08, Arg1 = 173 },
                new ScriptCommandData { Op = 0xE9, ArgShort = 355 },
            ],
        });
        enter.Sectors.Add(enterSector);

        var cutscene = new SceneGroup { Index = 1 };
        var cutSector = new SceneSector { Group = 1, Sector = 0 };
        cutSector.Stations.Add(new ScriptRefData
        {
            Id = ScenePlayPresets.EventControlScriptId,
            Type = ScenePlayPresets.EventScriptType,
            Commands =
            [
                new ScriptCommandData { Op = 0x0C, ArgShort = -1, ArgByte = 0 },
                new ScriptCommandData { Op = 0xDB, ArgShort = 60 },
                new ScriptCommandData { Op = 0xEF },
            ],
        });
        cutscene.Sectors.Add(cutSector);

        scene.Groups.Add(enter);
        scene.Groups.Add(cutscene);

        Assert.Equal((1, 0), ScenePlayPresets.ResolvePlayTarget(scene, 0, 0));
        Assert.Equal((1, 0), ScenePlayPresets.ResolvePlayTarget(scene, 1, 0));
    }

    [Fact]
    public void CometPlayFromMapHeaderStartsCutsceneNotInstantEnd()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10);
        var scene = database.FindScene(173);
        Assert.NotNull(scene);

        var (group, sector) = ScenePlayPresets.ResolvePlayTarget(scene!, 0, 0);
        Assert.Equal(1, group);
        Assert.Equal(0, sector);

        var session = new ScenePlaySession(rom, scene!, group, sector);
        Assert.True(session.IsScripted);
        for (var i = 0; i < 8 && session.DialogueMode == PlayDialogueMode.None; i++)
            session.Tick(1.0 / 60.0);
        Assert.False(session.ScriptFinished);
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
    public void PokemonSquareG32UsesXatuTelepathyAndRayquazaName()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var built = CatalogBuilder.Build(rom);
        var scene = built.Scenes.FindScene(1);
        Assert.NotNull(scene);

        var session = new ScenePlaySession(
            rom, scene!, group: 32, sector: 0,
            appearance: PlayAppearance.CharmanderAndBulbasaur,
            profile: built.Scenes.Profile,
            charmap: built.Charmap);
        Assert.True(session.IsScripted);

        // g32 does not FADE_OUT first — map should be visible under dialogue.
        Assert.Equal(0, session.ScriptVm!.FadeAlpha);

        for (var i = 0; i < 4000 && session.ScriptVm.DialogueSpeakerId != 9; i++)
        {
            if (session.ScriptVm.WaitingForAdvance)
                session.AdvanceDialogue();
            session.Tick(1.0 / 60);
        }

        Assert.Equal(9, session.ScriptVm.DialogueSpeakerId);
        Assert.Equal("Xatu", session.DialogueSpeakerLabel);
        Assert.DoesNotContain(
            session.ScriptVm.VisiblePortraits,
            p => p.NpcId == 9); // telepathy: emotion -2 hides face

        // Advance until the "You must ask {NAME_7}" line.
        for (var guard = 0; guard < 20; guard++)
        {
            if (session.DisplayDialogue?.Contains("ask", StringComparison.OrdinalIgnoreCase) == true)
                break;
            if (session.ScriptVm.WaitingForAdvance)
                session.AdvanceDialogue();
            for (var i = 0; i < 30; i++)
                session.Tick(1.0 / 60);
        }

        Assert.Contains("Rayquaza", session.DisplayDialogue ?? "", StringComparison.Ordinal);
        Assert.DoesNotContain("Charmander", session.DisplayDialogue ?? "", StringComparison.Ordinal);
    }

    [Fact]
    public void DialogueFormatterKeepsAccentedEInPokemon()
    {
        var text = DialogueFormatter.ForTextbox("wild Pokémon attacked!");
        Assert.Contains("Pokémon", text, StringComparison.Ordinal);
        Assert.Contains('é', text);
    }

    [Fact]
    public void DialogueRunsWrapsLongWordsInsteadOfOverflowing()
    {
        var font = PixelFont.Load(null);
        // Narrow budget forces a break inside Supercalifragilistic.
        var rich = "Supercalifragilistic";
        var (chunk, remainder) = DialogueRuns.TakeWidth(font, rich, maxWidth: 40);
        Assert.True(DialogueRuns.Measure(font, chunk) <= 40);
        Assert.False(string.IsNullOrEmpty(remainder));
        Assert.Equal(rich, DialogueRuns.PlainText(chunk) + DialogueRuns.PlainText(remainder));
    }

    [Fact]
    public void DialogueRunsPrefersBreakingAtSpaces()
    {
        var font = PixelFont.Load(null);
        var rich = "Hello there friend";
        var (chunk, remainder) = DialogueRuns.TakeWidth(font, rich, maxWidth: font.Measure("Hello there"));
        Assert.Equal("Hello there", DialogueRuns.PlainText(chunk).TrimEnd());
        Assert.StartsWith("friend", DialogueRuns.PlainText(remainder), StringComparison.Ordinal);
    }

    [Fact]
    public void QuietDialogueTextBudgetMatchesVanillaScriptLines()
    {
        // Retail MSG_QUIET uses the full 26-tile box (~200px text) with no thought icon.
        // This Squirtle Rock line is one scripted row; soft-wrap must not orphan "time".
        var font = PixelFont.Load(null);
        var line = "...That was so sudden, there was no time";
        var budget = GbaDialogueHud.TextWidthBudget(thoughtIcon: false, speechIcon: false);
        Assert.True(budget >= font.Measure(line), $"budget {budget} < line {font.Measure(line)}");
        var (chunk, remainder) = DialogueRuns.TakeWidth(font, line, budget);
        Assert.Equal(line, DialogueRuns.PlainText(chunk));
        Assert.Equal("", DialogueRuns.PlainText(remainder));
    }

    [Fact]
    public void DialogueBoxIsNearlyFullCameraWidth()
    {
        // Scene Play uses a wider box than retail 26 tiles so PMD2 glyphs + speaker
        // names wrap closer to how the line reads in-game.
        Assert.Equal(4, GbaDialogueHud.BoxX);
        Assert.Equal(232, GbaDialogueHud.BoxW);
        Assert.Equal(40, GbaDialogueHud.BoxH);
        Assert.True(GbaDialogueHud.BoxX * 2 + GbaDialogueHud.BoxW <= 240);
    }

    [Fact]
    public void NpcDialogueWithLongSpeakerKeepsScriptedLineIntact()
    {
        // MSG_NPC prepends "Butterfree: "; PMD2 glyphs make name+line wider than the
        // GBA screen, so the speaker must not steal wrap budget from the script line.
        var font = PixelFont.Load(null);
        var speaker = "Butterfree:";
        var line = "I'm sorry, I don't know how I could ever";
        var layout = GbaDialogueHud.PlanBoxTextLayout(font, speaker, line, thoughtIcon: false, speechIcon: false);
        Assert.True(layout.SpeakerOnOwnLine);
        Assert.True(layout.BodyWidthBudget >= font.Measure(line));
        var (chunk, remainder) = DialogueRuns.TakeWidth(font, line, layout.BodyWidthBudget);
        Assert.Equal(line, DialogueRuns.PlainText(chunk));
        Assert.Equal("", DialogueRuns.PlainText(remainder));
    }

    [Fact]
    public void AppearanceOnlyOverridesDynamicZeroSpeciesTypes()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var appearance = PlayAppearance.CharmanderAndBulbasaur;
        // Butterfree is a fixed species in the lives table — must not become Bulbasaur/Charmander.
        short butterfreeType = -1;
        for (var typeId = 0; typeId <= 255; typeId++)
        {
            var species = GroundLivesTypes.ResolveSpecies(rom, RomProfile.Us10, typeId);
            if (species == 12) // Butterfree
            {
                butterfreeType = (short)typeId;
                break;
            }
        }
        Assert.True(butterfreeType >= 0, "expected a Butterfree lives type in ROM");
        var resolved = GroundLivesTypes.ResolvePlaySpecies(
            rom, RomProfile.Us10, butterfreeType, appearance);
        Assert.Equal(12, resolved);
    }

    [Fact]
    public void PokemonSquareSceneComposesNonEmptyBackground()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var built = CatalogBuilder.Build(rom);
        var scene = built.Scenes.FindScene(1); // MAP_POKEMON_SQUARE
        Assert.NotNull(scene);
        Assert.NotNull(scene!.Map?.GroundMapAsset);
        var image = SceneCompositor.ComposeSceneImage(rom, scene, group: 31, sector: 0, showLives: false);
        Assert.True(image.Width > 240);
        Assert.True(image.Height > 160);
        Assert.Contains(image.Pixels, b => b != 0x30 && b != 0x38 && b != 255);
    }

    [Fact]
    public void PortraitPlacementMatchesRetailTiles()
    {
        var (x, y, flip) = GbaDialogueHud.ResolvePortraitPlacement(3); // RIGHT_BOTTOM_FLIP
        Assert.Equal(23 * 8, x);
        Assert.Equal(8 * 8, y);
        Assert.True(flip);
    }

    [Fact]
    public void AskChoiceJumpsToSelectedLabel()
    {
        // ASK3 + CHOICE(label) + LABEL — matches decomp ground_script.c menuAction → FindLabel.
        var cmds = new List<ScriptCommandData>
        {
            new() { Op = 0xD5, ArgByte = 0, ArgShort = -1, Arg1 = -1 }, // ASK3
            new() { Op = 0xD9, ArgShort = 1 }, // CHOICE → LABEL 1
            new() { Op = 0xD9, ArgShort = 2 }, // CHOICE → LABEL 2
            new() { Op = 0xF4, ArgShort = 1 },
            new() { Op = 0x34, ArgShort = -1 }, // MSG_NPC (Yes branch)
            new() { Op = 0xEF },
            new() { Op = 0xF4, ArgShort = 2 },
            new() { Op = 0x33, ArgShort = -1 }, // MSG_QUIET (No branch)
            new() { Op = 0xEF },
        };

        var vm = GroundScriptVm.FromActors([("talk", cmds, 0)]);
        for (var i = 0; i < 30 && !vm.WaitingForAdvance; i++)
            vm.TickFrames(1);

        Assert.True(vm.WaitingForAdvance);
        Assert.True(vm.WaitingForChoice);
        Assert.Equal(2, vm.Choices.Count);
        Assert.Equal(0, vm.ChoiceIndex);

        vm.MoveChoice(+1);
        Assert.Equal(1, vm.ChoiceIndex);
        vm.AdvanceDialogue(); // confirm second choice → LABEL 2

        for (var i = 0; i < 30 && !vm.WaitingForAdvance; i++)
            vm.TickFrames(1);

        Assert.True(vm.WaitingForAdvance);
        Assert.False(vm.WaitingForChoice);
        Assert.Equal(PlayDialogueMode.Quiet, vm.DialogueMode);
    }

    [Fact]
    public void AskChoiceDefaultSelectsFirstBranch()
    {
        var cmds = new List<ScriptCommandData>
        {
            new() { Op = 0xD5, ArgByte = 0, ArgShort = 0, Arg1 = -1 }, // default highlight = 0
            new() { Op = 0xD9, ArgShort = 10 },
            new() { Op = 0xD9, ArgShort = 20 },
            new() { Op = 0xF4, ArgShort = 10 },
            new() { Op = 0x34, ArgShort = -1 },
            new() { Op = 0xEF },
            new() { Op = 0xF4, ArgShort = 20 },
            new() { Op = 0x33, ArgShort = -1 },
            new() { Op = 0xEF },
        };

        var vm = GroundScriptVm.FromActors([("talk", cmds, 0)]);
        for (var i = 0; i < 30 && !vm.WaitingForAdvance; i++)
            vm.TickFrames(1);

        Assert.Equal(0, vm.ChoiceIndex);
        vm.AdvanceDialogue();
        for (var i = 0; i < 30 && !vm.WaitingForAdvance; i++)
            vm.TickFrames(1);

        Assert.Equal(PlayDialogueMode.Box, vm.DialogueMode); // MSG_NPC
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

    [Fact]
    public void ScriptedSessionHidesFreeRoamPlayerWhenFinished()
    {
        var scene = new Scene { MapId = 173, Name = "Comet" };
        var group = new SceneGroup { Index = 1 };
        var sector = new SceneSector { Group = 1, Sector = 0 };
        sector.Stations.Add(new ScriptRefData
        {
            Id = ScenePlayPresets.EventControlScriptId,
            Type = ScenePlayPresets.EventScriptType,
            Commands =
            [
                new ScriptCommandData { Op = 0x0C, ArgShort = -1, ArgByte = 0xFF },
                new ScriptCommandData { Op = 0xDB, ArgShort = 1 },
                new ScriptCommandData { Op = 0xEF },
            ],
        });
        group.Sectors.Add(sector);
        scene.Groups.Add(new SceneGroup { Index = 0 });
        scene.Groups.Add(group);

        var rom = EmptyRom();
        var session = new ScenePlaySession(rom, scene, group: 1, sector: 0, scripted: true);
        Assert.False(session.ShowFreeRoamPlayer);

        for (var i = 0; i < 10 && !session.ScriptFinished; i++)
            session.Tick(1.0 / 60.0);

        Assert.True(session.ScriptFinished);
        Assert.False(session.ShowFreeRoamPlayer);
        Assert.Equal(0, session.ActiveSector);
    }

    [Fact]
    public void RestartResetsScriptAndStartStation()
    {
        var scene = new Scene { MapId = 173, Name = "Comet" };
        var group = new SceneGroup { Index = 1 };
        var sector = new SceneSector { Group = 1, Sector = 0 };
        sector.Stations.Add(new ScriptRefData
        {
            Id = ScenePlayPresets.EventControlScriptId,
            Type = ScenePlayPresets.EventScriptType,
            Commands =
            [
                new ScriptCommandData { Op = 0x0C, ArgShort = -1, ArgByte = 0xFF },
                new ScriptCommandData { Op = 0xDB, ArgShort = 2 },
                new ScriptCommandData { Op = 0xEF },
            ],
        });
        group.Sectors.Add(sector);
        scene.Groups.Add(new SceneGroup { Index = 0 });
        scene.Groups.Add(group);

        var rom = EmptyRom();
        var session = new ScenePlaySession(rom, scene, group: 1, sector: 0, scripted: true);
        for (var i = 0; i < 20 && !session.ScriptFinished; i++)
            session.Tick(1.0 / 60.0);
        Assert.True(session.ScriptFinished);

        session.Restart();
        Assert.False(session.ScriptFinished);
        Assert.True(session.IsScripted);
        Assert.False(session.AllowFreeRoam);
        Assert.Equal(1, session.ActiveGroup);
        Assert.Equal(0, session.ActiveSector);
        Assert.False(session.ShowFreeRoamPlayer);
    }

    private static RomImage EmptyRom()
    {
        var path = Path.GetTempFileName();
        File.WriteAllBytes(path, new byte[0x100]);
        return RomImage.Open(path);
    }

    [Fact]
    public void AutoProgressAdvancesDialogueAfterHold()
    {
        var auto = new ScenePlayAutoProgress { Enabled = true, DialogueHoldSeconds = 0.5 };
        Assert.Equal(ScenePlayAutoProgress.Action.None,
            auto.Update(0.4, waitingForAdvance: true, scriptFinished: false, canGoNext: true));
        Assert.Equal(ScenePlayAutoProgress.Action.AdvanceDialogue,
            auto.Update(0.2, waitingForAdvance: true, scriptFinished: false, canGoNext: true));
    }

    [Fact]
    public void AutoProgressGoesNextWhenScriptFinished()
    {
        var auto = new ScenePlayAutoProgress { Enabled = true };
        Assert.Equal(ScenePlayAutoProgress.Action.NextScene,
            auto.Update(0.1, waitingForAdvance: false, scriptFinished: true, canGoNext: true));
        Assert.Equal(ScenePlayAutoProgress.Action.None,
            auto.Update(0.1, waitingForAdvance: false, scriptFinished: true, canGoNext: false));
    }

    [Fact]
    public void AutoProgressDisabledDoesNothing()
    {
        var auto = new ScenePlayAutoProgress { Enabled = false, DialogueHoldSeconds = 0.01 };
        Assert.Equal(ScenePlayAutoProgress.Action.None,
            auto.Update(1, waitingForAdvance: true, scriptFinished: true, canGoNext: true));
    }

    [Fact]
    public void MtBlazePeak_ScenePlay_MoltresHasBothWingTips()
    {
        var baserom = FindUpwards("baserom.gba");
        var root = FindRepoRoot();
        if (baserom is null || root is null) return;
        if (!File.Exists(Path.Combine(root, "src", "data", "ax", "moltres.h")))
            return;

        var rom = RomImage.Open(baserom);
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10);
        var scene = database.FindScene(197);
        Assert.NotNull(scene);

        var actors = new ActorSpriteAtlas(root, database.Profile);
        var session = new ScenePlaySession(
            rom, scene!, group: 1, sector: 0,
            actorSprites: actors,
            scripted: true,
            profile: database.Profile);

        for (var i = 0; i < 900 && !session.WaitingForAdvance; i++)
            session.Tick(1.0 / 60.0);

        var scriptField = typeof(ScenePlaySession).GetField(
            "_script", System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance);
        var vm = (GroundScriptVm?)scriptField?.GetValue(session);
        Assert.NotNull(vm);
        Assert.Equal(22, vm!.GetAnimation(2)); // Moltres wing flap while dialogue waits

        var drawn = actors.TryGetAnimatedSprite(146, 22, vm.GetDirection(2), tickFrames: 30);
        Assert.NotNull(drawn);
        Assert.True(drawn!.Value.Image.Width >= 72, $"Moltres too narrow: {drawn.Value.Image.Width}");
        var (tipL, tipR) = WingTipOpaque(drawn.Value.Image, tipCols: 8);
        Assert.True(tipL >= 20 && tipR >= 20, $"Wing tips L={tipL} R={tipR} — boss clipped");

        // 0x100D hold-first: must not flicker open↔slumped across Scene Play ticks.
        var drawnLater = actors.TryGetAnimatedSprite(146, 22, vm.GetDirection(2), tickFrames: 90);
        Assert.NotNull(drawnLater);
        Assert.True(
            drawn.Value.Image.Pixels.SequenceEqual(drawnLater!.Value.Image.Pixels),
            "Moltres anim 22 must stay on the first wing frame");

        var frame = session.RenderFrameImage(composeBackground: true);
        Assert.Equal(240, frame.Width);
        // Full map blit path must keep the assembled frame (not a sheet scrap).
        Assert.True(CountWarmBossPixels(frame) >= 200, "Moltres missing from Mt. Blaze camera");
    }

    private static (int Left, int Right) WingTipOpaque(RgbaImage image, int tipCols)
    {
        var left = 0;
        var right = 0;
        for (var y = 0; y < image.Height; y++)
        {
            for (var x = 0; x < tipCols && x < image.Width; x++)
            {
                if (image.Pixels[(y * image.Width + x) * 4 + 3] >= 8)
                    left++;
            }

            for (var x = Math.Max(0, image.Width - tipCols); x < image.Width; x++)
            {
                if (image.Pixels[(y * image.Width + x) * 4 + 3] >= 8)
                    right++;
            }
        }

        return (left, right);
    }

    private static int CountWarmBossPixels(RgbaImage frame)
    {
        var n = 0;
        for (var y = 0; y < 90; y++)
        {
            for (var x = 80; x < 180; x++)
            {
                var i = (y * frame.Width + x) * 4;
                var r = frame.Pixels[i];
                var g = frame.Pixels[i + 1];
                var b = frame.Pixels[i + 2];
                if (r > 150 && g > 90 && g < 200 && b < 100 && r > g + 10 && g > b + 25)
                    n++;
            }
        }

        return n;
    }

    private static string? FindRepoRoot()
    {
        var dir = new DirectoryInfo(AppContext.BaseDirectory);
        while (dir is not null)
        {
            if (Directory.Exists(Path.Combine(dir.FullName, "graphics", "ax", "mon")))
                return dir.FullName;
            dir = dir.Parent;
        }

        const string local = "/home/username/Github/pmd-red";
        return Directory.Exists(Path.Combine(local, "graphics", "ax", "mon")) ? local : null;
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
