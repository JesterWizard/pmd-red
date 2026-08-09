using System.Text.RegularExpressions;

namespace RescueEditor.Core;

/// <summary>Turns decoded script strings into player-facing textbox pages and styles.</summary>
public static class DialogueFormatter
{
    private static readonly Regex Tag = new(@"\{([A-Za-z0-9_]+)(?:\s[^}]*)?\}", RegexOptions.Compiled);

    public static IReadOnlyList<string> SplitPages(
        string? raw,
        short playerSpecies = 0,
        short partnerSpecies = 0,
        string? playerName = null,
        string? partnerName = null)
    {
        if (string.IsNullOrEmpty(raw))
            return Array.Empty<string>();

        var parts = Regex.Split(raw, @"\{WAIT_PRESS\}", RegexOptions.IgnoreCase);
        var pages = new List<string>();
        foreach (var part in parts)
        {
            var cleaned = ForTextbox(part, playerSpecies, partnerSpecies, playerName, partnerName);
            if (!string.IsNullOrWhiteSpace(cleaned))
                pages.Add(cleaned);
        }
        return pages.Count > 0 ? pages : new[] { string.Empty };
    }

    public static string ForTextbox(
        string? raw,
        short playerSpecies = 0,
        short partnerSpecies = 0,
        string? playerName = null,
        string? partnerName = null)
    {
        if (string.IsNullOrEmpty(raw))
            return string.Empty;

        var text = raw;
        text = text.Replace("{NEW_LINE}", "\n", StringComparison.Ordinal);
        text = text.Replace("{WAIT_PRESS}", "", StringComparison.Ordinal);
        text = text.Replace("{CENTER_ALIGN}", "", StringComparison.Ordinal);
        text = text.Replace("{LETTER_ALIGN}", "", StringComparison.Ordinal);

        text = Tag.Replace(text, match =>
        {
            var name = match.Groups[1].Value;
            return name switch
            {
                "POKEMON_0" or "POKEMON0" => SpeciesLabel(playerSpecies, "Pokémon"),
                "POKEMON_1" or "POKEMON1" => SpeciesLabel(partnerSpecies, "Pokémon"),
                "NAME_0" => playerName ?? SpeciesLabel(playerSpecies, "Hero"),
                "NAME_1" => partnerName ?? SpeciesLabel(partnerSpecies, "Partner"),
                "WAIT_PRESS" => "",
                "CENTER_ALIGN" or "LETTER_ALIGN" or "NEW_LINE" => name == "NEW_LINE" ? "\n" : "",
                "SPEECH_BUBBLE" => "", // drawn as icon by HUD
                _ when name.StartsWith("COLOR", StringComparison.OrdinalIgnoreCase) => "",
                _ when name.StartsWith("color", StringComparison.OrdinalIgnoreCase) => "",
                _ when name.Equals("RESET", StringComparison.OrdinalIgnoreCase) => "",
                _ => "",
            };
        });

        text = Regex.Replace(text, @"[ \t]+\n", "\n");
        text = Regex.Replace(text, @"\n[ \t]+", "\n"); // NEW_LINE body starts at column 0
        text = Regex.Replace(text, @"\n{3,}", "\n\n");
        text = Regex.Replace(text, @"[ \t]{2,}", " ");
        // Drop unknown decode escapes and punctuation the pixel font lacks (showed as | bars).
        text = Regex.Replace(text, @"\\x[0-9A-Fa-f]{2}", "");
        text = text.Replace('\u2018', '\'').Replace('\u2019', '\'')
            .Replace('\u201C', '"').Replace('\u201D', '"')
            .Replace('\u2026', '.').Replace('\u2014', '-').Replace('\u2013', '-');
        text = Regex.Replace(text, @"[^\n\r\x20-\x7E]", "");
        return text.Trim();
    }

    public static string PrettySpeciesName(short species, string? repositoryRoot = null)
    {
        if (species <= 0)
            return "Pokémon";
        IReadOnlyDictionary<int, string>? folders = null;
        try
        {
            folders = MonsterSpriteFolders.Load(repositoryRoot ?? ".");
        }
        catch
        {
            // Fall through to ForSpecies overrides only.
        }

        var folder = MonsterSpriteFolders.ForSpecies(species, folders);
        if (string.IsNullOrEmpty(folder))
            return "Pokémon";
        return char.ToUpperInvariant(folder[0]) + folder[1..];
    }

    private static string SpeciesLabel(short species, string fallback) =>
        species > 0 ? PrettySpeciesName(species) : fallback;
}
