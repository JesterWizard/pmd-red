# Boss Recruit

---

## Index

- [Introduction](#introduction)
- [Behavior](#behavior)
- [Bosses](#bosses)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

After the main story, every defeated boss Pokémon offers to join the team: legendaries, story bosses, rescue-team bosses and maze bosses. Vanilla rolls the normal recruit rate for them, which is 0.1% for the legendary dogs and Regis and needs a high-level leader for Groudon, Rayquaza and Deoxys.

Toggle: `gRuntimeConfig.boss_recruit` in [`configs/runtime.c`](../../configs/runtime.c) (default `FALSE`). It can also be switched from the in-game debug menu (**Boss Join**, takes effect immediately) and in RescueTemple (**Boss Recruit**, QoL / Cheats).

---

## Behavior

| Mode | Behavior |
|------|----------|
| `TRUE` | Postgame: a defeated boss always asks to join |
| `FALSE` (default) | Vanilla recruit roll |

**Postgame** means leader switching is unlocked (`QUEST_CAN_CHANGE_LEADER`, set after the ending). Story fights are never affected.

**Boss** means a monster in a boss fight: the boss HP setup flag (`bossFlag`, set by `SetupBossFightHP` for the legendaries) or a boss behaviour (`BEHAVIOR_SKARMORY` … `BEHAVIOR_MAZE_BOSS`, which also covers Team Meanies, Mankey, Smeargle, the rescue-team bosses and maze bosses).

When the toggle applies, for that boss only:

- The recruit roll always succeeds.
- Any team member's KO counts. Vanilla only recruits on the leader's KO.
- The KO can come from any distance, and the boss doesn't need to be in view. Vanilla needs the attacker next to the target and able to see it.
- With a full team you get the Send Home choice even if `pmd2_send_home` is off. Vanilla gives up.

You still get the usual "wants to join" Yes/No, so you can decline.

Unchanged rules:

- Species the game never lets join stay unrecruitable: recruit rate −999 (Gengar, Medicham, Alakazam, Tyranitar, Ninetales), and Latias / Latios.
- Legendaries still join only once.
- Dungeon recruiting flags, the Rescue Team Maze rules and Friend Area requirements still apply.

---

## Bosses

Vanilla rates are per 1000, before the leader-level, Friend Bow and Fast Friend bonuses.

| Boss | Vanilla rate | With the toggle |
|---|---|---|
| Zapdos, Moltres, Articuno | 30% | Always |
| Kyogre | 50% | Always |
| Mewtwo, Ho-Oh, Lugia, Jirachi | 99.9% | Always |
| Entei, Raikou, Suicune, Regirock, Regice, Registeel | 0.1% | Always |
| Groudon, Rayquaza, Deoxys | −10% (needs level bonus) | Always |
| Skarmory, Smeargle | 6.8% | Always |
| Mankey | 10.9% | Always |
| Ekans (Team Meanies) | 12.4% | Always |
| Gengar, Medicham (Team Meanies), Latios | Never | Never |
| Celebi | Joins through its own cutscene | Unchanged |

---

## Code Locations

| What | Where |
|------|-------|
| Boss check | `IsGuaranteedBossRecruit` in [`src/dungeon_mon_recruit.c`](../../src/dungeon_mon_recruit.c) |
| Recruit roll / distance / sight | `TryRecruitMonster` in the same file |
| Full-team Send Home | `MakeRoomForRecruit` in the same file |
| Leader-only KO rule | `HandleDealingDamageInternal_Async` in [`src/dungeon_damage.c`](../../src/dungeon_damage.c) |
| Runtime field | `boss_recruit` in [`include/runtime.h`](../../include/runtime.h) |
| ROM default | [`configs/runtime.c`](../../configs/runtime.c) |
| Save record (v3) | [`src/runtime_config.c`](../../src/runtime_config.c) |
| Debug menu entry | [`src/data/custom_debug_menu.h`](../../src/data/custom_debug_menu.h) |
| RescueTemple metadata | [`RescueEditor/src/RescueEditor.Core/RuntimeConfigSchema.cs`](../../RescueEditor/src/RescueEditor.Core/RuntimeConfigSchema.cs) |

---

## Limitations

- **Postgame only.** Bosses fought during the story can't be recruited at all, as in vanilla.
- **No new recruits.** The toggle doesn't make never-recruitable species joinable.
- **Existing saves keep the ROM default.** The runtime-override record is now version 3. Records from before this toggle keep their other overrides and take `boss_recruit` from the ROM default.
- **Save record size.** This field filled the last byte of the 0x48-byte save record; `ui_style` then raised it to 0x4C (version 4). A static assert in `runtime_config.c` catches the next overflow.
