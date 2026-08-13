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
    private static readonly ScriptArgBinding[] NoArgs = [];

    public static IReadOnlyList<ScriptArgBinding>? GetSemanticFields(byte op) => op switch
    {
        0x02 => // NEXT_DUNGEON(u, d)
        [
            new("Flags", ScriptArgField.ArgShort),
            new("Dungeon", ScriptArgField.Arg1),
        ],
        0x08 => // SELECT_MAP
        [
            new("Map", ScriptArgField.Arg1),
        ],
        0x09 => // SELECT_GROUND
        [
            new("Ground", ScriptArgField.Arg1),
        ],
        0x0A => // SELECT_DUNGEON(m, d, f, b)
        [
            new("Flags", ScriptArgField.ArgByte, "hex"),
            new("Floor", ScriptArgField.ArgShort),
            new("Dungeon", ScriptArgField.Arg1),
            new("Map", ScriptArgField.Arg2),
        ],
        0x0B => // SELECT_WEATHER
        [
            new("Weather", ScriptArgField.Arg1),
        ],
        0x0C or 0x0D or 0x0E or 0x0F or 0x10 => // SELECT_* group/sector
        [
            new("Group", ScriptArgField.ArgShort),
            new("Sector", ScriptArgField.ArgByte),
        ],
        0x19 or 0x1A => // SPAWN_OBJECT / SPAWN_EFFECT(k,d,g,s)
        [
            new("Sector", ScriptArgField.ArgByte),
            new("Group", ScriptArgField.ArgShort),
            new("Dir", ScriptArgField.Arg1),
            new("Kind", ScriptArgField.Arg2),
        ],
        0x1B => // EXECUTE_FUNCTION(f)
        [
            new("Function", ScriptArgField.ArgShort),
        ],
        0x1C => // EXECUTE_SUBROUTINE(f)
        [
            new("Subroutine", ScriptArgField.ArgShort),
        ],
        0x1D or 0x1E => // EXECUTE_STATION / EXECUTE_SUBSTATION(m,g,s)
        [
            new("Sector", ScriptArgField.ArgByte),
            new("Group", ScriptArgField.ArgShort),
            new("Station", ScriptArgField.Arg1),
        ],
        0x22 or 0x23 or 0x25 or 0x26 => // FADE_IN/OUT, FADE2_IN/OUT(wait, f)
        [
            new("Wait", ScriptArgField.ArgByte),
            new("Duration", ScriptArgField.ArgShort),
        ],
        0x24 => // FADE_BRIGHTNESS(wait, duration, a, b)
        [
            new("Wait", ScriptArgField.ArgByte),
            new("Duration", ScriptArgField.ArgShort),
            new("From", ScriptArgField.Arg1),
            new("To", ScriptArgField.Arg2),
        ],
        0x27 or 0x28 => // FLASH_FROM / FLASH_TO
        [
            new("Wait", ScriptArgField.ArgByte),
            new("Kind", ScriptArgField.ArgShort),
            new("Frames", ScriptArgField.Arg1),
            new("Rgb", ScriptArgField.Arg2, "hex"),
        ],
        0x2B => // TEXTBOX_AUTO_PRESS
        [
            new("EndFrames", ScriptArgField.Arg1),
            new("MidFrames", ScriptArgField.Arg2),
        ],
        0x2D => // UPDATE_NAME
        [
            new("Kind", ScriptArgField.ArgByte),
            new("Slot", ScriptArgField.ArgShort),
            new("Id", ScriptArgField.Arg1),
        ],
        0x2E => // PORTRAIT(place, id, emotion)
        [
            new("Place", ScriptArgField.ArgByte),
            new("Speaker", ScriptArgField.ArgShort),
            new("Emotion", ScriptArgField.Arg1),
        ],
        0x2F => // PORTRAIT_POS(id, x, y)
        [
            new("Speaker", ScriptArgField.ArgShort),
            new("X", ScriptArgField.Arg1),
            new("Y", ScriptArgField.Arg2),
        ],
        0x30 or 0x31 => // TEXTBOX_CLEAR / TEXTBOX_CLEAR2
            NoArgs,
        0x32 or 0x35 or 0x36 or 0x37 or 0x38 => // MSG_* text only
        [
            new("Text", ScriptArgField.ArgPtr, "hex"),
        ],
        0x33 or 0x34 => // MSG_QUIET / MSG_NPC
        [
            new("Speaker", ScriptArgField.ArgShort),
            new("Text", ScriptArgField.ArgPtr, "hex"),
        ],
        0x39 => // MSG_ON_BG_AUTO(u, msg)
        [
            new("Timing", ScriptArgField.ArgShort),
            new("Text", ScriptArgField.ArgPtr, "hex"),
        ],
        0x44 or 0x46 => // BGM_SWITCH / BGM_QUEUE
        [
            new("Music", ScriptArgField.Arg1),
        ],
        0x45 => // BGM_FADEIN(f,i)
        [
            new("Fade", ScriptArgField.ArgShort),
            new("Music", ScriptArgField.Arg1),
        ],
        0x47 => // BGM_STOP
            NoArgs,
        0x48 => // BGM_FADEOUT(f)
        [
            new("Fade", ScriptArgField.ArgShort),
        ],
        0x49 or 0x4C => // FANFARE_PLAY / FANFARE_PLAY2
        [
            new("Fanfare", ScriptArgField.Arg1),
        ],
        0x4E => // FANFARE_FADEOUT2
        [
            new("Fade", ScriptArgField.ArgShort),
            new("Fanfare", ScriptArgField.Arg1),
        ],
        0x4F => // CLEAR_HITBOX
            NoArgs,
        0x51 => // SET_POSITION_BOUNDS
        [
            new("Link", ScriptArgField.ArgShort),
        ],
        0x52 or 0x53 => // SET_OBJ_FLAGS / CLEAR_OBJ_FLAGS
        [
            new("Flags", ScriptArgField.Arg1, "hex"),
        ],
        0x54 => // SELECT_ANIMATION
        [
            new("Animation", ScriptArgField.ArgShort),
        ],
        0x56 => // EMOTION_EFFECT / EMOTION_EFFECT_EX
        [
            new("Unk", ScriptArgField.ArgShort),
            new("Effect", ScriptArgField.Arg1),
        ],
        0x59 => // MOVE_RELATIVE_POS(wait, h, v)
        [
            new("Wait", ScriptArgField.ArgByte),
            new("X", ScriptArgField.ArgShort),
            new("Y", ScriptArgField.Arg1),
        ],
        0x5B => // WARP_WAYPOINT(u,w)
        [
            new("Mode", ScriptArgField.ArgByte),
            new("Waypoint", ScriptArgField.Arg1),
        ],
        0x60 => // SET_HEIGHT / SET_HEIGHT_WAIT
        [
            new("Wait", ScriptArgField.ArgByte),
            new("Height", ScriptArgField.Arg1),
        ],
        0x62 or 0x6A or 0x84 => // MOVE_RELATIVE / WALK_RELATIVE / WALK_RELATIVE_DIST
        [
            new("Speed", ScriptArgField.ArgShort),
            new("X", ScriptArgField.Arg1),
            new("Y", ScriptArgField.Arg2),
        ],
        0x68 or 0x70 => // HEIGHT_TO_2 / HEIGHT_TO
        [
            new("Speed", ScriptArgField.ArgShort),
            new("Height", ScriptArgField.Arg1),
        ],
        0x6B or 0x7A => // WALK_GRID / WALK_DIRECT
        [
            new("Speed", ScriptArgField.ArgShort),
            new("Target", ScriptArgField.Arg1),
        ],
        0x86 => // CAMERA_PAN(spd, link)
        [
            new("Speed", ScriptArgField.ArgShort),
            new("Link", ScriptArgField.Arg1),
        ],
        0x89 => // WALK_DIRECTION
        [
            new("Frames", ScriptArgField.ArgByte),
            new("Speed", ScriptArgField.ArgShort),
            new("Direction", ScriptArgField.Arg1),
        ],
        0x8B => // SET_DIR_WAIT(d, f) → { f, d, 0, 0 }
        [
            new("Wait", ScriptArgField.ArgByte),
            new("Direction", ScriptArgField.ArgShort),
        ],
        0x91 => // ROTATE_TO(spd,t,o)
        [
            new("Speed", ScriptArgField.ArgByte),
            new("Transition", ScriptArgField.ArgShort),
            new("Direction", ScriptArgField.Arg1),
        ],
        0x92 => // ROTATE_RELATIVE(spd,t,turn)
        [
            new("Speed", ScriptArgField.ArgByte),
            new("Transition", ScriptArgField.ArgShort),
            new("Turn", ScriptArgField.Arg1),
        ],
        0x93 or 0x94 => // ROTATE_TO_LIVES / ROTATE_TO_LIVES2
        [
            new("Speed", ScriptArgField.ArgByte),
            new("Transition", ScriptArgField.ArgShort),
            new("Lives", ScriptArgField.Arg1),
        ],
        0x95 => // ROTATE_TO_WAYPOINT
        [
            new("Speed", ScriptArgField.ArgByte),
            new("Transition", ScriptArgField.ArgShort),
            new("Waypoint", ScriptArgField.Arg1),
        ],
        0x97 => // CAMERA_SHAKE
        [
            new("Mode", ScriptArgField.ArgShort),
            new("Amp", ScriptArgField.Arg1),
            new("Period", ScriptArgField.Arg2),
        ],
        0x98 or 0x99 or 0x9A => // CAMERA_INIT_PAN / END_PAN / FOCUS_PLAYER
            NoArgs,
        0x9B => // CAMERA_FOLLOW
        [
            new("Speed", ScriptArgField.ArgShort),
        ],
        0xA4 or 0xA5 => // RESET_ARRAY / CLEAR_ARRAY(v)
        [
            new("Var", ScriptArgField.ArgShort),
        ],
        0xA6 => // UPDATE_VARINT(o,v,i)
        [
            new("Op", ScriptArgField.ArgByte),
            new("Var", ScriptArgField.ArgShort),
            new("Value", ScriptArgField.Arg1),
        ],
        0xA7 => // UPDATE_VARVAR(o,a,b)
        [
            new("Op", ScriptArgField.ArgByte),
            new("VarA", ScriptArgField.ArgShort),
            new("VarB", ScriptArgField.Arg1),
        ],
        0xA8 => // SET_ARRAYVAL(v,i,x)
        [
            new("Var", ScriptArgField.ArgShort),
            new("Index", ScriptArgField.Arg1),
            new("Value", ScriptArgField.Arg2),
        ],
        0xA9 => // SCENARIO_CALC(v,a,b)
        [
            new("Var", ScriptArgField.ArgShort),
            new("A", ScriptArgField.Arg1),
            new("B", ScriptArgField.Arg2),
        ],
        0xAA => // SCENARIO_ADVANCE(v,a)
        [
            new("Var", ScriptArgField.ArgShort),
            new("Amount", ScriptArgField.Arg1),
        ],
        0xAB => // SET_DUNGEON_RES(r,e)
        [
            new("Result", ScriptArgField.ArgShort),
            new("Enter", ScriptArgField.Arg1),
        ],
        0xAC => // SET_PLAYER_KIND(k)
        [
            new("Kind", ScriptArgField.ArgShort),
        ],
        0xAD => // UNLOCK_FRIEND_AREA(a)
        [
            new("Area", ScriptArgField.ArgShort),
        ],
        0xB3 => // JUMPIF_EQUAL(v,i,l) → { l, v, i, 0 }
        [
            new("Label", ScriptArgField.ArgByte),
            new("Var", ScriptArgField.ArgShort),
            new("Value", ScriptArgField.Arg1),
        ],
        0xB4 or 0xB5 or 0xB7 => // JUMPIF / JUMPIF_2 / JUMPIF_SUM(o,*,*,l)
        [
            new("Compare", ScriptArgField.ArgByte),
            new("Label", ScriptArgField.ArgShort),
            new("Left", ScriptArgField.Arg1),
            new("Right", ScriptArgField.Arg2),
        ],
        0xB6 => // JUMPIF_ARRAY(v,i,l) → { 0, l, v, i }
        [
            new("Label", ScriptArgField.ArgShort),
            new("Var", ScriptArgField.Arg1),
            new("Index", ScriptArgField.Arg2),
        ],
        0xB8 or 0xB9 or 0xBA => // JUMPIF_SCENE_*(v,a,b,l) → { l, v, a, b }
        [
            new("Label", ScriptArgField.ArgByte),
            new("Var", ScriptArgField.ArgShort),
            new("A", ScriptArgField.Arg1),
            new("B", ScriptArgField.Arg2),
        ],
        0xBB => // JUMPIF_SCENARIOCHECK(i,l) → { l, i, 0, 0 }
        [
            new("Label", ScriptArgField.ArgByte),
            new("Quest", ScriptArgField.ArgShort),
        ],
        0xBC => // JUMPIF_CUTSCENE_FLAG(f,l)
        [
            new("Label", ScriptArgField.ArgByte),
            new("Flag", ScriptArgField.ArgShort),
        ],
        0xBF => // JUMPIF_HASITEM(i,l)
        [
            new("Label", ScriptArgField.ArgByte),
            new("Item", ScriptArgField.ArgShort),
        ],
        0xCF => // MSG_VAR(b,v,a)
        [
            new("Mode", ScriptArgField.ArgByte),
            new("Var", ScriptArgField.ArgShort),
            new("Arg", ScriptArgField.Arg1),
        ],
        0xD0 => // VARIANT(c,s)
        [
            new("Id", ScriptArgField.ArgShort),
            new("Text", ScriptArgField.ArgPtr, "hex"),
        ],
        0xD1 => // VARIANT_DEFAULT(s)
        [
            new("Text", ScriptArgField.ArgPtr, "hex"),
        ],
        0xD2 or 0xD3 or 0xD4 or 0xD5 => // ASK_*
        [
            new("Mode", ScriptArgField.ArgByte),
            new("Choice", ScriptArgField.ArgShort),
            new("Arg", ScriptArgField.Arg1),
            new("Text", ScriptArgField.ArgPtr, "hex"),
        ],
        0xD6 or 0xD7 or 0xD8 => // ASK*_VAR
        [
            new("Mode", ScriptArgField.ArgByte),
            new("Choice", ScriptArgField.ArgShort),
            new("Arg", ScriptArgField.Arg1),
            new("Var", ScriptArgField.Arg2),
        ],
        0xD9 => // CHOICE(h,s)
        [
            new("Id", ScriptArgField.ArgShort),
            new("Text", ScriptArgField.ArgPtr, "hex"),
        ],
        0xDB => // WAIT(f)
        [
            new("Frames", ScriptArgField.ArgShort),
        ],
        0xDC => // WAIT_RANDOM(a,b)
        [
            new("Min", ScriptArgField.ArgShort),
            new("Max", ScriptArgField.Arg1),
        ],
        0xDD or 0xDE or 0xDF => // STOP_ANIMATION… / WAIT_EFFECT / WAIT_FADE
            NoArgs,
        0xE0 => // WAIT_BGM
        [
            new("Music", ScriptArgField.ArgShort),
        ],
        0xE3 or 0xE4 => // AWAIT_CUE / ALERT_CUE
        [
            new("Cue", ScriptArgField.ArgShort),
        ],
        0xE5 => // AWAIT_CUE_COND(a,b) → { b, a, 0, 0 }
        [
            new("Cond", ScriptArgField.ArgByte),
            new("Cue", ScriptArgField.ArgShort),
        ],
        0xE6 or 0xE7 or 0xF4 => // CALL_LABEL / JUMP_LABEL / LABEL
        [
            new("Label", ScriptArgField.ArgShort),
        ],
        0xE8 or 0xE9 => // CALL_SCRIPT / JUMP_SCRIPT
        [
            new("Script", ScriptArgField.ArgShort),
        ],
        0xEA or 0xEB => // CALL_STATION / JUMP_STATION(g,s) → { s, g, -1, 0 }
        [
            new("Sector", ScriptArgField.ArgByte),
            new("Group", ScriptArgField.ArgShort),
        ],
        0xEC => // EXECUTE_MAP_VAR(v)
        [
            new("Var", ScriptArgField.ArgShort),
        ],
        0xED or 0xEE or 0xEF or 0xF0 or 0xF1 => // RESET_CALLER / RET* / HALT / END_DELETE
            NoArgs,
        0xF6 => // DEBUGINFO / DEBUGINFO_O
        [
            new("Line", ScriptArgField.ArgShort),
            new("File", ScriptArgField.ArgPtr, "hex"),
        ],
        _ => null,
    };

    public static string CommandName(ScriptCommandData command) =>
        ScriptOpcodeNames.GetName(command.Op);

    public static string ArgumentSummary(ScriptCommandData command)
    {
        var fields = GetSemanticFields(command.Op);
        if (fields is null)
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

        if (fields.Count == 0)
            return string.Empty;

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
