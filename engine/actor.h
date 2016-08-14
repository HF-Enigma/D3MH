#ifndef D3MH_ACTOR_H
#define D3MH_ACTOR_H

#include "types.h"

namespace D3 {

struct Actor{ // sizeof = 0x454
    uint x000_Id;
    char x004_Name[0x80];
    int x084_SceneId;
    int x088_AcdId;
    int x08C_ActorSnoId;
    int x090_StructStart_Min80Bytes_ActorLocation;
    float x094_StructStart_Min28Bytes;
    float x098;
    int _x09C;
    float x0A0_Direction_Abs0to1;
    float x0A4_Direction_1toNeg1;
    float x0A8_WorldPosX;
    float x0AC_WorldPosY;
    float x0B0_WorldPosZ;
    float x0B4_Radius;
    float x0B8_CollisionX;
    float x0BC_CollisionY;
    float x0C0_CollisionZ;
    float x0C4_CollisionRadius;
    float x0C8_BottomX;
    float x0CC_BottomY;
    float x0D0_BottomZ;
    float x0D4_BottomRadius;
    int _x0D8;
    int _x0DC;
    int x0E0_WorldId;
    int x0E4_SceneNavMeshId;
    int _x0E8;
    int _x0EC;
    int _x0F0;
    int _x0F4;
    int _x0F8;
    int _x0FC;
    float _x100;
    float _x104;
    float x108_X;
    float x10C_Y;
    float x110_Z;
    float x114_Radius;
    float _x118;
    float _x11C;
    int _x120;
    int _x124;
    float _x128;
    float _x12C;
    int _x130;
    int _x134;
    int _x138;
    int _x13C;
    int _x140;
    int _x144;
    int _x148;
    int _x14C;
    int _x150;
    int _x154;
    int x158_AppearanceSnoId;
    int _x15C;
    int _x160;
    int _x164;
    int _x168;
    int _x16C;
    int _x170;
    int _x174;
    int _x178;
    int _x17C;
    int _x180;
    int _x184;
    int _x188;
    int _x18C;
    int _x190;
    int _x194;
    int _x198;
    int _x19C;
    int _x1A0;
    int _x1A4;
    int _x1A8;
    void* x1AC_ActorMovement;
    int _x1B0;
    int _x1B4;
    int _x1B8;
    int _x1BC;
    int _x1C0;
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
    int x22C_Tick;
    int _x230;
    int _x234;
    int _x238;
    int _x23C;
    int _x240;
    int _x244;
    int _x248;
    int _x24C;
    int _x250;
    int _x254;
    int _x258;
    int _x25C;
    int _x260;
    int _x264;
    int _x268;
    int _x26C;
    int _x270;
    int _x274;
    int _x278;
    int _x27C;
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
    int _x2A8;
    int _x2AC;
    int _x2B0;
    int _x2B4;
    int _x2B8;
    int _x2BC;
    int _x2C0;
    int _x2C4;
    int _x2C8;
    int _x2CC;
    int _x2D0;
    int _x2D4;
    int _x2D8;
    int _x2DC;
    int _x2E0;
    int _x2E4;
    int _x2E8;
    int _x2EC;
    int _x2F0;
    int _x2F4;
    int _x2F8;
    int _x2FC;
    int _x300;
    int _x304;
    int _x308;
    int _x30C;
    int _x310;
    int _x314;
    int _x318;
    int _x31C;
    int _x320;
    int _x324;
    int _x328;
    int _x32C;
    int _x330;
    int _x334;
    int _x338;
    int _x33C;
    int _x340;
    int _x344;
    int _x348;
    int _x34C;
    int _x350;
    int _x354;
    int _x358;
    int _x35C;
    int _x360;
    int _x364;
    int _x368;
    int _x36C;
    int _x370;
    int _x374;
    int _x378;
    int _x37C;
    int _x380;
    int x384;
    int _x388;
    int x38C;
    int _x390;
    float x394;
    float x398;
    float x39C;
    float x3A0;
    float x3A4_StructStart_4xFloats;
    float x3A8;
    float x3AC;
    float x3B0;
    int x3B4;
    void* x3B8_Ptr112Bytes_Map;
    int _x3BC;
    int x3C0_Ptr_24Bytes;
    int x3C4_StructStart_28Bytes;
    int x3E0;
    int x3E4;
    int x3E8;
    float x3EC;
    float x3F0;
    float x3F4;
    int x3F8_CreationTick;
    int x3FC_Neg1_Id_;
    int x400_2xShort_Neg1_Neg1;
    int x404;
    int x408_Neg1;
    int x40C_Neg1;
    int _x410;
    int x414;
    float x418;
    int x41C_ActorScalePinned;
    int x420;
    int _x424;
    int _x428;
    int _x42C;
    int _x430;
    int _x434;
    int _x438;
    int x43C;
    int x440_Tick;
    int x444_Tick;
    int _x448;
    int x44C_Ptr_48Bytes_BannerAttachments;
    int _x450;
};

} // namespace D3

#endif // D3MH_ACTOR_H

