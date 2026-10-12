namespace RescueEditor.Core;

/// <summary>What a file dropped onto the editor window can be used as.</summary>
public enum DroppedFileKind
{
    Unknown,
    Rom,
    Project,
    Mod,
}

/// <summary>Sorts dropped paths into what RescueTemple can open.</summary>
public static class DroppedFiles
{
    private const string ManifestFileName = "manifest.json";

    /// <summary>
    /// Classifies a dropped path. Extensions are matched case-insensitively. A manifest.json file, or a folder
    /// that contains one, is a mod. The disk checks are injected so callers and tests can avoid touching the file system.
    /// </summary>
    public static DroppedFileKind Classify(string path, Func<string, bool> directoryExists, Func<string, bool> fileExists)
    {
        ArgumentNullException.ThrowIfNull(path);
        ArgumentNullException.ThrowIfNull(directoryExists);
        ArgumentNullException.ThrowIfNull(fileExists);

        var extension = Path.GetExtension(path);
        if (extension.Equals(".gba", StringComparison.OrdinalIgnoreCase) ||
            extension.Equals(".bin", StringComparison.OrdinalIgnoreCase))
            return DroppedFileKind.Rom;

        if (extension.Equals(".rtproj", StringComparison.OrdinalIgnoreCase) ||
            extension.Equals(".rescue", StringComparison.OrdinalIgnoreCase))
            return DroppedFileKind.Project;

        if (extension.Equals(".rtmod", StringComparison.OrdinalIgnoreCase))
            return DroppedFileKind.Mod;

        if (Path.GetFileName(path).Equals(ManifestFileName, StringComparison.OrdinalIgnoreCase))
            return DroppedFileKind.Mod;

        if (directoryExists(path) && fileExists(Path.Combine(path, ManifestFileName)))
            return DroppedFileKind.Mod;

        return DroppedFileKind.Unknown;
    }
}
