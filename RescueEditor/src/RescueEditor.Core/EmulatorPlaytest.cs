using System.Diagnostics;

namespace RescueEditor.Core;

/// <summary>Emulator lookup result: <see cref="Path"/> on success, else a user-facing <see cref="Error"/>.</summary>
public readonly record struct EmulatorResolution(string? Path, string? Error)
{
    public bool Success => Path is not null;
}

/// <summary>Playtest copy result: <see cref="RomPath"/> on success, else a user-facing <see cref="Error"/>.</summary>
public readonly record struct PlaytestCopyResult(string? RomPath, string? Error)
{
    public bool Success => RomPath is not null;
}

/// <summary>
/// Opens the last Build ROM output in an external emulator (mGBA by default). The emulator runs a
/// <c>.playtest.gba</c> copy so a running emulator never locks the Build ROM target.
/// </summary>
public static class EmulatorPlaytest
{
    public const string MgbaDownloadUrl = "https://mgba.io/downloads.html";

    public static string PlaytestRomPath(string builtRomPath)
    {
        var full = Path.GetFullPath(builtRomPath);
        return Path.Combine(
            Path.GetDirectoryName(full)!,
            Path.GetFileNameWithoutExtension(full) + ".playtest.gba");
    }

    public static IReadOnlyList<string> DefaultEmulatorCandidates(
        bool isWindows,
        bool isMacOs,
        Func<string, string?> getEnvironmentVariable)
    {
        if (isWindows)
        {
            var candidates = new List<string>();
            foreach (var (variable, subdirectory) in new[]
                     {
                         ("ProgramFiles", ""),
                         ("ProgramFiles(x86)", ""),
                         ("LOCALAPPDATA", @"Programs\"),
                     })
            {
                var root = getEnvironmentVariable(variable);
                if (!string.IsNullOrWhiteSpace(root))
                    candidates.Add(root.TrimEnd('\\') + @"\" + subdirectory + @"mGBA\mGBA.exe");
            }
            return candidates;
        }

        if (isMacOs)
            return ["/Applications/mGBA.app/Contents/MacOS/mGBA"];

        return
        [
            "/usr/bin/mgba-qt",
            "/usr/local/bin/mgba-qt",
            "/usr/games/mgba-qt",
            "/var/lib/flatpak/exports/bin/io.mgba.mGBA",
        ];
    }

    public static EmulatorResolution ResolveEmulator(
        string? configuredPath,
        IEnumerable<string> candidates,
        Func<string, bool> fileExists)
    {
        if (!string.IsNullOrWhiteSpace(configuredPath))
        {
            return fileExists(configuredPath)
                ? new EmulatorResolution(configuredPath, null)
                : new EmulatorResolution(null,
                    $"The emulator set in RescueTemple was not found:\n{configuredPath}\n\n" +
                    "Use Emulator → Set Emulator… to choose it again.");
        }

        var looked = new List<string>();
        foreach (var candidate in candidates)
        {
            if (fileExists(candidate))
                return new EmulatorResolution(candidate, null);
            looked.Add(candidate);
        }

        var message = $"No emulator found. Install mGBA ({MgbaDownloadUrl}) or use " +
            "Emulator → Set Emulator… to choose an emulator executable.";
        if (looked.Count > 0)
            message += "\n\nLooked in:\n" + string.Join("\n", looked);
        return new EmulatorResolution(null, message);
    }

    /// <summary>Copy the built ROM to its playtest path; seed the playtest save from the build's .sav once.</summary>
    public static PlaytestCopyResult PrepareCopy(string? builtRomPath)
    {
        if (string.IsNullOrWhiteSpace(builtRomPath))
            return new PlaytestCopyResult(null, "No ROM has been built yet. Use File → Build ROM… first.");
        if (!File.Exists(builtRomPath))
            return new PlaytestCopyResult(null,
                $"The last built ROM is missing:\n{builtRomPath}\n\nUse File → Build ROM… again.");

        var target = PlaytestRomPath(builtRomPath);
        try
        {
            File.Copy(builtRomPath, target, overwrite: true);
            var builtSave = Path.ChangeExtension(builtRomPath, ".sav");
            var playtestSave = Path.ChangeExtension(target, ".sav");
            if (!File.Exists(playtestSave) && File.Exists(builtSave))
                File.Copy(builtSave, playtestSave);
        }
        catch (Exception exception) when (exception is IOException or UnauthorizedAccessException)
        {
            return new PlaytestCopyResult(null,
                $"Could not update the playtest copy:\n{target}\n\n{exception.Message}\n\n" +
                "Close the emulator and try again.");
        }

        return new PlaytestCopyResult(target, null);
    }

    public static ProcessStartInfo CreateStartInfo(string emulatorPath, string romPath)
    {
        var info = new ProcessStartInfo(emulatorPath)
        {
            UseShellExecute = false,
            WorkingDirectory = Path.GetDirectoryName(Path.GetFullPath(romPath)) ?? string.Empty,
        };
        info.ArgumentList.Add(romPath);
        return info;
    }
}
