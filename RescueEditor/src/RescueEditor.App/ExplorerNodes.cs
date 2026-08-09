using RescueEditor.Core;

namespace RescueEditor.App;

public abstract class ExplorerNode
{
    public required string Title { get; init; }
    public List<ExplorerNode> Children { get; init; } = new();
    public override string ToString() => Title;
}

public sealed class CategoryExplorerNode : ExplorerNode
{
    public required AssetCategory Category { get; init; }
}

public sealed class SceneGroupExplorerNode : ExplorerNode
{
    public required string GroupKey { get; init; }
}

public sealed class AssetExplorerNode : ExplorerNode
{
    public required AssetDescriptor Asset { get; init; }
    public Scene? Scene { get; init; }
}

public sealed class FolderExplorerNode : ExplorerNode;
