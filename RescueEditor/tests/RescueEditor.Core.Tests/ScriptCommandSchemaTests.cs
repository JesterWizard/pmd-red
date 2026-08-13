using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class ScriptCommandSchemaTests
{
    [Theory]
    [InlineData(0x0B, "Weather", ScriptArgField.Arg1)] // SELECT_WEATHER
    [InlineData(0x22, "Duration", ScriptArgField.Arg1)] // FADE_IN
    [InlineData(0x23, "Duration", ScriptArgField.Arg1)] // FADE_OUT
    [InlineData(0x1B, "Function", ScriptArgField.Arg1)] // EXECUTE_FUNCTION
    [InlineData(0x1C, "Subroutine", ScriptArgField.Arg1)] // EXECUTE_SUBROUTINE
    [InlineData(0x2F, "X", ScriptArgField.Arg1)] // PORTRAIT_POS
    [InlineData(0x54, "Animation", ScriptArgField.Arg1)] // SELECT_ANIMATION
    [InlineData(0x5B, "Waypoint", ScriptArgField.Arg1)] // WARP_WAYPOINT
    [InlineData(0xE8, "Script", ScriptArgField.Arg1)] // CALL_SCRIPT
    [InlineData(0xE9, "Script", ScriptArgField.Arg1)] // JUMP_SCRIPT
    [InlineData(0xEA, "Station", ScriptArgField.Arg1)] // CALL_STATION
    [InlineData(0xEB, "Station", ScriptArgField.Arg1)] // JUMP_STATION
    public void KnownOpcodesExposePrimarySemanticField(byte op, string label, ScriptArgField field)
    {
        var fields = ScriptCommandSchema.GetSemanticFields(op);
        Assert.NotNull(fields);
        Assert.Contains(fields!, f => f.Label == label && f.Field == field);
    }

    [Theory]
    [InlineData(0x32)] // MSG_INSTANT
    [InlineData(0x33)] // MSG_QUIET
    [InlineData(0x34)] // MSG_NPC
    [InlineData(0x35)] // MSG_LETTER
    [InlineData(0x36)] // MSG_OVERHEARD
    [InlineData(0x37)] // MSG_ON_BG
    [InlineData(0x38)] // MSG_ON_BG2
    [InlineData(0x39)] // MSG_ON_BG_AUTO
    [InlineData(0xCF)] // MSG_VAR
    [InlineData(0xD9)] // CHOICE
    public void MessageOpcodesExposeTextPointer(byte op)
    {
        var fields = ScriptCommandSchema.GetSemanticFields(op);
        Assert.NotNull(fields);
        Assert.Contains(fields!, f => f.Label == "Text" && f.Field == ScriptArgField.ArgPtr && f.Format == "hex");
    }

    [Theory]
    [InlineData(0x6A)] // WALK_RELATIVE
    [InlineData(0x6B)] // WALK_GRID
    [InlineData(0x7A)] // WALK_DIRECT
    public void WalkOpcodesExposeDeltaOrTarget(byte op)
    {
        var fields = ScriptCommandSchema.GetSemanticFields(op);
        Assert.NotNull(fields);
        Assert.Contains(fields!, f => f.Field == ScriptArgField.Arg1);
        Assert.Contains(fields!, f => f.Field == ScriptArgField.Arg2);
    }

    [Theory]
    [InlineData(0xB3)] // JUMPIF_EQUAL
    [InlineData(0xB4)] // JUMPIF
    [InlineData(0xB8)] // JUMPIF_SCENE_LT
    [InlineData(0xB9)] // JUMPIF_SCENE_EQ
    [InlineData(0xBA)] // JUMPIF_SCENE_GT
    public void BranchOpcodesExposeTargetLabel(byte op)
    {
        var fields = ScriptCommandSchema.GetSemanticFields(op);
        Assert.NotNull(fields);
        Assert.Contains(fields!, f => f.Label == "Label" && f.Field == ScriptArgField.Arg1);
    }

    [Fact]
    public void ArgumentSummaryUsesSemanticLabels()
    {
        var command = new ScriptCommandData
        {
            Op = 0x22,
            Arg1 = 30,
        };
        var summary = ScriptCommandSchema.ArgumentSummary(command);
        Assert.Contains("Duration 30", summary);
    }

    [Fact]
    public void PortraitPosExposesXAndY()
    {
        var fields = ScriptCommandSchema.GetSemanticFields(0x2F);
        Assert.NotNull(fields);
        Assert.Equal(2, fields!.Count);
        Assert.Equal("X", fields[0].Label);
        Assert.Equal("Y", fields[1].Label);
        Assert.Equal(ScriptArgField.Arg1, fields[0].Field);
        Assert.Equal(ScriptArgField.Arg2, fields[1].Field);
    }

    [Fact]
    public void ExistingSelectMapSchemaRemains()
    {
        var fields = ScriptCommandSchema.GetSemanticFields(0x08);
        Assert.NotNull(fields);
        Assert.Contains(fields!, f => f.Label == "Map");
        Assert.Contains(fields!, f => f.Label == "Flags" && f.Format == "hex");
    }

    [Theory]
    [InlineData(0x02, "NEXT_DUNGEON")]
    [InlineData(0x2D, "UPDATE_NAME")]
    [InlineData(0x4C, "FANFARE_PLAY2")]
    [InlineData(0x4F, "CLEAR_HITBOX")]
    [InlineData(0x51, "SET_POSITION_BOUNDS")]
    [InlineData(0x52, "SET_OBJ_FLAGS")]
    [InlineData(0x53, "CLEAR_OBJ_FLAGS")]
    [InlineData(0x56, "EMOTION_EFFECT")]
    [InlineData(0x60, "SET_HEIGHT")]
    [InlineData(0x62, "MOVE_RELATIVE")]
    [InlineData(0x68, "HEIGHT_TO_2")]
    [InlineData(0x70, "HEIGHT_TO")]
    [InlineData(0x84, "WALK_RELATIVE_DIST")]
    [InlineData(0x89, "WALK_DIRECTION")]
    [InlineData(0x92, "ROTATE_RELATIVE")]
    [InlineData(0x93, "ROTATE_TO_LIVES")]
    [InlineData(0x94, "ROTATE_TO_LIVES2")]
    [InlineData(0x95, "ROTATE_TO_WAYPOINT")]
    [InlineData(0x9A, "CAMERA_FOCUS_PLAYER")]
    [InlineData(0x9B, "CAMERA_FOLLOW")]
    [InlineData(0xDE, "WAIT_EFFECT")]
    [InlineData(0xDF, "WAIT_FADE")]
    [InlineData(0xE0, "WAIT_BGM")]
    [InlineData(0xE5, "AWAIT_CUE_COND")]
    public void NewlyNamedOpcodesResolveByName(byte op, string name)
    {
        Assert.Equal(name, ScriptOpcodeNames.GetName(op));
        Assert.True(ScriptOpcodeNames.TryGetOp(name, out var resolved));
        Assert.Equal(op, resolved);
    }

    [Theory]
    [InlineData(0x52, "Flags", ScriptArgField.Arg1)]
    [InlineData(0x53, "Flags", ScriptArgField.Arg1)]
    [InlineData(0x56, "Effect", ScriptArgField.Arg1)]
    [InlineData(0x60, "Height", ScriptArgField.Arg1)]
    [InlineData(0x70, "Height", ScriptArgField.Arg1)]
    [InlineData(0x2D, "Kind", ScriptArgField.ArgByte)]
    [InlineData(0x51, "Link", ScriptArgField.ArgShort)]
    public void NewlyNamedOpcodesExposeSemanticFields(byte op, string label, ScriptArgField field)
    {
        var fields = ScriptCommandSchema.GetSemanticFields(op);
        Assert.NotNull(fields);
        Assert.Contains(fields!, f => f.Label == label && f.Field == field);
    }
}
