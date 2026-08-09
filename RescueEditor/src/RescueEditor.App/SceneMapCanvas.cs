using Avalonia;
using Avalonia.Controls;
using Avalonia.Input;
using Avalonia.Media;
using Avalonia.Media.Imaging;
using RescueEditor.Core;

namespace RescueEditor.App;

public enum SceneMapTool
{
    Select,
    Pan,
}

/// <summary>Interactive scene map with hit-testing, drag-move, pan, and grid overlay.</summary>
public sealed class SceneMapCanvas : UserControl
{
    private readonly Image _image;
    private readonly Canvas _overlay;
    private readonly Border _host;
    private readonly ScrollViewer _scroller;
    private readonly TextBlock _coordLabel;

    private RomImage? _rom;
    private Scene? _scene;
    private SceneEntity? _selected;
    private int _group;
    private int _sector;
    private bool _showLives = true;
    private bool _showObjects = true;
    private bool _showEffects = true;
    private bool _showEvents = true;
    private bool _showLinks = true;
    private bool _showGrid;
    private string? _hudDialogue;
    private Bitmap? _bitmap;
    private double _imageScale = 1.0;
    private int _imageWidth;
    private int _imageHeight;

    private bool _dragging;
    private bool _panning;
    private Point _dragStart;
    private CompactPos _dragOrigin;
    private Point _panStart;
    private Vector _panOffsetStart;

    public SceneMapTool Tool { get; set; } = SceneMapTool.Select;
    public event EventHandler<SceneEntity?>? EntitySelected;
    public event EventHandler<SceneEntity>? EntityMoved;
    public event EventHandler<(double X, double Y)>? CursorMoved;

    public SceneMapCanvas()
    {
        _image = new Image
        {
            Stretch = Stretch.None,
            HorizontalAlignment = Avalonia.Layout.HorizontalAlignment.Left,
            VerticalAlignment = Avalonia.Layout.VerticalAlignment.Top,
        };
        _overlay = new Canvas
        {
            IsHitTestVisible = false,
        };
        var layer = new Panel { Children = { _image, _overlay } };
        _host = new Border
        {
            Background = EditorTheme.CanvasBgBrush,
            Child = layer,
            Cursor = new Cursor(StandardCursorType.Arrow),
        };
        _host.PointerPressed += OnPointerPressed;
        _host.PointerMoved += OnPointerMoved;
        _host.PointerReleased += OnPointerReleased;
        _host.PointerCaptureLost += (_, _) => { _dragging = false; _panning = false; };

        _scroller = new ScrollViewer
        {
            HorizontalScrollBarVisibility = Avalonia.Controls.Primitives.ScrollBarVisibility.Auto,
            VerticalScrollBarVisibility = Avalonia.Controls.Primitives.ScrollBarVisibility.Auto,
            Content = _host,
        };

        _coordLabel = new TextBlock
        {
            Text = "X: —, Y: —",
            Foreground = EditorTheme.TextMutedBrush,
            FontSize = 12,
            Margin = new Thickness(8, 4),
            HorizontalAlignment = Avalonia.Layout.HorizontalAlignment.Left,
            VerticalAlignment = Avalonia.Layout.VerticalAlignment.Bottom,
        };

        Content = new Panel
        {
            Children =
            {
                _scroller,
                _coordLabel,
            },
        };
    }

    public void Configure(
        RomImage rom,
        Scene scene,
        int group,
        int sector,
        SceneEntity? selected,
        bool showLives,
        bool showObjects,
        bool showEffects,
        bool showEvents,
        bool showLinks,
        bool showGrid,
        string? hudDialogue = null)
    {
        _rom = rom;
        _scene = scene;
        _group = group;
        _sector = sector;
        _selected = selected;
        _showLives = showLives;
        _showObjects = showObjects;
        _showEffects = showEffects;
        _showEvents = showEvents;
        _showLinks = showLinks;
        _showGrid = showGrid;
        _hudDialogue = hudDialogue;
        Refresh();
    }

    public void SetSelected(SceneEntity? entity)
    {
        _selected = entity;
        Refresh();
    }

    public void Refresh()
    {
        if (_rom is null || _scene is null)
            return;
        try
        {
            var png = SceneCompositor.ComposeScenePng(
                _rom, _scene, _group, _sector, _selected,
                _showLives, _showObjects, _showEffects, _showEvents, _showLinks,
                drawLabels: true,
                showGrid: _showGrid,
                hudDialogue: _hudDialogue);
            using var stream = new MemoryStream(png);
            _bitmap?.Dispose();
            _bitmap = new Bitmap(stream);
            _image.Source = _bitmap;
            _imageWidth = _bitmap.PixelSize.Width;
            _imageHeight = _bitmap.PixelSize.Height;
            _image.Width = _imageWidth;
            _image.Height = _imageHeight;
            _overlay.Width = _imageWidth;
            _overlay.Height = _imageHeight;
            _host.Width = _imageWidth;
            _host.Height = _imageHeight;
            _imageScale = 1.0;
        }
        catch
        {
            // Keep prior frame on compose failure.
        }
    }

    private void OnPointerPressed(object? sender, PointerPressedEventArgs e)
    {
        var point = e.GetCurrentPoint(_host);
        var map = ToMap(point.Position);
        CursorMoved?.Invoke(this, (map.X, map.Y));

        if (Tool == SceneMapTool.Pan || point.Properties.IsMiddleButtonPressed)
        {
            _panning = true;
            _panStart = point.Position;
            _panOffsetStart = new Vector(_scroller.Offset.X, _scroller.Offset.Y);
            e.Pointer.Capture(_host);
            return;
        }

        if (!point.Properties.IsLeftButtonPressed || _scene is null)
            return;

        var hit = HitTest((int)map.X, (int)map.Y);
        _selected = hit;
        EntitySelected?.Invoke(this, hit);
        if (hit is not null)
        {
            _dragging = true;
            _dragStart = point.Position;
            _dragOrigin = hit.Position;
            e.Pointer.Capture(_host);
        }
        Refresh();
    }

    private void OnPointerMoved(object? sender, PointerEventArgs e)
    {
        var point = e.GetCurrentPoint(_host);
        var map = ToMap(point.Position);
        CursorMoved?.Invoke(this, (map.X, map.Y));
        _coordLabel.Text = $"X: {map.X:0.0}, Y: {map.Y:0.0}";

        if (_panning)
        {
            var dx = point.Position.X - _panStart.X;
            var dy = point.Position.Y - _panStart.Y;
            _scroller.Offset = new Vector(
                Math.Max(0, _panOffsetStart.X - dx),
                Math.Max(0, _panOffsetStart.Y - dy));
            return;
        }

        if (!_dragging || _selected is null)
            return;

        var startMap = ToMap(_dragStart);
        var dxTiles = (int)Math.Round((map.X - startMap.X) / 8.0);
        var dyTiles = (int)Math.Round((map.Y - startMap.Y) / 8.0);
        var next = new CompactPos(
            (byte)Math.Clamp(_dragOrigin.XTiles + dxTiles, 0, 255),
            (byte)Math.Clamp(_dragOrigin.YTiles + dyTiles, 0, 255),
            _dragOrigin.XFlags,
            _dragOrigin.YFlags);
        if (next.XTiles != _selected.Position.XTiles || next.YTiles != _selected.Position.YTiles)
        {
            _selected.Position = next;
            Refresh();
        }
    }

    private void OnPointerReleased(object? sender, PointerReleasedEventArgs e)
    {
        if (_dragging && _selected is not null)
        {
            _dragging = false;
            e.Pointer.Capture(null);
            var final = _selected.Position;
            if (final.XTiles != _dragOrigin.XTiles || final.YTiles != _dragOrigin.YTiles)
            {
                // Restore origin so ChangeService/MoveEntity records a proper undo step.
                _selected.Position = _dragOrigin;
                MovedPending = final;
                EntityMoved?.Invoke(this, _selected);
            }
            else
            {
                Refresh();
            }
            return;
        }

        _panning = false;
        e.Pointer.Capture(null);
    }

    /// <summary>Final position after a drag; consumed by SceneWorkspacePanel.</summary>
    public CompactPos? MovedPending { get; set; }

    private Point ToMap(Point hostPoint) =>
        new(hostPoint.X / _imageScale, hostPoint.Y / _imageScale);

    private SceneEntity? HitTest(int pixelX, int pixelY)
    {
        if (_scene is null)
            return null;
        var sector = _scene.Groups.ElementAtOrDefault(_group)?.Sectors.ElementAtOrDefault(_sector);
        if (sector is null)
            return null;

        IEnumerable<SceneEntity> candidates = Array.Empty<SceneEntity>();
        if (_showEvents) candidates = candidates.Concat(sector.Events);
        if (_showEffects) candidates = candidates.Concat(sector.Effects);
        if (_showObjects) candidates = candidates.Concat(sector.Objects);
        if (_showLives) candidates = candidates.Concat(sector.Lives);

        // Prefer top-most (later kinds first was reverse); check smallest area first among hits.
        SceneEntity? best = null;
        var bestArea = int.MaxValue;
        foreach (var entity in candidates)
        {
            var w = Math.Max(8, Math.Max(entity.Width, (byte)1) * 8);
            var h = Math.Max(8, Math.Max(entity.Height, (byte)1) * 8);
            if (pixelX >= entity.PixelX && pixelX < entity.PixelX + w &&
                pixelY >= entity.PixelY && pixelY < entity.PixelY + h)
            {
                var area = w * h;
                if (area <= bestArea)
                {
                    bestArea = area;
                    best = entity;
                }
            }
        }
        return best;
    }
}
