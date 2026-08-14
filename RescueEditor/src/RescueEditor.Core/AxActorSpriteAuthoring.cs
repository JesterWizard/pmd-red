using System.Text.RegularExpressions;

namespace RescueEditor.Core;

/// <summary>
/// Import <c>sprite_N.png</c> (and optional <c>sprite_N_k.png</c>) onto an existing AX dump folder.
/// </summary>
public static class AxActorSpriteAuthoring
{
    public static string RestrictionsText =>
        "Folder of sprite_N.png matching existing frame sizes, 8×8 tiles, at most 16 colors (index 0 transparent).";

    private static readonly Regex SpriteName = new(
        @"^sprite_(\d+)(?:_(\d+))?\.png$",
        RegexOptions.IgnoreCase | RegexOptions.CultureInvariant | RegexOptions.Compiled);

    public static string? ValidateFolder(string sourceFolder, string destFolder)
    {
        if (!Directory.Exists(sourceFolder))
            return "Import folder does not exist.";
        if (!Directory.Exists(destFolder))
            return $"AX dump folder is missing ({destFolder}).";

        var files = ListImportPngs(sourceFolder);
        if (files.Count == 0)
            return "Import folder has no sprite_N.png files.";

        foreach (var file in files)
        {
            var error = ValidateFile(file, destFolder);
            if (error is not null)
                return error;
        }

        return null;
    }

    public static string? TryWriteFolder(string sourceFolder, string destFolder)
    {
        var rejected = ValidateFolder(sourceFolder, destFolder);
        if (rejected is not null)
            return rejected;

        foreach (var file in ListImportPngs(sourceFolder))
        {
            var error = TryWriteFile(file, destFolder);
            if (error is not null)
                return error;
        }

        return null;
    }

    public static string? TryWriteSpecies(string assetsRoot, int speciesId, string sourceFolder)
    {
        var folder = MonsterSpriteFolders.ForSpecies(speciesId, MonsterSpriteFolders.Load(assetsRoot));
        if (string.IsNullOrEmpty(folder))
            return $"No AX folder is mapped for species {speciesId}.";

        var dest = AxPoseAssembler.GraphicsDirectory(assetsRoot, folder, AxGraphicsTree.Monster);
        return TryWriteFolder(sourceFolder, dest);
    }

    private static List<string> ListImportPngs(string sourceFolder)
    {
        var list = new List<string>();
        foreach (var path in Directory.EnumerateFiles(sourceFolder, "sprite_*.png"))
        {
            if (SpriteName.IsMatch(Path.GetFileName(path)))
                list.Add(path);
        }

        list.Sort(StringComparer.OrdinalIgnoreCase);
        return list;
    }

    private static string? ValidateFile(string sourcePng, string destFolder)
    {
        var name = Path.GetFileName(sourcePng);
        var image = RgbaImage.FromPng(File.ReadAllBytes(sourcePng));
        if (image is null)
            return $"Could not decode {name}.";

        var stem = Path.GetFileNameWithoutExtension(name);
        var destPng = Path.Combine(destFolder, name);
        var destTiles = Path.Combine(destFolder, stem + ".4bpp");
        if (!File.Exists(destPng) && !File.Exists(destTiles))
            return $"{name} has no matching frame in the existing AX dump.";

        if (File.Exists(destPng))
        {
            var existing = RgbaImage.FromPng(File.ReadAllBytes(destPng));
            if (existing is not null && (existing.Width != image.Width || existing.Height != image.Height))
            {
                return $"{name} must be {existing.Width}×{existing.Height} (got {image.Width}×{image.Height}).";
            }
        }

        var tileError = Indexed4Bpp.ValidateTileImage(image);
        if (tileError is not null)
            return $"{name}: {tileError}";

        if (File.Exists(destTiles))
        {
            var expected = new FileInfo(destTiles).Length;
            var encoded = Indexed4Bpp.Encode(image);
            if (encoded.Tiles.Length != expected)
            {
                return $"{name} encodes to {encoded.Tiles.Length} tile bytes; existing .4bpp is {expected}.";
            }
        }

        return null;
    }

    private static string? TryWriteFile(string sourcePng, string destFolder)
    {
        var name = Path.GetFileName(sourcePng);
        var image = RgbaImage.FromPng(File.ReadAllBytes(sourcePng));
        if (image is null)
            return $"Could not decode {name}.";

        Indexed4Bpp.EncodedSheet encoded;
        try
        {
            encoded = Indexed4Bpp.Encode(image);
        }
        catch (Exception ex)
        {
            return ex.Message;
        }

        var stem = Path.GetFileNameWithoutExtension(name);
        File.WriteAllBytes(Path.Combine(destFolder, name),
            PngCodec.EncodeIndexed(image.Width, image.Height, encoded.Indices, encoded.PaletteRgbx));
        File.WriteAllBytes(Path.Combine(destFolder, stem + ".4bpp"), encoded.Tiles);
        return null;
    }
}
