namespace RescueEditor.Core;

/// <summary>Display names for type / ability / friend-area dropdowns (no decomp headers required).</summary>
public static class DataTableEnums
{
    public static readonly string[] Types =
    [
        "None", "Normal", "Fire", "Water", "Grass", "Electric", "Ice", "Fighting",
        "Poison", "Ground", "Flying", "Psychic", "Bug", "Rock", "Ghost", "Dragon",
        "Dark", "Steel",
    ];

    public static readonly string[] Abilities =
    [
        "Unknown", "Stench", "Thick Fat", "Rain Dish", "Drizzle", "Arena Trap", "Intimidate",
        "Rock Head", "Air Lock", "Hyper Cutter", "Shadow Tag", "Speed Boost", "Battle Armor",
        "Sturdy", "Suction Cups", "Clear Body", "Torrent", "Guts", "Rough Skin", "Shell Armor",
        "Natural Cure", "Damp", "Limber", "Magnet Pull", "White Smoke", "Synchronize", "Overgrow",
        "Swift Swim", "Sand Stream", "Sand Veil", "Keen Eye", "Inner Focus", "Static", "Shed Skin",
        "Huge Power", "Volt Absorb", "Water Absorb", "Forecast", "Serene Grace", "Poison Point",
        "Trace", "Oblivious", "Truant", "Run Away", "Sticky Hold", "Cloud Nine", "Illuminate",
        "Early Bird", "Hustle", "Drought", "Lightningrod", "Compoundeyes", "Marvel Scale",
        "Wonder Guard", "Insomnia", "Levitate", "Plus", "Pressure", "Liquid Ooze", "Color Change",
        "Soundproof", "Effect Spore", "Flame Body", "Minus", "Own Tempo", "Magma Armor",
        "Water Veil", "Swarm", "Cute Charm", "Immunity", "Blaze", "Pickup", "Flash Fire",
        "Vital Spirit", "Chlorophyll", "Pure Power", "Shield Dust",
        "Normalize", "Adaptability", "Aftermath", "Anger Point", "Anticipation", "Download",
        "Dry Skin", "Filter", "Gluttony", "Ice Body", "Iron Fist", "Leaf Guard", "Magic Guard",
        "Mold Breaker", "No Guard", "Poison Heal", "Quick Feet", "Reckless", "Rivalry",
        "Skill Link", "Sniper", "Snow Cloak", "Solar Power", "Solid Rock", "Stall", "Super Luck",
        "Tangled Feet", "Technician", "Tinted Lens", "Toxic Boost",
    ];

    public static readonly string[] FriendAreas =
    [
        "None", "Bountiful Sea", "Treasure Sea", "Serene Sea", "Deep-Sea Floor", "Deep-Sea Current",
        "Seafloor Cave", "Shallow Beach", "Mt. Deepgreen", "Mt. Cleft", "Mt. Moonview", "Rainbow Peak",
        "Wild Plains", "Beau Plains", "Sky Blue Plains", "Safari", "Scorched Plains", "Sacred Field",
        "Mist-Rise Forest", "Flyaway Forest", "Overgrown Forest", "Energetic Forest", "Mushroom Forest",
        "Healing Forest", "Transform Forest", "Secretive Forest", "Rub-a-Dub River", "Tadpole Pond",
        "Turtleshell Pond", "Mystic Lake", "Waterfall Lake", "Peanut Swamp", "Poison Swamp",
        "Echo Cave", "Cryptic Cave", "Dragon Cave", "Boulder Cave", "Jungle", "Decrepit Lab",
        "Mt. Discipline", "Thunder Meadow", "Power Plant", "Crater", "Furnace Desert",
        "Aged Chamber AN", "Aged Chamber O!", "Ancient Relic", "Darkness Ridge", "Frigid Cavern",
        "Ice Floe Beach", "Volcanic Pit", "Stratos Lookout", "Ravaged Field", "Magnetic Quarry",
        "Legendary Island", "Southern Island", "Enclosed Island", "Final Island",
    ];

    public static IReadOnlyList<DataTablePick> TypePicks { get; } = Alphabetical(Types);
    public static IReadOnlyList<DataTablePick> AbilityPicks { get; } = Alphabetical(Abilities);
    public static IReadOnlyList<DataTablePick> FriendAreaPicks { get; } = Alphabetical(FriendAreas);
    public static IReadOnlyList<DataTablePick> MoveCategoryPicks { get; } =
        Alphabetical(["Physical", "Special", "Status"]);
    public static IReadOnlyList<DataTablePick> EvolveTypePicks { get; } =
        new DataTablePick[]
        {
            new(0, "None"),
            new(1, "Level"),
            new(2, "IQ"),
            new(3, "Item"),
            new(13, "Link Cable"),
        }.OrderBy(p => p.Name, StringComparer.OrdinalIgnoreCase).ToArray();

    public static IReadOnlyList<DataTablePick> EvolveExtraPicks { get; } =
        new DataTablePick[]
        {
            new(0, "None"),
            new(4, "Link Cable"),
            new(5, "Attack > Defense"),
            new(6, "Attack < Defense"),
            new(7, "Attack = Defense"),
            new(8, "Sun Ribbon"),
            new(9, "Lunar Ribbon"),
            new(10, "Beauty Scarf"),
            new(11, "Wurmple → Silcoon"),
            new(12, "Wurmple → Cascoon"),
        }.OrderBy(p => p.Name, StringComparer.OrdinalIgnoreCase).ToArray();

    public static IReadOnlyList<DataTablePick> EffectivenessPicks { get; } = Alphabetical(
    [
        "Immune", "Not very effective", "Neutral", "Super effective",
    ]);

    public static IReadOnlyList<DataTablePick> ItemCategoryPicks { get; } = Alphabetical(
    [
        "Thrown (line)", "Thrown (arc)", "Berries / seeds / vitamins", "Food / gummies",
        "Held items", "TMs / HMs", "Poké", "Unused", "Other", "Orbs", "Link Box", "Used TM",
    ]);

    public static string TypeName(int id) => NameOf(Types, id);
    public static string AbilityName(int id) => NameOf(Abilities, id);
    public static string FriendAreaName(int id) => NameOf(FriendAreas, id);
    public static string PrettyMoveFallback(int moveId) => $"Move {moveId}";

    private static IReadOnlyList<DataTablePick> Alphabetical(IReadOnlyList<string> names) =>
        names.Select((name, id) => new DataTablePick(id, name))
            .OrderBy(p => p.Name, StringComparer.OrdinalIgnoreCase)
            .ThenBy(p => p.Id)
            .ToArray();

    private static string NameOf(IReadOnlyList<string> names, int id) =>
        (uint)id < (uint)names.Count ? names[id] : id.ToString();
}
