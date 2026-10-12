using System.Text.Json;

namespace RescueEditor.Core;

/// <summary>One project mod entry plus its loaded manifest, or the reason it cannot load.</summary>
public sealed class ModStackEntryInfo
{
    public required ProjectModEntry Entry { get; init; }
    public ModPackageDocument? Package { get; init; }
    public string? Error { get; init; }
    public bool IsUsable => Package is not null && Error is null;

    public string DisplayName
    {
        get
        {
            if (Package is { } package && !string.IsNullOrWhiteSpace(package.Name))
                return package.Name;
            if (!string.IsNullOrWhiteSpace(Entry.Name))
                return Entry.Name;
            return Path.GetFileNameWithoutExtension(Entry.Path);
        }
    }

    public string Summary
    {
        get
        {
            if (Error is not null)
                return Error;
            if (Package is not { } package)
                return "Not loaded.";
            return $"{package.Edits.Count} edit(s) · {package.Overlays.Count} ROM patch(es) · {package.RuntimeConfig.Count} C Patch setting(s)";
        }
    }
}

public sealed record ModConflict(string EarlierMod, string LaterMod, string Detail);

public sealed class ModStackApplyResult
{
    public List<string> Applied { get; } = new();   // display names, in load order
    public List<string> Errors { get; } = new();
    public List<string> Warnings { get; } = new();
}

/// <summary>Loads a project's mod packages in order on top of the baserom (mod layer), before the project's own edits.</summary>
public static class ModStack
{
    public static ModStackEntryInfo Inspect(ProjectModEntry entry, string? baseRomSha1)
    {
        ArgumentNullException.ThrowIfNull(entry);

        if (!File.Exists(entry.Path) && !Directory.Exists(entry.Path))
            return new ModStackEntryInfo { Entry = entry, Error = $"File not found: {entry.Path}" };

        ModPackageDocument package;
        try
        {
            package = ModPackage.Load(entry.Path);
        }
        catch (Exception ex) when (ex is IOException or InvalidDataException or JsonException or UnauthorizedAccessException)
        {
            return new ModStackEntryInfo { Entry = entry, Error = ex.Message };
        }

        if (!string.IsNullOrWhiteSpace(baseRomSha1) &&
            !string.IsNullOrWhiteSpace(package.BaseRomSha1) &&
            !string.Equals(package.BaseRomSha1, baseRomSha1, StringComparison.OrdinalIgnoreCase))
        {
            return new ModStackEntryInfo
            {
                Entry = entry,
                Package = package,
                Error = $"Made for a different baserom (SHA-1 {package.BaseRomSha1}).",
            };
        }

        return new ModStackEntryInfo { Entry = entry, Package = package };
    }

    public static ModStackApplyResult ApplyEnabled(
        IEnumerable<ProjectModEntry> mods, WorkingRom working, SceneDatabase? database, RuntimeConfigState? runtimeConfig)
    {
        ArgumentNullException.ThrowIfNull(mods);
        ArgumentNullException.ThrowIfNull(working);

        var result = new ModStackApplyResult();
        foreach (var entry in mods)
        {
            if (!entry.Enabled)
                continue;

            var info = Inspect(entry, working.Source.Sha1);
            if (!info.IsUsable)
            {
                result.Errors.Add($"{info.DisplayName}: {info.Summary}");
                continue;
            }

            var name = info.DisplayName;
            try
            {
                var apply = ModPackage.Apply(
                    info.Package!, working, project: null, database, runtimeConfig, modLayer: true);
                foreach (var error in apply.Errors)
                    result.Errors.Add($"{name}: {error}");
                foreach (var warning in apply.Warnings)
                    result.Warnings.Add($"{name}: {warning}");
                if (apply.Success)
                    result.Applied.Add(name);
            }
            // One bad mod must not stop the rest of the stack from loading.
            catch (Exception ex) when (ex is not OutOfMemoryException)
            {
                result.Errors.Add($"{name}: {ex.Message}");
            }
        }

        return result;
    }

    public static int ApplyRomPatches(IEnumerable<ProjectRomPatch> patches, WorkingRom working)
    {
        ArgumentNullException.ThrowIfNull(patches);
        ArgumentNullException.ThrowIfNull(working);

        var applied = 0;
        foreach (var patch in patches)
        {
            if (patch.Offset < 0 || patch.Data.Length == 0 || patch.Data.Length > working.View.Length - patch.Offset)
                continue;

            working.Overlay(patch.Offset, patch.Data, recordHistory: false);
            applied++;
        }

        return applied;
    }

    public static List<ModConflict> FindConflicts(IReadOnlyList<ModStackEntryInfo> ordered)
    {
        ArgumentNullException.ThrowIfNull(ordered);

        var usable = ordered.Where(info => info.IsUsable).ToList();
        var conflicts = new List<ModConflict>();
        for (var i = 0; i < usable.Count; i++)
        {
            for (var j = i + 1; j < usable.Count; j++)
            {
                var earlier = usable[i];
                var later = usable[j];
                AddRomConflict(conflicts, earlier, later);
                AddCPatchConflicts(conflicts, earlier, later);
                AddEditConflict(conflicts, earlier, later);
            }
        }

        return conflicts;
    }

    private static void AddRomConflict(List<ModConflict> conflicts, ModStackEntryInfo earlier, ModStackEntryInfo later)
    {
        var count = 0;
        var firstStart = 0;
        foreach (var a in earlier.Package!.Overlays)
        {
            var aEnd = (long)a.Offset + OverlayLength(a);
            foreach (var b in later.Package!.Overlays)
            {
                var bEnd = (long)b.Offset + OverlayLength(b);
                if (a.Offset >= bEnd || b.Offset >= aEnd)
                    continue;

                var start = Math.Max(a.Offset, b.Offset);
                if (count == 0 || start < firstStart)
                    firstStart = start;
                count++;
            }
        }

        if (count > 0)
        {
            conflicts.Add(new ModConflict(
                earlier.DisplayName,
                later.DisplayName,
                $"{count} overlapping ROM range(s), first at 0x{firstStart:X}"));
        }
    }

    private static void AddCPatchConflicts(List<ModConflict> conflicts, ModStackEntryInfo earlier, ModStackEntryInfo later)
    {
        var earlierValues = EffectiveRuntimeConfig(earlier.Package!);
        var laterValues = EffectiveRuntimeConfig(later.Package!);
        foreach (var id in earlier.Package!.RuntimeConfig.Select(field => field.Id).Distinct(StringComparer.Ordinal))
        {
            if (!earlierValues.TryGetValue(id, out var earlierValue) ||
                !laterValues.TryGetValue(id, out var laterValue) ||
                earlierValue == laterValue)
            {
                continue;
            }

            conflicts.Add(new ModConflict(
                earlier.DisplayName,
                later.DisplayName,
                $"C Patch '{id}': {later.DisplayName} sets {laterValue}, overriding {earlierValue}"));
        }
    }

    private static void AddEditConflict(List<ModConflict> conflicts, ModStackEntryInfo earlier, ModStackEntryInfo later)
    {
        var laterEdits = later.Package!.Edits;
        var shared = earlier.Package!.Edits
            .Where(edit => laterEdits.Any(other => SameTarget(edit, other)))
            .ToList();
        if (shared.Count == 0)
            return;

        var first = shared[0];
        conflicts.Add(new ModConflict(
            earlier.DisplayName,
            later.DisplayName,
            $"{shared.Count} edit(s) to the same target, e.g. {first.Kind} {first.Target}"));
    }

    private static bool SameTarget(ProjectEdit a, ProjectEdit b) =>
        string.Equals(a.Kind, b.Kind, StringComparison.Ordinal) &&
        string.Equals(a.Target, b.Target, StringComparison.Ordinal);

    private static long OverlayLength(ModPackageOverlay overlay) =>
        overlay.Data.Length > 0 ? overlay.Data.Length : overlay.Size;

    // Later entries overwrite earlier ones for the same id, matching the order ModPackage.Apply writes them.
    private static Dictionary<string, byte> EffectiveRuntimeConfig(ModPackageDocument package)
    {
        var values = new Dictionary<string, byte>(StringComparer.Ordinal);
        foreach (var field in package.RuntimeConfig)
            values[field.Id] = field.Value;
        return values;
    }
}
