using System.Text;
using Xunit;
using RescueEditor.Core;

namespace RescueEditor.Core.Tests;

public sealed class DialogueEncodedBudgetTests
{
    [Theory]
    [InlineData("Hi", 2)]
    [InlineData("{COLOR RED}Hi{RESET}", 2)]
    [InlineData("A{WAIT_PRESS}B{EXTRA_MSG}C", 3)]
    [InlineData("Soon, you must return to\n your own world.", 41)]
    public void CountBytesIgnoresControlTags(string text, int expected) =>
        Assert.Equal(expected, DialogueEncodedBudget.CountBytes(text));

    [Fact]
    public void AddingOnlyControlTagsDoesNotIncreaseBudget()
    {
        var plain = DialogueEncodedBudget.CountBytes("Fire");
        var tagged = DialogueEncodedBudget.CountBytes("{COLOR RED}Fire{RESET}");
        Assert.Equal(plain, tagged);
    }

    [Fact]
    public void EvaluateWarnsWhenTextExceedsSlot()
    {
        var ok = DialogueEncodedBudget.Evaluate("Hi", maxBytes: 8);
        Assert.True(ok.Fits);
        Assert.False(ok.Warn);
        Assert.Contains("2 / 8", ok.Message, StringComparison.Ordinal);

        var over = DialogueEncodedBudget.Evaluate("Hello there", maxBytes: 4);
        Assert.False(over.Fits);
        Assert.True(over.Warn);
        Assert.Contains("relocates", over.Message, StringComparison.OrdinalIgnoreCase);
        Assert.Contains("4", over.Message, StringComparison.Ordinal);
    }

    [Fact]
    public void NullOrEmptyIsZero()
    {
        Assert.Equal(0, DialogueEncodedBudget.CountBytes(null));
        Assert.Equal(0, DialogueEncodedBudget.CountBytes(""));
    }
}
