#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Cleanliness_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Cleanliness.CleanlinessInfo
// 0x000C
struct FCleanlinessInfo
{
	TEnumAsByte<EDirtinessType>                        DirtinessType;                                            // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Strength;                                                 // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              QuickClean;                                               // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Cleanliness.CleanlinessComponentAggregateTickFunction
// 0x0010 (0x0058 - 0x0048)
struct FCleanlinessComponentAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

// ScriptStruct Cleanliness.EventQuickCleanRequest
// 0x0001
struct FEventQuickCleanRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
