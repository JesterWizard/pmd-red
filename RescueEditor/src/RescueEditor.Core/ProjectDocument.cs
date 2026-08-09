using System.Text.Json;
using System.Text.Json.Serialization;

namespace RescueEditor.Core;

public sealed class ProjectDocument
{
    public const int CurrentFormatVersion = 1;

    public int FormatVersion { get; set; } = CurrentFormatVersion;
    public string Name { get; set; } = "Untitled";
    public string BaseRomPath { get; set; } = string.Empty;
    public string BaseRomSha1 { get; set; } = string.Empty;
    public string ProfileName { get; set; } = RomProfile.Us10.Name;
    public Dictionary<string, string> EditorState { get; set; } = new(StringComparer.Ordinal);
    public List<ProjectEdit> Edits { get; set; } = new();
    public List<ImportedResource> Resources { get; set; } = new();

    [JsonIgnore]
    public string? Path { get; set; }

    [JsonIgnore]
    public bool IsDirty { get; set; }

    public static ProjectDocument Create(RomImage rom, RomProfile profile, string? name = null) => new()
    {
        Name = name ?? System.IO.Path.GetFileNameWithoutExtension(rom.Path) + " Project",
        BaseRomPath = rom.Path,
        BaseRomSha1 = rom.Sha1,
        ProfileName = profile.Name,
        IsDirty = true,
    };

    public static ProjectDocument Load(string path)
    {
        var json = File.ReadAllText(path);
        var document = JsonSerializer.Deserialize<ProjectDocument>(json, SerializerOptions)
            ?? throw new InvalidDataException("Project file is empty.");
        if (document.FormatVersion > CurrentFormatVersion)
            throw new InvalidDataException($"Unsupported project format version {document.FormatVersion}.");
        document.Path = path;
        document.IsDirty = false;
        return document;
    }

    public void Save(string? path = null)
    {
        path ??= Path ?? throw new InvalidOperationException("Project path is not set.");
        Directory.CreateDirectory(System.IO.Path.GetDirectoryName(System.IO.Path.GetFullPath(path))!);
        var json = JsonSerializer.Serialize(this, SerializerOptions);
        File.WriteAllText(path, json);
        Path = path;
        IsDirty = false;
    }

    private static readonly JsonSerializerOptions SerializerOptions = new()
    {
        WriteIndented = true,
        PropertyNamingPolicy = JsonNamingPolicy.CamelCase,
        DefaultIgnoreCondition = JsonIgnoreCondition.WhenWritingNull,
    };
}

public sealed class ProjectEdit
{
    public required string Id { get; init; }
    public required string Kind { get; init; }
    public required string Target { get; init; }
    public string? Description { get; set; }
    public Dictionary<string, string> Values { get; init; } = new(StringComparer.Ordinal);
    public DateTimeOffset Timestamp { get; init; } = DateTimeOffset.UtcNow;
}

public sealed class ImportedResource
{
    public required string Id { get; init; }
    public required string Kind { get; init; }
    public required string SourcePath { get; init; }
    public string? Notes { get; set; }
}

public sealed class ChangeService
{
    private readonly Stack<ChangeTransaction> _undo = new();
    private readonly Stack<ChangeTransaction> _redo = new();

    public event EventHandler? Changed;

    public bool CanUndo => _undo.Count > 0;
    public bool CanRedo => _redo.Count > 0;
    public bool IsDirty => _undo.Count > 0;
    public ProjectDocument? Project { get; private set; }
    public SceneDatabase? Database { get; private set; }

    public void Attach(ProjectDocument project, SceneDatabase database)
    {
        Project = project;
        Database = database;
        _undo.Clear();
        _redo.Clear();
        Changed?.Invoke(this, EventArgs.Empty);
    }

    public void Execute(string description, Action apply, Action revert, ProjectEdit? edit = null)
    {
        apply();
        var transaction = new ChangeTransaction(description, apply, revert, edit);
        _undo.Push(transaction);
        _redo.Clear();
        if (Project is not null)
        {
            Project.IsDirty = true;
            if (edit is not null)
                Project.Edits.Add(edit);
        }
        Changed?.Invoke(this, EventArgs.Empty);
    }

    public void Undo()
    {
        if (_undo.Count == 0)
            return;
        var transaction = _undo.Pop();
        transaction.Revert();
        _redo.Push(transaction);
        if (Project is not null && transaction.Edit is not null)
            Project.Edits.RemoveAll(edit => edit.Id == transaction.Edit.Id);
        if (Project is not null)
            Project.IsDirty = _undo.Count > 0;
        Changed?.Invoke(this, EventArgs.Empty);
    }

    public void Redo()
    {
        if (_redo.Count == 0)
            return;
        var transaction = _redo.Pop();
        transaction.Apply();
        _undo.Push(transaction);
        if (Project is not null && transaction.Edit is not null)
            Project.Edits.Add(transaction.Edit);
        if (Project is not null)
            Project.IsDirty = true;
        Changed?.Invoke(this, EventArgs.Empty);
    }

    private sealed record ChangeTransaction(
        string Description,
        Action Apply,
        Action Revert,
        ProjectEdit? Edit);
}
