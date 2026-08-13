namespace RescueEditor.Core;

/// <summary>Breakpoint on a command index, opcode, and/or actor name.</summary>
public readonly record struct GroundScriptBreakpoint(
    int? CommandIndex = null,
    byte? Opcode = null,
    string? ActorName = null);

public readonly record struct GroundScriptActorWatch(
    string Name,
    int NpcId,
    int Index,
    byte Opcode,
    string OpcodeName,
    int WaitFrames,
    int? AwaitCueId,
    int CallDepth,
    int ObjFlags,
    bool Done,
    int? BranchTargetIndex,
    string? BranchKind,
    IReadOnlyList<ScriptCommandData> Commands);

public readonly record struct GroundScriptWatchState(
    bool Paused,
    IReadOnlyList<GroundScriptActorWatch> Actors,
    GroundScriptActorWatch? CurrentActor,
    IReadOnlyList<int> Cues,
    IReadOnlyDictionary<int, int> Locals,
    string? LastTransfer)
{
    public string Format()
    {
        var doc = GroundScriptWatchListing.Build(this);
        return string.IsNullOrEmpty(doc.Body) ? doc.Header : doc.Header + "\n\n" + doc.Body;
    }
}
