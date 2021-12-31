#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Kraken_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_Maths_classes.hpp"
#include "SoT_AIModule_classes.hpp"
#include "SoT_StatusEffects_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Kraken.CoordinatedKrakenSpecialEvent
// 0x000C
struct FCoordinatedKrakenSpecialEvent
{
	TEnumAsByte<ECoordinatedKrakenSpecialEventTypes>   Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TimeOffset;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Kraken.CoordinatedKrakenTentacleAction
// 0x0018
struct FCoordinatedKrakenTentacleAction
{
	UClass*                                            State;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TentacleIndex;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeOffset;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Kraken.CoordinatedKrakenHeadAction
// 0x0010
struct FCoordinatedKrakenHeadAction
{
	UClass*                                            State;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeOffset;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Kraken.CoordinatedKrakenExplosionEvent
// 0x000C
struct FCoordinatedKrakenExplosionEvent
{
	int                                                ExplosionPointIndex;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeOffset;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Kraken.CoordinatedKrakenAction
// 0x0330
struct FCoordinatedKrakenAction
{
	FName                                              ActionName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ActionLength;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECoordinatedKrakenActionType>          ActionType;                                               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	TArray<FCoordinatedKrakenSpecialEvent>             SpecialEvents;                                            // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<FCoordinatedKrakenTentacleAction>           TentacleActions;                                          // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<FCoordinatedKrakenHeadAction>               HeadActions;                                              // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<FCoordinatedKrakenExplosionEvent>           ExplosionEvents;                                          // 0x0040(0x0010) (Edit, ZeroConstructor)
	FRuntimeVectorCurve                                TargetActorLocationAnimation;                             // 0x0050(0x0170) (Edit)
	FRuntimeVectorCurve                                TargetActorRotationAnimation;                             // 0x01C0(0x0170) (Edit)
};

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
	FKrakenShipWrappingTentacleAnimationStateParams    Dormant;                                                  // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	FKrakenShipWrappingTentacleAnimationStateParams    Wrapping;                                                 // 0x0010(0x0010) (Edit, DisableEditOnInstance)
	FKrakenShipWrappingTentacleAnimationStateParams    AmbientWobble;                                            // 0x0020(0x0010) (Edit, DisableEditOnInstance)
	FKrakenShipWrappingTentacleAnimationStateParams    EnteringShakeAttack;                                      // 0x0030(0x0010) (Edit, DisableEditOnInstance)
	FKrakenShipWrappingTentacleAnimationStateParams    ShakeAttack;                                              // 0x0040(0x0010) (Edit, DisableEditOnInstance)
	FKrakenShipWrappingTentacleAnimationStateParams    ExitingShakeAttack;                                       // 0x0050(0x0010) (Edit, DisableEditOnInstance)
	FKrakenShipWrappingTentacleAnimationStateParams    HeavyAttack;                                              // 0x0060(0x0010) (Edit, DisableEditOnInstance)
	FKrakenShipWrappingTentacleAnimationStateParams    Unwrapping;                                               // 0x0070(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingTentacleVFXParams
// 0x0028
struct FKrakenShipWrappingTentacleVFXParams
{
	UParticleSystem*                                   VFX;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerTime;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FVector                                            Location;                                                 // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FRotator                                           Rotation;                                                 // 0x0018(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenShipWrappingTentacleParams
// 0x00F0
struct FKrakenShipWrappingTentacleParams
{
	FKrakenShipWrappingTentacleAnimationPhaseCollection AnimationStates;                                          // 0x0000(0x0080) (Edit, DisableEditOnInstance)
	float                                              TimeIntoWrappingToDisableInteractables;                   // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeIntoUnwrappingToEnableInteractables;                  // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeIntoWrappingToEnableCollisions;                       // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeIntoUnwrappingToDisableCollisions;                    // 0x008C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeIntoEnteringShakeAttackToEnableCollisions;            // 0x0090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeIntoExitingShakeAttackToDisableCollisions;            // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HighDetailAnimationStreamingDistance;                     // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	FKrakenShipWrappingTentacleVFXParams               WrappingOutOfWaterSplashVFX;                              // 0x00A0(0x0028) (Edit, DisableEditOnInstance)
	FKrakenShipWrappingTentacleVFXParams               WrappingIntoWaterSplashVFX;                               // 0x00C8(0x0028) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingTentacleAnimationState
// 0x0010
struct FKrakenShipWrappingTentacleAnimationState
{
	uint32_t                                           EpochId;                                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
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
	FWeightedProbabilityRange                          ProbabilityRange;                                         // 0x0008(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenTentacleParams
// 0x0050
struct FKrakenTentacleParams
{
	FWeightedProbabilityRangeOfRanges                  TentacleHealth;                                           // 0x0000(0x0030) (Edit, DisableEditOnInstance)
	FFloatRange                                        InactiveToActiveTentacleTimeout;                          // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
	TArray<UKrakenShipWrappingBehaviourParamsDataAsset*> Params;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipHittingBehaviourParamsCollection
// 0x0010
struct FKrakenShipHittingBehaviourParamsCollection
{
	TArray<UKrakenShipHittingBehaviourParamsDataAsset*> Params;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenBehaviourParams
// 0x0068
struct FKrakenBehaviourParams
{
	TEnumAsByte<EKrakenBehaviourType>                  Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	uint32_t                                           MaxInstancesOfBehaviourAllowed;                           // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FWeightedProbabilityRangeOfRanges                  TargetTimeout;                                            // 0x0008(0x0030) (Edit, DisableEditOnInstance)
	UKrakenIdleBehaviourParamsDataAsset*               IdleParams;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FKrakenShipWrappingBehaviourParamsCollection       ShipWrappingParams;                                       // 0x0040(0x0010) (Edit, DisableEditOnInstance)
	FKrakenShipHittingBehaviourParamsCollection        ShipHittingParams;                                        // 0x0050(0x0010) (Edit, DisableEditOnInstance)
	UKrakenPlayerGrabbingBehaviourParamsDataAsset*     PlayerGrabbingParams;                                     // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenParams
// 0x0160
struct FKrakenParams
{
	UClass*                                            MurkClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UGeneratedLocationsDataAsset*                      PotentialTentacleSpawnLocations;                          // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FWeightedProbabilityRange                          NumberOfTentaclesToSpawn;                                 // 0x0010(0x0020) (Edit, DisableEditOnInstance)
	TArray<FKrakenTentaclesChanceParams>               TentaclesRequiredToDismissKraken;                         // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              TickFrequencyToLookForNewBehaviours;                      // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OperatingAreaRadius;                                      // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumOperatingAreaMovementDeltaToInvalidateLocations;   // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RadiusToleranceBeforeOperatingAreaDespawn;                // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<FKrakenTentaclesChanceParams>               NumTentacleInstancesToAssignToShip;                       // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              GlobalPlayRateScale;                                      // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FFloatRange                                        NewTargetTimeout;                                         // 0x0064(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FFloatRange                                        UnavailableTargetTimeout;                                 // 0x0074(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	FKrakenTentacleParams                              TentacleParams;                                           // 0x0088(0x0050) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  DismissTimeoutWhenNoTargets;                              // 0x00D8(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  DismissTimeoutWithNewTarget;                              // 0x0108(0x0030) (Edit, DisableEditOnInstance)
	TArray<FKrakenWeightedBehaviour>                   ShipInteractingBehaviourWeights;                          // 0x0138(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<FKrakenBehaviourParams>                     Behaviours;                                               // 0x0148(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              DamageAmountToTriggerAudioComponentNotification;          // 0x0158(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenAnimatedTentacleAnimationBoneFrame
// 0x000C
struct FKrakenAnimatedTentacleAnimationBoneFrame
{
	FVector                                            BoneLocation;                                             // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleAnimationBoneTrack
// 0x0010
struct FKrakenAnimatedTentacleAnimationBoneTrack
{
	TArray<FKrakenAnimatedTentacleAnimationBoneFrame>  Frames;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleMappedAnimation
// 0x0010
struct FKrakenAnimatedTentacleMappedAnimation
{
	UAnimSequence*                                     ClientAnimation;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UKrakenAnimatedTentacleAnimationDataAsset*         AnimationAsset;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleAnimationSpecBone
// 0x0008
struct FKrakenAnimatedTentacleAnimationSpecBone
{
	FName                                              BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleTransitionAnimation
// 0x0020
struct FKrakenAnimatedTentacleTransitionAnimation
{
	UClass*                                            FromState;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BranchAnimationTimeRemaining;                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<UAnimSequence*>                             TransitionAnimations;                                     // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleStateAnimationMapping
// 0x0028
struct FKrakenAnimatedTentacleStateAnimationMapping
{
	UClass*                                            State;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAnimSequence*                                     Animation;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Loop;                                                     // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<FKrakenAnimatedTentacleTransitionAnimation> Transitions;                                              // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Kraken.KrakenHeadTransitionAnimation
// 0x0010
struct FKrakenHeadTransitionAnimation
{
	UClass*                                            FromState;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAnimSequence*                                     TransitionAnimation;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenHeadStateAnimationMapping
// 0x0028
struct FKrakenHeadStateAnimationMapping
{
	UClass*                                            State;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAnimSequence*                                     Animation;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Loop;                                                     // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<FKrakenHeadTransitionAnimation>             Transitions;                                              // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Kraken.HeadStateChangeRequest
// 0x0018
struct FHeadStateChangeRequest
{
	UClass*                                            RequestedState;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FGuid                                              StateChangeID;                                            // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenHeadHealthPair
// 0x0008
struct FKrakenHeadHealthPair
{
	int                                                PlayerCount;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KrakenHeadHealth;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenHeadHitReactAnimations
// 0x0010
struct FKrakenHeadHitReactAnimations
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	UAnimSequence*                                     HitReactAnimation;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
	UEnvQuery*                                         InactiveSpawnQueryTemplate;                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfCannonSideSpawn;                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	UEnvQuery*                                         ActiveCannonSideSpawnQueryTemplate;                       // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UEnvQuery*                                         ActiveNonCannonSideSpawnQueryTemplate;                    // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            TentacleClass;                                            // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
	TArray<FKrakenTentacleBehaviourActionChances>      OnDamageActionChances;                                    // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  TimeToSpendInInactiveState;                               // 0x0060(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  TimeToSpendInActiveState;                                 // 0x0090(0x0030) (Edit, DisableEditOnInstance)
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
	UClass*                                            StateToTransitionTo;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenPlayerGrabbingBehaviourParams
// 0x0028 (0x00E8 - 0x00C0)
struct FKrakenPlayerGrabbingBehaviourParams : public FKrakenTentacleBehaviourParams
{
	float                                              MinUnsuccessfulTargetTimeout;                             // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxUnsuccessfulTargetTimeout;                             // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<FKrakenPlayerGrabbingHoldingStateTransitionChance> HoldingTransitionChances;                                 // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
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
	FWeightedProbabilityRangeOfRanges                  TimeBetweenSpawnAttemptsRange;                            // 0x0010(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  TimeBetweenSpawnAttemptsPostSpawnFailure;                 // 0x0040(0x0030) (Edit, DisableEditOnInstance)
	float                                              SpawnChance;                                              // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxConsecutiveFailedSpawnAttempts;                        // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UEnvQuery*                                         SpawnLocationQuery;                                       // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenServiceShipParams
// 0x0020
struct FKrakenServiceShipParams
{
	FName                                              Feature;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<UClass*>                                    ValidShipTypes;                                           // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	UKrakenParamsDataAsset*                            KrakenParams;                                             // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenServiceParams
// 0x00A0
struct FKrakenServiceParams
{
	UClass*                                            KrakenType;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FKrakenServiceSpawnParams                          SpawnParams;                                              // 0x0008(0x0080) (Edit, DisableEditOnInstance)
	UKrakenParamsDataAsset*                            DefaultKrakenParams;                                      // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<FKrakenServiceShipParams>                   KrakenParams;                                             // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipHittingBehaviourImpactParams
// 0x00A0
struct FKrakenShipHittingBehaviourImpactParams
{
	int                                                Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	FTransform                                         TentacleTransform;                                        // 0x0010(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	FVector                                            ImpactLocation;                                           // 0x0040(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FVector                                            ImpactForce;                                              // 0x004C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FVector                                            DamageLocation;                                           // 0x0058(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	FWeightedProbabilityRangeOfRanges                  NumZonesToDamage;                                         // 0x0068(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenShipHittingBehaviourParams
// 0x0060
struct FKrakenShipHittingBehaviourParams
{
	UClass*                                            ShipSize;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            TentacleType;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FWeightedProbabilityRangeOfRanges                  DamageRequiredToCancelImpact;                             // 0x0010(0x0030) (Edit, DisableEditOnInstance)
	float                                              CancellationThreshold;                                    // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactTime;                                               // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LevelsOfDamage;                                           // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<FKrakenShipHittingBehaviourImpactParams>    Configurations;                                           // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourNamedTransform
// 0x0040
struct FKrakenShipWrappingBehaviourNamedTransform
{
	FName                                              Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	FTransform                                         Transform;                                                // 0x0010(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWarningParams
// 0x00A0
struct FKrakenShipWrappingBehaviourWarningParams
{
	UClass*                                            TentacleType;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TickDuration;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	FFloatRange                                        TentacleTimeoutRange;                                     // 0x000C(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	FWeightedProbabilityRangeOfRanges                  TentacleHealthRange;                                      // 0x0020(0x0030) (Edit, DisableEditOnInstance)
	TArray<FKrakenShipWrappingBehaviourNamedTransform> TentacleLocations;                                        // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              TentacleTimeout;                                          // 0x0060(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TentacleHealth;                                           // 0x0064(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	FTransform                                         TentacleLocation;                                         // 0x0070(0x0030) (Transient, IsPlainOldData)
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
	TArray<FKrakenShipWrappingBehaviourNamedTransform> Near;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<FKrakenShipWrappingBehaviourNamedTransform> Far;                                                      // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
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
	UCurveVector*                                      TorqueCurve;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaselineTorque;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<FKrakenDynamicsStateEvent>                  Events;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenDynamicsStateParams
// 0x0010
struct FKrakenDynamicsStateParams
{
	TArray<FKrakenDynamicsStateFragmentParams>         FragmentParams;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenDynamicsParams
// 0x0050
struct FKrakenDynamicsParams
{
	FKrakenDynamicsStateParams                         AmbientWobble;                                            // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	FKrakenDynamicsStateParams                         EnteringShakeAttack;                                      // 0x0010(0x0010) (Edit, DisableEditOnInstance)
	FKrakenDynamicsStateParams                         ShakeAttack;                                              // 0x0020(0x0010) (Edit, DisableEditOnInstance)
	FKrakenDynamicsStateParams                         ExitingShakeAttack;                                       // 0x0030(0x0010) (Edit, DisableEditOnInstance)
	FKrakenDynamicsStateParams                         HeavyAttack;                                              // 0x0040(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapLocationParams
// 0x00E0
struct FKrakenShipWrappingBehaviourWrapLocationParams
{
	UClass*                                            TentacleType;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FVector                                            WrapLocationAnchorPoint;                                  // 0x0008(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	FTransform                                         TentacleHeadHoldShipLocation;                             // 0x0020(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	FKrakenShipWrappingBehaviourTentacleHeadLocations  PortTentacleHeadLocations;                                // 0x0050(0x0020) (Edit, DisableEditOnInstance)
	FKrakenShipWrappingBehaviourTentacleHeadLocations  StarboardTentacleHeadLocations;                           // 0x0070(0x0020) (Edit, DisableEditOnInstance)
	FKrakenDynamicsParams                              DynamicsParams;                                           // 0x0090(0x0050) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapLocationWeightedParams
// 0x00F0
struct FKrakenShipWrappingBehaviourWrapLocationWeightedParams
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	FKrakenShipWrappingBehaviourWrapLocationParams     Params;                                                   // 0x0010(0x00E0) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapParams
// 0x0140
struct FKrakenShipWrappingBehaviourWrapParams
{
	FFloatRange                                        WrapTimeBeforeGivingUpRange;                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShipInternalWaterLevelToTriggerUnwrap;                    // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	FKrakenAnchorDynamicsParams                        AnchorDynamicsParams;                                     // 0x0018(0x0028) (Edit, DisableEditOnInstance)
	TArray<FKrakenShipWrappingBehaviourWrapLocationWeightedParams> WrapLocations;                                            // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              WrapTimeBeforeGivingUp;                                   // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
	FKrakenShipWrappingBehaviourWrapLocationParams     WrapLocation;                                             // 0x0060(0x00E0) (Transient)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourTentacleHeadParams
// 0x0048
struct FKrakenShipWrappingBehaviourTentacleHeadParams
{
	UClass*                                            TentacleType;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FWeightedProbabilityRangeOfRanges                  DamageRequiredToRelocate;                                 // 0x0008(0x0030) (Edit, DisableEditOnInstance)
	float                                              RelocationThreshold;                                      // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfSwitchingSides;                                   // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfSelectingNearLocationAfterSwitchingSides;         // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfSelectingSelectingDifferentDistanceFromShipWhenRemaningOnSameSide;// 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourShakeAttackParams
// 0x0068
struct FKrakenShipWrappingBehaviourShakeAttackParams
{
	FWeightedProbabilityRangeOfRanges                  TimeBetweenShakeAttackAttempts;                           // 0x0000(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  AttackDuration;                                           // 0x0030(0x0030) (Edit, DisableEditOnInstance)
	uint32_t                                           MaxFailedShakeAttackAttempts;                             // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfShake;                                            // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourHeavyAttackParams
// 0x00D8
struct FKrakenShipWrappingBehaviourHeavyAttackParams
{
	FWeightedProbabilityRangeOfRanges                  AttackDuration;                                           // 0x0000(0x0030) (Edit, DisableEditOnInstance)
	float                                              ChanceOfEnteringHeavyAttack;                              // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FKnockBackInfo                                     ExteriorKnockbackParams;                                  // 0x0034(0x0050) (Edit, DisableEditOnInstance)
	FKnockBackInfo                                     InteriorKnockbackParams;                                  // 0x0084(0x0050) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourDamageParams
// 0x0070
struct FKrakenShipWrappingBehaviourDamageParams
{
	float                                              ChanceOfDamagingBottomDeckDamageHoles;                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceThatExistingHolesWillBeDamaged;                     // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LevelsOfDamage;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	FWeightedProbabilityRangeOfRanges                  NumHolesToDamageRange;                                    // 0x0010(0x0030) (Edit, DisableEditOnInstance)
	FWeightedProbabilityRangeOfRanges                  DamageIntervalRange;                                      // 0x0040(0x0030) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourHealthParams
// 0x0038
struct FKrakenShipWrappingBehaviourHealthParams
{
	FWeightedProbabilityRangeOfRanges                  HealthReductionRequiredToUnwrapTheShipRange;              // 0x0000(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourParams
// 0x0420
struct FKrakenShipWrappingBehaviourParams
{
	UClass*                                            ShipSize;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	FKrakenShipWrappingBehaviourWarningParams          WarningParams;                                            // 0x0010(0x00A0) (Edit, DisableEditOnInstance)
	FKrakenShipWrappingBehaviourWrapParams             WrapParams;                                               // 0x00B0(0x0140) (Edit, DisableEditOnInstance)
	FKrakenShipWrappingBehaviourTentacleHeadParams     TentacleHeadParams;                                       // 0x01F0(0x0048) (Edit, DisableEditOnInstance)
	FKrakenShipWrappingBehaviourShakeAttackParams      ShakeAttackParams;                                        // 0x0238(0x0068) (Edit, DisableEditOnInstance)
	FKrakenShipWrappingBehaviourHeavyAttackParams      HeavyAttackParams;                                        // 0x02A0(0x00D8) (Edit, DisableEditOnInstance)
	FKrakenShipWrappingBehaviourDamageParams           DamageParams;                                             // 0x0378(0x0070) (Edit, DisableEditOnInstance)
	FKrakenShipWrappingBehaviourHealthParams           HealthParams;                                             // 0x03E8(0x0038) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenWorldSettingsParams
// 0x0001
struct FKrakenWorldSettingsParams
{
	bool                                               KrakenEnabled;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.CoordinatedKrakenPhaseAssetEntry
// 0x0040
struct FCoordinatedKrakenPhaseAssetEntry
{
	FTransform                                         RelativeAnimationOrigin;                                  // 0x0000(0x0030) (Edit, IsPlainOldData)
	UCoordinatedKrakenPhaseActionsDataAsset*           Asset;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleTriggerHitReaction
// 0x0004
struct FEventKrakenAnimatedTentacleTriggerHitReaction
{
	int                                                CollisionBoneIndex;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleTentacleDead
// 0x0004
struct FEventKrakenAnimatedTentacleTentacleDead
{
	int                                                TentacleIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleTakenDamage
// 0x0004
struct FEventKrakenAnimatedTentacleTakenDamage
{
	int                                                TentacleIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleTargetVomit
// 0x0004
struct FEventKrakenAnimatedTentacleTargetVomit
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Kraken.EventKrakenAnimatedTentaclePlayerInMouthEnd
// 0x0001
struct FEventKrakenAnimatedTentaclePlayerInMouthEnd
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Kraken.EventKrakenAnimatedTentaclePlayerInMouthBegin
// 0x0001
struct FEventKrakenAnimatedTentaclePlayerInMouthBegin
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingEnd
// 0x0001
struct FEventKrakenAnimatedTentacleSuckingEnd
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingStart
// 0x0001
struct FEventKrakenAnimatedTentacleSuckingStart
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Kraken.EventKrakenWrappingTentacleTellEnd
// 0x0001
struct FEventKrakenWrappingTentacleTellEnd
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Kraken.EventKrakenWrappingTentacleTellBegin
// 0x0001
struct FEventKrakenWrappingTentacleTellBegin
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingTellEnd
// 0x0001
struct FEventKrakenAnimatedTentacleSuckingTellEnd
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingTellBegin
// 0x0001
struct FEventKrakenAnimatedTentacleSuckingTellBegin
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingTell
// 0x0001
struct FEventKrakenAnimatedTentacleSuckingTell
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleSubmerge
// 0x0001
struct FEventKrakenAnimatedTentacleSubmerge
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleEmerge
// 0x0001
struct FEventKrakenAnimatedTentacleEmerge
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Kraken.EventKrakenTentacleEndPlay
// 0x0001
struct FEventKrakenTentacleEndPlay
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleAnimationStopped
// 0x0001
struct FEventKrakenAnimatedTentacleAnimationStopped
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleAnimationStarted
// 0x0010
struct FEventKrakenAnimatedTentacleAnimationStarted
{
	UAnimSequence*                                     Animation;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleAuthoritativeAnimationTime
// 0x0004
struct FEventKrakenAnimatedTentacleAuthoritativeAnimationTime
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleStateEntered
// 0x0018
struct FEventKrakenAnimatedTentacleStateEntered
{
	UClass*                                            State;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	UClass*                                            PreviousState;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               SkipTransitions;                                          // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Kraken.EventKrakenHeadHit
// 0x0001
struct FEventKrakenHeadHit
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Kraken.EventCoordinatedKrakenPhaseEnded
// 0x0001
struct FEventCoordinatedKrakenPhaseEnded
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Kraken.EventKrakenTentacleDestroyed
// 0x0008
struct FEventKrakenTentacleDestroyed
{
	AActor*                                            KillingBlowInstigator;                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
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
	AShip*                                             PrimaryShipTarget;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FGuid                                              ConfigSpawnId;                                            // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
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
	FString                                            KrakenId;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Kraken.KrakenDespawnTelemetryEvent
// 0x0018
struct FKrakenDespawnTelemetryEvent
{
	FString                                            KrakenId;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<EKrakenDespawnReason>                  KrakenDespawnReason;                                      // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenSpawnTelemetryEvent
// 0x0020
struct FKrakenSpawnTelemetryEvent
{
	FString                                            KrakenId;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	FGuid                                              ConfigSpawnId;                                            // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
