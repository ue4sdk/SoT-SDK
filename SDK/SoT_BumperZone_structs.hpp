#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BumperZone.ShipBumperZoneAggregateTick
// 0x0078 (0x00C0 - 0x0048)
struct FShipBumperZoneAggregateTick : public FTickFunction
{
	TArray<class AShipBumperZone*>                     ShipBumperZones;                                          // 0x0048(0x0010) (ZeroConstructor, Transient)
	TMap<class AActor*, class AShipBumperZone*>        IntersectingBumperZones;                                  // 0x0058(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A8(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
