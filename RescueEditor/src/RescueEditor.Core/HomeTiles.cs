namespace RescueEditor.Core;

/// <summary>One Home dashboard tile: a category shortcut with its asset count.</summary>
public sealed record HomeTile(AssetCategory Category, string Title, string Subtitle, string Glyph, int Count);

/// <summary>Builds the Home dashboard tiles in display order.</summary>
public static class HomeTiles
{
    private static readonly (AssetCategory Category, string Title, string Subtitle, string Glyph)[] Layout =
    [
        (AssetCategory.Scenes, "Scenes", "Cutscenes and story maps", "🎬"),
        (AssetCategory.Portraits, "Characters", "Pokémon portraits", "🙂"),
        (AssetCategory.Dialogue, "Dialogue", "Text lines", "💬"),
        (AssetCategory.Music, "Music", "Background music", "🎵"),
        (AssetCategory.SoundEffects, "Sound Effects", "Jingles and SFX", "🔊"),
        (AssetCategory.GroundMaps, "Maps", "Ground maps", "🗺"),
        (AssetCategory.Backgrounds, "Backgrounds", "Title and menu art", "🖼"),
        (AssetCategory.Effects, "Effects", "Effect graphics", "✨"),
        (AssetCategory.Scripts, "Scripts & Animations", "Scripts and sprite animations", "📜"),
        (AssetCategory.Dungeons, "Dungeons", "Floors and layouts", "🏔"),
        (AssetCategory.DataTables, "Data Tables", "Pokémon, moves, items", "📊"),
        (AssetCategory.CPatches, "C Patches", "Gameplay tweaks", "🔧"),
    ];

    public static IReadOnlyList<HomeTile> Build(AssetCatalog catalog, SceneDatabase? scenes) =>
        Layout.Select(entry => new HomeTile(
            entry.Category,
            entry.Title,
            entry.Subtitle,
            entry.Glyph,
            CountFor(entry.Category, catalog, scenes))).ToArray();

    private static int CountFor(AssetCategory category, AssetCatalog catalog, SceneDatabase? scenes) =>
        category == AssetCategory.Scenes && scenes is not null
            ? scenes.Scenes.Count
            : catalog.ForCategory(category).Count;
}
