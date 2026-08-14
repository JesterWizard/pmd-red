namespace RescueEditor.Core;

/// <summary>
/// Maps MSG/PORTRAIT speaker ids (name slots) to lives via UPDATE_NAME in the same group/sector.
/// Speaker ids are not live indices; e.g. Charizard's script binds slot 4 with UPDATE_NAME_ACTOR_SELF.
/// </summary>
public sealed class SpeakerSlotMap
{
    public const byte OpUpdateName = 0x2D;

    private readonly Dictionary<(int Group, int Sector, int Slot), int> _liveBySlot = new();
    private readonly Dictionary<(int Group, int Sector, int Slot), int> _typeBySlot = new();

    public static SpeakerSlotMap FromSections(IReadOnlyList<ScriptSourceSection> sections)
    {
        var map = new SpeakerSlotMap();
        foreach (var section in sections)
        {
            if (section.Group < 0)
                continue;
            foreach (var sourceCommand in section.Commands)
            {
                var command = sourceCommand.Command;
                if (command.Op != OpUpdateName)
                    continue;
                var key = (section.Group, section.Sector, (int)command.ArgShort);
                var mode = command.ArgByte;
                if (IsLiveBind(mode) && section.Kind == "live")
                {
                    map._liveBySlot[key] = section.Index;
                    map._typeBySlot.Remove(key);
                }
                else if (IsTypeBind(mode))
                {
                    map._typeBySlot[key] = (int)command.Arg1;
                    map._liveBySlot.Remove(key);
                }
            }
        }

        return map;
    }

    public static SpeakerSlotMap FromScene(Scene scene)
    {
        var sections = new List<ScriptSourceSection>();
        foreach (var group in scene.Groups)
        {
            foreach (var sector in group.Sectors)
            {
                foreach (var station in sector.Stations)
                {
                    var section = new ScriptSourceSection
                    {
                        Kind = "station",
                        Group = sector.Group,
                        Sector = sector.Sector,
                    };
                    foreach (var command in station.Commands)
                        section.Commands.Add(new ScriptSourceCommand { Command = command });
                    sections.Add(section);
                }

                for (var i = 0; i < sector.Lives.Count; i++)
                {
                    foreach (var slot in sector.Lives[i].Scripts)
                    {
                        var section = new ScriptSourceSection
                        {
                            Kind = "live",
                            Group = sector.Group,
                            Sector = sector.Sector,
                            Index = i,
                        };
                        foreach (var command in slot.Commands)
                            section.Commands.Add(new ScriptSourceCommand { Command = command });
                        sections.Add(section);
                    }
                }
            }
        }

        return FromSections(sections);
    }

    /// <summary>Copy binds from <paramref name="other"/>, overwriting on conflict.</summary>
    public SpeakerSlotMap Overlay(SpeakerSlotMap other)
    {
        foreach (var pair in other._liveBySlot)
        {
            _liveBySlot[pair.Key] = pair.Value;
            _typeBySlot.Remove(pair.Key);
        }

        foreach (var pair in other._typeBySlot)
        {
            _typeBySlot[pair.Key] = pair.Value;
            _liveBySlot.Remove(pair.Key);
        }

        return this;
    }

    public static bool IsLiveBind(byte mode) => mode is 1 or 2 or 4 or 5 or 7 or 8;

    public static bool IsTypeBind(byte mode) => mode is 3 or 6 or 9;

    public bool TryResolve(
        int group,
        int sector,
        int slot,
        ScriptSceneCast? cast,
        out ScriptCastMember? member,
        out int? liveIndex,
        out int speciesId,
        out int? typeId)
    {
        member = null;
        liveIndex = null;
        speciesId = 0;
        typeId = null;
        var key = (group, sector, slot);

        if (_typeBySlot.TryGetValue(key, out var boundType))
        {
            typeId = boundType;
            if (cast is not null && cast.TryGetByTypeId(boundType, out var typed))
            {
                member = typed;
                liveIndex = typed.LiveIndex;
                speciesId = typed.SpeciesId;
            }

            return true;
        }

        if (_liveBySlot.TryGetValue(key, out var boundLive))
        {
            liveIndex = boundLive;
            if (cast is not null && cast.TryGet(boundLive, out var bound))
            {
                member = bound;
                speciesId = bound.SpeciesId;
            }

            return true;
        }

        // Unbound slots may still be live indices (short station-only scripts).
        if (cast is not null && cast.TryGet(slot, out var fallback))
        {
            member = fallback;
            liveIndex = fallback.LiveIndex;
            speciesId = fallback.SpeciesId;
            return true;
        }

        return false;
    }
}
