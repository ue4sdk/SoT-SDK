#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BPStruct_GhostPersistentDamage.BPStruct_GhostPersistentDamage
// 0x0014
struct FBPStruct_GhostPersistentDamage
{
	float                                              Health_9_825F929C4AF0F87FC0C9C1821338B802;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Position_Radius_12_4DA76B994005AFDC3FE09B80FCD7C799;      // 0x0004(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
