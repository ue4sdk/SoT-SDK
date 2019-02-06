#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Cooking_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_StatusEffects_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Cooking.CookableComponentSmokeFeedbackTimingEntry
// 0x0008
struct FCookableComponentSmokeFeedbackTimingEntry
{
	float                                              StateDuration;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECookingSmokeFeedbackLevel>            StateFeedbackLevel;                                       // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Cooking.CookerSmokeFeedbackEntry
// 0x0010
struct FCookerSmokeFeedbackEntry
{
	TEnumAsByte<ECookingSmokeFeedbackLevel>            FeedbackLevel;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UParticleSystem*                             SmokeVFX;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Cooking.CookingClientRepresentation
// 0x0048
struct FCookingClientRepresentation
{
	bool                                               Cooking;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       CurrentCookingItemDisplayName;                            // 0x0008(0x0038)
	TEnumAsByte<ECookingSmokeFeedbackLevel>            SmokeFeedbackLevel;                                       // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct Cooking.CookingInfo
// 0x0010
struct FCookingInfo
{
	class AItemInfo*                                   ItemBeingCooked;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECookingSmokeFeedbackLevel>            SmokeFeedbackLevel;                                       // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
