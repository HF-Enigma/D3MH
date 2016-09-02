#ifndef D3MH_SCENE_H
#define D3MH_SCENE_H

#include "types.h"

namespace D3 {

// sizeof = 0x6C4
struct Scene {
    uint x000_Id;
    uint x004_NavMeshId;
    uint x008_WorldId;
    int _x00C;
    int _x010;
    int _x014;
    uint x018_LevelAreaSnoId;
    int _x01C;
    int _x020;
    int _x024;
    uint _x028_PortalWorldSnoId;
    int _x02C;
    int _x030;
    int _x034;
    int _x038;
    int _x03C;
    uint x040_MusicSnoId;
    uint x044_AmbientSoundSnoId;
    uint x048_ReverbSnoId;
    uint x04C_WeatherSnoId;
    uint x050_WorldsSnoId;
    int _x054;
    int _x058;
    int _x05C;
    int _x060;
    int _x064;
    int _x068;
    int _x06C;
    int _x070;
    int _x074;
    int _x078;
    int _x07C;
    int _x080;
    int _x084;
    int _x088;
    int _x08C;
    int _x090;
    int _x094;
    int _x098;
    uint _x09C_SizeX;
    uint _x0A0_SizeY;
    float x0A4;
    float x0A8;
    float x0AC;
    float x0B0;
    float x0B4;
    float x0B8;
    float x0BC;
    float x0C0;
    float x0C4;
    float x0C8;
    float x0CC;
    float x0D0;
    int _x0D4;
    int _x0D8;
    int _x0DC;
    int _x0E0;
    int _x0E4;
    uint x0E8_SceneSnoId;
    int x0EC_StructStart;
    int _x0F0;
    int _x0F4;
    float x0F8;
    float x0FC_MeshMinX;
    float x100_MeshMinY;
    float x104_MeshMinZ;
    float x108;
    float x10C;
    float x110;
    float x114;
    float x118;
    float x11C;
    float x120;
    float x124;
    float x128;
    float x12C;
    float x130;
    float x134;
    float x138;
    float x13C;
    float x140;
    float x144;
    float x148;
    float x14C;
    float x150;
    float x154;
    float x158;
    float x15C;
    float x160;
    float x164;
    float x168;
    float x16C;
    float x170;
    float x174_MeshMaxX;
    float x178_MeshMaxY;
    int _x17C;
    int _x180;
    int _x184;
    int _x188;
    int x18C;
    int _x190;
    int _x194;
    uint x198_Flags;
    int _x19C;
    int _x1A0;
    int x1A4;
    int _x1A8;
    void* x1AC_Ptr_ListNode_;
    int _x1B0;
    int _x1B4;
    int _x1B8;
    int _x1BC;
    uint x1C0_SceneSnoId_;
    int _x1C4;
    int _x1C8;
    int _x1CC;
    int _x1D0;
    int _x1D4;
    int _x1D8;
    int _x1DC;
    int _x1E0;
    int _x1E4;
    int _x1E8;
    int _x1EC;
    int _x1F0;
    int _x1F4;
    int _x1F8;
    int _x1FC;
    int _x200;
    int _x204;
    int _x208;
    int _x20C;
    int _x210;
    int _x214;
    int _x218;
    int _x21C;
    int _x220;
    int _x224;
    int _x228;
    uint x22C_Flags;
    int _x230;
    int _x234;
    int x238_StructStart_Min28Bytes;
    int _x23C;
    int _x240;
    int _x244;
    int _x248;
    int _x24C;
    int _x250;
    int x254_StructStart;
    int _x258;
    int _x25C;
    int x260_PtrListNodeAllocator;
    int _x264;
    int x268;
    int _x26C;
    int _x270;
    int _x274;
    uint x278_AppearanceSnoId;
    int x27C_StructStart_Min44Bytes;
    int _x280;
    int _x284;
    int _x288;
    int _x28C;
    int _x290;
    int _x294;
    int _x298;
    int _x29C;
    int _x2A0;
    int _x2A4;
    uchar x2A8_ListB_ActorIds[0x14];
    uchar unknown_0x2BC[0x6C4-0x2BD];
};

// SizeOf = 0x3C; // 60
class SceneRevealInfo
{
public:
    uint x00_SceneSnoId;
    uint x04_SceneId_;
    uint x08_WorldId_;
    uint x0C_TextureSnoId;
    float x10_MinX;
    float x14_MinY;
    float x18_MaxX;
    float x1C_MaxY;
    uint x20_TextureSnoId_;
    char* x24_OpacityMask; // 8 bits-per-channel grayscale channel
    int x28_OpacityMaskWidth;
    int x2C_OpacityMaskHeight;
    int x30_FrameCounter;
    int x34_IsFullyVisible;
    int _x38;
};

}
#endif // D3MH_SCENE_H

