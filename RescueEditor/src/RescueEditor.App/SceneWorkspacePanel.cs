using Avalonia;
using Avalonia.Controls;
using Avalonia.Controls.Primitives;
using Avalonia.Input;
using Avalonia.Layout;
using Avalonia.Media;
using RescueEditor.Core;

namespace RescueEditor.App;

public sealed class SceneWorkspacePanel : UserControl
{
    private readonly TabControl _centerTabs;
    private readonly SceneMapCanvas _map;
    private readonly ListBox _sectorList;
    private readonly ListBox _scriptList;
    private readonly ListBox _entityList;
    private readonly ListBox _eventsScriptList;
    private readonly StackPanel _propertyForm;
    private readonly StackPanel _scriptPropertyForm;
    private readonly TextBlock _status;
    private readonly TextBlock _mapInfo;
    private readonly NumericUpDown _groupBox;
    private readonly ComboBox _sectorBox;
    private readonly CheckBox _livesToggle;
    private readonly CheckBox _objectsToggle;
    private readonly CheckBox _effectsToggle;
    private readonly CheckBox _eventsToggle;
    private readonly CheckBox _linksToggle;
    private readonly CheckBox _gridToggle;
    private readonly ToggleButton _selectTool;
    private readonly ToggleButton _panTool;
    private readonly Button _undoButton;
    private readonly Button _redoButton;
    private readonly TabControl _rightTabs;
    private readonly Slider _commandSlider;
    private readonly TextBlock _eventsHud;

    private readonly NumericUpDown _typeBox;
    private readonly NumericUpDown _dirBox;
    private readonly NumericUpDown _xBox;
    private readonly NumericUpDown _yBox;
    private readonly NumericUpDown _wBox;
    private readonly NumericUpDown _hBox;
    private readonly NumericUpDown _opBox;
    private readonly NumericUpDown _argByteBox;
    private readonly NumericUpDown _argShortBox;
    private readonly NumericUpDown _arg1Box;
    private readonly NumericUpDown _arg2Box;
    private readonly NumericUpDown _argPtrBox;

    private RomImage? _rom;
    private Charmap? _charmap;
    private SceneDatabase? _database;
    private ChangeService? _changes;
    private Scene? _scene;
    private SceneEntity? _selectedEntity;
    private ScriptCommandData? _selectedCommand;
    private ScriptRefData? _selectedStation;
    private bool _suppressPropertyEvents;
    private readonly HashSet<int> _hiddenSectors = new();
    private int? _soloSector;

    public event EventHandler? DirtyChanged;

    public SceneWorkspacePanel()
    {
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
        _map.CursorMoved += (_, xy) => { /* coord label lives on canvas */ };

        _groupBox = new NumericUpDown { Minimum = 0, Maximum = 255, Width = 64, Value = 0 };
        _groupBox.ValueChanged += (_, _) => { RebuildSectorCombo(); RefreshAll(); };
        _sectorBox = new ComboBox { MinWidth = 120 };
        _sectorBox.SelectionChanged += (_, _) => RefreshAll();

        _livesToggle = MakeToggle("Lives", true);
        _objectsToggle = MakeToggle("Objects", true);
        _effectsToggle = MakeToggle("Effects", true);
        _eventsToggle = MakeToggle("Events", true);
        _linksToggle = MakeToggle("Links", true);
        _gridToggle = MakeToggle("Grid", false);

        _selectTool = new ToggleButton { Content = "Select", IsChecked = true, Margin = new Thickness(2, 0), Padding = new Thickness(8, 4) };
        _panTool = new ToggleButton { Content = "Pan", Margin = new Thickness(2, 0), Padding = new Thickness(8, 4) };
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

        _undoButton = new Button { Content = "Undo", Margin = new Thickness(4, 0) };
        _redoButton = new Button { Content = "Redo", Margin = new Thickness(4, 0) };
        _undoButton.Click += (_, _) => { _changes?.Undo(); RefreshAll(); DirtyChanged?.Invoke(this, EventArgs.Empty); };
        _redoButton.Click += (_, _) => { _changes?.Redo(); RefreshAll(); DirtyChanged?.Invoke(this, EventArgs.Empty); };

        var toolbar = new WrapPanel
        {
            Margin = new Thickness(4),
            Background = EditorTheme.ToolbarBgBrush,
            Children =
            {
                _selectTool, _panTool, _gridToggle,
                new TextBlock { Text = "Group", VerticalAlignment = VerticalAlignment.Center, Margin = new Thickness(8, 0, 4, 0) },
                _groupBox,
                new TextBlock { Text = "Sector", VerticalAlignment = VerticalAlignment.Center, Margin = new Thickness(8, 0, 4, 0) },
                _sectorBox,
                _livesToggle, _objectsToggle, _effectsToggle, _eventsToggle, _linksToggle,
                _undoButton, _redoButton,
            },
        };

        _status = new TextBlock
        {
            Text = "Select a scene.",
            Margin = new Thickness(8, 4),
            TextWrapping = TextWrapping.Wrap,
            Foreground = EditorTheme.TextMutedBrush,
        };

        var sceneTabContent = new Grid
        {
            RowDefinitions = new RowDefinitions("Auto,*,Auto"),
            Children = { toolbar, _map, _status },
        };
        Grid.SetRow(toolbar, 0);
        Grid.SetRow(_map, 1);
        Grid.SetRow(_status, 2);

        _eventsScriptList = new ListBox { Margin = new Thickness(4) };
        _eventsScriptList.SelectionChanged += (_, _) => OnEventsScriptSelected();
        _commandSlider = new Slider { Minimum = 0, Maximum = 0, Margin = new Thickness(8) };
        _commandSlider.PropertyChanged += (_, e) =>
        {
            if (e.Property == RangeBase.ValueProperty)
                RefreshMap();
        };
        _eventsHud = new TextBlock
        {
            Margin = new Thickness(8),
            TextWrapping = TextWrapping.Wrap,
            Foreground = EditorTheme.TextPrimaryBrush,
        };
        var eventsTabContent = new Grid
        {
            RowDefinitions = new RowDefinitions("*,Auto,Auto"),
            Children = { _eventsScriptList, _commandSlider, _eventsHud },
        };
        Grid.SetRow(_eventsScriptList, 0);
        Grid.SetRow(_commandSlider, 1);
        Grid.SetRow(_eventsHud, 2);

        _centerTabs = new TabControl
        {
            Items =
            {
                new TabItem { Header = "Scene", Content = sceneTabContent },
                new TabItem { Header = "Events", Content = eventsTabContent },
            },
        };
        _centerTabs.SelectionChanged += (_, _) => RefreshAll();

        _sectorList = new ListBox { Margin = new Thickness(4) };
        _sectorList.SelectionChanged += (_, _) =>
        {
            if (_sectorList.SelectedItem is SectorListItem item)
            {
                _groupBox.Value = item.Group;
                SelectSectorIndex(item.Sector);
            }
        };

        _scriptList = new ListBox
        {
            Margin = new Thickness(4),
            FontFamily = new FontFamily("Cascadia Mono, Consolas, monospace"),
            FontSize = 12,
        };
        _scriptList.SelectionChanged += (_, _) => OnScriptSelected();

        _entityList = new ListBox { Margin = new Thickness(4) };
        _entityList.SelectionChanged += (_, _) => OnEntityListSelected();

        _typeBox = MakePropBox(0, 255);
        _dirBox = MakePropBox(0, 255);
        _xBox = MakePropBox(0, 255);
        _yBox = MakePropBox(0, 255);
        _wBox = MakePropBox(0, 64);
        _hBox = MakePropBox(0, 64);
        _typeBox.ValueChanged += (_, _) => ApplyEntityProps();
        _dirBox.ValueChanged += (_, _) => ApplyEntityProps();
        _xBox.ValueChanged += (_, _) => ApplyEntityProps();
        _yBox.ValueChanged += (_, _) => ApplyEntityProps();
        _wBox.ValueChanged += (_, _) => ApplyEntityProps();
        _hBox.ValueChanged += (_, _) => ApplyEntityProps();

        _propertyForm = new StackPanel
        {
            Margin = new Thickness(8),
            Spacing = 6,
            Children =
            {
                Labeled("Type", _typeBox),
                Labeled("Dir/Flags", _dirBox),
                Labeled("X tiles", _xBox),
                Labeled("Y tiles", _yBox),
                Labeled("Width", _wBox),
                Labeled("Height", _hBox),
            },
        };

        _opBox = MakePropBox(0, 255);
        _argByteBox = MakePropBox(0, 255);
        _argShortBox = MakePropBox(short.MinValue, short.MaxValue);
        _arg1Box = MakePropBox(int.MinValue, int.MaxValue);
        _arg2Box = MakePropBox(int.MinValue, int.MaxValue);
        _argPtrBox = MakePropBox(int.MinValue, int.MaxValue);
        _opBox.ValueChanged += (_, _) => ApplyScriptProps();
        _argByteBox.ValueChanged += (_, _) => ApplyScriptProps();
        _argShortBox.ValueChanged += (_, _) => ApplyScriptProps();
        _arg1Box.ValueChanged += (_, _) => ApplyScriptProps();
        _arg2Box.ValueChanged += (_, _) => ApplyScriptProps();
        _argPtrBox.ValueChanged += (_, _) => ApplyScriptProps();

        _scriptPropertyForm = new StackPanel
        {
            Margin = new Thickness(8),
            Spacing = 6,
            Children =
            {
                Labeled("Opcode", _opBox),
                Labeled("ArgByte", _argByteBox),
                Labeled("ArgShort", _argShortBox),
                Labeled("Arg1", _arg1Box),
                Labeled("Arg2", _arg2Box),
                Labeled("ArgPtr", _argPtrBox),
            },
        };

        _mapInfo = new TextBlock { Margin = new Thickness(8), TextWrapping = TextWrapping.Wrap };

        var sceneRight = BuildSceneRightPanel();
        var mapRight = new ScrollViewer { Content = _mapInfo };
        var livesRight = BuildEntityKindPanel(SceneEntityKind.Live);
        var objectsRight = BuildEntityKindPanel(SceneEntityKind.Object);
        var effectsRight = BuildEntityKindPanel(SceneEntityKind.Effect);
        var eventsRight = BuildEntityKindPanel(SceneEntityKind.Event);
        var linksRight = new TextBlock { Text = "Links are shown on the map.", Margin = new Thickness(8), TextWrapping = TextWrapping.Wrap };

        _rightTabs = new TabControl
        {
            TabStripPlacement = Dock.Right,
            Items =
            {
                new TabItem { Header = "Scene", Content = sceneRight },
                new TabItem { Header = "Map", Content = mapRight },
                new TabItem { Header = "Lives", Content = livesRight },
                new TabItem { Header = "Objects", Content = objectsRight },
                new TabItem { Header = "Effects", Content = effectsRight },
                new TabItem { Header = "Events", Content = eventsRight },
                new TabItem { Header = "Links", Content = linksRight },
            },
        };
        _rightTabs.SelectionChanged += (_, _) => RefreshEntityListForActiveTab();

        var root = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions("*,320"),
            Children = { _centerTabs, _rightTabs },
        };
        Grid.SetColumn(_centerTabs, 0);
        Grid.SetColumn(_rightTabs, 1);
        Content = root;

        KeyDown += OnKeyDown;
        Focusable = true;
    }

    public void Load(
        RomImage rom,
        Charmap charmap,
        SceneDatabase database,
        ChangeService changes,
        Scene? scene = null,
        int? selectMapId = null)
    {
        _rom = rom;
        _charmap = charmap;
        _database = database;
        _changes = changes;
        _scene = scene ?? (selectMapId is int id
            ? database.Scenes.FirstOrDefault(s => s.MapId == id)
            : database.Scenes.FirstOrDefault());
        _selectedEntity = null;
        _selectedCommand = null;
        _selectedStation = null;
        _groupBox.Value = 0;
        RebuildSectorCombo();
        RefreshAll();
    }

    public void RefreshFromExternal() => RefreshAll();

    private Control BuildSceneRightPanel()
    {
        var addSector = new Button { Content = "+", Width = 28 };
        var removeSector = new Button { Content = "−", Width = 28 };
        addSector.Click += (_, _) => AddSector();
        removeSector.Click += (_, _) => RemoveSector();
        var hideSector = new Button { Content = "V", Width = 28 };
        var soloSectorBtn = new Button { Content = "S", Width = 28 };
        hideSector.Click += (_, _) => ToggleSectorVisibility();
        soloSectorBtn.Click += (_, _) => ToggleSectorSolo();
        ToolTip.SetTip(hideSector, "Toggle sector visibility");
        ToolTip.SetTip(soloSectorBtn, "Solo sector");

        var addScriptHint = new TextBlock
        {
            Text = "Station scripts",
            Margin = new Thickness(8, 8, 8, 0),
            Foreground = EditorTheme.TextMutedBrush,
        };

        var sectorHeader = new TextBlock
        {
            Text = "Sectors",
            Margin = new Thickness(8, 8, 8, 0),
            Foreground = EditorTheme.TextMutedBrush,
        };
        var sectorPanel = new DockPanel();
        sectorPanel.Children.Add(sectorHeader);
        DockPanel.SetDock(sectorHeader, Dock.Top);
        sectorPanel.Children.Add(_sectorList);

        var sectorButtons = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Margin = new Thickness(4),
            Children = { addSector, removeSector, hideSector, soloSectorBtn },
        };

        var scriptPanel = new DockPanel();
        scriptPanel.Children.Add(addScriptHint);
        DockPanel.SetDock(addScriptHint, Dock.Top);
        scriptPanel.Children.Add(_scriptPropertyForm);
        DockPanel.SetDock(_scriptPropertyForm, Dock.Bottom);
        scriptPanel.Children.Add(_scriptList);

        var root = new Grid { RowDefinitions = new RowDefinitions("*,Auto,*,Auto") };
        root.Children.Add(sectorPanel);
        root.Children.Add(sectorButtons);
        Grid.SetRow(sectorButtons, 1);
        root.Children.Add(scriptPanel);
        Grid.SetRow(scriptPanel, 2);
        root.Children.Add(_propertyForm);
        Grid.SetRow(_propertyForm, 3);
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
        var list = new ListBox { Margin = new Thickness(4), Tag = kind };
        list.SelectionChanged += (_, _) =>
        {
            if (list.SelectedItem is SceneEntity entity)
            {
                _selectedEntity = entity;
                RefreshProperties();
                RefreshMap();
            }
        };

        var add = new Button { Content = "+", Width = 28 };
        var remove = new Button { Content = "−", Width = 28 };
        var dup = new Button { Content = "Dup", Margin = new Thickness(4, 0) };
        add.Click += (_, _) => AddEntity(kind);
        remove.Click += (_, _) => RemoveSelectedEntity();
        dup.Click += (_, _) => DuplicateSelectedEntity();

        // Store list reference via Tag on panel for refresh
        var panel = new Grid
        {
            RowDefinitions = new RowDefinitions("*,Auto,Auto"),
            Tag = list,
            Children =
            {
                list,
                new StackPanel
                {
                    Orientation = Orientation.Horizontal,
                    Margin = new Thickness(4),
                    Children = { add, remove, dup },
                    [Grid.RowProperty] = 1,
                },
                new ScrollViewer
                {
                    Content = ClonePropertyFormForKind(kind),
                    [Grid.RowProperty] = 2,
                    MaxHeight = 220,
                },
            },
        };
        return panel;
    }

    private Control ClonePropertyFormForKind(SceneEntityKind kind)
    {
        // Shared property form is fine — all tabs edit the same selected entity.
        return new TextBlock
        {
            Text = $"Select a {kind} on the map or in the list. Properties appear on the Scene tab.",
            Margin = new Thickness(8),
            TextWrapping = TextWrapping.Wrap,
            Foreground = EditorTheme.TextMutedBrush,
        };
    }

    private void RefreshEntityListForActiveTab()
    {
        if (_rightTabs.SelectedItem is not TabItem { Content: Grid panel } ||
            panel.Tag is not ListBox list ||
            list.Tag is not SceneEntityKind kind)
            return;

        var sector = CurrentSector();
        list.ItemsSource = sector?.ListFor(kind).ToArray() ?? Array.Empty<SceneEntity>();
    }

    private void RefreshAll()
    {
        RefreshSectors();
        RefreshScripts();
        RefreshEntityListForActiveTab();
        RefreshProperties();
        RefreshMap();
        RefreshMapInfo();
        RefreshEventsTab();
        UpdateUndoButtons();
    }

    private void RefreshSectors()
    {
        if (_scene is null)
        {
            _sectorList.ItemsSource = null;
            return;
        }

        var items = new List<SectorListItem>();
        foreach (var group in _scene.Groups)
        {
            foreach (var sector in group.Sectors)
            {
                if (_soloSector is int solo && solo != sector.Sector && group.Index == (int)(_groupBox.Value ?? 0))
                {
                    // still list them
                }
                var visible = !_hiddenSectors.Contains(sector.Sector);
                var soloMark = _soloSector == sector.Sector ? "S" : "";
                var count = sector.Lives.Count + sector.Objects.Count + sector.Effects.Count + sector.Events.Count;
                items.Add(new SectorListItem(
                    group.Index,
                    sector.Sector,
                    $"Sector {sector.Sector} ({sector.Objects.Count} objs, {sector.Lives.Count} acts){(visible ? "" : " [hidden]")} {soloMark}",
                    sector));
            }
        }
        _sectorList.ItemsSource = items;
    }

    private void RebuildSectorCombo()
    {
        var group = _scene?.Groups.ElementAtOrDefault((int)(_groupBox.Value ?? 0));
        _sectorBox.ItemsSource = group?.Sectors.Select(s => $"Sector {s.Sector}").ToArray()
            ?? Array.Empty<string>();
        if (_sectorBox.ItemCount > 0)
            _sectorBox.SelectedIndex = 0;
    }

    private void SelectSectorIndex(int sector)
    {
        if (_sectorBox.ItemCount > sector)
            _sectorBox.SelectedIndex = sector;
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
            lines.Add(new ScriptLineItem(station, null, $"— {station.Name} ({station.Commands.Count}) —"));
            for (var i = 0; i < station.Commands.Count; i++)
            {
                var cmd = station.Commands[i];
                var text = _rom is null
                    ? $"{i:D3}: {ScriptOpcodeNames.GetName(cmd.Op)}"
                    : $"{i:D3}: {ScriptCodec.Format(cmd, _rom, _charmap)}";
                lines.Add(new ScriptLineItem(station, cmd, text));
            }
        }

        if (_database is not null)
        {
            foreach (var fn in _database.FunctionScripts.Take(32))
            {
                lines.Add(new ScriptLineItem(fn, null, $"— fn {fn.Name} —"));
            }
        }

        if (lines.Count == 0)
            lines.Add(new ScriptLineItem(null, null, "(no station scripts)"));
        _scriptList.ItemsSource = lines;
    }

    private void RefreshEventsTab()
    {
        var sector = CurrentSector();
        _eventsScriptList.ItemsSource = sector?.Stations
            .SelectMany((station, si) => station.Commands.Select((cmd, ci) =>
                new ScriptLineItem(station, cmd, $"{station.Name}:{ci:D3} {(_rom is null ? ScriptOpcodeNames.GetName(cmd.Op) : ScriptCodec.Format(cmd, _rom, _charmap))}")))
            .ToArray() ?? Array.Empty<ScriptLineItem>();

        var station = _selectedStation ?? sector?.Stations.FirstOrDefault();
        var max = Math.Max(0, (station?.Commands.Count ?? 1) - 1);
        _commandSlider.Maximum = max;
        if (_commandSlider.Value > max)
            _commandSlider.Value = max;
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
                return;
            }
            _typeBox.Value = _selectedEntity.TypeId;
            _dirBox.Value = _selectedEntity.DirectionOrFlags;
            _xBox.Value = _selectedEntity.Position.XTiles;
            _yBox.Value = _selectedEntity.Position.YTiles;
            _wBox.Value = _selectedEntity.Width;
            _hBox.Value = _selectedEntity.Height;
        }
        finally
        {
            _suppressPropertyEvents = false;
        }

        _suppressPropertyEvents = true;
        try
        {
            if (_selectedCommand is null)
                return;
            _opBox.Value = _selectedCommand.Op;
            _argByteBox.Value = _selectedCommand.ArgByte;
            _argShortBox.Value = _selectedCommand.ArgShort;
            _arg1Box.Value = _selectedCommand.Arg1;
            _arg2Box.Value = _selectedCommand.Arg2;
            _argPtrBox.Value = unchecked((int)_selectedCommand.ArgPtr);
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
                _rom, _scene, _charmap, g, s, (int)_commandSlider.Value, station);
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
            hud);
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

    private void OnKeyDown(object? sender, KeyEventArgs e)
    {
        if (_changes is null)
            return;
        if (e.KeyModifiers.HasFlag(KeyModifiers.Control) && e.Key == Key.Z)
        {
            _changes.Undo();
            RefreshAll();
            e.Handled = true;
            return;
        }
        if (e.KeyModifiers.HasFlag(KeyModifiers.Control) && e.Key == Key.Y)
        {
            _changes.Redo();
            RefreshAll();
            e.Handled = true;
            return;
        }
        if (_selectedEntity is null)
            return;
        if (e.Key == Key.Delete)
        {
            RemoveSelectedEntity();
            e.Handled = true;
            return;
        }
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

    private void UpdateUndoButtons()
    {
        _undoButton.IsEnabled = _changes?.CanUndo == true;
        _redoButton.IsEnabled = _changes?.CanRedo == true;
    }

    private CheckBox MakeToggle(string label, bool isChecked)
    {
        var box = new CheckBox
        {
            Content = label,
            IsChecked = isChecked,
            Margin = new Thickness(6, 0, 0, 0),
            VerticalAlignment = VerticalAlignment.Center,
        };
        box.IsCheckedChanged += (_, _) => RefreshMap();
        return box;
    }

    private static NumericUpDown MakePropBox(decimal min, decimal max) => new()
    {
        Minimum = min,
        Maximum = max,
        Width = 120,
    };

    private static Control Labeled(string label, Control control) => new DockPanel
    {
        Children =
        {
            new TextBlock
            {
                Text = label,
                Width = 80,
                VerticalAlignment = VerticalAlignment.Center,
                [DockPanel.DockProperty] = Dock.Left,
            },
            control,
        },
    };

    private static string Truncate(string text, int max) =>
        text.Length <= max ? text : text[..(max - 1)] + "…";

    private sealed record SectorListItem(int Group, int Sector, string Title, SceneSector Data)
    {
        public override string ToString() => Title;
    }

    private sealed record ScriptLineItem(ScriptRefData? Station, ScriptCommandData? Command, string Title)
    {
        public override string ToString() => Title;
    }
}
