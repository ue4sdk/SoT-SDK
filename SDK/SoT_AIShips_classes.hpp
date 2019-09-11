#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AIShips_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AIShips.AIShipBattlesDataAsset
// 0x0058 (0x0080 - 0x0028)
class UAIShipBattlesDataAsset : public UDataAsset
{
public:
	TArray<struct FAIShipBattleParams>                 Battles;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               SkellyCrewNames;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       EncounterCompleteText;                                    // 0x0048(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.AIShipBattlesDataAsset"));
		return ptr;
	}

};


// Class AIShips.AIShipObstacleServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIShipObstacleServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.AIShipObstacleServiceInterface"));
		return ptr;
	}

};


// Class AIShips.BTTask_SailShipBesideTarget
// 0x0050 (0x00D8 - 0x0088)
class UBTTask_SailShipBesideTarget : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0088(0x0020) MISSED OFFSET
	struct FTrackingNoiseGenerator                     TrackingNoiseGenerator;                                   // 0x00A8(0x0018)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.BTTask_SailShipBesideTarget"));
		return ptr;
	}

};


// Class AIShips.AthenaAIShipControllerParamsDataAsset
// 0x0340 (0x0420 - 0x00E0)
class UAthenaAIShipControllerParamsDataAsset : public UAthenaAIControllerParamsDataAsset
{
public:
	struct FShipMovementParams                         TrackingMovementParams;                                   // 0x00E0(0x0034) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           TimesToSailBesideTarget;                                  // 0x0118(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           PerpendicularDistanceOffsets;                             // 0x0148(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimesBeforeDistanceChange;                                // 0x0178(0x0030) (Edit, DisableEditOnInstance)
	float                                              MaxParallelDistanceOffset;                                // 0x01A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AlignDistanceThreshold;                                   // 0x01AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToProjectIntoFutureForTracking;                       // 0x01B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetSpeedThresholdToTrackShip;                          // 0x01B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTrackingNoiseGenerator                     TrackingNoiseGenerator;                                   // 0x01B8(0x0018) (Edit, DisableEditOnInstance)
	float                                              WheelAngleMonitorDuration;                                // 0x01D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WheelAngleChangeThresholdToBreakTracking;                 // 0x01D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedMonitorDuration;                                     // 0x01D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedChangeThresholdToBreakTrackingInMPS;                 // 0x01DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetSpeedToConsiderAnchorLoweredInMPS;                  // 0x01E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           TrackingLatencyTimes;                                     // 0x01E8(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TrackingLatencyTimesWhenAnchorLowered;                    // 0x0218(0x0030) (Edit, DisableEditOnInstance)
	class UCurveFloat*                                 DistToTargetShipVSTrackingLatencyCurve;                   // 0x0248(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FShipMovementParams                         CirclingMovementParams;                                   // 0x0250(0x0034) (Edit, DisableEditOnInstance)
	float                                              TargetSpeedThresholdInKnots;                              // 0x0284(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SecondsInFutureToProjectTargetLocation;                   // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           CircleRadiuses;                                           // 0x0290(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           CirclingSpeedsInDegreesPerSecond;                         // 0x02C0(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimesToCircleBeforeChangingRadius;                        // 0x02F0(0x0030) (Edit, DisableEditOnInstance)
	float                                              MinDistanceFromTargetToStartRam;                          // 0x0320(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDistanceFromTargetToStartRam;                          // 0x0324(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpeedToRamTarget;                                      // 0x0328(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RammingMaxTurnSpeed;                                      // 0x032C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RammingTimeDampingScalar;                                 // 0x0330(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinAngleToTargetToAttemptRam;                             // 0x0334(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           RammingLocationOffsets;                                   // 0x0338(0x0030) (Edit, DisableEditOnInstance)
	struct FShipMovementParams                         SailingForwardMovementParams;                             // 0x0368(0x0034) (Edit, DisableEditOnInstance)
	float                                              MinAllowedDistanceToObstacle;                             // 0x039C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPathAvoidanceDistance;                                 // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FShipMovementParams                         PassiveSailingMovementParams;                             // 0x03A4(0x0034) (Edit, DisableEditOnInstance)
	float                                              ChanceToAnchor;                                           // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           TimesToStayAnchored;                                      // 0x03E0(0x0030) (Edit, DisableEditOnInstance)
	int                                                NumIslandsToVisitBeforeReturning;                         // 0x0410(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceFromIslandsToSailTo;                              // 0x0414(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceToTargetToDropAnchor;                             // 0x0418(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x041C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.AthenaAIShipControllerParamsDataAsset"));
		return ptr;
	}

};


// Class AIShips.AIShipContextDescDataAsset
// 0x0088 (0x00B0 - 0x0028)
class UAIShipContextDescDataAsset : public UDataAsset
{
public:
	TEnumAsByte<EAIShipType>                           ShipType;                                                 // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAIShipEncounterType>                  EncounterType;                                            // 0x0029(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	class UShipDescAsset*                              ShipDesc;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAthenaAIShipControllerParamsDataAsset*      ControllerParams;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FAIShipEncounterParamsSpawnerData>   Spawners;                                                 // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FAIShipContextDescDamageParams              DamageParams;                                             // 0x0050(0x0014) (Edit, DisableEditOnInstance)
	struct FAIShipSailData                             SailsCustomisation;                                       // 0x0064(0x0010) (Edit, DisableEditOnInstance)
	struct FColor                                      SailColour;                                               // 0x0074(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FAIShipCrewFormType                         FormType;                                                 // 0x0078(0x0020) (Transient)
	struct FAIShipCrewAmmoType                         AmmoType;                                                 // 0x0098(0x0018) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.AIShipContextDescDataAsset"));
		return ptr;
	}

};


// Class AIShips.AIShipContextParamsDataAsset
// 0x0068 (0x0090 - 0x0028)
class UAIShipContextParamsDataAsset : public UDataAsset
{
public:
	float                                              TopDeckPlayerTrackerRadius;                               // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeSpentEmotingOnInitialSpawn;                           // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceAIToAlwaysSpawn;                                     // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              IntervalBetweenRepairDamageAssignments;                   // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntervalBetweenUseCannonAssignments;                      // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistForMinXYAIInteractableUtility;                        // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistForMaxXYAIInteractableUtility;                        // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinXYAIInteractableUtility;                               // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxXYAIInteractableUtility;                               // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistForMinZAIInteractableUtility;                         // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistForMaxZAIInteractableUtility;                         // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinZAIInteractableUtility;                                // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxZAIInteractableUtility;                                // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinInactiveRepairSpawnDelay;                              // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxInactiveRepairSpawnDelay;                              // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnSfxDistance;                                         // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SinkSfxDistance;                                          // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinCannonAttackersWhenBoarded;                            // 0x006C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StuckCheckInterval;                                       // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StuckCheckDistance;                                       // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDistanceFromEncounter;                                 // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShipFlippedAngle;                                         // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SecondsUntilKillAIAfterShipDefeated;                      // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SecondsDelayForAIShipDefeatedNotification;                // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableShipSurfacingMusic;                                 // 0x0088(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.AIShipContextParamsDataAsset"));
		return ptr;
	}

};


// Class AIShips.AIShipEncounterSpawnParamsDataAsset
// 0x00B0 (0x00D8 - 0x0028)
class UAIShipEncounterSpawnParamsDataAsset : public UDataAsset
{
public:
	float                                              SpawnDepth;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSafeSpawnDistanceFromOtherShips;                       // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeDelayBetweenWaves;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRelativeSpawnLocationGeneratorParams       RelativeSpawnLocationParams;                              // 0x0038(0x00A0) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.AIShipEncounterSpawnParamsDataAsset"));
		return ptr;
	}

};


// Class AIShips.ShipProxyPawn
// 0x0038 (0x0548 - 0x0510)
class AShipProxyPawn : public APawn
{
public:
	class AShip*                                       Ship;                                                     // 0x0510(0x0008) (ZeroConstructor, IsPlainOldData)
	class AShip*                                       SpawnTargetShip;                                          // 0x0518(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0520(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.ShipProxyPawn"));
		return ptr;
	}

};


// Class AIShips.AIShipEncounterParamsDataAsset
// 0x0090 (0x00B8 - 0x0028)
class UAIShipEncounterParamsDataAsset : public UDataAsset
{
public:
	class UAIShipEncounterSpawnParamsDataAsset*        SpawnParams;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAIShipContextParamsDataAsset*               ContextParams;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAIShipContextDescDataAsset*                 DefaultContextDesc;                                       // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ShipPawnClass;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBuoyantObjectSpawnProfileDataAsset*         BuoyantObjectSpawnProfileAsset;                           // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      EventSignalAssetClass;                                    // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EventSignalHeight;                                        // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FText                                       EncounterCompleteText;                                    // 0x0060(0x0038) (Edit, DisableEditOnInstance)
	float                                              OuterRadiusMultiplier;                                    // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MigrationRadiusMultiplier;                                // 0x009C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialEncounterEntryDelay;                               // 0x00A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinEngagedDistanceFromPlayers;                            // 0x00A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableMusicWhenShipsHaveNoTarget;                         // 0x00A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	int                                                SecondsUntilEncounterEndsAfterLastCrewLeft;               // 0x00AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaximumEncounterDuration;                                 // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.AIShipEncounterParamsDataAsset"));
		return ptr;
	}

};


// Class AIShips.AIShipServiceDataAsset
// 0x0190 (0x01B8 - 0x0028)
class UAIShipServiceDataAsset : public UDataAsset
{
public:
	class UAIShipEncounterParamsDataAsset*             BattleEncounterParams;                                    // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIShipEncounterParams                      AggressiveEncounterParams;                                // 0x0030(0x0018) (Edit, DisableEditOnInstance)
	struct FAIShipEncounterParams                      PassiveEncounterParams;                                   // 0x0048(0x0018) (Edit, DisableEditOnInstance)
	struct FIntPoint                                   ObstacleBucketDimensions;                                 // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShipwreckObstacleRadius;                                  // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FAIShipContextDescGenerationParams          ContextDescGenerationParams;                              // 0x0070(0x0060) (Edit, DisableEditOnInstance)
	struct FAIShipBattleEncounterDescGenerationParams  EncounterGenerationParams;                                // 0x00D0(0x0028) (Edit, DisableEditOnInstance)
	struct FAIShipSingleWaveEncounterDescGenerationParams AggressiveEncounterGenerationParams;                      // 0x00F8(0x0010) (Edit, DisableEditOnInstance)
	struct FAIShipSingleWaveEncounterDescGenerationParams PassiveEncounterGenerationParams;                         // 0x0108(0x0010) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimerBattleFirstRegenInterval;                            // 0x0118(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimerBattleRegenInterval;                                 // 0x0148(0x0030) (Edit, DisableEditOnInstance)
	float                                              TimerBattleFinderThrottle;                                // 0x0178(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x017C(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           TimerBattleRetryRegenInterval;                            // 0x0180(0x0030) (Edit, DisableEditOnInstance)
	float                                              TimerBattleMinActivationDistanceFromPlayers;              // 0x01B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.AIShipServiceDataAsset"));
		return ptr;
	}

};


// Class AIShips.AIShipDebugFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIShipDebugFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.AIShipDebugFunctionLibrary"));
		return ptr;
	}


	static void RequestAIShipForCrew(class UObject* WorldContextObject, const struct FGuid& CrewId);
	static struct FAIShipEncounterBattleDesc GenerateAIShipBattleDesc(class UObject* WorldContextObject, class UAIShipServiceDataAsset* ServiceParams);
};


// Class AIShips.AIShipEncounterDesc
// 0x0038 (0x0060 - 0x0028)
class UAIShipEncounterDesc : public UDataAsset
{
public:
	struct FVector2D                                   Location;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Moveable;                                                 // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowRevealBanner;                                         // 0x0035(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowCompleteBanner;                                       // 0x0036(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldSpawnShipCloud;                                     // 0x0037(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RequirePlayerShipInZoneToSpawnShips;                      // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableSecondsUntilEncounterEndsAfterLastCrewLeft;         // 0x0039(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	int                                                SecondsUntilEncounterEndsAfterLastCrewLeft;               // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableMaximumEncounterDuration;                           // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                MaximumEncounterDuration;                                 // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAIShipEncounterType>                  EncounterType;                                            // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	TArray<struct FAIShipEncounterWave>                Waves;                                                    // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.AIShipEncounterDesc"));
		return ptr;
	}

};


// Class AIShips.AIShipObstacleService
// 0x0060 (0x0508 - 0x04A8)
class AAIShipObstacleService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x04A8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.AIShipObstacleService"));
		return ptr;
	}

};


// Class AIShips.AIShipServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIShipServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.AIShipServiceInterface"));
		return ptr;
	}

};


// Class AIShips.AIShipService
// 0x0368 (0x0810 - 0x04A8)
class AAIShipService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04A8(0x0020) MISSED OFFSET
	class UAIShipServiceDataAsset*                     Params;                                                   // 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x330];                                     // 0x04D0(0x0330) MISSED OFFSET
	TArray<class UAIShipEncounterDesc*>                BattleEncounters;                                         // 0x0800(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.AIShipService"));
		return ptr;
	}

};


// Class AIShips.AIShipTelemetryComponent
// 0x0040 (0x0110 - 0x00D0)
class UAIShipTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00D0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.AIShipTelemetryComponent"));
		return ptr;
	}

};


// Class AIShips.AthenaAIShipController
// 0x00D8 (0x07C0 - 0x06E8)
class AAthenaAIShipController : public AAthenaAIControllerBase
{
public:
	class UBehaviorTree*                               BTAsset;                                                  // 0x06E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x06F0(0x0018) MISSED OFFSET
	class UStatusEffectManagerComponent*               StatusEffectManagerComponent;                             // 0x0708(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FStandardAnchorDynamicsParameters           AnchorDynamicsParams;                                     // 0x0710(0x0028) (Edit)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0738(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.AthenaAIShipController"));
		return ptr;
	}

};


// Class AIShips.BTService_UpdateIfShipShouldBreakTracking
// 0x00E0 (0x0150 - 0x0070)
class UBTService_UpdateIfShipShouldBreakTracking : public UBTService
{
public:
	struct FBlackboardKeySelector                      TargetActorKey;                                           // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      DisableTrackingKey;                                       // 0x0098(0x0028) (Edit)
	struct FBlackboardKeySelector                      ShouldSailForwardKey;                                     // 0x00C0(0x0028) (Edit)
	struct FBlackboardKeySelector                      TimeToSailForwardKey;                                     // 0x00E8(0x0028) (Edit)
	struct FBlackboardKeySelector                      CaptainIsPresentKey;                                      // 0x0110(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0138(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.BTService_UpdateIfShipShouldBreakTracking"));
		return ptr;
	}

};


// Class AIShips.BTService_UpdateLocationWithActorLocation
// 0x0050 (0x00C0 - 0x0070)
class UBTService_UpdateLocationWithActorLocation : public UBTService
{
public:
	struct FBlackboardKeySelector                      LocationKey;                                              // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      ActorKey;                                                 // 0x0098(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.BTService_UpdateLocationWithActorLocation"));
		return ptr;
	}

};


// Class AIShips.BTService_UpdateTargetLocationForPassiveShip
// 0x0058 (0x00C8 - 0x0070)
class UBTService_UpdateTargetLocationForPassiveShip : public UBTService
{
public:
	struct FBlackboardKeySelector                      TargetLocationKey;                                        // 0x0070(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0098(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.BTService_UpdateTargetLocationForPassiveShip"));
		return ptr;
	}

};


// Class AIShips.BTTask_AIShipSurface
// 0x0010 (0x0098 - 0x0088)
class UBTTask_AIShipSurface : public UBTTask_BlackboardBase
{
public:
	float                                              MaxSpeed;                                                 // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreSurfaceDelay;                                          // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.BTTask_AIShipSurface"));
		return ptr;
	}

};


// Class AIShips.BTTask_RamTargetShip
// 0x00C0 (0x0148 - 0x0088)
class UBTTask_RamTargetShip : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0088(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.BTTask_RamTargetShip"));
		return ptr;
	}

};


// Class AIShips.BTTask_SailShipCircleTarget
// 0x0038 (0x00C0 - 0x0088)
class UBTTask_SailShipCircleTarget : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0088(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.BTTask_SailShipCircleTarget"));
		return ptr;
	}

};


// Class AIShips.BTTask_SailShipForward
// 0x00A8 (0x0130 - 0x0088)
class UBTTask_SailShipForward : public UBTTask_BlackboardBase
{
public:
	struct FBlackboardKeySelector                      ShouldSailForwardKey;                                     // 0x0088(0x0028) (Edit)
	struct FBlackboardKeySelector                      TimeToSailForwardKey;                                     // 0x00B0(0x0028) (Edit)
	struct FBlackboardKeySelector                      IsCaptainPresentKey;                                      // 0x00D8(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0100(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.BTTask_SailShipForward"));
		return ptr;
	}

};


// Class AIShips.BTTask_SailShipToLocation
// 0x0048 (0x00D0 - 0x0088)
class UBTTask_SailShipToLocation : public UBTTask_BlackboardBase
{
public:
	struct FBlackboardKeySelector                      TargetLocationKey;                                        // 0x0088(0x0028) (Edit)
	float                                              DistanceThresholdToConsiderTargetReached;                 // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00B4(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.BTTask_SailShipToLocation"));
		return ptr;
	}

};


// Class AIShips.CursedCrewCustomisationInterface
// 0x0000 (0x0028 - 0x0028)
class UCursedCrewCustomisationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.CursedCrewCustomisationInterface"));
		return ptr;
	}


	void SetCursedCrewCustomisationProperties(const struct FAIShipSailData& SailData);
};


// Class AIShips.CursedSailsCampaignDataAsset
// 0x0010 (0x0038 - 0x0028)
class UCursedSailsCampaignDataAsset : public UDataAsset
{
public:
	TArray<struct FCursedSailsBattleParams>            Battles;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIShips.CursedSailsCampaignDataAsset"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
