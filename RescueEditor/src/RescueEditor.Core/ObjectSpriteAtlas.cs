namespace RescueEditor.Core;

/// <summary>
/// Ground object standing frames from <c>graphics/ornament/*/sprite_1.png</c>
/// (or AX-assembled / 4bpp+pmdpal fallbacks) keyed by object TypeId (<c>gGroundObjectKinds</c>).
/// </summary>
public sealed class ObjectSpriteAtlas
{
    private readonly string _repositoryRoot;
    private readonly Dictionary<int, RgbaImage?> _byType = new();

    public ObjectSpriteAtlas(string repositoryRoot)
    {
        _repositoryRoot = ActorSpriteAtlas.ResolveAssetsRoot(repositoryRoot);
    }

    public RgbaImage? TryGetForObject(byte typeId)
    {
        if (_byType.TryGetValue(typeId, out var cached))
            return cached;

        if (!ObjectSpriteFolders.TryGetFolder(typeId, out var folder) || folder is null)
        {
            _byType[typeId] = null;
            return null;
        }

        var image = TryLoadOrnament(folder);
        _byType[typeId] = image;
        return image;
    }

    private RgbaImage? TryLoadOrnament(string folder)
    {
        // Multi-piece / NULL-padded ornaments (Npc01, Titleop1, …) — assemble pose 1.
        if (AxPoseAssembler.IsMultiPiece(_repositoryRoot, folder, AxGraphicsTree.Ornament))
        {
            var assembled = AxPoseAssembler.TryAssemble(
                _repositoryRoot, folder, poseNumber: 1, AxGraphicsTree.Ornament);
            if (assembled is not null)
                return assembled;
        }

        var pngPath = Path.Combine(_repositoryRoot, "graphics", "ornament", folder, "sprite_1.png");
        if (File.Exists(pngPath))
        {
            try
            {
                var image = RgbaImage.FromPng(File.ReadAllBytes(pngPath));
                // Tiny scraps mean compound VRAM wasn't assembled — try AX render anyway.
                if (image is not null && image.Width >= 16 && image.Height >= 16)
                    return image;
                var fromAx = AxPoseAssembler.TryAssemble(
                    _repositoryRoot, folder, poseNumber: 1, AxGraphicsTree.Ornament)
                    ?? AxPoseAssembler.TryRenderOrnamentStandingFrame(_repositoryRoot, folder);
                if (fromAx is not null)
                    return fromAx;
                return image;
            }
            catch
            {
                // fall through to 4bpp
            }
        }

        return AxPoseAssembler.TryAssemble(
                   _repositoryRoot, folder, poseNumber: 1, AxGraphicsTree.Ornament)
               ?? AxPoseAssembler.TryRenderOrnamentStandingFrame(_repositoryRoot, folder);
    }
}

/// <summary>Object TypeId → <c>graphics/ornament/&lt;folder&gt;</c> (from gGroundObjectKinds).</summary>
public static class ObjectSpriteFolders
{
    /// <summary>
    /// Editor-only TypeId for the custom <c>Board01</c> bulletin ornament (not in retail
    /// <c>gGroundObjectKinds</c>). Used to preview 4bpp-only assets.
    /// </summary>
    public const byte BoardPreviewTypeId = 254;

    // Kinds 0–25 have NULL fileName in gGroundObjectKinds (invisible / talk zones).
    private static readonly string?[] FoldersByTypeId = Build();

    /// <summary>True when <c>gGroundObjectKinds</c> has no ornament file (talk / trigger zones).</summary>
    public static bool IsSpriteLessKind(byte typeId) =>
        typeId != BoardPreviewTypeId &&
        ((uint)typeId >= (uint)FoldersByTypeId.Length || FoldersByTypeId[typeId] is null);

    public static bool TryGetFolder(int typeId, out string? folder)
    {
        folder = null;
        if (typeId == BoardPreviewTypeId)
        {
            folder = "Board01";
            return true;
        }

        if ((uint)typeId >= (uint)FoldersByTypeId.Length)
            return false;
        folder = FoldersByTypeId[typeId];
        return folder is not null;
    }

    private static string?[] Build()
    {
        // Matches src/ground_sprite_data.c gGroundObjectKinds order.
        var names = new string?[]
        {
            // 0–25: no sprite
            null, null, null, null, null, null, null, null, null, null,
            null, null, null, null, null, null, null, null, null, null,
            null, null, null, null, null, null,
            // 26–27
            "Flag00", "Flag00",
            // 28–43 Flag01–Flag16
            "Flag01", "Flag02", "Flag03", "Flag04", "Flag05", "Flag06", "Flag07", "Flag08",
            "Flag09", "Flag10", "Flag11", "Flag12", "Flag13", "Flag14", "Flag15", "Flag16",
            // 44–58 Flag100–Flag114
            "Flag100", "Flag101", "Flag102", "Flag103", "Flag104", "Flag105", "Flag106", "Flag107",
            "Flag108", "Flag109", "Flag110", "Flag111", "Flag112", "Flag113", "Flag114",
            // 59–61
            "Titleop1", "Titleop2", "Titlebg1",
            // 62–66
            "Npc01", "Npc02", "Npc03", "Npc04", "Item01",
            // 67–68 custom
            "Stairs01", "Sign01",
        };
        return names;
    }
}
