#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Pets_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Pets.AIPetsOnDemandSpawner
// 0x0000 (0x0418 - 0x0418)
class UAIPetsOnDemandSpawner : public UAISpawner
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.AIPetsOnDemandSpawner"));
		return ptr;
	}

};


// Class Pets.BTDecorator_IsForcingHangout
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_IsForcingHangout : public UBTDecorator_BaseConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTDecorator_IsForcingHangout"));
		return ptr;
	}

};


// Class Pets.BTDecorator_IsOccupiedHangoutSpotStillAvailable
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_IsOccupiedHangoutSpotStillAvailable : public UBTDecorator_BaseConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTDecorator_IsOccupiedHangoutSpotStillAvailable"));
		return ptr;
	}

};


// Class Pets.BTDecorator_IsOccupyingHangoutSpotWithGivenId
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_IsOccupyingHangoutSpotWithGivenId : public UBTDecorator_BaseConditional
{
public:
	TArray<struct FHangoutSpotId>                      SuccessIds;                                               // 0x0068(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTDecorator_IsOccupyingHangoutSpotWithGivenId"));
		return ptr;
	}

};


// Class Pets.BTDecorator_IsPerchedInHangout
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_IsPerchedInHangout : public UBTDecorator_BaseConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTDecorator_IsPerchedInHangout"));
		return ptr;
	}

};


// Class Pets.BTDecorator_PetFoodSourceAvailable
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_PetFoodSourceAvailable : public UBTDecorator_BaseConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTDecorator_PetFoodSourceAvailable"));
		return ptr;
	}

};


// Class Pets.BTDecorator_PetRoamingAnimationStateActive
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_PetRoamingAnimationStateActive : public UBTDecorator_BaseConditional
{
public:
	TArray<TEnumAsByte<EAthenaAnimationPetRoamingState>> MatchingStates;                                           // 0x0068(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTDecorator_PetRoamingAnimationStateActive"));
		return ptr;
	}

};


// Class Pets.BTTask_AttachToHangout
// 0x0008 (0x0090 - 0x0088)
class UBTTask_AttachToHangout : public UBTTask_BlackboardBase
{
public:
	float                                              TaskDuration;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTTask_AttachToHangout"));
		return ptr;
	}

};


// Class Pets.BTTask_ChangeHangoutAnimation
// 0x0000 (0x0088 - 0x0088)
class UBTTask_ChangeHangoutAnimation : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTTask_ChangeHangoutAnimation"));
		return ptr;
	}

};


// Class Pets.BTTask_DetachFromHangout
// 0x0008 (0x0090 - 0x0088)
class UBTTask_DetachFromHangout : public UBTTask_BlackboardBase
{
public:
	float                                              TaskDuration;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTTask_DetachFromHangout"));
		return ptr;
	}

};


// Class Pets.BTTask_EatFood
// 0x0008 (0x0068 - 0x0060)
class UBTTask_EatFood : public UBTTaskNode
{
public:
	class UPetFeedingDataAsset*                        FeedingDataAsset;                                         // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTTask_EatFood"));
		return ptr;
	}

};


// Class Pets.BTTask_GetTotalHangoutTime
// 0x0000 (0x0088 - 0x0088)
class UBTTask_GetTotalHangoutTime : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTTask_GetTotalHangoutTime"));
		return ptr;
	}

};


// Class Pets.BTTask_NotifyForcedHangoutComplete
// 0x0000 (0x0088 - 0x0088)
class UBTTask_NotifyForcedHangoutComplete : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTTask_NotifyForcedHangoutComplete"));
		return ptr;
	}

};


// Class Pets.BTTask_PetWaitForAnimationRoamingState
// 0x0020 (0x0080 - 0x0060)
class UBTTask_PetWaitForAnimationRoamingState : public UBTTaskNode
{
public:
	TArray<TEnumAsByte<EAthenaAnimationPetRoamingState>> SuccessRoamingStates;                                     // 0x0060(0x0010) (Edit, ZeroConstructor)
	TArray<TEnumAsByte<EAthenaAnimationPetRoamingState>> FailRoamingStates;                                        // 0x0070(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTTask_PetWaitForAnimationRoamingState"));
		return ptr;
	}

};


// Class Pets.BTTask_ReactToOwner
// 0x0008 (0x0068 - 0x0060)
class UBTTask_ReactToOwner : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTTask_ReactToOwner"));
		return ptr;
	}

};


// Class Pets.BTTask_ReactToThreat
// 0x0010 (0x0070 - 0x0060)
class UBTTask_ReactToThreat : public UBTTaskNode
{
public:
	TEnumAsByte<EAthenaAnimationPetRoamingState>       ReactAnimState;                                           // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ChangeAnimationAfterWaitTime;                             // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0062(0x0002) MISSED OFFSET
	float                                              ReactAnimTime;                                            // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAthenaAnimationPetRoamingState>       AfterReactAnimState;                                      // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTTask_ReactToThreat"));
		return ptr;
	}

};


// Class Pets.BTTask_SelectFoodSource
// 0x0000 (0x0088 - 0x0088)
class UBTTask_SelectFoodSource : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTTask_SelectFoodSource"));
		return ptr;
	}

};


// Class Pets.BTTask_SelectPetHangoutSpot
// 0x0010 (0x0098 - 0x0088)
class UBTTask_SelectPetHangoutSpot : public UBTTask_BlackboardBase
{
public:
	bool                                               NeedForceId;                                              // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FHangoutSpotId                              ForcedId;                                                 // 0x008C(0x0008) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTTask_SelectPetHangoutSpot"));
		return ptr;
	}

};


// Class Pets.BTTask_SelectWanderFlyStrategy
// 0x0078 (0x0100 - 0x0088)
class UBTTask_SelectWanderFlyStrategy : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderFloatValue                   WanderRange;                                              // 0x0088(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   LowFlyRange;                                              // 0x00B8(0x0030) (Edit)
	class UClass*                                      WanderStrategy;                                           // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LowFlyStrategy;                                           // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HighFlyStrategy;                                          // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTTask_SelectWanderFlyStrategy"));
		return ptr;
	}

};


// Class Pets.PetHangoutInterface
// 0x0000 (0x0028 - 0x0028)
class UPetHangoutInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetHangoutInterface"));
		return ptr;
	}

};


// Class Pets.PetMemoryInterface
// 0x0000 (0x0028 - 0x0028)
class UPetMemoryInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetMemoryInterface"));
		return ptr;
	}

};


// Class Pets.PetLifetimeInterface
// 0x0000 (0x0028 - 0x0028)
class UPetLifetimeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetLifetimeInterface"));
		return ptr;
	}

};


// Class Pets.PlayerPetInterface
// 0x0000 (0x0028 - 0x0028)
class UPlayerPetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PlayerPetInterface"));
		return ptr;
	}

};


// Class Pets.PetReactInterface
// 0x0000 (0x0028 - 0x0028)
class UPetReactInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetReactInterface"));
		return ptr;
	}

};


// Class Pets.BTTask_SetDebugPetStateDescriptor
// 0x0008 (0x0068 - 0x0060)
class UBTTask_SetDebugPetStateDescriptor : public UBTTaskNode
{
public:
	TEnumAsByte<EDebugPetStateDescriptor>              NewDescriptor;                                            // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTTask_SetDebugPetStateDescriptor"));
		return ptr;
	}

};


// Class Pets.BTTask_StopOccupyingHangoutSpot
// 0x0000 (0x0088 - 0x0088)
class UBTTask_StopOccupyingHangoutSpot : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTTask_StopOccupyingHangoutSpot"));
		return ptr;
	}

};


// Class Pets.PetDangerComponent
// 0x00D8 (0x01A0 - 0x00C8)
class UPetDangerComponent : public UActorComponent
{
public:
	class UPetDangerDataAsset*                         DangerDataAsset;                                          // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD0];                                      // 0x00D0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetDangerComponent"));
		return ptr;
	}

};


// Class Pets.EnvQueryContext_AverageThreatPositionFromBlackboard
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_AverageThreatPositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.EnvQueryContext_AverageThreatPositionFromBlackboard"));
		return ptr;
	}

};


// Class Pets.EnvQueryContext_CurrentHangoutSpot
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_CurrentHangoutSpot : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.EnvQueryContext_CurrentHangoutSpot"));
		return ptr;
	}

};


// Class Pets.EnvQueryContext_FirstThreatPositionFromBlackboard
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_FirstThreatPositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.EnvQueryContext_FirstThreatPositionFromBlackboard"));
		return ptr;
	}

};


// Class Pets.EnvQueryContext_PerceivedFoodSources
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_PerceivedFoodSources : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.EnvQueryContext_PerceivedFoodSources"));
		return ptr;
	}

};


// Class Pets.EnvQueryContext_SafePositionFromBlackboard
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_SafePositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.EnvQueryContext_SafePositionFromBlackboard"));
		return ptr;
	}

};


// Class Pets.PetDesc
// 0x0010 (0x0140 - 0x0130)
class UPetDesc : public UItemDesc
{
public:
	class UPetSpawnParamsDataAsset*                    PetSpawnParams;                                           // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PreviewPetClass;                                          // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetDesc"));
		return ptr;
	}

};


// Class Pets.PetHangoutSpotsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UPetHangoutSpotsDataAsset : public UDataAsset
{
public:
	TArray<struct FHangoutSpotParams>                  HangoutSpotParams;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetHangoutSpotsDataAsset"));
		return ptr;
	}

};


// Class Pets.PetHangoutSpotSelectorComponent
// 0x01D0 (0x0298 - 0x00C8)
class UPetHangoutSpotSelectorComponent : public UActorComponent
{
public:
	class UPetHangoutSpotComponent*                    HangoutSpotPositionComponent;                             // 0x00C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPetHangoutSpotsDataAsset*                   HangoutParamsDataAsset;                                   // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x00D8(0x0070) MISSED OFFSET
	class UClass*                                      PetType_Cached;                                           // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x148];                                     // 0x0150(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetHangoutSpotSelectorComponent"));
		return ptr;
	}

};


// Class Pets.HangoutSpotSelectionInterface
// 0x0000 (0x0028 - 0x0028)
class UHangoutSpotSelectionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.HangoutSpotSelectionInterface"));
		return ptr;
	}

};


// Class Pets.PetIdleMovementInterface
// 0x0000 (0x0028 - 0x0028)
class UPetIdleMovementInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetIdleMovementInterface"));
		return ptr;
	}

};


// Class Pets.PetAIController
// 0x00E0 (0x0960 - 0x0880)
class APetAIController : public AAthenaAIController
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0880(0x0020) MISSED OFFSET
	TArray<struct FAIStategyControllerMovementMod>     StrategyControllerMovementMods;                           // 0x08A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              DefaultControlRotationInterpSpeed;                        // 0x08B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	class UClass*                                      DefaultStrategy;                                          // 0x08B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UReactStateMappingsDataAsset*                ReactMappings;                                            // 0x08C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x08C8(0x0008) MISSED OFFSET
	class UPetHangoutSpotSelectorComponent*            HangoutSpotSelectorComponent;                             // 0x08D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPetHangoutSpotComponent*                    ForcedHangoutSpotComponent;                               // 0x08D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlackboardData*                             DefaultBlackboardAsset;                                   // 0x08E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBehaviorTree*                               DefaultTree;                                              // 0x08E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBehaviorTree*                               HangoutTree;                                              // 0x08F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBehaviorTree*                               IdleTree;                                                 // 0x08F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPetDangerComponent*                         DangerComponent;                                          // 0x0900(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              MinAgentHalfHeightPctOverride;                            // 0x0908(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x54];                                      // 0x090C(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetAIController"));
		return ptr;
	}


	void OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors);
	class UAthenaAICharacterPathFollowingComponent* GetAthenaAICharPathFollowingComp();
};


// Class Pets.PetDangerDataAsset
// 0x0028 (0x0050 - 0x0028)
class UPetDangerDataAsset : public UDataAsset
{
public:
	TArray<struct FPetDangerHearingThreat>             KnownHearingDangers;                                      // 0x0028(0x0010) (Edit, ZeroConstructor)
	float                                              MinChangeAverageThreatLocationToUpdate;                   // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FleeDistance;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EPetDangerHearingResponseType>> ResponsePriorities;                                       // 0x0040(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetDangerDataAsset"));
		return ptr;
	}

};


// Class Pets.PetFeedingDataAsset
// 0x0038 (0x0060 - 0x0028)
class UPetFeedingDataAsset : public UDataAsset
{
public:
	struct FPetFeedingParams                           PetFeedingParams;                                         // 0x0028(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetFeedingDataAsset"));
		return ptr;
	}

};


// Class Pets.PetHangoutSpotComponent
// 0x0080 (0x0310 - 0x0290)
class UPetHangoutSpotComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0290(0x0008) MISSED OFFSET
	bool                                               HasLowerDeckFloodThreshold;                               // 0x0298(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	float                                              LowerDeckFloodThreshold;                                  // 0x029C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HasMiddleDeckFloodThreshold;                              // 0x02A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	float                                              MiddleDeckFloodThreshold;                                 // 0x02A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PerchInteractableHeightOffset;                            // 0x02A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsWorldHangout;                                           // 0x02AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x23];                                      // 0x02AD(0x0023) MISSED OFFSET
	TArray<class UPetPerchComponent*>                  PetPerchComponents;                                       // 0x02D0(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData04[0x10];                                      // 0x02E0(0x0010) MISSED OFFSET
	bool                                               IsTopDeckBlocked;                                         // 0x02F0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsOwnerSinking;                                           // 0x02F1(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1E];                                      // 0x02F2(0x001E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetHangoutSpotComponent"));
		return ptr;
	}


	void OnRep_IsOwnerSinking();
};


// Class Pets.PetItemInfo
// 0x0060 (0x05A0 - 0x0540)
class APetItemInfo : public ANonStorableItemInfo
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0540(0x0018) MISSED OFFSET
	struct FPetCustomisation                           PetCustomisation;                                         // 0x0558(0x0018) (Net)
	class AActor*                                      PetOwner;                                                 // 0x0570(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      SpawnedForShip;                                           // 0x0578(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DropTraceDistance;                                        // 0x0580(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointSearchRadius;                                        // 0x0584(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DropChannel;                                              // 0x0588(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0589(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetItemInfo"));
		return ptr;
	}

};


// Class Pets.PetListingDataAsset
// 0x0010 (0x0038 - 0x0028)
class UPetListingDataAsset : public UDataAsset
{
public:
	TArray<struct FPetListingTypeEntry>                Entries;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetListingDataAsset"));
		return ptr;
	}

};


// Class Pets.PetMovementModifierSettingsInterface
// 0x0000 (0x0028 - 0x0028)
class UPetMovementModifierSettingsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetMovementModifierSettingsInterface"));
		return ptr;
	}

};


// Class Pets.PetOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UPetOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetOwnerInterface"));
		return ptr;
	}

};


// Class Pets.PetOwnerComponent
// 0x0020 (0x00E8 - 0x00C8)
class UPetOwnerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00C8(0x0018) MISSED OFFSET
	class AItemInfo*                                   PetInfo;                                                  // 0x00E0(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetOwnerComponent"));
		return ptr;
	}


	void Server_RequestDismissal();
};


// Class Pets.PetPartCustomisationInterface
// 0x0000 (0x0028 - 0x0028)
class UPetPartCustomisationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetPartCustomisationInterface"));
		return ptr;
	}

};


// Class Pets.PetPerchComponent
// 0x0048 (0x0160 - 0x0118)
class UPetPerchComponent : public UInteractableComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0118(0x0018) MISSED OFFSET
	TArray<class UClass*>                              AllowedPetTypes;                                          // 0x0130(0x0010) (ZeroConstructor, Transient)
	int                                                HangoutSpotIndex;                                         // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       HangoutSpotName;                                          // 0x0144(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionPointLocation;                                 // 0x014C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0158(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               BlocksPetEmoteReactions;                                  // 0x0159(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IgnorePickupFromHangoutTooltipDisplayOffset;              // 0x015A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x015B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetPerchComponent"));
		return ptr;
	}

};


// Class Pets.PetSpawnParamsDataAsset
// 0x0040 (0x0068 - 0x0028)
class UPetSpawnParamsDataAsset : public UDataAsset
{
public:
	class UClass*                                      PetClassID;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBehaviorTree*                               TreeToRun;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> PetSkillset;                                              // 0x0038(0x0020) (Edit, DisableEditOnInstance)
	class UEnvQuery*                                   SpawnQueryForLand;                                        // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   SpawnQueryForShip;                                        // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetSpawnParamsDataAsset"));
		return ptr;
	}

};


// Class Pets.PetsServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UPetsServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetsServiceInterface"));
		return ptr;
	}

};


// Class Pets.PetsServiceParamsDataAsset
// 0x0038 (0x0060 - 0x0028)
class UPetsServiceParamsDataAsset : public UDataAsset
{
public:
	struct FPetsServiceParams                          Params;                                                   // 0x0028(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetsServiceParamsDataAsset"));
		return ptr;
	}

};


// Class Pets.PetsService
// 0x02E8 (0x0310 - 0x0028)
class UPetsService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TMap<class AActor*, struct FPetRelationship>       PetOwnerRelationships;                                    // 0x0038(0x0050) (ZeroConstructor)
	class UAIPetsOnDemandSpawner*                      Spawner;                                                  // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0090(0x0018) MISSED OFFSET
	struct FPetsServiceParams                          PetsServiceParams;                                        // 0x00A8(0x0038)
	TArray<class AActor*>                              OwnersToRemove;                                           // 0x00E0(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              OwnersToRequestDespawn;                                   // 0x00F0(0x0010) (ZeroConstructor)
	TArray<class APawn*>                               MovingPetsOnIslands;                                      // 0x0100(0x0010) (ZeroConstructor)
	TArray<class APawn*>                               MovingPetsOnShips;                                        // 0x0110(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              ScratchArray;                                             // 0x0120(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x188];                                     // 0x0130(0x0188) MISSED OFFSET
	class UPetHangoutSpotsDataAsset*                   PetHangoutDataAsset;                                      // 0x02B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x50];                                      // 0x02C0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetsService"));
		return ptr;
	}


	void RemovePetFromActor(class AActor* InOwner);
	void AddPetForActorAndWield(class UClass* InPetType, const struct FPetCustomisation& InCustomisation, class AActor* InOwner, bool IsWielded);
	void AddPetForActor(class UClass* InPetType, const struct FPetCustomisation& InCustomisation, class AActor* InOwner);
};


// Class Pets.PetsSettings
// 0x0050 (0x0078 - 0x0028)
class UPetsSettings : public UObject
{
public:
	struct FStringAssetReference                       PetHangoutSpotsDataAsset;                                 // 0x0028(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       PetListingDataAsset;                                      // 0x0038(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       PetPartIdListingDataAsset;                                // 0x0048(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       PetsServiceParamsDataAsset;                               // 0x0058(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       PetSpawnDefinitionsDataAsset;                             // 0x0068(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetsSettings"));
		return ptr;
	}

};


// Class Pets.ReactAIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UReactAIStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.ReactAIStrategyId"));
		return ptr;
	}

};


// Class Pets.ReactStateMappingsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UReactStateMappingsDataAsset : public UDataAsset
{
public:
	TArray<struct FReactStateMapping>                  ReactMappings;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.ReactStateMappingsDataAsset"));
		return ptr;
	}

};


// Class Pets.WieldablePet
// 0x0130 (0x08E0 - 0x07B0)
class AWieldablePet : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x07B0(0x0028) MISSED OFFSET
	float                                              ThirdPersonScalingModifier;                               // 0x07D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07DC(0x0004) MISSED OFFSET
	class UWieldablePetComponent*                      WieldablePetComponent;                                    // 0x07E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAIPartsRetrievalComponent*                  AIPartsRetrievalComponent;                                // 0x07E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPetPartCustomisationComponent*              PetPartCustomisationComponent;                            // 0x07F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitterComponent;                          // 0x07F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWaterExposureComponent*                     WaterExposureComponent;                                   // 0x0800(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldableComponent;                                 // 0x0808(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPickupableComponent*                        PickupableComponent;                                      // 0x0810(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWieldableInteractableComponent*             WieldableInteractableComponent;                           // 0x0818(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UCleanlinessComponent*                       CleanlinessComponent;                                     // 0x0820(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ULightWeightStatusEffectManagerComponent*    LightWeightStatusEffectManagerComponent;                  // 0x0828(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPetDitherComponent*                         PetDitherComponent;                                       // 0x0830(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AActor*                                      PetOwner;                                                 // 0x0838(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFeedingComponent*                           FeedingComponent;                                         // 0x0840(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPetSicknessComponent*                       SicknessComponent;                                        // 0x0848(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWieldablePetHungerComponent*                HungerComponent;                                          // 0x0850(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStarvingComponent*                          StarvingComponent;                                        // 0x0858(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPetTelemetryComponent*                      TelemetryComponent;                                       // 0x0860(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x68];                                      // 0x0868(0x0068) MISSED OFFSET
	TEnumAsByte<EAthenaAnimationPetHeldReactionState>  HungerReactAnimationState;                                // 0x08D0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWieldablePetDropRequestReason>        DropRequest;                                              // 0x08D1(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xE];                                       // 0x08D2(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.WieldablePet"));
		return ptr;
	}


	void OnRep_HungerReactAnimationState();
	void OnRep_DropRequest(TEnumAsByte<EWieldablePetDropRequestReason> PriorDropRequest);
};


// Class Pets.WieldablePetAnimNotifyWwiseEmitterComponent
// 0x0010 (0x02D0 - 0x02C0)
class UWieldablePetAnimNotifyWwiseEmitterComponent : public UAnimNotifyWwiseEmitterComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.WieldablePetAnimNotifyWwiseEmitterComponent"));
		return ptr;
	}

};


// Class Pets.WieldablePetComponent
// 0x0088 (0x0150 - 0x00C8)
class UWieldablePetComponent : public UActorComponent
{
public:
	class UWieldablePetComponentDataAsset*             WieldablePetComponentData;                                // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x80];                                      // 0x00D0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.WieldablePetComponent"));
		return ptr;
	}

};


// Class Pets.WieldablePetComponentDataAsset
// 0x0048 (0x0070 - 0x0028)
class UWieldablePetComponentDataAsset : public UDataAsset
{
public:
	struct FFloatRange                                 FriendlyTimeUntilEscape;                                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 NormalTimeUntilEscape;                                    // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 SubmergedTimeUntilEscape;                                 // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageToOwnerDropThreshold;                               // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FWieldablePetDropTimeout>            DropTimeouts;                                             // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.WieldablePetComponentDataAsset"));
		return ptr;
	}

};


// Class Pets.WieldablePetHungerComponent
// 0x00B0 (0x0178 - 0x00C8)
class UWieldablePetHungerComponent : public UActorComponent
{
public:
	class UWieldablePetHungerDataAsset*                HungerData;                                               // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00D0(0x0028) MISSED OFFSET
	TArray<struct FOverlapResult>                      CachedOverlappingActors;                                  // 0x00F8(0x0010) (ZeroConstructor)
	TArray<struct FWieldablePetFoodSourceEntry>        ActiveFoodSources;                                        // 0x0108(0x0010) (ZeroConstructor)
	TArray<struct FWieldablePetFoodSourceEntry>        FoodSourcesToRemove;                                      // 0x0118(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0128(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.WieldablePetHungerComponent"));
		return ptr;
	}

};


// Class Pets.WieldablePetHungerDataAsset
// 0x0030 (0x0058 - 0x0028)
class UWieldablePetHungerDataAsset : public UDataAsset
{
public:
	float                                              TimeToStartEating;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EdibleCheckRadius;                                        // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWieldablePetHungerAnimationData            EatingAnimData;                                           // 0x0030(0x0008) (Edit, DisableEditOnInstance)
	struct FWieldablePetHungerAnimationData            FedAnimData;                                              // 0x0038(0x0008) (Edit, DisableEditOnInstance)
	struct FWieldablePetHungerAnimationData            SickAnimData;                                             // 0x0040(0x0008) (Edit, DisableEditOnInstance)
	struct FWieldablePetHungerAnimationData            RefuseAnimData;                                           // 0x0048(0x0008) (Edit, DisableEditOnInstance)
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // 0x0050(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.WieldablePetHungerDataAsset"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
