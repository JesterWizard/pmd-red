namespace RescueEditor.Core;

public enum GbaButton
{
    A,
    B,
    L,
    R,
    Start,
    Select,
    Up,
    Down,
    Left,
    Right,
}

/// <summary>Remappable GBA buttons for Scene Play (Avalonia Key names as strings).</summary>
public sealed class PlayControlsKeymap
{
    private readonly Dictionary<GbaButton, KeyChord> _buttonToChord = new();
    private readonly Dictionary<KeyChord, GbaButton> _chordToButton = new();

    public static PlayControlsKeymap CreateDefault()
    {
        var map = new PlayControlsKeymap();
        foreach (GbaButton button in Enum.GetValues<GbaButton>())
            map.Rebind(button, CreateDefaultBinding(button));
        return map;
    }

    public static KeyChord CreateDefaultBinding(GbaButton button) => button switch
    {
        GbaButton.A => new KeyChord("A", false, false, false),
        GbaButton.B => new KeyChord("B", false, false, false),
        GbaButton.Up => new KeyChord("Up", false, false, false),
        GbaButton.Down => new KeyChord("Down", false, false, false),
        GbaButton.Left => new KeyChord("Left", false, false, false),
        GbaButton.Right => new KeyChord("Right", false, false, false),
        GbaButton.L => new KeyChord("L", false, false, false),
        GbaButton.R => new KeyChord("R", false, false, false),
        GbaButton.Start => new KeyChord("Return", false, false, false),
        GbaButton.Select => new KeyChord("P", false, false, false),
        _ => new KeyChord("", false, false, false),
    };

    public KeyChord GetBinding(GbaButton button) =>
        _buttonToChord.TryGetValue(button, out var chord) ? chord : new KeyChord("", false, false, false);

    public bool TryResolve(KeyChord chord, out GbaButton button)
    {
        var normalized = chord.Normalize();
        if (string.IsNullOrEmpty(normalized.Key))
        {
            button = default;
            return false;
        }
        return _chordToButton.TryGetValue(normalized, out button);
    }

    public void Rebind(GbaButton button, KeyChord chord)
    {
        var normalized = chord.Normalize();

        if (_buttonToChord.TryGetValue(button, out var previous) &&
            !string.IsNullOrEmpty(previous.Key))
            _chordToButton.Remove(previous.Normalize());

        if (!string.IsNullOrEmpty(normalized.Key) &&
            _chordToButton.TryGetValue(normalized, out var conflict) &&
            conflict != button)
        {
            _buttonToChord[conflict] = new KeyChord("", false, false, false);
            _chordToButton.Remove(normalized);
        }

        _buttonToChord[button] = normalized;
        if (!string.IsNullOrEmpty(normalized.Key))
            _chordToButton[normalized] = button;
    }

    public IReadOnlyDictionary<GbaButton, KeyChord> ToSnapshot() =>
        new Dictionary<GbaButton, KeyChord>(_buttonToChord);

    public static PlayControlsKeymap FromSnapshot(IReadOnlyDictionary<GbaButton, KeyChord> snapshot)
    {
        var map = new PlayControlsKeymap();
        foreach (var (button, chord) in snapshot)
            map.Rebind(button, chord);
        return map;
    }
}
