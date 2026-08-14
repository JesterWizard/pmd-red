using System.Text;

namespace RescueEditor.Core;

public static class ScriptIndexer
{
    private static readonly HashSet<byte> MessageOps =
    [
        0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39,
    ];

    public static (IReadOnlyList<AssetDescriptor> Dialogue, IReadOnlyList<AssetDescriptor> Scripts)
        Index(RomImage rom, Charmap charmap)
    {
        var dialogueRaw = new List<(int MessageOffset, int CommandOffset, byte Op, int RawLength, DecodeStats Stats)>();
        var scripts = new List<AssetDescriptor>();
        var seenStrings = new HashSet<int>();
        var seenScripts = new HashSet<int>();

        // ScriptCommand structs are 16 bytes; scanning every 4 bytes mostly hits ARM code.
        for (var commandOffset = 0; commandOffset + 16 <= rom.Length; commandOffset += 16)
        {
            var op = rom.ReadByte(commandOffset);
            if (!MessageOps.Contains(op))
                continue;

            var messageOffset = rom.ReadPointerOffset(commandOffset + 12);
            if (messageOffset < 0x10000)
                continue;

            var rawLength = StringByteLength(rom, messageOffset, 768);
            if (rawLength is < 4 or > 700)
                continue;

            var stats = charmap.Analyze(rom.Slice(messageOffset, rawLength));
            if (!LooksLikeDialogue(stats))
                continue;

            if (seenStrings.Add(messageOffset))
                dialogueRaw.Add((messageOffset, commandOffset, op, rawLength, stats));

            if (seenScripts.Add(commandOffset))
            {
                var commandCount = ScriptDisassembler.EstimateLength(rom, commandOffset);
                scripts.Add(new AssetDescriptor
                {
                    Id = $"script:{commandOffset:X}",
                    Name = $"S{scripts.Count + 1:D4} @ 0x{commandOffset:X}",
                    Category = AssetCategory.Scripts,
                    Kind = AssetKind.Script,
                    Offset = commandOffset,
                    Size = commandCount * 16,
                    Format = "ScriptCommand (16 bytes)",
                    Description = stats.Text.Replace('\n', ' '),
                    Metadata = new Dictionary<string, string>
                    {
                        ["firstMessage"] = $"0x{messageOffset:X}",
                    },
                });
            }
        }

        var dialogue = dialogueRaw
            .OrderBy(entry => entry.MessageOffset)
            .Select((entry, index) =>
            {
                var id = index + 1;
                return new AssetDescriptor
                {
                    Id = $"dialogue:{entry.MessageOffset:X}",
                    Name = $"D{id:D4}",
                    Category = AssetCategory.Dialogue,
                    Kind = AssetKind.Dialogue,
                    Offset = entry.MessageOffset,
                    Size = Math.Max(1, entry.RawLength),
                    Format = "PMD charmap",
                    Description = entry.Stats.Text,
                    Metadata = new Dictionary<string, string>
                    {
                        ["commandOffset"] = $"0x{entry.CommandOffset:X}",
                        ["opcode"] = $"0x{entry.Op:X2}",
                        ["romOffset"] = $"0x{entry.MessageOffset:X}",
                        ["dialogueId"] = id.ToString(),
                    },
                };
            })
            .ToList();

        return (dialogue, scripts);
    }

    public static IReadOnlyList<AssetDescriptor> FromDialogueTable(
        IReadOnlyDictionary<int, DialogueString> dialogue)
    {
        return dialogue.Values
            .OrderBy(entry => entry.Offset)
            .Select((entry, index) =>
            {
                var id = index + 1;
                var text = entry.Text ?? "";
                return new AssetDescriptor
                {
                    Id = $"dialogue:{entry.Offset:X}",
                    Name = $"D{id:D4}",
                    Category = AssetCategory.Dialogue,
                    Kind = AssetKind.Dialogue,
                    Offset = entry.Offset,
                    Size = Math.Max(1, entry.Size),
                    Format = "PMD charmap",
                    Description = text,
                    Metadata = new Dictionary<string, string>
                    {
                        ["romOffset"] = $"0x{entry.Offset:X}",
                        ["dialogueId"] = id.ToString(),
                    },
                };
            })
            .ToList();
    }

    public static string FormatCatalogId(
        IReadOnlyDictionary<int, DialogueString> table,
        DialogueString dialogue)
    {
        var index = 0;
        foreach (var entry in table.Values.OrderBy(item => item.Offset))
        {
            index++;
            if (ReferenceEquals(entry, dialogue) || entry.Offset == dialogue.Offset)
                return $"D{index:D4}";
        }

        return $"D{Math.Max(1, table.Count):D4}";
    }

    private static int StringByteLength(RomImage rom, int offset, int maximum)
    {
        var length = 0;
        while (length < maximum && rom.IsRangeValid(offset + length, 1) &&
               rom.ReadByte(offset + length) != 0)
            length++;
        return length;
    }

    private static bool LooksLikeDialogue(DecodeStats stats)
    {
        if (stats.ByteLength < 4 || stats.Letters < 6)
            return false;
        if (stats.UnknownEscapes > 0 && stats.UnknownEscapes * 8 > stats.Letters)
            return false;
        if (stats.UnknownEscapes > 3)
            return false;

        var text = stats.Text.TrimStart();
        if (text.Length == 0)
            return false;
        if (text.StartsWith("\\x", StringComparison.Ordinal))
            return false;

        // Prefer strings that look like English / tagged dialogue.
        var useful = text.Count(character =>
            char.IsLetter(character) || character is ' ' or '.' or '!' or '?' or '\'' or '-' or '\n' or '{' or '}');
        return useful >= Math.Min(text.Length, 8) && useful * 2 >= text.Length;
    }
}

public static class ScriptDisassembler
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
        [0xD9] = "CHOICE",
        [0xDB] = "WAIT",
        [0xDC] = "WAIT_RANDOM",
        [0xDD] = "STOP_ANIMATION_ON_CURRENT_FRAME",
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

    private static readonly HashSet<byte> PointerTextOps =
    [
        0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39,
        0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0xD5, 0xD9, 0xF6,
    ];

    public static int EstimateLength(RomImage rom, int offset, int maximumCommands = 512)
    {
        var count = 0;
        while (count < maximumCommands && rom.IsRangeValid(offset + count * 16, 16))
        {
            var op = rom.ReadByte(offset + count * 16);
            count++;
            if (op is 0xEF or 0xF0 or 0xF1)
                break;
        }
        return Math.Max(1, count);
    }

    public static string Disassemble(RomImage rom, int offset, Charmap charmap,
        int maximumCommands = 512)
    {
        var output = new StringBuilder();
        var commandCount = EstimateLength(rom, offset, maximumCommands);
        output.AppendLine($"Script at ROM offset 0x{offset:X}");
        output.AppendLine($"Commands: {commandCount}");
        output.AppendLine();

        for (var command = 0; command < commandCount; command++)
        {
            var commandOffset = offset + command * 16;
            var op = rom.ReadByte(commandOffset);
            var name = Names.TryGetValue(op, out var knownName)
                ? knownName
                : $"CMD_{op:X2}";
            var argByte = rom.ReadByte(commandOffset + 1);
            var argShort = rom.ReadInt16(commandOffset + 2);
            var arg1 = rom.ReadInt32(commandOffset + 4);
            var arg2 = rom.ReadInt32(commandOffset + 8);
            var pointer = rom.ReadUInt32(commandOffset + 12);
            output.Append($"0x{commandOffset:X8}: {name,-34} ");
            output.Append($"byte={argByte:X2} short={argShort} arg1={arg1} arg2={arg2}");

            if (rom.TryPointerToOffset(pointer, out var pointerOffset))
            {
                output.Append($" ptr=0x{pointerOffset:X8}");
                if (PointerTextOps.Contains(op))
                {
                    var text = charmap.DecodeRomString(rom, pointerOffset, 768)
                        .Replace("\r", "\\r")
                        .Replace("\n", "\\n");
                    output.Append($" text=\"{text}\"");
                }
            }
            else if (pointer != 0)
            {
                output.Append($" ptr=0x{pointer:X8}");
            }

            output.AppendLine();
            if (op is 0xEF or 0xF0 or 0xF1)
                break;
        }

        return output.ToString();
    }
}
