using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class NamedConstantResyncTests
{
    [Fact]
    public void DiffDetectsRenameAddRemoveAndValueChange()
    {
        var editor = new NamedIdCatalog(
        [
            (7, "MUS_OLD_SQUARE"),
            (8, "MUS_GONE"),
            (9, "MUS_SAME"),
            (10, "MUS_MOVED"),
        ]);
        var header = new NamedIdCatalog(
        [
            (7, "MUS_POKE_SQUARE"),
            (9, "MUS_SAME"),
            (11, "MUS_ADDED"),
            (12, "MUS_MOVED"),
        ]);

        var deltas = NamedCatalogDiff.Compare("Music", editor, header);

        Assert.Contains(deltas, d =>
            d.Kind == NamedCatalogDeltaKind.Renamed &&
            d.Catalog == "Music" &&
            d.Id == 7 &&
            d.EditorName == "MUS_OLD_SQUARE" &&
            d.HeaderName == "MUS_POKE_SQUARE");
        Assert.Contains(deltas, d =>
            d.Kind == NamedCatalogDeltaKind.Removed && d.EditorName == "MUS_GONE");
        Assert.Contains(deltas, d =>
            d.Kind == NamedCatalogDeltaKind.Added && d.HeaderName == "MUS_ADDED");
        Assert.Contains(deltas, d =>
            d.Kind == NamedCatalogDeltaKind.ValueChanged &&
            d.EditorName == "MUS_MOVED" &&
            d.Id == 12);
    }

    [Fact]
    public void ParseOpcodeMacrosKeepsFirstCanonicalName()
    {
        var catalog = NamedIdCatalogs.ParseScriptOpcodeMacros("""
            #define LPARRAY(x) (ARRAY_COUNT(x)), x
            #define SELECT_MAP(m)                   { CMD_BYTE_08, 0, 0, m, 0, NULL }
            #define CANCEL_OFFSCREEN_LIVES          { CMD_BYTE_16, 0, 0, 0, 0, NULL }
            #define DEBUGINFO                       { CMD_BYTE_F6, 0, __LINE__, 0, 0, __FILE__ }
            #define DEBUGINFO_O(originalLineNum)    DEBUGINFO
            #define DEBUGINFO_O(originalLineNum)    { CMD_BYTE_F6, 0, originalLineNum, 0, 0, FAKE_FILENAME }
            """);

        Assert.Equal("SELECT_MAP", catalog.Format(8));
        Assert.Equal("CANCEL_OFFSCREEN_LIVES", catalog.Format(0x16));
        Assert.Equal("DEBUGINFO", catalog.Format(0xF6));
        Assert.True(catalog.TryGetId("DEBUGINFO_O", out var alias));
        Assert.Equal(0xF6, alias);
        Assert.False(catalog.TryGetId("LPARRAY", out _));
    }

    [Fact]
    public void ResyncReloadsRenamedConstantFromRelativeHeaderPaths()
    {
        using var repo = new TempDecompRepo();
        File.WriteAllText(repo.PathTo(NamedConstantSources.BgMusic), """
            enum MusicID
            {
                MUS_POKEMON_SQUARE = 7,
            };
            """);

        var first = NamedConstantResync.Run(repo.Root);
        Assert.True(first.Ok);
        Assert.Contains(NamedConstantSources.BgMusic, first.LoadedSources);
        Assert.True(first.Names!.Music.TryGetId("MUS_POKEMON_SQUARE", out var id));
        Assert.Equal(7, id);

        File.WriteAllText(repo.PathTo(NamedConstantSources.BgMusic), """
            enum MusicID
            {
                MUS_POKE_SQUARE = 7,
            };
            """);

        var second = NamedConstantResync.Run(repo.Root, previous: first.Names);
        Assert.True(second.Ok);
        Assert.True(second.Names!.Music.TryGetId("MUS_POKE_SQUARE", out id));
        Assert.Equal(7, id);
        Assert.False(second.Names.Music.TryGetId("MUS_POKEMON_SQUARE", out _));
        Assert.Contains(second.Deltas, d =>
            d.Kind == NamedCatalogDeltaKind.Renamed &&
            d.Catalog == "Music" &&
            d.EditorName == "MUS_POKEMON_SQUARE" &&
            d.HeaderName == "MUS_POKE_SQUARE");
        Assert.Contains("renamed", second.Summary, StringComparison.OrdinalIgnoreCase);
    }

    [Fact]
    public void ResyncReportsStaleOpcodeNamesVersusDataScriptHeader()
    {
        using var repo = new TempDecompRepo();
        File.WriteAllText(repo.PathTo(NamedConstantSources.DataScript), """
            #define PICK_MAP(m) { CMD_BYTE_08, 0, 0, m, 0, NULL }
            """);

        var result = NamedConstantResync.Run(repo.Root);
        Assert.True(result.Ok);
        Assert.Equal("PICK_MAP", result.Opcodes.Format(8));
        Assert.Contains(result.Deltas, d =>
            d.Kind == NamedCatalogDeltaKind.Renamed &&
            d.Catalog == "Opcode" &&
            d.Id == 8 &&
            d.EditorName == "SELECT_MAP" &&
            d.HeaderName == "PICK_MAP");
        Assert.Contains(result.Deltas, d =>
            d.Kind == NamedCatalogDeltaKind.Renamed &&
            d.Catalog == "OpcodeDocs" &&
            d.EditorName == "SELECT_MAP" &&
            d.HeaderName == "PICK_MAP");
        Assert.True(ScriptOpcodeNames.TryGetOp("PICK_MAP", result.Opcodes, out var op));
        Assert.Equal(8, op);
    }

    [Fact]
    public void ResyncParsesRenamedOpcodeInScriptSource()
    {
        using var repo = new TempDecompRepo();
        File.WriteAllText(repo.PathTo(NamedConstantSources.DataScript), """
            #define PICK_MAP(m) { CMD_BYTE_08, 0, 0, m, 0, NULL }
            """);

        var result = NamedConstantResync.Run(repo.Root);
        var parsed = ScriptSource.Parse("PICK_MAP(1)", names: result.Names);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));
        var command = Assert.Single(Assert.Single(parsed.Sections).Commands);
        Assert.Equal(0x08, command.Command.Op);
        Assert.Equal(1, command.Command.Arg1);
    }

    [Fact]
    public void ResyncFailsWhenRepositoryRootMissing()
    {
        var result = NamedConstantResync.Run(Path.Combine(Path.GetTempPath(), "no-such-pmd-red-" + Guid.NewGuid()));
        Assert.False(result.Ok);
        Assert.NotNull(result.Error);
        Assert.Empty(result.Deltas);
    }

    [Fact]
    public void HeaderSourcesAreRelativeToRepoRoot()
    {
        foreach (var relative in NamedConstantSources.All)
        {
            Assert.False(Path.IsPathRooted(relative), relative);
            Assert.DoesNotContain("..", relative.Split(Path.DirectorySeparatorChar, Path.AltDirectorySeparatorChar));
        }

        Assert.Contains(NamedConstantSources.BgMusic, NamedConstantSources.All);
        Assert.Contains(NamedConstantSources.DataScript, NamedConstantSources.All);
        Assert.Contains(NamedConstantSources.Monster, NamedConstantSources.All);
    }

    private sealed class TempDecompRepo : IDisposable
    {
        public TempDecompRepo()
        {
            Root = Path.Combine(Path.GetTempPath(), "named-resync-" + Guid.NewGuid().ToString("N"));
            Directory.CreateDirectory(Path.Combine(Root, "include", "constants"));
            Directory.CreateDirectory(Path.Combine(Root, "src"));
            File.WriteAllText(Path.Combine(Root, "charmap.txt"), "dummy\n");
        }

        public string Root { get; }

        public string PathTo(string relative)
        {
            var full = Path.Combine(Root, relative);
            Directory.CreateDirectory(Path.GetDirectoryName(full)!);
            return full;
        }

        public void Dispose()
        {
            try
            {
                Directory.Delete(Root, recursive: true);
            }
            catch (IOException)
            {
            }
        }
    }
}
