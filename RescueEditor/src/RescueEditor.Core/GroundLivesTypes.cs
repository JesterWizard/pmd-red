namespace RescueEditor.Core;

/// <summary>
/// Retail <c>gGroundLivesTypeData</c> — maps live TypeId to species for overworld sprites.
/// Entry layout matches <c>GroundLiveTypeData</c> (12 bytes): class, species, name*, hitbox.
/// </summary>
public static class GroundLivesTypes
{
    public const int EntrySize = 12;
    public const int MaxTypeId = 255;

    // Editor-only stand-ins for dynamic player/partner kinds (ROM species == 0).
    public const short SpeciesBulbasaur = 1;
    public const short SpeciesCharmander = 4;
    public const short SpeciesSquirtle = 7;

    public static short ResolveSpecies(RomImage rom, RomProfile profile, int typeId)
    {
        if (typeId is < 0 or > MaxTypeId)
            return 0;
        if (!profile.Anchors.TryGetValue("gGroundLivesTypeData", out var tableOffset))
            return 0;
        var offset = tableOffset + typeId * EntrySize;
        if (!rom.IsRangeValid(offset, EntrySize))
            return 0;
        return rom.ReadInt16(offset + 2);
    }

    /// <summary>
    /// Species for scene preview. Uses the ROM table when set; otherwise applies
    /// starter stand-ins for player kinds 1–3 (and common aliases 0/4/5).
    /// </summary>
    public static short ResolvePreviewSpecies(RomImage rom, RomProfile profile, int typeId)
    {
        var species = ResolveSpecies(rom, profile, typeId);
        if (species > 0)
            return species;

        return typeId switch
        {
            1 => SpeciesBulbasaur,
            2 => SpeciesCharmander,
            3 => SpeciesSquirtle,
            0 => SpeciesBulbasaur,
            4 => SpeciesCharmander,
            5 => SpeciesSquirtle,
            6 => SpeciesBulbasaur,
            7 => SpeciesCharmander,
            8 => SpeciesSquirtle,
            33 => SpeciesBulbasaur,
            34 => SpeciesCharmander,
            35 => SpeciesSquirtle,
            _ => 0,
        };
    }

    /// <summary>
    /// Scene Play species: trust fixed ROM table entries; only apply team appearance
    /// overrides for dynamic (species 0) live kinds.
    /// </summary>
    public static short ResolvePlaySpecies(
        RomImage rom,
        RomProfile profile,
        int typeId,
        PlayAppearance? appearance)
    {
        var fromRom = ResolveSpecies(rom, profile, typeId);
        if (fromRom > 0)
            return fromRom;

        if (appearance is not null &&
            typeId is >= 0 and <= 255 &&
            appearance.TryResolveLiveType((byte)typeId) is short over)
            return over;

        return ResolvePreviewSpecies(rom, profile, typeId);
    }
}
