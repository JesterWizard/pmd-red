using Avalonia;
using Avalonia.Animation;
using Avalonia.Controls;
using Avalonia.Controls.Primitives;
using Avalonia.Input;
using Avalonia.Interactivity;
using Avalonia.Layout;
using Avalonia.Media;
using Avalonia.Styling;

namespace RescueEditor.App;

/// <summary>
/// Compact dropdown that opens on press anywhere on the control (not only the chevron)
/// and shows its popup immediately.
/// </summary>
public sealed class InstantComboBox : ComboBox
{
    public InstantComboBox()
    {
        FontFamily = EditorTheme.UiFont;
        FontSize = EditorTheme.FontBody;
        Height = EditorTheme.ControlHeight;
        MinHeight = EditorTheme.ControlHeight;
        CornerRadius = new CornerRadius(2);
        HorizontalAlignment = HorizontalAlignment.Left;
        MaxDropDownHeight = 320;

        // Tunnel so the whole hit area opens on press (Fluent normally waits for release / chevron).
        AddHandler(PointerPressedEvent, OnInstantPointerPressed, RoutingStrategies.Tunnel);
    }

    protected override Type StyleKeyOverride => typeof(ComboBox);

    private void OnInstantPointerPressed(object? sender, PointerPressedEventArgs e)
    {
        if (!IsEffectivelyEnabled)
            return;
        if (!e.GetCurrentPoint(this).Properties.IsLeftButtonPressed)
            return;
        if (IsDropDownOpen)
            return; // let default handling close it

        IsDropDownOpen = true;
        e.Handled = true;
    }
}

public static class EditorPopupStyles
{
    /// <summary>Strip Fluent open/close transitions so menus and combos appear instantly.</summary>
    public static void Apply(Application app)
    {
        app.Styles.Add(CreateNoTransitionsStyle(typeof(Popup)));
        app.Styles.Add(CreateNoTransitionsStyle(typeof(ComboBox)));
        app.Styles.Add(CreateNoTransitionsStyle(typeof(Menu)));
        app.Styles.Add(CreateNoTransitionsStyle(typeof(MenuItem)));
        app.Styles.Add(CreateNoTransitionsStyle(typeof(ContextMenu)));
        app.Styles.Add(CreateNoTransitionsStyle(typeof(FlyoutPresenter)));
    }

    private static Style CreateNoTransitionsStyle(Type controlType)
    {
        var style = new Style(x => x.Is(controlType));
        style.Setters.Add(new Setter(Animatable.TransitionsProperty, new Transitions()));
        return style;
    }
}
