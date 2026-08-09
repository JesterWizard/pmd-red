using System.Text;
using System.Text.RegularExpressions;

namespace RescueEditor.Core;

public sealed class Charmap
{
    private readonly Dictionary<string, string> _glyphs;
    private readonly Dictionary<string, string> _macros;
    private readonly Dictionary<byte, string> _colors;
    private readonly int _maximumSequenceLength;

    private Charmap(
        Dictionary<string, string> glyphs,
        Dictionary<string, string> macros,
        Dictionary<byte, string> colors)
    {
        _glyphs = glyphs;
        _macros = macros;
        _colors = colors;
        _maximumSequenceLength = glyphs.Keys.Concat(macros.Keys)
            .Select(key => key.Length / 2)
            .DefaultIfEmpty(1)
            .Max();
    }

    public static Charmap FromFile(string path)
    {
        if (!File.Exists(path))
            return CreateAsciiFallback();

        var glyphs = new Dictionary<string, string>(StringComparer.OrdinalIgnoreCase);
        var macros = new Dictionary<string, string>(StringComparer.OrdinalIgnoreCase);
        var colors = new Dictionary<byte, string>();

        foreach (var rawLine in File.ReadLines(path))
        {
            var line = rawLine.Trim();
            if (line.Length == 0 || line.StartsWith('@'))
                continue;

            var equals = line.IndexOf('=');
            if (equals < 0)
                continue;

            var left = line[..equals].Trim();
            var right = line[(equals + 1)..];
            var comment = right.IndexOf('@');
            if (comment >= 0)
                right = right[..comment];

            var bytes = Regex.Matches(right, @"(?i)(?<![0-9A-F])[0-9A-F]{2}(?![0-9A-F])")
                .Select(match => Convert.ToByte(match.Value, 16))
                .ToArray();
            if (bytes.Length == 0)
                continue;

            var key = Convert.ToHexString(bytes);
            if (ParseQuotedKey(left) is { } quoted)
            {
                glyphs[key] = quoted;
                continue;
            }

            var identifier = ParseIdentifier(left);
            if (identifier is null)
                continue;

            if (bytes.Length == 1 && IsColorToken(identifier))
            {
                colors[bytes[0]] = identifier;
                continue;
            }

            if (bytes.Length >= 2)
                macros[key] = FormatMacro(identifier);
        }

        if (glyphs.Count == 0)
            return CreateAsciiFallback();
        return new Charmap(glyphs, macros, colors);
    }

    public static Charmap CreateAsciiFallback()
    {
        var glyphs = new Dictionary<string, string>(StringComparer.OrdinalIgnoreCase)
        {
            ["0A"] = "\n",
            ["00"] = "\0",
        };
        for (var value = 0x20; value <= 0x7E; value++)
            glyphs[value.ToString("X2")] = ((char)value).ToString();
        return new Charmap(glyphs, new Dictionary<string, string>(StringComparer.OrdinalIgnoreCase),
            new Dictionary<byte, string>());
    }

    public string Decode(ReadOnlySpan<byte> bytes, int maxCharacters = 100_000)
    {
        var result = new StringBuilder(Math.Min(bytes.Length, maxCharacters));
        var index = 0;
        while (index < bytes.Length && result.Length < maxCharacters)
        {
            if (bytes[index] == 0)
                break;

            var found = false;
            var maximum = Math.Min(_maximumSequenceLength, bytes.Length - index);
            for (var length = maximum; length >= 1; length--)
            {
                var key = Convert.ToHexString(bytes.Slice(index, length));
                if (_macros.TryGetValue(key, out var macro))
                {
                    if (macro is "{COLOR}" or "{color}" && index + length < bytes.Length)
                    {
                        var colorByte = bytes[index + length];
                        var colorName = _colors.TryGetValue(colorByte, out var known)
                            ? known
                            : $"0x{colorByte:X2}";
                        result.Append(macro == "{color}"
                            ? $"{{color {colorName}}}"
                            : $"{{COLOR {colorName}}}");
                        index += length + 1;
                    }
                    else if (macro is "{NEW_LINE}")
                    {
                        result.Append('\n');
                        index += length;
                    }
                    else
                    {
                        result.Append(macro);
                        index += length;
                    }

                    found = true;
                    break;
                }

                if (!_glyphs.TryGetValue(key, out var text))
                    continue;

                if (text is not "\0")
                    result.Append(text);
                index += length;
                found = true;
                break;
            }

            if (!found)
            {
                result.Append($"\\x{bytes[index]:X2}");
                index++;
            }
        }

        return result.ToString();
    }

    public DecodeStats Analyze(ReadOnlySpan<byte> bytes, int maxBytes = 768)
    {
        var length = Math.Min(bytes.Length, maxBytes);
        if (length == 0)
            return new DecodeStats(string.Empty, 0, 0, 0, 0);

        var slice = bytes[..length];
        var text = Decode(slice);
        var unknownEscapes = 0;
        for (var index = 0; index < text.Length - 3; index++)
        {
            if (text[index] == '\\' && index + 3 < text.Length && text[index + 1] == 'x')
                unknownEscapes++;
        }

        var letters = text.Count(char.IsLetter);
        var macros = 0;
        for (var index = 0; index < text.Length; index++)
        {
            if (text[index] == '{')
                macros++;
        }

        return new DecodeStats(text, letters, unknownEscapes, macros, length);
    }

    public string DecodeRomString(RomImage rom, int offset, int maxBytes = 4096)
    {
        if (!rom.IsRangeValid(offset, 1))
            return $"<invalid pointer 0x{offset:X}>";
        var length = 0;
        while (length < maxBytes && rom.IsRangeValid(offset + length, 1) &&
               rom.ReadByte(offset + length) != 0)
            length++;
        return Decode(rom.Slice(offset, length));
    }

    private static bool IsColorToken(string identifier)
    {
        return identifier is "DEFAULT" or "BLUE" or "RED" or "RED_RAW" or "RED_W" or "BLACK"
            or "GREEN" or "GREEN_RAW" or "GREEN_H" or "GREEN_I" or "CYAN" or "CYAN_RAW"
            or "CYAN_G" or "CYAN_M" or "YELLOW" or "YELLOW_RAW" or "YELLOW_C" or "YELLOW_D"
            or "YELLOW_N" or "WHITE" or "WHITE_A" or "WHITE_B" or "WHITE_F" or "DARKER_GRAY"
            or "DARK_GRAY" or "GENDER_COLOR" or "PINK" or "COLOR15_S" or "COLOR15_T"
            || identifier.StartsWith("M3E_", StringComparison.Ordinal);
    }

    private static string FormatMacro(string identifier) =>
        identifier switch
        {
            "NEW_LINE" => "{NEW_LINE}",
            _ => "{" + identifier + "}",
        };

    private static string? ParseIdentifier(string text)
    {
        var match = Regex.Match(text, @"^([A-Za-z_][A-Za-z0-9_]*)\s*$");
        return match.Success ? match.Groups[1].Value : null;
    }

    private static string? ParseQuotedKey(string text)
    {
        var quote = text.IndexOf('\'');
        if (quote < 0)
            return null;

        var builder = new StringBuilder();
        var escaped = false;
        for (var index = quote + 1; index < text.Length; index++)
        {
            var value = text[index];
            if (escaped)
            {
                builder.Append(value switch
                {
                    'n' => '\n',
                    'r' => '\r',
                    't' => '\t',
                    '0' => '\0',
                    '\\' => '\\',
                    '\'' => '\'',
                    _ => value,
                });
                escaped = false;
            }
            else if (value == '\\')
            {
                escaped = true;
            }
            else if (value == '\'')
            {
                return builder.ToString();
            }
            else
            {
                builder.Append(value);
            }
        }

        return null;
    }
}

public readonly record struct DecodeStats(
    string Text,
    int Letters,
    int UnknownEscapes,
    int Macros,
    int ByteLength);
