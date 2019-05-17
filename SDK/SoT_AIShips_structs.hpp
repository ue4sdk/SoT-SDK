#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_AIShips_enums.hpp"
#include "SoT_Maths_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_AthenaEngine_classes.hpp"
#include "SoT_AthenaAI_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_AIModule_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AIShips.AIShipBattleParams
// 0x0048
struct FAIShipBattleParams
{
	struct FText                                       Name;                                                     // 0x0000(0x0038) (Edit, DisableEditOnInstance)
	struct FVector2D                                   Location;                                                 // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
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
	bool                                               BelowDeck;                                                // 0x001F(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AIShips.AIShipContextDescDamageParams
// 0x0014
struct FAIShipContextDescDamageParams
{
	float                                              OverrideRainFillRate;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverrideRepairTime;                                       // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              RepairTimeMultiplier;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverrideLeakAmounts;                                      // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              LeakAmountMultiplier;                                     // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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

// ScriptStruct AIShips.AIShipCrewFormType
// 0x0020
struct FAIShipCrewFormType
{
	TEnumAsByte<ESkellyFormIconType>                   IconType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FColor                                      IconColour;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int8_t                                             IconIndex;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int8_t                                             CaptainIconIndex;                                         // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FStringAssetReference                       Form;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AIShips.AIShipCrewAmmoType
// 0x0018
struct FAIShipCrewAmmoType
{
	TEnumAsByte<ECannonballIconType>                   IconType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int8_t                                             IconIndex;                                                // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FStringAssetReference                       AmmoType;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AIShips.WeightedAIShipCrewFormType
// 0x0028
struct FWeightedAIShipCrewFormType
{
	int                                                Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FAIShipCrewFormType                         Params;                                                   // 0x0008(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct AIShips.WeightedAIShipCrewAmmoType
// 0x0020
struct FWeightedAIShipCrewAmmoType
{
	int                                                Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FAIShipCrewAmmoType                         Params;                                                   // 0x0008(0x0018) (Edit, DisableEditOnInstance)
};

// ScriptStruct AIShips.AIShipCaptainParams
// 0x0010
struct FAIShipCaptainParams
{
	class UClass*                                      AIClassId;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AIShips.AIShipContextDescGenerationSharedParams
// 0x0050
struct FAIShipContextDescGenerationSharedParams
{
	TArray<struct FWeightedAIShipCrewFormType>         SkeletonForms;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FWeightedAIShipCrewAmmoType>         SkeletonAmmoTypes;                                        // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FColor>                              SailColours;                                              // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAIShipCaptainParams>                Captains;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              CaptainGenders;                                           // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AIShips.AIShipSkeletonSkillsetOverride
// 0x0018
struct FAIShipSkeletonSkillsetOverride
{
	struct FName                                       SpawnLocationType;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStringAssetReference                       Skillset;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AIShips.AIShipGenerationParams
// 0x0038
struct FAIShipGenerationParams
{
	TEnumAsByte<EAIShipType>                           ShipType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAthenaAIShipControllerParamsDataAsset*      ShipControllerParams;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FAIShipSkeletonSkillsetOverride>     SkillsetOverrides;                                        // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FAIShipContextDescDamageParams              DamageParams;                                             // 0x0020(0x0014) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AIShips.AIShipContextDescGenerationShipSpecificParams
// 0x0030
struct FAIShipContextDescGenerationShipSpecificParams
{
	class UClass*                                      ShipSize;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UShipDescAsset*                              ShipDesc;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FAIShipGenerationParams>             ShipGenerationParams;                                     // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAIShipEncounterParamsSpawnerData>   SpawnerTemplates;                                         // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AIShips.AIShipContextDescGenerationParams
// 0x0060
struct FAIShipContextDescGenerationParams
{
	struct FAIShipContextDescGenerationSharedParams    SharedParams;                                             // 0x0000(0x0050) (Edit, DisableEditOnInstance)
	TArray<struct FAIShipContextDescGenerationShipSpecificParams> ShipSpecificParams;                                       // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AIShips.AIShipSizeLimit
// 0x0010
struct FAIShipSizeLimit
{
	class UClass*                                      ShipSize;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxInstances;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AIShips.AIShipEncounterWaveDesc
// 0x0010
struct FAIShipEncounterWaveDesc
{
	TArray<class UClass*>                              ShipSizes;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AIShips.AIShipEncounterBattleGenerationParams
// 0x0060
struct FAIShipEncounterBattleGenerationParams
{
	class UClass*                                      HardShipType;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRange                   NumberOfWaves;                                            // 0x0008(0x0020) (Edit, DisableEditOnInstance)
	struct FInt32Range                                 MinMaxNumberOfShips;                                      // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinNumberOfShipsInFinalWave;                              // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FAIShipSizeLimit>                    ShipSizeLimits;                                           // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAIShipEncounterWaveDesc>            WaveConfigurations;                                       // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AIShips.FeatureLockedAIShipEncounterBattleGenerationParams
// 0x0078
struct FFeatureLockedAIShipEncounterBattleGenerationParams
{
	struct FName                                       Feature;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIShipEncounterBattleGenerationParams      Params;                                                   // 0x0008(0x0060) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET
};

// ScriptStruct AIShips.AIShipEncounterBattleDesc
// 0x0010
struct FAIShipEncounterBattleDesc
{
	TArray<struct FAIShipEncounterWaveDesc>            WaveDescs;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AIShips.AIShipBattleEncounterDescGenerationParams
// 0x0028
struct FAIShipBattleEncounterDescGenerationParams
{
	bool                                               EnableHardShip;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FFeatureLockedAIShipEncounterBattleGenerationParams> BattleGenerationParams;                                   // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAIShipEncounterBattleDesc>          BattleDescs;                                              // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AIShips.AIShipWeightedSize
// 0x0018
struct FAIShipWeightedSize
{
	struct FName                                       Feature;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Weight;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      ShipSize;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AIShips.AIShipClassWeightedSizes
// 0x0018
struct FAIShipClassWeightedSizes
{
	class UClass*                                      TargetShipSize;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FAIShipWeightedSize>                 ShipSizes;                                                // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AIShips.AIShipSingleWaveEncounterDescGenerationParams
// 0x0010
struct FAIShipSingleWaveEncounterDescGenerationParams
{
	TArray<struct FAIShipClassWeightedSizes>           ShipClassWeightedSizes;                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AIShips.AIShipEncounterWave
// 0x0010
struct FAIShipEncounterWave
{
	TArray<class UAIShipContextDescDataAsset*>         AIShipsInWave;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
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

// ScriptStruct AIShips.CursedSailsBattleParams
// 0x0080
struct FCursedSailsBattleParams
{
	struct FText                                       Name;                                                     // 0x0000(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       SkellyCrewName;                                           // 0x0038(0x0038) (Edit, DisableEditOnInstance)
	TEnumAsByte<ECannonballIconType>                   CannonballType;                                           // 0x0070(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESkellyFormIconType>                   SkellyType;                                               // 0x0071(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0072(0x0006) MISSED OFFSET
	class UAIShipEncounterDesc*                        EncounterDescription;                                     // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData)
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
// 0x0040
struct FAIShipSpawnedEvent
{
	class AShip*                                       Ship;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SpawningCrew;                                             // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SpawningEventId;                                          // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SpawnConfigId;                                            // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Wave;                                                     // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
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

// ScriptStruct AIShips.AIShipEncounterCompleteNetEvent
// 0x0008 (0x0018 - 0x0010)
struct FAIShipEncounterCompleteNetEvent : public FBoxedRpc
{
	int                                                BattleIdx;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECannonballIconType>                   CannonballIconType;                                       // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkellyFormIconType>                   SkellyFormIconType;                                       // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
};

// ScriptStruct AIShips.AIShipEncounterRevealNetEvent
// 0x0010 (0x0020 - 0x0010)
struct FAIShipEncounterRevealNetEvent : public FBoxedRpc
{
	int                                                BattleIdx;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkellyCrewIdx;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECannonballIconType>                   CannonballIconType;                                       // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkellyFormIconType>                   SkellyFormIconType;                                       // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct AIShips.AIShipEncounterNotification
// 0x0080
struct FAIShipEncounterNotification
{
	struct FText                                       BattleName;                                               // 0x0000(0x0038)
	struct FName                                       SeaName;                                                  // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       SkellyCrewName;                                           // 0x0040(0x0038)
	TEnumAsByte<ECannonballIconType>                   CannonballType;                                           // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkellyFormIconType>                   SkellyType;                                               // 0x0079(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x007A(0x0006) MISSED OFFSET
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
// 0x0018
struct FAIShipWorldSettings
{
	TArray<struct FFeatureLockedCampaignParams>        CampaignParams;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UAIShipBattlesDataAsset*                     BattlesData;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
// 0x0068
struct FAIShipSpawnTelemetryEvent
{
	class FString                                      AIShipId;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      SpawningCrewId;                                           // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      AIShipBattleId;                                           // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      AIShipType;                                               // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FGuid                                       SpawnConfigId;                                            // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class FString                                      AIShipSize;                                               // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                AIShipWaveIndex;                                          // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
