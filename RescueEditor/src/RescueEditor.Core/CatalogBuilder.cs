namespace RescueEditor.Core;

public static class CatalogBuilder
{
    public static (AssetCatalog Catalog, Charmap Charmap, SceneDatabase Scenes) Build(
        RomImage rom,
        string? repositoryRootOverride = null,
        string? charmapPathOverride = null,
        IProgress<string>? progress = null)
    {
        void Report(string message) => progress?.Report(message);

        Report("Locating repository assets…");
        var repositoryRoot = repositoryRootOverride ?? FindRepositoryRoot(rom.Path);
        var charmapPath = charmapPathOverride
            ?? Path.Combine(repositoryRoot, "charmap.txt");
        if (!File.Exists(charmapPath))
            charmapPath = Path.Combine(AppContext.BaseDirectory, "charmap.txt");

        Report("Loading charmap…");
        var charmap = Charmap.FromFile(charmapPath);
        var catalog = new AssetCatalog();
        var diagnostics = new List<string>();

        Report("Indexing portraits…");
        // Embedded retail tables cover US 1.0; fall back to decomp sources only if empty.
        var portraits = KaoIndexer.IndexRetail()
            .Where(asset => rom.IsRangeValid(asset.Offset, asset.Size) &&
                            rom.IsRangeValid(asset.AuxiliaryOffset, asset.AuxiliarySize))
            .ToArray();
        if (portraits.Length == 0)
        {
            portraits = KaoIndexer.Index(repositoryRoot)
                .Where(asset => rom.IsRangeValid(asset.Offset, asset.Size) &&
                                rom.IsRangeValid(asset.AuxiliaryOffset, asset.AuxiliarySize))
                .ToArray();
        }
        catalog.AddRange(PortraitSheetGrouping.GroupBySpecies(portraits));

        Report("Indexing title backgrounds…");
        catalog.AddRange(TitleBackgroundIndexer.Index()
            .Where(asset => rom.IsRangeValid(asset.Offset, asset.Size) &&
                            rom.IsRangeValid(asset.AuxiliaryOffset, asset.AuxiliarySize)));

        Report("Indexing effects…");
        var effects = EffectIndexer.IndexRetail()
            .Where(asset => rom.IsRangeValid(asset.Offset, Math.Max(1, asset.Size)))
            .ToArray();
        if (effects.Length == 0)
            effects = EffectIndexer.Index(repositoryRoot).ToArray();
        catalog.AddRange(effects);

        Report("Scanning pksdir0 archives…");
        var archives = RomArchiveParser.FindArchives(rom);
        Report($"Found {archives.Count} archive(s); indexing raw entries…");
        foreach (var archive in archives)
        {
            var isGroundArchive = archive.Entries.Any(entry =>
                entry.Name.Length >= 3 &&
                (entry.Name.EndsWith('c') || entry.Name.EndsWith('m')) &&
                entry.Name.Contains('P', StringComparison.OrdinalIgnoreCase));
            foreach (var entry in archive.Entries)
            {
                var kind = isGroundArchive && IsGroundFileName(entry.Name)
                    ? AssetKind.GroundFile
                    : AssetKind.Raw;
                catalog.Add(new AssetDescriptor
                {
                    Id = $"archive:{archive.HeaderOffset:X}:{entry.Name}:{entry.Offset:X}",
                    Name = entry.Name,
                    Category = AssetCategory.RawArchives,
                    Kind = kind,
                    Offset = entry.Offset,
                    Size = entry.Size,
                    Format = isGroundArchive ? "ground archive" : "pksdir0",
                    Description = $"{archive.Name}, {entry.Size:N0} bytes",
                    Metadata = new Dictionary<string, string>
                    {
                        ["archive"] = archive.Name,
                    },
                });
            }
        }

        Report("Composing ground map sets…");
        catalog.AddRange(GroundMapIndexer.Index(rom, archives));

        Report("Building authoritative scene graph…");
        var profile = RomProfile.TryMatch(rom);
        var scenes = SceneGraphParser.Parse(rom, profile, catalog, charmap, progress);
        foreach (var scene in scenes.Scenes)
        {
            var entityCount = scene.AllEntities.Count();
            catalog.Add(new AssetDescriptor
            {
                Id = $"scene:{scene.MapId}",
                Name = $"{scene.MapId:D3}: {scene.Name}",
                Category = AssetCategory.Scenes,
                Kind = AssetKind.Scene,
                Offset = scene.HeaderOffset,
                Size = 12,
                Format = "GroundScriptHeader",
                Description = $"{scene.Groups.Count} groups, {entityCount} entities, {scene.Links.Count} links",
                Metadata = new Dictionary<string, string>
                {
                    ["mapId"] = scene.MapId.ToString(),
                    ["bma"] = scene.Map?.BmaName ?? string.Empty,
                    ["groups"] = scene.Groups.Count.ToString(),
                    ["entities"] = entityCount.ToString(),
                },
            });
        }
        diagnostics.AddRange(scenes.Diagnostics);

        Report("Scanning dialogue and scripts…");
        var (dialogue, scripts) = ScriptIndexer.Index(rom, charmap);
        catalog.AddRange(dialogue);
        catalog.AddRange(scripts);

        Report("Indexing music and sound effects…");
        catalog.AddRange(SoundIndexer.Index(repositoryRoot, rom));

        Report("Indexing C Patch offerings…");
        catalog.AddRange(CPatchCatalog.BuildOfferings());
        var runtimeConfig = RuntimeConfigCodec.TryLoad(rom, repositoryRoot);
        if (runtimeConfig.HasRomBacking)
            diagnostics.Add(runtimeConfig.StatusMessage);
        else
            diagnostics.Add(runtimeConfig.StatusMessage);

        if (portraits.Length == 0)
            diagnostics.Add("No portraits were found in this ROM.");
        if (archives.Count == 0)
            diagnostics.Add("No valid pksdir0 archives were found; raw archive and ground entries are unavailable.");
        if (dialogue.Count == 0)
            diagnostics.Add("No dialogue command pointers were recognized in this ROM.");
        if (!rom.Info.IsKnownRetailRom)
            diagnostics.Add($"SHA-1 {rom.Sha1} does not match the documented US 1.0 baserom.");

        Report($"Done — {catalog.Assets.Count:N0} assets indexed.");
        catalog.SetDiagnostics(diagnostics);
        return (catalog, charmap, scenes);
    }

    private static bool IsGroundFileName(string name)
    {
        return name.Length >= 3 &&
            (name.EndsWith('c') || name.EndsWith('m') || name.Contains('P'));
    }

    public static string FindRepositoryRoot(string romPath)
    {
        string? fallback = null;
        foreach (var start in CandidateRoots(romPath))
        {
            var current = new DirectoryInfo(start);
            while (current is not null)
            {
                var hasActorSprites = Directory.Exists(Path.Combine(current.FullName, "graphics", "ax", "mon")) ||
                                      Directory.Exists(Path.Combine(current.FullName, "graphics", "ornament"));
                var looksLikeRepo =
                    File.Exists(Path.Combine(current.FullName, "charmap.txt")) ||
                    Directory.Exists(Path.Combine(current.FullName, "sound", "songs")) ||
                    Directory.Exists(Path.Combine(current.FullName, "data", "kao")) ||
                    Directory.Exists(Path.Combine(current.FullName, "src"));

                if (hasActorSprites)
                    return current.FullName;
                if (looksLikeRepo)
                    fallback ??= current.FullName;

                current = current.Parent;
            }
        }

        return fallback
            ?? Path.GetDirectoryName(Path.GetFullPath(romPath))
            ?? Environment.CurrentDirectory;
    }

    private static IEnumerable<string> CandidateRoots(string romPath)
    {
        yield return Path.GetDirectoryName(Path.GetFullPath(romPath)) ?? Environment.CurrentDirectory;
        yield return Environment.CurrentDirectory;
        yield return AppContext.BaseDirectory;
    }
}
