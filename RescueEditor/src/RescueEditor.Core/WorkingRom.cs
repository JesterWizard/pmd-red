namespace RescueEditor.Core;

/// <summary>
/// Mutable working copy of the opened ROM. Apply / undo rebuild it from the scene graph.
/// Never writes the source path; Build ROM remains the export path.
/// </summary>
public sealed class WorkingRom
{
    public WorkingRom(RomImage source)
    {
        Source = source;
        View = RomImage.FromBytes(source.Path, source.Bytes.ToArray());
    }

    public RomImage Source { get; }
    public RomImage View { get; private set; }
    public RuntimeConfigState? RuntimeConfig { get; set; }

    public RomBuildReport Sync(
        SceneDatabase database,
        Charmap? charmap = null,
        RuntimeConfigState? runtimeConfig = null)
    {
        var dirty = database.DialogueByOffset.Values
            .Select(dialogue => (Dialogue: dialogue, dialogue.Dirty))
            .ToList();
        var buffer = MutableRom.From(Source);
        var report = new RomBuildReport();
        RomBuilder.WriteWorkingCopy(
            buffer, database, report, charmap, runtimeConfig ?? RuntimeConfig);
        foreach (var (dialogue, wasDirty) in dirty)
            dialogue.Dirty = wasDirty;
        View = RomImage.FromBytes(Source.Path, buffer.Copy(0, buffer.Length));
        return report;
    }
}
