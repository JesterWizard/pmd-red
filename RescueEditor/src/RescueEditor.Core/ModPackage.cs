using System.IO.Compression;
using System.Text.Json;
using System.Text.Json.Serialization;

namespace RescueEditor.Core;

public sealed class ModPackageDocument
{
    public int FormatVersion { get; set; } = ModPackage.CurrentFormatVersion;
    public string Kind { get; set; } = ModPackage.Kind;
    public string Name { get; set; } = "Untitled";
    public string BaseRomSha1 { get; set; } = string.Empty;
    public string ProfileName { get; set; } = RomProfile.Us10.Name;
    public List<ModPackageRuntimeConfigField> RuntimeConfig { get; set; } = new();
    public List<ModPackageOverlay> Overlays { get; set; } = new();
    public List<ProjectEdit> Edits { get; set; } = new();
    public List<string> Warnings { get; set; } = new();
}

public sealed class ModPackageRuntimeConfigField
{
    public required string Id { get; set; }
    public byte Value { get; set; }
}

public sealed class ModPackageOverlay
{
    public required string Id { get; set; }
    public int Offset { get; set; }
    public int Size { get; set; }
    public string Payload { get; set; } = string.Empty;

    [JsonIgnore]
    public byte[] Data { get; set; } = [];
}

public sealed class ModPackageApplyResult
{
    public List<string> Errors { get; } = new();
    public List<string> Warnings { get; } = new();
    public int OverlayCount { get; set; }
    public int EditCount { get; set; }
    public int RuntimeConfigCount { get; set; }
    public bool Success => Errors.Count == 0;
}

/// <summary>
/// Shareable RescueTemple mod package: project edits, RuntimeConfig / C Patches,
/// and ROM overlays vs the opened baserom.
/// </summary>
public static class ModPackage
{
    public const int CurrentFormatVersion = 1;
    public const string Kind = "rescue-temple-mod";
    public const string ManifestFileName = "manifest.json";
    public const string PayloadDirectory = "payloads";

    public static ModPackageDocument Collect(
        WorkingRom working,
        ProjectDocument project,
        SceneDatabase? database = null,
        RuntimeConfigState? runtimeConfig = null,
        AssetCatalog? catalog = null)
    {
        ArgumentNullException.ThrowIfNull(working);
        ArgumentNullException.ThrowIfNull(project);

        var package = new ModPackageDocument
        {
            Name = project.Name,
            BaseRomSha1 = working.Source.Sha1,
            ProfileName = project.ProfileName,
            Edits = project.Edits.Select(CloneEdit).ToList(),
        };

        if (runtimeConfig is not null)
        {
            foreach (var field in RuntimeConfigSchema.Fields)
            {
                var value = runtimeConfig.Get(field.Id);
                if (value == field.VanillaValue)
                    continue;
                package.RuntimeConfig.Add(new ModPackageRuntimeConfigField
                {
                    Id = field.Id,
                    Value = value,
                });
            }
        }

        var source = working.Source.Bytes;
        var view = working.View.Bytes;
        if (source.Length != view.Length)
        {
            package.Warnings.Add(
                $"Working ROM length ({view.Length}) differs from the baserom ({source.Length}); overlays cover the overlapping prefix only.");
        }

        var skipStart = -1;
        var skipEnd = -1;
        if (runtimeConfig is { HasRomBacking: true })
        {
            skipStart = runtimeConfig.RomOffset;
            skipEnd = runtimeConfig.RomOffset + runtimeConfig.RomCapacity;
        }

        var limit = Math.Min(source.Length, view.Length);
        var index = 0;
        while (index < limit)
        {
            if (InSkip(index, skipStart, skipEnd) || source[index] == view[index])
            {
                index++;
                continue;
            }

            var start = index;
            while (index < limit &&
                   !InSkip(index, skipStart, skipEnd) &&
                   source[index] != view[index])
            {
                index++;
            }

            var data = view.Slice(start, index - start).ToArray();
            package.Overlays.Add(new ModPackageOverlay
            {
                Id = OverlayId(start, catalog),
                Offset = start,
                Size = data.Length,
                Payload = $"{PayloadDirectory}/overlay-{start:x8}.bin",
                Data = data,
            });
        }

        return package;
    }

    public static void ExportFolder(ModPackageDocument package, string directory)
    {
        ArgumentNullException.ThrowIfNull(package);
        ArgumentException.ThrowIfNullOrWhiteSpace(directory);
        Directory.CreateDirectory(directory);
        AssignPayloadPaths(package);
        var payloadDir = Path.Combine(directory, PayloadDirectory);
        if (package.Overlays.Count > 0)
            Directory.CreateDirectory(payloadDir);
        foreach (var overlay in package.Overlays)
        {
            var path = Path.Combine(directory, overlay.Payload.Replace('/', Path.DirectorySeparatorChar));
            Directory.CreateDirectory(Path.GetDirectoryName(path)!);
            File.WriteAllBytes(path, overlay.Data);
        }

        File.WriteAllText(Path.Combine(directory, ManifestFileName), SerializeManifest(package));
    }

    public static void ExportArchive(ModPackageDocument package, string archivePath)
    {
        ArgumentNullException.ThrowIfNull(package);
        ArgumentException.ThrowIfNullOrWhiteSpace(archivePath);
        AssignPayloadPaths(package);
        Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(archivePath))!);
        if (File.Exists(archivePath))
            File.Delete(archivePath);

        using var zip = ZipFile.Open(archivePath, ZipArchiveMode.Create);
        var manifest = zip.CreateEntry(ManifestFileName, CompressionLevel.Optimal);
        using (var stream = manifest.Open())
        using (var writer = new StreamWriter(stream))
            writer.Write(SerializeManifest(package));

        foreach (var overlay in package.Overlays)
        {
            var entry = zip.CreateEntry(overlay.Payload.Replace('\\', '/'), CompressionLevel.Optimal);
            using var stream = entry.Open();
            stream.Write(overlay.Data);
        }
    }

    public static ModPackageDocument Load(string path)
    {
        ArgumentException.ThrowIfNullOrWhiteSpace(path);
        if (Directory.Exists(path))
            return LoadFolder(path);
        if (string.Equals(Path.GetFileName(path), ManifestFileName, StringComparison.OrdinalIgnoreCase))
            return LoadFolder(Path.GetDirectoryName(Path.GetFullPath(path))!);
        return LoadArchive(path);
    }

    public static ModPackageDocument LoadFolder(string directory)
    {
        var manifestPath = Path.Combine(directory, ManifestFileName);
        if (!File.Exists(manifestPath))
            throw new InvalidDataException($"Mod package folder is missing {ManifestFileName}.");
        var package = DeserializeManifest(File.ReadAllText(manifestPath));
        foreach (var overlay in package.Overlays)
        {
            var payload = ResolvePayloadPath(directory, overlay.Payload);
            overlay.Data = File.ReadAllBytes(payload);
            overlay.Size = overlay.Data.Length;
        }

        return package;
    }

    public static ModPackageDocument LoadArchive(string archivePath)
    {
        using var zip = ZipFile.OpenRead(archivePath);
        var manifestEntry = zip.GetEntry(ManifestFileName)
            ?? throw new InvalidDataException($"Mod archive is missing {ManifestFileName}.");
        using var manifestStream = manifestEntry.Open();
        using var reader = new StreamReader(manifestStream);
        var package = DeserializeManifest(reader.ReadToEnd());
        foreach (var overlay in package.Overlays)
        {
            var entry = zip.GetEntry(overlay.Payload.Replace('\\', '/'))
                ?? throw new InvalidDataException($"Mod archive is missing payload '{overlay.Payload}'.");
            using var stream = entry.Open();
            using var memory = new MemoryStream();
            stream.CopyTo(memory);
            overlay.Data = memory.ToArray();
            overlay.Size = overlay.Data.Length;
        }

        return package;
    }

    public static ModPackageApplyResult Apply(
        ModPackageDocument package,
        WorkingRom working,
        ProjectDocument? project,
        SceneDatabase? database,
        RuntimeConfigState? runtimeConfig)
    {
        ArgumentNullException.ThrowIfNull(package);
        ArgumentNullException.ThrowIfNull(working);

        if (!string.IsNullOrWhiteSpace(package.BaseRomSha1) &&
            !string.Equals(package.BaseRomSha1, working.Source.Sha1, StringComparison.OrdinalIgnoreCase))
        {
            throw new InvalidDataException(
                $"Mod package SHA-1 {package.BaseRomSha1} does not match the opened baserom ({working.Source.Sha1}).");
        }

        var result = new ModPackageApplyResult();
        result.Warnings.AddRange(package.Warnings);

        foreach (var overlay in package.Overlays)
        {
            if (overlay.Offset < 0 || overlay.Data.Length == 0)
            {
                result.Errors.Add($"Overlay {overlay.Id} has no payload.");
                continue;
            }

            if (overlay.Offset + overlay.Data.Length > working.View.Length)
            {
                result.Errors.Add(
                    $"Overlay {overlay.Id} @ 0x{overlay.Offset:X} does not fit the opened ROM.");
                continue;
            }

            working.Overlay(overlay.Offset, overlay.Data);
            result.OverlayCount++;
        }

        foreach (var field in package.RuntimeConfig)
        {
            if (RuntimeConfigSchema.Find(field.Id) is null)
            {
                result.Warnings.Add($"Unknown RuntimeConfig field '{field.Id}' was skipped.");
                continue;
            }

            if (runtimeConfig is null)
            {
                result.Warnings.Add($"RuntimeConfig field '{field.Id}' was skipped (C Patches are unavailable).");
                continue;
            }

            runtimeConfig.Set(field.Id, field.Value);
            result.RuntimeConfigCount++;
        }

        if (database is not null)
        {
            ProjectEditApplier.Apply(package.Edits, database, runtimeConfig);
            result.EditCount = package.Edits.Count;
        }

        if (project is not null)
        {
            foreach (var edit in package.Edits)
            {
                if (project.Edits.All(existing => existing.Id != edit.Id))
                    project.Edits.Add(CloneEdit(edit));
            }

            project.IsDirty = true;
        }

        return result;
    }

    private static void AssignPayloadPaths(ModPackageDocument package)
    {
        foreach (var overlay in package.Overlays)
        {
            if (string.IsNullOrWhiteSpace(overlay.Payload))
                overlay.Payload = $"{PayloadDirectory}/overlay-{overlay.Offset:x8}.bin";
            overlay.Size = overlay.Data.Length;
        }
    }

    private static string SerializeManifest(ModPackageDocument package) =>
        JsonSerializer.Serialize(package, SerializerOptions);

    private static ModPackageDocument DeserializeManifest(string json)
    {
        var package = JsonSerializer.Deserialize<ModPackageDocument>(json, SerializerOptions)
            ?? throw new InvalidDataException("Mod package manifest is empty.");
        if (!string.Equals(package.Kind, Kind, StringComparison.Ordinal))
            throw new InvalidDataException($"Not a RescueTemple mod package (kind '{package.Kind}').");
        if (package.FormatVersion > CurrentFormatVersion)
            throw new InvalidDataException($"Unsupported mod package format version {package.FormatVersion}.");
        return package;
    }

    private static string ResolvePayloadPath(string directory, string relative)
    {
        if (string.IsNullOrWhiteSpace(relative) ||
            relative.Contains("..", StringComparison.Ordinal) ||
            Path.IsPathRooted(relative))
            throw new InvalidDataException($"Unsafe payload path '{relative}'.");
        var path = Path.GetFullPath(Path.Combine(directory, relative.Replace('/', Path.DirectorySeparatorChar)));
        var root = Path.GetFullPath(directory);
        if (!path.StartsWith(root, StringComparison.Ordinal))
            throw new InvalidDataException($"Unsafe payload path '{relative}'.");
        if (!File.Exists(path))
            throw new InvalidDataException($"Missing payload '{relative}'.");
        return path;
    }

    private static bool InSkip(int index, int skipStart, int skipEnd) =>
        skipStart >= 0 && index >= skipStart && index < skipEnd;

    private static string OverlayId(int offset, AssetCatalog? catalog)
    {
        if (catalog is not null)
        {
            foreach (var asset in catalog.Assets)
            {
                if (asset.HasRomRange && offset >= asset.Offset && offset < asset.Offset + asset.Size)
                    return asset.Id;
            }
        }

        return $"overlay:0x{offset:X}";
    }

    private static ProjectEdit CloneEdit(ProjectEdit edit) => new()
    {
        Id = edit.Id,
        Kind = edit.Kind,
        Target = edit.Target,
        Description = edit.Description,
        Values = new Dictionary<string, string>(edit.Values, StringComparer.Ordinal),
        Timestamp = edit.Timestamp,
    };

    private static readonly JsonSerializerOptions SerializerOptions = new()
    {
        WriteIndented = true,
        PropertyNamingPolicy = JsonNamingPolicy.CamelCase,
        DefaultIgnoreCondition = JsonIgnoreCondition.WhenWritingNull,
    };
}
