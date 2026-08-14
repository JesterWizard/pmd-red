using System.Globalization;
using System.Text;
using System.Text.RegularExpressions;

namespace RescueEditor.Core;

public sealed record ScriptSourceError(int Line, string Message);

public sealed class ScriptSourceCommand
{
    public required ScriptCommandData Command { get; init; }
    public string? DialogueText { get; init; }
}

public sealed class ScriptSourceSection
{
    public string Kind { get; set; } = "commands";
    public int Group { get; set; } = -1;
    public int Sector { get; set; } = -1;
    public int Index { get; set; }
    /// <summary>Dialogue script slot for live/object/effect (dlg0..dlg3).</summary>
    public int ScriptSlot { get; set; }
    public string Name { get; set; } = string.Empty;
    public List<ScriptSourceCommand> Commands { get; } = new();
}

public sealed class ScriptSourceParseResult
{
    public bool Ok => Errors.Count == 0;
    public List<ScriptSourceSection> Sections { get; } = new();
    public List<ScriptSourceError> Errors { get; } = new();
}

public static class ScriptSource
{
    private enum Slot
    {
        Byte,
        Short,
        Arg1,
        Arg2,
        Ptr,
        String,
    }

    private sealed record MacroLayout(
        string Name,
        Slot[] Slots,
        byte DefaultByte = 0,
        short DefaultShort = 0,
        int DefaultArg1 = 0,
        int DefaultArg2 = 0,
        uint DefaultPtr = 0,
        bool IgnorePtr = false);

    private static readonly Dictionary<byte, MacroLayout> Layouts = new()
    {
        [0x08] = new("SELECT_MAP", [Slot.Arg1]),
        [0x09] = new("SELECT_GROUND", [Slot.Arg1]),
        [0x0A] = new("SELECT_DUNGEON", [Slot.Arg2, Slot.Arg1, Slot.Short, Slot.Byte]),
        [0x0B] = new("SELECT_WEATHER", [Slot.Arg1]),
        [0x0C] = new("SELECT_ENTITIES", [Slot.Short, Slot.Byte]),
        [0x0D] = new("SELECT_LIVES", [Slot.Short, Slot.Byte]),
        [0x0E] = new("SELECT_OBJECTS", [Slot.Short, Slot.Byte]),
        [0x0F] = new("SELECT_EFFECTS", [Slot.Short, Slot.Byte]),
        [0x10] = new("SELECT_EVENTS", [Slot.Short, Slot.Byte]),
        [0x19] = new("SPAWN_OBJECT", [Slot.Arg2, Slot.Arg1, Slot.Short, Slot.Byte]),
        [0x1A] = new("SPAWN_EFFECT", [Slot.Arg2, Slot.Arg1, Slot.Short, Slot.Byte]),
        [0x1B] = new("EXECUTE_FUNCTION", [Slot.Short]),
        [0x1C] = new("EXECUTE_SUBROUTINE", [Slot.Short]),
        [0x1D] = new("EXECUTE_STATION", [Slot.Arg1, Slot.Short, Slot.Byte]),
        [0x1E] = new("EXECUTE_SUBSTATION", [Slot.Arg1, Slot.Short, Slot.Byte]),
        [0x02] = new("NEXT_DUNGEON", [Slot.Short, Slot.Arg1]),
        [0x22] = new("FADE_IN", [Slot.Byte, Slot.Short]),
        [0x23] = new("FADE_OUT", [Slot.Byte, Slot.Short]),
        [0x27] = new("FLASH_FROM", [Slot.Byte, Slot.Short, Slot.Arg1, Slot.Arg2]),
        [0x28] = new("FLASH_TO", [Slot.Byte, Slot.Short, Slot.Arg1, Slot.Arg2]),
        [0x2B] = new("TEXTBOX_AUTO_PRESS", [Slot.Arg1, Slot.Arg2]),
        [0x2D] = new("UPDATE_NAME", [Slot.Byte, Slot.Short, Slot.Arg1]),
        [0x2E] = new("PORTRAIT", [Slot.Byte, Slot.Short, Slot.Arg1]),
        [0x2F] = new("PORTRAIT_POS", [Slot.Short, Slot.Arg1, Slot.Arg2]),
        [0x30] = new("TEXTBOX_CLEAR", []),
        [0x31] = new("TEXTBOX_CLEAR2", []),
        [0x32] = new("MSG_INSTANT", [Slot.String], DefaultShort: -1),
        [0x33] = new("MSG_QUIET", [Slot.Short, Slot.String]),
        [0x34] = new("DIALOGUE", [Slot.Short, Slot.String]),
        [0x35] = new("MSG_LETTER", [Slot.String], DefaultShort: -1),
        [0x36] = new("MSG_OVERHEARD", [Slot.String], DefaultShort: -1),
        [0x37] = new("MSG_ON_BG", [Slot.String], DefaultShort: -1),
        [0x38] = new("MSG_ON_BG2", [Slot.String], DefaultShort: -1),
        [0x39] = new("MSG_ON_BG_AUTO", [Slot.Short, Slot.String]),
        [0x44] = new("BGM_SWITCH", [Slot.Arg1]),
        [0x45] = new("BGM_FADEIN", [Slot.Short, Slot.Arg1]),
        [0x46] = new("BGM_QUEUE", [Slot.Arg1]),
        [0x47] = new("BGM_STOP", []),
        [0x48] = new("BGM_FADEOUT", [Slot.Short]),
        [0x49] = new("FANFARE_PLAY", [Slot.Arg1]),
        [0x4C] = new("FANFARE_PLAY2", [Slot.Arg1]),
        [0x4E] = new("FANFARE_FADEOUT2", [Slot.Short, Slot.Arg1]),
        [0x4F] = new("CLEAR_HITBOX", []),
        [0x51] = new("SET_POSITION_BOUNDS", [Slot.Short]),
        [0x52] = new("SET_OBJ_FLAGS", [Slot.Arg1]),
        [0x53] = new("CLEAR_OBJ_FLAGS", [Slot.Arg1]),
        [0x54] = new("SELECT_ANIMATION", [Slot.Short]),
        [0x56] = new("EMOTION_EFFECT", [Slot.Arg1]),
        [0x59] = new("MOVE_RELATIVE_POS", [Slot.Byte, Slot.Short, Slot.Arg1]),
        [0x5B] = new("WARP_WAYPOINT", [Slot.Byte, Slot.Arg1]),
        [0x60] = new("SET_HEIGHT", [Slot.Arg1]),
        [0x62] = new("MOVE_RELATIVE", [Slot.Short, Slot.Arg1, Slot.Arg2]),
        [0x68] = new("HEIGHT_TO_2", [Slot.Short, Slot.Arg1]),
        [0x6A] = new("MOVE_TO_COORDS", [Slot.Short, Slot.Arg1, Slot.Arg2]),
        [0x6B] = new("WALK_GRID", [Slot.Short, Slot.Arg1]),
        [0x70] = new("HEIGHT_TO", [Slot.Short, Slot.Arg1]),
        [0x7A] = new("WALK_DIRECT", [Slot.Short, Slot.Arg1]),
        [0x84] = new("WALK_RELATIVE_DIST", [Slot.Short, Slot.Arg1, Slot.Arg2]),
        [0x86] = new("CAMERA_PAN", [Slot.Short, Slot.Arg1]),
        [0x89] = new("WALK_DIRECTION", [Slot.Byte, Slot.Short, Slot.Arg1]),
        [0x8B] = new("SET_DIR_WAIT", [Slot.Byte, Slot.Short]),
        [0x91] = new("ROTATE_TO", [Slot.Byte, Slot.Short, Slot.Arg1]),
        [0x92] = new("ROTATE_RELATIVE", [Slot.Byte, Slot.Short, Slot.Arg1]),
        [0x93] = new("ROTATE_TO_LIVES", [Slot.Byte, Slot.Short, Slot.Arg1]),
        [0x94] = new("ROTATE_TO_LIVES2", [Slot.Byte, Slot.Short, Slot.Arg1]),
        [0x95] = new("ROTATE_TO_WAYPOINT", [Slot.Byte, Slot.Short, Slot.Arg1]),
        [0x97] = new("CAMERA_SHAKE", [Slot.Short, Slot.Arg1, Slot.Arg2]),
        [0x98] = new("CAMERA_INIT_PAN", []),
        [0x99] = new("CAMERA_END_PAN", []),
        [0x9A] = new("CAMERA_FOCUS_PLAYER", []),
        [0x9B] = new("CAMERA_FOLLOW", [Slot.Short]),
        [0xCF] = new("MSG_VAR", [Slot.Byte, Slot.Short, Slot.Arg1]),
        [0xD0] = new("VARIANT", [Slot.Short, Slot.String]),
        [0xD1] = new("VARIANT_DEFAULT", [Slot.String]),
        [0xD2] = new("ASK_DEBUG", [Slot.Byte, Slot.Short, Slot.Arg1, Slot.String]),
        [0xD3] = new("ASK1", [Slot.Byte, Slot.Short, Slot.Arg1, Slot.String]),
        [0xD4] = new("ASK2", [Slot.Byte, Slot.Short, Slot.Arg1, Slot.String]),
        [0xD5] = new("ASK3", [Slot.Byte, Slot.Short, Slot.Arg1, Slot.String]),
        [0xD6] = new("ASK1_VAR", [Slot.Byte, Slot.Short, Slot.Arg1, Slot.Arg2]),
        [0xD7] = new("ASK2_VAR", [Slot.Byte, Slot.Short, Slot.Arg1, Slot.Arg2]),
        [0xD8] = new("ASK3_VAR", [Slot.Byte, Slot.Short, Slot.Arg1, Slot.Arg2]),
        [0xD9] = new("CHOICE", [Slot.Short, Slot.String]),
        [0xDB] = new("WAIT", [Slot.Short]),
        [0xDC] = new("WAIT_RANDOM", [Slot.Short, Slot.Arg1]),
        [0xDD] = new("STOP_ANIMATION_ON_CURRENT_FRAME", []),
        [0xDE] = new("WAIT_EFFECT", []),
        [0xDF] = new("WAIT_FADE", []),
        [0xE0] = new("WAIT_BGM", [Slot.Short]),
        [0xE3] = new("AWAIT_CUE", [Slot.Short]),
        [0xE4] = new("ALERT_CUE", [Slot.Short]),
        [0xE5] = new("AWAIT_CUE_COND", [Slot.Short, Slot.Byte]),
        [0xE6] = new("CALL_LABEL", [Slot.Short]),
        [0xE7] = new("JUMP_LABEL", [Slot.Short]),
        [0xE8] = new("CALL_SCRIPT", [Slot.Short]),
        [0xE9] = new("JUMP_SCRIPT", [Slot.Short]),
        [0xEA] = new("CALL_STATION", [Slot.Short, Slot.Byte], DefaultArg1: -1),
        [0xEB] = new("JUMP_STATION", [Slot.Short, Slot.Byte], DefaultArg1: -1),
        [0xEE] = new("RET_DIRECT", []),
        [0xEF] = new("RET", []),
        [0xF0] = new("HALT", []),
        [0xF1] = new("END_DELETE", []),
        [0xF4] = new("LABEL", [Slot.Short]),
        [0xF6] = new("DEBUGINFO_O", [Slot.Short], IgnorePtr: true),
    };

    private static readonly Regex SectionHeader =
        new(@"^@(station|live|object|effect|event)\s+g(\d+)/s(\d+)(?:\.(\d+))?(?:\s+dlg(\d+))?(?:\s+(\S+))?\s*$",
            RegexOptions.IgnoreCase | RegexOptions.CultureInvariant);

    public static string FormatCommand(
        ScriptCommandData command,
        IReadOnlyDictionary<int, DialogueString>? dialogue = null,
        ScriptNamedDefinitions? names = null,
        string? dialogueText = null,
        ScriptSceneCast? cast = null)
    {
        string formatted;
        if (Layouts.TryGetValue(command.Op, out var layout) && MatchesDefaults(command, layout))
            formatted = FormatNamed(command, layout, dialogue, names, dialogueText);
        else
            formatted = FormatRaw(command);

        var note = CastAnnotation(command, cast);
        return note is null ? formatted : $"{formatted}  # {note}";
    }

    private static string? CastAnnotation(ScriptCommandData command, ScriptSceneCast? cast)
    {
        if (cast is null)
            return null;
        var liveIndex = command.Op switch
        {
            0x2E => command.ArgShort, // PORTRAIT speaker
            0x33 or 0x34 => command.ArgShort, // MSG_QUIET / MSG_NPC / DIALOGUE
            0x93 or 0x94 => command.Arg1, // ROTATE_TO_LIVES*
            _ => int.MinValue,
        };
        if (liveIndex == int.MinValue)
            return null;
        return cast.DescribeLive(liveIndex);
    }

    public static ScriptSourceParseResult Parse(
        string text,
        IReadOnlyDictionary<int, DialogueString>? dialogue = null,
        ScriptNamedDefinitions? names = null)
    {
        var result = new ScriptSourceParseResult();
        var current = new ScriptSourceSection();
        var lines = text.Replace("\r\n", "\n").Replace('\r', '\n').Split('\n');
        for (var i = 0; i < lines.Length; i++)
        {
            var lineNumber = i + 1;
            var raw = lines[i];
            var trimmed = StripComment(raw).Trim();
            if (trimmed.Length == 0)
                continue;

            var header = SectionHeader.Match(trimmed);
            if (header.Success)
            {
                FlushSection(result, current);
                current = new ScriptSourceSection
                {
                    Kind = header.Groups[1].Value.ToLowerInvariant(),
                    Group = int.Parse(header.Groups[2].Value, CultureInfo.InvariantCulture),
                    Sector = int.Parse(header.Groups[3].Value, CultureInfo.InvariantCulture),
                    Index = header.Groups[4].Success
                        ? int.Parse(header.Groups[4].Value, CultureInfo.InvariantCulture)
                        : 0,
                    ScriptSlot = header.Groups[5].Success
                        ? int.Parse(header.Groups[5].Value, CultureInfo.InvariantCulture)
                        : 0,
                    Name = header.Groups[6].Success ? header.Groups[6].Value : string.Empty,
                };
                continue;
            }

            if (trimmed.StartsWith('@'))
            {
                result.Errors.Add(new ScriptSourceError(lineNumber, $"Unknown section header '{trimmed}'."));
                continue;
            }

            if (!TryParseCommand(trimmed, dialogue, names, out var command, out var error))
            {
                result.Errors.Add(new ScriptSourceError(lineNumber, error ?? "Invalid command."));
                continue;
            }

            current.Commands.Add(command);
        }

        FlushSection(result, current);
        if (result.Sections.Count == 0)
            result.Sections.Add(new ScriptSourceSection());
        return result;
    }

    /// <summary>
    /// Re-formats known commands with named args while preserving headers, blanks, and comments.
    /// Unparseable lines are left unchanged.
    /// </summary>
    public static string RewriteWithNamedArgs(
        string text,
        IReadOnlyDictionary<int, DialogueString>? dialogue = null,
        ScriptNamedDefinitions? names = null,
        ScriptSceneCast? cast = null)
    {
        if ((names is null || !names.HasAny) && cast is null)
            return text;

        var lines = text.Replace("\r\n", "\n").Replace('\r', '\n').Split('\n');
        var builder = new StringBuilder();
        for (var i = 0; i < lines.Length; i++)
        {
            if (i > 0)
                builder.Append('\n');

            var raw = lines[i];
            var commentStart = FindCommentStart(raw);
            var code = commentStart < 0 ? raw : raw[..commentStart];
            var comment = commentStart < 0 ? string.Empty : raw[commentStart..];
            var trimmed = code.Trim();
            if (trimmed.Length == 0 || trimmed.StartsWith('@') ||
                !TryParseCommand(trimmed, dialogue, names, out var command, out _))
            {
                builder.Append(raw);
                continue;
            }

            var leading = code[..(code.Length - code.TrimStart().Length)];
            var trailingWs = code.Length > 0 && char.IsWhiteSpace(code[^1])
                ? code[code.TrimEnd().Length..]
                : string.Empty;
            builder.Append(leading);
            // Drop prior cast annotations; FormatCommand re-appends a fresh one.
            var priorComment = comment.TrimStart();
            if (priorComment.StartsWith('#') &&
                cast is not null &&
                priorComment.Contains("live", StringComparison.OrdinalIgnoreCase))
                comment = string.Empty;
            builder.Append(FormatCommand(command.Command, dialogue, names, command.DialogueText, cast));
            builder.Append(trailingWs);
            builder.Append(comment);
        }

        return builder.ToString();
    }

    private static int FindCommentStart(string line)
    {
        var inString = false;
        var escape = false;
        for (var i = 0; i < line.Length; i++)
        {
            var ch = line[i];
            if (inString)
            {
                if (escape)
                {
                    escape = false;
                    continue;
                }
                if (ch == '\\')
                {
                    escape = true;
                    continue;
                }
                if (ch == '"')
                    inString = false;
                continue;
            }

            if (ch == '"')
            {
                inString = true;
                continue;
            }

            if (ch == '#' || (ch == '/' && i + 1 < line.Length && line[i + 1] == '/'))
                return i;
        }

        return -1;
    }

    private static void FlushSection(ScriptSourceParseResult result, ScriptSourceSection current)
    {
        if (current.Kind == "station" || current.Commands.Count > 0)
            result.Sections.Add(current);
    }

    private static string StripComment(string line)
    {
        var inString = false;
        var escape = false;
        for (var i = 0; i < line.Length; i++)
        {
            var ch = line[i];
            if (inString)
            {
                if (escape)
                {
                    escape = false;
                    continue;
                }
                if (ch == '\\')
                {
                    escape = true;
                    continue;
                }
                if (ch == '"')
                    inString = false;
                continue;
            }

            if (ch == '"')
            {
                inString = true;
                continue;
            }

            if (ch == '#' || (ch == '/' && i + 1 < line.Length && line[i + 1] == '/'))
                return line[..i];
        }

        return line;
    }

    private static bool TryParseCommand(
        string line,
        IReadOnlyDictionary<int, DialogueString>? dialogue,
        ScriptNamedDefinitions? names,
        out ScriptSourceCommand command,
        out string? error)
    {
        command = null!;
        error = null;
        var open = line.IndexOf('(');
        string name;
        string inner;
        if (open < 0)
        {
            name = line.Trim();
            inner = string.Empty;
        }
        else
        {
            if (!line.EndsWith(')'))
            {
                error = $"Unclosed argument list in '{line}'.";
                return false;
            }

            name = line[..open].Trim();
            inner = line[(open + 1)..^1];
        }

        if (!ScriptOpcodeNames.TryGetOp(name, names?.Opcodes, out var op))
        {
            error = $"Unknown command '{name}'.";
            return false;
        }

        var args = SplitArgs(inner);
        var rawName = name.StartsWith("CMD_", StringComparison.OrdinalIgnoreCase);
        var layout = !rawName && Layouts.TryGetValue(op, out var named) ? named : RawLayout(op);
        if (args.Count != layout.Slots.Length)
        {
            error = $"{layout.Name} expects {layout.Slots.Length} argument(s), got {args.Count}.";
            return false;
        }

        var data = new ScriptCommandData
        {
            Op = op,
            ArgByte = layout.DefaultByte,
            ArgShort = layout.DefaultShort,
            Arg1 = layout.DefaultArg1,
            Arg2 = layout.DefaultArg2,
            ArgPtr = layout.DefaultPtr,
        };
        string? dialogueText = null;
        for (var i = 0; i < layout.Slots.Length; i++)
        {
            if (!TryAssign(data, op, i, layout.Slots[i], args[i], dialogue, names, out var text, out error))
                return false;
            if (text is not null)
                dialogueText = text;
        }

        command = new ScriptSourceCommand { Command = data, DialogueText = dialogueText };
        return true;
    }

    private static MacroLayout RawLayout(byte op) =>
        new($"CMD_{op:X2}", [Slot.Byte, Slot.Short, Slot.Arg1, Slot.Arg2, Slot.Ptr]);

    private static bool TryAssign(
        ScriptCommandData command,
        byte op,
        int argIndex,
        Slot slot,
        string raw,
        IReadOnlyDictionary<int, DialogueString>? dialogue,
        ScriptNamedDefinitions? names,
        out string? dialogueText,
        out string? error)
    {
        dialogueText = null;
        error = null;
        raw = raw.Trim();
        if (slot == Slot.String && raw.Length >= 2 && raw[0] == '"')
        {
            if (!TryUnquote(raw, out var text, out error))
                return false;
            dialogueText = text;
            command.ArgPtr = FindPointer(text, dialogue);
            return true;
        }

        if (!TryParseNumber(raw, out var value))
        {
            var catalog = names?.CatalogFor(op, argIndex);
            if (catalog is null || !catalog.TryGetId(raw, out value))
            {
                error = catalog is null
                    ? $"Expected a number, got '{raw}'."
                    : $"Unknown name '{raw}'.";
                return false;
            }
        }

        switch (slot)
        {
            case Slot.Byte:
                command.ArgByte = (byte)value;
                break;
            case Slot.Short:
                command.ArgShort = (short)value;
                break;
            case Slot.Arg1:
                command.Arg1 = value;
                break;
            case Slot.Arg2:
                command.Arg2 = value;
                break;
            case Slot.Ptr:
            case Slot.String:
                command.ArgPtr = unchecked((uint)value);
                break;
        }

        return true;
    }

    private static uint FindPointer(string text, IReadOnlyDictionary<int, DialogueString>? dialogue)
    {
        if (dialogue is null)
            return 0;
        foreach (var entry in dialogue.Values)
        {
            if (entry.Text != text)
                continue;
            if (entry.Offset >= 0)
                return RomPointer.FromOffset(entry.Offset).Value;
            return unchecked((uint)entry.Offset);
        }

        return 0;
    }

    private static bool MatchesDefaults(ScriptCommandData command, MacroLayout layout)
    {
        var used = new HashSet<Slot>(layout.Slots);
        if (!used.Contains(Slot.Byte) && command.ArgByte != layout.DefaultByte)
            return false;
        if (!used.Contains(Slot.Short) && command.ArgShort != layout.DefaultShort)
            return false;
        if (!used.Contains(Slot.Arg1) && command.Arg1 != layout.DefaultArg1)
            return false;
        if (!used.Contains(Slot.Arg2) && command.Arg2 != layout.DefaultArg2)
            return false;
        if (!used.Contains(Slot.Ptr) && !used.Contains(Slot.String) &&
            !layout.IgnorePtr && command.ArgPtr != layout.DefaultPtr)
            return false;
        return true;
    }

    private static string FormatNamed(
        ScriptCommandData command,
        MacroLayout layout,
        IReadOnlyDictionary<int, DialogueString>? dialogue,
        ScriptNamedDefinitions? names,
        string? dialogueText)
    {
        var args = layout.Slots.Select((slot, index) =>
            FormatSlot(command, slot, index, dialogue, names, dialogueText));
        return $"{layout.Name}({string.Join(", ", args)})";
    }

    private static string FormatRaw(ScriptCommandData command) =>
        $"CMD_{command.Op:X2}({command.ArgByte}, {command.ArgShort}, {command.Arg1}, {command.Arg2}, 0x{command.ArgPtr:X8})";

    private static string FormatSlot(
        ScriptCommandData command,
        Slot slot,
        int argIndex,
        IReadOnlyDictionary<int, DialogueString>? dialogue,
        ScriptNamedDefinitions? names,
        string? dialogueText)
    {
        if (slot is Slot.Byte or Slot.Short or Slot.Arg1 or Slot.Arg2)
        {
            var value = slot switch
            {
                Slot.Byte => command.ArgByte,
                Slot.Short => command.ArgShort,
                Slot.Arg1 => command.Arg1,
                _ => command.Arg2,
            };
            var catalog = names?.CatalogFor(command.Op, argIndex);
            if (catalog is not null && catalog.TryGetName(value, out var name))
                return name;
            return value.ToString(CultureInfo.InvariantCulture);
        }

        return slot switch
        {
            Slot.Ptr => $"0x{command.ArgPtr:X8}",
            Slot.String => dialogueText is not null
                ? Quote(dialogueText)
                : FormatStringOrPointer(command.ArgPtr, dialogue),
            _ => "0",
        };
    }

    private static string FormatStringOrPointer(uint pointer, IReadOnlyDictionary<int, DialogueString>? dialogue)
    {
        var offset = PointerToOffset(pointer);
        if (dialogue is not null &&
            (dialogue.TryGetValue(offset, out var byOffset) ||
             dialogue.TryGetValue(unchecked((int)pointer), out byOffset)))
            return Quote(byOffset.Text);
        return $"0x{pointer:X8}";
    }

    private static int PointerToOffset(uint pointer) =>
        pointer >= RomImage.RomVirtualAddress && pointer < RomImage.RomVirtualAddress + 0x02000000
            ? (int)(pointer - RomImage.RomVirtualAddress)
            : unchecked((int)pointer);

    private static List<string> SplitArgs(string inner)
    {
        var args = new List<string>();
        if (string.IsNullOrWhiteSpace(inner))
            return args;

        var builder = new StringBuilder();
        var inString = false;
        var escape = false;
        foreach (var ch in inner)
        {
            if (inString)
            {
                builder.Append(ch);
                if (escape)
                {
                    escape = false;
                    continue;
                }
                if (ch == '\\')
                {
                    escape = true;
                    continue;
                }
                if (ch == '"')
                    inString = false;
                continue;
            }

            if (ch == '"')
            {
                inString = true;
                builder.Append(ch);
                continue;
            }

            if (ch == ',')
            {
                args.Add(builder.ToString().Trim());
                builder.Clear();
                continue;
            }

            builder.Append(ch);
        }

        args.Add(builder.ToString().Trim());
        return args;
    }

    private static bool TryParseNumber(string raw, out int value)
    {
        value = 0;
        if (raw.Equals("NULL", StringComparison.OrdinalIgnoreCase))
            return true;
        if (raw.StartsWith("0x", StringComparison.OrdinalIgnoreCase))
        {
            if (!ulong.TryParse(raw.AsSpan(2), NumberStyles.HexNumber, CultureInfo.InvariantCulture, out var hex))
                return false;
            value = unchecked((int)hex);
            return true;
        }

        return int.TryParse(raw, NumberStyles.Integer, CultureInfo.InvariantCulture, out value);
    }

    private static bool TryUnquote(string raw, out string text, out string? error)
    {
        text = string.Empty;
        error = null;
        if (raw.Length < 2 || raw[0] != '"' || raw[^1] != '"')
        {
            error = "Unterminated string.";
            return false;
        }

        var builder = new StringBuilder();
        var escape = false;
        for (var i = 1; i < raw.Length - 1; i++)
        {
            var ch = raw[i];
            if (escape)
            {
                builder.Append(ch switch
                {
                    'n' => '\n',
                    'r' => '\r',
                    't' => '\t',
                    _ => ch,
                });
                escape = false;
                continue;
            }

            if (ch == '\\')
            {
                escape = true;
                continue;
            }

            builder.Append(ch);
        }

        if (escape)
        {
            error = "Unterminated escape in string.";
            return false;
        }

        text = builder.ToString();
        return true;
    }

    private static string Quote(string text)
    {
        var builder = new StringBuilder(text.Length + 2);
        builder.Append('"');
        foreach (var ch in text)
        {
            switch (ch)
            {
                case '\\': builder.Append("\\\\"); break;
                case '"': builder.Append("\\\""); break;
                case '\n': builder.Append("\\n"); break;
                case '\r': builder.Append("\\r"); break;
                case '\t': builder.Append("\\t"); break;
                default: builder.Append(ch); break;
            }
        }

        builder.Append('"');
        return builder.ToString();
    }
}

public static class SceneScriptSource
{
    public static string Format(
        Scene scene,
        IReadOnlyDictionary<int, DialogueString>? dialogue = null,
        ScriptNamedDefinitions? names = null,
        ScriptSceneCast? cast = null)
    {
        if (!string.IsNullOrEmpty(scene.ScriptSourceText))
        {
            var saved = scene.ScriptSourceText.Replace("\r\n", "\n").Replace('\r', '\n');
            if (!saved.EndsWith('\n'))
                saved += "\n";
            return ScriptSource.RewriteWithNamedArgs(saved, dialogue, names, cast);
        }

        var builder = new StringBuilder();
        if (!string.IsNullOrWhiteSpace(scene.Name))
            builder.AppendLine($"# {scene.Name}");
        if (cast is not null && cast.Members.Count > 0)
        {
            builder.AppendLine("# " + cast.RosterText().Replace("\n", "\n# "));
        }

        var any = false;
        foreach (var group in scene.Groups)
        {
            foreach (var sector in group.Sectors)
            {
                foreach (var station in sector.Stations)
                {
                    any = true;
                    AppendBlankLine(builder);
                    var index = sector.Stations.IndexOf(station);
                    var indexSuffix = sector.Stations.Count > 1 ? $".{index}" : "";
                    var nameSuffix = string.IsNullOrEmpty(station.Name) ? "" : $" {station.Name}";
                    builder.AppendLine($"@station g{sector.Group}/s{sector.Sector}{indexSuffix}{nameSuffix}");
                    foreach (var command in station.Commands)
                        builder.AppendLine(ScriptSource.FormatCommand(command, dialogue, names, cast: cast));
                }

                AppendEntityScripts(builder, sector.Lives, "live", dialogue, names, cast, ref any);
                AppendEntityScripts(builder, sector.Objects, "object", dialogue, names, cast: null, ref any);
                AppendEntityScripts(builder, sector.Effects, "effect", dialogue, names, cast: null, ref any);

                foreach (var entity in sector.Events)
                {
                    if (entity.EventScript is not { Commands.Count: > 0 } eventScript)
                        continue;
                    any = true;
                    AppendBlankLine(builder);
                    var indexSuffix = sector.Events.Count > 1 ? $".{entity.Index}" : "";
                    var nameSuffix = string.IsNullOrEmpty(eventScript.Name) ? "" : $" {eventScript.Name}";
                    builder.AppendLine($"@event g{sector.Group}/s{sector.Sector}{indexSuffix}{nameSuffix}");
                    foreach (var command in eventScript.Commands)
                        builder.AppendLine(ScriptSource.FormatCommand(command, dialogue, names, cast: cast));
                }
            }
        }

        if (!any)
        {
            if (builder.Length > 0)
                builder.AppendLine();
            builder.AppendLine("# (no station or entity scripts)");
        }

        return builder.ToString().TrimEnd() + "\n";
    }

    public static string FormatLiveHeader(
        int group,
        int sector,
        int entityIndex,
        int scriptSlot,
        ScriptSceneCast? cast = null,
        bool includeIndex = true)
    {
        var indexSuffix = includeIndex ? $".{entityIndex}" : "";
        var header = $"@live g{group}/s{sector}{indexSuffix} dlg{scriptSlot}";
        if (cast is not null && cast.TryGet(entityIndex, out var member))
        {
            header += $"  # type {member.TypeId} · {member.SpeciesName}";
            if (!string.IsNullOrEmpty(member.MonsterDefine))
                header += $" ({member.MonsterDefine})";
        }

        return header;
    }

    private static void AppendEntityScripts(
        StringBuilder builder,
        IReadOnlyList<SceneEntity> entities,
        string kind,
        IReadOnlyDictionary<int, DialogueString>? dialogue,
        ScriptNamedDefinitions? names,
        ScriptSceneCast? cast,
        ref bool any)
    {
        for (var entityPos = 0; entityPos < entities.Count; entityPos++)
        {
            var entity = entities[entityPos];
            for (var slot = 0; slot < entity.Scripts.Count; slot++)
            {
                var script = entity.Scripts[slot];
                if (script.Commands.Count == 0)
                    continue;
                any = true;
                AppendBlankLine(builder);
                if (kind == "live")
                {
                    builder.AppendLine(FormatLiveHeader(
                        entity.Group,
                        entity.Sector,
                        entityPos,
                        slot,
                        cast,
                        includeIndex: entities.Count > 1));
                }
                else
                {
                    var indexSuffix = entities.Count > 1 ? $".{entity.Index}" : "";
                    builder.AppendLine($"@{kind} g{entity.Group}/s{entity.Sector}{indexSuffix} dlg{slot}");
                }

                foreach (var command in script.Commands)
                    builder.AppendLine(ScriptSource.FormatCommand(command, dialogue, names, cast: cast));
            }
        }
    }

    private static void AppendBlankLine(StringBuilder builder)
    {
        if (builder.Length == 0)
            return;
        if (builder[^1] != '\n')
            builder.AppendLine();
        builder.AppendLine();
    }

    public static ScriptSourceParseResult Parse(
        string text,
        IReadOnlyDictionary<int, DialogueString>? dialogue = null,
        ScriptNamedDefinitions? names = null) =>
        ScriptSource.Parse(text, dialogue, names);
}
