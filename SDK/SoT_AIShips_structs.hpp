#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_AthenaAI_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_AIModule_classes.hpp"
#include "SoT_Maths_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AIShips.EAIShipDestructionReason
enum class EAIShipDestructionReason : uint8_t
{
	EAIShipDestructionReason__Defeated = 0,
	None                           = 1
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AIShips.AIShipEncounterParamsSpawnerData
// 0x0020
struct FAIShipEncounterParamsSpawnerData
{
	class UAISpawner*                                  Spawner;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SpawnLocationType;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CaptainName;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanRepairDamage;                                          // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanUseCannons;                                            // 0x0019(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCaptain;                                                // 0x001A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x001B(0x0005) MISSED OFFSET
};

// ScriptStruct AIShips.TrackingNoiseGenerator
// 0x0018
struct FTrackingNoiseGenerator
{
	class UCurveFloat*                                 ParallelOffsetCurve;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OscillationTime;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct AIShips.ShipMovementParams
// 0x0028
struct FShipMovementParams
{
	float                                              MinTargetDistanceForMovement;                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTurnAngle;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTurnAngleForObstacleAvoidance;                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTurnAngleForPlayerShipObstacleAvoidance;               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTurnSpeedScaler;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToAccelerateFromZeroToMaxSpeed;                       // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveBackwardsAngleThreshold;                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveBackwardsDistanceThreshold;                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveBackwardsShipSpeedThreshold;                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIShips.WeightedSpawnOffset
// 0x0040
struct FWeightedSpawnOffset
{
	float                                              MinSpawnDistance;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpawnDistance;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           SpawnRotations;                                           // 0x0010(0x0030) (Edit, DisableEditOnInstance)
};

// ScriptStruct AIShips.WeightedSpawnDirection
// 0x00B0
struct FWeightedSpawnDirection
{
	float                                              DirectionAngle;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DirectionWidth;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FWeightedSpawnOffset>                SpawnOffsets;                                             // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x90];                                      // 0x0020(0x0090) MISSED OFFSET
};

// ScriptStruct AIShips.RelativeSpawnLocationGeneratorParams
// 0x00A0
struct FRelativeSpawnLocationGeneratorParams
{
	TArray<struct FWeightedSpawnDirection>             SpawnDirections;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0010(0x0090) MISSED OFFSET
};

// ScriptStruct AIShips.AIShipEncounterWave
// 0x0010
struct FAIShipEncounterWave
{
	TArray<class UAIShipContextDescDataAsset*>         AIShipsInWave;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AIShips.AIShipEncounterDesc
// 0x0030
struct FAIShipEncounterDesc
{
	struct FPlayerStat                                 DefeatedStat;                                             // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	struct FVector2D                                   Location;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FAIShipEncounterWave>                Waves;                                                    // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AIShips.TimeLimitedAIShipEncounterDesc
// 0x0010 (0x0040 - 0x0030)
struct FTimeLimitedAIShipEncounterDesc : public FAIShipEncounterDesc
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct AIShips.CursedSailsBattleParams
// 0x0080
struct FCursedSailsBattleParams
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                StartDay;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumDaysActive;                                            // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimeLimitedAIShipEncounterDesc             EncounterDescription;                                     // 0x0040(0x0040) (Edit, DisableEditOnInstance)
};

// ScriptStruct AIShips.AIShipDespawnedEvent
// 0x0010
struct FAIShipDespawnedEvent
{
	class AShip*                                       Ship;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIShipDestructionReason>              ShipDestructionReason;                                    // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AIShips.AIShipSpawnedEvent
// 0x0030
struct FAIShipSpawnedEvent
{
	class AShip*                                       Ship;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SpawningCrew;                                             // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SpawningEventId;                                          // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Wave;                                                     // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AIShips.AIShipSinkNetworkEvent
// 0x0000 (0x0010 - 0x0010)
struct FAIShipSinkNetworkEvent : public FNetworkEventStruct
{

};

// ScriptStruct AIShips.AIShipSpawnedNetworkEvent
// 0x0000 (0x0010 - 0x0010)
struct FAIShipSpawnedNetworkEvent : public FNetworkEventStruct
{

};

// ScriptStruct AIShips.AIShipEncounterZoneExitedNetworkEvent
// 0x0000 (0x0010 - 0x0010)
struct FAIShipEncounterZoneExitedNetworkEvent : public FNetworkEventStruct
{

};

// ScriptStruct AIShips.AIShipEncounterZoneEnteredNetworkEvent
// 0x0008 (0x0018 - 0x0010)
struct FAIShipEncounterZoneEnteredNetworkEvent : public FNetworkEventStruct
{
	int                                                RemainingAIShips;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalAIShips;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIShips.AIShipWorldSettings
// 0x0008
struct FAIShipWorldSettings
{
	class UCursedSailsCampaignDataAsset*               CampaignDataAsset;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AIShips.AIShipDespawnTelemetryEvent
// 0x0018
struct FAIShipDespawnTelemetryEvent
{
	class FString                                      AIShipId;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<EAIShipDestructionReason>              AIShipDestructionReason;                                  // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AIShips.AIShipSpawnTelemetryEvent
// 0x0038
struct FAIShipSpawnTelemetryEvent
{
	class FString                                      AIShipId;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      SpawningCrewId;                                           // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      AIShipBattleId;                                           // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                AIShipWaveIndex;                                          // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
