namespace RescueEditor.Core;

/// <summary>Cached KAO portraits keyed by species id + emotion name.</summary>
public sealed class PortraitAtlas
{
    private readonly RomImage _rom;
    private readonly string? _repositoryRoot;
    private readonly Dictionary<(int Species, string Emotion), RgbaImage?> _cache = new();
    private readonly Dictionary<string, List<AssetDescriptor>> _bySpeciesName;
    private readonly IReadOnlyDictionary<int, string> _folders;

    public PortraitAtlas(RomImage rom, string? repositoryRoot = null)
    {
        _rom = rom;
        _repositoryRoot = string.IsNullOrWhiteSpace(repositoryRoot)
            ? null
            : ActorSpriteAtlas.ResolveAssetsRoot(repositoryRoot);
        _folders = MonsterSpriteFolders.Load(_repositoryRoot ?? ".");
        var assets = new List<AssetDescriptor>();
        if (_repositoryRoot is not null)
            assets.AddRange(KaoIndexer.Index(_repositoryRoot));
        if (assets.Count == 0)
            assets.AddRange(KaoIndexer.IndexRetail());

        _bySpeciesName = assets
            .GroupBy(a => a.Metadata.GetValueOrDefault("species", ""), StringComparer.OrdinalIgnoreCase)
            .ToDictionary(g => g.Key, g => g.ToList(), StringComparer.OrdinalIgnoreCase);
    }

    public RgbaImage? TryGet(short speciesId, int emotion)
    {
        var emotionName = GroundScriptVm.EmotionName(emotion);
        var key = ((int)speciesId, emotionName);
        if (_cache.TryGetValue(key, out var cached))
            return cached;

        var folder = _folders.TryGetValue(speciesId, out var mapped)
            ? mapped
            : MonsterSpriteFolders.ForSpecies(speciesId, _folders);

        // Prefer ROM retail tables (correct AT4PX + palette). PNG dumps are a fallback
        // for emotions missing from the ROM table.
        RgbaImage? image = null;
        if (folder is not null && _bySpeciesName.TryGetValue(folder, out var list))
            image = TryRenderRom(list, emotionName);
        if (image is null && folder is not null)
            image = TryLoadPng(folder, emotionName) ?? TryLoadPng(folder, "Normal");
        if (image is null && _bySpeciesName.TryGetValue(speciesId.ToString(), out var byId))
            image = TryRenderRom(byId, emotionName);

        if (image is not null)
            GbaChroma.KeyOut(image);

        _cache[key] = image;
        return image;
    }

    private RgbaImage? TryLoadPng(string speciesFolder, string emotionName)
    {
        if (_repositoryRoot is null)
            return null;
        var path = Path.Combine(_repositoryRoot, "graphics", "portraits", speciesFolder, $"{emotionName}.png");
        if (!File.Exists(path))
            return null;
        try
        {
            return RgbaImage.FromPng(File.ReadAllBytes(path));
        }
        catch
        {
            return null;
        }
    }

    private RgbaImage? TryRenderRom(List<AssetDescriptor> list, string emotionName)
    {
        var asset = list.FirstOrDefault(a =>
                        string.Equals(a.Metadata.GetValueOrDefault("emotion"), emotionName,
                            StringComparison.OrdinalIgnoreCase))
                    ?? list.FirstOrDefault(a =>
                        string.Equals(a.Metadata.GetValueOrDefault("emotion"), "Normal",
                            StringComparison.OrdinalIgnoreCase))
                    ?? list.FirstOrDefault();
        if (asset is null)
            return null;
        try
        {
            var preview = GraphicsRenderers.RenderPortrait(_rom, asset);
            return preview.Png is null ? null : RgbaImage.FromPng(preview.Png);
        }
        catch
        {
            // forcePrefix mismatch — retry flipped.
            try
            {
                var flipped = new AssetDescriptor
                {
                    Id = asset.Id,
                    Name = asset.Name,
                    Category = asset.Category,
                    Kind = asset.Kind,
                    Offset = asset.Offset,
                    Size = asset.Size,
                    AuxiliaryOffset = asset.AuxiliaryOffset,
                    AuxiliarySize = asset.AuxiliarySize,
                    Format = asset.Format,
                    Metadata = new Dictionary<string, string>(asset.Metadata)
                    {
                        ["forcePrefix"] = asset.Metadata.GetValueOrDefault("forcePrefix") == "True"
                            ? "False"
                            : "True",
                    },
                };
                var preview = GraphicsRenderers.RenderPortrait(_rom, flipped);
                return preview.Png is null ? null : RgbaImage.FromPng(preview.Png);
            }
            catch
            {
                return null;
            }
        }
    }
}
