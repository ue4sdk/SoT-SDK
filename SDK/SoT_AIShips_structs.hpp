#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_AthenaAI_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_AIModule_classes.hpp"
#include "SoT_Maths_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AIShips.EAIShipPlayerTrackerType
enum class EAIShipPlayerTrackerType : uint8_t
{
	DefaultRadiusTracker           = 0,
	None                           = 1,
	EAIShipPlayerTrackerType_MAX   = 2
};


// Enum AIShips.ESkellyFormIconType
enum class ESkellyFormIconType : uint8_t
{
	ESkellyFormIconType__Normal    = 0,
	None                           = 1,
	ESkellyFormIconType__None      = 2,
	None01                         = 3
};


// Enum AIShips.ECannonballIconType
enum class ECannonballIconType : uint8_t
{
	ECannonballIconType__Normal    = 0,
	None                           = 1,
	ECannonballIconType__Boogie    = 2,
	None01                         = 3,
	ECannonballIconType__Rigging   = 4,
	None02                         = 5,
	StructProperty                 = 6,
	ECannonballIconType__Snooze    = 7,
	None03                         = 8,
	TextProperty                   = 9,
	None04                         = 10
};


// Enum AIShips.EAIShipDestructionReason
enum class EAIShipDestructionReason : uint8_t
{
	EAIShipDestructionReason__Defeated = 0,
	None                           = 1
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AIShips.TrackingNoiseGenerator
// 0x0018
struct FTrackingNoiseGenerator
{
	class UCurveFloat*                                 ParallelOffsetCurve;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OscillationTime;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct AIShips.ShipMovementParams
// 0x0034
struct FShipMovementParams
{
	float                                              MinTargetDistanceForMovement;                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTurnAngle;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTurnAngleForObstacleAvoidance;                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTurnAngleForPlayerShipObstacleAvoidance;               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTurnSpeedScaler;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeed;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToAccelerateFromZeroToMaxSpeed;                       // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToAccelerateFromZeroToMaxTurnSpeed;                   // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveBackwardsAngleThreshold;                              // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveBackwardsDistanceThreshold;                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveBackwardsShipSpeedThreshold;                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxObstacleAvoidanceOverrideDistance;                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIShips.AIShipEncounterParamsSpawnerData
// 0x0020
struct FAIShipEncounterParamsSpawnerData
{
	class UAISpawner*                                  Spawner;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SpawnLocationType;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAIShipPlayerTrackerType>              ShipPlayerTrackerType;                                    // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FName                                       CaptainName;                                              // 0x0014(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanRepairDamage;                                          // 0x001C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanUseCannons;                                            // 0x001D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCaptain;                                                // 0x001E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
};

// ScriptStruct AIShips.AIShipSailData
// 0x0010
struct FAIShipSailData
{
	struct FColor                                      SailRGB;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      IconRGB;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CrewIndex;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CursedCannonballIndex;                                    // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
// 0x0058
struct FAIShipEncounterDesc
{
	struct FPlayerStat                                 DefeatedBattleStat;                                       // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	struct FPlayerStat                                 DefeatedAllianceStat;                                     // 0x0010(0x0010) (Edit, DisableEditOnInstance)
	struct FPlayerStat                                 DefeatedCrewStat;                                         // 0x0020(0x0010) (Edit, DisableEditOnInstance)
	class UClass*                                      DefeatedAllianceSailsDesc;                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   Location;                                                 // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FAIShipEncounterWave>                Waves;                                                    // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AIShips.TimeLimitedAIShipEncounterDesc
// 0x0010 (0x0068 - 0x0058)
struct FTimeLimitedAIShipEncounterDesc : public FAIShipEncounterDesc
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET
};

// ScriptStruct AIShips.CursedSailsBattleParams
// 0x00E8
struct FCursedSailsBattleParams
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       SkellyCrewName;                                           // 0x0038(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0038(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TEnumAsByte<ECannonballIconType>                   CannonballType;                                           // 0x0070(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESkellyFormIconType>                   SkellyType;                                               // 0x0071(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	int                                                StartDay;                                                 // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumDaysActive;                                            // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FTimeLimitedAIShipEncounterDesc             EncounterDescription;                                     // 0x0080(0x0068) (Edit, DisableEditOnInstance)
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

// ScriptStruct AIShips.AIShipEncounterBaseNetEvent
// 0x0008 (0x0018 - 0x0010)
struct FAIShipEncounterBaseNetEvent : public FBoxedRpc
{
	int                                                EncounterDay;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct AIShips.AIShipEncounterCompleteNetEvent
// 0x0038 (0x0050 - 0x0018)
struct FAIShipEncounterCompleteNetEvent : public FAIShipEncounterBaseNetEvent
{
	struct FText                                       CompleteString;                                           // 0x0018(0x0018)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct AIShips.AIShipEncounterRevealNetEvent
// 0x0000 (0x0018 - 0x0018)
struct FAIShipEncounterRevealNetEvent : public FAIShipEncounterBaseNetEvent
{

};

// ScriptStruct AIShips.AIShipEncounterNotification
// 0x0080
struct FAIShipEncounterNotification
{
	struct FText                                       BattleName;                                               // 0x0000(0x0018)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       SeaName;                                                  // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       SkellyCrewName;                                           // 0x0040(0x0018)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TEnumAsByte<ECannonballIconType>                   CannonballType;                                           // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkellyFormIconType>                   SkellyType;                                               // 0x0079(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x007A(0x0006) MISSED OFFSET
};

// ScriptStruct AIShips.AIShipEncounterZoneExitedNetworkEvent
// 0x0000 (0x0010 - 0x0010)
struct FAIShipEncounterZoneExitedNetworkEvent : public FNetworkEventStruct
{

};

// ScriptStruct AIShips.AIShipEncounterZoneEnteredNetworkEvent
// 0x0010 (0x0020 - 0x0010)
struct FAIShipEncounterZoneEnteredNetworkEvent : public FNetworkEventStruct
{
	int                                                RemainingAIShips;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalAIShips;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalAIShipsInFinalWave;                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AIShips.FeatureLockedCampaignParams
// 0x0010
struct FFeatureLockedCampaignParams
{
	struct FName                                       Feature;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCursedSailsCampaignDataAsset*               CampaignDataAsset;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AIShips.AIShipWorldSettings
// 0x0010
struct FAIShipWorldSettings
{
	TArray<struct FFeatureLockedCampaignParams>        CampaignParams;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
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
