using System.Text;
using System.Text.RegularExpressions;

namespace RescueEditor.Core;

public enum DialogueColor
{
    Default,
    White,
    Blue,
    Red,
    Black,
    Green,
    Cyan,
    Yellow,
    Pink,
    Gray,
}

/// <summary>Name / species slots for <c>$n</c> / <c>$m</c> dialogue macros.</summary>
public sealed class DialogueFormatContext
{
    public DialogueFormatContext(
        short playerSpecies = 0,
        short partnerSpecies = 0,
        IReadOnlyList<string?>? names = null,
        IReadOnlyList<string?>? speciesNames = null,
        string? teamName = null,
        IReadOnlyList<string?>? values = null,
        string? friendArea = null,
        IReadOnlyList<string?>? items = null)
    {
        PlayerSpecies = playerSpecies;
        PartnerSpecies = partnerSpecies;
        Names = names ?? Array.Empty<string?>();
        SpeciesNames = speciesNames ?? Array.Empty<string?>();
        TeamName = string.IsNullOrWhiteSpace(teamName) ? "Team" : teamName;
        Values = values ?? Array.Empty<string?>();
        FriendArea = string.IsNullOrWhiteSpace(friendArea) ? "[Friend Area]" : friendArea;
        Items = items ?? Array.Empty<string?>();
    }

    public short PlayerSpecies { get; }
    public short PartnerSpecies { get; }
    public IReadOnlyList<string?> Names { get; }
    public IReadOnlyList<string?> SpeciesNames { get; }
    public string TeamName { get; }
    public IReadOnlyList<string?> Values { get; }
    public string FriendArea { get; }
    public IReadOnlyList<string?> Items { get; }

    public static DialogueFormatContext FromTeam(short playerSpecies, short partnerSpecies) =>
        new(
            playerSpecies,
            partnerSpecies,
            names:
            [
                DialogueFormatter.PrettySpeciesName(playerSpecies),
                DialogueFormatter.PrettySpeciesName(partnerSpecies),
            ],
            speciesNames:
            [
                DialogueFormatter.PrettySpeciesName(playerSpecies),
                DialogueFormatter.PrettySpeciesName(partnerSpecies),
            ]);

    public string ResolveName(int index)
    {
        if (index >= 0 && index < Names.Count && !string.IsNullOrWhiteSpace(Names[index]))
            return Names[index]!;
        if (index == 0 && PlayerSpecies > 0)
            return DialogueFormatter.PrettySpeciesName(PlayerSpecies);
        if (index == 1 && PartnerSpecies > 0)
            return DialogueFormatter.PrettySpeciesName(PartnerSpecies);
        return index == 0 ? "Hero" : index == 1 ? "Partner" : $"Pokémon";
    }

    public string ResolveSpecies(int index)
    {
        if (index >= 0 && index < SpeciesNames.Count && !string.IsNullOrWhiteSpace(SpeciesNames[index]))
            return SpeciesNames[index]!;
        if (index == 0 && PlayerSpecies > 0)
            return DialogueFormatter.PrettySpeciesName(PlayerSpecies);
        if (index == 1 && PartnerSpecies > 0)
            return DialogueFormatter.PrettySpeciesName(PartnerSpecies);
        return ResolveName(index);
    }

    public string ResolveValue(int index)
    {
        if (index >= 0 && index < Values.Count && !string.IsNullOrWhiteSpace(Values[index]))
            return Values[index]!;
        return "0";
    }

    public string ResolveItem(int index)
    {
        if (index >= 0 && index < Items.Count && !string.IsNullOrWhiteSpace(Items[index]))
            return Items[index]!;
        return "[Item]";
    }
}

public readonly record struct DialogueRun(string Text, DialogueColor Color);

/// <summary>Parses / measures / plain-texts dialogue that still contains COLOR/RESET markup.</summary>
public static class DialogueRuns
{
    private static readonly Regex Token = new(
        @"\{(?:COLOR|color)\s+([A-Za-z0-9_]+)\}|\{(?:RESET|reset)\}|\{([A-Za-z0-9_]+)(?:\s[^}]*)?\}",
        RegexOptions.Compiled);

    public static IReadOnlyList<DialogueRun> Parse(string? text)
    {
        if (string.IsNullOrEmpty(text))
            return Array.Empty<DialogueRun>();

        var runs = new List<DialogueRun>();
        var color = DialogueColor.Default;
        var index = 0;
        foreach (Match match in Token.Matches(text))
        {
            if (match.Index > index)
                Append(runs, text[index..match.Index], color);

            var token = match.Value;
            if (token.StartsWith("{COLOR", StringComparison.OrdinalIgnoreCase) ||
                token.StartsWith("{color", StringComparison.OrdinalIgnoreCase))
            {
                color = DialogueColorMap.FromName(match.Groups[1].Value);
            }
            else if (token.Equals("{RESET}", StringComparison.OrdinalIgnoreCase) ||
                     token.Equals("{reset}", StringComparison.OrdinalIgnoreCase))
            {
                color = DialogueColor.Default;
            }
            // Unknown leftover braces are dropped (already expanded by formatter).

            index = match.Index + match.Length;
        }

        if (index < text.Length)
            Append(runs, text[index..], color);

        return runs;
    }

    public static string PlainText(string? text)
    {
        if (string.IsNullOrEmpty(text))
            return string.Empty;
        var sb = new StringBuilder();
        foreach (var run in Parse(text))
            sb.Append(run.Text);
        return sb.ToString();
    }

    /// <summary>True when the line begins with a retained <c>{CENTER_ALIGN}</c> marker.</summary>
    public static bool IsCentered(string? text)
    {
        if (string.IsNullOrEmpty(text))
            return false;
        return text.TrimStart().StartsWith("{CENTER_ALIGN}", StringComparison.OrdinalIgnoreCase);
    }

    /// <summary>
    /// Absolute X from a leading <c>{MOVE_X N}</c> tag, or -1 when absent.
    /// </summary>
    public static int LeadingMoveX(string? text)
    {
        if (string.IsNullOrEmpty(text))
            return -1;
        var match = Regex.Match(
            text.TrimStart(),
            @"^\{MOVE_X\s+(\d+)\}",
            RegexOptions.IgnoreCase);
        return match.Success && int.TryParse(match.Groups[1].Value, out var x) ? x : -1;
    }

    public static int Measure(PixelFont font, string? text)
    {
        var w = 0;
        foreach (var run in Parse(text))
            w += font.Measure(run.Text);
        return w;
    }

    /// <summary>
    /// Split rich text to a prefix that fits <paramref name="maxWidth"/>, preferring spaces.
    /// Oversized single words are hard-broken so the textbox never overflows.
    /// </summary>
    public static (string Chunk, string Remainder) TakeWidth(PixelFont font, string rich, int maxWidth)
    {
        if (string.IsNullOrEmpty(rich))
            return (string.Empty, string.Empty);
        if (Measure(font, rich) <= maxWidth)
            return (rich, string.Empty);

        var runs = Parse(rich);
        var chars = new List<(char Ch, DialogueColor Color)>();
        foreach (var run in runs)
        {
            foreach (var ch in run.Text)
                chars.Add((ch, run.Color));
        }

        var fit = 0;
        var width = 0;
        var lastSpace = -1;
        for (var i = 0; i < chars.Count; i++)
        {
            var adv = font.Advance(chars[i].Ch);
            if (width + adv > maxWidth)
                break;
            width += adv;
            fit = i + 1;
            if (chars[i].Ch == ' ')
                lastSpace = i + 1;
        }

        if (fit == 0 && chars.Count > 0)
            fit = 1; // force progress on glyphs wider than the box
        else if (fit < chars.Count &&
                 lastSpace > 0 &&
                 chars[fit].Ch != ' ' &&
                 chars[fit - 1].Ch != ' ')
        {
            // Mid-word overflow: wrap at the previous space instead.
            fit = lastSpace;
        }

        // Drop leading spaces on the next line.
        var restStart = fit;
        while (restStart < chars.Count && chars[restStart].Ch == ' ')
            restStart++;

        return (Encode(chars.Take(fit)), Encode(chars.Skip(restStart)));
    }

    private static string Encode(IEnumerable<(char Ch, DialogueColor Color)> chars)
    {
        var sb = new StringBuilder();
        var color = DialogueColor.Default;
        foreach (var (ch, next) in chars)
        {
            if (next != color)
            {
                if (color != DialogueColor.Default)
                    sb.Append("{RESET}");
                if (next != DialogueColor.Default)
                    sb.Append("{COLOR ").Append(DialogueColorMap.TagName(next)).Append('}');
                color = next;
            }
            sb.Append(ch);
        }
        if (color != DialogueColor.Default)
            sb.Append("{RESET}");
        return sb.ToString();
    }

    public static (byte R, byte G, byte B) Rgb(DialogueColor color, bool onBackground = false) =>
        color switch
        {
            DialogueColor.Cyan => ((byte)0x40, (byte)0xF0, (byte)0xF8),
            DialogueColor.Yellow => ((byte)0xF8, (byte)0xF0, (byte)0x40),
            DialogueColor.Red => ((byte)0xF8, (byte)0x48, (byte)0x48),
            DialogueColor.Green => ((byte)0x48, (byte)0xE0, (byte)0x58),
            DialogueColor.Blue => ((byte)0x48, (byte)0x78, (byte)0xF8),
            DialogueColor.Pink => ((byte)0xF8, (byte)0x78, (byte)0xC8),
            DialogueColor.Black => ((byte)0x10, (byte)0x10, (byte)0x18),
            DialogueColor.Gray => ((byte)0xA0, (byte)0xA0, (byte)0xA8),
            DialogueColor.White => ((byte)0xF8, (byte)0xF8, (byte)0xF8),
            _ => onBackground ? ((byte)0xF8, (byte)0xF8, (byte)0xF8) : ((byte)0xF8, (byte)0xF8, (byte)0xF8),
        };

    private static void Append(List<DialogueRun> runs, string text, DialogueColor color)
    {
        if (text.Length == 0)
            return;
        if (runs.Count > 0 && runs[^1].Color == color)
            runs[^1] = new DialogueRun(runs[^1].Text + text, color);
        else
            runs.Add(new DialogueRun(text, color));
    }
}

public static class DialogueColorMap
{
    public static DialogueColor FromName(string? name)
    {
        if (string.IsNullOrEmpty(name))
            return DialogueColor.Default;

        var key = name.ToUpperInvariant();
        if (key.StartsWith("CYAN", StringComparison.Ordinal) ||
            key is "GENDER_COLOR" or "LIGHT_BLUE" or "COLOR_LIGHT_BLUE")
            return DialogueColor.Cyan;
        if (key.StartsWith("YELLOW", StringComparison.Ordinal))
            return DialogueColor.Yellow;
        if (key.StartsWith("RED", StringComparison.Ordinal))
            return DialogueColor.Red;
        if (key.StartsWith("GREEN", StringComparison.Ordinal))
            return DialogueColor.Green;
        if (key.StartsWith("BLUE", StringComparison.Ordinal))
            return DialogueColor.Blue;
        if (key.StartsWith("PINK", StringComparison.Ordinal))
            return DialogueColor.Pink;
        if (key.StartsWith("BLACK", StringComparison.Ordinal))
            return DialogueColor.Black;
        if (key.Contains("GRAY", StringComparison.Ordinal) || key.Contains("GREY", StringComparison.Ordinal))
            return DialogueColor.Gray;
        if (key.StartsWith("WHITE", StringComparison.Ordinal) || key is "DEFAULT")
            return DialogueColor.White;
        return DialogueColor.Default;
    }

    public static string TagName(DialogueColor color) => color switch
    {
        DialogueColor.Cyan => "CYAN",
        DialogueColor.Yellow => "YELLOW",
        DialogueColor.Red => "RED",
        DialogueColor.Green => "GREEN",
        DialogueColor.Blue => "BLUE",
        DialogueColor.Pink => "PINK",
        DialogueColor.Black => "BLACK",
        DialogueColor.Gray => "DARK_GRAY",
        DialogueColor.White => "WHITE",
        _ => "DEFAULT",
    };
}

/// <summary>Turns decoded script strings into player-facing textbox pages and styles.</summary>
public static class DialogueFormatter
{
    private static readonly Regex Tag = new(
        @"\{([A-Za-z0-9_]+)(?:\s([^}]*))?\}",
        RegexOptions.Compiled);

    public static IReadOnlyList<string> SplitPages(
        string? raw,
        short playerSpecies = 0,
        short partnerSpecies = 0,
        string? playerName = null,
        string? partnerName = null) =>
        SplitPages(raw, BuildContext(playerSpecies, partnerSpecies, playerName, partnerName));

    public static IReadOnlyList<string> SplitPages(string? raw, DialogueFormatContext? context)
    {
        if (string.IsNullOrEmpty(raw))
            return Array.Empty<string>();

        // WAIT_PRESS (#W) and EXTRA_MSG (#P) both advance to the next textbox page.
        var parts = Regex.Split(raw, @"\{(?:WAIT_PRESS|EXTRA_MSG)\}", RegexOptions.IgnoreCase);
        var pages = new List<string>();
        foreach (var part in parts)
        {
            var cleaned = ForTextbox(part, context);
            if (!string.IsNullOrWhiteSpace(DialogueRuns.PlainText(cleaned)))
                pages.Add(cleaned);
        }
        return pages.Count > 0 ? pages : new[] { string.Empty };
    }

    public static string ForTextbox(
        string? raw,
        short playerSpecies = 0,
        short partnerSpecies = 0,
        string? playerName = null,
        string? partnerName = null) =>
        ForTextbox(raw, BuildContext(playerSpecies, partnerSpecies, playerName, partnerName));

    public static string ForTextbox(string? raw, DialogueFormatContext? context)
    {
        if (string.IsNullOrEmpty(raw))
            return string.Empty;

        context ??= new DialogueFormatContext();
        var text = raw;
        text = text.Replace("{NEW_LINE}", "\n", StringComparison.Ordinal);
        text = text.Replace("{WAIT_PRESS}", "", StringComparison.OrdinalIgnoreCase);
        text = text.Replace("{EXTRA_MSG}", "", StringComparison.OrdinalIgnoreCase);

        text = Tag.Replace(text, match =>
        {
            var name = match.Groups[1].Value;
            var arg = match.Groups[2].Success ? match.Groups[2].Value.Trim() : "";

            if (name.Equals("COLOR", StringComparison.OrdinalIgnoreCase) ||
                name.Equals("color", StringComparison.OrdinalIgnoreCase))
                return "{COLOR " + (string.IsNullOrEmpty(arg) ? "DEFAULT" : arg) + "}";

            if (name.Equals("RESET", StringComparison.OrdinalIgnoreCase) ||
                name.Equals("reset", StringComparison.OrdinalIgnoreCase))
                return "{RESET}";

            if (TryParseIndexed(name, "POKEMON_", out var pokeIndex) ||
                TryParseIndexed(name, "POKEMON", out pokeIndex))
                return Colorize(context.ResolveSpecies(pokeIndex), SlotColor(pokeIndex));

            if (TryParseIndexed(name, "NAME_", out var nameIndex) ||
                TryParseIndexed(name, "NAME", out nameIndex))
                return Colorize(context.ResolveName(nameIndex), SlotColor(nameIndex));

            if (TryParseIndexed(name, "VALUE_", out var valueIndex) ||
                TryParseIndexed(name, "VALUE", out valueIndex))
                return context.ResolveValue(valueIndex);

            if (TryParseIndexed(name, "MOVE_ITEM_", out var itemIndex) ||
                TryParseIndexed(name, "MOVE_ITEM", out itemIndex))
                return context.ResolveItem(itemIndex);

            if (DialogueIcons.TryResolve(name, out var iconChars))
                return iconChars;

            if (name.StartsWith("MOVE_X_POSITION_BY_", StringComparison.OrdinalIgnoreCase))
            {
                var digits = name["MOVE_X_POSITION_BY_".Length..];
                if (int.TryParse(digits, out var x))
                    return "{MOVE_X " + x + "}";
            }

            return name switch
            {
                "CENTER_ALIGN" => "{CENTER_ALIGN}",
                "LETTER_ALIGN" => "",
                "MOVE_X_POSITION" => "",
                "FRIEND_AREA" => context.FriendArea,
                "TEAM_NAME" => context.TeamName,
                "WAIT_PRESS" => "",
                "EXTRA_MSG" => "",
                "NEW_LINE" => "\n",
                // Keep unknown macros out of the pixel font (they showed as garbage).
                _ => "",
            };
        });

        text = Regex.Replace(text, @"[ \t]+\n", "\n");
        text = Regex.Replace(text, @"\n[ \t]+", "\n");
        text = Regex.Replace(text, @"\n{3,}", "\n\n");
        text = Regex.Replace(text, @"[ \t]{2,}", " ");
        text = Regex.Replace(text, @"\\x[0-9A-Fa-f]{2}", "");
        text = text.Replace('\u2018', '\'').Replace('\u2019', '\'')
            .Replace('\u201C', '"').Replace('\u201D', '"')
            .Replace('\u2026', '.').Replace('\u2014', '-').Replace('\u2013', '-');
        // Keep printable ASCII + braces + Latin-1 + private-use icon glyphs.
        text = Regex.Replace(text, @"[^\n\r\{\}\x20-\x7E\u00C0-\u00FF\uE100-\uE1FF]", "");
        return text.Trim();
    }

    public static string PrettySpeciesName(short species, string? repositoryRoot = null)
    {
        if (species <= 0)
            return "Pokémon";
        // Cutscene variant shares the retail display name.
        if (species == 423) // MONSTER_RAYQUAZA_CUTSCENE
            return "Rayquaza";

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
        var pretty = char.ToUpperInvariant(folder[0]) + folder[1..];
        // Folder names are ASCII; restore the accented retail spelling.
        if (pretty.Equals("Pokemon", StringComparison.OrdinalIgnoreCase))
            return "Pokémon";
        return pretty;
    }

    private static DialogueFormatContext BuildContext(
        short playerSpecies,
        short partnerSpecies,
        string? playerName,
        string? partnerName)
    {
        var names = new string?[10];
        names[0] = playerName ?? (playerSpecies > 0 ? PrettySpeciesName(playerSpecies) : null);
        names[1] = partnerName ?? (partnerSpecies > 0 ? PrettySpeciesName(partnerSpecies) : null);
        return new DialogueFormatContext(playerSpecies, partnerSpecies, names, names);
    }

    private static DialogueColor SlotColor(int index) =>
        index <= 0 ? DialogueColor.Cyan : DialogueColor.Yellow;

    private static string Colorize(string value, DialogueColor color) =>
        "{COLOR " + DialogueColorMap.TagName(color) + "}" + value + "{RESET}";

    private static bool TryParseIndexed(string token, string prefix, out int index)
    {
        index = -1;
        if (!token.StartsWith(prefix, StringComparison.OrdinalIgnoreCase))
            return false;
        var tail = token[prefix.Length..];
        return int.TryParse(tail, out index) && index >= 0 && index <= 9;
    }
}
