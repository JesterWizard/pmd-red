#ifndef GUARD_FRIEND_AREA_INTROS_H
#define GUARD_FRIEND_AREA_INTROS_H

#include "constants/friend_area.h"

/* ~2 seconds at 60 fps; A skips. */
#define FRIEND_AREA_INTRO_FRAMES 120

typedef struct FriendAreaIntroAssets
{
    const u8 *at4pn;
    const u8 *pal;
} FriendAreaIntroAssets;

extern const FriendAreaIntroAssets gFriendAreaIntroAssets[FRIEND_AREA_COUNT];

/* Full-screen friend-area splash before the ground map loads. No-op when the
 * friend_area_intros config is off, or when areaId has no art. */
void ShowFriendAreaIntro_Async(u8 areaId);

#endif /* GUARD_FRIEND_AREA_INTROS_H */
