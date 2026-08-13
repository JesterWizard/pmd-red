using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class CategoryWorkspaceTests
{
    [Theory]
    [InlineData(AssetCategory.Scenes, CategoryWorkspaceKind.SceneExplorer)]
    [InlineData(AssetCategory.CPatches, CategoryWorkspaceKind.CPatches)]
    [InlineData(AssetCategory.Dialogue, CategoryWorkspaceKind.AssetBrowser)]
    [InlineData(AssetCategory.Portraits, CategoryWorkspaceKind.AssetBrowser)]
    [InlineData(AssetCategory.Music, CategoryWorkspaceKind.AssetBrowser)]
    [InlineData(AssetCategory.RawArchives, CategoryWorkspaceKind.AssetBrowser)]
    public void Resolve_RoutesCategoryToWorkspaceKind(AssetCategory category, CategoryWorkspaceKind expected)
    {
        Assert.Equal(expected, CategoryWorkspace.Resolve(category));
    }

    [Fact]
    public void Scenes_DoNotUseAssetBrowser()
    {
        Assert.False(CategoryWorkspace.UsesAssetBrowser(AssetCategory.Scenes));
        Assert.True(CategoryWorkspace.UsesAssetBrowser(AssetCategory.Dialogue));
    }
}
