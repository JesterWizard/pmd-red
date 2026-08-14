using System.Globalization;
using System.Text;

namespace RescueEditor.Core;

public sealed record EventEditorRow(
    int RowIndex,
    int SectionIndex,
    int CommandIndex,
    string SectionKind,
    int Group,
    int Sector,
    int SiteIndex,
    string SectionIdentity,
    string SectionName,
    byte Op,
    string OpcodeName,
    string Description,
    string ParameterBrackets,
    string? DialogueSnippet,
    int? SpeakerId,
    string? SpeakerName,
    int SourceLine,
    ScriptCommandData Command,
    ScriptSourceCommand SourceCommand)
{
    public string DisplayLine
    {
        get
        {
            var builder = new StringBuilder();
            builder.Append(Description);
            if (!string.IsNullOrEmpty(SpeakerName))
                builder.Append("  ").Append(SpeakerName);
            if (!string.IsNullOrEmpty(ParameterBrackets))
                builder.Append("  ").Append(ParameterBrackets);
            if (!string.IsNullOrEmpty(DialogueSnippet))
                builder.Append("  \"").Append(Snippet(DialogueSnippet, 48)).Append('"');
            builder.Append("  (").Append(OpcodeName).Append(')');
            return builder.ToString();
        }
    }

    public EventEditorVisual Visual => EventEditorVisuals.Classify(Command, SpeakerId, PortraitEmotion);

    public int PortraitEmotion { get; init; }

    /// <summary>Live index bound to <see cref="SpeakerId"/> via UPDATE_NAME.</summary>
    public int? ResolvedLiveIndex { get; init; }

    /// <summary>Species for the bound speaker, or 0 if unknown.</summary>
    public int ResolvedSpeciesId { get; init; }

    private static string Snippet(string text, int max)
    {
        var flat = text.Replace('\n', ' ').Replace('\r', ' ').Trim();
        return flat.Length <= max ? flat : flat[..(max - 3)] + "...";
    }
}

public readonly record struct EventEditorScriptChoice(
    int SectionIndex,
    string Label,
    string Kind,
    int Group,
    int Sector,
    int SiteIndex);

/// <summary>FEBuilder-style high-level rows over parsed station/entity scripts.</summary>
public static class EventEditorList
{
    public static bool TryBuild(
        string source,
        IReadOnlyDictionary<int, DialogueString>? dialogue,
        ScriptNamedDefinitions? names,
        ScriptSceneCast? cast,
        out IReadOnlyList<EventEditorRow> rows,
        out ScriptSourceParseResult parsed,
        Scene? scene = null,
        Func<int, short>? resolveTypeSpecies = null,
        Func<short, string>? prettySpecies = null)
    {
        parsed = SceneScriptSource.Parse(source, dialogue, names);
        if (!parsed.Ok)
        {
            rows = [];
            return false;
        }

        rows = Build(parsed, dialogue, names, cast, scene, resolveTypeSpecies, prettySpecies);
        return true;
    }

    public static IReadOnlyList<EventEditorRow> Build(
        ScriptSourceParseResult parsed,
        IReadOnlyDictionary<int, DialogueString>? dialogue = null,
        ScriptNamedDefinitions? names = null,
        ScriptSceneCast? cast = null,
        Scene? scene = null,
        Func<int, short>? resolveTypeSpecies = null,
        Func<short, string>? prettySpecies = null)
    {
        var rows = new List<EventEditorRow>();
        var slots = SpeakerSlotMap.FromSections(parsed.Sections);
        if (scene is not null)
            slots = SpeakerSlotMap.FromScene(scene).Overlay(slots);
        for (var sectionIndex = 0; sectionIndex < parsed.Sections.Count; sectionIndex++)
        {
            var section = parsed.Sections[sectionIndex];
            if (section.Kind is "commands" && section.Commands.Count == 0 && parsed.Sections.Count > 1)
                continue;
            var identity = FormatIdentity(section);
            int? lastSpeaker = null;
            var lastEmotion = 0;
            for (var commandIndex = 0; commandIndex < section.Commands.Count; commandIndex++)
            {
                var sourceCommand = section.Commands[commandIndex];
                if (SpeakerId(sourceCommand.Command) is int speaker)
                {
                    lastSpeaker = speaker;
                    if (sourceCommand.Command.Op == 0x2E)
                        lastEmotion = sourceCommand.Command.Arg1;
                }

                rows.Add(BuildRow(
                    rows.Count,
                    sectionIndex,
                    commandIndex,
                    section,
                    identity,
                    sourceCommand,
                    dialogue,
                    names,
                    cast,
                    slots,
                    lastSpeaker,
                    lastEmotion,
                    resolveTypeSpecies,
                    prettySpecies));
            }
        }

        return rows;
    }

    public static int FindRowIndex(
        IReadOnlyList<EventEditorRow> rows,
        string kind,
        int group,
        int sector,
        int siteIndex,
        int commandIndex = 0)
    {
        for (var i = 0; i < rows.Count; i++)
        {
            var row = rows[i];
            if (row.SectionKind == kind &&
                row.Group == group &&
                row.Sector == sector &&
                row.SiteIndex == siteIndex &&
                row.CommandIndex == commandIndex)
                return i;
        }

        for (var i = 0; i < rows.Count; i++)
        {
            var row = rows[i];
            if (row.SectionKind == kind &&
                row.Group == group &&
                row.Sector == sector &&
                row.SiteIndex == siteIndex)
                return i;
        }

        return -1;
    }

    public static int FindRowIndexForSourceLine(IReadOnlyList<EventEditorRow> rows, int sourceLine)
    {
        var best = -1;
        for (var i = 0; i < rows.Count; i++)
        {
            if (rows[i].SourceLine == 0)
                continue;
            if (rows[i].SourceLine == sourceLine)
                return i;
            if (rows[i].SourceLine <= sourceLine)
                best = i;
        }

        return best;
    }

    public static IReadOnlyList<EventEditorRow> ForSection(IReadOnlyList<EventEditorRow> rows, int sectionIndex)
    {
        var filtered = new List<EventEditorRow>();
        foreach (var row in rows)
        {
            if (row.SectionIndex == sectionIndex)
                filtered.Add(row);
        }

        return filtered;
    }

    public static int FindSectionIndex(
        ScriptSourceParseResult parsed,
        string kind,
        int group,
        int sector,
        int siteIndex)
    {
        for (var i = 0; i < parsed.Sections.Count; i++)
        {
            var section = parsed.Sections[i];
            if (section.Kind == kind &&
                section.Group == group &&
                section.Sector == sector &&
                section.Index == siteIndex)
                return i;
        }

        for (var i = 0; i < parsed.Sections.Count; i++)
        {
            if (parsed.Sections[i].Commands.Count > 0)
                return i;
        }

        return parsed.Sections.Count > 0 ? 0 : -1;
    }

    public static IReadOnlyList<EventEditorScriptChoice> ListScripts(
        ScriptSourceParseResult parsed,
        ScriptSceneCast? cast = null)
    {
        var choices = new List<EventEditorScriptChoice>();
        for (var i = 0; i < parsed.Sections.Count; i++)
        {
            var section = parsed.Sections[i];
            if (section.Kind is "commands" && section.Group < 0)
                continue;
            choices.Add(new EventEditorScriptChoice(
                i,
                FormatSectionLabel(section, cast),
                section.Kind,
                section.Group,
                section.Sector,
                section.Index));
        }

        return choices;
    }

    public static int VisibleIndexOf(IReadOnlyList<EventEditorRow> rows, EventEditorRow row)
    {
        for (var i = 0; i < rows.Count; i++)
        {
            if (rows[i].SectionIndex == row.SectionIndex && rows[i].CommandIndex == row.CommandIndex)
                return i;
        }

        return -1;
    }

    public static void SetParam(
        ScriptSourceParseResult parsed,
        EventEditorRow row,
        ScriptArgField field,
        int value)
    {
        var command = CommandAt(parsed, row);
        if (command is null)
            return;
        ScriptCommandSchema.Write(command.Command, field, value);
    }

    public static void SetDialogue(ScriptSourceParseResult parsed, EventEditorRow row, string? text)
    {
        var command = CommandAt(parsed, row);
        if (command is null)
            return;
        command.DialogueText = text;
    }

    public static ScriptCommandData CreateStub(byte op)
    {
        var command = new ScriptCommandData { Op = op };
        if (op == 0xDB)
            command.ArgShort = 60;
        if (op is 0x22 or 0x23 or 0x25 or 0x26)
        {
            command.ArgByte = 1;
            command.ArgShort = 16;
        }

        if (op is 0xEA or 0xEB)
            command.Arg1 = -1;
        return command;
    }

    public static void InsertAfter(ScriptSourceParseResult parsed, EventEditorRow row, ScriptCommandData command)
    {
        if (row.SectionIndex < 0 || row.SectionIndex >= parsed.Sections.Count)
            return;
        var section = parsed.Sections[row.SectionIndex];
        var index = Math.Clamp(row.CommandIndex + 1, 0, section.Commands.Count);
        section.Commands.Insert(index, new ScriptSourceCommand { Command = command });
    }

    public static void InsertAt(ScriptSourceParseResult parsed, int sectionIndex, int commandIndex, ScriptCommandData command)
    {
        if (sectionIndex < 0 || sectionIndex >= parsed.Sections.Count)
            return;
        var section = parsed.Sections[sectionIndex];
        var index = Math.Clamp(commandIndex, 0, section.Commands.Count);
        section.Commands.Insert(index, new ScriptSourceCommand { Command = command });
    }

    public static void Remove(ScriptSourceParseResult parsed, EventEditorRow row)
    {
        if (row.SectionIndex < 0 || row.SectionIndex >= parsed.Sections.Count)
            return;
        var section = parsed.Sections[row.SectionIndex];
        if (row.CommandIndex < 0 || row.CommandIndex >= section.Commands.Count)
            return;
        section.Commands.RemoveAt(row.CommandIndex);
    }

    public static void Move(ScriptSourceParseResult parsed, EventEditorRow row, int delta)
    {
        if (delta == 0)
            return;
        if (row.SectionIndex < 0 || row.SectionIndex >= parsed.Sections.Count)
            return;
        var section = parsed.Sections[row.SectionIndex];
        var from = row.CommandIndex;
        var to = from + delta;
        if (from < 0 || from >= section.Commands.Count || to < 0 || to >= section.Commands.Count)
            return;
        var item = section.Commands[from];
        section.Commands.RemoveAt(from);
        section.Commands.Insert(to, item);
    }

    public static string FormatSource(
        ScriptSourceParseResult parsed,
        IReadOnlyDictionary<int, DialogueString>? dialogue = null,
        ScriptNamedDefinitions? names = null,
        ScriptSceneCast? cast = null)
    {
        var builder = new StringBuilder();
        var any = false;
        foreach (var section in parsed.Sections)
        {
            if (section.Kind is "commands" && section.Group < 0 && section.Commands.Count == 0)
                continue;
            if (any)
                builder.AppendLine();
            any = true;
            if (section.Kind is not "commands")
                builder.AppendLine(FormatHeader(section));
            foreach (var command in section.Commands)
                builder.AppendLine(ScriptSource.FormatCommand(
                    command.Command, dialogue, names, command.DialogueText, cast));
        }

        if (!any)
            builder.AppendLine("# (no station or entity scripts)");
        return builder.ToString().TrimEnd() + "\n";
    }

    public static IReadOnlyList<byte> InsertableOpcodes { get; } =
    [
        0xDB, 0x22, 0x23, 0x2E, 0x34, 0x6A, 0xEA, 0xEB, 0xEF,
    ];

    private static ScriptSourceCommand? CommandAt(ScriptSourceParseResult parsed, EventEditorRow row)
    {
        if (row.SectionIndex < 0 || row.SectionIndex >= parsed.Sections.Count)
            return null;
        var section = parsed.Sections[row.SectionIndex];
        if (row.CommandIndex < 0 || row.CommandIndex >= section.Commands.Count)
            return null;
        return section.Commands[row.CommandIndex];
    }

    private static EventEditorRow BuildRow(
        int rowIndex,
        int sectionIndex,
        int commandIndex,
        ScriptSourceSection section,
        string identity,
        ScriptSourceCommand sourceCommand,
        IReadOnlyDictionary<int, DialogueString>? dialogue,
        ScriptNamedDefinitions? names,
        ScriptSceneCast? cast,
        SpeakerSlotMap slots,
        int? inheritedSpeaker,
        int inheritedEmotion,
        Func<int, short>? resolveTypeSpecies,
        Func<short, string>? prettySpecies)
    {
        var command = sourceCommand.Command;
        var opcode = ScriptOpcodeNames.GetName(command.Op);
        ScriptCommandDocs.TryGet(command.Op, out var doc);
        var description = doc?.Summary ?? opcode;
        var first = description.IndexOf('.');
        if (first > 0 && first < 48)
            description = description[..first];
        if (description.Length > 0)
            description = char.ToUpper(description[0], CultureInfo.InvariantCulture) + description[1..];

        var speakerId = SpeakerId(command) ?? (InheritsSpeaker(command.Op) ? inheritedSpeaker : null);
        string? speakerName = null;
        int? resolvedLive = null;
        var resolvedSpecies = 0;
        if (speakerId is int slot)
        {
            slots.TryResolve(
                section.Group,
                section.Sector,
                slot,
                cast,
                out var member,
                out resolvedLive,
                out resolvedSpecies,
                out var typeId);
            if (resolvedSpecies == 0 && typeId is int boundType && resolveTypeSpecies is not null)
                resolvedSpecies = resolveTypeSpecies(boundType);
            speakerName = member?.DisplayLabel;
            if (string.IsNullOrEmpty(speakerName) && resolvedSpecies > 0 && prettySpecies is not null)
                speakerName = prettySpecies((short)resolvedSpecies);
        }

        var dialogueText = sourceCommand.DialogueText ?? ResolveDialogue(command, dialogue);
        return new EventEditorRow(
            rowIndex,
            sectionIndex,
            commandIndex,
            section.Kind,
            section.Group,
            section.Sector,
            section.Index,
            identity,
            section.Name,
            command.Op,
            opcode,
            description,
            FormatBrackets(command, names),
            string.IsNullOrEmpty(dialogueText) ? null : dialogueText,
            speakerId,
            speakerName,
            sourceCommand.SourceLine,
            command,
            sourceCommand)
        {
            PortraitEmotion = command.Op == 0x2E ? command.Arg1 : inheritedEmotion,
            ResolvedLiveIndex = resolvedLive,
            ResolvedSpeciesId = resolvedSpecies,
        };
    }

    private static string FormatIdentity(ScriptSourceSection section)
    {
        if (section.Kind is "commands" || section.Group < 0)
            return "script";
        var suffix = section.Index != 0 ? $".{section.Index}" : "";
        return string.Create(
            CultureInfo.InvariantCulture,
            $"{section.Kind} g{section.Group}/s{section.Sector}{suffix}");
    }

    private static string FormatSectionLabel(ScriptSourceSection section, ScriptSceneCast? cast)
    {
        var identity = FormatIdentity(section);
        if (section.Kind == "live" &&
            cast is not null &&
            cast.TryGet(section.Index, out var member))
            return $"{identity} · {member.DisplayLabel}";
        if (!string.IsNullOrEmpty(section.Name))
            return $"{identity} · {section.Name}";
        return identity;
    }

    private static string FormatHeader(ScriptSourceSection section)
    {
        var suffix = section.Index != 0 ? $".{section.Index}" : "";
        var dlg = section.Kind is "live" or "object" or "effect" ? $" dlg{section.ScriptSlot}" : "";
        var name = string.IsNullOrEmpty(section.Name) ? "" : $" {section.Name}";
        return $"@{section.Kind} g{section.Group}/s{section.Sector}{suffix}{dlg}{name}";
    }

    private static string FormatBrackets(ScriptCommandData command, ScriptNamedDefinitions? names)
    {
        if (command.Op == 0xDB)
        {
            var frames = command.ArgShort;
            var inner = frames % 60 == 0 && frames > 0
                ? $"{frames} frames ({frames / 60} sec)"
                : $"{frames} frames";
            return $"[ {inner} ]";
        }

        var fields = ScriptCommandSchema.GetSemanticFields(command.Op);
        if (fields is null || fields.Count == 0)
        {
            var raw = ScriptCommandSchema.ArgumentSummary(command);
            return string.IsNullOrEmpty(raw) ? string.Empty : $"[ {raw} ]";
        }

        var parts = new List<string>();
        foreach (var field in fields)
        {
            if (field.Field == ScriptArgField.ArgPtr)
                continue;
            var value = ScriptCommandSchema.Read(command, field.Field);
            var shown = field.Format == "hex"
                ? $"0x{value:X}"
                : FormatNamedValue(command.Op, field, value, names);
            parts.Add($"{field.Label}[ {shown} ]");
        }

        return string.Join("  ", parts);
    }

    private static string FormatNamedValue(
        byte op,
        ScriptArgBinding field,
        int value,
        ScriptNamedDefinitions? names)
    {
        var catalog = names?.CatalogFor(op, MapSlot(field.Field));
        if (catalog is not null && catalog.TryGetName(value, out var formatted) && !string.IsNullOrEmpty(formatted))
            return formatted;
        return value.ToString(CultureInfo.InvariantCulture);
    }

    private static int MapSlot(ScriptArgField field) => field switch
    {
        ScriptArgField.ArgByte => 0,
        ScriptArgField.ArgShort => 1,
        ScriptArgField.Arg1 => 2,
        ScriptArgField.Arg2 => 3,
        _ => 0,
    };

    private static int? SpeakerId(ScriptCommandData command) => command.Op switch
    {
        0x2E => command.ArgShort,
        0x33 or 0x34 => command.ArgShort,
        _ => null,
    };

    private static bool InheritsSpeaker(byte op) => op is
        0x32 or 0x35 or 0x36 or 0x37 or 0x38 or 0x39 or 0xD0 or 0xD1;

    private static string? ResolveDialogue(
        ScriptCommandData command,
        IReadOnlyDictionary<int, DialogueString>? dialogue)
    {
        if (dialogue is null || command.ArgPtr == 0)
            return null;
        var offset = DialogueResolver.PointerToOffset(command.ArgPtr);
        return dialogue.TryGetValue(offset, out var entry) ? entry.Text : null;
    }
}
