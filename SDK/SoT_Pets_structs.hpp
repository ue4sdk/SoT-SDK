#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Pets_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_AIModule_classes.hpp"
#include "SoT_AthenaAI_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_RareAudio_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Interaction_classes.hpp"
#include "SoT_ActionStateMachine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Pets.HangoutSpotId
// 0x0008
struct FHangoutSpotId
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pets.PetHangoutSpotParams
// 0x00B8
struct FPetHangoutSpotParams
{
	class UClass*                                      PetType;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 HangoutTime;                                              // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedPetAnimationSelector               AnimationSelector;                                        // 0x0018(0x00A0) (Edit, DisableEditOnInstance)
};

// ScriptStruct Pets.HangoutSpotParams
// 0x0020
struct FHangoutSpotParams
{
	struct FName                                       HangoutSpotName;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FPetHangoutSpotParams>               PetParams;                                                // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Pets.PetDangerHearingThreatResponse
// 0x0003
struct FPetDangerHearingThreatResponse
{
	TEnumAsByte<EPetDangerHearingResponseType>         Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPetDangerHearingTarget>               IgnoredTarget;                                            // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               InvertIgnoredTarget;                                      // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pets.PetDangerHearingThreat
// 0x0020
struct FPetDangerHearingThreat
{
	struct FName                                       SoundTag;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeBeforeForgotten;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FPetDangerHearingThreatResponse>     Responses;                                                // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Pets.PetFeedingAnimationData
// 0x0008
struct FPetFeedingAnimationData
{
	TEnumAsByte<EAthenaAnimationPetRoamingState>       AnimationState;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AnimationTimeout;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pets.PetFeedingParams
// 0x0038
struct FPetFeedingParams
{
	struct FPetFeedingAnimationData                    EatingAnimData;                                           // 0x0000(0x0008) (Edit)
	struct FPetFeedingAnimationData                    FedAnimData;                                              // 0x0008(0x0008) (Edit)
	struct FPetFeedingAnimationData                    NotFedAnimData;                                           // 0x0010(0x0008) (Edit)
	struct FPetFeedingAnimationData                    SickAnimData;                                             // 0x0018(0x0008) (Edit)
	struct FPetFeedingAnimationData                    RefusalAnimData;                                          // 0x0020(0x0008) (Edit)
	float                                              TimeToStartEating;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeUntilGivingUp;                                        // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistToleranceSquared;                                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationTolerance;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pets.HangoutSpotPosition
// 0x0080
struct FHangoutSpotPosition
{
	struct FHangoutSpotId                              Id;                                                       // 0x0000(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (Edit, IsPlainOldData)
	TEnumAsByte<EHangoutRotationMode>                  RotationMode;                                             // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShipDeck>                             ShipDeck;                                                 // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	class APawn*                                       Occupier;                                                 // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
	bool                                               IsPerch;                                                  // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NeedOverrideInteractionPoint;                             // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0062(0x0002) MISSED OFFSET
	struct FVector                                     OverrideInteractionPointPosition;                         // 0x0064(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               BlockPetEmoteReactions;                                   // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0071(0x000F) MISSED OFFSET
};

// ScriptStruct Pets.PetCustomisation
// 0x0018
struct FPetCustomisation
{
	class FString                                      PetName;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FAIPartId                                   PetPartId;                                                // 0x0010(0x0008) (Edit, DisableEditOnInstance)
};

// ScriptStruct Pets.PetListingTypeEntry
// 0x0038
struct FPetListingTypeEntry
{
	TArray<struct FPetCustomisation>                   PetCustomisations;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringClassReference                       PetType;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       FeatureToggleName;                                        // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      PetListingName;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Pets.PetsServiceParams
// 0x0038
struct FPetsServiceParams
{
	uint32_t                                           MaximumDistanceFromOwner;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	uint32_t                                           ProximityRadius;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPetsInProximity;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RespawnRequestTimeout;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnTimeDelay;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPetProximityLifespan;                                  // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPetProximityLifespan;                                  // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPetProximityRespawnDelay;                              // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPetProximityRespawnDelay;                              // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeldPetDespawnDelay;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              IllegalShipsSizesForSpawn;                                // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Pets.PetRelationship
// 0x0020
struct FPetRelationship
{
	class APetItemInfo*                                PetInfo;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Pets.ReactStateMapping
// 0x00D8
struct FReactStateMapping
{
	struct FName                                       AnimationID;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanTimeout;                                               // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              AnimationTimeout;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedPetAnimationSelector               PetStateSelector;                                         // 0x0010(0x00A0) (Edit, DisableEditOnInstance)
	float                                              AnimationChance;                                          // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 AnimationDelay;                                           // 0x00B4(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              IgnoringStrategies;                                       // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Pets.WieldablePetDropTimeout
// 0x0008
struct FWieldablePetDropTimeout
{
	TEnumAsByte<EWieldablePetDropRequestReason>        RequestReason;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DropDelay;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Pets.WieldablePetFoodSourceEntry
// 0x0010
struct FWieldablePetFoodSourceEntry
{
	class AActor*                                      FoodSourceActor;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              TimeUntilConsumption;                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Pets.WieldablePetHungerAnimationData
// 0x0008
struct FWieldablePetHungerAnimationData
{
	TEnumAsByte<EAthenaAnimationPetHeldReactionState>  AnimState;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AnimTimeout;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Pets.WieldablePetAggregateTickFunction
// 0x0098 (0x00E0 - 0x0048)
struct FWieldablePetAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0048(0x0098) MISSED OFFSET
};

// ScriptStruct Pets.EventWieldablePetPendingDrop
// 0x0001
struct FEventWieldablePetPendingDrop
{
	TEnumAsByte<EWieldablePetDropRequestReason>        DropRequestReason;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pets.EventPetDropped
// 0x0001
struct FEventPetDropped
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Pets.EventPetPickedUp
// 0x0001
struct FEventPetPickedUp
{
	bool                                               IsOnPerch;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pets.EventPerchHangoutSpotSetEnabledState
// 0x000C
struct FEventPerchHangoutSpotSetEnabledState
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Pets.EventHangoutSpotMadeAvailable
// 0x0050
struct FEventHangoutSpotMadeAvailable
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Pets.EventHangoutSpotMadeUnavailable
// 0x0050
struct FEventHangoutSpotMadeUnavailable
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Pets.PetDespawnActionStateParams
// 0x0040
struct FPetDespawnActionStateParams
{
	float                                              TakeOffHeight;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TakeOffTime;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalGhostShaderTime;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToTriggerVFX;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     DespawnVFX;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DespawnVFXColour;                                         // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 DespawnSFX;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StopDespawnSFX;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalDespawningTime;                                      // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Pets.PetSpawnActionStateConstructionInfo
// 0x0000 (0x0030 - 0x0030)
struct FPetSpawnActionStateConstructionInfo : public FActorActionStateConstructionInfo
{

};

// ScriptStruct Pets.PetSpawnActionStateParams
// 0x0040
struct FPetSpawnActionStateParams
{
	float                                              LandingHeight;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LandingTime;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalGhostShaderTime;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToTriggerVFX;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     SpawnVFX;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SpawnVFXColour;                                           // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 SpawnSFX;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StopSpawnSFX;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalSpawningTime;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Pets.EventWieldablePetHungerStateUpdated
// 0x0001
struct FEventWieldablePetHungerStateUpdated
{
	TEnumAsByte<EAthenaAnimationPetHeldReactionState>  NewState;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
