namespace RescueEditor.Core;

/// <summary>
/// Timer for Scene Play "Auto progress": advance dialogue, then the next story beat.
/// </summary>
public sealed class ScenePlayAutoProgress
{
    public const double DefaultDialogueHoldSeconds = 0.85;

    private double _holdSeconds;

    public bool Enabled { get; set; }

    /// <summary>How long to leave a textbox up before auto-pressing A.</summary>
    public double DialogueHoldSeconds { get; set; } = DefaultDialogueHoldSeconds;

    public enum Action
    {
        None,
        AdvanceDialogue,
        NextScene,
    }

    public void ResetHold() => _holdSeconds = 0;

    public Action Update(
        double deltaSeconds,
        bool waitingForAdvance,
        bool scriptFinished,
        bool canGoNext)
    {
        if (!Enabled)
        {
            _holdSeconds = 0;
            return Action.None;
        }

        if (waitingForAdvance)
        {
            _holdSeconds += Math.Max(0, deltaSeconds);
            if (_holdSeconds < Math.Max(0.05, DialogueHoldSeconds))
                return Action.None;
            _holdSeconds = 0;
            return Action.AdvanceDialogue;
        }

        _holdSeconds = 0;
        if (scriptFinished && canGoNext)
            return Action.NextScene;
        return Action.None;
    }
}
