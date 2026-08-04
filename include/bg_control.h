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
 * Screenbases move to 4–7 (maps at 0x2000–0x3FFF). 8bpp tiles load at
 * VRAM+0x6000 (CHARBASE1 tile index +128) so font/UI chrome at 0x4F00 stays. */
extern bool8 gTitleBg8bpp;

void SetBG2RegOffsets(s32, s32);
void SetBG3RegOffsets(s32, s32);
void SetBGOBJEnableFlags(u32);
void SetBldAlphaReg(s32, s32);
void sub_800CD64(s32, bool8);
void SetTitleBg8bpp(bool8 enabled);

#endif // GUARD_BG_CONTROL_H