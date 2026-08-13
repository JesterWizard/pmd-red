using Avalonia;
using Avalonia.Controls;
using Avalonia.Layout;
using Avalonia.Media;
using RescueEditor.Core;

namespace RescueEditor.App;

/// <summary>Thin encode/decode UI over <see cref="WonderMailCodec"/>.</summary>
public sealed class WonderMailWindow : Window
{
    private readonly TextBox _password;
    private readonly TextBlock _status;
    private readonly InstantComboBox _mission;
    private readonly CompactSpinBox _special;
    private readonly InstantComboBox _dungeon;
    private readonly CompactSpinBox _floor;
    private readonly CompactSpinBox _seed;
    private readonly InstantComboBox _client;
    private readonly InstantComboBox _target;
    private readonly InstantComboBox _targetItem;
    private readonly InstantComboBox _reward;
    private readonly InstantComboBox _itemReward;
    private readonly InstantComboBox _friendArea;

    public WonderMailWindow()
    {
        Title = "Wonder Mail";
        Width = 560;
        Height = 620;
        MinWidth = 480;
        MinHeight = 480;
        CanResize = true;
        WindowStartupLocation = WindowStartupLocation.CenterOwner;
        EditorChrome.StyleDialogWindow(this);
        AppIcon.Apply(this);

        _password = new TextBox
        {
            FontFamily = EditorTheme.MonoFont,
            FontSize = EditorTheme.FontBody,
            AcceptsReturn = true,
            TextWrapping = TextWrapping.Wrap,
            MinHeight = 56,
            Height = double.NaN,
            Padding = new Thickness(4, 4),
            CornerRadius = new CornerRadius(0),
            BorderThickness = new Thickness(1),
            BorderBrush = EditorTheme.BorderSubtleBrush,
            Background = EditorTheme.InputBgBrush,
            PlaceholderText = "24-character Wonder Mail password",
        };

        var decode = EditorChrome.ToolButton("Decode", primary: true);
        decode.Click += (_, _) => Decode();
        var encode = EditorChrome.ToolButton("Encode");
        encode.Click += (_, _) => Encode();

        _status = EditorChrome.MutedBody("Encode fields to a password, or paste a password and decode.");
        _status.Margin = new Thickness(0, EditorTheme.Space2, 0, 0);

        _mission = Combo(MissionPicks(), 0);
        _special = Spin(0, 0, 15);
        _dungeon = Combo(DungeonPicks(), 0);
        _floor = Spin(1, 0, 100);
        _seed = Spin(1, 0, 0xFFFFFF);
        _client = Combo(SpeciesPicks(), 1);
        _target = Combo(SpeciesPicks(), 1);
        _targetItem = Combo(ItemPicks(), 82);
        _reward = Combo(RewardPicks(), (int)WonderMailRewardType.Item);
        _itemReward = Combo(ItemPicks(), 55);
        _friendArea = Combo(FriendAreaPicks(), 0);

        var fields = new StackPanel
        {
            Spacing = EditorTheme.Space1,
            Children =
            {
                EditorChrome.SectionHeader("Mission"),
                EditorChrome.PropertyRow("Type", _mission),
                EditorChrome.PropertyRow("Special", _special),
                EditorChrome.PropertyRow("Dungeon", _dungeon),
                EditorChrome.PropertyRow("Floor", _floor),
                EditorChrome.PropertyRow("Seed", _seed),
                EditorChrome.SectionHeader("Pokémon / items"),
                EditorChrome.PropertyRow("Client", _client),
                EditorChrome.PropertyRow("Target", _target),
                EditorChrome.PropertyRow("Target item", _targetItem),
                EditorChrome.SectionHeader("Reward"),
                EditorChrome.PropertyRow("Reward", _reward),
                EditorChrome.PropertyRow("Item", _itemReward),
                EditorChrome.PropertyRow("Friend Area", _friendArea),
            },
        };

        var buttons = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = EditorTheme.Space2,
            Children = { decode, encode },
        };

        var passwordBlock = new StackPanel
        {
            Spacing = EditorTheme.Space2,
            Margin = new Thickness(0, 0, 0, EditorTheme.Space3),
            Children =
            {
                EditorChrome.SectionHeader("Password"),
                _password,
                buttons,
                _status,
            },
        };

        Content = new ScrollViewer
        {
            Content = new StackPanel
            {
                Margin = new Thickness(EditorTheme.Space4),
                Children = { passwordBlock, fields },
            },
        };

        ShowMail(new WonderMailMission
        {
            MailType = WonderMailTypes.Wonder,
            MissionType = WonderMailMissionType.RescueClient,
            ClientSpecies = 1,
            TargetSpecies = 1,
            TargetItem = 82,
            RewardType = WonderMailRewardType.Item,
            ItemReward = 55,
            Seed = 1,
            Floor = 1,
        });
    }

    private void Decode()
    {
        if (!WonderMailCodec.TryDecode(_password.Text ?? "", out var mail))
        {
            SetStatus("Could not decode that password (length, alphabet, or checksum).", ok: false);
            return;
        }

        ShowMail(mail);
        var check = WonderMailValidator.Validate(mail);
        SetStatus(check.IsValid
            ? "Decoded. Password is valid for in-game Wonder Mail."
            : "Decoded, but the game would reject it: " + string.Join(" ", check.Errors),
            check.IsValid);
    }

    private void Encode()
    {
        var mail = ReadMail();
        var password = WonderMailCodec.FormatPassword(WonderMailCodec.Encode(mail));
        _password.Text = password;
        var check = WonderMailValidator.Validate(mail);
        SetStatus(check.IsValid
            ? "Encoded. This password should enter in-game."
            : "Encoded, but the game would reject it: " + string.Join(" ", check.Errors),
            check.IsValid);
    }

    private WonderMailMission ReadMail() => new()
    {
        MailType = WonderMailTypes.Wonder,
        MissionType = (WonderMailMissionType)SelectedId(_mission),
        Special = (byte)(_special.Value ?? 0),
        DungeonId = (byte)SelectedId(_dungeon),
        Floor = (byte)(_floor.Value ?? 0),
        Seed = (uint)(_seed.Value ?? 0),
        ClientSpecies = (ushort)SelectedId(_client),
        TargetSpecies = (ushort)SelectedId(_target),
        TargetItem = (byte)SelectedId(_targetItem),
        RewardType = (WonderMailRewardType)SelectedId(_reward),
        ItemReward = (byte)SelectedId(_itemReward),
        FriendAreaReward = (byte)SelectedId(_friendArea),
    };

    private void ShowMail(WonderMailMission mail)
    {
        Select(_mission, (int)mail.MissionType);
        _special.Value = mail.Special;
        Select(_dungeon, mail.DungeonId);
        _floor.Value = mail.Floor;
        _seed.Value = mail.Seed;
        Select(_client, mail.ClientSpecies);
        Select(_target, mail.TargetSpecies);
        Select(_targetItem, mail.TargetItem);
        Select(_reward, (int)mail.RewardType);
        Select(_itemReward, mail.ItemReward);
        Select(_friendArea, mail.FriendAreaReward);
    }

    private void SetStatus(string text, bool ok)
    {
        _status.Text = text;
        _status.Foreground = ok ? EditorTheme.SuccessBrush : EditorTheme.WarningBrush;
    }

    private static IReadOnlyList<DataTablePick> MissionPicks() =>
    [
        new((int)WonderMailMissionType.RescueClient, "Rescue client"),
        new((int)WonderMailMissionType.RescueTarget, "Rescue target"),
        new((int)WonderMailMissionType.EscortClient, "Escort client"),
        new((int)WonderMailMissionType.FindItem, "Find item"),
        new((int)WonderMailMissionType.DeliverItem, "Deliver item"),
        new((int)WonderMailMissionType.OutlawHunt, "Outlaw hunt (not accepted in passwords)"),
    ];

    private static IReadOnlyList<DataTablePick> RewardPicks() =>
    [
        new((int)WonderMailRewardType.Money, "Money"),
        new((int)WonderMailRewardType.MoneyExtra, "Money (extra)"),
        new((int)WonderMailRewardType.Item, "Item"),
        new((int)WonderMailRewardType.ItemExtra, "Item (extra)"),
        new((int)WonderMailRewardType.Money1, "Money (alt)"),
        new((int)WonderMailRewardType.Money1Extra, "Money (alt extra)"),
        new((int)WonderMailRewardType.Item1, "Item (alt)"),
        new((int)WonderMailRewardType.Item1Extra, "Item (alt extra)"),
        new((int)WonderMailRewardType.FriendArea, "Friend Area"),
    ];

    private static IReadOnlyList<DataTablePick> DungeonPicks() =>
        DungeonBuiltinNames.Dungeons
            .Select((d, id) => new DataTablePick(id, $"{id:00} {d.DisplayName}"))
            .ToArray();

    private static IReadOnlyList<DataTablePick> SpeciesPicks() =>
        Enumerable.Range(0, DungeonBuiltinNames.SpeciesCount)
            .Select(id => new DataTablePick(id, $"{id:000} {DungeonBuiltinNames.Species(id)}"))
            .ToArray();

    private static IReadOnlyList<DataTablePick> ItemPicks() =>
        Enumerable.Range(0, DungeonBuiltinNames.ItemCount)
            .Select(id => new DataTablePick(id, $"{id:000} {DungeonBuiltinNames.Item(id)}"))
            .ToArray();

    private static IReadOnlyList<DataTablePick> FriendAreaPicks() =>
        DataTableEnums.FriendAreas
            .Select((name, id) => new DataTablePick(id, $"{id:00} {name}"))
            .ToArray();

    private static InstantComboBox Combo(IReadOnlyList<DataTablePick> picks, int selectedId)
    {
        var combo = new InstantComboBox
        {
            ItemsSource = picks,
            HorizontalAlignment = HorizontalAlignment.Stretch,
            MaxDropDownHeight = 280,
        };
        Select(combo, selectedId);
        return combo;
    }

    private static CompactSpinBox Spin(decimal value, decimal min, decimal max) => new()
    {
        Minimum = min,
        Maximum = max,
        Value = value,
        HorizontalAlignment = HorizontalAlignment.Stretch,
    };

    private static void Select(InstantComboBox combo, int id)
    {
        if (combo.ItemsSource is not IEnumerable<DataTablePick> picks)
            return;
        combo.SelectedItem = picks.FirstOrDefault(p => p.Id == id) ?? picks.FirstOrDefault();
    }

    private static int SelectedId(InstantComboBox combo) =>
        combo.SelectedItem is DataTablePick pick ? pick.Id : 0;
}
