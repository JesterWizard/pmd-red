namespace RescueEditor.Core;

/// <summary>
/// Friend-area scene map upload. Encoding and ROM write live in <see cref="GroundMapCodec"/>.
/// </summary>
public static class FriendAreaBackgroundUpload
{
    public const int TilePx = GroundMapCodec.TilePx;
    public const int MinWidth = GroundMapCodec.MinWidth;
    public const int MinHeight = GroundMapCodec.MinHeight;
    public const int MaxWidth = GroundMapCodec.MaxWidth;
    public const int MaxHeight = GroundMapCodec.MaxHeight;
    public const int MaxPalettes = GroundMapCodec.MaxPalettes;
    public const int MaxColorsPerTile = GroundMapCodec.MaxColorsPerTile;
    public const int MaxUniqueColors = GroundMapCodec.MaxUniqueColors;
    public const int MaxTiles = GroundMapCodec.MaxTiles;

    public static string RestrictionsText => GroundMapCodec.RestrictionsText;

    public static string? Validate(RgbaImage image) => GroundMapCodec.Validate(image);

    public static bool TryEncode(
        RgbaImage image, out byte[] bpl, out byte[] bpc, out byte[] bma, out string? error) =>
        GroundMapCodec.TryEncode(image, out bpl, out bpc, out bma, out error);

    public static string? TryWrite(
        MutableRom rom,
        AssetCatalog? catalog,
        string sceneBma,
        RgbaImage image,
        ICollection<RomSpan>? dirty = null) =>
        GroundMapCodec.TryWrite(rom, catalog, sceneBma, image, dirty);
}
