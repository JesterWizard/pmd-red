namespace RescueEditor.Core;

/// <summary>Finds the root-to-node path in a tree given by a children selector.</summary>
public static class TreePath
{
    /// <summary>Depth-first, roots in order. Returns the nodes from a root down to the first match (inclusive), or null.</summary>
    public static List<T>? Find<T>(IEnumerable<T> roots, Func<T, IEnumerable<T>> children, Func<T, bool> match)
    {
        ArgumentNullException.ThrowIfNull(roots);
        ArgumentNullException.ThrowIfNull(children);
        ArgumentNullException.ThrowIfNull(match);

        var path = new List<T>();
        foreach (var root in roots)
        {
            if (FindFrom(root, children, match, path))
                return path;
        }
        return null;
    }

    // Pre-order: the node itself is checked before its children. On failure the node is removed again,
    // so on success `path` ends exactly at the match.
    private static bool FindFrom<T>(T node, Func<T, IEnumerable<T>> children, Func<T, bool> match, List<T> path)
    {
        path.Add(node);
        if (match(node))
            return true;
        foreach (var child in children(node))
        {
            if (FindFrom(child, children, match, path))
                return true;
        }
        path.RemoveAt(path.Count - 1);
        return false;
    }
}
