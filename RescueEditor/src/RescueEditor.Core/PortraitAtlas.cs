namespace RescueEditor.Core;

/// <summary>Cached KAO portraits keyed by species id + emotion name.</summary>
public sealed class PortraitAtlas
{
    private readonly RomImage _rom;
    private readonly Dictionary<(int Species, string Emotion), RgbaImage?> _cache = new();
    private readonly Dictionary<string, List<AssetDescriptor>> _bySpeciesName;
    private readonly IReadOnlyDictionary<int, string> _folders;

    public PortraitAtlas(RomImage rom, string? repositoryRoot = null)
    {
        _rom = rom;
        _folders = MonsterSpriteFolders.Load(ActorSpriteAtlas.ResolveAssetsRoot(repositoryRoot ?? "."));
        var assets = new List<AssetDescriptor>();
        if (!string.IsNullOrWhiteSpace(repositoryRoot))
            assets.AddRange(KaoIndexer.Index(ActorSpriteAtlas.ResolveAssetsRoot(repositoryRoot)));
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
        if (folder is null || !_bySpeciesName.TryGetValue(folder, out var list))
        {
            // Try common lowercase species names from retail table keys.
            if (!_bySpeciesName.TryGetValue(speciesId.ToString(), out list))
            {
                _cache[key] = null;
                return null;
            }
        }

        var asset = list.FirstOrDefault(a =>
                        string.Equals(a.Metadata.GetValueOrDefault("emotion"), emotionName,
                            StringComparison.OrdinalIgnoreCase))
                    ?? list.FirstOrDefault(a =>
                        string.Equals(a.Metadata.GetValueOrDefault("emotion"), "Normal",
                            StringComparison.OrdinalIgnoreCase))
                    ?? list.FirstOrDefault();
        if (asset is null)
        {
            _cache[key] = null;
            return null;
        }

        try
        {
            var preview = GraphicsRenderers.RenderPortrait(_rom, asset);
            var image = preview.Png is null ? null : RgbaImage.FromPng(preview.Png);
            _cache[key] = image;
            return image;
        }
        catch
        {
            _cache[key] = null;
            return null;
        }
    }
}
