#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Cooking_enums.hpp"
#include "SoT_StatusEffects_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
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
// 0x00A8
struct FCookingClientRepresentation
{
	bool                                               Cooking;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               HasItem;                                                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FText                                       CurrentCookingItemDisplayName;                            // 0x0008(0x0038)
	class UClass*                                      CurrentCookingItemCategory;                               // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECookingSmokeFeedbackLevel>            SmokeFeedbackLevel;                                       // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              VisibleCookedExtent;                                      // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FMaterialManipulationSettings               VisibleMaterialSettings;                                  // 0x0050(0x0030)
	class UMaterialInstance*                           OverrideMaterial;                                         // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BurnDownVector;                                           // 0x0088(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UAnimationAsset*                             AnimatedPose;                                             // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CurrentCookableTypeName;                                  // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Cooking.CookingInfo
// 0x000C
struct FCookingInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Cooking.OnItemStartedCooking
// 0x0010
struct FOnItemStartedCooking
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Cooking.OnItemStoppedCooking
// 0x0001
struct FOnItemStoppedCooking
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Cooking.CookEndTelemetryEvent
// 0x0030
struct FCookEndTelemetryEvent
{
	class FString                                      ItemName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<ECookingState>                         CookState;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CookId;                                                   // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Cooking.CookStartTelemetryEvent
// 0x0030
struct FCookStartTelemetryEvent
{
	class FString                                      ItemName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<ECookingState>                         CookState;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CookId;                                                   // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
