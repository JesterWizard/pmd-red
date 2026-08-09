namespace RescueEditor.Core;

public enum ScriptArgField
{
    Op,
    ArgByte,
    ArgShort,
    Arg1,
    Arg2,
    ArgPtr,
}

public sealed record ScriptArgBinding(
    string Label,
    ScriptArgField Field,
    string Format = "dec");

/// <summary>Semantic inspector metadata for known opcodes; null means raw-only.</summary>
public static class ScriptCommandSchema
{
    public static IReadOnlyList<ScriptArgBinding>? GetSemanticFields(byte op) => op switch
    {
        0x08 => // SELECT_MAP
        [
            new("Map", ScriptArgField.Arg1),
            new("Flags", ScriptArgField.ArgByte, "hex"),
        ],
        0x09 => // SELECT_GROUND
        [
            new("Ground", ScriptArgField.Arg1),
        ],
        0x0A => // SELECT_DUNGEON
        [
            new("Dungeon", ScriptArgField.Arg1),
        ],
        0x0B => // SELECT_WEATHER
        [
            new("Weather", ScriptArgField.Arg1),
        ],
        0x0C => // SELECT_ENTITIES
        [
            new("Group", ScriptArgField.ArgShort),
            new("Sector", ScriptArgField.ArgByte),
        ],
        0x0D or 0x0E or 0x0F or 0x10 =>
        [
            new("Group", ScriptArgField.ArgShort),
            new("Sector", ScriptArgField.ArgByte),
        ],
        0x1B => // EXECUTE_FUNCTION
        [
            new("Function", ScriptArgField.Arg1),
        ],
        0x1C => // EXECUTE_SUBROUTINE
        [
            new("Subroutine", ScriptArgField.Arg1),
        ],
        0x1D or 0x1E => // EXECUTE_STATION / EXECUTE_SUBSTATION
        [
            new("Station", ScriptArgField.Arg1),
            new("Flags", ScriptArgField.ArgByte, "hex"),
        ],
        0x22 or 0x23 => // FADE_IN / FADE_OUT
        [
            new("Duration", ScriptArgField.Arg1),
        ],
        0x2E => // PORTRAIT
        [
            new("Speaker", ScriptArgField.ArgShort),
            new("Emotion", ScriptArgField.Arg1),
        ],
        0x2F => // PORTRAIT_POS
        [
            new("X", ScriptArgField.Arg1),
            new("Y", ScriptArgField.Arg2),
        ],
        0x32 or 0x33 or 0x34 or 0x35 or 0x36 or 0x37 or 0x38 or 0x39 or 0xCF or 0xD9 =>
        [
            new("Text", ScriptArgField.ArgPtr, "hex"),
        ],
        0x46 => // BGM_QUEUE
        [
            new("Music", ScriptArgField.Arg1),
            new("Fade", ScriptArgField.ArgByte),
        ],
        0x47 => // BGM_STOP
        [
            new("Fade", ScriptArgField.ArgByte),
        ],
        0x49 => // FANFARE_PLAY
        [
            new("Fanfare", ScriptArgField.Arg1),
        ],
        0x54 => // SELECT_ANIMATION
        [
            new("Animation", ScriptArgField.Arg1),
        ],
        0x5B => // WARP_WAYPOINT
        [
            new("Waypoint", ScriptArgField.Arg1),
        ],
        0x6A or 0x6B or 0x7A => // WALK_RELATIVE / WALK_GRID / WALK_DIRECT
        [
            new("X", ScriptArgField.Arg1),
            new("Y", ScriptArgField.Arg2),
            new("Flags", ScriptArgField.ArgByte, "hex"),
        ],
        0x86 or 0x98 => // CAMERA_PAN / CAMERA_INIT_PAN
        [
            new("X", ScriptArgField.Arg1),
            new("Y", ScriptArgField.Arg2),
        ],
        0xB3 or 0xB4 or 0xB5 or 0xB6 or 0xB7 or 0xB8 or 0xB9 or 0xBA or 0xBB or 0xBC or 0xBF =>
        [
            new("Label", ScriptArgField.Arg1),
            new("Value", ScriptArgField.Arg2),
            new("Flags", ScriptArgField.ArgByte, "hex"),
        ],
        0xDB => // WAIT
        [
            new("Frames", ScriptArgField.Arg1),
        ],
        0xDC => // WAIT_RANDOM
        [
            new("Min", ScriptArgField.Arg1),
            new("Max", ScriptArgField.Arg2),
        ],
        0xE6 or 0xE7 => // CALL_LABEL / JUMP_LABEL
        [
            new("Label", ScriptArgField.Arg1),
        ],
        0xE8 or 0xE9 => // CALL_SCRIPT / JUMP_SCRIPT
        [
            new("Script", ScriptArgField.Arg1),
        ],
        0xEA or 0xEB => // CALL_STATION / JUMP_STATION
        [
            new("Station", ScriptArgField.Arg1),
        ],
        0xF4 => // LABEL
        [
            new("Label", ScriptArgField.Arg1),
        ],
        _ => null,
    };

    public static string CommandName(ScriptCommandData command) =>
        ScriptOpcodeNames.GetName(command.Op);

    public static string ArgumentSummary(ScriptCommandData command)
    {
        var fields = GetSemanticFields(command.Op);
        if (fields is null || fields.Count == 0)
        {
            if (command.ArgPtr != 0)
                return $"ptr 0x{command.ArgPtr:X}";
            if (command.Arg1 != 0 || command.Arg2 != 0)
                return $"a1={command.Arg1} a2={command.Arg2}";
            if (command.ArgShort != 0)
                return $"short={command.ArgShort}";
            if (command.ArgByte != 0)
                return $"byte={command.ArgByte:X2}";
            return string.Empty;
        }

        return string.Join("  ", fields.Select(field =>
        {
            var value = Read(command, field.Field);
            return field.Format == "hex"
                ? $"{field.Label} 0x{value:X}"
                : $"{field.Label} {value}";
        }));
    }

    public static int Read(ScriptCommandData command, ScriptArgField field) => field switch
    {
        ScriptArgField.Op => command.Op,
        ScriptArgField.ArgByte => command.ArgByte,
        ScriptArgField.ArgShort => command.ArgShort,
        ScriptArgField.Arg1 => command.Arg1,
        ScriptArgField.Arg2 => command.Arg2,
        ScriptArgField.ArgPtr => unchecked((int)command.ArgPtr),
        _ => 0,
    };

    public static void Write(ScriptCommandData command, ScriptArgField field, int value)
    {
        switch (field)
        {
            case ScriptArgField.Op:
                command.Op = (byte)value;
                break;
            case ScriptArgField.ArgByte:
                command.ArgByte = (byte)value;
                break;
            case ScriptArgField.ArgShort:
                command.ArgShort = (short)value;
                break;
            case ScriptArgField.Arg1:
                command.Arg1 = value;
                break;
            case ScriptArgField.Arg2:
                command.Arg2 = value;
                break;
            case ScriptArgField.ArgPtr:
                command.ArgPtr = unchecked((uint)value);
                break;
        }
    }
}
