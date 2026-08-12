namespace RescueEditor.Core;

public readonly record struct DialogueSpeakerInfo(int SpeakerId, int Emotion, short Species);

/// <summary>
/// Resolves speaker id / emotion / species for a MSG command from preceding script ops.
/// </summary>
public static class DialogueSpeakerResolver
{
    public const byte OpPortraitBind = 0x2D;
    public const byte OpPortrait = 0x2E;
    public const int DefaultLookback = 64;

    private static readonly HashSet<byte> MessageOps =
    [
        0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39,
    ];

    public static DialogueSpeakerInfo? TryResolve(
        IReadOnlyList<ScriptCommandData> commands,
        int msgIndex,
        Func<int, short>? resolveTypeSpecies = null,
        Func<int, short>? resolveLiveSpecies = null)
    {
        if (msgIndex < 0 || msgIndex >= commands.Count)
            return null;

        var msg = commands[msgIndex];
        if (!MessageOps.Contains(msg.Op))
            return null;

        var speakerId = (int)msg.ArgShort;
        if (speakerId < 0)
            return null;

        var emotion = 0;
        short species = 0;
        int? boundLive = null;
        int? boundType = null;

        for (var i = 0; i <= msgIndex; i++)
        {
            var cmd = commands[i];
            if (cmd.Op == OpPortraitBind && cmd.ArgShort == speakerId)
            {
                var mode = cmd.ArgByte;
                if (mode is 7 or 8 or 1 or 2 or 4 or 5)
                {
                    // Slot bound to a live index; without actor context treat speaker as live.
                    boundLive = speakerId;
                    boundType = null;
                }
                else if (mode is 3 or 6 or 9)
                {
                    boundType = (int)cmd.Arg1;
                    boundLive = null;
                }
            }
            else if (cmd.Op == OpPortrait && cmd.ArgShort == speakerId)
            {
                emotion = (int)cmd.Arg1;
                if (emotion == -2)
                    return null; // telepathy / hidden face
            }
        }

        if (boundType is int typeId && resolveTypeSpecies is not null)
            species = resolveTypeSpecies(typeId);
        else if (resolveLiveSpecies is not null)
            species = resolveLiveSpecies(boundLive ?? speakerId);

        return new DialogueSpeakerInfo(speakerId, emotion < 0 ? 0 : emotion, species);
    }

    /// <summary>
    /// Read the MSG at <paramref name="commandOffset"/> and look back for PORTRAIT / binds.
    /// </summary>
    public static DialogueSpeakerInfo? TryResolve(
        RomImage rom,
        int commandOffset,
        RomProfile? profile = null,
        SceneDatabase? scenes = null,
        int lookbackCommands = DefaultLookback)
    {
        if (!rom.IsRangeValid(commandOffset, ScriptCommandData.Size))
            return null;

        var commands = new List<ScriptCommandData>();
        var start = Math.Max(0, commandOffset - lookbackCommands * ScriptCommandData.Size);
        // Keep 16-byte alignment with the MSG command.
        start = commandOffset - ((commandOffset - start) / ScriptCommandData.Size) * ScriptCommandData.Size;
        for (var off = start; off <= commandOffset; off += ScriptCommandData.Size)
        {
            if (!rom.IsRangeValid(off, ScriptCommandData.Size))
                continue;
            commands.Add(ScriptCommandData.Read(rom, off));
        }

        if (commands.Count == 0)
            return null;

        var msgIndex = commands.Count - 1;
        profile ??= scenes?.Profile ?? RomProfile.Us10;

        return TryResolve(
            commands,
            msgIndex,
            resolveTypeSpecies: typeId => GroundLivesTypes.ResolvePlaySpecies(rom, profile, typeId, appearance: null),
            resolveLiveSpecies: liveId => ResolveLiveSpecies(rom, profile, scenes, commandOffset, liveId));
    }

    private static short ResolveLiveSpecies(
        RomImage rom,
        RomProfile profile,
        SceneDatabase? scenes,
        int commandOffset,
        int liveId)
    {
        if (scenes is null || liveId < 0)
            return 0;

        foreach (var scene in scenes.Scenes)
        {
            foreach (var group in scene.Groups)
            foreach (var sector in group.Sectors)
            {
                if (!SectorReferencesCommand(rom, sector, commandOffset))
                    continue;
                if (liveId >= sector.Lives.Count)
                    continue;
                var live = sector.Lives[liveId];
                var species = GroundLivesTypes.ResolvePlaySpecies(rom, profile, live.TypeId, appearance: null);
                if (species > 0)
                    return species;
            }
        }

        return 0;
    }

    private static bool SectorReferencesCommand(RomImage rom, SceneSector sector, int commandOffset)
    {
        foreach (var station in sector.Stations)
        {
            if (station.ScriptOffset < 0)
                continue;
            if (CommandBelongsToScript(rom, station.ScriptOffset, commandOffset))
                return true;
        }

        foreach (var entity in sector.Lives.Concat(sector.Objects).Concat(sector.Effects).Concat(sector.Events))
        {
            foreach (var scriptOff in entity.ScriptOffsets)
            {
                if (scriptOff >= 0 && CommandBelongsToScript(rom, scriptOff, commandOffset))
                    return true;
            }
        }

        return false;
    }

    private static bool CommandBelongsToScript(RomImage rom, int scriptOffset, int commandOffset)
    {
        if (commandOffset < scriptOffset)
            return false;
        if ((commandOffset - scriptOffset) % ScriptCommandData.Size != 0)
            return false;

        var commands = ScriptCodec.ReadScript(rom, scriptOffset);
        return commands.Any(c => c.RomOffset == commandOffset);
    }
}
