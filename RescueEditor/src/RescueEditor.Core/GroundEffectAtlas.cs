namespace RescueEditor.Core;

/// <summary>
/// Map-placed / spawned ground effect sprites (efob SIRO sheets keyed by effect kind).
/// Kind 0 is typically a camera/invisible anchor — no sprite.
/// </summary>
public sealed class GroundEffectAtlas
{
    private readonly RomImage? _rom;
    private readonly Dictionary<byte, RgbaImage?> _byKind = new();

    public GroundEffectAtlas(RomImage? rom = null)
    {
        _rom = rom;
    }

    public RgbaImage? TryGetForEffect(byte typeId)
    {
        if (typeId == 0)
            return null;

        if (_byKind.TryGetValue(typeId, out var cached))
            return cached;

        RgbaImage? image = null;
        try
        {
            image = TryLoadKind(_rom, typeId);
        }
        catch
        {
            image = null;
        }

        _byKind[typeId] = image;
        return image;
    }

    private static RgbaImage? TryLoadKind(RomImage? rom, byte typeId)
    {
        if (rom is null)
            return null;

        var name = $"efob{typeId:D3}";
        var archiveOffset = EmotionEffectAtlas.ResolveEffectSiroOffset(rom, name);
        if (archiveOffset < 0)
            return null;

        var magic = System.Text.Encoding.ASCII.GetString(rom.Slice(archiveOffset, 4));
        if (magic is not "SIRO" and not "SIR0")
            return null;
        var dataOffset = rom.ReadPointerOffset(archiveOffset + 4);
        if (dataOffset < 0 || !rom.IsRangeValid(dataOffset, 32))
            return null;

        var charOffset = rom.ReadPointerOffset(dataOffset + 20);
        var paletteOffset = rom.ReadPointerOffset(dataOffset + 24);
        var charCount = rom.ReadInt32(dataOffset + 28);
        if (charOffset < 0 || paletteOffset < 0 || charCount <= 0)
            return null;

        // First ~16 tiles as a standing preview (same approach as EffectRenderer).
        var previewTiles = Math.Clamp(charCount, 1, 16);
        var tileBytes = checked(previewTiles * 32);
        if (!rom.IsRangeValid(charOffset, tileBytes))
            return null;

        var palette = GraphicsRenderers.ReadRgbPalette(rom, paletteOffset, 64, transparentFirst: true);
        return GraphicsRenderers.Render4BppSheet(
            rom.Slice(charOffset, tileBytes), palette, previewTiles, columns: 4, objectPalette: true);
    }
}
