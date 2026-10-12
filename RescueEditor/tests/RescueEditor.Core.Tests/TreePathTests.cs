using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class TreePathTests
{
    [Fact]
    public void FindsNestedNodeWithAncestors()
    {
        var roots = SampleTree();

        var path = TreePath.Find(roots, n => n.Kids, n => n.Name == "A1x");

        Assert.NotNull(path);
        Assert.Equal(new[] { "A", "A1", "A1x" }, path!.Select(n => n.Name));
    }

    [Fact]
    public void ReturnsNullWhenMissing()
    {
        var roots = SampleTree();

        var path = TreePath.Find(roots, n => n.Kids, n => n.Name == "Z");

        Assert.Null(path);
    }

    [Fact]
    public void FindsRoot()
    {
        var roots = SampleTree();

        var path = TreePath.Find(roots, n => n.Kids, n => n.Name == "B");

        Assert.NotNull(path);
        Assert.Equal(new[] { "B" }, path!.Select(n => n.Name));
    }

    [Fact]
    public void ReturnsFirstPreOrderMatch()
    {
        var roots = SampleTree();

        // "A" is checked before its descendants A1 and A2 (and before root B), so it wins.
        var path = TreePath.Find(roots, n => n.Kids, n => n.Name.StartsWith("A", StringComparison.Ordinal));

        Assert.NotNull(path);
        Assert.Equal(new[] { "A" }, path!.Select(n => n.Name));
    }

    private static List<Node> SampleTree() =>
    [
        new Node("A", [
            new Node("A1", [
                new Node("A1x", []),
            ]),
            new Node("A2", []),
        ]),
        new Node("B", []),
    ];

    private sealed record Node(string Name, List<Node> Kids);
}
