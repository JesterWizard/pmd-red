#ifndef GUARD_SKY_BOSS_WIPE_H
#define GUARD_SKY_BOSS_WIPE_H

#ifdef SKY_STORY

/*
 * Explorers of Sky's boss-battle transition (CORO_BOSS_WIPE_FUNC in
 * SCRIPT/COMMON/unionall.ssb, run before every EoS boss fight): two white
 * flashes, then supervision_SpecialActing(13)'s blue-white speed streaks
 * sliding across the screen, a 30-frame white-out, a white hold and a fade-in
 * on the fight. See documentation/Features/SkyDemake.md, "Boss battle
 * transition". src/sky_boss_wipe.c.
 */

/* TRUE while the transition owns the blend registers (and, during the
 * streaks, BG1 / BG2 and DMA3). Read by VBlank_CB and UpdateBGControlRegisters. */
extern bool8 gSkyBossWipeActive;

/* bgm stop, the two flashes (SE_SKY_FLASH_HEAVY), SE_SKY_BOSS_WIPE, the
 * streaks and the white-out. Returns with the screen held white. */
void SkyBossWipe_Start(void);
/* Holds the white screen for `frames` dungeon frames. */
void SkyBossWipe_HoldWhite(s32 frames);
/* EoS's fade-in from white (16 frames); gives the blend registers back. */
void SkyBossWipe_FadeIn(void);

void SkyBossWipe_VBlank(void);
void SkyBossWipe_UpdateRegs(void);

#endif

#endif // GUARD_SKY_BOSS_WIPE_H
