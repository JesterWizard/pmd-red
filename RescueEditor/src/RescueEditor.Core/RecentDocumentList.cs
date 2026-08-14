namespace RescueEditor.Core;

public static class RecentDocumentList
{
    public const int DefaultCap = 10;

    public static List<string> Remember(
        IEnumerable<string>? current,
        string path,
        int cap = DefaultCap)
    {
        var list = (current ?? Array.Empty<string>())
            .Where(entry => !string.IsNullOrWhiteSpace(entry))
            .ToList();
        if (string.IsNullOrWhiteSpace(path) || cap <= 0)
            return list;

        var existing = list.FindIndex(entry =>
            string.Equals(entry, path, StringComparison.OrdinalIgnoreCase));
        if (existing >= 0)
        {
            var kept = list[existing];
            list.RemoveAt(existing);
            list.Insert(0, kept);
        }
        else
        {
            list.Insert(0, path);
        }

        if (list.Count > cap)
            list.RemoveRange(cap, list.Count - cap);
        return list;
    }

    public static List<string> Existing(IEnumerable<string>? current, IEditorFileSystem files) =>
        (current ?? Array.Empty<string>()).Where(files.FileExists).ToList();
}
