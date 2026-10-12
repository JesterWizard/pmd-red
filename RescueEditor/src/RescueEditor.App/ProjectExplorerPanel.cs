using Avalonia;
using Avalonia.Controls;
using Avalonia.Input;
using Avalonia.Layout;
using Avalonia.Media;
using Avalonia.Threading;
using RescueEditor.Core;

namespace RescueEditor.App;

public sealed class ProjectExplorerPanel : UserControl
{
    private readonly ScrollViewer _scroller;
    private readonly StackPanel _host;
    private readonly TextBox _filterBox;
    private List<ExplorerNode> _roots = new();
    private readonly Dictionary<ExplorerNode, Control> _nodeControls = new();
    private List<ExplorerNode> _displayRoots = new();
    private readonly HashSet<ExplorerNode> _populated = new();
    private readonly Dictionary<ExplorerNode, int> _depths = new();
    private readonly DispatcherTimer _filterTimer = new() { Interval = TimeSpan.FromMilliseconds(200) };
    private bool _filterApplied;
    private Control? _selectedControl;
    public event EventHandler<ExplorerNode?>? SelectionChanged;

    public ProjectExplorerPanel()
    {
        _host = new StackPanel { Spacing = 0 };
        _scroller = new ScrollViewer
        {
            Content = _host,
            HorizontalScrollBarVisibility = Avalonia.Controls.Primitives.ScrollBarVisibility.Disabled,
            VerticalScrollBarVisibility = Avalonia.Controls.Primitives.ScrollBarVisibility.Auto,
        };

        _filterBox = new TextBox
        {
            PlaceholderText = "Filter…",
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontLabel,
            Height = EditorTheme.ControlHeight,
            Margin = new Thickness(EditorTheme.Space2),
        };
        EditorChrome.StyleEditor(_filterBox);
        _filterBox.FontFamily = EditorTheme.UiFont;
        _filterBox.TextChanged += (_, _) => { _filterTimer.Stop(); _filterTimer.Start(); };
        _filterTimer.Tick += (_, _) => { _filterTimer.Stop(); ApplyFilter(); };

        var filterHost = new Border
        {
            Background = EditorTheme.PanelBgRaisedBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 0, 0, 1),
            Child = _filterBox,
        };

        var body = new DockPanel { LastChildFill = true };
        var header = EditorChrome.PanelHeader("Project");
        DockPanel.SetDock(header, Dock.Top);
        DockPanel.SetDock(filterHost, Dock.Top);
        body.Children.Add(header);
        body.Children.Add(filterHost);
        body.Children.Add(_scroller);

        Content = EditorChrome.VerticalPane(body, rightEdge: true);
        MinWidth = 180;
        MaxWidth = 480;
    }

    public void Clear()
    {
        _roots = new();
        _filterBox.Text = string.Empty;
        _filterTimer.Stop(); // setting Text above may have started the debounce timer
        _host.Children.Clear();
        _nodeControls.Clear();
        _displayRoots = new();
        _populated.Clear();
        _depths.Clear();
        _filterApplied = false;
        _selectedControl = null;
    }

    public void Build(
        AssetCatalog catalog,
        SceneDatabase? scenes,
        IReadOnlyList<(string Name, AssetCategory Category)> categories)
    {
        var roots = new List<ExplorerNode>();
        foreach (var (name, category) in categories)
        {
            var categoryNode = new CategoryExplorerNode
            {
                Title = $"{name} ({catalog.ForCategory(category).Count})",
                Category = category,
            };

            if (category == AssetCategory.Scenes && scenes is not null)
            {
                var sceneAssets = catalog.ForCategory(AssetCategory.Scenes)
                    .Select(a => a.Metadata.TryGetValue("mapId", out var id) && int.TryParse(id, out var mapId)
                        ? (MapId: mapId, Asset: a)
                        : (MapId: -1, Asset: a))
                    .Where(x => x.MapId >= 0)
                    .GroupBy(x => x.MapId)
                    .ToDictionary(g => g.Key, g => g.First().Asset);

                foreach (var group in SceneExplorerLayout.Build(scenes.Scenes))
                {
                    var groupNode = new SceneGroupExplorerNode
                    {
                        Title = $"{group.Title} ({group.Items.Count})",
                        GroupKey = group.Key,
                    };
                    foreach (var item in group.Items)
                    {
                        sceneAssets.TryGetValue(item.MapId, out var asset);
                        groupNode.Children.Add(new AssetExplorerNode
                        {
                            Title = item.Title,
                            Asset = asset ?? new AssetDescriptor
                            {
                                Id = $"scene-{item.MapId}",
                                Name = item.Title,
                                Category = AssetCategory.Scenes,
                                Kind = AssetKind.Scene,
                                Offset = item.Scene.HeaderOffset,
                                Metadata = new Dictionary<string, string>
                                {
                                    ["mapId"] = item.MapId.ToString(),
                                },
                            },
                            Scene = item.Scene,
                        });
                    }
                    categoryNode.Children.Add(groupNode);
                }
            }
            else
            {
                foreach (var asset in catalog.ForCategory(category))
                {
                    var assetNode = new AssetExplorerNode
                    {
                        Title = asset.DisplayName,
                        Asset = asset,
                    };
                    foreach (var child in asset.Children)
                    {
                        assetNode.Children.Add(new AssetExplorerNode
                        {
                            Title = child.DisplayName,
                            Asset = child,
                        });
                    }

                    categoryNode.Children.Add(assetNode);
                }
            }

            roots.Add(categoryNode);
        }

        _roots = roots;
        ApplyFilter();
    }

    public void SelectAsset(AssetDescriptor asset)
    {
        if (TrySelectAssetId(asset.Id))
            return;
        if (Reveal(n => n is AssetExplorerNode a && ReferenceEquals(a.Asset, asset)) is { } hit)
            SelectControl(hit.Control, hit.Node);
    }

    public bool TrySelectAssetId(string assetId)
    {
        if (Reveal(n => n is AssetExplorerNode a && string.Equals(a.Asset.Id, assetId, StringComparison.Ordinal))
            is not { } hit)
            return false;
        SelectControl(hit.Control, hit.Node);
        return true;
    }

    public bool SelectScene(int mapId)
    {
        if (Reveal(n => n is AssetExplorerNode { Scene: { } scene } && scene.MapId == mapId) is not { } hit)
            return false;
        SelectControl(hit.Control, hit.Node);
        return true;
    }

    public void ExpandCategory(AssetCategory category)
    {
        if (Reveal(n => n is CategoryExplorerNode c && c.Category == category) is { Control: Expander expander } hit)
        {
            EnsurePopulated(hit.Node);
            expander.IsExpanded = true;
        }
    }

    public bool TrySelectCategory(AssetCategory category)
    {
        if (Reveal(n => n is CategoryExplorerNode c && c.Category == category) is not { } hit)
            return false;
        if (hit.Control is Expander expander)
        {
            EnsurePopulated(hit.Node);
            expander.IsExpanded = true;
        }
        SelectionChanged?.Invoke(this, hit.Node);
        return true;
    }

    private void ApplyFilter()
    {
        var query = (_filterBox.Text ?? string.Empty).Trim();
        _filterApplied = !string.IsNullOrEmpty(query);
        var roots = string.IsNullOrEmpty(query) ? _roots : FilterNodes(_roots, query);
        _displayRoots = roots;
        _host.Children.Clear();
        _nodeControls.Clear();
        _populated.Clear();
        _depths.Clear();
        _selectedControl = null;
        foreach (var node in roots)
            _host.Children.Add(BuildNodeControl(node, depth: 0, expand: _filterApplied));
    }

    private Control BuildNodeControl(ExplorerNode node, int depth, bool expand)
    {
        if (node.Children.Count > 0)
        {
            // Expander: entire header row toggles open/closed (not chevron-only like TreeView).
            // Child rows are built by EnsurePopulated on first expand (or straight away when filtering).
            var expander = new Expander
            {
                Header = CreateHeaderLabel(node, depth),
                IsExpanded = expand || (node is CategoryExplorerNode && false),
                HorizontalAlignment = HorizontalAlignment.Stretch,
                HorizontalContentAlignment = HorizontalAlignment.Stretch,
                Padding = new Thickness(0),
                Margin = new Thickness(0),
                Tag = node,
                Content = new StackPanel { Spacing = 0 },
            };
            _depths[node] = depth;
            // Register before populating: EnsurePopulated finds the host through _nodeControls.
            _nodeControls[node] = expander;
            if (expand)
                EnsurePopulated(node);
            expander.Expanded += (_, _) => { EnsurePopulated(node); SelectionChanged?.Invoke(this, node); };
            return expander;
        }

        var row = CreateSelectableRow(node, depth);
        _nodeControls[node] = row;
        return row;
    }

    private Border CreateSelectableRow(ExplorerNode node, int depth)
    {
        var label = CreateHeaderLabel(node, depth);
        var row = new Border
        {
            Background = Brushes.Transparent,
            Child = label,
            Tag = node,
            HorizontalAlignment = HorizontalAlignment.Stretch,
            Padding = new Thickness(0, 0, 0, 0),
            Cursor = new Cursor(StandardCursorType.Hand),
            Height = EditorTheme.ControlHeight + 2,
            CornerRadius = EditorTheme.ControlRadius,
            Margin = new Thickness(EditorTheme.Space2, 1),
        };
        row.PointerPressed += (_, e) =>
        {
            if (!e.GetCurrentPoint(row).Properties.IsLeftButtonPressed)
                return;
            SelectControl(row, node);
        };
        return row;
    }

    private static TextBlock CreateHeaderLabel(ExplorerNode node, int depth) => new()
    {
        Text = node.Title,
        FontFamily = EditorTheme.UiFont,
        FontSize = EditorTheme.FontLabel,
        FontWeight = node is CategoryExplorerNode ? FontWeight.SemiBold : FontWeight.Normal,
        Foreground = node switch
        {
            CategoryExplorerNode => EditorTheme.TextSecondaryBrush,
            SceneGroupExplorerNode => EditorTheme.TextMutedBrush,
            _ => EditorTheme.TextPrimaryBrush,
        },
        VerticalAlignment = VerticalAlignment.Center,
        TextTrimming = TextTrimming.CharacterEllipsis,
        Margin = new Thickness(EditorTheme.Space3 + depth * EditorTheme.Space4, 0, EditorTheme.Space2, 0),
        Height = EditorTheme.ControlHeight,
    };

    private void SelectControl(Control control, ExplorerNode node)
    {
        if (_selectedControl is Border previous)
            previous.Background = Brushes.Transparent;
        _selectedControl = control;
        if (control is Border border)
            border.Background = EditorTheme.AccentSoftBrush;
        SelectionChanged?.Invoke(this, node);
    }

    // Child rows are created on first expand; thousands of collapsed assets never get controls.
    private void EnsurePopulated(ExplorerNode node)
    {
        if (!_populated.Add(node) ||
            !_nodeControls.TryGetValue(node, out var control) ||
            control is not Expander { Content: StackPanel host })
            return;
        var depth = _depths.GetValueOrDefault(node);
        var expand = _filterApplied;
        foreach (var child in node.Children)
            host.Children.Add(BuildNodeControl(child, depth + 1, expand));
    }

    /// <summary>Expands the first node matching <paramref name="match"/> and every ancestor (creating rows as needed) and returns that node with its control.</summary>
    private (ExplorerNode Node, Control Control)? Reveal(Func<ExplorerNode, bool> match)
    {
        var path = TreePath.Find(_displayRoots, node => node.Children, match);
        if (path is null)
            return null;
        // Includes the match itself, as the old visual-tree walk did: a matched branch is opened too.
        foreach (var current in path)
        {
            EnsurePopulated(current);
            if (_nodeControls.TryGetValue(current, out var branch) && branch is Expander expander)
                expander.IsExpanded = true;
        }
        var target = path[^1];
        return _nodeControls.TryGetValue(target, out var control) ? (target, control) : null;
    }

    private static List<ExplorerNode> FilterNodes(IEnumerable<ExplorerNode> nodes, string query)
    {
        var result = new List<ExplorerNode>();
        foreach (var node in nodes)
        {
            if (node is AssetExplorerNode asset)
            {
                if (asset.Title.Contains(query, StringComparison.OrdinalIgnoreCase) ||
                    asset.Asset.Name.Contains(query, StringComparison.OrdinalIgnoreCase) ||
                    (asset.Scene?.Name.Contains(query, StringComparison.OrdinalIgnoreCase) ?? false))
                {
                    result.Add(new AssetExplorerNode
                    {
                        Title = asset.Title,
                        Asset = asset.Asset,
                        Scene = asset.Scene,
                    });
                }
                continue;
            }

            var children = FilterNodes(node.Children, query);
            var selfMatch = node.Title.Contains(query, StringComparison.OrdinalIgnoreCase);
            if (children.Count == 0 && !selfMatch)
                continue;

            ExplorerNode clone = node switch
            {
                CategoryExplorerNode cat => new CategoryExplorerNode
                {
                    Title = cat.Title,
                    Category = cat.Category,
                },
                SceneGroupExplorerNode group => new SceneGroupExplorerNode
                {
                    Title = group.Title,
                    GroupKey = group.GroupKey,
                },
                FolderExplorerNode folder => new FolderExplorerNode { Title = folder.Title },
                _ => new FolderExplorerNode { Title = node.Title },
            };
            foreach (var child in children)
                clone.Children.Add(child);
            if (selfMatch && children.Count == 0)
            {
                foreach (var child in node.Children)
                    clone.Children.Add(child);
            }
            result.Add(clone);
        }
        return result;
    }
}
