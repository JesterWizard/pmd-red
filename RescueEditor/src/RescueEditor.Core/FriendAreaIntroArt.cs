namespace RescueEditor.Core;

/// <summary>
/// Friend-area intro splash (240×160). Retail baserom has no AT4PN table;
/// the decomp keeps PNG / AT4PN sources under graphics/custom/backgrounds.
/// </summary>
public static class FriendAreaIntroArt
{
    public const string RelativeDirectory = "graphics/custom/backgrounds";

    private static readonly string?[] SlugsById =
    [
        null,
        "bountiful_sea",
        "treasure_sea",
        "serene_sea",
        "deep_sea_floor",
        "deep_sea_current",
        "seafloor_cave",
        "shallow_beach",
        "mt_deep_green",
        "mt_cleft",
        "mt_moonview",
        "rainbow_peak",
        "wild_plains",
        "beau_plains",
        "sky_blue_plains",
        "safari",
        "scorched_plains",
        "sacred_field",
        "mist_rise_forest",
        "flyaway_forest",
        "overgrown_forest",
        "energetic_forest",
        "mushroom_forest",
        "healing_forest",
        "evolution_forest",
        "secretive_forest",
        "rub_a_dub_river",
        "tadpole_pond",
        "turtle_shell_pond",
        "mystic_lake",
        "waterfall_lake",
        "peanut_swamp",
        "poison_swamp",
        "echo_cave",
        "cryptic_cave",
        "dragon_cave",
        "boulder_cave",
        "jungle",
        "decrepit_lab",
        "mt_discipline",
        "thunder_meadow",
        "power_plant",
        "crater",
        "furnace_desert",
        "aged_chamber_an",
        "aged_chamber_unknown_o",
        "ancient_relic",
        "darkness_ridge",
        "frigid_cavern",
        "ice_floe_beach",
        "volcanic_pit",
        "stratos_lookout",
        "ravaged_field",
        "magnetic_quarry",
        "legendary_island",
        "southern_island",
        "enclosed_island",
        "final_island",
    ];

    public static string? SlugFor(int id) =>
        id >= 0 && id < SlugsById.Length ? SlugsById[id] : null;

    public static RgbaImage? TryLoadSceneBackground(RomImage rom, AssetCatalog? catalog, string? sceneBma)
    {
        if (string.IsNullOrWhiteSpace(sceneBma))
            return null;

        PreviewContent? preview = GroundMapIndexer.TryRenderFromMap(rom, MapFromBma(sceneBma));
        if (preview?.Png is not null)
            return RgbaImage.FromPng(preview.Png);

        if (catalog is not null)
        {
            foreach (var asset in catalog.ForCategory(AssetCategory.GroundMaps))
            {
                if (!asset.Metadata.TryGetValue("romName", out var name) ||
                    !name.Equals(sceneBma, StringComparison.OrdinalIgnoreCase))
                    continue;
                try
                {
                    preview = GroundMapIndexer.Render(rom, asset);
                }
                catch
                {
                    preview = null;
                }

                break;
            }
        }

        return preview?.Png is null ? null : RgbaImage.FromPng(preview.Png);
    }

    private static GroundMapDefinition MapFromBma(string bma)
    {
        var stem = bma.Length > 0 && (bma[^1] is 'm' or 'M') ? bma[..^1] : bma;
        return new GroundMapDefinition
        {
            BmaName = bma,
            BplName = stem,
            BpcName = stem + "c",
        };
    }

    public static RgbaImage? TryLoad(
        RomImage rom, FriendAreaIntroTables? tables, string? repositoryRoot, int id)
    {
        var fromRom = tables?.TryRender(rom, id);
        return fromRom ?? TryLoadFromRepository(repositoryRoot, id);
    }

    public static RgbaImage? TryLoadFromRepository(string? repositoryRoot, int id)
    {
        var slug = SlugFor(id);
        if (slug is null || string.IsNullOrWhiteSpace(repositoryRoot))
            return null;

        var dir = Path.Combine(repositoryRoot, RelativeDirectory);
        var png = Path.Combine(dir, slug + ".png");
        if (File.Exists(png))
            return RgbaImage.FromPng(File.ReadAllBytes(png));

        var at4pn = Path.Combine(dir, slug + ".at4pn");
        var pal = Path.Combine(dir, slug + ".pal");
        if (File.Exists(at4pn) && File.Exists(pal))
            return At4pn8bpp.Decode(File.ReadAllBytes(at4pn), File.ReadAllBytes(pal));

        return null;
    }
}
