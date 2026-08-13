using Avalonia;
using Avalonia.Controls;
using Avalonia.Controls.Primitives;
using Avalonia.Layout;
using Avalonia.Media;
using Avalonia.Media.Imaging;
using RescueEditor.Core;

namespace RescueEditor.App;

public sealed class DungeonWorkspacePanel : UserControl
{
    private const double ListPaneWidth = 388;
    private const double NameComboWidth = 148;
    private const double LevelSpinWidth = 52;
    private const double WeightSpinWidth = 68;

    private readonly Image _mapImage;
    private readonly TextBlock _status;
    private readonly StackPanel _pokemonHost;
    private readonly StackPanel _itemHost;
    private readonly StackPanel _trapHost;
    private readonly ScrollViewer _pokemonScroll;
    private readonly ScrollViewer _itemScroll;
    private readonly ScrollViewer _trapScroll;
    private readonly ToggleButton _pokemonTab;
    private readonly ToggleButton _itemTab;
    private readonly ToggleButton _trapTab;
    private readonly IReadOnlyList<NamedPick> _speciesPicks;
    private readonly IReadOnlyList<NamedPick> _itemPicks;
    private readonly IReadOnlyList<NamedPick> _trapPicks;

    private RomImage? _rom;
    private AssetCatalog? _catalog;
    private WorkingRom? _workingRom;
    private ActorSpriteAtlas? _sprites;
    private DungeonIconAtlas? _icons;
    private DungeonMapParamTables? _tables;
    private DungeonLabels _labels = DungeonLabels.Empty;
    private AssetDescriptor? _dungeon;
    private AssetDescriptor? _selectedFloor;
    private DungeonFloorContents? _contents;
    private int _tileset = -1;
    private bool _suppress;

    public DungeonWorkspacePanel()
    {
        _speciesPicks = Enumerable.Range(1, DungeonBuiltinNames.NationalDexCount)
            .Select(id => new NamedPick(id, $"{id:000} {DungeonBuiltinNames.Species(id)}"))
            .ToArray();
        _itemPicks = Enumerable.Range(1, DungeonBuiltinNames.ItemCount - 1)
            .Select(id => new NamedPick(id, $"{id:000} {DungeonBuiltinNames.Item(id)}"))
            .ToArray();
        _trapPicks = Enumerable.Range(0, DungeonBuiltinNames.Traps.Length)
            .Select(id => new NamedPick(id, $"{id:00} {DungeonBuiltinNames.Trap(id)}"))
            .ToArray();

        _status = new TextBlock
        {
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextMutedBrush,
            VerticalAlignment = VerticalAlignment.Center,
            TextTrimming = TextTrimming.CharacterEllipsis,
        };

        _mapImage = new Image
        {
            Stretch = Stretch.None,
            HorizontalAlignment = HorizontalAlignment.Center,
            VerticalAlignment = VerticalAlignment.Center,
        };
        RenderOptions.SetBitmapInterpolationMode(_mapImage, BitmapInterpolationMode.None);

        _pokemonHost = new StackPanel
        {
            Spacing = EditorTheme.Space1,
            Margin = new Thickness(EditorTheme.Space2),
            HorizontalAlignment = HorizontalAlignment.Left,
        };
        _itemHost = new StackPanel
        {
            Spacing = EditorTheme.Space1,
            Margin = new Thickness(EditorTheme.Space2),
            HorizontalAlignment = HorizontalAlignment.Left,
        };
        _trapHost = new StackPanel
        {
            Spacing = EditorTheme.Space1,
            Margin = new Thickness(EditorTheme.Space2),
            HorizontalAlignment = HorizontalAlignment.Left,
        };
        _pokemonScroll = Wrap(_pokemonHost);
        _itemScroll = Wrap(_itemHost);
        _trapScroll = Wrap(_trapHost);
        _itemScroll.IsVisible = false;
        _trapScroll.IsVisible = false;

        _pokemonTab = EditorChrome.InspectorTab("Pokémon", isChecked: true);
        _itemTab = EditorChrome.InspectorTab("Items");
        _trapTab = EditorChrome.InspectorTab("Traps");
        _pokemonTab.IsCheckedChanged += (_, _) =>
        {
            if (_pokemonTab.IsChecked == true)
                ShowListTab(0);
            else if (_itemTab.IsChecked != true && _trapTab.IsChecked != true)
                _pokemonTab.IsChecked = true;
        };
        _itemTab.IsCheckedChanged += (_, _) =>
        {
            if (_itemTab.IsChecked == true)
                ShowListTab(1);
            else if (_pokemonTab.IsChecked != true && _trapTab.IsChecked != true)
                _itemTab.IsChecked = true;
        };
        _trapTab.IsCheckedChanged += (_, _) =>
        {
            if (_trapTab.IsChecked == true)
                ShowListTab(2);
            else if (_pokemonTab.IsChecked != true && _itemTab.IsChecked != true)
                _trapTab.IsChecked = true;
        };

        var tabs = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = 0,
            Children = { _pokemonTab, _itemTab, _trapTab },
        };
        var lists = new Grid
        {
            RowDefinitions = new RowDefinitions("Auto,*"),
            Children = { tabs, _pokemonScroll, _itemScroll, _trapScroll },
        };
        Grid.SetRow(_pokemonScroll, 1);
        Grid.SetRow(_itemScroll, 1);
        Grid.SetRow(_trapScroll, 1);

        var mapView = new Viewbox
        {
            Stretch = Stretch.Uniform,
            StretchDirection = StretchDirection.Both,
            HorizontalAlignment = HorizontalAlignment.Stretch,
            VerticalAlignment = VerticalAlignment.Stretch,
            Child = _mapImage,
            Margin = new Thickness(EditorTheme.Space2),
        };
        var listPane = new Border
        {
            Width = ListPaneWidth,
            MinWidth = ListPaneWidth,
            MaxWidth = ListPaneWidth,
            HorizontalAlignment = HorizontalAlignment.Right,
            VerticalAlignment = VerticalAlignment.Stretch,
            Background = EditorTheme.PanelBgBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(1, 0, 0, 0),
            Child = lists,
        };
        var mapPane = new Border
        {
            Background = EditorTheme.CanvasBgBrush,
            ClipToBounds = true,
            Child = mapView,
        };

        var body = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions("*,Auto"),
            Children = { mapPane, listPane },
        };
        Grid.SetColumn(listPane, 1);

        var toolbar = EditorChrome.ToolbarHost(new StackPanel
        {
            Orientation = Orientation.Horizontal,
            VerticalAlignment = VerticalAlignment.Center,
            Children =
            {
                new TextBlock
                {
                    Text = "Dungeons",
                    FontFamily = EditorTheme.UiFont,
                    FontSize = EditorTheme.FontToolbar,
                    FontWeight = FontWeight.SemiBold,
                    Foreground = EditorTheme.TextPrimaryBrush,
                    Margin = new Thickness(EditorTheme.Space2, 0, EditorTheme.Space3, 0),
                    VerticalAlignment = VerticalAlignment.Center,
                },
                _status,
            },
        });

        Content = new Grid
        {
            RowDefinitions = new RowDefinitions("Auto,*"),
            Children = { toolbar, body },
        };
        Grid.SetRow(body, 1);
    }

    public void Load(RomImage rom, AssetCatalog catalog, WorkingRom? workingRom, AssetDescriptor? dungeon)
    {
        _rom = rom;
        _catalog = catalog;
        _workingRom = workingRom;
        _tables = DungeonMapParamTables.TryLoad(ActiveRom);
        var root = CatalogBuilder.FindRepositoryRoot(rom.Path);
        _labels = DungeonIndexer.LoadLabels(root);
        _sprites = new ActorSpriteAtlas(root);
        _dungeon = dungeon ?? catalog.ForCategory(AssetCategory.Dungeons).FirstOrDefault();
        _status.Text = _dungeon?.Name ?? "Select a dungeon";
        var floor = _dungeon?.Kind == AssetKind.DungeonFloor
            ? _dungeon
            : _dungeon?.Children.FirstOrDefault();
        if (floor is not null)
            _ = LoadFloorAsync(floor);
    }

    public void ShowAsset(AssetDescriptor asset)
    {
        if (_catalog is null || _rom is null)
            return;
        if (asset.Kind == AssetKind.Dungeon)
        {
            Load(_rom, _catalog, _workingRom, asset);
            return;
        }

        if (asset.Kind == AssetKind.DungeonFloor)
        {
            var parent = _catalog.ForCategory(AssetCategory.Dungeons)
                .FirstOrDefault(d => d.Id == $"dungeon:{asset.Metadata.GetValueOrDefault("dungeonId")}");
            if (parent is not null)
                _dungeon = parent;
            _ = LoadFloorAsync(asset);
        }
    }

    private RomImage ActiveRom => _workingRom?.View ?? _rom!;

    private void ShowListTab(int index)
    {
        _pokemonTab.IsChecked = index == 0;
        _itemTab.IsChecked = index == 1;
        _trapTab.IsChecked = index == 2;
        _pokemonScroll.IsVisible = index == 0;
        _itemScroll.IsVisible = index == 1;
        _trapScroll.IsVisible = index == 2;
    }

    private async Task LoadFloorAsync(AssetDescriptor floor, bool renderMap = true)
    {
        if (_rom is null || _tables is null)
            return;
        if (!int.TryParse(floor.Metadata.GetValueOrDefault("dungeonId"), out var dungeonId) ||
            !int.TryParse(floor.Metadata.GetValueOrDefault("floor"), out var floorNum))
            return;
        _selectedFloor = floor;
        var record = _tables.TryReadFloor(ActiveRom, dungeonId, floorNum);
        if (record is null)
            return;

        _status.Text = $"{floor.Name}  ·  tileset {record.Properties.Tileset}  ·  {DungeonIndexer.ResolveMusic(record.Properties.BgMusic, _labels)}";
        if (_icons is null || _tileset != record.Properties.Tileset)
        {
            _tileset = record.Properties.Tileset;
            _icons = DungeonIconAtlas.TryLoad(ActiveRom, _tileset);
        }

        _contents = DungeonFloorContents.From(record, _labels);
        FillPokemon(_contents);
        FillItems(_contents);
        FillTraps(_contents);

        if (!renderMap)
            return;

        try
        {
            var rendered = await Task.Run(() => DungeonFloorRenderer.Render(_rom, record));
            using var stream = new MemoryStream(rendered.Png);
            _mapImage.Source = new Bitmap(stream);
        }
        catch (Exception ex)
        {
            _status.Text = $"{floor.Name} — could not generate map: {ex.Message}";
        }
    }

    private void FillPokemon(DungeonFloorContents contents)
    {
        _suppress = true;
        _pokemonHost.Children.Clear();
        foreach (var row in contents.Pokemon)
            _pokemonHost.Children.Add(BuildPokemonRow(row));
        _pokemonHost.Children.Add(AddButton("Add Pokémon", AddPokemon));
        _suppress = false;
    }

    private void FillItems(DungeonFloorContents contents)
    {
        _suppress = true;
        _itemHost.Children.Clear();
        foreach (var row in contents.Items)
            _itemHost.Children.Add(BuildItemRow(row));
        _itemHost.Children.Add(AddButton("Add item", AddItem));
        _suppress = false;
    }

    private void FillTraps(DungeonFloorContents contents)
    {
        _suppress = true;
        _trapHost.Children.Clear();
        foreach (var row in contents.Traps)
            _trapHost.Children.Add(BuildTrapRow(row));
        _trapHost.Children.Add(AddButton("Add trap", AddTrap));
        _suppress = false;
    }

    private Control BuildPokemonRow(DungeonContentRow row)
    {
        var state = new FieldState(row.Id, row.Level, row.Weight, row.RomOffset);
        var image = Sprite("pokemon", row.Id);
        var species = Combo(_speciesPicks, row.Id);
        species.SelectionChanged += (_, _) =>
        {
            if (_suppress || species.SelectedItem is not NamedPick pick)
                return;
            state.Id = pick.Id;
            PatchMonster(state);
            ApplySprite(image, "pokemon", state.Id);
        };
        var level = Spin(row.Level, 1, 100, LevelSpinWidth);
        level.ValueChanged += (_, _) =>
        {
            if (_suppress || level.Value is not decimal value)
                return;
            state.Level = (int)value;
            PatchMonster(state);
        };
        var weight = Spin(row.Weight, 0, 10000, WeightSpinWidth);
        weight.ValueChanged += (_, _) =>
        {
            if (_suppress || weight.Value is not decimal value)
                return;
            state.Weight = (int)value;
            PatchMonster(state);
        };
        return SpawnRow(image, species, Label("Lv"), level, Label("Wt"), weight, DeleteButton(() => DeletePokemon(row)));
    }

    private Control BuildItemRow(DungeonContentRow row)
    {
        var state = new FieldState(row.Id, 0, row.Weight, row.RomOffset);
        var image = Sprite("item", row.Id);
        var item = Combo(_itemPicks, row.Id);
        item.SelectionChanged += (_, _) =>
        {
            if (_suppress || item.SelectedItem is not NamedPick pick)
                return;
            var previous = state.Id;
            state.Id = pick.Id;
            PatchItem(row.RomOffset, row.TableWords, previous, state.Id, state.Weight, reload: true);
        };
        var weight = Spin(row.Weight, 0, 10000, WeightSpinWidth);
        weight.ValueChanged += (_, _) =>
        {
            if (_suppress || weight.Value is not decimal value)
                return;
            state.Weight = (int)value;
            PatchItem(row.RomOffset, row.TableWords, state.Id, state.Id, state.Weight, reload: false);
        };
        return SpawnRow(image, item, Label("Wt"), weight, DeleteButton(() => DeleteItem(row)));
    }

    private Control BuildTrapRow(DungeonContentRow row)
    {
        var image = Sprite("trap", row.Id);
        var trap = Combo(_trapPicks, row.Id);
        trap.SelectionChanged += (_, _) =>
        {
            if (_suppress || trap.SelectedItem is not NamedPick pick || pick.Id == row.Id)
                return;
            ReplaceTrap(row, pick.Id, row.Weight);
        };
        var weight = Spin(row.Weight, 0, 10000, WeightSpinWidth);
        weight.ValueChanged += (_, _) =>
        {
            if (_suppress || weight.Value is not decimal value)
                return;
            PatchTrap(TrapOffset(row.Id), (int)value);
        };
        return SpawnRow(image, trap, Label("Wt"), weight, DeleteButton(() => DeleteTrap(row)));
    }

    private Image Sprite(string kind, int id)
    {
        var image = new Image
        {
            Width = 32,
            Height = 32,
            Stretch = Stretch.Uniform,
            VerticalAlignment = VerticalAlignment.Center,
            Margin = new Thickness(0, 0, EditorTheme.Space1, 0),
        };
        ApplySprite(image, kind, id);
        return image;
    }

    private void ApplySprite(Image image, string kind, int id)
    {
        RgbaImage? sprite = kind switch
        {
            "pokemon" => _sprites?.TryGetSpeciesSprite(id),
            "item" => _icons?.TryGetItem(id),
            "trap" => _icons?.TryGetTrap(id),
            _ => null,
        };
        if (sprite is null)
        {
            image.Source = null;
            return;
        }

        using var stream = new MemoryStream(sprite.ToPng());
        image.Source = new Bitmap(stream);
    }

    private InstantComboBox Combo(IReadOnlyList<NamedPick> picks, int selectedId)
    {
        // Half of the old star-sized name column so Lv / Wt / delete stay fully visible.
        return new InstantComboBox
        {
            ItemsSource = picks,
            SelectedItem = picks.FirstOrDefault(p => p.Id == selectedId),
            Width = NameComboWidth,
            MinWidth = NameComboWidth,
            MaxWidth = NameComboWidth,
            HorizontalAlignment = HorizontalAlignment.Left,
            HorizontalContentAlignment = HorizontalAlignment.Left,
            MaxDropDownHeight = 280,
        };
    }

    private static CompactSpinBox Spin(int value, int min, int max, double width) => new()
    {
        Minimum = min,
        Maximum = max,
        Value = value,
        Width = width,
        MinWidth = width,
        MaxWidth = width,
        HorizontalAlignment = HorizontalAlignment.Left,
        VerticalAlignment = VerticalAlignment.Center,
        Margin = new Thickness(0),
    };

    private static TextBlock Label(string text) => new()
    {
        Text = text,
        FontFamily = EditorTheme.UiFont,
        FontSize = EditorTheme.FontMeta,
        Foreground = EditorTheme.TextMutedBrush,
        VerticalAlignment = VerticalAlignment.Center,
        Margin = new Thickness(6, 0, 4, 0),
    };

    private static Button AddButton(string text, Action click)
    {
        var add = EditorChrome.ToolButton(text);
        add.HorizontalAlignment = HorizontalAlignment.Left;
        add.Margin = new Thickness(0, EditorTheme.Space2, 0, 0);
        add.Click += (_, _) => click();
        return add;
    }

    private static Button DeleteButton(Action click)
    {
        var button = EditorChrome.IconButton("−", tip: "Remove");
        button.Click += (_, _) => click();
        return button;
    }

    private static Control SpawnRow(Control leading, Control name, params Control[] trail)
    {
        var row = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = 0,
            MinHeight = EditorTheme.ControlHeight + 6,
            Margin = new Thickness(0, 1),
        };
        leading.VerticalAlignment = VerticalAlignment.Center;
        name.VerticalAlignment = VerticalAlignment.Center;
        row.Children.Add(leading);
        row.Children.Add(Slot(name, NameComboWidth));
        foreach (var control in trail)
        {
            control.VerticalAlignment = VerticalAlignment.Center;
            row.Children.Add(control);
        }

        return row;
    }

    private static Border Slot(Control child, double width) => new()
    {
        Width = width,
        MinWidth = width,
        MaxWidth = width,
        Margin = new Thickness(0, 0, 2, 0),
        ClipToBounds = true,
        VerticalAlignment = VerticalAlignment.Center,
        Child = child,
    };

    private void AddPokemon()
    {
        if (_contents is null || _contents.MonsterListOffset < 0)
            return;
        if (_contents.Pokemon.Count >= DungeonMapParamTables.MaxMonsterSpawns - 1)
            return;
        var used = _contents.Pokemon.Select(p => p.Id).ToHashSet();
        var next = _speciesPicks.FirstOrDefault(p => !used.Contains(p.Id)) ?? _speciesPicks[0];
        var rows = _contents.Pokemon
            .Select(p => (p.Id, p.Level, p.Weight))
            .Append((next.Id, 1, 1))
            .ToArray();
        WritePokemonList(rows);
        ReloadLists();
    }

    private void DeletePokemon(DungeonContentRow row)
    {
        if (_contents is null)
            return;
        var rows = _contents.Pokemon
            .Where(p => p.RomOffset != row.RomOffset)
            .Select(p => (p.Id, p.Level, p.Weight))
            .ToArray();
        WritePokemonList(rows);
        ReloadLists();
    }

    private void WritePokemonList(IReadOnlyList<(int Id, int Level, int Weight)> rows)
    {
        if (_workingRom is null || _contents is null || _contents.MonsterListOffset < 0)
            return;
        var buffer = _workingRom.BeginMutate();
        DungeonSpawnCodec.WriteMonsterList(buffer, _contents.MonsterListOffset, rows);
        var length = (rows.Count + 1) * DungeonMapParamTables.SpawnEntrySize;
        _workingRom.Commit(buffer, _contents.MonsterListOffset, length);
    }

    private void AddItem()
    {
        if (_contents is null)
            return;
        var used = _contents.Items.Select(i => i.Id).ToHashSet();
        var next = _itemPicks.FirstOrDefault(p => !used.Contains(p.Id));
        if (next is null)
            return;
        PatchItem(_contents.ItemListOffset, _contents.ItemCompressedWords, next.Id, next.Id, 1, reload: true);
    }

    private void DeleteItem(DungeonContentRow row) =>
        PatchItem(row.RomOffset, row.TableWords, row.Id, row.Id, 0, reload: true);

    private void AddTrap()
    {
        if (_contents is null || _contents.TrapListOffset < 0)
            return;
        var used = _contents.Traps.Select(t => t.Id).ToHashSet();
        var next = _trapPicks.FirstOrDefault(p => !used.Contains(p.Id));
        if (next is null)
            return;
        PatchTrap(TrapOffset(next.Id), 10000);
        ReloadLists();
    }

    private void DeleteTrap(DungeonContentRow row)
    {
        PatchTrap(TrapOffset(row.Id), 0);
        ReloadLists();
    }

    private void ReplaceTrap(DungeonContentRow row, int newId, int weight)
    {
        PatchTrap(TrapOffset(row.Id), 0);
        PatchTrap(TrapOffset(newId), weight);
        ReloadLists();
    }

    private int TrapOffset(int trapId) =>
        (_contents?.TrapListOffset ?? -1) + trapId * 2;

    private void PatchMonster(FieldState state)
    {
        if (_workingRom is null || state.Offset < 0)
            return;
        var buffer = _workingRom.BeginMutate();
        DungeonSpawnCodec.WriteMonster(buffer, state.Offset, state.Id, state.Level, state.Weight);
        _workingRom.Commit(buffer, state.Offset, DungeonMapParamTables.SpawnEntrySize);
    }

    private void PatchTrap(int offset, int threshold)
    {
        if (_workingRom is null || offset < 0)
            return;
        var buffer = _workingRom.BeginMutate();
        DungeonSpawnCodec.WriteTrap(buffer, offset, (ushort)threshold);
        _workingRom.Commit(buffer, offset, 2);
    }

    private void PatchItem(int tableOffset, int tableWords, int oldId, int newId, int weight, bool reload)
    {
        if (_workingRom is null || tableOffset < 0 || tableWords <= 0)
            return;
        var buffer = _workingRom.BeginMutate();
        if (!DungeonSpawnCodec.TryReplaceItem(
                buffer, _workingRom.View, tableOffset, tableWords, oldId, newId, weight))
        {
            _status.Text = "Item table cannot grow in place; try changing a weight instead of adding a new item.";
            return;
        }

        _workingRom.Commit(buffer, tableOffset, tableWords * 2);
        if (reload)
            ReloadLists();
    }

    private void ReloadLists()
    {
        if (_selectedFloor is not null)
            _ = LoadFloorAsync(_selectedFloor, renderMap: false);
    }

    private static ScrollViewer Wrap(Control inner) => new()
    {
        Content = inner,
        HorizontalScrollBarVisibility = Avalonia.Controls.Primitives.ScrollBarVisibility.Disabled,
        VerticalScrollBarVisibility = Avalonia.Controls.Primitives.ScrollBarVisibility.Auto,
    };

    private sealed record NamedPick(int Id, string Name)
    {
        public override string ToString() => Name;
    }

    private sealed class FieldState(int id, int level, int weight, int offset)
    {
        public int Id { get; set; } = id;
        public int Level { get; set; } = level;
        public int Weight { get; set; } = weight;
        public int Offset { get; } = offset;
    }
}
