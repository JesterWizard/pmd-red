#ifndef GUARD_BG_CONTROL_H
#define GUARD_BG_CONTROL_H

enum
{
    BG0,
    BG1,
    BG2,
    BG3,
    NUM_BGS
};

typedef struct BGControlStruct
{
    u16 padding;
    u16 unk2;
    s16 hofs;
    s16 vofs;
} BGControlStruct;

extern BGControlStruct gBG0Control;
extern BGControlStruct gBG1Control;
extern BGControlStruct gBG2Control;
extern BGControlStruct gBG3Control;
extern u16 gBldAlpha;
extern u16 gBldCnt;
extern bool8 gUnknown_202D7FE;
/* Title screen: BG3 8bpp custom background (CHARBASE1 + 256COLOR).
 * BG0–2 maps at screenbases 6–8 (0x3000–0x47FF); BG3 map at 31 (0xF800).
 * 8bpp tiles at VRAM+0x6000 (CHARBASE1 index +128, max 600 → 0xF600). */
extern bool8 gTitleBg8bpp;
/* Spinda Café (and any ground map with 8bpp BPL marker): BG2+BG3 256-color,
 * CHARBASE1 @ 0x4000, screenbases 0/1. Mutually exclusive with gTitleBg8bpp. */
extern bool8 gGroundMap8bpp;
/* Café menu overflow: hide art and load window tiles from low VRAM (tile 2+)
 * like vanilla; UI maps stay at SB 6/7. Set by ShowWindows when stack > 256. */
extern bool8 gGroundMap8bppWideUi;

void SetBG2RegOffsets(s32, s32);
void SetBG3RegOffsets(s32, s32);
void SetBGOBJEnableFlags(u32);
void SetBldAlphaReg(s32, s32);
void sub_800CD64(s32, bool8);
void SetTitleBg8bpp(bool8 enabled);
void SetGroundMap8bpp(bool8 enabled);
void SetGroundMap8bppWideUi(bool8 enabled);
bool8 GroundMap8bppHideBg0(void);
void ClearTitleBgMapsForGround(void);
void ClearGroundMap8bppMaps(void);

#endif // GUARD_BG_CONTROL_H