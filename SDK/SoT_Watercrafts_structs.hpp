#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Watercrafts_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_AthenaInput_classes.hpp"
#include "SoT_Water_classes.hpp"
#include "SoT_ActionStateMachine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Watercrafts.ScrapeableDamageSpeedEntry
// 0x0018
struct FScrapeableDamageSpeedEntry
{
	class UClass*                                      SpeedBand;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DamageAmount;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Watercrafts.WatercraftRolloverCorrector
// 0x000C
struct FWatercraftRolloverCorrector
{
	float                                              RollThresholdToConsiderRolledOver;                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TorqueScalar;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Watercrafts.RowboatDamageEffectData
// 0x0018
struct FRowboatDamageEffectData
{
	class UMaterialInstanceDynamic*                    DynamicMaterialInstance;                                  // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FadeInDuration;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct Watercrafts.RowboatStrainDamageData
// 0x0020
struct FRowboatStrainDamageData
{
	float                                              StormDamageScalar;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterStrengthToCountAsStorm;                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StormStrengthThresholdForDamage;                          // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinStormDamageFrequencyInSeconds;                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxStormDamageFrequencyInSeconds;                         // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WorldEdgeDamageScalar;                                    // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinWorldEdgeDamageFrequencyInSeconds;                     // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxWorldEdgeDamageFrequencyInSeconds;                     // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Watercrafts.OarParams
// 0x0038
struct FOarParams
{
	float                                              RowingPower;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OarLength;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OarOffsetDirection;                                       // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OarForwardForceDirection;                                 // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeForCompleteStroke;                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeForResetCompletion;                                   // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RowingPowerCurve;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BrakeForcePerMetresPerSecond;                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndOfStrokeBrakeForcePerMetresPerSecond;                  // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Watercrafts.Oar
// 0x0060
struct FOar
{
	struct FOarParams                                  OarParams;                                                // 0x0000(0x0038)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET
};

// ScriptStruct Watercrafts.EventOarStrokeEnded
// 0x0001
struct FEventOarStrokeEnded
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Watercrafts.EventRowboatExitedWater
// 0x0001
struct FEventRowboatExitedWater
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Watercrafts.EventRowboatEnteredWater
// 0x0001
struct FEventRowboatEnteredWater
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Watercrafts.RowboatMountStateTelemetryEvent
// 0x0014
struct FRowboatMountStateTelemetryEvent
{
	struct FGuid                                       WatercraftId;                                             // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERowboatActionTelemetry>               ActionName;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Watercrafts.WatercraftDespawnTelemetryEvent
// 0x0020
struct FWatercraftDespawnTelemetryEvent
{
	struct FGuid                                       WatercraftId;                                             // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWatercraftDespawnReason>              DespawnReason;                                            // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Watercrafts.WatercraftSpawnTelemetryEvent
// 0x0038
struct FWatercraftSpawnTelemetryEvent
{
	struct FGuid                                       WatercraftId;                                             // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      WatercraftType;                                           // 0x0010(0x0010) (ZeroConstructor)
	struct FVector                                     Location;                                                 // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Forward;                                                  // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Watercrafts.EventExitedWatercraft
// 0x0010
struct FEventExitedWatercraft
{
	class AActor*                                      Watercraft;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Watercrafts.EventEnteredWatercraft
// 0x0010
struct FEventEnteredWatercraft
{
	class AActor*                                      Watercraft;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
