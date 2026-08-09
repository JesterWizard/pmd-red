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
        0x2E => // PORTRAIT
        [
            new("Speaker", ScriptArgField.ArgShort),
            new("Emotion", ScriptArgField.Arg1),
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
        0x86 or 0x98 => // CAMERA_PAN / CAMERA_INIT_PAN
        [
            new("X", ScriptArgField.Arg1),
            new("Y", ScriptArgField.Arg2),
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
        0xF4 => // LABEL
        [
            new("Label", ScriptArgField.Arg1),
        ],
        0xE7 or 0xE6 => // JUMP_LABEL / CALL_LABEL
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
