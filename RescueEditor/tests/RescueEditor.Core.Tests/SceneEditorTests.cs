using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class SceneEditorTests
{
    [Fact]
    public void ScriptCommandRoundTripsBytes()
    {
        var original = new ScriptCommandData
        {
            Op = 0x34,
            ArgByte = 0x01,
            ArgShort = 2,
            Arg1 = 3,
            Arg2 = -4,
            ArgPtr = 0x08123456,
        };
        var bytes = original.ToBytes();
        Assert.Equal(16, bytes.Length);

        var path = Path.GetTempFileName();
        try
        {
            File.WriteAllBytes(path, bytes);
            var rom = RomImage.Open(path);
            var decoded = ScriptCommandData.Read(rom, 0);
            Assert.Equal(original.Op, decoded.Op);
            Assert.Equal(original.ArgByte, decoded.ArgByte);
            Assert.Equal(original.ArgShort, decoded.ArgShort);
            Assert.Equal(original.Arg1, decoded.Arg1);
            Assert.Equal(original.Arg2, decoded.Arg2);
            Assert.Equal(original.ArgPtr, decoded.ArgPtr);
        }
        finally
        {
            File.Delete(path);
        }
    }

    [Fact]
    public void CompactPosRoundTrips()
    {
        Span<byte> buffer = stackalloc byte[4];
        var pos = new CompactPos(12, 34, CompactPos.FlagHalfTile, 0);
        pos.Write(buffer);
        var path = Path.GetTempFileName();
        try
        {
            File.WriteAllBytes(path, buffer.ToArray());
            var rom = RomImage.Open(path);
            var decoded = CompactPos.Read(rom, 0);
            Assert.Equal(pos, decoded);
            Assert.Equal(12 * 8 + 4, decoded.PixelX);
        }
        finally
        {
            File.Delete(path);
        }
    }

    [Fact]
    public void ChangeServiceSupportsUndoRedo()
    {
        var entity = new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            Position = new CompactPos(1, 2, 0, 0),
            DisplayName = "Live 1",
            RomOffset = 0x100,
            RawBytes = new byte[24],
        };
        var changes = new ChangeService();
        SceneEditing.MoveEntity(changes, entity, new CompactPos(5, 6, 0, 0));
        Assert.Equal(5, entity.Position.XTiles);
        Assert.True(changes.CanUndo);
        changes.Undo();
        Assert.Equal(1, entity.Position.XTiles);
        Assert.True(changes.CanRedo);
        changes.Redo();
        Assert.Equal(5, entity.Position.XTiles);
    }

    [Fact]
    public void SetEntityHalfTileFlagsUpdatesPixelAnchorAndUndoes()
    {
        var entity = new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            TypeId = 1,
            Width = 1,
            Height = 1,
            Position = new CompactPos(5, 7, 0, 0),
            DisplayName = "Live 1",
            RomOffset = 0x100,
            RawBytes = new byte[24],
        };
        Assert.Equal(5 * 8, entity.PixelX);
        Assert.Equal(7 * 8, entity.PixelY);

        var changes = new ChangeService();
        SceneEditing.SetEntityHalfTileFlags(changes, entity, halfX: true, halfY: true);
        Assert.Equal(CompactPos.FlagHalfTile, entity.Position.XFlags);
        Assert.Equal(CompactPos.FlagHalfTile, entity.Position.YFlags);
        Assert.Equal(5 * 8 + 4, entity.PixelX);
        Assert.Equal(7 * 8 + 4, entity.PixelY);

        changes.Undo();
        Assert.Equal(0, entity.Position.XFlags);
        Assert.Equal(0, entity.Position.YFlags);
        Assert.Equal(5 * 8, entity.PixelX);
    }

    [Fact]
    public void ProjectDocumentSerializesAndReloads()
    {
        var path = Path.Combine(Path.GetTempPath(), "rescue-temple-test.rtproj");
        try
        {
            var project = new ProjectDocument
            {
                Name = "Test",
                BaseRomPath = "/tmp/baserom.gba",
                BaseRomSha1 = RomImage.ExpectedRetailSha1,
            };
            project.Edits.Add(new ProjectEdit
            {
                Id = "1",
                Kind = "entity.position",
                Target = "0x100",
                Values = { ["x"] = "3", ["y"] = "4" },
            });
            project.Save(path);
            var loaded = ProjectDocument.Load(path);
            Assert.Equal("Test", loaded.Name);
            Assert.Single(loaded.Edits);
            Assert.Equal("entity.position", loaded.Edits[0].Kind);
        }
        finally
        {
            if (File.Exists(path))
                File.Delete(path);
        }
    }

    [Fact]
    public void PngCodecRoundTripsRgbaImage()
    {
        var image = new RgbaImage(2, 1, [1, 2, 3, 255, 4, 5, 6, 255]);
        var png = image.ToPng();
        var decoded = RgbaImage.FromPng(png);
        Assert.NotNull(decoded);
        Assert.Equal(2, decoded!.Width);
        Assert.Equal(1, decoded.Height);
        Assert.Equal(image.Pixels, decoded.Pixels);
    }

    [Fact]
    public void MutableRomWritesDoNotAffectSourceImage()
    {
        var path = Path.GetTempFileName();
        try
        {
            File.WriteAllBytes(path, [0x10, 0x20, 0x30, 0x40]);
            var rom = RomImage.Open(path);
            var mutable = MutableRom.From(rom);
            mutable.WriteByte(0, 0xFF);
            Assert.Equal(0x10, rom.ReadByte(0));
            Assert.Equal(0xFF, mutable.ReadByte(0));
        }
        finally
        {
            File.Delete(path);
        }
    }

    [Fact]
    public void SceneGraphParsesPokemonSquareFromBaserom()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        Assert.True(RomProfile.Us10.Matches(rom));
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10);
        Assert.True(database.Scenes.Count > 100);
        var square = database.FindScene(1);
        Assert.NotNull(square);
        Assert.True(square!.Groups.Count > 10);
        Assert.Contains(square.AllEntities, entity => entity.Kind == SceneEntityKind.Live);
        Assert.NotEmpty(database.FunctionScripts);
        Assert.Equal("END_TALK", database.FunctionScripts[0].Name);

        var png = SceneCompositor.ComposeScenePng(rom, square, group: 0, sector: 1);
        Assert.True(png.AsSpan(0, 4).SequenceEqual(new byte[] { 0x89, 0x50, 0x4E, 0x47 }));
    }

    [Fact]
    public void RomBuilderWritesEntityMoveToCopy()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10);
        var scene = database.FindScene(1);
        Assert.NotNull(scene);
        var entity = scene!.AllEntities.First(item => item.Kind == SceneEntityKind.Live && item.RomOffset > 0);
        var original = entity.Position;
        entity.Position = new CompactPos(
            (byte)((original.XTiles + 1) & 0xFF),
            original.YTiles,
            original.XFlags,
            original.YFlags);

        var project = ProjectDocument.Create(rom, RomProfile.Us10);
        project.Edits.Add(new ProjectEdit
        {
            Id = "move",
            Kind = "entity.position",
            Target = $"0x{entity.RomOffset:X}",
            Values =
            {
                ["x"] = entity.Position.XTiles.ToString(),
                ["y"] = entity.Position.YTiles.ToString(),
                ["xFlags"] = entity.Position.XFlags.ToString(),
                ["yFlags"] = entity.Position.YFlags.ToString(),
            },
        });

        var output = Path.Combine(Path.GetTempPath(), "rescue-temple-build-test.gba");
        try
        {
            var report = RomBuilder.Build(rom, database, project, output);
            Assert.True(report.Success, string.Join("; ", report.Errors));
            var rebuilt = RomImage.Open(output);
            var pos = CompactPos.Read(rebuilt, entity.RomOffset + 4);
            Assert.Equal(entity.Position.XTiles, pos.XTiles);
            Assert.Equal(original.XTiles, CompactPos.Read(rom, entity.RomOffset + 4).XTiles);
        }
        finally
        {
            if (File.Exists(output))
                File.Delete(output);
        }
    }

    [Fact]
    public void SceneLintRejectsNonRetailWrites()
    {
        var path = Path.GetTempFileName();
        try
        {
            File.WriteAllBytes(path, new byte[64]);
            var rom = RomImage.Open(path);
            var database = new SceneDatabase { Profile = RomProfile.Us10 };
            var lint = SceneLint.Validate(rom, database);
            Assert.Contains(lint.Errors, error => error.Contains("writable US 1.0", StringComparison.OrdinalIgnoreCase));
        }
        finally
        {
            File.Delete(path);
        }
    }

    [Fact]
    public void FreeSpaceAllocatorFindsEmptyRegion()
    {
        var bytes = new byte[0x200];
        Array.Fill(bytes, (byte)0xFF, 0x100, 0x80);
        var mutable = new MutableRom(bytes, "test", "sha", RomProfile.Us10);
        var offset = FreeSpaceAllocator.FindFreeSpace(mutable, 16, alignment: 4, start: 0x100);
        Assert.Equal(0x100, offset);
    }

    [Fact]
    public void AddAndRemoveEntityUpdatesSectorList()
    {
        var sector = new SceneSector { Group = 0, Sector = 0, RomOffset = 0x200 };
        var changes = new ChangeService();
        var added = SceneEditing.AddEntity(changes, sector, SceneEntityKind.Object, new CompactPos(3, 4, 0, 0));
        Assert.Single(sector.Objects);
        Assert.True(sector.ObjectsListDirty);
        Assert.Equal(3, added.Position.XTiles);

        SceneEditing.RemoveEntity(changes, sector, added);
        Assert.Empty(sector.Objects);
        changes.Undo();
        Assert.Single(sector.Objects);
    }

    [Fact]
    public void SetCommandArgumentSupportsOpcodeAndPtr()
    {
        var command = new ScriptCommandData { Op = 0x34, Arg1 = 1, ArgPtr = 0x08000000, RomOffset = 0x300 };
        var changes = new ChangeService();
        SceneEditing.SetCommandArgument(changes, command, "op", 0x35);
        SceneEditing.SetCommandArgument(changes, command, "argPtr", unchecked((int)0x08123456));
        Assert.Equal(0x35, command.Op);
        Assert.Equal(0x08123456u, command.ArgPtr);
        changes.Undo();
        Assert.Equal(0x08000000u, command.ArgPtr);
    }

    [Fact]
    public void SetEntitySizeAndTypeRoundTripThroughChangeService()
    {
        var entity = new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            TypeId = 1,
            Width = 1,
            Height = 1,
            DisplayName = "Live 1",
            RomOffset = 0x400,
            RawBytes = new byte[24],
        };
        var changes = new ChangeService();
        SceneEditing.SetEntityType(changes, entity, 7);
        SceneEditing.SetEntitySize(changes, entity, 2, 3);
        Assert.Equal(7, entity.TypeId);
        Assert.Equal(2, entity.Width);
        Assert.Equal(3, entity.Height);
        changes.Undo();
        Assert.Equal(1, entity.Width);
        changes.Undo();
        Assert.Equal(1, entity.TypeId);
    }

    [Fact]
    public void ComposeScenePngSupportsLabelsAndGrid()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10);
        var scene = database.FindScene(1);
        Assert.NotNull(scene);
        var png = SceneCompositor.ComposeScenePng(
            rom, scene!, group: 0, sector: 1, drawLabels: true, showGrid: true, hudDialogue: "Hello");
        Assert.True(png.AsSpan(0, 4).SequenceEqual(new byte[] { 0x89, 0x50, 0x4E, 0x47 }));
    }

    [Fact]
    public void ComposeScenePngDrawsActorsFromAllVisibleSectors()
    {
        var path = Path.GetTempFileName();
        try
        {
            File.WriteAllBytes(path, new byte[64]);
            var rom = RomImage.Open(path);
            var scene = new Scene { MapId = 99, Name = "Test" };
            var group = new SceneGroup { Index = 0 };
            var sector0 = new SceneSector { Group = 0, Sector = 0 };
            var sector1 = new SceneSector { Group = 0, Sector = 1 };
            sector0.Lives.Add(new SceneEntity
            {
                Kind = SceneEntityKind.Live,
                TypeId = 1,
                Width = 1,
                Height = 1,
                Position = new CompactPos(2, 3, 0, 0),
                DisplayName = "A",
                Index = 0,
            });
            sector1.Lives.Add(new SceneEntity
            {
                Kind = SceneEntityKind.Live,
                TypeId = 2,
                Width = 1,
                Height = 1,
                Position = new CompactPos(20, 10, 0, 0),
                DisplayName = "B",
                Index = 0,
            });
            group.Sectors.Add(sector0);
            group.Sectors.Add(sector1);
            scene.Groups.Add(group);

            var both = SceneCompositor.ComposeScenePng(
                rom, scene, group: 0, sector: 0,
                visibleSectors: new HashSet<int> { 0, 1 });
            var bothImage = RgbaImage.FromPng(both);
            Assert.NotNull(bothImage);
            Assert.True(IsLiveMarker(bothImage!, 2 * 8, 3 * 8), "sector 0 actor missing");
            Assert.True(IsLiveMarker(bothImage!, 20 * 8, 10 * 8), "sector 1 actor missing");

            var only0 = SceneCompositor.ComposeScenePng(
                rom, scene, group: 0, sector: 0,
                visibleSectors: new HashSet<int> { 0 });
            var only0Image = RgbaImage.FromPng(only0);
            Assert.NotNull(only0Image);
            Assert.True(IsLiveMarker(only0Image!, 2 * 8, 3 * 8));
            Assert.False(IsLiveMarker(only0Image!, 20 * 8, 10 * 8), "hidden sector actor should not draw");
        }
        finally
        {
            File.Delete(path);
        }
    }

    [Fact]
    public void GroundLivesTypesResolvesSpeciesFromRomTable()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        Assert.Equal(0, GroundLivesTypes.ResolveSpecies(rom, RomProfile.Us10, 0));
        Assert.Equal(53, GroundLivesTypes.ResolveSpecies(rom, RomProfile.Us10, 72)); // Persian NPC
        Assert.Equal(380, GroundLivesTypes.ResolveSpecies(rom, RomProfile.Us10, 70)); // Kecleon
    }

    [Fact]
    public void GroundLivesTypesPreviewSpeciesUsesStartersForPlayerSlots()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        // ROM table stores 0 for dynamic player/partner kinds — editor preview stand-ins:
        Assert.Equal(1, GroundLivesTypes.ResolvePreviewSpecies(rom, RomProfile.Us10, 1)); // Bulbasaur
        Assert.Equal(4, GroundLivesTypes.ResolvePreviewSpecies(rom, RomProfile.Us10, 2)); // Charmander
        Assert.Equal(7, GroundLivesTypes.ResolvePreviewSpecies(rom, RomProfile.Us10, 3)); // Squirtle
        // Type 0 remaps to a player kind at runtime — default hero stand-in.
        Assert.Equal(1, GroundLivesTypes.ResolvePreviewSpecies(rom, RomProfile.Us10, 0));
        // Static NPC species still win.
        Assert.Equal(53, GroundLivesTypes.ResolvePreviewSpecies(rom, RomProfile.Us10, 72));
    }

    [Fact]
    public void ActorSpriteAtlasDrawsStarterSpritesForPlayerLiveTypes()
    {
        var baserom = FindUpwards("baserom.gba");
        var repo = FindRepositoryRoot();
        if (baserom is null || repo is null)
            return;

        var rom = RomImage.Open(baserom);
        var atlas = new ActorSpriteAtlas(repo, RomProfile.Us10);
        Assert.NotNull(atlas.TryGetForLive(rom, null, 1));
        Assert.NotNull(atlas.TryGetForLive(rom, null, 2));
        Assert.NotNull(atlas.TryGetForLive(rom, null, 3));
        Assert.NotNull(atlas.TryGetForLive(rom, null, 0));

        var scene = new Scene { MapId = 99, Name = "PlayerSlots" };
        var group = new SceneGroup { Index = 0 };
        var sector = new SceneSector { Group = 0, Sector = 0 };
        sector.Lives.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            TypeId = 0,
            Width = 1,
            Height = 1,
            Position = new CompactPos(5, 5, 0, 0),
            DisplayName = "Hero",
            Index = 0,
        });
        sector.Lives.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            TypeId = 4,
            Width = 1,
            Height = 1,
            Position = new CompactPos(5, 7, 0, 0),
            DisplayName = "Partner",
            Index = 1,
        });
        group.Sectors.Add(sector);
        scene.Groups.Add(group);

        var image = RgbaImage.FromPng(SceneCompositor.ComposeScenePng(rom, scene, actorSprites: atlas));
        Assert.NotNull(image);
        Assert.False(IsLiveMarker(image!, 5 * 8, 5 * 8), "player type 0 should not be blue marker");
        Assert.False(IsLiveMarker(image!, 5 * 8, 7 * 8), "partner type 4 should not be blue marker");
    }

    [Fact]
    public void ActorSpriteAtlasLoadsStandingFrameFromDecompTree()
    {
        var repo = FindRepositoryRoot();
        if (repo is null)
            return;

        var atlas = new ActorSpriteAtlas(repo);
        var persian = atlas.TryGetSpeciesSprite(53);
        Assert.NotNull(persian);
        Assert.Equal(32, persian!.Width);
        Assert.Equal(32, persian.Height);
        Assert.True(CountOpaque(persian) > 100);
    }

    [Fact]
    public void ActorSpriteAtlasResolvesLiveSpriteWhenRomProfileDoesNotMatch()
    {
        var baserom = FindUpwards("baserom.gba");
        var repo = FindRepositoryRoot();
        if (baserom is null || repo is null)
            return;

        // Simulate a non-matching ROM profile (hack build): atlas must still use Us10 anchors.
        var rom = RomImage.Open(baserom);
        var atlas = new ActorSpriteAtlas(repo, RomProfile.Us10);
        var sprite = atlas.TryGetForLive(rom, profile: null, typeId: 72);
        Assert.NotNull(sprite);
        Assert.True(CountOpaque(sprite!) > 100);
    }

    [Fact]
    public void SceneVisibilityDefaultsToSelectedSectorOnly()
    {
        var visible = SceneVisibility.ResolveVisibleSectorIds(
            sectorIds: [0, 1, 2, 7],
            selectedSectorId: 1,
            hiddenSectorIds: new HashSet<int>(),
            soloSectorId: null);
        Assert.Equal(new HashSet<int> { 1 }, visible);

        var solo = SceneVisibility.ResolveVisibleSectorIds(
            sectorIds: [0, 1, 2],
            selectedSectorId: 0,
            hiddenSectorIds: new HashSet<int>(),
            soloSectorId: 2);
        Assert.Equal(new HashSet<int> { 2 }, solo);

        var hidden = SceneVisibility.ResolveVisibleSectorIds(
            sectorIds: [0, 1],
            selectedSectorId: 1,
            hiddenSectorIds: new HashSet<int> { 1 },
            soloSectorId: null);
        Assert.Empty(hidden);
    }

    [Fact]
    public void ReentrancyGateBlocksNestedRefresh()
    {
        var gate = new ReentrancyGate();
        var runs = 0;
        gate.Run(() =>
        {
            runs++;
            gate.Run(() => runs++); // nested must no-op
            Assert.True(gate.IsEntered);
        });
        Assert.Equal(1, runs);
        Assert.False(gate.IsEntered);

        // After exit, a new refresh is allowed.
        gate.Run(() => runs++);
        Assert.Equal(2, runs);
    }

    [Fact]
    public void SelectSectorResolvesComboIndexBySectorId()
    {
        // Sparse sector ids: combo index 2 is sector 7, not SelectedIndex==7.
        var sectors = new[] { 0, 1, 7, 8 };
        Assert.Equal(2, SceneVisibility.IndexOfSectorId(sectors, 7));
        Assert.Equal(-1, SceneVisibility.IndexOfSectorId(sectors, 3));
        Assert.Equal(0, SceneVisibility.IndexOfSectorId(sectors, 0));
    }

    [Fact]
    public void ActorSpriteAtlasResolvesAssetsRootFromNestedHint()
    {
        var repo = FindRepositoryRoot();
        if (repo is null)
            return;

        var nested = Path.Combine(repo, "RescueEditor", "src");
        if (!Directory.Exists(nested))
            nested = Path.Combine(repo, "src");
        if (!Directory.Exists(nested))
            return;

        var resolved = ActorSpriteAtlas.ResolveAssetsRoot(nested);
        Assert.True(Directory.Exists(Path.Combine(resolved, "graphics", "ax", "mon")));
        var atlas = new ActorSpriteAtlas(nested, RomProfile.Us10);
        Assert.NotNull(atlas.TryGetSpeciesSprite(25)); // Pikachu
    }

    [Fact]
    public void ComposeScenePngDrawsPokemonSpritesForLives()
    {
        var baserom = FindUpwards("baserom.gba");
        var repo = FindRepositoryRoot();
        if (baserom is null || repo is null)
            return;

        var rom = RomImage.Open(baserom);
        var atlas = new ActorSpriteAtlas(repo);
        var scene = new Scene { MapId = 99, Name = "SpriteTest" };
        var group = new SceneGroup { Index = 0 };
        var sector = new SceneSector { Group = 0, Sector = 0 };
        sector.Lives.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            TypeId = 72, // Persian
            Width = 1,
            Height = 1,
            Position = new CompactPos(10, 10, 0, 0),
            DisplayName = "Persian",
            Index = 0,
        });
        group.Sectors.Add(sector);
        scene.Groups.Add(group);

        var png = SceneCompositor.ComposeScenePng(rom, scene, actorSprites: atlas);
        var image = RgbaImage.FromPng(png);
        Assert.NotNull(image);

        // Sprite is centered on the entity pixel position; should not be the flat marker color.
        var cx = 10 * 8;
        var cy = 10 * 8;
        Assert.False(IsLiveMarker(image!, cx, cy), "expected Pokémon sprite, not blue marker");
        Assert.True(HasNonBackgroundColorNear(image!, cx, cy, radius: 12));
    }

    [Fact]
    public void ComposeSceneImageAppliesLiveDirectionFacing()
    {
        var baserom = FindUpwards("baserom.gba");
        var repo = FindRepositoryRoot();
        if (baserom is null || repo is null)
            return;

        var rom = RomImage.Open(baserom);
        var atlas = new ActorSpriteAtlas(repo);
        var south = ComposeLiveFacing(rom, atlas, GroundScriptVm.DirSouth);
        var east = ComposeLiveFacing(rom, atlas, GroundScriptVm.DirEast);
        Assert.False(ImagesEqual(south, east),
            "East-facing live must differ from South-facing (direction sheet/flip)");

        var west = ComposeLiveFacing(rom, atlas, GroundScriptVm.DirWest);
        Assert.False(ImagesEqual(east, west),
            "East flip must differ from West (same sheet, opposite flip)");
    }

    private static RgbaImage ComposeLiveFacing(RomImage rom, ActorSpriteAtlas atlas, int direction)
    {
        var scene = new Scene { MapId = 99, Name = "FacingTest" };
        var group = new SceneGroup { Index = 0 };
        var sector = new SceneSector { Group = 0, Sector = 0 };
        sector.Lives.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            TypeId = 72, // Persian — single-piece AX, clear E/W flip
            Width = 1,
            Height = 1,
            Position = new CompactPos(10, 10, 0, 0),
            DirectionOrFlags = (byte)direction,
            DisplayName = "Persian",
            Index = 0,
        });
        group.Sectors.Add(sector);
        scene.Groups.Add(group);
        return SceneCompositor.ComposeSceneImage(rom, scene, actorSprites: atlas);
    }

    private static bool ImagesEqual(RgbaImage a, RgbaImage b)
    {
        if (a.Width != b.Width || a.Height != b.Height)
            return false;
        return a.Pixels.AsSpan().SequenceEqual(b.Pixels);
    }

    [Fact]
    public void ObjectSpriteAtlasLoadsOrnamentStandingFrame()
    {
        var repo = FindRepositoryRoot();
        if (repo is null)
            return;

        var atlas = new ObjectSpriteAtlas(repo);
        Assert.True(ObjectSpriteFolders.TryGetFolder(67, out var stairsFolder));
        Assert.Equal("Stairs01", stairsFolder);
        var stairs = atlas.TryGetForObject(67);
        Assert.NotNull(stairs);
        Assert.True(CountOpaque(stairs!) > 20);

        Assert.Null(atlas.TryGetForObject(4)); // invisible / no fileName
    }

    [Fact]
    public void ComposeScenePngDrawsObjectSpritesInsteadOfPlaceholders()
    {
        var baserom = FindUpwards("baserom.gba");
        var repo = FindRepositoryRoot();
        if (baserom is null || repo is null)
            return;

        var rom = RomImage.Open(baserom);
        var objects = new ObjectSpriteAtlas(repo);
        var scene = new Scene { MapId = 99, Name = "ObjectSpriteTest" };
        var group = new SceneGroup { Index = 0 };
        var sector = new SceneSector { Group = 0, Sector = 0 };
        sector.Objects.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Object,
            TypeId = 67, // Stairs01
            Width = 1,
            Height = 1,
            Position = new CompactPos(12, 8, 0, 0),
            DisplayName = "Stairs",
            Index = 0,
        });
        group.Sectors.Add(sector);
        scene.Groups.Add(group);

        var png = SceneCompositor.ComposeScenePng(rom, scene, objectSprites: objects);
        var image = RgbaImage.FromPng(png);
        Assert.NotNull(image);
        var cx = 12 * 8;
        var cy = 8 * 8;
        Assert.False(IsObjectMarker(image!, cx, cy), "expected ornament sprite, not amber marker");
        Assert.True(HasNonBackgroundColorNear(image!, cx, cy, radius: 12));
    }

    [Fact]
    public void ComposeSceneImageDrawsGroundEffectSpriteInsteadOfPurpleRect()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var effects = new GroundEffectAtlas(rom);
        Assert.NotNull(effects.TryGetForEffect(3));

        var scene = new Scene { MapId = 99, Name = "EffectSpriteTest" };
        var group = new SceneGroup { Index = 0 };
        var sector = new SceneSector { Group = 0, Sector = 0 };
        sector.Effects.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Effect,
            TypeId = 3,
            Width = 1,
            Height = 1,
            Position = new CompactPos(10, 10, 0, 0),
            DisplayName = "Effect 3",
            Index = 0,
        });
        group.Sectors.Add(sector);
        scene.Groups.Add(group);

        var image = SceneCompositor.ComposeSceneImage(rom, scene, groundEffects: effects);
        var cx = 10 * 8;
        var cy = 10 * 8;
        Assert.False(IsEffectMarker(image, cx, cy), "expected efob sprite, not purple marker");
        Assert.True(HasNonBackgroundColorNear(image, cx, cy, radius: 16));
    }

    private static bool IsEffectMarker(RgbaImage image, int x, int y)
    {
        if (x < 0 || y < 0 || x >= image.Width || y >= image.Height)
            return false;
        var offset = (y * image.Width + x) * 4;
        return image.Pixels[offset] == 0xC0 &&
               image.Pixels[offset + 1] == 0x60 &&
               image.Pixels[offset + 2] == 0xFF;
    }

    private static bool IsObjectMarker(RgbaImage image, int x, int y)
    {
        if (x < 0 || y < 0 || x >= image.Width || y >= image.Height)
            return false;
        var offset = (y * image.Width + x) * 4;
        return image.Pixels[offset] == 0xF0 &&
               image.Pixels[offset + 1] == 0xC0 &&
               image.Pixels[offset + 2] == 0x40;
    }

    private static bool IsLiveMarker(RgbaImage image, int x, int y)
    {
        if (x < 0 || y < 0 || x >= image.Width || y >= image.Height)
            return false;
        var offset = (y * image.Width + x) * 4;
        // Live overlay color from SceneCompositor.DrawEntities: 0x40, 0xC0, 0xFF
        return image.Pixels[offset] == 0x40 &&
               image.Pixels[offset + 1] == 0xC0 &&
               image.Pixels[offset + 2] == 0xFF;
    }

    private static int CountOpaque(RgbaImage image)
    {
        var count = 0;
        for (var i = 3; i < image.Pixels.Length; i += 4)
        {
            if (image.Pixels[i] > 0)
                count++;
        }
        return count;
    }

    private static bool HasNonBackgroundColorNear(RgbaImage image, int cx, int cy, int radius)
    {
        for (var dy = -radius; dy <= radius; dy++)
        for (var dx = -radius; dx <= radius; dx++)
        {
            var x = cx + dx;
            var y = cy + dy;
            if (x < 0 || y < 0 || x >= image.Width || y >= image.Height)
                continue;
            var offset = (y * image.Width + x) * 4;
            // Fallback canvas is 0x30,0x30,0x38 — sprites introduce other colors.
            if (image.Pixels[offset] != 0x30 ||
                image.Pixels[offset + 1] != 0x30 ||
                image.Pixels[offset + 2] != 0x38)
                return true;
        }
        return false;
    }

    private static string? FindRepositoryRoot()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is not null)
            return CatalogBuilder.FindRepositoryRoot(baserom);
        var marker = FindUpwards("charmap.txt");
        return marker is null ? null : Path.GetDirectoryName(marker);
    }

    [Fact]
    public void RomBuilderRewritesDirtyEntityList()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10);
        var scene = database.FindScene(1);
        Assert.NotNull(scene);
        var sector = scene!.Groups[0].Sectors.First(s => s.RomOffset >= 0 && s.Objects.Count >= 0);
        var changes = new ChangeService();
        var project = ProjectDocument.Create(rom, RomProfile.Us10);
        changes.Attach(project, database);
        var added = SceneEditing.AddEntity(changes, sector, SceneEntityKind.Object, new CompactPos(10, 12, 0, 0));
        Assert.True(sector.ObjectsListDirty);

        var output = Path.Combine(Path.GetTempPath(), "rescue-temple-list-rewrite-test.gba");
        try
        {
            var report = RomBuilder.Build(rom, database, project, output);
            Assert.True(report.Success, string.Join("; ", report.Errors));
            Assert.True(added.RomOffset >= 0);
            var rebuilt = RomImage.Open(output);
            var pos = CompactPos.Read(rebuilt, added.RomOffset + 4);
            Assert.Equal(10, pos.XTiles);
            Assert.Equal(12, pos.YTiles);
        }
        finally
        {
            if (File.Exists(output))
                File.Delete(output);
        }
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
