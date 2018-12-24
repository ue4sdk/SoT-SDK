#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_AIModule_classes.hpp"
#include "SoT_Maths_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Kraken.EKrakenBehaviourType
enum class EKrakenBehaviourType : uint8_t
{
	EKrakenBehaviourType__Idle     = 0,
	None                           = 1,
	EKrakenBehaviourType__EKrakenBehaviourType_MAX = 2,
	EItemType__Weapon              = 3
};


// Enum Kraken.EKrakenShipWrappingTentacleState
enum class EKrakenShipWrappingTentacleState : uint8_t
{
	EKrakenShipWrappingTentacleState__Dormant = 0,
	None                           = 1,
	EKrakenShipWrappingTentacleState__ShakeAttack = 2,
	None01                         = 3,
	EKrakenShipWrappingTentacleState__EKrakenShipWrappingTentacleState_MAX = 4
};


// Enum Kraken.EKrakenDynamicsStateEvent
enum class EKrakenDynamicsStateEvent : uint8_t
{
	EKrakenDynamicsStateEvent__Damage = 0,
	None                           = 1
};


// Enum Kraken.EKrakenEQSLockReason
enum class EKrakenEQSLockReason : uint8_t
{
	EKrakenEQSLockReason__Spawning = 0,
	None                           = 1
};


// Enum Kraken.EKrakenDespawnReason
enum class EKrakenDespawnReason : uint8_t
{
	EKrakenDespawnReason__Invalid  = 0,
	None                           = 1,
	EKrakenDespawnReason__Dismissed = 2,
	None01                         = 3
};


// Enum Kraken.EKrakenState
enum class EKrakenState : uint8_t
{
	EKrakenState__Spawning         = 0,
	None                           = 1,
	EAIShipType__Normal            = 2
};


// Enum Kraken.EKrakenTentacleBehaviourDamageActions
enum class EKrakenTentacleBehaviourDamageActions : uint8_t
{
	EKrakenTentacleBehaviourDamageActions__StayActive = 0,
	None                           = 1,
	EOarInputState__Inactive       = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Kraken.KrakenShipWrappingTentacleAnimationStateParams
// 0x0010
struct FKrakenShipWrappingTentacleAnimationStateParams
{
	bool                                               Visible;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                StartFrame;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EndFrame;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingTentacleAnimationPhaseCollection
// 0x0080
struct FKrakenShipWrappingTentacleAnimationPhaseCollection
{
	struct FKrakenShipWrappingTentacleAnimationStateParams Dormant;                                                  // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams Wrapping;                                                 // 0x0010(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams AmbientWobble;                                            // 0x0020(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams EnteringShakeAttack;                                      // 0x0030(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams ShakeAttack;                                              // 0x0040(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams ExitingShakeAttack;                                       // 0x0050(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams HeavyAttack;                                              // 0x0060(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams Unwrapping;                                               // 0x0070(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingTentacleVFXParams
// 0x0028
struct FKrakenShipWrappingTentacleVFXParams
{
	class UParticleSystem*                             VFX;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerTime;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0018(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenShipWrappingTentacleParams
// 0x00F0
struct FKrakenShipWrappingTentacleParams
{
	struct FKrakenShipWrappingTentacleAnimationPhaseCollection AnimationStates;                                          // 0x0000(0x0080) (Edit, DisableEditOnInstance)
	float                                              TimeIntoWrappingToDisableInteractables;                   // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeIntoUnwrappingToEnableInteractables;                  // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeIntoWrappingToEnableCollisions;                       // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeIntoUnwrappingToDisableCollisions;                    // 0x008C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeIntoEnteringShakeAttackToEnableCollisions;            // 0x0090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeIntoExitingShakeAttackToDisableCollisions;            // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HighDetailAnimationStreamingDistance;                     // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FKrakenShipWrappingTentacleVFXParams        WrappingOutOfWaterSplashVFX;                              // 0x00A0(0x0028) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleVFXParams        WrappingIntoWaterSplashVFX;                               // 0x00C8(0x0028) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingTentacleAnimationState
// 0x0010
struct FKrakenShipWrappingTentacleAnimationState
{
	uint32_t                                           EpochID;                                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EKrakenShipWrappingTentacleState>      State;                                                    // 0x0004(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	double                                             EndTime;                                                  // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenTentaclesChanceParams
// 0x0028
struct FKrakenTentaclesChanceParams
{
	int                                                NumberOfTentaclesSpawned;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRange                   ProbabilityRange;                                         // 0x0008(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenTentacleParams
// 0x0050
struct FKrakenTentacleParams
{
	struct FWeightedProbabilityRangeOfRanges           TentacleHealth;                                           // 0x0000(0x0030) (Edit, DisableEditOnInstance)
	struct FFloatRange                                 InactiveToActiveTentacleTimeout;                          // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InactiveToActiveTentacleTimeoutThresholdInSeconds;        // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfInactiveToActiveTentacle;                         // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfInactiveToActiveTentacleOnDeathOrFlee;            // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenWeightedBehaviour
// 0x0008
struct FKrakenWeightedBehaviour
{
	int                                                Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EKrakenBehaviourType>                  BehaviourType;                                            // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourParamsCollection
// 0x0010
struct FKrakenShipWrappingBehaviourParamsCollection
{
	TArray<class UKrakenShipWrappingBehaviourParamsDataAsset*> Params;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipHittingBehaviourParamsCollection
// 0x0010
struct FKrakenShipHittingBehaviourParamsCollection
{
	TArray<class UKrakenShipHittingBehaviourParamsDataAsset*> Params;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenBehaviourParams
// 0x0068
struct FKrakenBehaviourParams
{
	TEnumAsByte<EKrakenBehaviourType>                  Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	uint32_t                                           MaxInstancesOfBehaviourAllowed;                           // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           TargetTimeout;                                            // 0x0008(0x0030) (Edit, DisableEditOnInstance)
	class UKrakenIdleBehaviourParamsDataAsset*         IdleParams;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKrakenShipWrappingBehaviourParamsCollection ShipWrappingParams;                                       // 0x0040(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipHittingBehaviourParamsCollection ShipHittingParams;                                        // 0x0050(0x0010) (Edit, DisableEditOnInstance)
	class UKrakenPlayerGrabbingBehaviourParamsDataAsset* PlayerGrabbingParams;                                     // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenParams
// 0x0160
struct FKrakenParams
{
	class UClass*                                      MurkClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGeneratedLocationsDataAsset*                PotentialTentacleSpawnLocations;                          // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRange                   NumberOfTentaclesToSpawn;                                 // 0x0010(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FKrakenTentaclesChanceParams>        TentaclesRequiredToDismissKraken;                         // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              TickFrequencyToLookForNewBehaviours;                      // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OperatingAreaRadius;                                      // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumOperatingAreaMovementDeltaToInvalidateLocations;   // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RadiusToleranceBeforeOperatingAreaDespawn;                // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FKrakenTentaclesChanceParams>        NumTentacleInstancesToAssignToShip;                       // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              GlobalPlayRateScale;                                      // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 NewTargetTimeout;                                         // 0x0064(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 UnavailableTargetTimeout;                                 // 0x0074(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FKrakenTentacleParams                       TentacleParams;                                           // 0x0088(0x0050) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           DismissTimeoutWhenNoTargets;                              // 0x00D8(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           DismissTimeoutWithNewTarget;                              // 0x0108(0x0030) (Edit, DisableEditOnInstance)
	TArray<struct FKrakenWeightedBehaviour>            ShipInteractingBehaviourWeights;                          // 0x0138(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FKrakenBehaviourParams>              Behaviours;                                               // 0x0148(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              DamageAmountToTriggerAudioComponentNotification;          // 0x0158(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenAnimatedTentacleAnimationBoneFrame
// 0x000C
struct FKrakenAnimatedTentacleAnimationBoneFrame
{
	struct FVector                                     BoneLocation;                                             // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleAnimationBoneTrack
// 0x0010
struct FKrakenAnimatedTentacleAnimationBoneTrack
{
	TArray<struct FKrakenAnimatedTentacleAnimationBoneFrame> Frames;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleMappedAnimation
// 0x0010
struct FKrakenAnimatedTentacleMappedAnimation
{
	class UAnimSequence*                               ClientAnimation;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UKrakenAnimatedTentacleAnimationDataAsset*   AnimationAsset;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleAnimationSpecBone
// 0x0008
struct FKrakenAnimatedTentacleAnimationSpecBone
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleTransitionAnimation
// 0x0020
struct FKrakenAnimatedTentacleTransitionAnimation
{
	class UClass*                                      FromState;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BranchAnimationTimeRemaining;                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<class UAnimSequence*>                       TransitionAnimations;                                     // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleStateAnimationMapping
// 0x0028
struct FKrakenAnimatedTentacleStateAnimationMapping
{
	class UClass*                                      State;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Animation;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Loop;                                                     // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FKrakenAnimatedTentacleTransitionAnimation> Transitions;                                              // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Kraken.KrakenTentacleBehaviourActionChances
// 0x0008
struct FKrakenTentacleBehaviourActionChances
{
	TEnumAsByte<EKrakenTentacleBehaviourDamageActions> ActionToTransitionTo;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              WeightedChance;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenTentacleBehaviourParams
// 0x00C0
struct FKrakenTentacleBehaviourParams
{
	class UEnvQuery*                                   InactiveSpawnQueryTemplate;                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfCannonSideSpawn;                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UEnvQuery*                                   ActiveCannonSideSpawnQueryTemplate;                       // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   ActiveNonCannonSideSpawnQueryTemplate;                    // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TentacleClass;                                            // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinScale;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxScale;                                                 // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPlayRateScale;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPlayRateScale;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PanicDespawnShipRangeRadius;                              // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PanicDespawnWatercraftRangeRadius;                        // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PanicDespawnTentacleRadius;                               // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PanicDespawnAnimationPlayRateScale;                       // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreDeathAnimationPlayRateScale;                           // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FKrakenTentacleBehaviourActionChances> OnDamageActionChances;                                    // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeToSpendInInactiveState;                               // 0x0060(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeToSpendInActiveState;                                 // 0x0090(0x0030) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenIdleBehaviourParams
// 0x0000 (0x00C0 - 0x00C0)
struct FKrakenIdleBehaviourParams : public FKrakenTentacleBehaviourParams
{

};

// ScriptStruct Kraken.KrakenPlayerGrabbingHoldingStateTransitionChance
// 0x0010
struct FKrakenPlayerGrabbingHoldingStateTransitionChance
{
	float                                              WeightedChance;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      StateToTransitionTo;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenPlayerGrabbingBehaviourParams
// 0x0028 (0x00E8 - 0x00C0)
struct FKrakenPlayerGrabbingBehaviourParams : public FKrakenTentacleBehaviourParams
{
	float                                              MinUnsuccessfulTargetTimeout;                             // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxUnsuccessfulTargetTimeout;                             // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FKrakenPlayerGrabbingHoldingStateTransitionChance> HoldingTransitionChances;                                 // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MinTargetHoldingTime;                                     // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTargetHoldingTime;                                     // 0x00DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetThrowingSpeed;                                      // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenServiceSpawnParams
// 0x0080
struct FKrakenServiceSpawnParams
{
	float                                              SpawnLocationDistributionRadius;                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnLocationDistributionMinDistanceBetweenPoints;        // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnDistanceInFrontOfShip;                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenSpawnAttemptsRange;                            // 0x0010(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenSpawnAttemptsPostSpawnFailure;                 // 0x0040(0x0030) (Edit, DisableEditOnInstance)
	float                                              SpawnChance;                                              // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxConsecutiveFailedSpawnAttempts;                        // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   SpawnLocationQuery;                                       // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenServiceShipParams
// 0x0020
struct FKrakenServiceShipParams
{
	struct FName                                       Feature;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              ValidShipTypes;                                           // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UKrakenParamsDataAsset*                      KrakenParams;                                             // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenServiceParams
// 0x00A0
struct FKrakenServiceParams
{
	class UClass*                                      KrakenType;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKrakenServiceSpawnParams                   SpawnParams;                                              // 0x0008(0x0080) (Edit, DisableEditOnInstance)
	class UKrakenParamsDataAsset*                      DefaultKrakenParams;                                      // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FKrakenServiceShipParams>            KrakenParams;                                             // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipHittingBehaviourImpactParams
// 0x00A0
struct FKrakenShipHittingBehaviourImpactParams
{
	int                                                Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FTransform                                  TentacleTransform;                                        // 0x0010(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpactLocation;                                           // 0x0040(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpactForce;                                              // 0x004C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DamageLocation;                                           // 0x0058(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           NumZonesToDamage;                                         // 0x0068(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenShipHittingBehaviourParams
// 0x0060
struct FKrakenShipHittingBehaviourParams
{
	class UClass*                                      ShipSize;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TentacleType;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           DamageRequiredToCancelImpact;                             // 0x0010(0x0030) (Edit, DisableEditOnInstance)
	float                                              CancellationThreshold;                                    // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactTime;                                               // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LevelsOfDamage;                                           // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FKrakenShipHittingBehaviourImpactParams> Configurations;                                           // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourNamedTransform
// 0x0040
struct FKrakenShipWrappingBehaviourNamedTransform
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWarningParams
// 0x00A0
struct FKrakenShipWrappingBehaviourWarningParams
{
	class UClass*                                      TentacleType;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TickDuration;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FFloatRange                                 TentacleTimeoutRange;                                     // 0x000C(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           TentacleHealthRange;                                      // 0x0020(0x0030) (Edit, DisableEditOnInstance)
	TArray<struct FKrakenShipWrappingBehaviourNamedTransform> TentacleLocations;                                        // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              TentacleTimeout;                                          // 0x0060(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TentacleHealth;                                           // 0x0064(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	struct FTransform                                  TentacleLocation;                                         // 0x0070(0x0030) (Transient, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenAnchorDynamicsParams
// 0x0000 (0x0028 - 0x0028)
struct FKrakenAnchorDynamicsParams : public FStandardAnchorDynamicsParameters
{

};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourTentacleHeadLocations
// 0x0020
struct FKrakenShipWrappingBehaviourTentacleHeadLocations
{
	TArray<struct FKrakenShipWrappingBehaviourNamedTransform> Near;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FKrakenShipWrappingBehaviourNamedTransform> Far;                                                      // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenDynamicsStateEvent
// 0x000C
struct FKrakenDynamicsStateEvent
{
	TEnumAsByte<EKrakenDynamicsStateEvent>             Event;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Time;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenDynamicsStateFragmentParams
// 0x0020
struct FKrakenDynamicsStateFragmentParams
{
	class UCurveVector*                                TorqueCurve;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaselineTorque;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FKrakenDynamicsStateEvent>           Events;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenDynamicsStateParams
// 0x0010
struct FKrakenDynamicsStateParams
{
	TArray<struct FKrakenDynamicsStateFragmentParams>  FragmentParams;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenDynamicsParams
// 0x0050
struct FKrakenDynamicsParams
{
	struct FKrakenDynamicsStateParams                  AmbientWobble;                                            // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenDynamicsStateParams                  EnteringShakeAttack;                                      // 0x0010(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenDynamicsStateParams                  ShakeAttack;                                              // 0x0020(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenDynamicsStateParams                  ExitingShakeAttack;                                       // 0x0030(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenDynamicsStateParams                  HeavyAttack;                                              // 0x0040(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapLocationParams
// 0x00E0
struct FKrakenShipWrappingBehaviourWrapLocationParams
{
	class UClass*                                      TentacleType;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WrapLocationAnchorPoint;                                  // 0x0008(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FTransform                                  TentacleHeadHoldShipLocation;                             // 0x0020(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FKrakenShipWrappingBehaviourTentacleHeadLocations PortTentacleHeadLocations;                                // 0x0050(0x0020) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourTentacleHeadLocations StarboardTentacleHeadLocations;                           // 0x0070(0x0020) (Edit, DisableEditOnInstance)
	struct FKrakenDynamicsParams                       DynamicsParams;                                           // 0x0090(0x0050) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapLocationWeightedParams
// 0x00F0
struct FKrakenShipWrappingBehaviourWrapLocationWeightedParams
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FKrakenShipWrappingBehaviourWrapLocationParams Params;                                                   // 0x0010(0x00E0) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapParams
// 0x0140
struct FKrakenShipWrappingBehaviourWrapParams
{
	struct FFloatRange                                 WrapTimeBeforeGivingUpRange;                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShipInternalWaterLevelToTriggerUnwrap;                    // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FKrakenAnchorDynamicsParams                 AnchorDynamicsParams;                                     // 0x0018(0x0028) (Edit, DisableEditOnInstance)
	TArray<struct FKrakenShipWrappingBehaviourWrapLocationWeightedParams> WrapLocations;                                            // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              WrapTimeBeforeGivingUp;                                   // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
	struct FKrakenShipWrappingBehaviourWrapLocationParams WrapLocation;                                             // 0x0060(0x00E0) (Transient)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourTentacleHeadParams
// 0x0048
struct FKrakenShipWrappingBehaviourTentacleHeadParams
{
	class UClass*                                      TentacleType;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           DamageRequiredToRelocate;                                 // 0x0008(0x0030) (Edit, DisableEditOnInstance)
	float                                              RelocationThreshold;                                      // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfSwitchingSides;                                   // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfSelectingNearLocationAfterSwitchingSides;         // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfSelectingSelectingDifferentDistanceFromShipWhenRemaningOnSameSide;// 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourShakeAttackParams
// 0x0068
struct FKrakenShipWrappingBehaviourShakeAttackParams
{
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenShakeAttackAttempts;                           // 0x0000(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           AttackDuration;                                           // 0x0030(0x0030) (Edit, DisableEditOnInstance)
	uint32_t                                           MaxFailedShakeAttackAttempts;                             // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfShake;                                            // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourHeavyAttackParams
// 0x00A0
struct FKrakenShipWrappingBehaviourHeavyAttackParams
{
	struct FWeightedProbabilityRangeOfRanges           AttackDuration;                                           // 0x0000(0x0030) (Edit, DisableEditOnInstance)
	float                                              ChanceOfEnteringHeavyAttack;                              // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKnockBackInfo                              ExteriorKnockbackParams;                                  // 0x0034(0x0034) (Edit, DisableEditOnInstance)
	struct FKnockBackInfo                              InteriorKnockbackParams;                                  // 0x0068(0x0034) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourDamageParams
// 0x0070
struct FKrakenShipWrappingBehaviourDamageParams
{
	float                                              ChanceOfDamagingBottomDeckDamageHoles;                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceThatExistingHolesWillBeDamaged;                     // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LevelsOfDamage;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           NumHolesToDamageRange;                                    // 0x0010(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           DamageIntervalRange;                                      // 0x0040(0x0030) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourHealthParams
// 0x0038
struct FKrakenShipWrappingBehaviourHealthParams
{
	struct FWeightedProbabilityRangeOfRanges           HealthReductionRequiredToUnwrapTheShipRange;              // 0x0000(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourParams
// 0x03F0
struct FKrakenShipWrappingBehaviourParams
{
	class UClass*                                      ShipSize;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FKrakenShipWrappingBehaviourWarningParams   WarningParams;                                            // 0x0010(0x00A0) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourWrapParams      WrapParams;                                               // 0x00B0(0x0140) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourTentacleHeadParams TentacleHeadParams;                                       // 0x01F0(0x0048) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourShakeAttackParams ShakeAttackParams;                                        // 0x0238(0x0068) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourHeavyAttackParams HeavyAttackParams;                                        // 0x02A0(0x00A0) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourDamageParams    DamageParams;                                             // 0x0340(0x0070) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourHealthParams    HealthParams;                                             // 0x03B0(0x0038) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET
};

// ScriptStruct Kraken.MurkAggregateTickFunction
// 0x0018 (0x0060 - 0x0048)
struct FMurkAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenWorldSettingsParams
// 0x0001
struct FKrakenWorldSettingsParams
{
	bool                                               KrakenEnabled;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.EventKrakenTentacleDestroyed
// 0x0008
struct FEventKrakenTentacleDestroyed
{
	class AActor*                                      KillingBlowInstigator;                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.EventKrakenDespawned
// 0x0001
struct FEventKrakenDespawned
{
	TEnumAsByte<EKrakenDespawnReason>                  DespawnReason;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.EventKrakenSpawned
// 0x0018
struct FEventKrakenSpawned
{
	class AShip*                                       PrimaryShipTarget;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ConfigSpawnId;                                            // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.EventKrakenShipWrappingTentacleStateChanged
// 0x0002
struct FEventKrakenShipWrappingTentacleStateChanged
{
	TEnumAsByte<EKrakenShipWrappingTentacleState>      PreviousState;                                            // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EKrakenShipWrappingTentacleState>      NewState;                                                 // 0x0001(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Kraken.EventKrakenTentaclePreUninitializeComponents
// 0x0001
struct FEventKrakenTentaclePreUninitializeComponents
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenTentacleDestroyedTelemetryEvent
// 0x0010
struct FKrakenTentacleDestroyedTelemetryEvent
{
	class FString                                      KrakenId;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Kraken.KrakenDespawnTelemetryEvent
// 0x0018
struct FKrakenDespawnTelemetryEvent
{
	class FString                                      KrakenId;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<EKrakenDespawnReason>                  KrakenDespawnReason;                                      // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenSpawnTelemetryEvent
// 0x0020
struct FKrakenSpawnTelemetryEvent
{
	class FString                                      KrakenId;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FGuid                                       ConfigSpawnId;                                            // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
