using Avalonia;
using Avalonia.Controls;
using Avalonia.Input;
using Avalonia.Interactivity;
using Avalonia.Media;
using RescueEditor.Core;

namespace RescueEditor.App;

public sealed class ProjectExplorerPanel : UserControl
{
    private readonly TreeView _tree;
    public event EventHandler<ExplorerNode?>? SelectionChanged;

    public ProjectExplorerPanel()
    {
        _tree = new TreeView
        {
            Margin = new Thickness(4),
            SelectionMode = SelectionMode.Single,
        };
        _tree.SelectionChanged += (_, _) =>
        {
            var node = _tree.SelectedItem switch
            {
                ExplorerNode explorerNode => explorerNode,
                TreeViewItem { Tag: ExplorerNode tagged } => tagged,
                _ => null,
            };
            SelectionChanged?.Invoke(this, node);
        };

        Content = new Border
        {
            Background = EditorTheme.PanelBgBrush,
            BorderBrush = EditorTheme.BorderBrush,
            BorderThickness = new Thickness(0, 0, 1, 0),
            Child = new DockPanel
            {
                LastChildFill = true,
                Children =
                {
                    new TextBlock
                    {
                        Text = "Project Explorer",
                        FontWeight = FontWeight.SemiBold,
                        Margin = new Thickness(10, 8, 10, 4),
                        Foreground = EditorTheme.TextMutedBrush,
                        [DockPanel.DockProperty] = Dock.Top,
                    },
                    _tree,
                },
            },
        };
    }

    public void Clear()
    {
        _tree.ItemsSource = null;
        _tree.SelectedItem = null;
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
                var byPrefix = scenes.Scenes
                    .OrderBy(s => s.Name, StringComparer.OrdinalIgnoreCase)
                    .GroupBy(s => ScenePrefix(s.Name));
                foreach (var group in byPrefix)
                {
                    var groupNode = new SceneGroupExplorerNode
                    {
                        Title = GroupTitle(group.Key),
                        GroupKey = group.Key,
                    };
                    foreach (var scene in group)
                    {
                        var asset = catalog.ForCategory(AssetCategory.Scenes)
                            .FirstOrDefault(a =>
                                a.Metadata.TryGetValue("mapId", out var id) &&
                                int.TryParse(id, out var mapId) &&
                                mapId == scene.MapId);
                        groupNode.Children.Add(new AssetExplorerNode
                        {
                            Title = $"{scene.Name} — {GroundMapNames.FormatListName(scene.Name)}",
                            Asset = asset ?? new AssetDescriptor
                            {
                                Id = $"scene-{scene.MapId}",
                                Name = scene.Name,
                                Category = AssetCategory.Scenes,
                                Kind = AssetKind.Scene,
                                Offset = scene.HeaderOffset,
                                Metadata = new Dictionary<string, string>
                                {
                                    ["mapId"] = scene.MapId.ToString(),
                                },
                            },
                            Scene = scene,
                        });
                    }
                    categoryNode.Children.Add(groupNode);
                }
            }
            else
            {
                foreach (var asset in catalog.ForCategory(category))
                {
                    categoryNode.Children.Add(new AssetExplorerNode
                    {
                        Title = asset.DisplayName,
                        Asset = asset,
                    });
                }
            }

            roots.Add(categoryNode);
        }

        _tree.ItemsSource = ToTreeItems(roots);
    }

    public void SelectAsset(AssetDescriptor asset)
    {
        if (_tree.ItemsSource is not IEnumerable<TreeViewItem> roots)
            return;
        foreach (var root in roots)
        {
            if (FindAndSelect(root, asset))
                return;
        }
    }

    public void SelectScene(int mapId)
    {
        if (_tree.ItemsSource is not IEnumerable<TreeViewItem> roots)
            return;
        foreach (var root in roots)
        {
            if (FindAndSelectScene(root, mapId))
                return;
        }
    }

    private static bool FindAndSelect(TreeViewItem item, AssetDescriptor asset)
    {
        if (item.Tag is AssetExplorerNode node &&
            ReferenceEquals(node.Asset, asset))
        {
            item.IsSelected = true;
            ExpandParents(item);
            return true;
        }

        if (item.ItemsSource is IEnumerable<TreeViewItem> children)
        {
            foreach (var child in children)
            {
                if (FindAndSelect(child, asset))
                    return true;
            }
        }
        return false;
    }

    private static bool FindAndSelectScene(TreeViewItem item, int mapId)
    {
        if (item.Tag is AssetExplorerNode { Scene: { } scene } && scene.MapId == mapId)
        {
            item.IsSelected = true;
            ExpandParents(item);
            return true;
        }

        if (item.ItemsSource is IEnumerable<TreeViewItem> children)
        {
            foreach (var child in children)
            {
                if (FindAndSelectScene(child, mapId))
                    return true;
            }
        }
        return false;
    }

    private static void ExpandParents(TreeViewItem item)
    {
        Control? current = item;
        while (current is not null)
        {
            if (current is TreeViewItem tvi)
                tvi.IsExpanded = true;
            current = current.Parent as Control;
        }
    }

    private static List<TreeViewItem> ToTreeItems(IEnumerable<ExplorerNode> nodes)
    {
        var items = new List<TreeViewItem>();
        foreach (var node in nodes)
        {
            var item = new TreeViewItem
            {
                Header = node.Title,
                Tag = node,
                IsExpanded = false,
            };
            if (node.Children.Count > 0)
                item.ItemsSource = ToTreeItems(node.Children);
            items.Add(item);
        }
        return items;
    }

    private static string ScenePrefix(string name)
    {
        if (string.IsNullOrEmpty(name))
            return "?";
        var letter = char.ToUpperInvariant(name[0]);
        return char.IsLetter(letter) ? letter.ToString() : "?";
    }

    private static string GroupTitle(string key) => key switch
    {
        "A" => "A — Adventure",
        "B" => "B — Base",
        "D" => "D — Dungeon",
        "G" => "G — Guild / Town",
        "H" => "H — House",
        "M" => "M — Misc",
        "P" => "P — Place",
        "S" => "S — System",
        "T" => "T — Town",
        "V" => "V — Village",
        _ => $"{key} — Maps",
    };
}
