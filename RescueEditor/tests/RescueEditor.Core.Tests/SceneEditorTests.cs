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
