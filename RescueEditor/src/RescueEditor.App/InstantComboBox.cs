using Avalonia;
using Avalonia.Animation;
using Avalonia.Controls;
using Avalonia.Controls.Presenters;
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
        CornerRadius = EditorTheme.ControlRadius;
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
        AddFluentResourceOverrides(app);

        app.Styles.Add(CreateNoTransitionsStyle(typeof(Popup)));
        app.Styles.Add(CreateNoTransitionsStyle(typeof(ComboBox)));
        app.Styles.Add(CreateNoTransitionsStyle(typeof(Menu)));
        app.Styles.Add(CreateNoTransitionsStyle(typeof(MenuItem)));
        app.Styles.Add(CreateNoTransitionsStyle(typeof(ContextMenu)));
        app.Styles.Add(CreateNoTransitionsStyle(typeof(FlyoutPresenter)));

        // Compact IDE toggles: quiet checked state instead of Fluent's solid accent fill.
        AddToolToggleStyles(app);
        AddWorkspaceTabStyles(app);
        AddPrimaryButtonStyles(app);
    }

    /// <summary>Soft, rounded Fluent resource overrides: muted checked states, borderless expanders.</summary>
    private static void AddFluentResourceOverrides(Application app)
    {
        app.Resources["ControlCornerRadius"] = EditorTheme.ControlRadius;
        app.Resources["OverlayCornerRadius"] = EditorTheme.CardRadius;
        app.Resources["ToggleButtonBackgroundChecked"] = EditorTheme.AccentSoftBrush;
        app.Resources["ToggleButtonBackgroundCheckedPointerOver"] = EditorTheme.SelectionBrush;
        app.Resources["ToggleButtonBackgroundCheckedPressed"] = EditorTheme.SelectionBrush;
        app.Resources["ToggleButtonForegroundChecked"] = EditorTheme.TextPrimaryBrush;
        app.Resources["ToggleButtonForegroundCheckedPointerOver"] = EditorTheme.TextPrimaryBrush;
        app.Resources["ToggleButtonForegroundCheckedPressed"] = EditorTheme.TextPrimaryBrush;
        app.Resources["ToggleButtonBorderBrushChecked"] = Brushes.Transparent;
        app.Resources["ToggleButtonBorderBrushCheckedPointerOver"] = Brushes.Transparent;
        app.Resources["ToggleButtonBorderBrushCheckedPressed"] = Brushes.Transparent;
        app.Resources["ToggleButtonBackgroundPointerOver"] = EditorTheme.PanelBgRaisedBrush;
        app.Resources["ToggleButtonBackgroundPressed"] = EditorTheme.PanelBgRaisedBrush;
        app.Resources["ButtonBackgroundPointerOver"] = EditorTheme.ControlHoverBrush;
        app.Resources["ButtonBorderBrushPointerOver"] = EditorTheme.BorderBrush;
        app.Resources["ButtonForegroundPointerOver"] = EditorTheme.TextPrimaryBrush;
        app.Resources["ButtonBackgroundPressed"] = EditorTheme.SelectionBrush;
        app.Resources["ExpanderHeaderBackground"] = Brushes.Transparent;
        app.Resources["ExpanderHeaderBackgroundPointerOver"] = EditorTheme.PanelBgRaisedBrush;
        app.Resources["ExpanderHeaderBackgroundPressed"] = EditorTheme.PanelBgRaisedBrush;
        app.Resources["ExpanderHeaderBorderBrush"] = Brushes.Transparent;
        app.Resources["ExpanderHeaderBorderBrushPointerOver"] = Brushes.Transparent;
        app.Resources["ExpanderHeaderBorderBrushPressed"] = Brushes.Transparent;
        app.Resources["ExpanderHeaderBorderThickness"] = new Thickness(0);
        app.Resources["ExpanderContentBackground"] = Brushes.Transparent;
        app.Resources["ExpanderContentBorderBrush"] = Brushes.Transparent;
        app.Resources["ExpanderMinHeight"] = 30.0;
        app.Resources["MenuFlyoutPresenterBackground"] = EditorTheme.MenuBgBrush;
        app.Resources["MenuFlyoutPresenterBorderBrush"] = EditorTheme.BorderSubtleBrush;
    }

    private static void AddToolToggleStyles(Application app)
    {
        var idle = new Style(x => x.OfType<ToggleButton>().Class("rt-tool"));
        idle.Setters.Add(new Setter(TemplatedControl.BackgroundProperty, Brushes.Transparent));
        idle.Setters.Add(new Setter(TemplatedControl.ForegroundProperty, EditorTheme.TextSecondaryBrush));
        idle.Setters.Add(new Setter(TemplatedControl.BorderBrushProperty, Brushes.Transparent));
        idle.Setters.Add(new Setter(TemplatedControl.CornerRadiusProperty, EditorTheme.ControlRadius));
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
        idle.Setters.Add(new Setter(TemplatedControl.CornerRadiusProperty, EditorTheme.ControlRadius));
        app.Styles.Add(idle);

        var hover = new Style(x => x.OfType<ToggleButton>().Class("rt-workspace-tab").Class(":pointerover"));
        hover.Setters.Add(new Setter(TemplatedControl.BackgroundProperty, EditorTheme.PanelBgRaisedBrush));
        hover.Setters.Add(new Setter(TemplatedControl.ForegroundProperty, EditorTheme.TextSecondaryBrush));
        app.Styles.Add(hover);

        var checkedStyle = new Style(x => x.OfType<ToggleButton>().Class("rt-workspace-tab").Class(":checked"));
        checkedStyle.Setters.Add(new Setter(TemplatedControl.ForegroundProperty, EditorTheme.TextPrimaryBrush));
        checkedStyle.Setters.Add(new Setter(TemplatedControl.BackgroundProperty, EditorTheme.AccentSoftBrush));
        app.Styles.Add(checkedStyle);
    }

    /// <summary>Primary (accent) buttons keep the blue fill on hover instead of Fluent's gray.</summary>
    private static void AddPrimaryButtonStyles(Application app)
    {
        var hover = new Style(x => x.OfType<Button>().Class("rt-primary").Class(":pointerover")
            .Template().OfType<ContentPresenter>().Name("PART_ContentPresenter"));
        hover.Setters.Add(new Setter(ContentPresenter.BackgroundProperty, EditorTheme.AccentHoverBrush));
        hover.Setters.Add(new Setter(ContentPresenter.ForegroundProperty, EditorTheme.TextPrimaryBrush));
        app.Styles.Add(hover);

        var pressed = new Style(x => x.OfType<Button>().Class("rt-primary").Class(":pressed")
            .Template().OfType<ContentPresenter>().Name("PART_ContentPresenter"));
        pressed.Setters.Add(new Setter(ContentPresenter.BackgroundProperty, EditorTheme.AccentBrush));
        app.Styles.Add(pressed);
    }

    private static Style CreateNoTransitionsStyle(Type controlType)
    {
        var style = new Style(x => x.Is(controlType));
        style.Setters.Add(new Setter(Animatable.TransitionsProperty, new Transitions()));
        return style;
    }
}
