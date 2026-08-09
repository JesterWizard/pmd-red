namespace RescueEditor.Core;

/// <summary>Prevents re-entrant UI refresh loops (Avalonia SelectionChanged ↔ ItemsSource).</summary>
public sealed class ReentrancyGate
{
    private int _depth;

    public bool IsEntered => _depth > 0;

    public bool TryEnter()
    {
        if (_depth > 0)
            return false;
        _depth++;
        return true;
    }

    public void Exit()
    {
        if (_depth > 0)
            _depth--;
    }

    public void Run(Action action)
    {
        if (!TryEnter())
            return;
        try
        {
            action();
        }
        finally
        {
            Exit();
        }
    }
}
