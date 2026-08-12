using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class CharmapEncodeTests
{
    [Fact]
    public void EncodesCenterAlignMacroNotLiteralBraces()
    {
        var charmap = LoadRetailCharmap();
        var bytes = charmap.Encode("{CENTER_ALIGN}Hi");

        Assert.Equal(new byte[] { 0x23, 0x2B, 0x48, 0x69 }, bytes);
        Assert.Equal("{CENTER_ALIGN}Hi", charmap.Decode(bytes));
    }

    [Fact]
    public void EncodesColorAndNewlineMacros()
    {
        var charmap = LoadRetailCharmap();
        var bytes = charmap.Encode("{COLOR GREEN}OK{RESET}\nNext");

        Assert.Equal("{COLOR GREEN}OK{RESET}\nNext", charmap.Decode(bytes));
        Assert.DoesNotContain((byte)0x7B, bytes);
    }

    [Fact]
    public void ParsesDialogueStringContainingCenterAlign()
    {
        var parsed = ScriptSource.Parse("""
            DIALOGUE(2, "{CENTER_ALIGN}Welcome!")
            """);

        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));
        var command = Assert.Single(Assert.Single(parsed.Sections).Commands);
        Assert.Equal("{CENTER_ALIGN}Welcome!", command.DialogueText);
    }

    private static Charmap LoadRetailCharmap()
    {
        var path = FindUpwards("charmap.txt");
        Assert.NotNull(path);
        return Charmap.FromFile(path!);
    }

    private static string? FindUpwards(string fileName)
    {
        var directory = new DirectoryInfo(AppContext.BaseDirectory);
        while (directory is not null)
        {
            var candidate = Path.Combine(directory.FullName, fileName);
            if (File.Exists(candidate))
                return candidate;
            directory = directory.Parent;
        }
        return null;
    }
}
