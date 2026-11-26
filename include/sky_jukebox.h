#ifndef GUARD_SKY_JUKEBOX_H
#define GUARD_SKY_JUKEBOX_H

/* Explorers of Sky demake: the Sky Jukebox (src/sky_jukebox.c). */

/* Main menu screen id (top menu > Other > Sky Jukebox). */
#define MENU_SKY_JUKEBOX 62

struct SkyJukeboxTrack
{
    const u8 *name;
    u16 song;
};

void CreateSkyJukeboxMenu(void);
void CleanSkyJukeboxMenu(void);
u32 UpdateSkyJukeboxMenu(void);

#endif /* GUARD_SKY_JUKEBOX_H */
