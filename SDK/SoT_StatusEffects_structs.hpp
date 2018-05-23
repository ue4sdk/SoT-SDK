#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct StatusEffects.ActiveStatusEffect
// 0x0018
struct FActiveStatusEffect
{
	class UClass*                                      SourceStatus;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UStatusResponse*>                     Responses;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct StatusEffects.StatusEffectManagerComponentAggregateTickFunction
// 0x0010 (0x0058 - 0x0048)
struct FStatusEffectManagerComponentAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
