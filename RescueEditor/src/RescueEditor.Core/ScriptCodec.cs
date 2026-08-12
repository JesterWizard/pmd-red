using System.Text;

namespace RescueEditor.Core;

public static class ScriptOpcodeNames
{
    private static readonly Dictionary<byte, string> Names = new()
    {
        [0x08] = "SELECT_MAP",
        [0x09] = "SELECT_GROUND",
        [0x0A] = "SELECT_DUNGEON",
        [0x0B] = "SELECT_WEATHER",
        [0x0C] = "SELECT_ENTITIES",
        [0x0D] = "SELECT_LIVES",
        [0x0E] = "SELECT_OBJECTS",
        [0x0F] = "SELECT_EFFECTS",
        [0x10] = "SELECT_EVENTS",
        [0x19] = "SPAWN_OBJECT",
        [0x1A] = "SPAWN_EFFECT",
        [0x1B] = "EXECUTE_FUNCTION",
        [0x1C] = "EXECUTE_SUBROUTINE",
        [0x1D] = "EXECUTE_STATION",
        [0x1E] = "EXECUTE_SUBSTATION",
        [0x22] = "FADE_IN",
        [0x23] = "FADE_OUT",
        [0x24] = "FADE_BRIGHTNESS",
        [0x25] = "FADE2_IN",
        [0x26] = "FADE2_OUT",
        [0x27] = "FLASH_FROM",
        [0x28] = "FLASH_TO",
        [0x2E] = "PORTRAIT",
        [0x2F] = "PORTRAIT_POS",
        [0x30] = "TEXTBOX_CLEAR",
        [0x31] = "TEXTBOX_CLEAR2",
        [0x32] = "MSG_INSTANT",
        [0x33] = "MSG_QUIET",
        [0x34] = "MSG_NPC",
        [0x35] = "MSG_LETTER",
        [0x36] = "MSG_OVERHEARD",
        [0x37] = "MSG_ON_BG",
        [0x38] = "MSG_ON_BG2",
        [0x39] = "MSG_ON_BG_AUTO",
        [0x44] = "BGM_SWITCH",
        [0x45] = "BGM_FADEIN",
        [0x46] = "BGM_QUEUE",
        [0x47] = "BGM_STOP",
        [0x48] = "BGM_FADEOUT",
        [0x49] = "FANFARE_PLAY",
        [0x54] = "SELECT_ANIMATION",
        [0x5B] = "WARP_WAYPOINT",
        [0x6A] = "WALK_RELATIVE",
        [0x6B] = "WALK_GRID",
        [0x7A] = "WALK_DIRECT",
        [0x86] = "CAMERA_PAN",
        [0x8B] = "SET_DIR_WAIT",
        [0x91] = "ROTATE_TO",
        [0x98] = "CAMERA_INIT_PAN",
        [0x99] = "CAMERA_END_PAN",
        [0xA4] = "RESET_ARRAY",
        [0xA5] = "CLEAR_ARRAY",
        [0xA6] = "UPDATE_VARINT",
        [0xA7] = "UPDATE_VARVAR",
        [0xA8] = "SET_ARRAYVAL",
        [0xA9] = "SCENARIO_CALC",
        [0xAA] = "SCENARIO_ADVANCE",
        [0xAB] = "SET_DUNGEON_RES",
        [0xAC] = "SET_PLAYER_KIND",
        [0xAD] = "UNLOCK_FRIEND_AREA",
        [0xB3] = "JUMPIF_EQUAL",
        [0xB4] = "JUMPIF",
        [0xB5] = "JUMPIF_2",
        [0xB6] = "JUMPIF_ARRAY",
        [0xB7] = "JUMPIF_SUM",
        [0xB8] = "JUMPIF_SCENE_LT",
        [0xB9] = "JUMPIF_SCENE_EQ",
        [0xBA] = "JUMPIF_SCENE_GT",
        [0xBB] = "JUMPIF_SCENARIOCHECK",
        [0xBC] = "JUMPIF_CUTSCENE_FLAG",
        [0xBF] = "JUMPIF_HASITEM",
        [0xCF] = "MSG_VAR",
        [0xD0] = "VARIANT",
        [0xD1] = "VARIANT_DEFAULT",
        [0xD2] = "ASK_DEBUG",
        [0xD3] = "ASK1",
        [0xD4] = "ASK2",
        [0xD5] = "ASK3",
        [0xD6] = "ASK1_VAR",
        [0xD7] = "ASK2_VAR",
        [0xD8] = "ASK3_VAR",
        [0xD9] = "CHOICE",
        [0xDB] = "WAIT",
        [0xDC] = "WAIT_RANDOM",
        [0xDD] = "STOP_ANIMATION_ON_CURRENT_FRAME",
        [0xE3] = "AWAIT_CUE",
        [0xE4] = "ALERT_CUE",
        [0xE6] = "CALL_LABEL",
        [0xE7] = "JUMP_LABEL",
        [0xE8] = "CALL_SCRIPT",
        [0xE9] = "JUMP_SCRIPT",
        [0xEA] = "CALL_STATION",
        [0xEB] = "JUMP_STATION",
        [0xEC] = "EXECUTE_MAP_VAR",
        [0xED] = "RESET_CALLER",
        [0xEE] = "RET_DIRECT",
        [0xEF] = "RET",
        [0xF0] = "HALT",
        [0xF1] = "END_DELETE",
        [0xF4] = "LABEL",
        [0xF6] = "DEBUGINFO",
    };

    public static readonly HashSet<byte> TextPointerOps =
    [
        0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39,
        0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0xD5, 0xD6, 0xD7, 0xD8, 0xD9, 0xF6,
    ];

    public static readonly HashSet<byte> TerminatorOps = [0xE9, 0xEE, 0xEF, 0xF0, 0xF1];

    public static string GetName(byte op) =>
        Names.TryGetValue(op, out var name) ? name : $"CMD_{op:X2}";

    public static bool TryGetOp(string name, out byte op)
    {
        op = 0;
        if (string.IsNullOrWhiteSpace(name))
            return false;
        name = name.Trim();
        if (Aliases.TryGetValue(name, out op))
            return true;
        if (OpsByName.TryGetValue(name, out op))
            return true;
        if (name.StartsWith("CMD_", StringComparison.OrdinalIgnoreCase) &&
            name.Length is >= 5 and <= 6 &&
            byte.TryParse(name.AsSpan(4), System.Globalization.NumberStyles.HexNumber,
                System.Globalization.CultureInfo.InvariantCulture, out op))
            return true;
        return false;
    }

    private static readonly Dictionary<string, byte> Aliases = new(StringComparer.OrdinalIgnoreCase)
    {
        ["DIALOGUE"] = 0x34,
        ["MSG_NPC"] = 0x34,
        ["MOVE_TO_COORDS"] = 0x6A,
    };

    private static readonly Dictionary<string, byte> OpsByName =
        Names.ToDictionary(pair => pair.Value, pair => pair.Key, StringComparer.OrdinalIgnoreCase);
}

public static class ScriptCodec
{
    public static List<ScriptCommandData> ReadScript(RomImage rom, int offset, int maximum = 2048)
    {
        var commands = new List<ScriptCommandData>();
        for (var i = 0; i < maximum && rom.IsRangeValid(offset + i * ScriptCommandData.Size, ScriptCommandData.Size); i++)
        {
            var command = ScriptCommandData.Read(rom, offset + i * ScriptCommandData.Size);
            commands.Add(command);
            if (ScriptOpcodeNames.TerminatorOps.Contains(command.Op))
                break;
        }
        return commands;
    }

    public static byte[] Encode(IReadOnlyList<ScriptCommandData> commands)
    {
        var bytes = new byte[commands.Count * ScriptCommandData.Size];
        for (var i = 0; i < commands.Count; i++)
            commands[i].Write(bytes.AsSpan(i * ScriptCommandData.Size));
        return bytes;
    }

    public static string Format(ScriptCommandData command, RomImage? rom = null, Charmap? charmap = null)
    {
        var builder = new StringBuilder();
        var name = ScriptOpcodeNames.GetName(command.Op);
        builder.Append($"{name,-34} byte={command.ArgByte:X2} short={command.ArgShort} arg1={command.Arg1} arg2={command.Arg2}");
        if (command.ArgPtr != 0)
        {
            builder.Append($" ptr=0x{command.ArgPtr:X8}");
            if (rom is not null &&
                rom.TryPointerToOffset(command.ArgPtr, out var pointerOffset) &&
                ScriptOpcodeNames.TextPointerOps.Contains(command.Op) &&
                charmap is not null)
            {
                var text = charmap.DecodeRomString(rom, pointerOffset, 768)
                    .Replace("\r", "\\r")
                    .Replace("\n", "\\n");
                builder.Append($" text=\"{text}\"");
            }
        }
        return builder.ToString();
    }

    public static string Disassemble(IReadOnlyList<ScriptCommandData> commands, RomImage? rom = null, Charmap? charmap = null)
    {
        var builder = new StringBuilder();
        foreach (var command in commands)
        {
            if (command.RomOffset >= 0)
                builder.Append($"0x{command.RomOffset:X8}: ");
            builder.AppendLine(Format(command, rom, charmap));
        }
        return builder.ToString();
    }
}
