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
        FontSize = EditorTheme.FontLabel;
        // Fluent ComboBox chrome needs a couple px over ControlHeight or glyph tops clip.
        Height = EditorTheme.ControlHeight + 2;
        MinHeight = EditorTheme.ControlHeight + 2;
        Padding = new Thickness(4, 0);
        VerticalContentAlignment = VerticalAlignment.Center;
        HorizontalContentAlignment = HorizontalAlignment.Left;
        CornerRadius = new CornerRadius(0);
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

        // Compact IDE toggles: quiet checked state instead of Fluent's solid accent fill.
        AddToolToggleStyles(app);
        AddWorkspaceTabStyles(app);
    }

    private static void AddToolToggleStyles(Application app)
    {
        var idle = new Style(x => x.OfType<ToggleButton>().Class("rt-tool"));
        idle.Setters.Add(new Setter(TemplatedControl.BackgroundProperty, Brushes.Transparent));
        idle.Setters.Add(new Setter(TemplatedControl.ForegroundProperty, EditorTheme.TextSecondaryBrush));
        idle.Setters.Add(new Setter(TemplatedControl.BorderBrushProperty, Brushes.Transparent));
        idle.Setters.Add(new Setter(TemplatedControl.CornerRadiusProperty, new CornerRadius(0)));
        app.Styles.Add(idle);

        var hover = new Style(x => x.OfType<ToggleButton>().Class("rt-tool").Class(":pointerover"));
        hover.Setters.Add(new Setter(TemplatedControl.BackgroundProperty, EditorTheme.PanelBgRaisedBrush));
        app.Styles.Add(hover);

        var checkedStyle = new Style(x => x.OfType<ToggleButton>().Class("rt-tool").Class(":checked"));
        checkedStyle.Setters.Add(new Setter(TemplatedControl.BackgroundProperty, EditorTheme.AccentSoftBrush));
        checkedStyle.Setters.Add(new Setter(TemplatedControl.ForegroundProperty, EditorTheme.TextPrimaryBrush));
        app.Styles.Add(checkedStyle);

        var checkedHover = new Style(x => x.OfType<ToggleButton>().Class("rt-tool").Class(":checked").Class(":pointerover"));
        checkedHover.Setters.Add(new Setter(TemplatedControl.BackgroundProperty, EditorTheme.SelectionBrush));
        app.Styles.Add(checkedHover);
    }

    private static void AddWorkspaceTabStyles(Application app)
    {
        var idle = new Style(x => x.OfType<ToggleButton>().Class("rt-workspace-tab"));
        idle.Setters.Add(new Setter(TemplatedControl.BackgroundProperty, Brushes.Transparent));
        idle.Setters.Add(new Setter(TemplatedControl.ForegroundProperty, EditorTheme.TextMutedBrush));
        idle.Setters.Add(new Setter(TemplatedControl.BorderBrushProperty, Brushes.Transparent));
        idle.Setters.Add(new Setter(TemplatedControl.CornerRadiusProperty, new CornerRadius(0)));
        app.Styles.Add(idle);

        var hover = new Style(x => x.OfType<ToggleButton>().Class("rt-workspace-tab").Class(":pointerover"));
        hover.Setters.Add(new Setter(TemplatedControl.ForegroundProperty, EditorTheme.TextSecondaryBrush));
        app.Styles.Add(hover);

        var checkedStyle = new Style(x => x.OfType<ToggleButton>().Class("rt-workspace-tab").Class(":checked"));
        checkedStyle.Setters.Add(new Setter(TemplatedControl.ForegroundProperty, EditorTheme.TextPrimaryBrush));
        checkedStyle.Setters.Add(new Setter(TemplatedControl.BorderBrushProperty, EditorTheme.AccentBrush));
        app.Styles.Add(checkedStyle);
    }

    private static Style CreateNoTransitionsStyle(Type controlType)
    {
        var style = new Style(x => x.Is(controlType));
        style.Setters.Add(new Setter(Animatable.TransitionsProperty, new Transitions()));
        return style;
    }
}
