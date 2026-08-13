using System.Globalization;
using System.Text;

namespace RescueEditor.Core;

public sealed record ScriptCommandParamDoc(string Name, string Field, string Meaning);

public sealed record ScriptCommandDoc(
    byte Op,
    string Name,
    string Summary,
    IReadOnlyList<ScriptCommandParamDoc> Parameters);

/// <summary>Editor tooltips / command reference for ground-script macros.</summary>
public static class ScriptCommandDocs
{
    private static readonly Dictionary<byte, ScriptCommandDoc> ByOp;
    private static readonly Dictionary<string, ScriptCommandDoc> ByName;
    private static readonly IReadOnlyList<string> AlphabeticalNames;

    static ScriptCommandDocs()
    {
        var docs = BuildDocs();
        ByOp = docs.ToDictionary(d => d.Op);
        ByName = new Dictionary<string, ScriptCommandDoc>(StringComparer.OrdinalIgnoreCase);
        foreach (var doc in docs)
            ByName[doc.Name] = doc;
        // Prefer DEBUGINFO_O as the documented display name for 0xF6.
        ByName["DEBUGINFO"] = ByOp[0xF6];
        ByName["CMD_F6"] = ByOp[0xF6];

        AlphabeticalNames = docs
            .Select(d => d.Name)
            .OrderBy(n => n, StringComparer.OrdinalIgnoreCase)
            .ToArray();
    }

    public static IReadOnlyList<string> AlphabeticalCommandNames => AlphabeticalNames;

    public static bool TryGet(byte op, out ScriptCommandDoc doc) => ByOp.TryGetValue(op, out doc!);

    public static bool TryGetByName(string name, out ScriptCommandDoc doc)
    {
        doc = null!;
        if (string.IsNullOrWhiteSpace(name))
            return false;
        name = name.Trim();
        if (ByName.TryGetValue(name, out doc!))
            return true;
        if (ScriptOpcodeNames.TryGetOp(name, out var op) && ByOp.TryGetValue(op, out doc!))
            return true;
        return false;
    }

    public static string FormatTooltip(
        ScriptCommandDoc doc,
        ScriptNamedDefinitions? names = null,
        ScriptSceneCast? cast = null,
        string? line = null)
    {
        var builder = new StringBuilder();
        if (doc.Parameters.Count == 0)
            builder.Append(doc.Name).Append("()");
        else
            builder.Append(doc.Name)
                .Append('(')
                .Append(string.Join(", ", doc.Parameters.Select(p => p.Name)))
                .Append(')');
        builder.AppendLine();
        builder.AppendLine(doc.Summary);
        if (doc.Parameters.Count == 0)
        {
            builder.Append("Parameters: none.");
        }
        else
        {
            builder.AppendLine();
            builder.AppendLine("Parameters:");
            foreach (var param in doc.Parameters)
                builder.Append("  • ").Append(param.Name)
                    .Append(" (").Append(param.Field).Append(") — ")
                    .AppendLine(param.Meaning);
        }

        AppendDefineList(builder, doc.Op, names);
        AppendCastHint(builder, doc.Op, line, cast);
        return builder.ToString().TrimEnd();
    }

    public static string? TooltipForSourceLine(
        string line,
        ScriptNamedDefinitions? names = null,
        ScriptSceneCast? cast = null)
    {
        if (string.IsNullOrWhiteSpace(line))
            return null;
        var trimmed = StripComment(line).Trim();
        if (trimmed.Length == 0 || trimmed.StartsWith('@'))
            return null;

        var open = trimmed.IndexOf('(');
        var name = open < 0 ? trimmed : trimmed[..open].Trim();
        if (!TryGetByName(name, out var doc))
            return null;
        return FormatTooltip(doc, names, cast, line);
    }

    /// <summary>
    /// Tooltip only when <paramref name="column"/> (0-based into <paramref name="line"/>)
    /// lands on the opcode identifier token — not args, whitespace, or comments.
    /// </summary>
    public static string? TooltipAtColumn(
        string line,
        int column,
        ScriptSceneCast? cast = null,
        ScriptNamedDefinitions? names = null)
    {
        if (string.IsNullOrWhiteSpace(line) || column < 0 || column >= line.Length)
            return null;

        var commentAt = FindCommentStart(line);
        if (commentAt >= 0 && column >= commentAt)
            return null;

        var codeEnd = commentAt < 0 ? line.Length : commentAt;
        var i = 0;
        while (i < codeEnd && char.IsWhiteSpace(line[i]))
            i++;
        if (i >= codeEnd || line[i] == '@')
            return null;

        if (!char.IsLetter(line[i]) && line[i] != '_')
            return null;

        var start = i;
        i++;
        while (i < codeEnd && (char.IsLetterOrDigit(line[i]) || line[i] == '_'))
            i++;
        if (column < start || column >= i)
            return null;

        var name = line[start..i];
        if (!TryGetByName(name, out var doc))
            return null;
        return FormatTooltip(doc, names, cast, line);
    }

    private static void AppendDefineList(StringBuilder builder, byte op, ScriptNamedDefinitions? names)
    {
        if (names is null)
            return;

        var catalog = op switch
        {
            0x54 => names.GroundAnim,
            0x56 => names.EmotionEffect,
            0x2D => names.UpdateName,
            0x52 or 0x53 => names.ObjFlag,
            0x89 or 0x8B or 0x91 => names.Direction,
            _ => null,
        };
        if (catalog is null || catalog.Entries.Count == 0)
            return;

        builder.AppendLine();
        builder.AppendLine("Defines:");
        foreach (var entry in catalog.Entries)
            builder.Append("  • ").Append(entry.Name).Append(" = ").Append(entry.Id).AppendLine();
    }

    private static void AppendCastHint(StringBuilder builder, byte op, string? line, ScriptSceneCast? cast)
    {
        if (cast is null || cast.Members.Count == 0 || string.IsNullOrWhiteSpace(line))
            return;

        var speaker = TryReadSpeakerId(op, line);
        if (speaker is null)
            return;
        var label = cast.DescribeLive(speaker.Value);
        if (label is null)
            return;

        builder.AppendLine();
        builder.Append("This line: ").Append(label);
        if (cast.TryGet(speaker.Value, out var member) && !string.IsNullOrEmpty(member.MonsterDefine))
            builder.Append(" (").Append(member.MonsterDefine).Append(')');
        builder.AppendLine();
    }

    private static int? TryReadSpeakerId(byte op, string line)
    {
        // PORTRAIT(place, id, emotion) → arg index 1
        // MSG_NPC / MSG_QUIET / DIALOGUE(id, …) → arg index 0
        var code = StripComment(line).Trim();
        var open = code.IndexOf('(');
        if (open < 0 || !code.EndsWith(')'))
            return null;
        var inner = code[(open + 1)..^1];
        var args = SplitSimpleArgs(inner);
        var index = op switch
        {
            0x2E => 1,
            0x33 or 0x34 => 0,
            _ => -1,
        };
        if (index < 0 || index >= args.Count)
            return null;
        if (!int.TryParse(args[index].Trim(), NumberStyles.Integer, CultureInfo.InvariantCulture, out var id))
            return null;
        return id;
    }

    private static List<string> SplitSimpleArgs(string inner)
    {
        var args = new List<string>();
        if (string.IsNullOrWhiteSpace(inner))
            return args;
        var builder = new StringBuilder();
        var depth = 0;
        foreach (var ch in inner)
        {
            if (ch == ',' && depth == 0)
            {
                args.Add(builder.ToString());
                builder.Clear();
                continue;
            }
            if (ch is '(')
                depth++;
            else if (ch is ')')
                depth = Math.Max(0, depth - 1);
            builder.Append(ch);
        }
        args.Add(builder.ToString());
        return args;
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

    private static string StripComment(string line)
    {
        var at = FindCommentStart(line);
        return at < 0 ? line : line[..at];
    }

    private static List<ScriptCommandDoc> BuildDocs() =>
    [
        Doc(0x08, "SELECT_MAP", "Selects the overworld map for the current ground scene.",
            P("map", "arg1", "MAP_* ground map id")),
        Doc(0x09, "SELECT_GROUND", "Selects the ground map variant / layout.",
            P("map", "arg1", "MAP_* ground map id")),
        Doc(0x0A, "SELECT_DUNGEON", "Selects dungeon destination parameters.",
            P("dungeon", "arg2", "Dungeon id"),
            P("floor", "arg1", "Floor / related"),
            P("unk", "argShort", "Extra short operand"),
            P("flags", "argByte", "Flags")),
        Doc(0x0B, "SELECT_WEATHER", "Sets scene weather.",
            P("weather", "arg1", "Weather id")),
        Doc(0x0C, "SELECT_ENTITIES", "Selects which entity sector group is active.",
            P("group", "argShort", "Entity group"),
            P("sector", "argByte", "Entity sector")),
        Doc(0x0D, "SELECT_LIVES", "Selects lives spawn table group/sector.",
            P("group", "argShort", "Lives group"),
            P("sector", "argByte", "Lives sector")),
        Doc(0x0E, "SELECT_OBJECTS", "Selects object spawn table group/sector.",
            P("group", "argShort", "Object group"),
            P("sector", "argByte", "Object sector")),
        Doc(0x0F, "SELECT_EFFECTS", "Selects effect spawn table group/sector.",
            P("group", "argShort", "Effect group"),
            P("sector", "argByte", "Effect sector")),
        Doc(0x10, "SELECT_EVENTS", "Selects event table group/sector.",
            P("group", "argShort", "Event group"),
            P("sector", "argByte", "Event sector")),
        Doc(0x19, "SPAWN_OBJECT", "Spawns an object actor.",
            P("a", "arg2", "Spawn operand A"),
            P("b", "arg1", "Spawn operand B"),
            P("c", "argShort", "Spawn operand C"),
            P("d", "argByte", "Spawn operand D")),
        Doc(0x1A, "SPAWN_EFFECT", "Spawns an effect actor.",
            P("a", "arg2", "Spawn operand A"),
            P("b", "arg1", "Spawn operand B"),
            P("c", "argShort", "Spawn operand C"),
            P("d", "argByte", "Spawn operand D")),
        Doc(0x1B, "EXECUTE_FUNCTION", "Runs a ground function by id.",
            P("id", "argShort", "Function id")),
        Doc(0x1C, "EXECUTE_SUBROUTINE", "Runs a ground subroutine by id.",
            P("id", "argShort", "Subroutine id")),
        Doc(0x1D, "EXECUTE_STATION", "Jumps execution into a station script.",
            P("station", "arg1", "Station id / index"),
            P("group", "argShort", "Group"),
            P("sector", "argByte", "Sector")),
        Doc(0x1E, "EXECUTE_SUBSTATION", "Jumps into a substation script.",
            P("station", "arg1", "Station id / index"),
            P("group", "argShort", "Group"),
            P("sector", "argByte", "Sector")),
        Doc(0x02, "NEXT_DUNGEON", "Queues the next dungeon entry.",
            P("u", "argShort", "Unused / flags"),
            P("d", "arg1", "Script dungeon id")),
        Doc(0x22, "FADE_IN", "Fades the screen in.",
            P("mode", "argByte", "Fade mode"),
            P("duration", "argShort", "Duration")),
        Doc(0x23, "FADE_OUT", "Fades the screen out.",
            P("mode", "argByte", "Fade mode"),
            P("duration", "argShort", "Duration")),
        Doc(0x27, "FLASH_FROM", "Palette flash from an RGB color (blend/fade utilities).",
            P("wait", "argByte", "If nonzero, wait until the flash finishes"),
            P("kind", "argShort", "PALUTIL_KIND_*"),
            P("frames", "arg1", "Duration / related frames"),
            P("rgb", "arg2", "Packed RGB (R<<16)|(G<<8)|B")),
        Doc(0x28, "FLASH_TO", "Palette flash toward an RGB color (blend/fade utilities).",
            P("wait", "argByte", "If nonzero, wait until the flash finishes"),
            P("kind", "argShort", "PALUTIL_KIND_*"),
            P("frames", "arg1", "Duration / related frames"),
            P("rgb", "arg2", "Packed RGB (R<<16)|(G<<8)|B")),
        Doc(0x2B, "TEXTBOX_AUTO_PRESS", "Auto-advances textboxes after the given frame counts. Pass -1 to disable.",
            P("endF", "arg1", "Frames before auto-press at end of message (-1 disables)"),
            P("midF", "arg2", "Frames before auto-press mid-message (-1 disables)")),
        Doc(0x2D, "UPDATE_NAME",
            "Binds dialogue substitution buffers (what {NAME_n} / monster-name macros resolve to).",
            P("kind", "argByte", "UpdateNameKind (UPDATE_NAME_*)"),
            P("slot", "argShort", "Format buffer index ({NAME_0} …)"),
            P("id", "arg1", "Lives type id for UPDATE_NAME_*_TYPE; else 0")),
        Doc(0x2E, "PORTRAIT", "Shows a speaker portrait. Speaker id is the lives index in the active sector (see Scene cast).",
            P("place", "argByte", "PLACEMENT_* / PLACEMENT_KEEP"),
            P("id", "argShort", "Lives index / speaker slot (resolved to a species via the scene cast)"),
            P("emotion", "arg1", "EMOTION_* portrait face")),
        Doc(0x2F, "PORTRAIT_POS", "Moves the active portrait.",
            P("x", "argShort", "X"),
            P("y", "arg1", "Y"),
            P("z", "arg2", "Z / extra")),
        Doc(0x30, "TEXTBOX_CLEAR", "Clears the textbox."),
        Doc(0x31, "TEXTBOX_CLEAR2", "Clears the textbox (variant)."),
        Doc(0x32, "MSG_INSTANT", "Shows instant message text.",
            P("text", "string", "Dialogue string")),
        Doc(0x33, "MSG_QUIET", "Shows quiet / soft message text.",
            P("speaker", "argShort", "Speaker / portrait slot"),
            P("text", "string", "Dialogue string")),
        Doc(0x34, "DIALOGUE", "Shows standard dialogue.",
            P("speaker", "argShort", "Speaker / portrait slot"),
            P("text", "string", "Dialogue string")),
        Doc(0x35, "MSG_LETTER", "Shows letter-style message text.",
            P("text", "string", "Dialogue string")),
        Doc(0x36, "MSG_OVERHEARD", "Shows overheard message text.",
            P("text", "string", "Dialogue string")),
        Doc(0x37, "MSG_ON_BG", "Shows message drawn on the background.",
            P("text", "string", "Dialogue string")),
        Doc(0x38, "MSG_ON_BG2", "Shows message drawn on the background (variant).",
            P("text", "string", "Dialogue string")),
        Doc(0x39, "MSG_ON_BG_AUTO", "Shows auto-timed background message.",
            P("unk", "argShort", "Timing / mode"),
            P("text", "string", "Dialogue string")),
        Doc(0x44, "BGM_SWITCH", "Switches background music immediately.",
            P("music", "arg1", "MUS_* music id")),
        Doc(0x45, "BGM_FADEIN", "Fades in background music.",
            P("fade", "argShort", "Fade frames"),
            P("music", "arg1", "MUS_* music id")),
        Doc(0x46, "BGM_QUEUE", "Queues background music.",
            P("music", "arg1", "MUS_* music id")),
        Doc(0x47, "BGM_STOP", "Stops background music."),
        Doc(0x48, "BGM_FADEOUT", "Fades out background music.",
            P("fade", "argShort", "Fade frames")),
        Doc(0x49, "FANFARE_PLAY", "Plays a fanfare / SFX.",
            P("fanfare", "arg1", "SE_* / fanfare id")),
        Doc(0x4C, "FANFARE_PLAY2", "Plays a fanfare / SFX (second channel).",
            P("fanfare", "arg1", "SE_* / fanfare id")),
        Doc(0x4E, "FANFARE_FADEOUT2", "Fades out a fanfare / SFX on the second channel.",
            P("fade", "argShort", "Fade frames (negative → default 30)"),
            P("fanfare", "arg1", "SE_* / fanfare id")),
        Doc(0x4F, "CLEAR_HITBOX", "Clears the running object's hitbox and cancels nested scriptData2 if active."),
        Doc(0x51, "SET_POSITION_BOUNDS", "Restricts movement to a GroundLink area.",
            P("link", "argShort", "Area / link index (map-local)")),
        Doc(0x52, "SET_OBJ_FLAGS", "Sets bits on the parent object/lives flags (callbacks->setFlags).",
            P("f", "arg1", "OBJ_FLAG_* bitmask")),
        Doc(0x53, "CLEAR_OBJ_FLAGS",
            "Clears bits on the parent object/lives flags (callbacks->clearFlags). OBJ_FLAG_CANCEL_SCRIPT2 also cancels nested scriptData2.",
            P("f", "arg1", "OBJ_FLAG_* bitmask")),
        Doc(0x54, "SELECT_ANIMATION", "Selects the cutscene movement / pose animation for the actor.",
            P("id", "argShort", "GROUND_ANIM_* (mapped via gUnknown_8117F64)")),
        Doc(0x56, "EMOTION_EFFECT",
            "Attaches (or clears) an overhead emotion effect on the running lives. Pair with WAIT_EFFECT.",
            P("id", "arg1", "EMOTION_EFFECT_* (EMOTION_EFFECT_NONE clears)")),
        Doc(0x59, "MOVE_RELATIVE_POS", "Instantly offsets position by (h, v) pixels, then optionally waits.",
            P("wait", "argByte", "Frames to pause after"),
            P("h", "argShort", "X delta (pixels)"),
            P("v", "arg1", "Y delta (pixels)")),
        Doc(0x5B, "WARP_WAYPOINT", "Warps to a waypoint / link.",
            P("mode", "argByte", "Warp mode"),
            P("link", "arg1", "Waypoint / link id")),
        Doc(0x60, "SET_HEIGHT", "Instantly sets sprite height above ground (pixels).",
            P("h", "arg1", "Height in pixels")),
        Doc(0x62, "MOVE_RELATIVE", "Walks toward a relative (h, v) pixel offset without updating facing each step.",
            P("spd", "argShort", "Max step speed"),
            P("h", "arg1", "X delta (pixels)"),
            P("v", "arg2", "Y delta (pixels)")),
        Doc(0x68, "HEIGHT_TO_2", "Animates height to h (same behavior as HEIGHT_TO; retail uses both opcodes).",
            P("spd", "argShort", "Max height change per frame"),
            P("h", "arg1", "Target height (pixels)")),
        Doc(0x6A, "MOVE_TO_COORDS", "Moves toward absolute map coordinates.",
            P("spd", "argShort", "Speed"),
            P("x", "arg1", "X"),
            P("y", "arg2", "Y")),
        Doc(0x6B, "WALK_GRID", "Walks on the grid toward a target.",
            P("spd", "argShort", "Speed"),
            P("target", "arg1", "Grid / target operand")),
        Doc(0x70, "HEIGHT_TO", "Animates sprite Z/height to h at up to spd units/frame; waits until done.",
            P("spd", "argShort", "Max height change per frame"),
            P("h", "arg1", "Target height (pixels)")),
        Doc(0x7A, "WALK_DIRECT", "Walks directly toward a target.",
            P("spd", "argShort", "Speed"),
            P("target", "arg1", "Target operand")),
        Doc(0x84, "WALK_RELATIVE_DIST", "Interpolates to a relative (h, v) offset; updates facing along the path.",
            P("spd", "argShort", "Distance divisor for duration"),
            P("h", "arg1", "X delta (pixels)"),
            P("v", "arg2", "Y delta (pixels)")),
        Doc(0x86, "CAMERA_PAN", "Pans the camera toward a link / target.",
            P("spd", "argShort", "Pan speed"),
            P("link", "arg1", "Link / target")),
        Doc(0x89, "WALK_DIRECTION", "Faces dir, then walks forward at spd for f frames.",
            P("f", "argByte", "Frames to walk"),
            P("spd", "argShort", "Walk speed"),
            P("dir", "arg1", "DIRECTION_*")),
        Doc(0x8B, "SET_DIR_WAIT", "Sets facing and optionally waits.",
            P("wait", "argByte", "Wait frames"),
            P("dir", "argShort", "DIRECTION_*")),
        Doc(0x91, "ROTATE_TO", "Rotates to an absolute facing.",
            P("spd", "argByte", "Turn speed"),
            P("t", "argShort", "DIR_TRANS_*"),
            P("dir", "arg1", "DIRECTION_* target")),
        Doc(0x92, "ROTATE_RELATIVE", "Rotates using a relative turn from the current facing.",
            P("spd", "argByte", "Turn speed"),
            P("t", "argShort", "DIR_TRANS_*"),
            P("turn", "arg1", "Relative turn operand")),
        Doc(0x93, "ROTATE_TO_LIVES", "Rotates to face a lives actor.",
            P("spd", "argByte", "Turn speed"),
            P("t", "argShort", "DIR_TRANS_*"),
            P("id", "arg1", "Lives id")),
        Doc(0x94, "ROTATE_TO_LIVES2", "Rotates to face a lives actor (variant).",
            P("spd", "argByte", "Turn speed"),
            P("t", "argShort", "DIR_TRANS_*"),
            P("id", "arg1", "Lives id")),
        Doc(0x95, "ROTATE_TO_WAYPOINT", "Rotates to face a waypoint.",
            P("spd", "argByte", "Turn speed"),
            P("t", "argShort", "DIR_TRANS_*"),
            P("id", "arg1", "Waypoint id")),
        Doc(0x97, "CAMERA_SHAKE",
            "Starts or stops a camera shake overlay. Soft uses fixed amp/period; custom uses amp + period.",
            P("mode", "argShort", "CAMERA_SHAKE_OFF / _SOFT / _CUSTOM"),
            P("amp", "arg1", "Intensity for CUSTOM (ignored for OFF/SOFT)"),
            P("period", "arg2", "Frames between jitters for CUSTOM")),
        Doc(0x98, "CAMERA_INIT_PAN", "Begins a camera pan sequence."),
        Doc(0x99, "CAMERA_END_PAN", "Ends a camera pan sequence."),
        Doc(0x9A, "CAMERA_FOCUS_PLAYER", "Focuses the camera on the player."),
        Doc(0x9B, "CAMERA_FOLLOW", "Makes the camera follow at the given speed.",
            P("spd", "argShort", "Follow speed")),
        Doc(0xCF, "MSG_VAR", "Shows a variable / formatted message.",
            P("a", "argByte", "Mode"),
            P("b", "argShort", "Operand"),
            P("c", "arg1", "Operand")),
        Doc(0xD0, "VARIANT", "Begins a dialogue variant branch.",
            P("id", "argShort", "Variant id"),
            P("text", "string", "Dialogue string")),
        Doc(0xD1, "VARIANT_DEFAULT", "Default dialogue variant text.",
            P("text", "string", "Dialogue string")),
        Doc(0xD2, "ASK_DEBUG", "Debug ask prompt.",
            P("a", "argByte", "Mode"),
            P("b", "argShort", "Operand"),
            P("c", "arg1", "Operand"),
            P("text", "string", "Prompt text")),
        Doc(0xD3, "ASK1", "Ask prompt (style 1).",
            P("a", "argByte", "Mode"),
            P("b", "argShort", "Operand"),
            P("c", "arg1", "Operand"),
            P("text", "string", "Prompt text")),
        Doc(0xD4, "ASK2", "Ask prompt (style 2).",
            P("a", "argByte", "Mode"),
            P("b", "argShort", "Operand"),
            P("c", "arg1", "Operand"),
            P("text", "string", "Prompt text")),
        Doc(0xD5, "ASK3", "Ask prompt (style 3).",
            P("a", "argByte", "Mode"),
            P("b", "argShort", "Operand"),
            P("c", "arg1", "Operand"),
            P("text", "string", "Prompt text")),
        Doc(0xD6, "ASK1_VAR", "Ask prompt style 1 with variable operands.",
            P("a", "argByte", "Mode"),
            P("b", "argShort", "Operand"),
            P("c", "arg1", "Operand"),
            P("d", "arg2", "Operand")),
        Doc(0xD7, "ASK2_VAR", "Ask prompt style 2 with variable operands.",
            P("a", "argByte", "Mode"),
            P("b", "argShort", "Operand"),
            P("c", "arg1", "Operand"),
            P("d", "arg2", "Operand")),
        Doc(0xD8, "ASK3_VAR", "Ask prompt style 3 with variable operands.",
            P("a", "argByte", "Mode"),
            P("b", "argShort", "Operand"),
            P("c", "arg1", "Operand"),
            P("d", "arg2", "Operand")),
        Doc(0xD9, "CHOICE", "Adds a dialogue choice option.",
            P("id", "argShort", "Choice id"),
            P("text", "string", "Choice label")),
        Doc(0xDB, "WAIT", "Waits for a number of frames.",
            P("frames", "argShort", "Frames to wait")),
        Doc(0xDC, "WAIT_RANDOM", "Waits a random number of frames in [min, max].",
            P("min", "argShort", "Minimum frames"),
            P("max", "arg1", "Maximum frames")),
        Doc(0xDD, "STOP_ANIMATION_ON_CURRENT_FRAME", "Freezes animation on the current frame."),
        Doc(0xDE, "WAIT_EFFECT", "Waits until the lives emotion/sprite effect from EMOTION_EFFECT finishes."),
        Doc(0xDF, "WAIT_FADE", "Waits until the current screen fade finishes."),
        Doc(0xE0, "WAIT_BGM", "Waits related to background music.",
            P("music", "argShort", "MUS_* / wait operand")),
        Doc(0xE3, "AWAIT_CUE", "Waits for a cue id.",
            P("cue", "argShort", "Cue id")),
        Doc(0xE4, "ALERT_CUE", "Signals a cue id.",
            P("cue", "argShort", "Cue id")),
        Doc(0xE5, "AWAIT_CUE_COND", "Waits for a cue with a condition value.",
            P("a", "argShort", "Cue id / branch discriminant"),
            P("b", "argByte", "Condition value")),
        Doc(0xE6, "CALL_LABEL", "Calls a local label (returns later).",
            P("label", "argShort", "Label id")),
        Doc(0xE7, "JUMP_LABEL", "Jumps to a local label.",
            P("label", "argShort", "Label id")),
        Doc(0xE8, "CALL_SCRIPT", "Calls another script id.",
            P("script", "argShort", "ScriptID (END_TALK, COMMON_ENTER, …)")),
        Doc(0xE9, "JUMP_SCRIPT", "Jumps to another script id.",
            P("script", "argShort", "ScriptID (END_TALK, COMMON_ENTER, …)")),
        Doc(0xEA, "CALL_STATION", "Calls a station script.",
            P("station", "argShort", "Station id"),
            P("flags", "argByte", "Flags")),
        Doc(0xEB, "JUMP_STATION", "Jumps to a station script.",
            P("station", "argShort", "Station id"),
            P("flags", "argByte", "Flags")),
        Doc(0xEE, "RET_DIRECT", "Returns immediately from the current script frame."),
        Doc(0xEF, "RET", "Returns from the current script / label call."),
        Doc(0xF0, "HALT", "Halts script execution."),
        Doc(0xF1, "END_DELETE", "Ends and deletes the running actor script."),
        Doc(0xF4, "LABEL", "Defines a local label target.",
            P("label", "argShort", "Label id")),
        Doc(0xF6, "DEBUGINFO_O",
            "Debug marker recording the original source line. No gameplay effect — the interpreter skips it.",
            P("originalLineNum", "argShort", "Line number from the original script source")),
    ];

    private static ScriptCommandDoc Doc(byte op, string name, string summary, params ScriptCommandParamDoc[] parameters) =>
        new(op, name, summary, parameters);

    private static ScriptCommandParamDoc P(string name, string field, string meaning) =>
        new(name, field, meaning);
}
