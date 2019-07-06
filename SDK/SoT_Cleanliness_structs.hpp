#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Cleanliness_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Cleanliness.CleanlinessInfo
// 0x0010
struct FCleanlinessInfo
{
	TArray<float>                                      DirtinessTracker;                                         // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Cleanliness.CleanlinessComponentAggregateTickFunction
// 0x0010 (0x0058 - 0x0048)
struct FCleanlinessComponentAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
