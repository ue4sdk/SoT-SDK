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

// Class AIShips.AIShipContextParamsDataAsset
// 0x0040 (0x0068 - 0x0028)
class UAIShipContextParamsDataAsset : public UDataAsset
{
public:
	TArray<struct FAIShipEncounterParamsSpawnerData>   Spawners;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              TopDeckPlayerTrackerRadius;                               // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntervalBetweenRepairDamageAssignments;                   // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntervalBetweenUseCannonAssignments;                      // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistForMinXYAIInteractableUtility;                        // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistForMaxXYAIInteractableUtility;                        // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinXYAIInteractableUtility;                               // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxXYAIInteractableUtility;                               // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistForMinZAIInteractableUtility;                         // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistForMaxZAIInteractableUtility;                         // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinZAIInteractableUtility;                                // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxZAIInteractableUtility;                                // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

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
// 0x0018 (0x0040 - 0x0028)
class UAIShipEncounterParamsDataAsset : public UDataAsset
{
public:
	class UAIShipEncounterSpawnParamsDataAsset*        SpawnParams;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAIShipContextParamsDataAsset*               ContextParams;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ShipPawnClass;                                            // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipEncounterParamsDataAsset");
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


// Class AIShips.AIShipObstacleService
// 0x0048 (0x04D0 - 0x0488)
class AAIShipObstacleService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0488(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipObstacleService");
		return ptr;
	}

};


// Class AIShips.AIShipProxy
// 0x0048 (0x04D0 - 0x0488)
class AAIShipProxy : public AActor
{
public:
	class UShipDescAsset*                              ShipDesc;                                                 // 0x0488(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAIShipContextParamsDataAsset*               ContextParams;                                            // 0x0490(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UShipFactory*                                ShipFactory;                                              // 0x0498(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x04A0(0x0030) MISSED OFFSET

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
// 0x0070 (0x04F8 - 0x0488)
class AAIShipService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0488(0x0008) MISSED OFFSET
	class UAIShipServiceDataAsset*                     Params;                                                   // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCursedSailsCampaignDataAsset*               CampaignParams;                                           // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x04A0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipService");
		return ptr;
	}

};


// Class AIShips.AIShipServiceDataAsset
// 0x0010 (0x0038 - 0x0028)
class UAIShipServiceDataAsset : public UDataAsset
{
public:
	class UAIShipEncounterParamsDataAsset*             EncounterParams;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FIntPoint                                   ObstacleBucketDimensions;                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipServiceDataAsset");
		return ptr;
	}

};


// Class AIShips.AthenaAIShipController
// 0x0008 (0x0578 - 0x0570)
class AAthenaAIShipController : public AAIController
{
public:
	class UBehaviorTree*                               BTAsset;                                                  // 0x0570(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AthenaAIShipController");
		return ptr;
	}

};


// Class AIShips.BTService_UpdateIfShipShouldBreakTracking
// 0x0158 (0x01C8 - 0x0070)
class UBTService_UpdateIfShipShouldBreakTracking : public UBTService
{
public:
	float                                              WheelAngleMonitorDuration;                                // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WheelAngleChangeThresholdToBreakTracking;                 // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpeedMonitorDuration;                                     // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpeedChangeThresholdToBreakTrackingInMPS;                 // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetSpeedToConsiderAnchorLoweredInMPS;                  // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           TrackingLatencyTimes;                                     // 0x0088(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           TrackingLatencyTimesWhenAnchorLowered;                    // 0x00B8(0x0030) (Edit)
	struct FBlackboardKeySelector                      TargetActorKey;                                           // 0x00E8(0x0028) (Edit)
	struct FBlackboardKeySelector                      DisableTrackingKey;                                       // 0x0110(0x0028) (Edit)
	struct FBlackboardKeySelector                      ShouldSailForwardKey;                                     // 0x0138(0x0028) (Edit)
	struct FBlackboardKeySelector                      TimeToSailForwardKey;                                     // 0x0160(0x0028) (Edit)
	struct FBlackboardKeySelector                      CaptainIsPresentKey;                                      // 0x0188(0x0028) (Edit)
	unsigned char                                      UnknownData01[0x18];                                      // 0x01B0(0x0018) MISSED OFFSET

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
	float                                              SurfaceSpeedScalerRelativeToPlayerShip;                   // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.BTTask_AIShipSurface");
		return ptr;
	}

};


// Class AIShips.BTTask_RamTargetShip
// 0x00E0 (0x0168 - 0x0088)
class UBTTask_RamTargetShip : public UBTTask_BlackboardBase
{
public:
	float                                              MinDistanceFromTargetToStartRam;                          // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           RammingLocationOffsets;                                   // 0x0090(0x0030) (Edit)
	float                                              MaxSpeedToRamTarget;                                      // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTurnSpeed;                                             // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x00C8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.BTTask_RamTargetShip");
		return ptr;
	}

};


// Class AIShips.BTTask_SailShipBesideTarget
// 0x0100 (0x0188 - 0x0088)
class UBTTask_SailShipBesideTarget : public UBTTask_BlackboardBase
{
public:
	float                                              AlignDistanceThreshold;                                   // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           TimesToSailBesideTarget;                                  // 0x0090(0x0030) (Edit)
	float                                              TimeToProjectIntoFutureForTracking;                       // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetSpeedThresholdToTrackShip;                          // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           PerpendicularDistanceOffsets;                             // 0x00C8(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           TimesBeforeDistanceChange;                                // 0x00F8(0x0030) (Edit)
	float                                              MaxParallelDistanceOffset;                                // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FShipMovementParams                         MovementParams;                                           // 0x012C(0x0020) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	struct FTrackingNoiseGenerator                     TrackingNoiseGenerator;                                   // 0x0150(0x0018) (Edit)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0168(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.BTTask_SailShipBesideTarget");
		return ptr;
	}

};


// Class AIShips.BTTask_SailShipCircleTarget
// 0x00A8 (0x0130 - 0x0088)
class UBTTask_SailShipCircleTarget : public UBTTask_BlackboardBase
{
public:
	float                                              TargetSpeedThresholdInKnots;                              // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SecondsInFutureToProjectTargetLocation;                   // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           CircleRadiuses;                                           // 0x0090(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           CirclingSpeedsInDegreesPerSecond;                         // 0x00C0(0x0030) (Edit)
	struct FShipMovementParams                         MovementParams;                                           // 0x00F0(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0110(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.BTTask_SailShipCircleTarget");
		return ptr;
	}

};


// Class AIShips.BTTask_SailShipForward
// 0x0088 (0x0110 - 0x0088)
class UBTTask_SailShipForward : public UBTTask_BlackboardBase
{
public:
	struct FBlackboardKeySelector                      ShouldSailForwardKey;                                     // 0x0088(0x0028) (Edit)
	struct FBlackboardKeySelector                      TimeToSailForwardKey;                                     // 0x00B0(0x0028) (Edit)
	struct FShipMovementParams                         MovementParams;                                           // 0x00D8(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00F8(0x0018) MISSED OFFSET

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
// 0x0030 (0x0518 - 0x04E8)
class AShipProxyPawn : public APawn
{
public:
	class AShip*                                       Ship;                                                     // 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x04F0(0x0028) MISSED OFFSET

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
