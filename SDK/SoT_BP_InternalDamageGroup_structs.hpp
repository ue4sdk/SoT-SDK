#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_InternalDamageGroup.BP_InternalDamageGroup
// 0x0010
struct FBP_InternalDamageGroup
{
	TArray<class UObject*>                             DamageObjects_4_A06B18A346E5F8B48258C2901F169935;         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
