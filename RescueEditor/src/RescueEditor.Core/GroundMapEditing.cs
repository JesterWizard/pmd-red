namespace RescueEditor.Core;

/// <summary>Undoable ground-map collision strokes for the scene editor.</summary>
public static class GroundMapEditing
{
    public static void PaintCollision(
        ChangeService changes,
        string bmaName,
        GroundCollisionMap before,
        GroundCollisionMap after,
        Action<GroundCollisionMap> write)
    {
        var beforeCopy = before.Clone();
        var afterCopy = after.Clone();
        changes.Execute(
            $"Paint collision {bmaName}",
            apply: () => write(afterCopy),
            revert: () => write(beforeCopy),
            edit: new ProjectEdit
            {
                Id = Guid.NewGuid().ToString("N"),
                Kind = "ground.collision",
                Target = bmaName,
                Description = $"Paint collision on {bmaName}",
            });
    }
}
