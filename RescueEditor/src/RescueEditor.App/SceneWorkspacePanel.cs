using Avalonia;
using Avalonia.Controls;
using Avalonia.Controls.Primitives;
using Avalonia.Controls.Templates;
using Avalonia.Input;
using Avalonia.Layout;
using Avalonia.Media;
using RescueEditor.Core;

namespace RescueEditor.App;

public sealed class SceneWorkspacePanel : UserControl
{
    private readonly Border _workspaceShell;
    private readonly Panel _workspaceContent;
    private readonly ToggleButton _sceneWorkspaceTab;
    private readonly ToggleButton _eventsWorkspaceTab;
    private readonly Control _sceneTabContent;
    private readonly Control _eventsTabContent;
    private readonly SceneMapCanvas _map;
    private readonly ListBox _sectorList;
    private readonly ListBox _scriptList;
    private readonly ListBox _entityList;
    private readonly ListBox _eventsScriptList;
    private readonly StackPanel _propertyForm;
    private readonly StackPanel _scriptPropertyForm;
    private readonly StackPanel _semanticPropertyHost;
    private readonly StackPanel _rawPropertyHost;
    private readonly ToggleButton _rawFieldsToggle;
    private readonly TextBlock _commandTitle;
    private readonly Border _scriptHeaderRow;
    private readonly EditorKeymap _keymap = EditorKeymap.CreateDefault();
    private readonly TextBlock _status;
    private readonly TextBlock _mapInfo;
    private readonly CompactSpinBox _groupBox;
    private readonly InstantComboBox _sectorBox;
    private readonly ToggleButton _livesToggle;
    private readonly ToggleButton _objectsToggle;
    private readonly ToggleButton _effectsToggle;
    private readonly ToggleButton _eventsToggle;
    private readonly ToggleButton _linksToggle;
    private readonly ToggleButton _gridToggle;
    private readonly ToggleButton _snapToggle;
    private readonly ToggleButton _selectTool;
    private readonly ToggleButton _panTool;
    private readonly Button _undoButton;
    private readonly Button _redoButton;
    private readonly Panel _inspectorContentHost;
    private readonly StackPanel _inspectorTabBar;
    private readonly TextBlock _eventsHud;
    private readonly Slider _commandSlider;

    private readonly CompactSpinBox _typeBox;
    private readonly CompactSpinBox _dirBox;
    private readonly CompactSpinBox _xBox;
    private readonly CompactSpinBox _yBox;
    private readonly CompactSpinBox _wBox;
    private readonly CompactSpinBox _hBox;
    private readonly ToggleButton _halfXToggle;
    private readonly ToggleButton _halfYToggle;
    private readonly CompactSpinBox _opBox;
    private readonly CompactSpinBox _argByteBox;
    private readonly CompactSpinBox _argShortBox;
    private readonly CompactSpinBox _arg1Box;
    private readonly CompactSpinBox _arg2Box;
    private readonly CompactSpinBox _argPtrBox;

    private Control? _sceneRight;
    private Control? _mapRight;
    private Control? _livesRight;
    private Control? _objectsRight;
    private Control? _effectsRight;
    private Control? _eventsRight;
    private Control? _linksRight;
    private Control? _scriptRight;
    private TextBlock? _scriptSummary;
    private ListBox? _scriptStationList;
    private TextBlock? _scriptEmptyHint;
    private string _inspectorMode = "Scene";
    private SceneStationEntry? _selectedScriptStation;

    private RomImage? _rom;
    private WorkingRom? _workingRom;
    private Charmap? _charmap;
    private SceneDatabase? _database;
    private ChangeService? _changes;
    private Scene? _scene;
    private ActorSpriteAtlas? _actorSprites;
    private ObjectSpriteAtlas? _objectSprites;
    private GroundEffectAtlas? _groundEffects;
    private PortraitAtlas? _portraitAtlas;
    private SceneEntity? _selectedEntity;
    private ScriptCommandData? _selectedCommand;
    private ScriptRefData? _selectedStation;
    private bool _suppressPropertyEvents;
    private readonly HashSet<int> _hiddenSectors = new();
    private int? _soloSector;
    private readonly ReentrancyGate _refreshGate = new();

    public event EventHandler? DirtyChanged;

    public SceneWorkspacePanel()
    {
        FontFamily = EditorTheme.UiFont;
        FontSize = EditorTheme.FontBody;

        _map = new SceneMapCanvas();
        _map.EntitySelected += (_, entity) =>
        {
            _selectedEntity = entity;
            SyncEntityListSelection();
            RefreshProperties();
        };
        _map.EntityMoved += (_, entity) =>
        {
            if (_changes is null || _map.MovedPending is not { } pos)
                return;
            SceneEditing.MoveEntity(_changes, entity, pos);
            _map.MovedPending = null;
            RefreshAll();
            DirtyChanged?.Invoke(this, EventArgs.Empty);
        };

        _groupBox = EditorChrome.CompactNumeric(0, 255, 44);
        _groupBox.Value = 0;
        _groupBox.ValueChanged += (_, _) =>
        {
            if (_suppressPropertyEvents)
                return;
            RebuildSectorCombo();
            RefreshAll();
        };
        _sectorBox = new InstantComboBox { Width = 104 };
        _sectorBox.VerticalAlignment = VerticalAlignment.Center;
        _sectorBox.SelectionChanged += (_, _) =>
        {
            if (_suppressPropertyEvents)
                return;
            RefreshAll();
        };

        _livesToggle = EditorChrome.ToolToggle("Lives", isChecked: true);
        _objectsToggle = EditorChrome.ToolToggle("Objects", isChecked: true);
        _effectsToggle = EditorChrome.ToolToggle("Effects", isChecked: true);
        _eventsToggle = EditorChrome.ToolToggle("Events", isChecked: true);
        _linksToggle = EditorChrome.ToolToggle("Links", isChecked: true);
        _gridToggle = EditorChrome.ToolToggle("Grid");
        _snapToggle = EditorChrome.ToolToggle("Snap", isChecked: true);
        foreach (var toggle in new[] { _livesToggle, _objectsToggle, _effectsToggle, _eventsToggle, _linksToggle, _gridToggle })
            toggle.IsCheckedChanged += (_, _) => RefreshMap();
        _snapToggle.IsCheckedChanged += (_, _) => _map.SnapToGrid = _snapToggle.IsChecked == true;
        _map.SnapToGrid = true;

        _selectTool = EditorChrome.ToolToggle("Select", isChecked: true);
        _panTool = EditorChrome.ToolToggle("Pan");
        _selectTool.IsCheckedChanged += (_, _) =>
        {
            if (_selectTool.IsChecked == true)
            {
                _panTool.IsChecked = false;
                _map.Tool = SceneMapTool.Select;
            }
        };
        _panTool.IsCheckedChanged += (_, _) =>
        {
            if (_panTool.IsChecked == true)
            {
                _selectTool.IsChecked = false;
                _map.Tool = SceneMapTool.Pan;
            }
        };

        _undoButton = EditorChrome.ToolButton("Undo");
        _redoButton = EditorChrome.ToolButton("Redo");
        _undoButton.Click += (_, _) => { _changes?.Undo(); SyncWorkingRom(); RefreshAll(); DirtyChanged?.Invoke(this, EventArgs.Empty); };
        _redoButton.Click += (_, _) => { _changes?.Redo(); SyncWorkingRom(); RefreshAll(); DirtyChanged?.Invoke(this, EventArgs.Empty); };
        var playButton = EditorChrome.ToolButton("Play");
        playButton.Click += async (_, _) => await OpenScenePlayAsync();

        var toolbarInner = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            VerticalAlignment = VerticalAlignment.Center,
            Children =
            {
                _selectTool, _panTool,
                EditorChrome.ToolbarSeparator(),
                _gridToggle, _snapToggle,
                EditorChrome.ToolbarSeparator(),
                EditorChrome.ToolbarLabel("Group"),
                _groupBox,
                EditorChrome.ToolbarLabel("Sector"),
                _sectorBox,
                EditorChrome.ToolbarSeparator(),
                _livesToggle, _objectsToggle, _effectsToggle, _eventsToggle, _linksToggle,
                EditorChrome.ToolbarSeparator(),
                _undoButton, _redoButton, playButton,
            },
        };
        var toolbar = EditorChrome.ToolbarHost(toolbarInner);

        _status = new TextBlock(); // retained for RefreshMap notes; shown via map/events HUD

        var sceneTabContent = new Grid
        {
            RowDefinitions = new RowDefinitions("Auto,*"),
            Children = { toolbar, _map },
        };
        Grid.SetRow(toolbar, 0);
        Grid.SetRow(_map, 1);
        _sceneTabContent = sceneTabContent;

        _eventsScriptList = new ListBox();
        EditorChrome.StyleList(_eventsScriptList);
        _eventsScriptList.FontFamily = EditorTheme.MonoFont;
        _eventsScriptList.FontSize = EditorTheme.FontLabel;
        _eventsScriptList.SelectionChanged += (_, _) => OnEventsScriptSelected();
        _commandSlider = new Slider
        {
            Minimum = 0,
            Maximum = 0,
            Height = 16,
            Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space2),
        };
        _commandSlider.PropertyChanged += (_, e) =>
        {
            if (e.Property == RangeBase.ValueProperty)
                RefreshMap();
        };
        _eventsHud = new TextBlock
        {
            Margin = new Thickness(EditorTheme.Space4, 0, EditorTheme.Space4, EditorTheme.Space3),
            TextWrapping = TextWrapping.Wrap,
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontLabel,
            Foreground = EditorTheme.TextSecondaryBrush,
        };
        var eventsTabContent = new Grid
        {
            RowDefinitions = new RowDefinitions("*,Auto,Auto"),
            Children = { _eventsScriptList, _commandSlider, _eventsHud },
        };
        Grid.SetRow(_eventsScriptList, 0);
        Grid.SetRow(_commandSlider, 1);
        Grid.SetRow(_eventsHud, 2);
        _eventsTabContent = eventsTabContent;

        _sceneWorkspaceTab = EditorChrome.WorkspaceTab("Scene", isChecked: true);
        _eventsWorkspaceTab = EditorChrome.WorkspaceTab("Events");
        _sceneWorkspaceTab.IsCheckedChanged += (_, _) =>
        {
            if (_sceneWorkspaceTab.IsChecked == true)
                ShowWorkspaceTab(scene: true);
            else if (_eventsWorkspaceTab.IsChecked != true)
                _sceneWorkspaceTab.IsChecked = true;
        };
        _eventsWorkspaceTab.IsCheckedChanged += (_, _) =>
        {
            if (_eventsWorkspaceTab.IsChecked == true)
                ShowWorkspaceTab(scene: false);
            else if (_sceneWorkspaceTab.IsChecked != true)
                _eventsWorkspaceTab.IsChecked = true;
        };

        _workspaceContent = new Panel { Children = { _sceneTabContent } };
        var workspaceTabs = new Border
        {
            Background = EditorTheme.PanelBgRaisedBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 0, 0, 1),
            Height = 22,
            Child = new StackPanel
            {
                Orientation = Orientation.Horizontal,
                Children = { _sceneWorkspaceTab, _eventsWorkspaceTab },
            },
        };
        var workspaceBody = new DockPanel { LastChildFill = true };
        DockPanel.SetDock(workspaceTabs, Dock.Top);
        workspaceBody.Children.Add(workspaceTabs);
        workspaceBody.Children.Add(_workspaceContent);
        _workspaceShell = new Border
        {
            Background = EditorTheme.CanvasBgBrush,
            Child = workspaceBody,
        };

        _sectorList = new ListBox();
        EditorChrome.StyleList(_sectorList);
        _sectorList.SelectionChanged += (_, _) =>
        {
            if (_suppressPropertyEvents || _refreshGate.IsEntered)
                return;
            if (_sectorList.SelectedItem is SectorListItem item)
            {
                _suppressPropertyEvents = true;
                try
                {
                    _groupBox.Value = item.Group;
                    RebuildSectorCombo();
                    SelectSectorById(item.Sector, refresh: false);
                }
                finally
                {
                    _suppressPropertyEvents = false;
                }
                RefreshAll();
            }
        };

        _scriptList = new ListBox
        {
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontLabel,
        };
        EditorChrome.StyleList(_scriptList);
        _scriptList.SelectionChanged += (_, _) => OnScriptSelected();
        _scriptList.ItemTemplate = new FuncDataTemplate<ScriptLineItem>((item, _) =>
        {
            if (item.IsHeader)
            {
                return new TextBlock
                {
                    Text = item.Title,
                    FontFamily = EditorTheme.UiFont,
                    FontSize = EditorTheme.FontMeta,
                    FontWeight = FontWeight.SemiBold,
                    Foreground = EditorTheme.TextDimBrush,
                    Margin = new Thickness(EditorTheme.Space2, 2),
                    TextTrimming = TextTrimming.CharacterEllipsis,
                };
            }

            return BuildScriptColumns(
                new TextBlock
                {
                    Text = item.IndexText,
                    FontFamily = EditorTheme.MonoFont,
                    FontSize = EditorTheme.FontLabel,
                    Foreground = EditorTheme.TextMutedBrush,
                    VerticalAlignment = VerticalAlignment.Center,
                },
                new TextBlock
                {
                    Text = item.CommandName,
                    FontFamily = EditorTheme.UiFont,
                    FontSize = EditorTheme.FontLabel,
                    Foreground = EditorTheme.TextPrimaryBrush,
                    VerticalAlignment = VerticalAlignment.Center,
                    TextTrimming = TextTrimming.CharacterEllipsis,
                },
                new TextBlock
                {
                    Text = item.ArgsSummary,
                    FontFamily = EditorTheme.MonoFont,
                    FontSize = EditorTheme.FontMeta,
                    Foreground = EditorTheme.TextMutedBrush,
                    VerticalAlignment = VerticalAlignment.Center,
                    TextTrimming = TextTrimming.CharacterEllipsis,
                });
        }, true);
        _scriptHeaderRow = new Border
        {
            Background = EditorTheme.PanelBgRaisedBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 0, 0, 1),
            Padding = new Thickness(EditorTheme.Space2, 2),
            Child = BuildScriptColumns(
                new TextBlock { Text = "#", FontSize = EditorTheme.FontMeta, Foreground = EditorTheme.TextDimBrush, FontWeight = FontWeight.SemiBold },
                new TextBlock { Text = "Command", FontSize = EditorTheme.FontMeta, Foreground = EditorTheme.TextDimBrush, FontWeight = FontWeight.SemiBold },
                new TextBlock { Text = "Args", FontSize = EditorTheme.FontMeta, Foreground = EditorTheme.TextDimBrush, FontWeight = FontWeight.SemiBold }),
        };

        _entityList = new ListBox();
        EditorChrome.StyleList(_entityList);
        _entityList.SelectionChanged += (_, _) => OnEntityListSelected();

        _typeBox = EditorChrome.CompactNumeric(0, 255);
        _dirBox = EditorChrome.CompactNumeric(0, 255);
        _xBox = EditorChrome.CompactNumeric(0, 255);
        _yBox = EditorChrome.CompactNumeric(0, 255);
        _wBox = EditorChrome.CompactNumeric(0, 64);
        _hBox = EditorChrome.CompactNumeric(0, 64);
        _halfXToggle = EditorChrome.ToolToggle("Half X");
        _halfYToggle = EditorChrome.ToolToggle("Half Y");
        _typeBox.ValueChanged += (_, _) => ApplyEntityProps();
        _dirBox.ValueChanged += (_, _) => ApplyEntityProps();
        _xBox.ValueChanged += (_, _) => ApplyEntityProps();
        _yBox.ValueChanged += (_, _) => ApplyEntityProps();
        _wBox.ValueChanged += (_, _) => ApplyEntityProps();
        _hBox.ValueChanged += (_, _) => ApplyEntityProps();
        _halfXToggle.IsCheckedChanged += (_, _) => ApplyEntityProps();
        _halfYToggle.IsCheckedChanged += (_, _) => ApplyEntityProps();

        _propertyForm = new StackPanel
        {
            Spacing = 0,
            Children =
            {
                EditorChrome.InspectorSection("Transform",
                    EditorChrome.PropertyRow("Type", _typeBox),
                    EditorChrome.PropertyRow("Dir/Flags", _dirBox),
                    EditorChrome.PropertyRow("X", _xBox),
                    EditorChrome.PropertyRow("Y", _yBox),
                    EditorChrome.PropertyRow("Half", new StackPanel
                    {
                        Orientation = Orientation.Horizontal,
                        Spacing = EditorTheme.Space2,
                        Children = { _halfXToggle, _halfYToggle },
                    }),
                    EditorChrome.PropertyRow("Width", _wBox),
                    EditorChrome.PropertyRow("Height", _hBox)),
            },
        };

        _opBox = EditorChrome.CompactNumeric(0, 255);
        _argByteBox = EditorChrome.CompactNumeric(0, 255);
        _argShortBox = EditorChrome.CompactNumeric(short.MinValue, short.MaxValue);
        _arg1Box = EditorChrome.CompactNumeric(int.MinValue, int.MaxValue);
        _arg2Box = EditorChrome.CompactNumeric(int.MinValue, int.MaxValue);
        _argPtrBox = EditorChrome.CompactNumeric(int.MinValue, int.MaxValue);
        _opBox.ValueChanged += (_, _) => ApplyScriptProps();
        _argByteBox.ValueChanged += (_, _) => ApplyScriptProps();
        _argShortBox.ValueChanged += (_, _) => ApplyScriptProps();
        _arg1Box.ValueChanged += (_, _) => ApplyScriptProps();
        _arg2Box.ValueChanged += (_, _) => ApplyScriptProps();
        _argPtrBox.ValueChanged += (_, _) => ApplyScriptProps();

        _commandTitle = new TextBlock
        {
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontBody,
            FontWeight = FontWeight.SemiBold,
            Foreground = EditorTheme.TextSecondaryBrush,
            Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space2, EditorTheme.Space4, 0),
            Text = "No command selected",
        };
        _semanticPropertyHost = new StackPanel { Spacing = 0 };
        _rawPropertyHost = new StackPanel
        {
            Spacing = 0,
            IsVisible = false,
            Children =
            {
                EditorChrome.PropertyRow("Opcode", _opBox),
                EditorChrome.PropertyRow("ArgByte", _argByteBox),
                EditorChrome.PropertyRow("ArgShort", _argShortBox),
                EditorChrome.PropertyRow("Arg1", _arg1Box),
                EditorChrome.PropertyRow("Arg2", _arg2Box),
                EditorChrome.PropertyRow("ArgPtr", _argPtrBox),
            },
        };
        _rawFieldsToggle = EditorChrome.ToolToggle("Raw fields");
        _rawFieldsToggle.Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space2, EditorTheme.Space4, 0);
        _rawFieldsToggle.HorizontalAlignment = HorizontalAlignment.Left;
        _rawFieldsToggle.IsCheckedChanged += (_, _) =>
        {
            _rawPropertyHost.IsVisible = _rawFieldsToggle.IsChecked == true;
            RebuildSemanticProperties();
        };

        _scriptPropertyForm = new StackPanel
        {
            Spacing = 0,
            Children =
            {
                EditorChrome.SectionHeader("Command"),
                _commandTitle,
                _semanticPropertyHost,
                _rawFieldsToggle,
                _rawPropertyHost,
            },
        };

        _mapInfo = new TextBlock
        {
            Margin = new Thickness(EditorTheme.Space4),
            TextWrapping = TextWrapping.Wrap,
            FontFamily = EditorTheme.MonoFont,
            FontSize = EditorTheme.FontLabel,
            Foreground = EditorTheme.TextSecondaryBrush,
            LineHeight = 16,
        };

        _sceneRight = BuildSceneRightPanel();
        _mapRight = new ScrollViewer { Content = _mapInfo };
        _livesRight = BuildEntityKindPanel(SceneEntityKind.Live);
        _objectsRight = BuildEntityKindPanel(SceneEntityKind.Object);
        _effectsRight = BuildEntityKindPanel(SceneEntityKind.Effect);
        _eventsRight = BuildEntityKindPanel(SceneEntityKind.Event);
        _linksRight = new TextBlock
        {
            Text = "Links are drawn on the map viewport.",
            Margin = new Thickness(EditorTheme.Space4),
            TextWrapping = TextWrapping.Wrap,
            FontSize = EditorTheme.FontLabel,
            Foreground = EditorTheme.TextMutedBrush,
        };
        _scriptRight = BuildScriptRightPanel();

        _inspectorTabBar = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Margin = new Thickness(EditorTheme.Space2, EditorTheme.Space1),
        };
        foreach (var mode in new[] { "Scene", "Map", "Lives", "Objects", "Effects", "Events", "Links", "Script" })
        {
            var tab = EditorChrome.InspectorTab(mode, isChecked: mode == "Scene");
            var captured = mode;
            tab.IsCheckedChanged += (_, _) =>
            {
                if (tab.IsChecked == true)
                    SetInspectorMode(captured);
            };
            _inspectorTabBar.Children.Add(tab);
        }

        _inspectorContentHost = new Panel { Children = { _sceneRight } };

        var inspectorBody = new DockPanel { LastChildFill = true };
        var inspectorHeader = EditorChrome.PanelHeader("Inspector");
        var tabHost = new Border
        {
            Background = EditorTheme.PanelBgRaisedBrush,
            Child = new ScrollViewer
            {
                HorizontalScrollBarVisibility = ScrollBarVisibility.Auto,
                VerticalScrollBarVisibility = ScrollBarVisibility.Disabled,
                Content = _inspectorTabBar,
            },
        };
        DockPanel.SetDock(inspectorHeader, Dock.Top);
        DockPanel.SetDock(tabHost, Dock.Top);
        inspectorBody.Children.Add(inspectorHeader);
        inspectorBody.Children.Add(tabHost);
        inspectorBody.Children.Add(_inspectorContentHost);

        var inspector = new Border
        {
            Background = EditorTheme.PanelBgBrush,
            MinWidth = EditorTheme.SceneInspectorMinWidth,
            Child = inspectorBody,
        };

        var splitter = EditorChrome.ColumnSplitter();

        var root = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions($"*,3,{EditorTheme.SceneInspectorWidth}"),
            Background = EditorTheme.CanvasBgBrush,
            Children = { _workspaceShell, splitter, inspector },
        };
        Grid.SetColumn(_workspaceShell, 0);
        Grid.SetColumn(splitter, 1);
        Grid.SetColumn(inspector, 2);
        Content = root;

        KeyDown += OnKeyDown;
        Focusable = true;
    }

    private void ShowWorkspaceTab(bool scene)
    {
        _sceneWorkspaceTab.IsChecked = scene;
        _eventsWorkspaceTab.IsChecked = !scene;
        _workspaceContent.Children.Clear();
        _workspaceContent.Children.Add(scene ? _sceneTabContent : _eventsTabContent);
        if (_suppressPropertyEvents || _refreshGate.IsEntered)
            return;
        RefreshAll();
    }

    private void SetInspectorMode(string mode)
    {
        _inspectorMode = mode;
        foreach (var child in _inspectorTabBar.Children.OfType<ToggleButton>())
            child.IsChecked = Equals(child.Content?.ToString(), mode);

        var content = mode switch
        {
            "Map" => _mapRight,
            "Lives" => _livesRight,
            "Objects" => _objectsRight,
            "Effects" => _effectsRight,
            "Events" => _eventsRight,
            "Links" => _linksRight,
            "Script" => _scriptRight,
            _ => _sceneRight,
        };
        _inspectorContentHost.Children.Clear();
        if (content is not null)
            _inspectorContentHost.Children.Add(content);
        RefreshEntityListForActiveTab();
    }

    public void Load(
        RomImage rom,
        Charmap charmap,
        SceneDatabase database,
        ChangeService changes,
        Scene? scene = null,
        int? selectMapId = null,
        WorkingRom? workingRom = null)
    {
        _workingRom = workingRom;
        _rom = workingRom?.View ?? rom;
        _charmap = charmap;
        _database = database;
        _changes = changes;
        _scene = scene ?? (selectMapId is int id
            ? database.Scenes.FirstOrDefault(s => s.MapId == id)
            : database.Scenes.FirstOrDefault());
        var assetsRoot = CatalogBuilder.FindRepositoryRoot(rom.Path);
        _actorSprites = new ActorSpriteAtlas(assetsRoot, database.Profile);
        _objectSprites = new ObjectSpriteAtlas(assetsRoot);
        _groundEffects = new GroundEffectAtlas(rom);
        _portraitAtlas = new PortraitAtlas(rom, assetsRoot);
        _selectedEntity = null;
        _selectedCommand = null;
        _selectedStation = null;
        _groupBox.Value = 0;
        RebuildSectorCombo();
        RefreshAll();
    }

    public void RefreshFromExternal()
    {
        SyncWorkingRom();
        RefreshAll();
    }

    public void SyncWorkingRom()
    {
        if (_workingRom is null || _database is null)
            return;
        _workingRom.Sync(_database, _charmap);
        _rom = _workingRom.View;
    }

    private Control BuildSceneRightPanel()
    {
        var addSector = EditorChrome.IconButton("+", tip: "Add sector");
        var removeSector = EditorChrome.IconButton("−", tip: "Remove sector");
        var hideSector = EditorChrome.IconButton("V", tip: "Toggle sector visibility");
        var soloSectorBtn = EditorChrome.IconButton("S", tip: "Solo sector");
        addSector.Click += (_, _) => AddSector();
        removeSector.Click += (_, _) => RemoveSector();
        hideSector.Click += (_, _) => ToggleSectorVisibility();
        soloSectorBtn.Click += (_, _) => ToggleSectorSolo();

        var sectorHeader = EditorChrome.SectionHeader("Sectors");
        var sectorPanel = new DockPanel();
        DockPanel.SetDock(sectorHeader, Dock.Top);
        sectorPanel.Children.Add(sectorHeader);
        sectorPanel.Children.Add(_sectorList);

        var sectorButtons = new Border
        {
            Background = EditorTheme.PanelBgRaisedBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 1, 0, 1),
            Padding = new Thickness(EditorTheme.Space2, EditorTheme.Space1),
            Child = new StackPanel
            {
                Orientation = Orientation.Horizontal,
                Children = { addSector, removeSector, hideSector, soloSectorBtn },
            },
        };

        var scriptHeader = EditorChrome.SectionHeader("Scripts");
        var scriptPanel = new DockPanel();
        DockPanel.SetDock(scriptHeader, Dock.Top);
        DockPanel.SetDock(_scriptHeaderRow, Dock.Top);
        scriptPanel.Children.Add(scriptHeader);
        scriptPanel.Children.Add(_scriptHeaderRow);
        scriptPanel.Children.Add(_scriptList);

        var propsHost = new Border
        {
            Child = new ScrollViewer
            {
                Content = new StackPanel
                {
                    Children = { _scriptPropertyForm, _propertyForm },
                },
            },
        };

        var root = new Grid { RowDefinitions = new RowDefinitions("*,Auto,*,Auto") };
        root.Children.Add(sectorPanel);
        root.Children.Add(sectorButtons);
        Grid.SetRow(sectorButtons, 1);
        root.Children.Add(scriptPanel);
        Grid.SetRow(scriptPanel, 2);
        root.Children.Add(propsHost);
        Grid.SetRow(propsHost, 3);
        return root;
    }

    private void ToggleSectorVisibility()
    {
        var sector = CurrentSector();
        if (sector is null) return;
        if (!_hiddenSectors.Add(sector.Sector))
            _hiddenSectors.Remove(sector.Sector);
        RefreshSectors();
        RefreshMap();
    }

    private void ToggleSectorSolo()
    {
        var sector = CurrentSector();
        if (sector is null) return;
        _soloSector = _soloSector == sector.Sector ? null : sector.Sector;
        RefreshSectors();
        RefreshMap();
    }

    private Control BuildEntityKindPanel(SceneEntityKind kind)
    {
        var list = new ListBox { Tag = kind };
        EditorChrome.StyleList(list);
        list.SelectionChanged += (_, _) =>
        {
            if (list.SelectedItem is SceneEntity entity)
            {
                _selectedEntity = entity;
                RefreshProperties();
                RefreshMap();
            }
        };

        var add = EditorChrome.IconButton("+", tip: $"Add {kind}");
        var remove = EditorChrome.IconButton("−", tip: $"Remove selected {kind}");
        var dup = EditorChrome.ToolButton("Dup");
        ToolTip.SetTip(dup, $"Duplicate selected {kind}");
        add.Click += (_, _) => AddEntity(kind);
        remove.Click += (_, _) => RemoveSelectedEntity();
        dup.Click += (_, _) => DuplicateSelectedEntity();

        var actions = new Border
        {
            Background = EditorTheme.PanelBgRaisedBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 1, 0, 0),
            Padding = new Thickness(EditorTheme.Space2, EditorTheme.Space1),
            Child = new StackPanel
            {
                Orientation = Orientation.Horizontal,
                Children = { add, remove, dup },
            },
        };

        var hint = new TextBlock
        {
            Text = $"Select a {kind} on the map or list. Properties are on the Scene tab.",
            Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space3),
            TextWrapping = TextWrapping.Wrap,
            FontSize = EditorTheme.FontLabel,
            Foreground = EditorTheme.TextMutedBrush,
        };

        var panel = new Grid
        {
            RowDefinitions = new RowDefinitions("*,Auto,Auto"),
            Tag = list,
        };
        panel.Children.Add(list);
        panel.Children.Add(actions);
        Grid.SetRow(actions, 1);
        panel.Children.Add(hint);
        Grid.SetRow(hint, 2);
        return panel;
    }

    private Control BuildScriptRightPanel()
    {
        _scriptSummary = new TextBlock
        {
            Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space2, EditorTheme.Space4, EditorTheme.Space2),
            TextWrapping = TextWrapping.Wrap,
            FontSize = EditorTheme.FontLabel,
            Foreground = EditorTheme.TextSecondaryBrush,
            LineHeight = 16,
        };

        _scriptStationList = new ListBox();
        EditorChrome.StyleList(_scriptStationList);
        _scriptStationList.SelectionChanged += (_, _) =>
        {
            if (_suppressPropertyEvents)
                return;
            if (_scriptStationList.SelectedItem is ScriptStationListItem item)
            {
                _selectedScriptStation = item.Entry;
                _selectedStation = item.Entry.Station;
            }
        };
        _scriptStationList.DoubleTapped += (_, _) =>
        {
            if (_scriptStationList.SelectedItem is ScriptStationListItem item)
                OpenScriptEditor(item.Entry);
        };

        _scriptEmptyHint = new TextBlock
        {
            Text = "No station scripts in this scene. Add one for the current map sector, or open the full editor.",
            Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space3),
            TextWrapping = TextWrapping.Wrap,
            FontSize = EditorTheme.FontLabel,
            Foreground = EditorTheme.TextMutedBrush,
            IsVisible = false,
        };

        var add = EditorChrome.IconButton("+", tip: "Add station script to current sector");
        add.Click += (_, _) => AddStationScript();
        var open = EditorChrome.ToolButton("Open script editor", primary: true);
        open.Click += (_, _) =>
        {
            if (_scriptStationList.SelectedItem is ScriptStationListItem item)
                OpenScriptEditor(item.Entry);
            else
                OpenScriptEditor();
        };

        var actions = new Border
        {
            Background = EditorTheme.PanelBgRaisedBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 1, 0, 0),
            Padding = new Thickness(EditorTheme.Space2, EditorTheme.Space1),
            Child = new StackPanel
            {
                Orientation = Orientation.Horizontal,
                Spacing = EditorTheme.Space2,
                Children = { add, open },
            },
        };

        var hint = new TextBlock
        {
            Text = "Select a station and open the editor to jump to its @station section. Max 64 stations per sector.",
            Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space2, EditorTheme.Space4, EditorTheme.Space3),
            TextWrapping = TextWrapping.Wrap,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextMutedBrush,
        };

        var listHost = new Panel();
        listHost.Children.Add(_scriptStationList);
        listHost.Children.Add(_scriptEmptyHint);

        var header = new StackPanel
        {
            Children =
            {
                EditorChrome.SectionHeader("Script"),
                _scriptSummary,
            },
        };

        var panel = new Grid
        {
            RowDefinitions = new RowDefinitions("Auto,*,Auto,Auto"),
        };
        panel.Children.Add(header);
        Grid.SetRow(header, 0);
        panel.Children.Add(listHost);
        Grid.SetRow(listHost, 1);
        panel.Children.Add(actions);
        Grid.SetRow(actions, 2);
        panel.Children.Add(hint);
        Grid.SetRow(hint, 3);
        return panel;
    }

    private void RefreshEntityListForActiveTab()
    {
        var kind = _inspectorMode switch
        {
            "Lives" => SceneEntityKind.Live,
            "Objects" => SceneEntityKind.Object,
            "Effects" => SceneEntityKind.Effect,
            "Events" => SceneEntityKind.Event,
            _ => (SceneEntityKind?)null,
        };
        if (kind is null)
            return;

        var panel = kind switch
        {
            SceneEntityKind.Live => _livesRight,
            SceneEntityKind.Object => _objectsRight,
            SceneEntityKind.Effect => _effectsRight,
            SceneEntityKind.Event => _eventsRight,
            _ => null,
        };
        if (panel is not Grid { Tag: ListBox list })
            return;

        var sector = CurrentSector();
        list.ItemsSource = sector?.ListFor(kind.Value).ToArray() ?? Array.Empty<SceneEntity>();
    }

    private void RefreshAll()
    {
        _refreshGate.Run(() =>
        {
            RefreshSectors();
            RefreshScripts();
            RefreshEntityListForActiveTab();
            RefreshProperties();
            RefreshMap();
            RefreshMapInfo();
            RefreshEventsTab();
            RefreshScriptTab();
            UpdateUndoButtons();
        });
    }

    private void RefreshSectors()
    {
        if (_scene is null)
        {
            _suppressPropertyEvents = true;
            try { _sectorList.ItemsSource = null; }
            finally { _suppressPropertyEvents = false; }
            return;
        }

        var items = new List<SectorListItem>();
        foreach (var group in _scene.Groups)
        {
            foreach (var sector in group.Sectors)
            {
                var visible = !_hiddenSectors.Contains(sector.Sector);
                var soloMark = _soloSector == sector.Sector ? "S" : "";
                items.Add(new SectorListItem(
                    group.Index,
                    sector.Sector,
                    $"Sector {sector.Sector} ({sector.Objects.Count} objs, {sector.Lives.Count} acts){(visible ? "" : " [hidden]")} {soloMark}",
                    sector));
            }
        }

        _suppressPropertyEvents = true;
        try
        {
            _sectorList.ItemsSource = items;
        }
        finally
        {
            _suppressPropertyEvents = false;
        }
    }

    private void RebuildSectorCombo()
    {
        var group = _scene?.Groups.ElementAtOrDefault((int)(_groupBox.Value ?? 0));
        var items = group?.Sectors.Select(s => $"Sector {s.Sector}").ToArray()
            ?? Array.Empty<string>();
        var previous = _sectorBox.SelectedIndex;
        _suppressPropertyEvents = true;
        try
        {
            _sectorBox.ItemsSource = items;
            if (_sectorBox.ItemCount > 0)
                _sectorBox.SelectedIndex = Math.Clamp(previous, 0, _sectorBox.ItemCount - 1);
        }
        finally
        {
            _suppressPropertyEvents = false;
        }
    }

    private void SelectSectorIndex(int sectorComboIndex)
    {
        var ids = CurrentSectorIds();
        if ((uint)sectorComboIndex >= (uint)ids.Count)
            return;
        SelectSectorById(ids[sectorComboIndex], refresh: true);
    }

    private void SelectSectorById(int sectorId, bool refresh)
    {
        var ids = CurrentSectorIds();
        var index = SceneVisibility.IndexOfSectorId(ids, sectorId);
        if (index < 0 || _sectorBox.ItemCount <= index)
            return;
        if (_sectorBox.SelectedIndex == index)
        {
            if (refresh)
                RefreshAll();
            return;
        }

        _suppressPropertyEvents = true;
        try
        {
            _sectorBox.SelectedIndex = index;
        }
        finally
        {
            _suppressPropertyEvents = false;
        }

        if (refresh)
            RefreshAll();
    }

    private IReadOnlyList<int> CurrentSectorIds()
    {
        var group = _scene?.Groups.ElementAtOrDefault((int)(_groupBox.Value ?? 0));
        if (group is null)
            return Array.Empty<int>();
        return group.Sectors.Select(sector => sector.Sector).ToArray();
    }

    private SceneSector? CurrentSector()
    {
        if (_scene is null)
            return null;
        var g = (int)(_groupBox.Value ?? 0);
        var s = Math.Max(0, _sectorBox.SelectedIndex);
        return _scene.Groups.ElementAtOrDefault(g)?.Sectors.ElementAtOrDefault(s);
    }

    private void RefreshScripts()
    {
        var sector = CurrentSector();
        if (sector is null)
        {
            _scriptList.ItemsSource = null;
            return;
        }

        var lines = new List<ScriptLineItem>();
        foreach (var station in sector.Stations)
        {
            lines.Add(ScriptLineItem.Header(station, $"— {station.Name} ({station.Commands.Count}) —"));
            for (var i = 0; i < station.Commands.Count; i++)
            {
                var cmd = station.Commands[i];
                lines.Add(ScriptLineItem.FromCommand(station, cmd, i));
            }
        }

        if (_database is not null)
        {
            foreach (var fn in _database.FunctionScripts.Take(32))
                lines.Add(ScriptLineItem.Header(fn, $"— fn {fn.Name} —"));
        }

        if (lines.Count == 0)
            lines.Add(ScriptLineItem.Header(null, "(no station scripts)"));
        _scriptList.ItemsSource = lines;
    }

    private void RefreshEventsTab()
    {
        var sector = CurrentSector();
        _eventsScriptList.ItemsSource = sector?.Stations
            .SelectMany((station, si) => station.Commands.Select((cmd, ci) =>
                ScriptLineItem.FromCommand(station, cmd, ci)))
            .ToArray() ?? Array.Empty<ScriptLineItem>();

        var station = _selectedStation ?? sector?.Stations.FirstOrDefault();
        var max = Math.Max(0, (station?.Commands.Count ?? 1) - 1);
        _commandSlider.Maximum = max;
        if (_commandSlider.Value > max)
            _commandSlider.Value = max;
    }

    private void RefreshScriptTab()
    {
        if (_scriptSummary is null || _scriptStationList is null)
            return;
        if (_scene is null)
        {
            _scriptSummary.Text = "Load a scene to edit its station scripts.";
            _scriptStationList.ItemsSource = Array.Empty<ScriptStationListItem>();
            if (_scriptEmptyHint is not null)
            {
                _scriptEmptyHint.IsVisible = false;
                _scriptStationList.IsVisible = true;
            }
            return;
        }

        var entries = SceneStations.Enumerate(_scene);
        _scriptSummary.Text = $"{_scene.Name}\n{SceneStations.Summarize(_scene)}";
        _suppressPropertyEvents = true;
        try
        {
            _scriptStationList.ItemsSource = entries.Select(entry => new ScriptStationListItem(entry)).ToArray();
            if (_selectedScriptStation is { } selected)
            {
                var matchIndex = -1;
                for (var i = 0; i < entries.Count; i++)
                {
                    var entry = entries[i];
                    if (entry.Group == selected.Group &&
                        entry.Sector == selected.Sector &&
                        entry.StationIndex == selected.StationIndex)
                    {
                        matchIndex = i;
                        _selectedScriptStation = entry;
                        break;
                    }
                }
                _scriptStationList.SelectedIndex = matchIndex;
            }
        }
        finally
        {
            _suppressPropertyEvents = false;
        }
        if (_scriptEmptyHint is not null)
        {
            _scriptEmptyHint.IsVisible = entries.Count == 0;
            _scriptStationList.IsVisible = entries.Count > 0;
        }
    }

    private void AddStationScript()
    {
        if (_scene is null || _changes is null)
            return;
        var sector = CurrentSector();
        if (sector is null)
        {
            _status.Text = "Select a map sector before adding a station script.";
            return;
        }

        try
        {
            var added = SceneEditing.AddStation(_changes, _scene, sector);
            var entries = SceneStations.Enumerate(_scene);
            _selectedScriptStation = entries.FirstOrDefault(entry => entry.Station == added);
            _selectedStation = added;
            SyncWorkingRom();
            RefreshAll();
            DirtyChanged?.Invoke(this, EventArgs.Empty);
            _status.Text = $"Added station {_selectedScriptStation?.Identity ?? "g?/s?"} (RET stub).";
        }
        catch (InvalidOperationException exception)
        {
            _status.Text = exception.Message;
        }
    }

    private void RefreshMapInfo()
    {
        if (_scene is null)
        {
            _mapInfo.Text = string.Empty;
            return;
        }
        _mapInfo.Text =
            $"{_scene.Name}\nMap ID {_scene.MapId}\nHeader 0x{_scene.HeaderOffset:X}\n" +
            $"Groups {_scene.Groups.Count}\nLinks {_scene.Links.Count}\n" +
            $"BMA {_scene.Map?.BmaName}\nBPL {_scene.Map?.BplName}\nBPC {_scene.Map?.BpcName}";
    }

    private void RefreshProperties()
    {
        _suppressPropertyEvents = true;
        try
        {
            if (_selectedEntity is null)
            {
                _typeBox.Value = 0;
                _dirBox.Value = 0;
                _xBox.Value = 0;
                _yBox.Value = 0;
                _wBox.Value = 1;
                _hBox.Value = 1;
                _halfXToggle.IsChecked = false;
                _halfYToggle.IsChecked = false;
            }
            else
            {
                _typeBox.Value = _selectedEntity.TypeId;
                _dirBox.Value = _selectedEntity.DirectionOrFlags;
                _xBox.Value = _selectedEntity.Position.XTiles;
                _yBox.Value = _selectedEntity.Position.YTiles;
                _wBox.Value = _selectedEntity.Width;
                _hBox.Value = _selectedEntity.Height;
                _halfXToggle.IsChecked =
                    (_selectedEntity.Position.XFlags & CompactPos.FlagHalfTile) != 0;
                _halfYToggle.IsChecked =
                    (_selectedEntity.Position.YFlags & CompactPos.FlagHalfTile) != 0;
            }

            if (_selectedCommand is null)
            {
                _commandTitle.Text = "No command selected";
                _opBox.Value = 0;
                _argByteBox.Value = 0;
                _argShortBox.Value = 0;
                _arg1Box.Value = 0;
                _arg2Box.Value = 0;
                _argPtrBox.Value = 0;
            }
            else
            {
                _commandTitle.Text = ScriptCommandSchema.CommandName(_selectedCommand);
                _opBox.Value = _selectedCommand.Op;
                _argByteBox.Value = _selectedCommand.ArgByte;
                _argShortBox.Value = _selectedCommand.ArgShort;
                _arg1Box.Value = _selectedCommand.Arg1;
                _arg2Box.Value = _selectedCommand.Arg2;
                _argPtrBox.Value = unchecked((int)_selectedCommand.ArgPtr);
            }
        }
        finally
        {
            _suppressPropertyEvents = false;
        }

        RebuildSemanticProperties();
    }

    private void RebuildSemanticProperties()
    {
        _semanticPropertyHost.Children.Clear();
        if (_selectedCommand is null)
            return;

        var fields = ScriptCommandSchema.GetSemanticFields(_selectedCommand.Op);
        if (fields is null || fields.Count == 0)
        {
            if (_rawFieldsToggle.IsChecked != true)
            {
                _semanticPropertyHost.Children.Add(new TextBlock
                {
                    Text = "No semantic fields — enable Raw fields.",
                    FontSize = EditorTheme.FontMeta,
                    Foreground = EditorTheme.TextDimBrush,
                    Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space2),
                    TextWrapping = TextWrapping.Wrap,
                });
            }
            return;
        }

        _suppressPropertyEvents = true;
        try
        {
            foreach (var binding in fields)
            {
                var spin = binding.Field switch
                {
                    ScriptArgField.ArgByte => EditorChrome.CompactNumeric(0, 255),
                    ScriptArgField.ArgShort => EditorChrome.CompactNumeric(short.MinValue, short.MaxValue),
                    ScriptArgField.Op => EditorChrome.CompactNumeric(0, 255),
                    _ => EditorChrome.CompactNumeric(int.MinValue, int.MaxValue),
                };
                spin.Value = ScriptCommandSchema.Read(_selectedCommand, binding.Field);
                var captured = binding;
                spin.ValueChanged += (_, _) =>
                {
                    if (_suppressPropertyEvents || _changes is null || _selectedCommand is null)
                        return;
                    var value = (int)(spin.Value ?? 0);
                    var current = ScriptCommandSchema.Read(_selectedCommand, captured.Field);
                    if (value == current)
                        return;
                    var fieldName = captured.Field switch
                    {
                        ScriptArgField.Op => "op",
                        ScriptArgField.ArgByte => "argByte",
                        ScriptArgField.ArgShort => "argShort",
                        ScriptArgField.Arg1 => "arg1",
                        ScriptArgField.Arg2 => "arg2",
                        ScriptArgField.ArgPtr => "argPtr",
                        _ => "arg1",
                    };
                    SceneEditing.SetCommandArgument(_changes, _selectedCommand, fieldName, value);
                    RefreshScripts();
                    DirtyChanged?.Invoke(this, EventArgs.Empty);
                };
                _semanticPropertyHost.Children.Add(EditorChrome.PropertyRow(binding.Label, spin));
            }
        }
        finally
        {
            _suppressPropertyEvents = false;
        }
    }

    private void RefreshMap()
    {
        if (_rom is null || _scene is null)
            return;
        var g = (int)(_groupBox.Value ?? 0);
        var s = Math.Max(0, _sectorBox.SelectedIndex);
        if (_hiddenSectors.Contains(s) && _soloSector is null)
        {
            _status.Text = $"Sector {s} is hidden.";
        }

        string? hud = null;
        var station = _selectedStation ?? CurrentSector()?.Stations.FirstOrDefault();
        if (_rom is not null && station is not null)
        {
            var preview = SceneCompositor.BuildPreviewState(
                _rom, _scene, _charmap, g, s, (int)_commandSlider.Value, station,
                _database?.DialogueByOffset);
            hud = preview.Dialogue;
            var note = preview.Notes.Count == 0 ? "" : " | " + preview.Notes[^1];
            var incomplete = preview.SimulationIncomplete ? " | simulation incomplete" : "";
            _eventsHud.Text = string.IsNullOrWhiteSpace(preview.Dialogue)
                ? $"Cmd {(int)_commandSlider.Value}{note}{incomplete}"
                : $"\"{Truncate(preview.Dialogue, 80)}\"{note}";
            _status.Text = $"{_scene.Name} g{g} s{s}{note}{incomplete}";
        }
        else
        {
            _status.Text = _scene.Name;
        }

        _map.Configure(
            _rom!, _scene, g, s, _selectedEntity,
            _livesToggle.IsChecked == true,
            _objectsToggle.IsChecked == true,
            _effectsToggle.IsChecked == true,
            _eventsToggle.IsChecked == true,
            _linksToggle.IsChecked == true,
            _gridToggle.IsChecked == true,
            hud,
            visibleSectors: ResolveVisibleSectors(g),
            actorSprites: _actorSprites,
            objectSprites: _objectSprites,
            groundEffects: _groundEffects);
    }

    private HashSet<int> ResolveVisibleSectors(int group)
    {
        var sectors = _scene?.Groups.ElementAtOrDefault(group)?.Sectors ?? [];
        var current = CurrentSector();
        var selectedId = current?.Sector ?? 0;
        return SceneVisibility.ResolveVisibleSectorIds(
            sectors.Select(sector => sector.Sector),
            selectedId,
            _hiddenSectors,
            _soloSector);
    }

    private void ApplyEntityProps()
    {
        if (_suppressPropertyEvents || _changes is null || _selectedEntity is null)
            return;
        var type = (byte)(_typeBox.Value ?? 0);
        var dir = (byte)(_dirBox.Value ?? 0);
        var x = (byte)(_xBox.Value ?? 0);
        var y = (byte)(_yBox.Value ?? 0);
        var w = (byte)(_wBox.Value ?? 1);
        var h = (byte)(_hBox.Value ?? 1);

        if (_selectedEntity.TypeId != type)
            SceneEditing.SetEntityType(_changes, _selectedEntity, type);
        if (_selectedEntity.DirectionOrFlags != dir)
            SceneEditing.SetEntityDirection(_changes, _selectedEntity, dir);
        if (_selectedEntity.Width != w || _selectedEntity.Height != h)
            SceneEditing.SetEntitySize(_changes, _selectedEntity, w, h);
        var pos = new CompactPos(x, y, _selectedEntity.Position.XFlags, _selectedEntity.Position.YFlags);
        if (pos.XTiles != _selectedEntity.Position.XTiles || pos.YTiles != _selectedEntity.Position.YTiles)
            SceneEditing.MoveEntity(_changes, _selectedEntity, pos);
        var halfX = _halfXToggle.IsChecked == true;
        var halfY = _halfYToggle.IsChecked == true;
        var wantX = halfX
            ? (byte)(_selectedEntity.Position.XFlags | CompactPos.FlagHalfTile)
            : (byte)(_selectedEntity.Position.XFlags & ~CompactPos.FlagHalfTile);
        var wantY = halfY
            ? (byte)(_selectedEntity.Position.YFlags | CompactPos.FlagHalfTile)
            : (byte)(_selectedEntity.Position.YFlags & ~CompactPos.FlagHalfTile);
        if (wantX != _selectedEntity.Position.XFlags || wantY != _selectedEntity.Position.YFlags)
            SceneEditing.SetEntityHalfTileFlags(_changes, _selectedEntity, halfX, halfY);

        RefreshMap();
        DirtyChanged?.Invoke(this, EventArgs.Empty);
    }

    private void ApplyScriptProps()
    {
        if (_suppressPropertyEvents || _changes is null || _selectedCommand is null)
            return;
        void Set(string field, int value, int current)
        {
            if (value != current)
                SceneEditing.SetCommandArgument(_changes, _selectedCommand, field, value);
        }
        Set("op", (int)(_opBox.Value ?? 0), _selectedCommand.Op);
        Set("argByte", (int)(_argByteBox.Value ?? 0), _selectedCommand.ArgByte);
        Set("argShort", (int)(_argShortBox.Value ?? 0), _selectedCommand.ArgShort);
        Set("arg1", (int)(_arg1Box.Value ?? 0), _selectedCommand.Arg1);
        Set("arg2", (int)(_arg2Box.Value ?? 0), _selectedCommand.Arg2);
        Set("argPtr", (int)(_argPtrBox.Value ?? 0), unchecked((int)_selectedCommand.ArgPtr));
        RefreshScripts();
        RebuildSemanticProperties();
        DirtyChanged?.Invoke(this, EventArgs.Empty);
    }

    private void OnScriptSelected()
    {
        if (_scriptList.SelectedItem is not ScriptLineItem item)
            return;
        _selectedStation = item.Station;
        _selectedCommand = item.Command;
        if (item.Command is not null && item.Station is not null)
        {
            var idx = item.Station.Commands.IndexOf(item.Command);
            if (idx >= 0)
                _commandSlider.Value = idx;
        }
        RefreshProperties();
        RefreshMap();
    }

    private void OnEventsScriptSelected()
    {
        if (_eventsScriptList.SelectedItem is not ScriptLineItem item)
            return;
        _selectedStation = item.Station;
        _selectedCommand = item.Command;
        if (item.Command is not null && item.Station is not null)
        {
            var idx = item.Station.Commands.IndexOf(item.Command);
            if (idx >= 0)
                _commandSlider.Value = idx;
        }
        RefreshProperties();
        RefreshMap();
    }

    private void OnEntityListSelected()
    {
        if (_entityList.SelectedItem is SceneEntity entity)
        {
            _selectedEntity = entity;
            RefreshProperties();
            RefreshMap();
        }
    }

    private void SyncEntityListSelection()
    {
        // Best-effort; entity lists on kind tabs refresh on tab switch.
    }

    private void AddEntity(SceneEntityKind kind)
    {
        var sector = CurrentSector();
        if (_changes is null || sector is null)
            return;
        _selectedEntity = SceneEditing.AddEntity(_changes, sector, kind);
        RefreshAll();
        DirtyChanged?.Invoke(this, EventArgs.Empty);
    }

    private void RemoveSelectedEntity()
    {
        var sector = CurrentSector();
        if (_changes is null || sector is null || _selectedEntity is null)
            return;
        SceneEditing.RemoveEntity(_changes, sector, _selectedEntity);
        _selectedEntity = null;
        RefreshAll();
        DirtyChanged?.Invoke(this, EventArgs.Empty);
    }

    private void DuplicateSelectedEntity()
    {
        var sector = CurrentSector();
        if (_changes is null || sector is null || _selectedEntity is null)
            return;
        _selectedEntity = SceneEditing.DuplicateEntity(_changes, sector, _selectedEntity);
        RefreshAll();
        DirtyChanged?.Invoke(this, EventArgs.Empty);
    }

    private void AddSector()
    {
        if (_changes is null || _scene is null)
            return;
        var group = _scene.Groups.ElementAtOrDefault((int)(_groupBox.Value ?? 0));
        if (group is null)
            return;
        SceneEditing.AddSector(_changes, group);
        RebuildSectorCombo();
        RefreshAll();
        DirtyChanged?.Invoke(this, EventArgs.Empty);
    }

    private void RemoveSector()
    {
        if (_changes is null || _scene is null)
            return;
        var group = _scene.Groups.ElementAtOrDefault((int)(_groupBox.Value ?? 0));
        var sector = CurrentSector();
        if (group is null || sector is null)
            return;
        try
        {
            SceneEditing.RemoveSector(_changes, group, sector);
            RebuildSectorCombo();
            RefreshAll();
            DirtyChanged?.Invoke(this, EventArgs.Empty);
        }
        catch (Exception exception)
        {
            _status.Text = exception.Message;
        }
    }

    public bool TryHandleCommand(EditorCommandId command)
    {
        switch (command)
        {
            case EditorCommandId.Undo:
                if (_changes is null) return false;
                _changes.Undo();
                SyncWorkingRom();
                RefreshAll();
                DirtyChanged?.Invoke(this, EventArgs.Empty);
                return true;
            case EditorCommandId.Redo:
                if (_changes is null) return false;
                _changes.Redo();
                SyncWorkingRom();
                RefreshAll();
                DirtyChanged?.Invoke(this, EventArgs.Empty);
                return true;
            case EditorCommandId.DeleteSelection:
                if (_selectedEntity is null) return false;
                RemoveSelectedEntity();
                return true;
            case EditorCommandId.SelectTool:
                _selectTool.IsChecked = true;
                _panTool.IsChecked = false;
                _map.Tool = SceneMapTool.Select;
                return true;
            case EditorCommandId.PanTool:
                _panTool.IsChecked = true;
                _selectTool.IsChecked = false;
                _map.Tool = SceneMapTool.Pan;
                return true;
            case EditorCommandId.ToggleGrid:
                _gridToggle.IsChecked = _gridToggle.IsChecked != true;
                return true;
            default:
                return false;
        }
    }

    private void OnKeyDown(object? sender, KeyEventArgs e)
    {
        if (!IsKeyboardFocusWithin || _changes is null)
            return;

        var focus = EditorShellFocus.Resolve(this, sceneCanvasFocused: true);
        var chord = new KeyChord(
            e.Key.ToString(),
            e.KeyModifiers.HasFlag(KeyModifiers.Control),
            e.KeyModifiers.HasFlag(KeyModifiers.Shift),
            e.KeyModifiers.HasFlag(KeyModifiers.Alt));
        if (EditorCommandRouter.TryResolve(_keymap, chord, focus, out var command) &&
            TryHandleCommand(command))
        {
            e.Handled = true;
            return;
        }

        if (_selectedEntity is null)
            return;
        var dx = e.Key switch { Key.Left => -1, Key.Right => 1, _ => 0 };
        var dy = e.Key switch { Key.Up => -1, Key.Down => 1, _ => 0 };
        if (dx == 0 && dy == 0)
            return;
        var pos = _selectedEntity.Position;
        SceneEditing.MoveEntity(_changes, _selectedEntity, new CompactPos(
            (byte)Math.Clamp(pos.XTiles + dx, 0, 255),
            (byte)Math.Clamp(pos.YTiles + dy, 0, 255),
            pos.XFlags, pos.YFlags));
        RefreshAll();
        DirtyChanged?.Invoke(this, EventArgs.Empty);
        e.Handled = true;
    }

    public async Task OpenScenePlayAsync()
    {
        if (_rom is null || _scene is null || _database is null)
            return;

        SyncWorkingRom();

        var group = (int)(_groupBox.Value ?? 0);
        var sector = Math.Max(0, _sectorBox.SelectedIndex);
        var (playGroup, playSector) = ScenePlayPresets.ResolvePlayTarget(_scene, group, sector);
        var session = CreatePlaySession(_scene, playGroup, playSector);

        var playlist = SceneStoryPlaylist.Build(_rom, _database);
        var startIndex = playlist.FindIndex(_scene.MapId, playGroup, playSector, fallbackToMapOnly: true);
        var cursor = new ScenePlayCursor(playlist, startIndex >= 0 ? startIndex : 0);

        var navigator = playlist.Beats.Count == 0
            ? null
            : new ScenePlayNavigator
            {
                Cursor = cursor,
                CreateForBeat = CreatePlaySessionForBeat,
            };

        string BeatLabel(ScenePlayBeat beat)
        {
            var scene = _database.FindScene(beat.MapId);
            var name = scene?.Name;
            if (string.IsNullOrWhiteSpace(name) && scene?.Map is not null)
                name = GroundMapNames.GetDisplayName(scene.Map.Name) ?? scene.Map.Name;
            return beat.FormatLabel(name);
        }

        var owner = TopLevel.GetTopLevel(this) as Window;
        var play = new ScenePlayWindow(
            session,
            romPath: _rom.Path,
            navigator: navigator,
            beatLabel: BeatLabel);
        if (owner is not null)
            await play.ShowDialog(owner);
        else
            play.Show();
    }

    private async void OpenScriptEditor(SceneStationEntry? focus = null)
    {
        if (_scene is null || _changes is null)
            return;

        var owner = TopLevel.GetTopLevel(this) as Window;
        var editor = focus is { } entry
            ? new SceneScriptWindow(_scene, _changes, _database, entry.Group, entry.Sector, entry.StationIndex)
            : new SceneScriptWindow(_scene, _changes, _database);
        editor.Applied += (_, _) =>
        {
            SyncWorkingRom();
            RefreshAll();
            DirtyChanged?.Invoke(this, EventArgs.Empty);
        };
        if (owner is not null)
            await editor.ShowDialog(owner);
        else
            editor.Show();
    }

    private ScenePlaySession? CreatePlaySessionForBeat(ScenePlayBeat beat)
    {
        if (_rom is null || _database is null)
            return null;
        var scene = _database.FindScene(beat.MapId);
        if (scene is null)
            return null;
        return CreatePlaySession(scene, beat.Group, beat.Sector);
    }

    private ScenePlaySession CreatePlaySession(Scene scene, int group, int sector)
    {
        var (playGroup, playSector) = ScenePlayPresets.ResolvePlayTarget(scene, group, sector);
        var appearance = PlayAppearance.CharmanderAndBulbasaur;
        _portraitAtlas ??= new PortraitAtlas(_rom!, CatalogBuilder.FindRepositoryRoot(_rom!.Path));
        return new ScenePlaySession(
            _rom!,
            scene,
            playGroup,
            playSector,
            actorSprites: _actorSprites,
            objectSprites: _objectSprites,
            groundEffects: _groundEffects,
            charmap: _charmap,
            appearance: appearance,
            profile: _database?.Profile,
            portraits: _portraitAtlas,
            dialogue: _database?.DialogueByOffset);
    }

    private void UpdateUndoButtons()
    {
        _undoButton.IsEnabled = _changes?.CanUndo == true;
        _redoButton.IsEnabled = _changes?.CanRedo == true;
    }

    private static Grid BuildScriptColumns(Control index, Control command, Control args)
    {
        var grid = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions("44,*,110"),
            Margin = new Thickness(0, 1),
        };
        grid.Children.Add(index);
        grid.Children.Add(command);
        Grid.SetColumn(command, 1);
        grid.Children.Add(args);
        Grid.SetColumn(args, 2);
        return grid;
    }

    private static string Truncate(string text, int max) =>
        text.Length <= max ? text : text[..(max - 1)] + "…";

    private sealed record SectorListItem(int Group, int Sector, string Title, SceneSector Data)
    {
        public override string ToString() => Title;
    }

    private sealed record ScriptStationListItem(SceneStationEntry Entry)
    {
        public override string ToString() => Entry.DisplayLabel;
    }

    private sealed record ScriptLineItem(
        ScriptRefData? Station,
        ScriptCommandData? Command,
        string Title,
        string IndexText,
        string CommandName,
        string ArgsSummary,
        bool IsHeader)
    {
        public override string ToString() => Title;

        public static ScriptLineItem Header(ScriptRefData? station, string title) =>
            new(station, null, title, "", "", "", true);

        public static ScriptLineItem FromCommand(ScriptRefData station, ScriptCommandData command, int index) =>
            new(
                station,
                command,
                $"{index:D3} {ScriptCommandSchema.CommandName(command)}",
                $"{index:D3}",
                ScriptCommandSchema.CommandName(command),
                ScriptCommandSchema.ArgumentSummary(command),
                false);
    }
}
