#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_StatusEffects_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaAIAbilities.AshenLordFireShroudParams
// 0x0018
struct FAshenLordFireShroudParams
{
	class UClass*                                      FireShroudZoneClass;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FireShroudCollisionVolume;                                // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAIAbilities.AshenLordFireShroud
// 0x0020
struct FAshenLordFireShroud
{
	class AStatusEffectOverlapZone*                    FireShroudOverlapZone;                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FAshenLordFireShroudParams                  Params;                                                   // 0x0008(0x0018)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
