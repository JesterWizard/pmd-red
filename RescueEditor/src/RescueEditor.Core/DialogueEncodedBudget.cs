using System.Text;
using System.Text.RegularExpressions;

namespace RescueEditor.Core;

/// <summary>
/// Same-size dialogue budget using decoded editor text, excluding <c>{…}</c> control macros.
/// </summary>
public static class DialogueEncodedBudget
{
    private static readonly Regex ControlTag = new(
        @"\{([A-Za-z0-9_]+)(?:\s([^}]*))?\}",
        RegexOptions.Compiled);

    public static int CountBytes(string? text)
    {
        if (string.IsNullOrEmpty(text))
            return 0;

        var stripped = ControlTag.Replace(text, "");
        return Encoding.ASCII.GetByteCount(stripped);
    }

    public static bool Fits(string? text, int maxBytes) =>
        CountBytes(text) <= maxBytes;
}
