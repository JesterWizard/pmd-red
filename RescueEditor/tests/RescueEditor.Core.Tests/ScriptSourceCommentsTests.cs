using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class ScriptSourceCommentsTests
{
    [Fact]
    public void ToggleCommentsOutSelectedCommands()
    {
        var text = """
            @station g0/s0 EVENT_TEST
            MOVE_TO_COORDS(2, 46, 92)
            WAIT(8)
            RET()
            """;

        var toggled = ScriptSourceComments.ToggleLines(text, startLine: 1, endLine: 1);

        Assert.Contains("# MOVE_TO_COORDS(2, 46, 92)", toggled);
        Assert.Contains("WAIT(8)", toggled);
        Assert.DoesNotContain("\nMOVE_TO_COORDS", toggled);
    }

    [Fact]
    public void ToggleUncommentsWhenEverySelectedLineIsCommented()
    {
        var text = """
            @station g0/s0 EVENT_TEST
            # MOVE_TO_COORDS(2, 46, 92)
            // WAIT(8)
            RET()
            """;

        var toggled = ScriptSourceComments.ToggleLines(text, startLine: 1, endLine: 2);

        Assert.Contains("\nMOVE_TO_COORDS(2, 46, 92)", toggled);
        Assert.Contains("\nWAIT(8)", toggled);
        Assert.DoesNotContain("# MOVE_TO_COORDS", toggled);
        Assert.DoesNotContain("// WAIT", toggled);
    }
}
