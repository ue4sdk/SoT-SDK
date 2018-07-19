#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AIShips_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AIShips.AIShipContextDescDataAsset
// 0x0020 (0x0048 - 0x0028)
class UAIShipContextDescDataAsset : public UDataAsset
{
public:
	struct FPlayerStat                                 DefeatedStat;                                             // 0x0028(0x0010) (Edit, DisableEditOnInstance)
	TArray<struct FAIShipEncounterParamsSpawnerData>   Spawners;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipContextDescDataAsset");
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
		static auto ptr = UObject::FindClass("Class AIShips.AIShipObstacleServiceInterface");
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
		static auto ptr = UObject::FindClass("Class AIShips.BTTask_SailShipBesideTarget");
		return ptr;
	}

};


// Class AIShips.AthenaAIShipControllerParamsDataAsset
// 0x0250 (0x0320 - 0x00D0)
class UAthenaAIShipControllerParamsDataAsset : public UAthenaAIControllerParamsDataAsset
{
public:
	struct FShipMovementParams                         TrackingMovementParams;                                   // 0x00D0(0x0028) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimesToSailBesideTarget;                                  // 0x00F8(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           PerpendicularDistanceOffsets;                             // 0x0128(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimesBeforeDistanceChange;                                // 0x0158(0x0030) (Edit, DisableEditOnInstance)
	float                                              MaxParallelDistanceOffset;                                // 0x0188(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AlignDistanceThreshold;                                   // 0x018C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToProjectIntoFutureForTracking;                       // 0x0190(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetSpeedThresholdToTrackShip;                          // 0x0194(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTrackingNoiseGenerator                     TrackingNoiseGenerator;                                   // 0x0198(0x0018) (Edit, DisableEditOnInstance)
	float                                              WheelAngleMonitorDuration;                                // 0x01B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WheelAngleChangeThresholdToBreakTracking;                 // 0x01B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedMonitorDuration;                                     // 0x01B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedChangeThresholdToBreakTrackingInMPS;                 // 0x01BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetSpeedToConsiderAnchorLoweredInMPS;                  // 0x01C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           TrackingLatencyTimes;                                     // 0x01C8(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TrackingLatencyTimesWhenAnchorLowered;                    // 0x01F8(0x0030) (Edit, DisableEditOnInstance)
	struct FShipMovementParams                         CirclingMovementParams;                                   // 0x0228(0x0028) (Edit, DisableEditOnInstance)
	float                                              TargetSpeedThresholdInKnots;                              // 0x0250(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SecondsInFutureToProjectTargetLocation;                   // 0x0254(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           CircleRadiuses;                                           // 0x0258(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           CirclingSpeedsInDegreesPerSecond;                         // 0x0288(0x0030) (Edit, DisableEditOnInstance)
	float                                              MinDistanceFromTargetToStartRam;                          // 0x02B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpeedToRamTarget;                                      // 0x02BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RammingMaxTurnSpeed;                                      // 0x02C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           RammingLocationOffsets;                                   // 0x02C8(0x0030) (Edit, DisableEditOnInstance)
	struct FShipMovementParams                         SailingForwardMovementParams;                             // 0x02F8(0x0028) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AthenaAIShipControllerParamsDataAsset");
		return ptr;
	}

};


// Class AIShips.AIShipContextParamsDataAsset
// 0x0048 (0x0070 - 0x0028)
class UAIShipContextParamsDataAsset : public UDataAsset
{
public:
	float                                              TopDeckPlayerTrackerRadius;                               // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeSpentEmotingOnInitialSpawn;                           // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      EmoteIdToPlayOnInitialSpawm;                              // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntervalBetweenRepairDamageAssignments;                   // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntervalBetweenUseCannonAssignments;                      // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistForMinXYAIInteractableUtility;                        // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistForMaxXYAIInteractableUtility;                        // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinXYAIInteractableUtility;                               // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxXYAIInteractableUtility;                               // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistForMinZAIInteractableUtility;                         // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistForMaxZAIInteractableUtility;                         // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinZAIInteractableUtility;                                // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxZAIInteractableUtility;                                // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAthenaAIShipControllerParamsDataAsset*      ControllerParams;                                         // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnSfxDistance;                                         // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SinkSfxDistance;                                          // 0x006C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipContextParamsDataAsset");
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
		static auto ptr = UObject::FindClass("Class AIShips.AIShipDebugFunctionLibrary");
		return ptr;
	}


	void STATIC_RequestAIShipForCrew(class UObject* WorldContextObject, const struct FGuid& CrewId);
};


// Class AIShips.AIShipEncounterSpawnParamsDataAsset
// 0x00B8 (0x00E0 - 0x0028)
class UAIShipEncounterSpawnParamsDataAsset : public UDataAsset
{
public:
	class UShipDescAsset*                              AIShipDescAsset;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnDepth;                                               // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSafeSpawnDistanceFromOtherShips;                       // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FRelativeSpawnLocationGeneratorParams       RelativeSpawnLocationParams;                              // 0x0040(0x00A0) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipEncounterSpawnParamsDataAsset");
		return ptr;
	}

};


// Class AIShips.AIShipEncounterParamsDataAsset
// 0x0028 (0x0050 - 0x0028)
class UAIShipEncounterParamsDataAsset : public UDataAsset
{
public:
	class UAIShipEncounterSpawnParamsDataAsset*        SpawnParams;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAIShipContextParamsDataAsset*               ContextParams;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAIShipContextDescDataAsset*                 DefaultContextDesc;                                       // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ShipPawnClass;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MigrationPreventionRadiusMultiplier;                      // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipEncounterParamsDataAsset");
		return ptr;
	}

};


// Class AIShips.AIShipEncounterTriggerSphere
// 0x0018 (0x04B0 - 0x0498)
class AAIShipEncounterTriggerSphere : public ATriggerSphere
{
public:
	TArray<class AController*>                         AlreadyEntered;                                           // 0x0498(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipEncounterTriggerSphere");
		return ptr;
	}


	void OnExitZone(class AActor* Other);
	void OnEnterZone(class AActor* Other);
};


// Class AIShips.AIShipObstacleService
// 0x0060 (0x04E8 - 0x0488)
class AAIShipObstacleService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0488(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipObstacleService");
		return ptr;
	}

};


// Class AIShips.AIShipProxy
// 0x0050 (0x04D8 - 0x0488)
class AAIShipProxy : public AActor
{
public:
	class UShipDescAsset*                              ShipDesc;                                                 // 0x0488(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAIShipContextParamsDataAsset*               ContextParams;                                            // 0x0490(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAIShipContextDescDataAsset*                 ContextDesc;                                              // 0x0498(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UShipFactory*                                ShipFactory;                                              // 0x04A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x04A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipProxy");
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
		static auto ptr = UObject::FindClass("Class AIShips.AIShipServiceInterface");
		return ptr;
	}

};


// Class AIShips.AIShipService
// 0x0080 (0x0508 - 0x0488)
class AAIShipService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0488(0x0008) MISSED OFFSET
	class UAIShipServiceDataAsset*                     Params;                                                   // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCursedSailsCampaignDataAsset*               CampaignParams;                                           // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x04A0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipService");
		return ptr;
	}

};


// Class AIShips.AIShipServiceDataAsset
// 0x0018 (0x0040 - 0x0028)
class UAIShipServiceDataAsset : public UDataAsset
{
public:
	class UAIShipEncounterParamsDataAsset*             EncounterParams;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FIntPoint                                   ObstacleBucketDimensions;                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShipwreckObstacleRadius;                                  // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipServiceDataAsset");
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
		static auto ptr = UObject::FindClass("Class AIShips.AIShipTelemetryComponent");
		return ptr;
	}

};


// Class AIShips.AthenaAIShipController
// 0x0008 (0x0620 - 0x0618)
class AAthenaAIShipController : public AAthenaAIControllerBase
{
public:
	class UBehaviorTree*                               BTAsset;                                                  // 0x0618(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AthenaAIShipController");
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
		static auto ptr = UObject::FindClass("Class AIShips.BTService_UpdateIfShipShouldBreakTracking");
		return ptr;
	}

};


// Class AIShips.BTTask_AIShipSurface
// 0x0008 (0x0090 - 0x0088)
class UBTTask_AIShipSurface : public UBTTask_BlackboardBase
{
public:
	float                                              MaxSpeed;                                                 // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.BTTask_AIShipSurface");
		return ptr;
	}

};


// Class AIShips.BTTask_RamTargetShip
// 0x00B8 (0x0140 - 0x0088)
class UBTTask_RamTargetShip : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0088(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.BTTask_RamTargetShip");
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
		static auto ptr = UObject::FindClass("Class AIShips.BTTask_SailShipCircleTarget");
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
		static auto ptr = UObject::FindClass("Class AIShips.BTTask_SailShipForward");
		return ptr;
	}

};


// Class AIShips.CursedSailsCampaignDataAsset
// 0x0010 (0x0038 - 0x0028)
class UCursedSailsCampaignDataAsset : public UDataAsset
{
public:
	TArray<struct FCursedSailsBattleParams>            Battles;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.CursedSailsCampaignDataAsset");
		return ptr;
	}

};


// Class AIShips.ShipProxyPawn
// 0x0038 (0x0520 - 0x04E8)
class AShipProxyPawn : public APawn
{
public:
	class AShip*                                       Ship;                                                     // 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AShip*                                       SpawnTargetShip;                                          // 0x04F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x04F8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.ShipProxyPawn");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
