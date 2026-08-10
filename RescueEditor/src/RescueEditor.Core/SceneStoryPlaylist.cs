namespace RescueEditor.Core;

/// <summary>One playable ground station beat in story discovery order.</summary>
public readonly record struct ScenePlayBeat(int MapId, int Group, int Sector, string EventName)
{
    public string ShortEventName =>
        EventName.StartsWith("EVENT_", StringComparison.Ordinal)
            ? EventName["EVENT_".Length..]
            : EventName;

    public string FormatLabel(string? sceneName = null)
    {
        var place = string.IsNullOrWhiteSpace(sceneName) ? $"Map {MapId}" : sceneName;
        return $"{place} · g{Group}/s{Sector} · {ShortEventName}";
    }
}

/// <summary>
/// Chronological Scene Play playlist derived from <c>EVENT_M*</c> function scripts
/// (<c>EXECUTE_STATION</c> / <c>EXECUTE_SUBSTATION</c> targets in table order).
/// </summary>
public sealed class SceneStoryPlaylist
{
    public const byte OpExecuteStation = 0x1D;
    public const byte OpExecuteSubstation = 0x1E;
    public const byte OpJumpScript = 0xE9;

    private SceneStoryPlaylist(IReadOnlyList<ScenePlayBeat> beats) => Beats = beats;

    public IReadOnlyList<ScenePlayBeat> Beats { get; }

    public static SceneStoryPlaylist Empty { get; } = new([]);

    public static SceneStoryPlaylist FromEventScripts(IEnumerable<ScriptRefData> functionScripts)
    {
        var beats = new List<ScenePlayBeat>();
        var seen = new HashSet<(int Map, int Group, int Sector)>();

        foreach (var script in functionScripts)
        {
            if (script.Name is null ||
                !script.Name.StartsWith("EVENT_M", StringComparison.Ordinal))
                continue;

            foreach (var cmd in EnumerateEventBody(script.Commands))
            {
                if (cmd.Op is not (OpExecuteStation or OpExecuteSubstation))
                    continue;

                var mapId = cmd.Arg1;
                var group = cmd.ArgShort;
                var sector = cmd.ArgByte;
                var key = (mapId, group, (int)sector);
                if (!seen.Add(key))
                    continue;

                beats.Add(new ScenePlayBeat(mapId, group, sector, script.Name));
            }
        }

        return new SceneStoryPlaylist(beats);
    }

    /// <summary>
    /// Build from ROM function-script table. Loads commands for <c>EVENT_M*</c> entries only.
    /// </summary>
    public static SceneStoryPlaylist Build(RomImage rom, SceneDatabase database)
    {
        var profile = database.Profile;
        if (!profile.Anchors.TryGetValue("gFunctionScriptTable", out var table))
            return Empty;

        var scripts = new List<ScriptRefData>();
        for (var i = 0; i < profile.FunctionScriptCount; i++)
        {
            var script = ScriptRefData.Read(rom, table + i * ScriptRefData.Size, loadCommands: false);
            if (!script.Name.StartsWith("EVENT_M", StringComparison.Ordinal))
                continue;
            if (script.ScriptOffset >= 0)
                script.Commands = ScriptCodec.ReadScript(rom, script.ScriptOffset);
            scripts.Add(script);
        }

        return FromEventScripts(scripts);
    }

    public int FindIndex(int mapId, int group, int sector, bool fallbackToMapOnly = false)
    {
        for (var i = 0; i < Beats.Count; i++)
        {
            var beat = Beats[i];
            if (beat.MapId == mapId && beat.Group == group && beat.Sector == sector)
                return i;
        }

        if (!fallbackToMapOnly)
            return -1;

        for (var i = 0; i < Beats.Count; i++)
        {
            if (Beats[i].MapId == mapId)
                return i;
        }

        return -1;
    }

    /// <summary>
    /// Walk the event body until JUMP_SCRIPT / RET / HALT so adjacent ROM scripts do not bleed in.
    /// </summary>
    internal static IEnumerable<ScriptCommandData> EnumerateEventBody(IEnumerable<ScriptCommandData>? commands)
    {
        if (commands is null)
            yield break;

        foreach (var cmd in commands)
        {
            yield return cmd;
            if (cmd.Op == OpJumpScript || ScriptOpcodeNames.TerminatorOps.Contains(cmd.Op))
                yield break;
        }
    }
}

/// <summary>Mutable index into a <see cref="SceneStoryPlaylist"/>.</summary>
public sealed class ScenePlayCursor
{
    public ScenePlayCursor(SceneStoryPlaylist playlist, int startIndex = 0)
    {
        Playlist = playlist ?? throw new ArgumentNullException(nameof(playlist));
        if (playlist.Beats.Count == 0)
        {
            Index = 0;
            return;
        }

        Index = Math.Clamp(startIndex, 0, playlist.Beats.Count - 1);
    }

    public SceneStoryPlaylist Playlist { get; }
    public int Index { get; private set; }

    public ScenePlayBeat Current =>
        Playlist.Beats.Count == 0
            ? default
            : Playlist.Beats[Index];

    public bool CanGoBack => Playlist.Beats.Count > 0 && Index > 0;
    public bool CanGoNext => Playlist.Beats.Count > 0 && Index + 1 < Playlist.Beats.Count;

    public bool TryMove(int delta)
    {
        if (Playlist.Beats.Count == 0)
            return false;
        var next = Index + delta;
        if (next < 0 || next >= Playlist.Beats.Count)
            return false;
        Index = next;
        return true;
    }

    public bool TrySelect(int index)
    {
        if (index < 0 || index >= Playlist.Beats.Count)
            return false;
        Index = index;
        return true;
    }
}
