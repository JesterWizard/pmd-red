namespace RescueEditor.Core;

/// <summary>Replace an <c>efobNNN</c> SIRO char+palette sheet in the working ROM.</summary>
public static class GroundEffectAuthoring
{
    public static string RestrictionsText =>
        "PNG, width/height multiples of 8, tile count matching the existing efob sheet, at most 16 colors.";

    public static string? Validate(RgbaImage image, int charCount) =>
        Indexed4Bpp.ValidateTileImage(image, charCount);

    public static string? TryWrite(
        MutableRom rom,
        string effectName,
        RgbaImage image,
        ICollection<RomSpan>? dirty = null)
    {
        if (string.IsNullOrWhiteSpace(effectName) ||
            !effectName.StartsWith("efob", StringComparison.OrdinalIgnoreCase))
        {
            return "Only object-effect sheets (efobNNN) can be replaced here.";
        }

        var view = RomImage.FromBytes(rom.SourcePath, rom.Copy(0, rom.Length));
        var archiveOffset = EmotionEffectAtlas.ResolveEffectSiroOffset(view, effectName);
        if (archiveOffset < 0)
            return $"ROM has no SIRO archive named {effectName}.";

        var magic = System.Text.Encoding.ASCII.GetString(rom.Copy(archiveOffset, 4));
        if (magic is not "SIRO" and not "SIR0")
            return $"{effectName} is not a SIRO archive.";

        var dataOffset = rom.ReadPointerOffset(archiveOffset + 4);
        if (dataOffset < 0 || !rom.IsRangeValid(dataOffset, 32))
            return $"{effectName} data pointer is invalid.";

        var charOffset = rom.ReadPointerOffset(dataOffset + 20);
        var paletteOffset = rom.ReadPointerOffset(dataOffset + 24);
        var charCount = rom.ReadInt32(dataOffset + 28);
        if (charOffset < 0 || paletteOffset < 0 || charCount <= 0)
            return $"{effectName} is missing char/palette pointers.";

        var rejected = Validate(image, charCount);
        if (rejected is not null)
            return rejected;

        Indexed4Bpp.EncodedSheet encoded;
        try
        {
            encoded = Indexed4Bpp.Encode(image);
        }
        catch (Exception ex)
        {
            return ex.Message;
        }

        var tileBytes = checked(charCount * Indexed4Bpp.TileBytes);
        if (encoded.Tiles.Length != tileBytes)
            return $"Encoded sheet is {encoded.Tiles.Length} bytes; ROM slot is {tileBytes}.";
        if (encoded.PaletteRgbx.Length > 64)
            return $"Palette is {encoded.PaletteRgbx.Length} bytes; slot is 64.";
        if (!rom.IsRangeValid(charOffset, tileBytes) || !rom.IsRangeValid(paletteOffset, 64))
            return $"{effectName} graphics are outside the ROM.";

        rom.WriteBytes(charOffset, encoded.Tiles);
        rom.Fill(paletteOffset, 64, 0);
        rom.WriteBytes(paletteOffset, encoded.PaletteRgbx.AsSpan(0, Math.Min(64, encoded.PaletteRgbx.Length)));
        dirty?.Add(new RomSpan(charOffset, tileBytes));
        dirty?.Add(new RomSpan(paletteOffset, 64));
        return null;
    }
}
