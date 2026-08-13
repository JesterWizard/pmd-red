using Avalonia;
using Avalonia.Controls;
using Avalonia.Controls.Primitives;
using Avalonia.Controls.Templates;
using Avalonia.Layout;
using Avalonia.Media;
using Avalonia.Media.Imaging;
using Avalonia.Platform;
using RescueEditor.Core;

namespace RescueEditor.App;

public sealed class DataTablesWorkspacePanel : UserControl
{
    private const double ListPaneWidth = 280;
    private const double ComboWidth = 200;
    private const double SpinWidth = 72;

    private readonly ListBox _list;
    private readonly TextBox _filterBox;
    private readonly StackPanel _formHost;
    private readonly TextBlock _status;
    private readonly ToggleButton _monsterTab;
    private readonly ToggleButton _moveTab;
    private readonly ToggleButton _itemTab;

    private RomImage? _rom;
    private Charmap? _charmap;
    private AssetCatalog? _catalog;
    private WorkingRom? _workingRom;
    private DataTableTables? _tables;
    private ActorSpriteAtlas? _sprites;
    private DungeonIconAtlas? _icons;
    private IReadOnlyList<DataTablePick> _movePicks = [];
    private AssetDescriptor? _table;
    private AssetDescriptor? _selected;
    private IReadOnlyList<AssetDescriptor> _entries = [];
    private bool _suppress;
    private readonly List<LearnsetRow> _learnsetRows = [];
    private readonly Dictionary<(AssetKind Kind, int Id), Bitmap> _listSpriteCache = [];

    public event EventHandler<AssetDescriptor?>? AssetSelected;

    public DataTablesWorkspacePanel()
    {
        _status = new TextBlock
        {
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextMutedBrush,
            VerticalAlignment = VerticalAlignment.Center,
            TextTrimming = TextTrimming.CharacterEllipsis,
        };

        _filterBox = new TextBox
        {
            PlaceholderText = "Filter by name…",
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontLabel,
            Height = EditorTheme.ControlHeight,
            MinHeight = EditorTheme.ControlHeight,
            Width = 200,
        };
        EditorChrome.StyleEditor(_filterBox);
        _filterBox.TextChanged += (_, _) => ApplyFilter();

        _monsterTab = EditorChrome.InspectorTab("Pokemon", isChecked: true);
        _moveTab = EditorChrome.InspectorTab("Moves");
        _itemTab = EditorChrome.InspectorTab("Items");
        _monsterTab.IsCheckedChanged += (_, _) => { if (_monsterTab.IsChecked == true) ShowTableKind(AssetKind.MonsterTable); };
        _moveTab.IsCheckedChanged += (_, _) => { if (_moveTab.IsChecked == true) ShowTableKind(AssetKind.MoveTable); };
        _itemTab.IsCheckedChanged += (_, _) => { if (_itemTab.IsChecked == true) ShowTableKind(AssetKind.ItemTable); };

        var toolbarInner = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = EditorTheme.Space2,
            VerticalAlignment = VerticalAlignment.Center,
            Children =
            {
                new TextBlock
                {
                    Text = "Data Tables",
                    FontFamily = EditorTheme.UiFont,
                    FontSize = EditorTheme.FontToolbar,
                    FontWeight = FontWeight.SemiBold,
                    Foreground = EditorTheme.TextPrimaryBrush,
                    Margin = new Thickness(EditorTheme.Space2, 0, EditorTheme.Space3, 0),
                    VerticalAlignment = VerticalAlignment.Center,
                },
                new StackPanel
                {
                    Orientation = Orientation.Horizontal,
                    Children = { _monsterTab, _moveTab, _itemTab },
                },
                EditorChrome.ToolbarSeparator(),
                _filterBox,
                _status,
            },
        };

        _list = new ListBox
        {
            ItemsPanel = new FuncTemplate<Panel?>(() => new VirtualizingStackPanel()),
        };
        EditorChrome.StyleList(_list);
        _list.ItemTemplate = new FuncDataTemplate<DataTableListItem>((_, _) => new DataTableListRow(this), true);
        _list.SelectionChanged += (_, _) =>
        {
            if (_suppress)
                return;
            if (_list.SelectedItem is DataTableListItem item)
                ShowEntry(item.Asset);
        };

        var listHost = new Border
        {
            Background = EditorTheme.PanelBgBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 0, 1, 0),
            Child = _list,
        };

        _formHost = new StackPanel { Spacing = EditorTheme.Space1 };
        var formHost = new Border
        {
            Padding = new Thickness(EditorTheme.Space3, EditorTheme.Space2),
            Background = EditorTheme.CanvasBgBrush,
            Child = new ScrollViewer { Content = _formHost },
        };

        var split = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions($"{ListPaneWidth},*"),
            Children = { listHost, formHost },
        };
        Grid.SetColumn(formHost, 1);

        Content = new Grid
        {
            RowDefinitions = new RowDefinitions("Auto,*"),
            Background = EditorTheme.PanelBgBrush,
            Children = { EditorChrome.ToolbarHost(toolbarInner), split },
        };
        Grid.SetRow(split, 1);
    }

    public void Load(RomImage rom, Charmap charmap, AssetCatalog catalog, WorkingRom? workingRom, AssetDescriptor? asset)
    {
        _rom = rom;
        _charmap = charmap;
        _catalog = catalog;
        _workingRom = workingRom;
        var root = CatalogBuilder.FindRepositoryRoot(rom.Path);
        _sprites = new ActorSpriteAtlas(root);
        _icons = DungeonIconAtlas.TryLoad(ActiveRom, 0);
        _tables = DataTableTables.TryLoad(ActiveRom);
        if (_tables is not null)
            _movePicks = DataTableCodec.AlphabeticalMoves(ActiveRom, _tables, charmap);
        ShowAsset(asset ?? catalog.ForCategory(AssetCategory.DataTables).FirstOrDefault());
    }

    public void ShowAsset(AssetDescriptor? asset)
    {
        if (_catalog is null || asset is null)
            return;

        var table = asset.Kind is AssetKind.MonsterEntry or AssetKind.MoveEntry or AssetKind.ItemEntry
            ? ParentTable(asset)
            : asset;
        if (table is null)
            return;

        _table = table;
        _monsterTab.IsChecked = table.Kind == AssetKind.MonsterTable;
        _moveTab.IsChecked = table.Kind == AssetKind.MoveTable;
        _itemTab.IsChecked = table.Kind == AssetKind.ItemTable;
        _entries = table.Children;
        _status.Text = table.Description ?? table.Name;
        ApplyFilter();

        var focus = asset.Kind is AssetKind.MonsterEntry or AssetKind.MoveEntry or AssetKind.ItemEntry
            ? asset
            : _entries.FirstOrDefault(e => e.Metadata.GetValueOrDefault("id") == "1") ?? _entries.FirstOrDefault();
        if (focus is not null)
            SelectInList(focus);
    }

    private RomImage ActiveRom => _workingRom?.View ?? _rom!;

    private AssetDescriptor? ParentTable(AssetDescriptor entry) =>
        _catalog?.ForCategory(AssetCategory.DataTables).FirstOrDefault(t =>
            t.Children.Any(c => c.Id == entry.Id));

    private void ShowTableKind(AssetKind kind)
    {
        var table = _catalog?.ForCategory(AssetCategory.DataTables).FirstOrDefault(t => t.Kind == kind);
        if (table is not null)
            ShowAsset(table);
    }

    private void ApplyFilter()
    {
        var query = (_filterBox.Text ?? string.Empty).Trim();
        _suppress = true;
        _list.ItemsSource = _entries
            .Where(a => query.Length == 0 ||
                        a.Name.Contains(query, StringComparison.OrdinalIgnoreCase) ||
                        a.Metadata.GetValueOrDefault("displayName", "").Contains(query, StringComparison.OrdinalIgnoreCase))
            .Select(a => new DataTableListItem(a))
            .ToArray();
        _suppress = false;
    }

    private void SelectInList(AssetDescriptor asset)
    {
        if (_list.ItemsSource is IEnumerable<DataTableListItem> items)
        {
            var match = items.FirstOrDefault(i => i.Asset.Id == asset.Id);
            if (match is not null)
            {
                _suppress = true;
                _list.SelectedItem = match;
                _suppress = false;
            }
        }

        ShowEntry(asset);
    }

    private void ShowEntry(AssetDescriptor asset)
    {
        _selected = asset;
        AssetSelected?.Invoke(this, asset);
        RebuildForm(asset);
    }

    private sealed class DataTableListRow : StackPanel
    {
        private readonly DataTablesWorkspacePanel _owner;
        private readonly Image _image;
        private readonly TextBlock _label;

        public DataTableListRow(DataTablesWorkspacePanel owner)
        {
            _owner = owner;
            Orientation = Orientation.Horizontal;
            Height = 36;
            _image = new Image
            {
                Width = 32,
                Height = 32,
                Stretch = Stretch.Uniform,
                Margin = new Thickness(0, 0, EditorTheme.Space2, 0),
            };
            RenderOptions.SetBitmapInterpolationMode(_image, BitmapInterpolationMode.None);
            _label = new TextBlock
            {
                FontFamily = EditorTheme.UiFont,
                FontSize = EditorTheme.FontLabel,
                Foreground = EditorTheme.TextPrimaryBrush,
                VerticalAlignment = VerticalAlignment.Center,
                TextTrimming = TextTrimming.CharacterEllipsis,
            };
            Children.Add(_image);
            Children.Add(_label);
            DataContextChanged += (_, _) => Bind();
        }

        private void Bind()
        {
            if (DataContext is not DataTableListItem item)
                return;
            var id = int.TryParse(item.Asset.Metadata.GetValueOrDefault("id"), out var parsed) ? parsed : 0;
            _label.Text = ListLabel(item.Asset);
            _owner.ApplyListSprite(_image, item.Asset.Kind, id);
        }
    }

    private static string ListLabel(AssetDescriptor asset)
    {
        var name = asset.Metadata.GetValueOrDefault("displayName");
        if (string.IsNullOrWhiteSpace(name))
            name = asset.Name;
        var id = asset.Metadata.GetValueOrDefault("id");
        return int.TryParse(id, out var n) ? $"{n:D3}  {name}" : name;
    }

    private void ApplyListSprite(Image image, AssetKind kind, int id)
    {
        if (kind == AssetKind.MoveEntry)
        {
            image.Source = null;
            image.Width = 0;
            return;
        }

        var key = (kind, id);
        if (!_listSpriteCache.TryGetValue(key, out var bitmap))
        {
            RgbaImage? sprite = kind switch
            {
                AssetKind.MonsterEntry => _sprites?.TryGetStandingThumbnail(id),
                AssetKind.ItemEntry => _icons?.TryGetItem(id),
                _ => null,
            };
            if (sprite is null)
            {
                image.Source = null;
                return;
            }

            bitmap = ToWriteableBitmap(sprite);
            _listSpriteCache[key] = bitmap;
        }

        image.Source = bitmap;
    }

    private static WriteableBitmap ToWriteableBitmap(RgbaImage sprite)
    {
        var bitmap = new WriteableBitmap(
            new PixelSize(sprite.Width, sprite.Height),
            new Vector(96, 96),
            PixelFormat.Rgba8888,
            AlphaFormat.Unpremul);
        using var fb = bitmap.Lock();
        var src = sprite.Pixels;
        var srcStride = sprite.Width * 4;
        if (fb.RowBytes == srcStride)
        {
            System.Runtime.InteropServices.Marshal.Copy(src, 0, fb.Address, src.Length);
        }
        else
        {
            for (var y = 0; y < sprite.Height; y++)
            {
                System.Runtime.InteropServices.Marshal.Copy(
                    src, y * srcStride,
                    fb.Address + y * fb.RowBytes,
                    srcStride);
            }
        }

        return bitmap;
    }

    private void RebuildForm(AssetDescriptor asset)
    {
        _formHost.Children.Clear();
        _learnsetRows.Clear();
        if (_tables is null || _charmap is null || !int.TryParse(asset.Metadata.GetValueOrDefault("id"), out var id))
            return;

        _suppress = true;
        switch (asset.Kind)
        {
            case AssetKind.MonsterEntry:
                BuildMonsterForm(id);
                break;
            case AssetKind.MoveEntry:
                BuildMoveForm(id);
                break;
            case AssetKind.ItemEntry:
                BuildItemForm(id);
                break;
        }

        _suppress = false;
    }

    private void BuildMonsterForm(int id)
    {
        var entry = DataTableCodec.ReadMonster(ActiveRom, _tables!, id, _charmap);
        if (entry is null)
            return;

        _formHost.Children.Add(EditorChrome.SectionHeader(entry.Name));
        _formHost.Children.Add(SpinRow("HP", entry.BaseHp, 1, 999, SaveMonster));
        _formHost.Children.Add(SpinRow("Exp yield", entry.ExpYield, 0, 99999, SaveMonster));
        _formHost.Children.Add(SpinRow("Recruit", entry.RecruitRate, -999, 999, SaveMonster));
        _formHost.Children.Add(ComboRow("Type 1", DataTableEnums.TypePicks, entry.Type1, SaveMonster));
        _formHost.Children.Add(ComboRow("Type 2", DataTableEnums.TypePicks, entry.Type2, SaveMonster));
        _formHost.Children.Add(ComboRow("Ability 1", DataTableEnums.AbilityPicks, entry.Ability1, SaveMonster));
        _formHost.Children.Add(ComboRow("Ability 2", DataTableEnums.AbilityPicks, entry.Ability2, SaveMonster));
        _formHost.Children.Add(ComboRow("Friend area", DataTableEnums.FriendAreaPicks, entry.FriendArea, SaveMonster));
        _formHost.Children.Add(SpinRow("Atk", entry.BaseAtk, 0, 255, SaveMonster));
        _formHost.Children.Add(SpinRow("Sp. Atk", entry.BaseSpAtk, 0, 255, SaveMonster));
        _formHost.Children.Add(SpinRow("Def", entry.BaseDef, 0, 255, SaveMonster));
        _formHost.Children.Add(SpinRow("Sp. Def", entry.BaseSpDef, 0, 255, SaveMonster));
        _formHost.Children.Add(SpinRow("Weight", entry.Weight, 0, 65535, SaveMonster));
        _formHost.Children.Add(SpinRow("Size", entry.Size, 0, 65535, SaveMonster));
        _formHost.Children.Add(SpinRow("Body", entry.BodySize, 0, 255, SaveMonster));

        _formHost.Children.Add(EditorChrome.SectionHeader("Level-up"));
        var learnHost = new StackPanel { Spacing = EditorTheme.Space1, Name = "LearnsetHost" };
        foreach (var move in entry.LevelUpMoves)
            learnHost.Children.Add(BuildLearnsetRow(move));
        _formHost.Children.Add(learnHost);
        var add = EditorChrome.ToolButton("Add move");
        add.HorizontalAlignment = HorizontalAlignment.Left;
        add.Click += (_, _) =>
        {
            var pick = _movePicks.FirstOrDefault();
            learnHost.Children.Add(BuildLearnsetRow(new LevelUpMove(pick?.Id ?? 1, 1)));
            SaveMonster();
        };
        _formHost.Children.Add(add);
    }

    private Control BuildLearnsetRow(LevelUpMove move)
    {
        var level = Spin(move.Level, 1, 100, 56);
        var combo = Combo(_movePicks, move.MoveId, ComboWidth);
        var rowState = new LearnsetRow(level, combo);
        _learnsetRows.Add(rowState);
        level.ValueChanged += (_, _) => SaveMonster();
        combo.SelectionChanged += (_, _) => SaveMonster();
        var remove = EditorChrome.IconButton("−", tip: "Remove");
        remove.Click += (_, _) =>
        {
            _learnsetRows.Remove(rowState);
            if (level.Parent is Control row && row.Parent is Panel host)
                host.Children.Remove(row);
            SaveMonster();
        };
        return new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = EditorTheme.Space2,
            Children =
            {
                Label("Lv"),
                level,
                combo,
                remove,
            },
        };
    }

    private void BuildMoveForm(int id)
    {
        var entry = DataTableCodec.ReadMove(ActiveRom, _tables!, id, _charmap);
        if (entry is null)
            return;
        _formHost.Children.Add(EditorChrome.SectionHeader(entry.Name));
        _formHost.Children.Add(SpinRow("Power", entry.BasePower, 0, 999, SaveMove));
        _formHost.Children.Add(SpinRow("PP", entry.BasePp, 1, 99, SaveMove));
        _formHost.Children.Add(ComboRow("Type", DataTableEnums.TypePicks, entry.Type, SaveMove));
        _formHost.Children.Add(ComboRow("Category", DataTableEnums.MoveCategoryPicks, entry.Category, SaveMove));
        _formHost.Children.Add(SpinRow("Accuracy 1", entry.Accuracy1, 0, 255, SaveMove));
        _formHost.Children.Add(SpinRow("Accuracy 2", entry.Accuracy2, 0, 255, SaveMove));
        _formHost.Children.Add(SpinRow("AI accuracy", entry.AccuracyAi, 0, 255, SaveMove));
        _formHost.Children.Add(SpinRow("Crit", entry.CritChance, 0, 255, SaveMove));
        _formHost.Children.Add(DescriptionBox(entry.Description, SaveMove));
    }

    private void BuildItemForm(int id)
    {
        var entry = DataTableCodec.ReadItem(ActiveRom, _tables!, id, _charmap);
        if (entry is null)
            return;
        _formHost.Children.Add(EditorChrome.SectionHeader(entry.Name));
        _formHost.Children.Add(SpinRow("Buy", (int)entry.BuyPrice, 0, 99999, SaveItem));
        _formHost.Children.Add(SpinRow("Sell", (int)entry.SellPrice, 0, 99999, SaveItem));
        _formHost.Children.Add(ComboRow("Category", DataTableEnums.ItemCategoryPicks, entry.Category, SaveItem));
        _formHost.Children.Add(ComboRow("Effect", _movePicks, entry.MoveId, SaveItem));
        _formHost.Children.Add(DescriptionBox(entry.Description, SaveItem));
    }

    private void SaveMonster()
    {
        if (_suppress || _workingRom is null || _tables is null || _selected is null)
            return;
        if (!int.TryParse(_selected.Metadata.GetValueOrDefault("id"), out var id))
            return;
        var learnset = _learnsetRows
            .Select(row => new LevelUpMove(SelectedId(row.Move), (int)(row.Level.Value ?? 1)))
            .ToArray();
        Apply((buffer, dirty) => DataTableCodec.WriteMonster(buffer, _tables, id, _charmap, new DataTableMonsterPatch(
            BaseHp: IntVal("HP"),
            ExpYield: IntVal("Exp yield"),
            Type1: ComboVal("Type 1"),
            Type2: ComboVal("Type 2"),
            Ability1: ComboVal("Ability 1"),
            Ability2: ComboVal("Ability 2"),
            FriendArea: ComboVal("Friend area"),
            BaseAtk: IntVal("Atk"),
            BaseSpAtk: IntVal("Sp. Atk"),
            BaseDef: IntVal("Def"),
            BaseSpDef: IntVal("Sp. Def"),
            Weight: IntVal("Weight"),
            Size: IntVal("Size"),
            BodySize: IntVal("Body"),
            RecruitRate: IntVal("Recruit"),
            LevelUpMoves: learnset), dirty));
    }

    private void SaveMove()
    {
        if (_suppress || _workingRom is null || _tables is null || _selected is null)
            return;
        if (!int.TryParse(_selected.Metadata.GetValueOrDefault("id"), out var id))
            return;
        Apply((buffer, dirty) => DataTableCodec.WriteMove(buffer, _tables, id, _charmap, new DataTableMovePatch(
            BasePower: IntVal("Power"),
            BasePp: IntVal("PP"),
            Type: ComboVal("Type"),
            Category: ComboVal("Category"),
            Accuracy1: IntVal("Accuracy 1"),
            Accuracy2: IntVal("Accuracy 2"),
            AccuracyAi: IntVal("AI accuracy"),
            CritChance: IntVal("Crit"),
            Description: DescVal()), dirty));
    }

    private void SaveItem()
    {
        if (_suppress || _workingRom is null || _tables is null || _selected is null)
            return;
        if (!int.TryParse(_selected.Metadata.GetValueOrDefault("id"), out var id))
            return;
        Apply((buffer, dirty) => DataTableCodec.WriteItem(buffer, _tables, id, _charmap, new DataTableItemPatch(
            BuyPrice: (uint)IntVal("Buy"),
            SellPrice: (uint)IntVal("Sell"),
            Category: ComboVal("Category"),
            MoveId: ComboVal("Effect"),
            Description: DescVal()), dirty));
    }

    private void Apply(Func<MutableRom, List<RomSpan>, bool> write)
    {
        if (_workingRom is null)
            return;
        var buffer = _workingRom.BeginMutate();
        var dirty = new List<RomSpan>();
        if (!write(buffer, dirty))
        {
            _status.Text = "Could not write this field in-place.";
            return;
        }

        foreach (var span in dirty)
            _workingRom.Commit(buffer, span.Offset, span.Length);
        _status.Text = "Saved to working ROM (Build ROM to export).";
    }

    private int IntVal(string label) =>
        FindLabeled<CompactSpinBox>(label) is { Value: decimal v } ? (int)v : 0;

    private int ComboVal(string label) =>
        FindLabeled<InstantComboBox>(label) is { SelectedItem: DataTablePick pick } ? pick.Id : 0;

    private string DescVal()
    {
        foreach (var panel in _formHost.Children.OfType<StackPanel>())
        {
            if (panel.Children.OfType<TextBox>().FirstOrDefault() is { } box)
                return box.Text ?? "";
        }

        return "";
    }

    private T? FindLabeled<T>(string label) where T : class
    {
        foreach (var child in _formHost.Children)
        {
            if (child is Grid grid &&
                grid.Children.OfType<TextBlock>().Any(t => t.Text == label))
                return grid.Children.OfType<T>().FirstOrDefault();
        }

        return null;
    }

    private Control SpinRow(string label, int value, int min, int max, Action save)
    {
        var spin = Spin(value, min, max, SpinWidth);
        spin.ValueChanged += (_, _) => save();
        return EditorChrome.PropertyRow(label, spin);
    }

    private Control ComboRow(string label, IReadOnlyList<DataTablePick> picks, int selected, Action save)
    {
        var combo = Combo(picks, selected, ComboWidth);
        combo.SelectionChanged += (_, _) => save();
        return EditorChrome.PropertyRow(label, combo);
    }

    private Control DescriptionBox(string text, Action save)
    {
        var box = new TextBox
        {
            Text = text,
            AcceptsReturn = true,
            TextWrapping = TextWrapping.Wrap,
            MinHeight = 168,
            Height = 168,
            MaxHeight = 240,
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontLabel,
            Padding = new Thickness(6, 6),
            CornerRadius = new CornerRadius(0),
            BorderThickness = new Thickness(1),
            BorderBrush = EditorTheme.BorderSubtleBrush,
            Background = EditorTheme.InputBgBrush,
            Foreground = EditorTheme.TextPrimaryBrush,
        };
        ScrollViewer.SetVerticalScrollBarVisibility(box, Avalonia.Controls.Primitives.ScrollBarVisibility.Auto);
        box.LostFocus += (_, _) => save();
        return new StackPanel
        {
            Children =
            {
                EditorChrome.SectionHeader("Description"),
                box,
            },
        };
    }

    private static CompactSpinBox Spin(int value, int min, int max, double width) => new()
    {
        Minimum = min,
        Maximum = max,
        Value = value,
        Width = width,
        MinWidth = width,
        HorizontalAlignment = HorizontalAlignment.Left,
    };

    private static InstantComboBox Combo(IReadOnlyList<DataTablePick> picks, int selectedId, double width)
    {
        var combo = new InstantComboBox
        {
            ItemsSource = picks,
            SelectedItem = picks.FirstOrDefault(p => p.Id == selectedId) ?? picks.FirstOrDefault(),
            Width = width,
            MinWidth = width,
            HorizontalAlignment = HorizontalAlignment.Left,
            MaxDropDownHeight = 280,
        };
        return combo;
    }

    private static TextBlock Label(string text) => new()
    {
        Text = text,
        FontFamily = EditorTheme.UiFont,
        FontSize = EditorTheme.FontMeta,
        Foreground = EditorTheme.TextMutedBrush,
        VerticalAlignment = VerticalAlignment.Center,
    };

    private static int SelectedId(InstantComboBox combo) =>
        combo.SelectedItem is DataTablePick pick ? pick.Id : 0;

    private sealed record DataTableListItem(AssetDescriptor Asset);

    private sealed record LearnsetRow(CompactSpinBox Level, InstantComboBox Move);
}
