#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Cooking_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
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
	UParticleSystem*                                   SmokeVFX;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Cooking.CookingClientRepresentation
// 0x0068
struct FCookingClientRepresentation
{
	bool                                               Cooking;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               HasItem;                                                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	AItemInfo*                                         CurrentlyCookingItem;                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	FText                                              CurrentCookingItemDisplayName;                            // 0x0010(0x0038)
	UClass*                                            CurrentCookingItemCategory;                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECookingSmokeFeedbackLevel>            SmokeFeedbackLevel;                                       // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              VisibleCookedExtent;                                      // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentItemPlacementAngle;                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	FName                                              CurrentCookableTypeName;                                  // 0x005C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct Cooking.CookingInfo
// 0x000C
struct FCookingInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Cooking.OnPlacedItemInCookingPot
// 0x0008
struct FOnPlacedItemInCookingPot
{
	AItemInfo*                                         ItemToCook;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
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
	FString                                            ItemName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<ECookingState>                         CookState;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	FVector                                            Location;                                                 // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData)
	FGuid                                              CookId;                                                   // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Cooking.CookStartTelemetryEvent
// 0x0030
struct FCookStartTelemetryEvent
{
	FString                                            ItemName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<ECookingState>                         CookState;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	FVector                                            Location;                                                 // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData)
	FGuid                                              CookId;                                                   // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
